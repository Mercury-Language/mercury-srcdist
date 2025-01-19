/*
** Automatically generated from `module_dep_info.m'
** by the Mercury compiler,
** version rotd-2025-01-19
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


// :- module parse_tree.module_dep_info.
// :- implementation.

/*
INIT mercury__parse_tree__module_dep_info__init
ENDINIT
*/

#include "parse_tree.module_dep_info.mih"


#include "assoc_list.mih"
#include "bool.mih"
#include "builtin.mih"
#include "char.mih"
#include "cord.mih"
#include "enum.mih"
#include "libs.mih"
#include "list.mih"
#include "map.mih"
#include "maybe.mih"
#include "mdbcomp.mih"
#include "one_or_more.mih"
#include "one_or_more_map.mih"
#include "pair.mih"
#include "parse_tree.mih"
#include "pretty_printer.mih"
#include "private_builtin.mih"
#include "recompilation.mih"
#include "set.mih"
#include "set_ordlist.mih"
#include "sparse_bitset.mih"
#include "term.mih"
#include "term_context.mih"
#include "tree234.mih"
#include "type_desc.mih"
#include "unit.mih"
#include "univ.mih"
#include "varset.mih"
#include "libs.file_util.mih"
#include "libs.globals.mih"
#include "libs.timestamp.mih"
#include "mdbcomp.prim_data.mih"
#include "mdbcomp.sym_name.mih"
#include "parse_tree.error_spec.mih"
#include "parse_tree.file_kind.mih"
#include "parse_tree.get_dependencies.mih"
#include "parse_tree.maybe_error.mih"
#include "parse_tree.module_baggage.mih"
#include "parse_tree.parse_error.mih"
#include "parse_tree.prog_data.mih"
#include "parse_tree.prog_data_foreign.mih"
#include "parse_tree.prog_data_pragma.mih"
#include "parse_tree.prog_item.mih"
#include "parse_tree.prog_parse_tree.mih"
#include "parse_tree.set_of_var.mih"
#include "recompilation.item_types.mih"




static const MR_PseudoTypeInfo parse_tree__module_dep_info__parse_tree__module_dep_info__field_types_module_dep_info_0_0[1];

static const MR_DuFunctorDesc parse_tree__module_dep_info__parse_tree__module_dep_info__du_functor_desc_module_dep_info_0_0;

static const MR_PseudoTypeInfo parse_tree__module_dep_info__parse_tree__module_dep_info__field_types_module_dep_info_0_1[1];

static const MR_DuFunctorDesc parse_tree__module_dep_info__parse_tree__module_dep_info__du_functor_desc_module_dep_info_0_1;

static const MR_DuFunctorDescPtr parse_tree__module_dep_info__parse_tree__module_dep_info__du_stag_ordered_module_dep_info_0_0[1];

static const MR_DuFunctorDescPtr parse_tree__module_dep_info__parse_tree__module_dep_info__du_stag_ordered_module_dep_info_0_1[1];

static const MR_DuPtagLayout parse_tree__module_dep_info__parse_tree__module_dep_info__du_ptag_ordered_module_dep_info_0[2];

static const MR_DuFunctorDescPtr parse_tree__module_dep_info__parse_tree__module_dep_info__du_name_ordered_module_dep_info_0[2];

static const MR_Integer parse_tree__module_dep_info__parse_tree__module_dep_info__functor_number_map_module_dep_info_0[2];

static const MR_FA_TypeInfo_Struct1 parse_tree__module_dep_info__set_ordlist__ti_set_ordlist_1mdbcomp__sym_name__type_ctor_info_sym_name_0;

static const MR_FA_TypeInfo_Struct1 parse_tree__module_dep_info__set_ordlist__ti_set_ordlist_1builtin__type_ctor_info_string_0;

static const MR_FA_TypeInfo_Struct1 parse_tree__module_dep_info__set_ordlist__ti_set_ordlist_1parse_tree__prog_data_foreign__type_ctor_info_fim_spec_0;

static const MR_FA_TypeInfo_Struct1 parse_tree__module_dep_info__set_ordlist__ti_set_ordlist_1parse_tree__prog_data_foreign__type_ctor_info_foreign_include_file_info_0;

static const MR_PseudoTypeInfo parse_tree__module_dep_info__parse_tree__module_dep_info__field_types_module_dep_summary_0_0[13];

static const MR_ConstString parse_tree__module_dep_info__parse_tree__module_dep_info__field_names_module_dep_summary_0_0[13];

static const MR_DuArgLocn parse_tree__module_dep_info__parse_tree__module_dep_info__field_locns_module_dep_summary_0_0[13];

static const MR_DuFunctorDesc parse_tree__module_dep_info__parse_tree__module_dep_info__du_functor_desc_module_dep_summary_0_0;

static const MR_DuFunctorDescPtr parse_tree__module_dep_info__parse_tree__module_dep_info__du_stag_ordered_module_dep_summary_0_0[1];

static const MR_DuPtagLayout parse_tree__module_dep_info__parse_tree__module_dep_info__du_ptag_ordered_module_dep_summary_0[1];

static const MR_DuFunctorDescPtr parse_tree__module_dep_info__parse_tree__module_dep_info__du_name_ordered_module_dep_summary_0[1];

static const MR_Integer parse_tree__module_dep_info__parse_tree__module_dep_info__functor_number_map_module_dep_summary_0[1];

static MR_bool MR_CALL 
parse_tree__module_dep_info____Unify____module_dep_info_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2);

static void MR_CALL 
parse_tree__module_dep_info____Compare____module_dep_info_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3);

static MR_bool MR_CALL 
parse_tree__module_dep_info____Unify____module_dep_summary_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2);

static void MR_CALL 
parse_tree__module_dep_info____Compare____module_dep_summary_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3);


static /* final */ const MR_Box parse_tree__module_dep_info_scalar_common_1[4][2];




static /* final */ const MR_Box parse_tree__module_dep_info_scalar_common_1[4][2] = {
  /* row   0 */
  {
    ((MR_Box) (&mercury__set_ordlist__set_ordlist__type_ctor_info_set_ordlist_1)),
    ((MR_Box) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0))
  },
  /* row   1 */
  {
    ((MR_Box) (&mercury__set_ordlist__set_ordlist__type_ctor_info_set_ordlist_1)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_string_0))
  },
  /* row   2 */
  {
    ((MR_Box) (&mercury__set_ordlist__set_ordlist__type_ctor_info_set_ordlist_1)),
    ((MR_Box) (&parse_tree__prog_data_foreign__parse_tree__prog_data_foreign__type_ctor_info_fim_spec_0))
  },
  /* row   3 */
  {
    ((MR_Box) (&mercury__set_ordlist__set_ordlist__type_ctor_info_set_ordlist_1)),
    ((MR_Box) (&parse_tree__prog_data_foreign__parse_tree__prog_data_foreign__type_ctor_info_foreign_include_file_info_0))
  },
};





static const MR_PseudoTypeInfo parse_tree__module_dep_info__parse_tree__module_dep_info__field_types_module_dep_info_0_0[1] = { (MR_PseudoTypeInfo) (&parse_tree__module_baggage__parse_tree__module_baggage__type_ctor_info_burdened_module_0) };

static const MR_DuFunctorDesc parse_tree__module_dep_info__parse_tree__module_dep_info__du_functor_desc_module_dep_info_0_0 = {
  (MR_String) "module_dep_info_full",
  INT16_C(1),
  UINT16_C(0),
  MR_SECTAG_NONE,
  UINT8_C(1),
  (MR_Integer) -1,
  INT32_C(0),
  parse_tree__module_dep_info__parse_tree__module_dep_info__field_types_module_dep_info_0_0,
  NULL,
  NULL,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE,
  UINT8_C(0)
};

static const MR_PseudoTypeInfo parse_tree__module_dep_info__parse_tree__module_dep_info__field_types_module_dep_info_0_1[1] = { (MR_PseudoTypeInfo) (&parse_tree__module_dep_info__parse_tree__module_dep_info__type_ctor_info_module_dep_summary_0) };

static const MR_DuFunctorDesc parse_tree__module_dep_info__parse_tree__module_dep_info__du_functor_desc_module_dep_info_0_1 = {
  (MR_String) "module_dep_info_summary",
  INT16_C(1),
  UINT16_C(0),
  MR_SECTAG_NONE_DIRECT_ARG,
  UINT8_C(0),
  (MR_Integer) -1,
  INT32_C(1),
  parse_tree__module_dep_info__parse_tree__module_dep_info__field_types_module_dep_info_0_1,
  NULL,
  NULL,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE,
  UINT8_C(0)
};

static const MR_DuFunctorDescPtr parse_tree__module_dep_info__parse_tree__module_dep_info__du_stag_ordered_module_dep_info_0_0[1] = { &parse_tree__module_dep_info__parse_tree__module_dep_info__du_functor_desc_module_dep_info_0_1 };

static const MR_DuFunctorDescPtr parse_tree__module_dep_info__parse_tree__module_dep_info__du_stag_ordered_module_dep_info_0_1[1] = { &parse_tree__module_dep_info__parse_tree__module_dep_info__du_functor_desc_module_dep_info_0_0 };

static const MR_DuPtagLayout parse_tree__module_dep_info__parse_tree__module_dep_info__du_ptag_ordered_module_dep_info_0[2] = {
  {
    UINT32_C(1),
    MR_SECTAG_NONE_DIRECT_ARG,
    parse_tree__module_dep_info__parse_tree__module_dep_info__du_stag_ordered_module_dep_info_0_0,
    INT8_C(-1),
    UINT8_C(0),
    UINT8_C(1)
  },
  {
    UINT32_C(1),
    MR_SECTAG_NONE,
    parse_tree__module_dep_info__parse_tree__module_dep_info__du_stag_ordered_module_dep_info_0_1,
    INT8_C(-1),
    UINT8_C(1),
    UINT8_C(1)
  }
};

static const MR_DuFunctorDescPtr parse_tree__module_dep_info__parse_tree__module_dep_info__du_name_ordered_module_dep_info_0[2] = {
  &parse_tree__module_dep_info__parse_tree__module_dep_info__du_functor_desc_module_dep_info_0_0,
  &parse_tree__module_dep_info__parse_tree__module_dep_info__du_functor_desc_module_dep_info_0_1
};

static const MR_Integer parse_tree__module_dep_info__parse_tree__module_dep_info__functor_number_map_module_dep_info_0[2] = {
  (MR_Integer) 0,
  (MR_Integer) 1
};

const MR_TypeCtorInfo_Struct parse_tree__module_dep_info__parse_tree__module_dep_info__type_ctor_info_module_dep_info_0 = {
  (MR_Integer) 0,
  UINT8_C(18),
  INT8_C(2),
  MR_TYPECTOR_REP_DU,
  ((MR_Box) (parse_tree__module_dep_info____Unify____module_dep_info_0_0_10001)),
  ((MR_Box) (parse_tree__module_dep_info____Compare____module_dep_info_0_0_10001)),
  (MR_String) "parse_tree.module_dep_info",
  (MR_String) "module_dep_info",
  { parse_tree__module_dep_info__parse_tree__module_dep_info__du_name_ordered_module_dep_info_0 },
  { parse_tree__module_dep_info__parse_tree__module_dep_info__du_ptag_ordered_module_dep_info_0 },
  (MR_Integer) 2,
  UINT16_C(12),
  parse_tree__module_dep_info__parse_tree__module_dep_info__functor_number_map_module_dep_info_0,

};

static const MR_FA_TypeInfo_Struct1 parse_tree__module_dep_info__set_ordlist__ti_set_ordlist_1mdbcomp__sym_name__type_ctor_info_sym_name_0 = {
  &mercury__set_ordlist__set_ordlist__type_ctor_info_set_ordlist_1,
  { (MR_TypeInfo) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0) }
};

static const MR_FA_TypeInfo_Struct1 parse_tree__module_dep_info__set_ordlist__ti_set_ordlist_1builtin__type_ctor_info_string_0 = {
  &mercury__set_ordlist__set_ordlist__type_ctor_info_set_ordlist_1,
  { (MR_TypeInfo) (&mercury__builtin__builtin__type_ctor_info_string_0) }
};

static const MR_FA_TypeInfo_Struct1 parse_tree__module_dep_info__set_ordlist__ti_set_ordlist_1parse_tree__prog_data_foreign__type_ctor_info_fim_spec_0 = {
  &mercury__set_ordlist__set_ordlist__type_ctor_info_set_ordlist_1,
  { (MR_TypeInfo) (&parse_tree__prog_data_foreign__parse_tree__prog_data_foreign__type_ctor_info_fim_spec_0) }
};

static const MR_FA_TypeInfo_Struct1 parse_tree__module_dep_info__set_ordlist__ti_set_ordlist_1parse_tree__prog_data_foreign__type_ctor_info_foreign_include_file_info_0 = {
  &mercury__set_ordlist__set_ordlist__type_ctor_info_set_ordlist_1,
  { (MR_TypeInfo) (&parse_tree__prog_data_foreign__parse_tree__prog_data_foreign__type_ctor_info_foreign_include_file_info_0) }
};

static const MR_PseudoTypeInfo parse_tree__module_dep_info__parse_tree__module_dep_info__field_types_module_dep_summary_0_0[13] = {
  (MR_PseudoTypeInfo) (&mercury__builtin__builtin__type_ctor_info_string_0),
  (MR_PseudoTypeInfo) (&mercury__builtin__builtin__type_ctor_info_string_0),
  (MR_PseudoTypeInfo) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0),
  (MR_PseudoTypeInfo) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0),
  (MR_PseudoTypeInfo) (&parse_tree__module_dep_info__set_ordlist__ti_set_ordlist_1mdbcomp__sym_name__type_ctor_info_sym_name_0),
  (MR_PseudoTypeInfo) (&parse_tree__module_baggage__parse_tree__module_baggage__type_ctor_info_maybe_top_module_0),
  (MR_PseudoTypeInfo) (&parse_tree__module_dep_info__set_ordlist__ti_set_ordlist_1mdbcomp__sym_name__type_ctor_info_sym_name_0),
  (MR_PseudoTypeInfo) (&parse_tree__module_dep_info__set_ordlist__ti_set_ordlist_1mdbcomp__sym_name__type_ctor_info_sym_name_0),
  (MR_PseudoTypeInfo) (&parse_tree__module_dep_info__set_ordlist__ti_set_ordlist_1builtin__type_ctor_info_string_0),
  (MR_PseudoTypeInfo) (&parse_tree__module_dep_info__set_ordlist__ti_set_ordlist_1parse_tree__prog_data_foreign__type_ctor_info_fim_spec_0),
  (MR_PseudoTypeInfo) (&parse_tree__module_dep_info__set_ordlist__ti_set_ordlist_1parse_tree__prog_data_foreign__type_ctor_info_foreign_include_file_info_0),
  (MR_PseudoTypeInfo) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_contains_foreign_code_0),
  (MR_PseudoTypeInfo) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_contains_foreign_export_0)
};

static const MR_ConstString parse_tree__module_dep_info__parse_tree__module_dep_info__field_names_module_dep_summary_0_0[13] = {
  (MR_String) "mds_source_file_name",
  (MR_String) "mds_source_file_dir",
  (MR_String) "mds_source_file_module_name",
  (MR_String) "mds_module_name",
  (MR_String) "mds_children",
  (MR_String) "mds_maybe_top_module",
  (MR_String) "mds_int_deps",
  (MR_String) "mds_imp_deps",
  (MR_String) "mds_fact_table_file_names",
  (MR_String) "mds_fims",
  (MR_String) "mds_foreign_include_files",
  (MR_String) "mds_contains_foreign_code",
  (MR_String) "mds_contains_foreign_export"
};

static const MR_DuArgLocn parse_tree__module_dep_info__parse_tree__module_dep_info__field_locns_module_dep_summary_0_0[13] = {
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
  },
  {
    (MR_Integer) 6,
    (MR_Integer) 0,
    (MR_Integer) 0
  },
  {
    (MR_Integer) 7,
    (MR_Integer) 0,
    (MR_Integer) 0
  },
  {
    (MR_Integer) 8,
    (MR_Integer) 0,
    (MR_Integer) 0
  },
  {
    (MR_Integer) 9,
    (MR_Integer) 0,
    (MR_Integer) 0
  },
  {
    (MR_Integer) 10,
    (MR_Integer) 0,
    (MR_Integer) 0
  },
  {
    (MR_Integer) 11,
    (MR_Integer) 0,
    (MR_Integer) 0
  },
  {
    (MR_Integer) 12,
    (MR_Integer) 0,
    (MR_Integer) 1
  }
};

static const MR_DuFunctorDesc parse_tree__module_dep_info__parse_tree__module_dep_info__du_functor_desc_module_dep_summary_0_0 = {
  (MR_String) "module_dep_summary",
  INT16_C(13),
  UINT16_C(0),
  MR_SECTAG_NONE,
  UINT8_C(0),
  (MR_Integer) -1,
  INT32_C(0),
  parse_tree__module_dep_info__parse_tree__module_dep_info__field_types_module_dep_summary_0_0,
  parse_tree__module_dep_info__parse_tree__module_dep_info__field_names_module_dep_summary_0_0,
  parse_tree__module_dep_info__parse_tree__module_dep_info__field_locns_module_dep_summary_0_0,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE,
  UINT8_C(0)
};

static const MR_DuFunctorDescPtr parse_tree__module_dep_info__parse_tree__module_dep_info__du_stag_ordered_module_dep_summary_0_0[1] = { &parse_tree__module_dep_info__parse_tree__module_dep_info__du_functor_desc_module_dep_summary_0_0 };

static const MR_DuPtagLayout parse_tree__module_dep_info__parse_tree__module_dep_info__du_ptag_ordered_module_dep_summary_0[1] = {
  {
    UINT32_C(1),
    MR_SECTAG_NONE,
    parse_tree__module_dep_info__parse_tree__module_dep_info__du_stag_ordered_module_dep_summary_0_0,
    INT8_C(-1),
    UINT8_C(0),
    UINT8_C(1)
  }
};

static const MR_DuFunctorDescPtr parse_tree__module_dep_info__parse_tree__module_dep_info__du_name_ordered_module_dep_summary_0[1] = { &parse_tree__module_dep_info__parse_tree__module_dep_info__du_functor_desc_module_dep_summary_0_0 };

static const MR_Integer parse_tree__module_dep_info__parse_tree__module_dep_info__functor_number_map_module_dep_summary_0[1] = { (MR_Integer) 0 };

const MR_TypeCtorInfo_Struct parse_tree__module_dep_info__parse_tree__module_dep_info__type_ctor_info_module_dep_summary_0 = {
  (MR_Integer) 0,
  UINT8_C(18),
  INT8_C(1),
  MR_TYPECTOR_REP_DU,
  ((MR_Box) (parse_tree__module_dep_info____Unify____module_dep_summary_0_0_10001)),
  ((MR_Box) (parse_tree__module_dep_info____Compare____module_dep_summary_0_0_10001)),
  (MR_String) "parse_tree.module_dep_info",
  (MR_String) "module_dep_summary",
  { parse_tree__module_dep_info__parse_tree__module_dep_info__du_name_ordered_module_dep_summary_0 },
  { parse_tree__module_dep_info__parse_tree__module_dep_info__du_ptag_ordered_module_dep_summary_0 },
  (MR_Integer) 1,
  UINT16_C(12),
  parse_tree__module_dep_info__parse_tree__module_dep_info__functor_number_map_module_dep_summary_0,

};

void MR_CALL 
parse_tree__module_dep_info____Compare____module_dep_info_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3)
{
  MR_bool succeeded;
  MR_Integer CastX_8 = (MR_Integer) (HeadVar__2_2);
  MR_Integer CastY_9 = (MR_Integer) (HeadVar__3_3);

  succeeded = (CastX_8 == CastY_9);
  if (succeeded)
    *HeadVar__1_1 = (MR_Integer) 0;
  else
  if (((MR_tag((MR_Word) HeadVar__2_2)) == (MR_Integer) 1))
    if (((MR_tag((MR_Word) HeadVar__3_3)) == (MR_Integer) 1))
    {
      MR_Word ArgX1_4 = ((MR_Word) ((MR_hl_field(1, HeadVar__2_2, (MR_Integer) 0))));
      MR_Word ArgY1_5 = ((MR_Word) ((MR_hl_field(1, HeadVar__3_3, (MR_Integer) 0))));

      parse_tree__module_baggage____Compare____burdened_module_0_0(HeadVar__1_1, ArgX1_4, ArgY1_5);
    }
    else
      *HeadVar__1_1 = (MR_Integer) 1;
  else
  if (((MR_tag((MR_Word) HeadVar__3_3)) == (MR_Integer) 1))
    *HeadVar__1_1 = (MR_Integer) 2;
  else
  {
    MR_Word ArgX1_6 = (MR_Word) ((MR_Word) (HeadVar__2_2));
    MR_Word ArgY1_7 = (MR_Word) ((MR_Word) (HeadVar__3_3));

    parse_tree__module_dep_info____Compare____module_dep_summary_0_0(HeadVar__1_1, ArgX1_6, ArgY1_7);
  }
}

void MR_CALL 
parse_tree__module_dep_info____Compare____module_dep_summary_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3)
{
  MR_bool succeeded;
  MR_Integer CastX_42 = (MR_Integer) (HeadVar__2_2);
  MR_Integer CastY_43 = (MR_Integer) (HeadVar__3_3);

  succeeded = (CastX_42 == CastY_43);
  if (succeeded)
    *HeadVar__1_1 = (MR_Integer) 0;
  else
  {
    MR_String ArgX1_4 = ((MR_String) ((MR_hl_field(0, HeadVar__2_2, (MR_Integer) 0))));
    MR_String ArgY1_5 = ((MR_String) ((MR_hl_field(0, HeadVar__3_3, (MR_Integer) 0))));
    MR_String ArgX2_7 = ((MR_String) ((MR_hl_field(0, HeadVar__2_2, (MR_Integer) 1))));
    MR_String ArgY2_8 = ((MR_String) ((MR_hl_field(0, HeadVar__3_3, (MR_Integer) 1))));
    MR_Word ArgX3_10 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, (MR_Integer) 2))));
    MR_Word ArgY3_11 = ((MR_Word) ((MR_hl_field(0, HeadVar__3_3, (MR_Integer) 2))));
    MR_Word ArgX4_13 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, (MR_Integer) 3))));
    MR_Word ArgY4_14 = ((MR_Word) ((MR_hl_field(0, HeadVar__3_3, (MR_Integer) 3))));
    MR_Word ArgX5_16 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, (MR_Integer) 4))));
    MR_Word ArgY5_17 = ((MR_Word) ((MR_hl_field(0, HeadVar__3_3, (MR_Integer) 4))));
    MR_Word ArgX6_19 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, (MR_Integer) 5))));
    MR_Word ArgY6_20 = ((MR_Word) ((MR_hl_field(0, HeadVar__3_3, (MR_Integer) 5))));
    MR_Word ArgX7_22 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, (MR_Integer) 6))));
    MR_Word ArgY7_23 = ((MR_Word) ((MR_hl_field(0, HeadVar__3_3, (MR_Integer) 6))));
    MR_Word ArgX8_25 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, (MR_Integer) 7))));
    MR_Word ArgY8_26 = ((MR_Word) ((MR_hl_field(0, HeadVar__3_3, (MR_Integer) 7))));
    MR_Word ArgX9_28 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, (MR_Integer) 8))));
    MR_Word ArgY9_29 = ((MR_Word) ((MR_hl_field(0, HeadVar__3_3, (MR_Integer) 8))));
    MR_Word ArgX10_31 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, (MR_Integer) 9))));
    MR_Word ArgY10_32 = ((MR_Word) ((MR_hl_field(0, HeadVar__3_3, (MR_Integer) 9))));
    MR_Word ArgX11_34 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, (MR_Integer) 10))));
    MR_Word ArgY11_35 = ((MR_Word) ((MR_hl_field(0, HeadVar__3_3, (MR_Integer) 10))));
    MR_Word ArgX12_37 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, (MR_Integer) 11))));
    MR_Word ArgY12_38 = ((MR_Word) ((MR_hl_field(0, HeadVar__3_3, (MR_Integer) 11))));
    MR_Word ArgX13_40 = ((MR_Unsigned) ((MR_hl_field(0, HeadVar__2_2, (MR_Integer) 12))) & (MR_Integer) 1);
    MR_Word ArgY13_41 = ((MR_Unsigned) ((MR_hl_field(0, HeadVar__3_3, (MR_Integer) 12))) & (MR_Integer) 1);
    MR_Word SubResult1_6;

    mercury__private_builtin__builtin_compare_string_3_p_0(&SubResult1_6, ArgX1_4, ArgY1_5);
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

        mdbcomp__sym_name____Compare____sym_name_0_0(&SubResult3_12, ArgX3_10, ArgY3_11);
        succeeded = (SubResult3_12 != (MR_Integer) 0);
        if (succeeded)
          *HeadVar__1_1 = SubResult3_12;
        else
        {
          MR_Word SubResult4_15;

          mdbcomp__sym_name____Compare____sym_name_0_0(&SubResult4_15, ArgX4_13, ArgY4_14);
          succeeded = (SubResult4_15 != (MR_Integer) 0);
          if (succeeded)
            *HeadVar__1_1 = SubResult4_15;
          else
          {
            MR_Word SubResult5_18;

            mercury__builtin__compare_3_p_0((MR_Word) (&parse_tree__module_dep_info_scalar_common_1[0]), &SubResult5_18, ((MR_Box) (ArgX5_16)), ((MR_Box) (ArgY5_17)));
            succeeded = (SubResult5_18 != (MR_Integer) 0);
            if (succeeded)
              *HeadVar__1_1 = SubResult5_18;
            else
            {
              MR_Word SubResult6_21;

              parse_tree__module_baggage____Compare____maybe_top_module_0_0(&SubResult6_21, ArgX6_19, ArgY6_20);
              succeeded = (SubResult6_21 != (MR_Integer) 0);
              if (succeeded)
                *HeadVar__1_1 = SubResult6_21;
              else
              {
                MR_Word SubResult7_24;

                mercury__builtin__compare_3_p_0((MR_Word) (&parse_tree__module_dep_info_scalar_common_1[0]), &SubResult7_24, ((MR_Box) (ArgX7_22)), ((MR_Box) (ArgY7_23)));
                succeeded = (SubResult7_24 != (MR_Integer) 0);
                if (succeeded)
                  *HeadVar__1_1 = SubResult7_24;
                else
                {
                  MR_Word SubResult8_27;

                  mercury__builtin__compare_3_p_0((MR_Word) (&parse_tree__module_dep_info_scalar_common_1[0]), &SubResult8_27, ((MR_Box) (ArgX8_25)), ((MR_Box) (ArgY8_26)));
                  succeeded = (SubResult8_27 != (MR_Integer) 0);
                  if (succeeded)
                    *HeadVar__1_1 = SubResult8_27;
                  else
                  {
                    MR_Word SubResult9_30;

                    mercury__builtin__compare_3_p_0((MR_Word) (&parse_tree__module_dep_info_scalar_common_1[1]), &SubResult9_30, ((MR_Box) (ArgX9_28)), ((MR_Box) (ArgY9_29)));
                    succeeded = (SubResult9_30 != (MR_Integer) 0);
                    if (succeeded)
                      *HeadVar__1_1 = SubResult9_30;
                    else
                    {
                      MR_Word SubResult10_33;

                      mercury__builtin__compare_3_p_0((MR_Word) (&parse_tree__module_dep_info_scalar_common_1[2]), &SubResult10_33, ((MR_Box) (ArgX10_31)), ((MR_Box) (ArgY10_32)));
                      succeeded = (SubResult10_33 != (MR_Integer) 0);
                      if (succeeded)
                        *HeadVar__1_1 = SubResult10_33;
                      else
                      {
                        MR_Word SubResult11_36;

                        mercury__builtin__compare_3_p_0((MR_Word) (&parse_tree__module_dep_info_scalar_common_1[3]), &SubResult11_36, ((MR_Box) (ArgX11_34)), ((MR_Box) (ArgY11_35)));
                        succeeded = (SubResult11_36 != (MR_Integer) 0);
                        if (succeeded)
                          *HeadVar__1_1 = SubResult11_36;
                        else
                        {
                          MR_Word SubResult12_39;

                          parse_tree__prog_item____Compare____contains_foreign_code_0_0(&SubResult12_39, ArgX12_37, ArgY12_38);
                          succeeded = (SubResult12_39 != (MR_Integer) 0);
                          if (succeeded)
                            *HeadVar__1_1 = SubResult12_39;
                          else
                          {
                            MR_Integer Var_57 = (MR_Integer) (ArgX13_40);
                            MR_Integer Var_58 = (MR_Integer) (ArgY13_41);

                            succeeded = (Var_57 < Var_58);
                            if (succeeded)
                              *HeadVar__1_1 = (MR_Integer) 1;
                            else
                            {
                              succeeded = (Var_57 > Var_58);
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

MR_bool MR_CALL 
parse_tree__module_dep_info____Unify____module_dep_info_0_0(
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
  if (((MR_tag((MR_Word) HeadVar__1_1)) == (MR_Integer) 1))
  {
    MR_Word ArgX1_3 = ((MR_Word) ((MR_hl_field(1, HeadVar__1_1, (MR_Integer) 0))));
    MR_Word ArgY1_4;

    succeeded = ((MR_tag((MR_Word) HeadVar__2_2)) == (MR_Integer) 1);
    if (succeeded)
    {
      ArgY1_4 = ((MR_Word) ((MR_hl_field(1, HeadVar__2_2, (MR_Integer) 0))));
      succeeded = parse_tree__module_baggage____Unify____burdened_module_0_0(ArgX1_3, ArgY1_4);
    }
  }
  else
  {
    MR_Word ArgX1_5 = (MR_Word) ((MR_Word) (HeadVar__1_1));
    MR_Word ArgY1_6;

    succeeded = ((MR_tag((MR_Word) HeadVar__2_2)) == (MR_Integer) 0);
    if (succeeded)
    {
      ArgY1_6 = (MR_Word) ((MR_Word) (HeadVar__2_2));
      succeeded = parse_tree__module_dep_info____Unify____module_dep_summary_0_0(ArgX1_5, ArgY1_6);
    }
  }
  return succeeded;
}

MR_bool MR_CALL 
parse_tree__module_dep_info____Unify____module_dep_summary_0_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2)
{
  MR_bool succeeded;
  MR_Integer CastX_29 = (MR_Integer) (HeadVar__1_1);
  MR_Integer CastY_30 = (MR_Integer) (HeadVar__2_2);

  succeeded = (CastX_29 == CastY_30);
  if (succeeded)
    succeeded = MR_TRUE;
  else
  {
    MR_Word TypeInfo_33_33;
    MR_Word TypeInfo_35_35;
    MR_Word TypeInfo_36_36;
    MR_Word TypeInfo_37_37;
    MR_Word TypeInfo_38_38;
    MR_Word TypeInfo_39_39;
    MR_String ArgX1_3 = ((MR_String) ((MR_hl_field(0, HeadVar__1_1, (MR_Integer) 0))));
    MR_String ArgY1_4 = ((MR_String) ((MR_hl_field(0, HeadVar__2_2, (MR_Integer) 0))));
    MR_String ArgX2_5 = ((MR_String) ((MR_hl_field(0, HeadVar__1_1, (MR_Integer) 1))));
    MR_String ArgY2_6 = ((MR_String) ((MR_hl_field(0, HeadVar__2_2, (MR_Integer) 1))));
    MR_Word ArgX3_7 = ((MR_Word) ((MR_hl_field(0, HeadVar__1_1, (MR_Integer) 2))));
    MR_Word ArgY3_8 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, (MR_Integer) 2))));
    MR_Word ArgX4_9 = ((MR_Word) ((MR_hl_field(0, HeadVar__1_1, (MR_Integer) 3))));
    MR_Word ArgY4_10 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, (MR_Integer) 3))));
    MR_Word ArgX5_11 = ((MR_Word) ((MR_hl_field(0, HeadVar__1_1, (MR_Integer) 4))));
    MR_Word ArgY5_12 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, (MR_Integer) 4))));
    MR_Word ArgX6_13 = ((MR_Word) ((MR_hl_field(0, HeadVar__1_1, (MR_Integer) 5))));
    MR_Word ArgY6_14 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, (MR_Integer) 5))));
    MR_Word ArgX7_15 = ((MR_Word) ((MR_hl_field(0, HeadVar__1_1, (MR_Integer) 6))));
    MR_Word ArgY7_16 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, (MR_Integer) 6))));
    MR_Word ArgX8_17 = ((MR_Word) ((MR_hl_field(0, HeadVar__1_1, (MR_Integer) 7))));
    MR_Word ArgY8_18 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, (MR_Integer) 7))));
    MR_Word ArgX9_19 = ((MR_Word) ((MR_hl_field(0, HeadVar__1_1, (MR_Integer) 8))));
    MR_Word ArgY9_20 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, (MR_Integer) 8))));
    MR_Word ArgX10_21 = ((MR_Word) ((MR_hl_field(0, HeadVar__1_1, (MR_Integer) 9))));
    MR_Word ArgY10_22 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, (MR_Integer) 9))));
    MR_Word ArgX11_23 = ((MR_Word) ((MR_hl_field(0, HeadVar__1_1, (MR_Integer) 10))));
    MR_Word ArgY11_24 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, (MR_Integer) 10))));
    MR_Word ArgX12_25 = ((MR_Word) ((MR_hl_field(0, HeadVar__1_1, (MR_Integer) 11))));
    MR_Word ArgY12_26 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, (MR_Integer) 11))));
    MR_Word ArgX13_27 = ((MR_Unsigned) ((MR_hl_field(0, HeadVar__1_1, (MR_Integer) 12))) & (MR_Integer) 1);
    MR_Word ArgY13_28 = ((MR_Unsigned) ((MR_hl_field(0, HeadVar__2_2, (MR_Integer) 12))) & (MR_Integer) 1);

    succeeded = (strcmp(ArgX1_3, ArgY1_4) == 0);
    if (succeeded)
    {
      succeeded = (strcmp(ArgX2_5, ArgY2_6) == 0);
      if (succeeded)
      {
        succeeded = mdbcomp__sym_name____Unify____sym_name_0_0(ArgX3_7, ArgY3_8);
        if (succeeded)
        {
          succeeded = mdbcomp__sym_name____Unify____sym_name_0_0(ArgX4_9, ArgY4_10);
          if (succeeded)
          {
            TypeInfo_33_33 = (MR_Word) (&parse_tree__module_dep_info_scalar_common_1[0]);
            succeeded = mercury__builtin__unify_2_p_0(TypeInfo_33_33, ((MR_Box) (ArgX5_11)), ((MR_Box) (ArgY5_12)));
            if (succeeded)
            {
              succeeded = parse_tree__module_baggage____Unify____maybe_top_module_0_0(ArgX6_13, ArgY6_14);
              if (succeeded)
              {
                TypeInfo_35_35 = (MR_Word) (&parse_tree__module_dep_info_scalar_common_1[0]);
                succeeded = mercury__builtin__unify_2_p_0(TypeInfo_35_35, ((MR_Box) (ArgX7_15)), ((MR_Box) (ArgY7_16)));
                if (succeeded)
                {
                  TypeInfo_36_36 = (MR_Word) (&parse_tree__module_dep_info_scalar_common_1[0]);
                  succeeded = mercury__builtin__unify_2_p_0(TypeInfo_36_36, ((MR_Box) (ArgX8_17)), ((MR_Box) (ArgY8_18)));
                  if (succeeded)
                  {
                    TypeInfo_37_37 = (MR_Word) (&parse_tree__module_dep_info_scalar_common_1[1]);
                    succeeded = mercury__builtin__unify_2_p_0(TypeInfo_37_37, ((MR_Box) (ArgX9_19)), ((MR_Box) (ArgY9_20)));
                    if (succeeded)
                    {
                      TypeInfo_38_38 = (MR_Word) (&parse_tree__module_dep_info_scalar_common_1[2]);
                      succeeded = mercury__builtin__unify_2_p_0(TypeInfo_38_38, ((MR_Box) (ArgX10_21)), ((MR_Box) (ArgY10_22)));
                      if (succeeded)
                      {
                        TypeInfo_39_39 = (MR_Word) (&parse_tree__module_dep_info_scalar_common_1[3]);
                        succeeded = mercury__builtin__unify_2_p_0(TypeInfo_39_39, ((MR_Box) (ArgX11_23)), ((MR_Box) (ArgY11_24)));
                        if (succeeded)
                        {
                          succeeded = parse_tree__prog_item____Unify____contains_foreign_code_0_0(ArgX12_25, ArgY12_26);
                          if (succeeded)
                            succeeded = (ArgX13_27 == ArgY13_28);
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
parse_tree__module_dep_info__module_dep_info_get_foreign_include_files_2_p_0(
  MR_Word ModuleDepInfo_3,
  MR_Word * X_4)
{
  if (((MR_tag((MR_Word) ModuleDepInfo_3)) == (MR_Integer) 1))
  {
    MR_Word BurdenedModule_5 = ((MR_Word) ((MR_hl_field(1, ModuleDepInfo_3, (MR_Integer) 0))));
    MR_Word ParseTreeModuleSrc_6 = ((MR_Word) ((MR_hl_field(0, BurdenedModule_5, (MR_Integer) 1))));

    parse_tree__get_dependencies__get_foreign_include_file_infos_2_p_0(ParseTreeModuleSrc_6, X_4);
  }
  else
  {
    MR_Word Summary_7 = (MR_Word) ((MR_Word) (ModuleDepInfo_3));

    *X_4 = ((MR_Word) ((MR_hl_field(0, Summary_7, (MR_Integer) 10))));
  }
}

void MR_CALL 
parse_tree__module_dep_info__module_dep_info_get_fims_2_p_0(
  MR_Word ModuleDepInfo_3,
  MR_Word * X_4)
{
  if (((MR_tag((MR_Word) ModuleDepInfo_3)) == (MR_Integer) 1))
  {
    MR_Word BurdenedModule_5 = ((MR_Word) ((MR_hl_field(1, ModuleDepInfo_3, (MR_Integer) 0))));
    MR_Word ParseTreeModuleSrc_6 = ((MR_Word) ((MR_hl_field(0, BurdenedModule_5, (MR_Integer) 1))));

    parse_tree__get_dependencies__get_fim_specs_2_p_0(ParseTreeModuleSrc_6, X_4);
  }
  else
  {
    MR_Word Summary_7 = (MR_Word) ((MR_Word) (ModuleDepInfo_3));

    *X_4 = ((MR_Word) ((MR_hl_field(0, Summary_7, (MR_Integer) 9))));
  }
}

void MR_CALL 
parse_tree__module_dep_info__module_dep_info_get_fact_tables_2_p_0(
  MR_Word ModuleDepInfo_3,
  MR_Word * X_4)
{
  if (((MR_tag((MR_Word) ModuleDepInfo_3)) == (MR_Integer) 1))
  {
    MR_Word BurdenedModule_5 = ((MR_Word) ((MR_hl_field(1, ModuleDepInfo_3, (MR_Integer) 0))));
    MR_Word ParseTreeModuleSrc_6 = ((MR_Word) ((MR_hl_field(0, BurdenedModule_5, (MR_Integer) 1))));

    parse_tree__get_dependencies__get_fact_tables_2_p_0(ParseTreeModuleSrc_6, X_4);
  }
  else
  {
    MR_Word Summary_7 = (MR_Word) ((MR_Word) (ModuleDepInfo_3));

    *X_4 = ((MR_Word) ((MR_hl_field(0, Summary_7, (MR_Integer) 8))));
  }
}

void MR_CALL 
parse_tree__module_dep_info__module_dep_info_get_imp_deps_2_p_0(
  MR_Word ModuleDepInfo_3,
  MR_Word * X_4)
{
  if (((MR_tag((MR_Word) ModuleDepInfo_3)) == (MR_Integer) 1))
  {
    MR_Word BurdenedModule_5 = ((MR_Word) ((MR_hl_field(1, ModuleDepInfo_3, (MR_Integer) 0))));
    MR_Word ParseTreeModuleSrc_6 = ((MR_Word) ((MR_hl_field(0, BurdenedModule_5, (MR_Integer) 1))));
    MR_Word Var_7;

    parse_tree__module_baggage__parse_tree_module_src_get_int_imp_deps_3_p_0(ParseTreeModuleSrc_6, &Var_7, X_4);
  }
  else
  {
    MR_Word Summary_8 = (MR_Word) ((MR_Word) (ModuleDepInfo_3));

    *X_4 = ((MR_Word) ((MR_hl_field(0, Summary_8, (MR_Integer) 7))));
  }
}

void MR_CALL 
parse_tree__module_dep_info__module_dep_info_get_int_deps_2_p_0(
  MR_Word ModuleDepInfo_3,
  MR_Word * X_4)
{
  if (((MR_tag((MR_Word) ModuleDepInfo_3)) == (MR_Integer) 1))
  {
    MR_Word BurdenedModule_5 = ((MR_Word) ((MR_hl_field(1, ModuleDepInfo_3, (MR_Integer) 0))));
    MR_Word ParseTreeModuleSrc_6 = ((MR_Word) ((MR_hl_field(0, BurdenedModule_5, (MR_Integer) 1))));
    MR_Word Var_7;

    parse_tree__module_baggage__parse_tree_module_src_get_int_imp_deps_3_p_0(ParseTreeModuleSrc_6, X_4, &Var_7);
  }
  else
  {
    MR_Word Summary_8 = (MR_Word) ((MR_Word) (ModuleDepInfo_3));

    *X_4 = ((MR_Word) ((MR_hl_field(0, Summary_8, (MR_Integer) 6))));
  }
}

void MR_CALL 
parse_tree__module_dep_info__module_dep_info_get_maybe_top_module_2_p_0(
  MR_Word ModuleDepInfo_3,
  MR_Word * X_4)
{
  if (((MR_tag((MR_Word) ModuleDepInfo_3)) == (MR_Integer) 1))
  {
    MR_Word BurdenedModule_5 = ((MR_Word) ((MR_hl_field(1, ModuleDepInfo_3, (MR_Integer) 0))));
    MR_Word Baggage_6 = ((MR_Word) ((MR_hl_field(0, BurdenedModule_5, (MR_Integer) 0))));

    *X_4 = ((MR_Word) ((MR_hl_field(0, Baggage_6, (MR_Integer) 3))));
  }
  else
  {
    MR_Word Summary_7 = (MR_Word) ((MR_Word) (ModuleDepInfo_3));

    *X_4 = ((MR_Word) ((MR_hl_field(0, Summary_7, (MR_Integer) 5))));
  }
}

void MR_CALL 
parse_tree__module_dep_info__module_dep_info_get_children_2_p_0(
  MR_Word ModuleDepInfo_3,
  MR_Word * X_4)
{
  if (((MR_tag((MR_Word) ModuleDepInfo_3)) == (MR_Integer) 1))
  {
    MR_Word BurdenedModule_5 = ((MR_Word) ((MR_hl_field(1, ModuleDepInfo_3, (MR_Integer) 0))));
    MR_Word ParseTreeModuleSrc_6 = ((MR_Word) ((MR_hl_field(0, BurdenedModule_5, (MR_Integer) 1))));
    MR_Word IncludeMap_7 = ((MR_Word) ((MR_hl_field(0, ParseTreeModuleSrc_6, (MR_Integer) 2))));

    *X_4 = mercury__map__keys_as_set_1_f_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), (MR_Word) (&parse_tree__prog_parse_tree__parse_tree__prog_parse_tree__type_ctor_info_include_module_info_0), IncludeMap_7);
  }
  else
  {
    MR_Word Summary_8 = (MR_Word) ((MR_Word) (ModuleDepInfo_3));

    *X_4 = ((MR_Word) ((MR_hl_field(0, Summary_8, (MR_Integer) 4))));
  }
}

void MR_CALL 
parse_tree__module_dep_info__module_dep_info_get_module_name_2_p_0(
  MR_Word ModuleDepInfo_3,
  MR_Word * X_4)
{
  if (((MR_tag((MR_Word) ModuleDepInfo_3)) == (MR_Integer) 1))
  {
    MR_Word BurdenedModule_5 = ((MR_Word) ((MR_hl_field(1, ModuleDepInfo_3, (MR_Integer) 0))));
    MR_Word ParseTreeModuleSrc_6 = ((MR_Word) ((MR_hl_field(0, BurdenedModule_5, (MR_Integer) 1))));

    *X_4 = ((MR_Word) ((MR_hl_field(0, ParseTreeModuleSrc_6, (MR_Integer) 0))));
  }
  else
  {
    MR_Word Summary_7 = (MR_Word) ((MR_Word) (ModuleDepInfo_3));

    *X_4 = ((MR_Word) ((MR_hl_field(0, Summary_7, (MR_Integer) 3))));
  }
}

void MR_CALL 
parse_tree__module_dep_info__module_dep_info_get_source_file_module_name_2_p_0(
  MR_Word ModuleDepInfo_3,
  MR_Word * X_4)
{
  if (((MR_tag((MR_Word) ModuleDepInfo_3)) == (MR_Integer) 1))
  {
    MR_Word BurdenedModule_5 = ((MR_Word) ((MR_hl_field(1, ModuleDepInfo_3, (MR_Integer) 0))));
    MR_Word Baggage_6 = ((MR_Word) ((MR_hl_field(0, BurdenedModule_5, (MR_Integer) 0))));

    *X_4 = ((MR_Word) ((MR_hl_field(0, Baggage_6, (MR_Integer) 2))));
  }
  else
  {
    MR_Word Summary_7 = (MR_Word) ((MR_Word) (ModuleDepInfo_3));

    *X_4 = ((MR_Word) ((MR_hl_field(0, Summary_7, (MR_Integer) 2))));
  }
}

void MR_CALL 
parse_tree__module_dep_info__module_dep_info_get_source_file_dir_2_p_0(
  MR_Word ModuleDepInfo_3,
  MR_String * X_4)
{
  if (((MR_tag((MR_Word) ModuleDepInfo_3)) == (MR_Integer) 1))
  {
    MR_Word BurdenedModule_5 = ((MR_Word) ((MR_hl_field(1, ModuleDepInfo_3, (MR_Integer) 0))));
    MR_Word Baggage_6 = ((MR_Word) ((MR_hl_field(0, BurdenedModule_5, (MR_Integer) 0))));

    *X_4 = ((MR_String) ((MR_hl_field(0, Baggage_6, (MR_Integer) 1))));
  }
  else
  {
    MR_Word Summary_7 = (MR_Word) ((MR_Word) (ModuleDepInfo_3));

    *X_4 = ((MR_String) ((MR_hl_field(0, Summary_7, (MR_Integer) 1))));
  }
}

void MR_CALL 
parse_tree__module_dep_info__module_dep_info_get_source_file_name_2_p_0(
  MR_Word ModuleDepInfo_3,
  MR_String * X_4)
{
  if (((MR_tag((MR_Word) ModuleDepInfo_3)) == (MR_Integer) 1))
  {
    MR_Word BurdenedModule_5 = ((MR_Word) ((MR_hl_field(1, ModuleDepInfo_3, (MR_Integer) 0))));
    MR_Word Baggage_6 = ((MR_Word) ((MR_hl_field(0, BurdenedModule_5, (MR_Integer) 0))));

    *X_4 = ((MR_String) ((MR_hl_field(0, Baggage_6, (MR_Integer) 0))));
  }
  else
  {
    MR_Word Summary_7 = (MR_Word) ((MR_Word) (ModuleDepInfo_3));

    *X_4 = ((MR_String) ((MR_hl_field(0, Summary_7, (MR_Integer) 0))));
  }
}

static MR_bool MR_CALL 
parse_tree__module_dep_info____Unify____module_dep_info_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  MR_bool succeeded;

  succeeded = parse_tree__module_dep_info____Unify____module_dep_info_0_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
  return succeeded;
}

static void MR_CALL 
parse_tree__module_dep_info____Compare____module_dep_info_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  MR_Word conv0_HeadVar__1_1;

  parse_tree__module_dep_info____Compare____module_dep_info_0_0(&conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
  *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
}

static MR_bool MR_CALL 
parse_tree__module_dep_info____Unify____module_dep_summary_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  MR_bool succeeded;

  succeeded = parse_tree__module_dep_info____Unify____module_dep_summary_0_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
  return succeeded;
}

static void MR_CALL 
parse_tree__module_dep_info____Compare____module_dep_summary_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  MR_Word conv0_HeadVar__1_1;

  parse_tree__module_dep_info____Compare____module_dep_summary_0_0(&conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
  *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
}

void mercury__parse_tree__module_dep_info__init(void)
{
}

void mercury__parse_tree__module_dep_info__init_type_tables(void)
{
	static MR_bool initialised = MR_FALSE;
	if (initialised) return;
	initialised = MR_TRUE;

	MR_register_type_ctor_info(&parse_tree__module_dep_info__parse_tree__module_dep_info__type_ctor_info_module_dep_info_0);
	MR_register_type_ctor_info(&parse_tree__module_dep_info__parse_tree__module_dep_info__type_ctor_info_module_dep_summary_0);
}

void mercury__parse_tree__module_dep_info__init_debugger(void)
{
	MR_fatal_error("debugger initialization in MLDS grade");
}

// Ensure everything is compiled with the same grade.
const char *mercury__parse_tree__module_dep_info__grade_check(void)
{
    return &MR_GRADE_VAR;
}

// :- end_module parse_tree.module_dep_info.
