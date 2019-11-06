/*
** Automatically generated from `decide_type_repn.m'
** by the Mercury compiler,
** version rotd-2019-11-06
** configured for x86_64-pc-linux-gnu.
** Do not edit.
**
** The autoconfigured grade settings governing
** the generation of this C file were
**
** TAG_BITS=2
** UNBOXED_FLOAT=no
** UNBOXED_INT64S=no
** PREGENERATED_DIST=yes
** HIGHLEVEL_CODE=yes
**
** END_OF_C_GRADE_INFO
*/


// :- module parse_tree.decide_type_repn.
// :- implementation.

/*
INIT mercury__parse_tree__decide_type_repn__init
ENDINIT
*/

#include "parse_tree.decide_type_repn.mih"


#include "libs.mih"
#include "mdbcomp.mih"
#include "parse_tree.mih"
#include "recompilation.mih"
#include "libs.globals.mih"
#include "libs.options.mih"
#include "libs.timestamp.mih"
#include "mdbcomp.prim_data.mih"
#include "mdbcomp.sym_name.mih"
#include "array.mih"
#include "assoc_list.mih"
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
#include "multi_map.mih"
#include "ops.mih"
#include "pair.mih"
#include "pretty_printer.mih"
#include "private_builtin.mih"
#include "set.mih"
#include "set_ordlist.mih"
#include "set_tree234.mih"
#include "stream.mih"
#include "string.mih"
#include "term.mih"
#include "time.mih"
#include "tree234.mih"
#include "type_desc.mih"
#include "unit.mih"
#include "univ.mih"
#include "varset.mih"
#include "parse_tree.check_parse_tree_type_defns.mih"
#include "parse_tree.error_util.mih"
#include "parse_tree.file_kind.mih"
#include "parse_tree.maybe_error.mih"
#include "parse_tree.prog_data.mih"
#include "parse_tree.prog_data_foreign.mih"
#include "parse_tree.prog_data_pragma.mih"
#include "parse_tree.prog_item.mih"
#include "parse_tree.set_of_var.mih"




static const MR_FA_PseudoTypeInfo_Struct2 parse_tree__decide_type_repn__tree234__pti_tree234_2__plain_parse_tree__prog_data__type_ctor_info_type_ctor_0__plain_parse_tree__prog_item__type_ctor_info_item_type_repn_info_0;

static const MR_FA_TypeInfo_Struct1 parse_tree__decide_type_repn__parse_tree__prog_item__ti_item_type_defn_info_general_1parse_tree__prog_data__type_ctor_info_type_details_eqv_0;

static const MR_FA_PseudoTypeInfo_Struct2 parse_tree__decide_type_repn__tree234__pti_tree234_2__plain_parse_tree__prog_data__type_ctor_info_type_ctor_0__plain_parse_tree__prog_item__ti_item_type_defn_info_general_1parse_tree__prog_data__type_ctor_info_type_details_eqv_0;

static const MR_FA_PseudoTypeInfo_Struct2 parse_tree__decide_type_repn__tree234__pti_tree234_2__plain_parse_tree__prog_data__type_ctor_info_type_ctor_0__plain_parse_tree__decide_type_repn__type_ctor_info_maybe_word_alignment_0;

static const MR_FA_PseudoTypeInfo_Struct1 parse_tree__decide_type_repn__set_tree234__pti_set_tree234_1__plain_parse_tree__prog_data__type_ctor_info_type_ctor_0;

static const MR_FA_PseudoTypeInfo_Struct1 parse_tree__decide_type_repn__cord__pti_cord_1__plain_parse_tree__prog_item__type_ctor_info_item_type_repn_info_0;

static const MR_FA_PseudoTypeInfo_Struct1 parse_tree__decide_type_repn__parse_tree__prog_item__pti_item_type_defn_info_general_1__plain_parse_tree__prog_data__type_ctor_info_type_details_eqv_0;

static const MR_FA_TypeInfo_Struct2 parse_tree__decide_type_repn__tree234__ti_tree234_2parse_tree__prog_data__type_ctor_info_type_ctor_0parse_tree__prog_item__ti_item_type_defn_info_general_1parse_tree__prog_data__type_ctor_info_type_details_eqv_0;

static const MR_EnumFunctorDesc parse_tree__decide_type_repn__parse_tree__decide_type_repn__enum_functor_desc_maybe_word_alignment_0_0;

static const MR_EnumFunctorDesc parse_tree__decide_type_repn__parse_tree__decide_type_repn__enum_functor_desc_maybe_word_alignment_0_1;

static const MR_EnumFunctorDescPtr parse_tree__decide_type_repn__parse_tree__decide_type_repn__enum_value_ordered_maybe_word_alignment_0[2];

static const MR_EnumFunctorDescPtr parse_tree__decide_type_repn__parse_tree__decide_type_repn__enum_name_ordered_maybe_word_alignment_0[2];

static const MR_Integer parse_tree__decide_type_repn__parse_tree__decide_type_repn__functor_number_map_maybe_word_alignment_0[2];

static const MR_FA_TypeInfo_Struct2 parse_tree__decide_type_repn__tree234__ti_tree234_2parse_tree__prog_data__type_ctor_info_type_ctor_0parse_tree__decide_type_repn__type_ctor_info_maybe_word_alignment_0;

static void MR_CALL 
parse_tree__decide_type_repn____Compare____word_alignment_map_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3);

static MR_bool MR_CALL 
parse_tree__decide_type_repn____Unify____word_alignment_map_0_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2);

static void MR_CALL 
parse_tree__decide_type_repn____Compare____maybe_word_alignment_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3);

static MR_bool MR_CALL 
parse_tree__decide_type_repn____Unify____maybe_word_alignment_0_0(
  MR_Word HeadVar__2_1,
  MR_Word HeadVar__2_2);

static void MR_CALL 
parse_tree__decide_type_repn____Compare____eqv_map_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3);

static MR_bool MR_CALL 
parse_tree__decide_type_repn____Unify____eqv_map_0_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2);

static void MR_CALL 
parse_tree__decide_type_repn__add_eqv_repn_item_3_p_0(
  MR_Word DefnItem_4,
  MR_Word STATE_VARIABLE_Items_0_13,
  MR_Word * STATE_VARIABLE_Items_14);

static void MR_CALL 
parse_tree__decide_type_repn__maybe_add_word_aligned_repn_item_4_p_0(
  MR_Word TypeCtor_5,
  MR_Word WordAligned_6,
  MR_Word STATE_VARIABLE_Items_0_14,
  MR_Word * STATE_VARIABLE_Items_15);

static void MR_CALL 
parse_tree__decide_type_repn__add_type_repn_item_3_p_0(
  MR_Word RepnItem_4,
  MR_Word STATE_VARIABLE_Items_0_6,
  MR_Word * STATE_VARIABLE_Items_7);

static void MR_CALL 
parse_tree__decide_type_repn__decide_type_repns_stage_1_10_p_0(
  MR_Word TypeCtor_11,
  MR_Word CheckedDefn_12,
  MR_Word STATE_VARIABLE_RepnMap_0_30,
  MR_Word * STATE_VARIABLE_RepnMap_31,
  MR_Word STATE_VARIABLE_EqvMap_0_32,
  MR_Word * STATE_VARIABLE_EqvMap_33,
  MR_Word STATE_VARIABLE_WordAlignedMap_0_34,
  MR_Word * STATE_VARIABLE_WordAlignedMap_35,
  MR_Word STATE_VARIABLE_ExportedTypes_0_36,
  MR_Word * STATE_VARIABLE_ExportedTypes_37);

static void MR_CALL 
parse_tree__decide_type_repn__decide_type_repns_stage_1_du_not_all_plain_constants_7_p_0(
  MR_Word TypeCtor_8,
  MR_Word DuDefn_9,
  MR_Word MaybeDefnCJCsE_10,
  MR_Word STATE_VARIABLE_WordAlignmentMap_0_41,
  MR_Word * STATE_VARIABLE_WordAlignmentMap_42,
  MR_Word STATE_VARIABLE_TypeRepnMap_0_43,
  MR_Word * STATE_VARIABLE_TypeRepnMap_44);

static void MR_CALL 
parse_tree__decide_type_repn__decide_type_repns_foreign_defns_2_p_0(
  MR_Word MaybeDefnCJCsE_3,
  MR_Word * MaybeRepnCJCsE_4);

static void MR_CALL 
parse_tree__decide_type_repn__decide_type_repns_stage_1_du_all_plain_constants_9_p_0(
  MR_Word TypeCtor_10,
  MR_Word DuDefn_11,
  MR_String HeadName_12,
  MR_Word TailNames_13,
  MR_Word MaybeDefnOrEnumCJCsE_14,
  MR_Word STATE_VARIABLE_WordAlignmentMap_0_30,
  MR_Word * STATE_VARIABLE_WordAlignmentMap_31,
  MR_Word STATE_VARIABLE_TypeRepnMap_0_32,
  MR_Word * STATE_VARIABLE_TypeRepnMap_33);

static void MR_CALL 
parse_tree__decide_type_repn__decide_type_repns_foreign_defns_or_enums_2_p_0(
  MR_Word MaybeDefnOrEnumCJCsE_3,
  MR_Word * MaybeRepnCJCsE_4);

static void MR_CALL 
parse_tree__decide_type_repn__represent_maybe_foreign_defn_or_enum_2_p_0(
  MR_Word MaybeForeignDefnOrEnum_3,
  MR_Word * MaybeEnumForeignRepn_4);

static void MR_CALL 
parse_tree__decide_type_repn__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_100_101_99_105_100_101_95_114_101_112_110_115_95_102_111_114_95_115_105_109_112_108_101_95_116_121_112_101_115_95_102_111_114_95_105_110_116_51_95_95_91_49_93_95_48_3_p_0_4(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3);

static void MR_CALL 
parse_tree__decide_type_repn__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_100_101_99_105_100_101_95_114_101_112_110_115_95_102_111_114_95_115_105_109_112_108_101_95_116_121_112_101_115_95_102_111_114_95_105_110_116_51_95_95_91_49_93_95_48_3_p_0_3(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box * wrapper_arg_4);

static void MR_CALL 
parse_tree__decide_type_repn__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_100_101_99_105_100_101_95_114_101_112_110_115_95_102_111_114_95_115_105_109_112_108_101_95_116_121_112_101_115_95_102_111_114_95_105_110_116_51_95_95_91_49_93_95_48_3_p_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3);

static void MR_CALL 
parse_tree__decide_type_repn__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_100_101_99_105_100_101_95_114_101_112_110_115_95_102_111_114_95_115_105_109_112_108_101_95_116_121_112_101_115_95_102_111_114_95_105_110_116_51_95_95_91_49_93_95_48_3_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box * wrapper_arg_4,
  MR_Box wrapper_arg_5,
  MR_Box * wrapper_arg_6,
  MR_Box wrapper_arg_7,
  MR_Box * wrapper_arg_8,
  MR_Box wrapper_arg_9,
  MR_Box * wrapper_arg_10);

static MR_bool MR_CALL 
parse_tree__decide_type_repn____Unify____eqv_map_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2);

static void MR_CALL 
parse_tree__decide_type_repn____Compare____eqv_map_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3);

static MR_bool MR_CALL 
parse_tree__decide_type_repn____Unify____maybe_word_alignment_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2);

static void MR_CALL 
parse_tree__decide_type_repn____Compare____maybe_word_alignment_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3);

static MR_bool MR_CALL 
parse_tree__decide_type_repn____Unify____word_alignment_map_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2);

static void MR_CALL 
parse_tree__decide_type_repn____Compare____word_alignment_map_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3);


static /* final */ const MR_Box parse_tree__decide_type_repn_scalar_common_1[3][2];

static /* final */ const MR_Box parse_tree__decide_type_repn_scalar_common_2[7][3];

static /* final */ const MR_Box parse_tree__decide_type_repn_scalar_common_3[1][13];

static /* final */ const MR_Box parse_tree__decide_type_repn_scalar_common_4[2][6];

static /* final */ const MR_Box parse_tree__decide_type_repn_scalar_common_5[1][7];




static /* final */ const MR_Box parse_tree__decide_type_repn_scalar_common_1[3][2] = {
  /* row 0 */
  {
    ((MR_Box) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_type_defn_info_general_1)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_type_details_eqv_0))
  },
  /* row 1 */
  {
    ((MR_Box) (&mercury__set_tree234__set_tree234__type_ctor_info_set_tree234_1)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_type_ctor_0))
  },
  /* row 2 */
  {
    ((MR_Box) (&mercury__cord__cord__type_ctor_info_cord_1)),
    ((MR_Box) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_type_repn_info_0))
  },
};

static /* final */ const MR_Box parse_tree__decide_type_repn_scalar_common_2[7][3] = {
  /* row 0 */
  {
    ((MR_Box) (&mercury__tree234__tree234__type_ctor_info_tree234_2)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_type_ctor_0)),
    ((MR_Box) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_type_repn_info_0))
  },
  /* row 1 */
  {
    ((MR_Box) (&mercury__tree234__tree234__type_ctor_info_tree234_2)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_type_ctor_0)),
    ((MR_Box) (&parse_tree__decide_type_repn_scalar_common_1[0]))
  },
  /* row 2 */
  {
    ((MR_Box) (&mercury__tree234__tree234__type_ctor_info_tree234_2)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_type_ctor_0)),
    ((MR_Box) (&parse_tree__decide_type_repn__parse_tree__decide_type_repn__type_ctor_info_maybe_word_alignment_0))
  },
  /* row 3 */
  {
    ((MR_Box) (&parse_tree__decide_type_repn_scalar_common_3[0])),
    ((MR_Box) (parse_tree__decide_type_repn__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_100_101_99_105_100_101_95_114_101_112_110_115_95_102_111_114_95_115_105_109_112_108_101_95_116_121_112_101_115_95_102_111_114_95_105_110_116_51_95_95_91_49_93_95_48_3_p_0_1)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row 4 */
  {
    ((MR_Box) (&parse_tree__decide_type_repn_scalar_common_4[0])),
    ((MR_Box) (parse_tree__decide_type_repn__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_100_101_99_105_100_101_95_114_101_112_110_115_95_102_111_114_95_115_105_109_112_108_101_95_116_121_112_101_115_95_102_111_114_95_105_110_116_51_95_95_91_49_93_95_48_3_p_0_2)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row 5 */
  {
    ((MR_Box) (&parse_tree__decide_type_repn_scalar_common_5[0])),
    ((MR_Box) (parse_tree__decide_type_repn__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_100_101_99_105_100_101_95_114_101_112_110_115_95_102_111_114_95_115_105_109_112_108_101_95_116_121_112_101_115_95_102_111_114_95_105_110_116_51_95_95_91_49_93_95_48_3_p_0_3)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row 6 */
  {
    ((MR_Box) (&parse_tree__decide_type_repn_scalar_common_4[1])),
    ((MR_Box) (parse_tree__decide_type_repn__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_100_101_99_105_100_101_95_114_101_112_110_115_95_102_111_114_95_115_105_109_112_108_101_95_116_121_112_101_115_95_102_111_114_95_105_110_116_51_95_95_91_49_93_95_48_3_p_0_4)),
    ((MR_Box) ((MR_Integer) 0))
  },
};

static /* final */ const MR_Box parse_tree__decide_type_repn_scalar_common_3[1][13] = {
  /* row 0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 10)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_type_ctor_0)),
    ((MR_Box) (&parse_tree__check_parse_tree_type_defns__parse_tree__check_parse_tree_type_defns__type_ctor_info_type_ctor_checked_defn_0)),
    ((MR_Box) (&parse_tree__decide_type_repn__tree234__pti_tree234_2__plain_parse_tree__prog_data__type_ctor_info_type_ctor_0__plain_parse_tree__prog_item__type_ctor_info_item_type_repn_info_0)),
    ((MR_Box) (&parse_tree__decide_type_repn__tree234__pti_tree234_2__plain_parse_tree__prog_data__type_ctor_info_type_ctor_0__plain_parse_tree__prog_item__type_ctor_info_item_type_repn_info_0)),
    ((MR_Box) (&parse_tree__decide_type_repn__tree234__pti_tree234_2__plain_parse_tree__prog_data__type_ctor_info_type_ctor_0__plain_parse_tree__prog_item__ti_item_type_defn_info_general_1parse_tree__prog_data__type_ctor_info_type_details_eqv_0)),
    ((MR_Box) (&parse_tree__decide_type_repn__tree234__pti_tree234_2__plain_parse_tree__prog_data__type_ctor_info_type_ctor_0__plain_parse_tree__prog_item__ti_item_type_defn_info_general_1parse_tree__prog_data__type_ctor_info_type_details_eqv_0)),
    ((MR_Box) (&parse_tree__decide_type_repn__tree234__pti_tree234_2__plain_parse_tree__prog_data__type_ctor_info_type_ctor_0__plain_parse_tree__decide_type_repn__type_ctor_info_maybe_word_alignment_0)),
    ((MR_Box) (&parse_tree__decide_type_repn__tree234__pti_tree234_2__plain_parse_tree__prog_data__type_ctor_info_type_ctor_0__plain_parse_tree__decide_type_repn__type_ctor_info_maybe_word_alignment_0)),
    ((MR_Box) (&parse_tree__decide_type_repn__set_tree234__pti_set_tree234_1__plain_parse_tree__prog_data__type_ctor_info_type_ctor_0)),
    ((MR_Box) (&parse_tree__decide_type_repn__set_tree234__pti_set_tree234_1__plain_parse_tree__prog_data__type_ctor_info_type_ctor_0))
  },
};

static /* final */ const MR_Box parse_tree__decide_type_repn_scalar_common_4[2][6] = {
  /* row 0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 3)),
    ((MR_Box) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_type_repn_info_0)),
    ((MR_Box) (&parse_tree__decide_type_repn__cord__pti_cord_1__plain_parse_tree__prog_item__type_ctor_info_item_type_repn_info_0)),
    ((MR_Box) (&parse_tree__decide_type_repn__cord__pti_cord_1__plain_parse_tree__prog_item__type_ctor_info_item_type_repn_info_0))
  },
  /* row 1 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 3)),
    ((MR_Box) (&parse_tree__decide_type_repn__parse_tree__prog_item__pti_item_type_defn_info_general_1__plain_parse_tree__prog_data__type_ctor_info_type_details_eqv_0)),
    ((MR_Box) (&parse_tree__decide_type_repn__cord__pti_cord_1__plain_parse_tree__prog_item__type_ctor_info_item_type_repn_info_0)),
    ((MR_Box) (&parse_tree__decide_type_repn__cord__pti_cord_1__plain_parse_tree__prog_item__type_ctor_info_item_type_repn_info_0))
  },
};

static /* final */ const MR_Box parse_tree__decide_type_repn_scalar_common_5[1][7] = {
  /* row 0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 4)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_type_ctor_0)),
    ((MR_Box) (&parse_tree__decide_type_repn__parse_tree__decide_type_repn__type_ctor_info_maybe_word_alignment_0)),
    ((MR_Box) (&parse_tree__decide_type_repn__cord__pti_cord_1__plain_parse_tree__prog_item__type_ctor_info_item_type_repn_info_0)),
    ((MR_Box) (&parse_tree__decide_type_repn__cord__pti_cord_1__plain_parse_tree__prog_item__type_ctor_info_item_type_repn_info_0))
  },
};



#include "array.mh"
#include "bitmap.mh"
#include "io.mh"
#include "string.mh"
#include "time.mh"



static const MR_FA_PseudoTypeInfo_Struct2 parse_tree__decide_type_repn__tree234__pti_tree234_2__plain_parse_tree__prog_data__type_ctor_info_type_ctor_0__plain_parse_tree__prog_item__type_ctor_info_item_type_repn_info_0 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_PseudoTypeInfo) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_type_ctor_0),
    (MR_PseudoTypeInfo) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_type_repn_info_0)
  }
};

static const MR_FA_TypeInfo_Struct1 parse_tree__decide_type_repn__parse_tree__prog_item__ti_item_type_defn_info_general_1parse_tree__prog_data__type_ctor_info_type_details_eqv_0 = {
  &parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_type_defn_info_general_1,
  {
    (MR_TypeInfo) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_type_details_eqv_0)
  }
};

static const MR_FA_PseudoTypeInfo_Struct2 parse_tree__decide_type_repn__tree234__pti_tree234_2__plain_parse_tree__prog_data__type_ctor_info_type_ctor_0__plain_parse_tree__prog_item__ti_item_type_defn_info_general_1parse_tree__prog_data__type_ctor_info_type_details_eqv_0 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_PseudoTypeInfo) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_type_ctor_0),
    (MR_PseudoTypeInfo) (&parse_tree__decide_type_repn__parse_tree__prog_item__ti_item_type_defn_info_general_1parse_tree__prog_data__type_ctor_info_type_details_eqv_0)
  }
};

static const MR_FA_PseudoTypeInfo_Struct2 parse_tree__decide_type_repn__tree234__pti_tree234_2__plain_parse_tree__prog_data__type_ctor_info_type_ctor_0__plain_parse_tree__decide_type_repn__type_ctor_info_maybe_word_alignment_0 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_PseudoTypeInfo) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_type_ctor_0),
    (MR_PseudoTypeInfo) (&parse_tree__decide_type_repn__parse_tree__decide_type_repn__type_ctor_info_maybe_word_alignment_0)
  }
};

static const MR_FA_PseudoTypeInfo_Struct1 parse_tree__decide_type_repn__set_tree234__pti_set_tree234_1__plain_parse_tree__prog_data__type_ctor_info_type_ctor_0 = {
  &mercury__set_tree234__set_tree234__type_ctor_info_set_tree234_1,
  {
    (MR_PseudoTypeInfo) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_type_ctor_0)
  }
};

static const MR_FA_PseudoTypeInfo_Struct1 parse_tree__decide_type_repn__cord__pti_cord_1__plain_parse_tree__prog_item__type_ctor_info_item_type_repn_info_0 = {
  &mercury__cord__cord__type_ctor_info_cord_1,
  {
    (MR_PseudoTypeInfo) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_type_repn_info_0)
  }
};

static const MR_FA_PseudoTypeInfo_Struct1 parse_tree__decide_type_repn__parse_tree__prog_item__pti_item_type_defn_info_general_1__plain_parse_tree__prog_data__type_ctor_info_type_details_eqv_0 = {
  &parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_type_defn_info_general_1,
  {
    (MR_PseudoTypeInfo) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_type_details_eqv_0)
  }
};

static const MR_FA_TypeInfo_Struct2 parse_tree__decide_type_repn__tree234__ti_tree234_2parse_tree__prog_data__type_ctor_info_type_ctor_0parse_tree__prog_item__ti_item_type_defn_info_general_1parse_tree__prog_data__type_ctor_info_type_details_eqv_0 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_TypeInfo) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_type_ctor_0),
    (MR_TypeInfo) (&parse_tree__decide_type_repn__parse_tree__prog_item__ti_item_type_defn_info_general_1parse_tree__prog_data__type_ctor_info_type_details_eqv_0)
  }
};

const MR_TypeCtorInfo_Struct parse_tree__decide_type_repn__parse_tree__decide_type_repn__type_ctor_info_eqv_map_0 = {
  (MR_Integer) 0,
  UINT8_C(17),
  INT8_C(-1),
  MR_TYPECTOR_REP_EQUIV_GROUND,
  ((MR_Box) (parse_tree__decide_type_repn____Unify____eqv_map_0_0_10001)),
  ((MR_Box) (parse_tree__decide_type_repn____Compare____eqv_map_0_0_10001)),
  (MR_String) "parse_tree.decide_type_repn",
  (MR_String) "eqv_map",
  {     NULL },
  {     (MR_PseudoTypeInfo) (&parse_tree__decide_type_repn__tree234__ti_tree234_2parse_tree__prog_data__type_ctor_info_type_ctor_0parse_tree__prog_item__ti_item_type_defn_info_general_1parse_tree__prog_data__type_ctor_info_type_details_eqv_0) },
  (MR_Integer) -1,
  UINT16_C(0),
  NULL
};

static const MR_EnumFunctorDesc parse_tree__decide_type_repn__parse_tree__decide_type_repn__enum_functor_desc_maybe_word_alignment_0_0 = {
  (MR_String) "need_not_be_word_aligned",
  INT32_C(0)
};

static const MR_EnumFunctorDesc parse_tree__decide_type_repn__parse_tree__decide_type_repn__enum_functor_desc_maybe_word_alignment_0_1 = {
  (MR_String) "must_be_word_aligned",
  INT32_C(1)
};

static const MR_EnumFunctorDescPtr parse_tree__decide_type_repn__parse_tree__decide_type_repn__enum_value_ordered_maybe_word_alignment_0[2] = {
  &parse_tree__decide_type_repn__parse_tree__decide_type_repn__enum_functor_desc_maybe_word_alignment_0_0,
  &parse_tree__decide_type_repn__parse_tree__decide_type_repn__enum_functor_desc_maybe_word_alignment_0_1
};

static const MR_EnumFunctorDescPtr parse_tree__decide_type_repn__parse_tree__decide_type_repn__enum_name_ordered_maybe_word_alignment_0[2] = {
  &parse_tree__decide_type_repn__parse_tree__decide_type_repn__enum_functor_desc_maybe_word_alignment_0_1,
  &parse_tree__decide_type_repn__parse_tree__decide_type_repn__enum_functor_desc_maybe_word_alignment_0_0
};

static const MR_Integer parse_tree__decide_type_repn__parse_tree__decide_type_repn__functor_number_map_maybe_word_alignment_0[2] = {
  (MR_Integer) 1,
  (MR_Integer) 0
};

const MR_TypeCtorInfo_Struct parse_tree__decide_type_repn__parse_tree__decide_type_repn__type_ctor_info_maybe_word_alignment_0 = {
  (MR_Integer) 0,
  UINT8_C(17),
  INT8_C(-1),
  MR_TYPECTOR_REP_ENUM,
  ((MR_Box) (parse_tree__decide_type_repn____Unify____maybe_word_alignment_0_0_10001)),
  ((MR_Box) (parse_tree__decide_type_repn____Compare____maybe_word_alignment_0_0_10001)),
  (MR_String) "parse_tree.decide_type_repn",
  (MR_String) "maybe_word_alignment",
  {     parse_tree__decide_type_repn__parse_tree__decide_type_repn__enum_name_ordered_maybe_word_alignment_0 },
  {     parse_tree__decide_type_repn__parse_tree__decide_type_repn__enum_value_ordered_maybe_word_alignment_0 },
  (MR_Integer) 2,
  UINT16_C(4),
  parse_tree__decide_type_repn__parse_tree__decide_type_repn__functor_number_map_maybe_word_alignment_0
};

static const MR_FA_TypeInfo_Struct2 parse_tree__decide_type_repn__tree234__ti_tree234_2parse_tree__prog_data__type_ctor_info_type_ctor_0parse_tree__decide_type_repn__type_ctor_info_maybe_word_alignment_0 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_TypeInfo) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_type_ctor_0),
    (MR_TypeInfo) (&parse_tree__decide_type_repn__parse_tree__decide_type_repn__type_ctor_info_maybe_word_alignment_0)
  }
};

const MR_TypeCtorInfo_Struct parse_tree__decide_type_repn__parse_tree__decide_type_repn__type_ctor_info_word_alignment_map_0 = {
  (MR_Integer) 0,
  UINT8_C(17),
  INT8_C(-1),
  MR_TYPECTOR_REP_EQUIV_GROUND,
  ((MR_Box) (parse_tree__decide_type_repn____Unify____word_alignment_map_0_0_10001)),
  ((MR_Box) (parse_tree__decide_type_repn____Compare____word_alignment_map_0_0_10001)),
  (MR_String) "parse_tree.decide_type_repn",
  (MR_String) "word_alignment_map",
  {     NULL },
  {     (MR_PseudoTypeInfo) (&parse_tree__decide_type_repn__tree234__ti_tree234_2parse_tree__prog_data__type_ctor_info_type_ctor_0parse_tree__decide_type_repn__type_ctor_info_maybe_word_alignment_0) },
  (MR_Integer) -1,
  UINT16_C(0),
  NULL
};

static void MR_CALL 
parse_tree__decide_type_repn____Compare____word_alignment_map_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3)
{
  {
    MR_Word Cast_HeadVar1_4 = HeadVar__2_2;
    MR_Word Cast_HeadVar2_5 = HeadVar__3_3;

    mercury__builtin__compare_3_p_0((MR_Word) (&parse_tree__decide_type_repn_scalar_common_2[2]), HeadVar__1_1, ((MR_Box) (Cast_HeadVar1_4)), ((MR_Box) (Cast_HeadVar2_5)));
  }
}

static MR_bool MR_CALL 
parse_tree__decide_type_repn____Unify____word_alignment_map_0_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2)
{
  {
    MR_bool succeeded;
    MR_Word Cast_HeadVar1_3 = HeadVar__1_1;
    MR_Word Cast_HeadVar2_4 = HeadVar__2_2;

    succeeded = mercury__builtin__unify_2_p_0((MR_Word) (&parse_tree__decide_type_repn_scalar_common_2[2]), ((MR_Box) (Cast_HeadVar1_3)), ((MR_Box) (Cast_HeadVar2_4)));
    return succeeded;
  }
}

static void MR_CALL 
parse_tree__decide_type_repn____Compare____maybe_word_alignment_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3)
{
  {
    MR_bool succeeded;
    MR_Integer Cast_HeadVar1_4 = (MR_Integer) (HeadVar__2_2);
    MR_Integer Cast_HeadVar2_5 = (MR_Integer) (HeadVar__3_3);

    succeeded = (Cast_HeadVar1_4 < Cast_HeadVar2_5);
    if (succeeded)
      *HeadVar__1_1 = (MR_Integer) 1;
    else
    {
      succeeded = (Cast_HeadVar1_4 > Cast_HeadVar2_5);
      if (succeeded)
        *HeadVar__1_1 = (MR_Integer) 2;
      else
        *HeadVar__1_1 = (MR_Integer) 0;
    }
  }
}

static MR_bool MR_CALL 
parse_tree__decide_type_repn____Unify____maybe_word_alignment_0_0(
  MR_Word HeadVar__2_1,
  MR_Word HeadVar__2_2)
{
  {
    MR_bool succeeded = (HeadVar__2_1 == HeadVar__2_2);

    return succeeded;
  }
}

static void MR_CALL 
parse_tree__decide_type_repn____Compare____eqv_map_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3)
{
  {
    MR_Word Cast_HeadVar1_4 = HeadVar__2_2;
    MR_Word Cast_HeadVar2_5 = HeadVar__3_3;

    mercury__builtin__compare_3_p_0((MR_Word) (&parse_tree__decide_type_repn_scalar_common_2[1]), HeadVar__1_1, ((MR_Box) (Cast_HeadVar1_4)), ((MR_Box) (Cast_HeadVar2_5)));
  }
}

static MR_bool MR_CALL 
parse_tree__decide_type_repn____Unify____eqv_map_0_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2)
{
  {
    MR_bool succeeded;
    MR_Word Cast_HeadVar1_3 = HeadVar__1_1;
    MR_Word Cast_HeadVar2_4 = HeadVar__2_2;

    succeeded = mercury__builtin__unify_2_p_0((MR_Word) (&parse_tree__decide_type_repn_scalar_common_2[1]), ((MR_Box) (Cast_HeadVar1_3)), ((MR_Box) (Cast_HeadVar2_4)));
    return succeeded;
  }
}

static void MR_CALL 
parse_tree__decide_type_repn__add_eqv_repn_item_3_p_0(
  MR_Word DefnItem_4,
  MR_Word STATE_VARIABLE_Items_0_13,
  MR_Word * STATE_VARIABLE_Items_14)
{
  {
    MR_Word TypeCtorSymName_6 = ((MR_Word) ((MR_hl_field(MR_mktag(0), DefnItem_4, (MR_Integer) 0))));
    MR_Word TypeParams_7 = ((MR_Word) ((MR_hl_field(MR_mktag(0), DefnItem_4, (MR_Integer) 1))));
    MR_Word EqvType_8;
    MR_Word TVarSet_9 = ((MR_Word) ((MR_hl_field(MR_mktag(0), DefnItem_4, (MR_Integer) 3))));
    MR_Word Context_10 = ((MR_Word) ((MR_hl_field(MR_mktag(0), DefnItem_4, (MR_Integer) 4))));
    MR_Integer SeqNum_11 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), DefnItem_4, (MR_Integer) 5))));
    MR_Word RepnItem_12;
    MR_Word Var_15 = ((MR_Word) ((MR_hl_field(MR_mktag(0), DefnItem_4, (MR_Integer) 2))));
    MR_Word Var_16;

    EqvType_8 = (MR_Word) (Var_15);
    {
      Var_16 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(3), Var_16, 0) = ((MR_Box) ((MR_Unsigned) 0U));
      MR_hl_field(MR_mktag(3), Var_16, 1) = ((MR_Box) (EqvType_8));
    }
    {
      RepnItem_12 = (MR_Word) MR_new_object(MR_Word, (6 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), RepnItem_12, 0) = ((MR_Box) (TypeCtorSymName_6));
      MR_hl_field(MR_mktag(0), RepnItem_12, 1) = ((MR_Box) (TypeParams_7));
      MR_hl_field(MR_mktag(0), RepnItem_12, 2) = ((MR_Box) (Var_16));
      MR_hl_field(MR_mktag(0), RepnItem_12, 3) = ((MR_Box) (TVarSet_9));
      MR_hl_field(MR_mktag(0), RepnItem_12, 4) = ((MR_Box) (Context_10));
      MR_hl_field(MR_mktag(0), RepnItem_12, 5) = ((MR_Box) (SeqNum_11));
    }
    *STATE_VARIABLE_Items_14 = mercury__cord__snoc_2_f_0((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_type_repn_info_0), STATE_VARIABLE_Items_0_13, ((MR_Box) (RepnItem_12)));
  }
}

static void MR_CALL 
parse_tree__decide_type_repn__maybe_add_word_aligned_repn_item_4_p_0(
  MR_Word TypeCtor_5,
  MR_Word WordAligned_6,
  MR_Word STATE_VARIABLE_Items_0_14,
  MR_Word * STATE_VARIABLE_Items_15)
{
  switch (WordAligned_6) {
    default: /*NOTREACHED*/ MR_assert(0);
    case (MR_Integer) 1:
      {
        MR_Word TypeCtorSymName_8 = ((MR_Word) ((MR_hl_field(MR_mktag(0), TypeCtor_5, (MR_Integer) 0))));
        MR_Integer TypeCtorArity_9 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), TypeCtor_5, (MR_Integer) 1))));
        MR_Word TVarSet0_10;
        MR_Word TypeParams_11;
        MR_Word TVarSet_12;
        MR_Word Item_13;
        MR_Word Var_17;

        mercury__varset__init_1_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_tvar_type_0), &TVarSet0_10);
        mercury__varset__new_vars_4_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_tvar_type_0), TypeCtorArity_9, &TypeParams_11, TVarSet0_10, &TVarSet_12);
        Var_17 = mercury__term__context_init_0_f_0();
        {
          Item_13 = (MR_Word) MR_new_object(MR_Word, (6 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(MR_mktag(0), Item_13, 0) = ((MR_Box) (TypeCtorSymName_8));
          MR_hl_field(MR_mktag(0), Item_13, 1) = ((MR_Box) (TypeParams_11));
          MR_hl_field(MR_mktag(0), Item_13, 2) = ((MR_Box) ((MR_Unsigned) 8U));
          MR_hl_field(MR_mktag(0), Item_13, 3) = ((MR_Box) (TVarSet_12));
          MR_hl_field(MR_mktag(0), Item_13, 4) = ((MR_Box) (Var_17));
          MR_hl_field(MR_mktag(0), Item_13, 5) = ((MR_Box) ((MR_Integer) -1));
        }
        *STATE_VARIABLE_Items_15 = mercury__cord__snoc_2_f_0((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_type_repn_info_0), STATE_VARIABLE_Items_0_14, ((MR_Box) (Item_13)));
      }
      break;
    case (MR_Integer) 0:
      *STATE_VARIABLE_Items_15 = STATE_VARIABLE_Items_0_14;
      break;
  }
}

static void MR_CALL 
parse_tree__decide_type_repn__add_type_repn_item_3_p_0(
  MR_Word RepnItem_4,
  MR_Word STATE_VARIABLE_Items_0_6,
  MR_Word * STATE_VARIABLE_Items_7)
{
  *STATE_VARIABLE_Items_7 = mercury__cord__snoc_2_f_0((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_type_repn_info_0), STATE_VARIABLE_Items_0_6, ((MR_Box) (RepnItem_4)));
}

static void MR_CALL 
parse_tree__decide_type_repn__decide_type_repns_stage_1_10_p_0(
  MR_Word TypeCtor_11,
  MR_Word CheckedDefn_12,
  MR_Word STATE_VARIABLE_RepnMap_0_30,
  MR_Word * STATE_VARIABLE_RepnMap_31,
  MR_Word STATE_VARIABLE_EqvMap_0_32,
  MR_Word * STATE_VARIABLE_EqvMap_33,
  MR_Word STATE_VARIABLE_WordAlignedMap_0_34,
  MR_Word * STATE_VARIABLE_WordAlignedMap_35,
  MR_Word STATE_VARIABLE_ExportedTypes_0_36,
  MR_Word * STATE_VARIABLE_ExportedTypes_37)
{
  if (((MR_tag((MR_Word) CheckedDefn_12)) == (MR_Integer) 0))
  {
    *STATE_VARIABLE_RepnMap_31 = STATE_VARIABLE_RepnMap_0_30;
    *STATE_VARIABLE_EqvMap_33 = STATE_VARIABLE_EqvMap_0_32;
    *STATE_VARIABLE_WordAlignedMap_35 = STATE_VARIABLE_WordAlignedMap_0_34;
    *STATE_VARIABLE_ExportedTypes_37 = STATE_VARIABLE_ExportedTypes_0_36;
  }
  else
  {
    MR_Word StdDefn_18 = ((MR_Word) ((MR_hl_field(MR_mktag(1), CheckedDefn_12, (MR_Integer) 0))));

    switch (MR_tag((MR_Word) StdDefn_18)) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        {
          MR_Word EqvStatus_19 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(0), StdDefn_18, (MR_Integer) 0))) & (MR_Integer) 3);
          MR_Word EqvDefn_20 = ((MR_Word) ((MR_hl_field(MR_mktag(0), StdDefn_18, (MR_Integer) 1))));

          switch (EqvStatus_19) {
            default: /*NOTREACHED*/ MR_assert(0);
            case (MR_Integer) 1:
            case (MR_Integer) 0:
              mercury__set_tree234__insert_3_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_type_ctor_0), ((MR_Box) (TypeCtor_11)), STATE_VARIABLE_ExportedTypes_0_36, STATE_VARIABLE_ExportedTypes_37);
              break;
            case (MR_Integer) 2:
              *STATE_VARIABLE_ExportedTypes_37 = STATE_VARIABLE_ExportedTypes_0_36;
              break;
          }
          mercury__map__det_insert_4_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_type_ctor_0), (MR_Word) (&parse_tree__decide_type_repn_scalar_common_1[0]), ((MR_Box) (TypeCtor_11)), ((MR_Box) (EqvDefn_20)), STATE_VARIABLE_EqvMap_0_32, STATE_VARIABLE_EqvMap_33);
          *STATE_VARIABLE_RepnMap_31 = STATE_VARIABLE_RepnMap_0_30;
          *STATE_VARIABLE_WordAlignedMap_35 = STATE_VARIABLE_WordAlignedMap_0_34;
        }
        break;
      case (MR_Integer) 1:
        {
          MR_Word DuStatus_21 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(1), StdDefn_18, (MR_Integer) 0))) & (MR_Integer) 3);
          MR_Word DuDefn_22 = ((MR_Word) ((MR_hl_field(MR_mktag(1), StdDefn_18, (MR_Integer) 1))));
          MR_String HeadName_23 = ((MR_String) ((MR_hl_field(MR_mktag(1), StdDefn_18, (MR_Integer) 2))));
          MR_Word TailNames_24 = ((MR_Word) ((MR_hl_field(MR_mktag(1), StdDefn_18, (MR_Integer) 3))));
          MR_Word MaybeDefnOrEnumCJCsE_25 = ((MR_Word) ((MR_hl_field(MR_mktag(1), StdDefn_18, (MR_Integer) 4))));

          switch (DuStatus_21) {
            default: /*NOTREACHED*/ MR_assert(0);
            case (MR_Integer) 2:
            case (MR_Integer) 1:
            case (MR_Integer) 0:
              mercury__set_tree234__insert_3_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_type_ctor_0), ((MR_Box) (TypeCtor_11)), STATE_VARIABLE_ExportedTypes_0_36, STATE_VARIABLE_ExportedTypes_37);
              break;
            case (MR_Integer) 3:
              *STATE_VARIABLE_ExportedTypes_37 = STATE_VARIABLE_ExportedTypes_0_36;
              break;
          }
          parse_tree__decide_type_repn__decide_type_repns_stage_1_du_all_plain_constants_9_p_0(TypeCtor_11, DuDefn_22, HeadName_23, TailNames_24, MaybeDefnOrEnumCJCsE_25, STATE_VARIABLE_WordAlignedMap_0_34, STATE_VARIABLE_WordAlignedMap_35, STATE_VARIABLE_RepnMap_0_30, STATE_VARIABLE_RepnMap_31);
          *STATE_VARIABLE_EqvMap_33 = STATE_VARIABLE_EqvMap_0_32;
        }
        break;
      case (MR_Integer) 2:
        {
          MR_Word MaybeDefnCJCsE_26 = ((MR_Word) ((MR_hl_field(MR_mktag(2), StdDefn_18, (MR_Integer) 2))));
          MR_Word DuStatus_47 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(2), StdDefn_18, (MR_Integer) 0))) & (MR_Integer) 3);
          MR_Word DuDefn_48 = ((MR_Word) ((MR_hl_field(MR_mktag(2), StdDefn_18, (MR_Integer) 1))));

          switch (DuStatus_47) {
            default: /*NOTREACHED*/ MR_assert(0);
            case (MR_Integer) 2:
            case (MR_Integer) 1:
            case (MR_Integer) 0:
              mercury__set_tree234__insert_3_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_type_ctor_0), ((MR_Box) (TypeCtor_11)), STATE_VARIABLE_ExportedTypes_0_36, STATE_VARIABLE_ExportedTypes_37);
              break;
            case (MR_Integer) 3:
              *STATE_VARIABLE_ExportedTypes_37 = STATE_VARIABLE_ExportedTypes_0_36;
              break;
          }
          parse_tree__decide_type_repn__decide_type_repns_stage_1_du_not_all_plain_constants_7_p_0(TypeCtor_11, DuDefn_48, MaybeDefnCJCsE_26, STATE_VARIABLE_WordAlignedMap_0_34, STATE_VARIABLE_WordAlignedMap_35, STATE_VARIABLE_RepnMap_0_30, STATE_VARIABLE_RepnMap_31);
          *STATE_VARIABLE_EqvMap_33 = STATE_VARIABLE_EqvMap_0_32;
        }
        break;
      case (MR_Integer) 3:
        {
          MR_Word AbsStatus_27 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(3), StdDefn_18, (MR_Integer) 0))) & (MR_Integer) 3);

          switch (AbsStatus_27) {
            default: /*NOTREACHED*/ MR_assert(0);
            case (MR_Integer) 1:
            case (MR_Integer) 0:
              mercury__set_tree234__insert_3_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_type_ctor_0), ((MR_Box) (TypeCtor_11)), STATE_VARIABLE_ExportedTypes_0_36, STATE_VARIABLE_ExportedTypes_37);
              break;
            case (MR_Integer) 2:
              *STATE_VARIABLE_ExportedTypes_37 = STATE_VARIABLE_ExportedTypes_0_36;
              break;
          }
          *STATE_VARIABLE_RepnMap_31 = STATE_VARIABLE_RepnMap_0_30;
          *STATE_VARIABLE_EqvMap_33 = STATE_VARIABLE_EqvMap_0_32;
          *STATE_VARIABLE_WordAlignedMap_35 = STATE_VARIABLE_WordAlignedMap_0_34;
        }
        break;
    }
  }
}

static void MR_CALL 
parse_tree__decide_type_repn__decide_type_repns_stage_1_du_not_all_plain_constants_7_p_0(
  MR_Word TypeCtor_8,
  MR_Word DuDefn_9,
  MR_Word MaybeDefnCJCsE_10,
  MR_Word STATE_VARIABLE_WordAlignmentMap_0_41,
  MR_Word * STATE_VARIABLE_WordAlignmentMap_42,
  MR_Word STATE_VARIABLE_TypeRepnMap_0_43,
  MR_Word * STATE_VARIABLE_TypeRepnMap_44)
{
  {
    MR_bool succeeded;
    MR_Word ForeignTypeRepns_13;
    MR_Word TypeParams_15;
    MR_Word DetailsDu_16;
    MR_Word TVarSet_17;
    MR_Word OoMCtors_20;
    MR_Word MaybeCanonical_21;
    MR_Word HeadCtor_23;
    MR_Word TailCtors_24;
    MR_Word WordAligned_36;

    parse_tree__decide_type_repn__decide_type_repns_foreign_defns_2_p_0(MaybeDefnCJCsE_10, &ForeignTypeRepns_13);
    TypeParams_15 = ((MR_Word) ((MR_hl_field(MR_mktag(0), DuDefn_9, (MR_Integer) 1))));
    DetailsDu_16 = ((MR_Word) ((MR_hl_field(MR_mktag(0), DuDefn_9, (MR_Integer) 2))));
    TVarSet_17 = ((MR_Word) ((MR_hl_field(MR_mktag(0), DuDefn_9, (MR_Integer) 3))));
    OoMCtors_20 = ((MR_Word) ((MR_hl_field(MR_mktag(0), DetailsDu_16, (MR_Integer) 0))));
    MaybeCanonical_21 = ((MR_Word) ((MR_hl_field(MR_mktag(0), DetailsDu_16, (MR_Integer) 1))));
    HeadCtor_23 = ((MR_Word) ((MR_hl_field(MR_mktag(0), OoMCtors_20, (MR_Integer) 0))));
    TailCtors_24 = ((MR_Word) ((MR_hl_field(MR_mktag(0), OoMCtors_20, (MR_Integer) 1))));
    if ((TailCtors_24 == (MR_Word) ((MR_Unsigned) 0U)))
    {
      MR_Word MaybeExistConstraints_27 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadCtor_23, (MR_Integer) 1))));
      MR_Word SingleCtorSymName_28 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadCtor_23, (MR_Integer) 2))));
      MR_Word Args_29 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadCtor_23, (MR_Integer) 3))));
      MR_Integer Arity_30 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), HeadCtor_23, (MR_Integer) 4))));
      MR_Word Var_45;

      succeeded = (MaybeExistConstraints_27 == (MR_Word) ((MR_Unsigned) 0U));
      if (succeeded)
      {
        succeeded = (Arity_30 == (MR_Integer) 1);
        if (succeeded)
        {
          succeeded = (MaybeCanonical_21 == (MR_Word) ((MR_Unsigned) 0U));
          if (succeeded)
          {
            succeeded = (Args_29 != (MR_Word) ((MR_Unsigned) 0U));
            if (succeeded)
            {
              Var_45 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Args_29, (MR_Integer) 1))));
              succeeded = (Var_45 == (MR_Word) ((MR_Unsigned) 0U));
            }
          }
        }
      }
      if (succeeded)
      {
        MR_String SingleCtorName_33;
        MR_Word NotagRepn_34;
        MR_Word DuRepn_35;
        MR_Word TypeRepn_57;
        MR_Word TypeCtorSymName_58;
        MR_Word TypeRepnInfo_60;
        MR_Word Var_61;

        SingleCtorName_33 = mdbcomp__sym_name__unqualify_name_1_f_0(SingleCtorSymName_28);
        {
          NotagRepn_34 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(MR_mktag(0), NotagRepn_34, 0) = ((MR_Box) (SingleCtorName_33));
          MR_hl_field(MR_mktag(0), NotagRepn_34, 1) = ((MR_Box) (ForeignTypeRepns_13));
        }
        DuRepn_35 = (MR_Word) (MR_mkword(MR_mktag(2), (MR_Word) (NotagRepn_34)));
        {
          TypeRepn_57 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(3), TypeRepn_57, 0) = ((MR_Box) ((MR_Unsigned) 1U));
          MR_hl_field(MR_mktag(3), TypeRepn_57, 1) = ((MR_Box) (DuRepn_35));
        }
        TypeCtorSymName_58 = ((MR_Word) ((MR_hl_field(MR_mktag(0), TypeCtor_8, (MR_Integer) 0))));
        Var_61 = mercury__term__context_init_0_f_0();
        {
          TypeRepnInfo_60 = (MR_Word) MR_new_object(MR_Word, (6 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(MR_mktag(0), TypeRepnInfo_60, 0) = ((MR_Box) (TypeCtorSymName_58));
          MR_hl_field(MR_mktag(0), TypeRepnInfo_60, 1) = ((MR_Box) (TypeParams_15));
          MR_hl_field(MR_mktag(0), TypeRepnInfo_60, 2) = ((MR_Box) (TypeRepn_57));
          MR_hl_field(MR_mktag(0), TypeRepnInfo_60, 3) = ((MR_Box) (TVarSet_17));
          MR_hl_field(MR_mktag(0), TypeRepnInfo_60, 4) = ((MR_Box) (Var_61));
          MR_hl_field(MR_mktag(0), TypeRepnInfo_60, 5) = ((MR_Box) ((MR_Integer) -1));
        }
        mercury__map__det_insert_4_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_type_ctor_0), (MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_type_repn_info_0), ((MR_Box) (TypeCtor_8)), ((MR_Box) (TypeRepnInfo_60)), STATE_VARIABLE_TypeRepnMap_0_43, STATE_VARIABLE_TypeRepnMap_44);
        WordAligned_36 = (MR_Integer) 0;
      }
      else
      {
        MR_Integer TypeCtorArity_38 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), TypeCtor_8, (MR_Integer) 1))));

        succeeded = (TypeCtorArity_38 == (MR_Integer) 0);
        if (succeeded)
          WordAligned_36 = (MR_Integer) 1;
        else
          WordAligned_36 = (MR_Integer) 0;
        *STATE_VARIABLE_TypeRepnMap_44 = STATE_VARIABLE_TypeRepnMap_0_43;
      }
    }
    else
    {
      WordAligned_36 = (MR_Integer) 0;
      *STATE_VARIABLE_TypeRepnMap_44 = STATE_VARIABLE_TypeRepnMap_0_43;
    }
    mercury__map__det_insert_4_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_type_ctor_0), (MR_Word) (&parse_tree__decide_type_repn__parse_tree__decide_type_repn__type_ctor_info_maybe_word_alignment_0), ((MR_Box) (TypeCtor_8)), ((MR_Box) (WordAligned_36)), STATE_VARIABLE_WordAlignmentMap_0_41, STATE_VARIABLE_WordAlignmentMap_42);
  }
}

static void MR_CALL 
parse_tree__decide_type_repn__decide_type_repns_foreign_defns_2_p_0(
  MR_Word MaybeDefnCJCsE_3,
  MR_Word * MaybeRepnCJCsE_4)
{
  {
    MR_Word MaybeDefnC_5 = ((MR_Word) ((MR_hl_field(MR_mktag(0), MaybeDefnCJCsE_3, (MR_Integer) 0))));
    MR_Word MaybeDefnJava_6 = ((MR_Word) ((MR_hl_field(MR_mktag(0), MaybeDefnCJCsE_3, (MR_Integer) 1))));
    MR_Word MaybeDefnCsharp_7 = ((MR_Word) ((MR_hl_field(MR_mktag(0), MaybeDefnCJCsE_3, (MR_Integer) 2))));
    MR_Word MaybeDefnErlang_8 = ((MR_Word) ((MR_hl_field(MR_mktag(0), MaybeDefnCJCsE_3, (MR_Integer) 3))));
    MR_Word MaybeRepnC_9;
    MR_Word MaybeRepnJava_10;
    MR_Word MaybeRepnCsharp_11;
    MR_Word MaybeRepnErlang_12;

    if ((MaybeDefnC_5 == (MR_Word) ((MR_Unsigned) 0U)))
      MaybeRepnC_9 = (MR_Word) ((MR_Unsigned) 0U);
    else
    {
      MR_Word ForeignDefn_15 = ((MR_Word) ((MR_hl_field(MR_mktag(1), MaybeDefnC_5, (MR_Integer) 0))));
      MR_Word ForeignRepn_16;
      MR_Word DetailsForeign_21 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ForeignDefn_15, (MR_Integer) 2))));
      MR_Word LangType_25 = ((MR_Word) ((MR_hl_field(MR_mktag(0), DetailsForeign_21, (MR_Integer) 0))));
      MR_Word Assertions_27 = ((MR_Word) ((MR_hl_field(MR_mktag(0), DetailsForeign_21, (MR_Integer) 2))));
      MR_String ForeignTypeName_28;

      switch (MR_tag((MR_Word) LangType_25)) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 0:
          {
            MR_Word Var_32 = ((MR_Word) ((MR_hl_field(MR_mktag(0), LangType_25, (MR_Integer) 0))));

            ForeignTypeName_28 = (MR_String) (Var_32);
          }
          break;
        case (MR_Integer) 1:
          {
            MR_Word Var_31 = ((MR_Word) ((MR_hl_field(MR_mktag(1), LangType_25, (MR_Integer) 0))));

            ForeignTypeName_28 = (MR_String) (Var_31);
          }
          break;
        case (MR_Integer) 2:
          {
            MR_Word Var_30 = ((MR_Word) ((MR_hl_field(MR_mktag(2), LangType_25, (MR_Integer) 0))));

            ForeignTypeName_28 = (MR_String) (Var_30);
          }
          break;
        case (MR_Integer) 3:
          ForeignTypeName_28 = (MR_String) "";
          break;
      }
      {
        ForeignRepn_16 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(MR_mktag(0), ForeignRepn_16, 0) = ((MR_Box) (ForeignTypeName_28));
        MR_hl_field(MR_mktag(0), ForeignRepn_16, 1) = ((MR_Box) (Assertions_27));
      }
      {
        MaybeRepnC_9 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), MaybeRepnC_9, 0) = ((MR_Box) (ForeignRepn_16));
      }
    }
    if ((MaybeDefnJava_6 == (MR_Word) ((MR_Unsigned) 0U)))
      MaybeRepnJava_10 = (MR_Word) ((MR_Unsigned) 0U);
    else
    {
      MR_Word ForeignDefn_35 = ((MR_Word) ((MR_hl_field(MR_mktag(1), MaybeDefnJava_6, (MR_Integer) 0))));
      MR_Word ForeignRepn_36;
      MR_Word DetailsForeign_41 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ForeignDefn_35, (MR_Integer) 2))));
      MR_Word LangType_45 = ((MR_Word) ((MR_hl_field(MR_mktag(0), DetailsForeign_41, (MR_Integer) 0))));
      MR_Word Assertions_47 = ((MR_Word) ((MR_hl_field(MR_mktag(0), DetailsForeign_41, (MR_Integer) 2))));
      MR_String ForeignTypeName_48;

      switch (MR_tag((MR_Word) LangType_45)) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 0:
          {
            MR_Word Var_52 = ((MR_Word) ((MR_hl_field(MR_mktag(0), LangType_45, (MR_Integer) 0))));

            ForeignTypeName_48 = (MR_String) (Var_52);
          }
          break;
        case (MR_Integer) 1:
          {
            MR_Word Var_51 = ((MR_Word) ((MR_hl_field(MR_mktag(1), LangType_45, (MR_Integer) 0))));

            ForeignTypeName_48 = (MR_String) (Var_51);
          }
          break;
        case (MR_Integer) 2:
          {
            MR_Word Var_50 = ((MR_Word) ((MR_hl_field(MR_mktag(2), LangType_45, (MR_Integer) 0))));

            ForeignTypeName_48 = (MR_String) (Var_50);
          }
          break;
        case (MR_Integer) 3:
          ForeignTypeName_48 = (MR_String) "";
          break;
      }
      {
        ForeignRepn_36 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(MR_mktag(0), ForeignRepn_36, 0) = ((MR_Box) (ForeignTypeName_48));
        MR_hl_field(MR_mktag(0), ForeignRepn_36, 1) = ((MR_Box) (Assertions_47));
      }
      {
        MaybeRepnJava_10 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), MaybeRepnJava_10, 0) = ((MR_Box) (ForeignRepn_36));
      }
    }
    if ((MaybeDefnCsharp_7 == (MR_Word) ((MR_Unsigned) 0U)))
      MaybeRepnCsharp_11 = (MR_Word) ((MR_Unsigned) 0U);
    else
    {
      MR_Word ForeignDefn_55 = ((MR_Word) ((MR_hl_field(MR_mktag(1), MaybeDefnCsharp_7, (MR_Integer) 0))));
      MR_Word ForeignRepn_56;
      MR_Word DetailsForeign_61 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ForeignDefn_55, (MR_Integer) 2))));
      MR_Word LangType_65 = ((MR_Word) ((MR_hl_field(MR_mktag(0), DetailsForeign_61, (MR_Integer) 0))));
      MR_Word Assertions_67 = ((MR_Word) ((MR_hl_field(MR_mktag(0), DetailsForeign_61, (MR_Integer) 2))));
      MR_String ForeignTypeName_68;

      switch (MR_tag((MR_Word) LangType_65)) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 0:
          {
            MR_Word Var_72 = ((MR_Word) ((MR_hl_field(MR_mktag(0), LangType_65, (MR_Integer) 0))));

            ForeignTypeName_68 = (MR_String) (Var_72);
          }
          break;
        case (MR_Integer) 1:
          {
            MR_Word Var_71 = ((MR_Word) ((MR_hl_field(MR_mktag(1), LangType_65, (MR_Integer) 0))));

            ForeignTypeName_68 = (MR_String) (Var_71);
          }
          break;
        case (MR_Integer) 2:
          {
            MR_Word Var_70 = ((MR_Word) ((MR_hl_field(MR_mktag(2), LangType_65, (MR_Integer) 0))));

            ForeignTypeName_68 = (MR_String) (Var_70);
          }
          break;
        case (MR_Integer) 3:
          ForeignTypeName_68 = (MR_String) "";
          break;
      }
      {
        ForeignRepn_56 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(MR_mktag(0), ForeignRepn_56, 0) = ((MR_Box) (ForeignTypeName_68));
        MR_hl_field(MR_mktag(0), ForeignRepn_56, 1) = ((MR_Box) (Assertions_67));
      }
      {
        MaybeRepnCsharp_11 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), MaybeRepnCsharp_11, 0) = ((MR_Box) (ForeignRepn_56));
      }
    }
    if ((MaybeDefnErlang_8 == (MR_Word) ((MR_Unsigned) 0U)))
      MaybeRepnErlang_12 = (MR_Word) ((MR_Unsigned) 0U);
    else
    {
      MR_Word ForeignDefn_75 = ((MR_Word) ((MR_hl_field(MR_mktag(1), MaybeDefnErlang_8, (MR_Integer) 0))));
      MR_Word ForeignRepn_76;
      MR_Word DetailsForeign_81 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ForeignDefn_75, (MR_Integer) 2))));
      MR_Word LangType_85 = ((MR_Word) ((MR_hl_field(MR_mktag(0), DetailsForeign_81, (MR_Integer) 0))));
      MR_Word Assertions_87 = ((MR_Word) ((MR_hl_field(MR_mktag(0), DetailsForeign_81, (MR_Integer) 2))));
      MR_String ForeignTypeName_88;

      switch (MR_tag((MR_Word) LangType_85)) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 0:
          {
            MR_Word Var_92 = ((MR_Word) ((MR_hl_field(MR_mktag(0), LangType_85, (MR_Integer) 0))));

            ForeignTypeName_88 = (MR_String) (Var_92);
          }
          break;
        case (MR_Integer) 1:
          {
            MR_Word Var_91 = ((MR_Word) ((MR_hl_field(MR_mktag(1), LangType_85, (MR_Integer) 0))));

            ForeignTypeName_88 = (MR_String) (Var_91);
          }
          break;
        case (MR_Integer) 2:
          {
            MR_Word Var_90 = ((MR_Word) ((MR_hl_field(MR_mktag(2), LangType_85, (MR_Integer) 0))));

            ForeignTypeName_88 = (MR_String) (Var_90);
          }
          break;
        case (MR_Integer) 3:
          ForeignTypeName_88 = (MR_String) "";
          break;
      }
      {
        ForeignRepn_76 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(MR_mktag(0), ForeignRepn_76, 0) = ((MR_Box) (ForeignTypeName_88));
        MR_hl_field(MR_mktag(0), ForeignRepn_76, 1) = ((MR_Box) (Assertions_87));
      }
      {
        MaybeRepnErlang_12 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), MaybeRepnErlang_12, 0) = ((MR_Box) (ForeignRepn_76));
      }
    }
    {
      MR_Word base;
      base = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
      *MaybeRepnCJCsE_4 = base;
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (MaybeRepnC_9));
      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (MaybeRepnJava_10));
      MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (MaybeRepnCsharp_11));
      MR_hl_field(MR_mktag(0), base, 3) = ((MR_Box) (MaybeRepnErlang_12));
    }
  }
}

static void MR_CALL 
parse_tree__decide_type_repn__decide_type_repns_stage_1_du_all_plain_constants_9_p_0(
  MR_Word TypeCtor_10,
  MR_Word DuDefn_11,
  MR_String HeadName_12,
  MR_Word TailNames_13,
  MR_Word MaybeDefnOrEnumCJCsE_14,
  MR_Word STATE_VARIABLE_WordAlignmentMap_0_30,
  MR_Word * STATE_VARIABLE_WordAlignmentMap_31,
  MR_Word STATE_VARIABLE_TypeRepnMap_0_32,
  MR_Word * STATE_VARIABLE_TypeRepnMap_33)
{
  {
    MR_Word EnumForeignRepns_17;
    MR_Word TypeParams_19;
    MR_Word TVarSet_21;
    MR_Word DuRepn_25;
    MR_Word TypeRepn_45;
    MR_Word TypeCtorSymName_46;
    MR_Word TypeRepnInfo_48;
    MR_Word Var_49;

    parse_tree__decide_type_repn__decide_type_repns_foreign_defns_or_enums_2_p_0(MaybeDefnOrEnumCJCsE_14, &EnumForeignRepns_17);
    TypeParams_19 = ((MR_Word) ((MR_hl_field(MR_mktag(0), DuDefn_11, (MR_Integer) 1))));
    TVarSet_21 = ((MR_Word) ((MR_hl_field(MR_mktag(0), DuDefn_11, (MR_Integer) 3))));
    if ((TailNames_13 == (MR_Word) ((MR_Unsigned) 0U)))
    {
      MR_Word DirectDummyRepn_24;

      {
        DirectDummyRepn_24 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(MR_mktag(0), DirectDummyRepn_24, 0) = ((MR_Box) (HeadName_12));
        MR_hl_field(MR_mktag(0), DirectDummyRepn_24, 1) = ((MR_Box) (EnumForeignRepns_17));
      }
      DuRepn_25 = (MR_Word) ((MR_Word) (DirectDummyRepn_24));
    }
    else
    {
      MR_String HeadTailName_26 = ((MR_String) ((MR_hl_field(MR_mktag(1), TailNames_13, (MR_Integer) 0))));
      MR_Word TailTailNames_27 = ((MR_Word) ((MR_hl_field(MR_mktag(1), TailNames_13, (MR_Integer) 1))));
      MR_Word EnumRepn_28;

      {
        EnumRepn_28 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(MR_mktag(0), EnumRepn_28, 0) = ((MR_Box) (HeadName_12));
        MR_hl_field(MR_mktag(0), EnumRepn_28, 1) = ((MR_Box) (HeadTailName_26));
        MR_hl_field(MR_mktag(0), EnumRepn_28, 2) = ((MR_Box) (TailTailNames_27));
        MR_hl_field(MR_mktag(0), EnumRepn_28, 3) = ((MR_Box) (EnumForeignRepns_17));
      }
      DuRepn_25 = (MR_Word) (MR_mkword(MR_mktag(1), (MR_Word) (EnumRepn_28)));
    }
    {
      TypeRepn_45 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(3), TypeRepn_45, 0) = ((MR_Box) ((MR_Unsigned) 1U));
      MR_hl_field(MR_mktag(3), TypeRepn_45, 1) = ((MR_Box) (DuRepn_25));
    }
    TypeCtorSymName_46 = ((MR_Word) ((MR_hl_field(MR_mktag(0), TypeCtor_10, (MR_Integer) 0))));
    Var_49 = mercury__term__context_init_0_f_0();
    {
      TypeRepnInfo_48 = (MR_Word) MR_new_object(MR_Word, (6 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), TypeRepnInfo_48, 0) = ((MR_Box) (TypeCtorSymName_46));
      MR_hl_field(MR_mktag(0), TypeRepnInfo_48, 1) = ((MR_Box) (TypeParams_19));
      MR_hl_field(MR_mktag(0), TypeRepnInfo_48, 2) = ((MR_Box) (TypeRepn_45));
      MR_hl_field(MR_mktag(0), TypeRepnInfo_48, 3) = ((MR_Box) (TVarSet_21));
      MR_hl_field(MR_mktag(0), TypeRepnInfo_48, 4) = ((MR_Box) (Var_49));
      MR_hl_field(MR_mktag(0), TypeRepnInfo_48, 5) = ((MR_Box) ((MR_Integer) -1));
    }
    mercury__map__det_insert_4_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_type_ctor_0), (MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_type_repn_info_0), ((MR_Box) (TypeCtor_10)), ((MR_Box) (TypeRepnInfo_48)), STATE_VARIABLE_TypeRepnMap_0_32, STATE_VARIABLE_TypeRepnMap_33);
    mercury__map__det_insert_4_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_type_ctor_0), (MR_Word) (&parse_tree__decide_type_repn__parse_tree__decide_type_repn__type_ctor_info_maybe_word_alignment_0), ((MR_Box) (TypeCtor_10)), ((MR_Box) ((MR_Integer) 0)), STATE_VARIABLE_WordAlignmentMap_0_30, STATE_VARIABLE_WordAlignmentMap_31);
  }
}

static void MR_CALL 
parse_tree__decide_type_repn__decide_type_repns_foreign_defns_or_enums_2_p_0(
  MR_Word MaybeDefnOrEnumCJCsE_3,
  MR_Word * MaybeRepnCJCsE_4)
{
  {
    MR_Word MaybeDefnOrEnumC_5 = ((MR_Word) ((MR_hl_field(MR_mktag(0), MaybeDefnOrEnumCJCsE_3, (MR_Integer) 0))));
    MR_Word MaybeDefnOrEnumJava_6 = ((MR_Word) ((MR_hl_field(MR_mktag(0), MaybeDefnOrEnumCJCsE_3, (MR_Integer) 1))));
    MR_Word MaybeDefnOrEnumCsharp_7 = ((MR_Word) ((MR_hl_field(MR_mktag(0), MaybeDefnOrEnumCJCsE_3, (MR_Integer) 2))));
    MR_Word MaybeDefnOrEnumErlang_8 = ((MR_Word) ((MR_hl_field(MR_mktag(0), MaybeDefnOrEnumCJCsE_3, (MR_Integer) 3))));
    MR_Word MaybeRepnC_9;
    MR_Word MaybeRepnJava_10;
    MR_Word MaybeRepnCsharp_11;
    MR_Word MaybeRepnErlang_12;

    if ((MaybeDefnOrEnumC_5 == (MR_Word) ((MR_Unsigned) 0U)))
      MaybeRepnC_9 = (MR_Word) ((MR_Unsigned) 0U);
    else
    {
      MR_Word ForeignDefnOrEnum_15 = ((MR_Word) ((MR_hl_field(MR_mktag(1), MaybeDefnOrEnumC_5, (MR_Integer) 0))));
      MR_Word EnumForeignRepn_18;

      if (((MR_tag((MR_Word) ForeignDefnOrEnum_15)) == (MR_Integer) 0))
      {
        MR_Word ForeignEnumInfo_19 = (MR_Word) ((MR_Word) (ForeignDefnOrEnum_15));
        MR_Word ForeignEnumRepn_20 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ForeignEnumInfo_19, (MR_Integer) 1))));

        {
          EnumForeignRepn_18 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), EnumForeignRepn_18, 0) = ((MR_Box) (ForeignEnumRepn_20));
        }
      }
      else
      {
        MR_Word TypeDefnInfo_16 = ((MR_Word) ((MR_hl_field(MR_mktag(1), ForeignDefnOrEnum_15, (MR_Integer) 0))));
        MR_Word ForeignTypeRepn_17;
        MR_Word DetailsForeign_28 = ((MR_Word) ((MR_hl_field(MR_mktag(0), TypeDefnInfo_16, (MR_Integer) 2))));
        MR_Word LangType_32 = ((MR_Word) ((MR_hl_field(MR_mktag(0), DetailsForeign_28, (MR_Integer) 0))));
        MR_Word Assertions_34 = ((MR_Word) ((MR_hl_field(MR_mktag(0), DetailsForeign_28, (MR_Integer) 2))));
        MR_String ForeignTypeName_35;

        switch (MR_tag((MR_Word) LangType_32)) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
            {
              MR_Word Var_39 = ((MR_Word) ((MR_hl_field(MR_mktag(0), LangType_32, (MR_Integer) 0))));

              ForeignTypeName_35 = (MR_String) (Var_39);
            }
            break;
          case (MR_Integer) 1:
            {
              MR_Word Var_38 = ((MR_Word) ((MR_hl_field(MR_mktag(1), LangType_32, (MR_Integer) 0))));

              ForeignTypeName_35 = (MR_String) (Var_38);
            }
            break;
          case (MR_Integer) 2:
            {
              MR_Word Var_37 = ((MR_Word) ((MR_hl_field(MR_mktag(2), LangType_32, (MR_Integer) 0))));

              ForeignTypeName_35 = (MR_String) (Var_37);
            }
            break;
          case (MR_Integer) 3:
            ForeignTypeName_35 = (MR_String) "";
            break;
        }
        {
          ForeignTypeRepn_17 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(MR_mktag(0), ForeignTypeRepn_17, 0) = ((MR_Box) (ForeignTypeName_35));
          MR_hl_field(MR_mktag(0), ForeignTypeRepn_17, 1) = ((MR_Box) (Assertions_34));
        }
        EnumForeignRepn_18 = (MR_Word) ((MR_Word) (ForeignTypeRepn_17));
      }
      {
        MaybeRepnC_9 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), MaybeRepnC_9, 0) = ((MR_Box) (EnumForeignRepn_18));
      }
    }
    if ((MaybeDefnOrEnumJava_6 == (MR_Word) ((MR_Unsigned) 0U)))
      MaybeRepnJava_10 = (MR_Word) ((MR_Unsigned) 0U);
    else
    {
      MR_Word ForeignDefnOrEnum_42 = ((MR_Word) ((MR_hl_field(MR_mktag(1), MaybeDefnOrEnumJava_6, (MR_Integer) 0))));
      MR_Word EnumForeignRepn_45;

      if (((MR_tag((MR_Word) ForeignDefnOrEnum_42)) == (MR_Integer) 0))
      {
        MR_Word ForeignEnumInfo_46 = (MR_Word) ((MR_Word) (ForeignDefnOrEnum_42));
        MR_Word ForeignEnumRepn_47 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ForeignEnumInfo_46, (MR_Integer) 1))));

        {
          EnumForeignRepn_45 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), EnumForeignRepn_45, 0) = ((MR_Box) (ForeignEnumRepn_47));
        }
      }
      else
      {
        MR_Word TypeDefnInfo_43 = ((MR_Word) ((MR_hl_field(MR_mktag(1), ForeignDefnOrEnum_42, (MR_Integer) 0))));
        MR_Word ForeignTypeRepn_44;
        MR_Word DetailsForeign_55 = ((MR_Word) ((MR_hl_field(MR_mktag(0), TypeDefnInfo_43, (MR_Integer) 2))));
        MR_Word LangType_59 = ((MR_Word) ((MR_hl_field(MR_mktag(0), DetailsForeign_55, (MR_Integer) 0))));
        MR_Word Assertions_61 = ((MR_Word) ((MR_hl_field(MR_mktag(0), DetailsForeign_55, (MR_Integer) 2))));
        MR_String ForeignTypeName_62;

        switch (MR_tag((MR_Word) LangType_59)) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
            {
              MR_Word Var_66 = ((MR_Word) ((MR_hl_field(MR_mktag(0), LangType_59, (MR_Integer) 0))));

              ForeignTypeName_62 = (MR_String) (Var_66);
            }
            break;
          case (MR_Integer) 1:
            {
              MR_Word Var_65 = ((MR_Word) ((MR_hl_field(MR_mktag(1), LangType_59, (MR_Integer) 0))));

              ForeignTypeName_62 = (MR_String) (Var_65);
            }
            break;
          case (MR_Integer) 2:
            {
              MR_Word Var_64 = ((MR_Word) ((MR_hl_field(MR_mktag(2), LangType_59, (MR_Integer) 0))));

              ForeignTypeName_62 = (MR_String) (Var_64);
            }
            break;
          case (MR_Integer) 3:
            ForeignTypeName_62 = (MR_String) "";
            break;
        }
        {
          ForeignTypeRepn_44 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(MR_mktag(0), ForeignTypeRepn_44, 0) = ((MR_Box) (ForeignTypeName_62));
          MR_hl_field(MR_mktag(0), ForeignTypeRepn_44, 1) = ((MR_Box) (Assertions_61));
        }
        EnumForeignRepn_45 = (MR_Word) ((MR_Word) (ForeignTypeRepn_44));
      }
      {
        MaybeRepnJava_10 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), MaybeRepnJava_10, 0) = ((MR_Box) (EnumForeignRepn_45));
      }
    }
    if ((MaybeDefnOrEnumCsharp_7 == (MR_Word) ((MR_Unsigned) 0U)))
      MaybeRepnCsharp_11 = (MR_Word) ((MR_Unsigned) 0U);
    else
    {
      MR_Word ForeignDefnOrEnum_69 = ((MR_Word) ((MR_hl_field(MR_mktag(1), MaybeDefnOrEnumCsharp_7, (MR_Integer) 0))));
      MR_Word EnumForeignRepn_72;

      if (((MR_tag((MR_Word) ForeignDefnOrEnum_69)) == (MR_Integer) 0))
      {
        MR_Word ForeignEnumInfo_73 = (MR_Word) ((MR_Word) (ForeignDefnOrEnum_69));
        MR_Word ForeignEnumRepn_74 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ForeignEnumInfo_73, (MR_Integer) 1))));

        {
          EnumForeignRepn_72 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), EnumForeignRepn_72, 0) = ((MR_Box) (ForeignEnumRepn_74));
        }
      }
      else
      {
        MR_Word TypeDefnInfo_70 = ((MR_Word) ((MR_hl_field(MR_mktag(1), ForeignDefnOrEnum_69, (MR_Integer) 0))));
        MR_Word ForeignTypeRepn_71;
        MR_Word DetailsForeign_82 = ((MR_Word) ((MR_hl_field(MR_mktag(0), TypeDefnInfo_70, (MR_Integer) 2))));
        MR_Word LangType_86 = ((MR_Word) ((MR_hl_field(MR_mktag(0), DetailsForeign_82, (MR_Integer) 0))));
        MR_Word Assertions_88 = ((MR_Word) ((MR_hl_field(MR_mktag(0), DetailsForeign_82, (MR_Integer) 2))));
        MR_String ForeignTypeName_89;

        switch (MR_tag((MR_Word) LangType_86)) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
            {
              MR_Word Var_93 = ((MR_Word) ((MR_hl_field(MR_mktag(0), LangType_86, (MR_Integer) 0))));

              ForeignTypeName_89 = (MR_String) (Var_93);
            }
            break;
          case (MR_Integer) 1:
            {
              MR_Word Var_92 = ((MR_Word) ((MR_hl_field(MR_mktag(1), LangType_86, (MR_Integer) 0))));

              ForeignTypeName_89 = (MR_String) (Var_92);
            }
            break;
          case (MR_Integer) 2:
            {
              MR_Word Var_91 = ((MR_Word) ((MR_hl_field(MR_mktag(2), LangType_86, (MR_Integer) 0))));

              ForeignTypeName_89 = (MR_String) (Var_91);
            }
            break;
          case (MR_Integer) 3:
            ForeignTypeName_89 = (MR_String) "";
            break;
        }
        {
          ForeignTypeRepn_71 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(MR_mktag(0), ForeignTypeRepn_71, 0) = ((MR_Box) (ForeignTypeName_89));
          MR_hl_field(MR_mktag(0), ForeignTypeRepn_71, 1) = ((MR_Box) (Assertions_88));
        }
        EnumForeignRepn_72 = (MR_Word) ((MR_Word) (ForeignTypeRepn_71));
      }
      {
        MaybeRepnCsharp_11 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), MaybeRepnCsharp_11, 0) = ((MR_Box) (EnumForeignRepn_72));
      }
    }
    parse_tree__decide_type_repn__represent_maybe_foreign_defn_or_enum_2_p_0(MaybeDefnOrEnumErlang_8, &MaybeRepnErlang_12);
    {
      MR_Word base;
      base = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
      *MaybeRepnCJCsE_4 = base;
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (MaybeRepnC_9));
      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (MaybeRepnJava_10));
      MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (MaybeRepnCsharp_11));
      MR_hl_field(MR_mktag(0), base, 3) = ((MR_Box) (MaybeRepnErlang_12));
    }
  }
}

static void MR_CALL 
parse_tree__decide_type_repn__represent_maybe_foreign_defn_or_enum_2_p_0(
  MR_Word MaybeForeignDefnOrEnum_3,
  MR_Word * MaybeEnumForeignRepn_4)
{
  if ((MaybeForeignDefnOrEnum_3 == (MR_Word) ((MR_Unsigned) 0U)))
    *MaybeEnumForeignRepn_4 = (MR_Word) ((MR_Unsigned) 0U);
  else
  {
    MR_Word ForeignDefnOrEnum_5 = ((MR_Word) ((MR_hl_field(MR_mktag(1), MaybeForeignDefnOrEnum_3, (MR_Integer) 0))));
    MR_Word EnumForeignRepn_8;

    if (((MR_tag((MR_Word) ForeignDefnOrEnum_5)) == (MR_Integer) 0))
    {
      MR_Word ForeignEnumInfo_9 = (MR_Word) ((MR_Word) (ForeignDefnOrEnum_5));
      MR_Word ForeignEnumRepn_10 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ForeignEnumInfo_9, (MR_Integer) 1))));

      {
        EnumForeignRepn_8 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), EnumForeignRepn_8, 0) = ((MR_Box) (ForeignEnumRepn_10));
      }
    }
    else
    {
      MR_Word TypeDefnInfo_6 = ((MR_Word) ((MR_hl_field(MR_mktag(1), ForeignDefnOrEnum_5, (MR_Integer) 0))));
      MR_Word ForeignTypeRepn_7;
      MR_Word DetailsForeign_18 = ((MR_Word) ((MR_hl_field(MR_mktag(0), TypeDefnInfo_6, (MR_Integer) 2))));
      MR_Word LangType_22 = ((MR_Word) ((MR_hl_field(MR_mktag(0), DetailsForeign_18, (MR_Integer) 0))));
      MR_Word Assertions_24 = ((MR_Word) ((MR_hl_field(MR_mktag(0), DetailsForeign_18, (MR_Integer) 2))));
      MR_String ForeignTypeName_25;

      switch (MR_tag((MR_Word) LangType_22)) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 0:
          {
            MR_Word Var_29 = ((MR_Word) ((MR_hl_field(MR_mktag(0), LangType_22, (MR_Integer) 0))));

            ForeignTypeName_25 = (MR_String) (Var_29);
          }
          break;
        case (MR_Integer) 1:
          {
            MR_Word Var_28 = ((MR_Word) ((MR_hl_field(MR_mktag(1), LangType_22, (MR_Integer) 0))));

            ForeignTypeName_25 = (MR_String) (Var_28);
          }
          break;
        case (MR_Integer) 2:
          {
            MR_Word Var_27 = ((MR_Word) ((MR_hl_field(MR_mktag(2), LangType_22, (MR_Integer) 0))));

            ForeignTypeName_25 = (MR_String) (Var_27);
          }
          break;
        case (MR_Integer) 3:
          ForeignTypeName_25 = (MR_String) "";
          break;
      }
      {
        ForeignTypeRepn_7 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(MR_mktag(0), ForeignTypeRepn_7, 0) = ((MR_Box) (ForeignTypeName_25));
        MR_hl_field(MR_mktag(0), ForeignTypeRepn_7, 1) = ((MR_Box) (Assertions_24));
      }
      EnumForeignRepn_8 = (MR_Word) ((MR_Word) (ForeignTypeRepn_7));
    }
    {
      MR_Word base;
      base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
      *MaybeEnumForeignRepn_4 = base;
      MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (EnumForeignRepn_8));
    }
  }
}

void MR_CALL 
parse_tree__decide_type_repn__decide_repns_for_simple_types_for_int3_3_p_0(
  MR_Word _ModuleName_4,
  MR_Word TypeCtorCheckedMap_5,
  MR_Word * IntRepns_6)
{
  parse_tree__decide_type_repn__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_100_101_99_105_100_101_95_114_101_112_110_115_95_102_111_114_95_115_105_109_112_108_101_95_116_121_112_101_115_95_102_111_114_95_105_110_116_51_95_95_91_49_93_95_48_3_p_0(TypeCtorCheckedMap_5, IntRepns_6);
}

static void MR_CALL 
parse_tree__decide_type_repn__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_100_101_99_105_100_101_95_114_101_112_110_115_95_102_111_114_95_115_105_109_112_108_101_95_116_121_112_101_115_95_102_111_114_95_105_110_116_51_95_95_91_49_93_95_48_3_p_0_4(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3)
{
  {
    MR_Box closure = closure_arg;
    MR_Word conv12_STATE_VARIABLE_Items_14;

    parse_tree__decide_type_repn__add_eqv_repn_item_3_p_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), &conv12_STATE_VARIABLE_Items_14);
    *wrapper_arg_3 = ((MR_Box) (conv12_STATE_VARIABLE_Items_14));
  }
}

static void MR_CALL 
parse_tree__decide_type_repn__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_100_101_99_105_100_101_95_114_101_112_110_115_95_102_111_114_95_115_105_109_112_108_101_95_116_121_112_101_115_95_102_111_114_95_105_110_116_51_95_95_91_49_93_95_48_3_p_0_3(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box * wrapper_arg_4)
{
  {
    MR_Box closure = closure_arg;
    MR_Word conv10_STATE_VARIABLE_Items_15;

    parse_tree__decide_type_repn__maybe_add_word_aligned_repn_item_4_p_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)), &conv10_STATE_VARIABLE_Items_15);
    *wrapper_arg_4 = ((MR_Box) (conv10_STATE_VARIABLE_Items_15));
  }
}

static void MR_CALL 
parse_tree__decide_type_repn__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_100_101_99_105_100_101_95_114_101_112_110_115_95_102_111_114_95_115_105_109_112_108_101_95_116_121_112_101_115_95_102_111_114_95_105_110_116_51_95_95_91_49_93_95_48_3_p_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3)
{
  {
    MR_Box closure = closure_arg;
    MR_Word conv8_STATE_VARIABLE_Items_7;

    parse_tree__decide_type_repn__add_type_repn_item_3_p_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), &conv8_STATE_VARIABLE_Items_7);
    *wrapper_arg_3 = ((MR_Box) (conv8_STATE_VARIABLE_Items_7));
  }
}

static void MR_CALL 
parse_tree__decide_type_repn__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_100_101_99_105_100_101_95_114_101_112_110_115_95_102_111_114_95_115_105_109_112_108_101_95_116_121_112_101_115_95_102_111_114_95_105_110_116_51_95_95_91_49_93_95_48_3_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box * wrapper_arg_4,
  MR_Box wrapper_arg_5,
  MR_Box * wrapper_arg_6,
  MR_Box wrapper_arg_7,
  MR_Box * wrapper_arg_8,
  MR_Box wrapper_arg_9,
  MR_Box * wrapper_arg_10)
{
  {
    MR_Box closure = closure_arg;
    MR_Word conv3_STATE_VARIABLE_RepnMap_31;
    MR_Word conv2_STATE_VARIABLE_EqvMap_33;
    MR_Word conv1_STATE_VARIABLE_WordAlignedMap_35;
    MR_Word conv0_STATE_VARIABLE_ExportedTypes_37;

    parse_tree__decide_type_repn__decide_type_repns_stage_1_10_p_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)), &conv3_STATE_VARIABLE_RepnMap_31, ((MR_Word) (wrapper_arg_5)), &conv2_STATE_VARIABLE_EqvMap_33, ((MR_Word) (wrapper_arg_7)), &conv1_STATE_VARIABLE_WordAlignedMap_35, ((MR_Word) (wrapper_arg_9)), &conv0_STATE_VARIABLE_ExportedTypes_37);
    *wrapper_arg_4 = ((MR_Box) (conv3_STATE_VARIABLE_RepnMap_31));
    *wrapper_arg_6 = ((MR_Box) (conv2_STATE_VARIABLE_EqvMap_33));
    *wrapper_arg_8 = ((MR_Box) (conv1_STATE_VARIABLE_WordAlignedMap_35));
    *wrapper_arg_10 = ((MR_Box) (conv0_STATE_VARIABLE_ExportedTypes_37));
  }
}

void MR_CALL 
parse_tree__decide_type_repn__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_100_101_99_105_100_101_95_114_101_112_110_115_95_102_111_114_95_115_105_109_112_108_101_95_116_121_112_101_115_95_102_111_114_95_105_110_116_51_95_95_91_49_93_95_48_3_p_0(
  MR_Word TypeCtorCheckedMap_5,
  MR_Word * IntRepns_6)
{
  {
    MR_Word RepnMap0_7;
    MR_Word EqvMap0_8;
    MR_Word WordAlignedMap0_9;
    MR_Word ExportedTypesSet0_10;
    MR_Word RepnMap_11;
    MR_Word EqvMap_12;
    MR_Word WordAlignedMap_13;
    MR_Word ExportedTypesSet_14;
    MR_Word ExportedTypes_15;
    MR_Word IntRepnMap_16;
    MR_Word IntWordAlignedMap_17;
    MR_Word IntRepnsCord0_18;
    MR_Word IntRepnsCord1_19;
    MR_Word IntRepnsCord2_20;
    MR_Word IntRepnsCord_21;
    MR_Box conv7_RepnMap_11;
    MR_Box conv6_EqvMap_12;
    MR_Box conv5_WordAlignedMap_13;
    MR_Box conv4_ExportedTypesSet_14;
    MR_Box conv9_IntRepnsCord1_19;
    MR_Box conv11_IntRepnsCord2_20;
    MR_Box conv13_IntRepnsCord_21;

    mercury__map__init_1_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_type_ctor_0), (MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_type_repn_info_0), &RepnMap0_7);
    mercury__map__init_1_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_type_ctor_0), (MR_Word) (&parse_tree__decide_type_repn_scalar_common_1[0]), &EqvMap0_8);
    mercury__map__init_1_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_type_ctor_0), (MR_Word) (&parse_tree__decide_type_repn__parse_tree__decide_type_repn__type_ctor_info_maybe_word_alignment_0), &WordAlignedMap0_9);
    ExportedTypesSet0_10 = mercury__set_tree234__init_0_f_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_type_ctor_0));
    mercury__map__foldl4_10_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_type_ctor_0), (MR_Word) (&parse_tree__check_parse_tree_type_defns__parse_tree__check_parse_tree_type_defns__type_ctor_info_type_ctor_checked_defn_0), (MR_Word) (&parse_tree__decide_type_repn_scalar_common_2[0]), (MR_Word) (&parse_tree__decide_type_repn_scalar_common_2[1]), (MR_Word) (&parse_tree__decide_type_repn_scalar_common_2[2]), (MR_Word) (&parse_tree__decide_type_repn_scalar_common_1[1]), (MR_Word) (&parse_tree__decide_type_repn_scalar_common_2[3]), TypeCtorCheckedMap_5, ((MR_Box) (RepnMap0_7)), &conv7_RepnMap_11, ((MR_Box) (EqvMap0_8)), &conv6_EqvMap_12, ((MR_Box) (WordAlignedMap0_9)), &conv5_WordAlignedMap_13, ((MR_Box) (ExportedTypesSet0_10)), &conv4_ExportedTypesSet_14);
    RepnMap_11 = ((MR_Word) (conv7_RepnMap_11));
    EqvMap_12 = ((MR_Word) (conv6_EqvMap_12));
    WordAlignedMap_13 = ((MR_Word) (conv5_WordAlignedMap_13));
    ExportedTypesSet_14 = ((MR_Word) (conv4_ExportedTypesSet_14));
    mercury__set_tree234__to_sorted_list_2_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_type_ctor_0), ExportedTypesSet_14, &ExportedTypes_15);
    mercury__map__select_sorted_list_3_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_type_ctor_0), (MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_type_repn_info_0), RepnMap_11, ExportedTypes_15, &IntRepnMap_16);
    mercury__map__select_sorted_list_3_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_type_ctor_0), (MR_Word) (&parse_tree__decide_type_repn__parse_tree__decide_type_repn__type_ctor_info_maybe_word_alignment_0), WordAlignedMap_13, ExportedTypes_15, &IntWordAlignedMap_17);
    IntRepnsCord0_18 = mercury__cord__init_0_f_0((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_type_repn_info_0));
    mercury__map__foldl_values_4_p_0((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_type_repn_info_0), (MR_Word) (&parse_tree__decide_type_repn_scalar_common_1[2]), (MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_type_ctor_0), (MR_Word) (&parse_tree__decide_type_repn_scalar_common_2[4]), IntRepnMap_16, ((MR_Box) (IntRepnsCord0_18)), &conv9_IntRepnsCord1_19);
    IntRepnsCord1_19 = ((MR_Word) (conv9_IntRepnsCord1_19));
    mercury__map__foldl_4_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_type_ctor_0), (MR_Word) (&parse_tree__decide_type_repn__parse_tree__decide_type_repn__type_ctor_info_maybe_word_alignment_0), (MR_Word) (&parse_tree__decide_type_repn_scalar_common_1[2]), (MR_Word) (&parse_tree__decide_type_repn_scalar_common_2[5]), IntWordAlignedMap_17, ((MR_Box) (IntRepnsCord1_19)), &conv11_IntRepnsCord2_20);
    IntRepnsCord2_20 = ((MR_Word) (conv11_IntRepnsCord2_20));
    mercury__map__foldl_values_4_p_0((MR_Word) (&parse_tree__decide_type_repn_scalar_common_1[0]), (MR_Word) (&parse_tree__decide_type_repn_scalar_common_1[2]), (MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_type_ctor_0), (MR_Word) (&parse_tree__decide_type_repn_scalar_common_2[6]), EqvMap_12, ((MR_Box) (IntRepnsCord2_20)), &conv13_IntRepnsCord_21);
    IntRepnsCord_21 = ((MR_Word) (conv13_IntRepnsCord_21));
    *IntRepns_6 = mercury__cord__list_1_f_0((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_type_repn_info_0), IntRepnsCord_21);
  }
}

static MR_bool MR_CALL 
parse_tree__decide_type_repn____Unify____eqv_map_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  {
    MR_bool succeeded;

    succeeded = parse_tree__decide_type_repn____Unify____eqv_map_0_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
    return succeeded;
  }
}

static void MR_CALL 
parse_tree__decide_type_repn____Compare____eqv_map_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  {
    MR_Word conv0_HeadVar__1_1;

    parse_tree__decide_type_repn____Compare____eqv_map_0_0(&conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
    *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
  }
}

static MR_bool MR_CALL 
parse_tree__decide_type_repn____Unify____maybe_word_alignment_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  {
    MR_bool succeeded;

    succeeded = parse_tree__decide_type_repn____Unify____maybe_word_alignment_0_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
    return succeeded;
  }
}

static void MR_CALL 
parse_tree__decide_type_repn____Compare____maybe_word_alignment_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  {
    MR_Word conv0_HeadVar__1_1;

    parse_tree__decide_type_repn____Compare____maybe_word_alignment_0_0(&conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
    *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
  }
}

static MR_bool MR_CALL 
parse_tree__decide_type_repn____Unify____word_alignment_map_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  {
    MR_bool succeeded;

    succeeded = parse_tree__decide_type_repn____Unify____word_alignment_map_0_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
    return succeeded;
  }
}

static void MR_CALL 
parse_tree__decide_type_repn____Compare____word_alignment_map_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  {
    MR_Word conv0_HeadVar__1_1;

    parse_tree__decide_type_repn____Compare____word_alignment_map_0_0(&conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
    *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
  }
}

void mercury__parse_tree__decide_type_repn__init(void)
{
}

void mercury__parse_tree__decide_type_repn__init_type_tables(void)
{
	static MR_bool initialised = MR_FALSE;
	if (initialised) return;
	initialised = MR_TRUE;

	MR_register_type_ctor_info(&parse_tree__decide_type_repn__parse_tree__decide_type_repn__type_ctor_info_eqv_map_0);
	MR_register_type_ctor_info(&parse_tree__decide_type_repn__parse_tree__decide_type_repn__type_ctor_info_maybe_word_alignment_0);
	MR_register_type_ctor_info(&parse_tree__decide_type_repn__parse_tree__decide_type_repn__type_ctor_info_word_alignment_map_0);
}

void mercury__parse_tree__decide_type_repn__init_debugger(void)
{
	MR_fatal_error("debugger initialization in MLDS grade");
}

// Ensure everything is compiled with the same grade.
const char *mercury__parse_tree__decide_type_repn__grade_check(void)
{
    return &MR_GRADE_VAR;
}

// :- end_module parse_tree.decide_type_repn.
