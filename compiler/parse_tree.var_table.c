/*
** Automatically generated from `var_table.m'
** by the Mercury compiler,
** version rotd-2025-07-10
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


// :- module parse_tree.var_table.
// :- implementation.

/*
INIT mercury__parse_tree__var_table__init
ENDINIT
*/

#include "parse_tree.var_table.mih"


#include "array.mih"
#include "assoc_list.mih"
#include "bool.mih"
#include "builtin.mih"
#include "char.mih"
#include "construct.mih"
#include "cord.mih"
#include "counter.mih"
#include "deconstruct.mih"
#include "enum.mih"
#include "int.mih"
#include "integer.mih"
#include "list.mih"
#include "map.mih"
#include "maybe.mih"
#include "mdbcomp.mih"
#include "one_or_more.mih"
#include "ops.mih"
#include "pair.mih"
#include "parse_tree.mih"
#include "pretty_printer.mih"
#include "private_builtin.mih"
#include "set.mih"
#include "set_ordlist.mih"
#include "string.mih"
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
#include "parse_tree.prog_type_subst.mih"
#include "parse_tree.prog_util.mih"
#include "string.format.mih"
#include "string.parse_util.mih"




static const MR_FA_TypeInfo_Struct1 parse_tree__var_table__term__ti_var_1parse_tree__prog_data__type_ctor_info_tvar_type_0;

static const MR_FA_PseudoTypeInfo_Struct2 parse_tree__var_table__tree234__pti_tree234_2__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_tvar_type_0__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_tvar_type_0;

static const MR_VA_PseudoTypeInfo_Struct2 parse_tree__var_table____vpti_func_2__plain_parse_tree__prog_data__type_ctor_info_mer_type_0__plain_parse_tree__prog_type__type_ctor_info_is_dummy_type_0;

static const MR_FA_PseudoTypeInfo_Struct2 parse_tree__var_table__tree234__pti_tree234_2__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_tvar_type_0__plain_parse_tree__prog_data__type_ctor_info_mer_type_0;

static const MR_DuFunctorDesc parse_tree__var_table__parse_tree__var_table__du_functor_desc_type_qual_0_0;

static const MR_FA_TypeInfo_Struct1 parse_tree__var_table__varset__ti_varset_1parse_tree__prog_data__type_ctor_info_tvar_type_0;

static const MR_PseudoTypeInfo parse_tree__var_table__parse_tree__var_table__field_types_type_qual_0_1[2];

static const MR_DuFunctorDesc parse_tree__var_table__parse_tree__var_table__du_functor_desc_type_qual_0_1;

static const MR_DuFunctorDescPtr parse_tree__var_table__parse_tree__var_table__du_stag_ordered_type_qual_0_0[1];

static const MR_DuFunctorDescPtr parse_tree__var_table__parse_tree__var_table__du_stag_ordered_type_qual_0_1[1];

static const MR_DuPtagLayout parse_tree__var_table__parse_tree__var_table__du_ptag_ordered_type_qual_0[2];

static const MR_DuFunctorDescPtr parse_tree__var_table__parse_tree__var_table__du_name_ordered_type_qual_0[2];

static const MR_Integer parse_tree__var_table__parse_tree__var_table__functor_number_map_type_qual_0[2];

static const MR_FA_TypeInfo_Struct1 parse_tree__var_table__term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0;

static const MR_FA_TypeInfo_Struct2 parse_tree__var_table__tree234__ti_tree234_2term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0parse_tree__var_table__type_ctor_info_var_table_entry_0;

static const MR_PseudoTypeInfo parse_tree__var_table__parse_tree__var_table__field_types_var_table_0_0[2];

static const MR_ConstString parse_tree__var_table__parse_tree__var_table__field_names_var_table_0_0[2];

static const MR_DuFunctorDesc parse_tree__var_table__parse_tree__var_table__du_functor_desc_var_table_0_0;

static const MR_DuFunctorDescPtr parse_tree__var_table__parse_tree__var_table__du_stag_ordered_var_table_0_0[1];

static const MR_DuPtagLayout parse_tree__var_table__parse_tree__var_table__du_ptag_ordered_var_table_0[1];

static const MR_DuFunctorDescPtr parse_tree__var_table__parse_tree__var_table__du_name_ordered_var_table_0[1];

static const MR_Integer parse_tree__var_table__parse_tree__var_table__functor_number_map_var_table_0[1];

static const MR_PseudoTypeInfo parse_tree__var_table__parse_tree__var_table__field_types_var_table_entry_0_0[3];

static const MR_ConstString parse_tree__var_table__parse_tree__var_table__field_names_var_table_entry_0_0[3];

static const MR_DuArgLocn parse_tree__var_table__parse_tree__var_table__field_locns_var_table_entry_0_0[3];

static const MR_DuFunctorDesc parse_tree__var_table__parse_tree__var_table__du_functor_desc_var_table_entry_0_0;

static const MR_DuFunctorDescPtr parse_tree__var_table__parse_tree__var_table__du_stag_ordered_var_table_entry_0_0[1];

static const MR_DuPtagLayout parse_tree__var_table__parse_tree__var_table__du_ptag_ordered_var_table_entry_0[1];

static const MR_DuFunctorDescPtr parse_tree__var_table__parse_tree__var_table__du_name_ordered_var_table_entry_0[1];

static const MR_Integer parse_tree__var_table__parse_tree__var_table__functor_number_map_var_table_entry_0[1];

static void MR_CALL 
parse_tree__var_table__apply_rec_subst_to_type_in_vte_4_p_0(
  MR_Word IsDummyFunc_5,
  MR_Word Subst_6,
  MR_Word Entry0_7,
  MR_Word * Entry_8);

static void MR_CALL 
parse_tree__var_table__apply_subst_to_type_in_vte_4_p_0(
  MR_Word IsDummyFunc_5,
  MR_Word Subst_6,
  MR_Word Entry0_7,
  MR_Word * Entry_8);

static void MR_CALL 
parse_tree__var_table__apply_variable_renaming_to_type_in_vte_3_p_0(
  MR_Word Renaming_4,
  MR_Word Entry0_5,
  MR_Word * Entry_6);

static void MR_CALL 
parse_tree__var_table__apply_rec_subst_to_var_table_4_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2);

static void MR_CALL 
parse_tree__var_table__apply_subst_to_var_table_4_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2);

static void MR_CALL 
parse_tree__var_table__apply_variable_renaming_to_var_table_3_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2);

static MR_bool MR_CALL 
parse_tree__var_table____Unify____type_qual_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2);

static void MR_CALL 
parse_tree__var_table____Compare____type_qual_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3);

static MR_bool MR_CALL 
parse_tree__var_table____Unify____var_table_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2);

static void MR_CALL 
parse_tree__var_table____Compare____var_table_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3);

static MR_bool MR_CALL 
parse_tree__var_table____Unify____var_table_entry_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2);

static void MR_CALL 
parse_tree__var_table____Compare____var_table_entry_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3);

static MR_bool MR_CALL 
parse_tree__var_table____Unify____var_table_map_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2);

static void MR_CALL 
parse_tree__var_table____Compare____var_table_map_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3);


static /* final */ const MR_Box parse_tree__var_table_scalar_common_1[2][2];

static /* final */ const MR_Box parse_tree__var_table_scalar_common_2[1][3];

static /* final */ const MR_Box parse_tree__var_table_scalar_common_3[1][1];

static /* final */ const MR_Box parse_tree__var_table_scalar_common_4[1][6];

static /* final */ const MR_Box parse_tree__var_table_scalar_common_5[1][7];




static /* final */ const MR_Box parse_tree__var_table_scalar_common_1[2][2] = {
  /* row   0 */
  {
    ((MR_Box) (&mercury__term__term__type_ctor_info_var_1)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0))
  },
  /* row   1 */
  {
    ((MR_Box) (&mercury__varset__varset__type_ctor_info_varset_1)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_tvar_type_0))
  },
};

static /* final */ const MR_Box parse_tree__var_table_scalar_common_2[1][3] = {
  /* row   0 */
  {
    ((MR_Box) (&mercury__tree234__tree234__type_ctor_info_tree234_2)),
    ((MR_Box) (&parse_tree__var_table_scalar_common_1[0])),
    ((MR_Box) (&parse_tree__var_table__parse_tree__var_table__type_ctor_info_var_table_entry_0))
  },
};

static /* final */ const MR_Box parse_tree__var_table_scalar_common_3[1][1] = {
  /* row   0 */
  { (MR_Box) (((((MR_Unsigned) 0U << 4)) | (((((MR_Unsigned) 0U << 3)) | (((((MR_Unsigned) 0U << 2)) | (((MR_Unsigned) 0U << 1)))))))) },
};

static /* final */ const MR_Box parse_tree__var_table_scalar_common_4[1][6] = {
  /* row   0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 3)),
    ((MR_Box) (&parse_tree__var_table__tree234__pti_tree234_2__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_tvar_type_0__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_tvar_type_0)),
    ((MR_Box) (&parse_tree__var_table__parse_tree__var_table__type_ctor_info_var_table_entry_0)),
    ((MR_Box) (&parse_tree__var_table__parse_tree__var_table__type_ctor_info_var_table_entry_0))
  },
};

static /* final */ const MR_Box parse_tree__var_table_scalar_common_5[1][7] = {
  /* row   0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 4)),
    ((MR_Box) (&parse_tree__var_table____vpti_func_2__plain_parse_tree__prog_data__type_ctor_info_mer_type_0__plain_parse_tree__prog_type__type_ctor_info_is_dummy_type_0)),
    ((MR_Box) (&parse_tree__var_table__tree234__pti_tree234_2__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_tvar_type_0__plain_parse_tree__prog_data__type_ctor_info_mer_type_0)),
    ((MR_Box) (&parse_tree__var_table__parse_tree__var_table__type_ctor_info_var_table_entry_0)),
    ((MR_Box) (&parse_tree__var_table__parse_tree__var_table__type_ctor_info_var_table_entry_0))
  },
};



#include "array.mh"


static const MR_FA_TypeInfo_Struct1 parse_tree__var_table__term__ti_var_1parse_tree__prog_data__type_ctor_info_tvar_type_0 = {
  &mercury__term__term__type_ctor_info_var_1,
  { (MR_TypeInfo) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_tvar_type_0) }
};

static const MR_FA_PseudoTypeInfo_Struct2 parse_tree__var_table__tree234__pti_tree234_2__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_tvar_type_0__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_tvar_type_0 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_PseudoTypeInfo) (&parse_tree__var_table__term__ti_var_1parse_tree__prog_data__type_ctor_info_tvar_type_0),
    (MR_PseudoTypeInfo) (&parse_tree__var_table__term__ti_var_1parse_tree__prog_data__type_ctor_info_tvar_type_0)
  }
};

static const MR_VA_PseudoTypeInfo_Struct2 parse_tree__var_table____vpti_func_2__plain_parse_tree__prog_data__type_ctor_info_mer_type_0__plain_parse_tree__prog_type__type_ctor_info_is_dummy_type_0 = {
  &mercury__builtin__builtin__type_ctor_info_func_0,
  (MR_Integer) 2,
  {
    (MR_PseudoTypeInfo) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0),
    (MR_PseudoTypeInfo) (&parse_tree__prog_type__parse_tree__prog_type__type_ctor_info_is_dummy_type_0)
  }
};

static const MR_FA_PseudoTypeInfo_Struct2 parse_tree__var_table__tree234__pti_tree234_2__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_tvar_type_0__plain_parse_tree__prog_data__type_ctor_info_mer_type_0 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_PseudoTypeInfo) (&parse_tree__var_table__term__ti_var_1parse_tree__prog_data__type_ctor_info_tvar_type_0),
    (MR_PseudoTypeInfo) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0)
  }
};

static const MR_DuFunctorDesc parse_tree__var_table__parse_tree__var_table__du_functor_desc_type_qual_0_0 = {
  (MR_String) "no_tvarset_var_table",
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

static const MR_FA_TypeInfo_Struct1 parse_tree__var_table__varset__ti_varset_1parse_tree__prog_data__type_ctor_info_tvar_type_0 = {
  &mercury__varset__varset__type_ctor_info_varset_1,
  { (MR_TypeInfo) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_tvar_type_0) }
};

static const MR_PseudoTypeInfo parse_tree__var_table__parse_tree__var_table__field_types_type_qual_0_1[2] = {
  (MR_PseudoTypeInfo) (&parse_tree__var_table__varset__ti_varset_1parse_tree__prog_data__type_ctor_info_tvar_type_0),
  (MR_PseudoTypeInfo) (&parse_tree__var_table__parse_tree__var_table__type_ctor_info_var_table_0)
};

static const MR_DuFunctorDesc parse_tree__var_table__parse_tree__var_table__du_functor_desc_type_qual_0_1 = {
  (MR_String) "tvarset_var_table",
  INT16_C(2),
  UINT16_C(0),
  MR_SECTAG_NONE,
  UINT8_C(1),
  (MR_Integer) -1,
  INT32_C(1),
  parse_tree__var_table__parse_tree__var_table__field_types_type_qual_0_1,
  NULL,
  NULL,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE,
  UINT8_C(0)
};

static const MR_DuFunctorDescPtr parse_tree__var_table__parse_tree__var_table__du_stag_ordered_type_qual_0_0[1] = { &parse_tree__var_table__parse_tree__var_table__du_functor_desc_type_qual_0_0 };

static const MR_DuFunctorDescPtr parse_tree__var_table__parse_tree__var_table__du_stag_ordered_type_qual_0_1[1] = { &parse_tree__var_table__parse_tree__var_table__du_functor_desc_type_qual_0_1 };

static const MR_DuPtagLayout parse_tree__var_table__parse_tree__var_table__du_ptag_ordered_type_qual_0[2] = {
  {
    UINT32_C(1),
    MR_SECTAG_LOCAL_REST_OF_WORD,
    parse_tree__var_table__parse_tree__var_table__du_stag_ordered_type_qual_0_0,
    INT8_C(-1),
    UINT8_C(0),
    UINT8_C(1)
  },
  {
    UINT32_C(1),
    MR_SECTAG_NONE,
    parse_tree__var_table__parse_tree__var_table__du_stag_ordered_type_qual_0_1,
    INT8_C(-1),
    UINT8_C(1),
    UINT8_C(1)
  }
};

static const MR_DuFunctorDescPtr parse_tree__var_table__parse_tree__var_table__du_name_ordered_type_qual_0[2] = {
  &parse_tree__var_table__parse_tree__var_table__du_functor_desc_type_qual_0_0,
  &parse_tree__var_table__parse_tree__var_table__du_functor_desc_type_qual_0_1
};

static const MR_Integer parse_tree__var_table__parse_tree__var_table__functor_number_map_type_qual_0[2] = {
  (MR_Integer) 0,
  (MR_Integer) 1
};

const MR_TypeCtorInfo_Struct parse_tree__var_table__parse_tree__var_table__type_ctor_info_type_qual_0 = {
  (MR_Integer) 0,
  UINT8_C(18),
  INT8_C(2),
  MR_TYPECTOR_REP_DU,
  ((MR_Box) (parse_tree__var_table____Unify____type_qual_0_0_10001)),
  ((MR_Box) (parse_tree__var_table____Compare____type_qual_0_0_10001)),
  (MR_String) "parse_tree.var_table",
  (MR_String) "type_qual",
  { parse_tree__var_table__parse_tree__var_table__du_name_ordered_type_qual_0 },
  { parse_tree__var_table__parse_tree__var_table__du_ptag_ordered_type_qual_0 },
  (MR_Integer) 2,
  UINT16_C(12),
  parse_tree__var_table__parse_tree__var_table__functor_number_map_type_qual_0,

};

static const MR_FA_TypeInfo_Struct1 parse_tree__var_table__term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0 = {
  &mercury__term__term__type_ctor_info_var_1,
  { (MR_TypeInfo) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0) }
};

static const MR_FA_TypeInfo_Struct2 parse_tree__var_table__tree234__ti_tree234_2term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0parse_tree__var_table__type_ctor_info_var_table_entry_0 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_TypeInfo) (&parse_tree__var_table__term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0),
    (MR_TypeInfo) (&parse_tree__var_table__parse_tree__var_table__type_ctor_info_var_table_entry_0)
  }
};

static const MR_PseudoTypeInfo parse_tree__var_table__parse_tree__var_table__field_types_var_table_0_0[2] = {
  (MR_PseudoTypeInfo) (&mercury__counter__counter__type_ctor_info_counter_0),
  (MR_PseudoTypeInfo) (&parse_tree__var_table__tree234__ti_tree234_2term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0parse_tree__var_table__type_ctor_info_var_table_entry_0)
};

static const MR_ConstString parse_tree__var_table__parse_tree__var_table__field_names_var_table_0_0[2] = {
  (MR_String) "vt_counter",
  (MR_String) "vt_map"
};

static const MR_DuFunctorDesc parse_tree__var_table__parse_tree__var_table__du_functor_desc_var_table_0_0 = {
  (MR_String) "var_table",
  INT16_C(2),
  UINT16_C(0),
  MR_SECTAG_NONE,
  UINT8_C(0),
  (MR_Integer) -1,
  INT32_C(0),
  parse_tree__var_table__parse_tree__var_table__field_types_var_table_0_0,
  parse_tree__var_table__parse_tree__var_table__field_names_var_table_0_0,
  NULL,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE,
  UINT8_C(0)
};

static const MR_DuFunctorDescPtr parse_tree__var_table__parse_tree__var_table__du_stag_ordered_var_table_0_0[1] = { &parse_tree__var_table__parse_tree__var_table__du_functor_desc_var_table_0_0 };

static const MR_DuPtagLayout parse_tree__var_table__parse_tree__var_table__du_ptag_ordered_var_table_0[1] = {
  {
    UINT32_C(1),
    MR_SECTAG_NONE,
    parse_tree__var_table__parse_tree__var_table__du_stag_ordered_var_table_0_0,
    INT8_C(-1),
    UINT8_C(0),
    UINT8_C(1)
  }
};

static const MR_DuFunctorDescPtr parse_tree__var_table__parse_tree__var_table__du_name_ordered_var_table_0[1] = { &parse_tree__var_table__parse_tree__var_table__du_functor_desc_var_table_0_0 };

static const MR_Integer parse_tree__var_table__parse_tree__var_table__functor_number_map_var_table_0[1] = { (MR_Integer) 0 };

const MR_TypeCtorInfo_Struct parse_tree__var_table__parse_tree__var_table__type_ctor_info_var_table_0 = {
  (MR_Integer) 0,
  UINT8_C(18),
  INT8_C(1),
  MR_TYPECTOR_REP_DU,
  ((MR_Box) (parse_tree__var_table____Unify____var_table_0_0_10001)),
  ((MR_Box) (parse_tree__var_table____Compare____var_table_0_0_10001)),
  (MR_String) "parse_tree.var_table",
  (MR_String) "var_table",
  { parse_tree__var_table__parse_tree__var_table__du_name_ordered_var_table_0 },
  { parse_tree__var_table__parse_tree__var_table__du_ptag_ordered_var_table_0 },
  (MR_Integer) 1,
  UINT16_C(12),
  parse_tree__var_table__parse_tree__var_table__functor_number_map_var_table_0,

};

static const MR_PseudoTypeInfo parse_tree__var_table__parse_tree__var_table__field_types_var_table_entry_0_0[3] = {
  (MR_PseudoTypeInfo) (&mercury__builtin__builtin__type_ctor_info_string_0),
  (MR_PseudoTypeInfo) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0),
  (MR_PseudoTypeInfo) (&parse_tree__prog_type__parse_tree__prog_type__type_ctor_info_is_dummy_type_0)
};

static const MR_ConstString parse_tree__var_table__parse_tree__var_table__field_names_var_table_entry_0_0[3] = {
  (MR_String) "vte_name",
  (MR_String) "vte_type",
  (MR_String) "vte_is_dummy"
};

static const MR_DuArgLocn parse_tree__var_table__parse_tree__var_table__field_locns_var_table_entry_0_0[3] = {
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
    (MR_Integer) 1
  }
};

static const MR_DuFunctorDesc parse_tree__var_table__parse_tree__var_table__du_functor_desc_var_table_entry_0_0 = {
  (MR_String) "vte",
  INT16_C(3),
  UINT16_C(0),
  MR_SECTAG_NONE,
  UINT8_C(0),
  (MR_Integer) -1,
  INT32_C(0),
  parse_tree__var_table__parse_tree__var_table__field_types_var_table_entry_0_0,
  parse_tree__var_table__parse_tree__var_table__field_names_var_table_entry_0_0,
  parse_tree__var_table__parse_tree__var_table__field_locns_var_table_entry_0_0,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE,
  UINT8_C(0)
};

static const MR_DuFunctorDescPtr parse_tree__var_table__parse_tree__var_table__du_stag_ordered_var_table_entry_0_0[1] = { &parse_tree__var_table__parse_tree__var_table__du_functor_desc_var_table_entry_0_0 };

static const MR_DuPtagLayout parse_tree__var_table__parse_tree__var_table__du_ptag_ordered_var_table_entry_0[1] = {
  {
    UINT32_C(1),
    MR_SECTAG_NONE,
    parse_tree__var_table__parse_tree__var_table__du_stag_ordered_var_table_entry_0_0,
    INT8_C(-1),
    UINT8_C(0),
    UINT8_C(1)
  }
};

static const MR_DuFunctorDescPtr parse_tree__var_table__parse_tree__var_table__du_name_ordered_var_table_entry_0[1] = { &parse_tree__var_table__parse_tree__var_table__du_functor_desc_var_table_entry_0_0 };

static const MR_Integer parse_tree__var_table__parse_tree__var_table__functor_number_map_var_table_entry_0[1] = { (MR_Integer) 0 };

const MR_TypeCtorInfo_Struct parse_tree__var_table__parse_tree__var_table__type_ctor_info_var_table_entry_0 = {
  (MR_Integer) 0,
  UINT8_C(18),
  INT8_C(1),
  MR_TYPECTOR_REP_DU,
  ((MR_Box) (parse_tree__var_table____Unify____var_table_entry_0_0_10001)),
  ((MR_Box) (parse_tree__var_table____Compare____var_table_entry_0_0_10001)),
  (MR_String) "parse_tree.var_table",
  (MR_String) "var_table_entry",
  { parse_tree__var_table__parse_tree__var_table__du_name_ordered_var_table_entry_0 },
  { parse_tree__var_table__parse_tree__var_table__du_ptag_ordered_var_table_entry_0 },
  (MR_Integer) 1,
  UINT16_C(12),
  parse_tree__var_table__parse_tree__var_table__functor_number_map_var_table_entry_0,

};

const MR_TypeCtorInfo_Struct parse_tree__var_table__parse_tree__var_table__type_ctor_info_var_table_map_0 = {
  (MR_Integer) 0,
  UINT8_C(18),
  INT8_C(-1),
  MR_TYPECTOR_REP_EQUIV_GROUND,
  ((MR_Box) (parse_tree__var_table____Unify____var_table_map_0_0_10001)),
  ((MR_Box) (parse_tree__var_table____Compare____var_table_map_0_0_10001)),
  (MR_String) "parse_tree.var_table",
  (MR_String) "var_table_map",
  { NULL },
  { (MR_PseudoTypeInfo) (&parse_tree__var_table__tree234__ti_tree234_2term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0parse_tree__var_table__type_ctor_info_var_table_entry_0) },
  (MR_Integer) -1,
  UINT16_C(0),
  NULL,

};

void MR_CALL 
parse_tree__var_table____Compare____var_table_map_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3)
{
  MR_Word Cast_HeadVar1_4 = HeadVar__2_2;
  MR_Word Cast_HeadVar2_5 = HeadVar__3_3;

  mercury__builtin__compare_3_p_0((MR_Word) (&parse_tree__var_table_scalar_common_2[0]), HeadVar__1_1, ((MR_Box) (Cast_HeadVar1_4)), ((MR_Box) (Cast_HeadVar2_5)));
}

MR_bool MR_CALL 
parse_tree__var_table____Unify____var_table_map_0_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2)
{
  MR_bool succeeded;
  MR_Word Cast_HeadVar1_3 = HeadVar__1_1;
  MR_Word Cast_HeadVar2_4 = HeadVar__2_2;

  succeeded = mercury__builtin__unify_2_p_0((MR_Word) (&parse_tree__var_table_scalar_common_2[0]), ((MR_Box) (Cast_HeadVar1_3)), ((MR_Box) (Cast_HeadVar2_4)));
  return succeeded;
}

void MR_CALL 
parse_tree__var_table____Compare____var_table_entry_0_0(
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
  {
    MR_String ArgX1_4 = ((MR_String) ((MR_hl_field(0, HeadVar__2_2, 0))));
    MR_String ArgY1_5 = ((MR_String) ((MR_hl_field(0, HeadVar__3_3, 0))));
    MR_Word ArgX2_7 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, 1))));
    MR_Word ArgY2_8 = ((MR_Word) ((MR_hl_field(0, HeadVar__3_3, 1))));
    MR_Word ArgX3_10 = ((MR_Unsigned) ((MR_hl_field(0, HeadVar__2_2, 2))) & (MR_Integer) 1);
    MR_Word ArgY3_11 = ((MR_Unsigned) ((MR_hl_field(0, HeadVar__3_3, 2))) & (MR_Integer) 1);
    MR_Word SubResult1_6;

    mercury__private_builtin__builtin_compare_string_3_p_0(&SubResult1_6, ArgX1_4, ArgY1_5);
    succeeded = (SubResult1_6 != (MR_Integer) 0);
    if (succeeded)
      *HeadVar__1_1 = SubResult1_6;
    else
    {
      MR_Word SubResult2_9;

      parse_tree__prog_data____Compare____mer_type_0_0(&SubResult2_9, ArgX2_7, ArgY2_8);
      succeeded = (SubResult2_9 != (MR_Integer) 0);
      if (succeeded)
        *HeadVar__1_1 = SubResult2_9;
      else
      {
        MR_Integer Var_17 = (MR_Integer) (ArgX3_10);
        MR_Integer Var_18 = (MR_Integer) (ArgY3_11);

        succeeded = (Var_17 < Var_18);
        if (succeeded)
          *HeadVar__1_1 = (MR_Integer) 1;
        else
        {
          succeeded = (Var_17 > Var_18);
          if (succeeded)
            *HeadVar__1_1 = (MR_Integer) 2;
          else
            *HeadVar__1_1 = (MR_Integer) 0;
        }
      }
    }
  }
}

MR_bool MR_CALL 
parse_tree__var_table____Unify____var_table_entry_0_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2)
{
  MR_bool succeeded;
  MR_Integer CastX_9 = (MR_Integer) (HeadVar__1_1);
  MR_Integer CastY_10 = (MR_Integer) (HeadVar__2_2);

  succeeded = (CastX_9 == CastY_10);
  if (succeeded)
    succeeded = MR_TRUE;
  else
  {
    MR_String ArgX1_3 = ((MR_String) ((MR_hl_field(0, HeadVar__1_1, 0))));
    MR_String ArgY1_4 = ((MR_String) ((MR_hl_field(0, HeadVar__2_2, 0))));
    MR_Word ArgX2_5 = ((MR_Word) ((MR_hl_field(0, HeadVar__1_1, 1))));
    MR_Word ArgY2_6 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, 1))));
    MR_Word ArgX3_7 = ((MR_Unsigned) ((MR_hl_field(0, HeadVar__1_1, 2))) & (MR_Integer) 1);
    MR_Word ArgY3_8 = ((MR_Unsigned) ((MR_hl_field(0, HeadVar__2_2, 2))) & (MR_Integer) 1);

    succeeded = (strcmp(ArgX1_3, ArgY1_4) == 0);
    if (succeeded)
    {
      succeeded = parse_tree__prog_data____Unify____mer_type_0_0(ArgX2_5, ArgY2_6);
      if (succeeded)
        succeeded = (ArgX3_7 == ArgY3_8);
    }
  }
  return succeeded;
}

void MR_CALL 
parse_tree__var_table____Compare____type_qual_0_0(
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
  if ((HeadVar__2_2 == (MR_Word) ((MR_Unsigned) 0U)))
    if ((HeadVar__3_3 == (MR_Word) ((MR_Unsigned) 0U)))
      *HeadVar__1_1 = (MR_Integer) 0;
    else
      *HeadVar__1_1 = (MR_Integer) 1;
  else
  if ((HeadVar__3_3 == (MR_Word) ((MR_Unsigned) 0U)))
    *HeadVar__1_1 = (MR_Integer) 2;
  else
  {
    MR_Word ArgX1_4 = ((MR_Word) ((MR_hl_field(1, HeadVar__2_2, 0))));
    MR_Word ArgY1_5 = ((MR_Word) ((MR_hl_field(1, HeadVar__3_3, 0))));
    MR_Word ArgX2_7 = ((MR_Word) ((MR_hl_field(1, HeadVar__2_2, 1))));
    MR_Word ArgY2_8 = ((MR_Word) ((MR_hl_field(1, HeadVar__3_3, 1))));
    MR_Word SubResult1_6;

    mercury__builtin__compare_3_p_0((MR_Word) (&parse_tree__var_table_scalar_common_1[1]), &SubResult1_6, ((MR_Box) (ArgX1_4)), ((MR_Box) (ArgY1_5)));
    succeeded = (SubResult1_6 != (MR_Integer) 0);
    if (succeeded)
      *HeadVar__1_1 = SubResult1_6;
    else
      parse_tree__var_table____Compare____var_table_0_0(HeadVar__1_1, ArgX2_7, ArgY2_8);
  }
}

void MR_CALL 
parse_tree__var_table____Compare____var_table_0_0(
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
    MR_Word ArgX1_4 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, 0))));
    MR_Word ArgY1_5 = ((MR_Word) ((MR_hl_field(0, HeadVar__3_3, 0))));
    MR_Word ArgX2_7 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, 1))));
    MR_Word ArgY2_8 = ((MR_Word) ((MR_hl_field(0, HeadVar__3_3, 1))));
    MR_Word SubResult1_6;

    mercury__counter____Compare____counter_0_0(&SubResult1_6, ArgX1_4, ArgY1_5);
    succeeded = (SubResult1_6 != (MR_Integer) 0);
    if (succeeded)
      *HeadVar__1_1 = SubResult1_6;
    else
      mercury__builtin__compare_3_p_0((MR_Word) (&parse_tree__var_table_scalar_common_2[0]), HeadVar__1_1, ((MR_Box) (ArgX2_7)), ((MR_Box) (ArgY2_8)));
  }
}

MR_bool MR_CALL 
parse_tree__var_table____Unify____type_qual_0_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2)
{
  MR_bool succeeded;
  MR_Integer CastX_9 = (MR_Integer) (HeadVar__1_1);
  MR_Integer CastY_10 = (MR_Integer) (HeadVar__2_2);

  succeeded = (CastX_9 == CastY_10);
  if (succeeded)
    succeeded = MR_TRUE;
  else
  if ((HeadVar__1_1 == (MR_Word) ((MR_Unsigned) 0U)))
  {
    MR_Integer CastX_7 = (MR_Integer) (HeadVar__1_1);
    MR_Integer CastY_8 = (MR_Integer) (HeadVar__2_2);

    succeeded = (CastY_8 == CastX_7);
  }
  else
  {
    MR_Word TypeInfo_11_11;
    MR_Word ArgX1_3 = ((MR_Word) ((MR_hl_field(1, HeadVar__1_1, 0))));
    MR_Word ArgY1_4;
    MR_Word ArgX2_5 = ((MR_Word) ((MR_hl_field(1, HeadVar__1_1, 1))));
    MR_Word ArgY2_6;

    succeeded = (HeadVar__2_2 != (MR_Word) ((MR_Unsigned) 0U));
    if (succeeded)
    {
      ArgY1_4 = ((MR_Word) ((MR_hl_field(1, HeadVar__2_2, 0))));
      ArgY2_6 = ((MR_Word) ((MR_hl_field(1, HeadVar__2_2, 1))));
      TypeInfo_11_11 = (MR_Word) (&parse_tree__var_table_scalar_common_1[1]);
      succeeded = mercury__builtin__unify_2_p_0(TypeInfo_11_11, ((MR_Box) (ArgX1_3)), ((MR_Box) (ArgY1_4)));
      if (succeeded)
        succeeded = parse_tree__var_table____Unify____var_table_0_0(ArgX2_5, ArgY2_6);
    }
  }
  return succeeded;
}

MR_bool MR_CALL 
parse_tree__var_table____Unify____var_table_0_0(
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
    MR_Word TypeInfo_10_10;
    MR_Word ArgX1_3 = ((MR_Word) ((MR_hl_field(0, HeadVar__1_1, 0))));
    MR_Word ArgY1_4 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, 0))));
    MR_Word ArgX2_5 = ((MR_Word) ((MR_hl_field(0, HeadVar__1_1, 1))));
    MR_Word ArgY2_6 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, 1))));

    succeeded = mercury__counter____Unify____counter_0_0(ArgX1_3, ArgY1_4);
    if (succeeded)
    {
      TypeInfo_10_10 = (MR_Word) (&parse_tree__var_table_scalar_common_2[0]);
      succeeded = mercury__builtin__unify_2_p_0(TypeInfo_10_10, ((MR_Box) (ArgX2_5)), ((MR_Box) (ArgY2_6)));
    }
  }
  return succeeded;
}

static void MR_CALL 
parse_tree__var_table__apply_rec_subst_to_type_in_vte_4_p_0(
  MR_Word IsDummyFunc_5,
  MR_Word Subst_6,
  MR_Word Entry0_7,
  MR_Word * Entry_8)
{
  MR_String Name_9 = ((MR_String) ((MR_hl_field(0, Entry0_7, 0))));
  MR_Word Type0_10 = ((MR_Word) ((MR_hl_field(0, Entry0_7, 1))));
  MR_Word Type_12;
  MR_Word IsDummy_13;
  MR_Box MR_CALL (* func_0)(MR_Box, MR_Box);
  MR_Box conv1_IsDummy_13;

  parse_tree__prog_type_subst__apply_rec_subst_to_type_3_p_0(Subst_6, Type0_10, &Type_12);
  func_0 = ((MR_Box MR_CALL (*)(MR_Box, MR_Box)) ((MR_hl_field(0, IsDummyFunc_5, 1))));
  conv1_IsDummy_13 = func_0(((MR_Box) (IsDummyFunc_5)), ((MR_Box) (Type_12)));
  IsDummy_13 = ((MR_Word) (conv1_IsDummy_13));
  {
    MR_Word base;
    base = (MR_Word) MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL);
    *Entry_8 = base;
    MR_hl_field(0, base, 0) = ((MR_Box) (Name_9));
    MR_hl_field(0, base, 1) = ((MR_Box) (Type_12));
    MR_hl_field(0, base, 2) = (MR_Box) ((MR_Unsigned) (IsDummy_13));
  }
}

static void MR_CALL 
parse_tree__var_table__apply_subst_to_type_in_vte_4_p_0(
  MR_Word IsDummyFunc_5,
  MR_Word Subst_6,
  MR_Word Entry0_7,
  MR_Word * Entry_8)
{
  MR_String Name_9 = ((MR_String) ((MR_hl_field(0, Entry0_7, 0))));
  MR_Word Type0_10 = ((MR_Word) ((MR_hl_field(0, Entry0_7, 1))));
  MR_Word Type_12;
  MR_Word IsDummy_13;
  MR_Box MR_CALL (* func_0)(MR_Box, MR_Box);
  MR_Box conv1_IsDummy_13;

  parse_tree__prog_type_subst__apply_subst_to_type_3_p_0(Subst_6, Type0_10, &Type_12);
  func_0 = ((MR_Box MR_CALL (*)(MR_Box, MR_Box)) ((MR_hl_field(0, IsDummyFunc_5, 1))));
  conv1_IsDummy_13 = func_0(((MR_Box) (IsDummyFunc_5)), ((MR_Box) (Type_12)));
  IsDummy_13 = ((MR_Word) (conv1_IsDummy_13));
  {
    MR_Word base;
    base = (MR_Word) MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL);
    *Entry_8 = base;
    MR_hl_field(0, base, 0) = ((MR_Box) (Name_9));
    MR_hl_field(0, base, 1) = ((MR_Box) (Type_12));
    MR_hl_field(0, base, 2) = (MR_Box) ((MR_Unsigned) (IsDummy_13));
  }
}

static void MR_CALL 
parse_tree__var_table__apply_variable_renaming_to_type_in_vte_3_p_0(
  MR_Word Renaming_4,
  MR_Word Entry0_5,
  MR_Word * Entry_6)
{
  MR_Word Type0_7 = ((MR_Word) ((MR_hl_field(0, Entry0_5, 1))));
  MR_Word Type_8;
  MR_String Var_11;
  MR_Word Var_13;

  parse_tree__prog_type_subst__apply_variable_renaming_to_type_3_p_0(Renaming_4, Type0_7, &Type_8);
  Var_11 = ((MR_String) ((MR_hl_field(0, Entry0_5, 0))));
  Var_13 = ((MR_Unsigned) ((MR_hl_field(0, Entry0_5, 2))) & (MR_Integer) 1);
  {
    MR_Word base;
    base = (MR_Word) MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL);
    *Entry_6 = base;
    MR_hl_field(0, base, 0) = ((MR_Box) (Var_11));
    MR_hl_field(0, base, 1) = ((MR_Box) (Type_8));
    MR_hl_field(0, base, 2) = (MR_Box) ((MR_Unsigned) (Var_13));
  }
}

void MR_CALL 
parse_tree__var_table__deconstruct_var_table_3_p_0(
  MR_Word HeadVar__1_1,
  MR_Word * Counter_4,
  MR_Word * Map_5)
{
  *Counter_4 = ((MR_Word) ((MR_hl_field(0, HeadVar__1_1, 0))));
  *Map_5 = ((MR_Word) ((MR_hl_field(0, HeadVar__1_1, 1))));
}

void MR_CALL 
parse_tree__var_table__construct_var_table_3_p_0(
  MR_Word Counter_4,
  MR_Word Map_5,
  MR_Word * HeadVar__3_3)
{
  {
    MR_Word base;
    base = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
    *HeadVar__3_3 = base;
    MR_hl_field(0, base, 0) = ((MR_Box) (Counter_4));
    MR_hl_field(0, base, 1) = ((MR_Box) (Map_5));
  }
}

void MR_CALL 
parse_tree__var_table__var_table_max_var_num_2_p_0(
  MR_Word VarTable_3,
  MR_Integer * MaxVarNum_4)
{
  MR_Integer NextVarNum_5;
  MR_Word Var_7 = ((MR_Word) ((MR_hl_field(0, VarTable_3, 0))));
  MR_Word Var_6;

  mercury__counter__allocate_3_p_0(&NextVarNum_5, Var_7, &Var_6);
  *MaxVarNum_4 = (MR_Integer) ((MR_Unsigned) NextVarNum_5 - (MR_Unsigned) 1);
}

void MR_CALL 
parse_tree__var_table__var_table_count_2_p_0(
  MR_Word VarTable_3,
  MR_Integer * Count_4)
{
  MR_Word Var_5 = ((MR_Word) ((MR_hl_field(0, VarTable_3, 1))));

  mercury__map__count_2_p_0((MR_Word) (&parse_tree__var_table_scalar_common_1[0]), (MR_Word) (&parse_tree__var_table__parse_tree__var_table__type_ctor_info_var_table_entry_0), Var_5, Count_4);
}

MR_bool MR_CALL 
parse_tree__var_table__var_table_is_empty_1_p_0(
  MR_Word VarTable_2)
{
  MR_bool succeeded;
  MR_Word Var_3 = ((MR_Word) ((MR_hl_field(0, VarTable_2, 1))));

  succeeded = mercury__map__is_empty_1_p_0((MR_Word) (&parse_tree__var_table_scalar_common_1[0]), (MR_Word) (&parse_tree__var_table__parse_tree__var_table__type_ctor_info_var_table_entry_0), Var_3);
  return succeeded;
}

void MR_CALL 
parse_tree__var_table__foldl_var_table_values_4_p_0(
  MR_Word TypeInfo_for_T_12,
  MR_Word PredV_5,
  MR_Word VarTable_6,
  MR_Box STATE_VARIABLE_Acc_0_8,
  MR_Box * STATE_VARIABLE_Acc_9)
{
  MR_Word Var_10 = ((MR_Word) ((MR_hl_field(0, VarTable_6, 1))));

  mercury__map__foldl_values_4_p_0((MR_Word) (&parse_tree__var_table__parse_tree__var_table__type_ctor_info_var_table_entry_0), TypeInfo_for_T_12, (MR_Word) (&parse_tree__var_table_scalar_common_1[0]), PredV_5, Var_10, STATE_VARIABLE_Acc_0_8, STATE_VARIABLE_Acc_9);
}

void MR_CALL 
parse_tree__var_table__var_table_optimize_2_p_0(
  MR_Word STATE_VARIABLE_VarTable_0_7,
  MR_Word * STATE_VARIABLE_VarTable_8)
{
  MR_Word Counter_4 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_VarTable_0_7, 0))));
  MR_Word VarTableMap0_5 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_VarTable_0_7, 1))));
  MR_Word VarTableMap_6;

  mercury__map__optimize_2_p_0((MR_Word) (&parse_tree__var_table_scalar_common_1[0]), (MR_Word) (&parse_tree__var_table__parse_tree__var_table__type_ctor_info_var_table_entry_0), VarTableMap0_5, &VarTableMap_6);
  {
    MR_Word base;
    base = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
    *STATE_VARIABLE_VarTable_8 = base;
    MR_hl_field(0, base, 0) = ((MR_Box) (Counter_4));
    MR_hl_field(0, base, 1) = ((MR_Box) (VarTableMap_6));
  }
}

void MR_CALL 
parse_tree__var_table__transform_foldl_var_table_5_p_0(
  MR_Word TypeInfo_for_T_16,
  MR_Word Transform_6,
  MR_Word STATE_VARIABLE_VarTable_0_12,
  MR_Word * STATE_VARIABLE_VarTable_13,
  MR_Box STATE_VARIABLE_Acc_0_14,
  MR_Box * STATE_VARIABLE_Acc_15)
{
  MR_Word Counter_9 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_VarTable_0_12, 0))));
  MR_Word VarTableMap0_10 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_VarTable_0_12, 1))));
  MR_Word VarTableMap_11;

  mercury__map__map_values_foldl_5_p_1((MR_Word) (&parse_tree__var_table__parse_tree__var_table__type_ctor_info_var_table_entry_0), (MR_Word) (&parse_tree__var_table__parse_tree__var_table__type_ctor_info_var_table_entry_0), TypeInfo_for_T_16, (MR_Word) (&parse_tree__var_table_scalar_common_1[0]), Transform_6, VarTableMap0_10, &VarTableMap_11, STATE_VARIABLE_Acc_0_14, STATE_VARIABLE_Acc_15);
  {
    MR_Word base;
    base = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
    *STATE_VARIABLE_VarTable_13 = base;
    MR_hl_field(0, base, 0) = ((MR_Box) (Counter_9));
    MR_hl_field(0, base, 1) = ((MR_Box) (VarTableMap_11));
  }
}

void MR_CALL 
parse_tree__var_table__transform_var_table_3_p_0(
  MR_Word Transform_4,
  MR_Word STATE_VARIABLE_VarTable_0_9,
  MR_Word * STATE_VARIABLE_VarTable_10)
{
  MR_Word Counter_6 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_VarTable_0_9, 0))));
  MR_Word VarTableMap0_7 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_VarTable_0_9, 1))));
  MR_Word VarTableMap_8;

  mercury__map__map_values_only_3_p_0((MR_Word) (&parse_tree__var_table__parse_tree__var_table__type_ctor_info_var_table_entry_0), (MR_Word) (&parse_tree__var_table__parse_tree__var_table__type_ctor_info_var_table_entry_0), (MR_Word) (&parse_tree__var_table_scalar_common_1[0]), Transform_4, VarTableMap0_7, &VarTableMap_8);
  {
    MR_Word base;
    base = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
    *STATE_VARIABLE_VarTable_10 = base;
    MR_hl_field(0, base, 0) = ((MR_Box) (Counter_6));
    MR_hl_field(0, base, 1) = ((MR_Box) (VarTableMap_8));
  }
}

static void MR_CALL 
parse_tree__var_table__apply_rec_subst_to_var_table_4_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2)
{
  MR_Box closure = closure_arg;
  MR_Word conv0_Entry_8;

  parse_tree__var_table__apply_rec_subst_to_type_in_vte_4_p_0(((MR_Word) ((MR_hl_field(0, closure, 3)))), ((MR_Word) ((MR_hl_field(0, closure, 4)))), ((MR_Word) (wrapper_arg_1)), &conv0_Entry_8);
  *wrapper_arg_2 = ((MR_Box) (conv0_Entry_8));
}

void MR_CALL 
parse_tree__var_table__apply_rec_subst_to_var_table_4_p_0(
  MR_Word IsDummyFunc_5,
  MR_Word Subst_6,
  MR_Word STATE_VARIABLE_VarTable_0_8,
  MR_Word * STATE_VARIABLE_VarTable_9)
{
  MR_Word Var_10;
  MR_Word Counter_11;
  MR_Word VarTableMap0_12;
  MR_Word VarTableMap_13;

  {
    Var_10 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, Var_10, 0) = ((MR_Box) (&parse_tree__var_table_scalar_common_5[0]));
    MR_hl_field(0, Var_10, 1) = ((MR_Box) (parse_tree__var_table__apply_rec_subst_to_var_table_4_p_0_1));
    MR_hl_field(0, Var_10, 2) = ((MR_Box) ((MR_Integer) 2));
    MR_hl_field(0, Var_10, 3) = ((MR_Box) (IsDummyFunc_5));
    MR_hl_field(0, Var_10, 4) = ((MR_Box) (Subst_6));
  }
  Counter_11 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_VarTable_0_8, 0))));
  VarTableMap0_12 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_VarTable_0_8, 1))));
  mercury__map__map_values_only_3_p_0((MR_Word) (&parse_tree__var_table__parse_tree__var_table__type_ctor_info_var_table_entry_0), (MR_Word) (&parse_tree__var_table__parse_tree__var_table__type_ctor_info_var_table_entry_0), (MR_Word) (&parse_tree__var_table_scalar_common_1[0]), Var_10, VarTableMap0_12, &VarTableMap_13);
  {
    MR_Word base;
    base = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
    *STATE_VARIABLE_VarTable_9 = base;
    MR_hl_field(0, base, 0) = ((MR_Box) (Counter_11));
    MR_hl_field(0, base, 1) = ((MR_Box) (VarTableMap_13));
  }
}

static void MR_CALL 
parse_tree__var_table__apply_subst_to_var_table_4_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2)
{
  MR_Box closure = closure_arg;
  MR_Word conv0_Entry_8;

  parse_tree__var_table__apply_subst_to_type_in_vte_4_p_0(((MR_Word) ((MR_hl_field(0, closure, 3)))), ((MR_Word) ((MR_hl_field(0, closure, 4)))), ((MR_Word) (wrapper_arg_1)), &conv0_Entry_8);
  *wrapper_arg_2 = ((MR_Box) (conv0_Entry_8));
}

void MR_CALL 
parse_tree__var_table__apply_subst_to_var_table_4_p_0(
  MR_Word IsDummyFunc_5,
  MR_Word Subst_6,
  MR_Word STATE_VARIABLE_VarTable_0_8,
  MR_Word * STATE_VARIABLE_VarTable_9)
{
  MR_Word Var_10;
  MR_Word Counter_11;
  MR_Word VarTableMap0_12;
  MR_Word VarTableMap_13;

  {
    Var_10 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, Var_10, 0) = ((MR_Box) (&parse_tree__var_table_scalar_common_5[0]));
    MR_hl_field(0, Var_10, 1) = ((MR_Box) (parse_tree__var_table__apply_subst_to_var_table_4_p_0_1));
    MR_hl_field(0, Var_10, 2) = ((MR_Box) ((MR_Integer) 2));
    MR_hl_field(0, Var_10, 3) = ((MR_Box) (IsDummyFunc_5));
    MR_hl_field(0, Var_10, 4) = ((MR_Box) (Subst_6));
  }
  Counter_11 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_VarTable_0_8, 0))));
  VarTableMap0_12 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_VarTable_0_8, 1))));
  mercury__map__map_values_only_3_p_0((MR_Word) (&parse_tree__var_table__parse_tree__var_table__type_ctor_info_var_table_entry_0), (MR_Word) (&parse_tree__var_table__parse_tree__var_table__type_ctor_info_var_table_entry_0), (MR_Word) (&parse_tree__var_table_scalar_common_1[0]), Var_10, VarTableMap0_12, &VarTableMap_13);
  {
    MR_Word base;
    base = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
    *STATE_VARIABLE_VarTable_9 = base;
    MR_hl_field(0, base, 0) = ((MR_Box) (Counter_11));
    MR_hl_field(0, base, 1) = ((MR_Box) (VarTableMap_13));
  }
}

static void MR_CALL 
parse_tree__var_table__apply_variable_renaming_to_var_table_3_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2)
{
  MR_Box closure = closure_arg;
  MR_Word conv0_Entry_6;

  parse_tree__var_table__apply_variable_renaming_to_type_in_vte_3_p_0(((MR_Word) ((MR_hl_field(0, closure, 3)))), ((MR_Word) (wrapper_arg_1)), &conv0_Entry_6);
  *wrapper_arg_2 = ((MR_Box) (conv0_Entry_6));
}

void MR_CALL 
parse_tree__var_table__apply_variable_renaming_to_var_table_3_p_0(
  MR_Word Renaming_4,
  MR_Word STATE_VARIABLE_VarTable_0_6,
  MR_Word * STATE_VARIABLE_VarTable_7)
{
  MR_Word Var_8;
  MR_Word Counter_9;
  MR_Word VarTableMap0_10;
  MR_Word VarTableMap_11;

  {
    Var_8 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, Var_8, 0) = ((MR_Box) (&parse_tree__var_table_scalar_common_4[0]));
    MR_hl_field(0, Var_8, 1) = ((MR_Box) (parse_tree__var_table__apply_variable_renaming_to_var_table_3_p_0_1));
    MR_hl_field(0, Var_8, 2) = ((MR_Box) ((MR_Integer) 1));
    MR_hl_field(0, Var_8, 3) = ((MR_Box) (Renaming_4));
  }
  Counter_9 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_VarTable_0_6, 0))));
  VarTableMap0_10 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_VarTable_0_6, 1))));
  mercury__map__map_values_only_3_p_0((MR_Word) (&parse_tree__var_table__parse_tree__var_table__type_ctor_info_var_table_entry_0), (MR_Word) (&parse_tree__var_table__parse_tree__var_table__type_ctor_info_var_table_entry_0), (MR_Word) (&parse_tree__var_table_scalar_common_1[0]), Var_8, VarTableMap0_10, &VarTableMap_11);
  {
    MR_Word base;
    base = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
    *STATE_VARIABLE_VarTable_7 = base;
    MR_hl_field(0, base, 0) = ((MR_Box) (Counter_9));
    MR_hl_field(0, base, 1) = ((MR_Box) (VarTableMap_11));
  }
}

void MR_CALL 
parse_tree__var_table__var_table_select_3_p_0(
  MR_Word SelectedVars_4,
  MR_Word STATE_VARIABLE_VarTable_0_9,
  MR_Word * STATE_VARIABLE_VarTable_10)
{
  MR_bool succeeded;
  MR_Word VarTableMap0_7 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_VarTable_0_9, 1))));
  MR_Word VarTableMap_8;
  MR_Integer NextAllocVarNum_14;
  MR_Word Counter_15;
  MR_Word MaxVar_13;
  MR_Box conv0_MaxVar_13;

  mercury__map__select_3_p_0((MR_Word) (&parse_tree__var_table_scalar_common_1[0]), (MR_Word) (&parse_tree__var_table__parse_tree__var_table__type_ctor_info_var_table_entry_0), VarTableMap0_7, SelectedVars_4, &VarTableMap_8);
  succeeded = mercury__map__max_key_2_p_0((MR_Word) (&parse_tree__var_table_scalar_common_1[0]), (MR_Word) (&parse_tree__var_table__parse_tree__var_table__type_ctor_info_var_table_entry_0), VarTableMap_8, &conv0_MaxVar_13);
  if (succeeded)
  {
    MaxVar_13 = ((MR_Word) (conv0_MaxVar_13));
    succeeded = MR_TRUE;
  }
  if (succeeded)
  {
    MR_Integer Var_16;

    Var_16 = mercury__term__var_to_int_1_f_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), MaxVar_13);
    NextAllocVarNum_14 = (MR_Integer) ((MR_Unsigned) Var_16 + (MR_Unsigned) 1);
  }
  else
    NextAllocVarNum_14 = (MR_Integer) 1;
  mercury__counter__init_2_p_0(NextAllocVarNum_14, &Counter_15);
  {
    MR_Word base;
    base = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
    *STATE_VARIABLE_VarTable_10 = base;
    MR_hl_field(0, base, 0) = ((MR_Box) (Counter_15));
    MR_hl_field(0, base, 1) = ((MR_Box) (VarTableMap_8));
  }
}

void MR_CALL 
parse_tree__var_table__var_table_entries_2_p_0(
  MR_Word VarTable_3,
  MR_Word * Entries_4)
{
  MR_Word Var_5 = ((MR_Word) ((MR_hl_field(0, VarTable_3, 1))));

  mercury__map__values_2_p_0((MR_Word) (&parse_tree__var_table_scalar_common_1[0]), (MR_Word) (&parse_tree__var_table__parse_tree__var_table__type_ctor_info_var_table_entry_0), Var_5, Entries_4);
}

void MR_CALL 
parse_tree__var_table__var_table_vars_2_p_0(
  MR_Word VarTable_3,
  MR_Word * Vars_4)
{
  MR_Word Var_5 = ((MR_Word) ((MR_hl_field(0, VarTable_3, 1))));

  mercury__map__keys_2_p_0((MR_Word) (&parse_tree__var_table_scalar_common_1[0]), (MR_Word) (&parse_tree__var_table__parse_tree__var_table__type_ctor_info_var_table_entry_0), Var_5, Vars_4);
}

void MR_CALL 
parse_tree__var_table__var_table_to_sorted_assoc_list_2_p_0(
  MR_Word VarTable_3,
  MR_Word * AssocList_4)
{
  MR_Word Var_5 = ((MR_Word) ((MR_hl_field(0, VarTable_3, 1))));

  mercury__map__to_sorted_assoc_list_2_p_0((MR_Word) (&parse_tree__var_table_scalar_common_1[0]), (MR_Word) (&parse_tree__var_table__parse_tree__var_table__type_ctor_info_var_table_entry_0), Var_5, AssocList_4);
}

void MR_CALL 
parse_tree__var_table__var_table_from_rev_sorted_assoc_list_2_p_0(
  MR_Word RevAssocList_3,
  MR_Word * VarTable_4)
{
  MR_bool succeeded;
  MR_Word VarTableMap_5;
  MR_Integer NextAllocVarNum_9;
  MR_Word Counter_10;
  MR_Word MaxVar_8;
  MR_Box conv0_MaxVar_8;

  mercury__map__from_rev_sorted_assoc_list_2_p_0((MR_Word) (&parse_tree__var_table_scalar_common_1[0]), (MR_Word) (&parse_tree__var_table__parse_tree__var_table__type_ctor_info_var_table_entry_0), RevAssocList_3, &VarTableMap_5);
  succeeded = mercury__map__max_key_2_p_0((MR_Word) (&parse_tree__var_table_scalar_common_1[0]), (MR_Word) (&parse_tree__var_table__parse_tree__var_table__type_ctor_info_var_table_entry_0), VarTableMap_5, &conv0_MaxVar_8);
  if (succeeded)
  {
    MaxVar_8 = ((MR_Word) (conv0_MaxVar_8));
    succeeded = MR_TRUE;
  }
  if (succeeded)
  {
    MR_Integer Var_11;

    Var_11 = mercury__term__var_to_int_1_f_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), MaxVar_8);
    NextAllocVarNum_9 = (MR_Integer) ((MR_Unsigned) Var_11 + (MR_Unsigned) 1);
  }
  else
    NextAllocVarNum_9 = (MR_Integer) 1;
  mercury__counter__init_2_p_0(NextAllocVarNum_9, &Counter_10);
  {
    MR_Word base;
    base = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
    *VarTable_4 = base;
    MR_hl_field(0, base, 0) = ((MR_Box) (Counter_10));
    MR_hl_field(0, base, 1) = ((MR_Box) (VarTableMap_5));
  }
}

void MR_CALL 
parse_tree__var_table__var_table_from_sorted_assoc_list_2_p_0(
  MR_Word AssocList_3,
  MR_Word * VarTable_4)
{
  MR_bool succeeded;
  MR_Word VarTableMap_5;
  MR_Integer NextAllocVarNum_9;
  MR_Word Counter_10;
  MR_Word MaxVar_8;
  MR_Box conv0_MaxVar_8;

  mercury__map__from_sorted_assoc_list_2_p_0((MR_Word) (&parse_tree__var_table_scalar_common_1[0]), (MR_Word) (&parse_tree__var_table__parse_tree__var_table__type_ctor_info_var_table_entry_0), AssocList_3, &VarTableMap_5);
  succeeded = mercury__map__max_key_2_p_0((MR_Word) (&parse_tree__var_table_scalar_common_1[0]), (MR_Word) (&parse_tree__var_table__parse_tree__var_table__type_ctor_info_var_table_entry_0), VarTableMap_5, &conv0_MaxVar_8);
  if (succeeded)
  {
    MaxVar_8 = ((MR_Word) (conv0_MaxVar_8));
    succeeded = MR_TRUE;
  }
  if (succeeded)
  {
    MR_Integer Var_11;

    Var_11 = mercury__term__var_to_int_1_f_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), MaxVar_8);
    NextAllocVarNum_9 = (MR_Integer) ((MR_Unsigned) Var_11 + (MR_Unsigned) 1);
  }
  else
    NextAllocVarNum_9 = (MR_Integer) 1;
  mercury__counter__init_2_p_0(NextAllocVarNum_9, &Counter_10);
  {
    MR_Word base;
    base = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
    *VarTable_4 = base;
    MR_hl_field(0, base, 0) = ((MR_Box) (Counter_10));
    MR_hl_field(0, base, 1) = ((MR_Box) (VarTableMap_5));
  }
}

void MR_CALL 
parse_tree__var_table__var_table_from_corresponding_lists_3_p_0(
  MR_Word Vars_4,
  MR_Word Entries_5,
  MR_Word * VarTable_6)
{
  MR_bool succeeded;
  MR_Word VarTableMap_7;
  MR_Integer NextAllocVarNum_11;
  MR_Word Counter_12;
  MR_Word MaxVar_10;
  MR_Box conv0_MaxVar_10;

  mercury__map__from_corresponding_lists_3_p_0((MR_Word) (&parse_tree__var_table_scalar_common_1[0]), (MR_Word) (&parse_tree__var_table__parse_tree__var_table__type_ctor_info_var_table_entry_0), Vars_4, Entries_5, &VarTableMap_7);
  succeeded = mercury__map__max_key_2_p_0((MR_Word) (&parse_tree__var_table_scalar_common_1[0]), (MR_Word) (&parse_tree__var_table__parse_tree__var_table__type_ctor_info_var_table_entry_0), VarTableMap_7, &conv0_MaxVar_10);
  if (succeeded)
  {
    MaxVar_10 = ((MR_Word) (conv0_MaxVar_10));
    succeeded = MR_TRUE;
  }
  if (succeeded)
  {
    MR_Integer Var_13;

    Var_13 = mercury__term__var_to_int_1_f_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), MaxVar_10);
    NextAllocVarNum_11 = (MR_Integer) ((MR_Unsigned) Var_13 + (MR_Unsigned) 1);
  }
  else
    NextAllocVarNum_11 = (MR_Integer) 1;
  mercury__counter__init_2_p_0(NextAllocVarNum_11, &Counter_12);
  {
    MR_Word base;
    base = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
    *VarTable_6 = base;
    MR_hl_field(0, base, 0) = ((MR_Box) (Counter_12));
    MR_hl_field(0, base, 1) = ((MR_Box) (VarTableMap_7));
  }
}

MR_String MR_CALL 
parse_tree__var_table__var_table_entry_name_and_number_default_3_f_0(
  MR_Word VarTable_5,
  MR_Word Var_6,
  MR_String DefaultPrefix_7)
{
  MR_String Name_8;
  MR_Word Entry_9;
  MR_Word Var_10 = ((MR_Word) ((MR_hl_field(0, VarTable_5, 1))));
  MR_Box conv0_Entry_9;

  mercury__map__lookup_3_p_0((MR_Word) (&parse_tree__var_table_scalar_common_1[0]), (MR_Word) (&parse_tree__var_table__parse_tree__var_table__type_ctor_info_var_table_entry_0), Var_10, ((MR_Box) (Var_6)), &conv0_Entry_9);
  Entry_9 = ((MR_Word) (conv0_Entry_9));
  Name_8 = parse_tree__var_table__var_entry_name_and_number_default_3_f_0(Var_6, Entry_9, DefaultPrefix_7);
  return Name_8;
}

MR_String MR_CALL 
parse_tree__var_table__var_entry_name_and_number_default_3_f_0(
  MR_Word Var_5,
  MR_Word Entry_6,
  MR_String DefaultPrefix_7)
{
  MR_bool succeeded;
  MR_String Name_8;
  MR_String Name0_9 = ((MR_String) ((MR_hl_field(0, Entry_6, 0))));
  MR_Integer VarNum_10;

  mercury__term__var_to_int_2_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), Var_5, &VarNum_10);
  succeeded = (strcmp(Name0_9, (MR_String) "") == 0);
  if (succeeded)
  {
    MR_String Var_26;
    MR_String Var_34;

    mercury__string__format__format_signed_int_component_nowidth_noprec_3_p_0((MR_Word) (&parse_tree__var_table_scalar_common_3[0]), VarNum_10, &Var_26);
    Var_34 = mercury__string__f_43_43_2_f_0((MR_String) "_", Var_26);
    Name_8 = mercury__string__f_43_43_2_f_0(DefaultPrefix_7, Var_34);
  }
  else
  {
    MR_String Var_35;
    MR_String Var_43;

    mercury__string__format__format_signed_int_component_nowidth_noprec_3_p_0((MR_Word) (&parse_tree__var_table_scalar_common_3[0]), VarNum_10, &Var_35);
    Var_43 = mercury__string__f_43_43_2_f_0((MR_String) "_", Var_35);
    Name_8 = mercury__string__f_43_43_2_f_0(Name0_9, Var_43);
  }
  return Name_8;
}

MR_String MR_CALL 
parse_tree__var_table__var_table_entry_name_and_number_2_f_0(
  MR_Word VarTable_4,
  MR_Word Var_5)
{
  MR_String Name_6;
  MR_Word Entry_7;
  MR_Word Var_8 = ((MR_Word) ((MR_hl_field(0, VarTable_4, 1))));
  MR_Box conv0_Entry_7;

  mercury__map__lookup_3_p_0((MR_Word) (&parse_tree__var_table_scalar_common_1[0]), (MR_Word) (&parse_tree__var_table__parse_tree__var_table__type_ctor_info_var_table_entry_0), Var_8, ((MR_Box) (Var_5)), &conv0_Entry_7);
  Entry_7 = ((MR_Word) (conv0_Entry_7));
  Name_6 = parse_tree__var_table__var_entry_name_and_number_2_f_0(Var_5, Entry_7);
  return Name_6;
}

MR_String MR_CALL 
parse_tree__var_table__var_entry_name_and_number_2_f_0(
  MR_Word Var_4,
  MR_Word Entry_5)
{
  MR_bool succeeded;
  MR_String Name_6;
  MR_String Name0_7 = ((MR_String) ((MR_hl_field(0, Entry_5, 0))));
  MR_Integer VarNum_8;

  mercury__term__var_to_int_2_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), Var_4, &VarNum_8);
  succeeded = (strcmp(Name0_7, (MR_String) "") == 0);
  if (succeeded)
  {
    MR_String Var_22;

    mercury__string__format__format_signed_int_component_nowidth_noprec_3_p_0((MR_Word) (&parse_tree__var_table_scalar_common_3[0]), VarNum_8, &Var_22);
    Name_6 = mercury__string__f_43_43_2_f_0((MR_String) "V_", Var_22);
  }
  else
  {
    MR_String Var_30;
    MR_String Var_38;

    mercury__string__format__format_signed_int_component_nowidth_noprec_3_p_0((MR_Word) (&parse_tree__var_table_scalar_common_3[0]), VarNum_8, &Var_30);
    Var_38 = mercury__string__f_43_43_2_f_0((MR_String) "_", Var_30);
    Name_6 = mercury__string__f_43_43_2_f_0(Name0_7, Var_38);
  }
  return Name_6;
}

MR_String MR_CALL 
parse_tree__var_table__var_table_entry_name_default_3_f_0(
  MR_Word VarTable_5,
  MR_Word Var_6,
  MR_String DefaultPrefix_7)
{
  MR_String Name_8;
  MR_Word Entry_9;
  MR_Word Var_10 = ((MR_Word) ((MR_hl_field(0, VarTable_5, 1))));
  MR_Box conv0_Entry_9;

  mercury__map__lookup_3_p_0((MR_Word) (&parse_tree__var_table_scalar_common_1[0]), (MR_Word) (&parse_tree__var_table__parse_tree__var_table__type_ctor_info_var_table_entry_0), Var_10, ((MR_Box) (Var_6)), &conv0_Entry_9);
  Entry_9 = ((MR_Word) (conv0_Entry_9));
  Name_8 = parse_tree__var_table__var_entry_name_default_3_f_0(Var_6, Entry_9, DefaultPrefix_7);
  return Name_8;
}

MR_String MR_CALL 
parse_tree__var_table__var_entry_name_default_3_f_0(
  MR_Word Var_5,
  MR_Word Entry_6,
  MR_String DefaultPrefix_7)
{
  MR_bool succeeded;
  MR_String Name_8;
  MR_String Name0_9 = ((MR_String) ((MR_hl_field(0, Entry_6, 0))));

  succeeded = (strcmp(Name0_9, (MR_String) "") == 0);
  if (succeeded)
  {
    MR_Integer VarNum_10;
    MR_String Var_20;
    MR_String Var_28;

    mercury__term__var_to_int_2_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), Var_5, &VarNum_10);
    mercury__string__format__format_signed_int_component_nowidth_noprec_3_p_0((MR_Word) (&parse_tree__var_table_scalar_common_3[0]), VarNum_10, &Var_20);
    Var_28 = mercury__string__f_43_43_2_f_0((MR_String) "_", Var_20);
    Name_8 = mercury__string__f_43_43_2_f_0(DefaultPrefix_7, Var_28);
  }
  else
    Name_8 = Name0_9;
  return Name_8;
}

MR_String MR_CALL 
parse_tree__var_table__var_table_entry_name_2_f_0(
  MR_Word VarTable_4,
  MR_Word Var_5)
{
  MR_String Name_6;
  MR_Word Entry_7;
  MR_Word Var_8 = ((MR_Word) ((MR_hl_field(0, VarTable_4, 1))));
  MR_Box conv0_Entry_7;

  mercury__map__lookup_3_p_0((MR_Word) (&parse_tree__var_table_scalar_common_1[0]), (MR_Word) (&parse_tree__var_table__parse_tree__var_table__type_ctor_info_var_table_entry_0), Var_8, ((MR_Box) (Var_5)), &conv0_Entry_7);
  Entry_7 = ((MR_Word) (conv0_Entry_7));
  Name_6 = parse_tree__var_table__var_entry_name_2_f_0(Var_5, Entry_7);
  return Name_6;
}

MR_String MR_CALL 
parse_tree__var_table__var_entry_name_2_f_0(
  MR_Word Var_4,
  MR_Word Entry_5)
{
  MR_bool succeeded;
  MR_String Name_6;
  MR_String Name0_7 = ((MR_String) ((MR_hl_field(0, Entry_5, 0))));

  succeeded = (strcmp(Name0_7, (MR_String) "") == 0);
  if (succeeded)
  {
    MR_Integer VarNum_8;
    MR_String Var_16;

    mercury__term__var_to_int_2_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), Var_4, &VarNum_8);
    mercury__string__format__format_signed_int_component_nowidth_noprec_3_p_0((MR_Word) (&parse_tree__var_table_scalar_common_3[0]), VarNum_8, &Var_16);
    Name_6 = mercury__string__f_43_43_2_f_0((MR_String) "V_", Var_16);
  }
  else
    Name_6 = Name0_7;
  return Name_6;
}

void MR_CALL 
parse_tree__var_table__lookup_var_types_3_p_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word * HeadVar__3_3)
{
  if ((HeadVar__2_2 == (MR_Word) ((MR_Unsigned) 0U)))
    *HeadVar__3_3 = (MR_Word) ((MR_Unsigned) 0U);
  else
  {
    MR_Word Var_6 = ((MR_Word) ((MR_hl_field(1, HeadVar__2_2, 0))));
    MR_Word Vars_7 = ((MR_Word) ((MR_hl_field(1, HeadVar__2_2, 1))));
    MR_Word Type_8;
    MR_Word Types_9;
    MR_Word Entry_10;
    MR_Word Var_13 = ((MR_Word) ((MR_hl_field(0, HeadVar__1_1, 1))));
    MR_Box conv0_Entry_10;

    mercury__map__lookup_3_p_0((MR_Word) (&parse_tree__var_table_scalar_common_1[0]), (MR_Word) (&parse_tree__var_table__parse_tree__var_table__type_ctor_info_var_table_entry_0), Var_13, ((MR_Box) (Var_6)), &conv0_Entry_10);
    Entry_10 = ((MR_Word) (conv0_Entry_10));
    Type_8 = ((MR_Word) ((MR_hl_field(0, Entry_10, 1))));
    parse_tree__var_table__lookup_var_types_3_p_0(HeadVar__1_1, Vars_7, &Types_9);
    {
      MR_Word base;
      base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      *HeadVar__3_3 = base;
      MR_hl_field(1, base, 0) = ((MR_Box) (Type_8));
      MR_hl_field(1, base, 1) = ((MR_Box) (Types_9));
    }
  }
}

void MR_CALL 
parse_tree__var_table__lookup_var_type_3_p_0(
  MR_Word VarTable_4,
  MR_Word Var_5,
  MR_Word * Type_6)
{
  MR_Word Entry_7;
  MR_Word Var_10 = ((MR_Word) ((MR_hl_field(0, VarTable_4, 1))));
  MR_Box conv0_Entry_7;

  mercury__map__lookup_3_p_0((MR_Word) (&parse_tree__var_table_scalar_common_1[0]), (MR_Word) (&parse_tree__var_table__parse_tree__var_table__type_ctor_info_var_table_entry_0), Var_10, ((MR_Box) (Var_5)), &conv0_Entry_7);
  Entry_7 = ((MR_Word) (conv0_Entry_7));
  *Type_6 = ((MR_Word) ((MR_hl_field(0, Entry_7, 1))));
}

MR_Word MR_CALL 
parse_tree__var_table__lookup_var_type_func_2_f_0(
  MR_Word VarTable_4,
  MR_Word Var_5)
{
  MR_Word Type_6;
  MR_Word Entry_7;
  MR_Word Var_10 = ((MR_Word) ((MR_hl_field(0, VarTable_4, 1))));
  MR_Box conv0_Entry_7;

  mercury__map__lookup_3_p_0((MR_Word) (&parse_tree__var_table_scalar_common_1[0]), (MR_Word) (&parse_tree__var_table__parse_tree__var_table__type_ctor_info_var_table_entry_0), Var_10, ((MR_Box) (Var_5)), &conv0_Entry_7);
  Entry_7 = ((MR_Word) (conv0_Entry_7));
  Type_6 = ((MR_Word) ((MR_hl_field(0, Entry_7, 1))));
  return Type_6;
}

void MR_CALL 
parse_tree__var_table__lookup_var_entries_3_p_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word * HeadVar__3_3)
{
  if ((HeadVar__2_2 == (MR_Word) ((MR_Unsigned) 0U)))
    *HeadVar__3_3 = (MR_Word) ((MR_Unsigned) 0U);
  else
  {
    MR_Word Var_6 = ((MR_Word) ((MR_hl_field(1, HeadVar__2_2, 0))));
    MR_Word Vars_7 = ((MR_Word) ((MR_hl_field(1, HeadVar__2_2, 1))));
    MR_Word Entry_8;
    MR_Word Entries_9;
    MR_Word Var_10 = ((MR_Word) ((MR_hl_field(0, HeadVar__1_1, 1))));
    MR_Box conv0_Entry_8;

    mercury__map__lookup_3_p_0((MR_Word) (&parse_tree__var_table_scalar_common_1[0]), (MR_Word) (&parse_tree__var_table__parse_tree__var_table__type_ctor_info_var_table_entry_0), Var_10, ((MR_Box) (Var_6)), &conv0_Entry_8);
    Entry_8 = ((MR_Word) (conv0_Entry_8));
    parse_tree__var_table__lookup_var_entries_3_p_0(HeadVar__1_1, Vars_7, &Entries_9);
    {
      MR_Word base;
      base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      *HeadVar__3_3 = base;
      MR_hl_field(1, base, 0) = ((MR_Box) (Entry_8));
      MR_hl_field(1, base, 1) = ((MR_Box) (Entries_9));
    }
  }
}

void MR_CALL 
parse_tree__var_table__lookup_var_entry_3_p_0(
  MR_Word VarTable_4,
  MR_Word Var_5,
  MR_Word * Entry_6)
{
  MR_Word Var_7 = ((MR_Word) ((MR_hl_field(0, VarTable_4, 1))));
  MR_Box conv0_Entry_6;

  mercury__map__lookup_3_p_0((MR_Word) (&parse_tree__var_table_scalar_common_1[0]), (MR_Word) (&parse_tree__var_table__parse_tree__var_table__type_ctor_info_var_table_entry_0), Var_7, ((MR_Box) (Var_5)), &conv0_Entry_6);
  *Entry_6 = ((MR_Word) (conv0_Entry_6));
}

MR_Word MR_CALL 
parse_tree__var_table__lookup_var_entry_func_2_f_0(
  MR_Word VarTable_4,
  MR_Word Var_5)
{
  MR_Word Entry_6;
  MR_Word Var_7 = ((MR_Word) ((MR_hl_field(0, VarTable_4, 1))));
  MR_Box conv0_Entry_6;

  mercury__map__lookup_3_p_0((MR_Word) (&parse_tree__var_table_scalar_common_1[0]), (MR_Word) (&parse_tree__var_table__parse_tree__var_table__type_ctor_info_var_table_entry_0), Var_7, ((MR_Box) (Var_5)), &conv0_Entry_6);
  Entry_6 = ((MR_Word) (conv0_Entry_6));
  return Entry_6;
}

MR_bool MR_CALL 
parse_tree__var_table__search_var_name_3_p_0(
  MR_Word VarTable_4,
  MR_Word Var_5,
  MR_String * Name_6)
{
  MR_bool succeeded;
  MR_Word Entry_7;
  MR_Word Var_8 = ((MR_Word) ((MR_hl_field(0, VarTable_4, 1))));
  MR_Box conv0_Entry_7;

  succeeded = mercury__map__search_3_p_0((MR_Word) (&parse_tree__var_table_scalar_common_1[0]), (MR_Word) (&parse_tree__var_table__parse_tree__var_table__type_ctor_info_var_table_entry_0), Var_8, ((MR_Box) (Var_5)), &conv0_Entry_7);
  if (succeeded)
  {
    Entry_7 = ((MR_Word) (conv0_Entry_7));
    succeeded = MR_TRUE;
  }
  if (succeeded)
  {
    *Name_6 = ((MR_String) ((MR_hl_field(0, Entry_7, 0))));
    succeeded = (strcmp(*Name_6, (MR_String) "") == 0);
    succeeded = !(succeeded);
  }
  return succeeded;
}

MR_bool MR_CALL 
parse_tree__var_table__search_var_entry_3_p_0(
  MR_Word VarTable_4,
  MR_Word Var_5,
  MR_Word * Entry_6)
{
  MR_bool succeeded;
  MR_Word Var_7 = ((MR_Word) ((MR_hl_field(0, VarTable_4, 1))));
  MR_Box conv0_Entry_6;

  succeeded = mercury__map__search_3_p_0((MR_Word) (&parse_tree__var_table_scalar_common_1[0]), (MR_Word) (&parse_tree__var_table__parse_tree__var_table__type_ctor_info_var_table_entry_0), Var_7, ((MR_Box) (Var_5)), &conv0_Entry_6);
  if (succeeded)
  {
    *Entry_6 = ((MR_Word) (conv0_Entry_6));
    succeeded = MR_TRUE;
  }
  return succeeded;
}

MR_bool MR_CALL 
parse_tree__var_table__is_in_var_table_2_p_0(
  MR_Word VarTable_3,
  MR_Word Var_4)
{
  MR_bool succeeded;
  MR_Word Var_5 = ((MR_Word) ((MR_hl_field(0, VarTable_3, 1))));

  succeeded = mercury__map__contains_2_p_0((MR_Word) (&parse_tree__var_table_scalar_common_1[0]), (MR_Word) (&parse_tree__var_table__parse_tree__var_table__type_ctor_info_var_table_entry_0), Var_5, ((MR_Box) (Var_4)));
  return succeeded;
}

void MR_CALL 
parse_tree__var_table__update_var_name_4_p_0(
  MR_Word Var_5,
  MR_String Name_6,
  MR_Word STATE_VARIABLE_VarTable_0_13,
  MR_Word * STATE_VARIABLE_VarTable_14)
{
  MR_Word Counter_8 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_VarTable_0_13, 0))));
  MR_Word VarTableMap0_9 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_VarTable_0_13, 1))));
  MR_Word Entry0_10;
  MR_Word Entry_11;
  MR_Word VarTableMap_12;
  MR_Box conv0_Entry0_10;
  MR_Word Var_16;
  MR_Word Var_17;

  mercury__map__lookup_3_p_0((MR_Word) (&parse_tree__var_table_scalar_common_1[0]), (MR_Word) (&parse_tree__var_table__parse_tree__var_table__type_ctor_info_var_table_entry_0), VarTableMap0_9, ((MR_Box) (Var_5)), &conv0_Entry0_10);
  Entry0_10 = ((MR_Word) (conv0_Entry0_10));
  Var_16 = ((MR_Word) ((MR_hl_field(0, Entry0_10, 1))));
  Var_17 = ((MR_Unsigned) ((MR_hl_field(0, Entry0_10, 2))) & (MR_Integer) 1);
  {
    Entry_11 = (MR_Word) MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, Entry_11, 0) = ((MR_Box) (Name_6));
    MR_hl_field(0, Entry_11, 1) = ((MR_Box) (Var_16));
    MR_hl_field(0, Entry_11, 2) = (MR_Box) ((MR_Unsigned) (Var_17));
  }
  mercury__map__det_update_4_p_0((MR_Word) (&parse_tree__var_table_scalar_common_1[0]), (MR_Word) (&parse_tree__var_table__parse_tree__var_table__type_ctor_info_var_table_entry_0), ((MR_Box) (Var_5)), ((MR_Box) (Entry_11)), VarTableMap0_9, &VarTableMap_12);
  {
    MR_Word base;
    base = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
    *STATE_VARIABLE_VarTable_14 = base;
    MR_hl_field(0, base, 0) = ((MR_Box) (Counter_8));
    MR_hl_field(0, base, 1) = ((MR_Box) (VarTableMap_12));
  }
}

void MR_CALL 
parse_tree__var_table__update_var_entry_4_p_0(
  MR_Word Var_5,
  MR_Word Entry_6,
  MR_Word STATE_VARIABLE_VarTable_0_11,
  MR_Word * STATE_VARIABLE_VarTable_12)
{
  MR_Word Counter_8 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_VarTable_0_11, 0))));
  MR_Word VarTableMap0_9 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_VarTable_0_11, 1))));
  MR_Word VarTableMap_10;

  mercury__map__det_update_4_p_0((MR_Word) (&parse_tree__var_table_scalar_common_1[0]), (MR_Word) (&parse_tree__var_table__parse_tree__var_table__type_ctor_info_var_table_entry_0), ((MR_Box) (Var_5)), ((MR_Box) (Entry_6)), VarTableMap0_9, &VarTableMap_10);
  {
    MR_Word base;
    base = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
    *STATE_VARIABLE_VarTable_12 = base;
    MR_hl_field(0, base, 0) = ((MR_Box) (Counter_8));
    MR_hl_field(0, base, 1) = ((MR_Box) (VarTableMap_10));
  }
}

void MR_CALL 
parse_tree__var_table__delete_sorted_var_entries_3_p_0(
  MR_Word SortedVars_4,
  MR_Word STATE_VARIABLE_VarTable_0_9,
  MR_Word * STATE_VARIABLE_VarTable_10)
{
  MR_bool succeeded;
  MR_Word VarTableMap0_7 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_VarTable_0_9, 1))));
  MR_Word VarTableMap_8;
  MR_Integer NextAllocVarNum_14;
  MR_Word Counter_15;
  MR_Word MaxVar_13;
  MR_Box conv0_MaxVar_13;

  mercury__map__delete_sorted_list_3_p_0((MR_Word) (&parse_tree__var_table_scalar_common_1[0]), (MR_Word) (&parse_tree__var_table__parse_tree__var_table__type_ctor_info_var_table_entry_0), SortedVars_4, VarTableMap0_7, &VarTableMap_8);
  succeeded = mercury__map__max_key_2_p_0((MR_Word) (&parse_tree__var_table_scalar_common_1[0]), (MR_Word) (&parse_tree__var_table__parse_tree__var_table__type_ctor_info_var_table_entry_0), VarTableMap_8, &conv0_MaxVar_13);
  if (succeeded)
  {
    MaxVar_13 = ((MR_Word) (conv0_MaxVar_13));
    succeeded = MR_TRUE;
  }
  if (succeeded)
  {
    MR_Integer Var_16;

    Var_16 = mercury__term__var_to_int_1_f_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), MaxVar_13);
    NextAllocVarNum_14 = (MR_Integer) ((MR_Unsigned) Var_16 + (MR_Unsigned) 1);
  }
  else
    NextAllocVarNum_14 = (MR_Integer) 1;
  mercury__counter__init_2_p_0(NextAllocVarNum_14, &Counter_15);
  {
    MR_Word base;
    base = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
    *STATE_VARIABLE_VarTable_10 = base;
    MR_hl_field(0, base, 0) = ((MR_Box) (Counter_15));
    MR_hl_field(0, base, 1) = ((MR_Box) (VarTableMap_8));
  }
}

void MR_CALL 
parse_tree__var_table__delete_var_entries_3_p_0(
  MR_Word Vars_4,
  MR_Word STATE_VARIABLE_VarTable_0_9,
  MR_Word * STATE_VARIABLE_VarTable_10)
{
  MR_bool succeeded;
  MR_Word VarTableMap0_7 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_VarTable_0_9, 1))));
  MR_Word VarTableMap_8;
  MR_Integer NextAllocVarNum_14;
  MR_Word Counter_15;
  MR_Word MaxVar_13;
  MR_Box conv0_MaxVar_13;

  mercury__map__delete_list_3_p_0((MR_Word) (&parse_tree__var_table_scalar_common_1[0]), (MR_Word) (&parse_tree__var_table__parse_tree__var_table__type_ctor_info_var_table_entry_0), Vars_4, VarTableMap0_7, &VarTableMap_8);
  succeeded = mercury__map__max_key_2_p_0((MR_Word) (&parse_tree__var_table_scalar_common_1[0]), (MR_Word) (&parse_tree__var_table__parse_tree__var_table__type_ctor_info_var_table_entry_0), VarTableMap_8, &conv0_MaxVar_13);
  if (succeeded)
  {
    MaxVar_13 = ((MR_Word) (conv0_MaxVar_13));
    succeeded = MR_TRUE;
  }
  if (succeeded)
  {
    MR_Integer Var_16;

    Var_16 = mercury__term__var_to_int_1_f_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), MaxVar_13);
    NextAllocVarNum_14 = (MR_Integer) ((MR_Unsigned) Var_16 + (MR_Unsigned) 1);
  }
  else
    NextAllocVarNum_14 = (MR_Integer) 1;
  mercury__counter__init_2_p_0(NextAllocVarNum_14, &Counter_15);
  {
    MR_Word base;
    base = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
    *STATE_VARIABLE_VarTable_10 = base;
    MR_hl_field(0, base, 0) = ((MR_Box) (Counter_15));
    MR_hl_field(0, base, 1) = ((MR_Box) (VarTableMap_8));
  }
}

void MR_CALL 
parse_tree__var_table__delete_var_entry_3_p_0(
  MR_Word Var_4,
  MR_Word STATE_VARIABLE_VarTable_0_9,
  MR_Word * STATE_VARIABLE_VarTable_10)
{
  MR_bool succeeded;
  MR_Word VarTableMap0_7 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_VarTable_0_9, 1))));
  MR_Word VarTableMap_8;
  MR_Integer NextAllocVarNum_14;
  MR_Word Counter_15;
  MR_Word MaxVar_13;
  MR_Box conv0_MaxVar_13;

  mercury__map__delete_3_p_0((MR_Word) (&parse_tree__var_table_scalar_common_1[0]), (MR_Word) (&parse_tree__var_table__parse_tree__var_table__type_ctor_info_var_table_entry_0), ((MR_Box) (Var_4)), VarTableMap0_7, &VarTableMap_8);
  succeeded = mercury__map__max_key_2_p_0((MR_Word) (&parse_tree__var_table_scalar_common_1[0]), (MR_Word) (&parse_tree__var_table__parse_tree__var_table__type_ctor_info_var_table_entry_0), VarTableMap_8, &conv0_MaxVar_13);
  if (succeeded)
  {
    MaxVar_13 = ((MR_Word) (conv0_MaxVar_13));
    succeeded = MR_TRUE;
  }
  if (succeeded)
  {
    MR_Integer Var_16;

    Var_16 = mercury__term__var_to_int_1_f_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), MaxVar_13);
    NextAllocVarNum_14 = (MR_Integer) ((MR_Unsigned) Var_16 + (MR_Unsigned) 1);
  }
  else
    NextAllocVarNum_14 = (MR_Integer) 1;
  mercury__counter__init_2_p_0(NextAllocVarNum_14, &Counter_15);
  {
    MR_Word base;
    base = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
    *STATE_VARIABLE_VarTable_10 = base;
    MR_hl_field(0, base, 0) = ((MR_Box) (Counter_15));
    MR_hl_field(0, base, 1) = ((MR_Box) (VarTableMap_8));
  }
}

void MR_CALL 
parse_tree__var_table__search_insert_var_entry_5_p_0(
  MR_Word Var_6,
  MR_Word NewEntry_7,
  MR_Word * MaybeOldEntry_8,
  MR_Word STATE_VARIABLE_VarTable_0_13,
  MR_Word * STATE_VARIABLE_VarTable_14)
{
  MR_Word Counter_10 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_VarTable_0_13, 0))));
  MR_Word VarTableMap0_11 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_VarTable_0_13, 1))));
  MR_Word VarTableMap_12;

  mercury__map__search_insert_5_p_0((MR_Word) (&parse_tree__var_table_scalar_common_1[0]), (MR_Word) (&parse_tree__var_table__parse_tree__var_table__type_ctor_info_var_table_entry_0), ((MR_Box) (Var_6)), ((MR_Box) (NewEntry_7)), MaybeOldEntry_8, VarTableMap0_11, &VarTableMap_12);
  {
    MR_Word base;
    base = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
    *STATE_VARIABLE_VarTable_14 = base;
    MR_hl_field(0, base, 0) = ((MR_Box) (Counter_10));
    MR_hl_field(0, base, 1) = ((MR_Box) (VarTableMap_12));
  }
}

void MR_CALL 
parse_tree__var_table__add_prefix_number_var_entry_6_p_0(
  MR_String Prefix_7,
  MR_Word Type_8,
  MR_Word IsDummy_9,
  MR_Word * Var_10,
  MR_Word STATE_VARIABLE_VarTable_0_19,
  MR_Word * STATE_VARIABLE_VarTable_20)
{
  MR_Word Counter0_12 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_VarTable_0_19, 0))));
  MR_Word VarTableMap0_13 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_VarTable_0_19, 1))));
  MR_Integer VarNum_14;
  MR_Word Counter_15;
  MR_String Name_16;
  MR_Word Entry_17;
  MR_Word VarTableMap_18;
  MR_String Var_30;
  MR_String Var_38;

  mercury__counter__allocate_3_p_0(&VarNum_14, Counter0_12, &Counter_15);
  *Var_10 = mercury__term__force_construct_var_1_f_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), VarNum_14);
  mercury__string__format__format_signed_int_component_nowidth_noprec_3_p_0((MR_Word) (&parse_tree__var_table_scalar_common_3[0]), VarNum_14, &Var_30);
  Var_38 = mercury__string__f_43_43_2_f_0((MR_String) "_", Var_30);
  Name_16 = mercury__string__f_43_43_2_f_0(Prefix_7, Var_38);
  {
    Entry_17 = (MR_Word) MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, Entry_17, 0) = ((MR_Box) (Name_16));
    MR_hl_field(0, Entry_17, 1) = ((MR_Box) (Type_8));
    MR_hl_field(0, Entry_17, 2) = (MR_Box) ((MR_Unsigned) (IsDummy_9));
  }
  mercury__map__det_insert_4_p_0((MR_Word) (&parse_tree__var_table_scalar_common_1[0]), (MR_Word) (&parse_tree__var_table__parse_tree__var_table__type_ctor_info_var_table_entry_0), ((MR_Box) (*Var_10)), ((MR_Box) (Entry_17)), VarTableMap0_13, &VarTableMap_18);
  {
    MR_Word base;
    base = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
    *STATE_VARIABLE_VarTable_20 = base;
    MR_hl_field(0, base, 0) = ((MR_Box) (Counter_15));
    MR_hl_field(0, base, 1) = ((MR_Box) (VarTableMap_18));
  }
}

void MR_CALL 
parse_tree__var_table__add_var_entry_4_p_0(
  MR_Word Entry_5,
  MR_Word * Var_6,
  MR_Word STATE_VARIABLE_VarTable_0_13,
  MR_Word * STATE_VARIABLE_VarTable_14)
{
  MR_Word Counter0_8 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_VarTable_0_13, 0))));
  MR_Word VarTableMap0_9 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_VarTable_0_13, 1))));
  MR_Integer VarNum_10;
  MR_Word Counter_11;
  MR_Word VarTableMap_12;

  mercury__counter__allocate_3_p_0(&VarNum_10, Counter0_8, &Counter_11);
  *Var_6 = mercury__term__force_construct_var_1_f_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), VarNum_10);
  mercury__map__det_insert_4_p_0((MR_Word) (&parse_tree__var_table_scalar_common_1[0]), (MR_Word) (&parse_tree__var_table__parse_tree__var_table__type_ctor_info_var_table_entry_0), ((MR_Box) (*Var_6)), ((MR_Box) (Entry_5)), VarTableMap0_9, &VarTableMap_12);
  {
    MR_Word base;
    base = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
    *STATE_VARIABLE_VarTable_14 = base;
    MR_hl_field(0, base, 0) = ((MR_Box) (Counter_11));
    MR_hl_field(0, base, 1) = ((MR_Box) (VarTableMap_12));
  }
}

void MR_CALL 
parse_tree__var_table__init_var_table_1_p_0(
  MR_Word * VarTable_2)
{
  MR_Word Counter_3;
  MR_Word VarTableMap_4;

  mercury__counter__init_2_p_0((MR_Integer) 1, &Counter_3);
  mercury__map__init_1_p_0((MR_Word) (&parse_tree__var_table_scalar_common_1[0]), (MR_Word) (&parse_tree__var_table__parse_tree__var_table__type_ctor_info_var_table_entry_0), &VarTableMap_4);
  {
    MR_Word base;
    base = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
    *VarTable_2 = base;
    MR_hl_field(0, base, 0) = ((MR_Box) (Counter_3));
    MR_hl_field(0, base, 1) = ((MR_Box) (VarTableMap_4));
  }
}

static MR_bool MR_CALL 
parse_tree__var_table____Unify____type_qual_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  MR_bool succeeded;

  succeeded = parse_tree__var_table____Unify____type_qual_0_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
  return succeeded;
}

static void MR_CALL 
parse_tree__var_table____Compare____type_qual_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  MR_Word conv0_HeadVar__1_1;

  parse_tree__var_table____Compare____type_qual_0_0(&conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
  *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
}

static MR_bool MR_CALL 
parse_tree__var_table____Unify____var_table_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  MR_bool succeeded;

  succeeded = parse_tree__var_table____Unify____var_table_0_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
  return succeeded;
}

static void MR_CALL 
parse_tree__var_table____Compare____var_table_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  MR_Word conv0_HeadVar__1_1;

  parse_tree__var_table____Compare____var_table_0_0(&conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
  *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
}

static MR_bool MR_CALL 
parse_tree__var_table____Unify____var_table_entry_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  MR_bool succeeded;

  succeeded = parse_tree__var_table____Unify____var_table_entry_0_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
  return succeeded;
}

static void MR_CALL 
parse_tree__var_table____Compare____var_table_entry_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  MR_Word conv0_HeadVar__1_1;

  parse_tree__var_table____Compare____var_table_entry_0_0(&conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
  *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
}

static MR_bool MR_CALL 
parse_tree__var_table____Unify____var_table_map_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  MR_bool succeeded;

  succeeded = parse_tree__var_table____Unify____var_table_map_0_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
  return succeeded;
}

static void MR_CALL 
parse_tree__var_table____Compare____var_table_map_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  MR_Word conv0_HeadVar__1_1;

  parse_tree__var_table____Compare____var_table_map_0_0(&conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
  *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
}

void mercury__parse_tree__var_table__init(void)
{
}

void mercury__parse_tree__var_table__init_type_tables(void)
{
  static MR_bool initialised = MR_FALSE;
  if (initialised) return;
  initialised = MR_TRUE;

  MR_register_type_ctor_info(&parse_tree__var_table__parse_tree__var_table__type_ctor_info_type_qual_0);
  MR_register_type_ctor_info(&parse_tree__var_table__parse_tree__var_table__type_ctor_info_var_table_0);
  MR_register_type_ctor_info(&parse_tree__var_table__parse_tree__var_table__type_ctor_info_var_table_entry_0);
  MR_register_type_ctor_info(&parse_tree__var_table__parse_tree__var_table__type_ctor_info_var_table_map_0);
}

void mercury__parse_tree__var_table__init_debugger(void)
{
  MR_fatal_error("debugger initialization in MLDS grade");
}

// Ensure everything is compiled with the same grade.
const char *mercury__parse_tree__var_table__grade_check(void)
{
  return &MR_GRADE_VAR;
}

// :- end_module parse_tree.var_table.
