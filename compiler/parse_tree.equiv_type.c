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

#line 246 "equiv_type.m"
static void MR_CALL 
parse_tree__equiv_type__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_95_95_67_111_109_112_97_114_101_95_95_95_112_97_114_115_101_95_116_114_101_101_95_95_101_113_117_105_118_95_116_121_112_101_95_95_115_101_99_116_105_111_110_95_109_97_121_98_101_95_114_101_99_111_114_100_95_115_121_109_95_110_97_109_101_95_117_115_101_95_49_95_95_91_49_93_95_48_3_p_0(
#line 246 "equiv_type.m"
  MR_Word * parse_tree__equiv_type__HeadVar__1_1,
#line 246 "equiv_type.m"
  MR_Word parse_tree__equiv_type__HeadVar__2_2,
#line 246 "equiv_type.m"
  MR_Word parse_tree__equiv_type__HeadVar__3_3);

#line 246 "equiv_type.m"
static MR_bool MR_CALL 
parse_tree__equiv_type__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_95_95_85_110_105_102_121_95_95_95_112_97_114_115_101_95_116_114_101_101_95_95_101_113_117_105_118_95_116_121_112_101_95_95_115_101_99_116_105_111_110_95_109_97_121_98_101_95_114_101_99_111_114_100_95_115_121_109_95_110_97_109_101_95_117_115_101_95_49_95_95_91_49_93_95_48_2_p_0(
#line 246 "equiv_type.m"
  MR_Word parse_tree__equiv_type__HeadVar__1_1,
#line 246 "equiv_type.m"
  MR_Word parse_tree__equiv_type__HeadVar__2_2);

#line 1394 "equiv_type.m"
static void MR_CALL 
parse_tree__equiv_type__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_114_101_112_108_97_99_101_95_105_110_95_112_114_101_100_95_109_111_100_101_95_95_91_49_93_95_48_18_p_0(
#line 1394 "equiv_type.m"
  MR_Word parse_tree__equiv_type__InstEqvMap_20,
#line 1394 "equiv_type.m"
  MR_Word parse_tree__equiv_type__PredName_21,
#line 1394 "equiv_type.m"
  MR_Integer parse_tree__equiv_type__OrigArity_22,
#line 1394 "equiv_type.m"
  MR_Word parse_tree__equiv_type__Context_23,
#line 1394 "equiv_type.m"
  MR_Word parse_tree__equiv_type__DeclType_24,
#line 1394 "equiv_type.m"
  MR_Word * parse_tree__equiv_type__ExtraModes_25,
#line 1394 "equiv_type.m"
  MR_Word parse_tree__equiv_type__MaybePredOrFunc0_26,
#line 1394 "equiv_type.m"
  MR_Word * parse_tree__equiv_type__MaybePredOrFunc_27,
#line 1394 "equiv_type.m"
  MR_Word parse_tree__equiv_type__MaybeWithInst0_28,
#line 1394 "equiv_type.m"
  MR_Word * parse_tree__equiv_type__MaybeWithInst_29,
#line 1394 "equiv_type.m"
  MR_Word parse_tree__equiv_type__STATE_VARIABLE_MaybeDetism_0_50,
#line 1394 "equiv_type.m"
  MR_Word * parse_tree__equiv_type__STATE_VARIABLE_MaybeDetism_51,
#line 1394 "equiv_type.m"
  MR_Word parse_tree__equiv_type__STATE_VARIABLE_EquivTypeInfo_0_52,
#line 1394 "equiv_type.m"
  MR_Word * parse_tree__equiv_type__STATE_VARIABLE_EquivTypeInfo_53,
#line 1394 "equiv_type.m"
  MR_Word parse_tree__equiv_type__STATE_VARIABLE_UsedModules_0_54,
#line 1394 "equiv_type.m"
  MR_Word * parse_tree__equiv_type__STATE_VARIABLE_UsedModules_55,
#line 1394 "equiv_type.m"
  MR_Word * parse_tree__equiv_type__Specs_33);

#line 1256 "equiv_type.m"
static void MR_CALL 
parse_tree__equiv_type__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_114_101_112_108_97_99_101_95_105_110_95_105_110_115_116_95_108_111_99_97_116_105_111_110_95_95_91_49_93_95_48_9_p_0(
#line 1256 "equiv_type.m"
  MR_Word parse_tree__equiv_type__Inst0_11,
#line 1256 "equiv_type.m"
  MR_Word parse_tree__equiv_type__InstEqvMap_12,
#line 1256 "equiv_type.m"
  MR_Word parse_tree__equiv_type__ExpandedInstIds_13,
#line 1256 "equiv_type.m"
  MR_Word * parse_tree__equiv_type__Inst_14,
#line 1256 "equiv_type.m"
  MR_Word parse_tree__equiv_type__STATE_VARIABLE_EquivTypeInfo_0_26,
#line 1256 "equiv_type.m"
  MR_Word * parse_tree__equiv_type__STATE_VARIABLE_EquivTypeInfo_27,
#line 1256 "equiv_type.m"
  MR_Word parse_tree__equiv_type__STATE_VARIABLE_UsedModules_0_28,
#line 1256 "equiv_type.m"
  MR_Word * parse_tree__equiv_type__STATE_VARIABLE_UsedModules_29);

#line 1246 "equiv_type.m"
static void MR_CALL 
parse_tree__equiv_type__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_114_101_112_108_97_99_101_95_105_110_95_105_110_115_116_95_95_91_49_93_95_48_8_p_0(
#line 1246 "equiv_type.m"
  MR_Word parse_tree__equiv_type__Inst0_10,
#line 1246 "equiv_type.m"
  MR_Word parse_tree__equiv_type__InstEqvMap_11,
#line 1246 "equiv_type.m"
  MR_Word * parse_tree__equiv_type__Inst_12,
#line 1246 "equiv_type.m"
  MR_Word parse_tree__equiv_type__STATE_VARIABLE_EquivTypeInfo_0_15,
#line 1246 "equiv_type.m"
  MR_Word * parse_tree__equiv_type__STATE_VARIABLE_EquivTypeInfo_16,
#line 1246 "equiv_type.m"
  MR_Word parse_tree__equiv_type__STATE_VARIABLE_UsedModules_0_17,
#line 1246 "equiv_type.m"
  MR_Word * parse_tree__equiv_type__STATE_VARIABLE_UsedModules_18);

#line 730 "equiv_type.m"
static void MR_CALL 
parse_tree__equiv_type__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_114_101_112_108_97_99_101_95_105_110_95_101_118_101_110_116_95_97_116_116_114_115_95_95_91_52_93_95_48_10_p_0(
#line 730 "equiv_type.m"
  MR_Word parse_tree__equiv_type__HeadVar__1_1,
#line 730 "equiv_type.m"
  MR_Word * parse_tree__equiv_type__HeadVar__2_2,
#line 730 "equiv_type.m"
  MR_Word parse_tree__equiv_type__HeadVar__3_3,
#line 730 "equiv_type.m"
  MR_Word parse_tree__equiv_type__STATE_VARIABLE_RecompInfo_0_5,
#line 730 "equiv_type.m"
  MR_Word * parse_tree__equiv_type__STATE_VARIABLE_RecompInfo_6,
#line 730 "equiv_type.m"
  MR_Word parse_tree__equiv_type__STATE_VARIABLE_UsedModules_0_7,
#line 730 "equiv_type.m"
  MR_Word * parse_tree__equiv_type__STATE_VARIABLE_UsedModules_8,
#line 730 "equiv_type.m"
  MR_Word parse_tree__equiv_type__STATE_VARIABLE_Specs_0_9,
#line 730 "equiv_type.m"
  MR_Word * parse_tree__equiv_type__STATE_VARIABLE_Specs_10);

#line 699 "equiv_type.m"
static void MR_CALL 
parse_tree__equiv_type__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_114_101_112_108_97_99_101_95_105_110_95_101_118_101_110_116_95_115_112_101_99_115_95_95_91_52_93_95_48_10_p_0(
#line 699 "equiv_type.m"
  MR_Word parse_tree__equiv_type__HeadVar__1_1,
#line 699 "equiv_type.m"
  MR_Word * parse_tree__equiv_type__HeadVar__2_2,
#line 699 "equiv_type.m"
  MR_Word parse_tree__equiv_type__TypeEqvMap_3,
#line 699 "equiv_type.m"
  MR_Word parse_tree__equiv_type__STATE_VARIABLE_RecompInfo_0_5,
#line 699 "equiv_type.m"
  MR_Word * parse_tree__equiv_type__STATE_VARIABLE_RecompInfo_6,
#line 699 "equiv_type.m"
  MR_Word parse_tree__equiv_type__STATE_VARIABLE_UsedModules_0_7,
#line 699 "equiv_type.m"
  MR_Word * parse_tree__equiv_type__STATE_VARIABLE_UsedModules_8,
#line 699 "equiv_type.m"
  MR_Word parse_tree__equiv_type__STATE_VARIABLE_Specs_0_9,
#line 699 "equiv_type.m"
  MR_Word * parse_tree__equiv_type__STATE_VARIABLE_Specs_10);

#line 563 "equiv_type.m"
static void MR_CALL 
parse_tree__equiv_type__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_114_101_112_108_97_99_101_95_105_110_95_112_114_97_103_109_97_95_105_110_102_111_95_95_91_52_93_95_48_11_p_0(
#line 563 "equiv_type.m"
  MR_Word parse_tree__equiv_type__ModuleName_12,
#line 563 "equiv_type.m"
  MR_Word parse_tree__equiv_type__MaybeRecord_13,
#line 563 "equiv_type.m"
  MR_Word parse_tree__equiv_type__TypeEqvMap_14,
#line 563 "equiv_type.m"
  MR_Word parse_tree__equiv_type__Info0_16,
#line 563 "equiv_type.m"
  MR_Word * parse_tree__equiv_type__Info_17,
#line 563 "equiv_type.m"
  MR_Word parse_tree__equiv_type__STATE_VARIABLE_RecompInfo_0_96,
#line 563 "equiv_type.m"
  MR_Word * parse_tree__equiv_type__STATE_VARIABLE_RecompInfo_97,
#line 563 "equiv_type.m"
  MR_Word parse_tree__equiv_type__STATE_VARIABLE_UsedModules_0_98,
#line 563 "equiv_type.m"
  MR_Word * parse_tree__equiv_type__STATE_VARIABLE_UsedModules_99,
#line 563 "equiv_type.m"
  MR_Word * parse_tree__equiv_type__HeadVar__11_11);

#line 849 "equiv_type.m"
static void MR_CALL 
parse_tree__equiv_type__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_114_101_112_108_97_99_101_95_105_110_95_105_110_115_116_97_110_99_101_95_105_110_102_111_95_95_91_52_93_95_48_11_p_0_1(
#line 849 "equiv_type.m"
  MR_Box parse_tree__equiv_type__closure_arg,
#line 849 "equiv_type.m"
  MR_Box parse_tree__equiv_type__wrapper_arg_1,
#line 849 "equiv_type.m"
  MR_Box * parse_tree__equiv_type__wrapper_arg_2,
#line 849 "equiv_type.m"
  MR_Box parse_tree__equiv_type__wrapper_arg_3,
#line 849 "equiv_type.m"
  MR_Box * parse_tree__equiv_type__wrapper_arg_4,
#line 849 "equiv_type.m"
  MR_Box parse_tree__equiv_type__wrapper_arg_5,
#line 849 "equiv_type.m"
  MR_Box * parse_tree__equiv_type__wrapper_arg_6,
#line 849 "equiv_type.m"
  MR_Box parse_tree__equiv_type__wrapper_arg_7,
#line 849 "equiv_type.m"
  MR_Box * parse_tree__equiv_type__wrapper_arg_8);

#line 529 "equiv_type.m"
static void MR_CALL 
parse_tree__equiv_type__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_114_101_112_108_97_99_101_95_105_110_95_105_110_115_116_97_110_99_101_95_105_110_102_111_95_95_91_52_93_95_48_11_p_0(
#line 529 "equiv_type.m"
  MR_Word parse_tree__equiv_type__ModuleName_12,
#line 529 "equiv_type.m"
  MR_Word parse_tree__equiv_type__MaybeRecord_13,
#line 529 "equiv_type.m"
  MR_Word parse_tree__equiv_type__TypeEqvMap_14,
#line 529 "equiv_type.m"
  MR_Word parse_tree__equiv_type__InstanceInfo0_16,
#line 529 "equiv_type.m"
  MR_Word * parse_tree__equiv_type__InstanceInfo_17,
#line 529 "equiv_type.m"
  MR_Word parse_tree__equiv_type__STATE_VARIABLE_RecompInfo_0_40,
#line 529 "equiv_type.m"
  MR_Word * parse_tree__equiv_type__STATE_VARIABLE_RecompInfo_41,
#line 529 "equiv_type.m"
  MR_Word parse_tree__equiv_type__STATE_VARIABLE_UsedModules_0_42,
#line 529 "equiv_type.m"
  MR_Word * parse_tree__equiv_type__STATE_VARIABLE_UsedModules_43,
#line 529 "equiv_type.m"
  MR_Word * parse_tree__equiv_type__HeadVar__11_11);

#line 459 "equiv_type.m"
static void MR_CALL 
parse_tree__equiv_type__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_114_101_112_108_97_99_101_95_105_110_95_109_111_100_101_95_100_101_99_108_95_105_110_102_111_95_95_91_50_44_32_51_93_95_48_11_p_0(
#line 459 "equiv_type.m"
  MR_Word parse_tree__equiv_type__ModuleName_12,
#line 459 "equiv_type.m"
  MR_Word parse_tree__equiv_type__InstEqvMap_15,
#line 459 "equiv_type.m"
  MR_Word parse_tree__equiv_type__Info0_16,
#line 459 "equiv_type.m"
  MR_Word * parse_tree__equiv_type__Info_17,
#line 459 "equiv_type.m"
  MR_Word parse_tree__equiv_type__STATE_VARIABLE_RecompInfo_0_43,
#line 459 "equiv_type.m"
  MR_Word * parse_tree__equiv_type__STATE_VARIABLE_RecompInfo_44,
#line 459 "equiv_type.m"
  MR_Word parse_tree__equiv_type__STATE_VARIABLE_UsedModules_0_45,
#line 459 "equiv_type.m"
  MR_Word * parse_tree__equiv_type__STATE_VARIABLE_UsedModules_46,
#line 459 "equiv_type.m"
  MR_Word * parse_tree__equiv_type__Specs_20);

#line 195 "equiv_type.m"
static void MR_CALL 
parse_tree__equiv_type__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_98_117_105_108_100_95_101_113_118_95_109_97_112_115_95_105_110_95_105_116_101_109_95_98_108_111_99_107_115_95_95_91_49_93_95_48_5_p_0(
#line 195 "equiv_type.m"
  MR_Word parse_tree__equiv_type__HeadVar__1_1,
#line 195 "equiv_type.m"
  MR_Word parse_tree__equiv_type__STATE_VARIABLE_TypeEqvMap_0_2,
#line 195 "equiv_type.m"
  MR_Word * parse_tree__equiv_type__STATE_VARIABLE_TypeEqvMap_3,
#line 195 "equiv_type.m"
  MR_Word parse_tree__equiv_type__STATE_VARIABLE_InstEqvMap_0_4,
#line 195 "equiv_type.m"
  MR_Word * parse_tree__equiv_type__STATE_VARIABLE_InstEqvMap_5);

#line 276 "equiv_type.m"
static void MR_CALL 
parse_tree__equiv_type__replace_in_item_blocks__ho4_13_p_0(
#line 276 "equiv_type.m"
  MR_Word parse_tree__equiv_type__ModuleName_1,
#line 276 "equiv_type.m"
  MR_Word parse_tree__equiv_type__TypeEqvMap_2,
#line 276 "equiv_type.m"
  MR_Word parse_tree__equiv_type__InstEqvMap_3,
#line 276 "equiv_type.m"
  MR_Word parse_tree__equiv_type__HeadVar__5_5,
#line 276 "equiv_type.m"
  MR_Word parse_tree__equiv_type__STATE_VARIABLE_RevReplItemBlocks_0_6,
#line 276 "equiv_type.m"
  MR_Word * parse_tree__equiv_type__STATE_VARIABLE_RevReplItemBlocks_7,
#line 276 "equiv_type.m"
  MR_Word parse_tree__equiv_type__STATE_VARIABLE_RecompInfo_0_8,
#line 276 "equiv_type.m"
  MR_Word * parse_tree__equiv_type__STATE_VARIABLE_RecompInfo_9,
#line 276 "equiv_type.m"
  MR_Word parse_tree__equiv_type__STATE_VARIABLE_UsedModules_0_10,
#line 276 "equiv_type.m"
  MR_Word * parse_tree__equiv_type__STATE_VARIABLE_UsedModules_11,
#line 276 "equiv_type.m"
  MR_Word parse_tree__equiv_type__STATE_VARIABLE_Specs_0_12,
#line 276 "equiv_type.m"
  MR_Word * parse_tree__equiv_type__STATE_VARIABLE_Specs_13);

#line 276 "equiv_type.m"
static void MR_CALL 
parse_tree__equiv_type__replace_in_item_blocks__ho3_13_p_0(
#line 276 "equiv_type.m"
  MR_Word parse_tree__equiv_type__ModuleName_1,
#line 276 "equiv_type.m"
  MR_Word parse_tree__equiv_type__TypeEqvMap_2,
#line 276 "equiv_type.m"
  MR_Word parse_tree__equiv_type__InstEqvMap_3,
#line 276 "equiv_type.m"
  MR_Word parse_tree__equiv_type__HeadVar__5_5,
#line 276 "equiv_type.m"
  MR_Word parse_tree__equiv_type__STATE_VARIABLE_RevReplItemBlocks_0_6,
#line 276 "equiv_type.m"
  MR_Word * parse_tree__equiv_type__STATE_VARIABLE_RevReplItemBlocks_7,
#line 276 "equiv_type.m"
  MR_Word parse_tree__equiv_type__STATE_VARIABLE_RecompInfo_0_8,
#line 276 "equiv_type.m"
  MR_Word * parse_tree__equiv_type__STATE_VARIABLE_RecompInfo_9,
#line 276 "equiv_type.m"
  MR_Word parse_tree__equiv_type__STATE_VARIABLE_UsedModules_0_10,
#line 276 "equiv_type.m"
  MR_Word * parse_tree__equiv_type__STATE_VARIABLE_UsedModules_11,
#line 276 "equiv_type.m"
  MR_Word parse_tree__equiv_type__STATE_VARIABLE_Specs_0_12,
#line 276 "equiv_type.m"
  MR_Word * parse_tree__equiv_type__STATE_VARIABLE_Specs_13);

#line 276 "equiv_type.m"
static void MR_CALL 
parse_tree__equiv_type__replace_in_item_blocks__ho2_13_p_0(
#line 276 "equiv_type.m"
  MR_Word parse_tree__equiv_type__ModuleName_1,
#line 276 "equiv_type.m"
  MR_Word parse_tree__equiv_type__TypeEqvMap_2,
#line 276 "equiv_type.m"
  MR_Word parse_tree__equiv_type__InstEqvMap_3,
#line 276 "equiv_type.m"
  MR_Word parse_tree__equiv_type__HeadVar__5_5,
#line 276 "equiv_type.m"
  MR_Word parse_tree__equiv_type__STATE_VARIABLE_RevReplItemBlocks_0_6,
#line 276 "equiv_type.m"
  MR_Word * parse_tree__equiv_type__STATE_VARIABLE_RevReplItemBlocks_7,
#line 276 "equiv_type.m"
  MR_Word parse_tree__equiv_type__STATE_VARIABLE_RecompInfo_0_8,
#line 276 "equiv_type.m"
  MR_Word * parse_tree__equiv_type__STATE_VARIABLE_RecompInfo_9,
#line 276 "equiv_type.m"
  MR_Word parse_tree__equiv_type__STATE_VARIABLE_UsedModules_0_10,
#line 276 "equiv_type.m"
  MR_Word * parse_tree__equiv_type__STATE_VARIABLE_UsedModules_11,
#line 276 "equiv_type.m"
  MR_Word parse_tree__equiv_type__STATE_VARIABLE_Specs_0_12,
#line 276 "equiv_type.m"
  MR_Word * parse_tree__equiv_type__STATE_VARIABLE_Specs_13);

#line 276 "equiv_type.m"
static void MR_CALL 
parse_tree__equiv_type__replace_in_item_blocks__ho1_13_p_0(
#line 276 "equiv_type.m"
  MR_Word parse_tree__equiv_type__ModuleName_1,
#line 276 "equiv_type.m"
  MR_Word parse_tree__equiv_type__TypeEqvMap_2,
#line 276 "equiv_type.m"
  MR_Word parse_tree__equiv_type__InstEqvMap_3,
#line 276 "equiv_type.m"
  MR_Word parse_tree__equiv_type__HeadVar__5_5,
#line 276 "equiv_type.m"
  MR_Word parse_tree__equiv_type__STATE_VARIABLE_RevReplItemBlocks_0_6,
#line 276 "equiv_type.m"
  MR_Word * parse_tree__equiv_type__STATE_VARIABLE_RevReplItemBlocks_7,
#line 276 "equiv_type.m"
  MR_Word parse_tree__equiv_type__STATE_VARIABLE_RecompInfo_0_8,
#line 276 "equiv_type.m"
  MR_Word * parse_tree__equiv_type__STATE_VARIABLE_RecompInfo_9,
#line 276 "equiv_type.m"
  MR_Word parse_tree__equiv_type__STATE_VARIABLE_UsedModules_0_10,
#line 276 "equiv_type.m"
  MR_Word * parse_tree__equiv_type__STATE_VARIABLE_UsedModules_11,
#line 276 "equiv_type.m"
  MR_Word parse_tree__equiv_type__STATE_VARIABLE_Specs_0_12,
#line 276 "equiv_type.m"
  MR_Word * parse_tree__equiv_type__STATE_VARIABLE_Specs_13);

#line 1357 "equiv_type.m"
static MR_Word MR_CALL 
parse_tree__equiv_type__IntroducedFrom__func__replace_in_pred_type__1357__1_1_f_0(
#line 1357 "equiv_type.m"
  MR_Word parse_tree__equiv_type__HeadVar__1_134);

#line 1350 "equiv_type.m"
static MR_Word MR_CALL 
parse_tree__equiv_type__IntroducedFrom__func__replace_in_pred_type__1350__1_1_f_0(
#line 1350 "equiv_type.m"
  MR_Word parse_tree__equiv_type__HeadVar__1_165);

#line 1068 "equiv_type.m"
static MR_bool MR_CALL 
parse_tree__equiv_type__IntroducedFrom__pred__replace_in_ctor_arg_list_2__1068__1_2_p_0(
#line 1068 "equiv_type.m"
  MR_Word parse_tree__equiv_type__Type0_41,
#line 1068 "equiv_type.m"
  MR_Word parse_tree__equiv_type__Type_44);

#line 246 "equiv_type.m"
static void MR_CALL 
parse_tree__equiv_type____Compare____section_maybe_record_sym_name_use_1_0(
#line 246 "equiv_type.m"
  MR_Word parse_tree__equiv_type__TypeInfo_for_MS_6,
#line 246 "equiv_type.m"
  MR_Word * parse_tree__equiv_type__HeadVar__1_1,
#line 246 "equiv_type.m"
  MR_Word parse_tree__equiv_type__HeadVar__2_2,
#line 246 "equiv_type.m"
  MR_Word parse_tree__equiv_type__HeadVar__3_3);

#line 246 "equiv_type.m"
static MR_bool MR_CALL 
parse_tree__equiv_type____Unify____section_maybe_record_sym_name_use_1_0(
#line 246 "equiv_type.m"
  MR_Word parse_tree__equiv_type__TypeInfo_for_MS_5,
#line 246 "equiv_type.m"
  MR_Word parse_tree__equiv_type__HeadVar__1_1,
#line 246 "equiv_type.m"
  MR_Word parse_tree__equiv_type__HeadVar__2_2);

#line 191 "equiv_type.m"
static void MR_CALL 
parse_tree__equiv_type____Compare____pred_or_func_decl_type_0_0(
#line 191 "equiv_type.m"
  MR_Word * parse_tree__equiv_type__HeadVar__1_1,
#line 191 "equiv_type.m"
  MR_Word parse_tree__equiv_type__HeadVar__2_2,
#line 191 "equiv_type.m"
  MR_Word parse_tree__equiv_type__HeadVar__3_3);

#line 191 "equiv_type.m"
static MR_bool MR_CALL 
parse_tree__equiv_type____Unify____pred_or_func_decl_type_0_0(
#line 191 "equiv_type.m"
  MR_Word parse_tree__equiv_type__HeadVar__2_1,
#line 191 "equiv_type.m"
  MR_Word parse_tree__equiv_type__HeadVar__2_2);

#line 242 "equiv_type.m"
static void MR_CALL 
parse_tree__equiv_type____Compare____maybe_record_sym_name_use_0_0(
#line 242 "equiv_type.m"
  MR_Word * parse_tree__equiv_type__HeadVar__1_1,
#line 242 "equiv_type.m"
  MR_Word parse_tree__equiv_type__HeadVar__2_2,
#line 242 "equiv_type.m"
  MR_Word parse_tree__equiv_type__HeadVar__3_3);

#line 242 "equiv_type.m"
static MR_bool MR_CALL 
parse_tree__equiv_type____Unify____maybe_record_sym_name_use_0_0(
#line 242 "equiv_type.m"
  MR_Word parse_tree__equiv_type__HeadVar__1_1,
#line 242 "equiv_type.m"
  MR_Word parse_tree__equiv_type__HeadVar__2_2);

#line 189 "equiv_type.m"
static void MR_CALL 
parse_tree__equiv_type____Compare____inst_eqv_map_0_0(
#line 189 "equiv_type.m"
  MR_Word * parse_tree__equiv_type__HeadVar__1_1,
#line 189 "equiv_type.m"
  MR_Word parse_tree__equiv_type__HeadVar__2_2,
#line 189 "equiv_type.m"
  MR_Word parse_tree__equiv_type__HeadVar__3_3);

#line 189 "equiv_type.m"
static MR_bool MR_CALL 
parse_tree__equiv_type____Unify____inst_eqv_map_0_0(
#line 189 "equiv_type.m"
  MR_Word parse_tree__equiv_type__HeadVar__1_1,
#line 189 "equiv_type.m"
  MR_Word parse_tree__equiv_type__HeadVar__2_2);

#line 182 "equiv_type.m"
static void MR_CALL 
parse_tree__equiv_type____Compare____eqv_inst_body_0_0(
#line 182 "equiv_type.m"
  MR_Word * parse_tree__equiv_type__HeadVar__1_1,
#line 182 "equiv_type.m"
  MR_Word parse_tree__equiv_type__HeadVar__2_2,
#line 182 "equiv_type.m"
  MR_Word parse_tree__equiv_type__HeadVar__3_3);

#line 182 "equiv_type.m"
static MR_bool MR_CALL 
parse_tree__equiv_type____Unify____eqv_inst_body_0_0(
#line 182 "equiv_type.m"
  MR_Word parse_tree__equiv_type__HeadVar__1_1,
#line 182 "equiv_type.m"
  MR_Word parse_tree__equiv_type__HeadVar__2_2);

#line 1539 "equiv_type.m"
static void MR_CALL 
parse_tree__equiv_type__replace_in_unit_selector_9_p_0(
#line 1539 "equiv_type.m"
  MR_Word parse_tree__equiv_type__MaybeRecord_10,
#line 1539 "equiv_type.m"
  MR_Word parse_tree__equiv_type__TypeEqvMap_11,
#line 1539 "equiv_type.m"
  MR_Word parse_tree__equiv_type__TVarSet_12,
#line 1539 "equiv_type.m"
  MR_Word parse_tree__equiv_type__Sel0_13,
#line 1539 "equiv_type.m"
  MR_Word * parse_tree__equiv_type__Sel_14,
#line 1539 "equiv_type.m"
  MR_Word parse_tree__equiv_type__STATE_VARIABLE_EquivTypeInfo_0_23,
#line 1539 "equiv_type.m"
  MR_Word * parse_tree__equiv_type__STATE_VARIABLE_EquivTypeInfo_24,
#line 1539 "equiv_type.m"
  MR_Word parse_tree__equiv_type__STATE_VARIABLE_UsedModules_0_25,
#line 1539 "equiv_type.m"
  MR_Word * parse_tree__equiv_type__STATE_VARIABLE_UsedModules_26);

#line 1535 "equiv_type.m"
static void MR_CALL 
parse_tree__equiv_type__replace_in_structure_sharing_pair_9_p_0_1(
#line 1535 "equiv_type.m"
  MR_Box parse_tree__equiv_type__closure_arg,
#line 1535 "equiv_type.m"
  MR_Box parse_tree__equiv_type__wrapper_arg_1,
#line 1535 "equiv_type.m"
  MR_Box * parse_tree__equiv_type__wrapper_arg_2,
#line 1535 "equiv_type.m"
  MR_Box parse_tree__equiv_type__wrapper_arg_3,
#line 1535 "equiv_type.m"
  MR_Box * parse_tree__equiv_type__wrapper_arg_4,
#line 1535 "equiv_type.m"
  MR_Box parse_tree__equiv_type__wrapper_arg_5,
#line 1535 "equiv_type.m"
  MR_Box * parse_tree__equiv_type__wrapper_arg_6);

#line 1514 "equiv_type.m"
static void MR_CALL 
parse_tree__equiv_type__replace_in_structure_sharing_pair_9_p_0(
#line 1514 "equiv_type.m"
  MR_Word parse_tree__equiv_type__MaybeRecord_10,
#line 1514 "equiv_type.m"
  MR_Word parse_tree__equiv_type__TypeEqvMap_11,
#line 1514 "equiv_type.m"
  MR_Word parse_tree__equiv_type__TVarSet_12,
#line 1514 "equiv_type.m"
  MR_Word parse_tree__equiv_type__HeadVar__4_4,
#line 1514 "equiv_type.m"
  MR_Word * parse_tree__equiv_type__HeadVar__5_5,
#line 1514 "equiv_type.m"
  MR_Word parse_tree__equiv_type__STATE_VARIABLE_EquivTypeInfo_0_19,
#line 1514 "equiv_type.m"
  MR_Word * parse_tree__equiv_type__STATE_VARIABLE_EquivTypeInfo_20,
#line 1514 "equiv_type.m"
  MR_Word parse_tree__equiv_type__STATE_VARIABLE_UsedModules_0_21,
#line 1514 "equiv_type.m"
  MR_Word * parse_tree__equiv_type__STATE_VARIABLE_UsedModules_22);

#line 1508 "equiv_type.m"
static void MR_CALL 
parse_tree__equiv_type__replace_in_structure_sharing_domain_9_p_0_1(
#line 1508 "equiv_type.m"
  MR_Box parse_tree__equiv_type__closure_arg,
#line 1508 "equiv_type.m"
  MR_Box parse_tree__equiv_type__wrapper_arg_1,
#line 1508 "equiv_type.m"
  MR_Box * parse_tree__equiv_type__wrapper_arg_2,
#line 1508 "equiv_type.m"
  MR_Box parse_tree__equiv_type__wrapper_arg_3,
#line 1508 "equiv_type.m"
  MR_Box * parse_tree__equiv_type__wrapper_arg_4,
#line 1508 "equiv_type.m"
  MR_Box parse_tree__equiv_type__wrapper_arg_5,
#line 1508 "equiv_type.m"
  MR_Box * parse_tree__equiv_type__wrapper_arg_6);

#line 1492 "equiv_type.m"
static void MR_CALL 
parse_tree__equiv_type__replace_in_structure_sharing_domain_9_p_0(
#line 1492 "equiv_type.m"
  MR_Word parse_tree__equiv_type__MaybeRecord_10,
#line 1492 "equiv_type.m"
  MR_Word parse_tree__equiv_type__TypeEqvMap_11,
#line 1492 "equiv_type.m"
  MR_Word parse_tree__equiv_type__TVarSet_12,
#line 1492 "equiv_type.m"
  MR_Word parse_tree__equiv_type__SharingDomain0_13,
#line 1492 "equiv_type.m"
  MR_Word * parse_tree__equiv_type__SharingDomain_14,
#line 1492 "equiv_type.m"
  MR_Word parse_tree__equiv_type__STATE_VARIABLE_EquivTypeInfo_0_20,
#line 1492 "equiv_type.m"
  MR_Word * parse_tree__equiv_type__STATE_VARIABLE_EquivTypeInfo_21,
#line 1492 "equiv_type.m"
  MR_Word parse_tree__equiv_type__STATE_VARIABLE_UsedModules_0_22,
#line 1492 "equiv_type.m"
  MR_Word * parse_tree__equiv_type__STATE_VARIABLE_UsedModules_23);

#line 1475 "equiv_type.m"
static void MR_CALL 
parse_tree__equiv_type__replace_in_tm_10_p_0(
#line 1475 "equiv_type.m"
  MR_Word parse_tree__equiv_type__MaybeRecord_1,
#line 1475 "equiv_type.m"
  MR_Word parse_tree__equiv_type__TypeEqvMap_2,
#line 1475 "equiv_type.m"
  MR_Word parse_tree__equiv_type__HeadVar__3_3,
#line 1475 "equiv_type.m"
  MR_Word * parse_tree__equiv_type__HeadVar__4_4,
#line 1475 "equiv_type.m"
  MR_Word parse_tree__equiv_type__STATE_VARIABLE_VarSet_0_5,
#line 1475 "equiv_type.m"
  MR_Word * parse_tree__equiv_type__STATE_VARIABLE_VarSet_6,
#line 1475 "equiv_type.m"
  MR_Word parse_tree__equiv_type__STATE_VARIABLE_EquivTypeInfo_0_7,
#line 1475 "equiv_type.m"
  MR_Word * parse_tree__equiv_type__STATE_VARIABLE_EquivTypeInfo_8,
#line 1475 "equiv_type.m"
  MR_Word parse_tree__equiv_type__STATE_VARIABLE_UsedModules_0_9,
#line 1475 "equiv_type.m"
  MR_Word * parse_tree__equiv_type__STATE_VARIABLE_UsedModules_10);

#line 1472 "equiv_type.m"
static void MR_CALL 
parse_tree__equiv_type__replace_in_tms_10_p_0_1(
#line 1472 "equiv_type.m"
  MR_Box parse_tree__equiv_type__closure_arg,
#line 1472 "equiv_type.m"
  MR_Box parse_tree__equiv_type__wrapper_arg_1,
#line 1472 "equiv_type.m"
  MR_Box * parse_tree__equiv_type__wrapper_arg_2,
#line 1472 "equiv_type.m"
  MR_Box parse_tree__equiv_type__wrapper_arg_3,
#line 1472 "equiv_type.m"
  MR_Box * parse_tree__equiv_type__wrapper_arg_4,
#line 1472 "equiv_type.m"
  MR_Box parse_tree__equiv_type__wrapper_arg_5,
#line 1472 "equiv_type.m"
  MR_Box * parse_tree__equiv_type__wrapper_arg_6,
#line 1472 "equiv_type.m"
  MR_Box parse_tree__equiv_type__wrapper_arg_7,
#line 1472 "equiv_type.m"
  MR_Box * parse_tree__equiv_type__wrapper_arg_8);

#line 1465 "equiv_type.m"
static void MR_CALL 
parse_tree__equiv_type__replace_in_tms_10_p_0(
#line 1465 "equiv_type.m"
  MR_Word parse_tree__equiv_type__MaybeRecord_11,
#line 1465 "equiv_type.m"
  MR_Word parse_tree__equiv_type__TypeEqvMap_12,
#line 1465 "equiv_type.m"
  MR_Word parse_tree__equiv_type__STATE_VARIABLE_TMs_0_17,
#line 1465 "equiv_type.m"
  MR_Word * parse_tree__equiv_type__STATE_VARIABLE_TMs_18,
#line 1465 "equiv_type.m"
  MR_Word parse_tree__equiv_type__STATE_VARIABLE_VarSet_0_19,
#line 1465 "equiv_type.m"
  MR_Word * parse_tree__equiv_type__STATE_VARIABLE_VarSet_20,
#line 1465 "equiv_type.m"
  MR_Word parse_tree__equiv_type__STATE_VARIABLE_EquivTypeInfo_0_21,
#line 1465 "equiv_type.m"
  MR_Word * parse_tree__equiv_type__STATE_VARIABLE_EquivTypeInfo_22,
#line 1465 "equiv_type.m"
  MR_Word parse_tree__equiv_type__STATE_VARIABLE_UsedModules_0_23,
#line 1465 "equiv_type.m"
  MR_Word * parse_tree__equiv_type__STATE_VARIABLE_UsedModules_24);

#line 1357 "equiv_type.m"
static MR_Box MR_CALL 
parse_tree__equiv_type__replace_in_pred_type_23_p_0_2(
#line 1357 "equiv_type.m"
  MR_Box parse_tree__equiv_type__closure_arg,
#line 1357 "equiv_type.m"
  MR_Box parse_tree__equiv_type__wrapper_arg_1);

#line 1350 "equiv_type.m"
static MR_Box MR_CALL 
parse_tree__equiv_type__replace_in_pred_type_23_p_0_1(
#line 1350 "equiv_type.m"
  MR_Box parse_tree__equiv_type__closure_arg,
#line 1350 "equiv_type.m"
  MR_Box parse_tree__equiv_type__wrapper_arg_1);

#line 1290 "equiv_type.m"
static void MR_CALL 
parse_tree__equiv_type__replace_in_pred_type_23_p_0(
#line 1290 "equiv_type.m"
  MR_Word parse_tree__equiv_type__MaybeRecord_24,
#line 1290 "equiv_type.m"
  MR_Word parse_tree__equiv_type__PredName_25,
#line 1290 "equiv_type.m"
  MR_Word parse_tree__equiv_type__PredOrFunc_26,
#line 1290 "equiv_type.m"
  MR_Word parse_tree__equiv_type__Context_27,
#line 1290 "equiv_type.m"
  MR_Word parse_tree__equiv_type__TypeEqvMap_28,
#line 1290 "equiv_type.m"
  MR_Word parse_tree__equiv_type__InstEqvMap_29,
#line 1290 "equiv_type.m"
  MR_Word parse_tree__equiv_type__ClassContext0_30,
#line 1290 "equiv_type.m"
  MR_Word * parse_tree__equiv_type__ClassContext_31,
#line 1290 "equiv_type.m"
  MR_Word parse_tree__equiv_type__TypesAndModes0_32,
#line 1290 "equiv_type.m"
  MR_Word * parse_tree__equiv_type__TypesAndModes_33,
#line 1290 "equiv_type.m"
  MR_Word parse_tree__equiv_type__STATE_VARIABLE_TypeVarSet_0_74,
#line 1290 "equiv_type.m"
  MR_Word * parse_tree__equiv_type__STATE_VARIABLE_TypeVarSet_75,
#line 1290 "equiv_type.m"
  MR_Word parse_tree__equiv_type__MaybeWithType0_35,
#line 1290 "equiv_type.m"
  MR_Word * parse_tree__equiv_type__MaybeWithType_36,
#line 1290 "equiv_type.m"
  MR_Word parse_tree__equiv_type__MaybeWithInst0_37,
#line 1290 "equiv_type.m"
  MR_Word * parse_tree__equiv_type__MaybeWithInst_38,
#line 1290 "equiv_type.m"
  MR_Word parse_tree__equiv_type__STATE_VARIABLE_MaybeDetism_0_76,
#line 1290 "equiv_type.m"
  MR_Word * parse_tree__equiv_type__STATE_VARIABLE_MaybeDetism_77,
#line 1290 "equiv_type.m"
  MR_Word parse_tree__equiv_type__STATE_VARIABLE_EquivTypeInfo_0_78,
#line 1290 "equiv_type.m"
  MR_Word * parse_tree__equiv_type__STATE_VARIABLE_EquivTypeInfo_79,
#line 1290 "equiv_type.m"
  MR_Word parse_tree__equiv_type__STATE_VARIABLE_UsedModules_0_80,
#line 1290 "equiv_type.m"
  MR_Word * parse_tree__equiv_type__STATE_VARIABLE_UsedModules_81,
#line 1290 "equiv_type.m"
  MR_Word * parse_tree__equiv_type__STATE_VARIABLE_Specs_82);

#line 1189 "equiv_type.m"
static void MR_CALL 
parse_tree__equiv_type__replace_type_ctor_18_p_0(
#line 1189 "equiv_type.m"
  MR_Word parse_tree__equiv_type__MaybeRecord_19,
#line 1189 "equiv_type.m"
  MR_Word parse_tree__equiv_type__TypeEqvMap_20,
#line 1189 "equiv_type.m"
  MR_Word parse_tree__equiv_type__TypeCtorsAlreadyExpanded_21,
#line 1189 "equiv_type.m"
  MR_Word parse_tree__equiv_type__Type0_22,
#line 1189 "equiv_type.m"
  MR_Word parse_tree__equiv_type__TypeCtor_23,
#line 1189 "equiv_type.m"
  MR_Word parse_tree__equiv_type__TArgs_24,
#line 1189 "equiv_type.m"
  MR_Word parse_tree__equiv_type__Kind_25,
#line 1189 "equiv_type.m"
  MR_Word * parse_tree__equiv_type__Type_26,
#line 1189 "equiv_type.m"
  MR_Word parse_tree__equiv_type__STATE_VARIABLE_Changed_0_46,
#line 1189 "equiv_type.m"
  MR_Word * parse_tree__equiv_type__STATE_VARIABLE_Changed_47,
#line 1189 "equiv_type.m"
  MR_Word parse_tree__equiv_type__STATE_VARIABLE_Circ_0_48,
#line 1189 "equiv_type.m"
  MR_Word * parse_tree__equiv_type__STATE_VARIABLE_Circ_49,
#line 1189 "equiv_type.m"
  MR_Word parse_tree__equiv_type__STATE_VARIABLE_VarSet_0_50,
#line 1189 "equiv_type.m"
  MR_Word * parse_tree__equiv_type__STATE_VARIABLE_VarSet_51,
#line 1189 "equiv_type.m"
  MR_Word parse_tree__equiv_type__STATE_VARIABLE_EquivTypeInfo_0_52,
#line 1189 "equiv_type.m"
  MR_Word * parse_tree__equiv_type__STATE_VARIABLE_EquivTypeInfo_53,
#line 1189 "equiv_type.m"
  MR_Word parse_tree__equiv_type__STATE_VARIABLE_UsedModules_0_54,
#line 1189 "equiv_type.m"
  MR_Word * parse_tree__equiv_type__STATE_VARIABLE_UsedModules_55);

#line 1096 "equiv_type.m"
static void MR_CALL 
parse_tree__equiv_type__replace_in_type_maybe_record_use_2_13_p_0(
#line 1096 "equiv_type.m"
  MR_Word parse_tree__equiv_type__MaybeRecord_14,
#line 1096 "equiv_type.m"
  MR_Word parse_tree__equiv_type__TypeEqvMap_15,
#line 1096 "equiv_type.m"
  MR_Word parse_tree__equiv_type__TypeCtorsAlreadyExpanded_16,
#line 1096 "equiv_type.m"
  MR_Word parse_tree__equiv_type__Type0_17,
#line 1096 "equiv_type.m"
  MR_Word * parse_tree__equiv_type__Type_18,
#line 1096 "equiv_type.m"
  MR_Word * parse_tree__equiv_type__Changed_19,
#line 1096 "equiv_type.m"
  MR_Word * parse_tree__equiv_type__Circ_20,
#line 1096 "equiv_type.m"
  MR_Word parse_tree__equiv_type__STATE_VARIABLE_VarSet_0_47,
#line 1096 "equiv_type.m"
  MR_Word * parse_tree__equiv_type__STATE_VARIABLE_VarSet_48,
#line 1096 "equiv_type.m"
  MR_Word parse_tree__equiv_type__STATE_VARIABLE_EquivTypeInfo_0_49,
#line 1096 "equiv_type.m"
  MR_Word * parse_tree__equiv_type__STATE_VARIABLE_EquivTypeInfo_50,
#line 1096 "equiv_type.m"
  MR_Word parse_tree__equiv_type__STATE_VARIABLE_UsedModules_0_51,
#line 1096 "equiv_type.m"
  MR_Word * parse_tree__equiv_type__STATE_VARIABLE_UsedModules_52);

#line 1083 "equiv_type.m"
static void MR_CALL 
parse_tree__equiv_type__replace_in_type_maybe_record_use_11_p_0(
#line 1083 "equiv_type.m"
  MR_Word parse_tree__equiv_type__MaybeRecord_12,
#line 1083 "equiv_type.m"
  MR_Word parse_tree__equiv_type__TypeEqvMap_13,
#line 1083 "equiv_type.m"
  MR_Word parse_tree__equiv_type__Type0_14,
#line 1083 "equiv_type.m"
  MR_Word * parse_tree__equiv_type__Type_15,
#line 1083 "equiv_type.m"
  MR_Word * parse_tree__equiv_type__Changed_16,
#line 1083 "equiv_type.m"
  MR_Word parse_tree__equiv_type__STATE_VARIABLE_VarSet_0_21,
#line 1083 "equiv_type.m"
  MR_Word * parse_tree__equiv_type__STATE_VARIABLE_VarSet_22,
#line 1083 "equiv_type.m"
  MR_Word parse_tree__equiv_type__STATE_VARIABLE_EquivTypeInfo_0_23,
#line 1083 "equiv_type.m"
  MR_Word * parse_tree__equiv_type__STATE_VARIABLE_EquivTypeInfo_24,
#line 1083 "equiv_type.m"
  MR_Word parse_tree__equiv_type__STATE_VARIABLE_UsedModules_0_25,
#line 1083 "equiv_type.m"
  MR_Word * parse_tree__equiv_type__STATE_VARIABLE_UsedModules_26);

#line 1068 "equiv_type.m"
static MR_bool MR_CALL 
parse_tree__equiv_type__replace_in_ctor_arg_list_2_13_p_0_1(
#line 1068 "equiv_type.m"
  MR_Box parse_tree__equiv_type__closure_arg);

#line 1045 "equiv_type.m"
static void MR_CALL 
parse_tree__equiv_type__replace_in_ctor_arg_list_2_13_p_0(
#line 1045 "equiv_type.m"
  MR_Word parse_tree__equiv_type__HeadVar__1_1,
#line 1045 "equiv_type.m"
  MR_Word parse_tree__equiv_type__HeadVar__2_2,
#line 1045 "equiv_type.m"
  MR_Word parse_tree__equiv_type__HeadVar__3_3,
#line 1045 "equiv_type.m"
  MR_Word parse_tree__equiv_type__HeadVar__4_4,
#line 1045 "equiv_type.m"
  MR_Word * parse_tree__equiv_type__HeadVar__5_5,
#line 1045 "equiv_type.m"
  MR_Word parse_tree__equiv_type__STATE_VARIABLE_Circ_0_6,
#line 1045 "equiv_type.m"
  MR_Word * parse_tree__equiv_type__STATE_VARIABLE_Circ_7,
#line 1045 "equiv_type.m"
  MR_Word parse_tree__equiv_type__STATE_VARIABLE_VarSet_0_8,
#line 1045 "equiv_type.m"
  MR_Word * parse_tree__equiv_type__STATE_VARIABLE_VarSet_9,
#line 1045 "equiv_type.m"
  MR_Word parse_tree__equiv_type__STATE_VARIABLE_EquivTypeInfo_0_10,
#line 1045 "equiv_type.m"
  MR_Word * parse_tree__equiv_type__STATE_VARIABLE_EquivTypeInfo_11,
#line 1045 "equiv_type.m"
  MR_Word parse_tree__equiv_type__STATE_VARIABLE_UsedModules_0_12,
#line 1045 "equiv_type.m"
  MR_Word * parse_tree__equiv_type__STATE_VARIABLE_UsedModules_13);

#line 1002 "equiv_type.m"
static void MR_CALL 
parse_tree__equiv_type__replace_in_type_list_location_circ_2_14_p_0(
#line 1002 "equiv_type.m"
  MR_Word parse_tree__equiv_type__HeadVar__1_1,
#line 1002 "equiv_type.m"
  MR_Word parse_tree__equiv_type__HeadVar__2_2,
#line 1002 "equiv_type.m"
  MR_Word parse_tree__equiv_type__HeadVar__3_3,
#line 1002 "equiv_type.m"
  MR_Word parse_tree__equiv_type__HeadVar__4_4,
#line 1002 "equiv_type.m"
  MR_Word * parse_tree__equiv_type__HeadVar__5_5,
#line 1002 "equiv_type.m"
  MR_Word * parse_tree__equiv_type__HeadVar__6_6,
#line 1002 "equiv_type.m"
  MR_Word parse_tree__equiv_type__HeadVar__7_7,
#line 1002 "equiv_type.m"
  MR_Word * parse_tree__equiv_type__HeadVar__8_8,
#line 1002 "equiv_type.m"
  MR_Word parse_tree__equiv_type__STATE_VARIABLE_VarSet_0_9,
#line 1002 "equiv_type.m"
  MR_Word * parse_tree__equiv_type__STATE_VARIABLE_VarSet_10,
#line 1002 "equiv_type.m"
  MR_Word parse_tree__equiv_type__STATE_VARIABLE_EquivTypeInfo_0_11,
#line 1002 "equiv_type.m"
  MR_Word * parse_tree__equiv_type__STATE_VARIABLE_EquivTypeInfo_12,
#line 1002 "equiv_type.m"
  MR_Word parse_tree__equiv_type__STATE_VARIABLE_UsedModules_0_13,
#line 1002 "equiv_type.m"
  MR_Word * parse_tree__equiv_type__STATE_VARIABLE_UsedModules_14);

#line 991 "equiv_type.m"
static void MR_CALL 
parse_tree__equiv_type__replace_in_type_list_location_circ_12_p_0(
#line 991 "equiv_type.m"
  MR_Word parse_tree__equiv_type__MaybeRecord_13,
#line 991 "equiv_type.m"
  MR_Word parse_tree__equiv_type__TypeEqvMap_14,
#line 991 "equiv_type.m"
  MR_Word parse_tree__equiv_type__STATE_VARIABLE_Ts_0_21,
#line 991 "equiv_type.m"
  MR_Word * parse_tree__equiv_type__STATE_VARIABLE_Ts_22,
#line 991 "equiv_type.m"
  MR_Word * parse_tree__equiv_type__Changed_16,
#line 991 "equiv_type.m"
  MR_Word * parse_tree__equiv_type__ContainsCirc_17,
#line 991 "equiv_type.m"
  MR_Word parse_tree__equiv_type__STATE_VARIABLE_VarSet_0_23,
#line 991 "equiv_type.m"
  MR_Word * parse_tree__equiv_type__STATE_VARIABLE_VarSet_24,
#line 991 "equiv_type.m"
  MR_Word parse_tree__equiv_type__STATE_VARIABLE_EquivTypeInfo_0_25,
#line 991 "equiv_type.m"
  MR_Word * parse_tree__equiv_type__STATE_VARIABLE_EquivTypeInfo_26,
#line 991 "equiv_type.m"
  MR_Word parse_tree__equiv_type__STATE_VARIABLE_UsedModules_0_27,
#line 991 "equiv_type.m"
  MR_Word * parse_tree__equiv_type__STATE_VARIABLE_UsedModules_28);

#line 981 "equiv_type.m"
static void MR_CALL 
parse_tree__equiv_type__replace_in_type_list_location_11_p_0(
#line 981 "equiv_type.m"
  MR_Word parse_tree__equiv_type__MaybeRecord_12,
#line 981 "equiv_type.m"
  MR_Word parse_tree__equiv_type__TypeEqvMap_13,
#line 981 "equiv_type.m"
  MR_Word parse_tree__equiv_type__STATE_VARIABLE_Types_0_20,
#line 981 "equiv_type.m"
  MR_Word * parse_tree__equiv_type__STATE_VARIABLE_Types_21,
#line 981 "equiv_type.m"
  MR_Word * parse_tree__equiv_type__Changed_15,
#line 981 "equiv_type.m"
  MR_Word parse_tree__equiv_type__STATE_VARIABLE_VarSet_0_22,
#line 981 "equiv_type.m"
  MR_Word * parse_tree__equiv_type__STATE_VARIABLE_VarSet_23,
#line 981 "equiv_type.m"
  MR_Word parse_tree__equiv_type__STATE_VARIABLE_EquivTypeInfo_0_24,
#line 981 "equiv_type.m"
  MR_Word * parse_tree__equiv_type__STATE_VARIABLE_EquivTypeInfo_25,
#line 981 "equiv_type.m"
  MR_Word parse_tree__equiv_type__STATE_VARIABLE_UsedModules_0_26,
#line 981 "equiv_type.m"
  MR_Word * parse_tree__equiv_type__STATE_VARIABLE_UsedModules_27);

#line 849 "equiv_type.m"
static void MR_CALL 
parse_tree__equiv_type__replace_in_ctor_10_p_0_1(
#line 849 "equiv_type.m"
  MR_Box parse_tree__equiv_type__closure_arg,
#line 849 "equiv_type.m"
  MR_Box parse_tree__equiv_type__wrapper_arg_1,
#line 849 "equiv_type.m"
  MR_Box * parse_tree__equiv_type__wrapper_arg_2,
#line 849 "equiv_type.m"
  MR_Box parse_tree__equiv_type__wrapper_arg_3,
#line 849 "equiv_type.m"
  MR_Box * parse_tree__equiv_type__wrapper_arg_4,
#line 849 "equiv_type.m"
  MR_Box parse_tree__equiv_type__wrapper_arg_5,
#line 849 "equiv_type.m"
  MR_Box * parse_tree__equiv_type__wrapper_arg_6,
#line 849 "equiv_type.m"
  MR_Box parse_tree__equiv_type__wrapper_arg_7,
#line 849 "equiv_type.m"
  MR_Box * parse_tree__equiv_type__wrapper_arg_8);

#line 961 "equiv_type.m"
static void MR_CALL 
parse_tree__equiv_type__replace_in_ctor_10_p_0(
#line 961 "equiv_type.m"
  MR_Word parse_tree__equiv_type__MaybeRecord_11,
#line 961 "equiv_type.m"
  MR_Word parse_tree__equiv_type__TypeEqvMap_12,
#line 961 "equiv_type.m"
  MR_Word parse_tree__equiv_type__Ctor0_13,
#line 961 "equiv_type.m"
  MR_Word * parse_tree__equiv_type__Ctor_14,
#line 961 "equiv_type.m"
  MR_Word parse_tree__equiv_type__STATE_VARIABLE_VarSet_0_27,
#line 961 "equiv_type.m"
  MR_Word * parse_tree__equiv_type__STATE_VARIABLE_VarSet_28,
#line 961 "equiv_type.m"
  MR_Word parse_tree__equiv_type__STATE_VARIABLE_EquivTypeInfo_0_29,
#line 961 "equiv_type.m"
  MR_Word * parse_tree__equiv_type__STATE_VARIABLE_EquivTypeInfo_30,
#line 961 "equiv_type.m"
  MR_Word parse_tree__equiv_type__STATE_VARIABLE_UsedModules_0_31,
#line 961 "equiv_type.m"
  MR_Word * parse_tree__equiv_type__STATE_VARIABLE_UsedModules_32);

#line 958 "equiv_type.m"
static void MR_CALL 
parse_tree__equiv_type__replace_in_ctors_location_10_p_0_1(
#line 958 "equiv_type.m"
  MR_Box parse_tree__equiv_type__closure_arg,
#line 958 "equiv_type.m"
  MR_Box parse_tree__equiv_type__wrapper_arg_1,
#line 958 "equiv_type.m"
  MR_Box * parse_tree__equiv_type__wrapper_arg_2,
#line 958 "equiv_type.m"
  MR_Box parse_tree__equiv_type__wrapper_arg_3,
#line 958 "equiv_type.m"
  MR_Box * parse_tree__equiv_type__wrapper_arg_4,
#line 958 "equiv_type.m"
  MR_Box parse_tree__equiv_type__wrapper_arg_5,
#line 958 "equiv_type.m"
  MR_Box * parse_tree__equiv_type__wrapper_arg_6,
#line 958 "equiv_type.m"
  MR_Box parse_tree__equiv_type__wrapper_arg_7,
#line 958 "equiv_type.m"
  MR_Box * parse_tree__equiv_type__wrapper_arg_8);

#line 951 "equiv_type.m"
static void MR_CALL 
parse_tree__equiv_type__replace_in_ctors_location_10_p_0(
#line 951 "equiv_type.m"
  MR_Word parse_tree__equiv_type__MaybeRecord_11,
#line 951 "equiv_type.m"
  MR_Word parse_tree__equiv_type__TypeEqvMap_12,
#line 951 "equiv_type.m"
  MR_Word parse_tree__equiv_type__STATE_VARIABLE_Ctors_0_17,
#line 951 "equiv_type.m"
  MR_Word * parse_tree__equiv_type__STATE_VARIABLE_Ctors_18,
#line 951 "equiv_type.m"
  MR_Word parse_tree__equiv_type__STATE_VARIABLE_VarSet_0_19,
#line 951 "equiv_type.m"
  MR_Word * parse_tree__equiv_type__STATE_VARIABLE_VarSet_20,
#line 951 "equiv_type.m"
  MR_Word parse_tree__equiv_type__STATE_VARIABLE_EquivTypeInfo_0_21,
#line 951 "equiv_type.m"
  MR_Word * parse_tree__equiv_type__STATE_VARIABLE_EquivTypeInfo_22,
#line 951 "equiv_type.m"
  MR_Word parse_tree__equiv_type__STATE_VARIABLE_UsedModules_0_23,
#line 951 "equiv_type.m"
  MR_Word * parse_tree__equiv_type__STATE_VARIABLE_UsedModules_24);

#line 931 "equiv_type.m"
static void MR_CALL 
parse_tree__equiv_type__replace_in_subst_10_p_0(
#line 931 "equiv_type.m"
  MR_Word parse_tree__equiv_type__HeadVar__1_1,
#line 931 "equiv_type.m"
  MR_Word parse_tree__equiv_type__HeadVar__2_2,
#line 931 "equiv_type.m"
  MR_Word parse_tree__equiv_type__HeadVar__3_3,
#line 931 "equiv_type.m"
  MR_Word * parse_tree__equiv_type__HeadVar__4_4,
#line 931 "equiv_type.m"
  MR_Word parse_tree__equiv_type__STATE_VARIABLE_VarSet_0_5,
#line 931 "equiv_type.m"
  MR_Word * parse_tree__equiv_type__STATE_VARIABLE_VarSet_6,
#line 931 "equiv_type.m"
  MR_Word parse_tree__equiv_type__STATE_VARIABLE_EquivTypeInfo_0_7,
#line 931 "equiv_type.m"
  MR_Word * parse_tree__equiv_type__STATE_VARIABLE_EquivTypeInfo_8,
#line 931 "equiv_type.m"
  MR_Word parse_tree__equiv_type__STATE_VARIABLE_UsedModules_0_9,
#line 931 "equiv_type.m"
  MR_Word * parse_tree__equiv_type__STATE_VARIABLE_UsedModules_10);

#line 889 "equiv_type.m"
static void MR_CALL 
parse_tree__equiv_type__replace_in_class_method_11_p_0(
#line 889 "equiv_type.m"
  MR_Word parse_tree__equiv_type__MaybeRecord_12,
#line 889 "equiv_type.m"
  MR_Word parse_tree__equiv_type__TypeEqvMap_13,
#line 889 "equiv_type.m"
  MR_Word parse_tree__equiv_type__InstEqvMap_14,
#line 889 "equiv_type.m"
  MR_Word parse_tree__equiv_type__Method0_15,
#line 889 "equiv_type.m"
  MR_Word * parse_tree__equiv_type__Method_16,
#line 889 "equiv_type.m"
  MR_Word parse_tree__equiv_type__STATE_VARIABLE_EquivTypeInfo_0_46,
#line 889 "equiv_type.m"
  MR_Word * parse_tree__equiv_type__STATE_VARIABLE_EquivTypeInfo_47,
#line 889 "equiv_type.m"
  MR_Word parse_tree__equiv_type__STATE_VARIABLE_UsedModules_0_48,
#line 889 "equiv_type.m"
  MR_Word * parse_tree__equiv_type__STATE_VARIABLE_UsedModules_49,
#line 889 "equiv_type.m"
  MR_Word parse_tree__equiv_type__STATE_VARIABLE_Specs_0_50,
#line 889 "equiv_type.m"
  MR_Word * parse_tree__equiv_type__STATE_VARIABLE_Specs_51);

#line 886 "equiv_type.m"
static void MR_CALL 
parse_tree__equiv_type__replace_in_class_interface_11_p_0_1(
#line 886 "equiv_type.m"
  MR_Box parse_tree__equiv_type__closure_arg,
#line 886 "equiv_type.m"
  MR_Box parse_tree__equiv_type__wrapper_arg_1,
#line 886 "equiv_type.m"
  MR_Box * parse_tree__equiv_type__wrapper_arg_2,
#line 886 "equiv_type.m"
  MR_Box parse_tree__equiv_type__wrapper_arg_3,
#line 886 "equiv_type.m"
  MR_Box * parse_tree__equiv_type__wrapper_arg_4,
#line 886 "equiv_type.m"
  MR_Box parse_tree__equiv_type__wrapper_arg_5,
#line 886 "equiv_type.m"
  MR_Box * parse_tree__equiv_type__wrapper_arg_6,
#line 886 "equiv_type.m"
  MR_Box parse_tree__equiv_type__wrapper_arg_7,
#line 886 "equiv_type.m"
  MR_Box * parse_tree__equiv_type__wrapper_arg_8);

#line 876 "equiv_type.m"
static void MR_CALL 
parse_tree__equiv_type__replace_in_class_interface_11_p_0(
#line 876 "equiv_type.m"
  MR_Word parse_tree__equiv_type__MaybeRecord_12,
#line 876 "equiv_type.m"
  MR_Word parse_tree__equiv_type__TypeEqvMap_13,
#line 876 "equiv_type.m"
  MR_Word parse_tree__equiv_type__InstEqvMap_14,
#line 876 "equiv_type.m"
  MR_Word parse_tree__equiv_type__ClassInterface0_15,
#line 876 "equiv_type.m"
  MR_Word * parse_tree__equiv_type__ClassInterface_16,
#line 876 "equiv_type.m"
  MR_Word parse_tree__equiv_type__STATE_VARIABLE_EquivTypeInfo_0_20,
#line 876 "equiv_type.m"
  MR_Word * parse_tree__equiv_type__STATE_VARIABLE_EquivTypeInfo_21,
#line 876 "equiv_type.m"
  MR_Word parse_tree__equiv_type__STATE_VARIABLE_UsedModules_0_22,
#line 876 "equiv_type.m"
  MR_Word * parse_tree__equiv_type__STATE_VARIABLE_UsedModules_23,
#line 876 "equiv_type.m"
  MR_Word parse_tree__equiv_type__STATE_VARIABLE_Specs_0_24,
#line 876 "equiv_type.m"
  MR_Word * parse_tree__equiv_type__STATE_VARIABLE_Specs_25);

#line 862 "equiv_type.m"
static void MR_CALL 
parse_tree__equiv_type__replace_in_prog_constraint_location_10_p_0(
#line 862 "equiv_type.m"
  MR_Word parse_tree__equiv_type__MaybeRecord_11,
#line 862 "equiv_type.m"
  MR_Word parse_tree__equiv_type__TypeEqvMap_12,
#line 862 "equiv_type.m"
  MR_Word parse_tree__equiv_type__Constraint0_13,
#line 862 "equiv_type.m"
  MR_Word * parse_tree__equiv_type__Constraint_14,
#line 862 "equiv_type.m"
  MR_Word parse_tree__equiv_type__STATE_VARIABLE_VarSet_0_23,
#line 862 "equiv_type.m"
  MR_Word * parse_tree__equiv_type__STATE_VARIABLE_VarSet_24,
#line 862 "equiv_type.m"
  MR_Word parse_tree__equiv_type__STATE_VARIABLE_EquivTypeInfo_0_25,
#line 862 "equiv_type.m"
  MR_Word * parse_tree__equiv_type__STATE_VARIABLE_EquivTypeInfo_26,
#line 862 "equiv_type.m"
  MR_Word parse_tree__equiv_type__STATE_VARIABLE_UsedModules_0_27,
#line 862 "equiv_type.m"
  MR_Word * parse_tree__equiv_type__STATE_VARIABLE_UsedModules_28);

#line 849 "equiv_type.m"
static void MR_CALL 
parse_tree__equiv_type__replace_in_prog_constraint_list_10_p_0_1(
#line 849 "equiv_type.m"
  MR_Box parse_tree__equiv_type__closure_arg,
#line 849 "equiv_type.m"
  MR_Box parse_tree__equiv_type__wrapper_arg_1,
#line 849 "equiv_type.m"
  MR_Box * parse_tree__equiv_type__wrapper_arg_2,
#line 849 "equiv_type.m"
  MR_Box parse_tree__equiv_type__wrapper_arg_3,
#line 849 "equiv_type.m"
  MR_Box * parse_tree__equiv_type__wrapper_arg_4,
#line 849 "equiv_type.m"
  MR_Box parse_tree__equiv_type__wrapper_arg_5,
#line 849 "equiv_type.m"
  MR_Box * parse_tree__equiv_type__wrapper_arg_6,
#line 849 "equiv_type.m"
  MR_Box parse_tree__equiv_type__wrapper_arg_7,
#line 849 "equiv_type.m"
  MR_Box * parse_tree__equiv_type__wrapper_arg_8);

#line 841 "equiv_type.m"
static void MR_CALL 
parse_tree__equiv_type__replace_in_prog_constraint_list_10_p_0(
#line 841 "equiv_type.m"
  MR_Word parse_tree__equiv_type__MaybeRecord_11,
#line 841 "equiv_type.m"
  MR_Word parse_tree__equiv_type__TypeEqvMap_12,
#line 841 "equiv_type.m"
  MR_Word parse_tree__equiv_type__STATE_VARIABLE_Constraints_0_17,
#line 841 "equiv_type.m"
  MR_Word * parse_tree__equiv_type__STATE_VARIABLE_Constraints_18,
#line 841 "equiv_type.m"
  MR_Word parse_tree__equiv_type__STATE_VARIABLE_VarSet_0_19,
#line 841 "equiv_type.m"
  MR_Word * parse_tree__equiv_type__STATE_VARIABLE_VarSet_20,
#line 841 "equiv_type.m"
  MR_Word parse_tree__equiv_type__STATE_VARIABLE_EquivTypeInfo_0_21,
#line 841 "equiv_type.m"
  MR_Word * parse_tree__equiv_type__STATE_VARIABLE_EquivTypeInfo_22,
#line 841 "equiv_type.m"
  MR_Word parse_tree__equiv_type__STATE_VARIABLE_UsedModules_0_23,
#line 841 "equiv_type.m"
  MR_Word * parse_tree__equiv_type__STATE_VARIABLE_UsedModules_24);

#line 849 "equiv_type.m"
static void MR_CALL 
parse_tree__equiv_type__replace_in_prog_constraints_location_10_p_0_1(
#line 849 "equiv_type.m"
  MR_Box parse_tree__equiv_type__closure_arg,
#line 849 "equiv_type.m"
  MR_Box parse_tree__equiv_type__wrapper_arg_1,
#line 849 "equiv_type.m"
  MR_Box * parse_tree__equiv_type__wrapper_arg_2,
#line 849 "equiv_type.m"
  MR_Box parse_tree__equiv_type__wrapper_arg_3,
#line 849 "equiv_type.m"
  MR_Box * parse_tree__equiv_type__wrapper_arg_4,
#line 849 "equiv_type.m"
  MR_Box parse_tree__equiv_type__wrapper_arg_5,
#line 849 "equiv_type.m"
  MR_Box * parse_tree__equiv_type__wrapper_arg_6,
#line 849 "equiv_type.m"
  MR_Box parse_tree__equiv_type__wrapper_arg_7,
#line 849 "equiv_type.m"
  MR_Box * parse_tree__equiv_type__wrapper_arg_8);

#line 827 "equiv_type.m"
static void MR_CALL 
parse_tree__equiv_type__replace_in_prog_constraints_location_10_p_0(
#line 827 "equiv_type.m"
  MR_Word parse_tree__equiv_type__MaybeRecord_11,
#line 827 "equiv_type.m"
  MR_Word parse_tree__equiv_type__TypeEqvMap_12,
#line 827 "equiv_type.m"
  MR_Word parse_tree__equiv_type__Cs0_13,
#line 827 "equiv_type.m"
  MR_Word * parse_tree__equiv_type__Cs_14,
#line 827 "equiv_type.m"
  MR_Word parse_tree__equiv_type__STATE_VARIABLE_VarSet_0_22,
#line 827 "equiv_type.m"
  MR_Word * parse_tree__equiv_type__STATE_VARIABLE_VarSet_23,
#line 827 "equiv_type.m"
  MR_Word parse_tree__equiv_type__STATE_VARIABLE_EquivTypeInfo_0_24,
#line 827 "equiv_type.m"
  MR_Word * parse_tree__equiv_type__STATE_VARIABLE_EquivTypeInfo_25,
#line 827 "equiv_type.m"
  MR_Word parse_tree__equiv_type__STATE_VARIABLE_UsedModules_0_26,
#line 827 "equiv_type.m"
  MR_Word * parse_tree__equiv_type__STATE_VARIABLE_UsedModules_27);

#line 806 "equiv_type.m"
static void MR_CALL 
parse_tree__equiv_type__replace_in_constraint_store_9_p_0(
#line 806 "equiv_type.m"
  MR_Word parse_tree__equiv_type__MaybeRecord_1,
#line 806 "equiv_type.m"
  MR_Word parse_tree__equiv_type__TypeEqvMap_2,
#line 806 "equiv_type.m"
  MR_Word parse_tree__equiv_type__InstEqvMap_3,
#line 806 "equiv_type.m"
  MR_Word parse_tree__equiv_type__HeadVar__4_4,
#line 806 "equiv_type.m"
  MR_Word * parse_tree__equiv_type__HeadVar__5_5,
#line 806 "equiv_type.m"
  MR_Word parse_tree__equiv_type__STATE_VARIABLE_EquivTypeInfo_0_6,
#line 806 "equiv_type.m"
  MR_Word * parse_tree__equiv_type__STATE_VARIABLE_EquivTypeInfo_7,
#line 806 "equiv_type.m"
  MR_Word parse_tree__equiv_type__STATE_VARIABLE_UsedModules_0_8,
#line 806 "equiv_type.m"
  MR_Word * parse_tree__equiv_type__STATE_VARIABLE_UsedModules_9);

#line 765 "equiv_type.m"
static void MR_CALL 
parse_tree__equiv_type__replace_in_type_defn_13_p_0(
#line 765 "equiv_type.m"
  MR_Word parse_tree__equiv_type__MaybeRecord_14,
#line 765 "equiv_type.m"
  MR_Word parse_tree__equiv_type__TypeEqvMap_15,
#line 765 "equiv_type.m"
  MR_Word parse_tree__equiv_type__InstEqvMap_16,
#line 765 "equiv_type.m"
  MR_Word parse_tree__equiv_type__TypeCtor_17,
#line 765 "equiv_type.m"
  MR_Word parse_tree__equiv_type__TypeDefn0_18,
#line 765 "equiv_type.m"
  MR_Word * parse_tree__equiv_type__TypeDefn_19,
#line 765 "equiv_type.m"
  MR_Word * parse_tree__equiv_type__ContainsCirc_20,
#line 765 "equiv_type.m"
  MR_Word parse_tree__equiv_type__STATE_VARIABLE_VarSet_0_44,
#line 765 "equiv_type.m"
  MR_Word * parse_tree__equiv_type__STATE_VARIABLE_VarSet_45,
#line 765 "equiv_type.m"
  MR_Word parse_tree__equiv_type__STATE_VARIABLE_EquivTypeInfo_0_46,
#line 765 "equiv_type.m"
  MR_Word * parse_tree__equiv_type__STATE_VARIABLE_EquivTypeInfo_47,
#line 765 "equiv_type.m"
  MR_Word parse_tree__equiv_type__STATE_VARIABLE_UsedModules_0_48,
#line 765 "equiv_type.m"
  MR_Word * parse_tree__equiv_type__STATE_VARIABLE_UsedModules_49);

#line 681 "equiv_type.m"
static void MR_CALL 
parse_tree__equiv_type__replace_in_mutable_defn_9_p_0(
#line 681 "equiv_type.m"
  MR_Word parse_tree__equiv_type__MaybeRecord_10,
#line 681 "equiv_type.m"
  MR_Word parse_tree__equiv_type__TypeEqvMap_11,
#line 681 "equiv_type.m"
  MR_Word parse_tree__equiv_type__InstEqvMap_12,
#line 681 "equiv_type.m"
  MR_Word parse_tree__equiv_type__Info0_13,
#line 681 "equiv_type.m"
  MR_Word * parse_tree__equiv_type__Info_14,
#line 681 "equiv_type.m"
  MR_Word parse_tree__equiv_type__STATE_VARIABLE_ExpandedItems_0_30,
#line 681 "equiv_type.m"
  MR_Word * parse_tree__equiv_type__STATE_VARIABLE_ExpandedItems_31,
#line 681 "equiv_type.m"
  MR_Word parse_tree__equiv_type__STATE_VARIABLE_UsedModules_0_32,
#line 681 "equiv_type.m"
  MR_Word * parse_tree__equiv_type__STATE_VARIABLE_UsedModules_33);

#line 849 "equiv_type.m"
static void MR_CALL 
parse_tree__equiv_type__replace_in_typeclass_info_11_p_0_1(
#line 849 "equiv_type.m"
  MR_Box parse_tree__equiv_type__closure_arg,
#line 849 "equiv_type.m"
  MR_Box parse_tree__equiv_type__wrapper_arg_1,
#line 849 "equiv_type.m"
  MR_Box * parse_tree__equiv_type__wrapper_arg_2,
#line 849 "equiv_type.m"
  MR_Box parse_tree__equiv_type__wrapper_arg_3,
#line 849 "equiv_type.m"
  MR_Box * parse_tree__equiv_type__wrapper_arg_4,
#line 849 "equiv_type.m"
  MR_Box parse_tree__equiv_type__wrapper_arg_5,
#line 849 "equiv_type.m"
  MR_Box * parse_tree__equiv_type__wrapper_arg_6,
#line 849 "equiv_type.m"
  MR_Box parse_tree__equiv_type__wrapper_arg_7,
#line 849 "equiv_type.m"
  MR_Box * parse_tree__equiv_type__wrapper_arg_8);

#line 496 "equiv_type.m"
static void MR_CALL 
parse_tree__equiv_type__replace_in_typeclass_info_11_p_0(
#line 496 "equiv_type.m"
  MR_Word parse_tree__equiv_type__ModuleName_12,
#line 496 "equiv_type.m"
  MR_Word parse_tree__equiv_type__MaybeRecord_13,
#line 496 "equiv_type.m"
  MR_Word parse_tree__equiv_type__TypeEqvMap_14,
#line 496 "equiv_type.m"
  MR_Word parse_tree__equiv_type__InstEqvMap_15,
#line 496 "equiv_type.m"
  MR_Word parse_tree__equiv_type__Info0_16,
#line 496 "equiv_type.m"
  MR_Word * parse_tree__equiv_type__Info_17,
#line 496 "equiv_type.m"
  MR_Word parse_tree__equiv_type__STATE_VARIABLE_RecompInfo_0_39,
#line 496 "equiv_type.m"
  MR_Word * parse_tree__equiv_type__STATE_VARIABLE_RecompInfo_40,
#line 496 "equiv_type.m"
  MR_Word parse_tree__equiv_type__STATE_VARIABLE_UsedModules_0_41,
#line 496 "equiv_type.m"
  MR_Word * parse_tree__equiv_type__STATE_VARIABLE_UsedModules_42,
#line 496 "equiv_type.m"
  MR_Word * parse_tree__equiv_type__Specs_20);

#line 429 "equiv_type.m"
static void MR_CALL 
parse_tree__equiv_type__replace_in_pred_decl_info_11_p_0(
#line 429 "equiv_type.m"
  MR_Word parse_tree__equiv_type__ModuleName_12,
#line 429 "equiv_type.m"
  MR_Word parse_tree__equiv_type__MaybeRecord_13,
#line 429 "equiv_type.m"
  MR_Word parse_tree__equiv_type__TypeEqvMap_14,
#line 429 "equiv_type.m"
  MR_Word parse_tree__equiv_type__InstEqvMap_15,
#line 429 "equiv_type.m"
  MR_Word parse_tree__equiv_type__Info0_16,
#line 429 "equiv_type.m"
  MR_Word * parse_tree__equiv_type__Info_17,
#line 429 "equiv_type.m"
  MR_Word parse_tree__equiv_type__STATE_VARIABLE_RecompInfo_0_47,
#line 429 "equiv_type.m"
  MR_Word * parse_tree__equiv_type__STATE_VARIABLE_RecompInfo_48,
#line 429 "equiv_type.m"
  MR_Word parse_tree__equiv_type__STATE_VARIABLE_UsedModules_0_49,
#line 429 "equiv_type.m"
  MR_Word * parse_tree__equiv_type__STATE_VARIABLE_UsedModules_50,
#line 429 "equiv_type.m"
  MR_Word * parse_tree__equiv_type__Specs_20);

#line 392 "equiv_type.m"
static void MR_CALL 
parse_tree__equiv_type__replace_in_type_defn_info_11_p_0(
#line 392 "equiv_type.m"
  MR_Word parse_tree__equiv_type__ModuleName_12,
#line 392 "equiv_type.m"
  MR_Word parse_tree__equiv_type__MaybeRecord_13,
#line 392 "equiv_type.m"
  MR_Word parse_tree__equiv_type__TypeEqvMap_14,
#line 392 "equiv_type.m"
  MR_Word parse_tree__equiv_type__InstEqvMap_15,
#line 392 "equiv_type.m"
  MR_Word parse_tree__equiv_type__Info0_16,
#line 392 "equiv_type.m"
  MR_Word * parse_tree__equiv_type__Info_17,
#line 392 "equiv_type.m"
  MR_Word parse_tree__equiv_type__STATE_VARIABLE_RecompInfo_0_38,
#line 392 "equiv_type.m"
  MR_Word * parse_tree__equiv_type__STATE_VARIABLE_RecompInfo_39,
#line 392 "equiv_type.m"
  MR_Word parse_tree__equiv_type__STATE_VARIABLE_UsedModules_0_40,
#line 392 "equiv_type.m"
  MR_Word * parse_tree__equiv_type__STATE_VARIABLE_UsedModules_41,
#line 392 "equiv_type.m"
  MR_Word * parse_tree__equiv_type__Specs_20);

#line 325 "equiv_type.m"
static void MR_CALL 
parse_tree__equiv_type__replace_in_item_11_p_0(
#line 325 "equiv_type.m"
  MR_Word parse_tree__equiv_type__ModuleName_12,
#line 325 "equiv_type.m"
  MR_Word parse_tree__equiv_type__TypeEqvMap_13,
#line 325 "equiv_type.m"
  MR_Word parse_tree__equiv_type__InstEqvMap_14,
#line 325 "equiv_type.m"
  MR_Word parse_tree__equiv_type__MaybeRecord_15,
#line 325 "equiv_type.m"
  MR_Word parse_tree__equiv_type__Item0_16,
#line 325 "equiv_type.m"
  MR_Word * parse_tree__equiv_type__Item_17,
#line 325 "equiv_type.m"
  MR_Word parse_tree__equiv_type__STATE_VARIABLE_RecompInfo_0_42,
#line 325 "equiv_type.m"
  MR_Word * parse_tree__equiv_type__STATE_VARIABLE_RecompInfo_43,
#line 325 "equiv_type.m"
  MR_Word parse_tree__equiv_type__STATE_VARIABLE_UsedModules_0_44,
#line 325 "equiv_type.m"
  MR_Word * parse_tree__equiv_type__STATE_VARIABLE_UsedModules_45,
#line 325 "equiv_type.m"
  MR_Word * parse_tree__equiv_type__Specs_20);

#line 301 "equiv_type.m"
static void MR_CALL 
parse_tree__equiv_type__replace_in_items_13_p_0(
#line 301 "equiv_type.m"
  MR_Word parse_tree__equiv_type__ModuleName_1,
#line 301 "equiv_type.m"
  MR_Word parse_tree__equiv_type__TypeEqvMap_2,
#line 301 "equiv_type.m"
  MR_Word parse_tree__equiv_type__InstEqvMap_3,
#line 301 "equiv_type.m"
  MR_Word parse_tree__equiv_type__MaybeRecord_4,
#line 301 "equiv_type.m"
  MR_Word parse_tree__equiv_type__HeadVar__5_5,
#line 301 "equiv_type.m"
  MR_Word parse_tree__equiv_type__STATE_VARIABLE_RevReplItems_0_6,
#line 301 "equiv_type.m"
  MR_Word * parse_tree__equiv_type__STATE_VARIABLE_RevReplItems_7,
#line 301 "equiv_type.m"
  MR_Word parse_tree__equiv_type__STATE_VARIABLE_RecompInfo_0_8,
#line 301 "equiv_type.m"
  MR_Word * parse_tree__equiv_type__STATE_VARIABLE_RecompInfo_9,
#line 301 "equiv_type.m"
  MR_Word parse_tree__equiv_type__STATE_VARIABLE_UsedModules_0_10,
#line 301 "equiv_type.m"
  MR_Word * parse_tree__equiv_type__STATE_VARIABLE_UsedModules_11,
#line 301 "equiv_type.m"
  MR_Word parse_tree__equiv_type__STATE_VARIABLE_Specs_0_12,
#line 301 "equiv_type.m"
  MR_Word * parse_tree__equiv_type__STATE_VARIABLE_Specs_13);

#line 206 "equiv_type.m"
static void MR_CALL 
parse_tree__equiv_type__build_eqv_maps_in_items_5_p_0(
#line 206 "equiv_type.m"
  MR_Word parse_tree__equiv_type__HeadVar__1_1,
#line 206 "equiv_type.m"
  MR_Word parse_tree__equiv_type__STATE_VARIABLE_TypeEqvMap_0_2,
#line 206 "equiv_type.m"
  MR_Word * parse_tree__equiv_type__STATE_VARIABLE_TypeEqvMap_3,
#line 206 "equiv_type.m"
  MR_Word parse_tree__equiv_type__STATE_VARIABLE_InstEqvMap_0_4,
#line 206 "equiv_type.m"
  MR_Word * parse_tree__equiv_type__STATE_VARIABLE_InstEqvMap_5);

#line 958 "equiv_type.m"
static void MR_CALL 
parse_tree__equiv_type__replace_in_ctors_7_p_0_1(
#line 958 "equiv_type.m"
  MR_Box parse_tree__equiv_type__closure_arg,
#line 958 "equiv_type.m"
  MR_Box parse_tree__equiv_type__wrapper_arg_1,
#line 958 "equiv_type.m"
  MR_Box * parse_tree__equiv_type__wrapper_arg_2,
#line 958 "equiv_type.m"
  MR_Box parse_tree__equiv_type__wrapper_arg_3,
#line 958 "equiv_type.m"
  MR_Box * parse_tree__equiv_type__wrapper_arg_4,
#line 958 "equiv_type.m"
  MR_Box parse_tree__equiv_type__wrapper_arg_5,
#line 958 "equiv_type.m"
  MR_Box * parse_tree__equiv_type__wrapper_arg_6,
#line 958 "equiv_type.m"
  MR_Box parse_tree__equiv_type__wrapper_arg_7,
#line 958 "equiv_type.m"
  MR_Box * parse_tree__equiv_type__wrapper_arg_8);

#line 849 "equiv_type.m"
static void MR_CALL 
parse_tree__equiv_type__replace_in_prog_constraints_7_p_0_1(
#line 849 "equiv_type.m"
  MR_Box parse_tree__equiv_type__closure_arg,
#line 849 "equiv_type.m"
  MR_Box parse_tree__equiv_type__wrapper_arg_1,
#line 849 "equiv_type.m"
  MR_Box * parse_tree__equiv_type__wrapper_arg_2,
#line 849 "equiv_type.m"
  MR_Box parse_tree__equiv_type__wrapper_arg_3,
#line 849 "equiv_type.m"
  MR_Box * parse_tree__equiv_type__wrapper_arg_4,
#line 849 "equiv_type.m"
  MR_Box parse_tree__equiv_type__wrapper_arg_5,
#line 849 "equiv_type.m"
  MR_Box * parse_tree__equiv_type__wrapper_arg_6,
#line 849 "equiv_type.m"
  MR_Box parse_tree__equiv_type__wrapper_arg_7,
#line 849 "equiv_type.m"
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
#include "string.mh"
#include "time.mh"
#include "mdbcomp.rtti_access.mh"



#line 2270 "parse_tree.equiv_type.c"
static const MR_FA_PseudoTypeInfo_Struct2 parse_tree__equiv_type__tree234__pti_tree234_2__plain_parse_tree__prog_data__type_ctor_info_type_ctor_0__plain_parse_tree__equiv_type__type_ctor_info_eqv_type_body_0 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_PseudoTypeInfo) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_type_ctor_0,
    (MR_PseudoTypeInfo) &parse_tree__equiv_type__parse_tree__equiv_type__type_ctor_info_eqv_type_body_0
  }
};

#line 2279 "parse_tree.equiv_type.c"
static const MR_FA_PseudoTypeInfo_Struct1 parse_tree__equiv_type__varset__pti_varset_1__plain_parse_tree__prog_data__type_ctor_info_tvar_type_0 = {
  &mercury__varset__varset__type_ctor_info_varset_1,
  {
    (MR_PseudoTypeInfo) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_tvar_type_0
  }
};

#line 2287 "parse_tree.equiv_type.c"
static const MR_FA_PseudoTypeInfo_Struct1 parse_tree__equiv_type__maybe__pti_maybe_1__plain_recompilation__type_ctor_info_eqv_expanded_item_set_0 = {
  &mercury__maybe__maybe__type_ctor_info_maybe_1,
  {
    (MR_PseudoTypeInfo) &recompilation__recompilation__type_ctor_info_eqv_expanded_item_set_0
  }
};

#line 2295 "parse_tree.equiv_type.c"
static const MR_FA_PseudoTypeInfo_Struct2 parse_tree__equiv_type__tree234__pti_tree234_2__plain_parse_tree__prog_data__type_ctor_info_inst_id_0__plain_parse_tree__equiv_type__type_ctor_info_eqv_inst_body_0 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_PseudoTypeInfo) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_inst_id_0,
    (MR_PseudoTypeInfo) &parse_tree__equiv_type__parse_tree__equiv_type__type_ctor_info_eqv_inst_body_0
  }
};

#line 2304 "parse_tree.equiv_type.c"
static const MR_FA_PseudoTypeInfo_Struct1 parse_tree__equiv_type__list__pti_list_1__plain_parse_tree__error_util__type_ctor_info_error_spec_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  {
    (MR_PseudoTypeInfo) &parse_tree__error_util__parse_tree__error_util__type_ctor_info_error_spec_0
  }
};

#line 2312 "parse_tree.equiv_type.c"
static const MR_FA_PseudoTypeInfo_Struct2 parse_tree__equiv_type__pair__pti_pair_2__plain_parse_tree__prog_data__type_ctor_info_mer_type_0__plain_parse_tree__prog_data__type_ctor_info_mer_mode_0 = {
  &mercury__pair__pair__type_ctor_info_pair_2,
  {
    (MR_PseudoTypeInfo) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0,
    (MR_PseudoTypeInfo) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_mode_0
  }
};

#line 2321 "parse_tree.equiv_type.c"
static const MR_FA_PseudoTypeInfo_Struct2 parse_tree__equiv_type__pair__pti_pair_2__plain_parse_tree__prog_data__type_ctor_info_datastruct_0__plain_parse_tree__prog_data__type_ctor_info_datastruct_0 = {
  &mercury__pair__pair__type_ctor_info_pair_2,
  {
    (MR_PseudoTypeInfo) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_datastruct_0,
    (MR_PseudoTypeInfo) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_datastruct_0
  }
};

#line 2330 "parse_tree.equiv_type.c"
static const MR_FA_TypeInfo_Struct1 parse_tree__equiv_type__varset__ti_varset_1parse_tree__prog_data__type_ctor_info_inst_var_type_0 = {
  &mercury__varset__varset__type_ctor_info_varset_1,
  {
    (MR_TypeInfo) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_inst_var_type_0
  }
};

#line 2338 "parse_tree.equiv_type.c"
static const MR_FA_TypeInfo_Struct1 parse_tree__equiv_type__term__ti_var_1parse_tree__prog_data__type_ctor_info_inst_var_type_0 = {
  &mercury__term__term__type_ctor_info_var_1,
  {
    (MR_TypeInfo) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_inst_var_type_0
  }
};

#line 2346 "parse_tree.equiv_type.c"
static const MR_FA_TypeInfo_Struct1 parse_tree__equiv_type__list__ti_list_1term__ti_var_1parse_tree__prog_data__type_ctor_info_inst_var_type_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  {
    (MR_TypeInfo) &parse_tree__equiv_type__term__ti_var_1parse_tree__prog_data__type_ctor_info_inst_var_type_0
  }
};

#line 2354 "parse_tree.equiv_type.c"
static const MR_PseudoTypeInfo parse_tree__equiv_type__parse_tree__equiv_type__field_types_eqv_inst_body_0_0[3] = {
  (MR_PseudoTypeInfo) &parse_tree__equiv_type__varset__ti_varset_1parse_tree__prog_data__type_ctor_info_inst_var_type_0,
  (MR_PseudoTypeInfo) &parse_tree__equiv_type__list__ti_list_1term__ti_var_1parse_tree__prog_data__type_ctor_info_inst_var_type_0,
  (MR_PseudoTypeInfo) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_inst_0
};

#line 2361 "parse_tree.equiv_type.c"
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

#line 2376 "parse_tree.equiv_type.c"
static const MR_DuFunctorDescPtr parse_tree__equiv_type__parse_tree__equiv_type__du_stag_ordered_eqv_inst_body_0_0[1] = {
  &parse_tree__equiv_type__parse_tree__equiv_type__du_functor_desc_eqv_inst_body_0_0
};

#line 2381 "parse_tree.equiv_type.c"
static const MR_DuPtagLayout parse_tree__equiv_type__parse_tree__equiv_type__du_ptag_ordered_eqv_inst_body_0[1] = {
  {
    (MR_Integer) 1,
    mercury__private_builtin__MR_SECTAG_NONE,
    parse_tree__equiv_type__parse_tree__equiv_type__du_stag_ordered_eqv_inst_body_0_0
  }
};

#line 2390 "parse_tree.equiv_type.c"
static const MR_DuFunctorDescPtr parse_tree__equiv_type__parse_tree__equiv_type__du_name_ordered_eqv_inst_body_0[1] = {
  &parse_tree__equiv_type__parse_tree__equiv_type__du_functor_desc_eqv_inst_body_0_0
};

#line 2395 "parse_tree.equiv_type.c"
static const MR_Integer parse_tree__equiv_type__parse_tree__equiv_type__functor_number_map_eqv_inst_body_0[1] = {
  (MR_Integer) 0
};

#line 2400 "parse_tree.equiv_type.c"
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

#line 2417 "parse_tree.equiv_type.c"
static const MR_FA_TypeInfo_Struct1 parse_tree__equiv_type__varset__ti_varset_1parse_tree__prog_data__type_ctor_info_tvar_type_0 = {
  &mercury__varset__varset__type_ctor_info_varset_1,
  {
    (MR_TypeInfo) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_tvar_type_0
  }
};

#line 2425 "parse_tree.equiv_type.c"
static const MR_FA_TypeInfo_Struct1 parse_tree__equiv_type__term__ti_var_1parse_tree__prog_data__type_ctor_info_tvar_type_0 = {
  &mercury__term__term__type_ctor_info_var_1,
  {
    (MR_TypeInfo) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_tvar_type_0
  }
};

#line 2433 "parse_tree.equiv_type.c"
static const MR_FA_TypeInfo_Struct1 parse_tree__equiv_type__list__ti_list_1term__ti_var_1parse_tree__prog_data__type_ctor_info_tvar_type_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  {
    (MR_TypeInfo) &parse_tree__equiv_type__term__ti_var_1parse_tree__prog_data__type_ctor_info_tvar_type_0
  }
};

#line 2441 "parse_tree.equiv_type.c"
static const MR_PseudoTypeInfo parse_tree__equiv_type__parse_tree__equiv_type__field_types_eqv_type_body_0_0[3] = {
  (MR_PseudoTypeInfo) &parse_tree__equiv_type__varset__ti_varset_1parse_tree__prog_data__type_ctor_info_tvar_type_0,
  (MR_PseudoTypeInfo) &parse_tree__equiv_type__list__ti_list_1term__ti_var_1parse_tree__prog_data__type_ctor_info_tvar_type_0,
  (MR_PseudoTypeInfo) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0
};

#line 2448 "parse_tree.equiv_type.c"
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

#line 2463 "parse_tree.equiv_type.c"
static const MR_DuFunctorDescPtr parse_tree__equiv_type__parse_tree__equiv_type__du_stag_ordered_eqv_type_body_0_0[1] = {
  &parse_tree__equiv_type__parse_tree__equiv_type__du_functor_desc_eqv_type_body_0_0
};

#line 2468 "parse_tree.equiv_type.c"
static const MR_DuPtagLayout parse_tree__equiv_type__parse_tree__equiv_type__du_ptag_ordered_eqv_type_body_0[1] = {
  {
    (MR_Integer) 1,
    mercury__private_builtin__MR_SECTAG_NONE,
    parse_tree__equiv_type__parse_tree__equiv_type__du_stag_ordered_eqv_type_body_0_0
  }
};

#line 2477 "parse_tree.equiv_type.c"
static const MR_DuFunctorDescPtr parse_tree__equiv_type__parse_tree__equiv_type__du_name_ordered_eqv_type_body_0[1] = {
  &parse_tree__equiv_type__parse_tree__equiv_type__du_functor_desc_eqv_type_body_0_0
};

#line 2482 "parse_tree.equiv_type.c"
static const MR_Integer parse_tree__equiv_type__parse_tree__equiv_type__functor_number_map_eqv_type_body_0[1] = {
  (MR_Integer) 0
};

#line 2487 "parse_tree.equiv_type.c"
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

#line 2504 "parse_tree.equiv_type.c"
static const MR_FA_TypeInfo_Struct2 parse_tree__equiv_type__tree234__ti_tree234_2parse_tree__prog_data__type_ctor_info_inst_id_0parse_tree__equiv_type__type_ctor_info_eqv_inst_body_0 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_TypeInfo) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_inst_id_0,
    (MR_TypeInfo) &parse_tree__equiv_type__parse_tree__equiv_type__type_ctor_info_eqv_inst_body_0
  }
};

#line 2513 "parse_tree.equiv_type.c"
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

#line 2530 "parse_tree.equiv_type.c"
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

#line 2545 "parse_tree.equiv_type.c"
static const MR_PseudoTypeInfo parse_tree__equiv_type__parse_tree__equiv_type__field_types_maybe_record_sym_name_use_0_1[1] = {
  (MR_PseudoTypeInfo) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_item_visibility_0
};

#line 2550 "parse_tree.equiv_type.c"
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

#line 2565 "parse_tree.equiv_type.c"
static const MR_DuFunctorDescPtr parse_tree__equiv_type__parse_tree__equiv_type__du_stag_ordered_maybe_record_sym_name_use_0_0[1] = {
  &parse_tree__equiv_type__parse_tree__equiv_type__du_functor_desc_maybe_record_sym_name_use_0_0
};

#line 2570 "parse_tree.equiv_type.c"
static const MR_DuFunctorDescPtr parse_tree__equiv_type__parse_tree__equiv_type__du_stag_ordered_maybe_record_sym_name_use_0_1[1] = {
  &parse_tree__equiv_type__parse_tree__equiv_type__du_functor_desc_maybe_record_sym_name_use_0_1
};

#line 2575 "parse_tree.equiv_type.c"
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

#line 2589 "parse_tree.equiv_type.c"
static const MR_DuFunctorDescPtr parse_tree__equiv_type__parse_tree__equiv_type__du_name_ordered_maybe_record_sym_name_use_0[2] = {
  &parse_tree__equiv_type__parse_tree__equiv_type__du_functor_desc_maybe_record_sym_name_use_0_0,
  &parse_tree__equiv_type__parse_tree__equiv_type__du_functor_desc_maybe_record_sym_name_use_0_1
};

#line 2595 "parse_tree.equiv_type.c"
static const MR_Integer parse_tree__equiv_type__parse_tree__equiv_type__functor_number_map_maybe_record_sym_name_use_0[2] = {
  (MR_Integer) 0,
  (MR_Integer) 1
};

#line 2601 "parse_tree.equiv_type.c"
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

#line 2618 "parse_tree.equiv_type.c"
static const MR_EnumFunctorDesc parse_tree__equiv_type__parse_tree__equiv_type__enum_functor_desc_pred_or_func_decl_type_0_0 = {
  (MR_String) "type_decl",
  (MR_Integer) 0
};

#line 2624 "parse_tree.equiv_type.c"
static const MR_EnumFunctorDesc parse_tree__equiv_type__parse_tree__equiv_type__enum_functor_desc_pred_or_func_decl_type_0_1 = {
  (MR_String) "mode_decl",
  (MR_Integer) 1
};

#line 2630 "parse_tree.equiv_type.c"
static const MR_EnumFunctorDescPtr parse_tree__equiv_type__parse_tree__equiv_type__enum_value_ordered_pred_or_func_decl_type_0[2] = {
  &parse_tree__equiv_type__parse_tree__equiv_type__enum_functor_desc_pred_or_func_decl_type_0_0,
  &parse_tree__equiv_type__parse_tree__equiv_type__enum_functor_desc_pred_or_func_decl_type_0_1
};

#line 2636 "parse_tree.equiv_type.c"
static const MR_EnumFunctorDescPtr parse_tree__equiv_type__parse_tree__equiv_type__enum_name_ordered_pred_or_func_decl_type_0[2] = {
  &parse_tree__equiv_type__parse_tree__equiv_type__enum_functor_desc_pred_or_func_decl_type_0_1,
  &parse_tree__equiv_type__parse_tree__equiv_type__enum_functor_desc_pred_or_func_decl_type_0_0
};

#line 2642 "parse_tree.equiv_type.c"
static const MR_Integer parse_tree__equiv_type__parse_tree__equiv_type__functor_number_map_pred_or_func_decl_type_0[2] = {
  (MR_Integer) 1,
  (MR_Integer) 0
};

#line 2648 "parse_tree.equiv_type.c"
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

#line 2665 "parse_tree.equiv_type.c"
static const MR_VA_PseudoTypeInfo_Struct2 parse_tree__equiv_type____vpti_func_2__pseudo_1__plain_parse_tree__equiv_type__type_ctor_info_maybe_record_sym_name_use_0 = {
  &mercury__builtin__builtin__type_ctor_info_func_0,
  (MR_Integer) 2,
  {
    (MR_PseudoTypeInfo) (MR_Integer) 1,
    (MR_PseudoTypeInfo) &parse_tree__equiv_type__parse_tree__equiv_type__type_ctor_info_maybe_record_sym_name_use_0
  }
};

#line 2675 "parse_tree.equiv_type.c"
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

#line 2692 "parse_tree.equiv_type.c"
static const MR_FA_TypeInfo_Struct2 parse_tree__equiv_type__tree234__ti_tree234_2parse_tree__prog_data__type_ctor_info_type_ctor_0parse_tree__equiv_type__type_ctor_info_eqv_type_body_0 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_TypeInfo) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_type_ctor_0,
    (MR_TypeInfo) &parse_tree__equiv_type__parse_tree__equiv_type__type_ctor_info_eqv_type_body_0
  }
};

#line 2701 "parse_tree.equiv_type.c"
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

#line 2718 "parse_tree.equiv_type.c"
static MR_bool MR_CALL 
parse_tree__equiv_type____Unify____eqv_inst_body_0_0_10001(
#line 2721 "parse_tree.equiv_type.c"
  MR_Box parse_tree__equiv_type__wrapper_arg_1,
#line 2723 "parse_tree.equiv_type.c"
  MR_Box parse_tree__equiv_type__wrapper_arg_2)
#line 2725 "parse_tree.equiv_type.c"
{
#line 2727 "parse_tree.equiv_type.c"
  {
#line 2729 "parse_tree.equiv_type.c"
    MR_bool parse_tree__equiv_type__succeeded;

#line 2732 "parse_tree.equiv_type.c"
    {
#line 2734 "parse_tree.equiv_type.c"
      parse_tree__equiv_type__succeeded = parse_tree__equiv_type____Unify____eqv_inst_body_0_0(((MR_Word) parse_tree__equiv_type__wrapper_arg_1), ((MR_Word) parse_tree__equiv_type__wrapper_arg_2));
    }
#line 2737 "parse_tree.equiv_type.c"
    return parse_tree__equiv_type__succeeded;
#line 2739 "parse_tree.equiv_type.c"
  }
#line 2741 "parse_tree.equiv_type.c"
}

#line 2744 "parse_tree.equiv_type.c"
static void MR_CALL 
parse_tree__equiv_type____Compare____eqv_inst_body_0_0_10001(
#line 2747 "parse_tree.equiv_type.c"
  MR_Box * parse_tree__equiv_type__wrapper_arg_1,
#line 2749 "parse_tree.equiv_type.c"
  MR_Box parse_tree__equiv_type__wrapper_arg_2,
#line 2751 "parse_tree.equiv_type.c"
  MR_Box parse_tree__equiv_type__wrapper_arg_3)
#line 2753 "parse_tree.equiv_type.c"
{
#line 2755 "parse_tree.equiv_type.c"
  {
#line 2757 "parse_tree.equiv_type.c"
    MR_Word parse_tree__equiv_type__conv0_HeadVar__1_1;

#line 2760 "parse_tree.equiv_type.c"
    {
#line 2762 "parse_tree.equiv_type.c"
      parse_tree__equiv_type____Compare____eqv_inst_body_0_0(&parse_tree__equiv_type__conv0_HeadVar__1_1, ((MR_Word) parse_tree__equiv_type__wrapper_arg_2), ((MR_Word) parse_tree__equiv_type__wrapper_arg_3));
    }
#line 2765 "parse_tree.equiv_type.c"
    *parse_tree__equiv_type__wrapper_arg_1 = ((MR_Box) (parse_tree__equiv_type__conv0_HeadVar__1_1));
#line 2767 "parse_tree.equiv_type.c"
  }
#line 2769 "parse_tree.equiv_type.c"
}

#line 2772 "parse_tree.equiv_type.c"
static MR_bool MR_CALL 
parse_tree__equiv_type____Unify____eqv_type_body_0_0_10001(
#line 2775 "parse_tree.equiv_type.c"
  MR_Box parse_tree__equiv_type__wrapper_arg_1,
#line 2777 "parse_tree.equiv_type.c"
  MR_Box parse_tree__equiv_type__wrapper_arg_2)
#line 2779 "parse_tree.equiv_type.c"
{
#line 2781 "parse_tree.equiv_type.c"
  {
#line 2783 "parse_tree.equiv_type.c"
    MR_bool parse_tree__equiv_type__succeeded;

#line 2786 "parse_tree.equiv_type.c"
    {
#line 2788 "parse_tree.equiv_type.c"
      parse_tree__equiv_type__succeeded = parse_tree__equiv_type____Unify____eqv_type_body_0_0(((MR_Word) parse_tree__equiv_type__wrapper_arg_1), ((MR_Word) parse_tree__equiv_type__wrapper_arg_2));
    }
#line 2791 "parse_tree.equiv_type.c"
    return parse_tree__equiv_type__succeeded;
#line 2793 "parse_tree.equiv_type.c"
  }
#line 2795 "parse_tree.equiv_type.c"
}

#line 2798 "parse_tree.equiv_type.c"
static void MR_CALL 
parse_tree__equiv_type____Compare____eqv_type_body_0_0_10001(
#line 2801 "parse_tree.equiv_type.c"
  MR_Box * parse_tree__equiv_type__wrapper_arg_1,
#line 2803 "parse_tree.equiv_type.c"
  MR_Box parse_tree__equiv_type__wrapper_arg_2,
#line 2805 "parse_tree.equiv_type.c"
  MR_Box parse_tree__equiv_type__wrapper_arg_3)
#line 2807 "parse_tree.equiv_type.c"
{
#line 2809 "parse_tree.equiv_type.c"
  {
#line 2811 "parse_tree.equiv_type.c"
    MR_Word parse_tree__equiv_type__conv0_HeadVar__1_1;

#line 2814 "parse_tree.equiv_type.c"
    {
#line 2816 "parse_tree.equiv_type.c"
      parse_tree__equiv_type____Compare____eqv_type_body_0_0(&parse_tree__equiv_type__conv0_HeadVar__1_1, ((MR_Word) parse_tree__equiv_type__wrapper_arg_2), ((MR_Word) parse_tree__equiv_type__wrapper_arg_3));
    }
#line 2819 "parse_tree.equiv_type.c"
    *parse_tree__equiv_type__wrapper_arg_1 = ((MR_Box) (parse_tree__equiv_type__conv0_HeadVar__1_1));
#line 2821 "parse_tree.equiv_type.c"
  }
#line 2823 "parse_tree.equiv_type.c"
}

#line 2826 "parse_tree.equiv_type.c"
static MR_bool MR_CALL 
parse_tree__equiv_type____Unify____inst_eqv_map_0_0_10001(
#line 2829 "parse_tree.equiv_type.c"
  MR_Box parse_tree__equiv_type__wrapper_arg_1,
#line 2831 "parse_tree.equiv_type.c"
  MR_Box parse_tree__equiv_type__wrapper_arg_2)
#line 2833 "parse_tree.equiv_type.c"
{
#line 2835 "parse_tree.equiv_type.c"
  {
#line 2837 "parse_tree.equiv_type.c"
    MR_bool parse_tree__equiv_type__succeeded;

#line 2840 "parse_tree.equiv_type.c"
    {
#line 2842 "parse_tree.equiv_type.c"
      parse_tree__equiv_type__succeeded = parse_tree__equiv_type____Unify____inst_eqv_map_0_0(((MR_Word) parse_tree__equiv_type__wrapper_arg_1), ((MR_Word) parse_tree__equiv_type__wrapper_arg_2));
    }
#line 2845 "parse_tree.equiv_type.c"
    return parse_tree__equiv_type__succeeded;
#line 2847 "parse_tree.equiv_type.c"
  }
#line 2849 "parse_tree.equiv_type.c"
}

#line 2852 "parse_tree.equiv_type.c"
static void MR_CALL 
parse_tree__equiv_type____Compare____inst_eqv_map_0_0_10001(
#line 2855 "parse_tree.equiv_type.c"
  MR_Box * parse_tree__equiv_type__wrapper_arg_1,
#line 2857 "parse_tree.equiv_type.c"
  MR_Box parse_tree__equiv_type__wrapper_arg_2,
#line 2859 "parse_tree.equiv_type.c"
  MR_Box parse_tree__equiv_type__wrapper_arg_3)
#line 2861 "parse_tree.equiv_type.c"
{
#line 2863 "parse_tree.equiv_type.c"
  {
#line 2865 "parse_tree.equiv_type.c"
    MR_Word parse_tree__equiv_type__conv0_HeadVar__1_1;

#line 2868 "parse_tree.equiv_type.c"
    {
#line 2870 "parse_tree.equiv_type.c"
      parse_tree__equiv_type____Compare____inst_eqv_map_0_0(&parse_tree__equiv_type__conv0_HeadVar__1_1, ((MR_Word) parse_tree__equiv_type__wrapper_arg_2), ((MR_Word) parse_tree__equiv_type__wrapper_arg_3));
    }
#line 2873 "parse_tree.equiv_type.c"
    *parse_tree__equiv_type__wrapper_arg_1 = ((MR_Box) (parse_tree__equiv_type__conv0_HeadVar__1_1));
#line 2875 "parse_tree.equiv_type.c"
  }
#line 2877 "parse_tree.equiv_type.c"
}

#line 2880 "parse_tree.equiv_type.c"
static MR_bool MR_CALL 
parse_tree__equiv_type____Unify____maybe_record_sym_name_use_0_0_10001(
#line 2883 "parse_tree.equiv_type.c"
  MR_Box parse_tree__equiv_type__wrapper_arg_1,
#line 2885 "parse_tree.equiv_type.c"
  MR_Box parse_tree__equiv_type__wrapper_arg_2)
#line 2887 "parse_tree.equiv_type.c"
{
#line 2889 "parse_tree.equiv_type.c"
  {
#line 2891 "parse_tree.equiv_type.c"
    MR_bool parse_tree__equiv_type__succeeded;

#line 2894 "parse_tree.equiv_type.c"
    {
#line 2896 "parse_tree.equiv_type.c"
      parse_tree__equiv_type__succeeded = parse_tree__equiv_type____Unify____maybe_record_sym_name_use_0_0(((MR_Word) parse_tree__equiv_type__wrapper_arg_1), ((MR_Word) parse_tree__equiv_type__wrapper_arg_2));
    }
#line 2899 "parse_tree.equiv_type.c"
    return parse_tree__equiv_type__succeeded;
#line 2901 "parse_tree.equiv_type.c"
  }
#line 2903 "parse_tree.equiv_type.c"
}

#line 2906 "parse_tree.equiv_type.c"
static void MR_CALL 
parse_tree__equiv_type____Compare____maybe_record_sym_name_use_0_0_10001(
#line 2909 "parse_tree.equiv_type.c"
  MR_Box * parse_tree__equiv_type__wrapper_arg_1,
#line 2911 "parse_tree.equiv_type.c"
  MR_Box parse_tree__equiv_type__wrapper_arg_2,
#line 2913 "parse_tree.equiv_type.c"
  MR_Box parse_tree__equiv_type__wrapper_arg_3)
#line 2915 "parse_tree.equiv_type.c"
{
#line 2917 "parse_tree.equiv_type.c"
  {
#line 2919 "parse_tree.equiv_type.c"
    MR_Word parse_tree__equiv_type__conv0_HeadVar__1_1;

#line 2922 "parse_tree.equiv_type.c"
    {
#line 2924 "parse_tree.equiv_type.c"
      parse_tree__equiv_type____Compare____maybe_record_sym_name_use_0_0(&parse_tree__equiv_type__conv0_HeadVar__1_1, ((MR_Word) parse_tree__equiv_type__wrapper_arg_2), ((MR_Word) parse_tree__equiv_type__wrapper_arg_3));
    }
#line 2927 "parse_tree.equiv_type.c"
    *parse_tree__equiv_type__wrapper_arg_1 = ((MR_Box) (parse_tree__equiv_type__conv0_HeadVar__1_1));
#line 2929 "parse_tree.equiv_type.c"
  }
#line 2931 "parse_tree.equiv_type.c"
}

#line 2934 "parse_tree.equiv_type.c"
static MR_bool MR_CALL 
parse_tree__equiv_type____Unify____pred_or_func_decl_type_0_0_10001(
#line 2937 "parse_tree.equiv_type.c"
  MR_Box parse_tree__equiv_type__wrapper_arg_1,
#line 2939 "parse_tree.equiv_type.c"
  MR_Box parse_tree__equiv_type__wrapper_arg_2)
#line 2941 "parse_tree.equiv_type.c"
{
#line 2943 "parse_tree.equiv_type.c"
  {
#line 2945 "parse_tree.equiv_type.c"
    MR_bool parse_tree__equiv_type__succeeded;

#line 2948 "parse_tree.equiv_type.c"
    {
#line 2950 "parse_tree.equiv_type.c"
      parse_tree__equiv_type__succeeded = parse_tree__equiv_type____Unify____pred_or_func_decl_type_0_0(((MR_Word) parse_tree__equiv_type__wrapper_arg_1), ((MR_Word) parse_tree__equiv_type__wrapper_arg_2));
    }
#line 2953 "parse_tree.equiv_type.c"
    return parse_tree__equiv_type__succeeded;
#line 2955 "parse_tree.equiv_type.c"
  }
#line 2957 "parse_tree.equiv_type.c"
}

#line 2960 "parse_tree.equiv_type.c"
static void MR_CALL 
parse_tree__equiv_type____Compare____pred_or_func_decl_type_0_0_10001(
#line 2963 "parse_tree.equiv_type.c"
  MR_Box * parse_tree__equiv_type__wrapper_arg_1,
#line 2965 "parse_tree.equiv_type.c"
  MR_Box parse_tree__equiv_type__wrapper_arg_2,
#line 2967 "parse_tree.equiv_type.c"
  MR_Box parse_tree__equiv_type__wrapper_arg_3)
#line 2969 "parse_tree.equiv_type.c"
{
#line 2971 "parse_tree.equiv_type.c"
  {
#line 2973 "parse_tree.equiv_type.c"
    MR_Word parse_tree__equiv_type__conv0_HeadVar__1_1;

#line 2976 "parse_tree.equiv_type.c"
    {
#line 2978 "parse_tree.equiv_type.c"
      parse_tree__equiv_type____Compare____pred_or_func_decl_type_0_0(&parse_tree__equiv_type__conv0_HeadVar__1_1, ((MR_Word) parse_tree__equiv_type__wrapper_arg_2), ((MR_Word) parse_tree__equiv_type__wrapper_arg_3));
    }
#line 2981 "parse_tree.equiv_type.c"
    *parse_tree__equiv_type__wrapper_arg_1 = ((MR_Box) (parse_tree__equiv_type__conv0_HeadVar__1_1));
#line 2983 "parse_tree.equiv_type.c"
  }
#line 2985 "parse_tree.equiv_type.c"
}

#line 2988 "parse_tree.equiv_type.c"
static MR_bool MR_CALL 
parse_tree__equiv_type____Unify____section_maybe_record_sym_name_use_1_0_10001(
#line 2991 "parse_tree.equiv_type.c"
  MR_Box parse_tree__equiv_type__wrapper_arg_1,
#line 2993 "parse_tree.equiv_type.c"
  MR_Box parse_tree__equiv_type__wrapper_arg_2,
#line 2995 "parse_tree.equiv_type.c"
  MR_Box parse_tree__equiv_type__wrapper_arg_3)
#line 2997 "parse_tree.equiv_type.c"
{
#line 2999 "parse_tree.equiv_type.c"
  {
#line 3001 "parse_tree.equiv_type.c"
    MR_bool parse_tree__equiv_type__succeeded;

#line 3004 "parse_tree.equiv_type.c"
    {
#line 3006 "parse_tree.equiv_type.c"
      parse_tree__equiv_type__succeeded = parse_tree__equiv_type____Unify____section_maybe_record_sym_name_use_1_0(((MR_Word) parse_tree__equiv_type__wrapper_arg_1), ((MR_Word) parse_tree__equiv_type__wrapper_arg_2), ((MR_Word) parse_tree__equiv_type__wrapper_arg_3));
    }
#line 3009 "parse_tree.equiv_type.c"
    return parse_tree__equiv_type__succeeded;
#line 3011 "parse_tree.equiv_type.c"
  }
#line 3013 "parse_tree.equiv_type.c"
}

#line 3016 "parse_tree.equiv_type.c"
static void MR_CALL 
parse_tree__equiv_type____Compare____section_maybe_record_sym_name_use_1_0_10001(
#line 3019 "parse_tree.equiv_type.c"
  MR_Box parse_tree__equiv_type__wrapper_arg_1,
#line 3021 "parse_tree.equiv_type.c"
  MR_Box * parse_tree__equiv_type__wrapper_arg_2,
#line 3023 "parse_tree.equiv_type.c"
  MR_Box parse_tree__equiv_type__wrapper_arg_3,
#line 3025 "parse_tree.equiv_type.c"
  MR_Box parse_tree__equiv_type__wrapper_arg_4)
#line 3027 "parse_tree.equiv_type.c"
{
#line 3029 "parse_tree.equiv_type.c"
  {
#line 3031 "parse_tree.equiv_type.c"
    MR_Word parse_tree__equiv_type__conv0_HeadVar__1_1;

#line 3034 "parse_tree.equiv_type.c"
    {
#line 3036 "parse_tree.equiv_type.c"
      parse_tree__equiv_type____Compare____section_maybe_record_sym_name_use_1_0(((MR_Word) parse_tree__equiv_type__wrapper_arg_1), &parse_tree__equiv_type__conv0_HeadVar__1_1, ((MR_Word) parse_tree__equiv_type__wrapper_arg_3), ((MR_Word) parse_tree__equiv_type__wrapper_arg_4));
    }
#line 3039 "parse_tree.equiv_type.c"
    *parse_tree__equiv_type__wrapper_arg_2 = ((MR_Box) (parse_tree__equiv_type__conv0_HeadVar__1_1));
#line 3041 "parse_tree.equiv_type.c"
  }
#line 3043 "parse_tree.equiv_type.c"
}

#line 3046 "parse_tree.equiv_type.c"
static MR_bool MR_CALL 
parse_tree__equiv_type____Unify____type_eqv_map_0_0_10001(
#line 3049 "parse_tree.equiv_type.c"
  MR_Box parse_tree__equiv_type__wrapper_arg_1,
#line 3051 "parse_tree.equiv_type.c"
  MR_Box parse_tree__equiv_type__wrapper_arg_2)
#line 3053 "parse_tree.equiv_type.c"
{
#line 3055 "parse_tree.equiv_type.c"
  {
#line 3057 "parse_tree.equiv_type.c"
    MR_bool parse_tree__equiv_type__succeeded;

#line 3060 "parse_tree.equiv_type.c"
    {
#line 3062 "parse_tree.equiv_type.c"
      parse_tree__equiv_type__succeeded = parse_tree__equiv_type____Unify____type_eqv_map_0_0(((MR_Word) parse_tree__equiv_type__wrapper_arg_1), ((MR_Word) parse_tree__equiv_type__wrapper_arg_2));
    }
#line 3065 "parse_tree.equiv_type.c"
    return parse_tree__equiv_type__succeeded;
#line 3067 "parse_tree.equiv_type.c"
  }
#line 3069 "parse_tree.equiv_type.c"
}

#line 3072 "parse_tree.equiv_type.c"
static void MR_CALL 
parse_tree__equiv_type____Compare____type_eqv_map_0_0_10001(
#line 3075 "parse_tree.equiv_type.c"
  MR_Box * parse_tree__equiv_type__wrapper_arg_1,
#line 3077 "parse_tree.equiv_type.c"
  MR_Box parse_tree__equiv_type__wrapper_arg_2,
#line 3079 "parse_tree.equiv_type.c"
  MR_Box parse_tree__equiv_type__wrapper_arg_3)
#line 3081 "parse_tree.equiv_type.c"
{
#line 3083 "parse_tree.equiv_type.c"
  {
#line 3085 "parse_tree.equiv_type.c"
    MR_Word parse_tree__equiv_type__conv0_HeadVar__1_1;

#line 3088 "parse_tree.equiv_type.c"
    {
#line 3090 "parse_tree.equiv_type.c"
      parse_tree__equiv_type____Compare____type_eqv_map_0_0(&parse_tree__equiv_type__conv0_HeadVar__1_1, ((MR_Word) parse_tree__equiv_type__wrapper_arg_2), ((MR_Word) parse_tree__equiv_type__wrapper_arg_3));
    }
#line 3093 "parse_tree.equiv_type.c"
    *parse_tree__equiv_type__wrapper_arg_1 = ((MR_Box) (parse_tree__equiv_type__conv0_HeadVar__1_1));
#line 3095 "parse_tree.equiv_type.c"
  }
#line 3097 "parse_tree.equiv_type.c"
}

#line 246 "equiv_type.m"
static void MR_CALL 
parse_tree__equiv_type__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_95_95_67_111_109_112_97_114_101_95_95_95_112_97_114_115_101_95_116_114_101_101_95_95_101_113_117_105_118_95_116_121_112_101_95_95_115_101_99_116_105_111_110_95_109_97_121_98_101_95_114_101_99_111_114_100_95_115_121_109_95_110_97_109_101_95_117_115_101_95_49_95_95_91_49_93_95_48_3_p_0(
#line 246 "equiv_type.m"
  MR_Word * parse_tree__equiv_type__HeadVar__1_1,
#line 246 "equiv_type.m"
  MR_Word parse_tree__equiv_type__HeadVar__2_2,
#line 246 "equiv_type.m"
  MR_Word parse_tree__equiv_type__HeadVar__3_3)
#line 246 "equiv_type.m"
{
#line 246 "equiv_type.m"
  {
#line 246 "equiv_type.m"
    MR_bool parse_tree__equiv_type__succeeded;
#line 246 "equiv_type.m"
    MR_Word parse_tree__equiv_type__Cast_HeadVar1_4 = parse_tree__equiv_type__HeadVar__2_2;
#line 246 "equiv_type.m"
    MR_Word parse_tree__equiv_type__Cast_HeadVar2_5 = parse_tree__equiv_type__HeadVar__3_3;

#line 246 "equiv_type.m"
    {
#line 246 "equiv_type.m"
      mercury__private_builtin__builtin_compare_pred_3_p_0(parse_tree__equiv_type__HeadVar__1_1, (MR_Word) parse_tree__equiv_type__Cast_HeadVar1_4, (MR_Word) parse_tree__equiv_type__Cast_HeadVar2_5);
#line 246 "equiv_type.m"
      return;
    }
#line 246 "equiv_type.m"
  }
#line 246 "equiv_type.m"
}

#line 246 "equiv_type.m"
static MR_bool MR_CALL 
parse_tree__equiv_type__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_95_95_85_110_105_102_121_95_95_95_112_97_114_115_101_95_116_114_101_101_95_95_101_113_117_105_118_95_116_121_112_101_95_95_115_101_99_116_105_111_110_95_109_97_121_98_101_95_114_101_99_111_114_100_95_115_121_109_95_110_97_109_101_95_117_115_101_95_49_95_95_91_49_93_95_48_2_p_0(
#line 246 "equiv_type.m"
  MR_Word parse_tree__equiv_type__HeadVar__1_1,
#line 246 "equiv_type.m"
  MR_Word parse_tree__equiv_type__HeadVar__2_2)
#line 246 "equiv_type.m"
{
#line 246 "equiv_type.m"
  {
#line 246 "equiv_type.m"
    MR_bool parse_tree__equiv_type__succeeded;
#line 246 "equiv_type.m"
    MR_Word parse_tree__equiv_type__Cast_HeadVar1_3 = parse_tree__equiv_type__HeadVar__1_1;
#line 246 "equiv_type.m"
    MR_Word parse_tree__equiv_type__Cast_HeadVar2_4 = parse_tree__equiv_type__HeadVar__2_2;

#line 246 "equiv_type.m"
    {
#line 246 "equiv_type.m"
      return parse_tree__equiv_type__succeeded = mercury__private_builtin__builtin_unify_pred_2_p_0((MR_Word) parse_tree__equiv_type__Cast_HeadVar1_3, (MR_Word) parse_tree__equiv_type__Cast_HeadVar2_4);
    }
#line 246 "equiv_type.m"
    return parse_tree__equiv_type__succeeded;
#line 246 "equiv_type.m"
  }
#line 246 "equiv_type.m"
}

#line 1394 "equiv_type.m"
static void MR_CALL 
parse_tree__equiv_type__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_114_101_112_108_97_99_101_95_105_110_95_112_114_101_100_95_109_111_100_101_95_95_91_49_93_95_48_18_p_0(
#line 1394 "equiv_type.m"
  MR_Word parse_tree__equiv_type__InstEqvMap_20,
#line 1394 "equiv_type.m"
  MR_Word parse_tree__equiv_type__PredName_21,
#line 1394 "equiv_type.m"
  MR_Integer parse_tree__equiv_type__OrigArity_22,
#line 1394 "equiv_type.m"
  MR_Word parse_tree__equiv_type__Context_23,
#line 1394 "equiv_type.m"
  MR_Word parse_tree__equiv_type__DeclType_24,
#line 1394 "equiv_type.m"
  MR_Word * parse_tree__equiv_type__ExtraModes_25,
#line 1394 "equiv_type.m"
  MR_Word parse_tree__equiv_type__MaybePredOrFunc0_26,
#line 1394 "equiv_type.m"
  MR_Word * parse_tree__equiv_type__MaybePredOrFunc_27,
#line 1394 "equiv_type.m"
  MR_Word parse_tree__equiv_type__MaybeWithInst0_28,
#line 1394 "equiv_type.m"
  MR_Word * parse_tree__equiv_type__MaybeWithInst_29,
#line 1394 "equiv_type.m"
  MR_Word parse_tree__equiv_type__STATE_VARIABLE_MaybeDetism_0_50,
#line 1394 "equiv_type.m"
  MR_Word * parse_tree__equiv_type__STATE_VARIABLE_MaybeDetism_51,
#line 1394 "equiv_type.m"
  MR_Word parse_tree__equiv_type__STATE_VARIABLE_EquivTypeInfo_0_52,
#line 1394 "equiv_type.m"
  MR_Word * parse_tree__equiv_type__STATE_VARIABLE_EquivTypeInfo_53,
#line 1394 "equiv_type.m"
  MR_Word parse_tree__equiv_type__STATE_VARIABLE_UsedModules_0_54,
#line 1394 "equiv_type.m"
  MR_Word * parse_tree__equiv_type__STATE_VARIABLE_UsedModules_55,
#line 1394 "equiv_type.m"
  MR_Word * parse_tree__equiv_type__Specs_33)
#line 1394 "equiv_type.m"
{
#line 1408 "equiv_type.m"
  {
#line 1408 "equiv_type.m"
    MR_bool parse_tree__equiv_type__succeeded;

#line 1408 "equiv_type.m"
    if ((parse_tree__equiv_type__MaybeWithInst0_28 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 1458 "equiv_type.m"
      {
#line 1459 "equiv_type.m"
        *parse_tree__equiv_type__MaybeWithInst_29 = parse_tree__equiv_type__MaybeWithInst0_28;
#line 1460 "equiv_type.m"
        *parse_tree__equiv_type__MaybePredOrFunc_27 = parse_tree__equiv_type__MaybePredOrFunc0_26;
#line 1461 "equiv_type.m"
        *parse_tree__equiv_type__ExtraModes_25 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 1462 "equiv_type.m"
        *parse_tree__equiv_type__Specs_33 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 1458 "equiv_type.m"
        *parse_tree__equiv_type__STATE_VARIABLE_MaybeDetism_51 = parse_tree__equiv_type__STATE_VARIABLE_MaybeDetism_0_50;
#line 1458 "equiv_type.m"
        *parse_tree__equiv_type__STATE_VARIABLE_EquivTypeInfo_53 = parse_tree__equiv_type__STATE_VARIABLE_EquivTypeInfo_0_52;
#line 1458 "equiv_type.m"
        *parse_tree__equiv_type__STATE_VARIABLE_UsedModules_55 = parse_tree__equiv_type__STATE_VARIABLE_UsedModules_0_54;
#line 1458 "equiv_type.m"
      }
#line 1408 "equiv_type.m"
    else
#line 1408 "equiv_type.m"
      {
#line 1408 "equiv_type.m"
        MR_Word parse_tree__equiv_type__WithInst0_34 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__equiv_type__MaybeWithInst0_28, (MR_Integer) 0)));
#line 1408 "equiv_type.m"
        MR_Word parse_tree__equiv_type__WithInst_35;
#line 1408 "equiv_type.m"
        MR_Word parse_tree__equiv_type__STATE_VARIABLE_EquivTypeInfo_56_56;
#line 1433 "equiv_type.m"
        MR_Word parse_tree__equiv_type__PredOrFunc_39;
#line 1433 "equiv_type.m"
        MR_Word parse_tree__equiv_type__ExtraModes0_40;
#line 1433 "equiv_type.m"
        MR_Word parse_tree__equiv_type__DetPrime_42;
#line 1412 "equiv_type.m"
        MR_Word parse_tree__equiv_type__GroundInstInfo_37;
#line 1412 "equiv_type.m"
        MR_Word parse_tree__equiv_type__HOInst_38;
#line 1412 "equiv_type.m"
        MR_Word parse_tree__equiv_type__V_36_36;
#line 1414 "equiv_type.m"
        MR_Word parse_tree__equiv_type__V_41_41;

#line 1409 "equiv_type.m"
        {
#line 1409 "equiv_type.m"
          parse_tree__equiv_type__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_114_101_112_108_97_99_101_95_105_110_95_105_110_115_116_95_95_91_49_93_95_48_8_p_0(parse_tree__equiv_type__WithInst0_34, parse_tree__equiv_type__InstEqvMap_20, &parse_tree__equiv_type__WithInst_35, parse_tree__equiv_type__STATE_VARIABLE_EquivTypeInfo_0_52, &parse_tree__equiv_type__STATE_VARIABLE_EquivTypeInfo_56_56, parse_tree__equiv_type__STATE_VARIABLE_UsedModules_0_54, parse_tree__equiv_type__STATE_VARIABLE_UsedModules_55);
        }
#line 1412 "equiv_type.m"
        parse_tree__equiv_type__succeeded = ((((MR_tag((MR_Word) parse_tree__equiv_type__WithInst_35)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__equiv_type__WithInst_35, (MR_Integer) 0)))) == (MR_Integer) 1)));
#line 1412 "equiv_type.m"
        if (parse_tree__equiv_type__succeeded)
#line 1412 "equiv_type.m"
          {
#line 1412 "equiv_type.m"
            parse_tree__equiv_type__V_36_36 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__equiv_type__WithInst_35, (MR_Integer) 1)));
#line 1412 "equiv_type.m"
            parse_tree__equiv_type__GroundInstInfo_37 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__equiv_type__WithInst_35, (MR_Integer) 2)));
#line 1413 "equiv_type.m"
            parse_tree__equiv_type__succeeded = ((MR_tag((MR_Word) parse_tree__equiv_type__GroundInstInfo_37)) == (MR_mktag((MR_Integer) 1)));
#line 1413 "equiv_type.m"
            if (parse_tree__equiv_type__succeeded)
#line 1413 "equiv_type.m"
              {
#line 1413 "equiv_type.m"
                parse_tree__equiv_type__HOInst_38 = (MR_Word) MR_body(((MR_Word) parse_tree__equiv_type__GroundInstInfo_37), (MR_Integer) 1);
#line 1414 "equiv_type.m"
                parse_tree__equiv_type__PredOrFunc_39 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__equiv_type__HOInst_38, (MR_Integer) 0)));
#line 1414 "equiv_type.m"
                parse_tree__equiv_type__ExtraModes0_40 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__equiv_type__HOInst_38, (MR_Integer) 1)));
#line 1414 "equiv_type.m"
                parse_tree__equiv_type__V_41_41 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__equiv_type__HOInst_38, (MR_Integer) 2)));
#line 1414 "equiv_type.m"
                parse_tree__equiv_type__DetPrime_42 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__equiv_type__HOInst_38, (MR_Integer) 3)));
#line 1416 "equiv_type.m"
                if ((parse_tree__equiv_type__MaybePredOrFunc0_26 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 1415 "equiv_type.m"
                  parse_tree__equiv_type__succeeded = MR_TRUE;
#line 1416 "equiv_type.m"
                else
#line 1416 "equiv_type.m"
                  {
#line 1416 "equiv_type.m"
                    MR_Word parse_tree__equiv_type__V_105_105 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__equiv_type__MaybePredOrFunc0_26, (MR_Integer) 0)));

#line 1416 "equiv_type.m"
                    parse_tree__equiv_type__succeeded = (parse_tree__equiv_type__PredOrFunc_39 == parse_tree__equiv_type__V_105_105);
#line 1416 "equiv_type.m"
                  }
#line 1413 "equiv_type.m"
              }
#line 1412 "equiv_type.m"
          }
#line 1433 "equiv_type.m"
        if (parse_tree__equiv_type__succeeded)
#line 1419 "equiv_type.m"
          {
#line 1419 "equiv_type.m"
            MR_Word parse_tree__equiv_type__RecordedPredOrFunc_43;
#line 1419 "equiv_type.m"
            MR_Word parse_tree__equiv_type__OrigItemId_44;
#line 1419 "equiv_type.m"
            MR_Word parse_tree__equiv_type__V_59_59;
#line 1419 "equiv_type.m"
            MR_Word parse_tree__equiv_type__V_60_60;

#line 1419 "equiv_type.m"
            {
#line 1419 "equiv_type.m"
              MR_Word base;
#line 1419 "equiv_type.m"
              base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 1419 "equiv_type.m"
              *parse_tree__equiv_type__STATE_VARIABLE_MaybeDetism_51 = base;
#line 1419 "equiv_type.m"
              MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (parse_tree__equiv_type__DetPrime_42));
#line 1419 "equiv_type.m"
            }
#line 1420 "equiv_type.m"
            *parse_tree__equiv_type__MaybeWithInst_29 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 1421 "equiv_type.m"
            {
#line 1421 "equiv_type.m"
              MR_Word base;
#line 1421 "equiv_type.m"
              base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 1421 "equiv_type.m"
              *parse_tree__equiv_type__MaybePredOrFunc_27 = base;
#line 1421 "equiv_type.m"
              MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (parse_tree__equiv_type__PredOrFunc_39));
#line 1421 "equiv_type.m"
            }
#line 1422 "equiv_type.m"
            *parse_tree__equiv_type__ExtraModes_25 = parse_tree__equiv_type__ExtraModes0_40;
#line 1426 "equiv_type.m"
            if ((parse_tree__equiv_type__MaybePredOrFunc0_26 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 1425 "equiv_type.m"
              parse_tree__equiv_type__RecordedPredOrFunc_43 = (MR_Integer) 0;
#line 1426 "equiv_type.m"
            else
#line 1427 "equiv_type.m"
              parse_tree__equiv_type__RecordedPredOrFunc_43 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__equiv_type__MaybePredOrFunc0_26, (MR_Integer) 0)));
#line 1429 "equiv_type.m"
            {
#line 1429 "equiv_type.m"
              parse_tree__equiv_type__V_59_59 = recompilation__pred_or_func_to_item_type_1_f_0(parse_tree__equiv_type__RecordedPredOrFunc_43);
            }
#line 1430 "equiv_type.m"
            {
#line 1430 "equiv_type.m"
              parse_tree__equiv_type__V_60_60 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 1430 "equiv_type.m"
              MR_hl_field(MR_mktag(0), parse_tree__equiv_type__V_60_60, 0) = ((MR_Box) (parse_tree__equiv_type__PredName_21));
#line 1430 "equiv_type.m"
              MR_hl_field(MR_mktag(0), parse_tree__equiv_type__V_60_60, 1) = ((MR_Box) (parse_tree__equiv_type__OrigArity_22));
#line 1430 "equiv_type.m"
            }
#line 1429 "equiv_type.m"
            {
#line 1429 "equiv_type.m"
              parse_tree__equiv_type__OrigItemId_44 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 1429 "equiv_type.m"
              MR_hl_field(MR_mktag(0), parse_tree__equiv_type__OrigItemId_44, 0) = ((MR_Box) (parse_tree__equiv_type__V_59_59));
#line 1429 "equiv_type.m"
              MR_hl_field(MR_mktag(0), parse_tree__equiv_type__OrigItemId_44, 1) = ((MR_Box) (parse_tree__equiv_type__V_60_60));
#line 1429 "equiv_type.m"
            }
#line 1431 "equiv_type.m"
            {
#line 1431 "equiv_type.m"
              recompilation__record_expanded_item_3_p_0(parse_tree__equiv_type__OrigItemId_44, parse_tree__equiv_type__STATE_VARIABLE_EquivTypeInfo_56_56, parse_tree__equiv_type__STATE_VARIABLE_EquivTypeInfo_53);
            }
#line 1432 "equiv_type.m"
            *parse_tree__equiv_type__Specs_33 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 1419 "equiv_type.m"
          }
#line 1433 "equiv_type.m"
        else
#line 1434 "equiv_type.m"
          {
#line 1434 "equiv_type.m"
            MR_Word parse_tree__equiv_type__TypeCtorInfo_104_104;
#line 1434 "equiv_type.m"
            MR_String parse_tree__equiv_type__DeclStr_45;
#line 1434 "equiv_type.m"
            MR_Word parse_tree__equiv_type__PredOrFuncPieces_46;
#line 1434 "equiv_type.m"
            MR_Word parse_tree__equiv_type__Pieces_47;
#line 1434 "equiv_type.m"
            MR_Word parse_tree__equiv_type__Msg_48;
#line 1434 "equiv_type.m"
            MR_Word parse_tree__equiv_type__Spec_49;
#line 1434 "equiv_type.m"
            MR_Word parse_tree__equiv_type__V_64_64;
#line 1434 "equiv_type.m"
            MR_Word parse_tree__equiv_type__V_67_67;
#line 1434 "equiv_type.m"
            MR_Word parse_tree__equiv_type__V_68_68;
#line 1434 "equiv_type.m"
            MR_Word parse_tree__equiv_type__V_73_73;
#line 1434 "equiv_type.m"
            MR_Word parse_tree__equiv_type__V_74_74;
#line 1434 "equiv_type.m"
            MR_Word parse_tree__equiv_type__V_75_75;
#line 1434 "equiv_type.m"
            MR_Word parse_tree__equiv_type__V_76_76;
#line 1434 "equiv_type.m"
            MR_Word parse_tree__equiv_type__V_86_86;
#line 1434 "equiv_type.m"
            MR_Word parse_tree__equiv_type__V_93_93;
#line 1434 "equiv_type.m"
            MR_Word parse_tree__equiv_type__V_94_94;
#line 1434 "equiv_type.m"
            MR_Word parse_tree__equiv_type__V_98_98;

#line 1434 "equiv_type.m"
            *parse_tree__equiv_type__ExtraModes_25 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 1435 "equiv_type.m"
            *parse_tree__equiv_type__MaybePredOrFunc_27 = parse_tree__equiv_type__MaybePredOrFunc0_26;
#line 1438 "equiv_type.m"
            *parse_tree__equiv_type__MaybeWithInst_29 = parse_tree__equiv_type__MaybeWithInst0_28;
#line 1440 "equiv_type.m"
#line 1440 "equiv_type.m"
            switch (parse_tree__equiv_type__DeclType_24) {
#line 1440 "equiv_type.m"
              default: /*NOTREACHED*/ MR_assert(0);
#line 1440 "equiv_type.m"
              case (MR_Integer) 1:
#line 1440 "equiv_type.m"
                parse_tree__equiv_type__DeclStr_45 = (MR_String) "mode declaration";
#line 1440 "equiv_type.m"
                break;
#line 1440 "equiv_type.m"
              case (MR_Integer) 0:
#line 1439 "equiv_type.m"
                parse_tree__equiv_type__DeclStr_45 = (MR_String) "declaration";
#line 1440 "equiv_type.m"
                break;
#line 1440 "equiv_type.m"
            }
#line 1445 "equiv_type.m"
            if ((*parse_tree__equiv_type__MaybePredOrFunc_27 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 1444 "equiv_type.m"
              parse_tree__equiv_type__PredOrFuncPieces_46 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 1445 "equiv_type.m"
            else
#line 1446 "equiv_type.m"
              {
#line 1446 "equiv_type.m"
                MR_Word parse_tree__equiv_type__V_62_62;
#line 1446 "equiv_type.m"
                MR_Word parse_tree__equiv_type__PredOrFunc_101 = ((MR_Word) (MR_hl_field(MR_mktag(1), *parse_tree__equiv_type__MaybePredOrFunc_27, (MR_Integer) 0)));

#line 1447 "equiv_type.m"
                {
#line 1447 "equiv_type.m"
                  parse_tree__equiv_type__V_62_62 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1447 "equiv_type.m"
                  MR_hl_field(MR_mktag(3), parse_tree__equiv_type__V_62_62, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 11));
#line 1447 "equiv_type.m"
                  MR_hl_field(MR_mktag(3), parse_tree__equiv_type__V_62_62, 1) = ((MR_Box) (parse_tree__equiv_type__PredOrFunc_101));
#line 1447 "equiv_type.m"
                }
#line 1447 "equiv_type.m"
                {
#line 1447 "equiv_type.m"
                  parse_tree__equiv_type__PredOrFuncPieces_46 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1447 "equiv_type.m"
                  MR_hl_field(MR_mktag(1), parse_tree__equiv_type__PredOrFuncPieces_46, 0) = ((MR_Box) (parse_tree__equiv_type__V_62_62));
#line 1447 "equiv_type.m"
                  MR_hl_field(MR_mktag(1), parse_tree__equiv_type__PredOrFuncPieces_46, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1447 "equiv_type.m"
                }
#line 1446 "equiv_type.m"
              }
#line 3483 "parse_tree.equiv_type.c"
            parse_tree__equiv_type__TypeCtorInfo_104_104 = (MR_Word) &parse_tree__error_util__parse_tree__error_util__type_ctor_info_format_component_0;
#line 1449 "equiv_type.m"
            {
#line 1449 "equiv_type.m"
              parse_tree__equiv_type__V_68_68 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1449 "equiv_type.m"
              MR_hl_field(MR_mktag(3), parse_tree__equiv_type__V_68_68, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 5));
#line 1449 "equiv_type.m"
              MR_hl_field(MR_mktag(3), parse_tree__equiv_type__V_68_68, 1) = ((MR_Box) (parse_tree__equiv_type__DeclStr_45));
#line 1449 "equiv_type.m"
            }
#line 1449 "equiv_type.m"
            {
#line 1449 "equiv_type.m"
              parse_tree__equiv_type__V_67_67 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1449 "equiv_type.m"
              MR_hl_field(MR_mktag(1), parse_tree__equiv_type__V_67_67, 0) = ((MR_Box) (parse_tree__equiv_type__V_68_68));
#line 1449 "equiv_type.m"
              MR_hl_field(MR_mktag(1), parse_tree__equiv_type__V_67_67, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__equiv_type_scalar_common_1[36])));
#line 1449 "equiv_type.m"
            }
#line 1449 "equiv_type.m"
            {
#line 1449 "equiv_type.m"
              parse_tree__equiv_type__V_64_64 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1449 "equiv_type.m"
              MR_hl_field(MR_mktag(1), parse_tree__equiv_type__V_64_64, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__equiv_type_scalar_common_1[34])));
#line 1449 "equiv_type.m"
              MR_hl_field(MR_mktag(1), parse_tree__equiv_type__V_64_64, 1) = ((MR_Box) (parse_tree__equiv_type__V_67_67));
#line 1449 "equiv_type.m"
            }
#line 1450 "equiv_type.m"
            {
#line 1450 "equiv_type.m"
              parse_tree__equiv_type__V_76_76 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1450 "equiv_type.m"
              MR_hl_field(MR_mktag(3), parse_tree__equiv_type__V_76_76, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 7));
#line 1450 "equiv_type.m"
              MR_hl_field(MR_mktag(3), parse_tree__equiv_type__V_76_76, 1) = ((MR_Box) (parse_tree__equiv_type__PredName_21));
#line 1450 "equiv_type.m"
            }
#line 1450 "equiv_type.m"
            {
#line 1450 "equiv_type.m"
              parse_tree__equiv_type__V_75_75 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1450 "equiv_type.m"
              MR_hl_field(MR_mktag(1), parse_tree__equiv_type__V_75_75, 0) = ((MR_Box) (parse_tree__equiv_type__V_76_76));
#line 1450 "equiv_type.m"
              MR_hl_field(MR_mktag(1), parse_tree__equiv_type__V_75_75, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__equiv_type_scalar_common_1[27])));
#line 1450 "equiv_type.m"
            }
#line 1451 "equiv_type.m"
            {
#line 1451 "equiv_type.m"
              parse_tree__equiv_type__V_86_86 = mercury__list__f_43_43_2_f_0(parse_tree__equiv_type__TypeCtorInfo_104_104, parse_tree__equiv_type__PredOrFuncPieces_46, (MR_Word) MR_mkword(MR_mktag(1), &parse_tree__equiv_type_scalar_common_1[29]));
            }
#line 1451 "equiv_type.m"
            {
#line 1451 "equiv_type.m"
              parse_tree__equiv_type__V_74_74 = mercury__list__f_43_43_2_f_0(parse_tree__equiv_type__TypeCtorInfo_104_104, parse_tree__equiv_type__V_75_75, parse_tree__equiv_type__V_86_86);
            }
#line 1450 "equiv_type.m"
            {
#line 1450 "equiv_type.m"
              parse_tree__equiv_type__V_73_73 = mercury__list__f_43_43_2_f_0(parse_tree__equiv_type__TypeCtorInfo_104_104, parse_tree__equiv_type__PredOrFuncPieces_46, parse_tree__equiv_type__V_74_74);
            }
#line 1449 "equiv_type.m"
            {
#line 1449 "equiv_type.m"
              parse_tree__equiv_type__Pieces_47 = mercury__list__f_43_43_2_f_0(parse_tree__equiv_type__TypeCtorInfo_104_104, parse_tree__equiv_type__V_64_64, parse_tree__equiv_type__V_73_73);
            }
#line 1453 "equiv_type.m"
            {
#line 1453 "equiv_type.m"
              parse_tree__equiv_type__V_94_94 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 1453 "equiv_type.m"
              MR_hl_field(MR_mktag(0), parse_tree__equiv_type__V_94_94, 0) = ((MR_Box) (parse_tree__equiv_type__Pieces_47));
#line 1453 "equiv_type.m"
            }
#line 1453 "equiv_type.m"
            {
#line 1453 "equiv_type.m"
              parse_tree__equiv_type__V_93_93 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1453 "equiv_type.m"
              MR_hl_field(MR_mktag(1), parse_tree__equiv_type__V_93_93, 0) = ((MR_Box) (parse_tree__equiv_type__V_94_94));
#line 1453 "equiv_type.m"
              MR_hl_field(MR_mktag(1), parse_tree__equiv_type__V_93_93, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1453 "equiv_type.m"
            }
#line 1453 "equiv_type.m"
            {
#line 1453 "equiv_type.m"
              parse_tree__equiv_type__Msg_48 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 1453 "equiv_type.m"
              MR_hl_field(MR_mktag(0), parse_tree__equiv_type__Msg_48, 0) = ((MR_Box) (parse_tree__equiv_type__Context_23));
#line 1453 "equiv_type.m"
              MR_hl_field(MR_mktag(0), parse_tree__equiv_type__Msg_48, 1) = ((MR_Box) (parse_tree__equiv_type__V_93_93));
#line 1453 "equiv_type.m"
            }
#line 1454 "equiv_type.m"
            {
#line 1454 "equiv_type.m"
              parse_tree__equiv_type__V_98_98 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1454 "equiv_type.m"
              MR_hl_field(MR_mktag(1), parse_tree__equiv_type__V_98_98, 0) = ((MR_Box) (parse_tree__equiv_type__Msg_48));
#line 1454 "equiv_type.m"
              MR_hl_field(MR_mktag(1), parse_tree__equiv_type__V_98_98, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1454 "equiv_type.m"
            }
#line 1454 "equiv_type.m"
            {
#line 1454 "equiv_type.m"
              parse_tree__equiv_type__Spec_49 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 1454 "equiv_type.m"
              MR_hl_field(MR_mktag(0), parse_tree__equiv_type__Spec_49, 0) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1454 "equiv_type.m"
              MR_hl_field(MR_mktag(0), parse_tree__equiv_type__Spec_49, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 3))));
#line 1454 "equiv_type.m"
              MR_hl_field(MR_mktag(0), parse_tree__equiv_type__Spec_49, 2) = ((MR_Box) (parse_tree__equiv_type__V_98_98));
#line 1454 "equiv_type.m"
            }
#line 1455 "equiv_type.m"
            {
#line 1455 "equiv_type.m"
              MR_Word base;
#line 1455 "equiv_type.m"
              base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1455 "equiv_type.m"
              *parse_tree__equiv_type__Specs_33 = base;
#line 1455 "equiv_type.m"
              MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (parse_tree__equiv_type__Spec_49));
#line 1455 "equiv_type.m"
              MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1455 "equiv_type.m"
            }
#line 1434 "equiv_type.m"
            *parse_tree__equiv_type__STATE_VARIABLE_EquivTypeInfo_53 = parse_tree__equiv_type__STATE_VARIABLE_EquivTypeInfo_56_56;
#line 1434 "equiv_type.m"
            *parse_tree__equiv_type__STATE_VARIABLE_MaybeDetism_51 = parse_tree__equiv_type__STATE_VARIABLE_MaybeDetism_0_50;
#line 1434 "equiv_type.m"
          }
#line 1408 "equiv_type.m"
      }
#line 1408 "equiv_type.m"
  }
#line 1394 "equiv_type.m"
}

#line 1256 "equiv_type.m"
static void MR_CALL 
parse_tree__equiv_type__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_114_101_112_108_97_99_101_95_105_110_95_105_110_115_116_95_108_111_99_97_116_105_111_110_95_95_91_49_93_95_48_9_p_0(
#line 1256 "equiv_type.m"
  MR_Word parse_tree__equiv_type__Inst0_11,
#line 1256 "equiv_type.m"
  MR_Word parse_tree__equiv_type__InstEqvMap_12,
#line 1256 "equiv_type.m"
  MR_Word parse_tree__equiv_type__ExpandedInstIds_13,
#line 1256 "equiv_type.m"
  MR_Word * parse_tree__equiv_type__Inst_14,
#line 1256 "equiv_type.m"
  MR_Word parse_tree__equiv_type__STATE_VARIABLE_EquivTypeInfo_0_26,
#line 1256 "equiv_type.m"
  MR_Word * parse_tree__equiv_type__STATE_VARIABLE_EquivTypeInfo_27,
#line 1256 "equiv_type.m"
  MR_Word parse_tree__equiv_type__STATE_VARIABLE_UsedModules_0_28,
#line 1256 "equiv_type.m"
  MR_Word * parse_tree__equiv_type__STATE_VARIABLE_UsedModules_29)
#line 1256 "equiv_type.m"
{
#line 1284 "equiv_type.m"
  while (MR_TRUE)
#line 1284 "equiv_type.m"
    {
#line 1284 "equiv_type.m"
      /* tailcall optimized into a loop */
#line 1284 "equiv_type.m"
      {
#line 1284 "equiv_type.m"
        MR_bool parse_tree__equiv_type__succeeded = ((((MR_tag((MR_Word) parse_tree__equiv_type__Inst0_11)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__equiv_type__Inst0_11, (MR_Integer) 0)))) == (MR_Integer) 4)));
#line 1284 "equiv_type.m"
        MR_Word parse_tree__equiv_type__SymName_17;
#line 1284 "equiv_type.m"
        MR_Word parse_tree__equiv_type__ArgInsts_18;
#line 1264 "equiv_type.m"
        MR_Word parse_tree__equiv_type__V_30_30;

#line 1264 "equiv_type.m"
        if (parse_tree__equiv_type__succeeded)
#line 1264 "equiv_type.m"
          {
#line 1264 "equiv_type.m"
            parse_tree__equiv_type__V_30_30 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__equiv_type__Inst0_11, (MR_Integer) 1)));
#line 1264 "equiv_type.m"
            parse_tree__equiv_type__succeeded = ((MR_tag((MR_Word) parse_tree__equiv_type__V_30_30)) == (MR_mktag((MR_Integer) 0)));
#line 1264 "equiv_type.m"
            if (parse_tree__equiv_type__succeeded)
#line 1264 "equiv_type.m"
              {
#line 1264 "equiv_type.m"
                parse_tree__equiv_type__SymName_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__equiv_type__V_30_30, (MR_Integer) 0)));
#line 1264 "equiv_type.m"
                parse_tree__equiv_type__ArgInsts_18 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__equiv_type__V_30_30, (MR_Integer) 1)));
#line 1264 "equiv_type.m"
              }
#line 1264 "equiv_type.m"
          }
#line 1284 "equiv_type.m"
        if (parse_tree__equiv_type__succeeded)
#line 1265 "equiv_type.m"
          {
#line 1265 "equiv_type.m"
            MR_Word parse_tree__equiv_type__InstId_19;
#line 1265 "equiv_type.m"
            MR_Integer parse_tree__equiv_type__V_31_31;

#line 1265 "equiv_type.m"
            {
#line 1265 "equiv_type.m"
              parse_tree__equiv_type__V_31_31 = mercury__list__length_1_f_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_inst_0, parse_tree__equiv_type__ArgInsts_18);
            }
#line 1265 "equiv_type.m"
            {
#line 1265 "equiv_type.m"
              parse_tree__equiv_type__InstId_19 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 1265 "equiv_type.m"
              MR_hl_field(MR_mktag(0), parse_tree__equiv_type__InstId_19, 0) = ((MR_Box) (parse_tree__equiv_type__SymName_17));
#line 1265 "equiv_type.m"
              MR_hl_field(MR_mktag(0), parse_tree__equiv_type__InstId_19, 1) = ((MR_Box) (parse_tree__equiv_type__V_31_31));
#line 1265 "equiv_type.m"
            }
#line 1267 "equiv_type.m"
            {
#line 1267 "equiv_type.m"
              parse_tree__equiv_type__succeeded = mercury__set__member_2_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_inst_id_0, ((MR_Box) (parse_tree__equiv_type__InstId_19)), parse_tree__equiv_type__ExpandedInstIds_13);
            }
#line 1270 "equiv_type.m"
            if (parse_tree__equiv_type__succeeded)
#line 1269 "equiv_type.m"
              {
#line 1269 "equiv_type.m"
                *parse_tree__equiv_type__Inst_14 = parse_tree__equiv_type__Inst0_11;
#line 1269 "equiv_type.m"
                *parse_tree__equiv_type__STATE_VARIABLE_UsedModules_29 = parse_tree__equiv_type__STATE_VARIABLE_UsedModules_0_28;
#line 1269 "equiv_type.m"
                *parse_tree__equiv_type__STATE_VARIABLE_EquivTypeInfo_27 = parse_tree__equiv_type__STATE_VARIABLE_EquivTypeInfo_0_26;
#line 1269 "equiv_type.m"
              }
#line 1270 "equiv_type.m"
            else
#line 1281 "equiv_type.m"
              {
#line 1281 "equiv_type.m"
                MR_Word parse_tree__equiv_type__EqvInstParams_22;
#line 1281 "equiv_type.m"
                MR_Word parse_tree__equiv_type__EqvInst_23;
#line 1271 "equiv_type.m"
                MR_Word parse_tree__equiv_type__EqvInstBody_20;
#line 1271 "equiv_type.m"
                MR_Box parse_tree__equiv_type__conv0_EqvInstBody_20;
#line 1272 "equiv_type.m"
                MR_Word parse_tree__equiv_type__V_21_21;

#line 1271 "equiv_type.m"
                {
#line 1271 "equiv_type.m"
                  parse_tree__equiv_type__succeeded = mercury__map__search_3_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_inst_id_0, (MR_Word) &parse_tree__equiv_type__parse_tree__equiv_type__type_ctor_info_eqv_inst_body_0, parse_tree__equiv_type__InstEqvMap_12, ((MR_Box) (parse_tree__equiv_type__InstId_19)), &parse_tree__equiv_type__conv0_EqvInstBody_20);
                }
#line 1271 "equiv_type.m"
                if (parse_tree__equiv_type__succeeded)
#line 1271 "equiv_type.m"
                  {
#line 1271 "equiv_type.m"
                    parse_tree__equiv_type__EqvInstBody_20 = ((MR_Word) parse_tree__equiv_type__conv0_EqvInstBody_20);
#line 1271 "equiv_type.m"
                    parse_tree__equiv_type__succeeded = MR_TRUE;
#line 1271 "equiv_type.m"
                  }
#line 1271 "equiv_type.m"
                if (parse_tree__equiv_type__succeeded)
#line 1271 "equiv_type.m"
                  {
#line 1272 "equiv_type.m"
                    parse_tree__equiv_type__V_21_21 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__equiv_type__EqvInstBody_20, (MR_Integer) 0)));
#line 1272 "equiv_type.m"
                    parse_tree__equiv_type__EqvInstParams_22 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__equiv_type__EqvInstBody_20, (MR_Integer) 1)));
#line 1272 "equiv_type.m"
                    parse_tree__equiv_type__EqvInst_23 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__equiv_type__EqvInstBody_20, (MR_Integer) 2)));
#line 1272 "equiv_type.m"
                    parse_tree__equiv_type__succeeded = MR_TRUE;
#line 1271 "equiv_type.m"
                  }
#line 1281 "equiv_type.m"
                if (parse_tree__equiv_type__succeeded)
#line 1274 "equiv_type.m"
                  {
#line 1274 "equiv_type.m"
                    MR_Word parse_tree__equiv_type__Inst1_24;
#line 1274 "equiv_type.m"
                    MR_Word parse_tree__equiv_type__InstIdItem_25;
#line 1274 "equiv_type.m"
                    MR_Word parse_tree__equiv_type__V_32_32;
#line 1274 "equiv_type.m"
                    MR_Word parse_tree__equiv_type__STATE_VARIABLE_EquivTypeInfo_33_33;
#line 1274 "equiv_type.m"
                    MR_Word parse_tree__equiv_type__V_35_35;

#line 1274 "equiv_type.m"
                    {
#line 1274 "equiv_type.m"
                      parse_tree__prog_mode__inst_substitute_arg_list_4_p_0(parse_tree__equiv_type__EqvInstParams_22, parse_tree__equiv_type__ArgInsts_18, parse_tree__equiv_type__EqvInst_23, &parse_tree__equiv_type__Inst1_24);
                    }
#line 1275 "equiv_type.m"
                    {
#line 1275 "equiv_type.m"
                      parse_tree__equiv_type__InstIdItem_25 = recompilation__inst_id_to_item_name_1_f_0(parse_tree__equiv_type__InstId_19);
                    }
#line 1276 "equiv_type.m"
                    {
#line 1276 "equiv_type.m"
                      parse_tree__equiv_type__V_32_32 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 1276 "equiv_type.m"
                      MR_hl_field(MR_mktag(0), parse_tree__equiv_type__V_32_32, 0) = ((MR_Box) ((MR_Integer) 3));
#line 1276 "equiv_type.m"
                      MR_hl_field(MR_mktag(0), parse_tree__equiv_type__V_32_32, 1) = ((MR_Box) (parse_tree__equiv_type__InstIdItem_25));
#line 1276 "equiv_type.m"
                    }
#line 1276 "equiv_type.m"
                    {
#line 1276 "equiv_type.m"
                      recompilation__record_expanded_item_3_p_0(parse_tree__equiv_type__V_32_32, parse_tree__equiv_type__STATE_VARIABLE_EquivTypeInfo_0_26, &parse_tree__equiv_type__STATE_VARIABLE_EquivTypeInfo_33_33);
                    }
#line 1279 "equiv_type.m"
                    {
#line 1279 "equiv_type.m"
                      parse_tree__equiv_type__V_35_35 = mercury__set__insert_2_f_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_inst_id_0, parse_tree__equiv_type__ExpandedInstIds_13, ((MR_Box) (parse_tree__equiv_type__InstId_19)));
                    }
#line 1278 "equiv_type.m"
                    /* direct tailcall eliminated */
#line 1278 "equiv_type.m"
                    {
#line 1278 "equiv_type.m"
                      MR_Word parse_tree__equiv_type__Inst0__tmp_copy_11 = parse_tree__equiv_type__Inst1_24;
#line 1278 "equiv_type.m"
                      MR_Word parse_tree__equiv_type__ExpandedInstIds__tmp_copy_13 = parse_tree__equiv_type__V_35_35;
#line 1278 "equiv_type.m"
                      MR_Word parse_tree__equiv_type__STATE_VARIABLE_EquivTypeInfo_0__tmp_copy_26 = parse_tree__equiv_type__STATE_VARIABLE_EquivTypeInfo_33_33;

#line 1278 "equiv_type.m"
                      parse_tree__equiv_type__STATE_VARIABLE_EquivTypeInfo_0_26 = parse_tree__equiv_type__STATE_VARIABLE_EquivTypeInfo_0__tmp_copy_26;
#line 1278 "equiv_type.m"
                      parse_tree__equiv_type__ExpandedInstIds_13 = parse_tree__equiv_type__ExpandedInstIds__tmp_copy_13;
#line 1278 "equiv_type.m"
                      parse_tree__equiv_type__Inst0_11 = parse_tree__equiv_type__Inst0__tmp_copy_11;
#line 1278 "equiv_type.m"
                    }
#line 1278 "equiv_type.m"
                    continue;
#line 1274 "equiv_type.m"
                  }
#line 1281 "equiv_type.m"
                else
#line 1282 "equiv_type.m"
                  {
#line 1282 "equiv_type.m"
                    *parse_tree__equiv_type__Inst_14 = parse_tree__equiv_type__Inst0_11;
#line 1282 "equiv_type.m"
                    *parse_tree__equiv_type__STATE_VARIABLE_UsedModules_29 = parse_tree__equiv_type__STATE_VARIABLE_UsedModules_0_28;
#line 1282 "equiv_type.m"
                    *parse_tree__equiv_type__STATE_VARIABLE_EquivTypeInfo_27 = parse_tree__equiv_type__STATE_VARIABLE_EquivTypeInfo_0_26;
#line 1282 "equiv_type.m"
                  }
#line 1281 "equiv_type.m"
              }
#line 1265 "equiv_type.m"
          }
#line 1284 "equiv_type.m"
        else
#line 1285 "equiv_type.m"
          {
#line 1285 "equiv_type.m"
            *parse_tree__equiv_type__Inst_14 = parse_tree__equiv_type__Inst0_11;
#line 1285 "equiv_type.m"
            *parse_tree__equiv_type__STATE_VARIABLE_UsedModules_29 = parse_tree__equiv_type__STATE_VARIABLE_UsedModules_0_28;
#line 1285 "equiv_type.m"
            *parse_tree__equiv_type__STATE_VARIABLE_EquivTypeInfo_27 = parse_tree__equiv_type__STATE_VARIABLE_EquivTypeInfo_0_26;
#line 1285 "equiv_type.m"
          }
#line 1284 "equiv_type.m"
      }
#line 1284 "equiv_type.m"
      break;
#line 1284 "equiv_type.m"
    }
#line 1256 "equiv_type.m"
}

#line 1246 "equiv_type.m"
static void MR_CALL 
parse_tree__equiv_type__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_114_101_112_108_97_99_101_95_105_110_95_105_110_115_116_95_95_91_49_93_95_48_8_p_0(
#line 1246 "equiv_type.m"
  MR_Word parse_tree__equiv_type__Inst0_10,
#line 1246 "equiv_type.m"
  MR_Word parse_tree__equiv_type__InstEqvMap_11,
#line 1246 "equiv_type.m"
  MR_Word * parse_tree__equiv_type__Inst_12,
#line 1246 "equiv_type.m"
  MR_Word parse_tree__equiv_type__STATE_VARIABLE_EquivTypeInfo_0_15,
#line 1246 "equiv_type.m"
  MR_Word * parse_tree__equiv_type__STATE_VARIABLE_EquivTypeInfo_16,
#line 1246 "equiv_type.m"
  MR_Word parse_tree__equiv_type__STATE_VARIABLE_UsedModules_0_17,
#line 1246 "equiv_type.m"
  MR_Word * parse_tree__equiv_type__STATE_VARIABLE_UsedModules_18)
#line 1246 "equiv_type.m"
{
#line 1252 "equiv_type.m"
  {
#line 1252 "equiv_type.m"
    MR_bool parse_tree__equiv_type__succeeded;
#line 1252 "equiv_type.m"
    MR_Word parse_tree__equiv_type__V_19_19;

#line 1253 "equiv_type.m"
    {
#line 1253 "equiv_type.m"
      parse_tree__equiv_type__V_19_19 = mercury__set__init_0_f_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_inst_id_0);
    }
#line 1253 "equiv_type.m"
    {
#line 1253 "equiv_type.m"
      parse_tree__equiv_type__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_114_101_112_108_97_99_101_95_105_110_95_105_110_115_116_95_108_111_99_97_116_105_111_110_95_95_91_49_93_95_48_9_p_0(parse_tree__equiv_type__Inst0_10, parse_tree__equiv_type__InstEqvMap_11, parse_tree__equiv_type__V_19_19, parse_tree__equiv_type__Inst_12, parse_tree__equiv_type__STATE_VARIABLE_EquivTypeInfo_0_15, parse_tree__equiv_type__STATE_VARIABLE_EquivTypeInfo_16, parse_tree__equiv_type__STATE_VARIABLE_UsedModules_0_17, parse_tree__equiv_type__STATE_VARIABLE_UsedModules_18);
#line 1253 "equiv_type.m"
      return;
    }
#line 1252 "equiv_type.m"
  }
#line 1246 "equiv_type.m"
}

#line 730 "equiv_type.m"
static void MR_CALL 
parse_tree__equiv_type__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_114_101_112_108_97_99_101_95_105_110_95_101_118_101_110_116_95_97_116_116_114_115_95_95_91_52_93_95_48_10_p_0(
#line 730 "equiv_type.m"
  MR_Word parse_tree__equiv_type__HeadVar__1_1,
#line 730 "equiv_type.m"
  MR_Word * parse_tree__equiv_type__HeadVar__2_2,
#line 730 "equiv_type.m"
  MR_Word parse_tree__equiv_type__HeadVar__3_3,
#line 730 "equiv_type.m"
  MR_Word parse_tree__equiv_type__STATE_VARIABLE_RecompInfo_0_5,
#line 730 "equiv_type.m"
  MR_Word * parse_tree__equiv_type__STATE_VARIABLE_RecompInfo_6,
#line 730 "equiv_type.m"
  MR_Word parse_tree__equiv_type__STATE_VARIABLE_UsedModules_0_7,
#line 730 "equiv_type.m"
  MR_Word * parse_tree__equiv_type__STATE_VARIABLE_UsedModules_8,
#line 730 "equiv_type.m"
  MR_Word parse_tree__equiv_type__STATE_VARIABLE_Specs_0_9,
#line 730 "equiv_type.m"
  MR_Word * parse_tree__equiv_type__STATE_VARIABLE_Specs_10)
#line 730 "equiv_type.m"
{
#line 737 "equiv_type.m"
  {
#line 737 "equiv_type.m"
    MR_bool parse_tree__equiv_type__succeeded;

#line 737 "equiv_type.m"
    if ((parse_tree__equiv_type__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 737 "equiv_type.m"
      {
#line 737 "equiv_type.m"
        *parse_tree__equiv_type__HeadVar__2_2 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 738 "equiv_type.m"
        *parse_tree__equiv_type__STATE_VARIABLE_Specs_10 = parse_tree__equiv_type__STATE_VARIABLE_Specs_0_9;
#line 738 "equiv_type.m"
        *parse_tree__equiv_type__STATE_VARIABLE_UsedModules_8 = parse_tree__equiv_type__STATE_VARIABLE_UsedModules_0_7;
#line 738 "equiv_type.m"
        *parse_tree__equiv_type__STATE_VARIABLE_RecompInfo_6 = parse_tree__equiv_type__STATE_VARIABLE_RecompInfo_0_5;
#line 737 "equiv_type.m"
      }
#line 737 "equiv_type.m"
    else
#line 740 "equiv_type.m"
      {
#line 740 "equiv_type.m"
        MR_Word parse_tree__equiv_type__Attr0_22 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__equiv_type__HeadVar__1_1, (MR_Integer) 0)));
#line 740 "equiv_type.m"
        MR_Word parse_tree__equiv_type__Attrs0_23 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__equiv_type__HeadVar__1_1, (MR_Integer) 1)));
#line 740 "equiv_type.m"
        MR_Word parse_tree__equiv_type__Attr_24;
#line 740 "equiv_type.m"
        MR_Word parse_tree__equiv_type__Attrs_25;
#line 740 "equiv_type.m"
        MR_Word parse_tree__equiv_type__STATE_VARIABLE_UsedModules_38_38;
#line 740 "equiv_type.m"
        MR_Integer parse_tree__equiv_type__AttrNum_56 = ((MR_Integer) (MR_hl_field(MR_mktag(0), parse_tree__equiv_type__Attr0_22, (MR_Integer) 0)));
#line 740 "equiv_type.m"
        MR_String parse_tree__equiv_type__AttrName_57 = ((MR_String) (MR_hl_field(MR_mktag(0), parse_tree__equiv_type__Attr0_22, (MR_Integer) 1)));
#line 740 "equiv_type.m"
        MR_Word parse_tree__equiv_type__AttrType0_58 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__equiv_type__Attr0_22, (MR_Integer) 2)));
#line 740 "equiv_type.m"
        MR_Word parse_tree__equiv_type__AttrMode_59 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__equiv_type__Attr0_22, (MR_Integer) 3)));
#line 740 "equiv_type.m"
        MR_Word parse_tree__equiv_type__MaybeSynthCall_60 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__equiv_type__Attr0_22, (MR_Integer) 4)));
#line 740 "equiv_type.m"
        MR_Word parse_tree__equiv_type__TVarSet0_61;
#line 740 "equiv_type.m"
        MR_Word parse_tree__equiv_type__AttrType_62;
#line 1090 "equiv_type.m"
        MR_Word parse_tree__equiv_type___Changed_63;
#line 1090 "equiv_type.m"
        MR_Word parse_tree__equiv_type___TVarSet_64;
#line 1090 "equiv_type.m"
        MR_Word parse_tree__equiv_type___EquivTypeInfo_65;
#line 1090 "equiv_type.m"
        MR_Word parse_tree__equiv_type__V_84_84;

#line 758 "equiv_type.m"
        {
#line 758 "equiv_type.m"
          parse_tree__equiv_type__TVarSet0_61 = mercury__varset__init_0_f_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_tvar_type_0);
        }
#line 1090 "equiv_type.m"
        {
#line 1090 "equiv_type.m"
          parse_tree__equiv_type__replace_in_type_maybe_record_use_2_13_p_0((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), parse_tree__equiv_type__HeadVar__3_3, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), parse_tree__equiv_type__AttrType0_58, &parse_tree__equiv_type__AttrType_62, &parse_tree__equiv_type___Changed_63, &parse_tree__equiv_type__V_84_84, parse_tree__equiv_type__TVarSet0_61, &parse_tree__equiv_type___TVarSet_64, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), &parse_tree__equiv_type___EquivTypeInfo_65, parse_tree__equiv_type__STATE_VARIABLE_UsedModules_0_7, &parse_tree__equiv_type__STATE_VARIABLE_UsedModules_38_38);
        }
#line 762 "equiv_type.m"
        {
#line 762 "equiv_type.m"
          parse_tree__equiv_type__Attr_24 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
#line 762 "equiv_type.m"
          MR_hl_field(MR_mktag(0), parse_tree__equiv_type__Attr_24, 0) = ((MR_Box) (parse_tree__equiv_type__AttrNum_56));
#line 762 "equiv_type.m"
          MR_hl_field(MR_mktag(0), parse_tree__equiv_type__Attr_24, 1) = ((MR_Box) (parse_tree__equiv_type__AttrName_57));
#line 762 "equiv_type.m"
          MR_hl_field(MR_mktag(0), parse_tree__equiv_type__Attr_24, 2) = ((MR_Box) (parse_tree__equiv_type__AttrType_62));
#line 762 "equiv_type.m"
          MR_hl_field(MR_mktag(0), parse_tree__equiv_type__Attr_24, 3) = ((MR_Box) (parse_tree__equiv_type__AttrMode_59));
#line 762 "equiv_type.m"
          MR_hl_field(MR_mktag(0), parse_tree__equiv_type__Attr_24, 4) = ((MR_Box) (parse_tree__equiv_type__MaybeSynthCall_60));
#line 762 "equiv_type.m"
        }
#line 743 "equiv_type.m"
        {
#line 743 "equiv_type.m"
          parse_tree__equiv_type__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_114_101_112_108_97_99_101_95_105_110_95_101_118_101_110_116_95_97_116_116_114_115_95_95_91_52_93_95_48_10_p_0(parse_tree__equiv_type__Attrs0_23, &parse_tree__equiv_type__Attrs_25, parse_tree__equiv_type__HeadVar__3_3, parse_tree__equiv_type__STATE_VARIABLE_RecompInfo_0_5, parse_tree__equiv_type__STATE_VARIABLE_RecompInfo_6, parse_tree__equiv_type__STATE_VARIABLE_UsedModules_38_38, parse_tree__equiv_type__STATE_VARIABLE_UsedModules_8, parse_tree__equiv_type__STATE_VARIABLE_Specs_0_9, parse_tree__equiv_type__STATE_VARIABLE_Specs_10);
        }
#line 739 "equiv_type.m"
        {
#line 739 "equiv_type.m"
          MR_Word base;
#line 739 "equiv_type.m"
          base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 739 "equiv_type.m"
          *parse_tree__equiv_type__HeadVar__2_2 = base;
#line 739 "equiv_type.m"
          MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (parse_tree__equiv_type__Attr_24));
#line 739 "equiv_type.m"
          MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (parse_tree__equiv_type__Attrs_25));
#line 739 "equiv_type.m"
        }
#line 740 "equiv_type.m"
      }
#line 737 "equiv_type.m"
  }
#line 730 "equiv_type.m"
}

#line 699 "equiv_type.m"
static void MR_CALL 
parse_tree__equiv_type__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_114_101_112_108_97_99_101_95_105_110_95_101_118_101_110_116_95_115_112_101_99_115_95_95_91_52_93_95_48_10_p_0(
#line 699 "equiv_type.m"
  MR_Word parse_tree__equiv_type__HeadVar__1_1,
#line 699 "equiv_type.m"
  MR_Word * parse_tree__equiv_type__HeadVar__2_2,
#line 699 "equiv_type.m"
  MR_Word parse_tree__equiv_type__TypeEqvMap_3,
#line 699 "equiv_type.m"
  MR_Word parse_tree__equiv_type__STATE_VARIABLE_RecompInfo_0_5,
#line 699 "equiv_type.m"
  MR_Word * parse_tree__equiv_type__STATE_VARIABLE_RecompInfo_6,
#line 699 "equiv_type.m"
  MR_Word parse_tree__equiv_type__STATE_VARIABLE_UsedModules_0_7,
#line 699 "equiv_type.m"
  MR_Word * parse_tree__equiv_type__STATE_VARIABLE_UsedModules_8,
#line 699 "equiv_type.m"
  MR_Word parse_tree__equiv_type__STATE_VARIABLE_Specs_0_9,
#line 699 "equiv_type.m"
  MR_Word * parse_tree__equiv_type__STATE_VARIABLE_Specs_10)
#line 699 "equiv_type.m"
{
#line 706 "equiv_type.m"
  {
#line 706 "equiv_type.m"
    MR_bool parse_tree__equiv_type__succeeded;

#line 706 "equiv_type.m"
    if ((parse_tree__equiv_type__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 706 "equiv_type.m"
      {
#line 706 "equiv_type.m"
        *parse_tree__equiv_type__HeadVar__2_2 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 706 "equiv_type.m"
        *parse_tree__equiv_type__STATE_VARIABLE_Specs_10 = parse_tree__equiv_type__STATE_VARIABLE_Specs_0_9;
#line 706 "equiv_type.m"
        *parse_tree__equiv_type__STATE_VARIABLE_UsedModules_8 = parse_tree__equiv_type__STATE_VARIABLE_UsedModules_0_7;
#line 706 "equiv_type.m"
        *parse_tree__equiv_type__STATE_VARIABLE_RecompInfo_6 = parse_tree__equiv_type__STATE_VARIABLE_RecompInfo_0_5;
#line 706 "equiv_type.m"
      }
#line 706 "equiv_type.m"
    else
#line 709 "equiv_type.m"
      {
#line 709 "equiv_type.m"
        MR_String parse_tree__equiv_type__Name_22;
#line 709 "equiv_type.m"
        MR_Word parse_tree__equiv_type__EventSpec0_23;
#line 709 "equiv_type.m"
        MR_Word parse_tree__equiv_type__NameSpecs0_24 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__equiv_type__HeadVar__1_1, (MR_Integer) 1)));
#line 709 "equiv_type.m"
        MR_Word parse_tree__equiv_type__EventSpec_25;
#line 709 "equiv_type.m"
        MR_Word parse_tree__equiv_type__NameSpecs_26;
#line 709 "equiv_type.m"
        MR_Word parse_tree__equiv_type__V_38_38 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__equiv_type__HeadVar__1_1, (MR_Integer) 0)));
#line 709 "equiv_type.m"
        MR_Word parse_tree__equiv_type__V_39_39;
#line 709 "equiv_type.m"
        MR_Word parse_tree__equiv_type__STATE_VARIABLE_RecompInfo_40_40;
#line 709 "equiv_type.m"
        MR_Word parse_tree__equiv_type__STATE_VARIABLE_UsedModules_41_41;
#line 709 "equiv_type.m"
        MR_Word parse_tree__equiv_type__STATE_VARIABLE_Specs_42_42;
#line 709 "equiv_type.m"
        MR_Integer parse_tree__equiv_type__EventNumber_59;
#line 709 "equiv_type.m"
        MR_String parse_tree__equiv_type__EventName_60;
#line 709 "equiv_type.m"
        MR_Integer parse_tree__equiv_type__EventLineNumber_61;
#line 709 "equiv_type.m"
        MR_Word parse_tree__equiv_type__Attrs0_62;
#line 709 "equiv_type.m"
        MR_Word parse_tree__equiv_type__SyntAttrNumOrder_63;
#line 709 "equiv_type.m"
        MR_Word parse_tree__equiv_type__Attrs_64;

#line 708 "equiv_type.m"
        parse_tree__equiv_type__Name_22 = ((MR_String) (MR_hl_field(MR_mktag(0), parse_tree__equiv_type__V_38_38, (MR_Integer) 0)));
#line 708 "equiv_type.m"
        parse_tree__equiv_type__EventSpec0_23 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__equiv_type__V_38_38, (MR_Integer) 1)));
#line 723 "equiv_type.m"
        parse_tree__equiv_type__EventNumber_59 = ((MR_Integer) (MR_hl_field(MR_mktag(0), parse_tree__equiv_type__EventSpec0_23, (MR_Integer) 0)));
#line 723 "equiv_type.m"
        parse_tree__equiv_type__EventName_60 = ((MR_String) (MR_hl_field(MR_mktag(0), parse_tree__equiv_type__EventSpec0_23, (MR_Integer) 1)));
#line 723 "equiv_type.m"
        parse_tree__equiv_type__EventLineNumber_61 = ((MR_Integer) (MR_hl_field(MR_mktag(0), parse_tree__equiv_type__EventSpec0_23, (MR_Integer) 2)));
#line 723 "equiv_type.m"
        parse_tree__equiv_type__Attrs0_62 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__equiv_type__EventSpec0_23, (MR_Integer) 3)));
#line 723 "equiv_type.m"
        parse_tree__equiv_type__SyntAttrNumOrder_63 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__equiv_type__EventSpec0_23, (MR_Integer) 4)));
#line 725 "equiv_type.m"
        {
#line 725 "equiv_type.m"
          parse_tree__equiv_type__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_114_101_112_108_97_99_101_95_105_110_95_101_118_101_110_116_95_97_116_116_114_115_95_95_91_52_93_95_48_10_p_0(parse_tree__equiv_type__Attrs0_62, &parse_tree__equiv_type__Attrs_64, parse_tree__equiv_type__TypeEqvMap_3, parse_tree__equiv_type__STATE_VARIABLE_RecompInfo_0_5, &parse_tree__equiv_type__STATE_VARIABLE_RecompInfo_40_40, parse_tree__equiv_type__STATE_VARIABLE_UsedModules_0_7, &parse_tree__equiv_type__STATE_VARIABLE_UsedModules_41_41, parse_tree__equiv_type__STATE_VARIABLE_Specs_0_9, &parse_tree__equiv_type__STATE_VARIABLE_Specs_42_42);
        }
#line 727 "equiv_type.m"
        {
#line 727 "equiv_type.m"
          parse_tree__equiv_type__EventSpec_25 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
#line 727 "equiv_type.m"
          MR_hl_field(MR_mktag(0), parse_tree__equiv_type__EventSpec_25, 0) = ((MR_Box) (parse_tree__equiv_type__EventNumber_59));
#line 727 "equiv_type.m"
          MR_hl_field(MR_mktag(0), parse_tree__equiv_type__EventSpec_25, 1) = ((MR_Box) (parse_tree__equiv_type__EventName_60));
#line 727 "equiv_type.m"
          MR_hl_field(MR_mktag(0), parse_tree__equiv_type__EventSpec_25, 2) = ((MR_Box) (parse_tree__equiv_type__EventLineNumber_61));
#line 727 "equiv_type.m"
          MR_hl_field(MR_mktag(0), parse_tree__equiv_type__EventSpec_25, 3) = ((MR_Box) (parse_tree__equiv_type__Attrs_64));
#line 727 "equiv_type.m"
          MR_hl_field(MR_mktag(0), parse_tree__equiv_type__EventSpec_25, 4) = ((MR_Box) (parse_tree__equiv_type__SyntAttrNumOrder_63));
#line 727 "equiv_type.m"
        }
#line 708 "equiv_type.m"
        {
#line 708 "equiv_type.m"
          parse_tree__equiv_type__V_39_39 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 708 "equiv_type.m"
          MR_hl_field(MR_mktag(0), parse_tree__equiv_type__V_39_39, 0) = ((MR_Box) (parse_tree__equiv_type__Name_22));
#line 708 "equiv_type.m"
          MR_hl_field(MR_mktag(0), parse_tree__equiv_type__V_39_39, 1) = ((MR_Box) (parse_tree__equiv_type__EventSpec_25));
#line 708 "equiv_type.m"
        }
#line 712 "equiv_type.m"
        {
#line 712 "equiv_type.m"
          parse_tree__equiv_type__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_114_101_112_108_97_99_101_95_105_110_95_101_118_101_110_116_95_115_112_101_99_115_95_95_91_52_93_95_48_10_p_0(parse_tree__equiv_type__NameSpecs0_24, &parse_tree__equiv_type__NameSpecs_26, parse_tree__equiv_type__TypeEqvMap_3, parse_tree__equiv_type__STATE_VARIABLE_RecompInfo_40_40, parse_tree__equiv_type__STATE_VARIABLE_RecompInfo_6, parse_tree__equiv_type__STATE_VARIABLE_UsedModules_41_41, parse_tree__equiv_type__STATE_VARIABLE_UsedModules_8, parse_tree__equiv_type__STATE_VARIABLE_Specs_42_42, parse_tree__equiv_type__STATE_VARIABLE_Specs_10);
        }
#line 708 "equiv_type.m"
        {
#line 708 "equiv_type.m"
          MR_Word base;
#line 708 "equiv_type.m"
          base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 708 "equiv_type.m"
          *parse_tree__equiv_type__HeadVar__2_2 = base;
#line 708 "equiv_type.m"
          MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (parse_tree__equiv_type__V_39_39));
#line 708 "equiv_type.m"
          MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (parse_tree__equiv_type__NameSpecs_26));
#line 708 "equiv_type.m"
        }
#line 709 "equiv_type.m"
      }
#line 706 "equiv_type.m"
  }
#line 699 "equiv_type.m"
}

#line 563 "equiv_type.m"
static void MR_CALL 
parse_tree__equiv_type__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_114_101_112_108_97_99_101_95_105_110_95_112_114_97_103_109_97_95_105_110_102_111_95_95_91_52_93_95_48_11_p_0(
#line 563 "equiv_type.m"
  MR_Word parse_tree__equiv_type__ModuleName_12,
#line 563 "equiv_type.m"
  MR_Word parse_tree__equiv_type__MaybeRecord_13,
#line 563 "equiv_type.m"
  MR_Word parse_tree__equiv_type__TypeEqvMap_14,
#line 563 "equiv_type.m"
  MR_Word parse_tree__equiv_type__Info0_16,
#line 563 "equiv_type.m"
  MR_Word * parse_tree__equiv_type__Info_17,
#line 563 "equiv_type.m"
  MR_Word parse_tree__equiv_type__STATE_VARIABLE_RecompInfo_0_96,
#line 563 "equiv_type.m"
  MR_Word * parse_tree__equiv_type__STATE_VARIABLE_RecompInfo_97,
#line 563 "equiv_type.m"
  MR_Word parse_tree__equiv_type__STATE_VARIABLE_UsedModules_0_98,
#line 563 "equiv_type.m"
  MR_Word * parse_tree__equiv_type__STATE_VARIABLE_UsedModules_99,
#line 563 "equiv_type.m"
  MR_Word * parse_tree__equiv_type__HeadVar__11_11)
#line 563 "equiv_type.m"
{
#line 570 "equiv_type.m"
  {
#line 570 "equiv_type.m"
    MR_bool parse_tree__equiv_type__succeeded;
#line 570 "equiv_type.m"
    MR_Word parse_tree__equiv_type__Pragma0_20;
#line 570 "equiv_type.m"
    MR_Word parse_tree__equiv_type__Origin_21;
#line 570 "equiv_type.m"
    MR_Word parse_tree__equiv_type__Context_22;
#line 570 "equiv_type.m"
    MR_Integer parse_tree__equiv_type__SeqNum_23;
#line 570 "equiv_type.m"
    MR_Word parse_tree__equiv_type__Pragma_41;

#line 570 "equiv_type.m"
    *parse_tree__equiv_type__HeadVar__11_11 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 571 "equiv_type.m"
    parse_tree__equiv_type__Pragma0_20 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__equiv_type__Info0_16, (MR_Integer) 0)));
#line 571 "equiv_type.m"
    parse_tree__equiv_type__Origin_21 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__equiv_type__Info0_16, (MR_Integer) 1)));
#line 571 "equiv_type.m"
    parse_tree__equiv_type__Context_22 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__equiv_type__Info0_16, (MR_Integer) 2)));
#line 571 "equiv_type.m"
    parse_tree__equiv_type__SeqNum_23 = ((MR_Integer) (MR_hl_field(MR_mktag(0), parse_tree__equiv_type__Info0_16, (MR_Integer) 3)));
#line 596 "equiv_type.m"
#line 596 "equiv_type.m"
    switch (MR_tag((MR_Word) parse_tree__equiv_type__Pragma0_20)) {
#line 596 "equiv_type.m"
      default: /*NOTREACHED*/ MR_assert(0);
#line 596 "equiv_type.m"
      case (MR_Integer) 0:
#line 596 "equiv_type.m"
      case (MR_Integer) 1:
#line 659 "equiv_type.m"
        {
#line 660 "equiv_type.m"
          parse_tree__equiv_type__Pragma_41 = parse_tree__equiv_type__Pragma0_20;
#line 659 "equiv_type.m"
          *parse_tree__equiv_type__STATE_VARIABLE_RecompInfo_97 = parse_tree__equiv_type__STATE_VARIABLE_RecompInfo_0_96;
#line 659 "equiv_type.m"
          *parse_tree__equiv_type__STATE_VARIABLE_UsedModules_99 = parse_tree__equiv_type__STATE_VARIABLE_UsedModules_0_98;
#line 659 "equiv_type.m"
        }
#line 596 "equiv_type.m"
        break;
#line 596 "equiv_type.m"
      case (MR_Integer) 2:
#line 597 "equiv_type.m"
        {
#line 597 "equiv_type.m"
          MR_Word parse_tree__equiv_type__FPInfo0_42 = ((MR_Word) (MR_hl_field(MR_mktag(2), parse_tree__equiv_type__Pragma0_20, (MR_Integer) 0)));
#line 597 "equiv_type.m"
          MR_Word parse_tree__equiv_type__Attrs0_43 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__equiv_type__FPInfo0_42, (MR_Integer) 0)));
#line 597 "equiv_type.m"
          MR_Word parse_tree__equiv_type__PName_44 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__equiv_type__FPInfo0_42, (MR_Integer) 1)));
#line 597 "equiv_type.m"
          MR_Word parse_tree__equiv_type__PredOrFunc_45 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__equiv_type__FPInfo0_42, (MR_Integer) 2)));
#line 597 "equiv_type.m"
          MR_Word parse_tree__equiv_type__ProcVars_46 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__equiv_type__FPInfo0_42, (MR_Integer) 3)));
#line 597 "equiv_type.m"
          MR_Word parse_tree__equiv_type__ProcVarset_47 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__equiv_type__FPInfo0_42, (MR_Integer) 4)));
#line 597 "equiv_type.m"
          MR_Word parse_tree__equiv_type__ProcInstVarset_48 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__equiv_type__FPInfo0_42, (MR_Integer) 5)));
#line 597 "equiv_type.m"
          MR_Word parse_tree__equiv_type__ProcImpl_49 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__equiv_type__FPInfo0_42, (MR_Integer) 6)));
#line 597 "equiv_type.m"
          MR_Word parse_tree__equiv_type__UserSharing0_51;
#line 597 "equiv_type.m"
          MR_Word parse_tree__equiv_type__Attrs_62;
#line 597 "equiv_type.m"
          MR_Word parse_tree__equiv_type__ItemId_63;
#line 597 "equiv_type.m"
          MR_Word parse_tree__equiv_type__FPInfo_64;
#line 597 "equiv_type.m"
          MR_Word parse_tree__equiv_type__STATE_VARIABLE_EquivTypeInfo_100_100;
#line 597 "equiv_type.m"
          MR_Word parse_tree__equiv_type__STATE_VARIABLE_EquivTypeInfo_104_104;
#line 597 "equiv_type.m"
          MR_Word parse_tree__equiv_type__V_108_108;
#line 597 "equiv_type.m"
          MR_Integer parse_tree__equiv_type__V_109_109;
#line 616 "equiv_type.m"
          MR_Word parse_tree__equiv_type__Sharing0_52;
#line 616 "equiv_type.m"
          MR_Word parse_tree__equiv_type__Types0_54;
#line 616 "equiv_type.m"
          MR_Word parse_tree__equiv_type__TVarSet0_55;
#line 605 "equiv_type.m"
          MR_Word parse_tree__equiv_type__MaybeTypes0_53;
#line 605 "equiv_type.m"
          MR_Word parse_tree__equiv_type__V_101_101;

#line 601 "equiv_type.m"
          {
#line 601 "equiv_type.m"
            recompilation__maybe_start_recording_expanded_items_4_p_0(parse_tree__equiv_type__ModuleName_12, parse_tree__equiv_type__PName_44, parse_tree__equiv_type__STATE_VARIABLE_RecompInfo_0_96, &parse_tree__equiv_type__STATE_VARIABLE_EquivTypeInfo_100_100);
          }
#line 603 "equiv_type.m"
          {
#line 603 "equiv_type.m"
            parse_tree__equiv_type__UserSharing0_51 = parse_tree__prog_data__get_user_annotated_sharing_1_f_0(parse_tree__equiv_type__Attrs0_43);
          }
#line 605 "equiv_type.m"
          parse_tree__equiv_type__succeeded = ((MR_tag((MR_Word) parse_tree__equiv_type__UserSharing0_51)) == (MR_mktag((MR_Integer) 1)));
#line 605 "equiv_type.m"
          if (parse_tree__equiv_type__succeeded)
#line 605 "equiv_type.m"
            {
#line 605 "equiv_type.m"
              parse_tree__equiv_type__Sharing0_52 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__equiv_type__UserSharing0_51, (MR_Integer) 0)));
#line 605 "equiv_type.m"
              parse_tree__equiv_type__MaybeTypes0_53 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__equiv_type__UserSharing0_51, (MR_Integer) 1)));
#line 606 "equiv_type.m"
              parse_tree__equiv_type__succeeded = ((MR_tag((MR_Word) parse_tree__equiv_type__MaybeTypes0_53)) == (MR_mktag((MR_Integer) 1)));
#line 606 "equiv_type.m"
              if (parse_tree__equiv_type__succeeded)
#line 606 "equiv_type.m"
                {
#line 606 "equiv_type.m"
                  parse_tree__equiv_type__V_101_101 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__equiv_type__MaybeTypes0_53, (MR_Integer) 0)));
#line 606 "equiv_type.m"
                  parse_tree__equiv_type__Types0_54 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__equiv_type__V_101_101, (MR_Integer) 0)));
#line 606 "equiv_type.m"
                  parse_tree__equiv_type__TVarSet0_55 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__equiv_type__V_101_101, (MR_Integer) 1)));
#line 606 "equiv_type.m"
                  parse_tree__equiv_type__succeeded = MR_TRUE;
#line 606 "equiv_type.m"
                }
#line 605 "equiv_type.m"
            }
#line 616 "equiv_type.m"
          if (parse_tree__equiv_type__succeeded)
#line 610 "equiv_type.m"
            {
#line 610 "equiv_type.m"
              MR_Word parse_tree__equiv_type__Types_56;
#line 610 "equiv_type.m"
              MR_Word parse_tree__equiv_type__TVarSet_58;
#line 610 "equiv_type.m"
              MR_Word parse_tree__equiv_type__Sharing_59;
#line 610 "equiv_type.m"
              MR_Word parse_tree__equiv_type__MaybeTypes_60;
#line 610 "equiv_type.m"
              MR_Word parse_tree__equiv_type__UserSharing_61;
#line 610 "equiv_type.m"
              MR_Word parse_tree__equiv_type__STATE_VARIABLE_EquivTypeInfo_102_102;
#line 610 "equiv_type.m"
              MR_Word parse_tree__equiv_type__STATE_VARIABLE_UsedModules_103_103;
#line 610 "equiv_type.m"
              MR_Word parse_tree__equiv_type__V_106_106;
#line 608 "equiv_type.m"
              MR_Word parse_tree__equiv_type___AnythingChanged_57;

#line 608 "equiv_type.m"
              {
#line 608 "equiv_type.m"
                parse_tree__equiv_type__replace_in_type_list_location_11_p_0(parse_tree__equiv_type__MaybeRecord_13, parse_tree__equiv_type__TypeEqvMap_14, parse_tree__equiv_type__Types0_54, &parse_tree__equiv_type__Types_56, &parse_tree__equiv_type___AnythingChanged_57, parse_tree__equiv_type__TVarSet0_55, &parse_tree__equiv_type__TVarSet_58, parse_tree__equiv_type__STATE_VARIABLE_EquivTypeInfo_100_100, &parse_tree__equiv_type__STATE_VARIABLE_EquivTypeInfo_102_102, parse_tree__equiv_type__STATE_VARIABLE_UsedModules_0_98, &parse_tree__equiv_type__STATE_VARIABLE_UsedModules_103_103);
              }
#line 611 "equiv_type.m"
              {
#line 611 "equiv_type.m"
                parse_tree__equiv_type__replace_in_structure_sharing_domain_9_p_0(parse_tree__equiv_type__MaybeRecord_13, parse_tree__equiv_type__TypeEqvMap_14, parse_tree__equiv_type__TVarSet0_55, parse_tree__equiv_type__Sharing0_52, &parse_tree__equiv_type__Sharing_59, parse_tree__equiv_type__STATE_VARIABLE_EquivTypeInfo_102_102, &parse_tree__equiv_type__STATE_VARIABLE_EquivTypeInfo_104_104, parse_tree__equiv_type__STATE_VARIABLE_UsedModules_103_103, parse_tree__equiv_type__STATE_VARIABLE_UsedModules_99);
              }
#line 613 "equiv_type.m"
              {
#line 613 "equiv_type.m"
                parse_tree__equiv_type__V_106_106 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 613 "equiv_type.m"
                MR_hl_field(MR_mktag(0), parse_tree__equiv_type__V_106_106, 0) = ((MR_Box) (parse_tree__equiv_type__Types_56));
#line 613 "equiv_type.m"
                MR_hl_field(MR_mktag(0), parse_tree__equiv_type__V_106_106, 1) = ((MR_Box) (parse_tree__equiv_type__TVarSet_58));
#line 613 "equiv_type.m"
              }
#line 613 "equiv_type.m"
              {
#line 613 "equiv_type.m"
                parse_tree__equiv_type__MaybeTypes_60 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 613 "equiv_type.m"
                MR_hl_field(MR_mktag(1), parse_tree__equiv_type__MaybeTypes_60, 0) = ((MR_Box) (parse_tree__equiv_type__V_106_106));
#line 613 "equiv_type.m"
              }
#line 614 "equiv_type.m"
              {
#line 614 "equiv_type.m"
                parse_tree__equiv_type__UserSharing_61 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 614 "equiv_type.m"
                MR_hl_field(MR_mktag(1), parse_tree__equiv_type__UserSharing_61, 0) = ((MR_Box) (parse_tree__equiv_type__Sharing_59));
#line 614 "equiv_type.m"
                MR_hl_field(MR_mktag(1), parse_tree__equiv_type__UserSharing_61, 1) = ((MR_Box) (parse_tree__equiv_type__MaybeTypes_60));
#line 614 "equiv_type.m"
              }
#line 615 "equiv_type.m"
              {
#line 615 "equiv_type.m"
                parse_tree__prog_data__set_user_annotated_sharing_3_p_0(parse_tree__equiv_type__UserSharing_61, parse_tree__equiv_type__Attrs0_43, &parse_tree__equiv_type__Attrs_62);
              }
#line 610 "equiv_type.m"
            }
#line 616 "equiv_type.m"
          else
#line 617 "equiv_type.m"
            {
#line 617 "equiv_type.m"
              parse_tree__equiv_type__Attrs_62 = parse_tree__equiv_type__Attrs0_43;
#line 617 "equiv_type.m"
              parse_tree__equiv_type__STATE_VARIABLE_EquivTypeInfo_104_104 = parse_tree__equiv_type__STATE_VARIABLE_EquivTypeInfo_100_100;
#line 617 "equiv_type.m"
              *parse_tree__equiv_type__STATE_VARIABLE_UsedModules_99 = parse_tree__equiv_type__STATE_VARIABLE_UsedModules_0_98;
#line 617 "equiv_type.m"
            }
#line 620 "equiv_type.m"
          {
#line 620 "equiv_type.m"
            parse_tree__equiv_type__V_109_109 = mercury__list__length_1_f_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_pragma_var_0, parse_tree__equiv_type__ProcVars_46);
          }
#line 619 "equiv_type.m"
          {
#line 619 "equiv_type.m"
            parse_tree__equiv_type__V_108_108 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 619 "equiv_type.m"
            MR_hl_field(MR_mktag(0), parse_tree__equiv_type__V_108_108, 0) = ((MR_Box) (parse_tree__equiv_type__PName_44));
#line 619 "equiv_type.m"
            MR_hl_field(MR_mktag(0), parse_tree__equiv_type__V_108_108, 1) = ((MR_Box) (parse_tree__equiv_type__V_109_109));
#line 619 "equiv_type.m"
          }
#line 619 "equiv_type.m"
          {
#line 619 "equiv_type.m"
            parse_tree__equiv_type__ItemId_63 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 619 "equiv_type.m"
            MR_hl_field(MR_mktag(0), parse_tree__equiv_type__ItemId_63, 0) = ((MR_Box) ((MR_Integer) 9));
#line 619 "equiv_type.m"
            MR_hl_field(MR_mktag(0), parse_tree__equiv_type__ItemId_63, 1) = ((MR_Box) (parse_tree__equiv_type__V_108_108));
#line 619 "equiv_type.m"
          }
#line 621 "equiv_type.m"
          {
#line 621 "equiv_type.m"
            recompilation__finish_recording_expanded_items_4_p_0(parse_tree__equiv_type__ItemId_63, parse_tree__equiv_type__STATE_VARIABLE_EquivTypeInfo_104_104, parse_tree__equiv_type__STATE_VARIABLE_RecompInfo_0_96, parse_tree__equiv_type__STATE_VARIABLE_RecompInfo_97);
          }
#line 624 "equiv_type.m"
          {
#line 624 "equiv_type.m"
            parse_tree__equiv_type__FPInfo_64 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 7 * sizeof(MR_Word)), NULL, NULL);
#line 624 "equiv_type.m"
            MR_hl_field(MR_mktag(0), parse_tree__equiv_type__FPInfo_64, 0) = ((MR_Box) (parse_tree__equiv_type__Attrs_62));
#line 624 "equiv_type.m"
            MR_hl_field(MR_mktag(0), parse_tree__equiv_type__FPInfo_64, 1) = ((MR_Box) (parse_tree__equiv_type__PName_44));
#line 624 "equiv_type.m"
            MR_hl_field(MR_mktag(0), parse_tree__equiv_type__FPInfo_64, 2) = ((MR_Box) (parse_tree__equiv_type__PredOrFunc_45));
#line 624 "equiv_type.m"
            MR_hl_field(MR_mktag(0), parse_tree__equiv_type__FPInfo_64, 3) = ((MR_Box) (parse_tree__equiv_type__ProcVars_46));
#line 624 "equiv_type.m"
            MR_hl_field(MR_mktag(0), parse_tree__equiv_type__FPInfo_64, 4) = ((MR_Box) (parse_tree__equiv_type__ProcVarset_47));
#line 624 "equiv_type.m"
            MR_hl_field(MR_mktag(0), parse_tree__equiv_type__FPInfo_64, 5) = ((MR_Box) (parse_tree__equiv_type__ProcInstVarset_48));
#line 624 "equiv_type.m"
            MR_hl_field(MR_mktag(0), parse_tree__equiv_type__FPInfo_64, 6) = ((MR_Box) (parse_tree__equiv_type__ProcImpl_49));
#line 624 "equiv_type.m"
          }
#line 626 "equiv_type.m"
          {
#line 626 "equiv_type.m"
            parse_tree__equiv_type__Pragma_41 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 626 "equiv_type.m"
            MR_hl_field(MR_mktag(2), parse_tree__equiv_type__Pragma_41, 0) = ((MR_Box) (parse_tree__equiv_type__FPInfo_64));
#line 626 "equiv_type.m"
          }
#line 597 "equiv_type.m"
        }
#line 596 "equiv_type.m"
        break;
#line 596 "equiv_type.m"
      case (MR_Integer) 3:
#line 596 "equiv_type.m"
#line 596 "equiv_type.m"
        switch (((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__equiv_type__Pragma0_20, (MR_Integer) 0)))) {
#line 596 "equiv_type.m"
          default: /*NOTREACHED*/ MR_assert(0);
#line 596 "equiv_type.m"
          case (MR_Integer) 0:
#line 596 "equiv_type.m"
          case (MR_Integer) 1:
#line 596 "equiv_type.m"
          case (MR_Integer) 2:
#line 596 "equiv_type.m"
          case (MR_Integer) 3:
#line 596 "equiv_type.m"
          case (MR_Integer) 4:
#line 596 "equiv_type.m"
          case (MR_Integer) 6:
#line 596 "equiv_type.m"
          case (MR_Integer) 7:
#line 596 "equiv_type.m"
          case (MR_Integer) 8:
#line 596 "equiv_type.m"
          case (MR_Integer) 9:
#line 596 "equiv_type.m"
          case (MR_Integer) 10:
#line 596 "equiv_type.m"
          case (MR_Integer) 11:
#line 596 "equiv_type.m"
          case (MR_Integer) 12:
#line 596 "equiv_type.m"
          case (MR_Integer) 13:
#line 596 "equiv_type.m"
          case (MR_Integer) 14:
#line 596 "equiv_type.m"
          case (MR_Integer) 15:
#line 596 "equiv_type.m"
          case (MR_Integer) 16:
#line 596 "equiv_type.m"
          case (MR_Integer) 17:
#line 596 "equiv_type.m"
          case (MR_Integer) 18:
#line 596 "equiv_type.m"
          case (MR_Integer) 19:
#line 596 "equiv_type.m"
          case (MR_Integer) 20:
#line 596 "equiv_type.m"
          case (MR_Integer) 21:
#line 596 "equiv_type.m"
          case (MR_Integer) 22:
#line 596 "equiv_type.m"
          case (MR_Integer) 23:
#line 596 "equiv_type.m"
          case (MR_Integer) 24:
#line 596 "equiv_type.m"
          case (MR_Integer) 25:
#line 596 "equiv_type.m"
          case (MR_Integer) 26:
#line 596 "equiv_type.m"
          case (MR_Integer) 27:
#line 596 "equiv_type.m"
          case (MR_Integer) 28:
#line 596 "equiv_type.m"
          case (MR_Integer) 29:
#line 659 "equiv_type.m"
            {
#line 660 "equiv_type.m"
              parse_tree__equiv_type__Pragma_41 = parse_tree__equiv_type__Pragma0_20;
#line 659 "equiv_type.m"
              *parse_tree__equiv_type__STATE_VARIABLE_RecompInfo_97 = parse_tree__equiv_type__STATE_VARIABLE_RecompInfo_0_96;
#line 659 "equiv_type.m"
              *parse_tree__equiv_type__STATE_VARIABLE_UsedModules_99 = parse_tree__equiv_type__STATE_VARIABLE_UsedModules_0_98;
#line 659 "equiv_type.m"
            }
#line 596 "equiv_type.m"
            break;
#line 596 "equiv_type.m"
          case (MR_Integer) 5:
#line 573 "equiv_type.m"
            {
#line 573 "equiv_type.m"
              MR_Word parse_tree__equiv_type__TypeSpecInfo0_24 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__equiv_type__Pragma0_20, (MR_Integer) 1)));
#line 573 "equiv_type.m"
              MR_Word parse_tree__equiv_type__PredName_25 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__equiv_type__TypeSpecInfo0_24, (MR_Integer) 0)));
#line 573 "equiv_type.m"
              MR_Word parse_tree__equiv_type__NewName_26 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__equiv_type__TypeSpecInfo0_24, (MR_Integer) 1)));
#line 573 "equiv_type.m"
              MR_Integer parse_tree__equiv_type__Arity_27 = ((MR_Integer) (MR_hl_field(MR_mktag(0), parse_tree__equiv_type__TypeSpecInfo0_24, (MR_Integer) 2)));
#line 573 "equiv_type.m"
              MR_Word parse_tree__equiv_type__PorF_28 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__equiv_type__TypeSpecInfo0_24, (MR_Integer) 3)));
#line 573 "equiv_type.m"
              MR_Word parse_tree__equiv_type__Modes_29 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__equiv_type__TypeSpecInfo0_24, (MR_Integer) 4)));
#line 573 "equiv_type.m"
              MR_Word parse_tree__equiv_type__Subst0_30 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__equiv_type__TypeSpecInfo0_24, (MR_Integer) 5)));
#line 573 "equiv_type.m"
              MR_Word parse_tree__equiv_type__VarSet0_31 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__equiv_type__TypeSpecInfo0_24, (MR_Integer) 6)));
#line 573 "equiv_type.m"
              MR_Word parse_tree__equiv_type__ItemIds0_32 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__equiv_type__TypeSpecInfo0_24, (MR_Integer) 7)));
#line 573 "equiv_type.m"
              MR_Word parse_tree__equiv_type__ExpandedItems0_34;
#line 573 "equiv_type.m"
              MR_Word parse_tree__equiv_type__Subst_35;
#line 573 "equiv_type.m"
              MR_Word parse_tree__equiv_type__VarSet_36;
#line 573 "equiv_type.m"
              MR_Word parse_tree__equiv_type__ExpandedItems_37;
#line 573 "equiv_type.m"
              MR_Word parse_tree__equiv_type__ItemIds_38;
#line 573 "equiv_type.m"
              MR_Word parse_tree__equiv_type__TypeSpecInfo_40;

#line 577 "equiv_type.m"
              parse_tree__equiv_type__succeeded = (parse_tree__equiv_type__STATE_VARIABLE_RecompInfo_0_96 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 578 "equiv_type.m"
              if (!(parse_tree__equiv_type__succeeded))
#line 578 "equiv_type.m"
                {
#line 578 "equiv_type.m"
                  MR_Word parse_tree__equiv_type__V_115_115;
#line 578 "equiv_type.m"
                  MR_String parse_tree__equiv_type__V_33_33;

#line 578 "equiv_type.m"
                  parse_tree__equiv_type__succeeded = ((MR_tag((MR_Word) parse_tree__equiv_type__PredName_25)) == (MR_mktag((MR_Integer) 1)));
#line 578 "equiv_type.m"
                  if (parse_tree__equiv_type__succeeded)
#line 578 "equiv_type.m"
                    {
#line 578 "equiv_type.m"
                      parse_tree__equiv_type__V_115_115 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__equiv_type__PredName_25, (MR_Integer) 0)));
#line 578 "equiv_type.m"
                      parse_tree__equiv_type__V_33_33 = ((MR_String) (MR_hl_field(MR_mktag(1), parse_tree__equiv_type__PredName_25, (MR_Integer) 1)));
#line 578 "equiv_type.m"
                      {
#line 578 "equiv_type.m"
                        parse_tree__equiv_type__succeeded = mdbcomp__sym_name____Unify____sym_name_0_0(parse_tree__equiv_type__ModuleName_12, parse_tree__equiv_type__V_115_115);
                      }
#line 578 "equiv_type.m"
                    }
#line 578 "equiv_type.m"
                }
#line 582 "equiv_type.m"
              if (parse_tree__equiv_type__succeeded)
#line 581 "equiv_type.m"
                parse_tree__equiv_type__ExpandedItems0_34 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 582 "equiv_type.m"
              else
#line 583 "equiv_type.m"
                {
#line 583 "equiv_type.m"
                  MR_Word parse_tree__equiv_type__V_111_111;

#line 583 "equiv_type.m"
                  {
#line 583 "equiv_type.m"
                    parse_tree__equiv_type__V_111_111 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 583 "equiv_type.m"
                    MR_hl_field(MR_mktag(0), parse_tree__equiv_type__V_111_111, 0) = ((MR_Box) (parse_tree__equiv_type__ModuleName_12));
#line 583 "equiv_type.m"
                    MR_hl_field(MR_mktag(0), parse_tree__equiv_type__V_111_111, 1) = ((MR_Box) (parse_tree__equiv_type__ItemIds0_32));
#line 583 "equiv_type.m"
                  }
#line 583 "equiv_type.m"
                  {
#line 583 "equiv_type.m"
                    parse_tree__equiv_type__ExpandedItems0_34 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 583 "equiv_type.m"
                    MR_hl_field(MR_mktag(1), parse_tree__equiv_type__ExpandedItems0_34, 0) = ((MR_Box) (parse_tree__equiv_type__V_111_111));
#line 583 "equiv_type.m"
                  }
#line 583 "equiv_type.m"
                }
#line 585 "equiv_type.m"
              {
#line 585 "equiv_type.m"
                parse_tree__equiv_type__replace_in_subst_10_p_0(parse_tree__equiv_type__MaybeRecord_13, parse_tree__equiv_type__TypeEqvMap_14, parse_tree__equiv_type__Subst0_30, &parse_tree__equiv_type__Subst_35, parse_tree__equiv_type__VarSet0_31, &parse_tree__equiv_type__VarSet_36, parse_tree__equiv_type__ExpandedItems0_34, &parse_tree__equiv_type__ExpandedItems_37, parse_tree__equiv_type__STATE_VARIABLE_UsedModules_0_98, parse_tree__equiv_type__STATE_VARIABLE_UsedModules_99);
              }
#line 590 "equiv_type.m"
              if ((parse_tree__equiv_type__ExpandedItems_37 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 589 "equiv_type.m"
                parse_tree__equiv_type__ItemIds_38 = parse_tree__equiv_type__ItemIds0_32;
#line 590 "equiv_type.m"
              else
#line 591 "equiv_type.m"
                {
#line 591 "equiv_type.m"
                  MR_Word parse_tree__equiv_type__V_113_113 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__equiv_type__ExpandedItems_37, (MR_Integer) 0)));
#line 591 "equiv_type.m"
                  MR_Word parse_tree__equiv_type__V_39_39 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__equiv_type__V_113_113, (MR_Integer) 0)));

#line 591 "equiv_type.m"
                  parse_tree__equiv_type__ItemIds_38 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__equiv_type__V_113_113, (MR_Integer) 1)));
#line 591 "equiv_type.m"
                }
#line 593 "equiv_type.m"
              {
#line 593 "equiv_type.m"
                parse_tree__equiv_type__TypeSpecInfo_40 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 8 * sizeof(MR_Word)), NULL, NULL);
#line 593 "equiv_type.m"
                MR_hl_field(MR_mktag(0), parse_tree__equiv_type__TypeSpecInfo_40, 0) = ((MR_Box) (parse_tree__equiv_type__PredName_25));
#line 593 "equiv_type.m"
                MR_hl_field(MR_mktag(0), parse_tree__equiv_type__TypeSpecInfo_40, 1) = ((MR_Box) (parse_tree__equiv_type__NewName_26));
#line 593 "equiv_type.m"
                MR_hl_field(MR_mktag(0), parse_tree__equiv_type__TypeSpecInfo_40, 2) = ((MR_Box) (parse_tree__equiv_type__Arity_27));
#line 593 "equiv_type.m"
                MR_hl_field(MR_mktag(0), parse_tree__equiv_type__TypeSpecInfo_40, 3) = ((MR_Box) (parse_tree__equiv_type__PorF_28));
#line 593 "equiv_type.m"
                MR_hl_field(MR_mktag(0), parse_tree__equiv_type__TypeSpecInfo_40, 4) = ((MR_Box) (parse_tree__equiv_type__Modes_29));
#line 593 "equiv_type.m"
                MR_hl_field(MR_mktag(0), parse_tree__equiv_type__TypeSpecInfo_40, 5) = ((MR_Box) (parse_tree__equiv_type__Subst_35));
#line 593 "equiv_type.m"
                MR_hl_field(MR_mktag(0), parse_tree__equiv_type__TypeSpecInfo_40, 6) = ((MR_Box) (parse_tree__equiv_type__VarSet_36));
#line 593 "equiv_type.m"
                MR_hl_field(MR_mktag(0), parse_tree__equiv_type__TypeSpecInfo_40, 7) = ((MR_Box) (parse_tree__equiv_type__ItemIds_38));
#line 593 "equiv_type.m"
              }
#line 595 "equiv_type.m"
              {
#line 595 "equiv_type.m"
                parse_tree__equiv_type__Pragma_41 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 595 "equiv_type.m"
                MR_hl_field(MR_mktag(3), parse_tree__equiv_type__Pragma_41, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 5));
#line 595 "equiv_type.m"
                MR_hl_field(MR_mktag(3), parse_tree__equiv_type__Pragma_41, 1) = ((MR_Box) (parse_tree__equiv_type__TypeSpecInfo_40));
#line 595 "equiv_type.m"
              }
#line 573 "equiv_type.m"
              *parse_tree__equiv_type__STATE_VARIABLE_RecompInfo_97 = parse_tree__equiv_type__STATE_VARIABLE_RecompInfo_0_96;
#line 573 "equiv_type.m"
            }
#line 596 "equiv_type.m"
            break;
#line 596 "equiv_type.m"
        }
#line 596 "equiv_type.m"
        break;
#line 596 "equiv_type.m"
    }
#line 662 "equiv_type.m"
    {
#line 662 "equiv_type.m"
      MR_Word base;
#line 662 "equiv_type.m"
      base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
#line 662 "equiv_type.m"
      *parse_tree__equiv_type__Info_17 = base;
#line 662 "equiv_type.m"
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (parse_tree__equiv_type__Pragma_41));
#line 662 "equiv_type.m"
      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (parse_tree__equiv_type__Origin_21));
#line 662 "equiv_type.m"
      MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (parse_tree__equiv_type__Context_22));
#line 662 "equiv_type.m"
      MR_hl_field(MR_mktag(0), base, 3) = ((MR_Box) (parse_tree__equiv_type__SeqNum_23));
#line 662 "equiv_type.m"
    }
#line 570 "equiv_type.m"
  }
#line 563 "equiv_type.m"
}

#line 849 "equiv_type.m"
static void MR_CALL 
parse_tree__equiv_type__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_114_101_112_108_97_99_101_95_105_110_95_105_110_115_116_97_110_99_101_95_105_110_102_111_95_95_91_52_93_95_48_11_p_0_1(
#line 849 "equiv_type.m"
  MR_Box parse_tree__equiv_type__closure_arg,
#line 849 "equiv_type.m"
  MR_Box parse_tree__equiv_type__wrapper_arg_1,
#line 849 "equiv_type.m"
  MR_Box * parse_tree__equiv_type__wrapper_arg_2,
#line 849 "equiv_type.m"
  MR_Box parse_tree__equiv_type__wrapper_arg_3,
#line 849 "equiv_type.m"
  MR_Box * parse_tree__equiv_type__wrapper_arg_4,
#line 849 "equiv_type.m"
  MR_Box parse_tree__equiv_type__wrapper_arg_5,
#line 849 "equiv_type.m"
  MR_Box * parse_tree__equiv_type__wrapper_arg_6,
#line 849 "equiv_type.m"
  MR_Box parse_tree__equiv_type__wrapper_arg_7,
#line 849 "equiv_type.m"
  MR_Box * parse_tree__equiv_type__wrapper_arg_8)
#line 849 "equiv_type.m"
{
#line 849 "equiv_type.m"
  {
#line 849 "equiv_type.m"
    MR_Box parse_tree__equiv_type__closure = parse_tree__equiv_type__closure_arg;
#line 849 "equiv_type.m"
    MR_Word parse_tree__equiv_type__conv3_Constraint_14;
#line 849 "equiv_type.m"
    MR_Word parse_tree__equiv_type__conv2_STATE_VARIABLE_VarSet_24;
#line 849 "equiv_type.m"
    MR_Word parse_tree__equiv_type__conv1_STATE_VARIABLE_EquivTypeInfo_26;
#line 849 "equiv_type.m"
    MR_Word parse_tree__equiv_type__conv0_STATE_VARIABLE_UsedModules_28;

#line 849 "equiv_type.m"
    {
#line 849 "equiv_type.m"
      parse_tree__equiv_type__replace_in_prog_constraint_location_10_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__equiv_type__closure, (MR_Integer) 3))), ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__equiv_type__closure, (MR_Integer) 4))), ((MR_Word) parse_tree__equiv_type__wrapper_arg_1), &parse_tree__equiv_type__conv3_Constraint_14, ((MR_Word) parse_tree__equiv_type__wrapper_arg_3), &parse_tree__equiv_type__conv2_STATE_VARIABLE_VarSet_24, ((MR_Word) parse_tree__equiv_type__wrapper_arg_5), &parse_tree__equiv_type__conv1_STATE_VARIABLE_EquivTypeInfo_26, ((MR_Word) parse_tree__equiv_type__wrapper_arg_7), &parse_tree__equiv_type__conv0_STATE_VARIABLE_UsedModules_28);
    }
#line 849 "equiv_type.m"
    *parse_tree__equiv_type__wrapper_arg_2 = ((MR_Box) (parse_tree__equiv_type__conv3_Constraint_14));
#line 849 "equiv_type.m"
    *parse_tree__equiv_type__wrapper_arg_4 = ((MR_Box) (parse_tree__equiv_type__conv2_STATE_VARIABLE_VarSet_24));
#line 849 "equiv_type.m"
    *parse_tree__equiv_type__wrapper_arg_6 = ((MR_Box) (parse_tree__equiv_type__conv1_STATE_VARIABLE_EquivTypeInfo_26));
#line 849 "equiv_type.m"
    *parse_tree__equiv_type__wrapper_arg_8 = ((MR_Box) (parse_tree__equiv_type__conv0_STATE_VARIABLE_UsedModules_28));
#line 849 "equiv_type.m"
  }
#line 849 "equiv_type.m"
}

#line 529 "equiv_type.m"
static void MR_CALL 
parse_tree__equiv_type__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_114_101_112_108_97_99_101_95_105_110_95_105_110_115_116_97_110_99_101_95_105_110_102_111_95_95_91_52_93_95_48_11_p_0(
#line 529 "equiv_type.m"
  MR_Word parse_tree__equiv_type__ModuleName_12,
#line 529 "equiv_type.m"
  MR_Word parse_tree__equiv_type__MaybeRecord_13,
#line 529 "equiv_type.m"
  MR_Word parse_tree__equiv_type__TypeEqvMap_14,
#line 529 "equiv_type.m"
  MR_Word parse_tree__equiv_type__InstanceInfo0_16,
#line 529 "equiv_type.m"
  MR_Word * parse_tree__equiv_type__InstanceInfo_17,
#line 529 "equiv_type.m"
  MR_Word parse_tree__equiv_type__STATE_VARIABLE_RecompInfo_0_40,
#line 529 "equiv_type.m"
  MR_Word * parse_tree__equiv_type__STATE_VARIABLE_RecompInfo_41,
#line 529 "equiv_type.m"
  MR_Word parse_tree__equiv_type__STATE_VARIABLE_UsedModules_0_42,
#line 529 "equiv_type.m"
  MR_Word * parse_tree__equiv_type__STATE_VARIABLE_UsedModules_43,
#line 529 "equiv_type.m"
  MR_Word * parse_tree__equiv_type__HeadVar__11_11)
#line 529 "equiv_type.m"
{
#line 536 "equiv_type.m"
  {
#line 536 "equiv_type.m"
    MR_bool parse_tree__equiv_type__succeeded;
#line 536 "equiv_type.m"
    MR_Word parse_tree__equiv_type__TypeCtorInfo_38_81;
#line 536 "equiv_type.m"
    MR_Word parse_tree__equiv_type__ClassName_20;
#line 536 "equiv_type.m"
    MR_Word parse_tree__equiv_type__Types0_21;
#line 536 "equiv_type.m"
    MR_Word parse_tree__equiv_type__OriginalTypes_22;
#line 536 "equiv_type.m"
    MR_Word parse_tree__equiv_type__Constraints0_23;
#line 536 "equiv_type.m"
    MR_Word parse_tree__equiv_type__InstanceBody_24;
#line 536 "equiv_type.m"
    MR_Word parse_tree__equiv_type__VarSet0_25;
#line 536 "equiv_type.m"
    MR_Word parse_tree__equiv_type__ContainingModuleName_26;
#line 536 "equiv_type.m"
    MR_Word parse_tree__equiv_type__Context_27;
#line 536 "equiv_type.m"
    MR_Integer parse_tree__equiv_type__SeqNum_28;
#line 536 "equiv_type.m"
    MR_Word parse_tree__equiv_type__UsedTypeCtors0_29;
#line 536 "equiv_type.m"
    MR_Word parse_tree__equiv_type__Constraints_30;
#line 536 "equiv_type.m"
    MR_Word parse_tree__equiv_type__VarSet1_31;
#line 536 "equiv_type.m"
    MR_Word parse_tree__equiv_type__UsedTypeCtors1_32;
#line 536 "equiv_type.m"
    MR_Word parse_tree__equiv_type__Types_33;
#line 536 "equiv_type.m"
    MR_Word parse_tree__equiv_type__VarSet_36;
#line 536 "equiv_type.m"
    MR_Word parse_tree__equiv_type__UsedTypeCtors_37;
#line 536 "equiv_type.m"
    MR_Integer parse_tree__equiv_type__Arity_38;
#line 536 "equiv_type.m"
    MR_Word parse_tree__equiv_type__ItemId_39;
#line 536 "equiv_type.m"
    MR_Word parse_tree__equiv_type__STATE_VARIABLE_UsedModules_46_46;
#line 536 "equiv_type.m"
    MR_Word parse_tree__equiv_type__V_49_49;
#line 536 "equiv_type.m"
    MR_Word parse_tree__equiv_type__V_68_68;
#line 848 "equiv_type.m"
    MR_Box parse_tree__equiv_type__conv6_VarSet1_31;
#line 848 "equiv_type.m"
    MR_Box parse_tree__equiv_type__conv5_UsedTypeCtors1_32;
#line 848 "equiv_type.m"
    MR_Box parse_tree__equiv_type__conv4_STATE_VARIABLE_UsedModules_46_46;
#line 552 "equiv_type.m"
    MR_Word parse_tree__equiv_type__V_34_34;
#line 552 "equiv_type.m"
    MR_Word parse_tree__equiv_type__V_35_35;

#line 536 "equiv_type.m"
    *parse_tree__equiv_type__HeadVar__11_11 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 537 "equiv_type.m"
    parse_tree__equiv_type__ClassName_20 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__equiv_type__InstanceInfo0_16, (MR_Integer) 0)));
#line 537 "equiv_type.m"
    parse_tree__equiv_type__Types0_21 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__equiv_type__InstanceInfo0_16, (MR_Integer) 1)));
#line 537 "equiv_type.m"
    parse_tree__equiv_type__OriginalTypes_22 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__equiv_type__InstanceInfo0_16, (MR_Integer) 2)));
#line 537 "equiv_type.m"
    parse_tree__equiv_type__Constraints0_23 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__equiv_type__InstanceInfo0_16, (MR_Integer) 3)));
#line 537 "equiv_type.m"
    parse_tree__equiv_type__InstanceBody_24 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__equiv_type__InstanceInfo0_16, (MR_Integer) 4)));
#line 537 "equiv_type.m"
    parse_tree__equiv_type__VarSet0_25 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__equiv_type__InstanceInfo0_16, (MR_Integer) 5)));
#line 537 "equiv_type.m"
    parse_tree__equiv_type__ContainingModuleName_26 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__equiv_type__InstanceInfo0_16, (MR_Integer) 6)));
#line 537 "equiv_type.m"
    parse_tree__equiv_type__Context_27 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__equiv_type__InstanceInfo0_16, (MR_Integer) 7)));
#line 537 "equiv_type.m"
    parse_tree__equiv_type__SeqNum_28 = ((MR_Integer) (MR_hl_field(MR_mktag(0), parse_tree__equiv_type__InstanceInfo0_16, (MR_Integer) 8)));
#line 541 "equiv_type.m"
    parse_tree__equiv_type__succeeded = (parse_tree__equiv_type__STATE_VARIABLE_RecompInfo_0_40 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 542 "equiv_type.m"
    if (!(parse_tree__equiv_type__succeeded))
#line 542 "equiv_type.m"
      {
#line 542 "equiv_type.m"
        parse_tree__equiv_type__succeeded = mdbcomp__sym_name____Unify____sym_name_0_0(parse_tree__equiv_type__ContainingModuleName_26, parse_tree__equiv_type__ModuleName_12);
      }
#line 546 "equiv_type.m"
    if (parse_tree__equiv_type__succeeded)
#line 545 "equiv_type.m"
      parse_tree__equiv_type__UsedTypeCtors0_29 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 546 "equiv_type.m"
    else
#line 547 "equiv_type.m"
      {
#line 547 "equiv_type.m"
        MR_Word parse_tree__equiv_type__V_44_44;
#line 547 "equiv_type.m"
        MR_Word parse_tree__equiv_type__V_45_45;

#line 547 "equiv_type.m"
        {
#line 547 "equiv_type.m"
          parse_tree__equiv_type__V_45_45 = mercury__set__init_0_f_0((MR_Word) &recompilation__recompilation__type_ctor_info_item_id_0);
        }
#line 547 "equiv_type.m"
        {
#line 547 "equiv_type.m"
          parse_tree__equiv_type__V_44_44 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 547 "equiv_type.m"
          MR_hl_field(MR_mktag(0), parse_tree__equiv_type__V_44_44, 0) = ((MR_Box) (parse_tree__equiv_type__ModuleName_12));
#line 547 "equiv_type.m"
          MR_hl_field(MR_mktag(0), parse_tree__equiv_type__V_44_44, 1) = ((MR_Box) (parse_tree__equiv_type__V_45_45));
#line 547 "equiv_type.m"
        }
#line 547 "equiv_type.m"
        {
#line 547 "equiv_type.m"
          parse_tree__equiv_type__UsedTypeCtors0_29 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 547 "equiv_type.m"
          MR_hl_field(MR_mktag(1), parse_tree__equiv_type__UsedTypeCtors0_29, 0) = ((MR_Box) (parse_tree__equiv_type__V_44_44));
#line 547 "equiv_type.m"
        }
#line 547 "equiv_type.m"
      }
#line 849 "equiv_type.m"
    {
#line 849 "equiv_type.m"
      parse_tree__equiv_type__V_68_68 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
#line 849 "equiv_type.m"
      MR_hl_field(MR_mktag(0), parse_tree__equiv_type__V_68_68, 0) = ((MR_Box) (&parse_tree__equiv_type_scalar_common_3[0]));
#line 849 "equiv_type.m"
      MR_hl_field(MR_mktag(0), parse_tree__equiv_type__V_68_68, 1) = ((MR_Box) (parse_tree__equiv_type__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_114_101_112_108_97_99_101_95_105_110_95_105_110_115_116_97_110_99_101_95_105_110_102_111_95_95_91_52_93_95_48_11_p_0_1));
#line 849 "equiv_type.m"
      MR_hl_field(MR_mktag(0), parse_tree__equiv_type__V_68_68, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
#line 849 "equiv_type.m"
      MR_hl_field(MR_mktag(0), parse_tree__equiv_type__V_68_68, 3) = ((MR_Box) (parse_tree__equiv_type__MaybeRecord_13));
#line 849 "equiv_type.m"
      MR_hl_field(MR_mktag(0), parse_tree__equiv_type__V_68_68, 4) = ((MR_Box) (parse_tree__equiv_type__TypeEqvMap_14));
#line 849 "equiv_type.m"
    }
#line 4985 "parse_tree.equiv_type.c"
    parse_tree__equiv_type__TypeCtorInfo_38_81 = (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_constraint_0;
#line 848 "equiv_type.m"
    {
#line 848 "equiv_type.m"
      mercury__list__map_foldl3_9_p_1(parse_tree__equiv_type__TypeCtorInfo_38_81, parse_tree__equiv_type__TypeCtorInfo_38_81, (MR_Word) &parse_tree__equiv_type_scalar_common_1[6], (MR_Word) &parse_tree__equiv_type_scalar_common_1[7], (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_used_modules_0, parse_tree__equiv_type__V_68_68, parse_tree__equiv_type__Constraints0_23, &parse_tree__equiv_type__Constraints_30, ((MR_Box) (parse_tree__equiv_type__VarSet0_25)), &parse_tree__equiv_type__conv6_VarSet1_31, ((MR_Box) (parse_tree__equiv_type__UsedTypeCtors0_29)), &parse_tree__equiv_type__conv5_UsedTypeCtors1_32, ((MR_Box) (parse_tree__equiv_type__STATE_VARIABLE_UsedModules_0_42)), &parse_tree__equiv_type__conv4_STATE_VARIABLE_UsedModules_46_46);
    }
#line 848 "equiv_type.m"
    parse_tree__equiv_type__VarSet1_31 = ((MR_Word) parse_tree__equiv_type__conv6_VarSet1_31);
#line 848 "equiv_type.m"
    parse_tree__equiv_type__UsedTypeCtors1_32 = ((MR_Word) parse_tree__equiv_type__conv5_UsedTypeCtors1_32);
#line 848 "equiv_type.m"
    parse_tree__equiv_type__STATE_VARIABLE_UsedModules_46_46 = ((MR_Word) parse_tree__equiv_type__conv4_STATE_VARIABLE_UsedModules_46_46);
#line 552 "equiv_type.m"
    {
#line 552 "equiv_type.m"
      parse_tree__equiv_type__replace_in_type_list_location_circ_12_p_0(parse_tree__equiv_type__MaybeRecord_13, parse_tree__equiv_type__TypeEqvMap_14, parse_tree__equiv_type__Types0_21, &parse_tree__equiv_type__Types_33, &parse_tree__equiv_type__V_34_34, &parse_tree__equiv_type__V_35_35, parse_tree__equiv_type__VarSet1_31, &parse_tree__equiv_type__VarSet_36, parse_tree__equiv_type__UsedTypeCtors1_32, &parse_tree__equiv_type__UsedTypeCtors_37, parse_tree__equiv_type__STATE_VARIABLE_UsedModules_46_46, parse_tree__equiv_type__STATE_VARIABLE_UsedModules_43);
    }
#line 556 "equiv_type.m"
    {
#line 556 "equiv_type.m"
      mercury__list__length_2_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0, parse_tree__equiv_type__Types0_21, &parse_tree__equiv_type__Arity_38);
    }
#line 557 "equiv_type.m"
    {
#line 557 "equiv_type.m"
      parse_tree__equiv_type__V_49_49 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 557 "equiv_type.m"
      MR_hl_field(MR_mktag(0), parse_tree__equiv_type__V_49_49, 0) = ((MR_Box) (parse_tree__equiv_type__ClassName_20));
#line 557 "equiv_type.m"
      MR_hl_field(MR_mktag(0), parse_tree__equiv_type__V_49_49, 1) = ((MR_Box) (parse_tree__equiv_type__Arity_38));
#line 557 "equiv_type.m"
    }
#line 557 "equiv_type.m"
    {
#line 557 "equiv_type.m"
      parse_tree__equiv_type__ItemId_39 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 557 "equiv_type.m"
      MR_hl_field(MR_mktag(0), parse_tree__equiv_type__ItemId_39, 0) = ((MR_Box) ((MR_Integer) 4));
#line 557 "equiv_type.m"
      MR_hl_field(MR_mktag(0), parse_tree__equiv_type__ItemId_39, 1) = ((MR_Box) (parse_tree__equiv_type__V_49_49));
#line 557 "equiv_type.m"
    }
#line 558 "equiv_type.m"
    {
#line 558 "equiv_type.m"
      recompilation__finish_recording_expanded_items_4_p_0(parse_tree__equiv_type__ItemId_39, parse_tree__equiv_type__UsedTypeCtors_37, parse_tree__equiv_type__STATE_VARIABLE_RecompInfo_0_40, parse_tree__equiv_type__STATE_VARIABLE_RecompInfo_41);
    }
#line 559 "equiv_type.m"
    {
#line 559 "equiv_type.m"
      MR_Word base;
#line 559 "equiv_type.m"
      base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 9 * sizeof(MR_Word)), NULL, NULL);
#line 559 "equiv_type.m"
      *parse_tree__equiv_type__InstanceInfo_17 = base;
#line 559 "equiv_type.m"
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (parse_tree__equiv_type__ClassName_20));
#line 559 "equiv_type.m"
      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (parse_tree__equiv_type__Types_33));
#line 559 "equiv_type.m"
      MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (parse_tree__equiv_type__OriginalTypes_22));
#line 559 "equiv_type.m"
      MR_hl_field(MR_mktag(0), base, 3) = ((MR_Box) (parse_tree__equiv_type__Constraints_30));
#line 559 "equiv_type.m"
      MR_hl_field(MR_mktag(0), base, 4) = ((MR_Box) (parse_tree__equiv_type__InstanceBody_24));
#line 559 "equiv_type.m"
      MR_hl_field(MR_mktag(0), base, 5) = ((MR_Box) (parse_tree__equiv_type__VarSet_36));
#line 559 "equiv_type.m"
      MR_hl_field(MR_mktag(0), base, 6) = ((MR_Box) (parse_tree__equiv_type__ContainingModuleName_26));
#line 559 "equiv_type.m"
      MR_hl_field(MR_mktag(0), base, 7) = ((MR_Box) (parse_tree__equiv_type__Context_27));
#line 559 "equiv_type.m"
      MR_hl_field(MR_mktag(0), base, 8) = ((MR_Box) (parse_tree__equiv_type__SeqNum_28));
#line 559 "equiv_type.m"
    }
#line 536 "equiv_type.m"
  }
#line 529 "equiv_type.m"
}

#line 459 "equiv_type.m"
static void MR_CALL 
parse_tree__equiv_type__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_114_101_112_108_97_99_101_95_105_110_95_109_111_100_101_95_100_101_99_108_95_105_110_102_111_95_95_91_50_44_32_51_93_95_48_11_p_0(
#line 459 "equiv_type.m"
  MR_Word parse_tree__equiv_type__ModuleName_12,
#line 459 "equiv_type.m"
  MR_Word parse_tree__equiv_type__InstEqvMap_15,
#line 459 "equiv_type.m"
  MR_Word parse_tree__equiv_type__Info0_16,
#line 459 "equiv_type.m"
  MR_Word * parse_tree__equiv_type__Info_17,
#line 459 "equiv_type.m"
  MR_Word parse_tree__equiv_type__STATE_VARIABLE_RecompInfo_0_43,
#line 459 "equiv_type.m"
  MR_Word * parse_tree__equiv_type__STATE_VARIABLE_RecompInfo_44,
#line 459 "equiv_type.m"
  MR_Word parse_tree__equiv_type__STATE_VARIABLE_UsedModules_0_45,
#line 459 "equiv_type.m"
  MR_Word * parse_tree__equiv_type__STATE_VARIABLE_UsedModules_46,
#line 459 "equiv_type.m"
  MR_Word * parse_tree__equiv_type__Specs_20)
#line 459 "equiv_type.m"
{
#line 466 "equiv_type.m"
  {
#line 466 "equiv_type.m"
    MR_bool parse_tree__equiv_type__succeeded;
#line 466 "equiv_type.m"
    MR_Word parse_tree__equiv_type__TypeCtorInfo_52_52;
#line 466 "equiv_type.m"
    MR_Word parse_tree__equiv_type__PredName_21 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__equiv_type__Info0_16, (MR_Integer) 0)));
#line 466 "equiv_type.m"
    MR_Word parse_tree__equiv_type__MaybePredOrFunc0_22 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__equiv_type__Info0_16, (MR_Integer) 1)));
#line 466 "equiv_type.m"
    MR_Word parse_tree__equiv_type__Modes0_23 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__equiv_type__Info0_16, (MR_Integer) 2)));
#line 466 "equiv_type.m"
    MR_Word parse_tree__equiv_type__WithInst0_24 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__equiv_type__Info0_16, (MR_Integer) 3)));
#line 466 "equiv_type.m"
    MR_Word parse_tree__equiv_type__MaybeDetism0_25 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__equiv_type__Info0_16, (MR_Integer) 4)));
#line 466 "equiv_type.m"
    MR_Word parse_tree__equiv_type__InstVarSet_26 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__equiv_type__Info0_16, (MR_Integer) 5)));
#line 466 "equiv_type.m"
    MR_Word parse_tree__equiv_type__Context_27 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__equiv_type__Info0_16, (MR_Integer) 6)));
#line 466 "equiv_type.m"
    MR_Integer parse_tree__equiv_type__SeqNum_28 = ((MR_Integer) (MR_hl_field(MR_mktag(0), parse_tree__equiv_type__Info0_16, (MR_Integer) 7)));
#line 466 "equiv_type.m"
    MR_Word parse_tree__equiv_type__ExpandedItems0_29;
#line 466 "equiv_type.m"
    MR_Word parse_tree__equiv_type__ExtraModes_30;
#line 466 "equiv_type.m"
    MR_Word parse_tree__equiv_type__MaybePredOrFunc_31;
#line 466 "equiv_type.m"
    MR_Word parse_tree__equiv_type__WithInst_32;
#line 466 "equiv_type.m"
    MR_Word parse_tree__equiv_type__MaybeDetism_33;
#line 466 "equiv_type.m"
    MR_Word parse_tree__equiv_type__ExpandedItems_34;
#line 466 "equiv_type.m"
    MR_Word parse_tree__equiv_type__Modes_35;
#line 466 "equiv_type.m"
    MR_Integer parse_tree__equiv_type__V_47_47;

#line 469 "equiv_type.m"
    {
#line 469 "equiv_type.m"
      recompilation__maybe_start_recording_expanded_items_4_p_0(parse_tree__equiv_type__ModuleName_12, parse_tree__equiv_type__PredName_21, parse_tree__equiv_type__STATE_VARIABLE_RecompInfo_0_43, &parse_tree__equiv_type__ExpandedItems0_29);
    }
#line 5133 "parse_tree.equiv_type.c"
    parse_tree__equiv_type__TypeCtorInfo_52_52 = (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_mode_0;
#line 472 "equiv_type.m"
    {
#line 472 "equiv_type.m"
      parse_tree__equiv_type__V_47_47 = mercury__list__length_1_f_0(parse_tree__equiv_type__TypeCtorInfo_52_52, parse_tree__equiv_type__Modes0_23);
    }
#line 471 "equiv_type.m"
    {
#line 471 "equiv_type.m"
      parse_tree__equiv_type__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_114_101_112_108_97_99_101_95_105_110_95_112_114_101_100_95_109_111_100_101_95_95_91_49_93_95_48_18_p_0(parse_tree__equiv_type__InstEqvMap_15, parse_tree__equiv_type__PredName_21, parse_tree__equiv_type__V_47_47, parse_tree__equiv_type__Context_27, (MR_Integer) 1, &parse_tree__equiv_type__ExtraModes_30, parse_tree__equiv_type__MaybePredOrFunc0_22, &parse_tree__equiv_type__MaybePredOrFunc_31, parse_tree__equiv_type__WithInst0_24, &parse_tree__equiv_type__WithInst_32, parse_tree__equiv_type__MaybeDetism0_25, &parse_tree__equiv_type__MaybeDetism_33, parse_tree__equiv_type__ExpandedItems0_29, &parse_tree__equiv_type__ExpandedItems_34, parse_tree__equiv_type__STATE_VARIABLE_UsedModules_0_45, parse_tree__equiv_type__STATE_VARIABLE_UsedModules_46, parse_tree__equiv_type__Specs_20);
    }
#line 479 "equiv_type.m"
    if ((parse_tree__equiv_type__ExtraModes_30 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 478 "equiv_type.m"
      parse_tree__equiv_type__Modes_35 = parse_tree__equiv_type__Modes0_23;
#line 479 "equiv_type.m"
    else
#line 481 "equiv_type.m"
      {
#line 481 "equiv_type.m"
        parse_tree__equiv_type__Modes_35 = mercury__list__f_43_43_2_f_0(parse_tree__equiv_type__TypeCtorInfo_52_52, parse_tree__equiv_type__Modes0_23, parse_tree__equiv_type__ExtraModes_30);
      }
#line 490 "equiv_type.m"
    if ((parse_tree__equiv_type__MaybePredOrFunc_31 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 491 "equiv_type.m"
      *parse_tree__equiv_type__STATE_VARIABLE_RecompInfo_44 = parse_tree__equiv_type__STATE_VARIABLE_RecompInfo_0_43;
#line 490 "equiv_type.m"
    else
#line 484 "equiv_type.m"
      {
#line 484 "equiv_type.m"
        MR_Word parse_tree__equiv_type__PredOrFunc_38 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__equiv_type__MaybePredOrFunc_31, (MR_Integer) 0)));
#line 484 "equiv_type.m"
        MR_Word parse_tree__equiv_type__ItemType_39;
#line 484 "equiv_type.m"
        MR_Integer parse_tree__equiv_type__Arity_40;
#line 484 "equiv_type.m"
        MR_Integer parse_tree__equiv_type__OrigArity_41;
#line 484 "equiv_type.m"
        MR_Word parse_tree__equiv_type__ItemId_42;
#line 484 "equiv_type.m"
        MR_Word parse_tree__equiv_type__V_50_50;

#line 485 "equiv_type.m"
        {
#line 485 "equiv_type.m"
          parse_tree__equiv_type__ItemType_39 = recompilation__pred_or_func_to_item_type_1_f_0(parse_tree__equiv_type__PredOrFunc_38);
        }
#line 486 "equiv_type.m"
        {
#line 486 "equiv_type.m"
          mercury__list__length_2_p_0(parse_tree__equiv_type__TypeCtorInfo_52_52, parse_tree__equiv_type__Modes_35, &parse_tree__equiv_type__Arity_40);
        }
#line 487 "equiv_type.m"
        {
#line 487 "equiv_type.m"
          parse_tree__prog_util__adjust_func_arity_3_p_1(parse_tree__equiv_type__PredOrFunc_38, &parse_tree__equiv_type__OrigArity_41, parse_tree__equiv_type__Arity_40);
        }
#line 488 "equiv_type.m"
        {
#line 488 "equiv_type.m"
          parse_tree__equiv_type__V_50_50 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 488 "equiv_type.m"
          MR_hl_field(MR_mktag(0), parse_tree__equiv_type__V_50_50, 0) = ((MR_Box) (parse_tree__equiv_type__PredName_21));
#line 488 "equiv_type.m"
          MR_hl_field(MR_mktag(0), parse_tree__equiv_type__V_50_50, 1) = ((MR_Box) (parse_tree__equiv_type__OrigArity_41));
#line 488 "equiv_type.m"
        }
#line 488 "equiv_type.m"
        {
#line 488 "equiv_type.m"
          parse_tree__equiv_type__ItemId_42 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 488 "equiv_type.m"
          MR_hl_field(MR_mktag(0), parse_tree__equiv_type__ItemId_42, 0) = ((MR_Box) (parse_tree__equiv_type__ItemType_39));
#line 488 "equiv_type.m"
          MR_hl_field(MR_mktag(0), parse_tree__equiv_type__ItemId_42, 1) = ((MR_Box) (parse_tree__equiv_type__V_50_50));
#line 488 "equiv_type.m"
        }
#line 489 "equiv_type.m"
        {
#line 489 "equiv_type.m"
          recompilation__finish_recording_expanded_items_4_p_0(parse_tree__equiv_type__ItemId_42, parse_tree__equiv_type__ExpandedItems_34, parse_tree__equiv_type__STATE_VARIABLE_RecompInfo_0_43, parse_tree__equiv_type__STATE_VARIABLE_RecompInfo_44);
        }
#line 484 "equiv_type.m"
      }
#line 493 "equiv_type.m"
    {
#line 493 "equiv_type.m"
      MR_Word base;
#line 493 "equiv_type.m"
      base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 8 * sizeof(MR_Word)), NULL, NULL);
#line 493 "equiv_type.m"
      *parse_tree__equiv_type__Info_17 = base;
#line 493 "equiv_type.m"
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (parse_tree__equiv_type__PredName_21));
#line 493 "equiv_type.m"
      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (parse_tree__equiv_type__MaybePredOrFunc_31));
#line 493 "equiv_type.m"
      MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (parse_tree__equiv_type__Modes_35));
#line 493 "equiv_type.m"
      MR_hl_field(MR_mktag(0), base, 3) = ((MR_Box) (parse_tree__equiv_type__WithInst_32));
#line 493 "equiv_type.m"
      MR_hl_field(MR_mktag(0), base, 4) = ((MR_Box) (parse_tree__equiv_type__MaybeDetism_33));
#line 493 "equiv_type.m"
      MR_hl_field(MR_mktag(0), base, 5) = ((MR_Box) (parse_tree__equiv_type__InstVarSet_26));
#line 493 "equiv_type.m"
      MR_hl_field(MR_mktag(0), base, 6) = ((MR_Box) (parse_tree__equiv_type__Context_27));
#line 493 "equiv_type.m"
      MR_hl_field(MR_mktag(0), base, 7) = ((MR_Box) (parse_tree__equiv_type__SeqNum_28));
#line 493 "equiv_type.m"
    }
#line 466 "equiv_type.m"
  }
#line 459 "equiv_type.m"
}

#line 195 "equiv_type.m"
static void MR_CALL 
parse_tree__equiv_type__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_98_117_105_108_100_95_101_113_118_95_109_97_112_115_95_105_110_95_105_116_101_109_95_98_108_111_99_107_115_95_95_91_49_93_95_48_5_p_0(
#line 195 "equiv_type.m"
  MR_Word parse_tree__equiv_type__HeadVar__1_1,
#line 195 "equiv_type.m"
  MR_Word parse_tree__equiv_type__STATE_VARIABLE_TypeEqvMap_0_2,
#line 195 "equiv_type.m"
  MR_Word * parse_tree__equiv_type__STATE_VARIABLE_TypeEqvMap_3,
#line 195 "equiv_type.m"
  MR_Word parse_tree__equiv_type__STATE_VARIABLE_InstEqvMap_0_4,
#line 195 "equiv_type.m"
  MR_Word * parse_tree__equiv_type__STATE_VARIABLE_InstEqvMap_5)
#line 195 "equiv_type.m"
{
#line 199 "equiv_type.m"
  while (MR_TRUE)
#line 199 "equiv_type.m"
    {
#line 199 "equiv_type.m"
      /* tailcall optimized into a loop */
#line 199 "equiv_type.m"
      {
#line 199 "equiv_type.m"
        MR_bool parse_tree__equiv_type__succeeded;

#line 199 "equiv_type.m"
        if ((parse_tree__equiv_type__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 199 "equiv_type.m"
          {
#line 199 "equiv_type.m"
            *parse_tree__equiv_type__STATE_VARIABLE_InstEqvMap_5 = parse_tree__equiv_type__STATE_VARIABLE_InstEqvMap_0_4;
#line 199 "equiv_type.m"
            *parse_tree__equiv_type__STATE_VARIABLE_TypeEqvMap_3 = parse_tree__equiv_type__STATE_VARIABLE_TypeEqvMap_0_2;
#line 199 "equiv_type.m"
          }
#line 199 "equiv_type.m"
        else
#line 201 "equiv_type.m"
          {
#line 201 "equiv_type.m"
            MR_Word parse_tree__equiv_type__ItemBlock_12 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__equiv_type__HeadVar__1_1, (MR_Integer) 0)));
#line 201 "equiv_type.m"
            MR_Word parse_tree__equiv_type__ItemBlocks_13 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__equiv_type__HeadVar__1_1, (MR_Integer) 1)));
#line 201 "equiv_type.m"
            MR_Word parse_tree__equiv_type__Items_20 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__equiv_type__ItemBlock_12, (MR_Integer) 4)));
#line 201 "equiv_type.m"
            MR_Word parse_tree__equiv_type__STATE_VARIABLE_TypeEqvMap_25_25;
#line 201 "equiv_type.m"
            MR_Word parse_tree__equiv_type__STATE_VARIABLE_InstEqvMap_26_26;
#line 202 "equiv_type.m"
            MR_Box parse_tree__equiv_type___Section_16 = (MR_hl_field(MR_mktag(0), parse_tree__equiv_type__ItemBlock_12, (MR_Integer) 0));
#line 202 "equiv_type.m"
            MR_Word parse_tree__equiv_type__V_17_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__equiv_type__ItemBlock_12, (MR_Integer) 1)));
#line 202 "equiv_type.m"
            MR_Word parse_tree__equiv_type__V_18_18 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__equiv_type__ItemBlock_12, (MR_Integer) 2)));
#line 202 "equiv_type.m"
            MR_Word parse_tree__equiv_type__V_19_19 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__equiv_type__ItemBlock_12, (MR_Integer) 3)));

#line 203 "equiv_type.m"
            {
#line 203 "equiv_type.m"
              parse_tree__equiv_type__build_eqv_maps_in_items_5_p_0(parse_tree__equiv_type__Items_20, parse_tree__equiv_type__STATE_VARIABLE_TypeEqvMap_0_2, &parse_tree__equiv_type__STATE_VARIABLE_TypeEqvMap_25_25, parse_tree__equiv_type__STATE_VARIABLE_InstEqvMap_0_4, &parse_tree__equiv_type__STATE_VARIABLE_InstEqvMap_26_26);
            }
#line 204 "equiv_type.m"
            /* direct tailcall eliminated */
#line 204 "equiv_type.m"
            {
#line 204 "equiv_type.m"
              MR_Word parse_tree__equiv_type__HeadVar__1__tmp_copy_1 = parse_tree__equiv_type__ItemBlocks_13;
#line 204 "equiv_type.m"
              MR_Word parse_tree__equiv_type__STATE_VARIABLE_TypeEqvMap_0__tmp_copy_2 = parse_tree__equiv_type__STATE_VARIABLE_TypeEqvMap_25_25;
#line 204 "equiv_type.m"
              MR_Word parse_tree__equiv_type__STATE_VARIABLE_InstEqvMap_0__tmp_copy_4 = parse_tree__equiv_type__STATE_VARIABLE_InstEqvMap_26_26;

#line 204 "equiv_type.m"
              parse_tree__equiv_type__STATE_VARIABLE_InstEqvMap_0_4 = parse_tree__equiv_type__STATE_VARIABLE_InstEqvMap_0__tmp_copy_4;
#line 204 "equiv_type.m"
              parse_tree__equiv_type__STATE_VARIABLE_TypeEqvMap_0_2 = parse_tree__equiv_type__STATE_VARIABLE_TypeEqvMap_0__tmp_copy_2;
#line 204 "equiv_type.m"
              parse_tree__equiv_type__HeadVar__1_1 = parse_tree__equiv_type__HeadVar__1__tmp_copy_1;
#line 204 "equiv_type.m"
            }
#line 204 "equiv_type.m"
            continue;
#line 201 "equiv_type.m"
          }
#line 199 "equiv_type.m"
      }
#line 199 "equiv_type.m"
      break;
#line 199 "equiv_type.m"
    }
#line 195 "equiv_type.m"
}

#line 276 "equiv_type.m"
static void MR_CALL 
parse_tree__equiv_type__replace_in_item_blocks__ho4_13_p_0(
#line 276 "equiv_type.m"
  MR_Word parse_tree__equiv_type__ModuleName_1,
#line 276 "equiv_type.m"
  MR_Word parse_tree__equiv_type__TypeEqvMap_2,
#line 276 "equiv_type.m"
  MR_Word parse_tree__equiv_type__InstEqvMap_3,
#line 276 "equiv_type.m"
  MR_Word parse_tree__equiv_type__HeadVar__5_5,
#line 276 "equiv_type.m"
  MR_Word parse_tree__equiv_type__STATE_VARIABLE_RevReplItemBlocks_0_6,
#line 276 "equiv_type.m"
  MR_Word * parse_tree__equiv_type__STATE_VARIABLE_RevReplItemBlocks_7,
#line 276 "equiv_type.m"
  MR_Word parse_tree__equiv_type__STATE_VARIABLE_RecompInfo_0_8,
#line 276 "equiv_type.m"
  MR_Word * parse_tree__equiv_type__STATE_VARIABLE_RecompInfo_9,
#line 276 "equiv_type.m"
  MR_Word parse_tree__equiv_type__STATE_VARIABLE_UsedModules_0_10,
#line 276 "equiv_type.m"
  MR_Word * parse_tree__equiv_type__STATE_VARIABLE_UsedModules_11,
#line 276 "equiv_type.m"
  MR_Word parse_tree__equiv_type__STATE_VARIABLE_Specs_0_12,
#line 276 "equiv_type.m"
  MR_Word * parse_tree__equiv_type__STATE_VARIABLE_Specs_13)
#line 276 "equiv_type.m"
{
#line 284 "equiv_type.m"
  while (MR_TRUE)
#line 284 "equiv_type.m"
    {
#line 284 "equiv_type.m"
      /* tailcall optimized into a loop */
#line 284 "equiv_type.m"
      {
#line 284 "equiv_type.m"
        MR_bool parse_tree__equiv_type__succeeded;

#line 284 "equiv_type.m"
        if ((parse_tree__equiv_type__HeadVar__5_5 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 284 "equiv_type.m"
          {
#line 285 "equiv_type.m"
            *parse_tree__equiv_type__STATE_VARIABLE_Specs_13 = parse_tree__equiv_type__STATE_VARIABLE_Specs_0_12;
#line 285 "equiv_type.m"
            *parse_tree__equiv_type__STATE_VARIABLE_UsedModules_11 = parse_tree__equiv_type__STATE_VARIABLE_UsedModules_0_10;
#line 285 "equiv_type.m"
            *parse_tree__equiv_type__STATE_VARIABLE_RecompInfo_9 = parse_tree__equiv_type__STATE_VARIABLE_RecompInfo_0_8;
#line 285 "equiv_type.m"
            *parse_tree__equiv_type__STATE_VARIABLE_RevReplItemBlocks_7 = parse_tree__equiv_type__STATE_VARIABLE_RevReplItemBlocks_0_6;
#line 284 "equiv_type.m"
          }
#line 284 "equiv_type.m"
        else
#line 288 "equiv_type.m"
          {
#line 288 "equiv_type.m"
            MR_Word parse_tree__equiv_type__ItemBlock0_34 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__equiv_type__HeadVar__5_5, (MR_Integer) 0)));
#line 288 "equiv_type.m"
            MR_Word parse_tree__equiv_type__ItemBlocks0_35 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__equiv_type__HeadVar__5_5, (MR_Integer) 1)));
#line 288 "equiv_type.m"
            MR_Word parse_tree__equiv_type__Section_40 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__equiv_type__ItemBlock0_34, (MR_Integer) 0)));
#line 288 "equiv_type.m"
            MR_Word parse_tree__equiv_type__SectionContext_41 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__equiv_type__ItemBlock0_34, (MR_Integer) 1)));
#line 288 "equiv_type.m"
            MR_Word parse_tree__equiv_type__Incls_42 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__equiv_type__ItemBlock0_34, (MR_Integer) 2)));
#line 288 "equiv_type.m"
            MR_Word parse_tree__equiv_type__Avails_43 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__equiv_type__ItemBlock0_34, (MR_Integer) 3)));
#line 288 "equiv_type.m"
            MR_Word parse_tree__equiv_type__Items0_44 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__equiv_type__ItemBlock0_34, (MR_Integer) 4)));
#line 288 "equiv_type.m"
            MR_Word parse_tree__equiv_type__MaybeRecord_45;
#line 288 "equiv_type.m"
            MR_Word parse_tree__equiv_type__RevReplItems_46;
#line 288 "equiv_type.m"
            MR_Word parse_tree__equiv_type__ReplItems_47;
#line 288 "equiv_type.m"
            MR_Word parse_tree__equiv_type__ReplItemBlock_48;
#line 288 "equiv_type.m"
            MR_Word parse_tree__equiv_type__STATE_VARIABLE_RecompInfo_58_58;
#line 288 "equiv_type.m"
            MR_Word parse_tree__equiv_type__STATE_VARIABLE_UsedModules_59_59;
#line 288 "equiv_type.m"
            MR_Word parse_tree__equiv_type__STATE_VARIABLE_Specs_60_60;
#line 288 "equiv_type.m"
            MR_Word parse_tree__equiv_type__STATE_VARIABLE_RevReplItemBlocks_61_61;

#line 258 "equiv_type.m"
#line 258 "equiv_type.m"
            switch (parse_tree__equiv_type__Section_40) {
#line 258 "equiv_type.m"
              default: /*NOTREACHED*/ MR_assert(0);
#line 258 "equiv_type.m"
              case (MR_Integer) 2:
#line 262 "equiv_type.m"
                {
#line 263 "equiv_type.m"
                  parse_tree__equiv_type__MaybeRecord_45 = (MR_Word) MR_mkword(MR_mktag(1), &parse_tree__equiv_type_scalar_common_7[0]);
#line 262 "equiv_type.m"
                }
#line 258 "equiv_type.m"
                break;
#line 258 "equiv_type.m"
              case (MR_Integer) 1:
#line 260 "equiv_type.m"
                {
#line 261 "equiv_type.m"
                  parse_tree__equiv_type__MaybeRecord_45 = (MR_Word) MR_mkword(MR_mktag(1), &parse_tree__equiv_type_scalar_common_7[0]);
#line 260 "equiv_type.m"
                }
#line 258 "equiv_type.m"
                break;
#line 258 "equiv_type.m"
              case (MR_Integer) 0:
#line 258 "equiv_type.m"
                {
#line 259 "equiv_type.m"
                  parse_tree__equiv_type__MaybeRecord_45 = (MR_Word) MR_mkword(MR_mktag(1), &parse_tree__equiv_type_scalar_common_7[1]);
#line 258 "equiv_type.m"
                }
#line 258 "equiv_type.m"
                break;
#line 258 "equiv_type.m"
            }
#line 291 "equiv_type.m"
            {
#line 291 "equiv_type.m"
              parse_tree__equiv_type__replace_in_items_13_p_0(parse_tree__equiv_type__ModuleName_1, parse_tree__equiv_type__TypeEqvMap_2, parse_tree__equiv_type__InstEqvMap_3, parse_tree__equiv_type__MaybeRecord_45, parse_tree__equiv_type__Items0_44, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), &parse_tree__equiv_type__RevReplItems_46, parse_tree__equiv_type__STATE_VARIABLE_RecompInfo_0_8, &parse_tree__equiv_type__STATE_VARIABLE_RecompInfo_58_58, parse_tree__equiv_type__STATE_VARIABLE_UsedModules_0_10, &parse_tree__equiv_type__STATE_VARIABLE_UsedModules_59_59, parse_tree__equiv_type__STATE_VARIABLE_Specs_0_12, &parse_tree__equiv_type__STATE_VARIABLE_Specs_60_60);
            }
#line 293 "equiv_type.m"
            {
#line 293 "equiv_type.m"
              mercury__list__reverse_2_p_0((MR_Word) &parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_0, parse_tree__equiv_type__RevReplItems_46, &parse_tree__equiv_type__ReplItems_47);
            }
#line 294 "equiv_type.m"
            {
#line 294 "equiv_type.m"
              parse_tree__equiv_type__ReplItemBlock_48 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
#line 294 "equiv_type.m"
              MR_hl_field(MR_mktag(0), parse_tree__equiv_type__ReplItemBlock_48, 0) = ((MR_Box) (parse_tree__equiv_type__Section_40));
#line 294 "equiv_type.m"
              MR_hl_field(MR_mktag(0), parse_tree__equiv_type__ReplItemBlock_48, 1) = ((MR_Box) (parse_tree__equiv_type__SectionContext_41));
#line 294 "equiv_type.m"
              MR_hl_field(MR_mktag(0), parse_tree__equiv_type__ReplItemBlock_48, 2) = ((MR_Box) (parse_tree__equiv_type__Incls_42));
#line 294 "equiv_type.m"
              MR_hl_field(MR_mktag(0), parse_tree__equiv_type__ReplItemBlock_48, 3) = ((MR_Box) (parse_tree__equiv_type__Avails_43));
#line 294 "equiv_type.m"
              MR_hl_field(MR_mktag(0), parse_tree__equiv_type__ReplItemBlock_48, 4) = ((MR_Box) (parse_tree__equiv_type__ReplItems_47));
#line 294 "equiv_type.m"
            }
#line 296 "equiv_type.m"
            {
#line 296 "equiv_type.m"
              parse_tree__equiv_type__STATE_VARIABLE_RevReplItemBlocks_61_61 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 296 "equiv_type.m"
              MR_hl_field(MR_mktag(1), parse_tree__equiv_type__STATE_VARIABLE_RevReplItemBlocks_61_61, 0) = ((MR_Box) (parse_tree__equiv_type__ReplItemBlock_48));
#line 296 "equiv_type.m"
              MR_hl_field(MR_mktag(1), parse_tree__equiv_type__STATE_VARIABLE_RevReplItemBlocks_61_61, 1) = ((MR_Box) (parse_tree__equiv_type__STATE_VARIABLE_RevReplItemBlocks_0_6));
#line 296 "equiv_type.m"
            }
#line 297 "equiv_type.m"
            /* direct tailcall eliminated */
#line 297 "equiv_type.m"
            {
#line 297 "equiv_type.m"
              MR_Word parse_tree__equiv_type__HeadVar__5__tmp_copy_5 = parse_tree__equiv_type__ItemBlocks0_35;
#line 297 "equiv_type.m"
              MR_Word parse_tree__equiv_type__STATE_VARIABLE_RevReplItemBlocks_0__tmp_copy_6 = parse_tree__equiv_type__STATE_VARIABLE_RevReplItemBlocks_61_61;
#line 297 "equiv_type.m"
              MR_Word parse_tree__equiv_type__STATE_VARIABLE_RecompInfo_0__tmp_copy_8 = parse_tree__equiv_type__STATE_VARIABLE_RecompInfo_58_58;
#line 297 "equiv_type.m"
              MR_Word parse_tree__equiv_type__STATE_VARIABLE_UsedModules_0__tmp_copy_10 = parse_tree__equiv_type__STATE_VARIABLE_UsedModules_59_59;
#line 297 "equiv_type.m"
              MR_Word parse_tree__equiv_type__STATE_VARIABLE_Specs_0__tmp_copy_12 = parse_tree__equiv_type__STATE_VARIABLE_Specs_60_60;

#line 297 "equiv_type.m"
              parse_tree__equiv_type__STATE_VARIABLE_Specs_0_12 = parse_tree__equiv_type__STATE_VARIABLE_Specs_0__tmp_copy_12;
#line 297 "equiv_type.m"
              parse_tree__equiv_type__STATE_VARIABLE_UsedModules_0_10 = parse_tree__equiv_type__STATE_VARIABLE_UsedModules_0__tmp_copy_10;
#line 297 "equiv_type.m"
              parse_tree__equiv_type__STATE_VARIABLE_RecompInfo_0_8 = parse_tree__equiv_type__STATE_VARIABLE_RecompInfo_0__tmp_copy_8;
#line 297 "equiv_type.m"
              parse_tree__equiv_type__STATE_VARIABLE_RevReplItemBlocks_0_6 = parse_tree__equiv_type__STATE_VARIABLE_RevReplItemBlocks_0__tmp_copy_6;
#line 297 "equiv_type.m"
              parse_tree__equiv_type__HeadVar__5_5 = parse_tree__equiv_type__HeadVar__5__tmp_copy_5;
#line 297 "equiv_type.m"
            }
#line 297 "equiv_type.m"
            continue;
#line 288 "equiv_type.m"
          }
#line 284 "equiv_type.m"
      }
#line 284 "equiv_type.m"
      break;
#line 284 "equiv_type.m"
    }
#line 276 "equiv_type.m"
}

#line 276 "equiv_type.m"
static void MR_CALL 
parse_tree__equiv_type__replace_in_item_blocks__ho3_13_p_0(
#line 276 "equiv_type.m"
  MR_Word parse_tree__equiv_type__ModuleName_1,
#line 276 "equiv_type.m"
  MR_Word parse_tree__equiv_type__TypeEqvMap_2,
#line 276 "equiv_type.m"
  MR_Word parse_tree__equiv_type__InstEqvMap_3,
#line 276 "equiv_type.m"
  MR_Word parse_tree__equiv_type__HeadVar__5_5,
#line 276 "equiv_type.m"
  MR_Word parse_tree__equiv_type__STATE_VARIABLE_RevReplItemBlocks_0_6,
#line 276 "equiv_type.m"
  MR_Word * parse_tree__equiv_type__STATE_VARIABLE_RevReplItemBlocks_7,
#line 276 "equiv_type.m"
  MR_Word parse_tree__equiv_type__STATE_VARIABLE_RecompInfo_0_8,
#line 276 "equiv_type.m"
  MR_Word * parse_tree__equiv_type__STATE_VARIABLE_RecompInfo_9,
#line 276 "equiv_type.m"
  MR_Word parse_tree__equiv_type__STATE_VARIABLE_UsedModules_0_10,
#line 276 "equiv_type.m"
  MR_Word * parse_tree__equiv_type__STATE_VARIABLE_UsedModules_11,
#line 276 "equiv_type.m"
  MR_Word parse_tree__equiv_type__STATE_VARIABLE_Specs_0_12,
#line 276 "equiv_type.m"
  MR_Word * parse_tree__equiv_type__STATE_VARIABLE_Specs_13)
#line 276 "equiv_type.m"
{
#line 284 "equiv_type.m"
  while (MR_TRUE)
#line 284 "equiv_type.m"
    {
#line 284 "equiv_type.m"
      /* tailcall optimized into a loop */
#line 284 "equiv_type.m"
      {
#line 284 "equiv_type.m"
        MR_bool parse_tree__equiv_type__succeeded;

#line 284 "equiv_type.m"
        if ((parse_tree__equiv_type__HeadVar__5_5 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 284 "equiv_type.m"
          {
#line 285 "equiv_type.m"
            *parse_tree__equiv_type__STATE_VARIABLE_Specs_13 = parse_tree__equiv_type__STATE_VARIABLE_Specs_0_12;
#line 285 "equiv_type.m"
            *parse_tree__equiv_type__STATE_VARIABLE_UsedModules_11 = parse_tree__equiv_type__STATE_VARIABLE_UsedModules_0_10;
#line 285 "equiv_type.m"
            *parse_tree__equiv_type__STATE_VARIABLE_RecompInfo_9 = parse_tree__equiv_type__STATE_VARIABLE_RecompInfo_0_8;
#line 285 "equiv_type.m"
            *parse_tree__equiv_type__STATE_VARIABLE_RevReplItemBlocks_7 = parse_tree__equiv_type__STATE_VARIABLE_RevReplItemBlocks_0_6;
#line 284 "equiv_type.m"
          }
#line 284 "equiv_type.m"
        else
#line 288 "equiv_type.m"
          {
#line 288 "equiv_type.m"
            MR_Word parse_tree__equiv_type__ItemBlock0_34 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__equiv_type__HeadVar__5_5, (MR_Integer) 0)));
#line 288 "equiv_type.m"
            MR_Word parse_tree__equiv_type__ItemBlocks0_35 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__equiv_type__HeadVar__5_5, (MR_Integer) 1)));
#line 288 "equiv_type.m"
            MR_Word parse_tree__equiv_type__Section_40 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__equiv_type__ItemBlock0_34, (MR_Integer) 0)));
#line 288 "equiv_type.m"
            MR_Word parse_tree__equiv_type__SectionContext_41 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__equiv_type__ItemBlock0_34, (MR_Integer) 1)));
#line 288 "equiv_type.m"
            MR_Word parse_tree__equiv_type__Incls_42 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__equiv_type__ItemBlock0_34, (MR_Integer) 2)));
#line 288 "equiv_type.m"
            MR_Word parse_tree__equiv_type__Avails_43 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__equiv_type__ItemBlock0_34, (MR_Integer) 3)));
#line 288 "equiv_type.m"
            MR_Word parse_tree__equiv_type__Items0_44 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__equiv_type__ItemBlock0_34, (MR_Integer) 4)));
#line 288 "equiv_type.m"
            MR_Word parse_tree__equiv_type__RevReplItems_46;
#line 288 "equiv_type.m"
            MR_Word parse_tree__equiv_type__ReplItems_47;
#line 288 "equiv_type.m"
            MR_Word parse_tree__equiv_type__ReplItemBlock_48;
#line 288 "equiv_type.m"
            MR_Word parse_tree__equiv_type__STATE_VARIABLE_RecompInfo_58_58;
#line 288 "equiv_type.m"
            MR_Word parse_tree__equiv_type__STATE_VARIABLE_UsedModules_59_59;
#line 288 "equiv_type.m"
            MR_Word parse_tree__equiv_type__STATE_VARIABLE_Specs_60_60;
#line 288 "equiv_type.m"
            MR_Word parse_tree__equiv_type__STATE_VARIABLE_RevReplItemBlocks_61_61;

#line 291 "equiv_type.m"
            {
#line 291 "equiv_type.m"
              parse_tree__equiv_type__replace_in_items_13_p_0(parse_tree__equiv_type__ModuleName_1, parse_tree__equiv_type__TypeEqvMap_2, parse_tree__equiv_type__InstEqvMap_3, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), parse_tree__equiv_type__Items0_44, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), &parse_tree__equiv_type__RevReplItems_46, parse_tree__equiv_type__STATE_VARIABLE_RecompInfo_0_8, &parse_tree__equiv_type__STATE_VARIABLE_RecompInfo_58_58, parse_tree__equiv_type__STATE_VARIABLE_UsedModules_0_10, &parse_tree__equiv_type__STATE_VARIABLE_UsedModules_59_59, parse_tree__equiv_type__STATE_VARIABLE_Specs_0_12, &parse_tree__equiv_type__STATE_VARIABLE_Specs_60_60);
            }
#line 293 "equiv_type.m"
            {
#line 293 "equiv_type.m"
              mercury__list__reverse_2_p_0((MR_Word) &parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_0, parse_tree__equiv_type__RevReplItems_46, &parse_tree__equiv_type__ReplItems_47);
            }
#line 294 "equiv_type.m"
            {
#line 294 "equiv_type.m"
              parse_tree__equiv_type__ReplItemBlock_48 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
#line 294 "equiv_type.m"
              MR_hl_field(MR_mktag(0), parse_tree__equiv_type__ReplItemBlock_48, 0) = ((MR_Box) (parse_tree__equiv_type__Section_40));
#line 294 "equiv_type.m"
              MR_hl_field(MR_mktag(0), parse_tree__equiv_type__ReplItemBlock_48, 1) = ((MR_Box) (parse_tree__equiv_type__SectionContext_41));
#line 294 "equiv_type.m"
              MR_hl_field(MR_mktag(0), parse_tree__equiv_type__ReplItemBlock_48, 2) = ((MR_Box) (parse_tree__equiv_type__Incls_42));
#line 294 "equiv_type.m"
              MR_hl_field(MR_mktag(0), parse_tree__equiv_type__ReplItemBlock_48, 3) = ((MR_Box) (parse_tree__equiv_type__Avails_43));
#line 294 "equiv_type.m"
              MR_hl_field(MR_mktag(0), parse_tree__equiv_type__ReplItemBlock_48, 4) = ((MR_Box) (parse_tree__equiv_type__ReplItems_47));
#line 294 "equiv_type.m"
            }
#line 296 "equiv_type.m"
            {
#line 296 "equiv_type.m"
              parse_tree__equiv_type__STATE_VARIABLE_RevReplItemBlocks_61_61 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 296 "equiv_type.m"
              MR_hl_field(MR_mktag(1), parse_tree__equiv_type__STATE_VARIABLE_RevReplItemBlocks_61_61, 0) = ((MR_Box) (parse_tree__equiv_type__ReplItemBlock_48));
#line 296 "equiv_type.m"
              MR_hl_field(MR_mktag(1), parse_tree__equiv_type__STATE_VARIABLE_RevReplItemBlocks_61_61, 1) = ((MR_Box) (parse_tree__equiv_type__STATE_VARIABLE_RevReplItemBlocks_0_6));
#line 296 "equiv_type.m"
            }
#line 297 "equiv_type.m"
            /* direct tailcall eliminated */
#line 297 "equiv_type.m"
            {
#line 297 "equiv_type.m"
              MR_Word parse_tree__equiv_type__HeadVar__5__tmp_copy_5 = parse_tree__equiv_type__ItemBlocks0_35;
#line 297 "equiv_type.m"
              MR_Word parse_tree__equiv_type__STATE_VARIABLE_RevReplItemBlocks_0__tmp_copy_6 = parse_tree__equiv_type__STATE_VARIABLE_RevReplItemBlocks_61_61;
#line 297 "equiv_type.m"
              MR_Word parse_tree__equiv_type__STATE_VARIABLE_RecompInfo_0__tmp_copy_8 = parse_tree__equiv_type__STATE_VARIABLE_RecompInfo_58_58;
#line 297 "equiv_type.m"
              MR_Word parse_tree__equiv_type__STATE_VARIABLE_UsedModules_0__tmp_copy_10 = parse_tree__equiv_type__STATE_VARIABLE_UsedModules_59_59;
#line 297 "equiv_type.m"
              MR_Word parse_tree__equiv_type__STATE_VARIABLE_Specs_0__tmp_copy_12 = parse_tree__equiv_type__STATE_VARIABLE_Specs_60_60;

#line 297 "equiv_type.m"
              parse_tree__equiv_type__STATE_VARIABLE_Specs_0_12 = parse_tree__equiv_type__STATE_VARIABLE_Specs_0__tmp_copy_12;
#line 297 "equiv_type.m"
              parse_tree__equiv_type__STATE_VARIABLE_UsedModules_0_10 = parse_tree__equiv_type__STATE_VARIABLE_UsedModules_0__tmp_copy_10;
#line 297 "equiv_type.m"
              parse_tree__equiv_type__STATE_VARIABLE_RecompInfo_0_8 = parse_tree__equiv_type__STATE_VARIABLE_RecompInfo_0__tmp_copy_8;
#line 297 "equiv_type.m"
              parse_tree__equiv_type__STATE_VARIABLE_RevReplItemBlocks_0_6 = parse_tree__equiv_type__STATE_VARIABLE_RevReplItemBlocks_0__tmp_copy_6;
#line 297 "equiv_type.m"
              parse_tree__equiv_type__HeadVar__5_5 = parse_tree__equiv_type__HeadVar__5__tmp_copy_5;
#line 297 "equiv_type.m"
            }
#line 297 "equiv_type.m"
            continue;
#line 288 "equiv_type.m"
          }
#line 284 "equiv_type.m"
      }
#line 284 "equiv_type.m"
      break;
#line 284 "equiv_type.m"
    }
#line 276 "equiv_type.m"
}

#line 276 "equiv_type.m"
static void MR_CALL 
parse_tree__equiv_type__replace_in_item_blocks__ho2_13_p_0(
#line 276 "equiv_type.m"
  MR_Word parse_tree__equiv_type__ModuleName_1,
#line 276 "equiv_type.m"
  MR_Word parse_tree__equiv_type__TypeEqvMap_2,
#line 276 "equiv_type.m"
  MR_Word parse_tree__equiv_type__InstEqvMap_3,
#line 276 "equiv_type.m"
  MR_Word parse_tree__equiv_type__HeadVar__5_5,
#line 276 "equiv_type.m"
  MR_Word parse_tree__equiv_type__STATE_VARIABLE_RevReplItemBlocks_0_6,
#line 276 "equiv_type.m"
  MR_Word * parse_tree__equiv_type__STATE_VARIABLE_RevReplItemBlocks_7,
#line 276 "equiv_type.m"
  MR_Word parse_tree__equiv_type__STATE_VARIABLE_RecompInfo_0_8,
#line 276 "equiv_type.m"
  MR_Word * parse_tree__equiv_type__STATE_VARIABLE_RecompInfo_9,
#line 276 "equiv_type.m"
  MR_Word parse_tree__equiv_type__STATE_VARIABLE_UsedModules_0_10,
#line 276 "equiv_type.m"
  MR_Word * parse_tree__equiv_type__STATE_VARIABLE_UsedModules_11,
#line 276 "equiv_type.m"
  MR_Word parse_tree__equiv_type__STATE_VARIABLE_Specs_0_12,
#line 276 "equiv_type.m"
  MR_Word * parse_tree__equiv_type__STATE_VARIABLE_Specs_13)
#line 276 "equiv_type.m"
{
#line 284 "equiv_type.m"
  while (MR_TRUE)
#line 284 "equiv_type.m"
    {
#line 284 "equiv_type.m"
      /* tailcall optimized into a loop */
#line 284 "equiv_type.m"
      {
#line 284 "equiv_type.m"
        MR_bool parse_tree__equiv_type__succeeded;

#line 284 "equiv_type.m"
        if ((parse_tree__equiv_type__HeadVar__5_5 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 284 "equiv_type.m"
          {
#line 285 "equiv_type.m"
            *parse_tree__equiv_type__STATE_VARIABLE_Specs_13 = parse_tree__equiv_type__STATE_VARIABLE_Specs_0_12;
#line 285 "equiv_type.m"
            *parse_tree__equiv_type__STATE_VARIABLE_UsedModules_11 = parse_tree__equiv_type__STATE_VARIABLE_UsedModules_0_10;
#line 285 "equiv_type.m"
            *parse_tree__equiv_type__STATE_VARIABLE_RecompInfo_9 = parse_tree__equiv_type__STATE_VARIABLE_RecompInfo_0_8;
#line 285 "equiv_type.m"
            *parse_tree__equiv_type__STATE_VARIABLE_RevReplItemBlocks_7 = parse_tree__equiv_type__STATE_VARIABLE_RevReplItemBlocks_0_6;
#line 284 "equiv_type.m"
          }
#line 284 "equiv_type.m"
        else
#line 288 "equiv_type.m"
          {
#line 288 "equiv_type.m"
            MR_Word parse_tree__equiv_type__ItemBlock0_34 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__equiv_type__HeadVar__5_5, (MR_Integer) 0)));
#line 288 "equiv_type.m"
            MR_Word parse_tree__equiv_type__ItemBlocks0_35 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__equiv_type__HeadVar__5_5, (MR_Integer) 1)));
#line 288 "equiv_type.m"
            MR_Word parse_tree__equiv_type__Section_40 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__equiv_type__ItemBlock0_34, (MR_Integer) 0)));
#line 288 "equiv_type.m"
            MR_Word parse_tree__equiv_type__SectionContext_41 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__equiv_type__ItemBlock0_34, (MR_Integer) 1)));
#line 288 "equiv_type.m"
            MR_Word parse_tree__equiv_type__Incls_42 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__equiv_type__ItemBlock0_34, (MR_Integer) 2)));
#line 288 "equiv_type.m"
            MR_Word parse_tree__equiv_type__Avails_43 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__equiv_type__ItemBlock0_34, (MR_Integer) 3)));
#line 288 "equiv_type.m"
            MR_Word parse_tree__equiv_type__Items0_44 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__equiv_type__ItemBlock0_34, (MR_Integer) 4)));
#line 288 "equiv_type.m"
            MR_Word parse_tree__equiv_type__RevReplItems_46;
#line 288 "equiv_type.m"
            MR_Word parse_tree__equiv_type__ReplItems_47;
#line 288 "equiv_type.m"
            MR_Word parse_tree__equiv_type__ReplItemBlock_48;
#line 288 "equiv_type.m"
            MR_Word parse_tree__equiv_type__STATE_VARIABLE_RecompInfo_58_58;
#line 288 "equiv_type.m"
            MR_Word parse_tree__equiv_type__STATE_VARIABLE_UsedModules_59_59;
#line 288 "equiv_type.m"
            MR_Word parse_tree__equiv_type__STATE_VARIABLE_Specs_60_60;
#line 288 "equiv_type.m"
            MR_Word parse_tree__equiv_type__STATE_VARIABLE_RevReplItemBlocks_61_61;

#line 291 "equiv_type.m"
            {
#line 291 "equiv_type.m"
              parse_tree__equiv_type__replace_in_items_13_p_0(parse_tree__equiv_type__ModuleName_1, parse_tree__equiv_type__TypeEqvMap_2, parse_tree__equiv_type__InstEqvMap_3, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), parse_tree__equiv_type__Items0_44, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), &parse_tree__equiv_type__RevReplItems_46, parse_tree__equiv_type__STATE_VARIABLE_RecompInfo_0_8, &parse_tree__equiv_type__STATE_VARIABLE_RecompInfo_58_58, parse_tree__equiv_type__STATE_VARIABLE_UsedModules_0_10, &parse_tree__equiv_type__STATE_VARIABLE_UsedModules_59_59, parse_tree__equiv_type__STATE_VARIABLE_Specs_0_12, &parse_tree__equiv_type__STATE_VARIABLE_Specs_60_60);
            }
#line 293 "equiv_type.m"
            {
#line 293 "equiv_type.m"
              mercury__list__reverse_2_p_0((MR_Word) &parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_0, parse_tree__equiv_type__RevReplItems_46, &parse_tree__equiv_type__ReplItems_47);
            }
#line 294 "equiv_type.m"
            {
#line 294 "equiv_type.m"
              parse_tree__equiv_type__ReplItemBlock_48 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
#line 294 "equiv_type.m"
              MR_hl_field(MR_mktag(0), parse_tree__equiv_type__ReplItemBlock_48, 0) = ((MR_Box) (parse_tree__equiv_type__Section_40));
#line 294 "equiv_type.m"
              MR_hl_field(MR_mktag(0), parse_tree__equiv_type__ReplItemBlock_48, 1) = ((MR_Box) (parse_tree__equiv_type__SectionContext_41));
#line 294 "equiv_type.m"
              MR_hl_field(MR_mktag(0), parse_tree__equiv_type__ReplItemBlock_48, 2) = ((MR_Box) (parse_tree__equiv_type__Incls_42));
#line 294 "equiv_type.m"
              MR_hl_field(MR_mktag(0), parse_tree__equiv_type__ReplItemBlock_48, 3) = ((MR_Box) (parse_tree__equiv_type__Avails_43));
#line 294 "equiv_type.m"
              MR_hl_field(MR_mktag(0), parse_tree__equiv_type__ReplItemBlock_48, 4) = ((MR_Box) (parse_tree__equiv_type__ReplItems_47));
#line 294 "equiv_type.m"
            }
#line 296 "equiv_type.m"
            {
#line 296 "equiv_type.m"
              parse_tree__equiv_type__STATE_VARIABLE_RevReplItemBlocks_61_61 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 296 "equiv_type.m"
              MR_hl_field(MR_mktag(1), parse_tree__equiv_type__STATE_VARIABLE_RevReplItemBlocks_61_61, 0) = ((MR_Box) (parse_tree__equiv_type__ReplItemBlock_48));
#line 296 "equiv_type.m"
              MR_hl_field(MR_mktag(1), parse_tree__equiv_type__STATE_VARIABLE_RevReplItemBlocks_61_61, 1) = ((MR_Box) (parse_tree__equiv_type__STATE_VARIABLE_RevReplItemBlocks_0_6));
#line 296 "equiv_type.m"
            }
#line 297 "equiv_type.m"
            /* direct tailcall eliminated */
#line 297 "equiv_type.m"
            {
#line 297 "equiv_type.m"
              MR_Word parse_tree__equiv_type__HeadVar__5__tmp_copy_5 = parse_tree__equiv_type__ItemBlocks0_35;
#line 297 "equiv_type.m"
              MR_Word parse_tree__equiv_type__STATE_VARIABLE_RevReplItemBlocks_0__tmp_copy_6 = parse_tree__equiv_type__STATE_VARIABLE_RevReplItemBlocks_61_61;
#line 297 "equiv_type.m"
              MR_Word parse_tree__equiv_type__STATE_VARIABLE_RecompInfo_0__tmp_copy_8 = parse_tree__equiv_type__STATE_VARIABLE_RecompInfo_58_58;
#line 297 "equiv_type.m"
              MR_Word parse_tree__equiv_type__STATE_VARIABLE_UsedModules_0__tmp_copy_10 = parse_tree__equiv_type__STATE_VARIABLE_UsedModules_59_59;
#line 297 "equiv_type.m"
              MR_Word parse_tree__equiv_type__STATE_VARIABLE_Specs_0__tmp_copy_12 = parse_tree__equiv_type__STATE_VARIABLE_Specs_60_60;

#line 297 "equiv_type.m"
              parse_tree__equiv_type__STATE_VARIABLE_Specs_0_12 = parse_tree__equiv_type__STATE_VARIABLE_Specs_0__tmp_copy_12;
#line 297 "equiv_type.m"
              parse_tree__equiv_type__STATE_VARIABLE_UsedModules_0_10 = parse_tree__equiv_type__STATE_VARIABLE_UsedModules_0__tmp_copy_10;
#line 297 "equiv_type.m"
              parse_tree__equiv_type__STATE_VARIABLE_RecompInfo_0_8 = parse_tree__equiv_type__STATE_VARIABLE_RecompInfo_0__tmp_copy_8;
#line 297 "equiv_type.m"
              parse_tree__equiv_type__STATE_VARIABLE_RevReplItemBlocks_0_6 = parse_tree__equiv_type__STATE_VARIABLE_RevReplItemBlocks_0__tmp_copy_6;
#line 297 "equiv_type.m"
              parse_tree__equiv_type__HeadVar__5_5 = parse_tree__equiv_type__HeadVar__5__tmp_copy_5;
#line 297 "equiv_type.m"
            }
#line 297 "equiv_type.m"
            continue;
#line 288 "equiv_type.m"
          }
#line 284 "equiv_type.m"
      }
#line 284 "equiv_type.m"
      break;
#line 284 "equiv_type.m"
    }
#line 276 "equiv_type.m"
}

#line 276 "equiv_type.m"
static void MR_CALL 
parse_tree__equiv_type__replace_in_item_blocks__ho1_13_p_0(
#line 276 "equiv_type.m"
  MR_Word parse_tree__equiv_type__ModuleName_1,
#line 276 "equiv_type.m"
  MR_Word parse_tree__equiv_type__TypeEqvMap_2,
#line 276 "equiv_type.m"
  MR_Word parse_tree__equiv_type__InstEqvMap_3,
#line 276 "equiv_type.m"
  MR_Word parse_tree__equiv_type__HeadVar__5_5,
#line 276 "equiv_type.m"
  MR_Word parse_tree__equiv_type__STATE_VARIABLE_RevReplItemBlocks_0_6,
#line 276 "equiv_type.m"
  MR_Word * parse_tree__equiv_type__STATE_VARIABLE_RevReplItemBlocks_7,
#line 276 "equiv_type.m"
  MR_Word parse_tree__equiv_type__STATE_VARIABLE_RecompInfo_0_8,
#line 276 "equiv_type.m"
  MR_Word * parse_tree__equiv_type__STATE_VARIABLE_RecompInfo_9,
#line 276 "equiv_type.m"
  MR_Word parse_tree__equiv_type__STATE_VARIABLE_UsedModules_0_10,
#line 276 "equiv_type.m"
  MR_Word * parse_tree__equiv_type__STATE_VARIABLE_UsedModules_11,
#line 276 "equiv_type.m"
  MR_Word parse_tree__equiv_type__STATE_VARIABLE_Specs_0_12,
#line 276 "equiv_type.m"
  MR_Word * parse_tree__equiv_type__STATE_VARIABLE_Specs_13)
#line 276 "equiv_type.m"
{
#line 284 "equiv_type.m"
  while (MR_TRUE)
#line 284 "equiv_type.m"
    {
#line 284 "equiv_type.m"
      /* tailcall optimized into a loop */
#line 284 "equiv_type.m"
      {
#line 284 "equiv_type.m"
        MR_bool parse_tree__equiv_type__succeeded;

#line 284 "equiv_type.m"
        if ((parse_tree__equiv_type__HeadVar__5_5 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 284 "equiv_type.m"
          {
#line 285 "equiv_type.m"
            *parse_tree__equiv_type__STATE_VARIABLE_Specs_13 = parse_tree__equiv_type__STATE_VARIABLE_Specs_0_12;
#line 285 "equiv_type.m"
            *parse_tree__equiv_type__STATE_VARIABLE_UsedModules_11 = parse_tree__equiv_type__STATE_VARIABLE_UsedModules_0_10;
#line 285 "equiv_type.m"
            *parse_tree__equiv_type__STATE_VARIABLE_RecompInfo_9 = parse_tree__equiv_type__STATE_VARIABLE_RecompInfo_0_8;
#line 285 "equiv_type.m"
            *parse_tree__equiv_type__STATE_VARIABLE_RevReplItemBlocks_7 = parse_tree__equiv_type__STATE_VARIABLE_RevReplItemBlocks_0_6;
#line 284 "equiv_type.m"
          }
#line 284 "equiv_type.m"
        else
#line 288 "equiv_type.m"
          {
#line 288 "equiv_type.m"
            MR_Word parse_tree__equiv_type__ItemBlock0_34 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__equiv_type__HeadVar__5_5, (MR_Integer) 0)));
#line 288 "equiv_type.m"
            MR_Word parse_tree__equiv_type__ItemBlocks0_35 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__equiv_type__HeadVar__5_5, (MR_Integer) 1)));
#line 288 "equiv_type.m"
            MR_Word parse_tree__equiv_type__Section_40 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__equiv_type__ItemBlock0_34, (MR_Integer) 0)));
#line 288 "equiv_type.m"
            MR_Word parse_tree__equiv_type__SectionContext_41 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__equiv_type__ItemBlock0_34, (MR_Integer) 1)));
#line 288 "equiv_type.m"
            MR_Word parse_tree__equiv_type__Incls_42 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__equiv_type__ItemBlock0_34, (MR_Integer) 2)));
#line 288 "equiv_type.m"
            MR_Word parse_tree__equiv_type__Avails_43 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__equiv_type__ItemBlock0_34, (MR_Integer) 3)));
#line 288 "equiv_type.m"
            MR_Word parse_tree__equiv_type__Items0_44 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__equiv_type__ItemBlock0_34, (MR_Integer) 4)));
#line 288 "equiv_type.m"
            MR_Word parse_tree__equiv_type__RevReplItems_46;
#line 288 "equiv_type.m"
            MR_Word parse_tree__equiv_type__ReplItems_47;
#line 288 "equiv_type.m"
            MR_Word parse_tree__equiv_type__ReplItemBlock_48;
#line 288 "equiv_type.m"
            MR_Word parse_tree__equiv_type__STATE_VARIABLE_RecompInfo_58_58;
#line 288 "equiv_type.m"
            MR_Word parse_tree__equiv_type__STATE_VARIABLE_UsedModules_59_59;
#line 288 "equiv_type.m"
            MR_Word parse_tree__equiv_type__STATE_VARIABLE_Specs_60_60;
#line 288 "equiv_type.m"
            MR_Word parse_tree__equiv_type__STATE_VARIABLE_RevReplItemBlocks_61_61;

#line 291 "equiv_type.m"
            {
#line 291 "equiv_type.m"
              parse_tree__equiv_type__replace_in_items_13_p_0(parse_tree__equiv_type__ModuleName_1, parse_tree__equiv_type__TypeEqvMap_2, parse_tree__equiv_type__InstEqvMap_3, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), parse_tree__equiv_type__Items0_44, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), &parse_tree__equiv_type__RevReplItems_46, parse_tree__equiv_type__STATE_VARIABLE_RecompInfo_0_8, &parse_tree__equiv_type__STATE_VARIABLE_RecompInfo_58_58, parse_tree__equiv_type__STATE_VARIABLE_UsedModules_0_10, &parse_tree__equiv_type__STATE_VARIABLE_UsedModules_59_59, parse_tree__equiv_type__STATE_VARIABLE_Specs_0_12, &parse_tree__equiv_type__STATE_VARIABLE_Specs_60_60);
            }
#line 293 "equiv_type.m"
            {
#line 293 "equiv_type.m"
              mercury__list__reverse_2_p_0((MR_Word) &parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_0, parse_tree__equiv_type__RevReplItems_46, &parse_tree__equiv_type__ReplItems_47);
            }
#line 294 "equiv_type.m"
            {
#line 294 "equiv_type.m"
              parse_tree__equiv_type__ReplItemBlock_48 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
#line 294 "equiv_type.m"
              MR_hl_field(MR_mktag(0), parse_tree__equiv_type__ReplItemBlock_48, 0) = ((MR_Box) (parse_tree__equiv_type__Section_40));
#line 294 "equiv_type.m"
              MR_hl_field(MR_mktag(0), parse_tree__equiv_type__ReplItemBlock_48, 1) = ((MR_Box) (parse_tree__equiv_type__SectionContext_41));
#line 294 "equiv_type.m"
              MR_hl_field(MR_mktag(0), parse_tree__equiv_type__ReplItemBlock_48, 2) = ((MR_Box) (parse_tree__equiv_type__Incls_42));
#line 294 "equiv_type.m"
              MR_hl_field(MR_mktag(0), parse_tree__equiv_type__ReplItemBlock_48, 3) = ((MR_Box) (parse_tree__equiv_type__Avails_43));
#line 294 "equiv_type.m"
              MR_hl_field(MR_mktag(0), parse_tree__equiv_type__ReplItemBlock_48, 4) = ((MR_Box) (parse_tree__equiv_type__ReplItems_47));
#line 294 "equiv_type.m"
            }
#line 296 "equiv_type.m"
            {
#line 296 "equiv_type.m"
              parse_tree__equiv_type__STATE_VARIABLE_RevReplItemBlocks_61_61 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 296 "equiv_type.m"
              MR_hl_field(MR_mktag(1), parse_tree__equiv_type__STATE_VARIABLE_RevReplItemBlocks_61_61, 0) = ((MR_Box) (parse_tree__equiv_type__ReplItemBlock_48));
#line 296 "equiv_type.m"
              MR_hl_field(MR_mktag(1), parse_tree__equiv_type__STATE_VARIABLE_RevReplItemBlocks_61_61, 1) = ((MR_Box) (parse_tree__equiv_type__STATE_VARIABLE_RevReplItemBlocks_0_6));
#line 296 "equiv_type.m"
            }
#line 297 "equiv_type.m"
            /* direct tailcall eliminated */
#line 297 "equiv_type.m"
            {
#line 297 "equiv_type.m"
              MR_Word parse_tree__equiv_type__HeadVar__5__tmp_copy_5 = parse_tree__equiv_type__ItemBlocks0_35;
#line 297 "equiv_type.m"
              MR_Word parse_tree__equiv_type__STATE_VARIABLE_RevReplItemBlocks_0__tmp_copy_6 = parse_tree__equiv_type__STATE_VARIABLE_RevReplItemBlocks_61_61;
#line 297 "equiv_type.m"
              MR_Word parse_tree__equiv_type__STATE_VARIABLE_RecompInfo_0__tmp_copy_8 = parse_tree__equiv_type__STATE_VARIABLE_RecompInfo_58_58;
#line 297 "equiv_type.m"
              MR_Word parse_tree__equiv_type__STATE_VARIABLE_UsedModules_0__tmp_copy_10 = parse_tree__equiv_type__STATE_VARIABLE_UsedModules_59_59;
#line 297 "equiv_type.m"
              MR_Word parse_tree__equiv_type__STATE_VARIABLE_Specs_0__tmp_copy_12 = parse_tree__equiv_type__STATE_VARIABLE_Specs_60_60;

#line 297 "equiv_type.m"
              parse_tree__equiv_type__STATE_VARIABLE_Specs_0_12 = parse_tree__equiv_type__STATE_VARIABLE_Specs_0__tmp_copy_12;
#line 297 "equiv_type.m"
              parse_tree__equiv_type__STATE_VARIABLE_UsedModules_0_10 = parse_tree__equiv_type__STATE_VARIABLE_UsedModules_0__tmp_copy_10;
#line 297 "equiv_type.m"
              parse_tree__equiv_type__STATE_VARIABLE_RecompInfo_0_8 = parse_tree__equiv_type__STATE_VARIABLE_RecompInfo_0__tmp_copy_8;
#line 297 "equiv_type.m"
              parse_tree__equiv_type__STATE_VARIABLE_RevReplItemBlocks_0_6 = parse_tree__equiv_type__STATE_VARIABLE_RevReplItemBlocks_0__tmp_copy_6;
#line 297 "equiv_type.m"
              parse_tree__equiv_type__HeadVar__5_5 = parse_tree__equiv_type__HeadVar__5__tmp_copy_5;
#line 297 "equiv_type.m"
            }
#line 297 "equiv_type.m"
            continue;
#line 288 "equiv_type.m"
          }
#line 284 "equiv_type.m"
      }
#line 284 "equiv_type.m"
      break;
#line 284 "equiv_type.m"
    }
#line 276 "equiv_type.m"
}

#line 1357 "equiv_type.m"
static MR_Word MR_CALL 
parse_tree__equiv_type__IntroducedFrom__func__replace_in_pred_type__1357__1_1_f_0(
#line 1357 "equiv_type.m"
  MR_Word parse_tree__equiv_type__HeadVar__1_134)
#line 1357 "equiv_type.m"
{
#line 1357 "equiv_type.m"
  {
#line 1357 "equiv_type.m"
    MR_bool parse_tree__equiv_type__succeeded;
#line 1357 "equiv_type.m"
    MR_Word parse_tree__equiv_type__HeadVar__2_135;
#line 1357 "equiv_type.m"
    MR_Word parse_tree__equiv_type__Type_172 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__equiv_type__HeadVar__1_134, (MR_Integer) 0)));
#line 1357 "equiv_type.m"
    MR_Word parse_tree__equiv_type__Mode_173 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__equiv_type__HeadVar__1_134, (MR_Integer) 1)));

#line 1358 "equiv_type.m"
    {
#line 1358 "equiv_type.m"
      parse_tree__equiv_type__HeadVar__2_135 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1358 "equiv_type.m"
      MR_hl_field(MR_mktag(1), parse_tree__equiv_type__HeadVar__2_135, 0) = ((MR_Box) (parse_tree__equiv_type__Type_172));
#line 1358 "equiv_type.m"
      MR_hl_field(MR_mktag(1), parse_tree__equiv_type__HeadVar__2_135, 1) = ((MR_Box) (parse_tree__equiv_type__Mode_173));
#line 1358 "equiv_type.m"
    }
#line 1357 "equiv_type.m"
    return parse_tree__equiv_type__HeadVar__2_135;
#line 1357 "equiv_type.m"
  }
#line 1357 "equiv_type.m"
}

#line 1350 "equiv_type.m"
static MR_Word MR_CALL 
parse_tree__equiv_type__IntroducedFrom__func__replace_in_pred_type__1350__1_1_f_0(
#line 1350 "equiv_type.m"
  MR_Word parse_tree__equiv_type__HeadVar__1_165)
#line 1350 "equiv_type.m"
{
#line 1350 "equiv_type.m"
  {
#line 1350 "equiv_type.m"
    MR_bool parse_tree__equiv_type__succeeded;
#line 1350 "equiv_type.m"
    MR_Word parse_tree__equiv_type__HeadVar__2_166;

#line 1350 "equiv_type.m"
    {
#line 1350 "equiv_type.m"
      parse_tree__equiv_type__HeadVar__2_166 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 1350 "equiv_type.m"
      MR_hl_field(MR_mktag(0), parse_tree__equiv_type__HeadVar__2_166, 0) = ((MR_Box) (parse_tree__equiv_type__HeadVar__1_165));
#line 1350 "equiv_type.m"
    }
#line 1350 "equiv_type.m"
    return parse_tree__equiv_type__HeadVar__2_166;
#line 1350 "equiv_type.m"
  }
#line 1350 "equiv_type.m"
}

#line 1068 "equiv_type.m"
static MR_bool MR_CALL 
parse_tree__equiv_type__IntroducedFrom__pred__replace_in_ctor_arg_list_2__1068__1_2_p_0(
#line 1068 "equiv_type.m"
  MR_Word parse_tree__equiv_type__Type0_41,
#line 1068 "equiv_type.m"
  MR_Word parse_tree__equiv_type__Type_44)
#line 1068 "equiv_type.m"
{
#line 1068 "equiv_type.m"
  {
#line 1068 "equiv_type.m"
    MR_bool parse_tree__equiv_type__succeeded;

#line 1068 "equiv_type.m"
    {
#line 1068 "equiv_type.m"
      return parse_tree__equiv_type__succeeded = parse_tree__prog_data____Unify____mer_type_0_0(parse_tree__equiv_type__Type_44, parse_tree__equiv_type__Type0_41);
    }
#line 1068 "equiv_type.m"
    return parse_tree__equiv_type__succeeded;
#line 1068 "equiv_type.m"
  }
#line 1068 "equiv_type.m"
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

#line 246 "equiv_type.m"
static void MR_CALL 
parse_tree__equiv_type____Compare____section_maybe_record_sym_name_use_1_0(
#line 246 "equiv_type.m"
  MR_Word parse_tree__equiv_type__TypeInfo_for_MS_6,
#line 246 "equiv_type.m"
  MR_Word * parse_tree__equiv_type__HeadVar__1_1,
#line 246 "equiv_type.m"
  MR_Word parse_tree__equiv_type__HeadVar__2_2,
#line 246 "equiv_type.m"
  MR_Word parse_tree__equiv_type__HeadVar__3_3)
#line 246 "equiv_type.m"
{
#line 246 "equiv_type.m"
  {
#line 246 "equiv_type.m"
    MR_bool parse_tree__equiv_type__succeeded;

#line 246 "equiv_type.m"
    {
#line 246 "equiv_type.m"
      parse_tree__equiv_type__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_95_95_67_111_109_112_97_114_101_95_95_95_112_97_114_115_101_95_116_114_101_101_95_95_101_113_117_105_118_95_116_121_112_101_95_95_115_101_99_116_105_111_110_95_109_97_121_98_101_95_114_101_99_111_114_100_95_115_121_109_95_110_97_109_101_95_117_115_101_95_49_95_95_91_49_93_95_48_3_p_0(parse_tree__equiv_type__HeadVar__1_1, parse_tree__equiv_type__HeadVar__2_2, parse_tree__equiv_type__HeadVar__3_3);
#line 246 "equiv_type.m"
      return;
    }
#line 246 "equiv_type.m"
  }
#line 246 "equiv_type.m"
}

#line 246 "equiv_type.m"
static MR_bool MR_CALL 
parse_tree__equiv_type____Unify____section_maybe_record_sym_name_use_1_0(
#line 246 "equiv_type.m"
  MR_Word parse_tree__equiv_type__TypeInfo_for_MS_5,
#line 246 "equiv_type.m"
  MR_Word parse_tree__equiv_type__HeadVar__1_1,
#line 246 "equiv_type.m"
  MR_Word parse_tree__equiv_type__HeadVar__2_2)
#line 246 "equiv_type.m"
{
#line 246 "equiv_type.m"
  {
#line 246 "equiv_type.m"
    MR_bool parse_tree__equiv_type__succeeded;

#line 246 "equiv_type.m"
    {
#line 246 "equiv_type.m"
      return parse_tree__equiv_type__succeeded = parse_tree__equiv_type__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_95_95_85_110_105_102_121_95_95_95_112_97_114_115_101_95_116_114_101_101_95_95_101_113_117_105_118_95_116_121_112_101_95_95_115_101_99_116_105_111_110_95_109_97_121_98_101_95_114_101_99_111_114_100_95_115_121_109_95_110_97_109_101_95_117_115_101_95_49_95_95_91_49_93_95_48_2_p_0(parse_tree__equiv_type__HeadVar__1_1, parse_tree__equiv_type__HeadVar__2_2);
    }
#line 246 "equiv_type.m"
    return parse_tree__equiv_type__succeeded;
#line 246 "equiv_type.m"
  }
#line 246 "equiv_type.m"
}

#line 191 "equiv_type.m"
static void MR_CALL 
parse_tree__equiv_type____Compare____pred_or_func_decl_type_0_0(
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
    MR_Integer parse_tree__equiv_type__Cast_HeadVar1_4 = (MR_Integer) parse_tree__equiv_type__HeadVar__2_2;
#line 191 "equiv_type.m"
    MR_Integer parse_tree__equiv_type__Cast_HeadVar2_5 = (MR_Integer) parse_tree__equiv_type__HeadVar__3_3;

#line 191 "equiv_type.m"
    {
#line 191 "equiv_type.m"
      mercury__private_builtin__builtin_compare_int_3_p_0(parse_tree__equiv_type__HeadVar__1_1, parse_tree__equiv_type__Cast_HeadVar1_4, parse_tree__equiv_type__Cast_HeadVar2_5);
#line 191 "equiv_type.m"
      return;
    }
#line 191 "equiv_type.m"
  }
#line 191 "equiv_type.m"
}

#line 191 "equiv_type.m"
static MR_bool MR_CALL 
parse_tree__equiv_type____Unify____pred_or_func_decl_type_0_0(
#line 191 "equiv_type.m"
  MR_Word parse_tree__equiv_type__HeadVar__2_1,
#line 191 "equiv_type.m"
  MR_Word parse_tree__equiv_type__HeadVar__2_2)
#line 191 "equiv_type.m"
{
#line 6288 "parse_tree.equiv_type.c"
  {
#line 6290 "parse_tree.equiv_type.c"
    MR_bool parse_tree__equiv_type__succeeded = (parse_tree__equiv_type__HeadVar__2_1 == parse_tree__equiv_type__HeadVar__2_2);

#line 6293 "parse_tree.equiv_type.c"
    return parse_tree__equiv_type__succeeded;
#line 6295 "parse_tree.equiv_type.c"
  }
#line 191 "equiv_type.m"
}

#line 242 "equiv_type.m"
static void MR_CALL 
parse_tree__equiv_type____Compare____maybe_record_sym_name_use_0_0(
#line 242 "equiv_type.m"
  MR_Word * parse_tree__equiv_type__HeadVar__1_1,
#line 242 "equiv_type.m"
  MR_Word parse_tree__equiv_type__HeadVar__2_2,
#line 242 "equiv_type.m"
  MR_Word parse_tree__equiv_type__HeadVar__3_3)
#line 242 "equiv_type.m"
{
#line 242 "equiv_type.m"
  {
#line 242 "equiv_type.m"
    MR_bool parse_tree__equiv_type__succeeded;
#line 242 "equiv_type.m"
    MR_Integer parse_tree__equiv_type__CastX_8 = (MR_Integer) parse_tree__equiv_type__HeadVar__2_2;
#line 242 "equiv_type.m"
    MR_Integer parse_tree__equiv_type__CastY_9 = (MR_Integer) parse_tree__equiv_type__HeadVar__3_3;

#line 242 "equiv_type.m"
    parse_tree__equiv_type__succeeded = (parse_tree__equiv_type__CastX_8 == parse_tree__equiv_type__CastY_9);
#line 242 "equiv_type.m"
    if (parse_tree__equiv_type__succeeded)
#line 6324 "parse_tree.equiv_type.c"
      *parse_tree__equiv_type__HeadVar__1_1 = (MR_Integer) 0;
#line 242 "equiv_type.m"
    else
#line 242 "equiv_type.m"
    if ((parse_tree__equiv_type__HeadVar__2_2 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 242 "equiv_type.m"
      if ((parse_tree__equiv_type__HeadVar__3_3 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 242 "equiv_type.m"
        *parse_tree__equiv_type__HeadVar__1_1 = (MR_Integer) 0;
#line 242 "equiv_type.m"
      else
#line 6336 "parse_tree.equiv_type.c"
        *parse_tree__equiv_type__HeadVar__1_1 = (MR_Integer) 1;
#line 242 "equiv_type.m"
    else
#line 242 "equiv_type.m"
      {
#line 242 "equiv_type.m"
        MR_Word parse_tree__equiv_type__V_11_11 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__equiv_type__HeadVar__2_2, (MR_Integer) 0)));

#line 242 "equiv_type.m"
        if ((parse_tree__equiv_type__HeadVar__3_3 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 6347 "parse_tree.equiv_type.c"
          *parse_tree__equiv_type__HeadVar__1_1 = (MR_Integer) 2;
#line 242 "equiv_type.m"
        else
#line 242 "equiv_type.m"
          {
#line 242 "equiv_type.m"
            MR_Word parse_tree__equiv_type__V_7_7 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__equiv_type__HeadVar__3_3, (MR_Integer) 0)));
#line 242 "equiv_type.m"
            MR_Integer parse_tree__equiv_type__V_12_12 = (MR_Integer) parse_tree__equiv_type__V_11_11;
#line 242 "equiv_type.m"
            MR_Integer parse_tree__equiv_type__V_13_13 = (MR_Integer) parse_tree__equiv_type__V_7_7;

#line 242 "equiv_type.m"
            {
#line 242 "equiv_type.m"
              mercury__private_builtin__builtin_compare_int_3_p_0(parse_tree__equiv_type__HeadVar__1_1, parse_tree__equiv_type__V_12_12, parse_tree__equiv_type__V_13_13);
#line 242 "equiv_type.m"
              return;
            }
#line 242 "equiv_type.m"
          }
#line 242 "equiv_type.m"
      }
#line 242 "equiv_type.m"
  }
#line 242 "equiv_type.m"
}

#line 242 "equiv_type.m"
static MR_bool MR_CALL 
parse_tree__equiv_type____Unify____maybe_record_sym_name_use_0_0(
#line 242 "equiv_type.m"
  MR_Word parse_tree__equiv_type__HeadVar__1_1,
#line 242 "equiv_type.m"
  MR_Word parse_tree__equiv_type__HeadVar__2_2)
#line 242 "equiv_type.m"
{
#line 242 "equiv_type.m"
  {
#line 242 "equiv_type.m"
    MR_bool parse_tree__equiv_type__succeeded;
#line 242 "equiv_type.m"
    MR_Integer parse_tree__equiv_type__CastX_7 = (MR_Integer) parse_tree__equiv_type__HeadVar__1_1;
#line 242 "equiv_type.m"
    MR_Integer parse_tree__equiv_type__CastY_8 = (MR_Integer) parse_tree__equiv_type__HeadVar__2_2;

#line 242 "equiv_type.m"
    parse_tree__equiv_type__succeeded = (parse_tree__equiv_type__CastX_7 == parse_tree__equiv_type__CastY_8);
#line 242 "equiv_type.m"
    if (parse_tree__equiv_type__succeeded)
#line 242 "equiv_type.m"
      parse_tree__equiv_type__succeeded = MR_TRUE;
#line 242 "equiv_type.m"
    else
#line 242 "equiv_type.m"
    if ((parse_tree__equiv_type__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 242 "equiv_type.m"
      {
#line 242 "equiv_type.m"
        MR_Integer parse_tree__equiv_type__CastX_3 = (MR_Integer) parse_tree__equiv_type__HeadVar__1_1;
#line 242 "equiv_type.m"
        MR_Integer parse_tree__equiv_type__CastY_4 = (MR_Integer) parse_tree__equiv_type__HeadVar__2_2;

#line 242 "equiv_type.m"
        parse_tree__equiv_type__succeeded = (parse_tree__equiv_type__CastY_4 == parse_tree__equiv_type__CastX_3);
#line 242 "equiv_type.m"
      }
#line 242 "equiv_type.m"
    else
#line 242 "equiv_type.m"
      {
#line 242 "equiv_type.m"
        MR_Word parse_tree__equiv_type__V_5_5 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__equiv_type__HeadVar__1_1, (MR_Integer) 0)));
#line 242 "equiv_type.m"
        MR_Word parse_tree__equiv_type__V_6_6;

#line 242 "equiv_type.m"
        parse_tree__equiv_type__succeeded = ((MR_tag((MR_Word) parse_tree__equiv_type__HeadVar__2_2)) == (MR_mktag((MR_Integer) 1)));
#line 242 "equiv_type.m"
        if (parse_tree__equiv_type__succeeded)
#line 242 "equiv_type.m"
          {
#line 242 "equiv_type.m"
            parse_tree__equiv_type__V_6_6 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__equiv_type__HeadVar__2_2, (MR_Integer) 0)));
#line 6432 "parse_tree.equiv_type.c"
            parse_tree__equiv_type__succeeded = (parse_tree__equiv_type__V_5_5 == parse_tree__equiv_type__V_6_6);
#line 242 "equiv_type.m"
          }
#line 242 "equiv_type.m"
      }
#line 242 "equiv_type.m"
    return parse_tree__equiv_type__succeeded;
#line 242 "equiv_type.m"
  }
#line 242 "equiv_type.m"
}

#line 189 "equiv_type.m"
static void MR_CALL 
parse_tree__equiv_type____Compare____inst_eqv_map_0_0(
#line 189 "equiv_type.m"
  MR_Word * parse_tree__equiv_type__HeadVar__1_1,
#line 189 "equiv_type.m"
  MR_Word parse_tree__equiv_type__HeadVar__2_2,
#line 189 "equiv_type.m"
  MR_Word parse_tree__equiv_type__HeadVar__3_3)
#line 189 "equiv_type.m"
{
#line 189 "equiv_type.m"
  {
#line 189 "equiv_type.m"
    MR_bool parse_tree__equiv_type__succeeded;
#line 189 "equiv_type.m"
    MR_Word parse_tree__equiv_type__Cast_HeadVar1_4 = parse_tree__equiv_type__HeadVar__2_2;
#line 189 "equiv_type.m"
    MR_Word parse_tree__equiv_type__Cast_HeadVar2_5 = parse_tree__equiv_type__HeadVar__3_3;

#line 189 "equiv_type.m"
    {
#line 189 "equiv_type.m"
      mercury__builtin__compare_3_p_0((MR_Word) &parse_tree__equiv_type_scalar_common_2[2], parse_tree__equiv_type__HeadVar__1_1, ((MR_Box) (parse_tree__equiv_type__Cast_HeadVar1_4)), ((MR_Box) (parse_tree__equiv_type__Cast_HeadVar2_5)));
#line 189 "equiv_type.m"
      return;
    }
#line 189 "equiv_type.m"
  }
#line 189 "equiv_type.m"
}

#line 189 "equiv_type.m"
static MR_bool MR_CALL 
parse_tree__equiv_type____Unify____inst_eqv_map_0_0(
#line 189 "equiv_type.m"
  MR_Word parse_tree__equiv_type__HeadVar__1_1,
#line 189 "equiv_type.m"
  MR_Word parse_tree__equiv_type__HeadVar__2_2)
#line 189 "equiv_type.m"
{
#line 189 "equiv_type.m"
  {
#line 189 "equiv_type.m"
    MR_bool parse_tree__equiv_type__succeeded;
#line 189 "equiv_type.m"
    MR_Word parse_tree__equiv_type__Cast_HeadVar1_3 = parse_tree__equiv_type__HeadVar__1_1;
#line 189 "equiv_type.m"
    MR_Word parse_tree__equiv_type__Cast_HeadVar2_4 = parse_tree__equiv_type__HeadVar__2_2;

#line 189 "equiv_type.m"
    {
#line 189 "equiv_type.m"
      return parse_tree__equiv_type__succeeded = mercury__builtin__unify_2_p_0((MR_Word) &parse_tree__equiv_type_scalar_common_2[2], ((MR_Box) (parse_tree__equiv_type__Cast_HeadVar1_3)), ((MR_Box) (parse_tree__equiv_type__Cast_HeadVar2_4)));
    }
#line 189 "equiv_type.m"
    return parse_tree__equiv_type__succeeded;
#line 189 "equiv_type.m"
  }
#line 189 "equiv_type.m"
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
#line 6531 "parse_tree.equiv_type.c"
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
#line 6557 "parse_tree.equiv_type.c"
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
#line 6577 "parse_tree.equiv_type.c"
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

#line 6646 "parse_tree.equiv_type.c"
        {
#line 6648 "parse_tree.equiv_type.c"
          parse_tree__equiv_type__succeeded = mercury__builtin__unify_2_p_0((MR_Word) &parse_tree__equiv_type_scalar_common_1[6], ((MR_Box) (parse_tree__equiv_type__V_3_3)), ((MR_Box) (parse_tree__equiv_type__V_6_6)));
        }
#line 82 "equiv_type.m"
        if (parse_tree__equiv_type__succeeded)
#line 82 "equiv_type.m"
          {
#line 6655 "parse_tree.equiv_type.c"
            parse_tree__equiv_type__TypeInfo_12_12 = (MR_Word) &parse_tree__equiv_type_scalar_common_1[11];
#line 6657 "parse_tree.equiv_type.c"
            {
#line 6659 "parse_tree.equiv_type.c"
              parse_tree__equiv_type__succeeded = mercury__builtin__unify_2_p_0(parse_tree__equiv_type__TypeInfo_12_12, ((MR_Box) (parse_tree__equiv_type__V_4_4)), ((MR_Box) (parse_tree__equiv_type__V_7_7)));
            }
#line 82 "equiv_type.m"
            if (parse_tree__equiv_type__succeeded)
#line 6664 "parse_tree.equiv_type.c"
              {
#line 6666 "parse_tree.equiv_type.c"
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

#line 182 "equiv_type.m"
static void MR_CALL 
parse_tree__equiv_type____Compare____eqv_inst_body_0_0(
#line 182 "equiv_type.m"
  MR_Word * parse_tree__equiv_type__HeadVar__1_1,
#line 182 "equiv_type.m"
  MR_Word parse_tree__equiv_type__HeadVar__2_2,
#line 182 "equiv_type.m"
  MR_Word parse_tree__equiv_type__HeadVar__3_3)
#line 182 "equiv_type.m"
{
#line 182 "equiv_type.m"
  {
#line 182 "equiv_type.m"
    MR_bool parse_tree__equiv_type__succeeded;
#line 182 "equiv_type.m"
    MR_Integer parse_tree__equiv_type__CastX_12 = (MR_Integer) parse_tree__equiv_type__HeadVar__2_2;
#line 182 "equiv_type.m"
    MR_Integer parse_tree__equiv_type__CastY_13 = (MR_Integer) parse_tree__equiv_type__HeadVar__3_3;

#line 182 "equiv_type.m"
    parse_tree__equiv_type__succeeded = (parse_tree__equiv_type__CastX_12 == parse_tree__equiv_type__CastY_13);
#line 182 "equiv_type.m"
    if (parse_tree__equiv_type__succeeded)
#line 6704 "parse_tree.equiv_type.c"
      *parse_tree__equiv_type__HeadVar__1_1 = (MR_Integer) 0;
#line 182 "equiv_type.m"
    else
#line 182 "equiv_type.m"
      {
#line 182 "equiv_type.m"
        MR_Word parse_tree__equiv_type__V_4_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__equiv_type__HeadVar__2_2, (MR_Integer) 0)));
#line 182 "equiv_type.m"
        MR_Word parse_tree__equiv_type__V_5_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__equiv_type__HeadVar__2_2, (MR_Integer) 1)));
#line 182 "equiv_type.m"
        MR_Word parse_tree__equiv_type__V_6_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__equiv_type__HeadVar__2_2, (MR_Integer) 2)));
#line 182 "equiv_type.m"
        MR_Word parse_tree__equiv_type__V_7_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__equiv_type__HeadVar__3_3, (MR_Integer) 0)));
#line 182 "equiv_type.m"
        MR_Word parse_tree__equiv_type__V_8_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__equiv_type__HeadVar__3_3, (MR_Integer) 1)));
#line 182 "equiv_type.m"
        MR_Word parse_tree__equiv_type__V_9_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__equiv_type__HeadVar__3_3, (MR_Integer) 2)));
#line 182 "equiv_type.m"
        MR_Word parse_tree__equiv_type__V_10_10;

#line 182 "equiv_type.m"
        {
#line 182 "equiv_type.m"
          mercury__builtin__compare_3_p_0((MR_Word) &parse_tree__equiv_type_scalar_common_1[9], &parse_tree__equiv_type__V_10_10, ((MR_Box) (parse_tree__equiv_type__V_4_4)), ((MR_Box) (parse_tree__equiv_type__V_7_7)));
        }
#line 6730 "parse_tree.equiv_type.c"
        parse_tree__equiv_type__succeeded = (parse_tree__equiv_type__V_10_10 == (MR_Integer) 0);
#line 182 "equiv_type.m"
        parse_tree__equiv_type__succeeded = !(parse_tree__equiv_type__succeeded);
#line 182 "equiv_type.m"
        if (parse_tree__equiv_type__succeeded)
#line 182 "equiv_type.m"
          *parse_tree__equiv_type__HeadVar__1_1 = parse_tree__equiv_type__V_10_10;
#line 182 "equiv_type.m"
        else
#line 182 "equiv_type.m"
          {
#line 182 "equiv_type.m"
            MR_Word parse_tree__equiv_type__V_11_11;

#line 182 "equiv_type.m"
            {
#line 182 "equiv_type.m"
              mercury__builtin__compare_3_p_0((MR_Word) &parse_tree__equiv_type_scalar_common_1[10], &parse_tree__equiv_type__V_11_11, ((MR_Box) (parse_tree__equiv_type__V_5_5)), ((MR_Box) (parse_tree__equiv_type__V_8_8)));
            }
#line 6750 "parse_tree.equiv_type.c"
            parse_tree__equiv_type__succeeded = (parse_tree__equiv_type__V_11_11 == (MR_Integer) 0);
#line 182 "equiv_type.m"
            parse_tree__equiv_type__succeeded = !(parse_tree__equiv_type__succeeded);
#line 182 "equiv_type.m"
            if (parse_tree__equiv_type__succeeded)
#line 182 "equiv_type.m"
              *parse_tree__equiv_type__HeadVar__1_1 = parse_tree__equiv_type__V_11_11;
#line 182 "equiv_type.m"
            else
#line 182 "equiv_type.m"
              {
#line 182 "equiv_type.m"
                parse_tree__prog_data____Compare____mer_inst_0_0(parse_tree__equiv_type__HeadVar__1_1, parse_tree__equiv_type__V_6_6, parse_tree__equiv_type__V_9_9);
#line 182 "equiv_type.m"
                return;
              }
#line 182 "equiv_type.m"
          }
#line 182 "equiv_type.m"
      }
#line 182 "equiv_type.m"
  }
#line 182 "equiv_type.m"
}

#line 182 "equiv_type.m"
static MR_bool MR_CALL 
parse_tree__equiv_type____Unify____eqv_inst_body_0_0(
#line 182 "equiv_type.m"
  MR_Word parse_tree__equiv_type__HeadVar__1_1,
#line 182 "equiv_type.m"
  MR_Word parse_tree__equiv_type__HeadVar__2_2)
#line 182 "equiv_type.m"
{
#line 182 "equiv_type.m"
  {
#line 182 "equiv_type.m"
    MR_bool parse_tree__equiv_type__succeeded;
#line 182 "equiv_type.m"
    MR_Integer parse_tree__equiv_type__CastX_9 = (MR_Integer) parse_tree__equiv_type__HeadVar__1_1;
#line 182 "equiv_type.m"
    MR_Integer parse_tree__equiv_type__CastY_10 = (MR_Integer) parse_tree__equiv_type__HeadVar__2_2;

#line 182 "equiv_type.m"
    parse_tree__equiv_type__succeeded = (parse_tree__equiv_type__CastX_9 == parse_tree__equiv_type__CastY_10);
#line 182 "equiv_type.m"
    if (parse_tree__equiv_type__succeeded)
#line 182 "equiv_type.m"
      parse_tree__equiv_type__succeeded = MR_TRUE;
#line 182 "equiv_type.m"
    else
#line 182 "equiv_type.m"
      {
#line 182 "equiv_type.m"
        MR_Word parse_tree__equiv_type__TypeInfo_12_12;
#line 182 "equiv_type.m"
        MR_Word parse_tree__equiv_type__V_3_3 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__equiv_type__HeadVar__1_1, (MR_Integer) 0)));
#line 182 "equiv_type.m"
        MR_Word parse_tree__equiv_type__V_4_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__equiv_type__HeadVar__1_1, (MR_Integer) 1)));
#line 182 "equiv_type.m"
        MR_Word parse_tree__equiv_type__V_5_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__equiv_type__HeadVar__1_1, (MR_Integer) 2)));
#line 182 "equiv_type.m"
        MR_Word parse_tree__equiv_type__V_6_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__equiv_type__HeadVar__2_2, (MR_Integer) 0)));
#line 182 "equiv_type.m"
        MR_Word parse_tree__equiv_type__V_7_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__equiv_type__HeadVar__2_2, (MR_Integer) 1)));
#line 182 "equiv_type.m"
        MR_Word parse_tree__equiv_type__V_8_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__equiv_type__HeadVar__2_2, (MR_Integer) 2)));

#line 6819 "parse_tree.equiv_type.c"
        {
#line 6821 "parse_tree.equiv_type.c"
          parse_tree__equiv_type__succeeded = mercury__builtin__unify_2_p_0((MR_Word) &parse_tree__equiv_type_scalar_common_1[9], ((MR_Box) (parse_tree__equiv_type__V_3_3)), ((MR_Box) (parse_tree__equiv_type__V_6_6)));
        }
#line 182 "equiv_type.m"
        if (parse_tree__equiv_type__succeeded)
#line 182 "equiv_type.m"
          {
#line 6828 "parse_tree.equiv_type.c"
            parse_tree__equiv_type__TypeInfo_12_12 = (MR_Word) &parse_tree__equiv_type_scalar_common_1[10];
#line 6830 "parse_tree.equiv_type.c"
            {
#line 6832 "parse_tree.equiv_type.c"
              parse_tree__equiv_type__succeeded = mercury__builtin__unify_2_p_0(parse_tree__equiv_type__TypeInfo_12_12, ((MR_Box) (parse_tree__equiv_type__V_4_4)), ((MR_Box) (parse_tree__equiv_type__V_7_7)));
            }
#line 182 "equiv_type.m"
            if (parse_tree__equiv_type__succeeded)
#line 6837 "parse_tree.equiv_type.c"
              {
#line 6839 "parse_tree.equiv_type.c"
                return parse_tree__equiv_type__succeeded = parse_tree__prog_data____Unify____mer_inst_0_0(parse_tree__equiv_type__V_5_5, parse_tree__equiv_type__V_8_8);
              }
#line 182 "equiv_type.m"
          }
#line 182 "equiv_type.m"
      }
#line 182 "equiv_type.m"
    return parse_tree__equiv_type__succeeded;
#line 182 "equiv_type.m"
  }
#line 182 "equiv_type.m"
}

#line 1539 "equiv_type.m"
static void MR_CALL 
parse_tree__equiv_type__replace_in_unit_selector_9_p_0(
#line 1539 "equiv_type.m"
  MR_Word parse_tree__equiv_type__MaybeRecord_10,
#line 1539 "equiv_type.m"
  MR_Word parse_tree__equiv_type__TypeEqvMap_11,
#line 1539 "equiv_type.m"
  MR_Word parse_tree__equiv_type__TVarSet_12,
#line 1539 "equiv_type.m"
  MR_Word parse_tree__equiv_type__Sel0_13,
#line 1539 "equiv_type.m"
  MR_Word * parse_tree__equiv_type__Sel_14,
#line 1539 "equiv_type.m"
  MR_Word parse_tree__equiv_type__STATE_VARIABLE_EquivTypeInfo_0_23,
#line 1539 "equiv_type.m"
  MR_Word * parse_tree__equiv_type__STATE_VARIABLE_EquivTypeInfo_24,
#line 1539 "equiv_type.m"
  MR_Word parse_tree__equiv_type__STATE_VARIABLE_UsedModules_0_25,
#line 1539 "equiv_type.m"
  MR_Word * parse_tree__equiv_type__STATE_VARIABLE_UsedModules_26)
#line 1539 "equiv_type.m"
{
#line 1547 "equiv_type.m"
  {
#line 1547 "equiv_type.m"
    MR_bool parse_tree__equiv_type__succeeded;

#line 1547 "equiv_type.m"
    if (((MR_tag((MR_Word) parse_tree__equiv_type__Sel0_13)) == (MR_mktag((MR_Integer) 0))))
#line 1547 "equiv_type.m"
      {
#line 1548 "equiv_type.m"
        *parse_tree__equiv_type__Sel_14 = parse_tree__equiv_type__Sel0_13;
#line 1547 "equiv_type.m"
        *parse_tree__equiv_type__STATE_VARIABLE_EquivTypeInfo_24 = parse_tree__equiv_type__STATE_VARIABLE_EquivTypeInfo_0_23;
#line 1547 "equiv_type.m"
        *parse_tree__equiv_type__STATE_VARIABLE_UsedModules_26 = parse_tree__equiv_type__STATE_VARIABLE_UsedModules_0_25;
#line 1547 "equiv_type.m"
      }
#line 1547 "equiv_type.m"
    else
#line 1550 "equiv_type.m"
      {
#line 1550 "equiv_type.m"
        MR_Word parse_tree__equiv_type__Type0_19 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__equiv_type__Sel0_13, (MR_Integer) 0)));
#line 1550 "equiv_type.m"
        MR_Word parse_tree__equiv_type__Type_20;
#line 1090 "equiv_type.m"
        MR_Word parse_tree__equiv_type__V_21_21;
#line 1090 "equiv_type.m"
        MR_Word parse_tree__equiv_type__V_22_22;
#line 1090 "equiv_type.m"
        MR_Word parse_tree__equiv_type__V_43_43;

#line 1090 "equiv_type.m"
        {
#line 1090 "equiv_type.m"
          parse_tree__equiv_type__replace_in_type_maybe_record_use_2_13_p_0(parse_tree__equiv_type__MaybeRecord_10, parse_tree__equiv_type__TypeEqvMap_11, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), parse_tree__equiv_type__Type0_19, &parse_tree__equiv_type__Type_20, &parse_tree__equiv_type__V_21_21, &parse_tree__equiv_type__V_43_43, parse_tree__equiv_type__TVarSet_12, &parse_tree__equiv_type__V_22_22, parse_tree__equiv_type__STATE_VARIABLE_EquivTypeInfo_0_23, parse_tree__equiv_type__STATE_VARIABLE_EquivTypeInfo_24, parse_tree__equiv_type__STATE_VARIABLE_UsedModules_0_25, parse_tree__equiv_type__STATE_VARIABLE_UsedModules_26);
        }
#line 1553 "equiv_type.m"
        {
#line 1553 "equiv_type.m"
          MR_Word base;
#line 1553 "equiv_type.m"
          base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 1553 "equiv_type.m"
          *parse_tree__equiv_type__Sel_14 = base;
#line 1553 "equiv_type.m"
          MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (parse_tree__equiv_type__Type_20));
#line 1553 "equiv_type.m"
        }
#line 1550 "equiv_type.m"
      }
#line 1547 "equiv_type.m"
  }
#line 1539 "equiv_type.m"
}

#line 1535 "equiv_type.m"
static void MR_CALL 
parse_tree__equiv_type__replace_in_structure_sharing_pair_9_p_0_1(
#line 1535 "equiv_type.m"
  MR_Box parse_tree__equiv_type__closure_arg,
#line 1535 "equiv_type.m"
  MR_Box parse_tree__equiv_type__wrapper_arg_1,
#line 1535 "equiv_type.m"
  MR_Box * parse_tree__equiv_type__wrapper_arg_2,
#line 1535 "equiv_type.m"
  MR_Box parse_tree__equiv_type__wrapper_arg_3,
#line 1535 "equiv_type.m"
  MR_Box * parse_tree__equiv_type__wrapper_arg_4,
#line 1535 "equiv_type.m"
  MR_Box parse_tree__equiv_type__wrapper_arg_5,
#line 1535 "equiv_type.m"
  MR_Box * parse_tree__equiv_type__wrapper_arg_6)
#line 1535 "equiv_type.m"
{
#line 1535 "equiv_type.m"
  {
#line 1535 "equiv_type.m"
    MR_Box parse_tree__equiv_type__closure = parse_tree__equiv_type__closure_arg;
#line 1535 "equiv_type.m"
    MR_Word parse_tree__equiv_type__conv2_Sel_14;
#line 1535 "equiv_type.m"
    MR_Word parse_tree__equiv_type__conv1_STATE_VARIABLE_EquivTypeInfo_24;
#line 1535 "equiv_type.m"
    MR_Word parse_tree__equiv_type__conv0_STATE_VARIABLE_UsedModules_26;

#line 1535 "equiv_type.m"
    {
#line 1535 "equiv_type.m"
      parse_tree__equiv_type__replace_in_unit_selector_9_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__equiv_type__closure, (MR_Integer) 3))), ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__equiv_type__closure, (MR_Integer) 4))), ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__equiv_type__closure, (MR_Integer) 5))), ((MR_Word) parse_tree__equiv_type__wrapper_arg_1), &parse_tree__equiv_type__conv2_Sel_14, ((MR_Word) parse_tree__equiv_type__wrapper_arg_3), &parse_tree__equiv_type__conv1_STATE_VARIABLE_EquivTypeInfo_24, ((MR_Word) parse_tree__equiv_type__wrapper_arg_5), &parse_tree__equiv_type__conv0_STATE_VARIABLE_UsedModules_26);
    }
#line 1535 "equiv_type.m"
    *parse_tree__equiv_type__wrapper_arg_2 = ((MR_Box) (parse_tree__equiv_type__conv2_Sel_14));
#line 1535 "equiv_type.m"
    *parse_tree__equiv_type__wrapper_arg_4 = ((MR_Box) (parse_tree__equiv_type__conv1_STATE_VARIABLE_EquivTypeInfo_24));
#line 1535 "equiv_type.m"
    *parse_tree__equiv_type__wrapper_arg_6 = ((MR_Box) (parse_tree__equiv_type__conv0_STATE_VARIABLE_UsedModules_26));
#line 1535 "equiv_type.m"
  }
#line 1535 "equiv_type.m"
}

#line 1514 "equiv_type.m"
static void MR_CALL 
parse_tree__equiv_type__replace_in_structure_sharing_pair_9_p_0(
#line 1514 "equiv_type.m"
  MR_Word parse_tree__equiv_type__MaybeRecord_10,
#line 1514 "equiv_type.m"
  MR_Word parse_tree__equiv_type__TypeEqvMap_11,
#line 1514 "equiv_type.m"
  MR_Word parse_tree__equiv_type__TVarSet_12,
#line 1514 "equiv_type.m"
  MR_Word parse_tree__equiv_type__HeadVar__4_4,
#line 1514 "equiv_type.m"
  MR_Word * parse_tree__equiv_type__HeadVar__5_5,
#line 1514 "equiv_type.m"
  MR_Word parse_tree__equiv_type__STATE_VARIABLE_EquivTypeInfo_0_19,
#line 1514 "equiv_type.m"
  MR_Word * parse_tree__equiv_type__STATE_VARIABLE_EquivTypeInfo_20,
#line 1514 "equiv_type.m"
  MR_Word parse_tree__equiv_type__STATE_VARIABLE_UsedModules_0_21,
#line 1514 "equiv_type.m"
  MR_Word * parse_tree__equiv_type__STATE_VARIABLE_UsedModules_22)
#line 1514 "equiv_type.m"
{
#line 1521 "equiv_type.m"
  {
#line 1521 "equiv_type.m"
    MR_bool parse_tree__equiv_type__succeeded;
#line 1521 "equiv_type.m"
    MR_Word parse_tree__equiv_type__TypeCtorInfo_33_50;
#line 1521 "equiv_type.m"
    MR_Word parse_tree__equiv_type__TypeCtorInfo_33_76;
#line 1521 "equiv_type.m"
    MR_Word parse_tree__equiv_type__SSA0_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__equiv_type__HeadVar__4_4, (MR_Integer) 0)));
#line 1521 "equiv_type.m"
    MR_Word parse_tree__equiv_type__SSB0_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__equiv_type__HeadVar__4_4, (MR_Integer) 1)));
#line 1521 "equiv_type.m"
    MR_Word parse_tree__equiv_type__SSA_15;
#line 1521 "equiv_type.m"
    MR_Word parse_tree__equiv_type__SSB_16;
#line 1521 "equiv_type.m"
    MR_Word parse_tree__equiv_type__STATE_VARIABLE_EquivTypeInfo_23_23;
#line 1521 "equiv_type.m"
    MR_Word parse_tree__equiv_type__STATE_VARIABLE_UsedModules_24_24;
#line 1521 "equiv_type.m"
    MR_Word parse_tree__equiv_type__Var_38 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__equiv_type__SSA0_13, (MR_Integer) 0)));
#line 1521 "equiv_type.m"
    MR_Word parse_tree__equiv_type__Sel0_39 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__equiv_type__SSA0_13, (MR_Integer) 1)));
#line 1521 "equiv_type.m"
    MR_Word parse_tree__equiv_type__Sel_40;
#line 1521 "equiv_type.m"
    MR_Word parse_tree__equiv_type__V_41_41;
#line 1521 "equiv_type.m"
    MR_Word parse_tree__equiv_type__Var_64;
#line 1521 "equiv_type.m"
    MR_Word parse_tree__equiv_type__Sel0_65;
#line 1521 "equiv_type.m"
    MR_Word parse_tree__equiv_type__Sel_66;
#line 1535 "equiv_type.m"
    MR_Box parse_tree__equiv_type__conv4_STATE_VARIABLE_EquivTypeInfo_23_23;
#line 1535 "equiv_type.m"
    MR_Box parse_tree__equiv_type__conv3_STATE_VARIABLE_UsedModules_24_24;
#line 1535 "equiv_type.m"
    MR_Box parse_tree__equiv_type__conv6_STATE_VARIABLE_EquivTypeInfo_20;
#line 1535 "equiv_type.m"
    MR_Box parse_tree__equiv_type__conv5_STATE_VARIABLE_UsedModules_22;

#line 1535 "equiv_type.m"
    {
#line 1535 "equiv_type.m"
      parse_tree__equiv_type__V_41_41 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 6 * sizeof(MR_Word)), NULL, NULL);
#line 1535 "equiv_type.m"
      MR_hl_field(MR_mktag(0), parse_tree__equiv_type__V_41_41, 0) = ((MR_Box) (&parse_tree__equiv_type_scalar_common_6[1]));
#line 1535 "equiv_type.m"
      MR_hl_field(MR_mktag(0), parse_tree__equiv_type__V_41_41, 1) = ((MR_Box) (parse_tree__equiv_type__replace_in_structure_sharing_pair_9_p_0_1));
#line 1535 "equiv_type.m"
      MR_hl_field(MR_mktag(0), parse_tree__equiv_type__V_41_41, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 3));
#line 1535 "equiv_type.m"
      MR_hl_field(MR_mktag(0), parse_tree__equiv_type__V_41_41, 3) = ((MR_Box) (parse_tree__equiv_type__MaybeRecord_10));
#line 1535 "equiv_type.m"
      MR_hl_field(MR_mktag(0), parse_tree__equiv_type__V_41_41, 4) = ((MR_Box) (parse_tree__equiv_type__TypeEqvMap_11));
#line 1535 "equiv_type.m"
      MR_hl_field(MR_mktag(0), parse_tree__equiv_type__V_41_41, 5) = ((MR_Box) (parse_tree__equiv_type__TVarSet_12));
#line 1535 "equiv_type.m"
    }
#line 7062 "parse_tree.equiv_type.c"
    parse_tree__equiv_type__TypeCtorInfo_33_50 = (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_unit_selector_0;
#line 1535 "equiv_type.m"
    {
#line 1535 "equiv_type.m"
      mercury__list__map_foldl2_7_p_0(parse_tree__equiv_type__TypeCtorInfo_33_50, parse_tree__equiv_type__TypeCtorInfo_33_50, (MR_Word) &parse_tree__equiv_type_scalar_common_1[7], (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_used_modules_0, parse_tree__equiv_type__V_41_41, parse_tree__equiv_type__Sel0_39, &parse_tree__equiv_type__Sel_40, ((MR_Box) (parse_tree__equiv_type__STATE_VARIABLE_EquivTypeInfo_0_19)), &parse_tree__equiv_type__conv4_STATE_VARIABLE_EquivTypeInfo_23_23, ((MR_Box) (parse_tree__equiv_type__STATE_VARIABLE_UsedModules_0_21)), &parse_tree__equiv_type__conv3_STATE_VARIABLE_UsedModules_24_24);
    }
#line 1535 "equiv_type.m"
    parse_tree__equiv_type__STATE_VARIABLE_EquivTypeInfo_23_23 = ((MR_Word) parse_tree__equiv_type__conv4_STATE_VARIABLE_EquivTypeInfo_23_23);
#line 1535 "equiv_type.m"
    parse_tree__equiv_type__STATE_VARIABLE_UsedModules_24_24 = ((MR_Word) parse_tree__equiv_type__conv3_STATE_VARIABLE_UsedModules_24_24);
#line 1537 "equiv_type.m"
    {
#line 1537 "equiv_type.m"
      parse_tree__equiv_type__SSA_15 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 1537 "equiv_type.m"
      MR_hl_field(MR_mktag(0), parse_tree__equiv_type__SSA_15, 0) = ((MR_Box) (parse_tree__equiv_type__Var_38));
#line 1537 "equiv_type.m"
      MR_hl_field(MR_mktag(0), parse_tree__equiv_type__SSA_15, 1) = ((MR_Box) (parse_tree__equiv_type__Sel_40));
#line 1537 "equiv_type.m"
    }
#line 1534 "equiv_type.m"
    parse_tree__equiv_type__Var_64 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__equiv_type__SSB0_14, (MR_Integer) 0)));
#line 1534 "equiv_type.m"
    parse_tree__equiv_type__Sel0_65 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__equiv_type__SSB0_14, (MR_Integer) 1)));
#line 7087 "parse_tree.equiv_type.c"
    parse_tree__equiv_type__TypeCtorInfo_33_76 = (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_unit_selector_0;
#line 1535 "equiv_type.m"
    {
#line 1535 "equiv_type.m"
      mercury__list__map_foldl2_7_p_0(parse_tree__equiv_type__TypeCtorInfo_33_76, parse_tree__equiv_type__TypeCtorInfo_33_76, (MR_Word) &parse_tree__equiv_type_scalar_common_1[7], (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_used_modules_0, parse_tree__equiv_type__V_41_41, parse_tree__equiv_type__Sel0_65, &parse_tree__equiv_type__Sel_66, ((MR_Box) (parse_tree__equiv_type__STATE_VARIABLE_EquivTypeInfo_23_23)), &parse_tree__equiv_type__conv6_STATE_VARIABLE_EquivTypeInfo_20, ((MR_Box) (parse_tree__equiv_type__STATE_VARIABLE_UsedModules_24_24)), &parse_tree__equiv_type__conv5_STATE_VARIABLE_UsedModules_22);
    }
#line 1535 "equiv_type.m"
    *parse_tree__equiv_type__STATE_VARIABLE_EquivTypeInfo_20 = ((MR_Word) parse_tree__equiv_type__conv6_STATE_VARIABLE_EquivTypeInfo_20);
#line 1535 "equiv_type.m"
    *parse_tree__equiv_type__STATE_VARIABLE_UsedModules_22 = ((MR_Word) parse_tree__equiv_type__conv5_STATE_VARIABLE_UsedModules_22);
#line 1537 "equiv_type.m"
    {
#line 1537 "equiv_type.m"
      parse_tree__equiv_type__SSB_16 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 1537 "equiv_type.m"
      MR_hl_field(MR_mktag(0), parse_tree__equiv_type__SSB_16, 0) = ((MR_Box) (parse_tree__equiv_type__Var_64));
#line 1537 "equiv_type.m"
      MR_hl_field(MR_mktag(0), parse_tree__equiv_type__SSB_16, 1) = ((MR_Box) (parse_tree__equiv_type__Sel_66));
#line 1537 "equiv_type.m"
    }
#line 1521 "equiv_type.m"
    {
#line 1521 "equiv_type.m"
      MR_Word base;
#line 1521 "equiv_type.m"
      base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 1521 "equiv_type.m"
      *parse_tree__equiv_type__HeadVar__5_5 = base;
#line 1521 "equiv_type.m"
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (parse_tree__equiv_type__SSA_15));
#line 1521 "equiv_type.m"
      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (parse_tree__equiv_type__SSB_16));
#line 1521 "equiv_type.m"
    }
#line 1521 "equiv_type.m"
  }
#line 1514 "equiv_type.m"
}

#line 1508 "equiv_type.m"
static void MR_CALL 
parse_tree__equiv_type__replace_in_structure_sharing_domain_9_p_0_1(
#line 1508 "equiv_type.m"
  MR_Box parse_tree__equiv_type__closure_arg,
#line 1508 "equiv_type.m"
  MR_Box parse_tree__equiv_type__wrapper_arg_1,
#line 1508 "equiv_type.m"
  MR_Box * parse_tree__equiv_type__wrapper_arg_2,
#line 1508 "equiv_type.m"
  MR_Box parse_tree__equiv_type__wrapper_arg_3,
#line 1508 "equiv_type.m"
  MR_Box * parse_tree__equiv_type__wrapper_arg_4,
#line 1508 "equiv_type.m"
  MR_Box parse_tree__equiv_type__wrapper_arg_5,
#line 1508 "equiv_type.m"
  MR_Box * parse_tree__equiv_type__wrapper_arg_6)
#line 1508 "equiv_type.m"
{
#line 1508 "equiv_type.m"
  {
#line 1508 "equiv_type.m"
    MR_Box parse_tree__equiv_type__closure = parse_tree__equiv_type__closure_arg;
#line 1508 "equiv_type.m"
    MR_Word parse_tree__equiv_type__conv2_HeadVar__5_5;
#line 1508 "equiv_type.m"
    MR_Word parse_tree__equiv_type__conv1_STATE_VARIABLE_EquivTypeInfo_20;
#line 1508 "equiv_type.m"
    MR_Word parse_tree__equiv_type__conv0_STATE_VARIABLE_UsedModules_22;

#line 1508 "equiv_type.m"
    {
#line 1508 "equiv_type.m"
      parse_tree__equiv_type__replace_in_structure_sharing_pair_9_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__equiv_type__closure, (MR_Integer) 3))), ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__equiv_type__closure, (MR_Integer) 4))), ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__equiv_type__closure, (MR_Integer) 5))), ((MR_Word) parse_tree__equiv_type__wrapper_arg_1), &parse_tree__equiv_type__conv2_HeadVar__5_5, ((MR_Word) parse_tree__equiv_type__wrapper_arg_3), &parse_tree__equiv_type__conv1_STATE_VARIABLE_EquivTypeInfo_20, ((MR_Word) parse_tree__equiv_type__wrapper_arg_5), &parse_tree__equiv_type__conv0_STATE_VARIABLE_UsedModules_22);
    }
#line 1508 "equiv_type.m"
    *parse_tree__equiv_type__wrapper_arg_2 = ((MR_Box) (parse_tree__equiv_type__conv2_HeadVar__5_5));
#line 1508 "equiv_type.m"
    *parse_tree__equiv_type__wrapper_arg_4 = ((MR_Box) (parse_tree__equiv_type__conv1_STATE_VARIABLE_EquivTypeInfo_20));
#line 1508 "equiv_type.m"
    *parse_tree__equiv_type__wrapper_arg_6 = ((MR_Box) (parse_tree__equiv_type__conv0_STATE_VARIABLE_UsedModules_22));
#line 1508 "equiv_type.m"
  }
#line 1508 "equiv_type.m"
}

#line 1492 "equiv_type.m"
static void MR_CALL 
parse_tree__equiv_type__replace_in_structure_sharing_domain_9_p_0(
#line 1492 "equiv_type.m"
  MR_Word parse_tree__equiv_type__MaybeRecord_10,
#line 1492 "equiv_type.m"
  MR_Word parse_tree__equiv_type__TypeEqvMap_11,
#line 1492 "equiv_type.m"
  MR_Word parse_tree__equiv_type__TVarSet_12,
#line 1492 "equiv_type.m"
  MR_Word parse_tree__equiv_type__SharingDomain0_13,
#line 1492 "equiv_type.m"
  MR_Word * parse_tree__equiv_type__SharingDomain_14,
#line 1492 "equiv_type.m"
  MR_Word parse_tree__equiv_type__STATE_VARIABLE_EquivTypeInfo_0_20,
#line 1492 "equiv_type.m"
  MR_Word * parse_tree__equiv_type__STATE_VARIABLE_EquivTypeInfo_21,
#line 1492 "equiv_type.m"
  MR_Word parse_tree__equiv_type__STATE_VARIABLE_UsedModules_0_22,
#line 1492 "equiv_type.m"
  MR_Word * parse_tree__equiv_type__STATE_VARIABLE_UsedModules_23)
#line 1492 "equiv_type.m"
{
#line 1503 "equiv_type.m"
  {
#line 1503 "equiv_type.m"
    MR_bool parse_tree__equiv_type__succeeded;

#line 1503 "equiv_type.m"
#line 1503 "equiv_type.m"
    switch (MR_tag((MR_Word) parse_tree__equiv_type__SharingDomain0_13)) {
#line 1503 "equiv_type.m"
      default: /*NOTREACHED*/ MR_assert(0);
#line 1503 "equiv_type.m"
      case (MR_Integer) 0:
#line 1503 "equiv_type.m"
        {
#line 1504 "equiv_type.m"
          *parse_tree__equiv_type__SharingDomain_14 = parse_tree__equiv_type__SharingDomain0_13;
#line 1503 "equiv_type.m"
          *parse_tree__equiv_type__STATE_VARIABLE_EquivTypeInfo_21 = parse_tree__equiv_type__STATE_VARIABLE_EquivTypeInfo_0_20;
#line 1503 "equiv_type.m"
          *parse_tree__equiv_type__STATE_VARIABLE_UsedModules_23 = parse_tree__equiv_type__STATE_VARIABLE_UsedModules_0_22;
#line 1503 "equiv_type.m"
        }
#line 1503 "equiv_type.m"
        break;
#line 1503 "equiv_type.m"
      case (MR_Integer) 1:
#line 1506 "equiv_type.m"
        {
#line 1506 "equiv_type.m"
          MR_Word parse_tree__equiv_type__TypeInfo_33_33;
#line 1506 "equiv_type.m"
          MR_Word parse_tree__equiv_type__SharingPairs0_18 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__equiv_type__SharingDomain0_13, (MR_Integer) 0)));
#line 1506 "equiv_type.m"
          MR_Word parse_tree__equiv_type__SharingPairs_19;
#line 1506 "equiv_type.m"
          MR_Word parse_tree__equiv_type__V_24_24;
#line 1507 "equiv_type.m"
          MR_Box parse_tree__equiv_type__conv4_STATE_VARIABLE_EquivTypeInfo_21;
#line 1507 "equiv_type.m"
          MR_Box parse_tree__equiv_type__conv3_STATE_VARIABLE_UsedModules_23;

#line 1508 "equiv_type.m"
          {
#line 1508 "equiv_type.m"
            parse_tree__equiv_type__V_24_24 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 6 * sizeof(MR_Word)), NULL, NULL);
#line 1508 "equiv_type.m"
            MR_hl_field(MR_mktag(0), parse_tree__equiv_type__V_24_24, 0) = ((MR_Box) (&parse_tree__equiv_type_scalar_common_6[0]));
#line 1508 "equiv_type.m"
            MR_hl_field(MR_mktag(0), parse_tree__equiv_type__V_24_24, 1) = ((MR_Box) (parse_tree__equiv_type__replace_in_structure_sharing_domain_9_p_0_1));
#line 1508 "equiv_type.m"
            MR_hl_field(MR_mktag(0), parse_tree__equiv_type__V_24_24, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 3));
#line 1508 "equiv_type.m"
            MR_hl_field(MR_mktag(0), parse_tree__equiv_type__V_24_24, 3) = ((MR_Box) (parse_tree__equiv_type__MaybeRecord_10));
#line 1508 "equiv_type.m"
            MR_hl_field(MR_mktag(0), parse_tree__equiv_type__V_24_24, 4) = ((MR_Box) (parse_tree__equiv_type__TypeEqvMap_11));
#line 1508 "equiv_type.m"
            MR_hl_field(MR_mktag(0), parse_tree__equiv_type__V_24_24, 5) = ((MR_Box) (parse_tree__equiv_type__TVarSet_12));
#line 1508 "equiv_type.m"
          }
#line 7255 "parse_tree.equiv_type.c"
          parse_tree__equiv_type__TypeInfo_33_33 = (MR_Word) &parse_tree__equiv_type_scalar_common_2[1];
#line 1507 "equiv_type.m"
          {
#line 1507 "equiv_type.m"
            mercury__list__map_foldl2_7_p_0(parse_tree__equiv_type__TypeInfo_33_33, parse_tree__equiv_type__TypeInfo_33_33, (MR_Word) &parse_tree__equiv_type_scalar_common_1[7], (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_used_modules_0, parse_tree__equiv_type__V_24_24, parse_tree__equiv_type__SharingPairs0_18, &parse_tree__equiv_type__SharingPairs_19, ((MR_Box) (parse_tree__equiv_type__STATE_VARIABLE_EquivTypeInfo_0_20)), &parse_tree__equiv_type__conv4_STATE_VARIABLE_EquivTypeInfo_21, ((MR_Box) (parse_tree__equiv_type__STATE_VARIABLE_UsedModules_0_22)), &parse_tree__equiv_type__conv3_STATE_VARIABLE_UsedModules_23);
          }
#line 1507 "equiv_type.m"
          *parse_tree__equiv_type__STATE_VARIABLE_EquivTypeInfo_21 = ((MR_Word) parse_tree__equiv_type__conv4_STATE_VARIABLE_EquivTypeInfo_21);
#line 1507 "equiv_type.m"
          *parse_tree__equiv_type__STATE_VARIABLE_UsedModules_23 = ((MR_Word) parse_tree__equiv_type__conv3_STATE_VARIABLE_UsedModules_23);
#line 1511 "equiv_type.m"
          {
#line 1511 "equiv_type.m"
            MR_Word base;
#line 1511 "equiv_type.m"
            base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 1511 "equiv_type.m"
            *parse_tree__equiv_type__SharingDomain_14 = base;
#line 1511 "equiv_type.m"
            MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (parse_tree__equiv_type__SharingPairs_19));
#line 1511 "equiv_type.m"
          }
#line 1506 "equiv_type.m"
        }
#line 1503 "equiv_type.m"
        break;
#line 1503 "equiv_type.m"
      case (MR_Integer) 2:
#line 1503 "equiv_type.m"
        {
#line 1504 "equiv_type.m"
          *parse_tree__equiv_type__SharingDomain_14 = parse_tree__equiv_type__SharingDomain0_13;
#line 1503 "equiv_type.m"
          *parse_tree__equiv_type__STATE_VARIABLE_EquivTypeInfo_21 = parse_tree__equiv_type__STATE_VARIABLE_EquivTypeInfo_0_20;
#line 1503 "equiv_type.m"
          *parse_tree__equiv_type__STATE_VARIABLE_UsedModules_23 = parse_tree__equiv_type__STATE_VARIABLE_UsedModules_0_22;
#line 1503 "equiv_type.m"
        }
#line 1503 "equiv_type.m"
        break;
#line 1503 "equiv_type.m"
    }
#line 1503 "equiv_type.m"
  }
#line 1492 "equiv_type.m"
}

#line 1475 "equiv_type.m"
static void MR_CALL 
parse_tree__equiv_type__replace_in_tm_10_p_0(
#line 1475 "equiv_type.m"
  MR_Word parse_tree__equiv_type__MaybeRecord_1,
#line 1475 "equiv_type.m"
  MR_Word parse_tree__equiv_type__TypeEqvMap_2,
#line 1475 "equiv_type.m"
  MR_Word parse_tree__equiv_type__HeadVar__3_3,
#line 1475 "equiv_type.m"
  MR_Word * parse_tree__equiv_type__HeadVar__4_4,
#line 1475 "equiv_type.m"
  MR_Word parse_tree__equiv_type__STATE_VARIABLE_VarSet_0_5,
#line 1475 "equiv_type.m"
  MR_Word * parse_tree__equiv_type__STATE_VARIABLE_VarSet_6,
#line 1475 "equiv_type.m"
  MR_Word parse_tree__equiv_type__STATE_VARIABLE_EquivTypeInfo_0_7,
#line 1475 "equiv_type.m"
  MR_Word * parse_tree__equiv_type__STATE_VARIABLE_EquivTypeInfo_8,
#line 1475 "equiv_type.m"
  MR_Word parse_tree__equiv_type__STATE_VARIABLE_UsedModules_0_9,
#line 1475 "equiv_type.m"
  MR_Word * parse_tree__equiv_type__STATE_VARIABLE_UsedModules_10)
#line 1475 "equiv_type.m"
{
#line 1481 "equiv_type.m"
  {
#line 1481 "equiv_type.m"
    MR_bool parse_tree__equiv_type__succeeded;

#line 1481 "equiv_type.m"
    if (((MR_tag((MR_Word) parse_tree__equiv_type__HeadVar__3_3)) == (MR_mktag((MR_Integer) 1))))
#line 1486 "equiv_type.m"
      {
#line 1486 "equiv_type.m"
        MR_Word parse_tree__equiv_type__Type0_30 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__equiv_type__HeadVar__3_3, (MR_Integer) 0)));
#line 1486 "equiv_type.m"
        MR_Word parse_tree__equiv_type__Mode_31 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__equiv_type__HeadVar__3_3, (MR_Integer) 1)));
#line 1486 "equiv_type.m"
        MR_Word parse_tree__equiv_type__Type_32;
#line 1090 "equiv_type.m"
        MR_Word parse_tree__equiv_type__V_36_36;
#line 1090 "equiv_type.m"
        MR_Word parse_tree__equiv_type__V_60_60;

#line 1090 "equiv_type.m"
        {
#line 1090 "equiv_type.m"
          parse_tree__equiv_type__replace_in_type_maybe_record_use_2_13_p_0(parse_tree__equiv_type__MaybeRecord_1, parse_tree__equiv_type__TypeEqvMap_2, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), parse_tree__equiv_type__Type0_30, &parse_tree__equiv_type__Type_32, &parse_tree__equiv_type__V_36_36, &parse_tree__equiv_type__V_60_60, parse_tree__equiv_type__STATE_VARIABLE_VarSet_0_5, parse_tree__equiv_type__STATE_VARIABLE_VarSet_6, parse_tree__equiv_type__STATE_VARIABLE_EquivTypeInfo_0_7, parse_tree__equiv_type__STATE_VARIABLE_EquivTypeInfo_8, parse_tree__equiv_type__STATE_VARIABLE_UsedModules_0_9, parse_tree__equiv_type__STATE_VARIABLE_UsedModules_10);
        }
#line 1486 "equiv_type.m"
        {
#line 1486 "equiv_type.m"
          MR_Word base;
#line 1486 "equiv_type.m"
          base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1486 "equiv_type.m"
          *parse_tree__equiv_type__HeadVar__4_4 = base;
#line 1486 "equiv_type.m"
          MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (parse_tree__equiv_type__Type_32));
#line 1486 "equiv_type.m"
          MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (parse_tree__equiv_type__Mode_31));
#line 1486 "equiv_type.m"
        }
#line 1486 "equiv_type.m"
      }
#line 1481 "equiv_type.m"
    else
#line 1481 "equiv_type.m"
      {
#line 1481 "equiv_type.m"
        MR_Word parse_tree__equiv_type__Type0_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__equiv_type__HeadVar__3_3, (MR_Integer) 0)));
#line 1481 "equiv_type.m"
        MR_Word parse_tree__equiv_type__Type_14;
#line 1090 "equiv_type.m"
        MR_Word parse_tree__equiv_type__V_18_18;
#line 1090 "equiv_type.m"
        MR_Word parse_tree__equiv_type__V_79_79;

#line 1090 "equiv_type.m"
        {
#line 1090 "equiv_type.m"
          parse_tree__equiv_type__replace_in_type_maybe_record_use_2_13_p_0(parse_tree__equiv_type__MaybeRecord_1, parse_tree__equiv_type__TypeEqvMap_2, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), parse_tree__equiv_type__Type0_13, &parse_tree__equiv_type__Type_14, &parse_tree__equiv_type__V_18_18, &parse_tree__equiv_type__V_79_79, parse_tree__equiv_type__STATE_VARIABLE_VarSet_0_5, parse_tree__equiv_type__STATE_VARIABLE_VarSet_6, parse_tree__equiv_type__STATE_VARIABLE_EquivTypeInfo_0_7, parse_tree__equiv_type__STATE_VARIABLE_EquivTypeInfo_8, parse_tree__equiv_type__STATE_VARIABLE_UsedModules_0_9, parse_tree__equiv_type__STATE_VARIABLE_UsedModules_10);
        }
#line 1481 "equiv_type.m"
        {
#line 1481 "equiv_type.m"
          MR_Word base;
#line 1481 "equiv_type.m"
          base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 1481 "equiv_type.m"
          *parse_tree__equiv_type__HeadVar__4_4 = base;
#line 1481 "equiv_type.m"
          MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (parse_tree__equiv_type__Type_14));
#line 1481 "equiv_type.m"
        }
#line 1481 "equiv_type.m"
      }
#line 1481 "equiv_type.m"
  }
#line 1475 "equiv_type.m"
}

#line 1472 "equiv_type.m"
static void MR_CALL 
parse_tree__equiv_type__replace_in_tms_10_p_0_1(
#line 1472 "equiv_type.m"
  MR_Box parse_tree__equiv_type__closure_arg,
#line 1472 "equiv_type.m"
  MR_Box parse_tree__equiv_type__wrapper_arg_1,
#line 1472 "equiv_type.m"
  MR_Box * parse_tree__equiv_type__wrapper_arg_2,
#line 1472 "equiv_type.m"
  MR_Box parse_tree__equiv_type__wrapper_arg_3,
#line 1472 "equiv_type.m"
  MR_Box * parse_tree__equiv_type__wrapper_arg_4,
#line 1472 "equiv_type.m"
  MR_Box parse_tree__equiv_type__wrapper_arg_5,
#line 1472 "equiv_type.m"
  MR_Box * parse_tree__equiv_type__wrapper_arg_6,
#line 1472 "equiv_type.m"
  MR_Box parse_tree__equiv_type__wrapper_arg_7,
#line 1472 "equiv_type.m"
  MR_Box * parse_tree__equiv_type__wrapper_arg_8)
#line 1472 "equiv_type.m"
{
#line 1472 "equiv_type.m"
  {
#line 1472 "equiv_type.m"
    MR_Box parse_tree__equiv_type__closure = parse_tree__equiv_type__closure_arg;
#line 1472 "equiv_type.m"
    MR_Word parse_tree__equiv_type__conv3_HeadVar__4_4;
#line 1472 "equiv_type.m"
    MR_Word parse_tree__equiv_type__conv2_STATE_VARIABLE_VarSet_6;
#line 1472 "equiv_type.m"
    MR_Word parse_tree__equiv_type__conv1_STATE_VARIABLE_EquivTypeInfo_8;
#line 1472 "equiv_type.m"
    MR_Word parse_tree__equiv_type__conv0_STATE_VARIABLE_UsedModules_10;

#line 1472 "equiv_type.m"
    {
#line 1472 "equiv_type.m"
      parse_tree__equiv_type__replace_in_tm_10_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__equiv_type__closure, (MR_Integer) 3))), ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__equiv_type__closure, (MR_Integer) 4))), ((MR_Word) parse_tree__equiv_type__wrapper_arg_1), &parse_tree__equiv_type__conv3_HeadVar__4_4, ((MR_Word) parse_tree__equiv_type__wrapper_arg_3), &parse_tree__equiv_type__conv2_STATE_VARIABLE_VarSet_6, ((MR_Word) parse_tree__equiv_type__wrapper_arg_5), &parse_tree__equiv_type__conv1_STATE_VARIABLE_EquivTypeInfo_8, ((MR_Word) parse_tree__equiv_type__wrapper_arg_7), &parse_tree__equiv_type__conv0_STATE_VARIABLE_UsedModules_10);
    }
#line 1472 "equiv_type.m"
    *parse_tree__equiv_type__wrapper_arg_2 = ((MR_Box) (parse_tree__equiv_type__conv3_HeadVar__4_4));
#line 1472 "equiv_type.m"
    *parse_tree__equiv_type__wrapper_arg_4 = ((MR_Box) (parse_tree__equiv_type__conv2_STATE_VARIABLE_VarSet_6));
#line 1472 "equiv_type.m"
    *parse_tree__equiv_type__wrapper_arg_6 = ((MR_Box) (parse_tree__equiv_type__conv1_STATE_VARIABLE_EquivTypeInfo_8));
#line 1472 "equiv_type.m"
    *parse_tree__equiv_type__wrapper_arg_8 = ((MR_Box) (parse_tree__equiv_type__conv0_STATE_VARIABLE_UsedModules_10));
#line 1472 "equiv_type.m"
  }
#line 1472 "equiv_type.m"
}

#line 1465 "equiv_type.m"
static void MR_CALL 
parse_tree__equiv_type__replace_in_tms_10_p_0(
#line 1465 "equiv_type.m"
  MR_Word parse_tree__equiv_type__MaybeRecord_11,
#line 1465 "equiv_type.m"
  MR_Word parse_tree__equiv_type__TypeEqvMap_12,
#line 1465 "equiv_type.m"
  MR_Word parse_tree__equiv_type__STATE_VARIABLE_TMs_0_17,
#line 1465 "equiv_type.m"
  MR_Word * parse_tree__equiv_type__STATE_VARIABLE_TMs_18,
#line 1465 "equiv_type.m"
  MR_Word parse_tree__equiv_type__STATE_VARIABLE_VarSet_0_19,
#line 1465 "equiv_type.m"
  MR_Word * parse_tree__equiv_type__STATE_VARIABLE_VarSet_20,
#line 1465 "equiv_type.m"
  MR_Word parse_tree__equiv_type__STATE_VARIABLE_EquivTypeInfo_0_21,
#line 1465 "equiv_type.m"
  MR_Word * parse_tree__equiv_type__STATE_VARIABLE_EquivTypeInfo_22,
#line 1465 "equiv_type.m"
  MR_Word parse_tree__equiv_type__STATE_VARIABLE_UsedModules_0_23,
#line 1465 "equiv_type.m"
  MR_Word * parse_tree__equiv_type__STATE_VARIABLE_UsedModules_24)
#line 1465 "equiv_type.m"
{
#line 1471 "equiv_type.m"
  {
#line 1471 "equiv_type.m"
    MR_bool parse_tree__equiv_type__succeeded;
#line 1471 "equiv_type.m"
    MR_Word parse_tree__equiv_type__TypeCtorInfo_38_38;
#line 1471 "equiv_type.m"
    MR_Word parse_tree__equiv_type__V_25_25;
#line 1472 "equiv_type.m"
    MR_Box parse_tree__equiv_type__conv6_STATE_VARIABLE_VarSet_20;
#line 1472 "equiv_type.m"
    MR_Box parse_tree__equiv_type__conv5_STATE_VARIABLE_EquivTypeInfo_22;
#line 1472 "equiv_type.m"
    MR_Box parse_tree__equiv_type__conv4_STATE_VARIABLE_UsedModules_24;

#line 1472 "equiv_type.m"
    {
#line 1472 "equiv_type.m"
      parse_tree__equiv_type__V_25_25 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
#line 1472 "equiv_type.m"
      MR_hl_field(MR_mktag(0), parse_tree__equiv_type__V_25_25, 0) = ((MR_Box) (&parse_tree__equiv_type_scalar_common_3[2]));
#line 1472 "equiv_type.m"
      MR_hl_field(MR_mktag(0), parse_tree__equiv_type__V_25_25, 1) = ((MR_Box) (parse_tree__equiv_type__replace_in_tms_10_p_0_1));
#line 1472 "equiv_type.m"
      MR_hl_field(MR_mktag(0), parse_tree__equiv_type__V_25_25, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
#line 1472 "equiv_type.m"
      MR_hl_field(MR_mktag(0), parse_tree__equiv_type__V_25_25, 3) = ((MR_Box) (parse_tree__equiv_type__MaybeRecord_11));
#line 1472 "equiv_type.m"
      MR_hl_field(MR_mktag(0), parse_tree__equiv_type__V_25_25, 4) = ((MR_Box) (parse_tree__equiv_type__TypeEqvMap_12));
#line 1472 "equiv_type.m"
    }
#line 7516 "parse_tree.equiv_type.c"
    parse_tree__equiv_type__TypeCtorInfo_38_38 = (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_type_and_mode_0;
#line 1472 "equiv_type.m"
    {
#line 1472 "equiv_type.m"
      mercury__list__map_foldl3_9_p_1(parse_tree__equiv_type__TypeCtorInfo_38_38, parse_tree__equiv_type__TypeCtorInfo_38_38, (MR_Word) &parse_tree__equiv_type_scalar_common_1[6], (MR_Word) &parse_tree__equiv_type_scalar_common_1[7], (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_used_modules_0, parse_tree__equiv_type__V_25_25, parse_tree__equiv_type__STATE_VARIABLE_TMs_0_17, parse_tree__equiv_type__STATE_VARIABLE_TMs_18, ((MR_Box) (parse_tree__equiv_type__STATE_VARIABLE_VarSet_0_19)), &parse_tree__equiv_type__conv6_STATE_VARIABLE_VarSet_20, ((MR_Box) (parse_tree__equiv_type__STATE_VARIABLE_EquivTypeInfo_0_21)), &parse_tree__equiv_type__conv5_STATE_VARIABLE_EquivTypeInfo_22, ((MR_Box) (parse_tree__equiv_type__STATE_VARIABLE_UsedModules_0_23)), &parse_tree__equiv_type__conv4_STATE_VARIABLE_UsedModules_24);
    }
#line 1472 "equiv_type.m"
    *parse_tree__equiv_type__STATE_VARIABLE_VarSet_20 = ((MR_Word) parse_tree__equiv_type__conv6_STATE_VARIABLE_VarSet_20);
#line 1472 "equiv_type.m"
    *parse_tree__equiv_type__STATE_VARIABLE_EquivTypeInfo_22 = ((MR_Word) parse_tree__equiv_type__conv5_STATE_VARIABLE_EquivTypeInfo_22);
#line 1472 "equiv_type.m"
    *parse_tree__equiv_type__STATE_VARIABLE_UsedModules_24 = ((MR_Word) parse_tree__equiv_type__conv4_STATE_VARIABLE_UsedModules_24);
#line 1471 "equiv_type.m"
  }
#line 1465 "equiv_type.m"
}

#line 1357 "equiv_type.m"
static MR_Box MR_CALL 
parse_tree__equiv_type__replace_in_pred_type_23_p_0_2(
#line 1357 "equiv_type.m"
  MR_Box parse_tree__equiv_type__closure_arg,
#line 1357 "equiv_type.m"
  MR_Box parse_tree__equiv_type__wrapper_arg_1)
#line 1357 "equiv_type.m"
{
#line 1357 "equiv_type.m"
  {
#line 1357 "equiv_type.m"
    MR_Box parse_tree__equiv_type__wrapper_arg_2;
#line 1357 "equiv_type.m"
    MR_Box parse_tree__equiv_type__closure = parse_tree__equiv_type__closure_arg;
#line 1357 "equiv_type.m"
    MR_Word parse_tree__equiv_type__conv1_HeadVar__2_135;

#line 1357 "equiv_type.m"
    {
#line 1357 "equiv_type.m"
      parse_tree__equiv_type__conv1_HeadVar__2_135 = parse_tree__equiv_type__IntroducedFrom__func__replace_in_pred_type__1357__1_1_f_0(((MR_Word) parse_tree__equiv_type__wrapper_arg_1));
    }
#line 1357 "equiv_type.m"
    parse_tree__equiv_type__wrapper_arg_2 = ((MR_Box) (parse_tree__equiv_type__conv1_HeadVar__2_135));
#line 1357 "equiv_type.m"
    return parse_tree__equiv_type__wrapper_arg_2;
#line 1357 "equiv_type.m"
  }
#line 1357 "equiv_type.m"
}

#line 1350 "equiv_type.m"
static MR_Box MR_CALL 
parse_tree__equiv_type__replace_in_pred_type_23_p_0_1(
#line 1350 "equiv_type.m"
  MR_Box parse_tree__equiv_type__closure_arg,
#line 1350 "equiv_type.m"
  MR_Box parse_tree__equiv_type__wrapper_arg_1)
#line 1350 "equiv_type.m"
{
#line 1350 "equiv_type.m"
  {
#line 1350 "equiv_type.m"
    MR_Box parse_tree__equiv_type__wrapper_arg_2;
#line 1350 "equiv_type.m"
    MR_Box parse_tree__equiv_type__closure = parse_tree__equiv_type__closure_arg;
#line 1350 "equiv_type.m"
    MR_Word parse_tree__equiv_type__conv0_HeadVar__2_166;

#line 1350 "equiv_type.m"
    {
#line 1350 "equiv_type.m"
      parse_tree__equiv_type__conv0_HeadVar__2_166 = parse_tree__equiv_type__IntroducedFrom__func__replace_in_pred_type__1350__1_1_f_0(((MR_Word) parse_tree__equiv_type__wrapper_arg_1));
    }
#line 1350 "equiv_type.m"
    parse_tree__equiv_type__wrapper_arg_2 = ((MR_Box) (parse_tree__equiv_type__conv0_HeadVar__2_166));
#line 1350 "equiv_type.m"
    return parse_tree__equiv_type__wrapper_arg_2;
#line 1350 "equiv_type.m"
  }
#line 1350 "equiv_type.m"
}

#line 1290 "equiv_type.m"
static void MR_CALL 
parse_tree__equiv_type__replace_in_pred_type_23_p_0(
#line 1290 "equiv_type.m"
  MR_Word parse_tree__equiv_type__MaybeRecord_24,
#line 1290 "equiv_type.m"
  MR_Word parse_tree__equiv_type__PredName_25,
#line 1290 "equiv_type.m"
  MR_Word parse_tree__equiv_type__PredOrFunc_26,
#line 1290 "equiv_type.m"
  MR_Word parse_tree__equiv_type__Context_27,
#line 1290 "equiv_type.m"
  MR_Word parse_tree__equiv_type__TypeEqvMap_28,
#line 1290 "equiv_type.m"
  MR_Word parse_tree__equiv_type__InstEqvMap_29,
#line 1290 "equiv_type.m"
  MR_Word parse_tree__equiv_type__ClassContext0_30,
#line 1290 "equiv_type.m"
  MR_Word * parse_tree__equiv_type__ClassContext_31,
#line 1290 "equiv_type.m"
  MR_Word parse_tree__equiv_type__TypesAndModes0_32,
#line 1290 "equiv_type.m"
  MR_Word * parse_tree__equiv_type__TypesAndModes_33,
#line 1290 "equiv_type.m"
  MR_Word parse_tree__equiv_type__STATE_VARIABLE_TypeVarSet_0_74,
#line 1290 "equiv_type.m"
  MR_Word * parse_tree__equiv_type__STATE_VARIABLE_TypeVarSet_75,
#line 1290 "equiv_type.m"
  MR_Word parse_tree__equiv_type__MaybeWithType0_35,
#line 1290 "equiv_type.m"
  MR_Word * parse_tree__equiv_type__MaybeWithType_36,
#line 1290 "equiv_type.m"
  MR_Word parse_tree__equiv_type__MaybeWithInst0_37,
#line 1290 "equiv_type.m"
  MR_Word * parse_tree__equiv_type__MaybeWithInst_38,
#line 1290 "equiv_type.m"
  MR_Word parse_tree__equiv_type__STATE_VARIABLE_MaybeDetism_0_76,
#line 1290 "equiv_type.m"
  MR_Word * parse_tree__equiv_type__STATE_VARIABLE_MaybeDetism_77,
#line 1290 "equiv_type.m"
  MR_Word parse_tree__equiv_type__STATE_VARIABLE_EquivTypeInfo_0_78,
#line 1290 "equiv_type.m"
  MR_Word * parse_tree__equiv_type__STATE_VARIABLE_EquivTypeInfo_79,
#line 1290 "equiv_type.m"
  MR_Word parse_tree__equiv_type__STATE_VARIABLE_UsedModules_0_80,
#line 1290 "equiv_type.m"
  MR_Word * parse_tree__equiv_type__STATE_VARIABLE_UsedModules_81,
#line 1290 "equiv_type.m"
  MR_Word * parse_tree__equiv_type__STATE_VARIABLE_Specs_82)
#line 1290 "equiv_type.m"
{
#line 1305 "equiv_type.m"
  {
#line 1305 "equiv_type.m"
    MR_bool parse_tree__equiv_type__succeeded;
#line 1305 "equiv_type.m"
    MR_Word parse_tree__equiv_type__TypeCtorInfo_174_174;
#line 1305 "equiv_type.m"
    MR_Word parse_tree__equiv_type__TypesAndModes1_43;
#line 1305 "equiv_type.m"
    MR_Word parse_tree__equiv_type__ExtraTypes_50;
#line 1305 "equiv_type.m"
    MR_Word parse_tree__equiv_type__ExtraModes_54;
#line 1305 "equiv_type.m"
    MR_Word parse_tree__equiv_type__ModeSpecs_57;
#line 1305 "equiv_type.m"
    MR_Word parse_tree__equiv_type__ExtraTypesAndModes_60;
#line 1305 "equiv_type.m"
    MR_Word parse_tree__equiv_type__STATE_VARIABLE_TypeVarSet_83_83;
#line 1305 "equiv_type.m"
    MR_Word parse_tree__equiv_type__STATE_VARIABLE_EquivTypeInfo_84_84;
#line 1305 "equiv_type.m"
    MR_Word parse_tree__equiv_type__STATE_VARIABLE_UsedModules_85_85;
#line 1305 "equiv_type.m"
    MR_Word parse_tree__equiv_type__STATE_VARIABLE_TypeVarSet_86_86;
#line 1305 "equiv_type.m"
    MR_Word parse_tree__equiv_type__STATE_VARIABLE_EquivTypeInfo_87_87;
#line 1305 "equiv_type.m"
    MR_Word parse_tree__equiv_type__STATE_VARIABLE_UsedModules_88_88;
#line 1305 "equiv_type.m"
    MR_Word parse_tree__equiv_type__STATE_VARIABLE_EquivTypeInfo_91_91;
#line 1305 "equiv_type.m"
    MR_Word parse_tree__equiv_type__STATE_VARIABLE_UsedModules_92_92;
#line 1305 "equiv_type.m"
    MR_Word parse_tree__equiv_type__STATE_VARIABLE_Specs_93_93;
#line 1305 "equiv_type.m"
    MR_Integer parse_tree__equiv_type__V_125_125;
#line 1305 "equiv_type.m"
    MR_Word parse_tree__equiv_type__V_127_127;
#line 1305 "equiv_type.m"
    MR_Word parse_tree__equiv_type__STATE_VARIABLE_EquivTypeInfo_129_129;
#line 1305 "equiv_type.m"
    MR_Word parse_tree__equiv_type__STATE_VARIABLE_Specs_131_131;
#line 1337 "equiv_type.m"
    MR_Word parse_tree__equiv_type__V_55_55;
#line 1337 "equiv_type.m"
    MR_Word parse_tree__equiv_type__V_56_56;

#line 1306 "equiv_type.m"
    {
#line 1306 "equiv_type.m"
      parse_tree__equiv_type__replace_in_prog_constraints_location_10_p_0(parse_tree__equiv_type__MaybeRecord_24, parse_tree__equiv_type__TypeEqvMap_28, parse_tree__equiv_type__ClassContext0_30, parse_tree__equiv_type__ClassContext_31, parse_tree__equiv_type__STATE_VARIABLE_TypeVarSet_0_74, &parse_tree__equiv_type__STATE_VARIABLE_TypeVarSet_83_83, parse_tree__equiv_type__STATE_VARIABLE_EquivTypeInfo_0_78, &parse_tree__equiv_type__STATE_VARIABLE_EquivTypeInfo_84_84, parse_tree__equiv_type__STATE_VARIABLE_UsedModules_0_80, &parse_tree__equiv_type__STATE_VARIABLE_UsedModules_85_85);
    }
#line 1309 "equiv_type.m"
    {
#line 1309 "equiv_type.m"
      parse_tree__equiv_type__replace_in_tms_10_p_0(parse_tree__equiv_type__MaybeRecord_24, parse_tree__equiv_type__TypeEqvMap_28, parse_tree__equiv_type__TypesAndModes0_32, &parse_tree__equiv_type__TypesAndModes1_43, parse_tree__equiv_type__STATE_VARIABLE_TypeVarSet_83_83, &parse_tree__equiv_type__STATE_VARIABLE_TypeVarSet_86_86, parse_tree__equiv_type__STATE_VARIABLE_EquivTypeInfo_84_84, &parse_tree__equiv_type__STATE_VARIABLE_EquivTypeInfo_87_87, parse_tree__equiv_type__STATE_VARIABLE_UsedModules_85_85, &parse_tree__equiv_type__STATE_VARIABLE_UsedModules_88_88);
    }
#line 1331 "equiv_type.m"
    if ((parse_tree__equiv_type__MaybeWithType0_35 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 1332 "equiv_type.m"
      {
#line 1333 "equiv_type.m"
        parse_tree__equiv_type__ExtraTypes_50 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 1334 "equiv_type.m"
        parse_tree__equiv_type__STATE_VARIABLE_Specs_93_93 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 1332 "equiv_type.m"
        *parse_tree__equiv_type__STATE_VARIABLE_TypeVarSet_75 = parse_tree__equiv_type__STATE_VARIABLE_TypeVarSet_86_86;
#line 1332 "equiv_type.m"
        parse_tree__equiv_type__STATE_VARIABLE_EquivTypeInfo_91_91 = parse_tree__equiv_type__STATE_VARIABLE_EquivTypeInfo_87_87;
#line 1332 "equiv_type.m"
        parse_tree__equiv_type__STATE_VARIABLE_UsedModules_92_92 = parse_tree__equiv_type__STATE_VARIABLE_UsedModules_88_88;
#line 1332 "equiv_type.m"
      }
#line 1331 "equiv_type.m"
    else
#line 1312 "equiv_type.m"
      {
#line 1312 "equiv_type.m"
        MR_Word parse_tree__equiv_type__WithType0_44 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__equiv_type__MaybeWithType0_35, (MR_Integer) 0)));
#line 1312 "equiv_type.m"
        MR_Word parse_tree__equiv_type__WithType_45;
#line 1313 "equiv_type.m"
        MR_Word parse_tree__equiv_type__V_46_46;
#line 1321 "equiv_type.m"
        MR_Word parse_tree__equiv_type__ExtraTypesPrime_49;
#line 1316 "equiv_type.m"
        MR_Word parse_tree__equiv_type__V_182_182;
#line 1316 "equiv_type.m"
        MR_Word parse_tree__equiv_type___Purity_47;

#line 1313 "equiv_type.m"
        {
#line 1313 "equiv_type.m"
          parse_tree__equiv_type__replace_in_type_maybe_record_use_11_p_0(parse_tree__equiv_type__MaybeRecord_24, parse_tree__equiv_type__TypeEqvMap_28, parse_tree__equiv_type__WithType0_44, &parse_tree__equiv_type__WithType_45, &parse_tree__equiv_type__V_46_46, parse_tree__equiv_type__STATE_VARIABLE_TypeVarSet_86_86, parse_tree__equiv_type__STATE_VARIABLE_TypeVarSet_75, parse_tree__equiv_type__STATE_VARIABLE_EquivTypeInfo_87_87, &parse_tree__equiv_type__STATE_VARIABLE_EquivTypeInfo_91_91, parse_tree__equiv_type__STATE_VARIABLE_UsedModules_88_88, &parse_tree__equiv_type__STATE_VARIABLE_UsedModules_92_92);
        }
#line 1316 "equiv_type.m"
        {
#line 1316 "equiv_type.m"
          parse_tree__equiv_type__succeeded = parse_tree__prog_type__type_is_higher_order_details_5_p_0(parse_tree__equiv_type__WithType_45, &parse_tree__equiv_type___Purity_47, &parse_tree__equiv_type__V_182_182, &parse_tree__equiv_type__ExtraTypesPrime_49);
        }
#line 1316 "equiv_type.m"
        if (parse_tree__equiv_type__succeeded)
#line 1316 "equiv_type.m"
          parse_tree__equiv_type__succeeded = (parse_tree__equiv_type__PredOrFunc_26 == parse_tree__equiv_type__V_182_182);
#line 1321 "equiv_type.m"
        if (parse_tree__equiv_type__succeeded)
#line 1319 "equiv_type.m"
          {
#line 1319 "equiv_type.m"
            parse_tree__equiv_type__ExtraTypes_50 = parse_tree__equiv_type__ExtraTypesPrime_49;
#line 1320 "equiv_type.m"
            parse_tree__equiv_type__STATE_VARIABLE_Specs_93_93 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 1319 "equiv_type.m"
          }
#line 1321 "equiv_type.m"
        else
#line 1322 "equiv_type.m"
          {
#line 1322 "equiv_type.m"
            MR_Word parse_tree__equiv_type__Pieces1_51;
#line 1322 "equiv_type.m"
            MR_Word parse_tree__equiv_type__Msg1_52;
#line 1322 "equiv_type.m"
            MR_Word parse_tree__equiv_type__Spec1_53;
#line 1322 "equiv_type.m"
            MR_Word parse_tree__equiv_type__V_96_96;
#line 1322 "equiv_type.m"
            MR_Word parse_tree__equiv_type__V_97_97;
#line 1322 "equiv_type.m"
            MR_Word parse_tree__equiv_type__V_98_98;
#line 1322 "equiv_type.m"
            MR_Word parse_tree__equiv_type__V_99_99;
#line 1322 "equiv_type.m"
            MR_Word parse_tree__equiv_type__V_100_100;
#line 1322 "equiv_type.m"
            MR_Word parse_tree__equiv_type__V_103_103;
#line 1322 "equiv_type.m"
            MR_Word parse_tree__equiv_type__V_105_105;
#line 1322 "equiv_type.m"
            MR_Word parse_tree__equiv_type__V_108_108;
#line 1322 "equiv_type.m"
            MR_Word parse_tree__equiv_type__V_116_116;
#line 1322 "equiv_type.m"
            MR_Word parse_tree__equiv_type__V_117_117;
#line 1322 "equiv_type.m"
            MR_Word parse_tree__equiv_type__V_121_121;

#line 1322 "equiv_type.m"
            parse_tree__equiv_type__ExtraTypes_50 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 1324 "equiv_type.m"
            {
#line 1324 "equiv_type.m"
              parse_tree__equiv_type__V_97_97 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1324 "equiv_type.m"
              MR_hl_field(MR_mktag(3), parse_tree__equiv_type__V_97_97, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 11));
#line 1324 "equiv_type.m"
              MR_hl_field(MR_mktag(3), parse_tree__equiv_type__V_97_97, 1) = ((MR_Box) (parse_tree__equiv_type__PredOrFunc_26));
#line 1324 "equiv_type.m"
            }
#line 1324 "equiv_type.m"
            {
#line 1324 "equiv_type.m"
              parse_tree__equiv_type__V_99_99 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1324 "equiv_type.m"
              MR_hl_field(MR_mktag(3), parse_tree__equiv_type__V_99_99, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 7));
#line 1324 "equiv_type.m"
              MR_hl_field(MR_mktag(3), parse_tree__equiv_type__V_99_99, 1) = ((MR_Box) (parse_tree__equiv_type__PredName_25));
#line 1324 "equiv_type.m"
            }
#line 1325 "equiv_type.m"
            {
#line 1325 "equiv_type.m"
              parse_tree__equiv_type__V_108_108 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1325 "equiv_type.m"
              MR_hl_field(MR_mktag(1), parse_tree__equiv_type__V_108_108, 0) = ((MR_Box) (parse_tree__equiv_type__V_97_97));
#line 1325 "equiv_type.m"
              MR_hl_field(MR_mktag(1), parse_tree__equiv_type__V_108_108, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__equiv_type_scalar_common_1[16])));
#line 1325 "equiv_type.m"
            }
#line 1325 "equiv_type.m"
            {
#line 1325 "equiv_type.m"
              parse_tree__equiv_type__V_105_105 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1325 "equiv_type.m"
              MR_hl_field(MR_mktag(1), parse_tree__equiv_type__V_105_105, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__equiv_type_scalar_common_1[33])));
#line 1325 "equiv_type.m"
              MR_hl_field(MR_mktag(1), parse_tree__equiv_type__V_105_105, 1) = ((MR_Box) (parse_tree__equiv_type__V_108_108));
#line 1325 "equiv_type.m"
            }
#line 1324 "equiv_type.m"
            {
#line 1324 "equiv_type.m"
              parse_tree__equiv_type__V_103_103 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1324 "equiv_type.m"
              MR_hl_field(MR_mktag(1), parse_tree__equiv_type__V_103_103, 0) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 1))));
#line 1324 "equiv_type.m"
              MR_hl_field(MR_mktag(1), parse_tree__equiv_type__V_103_103, 1) = ((MR_Box) (parse_tree__equiv_type__V_105_105));
#line 1324 "equiv_type.m"
            }
#line 1324 "equiv_type.m"
            {
#line 1324 "equiv_type.m"
              parse_tree__equiv_type__V_100_100 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1324 "equiv_type.m"
              MR_hl_field(MR_mktag(1), parse_tree__equiv_type__V_100_100, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__equiv_type_scalar_common_1[32])));
#line 1324 "equiv_type.m"
              MR_hl_field(MR_mktag(1), parse_tree__equiv_type__V_100_100, 1) = ((MR_Box) (parse_tree__equiv_type__V_103_103));
#line 1324 "equiv_type.m"
            }
#line 1324 "equiv_type.m"
            {
#line 1324 "equiv_type.m"
              parse_tree__equiv_type__V_98_98 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1324 "equiv_type.m"
              MR_hl_field(MR_mktag(1), parse_tree__equiv_type__V_98_98, 0) = ((MR_Box) (parse_tree__equiv_type__V_99_99));
#line 1324 "equiv_type.m"
              MR_hl_field(MR_mktag(1), parse_tree__equiv_type__V_98_98, 1) = ((MR_Box) (parse_tree__equiv_type__V_100_100));
#line 1324 "equiv_type.m"
            }
#line 1324 "equiv_type.m"
            {
#line 1324 "equiv_type.m"
              parse_tree__equiv_type__V_96_96 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1324 "equiv_type.m"
              MR_hl_field(MR_mktag(1), parse_tree__equiv_type__V_96_96, 0) = ((MR_Box) (parse_tree__equiv_type__V_97_97));
#line 1324 "equiv_type.m"
              MR_hl_field(MR_mktag(1), parse_tree__equiv_type__V_96_96, 1) = ((MR_Box) (parse_tree__equiv_type__V_98_98));
#line 1324 "equiv_type.m"
            }
#line 1323 "equiv_type.m"
            {
#line 1323 "equiv_type.m"
              parse_tree__equiv_type__Pieces1_51 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1323 "equiv_type.m"
              MR_hl_field(MR_mktag(1), parse_tree__equiv_type__Pieces1_51, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__equiv_type_scalar_common_1[31])));
#line 1323 "equiv_type.m"
              MR_hl_field(MR_mktag(1), parse_tree__equiv_type__Pieces1_51, 1) = ((MR_Box) (parse_tree__equiv_type__V_96_96));
#line 1323 "equiv_type.m"
            }
#line 1327 "equiv_type.m"
            {
#line 1327 "equiv_type.m"
              parse_tree__equiv_type__V_117_117 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 1327 "equiv_type.m"
              MR_hl_field(MR_mktag(0), parse_tree__equiv_type__V_117_117, 0) = ((MR_Box) (parse_tree__equiv_type__Pieces1_51));
#line 1327 "equiv_type.m"
            }
#line 1327 "equiv_type.m"
            {
#line 1327 "equiv_type.m"
              parse_tree__equiv_type__V_116_116 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1327 "equiv_type.m"
              MR_hl_field(MR_mktag(1), parse_tree__equiv_type__V_116_116, 0) = ((MR_Box) (parse_tree__equiv_type__V_117_117));
#line 1327 "equiv_type.m"
              MR_hl_field(MR_mktag(1), parse_tree__equiv_type__V_116_116, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1327 "equiv_type.m"
            }
#line 1327 "equiv_type.m"
            {
#line 1327 "equiv_type.m"
              parse_tree__equiv_type__Msg1_52 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 1327 "equiv_type.m"
              MR_hl_field(MR_mktag(0), parse_tree__equiv_type__Msg1_52, 0) = ((MR_Box) (parse_tree__equiv_type__Context_27));
#line 1327 "equiv_type.m"
              MR_hl_field(MR_mktag(0), parse_tree__equiv_type__Msg1_52, 1) = ((MR_Box) (parse_tree__equiv_type__V_116_116));
#line 1327 "equiv_type.m"
            }
#line 1328 "equiv_type.m"
            {
#line 1328 "equiv_type.m"
              parse_tree__equiv_type__V_121_121 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1328 "equiv_type.m"
              MR_hl_field(MR_mktag(1), parse_tree__equiv_type__V_121_121, 0) = ((MR_Box) (parse_tree__equiv_type__Msg1_52));
#line 1328 "equiv_type.m"
              MR_hl_field(MR_mktag(1), parse_tree__equiv_type__V_121_121, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1328 "equiv_type.m"
            }
#line 1328 "equiv_type.m"
            {
#line 1328 "equiv_type.m"
              parse_tree__equiv_type__Spec1_53 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 1328 "equiv_type.m"
              MR_hl_field(MR_mktag(0), parse_tree__equiv_type__Spec1_53, 0) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1328 "equiv_type.m"
              MR_hl_field(MR_mktag(0), parse_tree__equiv_type__Spec1_53, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 3))));
#line 1328 "equiv_type.m"
              MR_hl_field(MR_mktag(0), parse_tree__equiv_type__Spec1_53, 2) = ((MR_Box) (parse_tree__equiv_type__V_121_121));
#line 1328 "equiv_type.m"
            }
#line 1329 "equiv_type.m"
            {
#line 1329 "equiv_type.m"
              parse_tree__equiv_type__STATE_VARIABLE_Specs_93_93 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1329 "equiv_type.m"
              MR_hl_field(MR_mktag(1), parse_tree__equiv_type__STATE_VARIABLE_Specs_93_93, 0) = ((MR_Box) (parse_tree__equiv_type__Spec1_53));
#line 1329 "equiv_type.m"
              MR_hl_field(MR_mktag(1), parse_tree__equiv_type__STATE_VARIABLE_Specs_93_93, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1329 "equiv_type.m"
            }
#line 1322 "equiv_type.m"
          }
#line 1312 "equiv_type.m"
      }
#line 7952 "parse_tree.equiv_type.c"
    parse_tree__equiv_type__TypeCtorInfo_174_174 = (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_type_and_mode_0;
#line 1338 "equiv_type.m"
    {
#line 1338 "equiv_type.m"
      parse_tree__equiv_type__V_125_125 = mercury__list__length_1_f_0(parse_tree__equiv_type__TypeCtorInfo_174_174, parse_tree__equiv_type__TypesAndModes0_32);
    }
#line 1339 "equiv_type.m"
    {
#line 1339 "equiv_type.m"
      parse_tree__equiv_type__V_127_127 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 1339 "equiv_type.m"
      MR_hl_field(MR_mktag(1), parse_tree__equiv_type__V_127_127, 0) = ((MR_Box) (parse_tree__equiv_type__PredOrFunc_26));
#line 1339 "equiv_type.m"
    }
#line 1337 "equiv_type.m"
    {
#line 1337 "equiv_type.m"
      parse_tree__equiv_type__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_114_101_112_108_97_99_101_95_105_110_95_112_114_101_100_95_109_111_100_101_95_95_91_49_93_95_48_18_p_0(parse_tree__equiv_type__InstEqvMap_29, parse_tree__equiv_type__PredName_25, parse_tree__equiv_type__V_125_125, parse_tree__equiv_type__Context_27, (MR_Integer) 0, &parse_tree__equiv_type__ExtraModes_54, parse_tree__equiv_type__V_127_127, &parse_tree__equiv_type__V_55_55, parse_tree__equiv_type__MaybeWithInst0_37, &parse_tree__equiv_type__V_56_56, parse_tree__equiv_type__STATE_VARIABLE_MaybeDetism_0_76, parse_tree__equiv_type__STATE_VARIABLE_MaybeDetism_77, parse_tree__equiv_type__STATE_VARIABLE_EquivTypeInfo_91_91, &parse_tree__equiv_type__STATE_VARIABLE_EquivTypeInfo_129_129, parse_tree__equiv_type__STATE_VARIABLE_UsedModules_92_92, parse_tree__equiv_type__STATE_VARIABLE_UsedModules_81, &parse_tree__equiv_type__ModeSpecs_57);
    }
#line 1341 "equiv_type.m"
    {
#line 1341 "equiv_type.m"
      parse_tree__equiv_type__STATE_VARIABLE_Specs_131_131 = mercury__list__f_43_43_2_f_0((MR_Word) &parse_tree__error_util__parse_tree__error_util__type_ctor_info_error_spec_0, parse_tree__equiv_type__STATE_VARIABLE_Specs_93_93, parse_tree__equiv_type__ModeSpecs_57);
    }
#line 7977 "parse_tree.equiv_type.c"
    if ((parse_tree__equiv_type__STATE_VARIABLE_Specs_131_131 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 7979 "parse_tree.equiv_type.c"
      if ((parse_tree__equiv_type__ExtraModes_54 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 7981 "parse_tree.equiv_type.c"
        {
#line 1350 "equiv_type.m"
          {
#line 1350 "equiv_type.m"
            parse_tree__equiv_type__ExtraTypesAndModes_60 = mercury__list__map_2_f_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0, parse_tree__equiv_type__TypeCtorInfo_174_174, (MR_Word) &parse_tree__equiv_type_scalar_common_2[4], parse_tree__equiv_type__ExtraTypes_50);
          }
#line 1349 "equiv_type.m"
          *parse_tree__equiv_type__STATE_VARIABLE_Specs_82 = parse_tree__equiv_type__STATE_VARIABLE_Specs_131_131;
#line 1374 "equiv_type.m"
          *parse_tree__equiv_type__MaybeWithType_36 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 1375 "equiv_type.m"
          *parse_tree__equiv_type__MaybeWithInst_38 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 7994 "parse_tree.equiv_type.c"
        }
#line 7996 "parse_tree.equiv_type.c"
      else
#line 7998 "parse_tree.equiv_type.c"
        {
#line 1354 "equiv_type.m"
          MR_Integer parse_tree__equiv_type__V_132_132;
#line 1354 "equiv_type.m"
          MR_Integer parse_tree__equiv_type__V_183_183;

#line 1354 "equiv_type.m"
          {
#line 1354 "equiv_type.m"
            parse_tree__equiv_type__V_132_132 = mercury__list__length_1_f_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0, parse_tree__equiv_type__ExtraTypes_50);
          }
#line 1354 "equiv_type.m"
          {
#line 1354 "equiv_type.m"
            parse_tree__equiv_type__V_183_183 = mercury__list__length_1_f_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_mode_0, parse_tree__equiv_type__ExtraModes_54);
          }
#line 1354 "equiv_type.m"
          parse_tree__equiv_type__succeeded = (parse_tree__equiv_type__V_132_132 == parse_tree__equiv_type__V_183_183);
#line 8017 "parse_tree.equiv_type.c"
          if (parse_tree__equiv_type__succeeded)
#line 8019 "parse_tree.equiv_type.c"
            {
#line 8021 "parse_tree.equiv_type.c"
              MR_Word parse_tree__equiv_type__ExtraTypesModes_64;

#line 1355 "equiv_type.m"
              {
#line 1355 "equiv_type.m"
                mercury__assoc_list__from_corresponding_lists_3_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0, (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_mode_0, parse_tree__equiv_type__ExtraTypes_50, parse_tree__equiv_type__ExtraModes_54, &parse_tree__equiv_type__ExtraTypesModes_64);
              }
#line 1357 "equiv_type.m"
              {
#line 1357 "equiv_type.m"
                parse_tree__equiv_type__ExtraTypesAndModes_60 = mercury__list__map_2_f_0((MR_Word) &parse_tree__equiv_type_scalar_common_2[0], parse_tree__equiv_type__TypeCtorInfo_174_174, (MR_Word) &parse_tree__equiv_type_scalar_common_2[5], parse_tree__equiv_type__ExtraTypesModes_64);
              }
#line 1356 "equiv_type.m"
              *parse_tree__equiv_type__STATE_VARIABLE_Specs_82 = parse_tree__equiv_type__STATE_VARIABLE_Specs_131_131;
#line 1374 "equiv_type.m"
              *parse_tree__equiv_type__MaybeWithType_36 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 1375 "equiv_type.m"
              *parse_tree__equiv_type__MaybeWithInst_38 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 8040 "parse_tree.equiv_type.c"
            }
#line 8042 "parse_tree.equiv_type.c"
          else
#line 8044 "parse_tree.equiv_type.c"
            {
#line 8046 "parse_tree.equiv_type.c"
              MR_Word parse_tree__equiv_type__Pieces2_66;
#line 8048 "parse_tree.equiv_type.c"
              MR_Word parse_tree__equiv_type__Msg2_67;
#line 8050 "parse_tree.equiv_type.c"
              MR_Word parse_tree__equiv_type__Spec2_68;
#line 8052 "parse_tree.equiv_type.c"
              MR_Word parse_tree__equiv_type__V_138_138;
#line 8054 "parse_tree.equiv_type.c"
              MR_Word parse_tree__equiv_type__V_139_139;
#line 8056 "parse_tree.equiv_type.c"
              MR_Word parse_tree__equiv_type__V_140_140;
#line 8058 "parse_tree.equiv_type.c"
              MR_Word parse_tree__equiv_type__V_141_141;
#line 8060 "parse_tree.equiv_type.c"
              MR_Word parse_tree__equiv_type__V_156_156;
#line 8062 "parse_tree.equiv_type.c"
              MR_Word parse_tree__equiv_type__V_157_157;
#line 8064 "parse_tree.equiv_type.c"
              MR_Word parse_tree__equiv_type__V_161_161;

#line 1362 "equiv_type.m"
              {
#line 1362 "equiv_type.m"
                parse_tree__equiv_type__V_139_139 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1362 "equiv_type.m"
                MR_hl_field(MR_mktag(3), parse_tree__equiv_type__V_139_139, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 11));
#line 1362 "equiv_type.m"
                MR_hl_field(MR_mktag(3), parse_tree__equiv_type__V_139_139, 1) = ((MR_Box) (parse_tree__equiv_type__PredOrFunc_26));
#line 1362 "equiv_type.m"
              }
#line 1362 "equiv_type.m"
              {
#line 1362 "equiv_type.m"
                parse_tree__equiv_type__V_141_141 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1362 "equiv_type.m"
                MR_hl_field(MR_mktag(3), parse_tree__equiv_type__V_141_141, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 7));
#line 1362 "equiv_type.m"
                MR_hl_field(MR_mktag(3), parse_tree__equiv_type__V_141_141, 1) = ((MR_Box) (parse_tree__equiv_type__PredName_25));
#line 1362 "equiv_type.m"
              }
#line 1362 "equiv_type.m"
              {
#line 1362 "equiv_type.m"
                parse_tree__equiv_type__V_140_140 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1362 "equiv_type.m"
                MR_hl_field(MR_mktag(1), parse_tree__equiv_type__V_140_140, 0) = ((MR_Box) (parse_tree__equiv_type__V_141_141));
#line 1362 "equiv_type.m"
                MR_hl_field(MR_mktag(1), parse_tree__equiv_type__V_140_140, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__equiv_type_scalar_common_1[23])));
#line 1362 "equiv_type.m"
              }
#line 1362 "equiv_type.m"
              {
#line 1362 "equiv_type.m"
                parse_tree__equiv_type__V_138_138 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1362 "equiv_type.m"
                MR_hl_field(MR_mktag(1), parse_tree__equiv_type__V_138_138, 0) = ((MR_Box) (parse_tree__equiv_type__V_139_139));
#line 1362 "equiv_type.m"
                MR_hl_field(MR_mktag(1), parse_tree__equiv_type__V_138_138, 1) = ((MR_Box) (parse_tree__equiv_type__V_140_140));
#line 1362 "equiv_type.m"
              }
#line 1361 "equiv_type.m"
              {
#line 1361 "equiv_type.m"
                parse_tree__equiv_type__Pieces2_66 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1361 "equiv_type.m"
                MR_hl_field(MR_mktag(1), parse_tree__equiv_type__Pieces2_66, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__equiv_type_scalar_common_1[31])));
#line 1361 "equiv_type.m"
                MR_hl_field(MR_mktag(1), parse_tree__equiv_type__Pieces2_66, 1) = ((MR_Box) (parse_tree__equiv_type__V_138_138));
#line 1361 "equiv_type.m"
              }
#line 1365 "equiv_type.m"
              {
#line 1365 "equiv_type.m"
                parse_tree__equiv_type__V_157_157 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 1365 "equiv_type.m"
                MR_hl_field(MR_mktag(0), parse_tree__equiv_type__V_157_157, 0) = ((MR_Box) (parse_tree__equiv_type__Pieces2_66));
#line 1365 "equiv_type.m"
              }
#line 1365 "equiv_type.m"
              {
#line 1365 "equiv_type.m"
                parse_tree__equiv_type__V_156_156 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1365 "equiv_type.m"
                MR_hl_field(MR_mktag(1), parse_tree__equiv_type__V_156_156, 0) = ((MR_Box) (parse_tree__equiv_type__V_157_157));
#line 1365 "equiv_type.m"
                MR_hl_field(MR_mktag(1), parse_tree__equiv_type__V_156_156, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1365 "equiv_type.m"
              }
#line 1365 "equiv_type.m"
              {
#line 1365 "equiv_type.m"
                parse_tree__equiv_type__Msg2_67 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 1365 "equiv_type.m"
                MR_hl_field(MR_mktag(0), parse_tree__equiv_type__Msg2_67, 0) = ((MR_Box) (parse_tree__equiv_type__Context_27));
#line 1365 "equiv_type.m"
                MR_hl_field(MR_mktag(0), parse_tree__equiv_type__Msg2_67, 1) = ((MR_Box) (parse_tree__equiv_type__V_156_156));
#line 1365 "equiv_type.m"
              }
#line 1366 "equiv_type.m"
              {
#line 1366 "equiv_type.m"
                parse_tree__equiv_type__V_161_161 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1366 "equiv_type.m"
                MR_hl_field(MR_mktag(1), parse_tree__equiv_type__V_161_161, 0) = ((MR_Box) (parse_tree__equiv_type__Msg2_67));
#line 1366 "equiv_type.m"
                MR_hl_field(MR_mktag(1), parse_tree__equiv_type__V_161_161, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1366 "equiv_type.m"
              }
#line 1366 "equiv_type.m"
              {
#line 1366 "equiv_type.m"
                parse_tree__equiv_type__Spec2_68 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 1366 "equiv_type.m"
                MR_hl_field(MR_mktag(0), parse_tree__equiv_type__Spec2_68, 0) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1366 "equiv_type.m"
                MR_hl_field(MR_mktag(0), parse_tree__equiv_type__Spec2_68, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 3))));
#line 1366 "equiv_type.m"
                MR_hl_field(MR_mktag(0), parse_tree__equiv_type__Spec2_68, 2) = ((MR_Box) (parse_tree__equiv_type__V_161_161));
#line 1366 "equiv_type.m"
              }
#line 1367 "equiv_type.m"
              {
#line 1367 "equiv_type.m"
                MR_Word base;
#line 1367 "equiv_type.m"
                base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1367 "equiv_type.m"
                *parse_tree__equiv_type__STATE_VARIABLE_Specs_82 = base;
#line 1367 "equiv_type.m"
                MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (parse_tree__equiv_type__Spec2_68));
#line 1367 "equiv_type.m"
                MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (parse_tree__equiv_type__STATE_VARIABLE_Specs_131_131));
#line 1367 "equiv_type.m"
              }
#line 1368 "equiv_type.m"
              parse_tree__equiv_type__ExtraTypesAndModes_60 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 1380 "equiv_type.m"
              *parse_tree__equiv_type__MaybeWithType_36 = parse_tree__equiv_type__MaybeWithType0_35;
#line 1381 "equiv_type.m"
              *parse_tree__equiv_type__MaybeWithInst_38 = parse_tree__equiv_type__MaybeWithInst0_37;
#line 8187 "parse_tree.equiv_type.c"
            }
#line 8189 "parse_tree.equiv_type.c"
        }
#line 8191 "parse_tree.equiv_type.c"
    else
#line 8193 "parse_tree.equiv_type.c"
      {
#line 1345 "equiv_type.m"
        parse_tree__equiv_type__ExtraTypesAndModes_60 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 1344 "equiv_type.m"
        *parse_tree__equiv_type__STATE_VARIABLE_Specs_82 = parse_tree__equiv_type__STATE_VARIABLE_Specs_131_131;
#line 1380 "equiv_type.m"
        *parse_tree__equiv_type__MaybeWithType_36 = parse_tree__equiv_type__MaybeWithType0_35;
#line 1381 "equiv_type.m"
        *parse_tree__equiv_type__MaybeWithInst_38 = parse_tree__equiv_type__MaybeWithInst0_37;
#line 8203 "parse_tree.equiv_type.c"
      }
#line 1386 "equiv_type.m"
    if ((parse_tree__equiv_type__ExtraTypesAndModes_60 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 1384 "equiv_type.m"
      {
#line 1385 "equiv_type.m"
        *parse_tree__equiv_type__TypesAndModes_33 = parse_tree__equiv_type__TypesAndModes1_43;
#line 1384 "equiv_type.m"
        *parse_tree__equiv_type__STATE_VARIABLE_EquivTypeInfo_79 = parse_tree__equiv_type__STATE_VARIABLE_EquivTypeInfo_129_129;
#line 1384 "equiv_type.m"
      }
#line 1386 "equiv_type.m"
    else
#line 1387 "equiv_type.m"
      {
#line 1387 "equiv_type.m"
        MR_Word parse_tree__equiv_type__OrigItemId_73;
#line 1387 "equiv_type.m"
        MR_Word parse_tree__equiv_type__V_167_167;
#line 1387 "equiv_type.m"
        MR_Word parse_tree__equiv_type__V_168_168;
#line 1387 "equiv_type.m"
        MR_Integer parse_tree__equiv_type__V_169_169;

#line 1388 "equiv_type.m"
        {
#line 1388 "equiv_type.m"
          parse_tree__equiv_type__V_167_167 = recompilation__pred_or_func_to_item_type_1_f_0(parse_tree__equiv_type__PredOrFunc_26);
        }
#line 1389 "equiv_type.m"
        {
#line 1389 "equiv_type.m"
          parse_tree__equiv_type__V_169_169 = mercury__list__length_1_f_0(parse_tree__equiv_type__TypeCtorInfo_174_174, parse_tree__equiv_type__TypesAndModes0_32);
        }
#line 1389 "equiv_type.m"
        {
#line 1389 "equiv_type.m"
          parse_tree__equiv_type__V_168_168 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 1389 "equiv_type.m"
          MR_hl_field(MR_mktag(0), parse_tree__equiv_type__V_168_168, 0) = ((MR_Box) (parse_tree__equiv_type__PredName_25));
#line 1389 "equiv_type.m"
          MR_hl_field(MR_mktag(0), parse_tree__equiv_type__V_168_168, 1) = ((MR_Box) (parse_tree__equiv_type__V_169_169));
#line 1389 "equiv_type.m"
        }
#line 1388 "equiv_type.m"
        {
#line 1388 "equiv_type.m"
          parse_tree__equiv_type__OrigItemId_73 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 1388 "equiv_type.m"
          MR_hl_field(MR_mktag(0), parse_tree__equiv_type__OrigItemId_73, 0) = ((MR_Box) (parse_tree__equiv_type__V_167_167));
#line 1388 "equiv_type.m"
          MR_hl_field(MR_mktag(0), parse_tree__equiv_type__OrigItemId_73, 1) = ((MR_Box) (parse_tree__equiv_type__V_168_168));
#line 1388 "equiv_type.m"
        }
#line 1390 "equiv_type.m"
        {
#line 1390 "equiv_type.m"
          recompilation__record_expanded_item_3_p_0(parse_tree__equiv_type__OrigItemId_73, parse_tree__equiv_type__STATE_VARIABLE_EquivTypeInfo_129_129, parse_tree__equiv_type__STATE_VARIABLE_EquivTypeInfo_79);
        }
#line 1391 "equiv_type.m"
        {
#line 1391 "equiv_type.m"
          *parse_tree__equiv_type__TypesAndModes_33 = mercury__list__f_43_43_2_f_0(parse_tree__equiv_type__TypeCtorInfo_174_174, parse_tree__equiv_type__TypesAndModes1_43, parse_tree__equiv_type__ExtraTypesAndModes_60);
        }
#line 1387 "equiv_type.m"
      }
#line 1305 "equiv_type.m"
  }
#line 1290 "equiv_type.m"
}

#line 1189 "equiv_type.m"
static void MR_CALL 
parse_tree__equiv_type__replace_type_ctor_18_p_0(
#line 1189 "equiv_type.m"
  MR_Word parse_tree__equiv_type__MaybeRecord_19,
#line 1189 "equiv_type.m"
  MR_Word parse_tree__equiv_type__TypeEqvMap_20,
#line 1189 "equiv_type.m"
  MR_Word parse_tree__equiv_type__TypeCtorsAlreadyExpanded_21,
#line 1189 "equiv_type.m"
  MR_Word parse_tree__equiv_type__Type0_22,
#line 1189 "equiv_type.m"
  MR_Word parse_tree__equiv_type__TypeCtor_23,
#line 1189 "equiv_type.m"
  MR_Word parse_tree__equiv_type__TArgs_24,
#line 1189 "equiv_type.m"
  MR_Word parse_tree__equiv_type__Kind_25,
#line 1189 "equiv_type.m"
  MR_Word * parse_tree__equiv_type__Type_26,
#line 1189 "equiv_type.m"
  MR_Word parse_tree__equiv_type__STATE_VARIABLE_Changed_0_46,
#line 1189 "equiv_type.m"
  MR_Word * parse_tree__equiv_type__STATE_VARIABLE_Changed_47,
#line 1189 "equiv_type.m"
  MR_Word parse_tree__equiv_type__STATE_VARIABLE_Circ_0_48,
#line 1189 "equiv_type.m"
  MR_Word * parse_tree__equiv_type__STATE_VARIABLE_Circ_49,
#line 1189 "equiv_type.m"
  MR_Word parse_tree__equiv_type__STATE_VARIABLE_VarSet_0_50,
#line 1189 "equiv_type.m"
  MR_Word * parse_tree__equiv_type__STATE_VARIABLE_VarSet_51,
#line 1189 "equiv_type.m"
  MR_Word parse_tree__equiv_type__STATE_VARIABLE_EquivTypeInfo_0_52,
#line 1189 "equiv_type.m"
  MR_Word * parse_tree__equiv_type__STATE_VARIABLE_EquivTypeInfo_53,
#line 1189 "equiv_type.m"
  MR_Word parse_tree__equiv_type__STATE_VARIABLE_UsedModules_0_54,
#line 1189 "equiv_type.m"
  MR_Word * parse_tree__equiv_type__STATE_VARIABLE_UsedModules_55)
#line 1189 "equiv_type.m"
{
#line 1197 "equiv_type.m"
  {
#line 1197 "equiv_type.m"
    MR_bool parse_tree__equiv_type__succeeded;
#line 1197 "equiv_type.m"
    MR_Word parse_tree__equiv_type__AlreadyExpanded_32;
#line 1234 "equiv_type.m"
    MR_Word parse_tree__equiv_type__Args0_35;
#line 1234 "equiv_type.m"
    MR_Word parse_tree__equiv_type__Body0_36;
#line 1234 "equiv_type.m"
    MR_Word parse_tree__equiv_type__Renaming_37;
#line 1234 "equiv_type.m"
    MR_Word parse_tree__equiv_type__STATE_VARIABLE_VarSet_56_56;
#line 1204 "equiv_type.m"
    MR_Word parse_tree__equiv_type__EqvTypeBody_33;
#line 1204 "equiv_type.m"
    MR_Word parse_tree__equiv_type__EqvVarSet_34;
#line 1204 "equiv_type.m"
    MR_Box parse_tree__equiv_type__conv0_EqvTypeBody_33;

#line 1198 "equiv_type.m"
    {
#line 1198 "equiv_type.m"
      parse_tree__equiv_type__succeeded = mercury__list__member_2_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_type_ctor_0, ((MR_Box) (parse_tree__equiv_type__TypeCtor_23)), parse_tree__equiv_type__TypeCtorsAlreadyExpanded_21);
    }
#line 1200 "equiv_type.m"
    if (parse_tree__equiv_type__succeeded)
#line 1199 "equiv_type.m"
      parse_tree__equiv_type__AlreadyExpanded_32 = (MR_Integer) 1;
#line 1200 "equiv_type.m"
    else
#line 1201 "equiv_type.m"
      parse_tree__equiv_type__AlreadyExpanded_32 = (MR_Integer) 0;
#line 1204 "equiv_type.m"
    {
#line 1204 "equiv_type.m"
      parse_tree__equiv_type__succeeded = mercury__map__search_3_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_type_ctor_0, (MR_Word) &parse_tree__equiv_type__parse_tree__equiv_type__type_ctor_info_eqv_type_body_0, parse_tree__equiv_type__TypeEqvMap_20, ((MR_Box) (parse_tree__equiv_type__TypeCtor_23)), &parse_tree__equiv_type__conv0_EqvTypeBody_33);
    }
#line 1204 "equiv_type.m"
    if (parse_tree__equiv_type__succeeded)
#line 1204 "equiv_type.m"
      {
#line 1204 "equiv_type.m"
        parse_tree__equiv_type__EqvTypeBody_33 = ((MR_Word) parse_tree__equiv_type__conv0_EqvTypeBody_33);
#line 1204 "equiv_type.m"
        parse_tree__equiv_type__succeeded = MR_TRUE;
#line 1204 "equiv_type.m"
      }
#line 1204 "equiv_type.m"
    if (parse_tree__equiv_type__succeeded)
#line 1204 "equiv_type.m"
      {
#line 1205 "equiv_type.m"
        parse_tree__equiv_type__EqvVarSet_34 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__equiv_type__EqvTypeBody_33, (MR_Integer) 0)));
#line 1205 "equiv_type.m"
        parse_tree__equiv_type__Args0_35 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__equiv_type__EqvTypeBody_33, (MR_Integer) 1)));
#line 1205 "equiv_type.m"
        parse_tree__equiv_type__Body0_36 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__equiv_type__EqvTypeBody_33, (MR_Integer) 2)));
#line 1215 "equiv_type.m"
        {
#line 1215 "equiv_type.m"
          parse_tree__prog_data__tvarset_merge_renaming_without_names_4_p_0(parse_tree__equiv_type__STATE_VARIABLE_VarSet_0_50, parse_tree__equiv_type__EqvVarSet_34, &parse_tree__equiv_type__STATE_VARIABLE_VarSet_56_56, &parse_tree__equiv_type__Renaming_37);
        }
#line 1217 "equiv_type.m"
        parse_tree__equiv_type__succeeded = (parse_tree__equiv_type__STATE_VARIABLE_Circ_0_48 == (MR_Integer) 0);
#line 1204 "equiv_type.m"
        if (parse_tree__equiv_type__succeeded)
#line 1218 "equiv_type.m"
          parse_tree__equiv_type__succeeded = (parse_tree__equiv_type__AlreadyExpanded_32 == (MR_Integer) 0);
#line 1204 "equiv_type.m"
      }
#line 1234 "equiv_type.m"
    if (parse_tree__equiv_type__succeeded)
#line 1221 "equiv_type.m"
      {
#line 1221 "equiv_type.m"
        MR_Word parse_tree__equiv_type__TypeInfo_71_71;
#line 1221 "equiv_type.m"
        MR_Word parse_tree__equiv_type__Args_38;
#line 1221 "equiv_type.m"
        MR_Word parse_tree__equiv_type__Body1_39;
#line 1221 "equiv_type.m"
        MR_Word parse_tree__equiv_type__TypeCtorItem_40;
#line 1221 "equiv_type.m"
        MR_Word parse_tree__equiv_type__Subst_41;
#line 1221 "equiv_type.m"
        MR_Word parse_tree__equiv_type__Body_42;
#line 1221 "equiv_type.m"
        MR_Word parse_tree__equiv_type__STATE_VARIABLE_UsedModules_57_57;
#line 1221 "equiv_type.m"
        MR_Word parse_tree__equiv_type__V_59_59;
#line 1221 "equiv_type.m"
        MR_Word parse_tree__equiv_type__STATE_VARIABLE_EquivTypeInfo_60_60;
#line 1221 "equiv_type.m"
        MR_Word parse_tree__equiv_type__V_62_62;
#line 1231 "equiv_type.m"
        MR_Word parse_tree__equiv_type__V_43_43;

#line 1563 "equiv_type.m"
        if ((parse_tree__equiv_type__MaybeRecord_19 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 1563 "equiv_type.m"
          parse_tree__equiv_type__STATE_VARIABLE_UsedModules_57_57 = parse_tree__equiv_type__STATE_VARIABLE_UsedModules_0_54;
#line 1563 "equiv_type.m"
        else
#line 1565 "equiv_type.m"
          {
#line 1565 "equiv_type.m"
            MR_Word parse_tree__equiv_type__Visibility_78 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__equiv_type__MaybeRecord_19, (MR_Integer) 0)));
#line 1565 "equiv_type.m"
            MR_Word parse_tree__equiv_type__TypeCtorSymName_79 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__equiv_type__TypeCtor_23, (MR_Integer) 0)));
#line 1566 "equiv_type.m"
            MR_Integer parse_tree__equiv_type___TypeCtorArity_80 = ((MR_Integer) (MR_hl_field(MR_mktag(0), parse_tree__equiv_type__TypeCtor_23, (MR_Integer) 1)));

#line 1567 "equiv_type.m"
            {
#line 1567 "equiv_type.m"
              parse_tree__prog_data__record_sym_name_module_as_used_4_p_0(parse_tree__equiv_type__Visibility_78, parse_tree__equiv_type__TypeCtorSymName_79, parse_tree__equiv_type__STATE_VARIABLE_UsedModules_0_54, &parse_tree__equiv_type__STATE_VARIABLE_UsedModules_57_57);
            }
#line 1565 "equiv_type.m"
          }
#line 1223 "equiv_type.m"
        *parse_tree__equiv_type__STATE_VARIABLE_Changed_47 = (MR_Integer) 1;
#line 8439 "parse_tree.equiv_type.c"
        parse_tree__equiv_type__TypeInfo_71_71 = (MR_Word) &parse_tree__equiv_type_scalar_common_1[4];
#line 1224 "equiv_type.m"
        {
#line 1224 "equiv_type.m"
          mercury__map__apply_to_list_3_p_0(parse_tree__equiv_type__TypeInfo_71_71, parse_tree__equiv_type__TypeInfo_71_71, parse_tree__equiv_type__Args0_35, parse_tree__equiv_type__Renaming_37, &parse_tree__equiv_type__Args_38);
        }
#line 1225 "equiv_type.m"
        {
#line 1225 "equiv_type.m"
          parse_tree__prog_type_subst__apply_variable_renaming_to_type_3_p_0(parse_tree__equiv_type__Renaming_37, parse_tree__equiv_type__Body0_36, &parse_tree__equiv_type__Body1_39);
        }
#line 1226 "equiv_type.m"
        {
#line 1226 "equiv_type.m"
          parse_tree__equiv_type__TypeCtorItem_40 = recompilation__type_ctor_to_item_name_1_f_0(parse_tree__equiv_type__TypeCtor_23);
        }
#line 1227 "equiv_type.m"
        {
#line 1227 "equiv_type.m"
          parse_tree__equiv_type__V_59_59 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 1227 "equiv_type.m"
          MR_hl_field(MR_mktag(0), parse_tree__equiv_type__V_59_59, 0) = ((MR_Box) ((MR_Integer) 0));
#line 1227 "equiv_type.m"
          MR_hl_field(MR_mktag(0), parse_tree__equiv_type__V_59_59, 1) = ((MR_Box) (parse_tree__equiv_type__TypeCtorItem_40));
#line 1227 "equiv_type.m"
        }
#line 1227 "equiv_type.m"
        {
#line 1227 "equiv_type.m"
          recompilation__record_expanded_item_3_p_0(parse_tree__equiv_type__V_59_59, parse_tree__equiv_type__STATE_VARIABLE_EquivTypeInfo_0_52, &parse_tree__equiv_type__STATE_VARIABLE_EquivTypeInfo_60_60);
        }
#line 1229 "equiv_type.m"
        {
#line 1229 "equiv_type.m"
          mercury__map__from_corresponding_lists_3_p_0(parse_tree__equiv_type__TypeInfo_71_71, (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0, parse_tree__equiv_type__Args_38, parse_tree__equiv_type__TArgs_24, &parse_tree__equiv_type__Subst_41);
        }
#line 1230 "equiv_type.m"
        {
#line 1230 "equiv_type.m"
          parse_tree__prog_type_subst__apply_subst_to_type_3_p_0(parse_tree__equiv_type__Subst_41, parse_tree__equiv_type__Body1_39, &parse_tree__equiv_type__Body_42);
        }
#line 1232 "equiv_type.m"
        {
#line 1232 "equiv_type.m"
          parse_tree__equiv_type__V_62_62 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1232 "equiv_type.m"
          MR_hl_field(MR_mktag(1), parse_tree__equiv_type__V_62_62, 0) = ((MR_Box) (parse_tree__equiv_type__TypeCtor_23));
#line 1232 "equiv_type.m"
          MR_hl_field(MR_mktag(1), parse_tree__equiv_type__V_62_62, 1) = ((MR_Box) (parse_tree__equiv_type__TypeCtorsAlreadyExpanded_21));
#line 1232 "equiv_type.m"
        }
#line 1231 "equiv_type.m"
        {
#line 1231 "equiv_type.m"
          parse_tree__equiv_type__replace_in_type_maybe_record_use_2_13_p_0(parse_tree__equiv_type__MaybeRecord_19, parse_tree__equiv_type__TypeEqvMap_20, parse_tree__equiv_type__V_62_62, parse_tree__equiv_type__Body_42, parse_tree__equiv_type__Type_26, &parse_tree__equiv_type__V_43_43, parse_tree__equiv_type__STATE_VARIABLE_Circ_49, parse_tree__equiv_type__STATE_VARIABLE_VarSet_56_56, parse_tree__equiv_type__STATE_VARIABLE_VarSet_51, parse_tree__equiv_type__STATE_VARIABLE_EquivTypeInfo_60_60, parse_tree__equiv_type__STATE_VARIABLE_EquivTypeInfo_53, parse_tree__equiv_type__STATE_VARIABLE_UsedModules_57_57, parse_tree__equiv_type__STATE_VARIABLE_UsedModules_55);
        }
#line 1221 "equiv_type.m"
      }
#line 1234 "equiv_type.m"
    else
#line 1242 "equiv_type.m"
      {
#line 1239 "equiv_type.m"
#line 1239 "equiv_type.m"
        switch (parse_tree__equiv_type__STATE_VARIABLE_Changed_0_46) {
#line 1239 "equiv_type.m"
          default: /*NOTREACHED*/ MR_assert(0);
#line 1239 "equiv_type.m"
          case (MR_Integer) 0:
#line 1241 "equiv_type.m"
            *parse_tree__equiv_type__Type_26 = parse_tree__equiv_type__Type0_22;
#line 1239 "equiv_type.m"
            break;
#line 1239 "equiv_type.m"
          case (MR_Integer) 1:
#line 1236 "equiv_type.m"
            {
#line 1236 "equiv_type.m"
              MR_Word parse_tree__equiv_type__SymName_44 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__equiv_type__TypeCtor_23, (MR_Integer) 0)));
#line 1237 "equiv_type.m"
              MR_Integer parse_tree__equiv_type___Arity_45 = ((MR_Integer) (MR_hl_field(MR_mktag(0), parse_tree__equiv_type__TypeCtor_23, (MR_Integer) 1)));

#line 1238 "equiv_type.m"
              {
#line 1238 "equiv_type.m"
                MR_Word base;
#line 1238 "equiv_type.m"
                base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
#line 1238 "equiv_type.m"
                *parse_tree__equiv_type__Type_26 = base;
#line 1238 "equiv_type.m"
                MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (parse_tree__equiv_type__SymName_44));
#line 1238 "equiv_type.m"
                MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (parse_tree__equiv_type__TArgs_24));
#line 1238 "equiv_type.m"
                MR_hl_field(MR_mktag(1), base, 2) = ((MR_Box) (parse_tree__equiv_type__Kind_25));
#line 1238 "equiv_type.m"
              }
#line 1236 "equiv_type.m"
            }
#line 1239 "equiv_type.m"
            break;
#line 1239 "equiv_type.m"
        }
#line 1243 "equiv_type.m"
        {
#line 1243 "equiv_type.m"
          mercury__bool__or_3_p_0(parse_tree__equiv_type__AlreadyExpanded_32, parse_tree__equiv_type__STATE_VARIABLE_Circ_0_48, parse_tree__equiv_type__STATE_VARIABLE_Circ_49);
        }
#line 1242 "equiv_type.m"
        *parse_tree__equiv_type__STATE_VARIABLE_UsedModules_55 = parse_tree__equiv_type__STATE_VARIABLE_UsedModules_0_54;
#line 1242 "equiv_type.m"
        *parse_tree__equiv_type__STATE_VARIABLE_EquivTypeInfo_53 = parse_tree__equiv_type__STATE_VARIABLE_EquivTypeInfo_0_52;
#line 1242 "equiv_type.m"
        *parse_tree__equiv_type__STATE_VARIABLE_VarSet_51 = parse_tree__equiv_type__STATE_VARIABLE_VarSet_0_50;
#line 1242 "equiv_type.m"
        *parse_tree__equiv_type__STATE_VARIABLE_Changed_47 = parse_tree__equiv_type__STATE_VARIABLE_Changed_0_46;
#line 1242 "equiv_type.m"
      }
#line 1197 "equiv_type.m"
  }
#line 1189 "equiv_type.m"
}

#line 1096 "equiv_type.m"
static void MR_CALL 
parse_tree__equiv_type__replace_in_type_maybe_record_use_2_13_p_0(
#line 1096 "equiv_type.m"
  MR_Word parse_tree__equiv_type__MaybeRecord_14,
#line 1096 "equiv_type.m"
  MR_Word parse_tree__equiv_type__TypeEqvMap_15,
#line 1096 "equiv_type.m"
  MR_Word parse_tree__equiv_type__TypeCtorsAlreadyExpanded_16,
#line 1096 "equiv_type.m"
  MR_Word parse_tree__equiv_type__Type0_17,
#line 1096 "equiv_type.m"
  MR_Word * parse_tree__equiv_type__Type_18,
#line 1096 "equiv_type.m"
  MR_Word * parse_tree__equiv_type__Changed_19,
#line 1096 "equiv_type.m"
  MR_Word * parse_tree__equiv_type__Circ_20,
#line 1096 "equiv_type.m"
  MR_Word parse_tree__equiv_type__STATE_VARIABLE_VarSet_0_47,
#line 1096 "equiv_type.m"
  MR_Word * parse_tree__equiv_type__STATE_VARIABLE_VarSet_48,
#line 1096 "equiv_type.m"
  MR_Word parse_tree__equiv_type__STATE_VARIABLE_EquivTypeInfo_0_49,
#line 1096 "equiv_type.m"
  MR_Word * parse_tree__equiv_type__STATE_VARIABLE_EquivTypeInfo_50,
#line 1096 "equiv_type.m"
  MR_Word parse_tree__equiv_type__STATE_VARIABLE_UsedModules_0_51,
#line 1096 "equiv_type.m"
  MR_Word * parse_tree__equiv_type__STATE_VARIABLE_UsedModules_52)
#line 1096 "equiv_type.m"
{
#line 1106 "equiv_type.m"
  {
#line 1106 "equiv_type.m"
    MR_bool parse_tree__equiv_type__succeeded;

#line 1106 "equiv_type.m"
#line 1106 "equiv_type.m"
    switch (MR_tag((MR_Word) parse_tree__equiv_type__Type0_17)) {
#line 1106 "equiv_type.m"
      default: /*NOTREACHED*/ MR_assert(0);
#line 1106 "equiv_type.m"
      case (MR_Integer) 0:
#line 1106 "equiv_type.m"
        {
#line 1107 "equiv_type.m"
          *parse_tree__equiv_type__Type_18 = parse_tree__equiv_type__Type0_17;
#line 1108 "equiv_type.m"
          *parse_tree__equiv_type__Changed_19 = (MR_Integer) 0;
#line 1109 "equiv_type.m"
          *parse_tree__equiv_type__Circ_20 = (MR_Integer) 0;
#line 1106 "equiv_type.m"
          *parse_tree__equiv_type__STATE_VARIABLE_VarSet_48 = parse_tree__equiv_type__STATE_VARIABLE_VarSet_0_47;
#line 1106 "equiv_type.m"
          *parse_tree__equiv_type__STATE_VARIABLE_EquivTypeInfo_50 = parse_tree__equiv_type__STATE_VARIABLE_EquivTypeInfo_0_49;
#line 1106 "equiv_type.m"
          *parse_tree__equiv_type__STATE_VARIABLE_UsedModules_52 = parse_tree__equiv_type__STATE_VARIABLE_UsedModules_0_51;
#line 1106 "equiv_type.m"
        }
#line 1106 "equiv_type.m"
        break;
#line 1106 "equiv_type.m"
      case (MR_Integer) 1:
#line 1111 "equiv_type.m"
        {
#line 1111 "equiv_type.m"
          MR_Word parse_tree__equiv_type__SymName_26 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__equiv_type__Type0_17, (MR_Integer) 0)));
#line 1111 "equiv_type.m"
          MR_Word parse_tree__equiv_type__TArgs0_27 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__equiv_type__Type0_17, (MR_Integer) 1)));
#line 1111 "equiv_type.m"
          MR_Word parse_tree__equiv_type__TArgs_28;
#line 1111 "equiv_type.m"
          MR_Word parse_tree__equiv_type__ArgsChanged_29;
#line 1111 "equiv_type.m"
          MR_Word parse_tree__equiv_type__Circ0_30;
#line 1111 "equiv_type.m"
          MR_Integer parse_tree__equiv_type__Arity_31;
#line 1111 "equiv_type.m"
          MR_Word parse_tree__equiv_type__TypeCtor_32;
#line 1111 "equiv_type.m"
          MR_Word parse_tree__equiv_type__STATE_VARIABLE_VarSet_72_72;
#line 1111 "equiv_type.m"
          MR_Word parse_tree__equiv_type__STATE_VARIABLE_EquivTypeInfo_73_73;
#line 1111 "equiv_type.m"
          MR_Word parse_tree__equiv_type__STATE_VARIABLE_UsedModules_74_74;
#line 1111 "equiv_type.m"
          MR_Word parse_tree__equiv_type__Kind_78 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__equiv_type__Type0_17, (MR_Integer) 2)));

#line 1112 "equiv_type.m"
          {
#line 1112 "equiv_type.m"
            parse_tree__equiv_type__replace_in_type_list_location_circ_2_14_p_0(parse_tree__equiv_type__MaybeRecord_14, parse_tree__equiv_type__TypeEqvMap_15, parse_tree__equiv_type__TypeCtorsAlreadyExpanded_16, parse_tree__equiv_type__TArgs0_27, &parse_tree__equiv_type__TArgs_28, &parse_tree__equiv_type__ArgsChanged_29, (MR_Integer) 0, &parse_tree__equiv_type__Circ0_30, parse_tree__equiv_type__STATE_VARIABLE_VarSet_0_47, &parse_tree__equiv_type__STATE_VARIABLE_VarSet_72_72, parse_tree__equiv_type__STATE_VARIABLE_EquivTypeInfo_0_49, &parse_tree__equiv_type__STATE_VARIABLE_EquivTypeInfo_73_73, parse_tree__equiv_type__STATE_VARIABLE_UsedModules_0_51, &parse_tree__equiv_type__STATE_VARIABLE_UsedModules_74_74);
          }
#line 1115 "equiv_type.m"
          {
#line 1115 "equiv_type.m"
            parse_tree__equiv_type__Arity_31 = mercury__list__length_1_f_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0, parse_tree__equiv_type__TArgs_28);
          }
#line 1116 "equiv_type.m"
          {
#line 1116 "equiv_type.m"
            parse_tree__equiv_type__TypeCtor_32 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 1116 "equiv_type.m"
            MR_hl_field(MR_mktag(0), parse_tree__equiv_type__TypeCtor_32, 0) = ((MR_Box) (parse_tree__equiv_type__SymName_26));
#line 1116 "equiv_type.m"
            MR_hl_field(MR_mktag(0), parse_tree__equiv_type__TypeCtor_32, 1) = ((MR_Box) (parse_tree__equiv_type__Arity_31));
#line 1116 "equiv_type.m"
          }
#line 1117 "equiv_type.m"
          {
#line 1117 "equiv_type.m"
            parse_tree__equiv_type__replace_type_ctor_18_p_0(parse_tree__equiv_type__MaybeRecord_14, parse_tree__equiv_type__TypeEqvMap_15, parse_tree__equiv_type__TypeCtorsAlreadyExpanded_16, parse_tree__equiv_type__Type0_17, parse_tree__equiv_type__TypeCtor_32, parse_tree__equiv_type__TArgs_28, parse_tree__equiv_type__Kind_78, parse_tree__equiv_type__Type_18, parse_tree__equiv_type__ArgsChanged_29, parse_tree__equiv_type__Changed_19, parse_tree__equiv_type__Circ0_30, parse_tree__equiv_type__Circ_20, parse_tree__equiv_type__STATE_VARIABLE_VarSet_72_72, parse_tree__equiv_type__STATE_VARIABLE_VarSet_48, parse_tree__equiv_type__STATE_VARIABLE_EquivTypeInfo_73_73, parse_tree__equiv_type__STATE_VARIABLE_EquivTypeInfo_50, parse_tree__equiv_type__STATE_VARIABLE_UsedModules_74_74, parse_tree__equiv_type__STATE_VARIABLE_UsedModules_52);
#line 1117 "equiv_type.m"
            return;
          }
#line 1111 "equiv_type.m"
        }
#line 1106 "equiv_type.m"
        break;
#line 1106 "equiv_type.m"
      case (MR_Integer) 2:
#line 1121 "equiv_type.m"
        {
#line 1122 "equiv_type.m"
          *parse_tree__equiv_type__Type_18 = parse_tree__equiv_type__Type0_17;
#line 1123 "equiv_type.m"
          *parse_tree__equiv_type__Changed_19 = (MR_Integer) 0;
#line 1124 "equiv_type.m"
          *parse_tree__equiv_type__Circ_20 = (MR_Integer) 0;
#line 1121 "equiv_type.m"
          *parse_tree__equiv_type__STATE_VARIABLE_VarSet_48 = parse_tree__equiv_type__STATE_VARIABLE_VarSet_0_47;
#line 1121 "equiv_type.m"
          *parse_tree__equiv_type__STATE_VARIABLE_EquivTypeInfo_50 = parse_tree__equiv_type__STATE_VARIABLE_EquivTypeInfo_0_49;
#line 1121 "equiv_type.m"
          *parse_tree__equiv_type__STATE_VARIABLE_UsedModules_52 = parse_tree__equiv_type__STATE_VARIABLE_UsedModules_0_51;
#line 1121 "equiv_type.m"
        }
#line 1106 "equiv_type.m"
        break;
#line 1106 "equiv_type.m"
      case (MR_Integer) 3:
#line 1106 "equiv_type.m"
#line 1106 "equiv_type.m"
        switch (((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__equiv_type__Type0_17, (MR_Integer) 0)))) {
#line 1106 "equiv_type.m"
          default: /*NOTREACHED*/ MR_assert(0);
#line 1106 "equiv_type.m"
          case (MR_Integer) 0:
#line 1152 "equiv_type.m"
            {
#line 1152 "equiv_type.m"
              MR_Word parse_tree__equiv_type__Kind_80 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__equiv_type__Type0_17, (MR_Integer) 2)));
#line 1152 "equiv_type.m"
              MR_Word parse_tree__equiv_type__Args0_81 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__equiv_type__Type0_17, (MR_Integer) 1)));
#line 1152 "equiv_type.m"
              MR_Word parse_tree__equiv_type__Args_82;

#line 1153 "equiv_type.m"
              {
#line 1153 "equiv_type.m"
                parse_tree__equiv_type__replace_in_type_list_location_circ_2_14_p_0(parse_tree__equiv_type__MaybeRecord_14, parse_tree__equiv_type__TypeEqvMap_15, parse_tree__equiv_type__TypeCtorsAlreadyExpanded_16, parse_tree__equiv_type__Args0_81, &parse_tree__equiv_type__Args_82, parse_tree__equiv_type__Changed_19, (MR_Integer) 0, parse_tree__equiv_type__Circ_20, parse_tree__equiv_type__STATE_VARIABLE_VarSet_0_47, parse_tree__equiv_type__STATE_VARIABLE_VarSet_48, parse_tree__equiv_type__STATE_VARIABLE_EquivTypeInfo_0_49, parse_tree__equiv_type__STATE_VARIABLE_EquivTypeInfo_50, parse_tree__equiv_type__STATE_VARIABLE_UsedModules_0_51, parse_tree__equiv_type__STATE_VARIABLE_UsedModules_52);
              }
#line 1159 "equiv_type.m"
#line 1159 "equiv_type.m"
              switch (*parse_tree__equiv_type__Changed_19) {
#line 1159 "equiv_type.m"
                default: /*NOTREACHED*/ MR_assert(0);
#line 1159 "equiv_type.m"
                case (MR_Integer) 0:
#line 1161 "equiv_type.m"
                  *parse_tree__equiv_type__Type_18 = parse_tree__equiv_type__Type0_17;
#line 1159 "equiv_type.m"
                  break;
#line 1159 "equiv_type.m"
                case (MR_Integer) 1:
#line 1158 "equiv_type.m"
                  {
#line 1158 "equiv_type.m"
                    MR_Word base;
#line 1158 "equiv_type.m"
                    base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
#line 1158 "equiv_type.m"
                    *parse_tree__equiv_type__Type_18 = base;
#line 1158 "equiv_type.m"
                    MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 0));
#line 1158 "equiv_type.m"
                    MR_hl_field(MR_mktag(3), base, 1) = ((MR_Box) (parse_tree__equiv_type__Args_82));
#line 1158 "equiv_type.m"
                    MR_hl_field(MR_mktag(3), base, 2) = ((MR_Box) (parse_tree__equiv_type__Kind_80));
#line 1158 "equiv_type.m"
                  }
#line 1159 "equiv_type.m"
                  break;
#line 1159 "equiv_type.m"
              }
#line 1152 "equiv_type.m"
            }
#line 1106 "equiv_type.m"
            break;
#line 1106 "equiv_type.m"
          case (MR_Integer) 1:
#line 1126 "equiv_type.m"
            {
#line 1126 "equiv_type.m"
              MR_Word parse_tree__equiv_type__Args0_34 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__equiv_type__Type0_17, (MR_Integer) 1)));
#line 1126 "equiv_type.m"
              MR_Word parse_tree__equiv_type__MaybeRet0_35 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__equiv_type__Type0_17, (MR_Integer) 2)));
#line 1126 "equiv_type.m"
              MR_Word parse_tree__equiv_type__Purity_36 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__equiv_type__Type0_17, (MR_Integer) 3)));
#line 1126 "equiv_type.m"
              MR_Word parse_tree__equiv_type__Args_38;
#line 1126 "equiv_type.m"
              MR_Word parse_tree__equiv_type__ArgsCirc_39;
#line 1126 "equiv_type.m"
              MR_Word parse_tree__equiv_type__MaybeRet_44;
#line 1126 "equiv_type.m"
              MR_Word parse_tree__equiv_type__STATE_VARIABLE_VarSet_65_65;
#line 1126 "equiv_type.m"
              MR_Word parse_tree__equiv_type__STATE_VARIABLE_EquivTypeInfo_66_66;
#line 1126 "equiv_type.m"
              MR_Word parse_tree__equiv_type__STATE_VARIABLE_UsedModules_67_67;
#line 1126 "equiv_type.m"
              MR_Word parse_tree__equiv_type__ArgsChanged_79;

#line 1127 "equiv_type.m"
              {
#line 1127 "equiv_type.m"
                parse_tree__equiv_type__replace_in_type_list_location_circ_2_14_p_0(parse_tree__equiv_type__MaybeRecord_14, parse_tree__equiv_type__TypeEqvMap_15, parse_tree__equiv_type__TypeCtorsAlreadyExpanded_16, parse_tree__equiv_type__Args0_34, &parse_tree__equiv_type__Args_38, &parse_tree__equiv_type__ArgsChanged_79, (MR_Integer) 0, &parse_tree__equiv_type__ArgsCirc_39, parse_tree__equiv_type__STATE_VARIABLE_VarSet_0_47, &parse_tree__equiv_type__STATE_VARIABLE_VarSet_65_65, parse_tree__equiv_type__STATE_VARIABLE_EquivTypeInfo_0_49, &parse_tree__equiv_type__STATE_VARIABLE_EquivTypeInfo_66_66, parse_tree__equiv_type__STATE_VARIABLE_UsedModules_0_51, &parse_tree__equiv_type__STATE_VARIABLE_UsedModules_67_67);
              }
#line 1138 "equiv_type.m"
              if ((parse_tree__equiv_type__MaybeRet0_35 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 1139 "equiv_type.m"
                {
#line 1140 "equiv_type.m"
                  parse_tree__equiv_type__MaybeRet_44 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 1141 "equiv_type.m"
                  *parse_tree__equiv_type__Changed_19 = parse_tree__equiv_type__ArgsChanged_79;
#line 1142 "equiv_type.m"
                  *parse_tree__equiv_type__Circ_20 = parse_tree__equiv_type__ArgsCirc_39;
#line 1139 "equiv_type.m"
                  *parse_tree__equiv_type__STATE_VARIABLE_VarSet_48 = parse_tree__equiv_type__STATE_VARIABLE_VarSet_65_65;
#line 1139 "equiv_type.m"
                  *parse_tree__equiv_type__STATE_VARIABLE_EquivTypeInfo_50 = parse_tree__equiv_type__STATE_VARIABLE_EquivTypeInfo_66_66;
#line 1139 "equiv_type.m"
                  *parse_tree__equiv_type__STATE_VARIABLE_UsedModules_52 = parse_tree__equiv_type__STATE_VARIABLE_UsedModules_67_67;
#line 1139 "equiv_type.m"
                }
#line 1138 "equiv_type.m"
              else
#line 1131 "equiv_type.m"
                {
#line 1131 "equiv_type.m"
                  MR_Word parse_tree__equiv_type__Ret0_40 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__equiv_type__MaybeRet0_35, (MR_Integer) 0)));
#line 1131 "equiv_type.m"
                  MR_Word parse_tree__equiv_type__Ret_41;
#line 1131 "equiv_type.m"
                  MR_Word parse_tree__equiv_type__RetChanged_42;
#line 1131 "equiv_type.m"
                  MR_Word parse_tree__equiv_type__RetCirc_43;

#line 1132 "equiv_type.m"
                  {
#line 1132 "equiv_type.m"
                    parse_tree__equiv_type__replace_in_type_maybe_record_use_2_13_p_0(parse_tree__equiv_type__MaybeRecord_14, parse_tree__equiv_type__TypeEqvMap_15, parse_tree__equiv_type__TypeCtorsAlreadyExpanded_16, parse_tree__equiv_type__Ret0_40, &parse_tree__equiv_type__Ret_41, &parse_tree__equiv_type__RetChanged_42, &parse_tree__equiv_type__RetCirc_43, parse_tree__equiv_type__STATE_VARIABLE_VarSet_65_65, parse_tree__equiv_type__STATE_VARIABLE_VarSet_48, parse_tree__equiv_type__STATE_VARIABLE_EquivTypeInfo_66_66, parse_tree__equiv_type__STATE_VARIABLE_EquivTypeInfo_50, parse_tree__equiv_type__STATE_VARIABLE_UsedModules_67_67, parse_tree__equiv_type__STATE_VARIABLE_UsedModules_52);
                  }
#line 1135 "equiv_type.m"
                  {
#line 1135 "equiv_type.m"
                    parse_tree__equiv_type__MaybeRet_44 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 1135 "equiv_type.m"
                    MR_hl_field(MR_mktag(1), parse_tree__equiv_type__MaybeRet_44, 0) = ((MR_Box) (parse_tree__equiv_type__Ret_41));
#line 1135 "equiv_type.m"
                  }
#line 1136 "equiv_type.m"
                  {
#line 1136 "equiv_type.m"
                    *parse_tree__equiv_type__Changed_19 = mercury__bool__or_2_f_0(parse_tree__equiv_type__ArgsChanged_79, parse_tree__equiv_type__RetChanged_42);
                  }
#line 1137 "equiv_type.m"
                  {
#line 1137 "equiv_type.m"
                    *parse_tree__equiv_type__Circ_20 = mercury__bool__or_2_f_0(parse_tree__equiv_type__ArgsCirc_39, parse_tree__equiv_type__RetCirc_43);
                  }
#line 1131 "equiv_type.m"
                }
#line 1147 "equiv_type.m"
#line 1147 "equiv_type.m"
              switch (*parse_tree__equiv_type__Changed_19) {
#line 1147 "equiv_type.m"
                default: /*NOTREACHED*/ MR_assert(0);
#line 1147 "equiv_type.m"
                case (MR_Integer) 0:
#line 1149 "equiv_type.m"
                  *parse_tree__equiv_type__Type_18 = parse_tree__equiv_type__Type0_17;
#line 1147 "equiv_type.m"
                  break;
#line 1147 "equiv_type.m"
                case (MR_Integer) 1:
#line 1146 "equiv_type.m"
                  {
#line 1146 "equiv_type.m"
                    MR_Word base;
#line 1146 "equiv_type.m"
                    base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL));
#line 1146 "equiv_type.m"
                    *parse_tree__equiv_type__Type_18 = base;
#line 1146 "equiv_type.m"
                    MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 1146 "equiv_type.m"
                    MR_hl_field(MR_mktag(3), base, 1) = ((MR_Box) (parse_tree__equiv_type__Args_38));
#line 1146 "equiv_type.m"
                    MR_hl_field(MR_mktag(3), base, 2) = ((MR_Box) (parse_tree__equiv_type__MaybeRet_44));
#line 1146 "equiv_type.m"
                    MR_hl_field(MR_mktag(3), base, 3) = ((MR_Box) (parse_tree__equiv_type__Purity_36));
#line 1146 "equiv_type.m"
                    MR_hl_field(MR_mktag(3), base, 4) = NULL;
#line 1146 "equiv_type.m"
                  }
#line 1147 "equiv_type.m"
                  break;
#line 1147 "equiv_type.m"
              }
#line 1126 "equiv_type.m"
            }
#line 1106 "equiv_type.m"
            break;
#line 1106 "equiv_type.m"
          case (MR_Integer) 2:
#line 1164 "equiv_type.m"
            {
#line 1164 "equiv_type.m"
              MR_Word parse_tree__equiv_type__Var_83 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__equiv_type__Type0_17, (MR_Integer) 1)));
#line 1164 "equiv_type.m"
              MR_Word parse_tree__equiv_type__Kind_84 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__equiv_type__Type0_17, (MR_Integer) 3)));
#line 1164 "equiv_type.m"
              MR_Word parse_tree__equiv_type__Args0_85 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__equiv_type__Type0_17, (MR_Integer) 2)));
#line 1164 "equiv_type.m"
              MR_Word parse_tree__equiv_type__Args_86;

#line 1165 "equiv_type.m"
              {
#line 1165 "equiv_type.m"
                parse_tree__equiv_type__replace_in_type_list_location_circ_2_14_p_0(parse_tree__equiv_type__MaybeRecord_14, parse_tree__equiv_type__TypeEqvMap_15, parse_tree__equiv_type__TypeCtorsAlreadyExpanded_16, parse_tree__equiv_type__Args0_85, &parse_tree__equiv_type__Args_86, parse_tree__equiv_type__Changed_19, (MR_Integer) 0, parse_tree__equiv_type__Circ_20, parse_tree__equiv_type__STATE_VARIABLE_VarSet_0_47, parse_tree__equiv_type__STATE_VARIABLE_VarSet_48, parse_tree__equiv_type__STATE_VARIABLE_EquivTypeInfo_0_49, parse_tree__equiv_type__STATE_VARIABLE_EquivTypeInfo_50, parse_tree__equiv_type__STATE_VARIABLE_UsedModules_0_51, parse_tree__equiv_type__STATE_VARIABLE_UsedModules_52);
              }
#line 1171 "equiv_type.m"
#line 1171 "equiv_type.m"
              switch (*parse_tree__equiv_type__Changed_19) {
#line 1171 "equiv_type.m"
                default: /*NOTREACHED*/ MR_assert(0);
#line 1171 "equiv_type.m"
                case (MR_Integer) 0:
#line 1173 "equiv_type.m"
                  *parse_tree__equiv_type__Type_18 = parse_tree__equiv_type__Type0_17;
#line 1171 "equiv_type.m"
                  break;
#line 1171 "equiv_type.m"
                case (MR_Integer) 1:
#line 1170 "equiv_type.m"
                  {
#line 1170 "equiv_type.m"
                    MR_Word base;
#line 1170 "equiv_type.m"
                    base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL));
#line 1170 "equiv_type.m"
                    *parse_tree__equiv_type__Type_18 = base;
#line 1170 "equiv_type.m"
                    MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
#line 1170 "equiv_type.m"
                    MR_hl_field(MR_mktag(3), base, 1) = ((MR_Box) (parse_tree__equiv_type__Var_83));
#line 1170 "equiv_type.m"
                    MR_hl_field(MR_mktag(3), base, 2) = ((MR_Box) (parse_tree__equiv_type__Args_86));
#line 1170 "equiv_type.m"
                    MR_hl_field(MR_mktag(3), base, 3) = ((MR_Box) (parse_tree__equiv_type__Kind_84));
#line 1170 "equiv_type.m"
                  }
#line 1171 "equiv_type.m"
                  break;
#line 1171 "equiv_type.m"
              }
#line 1164 "equiv_type.m"
            }
#line 1106 "equiv_type.m"
            break;
#line 1106 "equiv_type.m"
          case (MR_Integer) 3:
#line 1176 "equiv_type.m"
            {
#line 1176 "equiv_type.m"
              MR_Word parse_tree__equiv_type__RawType0_45 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__equiv_type__Type0_17, (MR_Integer) 1)));
#line 1176 "equiv_type.m"
              MR_Word parse_tree__equiv_type__RawType_46;
#line 1176 "equiv_type.m"
              MR_Word parse_tree__equiv_type__Kind_87 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__equiv_type__Type0_17, (MR_Integer) 2)));

#line 1177 "equiv_type.m"
              {
#line 1177 "equiv_type.m"
                parse_tree__equiv_type__replace_in_type_maybe_record_use_2_13_p_0(parse_tree__equiv_type__MaybeRecord_14, parse_tree__equiv_type__TypeEqvMap_15, parse_tree__equiv_type__TypeCtorsAlreadyExpanded_16, parse_tree__equiv_type__RawType0_45, &parse_tree__equiv_type__RawType_46, parse_tree__equiv_type__Changed_19, parse_tree__equiv_type__Circ_20, parse_tree__equiv_type__STATE_VARIABLE_VarSet_0_47, parse_tree__equiv_type__STATE_VARIABLE_VarSet_48, parse_tree__equiv_type__STATE_VARIABLE_EquivTypeInfo_0_49, parse_tree__equiv_type__STATE_VARIABLE_EquivTypeInfo_50, parse_tree__equiv_type__STATE_VARIABLE_UsedModules_0_51, parse_tree__equiv_type__STATE_VARIABLE_UsedModules_52);
              }
#line 1183 "equiv_type.m"
#line 1183 "equiv_type.m"
              switch (*parse_tree__equiv_type__Changed_19) {
#line 1183 "equiv_type.m"
                default: /*NOTREACHED*/ MR_assert(0);
#line 1183 "equiv_type.m"
                case (MR_Integer) 0:
#line 1185 "equiv_type.m"
                  *parse_tree__equiv_type__Type_18 = parse_tree__equiv_type__Type0_17;
#line 1183 "equiv_type.m"
                  break;
#line 1183 "equiv_type.m"
                case (MR_Integer) 1:
#line 1182 "equiv_type.m"
                  {
#line 1182 "equiv_type.m"
                    MR_Word base;
#line 1182 "equiv_type.m"
                    base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
#line 1182 "equiv_type.m"
                    *parse_tree__equiv_type__Type_18 = base;
#line 1182 "equiv_type.m"
                    MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 3));
#line 1182 "equiv_type.m"
                    MR_hl_field(MR_mktag(3), base, 1) = ((MR_Box) (parse_tree__equiv_type__RawType_46));
#line 1182 "equiv_type.m"
                    MR_hl_field(MR_mktag(3), base, 2) = ((MR_Box) (parse_tree__equiv_type__Kind_87));
#line 1182 "equiv_type.m"
                  }
#line 1183 "equiv_type.m"
                  break;
#line 1183 "equiv_type.m"
              }
#line 1176 "equiv_type.m"
            }
#line 1106 "equiv_type.m"
            break;
#line 1106 "equiv_type.m"
        }
#line 1106 "equiv_type.m"
        break;
#line 1106 "equiv_type.m"
    }
#line 1106 "equiv_type.m"
  }
#line 1096 "equiv_type.m"
}

#line 1083 "equiv_type.m"
static void MR_CALL 
parse_tree__equiv_type__replace_in_type_maybe_record_use_11_p_0(
#line 1083 "equiv_type.m"
  MR_Word parse_tree__equiv_type__MaybeRecord_12,
#line 1083 "equiv_type.m"
  MR_Word parse_tree__equiv_type__TypeEqvMap_13,
#line 1083 "equiv_type.m"
  MR_Word parse_tree__equiv_type__Type0_14,
#line 1083 "equiv_type.m"
  MR_Word * parse_tree__equiv_type__Type_15,
#line 1083 "equiv_type.m"
  MR_Word * parse_tree__equiv_type__Changed_16,
#line 1083 "equiv_type.m"
  MR_Word parse_tree__equiv_type__STATE_VARIABLE_VarSet_0_21,
#line 1083 "equiv_type.m"
  MR_Word * parse_tree__equiv_type__STATE_VARIABLE_VarSet_22,
#line 1083 "equiv_type.m"
  MR_Word parse_tree__equiv_type__STATE_VARIABLE_EquivTypeInfo_0_23,
#line 1083 "equiv_type.m"
  MR_Word * parse_tree__equiv_type__STATE_VARIABLE_EquivTypeInfo_24,
#line 1083 "equiv_type.m"
  MR_Word parse_tree__equiv_type__STATE_VARIABLE_UsedModules_0_25,
#line 1083 "equiv_type.m"
  MR_Word * parse_tree__equiv_type__STATE_VARIABLE_UsedModules_26)
#line 1083 "equiv_type.m"
{
#line 1089 "equiv_type.m"
  {
#line 1089 "equiv_type.m"
    MR_bool parse_tree__equiv_type__succeeded;
#line 1090 "equiv_type.m"
    MR_Word parse_tree__equiv_type__V_20_20;

#line 1090 "equiv_type.m"
    {
#line 1090 "equiv_type.m"
      parse_tree__equiv_type__replace_in_type_maybe_record_use_2_13_p_0(parse_tree__equiv_type__MaybeRecord_12, parse_tree__equiv_type__TypeEqvMap_13, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), parse_tree__equiv_type__Type0_14, parse_tree__equiv_type__Type_15, parse_tree__equiv_type__Changed_16, &parse_tree__equiv_type__V_20_20, parse_tree__equiv_type__STATE_VARIABLE_VarSet_0_21, parse_tree__equiv_type__STATE_VARIABLE_VarSet_22, parse_tree__equiv_type__STATE_VARIABLE_EquivTypeInfo_0_23, parse_tree__equiv_type__STATE_VARIABLE_EquivTypeInfo_24, parse_tree__equiv_type__STATE_VARIABLE_UsedModules_0_25, parse_tree__equiv_type__STATE_VARIABLE_UsedModules_26);
    }
#line 1089 "equiv_type.m"
  }
#line 1083 "equiv_type.m"
}

#line 1068 "equiv_type.m"
static MR_bool MR_CALL 
parse_tree__equiv_type__replace_in_ctor_arg_list_2_13_p_0_1(
#line 1068 "equiv_type.m"
  MR_Box parse_tree__equiv_type__closure_arg)
#line 1068 "equiv_type.m"
{
#line 1068 "equiv_type.m"
  {
#line 1068 "equiv_type.m"
    MR_bool parse_tree__equiv_type__succeeded;
#line 1068 "equiv_type.m"
    MR_Box parse_tree__equiv_type__closure = parse_tree__equiv_type__closure_arg;

#line 1068 "equiv_type.m"
    {
#line 1068 "equiv_type.m"
      return parse_tree__equiv_type__succeeded = parse_tree__equiv_type__IntroducedFrom__pred__replace_in_ctor_arg_list_2__1068__1_2_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__equiv_type__closure, (MR_Integer) 3))), ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__equiv_type__closure, (MR_Integer) 4))));
    }
#line 1068 "equiv_type.m"
    return parse_tree__equiv_type__succeeded;
#line 1068 "equiv_type.m"
  }
#line 1068 "equiv_type.m"
}

#line 1045 "equiv_type.m"
static void MR_CALL 
parse_tree__equiv_type__replace_in_ctor_arg_list_2_13_p_0(
#line 1045 "equiv_type.m"
  MR_Word parse_tree__equiv_type__HeadVar__1_1,
#line 1045 "equiv_type.m"
  MR_Word parse_tree__equiv_type__HeadVar__2_2,
#line 1045 "equiv_type.m"
  MR_Word parse_tree__equiv_type__HeadVar__3_3,
#line 1045 "equiv_type.m"
  MR_Word parse_tree__equiv_type__HeadVar__4_4,
#line 1045 "equiv_type.m"
  MR_Word * parse_tree__equiv_type__HeadVar__5_5,
#line 1045 "equiv_type.m"
  MR_Word parse_tree__equiv_type__STATE_VARIABLE_Circ_0_6,
#line 1045 "equiv_type.m"
  MR_Word * parse_tree__equiv_type__STATE_VARIABLE_Circ_7,
#line 1045 "equiv_type.m"
  MR_Word parse_tree__equiv_type__STATE_VARIABLE_VarSet_0_8,
#line 1045 "equiv_type.m"
  MR_Word * parse_tree__equiv_type__STATE_VARIABLE_VarSet_9,
#line 1045 "equiv_type.m"
  MR_Word parse_tree__equiv_type__STATE_VARIABLE_EquivTypeInfo_0_10,
#line 1045 "equiv_type.m"
  MR_Word * parse_tree__equiv_type__STATE_VARIABLE_EquivTypeInfo_11,
#line 1045 "equiv_type.m"
  MR_Word parse_tree__equiv_type__STATE_VARIABLE_UsedModules_0_12,
#line 1045 "equiv_type.m"
  MR_Word * parse_tree__equiv_type__STATE_VARIABLE_UsedModules_13)
#line 1045 "equiv_type.m"
{
#line 1052 "equiv_type.m"
  {
#line 1052 "equiv_type.m"
    MR_bool parse_tree__equiv_type__succeeded;

#line 1052 "equiv_type.m"
    if ((parse_tree__equiv_type__HeadVar__4_4 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 1052 "equiv_type.m"
      {
#line 1052 "equiv_type.m"
        *parse_tree__equiv_type__HeadVar__5_5 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 1053 "equiv_type.m"
        *parse_tree__equiv_type__STATE_VARIABLE_UsedModules_13 = parse_tree__equiv_type__STATE_VARIABLE_UsedModules_0_12;
#line 1053 "equiv_type.m"
        *parse_tree__equiv_type__STATE_VARIABLE_EquivTypeInfo_11 = parse_tree__equiv_type__STATE_VARIABLE_EquivTypeInfo_0_10;
#line 1053 "equiv_type.m"
        *parse_tree__equiv_type__STATE_VARIABLE_VarSet_9 = parse_tree__equiv_type__STATE_VARIABLE_VarSet_0_8;
#line 1053 "equiv_type.m"
        *parse_tree__equiv_type__STATE_VARIABLE_Circ_7 = parse_tree__equiv_type__STATE_VARIABLE_Circ_0_6;
#line 1052 "equiv_type.m"
      }
#line 1052 "equiv_type.m"
    else
#line 1056 "equiv_type.m"
      {
#line 1056 "equiv_type.m"
        MR_Word parse_tree__equiv_type__Arg0_32 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__equiv_type__HeadVar__4_4, (MR_Integer) 0)));
#line 1056 "equiv_type.m"
        MR_Word parse_tree__equiv_type__Args0_33 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__equiv_type__HeadVar__4_4, (MR_Integer) 1)));
#line 1056 "equiv_type.m"
        MR_Word parse_tree__equiv_type__Arg_34;
#line 1056 "equiv_type.m"
        MR_Word parse_tree__equiv_type__Args_35;
#line 1056 "equiv_type.m"
        MR_Word parse_tree__equiv_type__Name_40 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__equiv_type__Arg0_32, (MR_Integer) 0)));
#line 1056 "equiv_type.m"
        MR_Word parse_tree__equiv_type__Type0_41 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__equiv_type__Arg0_32, (MR_Integer) 1)));
#line 1056 "equiv_type.m"
        MR_Word parse_tree__equiv_type__Width_42 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__equiv_type__Arg0_32, (MR_Integer) 2)));
#line 1056 "equiv_type.m"
        MR_Word parse_tree__equiv_type__Context_43 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__equiv_type__Arg0_32, (MR_Integer) 3)));
#line 1056 "equiv_type.m"
        MR_Word parse_tree__equiv_type__Type_44;
#line 1056 "equiv_type.m"
        MR_Word parse_tree__equiv_type__ContainsCirc_46;
#line 1056 "equiv_type.m"
        MR_Word parse_tree__equiv_type__STATE_VARIABLE_VarSet_58_58;
#line 1056 "equiv_type.m"
        MR_Word parse_tree__equiv_type__STATE_VARIABLE_EquivTypeInfo_59_59;
#line 1056 "equiv_type.m"
        MR_Word parse_tree__equiv_type__STATE_VARIABLE_UsedModules_60_60;
#line 1056 "equiv_type.m"
        MR_Word parse_tree__equiv_type__STATE_VARIABLE_Circ_65_65;
#line 1058 "equiv_type.m"
        MR_Word parse_tree__equiv_type__V_45_45;

#line 1058 "equiv_type.m"
        {
#line 1058 "equiv_type.m"
          parse_tree__equiv_type__replace_in_type_maybe_record_use_2_13_p_0(parse_tree__equiv_type__HeadVar__1_1, parse_tree__equiv_type__HeadVar__2_2, parse_tree__equiv_type__HeadVar__3_3, parse_tree__equiv_type__Type0_41, &parse_tree__equiv_type__Type_44, &parse_tree__equiv_type__V_45_45, &parse_tree__equiv_type__ContainsCirc_46, parse_tree__equiv_type__STATE_VARIABLE_VarSet_0_8, &parse_tree__equiv_type__STATE_VARIABLE_VarSet_58_58, parse_tree__equiv_type__STATE_VARIABLE_EquivTypeInfo_0_10, &parse_tree__equiv_type__STATE_VARIABLE_EquivTypeInfo_59_59, parse_tree__equiv_type__STATE_VARIABLE_UsedModules_0_12, &parse_tree__equiv_type__STATE_VARIABLE_UsedModules_60_60);
        }
#line 1062 "equiv_type.m"
#line 1062 "equiv_type.m"
        switch (MR_tag((MR_Word) parse_tree__equiv_type__Width_42)) {
#line 1062 "equiv_type.m"
          default: /*NOTREACHED*/ MR_assert(0);
#line 1062 "equiv_type.m"
          case (MR_Integer) 0:
#line 1062 "equiv_type.m"
#line 1062 "equiv_type.m"
            switch (MR_unmkbody(parse_tree__equiv_type__Width_42)) {
#line 1062 "equiv_type.m"
              default: /*NOTREACHED*/ MR_assert(0);
#line 1062 "equiv_type.m"
              case (MR_Integer) 0:
#line 1061 "equiv_type.m"
                {
#line 1061 "equiv_type.m"
                }
#line 1062 "equiv_type.m"
                break;
#line 1062 "equiv_type.m"
              case (MR_Integer) 1:
#line 1063 "equiv_type.m"
                {
#line 1063 "equiv_type.m"
                }
#line 1062 "equiv_type.m"
                break;
#line 1062 "equiv_type.m"
            }
#line 1062 "equiv_type.m"
            break;
#line 1062 "equiv_type.m"
          case (MR_Integer) 1:
#line 1062 "equiv_type.m"
          case (MR_Integer) 2:
#line 1067 "equiv_type.m"
            {
#line 1067 "equiv_type.m"
              MR_Word parse_tree__equiv_type__V_61_61;

#line 1068 "equiv_type.m"
              {
#line 1068 "equiv_type.m"
                parse_tree__equiv_type__V_61_61 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
#line 1068 "equiv_type.m"
                MR_hl_field(MR_mktag(0), parse_tree__equiv_type__V_61_61, 0) = ((MR_Box) (&parse_tree__equiv_type_scalar_common_5[0]));
#line 1068 "equiv_type.m"
                MR_hl_field(MR_mktag(0), parse_tree__equiv_type__V_61_61, 1) = ((MR_Box) (parse_tree__equiv_type__replace_in_ctor_arg_list_2_13_p_0_1));
#line 1068 "equiv_type.m"
                MR_hl_field(MR_mktag(0), parse_tree__equiv_type__V_61_61, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
#line 1068 "equiv_type.m"
                MR_hl_field(MR_mktag(0), parse_tree__equiv_type__V_61_61, 3) = ((MR_Box) (parse_tree__equiv_type__Type0_41));
#line 1068 "equiv_type.m"
                MR_hl_field(MR_mktag(0), parse_tree__equiv_type__V_61_61, 4) = ((MR_Box) (parse_tree__equiv_type__Type_44));
#line 1068 "equiv_type.m"
              }
#line 1068 "equiv_type.m"
              {
#line 1068 "equiv_type.m"
                mercury__require__expect_4_p_0(parse_tree__equiv_type__V_61_61, (MR_String) "parse_tree.equiv_type", (MR_String) "predicate \140parse_tree.equiv_type.replace_in_ctor_arg_list_2\'/13", (MR_String) "changed type of packed argument");
              }
#line 1067 "equiv_type.m"
            }
#line 1062 "equiv_type.m"
            break;
#line 1062 "equiv_type.m"
        }
#line 1071 "equiv_type.m"
        {
#line 1071 "equiv_type.m"
          parse_tree__equiv_type__Arg_34 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
#line 1071 "equiv_type.m"
          MR_hl_field(MR_mktag(0), parse_tree__equiv_type__Arg_34, 0) = ((MR_Box) (parse_tree__equiv_type__Name_40));
#line 1071 "equiv_type.m"
          MR_hl_field(MR_mktag(0), parse_tree__equiv_type__Arg_34, 1) = ((MR_Box) (parse_tree__equiv_type__Type_44));
#line 1071 "equiv_type.m"
          MR_hl_field(MR_mktag(0), parse_tree__equiv_type__Arg_34, 2) = ((MR_Box) (parse_tree__equiv_type__Width_42));
#line 1071 "equiv_type.m"
          MR_hl_field(MR_mktag(0), parse_tree__equiv_type__Arg_34, 3) = ((MR_Box) (parse_tree__equiv_type__Context_43));
#line 1071 "equiv_type.m"
        }
#line 1072 "equiv_type.m"
        {
#line 1072 "equiv_type.m"
          parse_tree__equiv_type__STATE_VARIABLE_Circ_65_65 = mercury__bool__or_2_f_0(parse_tree__equiv_type__STATE_VARIABLE_Circ_0_6, parse_tree__equiv_type__ContainsCirc_46);
        }
#line 1073 "equiv_type.m"
        {
#line 1073 "equiv_type.m"
          parse_tree__equiv_type__replace_in_ctor_arg_list_2_13_p_0(parse_tree__equiv_type__HeadVar__1_1, parse_tree__equiv_type__HeadVar__2_2, parse_tree__equiv_type__HeadVar__3_3, parse_tree__equiv_type__Args0_33, &parse_tree__equiv_type__Args_35, parse_tree__equiv_type__STATE_VARIABLE_Circ_65_65, parse_tree__equiv_type__STATE_VARIABLE_Circ_7, parse_tree__equiv_type__STATE_VARIABLE_VarSet_58_58, parse_tree__equiv_type__STATE_VARIABLE_VarSet_9, parse_tree__equiv_type__STATE_VARIABLE_EquivTypeInfo_59_59, parse_tree__equiv_type__STATE_VARIABLE_EquivTypeInfo_11, parse_tree__equiv_type__STATE_VARIABLE_UsedModules_60_60, parse_tree__equiv_type__STATE_VARIABLE_UsedModules_13);
        }
#line 1055 "equiv_type.m"
        {
#line 1055 "equiv_type.m"
          MR_Word base;
#line 1055 "equiv_type.m"
          base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1055 "equiv_type.m"
          *parse_tree__equiv_type__HeadVar__5_5 = base;
#line 1055 "equiv_type.m"
          MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (parse_tree__equiv_type__Arg_34));
#line 1055 "equiv_type.m"
          MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (parse_tree__equiv_type__Args_35));
#line 1055 "equiv_type.m"
        }
#line 1056 "equiv_type.m"
      }
#line 1052 "equiv_type.m"
  }
#line 1045 "equiv_type.m"
}

#line 1002 "equiv_type.m"
static void MR_CALL 
parse_tree__equiv_type__replace_in_type_list_location_circ_2_14_p_0(
#line 1002 "equiv_type.m"
  MR_Word parse_tree__equiv_type__HeadVar__1_1,
#line 1002 "equiv_type.m"
  MR_Word parse_tree__equiv_type__HeadVar__2_2,
#line 1002 "equiv_type.m"
  MR_Word parse_tree__equiv_type__HeadVar__3_3,
#line 1002 "equiv_type.m"
  MR_Word parse_tree__equiv_type__HeadVar__4_4,
#line 1002 "equiv_type.m"
  MR_Word * parse_tree__equiv_type__HeadVar__5_5,
#line 1002 "equiv_type.m"
  MR_Word * parse_tree__equiv_type__HeadVar__6_6,
#line 1002 "equiv_type.m"
  MR_Word parse_tree__equiv_type__HeadVar__7_7,
#line 1002 "equiv_type.m"
  MR_Word * parse_tree__equiv_type__HeadVar__8_8,
#line 1002 "equiv_type.m"
  MR_Word parse_tree__equiv_type__STATE_VARIABLE_VarSet_0_9,
#line 1002 "equiv_type.m"
  MR_Word * parse_tree__equiv_type__STATE_VARIABLE_VarSet_10,
#line 1002 "equiv_type.m"
  MR_Word parse_tree__equiv_type__STATE_VARIABLE_EquivTypeInfo_0_11,
#line 1002 "equiv_type.m"
  MR_Word * parse_tree__equiv_type__STATE_VARIABLE_EquivTypeInfo_12,
#line 1002 "equiv_type.m"
  MR_Word parse_tree__equiv_type__STATE_VARIABLE_UsedModules_0_13,
#line 1002 "equiv_type.m"
  MR_Word * parse_tree__equiv_type__STATE_VARIABLE_UsedModules_14)
#line 1002 "equiv_type.m"
{
#line 1009 "equiv_type.m"
  {
#line 1009 "equiv_type.m"
    MR_bool parse_tree__equiv_type__succeeded;

#line 1009 "equiv_type.m"
    if ((parse_tree__equiv_type__HeadVar__4_4 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 1009 "equiv_type.m"
      {
#line 1010 "equiv_type.m"
        *parse_tree__equiv_type__HeadVar__5_5 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 1010 "equiv_type.m"
        *parse_tree__equiv_type__HeadVar__6_6 = (MR_Integer) 0;
#line 1010 "equiv_type.m"
        *parse_tree__equiv_type__STATE_VARIABLE_UsedModules_14 = parse_tree__equiv_type__STATE_VARIABLE_UsedModules_0_13;
#line 1010 "equiv_type.m"
        *parse_tree__equiv_type__STATE_VARIABLE_EquivTypeInfo_12 = parse_tree__equiv_type__STATE_VARIABLE_EquivTypeInfo_0_11;
#line 1010 "equiv_type.m"
        *parse_tree__equiv_type__STATE_VARIABLE_VarSet_10 = parse_tree__equiv_type__STATE_VARIABLE_VarSet_0_9;
#line 1010 "equiv_type.m"
        *parse_tree__equiv_type__HeadVar__8_8 = parse_tree__equiv_type__HeadVar__7_7;
#line 1009 "equiv_type.m"
      }
#line 1009 "equiv_type.m"
    else
#line 1013 "equiv_type.m"
      {
#line 1013 "equiv_type.m"
        MR_Word parse_tree__equiv_type__Type0_34 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__equiv_type__HeadVar__4_4, (MR_Integer) 0)));
#line 1013 "equiv_type.m"
        MR_Word parse_tree__equiv_type__Types0_35 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__equiv_type__HeadVar__4_4, (MR_Integer) 1)));
#line 1013 "equiv_type.m"
        MR_Word parse_tree__equiv_type__Type_42;
#line 1013 "equiv_type.m"
        MR_Word parse_tree__equiv_type__Changed0_43;
#line 1013 "equiv_type.m"
        MR_Word parse_tree__equiv_type__ContainsCirc_44;
#line 1013 "equiv_type.m"
        MR_Word parse_tree__equiv_type__Types_45;
#line 1013 "equiv_type.m"
        MR_Word parse_tree__equiv_type__Changed1_46;
#line 1013 "equiv_type.m"
        MR_Word parse_tree__equiv_type__STATE_VARIABLE_VarSet_55_55;
#line 1013 "equiv_type.m"
        MR_Word parse_tree__equiv_type__STATE_VARIABLE_EquivTypeInfo_56_56;
#line 1013 "equiv_type.m"
        MR_Word parse_tree__equiv_type__STATE_VARIABLE_UsedModules_57_57;
#line 1013 "equiv_type.m"
        MR_Word parse_tree__equiv_type__STATE_VARIABLE_Circ_58_58;

#line 1014 "equiv_type.m"
        {
#line 1014 "equiv_type.m"
          parse_tree__equiv_type__replace_in_type_maybe_record_use_2_13_p_0(parse_tree__equiv_type__HeadVar__1_1, parse_tree__equiv_type__HeadVar__2_2, parse_tree__equiv_type__HeadVar__3_3, parse_tree__equiv_type__Type0_34, &parse_tree__equiv_type__Type_42, &parse_tree__equiv_type__Changed0_43, &parse_tree__equiv_type__ContainsCirc_44, parse_tree__equiv_type__STATE_VARIABLE_VarSet_0_9, &parse_tree__equiv_type__STATE_VARIABLE_VarSet_55_55, parse_tree__equiv_type__STATE_VARIABLE_EquivTypeInfo_0_11, &parse_tree__equiv_type__STATE_VARIABLE_EquivTypeInfo_56_56, parse_tree__equiv_type__STATE_VARIABLE_UsedModules_0_13, &parse_tree__equiv_type__STATE_VARIABLE_UsedModules_57_57);
        }
#line 1017 "equiv_type.m"
        {
#line 1017 "equiv_type.m"
          parse_tree__equiv_type__STATE_VARIABLE_Circ_58_58 = mercury__bool__or_2_f_0(parse_tree__equiv_type__HeadVar__7_7, parse_tree__equiv_type__ContainsCirc_44);
        }
#line 1018 "equiv_type.m"
        {
#line 1018 "equiv_type.m"
          parse_tree__equiv_type__replace_in_type_list_location_circ_2_14_p_0(parse_tree__equiv_type__HeadVar__1_1, parse_tree__equiv_type__HeadVar__2_2, parse_tree__equiv_type__HeadVar__3_3, parse_tree__equiv_type__Types0_35, &parse_tree__equiv_type__Types_45, &parse_tree__equiv_type__Changed1_46, parse_tree__equiv_type__STATE_VARIABLE_Circ_58_58, parse_tree__equiv_type__HeadVar__8_8, parse_tree__equiv_type__STATE_VARIABLE_VarSet_55_55, parse_tree__equiv_type__STATE_VARIABLE_VarSet_10, parse_tree__equiv_type__STATE_VARIABLE_EquivTypeInfo_56_56, parse_tree__equiv_type__STATE_VARIABLE_EquivTypeInfo_12, parse_tree__equiv_type__STATE_VARIABLE_UsedModules_57_57, parse_tree__equiv_type__STATE_VARIABLE_UsedModules_14);
        }
#line 1021 "equiv_type.m"
        parse_tree__equiv_type__succeeded = (parse_tree__equiv_type__Changed0_43 == (MR_Integer) 1);
#line 1022 "equiv_type.m"
        if (!(parse_tree__equiv_type__succeeded))
#line 1022 "equiv_type.m"
          parse_tree__equiv_type__succeeded = (parse_tree__equiv_type__Changed1_46 == (MR_Integer) 1);
#line 1027 "equiv_type.m"
        if (parse_tree__equiv_type__succeeded)
#line 1025 "equiv_type.m"
          {
#line 1025 "equiv_type.m"
            *parse_tree__equiv_type__HeadVar__6_6 = (MR_Integer) 1;
#line 1026 "equiv_type.m"
            {
#line 1026 "equiv_type.m"
              MR_Word base;
#line 1026 "equiv_type.m"
              base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1026 "equiv_type.m"
              *parse_tree__equiv_type__HeadVar__5_5 = base;
#line 1026 "equiv_type.m"
              MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (parse_tree__equiv_type__Type_42));
#line 1026 "equiv_type.m"
              MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (parse_tree__equiv_type__Types_45));
#line 1026 "equiv_type.m"
            }
#line 1025 "equiv_type.m"
          }
#line 1027 "equiv_type.m"
        else
#line 1028 "equiv_type.m"
          {
#line 1028 "equiv_type.m"
            *parse_tree__equiv_type__HeadVar__6_6 = (MR_Integer) 0;
#line 1029 "equiv_type.m"
            *parse_tree__equiv_type__HeadVar__5_5 = parse_tree__equiv_type__HeadVar__4_4;
#line 1028 "equiv_type.m"
          }
#line 1013 "equiv_type.m"
      }
#line 1009 "equiv_type.m"
  }
#line 1002 "equiv_type.m"
}

#line 991 "equiv_type.m"
static void MR_CALL 
parse_tree__equiv_type__replace_in_type_list_location_circ_12_p_0(
#line 991 "equiv_type.m"
  MR_Word parse_tree__equiv_type__MaybeRecord_13,
#line 991 "equiv_type.m"
  MR_Word parse_tree__equiv_type__TypeEqvMap_14,
#line 991 "equiv_type.m"
  MR_Word parse_tree__equiv_type__STATE_VARIABLE_Ts_0_21,
#line 991 "equiv_type.m"
  MR_Word * parse_tree__equiv_type__STATE_VARIABLE_Ts_22,
#line 991 "equiv_type.m"
  MR_Word * parse_tree__equiv_type__Changed_16,
#line 991 "equiv_type.m"
  MR_Word * parse_tree__equiv_type__ContainsCirc_17,
#line 991 "equiv_type.m"
  MR_Word parse_tree__equiv_type__STATE_VARIABLE_VarSet_0_23,
#line 991 "equiv_type.m"
  MR_Word * parse_tree__equiv_type__STATE_VARIABLE_VarSet_24,
#line 991 "equiv_type.m"
  MR_Word parse_tree__equiv_type__STATE_VARIABLE_EquivTypeInfo_0_25,
#line 991 "equiv_type.m"
  MR_Word * parse_tree__equiv_type__STATE_VARIABLE_EquivTypeInfo_26,
#line 991 "equiv_type.m"
  MR_Word parse_tree__equiv_type__STATE_VARIABLE_UsedModules_0_27,
#line 991 "equiv_type.m"
  MR_Word * parse_tree__equiv_type__STATE_VARIABLE_UsedModules_28)
#line 991 "equiv_type.m"
{
#line 998 "equiv_type.m"
  {
#line 998 "equiv_type.m"
    MR_bool parse_tree__equiv_type__succeeded;

#line 999 "equiv_type.m"
    {
#line 999 "equiv_type.m"
      parse_tree__equiv_type__replace_in_type_list_location_circ_2_14_p_0(parse_tree__equiv_type__MaybeRecord_13, parse_tree__equiv_type__TypeEqvMap_14, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), parse_tree__equiv_type__STATE_VARIABLE_Ts_0_21, parse_tree__equiv_type__STATE_VARIABLE_Ts_22, parse_tree__equiv_type__Changed_16, (MR_Integer) 0, parse_tree__equiv_type__ContainsCirc_17, parse_tree__equiv_type__STATE_VARIABLE_VarSet_0_23, parse_tree__equiv_type__STATE_VARIABLE_VarSet_24, parse_tree__equiv_type__STATE_VARIABLE_EquivTypeInfo_0_25, parse_tree__equiv_type__STATE_VARIABLE_EquivTypeInfo_26, parse_tree__equiv_type__STATE_VARIABLE_UsedModules_0_27, parse_tree__equiv_type__STATE_VARIABLE_UsedModules_28);
#line 999 "equiv_type.m"
      return;
    }
#line 998 "equiv_type.m"
  }
#line 991 "equiv_type.m"
}

#line 981 "equiv_type.m"
static void MR_CALL 
parse_tree__equiv_type__replace_in_type_list_location_11_p_0(
#line 981 "equiv_type.m"
  MR_Word parse_tree__equiv_type__MaybeRecord_12,
#line 981 "equiv_type.m"
  MR_Word parse_tree__equiv_type__TypeEqvMap_13,
#line 981 "equiv_type.m"
  MR_Word parse_tree__equiv_type__STATE_VARIABLE_Types_0_20,
#line 981 "equiv_type.m"
  MR_Word * parse_tree__equiv_type__STATE_VARIABLE_Types_21,
#line 981 "equiv_type.m"
  MR_Word * parse_tree__equiv_type__Changed_15,
#line 981 "equiv_type.m"
  MR_Word parse_tree__equiv_type__STATE_VARIABLE_VarSet_0_22,
#line 981 "equiv_type.m"
  MR_Word * parse_tree__equiv_type__STATE_VARIABLE_VarSet_23,
#line 981 "equiv_type.m"
  MR_Word parse_tree__equiv_type__STATE_VARIABLE_EquivTypeInfo_0_24,
#line 981 "equiv_type.m"
  MR_Word * parse_tree__equiv_type__STATE_VARIABLE_EquivTypeInfo_25,
#line 981 "equiv_type.m"
  MR_Word parse_tree__equiv_type__STATE_VARIABLE_UsedModules_0_26,
#line 981 "equiv_type.m"
  MR_Word * parse_tree__equiv_type__STATE_VARIABLE_UsedModules_27)
#line 981 "equiv_type.m"
{
#line 987 "equiv_type.m"
  {
#line 987 "equiv_type.m"
    MR_bool parse_tree__equiv_type__succeeded;
#line 988 "equiv_type.m"
    MR_Word parse_tree__equiv_type__V_19_19;

#line 988 "equiv_type.m"
    {
#line 988 "equiv_type.m"
      parse_tree__equiv_type__replace_in_type_list_location_circ_2_14_p_0(parse_tree__equiv_type__MaybeRecord_12, parse_tree__equiv_type__TypeEqvMap_13, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), parse_tree__equiv_type__STATE_VARIABLE_Types_0_20, parse_tree__equiv_type__STATE_VARIABLE_Types_21, parse_tree__equiv_type__Changed_15, (MR_Integer) 0, &parse_tree__equiv_type__V_19_19, parse_tree__equiv_type__STATE_VARIABLE_VarSet_0_22, parse_tree__equiv_type__STATE_VARIABLE_VarSet_23, parse_tree__equiv_type__STATE_VARIABLE_EquivTypeInfo_0_24, parse_tree__equiv_type__STATE_VARIABLE_EquivTypeInfo_25, parse_tree__equiv_type__STATE_VARIABLE_UsedModules_0_26, parse_tree__equiv_type__STATE_VARIABLE_UsedModules_27);
    }
#line 987 "equiv_type.m"
  }
#line 981 "equiv_type.m"
}

#line 849 "equiv_type.m"
static void MR_CALL 
parse_tree__equiv_type__replace_in_ctor_10_p_0_1(
#line 849 "equiv_type.m"
  MR_Box parse_tree__equiv_type__closure_arg,
#line 849 "equiv_type.m"
  MR_Box parse_tree__equiv_type__wrapper_arg_1,
#line 849 "equiv_type.m"
  MR_Box * parse_tree__equiv_type__wrapper_arg_2,
#line 849 "equiv_type.m"
  MR_Box parse_tree__equiv_type__wrapper_arg_3,
#line 849 "equiv_type.m"
  MR_Box * parse_tree__equiv_type__wrapper_arg_4,
#line 849 "equiv_type.m"
  MR_Box parse_tree__equiv_type__wrapper_arg_5,
#line 849 "equiv_type.m"
  MR_Box * parse_tree__equiv_type__wrapper_arg_6,
#line 849 "equiv_type.m"
  MR_Box parse_tree__equiv_type__wrapper_arg_7,
#line 849 "equiv_type.m"
  MR_Box * parse_tree__equiv_type__wrapper_arg_8)
#line 849 "equiv_type.m"
{
#line 849 "equiv_type.m"
  {
#line 849 "equiv_type.m"
    MR_Box parse_tree__equiv_type__closure = parse_tree__equiv_type__closure_arg;
#line 849 "equiv_type.m"
    MR_Word parse_tree__equiv_type__conv3_Constraint_14;
#line 849 "equiv_type.m"
    MR_Word parse_tree__equiv_type__conv2_STATE_VARIABLE_VarSet_24;
#line 849 "equiv_type.m"
    MR_Word parse_tree__equiv_type__conv1_STATE_VARIABLE_EquivTypeInfo_26;
#line 849 "equiv_type.m"
    MR_Word parse_tree__equiv_type__conv0_STATE_VARIABLE_UsedModules_28;

#line 849 "equiv_type.m"
    {
#line 849 "equiv_type.m"
      parse_tree__equiv_type__replace_in_prog_constraint_location_10_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__equiv_type__closure, (MR_Integer) 3))), ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__equiv_type__closure, (MR_Integer) 4))), ((MR_Word) parse_tree__equiv_type__wrapper_arg_1), &parse_tree__equiv_type__conv3_Constraint_14, ((MR_Word) parse_tree__equiv_type__wrapper_arg_3), &parse_tree__equiv_type__conv2_STATE_VARIABLE_VarSet_24, ((MR_Word) parse_tree__equiv_type__wrapper_arg_5), &parse_tree__equiv_type__conv1_STATE_VARIABLE_EquivTypeInfo_26, ((MR_Word) parse_tree__equiv_type__wrapper_arg_7), &parse_tree__equiv_type__conv0_STATE_VARIABLE_UsedModules_28);
    }
#line 849 "equiv_type.m"
    *parse_tree__equiv_type__wrapper_arg_2 = ((MR_Box) (parse_tree__equiv_type__conv3_Constraint_14));
#line 849 "equiv_type.m"
    *parse_tree__equiv_type__wrapper_arg_4 = ((MR_Box) (parse_tree__equiv_type__conv2_STATE_VARIABLE_VarSet_24));
#line 849 "equiv_type.m"
    *parse_tree__equiv_type__wrapper_arg_6 = ((MR_Box) (parse_tree__equiv_type__conv1_STATE_VARIABLE_EquivTypeInfo_26));
#line 849 "equiv_type.m"
    *parse_tree__equiv_type__wrapper_arg_8 = ((MR_Box) (parse_tree__equiv_type__conv0_STATE_VARIABLE_UsedModules_28));
#line 849 "equiv_type.m"
  }
#line 849 "equiv_type.m"
}

#line 961 "equiv_type.m"
static void MR_CALL 
parse_tree__equiv_type__replace_in_ctor_10_p_0(
#line 961 "equiv_type.m"
  MR_Word parse_tree__equiv_type__MaybeRecord_11,
#line 961 "equiv_type.m"
  MR_Word parse_tree__equiv_type__TypeEqvMap_12,
#line 961 "equiv_type.m"
  MR_Word parse_tree__equiv_type__Ctor0_13,
#line 961 "equiv_type.m"
  MR_Word * parse_tree__equiv_type__Ctor_14,
#line 961 "equiv_type.m"
  MR_Word parse_tree__equiv_type__STATE_VARIABLE_VarSet_0_27,
#line 961 "equiv_type.m"
  MR_Word * parse_tree__equiv_type__STATE_VARIABLE_VarSet_28,
#line 961 "equiv_type.m"
  MR_Word parse_tree__equiv_type__STATE_VARIABLE_EquivTypeInfo_0_29,
#line 961 "equiv_type.m"
  MR_Word * parse_tree__equiv_type__STATE_VARIABLE_EquivTypeInfo_30,
#line 961 "equiv_type.m"
  MR_Word parse_tree__equiv_type__STATE_VARIABLE_UsedModules_0_31,
#line 961 "equiv_type.m"
  MR_Word * parse_tree__equiv_type__STATE_VARIABLE_UsedModules_32)
#line 961 "equiv_type.m"
{
#line 967 "equiv_type.m"
  {
#line 967 "equiv_type.m"
    MR_bool parse_tree__equiv_type__succeeded;
#line 967 "equiv_type.m"
    MR_Word parse_tree__equiv_type__TypeCtorInfo_38_87;
#line 967 "equiv_type.m"
    MR_Word parse_tree__equiv_type__ExistQVars_18 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__equiv_type__Ctor0_13, (MR_Integer) 0)));
#line 967 "equiv_type.m"
    MR_Word parse_tree__equiv_type__Constraints0_19 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__equiv_type__Ctor0_13, (MR_Integer) 1)));
#line 967 "equiv_type.m"
    MR_Word parse_tree__equiv_type__CtorName_20 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__equiv_type__Ctor0_13, (MR_Integer) 2)));
#line 967 "equiv_type.m"
    MR_Word parse_tree__equiv_type__CtorArgs0_21 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__equiv_type__Ctor0_13, (MR_Integer) 3)));
#line 967 "equiv_type.m"
    MR_Integer parse_tree__equiv_type__Arity_22 = ((MR_Integer) (MR_hl_field(MR_mktag(0), parse_tree__equiv_type__Ctor0_13, (MR_Integer) 4)));
#line 967 "equiv_type.m"
    MR_Word parse_tree__equiv_type__Ctxt_23 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__equiv_type__Ctor0_13, (MR_Integer) 5)));
#line 967 "equiv_type.m"
    MR_Word parse_tree__equiv_type__CtorArgs_24;
#line 967 "equiv_type.m"
    MR_Word parse_tree__equiv_type__Constraints_26;
#line 967 "equiv_type.m"
    MR_Word parse_tree__equiv_type__STATE_VARIABLE_VarSet_33_33;
#line 967 "equiv_type.m"
    MR_Word parse_tree__equiv_type__STATE_VARIABLE_EquivTypeInfo_34_34;
#line 967 "equiv_type.m"
    MR_Word parse_tree__equiv_type__STATE_VARIABLE_UsedModules_35_35;
#line 967 "equiv_type.m"
    MR_Word parse_tree__equiv_type__V_74_74;
#line 1042 "equiv_type.m"
    MR_Word parse_tree__equiv_type__V_25_25;
#line 848 "equiv_type.m"
    MR_Box parse_tree__equiv_type__conv6_STATE_VARIABLE_VarSet_28;
#line 848 "equiv_type.m"
    MR_Box parse_tree__equiv_type__conv5_STATE_VARIABLE_EquivTypeInfo_30;
#line 848 "equiv_type.m"
    MR_Box parse_tree__equiv_type__conv4_STATE_VARIABLE_UsedModules_32;

#line 1042 "equiv_type.m"
    {
#line 1042 "equiv_type.m"
      parse_tree__equiv_type__replace_in_ctor_arg_list_2_13_p_0(parse_tree__equiv_type__MaybeRecord_11, parse_tree__equiv_type__TypeEqvMap_12, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), parse_tree__equiv_type__CtorArgs0_21, &parse_tree__equiv_type__CtorArgs_24, (MR_Integer) 0, &parse_tree__equiv_type__V_25_25, parse_tree__equiv_type__STATE_VARIABLE_VarSet_0_27, &parse_tree__equiv_type__STATE_VARIABLE_VarSet_33_33, parse_tree__equiv_type__STATE_VARIABLE_EquivTypeInfo_0_29, &parse_tree__equiv_type__STATE_VARIABLE_EquivTypeInfo_34_34, parse_tree__equiv_type__STATE_VARIABLE_UsedModules_0_31, &parse_tree__equiv_type__STATE_VARIABLE_UsedModules_35_35);
    }
#line 849 "equiv_type.m"
    {
#line 849 "equiv_type.m"
      parse_tree__equiv_type__V_74_74 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
#line 849 "equiv_type.m"
      MR_hl_field(MR_mktag(0), parse_tree__equiv_type__V_74_74, 0) = ((MR_Box) (&parse_tree__equiv_type_scalar_common_3[0]));
#line 849 "equiv_type.m"
      MR_hl_field(MR_mktag(0), parse_tree__equiv_type__V_74_74, 1) = ((MR_Box) (parse_tree__equiv_type__replace_in_ctor_10_p_0_1));
#line 849 "equiv_type.m"
      MR_hl_field(MR_mktag(0), parse_tree__equiv_type__V_74_74, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
#line 849 "equiv_type.m"
      MR_hl_field(MR_mktag(0), parse_tree__equiv_type__V_74_74, 3) = ((MR_Box) (parse_tree__equiv_type__MaybeRecord_11));
#line 849 "equiv_type.m"
      MR_hl_field(MR_mktag(0), parse_tree__equiv_type__V_74_74, 4) = ((MR_Box) (parse_tree__equiv_type__TypeEqvMap_12));
#line 849 "equiv_type.m"
    }
#line 9658 "parse_tree.equiv_type.c"
    parse_tree__equiv_type__TypeCtorInfo_38_87 = (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_constraint_0;
#line 848 "equiv_type.m"
    {
#line 848 "equiv_type.m"
      mercury__list__map_foldl3_9_p_1(parse_tree__equiv_type__TypeCtorInfo_38_87, parse_tree__equiv_type__TypeCtorInfo_38_87, (MR_Word) &parse_tree__equiv_type_scalar_common_1[6], (MR_Word) &parse_tree__equiv_type_scalar_common_1[7], (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_used_modules_0, parse_tree__equiv_type__V_74_74, parse_tree__equiv_type__Constraints0_19, &parse_tree__equiv_type__Constraints_26, ((MR_Box) (parse_tree__equiv_type__STATE_VARIABLE_VarSet_33_33)), &parse_tree__equiv_type__conv6_STATE_VARIABLE_VarSet_28, ((MR_Box) (parse_tree__equiv_type__STATE_VARIABLE_EquivTypeInfo_34_34)), &parse_tree__equiv_type__conv5_STATE_VARIABLE_EquivTypeInfo_30, ((MR_Box) (parse_tree__equiv_type__STATE_VARIABLE_UsedModules_35_35)), &parse_tree__equiv_type__conv4_STATE_VARIABLE_UsedModules_32);
    }
#line 848 "equiv_type.m"
    *parse_tree__equiv_type__STATE_VARIABLE_VarSet_28 = ((MR_Word) parse_tree__equiv_type__conv6_STATE_VARIABLE_VarSet_28);
#line 848 "equiv_type.m"
    *parse_tree__equiv_type__STATE_VARIABLE_EquivTypeInfo_30 = ((MR_Word) parse_tree__equiv_type__conv5_STATE_VARIABLE_EquivTypeInfo_30);
#line 848 "equiv_type.m"
    *parse_tree__equiv_type__STATE_VARIABLE_UsedModules_32 = ((MR_Word) parse_tree__equiv_type__conv4_STATE_VARIABLE_UsedModules_32);
#line 973 "equiv_type.m"
    {
#line 973 "equiv_type.m"
      MR_Word base;
#line 973 "equiv_type.m"
      base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 6 * sizeof(MR_Word)), NULL, NULL);
#line 973 "equiv_type.m"
      *parse_tree__equiv_type__Ctor_14 = base;
#line 973 "equiv_type.m"
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (parse_tree__equiv_type__ExistQVars_18));
#line 973 "equiv_type.m"
      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (parse_tree__equiv_type__Constraints_26));
#line 973 "equiv_type.m"
      MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (parse_tree__equiv_type__CtorName_20));
#line 973 "equiv_type.m"
      MR_hl_field(MR_mktag(0), base, 3) = ((MR_Box) (parse_tree__equiv_type__CtorArgs_24));
#line 973 "equiv_type.m"
      MR_hl_field(MR_mktag(0), base, 4) = ((MR_Box) (parse_tree__equiv_type__Arity_22));
#line 973 "equiv_type.m"
      MR_hl_field(MR_mktag(0), base, 5) = ((MR_Box) (parse_tree__equiv_type__Ctxt_23));
#line 973 "equiv_type.m"
    }
#line 967 "equiv_type.m"
  }
#line 961 "equiv_type.m"
}

#line 958 "equiv_type.m"
static void MR_CALL 
parse_tree__equiv_type__replace_in_ctors_location_10_p_0_1(
#line 958 "equiv_type.m"
  MR_Box parse_tree__equiv_type__closure_arg,
#line 958 "equiv_type.m"
  MR_Box parse_tree__equiv_type__wrapper_arg_1,
#line 958 "equiv_type.m"
  MR_Box * parse_tree__equiv_type__wrapper_arg_2,
#line 958 "equiv_type.m"
  MR_Box parse_tree__equiv_type__wrapper_arg_3,
#line 958 "equiv_type.m"
  MR_Box * parse_tree__equiv_type__wrapper_arg_4,
#line 958 "equiv_type.m"
  MR_Box parse_tree__equiv_type__wrapper_arg_5,
#line 958 "equiv_type.m"
  MR_Box * parse_tree__equiv_type__wrapper_arg_6,
#line 958 "equiv_type.m"
  MR_Box parse_tree__equiv_type__wrapper_arg_7,
#line 958 "equiv_type.m"
  MR_Box * parse_tree__equiv_type__wrapper_arg_8)
#line 958 "equiv_type.m"
{
#line 958 "equiv_type.m"
  {
#line 958 "equiv_type.m"
    MR_Box parse_tree__equiv_type__closure = parse_tree__equiv_type__closure_arg;
#line 958 "equiv_type.m"
    MR_Word parse_tree__equiv_type__conv3_Ctor_14;
#line 958 "equiv_type.m"
    MR_Word parse_tree__equiv_type__conv2_STATE_VARIABLE_VarSet_28;
#line 958 "equiv_type.m"
    MR_Word parse_tree__equiv_type__conv1_STATE_VARIABLE_EquivTypeInfo_30;
#line 958 "equiv_type.m"
    MR_Word parse_tree__equiv_type__conv0_STATE_VARIABLE_UsedModules_32;

#line 958 "equiv_type.m"
    {
#line 958 "equiv_type.m"
      parse_tree__equiv_type__replace_in_ctor_10_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__equiv_type__closure, (MR_Integer) 3))), ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__equiv_type__closure, (MR_Integer) 4))), ((MR_Word) parse_tree__equiv_type__wrapper_arg_1), &parse_tree__equiv_type__conv3_Ctor_14, ((MR_Word) parse_tree__equiv_type__wrapper_arg_3), &parse_tree__equiv_type__conv2_STATE_VARIABLE_VarSet_28, ((MR_Word) parse_tree__equiv_type__wrapper_arg_5), &parse_tree__equiv_type__conv1_STATE_VARIABLE_EquivTypeInfo_30, ((MR_Word) parse_tree__equiv_type__wrapper_arg_7), &parse_tree__equiv_type__conv0_STATE_VARIABLE_UsedModules_32);
    }
#line 958 "equiv_type.m"
    *parse_tree__equiv_type__wrapper_arg_2 = ((MR_Box) (parse_tree__equiv_type__conv3_Ctor_14));
#line 958 "equiv_type.m"
    *parse_tree__equiv_type__wrapper_arg_4 = ((MR_Box) (parse_tree__equiv_type__conv2_STATE_VARIABLE_VarSet_28));
#line 958 "equiv_type.m"
    *parse_tree__equiv_type__wrapper_arg_6 = ((MR_Box) (parse_tree__equiv_type__conv1_STATE_VARIABLE_EquivTypeInfo_30));
#line 958 "equiv_type.m"
    *parse_tree__equiv_type__wrapper_arg_8 = ((MR_Box) (parse_tree__equiv_type__conv0_STATE_VARIABLE_UsedModules_32));
#line 958 "equiv_type.m"
  }
#line 958 "equiv_type.m"
}

#line 951 "equiv_type.m"
static void MR_CALL 
parse_tree__equiv_type__replace_in_ctors_location_10_p_0(
#line 951 "equiv_type.m"
  MR_Word parse_tree__equiv_type__MaybeRecord_11,
#line 951 "equiv_type.m"
  MR_Word parse_tree__equiv_type__TypeEqvMap_12,
#line 951 "equiv_type.m"
  MR_Word parse_tree__equiv_type__STATE_VARIABLE_Ctors_0_17,
#line 951 "equiv_type.m"
  MR_Word * parse_tree__equiv_type__STATE_VARIABLE_Ctors_18,
#line 951 "equiv_type.m"
  MR_Word parse_tree__equiv_type__STATE_VARIABLE_VarSet_0_19,
#line 951 "equiv_type.m"
  MR_Word * parse_tree__equiv_type__STATE_VARIABLE_VarSet_20,
#line 951 "equiv_type.m"
  MR_Word parse_tree__equiv_type__STATE_VARIABLE_EquivTypeInfo_0_21,
#line 951 "equiv_type.m"
  MR_Word * parse_tree__equiv_type__STATE_VARIABLE_EquivTypeInfo_22,
#line 951 "equiv_type.m"
  MR_Word parse_tree__equiv_type__STATE_VARIABLE_UsedModules_0_23,
#line 951 "equiv_type.m"
  MR_Word * parse_tree__equiv_type__STATE_VARIABLE_UsedModules_24)
#line 951 "equiv_type.m"
{
#line 957 "equiv_type.m"
  {
#line 957 "equiv_type.m"
    MR_bool parse_tree__equiv_type__succeeded;
#line 957 "equiv_type.m"
    MR_Word parse_tree__equiv_type__TypeCtorInfo_38_38;
#line 957 "equiv_type.m"
    MR_Word parse_tree__equiv_type__V_25_25;
#line 958 "equiv_type.m"
    MR_Box parse_tree__equiv_type__conv6_STATE_VARIABLE_VarSet_20;
#line 958 "equiv_type.m"
    MR_Box parse_tree__equiv_type__conv5_STATE_VARIABLE_EquivTypeInfo_22;
#line 958 "equiv_type.m"
    MR_Box parse_tree__equiv_type__conv4_STATE_VARIABLE_UsedModules_24;

#line 958 "equiv_type.m"
    {
#line 958 "equiv_type.m"
      parse_tree__equiv_type__V_25_25 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
#line 958 "equiv_type.m"
      MR_hl_field(MR_mktag(0), parse_tree__equiv_type__V_25_25, 0) = ((MR_Box) (&parse_tree__equiv_type_scalar_common_3[1]));
#line 958 "equiv_type.m"
      MR_hl_field(MR_mktag(0), parse_tree__equiv_type__V_25_25, 1) = ((MR_Box) (parse_tree__equiv_type__replace_in_ctors_location_10_p_0_1));
#line 958 "equiv_type.m"
      MR_hl_field(MR_mktag(0), parse_tree__equiv_type__V_25_25, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
#line 958 "equiv_type.m"
      MR_hl_field(MR_mktag(0), parse_tree__equiv_type__V_25_25, 3) = ((MR_Box) (parse_tree__equiv_type__MaybeRecord_11));
#line 958 "equiv_type.m"
      MR_hl_field(MR_mktag(0), parse_tree__equiv_type__V_25_25, 4) = ((MR_Box) (parse_tree__equiv_type__TypeEqvMap_12));
#line 958 "equiv_type.m"
    }
#line 9808 "parse_tree.equiv_type.c"
    parse_tree__equiv_type__TypeCtorInfo_38_38 = (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_constructor_0;
#line 958 "equiv_type.m"
    {
#line 958 "equiv_type.m"
      mercury__list__map_foldl3_9_p_1(parse_tree__equiv_type__TypeCtorInfo_38_38, parse_tree__equiv_type__TypeCtorInfo_38_38, (MR_Word) &parse_tree__equiv_type_scalar_common_1[6], (MR_Word) &parse_tree__equiv_type_scalar_common_1[7], (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_used_modules_0, parse_tree__equiv_type__V_25_25, parse_tree__equiv_type__STATE_VARIABLE_Ctors_0_17, parse_tree__equiv_type__STATE_VARIABLE_Ctors_18, ((MR_Box) (parse_tree__equiv_type__STATE_VARIABLE_VarSet_0_19)), &parse_tree__equiv_type__conv6_STATE_VARIABLE_VarSet_20, ((MR_Box) (parse_tree__equiv_type__STATE_VARIABLE_EquivTypeInfo_0_21)), &parse_tree__equiv_type__conv5_STATE_VARIABLE_EquivTypeInfo_22, ((MR_Box) (parse_tree__equiv_type__STATE_VARIABLE_UsedModules_0_23)), &parse_tree__equiv_type__conv4_STATE_VARIABLE_UsedModules_24);
    }
#line 958 "equiv_type.m"
    *parse_tree__equiv_type__STATE_VARIABLE_VarSet_20 = ((MR_Word) parse_tree__equiv_type__conv6_STATE_VARIABLE_VarSet_20);
#line 958 "equiv_type.m"
    *parse_tree__equiv_type__STATE_VARIABLE_EquivTypeInfo_22 = ((MR_Word) parse_tree__equiv_type__conv5_STATE_VARIABLE_EquivTypeInfo_22);
#line 958 "equiv_type.m"
    *parse_tree__equiv_type__STATE_VARIABLE_UsedModules_24 = ((MR_Word) parse_tree__equiv_type__conv4_STATE_VARIABLE_UsedModules_24);
#line 957 "equiv_type.m"
  }
#line 951 "equiv_type.m"
}

#line 931 "equiv_type.m"
static void MR_CALL 
parse_tree__equiv_type__replace_in_subst_10_p_0(
#line 931 "equiv_type.m"
  MR_Word parse_tree__equiv_type__HeadVar__1_1,
#line 931 "equiv_type.m"
  MR_Word parse_tree__equiv_type__HeadVar__2_2,
#line 931 "equiv_type.m"
  MR_Word parse_tree__equiv_type__HeadVar__3_3,
#line 931 "equiv_type.m"
  MR_Word * parse_tree__equiv_type__HeadVar__4_4,
#line 931 "equiv_type.m"
  MR_Word parse_tree__equiv_type__STATE_VARIABLE_VarSet_0_5,
#line 931 "equiv_type.m"
  MR_Word * parse_tree__equiv_type__STATE_VARIABLE_VarSet_6,
#line 931 "equiv_type.m"
  MR_Word parse_tree__equiv_type__STATE_VARIABLE_EquivTypeInfo_0_7,
#line 931 "equiv_type.m"
  MR_Word * parse_tree__equiv_type__STATE_VARIABLE_EquivTypeInfo_8,
#line 931 "equiv_type.m"
  MR_Word parse_tree__equiv_type__STATE_VARIABLE_UsedModules_0_9,
#line 931 "equiv_type.m"
  MR_Word * parse_tree__equiv_type__STATE_VARIABLE_UsedModules_10)
#line 931 "equiv_type.m"
{
#line 936 "equiv_type.m"
  {
#line 936 "equiv_type.m"
    MR_bool parse_tree__equiv_type__succeeded;

#line 936 "equiv_type.m"
    if ((parse_tree__equiv_type__HeadVar__3_3 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 936 "equiv_type.m"
      {
#line 936 "equiv_type.m"
        *parse_tree__equiv_type__HeadVar__4_4 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 937 "equiv_type.m"
        *parse_tree__equiv_type__STATE_VARIABLE_UsedModules_10 = parse_tree__equiv_type__STATE_VARIABLE_UsedModules_0_9;
#line 936 "equiv_type.m"
        *parse_tree__equiv_type__STATE_VARIABLE_EquivTypeInfo_8 = parse_tree__equiv_type__STATE_VARIABLE_EquivTypeInfo_0_7;
#line 936 "equiv_type.m"
        *parse_tree__equiv_type__STATE_VARIABLE_VarSet_6 = parse_tree__equiv_type__STATE_VARIABLE_VarSet_0_5;
#line 936 "equiv_type.m"
      }
#line 936 "equiv_type.m"
    else
#line 939 "equiv_type.m"
      {
#line 939 "equiv_type.m"
        MR_Word parse_tree__equiv_type__Var_24;
#line 939 "equiv_type.m"
        MR_Word parse_tree__equiv_type__Type0_25;
#line 939 "equiv_type.m"
        MR_Word parse_tree__equiv_type__Subst0_26 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__equiv_type__HeadVar__3_3, (MR_Integer) 1)));
#line 939 "equiv_type.m"
        MR_Word parse_tree__equiv_type__Type_27;
#line 939 "equiv_type.m"
        MR_Word parse_tree__equiv_type__Subst_28;
#line 939 "equiv_type.m"
        MR_Word parse_tree__equiv_type__V_39_39 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__equiv_type__HeadVar__3_3, (MR_Integer) 0)));
#line 939 "equiv_type.m"
        MR_Word parse_tree__equiv_type__V_40_40;
#line 939 "equiv_type.m"
        MR_Word parse_tree__equiv_type__STATE_VARIABLE_VarSet_41_41;
#line 939 "equiv_type.m"
        MR_Word parse_tree__equiv_type__STATE_VARIABLE_EquivTypeInfo_42_42;
#line 939 "equiv_type.m"
        MR_Word parse_tree__equiv_type__STATE_VARIABLE_UsedModules_43_43;
#line 1090 "equiv_type.m"
        MR_Word parse_tree__equiv_type__V_32_32;
#line 1090 "equiv_type.m"
        MR_Word parse_tree__equiv_type__V_61_61;

#line 938 "equiv_type.m"
        parse_tree__equiv_type__Var_24 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__equiv_type__V_39_39, (MR_Integer) 0)));
#line 938 "equiv_type.m"
        parse_tree__equiv_type__Type0_25 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__equiv_type__V_39_39, (MR_Integer) 1)));
#line 1090 "equiv_type.m"
        {
#line 1090 "equiv_type.m"
          parse_tree__equiv_type__replace_in_type_maybe_record_use_2_13_p_0(parse_tree__equiv_type__HeadVar__1_1, parse_tree__equiv_type__HeadVar__2_2, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), parse_tree__equiv_type__Type0_25, &parse_tree__equiv_type__Type_27, &parse_tree__equiv_type__V_32_32, &parse_tree__equiv_type__V_61_61, parse_tree__equiv_type__STATE_VARIABLE_VarSet_0_5, &parse_tree__equiv_type__STATE_VARIABLE_VarSet_41_41, parse_tree__equiv_type__STATE_VARIABLE_EquivTypeInfo_0_7, &parse_tree__equiv_type__STATE_VARIABLE_EquivTypeInfo_42_42, parse_tree__equiv_type__STATE_VARIABLE_UsedModules_0_9, &parse_tree__equiv_type__STATE_VARIABLE_UsedModules_43_43);
        }
#line 939 "equiv_type.m"
        {
#line 939 "equiv_type.m"
          parse_tree__equiv_type__V_40_40 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 939 "equiv_type.m"
          MR_hl_field(MR_mktag(0), parse_tree__equiv_type__V_40_40, 0) = ((MR_Box) (parse_tree__equiv_type__Var_24));
#line 939 "equiv_type.m"
          MR_hl_field(MR_mktag(0), parse_tree__equiv_type__V_40_40, 1) = ((MR_Box) (parse_tree__equiv_type__Type_27));
#line 939 "equiv_type.m"
        }
#line 942 "equiv_type.m"
        {
#line 942 "equiv_type.m"
          parse_tree__equiv_type__replace_in_subst_10_p_0(parse_tree__equiv_type__HeadVar__1_1, parse_tree__equiv_type__HeadVar__2_2, parse_tree__equiv_type__Subst0_26, &parse_tree__equiv_type__Subst_28, parse_tree__equiv_type__STATE_VARIABLE_VarSet_41_41, parse_tree__equiv_type__STATE_VARIABLE_VarSet_6, parse_tree__equiv_type__STATE_VARIABLE_EquivTypeInfo_42_42, parse_tree__equiv_type__STATE_VARIABLE_EquivTypeInfo_8, parse_tree__equiv_type__STATE_VARIABLE_UsedModules_43_43, parse_tree__equiv_type__STATE_VARIABLE_UsedModules_10);
        }
#line 939 "equiv_type.m"
        {
#line 939 "equiv_type.m"
          MR_Word base;
#line 939 "equiv_type.m"
          base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 939 "equiv_type.m"
          *parse_tree__equiv_type__HeadVar__4_4 = base;
#line 939 "equiv_type.m"
          MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (parse_tree__equiv_type__V_40_40));
#line 939 "equiv_type.m"
          MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (parse_tree__equiv_type__Subst_28));
#line 939 "equiv_type.m"
        }
#line 939 "equiv_type.m"
      }
#line 936 "equiv_type.m"
  }
#line 931 "equiv_type.m"
}

#line 889 "equiv_type.m"
static void MR_CALL 
parse_tree__equiv_type__replace_in_class_method_11_p_0(
#line 889 "equiv_type.m"
  MR_Word parse_tree__equiv_type__MaybeRecord_12,
#line 889 "equiv_type.m"
  MR_Word parse_tree__equiv_type__TypeEqvMap_13,
#line 889 "equiv_type.m"
  MR_Word parse_tree__equiv_type__InstEqvMap_14,
#line 889 "equiv_type.m"
  MR_Word parse_tree__equiv_type__Method0_15,
#line 889 "equiv_type.m"
  MR_Word * parse_tree__equiv_type__Method_16,
#line 889 "equiv_type.m"
  MR_Word parse_tree__equiv_type__STATE_VARIABLE_EquivTypeInfo_0_46,
#line 889 "equiv_type.m"
  MR_Word * parse_tree__equiv_type__STATE_VARIABLE_EquivTypeInfo_47,
#line 889 "equiv_type.m"
  MR_Word parse_tree__equiv_type__STATE_VARIABLE_UsedModules_0_48,
#line 889 "equiv_type.m"
  MR_Word * parse_tree__equiv_type__STATE_VARIABLE_UsedModules_49,
#line 889 "equiv_type.m"
  MR_Word parse_tree__equiv_type__STATE_VARIABLE_Specs_0_50,
#line 889 "equiv_type.m"
  MR_Word * parse_tree__equiv_type__STATE_VARIABLE_Specs_51)
#line 889 "equiv_type.m"
{
#line 900 "equiv_type.m"
  {
#line 900 "equiv_type.m"
    MR_bool parse_tree__equiv_type__succeeded;

#line 900 "equiv_type.m"
    if (((MR_tag((MR_Word) parse_tree__equiv_type__Method0_15)) == (MR_mktag((MR_Integer) 0))))
#line 900 "equiv_type.m"
      {
#line 900 "equiv_type.m"
        MR_Word parse_tree__equiv_type__PredName_20 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__equiv_type__Method0_15, (MR_Integer) 0)));
#line 900 "equiv_type.m"
        MR_Word parse_tree__equiv_type__PredOrFunc_21 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__equiv_type__Method0_15, (MR_Integer) 1)));
#line 900 "equiv_type.m"
        MR_Word parse_tree__equiv_type__TypesAndModes0_22 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__equiv_type__Method0_15, (MR_Integer) 2)));
#line 900 "equiv_type.m"
        MR_Word parse_tree__equiv_type__WithType0_23 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__equiv_type__Method0_15, (MR_Integer) 3)));
#line 900 "equiv_type.m"
        MR_Word parse_tree__equiv_type__WithInst0_24 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__equiv_type__Method0_15, (MR_Integer) 4)));
#line 900 "equiv_type.m"
        MR_Word parse_tree__equiv_type__MaybeDetism0_25 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__equiv_type__Method0_15, (MR_Integer) 5)));
#line 900 "equiv_type.m"
        MR_Word parse_tree__equiv_type__TypeVarSet0_26 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__equiv_type__Method0_15, (MR_Integer) 6)));
#line 900 "equiv_type.m"
        MR_Word parse_tree__equiv_type__InstVarSet_27 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__equiv_type__Method0_15, (MR_Integer) 7)));
#line 900 "equiv_type.m"
        MR_Word parse_tree__equiv_type__ExistQVars_28 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__equiv_type__Method0_15, (MR_Integer) 8)));
#line 900 "equiv_type.m"
        MR_Word parse_tree__equiv_type__Purity_29 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__equiv_type__Method0_15, (MR_Integer) 9)));
#line 900 "equiv_type.m"
        MR_Word parse_tree__equiv_type__ClassContext0_30 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__equiv_type__Method0_15, (MR_Integer) 10)));
#line 900 "equiv_type.m"
        MR_Word parse_tree__equiv_type__Context_31 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__equiv_type__Method0_15, (MR_Integer) 11)));
#line 900 "equiv_type.m"
        MR_Word parse_tree__equiv_type__ClassContext_32;
#line 900 "equiv_type.m"
        MR_Word parse_tree__equiv_type__TypesAndModes_33;
#line 900 "equiv_type.m"
        MR_Word parse_tree__equiv_type__TypeVarSet_34;
#line 900 "equiv_type.m"
        MR_Word parse_tree__equiv_type__WithType_35;
#line 900 "equiv_type.m"
        MR_Word parse_tree__equiv_type__WithInst_36;
#line 900 "equiv_type.m"
        MR_Word parse_tree__equiv_type__MaybeDetism_37;
#line 900 "equiv_type.m"
        MR_Word parse_tree__equiv_type__NewSpecs_38;

#line 901 "equiv_type.m"
        {
#line 901 "equiv_type.m"
          parse_tree__equiv_type__replace_in_pred_type_23_p_0(parse_tree__equiv_type__MaybeRecord_12, parse_tree__equiv_type__PredName_20, parse_tree__equiv_type__PredOrFunc_21, parse_tree__equiv_type__Context_31, parse_tree__equiv_type__TypeEqvMap_13, parse_tree__equiv_type__InstEqvMap_14, parse_tree__equiv_type__ClassContext0_30, &parse_tree__equiv_type__ClassContext_32, parse_tree__equiv_type__TypesAndModes0_22, &parse_tree__equiv_type__TypesAndModes_33, parse_tree__equiv_type__TypeVarSet0_26, &parse_tree__equiv_type__TypeVarSet_34, parse_tree__equiv_type__WithType0_23, &parse_tree__equiv_type__WithType_35, parse_tree__equiv_type__WithInst0_24, &parse_tree__equiv_type__WithInst_36, parse_tree__equiv_type__MaybeDetism0_25, &parse_tree__equiv_type__MaybeDetism_37, parse_tree__equiv_type__STATE_VARIABLE_EquivTypeInfo_0_46, parse_tree__equiv_type__STATE_VARIABLE_EquivTypeInfo_47, parse_tree__equiv_type__STATE_VARIABLE_UsedModules_0_48, parse_tree__equiv_type__STATE_VARIABLE_UsedModules_49, &parse_tree__equiv_type__NewSpecs_38);
        }
#line 906 "equiv_type.m"
        {
#line 906 "equiv_type.m"
          *parse_tree__equiv_type__STATE_VARIABLE_Specs_51 = mercury__list__f_43_43_2_f_0((MR_Word) &parse_tree__error_util__parse_tree__error_util__type_ctor_info_error_spec_0, parse_tree__equiv_type__NewSpecs_38, parse_tree__equiv_type__STATE_VARIABLE_Specs_0_50);
        }
#line 907 "equiv_type.m"
        {
#line 907 "equiv_type.m"
          MR_Word base;
#line 907 "equiv_type.m"
          base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 12 * sizeof(MR_Word)), NULL, NULL);
#line 907 "equiv_type.m"
          *parse_tree__equiv_type__Method_16 = base;
#line 907 "equiv_type.m"
          MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (parse_tree__equiv_type__PredName_20));
#line 907 "equiv_type.m"
          MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (parse_tree__equiv_type__PredOrFunc_21));
#line 907 "equiv_type.m"
          MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (parse_tree__equiv_type__TypesAndModes_33));
#line 907 "equiv_type.m"
          MR_hl_field(MR_mktag(0), base, 3) = ((MR_Box) (parse_tree__equiv_type__WithType_35));
#line 907 "equiv_type.m"
          MR_hl_field(MR_mktag(0), base, 4) = ((MR_Box) (parse_tree__equiv_type__WithInst_36));
#line 907 "equiv_type.m"
          MR_hl_field(MR_mktag(0), base, 5) = ((MR_Box) (parse_tree__equiv_type__MaybeDetism_37));
#line 907 "equiv_type.m"
          MR_hl_field(MR_mktag(0), base, 6) = ((MR_Box) (parse_tree__equiv_type__TypeVarSet_34));
#line 907 "equiv_type.m"
          MR_hl_field(MR_mktag(0), base, 7) = ((MR_Box) (parse_tree__equiv_type__InstVarSet_27));
#line 907 "equiv_type.m"
          MR_hl_field(MR_mktag(0), base, 8) = ((MR_Box) (parse_tree__equiv_type__ExistQVars_28));
#line 907 "equiv_type.m"
          MR_hl_field(MR_mktag(0), base, 9) = ((MR_Box) (parse_tree__equiv_type__Purity_29));
#line 907 "equiv_type.m"
          MR_hl_field(MR_mktag(0), base, 10) = ((MR_Box) (parse_tree__equiv_type__ClassContext_32));
#line 907 "equiv_type.m"
          MR_hl_field(MR_mktag(0), base, 11) = ((MR_Box) (parse_tree__equiv_type__Context_31));
#line 907 "equiv_type.m"
        }
#line 900 "equiv_type.m"
      }
#line 900 "equiv_type.m"
    else
#line 912 "equiv_type.m"
      {
#line 912 "equiv_type.m"
        MR_Word parse_tree__equiv_type__TypeCtorInfo_69_69 = (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_mode_0;
#line 912 "equiv_type.m"
        MR_Word parse_tree__equiv_type__MaybePredOrFunc0_39 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__equiv_type__Method0_15, (MR_Integer) 1)));
#line 912 "equiv_type.m"
        MR_Word parse_tree__equiv_type__Modes0_40 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__equiv_type__Method0_15, (MR_Integer) 2)));
#line 912 "equiv_type.m"
        MR_Word parse_tree__equiv_type__ExtraModes_41;
#line 912 "equiv_type.m"
        MR_Word parse_tree__equiv_type__MaybePredOrFunc_42;
#line 912 "equiv_type.m"
        MR_Word parse_tree__equiv_type__Modes_43;
#line 912 "equiv_type.m"
        MR_Integer parse_tree__equiv_type__V_52_52;
#line 912 "equiv_type.m"
        MR_Word parse_tree__equiv_type__PredName_60 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__equiv_type__Method0_15, (MR_Integer) 0)));
#line 912 "equiv_type.m"
        MR_Word parse_tree__equiv_type__WithInst0_61 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__equiv_type__Method0_15, (MR_Integer) 3)));
#line 912 "equiv_type.m"
        MR_Word parse_tree__equiv_type__MaybeDetism0_62 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__equiv_type__Method0_15, (MR_Integer) 4)));
#line 912 "equiv_type.m"
        MR_Word parse_tree__equiv_type__InstVarSet_63 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__equiv_type__Method0_15, (MR_Integer) 5)));
#line 912 "equiv_type.m"
        MR_Word parse_tree__equiv_type__Context_64 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__equiv_type__Method0_15, (MR_Integer) 6)));
#line 912 "equiv_type.m"
        MR_Word parse_tree__equiv_type__WithInst_65;
#line 912 "equiv_type.m"
        MR_Word parse_tree__equiv_type__MaybeDetism_66;
#line 912 "equiv_type.m"
        MR_Word parse_tree__equiv_type__NewSpecs_67;

#line 914 "equiv_type.m"
        {
#line 914 "equiv_type.m"
          parse_tree__equiv_type__V_52_52 = mercury__list__length_1_f_0(parse_tree__equiv_type__TypeCtorInfo_69_69, parse_tree__equiv_type__Modes0_40);
        }
#line 913 "equiv_type.m"
        {
#line 913 "equiv_type.m"
          parse_tree__equiv_type__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_114_101_112_108_97_99_101_95_105_110_95_112_114_101_100_95_109_111_100_101_95_95_91_49_93_95_48_18_p_0(parse_tree__equiv_type__InstEqvMap_14, parse_tree__equiv_type__PredName_60, parse_tree__equiv_type__V_52_52, parse_tree__equiv_type__Context_64, (MR_Integer) 1, &parse_tree__equiv_type__ExtraModes_41, parse_tree__equiv_type__MaybePredOrFunc0_39, &parse_tree__equiv_type__MaybePredOrFunc_42, parse_tree__equiv_type__WithInst0_61, &parse_tree__equiv_type__WithInst_65, parse_tree__equiv_type__MaybeDetism0_62, &parse_tree__equiv_type__MaybeDetism_66, parse_tree__equiv_type__STATE_VARIABLE_EquivTypeInfo_0_46, parse_tree__equiv_type__STATE_VARIABLE_EquivTypeInfo_47, parse_tree__equiv_type__STATE_VARIABLE_UsedModules_0_48, parse_tree__equiv_type__STATE_VARIABLE_UsedModules_49, &parse_tree__equiv_type__NewSpecs_67);
        }
#line 920 "equiv_type.m"
        if ((parse_tree__equiv_type__ExtraModes_41 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 919 "equiv_type.m"
          parse_tree__equiv_type__Modes_43 = parse_tree__equiv_type__Modes0_40;
#line 920 "equiv_type.m"
        else
#line 922 "equiv_type.m"
          {
#line 922 "equiv_type.m"
            parse_tree__equiv_type__Modes_43 = mercury__list__f_43_43_2_f_0(parse_tree__equiv_type__TypeCtorInfo_69_69, parse_tree__equiv_type__Modes0_40, parse_tree__equiv_type__ExtraModes_41);
          }
#line 924 "equiv_type.m"
        {
#line 924 "equiv_type.m"
          *parse_tree__equiv_type__STATE_VARIABLE_Specs_51 = mercury__list__f_43_43_2_f_0((MR_Word) &parse_tree__error_util__parse_tree__error_util__type_ctor_info_error_spec_0, parse_tree__equiv_type__NewSpecs_67, parse_tree__equiv_type__STATE_VARIABLE_Specs_0_50);
        }
#line 925 "equiv_type.m"
        {
#line 925 "equiv_type.m"
          MR_Word base;
#line 925 "equiv_type.m"
          base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 7 * sizeof(MR_Word)), NULL, NULL));
#line 925 "equiv_type.m"
          *parse_tree__equiv_type__Method_16 = base;
#line 925 "equiv_type.m"
          MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (parse_tree__equiv_type__PredName_60));
#line 925 "equiv_type.m"
          MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (parse_tree__equiv_type__MaybePredOrFunc_42));
#line 925 "equiv_type.m"
          MR_hl_field(MR_mktag(1), base, 2) = ((MR_Box) (parse_tree__equiv_type__Modes_43));
#line 925 "equiv_type.m"
          MR_hl_field(MR_mktag(1), base, 3) = ((MR_Box) (parse_tree__equiv_type__WithInst_65));
#line 925 "equiv_type.m"
          MR_hl_field(MR_mktag(1), base, 4) = ((MR_Box) (parse_tree__equiv_type__MaybeDetism_66));
#line 925 "equiv_type.m"
          MR_hl_field(MR_mktag(1), base, 5) = ((MR_Box) (parse_tree__equiv_type__InstVarSet_63));
#line 925 "equiv_type.m"
          MR_hl_field(MR_mktag(1), base, 6) = ((MR_Box) (parse_tree__equiv_type__Context_64));
#line 925 "equiv_type.m"
        }
#line 912 "equiv_type.m"
      }
#line 900 "equiv_type.m"
  }
#line 889 "equiv_type.m"
}

#line 886 "equiv_type.m"
static void MR_CALL 
parse_tree__equiv_type__replace_in_class_interface_11_p_0_1(
#line 886 "equiv_type.m"
  MR_Box parse_tree__equiv_type__closure_arg,
#line 886 "equiv_type.m"
  MR_Box parse_tree__equiv_type__wrapper_arg_1,
#line 886 "equiv_type.m"
  MR_Box * parse_tree__equiv_type__wrapper_arg_2,
#line 886 "equiv_type.m"
  MR_Box parse_tree__equiv_type__wrapper_arg_3,
#line 886 "equiv_type.m"
  MR_Box * parse_tree__equiv_type__wrapper_arg_4,
#line 886 "equiv_type.m"
  MR_Box parse_tree__equiv_type__wrapper_arg_5,
#line 886 "equiv_type.m"
  MR_Box * parse_tree__equiv_type__wrapper_arg_6,
#line 886 "equiv_type.m"
  MR_Box parse_tree__equiv_type__wrapper_arg_7,
#line 886 "equiv_type.m"
  MR_Box * parse_tree__equiv_type__wrapper_arg_8)
#line 886 "equiv_type.m"
{
#line 886 "equiv_type.m"
  {
#line 886 "equiv_type.m"
    MR_Box parse_tree__equiv_type__closure = parse_tree__equiv_type__closure_arg;
#line 886 "equiv_type.m"
    MR_Word parse_tree__equiv_type__conv3_Method_16;
#line 886 "equiv_type.m"
    MR_Word parse_tree__equiv_type__conv2_STATE_VARIABLE_EquivTypeInfo_47;
#line 886 "equiv_type.m"
    MR_Word parse_tree__equiv_type__conv1_STATE_VARIABLE_UsedModules_49;
#line 886 "equiv_type.m"
    MR_Word parse_tree__equiv_type__conv0_STATE_VARIABLE_Specs_51;

#line 886 "equiv_type.m"
    {
#line 886 "equiv_type.m"
      parse_tree__equiv_type__replace_in_class_method_11_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__equiv_type__closure, (MR_Integer) 3))), ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__equiv_type__closure, (MR_Integer) 4))), ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__equiv_type__closure, (MR_Integer) 5))), ((MR_Word) parse_tree__equiv_type__wrapper_arg_1), &parse_tree__equiv_type__conv3_Method_16, ((MR_Word) parse_tree__equiv_type__wrapper_arg_3), &parse_tree__equiv_type__conv2_STATE_VARIABLE_EquivTypeInfo_47, ((MR_Word) parse_tree__equiv_type__wrapper_arg_5), &parse_tree__equiv_type__conv1_STATE_VARIABLE_UsedModules_49, ((MR_Word) parse_tree__equiv_type__wrapper_arg_7), &parse_tree__equiv_type__conv0_STATE_VARIABLE_Specs_51);
    }
#line 886 "equiv_type.m"
    *parse_tree__equiv_type__wrapper_arg_2 = ((MR_Box) (parse_tree__equiv_type__conv3_Method_16));
#line 886 "equiv_type.m"
    *parse_tree__equiv_type__wrapper_arg_4 = ((MR_Box) (parse_tree__equiv_type__conv2_STATE_VARIABLE_EquivTypeInfo_47));
#line 886 "equiv_type.m"
    *parse_tree__equiv_type__wrapper_arg_6 = ((MR_Box) (parse_tree__equiv_type__conv1_STATE_VARIABLE_UsedModules_49));
#line 886 "equiv_type.m"
    *parse_tree__equiv_type__wrapper_arg_8 = ((MR_Box) (parse_tree__equiv_type__conv0_STATE_VARIABLE_Specs_51));
#line 886 "equiv_type.m"
  }
#line 886 "equiv_type.m"
}

#line 876 "equiv_type.m"
static void MR_CALL 
parse_tree__equiv_type__replace_in_class_interface_11_p_0(
#line 876 "equiv_type.m"
  MR_Word parse_tree__equiv_type__MaybeRecord_12,
#line 876 "equiv_type.m"
  MR_Word parse_tree__equiv_type__TypeEqvMap_13,
#line 876 "equiv_type.m"
  MR_Word parse_tree__equiv_type__InstEqvMap_14,
#line 876 "equiv_type.m"
  MR_Word parse_tree__equiv_type__ClassInterface0_15,
#line 876 "equiv_type.m"
  MR_Word * parse_tree__equiv_type__ClassInterface_16,
#line 876 "equiv_type.m"
  MR_Word parse_tree__equiv_type__STATE_VARIABLE_EquivTypeInfo_0_20,
#line 876 "equiv_type.m"
  MR_Word * parse_tree__equiv_type__STATE_VARIABLE_EquivTypeInfo_21,
#line 876 "equiv_type.m"
  MR_Word parse_tree__equiv_type__STATE_VARIABLE_UsedModules_0_22,
#line 876 "equiv_type.m"
  MR_Word * parse_tree__equiv_type__STATE_VARIABLE_UsedModules_23,
#line 876 "equiv_type.m"
  MR_Word parse_tree__equiv_type__STATE_VARIABLE_Specs_0_24,
#line 876 "equiv_type.m"
  MR_Word * parse_tree__equiv_type__STATE_VARIABLE_Specs_25)
#line 876 "equiv_type.m"
{
#line 884 "equiv_type.m"
  {
#line 884 "equiv_type.m"
    MR_bool parse_tree__equiv_type__succeeded;
#line 884 "equiv_type.m"
    MR_Word parse_tree__equiv_type__TypeCtorInfo_38_38;
#line 884 "equiv_type.m"
    MR_Word parse_tree__equiv_type__V_26_26;
#line 885 "equiv_type.m"
    MR_Box parse_tree__equiv_type__conv6_STATE_VARIABLE_EquivTypeInfo_21;
#line 885 "equiv_type.m"
    MR_Box parse_tree__equiv_type__conv5_STATE_VARIABLE_UsedModules_23;
#line 885 "equiv_type.m"
    MR_Box parse_tree__equiv_type__conv4_STATE_VARIABLE_Specs_25;

#line 886 "equiv_type.m"
    {
#line 886 "equiv_type.m"
      parse_tree__equiv_type__V_26_26 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 6 * sizeof(MR_Word)), NULL, NULL);
#line 886 "equiv_type.m"
      MR_hl_field(MR_mktag(0), parse_tree__equiv_type__V_26_26, 0) = ((MR_Box) (&parse_tree__equiv_type_scalar_common_4[0]));
#line 886 "equiv_type.m"
      MR_hl_field(MR_mktag(0), parse_tree__equiv_type__V_26_26, 1) = ((MR_Box) (parse_tree__equiv_type__replace_in_class_interface_11_p_0_1));
#line 886 "equiv_type.m"
      MR_hl_field(MR_mktag(0), parse_tree__equiv_type__V_26_26, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 3));
#line 886 "equiv_type.m"
      MR_hl_field(MR_mktag(0), parse_tree__equiv_type__V_26_26, 3) = ((MR_Box) (parse_tree__equiv_type__MaybeRecord_12));
#line 886 "equiv_type.m"
      MR_hl_field(MR_mktag(0), parse_tree__equiv_type__V_26_26, 4) = ((MR_Box) (parse_tree__equiv_type__TypeEqvMap_13));
#line 886 "equiv_type.m"
      MR_hl_field(MR_mktag(0), parse_tree__equiv_type__V_26_26, 5) = ((MR_Box) (parse_tree__equiv_type__InstEqvMap_14));
#line 886 "equiv_type.m"
    }
#line 10271 "parse_tree.equiv_type.c"
    parse_tree__equiv_type__TypeCtorInfo_38_38 = (MR_Word) &parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_class_method_0;
#line 885 "equiv_type.m"
    {
#line 885 "equiv_type.m"
      mercury__list__map_foldl3_9_p_1(parse_tree__equiv_type__TypeCtorInfo_38_38, parse_tree__equiv_type__TypeCtorInfo_38_38, (MR_Word) &parse_tree__equiv_type_scalar_common_1[7], (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_used_modules_0, (MR_Word) &parse_tree__equiv_type_scalar_common_1[8], parse_tree__equiv_type__V_26_26, parse_tree__equiv_type__ClassInterface0_15, parse_tree__equiv_type__ClassInterface_16, ((MR_Box) (parse_tree__equiv_type__STATE_VARIABLE_EquivTypeInfo_0_20)), &parse_tree__equiv_type__conv6_STATE_VARIABLE_EquivTypeInfo_21, ((MR_Box) (parse_tree__equiv_type__STATE_VARIABLE_UsedModules_0_22)), &parse_tree__equiv_type__conv5_STATE_VARIABLE_UsedModules_23, ((MR_Box) (parse_tree__equiv_type__STATE_VARIABLE_Specs_0_24)), &parse_tree__equiv_type__conv4_STATE_VARIABLE_Specs_25);
    }
#line 885 "equiv_type.m"
    *parse_tree__equiv_type__STATE_VARIABLE_EquivTypeInfo_21 = ((MR_Word) parse_tree__equiv_type__conv6_STATE_VARIABLE_EquivTypeInfo_21);
#line 885 "equiv_type.m"
    *parse_tree__equiv_type__STATE_VARIABLE_UsedModules_23 = ((MR_Word) parse_tree__equiv_type__conv5_STATE_VARIABLE_UsedModules_23);
#line 885 "equiv_type.m"
    *parse_tree__equiv_type__STATE_VARIABLE_Specs_25 = ((MR_Word) parse_tree__equiv_type__conv4_STATE_VARIABLE_Specs_25);
#line 884 "equiv_type.m"
  }
#line 876 "equiv_type.m"
}

#line 862 "equiv_type.m"
static void MR_CALL 
parse_tree__equiv_type__replace_in_prog_constraint_location_10_p_0(
#line 862 "equiv_type.m"
  MR_Word parse_tree__equiv_type__MaybeRecord_11,
#line 862 "equiv_type.m"
  MR_Word parse_tree__equiv_type__TypeEqvMap_12,
#line 862 "equiv_type.m"
  MR_Word parse_tree__equiv_type__Constraint0_13,
#line 862 "equiv_type.m"
  MR_Word * parse_tree__equiv_type__Constraint_14,
#line 862 "equiv_type.m"
  MR_Word parse_tree__equiv_type__STATE_VARIABLE_VarSet_0_23,
#line 862 "equiv_type.m"
  MR_Word * parse_tree__equiv_type__STATE_VARIABLE_VarSet_24,
#line 862 "equiv_type.m"
  MR_Word parse_tree__equiv_type__STATE_VARIABLE_EquivTypeInfo_0_25,
#line 862 "equiv_type.m"
  MR_Word * parse_tree__equiv_type__STATE_VARIABLE_EquivTypeInfo_26,
#line 862 "equiv_type.m"
  MR_Word parse_tree__equiv_type__STATE_VARIABLE_UsedModules_0_27,
#line 862 "equiv_type.m"
  MR_Word * parse_tree__equiv_type__STATE_VARIABLE_UsedModules_28)
#line 862 "equiv_type.m"
{
#line 868 "equiv_type.m"
  {
#line 868 "equiv_type.m"
    MR_bool parse_tree__equiv_type__succeeded;
#line 868 "equiv_type.m"
    MR_Word parse_tree__equiv_type__ClassName_18 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__equiv_type__Constraint0_13, (MR_Integer) 0)));
#line 868 "equiv_type.m"
    MR_Word parse_tree__equiv_type__ArgTypes0_19 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__equiv_type__Constraint0_13, (MR_Integer) 1)));
#line 868 "equiv_type.m"
    MR_Word parse_tree__equiv_type__ArgTypes_20;
#line 999 "equiv_type.m"
    MR_Word parse_tree__equiv_type__V_21_21;
#line 999 "equiv_type.m"
    MR_Word parse_tree__equiv_type__V_22_22;

#line 999 "equiv_type.m"
    {
#line 999 "equiv_type.m"
      parse_tree__equiv_type__replace_in_type_list_location_circ_2_14_p_0(parse_tree__equiv_type__MaybeRecord_11, parse_tree__equiv_type__TypeEqvMap_12, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), parse_tree__equiv_type__ArgTypes0_19, &parse_tree__equiv_type__ArgTypes_20, &parse_tree__equiv_type__V_21_21, (MR_Integer) 0, &parse_tree__equiv_type__V_22_22, parse_tree__equiv_type__STATE_VARIABLE_VarSet_0_23, parse_tree__equiv_type__STATE_VARIABLE_VarSet_24, parse_tree__equiv_type__STATE_VARIABLE_EquivTypeInfo_0_25, parse_tree__equiv_type__STATE_VARIABLE_EquivTypeInfo_26, parse_tree__equiv_type__STATE_VARIABLE_UsedModules_0_27, parse_tree__equiv_type__STATE_VARIABLE_UsedModules_28);
    }
#line 872 "equiv_type.m"
    {
#line 872 "equiv_type.m"
      MR_Word base;
#line 872 "equiv_type.m"
      base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 872 "equiv_type.m"
      *parse_tree__equiv_type__Constraint_14 = base;
#line 872 "equiv_type.m"
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (parse_tree__equiv_type__ClassName_18));
#line 872 "equiv_type.m"
      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (parse_tree__equiv_type__ArgTypes_20));
#line 872 "equiv_type.m"
    }
#line 868 "equiv_type.m"
  }
#line 862 "equiv_type.m"
}

#line 849 "equiv_type.m"
static void MR_CALL 
parse_tree__equiv_type__replace_in_prog_constraint_list_10_p_0_1(
#line 849 "equiv_type.m"
  MR_Box parse_tree__equiv_type__closure_arg,
#line 849 "equiv_type.m"
  MR_Box parse_tree__equiv_type__wrapper_arg_1,
#line 849 "equiv_type.m"
  MR_Box * parse_tree__equiv_type__wrapper_arg_2,
#line 849 "equiv_type.m"
  MR_Box parse_tree__equiv_type__wrapper_arg_3,
#line 849 "equiv_type.m"
  MR_Box * parse_tree__equiv_type__wrapper_arg_4,
#line 849 "equiv_type.m"
  MR_Box parse_tree__equiv_type__wrapper_arg_5,
#line 849 "equiv_type.m"
  MR_Box * parse_tree__equiv_type__wrapper_arg_6,
#line 849 "equiv_type.m"
  MR_Box parse_tree__equiv_type__wrapper_arg_7,
#line 849 "equiv_type.m"
  MR_Box * parse_tree__equiv_type__wrapper_arg_8)
#line 849 "equiv_type.m"
{
#line 849 "equiv_type.m"
  {
#line 849 "equiv_type.m"
    MR_Box parse_tree__equiv_type__closure = parse_tree__equiv_type__closure_arg;
#line 849 "equiv_type.m"
    MR_Word parse_tree__equiv_type__conv3_Constraint_14;
#line 849 "equiv_type.m"
    MR_Word parse_tree__equiv_type__conv2_STATE_VARIABLE_VarSet_24;
#line 849 "equiv_type.m"
    MR_Word parse_tree__equiv_type__conv1_STATE_VARIABLE_EquivTypeInfo_26;
#line 849 "equiv_type.m"
    MR_Word parse_tree__equiv_type__conv0_STATE_VARIABLE_UsedModules_28;

#line 849 "equiv_type.m"
    {
#line 849 "equiv_type.m"
      parse_tree__equiv_type__replace_in_prog_constraint_location_10_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__equiv_type__closure, (MR_Integer) 3))), ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__equiv_type__closure, (MR_Integer) 4))), ((MR_Word) parse_tree__equiv_type__wrapper_arg_1), &parse_tree__equiv_type__conv3_Constraint_14, ((MR_Word) parse_tree__equiv_type__wrapper_arg_3), &parse_tree__equiv_type__conv2_STATE_VARIABLE_VarSet_24, ((MR_Word) parse_tree__equiv_type__wrapper_arg_5), &parse_tree__equiv_type__conv1_STATE_VARIABLE_EquivTypeInfo_26, ((MR_Word) parse_tree__equiv_type__wrapper_arg_7), &parse_tree__equiv_type__conv0_STATE_VARIABLE_UsedModules_28);
    }
#line 849 "equiv_type.m"
    *parse_tree__equiv_type__wrapper_arg_2 = ((MR_Box) (parse_tree__equiv_type__conv3_Constraint_14));
#line 849 "equiv_type.m"
    *parse_tree__equiv_type__wrapper_arg_4 = ((MR_Box) (parse_tree__equiv_type__conv2_STATE_VARIABLE_VarSet_24));
#line 849 "equiv_type.m"
    *parse_tree__equiv_type__wrapper_arg_6 = ((MR_Box) (parse_tree__equiv_type__conv1_STATE_VARIABLE_EquivTypeInfo_26));
#line 849 "equiv_type.m"
    *parse_tree__equiv_type__wrapper_arg_8 = ((MR_Box) (parse_tree__equiv_type__conv0_STATE_VARIABLE_UsedModules_28));
#line 849 "equiv_type.m"
  }
#line 849 "equiv_type.m"
}

#line 841 "equiv_type.m"
static void MR_CALL 
parse_tree__equiv_type__replace_in_prog_constraint_list_10_p_0(
#line 841 "equiv_type.m"
  MR_Word parse_tree__equiv_type__MaybeRecord_11,
#line 841 "equiv_type.m"
  MR_Word parse_tree__equiv_type__TypeEqvMap_12,
#line 841 "equiv_type.m"
  MR_Word parse_tree__equiv_type__STATE_VARIABLE_Constraints_0_17,
#line 841 "equiv_type.m"
  MR_Word * parse_tree__equiv_type__STATE_VARIABLE_Constraints_18,
#line 841 "equiv_type.m"
  MR_Word parse_tree__equiv_type__STATE_VARIABLE_VarSet_0_19,
#line 841 "equiv_type.m"
  MR_Word * parse_tree__equiv_type__STATE_VARIABLE_VarSet_20,
#line 841 "equiv_type.m"
  MR_Word parse_tree__equiv_type__STATE_VARIABLE_EquivTypeInfo_0_21,
#line 841 "equiv_type.m"
  MR_Word * parse_tree__equiv_type__STATE_VARIABLE_EquivTypeInfo_22,
#line 841 "equiv_type.m"
  MR_Word parse_tree__equiv_type__STATE_VARIABLE_UsedModules_0_23,
#line 841 "equiv_type.m"
  MR_Word * parse_tree__equiv_type__STATE_VARIABLE_UsedModules_24)
#line 841 "equiv_type.m"
{
#line 847 "equiv_type.m"
  {
#line 847 "equiv_type.m"
    MR_bool parse_tree__equiv_type__succeeded;
#line 847 "equiv_type.m"
    MR_Word parse_tree__equiv_type__TypeCtorInfo_38_38;
#line 847 "equiv_type.m"
    MR_Word parse_tree__equiv_type__V_25_25;
#line 848 "equiv_type.m"
    MR_Box parse_tree__equiv_type__conv6_STATE_VARIABLE_VarSet_20;
#line 848 "equiv_type.m"
    MR_Box parse_tree__equiv_type__conv5_STATE_VARIABLE_EquivTypeInfo_22;
#line 848 "equiv_type.m"
    MR_Box parse_tree__equiv_type__conv4_STATE_VARIABLE_UsedModules_24;

#line 849 "equiv_type.m"
    {
#line 849 "equiv_type.m"
      parse_tree__equiv_type__V_25_25 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
#line 849 "equiv_type.m"
      MR_hl_field(MR_mktag(0), parse_tree__equiv_type__V_25_25, 0) = ((MR_Box) (&parse_tree__equiv_type_scalar_common_3[0]));
#line 849 "equiv_type.m"
      MR_hl_field(MR_mktag(0), parse_tree__equiv_type__V_25_25, 1) = ((MR_Box) (parse_tree__equiv_type__replace_in_prog_constraint_list_10_p_0_1));
#line 849 "equiv_type.m"
      MR_hl_field(MR_mktag(0), parse_tree__equiv_type__V_25_25, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
#line 849 "equiv_type.m"
      MR_hl_field(MR_mktag(0), parse_tree__equiv_type__V_25_25, 3) = ((MR_Box) (parse_tree__equiv_type__MaybeRecord_11));
#line 849 "equiv_type.m"
      MR_hl_field(MR_mktag(0), parse_tree__equiv_type__V_25_25, 4) = ((MR_Box) (parse_tree__equiv_type__TypeEqvMap_12));
#line 849 "equiv_type.m"
    }
#line 10463 "parse_tree.equiv_type.c"
    parse_tree__equiv_type__TypeCtorInfo_38_38 = (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_constraint_0;
#line 848 "equiv_type.m"
    {
#line 848 "equiv_type.m"
      mercury__list__map_foldl3_9_p_1(parse_tree__equiv_type__TypeCtorInfo_38_38, parse_tree__equiv_type__TypeCtorInfo_38_38, (MR_Word) &parse_tree__equiv_type_scalar_common_1[6], (MR_Word) &parse_tree__equiv_type_scalar_common_1[7], (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_used_modules_0, parse_tree__equiv_type__V_25_25, parse_tree__equiv_type__STATE_VARIABLE_Constraints_0_17, parse_tree__equiv_type__STATE_VARIABLE_Constraints_18, ((MR_Box) (parse_tree__equiv_type__STATE_VARIABLE_VarSet_0_19)), &parse_tree__equiv_type__conv6_STATE_VARIABLE_VarSet_20, ((MR_Box) (parse_tree__equiv_type__STATE_VARIABLE_EquivTypeInfo_0_21)), &parse_tree__equiv_type__conv5_STATE_VARIABLE_EquivTypeInfo_22, ((MR_Box) (parse_tree__equiv_type__STATE_VARIABLE_UsedModules_0_23)), &parse_tree__equiv_type__conv4_STATE_VARIABLE_UsedModules_24);
    }
#line 848 "equiv_type.m"
    *parse_tree__equiv_type__STATE_VARIABLE_VarSet_20 = ((MR_Word) parse_tree__equiv_type__conv6_STATE_VARIABLE_VarSet_20);
#line 848 "equiv_type.m"
    *parse_tree__equiv_type__STATE_VARIABLE_EquivTypeInfo_22 = ((MR_Word) parse_tree__equiv_type__conv5_STATE_VARIABLE_EquivTypeInfo_22);
#line 848 "equiv_type.m"
    *parse_tree__equiv_type__STATE_VARIABLE_UsedModules_24 = ((MR_Word) parse_tree__equiv_type__conv4_STATE_VARIABLE_UsedModules_24);
#line 847 "equiv_type.m"
  }
#line 841 "equiv_type.m"
}

#line 849 "equiv_type.m"
static void MR_CALL 
parse_tree__equiv_type__replace_in_prog_constraints_location_10_p_0_1(
#line 849 "equiv_type.m"
  MR_Box parse_tree__equiv_type__closure_arg,
#line 849 "equiv_type.m"
  MR_Box parse_tree__equiv_type__wrapper_arg_1,
#line 849 "equiv_type.m"
  MR_Box * parse_tree__equiv_type__wrapper_arg_2,
#line 849 "equiv_type.m"
  MR_Box parse_tree__equiv_type__wrapper_arg_3,
#line 849 "equiv_type.m"
  MR_Box * parse_tree__equiv_type__wrapper_arg_4,
#line 849 "equiv_type.m"
  MR_Box parse_tree__equiv_type__wrapper_arg_5,
#line 849 "equiv_type.m"
  MR_Box * parse_tree__equiv_type__wrapper_arg_6,
#line 849 "equiv_type.m"
  MR_Box parse_tree__equiv_type__wrapper_arg_7,
#line 849 "equiv_type.m"
  MR_Box * parse_tree__equiv_type__wrapper_arg_8)
#line 849 "equiv_type.m"
{
#line 849 "equiv_type.m"
  {
#line 849 "equiv_type.m"
    MR_Box parse_tree__equiv_type__closure = parse_tree__equiv_type__closure_arg;
#line 849 "equiv_type.m"
    MR_Word parse_tree__equiv_type__conv3_Constraint_14;
#line 849 "equiv_type.m"
    MR_Word parse_tree__equiv_type__conv2_STATE_VARIABLE_VarSet_24;
#line 849 "equiv_type.m"
    MR_Word parse_tree__equiv_type__conv1_STATE_VARIABLE_EquivTypeInfo_26;
#line 849 "equiv_type.m"
    MR_Word parse_tree__equiv_type__conv0_STATE_VARIABLE_UsedModules_28;

#line 849 "equiv_type.m"
    {
#line 849 "equiv_type.m"
      parse_tree__equiv_type__replace_in_prog_constraint_location_10_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__equiv_type__closure, (MR_Integer) 3))), ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__equiv_type__closure, (MR_Integer) 4))), ((MR_Word) parse_tree__equiv_type__wrapper_arg_1), &parse_tree__equiv_type__conv3_Constraint_14, ((MR_Word) parse_tree__equiv_type__wrapper_arg_3), &parse_tree__equiv_type__conv2_STATE_VARIABLE_VarSet_24, ((MR_Word) parse_tree__equiv_type__wrapper_arg_5), &parse_tree__equiv_type__conv1_STATE_VARIABLE_EquivTypeInfo_26, ((MR_Word) parse_tree__equiv_type__wrapper_arg_7), &parse_tree__equiv_type__conv0_STATE_VARIABLE_UsedModules_28);
    }
#line 849 "equiv_type.m"
    *parse_tree__equiv_type__wrapper_arg_2 = ((MR_Box) (parse_tree__equiv_type__conv3_Constraint_14));
#line 849 "equiv_type.m"
    *parse_tree__equiv_type__wrapper_arg_4 = ((MR_Box) (parse_tree__equiv_type__conv2_STATE_VARIABLE_VarSet_24));
#line 849 "equiv_type.m"
    *parse_tree__equiv_type__wrapper_arg_6 = ((MR_Box) (parse_tree__equiv_type__conv1_STATE_VARIABLE_EquivTypeInfo_26));
#line 849 "equiv_type.m"
    *parse_tree__equiv_type__wrapper_arg_8 = ((MR_Box) (parse_tree__equiv_type__conv0_STATE_VARIABLE_UsedModules_28));
#line 849 "equiv_type.m"
  }
#line 849 "equiv_type.m"
}

#line 827 "equiv_type.m"
static void MR_CALL 
parse_tree__equiv_type__replace_in_prog_constraints_location_10_p_0(
#line 827 "equiv_type.m"
  MR_Word parse_tree__equiv_type__MaybeRecord_11,
#line 827 "equiv_type.m"
  MR_Word parse_tree__equiv_type__TypeEqvMap_12,
#line 827 "equiv_type.m"
  MR_Word parse_tree__equiv_type__Cs0_13,
#line 827 "equiv_type.m"
  MR_Word * parse_tree__equiv_type__Cs_14,
#line 827 "equiv_type.m"
  MR_Word parse_tree__equiv_type__STATE_VARIABLE_VarSet_0_22,
#line 827 "equiv_type.m"
  MR_Word * parse_tree__equiv_type__STATE_VARIABLE_VarSet_23,
#line 827 "equiv_type.m"
  MR_Word parse_tree__equiv_type__STATE_VARIABLE_EquivTypeInfo_0_24,
#line 827 "equiv_type.m"
  MR_Word * parse_tree__equiv_type__STATE_VARIABLE_EquivTypeInfo_25,
#line 827 "equiv_type.m"
  MR_Word parse_tree__equiv_type__STATE_VARIABLE_UsedModules_0_26,
#line 827 "equiv_type.m"
  MR_Word * parse_tree__equiv_type__STATE_VARIABLE_UsedModules_27)
#line 827 "equiv_type.m"
{
#line 833 "equiv_type.m"
  {
#line 833 "equiv_type.m"
    MR_bool parse_tree__equiv_type__succeeded;
#line 833 "equiv_type.m"
    MR_Word parse_tree__equiv_type__TypeCtorInfo_38_61;
#line 833 "equiv_type.m"
    MR_Word parse_tree__equiv_type__UnivCs0_18 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__equiv_type__Cs0_13, (MR_Integer) 0)));
#line 833 "equiv_type.m"
    MR_Word parse_tree__equiv_type__ExistCs0_19 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__equiv_type__Cs0_13, (MR_Integer) 1)));
#line 833 "equiv_type.m"
    MR_Word parse_tree__equiv_type__UnivCs_20;
#line 833 "equiv_type.m"
    MR_Word parse_tree__equiv_type__ExistCs_21;
#line 833 "equiv_type.m"
    MR_Word parse_tree__equiv_type__STATE_VARIABLE_VarSet_28_28;
#line 833 "equiv_type.m"
    MR_Word parse_tree__equiv_type__STATE_VARIABLE_EquivTypeInfo_29_29;
#line 833 "equiv_type.m"
    MR_Word parse_tree__equiv_type__STATE_VARIABLE_UsedModules_30_30;
#line 833 "equiv_type.m"
    MR_Word parse_tree__equiv_type__V_48_48;
#line 848 "equiv_type.m"
    MR_Box parse_tree__equiv_type__conv6_STATE_VARIABLE_VarSet_28_28;
#line 848 "equiv_type.m"
    MR_Box parse_tree__equiv_type__conv5_STATE_VARIABLE_EquivTypeInfo_29_29;
#line 848 "equiv_type.m"
    MR_Box parse_tree__equiv_type__conv4_STATE_VARIABLE_UsedModules_30_30;

#line 849 "equiv_type.m"
    {
#line 849 "equiv_type.m"
      parse_tree__equiv_type__V_48_48 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
#line 849 "equiv_type.m"
      MR_hl_field(MR_mktag(0), parse_tree__equiv_type__V_48_48, 0) = ((MR_Box) (&parse_tree__equiv_type_scalar_common_3[0]));
#line 849 "equiv_type.m"
      MR_hl_field(MR_mktag(0), parse_tree__equiv_type__V_48_48, 1) = ((MR_Box) (parse_tree__equiv_type__replace_in_prog_constraints_location_10_p_0_1));
#line 849 "equiv_type.m"
      MR_hl_field(MR_mktag(0), parse_tree__equiv_type__V_48_48, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
#line 849 "equiv_type.m"
      MR_hl_field(MR_mktag(0), parse_tree__equiv_type__V_48_48, 3) = ((MR_Box) (parse_tree__equiv_type__MaybeRecord_11));
#line 849 "equiv_type.m"
      MR_hl_field(MR_mktag(0), parse_tree__equiv_type__V_48_48, 4) = ((MR_Box) (parse_tree__equiv_type__TypeEqvMap_12));
#line 849 "equiv_type.m"
    }
#line 10605 "parse_tree.equiv_type.c"
    parse_tree__equiv_type__TypeCtorInfo_38_61 = (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_constraint_0;
#line 848 "equiv_type.m"
    {
#line 848 "equiv_type.m"
      mercury__list__map_foldl3_9_p_1(parse_tree__equiv_type__TypeCtorInfo_38_61, parse_tree__equiv_type__TypeCtorInfo_38_61, (MR_Word) &parse_tree__equiv_type_scalar_common_1[6], (MR_Word) &parse_tree__equiv_type_scalar_common_1[7], (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_used_modules_0, parse_tree__equiv_type__V_48_48, parse_tree__equiv_type__UnivCs0_18, &parse_tree__equiv_type__UnivCs_20, ((MR_Box) (parse_tree__equiv_type__STATE_VARIABLE_VarSet_0_22)), &parse_tree__equiv_type__conv6_STATE_VARIABLE_VarSet_28_28, ((MR_Box) (parse_tree__equiv_type__STATE_VARIABLE_EquivTypeInfo_0_24)), &parse_tree__equiv_type__conv5_STATE_VARIABLE_EquivTypeInfo_29_29, ((MR_Box) (parse_tree__equiv_type__STATE_VARIABLE_UsedModules_0_26)), &parse_tree__equiv_type__conv4_STATE_VARIABLE_UsedModules_30_30);
    }
#line 848 "equiv_type.m"
    parse_tree__equiv_type__STATE_VARIABLE_VarSet_28_28 = ((MR_Word) parse_tree__equiv_type__conv6_STATE_VARIABLE_VarSet_28_28);
#line 848 "equiv_type.m"
    parse_tree__equiv_type__STATE_VARIABLE_EquivTypeInfo_29_29 = ((MR_Word) parse_tree__equiv_type__conv5_STATE_VARIABLE_EquivTypeInfo_29_29);
#line 848 "equiv_type.m"
    parse_tree__equiv_type__STATE_VARIABLE_UsedModules_30_30 = ((MR_Word) parse_tree__equiv_type__conv4_STATE_VARIABLE_UsedModules_30_30);
#line 837 "equiv_type.m"
    {
#line 837 "equiv_type.m"
      parse_tree__equiv_type__replace_in_prog_constraint_list_10_p_0(parse_tree__equiv_type__MaybeRecord_11, parse_tree__equiv_type__TypeEqvMap_12, parse_tree__equiv_type__ExistCs0_19, &parse_tree__equiv_type__ExistCs_21, parse_tree__equiv_type__STATE_VARIABLE_VarSet_28_28, parse_tree__equiv_type__STATE_VARIABLE_VarSet_23, parse_tree__equiv_type__STATE_VARIABLE_EquivTypeInfo_29_29, parse_tree__equiv_type__STATE_VARIABLE_EquivTypeInfo_25, parse_tree__equiv_type__STATE_VARIABLE_UsedModules_30_30, parse_tree__equiv_type__STATE_VARIABLE_UsedModules_27);
    }
#line 839 "equiv_type.m"
    {
#line 839 "equiv_type.m"
      MR_Word base;
#line 839 "equiv_type.m"
      base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 839 "equiv_type.m"
      *parse_tree__equiv_type__Cs_14 = base;
#line 839 "equiv_type.m"
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (parse_tree__equiv_type__UnivCs_20));
#line 839 "equiv_type.m"
      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (parse_tree__equiv_type__ExistCs_21));
#line 839 "equiv_type.m"
    }
#line 833 "equiv_type.m"
  }
#line 827 "equiv_type.m"
}

#line 806 "equiv_type.m"
static void MR_CALL 
parse_tree__equiv_type__replace_in_constraint_store_9_p_0(
#line 806 "equiv_type.m"
  MR_Word parse_tree__equiv_type__MaybeRecord_1,
#line 806 "equiv_type.m"
  MR_Word parse_tree__equiv_type__TypeEqvMap_2,
#line 806 "equiv_type.m"
  MR_Word parse_tree__equiv_type__InstEqvMap_3,
#line 806 "equiv_type.m"
  MR_Word parse_tree__equiv_type__HeadVar__4_4,
#line 806 "equiv_type.m"
  MR_Word * parse_tree__equiv_type__HeadVar__5_5,
#line 806 "equiv_type.m"
  MR_Word parse_tree__equiv_type__STATE_VARIABLE_EquivTypeInfo_0_6,
#line 806 "equiv_type.m"
  MR_Word * parse_tree__equiv_type__STATE_VARIABLE_EquivTypeInfo_7,
#line 806 "equiv_type.m"
  MR_Word parse_tree__equiv_type__STATE_VARIABLE_UsedModules_0_8,
#line 806 "equiv_type.m"
  MR_Word * parse_tree__equiv_type__STATE_VARIABLE_UsedModules_9)
#line 806 "equiv_type.m"
{
#line 812 "equiv_type.m"
  {
#line 812 "equiv_type.m"
    MR_bool parse_tree__equiv_type__succeeded;

#line 812 "equiv_type.m"
    if ((parse_tree__equiv_type__HeadVar__4_4 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 812 "equiv_type.m"
      {
#line 812 "equiv_type.m"
        *parse_tree__equiv_type__HeadVar__5_5 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 812 "equiv_type.m"
        *parse_tree__equiv_type__STATE_VARIABLE_UsedModules_9 = parse_tree__equiv_type__STATE_VARIABLE_UsedModules_0_8;
#line 812 "equiv_type.m"
        *parse_tree__equiv_type__STATE_VARIABLE_EquivTypeInfo_7 = parse_tree__equiv_type__STATE_VARIABLE_EquivTypeInfo_0_6;
#line 812 "equiv_type.m"
      }
#line 812 "equiv_type.m"
    else
#line 815 "equiv_type.m"
      {
#line 815 "equiv_type.m"
        MR_Word parse_tree__equiv_type__MutableInfo0_22 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__equiv_type__HeadVar__4_4, (MR_Integer) 0)));
#line 815 "equiv_type.m"
        MR_Word parse_tree__equiv_type__MutableInfos0_23 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__equiv_type__HeadVar__4_4, (MR_Integer) 1)));
#line 815 "equiv_type.m"
        MR_Word parse_tree__equiv_type__MutableInfo_24;
#line 815 "equiv_type.m"
        MR_Word parse_tree__equiv_type__MutableInfos_25;
#line 815 "equiv_type.m"
        MR_Word parse_tree__equiv_type__STATE_VARIABLE_EquivTypeInfo_32_32;
#line 815 "equiv_type.m"
        MR_Word parse_tree__equiv_type__STATE_VARIABLE_UsedModules_33_33;

#line 816 "equiv_type.m"
        {
#line 816 "equiv_type.m"
          parse_tree__equiv_type__replace_in_mutable_defn_9_p_0(parse_tree__equiv_type__MaybeRecord_1, parse_tree__equiv_type__TypeEqvMap_2, parse_tree__equiv_type__InstEqvMap_3, parse_tree__equiv_type__MutableInfo0_22, &parse_tree__equiv_type__MutableInfo_24, parse_tree__equiv_type__STATE_VARIABLE_EquivTypeInfo_0_6, &parse_tree__equiv_type__STATE_VARIABLE_EquivTypeInfo_32_32, parse_tree__equiv_type__STATE_VARIABLE_UsedModules_0_8, &parse_tree__equiv_type__STATE_VARIABLE_UsedModules_33_33);
        }
#line 818 "equiv_type.m"
        {
#line 818 "equiv_type.m"
          parse_tree__equiv_type__replace_in_constraint_store_9_p_0(parse_tree__equiv_type__MaybeRecord_1, parse_tree__equiv_type__TypeEqvMap_2, parse_tree__equiv_type__InstEqvMap_3, parse_tree__equiv_type__MutableInfos0_23, &parse_tree__equiv_type__MutableInfos_25, parse_tree__equiv_type__STATE_VARIABLE_EquivTypeInfo_32_32, parse_tree__equiv_type__STATE_VARIABLE_EquivTypeInfo_7, parse_tree__equiv_type__STATE_VARIABLE_UsedModules_33_33, parse_tree__equiv_type__STATE_VARIABLE_UsedModules_9);
        }
#line 814 "equiv_type.m"
        {
#line 814 "equiv_type.m"
          MR_Word base;
#line 814 "equiv_type.m"
          base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 814 "equiv_type.m"
          *parse_tree__equiv_type__HeadVar__5_5 = base;
#line 814 "equiv_type.m"
          MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (parse_tree__equiv_type__MutableInfo_24));
#line 814 "equiv_type.m"
          MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (parse_tree__equiv_type__MutableInfos_25));
#line 814 "equiv_type.m"
        }
#line 815 "equiv_type.m"
      }
#line 812 "equiv_type.m"
  }
#line 806 "equiv_type.m"
}

#line 765 "equiv_type.m"
static void MR_CALL 
parse_tree__equiv_type__replace_in_type_defn_13_p_0(
#line 765 "equiv_type.m"
  MR_Word parse_tree__equiv_type__MaybeRecord_14,
#line 765 "equiv_type.m"
  MR_Word parse_tree__equiv_type__TypeEqvMap_15,
#line 765 "equiv_type.m"
  MR_Word parse_tree__equiv_type__InstEqvMap_16,
#line 765 "equiv_type.m"
  MR_Word parse_tree__equiv_type__TypeCtor_17,
#line 765 "equiv_type.m"
  MR_Word parse_tree__equiv_type__TypeDefn0_18,
#line 765 "equiv_type.m"
  MR_Word * parse_tree__equiv_type__TypeDefn_19,
#line 765 "equiv_type.m"
  MR_Word * parse_tree__equiv_type__ContainsCirc_20,
#line 765 "equiv_type.m"
  MR_Word parse_tree__equiv_type__STATE_VARIABLE_VarSet_0_44,
#line 765 "equiv_type.m"
  MR_Word * parse_tree__equiv_type__STATE_VARIABLE_VarSet_45,
#line 765 "equiv_type.m"
  MR_Word parse_tree__equiv_type__STATE_VARIABLE_EquivTypeInfo_0_46,
#line 765 "equiv_type.m"
  MR_Word * parse_tree__equiv_type__STATE_VARIABLE_EquivTypeInfo_47,
#line 765 "equiv_type.m"
  MR_Word parse_tree__equiv_type__STATE_VARIABLE_UsedModules_0_48,
#line 765 "equiv_type.m"
  MR_Word * parse_tree__equiv_type__STATE_VARIABLE_UsedModules_49)
#line 765 "equiv_type.m"
{
#line 775 "equiv_type.m"
  {
#line 775 "equiv_type.m"
    MR_bool parse_tree__equiv_type__succeeded;

#line 775 "equiv_type.m"
#line 775 "equiv_type.m"
    switch (MR_tag((MR_Word) parse_tree__equiv_type__TypeDefn0_18)) {
#line 775 "equiv_type.m"
      default: /*NOTREACHED*/ MR_assert(0);
#line 775 "equiv_type.m"
      case (MR_Integer) 0:
#line 781 "equiv_type.m"
        {
#line 781 "equiv_type.m"
          MR_Word parse_tree__equiv_type__EqPred_27 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__equiv_type__TypeDefn0_18, (MR_Integer) 1)));
#line 781 "equiv_type.m"
          MR_Word parse_tree__equiv_type__DirectArgFunctors_28 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__equiv_type__TypeDefn0_18, (MR_Integer) 2)));
#line 781 "equiv_type.m"
          MR_Word parse_tree__equiv_type__TypeBody0_65 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__equiv_type__TypeDefn0_18, (MR_Integer) 0)));
#line 781 "equiv_type.m"
          MR_Word parse_tree__equiv_type__TypeBody_66;

#line 782 "equiv_type.m"
          {
#line 782 "equiv_type.m"
            parse_tree__equiv_type__replace_in_ctors_location_10_p_0(parse_tree__equiv_type__MaybeRecord_14, parse_tree__equiv_type__TypeEqvMap_15, parse_tree__equiv_type__TypeBody0_65, &parse_tree__equiv_type__TypeBody_66, parse_tree__equiv_type__STATE_VARIABLE_VarSet_0_44, parse_tree__equiv_type__STATE_VARIABLE_VarSet_45, parse_tree__equiv_type__STATE_VARIABLE_EquivTypeInfo_0_46, parse_tree__equiv_type__STATE_VARIABLE_EquivTypeInfo_47, parse_tree__equiv_type__STATE_VARIABLE_UsedModules_0_48, parse_tree__equiv_type__STATE_VARIABLE_UsedModules_49);
          }
#line 784 "equiv_type.m"
          *parse_tree__equiv_type__ContainsCirc_20 = (MR_Integer) 0;
#line 785 "equiv_type.m"
          {
#line 785 "equiv_type.m"
            MR_Word base;
#line 785 "equiv_type.m"
            base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 785 "equiv_type.m"
            *parse_tree__equiv_type__TypeDefn_19 = base;
#line 785 "equiv_type.m"
            MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (parse_tree__equiv_type__TypeBody_66));
#line 785 "equiv_type.m"
            MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (parse_tree__equiv_type__EqPred_27));
#line 785 "equiv_type.m"
            MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (parse_tree__equiv_type__DirectArgFunctors_28));
#line 785 "equiv_type.m"
          }
#line 781 "equiv_type.m"
        }
#line 775 "equiv_type.m"
        break;
#line 775 "equiv_type.m"
      case (MR_Integer) 1:
#line 775 "equiv_type.m"
        {
#line 775 "equiv_type.m"
          MR_Word parse_tree__equiv_type__TypeBody0_24 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__equiv_type__TypeDefn0_18, (MR_Integer) 0)));
#line 775 "equiv_type.m"
          MR_Word parse_tree__equiv_type__TypeBody_25;
#line 775 "equiv_type.m"
          MR_Word parse_tree__equiv_type__V_60_60;
#line 776 "equiv_type.m"
          MR_Word parse_tree__equiv_type__V_26_26;

#line 776 "equiv_type.m"
          {
#line 776 "equiv_type.m"
            parse_tree__equiv_type__V_60_60 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 776 "equiv_type.m"
            MR_hl_field(MR_mktag(1), parse_tree__equiv_type__V_60_60, 0) = ((MR_Box) (parse_tree__equiv_type__TypeCtor_17));
#line 776 "equiv_type.m"
            MR_hl_field(MR_mktag(1), parse_tree__equiv_type__V_60_60, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 776 "equiv_type.m"
          }
#line 776 "equiv_type.m"
          {
#line 776 "equiv_type.m"
            parse_tree__equiv_type__replace_in_type_maybe_record_use_2_13_p_0(parse_tree__equiv_type__MaybeRecord_14, parse_tree__equiv_type__TypeEqvMap_15, parse_tree__equiv_type__V_60_60, parse_tree__equiv_type__TypeBody0_24, &parse_tree__equiv_type__TypeBody_25, &parse_tree__equiv_type__V_26_26, parse_tree__equiv_type__ContainsCirc_20, parse_tree__equiv_type__STATE_VARIABLE_VarSet_0_44, parse_tree__equiv_type__STATE_VARIABLE_VarSet_45, parse_tree__equiv_type__STATE_VARIABLE_EquivTypeInfo_0_46, parse_tree__equiv_type__STATE_VARIABLE_EquivTypeInfo_47, parse_tree__equiv_type__STATE_VARIABLE_UsedModules_0_48, parse_tree__equiv_type__STATE_VARIABLE_UsedModules_49);
          }
#line 779 "equiv_type.m"
          {
#line 779 "equiv_type.m"
            MR_Word base;
#line 779 "equiv_type.m"
            base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 779 "equiv_type.m"
            *parse_tree__equiv_type__TypeDefn_19 = base;
#line 779 "equiv_type.m"
            MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (parse_tree__equiv_type__TypeBody_25));
#line 779 "equiv_type.m"
          }
#line 775 "equiv_type.m"
        }
#line 775 "equiv_type.m"
        break;
#line 775 "equiv_type.m"
      case (MR_Integer) 2:
#line 801 "equiv_type.m"
        {
#line 802 "equiv_type.m"
          *parse_tree__equiv_type__TypeDefn_19 = parse_tree__equiv_type__TypeDefn0_18;
#line 803 "equiv_type.m"
          *parse_tree__equiv_type__ContainsCirc_20 = (MR_Integer) 0;
#line 801 "equiv_type.m"
          *parse_tree__equiv_type__STATE_VARIABLE_VarSet_45 = parse_tree__equiv_type__STATE_VARIABLE_VarSet_0_44;
#line 801 "equiv_type.m"
          *parse_tree__equiv_type__STATE_VARIABLE_EquivTypeInfo_47 = parse_tree__equiv_type__STATE_VARIABLE_EquivTypeInfo_0_46;
#line 801 "equiv_type.m"
          *parse_tree__equiv_type__STATE_VARIABLE_UsedModules_49 = parse_tree__equiv_type__STATE_VARIABLE_UsedModules_0_48;
#line 801 "equiv_type.m"
        }
#line 775 "equiv_type.m"
        break;
#line 775 "equiv_type.m"
      case (MR_Integer) 3:
#line 775 "equiv_type.m"
#line 775 "equiv_type.m"
        switch (((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__equiv_type__TypeDefn0_18, (MR_Integer) 0)))) {
#line 775 "equiv_type.m"
          default: /*NOTREACHED*/ MR_assert(0);
#line 775 "equiv_type.m"
          case (MR_Integer) 0:
#line 787 "equiv_type.m"
            {
#line 787 "equiv_type.m"
              MR_Word parse_tree__equiv_type__SolverDetails0_29 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__equiv_type__TypeDefn0_18, (MR_Integer) 1)));
#line 787 "equiv_type.m"
              MR_Word parse_tree__equiv_type__MaybeUserEqComp_30 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__equiv_type__TypeDefn0_18, (MR_Integer) 2)));
#line 787 "equiv_type.m"
              MR_Word parse_tree__equiv_type__RepresentationType0_31 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__equiv_type__SolverDetails0_29, (MR_Integer) 0)));
#line 787 "equiv_type.m"
              MR_Word parse_tree__equiv_type__InitPred_32 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__equiv_type__SolverDetails0_29, (MR_Integer) 1)));
#line 787 "equiv_type.m"
              MR_Word parse_tree__equiv_type__GroundInst_33 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__equiv_type__SolverDetails0_29, (MR_Integer) 2)));
#line 787 "equiv_type.m"
              MR_Word parse_tree__equiv_type__AnyInst_34 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__equiv_type__SolverDetails0_29, (MR_Integer) 3)));
#line 787 "equiv_type.m"
              MR_Word parse_tree__equiv_type__MutableInfos0_35 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__equiv_type__SolverDetails0_29, (MR_Integer) 4)));
#line 787 "equiv_type.m"
              MR_Word parse_tree__equiv_type__RepresentationType_36;
#line 787 "equiv_type.m"
              MR_Word parse_tree__equiv_type__MutableInfos_38;
#line 787 "equiv_type.m"
              MR_Word parse_tree__equiv_type__SolverDetails_39;
#line 787 "equiv_type.m"
              MR_Word parse_tree__equiv_type__V_50_50;
#line 787 "equiv_type.m"
              MR_Word parse_tree__equiv_type__STATE_VARIABLE_EquivTypeInfo_52_52;
#line 787 "equiv_type.m"
              MR_Word parse_tree__equiv_type__STATE_VARIABLE_UsedModules_53_53;
#line 790 "equiv_type.m"
              MR_Word parse_tree__equiv_type__V_37_37;

#line 790 "equiv_type.m"
              {
#line 790 "equiv_type.m"
                parse_tree__equiv_type__V_50_50 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 790 "equiv_type.m"
                MR_hl_field(MR_mktag(1), parse_tree__equiv_type__V_50_50, 0) = ((MR_Box) (parse_tree__equiv_type__TypeCtor_17));
#line 790 "equiv_type.m"
                MR_hl_field(MR_mktag(1), parse_tree__equiv_type__V_50_50, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 790 "equiv_type.m"
              }
#line 790 "equiv_type.m"
              {
#line 790 "equiv_type.m"
                parse_tree__equiv_type__replace_in_type_maybe_record_use_2_13_p_0(parse_tree__equiv_type__MaybeRecord_14, parse_tree__equiv_type__TypeEqvMap_15, parse_tree__equiv_type__V_50_50, parse_tree__equiv_type__RepresentationType0_31, &parse_tree__equiv_type__RepresentationType_36, &parse_tree__equiv_type__V_37_37, parse_tree__equiv_type__ContainsCirc_20, parse_tree__equiv_type__STATE_VARIABLE_VarSet_0_44, parse_tree__equiv_type__STATE_VARIABLE_VarSet_45, parse_tree__equiv_type__STATE_VARIABLE_EquivTypeInfo_0_46, &parse_tree__equiv_type__STATE_VARIABLE_EquivTypeInfo_52_52, parse_tree__equiv_type__STATE_VARIABLE_UsedModules_0_48, &parse_tree__equiv_type__STATE_VARIABLE_UsedModules_53_53);
              }
#line 793 "equiv_type.m"
              {
#line 793 "equiv_type.m"
                parse_tree__equiv_type__replace_in_constraint_store_9_p_0(parse_tree__equiv_type__MaybeRecord_14, parse_tree__equiv_type__TypeEqvMap_15, parse_tree__equiv_type__InstEqvMap_16, parse_tree__equiv_type__MutableInfos0_35, &parse_tree__equiv_type__MutableInfos_38, parse_tree__equiv_type__STATE_VARIABLE_EquivTypeInfo_52_52, parse_tree__equiv_type__STATE_VARIABLE_EquivTypeInfo_47, parse_tree__equiv_type__STATE_VARIABLE_UsedModules_53_53, parse_tree__equiv_type__STATE_VARIABLE_UsedModules_49);
              }
#line 795 "equiv_type.m"
              {
#line 795 "equiv_type.m"
                parse_tree__equiv_type__SolverDetails_39 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
#line 795 "equiv_type.m"
                MR_hl_field(MR_mktag(0), parse_tree__equiv_type__SolverDetails_39, 0) = ((MR_Box) (parse_tree__equiv_type__RepresentationType_36));
#line 795 "equiv_type.m"
                MR_hl_field(MR_mktag(0), parse_tree__equiv_type__SolverDetails_39, 1) = ((MR_Box) (parse_tree__equiv_type__InitPred_32));
#line 795 "equiv_type.m"
                MR_hl_field(MR_mktag(0), parse_tree__equiv_type__SolverDetails_39, 2) = ((MR_Box) (parse_tree__equiv_type__GroundInst_33));
#line 795 "equiv_type.m"
                MR_hl_field(MR_mktag(0), parse_tree__equiv_type__SolverDetails_39, 3) = ((MR_Box) (parse_tree__equiv_type__AnyInst_34));
#line 795 "equiv_type.m"
                MR_hl_field(MR_mktag(0), parse_tree__equiv_type__SolverDetails_39, 4) = ((MR_Box) (parse_tree__equiv_type__MutableInfos_38));
#line 795 "equiv_type.m"
              }
#line 797 "equiv_type.m"
              {
#line 797 "equiv_type.m"
                MR_Word base;
#line 797 "equiv_type.m"
                base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
#line 797 "equiv_type.m"
                *parse_tree__equiv_type__TypeDefn_19 = base;
#line 797 "equiv_type.m"
                MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 0));
#line 797 "equiv_type.m"
                MR_hl_field(MR_mktag(3), base, 1) = ((MR_Box) (parse_tree__equiv_type__SolverDetails_39));
#line 797 "equiv_type.m"
                MR_hl_field(MR_mktag(3), base, 2) = ((MR_Box) (parse_tree__equiv_type__MaybeUserEqComp_30));
#line 797 "equiv_type.m"
              }
#line 787 "equiv_type.m"
            }
#line 775 "equiv_type.m"
            break;
#line 775 "equiv_type.m"
          case (MR_Integer) 1:
#line 801 "equiv_type.m"
            {
#line 802 "equiv_type.m"
              *parse_tree__equiv_type__TypeDefn_19 = parse_tree__equiv_type__TypeDefn0_18;
#line 803 "equiv_type.m"
              *parse_tree__equiv_type__ContainsCirc_20 = (MR_Integer) 0;
#line 801 "equiv_type.m"
              *parse_tree__equiv_type__STATE_VARIABLE_VarSet_45 = parse_tree__equiv_type__STATE_VARIABLE_VarSet_0_44;
#line 801 "equiv_type.m"
              *parse_tree__equiv_type__STATE_VARIABLE_EquivTypeInfo_47 = parse_tree__equiv_type__STATE_VARIABLE_EquivTypeInfo_0_46;
#line 801 "equiv_type.m"
              *parse_tree__equiv_type__STATE_VARIABLE_UsedModules_49 = parse_tree__equiv_type__STATE_VARIABLE_UsedModules_0_48;
#line 801 "equiv_type.m"
            }
#line 775 "equiv_type.m"
            break;
#line 775 "equiv_type.m"
        }
#line 775 "equiv_type.m"
        break;
#line 775 "equiv_type.m"
    }
#line 775 "equiv_type.m"
  }
#line 765 "equiv_type.m"
}

#line 681 "equiv_type.m"
static void MR_CALL 
parse_tree__equiv_type__replace_in_mutable_defn_9_p_0(
#line 681 "equiv_type.m"
  MR_Word parse_tree__equiv_type__MaybeRecord_10,
#line 681 "equiv_type.m"
  MR_Word parse_tree__equiv_type__TypeEqvMap_11,
#line 681 "equiv_type.m"
  MR_Word parse_tree__equiv_type__InstEqvMap_12,
#line 681 "equiv_type.m"
  MR_Word parse_tree__equiv_type__Info0_13,
#line 681 "equiv_type.m"
  MR_Word * parse_tree__equiv_type__Info_14,
#line 681 "equiv_type.m"
  MR_Word parse_tree__equiv_type__STATE_VARIABLE_ExpandedItems_0_30,
#line 681 "equiv_type.m"
  MR_Word * parse_tree__equiv_type__STATE_VARIABLE_ExpandedItems_31,
#line 681 "equiv_type.m"
  MR_Word parse_tree__equiv_type__STATE_VARIABLE_UsedModules_0_32,
#line 681 "equiv_type.m"
  MR_Word * parse_tree__equiv_type__STATE_VARIABLE_UsedModules_33)
#line 681 "equiv_type.m"
{
#line 688 "equiv_type.m"
  {
#line 688 "equiv_type.m"
    MR_bool parse_tree__equiv_type__succeeded;
#line 688 "equiv_type.m"
    MR_String parse_tree__equiv_type__MutName_17 = ((MR_String) (MR_hl_field(MR_mktag(0), parse_tree__equiv_type__Info0_13, (MR_Integer) 0)));
#line 688 "equiv_type.m"
    MR_Word parse_tree__equiv_type__Type0_18 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__equiv_type__Info0_13, (MR_Integer) 1)));
#line 688 "equiv_type.m"
    MR_Word parse_tree__equiv_type__InitValue_19 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__equiv_type__Info0_13, (MR_Integer) 2)));
#line 688 "equiv_type.m"
    MR_Word parse_tree__equiv_type__Inst0_20 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__equiv_type__Info0_13, (MR_Integer) 3)));
#line 688 "equiv_type.m"
    MR_Word parse_tree__equiv_type__Attrs_21 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__equiv_type__Info0_13, (MR_Integer) 4)));
#line 688 "equiv_type.m"
    MR_Word parse_tree__equiv_type__Varset_22 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__equiv_type__Info0_13, (MR_Integer) 5)));
#line 688 "equiv_type.m"
    MR_Word parse_tree__equiv_type__Context_23 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__equiv_type__Info0_13, (MR_Integer) 6)));
#line 688 "equiv_type.m"
    MR_Integer parse_tree__equiv_type__SeqNum_24 = ((MR_Integer) (MR_hl_field(MR_mktag(0), parse_tree__equiv_type__Info0_13, (MR_Integer) 7)));
#line 688 "equiv_type.m"
    MR_Word parse_tree__equiv_type__TVarSet0_25;
#line 688 "equiv_type.m"
    MR_Word parse_tree__equiv_type__Type_26;
#line 688 "equiv_type.m"
    MR_Word parse_tree__equiv_type__Inst_29;
#line 688 "equiv_type.m"
    MR_Word parse_tree__equiv_type__STATE_VARIABLE_ExpandedItems_34_34;
#line 688 "equiv_type.m"
    MR_Word parse_tree__equiv_type__STATE_VARIABLE_UsedModules_35_35;
#line 688 "equiv_type.m"
    MR_Word parse_tree__equiv_type__V_68_68;
#line 1090 "equiv_type.m"
    MR_Word parse_tree__equiv_type___TypeChanged_27;
#line 1090 "equiv_type.m"
    MR_Word parse_tree__equiv_type___TVarSet_28;
#line 1090 "equiv_type.m"
    MR_Word parse_tree__equiv_type__V_53_53;

#line 691 "equiv_type.m"
    {
#line 691 "equiv_type.m"
      parse_tree__equiv_type__TVarSet0_25 = mercury__varset__init_0_f_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_tvar_type_0);
    }
#line 1090 "equiv_type.m"
    {
#line 1090 "equiv_type.m"
      parse_tree__equiv_type__replace_in_type_maybe_record_use_2_13_p_0(parse_tree__equiv_type__MaybeRecord_10, parse_tree__equiv_type__TypeEqvMap_11, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), parse_tree__equiv_type__Type0_18, &parse_tree__equiv_type__Type_26, &parse_tree__equiv_type___TypeChanged_27, &parse_tree__equiv_type__V_53_53, parse_tree__equiv_type__TVarSet0_25, &parse_tree__equiv_type___TVarSet_28, parse_tree__equiv_type__STATE_VARIABLE_ExpandedItems_0_30, &parse_tree__equiv_type__STATE_VARIABLE_ExpandedItems_34_34, parse_tree__equiv_type__STATE_VARIABLE_UsedModules_0_32, &parse_tree__equiv_type__STATE_VARIABLE_UsedModules_35_35);
    }
#line 1253 "equiv_type.m"
    {
#line 1253 "equiv_type.m"
      parse_tree__equiv_type__V_68_68 = mercury__set__init_0_f_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_inst_id_0);
    }
#line 1253 "equiv_type.m"
    {
#line 1253 "equiv_type.m"
      parse_tree__equiv_type__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_114_101_112_108_97_99_101_95_105_110_95_105_110_115_116_95_108_111_99_97_116_105_111_110_95_95_91_49_93_95_48_9_p_0(parse_tree__equiv_type__Inst0_20, parse_tree__equiv_type__InstEqvMap_12, parse_tree__equiv_type__V_68_68, &parse_tree__equiv_type__Inst_29, parse_tree__equiv_type__STATE_VARIABLE_ExpandedItems_34_34, parse_tree__equiv_type__STATE_VARIABLE_ExpandedItems_31, parse_tree__equiv_type__STATE_VARIABLE_UsedModules_35_35, parse_tree__equiv_type__STATE_VARIABLE_UsedModules_33);
    }
#line 696 "equiv_type.m"
    {
#line 696 "equiv_type.m"
      MR_Word base;
#line 696 "equiv_type.m"
      base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 8 * sizeof(MR_Word)), NULL, NULL);
#line 696 "equiv_type.m"
      *parse_tree__equiv_type__Info_14 = base;
#line 696 "equiv_type.m"
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (parse_tree__equiv_type__MutName_17));
#line 696 "equiv_type.m"
      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (parse_tree__equiv_type__Type_26));
#line 696 "equiv_type.m"
      MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (parse_tree__equiv_type__InitValue_19));
#line 696 "equiv_type.m"
      MR_hl_field(MR_mktag(0), base, 3) = ((MR_Box) (parse_tree__equiv_type__Inst_29));
#line 696 "equiv_type.m"
      MR_hl_field(MR_mktag(0), base, 4) = ((MR_Box) (parse_tree__equiv_type__Attrs_21));
#line 696 "equiv_type.m"
      MR_hl_field(MR_mktag(0), base, 5) = ((MR_Box) (parse_tree__equiv_type__Varset_22));
#line 696 "equiv_type.m"
      MR_hl_field(MR_mktag(0), base, 6) = ((MR_Box) (parse_tree__equiv_type__Context_23));
#line 696 "equiv_type.m"
      MR_hl_field(MR_mktag(0), base, 7) = ((MR_Box) (parse_tree__equiv_type__SeqNum_24));
#line 696 "equiv_type.m"
    }
#line 688 "equiv_type.m"
  }
#line 681 "equiv_type.m"
}

#line 849 "equiv_type.m"
static void MR_CALL 
parse_tree__equiv_type__replace_in_typeclass_info_11_p_0_1(
#line 849 "equiv_type.m"
  MR_Box parse_tree__equiv_type__closure_arg,
#line 849 "equiv_type.m"
  MR_Box parse_tree__equiv_type__wrapper_arg_1,
#line 849 "equiv_type.m"
  MR_Box * parse_tree__equiv_type__wrapper_arg_2,
#line 849 "equiv_type.m"
  MR_Box parse_tree__equiv_type__wrapper_arg_3,
#line 849 "equiv_type.m"
  MR_Box * parse_tree__equiv_type__wrapper_arg_4,
#line 849 "equiv_type.m"
  MR_Box parse_tree__equiv_type__wrapper_arg_5,
#line 849 "equiv_type.m"
  MR_Box * parse_tree__equiv_type__wrapper_arg_6,
#line 849 "equiv_type.m"
  MR_Box parse_tree__equiv_type__wrapper_arg_7,
#line 849 "equiv_type.m"
  MR_Box * parse_tree__equiv_type__wrapper_arg_8)
#line 849 "equiv_type.m"
{
#line 849 "equiv_type.m"
  {
#line 849 "equiv_type.m"
    MR_Box parse_tree__equiv_type__closure = parse_tree__equiv_type__closure_arg;
#line 849 "equiv_type.m"
    MR_Word parse_tree__equiv_type__conv3_Constraint_14;
#line 849 "equiv_type.m"
    MR_Word parse_tree__equiv_type__conv2_STATE_VARIABLE_VarSet_24;
#line 849 "equiv_type.m"
    MR_Word parse_tree__equiv_type__conv1_STATE_VARIABLE_EquivTypeInfo_26;
#line 849 "equiv_type.m"
    MR_Word parse_tree__equiv_type__conv0_STATE_VARIABLE_UsedModules_28;

#line 849 "equiv_type.m"
    {
#line 849 "equiv_type.m"
      parse_tree__equiv_type__replace_in_prog_constraint_location_10_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__equiv_type__closure, (MR_Integer) 3))), ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__equiv_type__closure, (MR_Integer) 4))), ((MR_Word) parse_tree__equiv_type__wrapper_arg_1), &parse_tree__equiv_type__conv3_Constraint_14, ((MR_Word) parse_tree__equiv_type__wrapper_arg_3), &parse_tree__equiv_type__conv2_STATE_VARIABLE_VarSet_24, ((MR_Word) parse_tree__equiv_type__wrapper_arg_5), &parse_tree__equiv_type__conv1_STATE_VARIABLE_EquivTypeInfo_26, ((MR_Word) parse_tree__equiv_type__wrapper_arg_7), &parse_tree__equiv_type__conv0_STATE_VARIABLE_UsedModules_28);
    }
#line 849 "equiv_type.m"
    *parse_tree__equiv_type__wrapper_arg_2 = ((MR_Box) (parse_tree__equiv_type__conv3_Constraint_14));
#line 849 "equiv_type.m"
    *parse_tree__equiv_type__wrapper_arg_4 = ((MR_Box) (parse_tree__equiv_type__conv2_STATE_VARIABLE_VarSet_24));
#line 849 "equiv_type.m"
    *parse_tree__equiv_type__wrapper_arg_6 = ((MR_Box) (parse_tree__equiv_type__conv1_STATE_VARIABLE_EquivTypeInfo_26));
#line 849 "equiv_type.m"
    *parse_tree__equiv_type__wrapper_arg_8 = ((MR_Box) (parse_tree__equiv_type__conv0_STATE_VARIABLE_UsedModules_28));
#line 849 "equiv_type.m"
  }
#line 849 "equiv_type.m"
}

#line 496 "equiv_type.m"
static void MR_CALL 
parse_tree__equiv_type__replace_in_typeclass_info_11_p_0(
#line 496 "equiv_type.m"
  MR_Word parse_tree__equiv_type__ModuleName_12,
#line 496 "equiv_type.m"
  MR_Word parse_tree__equiv_type__MaybeRecord_13,
#line 496 "equiv_type.m"
  MR_Word parse_tree__equiv_type__TypeEqvMap_14,
#line 496 "equiv_type.m"
  MR_Word parse_tree__equiv_type__InstEqvMap_15,
#line 496 "equiv_type.m"
  MR_Word parse_tree__equiv_type__Info0_16,
#line 496 "equiv_type.m"
  MR_Word * parse_tree__equiv_type__Info_17,
#line 496 "equiv_type.m"
  MR_Word parse_tree__equiv_type__STATE_VARIABLE_RecompInfo_0_39,
#line 496 "equiv_type.m"
  MR_Word * parse_tree__equiv_type__STATE_VARIABLE_RecompInfo_40,
#line 496 "equiv_type.m"
  MR_Word parse_tree__equiv_type__STATE_VARIABLE_UsedModules_0_41,
#line 496 "equiv_type.m"
  MR_Word * parse_tree__equiv_type__STATE_VARIABLE_UsedModules_42,
#line 496 "equiv_type.m"
  MR_Word * parse_tree__equiv_type__Specs_20)
#line 496 "equiv_type.m"
{
#line 503 "equiv_type.m"
  {
#line 503 "equiv_type.m"
    MR_bool parse_tree__equiv_type__succeeded;
#line 503 "equiv_type.m"
    MR_Word parse_tree__equiv_type__TypeCtorInfo_38_77;
#line 503 "equiv_type.m"
    MR_Word parse_tree__equiv_type__ClassName_21 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__equiv_type__Info0_16, (MR_Integer) 0)));
#line 503 "equiv_type.m"
    MR_Word parse_tree__equiv_type__Vars_22 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__equiv_type__Info0_16, (MR_Integer) 1)));
#line 503 "equiv_type.m"
    MR_Word parse_tree__equiv_type__Constraints0_23 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__equiv_type__Info0_16, (MR_Integer) 2)));
#line 503 "equiv_type.m"
    MR_Word parse_tree__equiv_type__FunDeps_24 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__equiv_type__Info0_16, (MR_Integer) 3)));
#line 503 "equiv_type.m"
    MR_Word parse_tree__equiv_type__ClassInterface0_25 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__equiv_type__Info0_16, (MR_Integer) 4)));
#line 503 "equiv_type.m"
    MR_Word parse_tree__equiv_type__VarSet0_26 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__equiv_type__Info0_16, (MR_Integer) 5)));
#line 503 "equiv_type.m"
    MR_Word parse_tree__equiv_type__Context_27 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__equiv_type__Info0_16, (MR_Integer) 6)));
#line 503 "equiv_type.m"
    MR_Integer parse_tree__equiv_type__SeqNum_28 = ((MR_Integer) (MR_hl_field(MR_mktag(0), parse_tree__equiv_type__Info0_16, (MR_Integer) 7)));
#line 503 "equiv_type.m"
    MR_Integer parse_tree__equiv_type__Arity_29;
#line 503 "equiv_type.m"
    MR_Word parse_tree__equiv_type__ExpandedItems0_30;
#line 503 "equiv_type.m"
    MR_Word parse_tree__equiv_type__Constraints_31;
#line 503 "equiv_type.m"
    MR_Word parse_tree__equiv_type__VarSet_32;
#line 503 "equiv_type.m"
    MR_Word parse_tree__equiv_type__ExpandedItems1_33;
#line 503 "equiv_type.m"
    MR_Word parse_tree__equiv_type__ClassInterface_34;
#line 503 "equiv_type.m"
    MR_Word parse_tree__equiv_type__ExpandedItems_35;
#line 503 "equiv_type.m"
    MR_Word parse_tree__equiv_type__ItemId_38;
#line 503 "equiv_type.m"
    MR_Word parse_tree__equiv_type__STATE_VARIABLE_UsedModules_43_43;
#line 503 "equiv_type.m"
    MR_Word parse_tree__equiv_type__V_47_47;
#line 503 "equiv_type.m"
    MR_Word parse_tree__equiv_type__V_64_64;
#line 848 "equiv_type.m"
    MR_Box parse_tree__equiv_type__conv6_VarSet_32;
#line 848 "equiv_type.m"
    MR_Box parse_tree__equiv_type__conv5_ExpandedItems1_33;
#line 848 "equiv_type.m"
    MR_Box parse_tree__equiv_type__conv4_STATE_VARIABLE_UsedModules_43_43;

#line 506 "equiv_type.m"
    {
#line 506 "equiv_type.m"
      mercury__list__length_2_p_0((MR_Word) &parse_tree__equiv_type_scalar_common_1[4], parse_tree__equiv_type__Vars_22, &parse_tree__equiv_type__Arity_29);
    }
#line 507 "equiv_type.m"
    {
#line 507 "equiv_type.m"
      recompilation__maybe_start_recording_expanded_items_4_p_0(parse_tree__equiv_type__ModuleName_12, parse_tree__equiv_type__ClassName_21, parse_tree__equiv_type__STATE_VARIABLE_RecompInfo_0_39, &parse_tree__equiv_type__ExpandedItems0_30);
    }
#line 849 "equiv_type.m"
    {
#line 849 "equiv_type.m"
      parse_tree__equiv_type__V_64_64 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
#line 849 "equiv_type.m"
      MR_hl_field(MR_mktag(0), parse_tree__equiv_type__V_64_64, 0) = ((MR_Box) (&parse_tree__equiv_type_scalar_common_3[0]));
#line 849 "equiv_type.m"
      MR_hl_field(MR_mktag(0), parse_tree__equiv_type__V_64_64, 1) = ((MR_Box) (parse_tree__equiv_type__replace_in_typeclass_info_11_p_0_1));
#line 849 "equiv_type.m"
      MR_hl_field(MR_mktag(0), parse_tree__equiv_type__V_64_64, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
#line 849 "equiv_type.m"
      MR_hl_field(MR_mktag(0), parse_tree__equiv_type__V_64_64, 3) = ((MR_Box) (parse_tree__equiv_type__MaybeRecord_13));
#line 849 "equiv_type.m"
      MR_hl_field(MR_mktag(0), parse_tree__equiv_type__V_64_64, 4) = ((MR_Box) (parse_tree__equiv_type__TypeEqvMap_14));
#line 849 "equiv_type.m"
    }
#line 11269 "parse_tree.equiv_type.c"
    parse_tree__equiv_type__TypeCtorInfo_38_77 = (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_constraint_0;
#line 848 "equiv_type.m"
    {
#line 848 "equiv_type.m"
      mercury__list__map_foldl3_9_p_1(parse_tree__equiv_type__TypeCtorInfo_38_77, parse_tree__equiv_type__TypeCtorInfo_38_77, (MR_Word) &parse_tree__equiv_type_scalar_common_1[6], (MR_Word) &parse_tree__equiv_type_scalar_common_1[7], (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_used_modules_0, parse_tree__equiv_type__V_64_64, parse_tree__equiv_type__Constraints0_23, &parse_tree__equiv_type__Constraints_31, ((MR_Box) (parse_tree__equiv_type__VarSet0_26)), &parse_tree__equiv_type__conv6_VarSet_32, ((MR_Box) (parse_tree__equiv_type__ExpandedItems0_30)), &parse_tree__equiv_type__conv5_ExpandedItems1_33, ((MR_Box) (parse_tree__equiv_type__STATE_VARIABLE_UsedModules_0_41)), &parse_tree__equiv_type__conv4_STATE_VARIABLE_UsedModules_43_43);
    }
#line 848 "equiv_type.m"
    parse_tree__equiv_type__VarSet_32 = ((MR_Word) parse_tree__equiv_type__conv6_VarSet_32);
#line 848 "equiv_type.m"
    parse_tree__equiv_type__ExpandedItems1_33 = ((MR_Word) parse_tree__equiv_type__conv5_ExpandedItems1_33);
#line 848 "equiv_type.m"
    parse_tree__equiv_type__STATE_VARIABLE_UsedModules_43_43 = ((MR_Word) parse_tree__equiv_type__conv4_STATE_VARIABLE_UsedModules_43_43);
#line 517 "equiv_type.m"
    if ((parse_tree__equiv_type__ClassInterface0_25 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 513 "equiv_type.m"
      {
#line 514 "equiv_type.m"
        parse_tree__equiv_type__ClassInterface_34 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 515 "equiv_type.m"
        parse_tree__equiv_type__ExpandedItems_35 = parse_tree__equiv_type__ExpandedItems1_33;
#line 516 "equiv_type.m"
        *parse_tree__equiv_type__Specs_20 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 513 "equiv_type.m"
        *parse_tree__equiv_type__STATE_VARIABLE_UsedModules_42 = parse_tree__equiv_type__STATE_VARIABLE_UsedModules_43_43;
#line 513 "equiv_type.m"
      }
#line 517 "equiv_type.m"
    else
#line 518 "equiv_type.m"
      {
#line 518 "equiv_type.m"
        MR_Word parse_tree__equiv_type__Methods0_36 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__equiv_type__ClassInterface0_25, (MR_Integer) 0)));
#line 518 "equiv_type.m"
        MR_Word parse_tree__equiv_type__Methods_37;

#line 519 "equiv_type.m"
        {
#line 519 "equiv_type.m"
          parse_tree__equiv_type__replace_in_class_interface_11_p_0(parse_tree__equiv_type__MaybeRecord_13, parse_tree__equiv_type__TypeEqvMap_14, parse_tree__equiv_type__InstEqvMap_15, parse_tree__equiv_type__Methods0_36, &parse_tree__equiv_type__Methods_37, parse_tree__equiv_type__ExpandedItems1_33, &parse_tree__equiv_type__ExpandedItems_35, parse_tree__equiv_type__STATE_VARIABLE_UsedModules_43_43, parse_tree__equiv_type__STATE_VARIABLE_UsedModules_42, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), parse_tree__equiv_type__Specs_20);
        }
#line 522 "equiv_type.m"
        {
#line 522 "equiv_type.m"
          parse_tree__equiv_type__ClassInterface_34 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 522 "equiv_type.m"
          MR_hl_field(MR_mktag(1), parse_tree__equiv_type__ClassInterface_34, 0) = ((MR_Box) (parse_tree__equiv_type__Methods_37));
#line 522 "equiv_type.m"
        }
#line 518 "equiv_type.m"
      }
#line 524 "equiv_type.m"
    {
#line 524 "equiv_type.m"
      parse_tree__equiv_type__V_47_47 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 524 "equiv_type.m"
      MR_hl_field(MR_mktag(0), parse_tree__equiv_type__V_47_47, 0) = ((MR_Box) (parse_tree__equiv_type__ClassName_21));
#line 524 "equiv_type.m"
      MR_hl_field(MR_mktag(0), parse_tree__equiv_type__V_47_47, 1) = ((MR_Box) (parse_tree__equiv_type__Arity_29));
#line 524 "equiv_type.m"
    }
#line 524 "equiv_type.m"
    {
#line 524 "equiv_type.m"
      parse_tree__equiv_type__ItemId_38 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 524 "equiv_type.m"
      MR_hl_field(MR_mktag(0), parse_tree__equiv_type__ItemId_38, 0) = ((MR_Box) ((MR_Integer) 4));
#line 524 "equiv_type.m"
      MR_hl_field(MR_mktag(0), parse_tree__equiv_type__ItemId_38, 1) = ((MR_Box) (parse_tree__equiv_type__V_47_47));
#line 524 "equiv_type.m"
    }
#line 525 "equiv_type.m"
    {
#line 525 "equiv_type.m"
      recompilation__finish_recording_expanded_items_4_p_0(parse_tree__equiv_type__ItemId_38, parse_tree__equiv_type__ExpandedItems_35, parse_tree__equiv_type__STATE_VARIABLE_RecompInfo_0_39, parse_tree__equiv_type__STATE_VARIABLE_RecompInfo_40);
    }
#line 526 "equiv_type.m"
    {
#line 526 "equiv_type.m"
      MR_Word base;
#line 526 "equiv_type.m"
      base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 8 * sizeof(MR_Word)), NULL, NULL);
#line 526 "equiv_type.m"
      *parse_tree__equiv_type__Info_17 = base;
#line 526 "equiv_type.m"
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (parse_tree__equiv_type__ClassName_21));
#line 526 "equiv_type.m"
      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (parse_tree__equiv_type__Vars_22));
#line 526 "equiv_type.m"
      MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (parse_tree__equiv_type__Constraints_31));
#line 526 "equiv_type.m"
      MR_hl_field(MR_mktag(0), base, 3) = ((MR_Box) (parse_tree__equiv_type__FunDeps_24));
#line 526 "equiv_type.m"
      MR_hl_field(MR_mktag(0), base, 4) = ((MR_Box) (parse_tree__equiv_type__ClassInterface_34));
#line 526 "equiv_type.m"
      MR_hl_field(MR_mktag(0), base, 5) = ((MR_Box) (parse_tree__equiv_type__VarSet_32));
#line 526 "equiv_type.m"
      MR_hl_field(MR_mktag(0), base, 6) = ((MR_Box) (parse_tree__equiv_type__Context_27));
#line 526 "equiv_type.m"
      MR_hl_field(MR_mktag(0), base, 7) = ((MR_Box) (parse_tree__equiv_type__SeqNum_28));
#line 526 "equiv_type.m"
    }
#line 503 "equiv_type.m"
  }
#line 496 "equiv_type.m"
}

#line 429 "equiv_type.m"
static void MR_CALL 
parse_tree__equiv_type__replace_in_pred_decl_info_11_p_0(
#line 429 "equiv_type.m"
  MR_Word parse_tree__equiv_type__ModuleName_12,
#line 429 "equiv_type.m"
  MR_Word parse_tree__equiv_type__MaybeRecord_13,
#line 429 "equiv_type.m"
  MR_Word parse_tree__equiv_type__TypeEqvMap_14,
#line 429 "equiv_type.m"
  MR_Word parse_tree__equiv_type__InstEqvMap_15,
#line 429 "equiv_type.m"
  MR_Word parse_tree__equiv_type__Info0_16,
#line 429 "equiv_type.m"
  MR_Word * parse_tree__equiv_type__Info_17,
#line 429 "equiv_type.m"
  MR_Word parse_tree__equiv_type__STATE_VARIABLE_RecompInfo_0_47,
#line 429 "equiv_type.m"
  MR_Word * parse_tree__equiv_type__STATE_VARIABLE_RecompInfo_48,
#line 429 "equiv_type.m"
  MR_Word parse_tree__equiv_type__STATE_VARIABLE_UsedModules_0_49,
#line 429 "equiv_type.m"
  MR_Word * parse_tree__equiv_type__STATE_VARIABLE_UsedModules_50,
#line 429 "equiv_type.m"
  MR_Word * parse_tree__equiv_type__Specs_20)
#line 429 "equiv_type.m"
{
#line 436 "equiv_type.m"
  {
#line 436 "equiv_type.m"
    MR_bool parse_tree__equiv_type__succeeded;
#line 436 "equiv_type.m"
    MR_Word parse_tree__equiv_type__PredName_21 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__equiv_type__Info0_16, (MR_Integer) 0)));
#line 436 "equiv_type.m"
    MR_Word parse_tree__equiv_type__PredOrFunc_22 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__equiv_type__Info0_16, (MR_Integer) 1)));
#line 436 "equiv_type.m"
    MR_Word parse_tree__equiv_type__TypesAndModes0_23 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__equiv_type__Info0_16, (MR_Integer) 2)));
#line 436 "equiv_type.m"
    MR_Word parse_tree__equiv_type__MaybeWithType0_24 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__equiv_type__Info0_16, (MR_Integer) 3)));
#line 436 "equiv_type.m"
    MR_Word parse_tree__equiv_type__MaybeWithInst0_25 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__equiv_type__Info0_16, (MR_Integer) 4)));
#line 436 "equiv_type.m"
    MR_Word parse_tree__equiv_type__MaybeDetism0_26 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__equiv_type__Info0_16, (MR_Integer) 5)));
#line 436 "equiv_type.m"
    MR_Word parse_tree__equiv_type__Origin_27 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__equiv_type__Info0_16, (MR_Integer) 6)));
#line 436 "equiv_type.m"
    MR_Word parse_tree__equiv_type__TypeVarSet0_28 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__equiv_type__Info0_16, (MR_Integer) 7)));
#line 436 "equiv_type.m"
    MR_Word parse_tree__equiv_type__InstVarSet_29 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__equiv_type__Info0_16, (MR_Integer) 8)));
#line 436 "equiv_type.m"
    MR_Word parse_tree__equiv_type__ExistQVars_30 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__equiv_type__Info0_16, (MR_Integer) 9)));
#line 436 "equiv_type.m"
    MR_Word parse_tree__equiv_type__Purity_31 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__equiv_type__Info0_16, (MR_Integer) 10)));
#line 436 "equiv_type.m"
    MR_Word parse_tree__equiv_type__ClassContext0_32 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__equiv_type__Info0_16, (MR_Integer) 11)));
#line 436 "equiv_type.m"
    MR_Word parse_tree__equiv_type__Context_33 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__equiv_type__Info0_16, (MR_Integer) 12)));
#line 436 "equiv_type.m"
    MR_Integer parse_tree__equiv_type__SeqNum_34 = ((MR_Integer) (MR_hl_field(MR_mktag(0), parse_tree__equiv_type__Info0_16, (MR_Integer) 13)));
#line 436 "equiv_type.m"
    MR_Word parse_tree__equiv_type__ExpandedItems0_35;
#line 436 "equiv_type.m"
    MR_Word parse_tree__equiv_type__ClassContext_36;
#line 436 "equiv_type.m"
    MR_Word parse_tree__equiv_type__TypesAndModes_37;
#line 436 "equiv_type.m"
    MR_Word parse_tree__equiv_type__TypeVarSet_38;
#line 436 "equiv_type.m"
    MR_Word parse_tree__equiv_type__MaybeWithType_39;
#line 436 "equiv_type.m"
    MR_Word parse_tree__equiv_type__MaybeWithInst_40;
#line 436 "equiv_type.m"
    MR_Word parse_tree__equiv_type__MaybeDetism_41;
#line 436 "equiv_type.m"
    MR_Word parse_tree__equiv_type__ExpandedItems_42;
#line 436 "equiv_type.m"
    MR_Word parse_tree__equiv_type__ItemType_43;
#line 436 "equiv_type.m"
    MR_Integer parse_tree__equiv_type__Arity_44;
#line 436 "equiv_type.m"
    MR_Integer parse_tree__equiv_type__OrigArity_45;
#line 436 "equiv_type.m"
    MR_Word parse_tree__equiv_type__ItemId_46;
#line 436 "equiv_type.m"
    MR_Word parse_tree__equiv_type__V_52_52;

#line 441 "equiv_type.m"
    {
#line 441 "equiv_type.m"
      recompilation__maybe_start_recording_expanded_items_4_p_0(parse_tree__equiv_type__ModuleName_12, parse_tree__equiv_type__PredName_21, parse_tree__equiv_type__STATE_VARIABLE_RecompInfo_0_47, &parse_tree__equiv_type__ExpandedItems0_35);
    }
#line 443 "equiv_type.m"
    {
#line 443 "equiv_type.m"
      parse_tree__equiv_type__replace_in_pred_type_23_p_0(parse_tree__equiv_type__MaybeRecord_13, parse_tree__equiv_type__PredName_21, parse_tree__equiv_type__PredOrFunc_22, parse_tree__equiv_type__Context_33, parse_tree__equiv_type__TypeEqvMap_14, parse_tree__equiv_type__InstEqvMap_15, parse_tree__equiv_type__ClassContext0_32, &parse_tree__equiv_type__ClassContext_36, parse_tree__equiv_type__TypesAndModes0_23, &parse_tree__equiv_type__TypesAndModes_37, parse_tree__equiv_type__TypeVarSet0_28, &parse_tree__equiv_type__TypeVarSet_38, parse_tree__equiv_type__MaybeWithType0_24, &parse_tree__equiv_type__MaybeWithType_39, parse_tree__equiv_type__MaybeWithInst0_25, &parse_tree__equiv_type__MaybeWithInst_40, parse_tree__equiv_type__MaybeDetism0_26, &parse_tree__equiv_type__MaybeDetism_41, parse_tree__equiv_type__ExpandedItems0_35, &parse_tree__equiv_type__ExpandedItems_42, parse_tree__equiv_type__STATE_VARIABLE_UsedModules_0_49, parse_tree__equiv_type__STATE_VARIABLE_UsedModules_50, parse_tree__equiv_type__Specs_20);
    }
#line 449 "equiv_type.m"
    {
#line 449 "equiv_type.m"
      parse_tree__equiv_type__ItemType_43 = recompilation__pred_or_func_to_item_type_1_f_0(parse_tree__equiv_type__PredOrFunc_22);
    }
#line 450 "equiv_type.m"
    {
#line 450 "equiv_type.m"
      mercury__list__length_2_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_type_and_mode_0, parse_tree__equiv_type__TypesAndModes_37, &parse_tree__equiv_type__Arity_44);
    }
#line 451 "equiv_type.m"
    {
#line 451 "equiv_type.m"
      parse_tree__prog_util__adjust_func_arity_3_p_1(parse_tree__equiv_type__PredOrFunc_22, &parse_tree__equiv_type__OrigArity_45, parse_tree__equiv_type__Arity_44);
    }
#line 452 "equiv_type.m"
    {
#line 452 "equiv_type.m"
      parse_tree__equiv_type__V_52_52 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 452 "equiv_type.m"
      MR_hl_field(MR_mktag(0), parse_tree__equiv_type__V_52_52, 0) = ((MR_Box) (parse_tree__equiv_type__PredName_21));
#line 452 "equiv_type.m"
      MR_hl_field(MR_mktag(0), parse_tree__equiv_type__V_52_52, 1) = ((MR_Box) (parse_tree__equiv_type__OrigArity_45));
#line 452 "equiv_type.m"
    }
#line 452 "equiv_type.m"
    {
#line 452 "equiv_type.m"
      parse_tree__equiv_type__ItemId_46 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 452 "equiv_type.m"
      MR_hl_field(MR_mktag(0), parse_tree__equiv_type__ItemId_46, 0) = ((MR_Box) (parse_tree__equiv_type__ItemType_43));
#line 452 "equiv_type.m"
      MR_hl_field(MR_mktag(0), parse_tree__equiv_type__ItemId_46, 1) = ((MR_Box) (parse_tree__equiv_type__V_52_52));
#line 452 "equiv_type.m"
    }
#line 453 "equiv_type.m"
    {
#line 453 "equiv_type.m"
      recompilation__finish_recording_expanded_items_4_p_0(parse_tree__equiv_type__ItemId_46, parse_tree__equiv_type__ExpandedItems_42, parse_tree__equiv_type__STATE_VARIABLE_RecompInfo_0_47, parse_tree__equiv_type__STATE_VARIABLE_RecompInfo_48);
    }
#line 454 "equiv_type.m"
    {
#line 454 "equiv_type.m"
      MR_Word base;
#line 454 "equiv_type.m"
      base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 14 * sizeof(MR_Word)), NULL, NULL);
#line 454 "equiv_type.m"
      *parse_tree__equiv_type__Info_17 = base;
#line 454 "equiv_type.m"
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (parse_tree__equiv_type__PredName_21));
#line 454 "equiv_type.m"
      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (parse_tree__equiv_type__PredOrFunc_22));
#line 454 "equiv_type.m"
      MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (parse_tree__equiv_type__TypesAndModes_37));
#line 454 "equiv_type.m"
      MR_hl_field(MR_mktag(0), base, 3) = ((MR_Box) (parse_tree__equiv_type__MaybeWithType_39));
#line 454 "equiv_type.m"
      MR_hl_field(MR_mktag(0), base, 4) = ((MR_Box) (parse_tree__equiv_type__MaybeWithInst_40));
#line 454 "equiv_type.m"
      MR_hl_field(MR_mktag(0), base, 5) = ((MR_Box) (parse_tree__equiv_type__MaybeDetism_41));
#line 454 "equiv_type.m"
      MR_hl_field(MR_mktag(0), base, 6) = ((MR_Box) (parse_tree__equiv_type__Origin_27));
#line 454 "equiv_type.m"
      MR_hl_field(MR_mktag(0), base, 7) = ((MR_Box) (parse_tree__equiv_type__TypeVarSet_38));
#line 454 "equiv_type.m"
      MR_hl_field(MR_mktag(0), base, 8) = ((MR_Box) (parse_tree__equiv_type__InstVarSet_29));
#line 454 "equiv_type.m"
      MR_hl_field(MR_mktag(0), base, 9) = ((MR_Box) (parse_tree__equiv_type__ExistQVars_30));
#line 454 "equiv_type.m"
      MR_hl_field(MR_mktag(0), base, 10) = ((MR_Box) (parse_tree__equiv_type__Purity_31));
#line 454 "equiv_type.m"
      MR_hl_field(MR_mktag(0), base, 11) = ((MR_Box) (parse_tree__equiv_type__ClassContext_36));
#line 454 "equiv_type.m"
      MR_hl_field(MR_mktag(0), base, 12) = ((MR_Box) (parse_tree__equiv_type__Context_33));
#line 454 "equiv_type.m"
      MR_hl_field(MR_mktag(0), base, 13) = ((MR_Box) (parse_tree__equiv_type__SeqNum_34));
#line 454 "equiv_type.m"
    }
#line 436 "equiv_type.m"
  }
#line 429 "equiv_type.m"
}

#line 392 "equiv_type.m"
static void MR_CALL 
parse_tree__equiv_type__replace_in_type_defn_info_11_p_0(
#line 392 "equiv_type.m"
  MR_Word parse_tree__equiv_type__ModuleName_12,
#line 392 "equiv_type.m"
  MR_Word parse_tree__equiv_type__MaybeRecord_13,
#line 392 "equiv_type.m"
  MR_Word parse_tree__equiv_type__TypeEqvMap_14,
#line 392 "equiv_type.m"
  MR_Word parse_tree__equiv_type__InstEqvMap_15,
#line 392 "equiv_type.m"
  MR_Word parse_tree__equiv_type__Info0_16,
#line 392 "equiv_type.m"
  MR_Word * parse_tree__equiv_type__Info_17,
#line 392 "equiv_type.m"
  MR_Word parse_tree__equiv_type__STATE_VARIABLE_RecompInfo_0_38,
#line 392 "equiv_type.m"
  MR_Word * parse_tree__equiv_type__STATE_VARIABLE_RecompInfo_39,
#line 392 "equiv_type.m"
  MR_Word parse_tree__equiv_type__STATE_VARIABLE_UsedModules_0_40,
#line 392 "equiv_type.m"
  MR_Word * parse_tree__equiv_type__STATE_VARIABLE_UsedModules_41,
#line 392 "equiv_type.m"
  MR_Word * parse_tree__equiv_type__Specs_20)
#line 392 "equiv_type.m"
{
#line 399 "equiv_type.m"
  {
#line 399 "equiv_type.m"
    MR_bool parse_tree__equiv_type__succeeded;
#line 399 "equiv_type.m"
    MR_Word parse_tree__equiv_type__TypeInfo_70_70 = (MR_Word) &parse_tree__equiv_type_scalar_common_1[4];
#line 399 "equiv_type.m"
    MR_Word parse_tree__equiv_type__SymName_21 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__equiv_type__Info0_16, (MR_Integer) 0)));
#line 399 "equiv_type.m"
    MR_Word parse_tree__equiv_type__ArgTypeVars_22 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__equiv_type__Info0_16, (MR_Integer) 1)));
#line 399 "equiv_type.m"
    MR_Word parse_tree__equiv_type__TypeDefn0_23 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__equiv_type__Info0_16, (MR_Integer) 2)));
#line 399 "equiv_type.m"
    MR_Word parse_tree__equiv_type__VarSet0_24 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__equiv_type__Info0_16, (MR_Integer) 3)));
#line 399 "equiv_type.m"
    MR_Word parse_tree__equiv_type__Context_25 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__equiv_type__Info0_16, (MR_Integer) 4)));
#line 399 "equiv_type.m"
    MR_Integer parse_tree__equiv_type__SeqNum_26 = ((MR_Integer) (MR_hl_field(MR_mktag(0), parse_tree__equiv_type__Info0_16, (MR_Integer) 5)));
#line 399 "equiv_type.m"
    MR_Integer parse_tree__equiv_type__Arity_27;
#line 399 "equiv_type.m"
    MR_Word parse_tree__equiv_type__UsedTypeCtors0_28;
#line 399 "equiv_type.m"
    MR_Word parse_tree__equiv_type__TypeDefn_29;
#line 399 "equiv_type.m"
    MR_Word parse_tree__equiv_type__ContainsCirc_30;
#line 399 "equiv_type.m"
    MR_Word parse_tree__equiv_type__VarSet_31;
#line 399 "equiv_type.m"
    MR_Word parse_tree__equiv_type__UsedTypeCtors_32;
#line 399 "equiv_type.m"
    MR_Word parse_tree__equiv_type__ItemId_37;
#line 399 "equiv_type.m"
    MR_Word parse_tree__equiv_type__V_42_42;
#line 399 "equiv_type.m"
    MR_Word parse_tree__equiv_type__V_68_68;

#line 402 "equiv_type.m"
    {
#line 402 "equiv_type.m"
      mercury__list__length_2_p_0(parse_tree__equiv_type__TypeInfo_70_70, parse_tree__equiv_type__ArgTypeVars_22, &parse_tree__equiv_type__Arity_27);
    }
#line 403 "equiv_type.m"
    {
#line 403 "equiv_type.m"
      recompilation__maybe_start_recording_expanded_items_4_p_0(parse_tree__equiv_type__ModuleName_12, parse_tree__equiv_type__SymName_21, parse_tree__equiv_type__STATE_VARIABLE_RecompInfo_0_38, &parse_tree__equiv_type__UsedTypeCtors0_28);
    }
#line 406 "equiv_type.m"
    {
#line 406 "equiv_type.m"
      parse_tree__equiv_type__V_42_42 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 406 "equiv_type.m"
      MR_hl_field(MR_mktag(0), parse_tree__equiv_type__V_42_42, 0) = ((MR_Box) (parse_tree__equiv_type__SymName_21));
#line 406 "equiv_type.m"
      MR_hl_field(MR_mktag(0), parse_tree__equiv_type__V_42_42, 1) = ((MR_Box) (parse_tree__equiv_type__Arity_27));
#line 406 "equiv_type.m"
    }
#line 405 "equiv_type.m"
    {
#line 405 "equiv_type.m"
      parse_tree__equiv_type__replace_in_type_defn_13_p_0(parse_tree__equiv_type__MaybeRecord_13, parse_tree__equiv_type__TypeEqvMap_14, parse_tree__equiv_type__InstEqvMap_15, parse_tree__equiv_type__V_42_42, parse_tree__equiv_type__TypeDefn0_23, &parse_tree__equiv_type__TypeDefn_29, &parse_tree__equiv_type__ContainsCirc_30, parse_tree__equiv_type__VarSet0_24, &parse_tree__equiv_type__VarSet_31, parse_tree__equiv_type__UsedTypeCtors0_28, &parse_tree__equiv_type__UsedTypeCtors_32, parse_tree__equiv_type__STATE_VARIABLE_UsedModules_0_40, parse_tree__equiv_type__STATE_VARIABLE_UsedModules_41);
    }
#line 420 "equiv_type.m"
#line 420 "equiv_type.m"
    switch (parse_tree__equiv_type__ContainsCirc_30) {
#line 420 "equiv_type.m"
      default: /*NOTREACHED*/ MR_assert(0);
#line 420 "equiv_type.m"
      case (MR_Integer) 0:
#line 422 "equiv_type.m"
        *parse_tree__equiv_type__Specs_20 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 420 "equiv_type.m"
        break;
#line 420 "equiv_type.m"
      case (MR_Integer) 1:
#line 417 "equiv_type.m"
        {
#line 410 "equiv_type.m"
          MR_Word parse_tree__equiv_type__V_33_33;

#line 410 "equiv_type.m"
          parse_tree__equiv_type__succeeded = ((MR_tag((MR_Word) parse_tree__equiv_type__TypeDefn0_23)) == (MR_mktag((MR_Integer) 1)));
#line 410 "equiv_type.m"
          if (parse_tree__equiv_type__succeeded)
#line 410 "equiv_type.m"
            {
#line 410 "equiv_type.m"
              parse_tree__equiv_type__V_33_33 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__equiv_type__TypeDefn0_23, (MR_Integer) 0)));
#line 413 "equiv_type.m"
              {
#line 413 "equiv_type.m"
                MR_Word parse_tree__equiv_type__Pieces_34;
#line 413 "equiv_type.m"
                MR_Word parse_tree__equiv_type__Msg_35;
#line 413 "equiv_type.m"
                MR_Word parse_tree__equiv_type__Spec_36;
#line 413 "equiv_type.m"
                MR_Word parse_tree__equiv_type__V_46_46;
#line 413 "equiv_type.m"
                MR_Word parse_tree__equiv_type__V_47_47;
#line 413 "equiv_type.m"
                MR_Word parse_tree__equiv_type__V_48_48;
#line 413 "equiv_type.m"
                MR_Integer parse_tree__equiv_type__V_49_49;
#line 413 "equiv_type.m"
                MR_Word parse_tree__equiv_type__V_56_56;
#line 413 "equiv_type.m"
                MR_Word parse_tree__equiv_type__V_57_57;
#line 413 "equiv_type.m"
                MR_Word parse_tree__equiv_type__V_61_61;

#line 412 "equiv_type.m"
                {
#line 412 "equiv_type.m"
                  parse_tree__equiv_type__V_49_49 = mercury__list__length_1_f_0(parse_tree__equiv_type__TypeInfo_70_70, parse_tree__equiv_type__ArgTypeVars_22);
                }
#line 412 "equiv_type.m"
                {
#line 412 "equiv_type.m"
                  parse_tree__equiv_type__V_48_48 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 412 "equiv_type.m"
                  MR_hl_field(MR_mktag(0), parse_tree__equiv_type__V_48_48, 0) = ((MR_Box) (parse_tree__equiv_type__SymName_21));
#line 412 "equiv_type.m"
                  MR_hl_field(MR_mktag(0), parse_tree__equiv_type__V_48_48, 1) = ((MR_Box) (parse_tree__equiv_type__V_49_49));
#line 412 "equiv_type.m"
                }
#line 412 "equiv_type.m"
                {
#line 412 "equiv_type.m"
                  parse_tree__equiv_type__V_47_47 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 412 "equiv_type.m"
                  MR_hl_field(MR_mktag(3), parse_tree__equiv_type__V_47_47, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 8));
#line 412 "equiv_type.m"
                  MR_hl_field(MR_mktag(3), parse_tree__equiv_type__V_47_47, 1) = ((MR_Box) (parse_tree__equiv_type__V_48_48));
#line 412 "equiv_type.m"
                }
#line 412 "equiv_type.m"
                {
#line 412 "equiv_type.m"
                  parse_tree__equiv_type__V_46_46 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 412 "equiv_type.m"
                  MR_hl_field(MR_mktag(1), parse_tree__equiv_type__V_46_46, 0) = ((MR_Box) (parse_tree__equiv_type__V_47_47));
#line 412 "equiv_type.m"
                  MR_hl_field(MR_mktag(1), parse_tree__equiv_type__V_46_46, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__equiv_type_scalar_common_1[14])));
#line 412 "equiv_type.m"
                }
#line 411 "equiv_type.m"
                {
#line 411 "equiv_type.m"
                  parse_tree__equiv_type__Pieces_34 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 411 "equiv_type.m"
                  MR_hl_field(MR_mktag(1), parse_tree__equiv_type__Pieces_34, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__equiv_type_scalar_common_1[30])));
#line 411 "equiv_type.m"
                  MR_hl_field(MR_mktag(1), parse_tree__equiv_type__Pieces_34, 1) = ((MR_Box) (parse_tree__equiv_type__V_46_46));
#line 411 "equiv_type.m"
                }
#line 414 "equiv_type.m"
                {
#line 414 "equiv_type.m"
                  parse_tree__equiv_type__V_57_57 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 414 "equiv_type.m"
                  MR_hl_field(MR_mktag(0), parse_tree__equiv_type__V_57_57, 0) = ((MR_Box) (parse_tree__equiv_type__Pieces_34));
#line 414 "equiv_type.m"
                }
#line 414 "equiv_type.m"
                {
#line 414 "equiv_type.m"
                  parse_tree__equiv_type__V_56_56 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 414 "equiv_type.m"
                  MR_hl_field(MR_mktag(1), parse_tree__equiv_type__V_56_56, 0) = ((MR_Box) (parse_tree__equiv_type__V_57_57));
#line 414 "equiv_type.m"
                  MR_hl_field(MR_mktag(1), parse_tree__equiv_type__V_56_56, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 414 "equiv_type.m"
                }
#line 414 "equiv_type.m"
                {
#line 414 "equiv_type.m"
                  parse_tree__equiv_type__Msg_35 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 414 "equiv_type.m"
                  MR_hl_field(MR_mktag(0), parse_tree__equiv_type__Msg_35, 0) = ((MR_Box) (parse_tree__equiv_type__Context_25));
#line 414 "equiv_type.m"
                  MR_hl_field(MR_mktag(0), parse_tree__equiv_type__Msg_35, 1) = ((MR_Box) (parse_tree__equiv_type__V_56_56));
#line 414 "equiv_type.m"
                }
#line 415 "equiv_type.m"
                {
#line 415 "equiv_type.m"
                  parse_tree__equiv_type__V_61_61 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 415 "equiv_type.m"
                  MR_hl_field(MR_mktag(1), parse_tree__equiv_type__V_61_61, 0) = ((MR_Box) (parse_tree__equiv_type__Msg_35));
#line 415 "equiv_type.m"
                  MR_hl_field(MR_mktag(1), parse_tree__equiv_type__V_61_61, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 415 "equiv_type.m"
                }
#line 415 "equiv_type.m"
                {
#line 415 "equiv_type.m"
                  parse_tree__equiv_type__Spec_36 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 415 "equiv_type.m"
                  MR_hl_field(MR_mktag(0), parse_tree__equiv_type__Spec_36, 0) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 415 "equiv_type.m"
                  MR_hl_field(MR_mktag(0), parse_tree__equiv_type__Spec_36, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 3))));
#line 415 "equiv_type.m"
                  MR_hl_field(MR_mktag(0), parse_tree__equiv_type__Spec_36, 2) = ((MR_Box) (parse_tree__equiv_type__V_61_61));
#line 415 "equiv_type.m"
                }
#line 416 "equiv_type.m"
                {
#line 416 "equiv_type.m"
                  MR_Word base;
#line 416 "equiv_type.m"
                  base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 416 "equiv_type.m"
                  *parse_tree__equiv_type__Specs_20 = base;
#line 416 "equiv_type.m"
                  MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (parse_tree__equiv_type__Spec_36));
#line 416 "equiv_type.m"
                  MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 416 "equiv_type.m"
                }
#line 413 "equiv_type.m"
              }
#line 410 "equiv_type.m"
            }
#line 410 "equiv_type.m"
          else
#line 418 "equiv_type.m"
            {
#line 418 "equiv_type.m"
              {
#line 418 "equiv_type.m"
                mercury__require__unexpected_3_p_0((MR_String) "parse_tree.equiv_type", (MR_String) "predicate \140parse_tree.equiv_type.replace_in_type_defn_info\'/11", (MR_String) "invalid item");
#line 418 "equiv_type.m"
                return;
              }
#line 418 "equiv_type.m"
            }
#line 417 "equiv_type.m"
        }
#line 420 "equiv_type.m"
        break;
#line 420 "equiv_type.m"
    }
#line 424 "equiv_type.m"
    {
#line 424 "equiv_type.m"
      parse_tree__equiv_type__V_68_68 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 424 "equiv_type.m"
      MR_hl_field(MR_mktag(0), parse_tree__equiv_type__V_68_68, 0) = ((MR_Box) (parse_tree__equiv_type__SymName_21));
#line 424 "equiv_type.m"
      MR_hl_field(MR_mktag(0), parse_tree__equiv_type__V_68_68, 1) = ((MR_Box) (parse_tree__equiv_type__Arity_27));
#line 424 "equiv_type.m"
    }
#line 424 "equiv_type.m"
    {
#line 424 "equiv_type.m"
      parse_tree__equiv_type__ItemId_37 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 424 "equiv_type.m"
      MR_hl_field(MR_mktag(0), parse_tree__equiv_type__ItemId_37, 0) = ((MR_Box) ((MR_Integer) 1));
#line 424 "equiv_type.m"
      MR_hl_field(MR_mktag(0), parse_tree__equiv_type__ItemId_37, 1) = ((MR_Box) (parse_tree__equiv_type__V_68_68));
#line 424 "equiv_type.m"
    }
#line 425 "equiv_type.m"
    {
#line 425 "equiv_type.m"
      recompilation__finish_recording_expanded_items_4_p_0(parse_tree__equiv_type__ItemId_37, parse_tree__equiv_type__UsedTypeCtors_32, parse_tree__equiv_type__STATE_VARIABLE_RecompInfo_0_38, parse_tree__equiv_type__STATE_VARIABLE_RecompInfo_39);
    }
#line 426 "equiv_type.m"
    {
#line 426 "equiv_type.m"
      MR_Word base;
#line 426 "equiv_type.m"
      base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 6 * sizeof(MR_Word)), NULL, NULL);
#line 426 "equiv_type.m"
      *parse_tree__equiv_type__Info_17 = base;
#line 426 "equiv_type.m"
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (parse_tree__equiv_type__SymName_21));
#line 426 "equiv_type.m"
      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (parse_tree__equiv_type__ArgTypeVars_22));
#line 426 "equiv_type.m"
      MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (parse_tree__equiv_type__TypeDefn_29));
#line 426 "equiv_type.m"
      MR_hl_field(MR_mktag(0), base, 3) = ((MR_Box) (parse_tree__equiv_type__VarSet_31));
#line 426 "equiv_type.m"
      MR_hl_field(MR_mktag(0), base, 4) = ((MR_Box) (parse_tree__equiv_type__Context_25));
#line 426 "equiv_type.m"
      MR_hl_field(MR_mktag(0), base, 5) = ((MR_Box) (parse_tree__equiv_type__SeqNum_26));
#line 426 "equiv_type.m"
    }
#line 399 "equiv_type.m"
  }
#line 392 "equiv_type.m"
}

#line 325 "equiv_type.m"
static void MR_CALL 
parse_tree__equiv_type__replace_in_item_11_p_0(
#line 325 "equiv_type.m"
  MR_Word parse_tree__equiv_type__ModuleName_12,
#line 325 "equiv_type.m"
  MR_Word parse_tree__equiv_type__TypeEqvMap_13,
#line 325 "equiv_type.m"
  MR_Word parse_tree__equiv_type__InstEqvMap_14,
#line 325 "equiv_type.m"
  MR_Word parse_tree__equiv_type__MaybeRecord_15,
#line 325 "equiv_type.m"
  MR_Word parse_tree__equiv_type__Item0_16,
#line 325 "equiv_type.m"
  MR_Word * parse_tree__equiv_type__Item_17,
#line 325 "equiv_type.m"
  MR_Word parse_tree__equiv_type__STATE_VARIABLE_RecompInfo_0_42,
#line 325 "equiv_type.m"
  MR_Word * parse_tree__equiv_type__STATE_VARIABLE_RecompInfo_43,
#line 325 "equiv_type.m"
  MR_Word parse_tree__equiv_type__STATE_VARIABLE_UsedModules_0_44,
#line 325 "equiv_type.m"
  MR_Word * parse_tree__equiv_type__STATE_VARIABLE_UsedModules_45,
#line 325 "equiv_type.m"
  MR_Word * parse_tree__equiv_type__Specs_20)
#line 325 "equiv_type.m"
{
#line 333 "equiv_type.m"
  {
#line 333 "equiv_type.m"
    MR_bool parse_tree__equiv_type__succeeded;

#line 333 "equiv_type.m"
#line 333 "equiv_type.m"
    switch (MR_tag((MR_Word) parse_tree__equiv_type__Item0_16)) {
#line 333 "equiv_type.m"
      default: /*NOTREACHED*/ MR_assert(0);
#line 333 "equiv_type.m"
      case (MR_Integer) 0:
#line 333 "equiv_type.m"
      case (MR_Integer) 2:
#line 387 "equiv_type.m"
        {
#line 388 "equiv_type.m"
          *parse_tree__equiv_type__Item_17 = parse_tree__equiv_type__Item0_16;
#line 389 "equiv_type.m"
          *parse_tree__equiv_type__Specs_20 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 387 "equiv_type.m"
          *parse_tree__equiv_type__STATE_VARIABLE_RecompInfo_43 = parse_tree__equiv_type__STATE_VARIABLE_RecompInfo_0_42;
#line 387 "equiv_type.m"
          *parse_tree__equiv_type__STATE_VARIABLE_UsedModules_45 = parse_tree__equiv_type__STATE_VARIABLE_UsedModules_0_44;
#line 387 "equiv_type.m"
        }
#line 333 "equiv_type.m"
        break;
#line 333 "equiv_type.m"
      case (MR_Integer) 1:
#line 333 "equiv_type.m"
        {
#line 333 "equiv_type.m"
          MR_Word parse_tree__equiv_type__ItemTypeDefn0_21 = (MR_Word) MR_body(((MR_Word) parse_tree__equiv_type__Item0_16), (MR_Integer) 1);
#line 333 "equiv_type.m"
          MR_Word parse_tree__equiv_type__ItemTypeDefn_22;

#line 334 "equiv_type.m"
          {
#line 334 "equiv_type.m"
            parse_tree__equiv_type__replace_in_type_defn_info_11_p_0(parse_tree__equiv_type__ModuleName_12, parse_tree__equiv_type__MaybeRecord_15, parse_tree__equiv_type__TypeEqvMap_13, parse_tree__equiv_type__InstEqvMap_14, parse_tree__equiv_type__ItemTypeDefn0_21, &parse_tree__equiv_type__ItemTypeDefn_22, parse_tree__equiv_type__STATE_VARIABLE_RecompInfo_0_42, parse_tree__equiv_type__STATE_VARIABLE_RecompInfo_43, parse_tree__equiv_type__STATE_VARIABLE_UsedModules_0_44, parse_tree__equiv_type__STATE_VARIABLE_UsedModules_45, parse_tree__equiv_type__Specs_20);
          }
#line 337 "equiv_type.m"
          *parse_tree__equiv_type__Item_17 = (MR_Word) MR_mkword(MR_mktag(1), (MR_Word) parse_tree__equiv_type__ItemTypeDefn_22);
#line 333 "equiv_type.m"
        }
#line 333 "equiv_type.m"
        break;
#line 333 "equiv_type.m"
      case (MR_Integer) 3:
#line 333 "equiv_type.m"
#line 333 "equiv_type.m"
        switch (((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__equiv_type__Item0_16, (MR_Integer) 0)))) {
#line 333 "equiv_type.m"
          default: /*NOTREACHED*/ MR_assert(0);
#line 333 "equiv_type.m"
          case (MR_Integer) 0:
#line 375 "equiv_type.m"
            {
#line 378 "equiv_type.m"
              *parse_tree__equiv_type__Item_17 = parse_tree__equiv_type__Item0_16;
#line 379 "equiv_type.m"
              *parse_tree__equiv_type__Specs_20 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 375 "equiv_type.m"
              *parse_tree__equiv_type__STATE_VARIABLE_RecompInfo_43 = parse_tree__equiv_type__STATE_VARIABLE_RecompInfo_0_42;
#line 375 "equiv_type.m"
              *parse_tree__equiv_type__STATE_VARIABLE_UsedModules_45 = parse_tree__equiv_type__STATE_VARIABLE_UsedModules_0_44;
#line 375 "equiv_type.m"
            }
#line 333 "equiv_type.m"
            break;
#line 333 "equiv_type.m"
          case (MR_Integer) 1:
#line 339 "equiv_type.m"
            {
#line 339 "equiv_type.m"
              MR_Word parse_tree__equiv_type__ItemPredDecl0_23 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__equiv_type__Item0_16, (MR_Integer) 1)));
#line 339 "equiv_type.m"
              MR_Word parse_tree__equiv_type__ItemPredDecl_24;

#line 340 "equiv_type.m"
              {
#line 340 "equiv_type.m"
                parse_tree__equiv_type__replace_in_pred_decl_info_11_p_0(parse_tree__equiv_type__ModuleName_12, parse_tree__equiv_type__MaybeRecord_15, parse_tree__equiv_type__TypeEqvMap_13, parse_tree__equiv_type__InstEqvMap_14, parse_tree__equiv_type__ItemPredDecl0_23, &parse_tree__equiv_type__ItemPredDecl_24, parse_tree__equiv_type__STATE_VARIABLE_RecompInfo_0_42, parse_tree__equiv_type__STATE_VARIABLE_RecompInfo_43, parse_tree__equiv_type__STATE_VARIABLE_UsedModules_0_44, parse_tree__equiv_type__STATE_VARIABLE_UsedModules_45, parse_tree__equiv_type__Specs_20);
              }
#line 343 "equiv_type.m"
              {
#line 343 "equiv_type.m"
                MR_Word base;
#line 343 "equiv_type.m"
                base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 343 "equiv_type.m"
                *parse_tree__equiv_type__Item_17 = base;
#line 343 "equiv_type.m"
                MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 343 "equiv_type.m"
                MR_hl_field(MR_mktag(3), base, 1) = ((MR_Box) (parse_tree__equiv_type__ItemPredDecl_24));
#line 343 "equiv_type.m"
              }
#line 339 "equiv_type.m"
            }
#line 333 "equiv_type.m"
            break;
#line 333 "equiv_type.m"
          case (MR_Integer) 2:
#line 345 "equiv_type.m"
            {
#line 345 "equiv_type.m"
              MR_Word parse_tree__equiv_type__ItemModeDecl0_25 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__equiv_type__Item0_16, (MR_Integer) 1)));
#line 345 "equiv_type.m"
              MR_Word parse_tree__equiv_type__ItemModeDecl_26;

#line 346 "equiv_type.m"
              {
#line 346 "equiv_type.m"
                parse_tree__equiv_type__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_114_101_112_108_97_99_101_95_105_110_95_109_111_100_101_95_100_101_99_108_95_105_110_102_111_95_95_91_50_44_32_51_93_95_48_11_p_0(parse_tree__equiv_type__ModuleName_12, parse_tree__equiv_type__InstEqvMap_14, parse_tree__equiv_type__ItemModeDecl0_25, &parse_tree__equiv_type__ItemModeDecl_26, parse_tree__equiv_type__STATE_VARIABLE_RecompInfo_0_42, parse_tree__equiv_type__STATE_VARIABLE_RecompInfo_43, parse_tree__equiv_type__STATE_VARIABLE_UsedModules_0_44, parse_tree__equiv_type__STATE_VARIABLE_UsedModules_45, parse_tree__equiv_type__Specs_20);
              }
#line 349 "equiv_type.m"
              {
#line 349 "equiv_type.m"
                MR_Word base;
#line 349 "equiv_type.m"
                base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 349 "equiv_type.m"
                *parse_tree__equiv_type__Item_17 = base;
#line 349 "equiv_type.m"
                MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
#line 349 "equiv_type.m"
                MR_hl_field(MR_mktag(3), base, 1) = ((MR_Box) (parse_tree__equiv_type__ItemModeDecl_26));
#line 349 "equiv_type.m"
              }
#line 345 "equiv_type.m"
            }
#line 333 "equiv_type.m"
            break;
#line 333 "equiv_type.m"
          case (MR_Integer) 3:
#line 351 "equiv_type.m"
            {
#line 351 "equiv_type.m"
              MR_Word parse_tree__equiv_type__ItemPragma0_27 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__equiv_type__Item0_16, (MR_Integer) 1)));
#line 351 "equiv_type.m"
              MR_Word parse_tree__equiv_type__ItemPragma_28;

#line 352 "equiv_type.m"
              {
#line 352 "equiv_type.m"
                parse_tree__equiv_type__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_114_101_112_108_97_99_101_95_105_110_95_112_114_97_103_109_97_95_105_110_102_111_95_95_91_52_93_95_48_11_p_0(parse_tree__equiv_type__ModuleName_12, parse_tree__equiv_type__MaybeRecord_15, parse_tree__equiv_type__TypeEqvMap_13, parse_tree__equiv_type__ItemPragma0_27, &parse_tree__equiv_type__ItemPragma_28, parse_tree__equiv_type__STATE_VARIABLE_RecompInfo_0_42, parse_tree__equiv_type__STATE_VARIABLE_RecompInfo_43, parse_tree__equiv_type__STATE_VARIABLE_UsedModules_0_44, parse_tree__equiv_type__STATE_VARIABLE_UsedModules_45, parse_tree__equiv_type__Specs_20);
              }
#line 355 "equiv_type.m"
              {
#line 355 "equiv_type.m"
                MR_Word base;
#line 355 "equiv_type.m"
                base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 355 "equiv_type.m"
                *parse_tree__equiv_type__Item_17 = base;
#line 355 "equiv_type.m"
                MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 3));
#line 355 "equiv_type.m"
                MR_hl_field(MR_mktag(3), base, 1) = ((MR_Box) (parse_tree__equiv_type__ItemPragma_28));
#line 355 "equiv_type.m"
              }
#line 351 "equiv_type.m"
            }
#line 333 "equiv_type.m"
            break;
#line 333 "equiv_type.m"
          case (MR_Integer) 4:
#line 333 "equiv_type.m"
          case (MR_Integer) 7:
#line 333 "equiv_type.m"
          case (MR_Integer) 8:
#line 333 "equiv_type.m"
          case (MR_Integer) 10:
#line 387 "equiv_type.m"
            {
#line 388 "equiv_type.m"
              *parse_tree__equiv_type__Item_17 = parse_tree__equiv_type__Item0_16;
#line 389 "equiv_type.m"
              *parse_tree__equiv_type__Specs_20 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 387 "equiv_type.m"
              *parse_tree__equiv_type__STATE_VARIABLE_RecompInfo_43 = parse_tree__equiv_type__STATE_VARIABLE_RecompInfo_0_42;
#line 387 "equiv_type.m"
              *parse_tree__equiv_type__STATE_VARIABLE_UsedModules_45 = parse_tree__equiv_type__STATE_VARIABLE_UsedModules_0_44;
#line 387 "equiv_type.m"
            }
#line 333 "equiv_type.m"
            break;
#line 333 "equiv_type.m"
          case (MR_Integer) 5:
#line 357 "equiv_type.m"
            {
#line 357 "equiv_type.m"
              MR_Word parse_tree__equiv_type__ItemTypeClass0_29 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__equiv_type__Item0_16, (MR_Integer) 1)));
#line 357 "equiv_type.m"
              MR_Word parse_tree__equiv_type__ItemTypeClass_30;

#line 358 "equiv_type.m"
              {
#line 358 "equiv_type.m"
                parse_tree__equiv_type__replace_in_typeclass_info_11_p_0(parse_tree__equiv_type__ModuleName_12, parse_tree__equiv_type__MaybeRecord_15, parse_tree__equiv_type__TypeEqvMap_13, parse_tree__equiv_type__InstEqvMap_14, parse_tree__equiv_type__ItemTypeClass0_29, &parse_tree__equiv_type__ItemTypeClass_30, parse_tree__equiv_type__STATE_VARIABLE_RecompInfo_0_42, parse_tree__equiv_type__STATE_VARIABLE_RecompInfo_43, parse_tree__equiv_type__STATE_VARIABLE_UsedModules_0_44, parse_tree__equiv_type__STATE_VARIABLE_UsedModules_45, parse_tree__equiv_type__Specs_20);
              }
#line 361 "equiv_type.m"
              {
#line 361 "equiv_type.m"
                MR_Word base;
#line 361 "equiv_type.m"
                base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 361 "equiv_type.m"
                *parse_tree__equiv_type__Item_17 = base;
#line 361 "equiv_type.m"
                MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 5));
#line 361 "equiv_type.m"
                MR_hl_field(MR_mktag(3), base, 1) = ((MR_Box) (parse_tree__equiv_type__ItemTypeClass_30));
#line 361 "equiv_type.m"
              }
#line 357 "equiv_type.m"
            }
#line 333 "equiv_type.m"
            break;
#line 333 "equiv_type.m"
          case (MR_Integer) 6:
#line 363 "equiv_type.m"
            {
#line 363 "equiv_type.m"
              MR_Word parse_tree__equiv_type__ItemInstance0_31 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__equiv_type__Item0_16, (MR_Integer) 1)));
#line 363 "equiv_type.m"
              MR_Word parse_tree__equiv_type__ItemInstance_32;

#line 364 "equiv_type.m"
              {
#line 364 "equiv_type.m"
                parse_tree__equiv_type__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_114_101_112_108_97_99_101_95_105_110_95_105_110_115_116_97_110_99_101_95_105_110_102_111_95_95_91_52_93_95_48_11_p_0(parse_tree__equiv_type__ModuleName_12, parse_tree__equiv_type__MaybeRecord_15, parse_tree__equiv_type__TypeEqvMap_13, parse_tree__equiv_type__ItemInstance0_31, &parse_tree__equiv_type__ItemInstance_32, parse_tree__equiv_type__STATE_VARIABLE_RecompInfo_0_42, parse_tree__equiv_type__STATE_VARIABLE_RecompInfo_43, parse_tree__equiv_type__STATE_VARIABLE_UsedModules_0_44, parse_tree__equiv_type__STATE_VARIABLE_UsedModules_45, parse_tree__equiv_type__Specs_20);
              }
#line 367 "equiv_type.m"
              {
#line 367 "equiv_type.m"
                MR_Word base;
#line 367 "equiv_type.m"
                base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 367 "equiv_type.m"
                *parse_tree__equiv_type__Item_17 = base;
#line 367 "equiv_type.m"
                MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 6));
#line 367 "equiv_type.m"
                MR_hl_field(MR_mktag(3), base, 1) = ((MR_Box) (parse_tree__equiv_type__ItemInstance_32));
#line 367 "equiv_type.m"
              }
#line 363 "equiv_type.m"
            }
#line 333 "equiv_type.m"
            break;
#line 333 "equiv_type.m"
          case (MR_Integer) 9:
#line 369 "equiv_type.m"
            {
#line 369 "equiv_type.m"
              MR_Word parse_tree__equiv_type__ItemMutable0_33 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__equiv_type__Item0_16, (MR_Integer) 1)));
#line 369 "equiv_type.m"
              MR_Word parse_tree__equiv_type__ItemMutable_34;
#line 369 "equiv_type.m"
              MR_String parse_tree__equiv_type__MutName_72;
#line 369 "equiv_type.m"
              MR_Word parse_tree__equiv_type__QualName_73;
#line 369 "equiv_type.m"
              MR_Word parse_tree__equiv_type__ExpandedItems0_74;
#line 369 "equiv_type.m"
              MR_Word parse_tree__equiv_type__ExpandedItems_75;
#line 369 "equiv_type.m"
              MR_Word parse_tree__equiv_type__ItemId_76;
#line 369 "equiv_type.m"
              MR_Word parse_tree__equiv_type__V_79_79;
#line 672 "equiv_type.m"
              MR_Word parse_tree__equiv_type__V_82_82;
#line 672 "equiv_type.m"
              MR_Word parse_tree__equiv_type__V_83_83;
#line 672 "equiv_type.m"
              MR_Word parse_tree__equiv_type__V_84_84;
#line 672 "equiv_type.m"
              MR_Word parse_tree__equiv_type__V_85_85;
#line 672 "equiv_type.m"
              MR_Word parse_tree__equiv_type__V_86_86;
#line 672 "equiv_type.m"
              MR_Word parse_tree__equiv_type__V_87_87;
#line 672 "equiv_type.m"
              MR_Integer parse_tree__equiv_type__V_88_88;

#line 671 "equiv_type.m"
              *parse_tree__equiv_type__Specs_20 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 672 "equiv_type.m"
              parse_tree__equiv_type__MutName_72 = ((MR_String) (MR_hl_field(MR_mktag(0), parse_tree__equiv_type__ItemMutable0_33, (MR_Integer) 0)));
#line 672 "equiv_type.m"
              parse_tree__equiv_type__V_82_82 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__equiv_type__ItemMutable0_33, (MR_Integer) 1)));
#line 672 "equiv_type.m"
              parse_tree__equiv_type__V_83_83 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__equiv_type__ItemMutable0_33, (MR_Integer) 2)));
#line 672 "equiv_type.m"
              parse_tree__equiv_type__V_84_84 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__equiv_type__ItemMutable0_33, (MR_Integer) 3)));
#line 672 "equiv_type.m"
              parse_tree__equiv_type__V_85_85 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__equiv_type__ItemMutable0_33, (MR_Integer) 4)));
#line 672 "equiv_type.m"
              parse_tree__equiv_type__V_86_86 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__equiv_type__ItemMutable0_33, (MR_Integer) 5)));
#line 672 "equiv_type.m"
              parse_tree__equiv_type__V_87_87 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__equiv_type__ItemMutable0_33, (MR_Integer) 6)));
#line 672 "equiv_type.m"
              parse_tree__equiv_type__V_88_88 = ((MR_Integer) (MR_hl_field(MR_mktag(0), parse_tree__equiv_type__ItemMutable0_33, (MR_Integer) 7)));
#line 673 "equiv_type.m"
              {
#line 673 "equiv_type.m"
                parse_tree__equiv_type__QualName_73 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 673 "equiv_type.m"
                MR_hl_field(MR_mktag(1), parse_tree__equiv_type__QualName_73, 0) = ((MR_Box) (parse_tree__equiv_type__ModuleName_12));
#line 673 "equiv_type.m"
                MR_hl_field(MR_mktag(1), parse_tree__equiv_type__QualName_73, 1) = ((MR_Box) (parse_tree__equiv_type__MutName_72));
#line 673 "equiv_type.m"
              }
#line 674 "equiv_type.m"
              {
#line 674 "equiv_type.m"
                recompilation__maybe_start_recording_expanded_items_4_p_0(parse_tree__equiv_type__ModuleName_12, parse_tree__equiv_type__QualName_73, parse_tree__equiv_type__STATE_VARIABLE_RecompInfo_0_42, &parse_tree__equiv_type__ExpandedItems0_74);
              }
#line 676 "equiv_type.m"
              {
#line 676 "equiv_type.m"
                parse_tree__equiv_type__replace_in_mutable_defn_9_p_0(parse_tree__equiv_type__MaybeRecord_15, parse_tree__equiv_type__TypeEqvMap_13, parse_tree__equiv_type__InstEqvMap_14, parse_tree__equiv_type__ItemMutable0_33, &parse_tree__equiv_type__ItemMutable_34, parse_tree__equiv_type__ExpandedItems0_74, &parse_tree__equiv_type__ExpandedItems_75, parse_tree__equiv_type__STATE_VARIABLE_UsedModules_0_44, parse_tree__equiv_type__STATE_VARIABLE_UsedModules_45);
              }
#line 678 "equiv_type.m"
              {
#line 678 "equiv_type.m"
                parse_tree__equiv_type__V_79_79 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 678 "equiv_type.m"
                MR_hl_field(MR_mktag(0), parse_tree__equiv_type__V_79_79, 0) = ((MR_Box) (parse_tree__equiv_type__QualName_73));
#line 678 "equiv_type.m"
                MR_hl_field(MR_mktag(0), parse_tree__equiv_type__V_79_79, 1) = ((MR_Box) ((MR_Integer) 0));
#line 678 "equiv_type.m"
              }
#line 678 "equiv_type.m"
              {
#line 678 "equiv_type.m"
                parse_tree__equiv_type__ItemId_76 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 678 "equiv_type.m"
                MR_hl_field(MR_mktag(0), parse_tree__equiv_type__ItemId_76, 0) = ((MR_Box) ((MR_Integer) 8));
#line 678 "equiv_type.m"
                MR_hl_field(MR_mktag(0), parse_tree__equiv_type__ItemId_76, 1) = ((MR_Box) (parse_tree__equiv_type__V_79_79));
#line 678 "equiv_type.m"
              }
#line 679 "equiv_type.m"
              {
#line 679 "equiv_type.m"
                recompilation__finish_recording_expanded_items_4_p_0(parse_tree__equiv_type__ItemId_76, parse_tree__equiv_type__ExpandedItems_75, parse_tree__equiv_type__STATE_VARIABLE_RecompInfo_0_42, parse_tree__equiv_type__STATE_VARIABLE_RecompInfo_43);
              }
#line 373 "equiv_type.m"
              {
#line 373 "equiv_type.m"
                MR_Word base;
#line 373 "equiv_type.m"
                base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 373 "equiv_type.m"
                *parse_tree__equiv_type__Item_17 = base;
#line 373 "equiv_type.m"
                MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 9));
#line 373 "equiv_type.m"
                MR_hl_field(MR_mktag(3), base, 1) = ((MR_Box) (parse_tree__equiv_type__ItemMutable_34));
#line 373 "equiv_type.m"
              }
#line 369 "equiv_type.m"
            }
#line 333 "equiv_type.m"
            break;
#line 333 "equiv_type.m"
        }
#line 333 "equiv_type.m"
        break;
#line 333 "equiv_type.m"
    }
#line 333 "equiv_type.m"
  }
#line 325 "equiv_type.m"
}

#line 301 "equiv_type.m"
static void MR_CALL 
parse_tree__equiv_type__replace_in_items_13_p_0(
#line 301 "equiv_type.m"
  MR_Word parse_tree__equiv_type__ModuleName_1,
#line 301 "equiv_type.m"
  MR_Word parse_tree__equiv_type__TypeEqvMap_2,
#line 301 "equiv_type.m"
  MR_Word parse_tree__equiv_type__InstEqvMap_3,
#line 301 "equiv_type.m"
  MR_Word parse_tree__equiv_type__MaybeRecord_4,
#line 301 "equiv_type.m"
  MR_Word parse_tree__equiv_type__HeadVar__5_5,
#line 301 "equiv_type.m"
  MR_Word parse_tree__equiv_type__STATE_VARIABLE_RevReplItems_0_6,
#line 301 "equiv_type.m"
  MR_Word * parse_tree__equiv_type__STATE_VARIABLE_RevReplItems_7,
#line 301 "equiv_type.m"
  MR_Word parse_tree__equiv_type__STATE_VARIABLE_RecompInfo_0_8,
#line 301 "equiv_type.m"
  MR_Word * parse_tree__equiv_type__STATE_VARIABLE_RecompInfo_9,
#line 301 "equiv_type.m"
  MR_Word parse_tree__equiv_type__STATE_VARIABLE_UsedModules_0_10,
#line 301 "equiv_type.m"
  MR_Word * parse_tree__equiv_type__STATE_VARIABLE_UsedModules_11,
#line 301 "equiv_type.m"
  MR_Word parse_tree__equiv_type__STATE_VARIABLE_Specs_0_12,
#line 301 "equiv_type.m"
  MR_Word * parse_tree__equiv_type__STATE_VARIABLE_Specs_13)
#line 301 "equiv_type.m"
{
#line 308 "equiv_type.m"
  while (MR_TRUE)
#line 308 "equiv_type.m"
    {
#line 308 "equiv_type.m"
      /* tailcall optimized into a loop */
#line 308 "equiv_type.m"
      {
#line 308 "equiv_type.m"
        MR_bool parse_tree__equiv_type__succeeded;

#line 308 "equiv_type.m"
        if ((parse_tree__equiv_type__HeadVar__5_5 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 308 "equiv_type.m"
          {
#line 309 "equiv_type.m"
            *parse_tree__equiv_type__STATE_VARIABLE_Specs_13 = parse_tree__equiv_type__STATE_VARIABLE_Specs_0_12;
#line 309 "equiv_type.m"
            *parse_tree__equiv_type__STATE_VARIABLE_UsedModules_11 = parse_tree__equiv_type__STATE_VARIABLE_UsedModules_0_10;
#line 309 "equiv_type.m"
            *parse_tree__equiv_type__STATE_VARIABLE_RecompInfo_9 = parse_tree__equiv_type__STATE_VARIABLE_RecompInfo_0_8;
#line 309 "equiv_type.m"
            *parse_tree__equiv_type__STATE_VARIABLE_RevReplItems_7 = parse_tree__equiv_type__STATE_VARIABLE_RevReplItems_0_6;
#line 308 "equiv_type.m"
          }
#line 308 "equiv_type.m"
        else
#line 311 "equiv_type.m"
          {
#line 311 "equiv_type.m"
            MR_Word parse_tree__equiv_type__Item0_34 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__equiv_type__HeadVar__5_5, (MR_Integer) 0)));
#line 311 "equiv_type.m"
            MR_Word parse_tree__equiv_type__Items0_35 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__equiv_type__HeadVar__5_5, (MR_Integer) 1)));
#line 311 "equiv_type.m"
            MR_Word parse_tree__equiv_type__Item_40;
#line 311 "equiv_type.m"
            MR_Word parse_tree__equiv_type__ItemSpecs_41;
#line 311 "equiv_type.m"
            MR_Word parse_tree__equiv_type__STATE_VARIABLE_RecompInfo_52_52;
#line 311 "equiv_type.m"
            MR_Word parse_tree__equiv_type__STATE_VARIABLE_UsedModules_53_53;
#line 311 "equiv_type.m"
            MR_Word parse_tree__equiv_type__STATE_VARIABLE_Specs_54_54;
#line 311 "equiv_type.m"
            MR_Word parse_tree__equiv_type__STATE_VARIABLE_RevReplItems_55_55;

#line 312 "equiv_type.m"
            {
#line 312 "equiv_type.m"
              parse_tree__equiv_type__replace_in_item_11_p_0(parse_tree__equiv_type__ModuleName_1, parse_tree__equiv_type__TypeEqvMap_2, parse_tree__equiv_type__InstEqvMap_3, parse_tree__equiv_type__MaybeRecord_4, parse_tree__equiv_type__Item0_34, &parse_tree__equiv_type__Item_40, parse_tree__equiv_type__STATE_VARIABLE_RecompInfo_0_8, &parse_tree__equiv_type__STATE_VARIABLE_RecompInfo_52_52, parse_tree__equiv_type__STATE_VARIABLE_UsedModules_0_10, &parse_tree__equiv_type__STATE_VARIABLE_UsedModules_53_53, &parse_tree__equiv_type__ItemSpecs_41);
            }
#line 318 "equiv_type.m"
            if ((parse_tree__equiv_type__ItemSpecs_41 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 316 "equiv_type.m"
              {
#line 317 "equiv_type.m"
                {
#line 317 "equiv_type.m"
                  parse_tree__equiv_type__STATE_VARIABLE_RevReplItems_55_55 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 317 "equiv_type.m"
                  MR_hl_field(MR_mktag(1), parse_tree__equiv_type__STATE_VARIABLE_RevReplItems_55_55, 0) = ((MR_Box) (parse_tree__equiv_type__Item_40));
#line 317 "equiv_type.m"
                  MR_hl_field(MR_mktag(1), parse_tree__equiv_type__STATE_VARIABLE_RevReplItems_55_55, 1) = ((MR_Box) (parse_tree__equiv_type__STATE_VARIABLE_RevReplItems_0_6));
#line 317 "equiv_type.m"
                }
#line 316 "equiv_type.m"
                parse_tree__equiv_type__STATE_VARIABLE_Specs_54_54 = parse_tree__equiv_type__STATE_VARIABLE_Specs_0_12;
#line 316 "equiv_type.m"
              }
#line 318 "equiv_type.m"
            else
#line 319 "equiv_type.m"
              {
#line 320 "equiv_type.m"
                {
#line 320 "equiv_type.m"
                  parse_tree__equiv_type__STATE_VARIABLE_Specs_54_54 = mercury__list__f_43_43_2_f_0((MR_Word) &parse_tree__error_util__parse_tree__error_util__type_ctor_info_error_spec_0, parse_tree__equiv_type__ItemSpecs_41, parse_tree__equiv_type__STATE_VARIABLE_Specs_0_12);
                }
#line 319 "equiv_type.m"
                parse_tree__equiv_type__STATE_VARIABLE_RevReplItems_55_55 = parse_tree__equiv_type__STATE_VARIABLE_RevReplItems_0_6;
#line 319 "equiv_type.m"
              }
#line 322 "equiv_type.m"
            /* direct tailcall eliminated */
#line 322 "equiv_type.m"
            {
#line 322 "equiv_type.m"
              MR_Word parse_tree__equiv_type__HeadVar__5__tmp_copy_5 = parse_tree__equiv_type__Items0_35;
#line 322 "equiv_type.m"
              MR_Word parse_tree__equiv_type__STATE_VARIABLE_RevReplItems_0__tmp_copy_6 = parse_tree__equiv_type__STATE_VARIABLE_RevReplItems_55_55;
#line 322 "equiv_type.m"
              MR_Word parse_tree__equiv_type__STATE_VARIABLE_RecompInfo_0__tmp_copy_8 = parse_tree__equiv_type__STATE_VARIABLE_RecompInfo_52_52;
#line 322 "equiv_type.m"
              MR_Word parse_tree__equiv_type__STATE_VARIABLE_UsedModules_0__tmp_copy_10 = parse_tree__equiv_type__STATE_VARIABLE_UsedModules_53_53;
#line 322 "equiv_type.m"
              MR_Word parse_tree__equiv_type__STATE_VARIABLE_Specs_0__tmp_copy_12 = parse_tree__equiv_type__STATE_VARIABLE_Specs_54_54;

#line 322 "equiv_type.m"
              parse_tree__equiv_type__STATE_VARIABLE_Specs_0_12 = parse_tree__equiv_type__STATE_VARIABLE_Specs_0__tmp_copy_12;
#line 322 "equiv_type.m"
              parse_tree__equiv_type__STATE_VARIABLE_UsedModules_0_10 = parse_tree__equiv_type__STATE_VARIABLE_UsedModules_0__tmp_copy_10;
#line 322 "equiv_type.m"
              parse_tree__equiv_type__STATE_VARIABLE_RecompInfo_0_8 = parse_tree__equiv_type__STATE_VARIABLE_RecompInfo_0__tmp_copy_8;
#line 322 "equiv_type.m"
              parse_tree__equiv_type__STATE_VARIABLE_RevReplItems_0_6 = parse_tree__equiv_type__STATE_VARIABLE_RevReplItems_0__tmp_copy_6;
#line 322 "equiv_type.m"
              parse_tree__equiv_type__HeadVar__5_5 = parse_tree__equiv_type__HeadVar__5__tmp_copy_5;
#line 322 "equiv_type.m"
            }
#line 322 "equiv_type.m"
            continue;
#line 311 "equiv_type.m"
          }
#line 308 "equiv_type.m"
      }
#line 308 "equiv_type.m"
      break;
#line 308 "equiv_type.m"
    }
#line 301 "equiv_type.m"
}

#line 206 "equiv_type.m"
static void MR_CALL 
parse_tree__equiv_type__build_eqv_maps_in_items_5_p_0(
#line 206 "equiv_type.m"
  MR_Word parse_tree__equiv_type__HeadVar__1_1,
#line 206 "equiv_type.m"
  MR_Word parse_tree__equiv_type__STATE_VARIABLE_TypeEqvMap_0_2,
#line 206 "equiv_type.m"
  MR_Word * parse_tree__equiv_type__STATE_VARIABLE_TypeEqvMap_3,
#line 206 "equiv_type.m"
  MR_Word parse_tree__equiv_type__STATE_VARIABLE_InstEqvMap_0_4,
#line 206 "equiv_type.m"
  MR_Word * parse_tree__equiv_type__STATE_VARIABLE_InstEqvMap_5)
#line 206 "equiv_type.m"
{
#line 210 "equiv_type.m"
  while (MR_TRUE)
#line 210 "equiv_type.m"
    {
#line 210 "equiv_type.m"
      /* tailcall optimized into a loop */
#line 210 "equiv_type.m"
      {
#line 210 "equiv_type.m"
        MR_bool parse_tree__equiv_type__succeeded;

#line 210 "equiv_type.m"
        if ((parse_tree__equiv_type__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 210 "equiv_type.m"
          {
#line 210 "equiv_type.m"
            *parse_tree__equiv_type__STATE_VARIABLE_InstEqvMap_5 = parse_tree__equiv_type__STATE_VARIABLE_InstEqvMap_0_4;
#line 210 "equiv_type.m"
            *parse_tree__equiv_type__STATE_VARIABLE_TypeEqvMap_3 = parse_tree__equiv_type__STATE_VARIABLE_TypeEqvMap_0_2;
#line 210 "equiv_type.m"
          }
#line 210 "equiv_type.m"
        else
#line 211 "equiv_type.m"
          {
#line 211 "equiv_type.m"
            MR_Word parse_tree__equiv_type__Item_12 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__equiv_type__HeadVar__1_1, (MR_Integer) 0)));
#line 211 "equiv_type.m"
            MR_Word parse_tree__equiv_type__Items_13 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__equiv_type__HeadVar__1_1, (MR_Integer) 1)));
#line 211 "equiv_type.m"
            MR_Word parse_tree__equiv_type__STATE_VARIABLE_TypeEqvMap_20_20;
#line 211 "equiv_type.m"
            MR_Word parse_tree__equiv_type__STATE_VARIABLE_InstEqvMap_21_21;
#line 228 "equiv_type.m"
            MR_Word parse_tree__equiv_type__Name_32;
#line 228 "equiv_type.m"
            MR_Word parse_tree__equiv_type__Args_33;
#line 228 "equiv_type.m"
            MR_Word parse_tree__equiv_type__Body_34;
#line 228 "equiv_type.m"
            MR_Word parse_tree__equiv_type__VarSet_35;
#line 221 "equiv_type.m"
            MR_Word parse_tree__equiv_type__ItemTypeDefn_31;
#line 221 "equiv_type.m"
            MR_Word parse_tree__equiv_type__V_43_43;
#line 222 "equiv_type.m"
            MR_Word parse_tree__equiv_type__V_36_36;
#line 222 "equiv_type.m"
            MR_Integer parse_tree__equiv_type___SeqNum_37;

#line 221 "equiv_type.m"
            parse_tree__equiv_type__succeeded = ((MR_tag((MR_Word) parse_tree__equiv_type__Item_12)) == (MR_mktag((MR_Integer) 1)));
#line 221 "equiv_type.m"
            if (parse_tree__equiv_type__succeeded)
#line 221 "equiv_type.m"
              {
#line 221 "equiv_type.m"
                parse_tree__equiv_type__ItemTypeDefn_31 = (MR_Word) MR_body(((MR_Word) parse_tree__equiv_type__Item_12), (MR_Integer) 1);
#line 222 "equiv_type.m"
                parse_tree__equiv_type__Name_32 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__equiv_type__ItemTypeDefn_31, (MR_Integer) 0)));
#line 222 "equiv_type.m"
                parse_tree__equiv_type__Args_33 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__equiv_type__ItemTypeDefn_31, (MR_Integer) 1)));
#line 222 "equiv_type.m"
                parse_tree__equiv_type__V_43_43 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__equiv_type__ItemTypeDefn_31, (MR_Integer) 2)));
#line 222 "equiv_type.m"
                parse_tree__equiv_type__VarSet_35 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__equiv_type__ItemTypeDefn_31, (MR_Integer) 3)));
#line 222 "equiv_type.m"
                parse_tree__equiv_type__V_36_36 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__equiv_type__ItemTypeDefn_31, (MR_Integer) 4)));
#line 222 "equiv_type.m"
                parse_tree__equiv_type___SeqNum_37 = ((MR_Integer) (MR_hl_field(MR_mktag(0), parse_tree__equiv_type__ItemTypeDefn_31, (MR_Integer) 5)));
#line 223 "equiv_type.m"
                parse_tree__equiv_type__succeeded = ((MR_tag((MR_Word) parse_tree__equiv_type__V_43_43)) == (MR_mktag((MR_Integer) 1)));
#line 223 "equiv_type.m"
                if (parse_tree__equiv_type__succeeded)
#line 223 "equiv_type.m"
                  parse_tree__equiv_type__Body_34 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__equiv_type__V_43_43, (MR_Integer) 0)));
#line 221 "equiv_type.m"
              }
#line 228 "equiv_type.m"
            if (parse_tree__equiv_type__succeeded)
#line 225 "equiv_type.m"
              {
#line 225 "equiv_type.m"
                MR_Integer parse_tree__equiv_type__Arity_38;
#line 225 "equiv_type.m"
                MR_Word parse_tree__equiv_type__TypeCtor_39;
#line 225 "equiv_type.m"
                MR_Word parse_tree__equiv_type__V_44_44;

#line 225 "equiv_type.m"
                {
#line 225 "equiv_type.m"
                  mercury__list__length_2_p_0((MR_Word) &parse_tree__equiv_type_scalar_common_1[4], parse_tree__equiv_type__Args_33, &parse_tree__equiv_type__Arity_38);
                }
#line 226 "equiv_type.m"
                {
#line 226 "equiv_type.m"
                  parse_tree__equiv_type__TypeCtor_39 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 226 "equiv_type.m"
                  MR_hl_field(MR_mktag(0), parse_tree__equiv_type__TypeCtor_39, 0) = ((MR_Box) (parse_tree__equiv_type__Name_32));
#line 226 "equiv_type.m"
                  MR_hl_field(MR_mktag(0), parse_tree__equiv_type__TypeCtor_39, 1) = ((MR_Box) (parse_tree__equiv_type__Arity_38));
#line 226 "equiv_type.m"
                }
#line 227 "equiv_type.m"
                {
#line 227 "equiv_type.m"
                  parse_tree__equiv_type__V_44_44 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 227 "equiv_type.m"
                  MR_hl_field(MR_mktag(0), parse_tree__equiv_type__V_44_44, 0) = ((MR_Box) (parse_tree__equiv_type__VarSet_35));
#line 227 "equiv_type.m"
                  MR_hl_field(MR_mktag(0), parse_tree__equiv_type__V_44_44, 1) = ((MR_Box) (parse_tree__equiv_type__Args_33));
#line 227 "equiv_type.m"
                  MR_hl_field(MR_mktag(0), parse_tree__equiv_type__V_44_44, 2) = ((MR_Box) (parse_tree__equiv_type__Body_34));
#line 227 "equiv_type.m"
                }
#line 227 "equiv_type.m"
                {
#line 227 "equiv_type.m"
                  mercury__map__set_4_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_type_ctor_0, (MR_Word) &parse_tree__equiv_type__parse_tree__equiv_type__type_ctor_info_eqv_type_body_0, ((MR_Box) (parse_tree__equiv_type__TypeCtor_39)), ((MR_Box) (parse_tree__equiv_type__V_44_44)), parse_tree__equiv_type__STATE_VARIABLE_TypeEqvMap_0_2, &parse_tree__equiv_type__STATE_VARIABLE_TypeEqvMap_20_20);
                }
#line 225 "equiv_type.m"
                parse_tree__equiv_type__STATE_VARIABLE_InstEqvMap_21_21 = parse_tree__equiv_type__STATE_VARIABLE_InstEqvMap_0_4;
#line 225 "equiv_type.m"
              }
#line 228 "equiv_type.m"
            else
#line 236 "equiv_type.m"
              {
#line 236 "equiv_type.m"
                MR_Word parse_tree__equiv_type__Name_52;
#line 236 "equiv_type.m"
                MR_Word parse_tree__equiv_type__Args_53;
#line 236 "equiv_type.m"
                MR_Word parse_tree__equiv_type__Body_54;
#line 236 "equiv_type.m"
                MR_Word parse_tree__equiv_type__VarSet_55;
#line 229 "equiv_type.m"
                MR_Word parse_tree__equiv_type__ItemInstDefn_40;
#line 229 "equiv_type.m"
                MR_Word parse_tree__equiv_type__V_46_46;
#line 230 "equiv_type.m"
                MR_Word parse_tree__equiv_type__V_41_41;
#line 230 "equiv_type.m"
                MR_Integer parse_tree__equiv_type___SeqNum_49;

#line 229 "equiv_type.m"
                parse_tree__equiv_type__succeeded = ((MR_tag((MR_Word) parse_tree__equiv_type__Item_12)) == (MR_mktag((MR_Integer) 2)));
#line 229 "equiv_type.m"
                if (parse_tree__equiv_type__succeeded)
#line 229 "equiv_type.m"
                  {
#line 229 "equiv_type.m"
                    parse_tree__equiv_type__ItemInstDefn_40 = (MR_Word) MR_body(((MR_Word) parse_tree__equiv_type__Item_12), (MR_Integer) 2);
#line 230 "equiv_type.m"
                    parse_tree__equiv_type__Name_52 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__equiv_type__ItemInstDefn_40, (MR_Integer) 0)));
#line 230 "equiv_type.m"
                    parse_tree__equiv_type__Args_53 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__equiv_type__ItemInstDefn_40, (MR_Integer) 1)));
#line 230 "equiv_type.m"
                    parse_tree__equiv_type__V_46_46 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__equiv_type__ItemInstDefn_40, (MR_Integer) 2)));
#line 230 "equiv_type.m"
                    parse_tree__equiv_type__VarSet_55 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__equiv_type__ItemInstDefn_40, (MR_Integer) 3)));
#line 230 "equiv_type.m"
                    parse_tree__equiv_type__V_41_41 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__equiv_type__ItemInstDefn_40, (MR_Integer) 4)));
#line 230 "equiv_type.m"
                    parse_tree__equiv_type___SeqNum_49 = ((MR_Integer) (MR_hl_field(MR_mktag(0), parse_tree__equiv_type__ItemInstDefn_40, (MR_Integer) 5)));
#line 231 "equiv_type.m"
                    parse_tree__equiv_type__succeeded = ((MR_tag((MR_Word) parse_tree__equiv_type__V_46_46)) == (MR_mktag((MR_Integer) 1)));
#line 231 "equiv_type.m"
                    if (parse_tree__equiv_type__succeeded)
#line 231 "equiv_type.m"
                      parse_tree__equiv_type__Body_54 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__equiv_type__V_46_46, (MR_Integer) 0)));
#line 229 "equiv_type.m"
                  }
#line 236 "equiv_type.m"
                if (parse_tree__equiv_type__succeeded)
#line 233 "equiv_type.m"
                  {
#line 233 "equiv_type.m"
                    MR_Word parse_tree__equiv_type__InstId_42;
#line 233 "equiv_type.m"
                    MR_Word parse_tree__equiv_type__V_47_47;
#line 233 "equiv_type.m"
                    MR_Integer parse_tree__equiv_type__Arity_51;

#line 233 "equiv_type.m"
                    {
#line 233 "equiv_type.m"
                      mercury__list__length_2_p_0((MR_Word) &parse_tree__equiv_type_scalar_common_1[5], parse_tree__equiv_type__Args_53, &parse_tree__equiv_type__Arity_51);
                    }
#line 234 "equiv_type.m"
                    {
#line 234 "equiv_type.m"
                      parse_tree__equiv_type__InstId_42 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 234 "equiv_type.m"
                      MR_hl_field(MR_mktag(0), parse_tree__equiv_type__InstId_42, 0) = ((MR_Box) (parse_tree__equiv_type__Name_52));
#line 234 "equiv_type.m"
                      MR_hl_field(MR_mktag(0), parse_tree__equiv_type__InstId_42, 1) = ((MR_Box) (parse_tree__equiv_type__Arity_51));
#line 234 "equiv_type.m"
                    }
#line 235 "equiv_type.m"
                    {
#line 235 "equiv_type.m"
                      parse_tree__equiv_type__V_47_47 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 235 "equiv_type.m"
                      MR_hl_field(MR_mktag(0), parse_tree__equiv_type__V_47_47, 0) = ((MR_Box) (parse_tree__equiv_type__VarSet_55));
#line 235 "equiv_type.m"
                      MR_hl_field(MR_mktag(0), parse_tree__equiv_type__V_47_47, 1) = ((MR_Box) (parse_tree__equiv_type__Args_53));
#line 235 "equiv_type.m"
                      MR_hl_field(MR_mktag(0), parse_tree__equiv_type__V_47_47, 2) = ((MR_Box) (parse_tree__equiv_type__Body_54));
#line 235 "equiv_type.m"
                    }
#line 235 "equiv_type.m"
                    {
#line 235 "equiv_type.m"
                      mercury__map__set_4_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_inst_id_0, (MR_Word) &parse_tree__equiv_type__parse_tree__equiv_type__type_ctor_info_eqv_inst_body_0, ((MR_Box) (parse_tree__equiv_type__InstId_42)), ((MR_Box) (parse_tree__equiv_type__V_47_47)), parse_tree__equiv_type__STATE_VARIABLE_InstEqvMap_0_4, &parse_tree__equiv_type__STATE_VARIABLE_InstEqvMap_21_21);
                    }
#line 233 "equiv_type.m"
                  }
#line 236 "equiv_type.m"
                else
#line 236 "equiv_type.m"
                  parse_tree__equiv_type__STATE_VARIABLE_InstEqvMap_21_21 = parse_tree__equiv_type__STATE_VARIABLE_InstEqvMap_0_4;
#line 236 "equiv_type.m"
                parse_tree__equiv_type__STATE_VARIABLE_TypeEqvMap_20_20 = parse_tree__equiv_type__STATE_VARIABLE_TypeEqvMap_0_2;
#line 236 "equiv_type.m"
              }
#line 213 "equiv_type.m"
            /* direct tailcall eliminated */
#line 213 "equiv_type.m"
            {
#line 213 "equiv_type.m"
              MR_Word parse_tree__equiv_type__HeadVar__1__tmp_copy_1 = parse_tree__equiv_type__Items_13;
#line 213 "equiv_type.m"
              MR_Word parse_tree__equiv_type__STATE_VARIABLE_TypeEqvMap_0__tmp_copy_2 = parse_tree__equiv_type__STATE_VARIABLE_TypeEqvMap_20_20;
#line 213 "equiv_type.m"
              MR_Word parse_tree__equiv_type__STATE_VARIABLE_InstEqvMap_0__tmp_copy_4 = parse_tree__equiv_type__STATE_VARIABLE_InstEqvMap_21_21;

#line 213 "equiv_type.m"
              parse_tree__equiv_type__STATE_VARIABLE_InstEqvMap_0_4 = parse_tree__equiv_type__STATE_VARIABLE_InstEqvMap_0__tmp_copy_4;
#line 213 "equiv_type.m"
              parse_tree__equiv_type__STATE_VARIABLE_TypeEqvMap_0_2 = parse_tree__equiv_type__STATE_VARIABLE_TypeEqvMap_0__tmp_copy_2;
#line 213 "equiv_type.m"
              parse_tree__equiv_type__HeadVar__1_1 = parse_tree__equiv_type__HeadVar__1__tmp_copy_1;
#line 213 "equiv_type.m"
            }
#line 213 "equiv_type.m"
            continue;
#line 211 "equiv_type.m"
          }
#line 210 "equiv_type.m"
      }
#line 210 "equiv_type.m"
      break;
#line 210 "equiv_type.m"
    }
#line 206 "equiv_type.m"
}

#line 958 "equiv_type.m"
static void MR_CALL 
parse_tree__equiv_type__replace_in_ctors_7_p_0_1(
#line 958 "equiv_type.m"
  MR_Box parse_tree__equiv_type__closure_arg,
#line 958 "equiv_type.m"
  MR_Box parse_tree__equiv_type__wrapper_arg_1,
#line 958 "equiv_type.m"
  MR_Box * parse_tree__equiv_type__wrapper_arg_2,
#line 958 "equiv_type.m"
  MR_Box parse_tree__equiv_type__wrapper_arg_3,
#line 958 "equiv_type.m"
  MR_Box * parse_tree__equiv_type__wrapper_arg_4,
#line 958 "equiv_type.m"
  MR_Box parse_tree__equiv_type__wrapper_arg_5,
#line 958 "equiv_type.m"
  MR_Box * parse_tree__equiv_type__wrapper_arg_6,
#line 958 "equiv_type.m"
  MR_Box parse_tree__equiv_type__wrapper_arg_7,
#line 958 "equiv_type.m"
  MR_Box * parse_tree__equiv_type__wrapper_arg_8)
#line 958 "equiv_type.m"
{
#line 958 "equiv_type.m"
  {
#line 958 "equiv_type.m"
    MR_Box parse_tree__equiv_type__closure = parse_tree__equiv_type__closure_arg;
#line 958 "equiv_type.m"
    MR_Word parse_tree__equiv_type__conv3_Ctor_14;
#line 958 "equiv_type.m"
    MR_Word parse_tree__equiv_type__conv2_STATE_VARIABLE_VarSet_28;
#line 958 "equiv_type.m"
    MR_Word parse_tree__equiv_type__conv1_STATE_VARIABLE_EquivTypeInfo_30;
#line 958 "equiv_type.m"
    MR_Word parse_tree__equiv_type__conv0_STATE_VARIABLE_UsedModules_32;

#line 958 "equiv_type.m"
    {
#line 958 "equiv_type.m"
      parse_tree__equiv_type__replace_in_ctor_10_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__equiv_type__closure, (MR_Integer) 3))), ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__equiv_type__closure, (MR_Integer) 4))), ((MR_Word) parse_tree__equiv_type__wrapper_arg_1), &parse_tree__equiv_type__conv3_Ctor_14, ((MR_Word) parse_tree__equiv_type__wrapper_arg_3), &parse_tree__equiv_type__conv2_STATE_VARIABLE_VarSet_28, ((MR_Word) parse_tree__equiv_type__wrapper_arg_5), &parse_tree__equiv_type__conv1_STATE_VARIABLE_EquivTypeInfo_30, ((MR_Word) parse_tree__equiv_type__wrapper_arg_7), &parse_tree__equiv_type__conv0_STATE_VARIABLE_UsedModules_32);
    }
#line 958 "equiv_type.m"
    *parse_tree__equiv_type__wrapper_arg_2 = ((MR_Box) (parse_tree__equiv_type__conv3_Ctor_14));
#line 958 "equiv_type.m"
    *parse_tree__equiv_type__wrapper_arg_4 = ((MR_Box) (parse_tree__equiv_type__conv2_STATE_VARIABLE_VarSet_28));
#line 958 "equiv_type.m"
    *parse_tree__equiv_type__wrapper_arg_6 = ((MR_Box) (parse_tree__equiv_type__conv1_STATE_VARIABLE_EquivTypeInfo_30));
#line 958 "equiv_type.m"
    *parse_tree__equiv_type__wrapper_arg_8 = ((MR_Box) (parse_tree__equiv_type__conv0_STATE_VARIABLE_UsedModules_32));
#line 958 "equiv_type.m"
  }
#line 958 "equiv_type.m"
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
#line 947 "equiv_type.m"
  {
#line 947 "equiv_type.m"
    MR_bool parse_tree__equiv_type__succeeded;
#line 947 "equiv_type.m"
    MR_Word parse_tree__equiv_type__TypeCtorInfo_38_51;
#line 947 "equiv_type.m"
    MR_Word parse_tree__equiv_type__V_23_23;
#line 947 "equiv_type.m"
    MR_Word parse_tree__equiv_type__V_38_38;
#line 958 "equiv_type.m"
    MR_Word parse_tree__equiv_type__V_12_12;
#line 958 "equiv_type.m"
    MR_Box parse_tree__equiv_type__conv6_STATE_VARIABLE_VarSet_16;
#line 958 "equiv_type.m"
    MR_Box parse_tree__equiv_type__conv5_STATE_VARIABLE_EquivTypeInfo_18;
#line 958 "equiv_type.m"
    MR_Box parse_tree__equiv_type__conv4_V_12_12;

#line 949 "equiv_type.m"
    {
#line 949 "equiv_type.m"
      parse_tree__equiv_type__V_23_23 = parse_tree__prog_data__used_modules_init_0_f_0();
    }
#line 958 "equiv_type.m"
    {
#line 958 "equiv_type.m"
      parse_tree__equiv_type__V_38_38 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
#line 958 "equiv_type.m"
      MR_hl_field(MR_mktag(0), parse_tree__equiv_type__V_38_38, 0) = ((MR_Box) (&parse_tree__equiv_type_scalar_common_3[1]));
#line 958 "equiv_type.m"
      MR_hl_field(MR_mktag(0), parse_tree__equiv_type__V_38_38, 1) = ((MR_Box) (parse_tree__equiv_type__replace_in_ctors_7_p_0_1));
#line 958 "equiv_type.m"
      MR_hl_field(MR_mktag(0), parse_tree__equiv_type__V_38_38, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
#line 958 "equiv_type.m"
      MR_hl_field(MR_mktag(0), parse_tree__equiv_type__V_38_38, 3) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 958 "equiv_type.m"
      MR_hl_field(MR_mktag(0), parse_tree__equiv_type__V_38_38, 4) = ((MR_Box) (parse_tree__equiv_type__TypeEqvMap_8));
#line 958 "equiv_type.m"
    }
#line 12824 "parse_tree.equiv_type.c"
    parse_tree__equiv_type__TypeCtorInfo_38_51 = (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_constructor_0;
#line 958 "equiv_type.m"
    {
#line 958 "equiv_type.m"
      mercury__list__map_foldl3_9_p_1(parse_tree__equiv_type__TypeCtorInfo_38_51, parse_tree__equiv_type__TypeCtorInfo_38_51, (MR_Word) &parse_tree__equiv_type_scalar_common_1[6], (MR_Word) &parse_tree__equiv_type_scalar_common_1[7], (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_used_modules_0, parse_tree__equiv_type__V_38_38, parse_tree__equiv_type__STATE_VARIABLE_Ctors_0_13, parse_tree__equiv_type__STATE_VARIABLE_Ctors_14, ((MR_Box) (parse_tree__equiv_type__STATE_VARIABLE_VarSet_0_15)), &parse_tree__equiv_type__conv6_STATE_VARIABLE_VarSet_16, ((MR_Box) (parse_tree__equiv_type__STATE_VARIABLE_EquivTypeInfo_0_17)), &parse_tree__equiv_type__conv5_STATE_VARIABLE_EquivTypeInfo_18, ((MR_Box) (parse_tree__equiv_type__V_23_23)), &parse_tree__equiv_type__conv4_V_12_12);
    }
#line 958 "equiv_type.m"
    *parse_tree__equiv_type__STATE_VARIABLE_VarSet_16 = ((MR_Word) parse_tree__equiv_type__conv6_STATE_VARIABLE_VarSet_16);
#line 958 "equiv_type.m"
    *parse_tree__equiv_type__STATE_VARIABLE_EquivTypeInfo_18 = ((MR_Word) parse_tree__equiv_type__conv5_STATE_VARIABLE_EquivTypeInfo_18);
#line 958 "equiv_type.m"
    parse_tree__equiv_type__V_12_12 = ((MR_Word) parse_tree__equiv_type__conv4_V_12_12);
#line 947 "equiv_type.m"
  }
#line 78 "equiv_type.m"
}

#line 849 "equiv_type.m"
static void MR_CALL 
parse_tree__equiv_type__replace_in_prog_constraints_7_p_0_1(
#line 849 "equiv_type.m"
  MR_Box parse_tree__equiv_type__closure_arg,
#line 849 "equiv_type.m"
  MR_Box parse_tree__equiv_type__wrapper_arg_1,
#line 849 "equiv_type.m"
  MR_Box * parse_tree__equiv_type__wrapper_arg_2,
#line 849 "equiv_type.m"
  MR_Box parse_tree__equiv_type__wrapper_arg_3,
#line 849 "equiv_type.m"
  MR_Box * parse_tree__equiv_type__wrapper_arg_4,
#line 849 "equiv_type.m"
  MR_Box parse_tree__equiv_type__wrapper_arg_5,
#line 849 "equiv_type.m"
  MR_Box * parse_tree__equiv_type__wrapper_arg_6,
#line 849 "equiv_type.m"
  MR_Box parse_tree__equiv_type__wrapper_arg_7,
#line 849 "equiv_type.m"
  MR_Box * parse_tree__equiv_type__wrapper_arg_8)
#line 849 "equiv_type.m"
{
#line 849 "equiv_type.m"
  {
#line 849 "equiv_type.m"
    MR_Box parse_tree__equiv_type__closure = parse_tree__equiv_type__closure_arg;
#line 849 "equiv_type.m"
    MR_Word parse_tree__equiv_type__conv3_Constraint_14;
#line 849 "equiv_type.m"
    MR_Word parse_tree__equiv_type__conv2_STATE_VARIABLE_VarSet_24;
#line 849 "equiv_type.m"
    MR_Word parse_tree__equiv_type__conv1_STATE_VARIABLE_EquivTypeInfo_26;
#line 849 "equiv_type.m"
    MR_Word parse_tree__equiv_type__conv0_STATE_VARIABLE_UsedModules_28;

#line 849 "equiv_type.m"
    {
#line 849 "equiv_type.m"
      parse_tree__equiv_type__replace_in_prog_constraint_location_10_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__equiv_type__closure, (MR_Integer) 3))), ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__equiv_type__closure, (MR_Integer) 4))), ((MR_Word) parse_tree__equiv_type__wrapper_arg_1), &parse_tree__equiv_type__conv3_Constraint_14, ((MR_Word) parse_tree__equiv_type__wrapper_arg_3), &parse_tree__equiv_type__conv2_STATE_VARIABLE_VarSet_24, ((MR_Word) parse_tree__equiv_type__wrapper_arg_5), &parse_tree__equiv_type__conv1_STATE_VARIABLE_EquivTypeInfo_26, ((MR_Word) parse_tree__equiv_type__wrapper_arg_7), &parse_tree__equiv_type__conv0_STATE_VARIABLE_UsedModules_28);
    }
#line 849 "equiv_type.m"
    *parse_tree__equiv_type__wrapper_arg_2 = ((MR_Box) (parse_tree__equiv_type__conv3_Constraint_14));
#line 849 "equiv_type.m"
    *parse_tree__equiv_type__wrapper_arg_4 = ((MR_Box) (parse_tree__equiv_type__conv2_STATE_VARIABLE_VarSet_24));
#line 849 "equiv_type.m"
    *parse_tree__equiv_type__wrapper_arg_6 = ((MR_Box) (parse_tree__equiv_type__conv1_STATE_VARIABLE_EquivTypeInfo_26));
#line 849 "equiv_type.m"
    *parse_tree__equiv_type__wrapper_arg_8 = ((MR_Box) (parse_tree__equiv_type__conv0_STATE_VARIABLE_UsedModules_28));
#line 849 "equiv_type.m"
  }
#line 849 "equiv_type.m"
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
#line 823 "equiv_type.m"
  {
#line 823 "equiv_type.m"
    MR_bool parse_tree__equiv_type__succeeded;
#line 823 "equiv_type.m"
    MR_Word parse_tree__equiv_type__TypeCtorInfo_38_72;
#line 823 "equiv_type.m"
    MR_Word parse_tree__equiv_type__V_18_18 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 823 "equiv_type.m"
    MR_Word parse_tree__equiv_type__V_21_21;
#line 823 "equiv_type.m"
    MR_Word parse_tree__equiv_type__UnivCs0_35;
#line 823 "equiv_type.m"
    MR_Word parse_tree__equiv_type__ExistCs0_36;
#line 823 "equiv_type.m"
    MR_Word parse_tree__equiv_type__UnivCs_37;
#line 823 "equiv_type.m"
    MR_Word parse_tree__equiv_type__ExistCs_38;
#line 823 "equiv_type.m"
    MR_Word parse_tree__equiv_type__STATE_VARIABLE_VarSet_28_39;
#line 823 "equiv_type.m"
    MR_Word parse_tree__equiv_type__STATE_VARIABLE_EquivTypeInfo_29_40;
#line 823 "equiv_type.m"
    MR_Word parse_tree__equiv_type__STATE_VARIABLE_UsedModules_30_41;
#line 823 "equiv_type.m"
    MR_Word parse_tree__equiv_type__V_59_59;
#line 848 "equiv_type.m"
    MR_Box parse_tree__equiv_type__conv6_STATE_VARIABLE_VarSet_28_39;
#line 848 "equiv_type.m"
    MR_Box parse_tree__equiv_type__conv5_STATE_VARIABLE_EquivTypeInfo_29_40;
#line 848 "equiv_type.m"
    MR_Box parse_tree__equiv_type__conv4_STATE_VARIABLE_UsedModules_30_41;
#line 837 "equiv_type.m"
    MR_Word parse_tree__equiv_type__V_13_13;

#line 825 "equiv_type.m"
    {
#line 825 "equiv_type.m"
      parse_tree__equiv_type__V_21_21 = parse_tree__prog_data__used_modules_init_0_f_0();
    }
#line 834 "equiv_type.m"
    parse_tree__equiv_type__UnivCs0_35 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__equiv_type__Cs0_9, (MR_Integer) 0)));
#line 834 "equiv_type.m"
    parse_tree__equiv_type__ExistCs0_36 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__equiv_type__Cs0_9, (MR_Integer) 1)));
#line 849 "equiv_type.m"
    {
#line 849 "equiv_type.m"
      parse_tree__equiv_type__V_59_59 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
#line 849 "equiv_type.m"
      MR_hl_field(MR_mktag(0), parse_tree__equiv_type__V_59_59, 0) = ((MR_Box) (&parse_tree__equiv_type_scalar_common_3[0]));
#line 849 "equiv_type.m"
      MR_hl_field(MR_mktag(0), parse_tree__equiv_type__V_59_59, 1) = ((MR_Box) (parse_tree__equiv_type__replace_in_prog_constraints_7_p_0_1));
#line 849 "equiv_type.m"
      MR_hl_field(MR_mktag(0), parse_tree__equiv_type__V_59_59, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
#line 849 "equiv_type.m"
      MR_hl_field(MR_mktag(0), parse_tree__equiv_type__V_59_59, 3) = ((MR_Box) (parse_tree__equiv_type__V_18_18));
#line 849 "equiv_type.m"
      MR_hl_field(MR_mktag(0), parse_tree__equiv_type__V_59_59, 4) = ((MR_Box) (parse_tree__equiv_type__TypeEqvMap_8));
#line 849 "equiv_type.m"
    }
#line 12975 "parse_tree.equiv_type.c"
    parse_tree__equiv_type__TypeCtorInfo_38_72 = (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_constraint_0;
#line 848 "equiv_type.m"
    {
#line 848 "equiv_type.m"
      mercury__list__map_foldl3_9_p_1(parse_tree__equiv_type__TypeCtorInfo_38_72, parse_tree__equiv_type__TypeCtorInfo_38_72, (MR_Word) &parse_tree__equiv_type_scalar_common_1[6], (MR_Word) &parse_tree__equiv_type_scalar_common_1[7], (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_used_modules_0, parse_tree__equiv_type__V_59_59, parse_tree__equiv_type__UnivCs0_35, &parse_tree__equiv_type__UnivCs_37, ((MR_Box) (parse_tree__equiv_type__STATE_VARIABLE_VarSet_0_14)), &parse_tree__equiv_type__conv6_STATE_VARIABLE_VarSet_28_39, ((MR_Box) (parse_tree__equiv_type__STATE_VARIABLE_EquivTypeInfo_0_16)), &parse_tree__equiv_type__conv5_STATE_VARIABLE_EquivTypeInfo_29_40, ((MR_Box) (parse_tree__equiv_type__V_21_21)), &parse_tree__equiv_type__conv4_STATE_VARIABLE_UsedModules_30_41);
    }
#line 848 "equiv_type.m"
    parse_tree__equiv_type__STATE_VARIABLE_VarSet_28_39 = ((MR_Word) parse_tree__equiv_type__conv6_STATE_VARIABLE_VarSet_28_39);
#line 848 "equiv_type.m"
    parse_tree__equiv_type__STATE_VARIABLE_EquivTypeInfo_29_40 = ((MR_Word) parse_tree__equiv_type__conv5_STATE_VARIABLE_EquivTypeInfo_29_40);
#line 848 "equiv_type.m"
    parse_tree__equiv_type__STATE_VARIABLE_UsedModules_30_41 = ((MR_Word) parse_tree__equiv_type__conv4_STATE_VARIABLE_UsedModules_30_41);
#line 837 "equiv_type.m"
    {
#line 837 "equiv_type.m"
      parse_tree__equiv_type__replace_in_prog_constraint_list_10_p_0(parse_tree__equiv_type__V_18_18, parse_tree__equiv_type__TypeEqvMap_8, parse_tree__equiv_type__ExistCs0_36, &parse_tree__equiv_type__ExistCs_38, parse_tree__equiv_type__STATE_VARIABLE_VarSet_28_39, parse_tree__equiv_type__STATE_VARIABLE_VarSet_15, parse_tree__equiv_type__STATE_VARIABLE_EquivTypeInfo_29_40, parse_tree__equiv_type__STATE_VARIABLE_EquivTypeInfo_17, parse_tree__equiv_type__STATE_VARIABLE_UsedModules_30_41, &parse_tree__equiv_type__V_13_13);
    }
#line 839 "equiv_type.m"
    {
#line 839 "equiv_type.m"
      MR_Word base;
#line 839 "equiv_type.m"
      base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 839 "equiv_type.m"
      *parse_tree__equiv_type__Cs_10 = base;
#line 839 "equiv_type.m"
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (parse_tree__equiv_type__UnivCs_37));
#line 839 "equiv_type.m"
      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (parse_tree__equiv_type__ExistCs_38));
#line 839 "equiv_type.m"
    }
#line 823 "equiv_type.m"
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
#line 977 "equiv_type.m"
  {
#line 977 "equiv_type.m"
    MR_bool parse_tree__equiv_type__succeeded;
#line 977 "equiv_type.m"
    MR_Word parse_tree__equiv_type__V_25_25;
#line 988 "equiv_type.m"
    MR_Word parse_tree__equiv_type__V_14_14;
#line 988 "equiv_type.m"
    MR_Word parse_tree__equiv_type__V_41_41;

#line 979 "equiv_type.m"
    {
#line 979 "equiv_type.m"
      parse_tree__equiv_type__V_25_25 = parse_tree__prog_data__used_modules_init_0_f_0();
    }
#line 988 "equiv_type.m"
    {
#line 988 "equiv_type.m"
      parse_tree__equiv_type__replace_in_type_list_location_circ_2_14_p_0((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), parse_tree__equiv_type__TypeEqvMap_9, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), parse_tree__equiv_type__STATE_VARIABLE_Typess_0_15, parse_tree__equiv_type__STATE_VARIABLE_Typess_16, parse_tree__equiv_type__Changed_11, (MR_Integer) 0, &parse_tree__equiv_type__V_41_41, parse_tree__equiv_type__STATE_VARIABLE_VarSet_0_17, parse_tree__equiv_type__STATE_VARIABLE_VarSet_18, parse_tree__equiv_type__STATE_VARIABLE_EquivTypeInfo_0_19, parse_tree__equiv_type__STATE_VARIABLE_EquivTypeInfo_20, parse_tree__equiv_type__V_25_25, &parse_tree__equiv_type__V_14_14);
    }
#line 977 "equiv_type.m"
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
#line 1078 "equiv_type.m"
  {
#line 1078 "equiv_type.m"
    MR_bool parse_tree__equiv_type__succeeded;
#line 1078 "equiv_type.m"
    MR_Word parse_tree__equiv_type__V_23_23;
#line 1090 "equiv_type.m"
    MR_Word parse_tree__equiv_type__V_15_15;
#line 1090 "equiv_type.m"
    MR_Word parse_tree__equiv_type__V_38_38;

#line 1081 "equiv_type.m"
    {
#line 1081 "equiv_type.m"
      parse_tree__equiv_type__V_23_23 = parse_tree__prog_data__used_modules_init_0_f_0();
    }
#line 1090 "equiv_type.m"
    {
#line 1090 "equiv_type.m"
      parse_tree__equiv_type__replace_in_type_maybe_record_use_2_13_p_0((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), parse_tree__equiv_type__TypeEqvMap_9, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), parse_tree__equiv_type__Type0_10, parse_tree__equiv_type__Type_11, parse_tree__equiv_type__Changed_12, &parse_tree__equiv_type__V_38_38, parse_tree__equiv_type__STATE_VARIABLE_VarSet_0_16, parse_tree__equiv_type__STATE_VARIABLE_VarSet_17, parse_tree__equiv_type__STATE_VARIABLE_EquivTypeInfo_0_18, parse_tree__equiv_type__STATE_VARIABLE_EquivTypeInfo_19, parse_tree__equiv_type__V_23_23, &parse_tree__equiv_type__V_15_15);
    }
#line 1078 "equiv_type.m"
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
#line 115 "equiv_type.m"
  {
#line 115 "equiv_type.m"
    MR_bool parse_tree__equiv_type__succeeded;
#line 115 "equiv_type.m"
    MR_Word parse_tree__equiv_type__TypeInfo_108_108;
#line 115 "equiv_type.m"
    MR_Word parse_tree__equiv_type__TypeCtorInfo_111_111;
#line 115 "equiv_type.m"
    MR_Word parse_tree__equiv_type__TypeCtorInfo_112_112;
#line 115 "equiv_type.m"
    MR_Word parse_tree__equiv_type__ModuleName_18 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__equiv_type__AugCompUnit0_10, (MR_Integer) 0)));
#line 115 "equiv_type.m"
    MR_Word parse_tree__equiv_type__ModuleNameContext_19 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__equiv_type__AugCompUnit0_10, (MR_Integer) 1)));
#line 115 "equiv_type.m"
    MR_Word parse_tree__equiv_type__ModuleVersionNumbers_20 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__equiv_type__AugCompUnit0_10, (MR_Integer) 2)));
#line 115 "equiv_type.m"
    MR_Word parse_tree__equiv_type__SrcItemBlocks0_21 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__equiv_type__AugCompUnit0_10, (MR_Integer) 3)));
#line 115 "equiv_type.m"
    MR_Word parse_tree__equiv_type__DirectIntItemBlocks0_22 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__equiv_type__AugCompUnit0_10, (MR_Integer) 4)));
#line 115 "equiv_type.m"
    MR_Word parse_tree__equiv_type__IndirectIntItemBlocks0_23 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__equiv_type__AugCompUnit0_10, (MR_Integer) 5)));
#line 115 "equiv_type.m"
    MR_Word parse_tree__equiv_type__OptItemBlocks0_24 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__equiv_type__AugCompUnit0_10, (MR_Integer) 6)));
#line 115 "equiv_type.m"
    MR_Word parse_tree__equiv_type__IntForOptItemBlocks0_25 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__equiv_type__AugCompUnit0_10, (MR_Integer) 7)));
#line 115 "equiv_type.m"
    MR_Word parse_tree__equiv_type__InstEqvMap_26;
#line 115 "equiv_type.m"
    MR_Word parse_tree__equiv_type__RevSrcItemBlocks_27;
#line 115 "equiv_type.m"
    MR_Word parse_tree__equiv_type__RevDirectIntItemBlocks_28;
#line 115 "equiv_type.m"
    MR_Word parse_tree__equiv_type__RevIndirectIntItemBlocks_29;
#line 115 "equiv_type.m"
    MR_Word parse_tree__equiv_type__RevIntForOptItemBlocks_30;
#line 115 "equiv_type.m"
    MR_Word parse_tree__equiv_type__RevOptItemBlocks_31;
#line 115 "equiv_type.m"
    MR_Word parse_tree__equiv_type__SrcItemBlocks_32;
#line 115 "equiv_type.m"
    MR_Word parse_tree__equiv_type__DirectIntItemBlocks_33;
#line 115 "equiv_type.m"
    MR_Word parse_tree__equiv_type__IndirectIntItemBlocks_34;
#line 115 "equiv_type.m"
    MR_Word parse_tree__equiv_type__OptItemBlocks_35;
#line 115 "equiv_type.m"
    MR_Word parse_tree__equiv_type__IntForOptItemBlocks_36;
#line 115 "equiv_type.m"
    MR_Word parse_tree__equiv_type__EventSpecList0_37;
#line 115 "equiv_type.m"
    MR_Word parse_tree__equiv_type__EventSpecList_38;
#line 115 "equiv_type.m"
    MR_Word parse_tree__equiv_type__STATE_VARIABLE_TypeEqvMap_43_43;
#line 115 "equiv_type.m"
    MR_Word parse_tree__equiv_type__STATE_VARIABLE_InstEqvMap_44_44;
#line 115 "equiv_type.m"
    MR_Word parse_tree__equiv_type__STATE_VARIABLE_TypeEqvMap_45_45;
#line 115 "equiv_type.m"
    MR_Word parse_tree__equiv_type__STATE_VARIABLE_InstEqvMap_46_46;
#line 115 "equiv_type.m"
    MR_Word parse_tree__equiv_type__STATE_VARIABLE_TypeEqvMap_47_47;
#line 115 "equiv_type.m"
    MR_Word parse_tree__equiv_type__STATE_VARIABLE_InstEqvMap_48_48;
#line 115 "equiv_type.m"
    MR_Word parse_tree__equiv_type__STATE_VARIABLE_TypeEqvMap_49_49;
#line 115 "equiv_type.m"
    MR_Word parse_tree__equiv_type__STATE_VARIABLE_InstEqvMap_50_50;
#line 115 "equiv_type.m"
    MR_Word parse_tree__equiv_type__STATE_VARIABLE_TypeEqvMap_51_51;
#line 115 "equiv_type.m"
    MR_Word parse_tree__equiv_type__STATE_VARIABLE_InstEqvMap_52_52;
#line 115 "equiv_type.m"
    MR_Word parse_tree__equiv_type__STATE_VARIABLE_UsedModules_55_55;
#line 115 "equiv_type.m"
    MR_Word parse_tree__equiv_type__STATE_VARIABLE_RecompInfo_59_59;
#line 115 "equiv_type.m"
    MR_Word parse_tree__equiv_type__STATE_VARIABLE_UsedModules_60_60;
#line 115 "equiv_type.m"
    MR_Word parse_tree__equiv_type__STATE_VARIABLE_Specs_61_61;
#line 115 "equiv_type.m"
    MR_Word parse_tree__equiv_type__STATE_VARIABLE_RecompInfo_64_64;
#line 115 "equiv_type.m"
    MR_Word parse_tree__equiv_type__STATE_VARIABLE_UsedModules_65_65;
#line 115 "equiv_type.m"
    MR_Word parse_tree__equiv_type__STATE_VARIABLE_Specs_66_66;
#line 115 "equiv_type.m"
    MR_Word parse_tree__equiv_type__STATE_VARIABLE_RecompInfo_69_69;
#line 115 "equiv_type.m"
    MR_Word parse_tree__equiv_type__STATE_VARIABLE_UsedModules_70_70;
#line 115 "equiv_type.m"
    MR_Word parse_tree__equiv_type__STATE_VARIABLE_Specs_71_71;
#line 115 "equiv_type.m"
    MR_Word parse_tree__equiv_type__STATE_VARIABLE_RecompInfo_74_74;
#line 115 "equiv_type.m"
    MR_Word parse_tree__equiv_type__STATE_VARIABLE_UsedModules_75_75;
#line 115 "equiv_type.m"
    MR_Word parse_tree__equiv_type__STATE_VARIABLE_Specs_76_76;
#line 115 "equiv_type.m"
    MR_Word parse_tree__equiv_type__STATE_VARIABLE_RecompInfo_79_79;
#line 115 "equiv_type.m"
    MR_Word parse_tree__equiv_type__STATE_VARIABLE_UsedModules_80_80;
#line 115 "equiv_type.m"
    MR_Word parse_tree__equiv_type__STATE_VARIABLE_Specs_81_81;

#line 123 "equiv_type.m"
    {
#line 123 "equiv_type.m"
      mercury__map__init_1_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_type_ctor_0, (MR_Word) &parse_tree__equiv_type__parse_tree__equiv_type__type_ctor_info_eqv_type_body_0, &parse_tree__equiv_type__STATE_VARIABLE_TypeEqvMap_43_43);
    }
#line 124 "equiv_type.m"
    {
#line 124 "equiv_type.m"
      mercury__map__init_1_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_inst_id_0, (MR_Word) &parse_tree__equiv_type__parse_tree__equiv_type__type_ctor_info_eqv_inst_body_0, &parse_tree__equiv_type__STATE_VARIABLE_InstEqvMap_44_44);
    }
#line 125 "equiv_type.m"
    {
#line 125 "equiv_type.m"
      parse_tree__equiv_type__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_98_117_105_108_100_95_101_113_118_95_109_97_112_115_95_105_110_95_105_116_101_109_95_98_108_111_99_107_115_95_95_91_49_93_95_48_5_p_0(parse_tree__equiv_type__SrcItemBlocks0_21, parse_tree__equiv_type__STATE_VARIABLE_TypeEqvMap_43_43, &parse_tree__equiv_type__STATE_VARIABLE_TypeEqvMap_45_45, parse_tree__equiv_type__STATE_VARIABLE_InstEqvMap_44_44, &parse_tree__equiv_type__STATE_VARIABLE_InstEqvMap_46_46);
    }
#line 127 "equiv_type.m"
    {
#line 127 "equiv_type.m"
      parse_tree__equiv_type__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_98_117_105_108_100_95_101_113_118_95_109_97_112_115_95_105_110_95_105_116_101_109_95_98_108_111_99_107_115_95_95_91_49_93_95_48_5_p_0(parse_tree__equiv_type__DirectIntItemBlocks0_22, parse_tree__equiv_type__STATE_VARIABLE_TypeEqvMap_45_45, &parse_tree__equiv_type__STATE_VARIABLE_TypeEqvMap_47_47, parse_tree__equiv_type__STATE_VARIABLE_InstEqvMap_46_46, &parse_tree__equiv_type__STATE_VARIABLE_InstEqvMap_48_48);
    }
#line 129 "equiv_type.m"
    {
#line 129 "equiv_type.m"
      parse_tree__equiv_type__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_98_117_105_108_100_95_101_113_118_95_109_97_112_115_95_105_110_95_105_116_101_109_95_98_108_111_99_107_115_95_95_91_49_93_95_48_5_p_0(parse_tree__equiv_type__IndirectIntItemBlocks0_23, parse_tree__equiv_type__STATE_VARIABLE_TypeEqvMap_47_47, &parse_tree__equiv_type__STATE_VARIABLE_TypeEqvMap_49_49, parse_tree__equiv_type__STATE_VARIABLE_InstEqvMap_48_48, &parse_tree__equiv_type__STATE_VARIABLE_InstEqvMap_50_50);
    }
#line 131 "equiv_type.m"
    {
#line 131 "equiv_type.m"
      parse_tree__equiv_type__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_98_117_105_108_100_95_101_113_118_95_109_97_112_115_95_105_110_95_105_116_101_109_95_98_108_111_99_107_115_95_95_91_49_93_95_48_5_p_0(parse_tree__equiv_type__IntForOptItemBlocks0_25, parse_tree__equiv_type__STATE_VARIABLE_TypeEqvMap_49_49, &parse_tree__equiv_type__STATE_VARIABLE_TypeEqvMap_51_51, parse_tree__equiv_type__STATE_VARIABLE_InstEqvMap_50_50, &parse_tree__equiv_type__STATE_VARIABLE_InstEqvMap_52_52);
    }
#line 133 "equiv_type.m"
    {
#line 133 "equiv_type.m"
      parse_tree__equiv_type__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_98_117_105_108_100_95_101_113_118_95_109_97_112_115_95_105_110_95_105_116_101_109_95_98_108_111_99_107_115_95_95_91_49_93_95_48_5_p_0(parse_tree__equiv_type__OptItemBlocks0_24, parse_tree__equiv_type__STATE_VARIABLE_TypeEqvMap_51_51, parse_tree__equiv_type__TypeEqvMap_14, parse_tree__equiv_type__STATE_VARIABLE_InstEqvMap_52_52, &parse_tree__equiv_type__InstEqvMap_26);
    }
#line 142 "equiv_type.m"
    {
#line 142 "equiv_type.m"
      parse_tree__equiv_type__STATE_VARIABLE_UsedModules_55_55 = parse_tree__prog_data__used_modules_init_0_f_0();
    }
#line 144 "equiv_type.m"
    {
#line 144 "equiv_type.m"
      parse_tree__equiv_type__replace_in_item_blocks__ho4_13_p_0(parse_tree__equiv_type__ModuleName_18, *parse_tree__equiv_type__TypeEqvMap_14, parse_tree__equiv_type__InstEqvMap_26, parse_tree__equiv_type__SrcItemBlocks0_21, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), &parse_tree__equiv_type__RevSrcItemBlocks_27, parse_tree__equiv_type__STATE_VARIABLE_RecompInfo_0_40, &parse_tree__equiv_type__STATE_VARIABLE_RecompInfo_59_59, parse_tree__equiv_type__STATE_VARIABLE_UsedModules_55_55, &parse_tree__equiv_type__STATE_VARIABLE_UsedModules_60_60, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), &parse_tree__equiv_type__STATE_VARIABLE_Specs_61_61);
    }
#line 147 "equiv_type.m"
    {
#line 147 "equiv_type.m"
      parse_tree__equiv_type__replace_in_item_blocks__ho3_13_p_0(parse_tree__equiv_type__ModuleName_18, *parse_tree__equiv_type__TypeEqvMap_14, parse_tree__equiv_type__InstEqvMap_26, parse_tree__equiv_type__DirectIntItemBlocks0_22, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), &parse_tree__equiv_type__RevDirectIntItemBlocks_28, parse_tree__equiv_type__STATE_VARIABLE_RecompInfo_59_59, &parse_tree__equiv_type__STATE_VARIABLE_RecompInfo_64_64, parse_tree__equiv_type__STATE_VARIABLE_UsedModules_60_60, &parse_tree__equiv_type__STATE_VARIABLE_UsedModules_65_65, parse_tree__equiv_type__STATE_VARIABLE_Specs_61_61, &parse_tree__equiv_type__STATE_VARIABLE_Specs_66_66);
    }
#line 151 "equiv_type.m"
    {
#line 151 "equiv_type.m"
      parse_tree__equiv_type__replace_in_item_blocks__ho3_13_p_0(parse_tree__equiv_type__ModuleName_18, *parse_tree__equiv_type__TypeEqvMap_14, parse_tree__equiv_type__InstEqvMap_26, parse_tree__equiv_type__IndirectIntItemBlocks0_23, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), &parse_tree__equiv_type__RevIndirectIntItemBlocks_29, parse_tree__equiv_type__STATE_VARIABLE_RecompInfo_64_64, &parse_tree__equiv_type__STATE_VARIABLE_RecompInfo_69_69, parse_tree__equiv_type__STATE_VARIABLE_UsedModules_65_65, &parse_tree__equiv_type__STATE_VARIABLE_UsedModules_70_70, parse_tree__equiv_type__STATE_VARIABLE_Specs_66_66, &parse_tree__equiv_type__STATE_VARIABLE_Specs_71_71);
    }
#line 155 "equiv_type.m"
    {
#line 155 "equiv_type.m"
      parse_tree__equiv_type__replace_in_item_blocks__ho2_13_p_0(parse_tree__equiv_type__ModuleName_18, *parse_tree__equiv_type__TypeEqvMap_14, parse_tree__equiv_type__InstEqvMap_26, parse_tree__equiv_type__IntForOptItemBlocks0_25, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), &parse_tree__equiv_type__RevIntForOptItemBlocks_30, parse_tree__equiv_type__STATE_VARIABLE_RecompInfo_69_69, &parse_tree__equiv_type__STATE_VARIABLE_RecompInfo_74_74, parse_tree__equiv_type__STATE_VARIABLE_UsedModules_70_70, &parse_tree__equiv_type__STATE_VARIABLE_UsedModules_75_75, parse_tree__equiv_type__STATE_VARIABLE_Specs_71_71, &parse_tree__equiv_type__STATE_VARIABLE_Specs_76_76);
    }
#line 159 "equiv_type.m"
    {
#line 159 "equiv_type.m"
      parse_tree__equiv_type__replace_in_item_blocks__ho1_13_p_0(parse_tree__equiv_type__ModuleName_18, *parse_tree__equiv_type__TypeEqvMap_14, parse_tree__equiv_type__InstEqvMap_26, parse_tree__equiv_type__OptItemBlocks0_24, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), &parse_tree__equiv_type__RevOptItemBlocks_31, parse_tree__equiv_type__STATE_VARIABLE_RecompInfo_74_74, &parse_tree__equiv_type__STATE_VARIABLE_RecompInfo_79_79, parse_tree__equiv_type__STATE_VARIABLE_UsedModules_75_75, &parse_tree__equiv_type__STATE_VARIABLE_UsedModules_80_80, parse_tree__equiv_type__STATE_VARIABLE_Specs_76_76, &parse_tree__equiv_type__STATE_VARIABLE_Specs_81_81);
    }
#line 163 "equiv_type.m"
    {
#line 163 "equiv_type.m"
      mercury__list__reverse_2_p_0((MR_Word) &parse_tree__equiv_type_scalar_common_1[0], parse_tree__equiv_type__RevSrcItemBlocks_27, &parse_tree__equiv_type__SrcItemBlocks_32);
    }
#line 13304 "parse_tree.equiv_type.c"
    parse_tree__equiv_type__TypeInfo_108_108 = (MR_Word) &parse_tree__equiv_type_scalar_common_1[1];
#line 164 "equiv_type.m"
    {
#line 164 "equiv_type.m"
      mercury__list__reverse_2_p_0(parse_tree__equiv_type__TypeInfo_108_108, parse_tree__equiv_type__RevDirectIntItemBlocks_28, &parse_tree__equiv_type__DirectIntItemBlocks_33);
    }
#line 165 "equiv_type.m"
    {
#line 165 "equiv_type.m"
      mercury__list__reverse_2_p_0(parse_tree__equiv_type__TypeInfo_108_108, parse_tree__equiv_type__RevIndirectIntItemBlocks_29, &parse_tree__equiv_type__IndirectIntItemBlocks_34);
    }
#line 166 "equiv_type.m"
    {
#line 166 "equiv_type.m"
      mercury__list__reverse_2_p_0((MR_Word) &parse_tree__equiv_type_scalar_common_1[2], parse_tree__equiv_type__RevOptItemBlocks_31, &parse_tree__equiv_type__OptItemBlocks_35);
    }
#line 167 "equiv_type.m"
    {
#line 167 "equiv_type.m"
      mercury__list__reverse_2_p_0((MR_Word) &parse_tree__equiv_type_scalar_common_1[3], parse_tree__equiv_type__RevIntForOptItemBlocks_30, &parse_tree__equiv_type__IntForOptItemBlocks_36);
    }
#line 168 "equiv_type.m"
    {
#line 168 "equiv_type.m"
      MR_Word base;
#line 168 "equiv_type.m"
      base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 8 * sizeof(MR_Word)), NULL, NULL);
#line 168 "equiv_type.m"
      *parse_tree__equiv_type__AugCompUnit_11 = base;
#line 168 "equiv_type.m"
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (parse_tree__equiv_type__ModuleName_18));
#line 168 "equiv_type.m"
      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (parse_tree__equiv_type__ModuleNameContext_19));
#line 168 "equiv_type.m"
      MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (parse_tree__equiv_type__ModuleVersionNumbers_20));
#line 168 "equiv_type.m"
      MR_hl_field(MR_mktag(0), base, 3) = ((MR_Box) (parse_tree__equiv_type__SrcItemBlocks_32));
#line 168 "equiv_type.m"
      MR_hl_field(MR_mktag(0), base, 4) = ((MR_Box) (parse_tree__equiv_type__DirectIntItemBlocks_33));
#line 168 "equiv_type.m"
      MR_hl_field(MR_mktag(0), base, 5) = ((MR_Box) (parse_tree__equiv_type__IndirectIntItemBlocks_34));
#line 168 "equiv_type.m"
      MR_hl_field(MR_mktag(0), base, 6) = ((MR_Box) (parse_tree__equiv_type__OptItemBlocks_35));
#line 168 "equiv_type.m"
      MR_hl_field(MR_mktag(0), base, 7) = ((MR_Box) (parse_tree__equiv_type__IntForOptItemBlocks_36));
#line 168 "equiv_type.m"
    }
#line 13352 "parse_tree.equiv_type.c"
    parse_tree__equiv_type__TypeCtorInfo_111_111 = (MR_Word) &mercury__builtin__builtin__type_ctor_info_string_0;
#line 13354 "parse_tree.equiv_type.c"
    parse_tree__equiv_type__TypeCtorInfo_112_112 = (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_event_spec_0;
#line 173 "equiv_type.m"
    {
#line 173 "equiv_type.m"
      mercury__map__to_assoc_list_2_p_0(parse_tree__equiv_type__TypeCtorInfo_111_111, parse_tree__equiv_type__TypeCtorInfo_112_112, parse_tree__equiv_type__EventSpecMap0_12, &parse_tree__equiv_type__EventSpecList0_37);
    }
#line 174 "equiv_type.m"
    {
#line 174 "equiv_type.m"
      parse_tree__equiv_type__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_114_101_112_108_97_99_101_95_105_110_95_101_118_101_110_116_95_115_112_101_99_115_95_95_91_52_93_95_48_10_p_0(parse_tree__equiv_type__EventSpecList0_37, &parse_tree__equiv_type__EventSpecList_38, *parse_tree__equiv_type__TypeEqvMap_14, parse_tree__equiv_type__STATE_VARIABLE_RecompInfo_79_79, parse_tree__equiv_type__STATE_VARIABLE_RecompInfo_41, parse_tree__equiv_type__STATE_VARIABLE_UsedModules_80_80, parse_tree__equiv_type__STATE_VARIABLE_UsedModules_39, parse_tree__equiv_type__STATE_VARIABLE_Specs_81_81, parse_tree__equiv_type__STATE_VARIABLE_Specs_42);
    }
#line 176 "equiv_type.m"
    {
#line 176 "equiv_type.m"
      mercury__map__from_sorted_assoc_list_2_p_0(parse_tree__equiv_type__TypeCtorInfo_111_111, parse_tree__equiv_type__TypeCtorInfo_112_112, parse_tree__equiv_type__EventSpecList_38, parse_tree__equiv_type__EventSpecMap_13);
#line 176 "equiv_type.m"
      return;
    }
#line 115 "equiv_type.m"
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
