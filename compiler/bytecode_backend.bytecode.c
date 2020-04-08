/*
** Automatically generated from `bytecode.m'
** by the Mercury compiler,
** version rotd-2020-04-08
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
#include "bimap.mih"
#include "bitmap.mih"
#include "bool.mih"
#include "builtin.mih"
#include "bytecode_backend.mih"
#include "char.mih"
#include "construct.mih"
#include "cord.mih"
#include "deconstruct.mih"
#include "enum.mih"
#include "getopt_io.mih"
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
#include "stream.mih"
#include "string.mih"
#include "term.mih"
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

static const MR_EnumFunctorDescPtr bytecode_backend__bytecode__bytecode_backend__bytecode__enum_value_ordered_byte_dir_0[3];

static const MR_EnumFunctorDescPtr bytecode_backend__bytecode__bytecode_backend__bytecode__enum_name_ordered_byte_dir_0[3];

static const MR_Integer bytecode_backend__bytecode__bytecode_backend__bytecode__functor_number_map_byte_dir_0[3];

static const MR_EnumFunctorDesc bytecode_backend__bytecode__bytecode_backend__bytecode__enum_functor_desc_byte_reg_type_0_0;

static const MR_EnumFunctorDescPtr bytecode_backend__bytecode__bytecode_backend__bytecode__enum_value_ordered_byte_reg_type_0[1];

static const MR_EnumFunctorDescPtr bytecode_backend__bytecode__bytecode_backend__bytecode__enum_name_ordered_byte_reg_type_0[1];

static const MR_Integer bytecode_backend__bytecode__bytecode_backend__bytecode__functor_number_map_byte_reg_type_0[1];

static const MR_EnumFunctorDesc bytecode_backend__bytecode__bytecode_backend__bytecode__enum_functor_desc_byte_test_id_0_0;

static const MR_EnumFunctorDesc bytecode_backend__bytecode__bytecode_backend__bytecode__enum_functor_desc_byte_test_id_0_1;

static const MR_EnumFunctorDesc bytecode_backend__bytecode__bytecode_backend__bytecode__enum_functor_desc_byte_test_id_0_2;

static const MR_EnumFunctorDesc bytecode_backend__bytecode__bytecode_backend__bytecode__enum_functor_desc_byte_test_id_0_3;

static const MR_EnumFunctorDesc bytecode_backend__bytecode__bytecode_backend__bytecode__enum_functor_desc_byte_test_id_0_4;

static const MR_EnumFunctorDesc bytecode_backend__bytecode__bytecode_backend__bytecode__enum_functor_desc_byte_test_id_0_5;

static const MR_EnumFunctorDescPtr bytecode_backend__bytecode__bytecode_backend__bytecode__enum_value_ordered_byte_test_id_0[6];

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
bytecode_backend__bytecode__IntroducedFrom__pred__output_args__275__1_2_p_0(
  MR_Word OtherConsIds_72,
  MR_Word HeadVar__2_81);

static void MR_CALL 
bytecode_backend__bytecode__debug_bytecode_list_3_p_0(
  MR_Word HeadVar__1_1);

static void MR_CALL 
bytecode_backend__bytecode__debug_args_3_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3);

static void MR_CALL 
bytecode_backend__bytecode__debug_args_3_p_0(
  MR_Word HeadVar__1_1);

static void MR_CALL 
bytecode_backend__bytecode__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_100_101_98_117_103_95_114_101_103_95_95_91_49_93_95_48_4_p_0(
  MR_Integer N_5);

static void MR_CALL 
bytecode_backend__bytecode__debug_unop_3_p_0(
  MR_Word Unop_4);

static void MR_CALL 
bytecode_backend__bytecode__debug_binop_3_p_0(
  MR_Word Binop_4);

static void MR_CALL 
bytecode_backend__bytecode__binop_debug_2_p_0(
  MR_Word HeadVar__1_1,
  MR_String * HeadVar__2_2);

static void MR_CALL 
bytecode_backend__bytecode__debug_cons_id_3_p_0(
  MR_Word HeadVar__1_1);

static void MR_CALL 
bytecode_backend__bytecode__debug_cstring_3_p_0(
  MR_String Str_4);

static void MR_CALL 
bytecode_backend__bytecode__debug_tag_3_p_0(
  MR_Word HeadVar__1_1);

static void MR_CALL 
bytecode_backend__bytecode__debug_label_id_3_p_0(
  MR_Integer LabelId_4);

static void MR_CALL 
bytecode_backend__bytecode__debug_proc_id_3_p_0(
  MR_Integer ProcId_4);

static void MR_CALL 
bytecode_backend__bytecode__debug_pred_id_3_p_0(
  MR_String PredId_4);

static void MR_CALL 
bytecode_backend__bytecode__debug_module_id_3_p_0(
  MR_Word ModuleId_4);

static void MR_CALL 
bytecode_backend__bytecode__debug_sym_name_3_p_0(
  MR_Word HeadVar__1_1);

static void MR_CALL 
bytecode_backend__bytecode__debug_test_id_3_p_0(
  MR_Word HeadVar__1_1);

static void MR_CALL 
bytecode_backend__bytecode__debug_var_dirs_3_p_0(
  MR_Word HeadVar__1_1);

static void MR_CALL 
bytecode_backend__bytecode__debug_temp_3_p_0(
  MR_Integer Var_4);

static void MR_CALL 
bytecode_backend__bytecode__debug_vars_3_p_0(
  MR_Word HeadVar__1_1);

static void MR_CALL 
bytecode_backend__bytecode__debug_arg_3_p_0(
  MR_Word HeadVar__1_1);

static void MR_CALL 
bytecode_backend__bytecode__debug_float_3_p_0(
  MR_Float Val_4);

static void MR_CALL 
bytecode_backend__bytecode__debug_uint64_3_p_0(
  uint64_t Val_4);

static void MR_CALL 
bytecode_backend__bytecode__debug_int64_3_p_0(
  int64_t Val_4);

static void MR_CALL 
bytecode_backend__bytecode__debug_uint32_3_p_0(
  uint32_t Val_4);

static void MR_CALL 
bytecode_backend__bytecode__debug_int32_3_p_0(
  int32_t Val_4);

static void MR_CALL 
bytecode_backend__bytecode__debug_uint16_3_p_0(
  uint16_t Val_4);

static void MR_CALL 
bytecode_backend__bytecode__debug_int16_3_p_0(
  int16_t Val_4);

static void MR_CALL 
bytecode_backend__bytecode__debug_uint8_3_p_0(
  uint8_t Val_4);

static void MR_CALL 
bytecode_backend__bytecode__debug_int8_3_p_0(
  int8_t Val_4);

static void MR_CALL 
bytecode_backend__bytecode__debug_uint_3_p_0(
  MR_Unsigned Val_4);

static void MR_CALL 
bytecode_backend__bytecode__debug_int_3_p_0(
  MR_Integer Val_4);

static void MR_CALL 
bytecode_backend__bytecode__debug_string_3_p_0(
  MR_String Val_4);

static void MR_CALL 
bytecode_backend__bytecode__debug_var_3_p_0(
  MR_Integer Var_4);

static void MR_CALL 
bytecode_backend__bytecode__debug_length_3_p_0(
  MR_Integer Length_4);

static void MR_CALL 
bytecode_backend__bytecode__debug_is_func_3_p_0(
  MR_Integer IsFunc_4);

static void MR_CALL 
bytecode_backend__bytecode__debug_determinism_3_p_0(
  MR_Word Detism_4);

static void MR_CALL 
bytecode_backend__bytecode__debug_var_infos_3_p_0(
  MR_Word HeadVar__1_1);

static void MR_CALL 
bytecode_backend__bytecode__output_bytecode_list_3_p_0(
  MR_Word HeadVar__1_1);

static MR_bool MR_CALL 
bytecode_backend__bytecode__output_args_3_p_0_1(
  MR_Box closure_arg);

static void MR_CALL 
bytecode_backend__bytecode__output_args_3_p_0(
  MR_Word HeadVar__1_1);

static void MR_CALL 
bytecode_backend__bytecode__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_111_117_116_112_117_116_95_114_101_103_95_95_91_49_93_95_48_4_p_0(
  MR_Integer N_5);

static void MR_CALL 
bytecode_backend__bytecode__output_unop_3_p_0(
  MR_Word Unop_4);

static void MR_CALL 
bytecode_backend__bytecode__output_binop_3_p_0(
  MR_Word Binop_4);

static void MR_CALL 
bytecode_backend__bytecode__binop_code_2_p_0(
  MR_Word HeadVar__1_1,
  MR_Integer * HeadVar__2_2);

static void MR_CALL 
bytecode_backend__bytecode__output_cons_id_3_p_0(
  MR_Word HeadVar__1_1);

static void MR_CALL 
bytecode_backend__bytecode__output_tag_3_p_0(
  MR_Word HeadVar__1_1);

static void MR_CALL 
bytecode_backend__bytecode__output_label_id_3_p_0(
  MR_Integer LabelId_4);

static void MR_CALL 
bytecode_backend__bytecode__output_proc_id_3_p_0(
  MR_Integer ProcId_4);

static void MR_CALL 
bytecode_backend__bytecode__output_pred_id_3_p_0(
  MR_String PredId_4);

static void MR_CALL 
bytecode_backend__bytecode__output_module_id_3_p_0(
  MR_Word ModuleId_4);

static void MR_CALL 
bytecode_backend__bytecode__output_test_id_3_p_0(
  MR_Word HeadVar__1_1);

static void MR_CALL 
bytecode_backend__bytecode__output_var_dirs_3_p_0(
  MR_Word HeadVar__1_1);

static void MR_CALL 
bytecode_backend__bytecode__output_temp_3_p_0(
  MR_Integer Var_4);

static void MR_CALL 
bytecode_backend__bytecode__output_vars_3_p_0(
  MR_Word HeadVar__1_1);

static void MR_CALL 
bytecode_backend__bytecode__output_var_3_p_0(
  MR_Integer Var_4);

static void MR_CALL 
bytecode_backend__bytecode__output_arg_3_p_0(
  MR_Word HeadVar__1_1);

static void MR_CALL 
bytecode_backend__bytecode__output_length_3_p_0(
  MR_Integer Length_4);

static void MR_CALL 
bytecode_backend__bytecode__output_is_func_3_p_0(
  MR_Integer IsFunc_4);

static void MR_CALL 
bytecode_backend__bytecode__output_determinism_3_p_0(
  MR_Word Detism_4);

static void MR_CALL 
bytecode_backend__bytecode__output_var_infos_3_p_0(
  MR_Word HeadVar__1_1);

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

static /* final */ const MR_Box bytecode_backend__bytecode_scalar_common_2[2][3];

static /* final */ const MR_Box bytecode_backend__bytecode_scalar_common_4[1][5];

static /* final */ const MR_Box bytecode_backend__bytecode_scalar_common_6[1][6];


/* sealed */ struct bytecode_backend__bytecode__vector_common_type_3_0_s {
  const MR_Integer bytecode_backend__bytecode__vector_common_type_3_0__vct_3_f_0;
};

static /* final */ const struct bytecode_backend__bytecode__vector_common_type_3_0_s bytecode_backend__bytecode_vector_common_3[178];

/* sealed */ struct bytecode_backend__bytecode__vector_common_type_5_0_s {
  const MR_String bytecode_backend__bytecode__vector_common_type_5_0__vct_5_f_0;
};

static /* final */ const struct bytecode_backend__bytecode__vector_common_type_5_0_s bytecode_backend__bytecode_vector_common_5[178];



static /* final */ const MR_Box bytecode_backend__bytecode_scalar_common_1[5][2] = {
  /* row 0 */
  {
    ((MR_Box) (&mercury__list__list__type_ctor_info_list_1)),
    ((MR_Box) (&bytecode_backend__bytecode__bytecode_backend__bytecode__type_ctor_info_byte_cons_id_0))
  },
  /* row 1 */
  {
    ((MR_Box) (&mercury__list__list__type_ctor_info_list_1)),
    ((MR_Box) (&bytecode_backend__bytecode__bytecode_backend__bytecode__type_ctor_info_byte_var_info_0))
  },
  /* row 2 */
  {
    ((MR_Box) (&mercury__list__list__type_ctor_info_list_1)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_int_0))
  },
  /* row 3 */
  {
    ((MR_Box) (&mercury__list__list__type_ctor_info_list_1)),
    ((MR_Box) (&bytecode_backend__bytecode_scalar_common_2[0]))
  },
  /* row 4 */
  {
    ((MR_Box) (&mercury__cord__cord__type_ctor_info_cord_1)),
    ((MR_Box) (&bytecode_backend__bytecode__bytecode_backend__bytecode__type_ctor_info_byte_code_0))
  },
};

static /* final */ const MR_Box bytecode_backend__bytecode_scalar_common_2[2][3] = {
  /* row 0 */
  {
    ((MR_Box) (&mercury__pair__pair__type_ctor_info_pair_2)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_int_0)),
    ((MR_Box) (&bytecode_backend__bytecode__bytecode_backend__bytecode__type_ctor_info_byte_dir_0))
  },
  /* row 1 */
  {
    ((MR_Box) (&bytecode_backend__bytecode_scalar_common_6[0])),
    ((MR_Box) (bytecode_backend__bytecode__debug_args_3_p_0_1)),
    ((MR_Box) ((MR_Integer) 0))
  },
};

static /* final */ const MR_Box bytecode_backend__bytecode_scalar_common_4[1][5] = {
  /* row 0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 2)),
    ((MR_Box) (&bytecode_backend__bytecode__list__pti_list_1__plain_bytecode_backend__bytecode__type_ctor_info_byte_cons_id_0)),
    ((MR_Box) (&bytecode_backend__bytecode__list__pti_list_1__plain_bytecode_backend__bytecode__type_ctor_info_byte_cons_id_0))
  },
};

static /* final */ const MR_Box bytecode_backend__bytecode_scalar_common_6[1][6] = {
  /* row 0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 3)),
    ((MR_Box) (&bytecode_backend__bytecode__bytecode_backend__bytecode__type_ctor_info_byte_cons_id_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0))
  },
};


static /* final */ const struct bytecode_backend__bytecode__vector_common_type_3_0_s bytecode_backend__bytecode_vector_common_3[178] = {
  /* row 0 */   {     (MR_Integer) 0 },
  /* row 1 */   {     (MR_Integer) 1 },
  /* row 2 */   {     (MR_Integer) 2 },
  /* row 3 */   {     (MR_Integer) 3 },
  /* row 4 */   {     (MR_Integer) 4 },
  /* row 5 */   {     (MR_Integer) 5 },
  /* row 6 */   {     (MR_Integer) 6 },
  /* row 7 */   {     (MR_Integer) 7 },
  /* row 8 */   {     (MR_Integer) 7 },
  /* row 9 */   {     (MR_Integer) 56 },
  /* row 10 */   {     (MR_Integer) 72 },
  /* row 11 */   {     (MR_Integer) 88 },
  /* row 12 */   {     (MR_Integer) 104 },
  /* row 13 */   {     (MR_Integer) 120 },
  /* row 14 */   {     (MR_Integer) 136 },
  /* row 15 */   {     (MR_Integer) 152 },
  /* row 16 */   {     (MR_Integer) 168 },
  /* row 17 */   {     (MR_Integer) 184 },
  /* row 18 */   {     (MR_Integer) 8 },
  /* row 19 */   {     (MR_Integer) 57 },
  /* row 20 */   {     (MR_Integer) 73 },
  /* row 21 */   {     (MR_Integer) 89 },
  /* row 22 */   {     (MR_Integer) 105 },
  /* row 23 */   {     (MR_Integer) 121 },
  /* row 24 */   {     (MR_Integer) 137 },
  /* row 25 */   {     (MR_Integer) 153 },
  /* row 26 */   {     (MR_Integer) 169 },
  /* row 27 */   {     (MR_Integer) 185 },
  /* row 28 */   {     (MR_Integer) 9 },
  /* row 29 */   {     (MR_Integer) 58 },
  /* row 30 */   {     (MR_Integer) 74 },
  /* row 31 */   {     (MR_Integer) 90 },
  /* row 32 */   {     (MR_Integer) 106 },
  /* row 33 */   {     (MR_Integer) 122 },
  /* row 34 */   {     (MR_Integer) 138 },
  /* row 35 */   {     (MR_Integer) 154 },
  /* row 36 */   {     (MR_Integer) 170 },
  /* row 37 */   {     (MR_Integer) 186 },
  /* row 38 */   {     (MR_Integer) 12 },
  /* row 39 */   {     (MR_Integer) 45 },
  /* row 40 */   {     (MR_Integer) 61 },
  /* row 41 */   {     (MR_Integer) 77 },
  /* row 42 */   {     (MR_Integer) 93 },
  /* row 43 */   {     (MR_Integer) 109 },
  /* row 44 */   {     (MR_Integer) 125 },
  /* row 45 */   {     (MR_Integer) 141 },
  /* row 46 */   {     (MR_Integer) 157 },
  /* row 47 */   {     (MR_Integer) 173 },
  /* row 48 */   {     (MR_Integer) 0 },
  /* row 49 */   {     (MR_Integer) 51 },
  /* row 50 */   {     (MR_Integer) 67 },
  /* row 51 */   {     (MR_Integer) 83 },
  /* row 52 */   {     (MR_Integer) 99 },
  /* row 53 */   {     (MR_Integer) 115 },
  /* row 54 */   {     (MR_Integer) 131 },
  /* row 55 */   {     (MR_Integer) 147 },
  /* row 56 */   {     (MR_Integer) 163 },
  /* row 57 */   {     (MR_Integer) 179 },
  /* row 58 */   {     (MR_Integer) 3 },
  /* row 59 */   {     (MR_Integer) 54 },
  /* row 60 */   {     (MR_Integer) 70 },
  /* row 61 */   {     (MR_Integer) 86 },
  /* row 62 */   {     (MR_Integer) 102 },
  /* row 63 */   {     (MR_Integer) 118 },
  /* row 64 */   {     (MR_Integer) 134 },
  /* row 65 */   {     (MR_Integer) 150 },
  /* row 66 */   {     (MR_Integer) 166 },
  /* row 67 */   {     (MR_Integer) 182 },
  /* row 68 */   {     (MR_Integer) 24 },
  /* row 69 */   {     (MR_Integer) 50 },
  /* row 70 */   {     (MR_Integer) 66 },
  /* row 71 */   {     (MR_Integer) 82 },
  /* row 72 */   {     (MR_Integer) 98 },
  /* row 73 */   {     (MR_Integer) 114 },
  /* row 74 */   {     (MR_Integer) 130 },
  /* row 75 */   {     (MR_Integer) 146 },
  /* row 76 */   {     (MR_Integer) 162 },
  /* row 77 */   {     (MR_Integer) 178 },
  /* row 78 */   {     (MR_Integer) 22 },
  /* row 79 */   {     (MR_Integer) 48 },
  /* row 80 */   {     (MR_Integer) 64 },
  /* row 81 */   {     (MR_Integer) 80 },
  /* row 82 */   {     (MR_Integer) 96 },
  /* row 83 */   {     (MR_Integer) 112 },
  /* row 84 */   {     (MR_Integer) 128 },
  /* row 85 */   {     (MR_Integer) 144 },
  /* row 86 */   {     (MR_Integer) 160 },
  /* row 87 */   {     (MR_Integer) 176 },
  /* row 88 */   {     (MR_Integer) 23 },
  /* row 89 */   {     (MR_Integer) 49 },
  /* row 90 */   {     (MR_Integer) 65 },
  /* row 91 */   {     (MR_Integer) 81 },
  /* row 92 */   {     (MR_Integer) 97 },
  /* row 93 */   {     (MR_Integer) 113 },
  /* row 94 */   {     (MR_Integer) 129 },
  /* row 95 */   {     (MR_Integer) 145 },
  /* row 96 */   {     (MR_Integer) 161 },
  /* row 97 */   {     (MR_Integer) 177 },
  /* row 98 */   {     (MR_Integer) 21 },
  /* row 99 */   {     (MR_Integer) 47 },
  /* row 100 */   {     (MR_Integer) 63 },
  /* row 101 */   {     (MR_Integer) 79 },
  /* row 102 */   {     (MR_Integer) 95 },
  /* row 103 */   {     (MR_Integer) 111 },
  /* row 104 */   {     (MR_Integer) 127 },
  /* row 105 */   {     (MR_Integer) 143 },
  /* row 106 */   {     (MR_Integer) 159 },
  /* row 107 */   {     (MR_Integer) 175 },
  /* row 108 */   {     (MR_Integer) 4 },
  /* row 109 */   {     (MR_Integer) 55 },
  /* row 110 */   {     (MR_Integer) 71 },
  /* row 111 */   {     (MR_Integer) 87 },
  /* row 112 */   {     (MR_Integer) 103 },
  /* row 113 */   {     (MR_Integer) 119 },
  /* row 114 */   {     (MR_Integer) 135 },
  /* row 115 */   {     (MR_Integer) 151 },
  /* row 116 */   {     (MR_Integer) 167 },
  /* row 117 */   {     (MR_Integer) 183 },
  /* row 118 */   {     (MR_Integer) 2 },
  /* row 119 */   {     (MR_Integer) 53 },
  /* row 120 */   {     (MR_Integer) 69 },
  /* row 121 */   {     (MR_Integer) 85 },
  /* row 122 */   {     (MR_Integer) 101 },
  /* row 123 */   {     (MR_Integer) 117 },
  /* row 124 */   {     (MR_Integer) 133 },
  /* row 125 */   {     (MR_Integer) 149 },
  /* row 126 */   {     (MR_Integer) 165 },
  /* row 127 */   {     (MR_Integer) 181 },
  /* row 128 */   {     (MR_Integer) 1 },
  /* row 129 */   {     (MR_Integer) 52 },
  /* row 130 */   {     (MR_Integer) 68 },
  /* row 131 */   {     (MR_Integer) 84 },
  /* row 132 */   {     (MR_Integer) 100 },
  /* row 133 */   {     (MR_Integer) 116 },
  /* row 134 */   {     (MR_Integer) 132 },
  /* row 135 */   {     (MR_Integer) 148 },
  /* row 136 */   {     (MR_Integer) 164 },
  /* row 137 */   {     (MR_Integer) 180 },
  /* row 138 */   {     (MR_Integer) 13 },
  /* row 139 */   {     (MR_Integer) 46 },
  /* row 140 */   {     (MR_Integer) 62 },
  /* row 141 */   {     (MR_Integer) 78 },
  /* row 142 */   {     (MR_Integer) 94 },
  /* row 143 */   {     (MR_Integer) 110 },
  /* row 144 */   {     (MR_Integer) 126 },
  /* row 145 */   {     (MR_Integer) 142 },
  /* row 146 */   {     (MR_Integer) 158 },
  /* row 147 */   {     (MR_Integer) 174 },
  /* row 148 */   {     (MR_Integer) 5 },
  /* row 149 */   {     (MR_Integer) 59 },
  /* row 150 */   {     (MR_Integer) 75 },
  /* row 151 */   {     (MR_Integer) 91 },
  /* row 152 */   {     (MR_Integer) 107 },
  /* row 153 */   {     (MR_Integer) 123 },
  /* row 154 */   {     (MR_Integer) 139 },
  /* row 155 */   {     (MR_Integer) 155 },
  /* row 156 */   {     (MR_Integer) 171 },
  /* row 157 */   {     (MR_Integer) 187 },
  /* row 158 */   {     (MR_Integer) 6 },
  /* row 159 */   {     (MR_Integer) 60 },
  /* row 160 */   {     (MR_Integer) 76 },
  /* row 161 */   {     (MR_Integer) 92 },
  /* row 162 */   {     (MR_Integer) 108 },
  /* row 163 */   {     (MR_Integer) 124 },
  /* row 164 */   {     (MR_Integer) 140 },
  /* row 165 */   {     (MR_Integer) 156 },
  /* row 166 */   {     (MR_Integer) 172 },
  /* row 167 */   {     (MR_Integer) 188 },
  /* row 168 */   {     (MR_Integer) 6 },
  /* row 169 */   {     (MR_Integer) 14 },
  /* row 170 */   {     (MR_Integer) 15 },
  /* row 171 */   {     (MR_Integer) 16 },
  /* row 172 */   {     (MR_Integer) 17 },
  /* row 173 */   {     (MR_Integer) 18 },
  /* row 174 */   {     (MR_Integer) 19 },
  /* row 175 */   {     (MR_Integer) 20 },
  /* row 176 */   {     (MR_Integer) 21 },
  /* row 177 */   {     (MR_Integer) 22 },
};

static /* final */ const struct bytecode_backend__bytecode__vector_common_type_5_0_s bytecode_backend__bytecode_vector_common_5[178] = {
  /* row 0 */   {     (MR_String) "det" },
  /* row 1 */   {     (MR_String) "semidet" },
  /* row 2 */   {     (MR_String) "multidet" },
  /* row 3 */   {     (MR_String) "nondet" },
  /* row 4 */   {     (MR_String) "cc_multidet" },
  /* row 5 */   {     (MR_String) "cc_nondet" },
  /* row 6 */   {     (MR_String) "erroneous" },
  /* row 7 */   {     (MR_String) "failure" },
  /* row 8 */   {     (MR_String) "&" },
  /* row 9 */   {     (MR_String) "&(uint)" },
  /* row 10 */   {     (MR_String) "&(int8)" },
  /* row 11 */   {     (MR_String) "&(uint8)" },
  /* row 12 */   {     (MR_String) "&(int16)" },
  /* row 13 */   {     (MR_String) "&(uint16)" },
  /* row 14 */   {     (MR_String) "&(int32)" },
  /* row 15 */   {     (MR_String) "&(uint32)" },
  /* row 16 */   {     (MR_String) "&(int64)" },
  /* row 17 */   {     (MR_String) "&(uint64)" },
  /* row 18 */   {     (MR_String) "|" },
  /* row 19 */   {     (MR_String) "|(uint)" },
  /* row 20 */   {     (MR_String) "|(int8)" },
  /* row 21 */   {     (MR_String) "|(uint8)" },
  /* row 22 */   {     (MR_String) "|(int16)" },
  /* row 23 */   {     (MR_String) "|(uint16)" },
  /* row 24 */   {     (MR_String) "|(int32)" },
  /* row 25 */   {     (MR_String) "|(uint32)" },
  /* row 26 */   {     (MR_String) "|(int64)" },
  /* row 27 */   {     (MR_String) "|(uint64)" },
  /* row 28 */   {     (MR_String) "^" },
  /* row 29 */   {     (MR_String) "^(uint)" },
  /* row 30 */   {     (MR_String) "^(int8)" },
  /* row 31 */   {     (MR_String) "^(uint8)" },
  /* row 32 */   {     (MR_String) "^(int16)" },
  /* row 33 */   {     (MR_String) "^(uint16)" },
  /* row 34 */   {     (MR_String) "^(int32)" },
  /* row 35 */   {     (MR_String) "^(uint32)" },
  /* row 36 */   {     (MR_String) "^(int64)" },
  /* row 37 */   {     (MR_String) "^(uint64)" },
  /* row 38 */   {     (MR_String) "eq" },
  /* row 39 */   {     (MR_String) "==(uint)" },
  /* row 40 */   {     (MR_String) "==(int8)" },
  /* row 41 */   {     (MR_String) "==(uint8)" },
  /* row 42 */   {     (MR_String) "==(int6)" },
  /* row 43 */   {     (MR_String) "==(uint16)" },
  /* row 44 */   {     (MR_String) "==(int32)" },
  /* row 45 */   {     (MR_String) "==(uint32)" },
  /* row 46 */   {     (MR_String) "==(int64)" },
  /* row 47 */   {     (MR_String) "==(uint64)" },
  /* row 48 */   {     (MR_String) "+" },
  /* row 49 */   {     (MR_String) "+(uint)" },
  /* row 50 */   {     (MR_String) "+(int8)" },
  /* row 51 */   {     (MR_String) "+(uint8)" },
  /* row 52 */   {     (MR_String) "+(int16)" },
  /* row 53 */   {     (MR_String) "+(uint16)" },
  /* row 54 */   {     (MR_String) "+(int32)" },
  /* row 55 */   {     (MR_String) "+(uint32)" },
  /* row 56 */   {     (MR_String) "+(int64)" },
  /* row 57 */   {     (MR_String) "+(uint64)" },
  /* row 58 */   {     (MR_String) "/" },
  /* row 59 */   {     (MR_String) "/(uint)" },
  /* row 60 */   {     (MR_String) "/(int8)" },
  /* row 61 */   {     (MR_String) "/(uint8)" },
  /* row 62 */   {     (MR_String) "/(int16)" },
  /* row 63 */   {     (MR_String) "/(uint16)" },
  /* row 64 */   {     (MR_String) "/(int32)" },
  /* row 65 */   {     (MR_String) "/(uint32)" },
  /* row 66 */   {     (MR_String) "/(int64)" },
  /* row 67 */   {     (MR_String) "/(uint64)" },
  /* row 68 */   {     (MR_String) ">=" },
  /* row 69 */   {     (MR_String) ">=(uint)" },
  /* row 70 */   {     (MR_String) ">=(int8)" },
  /* row 71 */   {     (MR_String) ">=(uint8)" },
  /* row 72 */   {     (MR_String) ">=(int16)" },
  /* row 73 */   {     (MR_String) ">=(uint16)" },
  /* row 74 */   {     (MR_String) ">=(int32)" },
  /* row 75 */   {     (MR_String) ">=(uint32)" },
  /* row 76 */   {     (MR_String) ">=(int64)" },
  /* row 77 */   {     (MR_String) ">=(uint64)" },
  /* row 78 */   {     (MR_String) ">" },
  /* row 79 */   {     (MR_String) ">(uint)" },
  /* row 80 */   {     (MR_String) ">(int8)" },
  /* row 81 */   {     (MR_String) ">(uint8)" },
  /* row 82 */   {     (MR_String) ">(int16)" },
  /* row 83 */   {     (MR_String) ">(uint16)" },
  /* row 84 */   {     (MR_String) ">(int32)" },
  /* row 85 */   {     (MR_String) ">(uint32)" },
  /* row 86 */   {     (MR_String) ">(int64)" },
  /* row 87 */   {     (MR_String) ">(uint64)" },
  /* row 88 */   {     (MR_String) "<=" },
  /* row 89 */   {     (MR_String) "<=(uint)" },
  /* row 90 */   {     (MR_String) "<=(int8)" },
  /* row 91 */   {     (MR_String) "<=(uint8)" },
  /* row 92 */   {     (MR_String) "<=(int16)" },
  /* row 93 */   {     (MR_String) "<=(uint16)" },
  /* row 94 */   {     (MR_String) "<=(int32)" },
  /* row 95 */   {     (MR_String) "<=(uint32)" },
  /* row 96 */   {     (MR_String) "<=(int64)" },
  /* row 97 */   {     (MR_String) "<=(uint64)" },
  /* row 98 */   {     (MR_String) "<" },
  /* row 99 */   {     (MR_String) "<(uint)" },
  /* row 100 */   {     (MR_String) "<(int8)" },
  /* row 101 */   {     (MR_String) "<(uint8)" },
  /* row 102 */   {     (MR_String) "<(int16)" },
  /* row 103 */   {     (MR_String) "<(uint16)" },
  /* row 104 */   {     (MR_String) "<(int32)" },
  /* row 105 */   {     (MR_String) "<(uint32)" },
  /* row 106 */   {     (MR_String) "<(int64)" },
  /* row 107 */   {     (MR_String) "<(uint64)" },
  /* row 108 */   {     (MR_String) "mod" },
  /* row 109 */   {     (MR_String) "mod(uint)" },
  /* row 110 */   {     (MR_String) "mod(int8)" },
  /* row 111 */   {     (MR_String) "mod(uint8)" },
  /* row 112 */   {     (MR_String) "mod(int16)" },
  /* row 113 */   {     (MR_String) "mod(uint16)" },
  /* row 114 */   {     (MR_String) "mod(int32)" },
  /* row 115 */   {     (MR_String) "mod(uint32" },
  /* row 116 */   {     (MR_String) "mod(int64)" },
  /* row 117 */   {     (MR_String) "mod(uint64" },
  /* row 118 */   {     (MR_String) "*" },
  /* row 119 */   {     (MR_String) "*(uint)" },
  /* row 120 */   {     (MR_String) "*(int8)" },
  /* row 121 */   {     (MR_String) "*(uint8)" },
  /* row 122 */   {     (MR_String) "*(int16)" },
  /* row 123 */   {     (MR_String) "*(uint16)" },
  /* row 124 */   {     (MR_String) "*(int32)" },
  /* row 125 */   {     (MR_String) "*(uint32)" },
  /* row 126 */   {     (MR_String) "*(int64)" },
  /* row 127 */   {     (MR_String) "*(uint64)" },
  /* row 128 */   {     (MR_String) "-" },
  /* row 129 */   {     (MR_String) "-(uint)" },
  /* row 130 */   {     (MR_String) "-(int8)" },
  /* row 131 */   {     (MR_String) "-(uint8)" },
  /* row 132 */   {     (MR_String) "-(int16)" },
  /* row 133 */   {     (MR_String) "-(uint16)" },
  /* row 134 */   {     (MR_String) "-(int32)" },
  /* row 135 */   {     (MR_String) "-(uint32)" },
  /* row 136 */   {     (MR_String) "-(int64)" },
  /* row 137 */   {     (MR_String) "-(uint64)" },
  /* row 138 */   {     (MR_String) "ne" },
  /* row 139 */   {     (MR_String) "!=(uint)" },
  /* row 140 */   {     (MR_String) "!=(int8)" },
  /* row 141 */   {     (MR_String) "!=(uint8)" },
  /* row 142 */   {     (MR_String) "!=(int16)" },
  /* row 143 */   {     (MR_String) "!=(uint16)" },
  /* row 144 */   {     (MR_String) "!=(int32)" },
  /* row 145 */   {     (MR_String) "!=(uint32)" },
  /* row 146 */   {     (MR_String) "!=(int64)" },
  /* row 147 */   {     (MR_String) "!=(uint64)" },
  /* row 148 */   {     (MR_String) "<<" },
  /* row 149 */   {     (MR_String) "<<(uint)" },
  /* row 150 */   {     (MR_String) "<<(int8)" },
  /* row 151 */   {     (MR_String) "<<(uint8)" },
  /* row 152 */   {     (MR_String) "<<(int16)" },
  /* row 153 */   {     (MR_String) "<<(uint16)" },
  /* row 154 */   {     (MR_String) "<<(int32)" },
  /* row 155 */   {     (MR_String) "<<(uint32)" },
  /* row 156 */   {     (MR_String) "<<(int64)" },
  /* row 157 */   {     (MR_String) "<<(uint64)" },
  /* row 158 */   {     (MR_String) ">>" },
  /* row 159 */   {     (MR_String) ">>(uint)" },
  /* row 160 */   {     (MR_String) ">>(int8)" },
  /* row 161 */   {     (MR_String) ">>(uint8)" },
  /* row 162 */   {     (MR_String) ">>(int16)" },
  /* row 163 */   {     (MR_String) ">>(uint16)" },
  /* row 164 */   {     (MR_String) ">>(int32)" },
  /* row 165 */   {     (MR_String) ">>(uint32)" },
  /* row 166 */   {     (MR_String) ">>(int64)" },
  /* row 167 */   {     (MR_String) ">>(uint64)" },
  /* row 168 */   {     (MR_String) "bitwise_complement(int)" },
  /* row 169 */   {     (MR_String) "bitwise_complement(uint)" },
  /* row 170 */   {     (MR_String) "bitwise_complement(int8)" },
  /* row 171 */   {     (MR_String) "bitwise_complement(uint8)" },
  /* row 172 */   {     (MR_String) "bitwise_complement(int16)" },
  /* row 173 */   {     (MR_String) "bitwise_complement(uint16)" },
  /* row 174 */   {     (MR_String) "bitwise_complement(int32)" },
  /* row 175 */   {     (MR_String) "bitwise_complement(uint32)" },
  /* row 176 */   {     (MR_String) "bitwise_complement(int64)" },
  /* row 177 */   {     (MR_String) "bitwise_complement(uint64)" },
};


#include "array.mh"
#include "bitmap.mh"
#include "io.mh"
#include "string.mh"
#include "time.mh"



static const MR_FA_PseudoTypeInfo_Struct1 bytecode_backend__bytecode__list__pti_list_1__plain_bytecode_backend__bytecode__type_ctor_info_byte_cons_id_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  {
    (MR_PseudoTypeInfo) (&bytecode_backend__bytecode__bytecode_backend__bytecode__type_ctor_info_byte_cons_id_0)
  }
};

static const MR_PseudoTypeInfo bytecode_backend__bytecode__bytecode_backend__bytecode__field_types_byte_arg_0_0[1] = {
  (MR_PseudoTypeInfo) (&mercury__builtin__builtin__type_ctor_info_int_0)
};

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

static const MR_PseudoTypeInfo bytecode_backend__bytecode__bytecode_backend__bytecode__field_types_byte_arg_0_1[1] = {
  (MR_PseudoTypeInfo) (&mercury__builtin__builtin__type_ctor_info_int_0)
};

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

static const MR_PseudoTypeInfo bytecode_backend__bytecode__bytecode_backend__bytecode__field_types_byte_arg_0_2[1] = {
  (MR_PseudoTypeInfo) (&mercury__builtin__builtin__type_ctor_info_float_0)
};

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

static const MR_PseudoTypeInfo bytecode_backend__bytecode__bytecode_backend__bytecode__field_types_byte_arg_0_3[1] = {
  (MR_PseudoTypeInfo) (&mercury__builtin__builtin__type_ctor_info_uint_0)
};

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

static const MR_PseudoTypeInfo bytecode_backend__bytecode__bytecode_backend__bytecode__field_types_byte_arg_0_4[1] = {
  (MR_PseudoTypeInfo) (&mercury__builtin__builtin__type_ctor_info_int8_0)
};

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

static const MR_PseudoTypeInfo bytecode_backend__bytecode__bytecode_backend__bytecode__field_types_byte_arg_0_5[1] = {
  (MR_PseudoTypeInfo) (&mercury__builtin__builtin__type_ctor_info_uint8_0)
};

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

static const MR_PseudoTypeInfo bytecode_backend__bytecode__bytecode_backend__bytecode__field_types_byte_arg_0_6[1] = {
  (MR_PseudoTypeInfo) (&mercury__builtin__builtin__type_ctor_info_int16_0)
};

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

static const MR_PseudoTypeInfo bytecode_backend__bytecode__bytecode_backend__bytecode__field_types_byte_arg_0_7[1] = {
  (MR_PseudoTypeInfo) (&mercury__builtin__builtin__type_ctor_info_uint16_0)
};

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

static const MR_PseudoTypeInfo bytecode_backend__bytecode__bytecode_backend__bytecode__field_types_byte_arg_0_8[1] = {
  (MR_PseudoTypeInfo) (&mercury__builtin__builtin__type_ctor_info_int32_0)
};

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

static const MR_PseudoTypeInfo bytecode_backend__bytecode__bytecode_backend__bytecode__field_types_byte_arg_0_9[1] = {
  (MR_PseudoTypeInfo) (&mercury__builtin__builtin__type_ctor_info_uint32_0)
};

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

static const MR_PseudoTypeInfo bytecode_backend__bytecode__bytecode_backend__bytecode__field_types_byte_arg_0_10[1] = {
  (MR_PseudoTypeInfo) (&mercury__builtin__builtin__type_ctor_info_int64_0)
};

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

static const MR_PseudoTypeInfo bytecode_backend__bytecode__bytecode_backend__bytecode__field_types_byte_arg_0_11[1] = {
  (MR_PseudoTypeInfo) (&mercury__builtin__builtin__type_ctor_info_uint64_0)
};

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

static const MR_DuFunctorDescPtr bytecode_backend__bytecode__bytecode_backend__bytecode__du_stag_ordered_byte_arg_0_0[1] = {
  &bytecode_backend__bytecode__bytecode_backend__bytecode__du_functor_desc_byte_arg_0_0
};

static const MR_DuFunctorDescPtr bytecode_backend__bytecode__bytecode_backend__bytecode__du_stag_ordered_byte_arg_0_1[1] = {
  &bytecode_backend__bytecode__bytecode_backend__bytecode__du_functor_desc_byte_arg_0_1
};

static const MR_DuFunctorDescPtr bytecode_backend__bytecode__bytecode_backend__bytecode__du_stag_ordered_byte_arg_0_2[1] = {
  &bytecode_backend__bytecode__bytecode_backend__bytecode__du_functor_desc_byte_arg_0_2
};

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
    INT8_C(-1)
  },
  {
    UINT32_C(1),
    MR_SECTAG_NONE,
    bytecode_backend__bytecode__bytecode_backend__bytecode__du_stag_ordered_byte_arg_0_1,
    INT8_C(-1)
  },
  {
    UINT32_C(1),
    MR_SECTAG_NONE,
    bytecode_backend__bytecode__bytecode_backend__bytecode__du_stag_ordered_byte_arg_0_2,
    INT8_C(-1)
  },
  {
    UINT32_C(9),
    MR_SECTAG_REMOTE_FULL_WORD,
    bytecode_backend__bytecode__bytecode_backend__bytecode__du_stag_ordered_byte_arg_0_3,
    INT8_C(-1)
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
  UINT8_C(17),
  INT8_C(4),
  MR_TYPECTOR_REP_DU,
  ((MR_Box) (bytecode_backend__bytecode____Unify____byte_arg_0_0_10001)),
  ((MR_Box) (bytecode_backend__bytecode____Compare____byte_arg_0_0_10001)),
  (MR_String) "bytecode_backend.bytecode",
  (MR_String) "byte_arg",
  {     bytecode_backend__bytecode__bytecode_backend__bytecode__du_name_ordered_byte_arg_0 },
  {     bytecode_backend__bytecode__bytecode_backend__bytecode__du_ptag_ordered_byte_arg_0 },
  (MR_Integer) 12,
  UINT16_C(4),
  bytecode_backend__bytecode__bytecode_backend__bytecode__functor_number_map_byte_arg_0
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
  {
    (MR_TypeInfo) (&bytecode_backend__bytecode__bytecode_backend__bytecode__type_ctor_info_byte_var_info_0)
  }
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

static const MR_PseudoTypeInfo bytecode_backend__bytecode__bytecode_backend__bytecode__field_types_byte_code_0_4[1] = {
  (MR_PseudoTypeInfo) (&mercury__builtin__builtin__type_ctor_info_int_0)
};

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

static const MR_PseudoTypeInfo bytecode_backend__bytecode__bytecode_backend__bytecode__field_types_byte_code_0_5[1] = {
  (MR_PseudoTypeInfo) (&mercury__builtin__builtin__type_ctor_info_int_0)
};

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

static const MR_PseudoTypeInfo bytecode_backend__bytecode__bytecode_backend__bytecode__field_types_byte_code_0_7[1] = {
  (MR_PseudoTypeInfo) (&mercury__builtin__builtin__type_ctor_info_int_0)
};

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

static const MR_PseudoTypeInfo bytecode_backend__bytecode__bytecode_backend__bytecode__field_types_byte_code_0_8[1] = {
  (MR_PseudoTypeInfo) (&mercury__builtin__builtin__type_ctor_info_int_0)
};

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
  {
    (MR_TypeInfo) (&bytecode_backend__bytecode__bytecode_backend__bytecode__type_ctor_info_byte_cons_id_0)
  }
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

static const MR_PseudoTypeInfo bytecode_backend__bytecode__bytecode_backend__bytecode__field_types_byte_code_0_12[1] = {
  (MR_PseudoTypeInfo) (&mercury__builtin__builtin__type_ctor_info_int_0)
};

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

static const MR_PseudoTypeInfo bytecode_backend__bytecode__bytecode_backend__bytecode__field_types_byte_code_0_14[1] = {
  (MR_PseudoTypeInfo) (&mercury__builtin__builtin__type_ctor_info_int_0)
};

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

static const MR_PseudoTypeInfo bytecode_backend__bytecode__bytecode_backend__bytecode__field_types_byte_code_0_15[1] = {
  (MR_PseudoTypeInfo) (&mercury__builtin__builtin__type_ctor_info_int_0)
};

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

static const MR_PseudoTypeInfo bytecode_backend__bytecode__bytecode_backend__bytecode__field_types_byte_code_0_16[1] = {
  (MR_PseudoTypeInfo) (&mercury__builtin__builtin__type_ctor_info_int_0)
};

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

static const MR_PseudoTypeInfo bytecode_backend__bytecode__bytecode_backend__bytecode__field_types_byte_code_0_19[1] = {
  (MR_PseudoTypeInfo) (&mercury__builtin__builtin__type_ctor_info_int_0)
};

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

static const MR_PseudoTypeInfo bytecode_backend__bytecode__bytecode_backend__bytecode__field_types_byte_code_0_21[1] = {
  (MR_PseudoTypeInfo) (&mercury__builtin__builtin__type_ctor_info_int_0)
};

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

static const MR_PseudoTypeInfo bytecode_backend__bytecode__bytecode_backend__bytecode__field_types_byte_code_0_22[1] = {
  (MR_PseudoTypeInfo) (&mercury__builtin__builtin__type_ctor_info_int_0)
};

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
  {
    (MR_TypeInfo) (&mercury__builtin__builtin__type_ctor_info_int_0)
  }
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
  {
    (MR_TypeInfo) (&bytecode_backend__bytecode__pair__ti_pair_2builtin__type_ctor_info_int_0bytecode_backend__bytecode__type_ctor_info_byte_dir_0)
  }
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

static const MR_PseudoTypeInfo bytecode_backend__bytecode__bytecode_backend__bytecode__field_types_byte_code_0_40[1] = {
  (MR_PseudoTypeInfo) (&mercury__builtin__builtin__type_ctor_info_int_0)
};

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

static const MR_DuFunctorDescPtr bytecode_backend__bytecode__bytecode_backend__bytecode__du_stag_ordered_byte_code_0_1[1] = {
  &bytecode_backend__bytecode__bytecode_backend__bytecode__du_functor_desc_byte_code_0_0
};

static const MR_DuFunctorDescPtr bytecode_backend__bytecode__bytecode_backend__bytecode__du_stag_ordered_byte_code_0_2[1] = {
  &bytecode_backend__bytecode__bytecode_backend__bytecode__du_functor_desc_byte_code_0_2
};

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
    INT8_C(-1)
  },
  {
    UINT32_C(1),
    MR_SECTAG_NONE,
    bytecode_backend__bytecode__bytecode_backend__bytecode__du_stag_ordered_byte_code_0_1,
    INT8_C(-1)
  },
  {
    UINT32_C(1),
    MR_SECTAG_NONE,
    bytecode_backend__bytecode__bytecode_backend__bytecode__du_stag_ordered_byte_code_0_2,
    INT8_C(-1)
  },
  {
    UINT32_C(30),
    MR_SECTAG_REMOTE_FULL_WORD,
    bytecode_backend__bytecode__bytecode_backend__bytecode__du_stag_ordered_byte_code_0_3,
    INT8_C(-1)
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
  UINT8_C(17),
  INT8_C(4),
  MR_TYPECTOR_REP_DU,
  ((MR_Box) (bytecode_backend__bytecode____Unify____byte_code_0_0_10001)),
  ((MR_Box) (bytecode_backend__bytecode____Compare____byte_code_0_0_10001)),
  (MR_String) "bytecode_backend.bytecode",
  (MR_String) "byte_code",
  {     bytecode_backend__bytecode__bytecode_backend__bytecode__du_name_ordered_byte_code_0 },
  {     bytecode_backend__bytecode__bytecode_backend__bytecode__du_ptag_ordered_byte_code_0 },
  (MR_Integer) 42,
  UINT16_C(4),
  bytecode_backend__bytecode__bytecode_backend__bytecode__functor_number_map_byte_code_0
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

static const MR_PseudoTypeInfo bytecode_backend__bytecode__bytecode_backend__bytecode__field_types_byte_cons_id_0_1[1] = {
  (MR_PseudoTypeInfo) (&mercury__builtin__builtin__type_ctor_info_int_0)
};

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

static const MR_PseudoTypeInfo bytecode_backend__bytecode__bytecode_backend__bytecode__field_types_byte_cons_id_0_2[1] = {
  (MR_PseudoTypeInfo) (&mercury__builtin__builtin__type_ctor_info_string_0)
};

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

static const MR_PseudoTypeInfo bytecode_backend__bytecode__bytecode_backend__bytecode__field_types_byte_cons_id_0_3[1] = {
  (MR_PseudoTypeInfo) (&mercury__builtin__builtin__type_ctor_info_float_0)
};

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

static const MR_PseudoTypeInfo bytecode_backend__bytecode__bytecode_backend__bytecode__field_types_byte_cons_id_0_4[1] = {
  (MR_PseudoTypeInfo) (&mercury__builtin__builtin__type_ctor_info_character_0)
};

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

static const MR_DuFunctorDescPtr bytecode_backend__bytecode__bytecode_backend__bytecode__du_stag_ordered_byte_cons_id_0_1[1] = {
  &bytecode_backend__bytecode__bytecode_backend__bytecode__du_functor_desc_byte_cons_id_0_0
};

static const MR_DuFunctorDescPtr bytecode_backend__bytecode__bytecode_backend__bytecode__du_stag_ordered_byte_cons_id_0_2[1] = {
  &bytecode_backend__bytecode__bytecode_backend__bytecode__du_functor_desc_byte_cons_id_0_1
};

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
    INT8_C(-1)
  },
  {
    UINT32_C(1),
    MR_SECTAG_NONE,
    bytecode_backend__bytecode__bytecode_backend__bytecode__du_stag_ordered_byte_cons_id_0_1,
    INT8_C(-1)
  },
  {
    UINT32_C(1),
    MR_SECTAG_NONE,
    bytecode_backend__bytecode__bytecode_backend__bytecode__du_stag_ordered_byte_cons_id_0_2,
    INT8_C(-1)
  },
  {
    UINT32_C(6),
    MR_SECTAG_REMOTE_FULL_WORD,
    bytecode_backend__bytecode__bytecode_backend__bytecode__du_stag_ordered_byte_cons_id_0_3,
    INT8_C(-1)
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
  UINT8_C(17),
  INT8_C(4),
  MR_TYPECTOR_REP_DU,
  ((MR_Box) (bytecode_backend__bytecode____Unify____byte_cons_id_0_0_10001)),
  ((MR_Box) (bytecode_backend__bytecode____Compare____byte_cons_id_0_0_10001)),
  (MR_String) "bytecode_backend.bytecode",
  (MR_String) "byte_cons_id",
  {     bytecode_backend__bytecode__bytecode_backend__bytecode__du_name_ordered_byte_cons_id_0 },
  {     bytecode_backend__bytecode__bytecode_backend__bytecode__du_ptag_ordered_byte_cons_id_0 },
  (MR_Integer) 10,
  UINT16_C(4),
  bytecode_backend__bytecode__bytecode_backend__bytecode__functor_number_map_byte_cons_id_0
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

static const MR_PseudoTypeInfo bytecode_backend__bytecode__bytecode_backend__bytecode__field_types_byte_cons_tag_0_1[1] = {
  (MR_PseudoTypeInfo) (&mercury__builtin__builtin__type_ctor_info_int_0)
};

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

static const MR_PseudoTypeInfo bytecode_backend__bytecode__bytecode_backend__bytecode__field_types_byte_cons_tag_0_4[1] = {
  (MR_PseudoTypeInfo) (&mercury__builtin__builtin__type_ctor_info_int_0)
};

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

static const MR_DuFunctorDescPtr bytecode_backend__bytecode__bytecode_backend__bytecode__du_stag_ordered_byte_cons_tag_0_0[1] = {
  &bytecode_backend__bytecode__bytecode_backend__bytecode__du_functor_desc_byte_cons_tag_0_0
};

static const MR_DuFunctorDescPtr bytecode_backend__bytecode__bytecode_backend__bytecode__du_stag_ordered_byte_cons_tag_0_1[1] = {
  &bytecode_backend__bytecode__bytecode_backend__bytecode__du_functor_desc_byte_cons_tag_0_1
};

static const MR_DuFunctorDescPtr bytecode_backend__bytecode__bytecode_backend__bytecode__du_stag_ordered_byte_cons_tag_0_2[1] = {
  &bytecode_backend__bytecode__bytecode_backend__bytecode__du_functor_desc_byte_cons_tag_0_2
};

static const MR_DuFunctorDescPtr bytecode_backend__bytecode__bytecode_backend__bytecode__du_stag_ordered_byte_cons_tag_0_3[2] = {
  &bytecode_backend__bytecode__bytecode_backend__bytecode__du_functor_desc_byte_cons_tag_0_3,
  &bytecode_backend__bytecode__bytecode_backend__bytecode__du_functor_desc_byte_cons_tag_0_4
};

static const MR_DuPtagLayout bytecode_backend__bytecode__bytecode_backend__bytecode__du_ptag_ordered_byte_cons_tag_0[4] = {
  {
    UINT32_C(1),
    MR_SECTAG_LOCAL_REST_OF_WORD,
    bytecode_backend__bytecode__bytecode_backend__bytecode__du_stag_ordered_byte_cons_tag_0_0,
    INT8_C(-1)
  },
  {
    UINT32_C(1),
    MR_SECTAG_NONE,
    bytecode_backend__bytecode__bytecode_backend__bytecode__du_stag_ordered_byte_cons_tag_0_1,
    INT8_C(-1)
  },
  {
    UINT32_C(1),
    MR_SECTAG_NONE,
    bytecode_backend__bytecode__bytecode_backend__bytecode__du_stag_ordered_byte_cons_tag_0_2,
    INT8_C(-1)
  },
  {
    UINT32_C(2),
    MR_SECTAG_REMOTE_FULL_WORD,
    bytecode_backend__bytecode__bytecode_backend__bytecode__du_stag_ordered_byte_cons_tag_0_3,
    INT8_C(-1)
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
  UINT8_C(17),
  INT8_C(4),
  MR_TYPECTOR_REP_DU,
  ((MR_Box) (bytecode_backend__bytecode____Unify____byte_cons_tag_0_0_10001)),
  ((MR_Box) (bytecode_backend__bytecode____Compare____byte_cons_tag_0_0_10001)),
  (MR_String) "bytecode_backend.bytecode",
  (MR_String) "byte_cons_tag",
  {     bytecode_backend__bytecode__bytecode_backend__bytecode__du_name_ordered_byte_cons_tag_0 },
  {     bytecode_backend__bytecode__bytecode_backend__bytecode__du_ptag_ordered_byte_cons_tag_0 },
  (MR_Integer) 5,
  UINT16_C(4),
  bytecode_backend__bytecode__bytecode_backend__bytecode__functor_number_map_byte_cons_tag_0
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

static const MR_EnumFunctorDescPtr bytecode_backend__bytecode__bytecode_backend__bytecode__enum_value_ordered_byte_dir_0[3] = {
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
  UINT8_C(17),
  INT8_C(-1),
  MR_TYPECTOR_REP_ENUM,
  ((MR_Box) (bytecode_backend__bytecode____Unify____byte_dir_0_0_10001)),
  ((MR_Box) (bytecode_backend__bytecode____Compare____byte_dir_0_0_10001)),
  (MR_String) "bytecode_backend.bytecode",
  (MR_String) "byte_dir",
  {     bytecode_backend__bytecode__bytecode_backend__bytecode__enum_name_ordered_byte_dir_0 },
  {     bytecode_backend__bytecode__bytecode_backend__bytecode__enum_value_ordered_byte_dir_0 },
  (MR_Integer) 3,
  UINT16_C(4),
  bytecode_backend__bytecode__bytecode_backend__bytecode__functor_number_map_byte_dir_0
};

const MR_TypeCtorInfo_Struct bytecode_backend__bytecode__bytecode_backend__bytecode__type_ctor_info_byte_is_func_0 = {
  (MR_Integer) 0,
  UINT8_C(17),
  INT8_C(-1),
  MR_TYPECTOR_REP_EQUIV_GROUND,
  ((MR_Box) (bytecode_backend__bytecode____Unify____byte_is_func_0_0_10001)),
  ((MR_Box) (bytecode_backend__bytecode____Compare____byte_is_func_0_0_10001)),
  (MR_String) "bytecode_backend.bytecode",
  (MR_String) "byte_is_func",
  {     NULL },
  {     (MR_PseudoTypeInfo) (&mercury__builtin__builtin__type_ctor_info_int_0) },
  (MR_Integer) -1,
  UINT16_C(0),
  NULL
};

const MR_TypeCtorInfo_Struct bytecode_backend__bytecode__bytecode_backend__bytecode__type_ctor_info_byte_label_id_0 = {
  (MR_Integer) 0,
  UINT8_C(17),
  INT8_C(-1),
  MR_TYPECTOR_REP_EQUIV_GROUND,
  ((MR_Box) (bytecode_backend__bytecode____Unify____byte_label_id_0_0_10001)),
  ((MR_Box) (bytecode_backend__bytecode____Compare____byte_label_id_0_0_10001)),
  (MR_String) "bytecode_backend.bytecode",
  (MR_String) "byte_label_id",
  {     NULL },
  {     (MR_PseudoTypeInfo) (&mercury__builtin__builtin__type_ctor_info_int_0) },
  (MR_Integer) -1,
  UINT16_C(0),
  NULL
};

const MR_TypeCtorInfo_Struct bytecode_backend__bytecode__bytecode_backend__bytecode__type_ctor_info_byte_module_id_0 = {
  (MR_Integer) 0,
  UINT8_C(17),
  INT8_C(-1),
  MR_TYPECTOR_REP_EQUIV_GROUND,
  ((MR_Box) (bytecode_backend__bytecode____Unify____byte_module_id_0_0_10001)),
  ((MR_Box) (bytecode_backend__bytecode____Compare____byte_module_id_0_0_10001)),
  (MR_String) "bytecode_backend.bytecode",
  (MR_String) "byte_module_id",
  {     NULL },
  {     (MR_PseudoTypeInfo) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0) },
  (MR_Integer) -1,
  UINT16_C(0),
  NULL
};

const MR_TypeCtorInfo_Struct bytecode_backend__bytecode__bytecode_backend__bytecode__type_ctor_info_byte_pred_id_0 = {
  (MR_Integer) 0,
  UINT8_C(17),
  INT8_C(-1),
  MR_TYPECTOR_REP_EQUIV_GROUND,
  ((MR_Box) (bytecode_backend__bytecode____Unify____byte_pred_id_0_0_10001)),
  ((MR_Box) (bytecode_backend__bytecode____Compare____byte_pred_id_0_0_10001)),
  (MR_String) "bytecode_backend.bytecode",
  (MR_String) "byte_pred_id",
  {     NULL },
  {     (MR_PseudoTypeInfo) (&mercury__builtin__builtin__type_ctor_info_string_0) },
  (MR_Integer) -1,
  UINT16_C(0),
  NULL
};

const MR_TypeCtorInfo_Struct bytecode_backend__bytecode__bytecode_backend__bytecode__type_ctor_info_byte_proc_id_0 = {
  (MR_Integer) 0,
  UINT8_C(17),
  INT8_C(-1),
  MR_TYPECTOR_REP_EQUIV_GROUND,
  ((MR_Box) (bytecode_backend__bytecode____Unify____byte_proc_id_0_0_10001)),
  ((MR_Box) (bytecode_backend__bytecode____Compare____byte_proc_id_0_0_10001)),
  (MR_String) "bytecode_backend.bytecode",
  (MR_String) "byte_proc_id",
  {     NULL },
  {     (MR_PseudoTypeInfo) (&mercury__builtin__builtin__type_ctor_info_int_0) },
  (MR_Integer) -1,
  UINT16_C(0),
  NULL
};

static const MR_EnumFunctorDesc bytecode_backend__bytecode__bytecode_backend__bytecode__enum_functor_desc_byte_reg_type_0_0 = {
  (MR_String) "byte_reg_r",
  INT32_C(0)
};

static const MR_EnumFunctorDescPtr bytecode_backend__bytecode__bytecode_backend__bytecode__enum_value_ordered_byte_reg_type_0[1] = {
  &bytecode_backend__bytecode__bytecode_backend__bytecode__enum_functor_desc_byte_reg_type_0_0
};

static const MR_EnumFunctorDescPtr bytecode_backend__bytecode__bytecode_backend__bytecode__enum_name_ordered_byte_reg_type_0[1] = {
  &bytecode_backend__bytecode__bytecode_backend__bytecode__enum_functor_desc_byte_reg_type_0_0
};

static const MR_Integer bytecode_backend__bytecode__bytecode_backend__bytecode__functor_number_map_byte_reg_type_0[1] = {
  (MR_Integer) 0
};

const MR_TypeCtorInfo_Struct bytecode_backend__bytecode__bytecode_backend__bytecode__type_ctor_info_byte_reg_type_0 = {
  (MR_Integer) 0,
  UINT8_C(17),
  INT8_C(-1),
  MR_TYPECTOR_REP_DUMMY,
  ((MR_Box) (bytecode_backend__bytecode____Unify____byte_reg_type_0_0_10001)),
  ((MR_Box) (bytecode_backend__bytecode____Compare____byte_reg_type_0_0_10001)),
  (MR_String) "bytecode_backend.bytecode",
  (MR_String) "byte_reg_type",
  {     bytecode_backend__bytecode__bytecode_backend__bytecode__enum_name_ordered_byte_reg_type_0 },
  {     bytecode_backend__bytecode__bytecode_backend__bytecode__enum_value_ordered_byte_reg_type_0 },
  (MR_Integer) 1,
  UINT16_C(4),
  bytecode_backend__bytecode__bytecode_backend__bytecode__functor_number_map_byte_reg_type_0
};

const MR_TypeCtorInfo_Struct bytecode_backend__bytecode__bytecode_backend__bytecode__type_ctor_info_byte_temp_0 = {
  (MR_Integer) 0,
  UINT8_C(17),
  INT8_C(-1),
  MR_TYPECTOR_REP_EQUIV_GROUND,
  ((MR_Box) (bytecode_backend__bytecode____Unify____byte_temp_0_0_10001)),
  ((MR_Box) (bytecode_backend__bytecode____Compare____byte_temp_0_0_10001)),
  (MR_String) "bytecode_backend.bytecode",
  (MR_String) "byte_temp",
  {     NULL },
  {     (MR_PseudoTypeInfo) (&mercury__builtin__builtin__type_ctor_info_int_0) },
  (MR_Integer) -1,
  UINT16_C(0),
  NULL
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

static const MR_EnumFunctorDescPtr bytecode_backend__bytecode__bytecode_backend__bytecode__enum_value_ordered_byte_test_id_0[6] = {
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
  UINT8_C(17),
  INT8_C(-1),
  MR_TYPECTOR_REP_ENUM,
  ((MR_Box) (bytecode_backend__bytecode____Unify____byte_test_id_0_0_10001)),
  ((MR_Box) (bytecode_backend__bytecode____Compare____byte_test_id_0_0_10001)),
  (MR_String) "bytecode_backend.bytecode",
  (MR_String) "byte_test_id",
  {     bytecode_backend__bytecode__bytecode_backend__bytecode__enum_name_ordered_byte_test_id_0 },
  {     bytecode_backend__bytecode__bytecode_backend__bytecode__enum_value_ordered_byte_test_id_0 },
  (MR_Integer) 6,
  UINT16_C(4),
  bytecode_backend__bytecode__bytecode_backend__bytecode__functor_number_map_byte_test_id_0
};

static const MR_FA_TypeInfo_Struct1 bytecode_backend__bytecode__cord__ti_cord_1bytecode_backend__bytecode__type_ctor_info_byte_code_0 = {
  &mercury__cord__cord__type_ctor_info_cord_1,
  {
    (MR_TypeInfo) (&bytecode_backend__bytecode__bytecode_backend__bytecode__type_ctor_info_byte_code_0)
  }
};

const MR_TypeCtorInfo_Struct bytecode_backend__bytecode__bytecode_backend__bytecode__type_ctor_info_byte_tree_0 = {
  (MR_Integer) 0,
  UINT8_C(17),
  INT8_C(-1),
  MR_TYPECTOR_REP_EQUIV_GROUND,
  ((MR_Box) (bytecode_backend__bytecode____Unify____byte_tree_0_0_10001)),
  ((MR_Box) (bytecode_backend__bytecode____Compare____byte_tree_0_0_10001)),
  (MR_String) "bytecode_backend.bytecode",
  (MR_String) "byte_tree",
  {     NULL },
  {     (MR_PseudoTypeInfo) (&bytecode_backend__bytecode__cord__ti_cord_1bytecode_backend__bytecode__type_ctor_info_byte_code_0) },
  (MR_Integer) -1,
  UINT16_C(0),
  NULL
};

const MR_TypeCtorInfo_Struct bytecode_backend__bytecode__bytecode_backend__bytecode__type_ctor_info_byte_var_0 = {
  (MR_Integer) 0,
  UINT8_C(17),
  INT8_C(-1),
  MR_TYPECTOR_REP_EQUIV_GROUND,
  ((MR_Box) (bytecode_backend__bytecode____Unify____byte_var_0_0_10001)),
  ((MR_Box) (bytecode_backend__bytecode____Compare____byte_var_0_0_10001)),
  (MR_String) "bytecode_backend.bytecode",
  (MR_String) "byte_var",
  {     NULL },
  {     (MR_PseudoTypeInfo) (&mercury__builtin__builtin__type_ctor_info_int_0) },
  (MR_Integer) -1,
  UINT16_C(0),
  NULL
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

static const MR_DuFunctorDescPtr bytecode_backend__bytecode__bytecode_backend__bytecode__du_stag_ordered_byte_var_info_0_0[1] = {
  &bytecode_backend__bytecode__bytecode_backend__bytecode__du_functor_desc_byte_var_info_0_0
};

static const MR_DuPtagLayout bytecode_backend__bytecode__bytecode_backend__bytecode__du_ptag_ordered_byte_var_info_0[1] = {
  {
    UINT32_C(1),
    MR_SECTAG_NONE,
    bytecode_backend__bytecode__bytecode_backend__bytecode__du_stag_ordered_byte_var_info_0_0,
    INT8_C(-1)
  }
};

static const MR_DuFunctorDescPtr bytecode_backend__bytecode__bytecode_backend__bytecode__du_name_ordered_byte_var_info_0[1] = {
  &bytecode_backend__bytecode__bytecode_backend__bytecode__du_functor_desc_byte_var_info_0_0
};

static const MR_Integer bytecode_backend__bytecode__bytecode_backend__bytecode__functor_number_map_byte_var_info_0[1] = {
  (MR_Integer) 0
};

const MR_TypeCtorInfo_Struct bytecode_backend__bytecode__bytecode_backend__bytecode__type_ctor_info_byte_var_info_0 = {
  (MR_Integer) 0,
  UINT8_C(17),
  INT8_C(1),
  MR_TYPECTOR_REP_DU,
  ((MR_Box) (bytecode_backend__bytecode____Unify____byte_var_info_0_0_10001)),
  ((MR_Box) (bytecode_backend__bytecode____Compare____byte_var_info_0_0_10001)),
  (MR_String) "bytecode_backend.bytecode",
  (MR_String) "byte_var_info",
  {     bytecode_backend__bytecode__bytecode_backend__bytecode__du_name_ordered_byte_var_info_0 },
  {     bytecode_backend__bytecode__bytecode_backend__bytecode__du_ptag_ordered_byte_var_info_0 },
  (MR_Integer) 1,
  UINT16_C(4),
  bytecode_backend__bytecode__bytecode_backend__bytecode__functor_number_map_byte_var_info_0
};

static MR_bool MR_CALL 
bytecode_backend__bytecode__IntroducedFrom__pred__output_args__275__1_2_p_0(
  MR_Word OtherConsIds_72,
  MR_Word HeadVar__2_81)
{
  {
    MR_bool succeeded;

    succeeded = mercury__builtin__unify_2_p_0((MR_Word) (&bytecode_backend__bytecode_scalar_common_1[0]), ((MR_Box) (OtherConsIds_72)), ((MR_Box) (HeadVar__2_81)));
    return succeeded;
  }
}

void MR_CALL 
bytecode_backend__bytecode____Compare____byte_var_info_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3)
{
  {
    MR_bool succeeded;
    MR_Integer CastX_9 = (MR_Integer) (HeadVar__2_2);
    MR_Integer CastY_10 = (MR_Integer) (HeadVar__3_3);

    succeeded = (CastX_9 == CastY_10);
    if (succeeded)
      *HeadVar__1_1 = (MR_Integer) 0;
    else
    {
      MR_String ArgX1_4 = ((MR_String) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 0))));
      MR_String ArgY1_5 = ((MR_String) ((MR_hl_field(MR_mktag(0), HeadVar__3_3, (MR_Integer) 0))));
      MR_Word ArgX2_7 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 1))));
      MR_Word ArgY2_8 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__3_3, (MR_Integer) 1))));
      MR_Word SubResult1_6;

      mercury__private_builtin__builtin_compare_string_3_p_0(&SubResult1_6, ArgX1_4, ArgY1_5);
      succeeded = (SubResult1_6 != (MR_Integer) 0);
      if (succeeded)
        *HeadVar__1_1 = SubResult1_6;
      else
        parse_tree__prog_data____Compare____mer_type_0_0(HeadVar__1_1, ArgX2_7, ArgY2_8);
    }
  }
}

MR_bool MR_CALL 
bytecode_backend__bytecode____Unify____byte_var_info_0_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2)
{
  {
    MR_bool succeeded;
    MR_Integer CastX_7 = (MR_Integer) (HeadVar__1_1);
    MR_Integer CastY_8 = (MR_Integer) (HeadVar__2_2);

    succeeded = (CastX_7 == CastY_8);
    if (succeeded)
      succeeded = MR_TRUE;
    else
    {
      MR_String ArgX1_3 = ((MR_String) ((MR_hl_field(MR_mktag(0), HeadVar__1_1, (MR_Integer) 0))));
      MR_String ArgY1_4 = ((MR_String) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 0))));
      MR_Word ArgX2_5 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__1_1, (MR_Integer) 1))));
      MR_Word ArgY2_6 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 1))));

      succeeded = (strcmp(ArgX1_3, ArgY1_4) == 0);
      if (succeeded)
        succeeded = parse_tree__prog_data____Unify____mer_type_0_0(ArgX2_5, ArgY2_6);
    }
    return succeeded;
  }
}

void MR_CALL 
bytecode_backend__bytecode____Compare____byte_var_0_0(
  MR_Word * HeadVar__1_1,
  MR_Integer HeadVar__2_2,
  MR_Integer HeadVar__3_3)
{
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
}

MR_bool MR_CALL 
bytecode_backend__bytecode____Unify____byte_var_0_0(
  MR_Integer HeadVar__1_1,
  MR_Integer HeadVar__2_2)
{
  {
    MR_bool succeeded;
    MR_Integer Cast_HeadVar1_3 = HeadVar__1_1;
    MR_Integer Cast_HeadVar2_4 = HeadVar__2_2;

    succeeded = (Cast_HeadVar1_3 == Cast_HeadVar2_4);
    return succeeded;
  }
}

void MR_CALL 
bytecode_backend__bytecode____Compare____byte_tree_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3)
{
  {
    MR_Word Cast_HeadVar1_4 = HeadVar__2_2;
    MR_Word Cast_HeadVar2_5 = HeadVar__3_3;

    mercury__builtin__compare_3_p_0((MR_Word) (&bytecode_backend__bytecode_scalar_common_1[4]), HeadVar__1_1, ((MR_Box) (Cast_HeadVar1_4)), ((MR_Box) (Cast_HeadVar2_5)));
  }
}

MR_bool MR_CALL 
bytecode_backend__bytecode____Unify____byte_tree_0_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2)
{
  {
    MR_bool succeeded;
    MR_Word Cast_HeadVar1_3 = HeadVar__1_1;
    MR_Word Cast_HeadVar2_4 = HeadVar__2_2;

    succeeded = mercury__builtin__unify_2_p_0((MR_Word) (&bytecode_backend__bytecode_scalar_common_1[4]), ((MR_Box) (Cast_HeadVar1_3)), ((MR_Box) (Cast_HeadVar2_4)));
    return succeeded;
  }
}

void MR_CALL 
bytecode_backend__bytecode____Compare____byte_test_id_0_0(
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

MR_bool MR_CALL 
bytecode_backend__bytecode____Unify____byte_test_id_0_0(
  MR_Word HeadVar__2_1,
  MR_Word HeadVar__2_2)
{
  {
    MR_bool succeeded = (HeadVar__2_1 == HeadVar__2_2);

    return succeeded;
  }
}

void MR_CALL 
bytecode_backend__bytecode____Compare____byte_temp_0_0(
  MR_Word * HeadVar__1_1,
  MR_Integer HeadVar__2_2,
  MR_Integer HeadVar__3_3)
{
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
}

MR_bool MR_CALL 
bytecode_backend__bytecode____Unify____byte_temp_0_0(
  MR_Integer HeadVar__1_1,
  MR_Integer HeadVar__2_2)
{
  {
    MR_bool succeeded;
    MR_Integer Cast_HeadVar1_3 = HeadVar__1_1;
    MR_Integer Cast_HeadVar2_4 = HeadVar__2_2;

    succeeded = (Cast_HeadVar1_3 == Cast_HeadVar2_4);
    return succeeded;
  }
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
  {
    MR_bool succeeded;

    succeeded = bytecode_backend__bytecode__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_95_95_85_110_105_102_121_95_95_95_98_121_116_101_99_111_100_101_95_98_97_99_107_101_110_100_95_95_98_121_116_101_99_111_100_101_95_95_98_121_116_101_95_114_101_103_95_116_121_112_101_95_48_95_95_91_49_44_32_50_93_95_48_2_p_0();
    return succeeded;
  }
}

MR_bool MR_CALL 
bytecode_backend__bytecode__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_95_95_85_110_105_102_121_95_95_95_98_121_116_101_99_111_100_101_95_98_97_99_107_101_110_100_95_95_98_121_116_101_99_111_100_101_95_95_98_121_116_101_95_114_101_103_95_116_121_112_101_95_48_95_95_91_49_44_32_50_93_95_48_2_p_0(void)
{
  return MR_TRUE;
}

void MR_CALL 
bytecode_backend__bytecode____Compare____byte_proc_id_0_0(
  MR_Word * HeadVar__1_1,
  MR_Integer HeadVar__2_2,
  MR_Integer HeadVar__3_3)
{
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
}

MR_bool MR_CALL 
bytecode_backend__bytecode____Unify____byte_proc_id_0_0(
  MR_Integer HeadVar__1_1,
  MR_Integer HeadVar__2_2)
{
  {
    MR_bool succeeded;
    MR_Integer Cast_HeadVar1_3 = HeadVar__1_1;
    MR_Integer Cast_HeadVar2_4 = HeadVar__2_2;

    succeeded = (Cast_HeadVar1_3 == Cast_HeadVar2_4);
    return succeeded;
  }
}

void MR_CALL 
bytecode_backend__bytecode____Compare____byte_pred_id_0_0(
  MR_Word * HeadVar__1_1,
  MR_String HeadVar__2_2,
  MR_String HeadVar__3_3)
{
  {
    MR_String Cast_HeadVar1_4 = HeadVar__2_2;
    MR_String Cast_HeadVar2_5 = HeadVar__3_3;

    mercury__private_builtin__builtin_compare_string_3_p_0(HeadVar__1_1, Cast_HeadVar1_4, Cast_HeadVar2_5);
  }
}

MR_bool MR_CALL 
bytecode_backend__bytecode____Unify____byte_pred_id_0_0(
  MR_String HeadVar__1_1,
  MR_String HeadVar__2_2)
{
  {
    MR_bool succeeded;
    MR_String Cast_HeadVar1_3 = HeadVar__1_1;
    MR_String Cast_HeadVar2_4 = HeadVar__2_2;

    succeeded = (strcmp(Cast_HeadVar1_3, Cast_HeadVar2_4) == 0);
    return succeeded;
  }
}

void MR_CALL 
bytecode_backend__bytecode____Compare____byte_module_id_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3)
{
  {
    MR_Word Cast_HeadVar1_4 = HeadVar__2_2;
    MR_Word Cast_HeadVar2_5 = HeadVar__3_3;

    mdbcomp__sym_name____Compare____sym_name_0_0(HeadVar__1_1, Cast_HeadVar1_4, Cast_HeadVar2_5);
  }
}

MR_bool MR_CALL 
bytecode_backend__bytecode____Unify____byte_module_id_0_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2)
{
  {
    MR_bool succeeded;
    MR_Word Cast_HeadVar1_3 = HeadVar__1_1;
    MR_Word Cast_HeadVar2_4 = HeadVar__2_2;

    succeeded = mdbcomp__sym_name____Unify____sym_name_0_0(Cast_HeadVar1_3, Cast_HeadVar2_4);
    return succeeded;
  }
}

void MR_CALL 
bytecode_backend__bytecode____Compare____byte_label_id_0_0(
  MR_Word * HeadVar__1_1,
  MR_Integer HeadVar__2_2,
  MR_Integer HeadVar__3_3)
{
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
}

MR_bool MR_CALL 
bytecode_backend__bytecode____Unify____byte_label_id_0_0(
  MR_Integer HeadVar__1_1,
  MR_Integer HeadVar__2_2)
{
  {
    MR_bool succeeded;
    MR_Integer Cast_HeadVar1_3 = HeadVar__1_1;
    MR_Integer Cast_HeadVar2_4 = HeadVar__2_2;

    succeeded = (Cast_HeadVar1_3 == Cast_HeadVar2_4);
    return succeeded;
  }
}

void MR_CALL 
bytecode_backend__bytecode____Compare____byte_is_func_0_0(
  MR_Word * HeadVar__1_1,
  MR_Integer HeadVar__2_2,
  MR_Integer HeadVar__3_3)
{
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
}

MR_bool MR_CALL 
bytecode_backend__bytecode____Unify____byte_is_func_0_0(
  MR_Integer HeadVar__1_1,
  MR_Integer HeadVar__2_2)
{
  {
    MR_bool succeeded;
    MR_Integer Cast_HeadVar1_3 = HeadVar__1_1;
    MR_Integer Cast_HeadVar2_4 = HeadVar__2_2;

    succeeded = (Cast_HeadVar1_3 == Cast_HeadVar2_4);
    return succeeded;
  }
}

void MR_CALL 
bytecode_backend__bytecode____Compare____byte_dir_0_0(
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

MR_bool MR_CALL 
bytecode_backend__bytecode____Unify____byte_dir_0_0(
  MR_Word HeadVar__2_1,
  MR_Word HeadVar__2_2)
{
  {
    MR_bool succeeded = (HeadVar__2_1 == HeadVar__2_2);

    return succeeded;
  }
}

void MR_CALL 
bytecode_backend__bytecode____Compare____byte_code_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3)
{
  {
    MR_bool succeeded;
    MR_Integer CastX_201 = (MR_Integer) (HeadVar__2_2);
    MR_Integer CastY_202 = (MR_Integer) (HeadVar__3_3);

    succeeded = (CastX_201 == CastY_202);
    if (succeeded)
      *HeadVar__1_1 = (MR_Integer) 0;
    else
    {
      MR_Integer Var_4;
      MR_Integer Var_5;

      bytecode_backend__bytecode____Index____byte_code_0_0(HeadVar__2_2, &Var_4);
      bytecode_backend__bytecode____Index____byte_code_0_0(HeadVar__3_3, &Var_5);
      succeeded = (Var_4 < Var_5);
      if (succeeded)
        *HeadVar__1_1 = (MR_Integer) 1;
      else
      {
        succeeded = (Var_4 > Var_5);
        if (succeeded)
          *HeadVar__1_1 = (MR_Integer) 2;
        else
        {
          MR_Word Var_6;

          switch (MR_tag((MR_Word) HeadVar__2_2)) {
            default: /*NOTREACHED*/ MR_assert(0);
            case (MR_Integer) 0:
              switch (MR_unmkbody(HeadVar__2_2)) {
                default: /*NOTREACHED*/ MR_assert(0);
                case (MR_Integer) 0:
                  {
                    Var_6 = (MR_Integer) 0;
                    succeeded = MR_TRUE;
                  }
                  break;
                case (MR_Integer) 1:
                  {
                    Var_6 = (MR_Integer) 0;
                    succeeded = MR_TRUE;
                  }
                  break;
                case (MR_Integer) 2:
                  {
                    Var_6 = (MR_Integer) 0;
                    succeeded = MR_TRUE;
                  }
                  break;
                case (MR_Integer) 3:
                  {
                    Var_6 = (MR_Integer) 0;
                    succeeded = MR_TRUE;
                  }
                  break;
                case (MR_Integer) 4:
                  {
                    Var_6 = (MR_Integer) 0;
                    succeeded = MR_TRUE;
                  }
                  break;
                case (MR_Integer) 5:
                  {
                    Var_6 = (MR_Integer) 0;
                    succeeded = MR_TRUE;
                  }
                  break;
                case (MR_Integer) 6:
                  {
                    Var_6 = (MR_Integer) 0;
                    succeeded = MR_TRUE;
                  }
                  break;
                case (MR_Integer) 7:
                  {
                    Var_6 = (MR_Integer) 0;
                    succeeded = MR_TRUE;
                  }
                  break;
                case (MR_Integer) 8:
                  {
                    Var_6 = (MR_Integer) 0;
                    succeeded = MR_TRUE;
                  }
                  break;
                case (MR_Integer) 9:
                  {
                    Var_6 = (MR_Integer) 0;
                    succeeded = MR_TRUE;
                  }
                  break;
              }
              break;
            case (MR_Integer) 1:
              {
                MR_String ArgX1_7 = ((MR_String) ((MR_hl_field(MR_mktag(1), HeadVar__2_2, (MR_Integer) 0))));
                MR_String ArgY1_8;
                MR_Integer ArgX2_10 = ((MR_Integer) ((MR_hl_field(MR_mktag(1), HeadVar__2_2, (MR_Integer) 1))));
                MR_Integer ArgY2_11;
                MR_Integer ArgX3_13 = ((MR_Integer) ((MR_hl_field(MR_mktag(1), HeadVar__2_2, (MR_Integer) 2))));
                MR_Integer ArgY3_14;
                MR_Integer ArgX4_16 = ((MR_Integer) ((MR_hl_field(MR_mktag(1), HeadVar__2_2, (MR_Integer) 3))));
                MR_Integer ArgY4_17;
                MR_Word SubResult1_9;

                succeeded = ((MR_tag((MR_Word) HeadVar__3_3)) == (MR_Integer) 1);
                if (succeeded)
                {
                  ArgY1_8 = ((MR_String) ((MR_hl_field(MR_mktag(1), HeadVar__3_3, (MR_Integer) 0))));
                  ArgY2_11 = ((MR_Integer) ((MR_hl_field(MR_mktag(1), HeadVar__3_3, (MR_Integer) 1))));
                  ArgY3_14 = ((MR_Integer) ((MR_hl_field(MR_mktag(1), HeadVar__3_3, (MR_Integer) 2))));
                  ArgY4_17 = ((MR_Integer) ((MR_hl_field(MR_mktag(1), HeadVar__3_3, (MR_Integer) 3))));
                  mercury__private_builtin__builtin_compare_string_3_p_0(&SubResult1_9, ArgX1_7, ArgY1_8);
                  succeeded = (SubResult1_9 != (MR_Integer) 0);
                  if (succeeded)
                    Var_6 = SubResult1_9;
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
                      Var_6 = SubResult2_12;
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
                        Var_6 = SubResult3_15;
                      else
                      {
                        succeeded = (ArgX4_16 < ArgY4_17);
                        if (succeeded)
                          Var_6 = (MR_Integer) 1;
                        else
                        {
                          succeeded = (ArgX4_16 > ArgY4_17);
                          if (succeeded)
                            Var_6 = (MR_Integer) 2;
                          else
                            Var_6 = (MR_Integer) 0;
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
                MR_Integer ArgX1_18 = ((MR_Integer) ((MR_hl_field(MR_mktag(2), HeadVar__2_2, (MR_Integer) 0))));
                MR_Integer ArgY1_19;
                MR_Word ArgX2_21 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(2), HeadVar__2_2, (MR_Integer) 1))) & (MR_Integer) 7);
                MR_Word ArgY2_22;
                MR_Integer ArgX3_24 = ((MR_Integer) ((MR_hl_field(MR_mktag(2), HeadVar__2_2, (MR_Integer) 2))));
                MR_Integer ArgY3_25;
                MR_Integer ArgX4_27 = ((MR_Integer) ((MR_hl_field(MR_mktag(2), HeadVar__2_2, (MR_Integer) 3))));
                MR_Integer ArgY4_28;
                MR_Integer ArgX5_30 = ((MR_Integer) ((MR_hl_field(MR_mktag(2), HeadVar__2_2, (MR_Integer) 4))));
                MR_Integer ArgY5_31;
                MR_Word ArgX6_33 = ((MR_Word) ((MR_hl_field(MR_mktag(2), HeadVar__2_2, (MR_Integer) 5))));
                MR_Word ArgY6_34;
                MR_Word SubResult1_20;

                succeeded = ((MR_tag((MR_Word) HeadVar__3_3)) == (MR_Integer) 2);
                if (succeeded)
                {
                  ArgY1_19 = ((MR_Integer) ((MR_hl_field(MR_mktag(2), HeadVar__3_3, (MR_Integer) 0))));
                  ArgY2_22 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(2), HeadVar__3_3, (MR_Integer) 1))) & (MR_Integer) 7);
                  ArgY3_25 = ((MR_Integer) ((MR_hl_field(MR_mktag(2), HeadVar__3_3, (MR_Integer) 2))));
                  ArgY4_28 = ((MR_Integer) ((MR_hl_field(MR_mktag(2), HeadVar__3_3, (MR_Integer) 3))));
                  ArgY5_31 = ((MR_Integer) ((MR_hl_field(MR_mktag(2), HeadVar__3_3, (MR_Integer) 4))));
                  ArgY6_34 = ((MR_Word) ((MR_hl_field(MR_mktag(2), HeadVar__3_3, (MR_Integer) 5))));
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
                    Var_6 = SubResult1_20;
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
                      Var_6 = SubResult2_23;
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
                        Var_6 = SubResult3_26;
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
                          Var_6 = SubResult4_29;
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
                            Var_6 = SubResult5_32;
                          else
                            mercury__builtin__compare_3_p_0((MR_Word) (&bytecode_backend__bytecode_scalar_common_1[1]), &Var_6, ((MR_Box) (ArgX6_33)), ((MR_Box) (ArgY6_34)));
                        }
                      }
                    }
                  }
                  succeeded = MR_TRUE;
                }
              }
              break;
            case (MR_Integer) 3:
              switch (((MR_Integer) ((MR_hl_field(MR_mktag(3), HeadVar__2_2, (MR_Integer) 0))))) {
                default: /*NOTREACHED*/ MR_assert(0);
                case (MR_Integer) 0:
                  {
                    MR_Integer ArgX1_35 = ((MR_Integer) ((MR_hl_field(MR_mktag(3), HeadVar__2_2, (MR_Integer) 1))));
                    MR_Integer ArgY1_36;

                    succeeded = ((((MR_tag((MR_Word) HeadVar__3_3)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(MR_mktag(3), HeadVar__3_3, (MR_Integer) 0)))) == (MR_Integer) 0)));
                    if (succeeded)
                    {
                      ArgY1_36 = ((MR_Integer) ((MR_hl_field(MR_mktag(3), HeadVar__3_3, (MR_Integer) 1))));
                      succeeded = (ArgX1_35 < ArgY1_36);
                      if (succeeded)
                        Var_6 = (MR_Integer) 1;
                      else
                      {
                        succeeded = (ArgX1_35 > ArgY1_36);
                        if (succeeded)
                          Var_6 = (MR_Integer) 2;
                        else
                          Var_6 = (MR_Integer) 0;
                      }
                      succeeded = MR_TRUE;
                    }
                  }
                  break;
                case (MR_Integer) 1:
                  {
                    MR_Integer ArgX1_37 = ((MR_Integer) ((MR_hl_field(MR_mktag(3), HeadVar__2_2, (MR_Integer) 1))));
                    MR_Integer ArgY1_38;

                    succeeded = ((((MR_tag((MR_Word) HeadVar__3_3)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(MR_mktag(3), HeadVar__3_3, (MR_Integer) 0)))) == (MR_Integer) 1)));
                    if (succeeded)
                    {
                      ArgY1_38 = ((MR_Integer) ((MR_hl_field(MR_mktag(3), HeadVar__3_3, (MR_Integer) 1))));
                      succeeded = (ArgX1_37 < ArgY1_38);
                      if (succeeded)
                        Var_6 = (MR_Integer) 1;
                      else
                      {
                        succeeded = (ArgX1_37 > ArgY1_38);
                        if (succeeded)
                          Var_6 = (MR_Integer) 2;
                        else
                          Var_6 = (MR_Integer) 0;
                      }
                      succeeded = MR_TRUE;
                    }
                  }
                  break;
                case (MR_Integer) 2:
                  {
                    MR_Integer ArgX1_39 = ((MR_Integer) ((MR_hl_field(MR_mktag(3), HeadVar__2_2, (MR_Integer) 1))));
                    MR_Integer ArgY1_40;

                    succeeded = ((((MR_tag((MR_Word) HeadVar__3_3)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(MR_mktag(3), HeadVar__3_3, (MR_Integer) 0)))) == (MR_Integer) 2)));
                    if (succeeded)
                    {
                      ArgY1_40 = ((MR_Integer) ((MR_hl_field(MR_mktag(3), HeadVar__3_3, (MR_Integer) 1))));
                      succeeded = (ArgX1_39 < ArgY1_40);
                      if (succeeded)
                        Var_6 = (MR_Integer) 1;
                      else
                      {
                        succeeded = (ArgX1_39 > ArgY1_40);
                        if (succeeded)
                          Var_6 = (MR_Integer) 2;
                        else
                          Var_6 = (MR_Integer) 0;
                      }
                      succeeded = MR_TRUE;
                    }
                  }
                  break;
                case (MR_Integer) 3:
                  {
                    MR_Integer ArgX1_41 = ((MR_Integer) ((MR_hl_field(MR_mktag(3), HeadVar__2_2, (MR_Integer) 1))));
                    MR_Integer ArgY1_42;

                    succeeded = ((((MR_tag((MR_Word) HeadVar__3_3)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(MR_mktag(3), HeadVar__3_3, (MR_Integer) 0)))) == (MR_Integer) 3)));
                    if (succeeded)
                    {
                      ArgY1_42 = ((MR_Integer) ((MR_hl_field(MR_mktag(3), HeadVar__3_3, (MR_Integer) 1))));
                      succeeded = (ArgX1_41 < ArgY1_42);
                      if (succeeded)
                        Var_6 = (MR_Integer) 1;
                      else
                      {
                        succeeded = (ArgX1_41 > ArgY1_42);
                        if (succeeded)
                          Var_6 = (MR_Integer) 2;
                        else
                          Var_6 = (MR_Integer) 0;
                      }
                      succeeded = MR_TRUE;
                    }
                  }
                  break;
                case (MR_Integer) 4:
                  {
                    MR_Integer ArgX1_43 = ((MR_Integer) ((MR_hl_field(MR_mktag(3), HeadVar__2_2, (MR_Integer) 1))));
                    MR_Integer ArgY1_44;
                    MR_Integer ArgX2_46 = ((MR_Integer) ((MR_hl_field(MR_mktag(3), HeadVar__2_2, (MR_Integer) 2))));
                    MR_Integer ArgY2_47;
                    MR_Word SubResult1_45;

                    succeeded = ((((MR_tag((MR_Word) HeadVar__3_3)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(MR_mktag(3), HeadVar__3_3, (MR_Integer) 0)))) == (MR_Integer) 4)));
                    if (succeeded)
                    {
                      ArgY1_44 = ((MR_Integer) ((MR_hl_field(MR_mktag(3), HeadVar__3_3, (MR_Integer) 1))));
                      ArgY2_47 = ((MR_Integer) ((MR_hl_field(MR_mktag(3), HeadVar__3_3, (MR_Integer) 2))));
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
                        Var_6 = SubResult1_45;
                      else
                      {
                        succeeded = (ArgX2_46 < ArgY2_47);
                        if (succeeded)
                          Var_6 = (MR_Integer) 1;
                        else
                        {
                          succeeded = (ArgX2_46 > ArgY2_47);
                          if (succeeded)
                            Var_6 = (MR_Integer) 2;
                          else
                            Var_6 = (MR_Integer) 0;
                        }
                      }
                      succeeded = MR_TRUE;
                    }
                  }
                  break;
                case (MR_Integer) 5:
                  {
                    MR_Word ArgX1_48 = ((MR_Word) ((MR_hl_field(MR_mktag(3), HeadVar__2_2, (MR_Integer) 1))));
                    MR_Word ArgY1_49;
                    MR_Word ArgX2_51 = ((MR_Word) ((MR_hl_field(MR_mktag(3), HeadVar__2_2, (MR_Integer) 2))));
                    MR_Word ArgY2_52;
                    MR_Integer ArgX3_54 = ((MR_Integer) ((MR_hl_field(MR_mktag(3), HeadVar__2_2, (MR_Integer) 3))));
                    MR_Integer ArgY3_55;
                    MR_Word SubResult1_50;

                    succeeded = ((((MR_tag((MR_Word) HeadVar__3_3)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(MR_mktag(3), HeadVar__3_3, (MR_Integer) 0)))) == (MR_Integer) 5)));
                    if (succeeded)
                    {
                      ArgY1_49 = ((MR_Word) ((MR_hl_field(MR_mktag(3), HeadVar__3_3, (MR_Integer) 1))));
                      ArgY2_52 = ((MR_Word) ((MR_hl_field(MR_mktag(3), HeadVar__3_3, (MR_Integer) 2))));
                      ArgY3_55 = ((MR_Integer) ((MR_hl_field(MR_mktag(3), HeadVar__3_3, (MR_Integer) 3))));
                      bytecode_backend__bytecode____Compare____byte_cons_id_0_0(&SubResult1_50, ArgX1_48, ArgY1_49);
                      succeeded = (SubResult1_50 != (MR_Integer) 0);
                      if (succeeded)
                        Var_6 = SubResult1_50;
                      else
                      {
                        MR_Word SubResult2_53;

                        mercury__builtin__compare_3_p_0((MR_Word) (&bytecode_backend__bytecode_scalar_common_1[0]), &SubResult2_53, ((MR_Box) (ArgX2_51)), ((MR_Box) (ArgY2_52)));
                        succeeded = (SubResult2_53 != (MR_Integer) 0);
                        if (succeeded)
                          Var_6 = SubResult2_53;
                        else
                        {
                          succeeded = (ArgX3_54 < ArgY3_55);
                          if (succeeded)
                            Var_6 = (MR_Integer) 1;
                          else
                          {
                            succeeded = (ArgX3_54 > ArgY3_55);
                            if (succeeded)
                              Var_6 = (MR_Integer) 2;
                            else
                              Var_6 = (MR_Integer) 0;
                          }
                        }
                      }
                      succeeded = MR_TRUE;
                    }
                  }
                  break;
                case (MR_Integer) 6:
                  {
                    MR_Integer ArgX1_56 = ((MR_Integer) ((MR_hl_field(MR_mktag(3), HeadVar__2_2, (MR_Integer) 1))));
                    MR_Integer ArgY1_57;

                    succeeded = ((((MR_tag((MR_Word) HeadVar__3_3)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(MR_mktag(3), HeadVar__3_3, (MR_Integer) 0)))) == (MR_Integer) 6)));
                    if (succeeded)
                    {
                      ArgY1_57 = ((MR_Integer) ((MR_hl_field(MR_mktag(3), HeadVar__3_3, (MR_Integer) 1))));
                      succeeded = (ArgX1_56 < ArgY1_57);
                      if (succeeded)
                        Var_6 = (MR_Integer) 1;
                      else
                      {
                        succeeded = (ArgX1_56 > ArgY1_57);
                        if (succeeded)
                          Var_6 = (MR_Integer) 2;
                        else
                          Var_6 = (MR_Integer) 0;
                      }
                      succeeded = MR_TRUE;
                    }
                  }
                  break;
                case (MR_Integer) 7:
                  {
                    MR_Integer ArgX1_58 = ((MR_Integer) ((MR_hl_field(MR_mktag(3), HeadVar__2_2, (MR_Integer) 1))));
                    MR_Integer ArgY1_59;
                    MR_Integer ArgX2_61 = ((MR_Integer) ((MR_hl_field(MR_mktag(3), HeadVar__2_2, (MR_Integer) 2))));
                    MR_Integer ArgY2_62;
                    MR_Integer ArgX3_64 = ((MR_Integer) ((MR_hl_field(MR_mktag(3), HeadVar__2_2, (MR_Integer) 3))));
                    MR_Integer ArgY3_65;
                    MR_Word SubResult1_60;

                    succeeded = ((((MR_tag((MR_Word) HeadVar__3_3)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(MR_mktag(3), HeadVar__3_3, (MR_Integer) 0)))) == (MR_Integer) 7)));
                    if (succeeded)
                    {
                      ArgY1_59 = ((MR_Integer) ((MR_hl_field(MR_mktag(3), HeadVar__3_3, (MR_Integer) 1))));
                      ArgY2_62 = ((MR_Integer) ((MR_hl_field(MR_mktag(3), HeadVar__3_3, (MR_Integer) 2))));
                      ArgY3_65 = ((MR_Integer) ((MR_hl_field(MR_mktag(3), HeadVar__3_3, (MR_Integer) 3))));
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
                        Var_6 = SubResult1_60;
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
                          Var_6 = SubResult2_63;
                        else
                        {
                          succeeded = (ArgX3_64 < ArgY3_65);
                          if (succeeded)
                            Var_6 = (MR_Integer) 1;
                          else
                          {
                            succeeded = (ArgX3_64 > ArgY3_65);
                            if (succeeded)
                              Var_6 = (MR_Integer) 2;
                            else
                              Var_6 = (MR_Integer) 0;
                          }
                        }
                      }
                      succeeded = MR_TRUE;
                    }
                  }
                  break;
                case (MR_Integer) 8:
                  {
                    MR_Integer ArgX1_66 = ((MR_Integer) ((MR_hl_field(MR_mktag(3), HeadVar__2_2, (MR_Integer) 1))));
                    MR_Integer ArgY1_67;

                    succeeded = ((((MR_tag((MR_Word) HeadVar__3_3)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(MR_mktag(3), HeadVar__3_3, (MR_Integer) 0)))) == (MR_Integer) 8)));
                    if (succeeded)
                    {
                      ArgY1_67 = ((MR_Integer) ((MR_hl_field(MR_mktag(3), HeadVar__3_3, (MR_Integer) 1))));
                      succeeded = (ArgX1_66 < ArgY1_67);
                      if (succeeded)
                        Var_6 = (MR_Integer) 1;
                      else
                      {
                        succeeded = (ArgX1_66 > ArgY1_67);
                        if (succeeded)
                          Var_6 = (MR_Integer) 2;
                        else
                          Var_6 = (MR_Integer) 0;
                      }
                      succeeded = MR_TRUE;
                    }
                  }
                  break;
                case (MR_Integer) 9:
                  {
                    MR_Integer ArgX1_68 = ((MR_Integer) ((MR_hl_field(MR_mktag(3), HeadVar__2_2, (MR_Integer) 1))));
                    MR_Integer ArgY1_69;

                    succeeded = ((((MR_tag((MR_Word) HeadVar__3_3)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(MR_mktag(3), HeadVar__3_3, (MR_Integer) 0)))) == (MR_Integer) 9)));
                    if (succeeded)
                    {
                      ArgY1_69 = ((MR_Integer) ((MR_hl_field(MR_mktag(3), HeadVar__3_3, (MR_Integer) 1))));
                      succeeded = (ArgX1_68 < ArgY1_69);
                      if (succeeded)
                        Var_6 = (MR_Integer) 1;
                      else
                      {
                        succeeded = (ArgX1_68 > ArgY1_69);
                        if (succeeded)
                          Var_6 = (MR_Integer) 2;
                        else
                          Var_6 = (MR_Integer) 0;
                      }
                      succeeded = MR_TRUE;
                    }
                  }
                  break;
                case (MR_Integer) 10:
                  {
                    MR_Integer ArgX1_70 = ((MR_Integer) ((MR_hl_field(MR_mktag(3), HeadVar__2_2, (MR_Integer) 1))));
                    MR_Integer ArgY1_71;

                    succeeded = ((((MR_tag((MR_Word) HeadVar__3_3)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(MR_mktag(3), HeadVar__3_3, (MR_Integer) 0)))) == (MR_Integer) 10)));
                    if (succeeded)
                    {
                      ArgY1_71 = ((MR_Integer) ((MR_hl_field(MR_mktag(3), HeadVar__3_3, (MR_Integer) 1))));
                      succeeded = (ArgX1_70 < ArgY1_71);
                      if (succeeded)
                        Var_6 = (MR_Integer) 1;
                      else
                      {
                        succeeded = (ArgX1_70 > ArgY1_71);
                        if (succeeded)
                          Var_6 = (MR_Integer) 2;
                        else
                          Var_6 = (MR_Integer) 0;
                      }
                      succeeded = MR_TRUE;
                    }
                  }
                  break;
                case (MR_Integer) 11:
                  {
                    MR_Integer ArgX1_72 = ((MR_Integer) ((MR_hl_field(MR_mktag(3), HeadVar__2_2, (MR_Integer) 1))));
                    MR_Integer ArgY1_73;
                    MR_Integer ArgX2_75 = ((MR_Integer) ((MR_hl_field(MR_mktag(3), HeadVar__2_2, (MR_Integer) 2))));
                    MR_Integer ArgY2_76;
                    MR_Word SubResult1_74;

                    succeeded = ((((MR_tag((MR_Word) HeadVar__3_3)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(MR_mktag(3), HeadVar__3_3, (MR_Integer) 0)))) == (MR_Integer) 11)));
                    if (succeeded)
                    {
                      ArgY1_73 = ((MR_Integer) ((MR_hl_field(MR_mktag(3), HeadVar__3_3, (MR_Integer) 1))));
                      ArgY2_76 = ((MR_Integer) ((MR_hl_field(MR_mktag(3), HeadVar__3_3, (MR_Integer) 2))));
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
                        Var_6 = SubResult1_74;
                      else
                      {
                        succeeded = (ArgX2_75 < ArgY2_76);
                        if (succeeded)
                          Var_6 = (MR_Integer) 1;
                        else
                        {
                          succeeded = (ArgX2_75 > ArgY2_76);
                          if (succeeded)
                            Var_6 = (MR_Integer) 2;
                          else
                            Var_6 = (MR_Integer) 0;
                        }
                      }
                      succeeded = MR_TRUE;
                    }
                  }
                  break;
                case (MR_Integer) 12:
                  {
                    MR_Integer ArgX1_77 = ((MR_Integer) ((MR_hl_field(MR_mktag(3), HeadVar__2_2, (MR_Integer) 1))));
                    MR_Integer ArgY1_78;

                    succeeded = ((((MR_tag((MR_Word) HeadVar__3_3)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(MR_mktag(3), HeadVar__3_3, (MR_Integer) 0)))) == (MR_Integer) 12)));
                    if (succeeded)
                    {
                      ArgY1_78 = ((MR_Integer) ((MR_hl_field(MR_mktag(3), HeadVar__3_3, (MR_Integer) 1))));
                      succeeded = (ArgX1_77 < ArgY1_78);
                      if (succeeded)
                        Var_6 = (MR_Integer) 1;
                      else
                      {
                        succeeded = (ArgX1_77 > ArgY1_78);
                        if (succeeded)
                          Var_6 = (MR_Integer) 2;
                        else
                          Var_6 = (MR_Integer) 0;
                      }
                      succeeded = MR_TRUE;
                    }
                  }
                  break;
                case (MR_Integer) 13:
                  {
                    MR_Integer ArgX1_79 = ((MR_Integer) ((MR_hl_field(MR_mktag(3), HeadVar__2_2, (MR_Integer) 1))));
                    MR_Integer ArgY1_80;

                    succeeded = ((((MR_tag((MR_Word) HeadVar__3_3)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(MR_mktag(3), HeadVar__3_3, (MR_Integer) 0)))) == (MR_Integer) 13)));
                    if (succeeded)
                    {
                      ArgY1_80 = ((MR_Integer) ((MR_hl_field(MR_mktag(3), HeadVar__3_3, (MR_Integer) 1))));
                      succeeded = (ArgX1_79 < ArgY1_80);
                      if (succeeded)
                        Var_6 = (MR_Integer) 1;
                      else
                      {
                        succeeded = (ArgX1_79 > ArgY1_80);
                        if (succeeded)
                          Var_6 = (MR_Integer) 2;
                        else
                          Var_6 = (MR_Integer) 0;
                      }
                      succeeded = MR_TRUE;
                    }
                  }
                  break;
                case (MR_Integer) 14:
                  {
                    MR_Integer ArgX1_81 = ((MR_Integer) ((MR_hl_field(MR_mktag(3), HeadVar__2_2, (MR_Integer) 1))));
                    MR_Integer ArgY1_82;

                    succeeded = ((((MR_tag((MR_Word) HeadVar__3_3)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(MR_mktag(3), HeadVar__3_3, (MR_Integer) 0)))) == (MR_Integer) 14)));
                    if (succeeded)
                    {
                      ArgY1_82 = ((MR_Integer) ((MR_hl_field(MR_mktag(3), HeadVar__3_3, (MR_Integer) 1))));
                      succeeded = (ArgX1_81 < ArgY1_82);
                      if (succeeded)
                        Var_6 = (MR_Integer) 1;
                      else
                      {
                        succeeded = (ArgX1_81 > ArgY1_82);
                        if (succeeded)
                          Var_6 = (MR_Integer) 2;
                        else
                          Var_6 = (MR_Integer) 0;
                      }
                      succeeded = MR_TRUE;
                    }
                  }
                  break;
                case (MR_Integer) 15:
                  {
                    MR_Integer ArgX1_83 = ((MR_Integer) ((MR_hl_field(MR_mktag(3), HeadVar__2_2, (MR_Integer) 1))));
                    MR_Integer ArgY1_84;
                    MR_Integer ArgX2_86 = ((MR_Integer) ((MR_hl_field(MR_mktag(3), HeadVar__2_2, (MR_Integer) 2))));
                    MR_Integer ArgY2_87;
                    MR_Word SubResult1_85;

                    succeeded = ((((MR_tag((MR_Word) HeadVar__3_3)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(MR_mktag(3), HeadVar__3_3, (MR_Integer) 0)))) == (MR_Integer) 15)));
                    if (succeeded)
                    {
                      ArgY1_84 = ((MR_Integer) ((MR_hl_field(MR_mktag(3), HeadVar__3_3, (MR_Integer) 1))));
                      ArgY2_87 = ((MR_Integer) ((MR_hl_field(MR_mktag(3), HeadVar__3_3, (MR_Integer) 2))));
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
                        Var_6 = SubResult1_85;
                      else
                      {
                        succeeded = (ArgX2_86 < ArgY2_87);
                        if (succeeded)
                          Var_6 = (MR_Integer) 1;
                        else
                        {
                          succeeded = (ArgX2_86 > ArgY2_87);
                          if (succeeded)
                            Var_6 = (MR_Integer) 2;
                          else
                            Var_6 = (MR_Integer) 0;
                        }
                      }
                      succeeded = MR_TRUE;
                    }
                  }
                  break;
                case (MR_Integer) 16:
                  {
                    MR_Integer ArgX1_88 = ((MR_Integer) ((MR_hl_field(MR_mktag(3), HeadVar__2_2, (MR_Integer) 1))));
                    MR_Integer ArgY1_89;
                    MR_Integer ArgX2_91 = ((MR_Integer) ((MR_hl_field(MR_mktag(3), HeadVar__2_2, (MR_Integer) 2))));
                    MR_Integer ArgY2_92;
                    MR_Word ArgX3_94 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(3), HeadVar__2_2, (MR_Integer) 3))) & (MR_Integer) 7);
                    MR_Word ArgY3_95;
                    MR_Word SubResult1_90;

                    succeeded = ((((MR_tag((MR_Word) HeadVar__3_3)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(MR_mktag(3), HeadVar__3_3, (MR_Integer) 0)))) == (MR_Integer) 16)));
                    if (succeeded)
                    {
                      ArgY1_89 = ((MR_Integer) ((MR_hl_field(MR_mktag(3), HeadVar__3_3, (MR_Integer) 1))));
                      ArgY2_92 = ((MR_Integer) ((MR_hl_field(MR_mktag(3), HeadVar__3_3, (MR_Integer) 2))));
                      ArgY3_95 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(3), HeadVar__3_3, (MR_Integer) 3))) & (MR_Integer) 7);
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
                        Var_6 = SubResult1_90;
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
                          Var_6 = SubResult2_93;
                        else
                        {
                          MR_Integer Var_281 = (MR_Integer) (ArgX3_94);
                          MR_Integer Var_282 = (MR_Integer) (ArgY3_95);

                          succeeded = (Var_281 < Var_282);
                          if (succeeded)
                            Var_6 = (MR_Integer) 1;
                          else
                          {
                            succeeded = (Var_281 > Var_282);
                            if (succeeded)
                              Var_6 = (MR_Integer) 2;
                            else
                              Var_6 = (MR_Integer) 0;
                          }
                        }
                      }
                      succeeded = MR_TRUE;
                    }
                  }
                  break;
                case (MR_Integer) 17:
                  {
                    MR_Integer ArgX1_96 = ((MR_Integer) ((MR_hl_field(MR_mktag(3), HeadVar__2_2, (MR_Integer) 1))));
                    MR_Integer ArgY1_97;
                    MR_Word ArgX2_99 = ((MR_Word) ((MR_hl_field(MR_mktag(3), HeadVar__2_2, (MR_Integer) 2))));
                    MR_Word ArgY2_100;
                    MR_Word ArgX3_102 = ((MR_Word) ((MR_hl_field(MR_mktag(3), HeadVar__2_2, (MR_Integer) 3))));
                    MR_Word ArgY3_103;
                    MR_Word SubResult1_98;

                    succeeded = ((((MR_tag((MR_Word) HeadVar__3_3)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(MR_mktag(3), HeadVar__3_3, (MR_Integer) 0)))) == (MR_Integer) 17)));
                    if (succeeded)
                    {
                      ArgY1_97 = ((MR_Integer) ((MR_hl_field(MR_mktag(3), HeadVar__3_3, (MR_Integer) 1))));
                      ArgY2_100 = ((MR_Word) ((MR_hl_field(MR_mktag(3), HeadVar__3_3, (MR_Integer) 2))));
                      ArgY3_103 = ((MR_Word) ((MR_hl_field(MR_mktag(3), HeadVar__3_3, (MR_Integer) 3))));
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
                        Var_6 = SubResult1_98;
                      else
                      {
                        MR_Word SubResult2_101;

                        bytecode_backend__bytecode____Compare____byte_cons_id_0_0(&SubResult2_101, ArgX2_99, ArgY2_100);
                        succeeded = (SubResult2_101 != (MR_Integer) 0);
                        if (succeeded)
                          Var_6 = SubResult2_101;
                        else
                          mercury__builtin__compare_3_p_0((MR_Word) (&bytecode_backend__bytecode_scalar_common_1[2]), &Var_6, ((MR_Box) (ArgX3_102)), ((MR_Box) (ArgY3_103)));
                      }
                      succeeded = MR_TRUE;
                    }
                  }
                  break;
                case (MR_Integer) 18:
                  {
                    MR_Integer ArgX1_104 = ((MR_Integer) ((MR_hl_field(MR_mktag(3), HeadVar__2_2, (MR_Integer) 1))));
                    MR_Integer ArgY1_105;
                    MR_Word ArgX2_107 = ((MR_Word) ((MR_hl_field(MR_mktag(3), HeadVar__2_2, (MR_Integer) 2))));
                    MR_Word ArgY2_108;
                    MR_Word ArgX3_110 = ((MR_Word) ((MR_hl_field(MR_mktag(3), HeadVar__2_2, (MR_Integer) 3))));
                    MR_Word ArgY3_111;
                    MR_Word SubResult1_106;

                    succeeded = ((((MR_tag((MR_Word) HeadVar__3_3)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(MR_mktag(3), HeadVar__3_3, (MR_Integer) 0)))) == (MR_Integer) 18)));
                    if (succeeded)
                    {
                      ArgY1_105 = ((MR_Integer) ((MR_hl_field(MR_mktag(3), HeadVar__3_3, (MR_Integer) 1))));
                      ArgY2_108 = ((MR_Word) ((MR_hl_field(MR_mktag(3), HeadVar__3_3, (MR_Integer) 2))));
                      ArgY3_111 = ((MR_Word) ((MR_hl_field(MR_mktag(3), HeadVar__3_3, (MR_Integer) 3))));
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
                        Var_6 = SubResult1_106;
                      else
                      {
                        MR_Word SubResult2_109;

                        bytecode_backend__bytecode____Compare____byte_cons_id_0_0(&SubResult2_109, ArgX2_107, ArgY2_108);
                        succeeded = (SubResult2_109 != (MR_Integer) 0);
                        if (succeeded)
                          Var_6 = SubResult2_109;
                        else
                          mercury__builtin__compare_3_p_0((MR_Word) (&bytecode_backend__bytecode_scalar_common_1[2]), &Var_6, ((MR_Box) (ArgX3_110)), ((MR_Box) (ArgY3_111)));
                      }
                      succeeded = MR_TRUE;
                    }
                  }
                  break;
                case (MR_Integer) 19:
                  {
                    MR_Integer ArgX1_112 = ((MR_Integer) ((MR_hl_field(MR_mktag(3), HeadVar__2_2, (MR_Integer) 1))));
                    MR_Integer ArgY1_113;
                    MR_Word ArgX2_115 = ((MR_Word) ((MR_hl_field(MR_mktag(3), HeadVar__2_2, (MR_Integer) 2))));
                    MR_Word ArgY2_116;
                    MR_Word ArgX3_118 = ((MR_Word) ((MR_hl_field(MR_mktag(3), HeadVar__2_2, (MR_Integer) 3))));
                    MR_Word ArgY3_119;
                    MR_Word SubResult1_114;

                    succeeded = ((((MR_tag((MR_Word) HeadVar__3_3)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(MR_mktag(3), HeadVar__3_3, (MR_Integer) 0)))) == (MR_Integer) 19)));
                    if (succeeded)
                    {
                      ArgY1_113 = ((MR_Integer) ((MR_hl_field(MR_mktag(3), HeadVar__3_3, (MR_Integer) 1))));
                      ArgY2_116 = ((MR_Word) ((MR_hl_field(MR_mktag(3), HeadVar__3_3, (MR_Integer) 2))));
                      ArgY3_119 = ((MR_Word) ((MR_hl_field(MR_mktag(3), HeadVar__3_3, (MR_Integer) 3))));
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
                        Var_6 = SubResult1_114;
                      else
                      {
                        MR_Word SubResult2_117;

                        bytecode_backend__bytecode____Compare____byte_cons_id_0_0(&SubResult2_117, ArgX2_115, ArgY2_116);
                        succeeded = (SubResult2_117 != (MR_Integer) 0);
                        if (succeeded)
                          Var_6 = SubResult2_117;
                        else
                          mercury__builtin__compare_3_p_0((MR_Word) (&bytecode_backend__bytecode_scalar_common_1[3]), &Var_6, ((MR_Box) (ArgX3_118)), ((MR_Box) (ArgY3_119)));
                      }
                      succeeded = MR_TRUE;
                    }
                  }
                  break;
                case (MR_Integer) 20:
                  {
                    MR_Integer ArgX1_120 = ((MR_Integer) ((MR_hl_field(MR_mktag(3), HeadVar__2_2, (MR_Integer) 1))));
                    MR_Integer ArgY1_121;
                    MR_Word ArgX2_123 = ((MR_Word) ((MR_hl_field(MR_mktag(3), HeadVar__2_2, (MR_Integer) 2))));
                    MR_Word ArgY2_124;
                    MR_Word ArgX3_126 = ((MR_Word) ((MR_hl_field(MR_mktag(3), HeadVar__2_2, (MR_Integer) 3))));
                    MR_Word ArgY3_127;
                    MR_Word SubResult1_122;

                    succeeded = ((((MR_tag((MR_Word) HeadVar__3_3)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(MR_mktag(3), HeadVar__3_3, (MR_Integer) 0)))) == (MR_Integer) 20)));
                    if (succeeded)
                    {
                      ArgY1_121 = ((MR_Integer) ((MR_hl_field(MR_mktag(3), HeadVar__3_3, (MR_Integer) 1))));
                      ArgY2_124 = ((MR_Word) ((MR_hl_field(MR_mktag(3), HeadVar__3_3, (MR_Integer) 2))));
                      ArgY3_127 = ((MR_Word) ((MR_hl_field(MR_mktag(3), HeadVar__3_3, (MR_Integer) 3))));
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
                        Var_6 = SubResult1_122;
                      else
                      {
                        MR_Word SubResult2_125;

                        bytecode_backend__bytecode____Compare____byte_cons_id_0_0(&SubResult2_125, ArgX2_123, ArgY2_124);
                        succeeded = (SubResult2_125 != (MR_Integer) 0);
                        if (succeeded)
                          Var_6 = SubResult2_125;
                        else
                          mercury__builtin__compare_3_p_0((MR_Word) (&bytecode_backend__bytecode_scalar_common_1[3]), &Var_6, ((MR_Box) (ArgX3_126)), ((MR_Box) (ArgY3_127)));
                      }
                      succeeded = MR_TRUE;
                    }
                  }
                  break;
                case (MR_Integer) 21:
                  {
                    MR_Integer ArgX2_130 = ((MR_Integer) ((MR_hl_field(MR_mktag(3), HeadVar__2_2, (MR_Integer) 2))));
                    MR_Integer ArgY2_131;
                    MR_Integer ArgX3_133 = ((MR_Integer) ((MR_hl_field(MR_mktag(3), HeadVar__2_2, (MR_Integer) 3))));
                    MR_Integer ArgY3_134;
                    MR_Word SubResult2_132;

                    succeeded = ((((MR_tag((MR_Word) HeadVar__3_3)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(MR_mktag(3), HeadVar__3_3, (MR_Integer) 0)))) == (MR_Integer) 21)));
                    if (succeeded)
                    {
                      ArgY2_131 = ((MR_Integer) ((MR_hl_field(MR_mktag(3), HeadVar__3_3, (MR_Integer) 2))));
                      ArgY3_134 = ((MR_Integer) ((MR_hl_field(MR_mktag(3), HeadVar__3_3, (MR_Integer) 3))));
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
                        Var_6 = SubResult2_132;
                      else
                      {
                        succeeded = (ArgX3_133 < ArgY3_134);
                        if (succeeded)
                          Var_6 = (MR_Integer) 1;
                        else
                        {
                          succeeded = (ArgX3_133 > ArgY3_134);
                          if (succeeded)
                            Var_6 = (MR_Integer) 2;
                          else
                            Var_6 = (MR_Integer) 0;
                        }
                      }
                      succeeded = MR_TRUE;
                    }
                  }
                  break;
                case (MR_Integer) 22:
                  {
                    MR_Integer ArgX2_137 = ((MR_Integer) ((MR_hl_field(MR_mktag(3), HeadVar__2_2, (MR_Integer) 2))));
                    MR_Integer ArgY2_138;
                    MR_Integer ArgX3_140 = ((MR_Integer) ((MR_hl_field(MR_mktag(3), HeadVar__2_2, (MR_Integer) 3))));
                    MR_Integer ArgY3_141;
                    MR_Word SubResult2_139;

                    succeeded = ((((MR_tag((MR_Word) HeadVar__3_3)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(MR_mktag(3), HeadVar__3_3, (MR_Integer) 0)))) == (MR_Integer) 22)));
                    if (succeeded)
                    {
                      ArgY2_138 = ((MR_Integer) ((MR_hl_field(MR_mktag(3), HeadVar__3_3, (MR_Integer) 2))));
                      ArgY3_141 = ((MR_Integer) ((MR_hl_field(MR_mktag(3), HeadVar__3_3, (MR_Integer) 3))));
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
                        Var_6 = SubResult2_139;
                      else
                      {
                        succeeded = (ArgX3_140 < ArgY3_141);
                        if (succeeded)
                          Var_6 = (MR_Integer) 1;
                        else
                        {
                          succeeded = (ArgX3_140 > ArgY3_141);
                          if (succeeded)
                            Var_6 = (MR_Integer) 2;
                          else
                            Var_6 = (MR_Integer) 0;
                        }
                      }
                      succeeded = MR_TRUE;
                    }
                  }
                  break;
                case (MR_Integer) 23:
                  {
                    MR_Word ArgX1_142 = ((MR_Word) ((MR_hl_field(MR_mktag(3), HeadVar__2_2, (MR_Integer) 1))));
                    MR_Word ArgY1_143;
                    MR_String ArgX2_145 = ((MR_String) ((MR_hl_field(MR_mktag(3), HeadVar__2_2, (MR_Integer) 2))));
                    MR_String ArgY2_146;
                    MR_Integer ArgX3_148 = ((MR_Integer) ((MR_hl_field(MR_mktag(3), HeadVar__2_2, (MR_Integer) 3))));
                    MR_Integer ArgY3_149;
                    MR_Integer ArgX4_151 = ((MR_Integer) ((MR_hl_field(MR_mktag(3), HeadVar__2_2, (MR_Integer) 4))));
                    MR_Integer ArgY4_152;
                    MR_Integer ArgX5_154 = ((MR_Integer) ((MR_hl_field(MR_mktag(3), HeadVar__2_2, (MR_Integer) 5))));
                    MR_Integer ArgY5_155;
                    MR_Word SubResult1_144;

                    succeeded = ((((MR_tag((MR_Word) HeadVar__3_3)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(MR_mktag(3), HeadVar__3_3, (MR_Integer) 0)))) == (MR_Integer) 23)));
                    if (succeeded)
                    {
                      ArgY1_143 = ((MR_Word) ((MR_hl_field(MR_mktag(3), HeadVar__3_3, (MR_Integer) 1))));
                      ArgY2_146 = ((MR_String) ((MR_hl_field(MR_mktag(3), HeadVar__3_3, (MR_Integer) 2))));
                      ArgY3_149 = ((MR_Integer) ((MR_hl_field(MR_mktag(3), HeadVar__3_3, (MR_Integer) 3))));
                      ArgY4_152 = ((MR_Integer) ((MR_hl_field(MR_mktag(3), HeadVar__3_3, (MR_Integer) 4))));
                      ArgY5_155 = ((MR_Integer) ((MR_hl_field(MR_mktag(3), HeadVar__3_3, (MR_Integer) 5))));
                      mdbcomp__sym_name____Compare____sym_name_0_0(&SubResult1_144, ArgX1_142, ArgY1_143);
                      succeeded = (SubResult1_144 != (MR_Integer) 0);
                      if (succeeded)
                        Var_6 = SubResult1_144;
                      else
                      {
                        MR_Word SubResult2_147;

                        mercury__private_builtin__builtin_compare_string_3_p_0(&SubResult2_147, ArgX2_145, ArgY2_146);
                        succeeded = (SubResult2_147 != (MR_Integer) 0);
                        if (succeeded)
                          Var_6 = SubResult2_147;
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
                            Var_6 = SubResult3_150;
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
                              Var_6 = SubResult4_153;
                            else
                            {
                              succeeded = (ArgX5_154 < ArgY5_155);
                              if (succeeded)
                                Var_6 = (MR_Integer) 1;
                              else
                              {
                                succeeded = (ArgX5_154 > ArgY5_155);
                                if (succeeded)
                                  Var_6 = (MR_Integer) 2;
                                else
                                  Var_6 = (MR_Integer) 0;
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
                    MR_Integer ArgX1_156 = ((MR_Integer) ((MR_hl_field(MR_mktag(3), HeadVar__2_2, (MR_Integer) 1))));
                    MR_Integer ArgY1_157;
                    MR_Integer ArgX2_159 = ((MR_Integer) ((MR_hl_field(MR_mktag(3), HeadVar__2_2, (MR_Integer) 2))));
                    MR_Integer ArgY2_160;
                    MR_Integer ArgX3_162 = ((MR_Integer) ((MR_hl_field(MR_mktag(3), HeadVar__2_2, (MR_Integer) 3))));
                    MR_Integer ArgY3_163;
                    MR_Word ArgX4_165 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(3), HeadVar__2_2, (MR_Integer) 4))) & (MR_Integer) 7);
                    MR_Word ArgY4_166;
                    MR_Word SubResult1_158;

                    succeeded = ((((MR_tag((MR_Word) HeadVar__3_3)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(MR_mktag(3), HeadVar__3_3, (MR_Integer) 0)))) == (MR_Integer) 24)));
                    if (succeeded)
                    {
                      ArgY1_157 = ((MR_Integer) ((MR_hl_field(MR_mktag(3), HeadVar__3_3, (MR_Integer) 1))));
                      ArgY2_160 = ((MR_Integer) ((MR_hl_field(MR_mktag(3), HeadVar__3_3, (MR_Integer) 2))));
                      ArgY3_163 = ((MR_Integer) ((MR_hl_field(MR_mktag(3), HeadVar__3_3, (MR_Integer) 3))));
                      ArgY4_166 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(3), HeadVar__3_3, (MR_Integer) 4))) & (MR_Integer) 7);
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
                        Var_6 = SubResult1_158;
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
                          Var_6 = SubResult2_161;
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
                            Var_6 = SubResult3_164;
                          else
                          {
                            MR_Integer Var_279 = (MR_Integer) (ArgX4_165);
                            MR_Integer Var_280 = (MR_Integer) (ArgY4_166);

                            succeeded = (Var_279 < Var_280);
                            if (succeeded)
                              Var_6 = (MR_Integer) 1;
                            else
                            {
                              succeeded = (Var_279 > Var_280);
                              if (succeeded)
                                Var_6 = (MR_Integer) 2;
                              else
                                Var_6 = (MR_Integer) 0;
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
                    MR_Word ArgX1_167 = ((MR_Word) ((MR_hl_field(MR_mktag(3), HeadVar__2_2, (MR_Integer) 1))));
                    MR_Word ArgY1_168;
                    MR_Word ArgX2_170 = ((MR_Word) ((MR_hl_field(MR_mktag(3), HeadVar__2_2, (MR_Integer) 2))));
                    MR_Word ArgY2_171;
                    MR_Word ArgX3_173 = ((MR_Word) ((MR_hl_field(MR_mktag(3), HeadVar__2_2, (MR_Integer) 3))));
                    MR_Word ArgY3_174;
                    MR_Integer ArgX4_176 = ((MR_Integer) ((MR_hl_field(MR_mktag(3), HeadVar__2_2, (MR_Integer) 4))));
                    MR_Integer ArgY4_177;
                    MR_Word SubResult1_169;

                    succeeded = ((((MR_tag((MR_Word) HeadVar__3_3)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(MR_mktag(3), HeadVar__3_3, (MR_Integer) 0)))) == (MR_Integer) 25)));
                    if (succeeded)
                    {
                      ArgY1_168 = ((MR_Word) ((MR_hl_field(MR_mktag(3), HeadVar__3_3, (MR_Integer) 1))));
                      ArgY2_171 = ((MR_Word) ((MR_hl_field(MR_mktag(3), HeadVar__3_3, (MR_Integer) 2))));
                      ArgY3_174 = ((MR_Word) ((MR_hl_field(MR_mktag(3), HeadVar__3_3, (MR_Integer) 3))));
                      ArgY4_177 = ((MR_Integer) ((MR_hl_field(MR_mktag(3), HeadVar__3_3, (MR_Integer) 4))));
                      backend_libs__builtin_ops____Compare____binary_op_0_0(&SubResult1_169, ArgX1_167, ArgY1_168);
                      succeeded = (SubResult1_169 != (MR_Integer) 0);
                      if (succeeded)
                        Var_6 = SubResult1_169;
                      else
                      {
                        MR_Word SubResult2_172;

                        bytecode_backend__bytecode____Compare____byte_arg_0_0(&SubResult2_172, ArgX2_170, ArgY2_171);
                        succeeded = (SubResult2_172 != (MR_Integer) 0);
                        if (succeeded)
                          Var_6 = SubResult2_172;
                        else
                        {
                          MR_Word SubResult3_175;

                          bytecode_backend__bytecode____Compare____byte_arg_0_0(&SubResult3_175, ArgX3_173, ArgY3_174);
                          succeeded = (SubResult3_175 != (MR_Integer) 0);
                          if (succeeded)
                            Var_6 = SubResult3_175;
                          else
                          {
                            succeeded = (ArgX4_176 < ArgY4_177);
                            if (succeeded)
                              Var_6 = (MR_Integer) 1;
                            else
                            {
                              succeeded = (ArgX4_176 > ArgY4_177);
                              if (succeeded)
                                Var_6 = (MR_Integer) 2;
                              else
                                Var_6 = (MR_Integer) 0;
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
                    MR_Word ArgX1_178 = ((MR_Word) ((MR_hl_field(MR_mktag(3), HeadVar__2_2, (MR_Integer) 1))));
                    MR_Word ArgY1_179;
                    MR_Word ArgX2_181 = ((MR_Word) ((MR_hl_field(MR_mktag(3), HeadVar__2_2, (MR_Integer) 2))));
                    MR_Word ArgY2_182;
                    MR_Integer ArgX3_184 = ((MR_Integer) ((MR_hl_field(MR_mktag(3), HeadVar__2_2, (MR_Integer) 3))));
                    MR_Integer ArgY3_185;
                    MR_Word SubResult1_180;

                    succeeded = ((((MR_tag((MR_Word) HeadVar__3_3)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(MR_mktag(3), HeadVar__3_3, (MR_Integer) 0)))) == (MR_Integer) 26)));
                    if (succeeded)
                    {
                      ArgY1_179 = ((MR_Word) ((MR_hl_field(MR_mktag(3), HeadVar__3_3, (MR_Integer) 1))));
                      ArgY2_182 = ((MR_Word) ((MR_hl_field(MR_mktag(3), HeadVar__3_3, (MR_Integer) 2))));
                      ArgY3_185 = ((MR_Integer) ((MR_hl_field(MR_mktag(3), HeadVar__3_3, (MR_Integer) 3))));
                      backend_libs__builtin_ops____Compare____unary_op_0_0(&SubResult1_180, ArgX1_178, ArgY1_179);
                      succeeded = (SubResult1_180 != (MR_Integer) 0);
                      if (succeeded)
                        Var_6 = SubResult1_180;
                      else
                      {
                        MR_Word SubResult2_183;

                        bytecode_backend__bytecode____Compare____byte_arg_0_0(&SubResult2_183, ArgX2_181, ArgY2_182);
                        succeeded = (SubResult2_183 != (MR_Integer) 0);
                        if (succeeded)
                          Var_6 = SubResult2_183;
                        else
                        {
                          succeeded = (ArgX3_184 < ArgY3_185);
                          if (succeeded)
                            Var_6 = (MR_Integer) 1;
                          else
                          {
                            succeeded = (ArgX3_184 > ArgY3_185);
                            if (succeeded)
                              Var_6 = (MR_Integer) 2;
                            else
                              Var_6 = (MR_Integer) 0;
                          }
                        }
                      }
                      succeeded = MR_TRUE;
                    }
                  }
                  break;
                case (MR_Integer) 27:
                  {
                    MR_Word ArgX1_186 = ((MR_Word) ((MR_hl_field(MR_mktag(3), HeadVar__2_2, (MR_Integer) 1))));
                    MR_Word ArgY1_187;
                    MR_Word ArgX2_189 = ((MR_Word) ((MR_hl_field(MR_mktag(3), HeadVar__2_2, (MR_Integer) 2))));
                    MR_Word ArgY2_190;
                    MR_Word ArgX3_192 = ((MR_Word) ((MR_hl_field(MR_mktag(3), HeadVar__2_2, (MR_Integer) 3))));
                    MR_Word ArgY3_193;
                    MR_Word SubResult1_188;

                    succeeded = ((((MR_tag((MR_Word) HeadVar__3_3)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(MR_mktag(3), HeadVar__3_3, (MR_Integer) 0)))) == (MR_Integer) 27)));
                    if (succeeded)
                    {
                      ArgY1_187 = ((MR_Word) ((MR_hl_field(MR_mktag(3), HeadVar__3_3, (MR_Integer) 1))));
                      ArgY2_190 = ((MR_Word) ((MR_hl_field(MR_mktag(3), HeadVar__3_3, (MR_Integer) 2))));
                      ArgY3_193 = ((MR_Word) ((MR_hl_field(MR_mktag(3), HeadVar__3_3, (MR_Integer) 3))));
                      backend_libs__builtin_ops____Compare____binary_op_0_0(&SubResult1_188, ArgX1_186, ArgY1_187);
                      succeeded = (SubResult1_188 != (MR_Integer) 0);
                      if (succeeded)
                        Var_6 = SubResult1_188;
                      else
                      {
                        MR_Word SubResult2_191;

                        bytecode_backend__bytecode____Compare____byte_arg_0_0(&SubResult2_191, ArgX2_189, ArgY2_190);
                        succeeded = (SubResult2_191 != (MR_Integer) 0);
                        if (succeeded)
                          Var_6 = SubResult2_191;
                        else
                          bytecode_backend__bytecode____Compare____byte_arg_0_0(&Var_6, ArgX3_192, ArgY3_193);
                      }
                      succeeded = MR_TRUE;
                    }
                  }
                  break;
                case (MR_Integer) 28:
                  {
                    MR_Word ArgX1_194 = ((MR_Word) ((MR_hl_field(MR_mktag(3), HeadVar__2_2, (MR_Integer) 1))));
                    MR_Word ArgY1_195;
                    MR_Word ArgX2_197 = ((MR_Word) ((MR_hl_field(MR_mktag(3), HeadVar__2_2, (MR_Integer) 2))));
                    MR_Word ArgY2_198;
                    MR_Word SubResult1_196;

                    succeeded = ((((MR_tag((MR_Word) HeadVar__3_3)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(MR_mktag(3), HeadVar__3_3, (MR_Integer) 0)))) == (MR_Integer) 28)));
                    if (succeeded)
                    {
                      ArgY1_195 = ((MR_Word) ((MR_hl_field(MR_mktag(3), HeadVar__3_3, (MR_Integer) 1))));
                      ArgY2_198 = ((MR_Word) ((MR_hl_field(MR_mktag(3), HeadVar__3_3, (MR_Integer) 2))));
                      backend_libs__builtin_ops____Compare____unary_op_0_0(&SubResult1_196, ArgX1_194, ArgY1_195);
                      succeeded = (SubResult1_196 != (MR_Integer) 0);
                      if (succeeded)
                        Var_6 = SubResult1_196;
                      else
                        bytecode_backend__bytecode____Compare____byte_arg_0_0(&Var_6, ArgX2_197, ArgY2_198);
                      succeeded = MR_TRUE;
                    }
                  }
                  break;
                case (MR_Integer) 29:
                  {
                    MR_Integer ArgX1_199 = ((MR_Integer) ((MR_hl_field(MR_mktag(3), HeadVar__2_2, (MR_Integer) 1))));
                    MR_Integer ArgY1_200;

                    succeeded = ((((MR_tag((MR_Word) HeadVar__3_3)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(MR_mktag(3), HeadVar__3_3, (MR_Integer) 0)))) == (MR_Integer) 29)));
                    if (succeeded)
                    {
                      ArgY1_200 = ((MR_Integer) ((MR_hl_field(MR_mktag(3), HeadVar__3_3, (MR_Integer) 1))));
                      succeeded = (ArgX1_199 < ArgY1_200);
                      if (succeeded)
                        Var_6 = (MR_Integer) 1;
                      else
                      {
                        succeeded = (ArgX1_199 > ArgY1_200);
                        if (succeeded)
                          Var_6 = (MR_Integer) 2;
                        else
                          Var_6 = (MR_Integer) 0;
                      }
                      succeeded = MR_TRUE;
                    }
                  }
                  break;
              }
              break;
          }
          if (succeeded)
            *HeadVar__1_1 = Var_6;
          else
            {
              mercury__private_builtin__compare_error_0_p_0();
              return;
            }
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
                  switch (((MR_Integer) ((MR_hl_field(MR_mktag(3), HeadVar__3_3, (MR_Integer) 0))))) {
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
                  switch (((MR_Integer) ((MR_hl_field(MR_mktag(3), HeadVar__3_3, (MR_Integer) 0))))) {
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
            MR_Word Var_420 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__2_2, (MR_Integer) 3))));
            MR_Integer Var_421 = ((MR_Integer) ((MR_hl_field(MR_mktag(1), HeadVar__2_2, (MR_Integer) 2))));
            MR_String Var_422 = ((MR_String) ((MR_hl_field(MR_mktag(1), HeadVar__2_2, (MR_Integer) 1))));
            MR_Word Var_423 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__2_2, (MR_Integer) 0))));

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
                  MR_Word ArgY1_5 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__3_3, (MR_Integer) 0))));
                  MR_String ArgY2_8 = ((MR_String) ((MR_hl_field(MR_mktag(1), HeadVar__3_3, (MR_Integer) 1))));
                  MR_Integer ArgY3_11 = ((MR_Integer) ((MR_hl_field(MR_mktag(1), HeadVar__3_3, (MR_Integer) 2))));
                  MR_Word ArgY4_14 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__3_3, (MR_Integer) 3))));
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
                switch (((MR_Integer) ((MR_hl_field(MR_mktag(3), HeadVar__3_3, (MR_Integer) 0))))) {
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
            MR_Integer Var_425 = ((MR_Integer) ((MR_hl_field(MR_mktag(2), HeadVar__2_2, (MR_Integer) 0))));

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
                  MR_Integer ArgY1_72 = ((MR_Integer) ((MR_hl_field(MR_mktag(2), HeadVar__3_3, (MR_Integer) 0))));

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
                switch (((MR_Integer) ((MR_hl_field(MR_mktag(3), HeadVar__3_3, (MR_Integer) 0))))) {
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
          switch (((MR_Integer) ((MR_hl_field(MR_mktag(3), HeadVar__2_2, (MR_Integer) 0))))) {
            default: /*NOTREACHED*/ MR_assert(0);
            case (MR_Integer) 0:
              {
                MR_String Var_431 = ((MR_String) ((MR_hl_field(MR_mktag(3), HeadVar__2_2, (MR_Integer) 1))));

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
                    switch (((MR_Integer) ((MR_hl_field(MR_mktag(3), HeadVar__3_3, (MR_Integer) 0))))) {
                      default: /*NOTREACHED*/ MR_assert(0);
                      case (MR_Integer) 0:
                        {
                          MR_String ArgY1_103 = ((MR_String) ((MR_hl_field(MR_mktag(3), HeadVar__3_3, (MR_Integer) 1))));

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
                MR_Float Var_424 = MR_unbox_float((MR_hl_field(MR_mktag(3), HeadVar__2_2, (MR_Integer) 1)));

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
                    switch (((MR_Integer) ((MR_hl_field(MR_mktag(3), HeadVar__3_3, (MR_Integer) 0))))) {
                      default: /*NOTREACHED*/ MR_assert(0);
                      case (MR_Integer) 0:
                        *HeadVar__1_1 = (MR_Integer) 2;
                        break;
                      case (MR_Integer) 1:
                        {
                          MR_Float ArgY1_134 = MR_unbox_float((MR_hl_field(MR_mktag(3), HeadVar__3_3, (MR_Integer) 1)));

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
                MR_Char Var_419 = ((MR_Char) (MR_Word) (MR_hl_field(MR_mktag(3), HeadVar__2_2, (MR_Integer) 1)));

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
                    switch (((MR_Integer) ((MR_hl_field(MR_mktag(3), HeadVar__3_3, (MR_Integer) 0))))) {
                      default: /*NOTREACHED*/ MR_assert(0);
                      case (MR_Integer) 0:
                        *HeadVar__1_1 = (MR_Integer) 2;
                        break;
                      case (MR_Integer) 1:
                        *HeadVar__1_1 = (MR_Integer) 2;
                        break;
                      case (MR_Integer) 2:
                        {
                          MR_Char ArgY1_165 = ((MR_Char) (MR_Word) (MR_hl_field(MR_mktag(3), HeadVar__3_3, (MR_Integer) 1)));

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
                MR_Integer Var_426 = ((MR_Integer) ((MR_hl_field(MR_mktag(3), HeadVar__2_2, (MR_Integer) 5))));
                MR_Integer Var_427 = ((MR_Integer) ((MR_hl_field(MR_mktag(3), HeadVar__2_2, (MR_Integer) 4))));
                MR_Integer Var_428 = ((MR_Integer) ((MR_hl_field(MR_mktag(3), HeadVar__2_2, (MR_Integer) 3))));
                MR_String Var_429 = ((MR_String) ((MR_hl_field(MR_mktag(3), HeadVar__2_2, (MR_Integer) 2))));
                MR_Word Var_430 = ((MR_Word) ((MR_hl_field(MR_mktag(3), HeadVar__2_2, (MR_Integer) 1))));

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
                    switch (((MR_Integer) ((MR_hl_field(MR_mktag(3), HeadVar__3_3, (MR_Integer) 0))))) {
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
                          MR_Word ArgY1_216 = ((MR_Word) ((MR_hl_field(MR_mktag(3), HeadVar__3_3, (MR_Integer) 1))));
                          MR_String ArgY2_219 = ((MR_String) ((MR_hl_field(MR_mktag(3), HeadVar__3_3, (MR_Integer) 2))));
                          MR_Integer ArgY3_222 = ((MR_Integer) ((MR_hl_field(MR_mktag(3), HeadVar__3_3, (MR_Integer) 3))));
                          MR_Integer ArgY4_225 = ((MR_Integer) ((MR_hl_field(MR_mktag(3), HeadVar__3_3, (MR_Integer) 4))));
                          MR_Integer ArgY5_228 = ((MR_Integer) ((MR_hl_field(MR_mktag(3), HeadVar__3_3, (MR_Integer) 5))));
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
                MR_Integer Var_432 = ((MR_Integer) ((MR_hl_field(MR_mktag(3), HeadVar__2_2, (MR_Integer) 3))));
                MR_String Var_433 = ((MR_String) ((MR_hl_field(MR_mktag(3), HeadVar__2_2, (MR_Integer) 2))));
                MR_Word Var_434 = ((MR_Word) ((MR_hl_field(MR_mktag(3), HeadVar__2_2, (MR_Integer) 1))));

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
                    switch (((MR_Integer) ((MR_hl_field(MR_mktag(3), HeadVar__3_3, (MR_Integer) 0))))) {
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
                          MR_Word ArgY1_287 = ((MR_Word) ((MR_hl_field(MR_mktag(3), HeadVar__3_3, (MR_Integer) 1))));
                          MR_String ArgY2_290 = ((MR_String) ((MR_hl_field(MR_mktag(3), HeadVar__3_3, (MR_Integer) 2))));
                          MR_Integer ArgY3_293 = ((MR_Integer) ((MR_hl_field(MR_mktag(3), HeadVar__3_3, (MR_Integer) 3))));
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
                MR_String Var_416 = ((MR_String) ((MR_hl_field(MR_mktag(3), HeadVar__2_2, (MR_Integer) 3))));
                MR_Word Var_417 = ((MR_Word) ((MR_hl_field(MR_mktag(3), HeadVar__2_2, (MR_Integer) 2))));
                MR_Word Var_418 = ((MR_Word) ((MR_hl_field(MR_mktag(3), HeadVar__2_2, (MR_Integer) 1))));

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
                    switch (((MR_Integer) ((MR_hl_field(MR_mktag(3), HeadVar__3_3, (MR_Integer) 0))))) {
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
                          MR_Word ArgY1_344 = ((MR_Word) ((MR_hl_field(MR_mktag(3), HeadVar__3_3, (MR_Integer) 1))));
                          MR_Word ArgY2_347 = ((MR_Word) ((MR_hl_field(MR_mktag(3), HeadVar__3_3, (MR_Integer) 2))));
                          MR_String ArgY3_350 = ((MR_String) ((MR_hl_field(MR_mktag(3), HeadVar__3_3, (MR_Integer) 3))));
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
}

void MR_CALL 
bytecode_backend__bytecode____Compare____byte_cons_tag_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3)
{
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
              switch (((MR_Integer) ((MR_hl_field(MR_mktag(3), HeadVar__3_3, (MR_Integer) 0))))) {
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
            MR_Integer Var_79 = ((MR_Integer) ((MR_hl_field(MR_mktag(1), HeadVar__2_2, (MR_Integer) 0))));

            switch (MR_tag((MR_Word) HeadVar__3_3)) {
              default: /*NOTREACHED*/ MR_assert(0);
              case (MR_Integer) 0:
                *HeadVar__1_1 = (MR_Integer) 2;
                break;
              case (MR_Integer) 1:
                {
                  MR_Integer ArgY1_12 = ((MR_Integer) ((MR_hl_field(MR_mktag(1), HeadVar__3_3, (MR_Integer) 0))));

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
                switch (((MR_Integer) ((MR_hl_field(MR_mktag(3), HeadVar__3_3, (MR_Integer) 0))))) {
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
            MR_Integer Var_77 = ((MR_Integer) ((MR_hl_field(MR_mktag(2), HeadVar__2_2, (MR_Integer) 1))));
            MR_Integer Var_78 = ((MR_Integer) ((MR_hl_field(MR_mktag(2), HeadVar__2_2, (MR_Integer) 0))));

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
                  MR_Integer ArgY1_27 = ((MR_Integer) ((MR_hl_field(MR_mktag(2), HeadVar__3_3, (MR_Integer) 0))));
                  MR_Integer ArgY2_30 = ((MR_Integer) ((MR_hl_field(MR_mktag(2), HeadVar__3_3, (MR_Integer) 1))));
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
                switch (((MR_Integer) ((MR_hl_field(MR_mktag(3), HeadVar__3_3, (MR_Integer) 0))))) {
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
          switch (((MR_Integer) ((MR_hl_field(MR_mktag(3), HeadVar__2_2, (MR_Integer) 0))))) {
            default: /*NOTREACHED*/ MR_assert(0);
            case (MR_Integer) 0:
              {
                MR_Integer Var_75 = ((MR_Integer) ((MR_hl_field(MR_mktag(3), HeadVar__2_2, (MR_Integer) 2))));
                MR_Integer Var_76 = ((MR_Integer) ((MR_hl_field(MR_mktag(3), HeadVar__2_2, (MR_Integer) 1))));

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
                    switch (((MR_Integer) ((MR_hl_field(MR_mktag(3), HeadVar__3_3, (MR_Integer) 0))))) {
                      default: /*NOTREACHED*/ MR_assert(0);
                      case (MR_Integer) 0:
                        {
                          MR_Integer ArgY1_48 = ((MR_Integer) ((MR_hl_field(MR_mktag(3), HeadVar__3_3, (MR_Integer) 1))));
                          MR_Integer ArgY2_51 = ((MR_Integer) ((MR_hl_field(MR_mktag(3), HeadVar__3_3, (MR_Integer) 2))));
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
                MR_Integer Var_74 = ((MR_Integer) ((MR_hl_field(MR_mktag(3), HeadVar__2_2, (MR_Integer) 1))));

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
                    switch (((MR_Integer) ((MR_hl_field(MR_mktag(3), HeadVar__3_3, (MR_Integer) 0))))) {
                      default: /*NOTREACHED*/ MR_assert(0);
                      case (MR_Integer) 0:
                        *HeadVar__1_1 = (MR_Integer) 2;
                        break;
                      case (MR_Integer) 1:
                        {
                          MR_Integer ArgY1_65 = ((MR_Integer) ((MR_hl_field(MR_mktag(3), HeadVar__3_3, (MR_Integer) 1))));

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
      switch (((MR_Integer) ((MR_hl_field(MR_mktag(3), HeadVar__1_1, (MR_Integer) 0))))) {
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
            MR_String ArgX1_3 = ((MR_String) ((MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 0))));
            MR_String ArgY1_4;
            MR_Integer ArgX2_5 = ((MR_Integer) ((MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 1))));
            MR_Integer ArgY2_6;
            MR_Integer ArgX3_7 = ((MR_Integer) ((MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 2))));
            MR_Integer ArgY3_8;
            MR_Integer ArgX4_9 = ((MR_Integer) ((MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 3))));
            MR_Integer ArgY4_10;

            succeeded = ((MR_tag((MR_Word) HeadVar__2_2)) == (MR_Integer) 1);
            if (succeeded)
            {
              ArgY1_4 = ((MR_String) ((MR_hl_field(MR_mktag(1), HeadVar__2_2, (MR_Integer) 0))));
              ArgY2_6 = ((MR_Integer) ((MR_hl_field(MR_mktag(1), HeadVar__2_2, (MR_Integer) 1))));
              ArgY3_8 = ((MR_Integer) ((MR_hl_field(MR_mktag(1), HeadVar__2_2, (MR_Integer) 2))));
              ArgY4_10 = ((MR_Integer) ((MR_hl_field(MR_mktag(1), HeadVar__2_2, (MR_Integer) 3))));
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
            MR_Integer ArgX1_13 = ((MR_Integer) ((MR_hl_field(MR_mktag(2), HeadVar__1_1, (MR_Integer) 0))));
            MR_Integer ArgY1_14;
            MR_Word ArgX2_15 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(2), HeadVar__1_1, (MR_Integer) 1))) & (MR_Integer) 7);
            MR_Word ArgY2_16;
            MR_Integer ArgX3_17 = ((MR_Integer) ((MR_hl_field(MR_mktag(2), HeadVar__1_1, (MR_Integer) 2))));
            MR_Integer ArgY3_18;
            MR_Integer ArgX4_19 = ((MR_Integer) ((MR_hl_field(MR_mktag(2), HeadVar__1_1, (MR_Integer) 3))));
            MR_Integer ArgY4_20;
            MR_Integer ArgX5_21 = ((MR_Integer) ((MR_hl_field(MR_mktag(2), HeadVar__1_1, (MR_Integer) 4))));
            MR_Integer ArgY5_22;
            MR_Word ArgX6_23 = ((MR_Word) ((MR_hl_field(MR_mktag(2), HeadVar__1_1, (MR_Integer) 5))));
            MR_Word ArgY6_24;

            succeeded = ((MR_tag((MR_Word) HeadVar__2_2)) == (MR_Integer) 2);
            if (succeeded)
            {
              ArgY1_14 = ((MR_Integer) ((MR_hl_field(MR_mktag(2), HeadVar__2_2, (MR_Integer) 0))));
              ArgY2_16 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(2), HeadVar__2_2, (MR_Integer) 1))) & (MR_Integer) 7);
              ArgY3_18 = ((MR_Integer) ((MR_hl_field(MR_mktag(2), HeadVar__2_2, (MR_Integer) 2))));
              ArgY4_20 = ((MR_Integer) ((MR_hl_field(MR_mktag(2), HeadVar__2_2, (MR_Integer) 3))));
              ArgY5_22 = ((MR_Integer) ((MR_hl_field(MR_mktag(2), HeadVar__2_2, (MR_Integer) 4))));
              ArgY6_24 = ((MR_Word) ((MR_hl_field(MR_mktag(2), HeadVar__2_2, (MR_Integer) 5))));
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
          switch (((MR_Integer) ((MR_hl_field(MR_mktag(3), HeadVar__1_1, (MR_Integer) 0))))) {
            default: /*NOTREACHED*/ MR_assert(0);
            case (MR_Integer) 0:
              {
                MR_Integer ArgX1_27 = ((MR_Integer) ((MR_hl_field(MR_mktag(3), HeadVar__1_1, (MR_Integer) 1))));
                MR_Integer ArgY1_28;

                succeeded = ((((MR_tag((MR_Word) HeadVar__2_2)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(MR_mktag(3), HeadVar__2_2, (MR_Integer) 0)))) == (MR_Integer) 0)));
                if (succeeded)
                {
                  ArgY1_28 = ((MR_Integer) ((MR_hl_field(MR_mktag(3), HeadVar__2_2, (MR_Integer) 1))));
                  succeeded = (ArgX1_27 == ArgY1_28);
                }
              }
              break;
            case (MR_Integer) 1:
              {
                MR_Integer ArgX1_29 = ((MR_Integer) ((MR_hl_field(MR_mktag(3), HeadVar__1_1, (MR_Integer) 1))));
                MR_Integer ArgY1_30;

                succeeded = ((((MR_tag((MR_Word) HeadVar__2_2)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(MR_mktag(3), HeadVar__2_2, (MR_Integer) 0)))) == (MR_Integer) 1)));
                if (succeeded)
                {
                  ArgY1_30 = ((MR_Integer) ((MR_hl_field(MR_mktag(3), HeadVar__2_2, (MR_Integer) 1))));
                  succeeded = (ArgX1_29 == ArgY1_30);
                }
              }
              break;
            case (MR_Integer) 2:
              {
                MR_Integer ArgX1_33 = ((MR_Integer) ((MR_hl_field(MR_mktag(3), HeadVar__1_1, (MR_Integer) 1))));
                MR_Integer ArgY1_34;

                succeeded = ((((MR_tag((MR_Word) HeadVar__2_2)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(MR_mktag(3), HeadVar__2_2, (MR_Integer) 0)))) == (MR_Integer) 2)));
                if (succeeded)
                {
                  ArgY1_34 = ((MR_Integer) ((MR_hl_field(MR_mktag(3), HeadVar__2_2, (MR_Integer) 1))));
                  succeeded = (ArgX1_33 == ArgY1_34);
                }
              }
              break;
            case (MR_Integer) 3:
              {
                MR_Integer ArgX1_35 = ((MR_Integer) ((MR_hl_field(MR_mktag(3), HeadVar__1_1, (MR_Integer) 1))));
                MR_Integer ArgY1_36;

                succeeded = ((((MR_tag((MR_Word) HeadVar__2_2)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(MR_mktag(3), HeadVar__2_2, (MR_Integer) 0)))) == (MR_Integer) 3)));
                if (succeeded)
                {
                  ArgY1_36 = ((MR_Integer) ((MR_hl_field(MR_mktag(3), HeadVar__2_2, (MR_Integer) 1))));
                  succeeded = (ArgX1_35 == ArgY1_36);
                }
              }
              break;
            case (MR_Integer) 4:
              {
                MR_Integer ArgX1_37 = ((MR_Integer) ((MR_hl_field(MR_mktag(3), HeadVar__1_1, (MR_Integer) 1))));
                MR_Integer ArgY1_38;
                MR_Integer ArgX2_39 = ((MR_Integer) ((MR_hl_field(MR_mktag(3), HeadVar__1_1, (MR_Integer) 2))));
                MR_Integer ArgY2_40;

                succeeded = ((((MR_tag((MR_Word) HeadVar__2_2)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(MR_mktag(3), HeadVar__2_2, (MR_Integer) 0)))) == (MR_Integer) 4)));
                if (succeeded)
                {
                  ArgY1_38 = ((MR_Integer) ((MR_hl_field(MR_mktag(3), HeadVar__2_2, (MR_Integer) 1))));
                  ArgY2_40 = ((MR_Integer) ((MR_hl_field(MR_mktag(3), HeadVar__2_2, (MR_Integer) 2))));
                  succeeded = (ArgX1_37 == ArgY1_38);
                  if (succeeded)
                    succeeded = (ArgX2_39 == ArgY2_40);
                }
              }
              break;
            case (MR_Integer) 5:
              {
                MR_Word TypeInfo_187_187;
                MR_Word ArgX1_43 = ((MR_Word) ((MR_hl_field(MR_mktag(3), HeadVar__1_1, (MR_Integer) 1))));
                MR_Word ArgY1_44;
                MR_Word ArgX2_45 = ((MR_Word) ((MR_hl_field(MR_mktag(3), HeadVar__1_1, (MR_Integer) 2))));
                MR_Word ArgY2_46;
                MR_Integer ArgX3_47 = ((MR_Integer) ((MR_hl_field(MR_mktag(3), HeadVar__1_1, (MR_Integer) 3))));
                MR_Integer ArgY3_48;

                succeeded = ((((MR_tag((MR_Word) HeadVar__2_2)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(MR_mktag(3), HeadVar__2_2, (MR_Integer) 0)))) == (MR_Integer) 5)));
                if (succeeded)
                {
                  ArgY1_44 = ((MR_Word) ((MR_hl_field(MR_mktag(3), HeadVar__2_2, (MR_Integer) 1))));
                  ArgY2_46 = ((MR_Word) ((MR_hl_field(MR_mktag(3), HeadVar__2_2, (MR_Integer) 2))));
                  ArgY3_48 = ((MR_Integer) ((MR_hl_field(MR_mktag(3), HeadVar__2_2, (MR_Integer) 3))));
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
                MR_Integer ArgX1_49 = ((MR_Integer) ((MR_hl_field(MR_mktag(3), HeadVar__1_1, (MR_Integer) 1))));
                MR_Integer ArgY1_50;

                succeeded = ((((MR_tag((MR_Word) HeadVar__2_2)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(MR_mktag(3), HeadVar__2_2, (MR_Integer) 0)))) == (MR_Integer) 6)));
                if (succeeded)
                {
                  ArgY1_50 = ((MR_Integer) ((MR_hl_field(MR_mktag(3), HeadVar__2_2, (MR_Integer) 1))));
                  succeeded = (ArgX1_49 == ArgY1_50);
                }
              }
              break;
            case (MR_Integer) 7:
              {
                MR_Integer ArgX1_51 = ((MR_Integer) ((MR_hl_field(MR_mktag(3), HeadVar__1_1, (MR_Integer) 1))));
                MR_Integer ArgY1_52;
                MR_Integer ArgX2_53 = ((MR_Integer) ((MR_hl_field(MR_mktag(3), HeadVar__1_1, (MR_Integer) 2))));
                MR_Integer ArgY2_54;
                MR_Integer ArgX3_55 = ((MR_Integer) ((MR_hl_field(MR_mktag(3), HeadVar__1_1, (MR_Integer) 3))));
                MR_Integer ArgY3_56;

                succeeded = ((((MR_tag((MR_Word) HeadVar__2_2)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(MR_mktag(3), HeadVar__2_2, (MR_Integer) 0)))) == (MR_Integer) 7)));
                if (succeeded)
                {
                  ArgY1_52 = ((MR_Integer) ((MR_hl_field(MR_mktag(3), HeadVar__2_2, (MR_Integer) 1))));
                  ArgY2_54 = ((MR_Integer) ((MR_hl_field(MR_mktag(3), HeadVar__2_2, (MR_Integer) 2))));
                  ArgY3_56 = ((MR_Integer) ((MR_hl_field(MR_mktag(3), HeadVar__2_2, (MR_Integer) 3))));
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
                MR_Integer ArgX1_57 = ((MR_Integer) ((MR_hl_field(MR_mktag(3), HeadVar__1_1, (MR_Integer) 1))));
                MR_Integer ArgY1_58;

                succeeded = ((((MR_tag((MR_Word) HeadVar__2_2)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(MR_mktag(3), HeadVar__2_2, (MR_Integer) 0)))) == (MR_Integer) 8)));
                if (succeeded)
                {
                  ArgY1_58 = ((MR_Integer) ((MR_hl_field(MR_mktag(3), HeadVar__2_2, (MR_Integer) 1))));
                  succeeded = (ArgX1_57 == ArgY1_58);
                }
              }
              break;
            case (MR_Integer) 9:
              {
                MR_Integer ArgX1_59 = ((MR_Integer) ((MR_hl_field(MR_mktag(3), HeadVar__1_1, (MR_Integer) 1))));
                MR_Integer ArgY1_60;

                succeeded = ((((MR_tag((MR_Word) HeadVar__2_2)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(MR_mktag(3), HeadVar__2_2, (MR_Integer) 0)))) == (MR_Integer) 9)));
                if (succeeded)
                {
                  ArgY1_60 = ((MR_Integer) ((MR_hl_field(MR_mktag(3), HeadVar__2_2, (MR_Integer) 1))));
                  succeeded = (ArgX1_59 == ArgY1_60);
                }
              }
              break;
            case (MR_Integer) 10:
              {
                MR_Integer ArgX1_61 = ((MR_Integer) ((MR_hl_field(MR_mktag(3), HeadVar__1_1, (MR_Integer) 1))));
                MR_Integer ArgY1_62;

                succeeded = ((((MR_tag((MR_Word) HeadVar__2_2)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(MR_mktag(3), HeadVar__2_2, (MR_Integer) 0)))) == (MR_Integer) 10)));
                if (succeeded)
                {
                  ArgY1_62 = ((MR_Integer) ((MR_hl_field(MR_mktag(3), HeadVar__2_2, (MR_Integer) 1))));
                  succeeded = (ArgX1_61 == ArgY1_62);
                }
              }
              break;
            case (MR_Integer) 11:
              {
                MR_Integer ArgX1_65 = ((MR_Integer) ((MR_hl_field(MR_mktag(3), HeadVar__1_1, (MR_Integer) 1))));
                MR_Integer ArgY1_66;
                MR_Integer ArgX2_67 = ((MR_Integer) ((MR_hl_field(MR_mktag(3), HeadVar__1_1, (MR_Integer) 2))));
                MR_Integer ArgY2_68;

                succeeded = ((((MR_tag((MR_Word) HeadVar__2_2)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(MR_mktag(3), HeadVar__2_2, (MR_Integer) 0)))) == (MR_Integer) 11)));
                if (succeeded)
                {
                  ArgY1_66 = ((MR_Integer) ((MR_hl_field(MR_mktag(3), HeadVar__2_2, (MR_Integer) 1))));
                  ArgY2_68 = ((MR_Integer) ((MR_hl_field(MR_mktag(3), HeadVar__2_2, (MR_Integer) 2))));
                  succeeded = (ArgX1_65 == ArgY1_66);
                  if (succeeded)
                    succeeded = (ArgX2_67 == ArgY2_68);
                }
              }
              break;
            case (MR_Integer) 12:
              {
                MR_Integer ArgX1_69 = ((MR_Integer) ((MR_hl_field(MR_mktag(3), HeadVar__1_1, (MR_Integer) 1))));
                MR_Integer ArgY1_70;

                succeeded = ((((MR_tag((MR_Word) HeadVar__2_2)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(MR_mktag(3), HeadVar__2_2, (MR_Integer) 0)))) == (MR_Integer) 12)));
                if (succeeded)
                {
                  ArgY1_70 = ((MR_Integer) ((MR_hl_field(MR_mktag(3), HeadVar__2_2, (MR_Integer) 1))));
                  succeeded = (ArgX1_69 == ArgY1_70);
                }
              }
              break;
            case (MR_Integer) 13:
              {
                MR_Integer ArgX1_73 = ((MR_Integer) ((MR_hl_field(MR_mktag(3), HeadVar__1_1, (MR_Integer) 1))));
                MR_Integer ArgY1_74;

                succeeded = ((((MR_tag((MR_Word) HeadVar__2_2)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(MR_mktag(3), HeadVar__2_2, (MR_Integer) 0)))) == (MR_Integer) 13)));
                if (succeeded)
                {
                  ArgY1_74 = ((MR_Integer) ((MR_hl_field(MR_mktag(3), HeadVar__2_2, (MR_Integer) 1))));
                  succeeded = (ArgX1_73 == ArgY1_74);
                }
              }
              break;
            case (MR_Integer) 14:
              {
                MR_Integer ArgX1_75 = ((MR_Integer) ((MR_hl_field(MR_mktag(3), HeadVar__1_1, (MR_Integer) 1))));
                MR_Integer ArgY1_76;

                succeeded = ((((MR_tag((MR_Word) HeadVar__2_2)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(MR_mktag(3), HeadVar__2_2, (MR_Integer) 0)))) == (MR_Integer) 14)));
                if (succeeded)
                {
                  ArgY1_76 = ((MR_Integer) ((MR_hl_field(MR_mktag(3), HeadVar__2_2, (MR_Integer) 1))));
                  succeeded = (ArgX1_75 == ArgY1_76);
                }
              }
              break;
            case (MR_Integer) 15:
              {
                MR_Integer ArgX1_77 = ((MR_Integer) ((MR_hl_field(MR_mktag(3), HeadVar__1_1, (MR_Integer) 1))));
                MR_Integer ArgY1_78;
                MR_Integer ArgX2_79 = ((MR_Integer) ((MR_hl_field(MR_mktag(3), HeadVar__1_1, (MR_Integer) 2))));
                MR_Integer ArgY2_80;

                succeeded = ((((MR_tag((MR_Word) HeadVar__2_2)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(MR_mktag(3), HeadVar__2_2, (MR_Integer) 0)))) == (MR_Integer) 15)));
                if (succeeded)
                {
                  ArgY1_78 = ((MR_Integer) ((MR_hl_field(MR_mktag(3), HeadVar__2_2, (MR_Integer) 1))));
                  ArgY2_80 = ((MR_Integer) ((MR_hl_field(MR_mktag(3), HeadVar__2_2, (MR_Integer) 2))));
                  succeeded = (ArgX1_77 == ArgY1_78);
                  if (succeeded)
                    succeeded = (ArgX2_79 == ArgY2_80);
                }
              }
              break;
            case (MR_Integer) 16:
              {
                MR_Integer ArgX1_81 = ((MR_Integer) ((MR_hl_field(MR_mktag(3), HeadVar__1_1, (MR_Integer) 1))));
                MR_Integer ArgY1_82;
                MR_Integer ArgX2_83 = ((MR_Integer) ((MR_hl_field(MR_mktag(3), HeadVar__1_1, (MR_Integer) 2))));
                MR_Integer ArgY2_84;
                MR_Word ArgX3_85 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(3), HeadVar__1_1, (MR_Integer) 3))) & (MR_Integer) 7);
                MR_Word ArgY3_86;

                succeeded = ((((MR_tag((MR_Word) HeadVar__2_2)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(MR_mktag(3), HeadVar__2_2, (MR_Integer) 0)))) == (MR_Integer) 16)));
                if (succeeded)
                {
                  ArgY1_82 = ((MR_Integer) ((MR_hl_field(MR_mktag(3), HeadVar__2_2, (MR_Integer) 1))));
                  ArgY2_84 = ((MR_Integer) ((MR_hl_field(MR_mktag(3), HeadVar__2_2, (MR_Integer) 2))));
                  ArgY3_86 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(3), HeadVar__2_2, (MR_Integer) 3))) & (MR_Integer) 7);
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
                MR_Integer ArgX1_87 = ((MR_Integer) ((MR_hl_field(MR_mktag(3), HeadVar__1_1, (MR_Integer) 1))));
                MR_Integer ArgY1_88;
                MR_Word ArgX2_89 = ((MR_Word) ((MR_hl_field(MR_mktag(3), HeadVar__1_1, (MR_Integer) 2))));
                MR_Word ArgY2_90;
                MR_Word ArgX3_91 = ((MR_Word) ((MR_hl_field(MR_mktag(3), HeadVar__1_1, (MR_Integer) 3))));
                MR_Word ArgY3_92;

                succeeded = ((((MR_tag((MR_Word) HeadVar__2_2)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(MR_mktag(3), HeadVar__2_2, (MR_Integer) 0)))) == (MR_Integer) 17)));
                if (succeeded)
                {
                  ArgY1_88 = ((MR_Integer) ((MR_hl_field(MR_mktag(3), HeadVar__2_2, (MR_Integer) 1))));
                  ArgY2_90 = ((MR_Word) ((MR_hl_field(MR_mktag(3), HeadVar__2_2, (MR_Integer) 2))));
                  ArgY3_92 = ((MR_Word) ((MR_hl_field(MR_mktag(3), HeadVar__2_2, (MR_Integer) 3))));
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
                MR_Integer ArgX1_93 = ((MR_Integer) ((MR_hl_field(MR_mktag(3), HeadVar__1_1, (MR_Integer) 1))));
                MR_Integer ArgY1_94;
                MR_Word ArgX2_95 = ((MR_Word) ((MR_hl_field(MR_mktag(3), HeadVar__1_1, (MR_Integer) 2))));
                MR_Word ArgY2_96;
                MR_Word ArgX3_97 = ((MR_Word) ((MR_hl_field(MR_mktag(3), HeadVar__1_1, (MR_Integer) 3))));
                MR_Word ArgY3_98;

                succeeded = ((((MR_tag((MR_Word) HeadVar__2_2)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(MR_mktag(3), HeadVar__2_2, (MR_Integer) 0)))) == (MR_Integer) 18)));
                if (succeeded)
                {
                  ArgY1_94 = ((MR_Integer) ((MR_hl_field(MR_mktag(3), HeadVar__2_2, (MR_Integer) 1))));
                  ArgY2_96 = ((MR_Word) ((MR_hl_field(MR_mktag(3), HeadVar__2_2, (MR_Integer) 2))));
                  ArgY3_98 = ((MR_Word) ((MR_hl_field(MR_mktag(3), HeadVar__2_2, (MR_Integer) 3))));
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
                MR_Integer ArgX1_99 = ((MR_Integer) ((MR_hl_field(MR_mktag(3), HeadVar__1_1, (MR_Integer) 1))));
                MR_Integer ArgY1_100;
                MR_Word ArgX2_101 = ((MR_Word) ((MR_hl_field(MR_mktag(3), HeadVar__1_1, (MR_Integer) 2))));
                MR_Word ArgY2_102;
                MR_Word ArgX3_103 = ((MR_Word) ((MR_hl_field(MR_mktag(3), HeadVar__1_1, (MR_Integer) 3))));
                MR_Word ArgY3_104;

                succeeded = ((((MR_tag((MR_Word) HeadVar__2_2)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(MR_mktag(3), HeadVar__2_2, (MR_Integer) 0)))) == (MR_Integer) 19)));
                if (succeeded)
                {
                  ArgY1_100 = ((MR_Integer) ((MR_hl_field(MR_mktag(3), HeadVar__2_2, (MR_Integer) 1))));
                  ArgY2_102 = ((MR_Word) ((MR_hl_field(MR_mktag(3), HeadVar__2_2, (MR_Integer) 2))));
                  ArgY3_104 = ((MR_Word) ((MR_hl_field(MR_mktag(3), HeadVar__2_2, (MR_Integer) 3))));
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
                MR_Integer ArgX1_105 = ((MR_Integer) ((MR_hl_field(MR_mktag(3), HeadVar__1_1, (MR_Integer) 1))));
                MR_Integer ArgY1_106;
                MR_Word ArgX2_107 = ((MR_Word) ((MR_hl_field(MR_mktag(3), HeadVar__1_1, (MR_Integer) 2))));
                MR_Word ArgY2_108;
                MR_Word ArgX3_109 = ((MR_Word) ((MR_hl_field(MR_mktag(3), HeadVar__1_1, (MR_Integer) 3))));
                MR_Word ArgY3_110;

                succeeded = ((((MR_tag((MR_Word) HeadVar__2_2)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(MR_mktag(3), HeadVar__2_2, (MR_Integer) 0)))) == (MR_Integer) 20)));
                if (succeeded)
                {
                  ArgY1_106 = ((MR_Integer) ((MR_hl_field(MR_mktag(3), HeadVar__2_2, (MR_Integer) 1))));
                  ArgY2_108 = ((MR_Word) ((MR_hl_field(MR_mktag(3), HeadVar__2_2, (MR_Integer) 2))));
                  ArgY3_110 = ((MR_Word) ((MR_hl_field(MR_mktag(3), HeadVar__2_2, (MR_Integer) 3))));
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
                MR_Integer ArgX2_113 = ((MR_Integer) ((MR_hl_field(MR_mktag(3), HeadVar__1_1, (MR_Integer) 2))));
                MR_Integer ArgY2_114;
                MR_Integer ArgX3_115 = ((MR_Integer) ((MR_hl_field(MR_mktag(3), HeadVar__1_1, (MR_Integer) 3))));
                MR_Integer ArgY3_116;

                succeeded = ((((MR_tag((MR_Word) HeadVar__2_2)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(MR_mktag(3), HeadVar__2_2, (MR_Integer) 0)))) == (MR_Integer) 21)));
                if (succeeded)
                {
                  ArgY2_114 = ((MR_Integer) ((MR_hl_field(MR_mktag(3), HeadVar__2_2, (MR_Integer) 2))));
                  ArgY3_116 = ((MR_Integer) ((MR_hl_field(MR_mktag(3), HeadVar__2_2, (MR_Integer) 3))));
                  succeeded = (ArgX2_113 == ArgY2_114);
                  if (succeeded)
                    succeeded = (ArgX3_115 == ArgY3_116);
                }
              }
              break;
            case (MR_Integer) 22:
              {
                MR_Integer ArgX2_119 = ((MR_Integer) ((MR_hl_field(MR_mktag(3), HeadVar__1_1, (MR_Integer) 2))));
                MR_Integer ArgY2_120;
                MR_Integer ArgX3_121 = ((MR_Integer) ((MR_hl_field(MR_mktag(3), HeadVar__1_1, (MR_Integer) 3))));
                MR_Integer ArgY3_122;

                succeeded = ((((MR_tag((MR_Word) HeadVar__2_2)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(MR_mktag(3), HeadVar__2_2, (MR_Integer) 0)))) == (MR_Integer) 22)));
                if (succeeded)
                {
                  ArgY2_120 = ((MR_Integer) ((MR_hl_field(MR_mktag(3), HeadVar__2_2, (MR_Integer) 2))));
                  ArgY3_122 = ((MR_Integer) ((MR_hl_field(MR_mktag(3), HeadVar__2_2, (MR_Integer) 3))));
                  succeeded = (ArgX2_119 == ArgY2_120);
                  if (succeeded)
                    succeeded = (ArgX3_121 == ArgY3_122);
                }
              }
              break;
            case (MR_Integer) 23:
              {
                MR_Word ArgX1_123 = ((MR_Word) ((MR_hl_field(MR_mktag(3), HeadVar__1_1, (MR_Integer) 1))));
                MR_Word ArgY1_124;
                MR_String ArgX2_125 = ((MR_String) ((MR_hl_field(MR_mktag(3), HeadVar__1_1, (MR_Integer) 2))));
                MR_String ArgY2_126;
                MR_Integer ArgX3_127 = ((MR_Integer) ((MR_hl_field(MR_mktag(3), HeadVar__1_1, (MR_Integer) 3))));
                MR_Integer ArgY3_128;
                MR_Integer ArgX4_129 = ((MR_Integer) ((MR_hl_field(MR_mktag(3), HeadVar__1_1, (MR_Integer) 4))));
                MR_Integer ArgY4_130;
                MR_Integer ArgX5_131 = ((MR_Integer) ((MR_hl_field(MR_mktag(3), HeadVar__1_1, (MR_Integer) 5))));
                MR_Integer ArgY5_132;

                succeeded = ((((MR_tag((MR_Word) HeadVar__2_2)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(MR_mktag(3), HeadVar__2_2, (MR_Integer) 0)))) == (MR_Integer) 23)));
                if (succeeded)
                {
                  ArgY1_124 = ((MR_Word) ((MR_hl_field(MR_mktag(3), HeadVar__2_2, (MR_Integer) 1))));
                  ArgY2_126 = ((MR_String) ((MR_hl_field(MR_mktag(3), HeadVar__2_2, (MR_Integer) 2))));
                  ArgY3_128 = ((MR_Integer) ((MR_hl_field(MR_mktag(3), HeadVar__2_2, (MR_Integer) 3))));
                  ArgY4_130 = ((MR_Integer) ((MR_hl_field(MR_mktag(3), HeadVar__2_2, (MR_Integer) 4))));
                  ArgY5_132 = ((MR_Integer) ((MR_hl_field(MR_mktag(3), HeadVar__2_2, (MR_Integer) 5))));
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
                MR_Integer ArgX1_133 = ((MR_Integer) ((MR_hl_field(MR_mktag(3), HeadVar__1_1, (MR_Integer) 1))));
                MR_Integer ArgY1_134;
                MR_Integer ArgX2_135 = ((MR_Integer) ((MR_hl_field(MR_mktag(3), HeadVar__1_1, (MR_Integer) 2))));
                MR_Integer ArgY2_136;
                MR_Integer ArgX3_137 = ((MR_Integer) ((MR_hl_field(MR_mktag(3), HeadVar__1_1, (MR_Integer) 3))));
                MR_Integer ArgY3_138;
                MR_Word ArgX4_139 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(3), HeadVar__1_1, (MR_Integer) 4))) & (MR_Integer) 7);
                MR_Word ArgY4_140;

                succeeded = ((((MR_tag((MR_Word) HeadVar__2_2)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(MR_mktag(3), HeadVar__2_2, (MR_Integer) 0)))) == (MR_Integer) 24)));
                if (succeeded)
                {
                  ArgY1_134 = ((MR_Integer) ((MR_hl_field(MR_mktag(3), HeadVar__2_2, (MR_Integer) 1))));
                  ArgY2_136 = ((MR_Integer) ((MR_hl_field(MR_mktag(3), HeadVar__2_2, (MR_Integer) 2))));
                  ArgY3_138 = ((MR_Integer) ((MR_hl_field(MR_mktag(3), HeadVar__2_2, (MR_Integer) 3))));
                  ArgY4_140 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(3), HeadVar__2_2, (MR_Integer) 4))) & (MR_Integer) 7);
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
                MR_Word ArgX1_141 = ((MR_Word) ((MR_hl_field(MR_mktag(3), HeadVar__1_1, (MR_Integer) 1))));
                MR_Word ArgY1_142;
                MR_Word ArgX2_143 = ((MR_Word) ((MR_hl_field(MR_mktag(3), HeadVar__1_1, (MR_Integer) 2))));
                MR_Word ArgY2_144;
                MR_Word ArgX3_145 = ((MR_Word) ((MR_hl_field(MR_mktag(3), HeadVar__1_1, (MR_Integer) 3))));
                MR_Word ArgY3_146;
                MR_Integer ArgX4_147 = ((MR_Integer) ((MR_hl_field(MR_mktag(3), HeadVar__1_1, (MR_Integer) 4))));
                MR_Integer ArgY4_148;

                succeeded = ((((MR_tag((MR_Word) HeadVar__2_2)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(MR_mktag(3), HeadVar__2_2, (MR_Integer) 0)))) == (MR_Integer) 25)));
                if (succeeded)
                {
                  ArgY1_142 = ((MR_Word) ((MR_hl_field(MR_mktag(3), HeadVar__2_2, (MR_Integer) 1))));
                  ArgY2_144 = ((MR_Word) ((MR_hl_field(MR_mktag(3), HeadVar__2_2, (MR_Integer) 2))));
                  ArgY3_146 = ((MR_Word) ((MR_hl_field(MR_mktag(3), HeadVar__2_2, (MR_Integer) 3))));
                  ArgY4_148 = ((MR_Integer) ((MR_hl_field(MR_mktag(3), HeadVar__2_2, (MR_Integer) 4))));
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
                MR_Word ArgX1_149 = ((MR_Word) ((MR_hl_field(MR_mktag(3), HeadVar__1_1, (MR_Integer) 1))));
                MR_Word ArgY1_150;
                MR_Word ArgX2_151 = ((MR_Word) ((MR_hl_field(MR_mktag(3), HeadVar__1_1, (MR_Integer) 2))));
                MR_Word ArgY2_152;
                MR_Integer ArgX3_153 = ((MR_Integer) ((MR_hl_field(MR_mktag(3), HeadVar__1_1, (MR_Integer) 3))));
                MR_Integer ArgY3_154;

                succeeded = ((((MR_tag((MR_Word) HeadVar__2_2)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(MR_mktag(3), HeadVar__2_2, (MR_Integer) 0)))) == (MR_Integer) 26)));
                if (succeeded)
                {
                  ArgY1_150 = ((MR_Word) ((MR_hl_field(MR_mktag(3), HeadVar__2_2, (MR_Integer) 1))));
                  ArgY2_152 = ((MR_Word) ((MR_hl_field(MR_mktag(3), HeadVar__2_2, (MR_Integer) 2))));
                  ArgY3_154 = ((MR_Integer) ((MR_hl_field(MR_mktag(3), HeadVar__2_2, (MR_Integer) 3))));
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
                MR_Word ArgX1_155 = ((MR_Word) ((MR_hl_field(MR_mktag(3), HeadVar__1_1, (MR_Integer) 1))));
                MR_Word ArgY1_156;
                MR_Word ArgX2_157 = ((MR_Word) ((MR_hl_field(MR_mktag(3), HeadVar__1_1, (MR_Integer) 2))));
                MR_Word ArgY2_158;
                MR_Word ArgX3_159 = ((MR_Word) ((MR_hl_field(MR_mktag(3), HeadVar__1_1, (MR_Integer) 3))));
                MR_Word ArgY3_160;

                succeeded = ((((MR_tag((MR_Word) HeadVar__2_2)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(MR_mktag(3), HeadVar__2_2, (MR_Integer) 0)))) == (MR_Integer) 27)));
                if (succeeded)
                {
                  ArgY1_156 = ((MR_Word) ((MR_hl_field(MR_mktag(3), HeadVar__2_2, (MR_Integer) 1))));
                  ArgY2_158 = ((MR_Word) ((MR_hl_field(MR_mktag(3), HeadVar__2_2, (MR_Integer) 2))));
                  ArgY3_160 = ((MR_Word) ((MR_hl_field(MR_mktag(3), HeadVar__2_2, (MR_Integer) 3))));
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
                MR_Word ArgX1_161 = ((MR_Word) ((MR_hl_field(MR_mktag(3), HeadVar__1_1, (MR_Integer) 1))));
                MR_Word ArgY1_162;
                MR_Word ArgX2_163 = ((MR_Word) ((MR_hl_field(MR_mktag(3), HeadVar__1_1, (MR_Integer) 2))));
                MR_Word ArgY2_164;

                succeeded = ((((MR_tag((MR_Word) HeadVar__2_2)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(MR_mktag(3), HeadVar__2_2, (MR_Integer) 0)))) == (MR_Integer) 28)));
                if (succeeded)
                {
                  ArgY1_162 = ((MR_Word) ((MR_hl_field(MR_mktag(3), HeadVar__2_2, (MR_Integer) 1))));
                  ArgY2_164 = ((MR_Word) ((MR_hl_field(MR_mktag(3), HeadVar__2_2, (MR_Integer) 2))));
                  succeeded = backend_libs__builtin_ops____Unify____unary_op_0_0(ArgX1_161, ArgY1_162);
                  if (succeeded)
                    succeeded = bytecode_backend__bytecode____Unify____byte_arg_0_0(ArgX2_163, ArgY2_164);
                }
              }
              break;
            case (MR_Integer) 29:
              {
                MR_Integer ArgX1_171 = ((MR_Integer) ((MR_hl_field(MR_mktag(3), HeadVar__1_1, (MR_Integer) 1))));
                MR_Integer ArgY1_172;

                succeeded = ((((MR_tag((MR_Word) HeadVar__2_2)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(MR_mktag(3), HeadVar__2_2, (MR_Integer) 0)))) == (MR_Integer) 29)));
                if (succeeded)
                {
                  ArgY1_172 = ((MR_Integer) ((MR_hl_field(MR_mktag(3), HeadVar__2_2, (MR_Integer) 1))));
                  succeeded = (ArgX1_171 == ArgY1_172);
                }
              }
              break;
          }
          break;
      }
    return succeeded;
  }
}

MR_bool MR_CALL 
bytecode_backend__bytecode____Unify____byte_cons_id_0_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2)
{
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
            MR_Word ArgX1_3 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 0))));
            MR_Word ArgY1_4;
            MR_String ArgX2_5 = ((MR_String) ((MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 1))));
            MR_String ArgY2_6;
            MR_Integer ArgX3_7 = ((MR_Integer) ((MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 2))));
            MR_Integer ArgY3_8;
            MR_Word ArgX4_9 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 3))));
            MR_Word ArgY4_10;

            succeeded = ((MR_tag((MR_Word) HeadVar__2_2)) == (MR_Integer) 1);
            if (succeeded)
            {
              ArgY1_4 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__2_2, (MR_Integer) 0))));
              ArgY2_6 = ((MR_String) ((MR_hl_field(MR_mktag(1), HeadVar__2_2, (MR_Integer) 1))));
              ArgY3_8 = ((MR_Integer) ((MR_hl_field(MR_mktag(1), HeadVar__2_2, (MR_Integer) 2))));
              ArgY4_10 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__2_2, (MR_Integer) 3))));
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
            MR_Integer ArgX1_11 = ((MR_Integer) ((MR_hl_field(MR_mktag(2), HeadVar__1_1, (MR_Integer) 0))));
            MR_Integer ArgY1_12;

            succeeded = ((MR_tag((MR_Word) HeadVar__2_2)) == (MR_Integer) 2);
            if (succeeded)
            {
              ArgY1_12 = ((MR_Integer) ((MR_hl_field(MR_mktag(2), HeadVar__2_2, (MR_Integer) 0))));
              succeeded = (ArgX1_11 == ArgY1_12);
            }
          }
          break;
        case (MR_Integer) 3:
          switch (((MR_Integer) ((MR_hl_field(MR_mktag(3), HeadVar__1_1, (MR_Integer) 0))))) {
            default: /*NOTREACHED*/ MR_assert(0);
            case (MR_Integer) 0:
              {
                MR_String ArgX1_13 = ((MR_String) ((MR_hl_field(MR_mktag(3), HeadVar__1_1, (MR_Integer) 1))));
                MR_String ArgY1_14;

                succeeded = ((((MR_tag((MR_Word) HeadVar__2_2)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(MR_mktag(3), HeadVar__2_2, (MR_Integer) 0)))) == (MR_Integer) 0)));
                if (succeeded)
                {
                  ArgY1_14 = ((MR_String) ((MR_hl_field(MR_mktag(3), HeadVar__2_2, (MR_Integer) 1))));
                  succeeded = (strcmp(ArgX1_13, ArgY1_14) == 0);
                }
              }
              break;
            case (MR_Integer) 1:
              {
                MR_Float ArgX1_15 = MR_unbox_float((MR_hl_field(MR_mktag(3), HeadVar__1_1, (MR_Integer) 1)));
                MR_Float ArgY1_16;

                succeeded = ((((MR_tag((MR_Word) HeadVar__2_2)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(MR_mktag(3), HeadVar__2_2, (MR_Integer) 0)))) == (MR_Integer) 1)));
                if (succeeded)
                {
                  ArgY1_16 = MR_unbox_float((MR_hl_field(MR_mktag(3), HeadVar__2_2, (MR_Integer) 1)));
                  succeeded = (ArgX1_15 == ArgY1_16);
                }
              }
              break;
            case (MR_Integer) 2:
              {
                MR_Char ArgX1_17 = ((MR_Char) (MR_Word) (MR_hl_field(MR_mktag(3), HeadVar__1_1, (MR_Integer) 1)));
                MR_Char ArgY1_18;

                succeeded = ((((MR_tag((MR_Word) HeadVar__2_2)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(MR_mktag(3), HeadVar__2_2, (MR_Integer) 0)))) == (MR_Integer) 2)));
                if (succeeded)
                {
                  ArgY1_18 = ((MR_Char) (MR_Word) (MR_hl_field(MR_mktag(3), HeadVar__2_2, (MR_Integer) 1)));
                  succeeded = (ArgX1_17 == ArgY1_18);
                }
              }
              break;
            case (MR_Integer) 3:
              {
                MR_Word ArgX1_19 = ((MR_Word) ((MR_hl_field(MR_mktag(3), HeadVar__1_1, (MR_Integer) 1))));
                MR_Word ArgY1_20;
                MR_String ArgX2_21 = ((MR_String) ((MR_hl_field(MR_mktag(3), HeadVar__1_1, (MR_Integer) 2))));
                MR_String ArgY2_22;
                MR_Integer ArgX3_23 = ((MR_Integer) ((MR_hl_field(MR_mktag(3), HeadVar__1_1, (MR_Integer) 3))));
                MR_Integer ArgY3_24;
                MR_Integer ArgX4_25 = ((MR_Integer) ((MR_hl_field(MR_mktag(3), HeadVar__1_1, (MR_Integer) 4))));
                MR_Integer ArgY4_26;
                MR_Integer ArgX5_27 = ((MR_Integer) ((MR_hl_field(MR_mktag(3), HeadVar__1_1, (MR_Integer) 5))));
                MR_Integer ArgY5_28;

                succeeded = ((((MR_tag((MR_Word) HeadVar__2_2)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(MR_mktag(3), HeadVar__2_2, (MR_Integer) 0)))) == (MR_Integer) 3)));
                if (succeeded)
                {
                  ArgY1_20 = ((MR_Word) ((MR_hl_field(MR_mktag(3), HeadVar__2_2, (MR_Integer) 1))));
                  ArgY2_22 = ((MR_String) ((MR_hl_field(MR_mktag(3), HeadVar__2_2, (MR_Integer) 2))));
                  ArgY3_24 = ((MR_Integer) ((MR_hl_field(MR_mktag(3), HeadVar__2_2, (MR_Integer) 3))));
                  ArgY4_26 = ((MR_Integer) ((MR_hl_field(MR_mktag(3), HeadVar__2_2, (MR_Integer) 4))));
                  ArgY5_28 = ((MR_Integer) ((MR_hl_field(MR_mktag(3), HeadVar__2_2, (MR_Integer) 5))));
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
                MR_Word ArgX1_29 = ((MR_Word) ((MR_hl_field(MR_mktag(3), HeadVar__1_1, (MR_Integer) 1))));
                MR_Word ArgY1_30;
                MR_String ArgX2_31 = ((MR_String) ((MR_hl_field(MR_mktag(3), HeadVar__1_1, (MR_Integer) 2))));
                MR_String ArgY2_32;
                MR_Integer ArgX3_33 = ((MR_Integer) ((MR_hl_field(MR_mktag(3), HeadVar__1_1, (MR_Integer) 3))));
                MR_Integer ArgY3_34;

                succeeded = ((((MR_tag((MR_Word) HeadVar__2_2)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(MR_mktag(3), HeadVar__2_2, (MR_Integer) 0)))) == (MR_Integer) 4)));
                if (succeeded)
                {
                  ArgY1_30 = ((MR_Word) ((MR_hl_field(MR_mktag(3), HeadVar__2_2, (MR_Integer) 1))));
                  ArgY2_32 = ((MR_String) ((MR_hl_field(MR_mktag(3), HeadVar__2_2, (MR_Integer) 2))));
                  ArgY3_34 = ((MR_Integer) ((MR_hl_field(MR_mktag(3), HeadVar__2_2, (MR_Integer) 3))));
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
                MR_Word ArgX1_35 = ((MR_Word) ((MR_hl_field(MR_mktag(3), HeadVar__1_1, (MR_Integer) 1))));
                MR_Word ArgY1_36;
                MR_Word ArgX2_37 = ((MR_Word) ((MR_hl_field(MR_mktag(3), HeadVar__1_1, (MR_Integer) 2))));
                MR_Word ArgY2_38;
                MR_String ArgX3_39 = ((MR_String) ((MR_hl_field(MR_mktag(3), HeadVar__1_1, (MR_Integer) 3))));
                MR_String ArgY3_40;

                succeeded = ((((MR_tag((MR_Word) HeadVar__2_2)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(MR_mktag(3), HeadVar__2_2, (MR_Integer) 0)))) == (MR_Integer) 5)));
                if (succeeded)
                {
                  ArgY1_36 = ((MR_Word) ((MR_hl_field(MR_mktag(3), HeadVar__2_2, (MR_Integer) 1))));
                  ArgY2_38 = ((MR_Word) ((MR_hl_field(MR_mktag(3), HeadVar__2_2, (MR_Integer) 2))));
                  ArgY3_40 = ((MR_String) ((MR_hl_field(MR_mktag(3), HeadVar__2_2, (MR_Integer) 3))));
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
}

MR_bool MR_CALL 
bytecode_backend__bytecode____Unify____byte_cons_tag_0_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2)
{
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
            MR_Integer ArgX1_5 = ((MR_Integer) ((MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 0))));
            MR_Integer ArgY1_6;

            succeeded = ((MR_tag((MR_Word) HeadVar__2_2)) == (MR_Integer) 1);
            if (succeeded)
            {
              ArgY1_6 = ((MR_Integer) ((MR_hl_field(MR_mktag(1), HeadVar__2_2, (MR_Integer) 0))));
              succeeded = (ArgX1_5 == ArgY1_6);
            }
          }
          break;
        case (MR_Integer) 2:
          {
            MR_Integer ArgX1_7 = ((MR_Integer) ((MR_hl_field(MR_mktag(2), HeadVar__1_1, (MR_Integer) 0))));
            MR_Integer ArgY1_8;
            MR_Integer ArgX2_9 = ((MR_Integer) ((MR_hl_field(MR_mktag(2), HeadVar__1_1, (MR_Integer) 1))));
            MR_Integer ArgY2_10;

            succeeded = ((MR_tag((MR_Word) HeadVar__2_2)) == (MR_Integer) 2);
            if (succeeded)
            {
              ArgY1_8 = ((MR_Integer) ((MR_hl_field(MR_mktag(2), HeadVar__2_2, (MR_Integer) 0))));
              ArgY2_10 = ((MR_Integer) ((MR_hl_field(MR_mktag(2), HeadVar__2_2, (MR_Integer) 1))));
              succeeded = (ArgX1_7 == ArgY1_8);
              if (succeeded)
                succeeded = (ArgX2_9 == ArgY2_10);
            }
          }
          break;
        case (MR_Integer) 3:
          switch (((MR_Integer) ((MR_hl_field(MR_mktag(3), HeadVar__1_1, (MR_Integer) 0))))) {
            default: /*NOTREACHED*/ MR_assert(0);
            case (MR_Integer) 0:
              {
                MR_Integer ArgX1_11 = ((MR_Integer) ((MR_hl_field(MR_mktag(3), HeadVar__1_1, (MR_Integer) 1))));
                MR_Integer ArgY1_12;
                MR_Integer ArgX2_13 = ((MR_Integer) ((MR_hl_field(MR_mktag(3), HeadVar__1_1, (MR_Integer) 2))));
                MR_Integer ArgY2_14;

                succeeded = ((((MR_tag((MR_Word) HeadVar__2_2)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(MR_mktag(3), HeadVar__2_2, (MR_Integer) 0)))) == (MR_Integer) 0)));
                if (succeeded)
                {
                  ArgY1_12 = ((MR_Integer) ((MR_hl_field(MR_mktag(3), HeadVar__2_2, (MR_Integer) 1))));
                  ArgY2_14 = ((MR_Integer) ((MR_hl_field(MR_mktag(3), HeadVar__2_2, (MR_Integer) 2))));
                  succeeded = (ArgX1_11 == ArgY1_12);
                  if (succeeded)
                    succeeded = (ArgX2_13 == ArgY2_14);
                }
              }
              break;
            case (MR_Integer) 1:
              {
                MR_Integer ArgX1_15 = ((MR_Integer) ((MR_hl_field(MR_mktag(3), HeadVar__1_1, (MR_Integer) 1))));
                MR_Integer ArgY1_16;

                succeeded = ((((MR_tag((MR_Word) HeadVar__2_2)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(MR_mktag(3), HeadVar__2_2, (MR_Integer) 0)))) == (MR_Integer) 1)));
                if (succeeded)
                {
                  ArgY1_16 = ((MR_Integer) ((MR_hl_field(MR_mktag(3), HeadVar__2_2, (MR_Integer) 1))));
                  succeeded = (ArgX1_15 == ArgY1_16);
                }
              }
              break;
          }
          break;
      }
    return succeeded;
  }
}

void MR_CALL 
bytecode_backend__bytecode____Compare____byte_arg_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3)
{
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
            MR_Integer Var_317 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 0))));

            switch (MR_tag((MR_Word) HeadVar__3_3)) {
              default: /*NOTREACHED*/ MR_assert(0);
              case (MR_Integer) 0:
                {
                  MR_Integer ArgY1_5 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), HeadVar__3_3, (MR_Integer) 0))));

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
                switch (((MR_Integer) ((MR_hl_field(MR_mktag(3), HeadVar__3_3, (MR_Integer) 0))))) {
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
            MR_Integer Var_311 = ((MR_Integer) ((MR_hl_field(MR_mktag(1), HeadVar__2_2, (MR_Integer) 0))));

            switch (MR_tag((MR_Word) HeadVar__3_3)) {
              default: /*NOTREACHED*/ MR_assert(0);
              case (MR_Integer) 0:
                *HeadVar__1_1 = (MR_Integer) 2;
                break;
              case (MR_Integer) 1:
                {
                  MR_Integer ArgY1_31 = ((MR_Integer) ((MR_hl_field(MR_mktag(1), HeadVar__3_3, (MR_Integer) 0))));

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
                switch (((MR_Integer) ((MR_hl_field(MR_mktag(3), HeadVar__3_3, (MR_Integer) 0))))) {
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
            MR_Float Var_306 = MR_unbox_float((MR_hl_field(MR_mktag(2), HeadVar__2_2, (MR_Integer) 0)));

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
                  MR_Float ArgY1_57 = MR_unbox_float((MR_hl_field(MR_mktag(2), HeadVar__3_3, (MR_Integer) 0)));

                  mercury__private_builtin__builtin_compare_float_3_p_0(HeadVar__1_1, Var_306, ArgY1_57);
                }
                break;
              case (MR_Integer) 3:
                switch (((MR_Integer) ((MR_hl_field(MR_mktag(3), HeadVar__3_3, (MR_Integer) 0))))) {
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
          switch (((MR_Integer) ((MR_hl_field(MR_mktag(3), HeadVar__2_2, (MR_Integer) 0))))) {
            default: /*NOTREACHED*/ MR_assert(0);
            case (MR_Integer) 0:
              {
                MR_Unsigned Var_316 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(3), HeadVar__2_2, (MR_Integer) 1))));

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
                    switch (((MR_Integer) ((MR_hl_field(MR_mktag(3), HeadVar__3_3, (MR_Integer) 0))))) {
                      default: /*NOTREACHED*/ MR_assert(0);
                      case (MR_Integer) 0:
                        {
                          MR_Unsigned ArgY1_83 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(3), HeadVar__3_3, (MR_Integer) 1))));

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
                int8_t Var_310 = ((int8_t) (MR_Word) (MR_hl_field(MR_mktag(3), HeadVar__2_2, (MR_Integer) 1)));

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
                    switch (((MR_Integer) ((MR_hl_field(MR_mktag(3), HeadVar__3_3, (MR_Integer) 0))))) {
                      default: /*NOTREACHED*/ MR_assert(0);
                      case (MR_Integer) 0:
                        *HeadVar__1_1 = (MR_Integer) 2;
                        break;
                      case (MR_Integer) 1:
                        {
                          int8_t ArgY1_109 = ((int8_t) (MR_Word) (MR_hl_field(MR_mktag(3), HeadVar__3_3, (MR_Integer) 1)));

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
                uint8_t Var_315 = ((uint8_t) (MR_Word) (MR_hl_field(MR_mktag(3), HeadVar__2_2, (MR_Integer) 1)));

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
                    switch (((MR_Integer) ((MR_hl_field(MR_mktag(3), HeadVar__3_3, (MR_Integer) 0))))) {
                      default: /*NOTREACHED*/ MR_assert(0);
                      case (MR_Integer) 0:
                        *HeadVar__1_1 = (MR_Integer) 2;
                        break;
                      case (MR_Integer) 1:
                        *HeadVar__1_1 = (MR_Integer) 2;
                        break;
                      case (MR_Integer) 2:
                        {
                          uint8_t ArgY1_135 = ((uint8_t) (MR_Word) (MR_hl_field(MR_mktag(3), HeadVar__3_3, (MR_Integer) 1)));

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
                int16_t Var_307 = ((int16_t) (MR_Word) (MR_hl_field(MR_mktag(3), HeadVar__2_2, (MR_Integer) 1)));

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
                    switch (((MR_Integer) ((MR_hl_field(MR_mktag(3), HeadVar__3_3, (MR_Integer) 0))))) {
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
                          int16_t ArgY1_161 = ((int16_t) (MR_Word) (MR_hl_field(MR_mktag(3), HeadVar__3_3, (MR_Integer) 1)));

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
                uint16_t Var_312 = ((uint16_t) (MR_Word) (MR_hl_field(MR_mktag(3), HeadVar__2_2, (MR_Integer) 1)));

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
                    switch (((MR_Integer) ((MR_hl_field(MR_mktag(3), HeadVar__3_3, (MR_Integer) 0))))) {
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
                          uint16_t ArgY1_187 = ((uint16_t) (MR_Word) (MR_hl_field(MR_mktag(3), HeadVar__3_3, (MR_Integer) 1)));

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
                int32_t Var_308 = ((int32_t) (MR_Word) (MR_hl_field(MR_mktag(3), HeadVar__2_2, (MR_Integer) 1)));

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
                    switch (((MR_Integer) ((MR_hl_field(MR_mktag(3), HeadVar__3_3, (MR_Integer) 0))))) {
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
                          int32_t ArgY1_213 = ((int32_t) (MR_Word) (MR_hl_field(MR_mktag(3), HeadVar__3_3, (MR_Integer) 1)));

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
                uint32_t Var_313 = ((uint32_t) (MR_Word) (MR_hl_field(MR_mktag(3), HeadVar__2_2, (MR_Integer) 1)));

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
                    switch (((MR_Integer) ((MR_hl_field(MR_mktag(3), HeadVar__3_3, (MR_Integer) 0))))) {
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
                          uint32_t ArgY1_239 = ((uint32_t) (MR_Word) (MR_hl_field(MR_mktag(3), HeadVar__3_3, (MR_Integer) 1)));

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
                int64_t Var_309 = MR_unbox_int64((MR_hl_field(MR_mktag(3), HeadVar__2_2, (MR_Integer) 1)));

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
                    switch (((MR_Integer) ((MR_hl_field(MR_mktag(3), HeadVar__3_3, (MR_Integer) 0))))) {
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
                          int64_t ArgY1_265 = MR_unbox_int64((MR_hl_field(MR_mktag(3), HeadVar__3_3, (MR_Integer) 1)));

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
                uint64_t Var_314 = MR_unbox_uint64((MR_hl_field(MR_mktag(3), HeadVar__2_2, (MR_Integer) 1)));

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
                    switch (((MR_Integer) ((MR_hl_field(MR_mktag(3), HeadVar__3_3, (MR_Integer) 0))))) {
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
                          uint64_t ArgY1_291 = MR_unbox_uint64((MR_hl_field(MR_mktag(3), HeadVar__3_3, (MR_Integer) 1)));

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
}

MR_bool MR_CALL 
bytecode_backend__bytecode____Unify____byte_arg_0_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2)
{
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
            MR_Integer ArgX1_3 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), HeadVar__1_1, (MR_Integer) 0))));
            MR_Integer ArgY1_4;

            succeeded = ((MR_tag((MR_Word) HeadVar__2_2)) == (MR_Integer) 0);
            if (succeeded)
            {
              ArgY1_4 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 0))));
              succeeded = (ArgX1_3 == ArgY1_4);
            }
          }
          break;
        case (MR_Integer) 1:
          {
            MR_Integer ArgX1_5 = ((MR_Integer) ((MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 0))));
            MR_Integer ArgY1_6;

            succeeded = ((MR_tag((MR_Word) HeadVar__2_2)) == (MR_Integer) 1);
            if (succeeded)
            {
              ArgY1_6 = ((MR_Integer) ((MR_hl_field(MR_mktag(1), HeadVar__2_2, (MR_Integer) 0))));
              succeeded = (ArgX1_5 == ArgY1_6);
            }
          }
          break;
        case (MR_Integer) 2:
          {
            MR_Float ArgX1_7 = MR_unbox_float((MR_hl_field(MR_mktag(2), HeadVar__1_1, (MR_Integer) 0)));
            MR_Float ArgY1_8;

            succeeded = ((MR_tag((MR_Word) HeadVar__2_2)) == (MR_Integer) 2);
            if (succeeded)
            {
              ArgY1_8 = MR_unbox_float((MR_hl_field(MR_mktag(2), HeadVar__2_2, (MR_Integer) 0)));
              succeeded = (ArgX1_7 == ArgY1_8);
            }
          }
          break;
        case (MR_Integer) 3:
          switch (((MR_Integer) ((MR_hl_field(MR_mktag(3), HeadVar__1_1, (MR_Integer) 0))))) {
            default: /*NOTREACHED*/ MR_assert(0);
            case (MR_Integer) 0:
              {
                MR_Unsigned ArgX1_9 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(3), HeadVar__1_1, (MR_Integer) 1))));
                MR_Unsigned ArgY1_10;

                succeeded = ((((MR_tag((MR_Word) HeadVar__2_2)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(MR_mktag(3), HeadVar__2_2, (MR_Integer) 0)))) == (MR_Integer) 0)));
                if (succeeded)
                {
                  ArgY1_10 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(3), HeadVar__2_2, (MR_Integer) 1))));
                  succeeded = (ArgX1_9 == ArgY1_10);
                }
              }
              break;
            case (MR_Integer) 1:
              {
                int8_t ArgX1_11 = ((int8_t) (MR_Word) (MR_hl_field(MR_mktag(3), HeadVar__1_1, (MR_Integer) 1)));
                int8_t ArgY1_12;

                succeeded = ((((MR_tag((MR_Word) HeadVar__2_2)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(MR_mktag(3), HeadVar__2_2, (MR_Integer) 0)))) == (MR_Integer) 1)));
                if (succeeded)
                {
                  ArgY1_12 = ((int8_t) (MR_Word) (MR_hl_field(MR_mktag(3), HeadVar__2_2, (MR_Integer) 1)));
                  succeeded = (ArgX1_11 == ArgY1_12);
                }
              }
              break;
            case (MR_Integer) 2:
              {
                uint8_t ArgX1_13 = ((uint8_t) (MR_Word) (MR_hl_field(MR_mktag(3), HeadVar__1_1, (MR_Integer) 1)));
                uint8_t ArgY1_14;

                succeeded = ((((MR_tag((MR_Word) HeadVar__2_2)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(MR_mktag(3), HeadVar__2_2, (MR_Integer) 0)))) == (MR_Integer) 2)));
                if (succeeded)
                {
                  ArgY1_14 = ((uint8_t) (MR_Word) (MR_hl_field(MR_mktag(3), HeadVar__2_2, (MR_Integer) 1)));
                  succeeded = (ArgX1_13 == ArgY1_14);
                }
              }
              break;
            case (MR_Integer) 3:
              {
                int16_t ArgX1_15 = ((int16_t) (MR_Word) (MR_hl_field(MR_mktag(3), HeadVar__1_1, (MR_Integer) 1)));
                int16_t ArgY1_16;

                succeeded = ((((MR_tag((MR_Word) HeadVar__2_2)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(MR_mktag(3), HeadVar__2_2, (MR_Integer) 0)))) == (MR_Integer) 3)));
                if (succeeded)
                {
                  ArgY1_16 = ((int16_t) (MR_Word) (MR_hl_field(MR_mktag(3), HeadVar__2_2, (MR_Integer) 1)));
                  succeeded = (ArgX1_15 == ArgY1_16);
                }
              }
              break;
            case (MR_Integer) 4:
              {
                uint16_t ArgX1_17 = ((uint16_t) (MR_Word) (MR_hl_field(MR_mktag(3), HeadVar__1_1, (MR_Integer) 1)));
                uint16_t ArgY1_18;

                succeeded = ((((MR_tag((MR_Word) HeadVar__2_2)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(MR_mktag(3), HeadVar__2_2, (MR_Integer) 0)))) == (MR_Integer) 4)));
                if (succeeded)
                {
                  ArgY1_18 = ((uint16_t) (MR_Word) (MR_hl_field(MR_mktag(3), HeadVar__2_2, (MR_Integer) 1)));
                  succeeded = (ArgX1_17 == ArgY1_18);
                }
              }
              break;
            case (MR_Integer) 5:
              {
                int32_t ArgX1_19 = ((int32_t) (MR_Word) (MR_hl_field(MR_mktag(3), HeadVar__1_1, (MR_Integer) 1)));
                int32_t ArgY1_20;

                succeeded = ((((MR_tag((MR_Word) HeadVar__2_2)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(MR_mktag(3), HeadVar__2_2, (MR_Integer) 0)))) == (MR_Integer) 5)));
                if (succeeded)
                {
                  ArgY1_20 = ((int32_t) (MR_Word) (MR_hl_field(MR_mktag(3), HeadVar__2_2, (MR_Integer) 1)));
                  succeeded = (ArgX1_19 == ArgY1_20);
                }
              }
              break;
            case (MR_Integer) 6:
              {
                uint32_t ArgX1_21 = ((uint32_t) (MR_Word) (MR_hl_field(MR_mktag(3), HeadVar__1_1, (MR_Integer) 1)));
                uint32_t ArgY1_22;

                succeeded = ((((MR_tag((MR_Word) HeadVar__2_2)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(MR_mktag(3), HeadVar__2_2, (MR_Integer) 0)))) == (MR_Integer) 6)));
                if (succeeded)
                {
                  ArgY1_22 = ((uint32_t) (MR_Word) (MR_hl_field(MR_mktag(3), HeadVar__2_2, (MR_Integer) 1)));
                  succeeded = (ArgX1_21 == ArgY1_22);
                }
              }
              break;
            case (MR_Integer) 7:
              {
                int64_t ArgX1_23 = MR_unbox_int64((MR_hl_field(MR_mktag(3), HeadVar__1_1, (MR_Integer) 1)));
                int64_t ArgY1_24;

                succeeded = ((((MR_tag((MR_Word) HeadVar__2_2)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(MR_mktag(3), HeadVar__2_2, (MR_Integer) 0)))) == (MR_Integer) 7)));
                if (succeeded)
                {
                  ArgY1_24 = MR_unbox_int64((MR_hl_field(MR_mktag(3), HeadVar__2_2, (MR_Integer) 1)));
                  succeeded = (ArgX1_23 == ArgY1_24);
                }
              }
              break;
            case (MR_Integer) 8:
              {
                uint64_t ArgX1_25 = MR_unbox_uint64((MR_hl_field(MR_mktag(3), HeadVar__1_1, (MR_Integer) 1)));
                uint64_t ArgY1_26;

                succeeded = ((((MR_tag((MR_Word) HeadVar__2_2)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(MR_mktag(3), HeadVar__2_2, (MR_Integer) 0)))) == (MR_Integer) 8)));
                if (succeeded)
                {
                  ArgY1_26 = MR_unbox_uint64((MR_hl_field(MR_mktag(3), HeadVar__2_2, (MR_Integer) 1)));
                  succeeded = (ArgX1_25 == ArgY1_26);
                }
              }
              break;
          }
          break;
      }
    return succeeded;
  }
}

void MR_CALL 
bytecode_backend__bytecode__debug_bytecode_file_4_p_0(
  MR_String FileName_5,
  MR_Word ByteCodes_6)
{
  {
    MR_Word Result_8;

    mercury__io__open_output_4_p_0(FileName_5, &Result_8);
    if (((MR_tag((MR_Word) Result_8)) == (MR_Integer) 1))
    {
      MR_String ProgName_14;

      mercury__io__progname_base_4_p_0((MR_String) "byte.m", &ProgName_14);
      mercury__io__write_string_3_p_0((MR_String) "\n");
      mercury__io__write_string_3_p_0(ProgName_14);
      mercury__io__write_string_3_p_0((MR_String) ": can\'t open \140");
      mercury__io__write_string_3_p_0(FileName_5);
      mercury__io__write_string_3_p_0((MR_String) "\' for output\n");
      mercury__io__set_exit_status_3_p_0((MR_Integer) 1);
    }
    else
    {
      MR_Word FileStream_9 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Result_8, (MR_Integer) 0))));
      MR_Word OutputStream_10;
      MR_Word Var_12;

      mercury__io__set_output_stream_4_p_0(FileStream_9, &OutputStream_10);
      mercury__io__write_string_3_p_0((MR_String) "bytecode_version ");
      mercury__io__write_int_3_p_0((MR_Integer) 9);
      mercury__io__write_string_3_p_0((MR_String) "\n");
      bytecode_backend__bytecode__debug_bytecode_list_3_p_0(ByteCodes_6);
      mercury__io__set_output_stream_4_p_0(OutputStream_10, &Var_12);
      mercury__io__close_output_3_p_0(FileStream_9);
    }
  }
}

static void MR_CALL 
bytecode_backend__bytecode__debug_bytecode_list_3_p_0(
  MR_Word HeadVar__1_1)
{
  while (MR_TRUE)
  {
    // setup for model_det tailcalls optimized into a loop
    ;
    if (!((HeadVar__1_1 == (MR_Word) ((MR_Unsigned) 0U))))
    {
      MR_Word ByteCode_7 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 0))));
      MR_Word ByteCodes_8 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 1))));
      MR_String Debug_10;
      MR_Word next_value_of_HeadVar__1_1;

      switch (MR_tag((MR_Word) ByteCode_7)) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 0:
          switch (MR_unmkbody(ByteCode_7)) {
            default: /*NOTREACHED*/ MR_assert(0);
            case (MR_Integer) 0:
              Debug_10 = (MR_String) "endof_pred";
              break;
            case (MR_Integer) 1:
              Debug_10 = (MR_String) "endof_proc";
              break;
            case (MR_Integer) 2:
              Debug_10 = (MR_String) "endof_disjunction";
              break;
            case (MR_Integer) 3:
              Debug_10 = (MR_String) "endof_switch";
              break;
            case (MR_Integer) 4:
              Debug_10 = (MR_String) "endof_if";
              break;
            case (MR_Integer) 5:
              Debug_10 = (MR_String) "endof_negation";
              break;
            case (MR_Integer) 6:
              Debug_10 = (MR_String) "semidet_succeed";
              break;
            case (MR_Integer) 7:
              Debug_10 = (MR_String) "semidet_success_check";
              break;
            case (MR_Integer) 8:
              Debug_10 = (MR_String) "fail";
              break;
            case (MR_Integer) 9:
              Debug_10 = (MR_String) "not_supported";
              break;
          }
          break;
        case (MR_Integer) 1:
          Debug_10 = (MR_String) "enter_pred";
          break;
        case (MR_Integer) 2:
          Debug_10 = (MR_String) "enter_proc";
          break;
        case (MR_Integer) 3:
          switch (((MR_Integer) ((MR_hl_field(MR_mktag(3), ByteCode_7, (MR_Integer) 0))))) {
            default: /*NOTREACHED*/ MR_assert(0);
            case (MR_Integer) 0:
              Debug_10 = (MR_String) "label";
              break;
            case (MR_Integer) 1:
              Debug_10 = (MR_String) "enter_disjunction";
              break;
            case (MR_Integer) 2:
              Debug_10 = (MR_String) "enter_disjunct";
              break;
            case (MR_Integer) 3:
              Debug_10 = (MR_String) "endof_disjunct";
              break;
            case (MR_Integer) 4:
              Debug_10 = (MR_String) "enter_switch";
              break;
            case (MR_Integer) 5:
              Debug_10 = (MR_String) "enter_switch_arm";
              break;
            case (MR_Integer) 6:
              Debug_10 = (MR_String) "endof_switch_arm";
              break;
            case (MR_Integer) 7:
              Debug_10 = (MR_String) "enter_if";
              break;
            case (MR_Integer) 8:
              Debug_10 = (MR_String) "enter_then";
              break;
            case (MR_Integer) 9:
              Debug_10 = (MR_String) "endof_then";
              break;
            case (MR_Integer) 10:
              Debug_10 = (MR_String) "enter_else";
              break;
            case (MR_Integer) 11:
              Debug_10 = (MR_String) "enter_negation";
              break;
            case (MR_Integer) 12:
              Debug_10 = (MR_String) "endof_negation_goal";
              break;
            case (MR_Integer) 13:
              Debug_10 = (MR_String) "enter_commit";
              break;
            case (MR_Integer) 14:
              Debug_10 = (MR_String) "endof_commit";
              break;
            case (MR_Integer) 15:
              Debug_10 = (MR_String) "assign";
              break;
            case (MR_Integer) 16:
              Debug_10 = (MR_String) "test";
              break;
            case (MR_Integer) 17:
              Debug_10 = (MR_String) "construct";
              break;
            case (MR_Integer) 18:
              Debug_10 = (MR_String) "deconstruct";
              break;
            case (MR_Integer) 19:
              Debug_10 = (MR_String) "complex_construct";
              break;
            case (MR_Integer) 20:
              Debug_10 = (MR_String) "complex_deconstruct";
              break;
            case (MR_Integer) 21:
              Debug_10 = (MR_String) "place_arg";
              break;
            case (MR_Integer) 22:
              Debug_10 = (MR_String) "pickup_arg";
              break;
            case (MR_Integer) 23:
              Debug_10 = (MR_String) "call";
              break;
            case (MR_Integer) 24:
              Debug_10 = (MR_String) "higher_order_call";
              break;
            case (MR_Integer) 25:
              Debug_10 = (MR_String) "builtin_binop";
              break;
            case (MR_Integer) 26:
              Debug_10 = (MR_String) "builtin_unop";
              break;
            case (MR_Integer) 27:
              Debug_10 = (MR_String) "builtin_bintest";
              break;
            case (MR_Integer) 28:
              Debug_10 = (MR_String) "builtin_untest";
              break;
            case (MR_Integer) 29:
              Debug_10 = (MR_String) "context";
              break;
          }
          break;
      }
      bytecode_backend__bytecode__debug_string_3_p_0(Debug_10);
      bytecode_backend__bytecode__debug_args_3_p_0(ByteCode_7);
      mercury__io__write_char_3_p_0((MR_Char) 10);
      // direct tailcall eliminated
      ;
      next_value_of_HeadVar__1_1 = ByteCodes_8;
      HeadVar__1_1 = next_value_of_HeadVar__1_1;
      continue;
    }
    break;
  }
}

static void MR_CALL 
bytecode_backend__bytecode__debug_args_3_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3)
{
  {
    MR_Box closure = closure_arg;

    bytecode_backend__bytecode__debug_cons_id_3_p_0(((MR_Word) (wrapper_arg_1)));
  }
}

static void MR_CALL 
bytecode_backend__bytecode__debug_args_3_p_0(
  MR_Word HeadVar__1_1)
{
  switch (MR_tag((MR_Word) HeadVar__1_1)) {
    default: /*NOTREACHED*/ MR_assert(0);
    case (MR_Integer) 0:
      switch (MR_unmkbody(HeadVar__1_1)) {
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
        MR_String PredId_4 = ((MR_String) ((MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 0))));
        MR_Integer PredArity_5 = ((MR_Integer) ((MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 1))));
        MR_Integer IsFunc_6 = ((MR_Integer) ((MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 2))));
        MR_Integer ProcsCount_7 = ((MR_Integer) ((MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 3))));

        bytecode_backend__bytecode__debug_pred_id_3_p_0(PredId_4);
        bytecode_backend__bytecode__debug_length_3_p_0(PredArity_5);
        bytecode_backend__bytecode__debug_is_func_3_p_0(IsFunc_6);
        bytecode_backend__bytecode__debug_length_3_p_0(ProcsCount_7);
      }
      break;
    case (MR_Integer) 2:
      {
        MR_Integer ProcId_18 = ((MR_Integer) ((MR_hl_field(MR_mktag(2), HeadVar__1_1, (MR_Integer) 0))));
        MR_Word Detism_19 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(2), HeadVar__1_1, (MR_Integer) 1))) & (MR_Integer) 7);
        MR_Integer LabelCount_20 = ((MR_Integer) ((MR_hl_field(MR_mktag(2), HeadVar__1_1, (MR_Integer) 2))));
        MR_Integer LabelId_21 = ((MR_Integer) ((MR_hl_field(MR_mktag(2), HeadVar__1_1, (MR_Integer) 3))));
        MR_Integer TempCount_22 = ((MR_Integer) ((MR_hl_field(MR_mktag(2), HeadVar__1_1, (MR_Integer) 4))));
        MR_Word Vars_23 = ((MR_Word) ((MR_hl_field(MR_mktag(2), HeadVar__1_1, (MR_Integer) 5))));
        MR_Integer VarCount_25;

        bytecode_backend__bytecode__debug_proc_id_3_p_0(ProcId_18);
        bytecode_backend__bytecode__debug_determinism_3_p_0(Detism_19);
        bytecode_backend__bytecode__debug_length_3_p_0(LabelCount_20);
        bytecode_backend__bytecode__debug_label_id_3_p_0(LabelId_21);
        bytecode_backend__bytecode__debug_length_3_p_0(TempCount_22);
        mercury__list__length_2_p_0((MR_Word) (&bytecode_backend__bytecode__bytecode_backend__bytecode__type_ctor_info_byte_var_info_0), Vars_23, &VarCount_25);
        bytecode_backend__bytecode__debug_length_3_p_0(VarCount_25);
        bytecode_backend__bytecode__debug_var_infos_3_p_0(Vars_23);
      }
      break;
    case (MR_Integer) 3:
      switch (((MR_Integer) ((MR_hl_field(MR_mktag(3), HeadVar__1_1, (MR_Integer) 0))))) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 0:
          {
            MR_Integer LabelId_38 = ((MR_Integer) ((MR_hl_field(MR_mktag(3), HeadVar__1_1, (MR_Integer) 1))));

            bytecode_backend__bytecode__debug_label_id_3_p_0(LabelId_38);
          }
          break;
        case (MR_Integer) 1:
          {
            MR_Integer LabelId_43 = ((MR_Integer) ((MR_hl_field(MR_mktag(3), HeadVar__1_1, (MR_Integer) 1))));

            bytecode_backend__bytecode__debug_label_id_3_p_0(LabelId_43);
          }
          break;
        case (MR_Integer) 2:
          {
            MR_Integer LabelId_51 = ((MR_Integer) ((MR_hl_field(MR_mktag(3), HeadVar__1_1, (MR_Integer) 1))));

            bytecode_backend__bytecode__debug_label_id_3_p_0(LabelId_51);
          }
          break;
        case (MR_Integer) 3:
          {
            MR_Integer LabelId_56 = ((MR_Integer) ((MR_hl_field(MR_mktag(3), HeadVar__1_1, (MR_Integer) 1))));

            bytecode_backend__bytecode__debug_label_id_3_p_0(LabelId_56);
          }
          break;
        case (MR_Integer) 4:
          {
            MR_Integer Var_61 = ((MR_Integer) ((MR_hl_field(MR_mktag(3), HeadVar__1_1, (MR_Integer) 1))));
            MR_Integer LabelId_62 = ((MR_Integer) ((MR_hl_field(MR_mktag(3), HeadVar__1_1, (MR_Integer) 2))));

            bytecode_backend__bytecode__debug_var_3_p_0(Var_61);
            bytecode_backend__bytecode__debug_label_id_3_p_0(LabelId_62);
          }
          break;
        case (MR_Integer) 5:
          {
            MR_Word MainConsId_71 = ((MR_Word) ((MR_hl_field(MR_mktag(3), HeadVar__1_1, (MR_Integer) 1))));
            MR_Word OtherConsIds_72 = ((MR_Word) ((MR_hl_field(MR_mktag(3), HeadVar__1_1, (MR_Integer) 2))));
            MR_Integer NextLabelId_73 = ((MR_Integer) ((MR_hl_field(MR_mktag(3), HeadVar__1_1, (MR_Integer) 3))));
            MR_Box conv0_STATE_VARIABLE_IO_79_79;

            bytecode_backend__bytecode__debug_cons_id_3_p_0(MainConsId_71);
            mercury__list__foldl_4_p_2((MR_Word) (&bytecode_backend__bytecode__bytecode_backend__bytecode__type_ctor_info_byte_cons_id_0), (MR_Word) (&mercury__io__io__type_ctor_info_state_0), (MR_Word) (&bytecode_backend__bytecode_scalar_common_2[1]), OtherConsIds_72, ((MR_Box) ((MR_Integer) 0)), &conv0_STATE_VARIABLE_IO_79_79);
            bytecode_backend__bytecode__debug_label_id_3_p_0(NextLabelId_73);
          }
          break;
        case (MR_Integer) 6:
          {
            MR_Integer LabelId_81 = ((MR_Integer) ((MR_hl_field(MR_mktag(3), HeadVar__1_1, (MR_Integer) 1))));

            bytecode_backend__bytecode__debug_label_id_3_p_0(LabelId_81);
          }
          break;
        case (MR_Integer) 7:
          {
            MR_Integer ElseLabelId_86 = ((MR_Integer) ((MR_hl_field(MR_mktag(3), HeadVar__1_1, (MR_Integer) 1))));
            MR_Integer FollowLabelId_87 = ((MR_Integer) ((MR_hl_field(MR_mktag(3), HeadVar__1_1, (MR_Integer) 2))));
            MR_Integer FramePtrTemp_88 = ((MR_Integer) ((MR_hl_field(MR_mktag(3), HeadVar__1_1, (MR_Integer) 3))));

            bytecode_backend__bytecode__debug_label_id_3_p_0(ElseLabelId_86);
            bytecode_backend__bytecode__debug_label_id_3_p_0(FollowLabelId_87);
            bytecode_backend__bytecode__debug_temp_3_p_0(FramePtrTemp_88);
          }
          break;
        case (MR_Integer) 8:
          {
            MR_Integer FramePtrTemp_95 = ((MR_Integer) ((MR_hl_field(MR_mktag(3), HeadVar__1_1, (MR_Integer) 1))));

            bytecode_backend__bytecode__debug_temp_3_p_0(FramePtrTemp_95);
          }
          break;
        case (MR_Integer) 9:
          {
            MR_Integer FollowLabelId_100 = ((MR_Integer) ((MR_hl_field(MR_mktag(3), HeadVar__1_1, (MR_Integer) 1))));

            bytecode_backend__bytecode__debug_label_id_3_p_0(FollowLabelId_100);
          }
          break;
        case (MR_Integer) 10:
          {
            MR_Integer FramePtrTemp_105 = ((MR_Integer) ((MR_hl_field(MR_mktag(3), HeadVar__1_1, (MR_Integer) 1))));

            bytecode_backend__bytecode__debug_temp_3_p_0(FramePtrTemp_105);
          }
          break;
        case (MR_Integer) 11:
          {
            MR_Integer FramePtrTemp_113 = ((MR_Integer) ((MR_hl_field(MR_mktag(3), HeadVar__1_1, (MR_Integer) 1))));
            MR_Integer LabelId_114 = ((MR_Integer) ((MR_hl_field(MR_mktag(3), HeadVar__1_1, (MR_Integer) 2))));

            bytecode_backend__bytecode__debug_temp_3_p_0(FramePtrTemp_113);
            bytecode_backend__bytecode__debug_label_id_3_p_0(LabelId_114);
          }
          break;
        case (MR_Integer) 12:
          {
            MR_Integer FramePtrTemp_120 = ((MR_Integer) ((MR_hl_field(MR_mktag(3), HeadVar__1_1, (MR_Integer) 1))));

            bytecode_backend__bytecode__debug_temp_3_p_0(FramePtrTemp_120);
          }
          break;
        case (MR_Integer) 13:
          {
            MR_Integer Temp_128 = ((MR_Integer) ((MR_hl_field(MR_mktag(3), HeadVar__1_1, (MR_Integer) 1))));

            bytecode_backend__bytecode__debug_temp_3_p_0(Temp_128);
          }
          break;
        case (MR_Integer) 14:
          {
            MR_Integer Temp_133 = ((MR_Integer) ((MR_hl_field(MR_mktag(3), HeadVar__1_1, (MR_Integer) 1))));

            bytecode_backend__bytecode__debug_temp_3_p_0(Temp_133);
          }
          break;
        case (MR_Integer) 15:
          {
            MR_Integer Var1_138 = ((MR_Integer) ((MR_hl_field(MR_mktag(3), HeadVar__1_1, (MR_Integer) 1))));
            MR_Integer Var2_139 = ((MR_Integer) ((MR_hl_field(MR_mktag(3), HeadVar__1_1, (MR_Integer) 2))));

            bytecode_backend__bytecode__debug_var_3_p_0(Var1_138);
            bytecode_backend__bytecode__debug_var_3_p_0(Var2_139);
          }
          break;
        case (MR_Integer) 16:
          {
            MR_Integer Var1_145 = ((MR_Integer) ((MR_hl_field(MR_mktag(3), HeadVar__1_1, (MR_Integer) 1))));
            MR_Integer Var2_146 = ((MR_Integer) ((MR_hl_field(MR_mktag(3), HeadVar__1_1, (MR_Integer) 2))));
            MR_Word TestId_147 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(3), HeadVar__1_1, (MR_Integer) 3))) & (MR_Integer) 7);

            bytecode_backend__bytecode__debug_var_3_p_0(Var1_145);
            bytecode_backend__bytecode__debug_var_3_p_0(Var2_146);
            bytecode_backend__bytecode__debug_test_id_3_p_0(TestId_147);
          }
          break;
        case (MR_Integer) 17:
          {
            MR_Integer Var_154 = ((MR_Integer) ((MR_hl_field(MR_mktag(3), HeadVar__1_1, (MR_Integer) 1))));
            MR_Word ConsId_155 = ((MR_Word) ((MR_hl_field(MR_mktag(3), HeadVar__1_1, (MR_Integer) 2))));
            MR_Word Vars_156 = ((MR_Word) ((MR_hl_field(MR_mktag(3), HeadVar__1_1, (MR_Integer) 3))));
            MR_Integer Length_158;

            bytecode_backend__bytecode__debug_var_3_p_0(Var_154);
            bytecode_backend__bytecode__debug_cons_id_3_p_0(ConsId_155);
            mercury__list__length_2_p_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_int_0), Vars_156, &Length_158);
            bytecode_backend__bytecode__debug_length_3_p_0(Length_158);
            bytecode_backend__bytecode__debug_vars_3_p_0(Vars_156);
          }
          break;
        case (MR_Integer) 18:
          {
            MR_Integer Var_165 = ((MR_Integer) ((MR_hl_field(MR_mktag(3), HeadVar__1_1, (MR_Integer) 1))));
            MR_Word ConsId_166 = ((MR_Word) ((MR_hl_field(MR_mktag(3), HeadVar__1_1, (MR_Integer) 2))));
            MR_Word Vars_167 = ((MR_Word) ((MR_hl_field(MR_mktag(3), HeadVar__1_1, (MR_Integer) 3))));
            MR_Integer Length_169;

            bytecode_backend__bytecode__debug_var_3_p_0(Var_165);
            bytecode_backend__bytecode__debug_cons_id_3_p_0(ConsId_166);
            mercury__list__length_2_p_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_int_0), Vars_167, &Length_169);
            bytecode_backend__bytecode__debug_length_3_p_0(Length_169);
            bytecode_backend__bytecode__debug_vars_3_p_0(Vars_167);
          }
          break;
        case (MR_Integer) 19:
          {
            MR_Integer Var_176 = ((MR_Integer) ((MR_hl_field(MR_mktag(3), HeadVar__1_1, (MR_Integer) 1))));
            MR_Word ConsId_177 = ((MR_Word) ((MR_hl_field(MR_mktag(3), HeadVar__1_1, (MR_Integer) 2))));
            MR_Word VarDirs_178 = ((MR_Word) ((MR_hl_field(MR_mktag(3), HeadVar__1_1, (MR_Integer) 3))));
            MR_Integer Length_180;

            bytecode_backend__bytecode__debug_var_3_p_0(Var_176);
            bytecode_backend__bytecode__debug_cons_id_3_p_0(ConsId_177);
            mercury__list__length_2_p_0((MR_Word) (&bytecode_backend__bytecode_scalar_common_2[0]), VarDirs_178, &Length_180);
            bytecode_backend__bytecode__debug_length_3_p_0(Length_180);
            bytecode_backend__bytecode__debug_var_dirs_3_p_0(VarDirs_178);
          }
          break;
        case (MR_Integer) 20:
          {
            MR_Integer Var_187 = ((MR_Integer) ((MR_hl_field(MR_mktag(3), HeadVar__1_1, (MR_Integer) 1))));
            MR_Word ConsId_188 = ((MR_Word) ((MR_hl_field(MR_mktag(3), HeadVar__1_1, (MR_Integer) 2))));
            MR_Word VarDirs_189 = ((MR_Word) ((MR_hl_field(MR_mktag(3), HeadVar__1_1, (MR_Integer) 3))));
            MR_Integer Length_191;

            bytecode_backend__bytecode__debug_var_3_p_0(Var_187);
            bytecode_backend__bytecode__debug_cons_id_3_p_0(ConsId_188);
            mercury__list__length_2_p_0((MR_Word) (&bytecode_backend__bytecode_scalar_common_2[0]), VarDirs_189, &Length_191);
            bytecode_backend__bytecode__debug_length_3_p_0(Length_191);
            bytecode_backend__bytecode__debug_var_dirs_3_p_0(VarDirs_189);
          }
          break;
        case (MR_Integer) 21:
          {
            MR_Integer RegNum_199 = ((MR_Integer) ((MR_hl_field(MR_mktag(3), HeadVar__1_1, (MR_Integer) 2))));
            MR_Integer Var_200 = ((MR_Integer) ((MR_hl_field(MR_mktag(3), HeadVar__1_1, (MR_Integer) 3))));

            bytecode_backend__bytecode__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_100_101_98_117_103_95_114_101_103_95_95_91_49_93_95_48_4_p_0(RegNum_199);
            bytecode_backend__bytecode__debug_var_3_p_0(Var_200);
          }
          break;
        case (MR_Integer) 22:
          {
            MR_Integer RegNum_207 = ((MR_Integer) ((MR_hl_field(MR_mktag(3), HeadVar__1_1, (MR_Integer) 2))));
            MR_Integer Var_208 = ((MR_Integer) ((MR_hl_field(MR_mktag(3), HeadVar__1_1, (MR_Integer) 3))));

            bytecode_backend__bytecode__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_100_101_98_117_103_95_114_101_103_95_95_91_49_93_95_48_4_p_0(RegNum_207);
            bytecode_backend__bytecode__debug_var_3_p_0(Var_208);
          }
          break;
        case (MR_Integer) 23:
          {
            MR_Word ModuleId_214 = ((MR_Word) ((MR_hl_field(MR_mktag(3), HeadVar__1_1, (MR_Integer) 1))));
            MR_String PredId_215 = ((MR_String) ((MR_hl_field(MR_mktag(3), HeadVar__1_1, (MR_Integer) 2))));
            MR_Integer Arity_216 = ((MR_Integer) ((MR_hl_field(MR_mktag(3), HeadVar__1_1, (MR_Integer) 3))));
            MR_Integer IsFunc_217 = ((MR_Integer) ((MR_hl_field(MR_mktag(3), HeadVar__1_1, (MR_Integer) 4))));
            MR_Integer ProcId_218 = ((MR_Integer) ((MR_hl_field(MR_mktag(3), HeadVar__1_1, (MR_Integer) 5))));

            bytecode_backend__bytecode__debug_module_id_3_p_0(ModuleId_214);
            bytecode_backend__bytecode__debug_pred_id_3_p_0(PredId_215);
            bytecode_backend__bytecode__debug_length_3_p_0(Arity_216);
            bytecode_backend__bytecode__debug_is_func_3_p_0(IsFunc_217);
            bytecode_backend__bytecode__debug_proc_id_3_p_0(ProcId_218);
          }
          break;
        case (MR_Integer) 24:
          {
            MR_Integer PredVar_227 = ((MR_Integer) ((MR_hl_field(MR_mktag(3), HeadVar__1_1, (MR_Integer) 1))));
            MR_Integer InVarCount_228 = ((MR_Integer) ((MR_hl_field(MR_mktag(3), HeadVar__1_1, (MR_Integer) 2))));
            MR_Integer OutVarCount_229 = ((MR_Integer) ((MR_hl_field(MR_mktag(3), HeadVar__1_1, (MR_Integer) 3))));
            MR_Word Detism_230 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(3), HeadVar__1_1, (MR_Integer) 4))) & (MR_Integer) 7);

            bytecode_backend__bytecode__debug_var_3_p_0(PredVar_227);
            bytecode_backend__bytecode__debug_length_3_p_0(InVarCount_228);
            bytecode_backend__bytecode__debug_length_3_p_0(OutVarCount_229);
            bytecode_backend__bytecode__debug_determinism_3_p_0(Detism_230);
          }
          break;
        case (MR_Integer) 25:
          {
            MR_Word Binop_238 = ((MR_Word) ((MR_hl_field(MR_mktag(3), HeadVar__1_1, (MR_Integer) 1))));
            MR_Word Var1_239 = ((MR_Word) ((MR_hl_field(MR_mktag(3), HeadVar__1_1, (MR_Integer) 2))));
            MR_Word Var2_240 = ((MR_Word) ((MR_hl_field(MR_mktag(3), HeadVar__1_1, (MR_Integer) 3))));
            MR_Integer Var3_241 = ((MR_Integer) ((MR_hl_field(MR_mktag(3), HeadVar__1_1, (MR_Integer) 4))));

            bytecode_backend__bytecode__debug_binop_3_p_0(Binop_238);
            bytecode_backend__bytecode__debug_arg_3_p_0(Var1_239);
            bytecode_backend__bytecode__debug_arg_3_p_0(Var2_240);
            bytecode_backend__bytecode__debug_var_3_p_0(Var3_241);
          }
          break;
        case (MR_Integer) 26:
          {
            MR_Word Unop_249 = ((MR_Word) ((MR_hl_field(MR_mktag(3), HeadVar__1_1, (MR_Integer) 1))));
            MR_Word Var1_250 = ((MR_Word) ((MR_hl_field(MR_mktag(3), HeadVar__1_1, (MR_Integer) 2))));
            MR_Integer Var2_251 = ((MR_Integer) ((MR_hl_field(MR_mktag(3), HeadVar__1_1, (MR_Integer) 3))));

            bytecode_backend__bytecode__debug_unop_3_p_0(Unop_249);
            bytecode_backend__bytecode__debug_arg_3_p_0(Var1_250);
            bytecode_backend__bytecode__debug_var_3_p_0(Var2_251);
          }
          break;
        case (MR_Integer) 27:
          {
            MR_Word Binop_258 = ((MR_Word) ((MR_hl_field(MR_mktag(3), HeadVar__1_1, (MR_Integer) 1))));
            MR_Word Var1_259 = ((MR_Word) ((MR_hl_field(MR_mktag(3), HeadVar__1_1, (MR_Integer) 2))));
            MR_Word Var2_260 = ((MR_Word) ((MR_hl_field(MR_mktag(3), HeadVar__1_1, (MR_Integer) 3))));

            bytecode_backend__bytecode__debug_binop_3_p_0(Binop_258);
            bytecode_backend__bytecode__debug_arg_3_p_0(Var1_259);
            bytecode_backend__bytecode__debug_arg_3_p_0(Var2_260);
          }
          break;
        case (MR_Integer) 28:
          {
            MR_Word Unop_267 = ((MR_Word) ((MR_hl_field(MR_mktag(3), HeadVar__1_1, (MR_Integer) 1))));
            MR_Word Var1_268 = ((MR_Word) ((MR_hl_field(MR_mktag(3), HeadVar__1_1, (MR_Integer) 2))));

            bytecode_backend__bytecode__debug_unop_3_p_0(Unop_267);
            bytecode_backend__bytecode__debug_arg_3_p_0(Var1_268);
          }
          break;
        case (MR_Integer) 29:
          {
            MR_Integer Line_283 = ((MR_Integer) ((MR_hl_field(MR_mktag(3), HeadVar__1_1, (MR_Integer) 1))));

            bytecode_backend__bytecode__debug_int_3_p_0(Line_283);
          }
          break;
      }
      break;
  }
}

static void MR_CALL 
bytecode_backend__bytecode__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_100_101_98_117_103_95_114_101_103_95_95_91_49_93_95_48_4_p_0(
  MR_Integer N_5)
{
  {
    mercury__io__write_int_3_p_0(N_5);
    mercury__io__write_char_3_p_0((MR_Char) 32);
  }
}

static void MR_CALL 
bytecode_backend__bytecode__debug_unop_3_p_0(
  MR_Word Unop_4)
{
  {
    MR_String Debug_6;

    switch (MR_tag((MR_Word) Unop_4)) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        switch (MR_unmkbody(Unop_4)) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
            Debug_6 = (MR_String) "tag";
            break;
          case (MR_Integer) 1:
            Debug_6 = (MR_String) "strip_tag";
            break;
          case (MR_Integer) 2:
            Debug_6 = (MR_String) "mkbody";
            break;
          case (MR_Integer) 3:
            Debug_6 = (MR_String) "unmkbody";
            break;
          case (MR_Integer) 4:
            Debug_6 = (MR_String) "not";
            break;
          case (MR_Integer) 5:
            Debug_6 = (MR_String) "hash_string";
            break;
          case (MR_Integer) 6:
            Debug_6 = (MR_String) "hash_string2";
            break;
          case (MR_Integer) 7:
            Debug_6 = (MR_String) "hash_string3";
            break;
          case (MR_Integer) 8:
            Debug_6 = (MR_String) "hash_string4";
            break;
          case (MR_Integer) 9:
            Debug_6 = (MR_String) "hash_string5";
            break;
          case (MR_Integer) 10:
            Debug_6 = (MR_String) "hash_string6";
            break;
          case (MR_Integer) 11:
            Debug_6 = (MR_String) "dword_float_get_word0";
            break;
          case (MR_Integer) 12:
            Debug_6 = (MR_String) "dword_float_get_word1";
            break;
          case (MR_Integer) 13:
            Debug_6 = (MR_String) "dword_int64_get_word0";
            break;
          case (MR_Integer) 14:
            Debug_6 = (MR_String) "dword_int64_get_word1";
            break;
          case (MR_Integer) 15:
            Debug_6 = (MR_String) "dword_uint64_get_word0";
            break;
          case (MR_Integer) 16:
            Debug_6 = (MR_String) "dword_uint64_get_word1";
            break;
        }
        break;
      case (MR_Integer) 1:
        {
          MR_Word Var_20 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(1), Unop_4, (MR_Integer) 0))) & (MR_Integer) 15);

          Debug_6 = ((&bytecode_backend__bytecode_vector_common_5[168 + Var_20]))->bytecode_backend__bytecode__vector_common_type_5_0__vct_5_f_0;
        }
        break;
    }
    mercury__io__write_string_3_p_0(Debug_6);
    mercury__io__write_char_3_p_0((MR_Char) 32);
  }
}

static void MR_CALL 
bytecode_backend__bytecode__debug_binop_3_p_0(
  MR_Word Binop_4)
{
  {
    MR_String Debug_6;

    bytecode_backend__bytecode__binop_debug_2_p_0(Binop_4, &Debug_6);
    mercury__io__write_string_3_p_0(Debug_6);
    mercury__io__write_char_3_p_0((MR_Char) 32);
  }
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
          *HeadVar__2_2 = (MR_String) "unsigned_le";
          break;
        case (MR_Integer) 12:
          *HeadVar__2_2 = (MR_String) "float_plus";
          break;
        case (MR_Integer) 13:
          *HeadVar__2_2 = (MR_String) "float_minus";
          break;
        case (MR_Integer) 14:
          *HeadVar__2_2 = (MR_String) "float_times";
          break;
        case (MR_Integer) 15:
          *HeadVar__2_2 = (MR_String) "float_divide";
          break;
        case (MR_Integer) 16:
          *HeadVar__2_2 = (MR_String) "float_eq";
          break;
        case (MR_Integer) 17:
          *HeadVar__2_2 = (MR_String) "float_ne";
          break;
        case (MR_Integer) 18:
          *HeadVar__2_2 = (MR_String) "float_lt";
          break;
        case (MR_Integer) 19:
          *HeadVar__2_2 = (MR_String) "float_gt";
          break;
        case (MR_Integer) 20:
          *HeadVar__2_2 = (MR_String) "float_le";
          break;
        case (MR_Integer) 21:
          *HeadVar__2_2 = (MR_String) "float_ge";
          break;
        case (MR_Integer) 22:
          *HeadVar__2_2 = (MR_String) "float_from_dword";
          break;
        case (MR_Integer) 23:
          *HeadVar__2_2 = (MR_String) "int64_from_dword";
          break;
        case (MR_Integer) 24:
          *HeadVar__2_2 = (MR_String) "uint64_from_dword";
          break;
        case (MR_Integer) 25:
          *HeadVar__2_2 = (MR_String) "pointer_equal_conservative";
          break;
        case (MR_Integer) 26:
          *HeadVar__2_2 = (MR_String) "compound_eq";
          break;
        case (MR_Integer) 27:
          *HeadVar__2_2 = (MR_String) "compound_lt";
          break;
      }
      break;
    case (MR_Integer) 1:
      {
        MR_Word Var_169 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 0))) & (MR_Integer) 15);

        *HeadVar__2_2 = ((&bytecode_backend__bytecode_vector_common_5[48 + Var_169]))->bytecode_backend__bytecode__vector_common_type_5_0__vct_5_f_0;
      }
      break;
    case (MR_Integer) 2:
      {
        MR_Word Var_177 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(2), HeadVar__1_1, (MR_Integer) 0))) & (MR_Integer) 15);

        *HeadVar__2_2 = ((&bytecode_backend__bytecode_vector_common_5[128 + Var_177]))->bytecode_backend__bytecode__vector_common_type_5_0__vct_5_f_0;
      }
      break;
    case (MR_Integer) 3:
      switch (((MR_Integer) ((MR_hl_field(MR_mktag(3), HeadVar__1_1, (MR_Integer) 0))))) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 0:
          {
            MR_Word Var_176 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(3), HeadVar__1_1, (MR_Integer) 1))) & (MR_Integer) 15);

            *HeadVar__2_2 = ((&bytecode_backend__bytecode_vector_common_5[118 + Var_176]))->bytecode_backend__bytecode__vector_common_type_5_0__vct_5_f_0;
          }
          break;
        case (MR_Integer) 1:
          {
            MR_Word Var_170 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(3), HeadVar__1_1, (MR_Integer) 1))) & (MR_Integer) 15);

            *HeadVar__2_2 = ((&bytecode_backend__bytecode_vector_common_5[58 + Var_170]))->bytecode_backend__bytecode__vector_common_type_5_0__vct_5_f_0;
          }
          break;
        case (MR_Integer) 2:
          {
            MR_Word Var_175 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(3), HeadVar__1_1, (MR_Integer) 1))) & (MR_Integer) 15);

            *HeadVar__2_2 = ((&bytecode_backend__bytecode_vector_common_5[108 + Var_175]))->bytecode_backend__bytecode__vector_common_type_5_0__vct_5_f_0;
          }
          break;
        case (MR_Integer) 3:
          {
            MR_Word Var_179 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(3), HeadVar__1_1, (MR_Integer) 1))) & (MR_Integer) 15);

            *HeadVar__2_2 = ((&bytecode_backend__bytecode_vector_common_5[148 + Var_179]))->bytecode_backend__bytecode__vector_common_type_5_0__vct_5_f_0;
          }
          break;
        case (MR_Integer) 4:
          {
            MR_Word Var_180 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(3), HeadVar__1_1, (MR_Integer) 1))) & (MR_Integer) 15);

            *HeadVar__2_2 = ((&bytecode_backend__bytecode_vector_common_5[158 + Var_180]))->bytecode_backend__bytecode__vector_common_type_5_0__vct_5_f_0;
          }
          break;
        case (MR_Integer) 5:
          {
            MR_Word Var_165 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(3), HeadVar__1_1, (MR_Integer) 1))) & (MR_Integer) 15);

            *HeadVar__2_2 = ((&bytecode_backend__bytecode_vector_common_5[8 + Var_165]))->bytecode_backend__bytecode__vector_common_type_5_0__vct_5_f_0;
          }
          break;
        case (MR_Integer) 6:
          {
            MR_Word Var_166 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(3), HeadVar__1_1, (MR_Integer) 1))) & (MR_Integer) 15);

            *HeadVar__2_2 = ((&bytecode_backend__bytecode_vector_common_5[18 + Var_166]))->bytecode_backend__bytecode__vector_common_type_5_0__vct_5_f_0;
          }
          break;
        case (MR_Integer) 7:
          {
            MR_Word Var_167 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(3), HeadVar__1_1, (MR_Integer) 1))) & (MR_Integer) 15);

            *HeadVar__2_2 = ((&bytecode_backend__bytecode_vector_common_5[28 + Var_167]))->bytecode_backend__bytecode__vector_common_type_5_0__vct_5_f_0;
          }
          break;
        case (MR_Integer) 8:
          {
            MR_Word Var_168 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(3), HeadVar__1_1, (MR_Integer) 1))) & (MR_Integer) 15);

            *HeadVar__2_2 = ((&bytecode_backend__bytecode_vector_common_5[38 + Var_168]))->bytecode_backend__bytecode__vector_common_type_5_0__vct_5_f_0;
          }
          break;
        case (MR_Integer) 9:
          {
            MR_Word Var_178 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(3), HeadVar__1_1, (MR_Integer) 1))) & (MR_Integer) 15);

            *HeadVar__2_2 = ((&bytecode_backend__bytecode_vector_common_5[138 + Var_178]))->bytecode_backend__bytecode__vector_common_type_5_0__vct_5_f_0;
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
            MR_Word Var_174 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(3), HeadVar__1_1, (MR_Integer) 1))) & (MR_Integer) 15);

            *HeadVar__2_2 = ((&bytecode_backend__bytecode_vector_common_5[98 + Var_174]))->bytecode_backend__bytecode__vector_common_type_5_0__vct_5_f_0;
          }
          break;
        case (MR_Integer) 13:
          {
            MR_Word Var_172 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(3), HeadVar__1_1, (MR_Integer) 1))) & (MR_Integer) 15);

            *HeadVar__2_2 = ((&bytecode_backend__bytecode_vector_common_5[78 + Var_172]))->bytecode_backend__bytecode__vector_common_type_5_0__vct_5_f_0;
          }
          break;
        case (MR_Integer) 14:
          {
            MR_Word Var_173 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(3), HeadVar__1_1, (MR_Integer) 1))) & (MR_Integer) 15);

            *HeadVar__2_2 = ((&bytecode_backend__bytecode_vector_common_5[88 + Var_173]))->bytecode_backend__bytecode__vector_common_type_5_0__vct_5_f_0;
          }
          break;
        case (MR_Integer) 15:
          {
            MR_Word Var_171 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(3), HeadVar__1_1, (MR_Integer) 1))) & (MR_Integer) 15);

            *HeadVar__2_2 = ((&bytecode_backend__bytecode_vector_common_5[68 + Var_171]))->bytecode_backend__bytecode__vector_common_type_5_0__vct_5_f_0;
          }
          break;
      }
      break;
  }
}

static void MR_CALL 
bytecode_backend__bytecode__debug_cons_id_3_p_0(
  MR_Word HeadVar__1_1)
{
  switch (MR_tag((MR_Word) HeadVar__1_1)) {
    default: /*NOTREACHED*/ MR_assert(0);
    case (MR_Integer) 0:
      switch (MR_unmkbody(HeadVar__1_1)) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 0:
          bytecode_backend__bytecode__debug_string_3_p_0((MR_String) "type_info_cell_constructor");
          break;
        case (MR_Integer) 1:
          bytecode_backend__bytecode__debug_string_3_p_0((MR_String) "typeclass_info_cell_constructor");
          break;
      }
      break;
    case (MR_Integer) 1:
      {
        MR_Word ModuleId_4 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 0))));
        MR_String Functor_5 = ((MR_String) ((MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 1))));
        MR_Integer Arity_6 = ((MR_Integer) ((MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 2))));
        MR_Word Tag_7 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 3))));

        bytecode_backend__bytecode__debug_string_3_p_0((MR_String) "functor");
        bytecode_backend__bytecode__debug_sym_name_3_p_0(ModuleId_4);
        bytecode_backend__bytecode__debug_string_3_p_0(Functor_5);
        bytecode_backend__bytecode__debug_int_3_p_0(Arity_6);
        bytecode_backend__bytecode__debug_tag_3_p_0(Tag_7);
      }
      break;
    case (MR_Integer) 2:
      {
        MR_Integer IntVal_17 = ((MR_Integer) ((MR_hl_field(MR_mktag(2), HeadVar__1_1, (MR_Integer) 0))));

        bytecode_backend__bytecode__debug_string_3_p_0((MR_String) "int_const");
        bytecode_backend__bytecode__debug_int_3_p_0(IntVal_17);
      }
      break;
    case (MR_Integer) 3:
      switch (((MR_Integer) ((MR_hl_field(MR_mktag(3), HeadVar__1_1, (MR_Integer) 0))))) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 0:
          {
            MR_String StringVal_24 = ((MR_String) ((MR_hl_field(MR_mktag(3), HeadVar__1_1, (MR_Integer) 1))));

            bytecode_backend__bytecode__debug_string_3_p_0((MR_String) "string_const");
            bytecode_backend__bytecode__debug_cstring_3_p_0(StringVal_24);
          }
          break;
        case (MR_Integer) 1:
          {
            MR_Float FloatVal_31 = MR_unbox_float((MR_hl_field(MR_mktag(3), HeadVar__1_1, (MR_Integer) 1)));

            bytecode_backend__bytecode__debug_string_3_p_0((MR_String) "float_const");
            bytecode_backend__bytecode__debug_float_3_p_0(FloatVal_31);
          }
          break;
        case (MR_Integer) 2:
          {
            MR_Char Char_82 = ((MR_Char) (MR_Word) (MR_hl_field(MR_mktag(3), HeadVar__1_1, (MR_Integer) 1)));
            MR_String String_84;
            MR_Word Var_89;

            bytecode_backend__bytecode__debug_string_3_p_0((MR_String) "char_const");
            {
              Var_89 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(1), Var_89, 0) = ((MR_Box) (MR_Word) (Char_82));
              MR_hl_field(MR_mktag(1), Var_89, 1) = ((MR_Box) ((MR_Unsigned) 0U));
            }
            mercury__string__from_char_list_2_p_0(Var_89, &String_84);
            bytecode_backend__bytecode__debug_string_3_p_0(String_84);
          }
          break;
        case (MR_Integer) 3:
          {
            MR_Word ModuleId_38 = ((MR_Word) ((MR_hl_field(MR_mktag(3), HeadVar__1_1, (MR_Integer) 1))));
            MR_String PredId_39 = ((MR_String) ((MR_hl_field(MR_mktag(3), HeadVar__1_1, (MR_Integer) 2))));
            MR_Integer Arity_40 = ((MR_Integer) ((MR_hl_field(MR_mktag(3), HeadVar__1_1, (MR_Integer) 3))));
            MR_Integer IsFunc_41 = ((MR_Integer) ((MR_hl_field(MR_mktag(3), HeadVar__1_1, (MR_Integer) 4))));
            MR_Integer ProcId_42 = ((MR_Integer) ((MR_hl_field(MR_mktag(3), HeadVar__1_1, (MR_Integer) 5))));

            bytecode_backend__bytecode__debug_string_3_p_0((MR_String) "pred_const");
            bytecode_backend__bytecode__debug_module_id_3_p_0(ModuleId_38);
            bytecode_backend__bytecode__debug_pred_id_3_p_0(PredId_39);
            bytecode_backend__bytecode__debug_length_3_p_0(Arity_40);
            bytecode_backend__bytecode__debug_is_func_3_p_0(IsFunc_41);
            bytecode_backend__bytecode__debug_proc_id_3_p_0(ProcId_42);
          }
          break;
        case (MR_Integer) 4:
          {
            MR_Word ModuleId_53 = ((MR_Word) ((MR_hl_field(MR_mktag(3), HeadVar__1_1, (MR_Integer) 1))));
            MR_String TypeName_54 = ((MR_String) ((MR_hl_field(MR_mktag(3), HeadVar__1_1, (MR_Integer) 2))));
            MR_Integer TypeArity_55 = ((MR_Integer) ((MR_hl_field(MR_mktag(3), HeadVar__1_1, (MR_Integer) 3))));

            bytecode_backend__bytecode__debug_string_3_p_0((MR_String) "type_ctor_info_const");
            bytecode_backend__bytecode__debug_module_id_3_p_0(ModuleId_53);
            bytecode_backend__bytecode__debug_string_3_p_0(TypeName_54);
            bytecode_backend__bytecode__debug_int_3_p_0(TypeArity_55);
          }
          break;
        case (MR_Integer) 5:
          {
            MR_Word ModuleId_64 = ((MR_Word) ((MR_hl_field(MR_mktag(3), HeadVar__1_1, (MR_Integer) 1))));
            MR_Word ClassName_65;
            MR_Integer ClassArity_66;
            MR_String Instance_67 = ((MR_String) ((MR_hl_field(MR_mktag(3), HeadVar__1_1, (MR_Integer) 3))));
            MR_Word Var_71 = ((MR_Word) ((MR_hl_field(MR_mktag(3), HeadVar__1_1, (MR_Integer) 2))));

            ClassName_65 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Var_71, (MR_Integer) 0))));
            ClassArity_66 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), Var_71, (MR_Integer) 1))));
            bytecode_backend__bytecode__debug_string_3_p_0((MR_String) "base_typeclass_info_const");
            bytecode_backend__bytecode__debug_module_id_3_p_0(ModuleId_64);
            bytecode_backend__bytecode__debug_string_3_p_0((MR_String) "class_id");
            bytecode_backend__bytecode__debug_sym_name_3_p_0(ClassName_65);
            bytecode_backend__bytecode__debug_string_3_p_0((MR_String) "/");
            bytecode_backend__bytecode__debug_int_3_p_0(ClassArity_66);
            bytecode_backend__bytecode__debug_string_3_p_0(Instance_67);
          }
          break;
      }
      break;
  }
}

static void MR_CALL 
bytecode_backend__bytecode__debug_cstring_3_p_0(
  MR_String Str_4)
{
  {
    MR_Word Stream_6;

    mercury__io__output_stream_3_p_0(&Stream_6);
    mercury__io__write_char_4_p_0(Stream_6, (MR_Char) 34);
    backend_libs__c_util__output_quoted_string_4_p_0(Stream_6, Str_4);
    mercury__io__write_char_4_p_0(Stream_6, (MR_Char) 34);
    mercury__io__write_char_4_p_0(Stream_6, (MR_Char) 32);
  }
}

static void MR_CALL 
bytecode_backend__bytecode__debug_tag_3_p_0(
  MR_Word HeadVar__1_1)
{
  switch (MR_tag((MR_Word) HeadVar__1_1)) {
    default: /*NOTREACHED*/ MR_assert(0);
    case (MR_Integer) 0:
      {
        mercury__io__write_string_3_p_0((MR_String) "no_tag");
        mercury__io__write_char_3_p_0((MR_Char) 32);
      }
      break;
    case (MR_Integer) 1:
      {
        MR_Integer Primary_4 = ((MR_Integer) ((MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 0))));

        bytecode_backend__bytecode__debug_string_3_p_0((MR_String) "unshared_tag");
        bytecode_backend__bytecode__debug_int_3_p_0(Primary_4);
      }
      break;
    case (MR_Integer) 2:
      {
        MR_Integer Primary_11 = ((MR_Integer) ((MR_hl_field(MR_mktag(2), HeadVar__1_1, (MR_Integer) 0))));
        MR_Integer Secondary_12 = ((MR_Integer) ((MR_hl_field(MR_mktag(2), HeadVar__1_1, (MR_Integer) 1))));

        mercury__io__write_string_3_p_0((MR_String) "shared_remote_tag");
        mercury__io__write_char_3_p_0((MR_Char) 32);
        mercury__io__write_int_3_p_0(Primary_11);
        mercury__io__write_char_3_p_0((MR_Char) 32);
        bytecode_backend__bytecode__debug_int_3_p_0(Secondary_12);
      }
      break;
    case (MR_Integer) 3:
      switch (((MR_Integer) ((MR_hl_field(MR_mktag(3), HeadVar__1_1, (MR_Integer) 0))))) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 0:
          {
            MR_Integer Primary_20 = ((MR_Integer) ((MR_hl_field(MR_mktag(3), HeadVar__1_1, (MR_Integer) 1))));
            MR_Integer Secondary_21 = ((MR_Integer) ((MR_hl_field(MR_mktag(3), HeadVar__1_1, (MR_Integer) 2))));

            mercury__io__write_string_3_p_0((MR_String) "shared_local_tag");
            mercury__io__write_char_3_p_0((MR_Char) 32);
            mercury__io__write_int_3_p_0(Primary_20);
            mercury__io__write_char_3_p_0((MR_Char) 32);
            mercury__io__write_int_3_p_0(Secondary_21);
            mercury__io__write_char_3_p_0((MR_Char) 32);
          }
          break;
        case (MR_Integer) 1:
          {
            MR_Integer Enum_29 = ((MR_Integer) ((MR_hl_field(MR_mktag(3), HeadVar__1_1, (MR_Integer) 1))));

            mercury__io__write_string_3_p_0((MR_String) "enum_tag");
            mercury__io__write_char_3_p_0((MR_Char) 32);
            mercury__io__write_int_3_p_0(Enum_29);
            mercury__io__write_char_3_p_0((MR_Char) 32);
          }
          break;
      }
      break;
  }
}

static void MR_CALL 
bytecode_backend__bytecode__debug_label_id_3_p_0(
  MR_Integer LabelId_4)
{
  {
    mercury__io__write_int_3_p_0(LabelId_4);
    mercury__io__write_char_3_p_0((MR_Char) 32);
  }
}

static void MR_CALL 
bytecode_backend__bytecode__debug_proc_id_3_p_0(
  MR_Integer ProcId_4)
{
  {
    mercury__io__write_int_3_p_0(ProcId_4);
    mercury__io__write_char_3_p_0((MR_Char) 32);
  }
}

static void MR_CALL 
bytecode_backend__bytecode__debug_pred_id_3_p_0(
  MR_String PredId_4)
{
  {
    mercury__io__write_string_3_p_0(PredId_4);
    mercury__io__write_char_3_p_0((MR_Char) 32);
  }
}

static void MR_CALL 
bytecode_backend__bytecode__debug_module_id_3_p_0(
  MR_Word ModuleId_4)
{
  bytecode_backend__bytecode__debug_sym_name_3_p_0(ModuleId_4);
}

static void MR_CALL 
bytecode_backend__bytecode__debug_sym_name_3_p_0(
  MR_Word HeadVar__1_1)
{
  if (((MR_tag((MR_Word) HeadVar__1_1)) == (MR_Integer) 1))
  {
    MR_Word Module_11 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 0))));
    MR_String Val_12 = ((MR_String) ((MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 1))));

    bytecode_backend__bytecode__debug_sym_name_3_p_0(Module_11);
    mercury__io__write_char_3_p_0((MR_Char) 58);
    mercury__io__write_string_3_p_0(Val_12);
    mercury__io__write_char_3_p_0((MR_Char) 32);
  }
  else
  {
    MR_String Val_4 = ((MR_String) ((MR_hl_field(MR_mktag(0), HeadVar__1_1, (MR_Integer) 0))));

    mercury__io__write_string_3_p_0(Val_4);
    mercury__io__write_char_3_p_0((MR_Char) 32);
  }
}

static void MR_CALL 
bytecode_backend__bytecode__debug_test_id_3_p_0(
  MR_Word HeadVar__1_1)
{
  switch (HeadVar__1_1) {
    default: /*NOTREACHED*/ MR_assert(0);
    case (MR_Integer) 1:
      {
        mercury__io__write_string_3_p_0((MR_String) "char");
        mercury__io__write_char_3_p_0((MR_Char) 32);
      }
      break;
    case (MR_Integer) 5:
      {
        mercury__io__write_string_3_p_0((MR_String) "dummy");
        mercury__io__write_char_3_p_0((MR_Char) 32);
      }
      break;
    case (MR_Integer) 4:
      {
        mercury__io__write_string_3_p_0((MR_String) "enum");
        mercury__io__write_char_3_p_0((MR_Char) 32);
      }
      break;
    case (MR_Integer) 3:
      {
        mercury__io__write_string_3_p_0((MR_String) "float");
        mercury__io__write_char_3_p_0((MR_Char) 32);
      }
      break;
    case (MR_Integer) 0:
      {
        mercury__io__write_string_3_p_0((MR_String) "int");
        mercury__io__write_char_3_p_0((MR_Char) 32);
      }
      break;
    case (MR_Integer) 2:
      {
        mercury__io__write_string_3_p_0((MR_String) "string");
        mercury__io__write_char_3_p_0((MR_Char) 32);
      }
      break;
  }
}

static void MR_CALL 
bytecode_backend__bytecode__debug_var_dirs_3_p_0(
  MR_Word HeadVar__1_1)
{
  while (MR_TRUE)
  {
    // setup for model_det tailcalls optimized into a loop
    ;
    if (!((HeadVar__1_1 == (MR_Word) ((MR_Unsigned) 0U))))
    {
      MR_Integer Var_7;
      MR_Word Dir_8;
      MR_Word VarDirs_9 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 1))));
      MR_Word Var_13 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 0))));
      MR_Word next_value_of_HeadVar__1_1;

      Var_7 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), Var_13, (MR_Integer) 0))));
      Dir_8 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Var_13, (MR_Integer) 1))));
      mercury__io__write_int_3_p_0(Var_7);
      mercury__io__write_char_3_p_0((MR_Char) 32);
      switch (Dir_8) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 0:
          {
            mercury__io__write_string_3_p_0((MR_String) "to_arg");
            mercury__io__write_char_3_p_0((MR_Char) 32);
          }
          break;
        case (MR_Integer) 2:
          {
            mercury__io__write_string_3_p_0((MR_String) "to_none");
            mercury__io__write_char_3_p_0((MR_Char) 32);
          }
          break;
        case (MR_Integer) 1:
          {
            mercury__io__write_string_3_p_0((MR_String) "to_var");
            mercury__io__write_char_3_p_0((MR_Char) 32);
          }
          break;
      }
      // direct tailcall eliminated
      ;
      next_value_of_HeadVar__1_1 = VarDirs_9;
      HeadVar__1_1 = next_value_of_HeadVar__1_1;
      continue;
    }
    break;
  }
}

static void MR_CALL 
bytecode_backend__bytecode__debug_temp_3_p_0(
  MR_Integer Var_4)
{
  {
    mercury__io__write_int_3_p_0(Var_4);
    mercury__io__write_char_3_p_0((MR_Char) 32);
  }
}

static void MR_CALL 
bytecode_backend__bytecode__debug_vars_3_p_0(
  MR_Word HeadVar__1_1)
{
  while (MR_TRUE)
  {
    // setup for model_det tailcalls optimized into a loop
    ;
    if (!((HeadVar__1_1 == (MR_Word) ((MR_Unsigned) 0U))))
    {
      MR_Integer Var_7 = ((MR_Integer) ((MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 0))));
      MR_Word Vars_8 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 1))));
      MR_Word next_value_of_HeadVar__1_1;

      mercury__io__write_int_3_p_0(Var_7);
      mercury__io__write_char_3_p_0((MR_Char) 32);
      // direct tailcall eliminated
      ;
      next_value_of_HeadVar__1_1 = Vars_8;
      HeadVar__1_1 = next_value_of_HeadVar__1_1;
      continue;
    }
    break;
  }
}

static void MR_CALL 
bytecode_backend__bytecode__debug_arg_3_p_0(
  MR_Word HeadVar__1_1)
{
  switch (MR_tag((MR_Word) HeadVar__1_1)) {
    default: /*NOTREACHED*/ MR_assert(0);
    case (MR_Integer) 0:
      {
        MR_Integer Var_4 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), HeadVar__1_1, (MR_Integer) 0))));

        bytecode_backend__bytecode__debug_string_3_p_0((MR_String) "var");
        bytecode_backend__bytecode__debug_var_3_p_0(Var_4);
      }
      break;
    case (MR_Integer) 1:
      {
        MR_Integer IntVal_11 = ((MR_Integer) ((MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 0))));

        bytecode_backend__bytecode__debug_string_3_p_0((MR_String) "int");
        bytecode_backend__bytecode__debug_int_3_p_0(IntVal_11);
      }
      break;
    case (MR_Integer) 2:
      {
        MR_Float FloatVal_81 = MR_unbox_float((MR_hl_field(MR_mktag(2), HeadVar__1_1, (MR_Integer) 0)));

        mercury__io__write_string_3_p_0((MR_String) "float");
        mercury__io__write_char_3_p_0((MR_Char) 32);
        bytecode_backend__bytecode__debug_float_3_p_0(FloatVal_81);
      }
      break;
    case (MR_Integer) 3:
      switch (((MR_Integer) ((MR_hl_field(MR_mktag(3), HeadVar__1_1, (MR_Integer) 0))))) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 0:
          {
            MR_Unsigned UIntVal_18 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(3), HeadVar__1_1, (MR_Integer) 1))));

            bytecode_backend__bytecode__debug_string_3_p_0((MR_String) "uint");
            bytecode_backend__bytecode__debug_uint_3_p_0(UIntVal_18);
          }
          break;
        case (MR_Integer) 1:
          {
            int8_t Int8Val_25 = ((int8_t) (MR_Word) (MR_hl_field(MR_mktag(3), HeadVar__1_1, (MR_Integer) 1)));

            bytecode_backend__bytecode__debug_string_3_p_0((MR_String) "int8");
            bytecode_backend__bytecode__debug_int8_3_p_0(Int8Val_25);
          }
          break;
        case (MR_Integer) 2:
          {
            uint8_t UInt8Val_32 = ((uint8_t) (MR_Word) (MR_hl_field(MR_mktag(3), HeadVar__1_1, (MR_Integer) 1)));

            bytecode_backend__bytecode__debug_string_3_p_0((MR_String) "uint8");
            bytecode_backend__bytecode__debug_uint8_3_p_0(UInt8Val_32);
          }
          break;
        case (MR_Integer) 3:
          {
            int16_t Int16Val_39 = ((int16_t) (MR_Word) (MR_hl_field(MR_mktag(3), HeadVar__1_1, (MR_Integer) 1)));

            bytecode_backend__bytecode__debug_string_3_p_0((MR_String) "int16");
            bytecode_backend__bytecode__debug_int16_3_p_0(Int16Val_39);
          }
          break;
        case (MR_Integer) 4:
          {
            uint16_t UInt16Val_46 = ((uint16_t) (MR_Word) (MR_hl_field(MR_mktag(3), HeadVar__1_1, (MR_Integer) 1)));

            bytecode_backend__bytecode__debug_string_3_p_0((MR_String) "uint16");
            bytecode_backend__bytecode__debug_uint16_3_p_0(UInt16Val_46);
          }
          break;
        case (MR_Integer) 5:
          {
            int32_t Int32Val_53 = ((int32_t) (MR_Word) (MR_hl_field(MR_mktag(3), HeadVar__1_1, (MR_Integer) 1)));

            bytecode_backend__bytecode__debug_string_3_p_0((MR_String) "int32");
            bytecode_backend__bytecode__debug_int32_3_p_0(Int32Val_53);
          }
          break;
        case (MR_Integer) 6:
          {
            uint32_t UInt32Val_60 = ((uint32_t) (MR_Word) (MR_hl_field(MR_mktag(3), HeadVar__1_1, (MR_Integer) 1)));

            bytecode_backend__bytecode__debug_string_3_p_0((MR_String) "uint32");
            bytecode_backend__bytecode__debug_uint32_3_p_0(UInt32Val_60);
          }
          break;
        case (MR_Integer) 7:
          {
            int64_t Int64Val_67 = MR_unbox_int64((MR_hl_field(MR_mktag(3), HeadVar__1_1, (MR_Integer) 1)));

            bytecode_backend__bytecode__debug_string_3_p_0((MR_String) "int64");
            bytecode_backend__bytecode__debug_int64_3_p_0(Int64Val_67);
          }
          break;
        case (MR_Integer) 8:
          {
            uint64_t UInt64Val_74 = MR_unbox_uint64((MR_hl_field(MR_mktag(3), HeadVar__1_1, (MR_Integer) 1)));

            bytecode_backend__bytecode__debug_string_3_p_0((MR_String) "uint64");
            bytecode_backend__bytecode__debug_uint64_3_p_0(UInt64Val_74);
          }
          break;
      }
      break;
  }
}

static void MR_CALL 
bytecode_backend__bytecode__debug_float_3_p_0(
  MR_Float Val_4)
{
  {
    mercury__io__write_float_3_p_0(Val_4);
    mercury__io__write_char_3_p_0((MR_Char) 32);
  }
}

static void MR_CALL 
bytecode_backend__bytecode__debug_uint64_3_p_0(
  uint64_t Val_4)
{
  {
    mercury__io__write_uint64_3_p_0(Val_4);
    mercury__io__write_char_3_p_0((MR_Char) 32);
  }
}

static void MR_CALL 
bytecode_backend__bytecode__debug_int64_3_p_0(
  int64_t Val_4)
{
  {
    mercury__io__write_int64_3_p_0(Val_4);
    mercury__io__write_char_3_p_0((MR_Char) 32);
  }
}

static void MR_CALL 
bytecode_backend__bytecode__debug_uint32_3_p_0(
  uint32_t Val_4)
{
  {
    mercury__io__write_uint32_3_p_0(Val_4);
    mercury__io__write_char_3_p_0((MR_Char) 32);
  }
}

static void MR_CALL 
bytecode_backend__bytecode__debug_int32_3_p_0(
  int32_t Val_4)
{
  {
    mercury__io__write_int32_3_p_0(Val_4);
    mercury__io__write_char_3_p_0((MR_Char) 32);
  }
}

static void MR_CALL 
bytecode_backend__bytecode__debug_uint16_3_p_0(
  uint16_t Val_4)
{
  {
    mercury__io__write_uint16_3_p_0(Val_4);
    mercury__io__write_char_3_p_0((MR_Char) 32);
  }
}

static void MR_CALL 
bytecode_backend__bytecode__debug_int16_3_p_0(
  int16_t Val_4)
{
  {
    mercury__io__write_int16_3_p_0(Val_4);
    mercury__io__write_char_3_p_0((MR_Char) 32);
  }
}

static void MR_CALL 
bytecode_backend__bytecode__debug_uint8_3_p_0(
  uint8_t Val_4)
{
  {
    mercury__io__write_uint8_3_p_0(Val_4);
    mercury__io__write_char_3_p_0((MR_Char) 32);
  }
}

static void MR_CALL 
bytecode_backend__bytecode__debug_int8_3_p_0(
  int8_t Val_4)
{
  {
    mercury__io__write_int8_3_p_0(Val_4);
    mercury__io__write_char_3_p_0((MR_Char) 32);
  }
}

static void MR_CALL 
bytecode_backend__bytecode__debug_uint_3_p_0(
  MR_Unsigned Val_4)
{
  {
    mercury__io__write_uint_3_p_0(Val_4);
    mercury__io__write_char_3_p_0((MR_Char) 32);
  }
}

static void MR_CALL 
bytecode_backend__bytecode__debug_int_3_p_0(
  MR_Integer Val_4)
{
  {
    mercury__io__write_int_3_p_0(Val_4);
    mercury__io__write_char_3_p_0((MR_Char) 32);
  }
}

static void MR_CALL 
bytecode_backend__bytecode__debug_string_3_p_0(
  MR_String Val_4)
{
  {
    mercury__io__write_string_3_p_0(Val_4);
    mercury__io__write_char_3_p_0((MR_Char) 32);
  }
}

static void MR_CALL 
bytecode_backend__bytecode__debug_var_3_p_0(
  MR_Integer Var_4)
{
  {
    mercury__io__write_int_3_p_0(Var_4);
    mercury__io__write_char_3_p_0((MR_Char) 32);
  }
}

static void MR_CALL 
bytecode_backend__bytecode__debug_length_3_p_0(
  MR_Integer Length_4)
{
  {
    mercury__io__write_int_3_p_0(Length_4);
    mercury__io__write_char_3_p_0((MR_Char) 32);
  }
}

static void MR_CALL 
bytecode_backend__bytecode__debug_is_func_3_p_0(
  MR_Integer IsFunc_4)
{
  {
    MR_bool succeeded = (IsFunc_4 == (MR_Integer) 1);

    if (succeeded)
    {
      mercury__io__write_string_3_p_0((MR_String) "func");
      mercury__io__write_char_3_p_0((MR_Char) 32);
    }
    else
    {
      succeeded = (IsFunc_4 == (MR_Integer) 0);
      if (succeeded)
      {
        mercury__io__write_string_3_p_0((MR_String) "pred");
        mercury__io__write_char_3_p_0((MR_Char) 32);
      }
      else
        {
          mercury__require__unexpected_2_p_0((MR_String) "predicate \140bytecode_backend.bytecode.debug_is_func\'/3", (MR_String) "invalid predicate or function specifier in bytecode.");
          return;
        }
    }
  }
}

static void MR_CALL 
bytecode_backend__bytecode__debug_determinism_3_p_0(
  MR_Word Detism_4)
{
  {
    MR_String Debug_6 = ((&bytecode_backend__bytecode_vector_common_5[0 + Detism_4]))->bytecode_backend__bytecode__vector_common_type_5_0__vct_5_f_0;

    mercury__io__write_string_3_p_0(Debug_6);
    mercury__io__write_char_3_p_0((MR_Char) 32);
  }
}

static void MR_CALL 
bytecode_backend__bytecode__debug_var_infos_3_p_0(
  MR_Word HeadVar__1_1)
{
  while (MR_TRUE)
  {
    // setup for model_det tailcalls optimized into a loop
    ;
    if (!((HeadVar__1_1 == (MR_Word) ((MR_Unsigned) 0U))))
    {
      MR_Word Var_7 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 0))));
      MR_Word Vars_8 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 1))));
      MR_String Name_16 = ((MR_String) ((MR_hl_field(MR_mktag(0), Var_7, (MR_Integer) 0))));
      MR_Word next_value_of_HeadVar__1_1;

      mercury__io__write_string_3_p_0(Name_16);
      mercury__io__write_char_3_p_0((MR_Char) 32);
      // direct tailcall eliminated
      ;
      next_value_of_HeadVar__1_1 = Vars_8;
      HeadVar__1_1 = next_value_of_HeadVar__1_1;
      continue;
    }
    break;
  }
}

void MR_CALL 
bytecode_backend__bytecode__output_bytecode_file_4_p_0(
  MR_String FileName_5,
  MR_Word ByteCodes_6)
{
  {
    MR_Word Result_8;

    mercury__io__open_binary_output_4_p_0(FileName_5, &Result_8);
    if (((MR_tag((MR_Word) Result_8)) == (MR_Integer) 1))
    {
      MR_String ProgName_14;

      mercury__io__progname_base_4_p_0((MR_String) "byte.m", &ProgName_14);
      mercury__io__write_string_3_p_0((MR_String) "\n");
      mercury__io__write_string_3_p_0(ProgName_14);
      mercury__io__write_string_3_p_0((MR_String) ": can\'t open \140");
      mercury__io__write_string_3_p_0(FileName_5);
      mercury__io__write_string_3_p_0((MR_String) "\' for output\n");
      mercury__io__set_exit_status_3_p_0((MR_Integer) 1);
    }
    else
    {
      MR_Word FileStream_9 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Result_8, (MR_Integer) 0))));
      MR_Word OutputStream_10;
      MR_Word Var_12;

      mercury__io__set_binary_output_stream_4_p_0(FileStream_9, &OutputStream_10);
      backend_libs__bytecode_data__output_short_3_p_0((MR_Integer) 9);
      bytecode_backend__bytecode__output_bytecode_list_3_p_0(ByteCodes_6);
      mercury__io__set_binary_output_stream_4_p_0(OutputStream_10, &Var_12);
      mercury__io__close_binary_output_3_p_0(FileStream_9);
    }
  }
}

static void MR_CALL 
bytecode_backend__bytecode__output_bytecode_list_3_p_0(
  MR_Word HeadVar__1_1)
{
  while (MR_TRUE)
  {
    // setup for model_det tailcalls optimized into a loop
    ;
    if (!((HeadVar__1_1 == (MR_Word) ((MR_Unsigned) 0U))))
    {
      MR_Word ByteCode_7 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 0))));
      MR_Word ByteCodes_8 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 1))));
      MR_Integer Byte_10;
      MR_Word next_value_of_HeadVar__1_1;

      switch (MR_tag((MR_Word) ByteCode_7)) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 0:
          switch (MR_unmkbody(ByteCode_7)) {
            default: /*NOTREACHED*/ MR_assert(0);
            case (MR_Integer) 0:
              Byte_10 = (MR_Integer) 1;
              break;
            case (MR_Integer) 1:
              Byte_10 = (MR_Integer) 3;
              break;
            case (MR_Integer) 2:
              Byte_10 = (MR_Integer) 6;
              break;
            case (MR_Integer) 3:
              Byte_10 = (MR_Integer) 10;
              break;
            case (MR_Integer) 4:
              Byte_10 = (MR_Integer) 16;
              break;
            case (MR_Integer) 5:
              Byte_10 = (MR_Integer) 18;
              break;
            case (MR_Integer) 6:
              Byte_10 = (MR_Integer) 35;
              break;
            case (MR_Integer) 7:
              Byte_10 = (MR_Integer) 36;
              break;
            case (MR_Integer) 8:
              Byte_10 = (MR_Integer) 37;
              break;
            case (MR_Integer) 9:
              Byte_10 = (MR_Integer) 39;
              break;
          }
          break;
        case (MR_Integer) 1:
          Byte_10 = (MR_Integer) 0;
          break;
        case (MR_Integer) 2:
          Byte_10 = (MR_Integer) 2;
          break;
        case (MR_Integer) 3:
          switch (((MR_Integer) ((MR_hl_field(MR_mktag(3), ByteCode_7, (MR_Integer) 0))))) {
            default: /*NOTREACHED*/ MR_assert(0);
            case (MR_Integer) 0:
              Byte_10 = (MR_Integer) 4;
              break;
            case (MR_Integer) 1:
              Byte_10 = (MR_Integer) 5;
              break;
            case (MR_Integer) 2:
              Byte_10 = (MR_Integer) 7;
              break;
            case (MR_Integer) 3:
              Byte_10 = (MR_Integer) 8;
              break;
            case (MR_Integer) 4:
              Byte_10 = (MR_Integer) 9;
              break;
            case (MR_Integer) 5:
              Byte_10 = (MR_Integer) 11;
              break;
            case (MR_Integer) 6:
              Byte_10 = (MR_Integer) 12;
              break;
            case (MR_Integer) 7:
              Byte_10 = (MR_Integer) 13;
              break;
            case (MR_Integer) 8:
              Byte_10 = (MR_Integer) 14;
              break;
            case (MR_Integer) 9:
              Byte_10 = (MR_Integer) 15;
              break;
            case (MR_Integer) 10:
              Byte_10 = (MR_Integer) 40;
              break;
            case (MR_Integer) 11:
              Byte_10 = (MR_Integer) 17;
              break;
            case (MR_Integer) 12:
              Byte_10 = (MR_Integer) 41;
              break;
            case (MR_Integer) 13:
              Byte_10 = (MR_Integer) 19;
              break;
            case (MR_Integer) 14:
              Byte_10 = (MR_Integer) 20;
              break;
            case (MR_Integer) 15:
              Byte_10 = (MR_Integer) 21;
              break;
            case (MR_Integer) 16:
              Byte_10 = (MR_Integer) 22;
              break;
            case (MR_Integer) 17:
              Byte_10 = (MR_Integer) 23;
              break;
            case (MR_Integer) 18:
              Byte_10 = (MR_Integer) 24;
              break;
            case (MR_Integer) 19:
              Byte_10 = (MR_Integer) 25;
              break;
            case (MR_Integer) 20:
              Byte_10 = (MR_Integer) 26;
              break;
            case (MR_Integer) 21:
              Byte_10 = (MR_Integer) 27;
              break;
            case (MR_Integer) 22:
              Byte_10 = (MR_Integer) 28;
              break;
            case (MR_Integer) 23:
              Byte_10 = (MR_Integer) 29;
              break;
            case (MR_Integer) 24:
              Byte_10 = (MR_Integer) 30;
              break;
            case (MR_Integer) 25:
              Byte_10 = (MR_Integer) 31;
              break;
            case (MR_Integer) 26:
              Byte_10 = (MR_Integer) 32;
              break;
            case (MR_Integer) 27:
              Byte_10 = (MR_Integer) 33;
              break;
            case (MR_Integer) 28:
              Byte_10 = (MR_Integer) 34;
              break;
            case (MR_Integer) 29:
              Byte_10 = (MR_Integer) 38;
              break;
          }
          break;
      }
      mercury__io__write_byte_3_p_0(Byte_10);
      bytecode_backend__bytecode__output_args_3_p_0(ByteCode_7);
      // direct tailcall eliminated
      ;
      next_value_of_HeadVar__1_1 = ByteCodes_8;
      HeadVar__1_1 = next_value_of_HeadVar__1_1;
      continue;
    }
    break;
  }
}

static MR_bool MR_CALL 
bytecode_backend__bytecode__output_args_3_p_0_1(
  MR_Box closure_arg)
{
  {
    MR_bool succeeded;
    MR_Box closure = closure_arg;

    succeeded = bytecode_backend__bytecode__IntroducedFrom__pred__output_args__275__1_2_p_0(((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3)))), ((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 4)))));
    return succeeded;
  }
}

static void MR_CALL 
bytecode_backend__bytecode__output_args_3_p_0(
  MR_Word HeadVar__1_1)
{
  {
    MR_bool succeeded;

    switch (MR_tag((MR_Word) HeadVar__1_1)) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        switch (MR_unmkbody(HeadVar__1_1)) {
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
          MR_String PredId_4 = ((MR_String) ((MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 0))));
          MR_Integer PredArity_5 = ((MR_Integer) ((MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 1))));
          MR_Integer IsFunc_6 = ((MR_Integer) ((MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 2))));
          MR_Integer ProcCount_7 = ((MR_Integer) ((MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 3))));

          bytecode_backend__bytecode__output_pred_id_3_p_0(PredId_4);
          bytecode_backend__bytecode__output_length_3_p_0(PredArity_5);
          bytecode_backend__bytecode__output_is_func_3_p_0(IsFunc_6);
          bytecode_backend__bytecode__output_length_3_p_0(ProcCount_7);
        }
        break;
      case (MR_Integer) 2:
        {
          MR_Integer ProcId_18 = ((MR_Integer) ((MR_hl_field(MR_mktag(2), HeadVar__1_1, (MR_Integer) 0))));
          MR_Word Detism_19 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(2), HeadVar__1_1, (MR_Integer) 1))) & (MR_Integer) 7);
          MR_Integer LabelCount_20 = ((MR_Integer) ((MR_hl_field(MR_mktag(2), HeadVar__1_1, (MR_Integer) 2))));
          MR_Integer LabelId_21 = ((MR_Integer) ((MR_hl_field(MR_mktag(2), HeadVar__1_1, (MR_Integer) 3))));
          MR_Integer TempCount_22 = ((MR_Integer) ((MR_hl_field(MR_mktag(2), HeadVar__1_1, (MR_Integer) 4))));
          MR_Word Vars_23 = ((MR_Word) ((MR_hl_field(MR_mktag(2), HeadVar__1_1, (MR_Integer) 5))));
          MR_Integer VarCount_25;

          bytecode_backend__bytecode__output_proc_id_3_p_0(ProcId_18);
          bytecode_backend__bytecode__output_determinism_3_p_0(Detism_19);
          bytecode_backend__bytecode__output_length_3_p_0(LabelCount_20);
          bytecode_backend__bytecode__output_label_id_3_p_0(LabelId_21);
          bytecode_backend__bytecode__output_length_3_p_0(TempCount_22);
          mercury__list__length_2_p_0((MR_Word) (&bytecode_backend__bytecode__bytecode_backend__bytecode__type_ctor_info_byte_var_info_0), Vars_23, &VarCount_25);
          bytecode_backend__bytecode__output_length_3_p_0(VarCount_25);
          bytecode_backend__bytecode__output_var_infos_3_p_0(Vars_23);
        }
        break;
      case (MR_Integer) 3:
        switch (((MR_Integer) ((MR_hl_field(MR_mktag(3), HeadVar__1_1, (MR_Integer) 0))))) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
            {
              MR_Integer LabelId_38 = ((MR_Integer) ((MR_hl_field(MR_mktag(3), HeadVar__1_1, (MR_Integer) 1))));

              bytecode_backend__bytecode__output_label_id_3_p_0(LabelId_38);
            }
            break;
          case (MR_Integer) 1:
            {
              MR_Integer LabelId_43 = ((MR_Integer) ((MR_hl_field(MR_mktag(3), HeadVar__1_1, (MR_Integer) 1))));

              bytecode_backend__bytecode__output_label_id_3_p_0(LabelId_43);
            }
            break;
          case (MR_Integer) 2:
            {
              MR_Integer LabelId_51 = ((MR_Integer) ((MR_hl_field(MR_mktag(3), HeadVar__1_1, (MR_Integer) 1))));

              bytecode_backend__bytecode__output_label_id_3_p_0(LabelId_51);
            }
            break;
          case (MR_Integer) 3:
            {
              MR_Integer LabelId_56 = ((MR_Integer) ((MR_hl_field(MR_mktag(3), HeadVar__1_1, (MR_Integer) 1))));

              bytecode_backend__bytecode__output_label_id_3_p_0(LabelId_56);
            }
            break;
          case (MR_Integer) 4:
            {
              MR_Integer Var_61 = ((MR_Integer) ((MR_hl_field(MR_mktag(3), HeadVar__1_1, (MR_Integer) 1))));
              MR_Integer LabelId_62 = ((MR_Integer) ((MR_hl_field(MR_mktag(3), HeadVar__1_1, (MR_Integer) 2))));

              bytecode_backend__bytecode__output_var_3_p_0(Var_61);
              bytecode_backend__bytecode__output_label_id_3_p_0(LabelId_62);
            }
            break;
          case (MR_Integer) 5:
            {
              MR_Word MainConsId_71 = ((MR_Word) ((MR_hl_field(MR_mktag(3), HeadVar__1_1, (MR_Integer) 1))));
              MR_Word OtherConsIds_72 = ((MR_Word) ((MR_hl_field(MR_mktag(3), HeadVar__1_1, (MR_Integer) 2))));
              MR_Integer NextLabelId_73 = ((MR_Integer) ((MR_hl_field(MR_mktag(3), HeadVar__1_1, (MR_Integer) 3))));
              MR_Word Var_78;

              bytecode_backend__bytecode__output_cons_id_3_p_0(MainConsId_71);
              {
                Var_78 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
                MR_hl_field(MR_mktag(0), Var_78, 0) = ((MR_Box) (&bytecode_backend__bytecode_scalar_common_4[0]));
                MR_hl_field(MR_mktag(0), Var_78, 1) = ((MR_Box) (bytecode_backend__bytecode__output_args_3_p_0_1));
                MR_hl_field(MR_mktag(0), Var_78, 2) = ((MR_Box) ((MR_Integer) 2));
                MR_hl_field(MR_mktag(0), Var_78, 3) = ((MR_Box) (OtherConsIds_72));
                MR_hl_field(MR_mktag(0), Var_78, 4) = ((MR_Box) ((MR_Unsigned) 0U));
              }
              mercury__require__expect_3_p_0(Var_78, (MR_String) "predicate \140bytecode_backend.bytecode.output_args\'/3", (MR_String) "OtherConsIds");
              bytecode_backend__bytecode__output_label_id_3_p_0(NextLabelId_73);
            }
            break;
          case (MR_Integer) 6:
            {
              MR_Integer LabelId_83 = ((MR_Integer) ((MR_hl_field(MR_mktag(3), HeadVar__1_1, (MR_Integer) 1))));

              bytecode_backend__bytecode__output_label_id_3_p_0(LabelId_83);
            }
            break;
          case (MR_Integer) 7:
            {
              MR_Integer ElseLabelId_88 = ((MR_Integer) ((MR_hl_field(MR_mktag(3), HeadVar__1_1, (MR_Integer) 1))));
              MR_Integer FollowLabelId_89 = ((MR_Integer) ((MR_hl_field(MR_mktag(3), HeadVar__1_1, (MR_Integer) 2))));
              MR_Integer FramePtrTemp_90 = ((MR_Integer) ((MR_hl_field(MR_mktag(3), HeadVar__1_1, (MR_Integer) 3))));

              bytecode_backend__bytecode__output_label_id_3_p_0(ElseLabelId_88);
              bytecode_backend__bytecode__output_label_id_3_p_0(FollowLabelId_89);
              bytecode_backend__bytecode__output_temp_3_p_0(FramePtrTemp_90);
            }
            break;
          case (MR_Integer) 8:
            {
              MR_Integer FramePtrTemp_97 = ((MR_Integer) ((MR_hl_field(MR_mktag(3), HeadVar__1_1, (MR_Integer) 1))));

              bytecode_backend__bytecode__output_temp_3_p_0(FramePtrTemp_97);
            }
            break;
          case (MR_Integer) 9:
            {
              MR_Integer FollowLabelId_102 = ((MR_Integer) ((MR_hl_field(MR_mktag(3), HeadVar__1_1, (MR_Integer) 1))));

              bytecode_backend__bytecode__output_label_id_3_p_0(FollowLabelId_102);
            }
            break;
          case (MR_Integer) 10:
            {
              MR_Integer FramePtrTemp_107 = ((MR_Integer) ((MR_hl_field(MR_mktag(3), HeadVar__1_1, (MR_Integer) 1))));

              bytecode_backend__bytecode__output_temp_3_p_0(FramePtrTemp_107);
            }
            break;
          case (MR_Integer) 11:
            {
              MR_Integer FramePtrTemp_115 = ((MR_Integer) ((MR_hl_field(MR_mktag(3), HeadVar__1_1, (MR_Integer) 1))));
              MR_Integer LabelId_116 = ((MR_Integer) ((MR_hl_field(MR_mktag(3), HeadVar__1_1, (MR_Integer) 2))));

              bytecode_backend__bytecode__output_temp_3_p_0(FramePtrTemp_115);
              bytecode_backend__bytecode__output_label_id_3_p_0(LabelId_116);
            }
            break;
          case (MR_Integer) 12:
            {
              MR_Integer FramePtrTemp_122 = ((MR_Integer) ((MR_hl_field(MR_mktag(3), HeadVar__1_1, (MR_Integer) 1))));

              bytecode_backend__bytecode__output_temp_3_p_0(FramePtrTemp_122);
            }
            break;
          case (MR_Integer) 13:
            {
              MR_Integer Temp_130 = ((MR_Integer) ((MR_hl_field(MR_mktag(3), HeadVar__1_1, (MR_Integer) 1))));

              bytecode_backend__bytecode__output_temp_3_p_0(Temp_130);
            }
            break;
          case (MR_Integer) 14:
            {
              MR_Integer Temp_135 = ((MR_Integer) ((MR_hl_field(MR_mktag(3), HeadVar__1_1, (MR_Integer) 1))));

              bytecode_backend__bytecode__output_temp_3_p_0(Temp_135);
            }
            break;
          case (MR_Integer) 15:
            {
              MR_Integer Var1_140 = ((MR_Integer) ((MR_hl_field(MR_mktag(3), HeadVar__1_1, (MR_Integer) 1))));
              MR_Integer Var2_141 = ((MR_Integer) ((MR_hl_field(MR_mktag(3), HeadVar__1_1, (MR_Integer) 2))));

              bytecode_backend__bytecode__output_var_3_p_0(Var1_140);
              bytecode_backend__bytecode__output_var_3_p_0(Var2_141);
            }
            break;
          case (MR_Integer) 16:
            {
              MR_Integer Var1_147 = ((MR_Integer) ((MR_hl_field(MR_mktag(3), HeadVar__1_1, (MR_Integer) 1))));
              MR_Integer Var2_148 = ((MR_Integer) ((MR_hl_field(MR_mktag(3), HeadVar__1_1, (MR_Integer) 2))));
              MR_Word TestId_149 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(3), HeadVar__1_1, (MR_Integer) 3))) & (MR_Integer) 7);

              bytecode_backend__bytecode__output_var_3_p_0(Var1_147);
              bytecode_backend__bytecode__output_var_3_p_0(Var2_148);
              bytecode_backend__bytecode__output_test_id_3_p_0(TestId_149);
            }
            break;
          case (MR_Integer) 17:
            {
              MR_Integer Var_156 = ((MR_Integer) ((MR_hl_field(MR_mktag(3), HeadVar__1_1, (MR_Integer) 1))));
              MR_Word ConsId_157 = ((MR_Word) ((MR_hl_field(MR_mktag(3), HeadVar__1_1, (MR_Integer) 2))));
              MR_Word Vars_158 = ((MR_Word) ((MR_hl_field(MR_mktag(3), HeadVar__1_1, (MR_Integer) 3))));
              MR_Integer Length_160;

              bytecode_backend__bytecode__output_var_3_p_0(Var_156);
              bytecode_backend__bytecode__output_cons_id_3_p_0(ConsId_157);
              mercury__list__length_2_p_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_int_0), Vars_158, &Length_160);
              bytecode_backend__bytecode__output_length_3_p_0(Length_160);
              bytecode_backend__bytecode__output_vars_3_p_0(Vars_158);
            }
            break;
          case (MR_Integer) 18:
            {
              MR_Integer Var_167 = ((MR_Integer) ((MR_hl_field(MR_mktag(3), HeadVar__1_1, (MR_Integer) 1))));
              MR_Word ConsId_168 = ((MR_Word) ((MR_hl_field(MR_mktag(3), HeadVar__1_1, (MR_Integer) 2))));
              MR_Word Vars_169 = ((MR_Word) ((MR_hl_field(MR_mktag(3), HeadVar__1_1, (MR_Integer) 3))));
              MR_Integer Length_171;

              bytecode_backend__bytecode__output_var_3_p_0(Var_167);
              bytecode_backend__bytecode__output_cons_id_3_p_0(ConsId_168);
              mercury__list__length_2_p_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_int_0), Vars_169, &Length_171);
              bytecode_backend__bytecode__output_length_3_p_0(Length_171);
              bytecode_backend__bytecode__output_vars_3_p_0(Vars_169);
            }
            break;
          case (MR_Integer) 19:
            {
              MR_Integer Var_178 = ((MR_Integer) ((MR_hl_field(MR_mktag(3), HeadVar__1_1, (MR_Integer) 1))));
              MR_Word ConsId_179 = ((MR_Word) ((MR_hl_field(MR_mktag(3), HeadVar__1_1, (MR_Integer) 2))));
              MR_Word VarDirs_180 = ((MR_Word) ((MR_hl_field(MR_mktag(3), HeadVar__1_1, (MR_Integer) 3))));
              MR_Integer Length_182;

              bytecode_backend__bytecode__output_var_3_p_0(Var_178);
              bytecode_backend__bytecode__output_cons_id_3_p_0(ConsId_179);
              mercury__list__length_2_p_0((MR_Word) (&bytecode_backend__bytecode_scalar_common_2[0]), VarDirs_180, &Length_182);
              bytecode_backend__bytecode__output_length_3_p_0(Length_182);
              bytecode_backend__bytecode__output_var_dirs_3_p_0(VarDirs_180);
            }
            break;
          case (MR_Integer) 20:
            {
              MR_Integer Var_189 = ((MR_Integer) ((MR_hl_field(MR_mktag(3), HeadVar__1_1, (MR_Integer) 1))));
              MR_Word ConsId_190 = ((MR_Word) ((MR_hl_field(MR_mktag(3), HeadVar__1_1, (MR_Integer) 2))));
              MR_Word VarDirs_191 = ((MR_Word) ((MR_hl_field(MR_mktag(3), HeadVar__1_1, (MR_Integer) 3))));
              MR_Integer Length_193;

              bytecode_backend__bytecode__output_var_3_p_0(Var_189);
              bytecode_backend__bytecode__output_cons_id_3_p_0(ConsId_190);
              mercury__list__length_2_p_0((MR_Word) (&bytecode_backend__bytecode_scalar_common_2[0]), VarDirs_191, &Length_193);
              bytecode_backend__bytecode__output_length_3_p_0(Length_193);
              bytecode_backend__bytecode__output_var_dirs_3_p_0(VarDirs_191);
            }
            break;
          case (MR_Integer) 21:
            {
              MR_Integer RegNum_201 = ((MR_Integer) ((MR_hl_field(MR_mktag(3), HeadVar__1_1, (MR_Integer) 2))));
              MR_Integer Var_202 = ((MR_Integer) ((MR_hl_field(MR_mktag(3), HeadVar__1_1, (MR_Integer) 3))));

              bytecode_backend__bytecode__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_111_117_116_112_117_116_95_114_101_103_95_95_91_49_93_95_48_4_p_0(RegNum_201);
              bytecode_backend__bytecode__output_var_3_p_0(Var_202);
            }
            break;
          case (MR_Integer) 22:
            {
              MR_Integer RegNum_209 = ((MR_Integer) ((MR_hl_field(MR_mktag(3), HeadVar__1_1, (MR_Integer) 2))));
              MR_Integer Var_210 = ((MR_Integer) ((MR_hl_field(MR_mktag(3), HeadVar__1_1, (MR_Integer) 3))));

              bytecode_backend__bytecode__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_111_117_116_112_117_116_95_114_101_103_95_95_91_49_93_95_48_4_p_0(RegNum_209);
              bytecode_backend__bytecode__output_var_3_p_0(Var_210);
            }
            break;
          case (MR_Integer) 23:
            {
              MR_Word ModuleId_216 = ((MR_Word) ((MR_hl_field(MR_mktag(3), HeadVar__1_1, (MR_Integer) 1))));
              MR_String PredId_217 = ((MR_String) ((MR_hl_field(MR_mktag(3), HeadVar__1_1, (MR_Integer) 2))));
              MR_Integer Arity_218 = ((MR_Integer) ((MR_hl_field(MR_mktag(3), HeadVar__1_1, (MR_Integer) 3))));
              MR_Integer IsFunc_219 = ((MR_Integer) ((MR_hl_field(MR_mktag(3), HeadVar__1_1, (MR_Integer) 4))));
              MR_Integer ProcId_220 = ((MR_Integer) ((MR_hl_field(MR_mktag(3), HeadVar__1_1, (MR_Integer) 5))));

              bytecode_backend__bytecode__output_module_id_3_p_0(ModuleId_216);
              bytecode_backend__bytecode__output_pred_id_3_p_0(PredId_217);
              bytecode_backend__bytecode__output_length_3_p_0(Arity_218);
              bytecode_backend__bytecode__output_is_func_3_p_0(IsFunc_219);
              bytecode_backend__bytecode__output_proc_id_3_p_0(ProcId_220);
            }
            break;
          case (MR_Integer) 24:
            {
              MR_Integer PredVar_229 = ((MR_Integer) ((MR_hl_field(MR_mktag(3), HeadVar__1_1, (MR_Integer) 1))));
              MR_Integer InVarCount_230 = ((MR_Integer) ((MR_hl_field(MR_mktag(3), HeadVar__1_1, (MR_Integer) 2))));
              MR_Integer OutVarCount_231 = ((MR_Integer) ((MR_hl_field(MR_mktag(3), HeadVar__1_1, (MR_Integer) 3))));
              MR_Word Detism_232 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(3), HeadVar__1_1, (MR_Integer) 4))) & (MR_Integer) 7);

              bytecode_backend__bytecode__output_var_3_p_0(PredVar_229);
              bytecode_backend__bytecode__output_length_3_p_0(InVarCount_230);
              bytecode_backend__bytecode__output_length_3_p_0(OutVarCount_231);
              bytecode_backend__bytecode__output_determinism_3_p_0(Detism_232);
            }
            break;
          case (MR_Integer) 25:
            {
              MR_Word Binop_240 = ((MR_Word) ((MR_hl_field(MR_mktag(3), HeadVar__1_1, (MR_Integer) 1))));
              MR_Word Var1_241 = ((MR_Word) ((MR_hl_field(MR_mktag(3), HeadVar__1_1, (MR_Integer) 2))));
              MR_Word Var2_242 = ((MR_Word) ((MR_hl_field(MR_mktag(3), HeadVar__1_1, (MR_Integer) 3))));
              MR_Integer Var3_243 = ((MR_Integer) ((MR_hl_field(MR_mktag(3), HeadVar__1_1, (MR_Integer) 4))));

              bytecode_backend__bytecode__output_binop_3_p_0(Binop_240);
              bytecode_backend__bytecode__output_arg_3_p_0(Var1_241);
              bytecode_backend__bytecode__output_arg_3_p_0(Var2_242);
              bytecode_backend__bytecode__output_var_3_p_0(Var3_243);
            }
            break;
          case (MR_Integer) 26:
            {
              MR_Word Unop_251 = ((MR_Word) ((MR_hl_field(MR_mktag(3), HeadVar__1_1, (MR_Integer) 1))));
              MR_Word Var1_252 = ((MR_Word) ((MR_hl_field(MR_mktag(3), HeadVar__1_1, (MR_Integer) 2))));
              MR_Integer Var2_253 = ((MR_Integer) ((MR_hl_field(MR_mktag(3), HeadVar__1_1, (MR_Integer) 3))));

              bytecode_backend__bytecode__output_unop_3_p_0(Unop_251);
              bytecode_backend__bytecode__output_arg_3_p_0(Var1_252);
              bytecode_backend__bytecode__output_var_3_p_0(Var2_253);
            }
            break;
          case (MR_Integer) 27:
            {
              MR_Word Binop_260 = ((MR_Word) ((MR_hl_field(MR_mktag(3), HeadVar__1_1, (MR_Integer) 1))));
              MR_Word Var1_261 = ((MR_Word) ((MR_hl_field(MR_mktag(3), HeadVar__1_1, (MR_Integer) 2))));
              MR_Word Var2_262 = ((MR_Word) ((MR_hl_field(MR_mktag(3), HeadVar__1_1, (MR_Integer) 3))));

              bytecode_backend__bytecode__output_binop_3_p_0(Binop_260);
              bytecode_backend__bytecode__output_arg_3_p_0(Var1_261);
              bytecode_backend__bytecode__output_arg_3_p_0(Var2_262);
            }
            break;
          case (MR_Integer) 28:
            {
              MR_Word Unop_269 = ((MR_Word) ((MR_hl_field(MR_mktag(3), HeadVar__1_1, (MR_Integer) 1))));
              MR_Word Var1_270 = ((MR_Word) ((MR_hl_field(MR_mktag(3), HeadVar__1_1, (MR_Integer) 2))));

              bytecode_backend__bytecode__output_unop_3_p_0(Unop_269);
              bytecode_backend__bytecode__output_arg_3_p_0(Var1_270);
            }
            break;
          case (MR_Integer) 29:
            {
              MR_Integer Line_285 = ((MR_Integer) ((MR_hl_field(MR_mktag(3), HeadVar__1_1, (MR_Integer) 1))));

              backend_libs__bytecode_data__output_short_3_p_0(Line_285);
            }
            break;
        }
        break;
    }
  }
}

static void MR_CALL 
bytecode_backend__bytecode__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_111_117_116_112_117_116_95_114_101_103_95_95_91_49_93_95_48_4_p_0(
  MR_Integer N_5)
{
  backend_libs__bytecode_data__output_byte_3_p_0(N_5);
}

static void MR_CALL 
bytecode_backend__bytecode__output_unop_3_p_0(
  MR_Word Unop_4)
{
  {
    MR_Integer Code_6;

    switch (MR_tag((MR_Word) Unop_4)) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        switch (MR_unmkbody(Unop_4)) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
            Code_6 = (MR_Integer) 1;
            break;
          case (MR_Integer) 1:
            Code_6 = (MR_Integer) 5;
            break;
          case (MR_Integer) 2:
            Code_6 = (MR_Integer) 3;
            break;
          case (MR_Integer) 3:
            Code_6 = (MR_Integer) 4;
            break;
          case (MR_Integer) 4:
            Code_6 = (MR_Integer) 7;
            break;
          case (MR_Integer) 5:
            Code_6 = (MR_Integer) 8;
            break;
          case (MR_Integer) 6:
            Code_6 = (MR_Integer) 9;
            break;
          case (MR_Integer) 7:
            Code_6 = (MR_Integer) 10;
            break;
          case (MR_Integer) 8:
            Code_6 = (MR_Integer) 11;
            break;
          case (MR_Integer) 9:
            Code_6 = (MR_Integer) 12;
            break;
          case (MR_Integer) 10:
            Code_6 = (MR_Integer) 13;
            break;
          case (MR_Integer) 11:
            Code_6 = (MR_Integer) 23;
            break;
          case (MR_Integer) 12:
            Code_6 = (MR_Integer) 24;
            break;
          case (MR_Integer) 13:
            Code_6 = (MR_Integer) 25;
            break;
          case (MR_Integer) 14:
            Code_6 = (MR_Integer) 26;
            break;
          case (MR_Integer) 15:
            Code_6 = (MR_Integer) 27;
            break;
          case (MR_Integer) 16:
            Code_6 = (MR_Integer) 28;
            break;
        }
        break;
      case (MR_Integer) 1:
        {
          MR_Word Var_20 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(1), Unop_4, (MR_Integer) 0))) & (MR_Integer) 15);

          Code_6 = ((&bytecode_backend__bytecode_vector_common_3[168 + Var_20]))->bytecode_backend__bytecode__vector_common_type_3_0__vct_3_f_0;
        }
        break;
    }
    backend_libs__bytecode_data__output_byte_3_p_0(Code_6);
  }
}

static void MR_CALL 
bytecode_backend__bytecode__output_binop_3_p_0(
  MR_Word Binop_4)
{
  {
    MR_Integer Code_6;

    bytecode_backend__bytecode__binop_code_2_p_0(Binop_4, &Code_6);
    backend_libs__bytecode_data__output_byte_3_p_0(Code_6);
  }
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
          *HeadVar__2_2 = (MR_Integer) 36;
          break;
        case (MR_Integer) 12:
          *HeadVar__2_2 = (MR_Integer) 25;
          break;
        case (MR_Integer) 13:
          *HeadVar__2_2 = (MR_Integer) 26;
          break;
        case (MR_Integer) 14:
          *HeadVar__2_2 = (MR_Integer) 27;
          break;
        case (MR_Integer) 15:
          *HeadVar__2_2 = (MR_Integer) 28;
          break;
        case (MR_Integer) 16:
          *HeadVar__2_2 = (MR_Integer) 29;
          break;
        case (MR_Integer) 17:
          *HeadVar__2_2 = (MR_Integer) 30;
          break;
        case (MR_Integer) 18:
          *HeadVar__2_2 = (MR_Integer) 31;
          break;
        case (MR_Integer) 19:
          *HeadVar__2_2 = (MR_Integer) 32;
          break;
        case (MR_Integer) 20:
          *HeadVar__2_2 = (MR_Integer) 33;
          break;
        case (MR_Integer) 21:
          *HeadVar__2_2 = (MR_Integer) 34;
          break;
        case (MR_Integer) 22:
          *HeadVar__2_2 = (MR_Integer) 41;
          break;
        case (MR_Integer) 23:
          *HeadVar__2_2 = (MR_Integer) 189;
          break;
        case (MR_Integer) 24:
          *HeadVar__2_2 = (MR_Integer) 190;
          break;
        case (MR_Integer) 25:
          *HeadVar__2_2 = (MR_Integer) 42;
          break;
        case (MR_Integer) 26:
          *HeadVar__2_2 = (MR_Integer) 37;
          break;
        case (MR_Integer) 27:
          *HeadVar__2_2 = (MR_Integer) 38;
          break;
      }
      break;
    case (MR_Integer) 1:
      {
        MR_Word Var_169 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 0))) & (MR_Integer) 15);

        *HeadVar__2_2 = ((&bytecode_backend__bytecode_vector_common_3[48 + Var_169]))->bytecode_backend__bytecode__vector_common_type_3_0__vct_3_f_0;
      }
      break;
    case (MR_Integer) 2:
      {
        MR_Word Var_177 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(2), HeadVar__1_1, (MR_Integer) 0))) & (MR_Integer) 15);

        *HeadVar__2_2 = ((&bytecode_backend__bytecode_vector_common_3[128 + Var_177]))->bytecode_backend__bytecode__vector_common_type_3_0__vct_3_f_0;
      }
      break;
    case (MR_Integer) 3:
      switch (((MR_Integer) ((MR_hl_field(MR_mktag(3), HeadVar__1_1, (MR_Integer) 0))))) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 0:
          {
            MR_Word Var_176 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(3), HeadVar__1_1, (MR_Integer) 1))) & (MR_Integer) 15);

            *HeadVar__2_2 = ((&bytecode_backend__bytecode_vector_common_3[118 + Var_176]))->bytecode_backend__bytecode__vector_common_type_3_0__vct_3_f_0;
          }
          break;
        case (MR_Integer) 1:
          {
            MR_Word Var_170 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(3), HeadVar__1_1, (MR_Integer) 1))) & (MR_Integer) 15);

            *HeadVar__2_2 = ((&bytecode_backend__bytecode_vector_common_3[58 + Var_170]))->bytecode_backend__bytecode__vector_common_type_3_0__vct_3_f_0;
          }
          break;
        case (MR_Integer) 2:
          {
            MR_Word Var_175 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(3), HeadVar__1_1, (MR_Integer) 1))) & (MR_Integer) 15);

            *HeadVar__2_2 = ((&bytecode_backend__bytecode_vector_common_3[108 + Var_175]))->bytecode_backend__bytecode__vector_common_type_3_0__vct_3_f_0;
          }
          break;
        case (MR_Integer) 3:
          {
            MR_Word Var_179 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(3), HeadVar__1_1, (MR_Integer) 1))) & (MR_Integer) 15);

            *HeadVar__2_2 = ((&bytecode_backend__bytecode_vector_common_3[148 + Var_179]))->bytecode_backend__bytecode__vector_common_type_3_0__vct_3_f_0;
          }
          break;
        case (MR_Integer) 4:
          {
            MR_Word Var_180 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(3), HeadVar__1_1, (MR_Integer) 1))) & (MR_Integer) 15);

            *HeadVar__2_2 = ((&bytecode_backend__bytecode_vector_common_3[158 + Var_180]))->bytecode_backend__bytecode__vector_common_type_3_0__vct_3_f_0;
          }
          break;
        case (MR_Integer) 5:
          {
            MR_Word Var_165 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(3), HeadVar__1_1, (MR_Integer) 1))) & (MR_Integer) 15);

            *HeadVar__2_2 = ((&bytecode_backend__bytecode_vector_common_3[8 + Var_165]))->bytecode_backend__bytecode__vector_common_type_3_0__vct_3_f_0;
          }
          break;
        case (MR_Integer) 6:
          {
            MR_Word Var_166 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(3), HeadVar__1_1, (MR_Integer) 1))) & (MR_Integer) 15);

            *HeadVar__2_2 = ((&bytecode_backend__bytecode_vector_common_3[18 + Var_166]))->bytecode_backend__bytecode__vector_common_type_3_0__vct_3_f_0;
          }
          break;
        case (MR_Integer) 7:
          {
            MR_Word Var_167 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(3), HeadVar__1_1, (MR_Integer) 1))) & (MR_Integer) 15);

            *HeadVar__2_2 = ((&bytecode_backend__bytecode_vector_common_3[28 + Var_167]))->bytecode_backend__bytecode__vector_common_type_3_0__vct_3_f_0;
          }
          break;
        case (MR_Integer) 8:
          {
            MR_Word Var_168 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(3), HeadVar__1_1, (MR_Integer) 1))) & (MR_Integer) 15);

            *HeadVar__2_2 = ((&bytecode_backend__bytecode_vector_common_3[38 + Var_168]))->bytecode_backend__bytecode__vector_common_type_3_0__vct_3_f_0;
          }
          break;
        case (MR_Integer) 9:
          {
            MR_Word Var_178 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(3), HeadVar__1_1, (MR_Integer) 1))) & (MR_Integer) 15);

            *HeadVar__2_2 = ((&bytecode_backend__bytecode_vector_common_3[138 + Var_178]))->bytecode_backend__bytecode__vector_common_type_3_0__vct_3_f_0;
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
            MR_Word Var_174 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(3), HeadVar__1_1, (MR_Integer) 1))) & (MR_Integer) 15);

            *HeadVar__2_2 = ((&bytecode_backend__bytecode_vector_common_3[98 + Var_174]))->bytecode_backend__bytecode__vector_common_type_3_0__vct_3_f_0;
          }
          break;
        case (MR_Integer) 13:
          {
            MR_Word Var_172 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(3), HeadVar__1_1, (MR_Integer) 1))) & (MR_Integer) 15);

            *HeadVar__2_2 = ((&bytecode_backend__bytecode_vector_common_3[78 + Var_172]))->bytecode_backend__bytecode__vector_common_type_3_0__vct_3_f_0;
          }
          break;
        case (MR_Integer) 14:
          {
            MR_Word Var_173 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(3), HeadVar__1_1, (MR_Integer) 1))) & (MR_Integer) 15);

            *HeadVar__2_2 = ((&bytecode_backend__bytecode_vector_common_3[88 + Var_173]))->bytecode_backend__bytecode__vector_common_type_3_0__vct_3_f_0;
          }
          break;
        case (MR_Integer) 15:
          {
            MR_Word Var_171 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(3), HeadVar__1_1, (MR_Integer) 1))) & (MR_Integer) 15);

            *HeadVar__2_2 = ((&bytecode_backend__bytecode_vector_common_3[68 + Var_171]))->bytecode_backend__bytecode__vector_common_type_3_0__vct_3_f_0;
          }
          break;
      }
      break;
  }
}

static void MR_CALL 
bytecode_backend__bytecode__output_cons_id_3_p_0(
  MR_Word HeadVar__1_1)
{
  switch (MR_tag((MR_Word) HeadVar__1_1)) {
    default: /*NOTREACHED*/ MR_assert(0);
    case (MR_Integer) 0:
      switch (MR_unmkbody(HeadVar__1_1)) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 0:
          {
            mercury__require__sorry_2_p_0((MR_String) "predicate \140bytecode_backend.bytecode.output_cons_id\'/3", (MR_String) "bytecode for type_info_cell_constructor not yet implemented.");
            return;
          }
          break;
        case (MR_Integer) 1:
          {
            mercury__require__sorry_2_p_0((MR_String) "predicate \140bytecode_backend.bytecode.output_cons_id\'/3", (MR_String) "bytecode for typeclass_info_cell_constructor not yet implemented.");
            return;
          }
          break;
      }
      break;
    case (MR_Integer) 1:
      {
        MR_Word ModuleId_4 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 0))));
        MR_String Functor_5 = ((MR_String) ((MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 1))));
        MR_Integer Arity_6 = ((MR_Integer) ((MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 2))));
        MR_Word Tag_7 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 3))));

        backend_libs__bytecode_data__output_byte_3_p_0((MR_Integer) 0);
        bytecode_backend__bytecode__output_module_id_3_p_0(ModuleId_4);
        backend_libs__bytecode_data__output_string_3_p_0(Functor_5);
        backend_libs__bytecode_data__output_short_3_p_0(Arity_6);
        bytecode_backend__bytecode__output_tag_3_p_0(Tag_7);
      }
      break;
    case (MR_Integer) 2:
      {
        MR_Integer IntVal_17 = ((MR_Integer) ((MR_hl_field(MR_mktag(2), HeadVar__1_1, (MR_Integer) 0))));

        backend_libs__bytecode_data__output_byte_3_p_0((MR_Integer) 1);
        backend_libs__bytecode_data__output_int_3_p_0(IntVal_17);
      }
      break;
    case (MR_Integer) 3:
      switch (((MR_Integer) ((MR_hl_field(MR_mktag(3), HeadVar__1_1, (MR_Integer) 0))))) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 0:
          {
            MR_String StringVal_24 = ((MR_String) ((MR_hl_field(MR_mktag(3), HeadVar__1_1, (MR_Integer) 1))));

            backend_libs__bytecode_data__output_byte_3_p_0((MR_Integer) 2);
            backend_libs__bytecode_data__output_string_3_p_0(StringVal_24);
          }
          break;
        case (MR_Integer) 1:
          {
            MR_Float FloatVal_31 = MR_unbox_float((MR_hl_field(MR_mktag(3), HeadVar__1_1, (MR_Integer) 1)));

            backend_libs__bytecode_data__output_byte_3_p_0((MR_Integer) 3);
            backend_libs__bytecode_data__output_float_3_p_0(FloatVal_31);
          }
          break;
        case (MR_Integer) 2:
          {
            MR_Char Char_64 = ((MR_Char) (MR_Word) (MR_hl_field(MR_mktag(3), HeadVar__1_1, (MR_Integer) 1)));
            MR_Integer Byte_66;

            backend_libs__bytecode_data__output_byte_3_p_0((MR_Integer) 7);
            mercury__char__to_int_2_p_0(Char_64, &Byte_66);
            backend_libs__bytecode_data__output_byte_3_p_0(Byte_66);
          }
          break;
        case (MR_Integer) 3:
          {
            MR_Word ModuleId_38 = ((MR_Word) ((MR_hl_field(MR_mktag(3), HeadVar__1_1, (MR_Integer) 1))));
            MR_String PredId_39 = ((MR_String) ((MR_hl_field(MR_mktag(3), HeadVar__1_1, (MR_Integer) 2))));
            MR_Integer Arity_40 = ((MR_Integer) ((MR_hl_field(MR_mktag(3), HeadVar__1_1, (MR_Integer) 3))));
            MR_Integer IsFunc_41 = ((MR_Integer) ((MR_hl_field(MR_mktag(3), HeadVar__1_1, (MR_Integer) 4))));
            MR_Integer ProcId_42 = ((MR_Integer) ((MR_hl_field(MR_mktag(3), HeadVar__1_1, (MR_Integer) 5))));

            backend_libs__bytecode_data__output_byte_3_p_0((MR_Integer) 4);
            bytecode_backend__bytecode__output_module_id_3_p_0(ModuleId_38);
            bytecode_backend__bytecode__output_pred_id_3_p_0(PredId_39);
            bytecode_backend__bytecode__output_length_3_p_0(Arity_40);
            bytecode_backend__bytecode__output_is_func_3_p_0(IsFunc_41);
            bytecode_backend__bytecode__output_proc_id_3_p_0(ProcId_42);
          }
          break;
        case (MR_Integer) 4:
          {
            MR_Word ModuleId_53 = ((MR_Word) ((MR_hl_field(MR_mktag(3), HeadVar__1_1, (MR_Integer) 1))));
            MR_String TypeName_54 = ((MR_String) ((MR_hl_field(MR_mktag(3), HeadVar__1_1, (MR_Integer) 2))));
            MR_Integer TypeArity_55 = ((MR_Integer) ((MR_hl_field(MR_mktag(3), HeadVar__1_1, (MR_Integer) 3))));

            backend_libs__bytecode_data__output_byte_3_p_0((MR_Integer) 6);
            bytecode_backend__bytecode__output_module_id_3_p_0(ModuleId_53);
            backend_libs__bytecode_data__output_string_3_p_0(TypeName_54);
            backend_libs__bytecode_data__output_byte_3_p_0(TypeArity_55);
          }
          break;
        case (MR_Integer) 5:
          {
            mercury__require__sorry_2_p_0((MR_String) "predicate \140bytecode_backend.bytecode.output_cons_id\'/3", (MR_String) "bytecode for typeclass not yet implemented.");
            return;
          }
          break;
      }
      break;
  }
}

static void MR_CALL 
bytecode_backend__bytecode__output_tag_3_p_0(
  MR_Word HeadVar__1_1)
{
  switch (MR_tag((MR_Word) HeadVar__1_1)) {
    default: /*NOTREACHED*/ MR_assert(0);
    case (MR_Integer) 0:
      backend_libs__bytecode_data__output_byte_3_p_0((MR_Integer) 4);
      break;
    case (MR_Integer) 1:
      {
        MR_Integer Primary_4 = ((MR_Integer) ((MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 0))));

        backend_libs__bytecode_data__output_byte_3_p_0((MR_Integer) 0);
        backend_libs__bytecode_data__output_byte_3_p_0(Primary_4);
      }
      break;
    case (MR_Integer) 2:
      {
        MR_Integer Primary_11 = ((MR_Integer) ((MR_hl_field(MR_mktag(2), HeadVar__1_1, (MR_Integer) 0))));
        MR_Integer Secondary_12 = ((MR_Integer) ((MR_hl_field(MR_mktag(2), HeadVar__1_1, (MR_Integer) 1))));

        backend_libs__bytecode_data__output_byte_3_p_0((MR_Integer) 1);
        backend_libs__bytecode_data__output_byte_3_p_0(Primary_11);
        backend_libs__bytecode_data__output_int_3_p_0(Secondary_12);
      }
      break;
    case (MR_Integer) 3:
      switch (((MR_Integer) ((MR_hl_field(MR_mktag(3), HeadVar__1_1, (MR_Integer) 0))))) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 0:
          {
            MR_Integer Primary_20 = ((MR_Integer) ((MR_hl_field(MR_mktag(3), HeadVar__1_1, (MR_Integer) 1))));
            MR_Integer Secondary_21 = ((MR_Integer) ((MR_hl_field(MR_mktag(3), HeadVar__1_1, (MR_Integer) 2))));

            backend_libs__bytecode_data__output_byte_3_p_0((MR_Integer) 2);
            backend_libs__bytecode_data__output_byte_3_p_0(Primary_20);
            backend_libs__bytecode_data__output_int_3_p_0(Secondary_21);
          }
          break;
        case (MR_Integer) 1:
          {
            MR_Integer Enum_29 = ((MR_Integer) ((MR_hl_field(MR_mktag(3), HeadVar__1_1, (MR_Integer) 1))));

            backend_libs__bytecode_data__output_byte_3_p_0((MR_Integer) 3);
            backend_libs__bytecode_data__output_byte_3_p_0(Enum_29);
          }
          break;
      }
      break;
  }
}

static void MR_CALL 
bytecode_backend__bytecode__output_label_id_3_p_0(
  MR_Integer LabelId_4)
{
  backend_libs__bytecode_data__output_short_3_p_0(LabelId_4);
}

static void MR_CALL 
bytecode_backend__bytecode__output_proc_id_3_p_0(
  MR_Integer ProcId_4)
{
  backend_libs__bytecode_data__output_byte_3_p_0(ProcId_4);
}

static void MR_CALL 
bytecode_backend__bytecode__output_pred_id_3_p_0(
  MR_String PredId_4)
{
  backend_libs__bytecode_data__output_string_3_p_0(PredId_4);
}

static void MR_CALL 
bytecode_backend__bytecode__output_module_id_3_p_0(
  MR_Word ModuleId_4)
{
  {
    MR_String Var_8;

    Var_8 = mdbcomp__sym_name__sym_name_to_string_1_f_0(ModuleId_4);
    backend_libs__bytecode_data__output_string_3_p_0(Var_8);
  }
}

static void MR_CALL 
bytecode_backend__bytecode__output_test_id_3_p_0(
  MR_Word HeadVar__1_1)
{
  switch (HeadVar__1_1) {
    default: /*NOTREACHED*/ MR_assert(0);
    case (MR_Integer) 1:
      backend_libs__bytecode_data__output_byte_3_p_0((MR_Integer) 1);
      break;
    case (MR_Integer) 5:
      backend_libs__bytecode_data__output_byte_3_p_0((MR_Integer) 5);
      break;
    case (MR_Integer) 4:
      backend_libs__bytecode_data__output_byte_3_p_0((MR_Integer) 4);
      break;
    case (MR_Integer) 3:
      backend_libs__bytecode_data__output_byte_3_p_0((MR_Integer) 3);
      break;
    case (MR_Integer) 0:
      backend_libs__bytecode_data__output_byte_3_p_0((MR_Integer) 0);
      break;
    case (MR_Integer) 2:
      backend_libs__bytecode_data__output_byte_3_p_0((MR_Integer) 2);
      break;
  }
}

static void MR_CALL 
bytecode_backend__bytecode__output_var_dirs_3_p_0(
  MR_Word HeadVar__1_1)
{
  while (MR_TRUE)
  {
    // setup for model_det tailcalls optimized into a loop
    ;
    if (!((HeadVar__1_1 == (MR_Word) ((MR_Unsigned) 0U))))
    {
      MR_Integer Var_7;
      MR_Word Dir_8;
      MR_Word VarDirs_9 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 1))));
      MR_Word Var_13 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 0))));
      MR_Word next_value_of_HeadVar__1_1;

      Var_7 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), Var_13, (MR_Integer) 0))));
      Dir_8 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Var_13, (MR_Integer) 1))));
      backend_libs__bytecode_data__output_short_3_p_0(Var_7);
      switch (Dir_8) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 0:
          backend_libs__bytecode_data__output_byte_3_p_0((MR_Integer) 0);
          break;
        case (MR_Integer) 2:
          backend_libs__bytecode_data__output_byte_3_p_0((MR_Integer) 2);
          break;
        case (MR_Integer) 1:
          backend_libs__bytecode_data__output_byte_3_p_0((MR_Integer) 1);
          break;
      }
      // direct tailcall eliminated
      ;
      next_value_of_HeadVar__1_1 = VarDirs_9;
      HeadVar__1_1 = next_value_of_HeadVar__1_1;
      continue;
    }
    break;
  }
}

static void MR_CALL 
bytecode_backend__bytecode__output_temp_3_p_0(
  MR_Integer Var_4)
{
  backend_libs__bytecode_data__output_short_3_p_0(Var_4);
}

static void MR_CALL 
bytecode_backend__bytecode__output_vars_3_p_0(
  MR_Word HeadVar__1_1)
{
  while (MR_TRUE)
  {
    // setup for model_det tailcalls optimized into a loop
    ;
    if (!((HeadVar__1_1 == (MR_Word) ((MR_Unsigned) 0U))))
    {
      MR_Integer Var_7 = ((MR_Integer) ((MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 0))));
      MR_Word Vars_8 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 1))));
      MR_Word next_value_of_HeadVar__1_1;

      backend_libs__bytecode_data__output_short_3_p_0(Var_7);
      // direct tailcall eliminated
      ;
      next_value_of_HeadVar__1_1 = Vars_8;
      HeadVar__1_1 = next_value_of_HeadVar__1_1;
      continue;
    }
    break;
  }
}

static void MR_CALL 
bytecode_backend__bytecode__output_var_3_p_0(
  MR_Integer Var_4)
{
  backend_libs__bytecode_data__output_short_3_p_0(Var_4);
}

static void MR_CALL 
bytecode_backend__bytecode__output_arg_3_p_0(
  MR_Word HeadVar__1_1)
{
  switch (MR_tag((MR_Word) HeadVar__1_1)) {
    default: /*NOTREACHED*/ MR_assert(0);
    case (MR_Integer) 0:
      {
        MR_Integer Var_4 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), HeadVar__1_1, (MR_Integer) 0))));

        backend_libs__bytecode_data__output_byte_3_p_0((MR_Integer) 0);
        backend_libs__bytecode_data__output_short_3_p_0(Var_4);
      }
      break;
    case (MR_Integer) 1:
      {
        MR_Integer IntVal_11 = ((MR_Integer) ((MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 0))));

        backend_libs__bytecode_data__output_byte_3_p_0((MR_Integer) 1);
        backend_libs__bytecode_data__output_int_3_p_0(IntVal_11);
      }
      break;
    case (MR_Integer) 2:
      {
        MR_Float FloatVal_18 = MR_unbox_float((MR_hl_field(MR_mktag(2), HeadVar__1_1, (MR_Integer) 0)));

        backend_libs__bytecode_data__output_byte_3_p_0((MR_Integer) 2);
        backend_libs__bytecode_data__output_float_3_p_0(FloatVal_18);
      }
      break;
    case (MR_Integer) 3:
      switch (((MR_Integer) ((MR_hl_field(MR_mktag(3), HeadVar__1_1, (MR_Integer) 0))))) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 0:
          {
            mercury__require__unexpected_2_p_0((MR_String) "predicate \140bytecode_backend.bytecode.output_arg\'/3", (MR_String) "NYI uint constants in bytecode");
            return;
          }
          break;
        case (MR_Integer) 1:
          {
            mercury__require__unexpected_2_p_0((MR_String) "predicate \140bytecode_backend.bytecode.output_arg\'/3", (MR_String) "NYI int8 constants in bytecode");
            return;
          }
          break;
        case (MR_Integer) 2:
          {
            mercury__require__unexpected_2_p_0((MR_String) "predicate \140bytecode_backend.bytecode.output_arg\'/3", (MR_String) "NYI uint8 constants in bytecode");
            return;
          }
          break;
        case (MR_Integer) 3:
          {
            mercury__require__unexpected_2_p_0((MR_String) "predicate \140bytecode_backend.bytecode.output_arg\'/3", (MR_String) "NYI int16 constants in bytecode");
            return;
          }
          break;
        case (MR_Integer) 4:
          {
            mercury__require__unexpected_2_p_0((MR_String) "predicate \140bytecode_backend.bytecode.output_arg\'/3", (MR_String) "NYI uint16 constants in bytecode");
            return;
          }
          break;
        case (MR_Integer) 5:
          {
            mercury__require__unexpected_2_p_0((MR_String) "predicate \140bytecode_backend.bytecode.output_arg\'/3", (MR_String) "NYI int32 constants in bytecode");
            return;
          }
          break;
        case (MR_Integer) 6:
          {
            mercury__require__unexpected_2_p_0((MR_String) "predicate \140bytecode_backend.bytecode.output_arg\'/3", (MR_String) "NYI uint32 constants in bytecode");
            return;
          }
          break;
        case (MR_Integer) 7:
          {
            mercury__require__unexpected_2_p_0((MR_String) "predicate \140bytecode_backend.bytecode.output_arg\'/3", (MR_String) "NYI int64 constants in bytecode");
            return;
          }
          break;
        case (MR_Integer) 8:
          {
            mercury__require__unexpected_2_p_0((MR_String) "predicate \140bytecode_backend.bytecode.output_arg\'/3", (MR_String) "NYI uint64 constants in bytecode");
            return;
          }
          break;
      }
      break;
  }
}

static void MR_CALL 
bytecode_backend__bytecode__output_length_3_p_0(
  MR_Integer Length_4)
{
  backend_libs__bytecode_data__output_short_3_p_0(Length_4);
}

static void MR_CALL 
bytecode_backend__bytecode__output_is_func_3_p_0(
  MR_Integer IsFunc_4)
{
  {
    MR_bool succeeded;

    switch (IsFunc_4) {
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
      backend_libs__bytecode_data__output_byte_3_p_0(IsFunc_4);
    else
      {
        mercury__require__unexpected_2_p_0((MR_String) "predicate \140bytecode_backend.bytecode.output_is_func\'/3", (MR_String) "invalid predicate or function specified in bytecode");
        return;
      }
  }
}

static void MR_CALL 
bytecode_backend__bytecode__output_determinism_3_p_0(
  MR_Word Detism_4)
{
  {
    MR_Integer Code_6 = ((&bytecode_backend__bytecode_vector_common_3[0 + Detism_4]))->bytecode_backend__bytecode__vector_common_type_3_0__vct_3_f_0;

    backend_libs__bytecode_data__output_byte_3_p_0(Code_6);
  }
}

static void MR_CALL 
bytecode_backend__bytecode__output_var_infos_3_p_0(
  MR_Word HeadVar__1_1)
{
  while (MR_TRUE)
  {
    // setup for model_det tailcalls optimized into a loop
    ;
    if (!((HeadVar__1_1 == (MR_Word) ((MR_Unsigned) 0U))))
    {
      MR_Word Var_7 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 0))));
      MR_Word Vars_8 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 1))));
      MR_String Name_16 = ((MR_String) ((MR_hl_field(MR_mktag(0), Var_7, (MR_Integer) 0))));
      MR_Word next_value_of_HeadVar__1_1;

      backend_libs__bytecode_data__output_string_3_p_0(Name_16);
      // direct tailcall eliminated
      ;
      next_value_of_HeadVar__1_1 = Vars_8;
      HeadVar__1_1 = next_value_of_HeadVar__1_1;
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
  {
    MR_bool succeeded;

    succeeded = bytecode_backend__bytecode____Unify____byte_arg_0_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
    return succeeded;
  }
}

static void MR_CALL 
bytecode_backend__bytecode____Compare____byte_arg_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  {
    MR_Word conv0_HeadVar__1_1;

    bytecode_backend__bytecode____Compare____byte_arg_0_0(&conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
    *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
  }
}

static MR_bool MR_CALL 
bytecode_backend__bytecode____Unify____byte_code_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  {
    MR_bool succeeded;

    succeeded = bytecode_backend__bytecode____Unify____byte_code_0_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
    return succeeded;
  }
}

static void MR_CALL 
bytecode_backend__bytecode____Compare____byte_code_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  {
    MR_Word conv0_HeadVar__1_1;

    bytecode_backend__bytecode____Compare____byte_code_0_0(&conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
    *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
  }
}

static MR_bool MR_CALL 
bytecode_backend__bytecode____Unify____byte_cons_id_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  {
    MR_bool succeeded;

    succeeded = bytecode_backend__bytecode____Unify____byte_cons_id_0_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
    return succeeded;
  }
}

static void MR_CALL 
bytecode_backend__bytecode____Compare____byte_cons_id_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  {
    MR_Word conv0_HeadVar__1_1;

    bytecode_backend__bytecode____Compare____byte_cons_id_0_0(&conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
    *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
  }
}

static MR_bool MR_CALL 
bytecode_backend__bytecode____Unify____byte_cons_tag_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  {
    MR_bool succeeded;

    succeeded = bytecode_backend__bytecode____Unify____byte_cons_tag_0_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
    return succeeded;
  }
}

static void MR_CALL 
bytecode_backend__bytecode____Compare____byte_cons_tag_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  {
    MR_Word conv0_HeadVar__1_1;

    bytecode_backend__bytecode____Compare____byte_cons_tag_0_0(&conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
    *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
  }
}

static MR_bool MR_CALL 
bytecode_backend__bytecode____Unify____byte_dir_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  {
    MR_bool succeeded;

    succeeded = bytecode_backend__bytecode____Unify____byte_dir_0_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
    return succeeded;
  }
}

static void MR_CALL 
bytecode_backend__bytecode____Compare____byte_dir_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  {
    MR_Word conv0_HeadVar__1_1;

    bytecode_backend__bytecode____Compare____byte_dir_0_0(&conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
    *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
  }
}

static MR_bool MR_CALL 
bytecode_backend__bytecode____Unify____byte_is_func_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  {
    MR_bool succeeded;

    succeeded = bytecode_backend__bytecode____Unify____byte_is_func_0_0(((MR_Integer) (wrapper_arg_1)), ((MR_Integer) (wrapper_arg_2)));
    return succeeded;
  }
}

static void MR_CALL 
bytecode_backend__bytecode____Compare____byte_is_func_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  {
    MR_Word conv0_HeadVar__1_1;

    bytecode_backend__bytecode____Compare____byte_is_func_0_0(&conv0_HeadVar__1_1, ((MR_Integer) (wrapper_arg_2)), ((MR_Integer) (wrapper_arg_3)));
    *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
  }
}

static MR_bool MR_CALL 
bytecode_backend__bytecode____Unify____byte_label_id_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  {
    MR_bool succeeded;

    succeeded = bytecode_backend__bytecode____Unify____byte_label_id_0_0(((MR_Integer) (wrapper_arg_1)), ((MR_Integer) (wrapper_arg_2)));
    return succeeded;
  }
}

static void MR_CALL 
bytecode_backend__bytecode____Compare____byte_label_id_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  {
    MR_Word conv0_HeadVar__1_1;

    bytecode_backend__bytecode____Compare____byte_label_id_0_0(&conv0_HeadVar__1_1, ((MR_Integer) (wrapper_arg_2)), ((MR_Integer) (wrapper_arg_3)));
    *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
  }
}

static MR_bool MR_CALL 
bytecode_backend__bytecode____Unify____byte_module_id_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  {
    MR_bool succeeded;

    succeeded = bytecode_backend__bytecode____Unify____byte_module_id_0_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
    return succeeded;
  }
}

static void MR_CALL 
bytecode_backend__bytecode____Compare____byte_module_id_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  {
    MR_Word conv0_HeadVar__1_1;

    bytecode_backend__bytecode____Compare____byte_module_id_0_0(&conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
    *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
  }
}

static MR_bool MR_CALL 
bytecode_backend__bytecode____Unify____byte_pred_id_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  {
    MR_bool succeeded;

    succeeded = bytecode_backend__bytecode____Unify____byte_pred_id_0_0(((MR_String) (wrapper_arg_1)), ((MR_String) (wrapper_arg_2)));
    return succeeded;
  }
}

static void MR_CALL 
bytecode_backend__bytecode____Compare____byte_pred_id_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  {
    MR_Word conv0_HeadVar__1_1;

    bytecode_backend__bytecode____Compare____byte_pred_id_0_0(&conv0_HeadVar__1_1, ((MR_String) (wrapper_arg_2)), ((MR_String) (wrapper_arg_3)));
    *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
  }
}

static MR_bool MR_CALL 
bytecode_backend__bytecode____Unify____byte_proc_id_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  {
    MR_bool succeeded;

    succeeded = bytecode_backend__bytecode____Unify____byte_proc_id_0_0(((MR_Integer) (wrapper_arg_1)), ((MR_Integer) (wrapper_arg_2)));
    return succeeded;
  }
}

static void MR_CALL 
bytecode_backend__bytecode____Compare____byte_proc_id_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  {
    MR_Word conv0_HeadVar__1_1;

    bytecode_backend__bytecode____Compare____byte_proc_id_0_0(&conv0_HeadVar__1_1, ((MR_Integer) (wrapper_arg_2)), ((MR_Integer) (wrapper_arg_3)));
    *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
  }
}

static MR_bool MR_CALL 
bytecode_backend__bytecode____Unify____byte_reg_type_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  {
    MR_bool succeeded;

    succeeded = bytecode_backend__bytecode____Unify____byte_reg_type_0_0();
    return succeeded;
  }
}

static void MR_CALL 
bytecode_backend__bytecode____Compare____byte_reg_type_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  {
    MR_Word conv0_HeadVar__1_1;

    bytecode_backend__bytecode____Compare____byte_reg_type_0_0(&conv0_HeadVar__1_1);
    *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
  }
}

static MR_bool MR_CALL 
bytecode_backend__bytecode____Unify____byte_temp_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  {
    MR_bool succeeded;

    succeeded = bytecode_backend__bytecode____Unify____byte_temp_0_0(((MR_Integer) (wrapper_arg_1)), ((MR_Integer) (wrapper_arg_2)));
    return succeeded;
  }
}

static void MR_CALL 
bytecode_backend__bytecode____Compare____byte_temp_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  {
    MR_Word conv0_HeadVar__1_1;

    bytecode_backend__bytecode____Compare____byte_temp_0_0(&conv0_HeadVar__1_1, ((MR_Integer) (wrapper_arg_2)), ((MR_Integer) (wrapper_arg_3)));
    *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
  }
}

static MR_bool MR_CALL 
bytecode_backend__bytecode____Unify____byte_test_id_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  {
    MR_bool succeeded;

    succeeded = bytecode_backend__bytecode____Unify____byte_test_id_0_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
    return succeeded;
  }
}

static void MR_CALL 
bytecode_backend__bytecode____Compare____byte_test_id_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  {
    MR_Word conv0_HeadVar__1_1;

    bytecode_backend__bytecode____Compare____byte_test_id_0_0(&conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
    *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
  }
}

static MR_bool MR_CALL 
bytecode_backend__bytecode____Unify____byte_tree_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  {
    MR_bool succeeded;

    succeeded = bytecode_backend__bytecode____Unify____byte_tree_0_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
    return succeeded;
  }
}

static void MR_CALL 
bytecode_backend__bytecode____Compare____byte_tree_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  {
    MR_Word conv0_HeadVar__1_1;

    bytecode_backend__bytecode____Compare____byte_tree_0_0(&conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
    *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
  }
}

static MR_bool MR_CALL 
bytecode_backend__bytecode____Unify____byte_var_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  {
    MR_bool succeeded;

    succeeded = bytecode_backend__bytecode____Unify____byte_var_0_0(((MR_Integer) (wrapper_arg_1)), ((MR_Integer) (wrapper_arg_2)));
    return succeeded;
  }
}

static void MR_CALL 
bytecode_backend__bytecode____Compare____byte_var_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  {
    MR_Word conv0_HeadVar__1_1;

    bytecode_backend__bytecode____Compare____byte_var_0_0(&conv0_HeadVar__1_1, ((MR_Integer) (wrapper_arg_2)), ((MR_Integer) (wrapper_arg_3)));
    *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
  }
}

static MR_bool MR_CALL 
bytecode_backend__bytecode____Unify____byte_var_info_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  {
    MR_bool succeeded;

    succeeded = bytecode_backend__bytecode____Unify____byte_var_info_0_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
    return succeeded;
  }
}

static void MR_CALL 
bytecode_backend__bytecode____Compare____byte_var_info_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  {
    MR_Word conv0_HeadVar__1_1;

    bytecode_backend__bytecode____Compare____byte_var_info_0_0(&conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
    *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
  }
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
