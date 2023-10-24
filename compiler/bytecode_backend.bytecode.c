/*
** Automatically generated from `bytecode.m'
** by the Mercury compiler,
** version rotd-2023-10-24
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


// :- module bytecode_backend.bytecode.
// :- implementation.

/*
INIT mercury__bytecode_backend__bytecode__init
ENDINIT
*/

#include "bytecode_backend.bytecode.mih"


#include "array.mih"
#include "assoc_list.mih"
#include "backend_libs.mih"
#include "bitmap.mih"
#include "bool.mih"
#include "builtin.mih"
#include "bytecode_backend.mih"
#include "char.mih"
#include "construct.mih"
#include "cord.mih"
#include "deconstruct.mih"
#include "enum.mih"
#include "getopt.mih"
#include "hlds.mih"
#include "io.mih"
#include "libs.mih"
#include "list.mih"
#include "map.mih"
#include "maybe.mih"
#include "mdbcomp.mih"
#include "one_or_more.mih"
#include "one_or_more_map.mih"
#include "ops.mih"
#include "pair.mih"
#include "parse_tree.mih"
#include "pretty_printer.mih"
#include "private_builtin.mih"
#include "require.mih"
#include "set.mih"
#include "set_ordlist.mih"
#include "sparse_bitset.mih"
#include "stream.mih"
#include "string.mih"
#include "term.mih"
#include "term_context.mih"
#include "time.mih"
#include "tree234.mih"
#include "type_desc.mih"
#include "univ.mih"
#include "varset.mih"
#include "backend_libs.builtin_ops.mih"
#include "backend_libs.bytecode_data.mih"
#include "backend_libs.c_util.mih"
#include "hlds.hlds_pred.mih"
#include "libs.globals.mih"
#include "libs.options.mih"
#include "mdbcomp.prim_data.mih"
#include "mdbcomp.sym_name.mih"
#include "parse_tree.prog_data.mih"
#include "parse_tree.prog_item.mih"
#include "parse_tree.set_of_var.mih"
#include "string.format.mih"
#include "string.parse_util.mih"




static const MR_FA_PseudoTypeInfo_Struct1 bytecode_backend__bytecode__list__pti_list_1__plain_bytecode_backend__bytecode__type_ctor_info_byte_cons_id_0;

static const MR_PseudoTypeInfo bytecode_backend__bytecode__bytecode_backend__bytecode__field_types_byte_arg_0_0[1];

static const MR_DuFunctorDesc bytecode_backend__bytecode__bytecode_backend__bytecode__du_functor_desc_byte_arg_0_0;

static const MR_PseudoTypeInfo bytecode_backend__bytecode__bytecode_backend__bytecode__field_types_byte_arg_0_1[1];

static const MR_DuFunctorDesc bytecode_backend__bytecode__bytecode_backend__bytecode__du_functor_desc_byte_arg_0_1;

static const MR_PseudoTypeInfo bytecode_backend__bytecode__bytecode_backend__bytecode__field_types_byte_arg_0_2[1];

static const MR_DuFunctorDesc bytecode_backend__bytecode__bytecode_backend__bytecode__du_functor_desc_byte_arg_0_2;

static const MR_PseudoTypeInfo bytecode_backend__bytecode__bytecode_backend__bytecode__field_types_byte_arg_0_3[1];

static const MR_DuFunctorDesc bytecode_backend__bytecode__bytecode_backend__bytecode__du_functor_desc_byte_arg_0_3;

static const MR_PseudoTypeInfo bytecode_backend__bytecode__bytecode_backend__bytecode__field_types_byte_arg_0_4[1];

static const MR_DuFunctorDesc bytecode_backend__bytecode__bytecode_backend__bytecode__du_functor_desc_byte_arg_0_4;

static const MR_PseudoTypeInfo bytecode_backend__bytecode__bytecode_backend__bytecode__field_types_byte_arg_0_5[1];

static const MR_DuFunctorDesc bytecode_backend__bytecode__bytecode_backend__bytecode__du_functor_desc_byte_arg_0_5;

static const MR_PseudoTypeInfo bytecode_backend__bytecode__bytecode_backend__bytecode__field_types_byte_arg_0_6[1];

static const MR_DuFunctorDesc bytecode_backend__bytecode__bytecode_backend__bytecode__du_functor_desc_byte_arg_0_6;

static const MR_PseudoTypeInfo bytecode_backend__bytecode__bytecode_backend__bytecode__field_types_byte_arg_0_7[1];

static const MR_DuFunctorDesc bytecode_backend__bytecode__bytecode_backend__bytecode__du_functor_desc_byte_arg_0_7;

static const MR_PseudoTypeInfo bytecode_backend__bytecode__bytecode_backend__bytecode__field_types_byte_arg_0_8[1];

static const MR_DuFunctorDesc bytecode_backend__bytecode__bytecode_backend__bytecode__du_functor_desc_byte_arg_0_8;

static const MR_PseudoTypeInfo bytecode_backend__bytecode__bytecode_backend__bytecode__field_types_byte_arg_0_9[1];

static const MR_DuFunctorDesc bytecode_backend__bytecode__bytecode_backend__bytecode__du_functor_desc_byte_arg_0_9;

static const MR_PseudoTypeInfo bytecode_backend__bytecode__bytecode_backend__bytecode__field_types_byte_arg_0_10[1];

static const MR_DuFunctorDesc bytecode_backend__bytecode__bytecode_backend__bytecode__du_functor_desc_byte_arg_0_10;

static const MR_PseudoTypeInfo bytecode_backend__bytecode__bytecode_backend__bytecode__field_types_byte_arg_0_11[1];

static const MR_DuFunctorDesc bytecode_backend__bytecode__bytecode_backend__bytecode__du_functor_desc_byte_arg_0_11;

static const MR_DuFunctorDescPtr bytecode_backend__bytecode__bytecode_backend__bytecode__du_stag_ordered_byte_arg_0_0[1];

static const MR_DuFunctorDescPtr bytecode_backend__bytecode__bytecode_backend__bytecode__du_stag_ordered_byte_arg_0_1[1];

static const MR_DuFunctorDescPtr bytecode_backend__bytecode__bytecode_backend__bytecode__du_stag_ordered_byte_arg_0_2[1];

static const MR_DuFunctorDescPtr bytecode_backend__bytecode__bytecode_backend__bytecode__du_stag_ordered_byte_arg_0_3[9];

static const MR_DuPtagLayout bytecode_backend__bytecode__bytecode_backend__bytecode__du_ptag_ordered_byte_arg_0[4];

static const MR_DuFunctorDescPtr bytecode_backend__bytecode__bytecode_backend__bytecode__du_name_ordered_byte_arg_0[12];

static const MR_Integer bytecode_backend__bytecode__bytecode_backend__bytecode__functor_number_map_byte_arg_0[12];

static const MR_PseudoTypeInfo bytecode_backend__bytecode__bytecode_backend__bytecode__field_types_byte_code_0_0[4];

static const MR_DuFunctorDesc bytecode_backend__bytecode__bytecode_backend__bytecode__du_functor_desc_byte_code_0_0;

static const MR_DuFunctorDesc bytecode_backend__bytecode__bytecode_backend__bytecode__du_functor_desc_byte_code_0_1;

static const MR_FA_TypeInfo_Struct1 bytecode_backend__bytecode__list__ti_list_1bytecode_backend__bytecode__type_ctor_info_byte_var_info_0;

static const MR_PseudoTypeInfo bytecode_backend__bytecode__bytecode_backend__bytecode__field_types_byte_code_0_2[6];

static const MR_DuArgLocn bytecode_backend__bytecode__bytecode_backend__bytecode__field_locns_byte_code_0_2[6];

static const MR_DuFunctorDesc bytecode_backend__bytecode__bytecode_backend__bytecode__du_functor_desc_byte_code_0_2;

static const MR_DuFunctorDesc bytecode_backend__bytecode__bytecode_backend__bytecode__du_functor_desc_byte_code_0_3;

static const MR_PseudoTypeInfo bytecode_backend__bytecode__bytecode_backend__bytecode__field_types_byte_code_0_4[1];

static const MR_DuFunctorDesc bytecode_backend__bytecode__bytecode_backend__bytecode__du_functor_desc_byte_code_0_4;

static const MR_PseudoTypeInfo bytecode_backend__bytecode__bytecode_backend__bytecode__field_types_byte_code_0_5[1];

static const MR_DuFunctorDesc bytecode_backend__bytecode__bytecode_backend__bytecode__du_functor_desc_byte_code_0_5;

static const MR_DuFunctorDesc bytecode_backend__bytecode__bytecode_backend__bytecode__du_functor_desc_byte_code_0_6;

static const MR_PseudoTypeInfo bytecode_backend__bytecode__bytecode_backend__bytecode__field_types_byte_code_0_7[1];

static const MR_DuFunctorDesc bytecode_backend__bytecode__bytecode_backend__bytecode__du_functor_desc_byte_code_0_7;

static const MR_PseudoTypeInfo bytecode_backend__bytecode__bytecode_backend__bytecode__field_types_byte_code_0_8[1];

static const MR_DuFunctorDesc bytecode_backend__bytecode__bytecode_backend__bytecode__du_functor_desc_byte_code_0_8;

static const MR_PseudoTypeInfo bytecode_backend__bytecode__bytecode_backend__bytecode__field_types_byte_code_0_9[2];

static const MR_DuFunctorDesc bytecode_backend__bytecode__bytecode_backend__bytecode__du_functor_desc_byte_code_0_9;

static const MR_DuFunctorDesc bytecode_backend__bytecode__bytecode_backend__bytecode__du_functor_desc_byte_code_0_10;

static const MR_FA_TypeInfo_Struct1 bytecode_backend__bytecode__list__ti_list_1bytecode_backend__bytecode__type_ctor_info_byte_cons_id_0;

static const MR_PseudoTypeInfo bytecode_backend__bytecode__bytecode_backend__bytecode__field_types_byte_code_0_11[3];

static const MR_DuFunctorDesc bytecode_backend__bytecode__bytecode_backend__bytecode__du_functor_desc_byte_code_0_11;

static const MR_PseudoTypeInfo bytecode_backend__bytecode__bytecode_backend__bytecode__field_types_byte_code_0_12[1];

static const MR_DuFunctorDesc bytecode_backend__bytecode__bytecode_backend__bytecode__du_functor_desc_byte_code_0_12;

static const MR_PseudoTypeInfo bytecode_backend__bytecode__bytecode_backend__bytecode__field_types_byte_code_0_13[3];

static const MR_DuFunctorDesc bytecode_backend__bytecode__bytecode_backend__bytecode__du_functor_desc_byte_code_0_13;

static const MR_PseudoTypeInfo bytecode_backend__bytecode__bytecode_backend__bytecode__field_types_byte_code_0_14[1];

static const MR_DuFunctorDesc bytecode_backend__bytecode__bytecode_backend__bytecode__du_functor_desc_byte_code_0_14;

static const MR_PseudoTypeInfo bytecode_backend__bytecode__bytecode_backend__bytecode__field_types_byte_code_0_15[1];

static const MR_DuFunctorDesc bytecode_backend__bytecode__bytecode_backend__bytecode__du_functor_desc_byte_code_0_15;

static const MR_PseudoTypeInfo bytecode_backend__bytecode__bytecode_backend__bytecode__field_types_byte_code_0_16[1];

static const MR_DuFunctorDesc bytecode_backend__bytecode__bytecode_backend__bytecode__du_functor_desc_byte_code_0_16;

static const MR_DuFunctorDesc bytecode_backend__bytecode__bytecode_backend__bytecode__du_functor_desc_byte_code_0_17;

static const MR_PseudoTypeInfo bytecode_backend__bytecode__bytecode_backend__bytecode__field_types_byte_code_0_18[2];

static const MR_DuFunctorDesc bytecode_backend__bytecode__bytecode_backend__bytecode__du_functor_desc_byte_code_0_18;

static const MR_PseudoTypeInfo bytecode_backend__bytecode__bytecode_backend__bytecode__field_types_byte_code_0_19[1];

static const MR_DuFunctorDesc bytecode_backend__bytecode__bytecode_backend__bytecode__du_functor_desc_byte_code_0_19;

static const MR_DuFunctorDesc bytecode_backend__bytecode__bytecode_backend__bytecode__du_functor_desc_byte_code_0_20;

static const MR_PseudoTypeInfo bytecode_backend__bytecode__bytecode_backend__bytecode__field_types_byte_code_0_21[1];

static const MR_DuFunctorDesc bytecode_backend__bytecode__bytecode_backend__bytecode__du_functor_desc_byte_code_0_21;

static const MR_PseudoTypeInfo bytecode_backend__bytecode__bytecode_backend__bytecode__field_types_byte_code_0_22[1];

static const MR_DuFunctorDesc bytecode_backend__bytecode__bytecode_backend__bytecode__du_functor_desc_byte_code_0_22;

static const MR_PseudoTypeInfo bytecode_backend__bytecode__bytecode_backend__bytecode__field_types_byte_code_0_23[2];

static const MR_DuFunctorDesc bytecode_backend__bytecode__bytecode_backend__bytecode__du_functor_desc_byte_code_0_23;

static const MR_PseudoTypeInfo bytecode_backend__bytecode__bytecode_backend__bytecode__field_types_byte_code_0_24[3];

static const MR_DuArgLocn bytecode_backend__bytecode__bytecode_backend__bytecode__field_locns_byte_code_0_24[3];

static const MR_DuFunctorDesc bytecode_backend__bytecode__bytecode_backend__bytecode__du_functor_desc_byte_code_0_24;

static const MR_FA_TypeInfo_Struct1 bytecode_backend__bytecode__list__ti_list_1builtin__type_ctor_info_int_0;

static const MR_PseudoTypeInfo bytecode_backend__bytecode__bytecode_backend__bytecode__field_types_byte_code_0_25[3];

static const MR_DuFunctorDesc bytecode_backend__bytecode__bytecode_backend__bytecode__du_functor_desc_byte_code_0_25;

static const MR_PseudoTypeInfo bytecode_backend__bytecode__bytecode_backend__bytecode__field_types_byte_code_0_26[3];

static const MR_DuFunctorDesc bytecode_backend__bytecode__bytecode_backend__bytecode__du_functor_desc_byte_code_0_26;

static const MR_FA_TypeInfo_Struct2 bytecode_backend__bytecode__pair__ti_pair_2builtin__type_ctor_info_int_0bytecode_backend__bytecode__type_ctor_info_byte_dir_0;

static const MR_FA_TypeInfo_Struct1 bytecode_backend__bytecode__list__ti_list_1pair__ti_pair_2builtin__type_ctor_info_int_0bytecode_backend__bytecode__type_ctor_info_byte_dir_0;

static const MR_PseudoTypeInfo bytecode_backend__bytecode__bytecode_backend__bytecode__field_types_byte_code_0_27[3];

static const MR_DuFunctorDesc bytecode_backend__bytecode__bytecode_backend__bytecode__du_functor_desc_byte_code_0_27;

static const MR_PseudoTypeInfo bytecode_backend__bytecode__bytecode_backend__bytecode__field_types_byte_code_0_28[3];

static const MR_DuFunctorDesc bytecode_backend__bytecode__bytecode_backend__bytecode__du_functor_desc_byte_code_0_28;

static const MR_PseudoTypeInfo bytecode_backend__bytecode__bytecode_backend__bytecode__field_types_byte_code_0_29[3];

static const MR_DuFunctorDesc bytecode_backend__bytecode__bytecode_backend__bytecode__du_functor_desc_byte_code_0_29;

static const MR_PseudoTypeInfo bytecode_backend__bytecode__bytecode_backend__bytecode__field_types_byte_code_0_30[3];

static const MR_DuFunctorDesc bytecode_backend__bytecode__bytecode_backend__bytecode__du_functor_desc_byte_code_0_30;

static const MR_PseudoTypeInfo bytecode_backend__bytecode__bytecode_backend__bytecode__field_types_byte_code_0_31[5];

static const MR_DuFunctorDesc bytecode_backend__bytecode__bytecode_backend__bytecode__du_functor_desc_byte_code_0_31;

static const MR_PseudoTypeInfo bytecode_backend__bytecode__bytecode_backend__bytecode__field_types_byte_code_0_32[4];

static const MR_DuArgLocn bytecode_backend__bytecode__bytecode_backend__bytecode__field_locns_byte_code_0_32[4];

static const MR_DuFunctorDesc bytecode_backend__bytecode__bytecode_backend__bytecode__du_functor_desc_byte_code_0_32;

static const MR_PseudoTypeInfo bytecode_backend__bytecode__bytecode_backend__bytecode__field_types_byte_code_0_33[4];

static const MR_DuFunctorDesc bytecode_backend__bytecode__bytecode_backend__bytecode__du_functor_desc_byte_code_0_33;

static const MR_PseudoTypeInfo bytecode_backend__bytecode__bytecode_backend__bytecode__field_types_byte_code_0_34[3];

static const MR_DuFunctorDesc bytecode_backend__bytecode__bytecode_backend__bytecode__du_functor_desc_byte_code_0_34;

static const MR_PseudoTypeInfo bytecode_backend__bytecode__bytecode_backend__bytecode__field_types_byte_code_0_35[3];

static const MR_DuFunctorDesc bytecode_backend__bytecode__bytecode_backend__bytecode__du_functor_desc_byte_code_0_35;

static const MR_PseudoTypeInfo bytecode_backend__bytecode__bytecode_backend__bytecode__field_types_byte_code_0_36[2];

static const MR_DuFunctorDesc bytecode_backend__bytecode__bytecode_backend__bytecode__du_functor_desc_byte_code_0_36;

static const MR_DuFunctorDesc bytecode_backend__bytecode__bytecode_backend__bytecode__du_functor_desc_byte_code_0_37;

static const MR_DuFunctorDesc bytecode_backend__bytecode__bytecode_backend__bytecode__du_functor_desc_byte_code_0_38;

static const MR_DuFunctorDesc bytecode_backend__bytecode__bytecode_backend__bytecode__du_functor_desc_byte_code_0_39;

static const MR_PseudoTypeInfo bytecode_backend__bytecode__bytecode_backend__bytecode__field_types_byte_code_0_40[1];

static const MR_DuFunctorDesc bytecode_backend__bytecode__bytecode_backend__bytecode__du_functor_desc_byte_code_0_40;

static const MR_DuFunctorDesc bytecode_backend__bytecode__bytecode_backend__bytecode__du_functor_desc_byte_code_0_41;

static const MR_DuFunctorDescPtr bytecode_backend__bytecode__bytecode_backend__bytecode__du_stag_ordered_byte_code_0_0[10];

static const MR_DuFunctorDescPtr bytecode_backend__bytecode__bytecode_backend__bytecode__du_stag_ordered_byte_code_0_1[1];

static const MR_DuFunctorDescPtr bytecode_backend__bytecode__bytecode_backend__bytecode__du_stag_ordered_byte_code_0_2[1];

static const MR_DuFunctorDescPtr bytecode_backend__bytecode__bytecode_backend__bytecode__du_stag_ordered_byte_code_0_3[30];

static const MR_DuPtagLayout bytecode_backend__bytecode__bytecode_backend__bytecode__du_ptag_ordered_byte_code_0[4];

static const MR_DuFunctorDescPtr bytecode_backend__bytecode__bytecode_backend__bytecode__du_name_ordered_byte_code_0[42];

static const MR_Integer bytecode_backend__bytecode__bytecode_backend__bytecode__functor_number_map_byte_code_0[42];

static const MR_PseudoTypeInfo bytecode_backend__bytecode__bytecode_backend__bytecode__field_types_byte_cons_id_0_0[4];

static const MR_DuFunctorDesc bytecode_backend__bytecode__bytecode_backend__bytecode__du_functor_desc_byte_cons_id_0_0;

static const MR_PseudoTypeInfo bytecode_backend__bytecode__bytecode_backend__bytecode__field_types_byte_cons_id_0_1[1];

static const MR_DuFunctorDesc bytecode_backend__bytecode__bytecode_backend__bytecode__du_functor_desc_byte_cons_id_0_1;

static const MR_PseudoTypeInfo bytecode_backend__bytecode__bytecode_backend__bytecode__field_types_byte_cons_id_0_2[1];

static const MR_DuFunctorDesc bytecode_backend__bytecode__bytecode_backend__bytecode__du_functor_desc_byte_cons_id_0_2;

static const MR_PseudoTypeInfo bytecode_backend__bytecode__bytecode_backend__bytecode__field_types_byte_cons_id_0_3[1];

static const MR_DuFunctorDesc bytecode_backend__bytecode__bytecode_backend__bytecode__du_functor_desc_byte_cons_id_0_3;

static const MR_PseudoTypeInfo bytecode_backend__bytecode__bytecode_backend__bytecode__field_types_byte_cons_id_0_4[1];

static const MR_DuFunctorDesc bytecode_backend__bytecode__bytecode_backend__bytecode__du_functor_desc_byte_cons_id_0_4;

static const MR_PseudoTypeInfo bytecode_backend__bytecode__bytecode_backend__bytecode__field_types_byte_cons_id_0_5[5];

static const MR_DuFunctorDesc bytecode_backend__bytecode__bytecode_backend__bytecode__du_functor_desc_byte_cons_id_0_5;

static const MR_PseudoTypeInfo bytecode_backend__bytecode__bytecode_backend__bytecode__field_types_byte_cons_id_0_6[3];

static const MR_DuFunctorDesc bytecode_backend__bytecode__bytecode_backend__bytecode__du_functor_desc_byte_cons_id_0_6;

static const MR_PseudoTypeInfo bytecode_backend__bytecode__bytecode_backend__bytecode__field_types_byte_cons_id_0_7[3];

static const MR_DuFunctorDesc bytecode_backend__bytecode__bytecode_backend__bytecode__du_functor_desc_byte_cons_id_0_7;

static const MR_DuFunctorDesc bytecode_backend__bytecode__bytecode_backend__bytecode__du_functor_desc_byte_cons_id_0_8;

static const MR_DuFunctorDesc bytecode_backend__bytecode__bytecode_backend__bytecode__du_functor_desc_byte_cons_id_0_9;

static const MR_DuFunctorDescPtr bytecode_backend__bytecode__bytecode_backend__bytecode__du_stag_ordered_byte_cons_id_0_0[2];

static const MR_DuFunctorDescPtr bytecode_backend__bytecode__bytecode_backend__bytecode__du_stag_ordered_byte_cons_id_0_1[1];

static const MR_DuFunctorDescPtr bytecode_backend__bytecode__bytecode_backend__bytecode__du_stag_ordered_byte_cons_id_0_2[1];

static const MR_DuFunctorDescPtr bytecode_backend__bytecode__bytecode_backend__bytecode__du_stag_ordered_byte_cons_id_0_3[6];

static const MR_DuPtagLayout bytecode_backend__bytecode__bytecode_backend__bytecode__du_ptag_ordered_byte_cons_id_0[4];

static const MR_DuFunctorDescPtr bytecode_backend__bytecode__bytecode_backend__bytecode__du_name_ordered_byte_cons_id_0[10];

static const MR_Integer bytecode_backend__bytecode__bytecode_backend__bytecode__functor_number_map_byte_cons_id_0[10];

static const MR_DuFunctorDesc bytecode_backend__bytecode__bytecode_backend__bytecode__du_functor_desc_byte_cons_tag_0_0;

static const MR_PseudoTypeInfo bytecode_backend__bytecode__bytecode_backend__bytecode__field_types_byte_cons_tag_0_1[1];

static const MR_DuFunctorDesc bytecode_backend__bytecode__bytecode_backend__bytecode__du_functor_desc_byte_cons_tag_0_1;

static const MR_PseudoTypeInfo bytecode_backend__bytecode__bytecode_backend__bytecode__field_types_byte_cons_tag_0_2[2];

static const MR_DuFunctorDesc bytecode_backend__bytecode__bytecode_backend__bytecode__du_functor_desc_byte_cons_tag_0_2;

static const MR_PseudoTypeInfo bytecode_backend__bytecode__bytecode_backend__bytecode__field_types_byte_cons_tag_0_3[2];

static const MR_DuFunctorDesc bytecode_backend__bytecode__bytecode_backend__bytecode__du_functor_desc_byte_cons_tag_0_3;

static const MR_PseudoTypeInfo bytecode_backend__bytecode__bytecode_backend__bytecode__field_types_byte_cons_tag_0_4[1];

static const MR_DuFunctorDesc bytecode_backend__bytecode__bytecode_backend__bytecode__du_functor_desc_byte_cons_tag_0_4;

static const MR_DuFunctorDescPtr bytecode_backend__bytecode__bytecode_backend__bytecode__du_stag_ordered_byte_cons_tag_0_0[1];

static const MR_DuFunctorDescPtr bytecode_backend__bytecode__bytecode_backend__bytecode__du_stag_ordered_byte_cons_tag_0_1[1];

static const MR_DuFunctorDescPtr bytecode_backend__bytecode__bytecode_backend__bytecode__du_stag_ordered_byte_cons_tag_0_2[1];

static const MR_DuFunctorDescPtr bytecode_backend__bytecode__bytecode_backend__bytecode__du_stag_ordered_byte_cons_tag_0_3[2];

static const MR_DuPtagLayout bytecode_backend__bytecode__bytecode_backend__bytecode__du_ptag_ordered_byte_cons_tag_0[4];

static const MR_DuFunctorDescPtr bytecode_backend__bytecode__bytecode_backend__bytecode__du_name_ordered_byte_cons_tag_0[5];

static const MR_Integer bytecode_backend__bytecode__bytecode_backend__bytecode__functor_number_map_byte_cons_tag_0[5];

static const MR_EnumFunctorDesc bytecode_backend__bytecode__bytecode_backend__bytecode__enum_functor_desc_byte_dir_0_0;

static const MR_EnumFunctorDesc bytecode_backend__bytecode__bytecode_backend__bytecode__enum_functor_desc_byte_dir_0_1;

static const MR_EnumFunctorDesc bytecode_backend__bytecode__bytecode_backend__bytecode__enum_functor_desc_byte_dir_0_2;

static const MR_EnumFunctorDescPtr bytecode_backend__bytecode__bytecode_backend__bytecode__enum_ordinal_ordered_byte_dir_0[3];

static const MR_EnumFunctorDescPtr bytecode_backend__bytecode__bytecode_backend__bytecode__enum_name_ordered_byte_dir_0[3];

static const MR_Integer bytecode_backend__bytecode__bytecode_backend__bytecode__functor_number_map_byte_dir_0[3];

static const MR_EnumFunctorDesc bytecode_backend__bytecode__bytecode_backend__bytecode__enum_functor_desc_byte_reg_type_0_0;

static const MR_EnumFunctorDescPtr bytecode_backend__bytecode__bytecode_backend__bytecode__enum_ordinal_ordered_byte_reg_type_0[1];

static const MR_EnumFunctorDescPtr bytecode_backend__bytecode__bytecode_backend__bytecode__enum_name_ordered_byte_reg_type_0[1];

static const MR_Integer bytecode_backend__bytecode__bytecode_backend__bytecode__functor_number_map_byte_reg_type_0[1];

static const MR_EnumFunctorDesc bytecode_backend__bytecode__bytecode_backend__bytecode__enum_functor_desc_byte_test_id_0_0;

static const MR_EnumFunctorDesc bytecode_backend__bytecode__bytecode_backend__bytecode__enum_functor_desc_byte_test_id_0_1;

static const MR_EnumFunctorDesc bytecode_backend__bytecode__bytecode_backend__bytecode__enum_functor_desc_byte_test_id_0_2;

static const MR_EnumFunctorDesc bytecode_backend__bytecode__bytecode_backend__bytecode__enum_functor_desc_byte_test_id_0_3;

static const MR_EnumFunctorDesc bytecode_backend__bytecode__bytecode_backend__bytecode__enum_functor_desc_byte_test_id_0_4;

static const MR_EnumFunctorDesc bytecode_backend__bytecode__bytecode_backend__bytecode__enum_functor_desc_byte_test_id_0_5;

static const MR_EnumFunctorDescPtr bytecode_backend__bytecode__bytecode_backend__bytecode__enum_ordinal_ordered_byte_test_id_0[6];

static const MR_EnumFunctorDescPtr bytecode_backend__bytecode__bytecode_backend__bytecode__enum_name_ordered_byte_test_id_0[6];

static const MR_Integer bytecode_backend__bytecode__bytecode_backend__bytecode__functor_number_map_byte_test_id_0[6];

static const MR_FA_TypeInfo_Struct1 bytecode_backend__bytecode__cord__ti_cord_1bytecode_backend__bytecode__type_ctor_info_byte_code_0;

static const MR_PseudoTypeInfo bytecode_backend__bytecode__bytecode_backend__bytecode__field_types_byte_var_info_0_0[2];

static const MR_DuFunctorDesc bytecode_backend__bytecode__bytecode_backend__bytecode__du_functor_desc_byte_var_info_0_0;

static const MR_DuFunctorDescPtr bytecode_backend__bytecode__bytecode_backend__bytecode__du_stag_ordered_byte_var_info_0_0[1];

static const MR_DuPtagLayout bytecode_backend__bytecode__bytecode_backend__bytecode__du_ptag_ordered_byte_var_info_0[1];

static const MR_DuFunctorDescPtr bytecode_backend__bytecode__bytecode_backend__bytecode__du_name_ordered_byte_var_info_0[1];

static const MR_Integer bytecode_backend__bytecode__bytecode_backend__bytecode__functor_number_map_byte_var_info_0[1];

static MR_bool MR_CALL 
bytecode_backend__bytecode__IntroducedFrom__pred__output_args__279__1_2_p_0(
  MR_Word OtherConsIds_21,
  MR_Word HeadVar__2_67);

static void MR_CALL 
bytecode_backend__bytecode__debug_bytecode_list_4_p_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2);

static void MR_CALL 
bytecode_backend__bytecode__debug_args_4_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3);

static void MR_CALL 
bytecode_backend__bytecode__debug_args_4_p_0(
  MR_Word OutputStream_5,
  MR_Word ByteCode_6);

static void MR_CALL 
bytecode_backend__bytecode__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_100_101_98_117_103_95_114_101_103_95_95_91_50_93_95_48_5_p_0(
  MR_Word OutputStream_6,
  MR_Integer N_7);

static void MR_CALL 
bytecode_backend__bytecode__debug_unop_4_p_0(
  MR_Word OutputStream_5,
  MR_Word Unop_6);

static void MR_CALL 
bytecode_backend__bytecode__debug_binop_4_p_0(
  MR_Word BinaryOutputStream_5,
  MR_Word Binop_6);

static void MR_CALL 
bytecode_backend__bytecode__binop_debug_2_p_0(
  MR_Word HeadVar__1_1,
  MR_String * HeadVar__2_2);

static void MR_CALL 
bytecode_backend__bytecode__debug_cons_id_4_p_0(
  MR_Word OutputStream_5,
  MR_Word ConsId_6);

static void MR_CALL 
bytecode_backend__bytecode__debug_cstring_4_p_0(
  MR_Word OutputStream_5,
  MR_String Str_6);

static void MR_CALL 
bytecode_backend__bytecode__debug_tag_4_p_0(
  MR_Word BinaryOutputStream_5,
  MR_Word ConsTag_6);

static void MR_CALL 
bytecode_backend__bytecode__debug_label_id_4_p_0(
  MR_Word OutputStream_5,
  MR_Integer LabelId_6);

static void MR_CALL 
bytecode_backend__bytecode__debug_proc_id_4_p_0(
  MR_Word OutputStream_5,
  MR_Integer ProcId_6);

static void MR_CALL 
bytecode_backend__bytecode__debug_pred_id_4_p_0(
  MR_Word OutputStream_5,
  MR_String PredId_6);

static void MR_CALL 
bytecode_backend__bytecode__debug_module_id_4_p_0(
  MR_Word OutputStream_5,
  MR_Word ModuleId_6);

static void MR_CALL 
bytecode_backend__bytecode__debug_sym_name_4_p_0(
  MR_Word OutputStream_5,
  MR_Word SymName_6);

static void MR_CALL 
bytecode_backend__bytecode__debug_test_id_4_p_0(
  MR_Word OutputStream_5,
  MR_Word Test_6);

static void MR_CALL 
bytecode_backend__bytecode__debug_var_dirs_4_p_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2);

static void MR_CALL 
bytecode_backend__bytecode__debug_temp_4_p_0(
  MR_Word OutputStream_5,
  MR_Integer Var_6);

static void MR_CALL 
bytecode_backend__bytecode__debug_vars_4_p_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2);

static void MR_CALL 
bytecode_backend__bytecode__debug_arg_4_p_0(
  MR_Word OutputStream_1,
  MR_Word HeadVar__2_2);

static void MR_CALL 
bytecode_backend__bytecode__debug_uint64_4_p_0(
  MR_Word OutputStream_5,
  uint64_t Val_6);

static void MR_CALL 
bytecode_backend__bytecode__debug_uint32_4_p_0(
  MR_Word OutputStream_5,
  uint32_t Val_6);

static void MR_CALL 
bytecode_backend__bytecode__debug_uint16_4_p_0(
  MR_Word OutputStream_5,
  uint16_t Val_6);

static void MR_CALL 
bytecode_backend__bytecode__debug_uint8_4_p_0(
  MR_Word OutputStream_5,
  uint8_t Val_6);

static void MR_CALL 
bytecode_backend__bytecode__debug_uint_4_p_0(
  MR_Word OutputStream_5,
  MR_Unsigned Val_6);

static void MR_CALL 
bytecode_backend__bytecode__debug_int_4_p_0(
  MR_Word OutputStream_5,
  MR_Integer Val_6);

static void MR_CALL 
bytecode_backend__bytecode__debug_string_4_p_0(
  MR_Word OutputStream_5,
  MR_String Val_6);

static void MR_CALL 
bytecode_backend__bytecode__debug_var_4_p_0(
  MR_Word OutputStream_5,
  MR_Integer Var_6);

static void MR_CALL 
bytecode_backend__bytecode__debug_length_4_p_0(
  MR_Word OutputStream_5,
  MR_Integer Length_6);

static void MR_CALL 
bytecode_backend__bytecode__debug_is_func_4_p_0(
  MR_Word OutputStream_5,
  MR_Integer IsFunc_6);

static void MR_CALL 
bytecode_backend__bytecode__debug_determinism_4_p_0(
  MR_Word OutputStream_5,
  MR_Word Detism_6);

static void MR_CALL 
bytecode_backend__bytecode__debug_var_infos_4_p_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2);

static void MR_CALL 
bytecode_backend__bytecode__output_bytecode_list_4_p_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2);

static MR_bool MR_CALL 
bytecode_backend__bytecode__output_args_4_p_0_1(
  MR_Box closure_arg);

static void MR_CALL 
bytecode_backend__bytecode__output_args_4_p_0(
  MR_Word BinaryOutputStream_5,
  MR_Word ByteCode_6);

static void MR_CALL 
bytecode_backend__bytecode__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_111_117_116_112_117_116_95_114_101_103_95_95_91_50_93_95_48_5_p_0(
  MR_Word BinaryOutputStream_6,
  MR_Integer N_7);

static void MR_CALL 
bytecode_backend__bytecode__output_unop_4_p_0(
  MR_Word BinaryOutputStream_5,
  MR_Word Unop_6);

static void MR_CALL 
bytecode_backend__bytecode__output_binop_4_p_0(
  MR_Word OutputStream_5,
  MR_Word Binop_6);

static void MR_CALL 
bytecode_backend__bytecode__binop_code_2_p_0(
  MR_Word HeadVar__1_1,
  MR_Integer * HeadVar__2_2);

static void MR_CALL 
bytecode_backend__bytecode__output_cons_id_4_p_0(
  MR_Word BinaryOutputStream_5,
  MR_Word ConsId_6);

static void MR_CALL 
bytecode_backend__bytecode__output_label_id_4_p_0(
  MR_Word BinaryOutputStream_5,
  MR_Integer LabelId_6);

static void MR_CALL 
bytecode_backend__bytecode__output_proc_id_4_p_0(
  MR_Word BinaryOutputStream_5,
  MR_Integer ProcId_6);

static void MR_CALL 
bytecode_backend__bytecode__output_pred_id_4_p_0(
  MR_Word BinaryOutputStream_5,
  MR_String PredId_6);

static void MR_CALL 
bytecode_backend__bytecode__output_module_id_4_p_0(
  MR_Word BinaryOutputStream_5,
  MR_Word ModuleId_6);

static void MR_CALL 
bytecode_backend__bytecode__output_test_id_4_p_0(
  MR_Word BinaryOutputStream_5,
  MR_Word Test_6);

static void MR_CALL 
bytecode_backend__bytecode__output_var_dirs_4_p_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2);

static void MR_CALL 
bytecode_backend__bytecode__output_temp_4_p_0(
  MR_Word BinaryOutputStream_5,
  MR_Integer Var_6);

static void MR_CALL 
bytecode_backend__bytecode__output_vars_4_p_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2);

static void MR_CALL 
bytecode_backend__bytecode__output_var_4_p_0(
  MR_Word BinaryOutputStream_5,
  MR_Integer Var_6);

static void MR_CALL 
bytecode_backend__bytecode__output_arg_4_p_0(
  MR_Word BinaryOutputStream_1,
  MR_Word HeadVar__2_2);

static void MR_CALL 
bytecode_backend__bytecode__output_length_4_p_0(
  MR_Word BinaryOutputStream_5,
  MR_Integer Length_6);

static void MR_CALL 
bytecode_backend__bytecode__output_is_func_4_p_0(
  MR_Word BinaryOutputStream_5,
  MR_Integer IsFunc_6);

static void MR_CALL 
bytecode_backend__bytecode__output_determinism_4_p_0(
  MR_Word BinaryOutputStream_5,
  MR_Word Detism_6);

static void MR_CALL 
bytecode_backend__bytecode__output_var_infos_4_p_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2);

static MR_bool MR_CALL 
bytecode_backend__bytecode____Unify____byte_arg_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2);

static void MR_CALL 
bytecode_backend__bytecode____Compare____byte_arg_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3);

static MR_bool MR_CALL 
bytecode_backend__bytecode____Unify____byte_code_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2);

static void MR_CALL 
bytecode_backend__bytecode____Compare____byte_code_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3);

static MR_bool MR_CALL 
bytecode_backend__bytecode____Unify____byte_cons_id_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2);

static void MR_CALL 
bytecode_backend__bytecode____Compare____byte_cons_id_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3);

static MR_bool MR_CALL 
bytecode_backend__bytecode____Unify____byte_cons_tag_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2);

static void MR_CALL 
bytecode_backend__bytecode____Compare____byte_cons_tag_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3);

static MR_bool MR_CALL 
bytecode_backend__bytecode____Unify____byte_dir_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2);

static void MR_CALL 
bytecode_backend__bytecode____Compare____byte_dir_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3);

static MR_bool MR_CALL 
bytecode_backend__bytecode____Unify____byte_is_func_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2);

static void MR_CALL 
bytecode_backend__bytecode____Compare____byte_is_func_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3);

static MR_bool MR_CALL 
bytecode_backend__bytecode____Unify____byte_label_id_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2);

static void MR_CALL 
bytecode_backend__bytecode____Compare____byte_label_id_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3);

static MR_bool MR_CALL 
bytecode_backend__bytecode____Unify____byte_module_id_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2);

static void MR_CALL 
bytecode_backend__bytecode____Compare____byte_module_id_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3);

static MR_bool MR_CALL 
bytecode_backend__bytecode____Unify____byte_pred_id_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2);

static void MR_CALL 
bytecode_backend__bytecode____Compare____byte_pred_id_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3);

static MR_bool MR_CALL 
bytecode_backend__bytecode____Unify____byte_proc_id_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2);

static void MR_CALL 
bytecode_backend__bytecode____Compare____byte_proc_id_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3);

static MR_bool MR_CALL 
bytecode_backend__bytecode____Unify____byte_reg_type_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2);

static void MR_CALL 
bytecode_backend__bytecode____Compare____byte_reg_type_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3);

static MR_bool MR_CALL 
bytecode_backend__bytecode____Unify____byte_temp_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2);

static void MR_CALL 
bytecode_backend__bytecode____Compare____byte_temp_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3);

static MR_bool MR_CALL 
bytecode_backend__bytecode____Unify____byte_test_id_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2);

static void MR_CALL 
bytecode_backend__bytecode____Compare____byte_test_id_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3);

static MR_bool MR_CALL 
bytecode_backend__bytecode____Unify____byte_tree_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2);

static void MR_CALL 
bytecode_backend__bytecode____Compare____byte_tree_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3);

static MR_bool MR_CALL 
bytecode_backend__bytecode____Unify____byte_var_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2);

static void MR_CALL 
bytecode_backend__bytecode____Compare____byte_var_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3);

static MR_bool MR_CALL 
bytecode_backend__bytecode____Unify____byte_var_info_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2);

static void MR_CALL 
bytecode_backend__bytecode____Compare____byte_var_info_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3);


static /* final */ const MR_Box bytecode_backend__bytecode_scalar_common_1[5][2];

static /* final */ const MR_Box bytecode_backend__bytecode_scalar_common_2[1][3];

static /* final */ const MR_Box bytecode_backend__bytecode_scalar_common_3[1][1];

static /* final */ const MR_Box bytecode_backend__bytecode_scalar_common_5[1][5];

static /* final */ const MR_Box bytecode_backend__bytecode_scalar_common_7[1][7];


struct bytecode_backend__bytecode__vector_common_type_4_0_s {
  const MR_Integer bytecode_backend__bytecode__vector_common_type_4_0__vct_4_f_0;
};

static /* final */ const struct bytecode_backend__bytecode__vector_common_type_4_0_s bytecode_backend__bytecode_vector_common_4[204];

struct bytecode_backend__bytecode__vector_common_type_6_0_s {
  const MR_String bytecode_backend__bytecode__vector_common_type_6_0__vct_6_f_0;
};

static /* final */ const struct bytecode_backend__bytecode__vector_common_type_6_0_s bytecode_backend__bytecode_vector_common_6[204];



static /* final */ const MR_Box bytecode_backend__bytecode_scalar_common_1[5][2] = {
  /* row   0 */
  {
    ((MR_Box) (&mercury__list__list__type_ctor_info_list_1)),
    ((MR_Box) (&bytecode_backend__bytecode__bytecode_backend__bytecode__type_ctor_info_byte_cons_id_0))
  },
  /* row   1 */
  {
    ((MR_Box) (&mercury__list__list__type_ctor_info_list_1)),
    ((MR_Box) (&bytecode_backend__bytecode__bytecode_backend__bytecode__type_ctor_info_byte_var_info_0))
  },
  /* row   2 */
  {
    ((MR_Box) (&mercury__list__list__type_ctor_info_list_1)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_int_0))
  },
  /* row   3 */
  {
    ((MR_Box) (&mercury__list__list__type_ctor_info_list_1)),
    ((MR_Box) (&bytecode_backend__bytecode_scalar_common_2[0]))
  },
  /* row   4 */
  {
    ((MR_Box) (&mercury__cord__cord__type_ctor_info_cord_1)),
    ((MR_Box) (&bytecode_backend__bytecode__bytecode_backend__bytecode__type_ctor_info_byte_code_0))
  },
};

static /* final */ const MR_Box bytecode_backend__bytecode_scalar_common_2[1][3] = {
  /* row   0 */
  {
    ((MR_Box) (&mercury__pair__pair__type_ctor_info_pair_2)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_int_0)),
    ((MR_Box) (&bytecode_backend__bytecode__bytecode_backend__bytecode__type_ctor_info_byte_dir_0))
  },
};

static /* final */ const MR_Box bytecode_backend__bytecode_scalar_common_3[1][1] = {
  /* row   0 */
  { (MR_Box) (((((MR_Unsigned) 0U << 4)) | (((((MR_Unsigned) 0U << 3)) | (((((MR_Unsigned) 0U << 2)) | (((MR_Unsigned) 0U << 1)))))))) },
};

static /* final */ const MR_Box bytecode_backend__bytecode_scalar_common_5[1][5] = {
  /* row   0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 2)),
    ((MR_Box) (&bytecode_backend__bytecode__list__pti_list_1__plain_bytecode_backend__bytecode__type_ctor_info_byte_cons_id_0)),
    ((MR_Box) (&bytecode_backend__bytecode__list__pti_list_1__plain_bytecode_backend__bytecode__type_ctor_info_byte_cons_id_0))
  },
};

static /* final */ const MR_Box bytecode_backend__bytecode_scalar_common_7[1][7] = {
  /* row   0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 4)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_text_output_stream_0)),
    ((MR_Box) (&bytecode_backend__bytecode__bytecode_backend__bytecode__type_ctor_info_byte_cons_id_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0))
  },
};


static /* final */ const struct bytecode_backend__bytecode__vector_common_type_4_0_s bytecode_backend__bytecode_vector_common_4[204] = {
  /* row   0 */   { (MR_Integer) 0 },
  /* row   1 */   { (MR_Integer) 1 },
  /* row   2 */   { (MR_Integer) 2 },
  /* row   3 */   { (MR_Integer) 3 },
  /* row   4 */   { (MR_Integer) 4 },
  /* row   5 */   { (MR_Integer) 5 },
  /* row   6 */   { (MR_Integer) 6 },
  /* row   7 */   { (MR_Integer) 7 },
  /* row   8 */   { (MR_Integer) 0 },
  /* row   9 */   { (MR_Integer) 1 },
  /* row  10 */   { (MR_Integer) 2 },
  /* row  11 */   { (MR_Integer) 3 },
  /* row  12 */   { (MR_Integer) 4 },
  /* row  13 */   { (MR_Integer) 5 },
  /* row  14 */   { (MR_Integer) 7 },
  /* row  15 */   { (MR_Integer) 56 },
  /* row  16 */   { (MR_Integer) 72 },
  /* row  17 */   { (MR_Integer) 88 },
  /* row  18 */   { (MR_Integer) 104 },
  /* row  19 */   { (MR_Integer) 120 },
  /* row  20 */   { (MR_Integer) 136 },
  /* row  21 */   { (MR_Integer) 152 },
  /* row  22 */   { (MR_Integer) 168 },
  /* row  23 */   { (MR_Integer) 184 },
  /* row  24 */   { (MR_Integer) 8 },
  /* row  25 */   { (MR_Integer) 57 },
  /* row  26 */   { (MR_Integer) 73 },
  /* row  27 */   { (MR_Integer) 89 },
  /* row  28 */   { (MR_Integer) 105 },
  /* row  29 */   { (MR_Integer) 121 },
  /* row  30 */   { (MR_Integer) 137 },
  /* row  31 */   { (MR_Integer) 153 },
  /* row  32 */   { (MR_Integer) 169 },
  /* row  33 */   { (MR_Integer) 185 },
  /* row  34 */   { (MR_Integer) 9 },
  /* row  35 */   { (MR_Integer) 58 },
  /* row  36 */   { (MR_Integer) 74 },
  /* row  37 */   { (MR_Integer) 90 },
  /* row  38 */   { (MR_Integer) 106 },
  /* row  39 */   { (MR_Integer) 122 },
  /* row  40 */   { (MR_Integer) 138 },
  /* row  41 */   { (MR_Integer) 154 },
  /* row  42 */   { (MR_Integer) 170 },
  /* row  43 */   { (MR_Integer) 186 },
  /* row  44 */   { (MR_Integer) 12 },
  /* row  45 */   { (MR_Integer) 45 },
  /* row  46 */   { (MR_Integer) 61 },
  /* row  47 */   { (MR_Integer) 77 },
  /* row  48 */   { (MR_Integer) 93 },
  /* row  49 */   { (MR_Integer) 109 },
  /* row  50 */   { (MR_Integer) 125 },
  /* row  51 */   { (MR_Integer) 141 },
  /* row  52 */   { (MR_Integer) 157 },
  /* row  53 */   { (MR_Integer) 173 },
  /* row  54 */   { (MR_Integer) 0 },
  /* row  55 */   { (MR_Integer) 51 },
  /* row  56 */   { (MR_Integer) 67 },
  /* row  57 */   { (MR_Integer) 83 },
  /* row  58 */   { (MR_Integer) 99 },
  /* row  59 */   { (MR_Integer) 115 },
  /* row  60 */   { (MR_Integer) 131 },
  /* row  61 */   { (MR_Integer) 147 },
  /* row  62 */   { (MR_Integer) 163 },
  /* row  63 */   { (MR_Integer) 179 },
  /* row  64 */   { (MR_Integer) 3 },
  /* row  65 */   { (MR_Integer) 54 },
  /* row  66 */   { (MR_Integer) 70 },
  /* row  67 */   { (MR_Integer) 86 },
  /* row  68 */   { (MR_Integer) 102 },
  /* row  69 */   { (MR_Integer) 118 },
  /* row  70 */   { (MR_Integer) 134 },
  /* row  71 */   { (MR_Integer) 150 },
  /* row  72 */   { (MR_Integer) 166 },
  /* row  73 */   { (MR_Integer) 182 },
  /* row  74 */   { (MR_Integer) 24 },
  /* row  75 */   { (MR_Integer) 50 },
  /* row  76 */   { (MR_Integer) 66 },
  /* row  77 */   { (MR_Integer) 82 },
  /* row  78 */   { (MR_Integer) 98 },
  /* row  79 */   { (MR_Integer) 114 },
  /* row  80 */   { (MR_Integer) 130 },
  /* row  81 */   { (MR_Integer) 146 },
  /* row  82 */   { (MR_Integer) 162 },
  /* row  83 */   { (MR_Integer) 178 },
  /* row  84 */   { (MR_Integer) 22 },
  /* row  85 */   { (MR_Integer) 48 },
  /* row  86 */   { (MR_Integer) 64 },
  /* row  87 */   { (MR_Integer) 80 },
  /* row  88 */   { (MR_Integer) 96 },
  /* row  89 */   { (MR_Integer) 112 },
  /* row  90 */   { (MR_Integer) 128 },
  /* row  91 */   { (MR_Integer) 144 },
  /* row  92 */   { (MR_Integer) 160 },
  /* row  93 */   { (MR_Integer) 176 },
  /* row  94 */   { (MR_Integer) 23 },
  /* row  95 */   { (MR_Integer) 49 },
  /* row  96 */   { (MR_Integer) 65 },
  /* row  97 */   { (MR_Integer) 81 },
  /* row  98 */   { (MR_Integer) 97 },
  /* row  99 */   { (MR_Integer) 113 },
  /* row 100 */   { (MR_Integer) 129 },
  /* row 101 */   { (MR_Integer) 145 },
  /* row 102 */   { (MR_Integer) 161 },
  /* row 103 */   { (MR_Integer) 177 },
  /* row 104 */   { (MR_Integer) 21 },
  /* row 105 */   { (MR_Integer) 47 },
  /* row 106 */   { (MR_Integer) 63 },
  /* row 107 */   { (MR_Integer) 79 },
  /* row 108 */   { (MR_Integer) 95 },
  /* row 109 */   { (MR_Integer) 111 },
  /* row 110 */   { (MR_Integer) 127 },
  /* row 111 */   { (MR_Integer) 143 },
  /* row 112 */   { (MR_Integer) 159 },
  /* row 113 */   { (MR_Integer) 175 },
  /* row 114 */   { (MR_Integer) 4 },
  /* row 115 */   { (MR_Integer) 55 },
  /* row 116 */   { (MR_Integer) 71 },
  /* row 117 */   { (MR_Integer) 87 },
  /* row 118 */   { (MR_Integer) 103 },
  /* row 119 */   { (MR_Integer) 119 },
  /* row 120 */   { (MR_Integer) 135 },
  /* row 121 */   { (MR_Integer) 151 },
  /* row 122 */   { (MR_Integer) 167 },
  /* row 123 */   { (MR_Integer) 183 },
  /* row 124 */   { (MR_Integer) 2 },
  /* row 125 */   { (MR_Integer) 53 },
  /* row 126 */   { (MR_Integer) 69 },
  /* row 127 */   { (MR_Integer) 85 },
  /* row 128 */   { (MR_Integer) 101 },
  /* row 129 */   { (MR_Integer) 117 },
  /* row 130 */   { (MR_Integer) 133 },
  /* row 131 */   { (MR_Integer) 149 },
  /* row 132 */   { (MR_Integer) 165 },
  /* row 133 */   { (MR_Integer) 181 },
  /* row 134 */   { (MR_Integer) 1 },
  /* row 135 */   { (MR_Integer) 52 },
  /* row 136 */   { (MR_Integer) 68 },
  /* row 137 */   { (MR_Integer) 84 },
  /* row 138 */   { (MR_Integer) 100 },
  /* row 139 */   { (MR_Integer) 116 },
  /* row 140 */   { (MR_Integer) 132 },
  /* row 141 */   { (MR_Integer) 148 },
  /* row 142 */   { (MR_Integer) 164 },
  /* row 143 */   { (MR_Integer) 180 },
  /* row 144 */   { (MR_Integer) 13 },
  /* row 145 */   { (MR_Integer) 46 },
  /* row 146 */   { (MR_Integer) 62 },
  /* row 147 */   { (MR_Integer) 78 },
  /* row 148 */   { (MR_Integer) 94 },
  /* row 149 */   { (MR_Integer) 110 },
  /* row 150 */   { (MR_Integer) 126 },
  /* row 151 */   { (MR_Integer) 142 },
  /* row 152 */   { (MR_Integer) 158 },
  /* row 153 */   { (MR_Integer) 174 },
  /* row 154 */   { (MR_Integer) 5 },
  /* row 155 */   { (MR_Integer) 59 },
  /* row 156 */   { (MR_Integer) 75 },
  /* row 157 */   { (MR_Integer) 91 },
  /* row 158 */   { (MR_Integer) 107 },
  /* row 159 */   { (MR_Integer) 123 },
  /* row 160 */   { (MR_Integer) 139 },
  /* row 161 */   { (MR_Integer) 155 },
  /* row 162 */   { (MR_Integer) 171 },
  /* row 163 */   { (MR_Integer) 187 },
  /* row 164 */   { (MR_Integer) 191 },
  /* row 165 */   { (MR_Integer) 193 },
  /* row 166 */   { (MR_Integer) 195 },
  /* row 167 */   { (MR_Integer) 197 },
  /* row 168 */   { (MR_Integer) 199 },
  /* row 169 */   { (MR_Integer) 201 },
  /* row 170 */   { (MR_Integer) 203 },
  /* row 171 */   { (MR_Integer) 205 },
  /* row 172 */   { (MR_Integer) 207 },
  /* row 173 */   { (MR_Integer) 209 },
  /* row 174 */   { (MR_Integer) 6 },
  /* row 175 */   { (MR_Integer) 60 },
  /* row 176 */   { (MR_Integer) 76 },
  /* row 177 */   { (MR_Integer) 92 },
  /* row 178 */   { (MR_Integer) 108 },
  /* row 179 */   { (MR_Integer) 124 },
  /* row 180 */   { (MR_Integer) 140 },
  /* row 181 */   { (MR_Integer) 156 },
  /* row 182 */   { (MR_Integer) 172 },
  /* row 183 */   { (MR_Integer) 188 },
  /* row 184 */   { (MR_Integer) 192 },
  /* row 185 */   { (MR_Integer) 194 },
  /* row 186 */   { (MR_Integer) 196 },
  /* row 187 */   { (MR_Integer) 198 },
  /* row 188 */   { (MR_Integer) 200 },
  /* row 189 */   { (MR_Integer) 202 },
  /* row 190 */   { (MR_Integer) 204 },
  /* row 191 */   { (MR_Integer) 206 },
  /* row 192 */   { (MR_Integer) 208 },
  /* row 193 */   { (MR_Integer) 210 },
  /* row 194 */   { (MR_Integer) 6 },
  /* row 195 */   { (MR_Integer) 14 },
  /* row 196 */   { (MR_Integer) 15 },
  /* row 197 */   { (MR_Integer) 16 },
  /* row 198 */   { (MR_Integer) 17 },
  /* row 199 */   { (MR_Integer) 18 },
  /* row 200 */   { (MR_Integer) 19 },
  /* row 201 */   { (MR_Integer) 20 },
  /* row 202 */   { (MR_Integer) 21 },
  /* row 203 */   { (MR_Integer) 22 },
};

static /* final */ const struct bytecode_backend__bytecode__vector_common_type_6_0_s bytecode_backend__bytecode_vector_common_6[204] = {
  /* row   0 */   { (MR_String) "det" },
  /* row   1 */   { (MR_String) "semidet" },
  /* row   2 */   { (MR_String) "multidet" },
  /* row   3 */   { (MR_String) "nondet" },
  /* row   4 */   { (MR_String) "cc_multidet" },
  /* row   5 */   { (MR_String) "cc_nondet" },
  /* row   6 */   { (MR_String) "erroneous" },
  /* row   7 */   { (MR_String) "failure" },
  /* row   8 */   { (MR_String) "int" },
  /* row   9 */   { (MR_String) "char" },
  /* row  10 */   { (MR_String) "string" },
  /* row  11 */   { (MR_String) "float" },
  /* row  12 */   { (MR_String) "enum" },
  /* row  13 */   { (MR_String) "dummy" },
  /* row  14 */   { (MR_String) "&" },
  /* row  15 */   { (MR_String) "&(uint)" },
  /* row  16 */   { (MR_String) "&(int8)" },
  /* row  17 */   { (MR_String) "&(uint8)" },
  /* row  18 */   { (MR_String) "&(int16)" },
  /* row  19 */   { (MR_String) "&(uint16)" },
  /* row  20 */   { (MR_String) "&(int32)" },
  /* row  21 */   { (MR_String) "&(uint32)" },
  /* row  22 */   { (MR_String) "&(int64)" },
  /* row  23 */   { (MR_String) "&(uint64)" },
  /* row  24 */   { (MR_String) "|" },
  /* row  25 */   { (MR_String) "|(uint)" },
  /* row  26 */   { (MR_String) "|(int8)" },
  /* row  27 */   { (MR_String) "|(uint8)" },
  /* row  28 */   { (MR_String) "|(int16)" },
  /* row  29 */   { (MR_String) "|(uint16)" },
  /* row  30 */   { (MR_String) "|(int32)" },
  /* row  31 */   { (MR_String) "|(uint32)" },
  /* row  32 */   { (MR_String) "|(int64)" },
  /* row  33 */   { (MR_String) "|(uint64)" },
  /* row  34 */   { (MR_String) "^" },
  /* row  35 */   { (MR_String) "^(uint)" },
  /* row  36 */   { (MR_String) "^(int8)" },
  /* row  37 */   { (MR_String) "^(uint8)" },
  /* row  38 */   { (MR_String) "^(int16)" },
  /* row  39 */   { (MR_String) "^(uint16)" },
  /* row  40 */   { (MR_String) "^(int32)" },
  /* row  41 */   { (MR_String) "^(uint32)" },
  /* row  42 */   { (MR_String) "^(int64)" },
  /* row  43 */   { (MR_String) "^(uint64)" },
  /* row  44 */   { (MR_String) "eq" },
  /* row  45 */   { (MR_String) "==(uint)" },
  /* row  46 */   { (MR_String) "==(int8)" },
  /* row  47 */   { (MR_String) "==(uint8)" },
  /* row  48 */   { (MR_String) "==(int6)" },
  /* row  49 */   { (MR_String) "==(uint16)" },
  /* row  50 */   { (MR_String) "==(int32)" },
  /* row  51 */   { (MR_String) "==(uint32)" },
  /* row  52 */   { (MR_String) "==(int64)" },
  /* row  53 */   { (MR_String) "==(uint64)" },
  /* row  54 */   { (MR_String) "+" },
  /* row  55 */   { (MR_String) "+(uint)" },
  /* row  56 */   { (MR_String) "+(int8)" },
  /* row  57 */   { (MR_String) "+(uint8)" },
  /* row  58 */   { (MR_String) "+(int16)" },
  /* row  59 */   { (MR_String) "+(uint16)" },
  /* row  60 */   { (MR_String) "+(int32)" },
  /* row  61 */   { (MR_String) "+(uint32)" },
  /* row  62 */   { (MR_String) "+(int64)" },
  /* row  63 */   { (MR_String) "+(uint64)" },
  /* row  64 */   { (MR_String) "/" },
  /* row  65 */   { (MR_String) "/(uint)" },
  /* row  66 */   { (MR_String) "/(int8)" },
  /* row  67 */   { (MR_String) "/(uint8)" },
  /* row  68 */   { (MR_String) "/(int16)" },
  /* row  69 */   { (MR_String) "/(uint16)" },
  /* row  70 */   { (MR_String) "/(int32)" },
  /* row  71 */   { (MR_String) "/(uint32)" },
  /* row  72 */   { (MR_String) "/(int64)" },
  /* row  73 */   { (MR_String) "/(uint64)" },
  /* row  74 */   { (MR_String) ">=" },
  /* row  75 */   { (MR_String) ">=(uint)" },
  /* row  76 */   { (MR_String) ">=(int8)" },
  /* row  77 */   { (MR_String) ">=(uint8)" },
  /* row  78 */   { (MR_String) ">=(int16)" },
  /* row  79 */   { (MR_String) ">=(uint16)" },
  /* row  80 */   { (MR_String) ">=(int32)" },
  /* row  81 */   { (MR_String) ">=(uint32)" },
  /* row  82 */   { (MR_String) ">=(int64)" },
  /* row  83 */   { (MR_String) ">=(uint64)" },
  /* row  84 */   { (MR_String) ">" },
  /* row  85 */   { (MR_String) ">(uint)" },
  /* row  86 */   { (MR_String) ">(int8)" },
  /* row  87 */   { (MR_String) ">(uint8)" },
  /* row  88 */   { (MR_String) ">(int16)" },
  /* row  89 */   { (MR_String) ">(uint16)" },
  /* row  90 */   { (MR_String) ">(int32)" },
  /* row  91 */   { (MR_String) ">(uint32)" },
  /* row  92 */   { (MR_String) ">(int64)" },
  /* row  93 */   { (MR_String) ">(uint64)" },
  /* row  94 */   { (MR_String) "<=" },
  /* row  95 */   { (MR_String) "<=(uint)" },
  /* row  96 */   { (MR_String) "<=(int8)" },
  /* row  97 */   { (MR_String) "<=(uint8)" },
  /* row  98 */   { (MR_String) "<=(int16)" },
  /* row  99 */   { (MR_String) "<=(uint16)" },
  /* row 100 */   { (MR_String) "<=(int32)" },
  /* row 101 */   { (MR_String) "<=(uint32)" },
  /* row 102 */   { (MR_String) "<=(int64)" },
  /* row 103 */   { (MR_String) "<=(uint64)" },
  /* row 104 */   { (MR_String) "<" },
  /* row 105 */   { (MR_String) "<(uint)" },
  /* row 106 */   { (MR_String) "<(int8)" },
  /* row 107 */   { (MR_String) "<(uint8)" },
  /* row 108 */   { (MR_String) "<(int16)" },
  /* row 109 */   { (MR_String) "<(uint16)" },
  /* row 110 */   { (MR_String) "<(int32)" },
  /* row 111 */   { (MR_String) "<(uint32)" },
  /* row 112 */   { (MR_String) "<(int64)" },
  /* row 113 */   { (MR_String) "<(uint64)" },
  /* row 114 */   { (MR_String) "mod" },
  /* row 115 */   { (MR_String) "mod(uint)" },
  /* row 116 */   { (MR_String) "mod(int8)" },
  /* row 117 */   { (MR_String) "mod(uint8)" },
  /* row 118 */   { (MR_String) "mod(int16)" },
  /* row 119 */   { (MR_String) "mod(uint16)" },
  /* row 120 */   { (MR_String) "mod(int32)" },
  /* row 121 */   { (MR_String) "mod(uint32" },
  /* row 122 */   { (MR_String) "mod(int64)" },
  /* row 123 */   { (MR_String) "mod(uint64" },
  /* row 124 */   { (MR_String) "*" },
  /* row 125 */   { (MR_String) "*(uint)" },
  /* row 126 */   { (MR_String) "*(int8)" },
  /* row 127 */   { (MR_String) "*(uint8)" },
  /* row 128 */   { (MR_String) "*(int16)" },
  /* row 129 */   { (MR_String) "*(uint16)" },
  /* row 130 */   { (MR_String) "*(int32)" },
  /* row 131 */   { (MR_String) "*(uint32)" },
  /* row 132 */   { (MR_String) "*(int64)" },
  /* row 133 */   { (MR_String) "*(uint64)" },
  /* row 134 */   { (MR_String) "-" },
  /* row 135 */   { (MR_String) "-(uint)" },
  /* row 136 */   { (MR_String) "-(int8)" },
  /* row 137 */   { (MR_String) "-(uint8)" },
  /* row 138 */   { (MR_String) "-(int16)" },
  /* row 139 */   { (MR_String) "-(uint16)" },
  /* row 140 */   { (MR_String) "-(int32)" },
  /* row 141 */   { (MR_String) "-(uint32)" },
  /* row 142 */   { (MR_String) "-(int64)" },
  /* row 143 */   { (MR_String) "-(uint64)" },
  /* row 144 */   { (MR_String) "ne" },
  /* row 145 */   { (MR_String) "!=(uint)" },
  /* row 146 */   { (MR_String) "!=(int8)" },
  /* row 147 */   { (MR_String) "!=(uint8)" },
  /* row 148 */   { (MR_String) "!=(int16)" },
  /* row 149 */   { (MR_String) "!=(uint16)" },
  /* row 150 */   { (MR_String) "!=(int32)" },
  /* row 151 */   { (MR_String) "!=(uint32)" },
  /* row 152 */   { (MR_String) "!=(int64)" },
  /* row 153 */   { (MR_String) "!=(uint64)" },
  /* row 154 */   { (MR_String) "<<" },
  /* row 155 */   { (MR_String) "<<(uint)" },
  /* row 156 */   { (MR_String) "<<(int8)" },
  /* row 157 */   { (MR_String) "<<(uint8)" },
  /* row 158 */   { (MR_String) "<<(int16)" },
  /* row 159 */   { (MR_String) "<<(uint16)" },
  /* row 160 */   { (MR_String) "<<(int32)" },
  /* row 161 */   { (MR_String) "<<(uint32)" },
  /* row 162 */   { (MR_String) "<<(int64)" },
  /* row 163 */   { (MR_String) "<<(uint64)" },
  /* row 164 */   { (MR_String) "<<u" },
  /* row 165 */   { (MR_String) "<<u(uint)" },
  /* row 166 */   { (MR_String) "<<u(int8)" },
  /* row 167 */   { (MR_String) "<<u(uint8)" },
  /* row 168 */   { (MR_String) "<<u(int16)" },
  /* row 169 */   { (MR_String) "<<u(uint16)" },
  /* row 170 */   { (MR_String) "<<u(int32)" },
  /* row 171 */   { (MR_String) "<<u(uint32)" },
  /* row 172 */   { (MR_String) "<<u(int64)" },
  /* row 173 */   { (MR_String) "<<u(uint64)" },
  /* row 174 */   { (MR_String) ">>" },
  /* row 175 */   { (MR_String) ">>(uint)" },
  /* row 176 */   { (MR_String) ">>(int8)" },
  /* row 177 */   { (MR_String) ">>(uint8)" },
  /* row 178 */   { (MR_String) ">>(int16)" },
  /* row 179 */   { (MR_String) ">>(uint16)" },
  /* row 180 */   { (MR_String) ">>(int32)" },
  /* row 181 */   { (MR_String) ">>(uint32)" },
  /* row 182 */   { (MR_String) ">>(int64)" },
  /* row 183 */   { (MR_String) ">>(uint64)" },
  /* row 184 */   { (MR_String) ">>u" },
  /* row 185 */   { (MR_String) ">>u(uint)" },
  /* row 186 */   { (MR_String) ">>u(int8)" },
  /* row 187 */   { (MR_String) ">>u(uint8)" },
  /* row 188 */   { (MR_String) ">>u(int16)" },
  /* row 189 */   { (MR_String) ">>u(uint16)" },
  /* row 190 */   { (MR_String) ">>u(int32)" },
  /* row 191 */   { (MR_String) ">>u(uint32)" },
  /* row 192 */   { (MR_String) ">>u(int64)" },
  /* row 193 */   { (MR_String) ">>u(uint64)" },
  /* row 194 */   { (MR_String) "bitwise_complement(int)" },
  /* row 195 */   { (MR_String) "bitwise_complement(uint)" },
  /* row 196 */   { (MR_String) "bitwise_complement(int8)" },
  /* row 197 */   { (MR_String) "bitwise_complement(uint8)" },
  /* row 198 */   { (MR_String) "bitwise_complement(int16)" },
  /* row 199 */   { (MR_String) "bitwise_complement(uint16)" },
  /* row 200 */   { (MR_String) "bitwise_complement(int32)" },
  /* row 201 */   { (MR_String) "bitwise_complement(uint32)" },
  /* row 202 */   { (MR_String) "bitwise_complement(int64)" },
  /* row 203 */   { (MR_String) "bitwise_complement(uint64)" },
};


#include "array.mh"
#include "bitmap.mh"
#include "io.mh"
#include "string.mh"
#include "time.mh"
#include "io.stream_ops.mh"


static const MR_FA_PseudoTypeInfo_Struct1 bytecode_backend__bytecode__list__pti_list_1__plain_bytecode_backend__bytecode__type_ctor_info_byte_cons_id_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  { (MR_PseudoTypeInfo) (&bytecode_backend__bytecode__bytecode_backend__bytecode__type_ctor_info_byte_cons_id_0) }
};

static const MR_PseudoTypeInfo bytecode_backend__bytecode__bytecode_backend__bytecode__field_types_byte_arg_0_0[1] = { (MR_PseudoTypeInfo) (&mercury__builtin__builtin__type_ctor_info_int_0) };

static const MR_DuFunctorDesc bytecode_backend__bytecode__bytecode_backend__bytecode__du_functor_desc_byte_arg_0_0 = {
  (MR_String) "byte_arg_var",
  INT16_C(1),
  UINT16_C(0),
  MR_SECTAG_NONE,
  UINT8_C(0),
  (MR_Integer) -1,
  INT32_C(0),
  bytecode_backend__bytecode__bytecode_backend__bytecode__field_types_byte_arg_0_0,
  NULL,
  NULL,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE,
  UINT8_C(0)
};

static const MR_PseudoTypeInfo bytecode_backend__bytecode__bytecode_backend__bytecode__field_types_byte_arg_0_1[1] = { (MR_PseudoTypeInfo) (&mercury__builtin__builtin__type_ctor_info_int_0) };

static const MR_DuFunctorDesc bytecode_backend__bytecode__bytecode_backend__bytecode__du_functor_desc_byte_arg_0_1 = {
  (MR_String) "byte_arg_int_const",
  INT16_C(1),
  UINT16_C(0),
  MR_SECTAG_NONE,
  UINT8_C(1),
  (MR_Integer) -1,
  INT32_C(1),
  bytecode_backend__bytecode__bytecode_backend__bytecode__field_types_byte_arg_0_1,
  NULL,
  NULL,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE,
  UINT8_C(0)
};

static const MR_PseudoTypeInfo bytecode_backend__bytecode__bytecode_backend__bytecode__field_types_byte_arg_0_2[1] = { (MR_PseudoTypeInfo) (&mercury__builtin__builtin__type_ctor_info_float_0) };

static const MR_DuFunctorDesc bytecode_backend__bytecode__bytecode_backend__bytecode__du_functor_desc_byte_arg_0_2 = {
  (MR_String) "byte_arg_float_const",
  INT16_C(1),
  UINT16_C(0),
  MR_SECTAG_NONE,
  UINT8_C(2),
  (MR_Integer) -1,
  INT32_C(2),
  bytecode_backend__bytecode__bytecode_backend__bytecode__field_types_byte_arg_0_2,
  NULL,
  NULL,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE,
  UINT8_C(0)
};

static const MR_PseudoTypeInfo bytecode_backend__bytecode__bytecode_backend__bytecode__field_types_byte_arg_0_3[1] = { (MR_PseudoTypeInfo) (&mercury__builtin__builtin__type_ctor_info_uint_0) };

static const MR_DuFunctorDesc bytecode_backend__bytecode__bytecode_backend__bytecode__du_functor_desc_byte_arg_0_3 = {
  (MR_String) "byte_arg_uint_const",
  INT16_C(1),
  UINT16_C(0),
  MR_SECTAG_REMOTE_FULL_WORD,
  UINT8_C(3),
  (MR_Integer) 0,
  INT32_C(3),
  bytecode_backend__bytecode__bytecode_backend__bytecode__field_types_byte_arg_0_3,
  NULL,
  NULL,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE,
  UINT8_C(0)
};

static const MR_PseudoTypeInfo bytecode_backend__bytecode__bytecode_backend__bytecode__field_types_byte_arg_0_4[1] = { (MR_PseudoTypeInfo) (&mercury__builtin__builtin__type_ctor_info_int8_0) };

static const MR_DuFunctorDesc bytecode_backend__bytecode__bytecode_backend__bytecode__du_functor_desc_byte_arg_0_4 = {
  (MR_String) "byte_arg_int8_const",
  INT16_C(1),
  UINT16_C(0),
  MR_SECTAG_REMOTE_FULL_WORD,
  UINT8_C(3),
  (MR_Integer) 1,
  INT32_C(4),
  bytecode_backend__bytecode__bytecode_backend__bytecode__field_types_byte_arg_0_4,
  NULL,
  NULL,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE,
  UINT8_C(0)
};

static const MR_PseudoTypeInfo bytecode_backend__bytecode__bytecode_backend__bytecode__field_types_byte_arg_0_5[1] = { (MR_PseudoTypeInfo) (&mercury__builtin__builtin__type_ctor_info_uint8_0) };

static const MR_DuFunctorDesc bytecode_backend__bytecode__bytecode_backend__bytecode__du_functor_desc_byte_arg_0_5 = {
  (MR_String) "byte_arg_uint8_const",
  INT16_C(1),
  UINT16_C(0),
  MR_SECTAG_REMOTE_FULL_WORD,
  UINT8_C(3),
  (MR_Integer) 2,
  INT32_C(5),
  bytecode_backend__bytecode__bytecode_backend__bytecode__field_types_byte_arg_0_5,
  NULL,
  NULL,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE,
  UINT8_C(0)
};

static const MR_PseudoTypeInfo bytecode_backend__bytecode__bytecode_backend__bytecode__field_types_byte_arg_0_6[1] = { (MR_PseudoTypeInfo) (&mercury__builtin__builtin__type_ctor_info_int16_0) };

static const MR_DuFunctorDesc bytecode_backend__bytecode__bytecode_backend__bytecode__du_functor_desc_byte_arg_0_6 = {
  (MR_String) "byte_arg_int16_const",
  INT16_C(1),
  UINT16_C(0),
  MR_SECTAG_REMOTE_FULL_WORD,
  UINT8_C(3),
  (MR_Integer) 3,
  INT32_C(6),
  bytecode_backend__bytecode__bytecode_backend__bytecode__field_types_byte_arg_0_6,
  NULL,
  NULL,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE,
  UINT8_C(0)
};

static const MR_PseudoTypeInfo bytecode_backend__bytecode__bytecode_backend__bytecode__field_types_byte_arg_0_7[1] = { (MR_PseudoTypeInfo) (&mercury__builtin__builtin__type_ctor_info_uint16_0) };

static const MR_DuFunctorDesc bytecode_backend__bytecode__bytecode_backend__bytecode__du_functor_desc_byte_arg_0_7 = {
  (MR_String) "byte_arg_uint16_const",
  INT16_C(1),
  UINT16_C(0),
  MR_SECTAG_REMOTE_FULL_WORD,
  UINT8_C(3),
  (MR_Integer) 4,
  INT32_C(7),
  bytecode_backend__bytecode__bytecode_backend__bytecode__field_types_byte_arg_0_7,
  NULL,
  NULL,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE,
  UINT8_C(0)
};

static const MR_PseudoTypeInfo bytecode_backend__bytecode__bytecode_backend__bytecode__field_types_byte_arg_0_8[1] = { (MR_PseudoTypeInfo) (&mercury__builtin__builtin__type_ctor_info_int32_0) };

static const MR_DuFunctorDesc bytecode_backend__bytecode__bytecode_backend__bytecode__du_functor_desc_byte_arg_0_8 = {
  (MR_String) "byte_arg_int32_const",
  INT16_C(1),
  UINT16_C(0),
  MR_SECTAG_REMOTE_FULL_WORD,
  UINT8_C(3),
  (MR_Integer) 5,
  INT32_C(8),
  bytecode_backend__bytecode__bytecode_backend__bytecode__field_types_byte_arg_0_8,
  NULL,
  NULL,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE,
  UINT8_C(0)
};

static const MR_PseudoTypeInfo bytecode_backend__bytecode__bytecode_backend__bytecode__field_types_byte_arg_0_9[1] = { (MR_PseudoTypeInfo) (&mercury__builtin__builtin__type_ctor_info_uint32_0) };

static const MR_DuFunctorDesc bytecode_backend__bytecode__bytecode_backend__bytecode__du_functor_desc_byte_arg_0_9 = {
  (MR_String) "byte_arg_uint32_const",
  INT16_C(1),
  UINT16_C(0),
  MR_SECTAG_REMOTE_FULL_WORD,
  UINT8_C(3),
  (MR_Integer) 6,
  INT32_C(9),
  bytecode_backend__bytecode__bytecode_backend__bytecode__field_types_byte_arg_0_9,
  NULL,
  NULL,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE,
  UINT8_C(0)
};

static const MR_PseudoTypeInfo bytecode_backend__bytecode__bytecode_backend__bytecode__field_types_byte_arg_0_10[1] = { (MR_PseudoTypeInfo) (&mercury__builtin__builtin__type_ctor_info_int64_0) };

static const MR_DuFunctorDesc bytecode_backend__bytecode__bytecode_backend__bytecode__du_functor_desc_byte_arg_0_10 = {
  (MR_String) "byte_arg_int64_const",
  INT16_C(1),
  UINT16_C(0),
  MR_SECTAG_REMOTE_FULL_WORD,
  UINT8_C(3),
  (MR_Integer) 7,
  INT32_C(10),
  bytecode_backend__bytecode__bytecode_backend__bytecode__field_types_byte_arg_0_10,
  NULL,
  NULL,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE,
  UINT8_C(0)
};

static const MR_PseudoTypeInfo bytecode_backend__bytecode__bytecode_backend__bytecode__field_types_byte_arg_0_11[1] = { (MR_PseudoTypeInfo) (&mercury__builtin__builtin__type_ctor_info_uint64_0) };

static const MR_DuFunctorDesc bytecode_backend__bytecode__bytecode_backend__bytecode__du_functor_desc_byte_arg_0_11 = {
  (MR_String) "byte_arg_uint64_const",
  INT16_C(1),
  UINT16_C(0),
  MR_SECTAG_REMOTE_FULL_WORD,
  UINT8_C(3),
  (MR_Integer) 8,
  INT32_C(11),
  bytecode_backend__bytecode__bytecode_backend__bytecode__field_types_byte_arg_0_11,
  NULL,
  NULL,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE,
  UINT8_C(0)
};

static const MR_DuFunctorDescPtr bytecode_backend__bytecode__bytecode_backend__bytecode__du_stag_ordered_byte_arg_0_0[1] = { &bytecode_backend__bytecode__bytecode_backend__bytecode__du_functor_desc_byte_arg_0_0 };

static const MR_DuFunctorDescPtr bytecode_backend__bytecode__bytecode_backend__bytecode__du_stag_ordered_byte_arg_0_1[1] = { &bytecode_backend__bytecode__bytecode_backend__bytecode__du_functor_desc_byte_arg_0_1 };

static const MR_DuFunctorDescPtr bytecode_backend__bytecode__bytecode_backend__bytecode__du_stag_ordered_byte_arg_0_2[1] = { &bytecode_backend__bytecode__bytecode_backend__bytecode__du_functor_desc_byte_arg_0_2 };

static const MR_DuFunctorDescPtr bytecode_backend__bytecode__bytecode_backend__bytecode__du_stag_ordered_byte_arg_0_3[9] = {
  &bytecode_backend__bytecode__bytecode_backend__bytecode__du_functor_desc_byte_arg_0_3,
  &bytecode_backend__bytecode__bytecode_backend__bytecode__du_functor_desc_byte_arg_0_4,
  &bytecode_backend__bytecode__bytecode_backend__bytecode__du_functor_desc_byte_arg_0_5,
  &bytecode_backend__bytecode__bytecode_backend__bytecode__du_functor_desc_byte_arg_0_6,
  &bytecode_backend__bytecode__bytecode_backend__bytecode__du_functor_desc_byte_arg_0_7,
  &bytecode_backend__bytecode__bytecode_backend__bytecode__du_functor_desc_byte_arg_0_8,
  &bytecode_backend__bytecode__bytecode_backend__bytecode__du_functor_desc_byte_arg_0_9,
  &bytecode_backend__bytecode__bytecode_backend__bytecode__du_functor_desc_byte_arg_0_10,
  &bytecode_backend__bytecode__bytecode_backend__bytecode__du_functor_desc_byte_arg_0_11
};

static const MR_DuPtagLayout bytecode_backend__bytecode__bytecode_backend__bytecode__du_ptag_ordered_byte_arg_0[4] = {
  {
    UINT32_C(1),
    MR_SECTAG_NONE,
    bytecode_backend__bytecode__bytecode_backend__bytecode__du_stag_ordered_byte_arg_0_0,
    INT8_C(-1),
    UINT8_C(0),
    UINT8_C(1)
  },
  {
    UINT32_C(1),
    MR_SECTAG_NONE,
    bytecode_backend__bytecode__bytecode_backend__bytecode__du_stag_ordered_byte_arg_0_1,
    INT8_C(-1),
    UINT8_C(1),
    UINT8_C(1)
  },
  {
    UINT32_C(1),
    MR_SECTAG_NONE,
    bytecode_backend__bytecode__bytecode_backend__bytecode__du_stag_ordered_byte_arg_0_2,
    INT8_C(-1),
    UINT8_C(2),
    UINT8_C(1)
  },
  {
    UINT32_C(9),
    MR_SECTAG_REMOTE_FULL_WORD,
    bytecode_backend__bytecode__bytecode_backend__bytecode__du_stag_ordered_byte_arg_0_3,
    INT8_C(-1),
    UINT8_C(3),
    UINT8_C(1)
  }
};

static const MR_DuFunctorDescPtr bytecode_backend__bytecode__bytecode_backend__bytecode__du_name_ordered_byte_arg_0[12] = {
  &bytecode_backend__bytecode__bytecode_backend__bytecode__du_functor_desc_byte_arg_0_2,
  &bytecode_backend__bytecode__bytecode_backend__bytecode__du_functor_desc_byte_arg_0_6,
  &bytecode_backend__bytecode__bytecode_backend__bytecode__du_functor_desc_byte_arg_0_8,
  &bytecode_backend__bytecode__bytecode_backend__bytecode__du_functor_desc_byte_arg_0_10,
  &bytecode_backend__bytecode__bytecode_backend__bytecode__du_functor_desc_byte_arg_0_4,
  &bytecode_backend__bytecode__bytecode_backend__bytecode__du_functor_desc_byte_arg_0_1,
  &bytecode_backend__bytecode__bytecode_backend__bytecode__du_functor_desc_byte_arg_0_7,
  &bytecode_backend__bytecode__bytecode_backend__bytecode__du_functor_desc_byte_arg_0_9,
  &bytecode_backend__bytecode__bytecode_backend__bytecode__du_functor_desc_byte_arg_0_11,
  &bytecode_backend__bytecode__bytecode_backend__bytecode__du_functor_desc_byte_arg_0_5,
  &bytecode_backend__bytecode__bytecode_backend__bytecode__du_functor_desc_byte_arg_0_3,
  &bytecode_backend__bytecode__bytecode_backend__bytecode__du_functor_desc_byte_arg_0_0
};

static const MR_Integer bytecode_backend__bytecode__bytecode_backend__bytecode__functor_number_map_byte_arg_0[12] = {
  (MR_Integer) 11,
  (MR_Integer) 5,
  (MR_Integer) 0,
  (MR_Integer) 10,
  (MR_Integer) 4,
  (MR_Integer) 9,
  (MR_Integer) 1,
  (MR_Integer) 6,
  (MR_Integer) 2,
  (MR_Integer) 7,
  (MR_Integer) 3,
  (MR_Integer) 8
};

const MR_TypeCtorInfo_Struct bytecode_backend__bytecode__bytecode_backend__bytecode__type_ctor_info_byte_arg_0 = {
  (MR_Integer) 0,
  UINT8_C(18),
  INT8_C(4),
  MR_TYPECTOR_REP_DU,
  ((MR_Box) (bytecode_backend__bytecode____Unify____byte_arg_0_0_10001)),
  ((MR_Box) (bytecode_backend__bytecode____Compare____byte_arg_0_0_10001)),
  (MR_String) "bytecode_backend.bytecode",
  (MR_String) "byte_arg",
  { bytecode_backend__bytecode__bytecode_backend__bytecode__du_name_ordered_byte_arg_0 },
  { bytecode_backend__bytecode__bytecode_backend__bytecode__du_ptag_ordered_byte_arg_0 },
  (MR_Integer) 12,
  UINT16_C(12),
  bytecode_backend__bytecode__bytecode_backend__bytecode__functor_number_map_byte_arg_0,

};

static const MR_PseudoTypeInfo bytecode_backend__bytecode__bytecode_backend__bytecode__field_types_byte_code_0_0[4] = {
  (MR_PseudoTypeInfo) (&mercury__builtin__builtin__type_ctor_info_string_0),
  (MR_PseudoTypeInfo) (&mercury__builtin__builtin__type_ctor_info_int_0),
  (MR_PseudoTypeInfo) (&mercury__builtin__builtin__type_ctor_info_int_0),
  (MR_PseudoTypeInfo) (&mercury__builtin__builtin__type_ctor_info_int_0)
};

static const MR_DuFunctorDesc bytecode_backend__bytecode__bytecode_backend__bytecode__du_functor_desc_byte_code_0_0 = {
  (MR_String) "byte_enter_pred",
  INT16_C(4),
  UINT16_C(0),
  MR_SECTAG_NONE,
  UINT8_C(1),
  (MR_Integer) -1,
  INT32_C(0),
  bytecode_backend__bytecode__bytecode_backend__bytecode__field_types_byte_code_0_0,
  NULL,
  NULL,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE,
  UINT8_C(0)
};

static const MR_DuFunctorDesc bytecode_backend__bytecode__bytecode_backend__bytecode__du_functor_desc_byte_code_0_1 = {
  (MR_String) "byte_endof_pred",
  INT16_C(0),
  UINT16_C(0),
  MR_SECTAG_LOCAL_REST_OF_WORD,
  UINT8_C(0),
  (MR_Integer) 0,
  INT32_C(1),
  NULL,
  NULL,
  NULL,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE,
  UINT8_C(0)
};

static const MR_FA_TypeInfo_Struct1 bytecode_backend__bytecode__list__ti_list_1bytecode_backend__bytecode__type_ctor_info_byte_var_info_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  { (MR_TypeInfo) (&bytecode_backend__bytecode__bytecode_backend__bytecode__type_ctor_info_byte_var_info_0) }
};

static const MR_PseudoTypeInfo bytecode_backend__bytecode__bytecode_backend__bytecode__field_types_byte_code_0_2[6] = {
  (MR_PseudoTypeInfo) (&mercury__builtin__builtin__type_ctor_info_int_0),
  (MR_PseudoTypeInfo) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_determinism_0),
  (MR_PseudoTypeInfo) (&mercury__builtin__builtin__type_ctor_info_int_0),
  (MR_PseudoTypeInfo) (&mercury__builtin__builtin__type_ctor_info_int_0),
  (MR_PseudoTypeInfo) (&mercury__builtin__builtin__type_ctor_info_int_0),
  (MR_PseudoTypeInfo) (&bytecode_backend__bytecode__list__ti_list_1bytecode_backend__bytecode__type_ctor_info_byte_var_info_0)
};

static const MR_DuArgLocn bytecode_backend__bytecode__bytecode_backend__bytecode__field_locns_byte_code_0_2[6] = {
  {
    (MR_Integer) 0,
    (MR_Integer) 0,
    (MR_Integer) 0
  },
  {
    (MR_Integer) 1,
    (MR_Integer) 0,
    (MR_Integer) 3
  },
  {
    (MR_Integer) 2,
    (MR_Integer) 0,
    (MR_Integer) 0
  },
  {
    (MR_Integer) 3,
    (MR_Integer) 0,
    (MR_Integer) 0
  },
  {
    (MR_Integer) 4,
    (MR_Integer) 0,
    (MR_Integer) 0
  },
  {
    (MR_Integer) 5,
    (MR_Integer) 0,
    (MR_Integer) 0
  }
};

static const MR_DuFunctorDesc bytecode_backend__bytecode__bytecode_backend__bytecode__du_functor_desc_byte_code_0_2 = {
  (MR_String) "byte_enter_proc",
  INT16_C(6),
  UINT16_C(0),
  MR_SECTAG_NONE,
  UINT8_C(2),
  (MR_Integer) -1,
  INT32_C(2),
  bytecode_backend__bytecode__bytecode_backend__bytecode__field_types_byte_code_0_2,
  NULL,
  bytecode_backend__bytecode__bytecode_backend__bytecode__field_locns_byte_code_0_2,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE,
  UINT8_C(0)
};

static const MR_DuFunctorDesc bytecode_backend__bytecode__bytecode_backend__bytecode__du_functor_desc_byte_code_0_3 = {
  (MR_String) "byte_endof_proc",
  INT16_C(0),
  UINT16_C(0),
  MR_SECTAG_LOCAL_REST_OF_WORD,
  UINT8_C(0),
  (MR_Integer) 1,
  INT32_C(3),
  NULL,
  NULL,
  NULL,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE,
  UINT8_C(0)
};

static const MR_PseudoTypeInfo bytecode_backend__bytecode__bytecode_backend__bytecode__field_types_byte_code_0_4[1] = { (MR_PseudoTypeInfo) (&mercury__builtin__builtin__type_ctor_info_int_0) };

static const MR_DuFunctorDesc bytecode_backend__bytecode__bytecode_backend__bytecode__du_functor_desc_byte_code_0_4 = {
  (MR_String) "byte_label",
  INT16_C(1),
  UINT16_C(0),
  MR_SECTAG_REMOTE_FULL_WORD,
  UINT8_C(3),
  (MR_Integer) 0,
  INT32_C(4),
  bytecode_backend__bytecode__bytecode_backend__bytecode__field_types_byte_code_0_4,
  NULL,
  NULL,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE,
  UINT8_C(0)
};

static const MR_PseudoTypeInfo bytecode_backend__bytecode__bytecode_backend__bytecode__field_types_byte_code_0_5[1] = { (MR_PseudoTypeInfo) (&mercury__builtin__builtin__type_ctor_info_int_0) };

static const MR_DuFunctorDesc bytecode_backend__bytecode__bytecode_backend__bytecode__du_functor_desc_byte_code_0_5 = {
  (MR_String) "byte_enter_disjunction",
  INT16_C(1),
  UINT16_C(0),
  MR_SECTAG_REMOTE_FULL_WORD,
  UINT8_C(3),
  (MR_Integer) 1,
  INT32_C(5),
  bytecode_backend__bytecode__bytecode_backend__bytecode__field_types_byte_code_0_5,
  NULL,
  NULL,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE,
  UINT8_C(0)
};

static const MR_DuFunctorDesc bytecode_backend__bytecode__bytecode_backend__bytecode__du_functor_desc_byte_code_0_6 = {
  (MR_String) "byte_endof_disjunction",
  INT16_C(0),
  UINT16_C(0),
  MR_SECTAG_LOCAL_REST_OF_WORD,
  UINT8_C(0),
  (MR_Integer) 2,
  INT32_C(6),
  NULL,
  NULL,
  NULL,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE,
  UINT8_C(0)
};

static const MR_PseudoTypeInfo bytecode_backend__bytecode__bytecode_backend__bytecode__field_types_byte_code_0_7[1] = { (MR_PseudoTypeInfo) (&mercury__builtin__builtin__type_ctor_info_int_0) };

static const MR_DuFunctorDesc bytecode_backend__bytecode__bytecode_backend__bytecode__du_functor_desc_byte_code_0_7 = {
  (MR_String) "byte_enter_disjunct",
  INT16_C(1),
  UINT16_C(0),
  MR_SECTAG_REMOTE_FULL_WORD,
  UINT8_C(3),
  (MR_Integer) 2,
  INT32_C(7),
  bytecode_backend__bytecode__bytecode_backend__bytecode__field_types_byte_code_0_7,
  NULL,
  NULL,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE,
  UINT8_C(0)
};

static const MR_PseudoTypeInfo bytecode_backend__bytecode__bytecode_backend__bytecode__field_types_byte_code_0_8[1] = { (MR_PseudoTypeInfo) (&mercury__builtin__builtin__type_ctor_info_int_0) };

static const MR_DuFunctorDesc bytecode_backend__bytecode__bytecode_backend__bytecode__du_functor_desc_byte_code_0_8 = {
  (MR_String) "byte_endof_disjunct",
  INT16_C(1),
  UINT16_C(0),
  MR_SECTAG_REMOTE_FULL_WORD,
  UINT8_C(3),
  (MR_Integer) 3,
  INT32_C(8),
  bytecode_backend__bytecode__bytecode_backend__bytecode__field_types_byte_code_0_8,
  NULL,
  NULL,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE,
  UINT8_C(0)
};

static const MR_PseudoTypeInfo bytecode_backend__bytecode__bytecode_backend__bytecode__field_types_byte_code_0_9[2] = {
  (MR_PseudoTypeInfo) (&mercury__builtin__builtin__type_ctor_info_int_0),
  (MR_PseudoTypeInfo) (&mercury__builtin__builtin__type_ctor_info_int_0)
};

static const MR_DuFunctorDesc bytecode_backend__bytecode__bytecode_backend__bytecode__du_functor_desc_byte_code_0_9 = {
  (MR_String) "byte_enter_switch",
  INT16_C(2),
  UINT16_C(0),
  MR_SECTAG_REMOTE_FULL_WORD,
  UINT8_C(3),
  (MR_Integer) 4,
  INT32_C(9),
  bytecode_backend__bytecode__bytecode_backend__bytecode__field_types_byte_code_0_9,
  NULL,
  NULL,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE,
  UINT8_C(0)
};

static const MR_DuFunctorDesc bytecode_backend__bytecode__bytecode_backend__bytecode__du_functor_desc_byte_code_0_10 = {
  (MR_String) "byte_endof_switch",
  INT16_C(0),
  UINT16_C(0),
  MR_SECTAG_LOCAL_REST_OF_WORD,
  UINT8_C(0),
  (MR_Integer) 3,
  INT32_C(10),
  NULL,
  NULL,
  NULL,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE,
  UINT8_C(0)
};

static const MR_FA_TypeInfo_Struct1 bytecode_backend__bytecode__list__ti_list_1bytecode_backend__bytecode__type_ctor_info_byte_cons_id_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  { (MR_TypeInfo) (&bytecode_backend__bytecode__bytecode_backend__bytecode__type_ctor_info_byte_cons_id_0) }
};

static const MR_PseudoTypeInfo bytecode_backend__bytecode__bytecode_backend__bytecode__field_types_byte_code_0_11[3] = {
  (MR_PseudoTypeInfo) (&bytecode_backend__bytecode__bytecode_backend__bytecode__type_ctor_info_byte_cons_id_0),
  (MR_PseudoTypeInfo) (&bytecode_backend__bytecode__list__ti_list_1bytecode_backend__bytecode__type_ctor_info_byte_cons_id_0),
  (MR_PseudoTypeInfo) (&mercury__builtin__builtin__type_ctor_info_int_0)
};

static const MR_DuFunctorDesc bytecode_backend__bytecode__bytecode_backend__bytecode__du_functor_desc_byte_code_0_11 = {
  (MR_String) "byte_enter_switch_arm",
  INT16_C(3),
  UINT16_C(0),
  MR_SECTAG_REMOTE_FULL_WORD,
  UINT8_C(3),
  (MR_Integer) 5,
  INT32_C(11),
  bytecode_backend__bytecode__bytecode_backend__bytecode__field_types_byte_code_0_11,
  NULL,
  NULL,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE,
  UINT8_C(0)
};

static const MR_PseudoTypeInfo bytecode_backend__bytecode__bytecode_backend__bytecode__field_types_byte_code_0_12[1] = { (MR_PseudoTypeInfo) (&mercury__builtin__builtin__type_ctor_info_int_0) };

static const MR_DuFunctorDesc bytecode_backend__bytecode__bytecode_backend__bytecode__du_functor_desc_byte_code_0_12 = {
  (MR_String) "byte_endof_switch_arm",
  INT16_C(1),
  UINT16_C(0),
  MR_SECTAG_REMOTE_FULL_WORD,
  UINT8_C(3),
  (MR_Integer) 6,
  INT32_C(12),
  bytecode_backend__bytecode__bytecode_backend__bytecode__field_types_byte_code_0_12,
  NULL,
  NULL,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE,
  UINT8_C(0)
};

static const MR_PseudoTypeInfo bytecode_backend__bytecode__bytecode_backend__bytecode__field_types_byte_code_0_13[3] = {
  (MR_PseudoTypeInfo) (&mercury__builtin__builtin__type_ctor_info_int_0),
  (MR_PseudoTypeInfo) (&mercury__builtin__builtin__type_ctor_info_int_0),
  (MR_PseudoTypeInfo) (&mercury__builtin__builtin__type_ctor_info_int_0)
};

static const MR_DuFunctorDesc bytecode_backend__bytecode__bytecode_backend__bytecode__du_functor_desc_byte_code_0_13 = {
  (MR_String) "byte_enter_if",
  INT16_C(3),
  UINT16_C(0),
  MR_SECTAG_REMOTE_FULL_WORD,
  UINT8_C(3),
  (MR_Integer) 7,
  INT32_C(13),
  bytecode_backend__bytecode__bytecode_backend__bytecode__field_types_byte_code_0_13,
  NULL,
  NULL,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE,
  UINT8_C(0)
};

static const MR_PseudoTypeInfo bytecode_backend__bytecode__bytecode_backend__bytecode__field_types_byte_code_0_14[1] = { (MR_PseudoTypeInfo) (&mercury__builtin__builtin__type_ctor_info_int_0) };

static const MR_DuFunctorDesc bytecode_backend__bytecode__bytecode_backend__bytecode__du_functor_desc_byte_code_0_14 = {
  (MR_String) "byte_enter_then",
  INT16_C(1),
  UINT16_C(0),
  MR_SECTAG_REMOTE_FULL_WORD,
  UINT8_C(3),
  (MR_Integer) 8,
  INT32_C(14),
  bytecode_backend__bytecode__bytecode_backend__bytecode__field_types_byte_code_0_14,
  NULL,
  NULL,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE,
  UINT8_C(0)
};

static const MR_PseudoTypeInfo bytecode_backend__bytecode__bytecode_backend__bytecode__field_types_byte_code_0_15[1] = { (MR_PseudoTypeInfo) (&mercury__builtin__builtin__type_ctor_info_int_0) };

static const MR_DuFunctorDesc bytecode_backend__bytecode__bytecode_backend__bytecode__du_functor_desc_byte_code_0_15 = {
  (MR_String) "byte_endof_then",
  INT16_C(1),
  UINT16_C(0),
  MR_SECTAG_REMOTE_FULL_WORD,
  UINT8_C(3),
  (MR_Integer) 9,
  INT32_C(15),
  bytecode_backend__bytecode__bytecode_backend__bytecode__field_types_byte_code_0_15,
  NULL,
  NULL,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE,
  UINT8_C(0)
};

static const MR_PseudoTypeInfo bytecode_backend__bytecode__bytecode_backend__bytecode__field_types_byte_code_0_16[1] = { (MR_PseudoTypeInfo) (&mercury__builtin__builtin__type_ctor_info_int_0) };

static const MR_DuFunctorDesc bytecode_backend__bytecode__bytecode_backend__bytecode__du_functor_desc_byte_code_0_16 = {
  (MR_String) "byte_enter_else",
  INT16_C(1),
  UINT16_C(0),
  MR_SECTAG_REMOTE_FULL_WORD,
  UINT8_C(3),
  (MR_Integer) 10,
  INT32_C(16),
  bytecode_backend__bytecode__bytecode_backend__bytecode__field_types_byte_code_0_16,
  NULL,
  NULL,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE,
  UINT8_C(0)
};

static const MR_DuFunctorDesc bytecode_backend__bytecode__bytecode_backend__bytecode__du_functor_desc_byte_code_0_17 = {
  (MR_String) "byte_endof_if",
  INT16_C(0),
  UINT16_C(0),
  MR_SECTAG_LOCAL_REST_OF_WORD,
  UINT8_C(0),
  (MR_Integer) 4,
  INT32_C(17),
  NULL,
  NULL,
  NULL,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE,
  UINT8_C(0)
};

static const MR_PseudoTypeInfo bytecode_backend__bytecode__bytecode_backend__bytecode__field_types_byte_code_0_18[2] = {
  (MR_PseudoTypeInfo) (&mercury__builtin__builtin__type_ctor_info_int_0),
  (MR_PseudoTypeInfo) (&mercury__builtin__builtin__type_ctor_info_int_0)
};

static const MR_DuFunctorDesc bytecode_backend__bytecode__bytecode_backend__bytecode__du_functor_desc_byte_code_0_18 = {
  (MR_String) "byte_enter_negation",
  INT16_C(2),
  UINT16_C(0),
  MR_SECTAG_REMOTE_FULL_WORD,
  UINT8_C(3),
  (MR_Integer) 11,
  INT32_C(18),
  bytecode_backend__bytecode__bytecode_backend__bytecode__field_types_byte_code_0_18,
  NULL,
  NULL,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE,
  UINT8_C(0)
};

static const MR_PseudoTypeInfo bytecode_backend__bytecode__bytecode_backend__bytecode__field_types_byte_code_0_19[1] = { (MR_PseudoTypeInfo) (&mercury__builtin__builtin__type_ctor_info_int_0) };

static const MR_DuFunctorDesc bytecode_backend__bytecode__bytecode_backend__bytecode__du_functor_desc_byte_code_0_19 = {
  (MR_String) "byte_endof_negation_goal",
  INT16_C(1),
  UINT16_C(0),
  MR_SECTAG_REMOTE_FULL_WORD,
  UINT8_C(3),
  (MR_Integer) 12,
  INT32_C(19),
  bytecode_backend__bytecode__bytecode_backend__bytecode__field_types_byte_code_0_19,
  NULL,
  NULL,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE,
  UINT8_C(0)
};

static const MR_DuFunctorDesc bytecode_backend__bytecode__bytecode_backend__bytecode__du_functor_desc_byte_code_0_20 = {
  (MR_String) "byte_endof_negation",
  INT16_C(0),
  UINT16_C(0),
  MR_SECTAG_LOCAL_REST_OF_WORD,
  UINT8_C(0),
  (MR_Integer) 5,
  INT32_C(20),
  NULL,
  NULL,
  NULL,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE,
  UINT8_C(0)
};

static const MR_PseudoTypeInfo bytecode_backend__bytecode__bytecode_backend__bytecode__field_types_byte_code_0_21[1] = { (MR_PseudoTypeInfo) (&mercury__builtin__builtin__type_ctor_info_int_0) };

static const MR_DuFunctorDesc bytecode_backend__bytecode__bytecode_backend__bytecode__du_functor_desc_byte_code_0_21 = {
  (MR_String) "byte_enter_commit",
  INT16_C(1),
  UINT16_C(0),
  MR_SECTAG_REMOTE_FULL_WORD,
  UINT8_C(3),
  (MR_Integer) 13,
  INT32_C(21),
  bytecode_backend__bytecode__bytecode_backend__bytecode__field_types_byte_code_0_21,
  NULL,
  NULL,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE,
  UINT8_C(0)
};

static const MR_PseudoTypeInfo bytecode_backend__bytecode__bytecode_backend__bytecode__field_types_byte_code_0_22[1] = { (MR_PseudoTypeInfo) (&mercury__builtin__builtin__type_ctor_info_int_0) };

static const MR_DuFunctorDesc bytecode_backend__bytecode__bytecode_backend__bytecode__du_functor_desc_byte_code_0_22 = {
  (MR_String) "byte_endof_commit",
  INT16_C(1),
  UINT16_C(0),
  MR_SECTAG_REMOTE_FULL_WORD,
  UINT8_C(3),
  (MR_Integer) 14,
  INT32_C(22),
  bytecode_backend__bytecode__bytecode_backend__bytecode__field_types_byte_code_0_22,
  NULL,
  NULL,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE,
  UINT8_C(0)
};

static const MR_PseudoTypeInfo bytecode_backend__bytecode__bytecode_backend__bytecode__field_types_byte_code_0_23[2] = {
  (MR_PseudoTypeInfo) (&mercury__builtin__builtin__type_ctor_info_int_0),
  (MR_PseudoTypeInfo) (&mercury__builtin__builtin__type_ctor_info_int_0)
};

static const MR_DuFunctorDesc bytecode_backend__bytecode__bytecode_backend__bytecode__du_functor_desc_byte_code_0_23 = {
  (MR_String) "byte_assign",
  INT16_C(2),
  UINT16_C(0),
  MR_SECTAG_REMOTE_FULL_WORD,
  UINT8_C(3),
  (MR_Integer) 15,
  INT32_C(23),
  bytecode_backend__bytecode__bytecode_backend__bytecode__field_types_byte_code_0_23,
  NULL,
  NULL,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE,
  UINT8_C(0)
};

static const MR_PseudoTypeInfo bytecode_backend__bytecode__bytecode_backend__bytecode__field_types_byte_code_0_24[3] = {
  (MR_PseudoTypeInfo) (&mercury__builtin__builtin__type_ctor_info_int_0),
  (MR_PseudoTypeInfo) (&mercury__builtin__builtin__type_ctor_info_int_0),
  (MR_PseudoTypeInfo) (&bytecode_backend__bytecode__bytecode_backend__bytecode__type_ctor_info_byte_test_id_0)
};

static const MR_DuArgLocn bytecode_backend__bytecode__bytecode_backend__bytecode__field_locns_byte_code_0_24[3] = {
  {
    (MR_Integer) 0,
    (MR_Integer) 0,
    (MR_Integer) 0
  },
  {
    (MR_Integer) 1,
    (MR_Integer) 0,
    (MR_Integer) 0
  },
  {
    (MR_Integer) 2,
    (MR_Integer) 0,
    (MR_Integer) 3
  }
};

static const MR_DuFunctorDesc bytecode_backend__bytecode__bytecode_backend__bytecode__du_functor_desc_byte_code_0_24 = {
  (MR_String) "byte_test",
  INT16_C(3),
  UINT16_C(0),
  MR_SECTAG_REMOTE_FULL_WORD,
  UINT8_C(3),
  (MR_Integer) 16,
  INT32_C(24),
  bytecode_backend__bytecode__bytecode_backend__bytecode__field_types_byte_code_0_24,
  NULL,
  bytecode_backend__bytecode__bytecode_backend__bytecode__field_locns_byte_code_0_24,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE,
  UINT8_C(0)
};

static const MR_FA_TypeInfo_Struct1 bytecode_backend__bytecode__list__ti_list_1builtin__type_ctor_info_int_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  { (MR_TypeInfo) (&mercury__builtin__builtin__type_ctor_info_int_0) }
};

static const MR_PseudoTypeInfo bytecode_backend__bytecode__bytecode_backend__bytecode__field_types_byte_code_0_25[3] = {
  (MR_PseudoTypeInfo) (&mercury__builtin__builtin__type_ctor_info_int_0),
  (MR_PseudoTypeInfo) (&bytecode_backend__bytecode__bytecode_backend__bytecode__type_ctor_info_byte_cons_id_0),
  (MR_PseudoTypeInfo) (&bytecode_backend__bytecode__list__ti_list_1builtin__type_ctor_info_int_0)
};

static const MR_DuFunctorDesc bytecode_backend__bytecode__bytecode_backend__bytecode__du_functor_desc_byte_code_0_25 = {
  (MR_String) "byte_construct",
  INT16_C(3),
  UINT16_C(0),
  MR_SECTAG_REMOTE_FULL_WORD,
  UINT8_C(3),
  (MR_Integer) 17,
  INT32_C(25),
  bytecode_backend__bytecode__bytecode_backend__bytecode__field_types_byte_code_0_25,
  NULL,
  NULL,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE,
  UINT8_C(0)
};

static const MR_PseudoTypeInfo bytecode_backend__bytecode__bytecode_backend__bytecode__field_types_byte_code_0_26[3] = {
  (MR_PseudoTypeInfo) (&mercury__builtin__builtin__type_ctor_info_int_0),
  (MR_PseudoTypeInfo) (&bytecode_backend__bytecode__bytecode_backend__bytecode__type_ctor_info_byte_cons_id_0),
  (MR_PseudoTypeInfo) (&bytecode_backend__bytecode__list__ti_list_1builtin__type_ctor_info_int_0)
};

static const MR_DuFunctorDesc bytecode_backend__bytecode__bytecode_backend__bytecode__du_functor_desc_byte_code_0_26 = {
  (MR_String) "byte_deconstruct",
  INT16_C(3),
  UINT16_C(0),
  MR_SECTAG_REMOTE_FULL_WORD,
  UINT8_C(3),
  (MR_Integer) 18,
  INT32_C(26),
  bytecode_backend__bytecode__bytecode_backend__bytecode__field_types_byte_code_0_26,
  NULL,
  NULL,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE,
  UINT8_C(0)
};

static const MR_FA_TypeInfo_Struct2 bytecode_backend__bytecode__pair__ti_pair_2builtin__type_ctor_info_int_0bytecode_backend__bytecode__type_ctor_info_byte_dir_0 = {
  &mercury__pair__pair__type_ctor_info_pair_2,
  {
    (MR_TypeInfo) (&mercury__builtin__builtin__type_ctor_info_int_0),
    (MR_TypeInfo) (&bytecode_backend__bytecode__bytecode_backend__bytecode__type_ctor_info_byte_dir_0)
  }
};

static const MR_FA_TypeInfo_Struct1 bytecode_backend__bytecode__list__ti_list_1pair__ti_pair_2builtin__type_ctor_info_int_0bytecode_backend__bytecode__type_ctor_info_byte_dir_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  { (MR_TypeInfo) (&bytecode_backend__bytecode__pair__ti_pair_2builtin__type_ctor_info_int_0bytecode_backend__bytecode__type_ctor_info_byte_dir_0) }
};

static const MR_PseudoTypeInfo bytecode_backend__bytecode__bytecode_backend__bytecode__field_types_byte_code_0_27[3] = {
  (MR_PseudoTypeInfo) (&mercury__builtin__builtin__type_ctor_info_int_0),
  (MR_PseudoTypeInfo) (&bytecode_backend__bytecode__bytecode_backend__bytecode__type_ctor_info_byte_cons_id_0),
  (MR_PseudoTypeInfo) (&bytecode_backend__bytecode__list__ti_list_1pair__ti_pair_2builtin__type_ctor_info_int_0bytecode_backend__bytecode__type_ctor_info_byte_dir_0)
};

static const MR_DuFunctorDesc bytecode_backend__bytecode__bytecode_backend__bytecode__du_functor_desc_byte_code_0_27 = {
  (MR_String) "byte_complex_construct",
  INT16_C(3),
  UINT16_C(0),
  MR_SECTAG_REMOTE_FULL_WORD,
  UINT8_C(3),
  (MR_Integer) 19,
  INT32_C(27),
  bytecode_backend__bytecode__bytecode_backend__bytecode__field_types_byte_code_0_27,
  NULL,
  NULL,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE,
  UINT8_C(0)
};

static const MR_PseudoTypeInfo bytecode_backend__bytecode__bytecode_backend__bytecode__field_types_byte_code_0_28[3] = {
  (MR_PseudoTypeInfo) (&mercury__builtin__builtin__type_ctor_info_int_0),
  (MR_PseudoTypeInfo) (&bytecode_backend__bytecode__bytecode_backend__bytecode__type_ctor_info_byte_cons_id_0),
  (MR_PseudoTypeInfo) (&bytecode_backend__bytecode__list__ti_list_1pair__ti_pair_2builtin__type_ctor_info_int_0bytecode_backend__bytecode__type_ctor_info_byte_dir_0)
};

static const MR_DuFunctorDesc bytecode_backend__bytecode__bytecode_backend__bytecode__du_functor_desc_byte_code_0_28 = {
  (MR_String) "byte_complex_deconstruct",
  INT16_C(3),
  UINT16_C(0),
  MR_SECTAG_REMOTE_FULL_WORD,
  UINT8_C(3),
  (MR_Integer) 20,
  INT32_C(28),
  bytecode_backend__bytecode__bytecode_backend__bytecode__field_types_byte_code_0_28,
  NULL,
  NULL,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE,
  UINT8_C(0)
};

static const MR_PseudoTypeInfo bytecode_backend__bytecode__bytecode_backend__bytecode__field_types_byte_code_0_29[3] = {
  (MR_PseudoTypeInfo) (&bytecode_backend__bytecode__bytecode_backend__bytecode__type_ctor_info_byte_reg_type_0),
  (MR_PseudoTypeInfo) (&mercury__builtin__builtin__type_ctor_info_int_0),
  (MR_PseudoTypeInfo) (&mercury__builtin__builtin__type_ctor_info_int_0)
};

static const MR_DuFunctorDesc bytecode_backend__bytecode__bytecode_backend__bytecode__du_functor_desc_byte_code_0_29 = {
  (MR_String) "byte_place_arg",
  INT16_C(3),
  UINT16_C(0),
  MR_SECTAG_REMOTE_FULL_WORD,
  UINT8_C(3),
  (MR_Integer) 21,
  INT32_C(29),
  bytecode_backend__bytecode__bytecode_backend__bytecode__field_types_byte_code_0_29,
  NULL,
  NULL,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE,
  UINT8_C(0)
};

static const MR_PseudoTypeInfo bytecode_backend__bytecode__bytecode_backend__bytecode__field_types_byte_code_0_30[3] = {
  (MR_PseudoTypeInfo) (&bytecode_backend__bytecode__bytecode_backend__bytecode__type_ctor_info_byte_reg_type_0),
  (MR_PseudoTypeInfo) (&mercury__builtin__builtin__type_ctor_info_int_0),
  (MR_PseudoTypeInfo) (&mercury__builtin__builtin__type_ctor_info_int_0)
};

static const MR_DuFunctorDesc bytecode_backend__bytecode__bytecode_backend__bytecode__du_functor_desc_byte_code_0_30 = {
  (MR_String) "byte_pickup_arg",
  INT16_C(3),
  UINT16_C(0),
  MR_SECTAG_REMOTE_FULL_WORD,
  UINT8_C(3),
  (MR_Integer) 22,
  INT32_C(30),
  bytecode_backend__bytecode__bytecode_backend__bytecode__field_types_byte_code_0_30,
  NULL,
  NULL,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE,
  UINT8_C(0)
};

static const MR_PseudoTypeInfo bytecode_backend__bytecode__bytecode_backend__bytecode__field_types_byte_code_0_31[5] = {
  (MR_PseudoTypeInfo) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0),
  (MR_PseudoTypeInfo) (&mercury__builtin__builtin__type_ctor_info_string_0),
  (MR_PseudoTypeInfo) (&mercury__builtin__builtin__type_ctor_info_int_0),
  (MR_PseudoTypeInfo) (&mercury__builtin__builtin__type_ctor_info_int_0),
  (MR_PseudoTypeInfo) (&mercury__builtin__builtin__type_ctor_info_int_0)
};

static const MR_DuFunctorDesc bytecode_backend__bytecode__bytecode_backend__bytecode__du_functor_desc_byte_code_0_31 = {
  (MR_String) "byte_call",
  INT16_C(5),
  UINT16_C(0),
  MR_SECTAG_REMOTE_FULL_WORD,
  UINT8_C(3),
  (MR_Integer) 23,
  INT32_C(31),
  bytecode_backend__bytecode__bytecode_backend__bytecode__field_types_byte_code_0_31,
  NULL,
  NULL,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE,
  UINT8_C(0)
};

static const MR_PseudoTypeInfo bytecode_backend__bytecode__bytecode_backend__bytecode__field_types_byte_code_0_32[4] = {
  (MR_PseudoTypeInfo) (&mercury__builtin__builtin__type_ctor_info_int_0),
  (MR_PseudoTypeInfo) (&mercury__builtin__builtin__type_ctor_info_int_0),
  (MR_PseudoTypeInfo) (&mercury__builtin__builtin__type_ctor_info_int_0),
  (MR_PseudoTypeInfo) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_determinism_0)
};

static const MR_DuArgLocn bytecode_backend__bytecode__bytecode_backend__bytecode__field_locns_byte_code_0_32[4] = {
  {
    (MR_Integer) 0,
    (MR_Integer) 0,
    (MR_Integer) 0
  },
  {
    (MR_Integer) 1,
    (MR_Integer) 0,
    (MR_Integer) 0
  },
  {
    (MR_Integer) 2,
    (MR_Integer) 0,
    (MR_Integer) 0
  },
  {
    (MR_Integer) 3,
    (MR_Integer) 0,
    (MR_Integer) 3
  }
};

static const MR_DuFunctorDesc bytecode_backend__bytecode__bytecode_backend__bytecode__du_functor_desc_byte_code_0_32 = {
  (MR_String) "byte_higher_order_call",
  INT16_C(4),
  UINT16_C(0),
  MR_SECTAG_REMOTE_FULL_WORD,
  UINT8_C(3),
  (MR_Integer) 24,
  INT32_C(32),
  bytecode_backend__bytecode__bytecode_backend__bytecode__field_types_byte_code_0_32,
  NULL,
  bytecode_backend__bytecode__bytecode_backend__bytecode__field_locns_byte_code_0_32,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE,
  UINT8_C(0)
};

static const MR_PseudoTypeInfo bytecode_backend__bytecode__bytecode_backend__bytecode__field_types_byte_code_0_33[4] = {
  (MR_PseudoTypeInfo) (&backend_libs__builtin_ops__backend_libs__builtin_ops__type_ctor_info_binary_op_0),
  (MR_PseudoTypeInfo) (&bytecode_backend__bytecode__bytecode_backend__bytecode__type_ctor_info_byte_arg_0),
  (MR_PseudoTypeInfo) (&bytecode_backend__bytecode__bytecode_backend__bytecode__type_ctor_info_byte_arg_0),
  (MR_PseudoTypeInfo) (&mercury__builtin__builtin__type_ctor_info_int_0)
};

static const MR_DuFunctorDesc bytecode_backend__bytecode__bytecode_backend__bytecode__du_functor_desc_byte_code_0_33 = {
  (MR_String) "byte_builtin_binop",
  INT16_C(4),
  UINT16_C(0),
  MR_SECTAG_REMOTE_FULL_WORD,
  UINT8_C(3),
  (MR_Integer) 25,
  INT32_C(33),
  bytecode_backend__bytecode__bytecode_backend__bytecode__field_types_byte_code_0_33,
  NULL,
  NULL,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE,
  UINT8_C(0)
};

static const MR_PseudoTypeInfo bytecode_backend__bytecode__bytecode_backend__bytecode__field_types_byte_code_0_34[3] = {
  (MR_PseudoTypeInfo) (&backend_libs__builtin_ops__backend_libs__builtin_ops__type_ctor_info_unary_op_0),
  (MR_PseudoTypeInfo) (&bytecode_backend__bytecode__bytecode_backend__bytecode__type_ctor_info_byte_arg_0),
  (MR_PseudoTypeInfo) (&mercury__builtin__builtin__type_ctor_info_int_0)
};

static const MR_DuFunctorDesc bytecode_backend__bytecode__bytecode_backend__bytecode__du_functor_desc_byte_code_0_34 = {
  (MR_String) "byte_builtin_unop",
  INT16_C(3),
  UINT16_C(0),
  MR_SECTAG_REMOTE_FULL_WORD,
  UINT8_C(3),
  (MR_Integer) 26,
  INT32_C(34),
  bytecode_backend__bytecode__bytecode_backend__bytecode__field_types_byte_code_0_34,
  NULL,
  NULL,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE,
  UINT8_C(0)
};

static const MR_PseudoTypeInfo bytecode_backend__bytecode__bytecode_backend__bytecode__field_types_byte_code_0_35[3] = {
  (MR_PseudoTypeInfo) (&backend_libs__builtin_ops__backend_libs__builtin_ops__type_ctor_info_binary_op_0),
  (MR_PseudoTypeInfo) (&bytecode_backend__bytecode__bytecode_backend__bytecode__type_ctor_info_byte_arg_0),
  (MR_PseudoTypeInfo) (&bytecode_backend__bytecode__bytecode_backend__bytecode__type_ctor_info_byte_arg_0)
};

static const MR_DuFunctorDesc bytecode_backend__bytecode__bytecode_backend__bytecode__du_functor_desc_byte_code_0_35 = {
  (MR_String) "byte_builtin_bintest",
  INT16_C(3),
  UINT16_C(0),
  MR_SECTAG_REMOTE_FULL_WORD,
  UINT8_C(3),
  (MR_Integer) 27,
  INT32_C(35),
  bytecode_backend__bytecode__bytecode_backend__bytecode__field_types_byte_code_0_35,
  NULL,
  NULL,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE,
  UINT8_C(0)
};

static const MR_PseudoTypeInfo bytecode_backend__bytecode__bytecode_backend__bytecode__field_types_byte_code_0_36[2] = {
  (MR_PseudoTypeInfo) (&backend_libs__builtin_ops__backend_libs__builtin_ops__type_ctor_info_unary_op_0),
  (MR_PseudoTypeInfo) (&bytecode_backend__bytecode__bytecode_backend__bytecode__type_ctor_info_byte_arg_0)
};

static const MR_DuFunctorDesc bytecode_backend__bytecode__bytecode_backend__bytecode__du_functor_desc_byte_code_0_36 = {
  (MR_String) "byte_builtin_untest",
  INT16_C(2),
  UINT16_C(0),
  MR_SECTAG_REMOTE_FULL_WORD,
  UINT8_C(3),
  (MR_Integer) 28,
  INT32_C(36),
  bytecode_backend__bytecode__bytecode_backend__bytecode__field_types_byte_code_0_36,
  NULL,
  NULL,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE,
  UINT8_C(0)
};

static const MR_DuFunctorDesc bytecode_backend__bytecode__bytecode_backend__bytecode__du_functor_desc_byte_code_0_37 = {
  (MR_String) "byte_semidet_succeed",
  INT16_C(0),
  UINT16_C(0),
  MR_SECTAG_LOCAL_REST_OF_WORD,
  UINT8_C(0),
  (MR_Integer) 6,
  INT32_C(37),
  NULL,
  NULL,
  NULL,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE,
  UINT8_C(0)
};

static const MR_DuFunctorDesc bytecode_backend__bytecode__bytecode_backend__bytecode__du_functor_desc_byte_code_0_38 = {
  (MR_String) "byte_semidet_success_check",
  INT16_C(0),
  UINT16_C(0),
  MR_SECTAG_LOCAL_REST_OF_WORD,
  UINT8_C(0),
  (MR_Integer) 7,
  INT32_C(38),
  NULL,
  NULL,
  NULL,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE,
  UINT8_C(0)
};

static const MR_DuFunctorDesc bytecode_backend__bytecode__bytecode_backend__bytecode__du_functor_desc_byte_code_0_39 = {
  (MR_String) "byte_fail",
  INT16_C(0),
  UINT16_C(0),
  MR_SECTAG_LOCAL_REST_OF_WORD,
  UINT8_C(0),
  (MR_Integer) 8,
  INT32_C(39),
  NULL,
  NULL,
  NULL,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE,
  UINT8_C(0)
};

static const MR_PseudoTypeInfo bytecode_backend__bytecode__bytecode_backend__bytecode__field_types_byte_code_0_40[1] = { (MR_PseudoTypeInfo) (&mercury__builtin__builtin__type_ctor_info_int_0) };

static const MR_DuFunctorDesc bytecode_backend__bytecode__bytecode_backend__bytecode__du_functor_desc_byte_code_0_40 = {
  (MR_String) "byte_context",
  INT16_C(1),
  UINT16_C(0),
  MR_SECTAG_REMOTE_FULL_WORD,
  UINT8_C(3),
  (MR_Integer) 29,
  INT32_C(40),
  bytecode_backend__bytecode__bytecode_backend__bytecode__field_types_byte_code_0_40,
  NULL,
  NULL,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE,
  UINT8_C(0)
};

static const MR_DuFunctorDesc bytecode_backend__bytecode__bytecode_backend__bytecode__du_functor_desc_byte_code_0_41 = {
  (MR_String) "byte_not_supported",
  INT16_C(0),
  UINT16_C(0),
  MR_SECTAG_LOCAL_REST_OF_WORD,
  UINT8_C(0),
  (MR_Integer) 9,
  INT32_C(41),
  NULL,
  NULL,
  NULL,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE,
  UINT8_C(0)
};

static const MR_DuFunctorDescPtr bytecode_backend__bytecode__bytecode_backend__bytecode__du_stag_ordered_byte_code_0_0[10] = {
  &bytecode_backend__bytecode__bytecode_backend__bytecode__du_functor_desc_byte_code_0_1,
  &bytecode_backend__bytecode__bytecode_backend__bytecode__du_functor_desc_byte_code_0_3,
  &bytecode_backend__bytecode__bytecode_backend__bytecode__du_functor_desc_byte_code_0_6,
  &bytecode_backend__bytecode__bytecode_backend__bytecode__du_functor_desc_byte_code_0_10,
  &bytecode_backend__bytecode__bytecode_backend__bytecode__du_functor_desc_byte_code_0_17,
  &bytecode_backend__bytecode__bytecode_backend__bytecode__du_functor_desc_byte_code_0_20,
  &bytecode_backend__bytecode__bytecode_backend__bytecode__du_functor_desc_byte_code_0_37,
  &bytecode_backend__bytecode__bytecode_backend__bytecode__du_functor_desc_byte_code_0_38,
  &bytecode_backend__bytecode__bytecode_backend__bytecode__du_functor_desc_byte_code_0_39,
  &bytecode_backend__bytecode__bytecode_backend__bytecode__du_functor_desc_byte_code_0_41
};

static const MR_DuFunctorDescPtr bytecode_backend__bytecode__bytecode_backend__bytecode__du_stag_ordered_byte_code_0_1[1] = { &bytecode_backend__bytecode__bytecode_backend__bytecode__du_functor_desc_byte_code_0_0 };

static const MR_DuFunctorDescPtr bytecode_backend__bytecode__bytecode_backend__bytecode__du_stag_ordered_byte_code_0_2[1] = { &bytecode_backend__bytecode__bytecode_backend__bytecode__du_functor_desc_byte_code_0_2 };

static const MR_DuFunctorDescPtr bytecode_backend__bytecode__bytecode_backend__bytecode__du_stag_ordered_byte_code_0_3[30] = {
  &bytecode_backend__bytecode__bytecode_backend__bytecode__du_functor_desc_byte_code_0_4,
  &bytecode_backend__bytecode__bytecode_backend__bytecode__du_functor_desc_byte_code_0_5,
  &bytecode_backend__bytecode__bytecode_backend__bytecode__du_functor_desc_byte_code_0_7,
  &bytecode_backend__bytecode__bytecode_backend__bytecode__du_functor_desc_byte_code_0_8,
  &bytecode_backend__bytecode__bytecode_backend__bytecode__du_functor_desc_byte_code_0_9,
  &bytecode_backend__bytecode__bytecode_backend__bytecode__du_functor_desc_byte_code_0_11,
  &bytecode_backend__bytecode__bytecode_backend__bytecode__du_functor_desc_byte_code_0_12,
  &bytecode_backend__bytecode__bytecode_backend__bytecode__du_functor_desc_byte_code_0_13,
  &bytecode_backend__bytecode__bytecode_backend__bytecode__du_functor_desc_byte_code_0_14,
  &bytecode_backend__bytecode__bytecode_backend__bytecode__du_functor_desc_byte_code_0_15,
  &bytecode_backend__bytecode__bytecode_backend__bytecode__du_functor_desc_byte_code_0_16,
  &bytecode_backend__bytecode__bytecode_backend__bytecode__du_functor_desc_byte_code_0_18,
  &bytecode_backend__bytecode__bytecode_backend__bytecode__du_functor_desc_byte_code_0_19,
  &bytecode_backend__bytecode__bytecode_backend__bytecode__du_functor_desc_byte_code_0_21,
  &bytecode_backend__bytecode__bytecode_backend__bytecode__du_functor_desc_byte_code_0_22,
  &bytecode_backend__bytecode__bytecode_backend__bytecode__du_functor_desc_byte_code_0_23,
  &bytecode_backend__bytecode__bytecode_backend__bytecode__du_functor_desc_byte_code_0_24,
  &bytecode_backend__bytecode__bytecode_backend__bytecode__du_functor_desc_byte_code_0_25,
  &bytecode_backend__bytecode__bytecode_backend__bytecode__du_functor_desc_byte_code_0_26,
  &bytecode_backend__bytecode__bytecode_backend__bytecode__du_functor_desc_byte_code_0_27,
  &bytecode_backend__bytecode__bytecode_backend__bytecode__du_functor_desc_byte_code_0_28,
  &bytecode_backend__bytecode__bytecode_backend__bytecode__du_functor_desc_byte_code_0_29,
  &bytecode_backend__bytecode__bytecode_backend__bytecode__du_functor_desc_byte_code_0_30,
  &bytecode_backend__bytecode__bytecode_backend__bytecode__du_functor_desc_byte_code_0_31,
  &bytecode_backend__bytecode__bytecode_backend__bytecode__du_functor_desc_byte_code_0_32,
  &bytecode_backend__bytecode__bytecode_backend__bytecode__du_functor_desc_byte_code_0_33,
  &bytecode_backend__bytecode__bytecode_backend__bytecode__du_functor_desc_byte_code_0_34,
  &bytecode_backend__bytecode__bytecode_backend__bytecode__du_functor_desc_byte_code_0_35,
  &bytecode_backend__bytecode__bytecode_backend__bytecode__du_functor_desc_byte_code_0_36,
  &bytecode_backend__bytecode__bytecode_backend__bytecode__du_functor_desc_byte_code_0_40
};

static const MR_DuPtagLayout bytecode_backend__bytecode__bytecode_backend__bytecode__du_ptag_ordered_byte_code_0[4] = {
  {
    UINT32_C(10),
    MR_SECTAG_LOCAL_REST_OF_WORD,
    bytecode_backend__bytecode__bytecode_backend__bytecode__du_stag_ordered_byte_code_0_0,
    INT8_C(-1),
    UINT8_C(0),
    UINT8_C(1)
  },
  {
    UINT32_C(1),
    MR_SECTAG_NONE,
    bytecode_backend__bytecode__bytecode_backend__bytecode__du_stag_ordered_byte_code_0_1,
    INT8_C(-1),
    UINT8_C(1),
    UINT8_C(1)
  },
  {
    UINT32_C(1),
    MR_SECTAG_NONE,
    bytecode_backend__bytecode__bytecode_backend__bytecode__du_stag_ordered_byte_code_0_2,
    INT8_C(-1),
    UINT8_C(2),
    UINT8_C(1)
  },
  {
    UINT32_C(30),
    MR_SECTAG_REMOTE_FULL_WORD,
    bytecode_backend__bytecode__bytecode_backend__bytecode__du_stag_ordered_byte_code_0_3,
    INT8_C(-1),
    UINT8_C(3),
    UINT8_C(1)
  }
};

static const MR_DuFunctorDescPtr bytecode_backend__bytecode__bytecode_backend__bytecode__du_name_ordered_byte_code_0[42] = {
  &bytecode_backend__bytecode__bytecode_backend__bytecode__du_functor_desc_byte_code_0_23,
  &bytecode_backend__bytecode__bytecode_backend__bytecode__du_functor_desc_byte_code_0_33,
  &bytecode_backend__bytecode__bytecode_backend__bytecode__du_functor_desc_byte_code_0_35,
  &bytecode_backend__bytecode__bytecode_backend__bytecode__du_functor_desc_byte_code_0_34,
  &bytecode_backend__bytecode__bytecode_backend__bytecode__du_functor_desc_byte_code_0_36,
  &bytecode_backend__bytecode__bytecode_backend__bytecode__du_functor_desc_byte_code_0_31,
  &bytecode_backend__bytecode__bytecode_backend__bytecode__du_functor_desc_byte_code_0_27,
  &bytecode_backend__bytecode__bytecode_backend__bytecode__du_functor_desc_byte_code_0_28,
  &bytecode_backend__bytecode__bytecode_backend__bytecode__du_functor_desc_byte_code_0_25,
  &bytecode_backend__bytecode__bytecode_backend__bytecode__du_functor_desc_byte_code_0_40,
  &bytecode_backend__bytecode__bytecode_backend__bytecode__du_functor_desc_byte_code_0_26,
  &bytecode_backend__bytecode__bytecode_backend__bytecode__du_functor_desc_byte_code_0_22,
  &bytecode_backend__bytecode__bytecode_backend__bytecode__du_functor_desc_byte_code_0_8,
  &bytecode_backend__bytecode__bytecode_backend__bytecode__du_functor_desc_byte_code_0_6,
  &bytecode_backend__bytecode__bytecode_backend__bytecode__du_functor_desc_byte_code_0_17,
  &bytecode_backend__bytecode__bytecode_backend__bytecode__du_functor_desc_byte_code_0_20,
  &bytecode_backend__bytecode__bytecode_backend__bytecode__du_functor_desc_byte_code_0_19,
  &bytecode_backend__bytecode__bytecode_backend__bytecode__du_functor_desc_byte_code_0_1,
  &bytecode_backend__bytecode__bytecode_backend__bytecode__du_functor_desc_byte_code_0_3,
  &bytecode_backend__bytecode__bytecode_backend__bytecode__du_functor_desc_byte_code_0_10,
  &bytecode_backend__bytecode__bytecode_backend__bytecode__du_functor_desc_byte_code_0_12,
  &bytecode_backend__bytecode__bytecode_backend__bytecode__du_functor_desc_byte_code_0_15,
  &bytecode_backend__bytecode__bytecode_backend__bytecode__du_functor_desc_byte_code_0_21,
  &bytecode_backend__bytecode__bytecode_backend__bytecode__du_functor_desc_byte_code_0_7,
  &bytecode_backend__bytecode__bytecode_backend__bytecode__du_functor_desc_byte_code_0_5,
  &bytecode_backend__bytecode__bytecode_backend__bytecode__du_functor_desc_byte_code_0_16,
  &bytecode_backend__bytecode__bytecode_backend__bytecode__du_functor_desc_byte_code_0_13,
  &bytecode_backend__bytecode__bytecode_backend__bytecode__du_functor_desc_byte_code_0_18,
  &bytecode_backend__bytecode__bytecode_backend__bytecode__du_functor_desc_byte_code_0_0,
  &bytecode_backend__bytecode__bytecode_backend__bytecode__du_functor_desc_byte_code_0_2,
  &bytecode_backend__bytecode__bytecode_backend__bytecode__du_functor_desc_byte_code_0_9,
  &bytecode_backend__bytecode__bytecode_backend__bytecode__du_functor_desc_byte_code_0_11,
  &bytecode_backend__bytecode__bytecode_backend__bytecode__du_functor_desc_byte_code_0_14,
  &bytecode_backend__bytecode__bytecode_backend__bytecode__du_functor_desc_byte_code_0_39,
  &bytecode_backend__bytecode__bytecode_backend__bytecode__du_functor_desc_byte_code_0_32,
  &bytecode_backend__bytecode__bytecode_backend__bytecode__du_functor_desc_byte_code_0_4,
  &bytecode_backend__bytecode__bytecode_backend__bytecode__du_functor_desc_byte_code_0_41,
  &bytecode_backend__bytecode__bytecode_backend__bytecode__du_functor_desc_byte_code_0_30,
  &bytecode_backend__bytecode__bytecode_backend__bytecode__du_functor_desc_byte_code_0_29,
  &bytecode_backend__bytecode__bytecode_backend__bytecode__du_functor_desc_byte_code_0_37,
  &bytecode_backend__bytecode__bytecode_backend__bytecode__du_functor_desc_byte_code_0_38,
  &bytecode_backend__bytecode__bytecode_backend__bytecode__du_functor_desc_byte_code_0_24
};

static const MR_Integer bytecode_backend__bytecode__bytecode_backend__bytecode__functor_number_map_byte_code_0[42] = {
  (MR_Integer) 28,
  (MR_Integer) 17,
  (MR_Integer) 29,
  (MR_Integer) 18,
  (MR_Integer) 35,
  (MR_Integer) 24,
  (MR_Integer) 13,
  (MR_Integer) 23,
  (MR_Integer) 12,
  (MR_Integer) 30,
  (MR_Integer) 19,
  (MR_Integer) 31,
  (MR_Integer) 20,
  (MR_Integer) 26,
  (MR_Integer) 32,
  (MR_Integer) 21,
  (MR_Integer) 25,
  (MR_Integer) 14,
  (MR_Integer) 27,
  (MR_Integer) 16,
  (MR_Integer) 15,
  (MR_Integer) 22,
  (MR_Integer) 11,
  (MR_Integer) 0,
  (MR_Integer) 41,
  (MR_Integer) 8,
  (MR_Integer) 10,
  (MR_Integer) 6,
  (MR_Integer) 7,
  (MR_Integer) 38,
  (MR_Integer) 37,
  (MR_Integer) 5,
  (MR_Integer) 34,
  (MR_Integer) 1,
  (MR_Integer) 3,
  (MR_Integer) 2,
  (MR_Integer) 4,
  (MR_Integer) 39,
  (MR_Integer) 40,
  (MR_Integer) 33,
  (MR_Integer) 9,
  (MR_Integer) 36
};

const MR_TypeCtorInfo_Struct bytecode_backend__bytecode__bytecode_backend__bytecode__type_ctor_info_byte_code_0 = {
  (MR_Integer) 0,
  UINT8_C(18),
  INT8_C(4),
  MR_TYPECTOR_REP_DU,
  ((MR_Box) (bytecode_backend__bytecode____Unify____byte_code_0_0_10001)),
  ((MR_Box) (bytecode_backend__bytecode____Compare____byte_code_0_0_10001)),
  (MR_String) "bytecode_backend.bytecode",
  (MR_String) "byte_code",
  { bytecode_backend__bytecode__bytecode_backend__bytecode__du_name_ordered_byte_code_0 },
  { bytecode_backend__bytecode__bytecode_backend__bytecode__du_ptag_ordered_byte_code_0 },
  (MR_Integer) 42,
  UINT16_C(12),
  bytecode_backend__bytecode__bytecode_backend__bytecode__functor_number_map_byte_code_0,

};

static const MR_PseudoTypeInfo bytecode_backend__bytecode__bytecode_backend__bytecode__field_types_byte_cons_id_0_0[4] = {
  (MR_PseudoTypeInfo) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0),
  (MR_PseudoTypeInfo) (&mercury__builtin__builtin__type_ctor_info_string_0),
  (MR_PseudoTypeInfo) (&mercury__builtin__builtin__type_ctor_info_int_0),
  (MR_PseudoTypeInfo) (&bytecode_backend__bytecode__bytecode_backend__bytecode__type_ctor_info_byte_cons_tag_0)
};

static const MR_DuFunctorDesc bytecode_backend__bytecode__bytecode_backend__bytecode__du_functor_desc_byte_cons_id_0_0 = {
  (MR_String) "byte_cons",
  INT16_C(4),
  UINT16_C(0),
  MR_SECTAG_NONE,
  UINT8_C(1),
  (MR_Integer) -1,
  INT32_C(0),
  bytecode_backend__bytecode__bytecode_backend__bytecode__field_types_byte_cons_id_0_0,
  NULL,
  NULL,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE,
  UINT8_C(0)
};

static const MR_PseudoTypeInfo bytecode_backend__bytecode__bytecode_backend__bytecode__field_types_byte_cons_id_0_1[1] = { (MR_PseudoTypeInfo) (&mercury__builtin__builtin__type_ctor_info_int_0) };

static const MR_DuFunctorDesc bytecode_backend__bytecode__bytecode_backend__bytecode__du_functor_desc_byte_cons_id_0_1 = {
  (MR_String) "byte_int_const",
  INT16_C(1),
  UINT16_C(0),
  MR_SECTAG_NONE,
  UINT8_C(2),
  (MR_Integer) -1,
  INT32_C(1),
  bytecode_backend__bytecode__bytecode_backend__bytecode__field_types_byte_cons_id_0_1,
  NULL,
  NULL,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE,
  UINT8_C(0)
};

static const MR_PseudoTypeInfo bytecode_backend__bytecode__bytecode_backend__bytecode__field_types_byte_cons_id_0_2[1] = { (MR_PseudoTypeInfo) (&mercury__builtin__builtin__type_ctor_info_string_0) };

static const MR_DuFunctorDesc bytecode_backend__bytecode__bytecode_backend__bytecode__du_functor_desc_byte_cons_id_0_2 = {
  (MR_String) "byte_string_const",
  INT16_C(1),
  UINT16_C(0),
  MR_SECTAG_REMOTE_FULL_WORD,
  UINT8_C(3),
  (MR_Integer) 0,
  INT32_C(2),
  bytecode_backend__bytecode__bytecode_backend__bytecode__field_types_byte_cons_id_0_2,
  NULL,
  NULL,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE,
  UINT8_C(0)
};

static const MR_PseudoTypeInfo bytecode_backend__bytecode__bytecode_backend__bytecode__field_types_byte_cons_id_0_3[1] = { (MR_PseudoTypeInfo) (&mercury__builtin__builtin__type_ctor_info_float_0) };

static const MR_DuFunctorDesc bytecode_backend__bytecode__bytecode_backend__bytecode__du_functor_desc_byte_cons_id_0_3 = {
  (MR_String) "byte_float_const",
  INT16_C(1),
  UINT16_C(0),
  MR_SECTAG_REMOTE_FULL_WORD,
  UINT8_C(3),
  (MR_Integer) 1,
  INT32_C(3),
  bytecode_backend__bytecode__bytecode_backend__bytecode__field_types_byte_cons_id_0_3,
  NULL,
  NULL,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE,
  UINT8_C(0)
};

static const MR_PseudoTypeInfo bytecode_backend__bytecode__bytecode_backend__bytecode__field_types_byte_cons_id_0_4[1] = { (MR_PseudoTypeInfo) (&mercury__builtin__builtin__type_ctor_info_character_0) };

static const MR_DuFunctorDesc bytecode_backend__bytecode__bytecode_backend__bytecode__du_functor_desc_byte_cons_id_0_4 = {
  (MR_String) "byte_char_const",
  INT16_C(1),
  UINT16_C(0),
  MR_SECTAG_REMOTE_FULL_WORD,
  UINT8_C(3),
  (MR_Integer) 2,
  INT32_C(4),
  bytecode_backend__bytecode__bytecode_backend__bytecode__field_types_byte_cons_id_0_4,
  NULL,
  NULL,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE,
  UINT8_C(0)
};

static const MR_PseudoTypeInfo bytecode_backend__bytecode__bytecode_backend__bytecode__field_types_byte_cons_id_0_5[5] = {
  (MR_PseudoTypeInfo) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0),
  (MR_PseudoTypeInfo) (&mercury__builtin__builtin__type_ctor_info_string_0),
  (MR_PseudoTypeInfo) (&mercury__builtin__builtin__type_ctor_info_int_0),
  (MR_PseudoTypeInfo) (&mercury__builtin__builtin__type_ctor_info_int_0),
  (MR_PseudoTypeInfo) (&mercury__builtin__builtin__type_ctor_info_int_0)
};

static const MR_DuFunctorDesc bytecode_backend__bytecode__bytecode_backend__bytecode__du_functor_desc_byte_cons_id_0_5 = {
  (MR_String) "byte_pred_const",
  INT16_C(5),
  UINT16_C(0),
  MR_SECTAG_REMOTE_FULL_WORD,
  UINT8_C(3),
  (MR_Integer) 3,
  INT32_C(5),
  bytecode_backend__bytecode__bytecode_backend__bytecode__field_types_byte_cons_id_0_5,
  NULL,
  NULL,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE,
  UINT8_C(0)
};

static const MR_PseudoTypeInfo bytecode_backend__bytecode__bytecode_backend__bytecode__field_types_byte_cons_id_0_6[3] = {
  (MR_PseudoTypeInfo) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0),
  (MR_PseudoTypeInfo) (&mercury__builtin__builtin__type_ctor_info_string_0),
  (MR_PseudoTypeInfo) (&mercury__builtin__builtin__type_ctor_info_int_0)
};

static const MR_DuFunctorDesc bytecode_backend__bytecode__bytecode_backend__bytecode__du_functor_desc_byte_cons_id_0_6 = {
  (MR_String) "byte_type_ctor_info_const",
  INT16_C(3),
  UINT16_C(0),
  MR_SECTAG_REMOTE_FULL_WORD,
  UINT8_C(3),
  (MR_Integer) 4,
  INT32_C(6),
  bytecode_backend__bytecode__bytecode_backend__bytecode__field_types_byte_cons_id_0_6,
  NULL,
  NULL,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE,
  UINT8_C(0)
};

static const MR_PseudoTypeInfo bytecode_backend__bytecode__bytecode_backend__bytecode__field_types_byte_cons_id_0_7[3] = {
  (MR_PseudoTypeInfo) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0),
  (MR_PseudoTypeInfo) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_class_id_0),
  (MR_PseudoTypeInfo) (&mercury__builtin__builtin__type_ctor_info_string_0)
};

static const MR_DuFunctorDesc bytecode_backend__bytecode__bytecode_backend__bytecode__du_functor_desc_byte_cons_id_0_7 = {
  (MR_String) "byte_base_typeclass_info_const",
  INT16_C(3),
  UINT16_C(0),
  MR_SECTAG_REMOTE_FULL_WORD,
  UINT8_C(3),
  (MR_Integer) 5,
  INT32_C(7),
  bytecode_backend__bytecode__bytecode_backend__bytecode__field_types_byte_cons_id_0_7,
  NULL,
  NULL,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE,
  UINT8_C(0)
};

static const MR_DuFunctorDesc bytecode_backend__bytecode__bytecode_backend__bytecode__du_functor_desc_byte_cons_id_0_8 = {
  (MR_String) "byte_type_info_cell_constructor",
  INT16_C(0),
  UINT16_C(0),
  MR_SECTAG_LOCAL_REST_OF_WORD,
  UINT8_C(0),
  (MR_Integer) 0,
  INT32_C(8),
  NULL,
  NULL,
  NULL,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE,
  UINT8_C(0)
};

static const MR_DuFunctorDesc bytecode_backend__bytecode__bytecode_backend__bytecode__du_functor_desc_byte_cons_id_0_9 = {
  (MR_String) "byte_typeclass_info_cell_constructor",
  INT16_C(0),
  UINT16_C(0),
  MR_SECTAG_LOCAL_REST_OF_WORD,
  UINT8_C(0),
  (MR_Integer) 1,
  INT32_C(9),
  NULL,
  NULL,
  NULL,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE,
  UINT8_C(0)
};

static const MR_DuFunctorDescPtr bytecode_backend__bytecode__bytecode_backend__bytecode__du_stag_ordered_byte_cons_id_0_0[2] = {
  &bytecode_backend__bytecode__bytecode_backend__bytecode__du_functor_desc_byte_cons_id_0_8,
  &bytecode_backend__bytecode__bytecode_backend__bytecode__du_functor_desc_byte_cons_id_0_9
};

static const MR_DuFunctorDescPtr bytecode_backend__bytecode__bytecode_backend__bytecode__du_stag_ordered_byte_cons_id_0_1[1] = { &bytecode_backend__bytecode__bytecode_backend__bytecode__du_functor_desc_byte_cons_id_0_0 };

static const MR_DuFunctorDescPtr bytecode_backend__bytecode__bytecode_backend__bytecode__du_stag_ordered_byte_cons_id_0_2[1] = { &bytecode_backend__bytecode__bytecode_backend__bytecode__du_functor_desc_byte_cons_id_0_1 };

static const MR_DuFunctorDescPtr bytecode_backend__bytecode__bytecode_backend__bytecode__du_stag_ordered_byte_cons_id_0_3[6] = {
  &bytecode_backend__bytecode__bytecode_backend__bytecode__du_functor_desc_byte_cons_id_0_2,
  &bytecode_backend__bytecode__bytecode_backend__bytecode__du_functor_desc_byte_cons_id_0_3,
  &bytecode_backend__bytecode__bytecode_backend__bytecode__du_functor_desc_byte_cons_id_0_4,
  &bytecode_backend__bytecode__bytecode_backend__bytecode__du_functor_desc_byte_cons_id_0_5,
  &bytecode_backend__bytecode__bytecode_backend__bytecode__du_functor_desc_byte_cons_id_0_6,
  &bytecode_backend__bytecode__bytecode_backend__bytecode__du_functor_desc_byte_cons_id_0_7
};

static const MR_DuPtagLayout bytecode_backend__bytecode__bytecode_backend__bytecode__du_ptag_ordered_byte_cons_id_0[4] = {
  {
    UINT32_C(2),
    MR_SECTAG_LOCAL_REST_OF_WORD,
    bytecode_backend__bytecode__bytecode_backend__bytecode__du_stag_ordered_byte_cons_id_0_0,
    INT8_C(-1),
    UINT8_C(0),
    UINT8_C(1)
  },
  {
    UINT32_C(1),
    MR_SECTAG_NONE,
    bytecode_backend__bytecode__bytecode_backend__bytecode__du_stag_ordered_byte_cons_id_0_1,
    INT8_C(-1),
    UINT8_C(1),
    UINT8_C(1)
  },
  {
    UINT32_C(1),
    MR_SECTAG_NONE,
    bytecode_backend__bytecode__bytecode_backend__bytecode__du_stag_ordered_byte_cons_id_0_2,
    INT8_C(-1),
    UINT8_C(2),
    UINT8_C(1)
  },
  {
    UINT32_C(6),
    MR_SECTAG_REMOTE_FULL_WORD,
    bytecode_backend__bytecode__bytecode_backend__bytecode__du_stag_ordered_byte_cons_id_0_3,
    INT8_C(-1),
    UINT8_C(3),
    UINT8_C(1)
  }
};

static const MR_DuFunctorDescPtr bytecode_backend__bytecode__bytecode_backend__bytecode__du_name_ordered_byte_cons_id_0[10] = {
  &bytecode_backend__bytecode__bytecode_backend__bytecode__du_functor_desc_byte_cons_id_0_7,
  &bytecode_backend__bytecode__bytecode_backend__bytecode__du_functor_desc_byte_cons_id_0_4,
  &bytecode_backend__bytecode__bytecode_backend__bytecode__du_functor_desc_byte_cons_id_0_0,
  &bytecode_backend__bytecode__bytecode_backend__bytecode__du_functor_desc_byte_cons_id_0_3,
  &bytecode_backend__bytecode__bytecode_backend__bytecode__du_functor_desc_byte_cons_id_0_1,
  &bytecode_backend__bytecode__bytecode_backend__bytecode__du_functor_desc_byte_cons_id_0_5,
  &bytecode_backend__bytecode__bytecode_backend__bytecode__du_functor_desc_byte_cons_id_0_2,
  &bytecode_backend__bytecode__bytecode_backend__bytecode__du_functor_desc_byte_cons_id_0_6,
  &bytecode_backend__bytecode__bytecode_backend__bytecode__du_functor_desc_byte_cons_id_0_8,
  &bytecode_backend__bytecode__bytecode_backend__bytecode__du_functor_desc_byte_cons_id_0_9
};

static const MR_Integer bytecode_backend__bytecode__bytecode_backend__bytecode__functor_number_map_byte_cons_id_0[10] = {
  (MR_Integer) 2,
  (MR_Integer) 4,
  (MR_Integer) 6,
  (MR_Integer) 3,
  (MR_Integer) 1,
  (MR_Integer) 5,
  (MR_Integer) 7,
  (MR_Integer) 0,
  (MR_Integer) 8,
  (MR_Integer) 9
};

const MR_TypeCtorInfo_Struct bytecode_backend__bytecode__bytecode_backend__bytecode__type_ctor_info_byte_cons_id_0 = {
  (MR_Integer) 0,
  UINT8_C(18),
  INT8_C(4),
  MR_TYPECTOR_REP_DU,
  ((MR_Box) (bytecode_backend__bytecode____Unify____byte_cons_id_0_0_10001)),
  ((MR_Box) (bytecode_backend__bytecode____Compare____byte_cons_id_0_0_10001)),
  (MR_String) "bytecode_backend.bytecode",
  (MR_String) "byte_cons_id",
  { bytecode_backend__bytecode__bytecode_backend__bytecode__du_name_ordered_byte_cons_id_0 },
  { bytecode_backend__bytecode__bytecode_backend__bytecode__du_ptag_ordered_byte_cons_id_0 },
  (MR_Integer) 10,
  UINT16_C(12),
  bytecode_backend__bytecode__bytecode_backend__bytecode__functor_number_map_byte_cons_id_0,

};

static const MR_DuFunctorDesc bytecode_backend__bytecode__bytecode_backend__bytecode__du_functor_desc_byte_cons_tag_0_0 = {
  (MR_String) "byte_no_tag",
  INT16_C(0),
  UINT16_C(0),
  MR_SECTAG_LOCAL_REST_OF_WORD,
  UINT8_C(0),
  (MR_Integer) 0,
  INT32_C(0),
  NULL,
  NULL,
  NULL,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE,
  UINT8_C(0)
};

static const MR_PseudoTypeInfo bytecode_backend__bytecode__bytecode_backend__bytecode__field_types_byte_cons_tag_0_1[1] = { (MR_PseudoTypeInfo) (&mercury__builtin__builtin__type_ctor_info_int_0) };

static const MR_DuFunctorDesc bytecode_backend__bytecode__bytecode_backend__bytecode__du_functor_desc_byte_cons_tag_0_1 = {
  (MR_String) "byte_unshared_tag",
  INT16_C(1),
  UINT16_C(0),
  MR_SECTAG_NONE,
  UINT8_C(1),
  (MR_Integer) -1,
  INT32_C(1),
  bytecode_backend__bytecode__bytecode_backend__bytecode__field_types_byte_cons_tag_0_1,
  NULL,
  NULL,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE,
  UINT8_C(0)
};

static const MR_PseudoTypeInfo bytecode_backend__bytecode__bytecode_backend__bytecode__field_types_byte_cons_tag_0_2[2] = {
  (MR_PseudoTypeInfo) (&mercury__builtin__builtin__type_ctor_info_int_0),
  (MR_PseudoTypeInfo) (&mercury__builtin__builtin__type_ctor_info_int_0)
};

static const MR_DuFunctorDesc bytecode_backend__bytecode__bytecode_backend__bytecode__du_functor_desc_byte_cons_tag_0_2 = {
  (MR_String) "byte_shared_remote_tag",
  INT16_C(2),
  UINT16_C(0),
  MR_SECTAG_NONE,
  UINT8_C(2),
  (MR_Integer) -1,
  INT32_C(2),
  bytecode_backend__bytecode__bytecode_backend__bytecode__field_types_byte_cons_tag_0_2,
  NULL,
  NULL,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE,
  UINT8_C(0)
};

static const MR_PseudoTypeInfo bytecode_backend__bytecode__bytecode_backend__bytecode__field_types_byte_cons_tag_0_3[2] = {
  (MR_PseudoTypeInfo) (&mercury__builtin__builtin__type_ctor_info_int_0),
  (MR_PseudoTypeInfo) (&mercury__builtin__builtin__type_ctor_info_int_0)
};

static const MR_DuFunctorDesc bytecode_backend__bytecode__bytecode_backend__bytecode__du_functor_desc_byte_cons_tag_0_3 = {
  (MR_String) "byte_shared_local_tag",
  INT16_C(2),
  UINT16_C(0),
  MR_SECTAG_REMOTE_FULL_WORD,
  UINT8_C(3),
  (MR_Integer) 0,
  INT32_C(3),
  bytecode_backend__bytecode__bytecode_backend__bytecode__field_types_byte_cons_tag_0_3,
  NULL,
  NULL,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE,
  UINT8_C(0)
};

static const MR_PseudoTypeInfo bytecode_backend__bytecode__bytecode_backend__bytecode__field_types_byte_cons_tag_0_4[1] = { (MR_PseudoTypeInfo) (&mercury__builtin__builtin__type_ctor_info_int_0) };

static const MR_DuFunctorDesc bytecode_backend__bytecode__bytecode_backend__bytecode__du_functor_desc_byte_cons_tag_0_4 = {
  (MR_String) "byte_enum_tag",
  INT16_C(1),
  UINT16_C(0),
  MR_SECTAG_REMOTE_FULL_WORD,
  UINT8_C(3),
  (MR_Integer) 1,
  INT32_C(4),
  bytecode_backend__bytecode__bytecode_backend__bytecode__field_types_byte_cons_tag_0_4,
  NULL,
  NULL,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE,
  UINT8_C(0)
};

static const MR_DuFunctorDescPtr bytecode_backend__bytecode__bytecode_backend__bytecode__du_stag_ordered_byte_cons_tag_0_0[1] = { &bytecode_backend__bytecode__bytecode_backend__bytecode__du_functor_desc_byte_cons_tag_0_0 };

static const MR_DuFunctorDescPtr bytecode_backend__bytecode__bytecode_backend__bytecode__du_stag_ordered_byte_cons_tag_0_1[1] = { &bytecode_backend__bytecode__bytecode_backend__bytecode__du_functor_desc_byte_cons_tag_0_1 };

static const MR_DuFunctorDescPtr bytecode_backend__bytecode__bytecode_backend__bytecode__du_stag_ordered_byte_cons_tag_0_2[1] = { &bytecode_backend__bytecode__bytecode_backend__bytecode__du_functor_desc_byte_cons_tag_0_2 };

static const MR_DuFunctorDescPtr bytecode_backend__bytecode__bytecode_backend__bytecode__du_stag_ordered_byte_cons_tag_0_3[2] = {
  &bytecode_backend__bytecode__bytecode_backend__bytecode__du_functor_desc_byte_cons_tag_0_3,
  &bytecode_backend__bytecode__bytecode_backend__bytecode__du_functor_desc_byte_cons_tag_0_4
};

static const MR_DuPtagLayout bytecode_backend__bytecode__bytecode_backend__bytecode__du_ptag_ordered_byte_cons_tag_0[4] = {
  {
    UINT32_C(1),
    MR_SECTAG_LOCAL_REST_OF_WORD,
    bytecode_backend__bytecode__bytecode_backend__bytecode__du_stag_ordered_byte_cons_tag_0_0,
    INT8_C(-1),
    UINT8_C(0),
    UINT8_C(1)
  },
  {
    UINT32_C(1),
    MR_SECTAG_NONE,
    bytecode_backend__bytecode__bytecode_backend__bytecode__du_stag_ordered_byte_cons_tag_0_1,
    INT8_C(-1),
    UINT8_C(1),
    UINT8_C(1)
  },
  {
    UINT32_C(1),
    MR_SECTAG_NONE,
    bytecode_backend__bytecode__bytecode_backend__bytecode__du_stag_ordered_byte_cons_tag_0_2,
    INT8_C(-1),
    UINT8_C(2),
    UINT8_C(1)
  },
  {
    UINT32_C(2),
    MR_SECTAG_REMOTE_FULL_WORD,
    bytecode_backend__bytecode__bytecode_backend__bytecode__du_stag_ordered_byte_cons_tag_0_3,
    INT8_C(-1),
    UINT8_C(3),
    UINT8_C(1)
  }
};

static const MR_DuFunctorDescPtr bytecode_backend__bytecode__bytecode_backend__bytecode__du_name_ordered_byte_cons_tag_0[5] = {
  &bytecode_backend__bytecode__bytecode_backend__bytecode__du_functor_desc_byte_cons_tag_0_4,
  &bytecode_backend__bytecode__bytecode_backend__bytecode__du_functor_desc_byte_cons_tag_0_0,
  &bytecode_backend__bytecode__bytecode_backend__bytecode__du_functor_desc_byte_cons_tag_0_3,
  &bytecode_backend__bytecode__bytecode_backend__bytecode__du_functor_desc_byte_cons_tag_0_2,
  &bytecode_backend__bytecode__bytecode_backend__bytecode__du_functor_desc_byte_cons_tag_0_1
};

static const MR_Integer bytecode_backend__bytecode__bytecode_backend__bytecode__functor_number_map_byte_cons_tag_0[5] = {
  (MR_Integer) 1,
  (MR_Integer) 4,
  (MR_Integer) 3,
  (MR_Integer) 2,
  (MR_Integer) 0
};

const MR_TypeCtorInfo_Struct bytecode_backend__bytecode__bytecode_backend__bytecode__type_ctor_info_byte_cons_tag_0 = {
  (MR_Integer) 0,
  UINT8_C(18),
  INT8_C(4),
  MR_TYPECTOR_REP_DU,
  ((MR_Box) (bytecode_backend__bytecode____Unify____byte_cons_tag_0_0_10001)),
  ((MR_Box) (bytecode_backend__bytecode____Compare____byte_cons_tag_0_0_10001)),
  (MR_String) "bytecode_backend.bytecode",
  (MR_String) "byte_cons_tag",
  { bytecode_backend__bytecode__bytecode_backend__bytecode__du_name_ordered_byte_cons_tag_0 },
  { bytecode_backend__bytecode__bytecode_backend__bytecode__du_ptag_ordered_byte_cons_tag_0 },
  (MR_Integer) 5,
  UINT16_C(12),
  bytecode_backend__bytecode__bytecode_backend__bytecode__functor_number_map_byte_cons_tag_0,

};

static const MR_EnumFunctorDesc bytecode_backend__bytecode__bytecode_backend__bytecode__enum_functor_desc_byte_dir_0_0 = {
  (MR_String) "to_arg",
  INT32_C(0)
};

static const MR_EnumFunctorDesc bytecode_backend__bytecode__bytecode_backend__bytecode__enum_functor_desc_byte_dir_0_1 = {
  (MR_String) "to_var",
  INT32_C(1)
};

static const MR_EnumFunctorDesc bytecode_backend__bytecode__bytecode_backend__bytecode__enum_functor_desc_byte_dir_0_2 = {
  (MR_String) "to_none",
  INT32_C(2)
};

static const MR_EnumFunctorDescPtr bytecode_backend__bytecode__bytecode_backend__bytecode__enum_ordinal_ordered_byte_dir_0[3] = {
  &bytecode_backend__bytecode__bytecode_backend__bytecode__enum_functor_desc_byte_dir_0_0,
  &bytecode_backend__bytecode__bytecode_backend__bytecode__enum_functor_desc_byte_dir_0_1,
  &bytecode_backend__bytecode__bytecode_backend__bytecode__enum_functor_desc_byte_dir_0_2
};

static const MR_EnumFunctorDescPtr bytecode_backend__bytecode__bytecode_backend__bytecode__enum_name_ordered_byte_dir_0[3] = {
  &bytecode_backend__bytecode__bytecode_backend__bytecode__enum_functor_desc_byte_dir_0_0,
  &bytecode_backend__bytecode__bytecode_backend__bytecode__enum_functor_desc_byte_dir_0_2,
  &bytecode_backend__bytecode__bytecode_backend__bytecode__enum_functor_desc_byte_dir_0_1
};

static const MR_Integer bytecode_backend__bytecode__bytecode_backend__bytecode__functor_number_map_byte_dir_0[3] = {
  (MR_Integer) 0,
  (MR_Integer) 2,
  (MR_Integer) 1
};

const MR_TypeCtorInfo_Struct bytecode_backend__bytecode__bytecode_backend__bytecode__type_ctor_info_byte_dir_0 = {
  (MR_Integer) 0,
  UINT8_C(18),
  INT8_C(-1),
  MR_TYPECTOR_REP_ENUM,
  ((MR_Box) (bytecode_backend__bytecode____Unify____byte_dir_0_0_10001)),
  ((MR_Box) (bytecode_backend__bytecode____Compare____byte_dir_0_0_10001)),
  (MR_String) "bytecode_backend.bytecode",
  (MR_String) "byte_dir",
  { bytecode_backend__bytecode__bytecode_backend__bytecode__enum_name_ordered_byte_dir_0 },
  { bytecode_backend__bytecode__bytecode_backend__bytecode__enum_ordinal_ordered_byte_dir_0 },
  (MR_Integer) 3,
  UINT16_C(12),
  bytecode_backend__bytecode__bytecode_backend__bytecode__functor_number_map_byte_dir_0,

};

const MR_TypeCtorInfo_Struct bytecode_backend__bytecode__bytecode_backend__bytecode__type_ctor_info_byte_is_func_0 = {
  (MR_Integer) 0,
  UINT8_C(18),
  INT8_C(-1),
  MR_TYPECTOR_REP_EQUIV_GROUND,
  ((MR_Box) (bytecode_backend__bytecode____Unify____byte_is_func_0_0_10001)),
  ((MR_Box) (bytecode_backend__bytecode____Compare____byte_is_func_0_0_10001)),
  (MR_String) "bytecode_backend.bytecode",
  (MR_String) "byte_is_func",
  { NULL },
  { (MR_PseudoTypeInfo) (&mercury__builtin__builtin__type_ctor_info_int_0) },
  (MR_Integer) -1,
  UINT16_C(0),
  NULL,

};

const MR_TypeCtorInfo_Struct bytecode_backend__bytecode__bytecode_backend__bytecode__type_ctor_info_byte_label_id_0 = {
  (MR_Integer) 0,
  UINT8_C(18),
  INT8_C(-1),
  MR_TYPECTOR_REP_EQUIV_GROUND,
  ((MR_Box) (bytecode_backend__bytecode____Unify____byte_label_id_0_0_10001)),
  ((MR_Box) (bytecode_backend__bytecode____Compare____byte_label_id_0_0_10001)),
  (MR_String) "bytecode_backend.bytecode",
  (MR_String) "byte_label_id",
  { NULL },
  { (MR_PseudoTypeInfo) (&mercury__builtin__builtin__type_ctor_info_int_0) },
  (MR_Integer) -1,
  UINT16_C(0),
  NULL,

};

const MR_TypeCtorInfo_Struct bytecode_backend__bytecode__bytecode_backend__bytecode__type_ctor_info_byte_module_id_0 = {
  (MR_Integer) 0,
  UINT8_C(18),
  INT8_C(-1),
  MR_TYPECTOR_REP_EQUIV_GROUND,
  ((MR_Box) (bytecode_backend__bytecode____Unify____byte_module_id_0_0_10001)),
  ((MR_Box) (bytecode_backend__bytecode____Compare____byte_module_id_0_0_10001)),
  (MR_String) "bytecode_backend.bytecode",
  (MR_String) "byte_module_id",
  { NULL },
  { (MR_PseudoTypeInfo) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0) },
  (MR_Integer) -1,
  UINT16_C(0),
  NULL,

};

const MR_TypeCtorInfo_Struct bytecode_backend__bytecode__bytecode_backend__bytecode__type_ctor_info_byte_pred_id_0 = {
  (MR_Integer) 0,
  UINT8_C(18),
  INT8_C(-1),
  MR_TYPECTOR_REP_EQUIV_GROUND,
  ((MR_Box) (bytecode_backend__bytecode____Unify____byte_pred_id_0_0_10001)),
  ((MR_Box) (bytecode_backend__bytecode____Compare____byte_pred_id_0_0_10001)),
  (MR_String) "bytecode_backend.bytecode",
  (MR_String) "byte_pred_id",
  { NULL },
  { (MR_PseudoTypeInfo) (&mercury__builtin__builtin__type_ctor_info_string_0) },
  (MR_Integer) -1,
  UINT16_C(0),
  NULL,

};

const MR_TypeCtorInfo_Struct bytecode_backend__bytecode__bytecode_backend__bytecode__type_ctor_info_byte_proc_id_0 = {
  (MR_Integer) 0,
  UINT8_C(18),
  INT8_C(-1),
  MR_TYPECTOR_REP_EQUIV_GROUND,
  ((MR_Box) (bytecode_backend__bytecode____Unify____byte_proc_id_0_0_10001)),
  ((MR_Box) (bytecode_backend__bytecode____Compare____byte_proc_id_0_0_10001)),
  (MR_String) "bytecode_backend.bytecode",
  (MR_String) "byte_proc_id",
  { NULL },
  { (MR_PseudoTypeInfo) (&mercury__builtin__builtin__type_ctor_info_int_0) },
  (MR_Integer) -1,
  UINT16_C(0),
  NULL,

};

static const MR_EnumFunctorDesc bytecode_backend__bytecode__bytecode_backend__bytecode__enum_functor_desc_byte_reg_type_0_0 = {
  (MR_String) "byte_reg_r",
  INT32_C(0)
};

static const MR_EnumFunctorDescPtr bytecode_backend__bytecode__bytecode_backend__bytecode__enum_ordinal_ordered_byte_reg_type_0[1] = { &bytecode_backend__bytecode__bytecode_backend__bytecode__enum_functor_desc_byte_reg_type_0_0 };

static const MR_EnumFunctorDescPtr bytecode_backend__bytecode__bytecode_backend__bytecode__enum_name_ordered_byte_reg_type_0[1] = { &bytecode_backend__bytecode__bytecode_backend__bytecode__enum_functor_desc_byte_reg_type_0_0 };

static const MR_Integer bytecode_backend__bytecode__bytecode_backend__bytecode__functor_number_map_byte_reg_type_0[1] = { (MR_Integer) 0 };

const MR_TypeCtorInfo_Struct bytecode_backend__bytecode__bytecode_backend__bytecode__type_ctor_info_byte_reg_type_0 = {
  (MR_Integer) 0,
  UINT8_C(18),
  INT8_C(-1),
  MR_TYPECTOR_REP_DUMMY,
  ((MR_Box) (bytecode_backend__bytecode____Unify____byte_reg_type_0_0_10001)),
  ((MR_Box) (bytecode_backend__bytecode____Compare____byte_reg_type_0_0_10001)),
  (MR_String) "bytecode_backend.bytecode",
  (MR_String) "byte_reg_type",
  { bytecode_backend__bytecode__bytecode_backend__bytecode__enum_name_ordered_byte_reg_type_0 },
  { bytecode_backend__bytecode__bytecode_backend__bytecode__enum_ordinal_ordered_byte_reg_type_0 },
  (MR_Integer) 1,
  UINT16_C(12),
  bytecode_backend__bytecode__bytecode_backend__bytecode__functor_number_map_byte_reg_type_0,

};

const MR_TypeCtorInfo_Struct bytecode_backend__bytecode__bytecode_backend__bytecode__type_ctor_info_byte_temp_0 = {
  (MR_Integer) 0,
  UINT8_C(18),
  INT8_C(-1),
  MR_TYPECTOR_REP_EQUIV_GROUND,
  ((MR_Box) (bytecode_backend__bytecode____Unify____byte_temp_0_0_10001)),
  ((MR_Box) (bytecode_backend__bytecode____Compare____byte_temp_0_0_10001)),
  (MR_String) "bytecode_backend.bytecode",
  (MR_String) "byte_temp",
  { NULL },
  { (MR_PseudoTypeInfo) (&mercury__builtin__builtin__type_ctor_info_int_0) },
  (MR_Integer) -1,
  UINT16_C(0),
  NULL,

};

static const MR_EnumFunctorDesc bytecode_backend__bytecode__bytecode_backend__bytecode__enum_functor_desc_byte_test_id_0_0 = {
  (MR_String) "int_test",
  INT32_C(0)
};

static const MR_EnumFunctorDesc bytecode_backend__bytecode__bytecode_backend__bytecode__enum_functor_desc_byte_test_id_0_1 = {
  (MR_String) "char_test",
  INT32_C(1)
};

static const MR_EnumFunctorDesc bytecode_backend__bytecode__bytecode_backend__bytecode__enum_functor_desc_byte_test_id_0_2 = {
  (MR_String) "string_test",
  INT32_C(2)
};

static const MR_EnumFunctorDesc bytecode_backend__bytecode__bytecode_backend__bytecode__enum_functor_desc_byte_test_id_0_3 = {
  (MR_String) "float_test",
  INT32_C(3)
};

static const MR_EnumFunctorDesc bytecode_backend__bytecode__bytecode_backend__bytecode__enum_functor_desc_byte_test_id_0_4 = {
  (MR_String) "enum_test",
  INT32_C(4)
};

static const MR_EnumFunctorDesc bytecode_backend__bytecode__bytecode_backend__bytecode__enum_functor_desc_byte_test_id_0_5 = {
  (MR_String) "dummy_test",
  INT32_C(5)
};

static const MR_EnumFunctorDescPtr bytecode_backend__bytecode__bytecode_backend__bytecode__enum_ordinal_ordered_byte_test_id_0[6] = {
  &bytecode_backend__bytecode__bytecode_backend__bytecode__enum_functor_desc_byte_test_id_0_0,
  &bytecode_backend__bytecode__bytecode_backend__bytecode__enum_functor_desc_byte_test_id_0_1,
  &bytecode_backend__bytecode__bytecode_backend__bytecode__enum_functor_desc_byte_test_id_0_2,
  &bytecode_backend__bytecode__bytecode_backend__bytecode__enum_functor_desc_byte_test_id_0_3,
  &bytecode_backend__bytecode__bytecode_backend__bytecode__enum_functor_desc_byte_test_id_0_4,
  &bytecode_backend__bytecode__bytecode_backend__bytecode__enum_functor_desc_byte_test_id_0_5
};

static const MR_EnumFunctorDescPtr bytecode_backend__bytecode__bytecode_backend__bytecode__enum_name_ordered_byte_test_id_0[6] = {
  &bytecode_backend__bytecode__bytecode_backend__bytecode__enum_functor_desc_byte_test_id_0_1,
  &bytecode_backend__bytecode__bytecode_backend__bytecode__enum_functor_desc_byte_test_id_0_5,
  &bytecode_backend__bytecode__bytecode_backend__bytecode__enum_functor_desc_byte_test_id_0_4,
  &bytecode_backend__bytecode__bytecode_backend__bytecode__enum_functor_desc_byte_test_id_0_3,
  &bytecode_backend__bytecode__bytecode_backend__bytecode__enum_functor_desc_byte_test_id_0_0,
  &bytecode_backend__bytecode__bytecode_backend__bytecode__enum_functor_desc_byte_test_id_0_2
};

static const MR_Integer bytecode_backend__bytecode__bytecode_backend__bytecode__functor_number_map_byte_test_id_0[6] = {
  (MR_Integer) 4,
  (MR_Integer) 0,
  (MR_Integer) 5,
  (MR_Integer) 3,
  (MR_Integer) 2,
  (MR_Integer) 1
};

const MR_TypeCtorInfo_Struct bytecode_backend__bytecode__bytecode_backend__bytecode__type_ctor_info_byte_test_id_0 = {
  (MR_Integer) 0,
  UINT8_C(18),
  INT8_C(-1),
  MR_TYPECTOR_REP_ENUM,
  ((MR_Box) (bytecode_backend__bytecode____Unify____byte_test_id_0_0_10001)),
  ((MR_Box) (bytecode_backend__bytecode____Compare____byte_test_id_0_0_10001)),
  (MR_String) "bytecode_backend.bytecode",
  (MR_String) "byte_test_id",
  { bytecode_backend__bytecode__bytecode_backend__bytecode__enum_name_ordered_byte_test_id_0 },
  { bytecode_backend__bytecode__bytecode_backend__bytecode__enum_ordinal_ordered_byte_test_id_0 },
  (MR_Integer) 6,
  UINT16_C(12),
  bytecode_backend__bytecode__bytecode_backend__bytecode__functor_number_map_byte_test_id_0,

};

static const MR_FA_TypeInfo_Struct1 bytecode_backend__bytecode__cord__ti_cord_1bytecode_backend__bytecode__type_ctor_info_byte_code_0 = {
  &mercury__cord__cord__type_ctor_info_cord_1,
  { (MR_TypeInfo) (&bytecode_backend__bytecode__bytecode_backend__bytecode__type_ctor_info_byte_code_0) }
};

const MR_TypeCtorInfo_Struct bytecode_backend__bytecode__bytecode_backend__bytecode__type_ctor_info_byte_tree_0 = {
  (MR_Integer) 0,
  UINT8_C(18),
  INT8_C(-1),
  MR_TYPECTOR_REP_EQUIV_GROUND,
  ((MR_Box) (bytecode_backend__bytecode____Unify____byte_tree_0_0_10001)),
  ((MR_Box) (bytecode_backend__bytecode____Compare____byte_tree_0_0_10001)),
  (MR_String) "bytecode_backend.bytecode",
  (MR_String) "byte_tree",
  { NULL },
  { (MR_PseudoTypeInfo) (&bytecode_backend__bytecode__cord__ti_cord_1bytecode_backend__bytecode__type_ctor_info_byte_code_0) },
  (MR_Integer) -1,
  UINT16_C(0),
  NULL,

};

const MR_TypeCtorInfo_Struct bytecode_backend__bytecode__bytecode_backend__bytecode__type_ctor_info_byte_var_0 = {
  (MR_Integer) 0,
  UINT8_C(18),
  INT8_C(-1),
  MR_TYPECTOR_REP_EQUIV_GROUND,
  ((MR_Box) (bytecode_backend__bytecode____Unify____byte_var_0_0_10001)),
  ((MR_Box) (bytecode_backend__bytecode____Compare____byte_var_0_0_10001)),
  (MR_String) "bytecode_backend.bytecode",
  (MR_String) "byte_var",
  { NULL },
  { (MR_PseudoTypeInfo) (&mercury__builtin__builtin__type_ctor_info_int_0) },
  (MR_Integer) -1,
  UINT16_C(0),
  NULL,

};

static const MR_PseudoTypeInfo bytecode_backend__bytecode__bytecode_backend__bytecode__field_types_byte_var_info_0_0[2] = {
  (MR_PseudoTypeInfo) (&mercury__builtin__builtin__type_ctor_info_string_0),
  (MR_PseudoTypeInfo) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0)
};

static const MR_DuFunctorDesc bytecode_backend__bytecode__bytecode_backend__bytecode__du_functor_desc_byte_var_info_0_0 = {
  (MR_String) "var_info",
  INT16_C(2),
  UINT16_C(0),
  MR_SECTAG_NONE,
  UINT8_C(0),
  (MR_Integer) -1,
  INT32_C(0),
  bytecode_backend__bytecode__bytecode_backend__bytecode__field_types_byte_var_info_0_0,
  NULL,
  NULL,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE,
  UINT8_C(0)
};

static const MR_DuFunctorDescPtr bytecode_backend__bytecode__bytecode_backend__bytecode__du_stag_ordered_byte_var_info_0_0[1] = { &bytecode_backend__bytecode__bytecode_backend__bytecode__du_functor_desc_byte_var_info_0_0 };

static const MR_DuPtagLayout bytecode_backend__bytecode__bytecode_backend__bytecode__du_ptag_ordered_byte_var_info_0[1] = {
  {
    UINT32_C(1),
    MR_SECTAG_NONE,
    bytecode_backend__bytecode__bytecode_backend__bytecode__du_stag_ordered_byte_var_info_0_0,
    INT8_C(-1),
    UINT8_C(0),
    UINT8_C(1)
  }
};

static const MR_DuFunctorDescPtr bytecode_backend__bytecode__bytecode_backend__bytecode__du_name_ordered_byte_var_info_0[1] = { &bytecode_backend__bytecode__bytecode_backend__bytecode__du_functor_desc_byte_var_info_0_0 };

static const MR_Integer bytecode_backend__bytecode__bytecode_backend__bytecode__functor_number_map_byte_var_info_0[1] = { (MR_Integer) 0 };

const MR_TypeCtorInfo_Struct bytecode_backend__bytecode__bytecode_backend__bytecode__type_ctor_info_byte_var_info_0 = {
  (MR_Integer) 0,
  UINT8_C(18),
  INT8_C(1),
  MR_TYPECTOR_REP_DU,
  ((MR_Box) (bytecode_backend__bytecode____Unify____byte_var_info_0_0_10001)),
  ((MR_Box) (bytecode_backend__bytecode____Compare____byte_var_info_0_0_10001)),
  (MR_String) "bytecode_backend.bytecode",
  (MR_String) "byte_var_info",
  { bytecode_backend__bytecode__bytecode_backend__bytecode__du_name_ordered_byte_var_info_0 },
  { bytecode_backend__bytecode__bytecode_backend__bytecode__du_ptag_ordered_byte_var_info_0 },
  (MR_Integer) 1,
  UINT16_C(12),
  bytecode_backend__bytecode__bytecode_backend__bytecode__functor_number_map_byte_var_info_0,

};

static MR_bool MR_CALL 
bytecode_backend__bytecode__IntroducedFrom__pred__output_args__279__1_2_p_0(
  MR_Word OtherConsIds_21,
  MR_Word HeadVar__2_67)
{
  MR_bool succeeded;

  succeeded = mercury__builtin__unify_2_p_0((MR_Word) (&bytecode_backend__bytecode_scalar_common_1[0]), ((MR_Box) (OtherConsIds_21)), ((MR_Box) (HeadVar__2_67)));
  return succeeded;
}

void MR_CALL 
bytecode_backend__bytecode____Compare____byte_var_info_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3)
{
  MR_bool succeeded;
  MR_Integer CastX_9 = (MR_Integer) (HeadVar__2_2);
  MR_Integer CastY_10 = (MR_Integer) (HeadVar__3_3);

  succeeded = (CastX_9 == CastY_10);
  if (succeeded)
    *HeadVar__1_1 = (MR_Integer) 0;
  else
  {
    MR_String ArgX1_4 = ((MR_String) ((MR_hl_field(0, HeadVar__2_2, (MR_Integer) 0))));
    MR_String ArgY1_5 = ((MR_String) ((MR_hl_field(0, HeadVar__3_3, (MR_Integer) 0))));
    MR_Word ArgX2_7 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, (MR_Integer) 1))));
    MR_Word ArgY2_8 = ((MR_Word) ((MR_hl_field(0, HeadVar__3_3, (MR_Integer) 1))));
    MR_Word SubResult1_6;

    mercury__private_builtin__builtin_compare_string_3_p_0(&SubResult1_6, ArgX1_4, ArgY1_5);
    succeeded = (SubResult1_6 != (MR_Integer) 0);
    if (succeeded)
      *HeadVar__1_1 = SubResult1_6;
    else
      parse_tree__prog_data____Compare____mer_type_0_0(HeadVar__1_1, ArgX2_7, ArgY2_8);
  }
}

MR_bool MR_CALL 
bytecode_backend__bytecode____Unify____byte_var_info_0_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2)
{
  MR_bool succeeded;
  MR_Integer CastX_7 = (MR_Integer) (HeadVar__1_1);
  MR_Integer CastY_8 = (MR_Integer) (HeadVar__2_2);

  succeeded = (CastX_7 == CastY_8);
  if (succeeded)
    succeeded = MR_TRUE;
  else
  {
    MR_String ArgX1_3 = ((MR_String) ((MR_hl_field(0, HeadVar__1_1, (MR_Integer) 0))));
    MR_String ArgY1_4 = ((MR_String) ((MR_hl_field(0, HeadVar__2_2, (MR_Integer) 0))));
    MR_Word ArgX2_5 = ((MR_Word) ((MR_hl_field(0, HeadVar__1_1, (MR_Integer) 1))));
    MR_Word ArgY2_6 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, (MR_Integer) 1))));

    succeeded = (strcmp(ArgX1_3, ArgY1_4) == 0);
    if (succeeded)
      succeeded = parse_tree__prog_data____Unify____mer_type_0_0(ArgX2_5, ArgY2_6);
  }
  return succeeded;
}

void MR_CALL 
bytecode_backend__bytecode____Compare____byte_var_0_0(
  MR_Word * HeadVar__1_1,
  MR_Integer HeadVar__2_2,
  MR_Integer HeadVar__3_3)
{
  MR_bool succeeded;
  MR_Integer Cast_HeadVar1_4 = HeadVar__2_2;
  MR_Integer Cast_HeadVar2_5 = HeadVar__3_3;

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

MR_bool MR_CALL 
bytecode_backend__bytecode____Unify____byte_var_0_0(
  MR_Integer HeadVar__1_1,
  MR_Integer HeadVar__2_2)
{
  MR_bool succeeded;
  MR_Integer Cast_HeadVar1_3 = HeadVar__1_1;
  MR_Integer Cast_HeadVar2_4 = HeadVar__2_2;

  succeeded = (Cast_HeadVar1_3 == Cast_HeadVar2_4);
  return succeeded;
}

void MR_CALL 
bytecode_backend__bytecode____Compare____byte_tree_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3)
{
  MR_Word Cast_HeadVar1_4 = HeadVar__2_2;
  MR_Word Cast_HeadVar2_5 = HeadVar__3_3;

  mercury__builtin__compare_3_p_0((MR_Word) (&bytecode_backend__bytecode_scalar_common_1[4]), HeadVar__1_1, ((MR_Box) (Cast_HeadVar1_4)), ((MR_Box) (Cast_HeadVar2_5)));
}

MR_bool MR_CALL 
bytecode_backend__bytecode____Unify____byte_tree_0_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2)
{
  MR_bool succeeded;
  MR_Word Cast_HeadVar1_3 = HeadVar__1_1;
  MR_Word Cast_HeadVar2_4 = HeadVar__2_2;

  succeeded = mercury__builtin__unify_2_p_0((MR_Word) (&bytecode_backend__bytecode_scalar_common_1[4]), ((MR_Box) (Cast_HeadVar1_3)), ((MR_Box) (Cast_HeadVar2_4)));
  return succeeded;
}

void MR_CALL 
bytecode_backend__bytecode____Compare____byte_test_id_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3)
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

MR_bool MR_CALL 
bytecode_backend__bytecode____Unify____byte_test_id_0_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2)
{
  MR_bool succeeded = (HeadVar__1_1 == HeadVar__2_2);

  return succeeded;
}

void MR_CALL 
bytecode_backend__bytecode____Compare____byte_temp_0_0(
  MR_Word * HeadVar__1_1,
  MR_Integer HeadVar__2_2,
  MR_Integer HeadVar__3_3)
{
  MR_bool succeeded;
  MR_Integer Cast_HeadVar1_4 = HeadVar__2_2;
  MR_Integer Cast_HeadVar2_5 = HeadVar__3_3;

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

MR_bool MR_CALL 
bytecode_backend__bytecode____Unify____byte_temp_0_0(
  MR_Integer HeadVar__1_1,
  MR_Integer HeadVar__2_2)
{
  MR_bool succeeded;
  MR_Integer Cast_HeadVar1_3 = HeadVar__1_1;
  MR_Integer Cast_HeadVar2_4 = HeadVar__2_2;

  succeeded = (Cast_HeadVar1_3 == Cast_HeadVar2_4);
  return succeeded;
}

void MR_CALL 
bytecode_backend__bytecode____Compare____byte_reg_type_0_0(
  MR_Word * HeadVar__1_1)
{
  bytecode_backend__bytecode__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_95_95_67_111_109_112_97_114_101_95_95_95_98_121_116_101_99_111_100_101_95_98_97_99_107_101_110_100_95_95_98_121_116_101_99_111_100_101_95_95_98_121_116_101_95_114_101_103_95_116_121_112_101_95_48_95_95_91_50_44_32_51_93_95_48_3_p_0(HeadVar__1_1);
}

void MR_CALL 
bytecode_backend__bytecode__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_95_95_67_111_109_112_97_114_101_95_95_95_98_121_116_101_99_111_100_101_95_98_97_99_107_101_110_100_95_95_98_121_116_101_99_111_100_101_95_95_98_121_116_101_95_114_101_103_95_116_121_112_101_95_48_95_95_91_50_44_32_51_93_95_48_3_p_0(
  MR_Word * HeadVar__1_1)
{
  *HeadVar__1_1 = (MR_Integer) 0;
}

MR_bool MR_CALL 
bytecode_backend__bytecode____Unify____byte_reg_type_0_0(void)
{
  return MR_TRUE;
}

void MR_CALL 
bytecode_backend__bytecode____Compare____byte_proc_id_0_0(
  MR_Word * HeadVar__1_1,
  MR_Integer HeadVar__2_2,
  MR_Integer HeadVar__3_3)
{
  MR_bool succeeded;
  MR_Integer Cast_HeadVar1_4 = HeadVar__2_2;
  MR_Integer Cast_HeadVar2_5 = HeadVar__3_3;

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

MR_bool MR_CALL 
bytecode_backend__bytecode____Unify____byte_proc_id_0_0(
  MR_Integer HeadVar__1_1,
  MR_Integer HeadVar__2_2)
{
  MR_bool succeeded;
  MR_Integer Cast_HeadVar1_3 = HeadVar__1_1;
  MR_Integer Cast_HeadVar2_4 = HeadVar__2_2;

  succeeded = (Cast_HeadVar1_3 == Cast_HeadVar2_4);
  return succeeded;
}

void MR_CALL 
bytecode_backend__bytecode____Compare____byte_pred_id_0_0(
  MR_Word * HeadVar__1_1,
  MR_String HeadVar__2_2,
  MR_String HeadVar__3_3)
{
  MR_String Cast_HeadVar1_4 = HeadVar__2_2;
  MR_String Cast_HeadVar2_5 = HeadVar__3_3;

  mercury__private_builtin__builtin_compare_string_3_p_0(HeadVar__1_1, Cast_HeadVar1_4, Cast_HeadVar2_5);
}

MR_bool MR_CALL 
bytecode_backend__bytecode____Unify____byte_pred_id_0_0(
  MR_String HeadVar__1_1,
  MR_String HeadVar__2_2)
{
  MR_bool succeeded;
  MR_String Cast_HeadVar1_3 = HeadVar__1_1;
  MR_String Cast_HeadVar2_4 = HeadVar__2_2;

  succeeded = (strcmp(Cast_HeadVar1_3, Cast_HeadVar2_4) == 0);
  return succeeded;
}

void MR_CALL 
bytecode_backend__bytecode____Compare____byte_module_id_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3)
{
  MR_Word Cast_HeadVar1_4 = HeadVar__2_2;
  MR_Word Cast_HeadVar2_5 = HeadVar__3_3;

  mdbcomp__sym_name____Compare____sym_name_0_0(HeadVar__1_1, Cast_HeadVar1_4, Cast_HeadVar2_5);
}

MR_bool MR_CALL 
bytecode_backend__bytecode____Unify____byte_module_id_0_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2)
{
  MR_bool succeeded;
  MR_Word Cast_HeadVar1_3 = HeadVar__1_1;
  MR_Word Cast_HeadVar2_4 = HeadVar__2_2;

  succeeded = mdbcomp__sym_name____Unify____sym_name_0_0(Cast_HeadVar1_3, Cast_HeadVar2_4);
  return succeeded;
}

void MR_CALL 
bytecode_backend__bytecode____Compare____byte_label_id_0_0(
  MR_Word * HeadVar__1_1,
  MR_Integer HeadVar__2_2,
  MR_Integer HeadVar__3_3)
{
  MR_bool succeeded;
  MR_Integer Cast_HeadVar1_4 = HeadVar__2_2;
  MR_Integer Cast_HeadVar2_5 = HeadVar__3_3;

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

MR_bool MR_CALL 
bytecode_backend__bytecode____Unify____byte_label_id_0_0(
  MR_Integer HeadVar__1_1,
  MR_Integer HeadVar__2_2)
{
  MR_bool succeeded;
  MR_Integer Cast_HeadVar1_3 = HeadVar__1_1;
  MR_Integer Cast_HeadVar2_4 = HeadVar__2_2;

  succeeded = (Cast_HeadVar1_3 == Cast_HeadVar2_4);
  return succeeded;
}

void MR_CALL 
bytecode_backend__bytecode____Compare____byte_is_func_0_0(
  MR_Word * HeadVar__1_1,
  MR_Integer HeadVar__2_2,
  MR_Integer HeadVar__3_3)
{
  MR_bool succeeded;
  MR_Integer Cast_HeadVar1_4 = HeadVar__2_2;
  MR_Integer Cast_HeadVar2_5 = HeadVar__3_3;

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

MR_bool MR_CALL 
bytecode_backend__bytecode____Unify____byte_is_func_0_0(
  MR_Integer HeadVar__1_1,
  MR_Integer HeadVar__2_2)
{
  MR_bool succeeded;
  MR_Integer Cast_HeadVar1_3 = HeadVar__1_1;
  MR_Integer Cast_HeadVar2_4 = HeadVar__2_2;

  succeeded = (Cast_HeadVar1_3 == Cast_HeadVar2_4);
  return succeeded;
}

void MR_CALL 
bytecode_backend__bytecode____Compare____byte_dir_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3)
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

MR_bool MR_CALL 
bytecode_backend__bytecode____Unify____byte_dir_0_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2)
{
  MR_bool succeeded = (HeadVar__1_1 == HeadVar__2_2);

  return succeeded;
}

void MR_CALL 
bytecode_backend__bytecode____Compare____byte_code_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3)
{
  MR_bool succeeded;
  MR_Integer CastX_201 = (MR_Integer) (HeadVar__2_2);
  MR_Integer CastY_202 = (MR_Integer) (HeadVar__3_3);

  succeeded = (CastX_201 == CastY_202);
  if (succeeded)
    *HeadVar__1_1 = (MR_Integer) 0;
  else
  {
    MR_Integer IndexX_4;
    MR_Integer IndexY_5;

    bytecode_backend__bytecode____Index____byte_code_0_0(HeadVar__2_2, &IndexX_4);
    bytecode_backend__bytecode____Index____byte_code_0_0(HeadVar__3_3, &IndexY_5);
    succeeded = (IndexX_4 < IndexY_5);
    if (succeeded)
      *HeadVar__1_1 = (MR_Integer) 1;
    else
    {
      succeeded = (IndexX_4 > IndexY_5);
      if (succeeded)
        *HeadVar__1_1 = (MR_Integer) 2;
      else
      {
        MR_Word CompareResult_6;

        switch (MR_tag((MR_Word) HeadVar__2_2)) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
            switch (MR_unmkbody(HeadVar__2_2)) {
              default: /*NOTREACHED*/ MR_assert(0);
              case (MR_Integer) 0:
                {
                  CompareResult_6 = (MR_Integer) 0;
                  succeeded = MR_TRUE;
                }
                break;
              case (MR_Integer) 1:
                {
                  CompareResult_6 = (MR_Integer) 0;
                  succeeded = MR_TRUE;
                }
                break;
              case (MR_Integer) 2:
                {
                  CompareResult_6 = (MR_Integer) 0;
                  succeeded = MR_TRUE;
                }
                break;
              case (MR_Integer) 3:
                {
                  CompareResult_6 = (MR_Integer) 0;
                  succeeded = MR_TRUE;
                }
                break;
              case (MR_Integer) 4:
                {
                  CompareResult_6 = (MR_Integer) 0;
                  succeeded = MR_TRUE;
                }
                break;
              case (MR_Integer) 5:
                {
                  CompareResult_6 = (MR_Integer) 0;
                  succeeded = MR_TRUE;
                }
                break;
              case (MR_Integer) 6:
                {
                  CompareResult_6 = (MR_Integer) 0;
                  succeeded = MR_TRUE;
                }
                break;
              case (MR_Integer) 7:
                {
                  CompareResult_6 = (MR_Integer) 0;
                  succeeded = MR_TRUE;
                }
                break;
              case (MR_Integer) 8:
                {
                  CompareResult_6 = (MR_Integer) 0;
                  succeeded = MR_TRUE;
                }
                break;
              case (MR_Integer) 9:
                {
                  CompareResult_6 = (MR_Integer) 0;
                  succeeded = MR_TRUE;
                }
                break;
            }
            break;
          case (MR_Integer) 1:
            {
              MR_String ArgX1_7 = ((MR_String) ((MR_hl_field(1, HeadVar__2_2, (MR_Integer) 0))));
              MR_String ArgY1_8;
              MR_Integer ArgX2_10 = ((MR_Integer) ((MR_hl_field(1, HeadVar__2_2, (MR_Integer) 1))));
              MR_Integer ArgY2_11;
              MR_Integer ArgX3_13 = ((MR_Integer) ((MR_hl_field(1, HeadVar__2_2, (MR_Integer) 2))));
              MR_Integer ArgY3_14;
              MR_Integer ArgX4_16 = ((MR_Integer) ((MR_hl_field(1, HeadVar__2_2, (MR_Integer) 3))));
              MR_Integer ArgY4_17;
              MR_Word SubResult1_9;

              succeeded = ((MR_tag((MR_Word) HeadVar__3_3)) == (MR_Integer) 1);
              if (succeeded)
              {
                ArgY1_8 = ((MR_String) ((MR_hl_field(1, HeadVar__3_3, (MR_Integer) 0))));
                ArgY2_11 = ((MR_Integer) ((MR_hl_field(1, HeadVar__3_3, (MR_Integer) 1))));
                ArgY3_14 = ((MR_Integer) ((MR_hl_field(1, HeadVar__3_3, (MR_Integer) 2))));
                ArgY4_17 = ((MR_Integer) ((MR_hl_field(1, HeadVar__3_3, (MR_Integer) 3))));
                mercury__private_builtin__builtin_compare_string_3_p_0(&SubResult1_9, ArgX1_7, ArgY1_8);
                succeeded = (SubResult1_9 != (MR_Integer) 0);
                if (succeeded)
                  CompareResult_6 = SubResult1_9;
                else
                {
                  MR_Word SubResult2_12;

                  succeeded = (ArgX2_10 < ArgY2_11);
                  if (succeeded)
                  {
                    SubResult2_12 = (MR_Integer) 1;
                    succeeded = MR_TRUE;
                  }
                  else
                  {
                    succeeded = (ArgX2_10 > ArgY2_11);
                    if (succeeded)
                    {
                      SubResult2_12 = (MR_Integer) 2;
                      succeeded = MR_TRUE;
                    }
                    else
                    {
                      succeeded = MR_TRUE;
                      succeeded = !(succeeded);
                      if (succeeded)
                      {
                        SubResult2_12 = (MR_Integer) 0;
                        succeeded = MR_TRUE;
                      }
                    }
                  }
                  if (succeeded)
                    CompareResult_6 = SubResult2_12;
                  else
                  {
                    MR_Word SubResult3_15;

                    succeeded = (ArgX3_13 < ArgY3_14);
                    if (succeeded)
                    {
                      SubResult3_15 = (MR_Integer) 1;
                      succeeded = MR_TRUE;
                    }
                    else
                    {
                      succeeded = (ArgX3_13 > ArgY3_14);
                      if (succeeded)
                      {
                        SubResult3_15 = (MR_Integer) 2;
                        succeeded = MR_TRUE;
                      }
                      else
                      {
                        succeeded = MR_TRUE;
                        succeeded = !(succeeded);
                        if (succeeded)
                        {
                          SubResult3_15 = (MR_Integer) 0;
                          succeeded = MR_TRUE;
                        }
                      }
                    }
                    if (succeeded)
                      CompareResult_6 = SubResult3_15;
                    else
                    {
                      succeeded = (ArgX4_16 < ArgY4_17);
                      if (succeeded)
                        CompareResult_6 = (MR_Integer) 1;
                      else
                      {
                        succeeded = (ArgX4_16 > ArgY4_17);
                        if (succeeded)
                          CompareResult_6 = (MR_Integer) 2;
                        else
                          CompareResult_6 = (MR_Integer) 0;
                      }
                    }
                  }
                }
                succeeded = MR_TRUE;
              }
            }
            break;
          case (MR_Integer) 2:
            {
              MR_Integer ArgX1_18 = ((MR_Integer) ((MR_hl_field(2, HeadVar__2_2, (MR_Integer) 0))));
              MR_Integer ArgY1_19;
              MR_Word ArgX2_21 = ((MR_Unsigned) ((MR_hl_field(2, HeadVar__2_2, (MR_Integer) 1))) & (MR_Integer) 7);
              MR_Word ArgY2_22;
              MR_Integer ArgX3_24 = ((MR_Integer) ((MR_hl_field(2, HeadVar__2_2, (MR_Integer) 2))));
              MR_Integer ArgY3_25;
              MR_Integer ArgX4_27 = ((MR_Integer) ((MR_hl_field(2, HeadVar__2_2, (MR_Integer) 3))));
              MR_Integer ArgY4_28;
              MR_Integer ArgX5_30 = ((MR_Integer) ((MR_hl_field(2, HeadVar__2_2, (MR_Integer) 4))));
              MR_Integer ArgY5_31;
              MR_Word ArgX6_33 = ((MR_Word) ((MR_hl_field(2, HeadVar__2_2, (MR_Integer) 5))));
              MR_Word ArgY6_34;
              MR_Word SubResult1_20;

              succeeded = ((MR_tag((MR_Word) HeadVar__3_3)) == (MR_Integer) 2);
              if (succeeded)
              {
                ArgY1_19 = ((MR_Integer) ((MR_hl_field(2, HeadVar__3_3, (MR_Integer) 0))));
                ArgY2_22 = ((MR_Unsigned) ((MR_hl_field(2, HeadVar__3_3, (MR_Integer) 1))) & (MR_Integer) 7);
                ArgY3_25 = ((MR_Integer) ((MR_hl_field(2, HeadVar__3_3, (MR_Integer) 2))));
                ArgY4_28 = ((MR_Integer) ((MR_hl_field(2, HeadVar__3_3, (MR_Integer) 3))));
                ArgY5_31 = ((MR_Integer) ((MR_hl_field(2, HeadVar__3_3, (MR_Integer) 4))));
                ArgY6_34 = ((MR_Word) ((MR_hl_field(2, HeadVar__3_3, (MR_Integer) 5))));
                succeeded = (ArgX1_18 < ArgY1_19);
                if (succeeded)
                {
                  SubResult1_20 = (MR_Integer) 1;
                  succeeded = MR_TRUE;
                }
                else
                {
                  succeeded = (ArgX1_18 > ArgY1_19);
                  if (succeeded)
                  {
                    SubResult1_20 = (MR_Integer) 2;
                    succeeded = MR_TRUE;
                  }
                  else
                  {
                    succeeded = MR_TRUE;
                    succeeded = !(succeeded);
                    if (succeeded)
                    {
                      SubResult1_20 = (MR_Integer) 0;
                      succeeded = MR_TRUE;
                    }
                  }
                }
                if (succeeded)
                  CompareResult_6 = SubResult1_20;
                else
                {
                  MR_Word SubResult2_23;
                  MR_Integer Var_277 = (MR_Integer) (ArgX2_21);
                  MR_Integer Var_278 = (MR_Integer) (ArgY2_22);

                  succeeded = (Var_277 < Var_278);
                  if (succeeded)
                  {
                    SubResult2_23 = (MR_Integer) 1;
                    succeeded = MR_TRUE;
                  }
                  else
                  {
                    succeeded = (Var_277 > Var_278);
                    if (succeeded)
                    {
                      SubResult2_23 = (MR_Integer) 2;
                      succeeded = MR_TRUE;
                    }
                    else
                    {
                      succeeded = MR_TRUE;
                      succeeded = !(succeeded);
                      if (succeeded)
                      {
                        SubResult2_23 = (MR_Integer) 0;
                        succeeded = MR_TRUE;
                      }
                    }
                  }
                  if (succeeded)
                    CompareResult_6 = SubResult2_23;
                  else
                  {
                    MR_Word SubResult3_26;

                    succeeded = (ArgX3_24 < ArgY3_25);
                    if (succeeded)
                    {
                      SubResult3_26 = (MR_Integer) 1;
                      succeeded = MR_TRUE;
                    }
                    else
                    {
                      succeeded = (ArgX3_24 > ArgY3_25);
                      if (succeeded)
                      {
                        SubResult3_26 = (MR_Integer) 2;
                        succeeded = MR_TRUE;
                      }
                      else
                      {
                        succeeded = MR_TRUE;
                        succeeded = !(succeeded);
                        if (succeeded)
                        {
                          SubResult3_26 = (MR_Integer) 0;
                          succeeded = MR_TRUE;
                        }
                      }
                    }
                    if (succeeded)
                      CompareResult_6 = SubResult3_26;
                    else
                    {
                      MR_Word SubResult4_29;

                      succeeded = (ArgX4_27 < ArgY4_28);
                      if (succeeded)
                      {
                        SubResult4_29 = (MR_Integer) 1;
                        succeeded = MR_TRUE;
                      }
                      else
                      {
                        succeeded = (ArgX4_27 > ArgY4_28);
                        if (succeeded)
                        {
                          SubResult4_29 = (MR_Integer) 2;
                          succeeded = MR_TRUE;
                        }
                        else
                        {
                          succeeded = MR_TRUE;
                          succeeded = !(succeeded);
                          if (succeeded)
                          {
                            SubResult4_29 = (MR_Integer) 0;
                            succeeded = MR_TRUE;
                          }
                        }
                      }
                      if (succeeded)
                        CompareResult_6 = SubResult4_29;
                      else
                      {
                        MR_Word SubResult5_32;

                        succeeded = (ArgX5_30 < ArgY5_31);
                        if (succeeded)
                        {
                          SubResult5_32 = (MR_Integer) 1;
                          succeeded = MR_TRUE;
                        }
                        else
                        {
                          succeeded = (ArgX5_30 > ArgY5_31);
                          if (succeeded)
                          {
                            SubResult5_32 = (MR_Integer) 2;
                            succeeded = MR_TRUE;
                          }
                          else
                          {
                            succeeded = MR_TRUE;
                            succeeded = !(succeeded);
                            if (succeeded)
                            {
                              SubResult5_32 = (MR_Integer) 0;
                              succeeded = MR_TRUE;
                            }
                          }
                        }
                        if (succeeded)
                          CompareResult_6 = SubResult5_32;
                        else
                          mercury__builtin__compare_3_p_0((MR_Word) (&bytecode_backend__bytecode_scalar_common_1[1]), &CompareResult_6, ((MR_Box) (ArgX6_33)), ((MR_Box) (ArgY6_34)));
                      }
                    }
                  }
                }
                succeeded = MR_TRUE;
              }
            }
            break;
          case (MR_Integer) 3:
            switch (((MR_Integer) ((MR_hl_field(3, HeadVar__2_2, (MR_Integer) 0))))) {
              default: /*NOTREACHED*/ MR_assert(0);
              case (MR_Integer) 0:
                {
                  MR_Integer ArgX1_35 = ((MR_Integer) ((MR_hl_field(3, HeadVar__2_2, (MR_Integer) 1))));
                  MR_Integer ArgY1_36;

                  succeeded = ((((MR_tag((MR_Word) HeadVar__3_3)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(3, HeadVar__3_3, (MR_Integer) 0)))) == (MR_Integer) 0)));
                  if (succeeded)
                  {
                    ArgY1_36 = ((MR_Integer) ((MR_hl_field(3, HeadVar__3_3, (MR_Integer) 1))));
                    succeeded = (ArgX1_35 < ArgY1_36);
                    if (succeeded)
                      CompareResult_6 = (MR_Integer) 1;
                    else
                    {
                      succeeded = (ArgX1_35 > ArgY1_36);
                      if (succeeded)
                        CompareResult_6 = (MR_Integer) 2;
                      else
                        CompareResult_6 = (MR_Integer) 0;
                    }
                    succeeded = MR_TRUE;
                  }
                }
                break;
              case (MR_Integer) 1:
                {
                  MR_Integer ArgX1_37 = ((MR_Integer) ((MR_hl_field(3, HeadVar__2_2, (MR_Integer) 1))));
                  MR_Integer ArgY1_38;

                  succeeded = ((((MR_tag((MR_Word) HeadVar__3_3)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(3, HeadVar__3_3, (MR_Integer) 0)))) == (MR_Integer) 1)));
                  if (succeeded)
                  {
                    ArgY1_38 = ((MR_Integer) ((MR_hl_field(3, HeadVar__3_3, (MR_Integer) 1))));
                    succeeded = (ArgX1_37 < ArgY1_38);
                    if (succeeded)
                      CompareResult_6 = (MR_Integer) 1;
                    else
                    {
                      succeeded = (ArgX1_37 > ArgY1_38);
                      if (succeeded)
                        CompareResult_6 = (MR_Integer) 2;
                      else
                        CompareResult_6 = (MR_Integer) 0;
                    }
                    succeeded = MR_TRUE;
                  }
                }
                break;
              case (MR_Integer) 2:
                {
                  MR_Integer ArgX1_39 = ((MR_Integer) ((MR_hl_field(3, HeadVar__2_2, (MR_Integer) 1))));
                  MR_Integer ArgY1_40;

                  succeeded = ((((MR_tag((MR_Word) HeadVar__3_3)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(3, HeadVar__3_3, (MR_Integer) 0)))) == (MR_Integer) 2)));
                  if (succeeded)
                  {
                    ArgY1_40 = ((MR_Integer) ((MR_hl_field(3, HeadVar__3_3, (MR_Integer) 1))));
                    succeeded = (ArgX1_39 < ArgY1_40);
                    if (succeeded)
                      CompareResult_6 = (MR_Integer) 1;
                    else
                    {
                      succeeded = (ArgX1_39 > ArgY1_40);
                      if (succeeded)
                        CompareResult_6 = (MR_Integer) 2;
                      else
                        CompareResult_6 = (MR_Integer) 0;
                    }
                    succeeded = MR_TRUE;
                  }
                }
                break;
              case (MR_Integer) 3:
                {
                  MR_Integer ArgX1_41 = ((MR_Integer) ((MR_hl_field(3, HeadVar__2_2, (MR_Integer) 1))));
                  MR_Integer ArgY1_42;

                  succeeded = ((((MR_tag((MR_Word) HeadVar__3_3)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(3, HeadVar__3_3, (MR_Integer) 0)))) == (MR_Integer) 3)));
                  if (succeeded)
                  {
                    ArgY1_42 = ((MR_Integer) ((MR_hl_field(3, HeadVar__3_3, (MR_Integer) 1))));
                    succeeded = (ArgX1_41 < ArgY1_42);
                    if (succeeded)
                      CompareResult_6 = (MR_Integer) 1;
                    else
                    {
                      succeeded = (ArgX1_41 > ArgY1_42);
                      if (succeeded)
                        CompareResult_6 = (MR_Integer) 2;
                      else
                        CompareResult_6 = (MR_Integer) 0;
                    }
                    succeeded = MR_TRUE;
                  }
                }
                break;
              case (MR_Integer) 4:
                {
                  MR_Integer ArgX1_43 = ((MR_Integer) ((MR_hl_field(3, HeadVar__2_2, (MR_Integer) 1))));
                  MR_Integer ArgY1_44;
                  MR_Integer ArgX2_46 = ((MR_Integer) ((MR_hl_field(3, HeadVar__2_2, (MR_Integer) 2))));
                  MR_Integer ArgY2_47;
                  MR_Word SubResult1_45;

                  succeeded = ((((MR_tag((MR_Word) HeadVar__3_3)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(3, HeadVar__3_3, (MR_Integer) 0)))) == (MR_Integer) 4)));
                  if (succeeded)
                  {
                    ArgY1_44 = ((MR_Integer) ((MR_hl_field(3, HeadVar__3_3, (MR_Integer) 1))));
                    ArgY2_47 = ((MR_Integer) ((MR_hl_field(3, HeadVar__3_3, (MR_Integer) 2))));
                    succeeded = (ArgX1_43 < ArgY1_44);
                    if (succeeded)
                    {
                      SubResult1_45 = (MR_Integer) 1;
                      succeeded = MR_TRUE;
                    }
                    else
                    {
                      succeeded = (ArgX1_43 > ArgY1_44);
                      if (succeeded)
                      {
                        SubResult1_45 = (MR_Integer) 2;
                        succeeded = MR_TRUE;
                      }
                      else
                      {
                        succeeded = MR_TRUE;
                        succeeded = !(succeeded);
                        if (succeeded)
                        {
                          SubResult1_45 = (MR_Integer) 0;
                          succeeded = MR_TRUE;
                        }
                      }
                    }
                    if (succeeded)
                      CompareResult_6 = SubResult1_45;
                    else
                    {
                      succeeded = (ArgX2_46 < ArgY2_47);
                      if (succeeded)
                        CompareResult_6 = (MR_Integer) 1;
                      else
                      {
                        succeeded = (ArgX2_46 > ArgY2_47);
                        if (succeeded)
                          CompareResult_6 = (MR_Integer) 2;
                        else
                          CompareResult_6 = (MR_Integer) 0;
                      }
                    }
                    succeeded = MR_TRUE;
                  }
                }
                break;
              case (MR_Integer) 5:
                {
                  MR_Word ArgX1_48 = ((MR_Word) ((MR_hl_field(3, HeadVar__2_2, (MR_Integer) 1))));
                  MR_Word ArgY1_49;
                  MR_Word ArgX2_51 = ((MR_Word) ((MR_hl_field(3, HeadVar__2_2, (MR_Integer) 2))));
                  MR_Word ArgY2_52;
                  MR_Integer ArgX3_54 = ((MR_Integer) ((MR_hl_field(3, HeadVar__2_2, (MR_Integer) 3))));
                  MR_Integer ArgY3_55;
                  MR_Word SubResult1_50;

                  succeeded = ((((MR_tag((MR_Word) HeadVar__3_3)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(3, HeadVar__3_3, (MR_Integer) 0)))) == (MR_Integer) 5)));
                  if (succeeded)
                  {
                    ArgY1_49 = ((MR_Word) ((MR_hl_field(3, HeadVar__3_3, (MR_Integer) 1))));
                    ArgY2_52 = ((MR_Word) ((MR_hl_field(3, HeadVar__3_3, (MR_Integer) 2))));
                    ArgY3_55 = ((MR_Integer) ((MR_hl_field(3, HeadVar__3_3, (MR_Integer) 3))));
                    bytecode_backend__bytecode____Compare____byte_cons_id_0_0(&SubResult1_50, ArgX1_48, ArgY1_49);
                    succeeded = (SubResult1_50 != (MR_Integer) 0);
                    if (succeeded)
                      CompareResult_6 = SubResult1_50;
                    else
                    {
                      MR_Word SubResult2_53;

                      mercury__builtin__compare_3_p_0((MR_Word) (&bytecode_backend__bytecode_scalar_common_1[0]), &SubResult2_53, ((MR_Box) (ArgX2_51)), ((MR_Box) (ArgY2_52)));
                      succeeded = (SubResult2_53 != (MR_Integer) 0);
                      if (succeeded)
                        CompareResult_6 = SubResult2_53;
                      else
                      {
                        succeeded = (ArgX3_54 < ArgY3_55);
                        if (succeeded)
                          CompareResult_6 = (MR_Integer) 1;
                        else
                        {
                          succeeded = (ArgX3_54 > ArgY3_55);
                          if (succeeded)
                            CompareResult_6 = (MR_Integer) 2;
                          else
                            CompareResult_6 = (MR_Integer) 0;
                        }
                      }
                    }
                    succeeded = MR_TRUE;
                  }
                }
                break;
              case (MR_Integer) 6:
                {
                  MR_Integer ArgX1_56 = ((MR_Integer) ((MR_hl_field(3, HeadVar__2_2, (MR_Integer) 1))));
                  MR_Integer ArgY1_57;

                  succeeded = ((((MR_tag((MR_Word) HeadVar__3_3)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(3, HeadVar__3_3, (MR_Integer) 0)))) == (MR_Integer) 6)));
                  if (succeeded)
                  {
                    ArgY1_57 = ((MR_Integer) ((MR_hl_field(3, HeadVar__3_3, (MR_Integer) 1))));
                    succeeded = (ArgX1_56 < ArgY1_57);
                    if (succeeded)
                      CompareResult_6 = (MR_Integer) 1;
                    else
                    {
                      succeeded = (ArgX1_56 > ArgY1_57);
                      if (succeeded)
                        CompareResult_6 = (MR_Integer) 2;
                      else
                        CompareResult_6 = (MR_Integer) 0;
                    }
                    succeeded = MR_TRUE;
                  }
                }
                break;
              case (MR_Integer) 7:
                {
                  MR_Integer ArgX1_58 = ((MR_Integer) ((MR_hl_field(3, HeadVar__2_2, (MR_Integer) 1))));
                  MR_Integer ArgY1_59;
                  MR_Integer ArgX2_61 = ((MR_Integer) ((MR_hl_field(3, HeadVar__2_2, (MR_Integer) 2))));
                  MR_Integer ArgY2_62;
                  MR_Integer ArgX3_64 = ((MR_Integer) ((MR_hl_field(3, HeadVar__2_2, (MR_Integer) 3))));
                  MR_Integer ArgY3_65;
                  MR_Word SubResult1_60;

                  succeeded = ((((MR_tag((MR_Word) HeadVar__3_3)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(3, HeadVar__3_3, (MR_Integer) 0)))) == (MR_Integer) 7)));
                  if (succeeded)
                  {
                    ArgY1_59 = ((MR_Integer) ((MR_hl_field(3, HeadVar__3_3, (MR_Integer) 1))));
                    ArgY2_62 = ((MR_Integer) ((MR_hl_field(3, HeadVar__3_3, (MR_Integer) 2))));
                    ArgY3_65 = ((MR_Integer) ((MR_hl_field(3, HeadVar__3_3, (MR_Integer) 3))));
                    succeeded = (ArgX1_58 < ArgY1_59);
                    if (succeeded)
                    {
                      SubResult1_60 = (MR_Integer) 1;
                      succeeded = MR_TRUE;
                    }
                    else
                    {
                      succeeded = (ArgX1_58 > ArgY1_59);
                      if (succeeded)
                      {
                        SubResult1_60 = (MR_Integer) 2;
                        succeeded = MR_TRUE;
                      }
                      else
                      {
                        succeeded = MR_TRUE;
                        succeeded = !(succeeded);
                        if (succeeded)
                        {
                          SubResult1_60 = (MR_Integer) 0;
                          succeeded = MR_TRUE;
                        }
                      }
                    }
                    if (succeeded)
                      CompareResult_6 = SubResult1_60;
                    else
                    {
                      MR_Word SubResult2_63;

                      succeeded = (ArgX2_61 < ArgY2_62);
                      if (succeeded)
                      {
                        SubResult2_63 = (MR_Integer) 1;
                        succeeded = MR_TRUE;
                      }
                      else
                      {
                        succeeded = (ArgX2_61 > ArgY2_62);
                        if (succeeded)
                        {
                          SubResult2_63 = (MR_Integer) 2;
                          succeeded = MR_TRUE;
                        }
                        else
                        {
                          succeeded = MR_TRUE;
                          succeeded = !(succeeded);
                          if (succeeded)
                          {
                            SubResult2_63 = (MR_Integer) 0;
                            succeeded = MR_TRUE;
                          }
                        }
                      }
                      if (succeeded)
                        CompareResult_6 = SubResult2_63;
                      else
                      {
                        succeeded = (ArgX3_64 < ArgY3_65);
                        if (succeeded)
                          CompareResult_6 = (MR_Integer) 1;
                        else
                        {
                          succeeded = (ArgX3_64 > ArgY3_65);
                          if (succeeded)
                            CompareResult_6 = (MR_Integer) 2;
                          else
                            CompareResult_6 = (MR_Integer) 0;
                        }
                      }
                    }
                    succeeded = MR_TRUE;
                  }
                }
                break;
              case (MR_Integer) 8:
                {
                  MR_Integer ArgX1_66 = ((MR_Integer) ((MR_hl_field(3, HeadVar__2_2, (MR_Integer) 1))));
                  MR_Integer ArgY1_67;

                  succeeded = ((((MR_tag((MR_Word) HeadVar__3_3)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(3, HeadVar__3_3, (MR_Integer) 0)))) == (MR_Integer) 8)));
                  if (succeeded)
                  {
                    ArgY1_67 = ((MR_Integer) ((MR_hl_field(3, HeadVar__3_3, (MR_Integer) 1))));
                    succeeded = (ArgX1_66 < ArgY1_67);
                    if (succeeded)
                      CompareResult_6 = (MR_Integer) 1;
                    else
                    {
                      succeeded = (ArgX1_66 > ArgY1_67);
                      if (succeeded)
                        CompareResult_6 = (MR_Integer) 2;
                      else
                        CompareResult_6 = (MR_Integer) 0;
                    }
                    succeeded = MR_TRUE;
                  }
                }
                break;
              case (MR_Integer) 9:
                {
                  MR_Integer ArgX1_68 = ((MR_Integer) ((MR_hl_field(3, HeadVar__2_2, (MR_Integer) 1))));
                  MR_Integer ArgY1_69;

                  succeeded = ((((MR_tag((MR_Word) HeadVar__3_3)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(3, HeadVar__3_3, (MR_Integer) 0)))) == (MR_Integer) 9)));
                  if (succeeded)
                  {
                    ArgY1_69 = ((MR_Integer) ((MR_hl_field(3, HeadVar__3_3, (MR_Integer) 1))));
                    succeeded = (ArgX1_68 < ArgY1_69);
                    if (succeeded)
                      CompareResult_6 = (MR_Integer) 1;
                    else
                    {
                      succeeded = (ArgX1_68 > ArgY1_69);
                      if (succeeded)
                        CompareResult_6 = (MR_Integer) 2;
                      else
                        CompareResult_6 = (MR_Integer) 0;
                    }
                    succeeded = MR_TRUE;
                  }
                }
                break;
              case (MR_Integer) 10:
                {
                  MR_Integer ArgX1_70 = ((MR_Integer) ((MR_hl_field(3, HeadVar__2_2, (MR_Integer) 1))));
                  MR_Integer ArgY1_71;

                  succeeded = ((((MR_tag((MR_Word) HeadVar__3_3)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(3, HeadVar__3_3, (MR_Integer) 0)))) == (MR_Integer) 10)));
                  if (succeeded)
                  {
                    ArgY1_71 = ((MR_Integer) ((MR_hl_field(3, HeadVar__3_3, (MR_Integer) 1))));
                    succeeded = (ArgX1_70 < ArgY1_71);
                    if (succeeded)
                      CompareResult_6 = (MR_Integer) 1;
                    else
                    {
                      succeeded = (ArgX1_70 > ArgY1_71);
                      if (succeeded)
                        CompareResult_6 = (MR_Integer) 2;
                      else
                        CompareResult_6 = (MR_Integer) 0;
                    }
                    succeeded = MR_TRUE;
                  }
                }
                break;
              case (MR_Integer) 11:
                {
                  MR_Integer ArgX1_72 = ((MR_Integer) ((MR_hl_field(3, HeadVar__2_2, (MR_Integer) 1))));
                  MR_Integer ArgY1_73;
                  MR_Integer ArgX2_75 = ((MR_Integer) ((MR_hl_field(3, HeadVar__2_2, (MR_Integer) 2))));
                  MR_Integer ArgY2_76;
                  MR_Word SubResult1_74;

                  succeeded = ((((MR_tag((MR_Word) HeadVar__3_3)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(3, HeadVar__3_3, (MR_Integer) 0)))) == (MR_Integer) 11)));
                  if (succeeded)
                  {
                    ArgY1_73 = ((MR_Integer) ((MR_hl_field(3, HeadVar__3_3, (MR_Integer) 1))));
                    ArgY2_76 = ((MR_Integer) ((MR_hl_field(3, HeadVar__3_3, (MR_Integer) 2))));
                    succeeded = (ArgX1_72 < ArgY1_73);
                    if (succeeded)
                    {
                      SubResult1_74 = (MR_Integer) 1;
                      succeeded = MR_TRUE;
                    }
                    else
                    {
                      succeeded = (ArgX1_72 > ArgY1_73);
                      if (succeeded)
                      {
                        SubResult1_74 = (MR_Integer) 2;
                        succeeded = MR_TRUE;
                      }
                      else
                      {
                        succeeded = MR_TRUE;
                        succeeded = !(succeeded);
                        if (succeeded)
                        {
                          SubResult1_74 = (MR_Integer) 0;
                          succeeded = MR_TRUE;
                        }
                      }
                    }
                    if (succeeded)
                      CompareResult_6 = SubResult1_74;
                    else
                    {
                      succeeded = (ArgX2_75 < ArgY2_76);
                      if (succeeded)
                        CompareResult_6 = (MR_Integer) 1;
                      else
                      {
                        succeeded = (ArgX2_75 > ArgY2_76);
                        if (succeeded)
                          CompareResult_6 = (MR_Integer) 2;
                        else
                          CompareResult_6 = (MR_Integer) 0;
                      }
                    }
                    succeeded = MR_TRUE;
                  }
                }
                break;
              case (MR_Integer) 12:
                {
                  MR_Integer ArgX1_77 = ((MR_Integer) ((MR_hl_field(3, HeadVar__2_2, (MR_Integer) 1))));
                  MR_Integer ArgY1_78;

                  succeeded = ((((MR_tag((MR_Word) HeadVar__3_3)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(3, HeadVar__3_3, (MR_Integer) 0)))) == (MR_Integer) 12)));
                  if (succeeded)
                  {
                    ArgY1_78 = ((MR_Integer) ((MR_hl_field(3, HeadVar__3_3, (MR_Integer) 1))));
                    succeeded = (ArgX1_77 < ArgY1_78);
                    if (succeeded)
                      CompareResult_6 = (MR_Integer) 1;
                    else
                    {
                      succeeded = (ArgX1_77 > ArgY1_78);
                      if (succeeded)
                        CompareResult_6 = (MR_Integer) 2;
                      else
                        CompareResult_6 = (MR_Integer) 0;
                    }
                    succeeded = MR_TRUE;
                  }
                }
                break;
              case (MR_Integer) 13:
                {
                  MR_Integer ArgX1_79 = ((MR_Integer) ((MR_hl_field(3, HeadVar__2_2, (MR_Integer) 1))));
                  MR_Integer ArgY1_80;

                  succeeded = ((((MR_tag((MR_Word) HeadVar__3_3)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(3, HeadVar__3_3, (MR_Integer) 0)))) == (MR_Integer) 13)));
                  if (succeeded)
                  {
                    ArgY1_80 = ((MR_Integer) ((MR_hl_field(3, HeadVar__3_3, (MR_Integer) 1))));
                    succeeded = (ArgX1_79 < ArgY1_80);
                    if (succeeded)
                      CompareResult_6 = (MR_Integer) 1;
                    else
                    {
                      succeeded = (ArgX1_79 > ArgY1_80);
                      if (succeeded)
                        CompareResult_6 = (MR_Integer) 2;
                      else
                        CompareResult_6 = (MR_Integer) 0;
                    }
                    succeeded = MR_TRUE;
                  }
                }
                break;
              case (MR_Integer) 14:
                {
                  MR_Integer ArgX1_81 = ((MR_Integer) ((MR_hl_field(3, HeadVar__2_2, (MR_Integer) 1))));
                  MR_Integer ArgY1_82;

                  succeeded = ((((MR_tag((MR_Word) HeadVar__3_3)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(3, HeadVar__3_3, (MR_Integer) 0)))) == (MR_Integer) 14)));
                  if (succeeded)
                  {
                    ArgY1_82 = ((MR_Integer) ((MR_hl_field(3, HeadVar__3_3, (MR_Integer) 1))));
                    succeeded = (ArgX1_81 < ArgY1_82);
                    if (succeeded)
                      CompareResult_6 = (MR_Integer) 1;
                    else
                    {
                      succeeded = (ArgX1_81 > ArgY1_82);
                      if (succeeded)
                        CompareResult_6 = (MR_Integer) 2;
                      else
                        CompareResult_6 = (MR_Integer) 0;
                    }
                    succeeded = MR_TRUE;
                  }
                }
                break;
              case (MR_Integer) 15:
                {
                  MR_Integer ArgX1_83 = ((MR_Integer) ((MR_hl_field(3, HeadVar__2_2, (MR_Integer) 1))));
                  MR_Integer ArgY1_84;
                  MR_Integer ArgX2_86 = ((MR_Integer) ((MR_hl_field(3, HeadVar__2_2, (MR_Integer) 2))));
                  MR_Integer ArgY2_87;
                  MR_Word SubResult1_85;

                  succeeded = ((((MR_tag((MR_Word) HeadVar__3_3)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(3, HeadVar__3_3, (MR_Integer) 0)))) == (MR_Integer) 15)));
                  if (succeeded)
                  {
                    ArgY1_84 = ((MR_Integer) ((MR_hl_field(3, HeadVar__3_3, (MR_Integer) 1))));
                    ArgY2_87 = ((MR_Integer) ((MR_hl_field(3, HeadVar__3_3, (MR_Integer) 2))));
                    succeeded = (ArgX1_83 < ArgY1_84);
                    if (succeeded)
                    {
                      SubResult1_85 = (MR_Integer) 1;
                      succeeded = MR_TRUE;
                    }
                    else
                    {
                      succeeded = (ArgX1_83 > ArgY1_84);
                      if (succeeded)
                      {
                        SubResult1_85 = (MR_Integer) 2;
                        succeeded = MR_TRUE;
                      }
                      else
                      {
                        succeeded = MR_TRUE;
                        succeeded = !(succeeded);
                        if (succeeded)
                        {
                          SubResult1_85 = (MR_Integer) 0;
                          succeeded = MR_TRUE;
                        }
                      }
                    }
                    if (succeeded)
                      CompareResult_6 = SubResult1_85;
                    else
                    {
                      succeeded = (ArgX2_86 < ArgY2_87);
                      if (succeeded)
                        CompareResult_6 = (MR_Integer) 1;
                      else
                      {
                        succeeded = (ArgX2_86 > ArgY2_87);
                        if (succeeded)
                          CompareResult_6 = (MR_Integer) 2;
                        else
                          CompareResult_6 = (MR_Integer) 0;
                      }
                    }
                    succeeded = MR_TRUE;
                  }
                }
                break;
              case (MR_Integer) 16:
                {
                  MR_Integer ArgX1_88 = ((MR_Integer) ((MR_hl_field(3, HeadVar__2_2, (MR_Integer) 1))));
                  MR_Integer ArgY1_89;
                  MR_Integer ArgX2_91 = ((MR_Integer) ((MR_hl_field(3, HeadVar__2_2, (MR_Integer) 2))));
                  MR_Integer ArgY2_92;
                  MR_Word ArgX3_94 = ((MR_Unsigned) ((MR_hl_field(3, HeadVar__2_2, (MR_Integer) 3))) & (MR_Integer) 7);
                  MR_Word ArgY3_95;
                  MR_Word SubResult1_90;

                  succeeded = ((((MR_tag((MR_Word) HeadVar__3_3)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(3, HeadVar__3_3, (MR_Integer) 0)))) == (MR_Integer) 16)));
                  if (succeeded)
                  {
                    ArgY1_89 = ((MR_Integer) ((MR_hl_field(3, HeadVar__3_3, (MR_Integer) 1))));
                    ArgY2_92 = ((MR_Integer) ((MR_hl_field(3, HeadVar__3_3, (MR_Integer) 2))));
                    ArgY3_95 = ((MR_Unsigned) ((MR_hl_field(3, HeadVar__3_3, (MR_Integer) 3))) & (MR_Integer) 7);
                    succeeded = (ArgX1_88 < ArgY1_89);
                    if (succeeded)
                    {
                      SubResult1_90 = (MR_Integer) 1;
                      succeeded = MR_TRUE;
                    }
                    else
                    {
                      succeeded = (ArgX1_88 > ArgY1_89);
                      if (succeeded)
                      {
                        SubResult1_90 = (MR_Integer) 2;
                        succeeded = MR_TRUE;
                      }
                      else
                      {
                        succeeded = MR_TRUE;
                        succeeded = !(succeeded);
                        if (succeeded)
                        {
                          SubResult1_90 = (MR_Integer) 0;
                          succeeded = MR_TRUE;
                        }
                      }
                    }
                    if (succeeded)
                      CompareResult_6 = SubResult1_90;
                    else
                    {
                      MR_Word SubResult2_93;

                      succeeded = (ArgX2_91 < ArgY2_92);
                      if (succeeded)
                      {
                        SubResult2_93 = (MR_Integer) 1;
                        succeeded = MR_TRUE;
                      }
                      else
                      {
                        succeeded = (ArgX2_91 > ArgY2_92);
                        if (succeeded)
                        {
                          SubResult2_93 = (MR_Integer) 2;
                          succeeded = MR_TRUE;
                        }
                        else
                        {
                          succeeded = MR_TRUE;
                          succeeded = !(succeeded);
                          if (succeeded)
                          {
                            SubResult2_93 = (MR_Integer) 0;
                            succeeded = MR_TRUE;
                          }
                        }
                      }
                      if (succeeded)
                        CompareResult_6 = SubResult2_93;
                      else
                      {
                        MR_Integer Var_281 = (MR_Integer) (ArgX3_94);
                        MR_Integer Var_282 = (MR_Integer) (ArgY3_95);

                        succeeded = (Var_281 < Var_282);
                        if (succeeded)
                          CompareResult_6 = (MR_Integer) 1;
                        else
                        {
                          succeeded = (Var_281 > Var_282);
                          if (succeeded)
                            CompareResult_6 = (MR_Integer) 2;
                          else
                            CompareResult_6 = (MR_Integer) 0;
                        }
                      }
                    }
                    succeeded = MR_TRUE;
                  }
                }
                break;
              case (MR_Integer) 17:
                {
                  MR_Integer ArgX1_96 = ((MR_Integer) ((MR_hl_field(3, HeadVar__2_2, (MR_Integer) 1))));
                  MR_Integer ArgY1_97;
                  MR_Word ArgX2_99 = ((MR_Word) ((MR_hl_field(3, HeadVar__2_2, (MR_Integer) 2))));
                  MR_Word ArgY2_100;
                  MR_Word ArgX3_102 = ((MR_Word) ((MR_hl_field(3, HeadVar__2_2, (MR_Integer) 3))));
                  MR_Word ArgY3_103;
                  MR_Word SubResult1_98;

                  succeeded = ((((MR_tag((MR_Word) HeadVar__3_3)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(3, HeadVar__3_3, (MR_Integer) 0)))) == (MR_Integer) 17)));
                  if (succeeded)
                  {
                    ArgY1_97 = ((MR_Integer) ((MR_hl_field(3, HeadVar__3_3, (MR_Integer) 1))));
                    ArgY2_100 = ((MR_Word) ((MR_hl_field(3, HeadVar__3_3, (MR_Integer) 2))));
                    ArgY3_103 = ((MR_Word) ((MR_hl_field(3, HeadVar__3_3, (MR_Integer) 3))));
                    succeeded = (ArgX1_96 < ArgY1_97);
                    if (succeeded)
                    {
                      SubResult1_98 = (MR_Integer) 1;
                      succeeded = MR_TRUE;
                    }
                    else
                    {
                      succeeded = (ArgX1_96 > ArgY1_97);
                      if (succeeded)
                      {
                        SubResult1_98 = (MR_Integer) 2;
                        succeeded = MR_TRUE;
                      }
                      else
                      {
                        succeeded = MR_TRUE;
                        succeeded = !(succeeded);
                        if (succeeded)
                        {
                          SubResult1_98 = (MR_Integer) 0;
                          succeeded = MR_TRUE;
                        }
                      }
                    }
                    if (succeeded)
                      CompareResult_6 = SubResult1_98;
                    else
                    {
                      MR_Word SubResult2_101;

                      bytecode_backend__bytecode____Compare____byte_cons_id_0_0(&SubResult2_101, ArgX2_99, ArgY2_100);
                      succeeded = (SubResult2_101 != (MR_Integer) 0);
                      if (succeeded)
                        CompareResult_6 = SubResult2_101;
                      else
                        mercury__builtin__compare_3_p_0((MR_Word) (&bytecode_backend__bytecode_scalar_common_1[2]), &CompareResult_6, ((MR_Box) (ArgX3_102)), ((MR_Box) (ArgY3_103)));
                    }
                    succeeded = MR_TRUE;
                  }
                }
                break;
              case (MR_Integer) 18:
                {
                  MR_Integer ArgX1_104 = ((MR_Integer) ((MR_hl_field(3, HeadVar__2_2, (MR_Integer) 1))));
                  MR_Integer ArgY1_105;
                  MR_Word ArgX2_107 = ((MR_Word) ((MR_hl_field(3, HeadVar__2_2, (MR_Integer) 2))));
                  MR_Word ArgY2_108;
                  MR_Word ArgX3_110 = ((MR_Word) ((MR_hl_field(3, HeadVar__2_2, (MR_Integer) 3))));
                  MR_Word ArgY3_111;
                  MR_Word SubResult1_106;

                  succeeded = ((((MR_tag((MR_Word) HeadVar__3_3)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(3, HeadVar__3_3, (MR_Integer) 0)))) == (MR_Integer) 18)));
                  if (succeeded)
                  {
                    ArgY1_105 = ((MR_Integer) ((MR_hl_field(3, HeadVar__3_3, (MR_Integer) 1))));
                    ArgY2_108 = ((MR_Word) ((MR_hl_field(3, HeadVar__3_3, (MR_Integer) 2))));
                    ArgY3_111 = ((MR_Word) ((MR_hl_field(3, HeadVar__3_3, (MR_Integer) 3))));
                    succeeded = (ArgX1_104 < ArgY1_105);
                    if (succeeded)
                    {
                      SubResult1_106 = (MR_Integer) 1;
                      succeeded = MR_TRUE;
                    }
                    else
                    {
                      succeeded = (ArgX1_104 > ArgY1_105);
                      if (succeeded)
                      {
                        SubResult1_106 = (MR_Integer) 2;
                        succeeded = MR_TRUE;
                      }
                      else
                      {
                        succeeded = MR_TRUE;
                        succeeded = !(succeeded);
                        if (succeeded)
                        {
                          SubResult1_106 = (MR_Integer) 0;
                          succeeded = MR_TRUE;
                        }
                      }
                    }
                    if (succeeded)
                      CompareResult_6 = SubResult1_106;
                    else
                    {
                      MR_Word SubResult2_109;

                      bytecode_backend__bytecode____Compare____byte_cons_id_0_0(&SubResult2_109, ArgX2_107, ArgY2_108);
                      succeeded = (SubResult2_109 != (MR_Integer) 0);
                      if (succeeded)
                        CompareResult_6 = SubResult2_109;
                      else
                        mercury__builtin__compare_3_p_0((MR_Word) (&bytecode_backend__bytecode_scalar_common_1[2]), &CompareResult_6, ((MR_Box) (ArgX3_110)), ((MR_Box) (ArgY3_111)));
                    }
                    succeeded = MR_TRUE;
                  }
                }
                break;
              case (MR_Integer) 19:
                {
                  MR_Integer ArgX1_112 = ((MR_Integer) ((MR_hl_field(3, HeadVar__2_2, (MR_Integer) 1))));
                  MR_Integer ArgY1_113;
                  MR_Word ArgX2_115 = ((MR_Word) ((MR_hl_field(3, HeadVar__2_2, (MR_Integer) 2))));
                  MR_Word ArgY2_116;
                  MR_Word ArgX3_118 = ((MR_Word) ((MR_hl_field(3, HeadVar__2_2, (MR_Integer) 3))));
                  MR_Word ArgY3_119;
                  MR_Word SubResult1_114;

                  succeeded = ((((MR_tag((MR_Word) HeadVar__3_3)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(3, HeadVar__3_3, (MR_Integer) 0)))) == (MR_Integer) 19)));
                  if (succeeded)
                  {
                    ArgY1_113 = ((MR_Integer) ((MR_hl_field(3, HeadVar__3_3, (MR_Integer) 1))));
                    ArgY2_116 = ((MR_Word) ((MR_hl_field(3, HeadVar__3_3, (MR_Integer) 2))));
                    ArgY3_119 = ((MR_Word) ((MR_hl_field(3, HeadVar__3_3, (MR_Integer) 3))));
                    succeeded = (ArgX1_112 < ArgY1_113);
                    if (succeeded)
                    {
                      SubResult1_114 = (MR_Integer) 1;
                      succeeded = MR_TRUE;
                    }
                    else
                    {
                      succeeded = (ArgX1_112 > ArgY1_113);
                      if (succeeded)
                      {
                        SubResult1_114 = (MR_Integer) 2;
                        succeeded = MR_TRUE;
                      }
                      else
                      {
                        succeeded = MR_TRUE;
                        succeeded = !(succeeded);
                        if (succeeded)
                        {
                          SubResult1_114 = (MR_Integer) 0;
                          succeeded = MR_TRUE;
                        }
                      }
                    }
                    if (succeeded)
                      CompareResult_6 = SubResult1_114;
                    else
                    {
                      MR_Word SubResult2_117;

                      bytecode_backend__bytecode____Compare____byte_cons_id_0_0(&SubResult2_117, ArgX2_115, ArgY2_116);
                      succeeded = (SubResult2_117 != (MR_Integer) 0);
                      if (succeeded)
                        CompareResult_6 = SubResult2_117;
                      else
                        mercury__builtin__compare_3_p_0((MR_Word) (&bytecode_backend__bytecode_scalar_common_1[3]), &CompareResult_6, ((MR_Box) (ArgX3_118)), ((MR_Box) (ArgY3_119)));
                    }
                    succeeded = MR_TRUE;
                  }
                }
                break;
              case (MR_Integer) 20:
                {
                  MR_Integer ArgX1_120 = ((MR_Integer) ((MR_hl_field(3, HeadVar__2_2, (MR_Integer) 1))));
                  MR_Integer ArgY1_121;
                  MR_Word ArgX2_123 = ((MR_Word) ((MR_hl_field(3, HeadVar__2_2, (MR_Integer) 2))));
                  MR_Word ArgY2_124;
                  MR_Word ArgX3_126 = ((MR_Word) ((MR_hl_field(3, HeadVar__2_2, (MR_Integer) 3))));
                  MR_Word ArgY3_127;
                  MR_Word SubResult1_122;

                  succeeded = ((((MR_tag((MR_Word) HeadVar__3_3)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(3, HeadVar__3_3, (MR_Integer) 0)))) == (MR_Integer) 20)));
                  if (succeeded)
                  {
                    ArgY1_121 = ((MR_Integer) ((MR_hl_field(3, HeadVar__3_3, (MR_Integer) 1))));
                    ArgY2_124 = ((MR_Word) ((MR_hl_field(3, HeadVar__3_3, (MR_Integer) 2))));
                    ArgY3_127 = ((MR_Word) ((MR_hl_field(3, HeadVar__3_3, (MR_Integer) 3))));
                    succeeded = (ArgX1_120 < ArgY1_121);
                    if (succeeded)
                    {
                      SubResult1_122 = (MR_Integer) 1;
                      succeeded = MR_TRUE;
                    }
                    else
                    {
                      succeeded = (ArgX1_120 > ArgY1_121);
                      if (succeeded)
                      {
                        SubResult1_122 = (MR_Integer) 2;
                        succeeded = MR_TRUE;
                      }
                      else
                      {
                        succeeded = MR_TRUE;
                        succeeded = !(succeeded);
                        if (succeeded)
                        {
                          SubResult1_122 = (MR_Integer) 0;
                          succeeded = MR_TRUE;
                        }
                      }
                    }
                    if (succeeded)
                      CompareResult_6 = SubResult1_122;
                    else
                    {
                      MR_Word SubResult2_125;

                      bytecode_backend__bytecode____Compare____byte_cons_id_0_0(&SubResult2_125, ArgX2_123, ArgY2_124);
                      succeeded = (SubResult2_125 != (MR_Integer) 0);
                      if (succeeded)
                        CompareResult_6 = SubResult2_125;
                      else
                        mercury__builtin__compare_3_p_0((MR_Word) (&bytecode_backend__bytecode_scalar_common_1[3]), &CompareResult_6, ((MR_Box) (ArgX3_126)), ((MR_Box) (ArgY3_127)));
                    }
                    succeeded = MR_TRUE;
                  }
                }
                break;
              case (MR_Integer) 21:
                {
                  MR_Integer ArgX2_130 = ((MR_Integer) ((MR_hl_field(3, HeadVar__2_2, (MR_Integer) 2))));
                  MR_Integer ArgY2_131;
                  MR_Integer ArgX3_133 = ((MR_Integer) ((MR_hl_field(3, HeadVar__2_2, (MR_Integer) 3))));
                  MR_Integer ArgY3_134;
                  MR_Word SubResult2_132;

                  succeeded = ((((MR_tag((MR_Word) HeadVar__3_3)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(3, HeadVar__3_3, (MR_Integer) 0)))) == (MR_Integer) 21)));
                  if (succeeded)
                  {
                    ArgY2_131 = ((MR_Integer) ((MR_hl_field(3, HeadVar__3_3, (MR_Integer) 2))));
                    ArgY3_134 = ((MR_Integer) ((MR_hl_field(3, HeadVar__3_3, (MR_Integer) 3))));
                    succeeded = (ArgX2_130 < ArgY2_131);
                    if (succeeded)
                    {
                      SubResult2_132 = (MR_Integer) 1;
                      succeeded = MR_TRUE;
                    }
                    else
                    {
                      succeeded = (ArgX2_130 > ArgY2_131);
                      if (succeeded)
                      {
                        SubResult2_132 = (MR_Integer) 2;
                        succeeded = MR_TRUE;
                      }
                      else
                      {
                        succeeded = MR_TRUE;
                        succeeded = !(succeeded);
                        if (succeeded)
                        {
                          SubResult2_132 = (MR_Integer) 0;
                          succeeded = MR_TRUE;
                        }
                      }
                    }
                    if (succeeded)
                      CompareResult_6 = SubResult2_132;
                    else
                    {
                      succeeded = (ArgX3_133 < ArgY3_134);
                      if (succeeded)
                        CompareResult_6 = (MR_Integer) 1;
                      else
                      {
                        succeeded = (ArgX3_133 > ArgY3_134);
                        if (succeeded)
                          CompareResult_6 = (MR_Integer) 2;
                        else
                          CompareResult_6 = (MR_Integer) 0;
                      }
                    }
                    succeeded = MR_TRUE;
                  }
                }
                break;
              case (MR_Integer) 22:
                {
                  MR_Integer ArgX2_137 = ((MR_Integer) ((MR_hl_field(3, HeadVar__2_2, (MR_Integer) 2))));
                  MR_Integer ArgY2_138;
                  MR_Integer ArgX3_140 = ((MR_Integer) ((MR_hl_field(3, HeadVar__2_2, (MR_Integer) 3))));
                  MR_Integer ArgY3_141;
                  MR_Word SubResult2_139;

                  succeeded = ((((MR_tag((MR_Word) HeadVar__3_3)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(3, HeadVar__3_3, (MR_Integer) 0)))) == (MR_Integer) 22)));
                  if (succeeded)
                  {
                    ArgY2_138 = ((MR_Integer) ((MR_hl_field(3, HeadVar__3_3, (MR_Integer) 2))));
                    ArgY3_141 = ((MR_Integer) ((MR_hl_field(3, HeadVar__3_3, (MR_Integer) 3))));
                    succeeded = (ArgX2_137 < ArgY2_138);
                    if (succeeded)
                    {
                      SubResult2_139 = (MR_Integer) 1;
                      succeeded = MR_TRUE;
                    }
                    else
                    {
                      succeeded = (ArgX2_137 > ArgY2_138);
                      if (succeeded)
                      {
                        SubResult2_139 = (MR_Integer) 2;
                        succeeded = MR_TRUE;
                      }
                      else
                      {
                        succeeded = MR_TRUE;
                        succeeded = !(succeeded);
                        if (succeeded)
                        {
                          SubResult2_139 = (MR_Integer) 0;
                          succeeded = MR_TRUE;
                        }
                      }
                    }
                    if (succeeded)
                      CompareResult_6 = SubResult2_139;
                    else
                    {
                      succeeded = (ArgX3_140 < ArgY3_141);
                      if (succeeded)
                        CompareResult_6 = (MR_Integer) 1;
                      else
                      {
                        succeeded = (ArgX3_140 > ArgY3_141);
                        if (succeeded)
                          CompareResult_6 = (MR_Integer) 2;
                        else
                          CompareResult_6 = (MR_Integer) 0;
                      }
                    }
                    succeeded = MR_TRUE;
                  }
                }
                break;
              case (MR_Integer) 23:
                {
                  MR_Word ArgX1_142 = ((MR_Word) ((MR_hl_field(3, HeadVar__2_2, (MR_Integer) 1))));
                  MR_Word ArgY1_143;
                  MR_String ArgX2_145 = ((MR_String) ((MR_hl_field(3, HeadVar__2_2, (MR_Integer) 2))));
                  MR_String ArgY2_146;
                  MR_Integer ArgX3_148 = ((MR_Integer) ((MR_hl_field(3, HeadVar__2_2, (MR_Integer) 3))));
                  MR_Integer ArgY3_149;
                  MR_Integer ArgX4_151 = ((MR_Integer) ((MR_hl_field(3, HeadVar__2_2, (MR_Integer) 4))));
                  MR_Integer ArgY4_152;
                  MR_Integer ArgX5_154 = ((MR_Integer) ((MR_hl_field(3, HeadVar__2_2, (MR_Integer) 5))));
                  MR_Integer ArgY5_155;
                  MR_Word SubResult1_144;

                  succeeded = ((((MR_tag((MR_Word) HeadVar__3_3)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(3, HeadVar__3_3, (MR_Integer) 0)))) == (MR_Integer) 23)));
                  if (succeeded)
                  {
                    ArgY1_143 = ((MR_Word) ((MR_hl_field(3, HeadVar__3_3, (MR_Integer) 1))));
                    ArgY2_146 = ((MR_String) ((MR_hl_field(3, HeadVar__3_3, (MR_Integer) 2))));
                    ArgY3_149 = ((MR_Integer) ((MR_hl_field(3, HeadVar__3_3, (MR_Integer) 3))));
                    ArgY4_152 = ((MR_Integer) ((MR_hl_field(3, HeadVar__3_3, (MR_Integer) 4))));
                    ArgY5_155 = ((MR_Integer) ((MR_hl_field(3, HeadVar__3_3, (MR_Integer) 5))));
                    mdbcomp__sym_name____Compare____sym_name_0_0(&SubResult1_144, ArgX1_142, ArgY1_143);
                    succeeded = (SubResult1_144 != (MR_Integer) 0);
                    if (succeeded)
                      CompareResult_6 = SubResult1_144;
                    else
                    {
                      MR_Word SubResult2_147;

                      mercury__private_builtin__builtin_compare_string_3_p_0(&SubResult2_147, ArgX2_145, ArgY2_146);
                      succeeded = (SubResult2_147 != (MR_Integer) 0);
                      if (succeeded)
                        CompareResult_6 = SubResult2_147;
                      else
                      {
                        MR_Word SubResult3_150;

                        succeeded = (ArgX3_148 < ArgY3_149);
                        if (succeeded)
                        {
                          SubResult3_150 = (MR_Integer) 1;
                          succeeded = MR_TRUE;
                        }
                        else
                        {
                          succeeded = (ArgX3_148 > ArgY3_149);
                          if (succeeded)
                          {
                            SubResult3_150 = (MR_Integer) 2;
                            succeeded = MR_TRUE;
                          }
                          else
                          {
                            succeeded = MR_TRUE;
                            succeeded = !(succeeded);
                            if (succeeded)
                            {
                              SubResult3_150 = (MR_Integer) 0;
                              succeeded = MR_TRUE;
                            }
                          }
                        }
                        if (succeeded)
                          CompareResult_6 = SubResult3_150;
                        else
                        {
                          MR_Word SubResult4_153;

                          succeeded = (ArgX4_151 < ArgY4_152);
                          if (succeeded)
                          {
                            SubResult4_153 = (MR_Integer) 1;
                            succeeded = MR_TRUE;
                          }
                          else
                          {
                            succeeded = (ArgX4_151 > ArgY4_152);
                            if (succeeded)
                            {
                              SubResult4_153 = (MR_Integer) 2;
                              succeeded = MR_TRUE;
                            }
                            else
                            {
                              succeeded = MR_TRUE;
                              succeeded = !(succeeded);
                              if (succeeded)
                              {
                                SubResult4_153 = (MR_Integer) 0;
                                succeeded = MR_TRUE;
                              }
                            }
                          }
                          if (succeeded)
                            CompareResult_6 = SubResult4_153;
                          else
                          {
                            succeeded = (ArgX5_154 < ArgY5_155);
                            if (succeeded)
                              CompareResult_6 = (MR_Integer) 1;
                            else
                            {
                              succeeded = (ArgX5_154 > ArgY5_155);
                              if (succeeded)
                                CompareResult_6 = (MR_Integer) 2;
                              else
                                CompareResult_6 = (MR_Integer) 0;
                            }
                          }
                        }
                      }
                    }
                    succeeded = MR_TRUE;
                  }
                }
                break;
              case (MR_Integer) 24:
                {
                  MR_Integer ArgX1_156 = ((MR_Integer) ((MR_hl_field(3, HeadVar__2_2, (MR_Integer) 1))));
                  MR_Integer ArgY1_157;
                  MR_Integer ArgX2_159 = ((MR_Integer) ((MR_hl_field(3, HeadVar__2_2, (MR_Integer) 2))));
                  MR_Integer ArgY2_160;
                  MR_Integer ArgX3_162 = ((MR_Integer) ((MR_hl_field(3, HeadVar__2_2, (MR_Integer) 3))));
                  MR_Integer ArgY3_163;
                  MR_Word ArgX4_165 = ((MR_Unsigned) ((MR_hl_field(3, HeadVar__2_2, (MR_Integer) 4))) & (MR_Integer) 7);
                  MR_Word ArgY4_166;
                  MR_Word SubResult1_158;

                  succeeded = ((((MR_tag((MR_Word) HeadVar__3_3)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(3, HeadVar__3_3, (MR_Integer) 0)))) == (MR_Integer) 24)));
                  if (succeeded)
                  {
                    ArgY1_157 = ((MR_Integer) ((MR_hl_field(3, HeadVar__3_3, (MR_Integer) 1))));
                    ArgY2_160 = ((MR_Integer) ((MR_hl_field(3, HeadVar__3_3, (MR_Integer) 2))));
                    ArgY3_163 = ((MR_Integer) ((MR_hl_field(3, HeadVar__3_3, (MR_Integer) 3))));
                    ArgY4_166 = ((MR_Unsigned) ((MR_hl_field(3, HeadVar__3_3, (MR_Integer) 4))) & (MR_Integer) 7);
                    succeeded = (ArgX1_156 < ArgY1_157);
                    if (succeeded)
                    {
                      SubResult1_158 = (MR_Integer) 1;
                      succeeded = MR_TRUE;
                    }
                    else
                    {
                      succeeded = (ArgX1_156 > ArgY1_157);
                      if (succeeded)
                      {
                        SubResult1_158 = (MR_Integer) 2;
                        succeeded = MR_TRUE;
                      }
                      else
                      {
                        succeeded = MR_TRUE;
                        succeeded = !(succeeded);
                        if (succeeded)
                        {
                          SubResult1_158 = (MR_Integer) 0;
                          succeeded = MR_TRUE;
                        }
                      }
                    }
                    if (succeeded)
                      CompareResult_6 = SubResult1_158;
                    else
                    {
                      MR_Word SubResult2_161;

                      succeeded = (ArgX2_159 < ArgY2_160);
                      if (succeeded)
                      {
                        SubResult2_161 = (MR_Integer) 1;
                        succeeded = MR_TRUE;
                      }
                      else
                      {
                        succeeded = (ArgX2_159 > ArgY2_160);
                        if (succeeded)
                        {
                          SubResult2_161 = (MR_Integer) 2;
                          succeeded = MR_TRUE;
                        }
                        else
                        {
                          succeeded = MR_TRUE;
                          succeeded = !(succeeded);
                          if (succeeded)
                          {
                            SubResult2_161 = (MR_Integer) 0;
                            succeeded = MR_TRUE;
                          }
                        }
                      }
                      if (succeeded)
                        CompareResult_6 = SubResult2_161;
                      else
                      {
                        MR_Word SubResult3_164;

                        succeeded = (ArgX3_162 < ArgY3_163);
                        if (succeeded)
                        {
                          SubResult3_164 = (MR_Integer) 1;
                          succeeded = MR_TRUE;
                        }
                        else
                        {
                          succeeded = (ArgX3_162 > ArgY3_163);
                          if (succeeded)
                          {
                            SubResult3_164 = (MR_Integer) 2;
                            succeeded = MR_TRUE;
                          }
                          else
                          {
                            succeeded = MR_TRUE;
                            succeeded = !(succeeded);
                            if (succeeded)
                            {
                              SubResult3_164 = (MR_Integer) 0;
                              succeeded = MR_TRUE;
                            }
                          }
                        }
                        if (succeeded)
                          CompareResult_6 = SubResult3_164;
                        else
                        {
                          MR_Integer Var_279 = (MR_Integer) (ArgX4_165);
                          MR_Integer Var_280 = (MR_Integer) (ArgY4_166);

                          succeeded = (Var_279 < Var_280);
                          if (succeeded)
                            CompareResult_6 = (MR_Integer) 1;
                          else
                          {
                            succeeded = (Var_279 > Var_280);
                            if (succeeded)
                              CompareResult_6 = (MR_Integer) 2;
                            else
                              CompareResult_6 = (MR_Integer) 0;
                          }
                        }
                      }
                    }
                    succeeded = MR_TRUE;
                  }
                }
                break;
              case (MR_Integer) 25:
                {
                  MR_Word ArgX1_167 = ((MR_Word) ((MR_hl_field(3, HeadVar__2_2, (MR_Integer) 1))));
                  MR_Word ArgY1_168;
                  MR_Word ArgX2_170 = ((MR_Word) ((MR_hl_field(3, HeadVar__2_2, (MR_Integer) 2))));
                  MR_Word ArgY2_171;
                  MR_Word ArgX3_173 = ((MR_Word) ((MR_hl_field(3, HeadVar__2_2, (MR_Integer) 3))));
                  MR_Word ArgY3_174;
                  MR_Integer ArgX4_176 = ((MR_Integer) ((MR_hl_field(3, HeadVar__2_2, (MR_Integer) 4))));
                  MR_Integer ArgY4_177;
                  MR_Word SubResult1_169;

                  succeeded = ((((MR_tag((MR_Word) HeadVar__3_3)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(3, HeadVar__3_3, (MR_Integer) 0)))) == (MR_Integer) 25)));
                  if (succeeded)
                  {
                    ArgY1_168 = ((MR_Word) ((MR_hl_field(3, HeadVar__3_3, (MR_Integer) 1))));
                    ArgY2_171 = ((MR_Word) ((MR_hl_field(3, HeadVar__3_3, (MR_Integer) 2))));
                    ArgY3_174 = ((MR_Word) ((MR_hl_field(3, HeadVar__3_3, (MR_Integer) 3))));
                    ArgY4_177 = ((MR_Integer) ((MR_hl_field(3, HeadVar__3_3, (MR_Integer) 4))));
                    backend_libs__builtin_ops____Compare____binary_op_0_0(&SubResult1_169, ArgX1_167, ArgY1_168);
                    succeeded = (SubResult1_169 != (MR_Integer) 0);
                    if (succeeded)
                      CompareResult_6 = SubResult1_169;
                    else
                    {
                      MR_Word SubResult2_172;

                      bytecode_backend__bytecode____Compare____byte_arg_0_0(&SubResult2_172, ArgX2_170, ArgY2_171);
                      succeeded = (SubResult2_172 != (MR_Integer) 0);
                      if (succeeded)
                        CompareResult_6 = SubResult2_172;
                      else
                      {
                        MR_Word SubResult3_175;

                        bytecode_backend__bytecode____Compare____byte_arg_0_0(&SubResult3_175, ArgX3_173, ArgY3_174);
                        succeeded = (SubResult3_175 != (MR_Integer) 0);
                        if (succeeded)
                          CompareResult_6 = SubResult3_175;
                        else
                        {
                          succeeded = (ArgX4_176 < ArgY4_177);
                          if (succeeded)
                            CompareResult_6 = (MR_Integer) 1;
                          else
                          {
                            succeeded = (ArgX4_176 > ArgY4_177);
                            if (succeeded)
                              CompareResult_6 = (MR_Integer) 2;
                            else
                              CompareResult_6 = (MR_Integer) 0;
                          }
                        }
                      }
                    }
                    succeeded = MR_TRUE;
                  }
                }
                break;
              case (MR_Integer) 26:
                {
                  MR_Word ArgX1_178 = ((MR_Word) ((MR_hl_field(3, HeadVar__2_2, (MR_Integer) 1))));
                  MR_Word ArgY1_179;
                  MR_Word ArgX2_181 = ((MR_Word) ((MR_hl_field(3, HeadVar__2_2, (MR_Integer) 2))));
                  MR_Word ArgY2_182;
                  MR_Integer ArgX3_184 = ((MR_Integer) ((MR_hl_field(3, HeadVar__2_2, (MR_Integer) 3))));
                  MR_Integer ArgY3_185;
                  MR_Word SubResult1_180;

                  succeeded = ((((MR_tag((MR_Word) HeadVar__3_3)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(3, HeadVar__3_3, (MR_Integer) 0)))) == (MR_Integer) 26)));
                  if (succeeded)
                  {
                    ArgY1_179 = ((MR_Word) ((MR_hl_field(3, HeadVar__3_3, (MR_Integer) 1))));
                    ArgY2_182 = ((MR_Word) ((MR_hl_field(3, HeadVar__3_3, (MR_Integer) 2))));
                    ArgY3_185 = ((MR_Integer) ((MR_hl_field(3, HeadVar__3_3, (MR_Integer) 3))));
                    backend_libs__builtin_ops____Compare____unary_op_0_0(&SubResult1_180, ArgX1_178, ArgY1_179);
                    succeeded = (SubResult1_180 != (MR_Integer) 0);
                    if (succeeded)
                      CompareResult_6 = SubResult1_180;
                    else
                    {
                      MR_Word SubResult2_183;

                      bytecode_backend__bytecode____Compare____byte_arg_0_0(&SubResult2_183, ArgX2_181, ArgY2_182);
                      succeeded = (SubResult2_183 != (MR_Integer) 0);
                      if (succeeded)
                        CompareResult_6 = SubResult2_183;
                      else
                      {
                        succeeded = (ArgX3_184 < ArgY3_185);
                        if (succeeded)
                          CompareResult_6 = (MR_Integer) 1;
                        else
                        {
                          succeeded = (ArgX3_184 > ArgY3_185);
                          if (succeeded)
                            CompareResult_6 = (MR_Integer) 2;
                          else
                            CompareResult_6 = (MR_Integer) 0;
                        }
                      }
                    }
                    succeeded = MR_TRUE;
                  }
                }
                break;
              case (MR_Integer) 27:
                {
                  MR_Word ArgX1_186 = ((MR_Word) ((MR_hl_field(3, HeadVar__2_2, (MR_Integer) 1))));
                  MR_Word ArgY1_187;
                  MR_Word ArgX2_189 = ((MR_Word) ((MR_hl_field(3, HeadVar__2_2, (MR_Integer) 2))));
                  MR_Word ArgY2_190;
                  MR_Word ArgX3_192 = ((MR_Word) ((MR_hl_field(3, HeadVar__2_2, (MR_Integer) 3))));
                  MR_Word ArgY3_193;
                  MR_Word SubResult1_188;

                  succeeded = ((((MR_tag((MR_Word) HeadVar__3_3)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(3, HeadVar__3_3, (MR_Integer) 0)))) == (MR_Integer) 27)));
                  if (succeeded)
                  {
                    ArgY1_187 = ((MR_Word) ((MR_hl_field(3, HeadVar__3_3, (MR_Integer) 1))));
                    ArgY2_190 = ((MR_Word) ((MR_hl_field(3, HeadVar__3_3, (MR_Integer) 2))));
                    ArgY3_193 = ((MR_Word) ((MR_hl_field(3, HeadVar__3_3, (MR_Integer) 3))));
                    backend_libs__builtin_ops____Compare____binary_op_0_0(&SubResult1_188, ArgX1_186, ArgY1_187);
                    succeeded = (SubResult1_188 != (MR_Integer) 0);
                    if (succeeded)
                      CompareResult_6 = SubResult1_188;
                    else
                    {
                      MR_Word SubResult2_191;

                      bytecode_backend__bytecode____Compare____byte_arg_0_0(&SubResult2_191, ArgX2_189, ArgY2_190);
                      succeeded = (SubResult2_191 != (MR_Integer) 0);
                      if (succeeded)
                        CompareResult_6 = SubResult2_191;
                      else
                        bytecode_backend__bytecode____Compare____byte_arg_0_0(&CompareResult_6, ArgX3_192, ArgY3_193);
                    }
                    succeeded = MR_TRUE;
                  }
                }
                break;
              case (MR_Integer) 28:
                {
                  MR_Word ArgX1_194 = ((MR_Word) ((MR_hl_field(3, HeadVar__2_2, (MR_Integer) 1))));
                  MR_Word ArgY1_195;
                  MR_Word ArgX2_197 = ((MR_Word) ((MR_hl_field(3, HeadVar__2_2, (MR_Integer) 2))));
                  MR_Word ArgY2_198;
                  MR_Word SubResult1_196;

                  succeeded = ((((MR_tag((MR_Word) HeadVar__3_3)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(3, HeadVar__3_3, (MR_Integer) 0)))) == (MR_Integer) 28)));
                  if (succeeded)
                  {
                    ArgY1_195 = ((MR_Word) ((MR_hl_field(3, HeadVar__3_3, (MR_Integer) 1))));
                    ArgY2_198 = ((MR_Word) ((MR_hl_field(3, HeadVar__3_3, (MR_Integer) 2))));
                    backend_libs__builtin_ops____Compare____unary_op_0_0(&SubResult1_196, ArgX1_194, ArgY1_195);
                    succeeded = (SubResult1_196 != (MR_Integer) 0);
                    if (succeeded)
                      CompareResult_6 = SubResult1_196;
                    else
                      bytecode_backend__bytecode____Compare____byte_arg_0_0(&CompareResult_6, ArgX2_197, ArgY2_198);
                    succeeded = MR_TRUE;
                  }
                }
                break;
              case (MR_Integer) 29:
                {
                  MR_Integer ArgX1_199 = ((MR_Integer) ((MR_hl_field(3, HeadVar__2_2, (MR_Integer) 1))));
                  MR_Integer ArgY1_200;

                  succeeded = ((((MR_tag((MR_Word) HeadVar__3_3)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(3, HeadVar__3_3, (MR_Integer) 0)))) == (MR_Integer) 29)));
                  if (succeeded)
                  {
                    ArgY1_200 = ((MR_Integer) ((MR_hl_field(3, HeadVar__3_3, (MR_Integer) 1))));
                    succeeded = (ArgX1_199 < ArgY1_200);
                    if (succeeded)
                      CompareResult_6 = (MR_Integer) 1;
                    else
                    {
                      succeeded = (ArgX1_199 > ArgY1_200);
                      if (succeeded)
                        CompareResult_6 = (MR_Integer) 2;
                      else
                        CompareResult_6 = (MR_Integer) 0;
                    }
                    succeeded = MR_TRUE;
                  }
                }
                break;
            }
            break;
        }
        if (succeeded)
          *HeadVar__1_1 = CompareResult_6;
        else
          {
            mercury__private_builtin__compare_error_0_p_0();
            return;
          }
      }
    }
  }
}

void MR_CALL 
bytecode_backend__bytecode____Compare____byte_cons_id_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3)
{
  MR_bool succeeded;
  MR_Integer CastX_395 = (MR_Integer) (HeadVar__2_2);
  MR_Integer CastY_396 = (MR_Integer) (HeadVar__3_3);

  succeeded = (CastX_395 == CastY_396);
  if (succeeded)
    *HeadVar__1_1 = (MR_Integer) 0;
  else
    switch (MR_tag((MR_Word) HeadVar__2_2)) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        switch (MR_unmkbody(HeadVar__2_2)) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
            switch (MR_tag((MR_Word) HeadVar__3_3)) {
              default: /*NOTREACHED*/ MR_assert(0);
              case (MR_Integer) 0:
                switch (MR_unmkbody(HeadVar__3_3)) {
                  default: /*NOTREACHED*/ MR_assert(0);
                  case (MR_Integer) 0:
                    *HeadVar__1_1 = (MR_Integer) 0;
                    break;
                  case (MR_Integer) 1:
                    *HeadVar__1_1 = (MR_Integer) 1;
                    break;
                }
                break;
              case (MR_Integer) 1:
                *HeadVar__1_1 = (MR_Integer) 2;
                break;
              case (MR_Integer) 2:
                *HeadVar__1_1 = (MR_Integer) 2;
                break;
              case (MR_Integer) 3:
                switch (((MR_Integer) ((MR_hl_field(3, HeadVar__3_3, (MR_Integer) 0))))) {
                  default: /*NOTREACHED*/ MR_assert(0);
                  case (MR_Integer) 0:
                    *HeadVar__1_1 = (MR_Integer) 2;
                    break;
                  case (MR_Integer) 1:
                    *HeadVar__1_1 = (MR_Integer) 2;
                    break;
                  case (MR_Integer) 2:
                    *HeadVar__1_1 = (MR_Integer) 2;
                    break;
                  case (MR_Integer) 3:
                    *HeadVar__1_1 = (MR_Integer) 2;
                    break;
                  case (MR_Integer) 4:
                    *HeadVar__1_1 = (MR_Integer) 2;
                    break;
                  case (MR_Integer) 5:
                    *HeadVar__1_1 = (MR_Integer) 2;
                    break;
                }
                break;
            }
            break;
          case (MR_Integer) 1:
            switch (MR_tag((MR_Word) HeadVar__3_3)) {
              default: /*NOTREACHED*/ MR_assert(0);
              case (MR_Integer) 0:
                switch (MR_unmkbody(HeadVar__3_3)) {
                  default: /*NOTREACHED*/ MR_assert(0);
                  case (MR_Integer) 0:
                    *HeadVar__1_1 = (MR_Integer) 2;
                    break;
                  case (MR_Integer) 1:
                    *HeadVar__1_1 = (MR_Integer) 0;
                    break;
                }
                break;
              case (MR_Integer) 1:
                *HeadVar__1_1 = (MR_Integer) 2;
                break;
              case (MR_Integer) 2:
                *HeadVar__1_1 = (MR_Integer) 2;
                break;
              case (MR_Integer) 3:
                switch (((MR_Integer) ((MR_hl_field(3, HeadVar__3_3, (MR_Integer) 0))))) {
                  default: /*NOTREACHED*/ MR_assert(0);
                  case (MR_Integer) 0:
                    *HeadVar__1_1 = (MR_Integer) 2;
                    break;
                  case (MR_Integer) 1:
                    *HeadVar__1_1 = (MR_Integer) 2;
                    break;
                  case (MR_Integer) 2:
                    *HeadVar__1_1 = (MR_Integer) 2;
                    break;
                  case (MR_Integer) 3:
                    *HeadVar__1_1 = (MR_Integer) 2;
                    break;
                  case (MR_Integer) 4:
                    *HeadVar__1_1 = (MR_Integer) 2;
                    break;
                  case (MR_Integer) 5:
                    *HeadVar__1_1 = (MR_Integer) 2;
                    break;
                }
                break;
            }
            break;
        }
        break;
      case (MR_Integer) 1:
        {
          MR_Word Var_420 = ((MR_Word) ((MR_hl_field(1, HeadVar__2_2, (MR_Integer) 3))));
          MR_Integer Var_421 = ((MR_Integer) ((MR_hl_field(1, HeadVar__2_2, (MR_Integer) 2))));
          MR_String Var_422 = ((MR_String) ((MR_hl_field(1, HeadVar__2_2, (MR_Integer) 1))));
          MR_Word Var_423 = ((MR_Word) ((MR_hl_field(1, HeadVar__2_2, (MR_Integer) 0))));

          switch (MR_tag((MR_Word) HeadVar__3_3)) {
            default: /*NOTREACHED*/ MR_assert(0);
            case (MR_Integer) 0:
              switch (MR_unmkbody(HeadVar__3_3)) {
                default: /*NOTREACHED*/ MR_assert(0);
                case (MR_Integer) 0:
                  *HeadVar__1_1 = (MR_Integer) 1;
                  break;
                case (MR_Integer) 1:
                  *HeadVar__1_1 = (MR_Integer) 1;
                  break;
              }
              break;
            case (MR_Integer) 1:
              {
                MR_Word ArgY1_5 = ((MR_Word) ((MR_hl_field(1, HeadVar__3_3, (MR_Integer) 0))));
                MR_String ArgY2_8 = ((MR_String) ((MR_hl_field(1, HeadVar__3_3, (MR_Integer) 1))));
                MR_Integer ArgY3_11 = ((MR_Integer) ((MR_hl_field(1, HeadVar__3_3, (MR_Integer) 2))));
                MR_Word ArgY4_14 = ((MR_Word) ((MR_hl_field(1, HeadVar__3_3, (MR_Integer) 3))));
                MR_Word SubResult1_6;

                mdbcomp__sym_name____Compare____sym_name_0_0(&SubResult1_6, Var_423, ArgY1_5);
                succeeded = (SubResult1_6 != (MR_Integer) 0);
                if (succeeded)
                  *HeadVar__1_1 = SubResult1_6;
                else
                {
                  MR_Word SubResult2_9;

                  mercury__private_builtin__builtin_compare_string_3_p_0(&SubResult2_9, Var_422, ArgY2_8);
                  succeeded = (SubResult2_9 != (MR_Integer) 0);
                  if (succeeded)
                    *HeadVar__1_1 = SubResult2_9;
                  else
                  {
                    MR_Word SubResult3_12;

                    succeeded = (Var_421 < ArgY3_11);
                    if (succeeded)
                    {
                      SubResult3_12 = (MR_Integer) 1;
                      succeeded = MR_TRUE;
                    }
                    else
                    {
                      succeeded = (Var_421 > ArgY3_11);
                      if (succeeded)
                      {
                        SubResult3_12 = (MR_Integer) 2;
                        succeeded = MR_TRUE;
                      }
                      else
                      {
                        succeeded = MR_TRUE;
                        succeeded = !(succeeded);
                        if (succeeded)
                        {
                          SubResult3_12 = (MR_Integer) 0;
                          succeeded = MR_TRUE;
                        }
                      }
                    }
                    if (succeeded)
                      *HeadVar__1_1 = SubResult3_12;
                    else
                      bytecode_backend__bytecode____Compare____byte_cons_tag_0_0(HeadVar__1_1, Var_420, ArgY4_14);
                  }
                }
              }
              break;
            case (MR_Integer) 2:
              *HeadVar__1_1 = (MR_Integer) 1;
              break;
            case (MR_Integer) 3:
              switch (((MR_Integer) ((MR_hl_field(3, HeadVar__3_3, (MR_Integer) 0))))) {
                default: /*NOTREACHED*/ MR_assert(0);
                case (MR_Integer) 0:
                  *HeadVar__1_1 = (MR_Integer) 1;
                  break;
                case (MR_Integer) 1:
                  *HeadVar__1_1 = (MR_Integer) 1;
                  break;
                case (MR_Integer) 2:
                  *HeadVar__1_1 = (MR_Integer) 1;
                  break;
                case (MR_Integer) 3:
                  *HeadVar__1_1 = (MR_Integer) 1;
                  break;
                case (MR_Integer) 4:
                  *HeadVar__1_1 = (MR_Integer) 1;
                  break;
                case (MR_Integer) 5:
                  *HeadVar__1_1 = (MR_Integer) 1;
                  break;
              }
              break;
          }
        }
        break;
      case (MR_Integer) 2:
        {
          MR_Integer Var_425 = ((MR_Integer) ((MR_hl_field(2, HeadVar__2_2, (MR_Integer) 0))));

          switch (MR_tag((MR_Word) HeadVar__3_3)) {
            default: /*NOTREACHED*/ MR_assert(0);
            case (MR_Integer) 0:
              switch (MR_unmkbody(HeadVar__3_3)) {
                default: /*NOTREACHED*/ MR_assert(0);
                case (MR_Integer) 0:
                  *HeadVar__1_1 = (MR_Integer) 1;
                  break;
                case (MR_Integer) 1:
                  *HeadVar__1_1 = (MR_Integer) 1;
                  break;
              }
              break;
            case (MR_Integer) 1:
              *HeadVar__1_1 = (MR_Integer) 2;
              break;
            case (MR_Integer) 2:
              {
                MR_Integer ArgY1_72 = ((MR_Integer) ((MR_hl_field(2, HeadVar__3_3, (MR_Integer) 0))));

                succeeded = (Var_425 < ArgY1_72);
                if (succeeded)
                  *HeadVar__1_1 = (MR_Integer) 1;
                else
                {
                  succeeded = (Var_425 > ArgY1_72);
                  if (succeeded)
                    *HeadVar__1_1 = (MR_Integer) 2;
                  else
                    *HeadVar__1_1 = (MR_Integer) 0;
                }
              }
              break;
            case (MR_Integer) 3:
              switch (((MR_Integer) ((MR_hl_field(3, HeadVar__3_3, (MR_Integer) 0))))) {
                default: /*NOTREACHED*/ MR_assert(0);
                case (MR_Integer) 0:
                  *HeadVar__1_1 = (MR_Integer) 1;
                  break;
                case (MR_Integer) 1:
                  *HeadVar__1_1 = (MR_Integer) 1;
                  break;
                case (MR_Integer) 2:
                  *HeadVar__1_1 = (MR_Integer) 1;
                  break;
                case (MR_Integer) 3:
                  *HeadVar__1_1 = (MR_Integer) 1;
                  break;
                case (MR_Integer) 4:
                  *HeadVar__1_1 = (MR_Integer) 1;
                  break;
                case (MR_Integer) 5:
                  *HeadVar__1_1 = (MR_Integer) 1;
                  break;
              }
              break;
          }
        }
        break;
      case (MR_Integer) 3:
        switch (((MR_Integer) ((MR_hl_field(3, HeadVar__2_2, (MR_Integer) 0))))) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
            {
              MR_String Var_431 = ((MR_String) ((MR_hl_field(3, HeadVar__2_2, (MR_Integer) 1))));

              switch (MR_tag((MR_Word) HeadVar__3_3)) {
                default: /*NOTREACHED*/ MR_assert(0);
                case (MR_Integer) 0:
                  switch (MR_unmkbody(HeadVar__3_3)) {
                    default: /*NOTREACHED*/ MR_assert(0);
                    case (MR_Integer) 0:
                      *HeadVar__1_1 = (MR_Integer) 1;
                      break;
                    case (MR_Integer) 1:
                      *HeadVar__1_1 = (MR_Integer) 1;
                      break;
                  }
                  break;
                case (MR_Integer) 1:
                  *HeadVar__1_1 = (MR_Integer) 2;
                  break;
                case (MR_Integer) 2:
                  *HeadVar__1_1 = (MR_Integer) 2;
                  break;
                case (MR_Integer) 3:
                  switch (((MR_Integer) ((MR_hl_field(3, HeadVar__3_3, (MR_Integer) 0))))) {
                    default: /*NOTREACHED*/ MR_assert(0);
                    case (MR_Integer) 0:
                      {
                        MR_String ArgY1_103 = ((MR_String) ((MR_hl_field(3, HeadVar__3_3, (MR_Integer) 1))));

                        mercury__private_builtin__builtin_compare_string_3_p_0(HeadVar__1_1, Var_431, ArgY1_103);
                      }
                      break;
                    case (MR_Integer) 1:
                      *HeadVar__1_1 = (MR_Integer) 1;
                      break;
                    case (MR_Integer) 2:
                      *HeadVar__1_1 = (MR_Integer) 1;
                      break;
                    case (MR_Integer) 3:
                      *HeadVar__1_1 = (MR_Integer) 1;
                      break;
                    case (MR_Integer) 4:
                      *HeadVar__1_1 = (MR_Integer) 1;
                      break;
                    case (MR_Integer) 5:
                      *HeadVar__1_1 = (MR_Integer) 1;
                      break;
                  }
                  break;
              }
            }
            break;
          case (MR_Integer) 1:
            {
              MR_Float Var_424 = MR_unbox_float((MR_hl_field(3, HeadVar__2_2, (MR_Integer) 1)));

              switch (MR_tag((MR_Word) HeadVar__3_3)) {
                default: /*NOTREACHED*/ MR_assert(0);
                case (MR_Integer) 0:
                  switch (MR_unmkbody(HeadVar__3_3)) {
                    default: /*NOTREACHED*/ MR_assert(0);
                    case (MR_Integer) 0:
                      *HeadVar__1_1 = (MR_Integer) 1;
                      break;
                    case (MR_Integer) 1:
                      *HeadVar__1_1 = (MR_Integer) 1;
                      break;
                  }
                  break;
                case (MR_Integer) 1:
                  *HeadVar__1_1 = (MR_Integer) 2;
                  break;
                case (MR_Integer) 2:
                  *HeadVar__1_1 = (MR_Integer) 2;
                  break;
                case (MR_Integer) 3:
                  switch (((MR_Integer) ((MR_hl_field(3, HeadVar__3_3, (MR_Integer) 0))))) {
                    default: /*NOTREACHED*/ MR_assert(0);
                    case (MR_Integer) 0:
                      *HeadVar__1_1 = (MR_Integer) 2;
                      break;
                    case (MR_Integer) 1:
                      {
                        MR_Float ArgY1_134 = MR_unbox_float((MR_hl_field(3, HeadVar__3_3, (MR_Integer) 1)));

                        mercury__private_builtin__builtin_compare_float_3_p_0(HeadVar__1_1, Var_424, ArgY1_134);
                      }
                      break;
                    case (MR_Integer) 2:
                      *HeadVar__1_1 = (MR_Integer) 1;
                      break;
                    case (MR_Integer) 3:
                      *HeadVar__1_1 = (MR_Integer) 1;
                      break;
                    case (MR_Integer) 4:
                      *HeadVar__1_1 = (MR_Integer) 1;
                      break;
                    case (MR_Integer) 5:
                      *HeadVar__1_1 = (MR_Integer) 1;
                      break;
                  }
                  break;
              }
            }
            break;
          case (MR_Integer) 2:
            {
              MR_Char Var_419 = ((MR_Char) (MR_Word) (MR_hl_field(3, HeadVar__2_2, (MR_Integer) 1)));

              switch (MR_tag((MR_Word) HeadVar__3_3)) {
                default: /*NOTREACHED*/ MR_assert(0);
                case (MR_Integer) 0:
                  switch (MR_unmkbody(HeadVar__3_3)) {
                    default: /*NOTREACHED*/ MR_assert(0);
                    case (MR_Integer) 0:
                      *HeadVar__1_1 = (MR_Integer) 1;
                      break;
                    case (MR_Integer) 1:
                      *HeadVar__1_1 = (MR_Integer) 1;
                      break;
                  }
                  break;
                case (MR_Integer) 1:
                  *HeadVar__1_1 = (MR_Integer) 2;
                  break;
                case (MR_Integer) 2:
                  *HeadVar__1_1 = (MR_Integer) 2;
                  break;
                case (MR_Integer) 3:
                  switch (((MR_Integer) ((MR_hl_field(3, HeadVar__3_3, (MR_Integer) 0))))) {
                    default: /*NOTREACHED*/ MR_assert(0);
                    case (MR_Integer) 0:
                      *HeadVar__1_1 = (MR_Integer) 2;
                      break;
                    case (MR_Integer) 1:
                      *HeadVar__1_1 = (MR_Integer) 2;
                      break;
                    case (MR_Integer) 2:
                      {
                        MR_Char ArgY1_165 = ((MR_Char) (MR_Word) (MR_hl_field(3, HeadVar__3_3, (MR_Integer) 1)));

                        mercury__private_builtin__builtin_compare_character_3_p_0(HeadVar__1_1, Var_419, ArgY1_165);
                      }
                      break;
                    case (MR_Integer) 3:
                      *HeadVar__1_1 = (MR_Integer) 1;
                      break;
                    case (MR_Integer) 4:
                      *HeadVar__1_1 = (MR_Integer) 1;
                      break;
                    case (MR_Integer) 5:
                      *HeadVar__1_1 = (MR_Integer) 1;
                      break;
                  }
                  break;
              }
            }
            break;
          case (MR_Integer) 3:
            {
              MR_Integer Var_426 = ((MR_Integer) ((MR_hl_field(3, HeadVar__2_2, (MR_Integer) 5))));
              MR_Integer Var_427 = ((MR_Integer) ((MR_hl_field(3, HeadVar__2_2, (MR_Integer) 4))));
              MR_Integer Var_428 = ((MR_Integer) ((MR_hl_field(3, HeadVar__2_2, (MR_Integer) 3))));
              MR_String Var_429 = ((MR_String) ((MR_hl_field(3, HeadVar__2_2, (MR_Integer) 2))));
              MR_Word Var_430 = ((MR_Word) ((MR_hl_field(3, HeadVar__2_2, (MR_Integer) 1))));

              switch (MR_tag((MR_Word) HeadVar__3_3)) {
                default: /*NOTREACHED*/ MR_assert(0);
                case (MR_Integer) 0:
                  switch (MR_unmkbody(HeadVar__3_3)) {
                    default: /*NOTREACHED*/ MR_assert(0);
                    case (MR_Integer) 0:
                      *HeadVar__1_1 = (MR_Integer) 1;
                      break;
                    case (MR_Integer) 1:
                      *HeadVar__1_1 = (MR_Integer) 1;
                      break;
                  }
                  break;
                case (MR_Integer) 1:
                  *HeadVar__1_1 = (MR_Integer) 2;
                  break;
                case (MR_Integer) 2:
                  *HeadVar__1_1 = (MR_Integer) 2;
                  break;
                case (MR_Integer) 3:
                  switch (((MR_Integer) ((MR_hl_field(3, HeadVar__3_3, (MR_Integer) 0))))) {
                    default: /*NOTREACHED*/ MR_assert(0);
                    case (MR_Integer) 0:
                      *HeadVar__1_1 = (MR_Integer) 2;
                      break;
                    case (MR_Integer) 1:
                      *HeadVar__1_1 = (MR_Integer) 2;
                      break;
                    case (MR_Integer) 2:
                      *HeadVar__1_1 = (MR_Integer) 2;
                      break;
                    case (MR_Integer) 3:
                      {
                        MR_Word ArgY1_216 = ((MR_Word) ((MR_hl_field(3, HeadVar__3_3, (MR_Integer) 1))));
                        MR_String ArgY2_219 = ((MR_String) ((MR_hl_field(3, HeadVar__3_3, (MR_Integer) 2))));
                        MR_Integer ArgY3_222 = ((MR_Integer) ((MR_hl_field(3, HeadVar__3_3, (MR_Integer) 3))));
                        MR_Integer ArgY4_225 = ((MR_Integer) ((MR_hl_field(3, HeadVar__3_3, (MR_Integer) 4))));
                        MR_Integer ArgY5_228 = ((MR_Integer) ((MR_hl_field(3, HeadVar__3_3, (MR_Integer) 5))));
                        MR_Word SubResult1_217;

                        mdbcomp__sym_name____Compare____sym_name_0_0(&SubResult1_217, Var_430, ArgY1_216);
                        succeeded = (SubResult1_217 != (MR_Integer) 0);
                        if (succeeded)
                          *HeadVar__1_1 = SubResult1_217;
                        else
                        {
                          MR_Word SubResult2_220;

                          mercury__private_builtin__builtin_compare_string_3_p_0(&SubResult2_220, Var_429, ArgY2_219);
                          succeeded = (SubResult2_220 != (MR_Integer) 0);
                          if (succeeded)
                            *HeadVar__1_1 = SubResult2_220;
                          else
                          {
                            MR_Word SubResult3_223;

                            succeeded = (Var_428 < ArgY3_222);
                            if (succeeded)
                            {
                              SubResult3_223 = (MR_Integer) 1;
                              succeeded = MR_TRUE;
                            }
                            else
                            {
                              succeeded = (Var_428 > ArgY3_222);
                              if (succeeded)
                              {
                                SubResult3_223 = (MR_Integer) 2;
                                succeeded = MR_TRUE;
                              }
                              else
                              {
                                succeeded = MR_TRUE;
                                succeeded = !(succeeded);
                                if (succeeded)
                                {
                                  SubResult3_223 = (MR_Integer) 0;
                                  succeeded = MR_TRUE;
                                }
                              }
                            }
                            if (succeeded)
                              *HeadVar__1_1 = SubResult3_223;
                            else
                            {
                              MR_Word SubResult4_226;

                              succeeded = (Var_427 < ArgY4_225);
                              if (succeeded)
                              {
                                SubResult4_226 = (MR_Integer) 1;
                                succeeded = MR_TRUE;
                              }
                              else
                              {
                                succeeded = (Var_427 > ArgY4_225);
                                if (succeeded)
                                {
                                  SubResult4_226 = (MR_Integer) 2;
                                  succeeded = MR_TRUE;
                                }
                                else
                                {
                                  succeeded = MR_TRUE;
                                  succeeded = !(succeeded);
                                  if (succeeded)
                                  {
                                    SubResult4_226 = (MR_Integer) 0;
                                    succeeded = MR_TRUE;
                                  }
                                }
                              }
                              if (succeeded)
                                *HeadVar__1_1 = SubResult4_226;
                              else
                              {
                                succeeded = (Var_426 < ArgY5_228);
                                if (succeeded)
                                  *HeadVar__1_1 = (MR_Integer) 1;
                                else
                                {
                                  succeeded = (Var_426 > ArgY5_228);
                                  if (succeeded)
                                    *HeadVar__1_1 = (MR_Integer) 2;
                                  else
                                    *HeadVar__1_1 = (MR_Integer) 0;
                                }
                              }
                            }
                          }
                        }
                      }
                      break;
                    case (MR_Integer) 4:
                      *HeadVar__1_1 = (MR_Integer) 1;
                      break;
                    case (MR_Integer) 5:
                      *HeadVar__1_1 = (MR_Integer) 1;
                      break;
                  }
                  break;
              }
            }
            break;
          case (MR_Integer) 4:
            {
              MR_Integer Var_432 = ((MR_Integer) ((MR_hl_field(3, HeadVar__2_2, (MR_Integer) 3))));
              MR_String Var_433 = ((MR_String) ((MR_hl_field(3, HeadVar__2_2, (MR_Integer) 2))));
              MR_Word Var_434 = ((MR_Word) ((MR_hl_field(3, HeadVar__2_2, (MR_Integer) 1))));

              switch (MR_tag((MR_Word) HeadVar__3_3)) {
                default: /*NOTREACHED*/ MR_assert(0);
                case (MR_Integer) 0:
                  switch (MR_unmkbody(HeadVar__3_3)) {
                    default: /*NOTREACHED*/ MR_assert(0);
                    case (MR_Integer) 0:
                      *HeadVar__1_1 = (MR_Integer) 1;
                      break;
                    case (MR_Integer) 1:
                      *HeadVar__1_1 = (MR_Integer) 1;
                      break;
                  }
                  break;
                case (MR_Integer) 1:
                  *HeadVar__1_1 = (MR_Integer) 2;
                  break;
                case (MR_Integer) 2:
                  *HeadVar__1_1 = (MR_Integer) 2;
                  break;
                case (MR_Integer) 3:
                  switch (((MR_Integer) ((MR_hl_field(3, HeadVar__3_3, (MR_Integer) 0))))) {
                    default: /*NOTREACHED*/ MR_assert(0);
                    case (MR_Integer) 0:
                      *HeadVar__1_1 = (MR_Integer) 2;
                      break;
                    case (MR_Integer) 1:
                      *HeadVar__1_1 = (MR_Integer) 2;
                      break;
                    case (MR_Integer) 2:
                      *HeadVar__1_1 = (MR_Integer) 2;
                      break;
                    case (MR_Integer) 3:
                      *HeadVar__1_1 = (MR_Integer) 2;
                      break;
                    case (MR_Integer) 4:
                      {
                        MR_Word ArgY1_287 = ((MR_Word) ((MR_hl_field(3, HeadVar__3_3, (MR_Integer) 1))));
                        MR_String ArgY2_290 = ((MR_String) ((MR_hl_field(3, HeadVar__3_3, (MR_Integer) 2))));
                        MR_Integer ArgY3_293 = ((MR_Integer) ((MR_hl_field(3, HeadVar__3_3, (MR_Integer) 3))));
                        MR_Word SubResult1_288;

                        mdbcomp__sym_name____Compare____sym_name_0_0(&SubResult1_288, Var_434, ArgY1_287);
                        succeeded = (SubResult1_288 != (MR_Integer) 0);
                        if (succeeded)
                          *HeadVar__1_1 = SubResult1_288;
                        else
                        {
                          MR_Word SubResult2_291;

                          mercury__private_builtin__builtin_compare_string_3_p_0(&SubResult2_291, Var_433, ArgY2_290);
                          succeeded = (SubResult2_291 != (MR_Integer) 0);
                          if (succeeded)
                            *HeadVar__1_1 = SubResult2_291;
                          else
                          {
                            succeeded = (Var_432 < ArgY3_293);
                            if (succeeded)
                              *HeadVar__1_1 = (MR_Integer) 1;
                            else
                            {
                              succeeded = (Var_432 > ArgY3_293);
                              if (succeeded)
                                *HeadVar__1_1 = (MR_Integer) 2;
                              else
                                *HeadVar__1_1 = (MR_Integer) 0;
                            }
                          }
                        }
                      }
                      break;
                    case (MR_Integer) 5:
                      *HeadVar__1_1 = (MR_Integer) 1;
                      break;
                  }
                  break;
              }
            }
            break;
          case (MR_Integer) 5:
            {
              MR_String Var_416 = ((MR_String) ((MR_hl_field(3, HeadVar__2_2, (MR_Integer) 3))));
              MR_Word Var_417 = ((MR_Word) ((MR_hl_field(3, HeadVar__2_2, (MR_Integer) 2))));
              MR_Word Var_418 = ((MR_Word) ((MR_hl_field(3, HeadVar__2_2, (MR_Integer) 1))));

              switch (MR_tag((MR_Word) HeadVar__3_3)) {
                default: /*NOTREACHED*/ MR_assert(0);
                case (MR_Integer) 0:
                  switch (MR_unmkbody(HeadVar__3_3)) {
                    default: /*NOTREACHED*/ MR_assert(0);
                    case (MR_Integer) 0:
                      *HeadVar__1_1 = (MR_Integer) 1;
                      break;
                    case (MR_Integer) 1:
                      *HeadVar__1_1 = (MR_Integer) 1;
                      break;
                  }
                  break;
                case (MR_Integer) 1:
                  *HeadVar__1_1 = (MR_Integer) 2;
                  break;
                case (MR_Integer) 2:
                  *HeadVar__1_1 = (MR_Integer) 2;
                  break;
                case (MR_Integer) 3:
                  switch (((MR_Integer) ((MR_hl_field(3, HeadVar__3_3, (MR_Integer) 0))))) {
                    default: /*NOTREACHED*/ MR_assert(0);
                    case (MR_Integer) 0:
                      *HeadVar__1_1 = (MR_Integer) 2;
                      break;
                    case (MR_Integer) 1:
                      *HeadVar__1_1 = (MR_Integer) 2;
                      break;
                    case (MR_Integer) 2:
                      *HeadVar__1_1 = (MR_Integer) 2;
                      break;
                    case (MR_Integer) 3:
                      *HeadVar__1_1 = (MR_Integer) 2;
                      break;
                    case (MR_Integer) 4:
                      *HeadVar__1_1 = (MR_Integer) 2;
                      break;
                    case (MR_Integer) 5:
                      {
                        MR_Word ArgY1_344 = ((MR_Word) ((MR_hl_field(3, HeadVar__3_3, (MR_Integer) 1))));
                        MR_Word ArgY2_347 = ((MR_Word) ((MR_hl_field(3, HeadVar__3_3, (MR_Integer) 2))));
                        MR_String ArgY3_350 = ((MR_String) ((MR_hl_field(3, HeadVar__3_3, (MR_Integer) 3))));
                        MR_Word SubResult1_345;

                        mdbcomp__sym_name____Compare____sym_name_0_0(&SubResult1_345, Var_418, ArgY1_344);
                        succeeded = (SubResult1_345 != (MR_Integer) 0);
                        if (succeeded)
                          *HeadVar__1_1 = SubResult1_345;
                        else
                        {
                          MR_Word SubResult2_348;

                          parse_tree__prog_data____Compare____class_id_0_0(&SubResult2_348, Var_417, ArgY2_347);
                          succeeded = (SubResult2_348 != (MR_Integer) 0);
                          if (succeeded)
                            *HeadVar__1_1 = SubResult2_348;
                          else
                            mercury__private_builtin__builtin_compare_string_3_p_0(HeadVar__1_1, Var_416, ArgY3_350);
                        }
                      }
                      break;
                  }
                  break;
              }
            }
            break;
        }
        break;
    }
}

void MR_CALL 
bytecode_backend__bytecode____Compare____byte_cons_tag_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3)
{
  MR_bool succeeded;
  MR_Integer CastX_66 = (MR_Integer) (HeadVar__2_2);
  MR_Integer CastY_67 = (MR_Integer) (HeadVar__3_3);

  succeeded = (CastX_66 == CastY_67);
  if (succeeded)
    *HeadVar__1_1 = (MR_Integer) 0;
  else
    switch (MR_tag((MR_Word) HeadVar__2_2)) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        switch (MR_tag((MR_Word) HeadVar__3_3)) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
            *HeadVar__1_1 = (MR_Integer) 0;
            break;
          case (MR_Integer) 1:
            *HeadVar__1_1 = (MR_Integer) 1;
            break;
          case (MR_Integer) 2:
            *HeadVar__1_1 = (MR_Integer) 1;
            break;
          case (MR_Integer) 3:
            switch (((MR_Integer) ((MR_hl_field(3, HeadVar__3_3, (MR_Integer) 0))))) {
              default: /*NOTREACHED*/ MR_assert(0);
              case (MR_Integer) 0:
                *HeadVar__1_1 = (MR_Integer) 1;
                break;
              case (MR_Integer) 1:
                *HeadVar__1_1 = (MR_Integer) 1;
                break;
            }
            break;
        }
        break;
      case (MR_Integer) 1:
        {
          MR_Integer Var_79 = ((MR_Integer) ((MR_hl_field(1, HeadVar__2_2, (MR_Integer) 0))));

          switch (MR_tag((MR_Word) HeadVar__3_3)) {
            default: /*NOTREACHED*/ MR_assert(0);
            case (MR_Integer) 0:
              *HeadVar__1_1 = (MR_Integer) 2;
              break;
            case (MR_Integer) 1:
              {
                MR_Integer ArgY1_12 = ((MR_Integer) ((MR_hl_field(1, HeadVar__3_3, (MR_Integer) 0))));

                succeeded = (Var_79 < ArgY1_12);
                if (succeeded)
                  *HeadVar__1_1 = (MR_Integer) 1;
                else
                {
                  succeeded = (Var_79 > ArgY1_12);
                  if (succeeded)
                    *HeadVar__1_1 = (MR_Integer) 2;
                  else
                    *HeadVar__1_1 = (MR_Integer) 0;
                }
              }
              break;
            case (MR_Integer) 2:
              *HeadVar__1_1 = (MR_Integer) 1;
              break;
            case (MR_Integer) 3:
              switch (((MR_Integer) ((MR_hl_field(3, HeadVar__3_3, (MR_Integer) 0))))) {
                default: /*NOTREACHED*/ MR_assert(0);
                case (MR_Integer) 0:
                  *HeadVar__1_1 = (MR_Integer) 1;
                  break;
                case (MR_Integer) 1:
                  *HeadVar__1_1 = (MR_Integer) 1;
                  break;
              }
              break;
          }
        }
        break;
      case (MR_Integer) 2:
        {
          MR_Integer Var_77 = ((MR_Integer) ((MR_hl_field(2, HeadVar__2_2, (MR_Integer) 1))));
          MR_Integer Var_78 = ((MR_Integer) ((MR_hl_field(2, HeadVar__2_2, (MR_Integer) 0))));

          switch (MR_tag((MR_Word) HeadVar__3_3)) {
            default: /*NOTREACHED*/ MR_assert(0);
            case (MR_Integer) 0:
              *HeadVar__1_1 = (MR_Integer) 2;
              break;
            case (MR_Integer) 1:
              *HeadVar__1_1 = (MR_Integer) 2;
              break;
            case (MR_Integer) 2:
              {
                MR_Integer ArgY1_27 = ((MR_Integer) ((MR_hl_field(2, HeadVar__3_3, (MR_Integer) 0))));
                MR_Integer ArgY2_30 = ((MR_Integer) ((MR_hl_field(2, HeadVar__3_3, (MR_Integer) 1))));
                MR_Word SubResult1_28;

                succeeded = (Var_78 < ArgY1_27);
                if (succeeded)
                {
                  SubResult1_28 = (MR_Integer) 1;
                  succeeded = MR_TRUE;
                }
                else
                {
                  succeeded = (Var_78 > ArgY1_27);
                  if (succeeded)
                  {
                    SubResult1_28 = (MR_Integer) 2;
                    succeeded = MR_TRUE;
                  }
                  else
                  {
                    succeeded = MR_TRUE;
                    succeeded = !(succeeded);
                    if (succeeded)
                    {
                      SubResult1_28 = (MR_Integer) 0;
                      succeeded = MR_TRUE;
                    }
                  }
                }
                if (succeeded)
                  *HeadVar__1_1 = SubResult1_28;
                else
                {
                  succeeded = (Var_77 < ArgY2_30);
                  if (succeeded)
                    *HeadVar__1_1 = (MR_Integer) 1;
                  else
                  {
                    succeeded = (Var_77 > ArgY2_30);
                    if (succeeded)
                      *HeadVar__1_1 = (MR_Integer) 2;
                    else
                      *HeadVar__1_1 = (MR_Integer) 0;
                  }
                }
              }
              break;
            case (MR_Integer) 3:
              switch (((MR_Integer) ((MR_hl_field(3, HeadVar__3_3, (MR_Integer) 0))))) {
                default: /*NOTREACHED*/ MR_assert(0);
                case (MR_Integer) 0:
                  *HeadVar__1_1 = (MR_Integer) 1;
                  break;
                case (MR_Integer) 1:
                  *HeadVar__1_1 = (MR_Integer) 1;
                  break;
              }
              break;
          }
        }
        break;
      case (MR_Integer) 3:
        switch (((MR_Integer) ((MR_hl_field(3, HeadVar__2_2, (MR_Integer) 0))))) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
            {
              MR_Integer Var_75 = ((MR_Integer) ((MR_hl_field(3, HeadVar__2_2, (MR_Integer) 2))));
              MR_Integer Var_76 = ((MR_Integer) ((MR_hl_field(3, HeadVar__2_2, (MR_Integer) 1))));

              switch (MR_tag((MR_Word) HeadVar__3_3)) {
                default: /*NOTREACHED*/ MR_assert(0);
                case (MR_Integer) 0:
                  *HeadVar__1_1 = (MR_Integer) 2;
                  break;
                case (MR_Integer) 1:
                  *HeadVar__1_1 = (MR_Integer) 2;
                  break;
                case (MR_Integer) 2:
                  *HeadVar__1_1 = (MR_Integer) 2;
                  break;
                case (MR_Integer) 3:
                  switch (((MR_Integer) ((MR_hl_field(3, HeadVar__3_3, (MR_Integer) 0))))) {
                    default: /*NOTREACHED*/ MR_assert(0);
                    case (MR_Integer) 0:
                      {
                        MR_Integer ArgY1_48 = ((MR_Integer) ((MR_hl_field(3, HeadVar__3_3, (MR_Integer) 1))));
                        MR_Integer ArgY2_51 = ((MR_Integer) ((MR_hl_field(3, HeadVar__3_3, (MR_Integer) 2))));
                        MR_Word SubResult1_49;

                        succeeded = (Var_76 < ArgY1_48);
                        if (succeeded)
                        {
                          SubResult1_49 = (MR_Integer) 1;
                          succeeded = MR_TRUE;
                        }
                        else
                        {
                          succeeded = (Var_76 > ArgY1_48);
                          if (succeeded)
                          {
                            SubResult1_49 = (MR_Integer) 2;
                            succeeded = MR_TRUE;
                          }
                          else
                          {
                            succeeded = MR_TRUE;
                            succeeded = !(succeeded);
                            if (succeeded)
                            {
                              SubResult1_49 = (MR_Integer) 0;
                              succeeded = MR_TRUE;
                            }
                          }
                        }
                        if (succeeded)
                          *HeadVar__1_1 = SubResult1_49;
                        else
                        {
                          succeeded = (Var_75 < ArgY2_51);
                          if (succeeded)
                            *HeadVar__1_1 = (MR_Integer) 1;
                          else
                          {
                            succeeded = (Var_75 > ArgY2_51);
                            if (succeeded)
                              *HeadVar__1_1 = (MR_Integer) 2;
                            else
                              *HeadVar__1_1 = (MR_Integer) 0;
                          }
                        }
                      }
                      break;
                    case (MR_Integer) 1:
                      *HeadVar__1_1 = (MR_Integer) 1;
                      break;
                  }
                  break;
              }
            }
            break;
          case (MR_Integer) 1:
            {
              MR_Integer Var_74 = ((MR_Integer) ((MR_hl_field(3, HeadVar__2_2, (MR_Integer) 1))));

              switch (MR_tag((MR_Word) HeadVar__3_3)) {
                default: /*NOTREACHED*/ MR_assert(0);
                case (MR_Integer) 0:
                  *HeadVar__1_1 = (MR_Integer) 2;
                  break;
                case (MR_Integer) 1:
                  *HeadVar__1_1 = (MR_Integer) 2;
                  break;
                case (MR_Integer) 2:
                  *HeadVar__1_1 = (MR_Integer) 2;
                  break;
                case (MR_Integer) 3:
                  switch (((MR_Integer) ((MR_hl_field(3, HeadVar__3_3, (MR_Integer) 0))))) {
                    default: /*NOTREACHED*/ MR_assert(0);
                    case (MR_Integer) 0:
                      *HeadVar__1_1 = (MR_Integer) 2;
                      break;
                    case (MR_Integer) 1:
                      {
                        MR_Integer ArgY1_65 = ((MR_Integer) ((MR_hl_field(3, HeadVar__3_3, (MR_Integer) 1))));

                        succeeded = (Var_74 < ArgY1_65);
                        if (succeeded)
                          *HeadVar__1_1 = (MR_Integer) 1;
                        else
                        {
                          succeeded = (Var_74 > ArgY1_65);
                          if (succeeded)
                            *HeadVar__1_1 = (MR_Integer) 2;
                          else
                            *HeadVar__1_1 = (MR_Integer) 0;
                        }
                      }
                      break;
                  }
                  break;
              }
            }
            break;
        }
        break;
    }
}

void MR_CALL 
bytecode_backend__bytecode____Index____byte_code_0_0(
  MR_Word HeadVar__1_1,
  MR_Integer * HeadVar__2_2)
{
  switch (MR_tag((MR_Word) HeadVar__1_1)) {
    default: /*NOTREACHED*/ MR_assert(0);
    case (MR_Integer) 0:
      switch (MR_unmkbody(HeadVar__1_1)) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 0:
          *HeadVar__2_2 = (MR_Integer) 1;
          break;
        case (MR_Integer) 1:
          *HeadVar__2_2 = (MR_Integer) 3;
          break;
        case (MR_Integer) 2:
          *HeadVar__2_2 = (MR_Integer) 6;
          break;
        case (MR_Integer) 3:
          *HeadVar__2_2 = (MR_Integer) 10;
          break;
        case (MR_Integer) 4:
          *HeadVar__2_2 = (MR_Integer) 17;
          break;
        case (MR_Integer) 5:
          *HeadVar__2_2 = (MR_Integer) 20;
          break;
        case (MR_Integer) 6:
          *HeadVar__2_2 = (MR_Integer) 37;
          break;
        case (MR_Integer) 7:
          *HeadVar__2_2 = (MR_Integer) 38;
          break;
        case (MR_Integer) 8:
          *HeadVar__2_2 = (MR_Integer) 39;
          break;
        case (MR_Integer) 9:
          *HeadVar__2_2 = (MR_Integer) 41;
          break;
      }
      break;
    case (MR_Integer) 1:
      *HeadVar__2_2 = (MR_Integer) 0;
      break;
    case (MR_Integer) 2:
      *HeadVar__2_2 = (MR_Integer) 2;
      break;
    case (MR_Integer) 3:
      switch (((MR_Integer) ((MR_hl_field(3, HeadVar__1_1, (MR_Integer) 0))))) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 0:
          *HeadVar__2_2 = (MR_Integer) 4;
          break;
        case (MR_Integer) 1:
          *HeadVar__2_2 = (MR_Integer) 5;
          break;
        case (MR_Integer) 2:
          *HeadVar__2_2 = (MR_Integer) 7;
          break;
        case (MR_Integer) 3:
          *HeadVar__2_2 = (MR_Integer) 8;
          break;
        case (MR_Integer) 4:
          *HeadVar__2_2 = (MR_Integer) 9;
          break;
        case (MR_Integer) 5:
          *HeadVar__2_2 = (MR_Integer) 11;
          break;
        case (MR_Integer) 6:
          *HeadVar__2_2 = (MR_Integer) 12;
          break;
        case (MR_Integer) 7:
          *HeadVar__2_2 = (MR_Integer) 13;
          break;
        case (MR_Integer) 8:
          *HeadVar__2_2 = (MR_Integer) 14;
          break;
        case (MR_Integer) 9:
          *HeadVar__2_2 = (MR_Integer) 15;
          break;
        case (MR_Integer) 10:
          *HeadVar__2_2 = (MR_Integer) 16;
          break;
        case (MR_Integer) 11:
          *HeadVar__2_2 = (MR_Integer) 18;
          break;
        case (MR_Integer) 12:
          *HeadVar__2_2 = (MR_Integer) 19;
          break;
        case (MR_Integer) 13:
          *HeadVar__2_2 = (MR_Integer) 21;
          break;
        case (MR_Integer) 14:
          *HeadVar__2_2 = (MR_Integer) 22;
          break;
        case (MR_Integer) 15:
          *HeadVar__2_2 = (MR_Integer) 23;
          break;
        case (MR_Integer) 16:
          *HeadVar__2_2 = (MR_Integer) 24;
          break;
        case (MR_Integer) 17:
          *HeadVar__2_2 = (MR_Integer) 25;
          break;
        case (MR_Integer) 18:
          *HeadVar__2_2 = (MR_Integer) 26;
          break;
        case (MR_Integer) 19:
          *HeadVar__2_2 = (MR_Integer) 27;
          break;
        case (MR_Integer) 20:
          *HeadVar__2_2 = (MR_Integer) 28;
          break;
        case (MR_Integer) 21:
          *HeadVar__2_2 = (MR_Integer) 29;
          break;
        case (MR_Integer) 22:
          *HeadVar__2_2 = (MR_Integer) 30;
          break;
        case (MR_Integer) 23:
          *HeadVar__2_2 = (MR_Integer) 31;
          break;
        case (MR_Integer) 24:
          *HeadVar__2_2 = (MR_Integer) 32;
          break;
        case (MR_Integer) 25:
          *HeadVar__2_2 = (MR_Integer) 33;
          break;
        case (MR_Integer) 26:
          *HeadVar__2_2 = (MR_Integer) 34;
          break;
        case (MR_Integer) 27:
          *HeadVar__2_2 = (MR_Integer) 35;
          break;
        case (MR_Integer) 28:
          *HeadVar__2_2 = (MR_Integer) 36;
          break;
        case (MR_Integer) 29:
          *HeadVar__2_2 = (MR_Integer) 40;
          break;
      }
      break;
  }
}

MR_bool MR_CALL 
bytecode_backend__bytecode____Unify____byte_code_0_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2)
{
  MR_bool succeeded;
  MR_Integer CastX_175 = (MR_Integer) (HeadVar__1_1);
  MR_Integer CastY_176 = (MR_Integer) (HeadVar__2_2);

  succeeded = (CastX_175 == CastY_176);
  if (succeeded)
    succeeded = MR_TRUE;
  else
    switch (MR_tag((MR_Word) HeadVar__1_1)) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        switch (MR_unmkbody(HeadVar__1_1)) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
            {
              MR_Integer CastX_11 = (MR_Integer) (HeadVar__1_1);
              MR_Integer CastY_12 = (MR_Integer) (HeadVar__2_2);

              succeeded = (CastY_12 == CastX_11);
            }
            break;
          case (MR_Integer) 1:
            {
              MR_Integer CastX_25 = (MR_Integer) (HeadVar__1_1);
              MR_Integer CastY_26 = (MR_Integer) (HeadVar__2_2);

              succeeded = (CastY_26 == CastX_25);
            }
            break;
          case (MR_Integer) 2:
            {
              MR_Integer CastX_31 = (MR_Integer) (HeadVar__1_1);
              MR_Integer CastY_32 = (MR_Integer) (HeadVar__2_2);

              succeeded = (CastY_32 == CastX_31);
            }
            break;
          case (MR_Integer) 3:
            {
              MR_Integer CastX_41 = (MR_Integer) (HeadVar__1_1);
              MR_Integer CastY_42 = (MR_Integer) (HeadVar__2_2);

              succeeded = (CastY_42 == CastX_41);
            }
            break;
          case (MR_Integer) 4:
            {
              MR_Integer CastX_63 = (MR_Integer) (HeadVar__1_1);
              MR_Integer CastY_64 = (MR_Integer) (HeadVar__2_2);

              succeeded = (CastY_64 == CastX_63);
            }
            break;
          case (MR_Integer) 5:
            {
              MR_Integer CastX_71 = (MR_Integer) (HeadVar__1_1);
              MR_Integer CastY_72 = (MR_Integer) (HeadVar__2_2);

              succeeded = (CastY_72 == CastX_71);
            }
            break;
          case (MR_Integer) 6:
            {
              MR_Integer CastX_165 = (MR_Integer) (HeadVar__1_1);
              MR_Integer CastY_166 = (MR_Integer) (HeadVar__2_2);

              succeeded = (CastY_166 == CastX_165);
            }
            break;
          case (MR_Integer) 7:
            {
              MR_Integer CastX_167 = (MR_Integer) (HeadVar__1_1);
              MR_Integer CastY_168 = (MR_Integer) (HeadVar__2_2);

              succeeded = (CastY_168 == CastX_167);
            }
            break;
          case (MR_Integer) 8:
            {
              MR_Integer CastX_169 = (MR_Integer) (HeadVar__1_1);
              MR_Integer CastY_170 = (MR_Integer) (HeadVar__2_2);

              succeeded = (CastY_170 == CastX_169);
            }
            break;
          case (MR_Integer) 9:
            {
              MR_Integer CastX_173 = (MR_Integer) (HeadVar__1_1);
              MR_Integer CastY_174 = (MR_Integer) (HeadVar__2_2);

              succeeded = (CastY_174 == CastX_173);
            }
            break;
        }
        break;
      case (MR_Integer) 1:
        {
          MR_String ArgX1_3 = ((MR_String) ((MR_hl_field(1, HeadVar__1_1, (MR_Integer) 0))));
          MR_String ArgY1_4;
          MR_Integer ArgX2_5 = ((MR_Integer) ((MR_hl_field(1, HeadVar__1_1, (MR_Integer) 1))));
          MR_Integer ArgY2_6;
          MR_Integer ArgX3_7 = ((MR_Integer) ((MR_hl_field(1, HeadVar__1_1, (MR_Integer) 2))));
          MR_Integer ArgY3_8;
          MR_Integer ArgX4_9 = ((MR_Integer) ((MR_hl_field(1, HeadVar__1_1, (MR_Integer) 3))));
          MR_Integer ArgY4_10;

          succeeded = ((MR_tag((MR_Word) HeadVar__2_2)) == (MR_Integer) 1);
          if (succeeded)
          {
            ArgY1_4 = ((MR_String) ((MR_hl_field(1, HeadVar__2_2, (MR_Integer) 0))));
            ArgY2_6 = ((MR_Integer) ((MR_hl_field(1, HeadVar__2_2, (MR_Integer) 1))));
            ArgY3_8 = ((MR_Integer) ((MR_hl_field(1, HeadVar__2_2, (MR_Integer) 2))));
            ArgY4_10 = ((MR_Integer) ((MR_hl_field(1, HeadVar__2_2, (MR_Integer) 3))));
            succeeded = (strcmp(ArgX1_3, ArgY1_4) == 0);
            if (succeeded)
            {
              succeeded = (ArgX2_5 == ArgY2_6);
              if (succeeded)
              {
                succeeded = (ArgX3_7 == ArgY3_8);
                if (succeeded)
                  succeeded = (ArgX4_9 == ArgY4_10);
              }
            }
          }
        }
        break;
      case (MR_Integer) 2:
        {
          MR_Word TypeInfo_186_186;
          MR_Integer ArgX1_13 = ((MR_Integer) ((MR_hl_field(2, HeadVar__1_1, (MR_Integer) 0))));
          MR_Integer ArgY1_14;
          MR_Word ArgX2_15 = ((MR_Unsigned) ((MR_hl_field(2, HeadVar__1_1, (MR_Integer) 1))) & (MR_Integer) 7);
          MR_Word ArgY2_16;
          MR_Integer ArgX3_17 = ((MR_Integer) ((MR_hl_field(2, HeadVar__1_1, (MR_Integer) 2))));
          MR_Integer ArgY3_18;
          MR_Integer ArgX4_19 = ((MR_Integer) ((MR_hl_field(2, HeadVar__1_1, (MR_Integer) 3))));
          MR_Integer ArgY4_20;
          MR_Integer ArgX5_21 = ((MR_Integer) ((MR_hl_field(2, HeadVar__1_1, (MR_Integer) 4))));
          MR_Integer ArgY5_22;
          MR_Word ArgX6_23 = ((MR_Word) ((MR_hl_field(2, HeadVar__1_1, (MR_Integer) 5))));
          MR_Word ArgY6_24;

          succeeded = ((MR_tag((MR_Word) HeadVar__2_2)) == (MR_Integer) 2);
          if (succeeded)
          {
            ArgY1_14 = ((MR_Integer) ((MR_hl_field(2, HeadVar__2_2, (MR_Integer) 0))));
            ArgY2_16 = ((MR_Unsigned) ((MR_hl_field(2, HeadVar__2_2, (MR_Integer) 1))) & (MR_Integer) 7);
            ArgY3_18 = ((MR_Integer) ((MR_hl_field(2, HeadVar__2_2, (MR_Integer) 2))));
            ArgY4_20 = ((MR_Integer) ((MR_hl_field(2, HeadVar__2_2, (MR_Integer) 3))));
            ArgY5_22 = ((MR_Integer) ((MR_hl_field(2, HeadVar__2_2, (MR_Integer) 4))));
            ArgY6_24 = ((MR_Word) ((MR_hl_field(2, HeadVar__2_2, (MR_Integer) 5))));
            succeeded = (ArgX1_13 == ArgY1_14);
            if (succeeded)
            {
              succeeded = (ArgX2_15 == ArgY2_16);
              if (succeeded)
              {
                succeeded = (ArgX3_17 == ArgY3_18);
                if (succeeded)
                {
                  succeeded = (ArgX4_19 == ArgY4_20);
                  if (succeeded)
                  {
                    succeeded = (ArgX5_21 == ArgY5_22);
                    if (succeeded)
                    {
                      TypeInfo_186_186 = (MR_Word) (&bytecode_backend__bytecode_scalar_common_1[1]);
                      succeeded = mercury__builtin__unify_2_p_0(TypeInfo_186_186, ((MR_Box) (ArgX6_23)), ((MR_Box) (ArgY6_24)));
                    }
                  }
                }
              }
            }
          }
        }
        break;
      case (MR_Integer) 3:
        switch (((MR_Integer) ((MR_hl_field(3, HeadVar__1_1, (MR_Integer) 0))))) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
            {
              MR_Integer ArgX1_27 = ((MR_Integer) ((MR_hl_field(3, HeadVar__1_1, (MR_Integer) 1))));
              MR_Integer ArgY1_28;

              succeeded = ((((MR_tag((MR_Word) HeadVar__2_2)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(3, HeadVar__2_2, (MR_Integer) 0)))) == (MR_Integer) 0)));
              if (succeeded)
              {
                ArgY1_28 = ((MR_Integer) ((MR_hl_field(3, HeadVar__2_2, (MR_Integer) 1))));
                succeeded = (ArgX1_27 == ArgY1_28);
              }
            }
            break;
          case (MR_Integer) 1:
            {
              MR_Integer ArgX1_29 = ((MR_Integer) ((MR_hl_field(3, HeadVar__1_1, (MR_Integer) 1))));
              MR_Integer ArgY1_30;

              succeeded = ((((MR_tag((MR_Word) HeadVar__2_2)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(3, HeadVar__2_2, (MR_Integer) 0)))) == (MR_Integer) 1)));
              if (succeeded)
              {
                ArgY1_30 = ((MR_Integer) ((MR_hl_field(3, HeadVar__2_2, (MR_Integer) 1))));
                succeeded = (ArgX1_29 == ArgY1_30);
              }
            }
            break;
          case (MR_Integer) 2:
            {
              MR_Integer ArgX1_33 = ((MR_Integer) ((MR_hl_field(3, HeadVar__1_1, (MR_Integer) 1))));
              MR_Integer ArgY1_34;

              succeeded = ((((MR_tag((MR_Word) HeadVar__2_2)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(3, HeadVar__2_2, (MR_Integer) 0)))) == (MR_Integer) 2)));
              if (succeeded)
              {
                ArgY1_34 = ((MR_Integer) ((MR_hl_field(3, HeadVar__2_2, (MR_Integer) 1))));
                succeeded = (ArgX1_33 == ArgY1_34);
              }
            }
            break;
          case (MR_Integer) 3:
            {
              MR_Integer ArgX1_35 = ((MR_Integer) ((MR_hl_field(3, HeadVar__1_1, (MR_Integer) 1))));
              MR_Integer ArgY1_36;

              succeeded = ((((MR_tag((MR_Word) HeadVar__2_2)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(3, HeadVar__2_2, (MR_Integer) 0)))) == (MR_Integer) 3)));
              if (succeeded)
              {
                ArgY1_36 = ((MR_Integer) ((MR_hl_field(3, HeadVar__2_2, (MR_Integer) 1))));
                succeeded = (ArgX1_35 == ArgY1_36);
              }
            }
            break;
          case (MR_Integer) 4:
            {
              MR_Integer ArgX1_37 = ((MR_Integer) ((MR_hl_field(3, HeadVar__1_1, (MR_Integer) 1))));
              MR_Integer ArgY1_38;
              MR_Integer ArgX2_39 = ((MR_Integer) ((MR_hl_field(3, HeadVar__1_1, (MR_Integer) 2))));
              MR_Integer ArgY2_40;

              succeeded = ((((MR_tag((MR_Word) HeadVar__2_2)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(3, HeadVar__2_2, (MR_Integer) 0)))) == (MR_Integer) 4)));
              if (succeeded)
              {
                ArgY1_38 = ((MR_Integer) ((MR_hl_field(3, HeadVar__2_2, (MR_Integer) 1))));
                ArgY2_40 = ((MR_Integer) ((MR_hl_field(3, HeadVar__2_2, (MR_Integer) 2))));
                succeeded = (ArgX1_37 == ArgY1_38);
                if (succeeded)
                  succeeded = (ArgX2_39 == ArgY2_40);
              }
            }
            break;
          case (MR_Integer) 5:
            {
              MR_Word TypeInfo_187_187;
              MR_Word ArgX1_43 = ((MR_Word) ((MR_hl_field(3, HeadVar__1_1, (MR_Integer) 1))));
              MR_Word ArgY1_44;
              MR_Word ArgX2_45 = ((MR_Word) ((MR_hl_field(3, HeadVar__1_1, (MR_Integer) 2))));
              MR_Word ArgY2_46;
              MR_Integer ArgX3_47 = ((MR_Integer) ((MR_hl_field(3, HeadVar__1_1, (MR_Integer) 3))));
              MR_Integer ArgY3_48;

              succeeded = ((((MR_tag((MR_Word) HeadVar__2_2)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(3, HeadVar__2_2, (MR_Integer) 0)))) == (MR_Integer) 5)));
              if (succeeded)
              {
                ArgY1_44 = ((MR_Word) ((MR_hl_field(3, HeadVar__2_2, (MR_Integer) 1))));
                ArgY2_46 = ((MR_Word) ((MR_hl_field(3, HeadVar__2_2, (MR_Integer) 2))));
                ArgY3_48 = ((MR_Integer) ((MR_hl_field(3, HeadVar__2_2, (MR_Integer) 3))));
                succeeded = bytecode_backend__bytecode____Unify____byte_cons_id_0_0(ArgX1_43, ArgY1_44);
                if (succeeded)
                {
                  TypeInfo_187_187 = (MR_Word) (&bytecode_backend__bytecode_scalar_common_1[0]);
                  succeeded = mercury__builtin__unify_2_p_0(TypeInfo_187_187, ((MR_Box) (ArgX2_45)), ((MR_Box) (ArgY2_46)));
                  if (succeeded)
                    succeeded = (ArgX3_47 == ArgY3_48);
                }
              }
            }
            break;
          case (MR_Integer) 6:
            {
              MR_Integer ArgX1_49 = ((MR_Integer) ((MR_hl_field(3, HeadVar__1_1, (MR_Integer) 1))));
              MR_Integer ArgY1_50;

              succeeded = ((((MR_tag((MR_Word) HeadVar__2_2)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(3, HeadVar__2_2, (MR_Integer) 0)))) == (MR_Integer) 6)));
              if (succeeded)
              {
                ArgY1_50 = ((MR_Integer) ((MR_hl_field(3, HeadVar__2_2, (MR_Integer) 1))));
                succeeded = (ArgX1_49 == ArgY1_50);
              }
            }
            break;
          case (MR_Integer) 7:
            {
              MR_Integer ArgX1_51 = ((MR_Integer) ((MR_hl_field(3, HeadVar__1_1, (MR_Integer) 1))));
              MR_Integer ArgY1_52;
              MR_Integer ArgX2_53 = ((MR_Integer) ((MR_hl_field(3, HeadVar__1_1, (MR_Integer) 2))));
              MR_Integer ArgY2_54;
              MR_Integer ArgX3_55 = ((MR_Integer) ((MR_hl_field(3, HeadVar__1_1, (MR_Integer) 3))));
              MR_Integer ArgY3_56;

              succeeded = ((((MR_tag((MR_Word) HeadVar__2_2)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(3, HeadVar__2_2, (MR_Integer) 0)))) == (MR_Integer) 7)));
              if (succeeded)
              {
                ArgY1_52 = ((MR_Integer) ((MR_hl_field(3, HeadVar__2_2, (MR_Integer) 1))));
                ArgY2_54 = ((MR_Integer) ((MR_hl_field(3, HeadVar__2_2, (MR_Integer) 2))));
                ArgY3_56 = ((MR_Integer) ((MR_hl_field(3, HeadVar__2_2, (MR_Integer) 3))));
                succeeded = (ArgX1_51 == ArgY1_52);
                if (succeeded)
                {
                  succeeded = (ArgX2_53 == ArgY2_54);
                  if (succeeded)
                    succeeded = (ArgX3_55 == ArgY3_56);
                }
              }
            }
            break;
          case (MR_Integer) 8:
            {
              MR_Integer ArgX1_57 = ((MR_Integer) ((MR_hl_field(3, HeadVar__1_1, (MR_Integer) 1))));
              MR_Integer ArgY1_58;

              succeeded = ((((MR_tag((MR_Word) HeadVar__2_2)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(3, HeadVar__2_2, (MR_Integer) 0)))) == (MR_Integer) 8)));
              if (succeeded)
              {
                ArgY1_58 = ((MR_Integer) ((MR_hl_field(3, HeadVar__2_2, (MR_Integer) 1))));
                succeeded = (ArgX1_57 == ArgY1_58);
              }
            }
            break;
          case (MR_Integer) 9:
            {
              MR_Integer ArgX1_59 = ((MR_Integer) ((MR_hl_field(3, HeadVar__1_1, (MR_Integer) 1))));
              MR_Integer ArgY1_60;

              succeeded = ((((MR_tag((MR_Word) HeadVar__2_2)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(3, HeadVar__2_2, (MR_Integer) 0)))) == (MR_Integer) 9)));
              if (succeeded)
              {
                ArgY1_60 = ((MR_Integer) ((MR_hl_field(3, HeadVar__2_2, (MR_Integer) 1))));
                succeeded = (ArgX1_59 == ArgY1_60);
              }
            }
            break;
          case (MR_Integer) 10:
            {
              MR_Integer ArgX1_61 = ((MR_Integer) ((MR_hl_field(3, HeadVar__1_1, (MR_Integer) 1))));
              MR_Integer ArgY1_62;

              succeeded = ((((MR_tag((MR_Word) HeadVar__2_2)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(3, HeadVar__2_2, (MR_Integer) 0)))) == (MR_Integer) 10)));
              if (succeeded)
              {
                ArgY1_62 = ((MR_Integer) ((MR_hl_field(3, HeadVar__2_2, (MR_Integer) 1))));
                succeeded = (ArgX1_61 == ArgY1_62);
              }
            }
            break;
          case (MR_Integer) 11:
            {
              MR_Integer ArgX1_65 = ((MR_Integer) ((MR_hl_field(3, HeadVar__1_1, (MR_Integer) 1))));
              MR_Integer ArgY1_66;
              MR_Integer ArgX2_67 = ((MR_Integer) ((MR_hl_field(3, HeadVar__1_1, (MR_Integer) 2))));
              MR_Integer ArgY2_68;

              succeeded = ((((MR_tag((MR_Word) HeadVar__2_2)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(3, HeadVar__2_2, (MR_Integer) 0)))) == (MR_Integer) 11)));
              if (succeeded)
              {
                ArgY1_66 = ((MR_Integer) ((MR_hl_field(3, HeadVar__2_2, (MR_Integer) 1))));
                ArgY2_68 = ((MR_Integer) ((MR_hl_field(3, HeadVar__2_2, (MR_Integer) 2))));
                succeeded = (ArgX1_65 == ArgY1_66);
                if (succeeded)
                  succeeded = (ArgX2_67 == ArgY2_68);
              }
            }
            break;
          case (MR_Integer) 12:
            {
              MR_Integer ArgX1_69 = ((MR_Integer) ((MR_hl_field(3, HeadVar__1_1, (MR_Integer) 1))));
              MR_Integer ArgY1_70;

              succeeded = ((((MR_tag((MR_Word) HeadVar__2_2)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(3, HeadVar__2_2, (MR_Integer) 0)))) == (MR_Integer) 12)));
              if (succeeded)
              {
                ArgY1_70 = ((MR_Integer) ((MR_hl_field(3, HeadVar__2_2, (MR_Integer) 1))));
                succeeded = (ArgX1_69 == ArgY1_70);
              }
            }
            break;
          case (MR_Integer) 13:
            {
              MR_Integer ArgX1_73 = ((MR_Integer) ((MR_hl_field(3, HeadVar__1_1, (MR_Integer) 1))));
              MR_Integer ArgY1_74;

              succeeded = ((((MR_tag((MR_Word) HeadVar__2_2)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(3, HeadVar__2_2, (MR_Integer) 0)))) == (MR_Integer) 13)));
              if (succeeded)
              {
                ArgY1_74 = ((MR_Integer) ((MR_hl_field(3, HeadVar__2_2, (MR_Integer) 1))));
                succeeded = (ArgX1_73 == ArgY1_74);
              }
            }
            break;
          case (MR_Integer) 14:
            {
              MR_Integer ArgX1_75 = ((MR_Integer) ((MR_hl_field(3, HeadVar__1_1, (MR_Integer) 1))));
              MR_Integer ArgY1_76;

              succeeded = ((((MR_tag((MR_Word) HeadVar__2_2)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(3, HeadVar__2_2, (MR_Integer) 0)))) == (MR_Integer) 14)));
              if (succeeded)
              {
                ArgY1_76 = ((MR_Integer) ((MR_hl_field(3, HeadVar__2_2, (MR_Integer) 1))));
                succeeded = (ArgX1_75 == ArgY1_76);
              }
            }
            break;
          case (MR_Integer) 15:
            {
              MR_Integer ArgX1_77 = ((MR_Integer) ((MR_hl_field(3, HeadVar__1_1, (MR_Integer) 1))));
              MR_Integer ArgY1_78;
              MR_Integer ArgX2_79 = ((MR_Integer) ((MR_hl_field(3, HeadVar__1_1, (MR_Integer) 2))));
              MR_Integer ArgY2_80;

              succeeded = ((((MR_tag((MR_Word) HeadVar__2_2)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(3, HeadVar__2_2, (MR_Integer) 0)))) == (MR_Integer) 15)));
              if (succeeded)
              {
                ArgY1_78 = ((MR_Integer) ((MR_hl_field(3, HeadVar__2_2, (MR_Integer) 1))));
                ArgY2_80 = ((MR_Integer) ((MR_hl_field(3, HeadVar__2_2, (MR_Integer) 2))));
                succeeded = (ArgX1_77 == ArgY1_78);
                if (succeeded)
                  succeeded = (ArgX2_79 == ArgY2_80);
              }
            }
            break;
          case (MR_Integer) 16:
            {
              MR_Integer ArgX1_81 = ((MR_Integer) ((MR_hl_field(3, HeadVar__1_1, (MR_Integer) 1))));
              MR_Integer ArgY1_82;
              MR_Integer ArgX2_83 = ((MR_Integer) ((MR_hl_field(3, HeadVar__1_1, (MR_Integer) 2))));
              MR_Integer ArgY2_84;
              MR_Word ArgX3_85 = ((MR_Unsigned) ((MR_hl_field(3, HeadVar__1_1, (MR_Integer) 3))) & (MR_Integer) 7);
              MR_Word ArgY3_86;

              succeeded = ((((MR_tag((MR_Word) HeadVar__2_2)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(3, HeadVar__2_2, (MR_Integer) 0)))) == (MR_Integer) 16)));
              if (succeeded)
              {
                ArgY1_82 = ((MR_Integer) ((MR_hl_field(3, HeadVar__2_2, (MR_Integer) 1))));
                ArgY2_84 = ((MR_Integer) ((MR_hl_field(3, HeadVar__2_2, (MR_Integer) 2))));
                ArgY3_86 = ((MR_Unsigned) ((MR_hl_field(3, HeadVar__2_2, (MR_Integer) 3))) & (MR_Integer) 7);
                succeeded = (ArgX1_81 == ArgY1_82);
                if (succeeded)
                {
                  succeeded = (ArgX2_83 == ArgY2_84);
                  if (succeeded)
                    succeeded = (ArgX3_85 == ArgY3_86);
                }
              }
            }
            break;
          case (MR_Integer) 17:
            {
              MR_Word TypeInfo_184_184;
              MR_Integer ArgX1_87 = ((MR_Integer) ((MR_hl_field(3, HeadVar__1_1, (MR_Integer) 1))));
              MR_Integer ArgY1_88;
              MR_Word ArgX2_89 = ((MR_Word) ((MR_hl_field(3, HeadVar__1_1, (MR_Integer) 2))));
              MR_Word ArgY2_90;
              MR_Word ArgX3_91 = ((MR_Word) ((MR_hl_field(3, HeadVar__1_1, (MR_Integer) 3))));
              MR_Word ArgY3_92;

              succeeded = ((((MR_tag((MR_Word) HeadVar__2_2)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(3, HeadVar__2_2, (MR_Integer) 0)))) == (MR_Integer) 17)));
              if (succeeded)
              {
                ArgY1_88 = ((MR_Integer) ((MR_hl_field(3, HeadVar__2_2, (MR_Integer) 1))));
                ArgY2_90 = ((MR_Word) ((MR_hl_field(3, HeadVar__2_2, (MR_Integer) 2))));
                ArgY3_92 = ((MR_Word) ((MR_hl_field(3, HeadVar__2_2, (MR_Integer) 3))));
                succeeded = (ArgX1_87 == ArgY1_88);
                if (succeeded)
                {
                  succeeded = bytecode_backend__bytecode____Unify____byte_cons_id_0_0(ArgX2_89, ArgY2_90);
                  if (succeeded)
                  {
                    TypeInfo_184_184 = (MR_Word) (&bytecode_backend__bytecode_scalar_common_1[2]);
                    succeeded = mercury__builtin__unify_2_p_0(TypeInfo_184_184, ((MR_Box) (ArgX3_91)), ((MR_Box) (ArgY3_92)));
                  }
                }
              }
            }
            break;
          case (MR_Integer) 18:
            {
              MR_Word TypeInfo_185_185;
              MR_Integer ArgX1_93 = ((MR_Integer) ((MR_hl_field(3, HeadVar__1_1, (MR_Integer) 1))));
              MR_Integer ArgY1_94;
              MR_Word ArgX2_95 = ((MR_Word) ((MR_hl_field(3, HeadVar__1_1, (MR_Integer) 2))));
              MR_Word ArgY2_96;
              MR_Word ArgX3_97 = ((MR_Word) ((MR_hl_field(3, HeadVar__1_1, (MR_Integer) 3))));
              MR_Word ArgY3_98;

              succeeded = ((((MR_tag((MR_Word) HeadVar__2_2)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(3, HeadVar__2_2, (MR_Integer) 0)))) == (MR_Integer) 18)));
              if (succeeded)
              {
                ArgY1_94 = ((MR_Integer) ((MR_hl_field(3, HeadVar__2_2, (MR_Integer) 1))));
                ArgY2_96 = ((MR_Word) ((MR_hl_field(3, HeadVar__2_2, (MR_Integer) 2))));
                ArgY3_98 = ((MR_Word) ((MR_hl_field(3, HeadVar__2_2, (MR_Integer) 3))));
                succeeded = (ArgX1_93 == ArgY1_94);
                if (succeeded)
                {
                  succeeded = bytecode_backend__bytecode____Unify____byte_cons_id_0_0(ArgX2_95, ArgY2_96);
                  if (succeeded)
                  {
                    TypeInfo_185_185 = (MR_Word) (&bytecode_backend__bytecode_scalar_common_1[2]);
                    succeeded = mercury__builtin__unify_2_p_0(TypeInfo_185_185, ((MR_Box) (ArgX3_97)), ((MR_Box) (ArgY3_98)));
                  }
                }
              }
            }
            break;
          case (MR_Integer) 19:
            {
              MR_Word TypeInfo_182_182;
              MR_Integer ArgX1_99 = ((MR_Integer) ((MR_hl_field(3, HeadVar__1_1, (MR_Integer) 1))));
              MR_Integer ArgY1_100;
              MR_Word ArgX2_101 = ((MR_Word) ((MR_hl_field(3, HeadVar__1_1, (MR_Integer) 2))));
              MR_Word ArgY2_102;
              MR_Word ArgX3_103 = ((MR_Word) ((MR_hl_field(3, HeadVar__1_1, (MR_Integer) 3))));
              MR_Word ArgY3_104;

              succeeded = ((((MR_tag((MR_Word) HeadVar__2_2)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(3, HeadVar__2_2, (MR_Integer) 0)))) == (MR_Integer) 19)));
              if (succeeded)
              {
                ArgY1_100 = ((MR_Integer) ((MR_hl_field(3, HeadVar__2_2, (MR_Integer) 1))));
                ArgY2_102 = ((MR_Word) ((MR_hl_field(3, HeadVar__2_2, (MR_Integer) 2))));
                ArgY3_104 = ((MR_Word) ((MR_hl_field(3, HeadVar__2_2, (MR_Integer) 3))));
                succeeded = (ArgX1_99 == ArgY1_100);
                if (succeeded)
                {
                  succeeded = bytecode_backend__bytecode____Unify____byte_cons_id_0_0(ArgX2_101, ArgY2_102);
                  if (succeeded)
                  {
                    TypeInfo_182_182 = (MR_Word) (&bytecode_backend__bytecode_scalar_common_1[3]);
                    succeeded = mercury__builtin__unify_2_p_0(TypeInfo_182_182, ((MR_Box) (ArgX3_103)), ((MR_Box) (ArgY3_104)));
                  }
                }
              }
            }
            break;
          case (MR_Integer) 20:
            {
              MR_Word TypeInfo_183_183;
              MR_Integer ArgX1_105 = ((MR_Integer) ((MR_hl_field(3, HeadVar__1_1, (MR_Integer) 1))));
              MR_Integer ArgY1_106;
              MR_Word ArgX2_107 = ((MR_Word) ((MR_hl_field(3, HeadVar__1_1, (MR_Integer) 2))));
              MR_Word ArgY2_108;
              MR_Word ArgX3_109 = ((MR_Word) ((MR_hl_field(3, HeadVar__1_1, (MR_Integer) 3))));
              MR_Word ArgY3_110;

              succeeded = ((((MR_tag((MR_Word) HeadVar__2_2)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(3, HeadVar__2_2, (MR_Integer) 0)))) == (MR_Integer) 20)));
              if (succeeded)
              {
                ArgY1_106 = ((MR_Integer) ((MR_hl_field(3, HeadVar__2_2, (MR_Integer) 1))));
                ArgY2_108 = ((MR_Word) ((MR_hl_field(3, HeadVar__2_2, (MR_Integer) 2))));
                ArgY3_110 = ((MR_Word) ((MR_hl_field(3, HeadVar__2_2, (MR_Integer) 3))));
                succeeded = (ArgX1_105 == ArgY1_106);
                if (succeeded)
                {
                  succeeded = bytecode_backend__bytecode____Unify____byte_cons_id_0_0(ArgX2_107, ArgY2_108);
                  if (succeeded)
                  {
                    TypeInfo_183_183 = (MR_Word) (&bytecode_backend__bytecode_scalar_common_1[3]);
                    succeeded = mercury__builtin__unify_2_p_0(TypeInfo_183_183, ((MR_Box) (ArgX3_109)), ((MR_Box) (ArgY3_110)));
                  }
                }
              }
            }
            break;
          case (MR_Integer) 21:
            {
              MR_Integer ArgX2_113 = ((MR_Integer) ((MR_hl_field(3, HeadVar__1_1, (MR_Integer) 2))));
              MR_Integer ArgY2_114;
              MR_Integer ArgX3_115 = ((MR_Integer) ((MR_hl_field(3, HeadVar__1_1, (MR_Integer) 3))));
              MR_Integer ArgY3_116;

              succeeded = ((((MR_tag((MR_Word) HeadVar__2_2)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(3, HeadVar__2_2, (MR_Integer) 0)))) == (MR_Integer) 21)));
              if (succeeded)
              {
                ArgY2_114 = ((MR_Integer) ((MR_hl_field(3, HeadVar__2_2, (MR_Integer) 2))));
                ArgY3_116 = ((MR_Integer) ((MR_hl_field(3, HeadVar__2_2, (MR_Integer) 3))));
                succeeded = (ArgX2_113 == ArgY2_114);
                if (succeeded)
                  succeeded = (ArgX3_115 == ArgY3_116);
              }
            }
            break;
          case (MR_Integer) 22:
            {
              MR_Integer ArgX2_119 = ((MR_Integer) ((MR_hl_field(3, HeadVar__1_1, (MR_Integer) 2))));
              MR_Integer ArgY2_120;
              MR_Integer ArgX3_121 = ((MR_Integer) ((MR_hl_field(3, HeadVar__1_1, (MR_Integer) 3))));
              MR_Integer ArgY3_122;

              succeeded = ((((MR_tag((MR_Word) HeadVar__2_2)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(3, HeadVar__2_2, (MR_Integer) 0)))) == (MR_Integer) 22)));
              if (succeeded)
              {
                ArgY2_120 = ((MR_Integer) ((MR_hl_field(3, HeadVar__2_2, (MR_Integer) 2))));
                ArgY3_122 = ((MR_Integer) ((MR_hl_field(3, HeadVar__2_2, (MR_Integer) 3))));
                succeeded = (ArgX2_119 == ArgY2_120);
                if (succeeded)
                  succeeded = (ArgX3_121 == ArgY3_122);
              }
            }
            break;
          case (MR_Integer) 23:
            {
              MR_Word ArgX1_123 = ((MR_Word) ((MR_hl_field(3, HeadVar__1_1, (MR_Integer) 1))));
              MR_Word ArgY1_124;
              MR_String ArgX2_125 = ((MR_String) ((MR_hl_field(3, HeadVar__1_1, (MR_Integer) 2))));
              MR_String ArgY2_126;
              MR_Integer ArgX3_127 = ((MR_Integer) ((MR_hl_field(3, HeadVar__1_1, (MR_Integer) 3))));
              MR_Integer ArgY3_128;
              MR_Integer ArgX4_129 = ((MR_Integer) ((MR_hl_field(3, HeadVar__1_1, (MR_Integer) 4))));
              MR_Integer ArgY4_130;
              MR_Integer ArgX5_131 = ((MR_Integer) ((MR_hl_field(3, HeadVar__1_1, (MR_Integer) 5))));
              MR_Integer ArgY5_132;

              succeeded = ((((MR_tag((MR_Word) HeadVar__2_2)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(3, HeadVar__2_2, (MR_Integer) 0)))) == (MR_Integer) 23)));
              if (succeeded)
              {
                ArgY1_124 = ((MR_Word) ((MR_hl_field(3, HeadVar__2_2, (MR_Integer) 1))));
                ArgY2_126 = ((MR_String) ((MR_hl_field(3, HeadVar__2_2, (MR_Integer) 2))));
                ArgY3_128 = ((MR_Integer) ((MR_hl_field(3, HeadVar__2_2, (MR_Integer) 3))));
                ArgY4_130 = ((MR_Integer) ((MR_hl_field(3, HeadVar__2_2, (MR_Integer) 4))));
                ArgY5_132 = ((MR_Integer) ((MR_hl_field(3, HeadVar__2_2, (MR_Integer) 5))));
                succeeded = mdbcomp__sym_name____Unify____sym_name_0_0(ArgX1_123, ArgY1_124);
                if (succeeded)
                {
                  succeeded = (strcmp(ArgX2_125, ArgY2_126) == 0);
                  if (succeeded)
                  {
                    succeeded = (ArgX3_127 == ArgY3_128);
                    if (succeeded)
                    {
                      succeeded = (ArgX4_129 == ArgY4_130);
                      if (succeeded)
                        succeeded = (ArgX5_131 == ArgY5_132);
                    }
                  }
                }
              }
            }
            break;
          case (MR_Integer) 24:
            {
              MR_Integer ArgX1_133 = ((MR_Integer) ((MR_hl_field(3, HeadVar__1_1, (MR_Integer) 1))));
              MR_Integer ArgY1_134;
              MR_Integer ArgX2_135 = ((MR_Integer) ((MR_hl_field(3, HeadVar__1_1, (MR_Integer) 2))));
              MR_Integer ArgY2_136;
              MR_Integer ArgX3_137 = ((MR_Integer) ((MR_hl_field(3, HeadVar__1_1, (MR_Integer) 3))));
              MR_Integer ArgY3_138;
              MR_Word ArgX4_139 = ((MR_Unsigned) ((MR_hl_field(3, HeadVar__1_1, (MR_Integer) 4))) & (MR_Integer) 7);
              MR_Word ArgY4_140;

              succeeded = ((((MR_tag((MR_Word) HeadVar__2_2)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(3, HeadVar__2_2, (MR_Integer) 0)))) == (MR_Integer) 24)));
              if (succeeded)
              {
                ArgY1_134 = ((MR_Integer) ((MR_hl_field(3, HeadVar__2_2, (MR_Integer) 1))));
                ArgY2_136 = ((MR_Integer) ((MR_hl_field(3, HeadVar__2_2, (MR_Integer) 2))));
                ArgY3_138 = ((MR_Integer) ((MR_hl_field(3, HeadVar__2_2, (MR_Integer) 3))));
                ArgY4_140 = ((MR_Unsigned) ((MR_hl_field(3, HeadVar__2_2, (MR_Integer) 4))) & (MR_Integer) 7);
                succeeded = (ArgX1_133 == ArgY1_134);
                if (succeeded)
                {
                  succeeded = (ArgX2_135 == ArgY2_136);
                  if (succeeded)
                  {
                    succeeded = (ArgX3_137 == ArgY3_138);
                    if (succeeded)
                      succeeded = (ArgX4_139 == ArgY4_140);
                  }
                }
              }
            }
            break;
          case (MR_Integer) 25:
            {
              MR_Word ArgX1_141 = ((MR_Word) ((MR_hl_field(3, HeadVar__1_1, (MR_Integer) 1))));
              MR_Word ArgY1_142;
              MR_Word ArgX2_143 = ((MR_Word) ((MR_hl_field(3, HeadVar__1_1, (MR_Integer) 2))));
              MR_Word ArgY2_144;
              MR_Word ArgX3_145 = ((MR_Word) ((MR_hl_field(3, HeadVar__1_1, (MR_Integer) 3))));
              MR_Word ArgY3_146;
              MR_Integer ArgX4_147 = ((MR_Integer) ((MR_hl_field(3, HeadVar__1_1, (MR_Integer) 4))));
              MR_Integer ArgY4_148;

              succeeded = ((((MR_tag((MR_Word) HeadVar__2_2)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(3, HeadVar__2_2, (MR_Integer) 0)))) == (MR_Integer) 25)));
              if (succeeded)
              {
                ArgY1_142 = ((MR_Word) ((MR_hl_field(3, HeadVar__2_2, (MR_Integer) 1))));
                ArgY2_144 = ((MR_Word) ((MR_hl_field(3, HeadVar__2_2, (MR_Integer) 2))));
                ArgY3_146 = ((MR_Word) ((MR_hl_field(3, HeadVar__2_2, (MR_Integer) 3))));
                ArgY4_148 = ((MR_Integer) ((MR_hl_field(3, HeadVar__2_2, (MR_Integer) 4))));
                succeeded = backend_libs__builtin_ops____Unify____binary_op_0_0(ArgX1_141, ArgY1_142);
                if (succeeded)
                {
                  succeeded = bytecode_backend__bytecode____Unify____byte_arg_0_0(ArgX2_143, ArgY2_144);
                  if (succeeded)
                  {
                    succeeded = bytecode_backend__bytecode____Unify____byte_arg_0_0(ArgX3_145, ArgY3_146);
                    if (succeeded)
                      succeeded = (ArgX4_147 == ArgY4_148);
                  }
                }
              }
            }
            break;
          case (MR_Integer) 26:
            {
              MR_Word ArgX1_149 = ((MR_Word) ((MR_hl_field(3, HeadVar__1_1, (MR_Integer) 1))));
              MR_Word ArgY1_150;
              MR_Word ArgX2_151 = ((MR_Word) ((MR_hl_field(3, HeadVar__1_1, (MR_Integer) 2))));
              MR_Word ArgY2_152;
              MR_Integer ArgX3_153 = ((MR_Integer) ((MR_hl_field(3, HeadVar__1_1, (MR_Integer) 3))));
              MR_Integer ArgY3_154;

              succeeded = ((((MR_tag((MR_Word) HeadVar__2_2)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(3, HeadVar__2_2, (MR_Integer) 0)))) == (MR_Integer) 26)));
              if (succeeded)
              {
                ArgY1_150 = ((MR_Word) ((MR_hl_field(3, HeadVar__2_2, (MR_Integer) 1))));
                ArgY2_152 = ((MR_Word) ((MR_hl_field(3, HeadVar__2_2, (MR_Integer) 2))));
                ArgY3_154 = ((MR_Integer) ((MR_hl_field(3, HeadVar__2_2, (MR_Integer) 3))));
                succeeded = backend_libs__builtin_ops____Unify____unary_op_0_0(ArgX1_149, ArgY1_150);
                if (succeeded)
                {
                  succeeded = bytecode_backend__bytecode____Unify____byte_arg_0_0(ArgX2_151, ArgY2_152);
                  if (succeeded)
                    succeeded = (ArgX3_153 == ArgY3_154);
                }
              }
            }
            break;
          case (MR_Integer) 27:
            {
              MR_Word ArgX1_155 = ((MR_Word) ((MR_hl_field(3, HeadVar__1_1, (MR_Integer) 1))));
              MR_Word ArgY1_156;
              MR_Word ArgX2_157 = ((MR_Word) ((MR_hl_field(3, HeadVar__1_1, (MR_Integer) 2))));
              MR_Word ArgY2_158;
              MR_Word ArgX3_159 = ((MR_Word) ((MR_hl_field(3, HeadVar__1_1, (MR_Integer) 3))));
              MR_Word ArgY3_160;

              succeeded = ((((MR_tag((MR_Word) HeadVar__2_2)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(3, HeadVar__2_2, (MR_Integer) 0)))) == (MR_Integer) 27)));
              if (succeeded)
              {
                ArgY1_156 = ((MR_Word) ((MR_hl_field(3, HeadVar__2_2, (MR_Integer) 1))));
                ArgY2_158 = ((MR_Word) ((MR_hl_field(3, HeadVar__2_2, (MR_Integer) 2))));
                ArgY3_160 = ((MR_Word) ((MR_hl_field(3, HeadVar__2_2, (MR_Integer) 3))));
                succeeded = backend_libs__builtin_ops____Unify____binary_op_0_0(ArgX1_155, ArgY1_156);
                if (succeeded)
                {
                  succeeded = bytecode_backend__bytecode____Unify____byte_arg_0_0(ArgX2_157, ArgY2_158);
                  if (succeeded)
                    succeeded = bytecode_backend__bytecode____Unify____byte_arg_0_0(ArgX3_159, ArgY3_160);
                }
              }
            }
            break;
          case (MR_Integer) 28:
            {
              MR_Word ArgX1_161 = ((MR_Word) ((MR_hl_field(3, HeadVar__1_1, (MR_Integer) 1))));
              MR_Word ArgY1_162;
              MR_Word ArgX2_163 = ((MR_Word) ((MR_hl_field(3, HeadVar__1_1, (MR_Integer) 2))));
              MR_Word ArgY2_164;

              succeeded = ((((MR_tag((MR_Word) HeadVar__2_2)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(3, HeadVar__2_2, (MR_Integer) 0)))) == (MR_Integer) 28)));
              if (succeeded)
              {
                ArgY1_162 = ((MR_Word) ((MR_hl_field(3, HeadVar__2_2, (MR_Integer) 1))));
                ArgY2_164 = ((MR_Word) ((MR_hl_field(3, HeadVar__2_2, (MR_Integer) 2))));
                succeeded = backend_libs__builtin_ops____Unify____unary_op_0_0(ArgX1_161, ArgY1_162);
                if (succeeded)
                  succeeded = bytecode_backend__bytecode____Unify____byte_arg_0_0(ArgX2_163, ArgY2_164);
              }
            }
            break;
          case (MR_Integer) 29:
            {
              MR_Integer ArgX1_171 = ((MR_Integer) ((MR_hl_field(3, HeadVar__1_1, (MR_Integer) 1))));
              MR_Integer ArgY1_172;

              succeeded = ((((MR_tag((MR_Word) HeadVar__2_2)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(3, HeadVar__2_2, (MR_Integer) 0)))) == (MR_Integer) 29)));
              if (succeeded)
              {
                ArgY1_172 = ((MR_Integer) ((MR_hl_field(3, HeadVar__2_2, (MR_Integer) 1))));
                succeeded = (ArgX1_171 == ArgY1_172);
              }
            }
            break;
        }
        break;
    }
  return succeeded;
}

MR_bool MR_CALL 
bytecode_backend__bytecode____Unify____byte_cons_id_0_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2)
{
  MR_bool succeeded;
  MR_Integer CastX_45 = (MR_Integer) (HeadVar__1_1);
  MR_Integer CastY_46 = (MR_Integer) (HeadVar__2_2);

  succeeded = (CastX_45 == CastY_46);
  if (succeeded)
    succeeded = MR_TRUE;
  else
    switch (MR_tag((MR_Word) HeadVar__1_1)) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        switch (MR_unmkbody(HeadVar__1_1)) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
            {
              MR_Integer CastX_41 = (MR_Integer) (HeadVar__1_1);
              MR_Integer CastY_42 = (MR_Integer) (HeadVar__2_2);

              succeeded = (CastY_42 == CastX_41);
            }
            break;
          case (MR_Integer) 1:
            {
              MR_Integer CastX_43 = (MR_Integer) (HeadVar__1_1);
              MR_Integer CastY_44 = (MR_Integer) (HeadVar__2_2);

              succeeded = (CastY_44 == CastX_43);
            }
            break;
        }
        break;
      case (MR_Integer) 1:
        {
          MR_Word ArgX1_3 = ((MR_Word) ((MR_hl_field(1, HeadVar__1_1, (MR_Integer) 0))));
          MR_Word ArgY1_4;
          MR_String ArgX2_5 = ((MR_String) ((MR_hl_field(1, HeadVar__1_1, (MR_Integer) 1))));
          MR_String ArgY2_6;
          MR_Integer ArgX3_7 = ((MR_Integer) ((MR_hl_field(1, HeadVar__1_1, (MR_Integer) 2))));
          MR_Integer ArgY3_8;
          MR_Word ArgX4_9 = ((MR_Word) ((MR_hl_field(1, HeadVar__1_1, (MR_Integer) 3))));
          MR_Word ArgY4_10;

          succeeded = ((MR_tag((MR_Word) HeadVar__2_2)) == (MR_Integer) 1);
          if (succeeded)
          {
            ArgY1_4 = ((MR_Word) ((MR_hl_field(1, HeadVar__2_2, (MR_Integer) 0))));
            ArgY2_6 = ((MR_String) ((MR_hl_field(1, HeadVar__2_2, (MR_Integer) 1))));
            ArgY3_8 = ((MR_Integer) ((MR_hl_field(1, HeadVar__2_2, (MR_Integer) 2))));
            ArgY4_10 = ((MR_Word) ((MR_hl_field(1, HeadVar__2_2, (MR_Integer) 3))));
            succeeded = mdbcomp__sym_name____Unify____sym_name_0_0(ArgX1_3, ArgY1_4);
            if (succeeded)
            {
              succeeded = (strcmp(ArgX2_5, ArgY2_6) == 0);
              if (succeeded)
              {
                succeeded = (ArgX3_7 == ArgY3_8);
                if (succeeded)
                  succeeded = bytecode_backend__bytecode____Unify____byte_cons_tag_0_0(ArgX4_9, ArgY4_10);
              }
            }
          }
        }
        break;
      case (MR_Integer) 2:
        {
          MR_Integer ArgX1_11 = ((MR_Integer) ((MR_hl_field(2, HeadVar__1_1, (MR_Integer) 0))));
          MR_Integer ArgY1_12;

          succeeded = ((MR_tag((MR_Word) HeadVar__2_2)) == (MR_Integer) 2);
          if (succeeded)
          {
            ArgY1_12 = ((MR_Integer) ((MR_hl_field(2, HeadVar__2_2, (MR_Integer) 0))));
            succeeded = (ArgX1_11 == ArgY1_12);
          }
        }
        break;
      case (MR_Integer) 3:
        switch (((MR_Integer) ((MR_hl_field(3, HeadVar__1_1, (MR_Integer) 0))))) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
            {
              MR_String ArgX1_13 = ((MR_String) ((MR_hl_field(3, HeadVar__1_1, (MR_Integer) 1))));
              MR_String ArgY1_14;

              succeeded = ((((MR_tag((MR_Word) HeadVar__2_2)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(3, HeadVar__2_2, (MR_Integer) 0)))) == (MR_Integer) 0)));
              if (succeeded)
              {
                ArgY1_14 = ((MR_String) ((MR_hl_field(3, HeadVar__2_2, (MR_Integer) 1))));
                succeeded = (strcmp(ArgX1_13, ArgY1_14) == 0);
              }
            }
            break;
          case (MR_Integer) 1:
            {
              MR_Float ArgX1_15 = MR_unbox_float((MR_hl_field(3, HeadVar__1_1, (MR_Integer) 1)));
              MR_Float ArgY1_16;

              succeeded = ((((MR_tag((MR_Word) HeadVar__2_2)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(3, HeadVar__2_2, (MR_Integer) 0)))) == (MR_Integer) 1)));
              if (succeeded)
              {
                ArgY1_16 = MR_unbox_float((MR_hl_field(3, HeadVar__2_2, (MR_Integer) 1)));
                succeeded = (ArgX1_15 == ArgY1_16);
              }
            }
            break;
          case (MR_Integer) 2:
            {
              MR_Char ArgX1_17 = ((MR_Char) (MR_Word) (MR_hl_field(3, HeadVar__1_1, (MR_Integer) 1)));
              MR_Char ArgY1_18;

              succeeded = ((((MR_tag((MR_Word) HeadVar__2_2)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(3, HeadVar__2_2, (MR_Integer) 0)))) == (MR_Integer) 2)));
              if (succeeded)
              {
                ArgY1_18 = ((MR_Char) (MR_Word) (MR_hl_field(3, HeadVar__2_2, (MR_Integer) 1)));
                succeeded = (ArgX1_17 == ArgY1_18);
              }
            }
            break;
          case (MR_Integer) 3:
            {
              MR_Word ArgX1_19 = ((MR_Word) ((MR_hl_field(3, HeadVar__1_1, (MR_Integer) 1))));
              MR_Word ArgY1_20;
              MR_String ArgX2_21 = ((MR_String) ((MR_hl_field(3, HeadVar__1_1, (MR_Integer) 2))));
              MR_String ArgY2_22;
              MR_Integer ArgX3_23 = ((MR_Integer) ((MR_hl_field(3, HeadVar__1_1, (MR_Integer) 3))));
              MR_Integer ArgY3_24;
              MR_Integer ArgX4_25 = ((MR_Integer) ((MR_hl_field(3, HeadVar__1_1, (MR_Integer) 4))));
              MR_Integer ArgY4_26;
              MR_Integer ArgX5_27 = ((MR_Integer) ((MR_hl_field(3, HeadVar__1_1, (MR_Integer) 5))));
              MR_Integer ArgY5_28;

              succeeded = ((((MR_tag((MR_Word) HeadVar__2_2)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(3, HeadVar__2_2, (MR_Integer) 0)))) == (MR_Integer) 3)));
              if (succeeded)
              {
                ArgY1_20 = ((MR_Word) ((MR_hl_field(3, HeadVar__2_2, (MR_Integer) 1))));
                ArgY2_22 = ((MR_String) ((MR_hl_field(3, HeadVar__2_2, (MR_Integer) 2))));
                ArgY3_24 = ((MR_Integer) ((MR_hl_field(3, HeadVar__2_2, (MR_Integer) 3))));
                ArgY4_26 = ((MR_Integer) ((MR_hl_field(3, HeadVar__2_2, (MR_Integer) 4))));
                ArgY5_28 = ((MR_Integer) ((MR_hl_field(3, HeadVar__2_2, (MR_Integer) 5))));
                succeeded = mdbcomp__sym_name____Unify____sym_name_0_0(ArgX1_19, ArgY1_20);
                if (succeeded)
                {
                  succeeded = (strcmp(ArgX2_21, ArgY2_22) == 0);
                  if (succeeded)
                  {
                    succeeded = (ArgX3_23 == ArgY3_24);
                    if (succeeded)
                    {
                      succeeded = (ArgX4_25 == ArgY4_26);
                      if (succeeded)
                        succeeded = (ArgX5_27 == ArgY5_28);
                    }
                  }
                }
              }
            }
            break;
          case (MR_Integer) 4:
            {
              MR_Word ArgX1_29 = ((MR_Word) ((MR_hl_field(3, HeadVar__1_1, (MR_Integer) 1))));
              MR_Word ArgY1_30;
              MR_String ArgX2_31 = ((MR_String) ((MR_hl_field(3, HeadVar__1_1, (MR_Integer) 2))));
              MR_String ArgY2_32;
              MR_Integer ArgX3_33 = ((MR_Integer) ((MR_hl_field(3, HeadVar__1_1, (MR_Integer) 3))));
              MR_Integer ArgY3_34;

              succeeded = ((((MR_tag((MR_Word) HeadVar__2_2)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(3, HeadVar__2_2, (MR_Integer) 0)))) == (MR_Integer) 4)));
              if (succeeded)
              {
                ArgY1_30 = ((MR_Word) ((MR_hl_field(3, HeadVar__2_2, (MR_Integer) 1))));
                ArgY2_32 = ((MR_String) ((MR_hl_field(3, HeadVar__2_2, (MR_Integer) 2))));
                ArgY3_34 = ((MR_Integer) ((MR_hl_field(3, HeadVar__2_2, (MR_Integer) 3))));
                succeeded = mdbcomp__sym_name____Unify____sym_name_0_0(ArgX1_29, ArgY1_30);
                if (succeeded)
                {
                  succeeded = (strcmp(ArgX2_31, ArgY2_32) == 0);
                  if (succeeded)
                    succeeded = (ArgX3_33 == ArgY3_34);
                }
              }
            }
            break;
          case (MR_Integer) 5:
            {
              MR_Word ArgX1_35 = ((MR_Word) ((MR_hl_field(3, HeadVar__1_1, (MR_Integer) 1))));
              MR_Word ArgY1_36;
              MR_Word ArgX2_37 = ((MR_Word) ((MR_hl_field(3, HeadVar__1_1, (MR_Integer) 2))));
              MR_Word ArgY2_38;
              MR_String ArgX3_39 = ((MR_String) ((MR_hl_field(3, HeadVar__1_1, (MR_Integer) 3))));
              MR_String ArgY3_40;

              succeeded = ((((MR_tag((MR_Word) HeadVar__2_2)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(3, HeadVar__2_2, (MR_Integer) 0)))) == (MR_Integer) 5)));
              if (succeeded)
              {
                ArgY1_36 = ((MR_Word) ((MR_hl_field(3, HeadVar__2_2, (MR_Integer) 1))));
                ArgY2_38 = ((MR_Word) ((MR_hl_field(3, HeadVar__2_2, (MR_Integer) 2))));
                ArgY3_40 = ((MR_String) ((MR_hl_field(3, HeadVar__2_2, (MR_Integer) 3))));
                succeeded = mdbcomp__sym_name____Unify____sym_name_0_0(ArgX1_35, ArgY1_36);
                if (succeeded)
                {
                  succeeded = parse_tree__prog_data____Unify____class_id_0_0(ArgX2_37, ArgY2_38);
                  if (succeeded)
                    succeeded = (strcmp(ArgX3_39, ArgY3_40) == 0);
                }
              }
            }
            break;
        }
        break;
    }
  return succeeded;
}

MR_bool MR_CALL 
bytecode_backend__bytecode____Unify____byte_cons_tag_0_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2)
{
  MR_bool succeeded;
  MR_Integer CastX_17 = (MR_Integer) (HeadVar__1_1);
  MR_Integer CastY_18 = (MR_Integer) (HeadVar__2_2);

  succeeded = (CastX_17 == CastY_18);
  if (succeeded)
    succeeded = MR_TRUE;
  else
    switch (MR_tag((MR_Word) HeadVar__1_1)) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        {
          MR_Integer CastX_3 = (MR_Integer) (HeadVar__1_1);
          MR_Integer CastY_4 = (MR_Integer) (HeadVar__2_2);

          succeeded = (CastY_4 == CastX_3);
        }
        break;
      case (MR_Integer) 1:
        {
          MR_Integer ArgX1_5 = ((MR_Integer) ((MR_hl_field(1, HeadVar__1_1, (MR_Integer) 0))));
          MR_Integer ArgY1_6;

          succeeded = ((MR_tag((MR_Word) HeadVar__2_2)) == (MR_Integer) 1);
          if (succeeded)
          {
            ArgY1_6 = ((MR_Integer) ((MR_hl_field(1, HeadVar__2_2, (MR_Integer) 0))));
            succeeded = (ArgX1_5 == ArgY1_6);
          }
        }
        break;
      case (MR_Integer) 2:
        {
          MR_Integer ArgX1_7 = ((MR_Integer) ((MR_hl_field(2, HeadVar__1_1, (MR_Integer) 0))));
          MR_Integer ArgY1_8;
          MR_Integer ArgX2_9 = ((MR_Integer) ((MR_hl_field(2, HeadVar__1_1, (MR_Integer) 1))));
          MR_Integer ArgY2_10;

          succeeded = ((MR_tag((MR_Word) HeadVar__2_2)) == (MR_Integer) 2);
          if (succeeded)
          {
            ArgY1_8 = ((MR_Integer) ((MR_hl_field(2, HeadVar__2_2, (MR_Integer) 0))));
            ArgY2_10 = ((MR_Integer) ((MR_hl_field(2, HeadVar__2_2, (MR_Integer) 1))));
            succeeded = (ArgX1_7 == ArgY1_8);
            if (succeeded)
              succeeded = (ArgX2_9 == ArgY2_10);
          }
        }
        break;
      case (MR_Integer) 3:
        switch (((MR_Integer) ((MR_hl_field(3, HeadVar__1_1, (MR_Integer) 0))))) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
            {
              MR_Integer ArgX1_11 = ((MR_Integer) ((MR_hl_field(3, HeadVar__1_1, (MR_Integer) 1))));
              MR_Integer ArgY1_12;
              MR_Integer ArgX2_13 = ((MR_Integer) ((MR_hl_field(3, HeadVar__1_1, (MR_Integer) 2))));
              MR_Integer ArgY2_14;

              succeeded = ((((MR_tag((MR_Word) HeadVar__2_2)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(3, HeadVar__2_2, (MR_Integer) 0)))) == (MR_Integer) 0)));
              if (succeeded)
              {
                ArgY1_12 = ((MR_Integer) ((MR_hl_field(3, HeadVar__2_2, (MR_Integer) 1))));
                ArgY2_14 = ((MR_Integer) ((MR_hl_field(3, HeadVar__2_2, (MR_Integer) 2))));
                succeeded = (ArgX1_11 == ArgY1_12);
                if (succeeded)
                  succeeded = (ArgX2_13 == ArgY2_14);
              }
            }
            break;
          case (MR_Integer) 1:
            {
              MR_Integer ArgX1_15 = ((MR_Integer) ((MR_hl_field(3, HeadVar__1_1, (MR_Integer) 1))));
              MR_Integer ArgY1_16;

              succeeded = ((((MR_tag((MR_Word) HeadVar__2_2)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(3, HeadVar__2_2, (MR_Integer) 0)))) == (MR_Integer) 1)));
              if (succeeded)
              {
                ArgY1_16 = ((MR_Integer) ((MR_hl_field(3, HeadVar__2_2, (MR_Integer) 1))));
                succeeded = (ArgX1_15 == ArgY1_16);
              }
            }
            break;
        }
        break;
    }
  return succeeded;
}

void MR_CALL 
bytecode_backend__bytecode____Compare____byte_arg_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3)
{
  MR_bool succeeded;
  MR_Integer CastX_292 = (MR_Integer) (HeadVar__2_2);
  MR_Integer CastY_293 = (MR_Integer) (HeadVar__3_3);

  succeeded = (CastX_292 == CastY_293);
  if (succeeded)
    *HeadVar__1_1 = (MR_Integer) 0;
  else
    switch (MR_tag((MR_Word) HeadVar__2_2)) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        {
          MR_Integer Var_317 = ((MR_Integer) ((MR_hl_field(0, HeadVar__2_2, (MR_Integer) 0))));

          switch (MR_tag((MR_Word) HeadVar__3_3)) {
            default: /*NOTREACHED*/ MR_assert(0);
            case (MR_Integer) 0:
              {
                MR_Integer ArgY1_5 = ((MR_Integer) ((MR_hl_field(0, HeadVar__3_3, (MR_Integer) 0))));

                succeeded = (Var_317 < ArgY1_5);
                if (succeeded)
                  *HeadVar__1_1 = (MR_Integer) 1;
                else
                {
                  succeeded = (Var_317 > ArgY1_5);
                  if (succeeded)
                    *HeadVar__1_1 = (MR_Integer) 2;
                  else
                    *HeadVar__1_1 = (MR_Integer) 0;
                }
              }
              break;
            case (MR_Integer) 1:
              *HeadVar__1_1 = (MR_Integer) 1;
              break;
            case (MR_Integer) 2:
              *HeadVar__1_1 = (MR_Integer) 1;
              break;
            case (MR_Integer) 3:
              switch (((MR_Integer) ((MR_hl_field(3, HeadVar__3_3, (MR_Integer) 0))))) {
                default: /*NOTREACHED*/ MR_assert(0);
                case (MR_Integer) 0:
                  *HeadVar__1_1 = (MR_Integer) 1;
                  break;
                case (MR_Integer) 1:
                  *HeadVar__1_1 = (MR_Integer) 1;
                  break;
                case (MR_Integer) 2:
                  *HeadVar__1_1 = (MR_Integer) 1;
                  break;
                case (MR_Integer) 3:
                  *HeadVar__1_1 = (MR_Integer) 1;
                  break;
                case (MR_Integer) 4:
                  *HeadVar__1_1 = (MR_Integer) 1;
                  break;
                case (MR_Integer) 5:
                  *HeadVar__1_1 = (MR_Integer) 1;
                  break;
                case (MR_Integer) 6:
                  *HeadVar__1_1 = (MR_Integer) 1;
                  break;
                case (MR_Integer) 7:
                  *HeadVar__1_1 = (MR_Integer) 1;
                  break;
                case (MR_Integer) 8:
                  *HeadVar__1_1 = (MR_Integer) 1;
                  break;
              }
              break;
          }
        }
        break;
      case (MR_Integer) 1:
        {
          MR_Integer Var_311 = ((MR_Integer) ((MR_hl_field(1, HeadVar__2_2, (MR_Integer) 0))));

          switch (MR_tag((MR_Word) HeadVar__3_3)) {
            default: /*NOTREACHED*/ MR_assert(0);
            case (MR_Integer) 0:
              *HeadVar__1_1 = (MR_Integer) 2;
              break;
            case (MR_Integer) 1:
              {
                MR_Integer ArgY1_31 = ((MR_Integer) ((MR_hl_field(1, HeadVar__3_3, (MR_Integer) 0))));

                succeeded = (Var_311 < ArgY1_31);
                if (succeeded)
                  *HeadVar__1_1 = (MR_Integer) 1;
                else
                {
                  succeeded = (Var_311 > ArgY1_31);
                  if (succeeded)
                    *HeadVar__1_1 = (MR_Integer) 2;
                  else
                    *HeadVar__1_1 = (MR_Integer) 0;
                }
              }
              break;
            case (MR_Integer) 2:
              *HeadVar__1_1 = (MR_Integer) 1;
              break;
            case (MR_Integer) 3:
              switch (((MR_Integer) ((MR_hl_field(3, HeadVar__3_3, (MR_Integer) 0))))) {
                default: /*NOTREACHED*/ MR_assert(0);
                case (MR_Integer) 0:
                  *HeadVar__1_1 = (MR_Integer) 1;
                  break;
                case (MR_Integer) 1:
                  *HeadVar__1_1 = (MR_Integer) 1;
                  break;
                case (MR_Integer) 2:
                  *HeadVar__1_1 = (MR_Integer) 1;
                  break;
                case (MR_Integer) 3:
                  *HeadVar__1_1 = (MR_Integer) 1;
                  break;
                case (MR_Integer) 4:
                  *HeadVar__1_1 = (MR_Integer) 1;
                  break;
                case (MR_Integer) 5:
                  *HeadVar__1_1 = (MR_Integer) 1;
                  break;
                case (MR_Integer) 6:
                  *HeadVar__1_1 = (MR_Integer) 1;
                  break;
                case (MR_Integer) 7:
                  *HeadVar__1_1 = (MR_Integer) 1;
                  break;
                case (MR_Integer) 8:
                  *HeadVar__1_1 = (MR_Integer) 1;
                  break;
              }
              break;
          }
        }
        break;
      case (MR_Integer) 2:
        {
          MR_Float Var_306 = MR_unbox_float((MR_hl_field(2, HeadVar__2_2, (MR_Integer) 0)));

          switch (MR_tag((MR_Word) HeadVar__3_3)) {
            default: /*NOTREACHED*/ MR_assert(0);
            case (MR_Integer) 0:
              *HeadVar__1_1 = (MR_Integer) 2;
              break;
            case (MR_Integer) 1:
              *HeadVar__1_1 = (MR_Integer) 2;
              break;
            case (MR_Integer) 2:
              {
                MR_Float ArgY1_57 = MR_unbox_float((MR_hl_field(2, HeadVar__3_3, (MR_Integer) 0)));

                mercury__private_builtin__builtin_compare_float_3_p_0(HeadVar__1_1, Var_306, ArgY1_57);
              }
              break;
            case (MR_Integer) 3:
              switch (((MR_Integer) ((MR_hl_field(3, HeadVar__3_3, (MR_Integer) 0))))) {
                default: /*NOTREACHED*/ MR_assert(0);
                case (MR_Integer) 0:
                  *HeadVar__1_1 = (MR_Integer) 1;
                  break;
                case (MR_Integer) 1:
                  *HeadVar__1_1 = (MR_Integer) 1;
                  break;
                case (MR_Integer) 2:
                  *HeadVar__1_1 = (MR_Integer) 1;
                  break;
                case (MR_Integer) 3:
                  *HeadVar__1_1 = (MR_Integer) 1;
                  break;
                case (MR_Integer) 4:
                  *HeadVar__1_1 = (MR_Integer) 1;
                  break;
                case (MR_Integer) 5:
                  *HeadVar__1_1 = (MR_Integer) 1;
                  break;
                case (MR_Integer) 6:
                  *HeadVar__1_1 = (MR_Integer) 1;
                  break;
                case (MR_Integer) 7:
                  *HeadVar__1_1 = (MR_Integer) 1;
                  break;
                case (MR_Integer) 8:
                  *HeadVar__1_1 = (MR_Integer) 1;
                  break;
              }
              break;
          }
        }
        break;
      case (MR_Integer) 3:
        switch (((MR_Integer) ((MR_hl_field(3, HeadVar__2_2, (MR_Integer) 0))))) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
            {
              MR_Unsigned Var_316 = ((MR_Unsigned) ((MR_hl_field(3, HeadVar__2_2, (MR_Integer) 1))));

              switch (MR_tag((MR_Word) HeadVar__3_3)) {
                default: /*NOTREACHED*/ MR_assert(0);
                case (MR_Integer) 0:
                  *HeadVar__1_1 = (MR_Integer) 2;
                  break;
                case (MR_Integer) 1:
                  *HeadVar__1_1 = (MR_Integer) 2;
                  break;
                case (MR_Integer) 2:
                  *HeadVar__1_1 = (MR_Integer) 2;
                  break;
                case (MR_Integer) 3:
                  switch (((MR_Integer) ((MR_hl_field(3, HeadVar__3_3, (MR_Integer) 0))))) {
                    default: /*NOTREACHED*/ MR_assert(0);
                    case (MR_Integer) 0:
                      {
                        MR_Unsigned ArgY1_83 = ((MR_Unsigned) ((MR_hl_field(3, HeadVar__3_3, (MR_Integer) 1))));

                        succeeded = (Var_316 < ArgY1_83);
                        if (succeeded)
                          *HeadVar__1_1 = (MR_Integer) 1;
                        else
                        {
                          succeeded = (Var_316 > ArgY1_83);
                          if (succeeded)
                            *HeadVar__1_1 = (MR_Integer) 2;
                          else
                            *HeadVar__1_1 = (MR_Integer) 0;
                        }
                      }
                      break;
                    case (MR_Integer) 1:
                      *HeadVar__1_1 = (MR_Integer) 1;
                      break;
                    case (MR_Integer) 2:
                      *HeadVar__1_1 = (MR_Integer) 1;
                      break;
                    case (MR_Integer) 3:
                      *HeadVar__1_1 = (MR_Integer) 1;
                      break;
                    case (MR_Integer) 4:
                      *HeadVar__1_1 = (MR_Integer) 1;
                      break;
                    case (MR_Integer) 5:
                      *HeadVar__1_1 = (MR_Integer) 1;
                      break;
                    case (MR_Integer) 6:
                      *HeadVar__1_1 = (MR_Integer) 1;
                      break;
                    case (MR_Integer) 7:
                      *HeadVar__1_1 = (MR_Integer) 1;
                      break;
                    case (MR_Integer) 8:
                      *HeadVar__1_1 = (MR_Integer) 1;
                      break;
                  }
                  break;
              }
            }
            break;
          case (MR_Integer) 1:
            {
              int8_t Var_310 = ((int8_t) (MR_Word) (MR_hl_field(3, HeadVar__2_2, (MR_Integer) 1)));

              switch (MR_tag((MR_Word) HeadVar__3_3)) {
                default: /*NOTREACHED*/ MR_assert(0);
                case (MR_Integer) 0:
                  *HeadVar__1_1 = (MR_Integer) 2;
                  break;
                case (MR_Integer) 1:
                  *HeadVar__1_1 = (MR_Integer) 2;
                  break;
                case (MR_Integer) 2:
                  *HeadVar__1_1 = (MR_Integer) 2;
                  break;
                case (MR_Integer) 3:
                  switch (((MR_Integer) ((MR_hl_field(3, HeadVar__3_3, (MR_Integer) 0))))) {
                    default: /*NOTREACHED*/ MR_assert(0);
                    case (MR_Integer) 0:
                      *HeadVar__1_1 = (MR_Integer) 2;
                      break;
                    case (MR_Integer) 1:
                      {
                        int8_t ArgY1_109 = ((int8_t) (MR_Word) (MR_hl_field(3, HeadVar__3_3, (MR_Integer) 1)));

                        succeeded = (Var_310 < ArgY1_109);
                        if (succeeded)
                          *HeadVar__1_1 = (MR_Integer) 1;
                        else
                        {
                          succeeded = (Var_310 > ArgY1_109);
                          if (succeeded)
                            *HeadVar__1_1 = (MR_Integer) 2;
                          else
                            *HeadVar__1_1 = (MR_Integer) 0;
                        }
                      }
                      break;
                    case (MR_Integer) 2:
                      *HeadVar__1_1 = (MR_Integer) 1;
                      break;
                    case (MR_Integer) 3:
                      *HeadVar__1_1 = (MR_Integer) 1;
                      break;
                    case (MR_Integer) 4:
                      *HeadVar__1_1 = (MR_Integer) 1;
                      break;
                    case (MR_Integer) 5:
                      *HeadVar__1_1 = (MR_Integer) 1;
                      break;
                    case (MR_Integer) 6:
                      *HeadVar__1_1 = (MR_Integer) 1;
                      break;
                    case (MR_Integer) 7:
                      *HeadVar__1_1 = (MR_Integer) 1;
                      break;
                    case (MR_Integer) 8:
                      *HeadVar__1_1 = (MR_Integer) 1;
                      break;
                  }
                  break;
              }
            }
            break;
          case (MR_Integer) 2:
            {
              uint8_t Var_315 = ((uint8_t) (MR_Word) (MR_hl_field(3, HeadVar__2_2, (MR_Integer) 1)));

              switch (MR_tag((MR_Word) HeadVar__3_3)) {
                default: /*NOTREACHED*/ MR_assert(0);
                case (MR_Integer) 0:
                  *HeadVar__1_1 = (MR_Integer) 2;
                  break;
                case (MR_Integer) 1:
                  *HeadVar__1_1 = (MR_Integer) 2;
                  break;
                case (MR_Integer) 2:
                  *HeadVar__1_1 = (MR_Integer) 2;
                  break;
                case (MR_Integer) 3:
                  switch (((MR_Integer) ((MR_hl_field(3, HeadVar__3_3, (MR_Integer) 0))))) {
                    default: /*NOTREACHED*/ MR_assert(0);
                    case (MR_Integer) 0:
                      *HeadVar__1_1 = (MR_Integer) 2;
                      break;
                    case (MR_Integer) 1:
                      *HeadVar__1_1 = (MR_Integer) 2;
                      break;
                    case (MR_Integer) 2:
                      {
                        uint8_t ArgY1_135 = ((uint8_t) (MR_Word) (MR_hl_field(3, HeadVar__3_3, (MR_Integer) 1)));

                        succeeded = (Var_315 < ArgY1_135);
                        if (succeeded)
                          *HeadVar__1_1 = (MR_Integer) 1;
                        else
                        {
                          succeeded = (Var_315 > ArgY1_135);
                          if (succeeded)
                            *HeadVar__1_1 = (MR_Integer) 2;
                          else
                            *HeadVar__1_1 = (MR_Integer) 0;
                        }
                      }
                      break;
                    case (MR_Integer) 3:
                      *HeadVar__1_1 = (MR_Integer) 1;
                      break;
                    case (MR_Integer) 4:
                      *HeadVar__1_1 = (MR_Integer) 1;
                      break;
                    case (MR_Integer) 5:
                      *HeadVar__1_1 = (MR_Integer) 1;
                      break;
                    case (MR_Integer) 6:
                      *HeadVar__1_1 = (MR_Integer) 1;
                      break;
                    case (MR_Integer) 7:
                      *HeadVar__1_1 = (MR_Integer) 1;
                      break;
                    case (MR_Integer) 8:
                      *HeadVar__1_1 = (MR_Integer) 1;
                      break;
                  }
                  break;
              }
            }
            break;
          case (MR_Integer) 3:
            {
              int16_t Var_307 = ((int16_t) (MR_Word) (MR_hl_field(3, HeadVar__2_2, (MR_Integer) 1)));

              switch (MR_tag((MR_Word) HeadVar__3_3)) {
                default: /*NOTREACHED*/ MR_assert(0);
                case (MR_Integer) 0:
                  *HeadVar__1_1 = (MR_Integer) 2;
                  break;
                case (MR_Integer) 1:
                  *HeadVar__1_1 = (MR_Integer) 2;
                  break;
                case (MR_Integer) 2:
                  *HeadVar__1_1 = (MR_Integer) 2;
                  break;
                case (MR_Integer) 3:
                  switch (((MR_Integer) ((MR_hl_field(3, HeadVar__3_3, (MR_Integer) 0))))) {
                    default: /*NOTREACHED*/ MR_assert(0);
                    case (MR_Integer) 0:
                      *HeadVar__1_1 = (MR_Integer) 2;
                      break;
                    case (MR_Integer) 1:
                      *HeadVar__1_1 = (MR_Integer) 2;
                      break;
                    case (MR_Integer) 2:
                      *HeadVar__1_1 = (MR_Integer) 2;
                      break;
                    case (MR_Integer) 3:
                      {
                        int16_t ArgY1_161 = ((int16_t) (MR_Word) (MR_hl_field(3, HeadVar__3_3, (MR_Integer) 1)));

                        succeeded = (Var_307 < ArgY1_161);
                        if (succeeded)
                          *HeadVar__1_1 = (MR_Integer) 1;
                        else
                        {
                          succeeded = (Var_307 > ArgY1_161);
                          if (succeeded)
                            *HeadVar__1_1 = (MR_Integer) 2;
                          else
                            *HeadVar__1_1 = (MR_Integer) 0;
                        }
                      }
                      break;
                    case (MR_Integer) 4:
                      *HeadVar__1_1 = (MR_Integer) 1;
                      break;
                    case (MR_Integer) 5:
                      *HeadVar__1_1 = (MR_Integer) 1;
                      break;
                    case (MR_Integer) 6:
                      *HeadVar__1_1 = (MR_Integer) 1;
                      break;
                    case (MR_Integer) 7:
                      *HeadVar__1_1 = (MR_Integer) 1;
                      break;
                    case (MR_Integer) 8:
                      *HeadVar__1_1 = (MR_Integer) 1;
                      break;
                  }
                  break;
              }
            }
            break;
          case (MR_Integer) 4:
            {
              uint16_t Var_312 = ((uint16_t) (MR_Word) (MR_hl_field(3, HeadVar__2_2, (MR_Integer) 1)));

              switch (MR_tag((MR_Word) HeadVar__3_3)) {
                default: /*NOTREACHED*/ MR_assert(0);
                case (MR_Integer) 0:
                  *HeadVar__1_1 = (MR_Integer) 2;
                  break;
                case (MR_Integer) 1:
                  *HeadVar__1_1 = (MR_Integer) 2;
                  break;
                case (MR_Integer) 2:
                  *HeadVar__1_1 = (MR_Integer) 2;
                  break;
                case (MR_Integer) 3:
                  switch (((MR_Integer) ((MR_hl_field(3, HeadVar__3_3, (MR_Integer) 0))))) {
                    default: /*NOTREACHED*/ MR_assert(0);
                    case (MR_Integer) 0:
                      *HeadVar__1_1 = (MR_Integer) 2;
                      break;
                    case (MR_Integer) 1:
                      *HeadVar__1_1 = (MR_Integer) 2;
                      break;
                    case (MR_Integer) 2:
                      *HeadVar__1_1 = (MR_Integer) 2;
                      break;
                    case (MR_Integer) 3:
                      *HeadVar__1_1 = (MR_Integer) 2;
                      break;
                    case (MR_Integer) 4:
                      {
                        uint16_t ArgY1_187 = ((uint16_t) (MR_Word) (MR_hl_field(3, HeadVar__3_3, (MR_Integer) 1)));

                        succeeded = (Var_312 < ArgY1_187);
                        if (succeeded)
                          *HeadVar__1_1 = (MR_Integer) 1;
                        else
                        {
                          succeeded = (Var_312 > ArgY1_187);
                          if (succeeded)
                            *HeadVar__1_1 = (MR_Integer) 2;
                          else
                            *HeadVar__1_1 = (MR_Integer) 0;
                        }
                      }
                      break;
                    case (MR_Integer) 5:
                      *HeadVar__1_1 = (MR_Integer) 1;
                      break;
                    case (MR_Integer) 6:
                      *HeadVar__1_1 = (MR_Integer) 1;
                      break;
                    case (MR_Integer) 7:
                      *HeadVar__1_1 = (MR_Integer) 1;
                      break;
                    case (MR_Integer) 8:
                      *HeadVar__1_1 = (MR_Integer) 1;
                      break;
                  }
                  break;
              }
            }
            break;
          case (MR_Integer) 5:
            {
              int32_t Var_308 = ((int32_t) (MR_Word) (MR_hl_field(3, HeadVar__2_2, (MR_Integer) 1)));

              switch (MR_tag((MR_Word) HeadVar__3_3)) {
                default: /*NOTREACHED*/ MR_assert(0);
                case (MR_Integer) 0:
                  *HeadVar__1_1 = (MR_Integer) 2;
                  break;
                case (MR_Integer) 1:
                  *HeadVar__1_1 = (MR_Integer) 2;
                  break;
                case (MR_Integer) 2:
                  *HeadVar__1_1 = (MR_Integer) 2;
                  break;
                case (MR_Integer) 3:
                  switch (((MR_Integer) ((MR_hl_field(3, HeadVar__3_3, (MR_Integer) 0))))) {
                    default: /*NOTREACHED*/ MR_assert(0);
                    case (MR_Integer) 0:
                      *HeadVar__1_1 = (MR_Integer) 2;
                      break;
                    case (MR_Integer) 1:
                      *HeadVar__1_1 = (MR_Integer) 2;
                      break;
                    case (MR_Integer) 2:
                      *HeadVar__1_1 = (MR_Integer) 2;
                      break;
                    case (MR_Integer) 3:
                      *HeadVar__1_1 = (MR_Integer) 2;
                      break;
                    case (MR_Integer) 4:
                      *HeadVar__1_1 = (MR_Integer) 2;
                      break;
                    case (MR_Integer) 5:
                      {
                        int32_t ArgY1_213 = ((int32_t) (MR_Word) (MR_hl_field(3, HeadVar__3_3, (MR_Integer) 1)));

                        succeeded = (Var_308 < ArgY1_213);
                        if (succeeded)
                          *HeadVar__1_1 = (MR_Integer) 1;
                        else
                        {
                          succeeded = (Var_308 > ArgY1_213);
                          if (succeeded)
                            *HeadVar__1_1 = (MR_Integer) 2;
                          else
                            *HeadVar__1_1 = (MR_Integer) 0;
                        }
                      }
                      break;
                    case (MR_Integer) 6:
                      *HeadVar__1_1 = (MR_Integer) 1;
                      break;
                    case (MR_Integer) 7:
                      *HeadVar__1_1 = (MR_Integer) 1;
                      break;
                    case (MR_Integer) 8:
                      *HeadVar__1_1 = (MR_Integer) 1;
                      break;
                  }
                  break;
              }
            }
            break;
          case (MR_Integer) 6:
            {
              uint32_t Var_313 = ((uint32_t) (MR_Word) (MR_hl_field(3, HeadVar__2_2, (MR_Integer) 1)));

              switch (MR_tag((MR_Word) HeadVar__3_3)) {
                default: /*NOTREACHED*/ MR_assert(0);
                case (MR_Integer) 0:
                  *HeadVar__1_1 = (MR_Integer) 2;
                  break;
                case (MR_Integer) 1:
                  *HeadVar__1_1 = (MR_Integer) 2;
                  break;
                case (MR_Integer) 2:
                  *HeadVar__1_1 = (MR_Integer) 2;
                  break;
                case (MR_Integer) 3:
                  switch (((MR_Integer) ((MR_hl_field(3, HeadVar__3_3, (MR_Integer) 0))))) {
                    default: /*NOTREACHED*/ MR_assert(0);
                    case (MR_Integer) 0:
                      *HeadVar__1_1 = (MR_Integer) 2;
                      break;
                    case (MR_Integer) 1:
                      *HeadVar__1_1 = (MR_Integer) 2;
                      break;
                    case (MR_Integer) 2:
                      *HeadVar__1_1 = (MR_Integer) 2;
                      break;
                    case (MR_Integer) 3:
                      *HeadVar__1_1 = (MR_Integer) 2;
                      break;
                    case (MR_Integer) 4:
                      *HeadVar__1_1 = (MR_Integer) 2;
                      break;
                    case (MR_Integer) 5:
                      *HeadVar__1_1 = (MR_Integer) 2;
                      break;
                    case (MR_Integer) 6:
                      {
                        uint32_t ArgY1_239 = ((uint32_t) (MR_Word) (MR_hl_field(3, HeadVar__3_3, (MR_Integer) 1)));

                        succeeded = (Var_313 < ArgY1_239);
                        if (succeeded)
                          *HeadVar__1_1 = (MR_Integer) 1;
                        else
                        {
                          succeeded = (Var_313 > ArgY1_239);
                          if (succeeded)
                            *HeadVar__1_1 = (MR_Integer) 2;
                          else
                            *HeadVar__1_1 = (MR_Integer) 0;
                        }
                      }
                      break;
                    case (MR_Integer) 7:
                      *HeadVar__1_1 = (MR_Integer) 1;
                      break;
                    case (MR_Integer) 8:
                      *HeadVar__1_1 = (MR_Integer) 1;
                      break;
                  }
                  break;
              }
            }
            break;
          case (MR_Integer) 7:
            {
              int64_t Var_309 = MR_unbox_int64((MR_hl_field(3, HeadVar__2_2, (MR_Integer) 1)));

              switch (MR_tag((MR_Word) HeadVar__3_3)) {
                default: /*NOTREACHED*/ MR_assert(0);
                case (MR_Integer) 0:
                  *HeadVar__1_1 = (MR_Integer) 2;
                  break;
                case (MR_Integer) 1:
                  *HeadVar__1_1 = (MR_Integer) 2;
                  break;
                case (MR_Integer) 2:
                  *HeadVar__1_1 = (MR_Integer) 2;
                  break;
                case (MR_Integer) 3:
                  switch (((MR_Integer) ((MR_hl_field(3, HeadVar__3_3, (MR_Integer) 0))))) {
                    default: /*NOTREACHED*/ MR_assert(0);
                    case (MR_Integer) 0:
                      *HeadVar__1_1 = (MR_Integer) 2;
                      break;
                    case (MR_Integer) 1:
                      *HeadVar__1_1 = (MR_Integer) 2;
                      break;
                    case (MR_Integer) 2:
                      *HeadVar__1_1 = (MR_Integer) 2;
                      break;
                    case (MR_Integer) 3:
                      *HeadVar__1_1 = (MR_Integer) 2;
                      break;
                    case (MR_Integer) 4:
                      *HeadVar__1_1 = (MR_Integer) 2;
                      break;
                    case (MR_Integer) 5:
                      *HeadVar__1_1 = (MR_Integer) 2;
                      break;
                    case (MR_Integer) 6:
                      *HeadVar__1_1 = (MR_Integer) 2;
                      break;
                    case (MR_Integer) 7:
                      {
                        int64_t ArgY1_265 = MR_unbox_int64((MR_hl_field(3, HeadVar__3_3, (MR_Integer) 1)));

                        succeeded = (Var_309 < ArgY1_265);
                        if (succeeded)
                          *HeadVar__1_1 = (MR_Integer) 1;
                        else
                        {
                          succeeded = (Var_309 > ArgY1_265);
                          if (succeeded)
                            *HeadVar__1_1 = (MR_Integer) 2;
                          else
                            *HeadVar__1_1 = (MR_Integer) 0;
                        }
                      }
                      break;
                    case (MR_Integer) 8:
                      *HeadVar__1_1 = (MR_Integer) 1;
                      break;
                  }
                  break;
              }
            }
            break;
          case (MR_Integer) 8:
            {
              uint64_t Var_314 = MR_unbox_uint64((MR_hl_field(3, HeadVar__2_2, (MR_Integer) 1)));

              switch (MR_tag((MR_Word) HeadVar__3_3)) {
                default: /*NOTREACHED*/ MR_assert(0);
                case (MR_Integer) 0:
                  *HeadVar__1_1 = (MR_Integer) 2;
                  break;
                case (MR_Integer) 1:
                  *HeadVar__1_1 = (MR_Integer) 2;
                  break;
                case (MR_Integer) 2:
                  *HeadVar__1_1 = (MR_Integer) 2;
                  break;
                case (MR_Integer) 3:
                  switch (((MR_Integer) ((MR_hl_field(3, HeadVar__3_3, (MR_Integer) 0))))) {
                    default: /*NOTREACHED*/ MR_assert(0);
                    case (MR_Integer) 0:
                      *HeadVar__1_1 = (MR_Integer) 2;
                      break;
                    case (MR_Integer) 1:
                      *HeadVar__1_1 = (MR_Integer) 2;
                      break;
                    case (MR_Integer) 2:
                      *HeadVar__1_1 = (MR_Integer) 2;
                      break;
                    case (MR_Integer) 3:
                      *HeadVar__1_1 = (MR_Integer) 2;
                      break;
                    case (MR_Integer) 4:
                      *HeadVar__1_1 = (MR_Integer) 2;
                      break;
                    case (MR_Integer) 5:
                      *HeadVar__1_1 = (MR_Integer) 2;
                      break;
                    case (MR_Integer) 6:
                      *HeadVar__1_1 = (MR_Integer) 2;
                      break;
                    case (MR_Integer) 7:
                      *HeadVar__1_1 = (MR_Integer) 2;
                      break;
                    case (MR_Integer) 8:
                      {
                        uint64_t ArgY1_291 = MR_unbox_uint64((MR_hl_field(3, HeadVar__3_3, (MR_Integer) 1)));

                        succeeded = (Var_314 < ArgY1_291);
                        if (succeeded)
                          *HeadVar__1_1 = (MR_Integer) 1;
                        else
                        {
                          succeeded = (Var_314 > ArgY1_291);
                          if (succeeded)
                            *HeadVar__1_1 = (MR_Integer) 2;
                          else
                            *HeadVar__1_1 = (MR_Integer) 0;
                        }
                      }
                      break;
                  }
                  break;
              }
            }
            break;
        }
        break;
    }
}

MR_bool MR_CALL 
bytecode_backend__bytecode____Unify____byte_arg_0_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2)
{
  MR_bool succeeded;
  MR_Integer CastX_27 = (MR_Integer) (HeadVar__1_1);
  MR_Integer CastY_28 = (MR_Integer) (HeadVar__2_2);

  succeeded = (CastX_27 == CastY_28);
  if (succeeded)
    succeeded = MR_TRUE;
  else
    switch (MR_tag((MR_Word) HeadVar__1_1)) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        {
          MR_Integer ArgX1_3 = ((MR_Integer) ((MR_hl_field(0, HeadVar__1_1, (MR_Integer) 0))));
          MR_Integer ArgY1_4;

          succeeded = ((MR_tag((MR_Word) HeadVar__2_2)) == (MR_Integer) 0);
          if (succeeded)
          {
            ArgY1_4 = ((MR_Integer) ((MR_hl_field(0, HeadVar__2_2, (MR_Integer) 0))));
            succeeded = (ArgX1_3 == ArgY1_4);
          }
        }
        break;
      case (MR_Integer) 1:
        {
          MR_Integer ArgX1_5 = ((MR_Integer) ((MR_hl_field(1, HeadVar__1_1, (MR_Integer) 0))));
          MR_Integer ArgY1_6;

          succeeded = ((MR_tag((MR_Word) HeadVar__2_2)) == (MR_Integer) 1);
          if (succeeded)
          {
            ArgY1_6 = ((MR_Integer) ((MR_hl_field(1, HeadVar__2_2, (MR_Integer) 0))));
            succeeded = (ArgX1_5 == ArgY1_6);
          }
        }
        break;
      case (MR_Integer) 2:
        {
          MR_Float ArgX1_7 = MR_unbox_float((MR_hl_field(2, HeadVar__1_1, (MR_Integer) 0)));
          MR_Float ArgY1_8;

          succeeded = ((MR_tag((MR_Word) HeadVar__2_2)) == (MR_Integer) 2);
          if (succeeded)
          {
            ArgY1_8 = MR_unbox_float((MR_hl_field(2, HeadVar__2_2, (MR_Integer) 0)));
            succeeded = (ArgX1_7 == ArgY1_8);
          }
        }
        break;
      case (MR_Integer) 3:
        switch (((MR_Integer) ((MR_hl_field(3, HeadVar__1_1, (MR_Integer) 0))))) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
            {
              MR_Unsigned ArgX1_9 = ((MR_Unsigned) ((MR_hl_field(3, HeadVar__1_1, (MR_Integer) 1))));
              MR_Unsigned ArgY1_10;

              succeeded = ((((MR_tag((MR_Word) HeadVar__2_2)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(3, HeadVar__2_2, (MR_Integer) 0)))) == (MR_Integer) 0)));
              if (succeeded)
              {
                ArgY1_10 = ((MR_Unsigned) ((MR_hl_field(3, HeadVar__2_2, (MR_Integer) 1))));
                succeeded = (ArgX1_9 == ArgY1_10);
              }
            }
            break;
          case (MR_Integer) 1:
            {
              int8_t ArgX1_11 = ((int8_t) (MR_Word) (MR_hl_field(3, HeadVar__1_1, (MR_Integer) 1)));
              int8_t ArgY1_12;

              succeeded = ((((MR_tag((MR_Word) HeadVar__2_2)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(3, HeadVar__2_2, (MR_Integer) 0)))) == (MR_Integer) 1)));
              if (succeeded)
              {
                ArgY1_12 = ((int8_t) (MR_Word) (MR_hl_field(3, HeadVar__2_2, (MR_Integer) 1)));
                succeeded = (ArgX1_11 == ArgY1_12);
              }
            }
            break;
          case (MR_Integer) 2:
            {
              uint8_t ArgX1_13 = ((uint8_t) (MR_Word) (MR_hl_field(3, HeadVar__1_1, (MR_Integer) 1)));
              uint8_t ArgY1_14;

              succeeded = ((((MR_tag((MR_Word) HeadVar__2_2)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(3, HeadVar__2_2, (MR_Integer) 0)))) == (MR_Integer) 2)));
              if (succeeded)
              {
                ArgY1_14 = ((uint8_t) (MR_Word) (MR_hl_field(3, HeadVar__2_2, (MR_Integer) 1)));
                succeeded = (ArgX1_13 == ArgY1_14);
              }
            }
            break;
          case (MR_Integer) 3:
            {
              int16_t ArgX1_15 = ((int16_t) (MR_Word) (MR_hl_field(3, HeadVar__1_1, (MR_Integer) 1)));
              int16_t ArgY1_16;

              succeeded = ((((MR_tag((MR_Word) HeadVar__2_2)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(3, HeadVar__2_2, (MR_Integer) 0)))) == (MR_Integer) 3)));
              if (succeeded)
              {
                ArgY1_16 = ((int16_t) (MR_Word) (MR_hl_field(3, HeadVar__2_2, (MR_Integer) 1)));
                succeeded = (ArgX1_15 == ArgY1_16);
              }
            }
            break;
          case (MR_Integer) 4:
            {
              uint16_t ArgX1_17 = ((uint16_t) (MR_Word) (MR_hl_field(3, HeadVar__1_1, (MR_Integer) 1)));
              uint16_t ArgY1_18;

              succeeded = ((((MR_tag((MR_Word) HeadVar__2_2)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(3, HeadVar__2_2, (MR_Integer) 0)))) == (MR_Integer) 4)));
              if (succeeded)
              {
                ArgY1_18 = ((uint16_t) (MR_Word) (MR_hl_field(3, HeadVar__2_2, (MR_Integer) 1)));
                succeeded = (ArgX1_17 == ArgY1_18);
              }
            }
            break;
          case (MR_Integer) 5:
            {
              int32_t ArgX1_19 = ((int32_t) (MR_Word) (MR_hl_field(3, HeadVar__1_1, (MR_Integer) 1)));
              int32_t ArgY1_20;

              succeeded = ((((MR_tag((MR_Word) HeadVar__2_2)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(3, HeadVar__2_2, (MR_Integer) 0)))) == (MR_Integer) 5)));
              if (succeeded)
              {
                ArgY1_20 = ((int32_t) (MR_Word) (MR_hl_field(3, HeadVar__2_2, (MR_Integer) 1)));
                succeeded = (ArgX1_19 == ArgY1_20);
              }
            }
            break;
          case (MR_Integer) 6:
            {
              uint32_t ArgX1_21 = ((uint32_t) (MR_Word) (MR_hl_field(3, HeadVar__1_1, (MR_Integer) 1)));
              uint32_t ArgY1_22;

              succeeded = ((((MR_tag((MR_Word) HeadVar__2_2)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(3, HeadVar__2_2, (MR_Integer) 0)))) == (MR_Integer) 6)));
              if (succeeded)
              {
                ArgY1_22 = ((uint32_t) (MR_Word) (MR_hl_field(3, HeadVar__2_2, (MR_Integer) 1)));
                succeeded = (ArgX1_21 == ArgY1_22);
              }
            }
            break;
          case (MR_Integer) 7:
            {
              int64_t ArgX1_23 = MR_unbox_int64((MR_hl_field(3, HeadVar__1_1, (MR_Integer) 1)));
              int64_t ArgY1_24;

              succeeded = ((((MR_tag((MR_Word) HeadVar__2_2)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(3, HeadVar__2_2, (MR_Integer) 0)))) == (MR_Integer) 7)));
              if (succeeded)
              {
                ArgY1_24 = MR_unbox_int64((MR_hl_field(3, HeadVar__2_2, (MR_Integer) 1)));
                succeeded = (ArgX1_23 == ArgY1_24);
              }
            }
            break;
          case (MR_Integer) 8:
            {
              uint64_t ArgX1_25 = MR_unbox_uint64((MR_hl_field(3, HeadVar__1_1, (MR_Integer) 1)));
              uint64_t ArgY1_26;

              succeeded = ((((MR_tag((MR_Word) HeadVar__2_2)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(3, HeadVar__2_2, (MR_Integer) 0)))) == (MR_Integer) 8)));
              if (succeeded)
              {
                ArgY1_26 = MR_unbox_uint64((MR_hl_field(3, HeadVar__2_2, (MR_Integer) 1)));
                succeeded = (ArgX1_25 == ArgY1_26);
              }
            }
            break;
        }
        break;
    }
  return succeeded;
}

void MR_CALL 
bytecode_backend__bytecode__debug_bytecode_file_5_p_0(
  MR_Word ProgressStream_6,
  MR_String FileName_7,
  MR_Word ByteCodes_8)
{
  MR_Word Result_10;

  mercury__io__open_output_4_p_0(FileName_7, &Result_10);
  if (((MR_tag((MR_Word) Result_10)) == (MR_Integer) 1))
  {
    MR_String ProgName_14;

    mercury__io__progname_base_4_p_0((MR_String) "byte.m", &ProgName_14);
    mercury__io__write_string_4_p_0(ProgressStream_6, (MR_String) "\n");
    mercury__io__write_string_4_p_0(ProgressStream_6, ProgName_14);
    mercury__io__write_string_4_p_0(ProgressStream_6, (MR_String) ": can\'t open \140");
    mercury__io__write_string_4_p_0(ProgressStream_6, FileName_7);
    mercury__io__write_string_4_p_0(ProgressStream_6, (MR_String) "\' for output\n");
    mercury__io__set_exit_status_3_p_0((MR_Integer) 1);
  }
  else
  {
    MR_Word FileStream_11 = ((MR_Word) ((MR_hl_field(0, Result_10, (MR_Integer) 0))));
    MR_String Var_38;

    mercury__io__write_string_4_p_0(FileStream_11, (MR_String) "bytecode_version ");
    mercury__string__format__format_signed_int_component_nowidth_noprec_3_p_0((MR_Word) (&bytecode_backend__bytecode_scalar_common_3[0]), (MR_Integer) 9, &Var_38);
    mercury__io__write_string_4_p_0(FileStream_11, Var_38);
    mercury__io__write_string_4_p_0(FileStream_11, (MR_String) "\n");
    bytecode_backend__bytecode__debug_bytecode_list_4_p_0(FileStream_11, ByteCodes_8);
    mercury__io__close_output_3_p_0(FileStream_11);
  }
}

static void MR_CALL 
bytecode_backend__bytecode__debug_bytecode_list_4_p_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2)
{
  while (MR_TRUE)
  {
    // setup for model_det tailcalls optimized into a loop
    ;
    if (!((HeadVar__2_2 == (MR_Word) ((MR_Unsigned) 0U))))
    {
      MR_Word ByteCode_10 = ((MR_Word) ((MR_hl_field(1, HeadVar__2_2, (MR_Integer) 0))));
      MR_Word ByteCodes_11 = ((MR_Word) ((MR_hl_field(1, HeadVar__2_2, (MR_Integer) 1))));
      MR_String Debug_13;
      MR_Word next_value_of_HeadVar__2_2;

      switch (MR_tag((MR_Word) ByteCode_10)) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 0:
          switch (MR_unmkbody(ByteCode_10)) {
            default: /*NOTREACHED*/ MR_assert(0);
            case (MR_Integer) 0:
              Debug_13 = (MR_String) "endof_pred";
              break;
            case (MR_Integer) 1:
              Debug_13 = (MR_String) "endof_proc";
              break;
            case (MR_Integer) 2:
              Debug_13 = (MR_String) "endof_disjunction";
              break;
            case (MR_Integer) 3:
              Debug_13 = (MR_String) "endof_switch";
              break;
            case (MR_Integer) 4:
              Debug_13 = (MR_String) "endof_if";
              break;
            case (MR_Integer) 5:
              Debug_13 = (MR_String) "endof_negation";
              break;
            case (MR_Integer) 6:
              Debug_13 = (MR_String) "semidet_succeed";
              break;
            case (MR_Integer) 7:
              Debug_13 = (MR_String) "semidet_success_check";
              break;
            case (MR_Integer) 8:
              Debug_13 = (MR_String) "fail";
              break;
            case (MR_Integer) 9:
              Debug_13 = (MR_String) "not_supported";
              break;
          }
          break;
        case (MR_Integer) 1:
          Debug_13 = (MR_String) "enter_pred";
          break;
        case (MR_Integer) 2:
          Debug_13 = (MR_String) "enter_proc";
          break;
        case (MR_Integer) 3:
          switch (((MR_Integer) ((MR_hl_field(3, ByteCode_10, (MR_Integer) 0))))) {
            default: /*NOTREACHED*/ MR_assert(0);
            case (MR_Integer) 0:
              Debug_13 = (MR_String) "label";
              break;
            case (MR_Integer) 1:
              Debug_13 = (MR_String) "enter_disjunction";
              break;
            case (MR_Integer) 2:
              Debug_13 = (MR_String) "enter_disjunct";
              break;
            case (MR_Integer) 3:
              Debug_13 = (MR_String) "endof_disjunct";
              break;
            case (MR_Integer) 4:
              Debug_13 = (MR_String) "enter_switch";
              break;
            case (MR_Integer) 5:
              Debug_13 = (MR_String) "enter_switch_arm";
              break;
            case (MR_Integer) 6:
              Debug_13 = (MR_String) "endof_switch_arm";
              break;
            case (MR_Integer) 7:
              Debug_13 = (MR_String) "enter_if";
              break;
            case (MR_Integer) 8:
              Debug_13 = (MR_String) "enter_then";
              break;
            case (MR_Integer) 9:
              Debug_13 = (MR_String) "endof_then";
              break;
            case (MR_Integer) 10:
              Debug_13 = (MR_String) "enter_else";
              break;
            case (MR_Integer) 11:
              Debug_13 = (MR_String) "enter_negation";
              break;
            case (MR_Integer) 12:
              Debug_13 = (MR_String) "endof_negation_goal";
              break;
            case (MR_Integer) 13:
              Debug_13 = (MR_String) "enter_commit";
              break;
            case (MR_Integer) 14:
              Debug_13 = (MR_String) "endof_commit";
              break;
            case (MR_Integer) 15:
              Debug_13 = (MR_String) "assign";
              break;
            case (MR_Integer) 16:
              Debug_13 = (MR_String) "test";
              break;
            case (MR_Integer) 17:
              Debug_13 = (MR_String) "construct";
              break;
            case (MR_Integer) 18:
              Debug_13 = (MR_String) "deconstruct";
              break;
            case (MR_Integer) 19:
              Debug_13 = (MR_String) "complex_construct";
              break;
            case (MR_Integer) 20:
              Debug_13 = (MR_String) "complex_deconstruct";
              break;
            case (MR_Integer) 21:
              Debug_13 = (MR_String) "place_arg";
              break;
            case (MR_Integer) 22:
              Debug_13 = (MR_String) "pickup_arg";
              break;
            case (MR_Integer) 23:
              Debug_13 = (MR_String) "call";
              break;
            case (MR_Integer) 24:
              Debug_13 = (MR_String) "higher_order_call";
              break;
            case (MR_Integer) 25:
              Debug_13 = (MR_String) "builtin_binop";
              break;
            case (MR_Integer) 26:
              Debug_13 = (MR_String) "builtin_unop";
              break;
            case (MR_Integer) 27:
              Debug_13 = (MR_String) "builtin_bintest";
              break;
            case (MR_Integer) 28:
              Debug_13 = (MR_String) "builtin_untest";
              break;
            case (MR_Integer) 29:
              Debug_13 = (MR_String) "context";
              break;
          }
          break;
      }
      mercury__io__write_string_4_p_0(HeadVar__1_1, Debug_13);
      mercury__io__write_char_4_p_0(HeadVar__1_1, (MR_Char) 32);
      bytecode_backend__bytecode__debug_args_4_p_0(HeadVar__1_1, ByteCode_10);
      mercury__io__write_char_4_p_0(HeadVar__1_1, (MR_Char) 10);
      // direct tailcall eliminated
      ;
      next_value_of_HeadVar__2_2 = ByteCodes_11;
      HeadVar__2_2 = next_value_of_HeadVar__2_2;
      continue;
    }
    break;
  }
}

static void MR_CALL 
bytecode_backend__bytecode__debug_args_4_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3)
{
  MR_Box closure = closure_arg;

  bytecode_backend__bytecode__debug_cons_id_4_p_0(((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 3)))), ((MR_Word) (wrapper_arg_1)));
}

static void MR_CALL 
bytecode_backend__bytecode__debug_args_4_p_0(
  MR_Word OutputStream_5,
  MR_Word ByteCode_6)
{
  switch (MR_tag((MR_Word) ByteCode_6)) {
    default: /*NOTREACHED*/ MR_assert(0);
    case (MR_Integer) 0:
      switch (MR_unmkbody(ByteCode_6)) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 0:
          {
          }
          break;
        case (MR_Integer) 1:
          {
          }
          break;
        case (MR_Integer) 2:
          {
          }
          break;
        case (MR_Integer) 3:
          {
          }
          break;
        case (MR_Integer) 4:
          {
          }
          break;
        case (MR_Integer) 5:
          {
          }
          break;
        case (MR_Integer) 6:
          {
          }
          break;
        case (MR_Integer) 7:
          {
          }
          break;
        case (MR_Integer) 8:
          {
          }
          break;
        case (MR_Integer) 9:
          {
          }
          break;
      }
      break;
    case (MR_Integer) 1:
      {
        MR_String PredId_8 = ((MR_String) ((MR_hl_field(1, ByteCode_6, (MR_Integer) 0))));
        MR_Integer PredArity_9 = ((MR_Integer) ((MR_hl_field(1, ByteCode_6, (MR_Integer) 1))));
        MR_Integer IsFunc_10 = ((MR_Integer) ((MR_hl_field(1, ByteCode_6, (MR_Integer) 2))));
        MR_Integer ProcsCount_11 = ((MR_Integer) ((MR_hl_field(1, ByteCode_6, (MR_Integer) 3))));

        bytecode_backend__bytecode__debug_pred_id_4_p_0(OutputStream_5, PredId_8);
        bytecode_backend__bytecode__debug_length_4_p_0(OutputStream_5, PredArity_9);
        bytecode_backend__bytecode__debug_is_func_4_p_0(OutputStream_5, IsFunc_10);
        bytecode_backend__bytecode__debug_length_4_p_0(OutputStream_5, ProcsCount_11);
      }
      break;
    case (MR_Integer) 2:
      {
        MR_Integer ProcId_12 = ((MR_Integer) ((MR_hl_field(2, ByteCode_6, (MR_Integer) 0))));
        MR_Word Detism_13 = ((MR_Unsigned) ((MR_hl_field(2, ByteCode_6, (MR_Integer) 1))) & (MR_Integer) 7);
        MR_Integer LabelCount_14 = ((MR_Integer) ((MR_hl_field(2, ByteCode_6, (MR_Integer) 2))));
        MR_Integer LabelId_15 = ((MR_Integer) ((MR_hl_field(2, ByteCode_6, (MR_Integer) 3))));
        MR_Integer TempCount_16 = ((MR_Integer) ((MR_hl_field(2, ByteCode_6, (MR_Integer) 4))));
        MR_Word Vars_17 = ((MR_Word) ((MR_hl_field(2, ByteCode_6, (MR_Integer) 5))));
        MR_Integer VarCount_18;

        mercury__list__length_2_p_0((MR_Word) (&bytecode_backend__bytecode__bytecode_backend__bytecode__type_ctor_info_byte_var_info_0), Vars_17, &VarCount_18);
        bytecode_backend__bytecode__debug_proc_id_4_p_0(OutputStream_5, ProcId_12);
        bytecode_backend__bytecode__debug_determinism_4_p_0(OutputStream_5, Detism_13);
        bytecode_backend__bytecode__debug_length_4_p_0(OutputStream_5, LabelCount_14);
        bytecode_backend__bytecode__debug_label_id_4_p_0(OutputStream_5, LabelId_15);
        bytecode_backend__bytecode__debug_length_4_p_0(OutputStream_5, TempCount_16);
        bytecode_backend__bytecode__debug_length_4_p_0(OutputStream_5, VarCount_18);
        bytecode_backend__bytecode__debug_var_infos_4_p_0(OutputStream_5, Vars_17);
      }
      break;
    case (MR_Integer) 3:
      switch (((MR_Integer) ((MR_hl_field(3, ByteCode_6, (MR_Integer) 0))))) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 0:
          {
            MR_Integer LabelId_128 = ((MR_Integer) ((MR_hl_field(3, ByteCode_6, (MR_Integer) 1))));

            bytecode_backend__bytecode__debug_label_id_4_p_0(OutputStream_5, LabelId_128);
          }
          break;
        case (MR_Integer) 1:
          {
            MR_Integer LabelId_129 = ((MR_Integer) ((MR_hl_field(3, ByteCode_6, (MR_Integer) 1))));

            bytecode_backend__bytecode__debug_label_id_4_p_0(OutputStream_5, LabelId_129);
          }
          break;
        case (MR_Integer) 2:
          {
            MR_Integer LabelId_130 = ((MR_Integer) ((MR_hl_field(3, ByteCode_6, (MR_Integer) 1))));

            bytecode_backend__bytecode__debug_label_id_4_p_0(OutputStream_5, LabelId_130);
          }
          break;
        case (MR_Integer) 3:
          {
            MR_Integer LabelId_131 = ((MR_Integer) ((MR_hl_field(3, ByteCode_6, (MR_Integer) 1))));

            bytecode_backend__bytecode__debug_label_id_4_p_0(OutputStream_5, LabelId_131);
          }
          break;
        case (MR_Integer) 4:
          {
            MR_Integer Var_19 = ((MR_Integer) ((MR_hl_field(3, ByteCode_6, (MR_Integer) 1))));
            MR_Integer LabelId_132 = ((MR_Integer) ((MR_hl_field(3, ByteCode_6, (MR_Integer) 2))));

            bytecode_backend__bytecode__debug_var_4_p_0(OutputStream_5, Var_19);
            bytecode_backend__bytecode__debug_label_id_4_p_0(OutputStream_5, LabelId_132);
          }
          break;
        case (MR_Integer) 5:
          {
            MR_Word MainConsId_20 = ((MR_Word) ((MR_hl_field(3, ByteCode_6, (MR_Integer) 1))));
            MR_Word OtherConsIds_21 = ((MR_Word) ((MR_hl_field(3, ByteCode_6, (MR_Integer) 2))));
            MR_Integer NextLabelId_22 = ((MR_Integer) ((MR_hl_field(3, ByteCode_6, (MR_Integer) 3))));
            MR_Word Var_66;
            MR_Box conv0_STATE_VARIABLE_IO_67_67;

            bytecode_backend__bytecode__debug_cons_id_4_p_0(OutputStream_5, MainConsId_20);
            {
              Var_66 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
              MR_hl_field(0, Var_66, 0) = ((MR_Box) (&bytecode_backend__bytecode_scalar_common_7[0]));
              MR_hl_field(0, Var_66, 1) = ((MR_Box) (bytecode_backend__bytecode__debug_args_4_p_0_1));
              MR_hl_field(0, Var_66, 2) = ((MR_Box) ((MR_Integer) 1));
              MR_hl_field(0, Var_66, 3) = ((MR_Box) (OutputStream_5));
            }
            mercury__list__foldl_4_p_2((MR_Word) (&bytecode_backend__bytecode__bytecode_backend__bytecode__type_ctor_info_byte_cons_id_0), (MR_Word) (&mercury__io__io__type_ctor_info_state_0), Var_66, OtherConsIds_21, ((MR_Box) ((MR_Integer) 0)), &conv0_STATE_VARIABLE_IO_67_67);
            bytecode_backend__bytecode__debug_label_id_4_p_0(OutputStream_5, NextLabelId_22);
          }
          break;
        case (MR_Integer) 6:
          {
            MR_Integer LabelId_133 = ((MR_Integer) ((MR_hl_field(3, ByteCode_6, (MR_Integer) 1))));

            bytecode_backend__bytecode__debug_label_id_4_p_0(OutputStream_5, LabelId_133);
          }
          break;
        case (MR_Integer) 7:
          {
            MR_Integer ElseLabelId_23 = ((MR_Integer) ((MR_hl_field(3, ByteCode_6, (MR_Integer) 1))));
            MR_Integer FollowLabelId_24 = ((MR_Integer) ((MR_hl_field(3, ByteCode_6, (MR_Integer) 2))));
            MR_Integer FramePtrTemp_25 = ((MR_Integer) ((MR_hl_field(3, ByteCode_6, (MR_Integer) 3))));

            bytecode_backend__bytecode__debug_label_id_4_p_0(OutputStream_5, ElseLabelId_23);
            bytecode_backend__bytecode__debug_label_id_4_p_0(OutputStream_5, FollowLabelId_24);
            bytecode_backend__bytecode__debug_temp_4_p_0(OutputStream_5, FramePtrTemp_25);
          }
          break;
        case (MR_Integer) 8:
          {
            MR_Integer FramePtrTemp_134 = ((MR_Integer) ((MR_hl_field(3, ByteCode_6, (MR_Integer) 1))));

            bytecode_backend__bytecode__debug_temp_4_p_0(OutputStream_5, FramePtrTemp_134);
          }
          break;
        case (MR_Integer) 9:
          {
            MR_Integer FollowLabelId_135 = ((MR_Integer) ((MR_hl_field(3, ByteCode_6, (MR_Integer) 1))));

            bytecode_backend__bytecode__debug_label_id_4_p_0(OutputStream_5, FollowLabelId_135);
          }
          break;
        case (MR_Integer) 10:
          {
            MR_Integer FramePtrTemp_136 = ((MR_Integer) ((MR_hl_field(3, ByteCode_6, (MR_Integer) 1))));

            bytecode_backend__bytecode__debug_temp_4_p_0(OutputStream_5, FramePtrTemp_136);
          }
          break;
        case (MR_Integer) 11:
          {
            MR_Integer LabelId_137 = ((MR_Integer) ((MR_hl_field(3, ByteCode_6, (MR_Integer) 2))));
            MR_Integer FramePtrTemp_138 = ((MR_Integer) ((MR_hl_field(3, ByteCode_6, (MR_Integer) 1))));

            bytecode_backend__bytecode__debug_temp_4_p_0(OutputStream_5, FramePtrTemp_138);
            bytecode_backend__bytecode__debug_label_id_4_p_0(OutputStream_5, LabelId_137);
          }
          break;
        case (MR_Integer) 12:
          {
            MR_Integer FramePtrTemp_139 = ((MR_Integer) ((MR_hl_field(3, ByteCode_6, (MR_Integer) 1))));

            bytecode_backend__bytecode__debug_temp_4_p_0(OutputStream_5, FramePtrTemp_139);
          }
          break;
        case (MR_Integer) 13:
          {
            MR_Integer Temp_26 = ((MR_Integer) ((MR_hl_field(3, ByteCode_6, (MR_Integer) 1))));

            bytecode_backend__bytecode__debug_temp_4_p_0(OutputStream_5, Temp_26);
          }
          break;
        case (MR_Integer) 14:
          {
            MR_Integer Temp_140 = ((MR_Integer) ((MR_hl_field(3, ByteCode_6, (MR_Integer) 1))));

            bytecode_backend__bytecode__debug_temp_4_p_0(OutputStream_5, Temp_140);
          }
          break;
        case (MR_Integer) 15:
          {
            MR_Integer Var1_27 = ((MR_Integer) ((MR_hl_field(3, ByteCode_6, (MR_Integer) 1))));
            MR_Integer Var2_28 = ((MR_Integer) ((MR_hl_field(3, ByteCode_6, (MR_Integer) 2))));

            bytecode_backend__bytecode__debug_var_4_p_0(OutputStream_5, Var1_27);
            bytecode_backend__bytecode__debug_var_4_p_0(OutputStream_5, Var2_28);
          }
          break;
        case (MR_Integer) 16:
          {
            MR_Word TestId_29 = ((MR_Unsigned) ((MR_hl_field(3, ByteCode_6, (MR_Integer) 3))) & (MR_Integer) 7);
            MR_Integer Var1_141 = ((MR_Integer) ((MR_hl_field(3, ByteCode_6, (MR_Integer) 1))));
            MR_Integer Var2_142 = ((MR_Integer) ((MR_hl_field(3, ByteCode_6, (MR_Integer) 2))));

            bytecode_backend__bytecode__debug_var_4_p_0(OutputStream_5, Var1_141);
            bytecode_backend__bytecode__debug_var_4_p_0(OutputStream_5, Var2_142);
            bytecode_backend__bytecode__debug_test_id_4_p_0(OutputStream_5, TestId_29);
          }
          break;
        case (MR_Integer) 17:
          {
            MR_Word ConsId_30 = ((MR_Word) ((MR_hl_field(3, ByteCode_6, (MR_Integer) 2))));
            MR_Integer NumVars_31;
            MR_Word Vars_143 = ((MR_Word) ((MR_hl_field(3, ByteCode_6, (MR_Integer) 3))));
            MR_Integer Var_144 = ((MR_Integer) ((MR_hl_field(3, ByteCode_6, (MR_Integer) 1))));

            mercury__list__length_2_p_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_int_0), Vars_143, &NumVars_31);
            bytecode_backend__bytecode__debug_var_4_p_0(OutputStream_5, Var_144);
            bytecode_backend__bytecode__debug_cons_id_4_p_0(OutputStream_5, ConsId_30);
            bytecode_backend__bytecode__debug_length_4_p_0(OutputStream_5, NumVars_31);
            bytecode_backend__bytecode__debug_vars_4_p_0(OutputStream_5, Vars_143);
          }
          break;
        case (MR_Integer) 18:
          {
            MR_Word Vars_145 = ((MR_Word) ((MR_hl_field(3, ByteCode_6, (MR_Integer) 3))));
            MR_Integer Var_146 = ((MR_Integer) ((MR_hl_field(3, ByteCode_6, (MR_Integer) 1))));
            MR_Word ConsId_147 = ((MR_Word) ((MR_hl_field(3, ByteCode_6, (MR_Integer) 2))));
            MR_Integer NumVars_148;

            mercury__list__length_2_p_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_int_0), Vars_145, &NumVars_148);
            bytecode_backend__bytecode__debug_var_4_p_0(OutputStream_5, Var_146);
            bytecode_backend__bytecode__debug_cons_id_4_p_0(OutputStream_5, ConsId_147);
            bytecode_backend__bytecode__debug_length_4_p_0(OutputStream_5, NumVars_148);
            bytecode_backend__bytecode__debug_vars_4_p_0(OutputStream_5, Vars_145);
          }
          break;
        case (MR_Integer) 19:
          {
            MR_Word VarDirs_32 = ((MR_Word) ((MR_hl_field(3, ByteCode_6, (MR_Integer) 3))));
            MR_Integer Length_33;
            MR_Integer Var_149 = ((MR_Integer) ((MR_hl_field(3, ByteCode_6, (MR_Integer) 1))));
            MR_Word ConsId_150 = ((MR_Word) ((MR_hl_field(3, ByteCode_6, (MR_Integer) 2))));

            mercury__list__length_2_p_0((MR_Word) (&bytecode_backend__bytecode_scalar_common_2[0]), VarDirs_32, &Length_33);
            bytecode_backend__bytecode__debug_var_4_p_0(OutputStream_5, Var_149);
            bytecode_backend__bytecode__debug_cons_id_4_p_0(OutputStream_5, ConsId_150);
            bytecode_backend__bytecode__debug_length_4_p_0(OutputStream_5, Length_33);
            bytecode_backend__bytecode__debug_var_dirs_4_p_0(OutputStream_5, VarDirs_32);
          }
          break;
        case (MR_Integer) 20:
          {
            MR_Integer NumVarDirs_34;
            MR_Integer Var_151 = ((MR_Integer) ((MR_hl_field(3, ByteCode_6, (MR_Integer) 1))));
            MR_Word ConsId_152 = ((MR_Word) ((MR_hl_field(3, ByteCode_6, (MR_Integer) 2))));
            MR_Word VarDirs_153 = ((MR_Word) ((MR_hl_field(3, ByteCode_6, (MR_Integer) 3))));

            mercury__list__length_2_p_0((MR_Word) (&bytecode_backend__bytecode_scalar_common_2[0]), VarDirs_153, &NumVarDirs_34);
            bytecode_backend__bytecode__debug_var_4_p_0(OutputStream_5, Var_151);
            bytecode_backend__bytecode__debug_cons_id_4_p_0(OutputStream_5, ConsId_152);
            bytecode_backend__bytecode__debug_length_4_p_0(OutputStream_5, NumVarDirs_34);
            bytecode_backend__bytecode__debug_var_dirs_4_p_0(OutputStream_5, VarDirs_153);
          }
          break;
        case (MR_Integer) 21:
          {
            MR_Integer RegNum_36 = ((MR_Integer) ((MR_hl_field(3, ByteCode_6, (MR_Integer) 2))));
            MR_Integer Var_154 = ((MR_Integer) ((MR_hl_field(3, ByteCode_6, (MR_Integer) 3))));

            bytecode_backend__bytecode__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_100_101_98_117_103_95_114_101_103_95_95_91_50_93_95_48_5_p_0(OutputStream_5, RegNum_36);
            bytecode_backend__bytecode__debug_var_4_p_0(OutputStream_5, Var_154);
          }
          break;
        case (MR_Integer) 22:
          {
            MR_Integer Var_155 = ((MR_Integer) ((MR_hl_field(3, ByteCode_6, (MR_Integer) 3))));
            MR_Integer RegNum_157 = ((MR_Integer) ((MR_hl_field(3, ByteCode_6, (MR_Integer) 2))));

            bytecode_backend__bytecode__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_100_101_98_117_103_95_114_101_103_95_95_91_50_93_95_48_5_p_0(OutputStream_5, RegNum_157);
            bytecode_backend__bytecode__debug_var_4_p_0(OutputStream_5, Var_155);
          }
          break;
        case (MR_Integer) 23:
          {
            MR_Word ModuleId_37 = ((MR_Word) ((MR_hl_field(3, ByteCode_6, (MR_Integer) 1))));
            MR_Integer Arity_38 = ((MR_Integer) ((MR_hl_field(3, ByteCode_6, (MR_Integer) 3))));
            MR_String PredId_158 = ((MR_String) ((MR_hl_field(3, ByteCode_6, (MR_Integer) 2))));
            MR_Integer IsFunc_159 = ((MR_Integer) ((MR_hl_field(3, ByteCode_6, (MR_Integer) 4))));
            MR_Integer ProcId_160 = ((MR_Integer) ((MR_hl_field(3, ByteCode_6, (MR_Integer) 5))));

            bytecode_backend__bytecode__debug_module_id_4_p_0(OutputStream_5, ModuleId_37);
            bytecode_backend__bytecode__debug_pred_id_4_p_0(OutputStream_5, PredId_158);
            bytecode_backend__bytecode__debug_length_4_p_0(OutputStream_5, Arity_38);
            bytecode_backend__bytecode__debug_is_func_4_p_0(OutputStream_5, IsFunc_159);
            bytecode_backend__bytecode__debug_proc_id_4_p_0(OutputStream_5, ProcId_160);
          }
          break;
        case (MR_Integer) 24:
          {
            MR_Integer PredVar_39 = ((MR_Integer) ((MR_hl_field(3, ByteCode_6, (MR_Integer) 1))));
            MR_Integer InVarCount_40 = ((MR_Integer) ((MR_hl_field(3, ByteCode_6, (MR_Integer) 2))));
            MR_Integer OutVarCount_41 = ((MR_Integer) ((MR_hl_field(3, ByteCode_6, (MR_Integer) 3))));
            MR_Word Detism_161 = ((MR_Unsigned) ((MR_hl_field(3, ByteCode_6, (MR_Integer) 4))) & (MR_Integer) 7);

            bytecode_backend__bytecode__debug_var_4_p_0(OutputStream_5, PredVar_39);
            bytecode_backend__bytecode__debug_length_4_p_0(OutputStream_5, InVarCount_40);
            bytecode_backend__bytecode__debug_length_4_p_0(OutputStream_5, OutVarCount_41);
            bytecode_backend__bytecode__debug_determinism_4_p_0(OutputStream_5, Detism_161);
          }
          break;
        case (MR_Integer) 25:
          {
            MR_Word Binop_42 = ((MR_Word) ((MR_hl_field(3, ByteCode_6, (MR_Integer) 1))));
            MR_Integer Var3_43 = ((MR_Integer) ((MR_hl_field(3, ByteCode_6, (MR_Integer) 4))));
            MR_Word Var1_162 = ((MR_Word) ((MR_hl_field(3, ByteCode_6, (MR_Integer) 2))));
            MR_Word Var2_163 = ((MR_Word) ((MR_hl_field(3, ByteCode_6, (MR_Integer) 3))));

            bytecode_backend__bytecode__debug_binop_4_p_0(OutputStream_5, Binop_42);
            bytecode_backend__bytecode__debug_arg_4_p_0(OutputStream_5, Var1_162);
            bytecode_backend__bytecode__debug_arg_4_p_0(OutputStream_5, Var2_163);
            bytecode_backend__bytecode__debug_var_4_p_0(OutputStream_5, Var3_43);
          }
          break;
        case (MR_Integer) 26:
          {
            MR_Word Unop_44 = ((MR_Word) ((MR_hl_field(3, ByteCode_6, (MR_Integer) 1))));
            MR_Word Var1_164 = ((MR_Word) ((MR_hl_field(3, ByteCode_6, (MR_Integer) 2))));
            MR_Integer Var2_165 = ((MR_Integer) ((MR_hl_field(3, ByteCode_6, (MR_Integer) 3))));

            bytecode_backend__bytecode__debug_unop_4_p_0(OutputStream_5, Unop_44);
            bytecode_backend__bytecode__debug_arg_4_p_0(OutputStream_5, Var1_164);
            bytecode_backend__bytecode__debug_var_4_p_0(OutputStream_5, Var2_165);
          }
          break;
        case (MR_Integer) 27:
          {
            MR_Word Var1_166 = ((MR_Word) ((MR_hl_field(3, ByteCode_6, (MR_Integer) 2))));
            MR_Word Var2_167 = ((MR_Word) ((MR_hl_field(3, ByteCode_6, (MR_Integer) 3))));
            MR_Word Binop_168 = ((MR_Word) ((MR_hl_field(3, ByteCode_6, (MR_Integer) 1))));

            bytecode_backend__bytecode__debug_binop_4_p_0(OutputStream_5, Binop_168);
            bytecode_backend__bytecode__debug_arg_4_p_0(OutputStream_5, Var1_166);
            bytecode_backend__bytecode__debug_arg_4_p_0(OutputStream_5, Var2_167);
          }
          break;
        case (MR_Integer) 28:
          {
            MR_Word Var1_169 = ((MR_Word) ((MR_hl_field(3, ByteCode_6, (MR_Integer) 2))));
            MR_Word Unop_170 = ((MR_Word) ((MR_hl_field(3, ByteCode_6, (MR_Integer) 1))));

            bytecode_backend__bytecode__debug_unop_4_p_0(OutputStream_5, Unop_170);
            bytecode_backend__bytecode__debug_arg_4_p_0(OutputStream_5, Var1_169);
          }
          break;
        case (MR_Integer) 29:
          {
            MR_Integer Line_45 = ((MR_Integer) ((MR_hl_field(3, ByteCode_6, (MR_Integer) 1))));

            bytecode_backend__bytecode__debug_int_4_p_0(OutputStream_5, Line_45);
          }
          break;
      }
      break;
  }
}

static void MR_CALL 
bytecode_backend__bytecode__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_100_101_98_117_103_95_114_101_103_95_95_91_50_93_95_48_5_p_0(
  MR_Word OutputStream_6,
  MR_Integer N_7)
{
  mercury__io__write_int_4_p_0(OutputStream_6, N_7);
  mercury__io__write_char_4_p_0(OutputStream_6, (MR_Char) 32);
}

static void MR_CALL 
bytecode_backend__bytecode__debug_unop_4_p_0(
  MR_Word OutputStream_5,
  MR_Word Unop_6)
{
  MR_String Debug_8;

  switch (MR_tag((MR_Word) Unop_6)) {
    default: /*NOTREACHED*/ MR_assert(0);
    case (MR_Integer) 0:
      switch (MR_unmkbody(Unop_6)) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 0:
          Debug_8 = (MR_String) "tag";
          break;
        case (MR_Integer) 1:
          Debug_8 = (MR_String) "strip_tag";
          break;
        case (MR_Integer) 2:
          Debug_8 = (MR_String) "mkbody";
          break;
        case (MR_Integer) 3:
          Debug_8 = (MR_String) "unmkbody";
          break;
        case (MR_Integer) 4:
          Debug_8 = (MR_String) "not";
          break;
        case (MR_Integer) 5:
          Debug_8 = (MR_String) "hash_string";
          break;
        case (MR_Integer) 6:
          Debug_8 = (MR_String) "hash_string2";
          break;
        case (MR_Integer) 7:
          Debug_8 = (MR_String) "hash_string3";
          break;
        case (MR_Integer) 8:
          Debug_8 = (MR_String) "hash_string4";
          break;
        case (MR_Integer) 9:
          Debug_8 = (MR_String) "hash_string5";
          break;
        case (MR_Integer) 10:
          Debug_8 = (MR_String) "hash_string6";
          break;
        case (MR_Integer) 11:
          Debug_8 = (MR_String) "dword_float_get_word0";
          break;
        case (MR_Integer) 12:
          Debug_8 = (MR_String) "dword_float_get_word1";
          break;
        case (MR_Integer) 13:
          Debug_8 = (MR_String) "dword_int64_get_word0";
          break;
        case (MR_Integer) 14:
          Debug_8 = (MR_String) "dword_int64_get_word1";
          break;
        case (MR_Integer) 15:
          Debug_8 = (MR_String) "dword_uint64_get_word0";
          break;
        case (MR_Integer) 16:
          Debug_8 = (MR_String) "dword_uint64_get_word1";
          break;
      }
      break;
    case (MR_Integer) 1:
      {
        MR_Word Var_21 = ((MR_Unsigned) ((MR_hl_field(1, Unop_6, (MR_Integer) 0))) & (MR_Integer) 15);

        Debug_8 = ((&bytecode_backend__bytecode_vector_common_6[194 + Var_21]))->bytecode_backend__bytecode__vector_common_type_6_0__vct_6_f_0;
      }
      break;
  }
  mercury__io__write_string_4_p_0(OutputStream_5, Debug_8);
  mercury__io__write_char_4_p_0(OutputStream_5, (MR_Char) 32);
}

static void MR_CALL 
bytecode_backend__bytecode__debug_binop_4_p_0(
  MR_Word BinaryOutputStream_5,
  MR_Word Binop_6)
{
  MR_String Debug_8;

  bytecode_backend__bytecode__binop_debug_2_p_0(Binop_6, &Debug_8);
  mercury__io__write_string_4_p_0(BinaryOutputStream_5, Debug_8);
  mercury__io__write_char_4_p_0(BinaryOutputStream_5, (MR_Char) 32);
}

static void MR_CALL 
bytecode_backend__bytecode__binop_debug_2_p_0(
  MR_Word HeadVar__1_1,
  MR_String * HeadVar__2_2)
{
  switch (MR_tag((MR_Word) HeadVar__1_1)) {
    default: /*NOTREACHED*/ MR_assert(0);
    case (MR_Integer) 0:
      switch (MR_unmkbody(HeadVar__1_1)) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 0:
          *HeadVar__2_2 = (MR_String) "and";
          break;
        case (MR_Integer) 1:
          *HeadVar__2_2 = (MR_String) "or";
          break;
        case (MR_Integer) 2:
          *HeadVar__2_2 = (MR_String) "body";
          break;
        case (MR_Integer) 3:
          *HeadVar__2_2 = (MR_String) "string_unsafe_index_code_unit";
          break;
        case (MR_Integer) 4:
          *HeadVar__2_2 = (MR_String) "str_eq";
          break;
        case (MR_Integer) 5:
          *HeadVar__2_2 = (MR_String) "str_ne";
          break;
        case (MR_Integer) 6:
          *HeadVar__2_2 = (MR_String) "str_lt";
          break;
        case (MR_Integer) 7:
          *HeadVar__2_2 = (MR_String) "str_gt";
          break;
        case (MR_Integer) 8:
          *HeadVar__2_2 = (MR_String) "str_le";
          break;
        case (MR_Integer) 9:
          *HeadVar__2_2 = (MR_String) "str_ge";
          break;
        case (MR_Integer) 10:
          *HeadVar__2_2 = (MR_String) "strcmp";
          break;
        case (MR_Integer) 11:
          *HeadVar__2_2 = (MR_String) "unsigned_lt";
          break;
        case (MR_Integer) 12:
          *HeadVar__2_2 = (MR_String) "unsigned_le";
          break;
        case (MR_Integer) 13:
          *HeadVar__2_2 = (MR_String) "float_add";
          break;
        case (MR_Integer) 14:
          *HeadVar__2_2 = (MR_String) "float_sub";
          break;
        case (MR_Integer) 15:
          *HeadVar__2_2 = (MR_String) "float_mul";
          break;
        case (MR_Integer) 16:
          *HeadVar__2_2 = (MR_String) "float_div";
          break;
        case (MR_Integer) 17:
          *HeadVar__2_2 = (MR_String) "float_eq";
          break;
        case (MR_Integer) 18:
          *HeadVar__2_2 = (MR_String) "float_ne";
          break;
        case (MR_Integer) 19:
          *HeadVar__2_2 = (MR_String) "float_lt";
          break;
        case (MR_Integer) 20:
          *HeadVar__2_2 = (MR_String) "float_gt";
          break;
        case (MR_Integer) 21:
          *HeadVar__2_2 = (MR_String) "float_le";
          break;
        case (MR_Integer) 22:
          *HeadVar__2_2 = (MR_String) "float_ge";
          break;
        case (MR_Integer) 23:
          *HeadVar__2_2 = (MR_String) "float_from_dword";
          break;
        case (MR_Integer) 24:
          *HeadVar__2_2 = (MR_String) "int64_from_dword";
          break;
        case (MR_Integer) 25:
          *HeadVar__2_2 = (MR_String) "uint64_from_dword";
          break;
        case (MR_Integer) 26:
          *HeadVar__2_2 = (MR_String) "pointer_equal_conservative";
          break;
        case (MR_Integer) 27:
          *HeadVar__2_2 = (MR_String) "compound_eq";
          break;
        case (MR_Integer) 28:
          *HeadVar__2_2 = (MR_String) "compound_lt";
          break;
      }
      break;
    case (MR_Integer) 1:
      {
        MR_Word Var_229 = ((MR_Unsigned) ((MR_hl_field(1, HeadVar__1_1, (MR_Integer) 0))) & (MR_Integer) 15);

        *HeadVar__2_2 = ((&bytecode_backend__bytecode_vector_common_6[54 + Var_229]))->bytecode_backend__bytecode__vector_common_type_6_0__vct_6_f_0;
      }
      break;
    case (MR_Integer) 2:
      {
        MR_Word Var_237 = ((MR_Unsigned) ((MR_hl_field(2, HeadVar__1_1, (MR_Integer) 0))) & (MR_Integer) 15);

        *HeadVar__2_2 = ((&bytecode_backend__bytecode_vector_common_6[134 + Var_237]))->bytecode_backend__bytecode__vector_common_type_6_0__vct_6_f_0;
      }
      break;
    case (MR_Integer) 3:
      switch (((MR_Integer) ((MR_hl_field(3, HeadVar__1_1, (MR_Integer) 0))))) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 0:
          {
            MR_Word Var_236 = ((MR_Unsigned) ((MR_hl_field(3, HeadVar__1_1, (MR_Integer) 1))) & (MR_Integer) 15);

            *HeadVar__2_2 = ((&bytecode_backend__bytecode_vector_common_6[124 + Var_236]))->bytecode_backend__bytecode__vector_common_type_6_0__vct_6_f_0;
          }
          break;
        case (MR_Integer) 1:
          {
            MR_Word Var_230 = ((MR_Unsigned) ((MR_hl_field(3, HeadVar__1_1, (MR_Integer) 1))) & (MR_Integer) 15);

            *HeadVar__2_2 = ((&bytecode_backend__bytecode_vector_common_6[64 + Var_230]))->bytecode_backend__bytecode__vector_common_type_6_0__vct_6_f_0;
          }
          break;
        case (MR_Integer) 2:
          {
            MR_Word Var_235 = ((MR_Unsigned) ((MR_hl_field(3, HeadVar__1_1, (MR_Integer) 1))) & (MR_Integer) 15);

            *HeadVar__2_2 = ((&bytecode_backend__bytecode_vector_common_6[114 + Var_235]))->bytecode_backend__bytecode__vector_common_type_6_0__vct_6_f_0;
          }
          break;
        case (MR_Integer) 3:
          {
            MR_Word Var_239 = ((MR_Unsigned) ((MR_hl_field(3, HeadVar__1_1, (MR_Integer) 1))) & (MR_Integer) 1);
            MR_Word Var_240 = ((((MR_Unsigned) ((MR_hl_field(3, HeadVar__1_1, (MR_Integer) 1))) >> 1)) & (MR_Integer) 15);

            switch (Var_239) {
              default: /*NOTREACHED*/ MR_assert(0);
              case (MR_Integer) 0:
                *HeadVar__2_2 = ((&bytecode_backend__bytecode_vector_common_6[154 + Var_240]))->bytecode_backend__bytecode__vector_common_type_6_0__vct_6_f_0;
                break;
              case (MR_Integer) 1:
                *HeadVar__2_2 = ((&bytecode_backend__bytecode_vector_common_6[164 + Var_240]))->bytecode_backend__bytecode__vector_common_type_6_0__vct_6_f_0;
                break;
            }
          }
          break;
        case (MR_Integer) 4:
          {
            MR_Word Var_241 = ((MR_Unsigned) ((MR_hl_field(3, HeadVar__1_1, (MR_Integer) 1))) & (MR_Integer) 1);
            MR_Word Var_242 = ((((MR_Unsigned) ((MR_hl_field(3, HeadVar__1_1, (MR_Integer) 1))) >> 1)) & (MR_Integer) 15);

            switch (Var_241) {
              default: /*NOTREACHED*/ MR_assert(0);
              case (MR_Integer) 0:
                *HeadVar__2_2 = ((&bytecode_backend__bytecode_vector_common_6[174 + Var_242]))->bytecode_backend__bytecode__vector_common_type_6_0__vct_6_f_0;
                break;
              case (MR_Integer) 1:
                *HeadVar__2_2 = ((&bytecode_backend__bytecode_vector_common_6[184 + Var_242]))->bytecode_backend__bytecode__vector_common_type_6_0__vct_6_f_0;
                break;
            }
          }
          break;
        case (MR_Integer) 5:
          {
            MR_Word Var_225 = ((MR_Unsigned) ((MR_hl_field(3, HeadVar__1_1, (MR_Integer) 1))) & (MR_Integer) 15);

            *HeadVar__2_2 = ((&bytecode_backend__bytecode_vector_common_6[14 + Var_225]))->bytecode_backend__bytecode__vector_common_type_6_0__vct_6_f_0;
          }
          break;
        case (MR_Integer) 6:
          {
            MR_Word Var_226 = ((MR_Unsigned) ((MR_hl_field(3, HeadVar__1_1, (MR_Integer) 1))) & (MR_Integer) 15);

            *HeadVar__2_2 = ((&bytecode_backend__bytecode_vector_common_6[24 + Var_226]))->bytecode_backend__bytecode__vector_common_type_6_0__vct_6_f_0;
          }
          break;
        case (MR_Integer) 7:
          {
            MR_Word Var_227 = ((MR_Unsigned) ((MR_hl_field(3, HeadVar__1_1, (MR_Integer) 1))) & (MR_Integer) 15);

            *HeadVar__2_2 = ((&bytecode_backend__bytecode_vector_common_6[34 + Var_227]))->bytecode_backend__bytecode__vector_common_type_6_0__vct_6_f_0;
          }
          break;
        case (MR_Integer) 8:
          {
            MR_Word Var_228 = ((MR_Unsigned) ((MR_hl_field(3, HeadVar__1_1, (MR_Integer) 1))) & (MR_Integer) 15);

            *HeadVar__2_2 = ((&bytecode_backend__bytecode_vector_common_6[44 + Var_228]))->bytecode_backend__bytecode__vector_common_type_6_0__vct_6_f_0;
          }
          break;
        case (MR_Integer) 9:
          {
            MR_Word Var_238 = ((MR_Unsigned) ((MR_hl_field(3, HeadVar__1_1, (MR_Integer) 1))) & (MR_Integer) 15);

            *HeadVar__2_2 = ((&bytecode_backend__bytecode_vector_common_6[144 + Var_238]))->bytecode_backend__bytecode__vector_common_type_6_0__vct_6_f_0;
          }
          break;
        case (MR_Integer) 10:
          *HeadVar__2_2 = (MR_String) "array_index";
          break;
        case (MR_Integer) 11:
          *HeadVar__2_2 = (MR_String) "offset_str_eq";
          break;
        case (MR_Integer) 12:
          {
            MR_Word Var_234 = ((MR_Unsigned) ((MR_hl_field(3, HeadVar__1_1, (MR_Integer) 1))) & (MR_Integer) 15);

            *HeadVar__2_2 = ((&bytecode_backend__bytecode_vector_common_6[104 + Var_234]))->bytecode_backend__bytecode__vector_common_type_6_0__vct_6_f_0;
          }
          break;
        case (MR_Integer) 13:
          {
            MR_Word Var_232 = ((MR_Unsigned) ((MR_hl_field(3, HeadVar__1_1, (MR_Integer) 1))) & (MR_Integer) 15);

            *HeadVar__2_2 = ((&bytecode_backend__bytecode_vector_common_6[84 + Var_232]))->bytecode_backend__bytecode__vector_common_type_6_0__vct_6_f_0;
          }
          break;
        case (MR_Integer) 14:
          {
            MR_Word Var_233 = ((MR_Unsigned) ((MR_hl_field(3, HeadVar__1_1, (MR_Integer) 1))) & (MR_Integer) 15);

            *HeadVar__2_2 = ((&bytecode_backend__bytecode_vector_common_6[94 + Var_233]))->bytecode_backend__bytecode__vector_common_type_6_0__vct_6_f_0;
          }
          break;
        case (MR_Integer) 15:
          {
            MR_Word Var_231 = ((MR_Unsigned) ((MR_hl_field(3, HeadVar__1_1, (MR_Integer) 1))) & (MR_Integer) 15);

            *HeadVar__2_2 = ((&bytecode_backend__bytecode_vector_common_6[74 + Var_231]))->bytecode_backend__bytecode__vector_common_type_6_0__vct_6_f_0;
          }
          break;
      }
      break;
  }
}

static void MR_CALL 
bytecode_backend__bytecode__debug_cons_id_4_p_0(
  MR_Word OutputStream_5,
  MR_Word ConsId_6)
{
  switch (MR_tag((MR_Word) ConsId_6)) {
    default: /*NOTREACHED*/ MR_assert(0);
    case (MR_Integer) 0:
      switch (MR_unmkbody(ConsId_6)) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 0:
          bytecode_backend__bytecode__debug_string_4_p_0(OutputStream_5, (MR_String) "type_info_cell_constructor");
          break;
        case (MR_Integer) 1:
          bytecode_backend__bytecode__debug_string_4_p_0(OutputStream_5, (MR_String) "typeclass_info_cell_constructor");
          break;
      }
      break;
    case (MR_Integer) 1:
      {
        MR_Word ModuleId_8 = ((MR_Word) ((MR_hl_field(1, ConsId_6, (MR_Integer) 0))));
        MR_String Functor_9 = ((MR_String) ((MR_hl_field(1, ConsId_6, (MR_Integer) 1))));
        MR_Integer Arity_10 = ((MR_Integer) ((MR_hl_field(1, ConsId_6, (MR_Integer) 2))));
        MR_Word Tag_11 = ((MR_Word) ((MR_hl_field(1, ConsId_6, (MR_Integer) 3))));

        mercury__io__write_string_4_p_0(OutputStream_5, (MR_String) "functor");
        mercury__io__write_char_4_p_0(OutputStream_5, (MR_Char) 32);
        bytecode_backend__bytecode__debug_sym_name_4_p_0(OutputStream_5, ModuleId_8);
        mercury__io__write_string_4_p_0(OutputStream_5, Functor_9);
        mercury__io__write_char_4_p_0(OutputStream_5, (MR_Char) 32);
        mercury__io__write_int_4_p_0(OutputStream_5, Arity_10);
        mercury__io__write_char_4_p_0(OutputStream_5, (MR_Char) 32);
        bytecode_backend__bytecode__debug_tag_4_p_0(OutputStream_5, Tag_11);
      }
      break;
    case (MR_Integer) 2:
      {
        MR_Integer IntVal_12 = ((MR_Integer) ((MR_hl_field(2, ConsId_6, (MR_Integer) 0))));

        mercury__io__write_string_4_p_0(OutputStream_5, (MR_String) "int_const");
        mercury__io__write_char_4_p_0(OutputStream_5, (MR_Char) 32);
        mercury__io__write_int_4_p_0(OutputStream_5, IntVal_12);
        mercury__io__write_char_4_p_0(OutputStream_5, (MR_Char) 32);
      }
      break;
    case (MR_Integer) 3:
      switch (((MR_Integer) ((MR_hl_field(3, ConsId_6, (MR_Integer) 0))))) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 0:
          {
            MR_String StringVal_13 = ((MR_String) ((MR_hl_field(3, ConsId_6, (MR_Integer) 1))));

            bytecode_backend__bytecode__debug_string_4_p_0(OutputStream_5, (MR_String) "string_const");
            bytecode_backend__bytecode__debug_cstring_4_p_0(OutputStream_5, StringVal_13);
          }
          break;
        case (MR_Integer) 1:
          {
            MR_Float FloatVal_14 = MR_unbox_float((MR_hl_field(3, ConsId_6, (MR_Integer) 1)));

            mercury__io__write_string_4_p_0(OutputStream_5, (MR_String) "float_const");
            mercury__io__write_char_4_p_0(OutputStream_5, (MR_Char) 32);
            mercury__io__write_float_4_p_0(OutputStream_5, FloatVal_14);
            mercury__io__write_char_4_p_0(OutputStream_5, (MR_Char) 32);
          }
          break;
        case (MR_Integer) 2:
          {
            MR_Char Char_24 = ((MR_Char) (MR_Word) (MR_hl_field(3, ConsId_6, (MR_Integer) 1)));
            MR_String String_25;
            MR_Word Var_65;

            {
              Var_65 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(1, Var_65, 0) = ((MR_Box) (MR_Word) (Char_24));
              MR_hl_field(1, Var_65, 1) = ((MR_Box) ((MR_Unsigned) 0U));
            }
            mercury__string__from_char_list_2_p_0(Var_65, &String_25);
            mercury__io__write_string_4_p_0(OutputStream_5, (MR_String) "char_const");
            mercury__io__write_char_4_p_0(OutputStream_5, (MR_Char) 32);
            mercury__io__write_string_4_p_0(OutputStream_5, String_25);
            mercury__io__write_char_4_p_0(OutputStream_5, (MR_Char) 32);
          }
          break;
        case (MR_Integer) 3:
          {
            MR_String PredId_15 = ((MR_String) ((MR_hl_field(3, ConsId_6, (MR_Integer) 2))));
            MR_Integer IsFunc_16 = ((MR_Integer) ((MR_hl_field(3, ConsId_6, (MR_Integer) 4))));
            MR_Integer ProcId_17 = ((MR_Integer) ((MR_hl_field(3, ConsId_6, (MR_Integer) 5))));
            MR_Word ModuleId_74 = ((MR_Word) ((MR_hl_field(3, ConsId_6, (MR_Integer) 1))));
            MR_Integer Arity_75 = ((MR_Integer) ((MR_hl_field(3, ConsId_6, (MR_Integer) 3))));

            mercury__io__write_string_4_p_0(OutputStream_5, (MR_String) "pred_const");
            mercury__io__write_char_4_p_0(OutputStream_5, (MR_Char) 32);
            bytecode_backend__bytecode__debug_sym_name_4_p_0(OutputStream_5, ModuleId_74);
            mercury__io__write_string_4_p_0(OutputStream_5, PredId_15);
            mercury__io__write_char_4_p_0(OutputStream_5, (MR_Char) 32);
            mercury__io__write_int_4_p_0(OutputStream_5, Arity_75);
            mercury__io__write_char_4_p_0(OutputStream_5, (MR_Char) 32);
            bytecode_backend__bytecode__debug_is_func_4_p_0(OutputStream_5, IsFunc_16);
            bytecode_backend__bytecode__debug_proc_id_4_p_0(OutputStream_5, ProcId_17);
          }
          break;
        case (MR_Integer) 4:
          {
            MR_String TypeName_18 = ((MR_String) ((MR_hl_field(3, ConsId_6, (MR_Integer) 2))));
            MR_Integer TypeArity_19 = ((MR_Integer) ((MR_hl_field(3, ConsId_6, (MR_Integer) 3))));
            MR_Word ModuleId_76 = ((MR_Word) ((MR_hl_field(3, ConsId_6, (MR_Integer) 1))));

            bytecode_backend__bytecode__debug_string_4_p_0(OutputStream_5, (MR_String) "type_ctor_info_const");
            bytecode_backend__bytecode__debug_sym_name_4_p_0(OutputStream_5, ModuleId_76);
            bytecode_backend__bytecode__debug_string_4_p_0(OutputStream_5, TypeName_18);
            bytecode_backend__bytecode__debug_int_4_p_0(OutputStream_5, TypeArity_19);
          }
          break;
        case (MR_Integer) 5:
          {
            MR_Word ClassId_20 = ((MR_Word) ((MR_hl_field(3, ConsId_6, (MR_Integer) 2))));
            MR_String Instance_21 = ((MR_String) ((MR_hl_field(3, ConsId_6, (MR_Integer) 3))));
            MR_Word ClassName_22 = ((MR_Word) ((MR_hl_field(0, ClassId_20, (MR_Integer) 0))));
            MR_Integer ClassArity_23 = ((MR_Integer) ((MR_hl_field(0, ClassId_20, (MR_Integer) 1))));
            MR_Word ModuleId_77 = ((MR_Word) ((MR_hl_field(3, ConsId_6, (MR_Integer) 1))));

            mercury__io__write_string_4_p_0(OutputStream_5, (MR_String) "base_typeclass_info_const");
            mercury__io__write_char_4_p_0(OutputStream_5, (MR_Char) 32);
            bytecode_backend__bytecode__debug_sym_name_4_p_0(OutputStream_5, ModuleId_77);
            mercury__io__write_string_4_p_0(OutputStream_5, (MR_String) "class_id");
            mercury__io__write_char_4_p_0(OutputStream_5, (MR_Char) 32);
            bytecode_backend__bytecode__debug_sym_name_4_p_0(OutputStream_5, ClassName_22);
            mercury__io__write_string_4_p_0(OutputStream_5, (MR_String) "/");
            mercury__io__write_char_4_p_0(OutputStream_5, (MR_Char) 32);
            mercury__io__write_int_4_p_0(OutputStream_5, ClassArity_23);
            mercury__io__write_char_4_p_0(OutputStream_5, (MR_Char) 32);
            mercury__io__write_string_4_p_0(OutputStream_5, Instance_21);
            mercury__io__write_char_4_p_0(OutputStream_5, (MR_Char) 32);
          }
          break;
      }
      break;
  }
}

static void MR_CALL 
bytecode_backend__bytecode__debug_cstring_4_p_0(
  MR_Word OutputStream_5,
  MR_String Str_6)
{
  backend_libs__c_util__output_quoted_string_c_4_p_0(OutputStream_5, Str_6);
  mercury__io__write_char_4_p_0(OutputStream_5, (MR_Char) 32);
}

static void MR_CALL 
bytecode_backend__bytecode__debug_tag_4_p_0(
  MR_Word BinaryOutputStream_5,
  MR_Word ConsTag_6)
{
  switch (MR_tag((MR_Word) ConsTag_6)) {
    default: /*NOTREACHED*/ MR_assert(0);
    case (MR_Integer) 0:
      {
        mercury__io__write_string_4_p_0(BinaryOutputStream_5, (MR_String) "no_tag");
        mercury__io__write_char_4_p_0(BinaryOutputStream_5, (MR_Char) 32);
      }
      break;
    case (MR_Integer) 1:
      {
        MR_Integer Primary_8 = ((MR_Integer) ((MR_hl_field(1, ConsTag_6, (MR_Integer) 0))));

        mercury__io__write_string_4_p_0(BinaryOutputStream_5, (MR_String) "unshared_tag");
        mercury__io__write_char_4_p_0(BinaryOutputStream_5, (MR_Char) 32);
        mercury__io__write_int_4_p_0(BinaryOutputStream_5, Primary_8);
        mercury__io__write_char_4_p_0(BinaryOutputStream_5, (MR_Char) 32);
      }
      break;
    case (MR_Integer) 2:
      {
        MR_Integer Secondary_9 = ((MR_Integer) ((MR_hl_field(2, ConsTag_6, (MR_Integer) 1))));
        MR_Integer Primary_29 = ((MR_Integer) ((MR_hl_field(2, ConsTag_6, (MR_Integer) 0))));

        mercury__io__write_string_4_p_0(BinaryOutputStream_5, (MR_String) "shared_remote_tag");
        mercury__io__write_char_4_p_0(BinaryOutputStream_5, (MR_Char) 32);
        mercury__io__write_int_4_p_0(BinaryOutputStream_5, Primary_29);
        mercury__io__write_char_4_p_0(BinaryOutputStream_5, (MR_Char) 32);
        mercury__io__write_int_4_p_0(BinaryOutputStream_5, Secondary_9);
        mercury__io__write_char_4_p_0(BinaryOutputStream_5, (MR_Char) 32);
      }
      break;
    case (MR_Integer) 3:
      switch (((MR_Integer) ((MR_hl_field(3, ConsTag_6, (MR_Integer) 0))))) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 0:
          {
            MR_Integer Primary_30 = ((MR_Integer) ((MR_hl_field(3, ConsTag_6, (MR_Integer) 1))));
            MR_Integer Secondary_31 = ((MR_Integer) ((MR_hl_field(3, ConsTag_6, (MR_Integer) 2))));

            mercury__io__write_string_4_p_0(BinaryOutputStream_5, (MR_String) "shared_local_tag");
            mercury__io__write_char_4_p_0(BinaryOutputStream_5, (MR_Char) 32);
            mercury__io__write_int_4_p_0(BinaryOutputStream_5, Primary_30);
            mercury__io__write_char_4_p_0(BinaryOutputStream_5, (MR_Char) 32);
            mercury__io__write_int_4_p_0(BinaryOutputStream_5, Secondary_31);
            mercury__io__write_char_4_p_0(BinaryOutputStream_5, (MR_Char) 32);
          }
          break;
        case (MR_Integer) 1:
          {
            MR_Integer Enum_10 = ((MR_Integer) ((MR_hl_field(3, ConsTag_6, (MR_Integer) 1))));

            mercury__io__write_string_4_p_0(BinaryOutputStream_5, (MR_String) "enum_tag");
            mercury__io__write_char_4_p_0(BinaryOutputStream_5, (MR_Char) 32);
            mercury__io__write_int_4_p_0(BinaryOutputStream_5, Enum_10);
            mercury__io__write_char_4_p_0(BinaryOutputStream_5, (MR_Char) 32);
          }
          break;
      }
      break;
  }
}

static void MR_CALL 
bytecode_backend__bytecode__debug_label_id_4_p_0(
  MR_Word OutputStream_5,
  MR_Integer LabelId_6)
{
  mercury__io__write_int_4_p_0(OutputStream_5, LabelId_6);
  mercury__io__write_char_4_p_0(OutputStream_5, (MR_Char) 32);
}

static void MR_CALL 
bytecode_backend__bytecode__debug_proc_id_4_p_0(
  MR_Word OutputStream_5,
  MR_Integer ProcId_6)
{
  mercury__io__write_int_4_p_0(OutputStream_5, ProcId_6);
  mercury__io__write_char_4_p_0(OutputStream_5, (MR_Char) 32);
}

static void MR_CALL 
bytecode_backend__bytecode__debug_pred_id_4_p_0(
  MR_Word OutputStream_5,
  MR_String PredId_6)
{
  mercury__io__write_string_4_p_0(OutputStream_5, PredId_6);
  mercury__io__write_char_4_p_0(OutputStream_5, (MR_Char) 32);
}

static void MR_CALL 
bytecode_backend__bytecode__debug_module_id_4_p_0(
  MR_Word OutputStream_5,
  MR_Word ModuleId_6)
{
  bytecode_backend__bytecode__debug_sym_name_4_p_0(OutputStream_5, ModuleId_6);
}

static void MR_CALL 
bytecode_backend__bytecode__debug_sym_name_4_p_0(
  MR_Word OutputStream_5,
  MR_Word SymName_6)
{
  if (((MR_tag((MR_Word) SymName_6)) == (MR_Integer) 1))
  {
    MR_Word ModuleName_9 = ((MR_Word) ((MR_hl_field(1, SymName_6, (MR_Integer) 0))));
    MR_String BaseName_21 = ((MR_String) ((MR_hl_field(1, SymName_6, (MR_Integer) 1))));

    bytecode_backend__bytecode__debug_sym_name_4_p_0(OutputStream_5, ModuleName_9);
    mercury__io__write_char_4_p_0(OutputStream_5, (MR_Char) 46);
    mercury__io__write_string_4_p_0(OutputStream_5, BaseName_21);
    mercury__io__write_char_4_p_0(OutputStream_5, (MR_Char) 32);
  }
  else
  {
    MR_String BaseName_8 = ((MR_String) ((MR_hl_field(0, SymName_6, (MR_Integer) 0))));

    mercury__io__write_string_4_p_0(OutputStream_5, BaseName_8);
    mercury__io__write_char_4_p_0(OutputStream_5, (MR_Char) 32);
  }
}

static void MR_CALL 
bytecode_backend__bytecode__debug_test_id_4_p_0(
  MR_Word OutputStream_5,
  MR_Word Test_6)
{
  MR_String TestStr_8 = ((&bytecode_backend__bytecode_vector_common_6[8 + Test_6]))->bytecode_backend__bytecode__vector_common_type_6_0__vct_6_f_0;

  mercury__io__write_string_4_p_0(OutputStream_5, TestStr_8);
  mercury__io__write_char_4_p_0(OutputStream_5, (MR_Char) 32);
}

static void MR_CALL 
bytecode_backend__bytecode__debug_var_dirs_4_p_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2)
{
  while (MR_TRUE)
  {
    // setup for model_det tailcalls optimized into a loop
    ;
    if (!((HeadVar__2_2 == (MR_Word) ((MR_Unsigned) 0U))))
    {
      MR_Integer Var_10;
      MR_Word Dir_11;
      MR_Word VarDirs_12 = ((MR_Word) ((MR_hl_field(1, HeadVar__2_2, (MR_Integer) 1))));
      MR_Word Var_16 = ((MR_Word) ((MR_hl_field(1, HeadVar__2_2, (MR_Integer) 0))));
      MR_Word next_value_of_HeadVar__2_2;

      Var_10 = ((MR_Integer) ((MR_hl_field(0, Var_16, (MR_Integer) 0))));
      Dir_11 = ((MR_Word) ((MR_hl_field(0, Var_16, (MR_Integer) 1))));
      mercury__io__write_int_4_p_0(HeadVar__1_1, Var_10);
      mercury__io__write_char_4_p_0(HeadVar__1_1, (MR_Char) 32);
      switch (Dir_11) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 0:
          {
            mercury__io__write_string_4_p_0(HeadVar__1_1, (MR_String) "to_arg");
            mercury__io__write_char_4_p_0(HeadVar__1_1, (MR_Char) 32);
          }
          break;
        case (MR_Integer) 2:
          {
            mercury__io__write_string_4_p_0(HeadVar__1_1, (MR_String) "to_none");
            mercury__io__write_char_4_p_0(HeadVar__1_1, (MR_Char) 32);
          }
          break;
        case (MR_Integer) 1:
          {
            mercury__io__write_string_4_p_0(HeadVar__1_1, (MR_String) "to_var");
            mercury__io__write_char_4_p_0(HeadVar__1_1, (MR_Char) 32);
          }
          break;
      }
      // direct tailcall eliminated
      ;
      next_value_of_HeadVar__2_2 = VarDirs_12;
      HeadVar__2_2 = next_value_of_HeadVar__2_2;
      continue;
    }
    break;
  }
}

static void MR_CALL 
bytecode_backend__bytecode__debug_temp_4_p_0(
  MR_Word OutputStream_5,
  MR_Integer Var_6)
{
  mercury__io__write_int_4_p_0(OutputStream_5, Var_6);
  mercury__io__write_char_4_p_0(OutputStream_5, (MR_Char) 32);
}

static void MR_CALL 
bytecode_backend__bytecode__debug_vars_4_p_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2)
{
  while (MR_TRUE)
  {
    // setup for model_det tailcalls optimized into a loop
    ;
    if (!((HeadVar__2_2 == (MR_Word) ((MR_Unsigned) 0U))))
    {
      MR_Integer Var_10 = ((MR_Integer) ((MR_hl_field(1, HeadVar__2_2, (MR_Integer) 0))));
      MR_Word Vars_11 = ((MR_Word) ((MR_hl_field(1, HeadVar__2_2, (MR_Integer) 1))));
      MR_Word next_value_of_HeadVar__2_2;

      mercury__io__write_int_4_p_0(HeadVar__1_1, Var_10);
      mercury__io__write_char_4_p_0(HeadVar__1_1, (MR_Char) 32);
      // direct tailcall eliminated
      ;
      next_value_of_HeadVar__2_2 = Vars_11;
      HeadVar__2_2 = next_value_of_HeadVar__2_2;
      continue;
    }
    break;
  }
}

static void MR_CALL 
bytecode_backend__bytecode__debug_arg_4_p_0(
  MR_Word OutputStream_1,
  MR_Word HeadVar__2_2)
{
  switch (MR_tag((MR_Word) HeadVar__2_2)) {
    default: /*NOTREACHED*/ MR_assert(0);
    case (MR_Integer) 0:
      {
        MR_Integer Var_6 = ((MR_Integer) ((MR_hl_field(0, HeadVar__2_2, (MR_Integer) 0))));

        bytecode_backend__bytecode__debug_string_4_p_0(OutputStream_1, (MR_String) "var");
        bytecode_backend__bytecode__debug_var_4_p_0(OutputStream_1, Var_6);
      }
      break;
    case (MR_Integer) 1:
      {
        MR_Integer IntVal_14 = ((MR_Integer) ((MR_hl_field(1, HeadVar__2_2, (MR_Integer) 0))));

        bytecode_backend__bytecode__debug_string_4_p_0(OutputStream_1, (MR_String) "int");
        bytecode_backend__bytecode__debug_int_4_p_0(OutputStream_1, IntVal_14);
      }
      break;
    case (MR_Integer) 2:
      {
        MR_Float FloatVal_94 = MR_unbox_float((MR_hl_field(2, HeadVar__2_2, (MR_Integer) 0)));

        mercury__io__write_string_4_p_0(OutputStream_1, (MR_String) "float");
        mercury__io__write_char_4_p_0(OutputStream_1, (MR_Char) 32);
        mercury__io__write_float_4_p_0(OutputStream_1, FloatVal_94);
        mercury__io__write_char_4_p_0(OutputStream_1, (MR_Char) 32);
      }
      break;
    case (MR_Integer) 3:
      switch (((MR_Integer) ((MR_hl_field(3, HeadVar__2_2, (MR_Integer) 0))))) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 0:
          {
            MR_Unsigned UIntVal_22 = ((MR_Unsigned) ((MR_hl_field(3, HeadVar__2_2, (MR_Integer) 1))));

            bytecode_backend__bytecode__debug_string_4_p_0(OutputStream_1, (MR_String) "uint");
            bytecode_backend__bytecode__debug_uint_4_p_0(OutputStream_1, UIntVal_22);
          }
          break;
        case (MR_Integer) 1:
          {
            int8_t Int8Val_30 = ((int8_t) (MR_Word) (MR_hl_field(3, HeadVar__2_2, (MR_Integer) 1)));

            mercury__io__write_string_4_p_0(OutputStream_1, (MR_String) "int8");
            mercury__io__write_char_4_p_0(OutputStream_1, (MR_Char) 32);
            mercury__io__write_int8_4_p_0(OutputStream_1, Int8Val_30);
            mercury__io__write_char_4_p_0(OutputStream_1, (MR_Char) 32);
          }
          break;
        case (MR_Integer) 2:
          {
            uint8_t UInt8Val_38 = ((uint8_t) (MR_Word) (MR_hl_field(3, HeadVar__2_2, (MR_Integer) 1)));

            bytecode_backend__bytecode__debug_string_4_p_0(OutputStream_1, (MR_String) "uint8");
            bytecode_backend__bytecode__debug_uint8_4_p_0(OutputStream_1, UInt8Val_38);
          }
          break;
        case (MR_Integer) 3:
          {
            int16_t Int16Val_46 = ((int16_t) (MR_Word) (MR_hl_field(3, HeadVar__2_2, (MR_Integer) 1)));

            mercury__io__write_string_4_p_0(OutputStream_1, (MR_String) "int16");
            mercury__io__write_char_4_p_0(OutputStream_1, (MR_Char) 32);
            mercury__io__write_int16_4_p_0(OutputStream_1, Int16Val_46);
            mercury__io__write_char_4_p_0(OutputStream_1, (MR_Char) 32);
          }
          break;
        case (MR_Integer) 4:
          {
            uint16_t UInt16Val_54 = ((uint16_t) (MR_Word) (MR_hl_field(3, HeadVar__2_2, (MR_Integer) 1)));

            bytecode_backend__bytecode__debug_string_4_p_0(OutputStream_1, (MR_String) "uint16");
            bytecode_backend__bytecode__debug_uint16_4_p_0(OutputStream_1, UInt16Val_54);
          }
          break;
        case (MR_Integer) 5:
          {
            int32_t Int32Val_62 = ((int32_t) (MR_Word) (MR_hl_field(3, HeadVar__2_2, (MR_Integer) 1)));

            mercury__io__write_string_4_p_0(OutputStream_1, (MR_String) "int32");
            mercury__io__write_char_4_p_0(OutputStream_1, (MR_Char) 32);
            mercury__io__write_int32_4_p_0(OutputStream_1, Int32Val_62);
            mercury__io__write_char_4_p_0(OutputStream_1, (MR_Char) 32);
          }
          break;
        case (MR_Integer) 6:
          {
            uint32_t UInt32Val_70 = ((uint32_t) (MR_Word) (MR_hl_field(3, HeadVar__2_2, (MR_Integer) 1)));

            bytecode_backend__bytecode__debug_string_4_p_0(OutputStream_1, (MR_String) "uint32");
            bytecode_backend__bytecode__debug_uint32_4_p_0(OutputStream_1, UInt32Val_70);
          }
          break;
        case (MR_Integer) 7:
          {
            int64_t Int64Val_78 = MR_unbox_int64((MR_hl_field(3, HeadVar__2_2, (MR_Integer) 1)));

            mercury__io__write_string_4_p_0(OutputStream_1, (MR_String) "int64");
            mercury__io__write_char_4_p_0(OutputStream_1, (MR_Char) 32);
            mercury__io__write_int64_4_p_0(OutputStream_1, Int64Val_78);
            mercury__io__write_char_4_p_0(OutputStream_1, (MR_Char) 32);
          }
          break;
        case (MR_Integer) 8:
          {
            uint64_t UInt64Val_86 = MR_unbox_uint64((MR_hl_field(3, HeadVar__2_2, (MR_Integer) 1)));

            bytecode_backend__bytecode__debug_string_4_p_0(OutputStream_1, (MR_String) "uint64");
            bytecode_backend__bytecode__debug_uint64_4_p_0(OutputStream_1, UInt64Val_86);
          }
          break;
      }
      break;
  }
}

static void MR_CALL 
bytecode_backend__bytecode__debug_uint64_4_p_0(
  MR_Word OutputStream_5,
  uint64_t Val_6)
{
  mercury__io__write_uint64_4_p_0(OutputStream_5, Val_6);
  mercury__io__write_char_4_p_0(OutputStream_5, (MR_Char) 32);
}

static void MR_CALL 
bytecode_backend__bytecode__debug_uint32_4_p_0(
  MR_Word OutputStream_5,
  uint32_t Val_6)
{
  mercury__io__write_uint32_4_p_0(OutputStream_5, Val_6);
  mercury__io__write_char_4_p_0(OutputStream_5, (MR_Char) 32);
}

static void MR_CALL 
bytecode_backend__bytecode__debug_uint16_4_p_0(
  MR_Word OutputStream_5,
  uint16_t Val_6)
{
  mercury__io__write_uint16_4_p_0(OutputStream_5, Val_6);
  mercury__io__write_char_4_p_0(OutputStream_5, (MR_Char) 32);
}

static void MR_CALL 
bytecode_backend__bytecode__debug_uint8_4_p_0(
  MR_Word OutputStream_5,
  uint8_t Val_6)
{
  mercury__io__write_uint8_4_p_0(OutputStream_5, Val_6);
  mercury__io__write_char_4_p_0(OutputStream_5, (MR_Char) 32);
}

static void MR_CALL 
bytecode_backend__bytecode__debug_uint_4_p_0(
  MR_Word OutputStream_5,
  MR_Unsigned Val_6)
{
  mercury__io__write_uint_4_p_0(OutputStream_5, Val_6);
  mercury__io__write_char_4_p_0(OutputStream_5, (MR_Char) 32);
}

static void MR_CALL 
bytecode_backend__bytecode__debug_int_4_p_0(
  MR_Word OutputStream_5,
  MR_Integer Val_6)
{
  mercury__io__write_int_4_p_0(OutputStream_5, Val_6);
  mercury__io__write_char_4_p_0(OutputStream_5, (MR_Char) 32);
}

static void MR_CALL 
bytecode_backend__bytecode__debug_string_4_p_0(
  MR_Word OutputStream_5,
  MR_String Val_6)
{
  mercury__io__write_string_4_p_0(OutputStream_5, Val_6);
  mercury__io__write_char_4_p_0(OutputStream_5, (MR_Char) 32);
}

static void MR_CALL 
bytecode_backend__bytecode__debug_var_4_p_0(
  MR_Word OutputStream_5,
  MR_Integer Var_6)
{
  mercury__io__write_int_4_p_0(OutputStream_5, Var_6);
  mercury__io__write_char_4_p_0(OutputStream_5, (MR_Char) 32);
}

static void MR_CALL 
bytecode_backend__bytecode__debug_length_4_p_0(
  MR_Word OutputStream_5,
  MR_Integer Length_6)
{
  mercury__io__write_int_4_p_0(OutputStream_5, Length_6);
  mercury__io__write_char_4_p_0(OutputStream_5, (MR_Char) 32);
}

static void MR_CALL 
bytecode_backend__bytecode__debug_is_func_4_p_0(
  MR_Word OutputStream_5,
  MR_Integer IsFunc_6)
{
  MR_bool succeeded = (IsFunc_6 == (MR_Integer) 1);

  if (succeeded)
  {
    mercury__io__write_string_4_p_0(OutputStream_5, (MR_String) "func");
    mercury__io__write_char_4_p_0(OutputStream_5, (MR_Char) 32);
  }
  else
  {
    succeeded = (IsFunc_6 == (MR_Integer) 0);
    if (succeeded)
    {
      mercury__io__write_string_4_p_0(OutputStream_5, (MR_String) "pred");
      mercury__io__write_char_4_p_0(OutputStream_5, (MR_Char) 32);
    }
    else
      {
        mercury__require__unexpected_2_p_0((MR_String) "predicate \140bytecode_backend.bytecode.debug_is_func\'/4", (MR_String) "invalid predicate or function specifier in bytecode.");
        return;
      }
  }
}

static void MR_CALL 
bytecode_backend__bytecode__debug_determinism_4_p_0(
  MR_Word OutputStream_5,
  MR_Word Detism_6)
{
  MR_String Debug_8 = ((&bytecode_backend__bytecode_vector_common_6[0 + Detism_6]))->bytecode_backend__bytecode__vector_common_type_6_0__vct_6_f_0;

  mercury__io__write_string_4_p_0(OutputStream_5, Debug_8);
  mercury__io__write_char_4_p_0(OutputStream_5, (MR_Char) 32);
}

static void MR_CALL 
bytecode_backend__bytecode__debug_var_infos_4_p_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2)
{
  while (MR_TRUE)
  {
    // setup for model_det tailcalls optimized into a loop
    ;
    if (!((HeadVar__2_2 == (MR_Word) ((MR_Unsigned) 0U))))
    {
      MR_Word Var_10 = ((MR_Word) ((MR_hl_field(1, HeadVar__2_2, (MR_Integer) 0))));
      MR_Word Vars_11 = ((MR_Word) ((MR_hl_field(1, HeadVar__2_2, (MR_Integer) 1))));
      MR_String Name_16 = ((MR_String) ((MR_hl_field(0, Var_10, (MR_Integer) 0))));
      MR_Word next_value_of_HeadVar__2_2;

      mercury__io__write_string_4_p_0(HeadVar__1_1, Name_16);
      mercury__io__write_char_4_p_0(HeadVar__1_1, (MR_Char) 32);
      // direct tailcall eliminated
      ;
      next_value_of_HeadVar__2_2 = Vars_11;
      HeadVar__2_2 = next_value_of_HeadVar__2_2;
      continue;
    }
    break;
  }
}

void MR_CALL 
bytecode_backend__bytecode__output_bytecode_file_5_p_0(
  MR_Word ProgressStream_6,
  MR_String FileName_7,
  MR_Word ByteCodes_8)
{
  MR_Word Result_10;

  mercury__io__open_binary_output_4_p_0(FileName_7, &Result_10);
  if (((MR_tag((MR_Word) Result_10)) == (MR_Integer) 1))
  {
    MR_String ProgName_14;

    mercury__io__progname_base_4_p_0((MR_String) "byte.m", &ProgName_14);
    mercury__io__write_string_4_p_0(ProgressStream_6, (MR_String) "\n");
    mercury__io__write_string_4_p_0(ProgressStream_6, ProgName_14);
    mercury__io__write_string_4_p_0(ProgressStream_6, (MR_String) ": can\'t open \140");
    mercury__io__write_string_4_p_0(ProgressStream_6, FileName_7);
    mercury__io__write_string_4_p_0(ProgressStream_6, (MR_String) "\' for output\n");
    mercury__io__set_exit_status_3_p_0((MR_Integer) 1);
  }
  else
  {
    MR_Word FileStream_11 = ((MR_Word) ((MR_hl_field(0, Result_10, (MR_Integer) 0))));

    backend_libs__bytecode_data__output_short_4_p_0(FileStream_11, (MR_Integer) 9);
    bytecode_backend__bytecode__output_bytecode_list_4_p_0(FileStream_11, ByteCodes_8);
    mercury__io__close_binary_output_3_p_0(FileStream_11);
  }
}

static void MR_CALL 
bytecode_backend__bytecode__output_bytecode_list_4_p_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2)
{
  while (MR_TRUE)
  {
    // setup for model_det tailcalls optimized into a loop
    ;
    if (!((HeadVar__2_2 == (MR_Word) ((MR_Unsigned) 0U))))
    {
      MR_Word ByteCode_10 = ((MR_Word) ((MR_hl_field(1, HeadVar__2_2, (MR_Integer) 0))));
      MR_Word ByteCodes_11 = ((MR_Word) ((MR_hl_field(1, HeadVar__2_2, (MR_Integer) 1))));
      MR_Integer Byte_13;
      MR_Word next_value_of_HeadVar__2_2;

      switch (MR_tag((MR_Word) ByteCode_10)) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 0:
          switch (MR_unmkbody(ByteCode_10)) {
            default: /*NOTREACHED*/ MR_assert(0);
            case (MR_Integer) 0:
              Byte_13 = (MR_Integer) 1;
              break;
            case (MR_Integer) 1:
              Byte_13 = (MR_Integer) 3;
              break;
            case (MR_Integer) 2:
              Byte_13 = (MR_Integer) 6;
              break;
            case (MR_Integer) 3:
              Byte_13 = (MR_Integer) 10;
              break;
            case (MR_Integer) 4:
              Byte_13 = (MR_Integer) 16;
              break;
            case (MR_Integer) 5:
              Byte_13 = (MR_Integer) 18;
              break;
            case (MR_Integer) 6:
              Byte_13 = (MR_Integer) 35;
              break;
            case (MR_Integer) 7:
              Byte_13 = (MR_Integer) 36;
              break;
            case (MR_Integer) 8:
              Byte_13 = (MR_Integer) 37;
              break;
            case (MR_Integer) 9:
              Byte_13 = (MR_Integer) 39;
              break;
          }
          break;
        case (MR_Integer) 1:
          Byte_13 = (MR_Integer) 0;
          break;
        case (MR_Integer) 2:
          Byte_13 = (MR_Integer) 2;
          break;
        case (MR_Integer) 3:
          switch (((MR_Integer) ((MR_hl_field(3, ByteCode_10, (MR_Integer) 0))))) {
            default: /*NOTREACHED*/ MR_assert(0);
            case (MR_Integer) 0:
              Byte_13 = (MR_Integer) 4;
              break;
            case (MR_Integer) 1:
              Byte_13 = (MR_Integer) 5;
              break;
            case (MR_Integer) 2:
              Byte_13 = (MR_Integer) 7;
              break;
            case (MR_Integer) 3:
              Byte_13 = (MR_Integer) 8;
              break;
            case (MR_Integer) 4:
              Byte_13 = (MR_Integer) 9;
              break;
            case (MR_Integer) 5:
              Byte_13 = (MR_Integer) 11;
              break;
            case (MR_Integer) 6:
              Byte_13 = (MR_Integer) 12;
              break;
            case (MR_Integer) 7:
              Byte_13 = (MR_Integer) 13;
              break;
            case (MR_Integer) 8:
              Byte_13 = (MR_Integer) 14;
              break;
            case (MR_Integer) 9:
              Byte_13 = (MR_Integer) 15;
              break;
            case (MR_Integer) 10:
              Byte_13 = (MR_Integer) 40;
              break;
            case (MR_Integer) 11:
              Byte_13 = (MR_Integer) 17;
              break;
            case (MR_Integer) 12:
              Byte_13 = (MR_Integer) 41;
              break;
            case (MR_Integer) 13:
              Byte_13 = (MR_Integer) 19;
              break;
            case (MR_Integer) 14:
              Byte_13 = (MR_Integer) 20;
              break;
            case (MR_Integer) 15:
              Byte_13 = (MR_Integer) 21;
              break;
            case (MR_Integer) 16:
              Byte_13 = (MR_Integer) 22;
              break;
            case (MR_Integer) 17:
              Byte_13 = (MR_Integer) 23;
              break;
            case (MR_Integer) 18:
              Byte_13 = (MR_Integer) 24;
              break;
            case (MR_Integer) 19:
              Byte_13 = (MR_Integer) 25;
              break;
            case (MR_Integer) 20:
              Byte_13 = (MR_Integer) 26;
              break;
            case (MR_Integer) 21:
              Byte_13 = (MR_Integer) 27;
              break;
            case (MR_Integer) 22:
              Byte_13 = (MR_Integer) 28;
              break;
            case (MR_Integer) 23:
              Byte_13 = (MR_Integer) 29;
              break;
            case (MR_Integer) 24:
              Byte_13 = (MR_Integer) 30;
              break;
            case (MR_Integer) 25:
              Byte_13 = (MR_Integer) 31;
              break;
            case (MR_Integer) 26:
              Byte_13 = (MR_Integer) 32;
              break;
            case (MR_Integer) 27:
              Byte_13 = (MR_Integer) 33;
              break;
            case (MR_Integer) 28:
              Byte_13 = (MR_Integer) 34;
              break;
            case (MR_Integer) 29:
              Byte_13 = (MR_Integer) 38;
              break;
          }
          break;
      }
      mercury__io__write_byte_4_p_0(HeadVar__1_1, Byte_13);
      bytecode_backend__bytecode__output_args_4_p_0(HeadVar__1_1, ByteCode_10);
      // direct tailcall eliminated
      ;
      next_value_of_HeadVar__2_2 = ByteCodes_11;
      HeadVar__2_2 = next_value_of_HeadVar__2_2;
      continue;
    }
    break;
  }
}

static MR_bool MR_CALL 
bytecode_backend__bytecode__output_args_4_p_0_1(
  MR_Box closure_arg)
{
  MR_bool succeeded;
  MR_Box closure = closure_arg;

  succeeded = bytecode_backend__bytecode__IntroducedFrom__pred__output_args__279__1_2_p_0(((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 3)))), ((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 4)))));
  return succeeded;
}

static void MR_CALL 
bytecode_backend__bytecode__output_args_4_p_0(
  MR_Word BinaryOutputStream_5,
  MR_Word ByteCode_6)
{
  MR_bool succeeded;

  switch (MR_tag((MR_Word) ByteCode_6)) {
    default: /*NOTREACHED*/ MR_assert(0);
    case (MR_Integer) 0:
      switch (MR_unmkbody(ByteCode_6)) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 0:
          {
          }
          break;
        case (MR_Integer) 1:
          {
          }
          break;
        case (MR_Integer) 2:
          {
          }
          break;
        case (MR_Integer) 3:
          {
          }
          break;
        case (MR_Integer) 4:
          {
          }
          break;
        case (MR_Integer) 5:
          {
          }
          break;
        case (MR_Integer) 6:
          {
          }
          break;
        case (MR_Integer) 7:
          {
          }
          break;
        case (MR_Integer) 8:
          {
          }
          break;
        case (MR_Integer) 9:
          {
          }
          break;
      }
      break;
    case (MR_Integer) 1:
      {
        MR_String PredId_8 = ((MR_String) ((MR_hl_field(1, ByteCode_6, (MR_Integer) 0))));
        MR_Integer PredArity_9 = ((MR_Integer) ((MR_hl_field(1, ByteCode_6, (MR_Integer) 1))));
        MR_Integer IsFunc_10 = ((MR_Integer) ((MR_hl_field(1, ByteCode_6, (MR_Integer) 2))));
        MR_Integer ProcCount_11 = ((MR_Integer) ((MR_hl_field(1, ByteCode_6, (MR_Integer) 3))));

        bytecode_backend__bytecode__output_pred_id_4_p_0(BinaryOutputStream_5, PredId_8);
        bytecode_backend__bytecode__output_length_4_p_0(BinaryOutputStream_5, PredArity_9);
        bytecode_backend__bytecode__output_is_func_4_p_0(BinaryOutputStream_5, IsFunc_10);
        bytecode_backend__bytecode__output_length_4_p_0(BinaryOutputStream_5, ProcCount_11);
      }
      break;
    case (MR_Integer) 2:
      {
        MR_Integer ProcId_12 = ((MR_Integer) ((MR_hl_field(2, ByteCode_6, (MR_Integer) 0))));
        MR_Word Detism_13 = ((MR_Unsigned) ((MR_hl_field(2, ByteCode_6, (MR_Integer) 1))) & (MR_Integer) 7);
        MR_Integer LabelCount_14 = ((MR_Integer) ((MR_hl_field(2, ByteCode_6, (MR_Integer) 2))));
        MR_Integer LabelId_15 = ((MR_Integer) ((MR_hl_field(2, ByteCode_6, (MR_Integer) 3))));
        MR_Integer TempCount_16 = ((MR_Integer) ((MR_hl_field(2, ByteCode_6, (MR_Integer) 4))));
        MR_Word Vars_17 = ((MR_Word) ((MR_hl_field(2, ByteCode_6, (MR_Integer) 5))));
        MR_Integer NumVars_18;

        mercury__list__length_2_p_0((MR_Word) (&bytecode_backend__bytecode__bytecode_backend__bytecode__type_ctor_info_byte_var_info_0), Vars_17, &NumVars_18);
        bytecode_backend__bytecode__output_proc_id_4_p_0(BinaryOutputStream_5, ProcId_12);
        bytecode_backend__bytecode__output_determinism_4_p_0(BinaryOutputStream_5, Detism_13);
        bytecode_backend__bytecode__output_length_4_p_0(BinaryOutputStream_5, LabelCount_14);
        bytecode_backend__bytecode__output_label_id_4_p_0(BinaryOutputStream_5, LabelId_15);
        bytecode_backend__bytecode__output_length_4_p_0(BinaryOutputStream_5, TempCount_16);
        bytecode_backend__bytecode__output_length_4_p_0(BinaryOutputStream_5, NumVars_18);
        bytecode_backend__bytecode__output_var_infos_4_p_0(BinaryOutputStream_5, Vars_17);
      }
      break;
    case (MR_Integer) 3:
      switch (((MR_Integer) ((MR_hl_field(3, ByteCode_6, (MR_Integer) 0))))) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 0:
          {
            MR_Integer LabelId_128 = ((MR_Integer) ((MR_hl_field(3, ByteCode_6, (MR_Integer) 1))));

            bytecode_backend__bytecode__output_label_id_4_p_0(BinaryOutputStream_5, LabelId_128);
          }
          break;
        case (MR_Integer) 1:
          {
            MR_Integer LabelId_129 = ((MR_Integer) ((MR_hl_field(3, ByteCode_6, (MR_Integer) 1))));

            bytecode_backend__bytecode__output_label_id_4_p_0(BinaryOutputStream_5, LabelId_129);
          }
          break;
        case (MR_Integer) 2:
          {
            MR_Integer LabelId_130 = ((MR_Integer) ((MR_hl_field(3, ByteCode_6, (MR_Integer) 1))));

            bytecode_backend__bytecode__output_label_id_4_p_0(BinaryOutputStream_5, LabelId_130);
          }
          break;
        case (MR_Integer) 3:
          {
            MR_Integer LabelId_131 = ((MR_Integer) ((MR_hl_field(3, ByteCode_6, (MR_Integer) 1))));

            bytecode_backend__bytecode__output_label_id_4_p_0(BinaryOutputStream_5, LabelId_131);
          }
          break;
        case (MR_Integer) 4:
          {
            MR_Integer Var_19 = ((MR_Integer) ((MR_hl_field(3, ByteCode_6, (MR_Integer) 1))));
            MR_Integer LabelId_132 = ((MR_Integer) ((MR_hl_field(3, ByteCode_6, (MR_Integer) 2))));

            bytecode_backend__bytecode__output_var_4_p_0(BinaryOutputStream_5, Var_19);
            bytecode_backend__bytecode__output_label_id_4_p_0(BinaryOutputStream_5, LabelId_132);
          }
          break;
        case (MR_Integer) 5:
          {
            MR_Word MainConsId_20 = ((MR_Word) ((MR_hl_field(3, ByteCode_6, (MR_Integer) 1))));
            MR_Word OtherConsIds_21 = ((MR_Word) ((MR_hl_field(3, ByteCode_6, (MR_Integer) 2))));
            MR_Integer NextLabelId_22 = ((MR_Integer) ((MR_hl_field(3, ByteCode_6, (MR_Integer) 3))));
            MR_Word Var_64;

            bytecode_backend__bytecode__output_cons_id_4_p_0(BinaryOutputStream_5, MainConsId_20);
            {
              Var_64 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
              MR_hl_field(0, Var_64, 0) = ((MR_Box) (&bytecode_backend__bytecode_scalar_common_5[0]));
              MR_hl_field(0, Var_64, 1) = ((MR_Box) (bytecode_backend__bytecode__output_args_4_p_0_1));
              MR_hl_field(0, Var_64, 2) = ((MR_Box) ((MR_Integer) 2));
              MR_hl_field(0, Var_64, 3) = ((MR_Box) (OtherConsIds_21));
              MR_hl_field(0, Var_64, 4) = ((MR_Box) ((MR_Unsigned) 0U));
            }
            mercury__require__expect_3_p_0(Var_64, (MR_String) "predicate \140bytecode_backend.bytecode.output_args\'/4", (MR_String) "OtherConsIds");
            bytecode_backend__bytecode__output_label_id_4_p_0(BinaryOutputStream_5, NextLabelId_22);
          }
          break;
        case (MR_Integer) 6:
          {
            MR_Integer LabelId_133 = ((MR_Integer) ((MR_hl_field(3, ByteCode_6, (MR_Integer) 1))));

            bytecode_backend__bytecode__output_label_id_4_p_0(BinaryOutputStream_5, LabelId_133);
          }
          break;
        case (MR_Integer) 7:
          {
            MR_Integer ElseLabelId_23 = ((MR_Integer) ((MR_hl_field(3, ByteCode_6, (MR_Integer) 1))));
            MR_Integer FollowLabelId_24 = ((MR_Integer) ((MR_hl_field(3, ByteCode_6, (MR_Integer) 2))));
            MR_Integer FramePtrTemp_25 = ((MR_Integer) ((MR_hl_field(3, ByteCode_6, (MR_Integer) 3))));

            bytecode_backend__bytecode__output_label_id_4_p_0(BinaryOutputStream_5, ElseLabelId_23);
            bytecode_backend__bytecode__output_label_id_4_p_0(BinaryOutputStream_5, FollowLabelId_24);
            bytecode_backend__bytecode__output_temp_4_p_0(BinaryOutputStream_5, FramePtrTemp_25);
          }
          break;
        case (MR_Integer) 8:
          {
            MR_Integer FramePtrTemp_134 = ((MR_Integer) ((MR_hl_field(3, ByteCode_6, (MR_Integer) 1))));

            bytecode_backend__bytecode__output_temp_4_p_0(BinaryOutputStream_5, FramePtrTemp_134);
          }
          break;
        case (MR_Integer) 9:
          {
            MR_Integer FollowLabelId_135 = ((MR_Integer) ((MR_hl_field(3, ByteCode_6, (MR_Integer) 1))));

            bytecode_backend__bytecode__output_label_id_4_p_0(BinaryOutputStream_5, FollowLabelId_135);
          }
          break;
        case (MR_Integer) 10:
          {
            MR_Integer FramePtrTemp_136 = ((MR_Integer) ((MR_hl_field(3, ByteCode_6, (MR_Integer) 1))));

            bytecode_backend__bytecode__output_temp_4_p_0(BinaryOutputStream_5, FramePtrTemp_136);
          }
          break;
        case (MR_Integer) 11:
          {
            MR_Integer LabelId_137 = ((MR_Integer) ((MR_hl_field(3, ByteCode_6, (MR_Integer) 2))));
            MR_Integer FramePtrTemp_138 = ((MR_Integer) ((MR_hl_field(3, ByteCode_6, (MR_Integer) 1))));

            bytecode_backend__bytecode__output_temp_4_p_0(BinaryOutputStream_5, FramePtrTemp_138);
            bytecode_backend__bytecode__output_label_id_4_p_0(BinaryOutputStream_5, LabelId_137);
          }
          break;
        case (MR_Integer) 12:
          {
            MR_Integer FramePtrTemp_139 = ((MR_Integer) ((MR_hl_field(3, ByteCode_6, (MR_Integer) 1))));

            bytecode_backend__bytecode__output_temp_4_p_0(BinaryOutputStream_5, FramePtrTemp_139);
          }
          break;
        case (MR_Integer) 13:
          {
            MR_Integer Temp_26 = ((MR_Integer) ((MR_hl_field(3, ByteCode_6, (MR_Integer) 1))));

            bytecode_backend__bytecode__output_temp_4_p_0(BinaryOutputStream_5, Temp_26);
          }
          break;
        case (MR_Integer) 14:
          {
            MR_Integer Temp_140 = ((MR_Integer) ((MR_hl_field(3, ByteCode_6, (MR_Integer) 1))));

            bytecode_backend__bytecode__output_temp_4_p_0(BinaryOutputStream_5, Temp_140);
          }
          break;
        case (MR_Integer) 15:
          {
            MR_Integer Var1_27 = ((MR_Integer) ((MR_hl_field(3, ByteCode_6, (MR_Integer) 1))));
            MR_Integer Var2_28 = ((MR_Integer) ((MR_hl_field(3, ByteCode_6, (MR_Integer) 2))));

            bytecode_backend__bytecode__output_var_4_p_0(BinaryOutputStream_5, Var1_27);
            bytecode_backend__bytecode__output_var_4_p_0(BinaryOutputStream_5, Var2_28);
          }
          break;
        case (MR_Integer) 16:
          {
            MR_Word TestId_29 = ((MR_Unsigned) ((MR_hl_field(3, ByteCode_6, (MR_Integer) 3))) & (MR_Integer) 7);
            MR_Integer Var1_141 = ((MR_Integer) ((MR_hl_field(3, ByteCode_6, (MR_Integer) 1))));
            MR_Integer Var2_142 = ((MR_Integer) ((MR_hl_field(3, ByteCode_6, (MR_Integer) 2))));

            bytecode_backend__bytecode__output_var_4_p_0(BinaryOutputStream_5, Var1_141);
            bytecode_backend__bytecode__output_var_4_p_0(BinaryOutputStream_5, Var2_142);
            bytecode_backend__bytecode__output_test_id_4_p_0(BinaryOutputStream_5, TestId_29);
          }
          break;
        case (MR_Integer) 17:
          {
            MR_Word ConsId_30 = ((MR_Word) ((MR_hl_field(3, ByteCode_6, (MR_Integer) 2))));
            MR_Word Vars_143 = ((MR_Word) ((MR_hl_field(3, ByteCode_6, (MR_Integer) 3))));
            MR_Integer NumVars_144;
            MR_Integer Var_145 = ((MR_Integer) ((MR_hl_field(3, ByteCode_6, (MR_Integer) 1))));

            mercury__list__length_2_p_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_int_0), Vars_143, &NumVars_144);
            bytecode_backend__bytecode__output_var_4_p_0(BinaryOutputStream_5, Var_145);
            bytecode_backend__bytecode__output_cons_id_4_p_0(BinaryOutputStream_5, ConsId_30);
            bytecode_backend__bytecode__output_length_4_p_0(BinaryOutputStream_5, NumVars_144);
            bytecode_backend__bytecode__output_vars_4_p_0(BinaryOutputStream_5, Vars_143);
          }
          break;
        case (MR_Integer) 18:
          {
            MR_Word Vars_146 = ((MR_Word) ((MR_hl_field(3, ByteCode_6, (MR_Integer) 3))));
            MR_Integer NumVars_147;
            MR_Integer Var_148 = ((MR_Integer) ((MR_hl_field(3, ByteCode_6, (MR_Integer) 1))));
            MR_Word ConsId_149 = ((MR_Word) ((MR_hl_field(3, ByteCode_6, (MR_Integer) 2))));

            mercury__list__length_2_p_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_int_0), Vars_146, &NumVars_147);
            bytecode_backend__bytecode__output_var_4_p_0(BinaryOutputStream_5, Var_148);
            bytecode_backend__bytecode__output_cons_id_4_p_0(BinaryOutputStream_5, ConsId_149);
            bytecode_backend__bytecode__output_length_4_p_0(BinaryOutputStream_5, NumVars_147);
            bytecode_backend__bytecode__output_vars_4_p_0(BinaryOutputStream_5, Vars_146);
          }
          break;
        case (MR_Integer) 19:
          {
            MR_Word VarDirs_31 = ((MR_Word) ((MR_hl_field(3, ByteCode_6, (MR_Integer) 3))));
            MR_Integer NumVarsDirs_32;
            MR_Integer Var_150 = ((MR_Integer) ((MR_hl_field(3, ByteCode_6, (MR_Integer) 1))));
            MR_Word ConsId_151 = ((MR_Word) ((MR_hl_field(3, ByteCode_6, (MR_Integer) 2))));

            mercury__list__length_2_p_0((MR_Word) (&bytecode_backend__bytecode_scalar_common_2[0]), VarDirs_31, &NumVarsDirs_32);
            bytecode_backend__bytecode__output_var_4_p_0(BinaryOutputStream_5, Var_150);
            bytecode_backend__bytecode__output_cons_id_4_p_0(BinaryOutputStream_5, ConsId_151);
            bytecode_backend__bytecode__output_length_4_p_0(BinaryOutputStream_5, NumVarsDirs_32);
            bytecode_backend__bytecode__output_var_dirs_4_p_0(BinaryOutputStream_5, VarDirs_31);
          }
          break;
        case (MR_Integer) 20:
          {
            MR_Integer Var_152 = ((MR_Integer) ((MR_hl_field(3, ByteCode_6, (MR_Integer) 1))));
            MR_Word ConsId_153 = ((MR_Word) ((MR_hl_field(3, ByteCode_6, (MR_Integer) 2))));
            MR_Word VarDirs_154 = ((MR_Word) ((MR_hl_field(3, ByteCode_6, (MR_Integer) 3))));
            MR_Integer NumVarsDirs_155;

            mercury__list__length_2_p_0((MR_Word) (&bytecode_backend__bytecode_scalar_common_2[0]), VarDirs_154, &NumVarsDirs_155);
            bytecode_backend__bytecode__output_var_4_p_0(BinaryOutputStream_5, Var_152);
            bytecode_backend__bytecode__output_cons_id_4_p_0(BinaryOutputStream_5, ConsId_153);
            bytecode_backend__bytecode__output_length_4_p_0(BinaryOutputStream_5, NumVarsDirs_155);
            bytecode_backend__bytecode__output_var_dirs_4_p_0(BinaryOutputStream_5, VarDirs_154);
          }
          break;
        case (MR_Integer) 21:
          {
            MR_Integer RegNum_34 = ((MR_Integer) ((MR_hl_field(3, ByteCode_6, (MR_Integer) 2))));
            MR_Integer Var_156 = ((MR_Integer) ((MR_hl_field(3, ByteCode_6, (MR_Integer) 3))));

            bytecode_backend__bytecode__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_111_117_116_112_117_116_95_114_101_103_95_95_91_50_93_95_48_5_p_0(BinaryOutputStream_5, RegNum_34);
            bytecode_backend__bytecode__output_var_4_p_0(BinaryOutputStream_5, Var_156);
          }
          break;
        case (MR_Integer) 22:
          {
            MR_Integer Var_157 = ((MR_Integer) ((MR_hl_field(3, ByteCode_6, (MR_Integer) 3))));
            MR_Integer RegNum_159 = ((MR_Integer) ((MR_hl_field(3, ByteCode_6, (MR_Integer) 2))));

            bytecode_backend__bytecode__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_111_117_116_112_117_116_95_114_101_103_95_95_91_50_93_95_48_5_p_0(BinaryOutputStream_5, RegNum_159);
            bytecode_backend__bytecode__output_var_4_p_0(BinaryOutputStream_5, Var_157);
          }
          break;
        case (MR_Integer) 23:
          {
            MR_Word ModuleId_35 = ((MR_Word) ((MR_hl_field(3, ByteCode_6, (MR_Integer) 1))));
            MR_Integer Arity_36 = ((MR_Integer) ((MR_hl_field(3, ByteCode_6, (MR_Integer) 3))));
            MR_String PredId_160 = ((MR_String) ((MR_hl_field(3, ByteCode_6, (MR_Integer) 2))));
            MR_Integer IsFunc_161 = ((MR_Integer) ((MR_hl_field(3, ByteCode_6, (MR_Integer) 4))));
            MR_Integer ProcId_162 = ((MR_Integer) ((MR_hl_field(3, ByteCode_6, (MR_Integer) 5))));

            bytecode_backend__bytecode__output_module_id_4_p_0(BinaryOutputStream_5, ModuleId_35);
            bytecode_backend__bytecode__output_pred_id_4_p_0(BinaryOutputStream_5, PredId_160);
            bytecode_backend__bytecode__output_length_4_p_0(BinaryOutputStream_5, Arity_36);
            bytecode_backend__bytecode__output_is_func_4_p_0(BinaryOutputStream_5, IsFunc_161);
            bytecode_backend__bytecode__output_proc_id_4_p_0(BinaryOutputStream_5, ProcId_162);
          }
          break;
        case (MR_Integer) 24:
          {
            MR_Integer PredVar_37 = ((MR_Integer) ((MR_hl_field(3, ByteCode_6, (MR_Integer) 1))));
            MR_Integer InVarCount_38 = ((MR_Integer) ((MR_hl_field(3, ByteCode_6, (MR_Integer) 2))));
            MR_Integer OutVarCount_39 = ((MR_Integer) ((MR_hl_field(3, ByteCode_6, (MR_Integer) 3))));
            MR_Word Detism_163 = ((MR_Unsigned) ((MR_hl_field(3, ByteCode_6, (MR_Integer) 4))) & (MR_Integer) 7);

            bytecode_backend__bytecode__output_var_4_p_0(BinaryOutputStream_5, PredVar_37);
            bytecode_backend__bytecode__output_length_4_p_0(BinaryOutputStream_5, InVarCount_38);
            bytecode_backend__bytecode__output_length_4_p_0(BinaryOutputStream_5, OutVarCount_39);
            bytecode_backend__bytecode__output_determinism_4_p_0(BinaryOutputStream_5, Detism_163);
          }
          break;
        case (MR_Integer) 25:
          {
            MR_Word Binop_40 = ((MR_Word) ((MR_hl_field(3, ByteCode_6, (MR_Integer) 1))));
            MR_Integer Var3_41 = ((MR_Integer) ((MR_hl_field(3, ByteCode_6, (MR_Integer) 4))));
            MR_Word Var1_164 = ((MR_Word) ((MR_hl_field(3, ByteCode_6, (MR_Integer) 2))));
            MR_Word Var2_165 = ((MR_Word) ((MR_hl_field(3, ByteCode_6, (MR_Integer) 3))));

            bytecode_backend__bytecode__output_binop_4_p_0(BinaryOutputStream_5, Binop_40);
            bytecode_backend__bytecode__output_arg_4_p_0(BinaryOutputStream_5, Var1_164);
            bytecode_backend__bytecode__output_arg_4_p_0(BinaryOutputStream_5, Var2_165);
            bytecode_backend__bytecode__output_var_4_p_0(BinaryOutputStream_5, Var3_41);
          }
          break;
        case (MR_Integer) 26:
          {
            MR_Word Unop_42 = ((MR_Word) ((MR_hl_field(3, ByteCode_6, (MR_Integer) 1))));
            MR_Word Var1_166 = ((MR_Word) ((MR_hl_field(3, ByteCode_6, (MR_Integer) 2))));
            MR_Integer Var2_167 = ((MR_Integer) ((MR_hl_field(3, ByteCode_6, (MR_Integer) 3))));

            bytecode_backend__bytecode__output_unop_4_p_0(BinaryOutputStream_5, Unop_42);
            bytecode_backend__bytecode__output_arg_4_p_0(BinaryOutputStream_5, Var1_166);
            bytecode_backend__bytecode__output_var_4_p_0(BinaryOutputStream_5, Var2_167);
          }
          break;
        case (MR_Integer) 27:
          {
            MR_Word Var1_168 = ((MR_Word) ((MR_hl_field(3, ByteCode_6, (MR_Integer) 2))));
            MR_Word Var2_169 = ((MR_Word) ((MR_hl_field(3, ByteCode_6, (MR_Integer) 3))));
            MR_Word Binop_170 = ((MR_Word) ((MR_hl_field(3, ByteCode_6, (MR_Integer) 1))));

            bytecode_backend__bytecode__output_binop_4_p_0(BinaryOutputStream_5, Binop_170);
            bytecode_backend__bytecode__output_arg_4_p_0(BinaryOutputStream_5, Var1_168);
            bytecode_backend__bytecode__output_arg_4_p_0(BinaryOutputStream_5, Var2_169);
          }
          break;
        case (MR_Integer) 28:
          {
            MR_Word Var1_171 = ((MR_Word) ((MR_hl_field(3, ByteCode_6, (MR_Integer) 2))));
            MR_Word Unop_172 = ((MR_Word) ((MR_hl_field(3, ByteCode_6, (MR_Integer) 1))));

            bytecode_backend__bytecode__output_unop_4_p_0(BinaryOutputStream_5, Unop_172);
            bytecode_backend__bytecode__output_arg_4_p_0(BinaryOutputStream_5, Var1_171);
          }
          break;
        case (MR_Integer) 29:
          {
            MR_Integer Line_43 = ((MR_Integer) ((MR_hl_field(3, ByteCode_6, (MR_Integer) 1))));

            backend_libs__bytecode_data__output_short_4_p_0(BinaryOutputStream_5, Line_43);
          }
          break;
      }
      break;
  }
}

static void MR_CALL 
bytecode_backend__bytecode__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_111_117_116_112_117_116_95_114_101_103_95_95_91_50_93_95_48_5_p_0(
  MR_Word BinaryOutputStream_6,
  MR_Integer N_7)
{
  backend_libs__bytecode_data__output_byte_4_p_0(BinaryOutputStream_6, N_7);
}

static void MR_CALL 
bytecode_backend__bytecode__output_unop_4_p_0(
  MR_Word BinaryOutputStream_5,
  MR_Word Unop_6)
{
  MR_Integer Code_8;

  switch (MR_tag((MR_Word) Unop_6)) {
    default: /*NOTREACHED*/ MR_assert(0);
    case (MR_Integer) 0:
      switch (MR_unmkbody(Unop_6)) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 0:
          Code_8 = (MR_Integer) 1;
          break;
        case (MR_Integer) 1:
          Code_8 = (MR_Integer) 5;
          break;
        case (MR_Integer) 2:
          Code_8 = (MR_Integer) 3;
          break;
        case (MR_Integer) 3:
          Code_8 = (MR_Integer) 4;
          break;
        case (MR_Integer) 4:
          Code_8 = (MR_Integer) 7;
          break;
        case (MR_Integer) 5:
          Code_8 = (MR_Integer) 8;
          break;
        case (MR_Integer) 6:
          Code_8 = (MR_Integer) 9;
          break;
        case (MR_Integer) 7:
          Code_8 = (MR_Integer) 10;
          break;
        case (MR_Integer) 8:
          Code_8 = (MR_Integer) 11;
          break;
        case (MR_Integer) 9:
          Code_8 = (MR_Integer) 12;
          break;
        case (MR_Integer) 10:
          Code_8 = (MR_Integer) 13;
          break;
        case (MR_Integer) 11:
          Code_8 = (MR_Integer) 23;
          break;
        case (MR_Integer) 12:
          Code_8 = (MR_Integer) 24;
          break;
        case (MR_Integer) 13:
          Code_8 = (MR_Integer) 25;
          break;
        case (MR_Integer) 14:
          Code_8 = (MR_Integer) 26;
          break;
        case (MR_Integer) 15:
          Code_8 = (MR_Integer) 27;
          break;
        case (MR_Integer) 16:
          Code_8 = (MR_Integer) 28;
          break;
      }
      break;
    case (MR_Integer) 1:
      {
        MR_Word Var_21 = ((MR_Unsigned) ((MR_hl_field(1, Unop_6, (MR_Integer) 0))) & (MR_Integer) 15);

        Code_8 = ((&bytecode_backend__bytecode_vector_common_4[194 + Var_21]))->bytecode_backend__bytecode__vector_common_type_4_0__vct_4_f_0;
      }
      break;
  }
  backend_libs__bytecode_data__output_byte_4_p_0(BinaryOutputStream_5, Code_8);
}

static void MR_CALL 
bytecode_backend__bytecode__output_binop_4_p_0(
  MR_Word OutputStream_5,
  MR_Word Binop_6)
{
  MR_Integer Code_8;

  bytecode_backend__bytecode__binop_code_2_p_0(Binop_6, &Code_8);
  backend_libs__bytecode_data__output_byte_4_p_0(OutputStream_5, Code_8);
}

static void MR_CALL 
bytecode_backend__bytecode__binop_code_2_p_0(
  MR_Word HeadVar__1_1,
  MR_Integer * HeadVar__2_2)
{
  switch (MR_tag((MR_Word) HeadVar__1_1)) {
    default: /*NOTREACHED*/ MR_assert(0);
    case (MR_Integer) 0:
      switch (MR_unmkbody(HeadVar__1_1)) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 0:
          *HeadVar__2_2 = (MR_Integer) 10;
          break;
        case (MR_Integer) 1:
          *HeadVar__2_2 = (MR_Integer) 11;
          break;
        case (MR_Integer) 2:
          *HeadVar__2_2 = (MR_Integer) 35;
          break;
        case (MR_Integer) 3:
          *HeadVar__2_2 = (MR_Integer) 44;
          break;
        case (MR_Integer) 4:
          *HeadVar__2_2 = (MR_Integer) 15;
          break;
        case (MR_Integer) 5:
          *HeadVar__2_2 = (MR_Integer) 16;
          break;
        case (MR_Integer) 6:
          *HeadVar__2_2 = (MR_Integer) 17;
          break;
        case (MR_Integer) 7:
          *HeadVar__2_2 = (MR_Integer) 18;
          break;
        case (MR_Integer) 8:
          *HeadVar__2_2 = (MR_Integer) 19;
          break;
        case (MR_Integer) 9:
          *HeadVar__2_2 = (MR_Integer) 20;
          break;
        case (MR_Integer) 10:
          *HeadVar__2_2 = (MR_Integer) 39;
          break;
        case (MR_Integer) 11:
          *HeadVar__2_2 = (MR_Integer) 211;
          break;
        case (MR_Integer) 12:
          *HeadVar__2_2 = (MR_Integer) 36;
          break;
        case (MR_Integer) 13:
          *HeadVar__2_2 = (MR_Integer) 25;
          break;
        case (MR_Integer) 14:
          *HeadVar__2_2 = (MR_Integer) 26;
          break;
        case (MR_Integer) 15:
          *HeadVar__2_2 = (MR_Integer) 27;
          break;
        case (MR_Integer) 16:
          *HeadVar__2_2 = (MR_Integer) 28;
          break;
        case (MR_Integer) 17:
          *HeadVar__2_2 = (MR_Integer) 29;
          break;
        case (MR_Integer) 18:
          *HeadVar__2_2 = (MR_Integer) 30;
          break;
        case (MR_Integer) 19:
          *HeadVar__2_2 = (MR_Integer) 31;
          break;
        case (MR_Integer) 20:
          *HeadVar__2_2 = (MR_Integer) 32;
          break;
        case (MR_Integer) 21:
          *HeadVar__2_2 = (MR_Integer) 33;
          break;
        case (MR_Integer) 22:
          *HeadVar__2_2 = (MR_Integer) 34;
          break;
        case (MR_Integer) 23:
          *HeadVar__2_2 = (MR_Integer) 41;
          break;
        case (MR_Integer) 24:
          *HeadVar__2_2 = (MR_Integer) 189;
          break;
        case (MR_Integer) 25:
          *HeadVar__2_2 = (MR_Integer) 190;
          break;
        case (MR_Integer) 26:
          *HeadVar__2_2 = (MR_Integer) 42;
          break;
        case (MR_Integer) 27:
          *HeadVar__2_2 = (MR_Integer) 37;
          break;
        case (MR_Integer) 28:
          *HeadVar__2_2 = (MR_Integer) 38;
          break;
      }
      break;
    case (MR_Integer) 1:
      {
        MR_Word Var_229 = ((MR_Unsigned) ((MR_hl_field(1, HeadVar__1_1, (MR_Integer) 0))) & (MR_Integer) 15);

        *HeadVar__2_2 = ((&bytecode_backend__bytecode_vector_common_4[54 + Var_229]))->bytecode_backend__bytecode__vector_common_type_4_0__vct_4_f_0;
      }
      break;
    case (MR_Integer) 2:
      {
        MR_Word Var_237 = ((MR_Unsigned) ((MR_hl_field(2, HeadVar__1_1, (MR_Integer) 0))) & (MR_Integer) 15);

        *HeadVar__2_2 = ((&bytecode_backend__bytecode_vector_common_4[134 + Var_237]))->bytecode_backend__bytecode__vector_common_type_4_0__vct_4_f_0;
      }
      break;
    case (MR_Integer) 3:
      switch (((MR_Integer) ((MR_hl_field(3, HeadVar__1_1, (MR_Integer) 0))))) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 0:
          {
            MR_Word Var_236 = ((MR_Unsigned) ((MR_hl_field(3, HeadVar__1_1, (MR_Integer) 1))) & (MR_Integer) 15);

            *HeadVar__2_2 = ((&bytecode_backend__bytecode_vector_common_4[124 + Var_236]))->bytecode_backend__bytecode__vector_common_type_4_0__vct_4_f_0;
          }
          break;
        case (MR_Integer) 1:
          {
            MR_Word Var_230 = ((MR_Unsigned) ((MR_hl_field(3, HeadVar__1_1, (MR_Integer) 1))) & (MR_Integer) 15);

            *HeadVar__2_2 = ((&bytecode_backend__bytecode_vector_common_4[64 + Var_230]))->bytecode_backend__bytecode__vector_common_type_4_0__vct_4_f_0;
          }
          break;
        case (MR_Integer) 2:
          {
            MR_Word Var_235 = ((MR_Unsigned) ((MR_hl_field(3, HeadVar__1_1, (MR_Integer) 1))) & (MR_Integer) 15);

            *HeadVar__2_2 = ((&bytecode_backend__bytecode_vector_common_4[114 + Var_235]))->bytecode_backend__bytecode__vector_common_type_4_0__vct_4_f_0;
          }
          break;
        case (MR_Integer) 3:
          {
            MR_Word Var_239 = ((MR_Unsigned) ((MR_hl_field(3, HeadVar__1_1, (MR_Integer) 1))) & (MR_Integer) 1);
            MR_Word Var_240 = ((((MR_Unsigned) ((MR_hl_field(3, HeadVar__1_1, (MR_Integer) 1))) >> 1)) & (MR_Integer) 15);

            switch (Var_239) {
              default: /*NOTREACHED*/ MR_assert(0);
              case (MR_Integer) 0:
                *HeadVar__2_2 = ((&bytecode_backend__bytecode_vector_common_4[154 + Var_240]))->bytecode_backend__bytecode__vector_common_type_4_0__vct_4_f_0;
                break;
              case (MR_Integer) 1:
                *HeadVar__2_2 = ((&bytecode_backend__bytecode_vector_common_4[164 + Var_240]))->bytecode_backend__bytecode__vector_common_type_4_0__vct_4_f_0;
                break;
            }
          }
          break;
        case (MR_Integer) 4:
          {
            MR_Word Var_241 = ((MR_Unsigned) ((MR_hl_field(3, HeadVar__1_1, (MR_Integer) 1))) & (MR_Integer) 1);
            MR_Word Var_242 = ((((MR_Unsigned) ((MR_hl_field(3, HeadVar__1_1, (MR_Integer) 1))) >> 1)) & (MR_Integer) 15);

            switch (Var_241) {
              default: /*NOTREACHED*/ MR_assert(0);
              case (MR_Integer) 0:
                *HeadVar__2_2 = ((&bytecode_backend__bytecode_vector_common_4[174 + Var_242]))->bytecode_backend__bytecode__vector_common_type_4_0__vct_4_f_0;
                break;
              case (MR_Integer) 1:
                *HeadVar__2_2 = ((&bytecode_backend__bytecode_vector_common_4[184 + Var_242]))->bytecode_backend__bytecode__vector_common_type_4_0__vct_4_f_0;
                break;
            }
          }
          break;
        case (MR_Integer) 5:
          {
            MR_Word Var_225 = ((MR_Unsigned) ((MR_hl_field(3, HeadVar__1_1, (MR_Integer) 1))) & (MR_Integer) 15);

            *HeadVar__2_2 = ((&bytecode_backend__bytecode_vector_common_4[14 + Var_225]))->bytecode_backend__bytecode__vector_common_type_4_0__vct_4_f_0;
          }
          break;
        case (MR_Integer) 6:
          {
            MR_Word Var_226 = ((MR_Unsigned) ((MR_hl_field(3, HeadVar__1_1, (MR_Integer) 1))) & (MR_Integer) 15);

            *HeadVar__2_2 = ((&bytecode_backend__bytecode_vector_common_4[24 + Var_226]))->bytecode_backend__bytecode__vector_common_type_4_0__vct_4_f_0;
          }
          break;
        case (MR_Integer) 7:
          {
            MR_Word Var_227 = ((MR_Unsigned) ((MR_hl_field(3, HeadVar__1_1, (MR_Integer) 1))) & (MR_Integer) 15);

            *HeadVar__2_2 = ((&bytecode_backend__bytecode_vector_common_4[34 + Var_227]))->bytecode_backend__bytecode__vector_common_type_4_0__vct_4_f_0;
          }
          break;
        case (MR_Integer) 8:
          {
            MR_Word Var_228 = ((MR_Unsigned) ((MR_hl_field(3, HeadVar__1_1, (MR_Integer) 1))) & (MR_Integer) 15);

            *HeadVar__2_2 = ((&bytecode_backend__bytecode_vector_common_4[44 + Var_228]))->bytecode_backend__bytecode__vector_common_type_4_0__vct_4_f_0;
          }
          break;
        case (MR_Integer) 9:
          {
            MR_Word Var_238 = ((MR_Unsigned) ((MR_hl_field(3, HeadVar__1_1, (MR_Integer) 1))) & (MR_Integer) 15);

            *HeadVar__2_2 = ((&bytecode_backend__bytecode_vector_common_4[144 + Var_238]))->bytecode_backend__bytecode__vector_common_type_4_0__vct_4_f_0;
          }
          break;
        case (MR_Integer) 10:
          *HeadVar__2_2 = (MR_Integer) 14;
          break;
        case (MR_Integer) 11:
          *HeadVar__2_2 = (MR_Integer) 43;
          break;
        case (MR_Integer) 12:
          {
            MR_Word Var_234 = ((MR_Unsigned) ((MR_hl_field(3, HeadVar__1_1, (MR_Integer) 1))) & (MR_Integer) 15);

            *HeadVar__2_2 = ((&bytecode_backend__bytecode_vector_common_4[104 + Var_234]))->bytecode_backend__bytecode__vector_common_type_4_0__vct_4_f_0;
          }
          break;
        case (MR_Integer) 13:
          {
            MR_Word Var_232 = ((MR_Unsigned) ((MR_hl_field(3, HeadVar__1_1, (MR_Integer) 1))) & (MR_Integer) 15);

            *HeadVar__2_2 = ((&bytecode_backend__bytecode_vector_common_4[84 + Var_232]))->bytecode_backend__bytecode__vector_common_type_4_0__vct_4_f_0;
          }
          break;
        case (MR_Integer) 14:
          {
            MR_Word Var_233 = ((MR_Unsigned) ((MR_hl_field(3, HeadVar__1_1, (MR_Integer) 1))) & (MR_Integer) 15);

            *HeadVar__2_2 = ((&bytecode_backend__bytecode_vector_common_4[94 + Var_233]))->bytecode_backend__bytecode__vector_common_type_4_0__vct_4_f_0;
          }
          break;
        case (MR_Integer) 15:
          {
            MR_Word Var_231 = ((MR_Unsigned) ((MR_hl_field(3, HeadVar__1_1, (MR_Integer) 1))) & (MR_Integer) 15);

            *HeadVar__2_2 = ((&bytecode_backend__bytecode_vector_common_4[74 + Var_231]))->bytecode_backend__bytecode__vector_common_type_4_0__vct_4_f_0;
          }
          break;
      }
      break;
  }
}

static void MR_CALL 
bytecode_backend__bytecode__output_cons_id_4_p_0(
  MR_Word BinaryOutputStream_5,
  MR_Word ConsId_6)
{
  MR_bool succeeded;

  switch (MR_tag((MR_Word) ConsId_6)) {
    default: /*NOTREACHED*/ MR_assert(0);
    case (MR_Integer) 0:
      switch (MR_unmkbody(ConsId_6)) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 0:
          {
            backend_libs__bytecode_data__output_byte_4_p_0(BinaryOutputStream_5, (MR_Integer) 9);
            {
              mercury__require__sorry_2_p_0((MR_String) "predicate \140bytecode_backend.bytecode.output_cons_id\'/4", (MR_String) "bytecode for type_info_cell_constructor not yet implemented.");
              return;
            }
          }
          break;
        case (MR_Integer) 1:
          {
            backend_libs__bytecode_data__output_byte_4_p_0(BinaryOutputStream_5, (MR_Integer) 10);
            {
              mercury__require__sorry_2_p_0((MR_String) "predicate \140bytecode_backend.bytecode.output_cons_id\'/4", (MR_String) "bytecode for typeclass_info_cell_constructor not yet implemented.");
              return;
            }
          }
          break;
      }
      break;
    case (MR_Integer) 1:
      {
        MR_Word ModuleId_8 = ((MR_Word) ((MR_hl_field(1, ConsId_6, (MR_Integer) 0))));
        MR_String Functor_9 = ((MR_String) ((MR_hl_field(1, ConsId_6, (MR_Integer) 1))));
        MR_Integer Arity_10 = ((MR_Integer) ((MR_hl_field(1, ConsId_6, (MR_Integer) 2))));
        MR_Word Tag_11 = ((MR_Word) ((MR_hl_field(1, ConsId_6, (MR_Integer) 3))));
        MR_String Var_76;

        backend_libs__bytecode_data__output_byte_4_p_0(BinaryOutputStream_5, (MR_Integer) 0);
        Var_76 = mdbcomp__sym_name__sym_name_to_string_1_f_0(ModuleId_8);
        backend_libs__bytecode_data__output_string_4_p_0(BinaryOutputStream_5, Var_76);
        backend_libs__bytecode_data__output_string_4_p_0(BinaryOutputStream_5, Functor_9);
        backend_libs__bytecode_data__output_short_4_p_0(BinaryOutputStream_5, Arity_10);
        switch (MR_tag((MR_Word) Tag_11)) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
            backend_libs__bytecode_data__output_byte_4_p_0(BinaryOutputStream_5, (MR_Integer) 4);
            break;
          case (MR_Integer) 1:
            {
              MR_Integer Primary_77 = ((MR_Integer) ((MR_hl_field(1, Tag_11, (MR_Integer) 0))));

              backend_libs__bytecode_data__output_byte_4_p_0(BinaryOutputStream_5, (MR_Integer) 0);
              backend_libs__bytecode_data__output_byte_4_p_0(BinaryOutputStream_5, Primary_77);
            }
            break;
          case (MR_Integer) 2:
            {
              MR_Integer Secondary_78 = ((MR_Integer) ((MR_hl_field(2, Tag_11, (MR_Integer) 1))));
              MR_Integer Primary_91 = ((MR_Integer) ((MR_hl_field(2, Tag_11, (MR_Integer) 0))));

              backend_libs__bytecode_data__output_byte_4_p_0(BinaryOutputStream_5, (MR_Integer) 1);
              backend_libs__bytecode_data__output_byte_4_p_0(BinaryOutputStream_5, Primary_91);
              backend_libs__bytecode_data__output_int_4_p_0(BinaryOutputStream_5, Secondary_78);
            }
            break;
          case (MR_Integer) 3:
            switch (((MR_Integer) ((MR_hl_field(3, Tag_11, (MR_Integer) 0))))) {
              default: /*NOTREACHED*/ MR_assert(0);
              case (MR_Integer) 0:
                {
                  MR_Integer Primary_92 = ((MR_Integer) ((MR_hl_field(3, Tag_11, (MR_Integer) 1))));
                  MR_Integer Secondary_93 = ((MR_Integer) ((MR_hl_field(3, Tag_11, (MR_Integer) 2))));

                  backend_libs__bytecode_data__output_byte_4_p_0(BinaryOutputStream_5, (MR_Integer) 2);
                  backend_libs__bytecode_data__output_byte_4_p_0(BinaryOutputStream_5, Primary_92);
                  backend_libs__bytecode_data__output_int_4_p_0(BinaryOutputStream_5, Secondary_93);
                }
                break;
              case (MR_Integer) 1:
                {
                  MR_Integer Enum_79 = ((MR_Integer) ((MR_hl_field(3, Tag_11, (MR_Integer) 1))));

                  backend_libs__bytecode_data__output_byte_4_p_0(BinaryOutputStream_5, (MR_Integer) 3);
                  backend_libs__bytecode_data__output_byte_4_p_0(BinaryOutputStream_5, Enum_79);
                }
                break;
            }
            break;
        }
      }
      break;
    case (MR_Integer) 2:
      {
        MR_Integer IntVal_12 = ((MR_Integer) ((MR_hl_field(2, ConsId_6, (MR_Integer) 0))));

        backend_libs__bytecode_data__output_byte_4_p_0(BinaryOutputStream_5, (MR_Integer) 1);
        backend_libs__bytecode_data__output_int_4_p_0(BinaryOutputStream_5, IntVal_12);
      }
      break;
    case (MR_Integer) 3:
      switch (((MR_Integer) ((MR_hl_field(3, ConsId_6, (MR_Integer) 0))))) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 0:
          {
            MR_String StringVal_13 = ((MR_String) ((MR_hl_field(3, ConsId_6, (MR_Integer) 1))));

            backend_libs__bytecode_data__output_byte_4_p_0(BinaryOutputStream_5, (MR_Integer) 2);
            backend_libs__bytecode_data__output_string_4_p_0(BinaryOutputStream_5, StringVal_13);
          }
          break;
        case (MR_Integer) 1:
          {
            MR_Float FloatVal_14 = MR_unbox_float((MR_hl_field(3, ConsId_6, (MR_Integer) 1)));

            backend_libs__bytecode_data__output_byte_4_p_0(BinaryOutputStream_5, (MR_Integer) 3);
            backend_libs__bytecode_data__output_float_4_p_0(BinaryOutputStream_5, FloatVal_14);
          }
          break;
        case (MR_Integer) 2:
          {
            MR_Char Char_20 = ((MR_Char) (MR_Word) (MR_hl_field(3, ConsId_6, (MR_Integer) 1)));
            MR_Integer Byte_21;

            mercury__char__to_int_2_p_0(Char_20, &Byte_21);
            backend_libs__bytecode_data__output_byte_4_p_0(BinaryOutputStream_5, (MR_Integer) 7);
            backend_libs__bytecode_data__output_byte_4_p_0(BinaryOutputStream_5, Byte_21);
          }
          break;
        case (MR_Integer) 3:
          {
            MR_String PredId_15 = ((MR_String) ((MR_hl_field(3, ConsId_6, (MR_Integer) 2))));
            MR_Integer IsFunc_16 = ((MR_Integer) ((MR_hl_field(3, ConsId_6, (MR_Integer) 4))));
            MR_Integer ProcId_17 = ((MR_Integer) ((MR_hl_field(3, ConsId_6, (MR_Integer) 5))));
            MR_Word ModuleId_73 = ((MR_Word) ((MR_hl_field(3, ConsId_6, (MR_Integer) 1))));
            MR_Integer Arity_74 = ((MR_Integer) ((MR_hl_field(3, ConsId_6, (MR_Integer) 3))));
            MR_String Var_94;

            backend_libs__bytecode_data__output_byte_4_p_0(BinaryOutputStream_5, (MR_Integer) 4);
            Var_94 = mdbcomp__sym_name__sym_name_to_string_1_f_0(ModuleId_73);
            backend_libs__bytecode_data__output_string_4_p_0(BinaryOutputStream_5, Var_94);
            backend_libs__bytecode_data__output_string_4_p_0(BinaryOutputStream_5, PredId_15);
            backend_libs__bytecode_data__output_short_4_p_0(BinaryOutputStream_5, Arity_74);
            switch (IsFunc_16) {
              default:
                succeeded = MR_FALSE;
                break;
              case (MR_Integer) 0:
                succeeded = MR_TRUE;
                break;
              case (MR_Integer) 1:
                succeeded = MR_TRUE;
                break;
            }
            if (succeeded)
              backend_libs__bytecode_data__output_byte_4_p_0(BinaryOutputStream_5, IsFunc_16);
            else
              {
                mercury__require__unexpected_2_p_0((MR_String) "predicate \140bytecode_backend.bytecode.output_is_func\'/4", (MR_String) "invalid predicate or function specified in bytecode");
                return;
              }
            backend_libs__bytecode_data__output_byte_4_p_0(BinaryOutputStream_5, ProcId_17);
          }
          break;
        case (MR_Integer) 4:
          {
            MR_String TypeName_18 = ((MR_String) ((MR_hl_field(3, ConsId_6, (MR_Integer) 2))));
            MR_Integer TypeArity_19 = ((MR_Integer) ((MR_hl_field(3, ConsId_6, (MR_Integer) 3))));
            MR_Word ModuleId_75 = ((MR_Word) ((MR_hl_field(3, ConsId_6, (MR_Integer) 1))));
            MR_String Var_97;

            backend_libs__bytecode_data__output_byte_4_p_0(BinaryOutputStream_5, (MR_Integer) 6);
            Var_97 = mdbcomp__sym_name__sym_name_to_string_1_f_0(ModuleId_75);
            backend_libs__bytecode_data__output_string_4_p_0(BinaryOutputStream_5, Var_97);
            backend_libs__bytecode_data__output_string_4_p_0(BinaryOutputStream_5, TypeName_18);
            backend_libs__bytecode_data__output_byte_4_p_0(BinaryOutputStream_5, TypeArity_19);
          }
          break;
        case (MR_Integer) 5:
          {
            backend_libs__bytecode_data__output_byte_4_p_0(BinaryOutputStream_5, (MR_Integer) 8);
            {
              mercury__require__sorry_2_p_0((MR_String) "predicate \140bytecode_backend.bytecode.output_cons_id\'/4", (MR_String) "bytecode for typeclass not yet implemented.");
              return;
            }
          }
          break;
      }
      break;
  }
}

static void MR_CALL 
bytecode_backend__bytecode__output_label_id_4_p_0(
  MR_Word BinaryOutputStream_5,
  MR_Integer LabelId_6)
{
  backend_libs__bytecode_data__output_short_4_p_0(BinaryOutputStream_5, LabelId_6);
}

static void MR_CALL 
bytecode_backend__bytecode__output_proc_id_4_p_0(
  MR_Word BinaryOutputStream_5,
  MR_Integer ProcId_6)
{
  backend_libs__bytecode_data__output_byte_4_p_0(BinaryOutputStream_5, ProcId_6);
}

static void MR_CALL 
bytecode_backend__bytecode__output_pred_id_4_p_0(
  MR_Word BinaryOutputStream_5,
  MR_String PredId_6)
{
  backend_libs__bytecode_data__output_string_4_p_0(BinaryOutputStream_5, PredId_6);
}

static void MR_CALL 
bytecode_backend__bytecode__output_module_id_4_p_0(
  MR_Word BinaryOutputStream_5,
  MR_Word ModuleId_6)
{
  MR_String Var_10;

  Var_10 = mdbcomp__sym_name__sym_name_to_string_1_f_0(ModuleId_6);
  backend_libs__bytecode_data__output_string_4_p_0(BinaryOutputStream_5, Var_10);
}

static void MR_CALL 
bytecode_backend__bytecode__output_test_id_4_p_0(
  MR_Word BinaryOutputStream_5,
  MR_Word Test_6)
{
  MR_Integer TestId_8 = ((&bytecode_backend__bytecode_vector_common_4[8 + Test_6]))->bytecode_backend__bytecode__vector_common_type_4_0__vct_4_f_0;

  backend_libs__bytecode_data__output_byte_4_p_0(BinaryOutputStream_5, TestId_8);
}

static void MR_CALL 
bytecode_backend__bytecode__output_var_dirs_4_p_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2)
{
  while (MR_TRUE)
  {
    // setup for model_det tailcalls optimized into a loop
    ;
    if (!((HeadVar__2_2 == (MR_Word) ((MR_Unsigned) 0U))))
    {
      MR_Integer Var_10;
      MR_Word Dir_11;
      MR_Word VarDirs_12 = ((MR_Word) ((MR_hl_field(1, HeadVar__2_2, (MR_Integer) 1))));
      MR_Word Var_16 = ((MR_Word) ((MR_hl_field(1, HeadVar__2_2, (MR_Integer) 0))));
      MR_Word next_value_of_HeadVar__2_2;

      Var_10 = ((MR_Integer) ((MR_hl_field(0, Var_16, (MR_Integer) 0))));
      Dir_11 = ((MR_Word) ((MR_hl_field(0, Var_16, (MR_Integer) 1))));
      backend_libs__bytecode_data__output_short_4_p_0(HeadVar__1_1, Var_10);
      switch (Dir_11) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 0:
          backend_libs__bytecode_data__output_byte_4_p_0(HeadVar__1_1, (MR_Integer) 0);
          break;
        case (MR_Integer) 2:
          backend_libs__bytecode_data__output_byte_4_p_0(HeadVar__1_1, (MR_Integer) 2);
          break;
        case (MR_Integer) 1:
          backend_libs__bytecode_data__output_byte_4_p_0(HeadVar__1_1, (MR_Integer) 1);
          break;
      }
      // direct tailcall eliminated
      ;
      next_value_of_HeadVar__2_2 = VarDirs_12;
      HeadVar__2_2 = next_value_of_HeadVar__2_2;
      continue;
    }
    break;
  }
}

static void MR_CALL 
bytecode_backend__bytecode__output_temp_4_p_0(
  MR_Word BinaryOutputStream_5,
  MR_Integer Var_6)
{
  backend_libs__bytecode_data__output_short_4_p_0(BinaryOutputStream_5, Var_6);
}

static void MR_CALL 
bytecode_backend__bytecode__output_vars_4_p_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2)
{
  while (MR_TRUE)
  {
    // setup for model_det tailcalls optimized into a loop
    ;
    if (!((HeadVar__2_2 == (MR_Word) ((MR_Unsigned) 0U))))
    {
      MR_Integer Var_10 = ((MR_Integer) ((MR_hl_field(1, HeadVar__2_2, (MR_Integer) 0))));
      MR_Word Vars_11 = ((MR_Word) ((MR_hl_field(1, HeadVar__2_2, (MR_Integer) 1))));
      MR_Word next_value_of_HeadVar__2_2;

      backend_libs__bytecode_data__output_short_4_p_0(HeadVar__1_1, Var_10);
      // direct tailcall eliminated
      ;
      next_value_of_HeadVar__2_2 = Vars_11;
      HeadVar__2_2 = next_value_of_HeadVar__2_2;
      continue;
    }
    break;
  }
}

static void MR_CALL 
bytecode_backend__bytecode__output_var_4_p_0(
  MR_Word BinaryOutputStream_5,
  MR_Integer Var_6)
{
  backend_libs__bytecode_data__output_short_4_p_0(BinaryOutputStream_5, Var_6);
}

static void MR_CALL 
bytecode_backend__bytecode__output_arg_4_p_0(
  MR_Word BinaryOutputStream_1,
  MR_Word HeadVar__2_2)
{
  switch (MR_tag((MR_Word) HeadVar__2_2)) {
    default: /*NOTREACHED*/ MR_assert(0);
    case (MR_Integer) 0:
      {
        MR_Integer Var_6 = ((MR_Integer) ((MR_hl_field(0, HeadVar__2_2, (MR_Integer) 0))));

        backend_libs__bytecode_data__output_byte_4_p_0(BinaryOutputStream_1, (MR_Integer) 0);
        backend_libs__bytecode_data__output_short_4_p_0(BinaryOutputStream_1, Var_6);
      }
      break;
    case (MR_Integer) 1:
      {
        MR_Integer IntVal_14 = ((MR_Integer) ((MR_hl_field(1, HeadVar__2_2, (MR_Integer) 0))));

        backend_libs__bytecode_data__output_byte_4_p_0(BinaryOutputStream_1, (MR_Integer) 1);
        backend_libs__bytecode_data__output_int_4_p_0(BinaryOutputStream_1, IntVal_14);
      }
      break;
    case (MR_Integer) 2:
      {
        MR_Float FloatVal_22 = MR_unbox_float((MR_hl_field(2, HeadVar__2_2, (MR_Integer) 0)));

        backend_libs__bytecode_data__output_byte_4_p_0(BinaryOutputStream_1, (MR_Integer) 2);
        backend_libs__bytecode_data__output_float_4_p_0(BinaryOutputStream_1, FloatVal_22);
      }
      break;
    case (MR_Integer) 3:
      switch (((MR_Integer) ((MR_hl_field(3, HeadVar__2_2, (MR_Integer) 0))))) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 0:
          {
            mercury__require__unexpected_2_p_0((MR_String) "predicate \140bytecode_backend.bytecode.output_arg\'/4", (MR_String) "NYI uint constants in bytecode");
            return;
          }
          break;
        case (MR_Integer) 1:
          {
            mercury__require__unexpected_2_p_0((MR_String) "predicate \140bytecode_backend.bytecode.output_arg\'/4", (MR_String) "NYI int8 constants in bytecode");
            return;
          }
          break;
        case (MR_Integer) 2:
          {
            mercury__require__unexpected_2_p_0((MR_String) "predicate \140bytecode_backend.bytecode.output_arg\'/4", (MR_String) "NYI uint8 constants in bytecode");
            return;
          }
          break;
        case (MR_Integer) 3:
          {
            mercury__require__unexpected_2_p_0((MR_String) "predicate \140bytecode_backend.bytecode.output_arg\'/4", (MR_String) "NYI int16 constants in bytecode");
            return;
          }
          break;
        case (MR_Integer) 4:
          {
            mercury__require__unexpected_2_p_0((MR_String) "predicate \140bytecode_backend.bytecode.output_arg\'/4", (MR_String) "NYI uint16 constants in bytecode");
            return;
          }
          break;
        case (MR_Integer) 5:
          {
            mercury__require__unexpected_2_p_0((MR_String) "predicate \140bytecode_backend.bytecode.output_arg\'/4", (MR_String) "NYI int32 constants in bytecode");
            return;
          }
          break;
        case (MR_Integer) 6:
          {
            mercury__require__unexpected_2_p_0((MR_String) "predicate \140bytecode_backend.bytecode.output_arg\'/4", (MR_String) "NYI uint32 constants in bytecode");
            return;
          }
          break;
        case (MR_Integer) 7:
          {
            mercury__require__unexpected_2_p_0((MR_String) "predicate \140bytecode_backend.bytecode.output_arg\'/4", (MR_String) "NYI int64 constants in bytecode");
            return;
          }
          break;
        case (MR_Integer) 8:
          {
            mercury__require__unexpected_2_p_0((MR_String) "predicate \140bytecode_backend.bytecode.output_arg\'/4", (MR_String) "NYI uint64 constants in bytecode");
            return;
          }
          break;
      }
      break;
  }
}

static void MR_CALL 
bytecode_backend__bytecode__output_length_4_p_0(
  MR_Word BinaryOutputStream_5,
  MR_Integer Length_6)
{
  backend_libs__bytecode_data__output_short_4_p_0(BinaryOutputStream_5, Length_6);
}

static void MR_CALL 
bytecode_backend__bytecode__output_is_func_4_p_0(
  MR_Word BinaryOutputStream_5,
  MR_Integer IsFunc_6)
{
  MR_bool succeeded;

  switch (IsFunc_6) {
    default:
      succeeded = MR_FALSE;
      break;
    case (MR_Integer) 0:
      succeeded = MR_TRUE;
      break;
    case (MR_Integer) 1:
      succeeded = MR_TRUE;
      break;
  }
  if (succeeded)
    backend_libs__bytecode_data__output_byte_4_p_0(BinaryOutputStream_5, IsFunc_6);
  else
    {
      mercury__require__unexpected_2_p_0((MR_String) "predicate \140bytecode_backend.bytecode.output_is_func\'/4", (MR_String) "invalid predicate or function specified in bytecode");
      return;
    }
}

static void MR_CALL 
bytecode_backend__bytecode__output_determinism_4_p_0(
  MR_Word BinaryOutputStream_5,
  MR_Word Detism_6)
{
  MR_Integer Code_8 = ((&bytecode_backend__bytecode_vector_common_4[0 + Detism_6]))->bytecode_backend__bytecode__vector_common_type_4_0__vct_4_f_0;

  backend_libs__bytecode_data__output_byte_4_p_0(BinaryOutputStream_5, Code_8);
}

static void MR_CALL 
bytecode_backend__bytecode__output_var_infos_4_p_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2)
{
  while (MR_TRUE)
  {
    // setup for model_det tailcalls optimized into a loop
    ;
    if (!((HeadVar__2_2 == (MR_Word) ((MR_Unsigned) 0U))))
    {
      MR_Word Var_10 = ((MR_Word) ((MR_hl_field(1, HeadVar__2_2, (MR_Integer) 0))));
      MR_Word Vars_11 = ((MR_Word) ((MR_hl_field(1, HeadVar__2_2, (MR_Integer) 1))));
      MR_String Name_16 = ((MR_String) ((MR_hl_field(0, Var_10, (MR_Integer) 0))));
      MR_Word next_value_of_HeadVar__2_2;

      backend_libs__bytecode_data__output_string_4_p_0(HeadVar__1_1, Name_16);
      // direct tailcall eliminated
      ;
      next_value_of_HeadVar__2_2 = Vars_11;
      HeadVar__2_2 = next_value_of_HeadVar__2_2;
      continue;
    }
    break;
  }
}

static MR_bool MR_CALL 
bytecode_backend__bytecode____Unify____byte_arg_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  MR_bool succeeded;

  succeeded = bytecode_backend__bytecode____Unify____byte_arg_0_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
  return succeeded;
}

static void MR_CALL 
bytecode_backend__bytecode____Compare____byte_arg_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  MR_Word conv0_HeadVar__1_1;

  bytecode_backend__bytecode____Compare____byte_arg_0_0(&conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
  *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
}

static MR_bool MR_CALL 
bytecode_backend__bytecode____Unify____byte_code_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  MR_bool succeeded;

  succeeded = bytecode_backend__bytecode____Unify____byte_code_0_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
  return succeeded;
}

static void MR_CALL 
bytecode_backend__bytecode____Compare____byte_code_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  MR_Word conv0_HeadVar__1_1;

  bytecode_backend__bytecode____Compare____byte_code_0_0(&conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
  *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
}

static MR_bool MR_CALL 
bytecode_backend__bytecode____Unify____byte_cons_id_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  MR_bool succeeded;

  succeeded = bytecode_backend__bytecode____Unify____byte_cons_id_0_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
  return succeeded;
}

static void MR_CALL 
bytecode_backend__bytecode____Compare____byte_cons_id_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  MR_Word conv0_HeadVar__1_1;

  bytecode_backend__bytecode____Compare____byte_cons_id_0_0(&conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
  *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
}

static MR_bool MR_CALL 
bytecode_backend__bytecode____Unify____byte_cons_tag_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  MR_bool succeeded;

  succeeded = bytecode_backend__bytecode____Unify____byte_cons_tag_0_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
  return succeeded;
}

static void MR_CALL 
bytecode_backend__bytecode____Compare____byte_cons_tag_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  MR_Word conv0_HeadVar__1_1;

  bytecode_backend__bytecode____Compare____byte_cons_tag_0_0(&conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
  *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
}

static MR_bool MR_CALL 
bytecode_backend__bytecode____Unify____byte_dir_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  MR_bool succeeded;

  succeeded = bytecode_backend__bytecode____Unify____byte_dir_0_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
  return succeeded;
}

static void MR_CALL 
bytecode_backend__bytecode____Compare____byte_dir_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  MR_Word conv0_HeadVar__1_1;

  bytecode_backend__bytecode____Compare____byte_dir_0_0(&conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
  *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
}

static MR_bool MR_CALL 
bytecode_backend__bytecode____Unify____byte_is_func_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  MR_bool succeeded;

  succeeded = bytecode_backend__bytecode____Unify____byte_is_func_0_0(((MR_Integer) (wrapper_arg_1)), ((MR_Integer) (wrapper_arg_2)));
  return succeeded;
}

static void MR_CALL 
bytecode_backend__bytecode____Compare____byte_is_func_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  MR_Word conv0_HeadVar__1_1;

  bytecode_backend__bytecode____Compare____byte_is_func_0_0(&conv0_HeadVar__1_1, ((MR_Integer) (wrapper_arg_2)), ((MR_Integer) (wrapper_arg_3)));
  *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
}

static MR_bool MR_CALL 
bytecode_backend__bytecode____Unify____byte_label_id_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  MR_bool succeeded;

  succeeded = bytecode_backend__bytecode____Unify____byte_label_id_0_0(((MR_Integer) (wrapper_arg_1)), ((MR_Integer) (wrapper_arg_2)));
  return succeeded;
}

static void MR_CALL 
bytecode_backend__bytecode____Compare____byte_label_id_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  MR_Word conv0_HeadVar__1_1;

  bytecode_backend__bytecode____Compare____byte_label_id_0_0(&conv0_HeadVar__1_1, ((MR_Integer) (wrapper_arg_2)), ((MR_Integer) (wrapper_arg_3)));
  *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
}

static MR_bool MR_CALL 
bytecode_backend__bytecode____Unify____byte_module_id_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  MR_bool succeeded;

  succeeded = bytecode_backend__bytecode____Unify____byte_module_id_0_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
  return succeeded;
}

static void MR_CALL 
bytecode_backend__bytecode____Compare____byte_module_id_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  MR_Word conv0_HeadVar__1_1;

  bytecode_backend__bytecode____Compare____byte_module_id_0_0(&conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
  *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
}

static MR_bool MR_CALL 
bytecode_backend__bytecode____Unify____byte_pred_id_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  MR_bool succeeded;

  succeeded = bytecode_backend__bytecode____Unify____byte_pred_id_0_0(((MR_String) (wrapper_arg_1)), ((MR_String) (wrapper_arg_2)));
  return succeeded;
}

static void MR_CALL 
bytecode_backend__bytecode____Compare____byte_pred_id_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  MR_Word conv0_HeadVar__1_1;

  bytecode_backend__bytecode____Compare____byte_pred_id_0_0(&conv0_HeadVar__1_1, ((MR_String) (wrapper_arg_2)), ((MR_String) (wrapper_arg_3)));
  *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
}

static MR_bool MR_CALL 
bytecode_backend__bytecode____Unify____byte_proc_id_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  MR_bool succeeded;

  succeeded = bytecode_backend__bytecode____Unify____byte_proc_id_0_0(((MR_Integer) (wrapper_arg_1)), ((MR_Integer) (wrapper_arg_2)));
  return succeeded;
}

static void MR_CALL 
bytecode_backend__bytecode____Compare____byte_proc_id_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  MR_Word conv0_HeadVar__1_1;

  bytecode_backend__bytecode____Compare____byte_proc_id_0_0(&conv0_HeadVar__1_1, ((MR_Integer) (wrapper_arg_2)), ((MR_Integer) (wrapper_arg_3)));
  *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
}

static MR_bool MR_CALL 
bytecode_backend__bytecode____Unify____byte_reg_type_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  MR_bool succeeded;

  succeeded = bytecode_backend__bytecode____Unify____byte_reg_type_0_0();
  return succeeded;
}

static void MR_CALL 
bytecode_backend__bytecode____Compare____byte_reg_type_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  MR_Word conv0_HeadVar__1_1;

  bytecode_backend__bytecode____Compare____byte_reg_type_0_0(&conv0_HeadVar__1_1);
  *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
}

static MR_bool MR_CALL 
bytecode_backend__bytecode____Unify____byte_temp_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  MR_bool succeeded;

  succeeded = bytecode_backend__bytecode____Unify____byte_temp_0_0(((MR_Integer) (wrapper_arg_1)), ((MR_Integer) (wrapper_arg_2)));
  return succeeded;
}

static void MR_CALL 
bytecode_backend__bytecode____Compare____byte_temp_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  MR_Word conv0_HeadVar__1_1;

  bytecode_backend__bytecode____Compare____byte_temp_0_0(&conv0_HeadVar__1_1, ((MR_Integer) (wrapper_arg_2)), ((MR_Integer) (wrapper_arg_3)));
  *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
}

static MR_bool MR_CALL 
bytecode_backend__bytecode____Unify____byte_test_id_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  MR_bool succeeded;

  succeeded = bytecode_backend__bytecode____Unify____byte_test_id_0_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
  return succeeded;
}

static void MR_CALL 
bytecode_backend__bytecode____Compare____byte_test_id_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  MR_Word conv0_HeadVar__1_1;

  bytecode_backend__bytecode____Compare____byte_test_id_0_0(&conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
  *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
}

static MR_bool MR_CALL 
bytecode_backend__bytecode____Unify____byte_tree_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  MR_bool succeeded;

  succeeded = bytecode_backend__bytecode____Unify____byte_tree_0_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
  return succeeded;
}

static void MR_CALL 
bytecode_backend__bytecode____Compare____byte_tree_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  MR_Word conv0_HeadVar__1_1;

  bytecode_backend__bytecode____Compare____byte_tree_0_0(&conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
  *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
}

static MR_bool MR_CALL 
bytecode_backend__bytecode____Unify____byte_var_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  MR_bool succeeded;

  succeeded = bytecode_backend__bytecode____Unify____byte_var_0_0(((MR_Integer) (wrapper_arg_1)), ((MR_Integer) (wrapper_arg_2)));
  return succeeded;
}

static void MR_CALL 
bytecode_backend__bytecode____Compare____byte_var_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  MR_Word conv0_HeadVar__1_1;

  bytecode_backend__bytecode____Compare____byte_var_0_0(&conv0_HeadVar__1_1, ((MR_Integer) (wrapper_arg_2)), ((MR_Integer) (wrapper_arg_3)));
  *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
}

static MR_bool MR_CALL 
bytecode_backend__bytecode____Unify____byte_var_info_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  MR_bool succeeded;

  succeeded = bytecode_backend__bytecode____Unify____byte_var_info_0_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
  return succeeded;
}

static void MR_CALL 
bytecode_backend__bytecode____Compare____byte_var_info_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  MR_Word conv0_HeadVar__1_1;

  bytecode_backend__bytecode____Compare____byte_var_info_0_0(&conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
  *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
}

void mercury__bytecode_backend__bytecode__init(void)
{
}

void mercury__bytecode_backend__bytecode__init_type_tables(void)
{
	static MR_bool initialised = MR_FALSE;
	if (initialised) return;
	initialised = MR_TRUE;

	MR_register_type_ctor_info(&bytecode_backend__bytecode__bytecode_backend__bytecode__type_ctor_info_byte_arg_0);
	MR_register_type_ctor_info(&bytecode_backend__bytecode__bytecode_backend__bytecode__type_ctor_info_byte_code_0);
	MR_register_type_ctor_info(&bytecode_backend__bytecode__bytecode_backend__bytecode__type_ctor_info_byte_cons_id_0);
	MR_register_type_ctor_info(&bytecode_backend__bytecode__bytecode_backend__bytecode__type_ctor_info_byte_cons_tag_0);
	MR_register_type_ctor_info(&bytecode_backend__bytecode__bytecode_backend__bytecode__type_ctor_info_byte_dir_0);
	MR_register_type_ctor_info(&bytecode_backend__bytecode__bytecode_backend__bytecode__type_ctor_info_byte_is_func_0);
	MR_register_type_ctor_info(&bytecode_backend__bytecode__bytecode_backend__bytecode__type_ctor_info_byte_label_id_0);
	MR_register_type_ctor_info(&bytecode_backend__bytecode__bytecode_backend__bytecode__type_ctor_info_byte_module_id_0);
	MR_register_type_ctor_info(&bytecode_backend__bytecode__bytecode_backend__bytecode__type_ctor_info_byte_pred_id_0);
	MR_register_type_ctor_info(&bytecode_backend__bytecode__bytecode_backend__bytecode__type_ctor_info_byte_proc_id_0);
	MR_register_type_ctor_info(&bytecode_backend__bytecode__bytecode_backend__bytecode__type_ctor_info_byte_reg_type_0);
	MR_register_type_ctor_info(&bytecode_backend__bytecode__bytecode_backend__bytecode__type_ctor_info_byte_temp_0);
	MR_register_type_ctor_info(&bytecode_backend__bytecode__bytecode_backend__bytecode__type_ctor_info_byte_test_id_0);
	MR_register_type_ctor_info(&bytecode_backend__bytecode__bytecode_backend__bytecode__type_ctor_info_byte_tree_0);
	MR_register_type_ctor_info(&bytecode_backend__bytecode__bytecode_backend__bytecode__type_ctor_info_byte_var_0);
	MR_register_type_ctor_info(&bytecode_backend__bytecode__bytecode_backend__bytecode__type_ctor_info_byte_var_info_0);
}

void mercury__bytecode_backend__bytecode__init_debugger(void)
{
	MR_fatal_error("debugger initialization in MLDS grade");
}

// Ensure everything is compiled with the same grade.
const char *mercury__bytecode_backend__bytecode__grade_check(void)
{
    return &MR_GRADE_VAR;
}

// :- end_module bytecode_backend.bytecode.
