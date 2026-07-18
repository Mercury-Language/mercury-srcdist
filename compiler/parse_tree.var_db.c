/*
** Automatically generated from `var_db.m'
** by the Mercury compiler,
** version rotd-2026-07-18
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


// :- module parse_tree.var_db.
// :- implementation.

/*
INIT mercury__parse_tree__var_db__init
ENDINIT
*/

#include "parse_tree.var_db.mih"


#include "assoc_list.mih"
#include "builtin.mih"
#include "char.mih"
#include "cord.mih"
#include "counter.mih"
#include "enum.mih"
#include "list.mih"
#include "map.mih"
#include "maybe.mih"
#include "mdbcomp.mih"
#include "one_or_more.mih"
#include "pair.mih"
#include "parse_tree.mih"
#include "pretty_printer.mih"
#include "private_builtin.mih"
#include "set.mih"
#include "set_ordlist.mih"
#include "term.mih"
#include "term_context.mih"
#include "tree234.mih"
#include "type_desc.mih"
#include "univ.mih"
#include "varset.mih"
#include "mdbcomp.prim_data.mih"
#include "mdbcomp.sym_name.mih"
#include "parse_tree.prog_data.mih"
#include "parse_tree.prog_item.mih"
#include "parse_tree.prog_type.mih"
#include "parse_tree.var_table.mih"
#include "parse_tree.vartypes.mih"




static const MR_PseudoTypeInfo parse_tree__var_db__parse_tree__var_db__field_types_var_db_0_0[1];

static const MR_DuFunctorDesc parse_tree__var_db__parse_tree__var_db__du_functor_desc_var_db_0_0;

static const MR_PseudoTypeInfo parse_tree__var_db__parse_tree__var_db__field_types_var_db_0_1[1];

static const MR_DuFunctorDesc parse_tree__var_db__parse_tree__var_db__du_functor_desc_var_db_0_1;

static const MR_DuFunctorDescPtr parse_tree__var_db__parse_tree__var_db__du_stag_ordered_var_db_0_0[1];

static const MR_DuFunctorDescPtr parse_tree__var_db__parse_tree__var_db__du_stag_ordered_var_db_0_1[1];

static const MR_DuPtagLayout parse_tree__var_db__parse_tree__var_db__du_ptag_ordered_var_db_0[2];

static const MR_DuFunctorDescPtr parse_tree__var_db__parse_tree__var_db__du_name_ordered_var_db_0[2];

static const MR_Integer parse_tree__var_db__parse_tree__var_db__functor_number_map_var_db_0[2];

static const MR_FA_TypeInfo_Struct1 parse_tree__var_db__varset__ti_varset_1parse_tree__prog_data__type_ctor_info_prog_var_type_0;

static const MR_PseudoTypeInfo parse_tree__var_db__parse_tree__var_db__field_types_var_name_source_0_0[1];

static const MR_DuFunctorDesc parse_tree__var_db__parse_tree__var_db__du_functor_desc_var_name_source_0_0;

static const MR_PseudoTypeInfo parse_tree__var_db__parse_tree__var_db__field_types_var_name_source_0_1[1];

static const MR_DuFunctorDesc parse_tree__var_db__parse_tree__var_db__du_functor_desc_var_name_source_0_1;

static const MR_DuFunctorDescPtr parse_tree__var_db__parse_tree__var_db__du_stag_ordered_var_name_source_0_0[1];

static const MR_DuFunctorDescPtr parse_tree__var_db__parse_tree__var_db__du_stag_ordered_var_name_source_0_1[1];

static const MR_DuPtagLayout parse_tree__var_db__parse_tree__var_db__du_ptag_ordered_var_name_source_0[2];

static const MR_DuFunctorDescPtr parse_tree__var_db__parse_tree__var_db__du_name_ordered_var_name_source_0[2];

static const MR_Integer parse_tree__var_db__parse_tree__var_db__functor_number_map_var_name_source_0[2];

static const MR_FA_TypeInfo_Struct1 parse_tree__var_db__term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0;

static const MR_FA_TypeInfo_Struct2 parse_tree__var_db__tree234__ti_tree234_2term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0parse_tree__prog_data__type_ctor_info_mer_type_0;

static const MR_PseudoTypeInfo parse_tree__var_db__parse_tree__var_db__field_types_var_type_source_0_0[1];

static const MR_DuFunctorDesc parse_tree__var_db__parse_tree__var_db__du_functor_desc_var_type_source_0_0;

static const MR_PseudoTypeInfo parse_tree__var_db__parse_tree__var_db__field_types_var_type_source_0_1[1];

static const MR_DuFunctorDesc parse_tree__var_db__parse_tree__var_db__du_functor_desc_var_type_source_0_1;

static const MR_DuFunctorDescPtr parse_tree__var_db__parse_tree__var_db__du_stag_ordered_var_type_source_0_0[1];

static const MR_DuFunctorDescPtr parse_tree__var_db__parse_tree__var_db__du_stag_ordered_var_type_source_0_1[1];

static const MR_DuPtagLayout parse_tree__var_db__parse_tree__var_db__du_ptag_ordered_var_type_source_0[2];

static const MR_DuFunctorDescPtr parse_tree__var_db__parse_tree__var_db__du_name_ordered_var_type_source_0[2];

static const MR_Integer parse_tree__var_db__parse_tree__var_db__functor_number_map_var_type_source_0[2];

static MR_bool MR_CALL 
parse_tree__var_db____Unify____var_db_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2);

static void MR_CALL 
parse_tree__var_db____Compare____var_db_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3);

static MR_bool MR_CALL 
parse_tree__var_db____Unify____var_name_source_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2);

static void MR_CALL 
parse_tree__var_db____Compare____var_name_source_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3);

static MR_bool MR_CALL 
parse_tree__var_db____Unify____var_type_source_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2);

static void MR_CALL 
parse_tree__var_db____Compare____var_type_source_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3);


static /* final */ const MR_Box parse_tree__var_db_scalar_common_1[1][2];




static /* final */ const MR_Box parse_tree__var_db_scalar_common_1[1][2] = {
  /* row   0 */
  {
    ((MR_Box) (&mercury__varset__varset__type_ctor_info_varset_1)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0))
  },
};





static const MR_PseudoTypeInfo parse_tree__var_db__parse_tree__var_db__field_types_var_db_0_0[1] = { (MR_PseudoTypeInfo) (&parse_tree__vartypes__parse_tree__vartypes__type_ctor_info_prog_var_set_types_0) };

static const MR_DuFunctorDesc parse_tree__var_db__parse_tree__var_db__du_functor_desc_var_db_0_0 = {
  (MR_String) "var_db_varset_vartypes",
  INT16_C(1),
  UINT16_C(0),
  MR_SECTAG_NONE,
  UINT8_C(0),
  (MR_Integer) -1,
  INT32_C(0),
  parse_tree__var_db__parse_tree__var_db__field_types_var_db_0_0,
  NULL,
  NULL,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE,
  UINT8_C(0)
};

static const MR_PseudoTypeInfo parse_tree__var_db__parse_tree__var_db__field_types_var_db_0_1[1] = { (MR_PseudoTypeInfo) (&parse_tree__var_table__parse_tree__var_table__type_ctor_info_var_table_0) };

static const MR_DuFunctorDesc parse_tree__var_db__parse_tree__var_db__du_functor_desc_var_db_0_1 = {
  (MR_String) "var_db_var_table",
  INT16_C(1),
  UINT16_C(0),
  MR_SECTAG_NONE,
  UINT8_C(1),
  (MR_Integer) -1,
  INT32_C(1),
  parse_tree__var_db__parse_tree__var_db__field_types_var_db_0_1,
  NULL,
  NULL,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE,
  UINT8_C(0)
};

static const MR_DuFunctorDescPtr parse_tree__var_db__parse_tree__var_db__du_stag_ordered_var_db_0_0[1] = { &parse_tree__var_db__parse_tree__var_db__du_functor_desc_var_db_0_0 };

static const MR_DuFunctorDescPtr parse_tree__var_db__parse_tree__var_db__du_stag_ordered_var_db_0_1[1] = { &parse_tree__var_db__parse_tree__var_db__du_functor_desc_var_db_0_1 };

static const MR_DuPtagLayout parse_tree__var_db__parse_tree__var_db__du_ptag_ordered_var_db_0[2] = {
  {
    UINT32_C(1),
    MR_SECTAG_NONE,
    parse_tree__var_db__parse_tree__var_db__du_stag_ordered_var_db_0_0,
    INT8_C(-1),
    UINT8_C(0),
    UINT8_C(1)
  },
  {
    UINT32_C(1),
    MR_SECTAG_NONE,
    parse_tree__var_db__parse_tree__var_db__du_stag_ordered_var_db_0_1,
    INT8_C(-1),
    UINT8_C(1),
    UINT8_C(1)
  }
};

static const MR_DuFunctorDescPtr parse_tree__var_db__parse_tree__var_db__du_name_ordered_var_db_0[2] = {
  &parse_tree__var_db__parse_tree__var_db__du_functor_desc_var_db_0_1,
  &parse_tree__var_db__parse_tree__var_db__du_functor_desc_var_db_0_0
};

static const MR_Integer parse_tree__var_db__parse_tree__var_db__functor_number_map_var_db_0[2] = {
  (MR_Integer) 1,
  (MR_Integer) 0
};

const MR_TypeCtorInfo_Struct parse_tree__var_db__parse_tree__var_db__type_ctor_info_var_db_0 = {
  (MR_Integer) 0,
  UINT8_C(18),
  INT8_C(2),
  MR_TYPECTOR_REP_DU,
  ((MR_Box) (parse_tree__var_db____Unify____var_db_0_0_10001)),
  ((MR_Box) (parse_tree__var_db____Compare____var_db_0_0_10001)),
  (MR_String) "parse_tree.var_db",
  (MR_String) "var_db",
  { parse_tree__var_db__parse_tree__var_db__du_name_ordered_var_db_0 },
  { parse_tree__var_db__parse_tree__var_db__du_ptag_ordered_var_db_0 },
  (MR_Integer) 2,
  UINT16_C(12),
  parse_tree__var_db__parse_tree__var_db__functor_number_map_var_db_0,

};

static const MR_FA_TypeInfo_Struct1 parse_tree__var_db__varset__ti_varset_1parse_tree__prog_data__type_ctor_info_prog_var_type_0 = {
  &mercury__varset__varset__type_ctor_info_varset_1,
  { (MR_TypeInfo) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0) }
};

static const MR_PseudoTypeInfo parse_tree__var_db__parse_tree__var_db__field_types_var_name_source_0_0[1] = { (MR_PseudoTypeInfo) (&parse_tree__var_db__varset__ti_varset_1parse_tree__prog_data__type_ctor_info_prog_var_type_0) };

static const MR_DuFunctorDesc parse_tree__var_db__parse_tree__var_db__du_functor_desc_var_name_source_0_0 = {
  (MR_String) "vns_varset",
  INT16_C(1),
  UINT16_C(0),
  MR_SECTAG_NONE,
  UINT8_C(0),
  (MR_Integer) -1,
  INT32_C(0),
  parse_tree__var_db__parse_tree__var_db__field_types_var_name_source_0_0,
  NULL,
  NULL,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE,
  UINT8_C(0)
};

static const MR_PseudoTypeInfo parse_tree__var_db__parse_tree__var_db__field_types_var_name_source_0_1[1] = { (MR_PseudoTypeInfo) (&parse_tree__var_table__parse_tree__var_table__type_ctor_info_var_table_0) };

static const MR_DuFunctorDesc parse_tree__var_db__parse_tree__var_db__du_functor_desc_var_name_source_0_1 = {
  (MR_String) "vns_var_table",
  INT16_C(1),
  UINT16_C(0),
  MR_SECTAG_NONE,
  UINT8_C(1),
  (MR_Integer) -1,
  INT32_C(1),
  parse_tree__var_db__parse_tree__var_db__field_types_var_name_source_0_1,
  NULL,
  NULL,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE,
  UINT8_C(0)
};

static const MR_DuFunctorDescPtr parse_tree__var_db__parse_tree__var_db__du_stag_ordered_var_name_source_0_0[1] = { &parse_tree__var_db__parse_tree__var_db__du_functor_desc_var_name_source_0_0 };

static const MR_DuFunctorDescPtr parse_tree__var_db__parse_tree__var_db__du_stag_ordered_var_name_source_0_1[1] = { &parse_tree__var_db__parse_tree__var_db__du_functor_desc_var_name_source_0_1 };

static const MR_DuPtagLayout parse_tree__var_db__parse_tree__var_db__du_ptag_ordered_var_name_source_0[2] = {
  {
    UINT32_C(1),
    MR_SECTAG_NONE,
    parse_tree__var_db__parse_tree__var_db__du_stag_ordered_var_name_source_0_0,
    INT8_C(-1),
    UINT8_C(0),
    UINT8_C(1)
  },
  {
    UINT32_C(1),
    MR_SECTAG_NONE,
    parse_tree__var_db__parse_tree__var_db__du_stag_ordered_var_name_source_0_1,
    INT8_C(-1),
    UINT8_C(1),
    UINT8_C(1)
  }
};

static const MR_DuFunctorDescPtr parse_tree__var_db__parse_tree__var_db__du_name_ordered_var_name_source_0[2] = {
  &parse_tree__var_db__parse_tree__var_db__du_functor_desc_var_name_source_0_1,
  &parse_tree__var_db__parse_tree__var_db__du_functor_desc_var_name_source_0_0
};

static const MR_Integer parse_tree__var_db__parse_tree__var_db__functor_number_map_var_name_source_0[2] = {
  (MR_Integer) 1,
  (MR_Integer) 0
};

const MR_TypeCtorInfo_Struct parse_tree__var_db__parse_tree__var_db__type_ctor_info_var_name_source_0 = {
  (MR_Integer) 0,
  UINT8_C(18),
  INT8_C(2),
  MR_TYPECTOR_REP_DU,
  ((MR_Box) (parse_tree__var_db____Unify____var_name_source_0_0_10001)),
  ((MR_Box) (parse_tree__var_db____Compare____var_name_source_0_0_10001)),
  (MR_String) "parse_tree.var_db",
  (MR_String) "var_name_source",
  { parse_tree__var_db__parse_tree__var_db__du_name_ordered_var_name_source_0 },
  { parse_tree__var_db__parse_tree__var_db__du_ptag_ordered_var_name_source_0 },
  (MR_Integer) 2,
  UINT16_C(12),
  parse_tree__var_db__parse_tree__var_db__functor_number_map_var_name_source_0,

};

static const MR_FA_TypeInfo_Struct1 parse_tree__var_db__term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0 = {
  &mercury__term__term__type_ctor_info_var_1,
  { (MR_TypeInfo) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0) }
};

static const MR_FA_TypeInfo_Struct2 parse_tree__var_db__tree234__ti_tree234_2term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0parse_tree__prog_data__type_ctor_info_mer_type_0 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_TypeInfo) (&parse_tree__var_db__term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0),
    (MR_TypeInfo) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0)
  }
};

static const MR_PseudoTypeInfo parse_tree__var_db__parse_tree__var_db__field_types_var_type_source_0_0[1] = { (MR_PseudoTypeInfo) (&parse_tree__var_db__tree234__ti_tree234_2term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0parse_tree__prog_data__type_ctor_info_mer_type_0) };

static const MR_DuFunctorDesc parse_tree__var_db__parse_tree__var_db__du_functor_desc_var_type_source_0_0 = {
  (MR_String) "vts_vartypes",
  INT16_C(1),
  UINT16_C(0),
  MR_SECTAG_NONE,
  UINT8_C(0),
  (MR_Integer) -1,
  INT32_C(0),
  parse_tree__var_db__parse_tree__var_db__field_types_var_type_source_0_0,
  NULL,
  NULL,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE,
  UINT8_C(0)
};

static const MR_PseudoTypeInfo parse_tree__var_db__parse_tree__var_db__field_types_var_type_source_0_1[1] = { (MR_PseudoTypeInfo) (&parse_tree__var_table__parse_tree__var_table__type_ctor_info_var_table_0) };

static const MR_DuFunctorDesc parse_tree__var_db__parse_tree__var_db__du_functor_desc_var_type_source_0_1 = {
  (MR_String) "vts_var_table",
  INT16_C(1),
  UINT16_C(0),
  MR_SECTAG_NONE,
  UINT8_C(1),
  (MR_Integer) -1,
  INT32_C(1),
  parse_tree__var_db__parse_tree__var_db__field_types_var_type_source_0_1,
  NULL,
  NULL,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE,
  UINT8_C(0)
};

static const MR_DuFunctorDescPtr parse_tree__var_db__parse_tree__var_db__du_stag_ordered_var_type_source_0_0[1] = { &parse_tree__var_db__parse_tree__var_db__du_functor_desc_var_type_source_0_0 };

static const MR_DuFunctorDescPtr parse_tree__var_db__parse_tree__var_db__du_stag_ordered_var_type_source_0_1[1] = { &parse_tree__var_db__parse_tree__var_db__du_functor_desc_var_type_source_0_1 };

static const MR_DuPtagLayout parse_tree__var_db__parse_tree__var_db__du_ptag_ordered_var_type_source_0[2] = {
  {
    UINT32_C(1),
    MR_SECTAG_NONE,
    parse_tree__var_db__parse_tree__var_db__du_stag_ordered_var_type_source_0_0,
    INT8_C(-1),
    UINT8_C(0),
    UINT8_C(1)
  },
  {
    UINT32_C(1),
    MR_SECTAG_NONE,
    parse_tree__var_db__parse_tree__var_db__du_stag_ordered_var_type_source_0_1,
    INT8_C(-1),
    UINT8_C(1),
    UINT8_C(1)
  }
};

static const MR_DuFunctorDescPtr parse_tree__var_db__parse_tree__var_db__du_name_ordered_var_type_source_0[2] = {
  &parse_tree__var_db__parse_tree__var_db__du_functor_desc_var_type_source_0_1,
  &parse_tree__var_db__parse_tree__var_db__du_functor_desc_var_type_source_0_0
};

static const MR_Integer parse_tree__var_db__parse_tree__var_db__functor_number_map_var_type_source_0[2] = {
  (MR_Integer) 1,
  (MR_Integer) 0
};

const MR_TypeCtorInfo_Struct parse_tree__var_db__parse_tree__var_db__type_ctor_info_var_type_source_0 = {
  (MR_Integer) 0,
  UINT8_C(18),
  INT8_C(2),
  MR_TYPECTOR_REP_DU,
  ((MR_Box) (parse_tree__var_db____Unify____var_type_source_0_0_10001)),
  ((MR_Box) (parse_tree__var_db____Compare____var_type_source_0_0_10001)),
  (MR_String) "parse_tree.var_db",
  (MR_String) "var_type_source",
  { parse_tree__var_db__parse_tree__var_db__du_name_ordered_var_type_source_0 },
  { parse_tree__var_db__parse_tree__var_db__du_ptag_ordered_var_type_source_0 },
  (MR_Integer) 2,
  UINT16_C(12),
  parse_tree__var_db__parse_tree__var_db__functor_number_map_var_type_source_0,

};

void MR_CALL 
parse_tree__var_db____Compare____var_type_source_0_0(
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
      MR_Word ArgX1_6 = ((MR_Word) ((MR_hl_field(1, HeadVar__2_2, 0))));
      MR_Word ArgY1_7 = ((MR_Word) ((MR_hl_field(1, HeadVar__3_3, 0))));

      parse_tree__var_table____Compare____var_table_0_0(HeadVar__1_1, ArgX1_6, ArgY1_7);
    }
    else
      *HeadVar__1_1 = (MR_Integer) 2;
  else
  if (((MR_tag((MR_Word) HeadVar__3_3)) == (MR_Integer) 1))
    *HeadVar__1_1 = (MR_Integer) 1;
  else
  {
    MR_Word ArgX1_4 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, 0))));
    MR_Word ArgY1_5 = ((MR_Word) ((MR_hl_field(0, HeadVar__3_3, 0))));

    mercury__builtin__compare_3_p_0((MR_Word) (&parse_tree__vartypes__parse_tree__vartypes__type_ctor_info_vartypes_0), HeadVar__1_1, ((MR_Box) (ArgX1_4)), ((MR_Box) (ArgY1_5)));
  }
}

MR_bool MR_CALL 
parse_tree__var_db____Unify____var_type_source_0_0(
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
    MR_Word ArgX1_5 = ((MR_Word) ((MR_hl_field(1, HeadVar__1_1, 0))));
    MR_Word ArgY1_6;

    succeeded = ((MR_tag((MR_Word) HeadVar__2_2)) == (MR_Integer) 1);
    if (succeeded)
    {
      ArgY1_6 = ((MR_Word) ((MR_hl_field(1, HeadVar__2_2, 0))));
      succeeded = parse_tree__var_table____Unify____var_table_0_0(ArgX1_5, ArgY1_6);
    }
  }
  else
  {
    MR_Word TypeCtorInfo_10_10;
    MR_Word ArgX1_3 = ((MR_Word) ((MR_hl_field(0, HeadVar__1_1, 0))));
    MR_Word ArgY1_4;

    succeeded = ((MR_tag((MR_Word) HeadVar__2_2)) == (MR_Integer) 0);
    if (succeeded)
    {
      ArgY1_4 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, 0))));
      TypeCtorInfo_10_10 = (MR_Word) (&parse_tree__vartypes__parse_tree__vartypes__type_ctor_info_vartypes_0);
      succeeded = mercury__builtin__unify_2_p_0(TypeCtorInfo_10_10, ((MR_Box) (ArgX1_3)), ((MR_Box) (ArgY1_4)));
    }
  }
  return succeeded;
}

void MR_CALL 
parse_tree__var_db____Compare____var_name_source_0_0(
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
      MR_Word ArgX1_6 = ((MR_Word) ((MR_hl_field(1, HeadVar__2_2, 0))));
      MR_Word ArgY1_7 = ((MR_Word) ((MR_hl_field(1, HeadVar__3_3, 0))));

      parse_tree__var_table____Compare____var_table_0_0(HeadVar__1_1, ArgX1_6, ArgY1_7);
    }
    else
      *HeadVar__1_1 = (MR_Integer) 2;
  else
  if (((MR_tag((MR_Word) HeadVar__3_3)) == (MR_Integer) 1))
    *HeadVar__1_1 = (MR_Integer) 1;
  else
  {
    MR_Word ArgX1_4 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, 0))));
    MR_Word ArgY1_5 = ((MR_Word) ((MR_hl_field(0, HeadVar__3_3, 0))));

    mercury__builtin__compare_3_p_0((MR_Word) (&parse_tree__var_db_scalar_common_1[0]), HeadVar__1_1, ((MR_Box) (ArgX1_4)), ((MR_Box) (ArgY1_5)));
  }
}

MR_bool MR_CALL 
parse_tree__var_db____Unify____var_name_source_0_0(
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
    MR_Word ArgX1_5 = ((MR_Word) ((MR_hl_field(1, HeadVar__1_1, 0))));
    MR_Word ArgY1_6;

    succeeded = ((MR_tag((MR_Word) HeadVar__2_2)) == (MR_Integer) 1);
    if (succeeded)
    {
      ArgY1_6 = ((MR_Word) ((MR_hl_field(1, HeadVar__2_2, 0))));
      succeeded = parse_tree__var_table____Unify____var_table_0_0(ArgX1_5, ArgY1_6);
    }
  }
  else
  {
    MR_Word TypeInfo_10_10;
    MR_Word ArgX1_3 = ((MR_Word) ((MR_hl_field(0, HeadVar__1_1, 0))));
    MR_Word ArgY1_4;

    succeeded = ((MR_tag((MR_Word) HeadVar__2_2)) == (MR_Integer) 0);
    if (succeeded)
    {
      ArgY1_4 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, 0))));
      TypeInfo_10_10 = (MR_Word) (&parse_tree__var_db_scalar_common_1[0]);
      succeeded = mercury__builtin__unify_2_p_0(TypeInfo_10_10, ((MR_Box) (ArgX1_3)), ((MR_Box) (ArgY1_4)));
    }
  }
  return succeeded;
}

void MR_CALL 
parse_tree__var_db____Compare____var_db_0_0(
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
      MR_Word ArgX1_6 = ((MR_Word) ((MR_hl_field(1, HeadVar__2_2, 0))));
      MR_Word ArgY1_7 = ((MR_Word) ((MR_hl_field(1, HeadVar__3_3, 0))));

      parse_tree__var_table____Compare____var_table_0_0(HeadVar__1_1, ArgX1_6, ArgY1_7);
    }
    else
      *HeadVar__1_1 = (MR_Integer) 2;
  else
  if (((MR_tag((MR_Word) HeadVar__3_3)) == (MR_Integer) 1))
    *HeadVar__1_1 = (MR_Integer) 1;
  else
  {
    MR_Word ArgX1_4 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, 0))));
    MR_Word ArgY1_5 = ((MR_Word) ((MR_hl_field(0, HeadVar__3_3, 0))));

    parse_tree__vartypes____Compare____prog_var_set_types_0_0(HeadVar__1_1, ArgX1_4, ArgY1_5);
  }
}

MR_bool MR_CALL 
parse_tree__var_db____Unify____var_db_0_0(
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
    MR_Word ArgX1_5 = ((MR_Word) ((MR_hl_field(1, HeadVar__1_1, 0))));
    MR_Word ArgY1_6;

    succeeded = ((MR_tag((MR_Word) HeadVar__2_2)) == (MR_Integer) 1);
    if (succeeded)
    {
      ArgY1_6 = ((MR_Word) ((MR_hl_field(1, HeadVar__2_2, 0))));
      succeeded = parse_tree__var_table____Unify____var_table_0_0(ArgX1_5, ArgY1_6);
    }
  }
  else
  {
    MR_Word ArgX1_3 = ((MR_Word) ((MR_hl_field(0, HeadVar__1_1, 0))));
    MR_Word ArgY1_4;

    succeeded = ((MR_tag((MR_Word) HeadVar__2_2)) == (MR_Integer) 0);
    if (succeeded)
    {
      ArgY1_4 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, 0))));
      succeeded = parse_tree__vartypes____Unify____prog_var_set_types_0_0(ArgX1_3, ArgY1_4);
    }
  }
  return succeeded;
}

void MR_CALL 
parse_tree__var_db__lookup_var_types_in_db_3_p_0(
  MR_Word VarDb_4,
  MR_Word Vars_5,
  MR_Word * Types_6)
{
  if (((MR_tag((MR_Word) VarDb_4)) == (MR_Integer) 1))
  {
    MR_Word VarTable_9 = ((MR_Word) ((MR_hl_field(1, VarDb_4, 0))));

    parse_tree__var_table__lookup_var_types_3_p_0(VarTable_9, Vars_5, Types_6);
  }
  else
  {
    MR_Word VarTypes_8;
    MR_Word Var_10 = ((MR_Word) ((MR_hl_field(0, VarDb_4, 0))));

    VarTypes_8 = ((MR_Word) ((MR_hl_field(0, Var_10, 1))));
    parse_tree__vartypes__lookup_var_types_3_p_0(VarTypes_8, Vars_5, Types_6);
  }
}

void MR_CALL 
parse_tree__var_db__lookup_var_type_in_db_3_p_0(
  MR_Word VarDb_4,
  MR_Word Var_5,
  MR_Word * Type_6)
{
  if (((MR_tag((MR_Word) VarDb_4)) == (MR_Integer) 1))
  {
    MR_Word VarTable_9 = ((MR_Word) ((MR_hl_field(1, VarDb_4, 0))));

    parse_tree__var_table__lookup_var_type_3_p_0(VarTable_9, Var_5, Type_6);
  }
  else
  {
    MR_Word VarTypes_8;
    MR_Word Var_10 = ((MR_Word) ((MR_hl_field(0, VarDb_4, 0))));

    VarTypes_8 = ((MR_Word) ((MR_hl_field(0, Var_10, 1))));
    parse_tree__vartypes__lookup_var_type_3_p_0(VarTypes_8, Var_5, Type_6);
  }
}

void MR_CALL 
parse_tree__var_db__lookup_var_name_in_source_3_p_0(
  MR_Word VarNameSrc_4,
  MR_Word Var_5,
  MR_String * Name_6)
{
  if (((MR_tag((MR_Word) VarNameSrc_4)) == (MR_Integer) 1))
  {
    MR_Word VarTable_8 = ((MR_Word) ((MR_hl_field(1, VarNameSrc_4, 0))));
    MR_Word Entry_9;

    parse_tree__var_table__lookup_var_entry_3_p_0(VarTable_8, Var_5, &Entry_9);
    *Name_6 = parse_tree__var_table__var_entry_name_2_f_0(Var_5, Entry_9);
  }
  else
  {
    MR_Word VarSet_7 = ((MR_Word) ((MR_hl_field(0, VarNameSrc_4, 0))));

    mercury__varset__lookup_name_3_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), VarSet_7, Var_5, Name_6);
  }
}

MR_bool MR_CALL 
parse_tree__var_db__search_var_name_in_source_3_p_0(
  MR_Word VarNameSrc_4,
  MR_Word Var_5,
  MR_String * Name_6)
{
  MR_bool succeeded;

  if (((MR_tag((MR_Word) VarNameSrc_4)) == (MR_Integer) 1))
  {
    MR_Word VarTable_8 = ((MR_Word) ((MR_hl_field(1, VarNameSrc_4, 0))));

    succeeded = parse_tree__var_table__search_var_name_3_p_0(VarTable_8, Var_5, Name_6);
  }
  else
  {
    MR_Word VarSet_7 = ((MR_Word) ((MR_hl_field(0, VarNameSrc_4, 0))));

    succeeded = mercury__varset__search_name_3_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), VarSet_7, Var_5, Name_6);
  }
  return succeeded;
}

void MR_CALL 
parse_tree__var_db__lookup_var_types_in_source_3_p_0(
  MR_Word VarTypeSrc_4,
  MR_Word Vars_5,
  MR_Word * Types_6)
{
  if (((MR_tag((MR_Word) VarTypeSrc_4)) == (MR_Integer) 1))
  {
    MR_Word VarTable_8 = ((MR_Word) ((MR_hl_field(1, VarTypeSrc_4, 0))));

    parse_tree__var_table__lookup_var_types_3_p_0(VarTable_8, Vars_5, Types_6);
  }
  else
  {
    MR_Word VarTypes_7 = ((MR_Word) ((MR_hl_field(0, VarTypeSrc_4, 0))));

    parse_tree__vartypes__lookup_var_types_3_p_0(VarTypes_7, Vars_5, Types_6);
  }
}

void MR_CALL 
parse_tree__var_db__lookup_var_type_in_source_3_p_0(
  MR_Word VarTypeSrc_4,
  MR_Word Var_5,
  MR_Word * Type_6)
{
  if (((MR_tag((MR_Word) VarTypeSrc_4)) == (MR_Integer) 1))
  {
    MR_Word VarTable_8 = ((MR_Word) ((MR_hl_field(1, VarTypeSrc_4, 0))));

    parse_tree__var_table__lookup_var_type_3_p_0(VarTable_8, Var_5, Type_6);
  }
  else
  {
    MR_Word VarTypes_7 = ((MR_Word) ((MR_hl_field(0, VarTypeSrc_4, 0))));

    parse_tree__vartypes__lookup_var_type_3_p_0(VarTypes_7, Var_5, Type_6);
  }
}

static MR_bool MR_CALL 
parse_tree__var_db____Unify____var_db_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  MR_bool succeeded;

  succeeded = parse_tree__var_db____Unify____var_db_0_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
  return succeeded;
}

static void MR_CALL 
parse_tree__var_db____Compare____var_db_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  MR_Word conv0_HeadVar__1_1;

  parse_tree__var_db____Compare____var_db_0_0(&conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
  *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
}

static MR_bool MR_CALL 
parse_tree__var_db____Unify____var_name_source_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  MR_bool succeeded;

  succeeded = parse_tree__var_db____Unify____var_name_source_0_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
  return succeeded;
}

static void MR_CALL 
parse_tree__var_db____Compare____var_name_source_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  MR_Word conv0_HeadVar__1_1;

  parse_tree__var_db____Compare____var_name_source_0_0(&conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
  *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
}

static MR_bool MR_CALL 
parse_tree__var_db____Unify____var_type_source_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  MR_bool succeeded;

  succeeded = parse_tree__var_db____Unify____var_type_source_0_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
  return succeeded;
}

static void MR_CALL 
parse_tree__var_db____Compare____var_type_source_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  MR_Word conv0_HeadVar__1_1;

  parse_tree__var_db____Compare____var_type_source_0_0(&conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
  *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
}

void mercury__parse_tree__var_db__init(void)
{
}

void mercury__parse_tree__var_db__init_type_tables(void)
{
  static MR_bool initialised = MR_FALSE;
  if (initialised) return;
  initialised = MR_TRUE;

  MR_register_type_ctor_info(&parse_tree__var_db__parse_tree__var_db__type_ctor_info_var_db_0);
  MR_register_type_ctor_info(&parse_tree__var_db__parse_tree__var_db__type_ctor_info_var_name_source_0);
  MR_register_type_ctor_info(&parse_tree__var_db__parse_tree__var_db__type_ctor_info_var_type_source_0);
}

void mercury__parse_tree__var_db__init_debugger(void)
{
  MR_fatal_error("debugger initialization in MLDS grade");
}

// Ensure everything is compiled with the same grade.
const char *mercury__parse_tree__var_db__grade_check(void)
{
  return &MR_GRADE_VAR;
}

// :- end_module parse_tree.var_db.
