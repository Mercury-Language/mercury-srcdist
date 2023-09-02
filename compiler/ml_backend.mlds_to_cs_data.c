/*
** Automatically generated from `mlds_to_cs_data.m'
** by the Mercury compiler,
** version rotd-2023-09-02
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


// :- module ml_backend.mlds_to_cs_data.
// :- implementation.

/*
INIT mercury__ml_backend__mlds_to_cs_data__init
ENDINIT
*/

#include "ml_backend.mlds_to_cs_data.mih"


#include "analysis.mih"
#include "array.mih"
#include "assoc_list.mih"
#include "backend_libs.mih"
#include "bitmap.mih"
#include "bool.mih"
#include "builtin.mih"
#include "char.mih"
#include "check_hlds.mih"
#include "construct.mih"
#include "cord.mih"
#include "counter.mih"
#include "deconstruct.mih"
#include "digraph.mih"
#include "enum.mih"
#include "getopt.mih"
#include "hlds.mih"
#include "int.mih"
#include "int32.mih"
#include "integer.mih"
#include "io.mih"
#include "libs.mih"
#include "list.mih"
#include "map.mih"
#include "maybe.mih"
#include "mdbcomp.mih"
#include "ml_backend.mih"
#include "multi_map.mih"
#include "one_or_more.mih"
#include "one_or_more_map.mih"
#include "ops.mih"
#include "pair.mih"
#include "parse_tree.mih"
#include "pretty_printer.mih"
#include "private_builtin.mih"
#include "queue.mih"
#include "recompilation.mih"
#include "require.mih"
#include "set.mih"
#include "set_ordlist.mih"
#include "set_tree234.mih"
#include "sparse_bitset.mih"
#include "stream.mih"
#include "string.mih"
#include "term.mih"
#include "term_context.mih"
#include "time.mih"
#include "tree234.mih"
#include "type_desc.mih"
#include "uint32.mih"
#include "unit.mih"
#include "univ.mih"
#include "varset.mih"
#include "backend_libs.builtin_ops.mih"
#include "backend_libs.c_util.mih"
#include "backend_libs.rtti.mih"
#include "check_hlds.proc_requests.mih"
#include "hlds.code_model.mih"
#include "hlds.const_struct.mih"
#include "hlds.hlds_class.mih"
#include "hlds.hlds_cons.mih"
#include "hlds.hlds_data.mih"
#include "hlds.hlds_dependency_graph.mih"
#include "hlds.hlds_inst_mode.mih"
#include "hlds.hlds_module.mih"
#include "hlds.hlds_pred.mih"
#include "hlds.hlds_promise.mih"
#include "hlds.hlds_rtti.mih"
#include "hlds.pred_table.mih"
#include "hlds.special_pred.mih"
#include "hlds.status.mih"
#include "libs.dependency_graph.mih"
#include "libs.globals.mih"
#include "libs.indent.mih"
#include "libs.op_mode.mih"
#include "libs.optimization_options.mih"
#include "libs.options.mih"
#include "libs.timestamp.mih"
#include "libs.trace_params.mih"
#include "mdbcomp.feedback.mih"
#include "mdbcomp.prim_data.mih"
#include "mdbcomp.sym_name.mih"
#include "ml_backend.ml_global_data.mih"
#include "ml_backend.ml_util.mih"
#include "ml_backend.mlds.mih"
#include "ml_backend.mlds_to_cs_name.mih"
#include "ml_backend.mlds_to_cs_type.mih"
#include "ml_backend.mlds_to_cs_util.mih"
#include "ml_backend.mlds_to_target_util.mih"
#include "parse_tree.builtin_lib_types.mih"
#include "parse_tree.java_names.mih"
#include "parse_tree.module_qual.mih"
#include "parse_tree.prog_data.mih"
#include "parse_tree.prog_data_event.mih"
#include "parse_tree.prog_data_foreign.mih"
#include "parse_tree.prog_data_pragma.mih"
#include "parse_tree.prog_data_used_modules.mih"
#include "parse_tree.prog_foreign.mih"
#include "parse_tree.prog_item.mih"
#include "parse_tree.prog_type.mih"
#include "parse_tree.prog_util.mih"
#include "parse_tree.set_of_var.mih"
#include "string.format.mih"
#include "string.parse_util.mih"




static const MR_EnumFunctorDesc ml_backend__mlds_to_cs_data__ml_backend__mlds_to_cs_data__enum_functor_desc_maybe_for_call_0_0;

static const MR_EnumFunctorDesc ml_backend__mlds_to_cs_data__ml_backend__mlds_to_cs_data__enum_functor_desc_maybe_for_call_0_1;

static const MR_EnumFunctorDescPtr ml_backend__mlds_to_cs_data__ml_backend__mlds_to_cs_data__enum_ordinal_ordered_maybe_for_call_0[2];

static const MR_EnumFunctorDescPtr ml_backend__mlds_to_cs_data__ml_backend__mlds_to_cs_data__enum_name_ordered_maybe_for_call_0[2];

static const MR_Integer ml_backend__mlds_to_cs_data__ml_backend__mlds_to_cs_data__functor_number_map_maybe_for_call_0[2];

static MR_bool MR_CALL 
ml_backend__mlds_to_cs_data__IntroducedFrom__pred__output_rval_const_for_csharp__717__1_2_p_0(
  MR_Word Lang_13,
  MR_Word HeadVar__2_59);

static void MR_CALL 
ml_backend__mlds_to_cs_data__output_initializer_body_list_for_csharp_8_p_0(
  MR_Word Info_9,
  MR_Word Stream_10,
  MR_Integer Indent_11,
  MR_Word HeadInit_12,
  MR_Word TailInits_13,
  MR_String Suffix_14);

static MR_bool MR_CALL 
ml_backend__mlds_to_cs_data__output_rval_const_for_csharp_5_p_0_1(
  MR_Box closure_arg);

static void MR_CALL 
ml_backend__mlds_to_cs_data__output_bracketed_rval_for_csharp_5_p_0(
  MR_Word tscc_proc_3_input_1_Info_6,
  MR_Word tscc_proc_3_input_2_Rval_7,
  MR_Word tscc_proc_3_input_3_Stream_8);

static void MR_CALL 
ml_backend__mlds_to_cs_data__output_cast_rval_for_csharp_6_p_0(
  MR_Word tscc_proc_4_input_1_Info_7,
  MR_Word tscc_proc_4_input_2_Type_8,
  MR_Word tscc_proc_4_input_3_Expr_9,
  MR_Word tscc_proc_4_input_4_Stream_10);

static void MR_CALL 
ml_backend__mlds_to_cs_data__output_rval_const_for_csharp_5_p_0(
  MR_Word tscc_proc_5_input_1_Info_6,
  MR_Word tscc_proc_5_input_2_Stream_7,
  MR_Word tscc_proc_5_input_3_Const_8);

static void MR_CALL 
ml_backend__mlds_to_cs_data__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_111_117_116_112_117_116_95_98_111_120_101_100_95_114_118_97_108_95_102_111_114_95_99_115_104_97_114_112_95_95_91_50_93_95_48_6_p_0(
  MR_Word tscc_proc_6_input_1_Info_7,
  MR_Word tscc_proc_6_input_2_Expr_9,
  MR_Word tscc_proc_6_input_3_Stream_10);

static void MR_CALL 
ml_backend__mlds_to_cs_data__output_binop_for_csharp_7_p_0(
  MR_Word Info_8,
  MR_Word Stream_9,
  MR_Word Op_10,
  MR_Word X_11,
  MR_Word Y_12);

static void MR_CALL 
ml_backend__mlds_to_cs_data__output_int_binop_for_csharp_7_p_0(
  MR_Word Info_8,
  MR_Word Stream_9,
  MR_Word Op_10,
  MR_Word X_11,
  MR_Word Y_12);

static void MR_CALL 
ml_backend__mlds_to_cs_data__output_basic_binop_for_csharp_7_p_0(
  MR_Word Info_8,
  MR_Word Stream_9,
  MR_String OpStr_10,
  MR_Word X_11,
  MR_Word Y_12);

static void MR_CALL 
ml_backend__mlds_to_cs_data__output_unop_for_csharp_6_p_0(
  MR_Word Info_7,
  MR_Word Stream_8,
  MR_Word UnaryOp_9,
  MR_Word Expr_10);

static void MR_CALL 
ml_backend__mlds_to_cs_data__output_unboxed_rval_for_csharp_6_p_0(
  MR_Word Info_7,
  MR_Word Type_8,
  MR_Word Expr_9,
  MR_Word Stream_10);

static MR_String MR_CALL 
ml_backend__mlds_to_cs_data__get_default_initializer_for_csharp_2_f_0(
  MR_Word Info_4,
  MR_Word Type_5);

static void MR_CALL 
ml_backend__mlds_to_cs_data__output_uint64_const_for_csharp_4_p_0(
  MR_Word Stream_5,
  uint64_t U64_6);

static void MR_CALL 
ml_backend__mlds_to_cs_data__output_uint8_const_for_csharp_4_p_0(
  MR_Word Stream_5,
  uint8_t U8_6);

static void MR_CALL 
ml_backend__mlds_to_cs_data__output_int_const_for_csharp_4_p_0(
  MR_Word Stream_5,
  MR_Integer N_6);

static MR_bool MR_CALL 
ml_backend__mlds_to_cs_data____Unify____maybe_for_call_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2);

static void MR_CALL 
ml_backend__mlds_to_cs_data____Compare____maybe_for_call_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3);


static /* final */ const MR_Box ml_backend__mlds_to_cs_data_scalar_common_1[1][1];

static /* final */ const MR_Box ml_backend__mlds_to_cs_data_scalar_common_3[1][5];


struct ml_backend__mlds_to_cs_data__vector_common_type_2_0_s {
  const MR_String ml_backend__mlds_to_cs_data__vector_common_type_2_0__vct_2_f_0;
};

static /* final */ const struct ml_backend__mlds_to_cs_data__vector_common_type_2_0_s ml_backend__mlds_to_cs_data_vector_common_2[110];



static /* final */ const MR_Box ml_backend__mlds_to_cs_data_scalar_common_1[1][1] = {
  /* row   0 */
  { (MR_Box) (((((MR_Unsigned) 0U << 4)) | (((((MR_Unsigned) 0U << 3)) | (((((MR_Unsigned) 0U << 2)) | (((MR_Unsigned) 0U << 1)))))))) },
};

static /* final */ const MR_Box ml_backend__mlds_to_cs_data_scalar_common_3[1][5] = {
  /* row   0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 2)),
    ((MR_Box) (&libs__globals__libs__globals__type_ctor_info_foreign_language_0)),
    ((MR_Box) (&libs__globals__libs__globals__type_ctor_info_foreign_language_0))
  },
};


static /* final */ const struct ml_backend__mlds_to_cs_data__vector_common_type_2_0_s ml_backend__mlds_to_cs_data_vector_common_2[110] = {
  /* row   0 */   { (MR_String) "0" },
  /* row   1 */   { (MR_String) "0U" },
  /* row   2 */   { (MR_String) "0" },
  /* row   3 */   { (MR_String) "0" },
  /* row   4 */   { (MR_String) "0" },
  /* row   5 */   { (MR_String) "0" },
  /* row   6 */   { (MR_String) "0" },
  /* row   7 */   { (MR_String) "0U" },
  /* row   8 */   { (MR_String) "0L" },
  /* row   9 */   { (MR_String) "0UL" },
  /* row  10 */   { (MR_String) "" },
  /* row  11 */   { (MR_String) "" },
  /* row  12 */   { (MR_String) "(sbyte) " },
  /* row  13 */   { (MR_String) "(byte) " },
  /* row  14 */   { (MR_String) "(short) " },
  /* row  15 */   { (MR_String) "(ushort) " },
  /* row  16 */   { (MR_String) "" },
  /* row  17 */   { (MR_String) "" },
  /* row  18 */   { (MR_String) "" },
  /* row  19 */   { (MR_String) "" },
  /* row  20 */   { (MR_String) "" },
  /* row  21 */   { (MR_String) "" },
  /* row  22 */   { (MR_String) "(sbyte) " },
  /* row  23 */   { (MR_String) "(byte) " },
  /* row  24 */   { (MR_String) "(short) " },
  /* row  25 */   { (MR_String) "(ushort) " },
  /* row  26 */   { (MR_String) "" },
  /* row  27 */   { (MR_String) "" },
  /* row  28 */   { (MR_String) "" },
  /* row  29 */   { (MR_String) "" },
  /* row  30 */   { (MR_String) "" },
  /* row  31 */   { (MR_String) "" },
  /* row  32 */   { (MR_String) "(sbyte) " },
  /* row  33 */   { (MR_String) "(byte) " },
  /* row  34 */   { (MR_String) "(short) " },
  /* row  35 */   { (MR_String) "(ushort) " },
  /* row  36 */   { (MR_String) "" },
  /* row  37 */   { (MR_String) "" },
  /* row  38 */   { (MR_String) "" },
  /* row  39 */   { (MR_String) "" },
  /* row  40 */   { (MR_String) "" },
  /* row  41 */   { (MR_String) "" },
  /* row  42 */   { (MR_String) "(sbyte) " },
  /* row  43 */   { (MR_String) "(byte) " },
  /* row  44 */   { (MR_String) "(short) " },
  /* row  45 */   { (MR_String) "(ushort) " },
  /* row  46 */   { (MR_String) "" },
  /* row  47 */   { (MR_String) "" },
  /* row  48 */   { (MR_String) "" },
  /* row  49 */   { (MR_String) "" },
  /* row  50 */   { (MR_String) "" },
  /* row  51 */   { (MR_String) "" },
  /* row  52 */   { (MR_String) "(sbyte) " },
  /* row  53 */   { (MR_String) "(byte) " },
  /* row  54 */   { (MR_String) "(short) " },
  /* row  55 */   { (MR_String) "(ushort) " },
  /* row  56 */   { (MR_String) "" },
  /* row  57 */   { (MR_String) "" },
  /* row  58 */   { (MR_String) "" },
  /* row  59 */   { (MR_String) "" },
  /* row  60 */   { (MR_String) "" },
  /* row  61 */   { (MR_String) "" },
  /* row  62 */   { (MR_String) "(sbyte) " },
  /* row  63 */   { (MR_String) "(byte) " },
  /* row  64 */   { (MR_String) "(short) " },
  /* row  65 */   { (MR_String) "(ushort) " },
  /* row  66 */   { (MR_String) "" },
  /* row  67 */   { (MR_String) "" },
  /* row  68 */   { (MR_String) "" },
  /* row  69 */   { (MR_String) "" },
  /* row  70 */   { (MR_String) "" },
  /* row  71 */   { (MR_String) "" },
  /* row  72 */   { (MR_String) "(sbyte) " },
  /* row  73 */   { (MR_String) "(byte) " },
  /* row  74 */   { (MR_String) "(short) " },
  /* row  75 */   { (MR_String) "(ushort) " },
  /* row  76 */   { (MR_String) "" },
  /* row  77 */   { (MR_String) "" },
  /* row  78 */   { (MR_String) "" },
  /* row  79 */   { (MR_String) "" },
  /* row  80 */   { (MR_String) "" },
  /* row  81 */   { (MR_String) "" },
  /* row  82 */   { (MR_String) "(sbyte) " },
  /* row  83 */   { (MR_String) "(byte) " },
  /* row  84 */   { (MR_String) "(short) " },
  /* row  85 */   { (MR_String) "(ushort) " },
  /* row  86 */   { (MR_String) "" },
  /* row  87 */   { (MR_String) "" },
  /* row  88 */   { (MR_String) "" },
  /* row  89 */   { (MR_String) "" },
  /* row  90 */   { (MR_String) "" },
  /* row  91 */   { (MR_String) "" },
  /* row  92 */   { (MR_String) "(sbyte) " },
  /* row  93 */   { (MR_String) "(byte) " },
  /* row  94 */   { (MR_String) "(short) " },
  /* row  95 */   { (MR_String) "(ushort) " },
  /* row  96 */   { (MR_String) "" },
  /* row  97 */   { (MR_String) "" },
  /* row  98 */   { (MR_String) "" },
  /* row  99 */   { (MR_String) "" },
  /* row 100 */   { (MR_String) "0" },
  /* row 101 */   { (MR_String) "0U" },
  /* row 102 */   { (MR_String) "0" },
  /* row 103 */   { (MR_String) "0" },
  /* row 104 */   { (MR_String) "0" },
  /* row 105 */   { (MR_String) "0" },
  /* row 106 */   { (MR_String) "0" },
  /* row 107 */   { (MR_String) "0U" },
  /* row 108 */   { (MR_String) "0L" },
  /* row 109 */   { (MR_String) "0UL" },
};


#include "array.mh"
#include "bitmap.mh"
#include "io.mh"
#include "string.mh"
#include "time.mh"
#include "io.stream_ops.mh"


static const MR_EnumFunctorDesc ml_backend__mlds_to_cs_data__ml_backend__mlds_to_cs_data__enum_functor_desc_maybe_for_call_0_0 = {
  (MR_String) "is_not_for_call",
  INT32_C(0)
};

static const MR_EnumFunctorDesc ml_backend__mlds_to_cs_data__ml_backend__mlds_to_cs_data__enum_functor_desc_maybe_for_call_0_1 = {
  (MR_String) "is_for_call",
  INT32_C(1)
};

static const MR_EnumFunctorDescPtr ml_backend__mlds_to_cs_data__ml_backend__mlds_to_cs_data__enum_ordinal_ordered_maybe_for_call_0[2] = {
  &ml_backend__mlds_to_cs_data__ml_backend__mlds_to_cs_data__enum_functor_desc_maybe_for_call_0_0,
  &ml_backend__mlds_to_cs_data__ml_backend__mlds_to_cs_data__enum_functor_desc_maybe_for_call_0_1
};

static const MR_EnumFunctorDescPtr ml_backend__mlds_to_cs_data__ml_backend__mlds_to_cs_data__enum_name_ordered_maybe_for_call_0[2] = {
  &ml_backend__mlds_to_cs_data__ml_backend__mlds_to_cs_data__enum_functor_desc_maybe_for_call_0_1,
  &ml_backend__mlds_to_cs_data__ml_backend__mlds_to_cs_data__enum_functor_desc_maybe_for_call_0_0
};

static const MR_Integer ml_backend__mlds_to_cs_data__ml_backend__mlds_to_cs_data__functor_number_map_maybe_for_call_0[2] = {
  (MR_Integer) 1,
  (MR_Integer) 0
};

const MR_TypeCtorInfo_Struct ml_backend__mlds_to_cs_data__ml_backend__mlds_to_cs_data__type_ctor_info_maybe_for_call_0 = {
  (MR_Integer) 0,
  UINT8_C(18),
  INT8_C(-1),
  MR_TYPECTOR_REP_ENUM,
  ((MR_Box) (ml_backend__mlds_to_cs_data____Unify____maybe_for_call_0_0_10001)),
  ((MR_Box) (ml_backend__mlds_to_cs_data____Compare____maybe_for_call_0_0_10001)),
  (MR_String) "ml_backend.mlds_to_cs_data",
  (MR_String) "maybe_for_call",
  { ml_backend__mlds_to_cs_data__ml_backend__mlds_to_cs_data__enum_name_ordered_maybe_for_call_0 },
  { ml_backend__mlds_to_cs_data__ml_backend__mlds_to_cs_data__enum_ordinal_ordered_maybe_for_call_0 },
  (MR_Integer) 2,
  UINT16_C(12),
  ml_backend__mlds_to_cs_data__ml_backend__mlds_to_cs_data__functor_number_map_maybe_for_call_0,

};

static MR_bool MR_CALL 
ml_backend__mlds_to_cs_data__IntroducedFrom__pred__output_rval_const_for_csharp__717__1_2_p_0(
  MR_Word Lang_13,
  MR_Word HeadVar__2_59)
{
  MR_bool succeeded = (Lang_13 == HeadVar__2_59);

  return succeeded;
}

void MR_CALL 
ml_backend__mlds_to_cs_data____Compare____maybe_for_call_0_0(
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
ml_backend__mlds_to_cs_data____Unify____maybe_for_call_0_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2)
{
  MR_bool succeeded = (HeadVar__1_1 == HeadVar__2_2);

  return succeeded;
}

void MR_CALL 
ml_backend__mlds_to_cs_data__output_nonempty_initializer_body_list_for_csharp_7_p_0(
  MR_Word Info_8,
  MR_Word Stream_9,
  MR_Integer Indent_10,
  MR_Word Inits_11,
  MR_String Suffix_12)
{
  MR_Word HeadInit_14;
  MR_Word TailInits_15;
  MR_Box conv0_HeadInit_14;

  mercury__list__det_head_tail_3_p_0((MR_Word) (&ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_initializer_0), Inits_11, &conv0_HeadInit_14, &TailInits_15);
  HeadInit_14 = ((MR_Word) (conv0_HeadInit_14));
  ml_backend__mlds_to_cs_data__output_initializer_body_list_for_csharp_8_p_0(Info_8, Stream_9, Indent_10, HeadInit_14, TailInits_15, Suffix_12);
}

void MR_CALL 
ml_backend__mlds_to_cs_data__output_initializer_for_csharp_9_p_0(
  MR_Word Info_10,
  MR_Word Stream_11,
  MR_Word OutputAux_12,
  MR_Integer Indent_13,
  MR_Word Type_14,
  MR_Word Initializer_15,
  MR_String Suffix_16)
{
  switch (MR_tag((MR_Word) Initializer_15)) {
    default: /*NOTREACHED*/ MR_assert(0);
    case (MR_Integer) 0:
      {
        switch (MR_tag((MR_Word) OutputAux_12)) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
            switch (MR_unmkbody(OutputAux_12)) {
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
                  MR_String Var_39;

                  mercury__io__write_string_4_p_0(Stream_11, (MR_String) " = ");
                  switch (MR_tag((MR_Word) Type_14)) {
                    default: /*NOTREACHED*/ MR_assert(0);
                    case (MR_Integer) 0:
                      switch (MR_unmkbody(Type_14)) {
                        default: /*NOTREACHED*/ MR_assert(0);
                        case (MR_Integer) 0:
                        case (MR_Integer) 5:
                        case (MR_Integer) 6:
                        case (MR_Integer) 7:
                        case (MR_Integer) 8:
                          Var_39 = (MR_String) "null";
                          break;
                        case (MR_Integer) 1:
                          Var_39 = (MR_String) "0";
                          break;
                        case (MR_Integer) 2:
                          Var_39 = (MR_String) "null";
                          break;
                        case (MR_Integer) 3:
                          Var_39 = (MR_String) "\'\\u0000\'";
                          break;
                        case (MR_Integer) 4:
                          Var_39 = (MR_String) "false";
                          break;
                        case (MR_Integer) 9:
                          {
                            mercury__require__unexpected_2_p_0((MR_String) "function \140ml_backend.mlds_to_cs_data.get_default_initializer_for_csharp\'/2", (MR_String) "variable has unknown_type");
                            return;
                          }
                          break;
                      }
                      break;
                    case (MR_Integer) 1:
                    case (MR_Integer) 2:
                      Var_39 = (MR_String) "null";
                      break;
                    case (MR_Integer) 3:
                      switch (((MR_Integer) ((MR_hl_field(3, Type_14, (MR_Integer) 0))))) {
                        default: /*NOTREACHED*/ MR_assert(0);
                        case (MR_Integer) 0:
                        case (MR_Integer) 1:
                        case (MR_Integer) 2:
                        case (MR_Integer) 4:
                        case (MR_Integer) 5:
                        case (MR_Integer) 8:
                        case (MR_Integer) 9:
                        case (MR_Integer) 10:
                        case (MR_Integer) 11:
                        case (MR_Integer) 12:
                          Var_39 = (MR_String) "null";
                          break;
                        case (MR_Integer) 3:
                          {
                            MR_Word CtorCat_49 = ((MR_Word) ((MR_hl_field(3, Type_14, (MR_Integer) 2))));

                            switch (MR_tag((MR_Word) CtorCat_49)) {
                              default: /*NOTREACHED*/ MR_assert(0);
                              case (MR_Integer) 0:
                                switch (MR_unmkbody(CtorCat_49)) {
                                  default: /*NOTREACHED*/ MR_assert(0);
                                  case (MR_Integer) 0:
                                    {
                                      MR_String TypeName_53;
                                      MR_String Var_72;

                                      TypeName_53 = ml_backend__mlds_to_cs_type__type_to_string_for_csharp_2_f_0(Info_10, Type_14);
                                      Var_72 = mercury__string__f_43_43_2_f_0(TypeName_53, (MR_String) ")");
                                      Var_39 = mercury__string__f_43_43_2_f_0((MR_String) "default(", Var_72);
                                    }
                                    break;
                                  case (MR_Integer) 1:
                                  case (MR_Integer) 2:
                                  case (MR_Integer) 3:
                                  case (MR_Integer) 4:
                                    Var_39 = (MR_String) "null";
                                    break;
                                }
                                break;
                              case (MR_Integer) 2:
                                {
                                  MR_String TypeName_53;
                                  MR_String Var_72;

                                  TypeName_53 = ml_backend__mlds_to_cs_type__type_to_string_for_csharp_2_f_0(Info_10, Type_14);
                                  Var_72 = mercury__string__f_43_43_2_f_0(TypeName_53, (MR_String) ")");
                                  Var_39 = mercury__string__f_43_43_2_f_0((MR_String) "default(", Var_72);
                                }
                                break;
                              case (MR_Integer) 3:
                                switch (((MR_Integer) ((MR_hl_field(3, CtorCat_49, (MR_Integer) 0))))) {
                                  default: /*NOTREACHED*/ MR_assert(0);
                                  case (MR_Integer) 0:
                                    Var_39 = (MR_String) "null";
                                    break;
                                  case (MR_Integer) 1:
                                    {
                                      MR_String TypeName_53;
                                      MR_String Var_72;

                                      TypeName_53 = ml_backend__mlds_to_cs_type__type_to_string_for_csharp_2_f_0(Info_10, Type_14);
                                      Var_72 = mercury__string__f_43_43_2_f_0(TypeName_53, (MR_String) ")");
                                      Var_39 = mercury__string__f_43_43_2_f_0((MR_String) "default(", Var_72);
                                    }
                                    break;
                                }
                                break;
                            }
                          }
                          break;
                        case (MR_Integer) 6:
                          {
                            MR_Word IntType_54 = ((MR_Unsigned) ((MR_hl_field(3, Type_14, (MR_Integer) 1))) & (MR_Integer) 15);

                            Var_39 = ((&ml_backend__mlds_to_cs_data_vector_common_2[100 + IntType_54]))->ml_backend__mlds_to_cs_data__vector_common_type_2_0__vct_2_f_0;
                          }
                          break;
                        case (MR_Integer) 7:
                          {
                            MR_Word ForeignType_67 = ((MR_Word) ((MR_hl_field(3, Type_14, (MR_Integer) 1))));

                            switch (MR_tag((MR_Word) ForeignType_67)) {
                              default: /*NOTREACHED*/ MR_assert(0);
                              case (MR_Integer) 0:
                              case (MR_Integer) 1:
                                {
                                  mercury__require__unexpected_2_p_0((MR_String) "function \140ml_backend.mlds_to_cs_data.get_default_initializer_for_csharp\'/2", (MR_String) "wrong foreign language type");
                                  return;
                                }
                                break;
                              case (MR_Integer) 2:
                                {
                                  MR_String CsharpType_68;
                                  MR_Word Var_74 = ((MR_Word) ((MR_hl_field(2, ForeignType_67, (MR_Integer) 0))));
                                  MR_String Var_76;

                                  CsharpType_68 = (MR_String) (Var_74);
                                  Var_76 = mercury__string__f_43_43_2_f_0(CsharpType_68, (MR_String) ")");
                                  Var_39 = mercury__string__f_43_43_2_f_0((MR_String) "default(", Var_76);
                                }
                                break;
                            }
                          }
                          break;
                      }
                      break;
                  }
                  mercury__io__write_string_4_p_0(Stream_11, Var_39);
                }
                break;
            }
            break;
          case (MR_Integer) 1:
            {
            }
            break;
        }
        mercury__io__write_string_4_p_0(Stream_11, Suffix_16);
        mercury__io__write_string_4_p_0(Stream_11, (MR_String) "\n");
      }
      break;
    case (MR_Integer) 1:
    case (MR_Integer) 2:
    case (MR_Integer) 3:
      {
        mercury__io__write_string_4_p_0(Stream_11, (MR_String) " = ");
        switch (MR_tag((MR_Word) OutputAux_12)) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
            switch (MR_unmkbody(OutputAux_12)) {
              default: /*NOTREACHED*/ MR_assert(0);
              case (MR_Integer) 0:
              case (MR_Integer) 2:
                {
                  MR_Integer Var_31 = (MR_Integer) ((MR_Unsigned) Indent_13 + (MR_Unsigned) 1);
                  MR_Word Var_32;

                  {
                    Var_32 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
                    MR_hl_field(1, Var_32, 0) = ((MR_Box) (Type_14));
                  }
                  ml_backend__mlds_to_cs_data__output_initializer_body_for_csharp_9_p_0(Info_10, Stream_11, (MR_Integer) 0, Var_31, Initializer_15, Var_32, Suffix_16);
                }
                break;
              case (MR_Integer) 1:
                {
                  MR_Word Var_35;

                  {
                    Var_35 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
                    MR_hl_field(1, Var_35, 0) = ((MR_Box) (Type_14));
                  }
                  ml_backend__mlds_to_cs_data__output_initializer_alloc_only_for_csharp_7_p_0(Info_10, Stream_11, Initializer_15, Var_35, Suffix_16);
                }
                break;
            }
            break;
          case (MR_Integer) 1:
            {
              MR_Integer Var_31 = (MR_Integer) ((MR_Unsigned) Indent_13 + (MR_Unsigned) 1);
              MR_Word Var_32;

              {
                Var_32 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(1, Var_32, 0) = ((MR_Box) (Type_14));
              }
              ml_backend__mlds_to_cs_data__output_initializer_body_for_csharp_9_p_0(Info_10, Stream_11, (MR_Integer) 0, Var_31, Initializer_15, Var_32, Suffix_16);
            }
            break;
        }
      }
      break;
  }
}

static void MR_CALL 
ml_backend__mlds_to_cs_data__output_initializer_body_list_for_csharp_8_p_0(
  MR_Word Info_9,
  MR_Word Stream_10,
  MR_Integer Indent_11,
  MR_Word HeadInit_12,
  MR_Word TailInits_13,
  MR_String Suffix_14)
{
  while (MR_TRUE)
  {
    // setup for model_det tailcalls optimized into a loop
    ;
    if ((TailInits_13 == (MR_Word) ((MR_Unsigned) 0U)))
      ml_backend__mlds_to_cs_data__output_initializer_body_for_csharp_9_p_0(Info_9, Stream_10, (MR_Integer) 1, Indent_11, HeadInit_12, (MR_Word) ((MR_Unsigned) 0U), Suffix_14);
    else
    {
      MR_Word HeadTailInit_16 = ((MR_Word) ((MR_hl_field(1, TailInits_13, (MR_Integer) 0))));
      MR_Word TailTailInits_17 = ((MR_Word) ((MR_hl_field(1, TailInits_13, (MR_Integer) 1))));
      MR_Word next_value_of_HeadInit_12;
      MR_Word next_value_of_TailInits_13;

      ml_backend__mlds_to_cs_data__output_initializer_body_for_csharp_9_p_0(Info_9, Stream_10, (MR_Integer) 1, Indent_11, HeadInit_12, (MR_Word) ((MR_Unsigned) 0U), (MR_String) ",");
      // direct tailcall eliminated
      ;
      next_value_of_HeadInit_12 = HeadTailInit_16;
      next_value_of_TailInits_13 = TailTailInits_17;
      HeadInit_12 = next_value_of_HeadInit_12;
      TailInits_13 = next_value_of_TailInits_13;
      continue;
    }
    break;
  }
}

void MR_CALL 
ml_backend__mlds_to_cs_data__output_initializer_body_for_csharp_9_p_0(
  MR_Word Info_10,
  MR_Word Stream_11,
  MR_Word InitStart_12,
  MR_Integer Indent_13,
  MR_Word Initializer_14,
  MR_Word MaybeType_15,
  MR_String Suffix_16)
{
  switch (MR_tag((MR_Word) Initializer_14)) {
    default: /*NOTREACHED*/ MR_assert(0);
    case (MR_Integer) 0:
      {
        mercury__require__unexpected_2_p_0((MR_String) "predicate \140ml_backend.mlds_to_cs_data.output_initializer_body_for_csharp\'/9", (MR_String) "no_initializer");
        return;
      }
      break;
    case (MR_Integer) 1:
      {
        MR_Word Rval_18 = ((MR_Word) ((MR_hl_field(1, Initializer_14, (MR_Integer) 0))));

        switch (InitStart_12) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 1:
            libs__indent__write_indent2_4_p_0(Stream_11, Indent_13);
            break;
          case (MR_Integer) 0:
            {
            }
            break;
        }
        ml_backend__mlds_to_cs_data__output_rval_for_csharp_5_p_0(Info_10, Rval_18, Stream_11);
        mercury__io__write_string_4_p_0(Stream_11, Suffix_16);
        mercury__io__write_string_4_p_0(Stream_11, (MR_String) "\n");
      }
      break;
    case (MR_Integer) 2:
      {
        MR_Word StructType_19 = ((MR_Word) ((MR_hl_field(2, Initializer_14, (MR_Integer) 0))));
        MR_Word FieldInits_20 = ((MR_Word) ((MR_hl_field(2, Initializer_14, (MR_Integer) 1))));
        MR_String IndentStr_21;
        MR_String TypeStr0_22;
        MR_Word ArrayDims_23;
        MR_String TypeStr_24;
        MR_String LParen_25;
        MR_String RParen_26;

        switch (InitStart_12) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 1:
            {
            }
            break;
          case (MR_Integer) 0:
            mercury__io__nl_3_p_0(Stream_11);
            break;
        }
        IndentStr_21 = libs__indent__indent2_string_1_f_0(Indent_13);
        ml_backend__mlds_to_cs_type__type_to_string_and_dims_for_csharp_4_p_0(Info_10, StructType_19, &TypeStr0_22, &ArrayDims_23);
        TypeStr_24 = ml_backend__mlds_to_target_util__add_array_dimensions_2_f_0(TypeStr0_22, ArrayDims_23);
        ml_backend__mlds_to_target_util__init_arg_wrappers_cs_java_3_p_0(ArrayDims_23, &LParen_25, &RParen_26);
        if ((FieldInits_20 == (MR_Word) ((MR_Unsigned) 0U)))
        {
          mercury__io__write_string_4_p_0(Stream_11, IndentStr_21);
          mercury__io__write_string_4_p_0(Stream_11, (MR_String) "new ");
          mercury__io__write_string_4_p_0(Stream_11, TypeStr_24);
          mercury__io__write_string_4_p_0(Stream_11, LParen_25);
          mercury__io__write_string_4_p_0(Stream_11, RParen_26);
          mercury__io__write_string_4_p_0(Stream_11, Suffix_16);
        }
        else
        {
          MR_Word HeadFieldInit_27 = ((MR_Word) ((MR_hl_field(1, FieldInits_20, (MR_Integer) 0))));
          MR_Word TailFieldInits_28 = ((MR_Word) ((MR_hl_field(1, FieldInits_20, (MR_Integer) 1))));
          MR_Integer Var_67;

          mercury__io__write_string_4_p_0(Stream_11, IndentStr_21);
          mercury__io__write_string_4_p_0(Stream_11, (MR_String) "new ");
          mercury__io__write_string_4_p_0(Stream_11, TypeStr_24);
          mercury__io__write_string_4_p_0(Stream_11, LParen_25);
          mercury__io__write_string_4_p_0(Stream_11, (MR_String) "\n");
          Var_67 = (MR_Integer) ((MR_Unsigned) Indent_13 + (MR_Unsigned) 1);
          ml_backend__mlds_to_cs_data__output_initializer_body_list_for_csharp_8_p_0(Info_10, Stream_11, Var_67, HeadFieldInit_27, TailFieldInits_28, (MR_String) "");
          mercury__io__write_string_4_p_0(Stream_11, IndentStr_21);
          mercury__io__write_string_4_p_0(Stream_11, RParen_26);
          mercury__io__write_string_4_p_0(Stream_11, Suffix_16);
          mercury__io__write_string_4_p_0(Stream_11, (MR_String) "\n");
        }
      }
      break;
    case (MR_Integer) 3:
      {
        MR_Word ElementInits_29 = ((MR_Word) ((MR_hl_field(3, Initializer_14, (MR_Integer) 0))));
        MR_String IndentStr_108;
        MR_String TypeStr_109;

        switch (InitStart_12) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 1:
            {
            }
            break;
          case (MR_Integer) 0:
            mercury__io__nl_3_p_0(Stream_11);
            break;
        }
        IndentStr_108 = libs__indent__indent2_string_1_f_0(Indent_13);
        if ((MaybeType_15 == (MR_Word) ((MR_Unsigned) 0U)))
          TypeStr_109 = (MR_String) "/* XXX init_array */ object[]";
        else
        {
          MR_Word Type_30 = ((MR_Word) ((MR_hl_field(1, MaybeType_15, (MR_Integer) 0))));

          TypeStr_109 = ml_backend__mlds_to_cs_type__type_to_string_for_csharp_2_f_0(Info_10, Type_30);
        }
        if ((ElementInits_29 == (MR_Word) ((MR_Unsigned) 0U)))
        {
          mercury__io__write_string_4_p_0(Stream_11, IndentStr_108);
          mercury__io__write_string_4_p_0(Stream_11, (MR_String) "new ");
          mercury__io__write_string_4_p_0(Stream_11, TypeStr_109);
          mercury__io__write_string_4_p_0(Stream_11, (MR_String) " {}");
          mercury__io__write_string_4_p_0(Stream_11, Suffix_16);
          mercury__io__write_string_4_p_0(Stream_11, (MR_String) "\n");
        }
        else
        {
          MR_Word HeadElementInit_31 = ((MR_Word) ((MR_hl_field(1, ElementInits_29, (MR_Integer) 0))));
          MR_Word TailElementInits_32 = ((MR_Word) ((MR_hl_field(1, ElementInits_29, (MR_Integer) 1))));
          MR_Integer Var_97;

          mercury__io__write_string_4_p_0(Stream_11, IndentStr_108);
          mercury__io__write_string_4_p_0(Stream_11, (MR_String) "new ");
          mercury__io__write_string_4_p_0(Stream_11, TypeStr_109);
          mercury__io__write_string_4_p_0(Stream_11, (MR_String) " {\n");
          Var_97 = (MR_Integer) ((MR_Unsigned) Indent_13 + (MR_Unsigned) 1);
          ml_backend__mlds_to_cs_data__output_initializer_body_list_for_csharp_8_p_0(Info_10, Stream_11, Var_97, HeadElementInit_31, TailElementInits_32, (MR_String) "");
          mercury__io__write_string_4_p_0(Stream_11, IndentStr_108);
          mercury__io__write_string_4_p_0(Stream_11, (MR_String) "}");
          mercury__io__write_string_4_p_0(Stream_11, Suffix_16);
          mercury__io__write_string_4_p_0(Stream_11, (MR_String) "\n");
        }
      }
      break;
  }
}

void MR_CALL 
ml_backend__mlds_to_cs_data__output_initializer_alloc_only_for_csharp_7_p_0(
  MR_Word Info_8,
  MR_Word Stream_9,
  MR_Word Initializer_10,
  MR_Word MaybeType_11,
  MR_String Suffix_12)
{
  MR_bool succeeded;

  switch (MR_tag((MR_Word) Initializer_10)) {
    default: /*NOTREACHED*/ MR_assert(0);
    case (MR_Integer) 0:
      {
        mercury__require__unexpected_2_p_0((MR_String) "predicate \140ml_backend.mlds_to_cs_data.output_initializer_alloc_only_for_csharp\'/7", (MR_String) "no_initializer");
        return;
      }
      break;
    case (MR_Integer) 1:
      {
        mercury__require__unexpected_2_p_0((MR_String) "predicate \140ml_backend.mlds_to_cs_data.output_initializer_alloc_only_for_csharp\'/7", (MR_String) "init_obj");
        return;
      }
      break;
    case (MR_Integer) 2:
      {
        MR_Word StructType_15 = ((MR_Word) ((MR_hl_field(2, Initializer_10, (MR_Integer) 0))));
        MR_Word FieldInits_16 = ((MR_Word) ((MR_hl_field(2, Initializer_10, (MR_Integer) 1))));
        MR_Word CtorCat_18;
        MR_Word Var_34;
        MR_Word Var_35;

        mercury__io__write_string_4_p_0(Stream_9, (MR_String) "new ");
        succeeded = ((((MR_tag((MR_Word) StructType_15)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(3, StructType_15, (MR_Integer) 0)))) == (MR_Integer) 3)));
        if (succeeded)
        {
          CtorCat_18 = ((MR_Word) ((MR_hl_field(3, StructType_15, (MR_Integer) 2))));
          Var_35 = (MR_Word) (CtorCat_18);
          Var_34 = ml_backend__mlds_to_target_util__type_category_is_array_1_f_0(Var_35);
          succeeded = (Var_34 == (MR_Integer) 0);
        }
        if (succeeded)
        {
          MR_Integer Size_19;
          MR_String Var_75;

          Size_19 = mercury__list__length_1_f_0((MR_Word) (&ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_initializer_0), FieldInits_16);
          mercury__io__write_string_4_p_0(Stream_9, (MR_String) "object[");
          mercury__string__format__format_signed_int_component_nowidth_noprec_3_p_0((MR_Word) (&ml_backend__mlds_to_cs_data_scalar_common_1[0]), Size_19, &Var_75);
          mercury__io__write_string_4_p_0(Stream_9, Var_75);
          mercury__io__write_string_4_p_0(Stream_9, (MR_String) "]");
          mercury__io__write_string_4_p_0(Stream_9, Suffix_12);
          mercury__io__write_string_4_p_0(Stream_9, (MR_String) "\n");
        }
        else
        {
          MR_String Var_47;

          Var_47 = ml_backend__mlds_to_cs_type__type_to_string_for_csharp_2_f_0(Info_8, StructType_15);
          mercury__io__write_string_4_p_0(Stream_9, Var_47);
          mercury__io__write_string_4_p_0(Stream_9, (MR_String) "()");
          mercury__io__write_string_4_p_0(Stream_9, Suffix_12);
          mercury__io__write_string_4_p_0(Stream_9, (MR_String) "\n");
        }
      }
      break;
    case (MR_Integer) 3:
      {
        MR_Word ElementInits_20 = ((MR_Word) ((MR_hl_field(3, Initializer_10, (MR_Integer) 0))));
        MR_Integer Size_69;

        Size_69 = mercury__list__length_1_f_0((MR_Word) (&ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_initializer_0), ElementInits_20);
        mercury__io__write_string_4_p_0(Stream_9, (MR_String) "new ");
        if ((MaybeType_11 == (MR_Word) ((MR_Unsigned) 0U)))
        {
          MR_String Var_98;

          mercury__io__write_string_4_p_0(Stream_9, (MR_String) "/* XXX init_array */ object[");
          mercury__string__format__format_signed_int_component_nowidth_noprec_3_p_0((MR_Word) (&ml_backend__mlds_to_cs_data_scalar_common_1[0]), Size_69, &Var_98);
          mercury__io__write_string_4_p_0(Stream_9, Var_98);
          mercury__io__write_string_4_p_0(Stream_9, (MR_String) "]");
          mercury__io__write_string_4_p_0(Stream_9, Suffix_12);
          mercury__io__write_string_4_p_0(Stream_9, (MR_String) "\n");
        }
        else
        {
          MR_Word Type_21 = ((MR_Word) ((MR_hl_field(1, MaybeType_11, (MR_Integer) 0))));
          MR_String BaseTypeName_22;
          MR_Word ArrayDims0_23;
          MR_Word ArrayDims_24;
          MR_String DimsStr_25;

          ml_backend__mlds_to_cs_type__type_to_string_and_dims_for_csharp_4_p_0(Info_8, Type_21, &BaseTypeName_22, &ArrayDims0_23);
          ml_backend__mlds_to_target_util__make_last_dimension_known_size_3_p_0(ArrayDims0_23, Size_69, &ArrayDims_24);
          DimsStr_25 = ml_backend__mlds_to_target_util__array_dimensions_to_string_1_f_0(ArrayDims_24);
          mercury__io__write_string_4_p_0(Stream_9, BaseTypeName_22);
          mercury__io__write_string_4_p_0(Stream_9, DimsStr_25);
          mercury__io__write_string_4_p_0(Stream_9, Suffix_12);
          mercury__io__write_string_4_p_0(Stream_9, (MR_String) "\n");
        }
      }
      break;
  }
}

void MR_CALL 
ml_backend__mlds_to_cs_data__output_call_rval_for_csharp_5_p_0(
  MR_Word Info_6,
  MR_Word Rval_7,
  MR_Word Stream_8)
{
  MR_bool succeeded = ((((MR_tag((MR_Word) Rval_7)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(3, Rval_7, (MR_Integer) 0)))) == (MR_Integer) 1)));
  MR_Word CodeAddr_11;
  MR_Word Const_10;

  if (succeeded)
  {
    Const_10 = ((MR_Word) ((MR_hl_field(3, Rval_7, (MR_Integer) 1))));
    succeeded = ((MR_tag((MR_Word) Const_10)) == (MR_Integer) 1);
    if (succeeded)
      CodeAddr_11 = (MR_Word) (MR_body((MR_Word) (Const_10), (MR_Integer) 1));
  }
  if (succeeded)
    ml_backend__mlds_to_cs_data__output_code_addr_for_csharp_6_p_0(Info_6, Stream_8, CodeAddr_11, (MR_Integer) 1);
  else
  {
    if (((MR_tag((MR_Word) Rval_7)) == (MR_Integer) 2))
    {
      MR_Word Var_27 = ((MR_Word) ((MR_hl_field(2, Rval_7, (MR_Integer) 0))));

      if (((((MR_tag((MR_Word) Var_27)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(3, Var_27, (MR_Integer) 0)))) == (MR_Integer) 1))))
        succeeded = MR_TRUE;
      else
      if (((((MR_tag((MR_Word) Var_27)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(3, Var_27, (MR_Integer) 0)))) == (MR_Integer) 0))))
        succeeded = MR_TRUE;
      else
        succeeded = MR_FALSE;
    }
    else
    if (((((MR_tag((MR_Word) Rval_7)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(3, Rval_7, (MR_Integer) 0)))) == (MR_Integer) 1))))
    {
      MR_Word Var_22 = ((MR_Word) ((MR_hl_field(3, Rval_7, (MR_Integer) 1))));

      succeeded = ((MR_tag((MR_Word) Var_22)) == (MR_Integer) 1);
      if (succeeded)
      {
      }
    }
    else
      succeeded = MR_FALSE;
    if (succeeded)
      ml_backend__mlds_to_cs_data__output_rval_for_csharp_5_p_0(Info_6, Rval_7, Stream_8);
    else
    {
      mercury__io__write_char_4_p_0(Stream_8, (MR_Char) 40);
      ml_backend__mlds_to_cs_data__output_rval_for_csharp_5_p_0(Info_6, Rval_7, Stream_8);
      mercury__io__write_char_4_p_0(Stream_8, (MR_Char) 41);
    }
  }
}

void MR_CALL 
ml_backend__mlds_to_cs_data__output_code_addr_for_csharp_6_p_0(
  MR_Word Info_7,
  MR_Word Stream_8,
  MR_Word CodeAddr_9,
  MR_Word IsCall_10)
{
  MR_Word QualFuncLabel_12 = ((MR_Word) ((MR_hl_field(0, CodeAddr_9, (MR_Integer) 0))));
  MR_Word Signature_13 = ((MR_Word) ((MR_hl_field(0, CodeAddr_9, (MR_Integer) 1))));
  MR_Word ArgTypes_14 = ((MR_Word) ((MR_hl_field(0, Signature_13, (MR_Integer) 0))));
  MR_Word RetTypes_15 = ((MR_Word) ((MR_hl_field(0, Signature_13, (MR_Integer) 1))));
  MR_Word ModuleName_17;
  MR_Word FuncLabel_18;
  MR_Word ProcLabel_19;
  MR_Word MaybeAux_20;
  MR_String MaybeAuxSuffix_21;
  MR_String Qualifier_22;
  MR_String ProcLabelStr_23;

  switch (IsCall_10) {
    default: /*NOTREACHED*/ MR_assert(0);
    case (MR_Integer) 1:
      {
      }
      break;
    case (MR_Integer) 0:
      {
        MR_String PtrTypeStr_16;

        PtrTypeStr_16 = ml_backend__mlds_to_cs_type__method_ptr_type_to_string_3_f_0(Info_7, ArgTypes_14, RetTypes_15);
        mercury__io__write_string_4_p_0(Stream_8, (MR_String) "(");
        mercury__io__write_string_4_p_0(Stream_8, PtrTypeStr_16);
        mercury__io__write_string_4_p_0(Stream_8, (MR_String) ") ");
      }
      break;
  }
  ModuleName_17 = ((MR_Word) ((MR_hl_field(0, QualFuncLabel_12, (MR_Integer) 0))));
  FuncLabel_18 = ((MR_Word) ((MR_hl_field(0, QualFuncLabel_12, (MR_Integer) 1))));
  ProcLabel_19 = ((MR_Word) ((MR_hl_field(0, FuncLabel_18, (MR_Integer) 0))));
  MaybeAux_20 = ((MR_Word) ((MR_hl_field(0, FuncLabel_18, (MR_Integer) 1))));
  MaybeAuxSuffix_21 = ml_backend__ml_util__mlds_maybe_aux_func_id_to_suffix_1_f_0(MaybeAux_20);
  Qualifier_22 = ml_backend__mlds_to_cs_name__qualifier_to_nll_string_for_csharp_2_f_0(ModuleName_17, (MR_Integer) 0);
  ProcLabelStr_23 = ml_backend__mlds_to_cs_name__proc_label_to_ll_string_for_csharp_2_f_0(MaybeAuxSuffix_21, ProcLabel_19);
  mercury__io__write_string_4_p_0(Stream_8, Qualifier_22);
  mercury__io__write_string_4_p_0(Stream_8, (MR_String) ".");
  mercury__io__write_string_4_p_0(Stream_8, ProcLabelStr_23);
}

static MR_bool MR_CALL 
ml_backend__mlds_to_cs_data__output_rval_const_for_csharp_5_p_0_1(
  MR_Box closure_arg)
{
  MR_bool succeeded;
  MR_Box closure = closure_arg;

  succeeded = ml_backend__mlds_to_cs_data__IntroducedFrom__pred__output_rval_const_for_csharp__717__1_2_p_0(((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 3)))), ((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 4)))));
  return succeeded;
}

void MR_CALL 
ml_backend__mlds_to_cs_data__output_lval_for_csharp_5_p_0(
  MR_Word tscc_proc_1_input_1_Info_6,
  MR_Word tscc_proc_1_input_2_Lval_7,
  MR_Word tscc_proc_1_input_3_Stream_8)
{
  MR_Word tscc_proc_2_input_1_Info_6;
  MR_Word tscc_proc_2_input_2_Rval_7;
  MR_Word tscc_proc_2_input_3_Stream_8;
  MR_Word tscc_proc_3_input_1_Info_6;
  MR_Word tscc_proc_3_input_2_Rval_7;
  MR_Word tscc_proc_3_input_3_Stream_8;
  MR_Word tscc_proc_4_input_1_Info_7;
  MR_Word tscc_proc_4_input_2_Type_8;
  MR_Word tscc_proc_4_input_3_Expr_9;
  MR_Word tscc_proc_4_input_4_Stream_10;
  MR_Word tscc_proc_5_input_1_Info_6;
  MR_Word tscc_proc_5_input_2_Stream_7;
  MR_Word tscc_proc_5_input_3_Const_8;
  MR_Word tscc_proc_6_input_1_Info_7;
  MR_Word tscc_proc_6_input_2_Expr_9;
  MR_Word tscc_proc_6_input_3_Stream_10;

  // The code for TSCC PROC 1: pred ml_backend.mlds_to_cs_data.output_lval_for_csharp/5-0.
  ;
  // Setup for mutual tailcalls optimized into a loop.
  ;
  // The mutually recursive procedures are:
  ;
  ;
  // proc 1 in TSCC: pred ml_backend.mlds_to_cs_data.output_lval_for_csharp/5-0
  ;
  // proc 2 in TSCC: pred ml_backend.mlds_to_cs_data.output_rval_for_csharp/5-0
  ;
  // proc 3 in TSCC: pred ml_backend.mlds_to_cs_data.output_bracketed_rval_for_csharp/5-0
  ;
  // proc 4 in TSCC: pred ml_backend.mlds_to_cs_data.output_cast_rval_for_csharp/6-0
  ;
  // proc 5 in TSCC: pred ml_backend.mlds_to_cs_data.output_rval_const_for_csharp/5-0
  ;
  // proc 6 in TSCC: pred ml_backend.mlds_to_cs_data.UnusedArgs__pred__output_boxed_rval_for_csharp__[2]_0/6-0
  ;
  ;
  goto top_of_proc_1;
top_of_proc_1:;
  {
    MR_Word Info_6 = tscc_proc_1_input_1_Info_6;
    MR_Word Lval_7 = tscc_proc_1_input_2_Lval_7;
    MR_Word Stream_8 = tscc_proc_1_input_3_Stream_8;
    MR_bool succeeded;

    switch (MR_tag((MR_Word) Lval_7)) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        {
          MR_Word PtrRval_11 = ((MR_Word) ((MR_hl_field(0, Lval_7, (MR_Integer) 1))));
          MR_Word FieldId_13 = ((MR_Word) ((MR_hl_field(0, Lval_7, (MR_Integer) 3))));
          MR_Word FieldType_14 = ((MR_Word) ((MR_hl_field(0, Lval_7, (MR_Integer) 4))));

          if (((MR_tag((MR_Word) FieldId_13)) == (MR_Integer) 1))
          {
            MR_Word QualFieldVarName_19 = ((MR_Word) ((MR_hl_field(1, FieldId_13, (MR_Integer) 0))));
            MR_Word CtorType_20 = ((MR_Word) ((MR_hl_field(1, FieldId_13, (MR_Integer) 1))));
            MR_Word FieldVarName_23 = ((MR_Word) ((MR_hl_field(0, QualFieldVarName_19, (MR_Integer) 2))));
            MR_String FieldVarNameStr_24;

            FieldVarNameStr_24 = ml_backend__mlds_to_cs_name__field_var_name_to_ll_string_for_csharp_1_f_0(FieldVarName_23);
            succeeded = (FieldVarName_23 == (MR_Word) ((MR_Unsigned) 4U));
            if (succeeded)
            {
              if (((MR_tag((MR_Word) PtrRval_11)) == (MR_Integer) 2))
              {
                MR_Word Var_103 = ((MR_Word) ((MR_hl_field(2, PtrRval_11, (MR_Integer) 0))));

                if (((((MR_tag((MR_Word) Var_103)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(3, Var_103, (MR_Integer) 0)))) == (MR_Integer) 1))))
                  succeeded = MR_TRUE;
                else
                if (((((MR_tag((MR_Word) Var_103)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(3, Var_103, (MR_Integer) 0)))) == (MR_Integer) 0))))
                  succeeded = MR_TRUE;
                else
                  succeeded = MR_FALSE;
              }
              else
              if (((((MR_tag((MR_Word) PtrRval_11)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(3, PtrRval_11, (MR_Integer) 0)))) == (MR_Integer) 1))))
              {
                MR_Word Var_98 = ((MR_Word) ((MR_hl_field(3, PtrRval_11, (MR_Integer) 1))));

                succeeded = ((MR_tag((MR_Word) Var_98)) == (MR_Integer) 1);
                if (succeeded)
                {
                }
              }
              else
                succeeded = MR_FALSE;
              if (succeeded)
                ml_backend__mlds_to_cs_data__output_rval_for_csharp_5_p_0(Info_6, PtrRval_11, Stream_8);
              else
              {
                mercury__io__write_char_4_p_0(Stream_8, (MR_Char) 40);
                ml_backend__mlds_to_cs_data__output_rval_for_csharp_5_p_0(Info_6, PtrRval_11, Stream_8);
                mercury__io__write_char_4_p_0(Stream_8, (MR_Char) 41);
              }
              mercury__io__write_string_4_p_0(Stream_8, (MR_String) ".");
              mercury__io__write_string_4_p_0(Stream_8, FieldVarNameStr_24);
            }
            else
            {
              succeeded = ((((MR_tag((MR_Word) PtrRval_11)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(3, PtrRval_11, (MR_Integer) 0)))) == (MR_Integer) 9)));
              if (succeeded)
              {
                ml_backend__mlds_to_cs_data__output_rval_for_csharp_5_p_0(Info_6, PtrRval_11, Stream_8);
                mercury__io__write_string_4_p_0(Stream_8, (MR_String) ".");
                mercury__io__write_string_4_p_0(Stream_8, FieldVarNameStr_24);
              }
              else
              {
                MR_String Var_65;

                Var_65 = ml_backend__mlds_to_cs_type__type_to_string_for_csharp_2_f_0(Info_6, CtorType_20);
                mercury__io__write_string_4_p_0(Stream_8, (MR_String) "((");
                mercury__io__write_string_4_p_0(Stream_8, Var_65);
                mercury__io__write_string_4_p_0(Stream_8, (MR_String) ") ");
                ml_backend__mlds_to_cs_data__output_bracketed_rval_for_csharp_5_p_0(Info_6, PtrRval_11, Stream_8);
                mercury__io__write_string_4_p_0(Stream_8, (MR_String) ").");
                mercury__io__write_string_4_p_0(Stream_8, FieldVarNameStr_24);
              }
            }
          }
          else
          {
            MR_Word OffsetRval_15 = ((MR_Word) ((MR_hl_field(0, FieldId_13, (MR_Integer) 0))));

            if ((FieldType_14 == (MR_Word) ((MR_Unsigned) 20U)))
              succeeded = MR_TRUE;
            else
            if (((((MR_tag((MR_Word) FieldType_14)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(3, FieldType_14, (MR_Integer) 0)))) == (MR_Integer) 3))))
            {
              MR_Word Var_38 = ((MR_Word) ((MR_hl_field(3, FieldType_14, (MR_Integer) 1))));

              succeeded = ((MR_tag((MR_Word) Var_38)) == (MR_Integer) 0);
              if (succeeded)
              {
              }
            }
            else
              succeeded = MR_FALSE;
            if (!(succeeded))
              {
                mercury__require__unexpected_2_p_0((MR_String) "predicate \140ml_backend.mlds_to_cs_data.output_lval_for_csharp\'/5", (MR_String) "unexpected field type");
                return;
              }
            mercury__io__write_string_4_p_0(Stream_8, (MR_String) "((object[]) ");
            ml_backend__mlds_to_cs_data__output_rval_for_csharp_5_p_0(Info_6, PtrRval_11, Stream_8);
            mercury__io__write_string_4_p_0(Stream_8, (MR_String) ")[");
            ml_backend__mlds_to_cs_data__output_rval_for_csharp_5_p_0(Info_6, OffsetRval_15, Stream_8);
            mercury__io__write_string_4_p_0(Stream_8, (MR_String) "]");
          }
        }
        break;
      case (MR_Integer) 1:
        {
          MR_Word Rval_26 = ((MR_Word) ((MR_hl_field(1, Lval_7, (MR_Integer) 0))));
          MR_Word next_value_of_tscc_proc_3_input_1_Info_6 = Info_6;
          MR_Word next_value_of_tscc_proc_3_input_2_Rval_7 = Rval_26;
          MR_Word next_value_of_tscc_proc_3_input_3_Stream_8 = Stream_8;

          // direct tailcall eliminated
          ;
          tscc_proc_3_input_1_Info_6 = next_value_of_tscc_proc_3_input_1_Info_6;
          tscc_proc_3_input_2_Rval_7 = next_value_of_tscc_proc_3_input_2_Rval_7;
          tscc_proc_3_input_3_Stream_8 = next_value_of_tscc_proc_3_input_3_Stream_8;
          goto top_of_proc_3;
        }
        break;
      case (MR_Integer) 2:
        {
          MR_Word GlobalVarRef_28 = ((MR_Word) ((MR_hl_field(2, Lval_7, (MR_Integer) 0))));
          MR_String EnvVarName_29 = (MR_String) (GlobalVarRef_28);

          mercury__io__write_string_4_p_0(Stream_8, (MR_String) "mercury_envvar_");
          mercury__io__write_string_4_p_0(Stream_8, EnvVarName_29);
        }
        break;
      case (MR_Integer) 3:
        switch (((MR_Integer) ((MR_hl_field(3, Lval_7, (MR_Integer) 0))))) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
            {
              MR_Word LocalVarName_30 = ((MR_Word) ((MR_hl_field(3, Lval_7, (MR_Integer) 1))));
              MR_String LocalVarNameStr_32;

              LocalVarNameStr_32 = ml_backend__mlds_to_cs_name__local_var_name_to_ll_string_for_csharp_1_f_0(LocalVarName_30);
              mercury__io__write_string_4_p_0(Stream_8, LocalVarNameStr_32);
            }
            break;
          case (MR_Integer) 1:
            {
              MR_Word GlobalVarName_33 = ((MR_Word) ((MR_hl_field(3, Lval_7, (MR_Integer) 1))));
              MR_String GlobalVarNameStr_35;

              GlobalVarNameStr_35 = ml_backend__mlds_to_cs_name__maybe_qualified_global_var_name_to_string_for_csharp_2_f_0(Info_6, GlobalVarName_33);
              mercury__io__write_string_4_p_0(Stream_8, GlobalVarNameStr_35);
            }
            break;
        }
        break;
    }
    goto tscc_end;
  }
top_of_proc_2:;
  {
    MR_Word Info_6 = tscc_proc_2_input_1_Info_6;
    MR_Word Rval_7 = tscc_proc_2_input_2_Rval_7;
    MR_Word Stream_8 = tscc_proc_2_input_3_Stream_8;
    MR_bool succeeded;

    switch (MR_tag((MR_Word) Rval_7)) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        {
          mercury__require__unexpected_2_p_0((MR_String) "predicate \140ml_backend.mlds_to_cs_data.output_rval_for_csharp\'/5", (MR_String) "ml_scalar_common");
          return;
        }
        break;
      case (MR_Integer) 1:
        {
          MR_Word ScalarCommon_22 = (MR_Word) (MR_body((MR_Word) (Rval_7), (MR_Integer) 1));
          MR_Word ModuleName_23 = ((MR_Word) ((MR_hl_field(0, ScalarCommon_22, (MR_Integer) 0))));
          MR_Integer TypeNum_25;
          MR_Integer RowNum_26 = ((MR_Integer) ((MR_hl_field(0, ScalarCommon_22, (MR_Integer) 3))));
          MR_Word ModuleSymName_27;
          MR_String MangledModuleName_28;
          MR_Word Var_57 = ((MR_Word) ((MR_hl_field(0, ScalarCommon_22, (MR_Integer) 2))));
          MR_String Var_115;
          MR_String Var_125;

          TypeNum_25 = (MR_Integer) (Var_57);
          ModuleSymName_27 = ml_backend__mlds__mlds_module_name_to_sym_name_1_f_0(ModuleName_23);
          MangledModuleName_28 = ml_backend__mlds_to_cs_name__strip_mercury_and_mangle_sym_name_for_csharp_1_f_0(ModuleSymName_27);
          mercury__io__write_string_4_p_0(Stream_8, MangledModuleName_28);
          mercury__io__write_string_4_p_0(Stream_8, (MR_String) ".MR_scalar_common_");
          mercury__string__format__format_signed_int_component_nowidth_noprec_3_p_0((MR_Word) (&ml_backend__mlds_to_cs_data_scalar_common_1[0]), TypeNum_25, &Var_115);
          mercury__io__write_string_4_p_0(Stream_8, Var_115);
          mercury__io__write_string_4_p_0(Stream_8, (MR_String) "[");
          mercury__string__format__format_signed_int_component_nowidth_noprec_3_p_0((MR_Word) (&ml_backend__mlds_to_cs_data_scalar_common_1[0]), RowNum_26, &Var_125);
          mercury__io__write_string_4_p_0(Stream_8, Var_125);
          mercury__io__write_string_4_p_0(Stream_8, (MR_String) "]");
        }
        break;
      case (MR_Integer) 2:
        {
          MR_Word Lval_10 = ((MR_Word) ((MR_hl_field(2, Rval_7, (MR_Integer) 0))));
          MR_Word next_value_of_tscc_proc_1_input_1_Info_6 = Info_6;
          MR_Word next_value_of_tscc_proc_1_input_2_Lval_7 = Lval_10;
          MR_Word next_value_of_tscc_proc_1_input_3_Stream_8 = Stream_8;

          // direct tailcall eliminated
          ;
          tscc_proc_1_input_1_Info_6 = next_value_of_tscc_proc_1_input_1_Info_6;
          tscc_proc_1_input_2_Lval_7 = next_value_of_tscc_proc_1_input_2_Lval_7;
          tscc_proc_1_input_3_Stream_8 = next_value_of_tscc_proc_1_input_3_Stream_8;
          goto top_of_proc_1;
        }
        break;
      case (MR_Integer) 3:
        switch (((MR_Integer) ((MR_hl_field(3, Rval_7, (MR_Integer) 0))))) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
            {
              mercury__require__unexpected_2_p_0((MR_String) "predicate \140ml_backend.mlds_to_cs_data.output_rval_for_csharp\'/5", (MR_String) "tags not supported in C#");
              return;
            }
            break;
          case (MR_Integer) 1:
            {
              MR_Word Const_13 = ((MR_Word) ((MR_hl_field(3, Rval_7, (MR_Integer) 1))));
              MR_Word next_value_of_tscc_proc_5_input_1_Info_6 = Info_6;
              MR_Word next_value_of_tscc_proc_5_input_2_Stream_7 = Stream_8;
              MR_Word next_value_of_tscc_proc_5_input_3_Const_8 = Const_13;

              // direct tailcall eliminated
              ;
              tscc_proc_5_input_1_Info_6 = next_value_of_tscc_proc_5_input_1_Info_6;
              tscc_proc_5_input_2_Stream_7 = next_value_of_tscc_proc_5_input_2_Stream_7;
              tscc_proc_5_input_3_Const_8 = next_value_of_tscc_proc_5_input_3_Const_8;
              goto top_of_proc_5;
            }
            break;
          case (MR_Integer) 2:
            {
              MR_Word Type_80 = ((MR_Word) ((MR_hl_field(3, Rval_7, (MR_Integer) 1))));
              MR_Word SubRval_81 = ((MR_Word) ((MR_hl_field(3, Rval_7, (MR_Integer) 2))));
              MR_Word Var_42;
              MR_Word Var_89;

              succeeded = ((((MR_tag((MR_Word) Type_80)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(3, Type_80, (MR_Integer) 0)))) == (MR_Integer) 3)));
              if (succeeded)
              {
                Var_42 = ((MR_Word) ((MR_hl_field(3, Type_80, (MR_Integer) 1))));
                Var_89 = parse_tree__builtin_lib_types__comparison_result_type_0_f_0();
                succeeded = parse_tree__prog_data____Unify____mer_type_0_0(Var_42, Var_89);
              }
              if (succeeded)
              {
                mercury__io__write_string_4_p_0(Stream_8, (MR_String) "builtin.comparison_result_object[(int) ");
                ml_backend__mlds_to_cs_data__output_rval_for_csharp_5_p_0(Info_6, SubRval_81, Stream_8);
                mercury__io__write_string_4_p_0(Stream_8, (MR_String) "]");
              }
              else
              {
                MR_Word next_value_of_tscc_proc_6_input_1_Info_7 = Info_6;
                MR_Word next_value_of_tscc_proc_6_input_2_Expr_9 = SubRval_81;
                MR_Word next_value_of_tscc_proc_6_input_3_Stream_10 = Stream_8;

                // direct tailcall eliminated
                ;
                tscc_proc_6_input_1_Info_7 = next_value_of_tscc_proc_6_input_1_Info_7;
                tscc_proc_6_input_2_Expr_9 = next_value_of_tscc_proc_6_input_2_Expr_9;
                tscc_proc_6_input_3_Stream_10 = next_value_of_tscc_proc_6_input_3_Stream_10;
                goto top_of_proc_6;
              }
            }
            break;
          case (MR_Integer) 3:
            {
              MR_Word Type_82 = ((MR_Word) ((MR_hl_field(3, Rval_7, (MR_Integer) 1))));
              MR_Word SubRval_83 = ((MR_Word) ((MR_hl_field(3, Rval_7, (MR_Integer) 2))));

              ml_backend__mlds_to_cs_data__output_unboxed_rval_for_csharp_6_p_0(Info_6, Type_82, SubRval_83, Stream_8);
            }
            break;
          case (MR_Integer) 4:
            {
              MR_Word Type_14 = ((MR_Word) ((MR_hl_field(3, Rval_7, (MR_Integer) 1))));
              MR_Word SubRval_15 = ((MR_Word) ((MR_hl_field(3, Rval_7, (MR_Integer) 2))));
              MR_Word next_value_of_tscc_proc_4_input_1_Info_7 = Info_6;
              MR_Word next_value_of_tscc_proc_4_input_2_Type_8 = Type_14;
              MR_Word next_value_of_tscc_proc_4_input_3_Expr_9 = SubRval_15;
              MR_Word next_value_of_tscc_proc_4_input_4_Stream_10 = Stream_8;

              // direct tailcall eliminated
              ;
              tscc_proc_4_input_1_Info_7 = next_value_of_tscc_proc_4_input_1_Info_7;
              tscc_proc_4_input_2_Type_8 = next_value_of_tscc_proc_4_input_2_Type_8;
              tscc_proc_4_input_3_Expr_9 = next_value_of_tscc_proc_4_input_3_Expr_9;
              tscc_proc_4_input_4_Stream_10 = next_value_of_tscc_proc_4_input_4_Stream_10;
              goto top_of_proc_4;
            }
            break;
          case (MR_Integer) 5:
            {
              MR_Word Unop_17 = ((MR_Word) ((MR_hl_field(3, Rval_7, (MR_Integer) 1))));
              MR_Word SubRval_84 = ((MR_Word) ((MR_hl_field(3, Rval_7, (MR_Integer) 2))));

              ml_backend__mlds_to_cs_data__output_unop_for_csharp_6_p_0(Info_6, Stream_8, Unop_17, SubRval_84);
            }
            break;
          case (MR_Integer) 6:
            {
              MR_Word Op_18 = ((MR_Word) ((MR_hl_field(3, Rval_7, (MR_Integer) 1))));
              MR_Word SubRvalA_19 = ((MR_Word) ((MR_hl_field(3, Rval_7, (MR_Integer) 2))));
              MR_Word SubRvalB_20 = ((MR_Word) ((MR_hl_field(3, Rval_7, (MR_Integer) 3))));

              ml_backend__mlds_to_cs_data__output_binop_for_csharp_7_p_0(Info_6, Stream_8, Op_18, SubRvalA_19, SubRvalB_20);
            }
            break;
          case (MR_Integer) 7:
            {
              MR_Word Lval_85 = ((MR_Word) ((MR_hl_field(3, Rval_7, (MR_Integer) 1))));
              MR_Word next_value_of_tscc_proc_1_input_1_Info_6;
              MR_Word next_value_of_tscc_proc_1_input_2_Lval_7;
              MR_Word next_value_of_tscc_proc_1_input_3_Stream_8;

              mercury__io__write_string_4_p_0(Stream_8, (MR_String) "out ");
              // direct tailcall eliminated
              ;
              next_value_of_tscc_proc_1_input_1_Info_6 = Info_6;
              next_value_of_tscc_proc_1_input_2_Lval_7 = Lval_85;
              next_value_of_tscc_proc_1_input_3_Stream_8 = Stream_8;
              tscc_proc_1_input_1_Info_6 = next_value_of_tscc_proc_1_input_1_Info_6;
              tscc_proc_1_input_2_Lval_7 = next_value_of_tscc_proc_1_input_2_Lval_7;
              tscc_proc_1_input_3_Stream_8 = next_value_of_tscc_proc_1_input_3_Stream_8;
              goto top_of_proc_1;
            }
            break;
          case (MR_Integer) 8:
            {
              MR_Word VectorCommon_29 = ((MR_Word) ((MR_hl_field(3, Rval_7, (MR_Integer) 1))));
              MR_Word RowRval_30 = ((MR_Word) ((MR_hl_field(3, Rval_7, (MR_Integer) 2))));
              MR_Integer StartRowNum_32 = ((MR_Integer) ((MR_hl_field(0, VectorCommon_29, (MR_Integer) 3))));
              MR_Word Var_67 = ((MR_Word) ((MR_hl_field(0, VectorCommon_29, (MR_Integer) 2))));
              MR_Integer TypeNum_88 = (MR_Integer) (Var_67);
              MR_String Var_93;
              MR_String Var_103;

              mercury__io__write_string_4_p_0(Stream_8, (MR_String) "MR_vector_common_");
              mercury__string__format__format_signed_int_component_nowidth_noprec_3_p_0((MR_Word) (&ml_backend__mlds_to_cs_data_scalar_common_1[0]), TypeNum_88, &Var_93);
              mercury__io__write_string_4_p_0(Stream_8, Var_93);
              mercury__io__write_string_4_p_0(Stream_8, (MR_String) "[");
              mercury__string__format__format_signed_int_component_nowidth_noprec_3_p_0((MR_Word) (&ml_backend__mlds_to_cs_data_scalar_common_1[0]), StartRowNum_32, &Var_103);
              mercury__io__write_string_4_p_0(Stream_8, Var_103);
              mercury__io__write_string_4_p_0(Stream_8, (MR_String) " + ");
              ml_backend__mlds_to_cs_data__output_rval_for_csharp_5_p_0(Info_6, RowRval_30, Stream_8);
              mercury__io__write_string_4_p_0(Stream_8, (MR_String) "]");
            }
            break;
          case (MR_Integer) 9:
            mercury__io__write_string_4_p_0(Stream_8, (MR_String) "this");
            break;
        }
        break;
    }
    goto tscc_end;
  }
top_of_proc_3:;
  {
    MR_Word Info_6 = tscc_proc_3_input_1_Info_6;
    MR_Word Rval_7 = tscc_proc_3_input_2_Rval_7;
    MR_Word Stream_8 = tscc_proc_3_input_3_Stream_8;
    MR_bool succeeded;

    if (((MR_tag((MR_Word) Rval_7)) == (MR_Integer) 2))
    {
      MR_Word Var_25 = ((MR_Word) ((MR_hl_field(2, Rval_7, (MR_Integer) 0))));

      if (((((MR_tag((MR_Word) Var_25)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(3, Var_25, (MR_Integer) 0)))) == (MR_Integer) 1))))
        succeeded = MR_TRUE;
      else
      if (((((MR_tag((MR_Word) Var_25)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(3, Var_25, (MR_Integer) 0)))) == (MR_Integer) 0))))
        succeeded = MR_TRUE;
      else
        succeeded = MR_FALSE;
    }
    else
    if (((((MR_tag((MR_Word) Rval_7)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(3, Rval_7, (MR_Integer) 0)))) == (MR_Integer) 1))))
    {
      MR_Word Var_19 = ((MR_Word) ((MR_hl_field(3, Rval_7, (MR_Integer) 1))));

      succeeded = ((MR_tag((MR_Word) Var_19)) == (MR_Integer) 1);
      if (succeeded)
      {
      }
    }
    else
      succeeded = MR_FALSE;
    if (succeeded)
    {
      MR_Word next_value_of_tscc_proc_2_input_1_Info_6 = Info_6;
      MR_Word next_value_of_tscc_proc_2_input_2_Rval_7 = Rval_7;
      MR_Word next_value_of_tscc_proc_2_input_3_Stream_8 = Stream_8;

      // direct tailcall eliminated
      ;
      tscc_proc_2_input_1_Info_6 = next_value_of_tscc_proc_2_input_1_Info_6;
      tscc_proc_2_input_2_Rval_7 = next_value_of_tscc_proc_2_input_2_Rval_7;
      tscc_proc_2_input_3_Stream_8 = next_value_of_tscc_proc_2_input_3_Stream_8;
      goto top_of_proc_2;
    }
    else
    {
      mercury__io__write_char_4_p_0(Stream_8, (MR_Char) 40);
      ml_backend__mlds_to_cs_data__output_rval_for_csharp_5_p_0(Info_6, Rval_7, Stream_8);
      mercury__io__write_char_4_p_0(Stream_8, (MR_Char) 41);
    }
    goto tscc_end;
  }
top_of_proc_4:;
  {
    MR_Word Info_7 = tscc_proc_4_input_1_Info_7;
    MR_Word Type_8 = tscc_proc_4_input_2_Type_8;
    MR_Word Expr_9 = tscc_proc_4_input_3_Expr_9;
    MR_Word Stream_10 = tscc_proc_4_input_4_Stream_10;
    MR_bool succeeded = (Type_8 == (MR_Word) ((MR_Unsigned) 32U));
    MR_Integer N_12;
    MR_Word Var_16;

    if (succeeded)
    {
      succeeded = ((((MR_tag((MR_Word) Expr_9)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(3, Expr_9, (MR_Integer) 0)))) == (MR_Integer) 1)));
      if (succeeded)
      {
        Var_16 = ((MR_Word) ((MR_hl_field(3, Expr_9, (MR_Integer) 1))));
        succeeded = ((MR_tag((MR_Word) Var_16)) == (MR_Integer) 2);
        if (succeeded)
          N_12 = ((MR_Integer) ((MR_hl_field(2, Var_16, (MR_Integer) 0))));
      }
    }
    if (succeeded)
    {
      MR_Integer Var_47;

      ml_backend__mlds_to_cs_util__maybe_output_inline_comment_for_csharp_5_p_0(Info_7, Stream_10, (MR_String) "cast");
      succeeded = (N_12 >= (MR_Integer) 1);
      if (succeeded)
      {
        Var_47 = (MR_Integer) 5;
        succeeded = (N_12 <= Var_47);
      }
      if (succeeded)
      {
        mercury__io__write_string_4_p_0(Stream_10, (MR_String) "runtime.PseudoTypeInfo.K");
        mercury__io__write_int_4_p_0(Stream_10, N_12);
      }
      else
      {
        mercury__io__write_string_4_p_0(Stream_10, (MR_String) "new runtime.PseudoTypeInfo(");
        ml_backend__mlds_to_cs_data__output_rval_for_csharp_5_p_0(Info_7, Expr_9, Stream_10);
        mercury__io__write_string_4_p_0(Stream_10, (MR_String) ")");
      }
    }
    else
    {
      if ((Type_8 == (MR_Word) ((MR_Unsigned) 28U)))
        succeeded = MR_TRUE;
      else
      if (((((MR_tag((MR_Word) Type_8)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(3, Type_8, (MR_Integer) 0)))) == (MR_Integer) 3))))
      {
        MR_Word Var_27 = ((MR_Word) ((MR_hl_field(3, Type_8, (MR_Integer) 2))));
        MR_Word Var_28;

        succeeded = ((((MR_tag((MR_Word) Var_27)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(3, Var_27, (MR_Integer) 0)))) == (MR_Integer) 0)));
        if (succeeded)
        {
          Var_28 = ((MR_Unsigned) ((MR_hl_field(3, Var_27, (MR_Integer) 1))) & (MR_Integer) 3);
          succeeded = (Var_28 == (MR_Integer) 0);
        }
      }
      else
        succeeded = MR_FALSE;
      if (succeeded)
      {
        ml_backend__mlds_to_cs_util__maybe_output_inline_comment_for_csharp_5_p_0(Info_7, Stream_10, (MR_String) "cast");
        mercury__io__write_string_4_p_0(Stream_10, (MR_String) "runtime.TypeInfo_Struct.maybe_new(");
        ml_backend__mlds_to_cs_data__output_rval_for_csharp_5_p_0(Info_7, Expr_9, Stream_10);
        mercury__io__write_string_4_p_0(Stream_10, (MR_String) ")");
      }
      else
      {
        MR_String Var_40;
        MR_Word next_value_of_tscc_proc_2_input_1_Info_6;
        MR_Word next_value_of_tscc_proc_2_input_2_Rval_7;
        MR_Word next_value_of_tscc_proc_2_input_3_Stream_8;

        Var_40 = ml_backend__mlds_to_cs_type__type_to_string_for_csharp_2_f_0(Info_7, Type_8);
        mercury__io__write_string_4_p_0(Stream_10, (MR_String) "(");
        mercury__io__write_string_4_p_0(Stream_10, Var_40);
        mercury__io__write_string_4_p_0(Stream_10, (MR_String) ") ");
        // direct tailcall eliminated
        ;
        next_value_of_tscc_proc_2_input_1_Info_6 = Info_7;
        next_value_of_tscc_proc_2_input_2_Rval_7 = Expr_9;
        next_value_of_tscc_proc_2_input_3_Stream_8 = Stream_10;
        tscc_proc_2_input_1_Info_6 = next_value_of_tscc_proc_2_input_1_Info_6;
        tscc_proc_2_input_2_Rval_7 = next_value_of_tscc_proc_2_input_2_Rval_7;
        tscc_proc_2_input_3_Stream_8 = next_value_of_tscc_proc_2_input_3_Stream_8;
        goto top_of_proc_2;
      }
    }
    goto tscc_end;
  }
top_of_proc_5:;
  {
    MR_Word Info_6 = tscc_proc_5_input_1_Info_6;
    MR_Word Stream_7 = tscc_proc_5_input_2_Stream_7;
    MR_Word Const_8 = tscc_proc_5_input_3_Const_8;
    MR_bool succeeded;

    switch (MR_tag((MR_Word) Const_8)) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        switch (MR_unmkbody(Const_8)) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
            mercury__io__write_string_4_p_0(Stream_7, (MR_String) "true");
            break;
          case (MR_Integer) 1:
            mercury__io__write_string_4_p_0(Stream_7, (MR_String) "false");
            break;
        }
        break;
      case (MR_Integer) 1:
        {
          MR_Word CodeAddr_20 = (MR_Word) (MR_body((MR_Word) (Const_8), (MR_Integer) 1));
          MR_String Name_21;
          MR_Word Var_73 = ((MR_Word) ((MR_hl_field(0, Info_6, (MR_Integer) 4))));
          MR_Box conv0_Name_21;

          mercury__map__lookup_3_p_0((MR_Word) (&ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_code_addr_0), (MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), Var_73, ((MR_Box) (CodeAddr_20)), &conv0_Name_21);
          Name_21 = ((MR_String) (conv0_Name_21));
          mercury__io__write_string_4_p_0(Stream_7, Name_21);
        }
        break;
      case (MR_Integer) 2:
        {
          MR_Integer N_10 = ((MR_Integer) ((MR_hl_field(2, Const_8, (MR_Integer) 0))));

          ml_backend__mlds_to_cs_data__output_int_const_for_csharp_4_p_0(Stream_7, N_10);
        }
        break;
      case (MR_Integer) 3:
        switch (((MR_Integer) ((MR_hl_field(3, Const_8, (MR_Integer) 0))))) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
            {
              MR_Unsigned N_95 = ((MR_Unsigned) ((MR_hl_field(3, Const_8, (MR_Integer) 1))));

              mercury__io__write_uint_4_p_0(Stream_7, N_95);
              mercury__io__write_string_4_p_0(Stream_7, (MR_String) "U");
            }
            break;
          case (MR_Integer) 1:
            {
              int8_t N_96 = ((int8_t) (MR_Word) (MR_hl_field(3, Const_8, (MR_Integer) 1)));

              mercury__io__write_string_4_p_0(Stream_7, (MR_String) "(sbyte) ");
              mercury__io__write_int8_4_p_0(Stream_7, N_96);
            }
            break;
          case (MR_Integer) 2:
            {
              uint8_t N_97 = ((uint8_t) (MR_Word) (MR_hl_field(3, Const_8, (MR_Integer) 1)));

              ml_backend__mlds_to_cs_data__output_uint8_const_for_csharp_4_p_0(Stream_7, N_97);
            }
            break;
          case (MR_Integer) 3:
            {
              int16_t N_98 = ((int16_t) (MR_Word) (MR_hl_field(3, Const_8, (MR_Integer) 1)));

              mercury__io__write_string_4_p_0(Stream_7, (MR_String) "(short) ");
              mercury__io__write_int16_4_p_0(Stream_7, N_98);
            }
            break;
          case (MR_Integer) 4:
            {
              uint16_t N_99 = ((uint16_t) (MR_Word) (MR_hl_field(3, Const_8, (MR_Integer) 1)));

              mercury__io__write_string_4_p_0(Stream_7, (MR_String) "(ushort) ");
              mercury__io__write_uint16_4_p_0(Stream_7, N_99);
            }
            break;
          case (MR_Integer) 5:
            {
              int32_t N_100 = ((int32_t) (MR_Word) (MR_hl_field(3, Const_8, (MR_Integer) 1)));

              mercury__io__write_int32_4_p_0(Stream_7, N_100);
            }
            break;
          case (MR_Integer) 6:
            {
              uint32_t N_101 = ((uint32_t) (MR_Word) (MR_hl_field(3, Const_8, (MR_Integer) 1)));

              mercury__io__write_uint32_4_p_0(Stream_7, N_101);
              mercury__io__write_string_4_p_0(Stream_7, (MR_String) "U");
            }
            break;
          case (MR_Integer) 7:
            {
              int64_t N_102 = MR_unbox_int64((MR_hl_field(3, Const_8, (MR_Integer) 1)));

              mercury__io__write_int64_4_p_0(Stream_7, N_102);
              mercury__io__write_string_4_p_0(Stream_7, (MR_String) "L");
            }
            break;
          case (MR_Integer) 8:
            {
              uint64_t N_103 = MR_unbox_uint64((MR_hl_field(3, Const_8, (MR_Integer) 1)));

              ml_backend__mlds_to_cs_data__output_uint64_const_for_csharp_4_p_0(Stream_7, N_103);
            }
            break;
          case (MR_Integer) 9:
            {
              MR_Word EnumType_12 = ((MR_Word) ((MR_hl_field(3, Const_8, (MR_Integer) 2))));
              MR_Word Var_53;
              MR_Word Var_55;
              MR_Integer N_104 = ((MR_Integer) ((MR_hl_field(3, Const_8, (MR_Integer) 1))));
              MR_Word next_value_of_tscc_proc_4_input_1_Info_7;
              MR_Word next_value_of_tscc_proc_4_input_2_Type_8;
              MR_Word next_value_of_tscc_proc_4_input_3_Expr_9;
              MR_Word next_value_of_tscc_proc_4_input_4_Stream_10;

              {
                Var_55 = (MR_Word) MR_mkword(2, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(2, Var_55, 0) = ((MR_Box) (N_104));
              }
              {
                Var_53 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(3, Var_53, 0) = ((MR_Box) ((MR_Unsigned) 1U));
                MR_hl_field(3, Var_53, 1) = ((MR_Box) (Var_55));
              }
              // direct tailcall eliminated
              ;
              next_value_of_tscc_proc_4_input_1_Info_7 = Info_6;
              next_value_of_tscc_proc_4_input_2_Type_8 = EnumType_12;
              next_value_of_tscc_proc_4_input_3_Expr_9 = Var_53;
              next_value_of_tscc_proc_4_input_4_Stream_10 = Stream_7;
              tscc_proc_4_input_1_Info_7 = next_value_of_tscc_proc_4_input_1_Info_7;
              tscc_proc_4_input_2_Type_8 = next_value_of_tscc_proc_4_input_2_Type_8;
              tscc_proc_4_input_3_Expr_9 = next_value_of_tscc_proc_4_input_3_Expr_9;
              tscc_proc_4_input_4_Stream_10 = next_value_of_tscc_proc_4_input_4_Stream_10;
              goto top_of_proc_4;
            }
            break;
          case (MR_Integer) 10:
            {
              MR_Integer C_11 = ((MR_Integer) ((MR_hl_field(3, Const_8, (MR_Integer) 1))));

              mercury__io__write_string_4_p_0(Stream_7, (MR_String) "( ");
              ml_backend__mlds_to_cs_data__output_int_const_for_csharp_4_p_0(Stream_7, C_11);
              mercury__io__write_string_4_p_0(Stream_7, (MR_String) ")");
            }
            break;
          case (MR_Integer) 11:
            {
              MR_Float FloatVal_16 = MR_unbox_float((MR_hl_field(3, Const_8, (MR_Integer) 1)));

              backend_libs__c_util__output_float_literal_4_p_0(Stream_7, FloatVal_16);
            }
            break;
          case (MR_Integer) 12:
            {
              MR_String String_17 = ((MR_String) ((MR_hl_field(3, Const_8, (MR_Integer) 1))));

              backend_libs__c_util__output_quoted_string_csharp_4_p_0(Stream_7, String_17);
            }
            break;
          case (MR_Integer) 13:
            {
              MR_Word String_105 = ((MR_Word) ((MR_hl_field(3, Const_8, (MR_Integer) 1))));

              backend_libs__c_util__output_quoted_multi_string_csharp_4_p_0(Stream_7, String_105);
            }
            break;
          case (MR_Integer) 14:
            {
              MR_Word Lang_13 = ((MR_Unsigned) ((MR_hl_field(3, Const_8, (MR_Integer) 1))) & (MR_Integer) 3);
              MR_String Value_14 = ((MR_String) ((MR_hl_field(3, Const_8, (MR_Integer) 2))));
              MR_Word Type_15 = ((MR_Word) ((MR_hl_field(3, Const_8, (MR_Integer) 3))));
              MR_Word Var_56;
              MR_String Var_64;

              {
                Var_56 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
                MR_hl_field(0, Var_56, 0) = ((MR_Box) (&ml_backend__mlds_to_cs_data_scalar_common_3[0]));
                MR_hl_field(0, Var_56, 1) = ((MR_Box) (ml_backend__mlds_to_cs_data__output_rval_const_for_csharp_5_p_0_1));
                MR_hl_field(0, Var_56, 2) = ((MR_Box) ((MR_Integer) 2));
                MR_hl_field(0, Var_56, 3) = ((MR_Box) (Lang_13));
                MR_hl_field(0, Var_56, 4) = ((MR_Box) ((MR_Integer) 1));
              }
              mercury__require__expect_3_p_0(Var_56, (MR_String) "predicate \140ml_backend.mlds_to_cs_data.output_rval_const_for_csharp\'/5", (MR_String) "language other than C#.");
              Var_64 = ml_backend__mlds_to_cs_type__type_to_string_for_csharp_2_f_0(Info_6, Type_15);
              mercury__io__write_string_4_p_0(Stream_7, (MR_String) "(");
              mercury__io__write_string_4_p_0(Stream_7, Var_64);
              mercury__io__write_string_4_p_0(Stream_7, (MR_String) ") ");
              mercury__io__write_string_4_p_0(Stream_7, Value_14);
            }
            break;
          case (MR_Integer) 15:
            {
              MR_Word TargetPrefixes_18 = ((MR_Word) ((MR_hl_field(3, Const_8, (MR_Integer) 1))));
              MR_String NamedConst_19 = ((MR_String) ((MR_hl_field(3, Const_8, (MR_Integer) 2))));
              MR_String Var_70 = ((MR_String) ((MR_hl_field(0, TargetPrefixes_18, (MR_Integer) 1))));

              mercury__io__write_string_4_p_0(Stream_7, Var_70);
              mercury__io__write_string_4_p_0(Stream_7, NamedConst_19);
            }
            break;
          case (MR_Integer) 16:
            {
              MR_Word VarName_22 = ((MR_Word) ((MR_hl_field(3, Const_8, (MR_Integer) 1))));
              MR_String VarNameStr_23;

              VarNameStr_23 = ml_backend__mlds_to_cs_name__local_var_name_to_ll_string_for_csharp_1_f_0(VarName_22);
              mercury__io__write_string_4_p_0(Stream_7, VarNameStr_23);
            }
            break;
          case (MR_Integer) 17:
            {
              MR_Word ModuleName_24 = ((MR_Word) ((MR_hl_field(3, Const_8, (MR_Integer) 1))));
              MR_String MangledModuleName_25;
              MR_Word Var_76;
              MR_Word VarName_106 = ((MR_Word) ((MR_hl_field(3, Const_8, (MR_Integer) 2))));
              MR_String VarNameStr_107;

              Var_76 = ml_backend__mlds__mlds_module_name_to_sym_name_1_f_0(ModuleName_24);
              MangledModuleName_25 = ml_backend__mlds_to_cs_name__strip_mercury_and_mangle_sym_name_for_csharp_1_f_0(Var_76);
              VarNameStr_107 = ml_backend__mlds_to_cs_name__global_var_name_to_ll_string_for_csharp_1_f_0(VarName_106);
              mercury__io__write_string_4_p_0(Stream_7, MangledModuleName_25);
              mercury__io__write_string_4_p_0(Stream_7, (MR_String) ".");
              mercury__io__write_string_4_p_0(Stream_7, VarNameStr_107);
            }
            break;
          case (MR_Integer) 18:
            {
              MR_Word RttiId_26 = ((MR_Word) ((MR_hl_field(3, Const_8, (MR_Integer) 2))));
              MR_String RttiAddrName0_27;
              MR_String RttiAddrName_28;
              MR_Word Var_84;
              MR_Word ModuleName_108 = ((MR_Word) ((MR_hl_field(3, Const_8, (MR_Integer) 1))));
              MR_String MangledModuleName_109;

              Var_84 = ml_backend__mlds__mlds_module_name_to_sym_name_1_f_0(ModuleName_108);
              MangledModuleName_109 = ml_backend__mlds_to_cs_name__strip_mercury_and_mangle_sym_name_for_csharp_1_f_0(Var_84);
              backend_libs__rtti__id_to_c_identifier_2_p_0(RttiId_26, &RttiAddrName0_27);
              RttiAddrName_28 = ml_backend__mlds_to_cs_name__limit_identifier_length_1_f_0(RttiAddrName0_27);
              mercury__io__write_string_4_p_0(Stream_7, MangledModuleName_109);
              mercury__io__write_string_4_p_0(Stream_7, (MR_String) ".");
              mercury__io__write_string_4_p_0(Stream_7, RttiAddrName_28);
            }
            break;
          case (MR_Integer) 19:
            {
              mercury__require__unexpected_2_p_0((MR_String) "predicate \140ml_backend.mlds_to_cs_data.output_rval_const_for_csharp\'/5", (MR_String) "NYI: mlconst_data_addr_tabling");
              return;
            }
            break;
          case (MR_Integer) 20:
            {
              MR_String Initializer_31;
              MR_Word Type_110 = ((MR_Word) ((MR_hl_field(3, Const_8, (MR_Integer) 1))));

              Initializer_31 = ml_backend__mlds_to_cs_data__get_default_initializer_for_csharp_2_f_0(Info_6, Type_110);
              mercury__io__write_string_4_p_0(Stream_7, Initializer_31);
            }
            break;
        }
        break;
    }
    goto tscc_end;
  }
top_of_proc_6:;
  {
    MR_Word Info_7 = tscc_proc_6_input_1_Info_7;
    MR_Word Expr_9 = tscc_proc_6_input_2_Expr_9;
    MR_Word Stream_10 = tscc_proc_6_input_3_Stream_10;
    MR_Word next_value_of_tscc_proc_2_input_1_Info_6 = Info_7;
    MR_Word next_value_of_tscc_proc_2_input_2_Rval_7 = Expr_9;
    MR_Word next_value_of_tscc_proc_2_input_3_Stream_8 = Stream_10;

    // direct tailcall eliminated
    ;
    tscc_proc_2_input_1_Info_6 = next_value_of_tscc_proc_2_input_1_Info_6;
    tscc_proc_2_input_2_Rval_7 = next_value_of_tscc_proc_2_input_2_Rval_7;
    tscc_proc_2_input_3_Stream_8 = next_value_of_tscc_proc_2_input_3_Stream_8;
    goto top_of_proc_2;
    goto tscc_end;
  }
tscc_end:;
  return;
}

void MR_CALL 
ml_backend__mlds_to_cs_data__output_rval_for_csharp_5_p_0(
  MR_Word tscc_proc_2_input_1_Info_6,
  MR_Word tscc_proc_2_input_2_Rval_7,
  MR_Word tscc_proc_2_input_3_Stream_8)
{
  MR_Word tscc_proc_1_input_1_Info_6;
  MR_Word tscc_proc_1_input_2_Lval_7;
  MR_Word tscc_proc_1_input_3_Stream_8;
  MR_Word tscc_proc_3_input_1_Info_6;
  MR_Word tscc_proc_3_input_2_Rval_7;
  MR_Word tscc_proc_3_input_3_Stream_8;
  MR_Word tscc_proc_4_input_1_Info_7;
  MR_Word tscc_proc_4_input_2_Type_8;
  MR_Word tscc_proc_4_input_3_Expr_9;
  MR_Word tscc_proc_4_input_4_Stream_10;
  MR_Word tscc_proc_5_input_1_Info_6;
  MR_Word tscc_proc_5_input_2_Stream_7;
  MR_Word tscc_proc_5_input_3_Const_8;
  MR_Word tscc_proc_6_input_1_Info_7;
  MR_Word tscc_proc_6_input_2_Expr_9;
  MR_Word tscc_proc_6_input_3_Stream_10;

  // The code for TSCC PROC 2: pred ml_backend.mlds_to_cs_data.output_rval_for_csharp/5-0.
  ;
  // Setup for mutual tailcalls optimized into a loop.
  ;
  // The mutually recursive procedures are:
  ;
  ;
  // proc 1 in TSCC: pred ml_backend.mlds_to_cs_data.output_lval_for_csharp/5-0
  ;
  // proc 2 in TSCC: pred ml_backend.mlds_to_cs_data.output_rval_for_csharp/5-0
  ;
  // proc 3 in TSCC: pred ml_backend.mlds_to_cs_data.output_bracketed_rval_for_csharp/5-0
  ;
  // proc 4 in TSCC: pred ml_backend.mlds_to_cs_data.output_cast_rval_for_csharp/6-0
  ;
  // proc 5 in TSCC: pred ml_backend.mlds_to_cs_data.output_rval_const_for_csharp/5-0
  ;
  // proc 6 in TSCC: pred ml_backend.mlds_to_cs_data.UnusedArgs__pred__output_boxed_rval_for_csharp__[2]_0/6-0
  ;
  ;
  goto top_of_proc_2;
top_of_proc_1:;
  {
    MR_Word Info_6 = tscc_proc_1_input_1_Info_6;
    MR_Word Lval_7 = tscc_proc_1_input_2_Lval_7;
    MR_Word Stream_8 = tscc_proc_1_input_3_Stream_8;
    MR_bool succeeded;

    switch (MR_tag((MR_Word) Lval_7)) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        {
          MR_Word PtrRval_11 = ((MR_Word) ((MR_hl_field(0, Lval_7, (MR_Integer) 1))));
          MR_Word FieldId_13 = ((MR_Word) ((MR_hl_field(0, Lval_7, (MR_Integer) 3))));
          MR_Word FieldType_14 = ((MR_Word) ((MR_hl_field(0, Lval_7, (MR_Integer) 4))));

          if (((MR_tag((MR_Word) FieldId_13)) == (MR_Integer) 1))
          {
            MR_Word QualFieldVarName_19 = ((MR_Word) ((MR_hl_field(1, FieldId_13, (MR_Integer) 0))));
            MR_Word CtorType_20 = ((MR_Word) ((MR_hl_field(1, FieldId_13, (MR_Integer) 1))));
            MR_Word FieldVarName_23 = ((MR_Word) ((MR_hl_field(0, QualFieldVarName_19, (MR_Integer) 2))));
            MR_String FieldVarNameStr_24;

            FieldVarNameStr_24 = ml_backend__mlds_to_cs_name__field_var_name_to_ll_string_for_csharp_1_f_0(FieldVarName_23);
            succeeded = (FieldVarName_23 == (MR_Word) ((MR_Unsigned) 4U));
            if (succeeded)
            {
              if (((MR_tag((MR_Word) PtrRval_11)) == (MR_Integer) 2))
              {
                MR_Word Var_103 = ((MR_Word) ((MR_hl_field(2, PtrRval_11, (MR_Integer) 0))));

                if (((((MR_tag((MR_Word) Var_103)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(3, Var_103, (MR_Integer) 0)))) == (MR_Integer) 1))))
                  succeeded = MR_TRUE;
                else
                if (((((MR_tag((MR_Word) Var_103)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(3, Var_103, (MR_Integer) 0)))) == (MR_Integer) 0))))
                  succeeded = MR_TRUE;
                else
                  succeeded = MR_FALSE;
              }
              else
              if (((((MR_tag((MR_Word) PtrRval_11)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(3, PtrRval_11, (MR_Integer) 0)))) == (MR_Integer) 1))))
              {
                MR_Word Var_98 = ((MR_Word) ((MR_hl_field(3, PtrRval_11, (MR_Integer) 1))));

                succeeded = ((MR_tag((MR_Word) Var_98)) == (MR_Integer) 1);
                if (succeeded)
                {
                }
              }
              else
                succeeded = MR_FALSE;
              if (succeeded)
                ml_backend__mlds_to_cs_data__output_rval_for_csharp_5_p_0(Info_6, PtrRval_11, Stream_8);
              else
              {
                mercury__io__write_char_4_p_0(Stream_8, (MR_Char) 40);
                ml_backend__mlds_to_cs_data__output_rval_for_csharp_5_p_0(Info_6, PtrRval_11, Stream_8);
                mercury__io__write_char_4_p_0(Stream_8, (MR_Char) 41);
              }
              mercury__io__write_string_4_p_0(Stream_8, (MR_String) ".");
              mercury__io__write_string_4_p_0(Stream_8, FieldVarNameStr_24);
            }
            else
            {
              succeeded = ((((MR_tag((MR_Word) PtrRval_11)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(3, PtrRval_11, (MR_Integer) 0)))) == (MR_Integer) 9)));
              if (succeeded)
              {
                ml_backend__mlds_to_cs_data__output_rval_for_csharp_5_p_0(Info_6, PtrRval_11, Stream_8);
                mercury__io__write_string_4_p_0(Stream_8, (MR_String) ".");
                mercury__io__write_string_4_p_0(Stream_8, FieldVarNameStr_24);
              }
              else
              {
                MR_String Var_65;

                Var_65 = ml_backend__mlds_to_cs_type__type_to_string_for_csharp_2_f_0(Info_6, CtorType_20);
                mercury__io__write_string_4_p_0(Stream_8, (MR_String) "((");
                mercury__io__write_string_4_p_0(Stream_8, Var_65);
                mercury__io__write_string_4_p_0(Stream_8, (MR_String) ") ");
                ml_backend__mlds_to_cs_data__output_bracketed_rval_for_csharp_5_p_0(Info_6, PtrRval_11, Stream_8);
                mercury__io__write_string_4_p_0(Stream_8, (MR_String) ").");
                mercury__io__write_string_4_p_0(Stream_8, FieldVarNameStr_24);
              }
            }
          }
          else
          {
            MR_Word OffsetRval_15 = ((MR_Word) ((MR_hl_field(0, FieldId_13, (MR_Integer) 0))));

            if ((FieldType_14 == (MR_Word) ((MR_Unsigned) 20U)))
              succeeded = MR_TRUE;
            else
            if (((((MR_tag((MR_Word) FieldType_14)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(3, FieldType_14, (MR_Integer) 0)))) == (MR_Integer) 3))))
            {
              MR_Word Var_38 = ((MR_Word) ((MR_hl_field(3, FieldType_14, (MR_Integer) 1))));

              succeeded = ((MR_tag((MR_Word) Var_38)) == (MR_Integer) 0);
              if (succeeded)
              {
              }
            }
            else
              succeeded = MR_FALSE;
            if (!(succeeded))
              {
                mercury__require__unexpected_2_p_0((MR_String) "predicate \140ml_backend.mlds_to_cs_data.output_lval_for_csharp\'/5", (MR_String) "unexpected field type");
                return;
              }
            mercury__io__write_string_4_p_0(Stream_8, (MR_String) "((object[]) ");
            ml_backend__mlds_to_cs_data__output_rval_for_csharp_5_p_0(Info_6, PtrRval_11, Stream_8);
            mercury__io__write_string_4_p_0(Stream_8, (MR_String) ")[");
            ml_backend__mlds_to_cs_data__output_rval_for_csharp_5_p_0(Info_6, OffsetRval_15, Stream_8);
            mercury__io__write_string_4_p_0(Stream_8, (MR_String) "]");
          }
        }
        break;
      case (MR_Integer) 1:
        {
          MR_Word Rval_26 = ((MR_Word) ((MR_hl_field(1, Lval_7, (MR_Integer) 0))));
          MR_Word next_value_of_tscc_proc_3_input_1_Info_6 = Info_6;
          MR_Word next_value_of_tscc_proc_3_input_2_Rval_7 = Rval_26;
          MR_Word next_value_of_tscc_proc_3_input_3_Stream_8 = Stream_8;

          // direct tailcall eliminated
          ;
          tscc_proc_3_input_1_Info_6 = next_value_of_tscc_proc_3_input_1_Info_6;
          tscc_proc_3_input_2_Rval_7 = next_value_of_tscc_proc_3_input_2_Rval_7;
          tscc_proc_3_input_3_Stream_8 = next_value_of_tscc_proc_3_input_3_Stream_8;
          goto top_of_proc_3;
        }
        break;
      case (MR_Integer) 2:
        {
          MR_Word GlobalVarRef_28 = ((MR_Word) ((MR_hl_field(2, Lval_7, (MR_Integer) 0))));
          MR_String EnvVarName_29 = (MR_String) (GlobalVarRef_28);

          mercury__io__write_string_4_p_0(Stream_8, (MR_String) "mercury_envvar_");
          mercury__io__write_string_4_p_0(Stream_8, EnvVarName_29);
        }
        break;
      case (MR_Integer) 3:
        switch (((MR_Integer) ((MR_hl_field(3, Lval_7, (MR_Integer) 0))))) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
            {
              MR_Word LocalVarName_30 = ((MR_Word) ((MR_hl_field(3, Lval_7, (MR_Integer) 1))));
              MR_String LocalVarNameStr_32;

              LocalVarNameStr_32 = ml_backend__mlds_to_cs_name__local_var_name_to_ll_string_for_csharp_1_f_0(LocalVarName_30);
              mercury__io__write_string_4_p_0(Stream_8, LocalVarNameStr_32);
            }
            break;
          case (MR_Integer) 1:
            {
              MR_Word GlobalVarName_33 = ((MR_Word) ((MR_hl_field(3, Lval_7, (MR_Integer) 1))));
              MR_String GlobalVarNameStr_35;

              GlobalVarNameStr_35 = ml_backend__mlds_to_cs_name__maybe_qualified_global_var_name_to_string_for_csharp_2_f_0(Info_6, GlobalVarName_33);
              mercury__io__write_string_4_p_0(Stream_8, GlobalVarNameStr_35);
            }
            break;
        }
        break;
    }
    goto tscc_end;
  }
top_of_proc_2:;
  {
    MR_Word Info_6 = tscc_proc_2_input_1_Info_6;
    MR_Word Rval_7 = tscc_proc_2_input_2_Rval_7;
    MR_Word Stream_8 = tscc_proc_2_input_3_Stream_8;
    MR_bool succeeded;

    switch (MR_tag((MR_Word) Rval_7)) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        {
          mercury__require__unexpected_2_p_0((MR_String) "predicate \140ml_backend.mlds_to_cs_data.output_rval_for_csharp\'/5", (MR_String) "ml_scalar_common");
          return;
        }
        break;
      case (MR_Integer) 1:
        {
          MR_Word ScalarCommon_22 = (MR_Word) (MR_body((MR_Word) (Rval_7), (MR_Integer) 1));
          MR_Word ModuleName_23 = ((MR_Word) ((MR_hl_field(0, ScalarCommon_22, (MR_Integer) 0))));
          MR_Integer TypeNum_25;
          MR_Integer RowNum_26 = ((MR_Integer) ((MR_hl_field(0, ScalarCommon_22, (MR_Integer) 3))));
          MR_Word ModuleSymName_27;
          MR_String MangledModuleName_28;
          MR_Word Var_57 = ((MR_Word) ((MR_hl_field(0, ScalarCommon_22, (MR_Integer) 2))));
          MR_String Var_115;
          MR_String Var_125;

          TypeNum_25 = (MR_Integer) (Var_57);
          ModuleSymName_27 = ml_backend__mlds__mlds_module_name_to_sym_name_1_f_0(ModuleName_23);
          MangledModuleName_28 = ml_backend__mlds_to_cs_name__strip_mercury_and_mangle_sym_name_for_csharp_1_f_0(ModuleSymName_27);
          mercury__io__write_string_4_p_0(Stream_8, MangledModuleName_28);
          mercury__io__write_string_4_p_0(Stream_8, (MR_String) ".MR_scalar_common_");
          mercury__string__format__format_signed_int_component_nowidth_noprec_3_p_0((MR_Word) (&ml_backend__mlds_to_cs_data_scalar_common_1[0]), TypeNum_25, &Var_115);
          mercury__io__write_string_4_p_0(Stream_8, Var_115);
          mercury__io__write_string_4_p_0(Stream_8, (MR_String) "[");
          mercury__string__format__format_signed_int_component_nowidth_noprec_3_p_0((MR_Word) (&ml_backend__mlds_to_cs_data_scalar_common_1[0]), RowNum_26, &Var_125);
          mercury__io__write_string_4_p_0(Stream_8, Var_125);
          mercury__io__write_string_4_p_0(Stream_8, (MR_String) "]");
        }
        break;
      case (MR_Integer) 2:
        {
          MR_Word Lval_10 = ((MR_Word) ((MR_hl_field(2, Rval_7, (MR_Integer) 0))));
          MR_Word next_value_of_tscc_proc_1_input_1_Info_6 = Info_6;
          MR_Word next_value_of_tscc_proc_1_input_2_Lval_7 = Lval_10;
          MR_Word next_value_of_tscc_proc_1_input_3_Stream_8 = Stream_8;

          // direct tailcall eliminated
          ;
          tscc_proc_1_input_1_Info_6 = next_value_of_tscc_proc_1_input_1_Info_6;
          tscc_proc_1_input_2_Lval_7 = next_value_of_tscc_proc_1_input_2_Lval_7;
          tscc_proc_1_input_3_Stream_8 = next_value_of_tscc_proc_1_input_3_Stream_8;
          goto top_of_proc_1;
        }
        break;
      case (MR_Integer) 3:
        switch (((MR_Integer) ((MR_hl_field(3, Rval_7, (MR_Integer) 0))))) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
            {
              mercury__require__unexpected_2_p_0((MR_String) "predicate \140ml_backend.mlds_to_cs_data.output_rval_for_csharp\'/5", (MR_String) "tags not supported in C#");
              return;
            }
            break;
          case (MR_Integer) 1:
            {
              MR_Word Const_13 = ((MR_Word) ((MR_hl_field(3, Rval_7, (MR_Integer) 1))));
              MR_Word next_value_of_tscc_proc_5_input_1_Info_6 = Info_6;
              MR_Word next_value_of_tscc_proc_5_input_2_Stream_7 = Stream_8;
              MR_Word next_value_of_tscc_proc_5_input_3_Const_8 = Const_13;

              // direct tailcall eliminated
              ;
              tscc_proc_5_input_1_Info_6 = next_value_of_tscc_proc_5_input_1_Info_6;
              tscc_proc_5_input_2_Stream_7 = next_value_of_tscc_proc_5_input_2_Stream_7;
              tscc_proc_5_input_3_Const_8 = next_value_of_tscc_proc_5_input_3_Const_8;
              goto top_of_proc_5;
            }
            break;
          case (MR_Integer) 2:
            {
              MR_Word Type_80 = ((MR_Word) ((MR_hl_field(3, Rval_7, (MR_Integer) 1))));
              MR_Word SubRval_81 = ((MR_Word) ((MR_hl_field(3, Rval_7, (MR_Integer) 2))));
              MR_Word Var_42;
              MR_Word Var_89;

              succeeded = ((((MR_tag((MR_Word) Type_80)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(3, Type_80, (MR_Integer) 0)))) == (MR_Integer) 3)));
              if (succeeded)
              {
                Var_42 = ((MR_Word) ((MR_hl_field(3, Type_80, (MR_Integer) 1))));
                Var_89 = parse_tree__builtin_lib_types__comparison_result_type_0_f_0();
                succeeded = parse_tree__prog_data____Unify____mer_type_0_0(Var_42, Var_89);
              }
              if (succeeded)
              {
                mercury__io__write_string_4_p_0(Stream_8, (MR_String) "builtin.comparison_result_object[(int) ");
                ml_backend__mlds_to_cs_data__output_rval_for_csharp_5_p_0(Info_6, SubRval_81, Stream_8);
                mercury__io__write_string_4_p_0(Stream_8, (MR_String) "]");
              }
              else
              {
                MR_Word next_value_of_tscc_proc_6_input_1_Info_7 = Info_6;
                MR_Word next_value_of_tscc_proc_6_input_2_Expr_9 = SubRval_81;
                MR_Word next_value_of_tscc_proc_6_input_3_Stream_10 = Stream_8;

                // direct tailcall eliminated
                ;
                tscc_proc_6_input_1_Info_7 = next_value_of_tscc_proc_6_input_1_Info_7;
                tscc_proc_6_input_2_Expr_9 = next_value_of_tscc_proc_6_input_2_Expr_9;
                tscc_proc_6_input_3_Stream_10 = next_value_of_tscc_proc_6_input_3_Stream_10;
                goto top_of_proc_6;
              }
            }
            break;
          case (MR_Integer) 3:
            {
              MR_Word Type_82 = ((MR_Word) ((MR_hl_field(3, Rval_7, (MR_Integer) 1))));
              MR_Word SubRval_83 = ((MR_Word) ((MR_hl_field(3, Rval_7, (MR_Integer) 2))));

              ml_backend__mlds_to_cs_data__output_unboxed_rval_for_csharp_6_p_0(Info_6, Type_82, SubRval_83, Stream_8);
            }
            break;
          case (MR_Integer) 4:
            {
              MR_Word Type_14 = ((MR_Word) ((MR_hl_field(3, Rval_7, (MR_Integer) 1))));
              MR_Word SubRval_15 = ((MR_Word) ((MR_hl_field(3, Rval_7, (MR_Integer) 2))));
              MR_Word next_value_of_tscc_proc_4_input_1_Info_7 = Info_6;
              MR_Word next_value_of_tscc_proc_4_input_2_Type_8 = Type_14;
              MR_Word next_value_of_tscc_proc_4_input_3_Expr_9 = SubRval_15;
              MR_Word next_value_of_tscc_proc_4_input_4_Stream_10 = Stream_8;

              // direct tailcall eliminated
              ;
              tscc_proc_4_input_1_Info_7 = next_value_of_tscc_proc_4_input_1_Info_7;
              tscc_proc_4_input_2_Type_8 = next_value_of_tscc_proc_4_input_2_Type_8;
              tscc_proc_4_input_3_Expr_9 = next_value_of_tscc_proc_4_input_3_Expr_9;
              tscc_proc_4_input_4_Stream_10 = next_value_of_tscc_proc_4_input_4_Stream_10;
              goto top_of_proc_4;
            }
            break;
          case (MR_Integer) 5:
            {
              MR_Word Unop_17 = ((MR_Word) ((MR_hl_field(3, Rval_7, (MR_Integer) 1))));
              MR_Word SubRval_84 = ((MR_Word) ((MR_hl_field(3, Rval_7, (MR_Integer) 2))));

              ml_backend__mlds_to_cs_data__output_unop_for_csharp_6_p_0(Info_6, Stream_8, Unop_17, SubRval_84);
            }
            break;
          case (MR_Integer) 6:
            {
              MR_Word Op_18 = ((MR_Word) ((MR_hl_field(3, Rval_7, (MR_Integer) 1))));
              MR_Word SubRvalA_19 = ((MR_Word) ((MR_hl_field(3, Rval_7, (MR_Integer) 2))));
              MR_Word SubRvalB_20 = ((MR_Word) ((MR_hl_field(3, Rval_7, (MR_Integer) 3))));

              ml_backend__mlds_to_cs_data__output_binop_for_csharp_7_p_0(Info_6, Stream_8, Op_18, SubRvalA_19, SubRvalB_20);
            }
            break;
          case (MR_Integer) 7:
            {
              MR_Word Lval_85 = ((MR_Word) ((MR_hl_field(3, Rval_7, (MR_Integer) 1))));
              MR_Word next_value_of_tscc_proc_1_input_1_Info_6;
              MR_Word next_value_of_tscc_proc_1_input_2_Lval_7;
              MR_Word next_value_of_tscc_proc_1_input_3_Stream_8;

              mercury__io__write_string_4_p_0(Stream_8, (MR_String) "out ");
              // direct tailcall eliminated
              ;
              next_value_of_tscc_proc_1_input_1_Info_6 = Info_6;
              next_value_of_tscc_proc_1_input_2_Lval_7 = Lval_85;
              next_value_of_tscc_proc_1_input_3_Stream_8 = Stream_8;
              tscc_proc_1_input_1_Info_6 = next_value_of_tscc_proc_1_input_1_Info_6;
              tscc_proc_1_input_2_Lval_7 = next_value_of_tscc_proc_1_input_2_Lval_7;
              tscc_proc_1_input_3_Stream_8 = next_value_of_tscc_proc_1_input_3_Stream_8;
              goto top_of_proc_1;
            }
            break;
          case (MR_Integer) 8:
            {
              MR_Word VectorCommon_29 = ((MR_Word) ((MR_hl_field(3, Rval_7, (MR_Integer) 1))));
              MR_Word RowRval_30 = ((MR_Word) ((MR_hl_field(3, Rval_7, (MR_Integer) 2))));
              MR_Integer StartRowNum_32 = ((MR_Integer) ((MR_hl_field(0, VectorCommon_29, (MR_Integer) 3))));
              MR_Word Var_67 = ((MR_Word) ((MR_hl_field(0, VectorCommon_29, (MR_Integer) 2))));
              MR_Integer TypeNum_88 = (MR_Integer) (Var_67);
              MR_String Var_93;
              MR_String Var_103;

              mercury__io__write_string_4_p_0(Stream_8, (MR_String) "MR_vector_common_");
              mercury__string__format__format_signed_int_component_nowidth_noprec_3_p_0((MR_Word) (&ml_backend__mlds_to_cs_data_scalar_common_1[0]), TypeNum_88, &Var_93);
              mercury__io__write_string_4_p_0(Stream_8, Var_93);
              mercury__io__write_string_4_p_0(Stream_8, (MR_String) "[");
              mercury__string__format__format_signed_int_component_nowidth_noprec_3_p_0((MR_Word) (&ml_backend__mlds_to_cs_data_scalar_common_1[0]), StartRowNum_32, &Var_103);
              mercury__io__write_string_4_p_0(Stream_8, Var_103);
              mercury__io__write_string_4_p_0(Stream_8, (MR_String) " + ");
              ml_backend__mlds_to_cs_data__output_rval_for_csharp_5_p_0(Info_6, RowRval_30, Stream_8);
              mercury__io__write_string_4_p_0(Stream_8, (MR_String) "]");
            }
            break;
          case (MR_Integer) 9:
            mercury__io__write_string_4_p_0(Stream_8, (MR_String) "this");
            break;
        }
        break;
    }
    goto tscc_end;
  }
top_of_proc_3:;
  {
    MR_Word Info_6 = tscc_proc_3_input_1_Info_6;
    MR_Word Rval_7 = tscc_proc_3_input_2_Rval_7;
    MR_Word Stream_8 = tscc_proc_3_input_3_Stream_8;
    MR_bool succeeded;

    if (((MR_tag((MR_Word) Rval_7)) == (MR_Integer) 2))
    {
      MR_Word Var_25 = ((MR_Word) ((MR_hl_field(2, Rval_7, (MR_Integer) 0))));

      if (((((MR_tag((MR_Word) Var_25)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(3, Var_25, (MR_Integer) 0)))) == (MR_Integer) 1))))
        succeeded = MR_TRUE;
      else
      if (((((MR_tag((MR_Word) Var_25)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(3, Var_25, (MR_Integer) 0)))) == (MR_Integer) 0))))
        succeeded = MR_TRUE;
      else
        succeeded = MR_FALSE;
    }
    else
    if (((((MR_tag((MR_Word) Rval_7)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(3, Rval_7, (MR_Integer) 0)))) == (MR_Integer) 1))))
    {
      MR_Word Var_19 = ((MR_Word) ((MR_hl_field(3, Rval_7, (MR_Integer) 1))));

      succeeded = ((MR_tag((MR_Word) Var_19)) == (MR_Integer) 1);
      if (succeeded)
      {
      }
    }
    else
      succeeded = MR_FALSE;
    if (succeeded)
    {
      MR_Word next_value_of_tscc_proc_2_input_1_Info_6 = Info_6;
      MR_Word next_value_of_tscc_proc_2_input_2_Rval_7 = Rval_7;
      MR_Word next_value_of_tscc_proc_2_input_3_Stream_8 = Stream_8;

      // direct tailcall eliminated
      ;
      tscc_proc_2_input_1_Info_6 = next_value_of_tscc_proc_2_input_1_Info_6;
      tscc_proc_2_input_2_Rval_7 = next_value_of_tscc_proc_2_input_2_Rval_7;
      tscc_proc_2_input_3_Stream_8 = next_value_of_tscc_proc_2_input_3_Stream_8;
      goto top_of_proc_2;
    }
    else
    {
      mercury__io__write_char_4_p_0(Stream_8, (MR_Char) 40);
      ml_backend__mlds_to_cs_data__output_rval_for_csharp_5_p_0(Info_6, Rval_7, Stream_8);
      mercury__io__write_char_4_p_0(Stream_8, (MR_Char) 41);
    }
    goto tscc_end;
  }
top_of_proc_4:;
  {
    MR_Word Info_7 = tscc_proc_4_input_1_Info_7;
    MR_Word Type_8 = tscc_proc_4_input_2_Type_8;
    MR_Word Expr_9 = tscc_proc_4_input_3_Expr_9;
    MR_Word Stream_10 = tscc_proc_4_input_4_Stream_10;
    MR_bool succeeded = (Type_8 == (MR_Word) ((MR_Unsigned) 32U));
    MR_Integer N_12;
    MR_Word Var_16;

    if (succeeded)
    {
      succeeded = ((((MR_tag((MR_Word) Expr_9)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(3, Expr_9, (MR_Integer) 0)))) == (MR_Integer) 1)));
      if (succeeded)
      {
        Var_16 = ((MR_Word) ((MR_hl_field(3, Expr_9, (MR_Integer) 1))));
        succeeded = ((MR_tag((MR_Word) Var_16)) == (MR_Integer) 2);
        if (succeeded)
          N_12 = ((MR_Integer) ((MR_hl_field(2, Var_16, (MR_Integer) 0))));
      }
    }
    if (succeeded)
    {
      MR_Integer Var_47;

      ml_backend__mlds_to_cs_util__maybe_output_inline_comment_for_csharp_5_p_0(Info_7, Stream_10, (MR_String) "cast");
      succeeded = (N_12 >= (MR_Integer) 1);
      if (succeeded)
      {
        Var_47 = (MR_Integer) 5;
        succeeded = (N_12 <= Var_47);
      }
      if (succeeded)
      {
        mercury__io__write_string_4_p_0(Stream_10, (MR_String) "runtime.PseudoTypeInfo.K");
        mercury__io__write_int_4_p_0(Stream_10, N_12);
      }
      else
      {
        mercury__io__write_string_4_p_0(Stream_10, (MR_String) "new runtime.PseudoTypeInfo(");
        ml_backend__mlds_to_cs_data__output_rval_for_csharp_5_p_0(Info_7, Expr_9, Stream_10);
        mercury__io__write_string_4_p_0(Stream_10, (MR_String) ")");
      }
    }
    else
    {
      if ((Type_8 == (MR_Word) ((MR_Unsigned) 28U)))
        succeeded = MR_TRUE;
      else
      if (((((MR_tag((MR_Word) Type_8)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(3, Type_8, (MR_Integer) 0)))) == (MR_Integer) 3))))
      {
        MR_Word Var_27 = ((MR_Word) ((MR_hl_field(3, Type_8, (MR_Integer) 2))));
        MR_Word Var_28;

        succeeded = ((((MR_tag((MR_Word) Var_27)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(3, Var_27, (MR_Integer) 0)))) == (MR_Integer) 0)));
        if (succeeded)
        {
          Var_28 = ((MR_Unsigned) ((MR_hl_field(3, Var_27, (MR_Integer) 1))) & (MR_Integer) 3);
          succeeded = (Var_28 == (MR_Integer) 0);
        }
      }
      else
        succeeded = MR_FALSE;
      if (succeeded)
      {
        ml_backend__mlds_to_cs_util__maybe_output_inline_comment_for_csharp_5_p_0(Info_7, Stream_10, (MR_String) "cast");
        mercury__io__write_string_4_p_0(Stream_10, (MR_String) "runtime.TypeInfo_Struct.maybe_new(");
        ml_backend__mlds_to_cs_data__output_rval_for_csharp_5_p_0(Info_7, Expr_9, Stream_10);
        mercury__io__write_string_4_p_0(Stream_10, (MR_String) ")");
      }
      else
      {
        MR_String Var_40;
        MR_Word next_value_of_tscc_proc_2_input_1_Info_6;
        MR_Word next_value_of_tscc_proc_2_input_2_Rval_7;
        MR_Word next_value_of_tscc_proc_2_input_3_Stream_8;

        Var_40 = ml_backend__mlds_to_cs_type__type_to_string_for_csharp_2_f_0(Info_7, Type_8);
        mercury__io__write_string_4_p_0(Stream_10, (MR_String) "(");
        mercury__io__write_string_4_p_0(Stream_10, Var_40);
        mercury__io__write_string_4_p_0(Stream_10, (MR_String) ") ");
        // direct tailcall eliminated
        ;
        next_value_of_tscc_proc_2_input_1_Info_6 = Info_7;
        next_value_of_tscc_proc_2_input_2_Rval_7 = Expr_9;
        next_value_of_tscc_proc_2_input_3_Stream_8 = Stream_10;
        tscc_proc_2_input_1_Info_6 = next_value_of_tscc_proc_2_input_1_Info_6;
        tscc_proc_2_input_2_Rval_7 = next_value_of_tscc_proc_2_input_2_Rval_7;
        tscc_proc_2_input_3_Stream_8 = next_value_of_tscc_proc_2_input_3_Stream_8;
        goto top_of_proc_2;
      }
    }
    goto tscc_end;
  }
top_of_proc_5:;
  {
    MR_Word Info_6 = tscc_proc_5_input_1_Info_6;
    MR_Word Stream_7 = tscc_proc_5_input_2_Stream_7;
    MR_Word Const_8 = tscc_proc_5_input_3_Const_8;
    MR_bool succeeded;

    switch (MR_tag((MR_Word) Const_8)) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        switch (MR_unmkbody(Const_8)) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
            mercury__io__write_string_4_p_0(Stream_7, (MR_String) "true");
            break;
          case (MR_Integer) 1:
            mercury__io__write_string_4_p_0(Stream_7, (MR_String) "false");
            break;
        }
        break;
      case (MR_Integer) 1:
        {
          MR_Word CodeAddr_20 = (MR_Word) (MR_body((MR_Word) (Const_8), (MR_Integer) 1));
          MR_String Name_21;
          MR_Word Var_73 = ((MR_Word) ((MR_hl_field(0, Info_6, (MR_Integer) 4))));
          MR_Box conv0_Name_21;

          mercury__map__lookup_3_p_0((MR_Word) (&ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_code_addr_0), (MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), Var_73, ((MR_Box) (CodeAddr_20)), &conv0_Name_21);
          Name_21 = ((MR_String) (conv0_Name_21));
          mercury__io__write_string_4_p_0(Stream_7, Name_21);
        }
        break;
      case (MR_Integer) 2:
        {
          MR_Integer N_10 = ((MR_Integer) ((MR_hl_field(2, Const_8, (MR_Integer) 0))));

          ml_backend__mlds_to_cs_data__output_int_const_for_csharp_4_p_0(Stream_7, N_10);
        }
        break;
      case (MR_Integer) 3:
        switch (((MR_Integer) ((MR_hl_field(3, Const_8, (MR_Integer) 0))))) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
            {
              MR_Unsigned N_95 = ((MR_Unsigned) ((MR_hl_field(3, Const_8, (MR_Integer) 1))));

              mercury__io__write_uint_4_p_0(Stream_7, N_95);
              mercury__io__write_string_4_p_0(Stream_7, (MR_String) "U");
            }
            break;
          case (MR_Integer) 1:
            {
              int8_t N_96 = ((int8_t) (MR_Word) (MR_hl_field(3, Const_8, (MR_Integer) 1)));

              mercury__io__write_string_4_p_0(Stream_7, (MR_String) "(sbyte) ");
              mercury__io__write_int8_4_p_0(Stream_7, N_96);
            }
            break;
          case (MR_Integer) 2:
            {
              uint8_t N_97 = ((uint8_t) (MR_Word) (MR_hl_field(3, Const_8, (MR_Integer) 1)));

              ml_backend__mlds_to_cs_data__output_uint8_const_for_csharp_4_p_0(Stream_7, N_97);
            }
            break;
          case (MR_Integer) 3:
            {
              int16_t N_98 = ((int16_t) (MR_Word) (MR_hl_field(3, Const_8, (MR_Integer) 1)));

              mercury__io__write_string_4_p_0(Stream_7, (MR_String) "(short) ");
              mercury__io__write_int16_4_p_0(Stream_7, N_98);
            }
            break;
          case (MR_Integer) 4:
            {
              uint16_t N_99 = ((uint16_t) (MR_Word) (MR_hl_field(3, Const_8, (MR_Integer) 1)));

              mercury__io__write_string_4_p_0(Stream_7, (MR_String) "(ushort) ");
              mercury__io__write_uint16_4_p_0(Stream_7, N_99);
            }
            break;
          case (MR_Integer) 5:
            {
              int32_t N_100 = ((int32_t) (MR_Word) (MR_hl_field(3, Const_8, (MR_Integer) 1)));

              mercury__io__write_int32_4_p_0(Stream_7, N_100);
            }
            break;
          case (MR_Integer) 6:
            {
              uint32_t N_101 = ((uint32_t) (MR_Word) (MR_hl_field(3, Const_8, (MR_Integer) 1)));

              mercury__io__write_uint32_4_p_0(Stream_7, N_101);
              mercury__io__write_string_4_p_0(Stream_7, (MR_String) "U");
            }
            break;
          case (MR_Integer) 7:
            {
              int64_t N_102 = MR_unbox_int64((MR_hl_field(3, Const_8, (MR_Integer) 1)));

              mercury__io__write_int64_4_p_0(Stream_7, N_102);
              mercury__io__write_string_4_p_0(Stream_7, (MR_String) "L");
            }
            break;
          case (MR_Integer) 8:
            {
              uint64_t N_103 = MR_unbox_uint64((MR_hl_field(3, Const_8, (MR_Integer) 1)));

              ml_backend__mlds_to_cs_data__output_uint64_const_for_csharp_4_p_0(Stream_7, N_103);
            }
            break;
          case (MR_Integer) 9:
            {
              MR_Word EnumType_12 = ((MR_Word) ((MR_hl_field(3, Const_8, (MR_Integer) 2))));
              MR_Word Var_53;
              MR_Word Var_55;
              MR_Integer N_104 = ((MR_Integer) ((MR_hl_field(3, Const_8, (MR_Integer) 1))));
              MR_Word next_value_of_tscc_proc_4_input_1_Info_7;
              MR_Word next_value_of_tscc_proc_4_input_2_Type_8;
              MR_Word next_value_of_tscc_proc_4_input_3_Expr_9;
              MR_Word next_value_of_tscc_proc_4_input_4_Stream_10;

              {
                Var_55 = (MR_Word) MR_mkword(2, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(2, Var_55, 0) = ((MR_Box) (N_104));
              }
              {
                Var_53 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(3, Var_53, 0) = ((MR_Box) ((MR_Unsigned) 1U));
                MR_hl_field(3, Var_53, 1) = ((MR_Box) (Var_55));
              }
              // direct tailcall eliminated
              ;
              next_value_of_tscc_proc_4_input_1_Info_7 = Info_6;
              next_value_of_tscc_proc_4_input_2_Type_8 = EnumType_12;
              next_value_of_tscc_proc_4_input_3_Expr_9 = Var_53;
              next_value_of_tscc_proc_4_input_4_Stream_10 = Stream_7;
              tscc_proc_4_input_1_Info_7 = next_value_of_tscc_proc_4_input_1_Info_7;
              tscc_proc_4_input_2_Type_8 = next_value_of_tscc_proc_4_input_2_Type_8;
              tscc_proc_4_input_3_Expr_9 = next_value_of_tscc_proc_4_input_3_Expr_9;
              tscc_proc_4_input_4_Stream_10 = next_value_of_tscc_proc_4_input_4_Stream_10;
              goto top_of_proc_4;
            }
            break;
          case (MR_Integer) 10:
            {
              MR_Integer C_11 = ((MR_Integer) ((MR_hl_field(3, Const_8, (MR_Integer) 1))));

              mercury__io__write_string_4_p_0(Stream_7, (MR_String) "( ");
              ml_backend__mlds_to_cs_data__output_int_const_for_csharp_4_p_0(Stream_7, C_11);
              mercury__io__write_string_4_p_0(Stream_7, (MR_String) ")");
            }
            break;
          case (MR_Integer) 11:
            {
              MR_Float FloatVal_16 = MR_unbox_float((MR_hl_field(3, Const_8, (MR_Integer) 1)));

              backend_libs__c_util__output_float_literal_4_p_0(Stream_7, FloatVal_16);
            }
            break;
          case (MR_Integer) 12:
            {
              MR_String String_17 = ((MR_String) ((MR_hl_field(3, Const_8, (MR_Integer) 1))));

              backend_libs__c_util__output_quoted_string_csharp_4_p_0(Stream_7, String_17);
            }
            break;
          case (MR_Integer) 13:
            {
              MR_Word String_105 = ((MR_Word) ((MR_hl_field(3, Const_8, (MR_Integer) 1))));

              backend_libs__c_util__output_quoted_multi_string_csharp_4_p_0(Stream_7, String_105);
            }
            break;
          case (MR_Integer) 14:
            {
              MR_Word Lang_13 = ((MR_Unsigned) ((MR_hl_field(3, Const_8, (MR_Integer) 1))) & (MR_Integer) 3);
              MR_String Value_14 = ((MR_String) ((MR_hl_field(3, Const_8, (MR_Integer) 2))));
              MR_Word Type_15 = ((MR_Word) ((MR_hl_field(3, Const_8, (MR_Integer) 3))));
              MR_Word Var_56;
              MR_String Var_64;

              {
                Var_56 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
                MR_hl_field(0, Var_56, 0) = ((MR_Box) (&ml_backend__mlds_to_cs_data_scalar_common_3[0]));
                MR_hl_field(0, Var_56, 1) = ((MR_Box) (ml_backend__mlds_to_cs_data__output_rval_const_for_csharp_5_p_0_1));
                MR_hl_field(0, Var_56, 2) = ((MR_Box) ((MR_Integer) 2));
                MR_hl_field(0, Var_56, 3) = ((MR_Box) (Lang_13));
                MR_hl_field(0, Var_56, 4) = ((MR_Box) ((MR_Integer) 1));
              }
              mercury__require__expect_3_p_0(Var_56, (MR_String) "predicate \140ml_backend.mlds_to_cs_data.output_rval_const_for_csharp\'/5", (MR_String) "language other than C#.");
              Var_64 = ml_backend__mlds_to_cs_type__type_to_string_for_csharp_2_f_0(Info_6, Type_15);
              mercury__io__write_string_4_p_0(Stream_7, (MR_String) "(");
              mercury__io__write_string_4_p_0(Stream_7, Var_64);
              mercury__io__write_string_4_p_0(Stream_7, (MR_String) ") ");
              mercury__io__write_string_4_p_0(Stream_7, Value_14);
            }
            break;
          case (MR_Integer) 15:
            {
              MR_Word TargetPrefixes_18 = ((MR_Word) ((MR_hl_field(3, Const_8, (MR_Integer) 1))));
              MR_String NamedConst_19 = ((MR_String) ((MR_hl_field(3, Const_8, (MR_Integer) 2))));
              MR_String Var_70 = ((MR_String) ((MR_hl_field(0, TargetPrefixes_18, (MR_Integer) 1))));

              mercury__io__write_string_4_p_0(Stream_7, Var_70);
              mercury__io__write_string_4_p_0(Stream_7, NamedConst_19);
            }
            break;
          case (MR_Integer) 16:
            {
              MR_Word VarName_22 = ((MR_Word) ((MR_hl_field(3, Const_8, (MR_Integer) 1))));
              MR_String VarNameStr_23;

              VarNameStr_23 = ml_backend__mlds_to_cs_name__local_var_name_to_ll_string_for_csharp_1_f_0(VarName_22);
              mercury__io__write_string_4_p_0(Stream_7, VarNameStr_23);
            }
            break;
          case (MR_Integer) 17:
            {
              MR_Word ModuleName_24 = ((MR_Word) ((MR_hl_field(3, Const_8, (MR_Integer) 1))));
              MR_String MangledModuleName_25;
              MR_Word Var_76;
              MR_Word VarName_106 = ((MR_Word) ((MR_hl_field(3, Const_8, (MR_Integer) 2))));
              MR_String VarNameStr_107;

              Var_76 = ml_backend__mlds__mlds_module_name_to_sym_name_1_f_0(ModuleName_24);
              MangledModuleName_25 = ml_backend__mlds_to_cs_name__strip_mercury_and_mangle_sym_name_for_csharp_1_f_0(Var_76);
              VarNameStr_107 = ml_backend__mlds_to_cs_name__global_var_name_to_ll_string_for_csharp_1_f_0(VarName_106);
              mercury__io__write_string_4_p_0(Stream_7, MangledModuleName_25);
              mercury__io__write_string_4_p_0(Stream_7, (MR_String) ".");
              mercury__io__write_string_4_p_0(Stream_7, VarNameStr_107);
            }
            break;
          case (MR_Integer) 18:
            {
              MR_Word RttiId_26 = ((MR_Word) ((MR_hl_field(3, Const_8, (MR_Integer) 2))));
              MR_String RttiAddrName0_27;
              MR_String RttiAddrName_28;
              MR_Word Var_84;
              MR_Word ModuleName_108 = ((MR_Word) ((MR_hl_field(3, Const_8, (MR_Integer) 1))));
              MR_String MangledModuleName_109;

              Var_84 = ml_backend__mlds__mlds_module_name_to_sym_name_1_f_0(ModuleName_108);
              MangledModuleName_109 = ml_backend__mlds_to_cs_name__strip_mercury_and_mangle_sym_name_for_csharp_1_f_0(Var_84);
              backend_libs__rtti__id_to_c_identifier_2_p_0(RttiId_26, &RttiAddrName0_27);
              RttiAddrName_28 = ml_backend__mlds_to_cs_name__limit_identifier_length_1_f_0(RttiAddrName0_27);
              mercury__io__write_string_4_p_0(Stream_7, MangledModuleName_109);
              mercury__io__write_string_4_p_0(Stream_7, (MR_String) ".");
              mercury__io__write_string_4_p_0(Stream_7, RttiAddrName_28);
            }
            break;
          case (MR_Integer) 19:
            {
              mercury__require__unexpected_2_p_0((MR_String) "predicate \140ml_backend.mlds_to_cs_data.output_rval_const_for_csharp\'/5", (MR_String) "NYI: mlconst_data_addr_tabling");
              return;
            }
            break;
          case (MR_Integer) 20:
            {
              MR_String Initializer_31;
              MR_Word Type_110 = ((MR_Word) ((MR_hl_field(3, Const_8, (MR_Integer) 1))));

              Initializer_31 = ml_backend__mlds_to_cs_data__get_default_initializer_for_csharp_2_f_0(Info_6, Type_110);
              mercury__io__write_string_4_p_0(Stream_7, Initializer_31);
            }
            break;
        }
        break;
    }
    goto tscc_end;
  }
top_of_proc_6:;
  {
    MR_Word Info_7 = tscc_proc_6_input_1_Info_7;
    MR_Word Expr_9 = tscc_proc_6_input_2_Expr_9;
    MR_Word Stream_10 = tscc_proc_6_input_3_Stream_10;
    MR_Word next_value_of_tscc_proc_2_input_1_Info_6 = Info_7;
    MR_Word next_value_of_tscc_proc_2_input_2_Rval_7 = Expr_9;
    MR_Word next_value_of_tscc_proc_2_input_3_Stream_8 = Stream_10;

    // direct tailcall eliminated
    ;
    tscc_proc_2_input_1_Info_6 = next_value_of_tscc_proc_2_input_1_Info_6;
    tscc_proc_2_input_2_Rval_7 = next_value_of_tscc_proc_2_input_2_Rval_7;
    tscc_proc_2_input_3_Stream_8 = next_value_of_tscc_proc_2_input_3_Stream_8;
    goto top_of_proc_2;
    goto tscc_end;
  }
tscc_end:;
  return;
}

static void MR_CALL 
ml_backend__mlds_to_cs_data__output_bracketed_rval_for_csharp_5_p_0(
  MR_Word tscc_proc_3_input_1_Info_6,
  MR_Word tscc_proc_3_input_2_Rval_7,
  MR_Word tscc_proc_3_input_3_Stream_8)
{
  MR_Word tscc_proc_1_input_1_Info_6;
  MR_Word tscc_proc_1_input_2_Lval_7;
  MR_Word tscc_proc_1_input_3_Stream_8;
  MR_Word tscc_proc_2_input_1_Info_6;
  MR_Word tscc_proc_2_input_2_Rval_7;
  MR_Word tscc_proc_2_input_3_Stream_8;
  MR_Word tscc_proc_4_input_1_Info_7;
  MR_Word tscc_proc_4_input_2_Type_8;
  MR_Word tscc_proc_4_input_3_Expr_9;
  MR_Word tscc_proc_4_input_4_Stream_10;
  MR_Word tscc_proc_5_input_1_Info_6;
  MR_Word tscc_proc_5_input_2_Stream_7;
  MR_Word tscc_proc_5_input_3_Const_8;
  MR_Word tscc_proc_6_input_1_Info_7;
  MR_Word tscc_proc_6_input_2_Expr_9;
  MR_Word tscc_proc_6_input_3_Stream_10;

  // The code for TSCC PROC 3: pred ml_backend.mlds_to_cs_data.output_bracketed_rval_for_csharp/5-0.
  ;
  // Setup for mutual tailcalls optimized into a loop.
  ;
  // The mutually recursive procedures are:
  ;
  ;
  // proc 1 in TSCC: pred ml_backend.mlds_to_cs_data.output_lval_for_csharp/5-0
  ;
  // proc 2 in TSCC: pred ml_backend.mlds_to_cs_data.output_rval_for_csharp/5-0
  ;
  // proc 3 in TSCC: pred ml_backend.mlds_to_cs_data.output_bracketed_rval_for_csharp/5-0
  ;
  // proc 4 in TSCC: pred ml_backend.mlds_to_cs_data.output_cast_rval_for_csharp/6-0
  ;
  // proc 5 in TSCC: pred ml_backend.mlds_to_cs_data.output_rval_const_for_csharp/5-0
  ;
  // proc 6 in TSCC: pred ml_backend.mlds_to_cs_data.UnusedArgs__pred__output_boxed_rval_for_csharp__[2]_0/6-0
  ;
  ;
  goto top_of_proc_3;
top_of_proc_1:;
  {
    MR_Word Info_6 = tscc_proc_1_input_1_Info_6;
    MR_Word Lval_7 = tscc_proc_1_input_2_Lval_7;
    MR_Word Stream_8 = tscc_proc_1_input_3_Stream_8;
    MR_bool succeeded;

    switch (MR_tag((MR_Word) Lval_7)) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        {
          MR_Word PtrRval_11 = ((MR_Word) ((MR_hl_field(0, Lval_7, (MR_Integer) 1))));
          MR_Word FieldId_13 = ((MR_Word) ((MR_hl_field(0, Lval_7, (MR_Integer) 3))));
          MR_Word FieldType_14 = ((MR_Word) ((MR_hl_field(0, Lval_7, (MR_Integer) 4))));

          if (((MR_tag((MR_Word) FieldId_13)) == (MR_Integer) 1))
          {
            MR_Word QualFieldVarName_19 = ((MR_Word) ((MR_hl_field(1, FieldId_13, (MR_Integer) 0))));
            MR_Word CtorType_20 = ((MR_Word) ((MR_hl_field(1, FieldId_13, (MR_Integer) 1))));
            MR_Word FieldVarName_23 = ((MR_Word) ((MR_hl_field(0, QualFieldVarName_19, (MR_Integer) 2))));
            MR_String FieldVarNameStr_24;

            FieldVarNameStr_24 = ml_backend__mlds_to_cs_name__field_var_name_to_ll_string_for_csharp_1_f_0(FieldVarName_23);
            succeeded = (FieldVarName_23 == (MR_Word) ((MR_Unsigned) 4U));
            if (succeeded)
            {
              if (((MR_tag((MR_Word) PtrRval_11)) == (MR_Integer) 2))
              {
                MR_Word Var_103 = ((MR_Word) ((MR_hl_field(2, PtrRval_11, (MR_Integer) 0))));

                if (((((MR_tag((MR_Word) Var_103)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(3, Var_103, (MR_Integer) 0)))) == (MR_Integer) 1))))
                  succeeded = MR_TRUE;
                else
                if (((((MR_tag((MR_Word) Var_103)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(3, Var_103, (MR_Integer) 0)))) == (MR_Integer) 0))))
                  succeeded = MR_TRUE;
                else
                  succeeded = MR_FALSE;
              }
              else
              if (((((MR_tag((MR_Word) PtrRval_11)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(3, PtrRval_11, (MR_Integer) 0)))) == (MR_Integer) 1))))
              {
                MR_Word Var_98 = ((MR_Word) ((MR_hl_field(3, PtrRval_11, (MR_Integer) 1))));

                succeeded = ((MR_tag((MR_Word) Var_98)) == (MR_Integer) 1);
                if (succeeded)
                {
                }
              }
              else
                succeeded = MR_FALSE;
              if (succeeded)
                ml_backend__mlds_to_cs_data__output_rval_for_csharp_5_p_0(Info_6, PtrRval_11, Stream_8);
              else
              {
                mercury__io__write_char_4_p_0(Stream_8, (MR_Char) 40);
                ml_backend__mlds_to_cs_data__output_rval_for_csharp_5_p_0(Info_6, PtrRval_11, Stream_8);
                mercury__io__write_char_4_p_0(Stream_8, (MR_Char) 41);
              }
              mercury__io__write_string_4_p_0(Stream_8, (MR_String) ".");
              mercury__io__write_string_4_p_0(Stream_8, FieldVarNameStr_24);
            }
            else
            {
              succeeded = ((((MR_tag((MR_Word) PtrRval_11)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(3, PtrRval_11, (MR_Integer) 0)))) == (MR_Integer) 9)));
              if (succeeded)
              {
                ml_backend__mlds_to_cs_data__output_rval_for_csharp_5_p_0(Info_6, PtrRval_11, Stream_8);
                mercury__io__write_string_4_p_0(Stream_8, (MR_String) ".");
                mercury__io__write_string_4_p_0(Stream_8, FieldVarNameStr_24);
              }
              else
              {
                MR_String Var_65;

                Var_65 = ml_backend__mlds_to_cs_type__type_to_string_for_csharp_2_f_0(Info_6, CtorType_20);
                mercury__io__write_string_4_p_0(Stream_8, (MR_String) "((");
                mercury__io__write_string_4_p_0(Stream_8, Var_65);
                mercury__io__write_string_4_p_0(Stream_8, (MR_String) ") ");
                ml_backend__mlds_to_cs_data__output_bracketed_rval_for_csharp_5_p_0(Info_6, PtrRval_11, Stream_8);
                mercury__io__write_string_4_p_0(Stream_8, (MR_String) ").");
                mercury__io__write_string_4_p_0(Stream_8, FieldVarNameStr_24);
              }
            }
          }
          else
          {
            MR_Word OffsetRval_15 = ((MR_Word) ((MR_hl_field(0, FieldId_13, (MR_Integer) 0))));

            if ((FieldType_14 == (MR_Word) ((MR_Unsigned) 20U)))
              succeeded = MR_TRUE;
            else
            if (((((MR_tag((MR_Word) FieldType_14)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(3, FieldType_14, (MR_Integer) 0)))) == (MR_Integer) 3))))
            {
              MR_Word Var_38 = ((MR_Word) ((MR_hl_field(3, FieldType_14, (MR_Integer) 1))));

              succeeded = ((MR_tag((MR_Word) Var_38)) == (MR_Integer) 0);
              if (succeeded)
              {
              }
            }
            else
              succeeded = MR_FALSE;
            if (!(succeeded))
              {
                mercury__require__unexpected_2_p_0((MR_String) "predicate \140ml_backend.mlds_to_cs_data.output_lval_for_csharp\'/5", (MR_String) "unexpected field type");
                return;
              }
            mercury__io__write_string_4_p_0(Stream_8, (MR_String) "((object[]) ");
            ml_backend__mlds_to_cs_data__output_rval_for_csharp_5_p_0(Info_6, PtrRval_11, Stream_8);
            mercury__io__write_string_4_p_0(Stream_8, (MR_String) ")[");
            ml_backend__mlds_to_cs_data__output_rval_for_csharp_5_p_0(Info_6, OffsetRval_15, Stream_8);
            mercury__io__write_string_4_p_0(Stream_8, (MR_String) "]");
          }
        }
        break;
      case (MR_Integer) 1:
        {
          MR_Word Rval_26 = ((MR_Word) ((MR_hl_field(1, Lval_7, (MR_Integer) 0))));
          MR_Word next_value_of_tscc_proc_3_input_1_Info_6 = Info_6;
          MR_Word next_value_of_tscc_proc_3_input_2_Rval_7 = Rval_26;
          MR_Word next_value_of_tscc_proc_3_input_3_Stream_8 = Stream_8;

          // direct tailcall eliminated
          ;
          tscc_proc_3_input_1_Info_6 = next_value_of_tscc_proc_3_input_1_Info_6;
          tscc_proc_3_input_2_Rval_7 = next_value_of_tscc_proc_3_input_2_Rval_7;
          tscc_proc_3_input_3_Stream_8 = next_value_of_tscc_proc_3_input_3_Stream_8;
          goto top_of_proc_3;
        }
        break;
      case (MR_Integer) 2:
        {
          MR_Word GlobalVarRef_28 = ((MR_Word) ((MR_hl_field(2, Lval_7, (MR_Integer) 0))));
          MR_String EnvVarName_29 = (MR_String) (GlobalVarRef_28);

          mercury__io__write_string_4_p_0(Stream_8, (MR_String) "mercury_envvar_");
          mercury__io__write_string_4_p_0(Stream_8, EnvVarName_29);
        }
        break;
      case (MR_Integer) 3:
        switch (((MR_Integer) ((MR_hl_field(3, Lval_7, (MR_Integer) 0))))) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
            {
              MR_Word LocalVarName_30 = ((MR_Word) ((MR_hl_field(3, Lval_7, (MR_Integer) 1))));
              MR_String LocalVarNameStr_32;

              LocalVarNameStr_32 = ml_backend__mlds_to_cs_name__local_var_name_to_ll_string_for_csharp_1_f_0(LocalVarName_30);
              mercury__io__write_string_4_p_0(Stream_8, LocalVarNameStr_32);
            }
            break;
          case (MR_Integer) 1:
            {
              MR_Word GlobalVarName_33 = ((MR_Word) ((MR_hl_field(3, Lval_7, (MR_Integer) 1))));
              MR_String GlobalVarNameStr_35;

              GlobalVarNameStr_35 = ml_backend__mlds_to_cs_name__maybe_qualified_global_var_name_to_string_for_csharp_2_f_0(Info_6, GlobalVarName_33);
              mercury__io__write_string_4_p_0(Stream_8, GlobalVarNameStr_35);
            }
            break;
        }
        break;
    }
    goto tscc_end;
  }
top_of_proc_2:;
  {
    MR_Word Info_6 = tscc_proc_2_input_1_Info_6;
    MR_Word Rval_7 = tscc_proc_2_input_2_Rval_7;
    MR_Word Stream_8 = tscc_proc_2_input_3_Stream_8;
    MR_bool succeeded;

    switch (MR_tag((MR_Word) Rval_7)) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        {
          mercury__require__unexpected_2_p_0((MR_String) "predicate \140ml_backend.mlds_to_cs_data.output_rval_for_csharp\'/5", (MR_String) "ml_scalar_common");
          return;
        }
        break;
      case (MR_Integer) 1:
        {
          MR_Word ScalarCommon_22 = (MR_Word) (MR_body((MR_Word) (Rval_7), (MR_Integer) 1));
          MR_Word ModuleName_23 = ((MR_Word) ((MR_hl_field(0, ScalarCommon_22, (MR_Integer) 0))));
          MR_Integer TypeNum_25;
          MR_Integer RowNum_26 = ((MR_Integer) ((MR_hl_field(0, ScalarCommon_22, (MR_Integer) 3))));
          MR_Word ModuleSymName_27;
          MR_String MangledModuleName_28;
          MR_Word Var_57 = ((MR_Word) ((MR_hl_field(0, ScalarCommon_22, (MR_Integer) 2))));
          MR_String Var_115;
          MR_String Var_125;

          TypeNum_25 = (MR_Integer) (Var_57);
          ModuleSymName_27 = ml_backend__mlds__mlds_module_name_to_sym_name_1_f_0(ModuleName_23);
          MangledModuleName_28 = ml_backend__mlds_to_cs_name__strip_mercury_and_mangle_sym_name_for_csharp_1_f_0(ModuleSymName_27);
          mercury__io__write_string_4_p_0(Stream_8, MangledModuleName_28);
          mercury__io__write_string_4_p_0(Stream_8, (MR_String) ".MR_scalar_common_");
          mercury__string__format__format_signed_int_component_nowidth_noprec_3_p_0((MR_Word) (&ml_backend__mlds_to_cs_data_scalar_common_1[0]), TypeNum_25, &Var_115);
          mercury__io__write_string_4_p_0(Stream_8, Var_115);
          mercury__io__write_string_4_p_0(Stream_8, (MR_String) "[");
          mercury__string__format__format_signed_int_component_nowidth_noprec_3_p_0((MR_Word) (&ml_backend__mlds_to_cs_data_scalar_common_1[0]), RowNum_26, &Var_125);
          mercury__io__write_string_4_p_0(Stream_8, Var_125);
          mercury__io__write_string_4_p_0(Stream_8, (MR_String) "]");
        }
        break;
      case (MR_Integer) 2:
        {
          MR_Word Lval_10 = ((MR_Word) ((MR_hl_field(2, Rval_7, (MR_Integer) 0))));
          MR_Word next_value_of_tscc_proc_1_input_1_Info_6 = Info_6;
          MR_Word next_value_of_tscc_proc_1_input_2_Lval_7 = Lval_10;
          MR_Word next_value_of_tscc_proc_1_input_3_Stream_8 = Stream_8;

          // direct tailcall eliminated
          ;
          tscc_proc_1_input_1_Info_6 = next_value_of_tscc_proc_1_input_1_Info_6;
          tscc_proc_1_input_2_Lval_7 = next_value_of_tscc_proc_1_input_2_Lval_7;
          tscc_proc_1_input_3_Stream_8 = next_value_of_tscc_proc_1_input_3_Stream_8;
          goto top_of_proc_1;
        }
        break;
      case (MR_Integer) 3:
        switch (((MR_Integer) ((MR_hl_field(3, Rval_7, (MR_Integer) 0))))) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
            {
              mercury__require__unexpected_2_p_0((MR_String) "predicate \140ml_backend.mlds_to_cs_data.output_rval_for_csharp\'/5", (MR_String) "tags not supported in C#");
              return;
            }
            break;
          case (MR_Integer) 1:
            {
              MR_Word Const_13 = ((MR_Word) ((MR_hl_field(3, Rval_7, (MR_Integer) 1))));
              MR_Word next_value_of_tscc_proc_5_input_1_Info_6 = Info_6;
              MR_Word next_value_of_tscc_proc_5_input_2_Stream_7 = Stream_8;
              MR_Word next_value_of_tscc_proc_5_input_3_Const_8 = Const_13;

              // direct tailcall eliminated
              ;
              tscc_proc_5_input_1_Info_6 = next_value_of_tscc_proc_5_input_1_Info_6;
              tscc_proc_5_input_2_Stream_7 = next_value_of_tscc_proc_5_input_2_Stream_7;
              tscc_proc_5_input_3_Const_8 = next_value_of_tscc_proc_5_input_3_Const_8;
              goto top_of_proc_5;
            }
            break;
          case (MR_Integer) 2:
            {
              MR_Word Type_80 = ((MR_Word) ((MR_hl_field(3, Rval_7, (MR_Integer) 1))));
              MR_Word SubRval_81 = ((MR_Word) ((MR_hl_field(3, Rval_7, (MR_Integer) 2))));
              MR_Word Var_42;
              MR_Word Var_89;

              succeeded = ((((MR_tag((MR_Word) Type_80)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(3, Type_80, (MR_Integer) 0)))) == (MR_Integer) 3)));
              if (succeeded)
              {
                Var_42 = ((MR_Word) ((MR_hl_field(3, Type_80, (MR_Integer) 1))));
                Var_89 = parse_tree__builtin_lib_types__comparison_result_type_0_f_0();
                succeeded = parse_tree__prog_data____Unify____mer_type_0_0(Var_42, Var_89);
              }
              if (succeeded)
              {
                mercury__io__write_string_4_p_0(Stream_8, (MR_String) "builtin.comparison_result_object[(int) ");
                ml_backend__mlds_to_cs_data__output_rval_for_csharp_5_p_0(Info_6, SubRval_81, Stream_8);
                mercury__io__write_string_4_p_0(Stream_8, (MR_String) "]");
              }
              else
              {
                MR_Word next_value_of_tscc_proc_6_input_1_Info_7 = Info_6;
                MR_Word next_value_of_tscc_proc_6_input_2_Expr_9 = SubRval_81;
                MR_Word next_value_of_tscc_proc_6_input_3_Stream_10 = Stream_8;

                // direct tailcall eliminated
                ;
                tscc_proc_6_input_1_Info_7 = next_value_of_tscc_proc_6_input_1_Info_7;
                tscc_proc_6_input_2_Expr_9 = next_value_of_tscc_proc_6_input_2_Expr_9;
                tscc_proc_6_input_3_Stream_10 = next_value_of_tscc_proc_6_input_3_Stream_10;
                goto top_of_proc_6;
              }
            }
            break;
          case (MR_Integer) 3:
            {
              MR_Word Type_82 = ((MR_Word) ((MR_hl_field(3, Rval_7, (MR_Integer) 1))));
              MR_Word SubRval_83 = ((MR_Word) ((MR_hl_field(3, Rval_7, (MR_Integer) 2))));

              ml_backend__mlds_to_cs_data__output_unboxed_rval_for_csharp_6_p_0(Info_6, Type_82, SubRval_83, Stream_8);
            }
            break;
          case (MR_Integer) 4:
            {
              MR_Word Type_14 = ((MR_Word) ((MR_hl_field(3, Rval_7, (MR_Integer) 1))));
              MR_Word SubRval_15 = ((MR_Word) ((MR_hl_field(3, Rval_7, (MR_Integer) 2))));
              MR_Word next_value_of_tscc_proc_4_input_1_Info_7 = Info_6;
              MR_Word next_value_of_tscc_proc_4_input_2_Type_8 = Type_14;
              MR_Word next_value_of_tscc_proc_4_input_3_Expr_9 = SubRval_15;
              MR_Word next_value_of_tscc_proc_4_input_4_Stream_10 = Stream_8;

              // direct tailcall eliminated
              ;
              tscc_proc_4_input_1_Info_7 = next_value_of_tscc_proc_4_input_1_Info_7;
              tscc_proc_4_input_2_Type_8 = next_value_of_tscc_proc_4_input_2_Type_8;
              tscc_proc_4_input_3_Expr_9 = next_value_of_tscc_proc_4_input_3_Expr_9;
              tscc_proc_4_input_4_Stream_10 = next_value_of_tscc_proc_4_input_4_Stream_10;
              goto top_of_proc_4;
            }
            break;
          case (MR_Integer) 5:
            {
              MR_Word Unop_17 = ((MR_Word) ((MR_hl_field(3, Rval_7, (MR_Integer) 1))));
              MR_Word SubRval_84 = ((MR_Word) ((MR_hl_field(3, Rval_7, (MR_Integer) 2))));

              ml_backend__mlds_to_cs_data__output_unop_for_csharp_6_p_0(Info_6, Stream_8, Unop_17, SubRval_84);
            }
            break;
          case (MR_Integer) 6:
            {
              MR_Word Op_18 = ((MR_Word) ((MR_hl_field(3, Rval_7, (MR_Integer) 1))));
              MR_Word SubRvalA_19 = ((MR_Word) ((MR_hl_field(3, Rval_7, (MR_Integer) 2))));
              MR_Word SubRvalB_20 = ((MR_Word) ((MR_hl_field(3, Rval_7, (MR_Integer) 3))));

              ml_backend__mlds_to_cs_data__output_binop_for_csharp_7_p_0(Info_6, Stream_8, Op_18, SubRvalA_19, SubRvalB_20);
            }
            break;
          case (MR_Integer) 7:
            {
              MR_Word Lval_85 = ((MR_Word) ((MR_hl_field(3, Rval_7, (MR_Integer) 1))));
              MR_Word next_value_of_tscc_proc_1_input_1_Info_6;
              MR_Word next_value_of_tscc_proc_1_input_2_Lval_7;
              MR_Word next_value_of_tscc_proc_1_input_3_Stream_8;

              mercury__io__write_string_4_p_0(Stream_8, (MR_String) "out ");
              // direct tailcall eliminated
              ;
              next_value_of_tscc_proc_1_input_1_Info_6 = Info_6;
              next_value_of_tscc_proc_1_input_2_Lval_7 = Lval_85;
              next_value_of_tscc_proc_1_input_3_Stream_8 = Stream_8;
              tscc_proc_1_input_1_Info_6 = next_value_of_tscc_proc_1_input_1_Info_6;
              tscc_proc_1_input_2_Lval_7 = next_value_of_tscc_proc_1_input_2_Lval_7;
              tscc_proc_1_input_3_Stream_8 = next_value_of_tscc_proc_1_input_3_Stream_8;
              goto top_of_proc_1;
            }
            break;
          case (MR_Integer) 8:
            {
              MR_Word VectorCommon_29 = ((MR_Word) ((MR_hl_field(3, Rval_7, (MR_Integer) 1))));
              MR_Word RowRval_30 = ((MR_Word) ((MR_hl_field(3, Rval_7, (MR_Integer) 2))));
              MR_Integer StartRowNum_32 = ((MR_Integer) ((MR_hl_field(0, VectorCommon_29, (MR_Integer) 3))));
              MR_Word Var_67 = ((MR_Word) ((MR_hl_field(0, VectorCommon_29, (MR_Integer) 2))));
              MR_Integer TypeNum_88 = (MR_Integer) (Var_67);
              MR_String Var_93;
              MR_String Var_103;

              mercury__io__write_string_4_p_0(Stream_8, (MR_String) "MR_vector_common_");
              mercury__string__format__format_signed_int_component_nowidth_noprec_3_p_0((MR_Word) (&ml_backend__mlds_to_cs_data_scalar_common_1[0]), TypeNum_88, &Var_93);
              mercury__io__write_string_4_p_0(Stream_8, Var_93);
              mercury__io__write_string_4_p_0(Stream_8, (MR_String) "[");
              mercury__string__format__format_signed_int_component_nowidth_noprec_3_p_0((MR_Word) (&ml_backend__mlds_to_cs_data_scalar_common_1[0]), StartRowNum_32, &Var_103);
              mercury__io__write_string_4_p_0(Stream_8, Var_103);
              mercury__io__write_string_4_p_0(Stream_8, (MR_String) " + ");
              ml_backend__mlds_to_cs_data__output_rval_for_csharp_5_p_0(Info_6, RowRval_30, Stream_8);
              mercury__io__write_string_4_p_0(Stream_8, (MR_String) "]");
            }
            break;
          case (MR_Integer) 9:
            mercury__io__write_string_4_p_0(Stream_8, (MR_String) "this");
            break;
        }
        break;
    }
    goto tscc_end;
  }
top_of_proc_3:;
  {
    MR_Word Info_6 = tscc_proc_3_input_1_Info_6;
    MR_Word Rval_7 = tscc_proc_3_input_2_Rval_7;
    MR_Word Stream_8 = tscc_proc_3_input_3_Stream_8;
    MR_bool succeeded;

    if (((MR_tag((MR_Word) Rval_7)) == (MR_Integer) 2))
    {
      MR_Word Var_25 = ((MR_Word) ((MR_hl_field(2, Rval_7, (MR_Integer) 0))));

      if (((((MR_tag((MR_Word) Var_25)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(3, Var_25, (MR_Integer) 0)))) == (MR_Integer) 1))))
        succeeded = MR_TRUE;
      else
      if (((((MR_tag((MR_Word) Var_25)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(3, Var_25, (MR_Integer) 0)))) == (MR_Integer) 0))))
        succeeded = MR_TRUE;
      else
        succeeded = MR_FALSE;
    }
    else
    if (((((MR_tag((MR_Word) Rval_7)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(3, Rval_7, (MR_Integer) 0)))) == (MR_Integer) 1))))
    {
      MR_Word Var_19 = ((MR_Word) ((MR_hl_field(3, Rval_7, (MR_Integer) 1))));

      succeeded = ((MR_tag((MR_Word) Var_19)) == (MR_Integer) 1);
      if (succeeded)
      {
      }
    }
    else
      succeeded = MR_FALSE;
    if (succeeded)
    {
      MR_Word next_value_of_tscc_proc_2_input_1_Info_6 = Info_6;
      MR_Word next_value_of_tscc_proc_2_input_2_Rval_7 = Rval_7;
      MR_Word next_value_of_tscc_proc_2_input_3_Stream_8 = Stream_8;

      // direct tailcall eliminated
      ;
      tscc_proc_2_input_1_Info_6 = next_value_of_tscc_proc_2_input_1_Info_6;
      tscc_proc_2_input_2_Rval_7 = next_value_of_tscc_proc_2_input_2_Rval_7;
      tscc_proc_2_input_3_Stream_8 = next_value_of_tscc_proc_2_input_3_Stream_8;
      goto top_of_proc_2;
    }
    else
    {
      mercury__io__write_char_4_p_0(Stream_8, (MR_Char) 40);
      ml_backend__mlds_to_cs_data__output_rval_for_csharp_5_p_0(Info_6, Rval_7, Stream_8);
      mercury__io__write_char_4_p_0(Stream_8, (MR_Char) 41);
    }
    goto tscc_end;
  }
top_of_proc_4:;
  {
    MR_Word Info_7 = tscc_proc_4_input_1_Info_7;
    MR_Word Type_8 = tscc_proc_4_input_2_Type_8;
    MR_Word Expr_9 = tscc_proc_4_input_3_Expr_9;
    MR_Word Stream_10 = tscc_proc_4_input_4_Stream_10;
    MR_bool succeeded = (Type_8 == (MR_Word) ((MR_Unsigned) 32U));
    MR_Integer N_12;
    MR_Word Var_16;

    if (succeeded)
    {
      succeeded = ((((MR_tag((MR_Word) Expr_9)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(3, Expr_9, (MR_Integer) 0)))) == (MR_Integer) 1)));
      if (succeeded)
      {
        Var_16 = ((MR_Word) ((MR_hl_field(3, Expr_9, (MR_Integer) 1))));
        succeeded = ((MR_tag((MR_Word) Var_16)) == (MR_Integer) 2);
        if (succeeded)
          N_12 = ((MR_Integer) ((MR_hl_field(2, Var_16, (MR_Integer) 0))));
      }
    }
    if (succeeded)
    {
      MR_Integer Var_47;

      ml_backend__mlds_to_cs_util__maybe_output_inline_comment_for_csharp_5_p_0(Info_7, Stream_10, (MR_String) "cast");
      succeeded = (N_12 >= (MR_Integer) 1);
      if (succeeded)
      {
        Var_47 = (MR_Integer) 5;
        succeeded = (N_12 <= Var_47);
      }
      if (succeeded)
      {
        mercury__io__write_string_4_p_0(Stream_10, (MR_String) "runtime.PseudoTypeInfo.K");
        mercury__io__write_int_4_p_0(Stream_10, N_12);
      }
      else
      {
        mercury__io__write_string_4_p_0(Stream_10, (MR_String) "new runtime.PseudoTypeInfo(");
        ml_backend__mlds_to_cs_data__output_rval_for_csharp_5_p_0(Info_7, Expr_9, Stream_10);
        mercury__io__write_string_4_p_0(Stream_10, (MR_String) ")");
      }
    }
    else
    {
      if ((Type_8 == (MR_Word) ((MR_Unsigned) 28U)))
        succeeded = MR_TRUE;
      else
      if (((((MR_tag((MR_Word) Type_8)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(3, Type_8, (MR_Integer) 0)))) == (MR_Integer) 3))))
      {
        MR_Word Var_27 = ((MR_Word) ((MR_hl_field(3, Type_8, (MR_Integer) 2))));
        MR_Word Var_28;

        succeeded = ((((MR_tag((MR_Word) Var_27)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(3, Var_27, (MR_Integer) 0)))) == (MR_Integer) 0)));
        if (succeeded)
        {
          Var_28 = ((MR_Unsigned) ((MR_hl_field(3, Var_27, (MR_Integer) 1))) & (MR_Integer) 3);
          succeeded = (Var_28 == (MR_Integer) 0);
        }
      }
      else
        succeeded = MR_FALSE;
      if (succeeded)
      {
        ml_backend__mlds_to_cs_util__maybe_output_inline_comment_for_csharp_5_p_0(Info_7, Stream_10, (MR_String) "cast");
        mercury__io__write_string_4_p_0(Stream_10, (MR_String) "runtime.TypeInfo_Struct.maybe_new(");
        ml_backend__mlds_to_cs_data__output_rval_for_csharp_5_p_0(Info_7, Expr_9, Stream_10);
        mercury__io__write_string_4_p_0(Stream_10, (MR_String) ")");
      }
      else
      {
        MR_String Var_40;
        MR_Word next_value_of_tscc_proc_2_input_1_Info_6;
        MR_Word next_value_of_tscc_proc_2_input_2_Rval_7;
        MR_Word next_value_of_tscc_proc_2_input_3_Stream_8;

        Var_40 = ml_backend__mlds_to_cs_type__type_to_string_for_csharp_2_f_0(Info_7, Type_8);
        mercury__io__write_string_4_p_0(Stream_10, (MR_String) "(");
        mercury__io__write_string_4_p_0(Stream_10, Var_40);
        mercury__io__write_string_4_p_0(Stream_10, (MR_String) ") ");
        // direct tailcall eliminated
        ;
        next_value_of_tscc_proc_2_input_1_Info_6 = Info_7;
        next_value_of_tscc_proc_2_input_2_Rval_7 = Expr_9;
        next_value_of_tscc_proc_2_input_3_Stream_8 = Stream_10;
        tscc_proc_2_input_1_Info_6 = next_value_of_tscc_proc_2_input_1_Info_6;
        tscc_proc_2_input_2_Rval_7 = next_value_of_tscc_proc_2_input_2_Rval_7;
        tscc_proc_2_input_3_Stream_8 = next_value_of_tscc_proc_2_input_3_Stream_8;
        goto top_of_proc_2;
      }
    }
    goto tscc_end;
  }
top_of_proc_5:;
  {
    MR_Word Info_6 = tscc_proc_5_input_1_Info_6;
    MR_Word Stream_7 = tscc_proc_5_input_2_Stream_7;
    MR_Word Const_8 = tscc_proc_5_input_3_Const_8;
    MR_bool succeeded;

    switch (MR_tag((MR_Word) Const_8)) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        switch (MR_unmkbody(Const_8)) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
            mercury__io__write_string_4_p_0(Stream_7, (MR_String) "true");
            break;
          case (MR_Integer) 1:
            mercury__io__write_string_4_p_0(Stream_7, (MR_String) "false");
            break;
        }
        break;
      case (MR_Integer) 1:
        {
          MR_Word CodeAddr_20 = (MR_Word) (MR_body((MR_Word) (Const_8), (MR_Integer) 1));
          MR_String Name_21;
          MR_Word Var_73 = ((MR_Word) ((MR_hl_field(0, Info_6, (MR_Integer) 4))));
          MR_Box conv0_Name_21;

          mercury__map__lookup_3_p_0((MR_Word) (&ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_code_addr_0), (MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), Var_73, ((MR_Box) (CodeAddr_20)), &conv0_Name_21);
          Name_21 = ((MR_String) (conv0_Name_21));
          mercury__io__write_string_4_p_0(Stream_7, Name_21);
        }
        break;
      case (MR_Integer) 2:
        {
          MR_Integer N_10 = ((MR_Integer) ((MR_hl_field(2, Const_8, (MR_Integer) 0))));

          ml_backend__mlds_to_cs_data__output_int_const_for_csharp_4_p_0(Stream_7, N_10);
        }
        break;
      case (MR_Integer) 3:
        switch (((MR_Integer) ((MR_hl_field(3, Const_8, (MR_Integer) 0))))) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
            {
              MR_Unsigned N_95 = ((MR_Unsigned) ((MR_hl_field(3, Const_8, (MR_Integer) 1))));

              mercury__io__write_uint_4_p_0(Stream_7, N_95);
              mercury__io__write_string_4_p_0(Stream_7, (MR_String) "U");
            }
            break;
          case (MR_Integer) 1:
            {
              int8_t N_96 = ((int8_t) (MR_Word) (MR_hl_field(3, Const_8, (MR_Integer) 1)));

              mercury__io__write_string_4_p_0(Stream_7, (MR_String) "(sbyte) ");
              mercury__io__write_int8_4_p_0(Stream_7, N_96);
            }
            break;
          case (MR_Integer) 2:
            {
              uint8_t N_97 = ((uint8_t) (MR_Word) (MR_hl_field(3, Const_8, (MR_Integer) 1)));

              ml_backend__mlds_to_cs_data__output_uint8_const_for_csharp_4_p_0(Stream_7, N_97);
            }
            break;
          case (MR_Integer) 3:
            {
              int16_t N_98 = ((int16_t) (MR_Word) (MR_hl_field(3, Const_8, (MR_Integer) 1)));

              mercury__io__write_string_4_p_0(Stream_7, (MR_String) "(short) ");
              mercury__io__write_int16_4_p_0(Stream_7, N_98);
            }
            break;
          case (MR_Integer) 4:
            {
              uint16_t N_99 = ((uint16_t) (MR_Word) (MR_hl_field(3, Const_8, (MR_Integer) 1)));

              mercury__io__write_string_4_p_0(Stream_7, (MR_String) "(ushort) ");
              mercury__io__write_uint16_4_p_0(Stream_7, N_99);
            }
            break;
          case (MR_Integer) 5:
            {
              int32_t N_100 = ((int32_t) (MR_Word) (MR_hl_field(3, Const_8, (MR_Integer) 1)));

              mercury__io__write_int32_4_p_0(Stream_7, N_100);
            }
            break;
          case (MR_Integer) 6:
            {
              uint32_t N_101 = ((uint32_t) (MR_Word) (MR_hl_field(3, Const_8, (MR_Integer) 1)));

              mercury__io__write_uint32_4_p_0(Stream_7, N_101);
              mercury__io__write_string_4_p_0(Stream_7, (MR_String) "U");
            }
            break;
          case (MR_Integer) 7:
            {
              int64_t N_102 = MR_unbox_int64((MR_hl_field(3, Const_8, (MR_Integer) 1)));

              mercury__io__write_int64_4_p_0(Stream_7, N_102);
              mercury__io__write_string_4_p_0(Stream_7, (MR_String) "L");
            }
            break;
          case (MR_Integer) 8:
            {
              uint64_t N_103 = MR_unbox_uint64((MR_hl_field(3, Const_8, (MR_Integer) 1)));

              ml_backend__mlds_to_cs_data__output_uint64_const_for_csharp_4_p_0(Stream_7, N_103);
            }
            break;
          case (MR_Integer) 9:
            {
              MR_Word EnumType_12 = ((MR_Word) ((MR_hl_field(3, Const_8, (MR_Integer) 2))));
              MR_Word Var_53;
              MR_Word Var_55;
              MR_Integer N_104 = ((MR_Integer) ((MR_hl_field(3, Const_8, (MR_Integer) 1))));
              MR_Word next_value_of_tscc_proc_4_input_1_Info_7;
              MR_Word next_value_of_tscc_proc_4_input_2_Type_8;
              MR_Word next_value_of_tscc_proc_4_input_3_Expr_9;
              MR_Word next_value_of_tscc_proc_4_input_4_Stream_10;

              {
                Var_55 = (MR_Word) MR_mkword(2, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(2, Var_55, 0) = ((MR_Box) (N_104));
              }
              {
                Var_53 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(3, Var_53, 0) = ((MR_Box) ((MR_Unsigned) 1U));
                MR_hl_field(3, Var_53, 1) = ((MR_Box) (Var_55));
              }
              // direct tailcall eliminated
              ;
              next_value_of_tscc_proc_4_input_1_Info_7 = Info_6;
              next_value_of_tscc_proc_4_input_2_Type_8 = EnumType_12;
              next_value_of_tscc_proc_4_input_3_Expr_9 = Var_53;
              next_value_of_tscc_proc_4_input_4_Stream_10 = Stream_7;
              tscc_proc_4_input_1_Info_7 = next_value_of_tscc_proc_4_input_1_Info_7;
              tscc_proc_4_input_2_Type_8 = next_value_of_tscc_proc_4_input_2_Type_8;
              tscc_proc_4_input_3_Expr_9 = next_value_of_tscc_proc_4_input_3_Expr_9;
              tscc_proc_4_input_4_Stream_10 = next_value_of_tscc_proc_4_input_4_Stream_10;
              goto top_of_proc_4;
            }
            break;
          case (MR_Integer) 10:
            {
              MR_Integer C_11 = ((MR_Integer) ((MR_hl_field(3, Const_8, (MR_Integer) 1))));

              mercury__io__write_string_4_p_0(Stream_7, (MR_String) "( ");
              ml_backend__mlds_to_cs_data__output_int_const_for_csharp_4_p_0(Stream_7, C_11);
              mercury__io__write_string_4_p_0(Stream_7, (MR_String) ")");
            }
            break;
          case (MR_Integer) 11:
            {
              MR_Float FloatVal_16 = MR_unbox_float((MR_hl_field(3, Const_8, (MR_Integer) 1)));

              backend_libs__c_util__output_float_literal_4_p_0(Stream_7, FloatVal_16);
            }
            break;
          case (MR_Integer) 12:
            {
              MR_String String_17 = ((MR_String) ((MR_hl_field(3, Const_8, (MR_Integer) 1))));

              backend_libs__c_util__output_quoted_string_csharp_4_p_0(Stream_7, String_17);
            }
            break;
          case (MR_Integer) 13:
            {
              MR_Word String_105 = ((MR_Word) ((MR_hl_field(3, Const_8, (MR_Integer) 1))));

              backend_libs__c_util__output_quoted_multi_string_csharp_4_p_0(Stream_7, String_105);
            }
            break;
          case (MR_Integer) 14:
            {
              MR_Word Lang_13 = ((MR_Unsigned) ((MR_hl_field(3, Const_8, (MR_Integer) 1))) & (MR_Integer) 3);
              MR_String Value_14 = ((MR_String) ((MR_hl_field(3, Const_8, (MR_Integer) 2))));
              MR_Word Type_15 = ((MR_Word) ((MR_hl_field(3, Const_8, (MR_Integer) 3))));
              MR_Word Var_56;
              MR_String Var_64;

              {
                Var_56 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
                MR_hl_field(0, Var_56, 0) = ((MR_Box) (&ml_backend__mlds_to_cs_data_scalar_common_3[0]));
                MR_hl_field(0, Var_56, 1) = ((MR_Box) (ml_backend__mlds_to_cs_data__output_rval_const_for_csharp_5_p_0_1));
                MR_hl_field(0, Var_56, 2) = ((MR_Box) ((MR_Integer) 2));
                MR_hl_field(0, Var_56, 3) = ((MR_Box) (Lang_13));
                MR_hl_field(0, Var_56, 4) = ((MR_Box) ((MR_Integer) 1));
              }
              mercury__require__expect_3_p_0(Var_56, (MR_String) "predicate \140ml_backend.mlds_to_cs_data.output_rval_const_for_csharp\'/5", (MR_String) "language other than C#.");
              Var_64 = ml_backend__mlds_to_cs_type__type_to_string_for_csharp_2_f_0(Info_6, Type_15);
              mercury__io__write_string_4_p_0(Stream_7, (MR_String) "(");
              mercury__io__write_string_4_p_0(Stream_7, Var_64);
              mercury__io__write_string_4_p_0(Stream_7, (MR_String) ") ");
              mercury__io__write_string_4_p_0(Stream_7, Value_14);
            }
            break;
          case (MR_Integer) 15:
            {
              MR_Word TargetPrefixes_18 = ((MR_Word) ((MR_hl_field(3, Const_8, (MR_Integer) 1))));
              MR_String NamedConst_19 = ((MR_String) ((MR_hl_field(3, Const_8, (MR_Integer) 2))));
              MR_String Var_70 = ((MR_String) ((MR_hl_field(0, TargetPrefixes_18, (MR_Integer) 1))));

              mercury__io__write_string_4_p_0(Stream_7, Var_70);
              mercury__io__write_string_4_p_0(Stream_7, NamedConst_19);
            }
            break;
          case (MR_Integer) 16:
            {
              MR_Word VarName_22 = ((MR_Word) ((MR_hl_field(3, Const_8, (MR_Integer) 1))));
              MR_String VarNameStr_23;

              VarNameStr_23 = ml_backend__mlds_to_cs_name__local_var_name_to_ll_string_for_csharp_1_f_0(VarName_22);
              mercury__io__write_string_4_p_0(Stream_7, VarNameStr_23);
            }
            break;
          case (MR_Integer) 17:
            {
              MR_Word ModuleName_24 = ((MR_Word) ((MR_hl_field(3, Const_8, (MR_Integer) 1))));
              MR_String MangledModuleName_25;
              MR_Word Var_76;
              MR_Word VarName_106 = ((MR_Word) ((MR_hl_field(3, Const_8, (MR_Integer) 2))));
              MR_String VarNameStr_107;

              Var_76 = ml_backend__mlds__mlds_module_name_to_sym_name_1_f_0(ModuleName_24);
              MangledModuleName_25 = ml_backend__mlds_to_cs_name__strip_mercury_and_mangle_sym_name_for_csharp_1_f_0(Var_76);
              VarNameStr_107 = ml_backend__mlds_to_cs_name__global_var_name_to_ll_string_for_csharp_1_f_0(VarName_106);
              mercury__io__write_string_4_p_0(Stream_7, MangledModuleName_25);
              mercury__io__write_string_4_p_0(Stream_7, (MR_String) ".");
              mercury__io__write_string_4_p_0(Stream_7, VarNameStr_107);
            }
            break;
          case (MR_Integer) 18:
            {
              MR_Word RttiId_26 = ((MR_Word) ((MR_hl_field(3, Const_8, (MR_Integer) 2))));
              MR_String RttiAddrName0_27;
              MR_String RttiAddrName_28;
              MR_Word Var_84;
              MR_Word ModuleName_108 = ((MR_Word) ((MR_hl_field(3, Const_8, (MR_Integer) 1))));
              MR_String MangledModuleName_109;

              Var_84 = ml_backend__mlds__mlds_module_name_to_sym_name_1_f_0(ModuleName_108);
              MangledModuleName_109 = ml_backend__mlds_to_cs_name__strip_mercury_and_mangle_sym_name_for_csharp_1_f_0(Var_84);
              backend_libs__rtti__id_to_c_identifier_2_p_0(RttiId_26, &RttiAddrName0_27);
              RttiAddrName_28 = ml_backend__mlds_to_cs_name__limit_identifier_length_1_f_0(RttiAddrName0_27);
              mercury__io__write_string_4_p_0(Stream_7, MangledModuleName_109);
              mercury__io__write_string_4_p_0(Stream_7, (MR_String) ".");
              mercury__io__write_string_4_p_0(Stream_7, RttiAddrName_28);
            }
            break;
          case (MR_Integer) 19:
            {
              mercury__require__unexpected_2_p_0((MR_String) "predicate \140ml_backend.mlds_to_cs_data.output_rval_const_for_csharp\'/5", (MR_String) "NYI: mlconst_data_addr_tabling");
              return;
            }
            break;
          case (MR_Integer) 20:
            {
              MR_String Initializer_31;
              MR_Word Type_110 = ((MR_Word) ((MR_hl_field(3, Const_8, (MR_Integer) 1))));

              Initializer_31 = ml_backend__mlds_to_cs_data__get_default_initializer_for_csharp_2_f_0(Info_6, Type_110);
              mercury__io__write_string_4_p_0(Stream_7, Initializer_31);
            }
            break;
        }
        break;
    }
    goto tscc_end;
  }
top_of_proc_6:;
  {
    MR_Word Info_7 = tscc_proc_6_input_1_Info_7;
    MR_Word Expr_9 = tscc_proc_6_input_2_Expr_9;
    MR_Word Stream_10 = tscc_proc_6_input_3_Stream_10;
    MR_Word next_value_of_tscc_proc_2_input_1_Info_6 = Info_7;
    MR_Word next_value_of_tscc_proc_2_input_2_Rval_7 = Expr_9;
    MR_Word next_value_of_tscc_proc_2_input_3_Stream_8 = Stream_10;

    // direct tailcall eliminated
    ;
    tscc_proc_2_input_1_Info_6 = next_value_of_tscc_proc_2_input_1_Info_6;
    tscc_proc_2_input_2_Rval_7 = next_value_of_tscc_proc_2_input_2_Rval_7;
    tscc_proc_2_input_3_Stream_8 = next_value_of_tscc_proc_2_input_3_Stream_8;
    goto top_of_proc_2;
    goto tscc_end;
  }
tscc_end:;
  return;
}

static void MR_CALL 
ml_backend__mlds_to_cs_data__output_cast_rval_for_csharp_6_p_0(
  MR_Word tscc_proc_4_input_1_Info_7,
  MR_Word tscc_proc_4_input_2_Type_8,
  MR_Word tscc_proc_4_input_3_Expr_9,
  MR_Word tscc_proc_4_input_4_Stream_10)
{
  MR_Word tscc_proc_1_input_1_Info_6;
  MR_Word tscc_proc_1_input_2_Lval_7;
  MR_Word tscc_proc_1_input_3_Stream_8;
  MR_Word tscc_proc_2_input_1_Info_6;
  MR_Word tscc_proc_2_input_2_Rval_7;
  MR_Word tscc_proc_2_input_3_Stream_8;
  MR_Word tscc_proc_3_input_1_Info_6;
  MR_Word tscc_proc_3_input_2_Rval_7;
  MR_Word tscc_proc_3_input_3_Stream_8;
  MR_Word tscc_proc_5_input_1_Info_6;
  MR_Word tscc_proc_5_input_2_Stream_7;
  MR_Word tscc_proc_5_input_3_Const_8;
  MR_Word tscc_proc_6_input_1_Info_7;
  MR_Word tscc_proc_6_input_2_Expr_9;
  MR_Word tscc_proc_6_input_3_Stream_10;

  // The code for TSCC PROC 4: pred ml_backend.mlds_to_cs_data.output_cast_rval_for_csharp/6-0.
  ;
  // Setup for mutual tailcalls optimized into a loop.
  ;
  // The mutually recursive procedures are:
  ;
  ;
  // proc 1 in TSCC: pred ml_backend.mlds_to_cs_data.output_lval_for_csharp/5-0
  ;
  // proc 2 in TSCC: pred ml_backend.mlds_to_cs_data.output_rval_for_csharp/5-0
  ;
  // proc 3 in TSCC: pred ml_backend.mlds_to_cs_data.output_bracketed_rval_for_csharp/5-0
  ;
  // proc 4 in TSCC: pred ml_backend.mlds_to_cs_data.output_cast_rval_for_csharp/6-0
  ;
  // proc 5 in TSCC: pred ml_backend.mlds_to_cs_data.output_rval_const_for_csharp/5-0
  ;
  // proc 6 in TSCC: pred ml_backend.mlds_to_cs_data.UnusedArgs__pred__output_boxed_rval_for_csharp__[2]_0/6-0
  ;
  ;
  goto top_of_proc_4;
top_of_proc_1:;
  {
    MR_Word Info_6 = tscc_proc_1_input_1_Info_6;
    MR_Word Lval_7 = tscc_proc_1_input_2_Lval_7;
    MR_Word Stream_8 = tscc_proc_1_input_3_Stream_8;
    MR_bool succeeded;

    switch (MR_tag((MR_Word) Lval_7)) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        {
          MR_Word PtrRval_11 = ((MR_Word) ((MR_hl_field(0, Lval_7, (MR_Integer) 1))));
          MR_Word FieldId_13 = ((MR_Word) ((MR_hl_field(0, Lval_7, (MR_Integer) 3))));
          MR_Word FieldType_14 = ((MR_Word) ((MR_hl_field(0, Lval_7, (MR_Integer) 4))));

          if (((MR_tag((MR_Word) FieldId_13)) == (MR_Integer) 1))
          {
            MR_Word QualFieldVarName_19 = ((MR_Word) ((MR_hl_field(1, FieldId_13, (MR_Integer) 0))));
            MR_Word CtorType_20 = ((MR_Word) ((MR_hl_field(1, FieldId_13, (MR_Integer) 1))));
            MR_Word FieldVarName_23 = ((MR_Word) ((MR_hl_field(0, QualFieldVarName_19, (MR_Integer) 2))));
            MR_String FieldVarNameStr_24;

            FieldVarNameStr_24 = ml_backend__mlds_to_cs_name__field_var_name_to_ll_string_for_csharp_1_f_0(FieldVarName_23);
            succeeded = (FieldVarName_23 == (MR_Word) ((MR_Unsigned) 4U));
            if (succeeded)
            {
              if (((MR_tag((MR_Word) PtrRval_11)) == (MR_Integer) 2))
              {
                MR_Word Var_103 = ((MR_Word) ((MR_hl_field(2, PtrRval_11, (MR_Integer) 0))));

                if (((((MR_tag((MR_Word) Var_103)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(3, Var_103, (MR_Integer) 0)))) == (MR_Integer) 1))))
                  succeeded = MR_TRUE;
                else
                if (((((MR_tag((MR_Word) Var_103)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(3, Var_103, (MR_Integer) 0)))) == (MR_Integer) 0))))
                  succeeded = MR_TRUE;
                else
                  succeeded = MR_FALSE;
              }
              else
              if (((((MR_tag((MR_Word) PtrRval_11)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(3, PtrRval_11, (MR_Integer) 0)))) == (MR_Integer) 1))))
              {
                MR_Word Var_98 = ((MR_Word) ((MR_hl_field(3, PtrRval_11, (MR_Integer) 1))));

                succeeded = ((MR_tag((MR_Word) Var_98)) == (MR_Integer) 1);
                if (succeeded)
                {
                }
              }
              else
                succeeded = MR_FALSE;
              if (succeeded)
                ml_backend__mlds_to_cs_data__output_rval_for_csharp_5_p_0(Info_6, PtrRval_11, Stream_8);
              else
              {
                mercury__io__write_char_4_p_0(Stream_8, (MR_Char) 40);
                ml_backend__mlds_to_cs_data__output_rval_for_csharp_5_p_0(Info_6, PtrRval_11, Stream_8);
                mercury__io__write_char_4_p_0(Stream_8, (MR_Char) 41);
              }
              mercury__io__write_string_4_p_0(Stream_8, (MR_String) ".");
              mercury__io__write_string_4_p_0(Stream_8, FieldVarNameStr_24);
            }
            else
            {
              succeeded = ((((MR_tag((MR_Word) PtrRval_11)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(3, PtrRval_11, (MR_Integer) 0)))) == (MR_Integer) 9)));
              if (succeeded)
              {
                ml_backend__mlds_to_cs_data__output_rval_for_csharp_5_p_0(Info_6, PtrRval_11, Stream_8);
                mercury__io__write_string_4_p_0(Stream_8, (MR_String) ".");
                mercury__io__write_string_4_p_0(Stream_8, FieldVarNameStr_24);
              }
              else
              {
                MR_String Var_65;

                Var_65 = ml_backend__mlds_to_cs_type__type_to_string_for_csharp_2_f_0(Info_6, CtorType_20);
                mercury__io__write_string_4_p_0(Stream_8, (MR_String) "((");
                mercury__io__write_string_4_p_0(Stream_8, Var_65);
                mercury__io__write_string_4_p_0(Stream_8, (MR_String) ") ");
                ml_backend__mlds_to_cs_data__output_bracketed_rval_for_csharp_5_p_0(Info_6, PtrRval_11, Stream_8);
                mercury__io__write_string_4_p_0(Stream_8, (MR_String) ").");
                mercury__io__write_string_4_p_0(Stream_8, FieldVarNameStr_24);
              }
            }
          }
          else
          {
            MR_Word OffsetRval_15 = ((MR_Word) ((MR_hl_field(0, FieldId_13, (MR_Integer) 0))));

            if ((FieldType_14 == (MR_Word) ((MR_Unsigned) 20U)))
              succeeded = MR_TRUE;
            else
            if (((((MR_tag((MR_Word) FieldType_14)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(3, FieldType_14, (MR_Integer) 0)))) == (MR_Integer) 3))))
            {
              MR_Word Var_38 = ((MR_Word) ((MR_hl_field(3, FieldType_14, (MR_Integer) 1))));

              succeeded = ((MR_tag((MR_Word) Var_38)) == (MR_Integer) 0);
              if (succeeded)
              {
              }
            }
            else
              succeeded = MR_FALSE;
            if (!(succeeded))
              {
                mercury__require__unexpected_2_p_0((MR_String) "predicate \140ml_backend.mlds_to_cs_data.output_lval_for_csharp\'/5", (MR_String) "unexpected field type");
                return;
              }
            mercury__io__write_string_4_p_0(Stream_8, (MR_String) "((object[]) ");
            ml_backend__mlds_to_cs_data__output_rval_for_csharp_5_p_0(Info_6, PtrRval_11, Stream_8);
            mercury__io__write_string_4_p_0(Stream_8, (MR_String) ")[");
            ml_backend__mlds_to_cs_data__output_rval_for_csharp_5_p_0(Info_6, OffsetRval_15, Stream_8);
            mercury__io__write_string_4_p_0(Stream_8, (MR_String) "]");
          }
        }
        break;
      case (MR_Integer) 1:
        {
          MR_Word Rval_26 = ((MR_Word) ((MR_hl_field(1, Lval_7, (MR_Integer) 0))));
          MR_Word next_value_of_tscc_proc_3_input_1_Info_6 = Info_6;
          MR_Word next_value_of_tscc_proc_3_input_2_Rval_7 = Rval_26;
          MR_Word next_value_of_tscc_proc_3_input_3_Stream_8 = Stream_8;

          // direct tailcall eliminated
          ;
          tscc_proc_3_input_1_Info_6 = next_value_of_tscc_proc_3_input_1_Info_6;
          tscc_proc_3_input_2_Rval_7 = next_value_of_tscc_proc_3_input_2_Rval_7;
          tscc_proc_3_input_3_Stream_8 = next_value_of_tscc_proc_3_input_3_Stream_8;
          goto top_of_proc_3;
        }
        break;
      case (MR_Integer) 2:
        {
          MR_Word GlobalVarRef_28 = ((MR_Word) ((MR_hl_field(2, Lval_7, (MR_Integer) 0))));
          MR_String EnvVarName_29 = (MR_String) (GlobalVarRef_28);

          mercury__io__write_string_4_p_0(Stream_8, (MR_String) "mercury_envvar_");
          mercury__io__write_string_4_p_0(Stream_8, EnvVarName_29);
        }
        break;
      case (MR_Integer) 3:
        switch (((MR_Integer) ((MR_hl_field(3, Lval_7, (MR_Integer) 0))))) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
            {
              MR_Word LocalVarName_30 = ((MR_Word) ((MR_hl_field(3, Lval_7, (MR_Integer) 1))));
              MR_String LocalVarNameStr_32;

              LocalVarNameStr_32 = ml_backend__mlds_to_cs_name__local_var_name_to_ll_string_for_csharp_1_f_0(LocalVarName_30);
              mercury__io__write_string_4_p_0(Stream_8, LocalVarNameStr_32);
            }
            break;
          case (MR_Integer) 1:
            {
              MR_Word GlobalVarName_33 = ((MR_Word) ((MR_hl_field(3, Lval_7, (MR_Integer) 1))));
              MR_String GlobalVarNameStr_35;

              GlobalVarNameStr_35 = ml_backend__mlds_to_cs_name__maybe_qualified_global_var_name_to_string_for_csharp_2_f_0(Info_6, GlobalVarName_33);
              mercury__io__write_string_4_p_0(Stream_8, GlobalVarNameStr_35);
            }
            break;
        }
        break;
    }
    goto tscc_end;
  }
top_of_proc_2:;
  {
    MR_Word Info_6 = tscc_proc_2_input_1_Info_6;
    MR_Word Rval_7 = tscc_proc_2_input_2_Rval_7;
    MR_Word Stream_8 = tscc_proc_2_input_3_Stream_8;
    MR_bool succeeded;

    switch (MR_tag((MR_Word) Rval_7)) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        {
          mercury__require__unexpected_2_p_0((MR_String) "predicate \140ml_backend.mlds_to_cs_data.output_rval_for_csharp\'/5", (MR_String) "ml_scalar_common");
          return;
        }
        break;
      case (MR_Integer) 1:
        {
          MR_Word ScalarCommon_22 = (MR_Word) (MR_body((MR_Word) (Rval_7), (MR_Integer) 1));
          MR_Word ModuleName_23 = ((MR_Word) ((MR_hl_field(0, ScalarCommon_22, (MR_Integer) 0))));
          MR_Integer TypeNum_25;
          MR_Integer RowNum_26 = ((MR_Integer) ((MR_hl_field(0, ScalarCommon_22, (MR_Integer) 3))));
          MR_Word ModuleSymName_27;
          MR_String MangledModuleName_28;
          MR_Word Var_57 = ((MR_Word) ((MR_hl_field(0, ScalarCommon_22, (MR_Integer) 2))));
          MR_String Var_115;
          MR_String Var_125;

          TypeNum_25 = (MR_Integer) (Var_57);
          ModuleSymName_27 = ml_backend__mlds__mlds_module_name_to_sym_name_1_f_0(ModuleName_23);
          MangledModuleName_28 = ml_backend__mlds_to_cs_name__strip_mercury_and_mangle_sym_name_for_csharp_1_f_0(ModuleSymName_27);
          mercury__io__write_string_4_p_0(Stream_8, MangledModuleName_28);
          mercury__io__write_string_4_p_0(Stream_8, (MR_String) ".MR_scalar_common_");
          mercury__string__format__format_signed_int_component_nowidth_noprec_3_p_0((MR_Word) (&ml_backend__mlds_to_cs_data_scalar_common_1[0]), TypeNum_25, &Var_115);
          mercury__io__write_string_4_p_0(Stream_8, Var_115);
          mercury__io__write_string_4_p_0(Stream_8, (MR_String) "[");
          mercury__string__format__format_signed_int_component_nowidth_noprec_3_p_0((MR_Word) (&ml_backend__mlds_to_cs_data_scalar_common_1[0]), RowNum_26, &Var_125);
          mercury__io__write_string_4_p_0(Stream_8, Var_125);
          mercury__io__write_string_4_p_0(Stream_8, (MR_String) "]");
        }
        break;
      case (MR_Integer) 2:
        {
          MR_Word Lval_10 = ((MR_Word) ((MR_hl_field(2, Rval_7, (MR_Integer) 0))));
          MR_Word next_value_of_tscc_proc_1_input_1_Info_6 = Info_6;
          MR_Word next_value_of_tscc_proc_1_input_2_Lval_7 = Lval_10;
          MR_Word next_value_of_tscc_proc_1_input_3_Stream_8 = Stream_8;

          // direct tailcall eliminated
          ;
          tscc_proc_1_input_1_Info_6 = next_value_of_tscc_proc_1_input_1_Info_6;
          tscc_proc_1_input_2_Lval_7 = next_value_of_tscc_proc_1_input_2_Lval_7;
          tscc_proc_1_input_3_Stream_8 = next_value_of_tscc_proc_1_input_3_Stream_8;
          goto top_of_proc_1;
        }
        break;
      case (MR_Integer) 3:
        switch (((MR_Integer) ((MR_hl_field(3, Rval_7, (MR_Integer) 0))))) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
            {
              mercury__require__unexpected_2_p_0((MR_String) "predicate \140ml_backend.mlds_to_cs_data.output_rval_for_csharp\'/5", (MR_String) "tags not supported in C#");
              return;
            }
            break;
          case (MR_Integer) 1:
            {
              MR_Word Const_13 = ((MR_Word) ((MR_hl_field(3, Rval_7, (MR_Integer) 1))));
              MR_Word next_value_of_tscc_proc_5_input_1_Info_6 = Info_6;
              MR_Word next_value_of_tscc_proc_5_input_2_Stream_7 = Stream_8;
              MR_Word next_value_of_tscc_proc_5_input_3_Const_8 = Const_13;

              // direct tailcall eliminated
              ;
              tscc_proc_5_input_1_Info_6 = next_value_of_tscc_proc_5_input_1_Info_6;
              tscc_proc_5_input_2_Stream_7 = next_value_of_tscc_proc_5_input_2_Stream_7;
              tscc_proc_5_input_3_Const_8 = next_value_of_tscc_proc_5_input_3_Const_8;
              goto top_of_proc_5;
            }
            break;
          case (MR_Integer) 2:
            {
              MR_Word Type_80 = ((MR_Word) ((MR_hl_field(3, Rval_7, (MR_Integer) 1))));
              MR_Word SubRval_81 = ((MR_Word) ((MR_hl_field(3, Rval_7, (MR_Integer) 2))));
              MR_Word Var_42;
              MR_Word Var_89;

              succeeded = ((((MR_tag((MR_Word) Type_80)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(3, Type_80, (MR_Integer) 0)))) == (MR_Integer) 3)));
              if (succeeded)
              {
                Var_42 = ((MR_Word) ((MR_hl_field(3, Type_80, (MR_Integer) 1))));
                Var_89 = parse_tree__builtin_lib_types__comparison_result_type_0_f_0();
                succeeded = parse_tree__prog_data____Unify____mer_type_0_0(Var_42, Var_89);
              }
              if (succeeded)
              {
                mercury__io__write_string_4_p_0(Stream_8, (MR_String) "builtin.comparison_result_object[(int) ");
                ml_backend__mlds_to_cs_data__output_rval_for_csharp_5_p_0(Info_6, SubRval_81, Stream_8);
                mercury__io__write_string_4_p_0(Stream_8, (MR_String) "]");
              }
              else
              {
                MR_Word next_value_of_tscc_proc_6_input_1_Info_7 = Info_6;
                MR_Word next_value_of_tscc_proc_6_input_2_Expr_9 = SubRval_81;
                MR_Word next_value_of_tscc_proc_6_input_3_Stream_10 = Stream_8;

                // direct tailcall eliminated
                ;
                tscc_proc_6_input_1_Info_7 = next_value_of_tscc_proc_6_input_1_Info_7;
                tscc_proc_6_input_2_Expr_9 = next_value_of_tscc_proc_6_input_2_Expr_9;
                tscc_proc_6_input_3_Stream_10 = next_value_of_tscc_proc_6_input_3_Stream_10;
                goto top_of_proc_6;
              }
            }
            break;
          case (MR_Integer) 3:
            {
              MR_Word Type_82 = ((MR_Word) ((MR_hl_field(3, Rval_7, (MR_Integer) 1))));
              MR_Word SubRval_83 = ((MR_Word) ((MR_hl_field(3, Rval_7, (MR_Integer) 2))));

              ml_backend__mlds_to_cs_data__output_unboxed_rval_for_csharp_6_p_0(Info_6, Type_82, SubRval_83, Stream_8);
            }
            break;
          case (MR_Integer) 4:
            {
              MR_Word Type_14 = ((MR_Word) ((MR_hl_field(3, Rval_7, (MR_Integer) 1))));
              MR_Word SubRval_15 = ((MR_Word) ((MR_hl_field(3, Rval_7, (MR_Integer) 2))));
              MR_Word next_value_of_tscc_proc_4_input_1_Info_7 = Info_6;
              MR_Word next_value_of_tscc_proc_4_input_2_Type_8 = Type_14;
              MR_Word next_value_of_tscc_proc_4_input_3_Expr_9 = SubRval_15;
              MR_Word next_value_of_tscc_proc_4_input_4_Stream_10 = Stream_8;

              // direct tailcall eliminated
              ;
              tscc_proc_4_input_1_Info_7 = next_value_of_tscc_proc_4_input_1_Info_7;
              tscc_proc_4_input_2_Type_8 = next_value_of_tscc_proc_4_input_2_Type_8;
              tscc_proc_4_input_3_Expr_9 = next_value_of_tscc_proc_4_input_3_Expr_9;
              tscc_proc_4_input_4_Stream_10 = next_value_of_tscc_proc_4_input_4_Stream_10;
              goto top_of_proc_4;
            }
            break;
          case (MR_Integer) 5:
            {
              MR_Word Unop_17 = ((MR_Word) ((MR_hl_field(3, Rval_7, (MR_Integer) 1))));
              MR_Word SubRval_84 = ((MR_Word) ((MR_hl_field(3, Rval_7, (MR_Integer) 2))));

              ml_backend__mlds_to_cs_data__output_unop_for_csharp_6_p_0(Info_6, Stream_8, Unop_17, SubRval_84);
            }
            break;
          case (MR_Integer) 6:
            {
              MR_Word Op_18 = ((MR_Word) ((MR_hl_field(3, Rval_7, (MR_Integer) 1))));
              MR_Word SubRvalA_19 = ((MR_Word) ((MR_hl_field(3, Rval_7, (MR_Integer) 2))));
              MR_Word SubRvalB_20 = ((MR_Word) ((MR_hl_field(3, Rval_7, (MR_Integer) 3))));

              ml_backend__mlds_to_cs_data__output_binop_for_csharp_7_p_0(Info_6, Stream_8, Op_18, SubRvalA_19, SubRvalB_20);
            }
            break;
          case (MR_Integer) 7:
            {
              MR_Word Lval_85 = ((MR_Word) ((MR_hl_field(3, Rval_7, (MR_Integer) 1))));
              MR_Word next_value_of_tscc_proc_1_input_1_Info_6;
              MR_Word next_value_of_tscc_proc_1_input_2_Lval_7;
              MR_Word next_value_of_tscc_proc_1_input_3_Stream_8;

              mercury__io__write_string_4_p_0(Stream_8, (MR_String) "out ");
              // direct tailcall eliminated
              ;
              next_value_of_tscc_proc_1_input_1_Info_6 = Info_6;
              next_value_of_tscc_proc_1_input_2_Lval_7 = Lval_85;
              next_value_of_tscc_proc_1_input_3_Stream_8 = Stream_8;
              tscc_proc_1_input_1_Info_6 = next_value_of_tscc_proc_1_input_1_Info_6;
              tscc_proc_1_input_2_Lval_7 = next_value_of_tscc_proc_1_input_2_Lval_7;
              tscc_proc_1_input_3_Stream_8 = next_value_of_tscc_proc_1_input_3_Stream_8;
              goto top_of_proc_1;
            }
            break;
          case (MR_Integer) 8:
            {
              MR_Word VectorCommon_29 = ((MR_Word) ((MR_hl_field(3, Rval_7, (MR_Integer) 1))));
              MR_Word RowRval_30 = ((MR_Word) ((MR_hl_field(3, Rval_7, (MR_Integer) 2))));
              MR_Integer StartRowNum_32 = ((MR_Integer) ((MR_hl_field(0, VectorCommon_29, (MR_Integer) 3))));
              MR_Word Var_67 = ((MR_Word) ((MR_hl_field(0, VectorCommon_29, (MR_Integer) 2))));
              MR_Integer TypeNum_88 = (MR_Integer) (Var_67);
              MR_String Var_93;
              MR_String Var_103;

              mercury__io__write_string_4_p_0(Stream_8, (MR_String) "MR_vector_common_");
              mercury__string__format__format_signed_int_component_nowidth_noprec_3_p_0((MR_Word) (&ml_backend__mlds_to_cs_data_scalar_common_1[0]), TypeNum_88, &Var_93);
              mercury__io__write_string_4_p_0(Stream_8, Var_93);
              mercury__io__write_string_4_p_0(Stream_8, (MR_String) "[");
              mercury__string__format__format_signed_int_component_nowidth_noprec_3_p_0((MR_Word) (&ml_backend__mlds_to_cs_data_scalar_common_1[0]), StartRowNum_32, &Var_103);
              mercury__io__write_string_4_p_0(Stream_8, Var_103);
              mercury__io__write_string_4_p_0(Stream_8, (MR_String) " + ");
              ml_backend__mlds_to_cs_data__output_rval_for_csharp_5_p_0(Info_6, RowRval_30, Stream_8);
              mercury__io__write_string_4_p_0(Stream_8, (MR_String) "]");
            }
            break;
          case (MR_Integer) 9:
            mercury__io__write_string_4_p_0(Stream_8, (MR_String) "this");
            break;
        }
        break;
    }
    goto tscc_end;
  }
top_of_proc_3:;
  {
    MR_Word Info_6 = tscc_proc_3_input_1_Info_6;
    MR_Word Rval_7 = tscc_proc_3_input_2_Rval_7;
    MR_Word Stream_8 = tscc_proc_3_input_3_Stream_8;
    MR_bool succeeded;

    if (((MR_tag((MR_Word) Rval_7)) == (MR_Integer) 2))
    {
      MR_Word Var_25 = ((MR_Word) ((MR_hl_field(2, Rval_7, (MR_Integer) 0))));

      if (((((MR_tag((MR_Word) Var_25)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(3, Var_25, (MR_Integer) 0)))) == (MR_Integer) 1))))
        succeeded = MR_TRUE;
      else
      if (((((MR_tag((MR_Word) Var_25)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(3, Var_25, (MR_Integer) 0)))) == (MR_Integer) 0))))
        succeeded = MR_TRUE;
      else
        succeeded = MR_FALSE;
    }
    else
    if (((((MR_tag((MR_Word) Rval_7)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(3, Rval_7, (MR_Integer) 0)))) == (MR_Integer) 1))))
    {
      MR_Word Var_19 = ((MR_Word) ((MR_hl_field(3, Rval_7, (MR_Integer) 1))));

      succeeded = ((MR_tag((MR_Word) Var_19)) == (MR_Integer) 1);
      if (succeeded)
      {
      }
    }
    else
      succeeded = MR_FALSE;
    if (succeeded)
    {
      MR_Word next_value_of_tscc_proc_2_input_1_Info_6 = Info_6;
      MR_Word next_value_of_tscc_proc_2_input_2_Rval_7 = Rval_7;
      MR_Word next_value_of_tscc_proc_2_input_3_Stream_8 = Stream_8;

      // direct tailcall eliminated
      ;
      tscc_proc_2_input_1_Info_6 = next_value_of_tscc_proc_2_input_1_Info_6;
      tscc_proc_2_input_2_Rval_7 = next_value_of_tscc_proc_2_input_2_Rval_7;
      tscc_proc_2_input_3_Stream_8 = next_value_of_tscc_proc_2_input_3_Stream_8;
      goto top_of_proc_2;
    }
    else
    {
      mercury__io__write_char_4_p_0(Stream_8, (MR_Char) 40);
      ml_backend__mlds_to_cs_data__output_rval_for_csharp_5_p_0(Info_6, Rval_7, Stream_8);
      mercury__io__write_char_4_p_0(Stream_8, (MR_Char) 41);
    }
    goto tscc_end;
  }
top_of_proc_4:;
  {
    MR_Word Info_7 = tscc_proc_4_input_1_Info_7;
    MR_Word Type_8 = tscc_proc_4_input_2_Type_8;
    MR_Word Expr_9 = tscc_proc_4_input_3_Expr_9;
    MR_Word Stream_10 = tscc_proc_4_input_4_Stream_10;
    MR_bool succeeded = (Type_8 == (MR_Word) ((MR_Unsigned) 32U));
    MR_Integer N_12;
    MR_Word Var_16;

    if (succeeded)
    {
      succeeded = ((((MR_tag((MR_Word) Expr_9)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(3, Expr_9, (MR_Integer) 0)))) == (MR_Integer) 1)));
      if (succeeded)
      {
        Var_16 = ((MR_Word) ((MR_hl_field(3, Expr_9, (MR_Integer) 1))));
        succeeded = ((MR_tag((MR_Word) Var_16)) == (MR_Integer) 2);
        if (succeeded)
          N_12 = ((MR_Integer) ((MR_hl_field(2, Var_16, (MR_Integer) 0))));
      }
    }
    if (succeeded)
    {
      MR_Integer Var_47;

      ml_backend__mlds_to_cs_util__maybe_output_inline_comment_for_csharp_5_p_0(Info_7, Stream_10, (MR_String) "cast");
      succeeded = (N_12 >= (MR_Integer) 1);
      if (succeeded)
      {
        Var_47 = (MR_Integer) 5;
        succeeded = (N_12 <= Var_47);
      }
      if (succeeded)
      {
        mercury__io__write_string_4_p_0(Stream_10, (MR_String) "runtime.PseudoTypeInfo.K");
        mercury__io__write_int_4_p_0(Stream_10, N_12);
      }
      else
      {
        mercury__io__write_string_4_p_0(Stream_10, (MR_String) "new runtime.PseudoTypeInfo(");
        ml_backend__mlds_to_cs_data__output_rval_for_csharp_5_p_0(Info_7, Expr_9, Stream_10);
        mercury__io__write_string_4_p_0(Stream_10, (MR_String) ")");
      }
    }
    else
    {
      if ((Type_8 == (MR_Word) ((MR_Unsigned) 28U)))
        succeeded = MR_TRUE;
      else
      if (((((MR_tag((MR_Word) Type_8)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(3, Type_8, (MR_Integer) 0)))) == (MR_Integer) 3))))
      {
        MR_Word Var_27 = ((MR_Word) ((MR_hl_field(3, Type_8, (MR_Integer) 2))));
        MR_Word Var_28;

        succeeded = ((((MR_tag((MR_Word) Var_27)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(3, Var_27, (MR_Integer) 0)))) == (MR_Integer) 0)));
        if (succeeded)
        {
          Var_28 = ((MR_Unsigned) ((MR_hl_field(3, Var_27, (MR_Integer) 1))) & (MR_Integer) 3);
          succeeded = (Var_28 == (MR_Integer) 0);
        }
      }
      else
        succeeded = MR_FALSE;
      if (succeeded)
      {
        ml_backend__mlds_to_cs_util__maybe_output_inline_comment_for_csharp_5_p_0(Info_7, Stream_10, (MR_String) "cast");
        mercury__io__write_string_4_p_0(Stream_10, (MR_String) "runtime.TypeInfo_Struct.maybe_new(");
        ml_backend__mlds_to_cs_data__output_rval_for_csharp_5_p_0(Info_7, Expr_9, Stream_10);
        mercury__io__write_string_4_p_0(Stream_10, (MR_String) ")");
      }
      else
      {
        MR_String Var_40;
        MR_Word next_value_of_tscc_proc_2_input_1_Info_6;
        MR_Word next_value_of_tscc_proc_2_input_2_Rval_7;
        MR_Word next_value_of_tscc_proc_2_input_3_Stream_8;

        Var_40 = ml_backend__mlds_to_cs_type__type_to_string_for_csharp_2_f_0(Info_7, Type_8);
        mercury__io__write_string_4_p_0(Stream_10, (MR_String) "(");
        mercury__io__write_string_4_p_0(Stream_10, Var_40);
        mercury__io__write_string_4_p_0(Stream_10, (MR_String) ") ");
        // direct tailcall eliminated
        ;
        next_value_of_tscc_proc_2_input_1_Info_6 = Info_7;
        next_value_of_tscc_proc_2_input_2_Rval_7 = Expr_9;
        next_value_of_tscc_proc_2_input_3_Stream_8 = Stream_10;
        tscc_proc_2_input_1_Info_6 = next_value_of_tscc_proc_2_input_1_Info_6;
        tscc_proc_2_input_2_Rval_7 = next_value_of_tscc_proc_2_input_2_Rval_7;
        tscc_proc_2_input_3_Stream_8 = next_value_of_tscc_proc_2_input_3_Stream_8;
        goto top_of_proc_2;
      }
    }
    goto tscc_end;
  }
top_of_proc_5:;
  {
    MR_Word Info_6 = tscc_proc_5_input_1_Info_6;
    MR_Word Stream_7 = tscc_proc_5_input_2_Stream_7;
    MR_Word Const_8 = tscc_proc_5_input_3_Const_8;
    MR_bool succeeded;

    switch (MR_tag((MR_Word) Const_8)) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        switch (MR_unmkbody(Const_8)) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
            mercury__io__write_string_4_p_0(Stream_7, (MR_String) "true");
            break;
          case (MR_Integer) 1:
            mercury__io__write_string_4_p_0(Stream_7, (MR_String) "false");
            break;
        }
        break;
      case (MR_Integer) 1:
        {
          MR_Word CodeAddr_20 = (MR_Word) (MR_body((MR_Word) (Const_8), (MR_Integer) 1));
          MR_String Name_21;
          MR_Word Var_73 = ((MR_Word) ((MR_hl_field(0, Info_6, (MR_Integer) 4))));
          MR_Box conv0_Name_21;

          mercury__map__lookup_3_p_0((MR_Word) (&ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_code_addr_0), (MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), Var_73, ((MR_Box) (CodeAddr_20)), &conv0_Name_21);
          Name_21 = ((MR_String) (conv0_Name_21));
          mercury__io__write_string_4_p_0(Stream_7, Name_21);
        }
        break;
      case (MR_Integer) 2:
        {
          MR_Integer N_10 = ((MR_Integer) ((MR_hl_field(2, Const_8, (MR_Integer) 0))));

          ml_backend__mlds_to_cs_data__output_int_const_for_csharp_4_p_0(Stream_7, N_10);
        }
        break;
      case (MR_Integer) 3:
        switch (((MR_Integer) ((MR_hl_field(3, Const_8, (MR_Integer) 0))))) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
            {
              MR_Unsigned N_95 = ((MR_Unsigned) ((MR_hl_field(3, Const_8, (MR_Integer) 1))));

              mercury__io__write_uint_4_p_0(Stream_7, N_95);
              mercury__io__write_string_4_p_0(Stream_7, (MR_String) "U");
            }
            break;
          case (MR_Integer) 1:
            {
              int8_t N_96 = ((int8_t) (MR_Word) (MR_hl_field(3, Const_8, (MR_Integer) 1)));

              mercury__io__write_string_4_p_0(Stream_7, (MR_String) "(sbyte) ");
              mercury__io__write_int8_4_p_0(Stream_7, N_96);
            }
            break;
          case (MR_Integer) 2:
            {
              uint8_t N_97 = ((uint8_t) (MR_Word) (MR_hl_field(3, Const_8, (MR_Integer) 1)));

              ml_backend__mlds_to_cs_data__output_uint8_const_for_csharp_4_p_0(Stream_7, N_97);
            }
            break;
          case (MR_Integer) 3:
            {
              int16_t N_98 = ((int16_t) (MR_Word) (MR_hl_field(3, Const_8, (MR_Integer) 1)));

              mercury__io__write_string_4_p_0(Stream_7, (MR_String) "(short) ");
              mercury__io__write_int16_4_p_0(Stream_7, N_98);
            }
            break;
          case (MR_Integer) 4:
            {
              uint16_t N_99 = ((uint16_t) (MR_Word) (MR_hl_field(3, Const_8, (MR_Integer) 1)));

              mercury__io__write_string_4_p_0(Stream_7, (MR_String) "(ushort) ");
              mercury__io__write_uint16_4_p_0(Stream_7, N_99);
            }
            break;
          case (MR_Integer) 5:
            {
              int32_t N_100 = ((int32_t) (MR_Word) (MR_hl_field(3, Const_8, (MR_Integer) 1)));

              mercury__io__write_int32_4_p_0(Stream_7, N_100);
            }
            break;
          case (MR_Integer) 6:
            {
              uint32_t N_101 = ((uint32_t) (MR_Word) (MR_hl_field(3, Const_8, (MR_Integer) 1)));

              mercury__io__write_uint32_4_p_0(Stream_7, N_101);
              mercury__io__write_string_4_p_0(Stream_7, (MR_String) "U");
            }
            break;
          case (MR_Integer) 7:
            {
              int64_t N_102 = MR_unbox_int64((MR_hl_field(3, Const_8, (MR_Integer) 1)));

              mercury__io__write_int64_4_p_0(Stream_7, N_102);
              mercury__io__write_string_4_p_0(Stream_7, (MR_String) "L");
            }
            break;
          case (MR_Integer) 8:
            {
              uint64_t N_103 = MR_unbox_uint64((MR_hl_field(3, Const_8, (MR_Integer) 1)));

              ml_backend__mlds_to_cs_data__output_uint64_const_for_csharp_4_p_0(Stream_7, N_103);
            }
            break;
          case (MR_Integer) 9:
            {
              MR_Word EnumType_12 = ((MR_Word) ((MR_hl_field(3, Const_8, (MR_Integer) 2))));
              MR_Word Var_53;
              MR_Word Var_55;
              MR_Integer N_104 = ((MR_Integer) ((MR_hl_field(3, Const_8, (MR_Integer) 1))));
              MR_Word next_value_of_tscc_proc_4_input_1_Info_7;
              MR_Word next_value_of_tscc_proc_4_input_2_Type_8;
              MR_Word next_value_of_tscc_proc_4_input_3_Expr_9;
              MR_Word next_value_of_tscc_proc_4_input_4_Stream_10;

              {
                Var_55 = (MR_Word) MR_mkword(2, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(2, Var_55, 0) = ((MR_Box) (N_104));
              }
              {
                Var_53 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(3, Var_53, 0) = ((MR_Box) ((MR_Unsigned) 1U));
                MR_hl_field(3, Var_53, 1) = ((MR_Box) (Var_55));
              }
              // direct tailcall eliminated
              ;
              next_value_of_tscc_proc_4_input_1_Info_7 = Info_6;
              next_value_of_tscc_proc_4_input_2_Type_8 = EnumType_12;
              next_value_of_tscc_proc_4_input_3_Expr_9 = Var_53;
              next_value_of_tscc_proc_4_input_4_Stream_10 = Stream_7;
              tscc_proc_4_input_1_Info_7 = next_value_of_tscc_proc_4_input_1_Info_7;
              tscc_proc_4_input_2_Type_8 = next_value_of_tscc_proc_4_input_2_Type_8;
              tscc_proc_4_input_3_Expr_9 = next_value_of_tscc_proc_4_input_3_Expr_9;
              tscc_proc_4_input_4_Stream_10 = next_value_of_tscc_proc_4_input_4_Stream_10;
              goto top_of_proc_4;
            }
            break;
          case (MR_Integer) 10:
            {
              MR_Integer C_11 = ((MR_Integer) ((MR_hl_field(3, Const_8, (MR_Integer) 1))));

              mercury__io__write_string_4_p_0(Stream_7, (MR_String) "( ");
              ml_backend__mlds_to_cs_data__output_int_const_for_csharp_4_p_0(Stream_7, C_11);
              mercury__io__write_string_4_p_0(Stream_7, (MR_String) ")");
            }
            break;
          case (MR_Integer) 11:
            {
              MR_Float FloatVal_16 = MR_unbox_float((MR_hl_field(3, Const_8, (MR_Integer) 1)));

              backend_libs__c_util__output_float_literal_4_p_0(Stream_7, FloatVal_16);
            }
            break;
          case (MR_Integer) 12:
            {
              MR_String String_17 = ((MR_String) ((MR_hl_field(3, Const_8, (MR_Integer) 1))));

              backend_libs__c_util__output_quoted_string_csharp_4_p_0(Stream_7, String_17);
            }
            break;
          case (MR_Integer) 13:
            {
              MR_Word String_105 = ((MR_Word) ((MR_hl_field(3, Const_8, (MR_Integer) 1))));

              backend_libs__c_util__output_quoted_multi_string_csharp_4_p_0(Stream_7, String_105);
            }
            break;
          case (MR_Integer) 14:
            {
              MR_Word Lang_13 = ((MR_Unsigned) ((MR_hl_field(3, Const_8, (MR_Integer) 1))) & (MR_Integer) 3);
              MR_String Value_14 = ((MR_String) ((MR_hl_field(3, Const_8, (MR_Integer) 2))));
              MR_Word Type_15 = ((MR_Word) ((MR_hl_field(3, Const_8, (MR_Integer) 3))));
              MR_Word Var_56;
              MR_String Var_64;

              {
                Var_56 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
                MR_hl_field(0, Var_56, 0) = ((MR_Box) (&ml_backend__mlds_to_cs_data_scalar_common_3[0]));
                MR_hl_field(0, Var_56, 1) = ((MR_Box) (ml_backend__mlds_to_cs_data__output_rval_const_for_csharp_5_p_0_1));
                MR_hl_field(0, Var_56, 2) = ((MR_Box) ((MR_Integer) 2));
                MR_hl_field(0, Var_56, 3) = ((MR_Box) (Lang_13));
                MR_hl_field(0, Var_56, 4) = ((MR_Box) ((MR_Integer) 1));
              }
              mercury__require__expect_3_p_0(Var_56, (MR_String) "predicate \140ml_backend.mlds_to_cs_data.output_rval_const_for_csharp\'/5", (MR_String) "language other than C#.");
              Var_64 = ml_backend__mlds_to_cs_type__type_to_string_for_csharp_2_f_0(Info_6, Type_15);
              mercury__io__write_string_4_p_0(Stream_7, (MR_String) "(");
              mercury__io__write_string_4_p_0(Stream_7, Var_64);
              mercury__io__write_string_4_p_0(Stream_7, (MR_String) ") ");
              mercury__io__write_string_4_p_0(Stream_7, Value_14);
            }
            break;
          case (MR_Integer) 15:
            {
              MR_Word TargetPrefixes_18 = ((MR_Word) ((MR_hl_field(3, Const_8, (MR_Integer) 1))));
              MR_String NamedConst_19 = ((MR_String) ((MR_hl_field(3, Const_8, (MR_Integer) 2))));
              MR_String Var_70 = ((MR_String) ((MR_hl_field(0, TargetPrefixes_18, (MR_Integer) 1))));

              mercury__io__write_string_4_p_0(Stream_7, Var_70);
              mercury__io__write_string_4_p_0(Stream_7, NamedConst_19);
            }
            break;
          case (MR_Integer) 16:
            {
              MR_Word VarName_22 = ((MR_Word) ((MR_hl_field(3, Const_8, (MR_Integer) 1))));
              MR_String VarNameStr_23;

              VarNameStr_23 = ml_backend__mlds_to_cs_name__local_var_name_to_ll_string_for_csharp_1_f_0(VarName_22);
              mercury__io__write_string_4_p_0(Stream_7, VarNameStr_23);
            }
            break;
          case (MR_Integer) 17:
            {
              MR_Word ModuleName_24 = ((MR_Word) ((MR_hl_field(3, Const_8, (MR_Integer) 1))));
              MR_String MangledModuleName_25;
              MR_Word Var_76;
              MR_Word VarName_106 = ((MR_Word) ((MR_hl_field(3, Const_8, (MR_Integer) 2))));
              MR_String VarNameStr_107;

              Var_76 = ml_backend__mlds__mlds_module_name_to_sym_name_1_f_0(ModuleName_24);
              MangledModuleName_25 = ml_backend__mlds_to_cs_name__strip_mercury_and_mangle_sym_name_for_csharp_1_f_0(Var_76);
              VarNameStr_107 = ml_backend__mlds_to_cs_name__global_var_name_to_ll_string_for_csharp_1_f_0(VarName_106);
              mercury__io__write_string_4_p_0(Stream_7, MangledModuleName_25);
              mercury__io__write_string_4_p_0(Stream_7, (MR_String) ".");
              mercury__io__write_string_4_p_0(Stream_7, VarNameStr_107);
            }
            break;
          case (MR_Integer) 18:
            {
              MR_Word RttiId_26 = ((MR_Word) ((MR_hl_field(3, Const_8, (MR_Integer) 2))));
              MR_String RttiAddrName0_27;
              MR_String RttiAddrName_28;
              MR_Word Var_84;
              MR_Word ModuleName_108 = ((MR_Word) ((MR_hl_field(3, Const_8, (MR_Integer) 1))));
              MR_String MangledModuleName_109;

              Var_84 = ml_backend__mlds__mlds_module_name_to_sym_name_1_f_0(ModuleName_108);
              MangledModuleName_109 = ml_backend__mlds_to_cs_name__strip_mercury_and_mangle_sym_name_for_csharp_1_f_0(Var_84);
              backend_libs__rtti__id_to_c_identifier_2_p_0(RttiId_26, &RttiAddrName0_27);
              RttiAddrName_28 = ml_backend__mlds_to_cs_name__limit_identifier_length_1_f_0(RttiAddrName0_27);
              mercury__io__write_string_4_p_0(Stream_7, MangledModuleName_109);
              mercury__io__write_string_4_p_0(Stream_7, (MR_String) ".");
              mercury__io__write_string_4_p_0(Stream_7, RttiAddrName_28);
            }
            break;
          case (MR_Integer) 19:
            {
              mercury__require__unexpected_2_p_0((MR_String) "predicate \140ml_backend.mlds_to_cs_data.output_rval_const_for_csharp\'/5", (MR_String) "NYI: mlconst_data_addr_tabling");
              return;
            }
            break;
          case (MR_Integer) 20:
            {
              MR_String Initializer_31;
              MR_Word Type_110 = ((MR_Word) ((MR_hl_field(3, Const_8, (MR_Integer) 1))));

              Initializer_31 = ml_backend__mlds_to_cs_data__get_default_initializer_for_csharp_2_f_0(Info_6, Type_110);
              mercury__io__write_string_4_p_0(Stream_7, Initializer_31);
            }
            break;
        }
        break;
    }
    goto tscc_end;
  }
top_of_proc_6:;
  {
    MR_Word Info_7 = tscc_proc_6_input_1_Info_7;
    MR_Word Expr_9 = tscc_proc_6_input_2_Expr_9;
    MR_Word Stream_10 = tscc_proc_6_input_3_Stream_10;
    MR_Word next_value_of_tscc_proc_2_input_1_Info_6 = Info_7;
    MR_Word next_value_of_tscc_proc_2_input_2_Rval_7 = Expr_9;
    MR_Word next_value_of_tscc_proc_2_input_3_Stream_8 = Stream_10;

    // direct tailcall eliminated
    ;
    tscc_proc_2_input_1_Info_6 = next_value_of_tscc_proc_2_input_1_Info_6;
    tscc_proc_2_input_2_Rval_7 = next_value_of_tscc_proc_2_input_2_Rval_7;
    tscc_proc_2_input_3_Stream_8 = next_value_of_tscc_proc_2_input_3_Stream_8;
    goto top_of_proc_2;
    goto tscc_end;
  }
tscc_end:;
  return;
}

static void MR_CALL 
ml_backend__mlds_to_cs_data__output_rval_const_for_csharp_5_p_0(
  MR_Word tscc_proc_5_input_1_Info_6,
  MR_Word tscc_proc_5_input_2_Stream_7,
  MR_Word tscc_proc_5_input_3_Const_8)
{
  MR_Word tscc_proc_1_input_1_Info_6;
  MR_Word tscc_proc_1_input_2_Lval_7;
  MR_Word tscc_proc_1_input_3_Stream_8;
  MR_Word tscc_proc_2_input_1_Info_6;
  MR_Word tscc_proc_2_input_2_Rval_7;
  MR_Word tscc_proc_2_input_3_Stream_8;
  MR_Word tscc_proc_3_input_1_Info_6;
  MR_Word tscc_proc_3_input_2_Rval_7;
  MR_Word tscc_proc_3_input_3_Stream_8;
  MR_Word tscc_proc_4_input_1_Info_7;
  MR_Word tscc_proc_4_input_2_Type_8;
  MR_Word tscc_proc_4_input_3_Expr_9;
  MR_Word tscc_proc_4_input_4_Stream_10;
  MR_Word tscc_proc_6_input_1_Info_7;
  MR_Word tscc_proc_6_input_2_Expr_9;
  MR_Word tscc_proc_6_input_3_Stream_10;

  // The code for TSCC PROC 5: pred ml_backend.mlds_to_cs_data.output_rval_const_for_csharp/5-0.
  ;
  // Setup for mutual tailcalls optimized into a loop.
  ;
  // The mutually recursive procedures are:
  ;
  ;
  // proc 1 in TSCC: pred ml_backend.mlds_to_cs_data.output_lval_for_csharp/5-0
  ;
  // proc 2 in TSCC: pred ml_backend.mlds_to_cs_data.output_rval_for_csharp/5-0
  ;
  // proc 3 in TSCC: pred ml_backend.mlds_to_cs_data.output_bracketed_rval_for_csharp/5-0
  ;
  // proc 4 in TSCC: pred ml_backend.mlds_to_cs_data.output_cast_rval_for_csharp/6-0
  ;
  // proc 5 in TSCC: pred ml_backend.mlds_to_cs_data.output_rval_const_for_csharp/5-0
  ;
  // proc 6 in TSCC: pred ml_backend.mlds_to_cs_data.UnusedArgs__pred__output_boxed_rval_for_csharp__[2]_0/6-0
  ;
  ;
  goto top_of_proc_5;
top_of_proc_1:;
  {
    MR_Word Info_6 = tscc_proc_1_input_1_Info_6;
    MR_Word Lval_7 = tscc_proc_1_input_2_Lval_7;
    MR_Word Stream_8 = tscc_proc_1_input_3_Stream_8;
    MR_bool succeeded;

    switch (MR_tag((MR_Word) Lval_7)) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        {
          MR_Word PtrRval_11 = ((MR_Word) ((MR_hl_field(0, Lval_7, (MR_Integer) 1))));
          MR_Word FieldId_13 = ((MR_Word) ((MR_hl_field(0, Lval_7, (MR_Integer) 3))));
          MR_Word FieldType_14 = ((MR_Word) ((MR_hl_field(0, Lval_7, (MR_Integer) 4))));

          if (((MR_tag((MR_Word) FieldId_13)) == (MR_Integer) 1))
          {
            MR_Word QualFieldVarName_19 = ((MR_Word) ((MR_hl_field(1, FieldId_13, (MR_Integer) 0))));
            MR_Word CtorType_20 = ((MR_Word) ((MR_hl_field(1, FieldId_13, (MR_Integer) 1))));
            MR_Word FieldVarName_23 = ((MR_Word) ((MR_hl_field(0, QualFieldVarName_19, (MR_Integer) 2))));
            MR_String FieldVarNameStr_24;

            FieldVarNameStr_24 = ml_backend__mlds_to_cs_name__field_var_name_to_ll_string_for_csharp_1_f_0(FieldVarName_23);
            succeeded = (FieldVarName_23 == (MR_Word) ((MR_Unsigned) 4U));
            if (succeeded)
            {
              if (((MR_tag((MR_Word) PtrRval_11)) == (MR_Integer) 2))
              {
                MR_Word Var_103 = ((MR_Word) ((MR_hl_field(2, PtrRval_11, (MR_Integer) 0))));

                if (((((MR_tag((MR_Word) Var_103)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(3, Var_103, (MR_Integer) 0)))) == (MR_Integer) 1))))
                  succeeded = MR_TRUE;
                else
                if (((((MR_tag((MR_Word) Var_103)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(3, Var_103, (MR_Integer) 0)))) == (MR_Integer) 0))))
                  succeeded = MR_TRUE;
                else
                  succeeded = MR_FALSE;
              }
              else
              if (((((MR_tag((MR_Word) PtrRval_11)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(3, PtrRval_11, (MR_Integer) 0)))) == (MR_Integer) 1))))
              {
                MR_Word Var_98 = ((MR_Word) ((MR_hl_field(3, PtrRval_11, (MR_Integer) 1))));

                succeeded = ((MR_tag((MR_Word) Var_98)) == (MR_Integer) 1);
                if (succeeded)
                {
                }
              }
              else
                succeeded = MR_FALSE;
              if (succeeded)
                ml_backend__mlds_to_cs_data__output_rval_for_csharp_5_p_0(Info_6, PtrRval_11, Stream_8);
              else
              {
                mercury__io__write_char_4_p_0(Stream_8, (MR_Char) 40);
                ml_backend__mlds_to_cs_data__output_rval_for_csharp_5_p_0(Info_6, PtrRval_11, Stream_8);
                mercury__io__write_char_4_p_0(Stream_8, (MR_Char) 41);
              }
              mercury__io__write_string_4_p_0(Stream_8, (MR_String) ".");
              mercury__io__write_string_4_p_0(Stream_8, FieldVarNameStr_24);
            }
            else
            {
              succeeded = ((((MR_tag((MR_Word) PtrRval_11)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(3, PtrRval_11, (MR_Integer) 0)))) == (MR_Integer) 9)));
              if (succeeded)
              {
                ml_backend__mlds_to_cs_data__output_rval_for_csharp_5_p_0(Info_6, PtrRval_11, Stream_8);
                mercury__io__write_string_4_p_0(Stream_8, (MR_String) ".");
                mercury__io__write_string_4_p_0(Stream_8, FieldVarNameStr_24);
              }
              else
              {
                MR_String Var_65;

                Var_65 = ml_backend__mlds_to_cs_type__type_to_string_for_csharp_2_f_0(Info_6, CtorType_20);
                mercury__io__write_string_4_p_0(Stream_8, (MR_String) "((");
                mercury__io__write_string_4_p_0(Stream_8, Var_65);
                mercury__io__write_string_4_p_0(Stream_8, (MR_String) ") ");
                ml_backend__mlds_to_cs_data__output_bracketed_rval_for_csharp_5_p_0(Info_6, PtrRval_11, Stream_8);
                mercury__io__write_string_4_p_0(Stream_8, (MR_String) ").");
                mercury__io__write_string_4_p_0(Stream_8, FieldVarNameStr_24);
              }
            }
          }
          else
          {
            MR_Word OffsetRval_15 = ((MR_Word) ((MR_hl_field(0, FieldId_13, (MR_Integer) 0))));

            if ((FieldType_14 == (MR_Word) ((MR_Unsigned) 20U)))
              succeeded = MR_TRUE;
            else
            if (((((MR_tag((MR_Word) FieldType_14)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(3, FieldType_14, (MR_Integer) 0)))) == (MR_Integer) 3))))
            {
              MR_Word Var_38 = ((MR_Word) ((MR_hl_field(3, FieldType_14, (MR_Integer) 1))));

              succeeded = ((MR_tag((MR_Word) Var_38)) == (MR_Integer) 0);
              if (succeeded)
              {
              }
            }
            else
              succeeded = MR_FALSE;
            if (!(succeeded))
              {
                mercury__require__unexpected_2_p_0((MR_String) "predicate \140ml_backend.mlds_to_cs_data.output_lval_for_csharp\'/5", (MR_String) "unexpected field type");
                return;
              }
            mercury__io__write_string_4_p_0(Stream_8, (MR_String) "((object[]) ");
            ml_backend__mlds_to_cs_data__output_rval_for_csharp_5_p_0(Info_6, PtrRval_11, Stream_8);
            mercury__io__write_string_4_p_0(Stream_8, (MR_String) ")[");
            ml_backend__mlds_to_cs_data__output_rval_for_csharp_5_p_0(Info_6, OffsetRval_15, Stream_8);
            mercury__io__write_string_4_p_0(Stream_8, (MR_String) "]");
          }
        }
        break;
      case (MR_Integer) 1:
        {
          MR_Word Rval_26 = ((MR_Word) ((MR_hl_field(1, Lval_7, (MR_Integer) 0))));
          MR_Word next_value_of_tscc_proc_3_input_1_Info_6 = Info_6;
          MR_Word next_value_of_tscc_proc_3_input_2_Rval_7 = Rval_26;
          MR_Word next_value_of_tscc_proc_3_input_3_Stream_8 = Stream_8;

          // direct tailcall eliminated
          ;
          tscc_proc_3_input_1_Info_6 = next_value_of_tscc_proc_3_input_1_Info_6;
          tscc_proc_3_input_2_Rval_7 = next_value_of_tscc_proc_3_input_2_Rval_7;
          tscc_proc_3_input_3_Stream_8 = next_value_of_tscc_proc_3_input_3_Stream_8;
          goto top_of_proc_3;
        }
        break;
      case (MR_Integer) 2:
        {
          MR_Word GlobalVarRef_28 = ((MR_Word) ((MR_hl_field(2, Lval_7, (MR_Integer) 0))));
          MR_String EnvVarName_29 = (MR_String) (GlobalVarRef_28);

          mercury__io__write_string_4_p_0(Stream_8, (MR_String) "mercury_envvar_");
          mercury__io__write_string_4_p_0(Stream_8, EnvVarName_29);
        }
        break;
      case (MR_Integer) 3:
        switch (((MR_Integer) ((MR_hl_field(3, Lval_7, (MR_Integer) 0))))) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
            {
              MR_Word LocalVarName_30 = ((MR_Word) ((MR_hl_field(3, Lval_7, (MR_Integer) 1))));
              MR_String LocalVarNameStr_32;

              LocalVarNameStr_32 = ml_backend__mlds_to_cs_name__local_var_name_to_ll_string_for_csharp_1_f_0(LocalVarName_30);
              mercury__io__write_string_4_p_0(Stream_8, LocalVarNameStr_32);
            }
            break;
          case (MR_Integer) 1:
            {
              MR_Word GlobalVarName_33 = ((MR_Word) ((MR_hl_field(3, Lval_7, (MR_Integer) 1))));
              MR_String GlobalVarNameStr_35;

              GlobalVarNameStr_35 = ml_backend__mlds_to_cs_name__maybe_qualified_global_var_name_to_string_for_csharp_2_f_0(Info_6, GlobalVarName_33);
              mercury__io__write_string_4_p_0(Stream_8, GlobalVarNameStr_35);
            }
            break;
        }
        break;
    }
    goto tscc_end;
  }
top_of_proc_2:;
  {
    MR_Word Info_6 = tscc_proc_2_input_1_Info_6;
    MR_Word Rval_7 = tscc_proc_2_input_2_Rval_7;
    MR_Word Stream_8 = tscc_proc_2_input_3_Stream_8;
    MR_bool succeeded;

    switch (MR_tag((MR_Word) Rval_7)) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        {
          mercury__require__unexpected_2_p_0((MR_String) "predicate \140ml_backend.mlds_to_cs_data.output_rval_for_csharp\'/5", (MR_String) "ml_scalar_common");
          return;
        }
        break;
      case (MR_Integer) 1:
        {
          MR_Word ScalarCommon_22 = (MR_Word) (MR_body((MR_Word) (Rval_7), (MR_Integer) 1));
          MR_Word ModuleName_23 = ((MR_Word) ((MR_hl_field(0, ScalarCommon_22, (MR_Integer) 0))));
          MR_Integer TypeNum_25;
          MR_Integer RowNum_26 = ((MR_Integer) ((MR_hl_field(0, ScalarCommon_22, (MR_Integer) 3))));
          MR_Word ModuleSymName_27;
          MR_String MangledModuleName_28;
          MR_Word Var_57 = ((MR_Word) ((MR_hl_field(0, ScalarCommon_22, (MR_Integer) 2))));
          MR_String Var_115;
          MR_String Var_125;

          TypeNum_25 = (MR_Integer) (Var_57);
          ModuleSymName_27 = ml_backend__mlds__mlds_module_name_to_sym_name_1_f_0(ModuleName_23);
          MangledModuleName_28 = ml_backend__mlds_to_cs_name__strip_mercury_and_mangle_sym_name_for_csharp_1_f_0(ModuleSymName_27);
          mercury__io__write_string_4_p_0(Stream_8, MangledModuleName_28);
          mercury__io__write_string_4_p_0(Stream_8, (MR_String) ".MR_scalar_common_");
          mercury__string__format__format_signed_int_component_nowidth_noprec_3_p_0((MR_Word) (&ml_backend__mlds_to_cs_data_scalar_common_1[0]), TypeNum_25, &Var_115);
          mercury__io__write_string_4_p_0(Stream_8, Var_115);
          mercury__io__write_string_4_p_0(Stream_8, (MR_String) "[");
          mercury__string__format__format_signed_int_component_nowidth_noprec_3_p_0((MR_Word) (&ml_backend__mlds_to_cs_data_scalar_common_1[0]), RowNum_26, &Var_125);
          mercury__io__write_string_4_p_0(Stream_8, Var_125);
          mercury__io__write_string_4_p_0(Stream_8, (MR_String) "]");
        }
        break;
      case (MR_Integer) 2:
        {
          MR_Word Lval_10 = ((MR_Word) ((MR_hl_field(2, Rval_7, (MR_Integer) 0))));
          MR_Word next_value_of_tscc_proc_1_input_1_Info_6 = Info_6;
          MR_Word next_value_of_tscc_proc_1_input_2_Lval_7 = Lval_10;
          MR_Word next_value_of_tscc_proc_1_input_3_Stream_8 = Stream_8;

          // direct tailcall eliminated
          ;
          tscc_proc_1_input_1_Info_6 = next_value_of_tscc_proc_1_input_1_Info_6;
          tscc_proc_1_input_2_Lval_7 = next_value_of_tscc_proc_1_input_2_Lval_7;
          tscc_proc_1_input_3_Stream_8 = next_value_of_tscc_proc_1_input_3_Stream_8;
          goto top_of_proc_1;
        }
        break;
      case (MR_Integer) 3:
        switch (((MR_Integer) ((MR_hl_field(3, Rval_7, (MR_Integer) 0))))) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
            {
              mercury__require__unexpected_2_p_0((MR_String) "predicate \140ml_backend.mlds_to_cs_data.output_rval_for_csharp\'/5", (MR_String) "tags not supported in C#");
              return;
            }
            break;
          case (MR_Integer) 1:
            {
              MR_Word Const_13 = ((MR_Word) ((MR_hl_field(3, Rval_7, (MR_Integer) 1))));
              MR_Word next_value_of_tscc_proc_5_input_1_Info_6 = Info_6;
              MR_Word next_value_of_tscc_proc_5_input_2_Stream_7 = Stream_8;
              MR_Word next_value_of_tscc_proc_5_input_3_Const_8 = Const_13;

              // direct tailcall eliminated
              ;
              tscc_proc_5_input_1_Info_6 = next_value_of_tscc_proc_5_input_1_Info_6;
              tscc_proc_5_input_2_Stream_7 = next_value_of_tscc_proc_5_input_2_Stream_7;
              tscc_proc_5_input_3_Const_8 = next_value_of_tscc_proc_5_input_3_Const_8;
              goto top_of_proc_5;
            }
            break;
          case (MR_Integer) 2:
            {
              MR_Word Type_80 = ((MR_Word) ((MR_hl_field(3, Rval_7, (MR_Integer) 1))));
              MR_Word SubRval_81 = ((MR_Word) ((MR_hl_field(3, Rval_7, (MR_Integer) 2))));
              MR_Word Var_42;
              MR_Word Var_89;

              succeeded = ((((MR_tag((MR_Word) Type_80)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(3, Type_80, (MR_Integer) 0)))) == (MR_Integer) 3)));
              if (succeeded)
              {
                Var_42 = ((MR_Word) ((MR_hl_field(3, Type_80, (MR_Integer) 1))));
                Var_89 = parse_tree__builtin_lib_types__comparison_result_type_0_f_0();
                succeeded = parse_tree__prog_data____Unify____mer_type_0_0(Var_42, Var_89);
              }
              if (succeeded)
              {
                mercury__io__write_string_4_p_0(Stream_8, (MR_String) "builtin.comparison_result_object[(int) ");
                ml_backend__mlds_to_cs_data__output_rval_for_csharp_5_p_0(Info_6, SubRval_81, Stream_8);
                mercury__io__write_string_4_p_0(Stream_8, (MR_String) "]");
              }
              else
              {
                MR_Word next_value_of_tscc_proc_6_input_1_Info_7 = Info_6;
                MR_Word next_value_of_tscc_proc_6_input_2_Expr_9 = SubRval_81;
                MR_Word next_value_of_tscc_proc_6_input_3_Stream_10 = Stream_8;

                // direct tailcall eliminated
                ;
                tscc_proc_6_input_1_Info_7 = next_value_of_tscc_proc_6_input_1_Info_7;
                tscc_proc_6_input_2_Expr_9 = next_value_of_tscc_proc_6_input_2_Expr_9;
                tscc_proc_6_input_3_Stream_10 = next_value_of_tscc_proc_6_input_3_Stream_10;
                goto top_of_proc_6;
              }
            }
            break;
          case (MR_Integer) 3:
            {
              MR_Word Type_82 = ((MR_Word) ((MR_hl_field(3, Rval_7, (MR_Integer) 1))));
              MR_Word SubRval_83 = ((MR_Word) ((MR_hl_field(3, Rval_7, (MR_Integer) 2))));

              ml_backend__mlds_to_cs_data__output_unboxed_rval_for_csharp_6_p_0(Info_6, Type_82, SubRval_83, Stream_8);
            }
            break;
          case (MR_Integer) 4:
            {
              MR_Word Type_14 = ((MR_Word) ((MR_hl_field(3, Rval_7, (MR_Integer) 1))));
              MR_Word SubRval_15 = ((MR_Word) ((MR_hl_field(3, Rval_7, (MR_Integer) 2))));
              MR_Word next_value_of_tscc_proc_4_input_1_Info_7 = Info_6;
              MR_Word next_value_of_tscc_proc_4_input_2_Type_8 = Type_14;
              MR_Word next_value_of_tscc_proc_4_input_3_Expr_9 = SubRval_15;
              MR_Word next_value_of_tscc_proc_4_input_4_Stream_10 = Stream_8;

              // direct tailcall eliminated
              ;
              tscc_proc_4_input_1_Info_7 = next_value_of_tscc_proc_4_input_1_Info_7;
              tscc_proc_4_input_2_Type_8 = next_value_of_tscc_proc_4_input_2_Type_8;
              tscc_proc_4_input_3_Expr_9 = next_value_of_tscc_proc_4_input_3_Expr_9;
              tscc_proc_4_input_4_Stream_10 = next_value_of_tscc_proc_4_input_4_Stream_10;
              goto top_of_proc_4;
            }
            break;
          case (MR_Integer) 5:
            {
              MR_Word Unop_17 = ((MR_Word) ((MR_hl_field(3, Rval_7, (MR_Integer) 1))));
              MR_Word SubRval_84 = ((MR_Word) ((MR_hl_field(3, Rval_7, (MR_Integer) 2))));

              ml_backend__mlds_to_cs_data__output_unop_for_csharp_6_p_0(Info_6, Stream_8, Unop_17, SubRval_84);
            }
            break;
          case (MR_Integer) 6:
            {
              MR_Word Op_18 = ((MR_Word) ((MR_hl_field(3, Rval_7, (MR_Integer) 1))));
              MR_Word SubRvalA_19 = ((MR_Word) ((MR_hl_field(3, Rval_7, (MR_Integer) 2))));
              MR_Word SubRvalB_20 = ((MR_Word) ((MR_hl_field(3, Rval_7, (MR_Integer) 3))));

              ml_backend__mlds_to_cs_data__output_binop_for_csharp_7_p_0(Info_6, Stream_8, Op_18, SubRvalA_19, SubRvalB_20);
            }
            break;
          case (MR_Integer) 7:
            {
              MR_Word Lval_85 = ((MR_Word) ((MR_hl_field(3, Rval_7, (MR_Integer) 1))));
              MR_Word next_value_of_tscc_proc_1_input_1_Info_6;
              MR_Word next_value_of_tscc_proc_1_input_2_Lval_7;
              MR_Word next_value_of_tscc_proc_1_input_3_Stream_8;

              mercury__io__write_string_4_p_0(Stream_8, (MR_String) "out ");
              // direct tailcall eliminated
              ;
              next_value_of_tscc_proc_1_input_1_Info_6 = Info_6;
              next_value_of_tscc_proc_1_input_2_Lval_7 = Lval_85;
              next_value_of_tscc_proc_1_input_3_Stream_8 = Stream_8;
              tscc_proc_1_input_1_Info_6 = next_value_of_tscc_proc_1_input_1_Info_6;
              tscc_proc_1_input_2_Lval_7 = next_value_of_tscc_proc_1_input_2_Lval_7;
              tscc_proc_1_input_3_Stream_8 = next_value_of_tscc_proc_1_input_3_Stream_8;
              goto top_of_proc_1;
            }
            break;
          case (MR_Integer) 8:
            {
              MR_Word VectorCommon_29 = ((MR_Word) ((MR_hl_field(3, Rval_7, (MR_Integer) 1))));
              MR_Word RowRval_30 = ((MR_Word) ((MR_hl_field(3, Rval_7, (MR_Integer) 2))));
              MR_Integer StartRowNum_32 = ((MR_Integer) ((MR_hl_field(0, VectorCommon_29, (MR_Integer) 3))));
              MR_Word Var_67 = ((MR_Word) ((MR_hl_field(0, VectorCommon_29, (MR_Integer) 2))));
              MR_Integer TypeNum_88 = (MR_Integer) (Var_67);
              MR_String Var_93;
              MR_String Var_103;

              mercury__io__write_string_4_p_0(Stream_8, (MR_String) "MR_vector_common_");
              mercury__string__format__format_signed_int_component_nowidth_noprec_3_p_0((MR_Word) (&ml_backend__mlds_to_cs_data_scalar_common_1[0]), TypeNum_88, &Var_93);
              mercury__io__write_string_4_p_0(Stream_8, Var_93);
              mercury__io__write_string_4_p_0(Stream_8, (MR_String) "[");
              mercury__string__format__format_signed_int_component_nowidth_noprec_3_p_0((MR_Word) (&ml_backend__mlds_to_cs_data_scalar_common_1[0]), StartRowNum_32, &Var_103);
              mercury__io__write_string_4_p_0(Stream_8, Var_103);
              mercury__io__write_string_4_p_0(Stream_8, (MR_String) " + ");
              ml_backend__mlds_to_cs_data__output_rval_for_csharp_5_p_0(Info_6, RowRval_30, Stream_8);
              mercury__io__write_string_4_p_0(Stream_8, (MR_String) "]");
            }
            break;
          case (MR_Integer) 9:
            mercury__io__write_string_4_p_0(Stream_8, (MR_String) "this");
            break;
        }
        break;
    }
    goto tscc_end;
  }
top_of_proc_3:;
  {
    MR_Word Info_6 = tscc_proc_3_input_1_Info_6;
    MR_Word Rval_7 = tscc_proc_3_input_2_Rval_7;
    MR_Word Stream_8 = tscc_proc_3_input_3_Stream_8;
    MR_bool succeeded;

    if (((MR_tag((MR_Word) Rval_7)) == (MR_Integer) 2))
    {
      MR_Word Var_25 = ((MR_Word) ((MR_hl_field(2, Rval_7, (MR_Integer) 0))));

      if (((((MR_tag((MR_Word) Var_25)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(3, Var_25, (MR_Integer) 0)))) == (MR_Integer) 1))))
        succeeded = MR_TRUE;
      else
      if (((((MR_tag((MR_Word) Var_25)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(3, Var_25, (MR_Integer) 0)))) == (MR_Integer) 0))))
        succeeded = MR_TRUE;
      else
        succeeded = MR_FALSE;
    }
    else
    if (((((MR_tag((MR_Word) Rval_7)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(3, Rval_7, (MR_Integer) 0)))) == (MR_Integer) 1))))
    {
      MR_Word Var_19 = ((MR_Word) ((MR_hl_field(3, Rval_7, (MR_Integer) 1))));

      succeeded = ((MR_tag((MR_Word) Var_19)) == (MR_Integer) 1);
      if (succeeded)
      {
      }
    }
    else
      succeeded = MR_FALSE;
    if (succeeded)
    {
      MR_Word next_value_of_tscc_proc_2_input_1_Info_6 = Info_6;
      MR_Word next_value_of_tscc_proc_2_input_2_Rval_7 = Rval_7;
      MR_Word next_value_of_tscc_proc_2_input_3_Stream_8 = Stream_8;

      // direct tailcall eliminated
      ;
      tscc_proc_2_input_1_Info_6 = next_value_of_tscc_proc_2_input_1_Info_6;
      tscc_proc_2_input_2_Rval_7 = next_value_of_tscc_proc_2_input_2_Rval_7;
      tscc_proc_2_input_3_Stream_8 = next_value_of_tscc_proc_2_input_3_Stream_8;
      goto top_of_proc_2;
    }
    else
    {
      mercury__io__write_char_4_p_0(Stream_8, (MR_Char) 40);
      ml_backend__mlds_to_cs_data__output_rval_for_csharp_5_p_0(Info_6, Rval_7, Stream_8);
      mercury__io__write_char_4_p_0(Stream_8, (MR_Char) 41);
    }
    goto tscc_end;
  }
top_of_proc_4:;
  {
    MR_Word Info_7 = tscc_proc_4_input_1_Info_7;
    MR_Word Type_8 = tscc_proc_4_input_2_Type_8;
    MR_Word Expr_9 = tscc_proc_4_input_3_Expr_9;
    MR_Word Stream_10 = tscc_proc_4_input_4_Stream_10;
    MR_bool succeeded = (Type_8 == (MR_Word) ((MR_Unsigned) 32U));
    MR_Integer N_12;
    MR_Word Var_16;

    if (succeeded)
    {
      succeeded = ((((MR_tag((MR_Word) Expr_9)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(3, Expr_9, (MR_Integer) 0)))) == (MR_Integer) 1)));
      if (succeeded)
      {
        Var_16 = ((MR_Word) ((MR_hl_field(3, Expr_9, (MR_Integer) 1))));
        succeeded = ((MR_tag((MR_Word) Var_16)) == (MR_Integer) 2);
        if (succeeded)
          N_12 = ((MR_Integer) ((MR_hl_field(2, Var_16, (MR_Integer) 0))));
      }
    }
    if (succeeded)
    {
      MR_Integer Var_47;

      ml_backend__mlds_to_cs_util__maybe_output_inline_comment_for_csharp_5_p_0(Info_7, Stream_10, (MR_String) "cast");
      succeeded = (N_12 >= (MR_Integer) 1);
      if (succeeded)
      {
        Var_47 = (MR_Integer) 5;
        succeeded = (N_12 <= Var_47);
      }
      if (succeeded)
      {
        mercury__io__write_string_4_p_0(Stream_10, (MR_String) "runtime.PseudoTypeInfo.K");
        mercury__io__write_int_4_p_0(Stream_10, N_12);
      }
      else
      {
        mercury__io__write_string_4_p_0(Stream_10, (MR_String) "new runtime.PseudoTypeInfo(");
        ml_backend__mlds_to_cs_data__output_rval_for_csharp_5_p_0(Info_7, Expr_9, Stream_10);
        mercury__io__write_string_4_p_0(Stream_10, (MR_String) ")");
      }
    }
    else
    {
      if ((Type_8 == (MR_Word) ((MR_Unsigned) 28U)))
        succeeded = MR_TRUE;
      else
      if (((((MR_tag((MR_Word) Type_8)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(3, Type_8, (MR_Integer) 0)))) == (MR_Integer) 3))))
      {
        MR_Word Var_27 = ((MR_Word) ((MR_hl_field(3, Type_8, (MR_Integer) 2))));
        MR_Word Var_28;

        succeeded = ((((MR_tag((MR_Word) Var_27)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(3, Var_27, (MR_Integer) 0)))) == (MR_Integer) 0)));
        if (succeeded)
        {
          Var_28 = ((MR_Unsigned) ((MR_hl_field(3, Var_27, (MR_Integer) 1))) & (MR_Integer) 3);
          succeeded = (Var_28 == (MR_Integer) 0);
        }
      }
      else
        succeeded = MR_FALSE;
      if (succeeded)
      {
        ml_backend__mlds_to_cs_util__maybe_output_inline_comment_for_csharp_5_p_0(Info_7, Stream_10, (MR_String) "cast");
        mercury__io__write_string_4_p_0(Stream_10, (MR_String) "runtime.TypeInfo_Struct.maybe_new(");
        ml_backend__mlds_to_cs_data__output_rval_for_csharp_5_p_0(Info_7, Expr_9, Stream_10);
        mercury__io__write_string_4_p_0(Stream_10, (MR_String) ")");
      }
      else
      {
        MR_String Var_40;
        MR_Word next_value_of_tscc_proc_2_input_1_Info_6;
        MR_Word next_value_of_tscc_proc_2_input_2_Rval_7;
        MR_Word next_value_of_tscc_proc_2_input_3_Stream_8;

        Var_40 = ml_backend__mlds_to_cs_type__type_to_string_for_csharp_2_f_0(Info_7, Type_8);
        mercury__io__write_string_4_p_0(Stream_10, (MR_String) "(");
        mercury__io__write_string_4_p_0(Stream_10, Var_40);
        mercury__io__write_string_4_p_0(Stream_10, (MR_String) ") ");
        // direct tailcall eliminated
        ;
        next_value_of_tscc_proc_2_input_1_Info_6 = Info_7;
        next_value_of_tscc_proc_2_input_2_Rval_7 = Expr_9;
        next_value_of_tscc_proc_2_input_3_Stream_8 = Stream_10;
        tscc_proc_2_input_1_Info_6 = next_value_of_tscc_proc_2_input_1_Info_6;
        tscc_proc_2_input_2_Rval_7 = next_value_of_tscc_proc_2_input_2_Rval_7;
        tscc_proc_2_input_3_Stream_8 = next_value_of_tscc_proc_2_input_3_Stream_8;
        goto top_of_proc_2;
      }
    }
    goto tscc_end;
  }
top_of_proc_5:;
  {
    MR_Word Info_6 = tscc_proc_5_input_1_Info_6;
    MR_Word Stream_7 = tscc_proc_5_input_2_Stream_7;
    MR_Word Const_8 = tscc_proc_5_input_3_Const_8;
    MR_bool succeeded;

    switch (MR_tag((MR_Word) Const_8)) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        switch (MR_unmkbody(Const_8)) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
            mercury__io__write_string_4_p_0(Stream_7, (MR_String) "true");
            break;
          case (MR_Integer) 1:
            mercury__io__write_string_4_p_0(Stream_7, (MR_String) "false");
            break;
        }
        break;
      case (MR_Integer) 1:
        {
          MR_Word CodeAddr_20 = (MR_Word) (MR_body((MR_Word) (Const_8), (MR_Integer) 1));
          MR_String Name_21;
          MR_Word Var_73 = ((MR_Word) ((MR_hl_field(0, Info_6, (MR_Integer) 4))));
          MR_Box conv0_Name_21;

          mercury__map__lookup_3_p_0((MR_Word) (&ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_code_addr_0), (MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), Var_73, ((MR_Box) (CodeAddr_20)), &conv0_Name_21);
          Name_21 = ((MR_String) (conv0_Name_21));
          mercury__io__write_string_4_p_0(Stream_7, Name_21);
        }
        break;
      case (MR_Integer) 2:
        {
          MR_Integer N_10 = ((MR_Integer) ((MR_hl_field(2, Const_8, (MR_Integer) 0))));

          ml_backend__mlds_to_cs_data__output_int_const_for_csharp_4_p_0(Stream_7, N_10);
        }
        break;
      case (MR_Integer) 3:
        switch (((MR_Integer) ((MR_hl_field(3, Const_8, (MR_Integer) 0))))) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
            {
              MR_Unsigned N_95 = ((MR_Unsigned) ((MR_hl_field(3, Const_8, (MR_Integer) 1))));

              mercury__io__write_uint_4_p_0(Stream_7, N_95);
              mercury__io__write_string_4_p_0(Stream_7, (MR_String) "U");
            }
            break;
          case (MR_Integer) 1:
            {
              int8_t N_96 = ((int8_t) (MR_Word) (MR_hl_field(3, Const_8, (MR_Integer) 1)));

              mercury__io__write_string_4_p_0(Stream_7, (MR_String) "(sbyte) ");
              mercury__io__write_int8_4_p_0(Stream_7, N_96);
            }
            break;
          case (MR_Integer) 2:
            {
              uint8_t N_97 = ((uint8_t) (MR_Word) (MR_hl_field(3, Const_8, (MR_Integer) 1)));

              ml_backend__mlds_to_cs_data__output_uint8_const_for_csharp_4_p_0(Stream_7, N_97);
            }
            break;
          case (MR_Integer) 3:
            {
              int16_t N_98 = ((int16_t) (MR_Word) (MR_hl_field(3, Const_8, (MR_Integer) 1)));

              mercury__io__write_string_4_p_0(Stream_7, (MR_String) "(short) ");
              mercury__io__write_int16_4_p_0(Stream_7, N_98);
            }
            break;
          case (MR_Integer) 4:
            {
              uint16_t N_99 = ((uint16_t) (MR_Word) (MR_hl_field(3, Const_8, (MR_Integer) 1)));

              mercury__io__write_string_4_p_0(Stream_7, (MR_String) "(ushort) ");
              mercury__io__write_uint16_4_p_0(Stream_7, N_99);
            }
            break;
          case (MR_Integer) 5:
            {
              int32_t N_100 = ((int32_t) (MR_Word) (MR_hl_field(3, Const_8, (MR_Integer) 1)));

              mercury__io__write_int32_4_p_0(Stream_7, N_100);
            }
            break;
          case (MR_Integer) 6:
            {
              uint32_t N_101 = ((uint32_t) (MR_Word) (MR_hl_field(3, Const_8, (MR_Integer) 1)));

              mercury__io__write_uint32_4_p_0(Stream_7, N_101);
              mercury__io__write_string_4_p_0(Stream_7, (MR_String) "U");
            }
            break;
          case (MR_Integer) 7:
            {
              int64_t N_102 = MR_unbox_int64((MR_hl_field(3, Const_8, (MR_Integer) 1)));

              mercury__io__write_int64_4_p_0(Stream_7, N_102);
              mercury__io__write_string_4_p_0(Stream_7, (MR_String) "L");
            }
            break;
          case (MR_Integer) 8:
            {
              uint64_t N_103 = MR_unbox_uint64((MR_hl_field(3, Const_8, (MR_Integer) 1)));

              ml_backend__mlds_to_cs_data__output_uint64_const_for_csharp_4_p_0(Stream_7, N_103);
            }
            break;
          case (MR_Integer) 9:
            {
              MR_Word EnumType_12 = ((MR_Word) ((MR_hl_field(3, Const_8, (MR_Integer) 2))));
              MR_Word Var_53;
              MR_Word Var_55;
              MR_Integer N_104 = ((MR_Integer) ((MR_hl_field(3, Const_8, (MR_Integer) 1))));
              MR_Word next_value_of_tscc_proc_4_input_1_Info_7;
              MR_Word next_value_of_tscc_proc_4_input_2_Type_8;
              MR_Word next_value_of_tscc_proc_4_input_3_Expr_9;
              MR_Word next_value_of_tscc_proc_4_input_4_Stream_10;

              {
                Var_55 = (MR_Word) MR_mkword(2, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(2, Var_55, 0) = ((MR_Box) (N_104));
              }
              {
                Var_53 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(3, Var_53, 0) = ((MR_Box) ((MR_Unsigned) 1U));
                MR_hl_field(3, Var_53, 1) = ((MR_Box) (Var_55));
              }
              // direct tailcall eliminated
              ;
              next_value_of_tscc_proc_4_input_1_Info_7 = Info_6;
              next_value_of_tscc_proc_4_input_2_Type_8 = EnumType_12;
              next_value_of_tscc_proc_4_input_3_Expr_9 = Var_53;
              next_value_of_tscc_proc_4_input_4_Stream_10 = Stream_7;
              tscc_proc_4_input_1_Info_7 = next_value_of_tscc_proc_4_input_1_Info_7;
              tscc_proc_4_input_2_Type_8 = next_value_of_tscc_proc_4_input_2_Type_8;
              tscc_proc_4_input_3_Expr_9 = next_value_of_tscc_proc_4_input_3_Expr_9;
              tscc_proc_4_input_4_Stream_10 = next_value_of_tscc_proc_4_input_4_Stream_10;
              goto top_of_proc_4;
            }
            break;
          case (MR_Integer) 10:
            {
              MR_Integer C_11 = ((MR_Integer) ((MR_hl_field(3, Const_8, (MR_Integer) 1))));

              mercury__io__write_string_4_p_0(Stream_7, (MR_String) "( ");
              ml_backend__mlds_to_cs_data__output_int_const_for_csharp_4_p_0(Stream_7, C_11);
              mercury__io__write_string_4_p_0(Stream_7, (MR_String) ")");
            }
            break;
          case (MR_Integer) 11:
            {
              MR_Float FloatVal_16 = MR_unbox_float((MR_hl_field(3, Const_8, (MR_Integer) 1)));

              backend_libs__c_util__output_float_literal_4_p_0(Stream_7, FloatVal_16);
            }
            break;
          case (MR_Integer) 12:
            {
              MR_String String_17 = ((MR_String) ((MR_hl_field(3, Const_8, (MR_Integer) 1))));

              backend_libs__c_util__output_quoted_string_csharp_4_p_0(Stream_7, String_17);
            }
            break;
          case (MR_Integer) 13:
            {
              MR_Word String_105 = ((MR_Word) ((MR_hl_field(3, Const_8, (MR_Integer) 1))));

              backend_libs__c_util__output_quoted_multi_string_csharp_4_p_0(Stream_7, String_105);
            }
            break;
          case (MR_Integer) 14:
            {
              MR_Word Lang_13 = ((MR_Unsigned) ((MR_hl_field(3, Const_8, (MR_Integer) 1))) & (MR_Integer) 3);
              MR_String Value_14 = ((MR_String) ((MR_hl_field(3, Const_8, (MR_Integer) 2))));
              MR_Word Type_15 = ((MR_Word) ((MR_hl_field(3, Const_8, (MR_Integer) 3))));
              MR_Word Var_56;
              MR_String Var_64;

              {
                Var_56 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
                MR_hl_field(0, Var_56, 0) = ((MR_Box) (&ml_backend__mlds_to_cs_data_scalar_common_3[0]));
                MR_hl_field(0, Var_56, 1) = ((MR_Box) (ml_backend__mlds_to_cs_data__output_rval_const_for_csharp_5_p_0_1));
                MR_hl_field(0, Var_56, 2) = ((MR_Box) ((MR_Integer) 2));
                MR_hl_field(0, Var_56, 3) = ((MR_Box) (Lang_13));
                MR_hl_field(0, Var_56, 4) = ((MR_Box) ((MR_Integer) 1));
              }
              mercury__require__expect_3_p_0(Var_56, (MR_String) "predicate \140ml_backend.mlds_to_cs_data.output_rval_const_for_csharp\'/5", (MR_String) "language other than C#.");
              Var_64 = ml_backend__mlds_to_cs_type__type_to_string_for_csharp_2_f_0(Info_6, Type_15);
              mercury__io__write_string_4_p_0(Stream_7, (MR_String) "(");
              mercury__io__write_string_4_p_0(Stream_7, Var_64);
              mercury__io__write_string_4_p_0(Stream_7, (MR_String) ") ");
              mercury__io__write_string_4_p_0(Stream_7, Value_14);
            }
            break;
          case (MR_Integer) 15:
            {
              MR_Word TargetPrefixes_18 = ((MR_Word) ((MR_hl_field(3, Const_8, (MR_Integer) 1))));
              MR_String NamedConst_19 = ((MR_String) ((MR_hl_field(3, Const_8, (MR_Integer) 2))));
              MR_String Var_70 = ((MR_String) ((MR_hl_field(0, TargetPrefixes_18, (MR_Integer) 1))));

              mercury__io__write_string_4_p_0(Stream_7, Var_70);
              mercury__io__write_string_4_p_0(Stream_7, NamedConst_19);
            }
            break;
          case (MR_Integer) 16:
            {
              MR_Word VarName_22 = ((MR_Word) ((MR_hl_field(3, Const_8, (MR_Integer) 1))));
              MR_String VarNameStr_23;

              VarNameStr_23 = ml_backend__mlds_to_cs_name__local_var_name_to_ll_string_for_csharp_1_f_0(VarName_22);
              mercury__io__write_string_4_p_0(Stream_7, VarNameStr_23);
            }
            break;
          case (MR_Integer) 17:
            {
              MR_Word ModuleName_24 = ((MR_Word) ((MR_hl_field(3, Const_8, (MR_Integer) 1))));
              MR_String MangledModuleName_25;
              MR_Word Var_76;
              MR_Word VarName_106 = ((MR_Word) ((MR_hl_field(3, Const_8, (MR_Integer) 2))));
              MR_String VarNameStr_107;

              Var_76 = ml_backend__mlds__mlds_module_name_to_sym_name_1_f_0(ModuleName_24);
              MangledModuleName_25 = ml_backend__mlds_to_cs_name__strip_mercury_and_mangle_sym_name_for_csharp_1_f_0(Var_76);
              VarNameStr_107 = ml_backend__mlds_to_cs_name__global_var_name_to_ll_string_for_csharp_1_f_0(VarName_106);
              mercury__io__write_string_4_p_0(Stream_7, MangledModuleName_25);
              mercury__io__write_string_4_p_0(Stream_7, (MR_String) ".");
              mercury__io__write_string_4_p_0(Stream_7, VarNameStr_107);
            }
            break;
          case (MR_Integer) 18:
            {
              MR_Word RttiId_26 = ((MR_Word) ((MR_hl_field(3, Const_8, (MR_Integer) 2))));
              MR_String RttiAddrName0_27;
              MR_String RttiAddrName_28;
              MR_Word Var_84;
              MR_Word ModuleName_108 = ((MR_Word) ((MR_hl_field(3, Const_8, (MR_Integer) 1))));
              MR_String MangledModuleName_109;

              Var_84 = ml_backend__mlds__mlds_module_name_to_sym_name_1_f_0(ModuleName_108);
              MangledModuleName_109 = ml_backend__mlds_to_cs_name__strip_mercury_and_mangle_sym_name_for_csharp_1_f_0(Var_84);
              backend_libs__rtti__id_to_c_identifier_2_p_0(RttiId_26, &RttiAddrName0_27);
              RttiAddrName_28 = ml_backend__mlds_to_cs_name__limit_identifier_length_1_f_0(RttiAddrName0_27);
              mercury__io__write_string_4_p_0(Stream_7, MangledModuleName_109);
              mercury__io__write_string_4_p_0(Stream_7, (MR_String) ".");
              mercury__io__write_string_4_p_0(Stream_7, RttiAddrName_28);
            }
            break;
          case (MR_Integer) 19:
            {
              mercury__require__unexpected_2_p_0((MR_String) "predicate \140ml_backend.mlds_to_cs_data.output_rval_const_for_csharp\'/5", (MR_String) "NYI: mlconst_data_addr_tabling");
              return;
            }
            break;
          case (MR_Integer) 20:
            {
              MR_String Initializer_31;
              MR_Word Type_110 = ((MR_Word) ((MR_hl_field(3, Const_8, (MR_Integer) 1))));

              Initializer_31 = ml_backend__mlds_to_cs_data__get_default_initializer_for_csharp_2_f_0(Info_6, Type_110);
              mercury__io__write_string_4_p_0(Stream_7, Initializer_31);
            }
            break;
        }
        break;
    }
    goto tscc_end;
  }
top_of_proc_6:;
  {
    MR_Word Info_7 = tscc_proc_6_input_1_Info_7;
    MR_Word Expr_9 = tscc_proc_6_input_2_Expr_9;
    MR_Word Stream_10 = tscc_proc_6_input_3_Stream_10;
    MR_Word next_value_of_tscc_proc_2_input_1_Info_6 = Info_7;
    MR_Word next_value_of_tscc_proc_2_input_2_Rval_7 = Expr_9;
    MR_Word next_value_of_tscc_proc_2_input_3_Stream_8 = Stream_10;

    // direct tailcall eliminated
    ;
    tscc_proc_2_input_1_Info_6 = next_value_of_tscc_proc_2_input_1_Info_6;
    tscc_proc_2_input_2_Rval_7 = next_value_of_tscc_proc_2_input_2_Rval_7;
    tscc_proc_2_input_3_Stream_8 = next_value_of_tscc_proc_2_input_3_Stream_8;
    goto top_of_proc_2;
    goto tscc_end;
  }
tscc_end:;
  return;
}

static void MR_CALL 
ml_backend__mlds_to_cs_data__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_111_117_116_112_117_116_95_98_111_120_101_100_95_114_118_97_108_95_102_111_114_95_99_115_104_97_114_112_95_95_91_50_93_95_48_6_p_0(
  MR_Word tscc_proc_6_input_1_Info_7,
  MR_Word tscc_proc_6_input_2_Expr_9,
  MR_Word tscc_proc_6_input_3_Stream_10)
{
  MR_Word tscc_proc_1_input_1_Info_6;
  MR_Word tscc_proc_1_input_2_Lval_7;
  MR_Word tscc_proc_1_input_3_Stream_8;
  MR_Word tscc_proc_2_input_1_Info_6;
  MR_Word tscc_proc_2_input_2_Rval_7;
  MR_Word tscc_proc_2_input_3_Stream_8;
  MR_Word tscc_proc_3_input_1_Info_6;
  MR_Word tscc_proc_3_input_2_Rval_7;
  MR_Word tscc_proc_3_input_3_Stream_8;
  MR_Word tscc_proc_4_input_1_Info_7;
  MR_Word tscc_proc_4_input_2_Type_8;
  MR_Word tscc_proc_4_input_3_Expr_9;
  MR_Word tscc_proc_4_input_4_Stream_10;
  MR_Word tscc_proc_5_input_1_Info_6;
  MR_Word tscc_proc_5_input_2_Stream_7;
  MR_Word tscc_proc_5_input_3_Const_8;

  // The code for TSCC PROC 6: pred ml_backend.mlds_to_cs_data.UnusedArgs__pred__output_boxed_rval_for_csharp__[2]_0/6-0.
  ;
  // Setup for mutual tailcalls optimized into a loop.
  ;
  // The mutually recursive procedures are:
  ;
  ;
  // proc 1 in TSCC: pred ml_backend.mlds_to_cs_data.output_lval_for_csharp/5-0
  ;
  // proc 2 in TSCC: pred ml_backend.mlds_to_cs_data.output_rval_for_csharp/5-0
  ;
  // proc 3 in TSCC: pred ml_backend.mlds_to_cs_data.output_bracketed_rval_for_csharp/5-0
  ;
  // proc 4 in TSCC: pred ml_backend.mlds_to_cs_data.output_cast_rval_for_csharp/6-0
  ;
  // proc 5 in TSCC: pred ml_backend.mlds_to_cs_data.output_rval_const_for_csharp/5-0
  ;
  // proc 6 in TSCC: pred ml_backend.mlds_to_cs_data.UnusedArgs__pred__output_boxed_rval_for_csharp__[2]_0/6-0
  ;
  ;
  goto top_of_proc_6;
top_of_proc_1:;
  {
    MR_Word Info_6 = tscc_proc_1_input_1_Info_6;
    MR_Word Lval_7 = tscc_proc_1_input_2_Lval_7;
    MR_Word Stream_8 = tscc_proc_1_input_3_Stream_8;
    MR_bool succeeded;

    switch (MR_tag((MR_Word) Lval_7)) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        {
          MR_Word PtrRval_11 = ((MR_Word) ((MR_hl_field(0, Lval_7, (MR_Integer) 1))));
          MR_Word FieldId_13 = ((MR_Word) ((MR_hl_field(0, Lval_7, (MR_Integer) 3))));
          MR_Word FieldType_14 = ((MR_Word) ((MR_hl_field(0, Lval_7, (MR_Integer) 4))));

          if (((MR_tag((MR_Word) FieldId_13)) == (MR_Integer) 1))
          {
            MR_Word QualFieldVarName_19 = ((MR_Word) ((MR_hl_field(1, FieldId_13, (MR_Integer) 0))));
            MR_Word CtorType_20 = ((MR_Word) ((MR_hl_field(1, FieldId_13, (MR_Integer) 1))));
            MR_Word FieldVarName_23 = ((MR_Word) ((MR_hl_field(0, QualFieldVarName_19, (MR_Integer) 2))));
            MR_String FieldVarNameStr_24;

            FieldVarNameStr_24 = ml_backend__mlds_to_cs_name__field_var_name_to_ll_string_for_csharp_1_f_0(FieldVarName_23);
            succeeded = (FieldVarName_23 == (MR_Word) ((MR_Unsigned) 4U));
            if (succeeded)
            {
              if (((MR_tag((MR_Word) PtrRval_11)) == (MR_Integer) 2))
              {
                MR_Word Var_103 = ((MR_Word) ((MR_hl_field(2, PtrRval_11, (MR_Integer) 0))));

                if (((((MR_tag((MR_Word) Var_103)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(3, Var_103, (MR_Integer) 0)))) == (MR_Integer) 1))))
                  succeeded = MR_TRUE;
                else
                if (((((MR_tag((MR_Word) Var_103)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(3, Var_103, (MR_Integer) 0)))) == (MR_Integer) 0))))
                  succeeded = MR_TRUE;
                else
                  succeeded = MR_FALSE;
              }
              else
              if (((((MR_tag((MR_Word) PtrRval_11)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(3, PtrRval_11, (MR_Integer) 0)))) == (MR_Integer) 1))))
              {
                MR_Word Var_98 = ((MR_Word) ((MR_hl_field(3, PtrRval_11, (MR_Integer) 1))));

                succeeded = ((MR_tag((MR_Word) Var_98)) == (MR_Integer) 1);
                if (succeeded)
                {
                }
              }
              else
                succeeded = MR_FALSE;
              if (succeeded)
                ml_backend__mlds_to_cs_data__output_rval_for_csharp_5_p_0(Info_6, PtrRval_11, Stream_8);
              else
              {
                mercury__io__write_char_4_p_0(Stream_8, (MR_Char) 40);
                ml_backend__mlds_to_cs_data__output_rval_for_csharp_5_p_0(Info_6, PtrRval_11, Stream_8);
                mercury__io__write_char_4_p_0(Stream_8, (MR_Char) 41);
              }
              mercury__io__write_string_4_p_0(Stream_8, (MR_String) ".");
              mercury__io__write_string_4_p_0(Stream_8, FieldVarNameStr_24);
            }
            else
            {
              succeeded = ((((MR_tag((MR_Word) PtrRval_11)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(3, PtrRval_11, (MR_Integer) 0)))) == (MR_Integer) 9)));
              if (succeeded)
              {
                ml_backend__mlds_to_cs_data__output_rval_for_csharp_5_p_0(Info_6, PtrRval_11, Stream_8);
                mercury__io__write_string_4_p_0(Stream_8, (MR_String) ".");
                mercury__io__write_string_4_p_0(Stream_8, FieldVarNameStr_24);
              }
              else
              {
                MR_String Var_65;

                Var_65 = ml_backend__mlds_to_cs_type__type_to_string_for_csharp_2_f_0(Info_6, CtorType_20);
                mercury__io__write_string_4_p_0(Stream_8, (MR_String) "((");
                mercury__io__write_string_4_p_0(Stream_8, Var_65);
                mercury__io__write_string_4_p_0(Stream_8, (MR_String) ") ");
                ml_backend__mlds_to_cs_data__output_bracketed_rval_for_csharp_5_p_0(Info_6, PtrRval_11, Stream_8);
                mercury__io__write_string_4_p_0(Stream_8, (MR_String) ").");
                mercury__io__write_string_4_p_0(Stream_8, FieldVarNameStr_24);
              }
            }
          }
          else
          {
            MR_Word OffsetRval_15 = ((MR_Word) ((MR_hl_field(0, FieldId_13, (MR_Integer) 0))));

            if ((FieldType_14 == (MR_Word) ((MR_Unsigned) 20U)))
              succeeded = MR_TRUE;
            else
            if (((((MR_tag((MR_Word) FieldType_14)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(3, FieldType_14, (MR_Integer) 0)))) == (MR_Integer) 3))))
            {
              MR_Word Var_38 = ((MR_Word) ((MR_hl_field(3, FieldType_14, (MR_Integer) 1))));

              succeeded = ((MR_tag((MR_Word) Var_38)) == (MR_Integer) 0);
              if (succeeded)
              {
              }
            }
            else
              succeeded = MR_FALSE;
            if (!(succeeded))
              {
                mercury__require__unexpected_2_p_0((MR_String) "predicate \140ml_backend.mlds_to_cs_data.output_lval_for_csharp\'/5", (MR_String) "unexpected field type");
                return;
              }
            mercury__io__write_string_4_p_0(Stream_8, (MR_String) "((object[]) ");
            ml_backend__mlds_to_cs_data__output_rval_for_csharp_5_p_0(Info_6, PtrRval_11, Stream_8);
            mercury__io__write_string_4_p_0(Stream_8, (MR_String) ")[");
            ml_backend__mlds_to_cs_data__output_rval_for_csharp_5_p_0(Info_6, OffsetRval_15, Stream_8);
            mercury__io__write_string_4_p_0(Stream_8, (MR_String) "]");
          }
        }
        break;
      case (MR_Integer) 1:
        {
          MR_Word Rval_26 = ((MR_Word) ((MR_hl_field(1, Lval_7, (MR_Integer) 0))));
          MR_Word next_value_of_tscc_proc_3_input_1_Info_6 = Info_6;
          MR_Word next_value_of_tscc_proc_3_input_2_Rval_7 = Rval_26;
          MR_Word next_value_of_tscc_proc_3_input_3_Stream_8 = Stream_8;

          // direct tailcall eliminated
          ;
          tscc_proc_3_input_1_Info_6 = next_value_of_tscc_proc_3_input_1_Info_6;
          tscc_proc_3_input_2_Rval_7 = next_value_of_tscc_proc_3_input_2_Rval_7;
          tscc_proc_3_input_3_Stream_8 = next_value_of_tscc_proc_3_input_3_Stream_8;
          goto top_of_proc_3;
        }
        break;
      case (MR_Integer) 2:
        {
          MR_Word GlobalVarRef_28 = ((MR_Word) ((MR_hl_field(2, Lval_7, (MR_Integer) 0))));
          MR_String EnvVarName_29 = (MR_String) (GlobalVarRef_28);

          mercury__io__write_string_4_p_0(Stream_8, (MR_String) "mercury_envvar_");
          mercury__io__write_string_4_p_0(Stream_8, EnvVarName_29);
        }
        break;
      case (MR_Integer) 3:
        switch (((MR_Integer) ((MR_hl_field(3, Lval_7, (MR_Integer) 0))))) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
            {
              MR_Word LocalVarName_30 = ((MR_Word) ((MR_hl_field(3, Lval_7, (MR_Integer) 1))));
              MR_String LocalVarNameStr_32;

              LocalVarNameStr_32 = ml_backend__mlds_to_cs_name__local_var_name_to_ll_string_for_csharp_1_f_0(LocalVarName_30);
              mercury__io__write_string_4_p_0(Stream_8, LocalVarNameStr_32);
            }
            break;
          case (MR_Integer) 1:
            {
              MR_Word GlobalVarName_33 = ((MR_Word) ((MR_hl_field(3, Lval_7, (MR_Integer) 1))));
              MR_String GlobalVarNameStr_35;

              GlobalVarNameStr_35 = ml_backend__mlds_to_cs_name__maybe_qualified_global_var_name_to_string_for_csharp_2_f_0(Info_6, GlobalVarName_33);
              mercury__io__write_string_4_p_0(Stream_8, GlobalVarNameStr_35);
            }
            break;
        }
        break;
    }
    goto tscc_end;
  }
top_of_proc_2:;
  {
    MR_Word Info_6 = tscc_proc_2_input_1_Info_6;
    MR_Word Rval_7 = tscc_proc_2_input_2_Rval_7;
    MR_Word Stream_8 = tscc_proc_2_input_3_Stream_8;
    MR_bool succeeded;

    switch (MR_tag((MR_Word) Rval_7)) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        {
          mercury__require__unexpected_2_p_0((MR_String) "predicate \140ml_backend.mlds_to_cs_data.output_rval_for_csharp\'/5", (MR_String) "ml_scalar_common");
          return;
        }
        break;
      case (MR_Integer) 1:
        {
          MR_Word ScalarCommon_22 = (MR_Word) (MR_body((MR_Word) (Rval_7), (MR_Integer) 1));
          MR_Word ModuleName_23 = ((MR_Word) ((MR_hl_field(0, ScalarCommon_22, (MR_Integer) 0))));
          MR_Integer TypeNum_25;
          MR_Integer RowNum_26 = ((MR_Integer) ((MR_hl_field(0, ScalarCommon_22, (MR_Integer) 3))));
          MR_Word ModuleSymName_27;
          MR_String MangledModuleName_28;
          MR_Word Var_57 = ((MR_Word) ((MR_hl_field(0, ScalarCommon_22, (MR_Integer) 2))));
          MR_String Var_115;
          MR_String Var_125;

          TypeNum_25 = (MR_Integer) (Var_57);
          ModuleSymName_27 = ml_backend__mlds__mlds_module_name_to_sym_name_1_f_0(ModuleName_23);
          MangledModuleName_28 = ml_backend__mlds_to_cs_name__strip_mercury_and_mangle_sym_name_for_csharp_1_f_0(ModuleSymName_27);
          mercury__io__write_string_4_p_0(Stream_8, MangledModuleName_28);
          mercury__io__write_string_4_p_0(Stream_8, (MR_String) ".MR_scalar_common_");
          mercury__string__format__format_signed_int_component_nowidth_noprec_3_p_0((MR_Word) (&ml_backend__mlds_to_cs_data_scalar_common_1[0]), TypeNum_25, &Var_115);
          mercury__io__write_string_4_p_0(Stream_8, Var_115);
          mercury__io__write_string_4_p_0(Stream_8, (MR_String) "[");
          mercury__string__format__format_signed_int_component_nowidth_noprec_3_p_0((MR_Word) (&ml_backend__mlds_to_cs_data_scalar_common_1[0]), RowNum_26, &Var_125);
          mercury__io__write_string_4_p_0(Stream_8, Var_125);
          mercury__io__write_string_4_p_0(Stream_8, (MR_String) "]");
        }
        break;
      case (MR_Integer) 2:
        {
          MR_Word Lval_10 = ((MR_Word) ((MR_hl_field(2, Rval_7, (MR_Integer) 0))));
          MR_Word next_value_of_tscc_proc_1_input_1_Info_6 = Info_6;
          MR_Word next_value_of_tscc_proc_1_input_2_Lval_7 = Lval_10;
          MR_Word next_value_of_tscc_proc_1_input_3_Stream_8 = Stream_8;

          // direct tailcall eliminated
          ;
          tscc_proc_1_input_1_Info_6 = next_value_of_tscc_proc_1_input_1_Info_6;
          tscc_proc_1_input_2_Lval_7 = next_value_of_tscc_proc_1_input_2_Lval_7;
          tscc_proc_1_input_3_Stream_8 = next_value_of_tscc_proc_1_input_3_Stream_8;
          goto top_of_proc_1;
        }
        break;
      case (MR_Integer) 3:
        switch (((MR_Integer) ((MR_hl_field(3, Rval_7, (MR_Integer) 0))))) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
            {
              mercury__require__unexpected_2_p_0((MR_String) "predicate \140ml_backend.mlds_to_cs_data.output_rval_for_csharp\'/5", (MR_String) "tags not supported in C#");
              return;
            }
            break;
          case (MR_Integer) 1:
            {
              MR_Word Const_13 = ((MR_Word) ((MR_hl_field(3, Rval_7, (MR_Integer) 1))));
              MR_Word next_value_of_tscc_proc_5_input_1_Info_6 = Info_6;
              MR_Word next_value_of_tscc_proc_5_input_2_Stream_7 = Stream_8;
              MR_Word next_value_of_tscc_proc_5_input_3_Const_8 = Const_13;

              // direct tailcall eliminated
              ;
              tscc_proc_5_input_1_Info_6 = next_value_of_tscc_proc_5_input_1_Info_6;
              tscc_proc_5_input_2_Stream_7 = next_value_of_tscc_proc_5_input_2_Stream_7;
              tscc_proc_5_input_3_Const_8 = next_value_of_tscc_proc_5_input_3_Const_8;
              goto top_of_proc_5;
            }
            break;
          case (MR_Integer) 2:
            {
              MR_Word Type_80 = ((MR_Word) ((MR_hl_field(3, Rval_7, (MR_Integer) 1))));
              MR_Word SubRval_81 = ((MR_Word) ((MR_hl_field(3, Rval_7, (MR_Integer) 2))));
              MR_Word Var_42;
              MR_Word Var_89;

              succeeded = ((((MR_tag((MR_Word) Type_80)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(3, Type_80, (MR_Integer) 0)))) == (MR_Integer) 3)));
              if (succeeded)
              {
                Var_42 = ((MR_Word) ((MR_hl_field(3, Type_80, (MR_Integer) 1))));
                Var_89 = parse_tree__builtin_lib_types__comparison_result_type_0_f_0();
                succeeded = parse_tree__prog_data____Unify____mer_type_0_0(Var_42, Var_89);
              }
              if (succeeded)
              {
                mercury__io__write_string_4_p_0(Stream_8, (MR_String) "builtin.comparison_result_object[(int) ");
                ml_backend__mlds_to_cs_data__output_rval_for_csharp_5_p_0(Info_6, SubRval_81, Stream_8);
                mercury__io__write_string_4_p_0(Stream_8, (MR_String) "]");
              }
              else
              {
                MR_Word next_value_of_tscc_proc_6_input_1_Info_7 = Info_6;
                MR_Word next_value_of_tscc_proc_6_input_2_Expr_9 = SubRval_81;
                MR_Word next_value_of_tscc_proc_6_input_3_Stream_10 = Stream_8;

                // direct tailcall eliminated
                ;
                tscc_proc_6_input_1_Info_7 = next_value_of_tscc_proc_6_input_1_Info_7;
                tscc_proc_6_input_2_Expr_9 = next_value_of_tscc_proc_6_input_2_Expr_9;
                tscc_proc_6_input_3_Stream_10 = next_value_of_tscc_proc_6_input_3_Stream_10;
                goto top_of_proc_6;
              }
            }
            break;
          case (MR_Integer) 3:
            {
              MR_Word Type_82 = ((MR_Word) ((MR_hl_field(3, Rval_7, (MR_Integer) 1))));
              MR_Word SubRval_83 = ((MR_Word) ((MR_hl_field(3, Rval_7, (MR_Integer) 2))));

              ml_backend__mlds_to_cs_data__output_unboxed_rval_for_csharp_6_p_0(Info_6, Type_82, SubRval_83, Stream_8);
            }
            break;
          case (MR_Integer) 4:
            {
              MR_Word Type_14 = ((MR_Word) ((MR_hl_field(3, Rval_7, (MR_Integer) 1))));
              MR_Word SubRval_15 = ((MR_Word) ((MR_hl_field(3, Rval_7, (MR_Integer) 2))));
              MR_Word next_value_of_tscc_proc_4_input_1_Info_7 = Info_6;
              MR_Word next_value_of_tscc_proc_4_input_2_Type_8 = Type_14;
              MR_Word next_value_of_tscc_proc_4_input_3_Expr_9 = SubRval_15;
              MR_Word next_value_of_tscc_proc_4_input_4_Stream_10 = Stream_8;

              // direct tailcall eliminated
              ;
              tscc_proc_4_input_1_Info_7 = next_value_of_tscc_proc_4_input_1_Info_7;
              tscc_proc_4_input_2_Type_8 = next_value_of_tscc_proc_4_input_2_Type_8;
              tscc_proc_4_input_3_Expr_9 = next_value_of_tscc_proc_4_input_3_Expr_9;
              tscc_proc_4_input_4_Stream_10 = next_value_of_tscc_proc_4_input_4_Stream_10;
              goto top_of_proc_4;
            }
            break;
          case (MR_Integer) 5:
            {
              MR_Word Unop_17 = ((MR_Word) ((MR_hl_field(3, Rval_7, (MR_Integer) 1))));
              MR_Word SubRval_84 = ((MR_Word) ((MR_hl_field(3, Rval_7, (MR_Integer) 2))));

              ml_backend__mlds_to_cs_data__output_unop_for_csharp_6_p_0(Info_6, Stream_8, Unop_17, SubRval_84);
            }
            break;
          case (MR_Integer) 6:
            {
              MR_Word Op_18 = ((MR_Word) ((MR_hl_field(3, Rval_7, (MR_Integer) 1))));
              MR_Word SubRvalA_19 = ((MR_Word) ((MR_hl_field(3, Rval_7, (MR_Integer) 2))));
              MR_Word SubRvalB_20 = ((MR_Word) ((MR_hl_field(3, Rval_7, (MR_Integer) 3))));

              ml_backend__mlds_to_cs_data__output_binop_for_csharp_7_p_0(Info_6, Stream_8, Op_18, SubRvalA_19, SubRvalB_20);
            }
            break;
          case (MR_Integer) 7:
            {
              MR_Word Lval_85 = ((MR_Word) ((MR_hl_field(3, Rval_7, (MR_Integer) 1))));
              MR_Word next_value_of_tscc_proc_1_input_1_Info_6;
              MR_Word next_value_of_tscc_proc_1_input_2_Lval_7;
              MR_Word next_value_of_tscc_proc_1_input_3_Stream_8;

              mercury__io__write_string_4_p_0(Stream_8, (MR_String) "out ");
              // direct tailcall eliminated
              ;
              next_value_of_tscc_proc_1_input_1_Info_6 = Info_6;
              next_value_of_tscc_proc_1_input_2_Lval_7 = Lval_85;
              next_value_of_tscc_proc_1_input_3_Stream_8 = Stream_8;
              tscc_proc_1_input_1_Info_6 = next_value_of_tscc_proc_1_input_1_Info_6;
              tscc_proc_1_input_2_Lval_7 = next_value_of_tscc_proc_1_input_2_Lval_7;
              tscc_proc_1_input_3_Stream_8 = next_value_of_tscc_proc_1_input_3_Stream_8;
              goto top_of_proc_1;
            }
            break;
          case (MR_Integer) 8:
            {
              MR_Word VectorCommon_29 = ((MR_Word) ((MR_hl_field(3, Rval_7, (MR_Integer) 1))));
              MR_Word RowRval_30 = ((MR_Word) ((MR_hl_field(3, Rval_7, (MR_Integer) 2))));
              MR_Integer StartRowNum_32 = ((MR_Integer) ((MR_hl_field(0, VectorCommon_29, (MR_Integer) 3))));
              MR_Word Var_67 = ((MR_Word) ((MR_hl_field(0, VectorCommon_29, (MR_Integer) 2))));
              MR_Integer TypeNum_88 = (MR_Integer) (Var_67);
              MR_String Var_93;
              MR_String Var_103;

              mercury__io__write_string_4_p_0(Stream_8, (MR_String) "MR_vector_common_");
              mercury__string__format__format_signed_int_component_nowidth_noprec_3_p_0((MR_Word) (&ml_backend__mlds_to_cs_data_scalar_common_1[0]), TypeNum_88, &Var_93);
              mercury__io__write_string_4_p_0(Stream_8, Var_93);
              mercury__io__write_string_4_p_0(Stream_8, (MR_String) "[");
              mercury__string__format__format_signed_int_component_nowidth_noprec_3_p_0((MR_Word) (&ml_backend__mlds_to_cs_data_scalar_common_1[0]), StartRowNum_32, &Var_103);
              mercury__io__write_string_4_p_0(Stream_8, Var_103);
              mercury__io__write_string_4_p_0(Stream_8, (MR_String) " + ");
              ml_backend__mlds_to_cs_data__output_rval_for_csharp_5_p_0(Info_6, RowRval_30, Stream_8);
              mercury__io__write_string_4_p_0(Stream_8, (MR_String) "]");
            }
            break;
          case (MR_Integer) 9:
            mercury__io__write_string_4_p_0(Stream_8, (MR_String) "this");
            break;
        }
        break;
    }
    goto tscc_end;
  }
top_of_proc_3:;
  {
    MR_Word Info_6 = tscc_proc_3_input_1_Info_6;
    MR_Word Rval_7 = tscc_proc_3_input_2_Rval_7;
    MR_Word Stream_8 = tscc_proc_3_input_3_Stream_8;
    MR_bool succeeded;

    if (((MR_tag((MR_Word) Rval_7)) == (MR_Integer) 2))
    {
      MR_Word Var_25 = ((MR_Word) ((MR_hl_field(2, Rval_7, (MR_Integer) 0))));

      if (((((MR_tag((MR_Word) Var_25)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(3, Var_25, (MR_Integer) 0)))) == (MR_Integer) 1))))
        succeeded = MR_TRUE;
      else
      if (((((MR_tag((MR_Word) Var_25)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(3, Var_25, (MR_Integer) 0)))) == (MR_Integer) 0))))
        succeeded = MR_TRUE;
      else
        succeeded = MR_FALSE;
    }
    else
    if (((((MR_tag((MR_Word) Rval_7)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(3, Rval_7, (MR_Integer) 0)))) == (MR_Integer) 1))))
    {
      MR_Word Var_19 = ((MR_Word) ((MR_hl_field(3, Rval_7, (MR_Integer) 1))));

      succeeded = ((MR_tag((MR_Word) Var_19)) == (MR_Integer) 1);
      if (succeeded)
      {
      }
    }
    else
      succeeded = MR_FALSE;
    if (succeeded)
    {
      MR_Word next_value_of_tscc_proc_2_input_1_Info_6 = Info_6;
      MR_Word next_value_of_tscc_proc_2_input_2_Rval_7 = Rval_7;
      MR_Word next_value_of_tscc_proc_2_input_3_Stream_8 = Stream_8;

      // direct tailcall eliminated
      ;
      tscc_proc_2_input_1_Info_6 = next_value_of_tscc_proc_2_input_1_Info_6;
      tscc_proc_2_input_2_Rval_7 = next_value_of_tscc_proc_2_input_2_Rval_7;
      tscc_proc_2_input_3_Stream_8 = next_value_of_tscc_proc_2_input_3_Stream_8;
      goto top_of_proc_2;
    }
    else
    {
      mercury__io__write_char_4_p_0(Stream_8, (MR_Char) 40);
      ml_backend__mlds_to_cs_data__output_rval_for_csharp_5_p_0(Info_6, Rval_7, Stream_8);
      mercury__io__write_char_4_p_0(Stream_8, (MR_Char) 41);
    }
    goto tscc_end;
  }
top_of_proc_4:;
  {
    MR_Word Info_7 = tscc_proc_4_input_1_Info_7;
    MR_Word Type_8 = tscc_proc_4_input_2_Type_8;
    MR_Word Expr_9 = tscc_proc_4_input_3_Expr_9;
    MR_Word Stream_10 = tscc_proc_4_input_4_Stream_10;
    MR_bool succeeded = (Type_8 == (MR_Word) ((MR_Unsigned) 32U));
    MR_Integer N_12;
    MR_Word Var_16;

    if (succeeded)
    {
      succeeded = ((((MR_tag((MR_Word) Expr_9)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(3, Expr_9, (MR_Integer) 0)))) == (MR_Integer) 1)));
      if (succeeded)
      {
        Var_16 = ((MR_Word) ((MR_hl_field(3, Expr_9, (MR_Integer) 1))));
        succeeded = ((MR_tag((MR_Word) Var_16)) == (MR_Integer) 2);
        if (succeeded)
          N_12 = ((MR_Integer) ((MR_hl_field(2, Var_16, (MR_Integer) 0))));
      }
    }
    if (succeeded)
    {
      MR_Integer Var_47;

      ml_backend__mlds_to_cs_util__maybe_output_inline_comment_for_csharp_5_p_0(Info_7, Stream_10, (MR_String) "cast");
      succeeded = (N_12 >= (MR_Integer) 1);
      if (succeeded)
      {
        Var_47 = (MR_Integer) 5;
        succeeded = (N_12 <= Var_47);
      }
      if (succeeded)
      {
        mercury__io__write_string_4_p_0(Stream_10, (MR_String) "runtime.PseudoTypeInfo.K");
        mercury__io__write_int_4_p_0(Stream_10, N_12);
      }
      else
      {
        mercury__io__write_string_4_p_0(Stream_10, (MR_String) "new runtime.PseudoTypeInfo(");
        ml_backend__mlds_to_cs_data__output_rval_for_csharp_5_p_0(Info_7, Expr_9, Stream_10);
        mercury__io__write_string_4_p_0(Stream_10, (MR_String) ")");
      }
    }
    else
    {
      if ((Type_8 == (MR_Word) ((MR_Unsigned) 28U)))
        succeeded = MR_TRUE;
      else
      if (((((MR_tag((MR_Word) Type_8)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(3, Type_8, (MR_Integer) 0)))) == (MR_Integer) 3))))
      {
        MR_Word Var_27 = ((MR_Word) ((MR_hl_field(3, Type_8, (MR_Integer) 2))));
        MR_Word Var_28;

        succeeded = ((((MR_tag((MR_Word) Var_27)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(3, Var_27, (MR_Integer) 0)))) == (MR_Integer) 0)));
        if (succeeded)
        {
          Var_28 = ((MR_Unsigned) ((MR_hl_field(3, Var_27, (MR_Integer) 1))) & (MR_Integer) 3);
          succeeded = (Var_28 == (MR_Integer) 0);
        }
      }
      else
        succeeded = MR_FALSE;
      if (succeeded)
      {
        ml_backend__mlds_to_cs_util__maybe_output_inline_comment_for_csharp_5_p_0(Info_7, Stream_10, (MR_String) "cast");
        mercury__io__write_string_4_p_0(Stream_10, (MR_String) "runtime.TypeInfo_Struct.maybe_new(");
        ml_backend__mlds_to_cs_data__output_rval_for_csharp_5_p_0(Info_7, Expr_9, Stream_10);
        mercury__io__write_string_4_p_0(Stream_10, (MR_String) ")");
      }
      else
      {
        MR_String Var_40;
        MR_Word next_value_of_tscc_proc_2_input_1_Info_6;
        MR_Word next_value_of_tscc_proc_2_input_2_Rval_7;
        MR_Word next_value_of_tscc_proc_2_input_3_Stream_8;

        Var_40 = ml_backend__mlds_to_cs_type__type_to_string_for_csharp_2_f_0(Info_7, Type_8);
        mercury__io__write_string_4_p_0(Stream_10, (MR_String) "(");
        mercury__io__write_string_4_p_0(Stream_10, Var_40);
        mercury__io__write_string_4_p_0(Stream_10, (MR_String) ") ");
        // direct tailcall eliminated
        ;
        next_value_of_tscc_proc_2_input_1_Info_6 = Info_7;
        next_value_of_tscc_proc_2_input_2_Rval_7 = Expr_9;
        next_value_of_tscc_proc_2_input_3_Stream_8 = Stream_10;
        tscc_proc_2_input_1_Info_6 = next_value_of_tscc_proc_2_input_1_Info_6;
        tscc_proc_2_input_2_Rval_7 = next_value_of_tscc_proc_2_input_2_Rval_7;
        tscc_proc_2_input_3_Stream_8 = next_value_of_tscc_proc_2_input_3_Stream_8;
        goto top_of_proc_2;
      }
    }
    goto tscc_end;
  }
top_of_proc_5:;
  {
    MR_Word Info_6 = tscc_proc_5_input_1_Info_6;
    MR_Word Stream_7 = tscc_proc_5_input_2_Stream_7;
    MR_Word Const_8 = tscc_proc_5_input_3_Const_8;
    MR_bool succeeded;

    switch (MR_tag((MR_Word) Const_8)) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        switch (MR_unmkbody(Const_8)) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
            mercury__io__write_string_4_p_0(Stream_7, (MR_String) "true");
            break;
          case (MR_Integer) 1:
            mercury__io__write_string_4_p_0(Stream_7, (MR_String) "false");
            break;
        }
        break;
      case (MR_Integer) 1:
        {
          MR_Word CodeAddr_20 = (MR_Word) (MR_body((MR_Word) (Const_8), (MR_Integer) 1));
          MR_String Name_21;
          MR_Word Var_73 = ((MR_Word) ((MR_hl_field(0, Info_6, (MR_Integer) 4))));
          MR_Box conv0_Name_21;

          mercury__map__lookup_3_p_0((MR_Word) (&ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_code_addr_0), (MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), Var_73, ((MR_Box) (CodeAddr_20)), &conv0_Name_21);
          Name_21 = ((MR_String) (conv0_Name_21));
          mercury__io__write_string_4_p_0(Stream_7, Name_21);
        }
        break;
      case (MR_Integer) 2:
        {
          MR_Integer N_10 = ((MR_Integer) ((MR_hl_field(2, Const_8, (MR_Integer) 0))));

          ml_backend__mlds_to_cs_data__output_int_const_for_csharp_4_p_0(Stream_7, N_10);
        }
        break;
      case (MR_Integer) 3:
        switch (((MR_Integer) ((MR_hl_field(3, Const_8, (MR_Integer) 0))))) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
            {
              MR_Unsigned N_95 = ((MR_Unsigned) ((MR_hl_field(3, Const_8, (MR_Integer) 1))));

              mercury__io__write_uint_4_p_0(Stream_7, N_95);
              mercury__io__write_string_4_p_0(Stream_7, (MR_String) "U");
            }
            break;
          case (MR_Integer) 1:
            {
              int8_t N_96 = ((int8_t) (MR_Word) (MR_hl_field(3, Const_8, (MR_Integer) 1)));

              mercury__io__write_string_4_p_0(Stream_7, (MR_String) "(sbyte) ");
              mercury__io__write_int8_4_p_0(Stream_7, N_96);
            }
            break;
          case (MR_Integer) 2:
            {
              uint8_t N_97 = ((uint8_t) (MR_Word) (MR_hl_field(3, Const_8, (MR_Integer) 1)));

              ml_backend__mlds_to_cs_data__output_uint8_const_for_csharp_4_p_0(Stream_7, N_97);
            }
            break;
          case (MR_Integer) 3:
            {
              int16_t N_98 = ((int16_t) (MR_Word) (MR_hl_field(3, Const_8, (MR_Integer) 1)));

              mercury__io__write_string_4_p_0(Stream_7, (MR_String) "(short) ");
              mercury__io__write_int16_4_p_0(Stream_7, N_98);
            }
            break;
          case (MR_Integer) 4:
            {
              uint16_t N_99 = ((uint16_t) (MR_Word) (MR_hl_field(3, Const_8, (MR_Integer) 1)));

              mercury__io__write_string_4_p_0(Stream_7, (MR_String) "(ushort) ");
              mercury__io__write_uint16_4_p_0(Stream_7, N_99);
            }
            break;
          case (MR_Integer) 5:
            {
              int32_t N_100 = ((int32_t) (MR_Word) (MR_hl_field(3, Const_8, (MR_Integer) 1)));

              mercury__io__write_int32_4_p_0(Stream_7, N_100);
            }
            break;
          case (MR_Integer) 6:
            {
              uint32_t N_101 = ((uint32_t) (MR_Word) (MR_hl_field(3, Const_8, (MR_Integer) 1)));

              mercury__io__write_uint32_4_p_0(Stream_7, N_101);
              mercury__io__write_string_4_p_0(Stream_7, (MR_String) "U");
            }
            break;
          case (MR_Integer) 7:
            {
              int64_t N_102 = MR_unbox_int64((MR_hl_field(3, Const_8, (MR_Integer) 1)));

              mercury__io__write_int64_4_p_0(Stream_7, N_102);
              mercury__io__write_string_4_p_0(Stream_7, (MR_String) "L");
            }
            break;
          case (MR_Integer) 8:
            {
              uint64_t N_103 = MR_unbox_uint64((MR_hl_field(3, Const_8, (MR_Integer) 1)));

              ml_backend__mlds_to_cs_data__output_uint64_const_for_csharp_4_p_0(Stream_7, N_103);
            }
            break;
          case (MR_Integer) 9:
            {
              MR_Word EnumType_12 = ((MR_Word) ((MR_hl_field(3, Const_8, (MR_Integer) 2))));
              MR_Word Var_53;
              MR_Word Var_55;
              MR_Integer N_104 = ((MR_Integer) ((MR_hl_field(3, Const_8, (MR_Integer) 1))));
              MR_Word next_value_of_tscc_proc_4_input_1_Info_7;
              MR_Word next_value_of_tscc_proc_4_input_2_Type_8;
              MR_Word next_value_of_tscc_proc_4_input_3_Expr_9;
              MR_Word next_value_of_tscc_proc_4_input_4_Stream_10;

              {
                Var_55 = (MR_Word) MR_mkword(2, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(2, Var_55, 0) = ((MR_Box) (N_104));
              }
              {
                Var_53 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(3, Var_53, 0) = ((MR_Box) ((MR_Unsigned) 1U));
                MR_hl_field(3, Var_53, 1) = ((MR_Box) (Var_55));
              }
              // direct tailcall eliminated
              ;
              next_value_of_tscc_proc_4_input_1_Info_7 = Info_6;
              next_value_of_tscc_proc_4_input_2_Type_8 = EnumType_12;
              next_value_of_tscc_proc_4_input_3_Expr_9 = Var_53;
              next_value_of_tscc_proc_4_input_4_Stream_10 = Stream_7;
              tscc_proc_4_input_1_Info_7 = next_value_of_tscc_proc_4_input_1_Info_7;
              tscc_proc_4_input_2_Type_8 = next_value_of_tscc_proc_4_input_2_Type_8;
              tscc_proc_4_input_3_Expr_9 = next_value_of_tscc_proc_4_input_3_Expr_9;
              tscc_proc_4_input_4_Stream_10 = next_value_of_tscc_proc_4_input_4_Stream_10;
              goto top_of_proc_4;
            }
            break;
          case (MR_Integer) 10:
            {
              MR_Integer C_11 = ((MR_Integer) ((MR_hl_field(3, Const_8, (MR_Integer) 1))));

              mercury__io__write_string_4_p_0(Stream_7, (MR_String) "( ");
              ml_backend__mlds_to_cs_data__output_int_const_for_csharp_4_p_0(Stream_7, C_11);
              mercury__io__write_string_4_p_0(Stream_7, (MR_String) ")");
            }
            break;
          case (MR_Integer) 11:
            {
              MR_Float FloatVal_16 = MR_unbox_float((MR_hl_field(3, Const_8, (MR_Integer) 1)));

              backend_libs__c_util__output_float_literal_4_p_0(Stream_7, FloatVal_16);
            }
            break;
          case (MR_Integer) 12:
            {
              MR_String String_17 = ((MR_String) ((MR_hl_field(3, Const_8, (MR_Integer) 1))));

              backend_libs__c_util__output_quoted_string_csharp_4_p_0(Stream_7, String_17);
            }
            break;
          case (MR_Integer) 13:
            {
              MR_Word String_105 = ((MR_Word) ((MR_hl_field(3, Const_8, (MR_Integer) 1))));

              backend_libs__c_util__output_quoted_multi_string_csharp_4_p_0(Stream_7, String_105);
            }
            break;
          case (MR_Integer) 14:
            {
              MR_Word Lang_13 = ((MR_Unsigned) ((MR_hl_field(3, Const_8, (MR_Integer) 1))) & (MR_Integer) 3);
              MR_String Value_14 = ((MR_String) ((MR_hl_field(3, Const_8, (MR_Integer) 2))));
              MR_Word Type_15 = ((MR_Word) ((MR_hl_field(3, Const_8, (MR_Integer) 3))));
              MR_Word Var_56;
              MR_String Var_64;

              {
                Var_56 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
                MR_hl_field(0, Var_56, 0) = ((MR_Box) (&ml_backend__mlds_to_cs_data_scalar_common_3[0]));
                MR_hl_field(0, Var_56, 1) = ((MR_Box) (ml_backend__mlds_to_cs_data__output_rval_const_for_csharp_5_p_0_1));
                MR_hl_field(0, Var_56, 2) = ((MR_Box) ((MR_Integer) 2));
                MR_hl_field(0, Var_56, 3) = ((MR_Box) (Lang_13));
                MR_hl_field(0, Var_56, 4) = ((MR_Box) ((MR_Integer) 1));
              }
              mercury__require__expect_3_p_0(Var_56, (MR_String) "predicate \140ml_backend.mlds_to_cs_data.output_rval_const_for_csharp\'/5", (MR_String) "language other than C#.");
              Var_64 = ml_backend__mlds_to_cs_type__type_to_string_for_csharp_2_f_0(Info_6, Type_15);
              mercury__io__write_string_4_p_0(Stream_7, (MR_String) "(");
              mercury__io__write_string_4_p_0(Stream_7, Var_64);
              mercury__io__write_string_4_p_0(Stream_7, (MR_String) ") ");
              mercury__io__write_string_4_p_0(Stream_7, Value_14);
            }
            break;
          case (MR_Integer) 15:
            {
              MR_Word TargetPrefixes_18 = ((MR_Word) ((MR_hl_field(3, Const_8, (MR_Integer) 1))));
              MR_String NamedConst_19 = ((MR_String) ((MR_hl_field(3, Const_8, (MR_Integer) 2))));
              MR_String Var_70 = ((MR_String) ((MR_hl_field(0, TargetPrefixes_18, (MR_Integer) 1))));

              mercury__io__write_string_4_p_0(Stream_7, Var_70);
              mercury__io__write_string_4_p_0(Stream_7, NamedConst_19);
            }
            break;
          case (MR_Integer) 16:
            {
              MR_Word VarName_22 = ((MR_Word) ((MR_hl_field(3, Const_8, (MR_Integer) 1))));
              MR_String VarNameStr_23;

              VarNameStr_23 = ml_backend__mlds_to_cs_name__local_var_name_to_ll_string_for_csharp_1_f_0(VarName_22);
              mercury__io__write_string_4_p_0(Stream_7, VarNameStr_23);
            }
            break;
          case (MR_Integer) 17:
            {
              MR_Word ModuleName_24 = ((MR_Word) ((MR_hl_field(3, Const_8, (MR_Integer) 1))));
              MR_String MangledModuleName_25;
              MR_Word Var_76;
              MR_Word VarName_106 = ((MR_Word) ((MR_hl_field(3, Const_8, (MR_Integer) 2))));
              MR_String VarNameStr_107;

              Var_76 = ml_backend__mlds__mlds_module_name_to_sym_name_1_f_0(ModuleName_24);
              MangledModuleName_25 = ml_backend__mlds_to_cs_name__strip_mercury_and_mangle_sym_name_for_csharp_1_f_0(Var_76);
              VarNameStr_107 = ml_backend__mlds_to_cs_name__global_var_name_to_ll_string_for_csharp_1_f_0(VarName_106);
              mercury__io__write_string_4_p_0(Stream_7, MangledModuleName_25);
              mercury__io__write_string_4_p_0(Stream_7, (MR_String) ".");
              mercury__io__write_string_4_p_0(Stream_7, VarNameStr_107);
            }
            break;
          case (MR_Integer) 18:
            {
              MR_Word RttiId_26 = ((MR_Word) ((MR_hl_field(3, Const_8, (MR_Integer) 2))));
              MR_String RttiAddrName0_27;
              MR_String RttiAddrName_28;
              MR_Word Var_84;
              MR_Word ModuleName_108 = ((MR_Word) ((MR_hl_field(3, Const_8, (MR_Integer) 1))));
              MR_String MangledModuleName_109;

              Var_84 = ml_backend__mlds__mlds_module_name_to_sym_name_1_f_0(ModuleName_108);
              MangledModuleName_109 = ml_backend__mlds_to_cs_name__strip_mercury_and_mangle_sym_name_for_csharp_1_f_0(Var_84);
              backend_libs__rtti__id_to_c_identifier_2_p_0(RttiId_26, &RttiAddrName0_27);
              RttiAddrName_28 = ml_backend__mlds_to_cs_name__limit_identifier_length_1_f_0(RttiAddrName0_27);
              mercury__io__write_string_4_p_0(Stream_7, MangledModuleName_109);
              mercury__io__write_string_4_p_0(Stream_7, (MR_String) ".");
              mercury__io__write_string_4_p_0(Stream_7, RttiAddrName_28);
            }
            break;
          case (MR_Integer) 19:
            {
              mercury__require__unexpected_2_p_0((MR_String) "predicate \140ml_backend.mlds_to_cs_data.output_rval_const_for_csharp\'/5", (MR_String) "NYI: mlconst_data_addr_tabling");
              return;
            }
            break;
          case (MR_Integer) 20:
            {
              MR_String Initializer_31;
              MR_Word Type_110 = ((MR_Word) ((MR_hl_field(3, Const_8, (MR_Integer) 1))));

              Initializer_31 = ml_backend__mlds_to_cs_data__get_default_initializer_for_csharp_2_f_0(Info_6, Type_110);
              mercury__io__write_string_4_p_0(Stream_7, Initializer_31);
            }
            break;
        }
        break;
    }
    goto tscc_end;
  }
top_of_proc_6:;
  {
    MR_Word Info_7 = tscc_proc_6_input_1_Info_7;
    MR_Word Expr_9 = tscc_proc_6_input_2_Expr_9;
    MR_Word Stream_10 = tscc_proc_6_input_3_Stream_10;
    MR_Word next_value_of_tscc_proc_2_input_1_Info_6 = Info_7;
    MR_Word next_value_of_tscc_proc_2_input_2_Rval_7 = Expr_9;
    MR_Word next_value_of_tscc_proc_2_input_3_Stream_8 = Stream_10;

    // direct tailcall eliminated
    ;
    tscc_proc_2_input_1_Info_6 = next_value_of_tscc_proc_2_input_1_Info_6;
    tscc_proc_2_input_2_Rval_7 = next_value_of_tscc_proc_2_input_2_Rval_7;
    tscc_proc_2_input_3_Stream_8 = next_value_of_tscc_proc_2_input_3_Stream_8;
    goto top_of_proc_2;
    goto tscc_end;
  }
tscc_end:;
  return;
}

static void MR_CALL 
ml_backend__mlds_to_cs_data__output_binop_for_csharp_7_p_0(
  MR_Word Info_8,
  MR_Word Stream_9,
  MR_Word Op_10,
  MR_Word X_11,
  MR_Word Y_12)
{
  switch (MR_tag((MR_Word) Op_10)) {
    default: /*NOTREACHED*/ MR_assert(0);
    case (MR_Integer) 0:
      switch (MR_unmkbody(Op_10)) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 0:
          ml_backend__mlds_to_cs_data__output_basic_binop_for_csharp_7_p_0(Info_8, Stream_9, (MR_String) "&&", X_11, Y_12);
          break;
        case (MR_Integer) 1:
          ml_backend__mlds_to_cs_data__output_basic_binop_for_csharp_7_p_0(Info_8, Stream_9, (MR_String) "||", X_11, Y_12);
          break;
        case (MR_Integer) 2:
        case (MR_Integer) 3:
        case (MR_Integer) 23:
        case (MR_Integer) 24:
        case (MR_Integer) 25:
        case (MR_Integer) 27:
        case (MR_Integer) 28:
          {
            mercury__require__unexpected_2_p_0((MR_String) "predicate \140ml_backend.mlds_to_cs_data.output_binop_for_csharp\'/7", (MR_String) "invalid binary operator");
            return;
          }
          break;
        case (MR_Integer) 4:
          {
            ml_backend__mlds_to_cs_data__output_rval_for_csharp_5_p_0(Info_8, X_11, Stream_9);
            mercury__io__write_string_4_p_0(Stream_9, (MR_String) ".Equals(");
            ml_backend__mlds_to_cs_data__output_rval_for_csharp_5_p_0(Info_8, Y_12, Stream_9);
            mercury__io__write_string_4_p_0(Stream_9, (MR_String) ")");
          }
          break;
        case (MR_Integer) 5:
          {
            mercury__io__write_string_4_p_0(Stream_9, (MR_String) "(");
            ml_backend__mlds_to_cs_data__output_rval_for_csharp_5_p_0(Info_8, X_11, Stream_9);
            mercury__io__write_string_4_p_0(Stream_9, (MR_String) ".CompareOrdinal(");
            ml_backend__mlds_to_cs_data__output_rval_for_csharp_5_p_0(Info_8, Y_12, Stream_9);
            mercury__io__write_string_4_p_0(Stream_9, (MR_String) ") ");
            mercury__io__write_string_4_p_0(Stream_9, (MR_String) "!=");
            mercury__io__write_string_4_p_0(Stream_9, (MR_String) " 0)");
          }
          break;
        case (MR_Integer) 6:
          {
            mercury__io__write_string_4_p_0(Stream_9, (MR_String) "(");
            ml_backend__mlds_to_cs_data__output_rval_for_csharp_5_p_0(Info_8, X_11, Stream_9);
            mercury__io__write_string_4_p_0(Stream_9, (MR_String) ".CompareOrdinal(");
            ml_backend__mlds_to_cs_data__output_rval_for_csharp_5_p_0(Info_8, Y_12, Stream_9);
            mercury__io__write_string_4_p_0(Stream_9, (MR_String) ") ");
            mercury__io__write_string_4_p_0(Stream_9, (MR_String) "<");
            mercury__io__write_string_4_p_0(Stream_9, (MR_String) " 0)");
          }
          break;
        case (MR_Integer) 7:
          {
            mercury__io__write_string_4_p_0(Stream_9, (MR_String) "(");
            ml_backend__mlds_to_cs_data__output_rval_for_csharp_5_p_0(Info_8, X_11, Stream_9);
            mercury__io__write_string_4_p_0(Stream_9, (MR_String) ".CompareOrdinal(");
            ml_backend__mlds_to_cs_data__output_rval_for_csharp_5_p_0(Info_8, Y_12, Stream_9);
            mercury__io__write_string_4_p_0(Stream_9, (MR_String) ") ");
            mercury__io__write_string_4_p_0(Stream_9, (MR_String) ">");
            mercury__io__write_string_4_p_0(Stream_9, (MR_String) " 0)");
          }
          break;
        case (MR_Integer) 8:
          {
            mercury__io__write_string_4_p_0(Stream_9, (MR_String) "(");
            ml_backend__mlds_to_cs_data__output_rval_for_csharp_5_p_0(Info_8, X_11, Stream_9);
            mercury__io__write_string_4_p_0(Stream_9, (MR_String) ".CompareOrdinal(");
            ml_backend__mlds_to_cs_data__output_rval_for_csharp_5_p_0(Info_8, Y_12, Stream_9);
            mercury__io__write_string_4_p_0(Stream_9, (MR_String) ") ");
            mercury__io__write_string_4_p_0(Stream_9, (MR_String) "<=");
            mercury__io__write_string_4_p_0(Stream_9, (MR_String) " 0)");
          }
          break;
        case (MR_Integer) 9:
          {
            mercury__io__write_string_4_p_0(Stream_9, (MR_String) "(");
            ml_backend__mlds_to_cs_data__output_rval_for_csharp_5_p_0(Info_8, X_11, Stream_9);
            mercury__io__write_string_4_p_0(Stream_9, (MR_String) ".CompareOrdinal(");
            ml_backend__mlds_to_cs_data__output_rval_for_csharp_5_p_0(Info_8, Y_12, Stream_9);
            mercury__io__write_string_4_p_0(Stream_9, (MR_String) ") ");
            mercury__io__write_string_4_p_0(Stream_9, (MR_String) ">=");
            mercury__io__write_string_4_p_0(Stream_9, (MR_String) " 0)");
          }
          break;
        case (MR_Integer) 10:
          {
            mercury__io__write_string_4_p_0(Stream_9, (MR_String) "(");
            ml_backend__mlds_to_cs_data__output_rval_for_csharp_5_p_0(Info_8, X_11, Stream_9);
            mercury__io__write_string_4_p_0(Stream_9, (MR_String) ".CompareOrdinal(");
            ml_backend__mlds_to_cs_data__output_rval_for_csharp_5_p_0(Info_8, Y_12, Stream_9);
            mercury__io__write_string_4_p_0(Stream_9, (MR_String) "))");
          }
          break;
        case (MR_Integer) 11:
          {
            mercury__io__write_string_4_p_0(Stream_9, (MR_String) "((uint) ");
            ml_backend__mlds_to_cs_data__output_rval_for_csharp_5_p_0(Info_8, X_11, Stream_9);
            mercury__io__write_string_4_p_0(Stream_9, (MR_String) " ");
            mercury__io__write_string_4_p_0(Stream_9, (MR_String) "<");
            mercury__io__write_string_4_p_0(Stream_9, (MR_String) " (uint) ");
            ml_backend__mlds_to_cs_data__output_rval_for_csharp_5_p_0(Info_8, Y_12, Stream_9);
            mercury__io__write_string_4_p_0(Stream_9, (MR_String) ")");
          }
          break;
        case (MR_Integer) 12:
          {
            mercury__io__write_string_4_p_0(Stream_9, (MR_String) "((uint) ");
            ml_backend__mlds_to_cs_data__output_rval_for_csharp_5_p_0(Info_8, X_11, Stream_9);
            mercury__io__write_string_4_p_0(Stream_9, (MR_String) " ");
            mercury__io__write_string_4_p_0(Stream_9, (MR_String) "<=");
            mercury__io__write_string_4_p_0(Stream_9, (MR_String) " (uint) ");
            ml_backend__mlds_to_cs_data__output_rval_for_csharp_5_p_0(Info_8, Y_12, Stream_9);
            mercury__io__write_string_4_p_0(Stream_9, (MR_String) ")");
          }
          break;
        case (MR_Integer) 13:
          ml_backend__mlds_to_cs_data__output_basic_binop_for_csharp_7_p_0(Info_8, Stream_9, (MR_String) "+", X_11, Y_12);
          break;
        case (MR_Integer) 14:
          ml_backend__mlds_to_cs_data__output_basic_binop_for_csharp_7_p_0(Info_8, Stream_9, (MR_String) "-", X_11, Y_12);
          break;
        case (MR_Integer) 15:
          ml_backend__mlds_to_cs_data__output_basic_binop_for_csharp_7_p_0(Info_8, Stream_9, (MR_String) "*", X_11, Y_12);
          break;
        case (MR_Integer) 16:
          ml_backend__mlds_to_cs_data__output_basic_binop_for_csharp_7_p_0(Info_8, Stream_9, (MR_String) "/", X_11, Y_12);
          break;
        case (MR_Integer) 17:
          ml_backend__mlds_to_cs_data__output_basic_binop_for_csharp_7_p_0(Info_8, Stream_9, (MR_String) "==", X_11, Y_12);
          break;
        case (MR_Integer) 18:
          ml_backend__mlds_to_cs_data__output_basic_binop_for_csharp_7_p_0(Info_8, Stream_9, (MR_String) "!=", X_11, Y_12);
          break;
        case (MR_Integer) 19:
          ml_backend__mlds_to_cs_data__output_basic_binop_for_csharp_7_p_0(Info_8, Stream_9, (MR_String) "<", X_11, Y_12);
          break;
        case (MR_Integer) 20:
          ml_backend__mlds_to_cs_data__output_basic_binop_for_csharp_7_p_0(Info_8, Stream_9, (MR_String) ">", X_11, Y_12);
          break;
        case (MR_Integer) 21:
          ml_backend__mlds_to_cs_data__output_basic_binop_for_csharp_7_p_0(Info_8, Stream_9, (MR_String) "<=", X_11, Y_12);
          break;
        case (MR_Integer) 22:
          ml_backend__mlds_to_cs_data__output_basic_binop_for_csharp_7_p_0(Info_8, Stream_9, (MR_String) ">=", X_11, Y_12);
          break;
        case (MR_Integer) 26:
          {
            mercury__io__write_string_4_p_0(Stream_9, (MR_String) "System.Object.ReferenceEquals(");
            ml_backend__mlds_to_cs_data__output_rval_for_csharp_5_p_0(Info_8, X_11, Stream_9);
            mercury__io__write_string_4_p_0(Stream_9, (MR_String) ", ");
            ml_backend__mlds_to_cs_data__output_rval_for_csharp_5_p_0(Info_8, Y_12, Stream_9);
            mercury__io__write_string_4_p_0(Stream_9, (MR_String) ")");
          }
          break;
      }
      break;
    case (MR_Integer) 1:
    case (MR_Integer) 2:
      ml_backend__mlds_to_cs_data__output_int_binop_for_csharp_7_p_0(Info_8, Stream_9, Op_10, X_11, Y_12);
      break;
    case (MR_Integer) 3:
      switch (((MR_Integer) ((MR_hl_field(3, Op_10, (MR_Integer) 0))))) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 0:
        case (MR_Integer) 1:
        case (MR_Integer) 2:
        case (MR_Integer) 3:
        case (MR_Integer) 4:
        case (MR_Integer) 5:
        case (MR_Integer) 6:
        case (MR_Integer) 7:
        case (MR_Integer) 12:
        case (MR_Integer) 13:
        case (MR_Integer) 14:
        case (MR_Integer) 15:
          ml_backend__mlds_to_cs_data__output_int_binop_for_csharp_7_p_0(Info_8, Stream_9, Op_10, X_11, Y_12);
          break;
        case (MR_Integer) 8:
          ml_backend__mlds_to_cs_data__output_basic_binop_for_csharp_7_p_0(Info_8, Stream_9, (MR_String) "==", X_11, Y_12);
          break;
        case (MR_Integer) 9:
          ml_backend__mlds_to_cs_data__output_basic_binop_for_csharp_7_p_0(Info_8, Stream_9, (MR_String) "!=", X_11, Y_12);
          break;
        case (MR_Integer) 10:
          {
            ml_backend__mlds_to_cs_data__output_bracketed_rval_for_csharp_5_p_0(Info_8, X_11, Stream_9);
            mercury__io__write_string_4_p_0(Stream_9, (MR_String) "[");
            ml_backend__mlds_to_cs_data__output_rval_for_csharp_5_p_0(Info_8, Y_12, Stream_9);
            mercury__io__write_string_4_p_0(Stream_9, (MR_String) "]");
          }
          break;
        case (MR_Integer) 11:
          {
            mercury__require__unexpected_2_p_0((MR_String) "predicate \140ml_backend.mlds_to_cs_data.output_binop_for_csharp\'/7", (MR_String) "invalid binary operator");
            return;
          }
          break;
      }
      break;
  }
}

static void MR_CALL 
ml_backend__mlds_to_cs_data__output_int_binop_for_csharp_7_p_0(
  MR_Word Info_8,
  MR_Word Stream_9,
  MR_Word Op_10,
  MR_Word X_11,
  MR_Word Y_12)
{
  switch (MR_tag((MR_Word) Op_10)) {
    default: /*NOTREACHED*/ MR_assert(0);
    case (MR_Integer) 1:
      {
        MR_Word Type_86 = ((MR_Unsigned) ((MR_hl_field(1, Op_10, (MR_Integer) 0))) & (MR_Integer) 15);
        MR_String Cast_88 = ((&ml_backend__mlds_to_cs_data_vector_common_2[30 + Type_86]))->ml_backend__mlds_to_cs_data__vector_common_type_2_0__vct_2_f_0;

        mercury__io__write_string_4_p_0(Stream_9, Cast_88);
        ml_backend__mlds_to_cs_data__output_basic_binop_for_csharp_7_p_0(Info_8, Stream_9, (MR_String) "+", X_11, Y_12);
      }
      break;
    case (MR_Integer) 2:
      {
        MR_Word Type_105 = ((MR_Unsigned) ((MR_hl_field(2, Op_10, (MR_Integer) 0))) & (MR_Integer) 15);
        MR_String Cast_107 = ((&ml_backend__mlds_to_cs_data_vector_common_2[70 + Type_105]))->ml_backend__mlds_to_cs_data__vector_common_type_2_0__vct_2_f_0;

        mercury__io__write_string_4_p_0(Stream_9, Cast_107);
        ml_backend__mlds_to_cs_data__output_basic_binop_for_csharp_7_p_0(Info_8, Stream_9, (MR_String) "-", X_11, Y_12);
      }
      break;
    case (MR_Integer) 3:
      switch (((MR_Integer) ((MR_hl_field(3, Op_10, (MR_Integer) 0))))) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 0:
          {
            MR_Word Type_101 = ((MR_Unsigned) ((MR_hl_field(3, Op_10, (MR_Integer) 1))) & (MR_Integer) 15);
            MR_String Cast_103 = ((&ml_backend__mlds_to_cs_data_vector_common_2[60 + Type_101]))->ml_backend__mlds_to_cs_data__vector_common_type_2_0__vct_2_f_0;

            mercury__io__write_string_4_p_0(Stream_9, Cast_103);
            ml_backend__mlds_to_cs_data__output_basic_binop_for_csharp_7_p_0(Info_8, Stream_9, (MR_String) "*", X_11, Y_12);
          }
          break;
        case (MR_Integer) 1:
          {
            MR_Word Type_90 = ((MR_Unsigned) ((MR_hl_field(3, Op_10, (MR_Integer) 1))) & (MR_Integer) 15);
            MR_String Cast_92 = ((&ml_backend__mlds_to_cs_data_vector_common_2[40 + Type_90]))->ml_backend__mlds_to_cs_data__vector_common_type_2_0__vct_2_f_0;

            mercury__io__write_string_4_p_0(Stream_9, Cast_92);
            ml_backend__mlds_to_cs_data__output_basic_binop_for_csharp_7_p_0(Info_8, Stream_9, (MR_String) "/", X_11, Y_12);
          }
          break;
        case (MR_Integer) 2:
          {
            MR_Word Type_97 = ((MR_Unsigned) ((MR_hl_field(3, Op_10, (MR_Integer) 1))) & (MR_Integer) 15);
            MR_String Cast_99 = ((&ml_backend__mlds_to_cs_data_vector_common_2[50 + Type_97]))->ml_backend__mlds_to_cs_data__vector_common_type_2_0__vct_2_f_0;

            mercury__io__write_string_4_p_0(Stream_9, Cast_99);
            ml_backend__mlds_to_cs_data__output_basic_binop_for_csharp_7_p_0(Info_8, Stream_9, (MR_String) "%", X_11, Y_12);
          }
          break;
        case (MR_Integer) 3:
          {
            MR_Word ShiftType_18 = ((MR_Unsigned) ((MR_hl_field(3, Op_10, (MR_Integer) 1))) & (MR_Integer) 1);
            MR_String CastY_19;
            MR_Word Type_63 = ((((MR_Unsigned) ((MR_hl_field(3, Op_10, (MR_Integer) 1))) >> 1)) & (MR_Integer) 15);
            MR_String Cast_65;

            switch (ShiftType_18) {
              default: /*NOTREACHED*/ MR_assert(0);
              case (MR_Integer) 0:
                CastY_19 = (MR_String) "";
                break;
              case (MR_Integer) 1:
                CastY_19 = (MR_String) "(int) ";
                break;
            }
            Cast_65 = ((&ml_backend__mlds_to_cs_data_vector_common_2[80 + Type_63]))->ml_backend__mlds_to_cs_data__vector_common_type_2_0__vct_2_f_0;
            mercury__io__write_string_4_p_0(Stream_9, Cast_65);
            mercury__io__write_string_4_p_0(Stream_9, (MR_String) "(");
            ml_backend__mlds_to_cs_data__output_rval_for_csharp_5_p_0(Info_8, X_11, Stream_9);
            mercury__io__write_string_4_p_0(Stream_9, (MR_String) " ");
            mercury__io__write_string_4_p_0(Stream_9, (MR_String) "<<");
            mercury__io__write_string_4_p_0(Stream_9, (MR_String) " ");
            mercury__io__write_string_4_p_0(Stream_9, CastY_19);
            ml_backend__mlds_to_cs_data__output_rval_for_csharp_5_p_0(Info_8, Y_12, Stream_9);
            mercury__io__write_string_4_p_0(Stream_9, (MR_String) ")");
          }
          break;
        case (MR_Integer) 4:
          {
            MR_Word ShiftType_109 = ((MR_Unsigned) ((MR_hl_field(3, Op_10, (MR_Integer) 1))) & (MR_Integer) 1);
            MR_String CastY_110;
            MR_Word Type_123 = ((((MR_Unsigned) ((MR_hl_field(3, Op_10, (MR_Integer) 1))) >> 1)) & (MR_Integer) 15);
            MR_String Cast_125;

            switch (ShiftType_109) {
              default: /*NOTREACHED*/ MR_assert(0);
              case (MR_Integer) 0:
                CastY_110 = (MR_String) "";
                break;
              case (MR_Integer) 1:
                CastY_110 = (MR_String) "(int) ";
                break;
            }
            Cast_125 = ((&ml_backend__mlds_to_cs_data_vector_common_2[90 + Type_123]))->ml_backend__mlds_to_cs_data__vector_common_type_2_0__vct_2_f_0;
            mercury__io__write_string_4_p_0(Stream_9, Cast_125);
            mercury__io__write_string_4_p_0(Stream_9, (MR_String) "(");
            ml_backend__mlds_to_cs_data__output_rval_for_csharp_5_p_0(Info_8, X_11, Stream_9);
            mercury__io__write_string_4_p_0(Stream_9, (MR_String) " ");
            mercury__io__write_string_4_p_0(Stream_9, (MR_String) ">>");
            mercury__io__write_string_4_p_0(Stream_9, (MR_String) " ");
            mercury__io__write_string_4_p_0(Stream_9, CastY_110);
            ml_backend__mlds_to_cs_data__output_rval_for_csharp_5_p_0(Info_8, Y_12, Stream_9);
            mercury__io__write_string_4_p_0(Stream_9, (MR_String) ")");
          }
          break;
        case (MR_Integer) 5:
          {
            MR_Word Type_14 = ((MR_Unsigned) ((MR_hl_field(3, Op_10, (MR_Integer) 1))) & (MR_Integer) 15);
            MR_String Cast_16 = ((&ml_backend__mlds_to_cs_data_vector_common_2[10 + Type_14]))->ml_backend__mlds_to_cs_data__vector_common_type_2_0__vct_2_f_0;

            mercury__io__write_string_4_p_0(Stream_9, Cast_16);
            ml_backend__mlds_to_cs_data__output_basic_binop_for_csharp_7_p_0(Info_8, Stream_9, (MR_String) "&", X_11, Y_12);
          }
          break;
        case (MR_Integer) 6:
          {
            MR_Word Type_53 = ((MR_Unsigned) ((MR_hl_field(3, Op_10, (MR_Integer) 1))) & (MR_Integer) 15);

            switch (Type_53) {
              default: /*NOTREACHED*/ MR_assert(0);
              case (MR_Integer) 0:
                {
                  mercury__io__write_string_4_p_0(Stream_9, (MR_String) "");
                  ml_backend__mlds_to_cs_data__output_basic_binop_for_csharp_7_p_0(Info_8, Stream_9, (MR_String) "|", X_11, Y_12);
                }
                break;
              case (MR_Integer) 4:
                {
                  mercury__io__write_string_4_p_0(Stream_9, (MR_String) "(short) ");
                  ml_backend__mlds_to_cs_data__output_basic_binop_for_csharp_7_p_0(Info_8, Stream_9, (MR_String) "|", X_11, Y_12);
                }
                break;
              case (MR_Integer) 6:
                {
                  mercury__io__write_string_4_p_0(Stream_9, (MR_String) "");
                  ml_backend__mlds_to_cs_data__output_basic_binop_for_csharp_7_p_0(Info_8, Stream_9, (MR_String) "|", X_11, Y_12);
                }
                break;
              case (MR_Integer) 8:
                {
                  mercury__io__write_string_4_p_0(Stream_9, (MR_String) "");
                  ml_backend__mlds_to_cs_data__output_basic_binop_for_csharp_7_p_0(Info_8, Stream_9, (MR_String) "|", X_11, Y_12);
                }
                break;
              case (MR_Integer) 2:
                {
                  mercury__io__write_string_4_p_0(Stream_9, (MR_String) "(sbyte) ((byte) ");
                  ml_backend__mlds_to_cs_data__output_rval_for_csharp_5_p_0(Info_8, X_11, Stream_9);
                  mercury__io__write_string_4_p_0(Stream_9, (MR_String) " ");
                  mercury__io__write_string_4_p_0(Stream_9, (MR_String) "|");
                  mercury__io__write_string_4_p_0(Stream_9, (MR_String) " (byte) ");
                  ml_backend__mlds_to_cs_data__output_rval_for_csharp_5_p_0(Info_8, Y_12, Stream_9);
                  mercury__io__write_string_4_p_0(Stream_9, (MR_String) ")");
                }
                break;
              case (MR_Integer) 1:
                {
                  mercury__io__write_string_4_p_0(Stream_9, (MR_String) "");
                  ml_backend__mlds_to_cs_data__output_basic_binop_for_csharp_7_p_0(Info_8, Stream_9, (MR_String) "|", X_11, Y_12);
                }
                break;
              case (MR_Integer) 5:
                {
                  mercury__io__write_string_4_p_0(Stream_9, (MR_String) "(ushort) ");
                  ml_backend__mlds_to_cs_data__output_basic_binop_for_csharp_7_p_0(Info_8, Stream_9, (MR_String) "|", X_11, Y_12);
                }
                break;
              case (MR_Integer) 7:
                {
                  mercury__io__write_string_4_p_0(Stream_9, (MR_String) "");
                  ml_backend__mlds_to_cs_data__output_basic_binop_for_csharp_7_p_0(Info_8, Stream_9, (MR_String) "|", X_11, Y_12);
                }
                break;
              case (MR_Integer) 9:
                {
                  mercury__io__write_string_4_p_0(Stream_9, (MR_String) "");
                  ml_backend__mlds_to_cs_data__output_basic_binop_for_csharp_7_p_0(Info_8, Stream_9, (MR_String) "|", X_11, Y_12);
                }
                break;
              case (MR_Integer) 3:
                {
                  mercury__io__write_string_4_p_0(Stream_9, (MR_String) "(byte) ");
                  ml_backend__mlds_to_cs_data__output_basic_binop_for_csharp_7_p_0(Info_8, Stream_9, (MR_String) "|", X_11, Y_12);
                }
                break;
            }
          }
          break;
        case (MR_Integer) 7:
          {
            MR_Word Type_82 = ((MR_Unsigned) ((MR_hl_field(3, Op_10, (MR_Integer) 1))) & (MR_Integer) 15);
            MR_String Cast_84 = ((&ml_backend__mlds_to_cs_data_vector_common_2[20 + Type_82]))->ml_backend__mlds_to_cs_data__vector_common_type_2_0__vct_2_f_0;

            mercury__io__write_string_4_p_0(Stream_9, Cast_84);
            ml_backend__mlds_to_cs_data__output_basic_binop_for_csharp_7_p_0(Info_8, Stream_9, (MR_String) "^", X_11, Y_12);
          }
          break;
        case (MR_Integer) 12:
          ml_backend__mlds_to_cs_data__output_basic_binop_for_csharp_7_p_0(Info_8, Stream_9, (MR_String) "<", X_11, Y_12);
          break;
        case (MR_Integer) 13:
          ml_backend__mlds_to_cs_data__output_basic_binop_for_csharp_7_p_0(Info_8, Stream_9, (MR_String) ">", X_11, Y_12);
          break;
        case (MR_Integer) 14:
          ml_backend__mlds_to_cs_data__output_basic_binop_for_csharp_7_p_0(Info_8, Stream_9, (MR_String) "<=", X_11, Y_12);
          break;
        case (MR_Integer) 15:
          ml_backend__mlds_to_cs_data__output_basic_binop_for_csharp_7_p_0(Info_8, Stream_9, (MR_String) ">=", X_11, Y_12);
          break;
      }
      break;
  }
}

static void MR_CALL 
ml_backend__mlds_to_cs_data__output_basic_binop_for_csharp_7_p_0(
  MR_Word Info_8,
  MR_Word Stream_9,
  MR_String OpStr_10,
  MR_Word X_11,
  MR_Word Y_12)
{
  mercury__io__write_string_4_p_0(Stream_9, (MR_String) "(");
  ml_backend__mlds_to_cs_data__output_rval_for_csharp_5_p_0(Info_8, X_11, Stream_9);
  mercury__io__write_string_4_p_0(Stream_9, (MR_String) " ");
  mercury__io__write_string_4_p_0(Stream_9, OpStr_10);
  mercury__io__write_string_4_p_0(Stream_9, (MR_String) " ");
  ml_backend__mlds_to_cs_data__output_rval_for_csharp_5_p_0(Info_8, Y_12, Stream_9);
  mercury__io__write_string_4_p_0(Stream_9, (MR_String) ")");
}

static void MR_CALL 
ml_backend__mlds_to_cs_data__output_unop_for_csharp_6_p_0(
  MR_Word Info_7,
  MR_Word Stream_8,
  MR_Word UnaryOp_9,
  MR_Word Expr_10)
{
  switch (MR_tag((MR_Word) UnaryOp_9)) {
    default: /*NOTREACHED*/ MR_assert(0);
    case (MR_Integer) 0:
      switch (MR_unmkbody(UnaryOp_9)) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 0:
          mercury__io__write_string_4_p_0(Stream_8, (MR_String) "/* tag */  0");
          break;
        case (MR_Integer) 1:
          {
            mercury__io__write_string_4_p_0(Stream_8, (MR_String) "/* strip_tag */ ");
            mercury__io__write_string_4_p_0(Stream_8, (MR_String) "(");
            ml_backend__mlds_to_cs_data__output_rval_for_csharp_5_p_0(Info_7, Expr_10, Stream_8);
            mercury__io__write_string_4_p_0(Stream_8, (MR_String) ")");
          }
          break;
        case (MR_Integer) 2:
          {
            mercury__io__write_string_4_p_0(Stream_8, (MR_String) "/* mkbody */ ");
            mercury__io__write_string_4_p_0(Stream_8, (MR_String) "(");
            ml_backend__mlds_to_cs_data__output_rval_for_csharp_5_p_0(Info_7, Expr_10, Stream_8);
            mercury__io__write_string_4_p_0(Stream_8, (MR_String) ")");
          }
          break;
        case (MR_Integer) 3:
          {
            mercury__io__write_string_4_p_0(Stream_8, (MR_String) "/* unmkbody */ ");
            mercury__io__write_string_4_p_0(Stream_8, (MR_String) "(");
            ml_backend__mlds_to_cs_data__output_rval_for_csharp_5_p_0(Info_7, Expr_10, Stream_8);
            mercury__io__write_string_4_p_0(Stream_8, (MR_String) ")");
          }
          break;
        case (MR_Integer) 4:
          {
            mercury__io__write_string_4_p_0(Stream_8, (MR_String) "!");
            mercury__io__write_string_4_p_0(Stream_8, (MR_String) "(");
            ml_backend__mlds_to_cs_data__output_rval_for_csharp_5_p_0(Info_7, Expr_10, Stream_8);
            mercury__io__write_string_4_p_0(Stream_8, (MR_String) ")");
          }
          break;
        case (MR_Integer) 5:
          {
            mercury__io__write_string_4_p_0(Stream_8, (MR_String) "mercury.String.hash_1_f_0");
            mercury__io__write_string_4_p_0(Stream_8, (MR_String) "(");
            ml_backend__mlds_to_cs_data__output_rval_for_csharp_5_p_0(Info_7, Expr_10, Stream_8);
            mercury__io__write_string_4_p_0(Stream_8, (MR_String) ")");
          }
          break;
        case (MR_Integer) 6:
          {
            mercury__io__write_string_4_p_0(Stream_8, (MR_String) "mercury.String.hash2_1_f_0");
            mercury__io__write_string_4_p_0(Stream_8, (MR_String) "(");
            ml_backend__mlds_to_cs_data__output_rval_for_csharp_5_p_0(Info_7, Expr_10, Stream_8);
            mercury__io__write_string_4_p_0(Stream_8, (MR_String) ")");
          }
          break;
        case (MR_Integer) 7:
          {
            mercury__io__write_string_4_p_0(Stream_8, (MR_String) "mercury.String.hash3_1_f_0");
            mercury__io__write_string_4_p_0(Stream_8, (MR_String) "(");
            ml_backend__mlds_to_cs_data__output_rval_for_csharp_5_p_0(Info_7, Expr_10, Stream_8);
            mercury__io__write_string_4_p_0(Stream_8, (MR_String) ")");
          }
          break;
        case (MR_Integer) 8:
          {
            mercury__io__write_string_4_p_0(Stream_8, (MR_String) "mercury.String.hash4_1_f_0");
            mercury__io__write_string_4_p_0(Stream_8, (MR_String) "(");
            ml_backend__mlds_to_cs_data__output_rval_for_csharp_5_p_0(Info_7, Expr_10, Stream_8);
            mercury__io__write_string_4_p_0(Stream_8, (MR_String) ")");
          }
          break;
        case (MR_Integer) 9:
          {
            mercury__io__write_string_4_p_0(Stream_8, (MR_String) "mercury.String.hash5_1_f_0");
            mercury__io__write_string_4_p_0(Stream_8, (MR_String) "(");
            ml_backend__mlds_to_cs_data__output_rval_for_csharp_5_p_0(Info_7, Expr_10, Stream_8);
            mercury__io__write_string_4_p_0(Stream_8, (MR_String) ")");
          }
          break;
        case (MR_Integer) 10:
          {
            mercury__io__write_string_4_p_0(Stream_8, (MR_String) "mercury.String.hash6_1_f_0");
            mercury__io__write_string_4_p_0(Stream_8, (MR_String) "(");
            ml_backend__mlds_to_cs_data__output_rval_for_csharp_5_p_0(Info_7, Expr_10, Stream_8);
            mercury__io__write_string_4_p_0(Stream_8, (MR_String) ")");
          }
          break;
        case (MR_Integer) 11:
        case (MR_Integer) 12:
        case (MR_Integer) 13:
        case (MR_Integer) 14:
        case (MR_Integer) 15:
        case (MR_Integer) 16:
          {
            mercury__require__unexpected_2_p_0((MR_String) "predicate \140ml_backend.mlds_to_cs_data.output_unop_for_csharp\'/6", (MR_String) "invalid unary operator");
            return;
          }
          break;
      }
      break;
    case (MR_Integer) 1:
      {
        MR_Word IntType_13 = ((MR_Unsigned) ((MR_hl_field(1, UnaryOp_9, (MR_Integer) 0))) & (MR_Integer) 15);

        switch (IntType_13) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
          case (MR_Integer) 6:
          case (MR_Integer) 8:
          case (MR_Integer) 1:
          case (MR_Integer) 7:
          case (MR_Integer) 9:
            {
              mercury__io__write_string_4_p_0(Stream_8, (MR_String) "~(");
              ml_backend__mlds_to_cs_data__output_rval_for_csharp_5_p_0(Info_7, Expr_10, Stream_8);
              mercury__io__write_string_4_p_0(Stream_8, (MR_String) ")");
            }
            break;
          case (MR_Integer) 4:
            {
              mercury__io__write_string_4_p_0(Stream_8, (MR_String) "(short)");
              mercury__io__write_string_4_p_0(Stream_8, (MR_String) " ~(");
              ml_backend__mlds_to_cs_data__output_rval_for_csharp_5_p_0(Info_7, Expr_10, Stream_8);
              mercury__io__write_string_4_p_0(Stream_8, (MR_String) ")");
            }
            break;
          case (MR_Integer) 2:
            {
              mercury__io__write_string_4_p_0(Stream_8, (MR_String) "(sbyte)");
              mercury__io__write_string_4_p_0(Stream_8, (MR_String) " ~(");
              ml_backend__mlds_to_cs_data__output_rval_for_csharp_5_p_0(Info_7, Expr_10, Stream_8);
              mercury__io__write_string_4_p_0(Stream_8, (MR_String) ")");
            }
            break;
          case (MR_Integer) 5:
            {
              mercury__io__write_string_4_p_0(Stream_8, (MR_String) "unchecked (");
              mercury__io__write_string_4_p_0(Stream_8, (MR_String) "(ushort)");
              mercury__io__write_string_4_p_0(Stream_8, (MR_String) " ~(");
              ml_backend__mlds_to_cs_data__output_rval_for_csharp_5_p_0(Info_7, Expr_10, Stream_8);
              mercury__io__write_string_4_p_0(Stream_8, (MR_String) "))");
            }
            break;
          case (MR_Integer) 3:
            {
              mercury__io__write_string_4_p_0(Stream_8, (MR_String) "unchecked (");
              mercury__io__write_string_4_p_0(Stream_8, (MR_String) "(byte)");
              mercury__io__write_string_4_p_0(Stream_8, (MR_String) " ~(");
              ml_backend__mlds_to_cs_data__output_rval_for_csharp_5_p_0(Info_7, Expr_10, Stream_8);
              mercury__io__write_string_4_p_0(Stream_8, (MR_String) "))");
            }
            break;
        }
      }
      break;
  }
}

static void MR_CALL 
ml_backend__mlds_to_cs_data__output_unboxed_rval_for_csharp_6_p_0(
  MR_Word Info_7,
  MR_Word Type_8,
  MR_Word Expr_9,
  MR_Word Stream_10)
{
  MR_String Var_18;

  Var_18 = ml_backend__mlds_to_cs_type__type_to_string_for_csharp_2_f_0(Info_7, Type_8);
  mercury__io__write_string_4_p_0(Stream_10, (MR_String) "((");
  mercury__io__write_string_4_p_0(Stream_10, Var_18);
  mercury__io__write_string_4_p_0(Stream_10, (MR_String) ") ");
  ml_backend__mlds_to_cs_data__output_rval_for_csharp_5_p_0(Info_7, Expr_9, Stream_10);
  mercury__io__write_string_4_p_0(Stream_10, (MR_String) ")");
}

static MR_String MR_CALL 
ml_backend__mlds_to_cs_data__get_default_initializer_for_csharp_2_f_0(
  MR_Word Info_4,
  MR_Word Type_5)
{
  MR_String Initializer_6;

  switch (MR_tag((MR_Word) Type_5)) {
    default: /*NOTREACHED*/ MR_assert(0);
    case (MR_Integer) 0:
      switch (MR_unmkbody(Type_5)) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 0:
        case (MR_Integer) 5:
        case (MR_Integer) 6:
        case (MR_Integer) 7:
        case (MR_Integer) 8:
          Initializer_6 = (MR_String) "null";
          break;
        case (MR_Integer) 1:
          Initializer_6 = (MR_String) "0";
          break;
        case (MR_Integer) 2:
          Initializer_6 = (MR_String) "null";
          break;
        case (MR_Integer) 3:
          Initializer_6 = (MR_String) "\'\\u0000\'";
          break;
        case (MR_Integer) 4:
          Initializer_6 = (MR_String) "false";
          break;
        case (MR_Integer) 9:
          mercury__require__unexpected_2_p_0((MR_String) "function \140ml_backend.mlds_to_cs_data.get_default_initializer_for_csharp\'/2", (MR_String) "variable has unknown_type");
          break;
      }
      break;
    case (MR_Integer) 1:
    case (MR_Integer) 2:
      Initializer_6 = (MR_String) "null";
      break;
    case (MR_Integer) 3:
      switch (((MR_Integer) ((MR_hl_field(3, Type_5, (MR_Integer) 0))))) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 0:
        case (MR_Integer) 1:
        case (MR_Integer) 2:
        case (MR_Integer) 4:
        case (MR_Integer) 5:
        case (MR_Integer) 8:
        case (MR_Integer) 9:
        case (MR_Integer) 10:
        case (MR_Integer) 11:
        case (MR_Integer) 12:
          Initializer_6 = (MR_String) "null";
          break;
        case (MR_Integer) 3:
          {
            MR_Word CtorCat_8 = ((MR_Word) ((MR_hl_field(3, Type_5, (MR_Integer) 2))));

            switch (MR_tag((MR_Word) CtorCat_8)) {
              default: /*NOTREACHED*/ MR_assert(0);
              case (MR_Integer) 0:
                switch (MR_unmkbody(CtorCat_8)) {
                  default: /*NOTREACHED*/ MR_assert(0);
                  case (MR_Integer) 0:
                    {
                      MR_String TypeName_12;
                      MR_String Var_31;

                      TypeName_12 = ml_backend__mlds_to_cs_type__type_to_string_for_csharp_2_f_0(Info_4, Type_5);
                      Var_31 = mercury__string__f_43_43_2_f_0(TypeName_12, (MR_String) ")");
                      Initializer_6 = mercury__string__f_43_43_2_f_0((MR_String) "default(", Var_31);
                    }
                    break;
                  case (MR_Integer) 1:
                  case (MR_Integer) 2:
                  case (MR_Integer) 3:
                  case (MR_Integer) 4:
                    Initializer_6 = (MR_String) "null";
                    break;
                }
                break;
              case (MR_Integer) 2:
                {
                  MR_String TypeName_12;
                  MR_String Var_31;

                  TypeName_12 = ml_backend__mlds_to_cs_type__type_to_string_for_csharp_2_f_0(Info_4, Type_5);
                  Var_31 = mercury__string__f_43_43_2_f_0(TypeName_12, (MR_String) ")");
                  Initializer_6 = mercury__string__f_43_43_2_f_0((MR_String) "default(", Var_31);
                }
                break;
              case (MR_Integer) 3:
                switch (((MR_Integer) ((MR_hl_field(3, CtorCat_8, (MR_Integer) 0))))) {
                  default: /*NOTREACHED*/ MR_assert(0);
                  case (MR_Integer) 0:
                    Initializer_6 = (MR_String) "null";
                    break;
                  case (MR_Integer) 1:
                    {
                      MR_String TypeName_12;
                      MR_String Var_31;

                      TypeName_12 = ml_backend__mlds_to_cs_type__type_to_string_for_csharp_2_f_0(Info_4, Type_5);
                      Var_31 = mercury__string__f_43_43_2_f_0(TypeName_12, (MR_String) ")");
                      Initializer_6 = mercury__string__f_43_43_2_f_0((MR_String) "default(", Var_31);
                    }
                    break;
                }
                break;
            }
          }
          break;
        case (MR_Integer) 6:
          {
            MR_Word IntType_13 = ((MR_Unsigned) ((MR_hl_field(3, Type_5, (MR_Integer) 1))) & (MR_Integer) 15);

            Initializer_6 = ((&ml_backend__mlds_to_cs_data_vector_common_2[0 + IntType_13]))->ml_backend__mlds_to_cs_data__vector_common_type_2_0__vct_2_f_0;
          }
          break;
        case (MR_Integer) 7:
          {
            MR_Word ForeignType_26 = ((MR_Word) ((MR_hl_field(3, Type_5, (MR_Integer) 1))));

            switch (MR_tag((MR_Word) ForeignType_26)) {
              default: /*NOTREACHED*/ MR_assert(0);
              case (MR_Integer) 0:
              case (MR_Integer) 1:
                mercury__require__unexpected_2_p_0((MR_String) "function \140ml_backend.mlds_to_cs_data.get_default_initializer_for_csharp\'/2", (MR_String) "wrong foreign language type");
                break;
              case (MR_Integer) 2:
                {
                  MR_String CsharpType_27;
                  MR_Word Var_33 = ((MR_Word) ((MR_hl_field(2, ForeignType_26, (MR_Integer) 0))));
                  MR_String Var_35;

                  CsharpType_27 = (MR_String) (Var_33);
                  Var_35 = mercury__string__f_43_43_2_f_0(CsharpType_27, (MR_String) ")");
                  Initializer_6 = mercury__string__f_43_43_2_f_0((MR_String) "default(", Var_35);
                }
                break;
            }
          }
          break;
      }
      break;
  }
  return Initializer_6;
}

static void MR_CALL 
ml_backend__mlds_to_cs_data__output_uint64_const_for_csharp_4_p_0(
  MR_Word Stream_5,
  uint64_t U64_6)
{
  mercury__io__write_uint64_4_p_0(Stream_5, U64_6);
  mercury__io__write_string_4_p_0(Stream_5, (MR_String) "UL");
}

static void MR_CALL 
ml_backend__mlds_to_cs_data__output_uint8_const_for_csharp_4_p_0(
  MR_Word Stream_5,
  uint8_t U8_6)
{
  mercury__io__write_string_4_p_0(Stream_5, (MR_String) "(byte) ");
  mercury__io__write_uint8_4_p_0(Stream_5, U8_6);
}

static void MR_CALL 
ml_backend__mlds_to_cs_data__output_int_const_for_csharp_4_p_0(
  MR_Word Stream_5,
  MR_Integer N_6)
{
  MR_bool succeeded = (N_6 > (MR_Integer) 0);
  uint32_t U32_9;
  int32_t _I32_8;

  if (succeeded)
  {
    succeeded = mercury__int32__from_int_2_p_0(N_6, &_I32_8);
    succeeded = !(succeeded);
    if (succeeded)
      succeeded = mercury__uint32__from_int_2_p_0(N_6, &U32_9);
  }
  if (succeeded)
  {
    MR_Integer N32_10;
    MR_Unsigned Var_23;
    MR_String Var_24;

    N32_10 = mercury__uint32__cast_to_int_1_f_0(U32_9);
    mercury__io__write_string_4_p_0(Stream_5, (MR_String) "unchecked((int) 0x");
    mercury__string__format__format_cast_int_to_uint_2_p_0(N32_10, &Var_23);
    mercury__string__format__format_uint_component_nowidth_noprec_4_p_0((MR_Word) (&ml_backend__mlds_to_cs_data_scalar_common_1[0]), (MR_Integer) 2, Var_23, &Var_24);
    mercury__io__write_string_4_p_0(Stream_5, Var_24);
    mercury__io__write_string_4_p_0(Stream_5, (MR_String) ")");
  }
  else
    mercury__io__write_int_4_p_0(Stream_5, N_6);
}

static MR_bool MR_CALL 
ml_backend__mlds_to_cs_data____Unify____maybe_for_call_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  MR_bool succeeded;

  succeeded = ml_backend__mlds_to_cs_data____Unify____maybe_for_call_0_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
  return succeeded;
}

static void MR_CALL 
ml_backend__mlds_to_cs_data____Compare____maybe_for_call_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  MR_Word conv0_HeadVar__1_1;

  ml_backend__mlds_to_cs_data____Compare____maybe_for_call_0_0(&conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
  *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
}

void mercury__ml_backend__mlds_to_cs_data__init(void)
{
}

void mercury__ml_backend__mlds_to_cs_data__init_type_tables(void)
{
	static MR_bool initialised = MR_FALSE;
	if (initialised) return;
	initialised = MR_TRUE;

	MR_register_type_ctor_info(&ml_backend__mlds_to_cs_data__ml_backend__mlds_to_cs_data__type_ctor_info_maybe_for_call_0);
}

void mercury__ml_backend__mlds_to_cs_data__init_debugger(void)
{
	MR_fatal_error("debugger initialization in MLDS grade");
}

// Ensure everything is compiled with the same grade.
const char *mercury__ml_backend__mlds_to_cs_data__grade_check(void)
{
    return &MR_GRADE_VAR;
}

// :- end_module ml_backend.mlds_to_cs_data.
