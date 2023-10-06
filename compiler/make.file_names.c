/*
** Automatically generated from `make.file_names.m'
** by the Mercury compiler,
** version rotd-2023-10-06
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


// :- module make.file_names.
// :- implementation.

/*
INIT mercury__make__file_names__init
ENDINIT
*/

#include "make.file_names.mih"


#include "array.mih"
#include "assoc_list.mih"
#include "backend_libs.mih"
#include "bitmap.mih"
#include "bool.mih"
#include "builtin.mih"
#include "char.mih"
#include "construct.mih"
#include "cord.mih"
#include "deconstruct.mih"
#include "enum.mih"
#include "getopt.mih"
#include "io.mih"
#include "libs.mih"
#include "list.mih"
#include "make.mih"
#include "map.mih"
#include "maybe.mih"
#include "mdbcomp.mih"
#include "one_or_more.mih"
#include "one_or_more_map.mih"
#include "pair.mih"
#include "parse_tree.mih"
#include "pretty_printer.mih"
#include "private_builtin.mih"
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
#include "unit.mih"
#include "univ.mih"
#include "varset.mih"
#include "version_array.mih"
#include "version_hash_table.mih"
#include "backend_libs.compile_target_code.mih"
#include "libs.file_util.mih"
#include "libs.globals.mih"
#include "libs.maybe_util.mih"
#include "libs.op_mode.mih"
#include "libs.optimization_options.mih"
#include "libs.options.mih"
#include "libs.timestamp.mih"
#include "libs.trace_params.mih"
#include "make.build.mih"
#include "make.deps_cache.mih"
#include "make.deps_set.mih"
#include "make.find_local_modules.mih"
#include "make.get_module_dep_info.mih"
#include "make.make_info.mih"
#include "make.options_file.mih"
#include "mdbcomp.feedback.mih"
#include "mdbcomp.prim_data.mih"
#include "mdbcomp.sym_name.mih"
#include "parse_tree.file_names.mih"
#include "parse_tree.module_baggage.mih"
#include "parse_tree.module_dep_info.mih"
#include "parse_tree.prog_data.mih"
#include "parse_tree.prog_data_foreign.mih"
#include "parse_tree.prog_data_pragma.mih"
#include "parse_tree.prog_foreign.mih"
#include "parse_tree.prog_item.mih"
#include "parse_tree.read_modules.mih"
#include "parse_tree.set_of_var.mih"




static const MR_DuFunctorDesc make__file_names__make__file_names__du_functor_desc_target_extension_0_0;

static const MR_PseudoTypeInfo make__file_names__make__file_names__field_types_target_extension_0_1[1];

static const MR_DuFunctorDesc make__file_names__make__file_names__du_functor_desc_target_extension_0_1;

static const MR_PseudoTypeInfo make__file_names__make__file_names__field_types_target_extension_0_2[2];

static const MR_DuArgLocn make__file_names__make__file_names__field_locns_target_extension_0_2[2];

static const MR_DuFunctorDesc make__file_names__make__file_names__du_functor_desc_target_extension_0_2;

static const MR_PseudoTypeInfo make__file_names__make__file_names__field_types_target_extension_0_3[2];

static const MR_DuArgLocn make__file_names__make__file_names__field_locns_target_extension_0_3[2];

static const MR_DuFunctorDesc make__file_names__make__file_names__du_functor_desc_target_extension_0_3;

static const MR_DuFunctorDescPtr make__file_names__make__file_names__du_stag_ordered_target_extension_0_0[1];

static const MR_DuFunctorDescPtr make__file_names__make__file_names__du_stag_ordered_target_extension_0_1[1];

static const MR_DuFunctorDescPtr make__file_names__make__file_names__du_stag_ordered_target_extension_0_2[1];

static const MR_DuFunctorDescPtr make__file_names__make__file_names__du_stag_ordered_target_extension_0_3[1];

static const MR_DuPtagLayout make__file_names__make__file_names__du_ptag_ordered_target_extension_0[4];

static const MR_DuFunctorDescPtr make__file_names__make__file_names__du_name_ordered_target_extension_0[4];

static const MR_Integer make__file_names__make__file_names__functor_number_map_target_extension_0[4];

static void MR_CALL 
make__file_names____Compare____target_extension_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3);

static MR_bool MR_CALL 
make__file_names____Unify____target_extension_0_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2);

static void MR_CALL 
make__file_names__module_target_to_search_file_name_7_p_0(
  MR_Word Globals_8,
  MR_String From_9,
  MR_Word TargetType_10,
  MR_Word ModuleName_11,
  MR_String * FileName_12);

static MR_bool MR_CALL 
make__file_names____Unify____target_extension_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2);

static void MR_CALL 
make__file_names____Compare____target_extension_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3);


static /* final */ const MR_Box make__file_names_scalar_common_1[25][1];

static /* final */ const MR_Box make__file_names_scalar_common_2[13][2];


struct make__file_names__vector_common_type_3_0_s {
  const MR_Word make__file_names__vector_common_type_3_0__vct_3_f_0;
};

static /* final */ const struct make__file_names__vector_common_type_3_0_s make__file_names_vector_common_3[16];



static /* final */ const MR_Box make__file_names_scalar_common_1[25][1] = {
  /* row   0 */
  { (MR_Box) ((MR_Unsigned) 0U) },
  /* row   1 */
  { (MR_Box) ((MR_Unsigned) 1U) },
  /* row   2 */
  { (MR_Box) ((MR_Unsigned) 13U) },
  /* row   3 */
  { (MR_Box) ((MR_Unsigned) 4U) },
  /* row   4 */
  { (MR_Box) ((MR_Unsigned) 5U) },
  /* row   5 */
  { (MR_Box) ((MR_Unsigned) 6U) },
  /* row   6 */
  { ((MR_Box) (MR_mkword(3, &make__file_names_scalar_common_2[5]))) },
  /* row   7 */
  { ((MR_Box) (MR_mkword(3, &make__file_names_scalar_common_2[6]))) },
  /* row   8 */
  { ((MR_Box) (&make__file_names_scalar_common_1[0])) },
  /* row   9 */
  { ((MR_Box) (MR_mkword(3, &make__file_names_scalar_common_2[7]))) },
  /* row  10 */
  { ((MR_Box) (MR_mkword(3, &make__file_names_scalar_common_2[8]))) },
  /* row  11 */
  { (MR_Box) ((MR_Unsigned) 23U) },
  /* row  12 */
  { ((MR_Box) (&make__file_names_scalar_common_1[11])) },
  /* row  13 */
  { ((MR_Box) (MR_mkword(1, &make__file_names_scalar_common_1[0]))) },
  /* row  14 */
  { ((MR_Box) (MR_mkword(1, &make__file_names_scalar_common_1[1]))) },
  /* row  15 */
  { (MR_Box) ((MR_Unsigned) 2U) },
  /* row  16 */
  { ((MR_Box) (MR_mkword(1, &make__file_names_scalar_common_1[15]))) },
  /* row  17 */
  { (MR_Box) ((MR_Unsigned) 3U) },
  /* row  18 */
  { ((MR_Box) (MR_mkword(1, &make__file_names_scalar_common_1[17]))) },
  /* row  19 */
  { ((MR_Box) (MR_mkword(3, &make__file_names_scalar_common_2[9]))) },
  /* row  20 */
  { ((MR_Box) (MR_mkword(3, &make__file_names_scalar_common_2[10]))) },
  /* row  21 */
  { ((MR_Box) (MR_mkword(3, &make__file_names_scalar_common_2[11]))) },
  /* row  22 */
  { ((MR_Box) (MR_mkword(3, &make__file_names_scalar_common_2[12]))) },
  /* row  23 */
  { (MR_Box) ((MR_Unsigned) 34U) },
  /* row  24 */
  { ((MR_Box) (&make__file_names_scalar_common_1[23])) },
};

static /* final */ const MR_Box make__file_names_scalar_common_2[13][2] = {
  /* row   0 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 0U)),
    (MR_Box) ((MR_Unsigned) 19U)
  },
  /* row   1 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 0U)),
    (MR_Box) ((MR_Unsigned) 4U)
  },
  /* row   2 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 0U)),
    (MR_Box) ((MR_Unsigned) 5U)
  },
  /* row   3 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 0U)),
    (MR_Box) ((MR_Unsigned) 6U)
  },
  /* row   4 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 0U)),
    (MR_Box) ((MR_Unsigned) 0U)
  },
  /* row   5 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 3U)),
    (MR_Box) ((MR_Unsigned) 2U)
  },
  /* row   6 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 0U)),
    (MR_Box) ((MR_Unsigned) 2U)
  },
  /* row   7 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 2U)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row   8 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 0U)),
    (MR_Box) ((MR_Unsigned) 3U)
  },
  /* row   9 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 1U)),
    (MR_Box) ((MR_Unsigned) 1U)
  },
  /* row  10 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 1U)),
    (MR_Box) ((MR_Unsigned) 0U)
  },
  /* row  11 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 3U)),
    (MR_Box) ((MR_Unsigned) 0U)
  },
  /* row  12 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 0U)),
    (MR_Box) ((MR_Unsigned) 22U)
  },
};


static /* final */ const struct make__file_names__vector_common_type_3_0_s make__file_names_vector_common_3[16] = {
  /* row   0 */   { (MR_Word) ((MR_Unsigned) 28U) },
  /* row   1 */   { (MR_Word) ((MR_Unsigned) 36U) },
  /* row   2 */   { (MR_Word) ((MR_Unsigned) 48U) },
  /* row   3 */   { (MR_Word) ((MR_Unsigned) 40U) },
  /* row   4 */   { (MR_Word) ((MR_Unsigned) 4U) },
  /* row   5 */   { (MR_Word) ((MR_Unsigned) 12U) },
  /* row   6 */   { (MR_Word) ((MR_Unsigned) 8U) },
  /* row   7 */   { (MR_Word) ((MR_Unsigned) 16U) },
  /* row   8 */   { (MR_Word) ((MR_Unsigned) 20U) },
  /* row   9 */   { (MR_Word) ((MR_Unsigned) 44U) },
  /* row  10 */   { (MR_Word) ((MR_Unsigned) 0U) },
  /* row  11 */   { (MR_Word) (MR_mkword(1, &make__file_names_scalar_common_1[0])) },
  /* row  12 */   { (MR_Word) (MR_mkword(1, &make__file_names_scalar_common_1[1])) },
  /* row  13 */   { (MR_Word) ((MR_Unsigned) 24U) },
  /* row  14 */   { (MR_Word) ((MR_Unsigned) 32U) },
  /* row  15 */   { (MR_Word) ((MR_Unsigned) 52U) },
};


#include "array.mh"
#include "bitmap.mh"
#include "io.mh"
#include "string.mh"
#include "time.mh"
#include "version_array.mh"
#include "io.stream_ops.mh"
#include "make.build.mh"


static const MR_DuFunctorDesc make__file_names__make__file_names__du_functor_desc_target_extension_0_0 = {
  (MR_String) "source",
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

static const MR_PseudoTypeInfo make__file_names__make__file_names__field_types_target_extension_0_1[1] = { (MR_PseudoTypeInfo) (&parse_tree__file_names__parse_tree__file_names__type_ctor_info_ext_0) };

static const MR_DuFunctorDesc make__file_names__make__file_names__du_functor_desc_target_extension_0_1 = {
  (MR_String) "extension",
  INT16_C(1),
  UINT16_C(0),
  MR_SECTAG_NONE,
  UINT8_C(1),
  (MR_Integer) -1,
  INT32_C(1),
  make__file_names__make__file_names__field_types_target_extension_0_1,
  NULL,
  NULL,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE,
  UINT8_C(0)
};

static const MR_PseudoTypeInfo make__file_names__make__file_names__field_types_target_extension_0_2[2] = {
  (MR_PseudoTypeInfo) (&backend_libs__compile_target_code__backend_libs__compile_target_code__type_ctor_info_pic_0),
  (MR_PseudoTypeInfo) (&libs__globals__libs__globals__type_ctor_info_foreign_language_0)
};

static const MR_DuArgLocn make__file_names__make__file_names__field_locns_target_extension_0_2[2] = {
  {
    (MR_Integer) 0,
    (MR_Integer) 2,
    (MR_Integer) 1
  },
  {
    (MR_Integer) 0,
    (MR_Integer) 0,
    (MR_Integer) 2
  }
};

static const MR_DuFunctorDesc make__file_names__make__file_names__du_functor_desc_target_extension_0_2 = {
  (MR_String) "foreign_obj",
  INT16_C(2),
  UINT16_C(0),
  MR_SECTAG_NONE,
  UINT8_C(2),
  (MR_Integer) -1,
  INT32_C(2),
  make__file_names__make__file_names__field_types_target_extension_0_2,
  NULL,
  make__file_names__make__file_names__field_locns_target_extension_0_2,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE,
  UINT8_C(0)
};

static const MR_PseudoTypeInfo make__file_names__make__file_names__field_types_target_extension_0_3[2] = {
  (MR_PseudoTypeInfo) (&backend_libs__compile_target_code__backend_libs__compile_target_code__type_ctor_info_pic_0),
  (MR_PseudoTypeInfo) (&mercury__builtin__builtin__type_ctor_info_string_0)
};

static const MR_DuArgLocn make__file_names__make__file_names__field_locns_target_extension_0_3[2] = {
  {
    (MR_Integer) 0,
    (MR_Integer) 0,
    (MR_Integer) 1
  },
  {
    (MR_Integer) 1,
    (MR_Integer) 0,
    (MR_Integer) 0
  }
};

static const MR_DuFunctorDesc make__file_names__make__file_names__du_functor_desc_target_extension_0_3 = {
  (MR_String) "fact_table_obj",
  INT16_C(2),
  UINT16_C(0),
  MR_SECTAG_NONE,
  UINT8_C(3),
  (MR_Integer) -1,
  INT32_C(3),
  make__file_names__make__file_names__field_types_target_extension_0_3,
  NULL,
  make__file_names__make__file_names__field_locns_target_extension_0_3,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE,
  UINT8_C(0)
};

static const MR_DuFunctorDescPtr make__file_names__make__file_names__du_stag_ordered_target_extension_0_0[1] = { &make__file_names__make__file_names__du_functor_desc_target_extension_0_0 };

static const MR_DuFunctorDescPtr make__file_names__make__file_names__du_stag_ordered_target_extension_0_1[1] = { &make__file_names__make__file_names__du_functor_desc_target_extension_0_1 };

static const MR_DuFunctorDescPtr make__file_names__make__file_names__du_stag_ordered_target_extension_0_2[1] = { &make__file_names__make__file_names__du_functor_desc_target_extension_0_2 };

static const MR_DuFunctorDescPtr make__file_names__make__file_names__du_stag_ordered_target_extension_0_3[1] = { &make__file_names__make__file_names__du_functor_desc_target_extension_0_3 };

static const MR_DuPtagLayout make__file_names__make__file_names__du_ptag_ordered_target_extension_0[4] = {
  {
    UINT32_C(1),
    MR_SECTAG_LOCAL_REST_OF_WORD,
    make__file_names__make__file_names__du_stag_ordered_target_extension_0_0,
    INT8_C(-1),
    UINT8_C(0),
    UINT8_C(1)
  },
  {
    UINT32_C(1),
    MR_SECTAG_NONE,
    make__file_names__make__file_names__du_stag_ordered_target_extension_0_1,
    INT8_C(-1),
    UINT8_C(1),
    UINT8_C(1)
  },
  {
    UINT32_C(1),
    MR_SECTAG_NONE,
    make__file_names__make__file_names__du_stag_ordered_target_extension_0_2,
    INT8_C(-1),
    UINT8_C(2),
    UINT8_C(1)
  },
  {
    UINT32_C(1),
    MR_SECTAG_NONE,
    make__file_names__make__file_names__du_stag_ordered_target_extension_0_3,
    INT8_C(-1),
    UINT8_C(3),
    UINT8_C(1)
  }
};

static const MR_DuFunctorDescPtr make__file_names__make__file_names__du_name_ordered_target_extension_0[4] = {
  &make__file_names__make__file_names__du_functor_desc_target_extension_0_1,
  &make__file_names__make__file_names__du_functor_desc_target_extension_0_3,
  &make__file_names__make__file_names__du_functor_desc_target_extension_0_2,
  &make__file_names__make__file_names__du_functor_desc_target_extension_0_0
};

static const MR_Integer make__file_names__make__file_names__functor_number_map_target_extension_0[4] = {
  (MR_Integer) 3,
  (MR_Integer) 0,
  (MR_Integer) 2,
  (MR_Integer) 1
};

const MR_TypeCtorInfo_Struct make__file_names__make__file_names__type_ctor_info_target_extension_0 = {
  (MR_Integer) 0,
  UINT8_C(18),
  INT8_C(4),
  MR_TYPECTOR_REP_DU,
  ((MR_Box) (make__file_names____Unify____target_extension_0_0_10001)),
  ((MR_Box) (make__file_names____Compare____target_extension_0_0_10001)),
  (MR_String) "make.file_names",
  (MR_String) "target_extension",
  { make__file_names__make__file_names__du_name_ordered_target_extension_0 },
  { make__file_names__make__file_names__du_ptag_ordered_target_extension_0 },
  (MR_Integer) 4,
  UINT16_C(12),
  make__file_names__make__file_names__functor_number_map_target_extension_0,

};

static void MR_CALL 
make__file_names____Compare____target_extension_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3)
{
  MR_bool succeeded;
  MR_Integer CastX_46 = (MR_Integer) (HeadVar__2_2);
  MR_Integer CastY_47 = (MR_Integer) (HeadVar__3_3);

  succeeded = (CastX_46 == CastY_47);
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
            *HeadVar__1_1 = (MR_Integer) 1;
            break;
        }
        break;
      case (MR_Integer) 1:
        {
          MR_Word Var_53 = ((MR_Word) ((MR_hl_field(1, HeadVar__2_2, (MR_Integer) 0))));

          switch (MR_tag((MR_Word) HeadVar__3_3)) {
            default: /*NOTREACHED*/ MR_assert(0);
            case (MR_Integer) 0:
              *HeadVar__1_1 = (MR_Integer) 2;
              break;
            case (MR_Integer) 1:
              {
                MR_Word ArgY1_11 = ((MR_Word) ((MR_hl_field(1, HeadVar__3_3, (MR_Integer) 0))));

                parse_tree__file_names____Compare____ext_0_0(HeadVar__1_1, Var_53, ArgY1_11);
              }
              break;
            case (MR_Integer) 2:
              *HeadVar__1_1 = (MR_Integer) 1;
              break;
            case (MR_Integer) 3:
              *HeadVar__1_1 = (MR_Integer) 1;
              break;
          }
        }
        break;
      case (MR_Integer) 2:
        {
          MR_Word Var_56 = ((MR_Unsigned) ((MR_hl_field(2, HeadVar__2_2, (MR_Integer) 0))) & (MR_Integer) 3);
          MR_Word Var_57 = ((((MR_Unsigned) ((MR_hl_field(2, HeadVar__2_2, (MR_Integer) 0))) >> 2)) & (MR_Integer) 1);

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
                MR_Word ArgY1_24 = ((((MR_Unsigned) ((MR_hl_field(2, HeadVar__3_3, (MR_Integer) 0))) >> 2)) & (MR_Integer) 1);
                MR_Word ArgY2_27 = ((MR_Unsigned) ((MR_hl_field(2, HeadVar__3_3, (MR_Integer) 0))) & (MR_Integer) 3);
                MR_Word SubResult1_25;
                MR_Integer Var_60 = (MR_Integer) (Var_57);
                MR_Integer Var_61 = (MR_Integer) (ArgY1_24);

                succeeded = (Var_60 < Var_61);
                if (succeeded)
                {
                  SubResult1_25 = (MR_Integer) 1;
                  succeeded = MR_TRUE;
                }
                else
                {
                  succeeded = (Var_60 > Var_61);
                  if (succeeded)
                  {
                    SubResult1_25 = (MR_Integer) 2;
                    succeeded = MR_TRUE;
                  }
                  else
                  {
                    succeeded = MR_TRUE;
                    succeeded = !(succeeded);
                    if (succeeded)
                    {
                      SubResult1_25 = (MR_Integer) 0;
                      succeeded = MR_TRUE;
                    }
                  }
                }
                if (succeeded)
                  *HeadVar__1_1 = SubResult1_25;
                else
                {
                  MR_Integer Var_62 = (MR_Integer) (Var_56);
                  MR_Integer Var_63 = (MR_Integer) (ArgY2_27);

                  succeeded = (Var_62 < Var_63);
                  if (succeeded)
                    *HeadVar__1_1 = (MR_Integer) 1;
                  else
                  {
                    succeeded = (Var_62 > Var_63);
                    if (succeeded)
                      *HeadVar__1_1 = (MR_Integer) 2;
                    else
                      *HeadVar__1_1 = (MR_Integer) 0;
                  }
                }
              }
              break;
            case (MR_Integer) 3:
              *HeadVar__1_1 = (MR_Integer) 1;
              break;
          }
        }
        break;
      case (MR_Integer) 3:
        {
          MR_String Var_54 = ((MR_String) ((MR_hl_field(3, HeadVar__2_2, (MR_Integer) 1))));
          MR_Word Var_55 = ((MR_Unsigned) ((MR_hl_field(3, HeadVar__2_2, (MR_Integer) 0))) & (MR_Integer) 1);

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
              {
                MR_Word ArgY1_42 = ((MR_Unsigned) ((MR_hl_field(3, HeadVar__3_3, (MR_Integer) 0))) & (MR_Integer) 1);
                MR_String ArgY2_45 = ((MR_String) ((MR_hl_field(3, HeadVar__3_3, (MR_Integer) 1))));
                MR_Word SubResult1_43;
                MR_Integer Var_58 = (MR_Integer) (Var_55);
                MR_Integer Var_59 = (MR_Integer) (ArgY1_42);

                succeeded = (Var_58 < Var_59);
                if (succeeded)
                {
                  SubResult1_43 = (MR_Integer) 1;
                  succeeded = MR_TRUE;
                }
                else
                {
                  succeeded = (Var_58 > Var_59);
                  if (succeeded)
                  {
                    SubResult1_43 = (MR_Integer) 2;
                    succeeded = MR_TRUE;
                  }
                  else
                  {
                    succeeded = MR_TRUE;
                    succeeded = !(succeeded);
                    if (succeeded)
                    {
                      SubResult1_43 = (MR_Integer) 0;
                      succeeded = MR_TRUE;
                    }
                  }
                }
                if (succeeded)
                  *HeadVar__1_1 = SubResult1_43;
                else
                  mercury__private_builtin__builtin_compare_string_3_p_0(HeadVar__1_1, Var_54, ArgY2_45);
              }
              break;
          }
        }
        break;
    }
}

static MR_bool MR_CALL 
make__file_names____Unify____target_extension_0_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2)
{
  MR_bool succeeded;
  MR_Integer CastX_15 = (MR_Integer) (HeadVar__1_1);
  MR_Integer CastY_16 = (MR_Integer) (HeadVar__2_2);

  succeeded = (CastX_15 == CastY_16);
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
          MR_Word ArgX1_5 = ((MR_Word) ((MR_hl_field(1, HeadVar__1_1, (MR_Integer) 0))));
          MR_Word ArgY1_6;

          succeeded = ((MR_tag((MR_Word) HeadVar__2_2)) == (MR_Integer) 1);
          if (succeeded)
          {
            ArgY1_6 = ((MR_Word) ((MR_hl_field(1, HeadVar__2_2, (MR_Integer) 0))));
            succeeded = parse_tree__file_names____Unify____ext_0_0(ArgX1_5, ArgY1_6);
          }
        }
        break;
      case (MR_Integer) 2:
        {
          MR_Word ArgX1_7 = ((((MR_Unsigned) ((MR_hl_field(2, HeadVar__1_1, (MR_Integer) 0))) >> 2)) & (MR_Integer) 1);
          MR_Word ArgY1_8;
          MR_Word ArgX2_9 = ((MR_Unsigned) ((MR_hl_field(2, HeadVar__1_1, (MR_Integer) 0))) & (MR_Integer) 3);
          MR_Word ArgY2_10;

          succeeded = ((MR_tag((MR_Word) HeadVar__2_2)) == (MR_Integer) 2);
          if (succeeded)
          {
            ArgY1_8 = ((((MR_Unsigned) ((MR_hl_field(2, HeadVar__2_2, (MR_Integer) 0))) >> 2)) & (MR_Integer) 1);
            ArgY2_10 = ((MR_Unsigned) ((MR_hl_field(2, HeadVar__2_2, (MR_Integer) 0))) & (MR_Integer) 3);
            succeeded = (ArgX1_7 == ArgY1_8);
            if (succeeded)
              succeeded = (ArgX2_9 == ArgY2_10);
          }
        }
        break;
      case (MR_Integer) 3:
        {
          MR_Word ArgX1_11 = ((MR_Unsigned) ((MR_hl_field(3, HeadVar__1_1, (MR_Integer) 0))) & (MR_Integer) 1);
          MR_Word ArgY1_12;
          MR_String ArgX2_13 = ((MR_String) ((MR_hl_field(3, HeadVar__1_1, (MR_Integer) 1))));
          MR_String ArgY2_14;

          succeeded = ((MR_tag((MR_Word) HeadVar__2_2)) == (MR_Integer) 3);
          if (succeeded)
          {
            ArgY1_12 = ((MR_Unsigned) ((MR_hl_field(3, HeadVar__2_2, (MR_Integer) 0))) & (MR_Integer) 1);
            ArgY2_14 = ((MR_String) ((MR_hl_field(3, HeadVar__2_2, (MR_Integer) 1))));
            succeeded = (ArgX1_11 == ArgY1_12);
            if (succeeded)
              succeeded = (strcmp(ArgX2_13, ArgY2_14) == 0);
          }
        }
        break;
    }
  return succeeded;
}

MR_bool MR_CALL 
make__file_names__timestamp_extension_2_p_0(
  MR_Word ModuleTargetType_3,
  MR_Word * Ext_4)
{
  MR_bool succeeded;

  switch (MR_tag((MR_Word) ModuleTargetType_3)) {
    default:
      succeeded = MR_FALSE;
      break;
    case (MR_Integer) 0:
      switch (MR_unmkbody(ModuleTargetType_3)) {
        default:
          succeeded = MR_FALSE;
          break;
        case (MR_Integer) 1:
          {
            *Ext_4 = (MR_Word) (MR_mkword(1, &make__file_names_scalar_common_1[2]));
            succeeded = MR_TRUE;
          }
          break;
        case (MR_Integer) 2:
          {
            *Ext_4 = (MR_Word) (MR_mkword(1, &make__file_names_scalar_common_1[3]));
            succeeded = MR_TRUE;
          }
          break;
        case (MR_Integer) 3:
          {
            *Ext_4 = (MR_Word) (MR_mkword(1, &make__file_names_scalar_common_1[4]));
            succeeded = MR_TRUE;
          }
          break;
        case (MR_Integer) 4:
          {
            *Ext_4 = (MR_Word) (MR_mkword(1, &make__file_names_scalar_common_1[4]));
            succeeded = MR_TRUE;
          }
          break;
        case (MR_Integer) 5:
          {
            *Ext_4 = (MR_Word) (MR_mkword(1, &make__file_names_scalar_common_1[5]));
            succeeded = MR_TRUE;
          }
          break;
        case (MR_Integer) 6:
          {
            *Ext_4 = (MR_Word) (MR_mkword(3, &make__file_names_scalar_common_2[4]));
            succeeded = MR_TRUE;
          }
          break;
        case (MR_Integer) 7:
          {
            *Ext_4 = (MR_Word) (MR_mkword(3, &make__file_names_scalar_common_2[0]));
            succeeded = MR_TRUE;
          }
          break;
        case (MR_Integer) 9:
          {
            *Ext_4 = (MR_Word) (MR_mkword(3, &make__file_names_scalar_common_2[1]));
            succeeded = MR_TRUE;
          }
          break;
        case (MR_Integer) 10:
          {
            *Ext_4 = (MR_Word) (MR_mkword(3, &make__file_names_scalar_common_2[2]));
            succeeded = MR_TRUE;
          }
          break;
        case (MR_Integer) 11:
          {
            *Ext_4 = (MR_Word) (MR_mkword(3, &make__file_names_scalar_common_2[3]));
            succeeded = MR_TRUE;
          }
          break;
      }
      break;
    case (MR_Integer) 1:
      {
        *Ext_4 = (MR_Word) (MR_mkword(3, &make__file_names_scalar_common_2[1]));
        succeeded = MR_TRUE;
      }
      break;
  }
  return succeeded;
}

MR_bool MR_CALL 
make__file_names__target_extension_synonym_2_p_0(
  MR_String HeadVar__1_1,
  MR_Word * HeadVar__2_2)
{
  MR_bool succeeded = (strcmp(HeadVar__1_1, (MR_String) ".csharp") == 0);

  if (succeeded)
  {
    *HeadVar__2_2 = (MR_Word) ((MR_Unsigned) 40U);
    succeeded = MR_TRUE;
  }
  return succeeded;
}

MR_bool MR_CALL 
make__file_names__extension_to_target_type_3_p_0(
  MR_Word Globals_4,
  MR_String ExtStr_5,
  MR_Word * Target_6)
{
  MR_bool succeeded;
  MR_Word TargetPrime_7;

  {
    MR_Integer case_num_0 = (MR_Integer) -1;

    if (((MR_nth_code_unit(ExtStr_5, 0)) == (MR_Integer) 46))
      switch (MR_nth_code_unit(ExtStr_5, 1)) {
        case (MR_Integer) 97:
          if (MR_offset_streq(2, ExtStr_5, (MR_String) ".analysis"))
            case_num_0 = (MR_Integer) 0;
          break;
        case (MR_Integer) 99:
          switch (MR_nth_code_unit(ExtStr_5, 2)) {
            case (MR_Integer) 0:
              case_num_0 = (MR_Integer) 1;
              break;
            case (MR_Integer) 108:
              if (MR_offset_streq(3, ExtStr_5, (MR_String) ".class"))
                case_num_0 = (MR_Integer) 2;
              break;
            case (MR_Integer) 115:
              if (MR_offset_streq(3, ExtStr_5, (MR_String) ".cs"))
                case_num_0 = (MR_Integer) 3;
              break;
          }
          break;
        case (MR_Integer) 101:
          if (MR_offset_streq(2, ExtStr_5, (MR_String) ".err"))
            case_num_0 = (MR_Integer) 4;
          break;
        case (MR_Integer) 105:
          if (((((MR_nth_code_unit(ExtStr_5, 2)) == (MR_Integer) 110)) && (((MR_nth_code_unit(ExtStr_5, 3)) == (MR_Integer) 116))))
            switch (MR_nth_code_unit(ExtStr_5, 4)) {
              case (MR_Integer) 0:
                case_num_0 = (MR_Integer) 5;
                break;
              case (MR_Integer) 48:
                if (MR_offset_streq(5, ExtStr_5, (MR_String) ".int0"))
                  case_num_0 = (MR_Integer) 6;
                break;
              case (MR_Integer) 50:
                if (MR_offset_streq(5, ExtStr_5, (MR_String) ".int2"))
                  case_num_0 = (MR_Integer) 7;
                break;
              case (MR_Integer) 51:
                if (MR_offset_streq(5, ExtStr_5, (MR_String) ".int3"))
                  case_num_0 = (MR_Integer) 8;
                break;
            }
          break;
        case (MR_Integer) 106:
          if (MR_offset_streq(2, ExtStr_5, (MR_String) ".java"))
            case_num_0 = (MR_Integer) 9;
          break;
        case (MR_Integer) 109:
          switch (MR_nth_code_unit(ExtStr_5, 2)) {
            case (MR_Integer) 0:
              case_num_0 = (MR_Integer) 10;
              break;
            case (MR_Integer) 104:
              if (MR_offset_streq(3, ExtStr_5, (MR_String) ".mh"))
                case_num_0 = (MR_Integer) 11;
              break;
            case (MR_Integer) 105:
              if (MR_offset_streq(3, ExtStr_5, (MR_String) ".mih"))
                case_num_0 = (MR_Integer) 12;
              break;
          }
          break;
        case (MR_Integer) 111:
          if (MR_offset_streq(2, ExtStr_5, (MR_String) ".opt"))
            case_num_0 = (MR_Integer) 13;
          break;
        case (MR_Integer) 116:
          if (MR_offset_streq(2, ExtStr_5, (MR_String) ".track_flags"))
            case_num_0 = (MR_Integer) 14;
          break;
        case (MR_Integer) 120:
          if (MR_offset_streq(2, ExtStr_5, (MR_String) ".xml"))
            case_num_0 = (MR_Integer) 15;
          break;
      }
    if ((case_num_0 < (MR_Integer) 0))
      succeeded = MR_FALSE;
    else
    {
      // we found a match; look up the results
      ;
      TargetPrime_7 = ((&make__file_names_vector_common_3[0 + case_num_0]))->make__file_names__vector_common_type_3_0__vct_3_f_0;
      succeeded = MR_TRUE;
    }
  }
  if (succeeded)
  {
    *Target_6 = TargetPrime_7;
    succeeded = MR_TRUE;
  }
  else
  {
    MR_Word PIC_8;

    succeeded = backend_libs__compile_target_code__is_maybe_pic_object_file_extension_3_p_0(Globals_4, ExtStr_5, &PIC_8);
    if (succeeded)
    {
      {
        MR_Word base;
        base = (MR_Word) MR_mkword(2, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
        *Target_6 = base;
        MR_hl_field(2, base, 0) = (MR_Box) ((MR_Unsigned) (PIC_8));
      }
      succeeded = MR_TRUE;
    }
  }
  return succeeded;
}

void MR_CALL 
make__file_names__get_make_target_file_name_6_p_0(
  MR_Word Globals_7,
  MR_String From_8,
  MR_Word TargetFile_9,
  MR_String * FileName_10)
{
  MR_Word ModuleName_12 = ((MR_Word) ((MR_hl_field(0, TargetFile_9, (MR_Integer) 0))));
  MR_Word TargetType_13 = ((MR_Word) ((MR_hl_field(0, TargetFile_9, (MR_Integer) 1))));

  make__file_names__module_target_to_file_name_7_p_0(Globals_7, From_8, TargetType_13, ModuleName_12, FileName_10);
}

void MR_CALL 
make__file_names__dependency_file_to_file_name_5_p_0(
  MR_Word Globals_6,
  MR_Word DepFile_7,
  MR_String * FileName_8)
{
  if (((MR_tag((MR_Word) DepFile_7)) == (MR_Integer) 1))
    *FileName_8 = ((MR_String) ((MR_hl_field(1, DepFile_7, (MR_Integer) 0))));
  else
  {
    MR_Word TargetFile_10 = (MR_Word) ((MR_Word) (DepFile_7));
    MR_Word ModuleName_14 = ((MR_Word) ((MR_hl_field(0, TargetFile_10, (MR_Integer) 0))));
    MR_Word TargetType_15 = ((MR_Word) ((MR_hl_field(0, TargetFile_10, (MR_Integer) 1))));

    make__file_names__module_target_to_file_name_7_p_0(Globals_6, (MR_String) "predicate \140make.file_names.dependency_file_to_file_name\'/5", TargetType_15, ModuleName_14, FileName_8);
  }
}

void MR_CALL 
make__file_names__get_file_name_10_p_0(
  MR_Word ProgressStream_11,
  MR_Word Globals_12,
  MR_String From_13,
  MR_Word Search_14,
  MR_Word TargetFile_15,
  MR_String * FileName_16,
  MR_Word STATE_VARIABLE_Info_0_29,
  MR_Word * STATE_VARIABLE_Info_30)
{
  MR_bool succeeded;
  MR_Word ModuleName_19 = ((MR_Word) ((MR_hl_field(0, TargetFile_15, (MR_Integer) 0))));
  MR_Word TargetType_20 = ((MR_Word) ((MR_hl_field(0, TargetFile_15, (MR_Integer) 1))));

  succeeded = (TargetType_20 == (MR_Word) ((MR_Unsigned) 0U));
  if (succeeded)
  {
    MR_Word MaybeModuleDepInfo_21;

    make__get_module_dep_info__get_maybe_module_dep_info_8_p_0(ProgressStream_11, Globals_12, ModuleName_19, &MaybeModuleDepInfo_21, STATE_VARIABLE_Info_0_29, STATE_VARIABLE_Info_30);
    if ((MaybeModuleDepInfo_21 == (MR_Word) ((MR_Unsigned) 0U)))
      parse_tree__file_names__module_name_to_source_file_name_4_p_0(ModuleName_19, FileName_16);
    else
    {
      MR_Word ModuleDepInfo_22 = ((MR_Word) ((MR_hl_field(1, MaybeModuleDepInfo_21, (MR_Integer) 0))));

      parse_tree__module_dep_info__module_dep_info_get_source_file_name_2_p_0(ModuleDepInfo_22, FileName_16);
    }
  }
  else
  {
    MR_Word TargetExt_23;

    switch (MR_tag((MR_Word) TargetType_20)) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        switch (MR_unmkbody(TargetType_20)) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
            TargetExt_23 = (MR_Word) ((MR_Unsigned) 0U);
            break;
          case (MR_Integer) 1:
            TargetExt_23 = (MR_Word) (MR_mkword(1, &make__file_names_scalar_common_1[12]));
            break;
          case (MR_Integer) 2:
            TargetExt_23 = (MR_Word) (MR_mkword(1, &make__file_names_scalar_common_1[13]));
            break;
          case (MR_Integer) 3:
            TargetExt_23 = (MR_Word) (MR_mkword(1, &make__file_names_scalar_common_1[14]));
            break;
          case (MR_Integer) 4:
            TargetExt_23 = (MR_Word) (MR_mkword(1, &make__file_names_scalar_common_1[16]));
            break;
          case (MR_Integer) 5:
            TargetExt_23 = (MR_Word) (MR_mkword(1, &make__file_names_scalar_common_1[18]));
            break;
          case (MR_Integer) 6:
            TargetExt_23 = (MR_Word) (MR_mkword(1, &make__file_names_scalar_common_1[21]));
            break;
          case (MR_Integer) 7:
            TargetExt_23 = (MR_Word) (MR_mkword(1, &make__file_names_scalar_common_1[6]));
            break;
          case (MR_Integer) 8:
            TargetExt_23 = (MR_Word) (MR_mkword(1, &make__file_names_scalar_common_1[22]));
            break;
          case (MR_Integer) 9:
            TargetExt_23 = (MR_Word) (MR_mkword(1, &make__file_names_scalar_common_1[7]));
            break;
          case (MR_Integer) 10:
            TargetExt_23 = (MR_Word) (MR_mkword(1, &make__file_names_scalar_common_1[10]));
            break;
          case (MR_Integer) 11:
            TargetExt_23 = (MR_Word) (MR_mkword(1, &make__file_names_scalar_common_1[20]));
            break;
          case (MR_Integer) 12:
            TargetExt_23 = (MR_Word) (MR_mkword(1, &make__file_names_scalar_common_1[19]));
            break;
          case (MR_Integer) 13:
            TargetExt_23 = (MR_Word) (MR_mkword(1, &make__file_names_scalar_common_1[24]));
            break;
        }
        break;
      case (MR_Integer) 1:
        {
          MR_Word Var_75 = ((MR_Unsigned) ((MR_hl_field(1, TargetType_20, (MR_Integer) 0))) & (MR_Integer) 1);

          switch (Var_75) {
            default: /*NOTREACHED*/ MR_assert(0);
            case (MR_Integer) 0:
              TargetExt_23 = (MR_Word) (MR_mkword(1, &make__file_names_scalar_common_1[8]));
              break;
            case (MR_Integer) 1:
              TargetExt_23 = (MR_Word) (MR_mkword(1, &make__file_names_scalar_common_1[9]));
              break;
          }
        }
        break;
      case (MR_Integer) 2:
        {
          MR_Word PIC_35 = ((MR_Unsigned) ((MR_hl_field(2, TargetType_20, (MR_Integer) 0))) & (MR_Integer) 1);
          MR_Word ObjExt_36;
          MR_Word Var_70;
          MR_Word Var_37;

          backend_libs__compile_target_code__maybe_pic_object_file_extension_3_p_0(PIC_35, &ObjExt_36, &Var_37);
          {
            Var_70 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(3, Var_70, 0) = ((MR_Box) ((MR_Unsigned) 0U));
            MR_hl_field(3, Var_70, 1) = (MR_Box) ((MR_Unsigned) (ObjExt_36));
          }
          {
            TargetExt_23 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(1, TargetExt_23, 0) = ((MR_Box) (Var_70));
          }
        }
        break;
      case (MR_Integer) 3:
        switch (((MR_Integer) ((MR_hl_field(3, TargetType_20, (MR_Integer) 0))))) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
            {
              MR_Unsigned packed_word_2 = (MR_Unsigned) ((MR_hl_field(3, TargetType_20, (MR_Integer) 1)));

              {
                TargetExt_23 = (MR_Word) MR_mkword(2, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(2, TargetExt_23, 0) = (MR_Box) (packed_word_2);
              }
            }
            break;
          case (MR_Integer) 1:
            {
              MR_String FactFile_39 = ((MR_String) ((MR_hl_field(3, TargetType_20, (MR_Integer) 2))));
              MR_Word PIC_74 = ((MR_Unsigned) ((MR_hl_field(3, TargetType_20, (MR_Integer) 1))) & (MR_Integer) 1);

              {
                TargetExt_23 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(3, TargetExt_23, 0) = (MR_Box) ((MR_Unsigned) (PIC_74));
                MR_hl_field(3, TargetExt_23, 1) = ((MR_Box) (FactFile_39));
              }
            }
            break;
        }
        break;
    }
    switch (MR_tag((MR_Word) TargetExt_23)) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        parse_tree__file_names__module_name_to_source_file_name_4_p_0(ModuleName_19, FileName_16);
        break;
      case (MR_Integer) 1:
        {
          MR_Word Ext_24 = ((MR_Word) ((MR_hl_field(1, TargetExt_23, (MR_Integer) 0))));

          switch (Search_14) {
            default: /*NOTREACHED*/ MR_assert(0);
            case (MR_Integer) 1:
              parse_tree__file_names__module_name_to_search_file_name_5_p_0(Globals_12, From_13, Ext_24, ModuleName_19, FileName_16);
              break;
            case (MR_Integer) 0:
              parse_tree__file_names__module_name_to_file_name_5_p_0(Globals_12, From_13, Ext_24, ModuleName_19, FileName_16);
              break;
          }
        }
        break;
      case (MR_Integer) 2:
      case (MR_Integer) 3:
        switch (Search_14) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 1:
            make__file_names__module_target_to_search_file_name_7_p_0(Globals_12, From_13, TargetType_20, ModuleName_19, FileName_16);
            break;
          case (MR_Integer) 0:
            make__file_names__module_target_to_file_name_7_p_0(Globals_12, From_13, TargetType_20, ModuleName_19, FileName_16);
            break;
        }
        break;
    }
    *STATE_VARIABLE_Info_30 = STATE_VARIABLE_Info_0_29;
  }
}

static void MR_CALL 
make__file_names__module_target_to_search_file_name_7_p_0(
  MR_Word Globals_8,
  MR_String From_9,
  MR_Word TargetType_10,
  MR_Word ModuleName_11,
  MR_String * FileName_12)
{
  while (MR_TRUE)
  {
    MR_Word TargetExt_14;

    // setup for model_det tailcalls optimized into a loop
    ;
    switch (MR_tag((MR_Word) TargetType_10)) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        switch (MR_unmkbody(TargetType_10)) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
            TargetExt_14 = (MR_Word) ((MR_Unsigned) 0U);
            break;
          case (MR_Integer) 1:
            TargetExt_14 = (MR_Word) (MR_mkword(1, &make__file_names_scalar_common_1[12]));
            break;
          case (MR_Integer) 2:
            TargetExt_14 = (MR_Word) (MR_mkword(1, &make__file_names_scalar_common_1[13]));
            break;
          case (MR_Integer) 3:
            TargetExt_14 = (MR_Word) (MR_mkword(1, &make__file_names_scalar_common_1[14]));
            break;
          case (MR_Integer) 4:
            TargetExt_14 = (MR_Word) (MR_mkword(1, &make__file_names_scalar_common_1[16]));
            break;
          case (MR_Integer) 5:
            TargetExt_14 = (MR_Word) (MR_mkword(1, &make__file_names_scalar_common_1[18]));
            break;
          case (MR_Integer) 6:
            TargetExt_14 = (MR_Word) (MR_mkword(1, &make__file_names_scalar_common_1[21]));
            break;
          case (MR_Integer) 7:
            TargetExt_14 = (MR_Word) (MR_mkword(1, &make__file_names_scalar_common_1[6]));
            break;
          case (MR_Integer) 8:
            TargetExt_14 = (MR_Word) (MR_mkword(1, &make__file_names_scalar_common_1[22]));
            break;
          case (MR_Integer) 9:
            TargetExt_14 = (MR_Word) (MR_mkword(1, &make__file_names_scalar_common_1[7]));
            break;
          case (MR_Integer) 10:
            TargetExt_14 = (MR_Word) (MR_mkword(1, &make__file_names_scalar_common_1[10]));
            break;
          case (MR_Integer) 11:
            TargetExt_14 = (MR_Word) (MR_mkword(1, &make__file_names_scalar_common_1[20]));
            break;
          case (MR_Integer) 12:
            TargetExt_14 = (MR_Word) (MR_mkword(1, &make__file_names_scalar_common_1[19]));
            break;
          case (MR_Integer) 13:
            TargetExt_14 = (MR_Word) (MR_mkword(1, &make__file_names_scalar_common_1[24]));
            break;
        }
        break;
      case (MR_Integer) 1:
        {
          MR_Word Var_70 = ((MR_Unsigned) ((MR_hl_field(1, TargetType_10, (MR_Integer) 0))) & (MR_Integer) 1);

          switch (Var_70) {
            default: /*NOTREACHED*/ MR_assert(0);
            case (MR_Integer) 0:
              TargetExt_14 = (MR_Word) (MR_mkword(1, &make__file_names_scalar_common_1[8]));
              break;
            case (MR_Integer) 1:
              TargetExt_14 = (MR_Word) (MR_mkword(1, &make__file_names_scalar_common_1[9]));
              break;
          }
        }
        break;
      case (MR_Integer) 2:
        {
          MR_Word PIC_30 = ((MR_Unsigned) ((MR_hl_field(2, TargetType_10, (MR_Integer) 0))) & (MR_Integer) 1);
          MR_Word ObjExt_31;
          MR_Word Var_65;
          MR_Word Var_32;

          backend_libs__compile_target_code__maybe_pic_object_file_extension_3_p_0(PIC_30, &ObjExt_31, &Var_32);
          {
            Var_65 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(3, Var_65, 0) = ((MR_Box) ((MR_Unsigned) 0U));
            MR_hl_field(3, Var_65, 1) = (MR_Box) ((MR_Unsigned) (ObjExt_31));
          }
          {
            TargetExt_14 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(1, TargetExt_14, 0) = ((MR_Box) (Var_65));
          }
        }
        break;
      case (MR_Integer) 3:
        switch (((MR_Integer) ((MR_hl_field(3, TargetType_10, (MR_Integer) 0))))) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
            {
              MR_Unsigned packed_word_2 = (MR_Unsigned) ((MR_hl_field(3, TargetType_10, (MR_Integer) 1)));

              {
                TargetExt_14 = (MR_Word) MR_mkword(2, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(2, TargetExt_14, 0) = (MR_Box) (packed_word_2);
              }
            }
            break;
          case (MR_Integer) 1:
            {
              MR_String FactFile_34 = ((MR_String) ((MR_hl_field(3, TargetType_10, (MR_Integer) 2))));
              MR_Word PIC_69 = ((MR_Unsigned) ((MR_hl_field(3, TargetType_10, (MR_Integer) 1))) & (MR_Integer) 1);

              {
                TargetExt_14 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(3, TargetExt_14, 0) = (MR_Box) ((MR_Unsigned) (PIC_69));
                MR_hl_field(3, TargetExt_14, 1) = ((MR_Box) (FactFile_34));
              }
            }
            break;
        }
        break;
    }
    switch (MR_tag((MR_Word) TargetExt_14)) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        parse_tree__file_names__module_name_to_source_file_name_4_p_0(ModuleName_11, FileName_12);
        break;
      case (MR_Integer) 1:
        {
          MR_Word Ext_15 = ((MR_Word) ((MR_hl_field(1, TargetExt_14, (MR_Integer) 0))));

          parse_tree__file_names__module_name_to_search_file_name_5_p_0(Globals_8, From_9, Ext_15, ModuleName_11, FileName_12);
        }
        break;
      case (MR_Integer) 2:
        {
          MR_Word PIC_16 = ((((MR_Unsigned) ((MR_hl_field(2, TargetExt_14, (MR_Integer) 0))) >> 2)) & (MR_Integer) 1);
          MR_Word Lang_17 = ((MR_Unsigned) ((MR_hl_field(2, TargetExt_14, (MR_Integer) 0))) & (MR_Integer) 3);
          MR_Word ForeignModuleName_18;
          MR_Word Var_25;
          MR_Word next_value_of_TargetType_10;
          MR_Word next_value_of_ModuleName_11;

          parse_tree__prog_foreign__foreign_language_module_name_3_p_0(ModuleName_11, Lang_17, &ForeignModuleName_18);
          {
            Var_25 = (MR_Word) MR_mkword(2, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(2, Var_25, 0) = (MR_Box) ((MR_Unsigned) (PIC_16));
          }
          // direct tailcall eliminated
          ;
          next_value_of_TargetType_10 = Var_25;
          next_value_of_ModuleName_11 = ForeignModuleName_18;
          TargetType_10 = next_value_of_TargetType_10;
          ModuleName_11 = next_value_of_ModuleName_11;
          continue;
        }
        break;
      case (MR_Integer) 3:
        {
          MR_String FactFile_19 = ((MR_String) ((MR_hl_field(3, TargetExt_14, (MR_Integer) 1))));
          MR_Word ObjExt_20;
          MR_Word Var_28;
          MR_Word PIC_29 = ((MR_Unsigned) ((MR_hl_field(3, TargetExt_14, (MR_Integer) 0))) & (MR_Integer) 1);
          MR_Word Var_21;

          backend_libs__compile_target_code__maybe_pic_object_file_extension_3_p_0(PIC_29, &ObjExt_20, &Var_21);
          {
            Var_28 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(3, Var_28, 0) = ((MR_Box) ((MR_Unsigned) 0U));
            MR_hl_field(3, Var_28, 1) = (MR_Box) ((MR_Unsigned) (ObjExt_20));
          }
          parse_tree__file_names__fact_table_file_name_5_p_0(Globals_8, (MR_String) "predicate \140make.file_names.module_target_to_search_file_name\'/7", Var_28, FactFile_19, FileName_12);
        }
        break;
    }
    break;
  }
}

void MR_CALL 
make__file_names__module_target_to_file_name_7_p_0(
  MR_Word Globals_8,
  MR_String From_9,
  MR_Word TargetType_10,
  MR_Word ModuleName_11,
  MR_String * FileName_12)
{
  while (MR_TRUE)
  {
    MR_Word TargetExt_14;

    // setup for model_det tailcalls optimized into a loop
    ;
    switch (MR_tag((MR_Word) TargetType_10)) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        switch (MR_unmkbody(TargetType_10)) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
            TargetExt_14 = (MR_Word) ((MR_Unsigned) 0U);
            break;
          case (MR_Integer) 1:
            TargetExt_14 = (MR_Word) (MR_mkword(1, &make__file_names_scalar_common_1[12]));
            break;
          case (MR_Integer) 2:
            TargetExt_14 = (MR_Word) (MR_mkword(1, &make__file_names_scalar_common_1[13]));
            break;
          case (MR_Integer) 3:
            TargetExt_14 = (MR_Word) (MR_mkword(1, &make__file_names_scalar_common_1[14]));
            break;
          case (MR_Integer) 4:
            TargetExt_14 = (MR_Word) (MR_mkword(1, &make__file_names_scalar_common_1[16]));
            break;
          case (MR_Integer) 5:
            TargetExt_14 = (MR_Word) (MR_mkword(1, &make__file_names_scalar_common_1[18]));
            break;
          case (MR_Integer) 6:
            TargetExt_14 = (MR_Word) (MR_mkword(1, &make__file_names_scalar_common_1[21]));
            break;
          case (MR_Integer) 7:
            TargetExt_14 = (MR_Word) (MR_mkword(1, &make__file_names_scalar_common_1[6]));
            break;
          case (MR_Integer) 8:
            TargetExt_14 = (MR_Word) (MR_mkword(1, &make__file_names_scalar_common_1[22]));
            break;
          case (MR_Integer) 9:
            TargetExt_14 = (MR_Word) (MR_mkword(1, &make__file_names_scalar_common_1[7]));
            break;
          case (MR_Integer) 10:
            TargetExt_14 = (MR_Word) (MR_mkword(1, &make__file_names_scalar_common_1[10]));
            break;
          case (MR_Integer) 11:
            TargetExt_14 = (MR_Word) (MR_mkword(1, &make__file_names_scalar_common_1[20]));
            break;
          case (MR_Integer) 12:
            TargetExt_14 = (MR_Word) (MR_mkword(1, &make__file_names_scalar_common_1[19]));
            break;
          case (MR_Integer) 13:
            TargetExt_14 = (MR_Word) (MR_mkword(1, &make__file_names_scalar_common_1[24]));
            break;
        }
        break;
      case (MR_Integer) 1:
        {
          MR_Word Var_70 = ((MR_Unsigned) ((MR_hl_field(1, TargetType_10, (MR_Integer) 0))) & (MR_Integer) 1);

          switch (Var_70) {
            default: /*NOTREACHED*/ MR_assert(0);
            case (MR_Integer) 0:
              TargetExt_14 = (MR_Word) (MR_mkword(1, &make__file_names_scalar_common_1[8]));
              break;
            case (MR_Integer) 1:
              TargetExt_14 = (MR_Word) (MR_mkword(1, &make__file_names_scalar_common_1[9]));
              break;
          }
        }
        break;
      case (MR_Integer) 2:
        {
          MR_Word PIC_30 = ((MR_Unsigned) ((MR_hl_field(2, TargetType_10, (MR_Integer) 0))) & (MR_Integer) 1);
          MR_Word ObjExt_31;
          MR_Word Var_65;
          MR_Word Var_32;

          backend_libs__compile_target_code__maybe_pic_object_file_extension_3_p_0(PIC_30, &ObjExt_31, &Var_32);
          {
            Var_65 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(3, Var_65, 0) = ((MR_Box) ((MR_Unsigned) 0U));
            MR_hl_field(3, Var_65, 1) = (MR_Box) ((MR_Unsigned) (ObjExt_31));
          }
          {
            TargetExt_14 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(1, TargetExt_14, 0) = ((MR_Box) (Var_65));
          }
        }
        break;
      case (MR_Integer) 3:
        switch (((MR_Integer) ((MR_hl_field(3, TargetType_10, (MR_Integer) 0))))) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
            {
              MR_Unsigned packed_word_2 = (MR_Unsigned) ((MR_hl_field(3, TargetType_10, (MR_Integer) 1)));

              {
                TargetExt_14 = (MR_Word) MR_mkword(2, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(2, TargetExt_14, 0) = (MR_Box) (packed_word_2);
              }
            }
            break;
          case (MR_Integer) 1:
            {
              MR_String FactFile_34 = ((MR_String) ((MR_hl_field(3, TargetType_10, (MR_Integer) 2))));
              MR_Word PIC_69 = ((MR_Unsigned) ((MR_hl_field(3, TargetType_10, (MR_Integer) 1))) & (MR_Integer) 1);

              {
                TargetExt_14 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(3, TargetExt_14, 0) = (MR_Box) ((MR_Unsigned) (PIC_69));
                MR_hl_field(3, TargetExt_14, 1) = ((MR_Box) (FactFile_34));
              }
            }
            break;
        }
        break;
    }
    switch (MR_tag((MR_Word) TargetExt_14)) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        parse_tree__file_names__module_name_to_source_file_name_4_p_0(ModuleName_11, FileName_12);
        break;
      case (MR_Integer) 1:
        {
          MR_Word Ext_15 = ((MR_Word) ((MR_hl_field(1, TargetExt_14, (MR_Integer) 0))));

          parse_tree__file_names__module_name_to_file_name_5_p_0(Globals_8, From_9, Ext_15, ModuleName_11, FileName_12);
        }
        break;
      case (MR_Integer) 2:
        {
          MR_Word PIC_16 = ((((MR_Unsigned) ((MR_hl_field(2, TargetExt_14, (MR_Integer) 0))) >> 2)) & (MR_Integer) 1);
          MR_Word Lang_17 = ((MR_Unsigned) ((MR_hl_field(2, TargetExt_14, (MR_Integer) 0))) & (MR_Integer) 3);
          MR_Word ForeignModuleName_18;
          MR_Word Var_25;
          MR_Word next_value_of_TargetType_10;
          MR_Word next_value_of_ModuleName_11;

          parse_tree__prog_foreign__foreign_language_module_name_3_p_0(ModuleName_11, Lang_17, &ForeignModuleName_18);
          {
            Var_25 = (MR_Word) MR_mkword(2, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(2, Var_25, 0) = (MR_Box) ((MR_Unsigned) (PIC_16));
          }
          // direct tailcall eliminated
          ;
          next_value_of_TargetType_10 = Var_25;
          next_value_of_ModuleName_11 = ForeignModuleName_18;
          TargetType_10 = next_value_of_TargetType_10;
          ModuleName_11 = next_value_of_ModuleName_11;
          continue;
        }
        break;
      case (MR_Integer) 3:
        {
          MR_String FactFile_19 = ((MR_String) ((MR_hl_field(3, TargetExt_14, (MR_Integer) 1))));
          MR_Word ObjExt_20;
          MR_Word Var_28;
          MR_Word PIC_29 = ((MR_Unsigned) ((MR_hl_field(3, TargetExt_14, (MR_Integer) 0))) & (MR_Integer) 1);
          MR_Word Var_21;

          backend_libs__compile_target_code__maybe_pic_object_file_extension_3_p_0(PIC_29, &ObjExt_20, &Var_21);
          {
            Var_28 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(3, Var_28, 0) = ((MR_Box) ((MR_Unsigned) 0U));
            MR_hl_field(3, Var_28, 1) = (MR_Box) ((MR_Unsigned) (ObjExt_20));
          }
          parse_tree__file_names__fact_table_file_name_5_p_0(Globals_8, (MR_String) "predicate \140make.file_names.module_target_to_file_name\'/7", Var_28, FactFile_19, FileName_12);
        }
        break;
    }
    break;
  }
}

static MR_bool MR_CALL 
make__file_names____Unify____target_extension_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  MR_bool succeeded;

  succeeded = make__file_names____Unify____target_extension_0_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
  return succeeded;
}

static void MR_CALL 
make__file_names____Compare____target_extension_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  MR_Word conv0_HeadVar__1_1;

  make__file_names____Compare____target_extension_0_0(&conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
  *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
}

void mercury__make__file_names__init(void)
{
}

void mercury__make__file_names__init_type_tables(void)
{
	static MR_bool initialised = MR_FALSE;
	if (initialised) return;
	initialised = MR_TRUE;

	MR_register_type_ctor_info(&make__file_names__make__file_names__type_ctor_info_target_extension_0);
}

void mercury__make__file_names__init_debugger(void)
{
	MR_fatal_error("debugger initialization in MLDS grade");
}

// Ensure everything is compiled with the same grade.
const char *mercury__make__file_names__grade_check(void)
{
    return &MR_GRADE_VAR;
}

// :- end_module make.file_names.
