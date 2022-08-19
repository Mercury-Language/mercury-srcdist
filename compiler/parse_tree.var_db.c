/*
** Automatically generated from `var_db.m'
** by the Mercury compiler,
** version rotd-2022-08-19
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
#include "bool.mih"
#include "builtin.mih"
#include "char.mih"
#include "construct.mih"
#include "counter.mih"
#include "deconstruct.mih"
#include "enum.mih"
#include "integer.mih"
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
#include "set.mih"
#include "set_ordlist.mih"
#include "string.mih"
#include "term.mih"
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
#include "string.format.mih"
#include "string.parse_util.mih"




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

static /* final */ const MR_Box parse_tree__var_db_scalar_common_2[1][1];




static /* final */ const MR_Box parse_tree__var_db_scalar_common_1[1][2] = {
  /* row   0 */
  {
    ((MR_Box) (&mercury__varset__varset__type_ctor_info_varset_1)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0))
  },
};

static /* final */ const MR_Box parse_tree__var_db_scalar_common_2[1][1] = {
  /* row   0 */
  {
    (MR_Box) (((((MR_Unsigned) 0U << 4)) | (((((MR_Unsigned) 0U << 3)) | (((((MR_Unsigned) 0U << 2)) | (((MR_Unsigned) 0U << 1))))))))
  },
};






static const MR_PseudoTypeInfo parse_tree__var_db__parse_tree__var_db__field_types_var_db_0_0[1] = {
  (MR_PseudoTypeInfo) (&parse_tree__vartypes__parse_tree__vartypes__type_ctor_info_prog_var_set_types_0)
};

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

static const MR_PseudoTypeInfo parse_tree__var_db__parse_tree__var_db__field_types_var_db_0_1[1] = {
  (MR_PseudoTypeInfo) (&parse_tree__var_table__parse_tree__var_table__type_ctor_info_var_table_0)
};

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

static const MR_DuFunctorDescPtr parse_tree__var_db__parse_tree__var_db__du_stag_ordered_var_db_0_0[1] = {
  &parse_tree__var_db__parse_tree__var_db__du_functor_desc_var_db_0_0
};

static const MR_DuFunctorDescPtr parse_tree__var_db__parse_tree__var_db__du_stag_ordered_var_db_0_1[1] = {
  &parse_tree__var_db__parse_tree__var_db__du_functor_desc_var_db_0_1
};

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
  {
    (MR_TypeInfo) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0)
  }
};

static const MR_PseudoTypeInfo parse_tree__var_db__parse_tree__var_db__field_types_var_name_source_0_0[1] = {
  (MR_PseudoTypeInfo) (&parse_tree__var_db__varset__ti_varset_1parse_tree__prog_data__type_ctor_info_prog_var_type_0)
};

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

static const MR_PseudoTypeInfo parse_tree__var_db__parse_tree__var_db__field_types_var_name_source_0_1[1] = {
  (MR_PseudoTypeInfo) (&parse_tree__var_table__parse_tree__var_table__type_ctor_info_var_table_0)
};

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

static const MR_DuFunctorDescPtr parse_tree__var_db__parse_tree__var_db__du_stag_ordered_var_name_source_0_0[1] = {
  &parse_tree__var_db__parse_tree__var_db__du_functor_desc_var_name_source_0_0
};

static const MR_DuFunctorDescPtr parse_tree__var_db__parse_tree__var_db__du_stag_ordered_var_name_source_0_1[1] = {
  &parse_tree__var_db__parse_tree__var_db__du_functor_desc_var_name_source_0_1
};

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
  {
    (MR_TypeInfo) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0)
  }
};

static const MR_FA_TypeInfo_Struct2 parse_tree__var_db__tree234__ti_tree234_2term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0parse_tree__prog_data__type_ctor_info_mer_type_0 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_TypeInfo) (&parse_tree__var_db__term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0),
    (MR_TypeInfo) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0)
  }
};

static const MR_PseudoTypeInfo parse_tree__var_db__parse_tree__var_db__field_types_var_type_source_0_0[1] = {
  (MR_PseudoTypeInfo) (&parse_tree__var_db__tree234__ti_tree234_2term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0parse_tree__prog_data__type_ctor_info_mer_type_0)
};

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

static const MR_PseudoTypeInfo parse_tree__var_db__parse_tree__var_db__field_types_var_type_source_0_1[1] = {
  (MR_PseudoTypeInfo) (&parse_tree__var_table__parse_tree__var_table__type_ctor_info_var_table_0)
};

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

static const MR_DuFunctorDescPtr parse_tree__var_db__parse_tree__var_db__du_stag_ordered_var_type_source_0_0[1] = {
  &parse_tree__var_db__parse_tree__var_db__du_functor_desc_var_type_source_0_0
};

static const MR_DuFunctorDescPtr parse_tree__var_db__parse_tree__var_db__du_stag_ordered_var_type_source_0_1[1] = {
  &parse_tree__var_db__parse_tree__var_db__du_functor_desc_var_type_source_0_1
};

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
  MR_Integer CastX_12 = (MR_Integer) (HeadVar__2_2);
  MR_Integer CastY_13 = (MR_Integer) (HeadVar__3_3);

  succeeded = (CastX_12 == CastY_13);
  if (succeeded)
    *HeadVar__1_1 = (MR_Integer) 0;
  else
  if (((MR_tag((MR_Word) HeadVar__2_2)) == (MR_Integer) 1))
  {
    MR_Word Var_16 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__2_2, (MR_Integer) 0))));

    if (((MR_tag((MR_Word) HeadVar__3_3)) == (MR_Integer) 1))
    {
      MR_Word ArgY1_11 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__3_3, (MR_Integer) 0))));

      parse_tree__var_table____Compare____var_table_0_0(HeadVar__1_1, Var_16, ArgY1_11);
    }
    else
      *HeadVar__1_1 = (MR_Integer) 2;
  }
  else
  {
    MR_Word Var_17 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 0))));

    if (((MR_tag((MR_Word) HeadVar__3_3)) == (MR_Integer) 1))
      *HeadVar__1_1 = (MR_Integer) 1;
    else
    {
      MR_Word ArgY1_5 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__3_3, (MR_Integer) 0))));

      mercury__builtin__compare_3_p_0((MR_Word) (&parse_tree__vartypes__parse_tree__vartypes__type_ctor_info_vartypes_0), HeadVar__1_1, ((MR_Box) (Var_17)), ((MR_Box) (ArgY1_5)));
    }
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
    MR_Word ArgX1_5 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 0))));
    MR_Word ArgY1_6;

    succeeded = ((MR_tag((MR_Word) HeadVar__2_2)) == (MR_Integer) 1);
    if (succeeded)
    {
      ArgY1_6 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__2_2, (MR_Integer) 0))));
      succeeded = parse_tree__var_table____Unify____var_table_0_0(ArgX1_5, ArgY1_6);
    }
  }
  else
  {
    MR_Word TypeCtorInfo_10_10;
    MR_Word ArgX1_3 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__1_1, (MR_Integer) 0))));
    MR_Word ArgY1_4;

    succeeded = ((MR_tag((MR_Word) HeadVar__2_2)) == (MR_Integer) 0);
    if (succeeded)
    {
      ArgY1_4 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 0))));
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
  MR_Integer CastX_12 = (MR_Integer) (HeadVar__2_2);
  MR_Integer CastY_13 = (MR_Integer) (HeadVar__3_3);

  succeeded = (CastX_12 == CastY_13);
  if (succeeded)
    *HeadVar__1_1 = (MR_Integer) 0;
  else
  if (((MR_tag((MR_Word) HeadVar__2_2)) == (MR_Integer) 1))
  {
    MR_Word Var_16 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__2_2, (MR_Integer) 0))));

    if (((MR_tag((MR_Word) HeadVar__3_3)) == (MR_Integer) 1))
    {
      MR_Word ArgY1_11 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__3_3, (MR_Integer) 0))));

      parse_tree__var_table____Compare____var_table_0_0(HeadVar__1_1, Var_16, ArgY1_11);
    }
    else
      *HeadVar__1_1 = (MR_Integer) 2;
  }
  else
  {
    MR_Word Var_17 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 0))));

    if (((MR_tag((MR_Word) HeadVar__3_3)) == (MR_Integer) 1))
      *HeadVar__1_1 = (MR_Integer) 1;
    else
    {
      MR_Word ArgY1_5 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__3_3, (MR_Integer) 0))));

      mercury__builtin__compare_3_p_0((MR_Word) (&parse_tree__var_db_scalar_common_1[0]), HeadVar__1_1, ((MR_Box) (Var_17)), ((MR_Box) (ArgY1_5)));
    }
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
    MR_Word ArgX1_5 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 0))));
    MR_Word ArgY1_6;

    succeeded = ((MR_tag((MR_Word) HeadVar__2_2)) == (MR_Integer) 1);
    if (succeeded)
    {
      ArgY1_6 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__2_2, (MR_Integer) 0))));
      succeeded = parse_tree__var_table____Unify____var_table_0_0(ArgX1_5, ArgY1_6);
    }
  }
  else
  {
    MR_Word TypeInfo_10_10;
    MR_Word ArgX1_3 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__1_1, (MR_Integer) 0))));
    MR_Word ArgY1_4;

    succeeded = ((MR_tag((MR_Word) HeadVar__2_2)) == (MR_Integer) 0);
    if (succeeded)
    {
      ArgY1_4 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 0))));
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
  MR_Integer CastX_12 = (MR_Integer) (HeadVar__2_2);
  MR_Integer CastY_13 = (MR_Integer) (HeadVar__3_3);

  succeeded = (CastX_12 == CastY_13);
  if (succeeded)
    *HeadVar__1_1 = (MR_Integer) 0;
  else
  if (((MR_tag((MR_Word) HeadVar__2_2)) == (MR_Integer) 1))
  {
    MR_Word Var_16 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__2_2, (MR_Integer) 0))));

    if (((MR_tag((MR_Word) HeadVar__3_3)) == (MR_Integer) 1))
    {
      MR_Word ArgY1_11 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__3_3, (MR_Integer) 0))));

      parse_tree__var_table____Compare____var_table_0_0(HeadVar__1_1, Var_16, ArgY1_11);
    }
    else
      *HeadVar__1_1 = (MR_Integer) 2;
  }
  else
  {
    MR_Word Var_17 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 0))));

    if (((MR_tag((MR_Word) HeadVar__3_3)) == (MR_Integer) 1))
      *HeadVar__1_1 = (MR_Integer) 1;
    else
    {
      MR_Word ArgY1_5 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__3_3, (MR_Integer) 0))));

      parse_tree__vartypes____Compare____prog_var_set_types_0_0(HeadVar__1_1, Var_17, ArgY1_5);
    }
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
    MR_Word ArgX1_5 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 0))));
    MR_Word ArgY1_6;

    succeeded = ((MR_tag((MR_Word) HeadVar__2_2)) == (MR_Integer) 1);
    if (succeeded)
    {
      ArgY1_6 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__2_2, (MR_Integer) 0))));
      succeeded = parse_tree__var_table____Unify____var_table_0_0(ArgX1_5, ArgY1_6);
    }
  }
  else
  {
    MR_Word ArgX1_3 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__1_1, (MR_Integer) 0))));
    MR_Word ArgY1_4;

    succeeded = ((MR_tag((MR_Word) HeadVar__2_2)) == (MR_Integer) 0);
    if (succeeded)
    {
      ArgY1_4 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 0))));
      succeeded = parse_tree__vartypes____Unify____prog_var_set_types_0_0(ArgX1_3, ArgY1_4);
    }
  }
  return succeeded;
}

void MR_CALL 
parse_tree__var_db__var_db_count_2_p_0(
  MR_Word VarDb_3,
  MR_Integer * Count_4)
{
  if (((MR_tag((MR_Word) VarDb_3)) == (MR_Integer) 1))
  {
    MR_Word VarTable_7 = ((MR_Word) ((MR_hl_field(MR_mktag(1), VarDb_3, (MR_Integer) 0))));

    parse_tree__var_table__var_table_count_2_p_0(VarTable_7, Count_4);
  }
  else
  {
    MR_Word VarSet_5;
    MR_Word Var_8 = ((MR_Word) ((MR_hl_field(MR_mktag(0), VarDb_3, (MR_Integer) 0))));

    VarSet_5 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Var_8, (MR_Integer) 0))));
    *Count_4 = mercury__varset__num_allocated_1_f_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), VarSet_5);
  }
}

void MR_CALL 
parse_tree__var_db__set_var_name_in_db_4_p_0(
  MR_Word Var_5,
  MR_String Name_6,
  MR_Word STATE_VARIABLE_VarDb_0_15,
  MR_Word * STATE_VARIABLE_VarDb_16)
{
  if (((MR_tag((MR_Word) STATE_VARIABLE_VarDb_0_15)) == (MR_Integer) 1))
  {
    MR_Word VarTable0_13 = ((MR_Word) ((MR_hl_field(MR_mktag(1), STATE_VARIABLE_VarDb_0_15, (MR_Integer) 0))));
    MR_Word VarTable_14;

    parse_tree__var_table__update_var_name_4_p_0(Var_5, Name_6, VarTable0_13, &VarTable_14);
    {
      MR_Word base;
      base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
      *STATE_VARIABLE_VarDb_16 = base;
      MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (VarTable_14));
    }
  }
  else
  {
    MR_Word VarSetVarTypes0_8 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_VarDb_0_15, (MR_Integer) 0))));
    MR_Word VarSet0_9 = ((MR_Word) ((MR_hl_field(MR_mktag(0), VarSetVarTypes0_8, (MR_Integer) 0))));
    MR_Word VarTypes_10 = ((MR_Word) ((MR_hl_field(MR_mktag(0), VarSetVarTypes0_8, (MR_Integer) 1))));
    MR_Word VarSet_11;
    MR_Word VarSetVarTypes_12;

    mercury__varset__name_var_4_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), Var_5, Name_6, VarSet0_9, &VarSet_11);
    {
      VarSetVarTypes_12 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), VarSetVarTypes_12, 0) = ((MR_Box) (VarSet_11));
      MR_hl_field(MR_mktag(0), VarSetVarTypes_12, 1) = ((MR_Box) (VarTypes_10));
    }
    {
      MR_Word base;
      base = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
      *STATE_VARIABLE_VarDb_16 = base;
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (VarSetVarTypes_12));
    }
  }
}

void MR_CALL 
parse_tree__var_db__lookup_var_types_in_db_3_p_0(
  MR_Word VarDb_4,
  MR_Word Vars_5,
  MR_Word * Types_6)
{
  if (((MR_tag((MR_Word) VarDb_4)) == (MR_Integer) 1))
  {
    MR_Word VarTable_9 = ((MR_Word) ((MR_hl_field(MR_mktag(1), VarDb_4, (MR_Integer) 0))));

    parse_tree__var_table__lookup_var_types_3_p_0(VarTable_9, Vars_5, Types_6);
  }
  else
  {
    MR_Word VarTypes_8;
    MR_Word Var_10 = ((MR_Word) ((MR_hl_field(MR_mktag(0), VarDb_4, (MR_Integer) 0))));

    VarTypes_8 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Var_10, (MR_Integer) 1))));
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
    MR_Word VarTable_9 = ((MR_Word) ((MR_hl_field(MR_mktag(1), VarDb_4, (MR_Integer) 0))));

    parse_tree__var_table__lookup_var_type_3_p_0(VarTable_9, Var_5, Type_6);
  }
  else
  {
    MR_Word VarTypes_8;
    MR_Word Var_10 = ((MR_Word) ((MR_hl_field(MR_mktag(0), VarDb_4, (MR_Integer) 0))));

    VarTypes_8 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Var_10, (MR_Integer) 1))));
    parse_tree__vartypes__lookup_var_type_3_p_0(VarTypes_8, Var_5, Type_6);
  }
}

void MR_CALL 
parse_tree__var_db__add_prefix_number_var_entry_to_var_db_6_p_0(
  MR_String Prefix_7,
  MR_Word Type_8,
  MR_Word IsDummy_9,
  MR_Word * Var_10,
  MR_Word STATE_VARIABLE_VarDb_0_20,
  MR_Word * STATE_VARIABLE_VarDb_21)
{
  if (((MR_tag((MR_Word) STATE_VARIABLE_VarDb_0_20)) == (MR_Integer) 1))
  {
    MR_Word VarTable0_18 = ((MR_Word) ((MR_hl_field(MR_mktag(1), STATE_VARIABLE_VarDb_0_20, (MR_Integer) 0))));
    MR_Word VarTable_19;

    parse_tree__var_table__add_prefix_number_var_entry_6_p_0(Prefix_7, Type_8, IsDummy_9, Var_10, VarTable0_18, &VarTable_19);
    {
      MR_Word base;
      base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
      *STATE_VARIABLE_VarDb_21 = base;
      MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (VarTable_19));
    }
  }
  else
  {
    MR_Word VarSetTypes0_12 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_VarDb_0_20, (MR_Integer) 0))));
    MR_Word VarSet0_13 = ((MR_Word) ((MR_hl_field(MR_mktag(0), VarSetTypes0_12, (MR_Integer) 0))));
    MR_Word VarTypes0_14 = ((MR_Word) ((MR_hl_field(MR_mktag(0), VarSetTypes0_12, (MR_Integer) 1))));
    MR_Word VarSet_15;
    MR_Word VarTypes_16;
    MR_Word VarSetTypes_17;

    parse_tree__var_db__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_97_100_100_95_112_114_101_102_105_120_95_110_117_109_98_101_114_95_118_97_114_95_101_110_116_114_121_95_116_111_95_118_97_114_95_115_101_116_95_118_97_114_116_121_112_101_115_95_95_91_51_93_95_48_8_p_0(Prefix_7, Type_8, Var_10, VarSet0_13, &VarSet_15, VarTypes0_14, &VarTypes_16);
    {
      VarSetTypes_17 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), VarSetTypes_17, 0) = ((MR_Box) (VarSet_15));
      MR_hl_field(MR_mktag(0), VarSetTypes_17, 1) = ((MR_Box) (VarTypes_16));
    }
    {
      MR_Word base;
      base = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
      *STATE_VARIABLE_VarDb_21 = base;
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (VarSetTypes_17));
    }
  }
}

void MR_CALL 
parse_tree__var_db__add_prefix_number_var_entry_to_var_set_vartypes_8_p_0(
  MR_String Prefix_9,
  MR_Word Type_10,
  MR_Word _IsDummy_11,
  MR_Word * Var_12,
  MR_Word STATE_VARIABLE_VarSet_0_17,
  MR_Word * STATE_VARIABLE_VarSet_18,
  MR_Word STATE_VARIABLE_VarTypes_0_19,
  MR_Word * STATE_VARIABLE_VarTypes_20)
{
  parse_tree__var_db__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_97_100_100_95_112_114_101_102_105_120_95_110_117_109_98_101_114_95_118_97_114_95_101_110_116_114_121_95_116_111_95_118_97_114_95_115_101_116_95_118_97_114_116_121_112_101_115_95_95_91_51_93_95_48_8_p_0(Prefix_9, Type_10, Var_12, STATE_VARIABLE_VarSet_0_17, STATE_VARIABLE_VarSet_18, STATE_VARIABLE_VarTypes_0_19, STATE_VARIABLE_VarTypes_20);
}

void MR_CALL 
parse_tree__var_db__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_97_100_100_95_112_114_101_102_105_120_95_110_117_109_98_101_114_95_118_97_114_95_101_110_116_114_121_95_116_111_95_118_97_114_95_115_101_116_95_118_97_114_116_121_112_101_115_95_95_91_51_93_95_48_8_p_0(
  MR_String Prefix_9,
  MR_Word Type_10,
  MR_Word * Var_12,
  MR_Word STATE_VARIABLE_VarSet_0_17,
  MR_Word * STATE_VARIABLE_VarSet_18,
  MR_Word STATE_VARIABLE_VarTypes_0_19,
  MR_Word * STATE_VARIABLE_VarTypes_20)
{
  MR_Integer VarNum_15;
  MR_String Name_16;
  MR_Word STATE_VARIABLE_VarSet_21_21;
  MR_String Var_29;
  MR_String Var_37;

  mercury__varset__new_var_3_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), Var_12, STATE_VARIABLE_VarSet_0_17, &STATE_VARIABLE_VarSet_21_21);
  mercury__term__var_to_int_2_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), *Var_12, &VarNum_15);
  mercury__string__format__format_signed_int_component_nowidth_noprec_3_p_0((MR_Word) (&parse_tree__var_db_scalar_common_2[0]), VarNum_15, &Var_29);
  Var_37 = mercury__string__f_43_43_2_f_0((MR_String) "_", Var_29);
  Name_16 = mercury__string__f_43_43_2_f_0(Prefix_9, Var_37);
  mercury__varset__name_var_4_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), *Var_12, Name_16, STATE_VARIABLE_VarSet_21_21, STATE_VARIABLE_VarSet_18);
  parse_tree__vartypes__add_var_type_4_p_0(*Var_12, Type_10, STATE_VARIABLE_VarTypes_0_19, STATE_VARIABLE_VarTypes_20);
}

void MR_CALL 
parse_tree__var_db__add_entry_to_var_db_4_p_0(
  MR_Word Entry_5,
  MR_Word * Var_6,
  MR_Word STATE_VARIABLE_VarDb_0_19,
  MR_Word * STATE_VARIABLE_VarDb_20)
{
  MR_bool succeeded;

  if (((MR_tag((MR_Word) STATE_VARIABLE_VarDb_0_19)) == (MR_Integer) 1))
  {
    MR_Word VarTable0_17 = ((MR_Word) ((MR_hl_field(MR_mktag(1), STATE_VARIABLE_VarDb_0_19, (MR_Integer) 0))));
    MR_Word VarTable_18;

    parse_tree__var_table__add_var_entry_4_p_0(Entry_5, Var_6, VarTable0_17, &VarTable_18);
    {
      MR_Word base;
      base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
      *STATE_VARIABLE_VarDb_20 = base;
      MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (VarTable_18));
    }
  }
  else
  {
    MR_Word VarSetTypes0_8 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_VarDb_0_19, (MR_Integer) 0))));
    MR_Word VarSet0_9 = ((MR_Word) ((MR_hl_field(MR_mktag(0), VarSetTypes0_8, (MR_Integer) 0))));
    MR_Word VarTypes0_10 = ((MR_Word) ((MR_hl_field(MR_mktag(0), VarSetTypes0_8, (MR_Integer) 1))));
    MR_String Name_11 = ((MR_String) ((MR_hl_field(MR_mktag(0), Entry_5, (MR_Integer) 0))));
    MR_Word Type_12 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Entry_5, (MR_Integer) 1))));
    MR_Word VarSet_14;
    MR_Word VarTypes_15;
    MR_Word VarSetTypes_16;

    succeeded = (strcmp(Name_11, (MR_String) "") == 0);
    if (succeeded)
      mercury__varset__new_var_3_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), Var_6, VarSet0_9, &VarSet_14);
    else
      mercury__varset__new_named_var_4_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), Name_11, Var_6, VarSet0_9, &VarSet_14);
    parse_tree__vartypes__add_var_type_4_p_0(*Var_6, Type_12, VarTypes0_10, &VarTypes_15);
    {
      VarSetTypes_16 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), VarSetTypes_16, 0) = ((MR_Box) (VarSet_14));
      MR_hl_field(MR_mktag(0), VarSetTypes_16, 1) = ((MR_Box) (VarTypes_15));
    }
    {
      MR_Word base;
      base = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
      *STATE_VARIABLE_VarDb_20 = base;
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (VarSetTypes_16));
    }
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
    MR_Word VarTable_8 = ((MR_Word) ((MR_hl_field(MR_mktag(1), VarNameSrc_4, (MR_Integer) 0))));
    MR_Word Entry_9;

    parse_tree__var_table__lookup_var_entry_3_p_0(VarTable_8, Var_5, &Entry_9);
    *Name_6 = parse_tree__var_table__var_entry_name_2_f_0(Var_5, Entry_9);
  }
  else
  {
    MR_Word VarSet_7 = ((MR_Word) ((MR_hl_field(MR_mktag(0), VarNameSrc_4, (MR_Integer) 0))));

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
    MR_Word VarTable_8 = ((MR_Word) ((MR_hl_field(MR_mktag(1), VarNameSrc_4, (MR_Integer) 0))));

    succeeded = parse_tree__var_table__search_var_name_3_p_0(VarTable_8, Var_5, Name_6);
  }
  else
  {
    MR_Word VarSet_7 = ((MR_Word) ((MR_hl_field(MR_mktag(0), VarNameSrc_4, (MR_Integer) 0))));

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
    MR_Word VarTable_8 = ((MR_Word) ((MR_hl_field(MR_mktag(1), VarTypeSrc_4, (MR_Integer) 0))));

    parse_tree__var_table__lookup_var_types_3_p_0(VarTable_8, Vars_5, Types_6);
  }
  else
  {
    MR_Word VarTypes_7 = ((MR_Word) ((MR_hl_field(MR_mktag(0), VarTypeSrc_4, (MR_Integer) 0))));

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
    MR_Word VarTable_8 = ((MR_Word) ((MR_hl_field(MR_mktag(1), VarTypeSrc_4, (MR_Integer) 0))));

    parse_tree__var_table__lookup_var_type_3_p_0(VarTable_8, Var_5, Type_6);
  }
  else
  {
    MR_Word VarTypes_7 = ((MR_Word) ((MR_hl_field(MR_mktag(0), VarTypeSrc_4, (MR_Integer) 0))));

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
