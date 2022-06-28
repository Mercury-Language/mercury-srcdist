/*
** Automatically generated from `mlds_to_c_util.m'
** by the Mercury compiler,
** version rotd-2022-06-28
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


// :- module ml_backend.mlds_to_c_util.
// :- implementation.

/*
INIT mercury__ml_backend__mlds_to_c_util__init
ENDINIT
*/

#include "ml_backend.mlds_to_c_util.mih"


#include "array.mih"
#include "assoc_list.mih"
#include "backend_libs.mih"
#include "bimap.mih"
#include "bitmap.mih"
#include "bool.mih"
#include "builtin.mih"
#include "char.mih"
#include "construct.mih"
#include "cord.mih"
#include "counter.mih"
#include "deconstruct.mih"
#include "digraph.mih"
#include "enum.mih"
#include "getopt.mih"
#include "hlds.mih"
#include "integer.mih"
#include "io.mih"
#include "libs.mih"
#include "list.mih"
#include "map.mih"
#include "maybe.mih"
#include "mdbcomp.mih"
#include "ml_backend.mih"
#include "one_or_more.mih"
#include "one_or_more_map.mih"
#include "ops.mih"
#include "pair.mih"
#include "parse_tree.mih"
#include "pretty_printer.mih"
#include "private_builtin.mih"
#include "set.mih"
#include "set_ordlist.mih"
#include "set_tree234.mih"
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
#include "backend_libs.builtin_ops.mih"
#include "backend_libs.c_util.mih"
#include "backend_libs.rtti.mih"
#include "hlds.code_model.mih"
#include "hlds.hlds_data.mih"
#include "hlds.hlds_module.mih"
#include "hlds.hlds_pred.mih"
#include "libs.globals.mih"
#include "libs.op_mode.mih"
#include "libs.optimization_options.mih"
#include "libs.options.mih"
#include "libs.trace_params.mih"
#include "mdbcomp.feedback.mih"
#include "mdbcomp.prim_data.mih"
#include "mdbcomp.sym_name.mih"
#include "ml_backend.ml_global_data.mih"
#include "ml_backend.ml_util.mih"
#include "ml_backend.mlds.mih"
#include "ml_backend.mlds_to_target_util.mih"
#include "parse_tree.file_names.mih"
#include "parse_tree.java_names.mih"
#include "parse_tree.prog_data.mih"
#include "parse_tree.prog_data_foreign.mih"
#include "parse_tree.prog_data_pragma.mih"
#include "parse_tree.prog_foreign.mih"
#include "parse_tree.prog_item.mih"
#include "parse_tree.prog_type.mih"
#include "parse_tree.set_of_var.mih"




static const MR_EnumFunctorDesc ml_backend__mlds_to_c_util__ml_backend__mlds_to_c_util__enum_functor_desc_decl_or_defn_0_0;

static const MR_EnumFunctorDesc ml_backend__mlds_to_c_util__ml_backend__mlds_to_c_util__enum_functor_desc_decl_or_defn_0_1;

static const MR_EnumFunctorDescPtr ml_backend__mlds_to_c_util__ml_backend__mlds_to_c_util__enum_ordinal_ordered_decl_or_defn_0[2];

static const MR_EnumFunctorDescPtr ml_backend__mlds_to_c_util__ml_backend__mlds_to_c_util__enum_name_ordered_decl_or_defn_0[2];

static const MR_Integer ml_backend__mlds_to_c_util__ml_backend__mlds_to_c_util__functor_number_map_decl_or_defn_0[2];

static const MR_PseudoTypeInfo ml_backend__mlds_to_c_util__ml_backend__mlds_to_c_util__field_types_mlds_to_c_opts_0_0[15];

static const MR_ConstString ml_backend__mlds_to_c_util__ml_backend__mlds_to_c_util__field_names_mlds_to_c_opts_0_0[15];

static const MR_DuArgLocn ml_backend__mlds_to_c_util__ml_backend__mlds_to_c_util__field_locns_mlds_to_c_opts_0_0[15];

static const MR_DuFunctorDesc ml_backend__mlds_to_c_util__ml_backend__mlds_to_c_util__du_functor_desc_mlds_to_c_opts_0_0;

static const MR_DuFunctorDescPtr ml_backend__mlds_to_c_util__ml_backend__mlds_to_c_util__du_stag_ordered_mlds_to_c_opts_0_0[1];

static const MR_DuPtagLayout ml_backend__mlds_to_c_util__ml_backend__mlds_to_c_util__du_ptag_ordered_mlds_to_c_opts_0[1];

static const MR_DuFunctorDescPtr ml_backend__mlds_to_c_util__ml_backend__mlds_to_c_util__du_name_ordered_mlds_to_c_opts_0[1];

static const MR_Integer ml_backend__mlds_to_c_util__ml_backend__mlds_to_c_util__functor_number_map_mlds_to_c_opts_0[1];

static const MR_EnumFunctorDesc ml_backend__mlds_to_c_util__ml_backend__mlds_to_c_util__enum_functor_desc_target_or_dump_0_0;

static const MR_EnumFunctorDesc ml_backend__mlds_to_c_util__ml_backend__mlds_to_c_util__enum_functor_desc_target_or_dump_0_1;

static const MR_EnumFunctorDescPtr ml_backend__mlds_to_c_util__ml_backend__mlds_to_c_util__enum_ordinal_ordered_target_or_dump_0[2];

static const MR_EnumFunctorDescPtr ml_backend__mlds_to_c_util__ml_backend__mlds_to_c_util__enum_name_ordered_target_or_dump_0[2];

static const MR_Integer ml_backend__mlds_to_c_util__ml_backend__mlds_to_c_util__functor_number_map_target_or_dump_0[2];

static MR_bool MR_CALL 
ml_backend__mlds_to_c_util____Unify____decl_or_defn_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2);

static void MR_CALL 
ml_backend__mlds_to_c_util____Compare____decl_or_defn_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3);

static MR_bool MR_CALL 
ml_backend__mlds_to_c_util____Unify____mlds_to_c_opts_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2);

static void MR_CALL 
ml_backend__mlds_to_c_util____Compare____mlds_to_c_opts_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3);

static MR_bool MR_CALL 
ml_backend__mlds_to_c_util____Unify____target_or_dump_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2);

static void MR_CALL 
ml_backend__mlds_to_c_util____Compare____target_or_dump_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3);







#include "array.mh"
#include "bitmap.mh"
#include "io.mh"
#include "string.mh"
#include "time.mh"



static const MR_EnumFunctorDesc ml_backend__mlds_to_c_util__ml_backend__mlds_to_c_util__enum_functor_desc_decl_or_defn_0_0 = {
  (MR_String) "forward_decl",
  INT32_C(0)
};

static const MR_EnumFunctorDesc ml_backend__mlds_to_c_util__ml_backend__mlds_to_c_util__enum_functor_desc_decl_or_defn_0_1 = {
  (MR_String) "definition",
  INT32_C(1)
};

static const MR_EnumFunctorDescPtr ml_backend__mlds_to_c_util__ml_backend__mlds_to_c_util__enum_ordinal_ordered_decl_or_defn_0[2] = {
  &ml_backend__mlds_to_c_util__ml_backend__mlds_to_c_util__enum_functor_desc_decl_or_defn_0_0,
  &ml_backend__mlds_to_c_util__ml_backend__mlds_to_c_util__enum_functor_desc_decl_or_defn_0_1
};

static const MR_EnumFunctorDescPtr ml_backend__mlds_to_c_util__ml_backend__mlds_to_c_util__enum_name_ordered_decl_or_defn_0[2] = {
  &ml_backend__mlds_to_c_util__ml_backend__mlds_to_c_util__enum_functor_desc_decl_or_defn_0_1,
  &ml_backend__mlds_to_c_util__ml_backend__mlds_to_c_util__enum_functor_desc_decl_or_defn_0_0
};

static const MR_Integer ml_backend__mlds_to_c_util__ml_backend__mlds_to_c_util__functor_number_map_decl_or_defn_0[2] = {
  (MR_Integer) 1,
  (MR_Integer) 0
};

const MR_TypeCtorInfo_Struct ml_backend__mlds_to_c_util__ml_backend__mlds_to_c_util__type_ctor_info_decl_or_defn_0 = {
  (MR_Integer) 0,
  UINT8_C(18),
  INT8_C(-1),
  MR_TYPECTOR_REP_ENUM,
  ((MR_Box) (ml_backend__mlds_to_c_util____Unify____decl_or_defn_0_0_10001)),
  ((MR_Box) (ml_backend__mlds_to_c_util____Compare____decl_or_defn_0_0_10001)),
  (MR_String) "ml_backend.mlds_to_c_util",
  (MR_String) "decl_or_defn",
  { ml_backend__mlds_to_c_util__ml_backend__mlds_to_c_util__enum_name_ordered_decl_or_defn_0 },
  { ml_backend__mlds_to_c_util__ml_backend__mlds_to_c_util__enum_ordinal_ordered_decl_or_defn_0 },
  (MR_Integer) 2,
  UINT16_C(12),
  ml_backend__mlds_to_c_util__ml_backend__mlds_to_c_util__functor_number_map_decl_or_defn_0,

};

static const MR_PseudoTypeInfo ml_backend__mlds_to_c_util__ml_backend__mlds_to_c_util__field_types_mlds_to_c_opts_0_0[15] = {
  (MR_PseudoTypeInfo) (&libs__globals__libs__globals__type_ctor_info_globals_0),
  (MR_PseudoTypeInfo) (&mercury__builtin__builtin__type_ctor_info_string_0),
  (MR_PseudoTypeInfo) (&mercury__bool__bool__type_ctor_info_bool_0),
  (MR_PseudoTypeInfo) (&mercury__bool__bool__type_ctor_info_bool_0),
  (MR_PseudoTypeInfo) (&mercury__bool__bool__type_ctor_info_bool_0),
  (MR_PseudoTypeInfo) (&mercury__bool__bool__type_ctor_info_bool_0),
  (MR_PseudoTypeInfo) (&mercury__bool__bool__type_ctor_info_bool_0),
  (MR_PseudoTypeInfo) (&mercury__bool__bool__type_ctor_info_bool_0),
  (MR_PseudoTypeInfo) (&mercury__bool__bool__type_ctor_info_bool_0),
  (MR_PseudoTypeInfo) (&mercury__bool__bool__type_ctor_info_bool_0),
  (MR_PseudoTypeInfo) (&libs__globals__libs__globals__type_ctor_info_compilation_target_0),
  (MR_PseudoTypeInfo) (&libs__globals__libs__globals__type_ctor_info_gc_method_0),
  (MR_PseudoTypeInfo) (&ml_backend__mlds_to_c_util__ml_backend__mlds_to_c_util__type_ctor_info_target_or_dump_0),
  (MR_PseudoTypeInfo) (&mercury__bool__bool__type_ctor_info_bool_0),
  (MR_PseudoTypeInfo) (&ml_backend__mlds_to_target_util__ml_backend__mlds_to_target_util__type_ctor_info_break_context_0)
};

static const MR_ConstString ml_backend__mlds_to_c_util__ml_backend__mlds_to_c_util__field_names_mlds_to_c_opts_0_0[15] = {
  (MR_String) "m2co_all_globals",
  (MR_String) "m2co_source_filename",
  (MR_String) "m2co_line_numbers",
  (MR_String) "m2co_foreign_line_numbers",
  (MR_String) "m2co_auto_comments",
  (MR_String) "m2co_single_prec_float",
  (MR_String) "m2co_profile_calls",
  (MR_String) "m2co_profile_memory",
  (MR_String) "m2co_profile_time",
  (MR_String) "m2co_need_to_init",
  (MR_String) "m2co_target",
  (MR_String) "m2co_gc_method",
  (MR_String) "m2co_target_or_dump",
  (MR_String) "m2co_std_func_decl",
  (MR_String) "m2co_break_context"
};

static const MR_DuArgLocn ml_backend__mlds_to_c_util__ml_backend__mlds_to_c_util__field_locns_mlds_to_c_opts_0_0[15] = {
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
    (MR_Integer) 16,
    (MR_Integer) 1
  },
  {
    (MR_Integer) 2,
    (MR_Integer) 15,
    (MR_Integer) 1
  },
  {
    (MR_Integer) 2,
    (MR_Integer) 14,
    (MR_Integer) 1
  },
  {
    (MR_Integer) 2,
    (MR_Integer) 13,
    (MR_Integer) 1
  },
  {
    (MR_Integer) 2,
    (MR_Integer) 12,
    (MR_Integer) 1
  },
  {
    (MR_Integer) 2,
    (MR_Integer) 11,
    (MR_Integer) 1
  },
  {
    (MR_Integer) 2,
    (MR_Integer) 10,
    (MR_Integer) 1
  },
  {
    (MR_Integer) 2,
    (MR_Integer) 9,
    (MR_Integer) 1
  },
  {
    (MR_Integer) 2,
    (MR_Integer) 7,
    (MR_Integer) 2
  },
  {
    (MR_Integer) 2,
    (MR_Integer) 4,
    (MR_Integer) 3
  },
  {
    (MR_Integer) 2,
    (MR_Integer) 3,
    (MR_Integer) 1
  },
  {
    (MR_Integer) 2,
    (MR_Integer) 2,
    (MR_Integer) 1
  },
  {
    (MR_Integer) 2,
    (MR_Integer) 0,
    (MR_Integer) 2
  }
};

static const MR_DuFunctorDesc ml_backend__mlds_to_c_util__ml_backend__mlds_to_c_util__du_functor_desc_mlds_to_c_opts_0_0 = {
  (MR_String) "mlds_to_c_opts",
  INT16_C(15),
  UINT16_C(0),
  MR_SECTAG_NONE,
  UINT8_C(0),
  (MR_Integer) -1,
  INT32_C(0),
  ml_backend__mlds_to_c_util__ml_backend__mlds_to_c_util__field_types_mlds_to_c_opts_0_0,
  ml_backend__mlds_to_c_util__ml_backend__mlds_to_c_util__field_names_mlds_to_c_opts_0_0,
  ml_backend__mlds_to_c_util__ml_backend__mlds_to_c_util__field_locns_mlds_to_c_opts_0_0,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE,
  UINT8_C(0)
};

static const MR_DuFunctorDescPtr ml_backend__mlds_to_c_util__ml_backend__mlds_to_c_util__du_stag_ordered_mlds_to_c_opts_0_0[1] = {
  &ml_backend__mlds_to_c_util__ml_backend__mlds_to_c_util__du_functor_desc_mlds_to_c_opts_0_0
};

static const MR_DuPtagLayout ml_backend__mlds_to_c_util__ml_backend__mlds_to_c_util__du_ptag_ordered_mlds_to_c_opts_0[1] = {
  {
    UINT32_C(1),
    MR_SECTAG_NONE,
    ml_backend__mlds_to_c_util__ml_backend__mlds_to_c_util__du_stag_ordered_mlds_to_c_opts_0_0,
    INT8_C(-1),
    UINT8_C(0),
    UINT8_C(1)
  }
};

static const MR_DuFunctorDescPtr ml_backend__mlds_to_c_util__ml_backend__mlds_to_c_util__du_name_ordered_mlds_to_c_opts_0[1] = {
  &ml_backend__mlds_to_c_util__ml_backend__mlds_to_c_util__du_functor_desc_mlds_to_c_opts_0_0
};

static const MR_Integer ml_backend__mlds_to_c_util__ml_backend__mlds_to_c_util__functor_number_map_mlds_to_c_opts_0[1] = {
  (MR_Integer) 0
};

const MR_TypeCtorInfo_Struct ml_backend__mlds_to_c_util__ml_backend__mlds_to_c_util__type_ctor_info_mlds_to_c_opts_0 = {
  (MR_Integer) 0,
  UINT8_C(18),
  INT8_C(1),
  MR_TYPECTOR_REP_DU,
  ((MR_Box) (ml_backend__mlds_to_c_util____Unify____mlds_to_c_opts_0_0_10001)),
  ((MR_Box) (ml_backend__mlds_to_c_util____Compare____mlds_to_c_opts_0_0_10001)),
  (MR_String) "ml_backend.mlds_to_c_util",
  (MR_String) "mlds_to_c_opts",
  { ml_backend__mlds_to_c_util__ml_backend__mlds_to_c_util__du_name_ordered_mlds_to_c_opts_0 },
  { ml_backend__mlds_to_c_util__ml_backend__mlds_to_c_util__du_ptag_ordered_mlds_to_c_opts_0 },
  (MR_Integer) 1,
  UINT16_C(12),
  ml_backend__mlds_to_c_util__ml_backend__mlds_to_c_util__functor_number_map_mlds_to_c_opts_0,

};

static const MR_EnumFunctorDesc ml_backend__mlds_to_c_util__ml_backend__mlds_to_c_util__enum_functor_desc_target_or_dump_0_0 = {
  (MR_String) "tod_target",
  INT32_C(0)
};

static const MR_EnumFunctorDesc ml_backend__mlds_to_c_util__ml_backend__mlds_to_c_util__enum_functor_desc_target_or_dump_0_1 = {
  (MR_String) "tod_dump",
  INT32_C(1)
};

static const MR_EnumFunctorDescPtr ml_backend__mlds_to_c_util__ml_backend__mlds_to_c_util__enum_ordinal_ordered_target_or_dump_0[2] = {
  &ml_backend__mlds_to_c_util__ml_backend__mlds_to_c_util__enum_functor_desc_target_or_dump_0_0,
  &ml_backend__mlds_to_c_util__ml_backend__mlds_to_c_util__enum_functor_desc_target_or_dump_0_1
};

static const MR_EnumFunctorDescPtr ml_backend__mlds_to_c_util__ml_backend__mlds_to_c_util__enum_name_ordered_target_or_dump_0[2] = {
  &ml_backend__mlds_to_c_util__ml_backend__mlds_to_c_util__enum_functor_desc_target_or_dump_0_1,
  &ml_backend__mlds_to_c_util__ml_backend__mlds_to_c_util__enum_functor_desc_target_or_dump_0_0
};

static const MR_Integer ml_backend__mlds_to_c_util__ml_backend__mlds_to_c_util__functor_number_map_target_or_dump_0[2] = {
  (MR_Integer) 1,
  (MR_Integer) 0
};

const MR_TypeCtorInfo_Struct ml_backend__mlds_to_c_util__ml_backend__mlds_to_c_util__type_ctor_info_target_or_dump_0 = {
  (MR_Integer) 0,
  UINT8_C(18),
  INT8_C(-1),
  MR_TYPECTOR_REP_ENUM,
  ((MR_Box) (ml_backend__mlds_to_c_util____Unify____target_or_dump_0_0_10001)),
  ((MR_Box) (ml_backend__mlds_to_c_util____Compare____target_or_dump_0_0_10001)),
  (MR_String) "ml_backend.mlds_to_c_util",
  (MR_String) "target_or_dump",
  { ml_backend__mlds_to_c_util__ml_backend__mlds_to_c_util__enum_name_ordered_target_or_dump_0 },
  { ml_backend__mlds_to_c_util__ml_backend__mlds_to_c_util__enum_ordinal_ordered_target_or_dump_0 },
  (MR_Integer) 2,
  UINT16_C(12),
  ml_backend__mlds_to_c_util__ml_backend__mlds_to_c_util__functor_number_map_target_or_dump_0,

};

void MR_CALL 
ml_backend__mlds_to_c_util____Compare____target_or_dump_0_0(
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
ml_backend__mlds_to_c_util____Unify____target_or_dump_0_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2)
{
  MR_bool succeeded = (HeadVar__1_1 == HeadVar__2_2);

  return succeeded;
}

void MR_CALL 
ml_backend__mlds_to_c_util____Compare____mlds_to_c_opts_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3)
{
  MR_bool succeeded;
  MR_Integer CastX_48 = (MR_Integer) (HeadVar__2_2);
  MR_Integer CastY_49 = (MR_Integer) (HeadVar__3_3);

  succeeded = (CastX_48 == CastY_49);
  if (succeeded)
    *HeadVar__1_1 = (MR_Integer) 0;
  else
  {
    MR_Word ArgX1_4 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 0))));
    MR_Word ArgY1_5 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__3_3, (MR_Integer) 0))));
    MR_String ArgX2_7 = ((MR_String) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 1))));
    MR_String ArgY2_8 = ((MR_String) ((MR_hl_field(MR_mktag(0), HeadVar__3_3, (MR_Integer) 1))));
    MR_Word ArgX3_10 = ((((MR_Unsigned) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 2))) >> 16)) & (MR_Integer) 1);
    MR_Word ArgY3_11 = ((((MR_Unsigned) ((MR_hl_field(MR_mktag(0), HeadVar__3_3, (MR_Integer) 2))) >> 16)) & (MR_Integer) 1);
    MR_Word ArgX4_13 = ((((MR_Unsigned) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 2))) >> 15)) & (MR_Integer) 1);
    MR_Word ArgY4_14 = ((((MR_Unsigned) ((MR_hl_field(MR_mktag(0), HeadVar__3_3, (MR_Integer) 2))) >> 15)) & (MR_Integer) 1);
    MR_Word ArgX5_16 = ((((MR_Unsigned) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 2))) >> 14)) & (MR_Integer) 1);
    MR_Word ArgY5_17 = ((((MR_Unsigned) ((MR_hl_field(MR_mktag(0), HeadVar__3_3, (MR_Integer) 2))) >> 14)) & (MR_Integer) 1);
    MR_Word ArgX6_19 = ((((MR_Unsigned) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 2))) >> 13)) & (MR_Integer) 1);
    MR_Word ArgY6_20 = ((((MR_Unsigned) ((MR_hl_field(MR_mktag(0), HeadVar__3_3, (MR_Integer) 2))) >> 13)) & (MR_Integer) 1);
    MR_Word ArgX7_22 = ((((MR_Unsigned) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 2))) >> 12)) & (MR_Integer) 1);
    MR_Word ArgY7_23 = ((((MR_Unsigned) ((MR_hl_field(MR_mktag(0), HeadVar__3_3, (MR_Integer) 2))) >> 12)) & (MR_Integer) 1);
    MR_Word ArgX8_25 = ((((MR_Unsigned) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 2))) >> 11)) & (MR_Integer) 1);
    MR_Word ArgY8_26 = ((((MR_Unsigned) ((MR_hl_field(MR_mktag(0), HeadVar__3_3, (MR_Integer) 2))) >> 11)) & (MR_Integer) 1);
    MR_Word ArgX9_28 = ((((MR_Unsigned) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 2))) >> 10)) & (MR_Integer) 1);
    MR_Word ArgY9_29 = ((((MR_Unsigned) ((MR_hl_field(MR_mktag(0), HeadVar__3_3, (MR_Integer) 2))) >> 10)) & (MR_Integer) 1);
    MR_Word ArgX10_31 = ((((MR_Unsigned) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 2))) >> 9)) & (MR_Integer) 1);
    MR_Word ArgY10_32 = ((((MR_Unsigned) ((MR_hl_field(MR_mktag(0), HeadVar__3_3, (MR_Integer) 2))) >> 9)) & (MR_Integer) 1);
    MR_Word ArgX11_34 = ((((MR_Unsigned) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 2))) >> 7)) & (MR_Integer) 3);
    MR_Word ArgY11_35 = ((((MR_Unsigned) ((MR_hl_field(MR_mktag(0), HeadVar__3_3, (MR_Integer) 2))) >> 7)) & (MR_Integer) 3);
    MR_Word ArgX12_37 = ((((MR_Unsigned) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 2))) >> 4)) & (MR_Integer) 7);
    MR_Word ArgY12_38 = ((((MR_Unsigned) ((MR_hl_field(MR_mktag(0), HeadVar__3_3, (MR_Integer) 2))) >> 4)) & (MR_Integer) 7);
    MR_Word ArgX13_40 = ((((MR_Unsigned) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 2))) >> 3)) & (MR_Integer) 1);
    MR_Word ArgY13_41 = ((((MR_Unsigned) ((MR_hl_field(MR_mktag(0), HeadVar__3_3, (MR_Integer) 2))) >> 3)) & (MR_Integer) 1);
    MR_Word ArgX14_43 = ((((MR_Unsigned) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 2))) >> 2)) & (MR_Integer) 1);
    MR_Word ArgY14_44 = ((((MR_Unsigned) ((MR_hl_field(MR_mktag(0), HeadVar__3_3, (MR_Integer) 2))) >> 2)) & (MR_Integer) 1);
    MR_Word ArgX15_46 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 2))) & (MR_Integer) 3);
    MR_Word ArgY15_47 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(0), HeadVar__3_3, (MR_Integer) 2))) & (MR_Integer) 3);
    MR_Word SubResult1_6;

    libs__globals____Compare____globals_0_0(&SubResult1_6, ArgX1_4, ArgY1_5);
    succeeded = (SubResult1_6 != (MR_Integer) 0);
    if (succeeded)
      *HeadVar__1_1 = SubResult1_6;
    else
    {
      MR_Word SubResult2_9;

      mercury__private_builtin__builtin_compare_string_3_p_0(&SubResult2_9, ArgX2_7, ArgY2_8);
      succeeded = (SubResult2_9 != (MR_Integer) 0);
      if (succeeded)
        *HeadVar__1_1 = SubResult2_9;
      else
      {
        MR_Word SubResult3_12;
        MR_Integer Var_65 = (MR_Integer) (ArgX3_10);
        MR_Integer Var_66 = (MR_Integer) (ArgY3_11);

        succeeded = (Var_65 < Var_66);
        if (succeeded)
        {
          SubResult3_12 = (MR_Integer) 1;
          succeeded = MR_TRUE;
        }
        else
        {
          succeeded = (Var_65 > Var_66);
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
        {
          MR_Word SubResult4_15;
          MR_Integer Var_67 = (MR_Integer) (ArgX4_13);
          MR_Integer Var_68 = (MR_Integer) (ArgY4_14);

          succeeded = (Var_67 < Var_68);
          if (succeeded)
          {
            SubResult4_15 = (MR_Integer) 1;
            succeeded = MR_TRUE;
          }
          else
          {
            succeeded = (Var_67 > Var_68);
            if (succeeded)
            {
              SubResult4_15 = (MR_Integer) 2;
              succeeded = MR_TRUE;
            }
            else
            {
              succeeded = MR_TRUE;
              succeeded = !(succeeded);
              if (succeeded)
              {
                SubResult4_15 = (MR_Integer) 0;
                succeeded = MR_TRUE;
              }
            }
          }
          if (succeeded)
            *HeadVar__1_1 = SubResult4_15;
          else
          {
            MR_Word SubResult5_18;
            MR_Integer Var_69 = (MR_Integer) (ArgX5_16);
            MR_Integer Var_70 = (MR_Integer) (ArgY5_17);

            succeeded = (Var_69 < Var_70);
            if (succeeded)
            {
              SubResult5_18 = (MR_Integer) 1;
              succeeded = MR_TRUE;
            }
            else
            {
              succeeded = (Var_69 > Var_70);
              if (succeeded)
              {
                SubResult5_18 = (MR_Integer) 2;
                succeeded = MR_TRUE;
              }
              else
              {
                succeeded = MR_TRUE;
                succeeded = !(succeeded);
                if (succeeded)
                {
                  SubResult5_18 = (MR_Integer) 0;
                  succeeded = MR_TRUE;
                }
              }
            }
            if (succeeded)
              *HeadVar__1_1 = SubResult5_18;
            else
            {
              MR_Word SubResult6_21;
              MR_Integer Var_71 = (MR_Integer) (ArgX6_19);
              MR_Integer Var_72 = (MR_Integer) (ArgY6_20);

              succeeded = (Var_71 < Var_72);
              if (succeeded)
              {
                SubResult6_21 = (MR_Integer) 1;
                succeeded = MR_TRUE;
              }
              else
              {
                succeeded = (Var_71 > Var_72);
                if (succeeded)
                {
                  SubResult6_21 = (MR_Integer) 2;
                  succeeded = MR_TRUE;
                }
                else
                {
                  succeeded = MR_TRUE;
                  succeeded = !(succeeded);
                  if (succeeded)
                  {
                    SubResult6_21 = (MR_Integer) 0;
                    succeeded = MR_TRUE;
                  }
                }
              }
              if (succeeded)
                *HeadVar__1_1 = SubResult6_21;
              else
              {
                MR_Word SubResult7_24;
                MR_Integer Var_73 = (MR_Integer) (ArgX7_22);
                MR_Integer Var_74 = (MR_Integer) (ArgY7_23);

                succeeded = (Var_73 < Var_74);
                if (succeeded)
                {
                  SubResult7_24 = (MR_Integer) 1;
                  succeeded = MR_TRUE;
                }
                else
                {
                  succeeded = (Var_73 > Var_74);
                  if (succeeded)
                  {
                    SubResult7_24 = (MR_Integer) 2;
                    succeeded = MR_TRUE;
                  }
                  else
                  {
                    succeeded = MR_TRUE;
                    succeeded = !(succeeded);
                    if (succeeded)
                    {
                      SubResult7_24 = (MR_Integer) 0;
                      succeeded = MR_TRUE;
                    }
                  }
                }
                if (succeeded)
                  *HeadVar__1_1 = SubResult7_24;
                else
                {
                  MR_Word SubResult8_27;
                  MR_Integer Var_75 = (MR_Integer) (ArgX8_25);
                  MR_Integer Var_76 = (MR_Integer) (ArgY8_26);

                  succeeded = (Var_75 < Var_76);
                  if (succeeded)
                  {
                    SubResult8_27 = (MR_Integer) 1;
                    succeeded = MR_TRUE;
                  }
                  else
                  {
                    succeeded = (Var_75 > Var_76);
                    if (succeeded)
                    {
                      SubResult8_27 = (MR_Integer) 2;
                      succeeded = MR_TRUE;
                    }
                    else
                    {
                      succeeded = MR_TRUE;
                      succeeded = !(succeeded);
                      if (succeeded)
                      {
                        SubResult8_27 = (MR_Integer) 0;
                        succeeded = MR_TRUE;
                      }
                    }
                  }
                  if (succeeded)
                    *HeadVar__1_1 = SubResult8_27;
                  else
                  {
                    MR_Word SubResult9_30;
                    MR_Integer Var_77 = (MR_Integer) (ArgX9_28);
                    MR_Integer Var_78 = (MR_Integer) (ArgY9_29);

                    succeeded = (Var_77 < Var_78);
                    if (succeeded)
                    {
                      SubResult9_30 = (MR_Integer) 1;
                      succeeded = MR_TRUE;
                    }
                    else
                    {
                      succeeded = (Var_77 > Var_78);
                      if (succeeded)
                      {
                        SubResult9_30 = (MR_Integer) 2;
                        succeeded = MR_TRUE;
                      }
                      else
                      {
                        succeeded = MR_TRUE;
                        succeeded = !(succeeded);
                        if (succeeded)
                        {
                          SubResult9_30 = (MR_Integer) 0;
                          succeeded = MR_TRUE;
                        }
                      }
                    }
                    if (succeeded)
                      *HeadVar__1_1 = SubResult9_30;
                    else
                    {
                      MR_Word SubResult10_33;
                      MR_Integer Var_79 = (MR_Integer) (ArgX10_31);
                      MR_Integer Var_80 = (MR_Integer) (ArgY10_32);

                      succeeded = (Var_79 < Var_80);
                      if (succeeded)
                      {
                        SubResult10_33 = (MR_Integer) 1;
                        succeeded = MR_TRUE;
                      }
                      else
                      {
                        succeeded = (Var_79 > Var_80);
                        if (succeeded)
                        {
                          SubResult10_33 = (MR_Integer) 2;
                          succeeded = MR_TRUE;
                        }
                        else
                        {
                          succeeded = MR_TRUE;
                          succeeded = !(succeeded);
                          if (succeeded)
                          {
                            SubResult10_33 = (MR_Integer) 0;
                            succeeded = MR_TRUE;
                          }
                        }
                      }
                      if (succeeded)
                        *HeadVar__1_1 = SubResult10_33;
                      else
                      {
                        MR_Word SubResult11_36;
                        MR_Integer Var_81 = (MR_Integer) (ArgX11_34);
                        MR_Integer Var_82 = (MR_Integer) (ArgY11_35);

                        succeeded = (Var_81 < Var_82);
                        if (succeeded)
                        {
                          SubResult11_36 = (MR_Integer) 1;
                          succeeded = MR_TRUE;
                        }
                        else
                        {
                          succeeded = (Var_81 > Var_82);
                          if (succeeded)
                          {
                            SubResult11_36 = (MR_Integer) 2;
                            succeeded = MR_TRUE;
                          }
                          else
                          {
                            succeeded = MR_TRUE;
                            succeeded = !(succeeded);
                            if (succeeded)
                            {
                              SubResult11_36 = (MR_Integer) 0;
                              succeeded = MR_TRUE;
                            }
                          }
                        }
                        if (succeeded)
                          *HeadVar__1_1 = SubResult11_36;
                        else
                        {
                          MR_Word SubResult12_39;
                          MR_Integer Var_83 = (MR_Integer) (ArgX12_37);
                          MR_Integer Var_84 = (MR_Integer) (ArgY12_38);

                          succeeded = (Var_83 < Var_84);
                          if (succeeded)
                          {
                            SubResult12_39 = (MR_Integer) 1;
                            succeeded = MR_TRUE;
                          }
                          else
                          {
                            succeeded = (Var_83 > Var_84);
                            if (succeeded)
                            {
                              SubResult12_39 = (MR_Integer) 2;
                              succeeded = MR_TRUE;
                            }
                            else
                            {
                              succeeded = MR_TRUE;
                              succeeded = !(succeeded);
                              if (succeeded)
                              {
                                SubResult12_39 = (MR_Integer) 0;
                                succeeded = MR_TRUE;
                              }
                            }
                          }
                          if (succeeded)
                            *HeadVar__1_1 = SubResult12_39;
                          else
                          {
                            MR_Word SubResult13_42;
                            MR_Integer Var_85 = (MR_Integer) (ArgX13_40);
                            MR_Integer Var_86 = (MR_Integer) (ArgY13_41);

                            succeeded = (Var_85 < Var_86);
                            if (succeeded)
                            {
                              SubResult13_42 = (MR_Integer) 1;
                              succeeded = MR_TRUE;
                            }
                            else
                            {
                              succeeded = (Var_85 > Var_86);
                              if (succeeded)
                              {
                                SubResult13_42 = (MR_Integer) 2;
                                succeeded = MR_TRUE;
                              }
                              else
                              {
                                succeeded = MR_TRUE;
                                succeeded = !(succeeded);
                                if (succeeded)
                                {
                                  SubResult13_42 = (MR_Integer) 0;
                                  succeeded = MR_TRUE;
                                }
                              }
                            }
                            if (succeeded)
                              *HeadVar__1_1 = SubResult13_42;
                            else
                            {
                              MR_Word SubResult14_45;
                              MR_Integer Var_87 = (MR_Integer) (ArgX14_43);
                              MR_Integer Var_88 = (MR_Integer) (ArgY14_44);

                              succeeded = (Var_87 < Var_88);
                              if (succeeded)
                              {
                                SubResult14_45 = (MR_Integer) 1;
                                succeeded = MR_TRUE;
                              }
                              else
                              {
                                succeeded = (Var_87 > Var_88);
                                if (succeeded)
                                {
                                  SubResult14_45 = (MR_Integer) 2;
                                  succeeded = MR_TRUE;
                                }
                                else
                                {
                                  succeeded = MR_TRUE;
                                  succeeded = !(succeeded);
                                  if (succeeded)
                                  {
                                    SubResult14_45 = (MR_Integer) 0;
                                    succeeded = MR_TRUE;
                                  }
                                }
                              }
                              if (succeeded)
                                *HeadVar__1_1 = SubResult14_45;
                              else
                              {
                                MR_Integer Var_89 = (MR_Integer) (ArgX15_46);
                                MR_Integer Var_90 = (MR_Integer) (ArgY15_47);

                                succeeded = (Var_89 < Var_90);
                                if (succeeded)
                                  *HeadVar__1_1 = (MR_Integer) 1;
                                else
                                {
                                  succeeded = (Var_89 > Var_90);
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
                    }
                  }
                }
              }
            }
          }
        }
      }
    }
  }
}

MR_bool MR_CALL 
ml_backend__mlds_to_c_util____Unify____mlds_to_c_opts_0_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2)
{
  MR_bool succeeded;
  MR_Integer CastX_33 = (MR_Integer) (HeadVar__1_1);
  MR_Integer CastY_34 = (MR_Integer) (HeadVar__2_2);

  succeeded = (CastX_33 == CastY_34);
  if (succeeded)
    succeeded = MR_TRUE;
  else
  {
    MR_Word ArgX1_3 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__1_1, (MR_Integer) 0))));
    MR_Word ArgY1_4 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 0))));
    MR_String ArgX2_5 = ((MR_String) ((MR_hl_field(MR_mktag(0), HeadVar__1_1, (MR_Integer) 1))));
    MR_String ArgY2_6 = ((MR_String) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 1))));
    MR_Word ArgX3_7 = ((((MR_Unsigned) ((MR_hl_field(MR_mktag(0), HeadVar__1_1, (MR_Integer) 2))) >> 16)) & (MR_Integer) 1);
    MR_Word ArgY3_8 = ((((MR_Unsigned) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 2))) >> 16)) & (MR_Integer) 1);
    MR_Word ArgX4_9 = ((((MR_Unsigned) ((MR_hl_field(MR_mktag(0), HeadVar__1_1, (MR_Integer) 2))) >> 15)) & (MR_Integer) 1);
    MR_Word ArgY4_10 = ((((MR_Unsigned) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 2))) >> 15)) & (MR_Integer) 1);
    MR_Word ArgX5_11 = ((((MR_Unsigned) ((MR_hl_field(MR_mktag(0), HeadVar__1_1, (MR_Integer) 2))) >> 14)) & (MR_Integer) 1);
    MR_Word ArgY5_12 = ((((MR_Unsigned) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 2))) >> 14)) & (MR_Integer) 1);
    MR_Word ArgX6_13 = ((((MR_Unsigned) ((MR_hl_field(MR_mktag(0), HeadVar__1_1, (MR_Integer) 2))) >> 13)) & (MR_Integer) 1);
    MR_Word ArgY6_14 = ((((MR_Unsigned) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 2))) >> 13)) & (MR_Integer) 1);
    MR_Word ArgX7_15 = ((((MR_Unsigned) ((MR_hl_field(MR_mktag(0), HeadVar__1_1, (MR_Integer) 2))) >> 12)) & (MR_Integer) 1);
    MR_Word ArgY7_16 = ((((MR_Unsigned) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 2))) >> 12)) & (MR_Integer) 1);
    MR_Word ArgX8_17 = ((((MR_Unsigned) ((MR_hl_field(MR_mktag(0), HeadVar__1_1, (MR_Integer) 2))) >> 11)) & (MR_Integer) 1);
    MR_Word ArgY8_18 = ((((MR_Unsigned) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 2))) >> 11)) & (MR_Integer) 1);
    MR_Word ArgX9_19 = ((((MR_Unsigned) ((MR_hl_field(MR_mktag(0), HeadVar__1_1, (MR_Integer) 2))) >> 10)) & (MR_Integer) 1);
    MR_Word ArgY9_20 = ((((MR_Unsigned) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 2))) >> 10)) & (MR_Integer) 1);
    MR_Word ArgX10_21 = ((((MR_Unsigned) ((MR_hl_field(MR_mktag(0), HeadVar__1_1, (MR_Integer) 2))) >> 9)) & (MR_Integer) 1);
    MR_Word ArgY10_22 = ((((MR_Unsigned) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 2))) >> 9)) & (MR_Integer) 1);
    MR_Word ArgX11_23 = ((((MR_Unsigned) ((MR_hl_field(MR_mktag(0), HeadVar__1_1, (MR_Integer) 2))) >> 7)) & (MR_Integer) 3);
    MR_Word ArgY11_24 = ((((MR_Unsigned) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 2))) >> 7)) & (MR_Integer) 3);
    MR_Word ArgX12_25 = ((((MR_Unsigned) ((MR_hl_field(MR_mktag(0), HeadVar__1_1, (MR_Integer) 2))) >> 4)) & (MR_Integer) 7);
    MR_Word ArgY12_26 = ((((MR_Unsigned) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 2))) >> 4)) & (MR_Integer) 7);
    MR_Word ArgX13_27 = ((((MR_Unsigned) ((MR_hl_field(MR_mktag(0), HeadVar__1_1, (MR_Integer) 2))) >> 3)) & (MR_Integer) 1);
    MR_Word ArgY13_28 = ((((MR_Unsigned) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 2))) >> 3)) & (MR_Integer) 1);
    MR_Word ArgX14_29 = ((((MR_Unsigned) ((MR_hl_field(MR_mktag(0), HeadVar__1_1, (MR_Integer) 2))) >> 2)) & (MR_Integer) 1);
    MR_Word ArgY14_30 = ((((MR_Unsigned) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 2))) >> 2)) & (MR_Integer) 1);
    MR_Word ArgX15_31 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(0), HeadVar__1_1, (MR_Integer) 2))) & (MR_Integer) 3);
    MR_Word ArgY15_32 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 2))) & (MR_Integer) 3);

    succeeded = libs__globals____Unify____globals_0_0(ArgX1_3, ArgY1_4);
    if (succeeded)
    {
      succeeded = (strcmp(ArgX2_5, ArgY2_6) == 0);
      if (succeeded)
      {
        succeeded = (ArgX3_7 == ArgY3_8);
        if (succeeded)
        {
          succeeded = (ArgX4_9 == ArgY4_10);
          if (succeeded)
          {
            succeeded = (ArgX5_11 == ArgY5_12);
            if (succeeded)
            {
              succeeded = (ArgX6_13 == ArgY6_14);
              if (succeeded)
              {
                succeeded = (ArgX7_15 == ArgY7_16);
                if (succeeded)
                {
                  succeeded = (ArgX8_17 == ArgY8_18);
                  if (succeeded)
                  {
                    succeeded = (ArgX9_19 == ArgY9_20);
                    if (succeeded)
                    {
                      succeeded = (ArgX10_21 == ArgY10_22);
                      if (succeeded)
                      {
                        succeeded = (ArgX11_23 == ArgY11_24);
                        if (succeeded)
                        {
                          succeeded = (ArgX12_25 == ArgY12_26);
                          if (succeeded)
                          {
                            succeeded = (ArgX13_27 == ArgY13_28);
                            if (succeeded)
                            {
                              succeeded = (ArgX14_29 == ArgY14_30);
                              if (succeeded)
                                succeeded = (ArgX15_31 == ArgY15_32);
                            }
                          }
                        }
                      }
                    }
                  }
                }
              }
            }
          }
        }
      }
    }
  }
  return succeeded;
}

void MR_CALL 
ml_backend__mlds_to_c_util____Compare____decl_or_defn_0_0(
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
ml_backend__mlds_to_c_util____Unify____decl_or_defn_0_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2)
{
  MR_bool succeeded = (HeadVar__1_1 == HeadVar__2_2);

  return succeeded;
}

void MR_CALL 
ml_backend__mlds_to_c_util__c_reset_context_4_p_0(
  MR_Word Stream_5,
  MR_Word OutputLineNumbers_6)
{
  switch (OutputLineNumbers_6) {
    default: /*NOTREACHED*/ MR_assert(0);
    case (MR_Integer) 0:
      {
      }
      break;
    case (MR_Integer) 1:
      backend_libs__c_util__always_reset_line_num_4_p_0(Stream_5, (MR_Word) ((MR_Unsigned) 0U));
      break;
  }
}

void MR_CALL 
ml_backend__mlds_to_c_util__c_output_file_line_6_p_0(
  MR_Word Stream_7,
  MR_Word OutputLineNumbers_8,
  MR_String FileName_9,
  MR_Integer LineNumber_10)
{
  switch (OutputLineNumbers_8) {
    default: /*NOTREACHED*/ MR_assert(0);
    case (MR_Integer) 0:
      {
      }
      break;
    case (MR_Integer) 1:
      backend_libs__c_util__always_set_line_num_5_p_0(Stream_7, FileName_9, LineNumber_10);
      break;
  }
}

void MR_CALL 
ml_backend__mlds_to_c_util__c_output_context_5_p_0(
  MR_Word Stream_6,
  MR_Word OutputLineNumbers_7,
  MR_Word Context_8)
{
  switch (OutputLineNumbers_7) {
    default: /*NOTREACHED*/ MR_assert(0);
    case (MR_Integer) 0:
      {
      }
      break;
    case (MR_Integer) 1:
      {
        MR_String FileName_10;
        MR_Integer LineNumber_11;

        mercury__term__context_file_2_p_0(Context_8, &FileName_10);
        mercury__term__context_line_2_p_0(Context_8, &LineNumber_11);
        backend_libs__c_util__always_set_line_num_5_p_0(Stream_6, FileName_10, LineNumber_11);
      }
      break;
  }
}

void MR_CALL 
ml_backend__mlds_to_c_util__c_output_stmt_context_5_p_0(
  MR_Word Stream_6,
  MR_Word OutputLineNumbers_7,
  MR_Word Stmt_8)
{
  switch (OutputLineNumbers_7) {
    default: /*NOTREACHED*/ MR_assert(0);
    case (MR_Integer) 0:
      {
      }
      break;
    case (MR_Integer) 1:
      {
        MR_Word Context_10;
        MR_String FileName_11;
        MR_Integer LineNumber_12;

        Context_10 = ml_backend__ml_util__get_mlds_stmt_context_1_f_0(Stmt_8);
        mercury__term__context_file_2_p_0(Context_10, &FileName_11);
        mercury__term__context_line_2_p_0(Context_10, &LineNumber_12);
        backend_libs__c_util__always_set_line_num_5_p_0(Stream_6, FileName_11, LineNumber_12);
      }
      break;
  }
}

MR_Word MR_CALL 
ml_backend__mlds_to_c_util__init_mlds_to_c_opts_3_f_0(
  MR_Word Globals_5,
  MR_String SourceFileName_6,
  MR_Word TargetOrDump_7)
{
  MR_bool succeeded;
  MR_Word Opts_8;
  MR_Word LineNumbers_9;
  MR_Word ForeignLineNumbers_10;
  MR_Word Comments_11;
  MR_Word SinglePrecFloat_12;
  MR_Word ProfileCalls_13;
  MR_Word ProfileMemory_14;
  MR_Word ProfileTime_15;
  MR_Word NeedToInit_16;
  MR_Word Target_17;
  MR_Word GCMethod_18;

  libs__globals__lookup_bool_option_3_p_0(Globals_5, (MR_Integer) 172, &LineNumbers_9);
  libs__globals__lookup_bool_option_3_p_0(Globals_5, (MR_Integer) 173, &ForeignLineNumbers_10);
  libs__globals__lookup_bool_option_3_p_0(Globals_5, (MR_Integer) 176, &Comments_11);
  libs__globals__lookup_bool_option_3_p_0(Globals_5, (MR_Integer) 268, &SinglePrecFloat_12);
  libs__globals__lookup_bool_option_3_p_0(Globals_5, (MR_Integer) 237, &ProfileCalls_13);
  libs__globals__lookup_bool_option_3_p_0(Globals_5, (MR_Integer) 239, &ProfileMemory_14);
  libs__globals__lookup_bool_option_3_p_0(Globals_5, (MR_Integer) 238, &ProfileTime_15);
  succeeded = (ProfileCalls_13 == (MR_Integer) 1);
  if (!(succeeded))
  {
    succeeded = (ProfileMemory_14 == (MR_Integer) 1);
    if (!(succeeded))
      succeeded = (ProfileTime_15 == (MR_Integer) 1);
  }
  if (succeeded)
    NeedToInit_16 = (MR_Integer) 1;
  else
    NeedToInit_16 = (MR_Integer) 0;
  libs__globals__get_target_2_p_0(Globals_5, &Target_17);
  libs__globals__get_gc_method_2_p_0(Globals_5, &GCMethod_18);
  {
    Opts_8 = (MR_Word) MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(MR_mktag(0), Opts_8, 0) = ((MR_Box) (Globals_5));
    MR_hl_field(MR_mktag(0), Opts_8, 1) = ((MR_Box) (SourceFileName_6));
    MR_hl_field(MR_mktag(0), Opts_8, 2) = (MR_Box) (((((MR_Unsigned) (LineNumbers_9) << 16)) | (((((MR_Unsigned) (ForeignLineNumbers_10) << 15)) | (((((MR_Unsigned) (Comments_11) << 14)) | (((((MR_Unsigned) (SinglePrecFloat_12) << 13)) | (((((MR_Unsigned) (ProfileCalls_13) << 12)) | (((((MR_Unsigned) (ProfileMemory_14) << 11)) | (((((MR_Unsigned) (ProfileTime_15) << 10)) | (((((MR_Unsigned) (NeedToInit_16) << 9)) | (((((MR_Unsigned) (Target_17) << 7)) | (((((MR_Unsigned) (GCMethod_18) << 4)) | (((((MR_Unsigned) (TargetOrDump_7) << 3)) | (((((MR_Unsigned) ((MR_Integer) 0) << 2)) | (MR_Unsigned) ((MR_Integer) 0)))))))))))))))))))))))));
  }
  return Opts_8;
}

static MR_bool MR_CALL 
ml_backend__mlds_to_c_util____Unify____decl_or_defn_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  MR_bool succeeded;

  succeeded = ml_backend__mlds_to_c_util____Unify____decl_or_defn_0_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
  return succeeded;
}

static void MR_CALL 
ml_backend__mlds_to_c_util____Compare____decl_or_defn_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  MR_Word conv0_HeadVar__1_1;

  ml_backend__mlds_to_c_util____Compare____decl_or_defn_0_0(&conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
  *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
}

static MR_bool MR_CALL 
ml_backend__mlds_to_c_util____Unify____mlds_to_c_opts_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  MR_bool succeeded;

  succeeded = ml_backend__mlds_to_c_util____Unify____mlds_to_c_opts_0_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
  return succeeded;
}

static void MR_CALL 
ml_backend__mlds_to_c_util____Compare____mlds_to_c_opts_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  MR_Word conv0_HeadVar__1_1;

  ml_backend__mlds_to_c_util____Compare____mlds_to_c_opts_0_0(&conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
  *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
}

static MR_bool MR_CALL 
ml_backend__mlds_to_c_util____Unify____target_or_dump_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  MR_bool succeeded;

  succeeded = ml_backend__mlds_to_c_util____Unify____target_or_dump_0_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
  return succeeded;
}

static void MR_CALL 
ml_backend__mlds_to_c_util____Compare____target_or_dump_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  MR_Word conv0_HeadVar__1_1;

  ml_backend__mlds_to_c_util____Compare____target_or_dump_0_0(&conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
  *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
}

void mercury__ml_backend__mlds_to_c_util__init(void)
{
}

void mercury__ml_backend__mlds_to_c_util__init_type_tables(void)
{
	static MR_bool initialised = MR_FALSE;
	if (initialised) return;
	initialised = MR_TRUE;

	MR_register_type_ctor_info(&ml_backend__mlds_to_c_util__ml_backend__mlds_to_c_util__type_ctor_info_decl_or_defn_0);
	MR_register_type_ctor_info(&ml_backend__mlds_to_c_util__ml_backend__mlds_to_c_util__type_ctor_info_mlds_to_c_opts_0);
	MR_register_type_ctor_info(&ml_backend__mlds_to_c_util__ml_backend__mlds_to_c_util__type_ctor_info_target_or_dump_0);
}

void mercury__ml_backend__mlds_to_c_util__init_debugger(void)
{
	MR_fatal_error("debugger initialization in MLDS grade");
}

// Ensure everything is compiled with the same grade.
const char *mercury__ml_backend__mlds_to_c_util__grade_check(void)
{
    return &MR_GRADE_VAR;
}

// :- end_module ml_backend.mlds_to_c_util.
