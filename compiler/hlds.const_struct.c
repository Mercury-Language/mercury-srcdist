/*
** Automatically generated from `const_struct.m'
** by the Mercury compiler,
** version rotd-2023-10-26
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


// :- module hlds.const_struct.
// :- implementation.

/*
INIT mercury__hlds__const_struct__init
ENDINIT
*/

#include "hlds.const_struct.mih"


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
#include "getopt.mih"
#include "hlds.mih"
#include "int.mih"
#include "io.mih"
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
#include "unit.mih"
#include "univ.mih"
#include "varset.mih"
#include "libs.globals.mih"
#include "libs.op_mode.mih"
#include "libs.optimization_options.mih"
#include "libs.options.mih"
#include "libs.trace_params.mih"
#include "mdbcomp.feedback.mih"
#include "mdbcomp.prim_data.mih"
#include "mdbcomp.sym_name.mih"
#include "parse_tree.prog_data.mih"
#include "parse_tree.prog_data_pragma.mih"
#include "parse_tree.prog_item.mih"
#include "parse_tree.set_of_var.mih"




static const MR_FA_TypeInfo_Struct1 hlds__const_struct__list__ti_list_1hlds__const_struct__type_ctor_info_const_struct_arg_0;

static const MR_PseudoTypeInfo hlds__const_struct__hlds__const_struct__field_types_cons_proxy_struct_0_0[5];

static const MR_ConstString hlds__const_struct__hlds__const_struct__field_names_cons_proxy_struct_0_0[5];

static const MR_DuFunctorDesc hlds__const_struct__hlds__const_struct__du_functor_desc_cons_proxy_struct_0_0;

static const MR_DuFunctorDescPtr hlds__const_struct__hlds__const_struct__du_stag_ordered_cons_proxy_struct_0_0[1];

static const MR_DuPtagLayout hlds__const_struct__hlds__const_struct__du_ptag_ordered_cons_proxy_struct_0[1];

static const MR_DuFunctorDescPtr hlds__const_struct__hlds__const_struct__du_name_ordered_cons_proxy_struct_0[1];

static const MR_Integer hlds__const_struct__hlds__const_struct__functor_number_map_cons_proxy_struct_0[1];

static const MR_FA_TypeInfo_Struct1 hlds__const_struct__list__ti_list_1parse_tree__prog_data__type_ctor_info_prog_constraint_0;

static const MR_PseudoTypeInfo hlds__const_struct__hlds__const_struct__field_types_const_instance_id_0_0[3];

static const MR_DuFunctorDesc hlds__const_struct__hlds__const_struct__du_functor_desc_const_instance_id_0_0;

static const MR_DuFunctorDescPtr hlds__const_struct__hlds__const_struct__du_stag_ordered_const_instance_id_0_0[1];

static const MR_DuPtagLayout hlds__const_struct__hlds__const_struct__du_ptag_ordered_const_instance_id_0[1];

static const MR_DuFunctorDescPtr hlds__const_struct__hlds__const_struct__du_name_ordered_const_instance_id_0[1];

static const MR_Integer hlds__const_struct__hlds__const_struct__functor_number_map_const_instance_id_0[1];

static const MR_FA_TypeInfo_Struct2 hlds__const_struct__tree234__ti_tree234_2hlds__const_struct__type_ctor_info_const_instance_id_0builtin__type_ctor_info_int_0;

static const MR_PseudoTypeInfo hlds__const_struct__hlds__const_struct__field_types_const_struct_0_0[5];

static const MR_ConstString hlds__const_struct__hlds__const_struct__field_names_const_struct_0_0[5];

static const MR_DuArgLocn hlds__const_struct__hlds__const_struct__field_locns_const_struct_0_0[5];

static const MR_DuFunctorDesc hlds__const_struct__hlds__const_struct__du_functor_desc_const_struct_0_0;

static const MR_DuFunctorDescPtr hlds__const_struct__hlds__const_struct__du_stag_ordered_const_struct_0_0[1];

static const MR_DuPtagLayout hlds__const_struct__hlds__const_struct__du_ptag_ordered_const_struct_0[1];

static const MR_DuFunctorDescPtr hlds__const_struct__hlds__const_struct__du_name_ordered_const_struct_0[1];

static const MR_Integer hlds__const_struct__hlds__const_struct__functor_number_map_const_struct_0[1];

static const MR_PseudoTypeInfo hlds__const_struct__hlds__const_struct__field_types_const_struct_arg_0_0[1];

static const MR_DuFunctorDesc hlds__const_struct__hlds__const_struct__du_functor_desc_const_struct_arg_0_0;

static const MR_PseudoTypeInfo hlds__const_struct__hlds__const_struct__field_types_const_struct_arg_0_1[2];

static const MR_DuFunctorDesc hlds__const_struct__hlds__const_struct__du_functor_desc_const_struct_arg_0_1;

static const MR_DuFunctorDescPtr hlds__const_struct__hlds__const_struct__du_stag_ordered_const_struct_arg_0_0[1];

static const MR_DuFunctorDescPtr hlds__const_struct__hlds__const_struct__du_stag_ordered_const_struct_arg_0_1[1];

static const MR_DuPtagLayout hlds__const_struct__hlds__const_struct__du_ptag_ordered_const_struct_arg_0[2];

static const MR_DuFunctorDescPtr hlds__const_struct__hlds__const_struct__du_name_ordered_const_struct_arg_0[2];

static const MR_Integer hlds__const_struct__hlds__const_struct__functor_number_map_const_struct_arg_0[2];

static const MR_FA_TypeInfo_Struct2 hlds__const_struct__tree234__ti_tree234_2hlds__const_struct__type_ctor_info_cons_proxy_struct_0builtin__type_ctor_info_int_0;

static const MR_FA_TypeInfo_Struct2 hlds__const_struct__tree234__ti_tree234_2hlds__const_struct__type_ctor_info_noncons_proxy_struct_0builtin__type_ctor_info_int_0;

static const MR_FA_TypeInfo_Struct2 hlds__const_struct__tree234__ti_tree234_2builtin__type_ctor_info_int_0hlds__const_struct__type_ctor_info_const_struct_0;

static const MR_PseudoTypeInfo hlds__const_struct__hlds__const_struct__field_types_const_struct_db_0_0[7];

static const MR_ConstString hlds__const_struct__hlds__const_struct__field_names_const_struct_db_0_0[7];

static const MR_DuArgLocn hlds__const_struct__hlds__const_struct__field_locns_const_struct_db_0_0[7];

static const MR_DuFunctorDesc hlds__const_struct__hlds__const_struct__du_functor_desc_const_struct_db_0_0;

static const MR_DuFunctorDescPtr hlds__const_struct__hlds__const_struct__du_stag_ordered_const_struct_db_0_0[1];

static const MR_DuPtagLayout hlds__const_struct__hlds__const_struct__du_ptag_ordered_const_struct_db_0[1];

static const MR_DuFunctorDescPtr hlds__const_struct__hlds__const_struct__du_name_ordered_const_struct_db_0[1];

static const MR_Integer hlds__const_struct__hlds__const_struct__functor_number_map_const_struct_db_0[1];

static const MR_EnumFunctorDesc hlds__const_struct__hlds__const_struct__enum_functor_desc_defined_where_0_0;

static const MR_EnumFunctorDesc hlds__const_struct__hlds__const_struct__enum_functor_desc_defined_where_0_1;

static const MR_EnumFunctorDescPtr hlds__const_struct__hlds__const_struct__enum_ordinal_ordered_defined_where_0[2];

static const MR_EnumFunctorDescPtr hlds__const_struct__hlds__const_struct__enum_name_ordered_defined_where_0[2];

static const MR_Integer hlds__const_struct__hlds__const_struct__functor_number_map_defined_where_0[2];

static const MR_PseudoTypeInfo hlds__const_struct__hlds__const_struct__field_types_noncons_proxy_struct_0_0[4];

static const MR_ConstString hlds__const_struct__hlds__const_struct__field_names_noncons_proxy_struct_0_0[4];

static const MR_DuFunctorDesc hlds__const_struct__hlds__const_struct__du_functor_desc_noncons_proxy_struct_0_0;

static const MR_DuFunctorDescPtr hlds__const_struct__hlds__const_struct__du_stag_ordered_noncons_proxy_struct_0_0[1];

static const MR_DuPtagLayout hlds__const_struct__hlds__const_struct__du_ptag_ordered_noncons_proxy_struct_0[1];

static const MR_DuFunctorDescPtr hlds__const_struct__hlds__const_struct__du_name_ordered_noncons_proxy_struct_0[1];

static const MR_Integer hlds__const_struct__hlds__const_struct__functor_number_map_noncons_proxy_struct_0[1];

static void MR_CALL 
hlds__const_struct____Compare____noncons_proxy_struct_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3);

static MR_bool MR_CALL 
hlds__const_struct____Unify____noncons_proxy_struct_0_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2);

static void MR_CALL 
hlds__const_struct____Compare____cons_proxy_struct_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3);

static MR_bool MR_CALL 
hlds__const_struct____Unify____cons_proxy_struct_0_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2);

static void MR_CALL 
hlds__const_struct__const_struct_db_set_num_map_3_p_0(
  MR_Word NumMap_4,
  MR_Word STATE_VARIABLE_Db_0_6,
  MR_Word * STATE_VARIABLE_Db_7);

static void MR_CALL 
hlds__const_struct__const_struct_db_set_noncons_proxy_map_3_p_0(
  MR_Word NonConsProxyMap_4,
  MR_Word STATE_VARIABLE_Db_0_6,
  MR_Word * STATE_VARIABLE_Db_7);

static void MR_CALL 
hlds__const_struct__const_struct_db_set_next_num_3_p_0(
  MR_Integer Num_4,
  MR_Word STATE_VARIABLE_Db_0_6,
  MR_Word * STATE_VARIABLE_Db_7);

static void MR_CALL 
hlds__const_struct__const_struct_db_get_num_map_2_p_0(
  MR_Word Db_3,
  MR_Word * X_4);

static void MR_CALL 
hlds__const_struct__const_struct_db_get_noncons_proxy_map_2_p_0(
  MR_Word Db_3,
  MR_Word * X_4);

static void MR_CALL 
hlds__const_struct__maybe_update_defined_where_4_p_0(
  MR_Word DefinedWhere_5,
  MR_Integer ConstNum_6,
  MR_Word STATE_VARIABLE_Db_0_13,
  MR_Word * STATE_VARIABLE_Db_14);

static MR_bool MR_CALL 
hlds__const_struct____Unify____cons_proxy_struct_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2);

static void MR_CALL 
hlds__const_struct____Compare____cons_proxy_struct_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3);

static MR_bool MR_CALL 
hlds__const_struct____Unify____const_instance_id_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2);

static void MR_CALL 
hlds__const_struct____Compare____const_instance_id_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3);

static MR_bool MR_CALL 
hlds__const_struct____Unify____const_instance_map_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2);

static void MR_CALL 
hlds__const_struct____Compare____const_instance_map_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3);

static MR_bool MR_CALL 
hlds__const_struct____Unify____const_struct_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2);

static void MR_CALL 
hlds__const_struct____Compare____const_struct_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3);

static MR_bool MR_CALL 
hlds__const_struct____Unify____const_struct_arg_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2);

static void MR_CALL 
hlds__const_struct____Compare____const_struct_arg_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3);

static MR_bool MR_CALL 
hlds__const_struct____Unify____const_struct_db_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2);

static void MR_CALL 
hlds__const_struct____Compare____const_struct_db_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3);

static MR_bool MR_CALL 
hlds__const_struct____Unify____defined_where_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2);

static void MR_CALL 
hlds__const_struct____Compare____defined_where_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3);

static MR_bool MR_CALL 
hlds__const_struct____Unify____noncons_proxy_struct_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2);

static void MR_CALL 
hlds__const_struct____Compare____noncons_proxy_struct_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3);


static /* final */ const MR_Box hlds__const_struct_scalar_common_1[2][2];

static /* final */ const MR_Box hlds__const_struct_scalar_common_2[4][3];




static /* final */ const MR_Box hlds__const_struct_scalar_common_1[2][2] = {
  /* row   0 */
  {
    ((MR_Box) (&mercury__list__list__type_ctor_info_list_1)),
    ((MR_Box) (&hlds__const_struct__hlds__const_struct__type_ctor_info_const_struct_arg_0))
  },
  /* row   1 */
  {
    ((MR_Box) (&mercury__list__list__type_ctor_info_list_1)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_constraint_0))
  },
};

static /* final */ const MR_Box hlds__const_struct_scalar_common_2[4][3] = {
  /* row   0 */
  {
    ((MR_Box) (&mercury__tree234__tree234__type_ctor_info_tree234_2)),
    ((MR_Box) (&hlds__const_struct__hlds__const_struct__type_ctor_info_const_instance_id_0)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_int_0))
  },
  /* row   1 */
  {
    ((MR_Box) (&mercury__tree234__tree234__type_ctor_info_tree234_2)),
    ((MR_Box) (&hlds__const_struct__hlds__const_struct__type_ctor_info_cons_proxy_struct_0)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_int_0))
  },
  /* row   2 */
  {
    ((MR_Box) (&mercury__tree234__tree234__type_ctor_info_tree234_2)),
    ((MR_Box) (&hlds__const_struct__hlds__const_struct__type_ctor_info_noncons_proxy_struct_0)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_int_0))
  },
  /* row   3 */
  {
    ((MR_Box) (&mercury__tree234__tree234__type_ctor_info_tree234_2)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_int_0)),
    ((MR_Box) (&hlds__const_struct__hlds__const_struct__type_ctor_info_const_struct_0))
  },
};



#include "array.mh"
#include "bitmap.mh"
#include "io.mh"
#include "string.mh"
#include "time.mh"
#include "io.stream_ops.mh"


static const MR_FA_TypeInfo_Struct1 hlds__const_struct__list__ti_list_1hlds__const_struct__type_ctor_info_const_struct_arg_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  { (MR_TypeInfo) (&hlds__const_struct__hlds__const_struct__type_ctor_info_const_struct_arg_0) }
};

static const MR_PseudoTypeInfo hlds__const_struct__hlds__const_struct__field_types_cons_proxy_struct_0_0[5] = {
  (MR_PseudoTypeInfo) (&mercury__builtin__builtin__type_ctor_info_string_0),
  (MR_PseudoTypeInfo) (&hlds__const_struct__list__ti_list_1hlds__const_struct__type_ctor_info_const_struct_arg_0),
  (MR_PseudoTypeInfo) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_cons_id_0),
  (MR_PseudoTypeInfo) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0),
  (MR_PseudoTypeInfo) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_inst_0)
};

static const MR_ConstString hlds__const_struct__hlds__const_struct__field_names_cons_proxy_struct_0_0[5] = {
  (MR_String) "cps_name",
  (MR_String) "cps_args",
  (MR_String) "cps_cons_id",
  (MR_String) "cps_term_type",
  (MR_String) "cps_term_inst"
};

static const MR_DuFunctorDesc hlds__const_struct__hlds__const_struct__du_functor_desc_cons_proxy_struct_0_0 = {
  (MR_String) "cons_proxy_struct",
  INT16_C(5),
  UINT16_C(0),
  MR_SECTAG_NONE,
  UINT8_C(0),
  (MR_Integer) -1,
  INT32_C(0),
  hlds__const_struct__hlds__const_struct__field_types_cons_proxy_struct_0_0,
  hlds__const_struct__hlds__const_struct__field_names_cons_proxy_struct_0_0,
  NULL,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE,
  UINT8_C(0)
};

static const MR_DuFunctorDescPtr hlds__const_struct__hlds__const_struct__du_stag_ordered_cons_proxy_struct_0_0[1] = { &hlds__const_struct__hlds__const_struct__du_functor_desc_cons_proxy_struct_0_0 };

static const MR_DuPtagLayout hlds__const_struct__hlds__const_struct__du_ptag_ordered_cons_proxy_struct_0[1] = {
  {
    UINT32_C(1),
    MR_SECTAG_NONE,
    hlds__const_struct__hlds__const_struct__du_stag_ordered_cons_proxy_struct_0_0,
    INT8_C(-1),
    UINT8_C(0),
    UINT8_C(1)
  }
};

static const MR_DuFunctorDescPtr hlds__const_struct__hlds__const_struct__du_name_ordered_cons_proxy_struct_0[1] = { &hlds__const_struct__hlds__const_struct__du_functor_desc_cons_proxy_struct_0_0 };

static const MR_Integer hlds__const_struct__hlds__const_struct__functor_number_map_cons_proxy_struct_0[1] = { (MR_Integer) 0 };

const MR_TypeCtorInfo_Struct hlds__const_struct__hlds__const_struct__type_ctor_info_cons_proxy_struct_0 = {
  (MR_Integer) 0,
  UINT8_C(18),
  INT8_C(1),
  MR_TYPECTOR_REP_DU,
  ((MR_Box) (hlds__const_struct____Unify____cons_proxy_struct_0_0_10001)),
  ((MR_Box) (hlds__const_struct____Compare____cons_proxy_struct_0_0_10001)),
  (MR_String) "hlds.const_struct",
  (MR_String) "cons_proxy_struct",
  { hlds__const_struct__hlds__const_struct__du_name_ordered_cons_proxy_struct_0 },
  { hlds__const_struct__hlds__const_struct__du_ptag_ordered_cons_proxy_struct_0 },
  (MR_Integer) 1,
  UINT16_C(12),
  hlds__const_struct__hlds__const_struct__functor_number_map_cons_proxy_struct_0,

};

static const MR_FA_TypeInfo_Struct1 hlds__const_struct__list__ti_list_1parse_tree__prog_data__type_ctor_info_prog_constraint_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  { (MR_TypeInfo) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_constraint_0) }
};

static const MR_PseudoTypeInfo hlds__const_struct__hlds__const_struct__field_types_const_instance_id_0_0[3] = {
  (MR_PseudoTypeInfo) (&mercury__builtin__builtin__type_ctor_info_int_0),
  (MR_PseudoTypeInfo) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_constraint_0),
  (MR_PseudoTypeInfo) (&hlds__const_struct__list__ti_list_1parse_tree__prog_data__type_ctor_info_prog_constraint_0)
};

static const MR_DuFunctorDesc hlds__const_struct__hlds__const_struct__du_functor_desc_const_instance_id_0_0 = {
  (MR_String) "ciid",
  INT16_C(3),
  UINT16_C(0),
  MR_SECTAG_NONE,
  UINT8_C(0),
  (MR_Integer) -1,
  INT32_C(0),
  hlds__const_struct__hlds__const_struct__field_types_const_instance_id_0_0,
  NULL,
  NULL,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE,
  UINT8_C(0)
};

static const MR_DuFunctorDescPtr hlds__const_struct__hlds__const_struct__du_stag_ordered_const_instance_id_0_0[1] = { &hlds__const_struct__hlds__const_struct__du_functor_desc_const_instance_id_0_0 };

static const MR_DuPtagLayout hlds__const_struct__hlds__const_struct__du_ptag_ordered_const_instance_id_0[1] = {
  {
    UINT32_C(1),
    MR_SECTAG_NONE,
    hlds__const_struct__hlds__const_struct__du_stag_ordered_const_instance_id_0_0,
    INT8_C(-1),
    UINT8_C(0),
    UINT8_C(1)
  }
};

static const MR_DuFunctorDescPtr hlds__const_struct__hlds__const_struct__du_name_ordered_const_instance_id_0[1] = { &hlds__const_struct__hlds__const_struct__du_functor_desc_const_instance_id_0_0 };

static const MR_Integer hlds__const_struct__hlds__const_struct__functor_number_map_const_instance_id_0[1] = { (MR_Integer) 0 };

const MR_TypeCtorInfo_Struct hlds__const_struct__hlds__const_struct__type_ctor_info_const_instance_id_0 = {
  (MR_Integer) 0,
  UINT8_C(18),
  INT8_C(1),
  MR_TYPECTOR_REP_DU,
  ((MR_Box) (hlds__const_struct____Unify____const_instance_id_0_0_10001)),
  ((MR_Box) (hlds__const_struct____Compare____const_instance_id_0_0_10001)),
  (MR_String) "hlds.const_struct",
  (MR_String) "const_instance_id",
  { hlds__const_struct__hlds__const_struct__du_name_ordered_const_instance_id_0 },
  { hlds__const_struct__hlds__const_struct__du_ptag_ordered_const_instance_id_0 },
  (MR_Integer) 1,
  UINT16_C(12),
  hlds__const_struct__hlds__const_struct__functor_number_map_const_instance_id_0,

};

static const MR_FA_TypeInfo_Struct2 hlds__const_struct__tree234__ti_tree234_2hlds__const_struct__type_ctor_info_const_instance_id_0builtin__type_ctor_info_int_0 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_TypeInfo) (&hlds__const_struct__hlds__const_struct__type_ctor_info_const_instance_id_0),
    (MR_TypeInfo) (&mercury__builtin__builtin__type_ctor_info_int_0)
  }
};

const MR_TypeCtorInfo_Struct hlds__const_struct__hlds__const_struct__type_ctor_info_const_instance_map_0 = {
  (MR_Integer) 0,
  UINT8_C(18),
  INT8_C(-1),
  MR_TYPECTOR_REP_EQUIV_GROUND,
  ((MR_Box) (hlds__const_struct____Unify____const_instance_map_0_0_10001)),
  ((MR_Box) (hlds__const_struct____Compare____const_instance_map_0_0_10001)),
  (MR_String) "hlds.const_struct",
  (MR_String) "const_instance_map",
  { NULL },
  { (MR_PseudoTypeInfo) (&hlds__const_struct__tree234__ti_tree234_2hlds__const_struct__type_ctor_info_const_instance_id_0builtin__type_ctor_info_int_0) },
  (MR_Integer) -1,
  UINT16_C(0),
  NULL,

};

static const MR_PseudoTypeInfo hlds__const_struct__hlds__const_struct__field_types_const_struct_0_0[5] = {
  (MR_PseudoTypeInfo) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_cons_id_0),
  (MR_PseudoTypeInfo) (&hlds__const_struct__list__ti_list_1hlds__const_struct__type_ctor_info_const_struct_arg_0),
  (MR_PseudoTypeInfo) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0),
  (MR_PseudoTypeInfo) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_inst_0),
  (MR_PseudoTypeInfo) (&hlds__const_struct__hlds__const_struct__type_ctor_info_defined_where_0)
};

static const MR_ConstString hlds__const_struct__hlds__const_struct__field_names_const_struct_0_0[5] = {
  (MR_String) "cs_cons_id",
  (MR_String) "cs_args",
  (MR_String) "cs_term_type",
  (MR_String) "cs_term_inst",
  (MR_String) "cs_defined_where"
};

static const MR_DuArgLocn hlds__const_struct__hlds__const_struct__field_locns_const_struct_0_0[5] = {
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
    (MR_Integer) 1
  }
};

static const MR_DuFunctorDesc hlds__const_struct__hlds__const_struct__du_functor_desc_const_struct_0_0 = {
  (MR_String) "const_struct",
  INT16_C(5),
  UINT16_C(0),
  MR_SECTAG_NONE,
  UINT8_C(0),
  (MR_Integer) -1,
  INT32_C(0),
  hlds__const_struct__hlds__const_struct__field_types_const_struct_0_0,
  hlds__const_struct__hlds__const_struct__field_names_const_struct_0_0,
  hlds__const_struct__hlds__const_struct__field_locns_const_struct_0_0,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE,
  UINT8_C(0)
};

static const MR_DuFunctorDescPtr hlds__const_struct__hlds__const_struct__du_stag_ordered_const_struct_0_0[1] = { &hlds__const_struct__hlds__const_struct__du_functor_desc_const_struct_0_0 };

static const MR_DuPtagLayout hlds__const_struct__hlds__const_struct__du_ptag_ordered_const_struct_0[1] = {
  {
    UINT32_C(1),
    MR_SECTAG_NONE,
    hlds__const_struct__hlds__const_struct__du_stag_ordered_const_struct_0_0,
    INT8_C(-1),
    UINT8_C(0),
    UINT8_C(1)
  }
};

static const MR_DuFunctorDescPtr hlds__const_struct__hlds__const_struct__du_name_ordered_const_struct_0[1] = { &hlds__const_struct__hlds__const_struct__du_functor_desc_const_struct_0_0 };

static const MR_Integer hlds__const_struct__hlds__const_struct__functor_number_map_const_struct_0[1] = { (MR_Integer) 0 };

const MR_TypeCtorInfo_Struct hlds__const_struct__hlds__const_struct__type_ctor_info_const_struct_0 = {
  (MR_Integer) 0,
  UINT8_C(18),
  INT8_C(1),
  MR_TYPECTOR_REP_DU,
  ((MR_Box) (hlds__const_struct____Unify____const_struct_0_0_10001)),
  ((MR_Box) (hlds__const_struct____Compare____const_struct_0_0_10001)),
  (MR_String) "hlds.const_struct",
  (MR_String) "const_struct",
  { hlds__const_struct__hlds__const_struct__du_name_ordered_const_struct_0 },
  { hlds__const_struct__hlds__const_struct__du_ptag_ordered_const_struct_0 },
  (MR_Integer) 1,
  UINT16_C(12),
  hlds__const_struct__hlds__const_struct__functor_number_map_const_struct_0,

};

static const MR_PseudoTypeInfo hlds__const_struct__hlds__const_struct__field_types_const_struct_arg_0_0[1] = { (MR_PseudoTypeInfo) (&mercury__builtin__builtin__type_ctor_info_int_0) };

static const MR_DuFunctorDesc hlds__const_struct__hlds__const_struct__du_functor_desc_const_struct_arg_0_0 = {
  (MR_String) "csa_const_struct",
  INT16_C(1),
  UINT16_C(0),
  MR_SECTAG_NONE,
  UINT8_C(0),
  (MR_Integer) -1,
  INT32_C(0),
  hlds__const_struct__hlds__const_struct__field_types_const_struct_arg_0_0,
  NULL,
  NULL,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE,
  UINT8_C(0)
};

static const MR_PseudoTypeInfo hlds__const_struct__hlds__const_struct__field_types_const_struct_arg_0_1[2] = {
  (MR_PseudoTypeInfo) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_cons_id_0),
  (MR_PseudoTypeInfo) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0)
};

static const MR_DuFunctorDesc hlds__const_struct__hlds__const_struct__du_functor_desc_const_struct_arg_0_1 = {
  (MR_String) "csa_constant",
  INT16_C(2),
  UINT16_C(0),
  MR_SECTAG_NONE,
  UINT8_C(1),
  (MR_Integer) -1,
  INT32_C(1),
  hlds__const_struct__hlds__const_struct__field_types_const_struct_arg_0_1,
  NULL,
  NULL,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE,
  UINT8_C(0)
};

static const MR_DuFunctorDescPtr hlds__const_struct__hlds__const_struct__du_stag_ordered_const_struct_arg_0_0[1] = { &hlds__const_struct__hlds__const_struct__du_functor_desc_const_struct_arg_0_0 };

static const MR_DuFunctorDescPtr hlds__const_struct__hlds__const_struct__du_stag_ordered_const_struct_arg_0_1[1] = { &hlds__const_struct__hlds__const_struct__du_functor_desc_const_struct_arg_0_1 };

static const MR_DuPtagLayout hlds__const_struct__hlds__const_struct__du_ptag_ordered_const_struct_arg_0[2] = {
  {
    UINT32_C(1),
    MR_SECTAG_NONE,
    hlds__const_struct__hlds__const_struct__du_stag_ordered_const_struct_arg_0_0,
    INT8_C(-1),
    UINT8_C(0),
    UINT8_C(1)
  },
  {
    UINT32_C(1),
    MR_SECTAG_NONE,
    hlds__const_struct__hlds__const_struct__du_stag_ordered_const_struct_arg_0_1,
    INT8_C(-1),
    UINT8_C(1),
    UINT8_C(1)
  }
};

static const MR_DuFunctorDescPtr hlds__const_struct__hlds__const_struct__du_name_ordered_const_struct_arg_0[2] = {
  &hlds__const_struct__hlds__const_struct__du_functor_desc_const_struct_arg_0_0,
  &hlds__const_struct__hlds__const_struct__du_functor_desc_const_struct_arg_0_1
};

static const MR_Integer hlds__const_struct__hlds__const_struct__functor_number_map_const_struct_arg_0[2] = {
  (MR_Integer) 0,
  (MR_Integer) 1
};

const MR_TypeCtorInfo_Struct hlds__const_struct__hlds__const_struct__type_ctor_info_const_struct_arg_0 = {
  (MR_Integer) 0,
  UINT8_C(18),
  INT8_C(2),
  MR_TYPECTOR_REP_DU,
  ((MR_Box) (hlds__const_struct____Unify____const_struct_arg_0_0_10001)),
  ((MR_Box) (hlds__const_struct____Compare____const_struct_arg_0_0_10001)),
  (MR_String) "hlds.const_struct",
  (MR_String) "const_struct_arg",
  { hlds__const_struct__hlds__const_struct__du_name_ordered_const_struct_arg_0 },
  { hlds__const_struct__hlds__const_struct__du_ptag_ordered_const_struct_arg_0 },
  (MR_Integer) 2,
  UINT16_C(12),
  hlds__const_struct__hlds__const_struct__functor_number_map_const_struct_arg_0,

};

static const MR_FA_TypeInfo_Struct2 hlds__const_struct__tree234__ti_tree234_2hlds__const_struct__type_ctor_info_cons_proxy_struct_0builtin__type_ctor_info_int_0 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_TypeInfo) (&hlds__const_struct__hlds__const_struct__type_ctor_info_cons_proxy_struct_0),
    (MR_TypeInfo) (&mercury__builtin__builtin__type_ctor_info_int_0)
  }
};

static const MR_FA_TypeInfo_Struct2 hlds__const_struct__tree234__ti_tree234_2hlds__const_struct__type_ctor_info_noncons_proxy_struct_0builtin__type_ctor_info_int_0 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_TypeInfo) (&hlds__const_struct__hlds__const_struct__type_ctor_info_noncons_proxy_struct_0),
    (MR_TypeInfo) (&mercury__builtin__builtin__type_ctor_info_int_0)
  }
};

static const MR_FA_TypeInfo_Struct2 hlds__const_struct__tree234__ti_tree234_2builtin__type_ctor_info_int_0hlds__const_struct__type_ctor_info_const_struct_0 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_TypeInfo) (&mercury__builtin__builtin__type_ctor_info_int_0),
    (MR_TypeInfo) (&hlds__const_struct__hlds__const_struct__type_ctor_info_const_struct_0)
  }
};

static const MR_PseudoTypeInfo hlds__const_struct__hlds__const_struct__field_types_const_struct_db_0_0[7] = {
  (MR_PseudoTypeInfo) (&libs__optimization_options__libs__optimization_options__type_ctor_info_maybe_enable_const_struct_poly_0),
  (MR_PseudoTypeInfo) (&libs__optimization_options__libs__optimization_options__type_ctor_info_maybe_enable_const_struct_user_0),
  (MR_PseudoTypeInfo) (&mercury__builtin__builtin__type_ctor_info_int_0),
  (MR_PseudoTypeInfo) (&hlds__const_struct__tree234__ti_tree234_2hlds__const_struct__type_ctor_info_cons_proxy_struct_0builtin__type_ctor_info_int_0),
  (MR_PseudoTypeInfo) (&hlds__const_struct__tree234__ti_tree234_2hlds__const_struct__type_ctor_info_noncons_proxy_struct_0builtin__type_ctor_info_int_0),
  (MR_PseudoTypeInfo) (&hlds__const_struct__tree234__ti_tree234_2builtin__type_ctor_info_int_0hlds__const_struct__type_ctor_info_const_struct_0),
  (MR_PseudoTypeInfo) (&hlds__const_struct__tree234__ti_tree234_2hlds__const_struct__type_ctor_info_const_instance_id_0builtin__type_ctor_info_int_0)
};

static const MR_ConstString hlds__const_struct__hlds__const_struct__field_names_const_struct_db_0_0[7] = {
  (MR_String) "csdb_poly_enabled",
  (MR_String) "csdb_ground_term_enabled",
  (MR_String) "csdb_next_num",
  (MR_String) "csdb_cons_proxy_map",
  (MR_String) "csdb_noncons_struct_map",
  (MR_String) "csdb_num_map",
  (MR_String) "csdb_instance_map"
};

static const MR_DuArgLocn hlds__const_struct__hlds__const_struct__field_locns_const_struct_db_0_0[7] = {
  {
    (MR_Integer) 0,
    (MR_Integer) 1,
    (MR_Integer) 1
  },
  {
    (MR_Integer) 0,
    (MR_Integer) 0,
    (MR_Integer) 1
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
  }
};

static const MR_DuFunctorDesc hlds__const_struct__hlds__const_struct__du_functor_desc_const_struct_db_0_0 = {
  (MR_String) "const_struct_db",
  INT16_C(7),
  UINT16_C(0),
  MR_SECTAG_NONE,
  UINT8_C(0),
  (MR_Integer) -1,
  INT32_C(0),
  hlds__const_struct__hlds__const_struct__field_types_const_struct_db_0_0,
  hlds__const_struct__hlds__const_struct__field_names_const_struct_db_0_0,
  hlds__const_struct__hlds__const_struct__field_locns_const_struct_db_0_0,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE,
  UINT8_C(0)
};

static const MR_DuFunctorDescPtr hlds__const_struct__hlds__const_struct__du_stag_ordered_const_struct_db_0_0[1] = { &hlds__const_struct__hlds__const_struct__du_functor_desc_const_struct_db_0_0 };

static const MR_DuPtagLayout hlds__const_struct__hlds__const_struct__du_ptag_ordered_const_struct_db_0[1] = {
  {
    UINT32_C(1),
    MR_SECTAG_NONE,
    hlds__const_struct__hlds__const_struct__du_stag_ordered_const_struct_db_0_0,
    INT8_C(-1),
    UINT8_C(0),
    UINT8_C(1)
  }
};

static const MR_DuFunctorDescPtr hlds__const_struct__hlds__const_struct__du_name_ordered_const_struct_db_0[1] = { &hlds__const_struct__hlds__const_struct__du_functor_desc_const_struct_db_0_0 };

static const MR_Integer hlds__const_struct__hlds__const_struct__functor_number_map_const_struct_db_0[1] = { (MR_Integer) 0 };

const MR_TypeCtorInfo_Struct hlds__const_struct__hlds__const_struct__type_ctor_info_const_struct_db_0 = {
  (MR_Integer) 0,
  UINT8_C(18),
  INT8_C(1),
  MR_TYPECTOR_REP_DU,
  ((MR_Box) (hlds__const_struct____Unify____const_struct_db_0_0_10001)),
  ((MR_Box) (hlds__const_struct____Compare____const_struct_db_0_0_10001)),
  (MR_String) "hlds.const_struct",
  (MR_String) "const_struct_db",
  { hlds__const_struct__hlds__const_struct__du_name_ordered_const_struct_db_0 },
  { hlds__const_struct__hlds__const_struct__du_ptag_ordered_const_struct_db_0 },
  (MR_Integer) 1,
  UINT16_C(12),
  hlds__const_struct__hlds__const_struct__functor_number_map_const_struct_db_0,

};

static const MR_EnumFunctorDesc hlds__const_struct__hlds__const_struct__enum_functor_desc_defined_where_0_0 = {
  (MR_String) "defined_in_this_module",
  INT32_C(0)
};

static const MR_EnumFunctorDesc hlds__const_struct__hlds__const_struct__enum_functor_desc_defined_where_0_1 = {
  (MR_String) "defined_in_other_module",
  INT32_C(1)
};

static const MR_EnumFunctorDescPtr hlds__const_struct__hlds__const_struct__enum_ordinal_ordered_defined_where_0[2] = {
  &hlds__const_struct__hlds__const_struct__enum_functor_desc_defined_where_0_0,
  &hlds__const_struct__hlds__const_struct__enum_functor_desc_defined_where_0_1
};

static const MR_EnumFunctorDescPtr hlds__const_struct__hlds__const_struct__enum_name_ordered_defined_where_0[2] = {
  &hlds__const_struct__hlds__const_struct__enum_functor_desc_defined_where_0_1,
  &hlds__const_struct__hlds__const_struct__enum_functor_desc_defined_where_0_0
};

static const MR_Integer hlds__const_struct__hlds__const_struct__functor_number_map_defined_where_0[2] = {
  (MR_Integer) 1,
  (MR_Integer) 0
};

const MR_TypeCtorInfo_Struct hlds__const_struct__hlds__const_struct__type_ctor_info_defined_where_0 = {
  (MR_Integer) 0,
  UINT8_C(18),
  INT8_C(-1),
  MR_TYPECTOR_REP_ENUM,
  ((MR_Box) (hlds__const_struct____Unify____defined_where_0_0_10001)),
  ((MR_Box) (hlds__const_struct____Compare____defined_where_0_0_10001)),
  (MR_String) "hlds.const_struct",
  (MR_String) "defined_where",
  { hlds__const_struct__hlds__const_struct__enum_name_ordered_defined_where_0 },
  { hlds__const_struct__hlds__const_struct__enum_ordinal_ordered_defined_where_0 },
  (MR_Integer) 2,
  UINT16_C(12),
  hlds__const_struct__hlds__const_struct__functor_number_map_defined_where_0,

};

static const MR_PseudoTypeInfo hlds__const_struct__hlds__const_struct__field_types_noncons_proxy_struct_0_0[4] = {
  (MR_PseudoTypeInfo) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_cons_id_0),
  (MR_PseudoTypeInfo) (&hlds__const_struct__list__ti_list_1hlds__const_struct__type_ctor_info_const_struct_arg_0),
  (MR_PseudoTypeInfo) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0),
  (MR_PseudoTypeInfo) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_inst_0)
};

static const MR_ConstString hlds__const_struct__hlds__const_struct__field_names_noncons_proxy_struct_0_0[4] = {
  (MR_String) "ncps_cons_id",
  (MR_String) "ncps_args",
  (MR_String) "ncps_term_type",
  (MR_String) "ncps_term_inst"
};

static const MR_DuFunctorDesc hlds__const_struct__hlds__const_struct__du_functor_desc_noncons_proxy_struct_0_0 = {
  (MR_String) "noncons_proxy_struct",
  INT16_C(4),
  UINT16_C(0),
  MR_SECTAG_NONE,
  UINT8_C(0),
  (MR_Integer) -1,
  INT32_C(0),
  hlds__const_struct__hlds__const_struct__field_types_noncons_proxy_struct_0_0,
  hlds__const_struct__hlds__const_struct__field_names_noncons_proxy_struct_0_0,
  NULL,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE,
  UINT8_C(0)
};

static const MR_DuFunctorDescPtr hlds__const_struct__hlds__const_struct__du_stag_ordered_noncons_proxy_struct_0_0[1] = { &hlds__const_struct__hlds__const_struct__du_functor_desc_noncons_proxy_struct_0_0 };

static const MR_DuPtagLayout hlds__const_struct__hlds__const_struct__du_ptag_ordered_noncons_proxy_struct_0[1] = {
  {
    UINT32_C(1),
    MR_SECTAG_NONE,
    hlds__const_struct__hlds__const_struct__du_stag_ordered_noncons_proxy_struct_0_0,
    INT8_C(-1),
    UINT8_C(0),
    UINT8_C(1)
  }
};

static const MR_DuFunctorDescPtr hlds__const_struct__hlds__const_struct__du_name_ordered_noncons_proxy_struct_0[1] = { &hlds__const_struct__hlds__const_struct__du_functor_desc_noncons_proxy_struct_0_0 };

static const MR_Integer hlds__const_struct__hlds__const_struct__functor_number_map_noncons_proxy_struct_0[1] = { (MR_Integer) 0 };

const MR_TypeCtorInfo_Struct hlds__const_struct__hlds__const_struct__type_ctor_info_noncons_proxy_struct_0 = {
  (MR_Integer) 0,
  UINT8_C(18),
  INT8_C(1),
  MR_TYPECTOR_REP_DU,
  ((MR_Box) (hlds__const_struct____Unify____noncons_proxy_struct_0_0_10001)),
  ((MR_Box) (hlds__const_struct____Compare____noncons_proxy_struct_0_0_10001)),
  (MR_String) "hlds.const_struct",
  (MR_String) "noncons_proxy_struct",
  { hlds__const_struct__hlds__const_struct__du_name_ordered_noncons_proxy_struct_0 },
  { hlds__const_struct__hlds__const_struct__du_ptag_ordered_noncons_proxy_struct_0 },
  (MR_Integer) 1,
  UINT16_C(12),
  hlds__const_struct__hlds__const_struct__functor_number_map_noncons_proxy_struct_0,

};

static void MR_CALL 
hlds__const_struct____Compare____noncons_proxy_struct_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3)
{
  MR_bool succeeded;
  MR_Integer CastX_15 = (MR_Integer) (HeadVar__2_2);
  MR_Integer CastY_16 = (MR_Integer) (HeadVar__3_3);

  succeeded = (CastX_15 == CastY_16);
  if (succeeded)
    *HeadVar__1_1 = (MR_Integer) 0;
  else
  {
    MR_Word ArgX1_4 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, (MR_Integer) 0))));
    MR_Word ArgY1_5 = ((MR_Word) ((MR_hl_field(0, HeadVar__3_3, (MR_Integer) 0))));
    MR_Word ArgX2_7 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, (MR_Integer) 1))));
    MR_Word ArgY2_8 = ((MR_Word) ((MR_hl_field(0, HeadVar__3_3, (MR_Integer) 1))));
    MR_Word ArgX3_10 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, (MR_Integer) 2))));
    MR_Word ArgY3_11 = ((MR_Word) ((MR_hl_field(0, HeadVar__3_3, (MR_Integer) 2))));
    MR_Word ArgX4_13 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, (MR_Integer) 3))));
    MR_Word ArgY4_14 = ((MR_Word) ((MR_hl_field(0, HeadVar__3_3, (MR_Integer) 3))));
    MR_Word SubResult1_6;

    parse_tree__prog_data____Compare____cons_id_0_0(&SubResult1_6, ArgX1_4, ArgY1_5);
    succeeded = (SubResult1_6 != (MR_Integer) 0);
    if (succeeded)
      *HeadVar__1_1 = SubResult1_6;
    else
    {
      MR_Word SubResult2_9;

      mercury__builtin__compare_3_p_0((MR_Word) (&hlds__const_struct_scalar_common_1[0]), &SubResult2_9, ((MR_Box) (ArgX2_7)), ((MR_Box) (ArgY2_8)));
      succeeded = (SubResult2_9 != (MR_Integer) 0);
      if (succeeded)
        *HeadVar__1_1 = SubResult2_9;
      else
      {
        MR_Word SubResult3_12;

        parse_tree__prog_data____Compare____mer_type_0_0(&SubResult3_12, ArgX3_10, ArgY3_11);
        succeeded = (SubResult3_12 != (MR_Integer) 0);
        if (succeeded)
          *HeadVar__1_1 = SubResult3_12;
        else
          parse_tree__prog_data____Compare____mer_inst_0_0(HeadVar__1_1, ArgX4_13, ArgY4_14);
      }
    }
  }
}

static MR_bool MR_CALL 
hlds__const_struct____Unify____noncons_proxy_struct_0_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2)
{
  MR_bool succeeded;
  MR_Integer CastX_11 = (MR_Integer) (HeadVar__1_1);
  MR_Integer CastY_12 = (MR_Integer) (HeadVar__2_2);

  succeeded = (CastX_11 == CastY_12);
  if (succeeded)
    succeeded = MR_TRUE;
  else
  {
    MR_Word TypeInfo_14_14;
    MR_Word ArgX1_3 = ((MR_Word) ((MR_hl_field(0, HeadVar__1_1, (MR_Integer) 0))));
    MR_Word ArgY1_4 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, (MR_Integer) 0))));
    MR_Word ArgX2_5 = ((MR_Word) ((MR_hl_field(0, HeadVar__1_1, (MR_Integer) 1))));
    MR_Word ArgY2_6 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, (MR_Integer) 1))));
    MR_Word ArgX3_7 = ((MR_Word) ((MR_hl_field(0, HeadVar__1_1, (MR_Integer) 2))));
    MR_Word ArgY3_8 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, (MR_Integer) 2))));
    MR_Word ArgX4_9 = ((MR_Word) ((MR_hl_field(0, HeadVar__1_1, (MR_Integer) 3))));
    MR_Word ArgY4_10 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, (MR_Integer) 3))));

    succeeded = parse_tree__prog_data____Unify____cons_id_0_0(ArgX1_3, ArgY1_4);
    if (succeeded)
    {
      TypeInfo_14_14 = (MR_Word) (&hlds__const_struct_scalar_common_1[0]);
      succeeded = mercury__builtin__unify_2_p_0(TypeInfo_14_14, ((MR_Box) (ArgX2_5)), ((MR_Box) (ArgY2_6)));
      if (succeeded)
      {
        succeeded = parse_tree__prog_data____Unify____mer_type_0_0(ArgX3_7, ArgY3_8);
        if (succeeded)
          succeeded = parse_tree__prog_data____Unify____mer_inst_0_0(ArgX4_9, ArgY4_10);
      }
    }
  }
  return succeeded;
}

void MR_CALL 
hlds__const_struct____Compare____defined_where_0_0(
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
hlds__const_struct____Unify____defined_where_0_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2)
{
  MR_bool succeeded = (HeadVar__1_1 == HeadVar__2_2);

  return succeeded;
}

void MR_CALL 
hlds__const_struct____Compare____const_struct_db_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3)
{
  MR_bool succeeded;
  MR_Integer CastX_24 = (MR_Integer) (HeadVar__2_2);
  MR_Integer CastY_25 = (MR_Integer) (HeadVar__3_3);

  succeeded = (CastX_24 == CastY_25);
  if (succeeded)
    *HeadVar__1_1 = (MR_Integer) 0;
  else
  {
    MR_Word ArgX1_4 = ((((MR_Unsigned) ((MR_hl_field(0, HeadVar__2_2, (MR_Integer) 0))) >> 1)) & (MR_Integer) 1);
    MR_Word ArgY1_5 = ((((MR_Unsigned) ((MR_hl_field(0, HeadVar__3_3, (MR_Integer) 0))) >> 1)) & (MR_Integer) 1);
    MR_Word ArgX2_7 = ((MR_Unsigned) ((MR_hl_field(0, HeadVar__2_2, (MR_Integer) 0))) & (MR_Integer) 1);
    MR_Word ArgY2_8 = ((MR_Unsigned) ((MR_hl_field(0, HeadVar__3_3, (MR_Integer) 0))) & (MR_Integer) 1);
    MR_Integer ArgX3_10 = ((MR_Integer) ((MR_hl_field(0, HeadVar__2_2, (MR_Integer) 1))));
    MR_Integer ArgY3_11 = ((MR_Integer) ((MR_hl_field(0, HeadVar__3_3, (MR_Integer) 1))));
    MR_Word ArgX4_13 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, (MR_Integer) 2))));
    MR_Word ArgY4_14 = ((MR_Word) ((MR_hl_field(0, HeadVar__3_3, (MR_Integer) 2))));
    MR_Word ArgX5_16 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, (MR_Integer) 3))));
    MR_Word ArgY5_17 = ((MR_Word) ((MR_hl_field(0, HeadVar__3_3, (MR_Integer) 3))));
    MR_Word ArgX6_19 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, (MR_Integer) 4))));
    MR_Word ArgY6_20 = ((MR_Word) ((MR_hl_field(0, HeadVar__3_3, (MR_Integer) 4))));
    MR_Word ArgX7_22 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, (MR_Integer) 5))));
    MR_Word ArgY7_23 = ((MR_Word) ((MR_hl_field(0, HeadVar__3_3, (MR_Integer) 5))));
    MR_Word SubResult1_6;
    MR_Integer Var_33 = (MR_Integer) (ArgX1_4);
    MR_Integer Var_34 = (MR_Integer) (ArgY1_5);

    succeeded = (Var_33 < Var_34);
    if (succeeded)
    {
      SubResult1_6 = (MR_Integer) 1;
      succeeded = MR_TRUE;
    }
    else
    {
      succeeded = (Var_33 > Var_34);
      if (succeeded)
      {
        SubResult1_6 = (MR_Integer) 2;
        succeeded = MR_TRUE;
      }
      else
      {
        succeeded = MR_TRUE;
        succeeded = !(succeeded);
        if (succeeded)
        {
          SubResult1_6 = (MR_Integer) 0;
          succeeded = MR_TRUE;
        }
      }
    }
    if (succeeded)
      *HeadVar__1_1 = SubResult1_6;
    else
    {
      MR_Word SubResult2_9;
      MR_Integer Var_35 = (MR_Integer) (ArgX2_7);
      MR_Integer Var_36 = (MR_Integer) (ArgY2_8);

      succeeded = (Var_35 < Var_36);
      if (succeeded)
      {
        SubResult2_9 = (MR_Integer) 1;
        succeeded = MR_TRUE;
      }
      else
      {
        succeeded = (Var_35 > Var_36);
        if (succeeded)
        {
          SubResult2_9 = (MR_Integer) 2;
          succeeded = MR_TRUE;
        }
        else
        {
          succeeded = MR_TRUE;
          succeeded = !(succeeded);
          if (succeeded)
          {
            SubResult2_9 = (MR_Integer) 0;
            succeeded = MR_TRUE;
          }
        }
      }
      if (succeeded)
        *HeadVar__1_1 = SubResult2_9;
      else
      {
        MR_Word SubResult3_12;

        succeeded = (ArgX3_10 < ArgY3_11);
        if (succeeded)
        {
          SubResult3_12 = (MR_Integer) 1;
          succeeded = MR_TRUE;
        }
        else
        {
          succeeded = (ArgX3_10 > ArgY3_11);
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

          mercury__builtin__compare_3_p_0((MR_Word) (&hlds__const_struct_scalar_common_2[1]), &SubResult4_15, ((MR_Box) (ArgX4_13)), ((MR_Box) (ArgY4_14)));
          succeeded = (SubResult4_15 != (MR_Integer) 0);
          if (succeeded)
            *HeadVar__1_1 = SubResult4_15;
          else
          {
            MR_Word SubResult5_18;

            mercury__builtin__compare_3_p_0((MR_Word) (&hlds__const_struct_scalar_common_2[2]), &SubResult5_18, ((MR_Box) (ArgX5_16)), ((MR_Box) (ArgY5_17)));
            succeeded = (SubResult5_18 != (MR_Integer) 0);
            if (succeeded)
              *HeadVar__1_1 = SubResult5_18;
            else
            {
              MR_Word SubResult6_21;

              mercury__builtin__compare_3_p_0((MR_Word) (&hlds__const_struct_scalar_common_2[3]), &SubResult6_21, ((MR_Box) (ArgX6_19)), ((MR_Box) (ArgY6_20)));
              succeeded = (SubResult6_21 != (MR_Integer) 0);
              if (succeeded)
                *HeadVar__1_1 = SubResult6_21;
              else
                mercury__builtin__compare_3_p_0((MR_Word) (&hlds__const_struct_scalar_common_2[0]), HeadVar__1_1, ((MR_Box) (ArgX7_22)), ((MR_Box) (ArgY7_23)));
            }
          }
        }
      }
    }
  }
}

MR_bool MR_CALL 
hlds__const_struct____Unify____const_struct_db_0_0(
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
  {
    MR_Word TypeInfo_19_19;
    MR_Word TypeInfo_20_20;
    MR_Word TypeInfo_21_21;
    MR_Word TypeInfo_22_22;
    MR_Word ArgX1_3 = ((((MR_Unsigned) ((MR_hl_field(0, HeadVar__1_1, (MR_Integer) 0))) >> 1)) & (MR_Integer) 1);
    MR_Word ArgY1_4 = ((((MR_Unsigned) ((MR_hl_field(0, HeadVar__2_2, (MR_Integer) 0))) >> 1)) & (MR_Integer) 1);
    MR_Word ArgX2_5 = ((MR_Unsigned) ((MR_hl_field(0, HeadVar__1_1, (MR_Integer) 0))) & (MR_Integer) 1);
    MR_Word ArgY2_6 = ((MR_Unsigned) ((MR_hl_field(0, HeadVar__2_2, (MR_Integer) 0))) & (MR_Integer) 1);
    MR_Integer ArgX3_7 = ((MR_Integer) ((MR_hl_field(0, HeadVar__1_1, (MR_Integer) 1))));
    MR_Integer ArgY3_8 = ((MR_Integer) ((MR_hl_field(0, HeadVar__2_2, (MR_Integer) 1))));
    MR_Word ArgX4_9 = ((MR_Word) ((MR_hl_field(0, HeadVar__1_1, (MR_Integer) 2))));
    MR_Word ArgY4_10 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, (MR_Integer) 2))));
    MR_Word ArgX5_11 = ((MR_Word) ((MR_hl_field(0, HeadVar__1_1, (MR_Integer) 3))));
    MR_Word ArgY5_12 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, (MR_Integer) 3))));
    MR_Word ArgX6_13 = ((MR_Word) ((MR_hl_field(0, HeadVar__1_1, (MR_Integer) 4))));
    MR_Word ArgY6_14 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, (MR_Integer) 4))));
    MR_Word ArgX7_15 = ((MR_Word) ((MR_hl_field(0, HeadVar__1_1, (MR_Integer) 5))));
    MR_Word ArgY7_16 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, (MR_Integer) 5))));

    succeeded = (ArgX1_3 == ArgY1_4);
    if (succeeded)
    {
      succeeded = (ArgX2_5 == ArgY2_6);
      if (succeeded)
      {
        succeeded = (ArgX3_7 == ArgY3_8);
        if (succeeded)
        {
          TypeInfo_19_19 = (MR_Word) (&hlds__const_struct_scalar_common_2[1]);
          succeeded = mercury__builtin__unify_2_p_0(TypeInfo_19_19, ((MR_Box) (ArgX4_9)), ((MR_Box) (ArgY4_10)));
          if (succeeded)
          {
            TypeInfo_20_20 = (MR_Word) (&hlds__const_struct_scalar_common_2[2]);
            succeeded = mercury__builtin__unify_2_p_0(TypeInfo_20_20, ((MR_Box) (ArgX5_11)), ((MR_Box) (ArgY5_12)));
            if (succeeded)
            {
              TypeInfo_21_21 = (MR_Word) (&hlds__const_struct_scalar_common_2[3]);
              succeeded = mercury__builtin__unify_2_p_0(TypeInfo_21_21, ((MR_Box) (ArgX6_13)), ((MR_Box) (ArgY6_14)));
              if (succeeded)
              {
                TypeInfo_22_22 = (MR_Word) (&hlds__const_struct_scalar_common_2[0]);
                succeeded = mercury__builtin__unify_2_p_0(TypeInfo_22_22, ((MR_Box) (ArgX7_15)), ((MR_Box) (ArgY7_16)));
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
hlds__const_struct____Compare____const_struct_arg_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3)
{
  MR_bool succeeded;
  MR_Integer CastX_17 = (MR_Integer) (HeadVar__2_2);
  MR_Integer CastY_18 = (MR_Integer) (HeadVar__3_3);

  succeeded = (CastX_17 == CastY_18);
  if (succeeded)
    *HeadVar__1_1 = (MR_Integer) 0;
  else
  if (((MR_tag((MR_Word) HeadVar__2_2)) == (MR_Integer) 0))
  {
    MR_Integer Var_22 = ((MR_Integer) ((MR_hl_field(0, HeadVar__2_2, (MR_Integer) 0))));

    if (((MR_tag((MR_Word) HeadVar__3_3)) == (MR_Integer) 0))
    {
      MR_Integer ArgY1_5 = ((MR_Integer) ((MR_hl_field(0, HeadVar__3_3, (MR_Integer) 0))));

      succeeded = (Var_22 < ArgY1_5);
      if (succeeded)
        *HeadVar__1_1 = (MR_Integer) 1;
      else
      {
        succeeded = (Var_22 > ArgY1_5);
        if (succeeded)
          *HeadVar__1_1 = (MR_Integer) 2;
        else
          *HeadVar__1_1 = (MR_Integer) 0;
      }
    }
    else
      *HeadVar__1_1 = (MR_Integer) 1;
  }
  else
  {
    MR_Word Var_23 = ((MR_Word) ((MR_hl_field(1, HeadVar__2_2, (MR_Integer) 1))));
    MR_Word Var_24 = ((MR_Word) ((MR_hl_field(1, HeadVar__2_2, (MR_Integer) 0))));

    if (((MR_tag((MR_Word) HeadVar__3_3)) == (MR_Integer) 0))
      *HeadVar__1_1 = (MR_Integer) 2;
    else
    {
      MR_Word ArgY1_13 = ((MR_Word) ((MR_hl_field(1, HeadVar__3_3, (MR_Integer) 0))));
      MR_Word ArgY2_16 = ((MR_Word) ((MR_hl_field(1, HeadVar__3_3, (MR_Integer) 1))));
      MR_Word SubResult1_14;

      parse_tree__prog_data____Compare____cons_id_0_0(&SubResult1_14, Var_24, ArgY1_13);
      succeeded = (SubResult1_14 != (MR_Integer) 0);
      if (succeeded)
        *HeadVar__1_1 = SubResult1_14;
      else
        parse_tree__prog_data____Compare____mer_type_0_0(HeadVar__1_1, Var_23, ArgY2_16);
    }
  }
}

MR_bool MR_CALL 
hlds__const_struct____Unify____const_struct_arg_0_0(
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
  if (((MR_tag((MR_Word) HeadVar__1_1)) == (MR_Integer) 0))
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
  else
  {
    MR_Word ArgX1_5 = ((MR_Word) ((MR_hl_field(1, HeadVar__1_1, (MR_Integer) 0))));
    MR_Word ArgY1_6;
    MR_Word ArgX2_7 = ((MR_Word) ((MR_hl_field(1, HeadVar__1_1, (MR_Integer) 1))));
    MR_Word ArgY2_8;

    succeeded = ((MR_tag((MR_Word) HeadVar__2_2)) == (MR_Integer) 1);
    if (succeeded)
    {
      ArgY1_6 = ((MR_Word) ((MR_hl_field(1, HeadVar__2_2, (MR_Integer) 0))));
      ArgY2_8 = ((MR_Word) ((MR_hl_field(1, HeadVar__2_2, (MR_Integer) 1))));
      succeeded = parse_tree__prog_data____Unify____cons_id_0_0(ArgX1_5, ArgY1_6);
      if (succeeded)
        succeeded = parse_tree__prog_data____Unify____mer_type_0_0(ArgX2_7, ArgY2_8);
    }
  }
  return succeeded;
}

void MR_CALL 
hlds__const_struct____Compare____const_struct_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3)
{
  MR_bool succeeded;
  MR_Integer CastX_18 = (MR_Integer) (HeadVar__2_2);
  MR_Integer CastY_19 = (MR_Integer) (HeadVar__3_3);

  succeeded = (CastX_18 == CastY_19);
  if (succeeded)
    *HeadVar__1_1 = (MR_Integer) 0;
  else
  {
    MR_Word ArgX1_4 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, (MR_Integer) 0))));
    MR_Word ArgY1_5 = ((MR_Word) ((MR_hl_field(0, HeadVar__3_3, (MR_Integer) 0))));
    MR_Word ArgX2_7 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, (MR_Integer) 1))));
    MR_Word ArgY2_8 = ((MR_Word) ((MR_hl_field(0, HeadVar__3_3, (MR_Integer) 1))));
    MR_Word ArgX3_10 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, (MR_Integer) 2))));
    MR_Word ArgY3_11 = ((MR_Word) ((MR_hl_field(0, HeadVar__3_3, (MR_Integer) 2))));
    MR_Word ArgX4_13 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, (MR_Integer) 3))));
    MR_Word ArgY4_14 = ((MR_Word) ((MR_hl_field(0, HeadVar__3_3, (MR_Integer) 3))));
    MR_Word ArgX5_16 = ((MR_Unsigned) ((MR_hl_field(0, HeadVar__2_2, (MR_Integer) 4))) & (MR_Integer) 1);
    MR_Word ArgY5_17 = ((MR_Unsigned) ((MR_hl_field(0, HeadVar__3_3, (MR_Integer) 4))) & (MR_Integer) 1);
    MR_Word SubResult1_6;

    parse_tree__prog_data____Compare____cons_id_0_0(&SubResult1_6, ArgX1_4, ArgY1_5);
    succeeded = (SubResult1_6 != (MR_Integer) 0);
    if (succeeded)
      *HeadVar__1_1 = SubResult1_6;
    else
    {
      MR_Word SubResult2_9;

      mercury__builtin__compare_3_p_0((MR_Word) (&hlds__const_struct_scalar_common_1[0]), &SubResult2_9, ((MR_Box) (ArgX2_7)), ((MR_Box) (ArgY2_8)));
      succeeded = (SubResult2_9 != (MR_Integer) 0);
      if (succeeded)
        *HeadVar__1_1 = SubResult2_9;
      else
      {
        MR_Word SubResult3_12;

        parse_tree__prog_data____Compare____mer_type_0_0(&SubResult3_12, ArgX3_10, ArgY3_11);
        succeeded = (SubResult3_12 != (MR_Integer) 0);
        if (succeeded)
          *HeadVar__1_1 = SubResult3_12;
        else
        {
          MR_Word SubResult4_15;

          parse_tree__prog_data____Compare____mer_inst_0_0(&SubResult4_15, ArgX4_13, ArgY4_14);
          succeeded = (SubResult4_15 != (MR_Integer) 0);
          if (succeeded)
            *HeadVar__1_1 = SubResult4_15;
          else
          {
            MR_Integer Var_25 = (MR_Integer) (ArgX5_16);
            MR_Integer Var_26 = (MR_Integer) (ArgY5_17);

            succeeded = (Var_25 < Var_26);
            if (succeeded)
              *HeadVar__1_1 = (MR_Integer) 1;
            else
            {
              succeeded = (Var_25 > Var_26);
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

MR_bool MR_CALL 
hlds__const_struct____Unify____const_struct_0_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2)
{
  MR_bool succeeded;
  MR_Integer CastX_13 = (MR_Integer) (HeadVar__1_1);
  MR_Integer CastY_14 = (MR_Integer) (HeadVar__2_2);

  succeeded = (CastX_13 == CastY_14);
  if (succeeded)
    succeeded = MR_TRUE;
  else
  {
    MR_Word TypeInfo_16_16;
    MR_Word ArgX1_3 = ((MR_Word) ((MR_hl_field(0, HeadVar__1_1, (MR_Integer) 0))));
    MR_Word ArgY1_4 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, (MR_Integer) 0))));
    MR_Word ArgX2_5 = ((MR_Word) ((MR_hl_field(0, HeadVar__1_1, (MR_Integer) 1))));
    MR_Word ArgY2_6 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, (MR_Integer) 1))));
    MR_Word ArgX3_7 = ((MR_Word) ((MR_hl_field(0, HeadVar__1_1, (MR_Integer) 2))));
    MR_Word ArgY3_8 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, (MR_Integer) 2))));
    MR_Word ArgX4_9 = ((MR_Word) ((MR_hl_field(0, HeadVar__1_1, (MR_Integer) 3))));
    MR_Word ArgY4_10 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, (MR_Integer) 3))));
    MR_Word ArgX5_11 = ((MR_Unsigned) ((MR_hl_field(0, HeadVar__1_1, (MR_Integer) 4))) & (MR_Integer) 1);
    MR_Word ArgY5_12 = ((MR_Unsigned) ((MR_hl_field(0, HeadVar__2_2, (MR_Integer) 4))) & (MR_Integer) 1);

    succeeded = parse_tree__prog_data____Unify____cons_id_0_0(ArgX1_3, ArgY1_4);
    if (succeeded)
    {
      TypeInfo_16_16 = (MR_Word) (&hlds__const_struct_scalar_common_1[0]);
      succeeded = mercury__builtin__unify_2_p_0(TypeInfo_16_16, ((MR_Box) (ArgX2_5)), ((MR_Box) (ArgY2_6)));
      if (succeeded)
      {
        succeeded = parse_tree__prog_data____Unify____mer_type_0_0(ArgX3_7, ArgY3_8);
        if (succeeded)
        {
          succeeded = parse_tree__prog_data____Unify____mer_inst_0_0(ArgX4_9, ArgY4_10);
          if (succeeded)
            succeeded = (ArgX5_11 == ArgY5_12);
        }
      }
    }
  }
  return succeeded;
}

void MR_CALL 
hlds__const_struct____Compare____const_instance_map_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3)
{
  MR_Word Cast_HeadVar1_4 = HeadVar__2_2;
  MR_Word Cast_HeadVar2_5 = HeadVar__3_3;

  mercury__builtin__compare_3_p_0((MR_Word) (&hlds__const_struct_scalar_common_2[0]), HeadVar__1_1, ((MR_Box) (Cast_HeadVar1_4)), ((MR_Box) (Cast_HeadVar2_5)));
}

MR_bool MR_CALL 
hlds__const_struct____Unify____const_instance_map_0_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2)
{
  MR_bool succeeded;
  MR_Word Cast_HeadVar1_3 = HeadVar__1_1;
  MR_Word Cast_HeadVar2_4 = HeadVar__2_2;

  succeeded = mercury__builtin__unify_2_p_0((MR_Word) (&hlds__const_struct_scalar_common_2[0]), ((MR_Box) (Cast_HeadVar1_3)), ((MR_Box) (Cast_HeadVar2_4)));
  return succeeded;
}

void MR_CALL 
hlds__const_struct____Compare____const_instance_id_0_0(
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
    MR_Integer ArgX1_4 = ((MR_Integer) ((MR_hl_field(0, HeadVar__2_2, (MR_Integer) 0))));
    MR_Integer ArgY1_5 = ((MR_Integer) ((MR_hl_field(0, HeadVar__3_3, (MR_Integer) 0))));
    MR_Word ArgX2_7 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, (MR_Integer) 1))));
    MR_Word ArgY2_8 = ((MR_Word) ((MR_hl_field(0, HeadVar__3_3, (MR_Integer) 1))));
    MR_Word ArgX3_10 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, (MR_Integer) 2))));
    MR_Word ArgY3_11 = ((MR_Word) ((MR_hl_field(0, HeadVar__3_3, (MR_Integer) 2))));
    MR_Word SubResult1_6;

    succeeded = (ArgX1_4 < ArgY1_5);
    if (succeeded)
    {
      SubResult1_6 = (MR_Integer) 1;
      succeeded = MR_TRUE;
    }
    else
    {
      succeeded = (ArgX1_4 > ArgY1_5);
      if (succeeded)
      {
        SubResult1_6 = (MR_Integer) 2;
        succeeded = MR_TRUE;
      }
      else
      {
        succeeded = MR_TRUE;
        succeeded = !(succeeded);
        if (succeeded)
        {
          SubResult1_6 = (MR_Integer) 0;
          succeeded = MR_TRUE;
        }
      }
    }
    if (succeeded)
      *HeadVar__1_1 = SubResult1_6;
    else
    {
      MR_Word SubResult2_9;

      parse_tree__prog_data____Compare____prog_constraint_0_0(&SubResult2_9, ArgX2_7, ArgY2_8);
      succeeded = (SubResult2_9 != (MR_Integer) 0);
      if (succeeded)
        *HeadVar__1_1 = SubResult2_9;
      else
        mercury__builtin__compare_3_p_0((MR_Word) (&hlds__const_struct_scalar_common_1[1]), HeadVar__1_1, ((MR_Box) (ArgX3_10)), ((MR_Box) (ArgY3_11)));
    }
  }
}

MR_bool MR_CALL 
hlds__const_struct____Unify____const_instance_id_0_0(
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
    MR_Word TypeInfo_12_12;
    MR_Integer ArgX1_3 = ((MR_Integer) ((MR_hl_field(0, HeadVar__1_1, (MR_Integer) 0))));
    MR_Integer ArgY1_4 = ((MR_Integer) ((MR_hl_field(0, HeadVar__2_2, (MR_Integer) 0))));
    MR_Word ArgX2_5 = ((MR_Word) ((MR_hl_field(0, HeadVar__1_1, (MR_Integer) 1))));
    MR_Word ArgY2_6 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, (MR_Integer) 1))));
    MR_Word ArgX3_7 = ((MR_Word) ((MR_hl_field(0, HeadVar__1_1, (MR_Integer) 2))));
    MR_Word ArgY3_8 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, (MR_Integer) 2))));

    succeeded = (ArgX1_3 == ArgY1_4);
    if (succeeded)
    {
      succeeded = parse_tree__prog_data____Unify____prog_constraint_0_0(ArgX2_5, ArgY2_6);
      if (succeeded)
      {
        TypeInfo_12_12 = (MR_Word) (&hlds__const_struct_scalar_common_1[1]);
        succeeded = mercury__builtin__unify_2_p_0(TypeInfo_12_12, ((MR_Box) (ArgX3_7)), ((MR_Box) (ArgY3_8)));
      }
    }
  }
  return succeeded;
}

static void MR_CALL 
hlds__const_struct____Compare____cons_proxy_struct_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3)
{
  MR_bool succeeded;
  MR_Integer CastX_18 = (MR_Integer) (HeadVar__2_2);
  MR_Integer CastY_19 = (MR_Integer) (HeadVar__3_3);

  succeeded = (CastX_18 == CastY_19);
  if (succeeded)
    *HeadVar__1_1 = (MR_Integer) 0;
  else
  {
    MR_String ArgX1_4 = ((MR_String) ((MR_hl_field(0, HeadVar__2_2, (MR_Integer) 0))));
    MR_String ArgY1_5 = ((MR_String) ((MR_hl_field(0, HeadVar__3_3, (MR_Integer) 0))));
    MR_Word ArgX2_7 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, (MR_Integer) 1))));
    MR_Word ArgY2_8 = ((MR_Word) ((MR_hl_field(0, HeadVar__3_3, (MR_Integer) 1))));
    MR_Word ArgX3_10 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, (MR_Integer) 2))));
    MR_Word ArgY3_11 = ((MR_Word) ((MR_hl_field(0, HeadVar__3_3, (MR_Integer) 2))));
    MR_Word ArgX4_13 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, (MR_Integer) 3))));
    MR_Word ArgY4_14 = ((MR_Word) ((MR_hl_field(0, HeadVar__3_3, (MR_Integer) 3))));
    MR_Word ArgX5_16 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, (MR_Integer) 4))));
    MR_Word ArgY5_17 = ((MR_Word) ((MR_hl_field(0, HeadVar__3_3, (MR_Integer) 4))));
    MR_Word SubResult1_6;

    mercury__private_builtin__builtin_compare_string_3_p_0(&SubResult1_6, ArgX1_4, ArgY1_5);
    succeeded = (SubResult1_6 != (MR_Integer) 0);
    if (succeeded)
      *HeadVar__1_1 = SubResult1_6;
    else
    {
      MR_Word SubResult2_9;

      mercury__builtin__compare_3_p_0((MR_Word) (&hlds__const_struct_scalar_common_1[0]), &SubResult2_9, ((MR_Box) (ArgX2_7)), ((MR_Box) (ArgY2_8)));
      succeeded = (SubResult2_9 != (MR_Integer) 0);
      if (succeeded)
        *HeadVar__1_1 = SubResult2_9;
      else
      {
        MR_Word SubResult3_12;

        parse_tree__prog_data____Compare____cons_id_0_0(&SubResult3_12, ArgX3_10, ArgY3_11);
        succeeded = (SubResult3_12 != (MR_Integer) 0);
        if (succeeded)
          *HeadVar__1_1 = SubResult3_12;
        else
        {
          MR_Word SubResult4_15;

          parse_tree__prog_data____Compare____mer_type_0_0(&SubResult4_15, ArgX4_13, ArgY4_14);
          succeeded = (SubResult4_15 != (MR_Integer) 0);
          if (succeeded)
            *HeadVar__1_1 = SubResult4_15;
          else
            parse_tree__prog_data____Compare____mer_inst_0_0(HeadVar__1_1, ArgX5_16, ArgY5_17);
        }
      }
    }
  }
}

static MR_bool MR_CALL 
hlds__const_struct____Unify____cons_proxy_struct_0_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2)
{
  MR_bool succeeded;
  MR_Integer CastX_13 = (MR_Integer) (HeadVar__1_1);
  MR_Integer CastY_14 = (MR_Integer) (HeadVar__2_2);

  succeeded = (CastX_13 == CastY_14);
  if (succeeded)
    succeeded = MR_TRUE;
  else
  {
    MR_Word TypeInfo_15_15;
    MR_String ArgX1_3 = ((MR_String) ((MR_hl_field(0, HeadVar__1_1, (MR_Integer) 0))));
    MR_String ArgY1_4 = ((MR_String) ((MR_hl_field(0, HeadVar__2_2, (MR_Integer) 0))));
    MR_Word ArgX2_5 = ((MR_Word) ((MR_hl_field(0, HeadVar__1_1, (MR_Integer) 1))));
    MR_Word ArgY2_6 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, (MR_Integer) 1))));
    MR_Word ArgX3_7 = ((MR_Word) ((MR_hl_field(0, HeadVar__1_1, (MR_Integer) 2))));
    MR_Word ArgY3_8 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, (MR_Integer) 2))));
    MR_Word ArgX4_9 = ((MR_Word) ((MR_hl_field(0, HeadVar__1_1, (MR_Integer) 3))));
    MR_Word ArgY4_10 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, (MR_Integer) 3))));
    MR_Word ArgX5_11 = ((MR_Word) ((MR_hl_field(0, HeadVar__1_1, (MR_Integer) 4))));
    MR_Word ArgY5_12 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, (MR_Integer) 4))));

    succeeded = (strcmp(ArgX1_3, ArgY1_4) == 0);
    if (succeeded)
    {
      TypeInfo_15_15 = (MR_Word) (&hlds__const_struct_scalar_common_1[0]);
      succeeded = mercury__builtin__unify_2_p_0(TypeInfo_15_15, ((MR_Box) (ArgX2_5)), ((MR_Box) (ArgY2_6)));
      if (succeeded)
      {
        succeeded = parse_tree__prog_data____Unify____cons_id_0_0(ArgX3_7, ArgY3_8);
        if (succeeded)
        {
          succeeded = parse_tree__prog_data____Unify____mer_type_0_0(ArgX4_9, ArgY4_10);
          if (succeeded)
            succeeded = parse_tree__prog_data____Unify____mer_inst_0_0(ArgX5_11, ArgY5_12);
        }
      }
    }
  }
  return succeeded;
}

void MR_CALL 
hlds__const_struct__const_struct_db_get_ground_term_enabled_2_p_0(
  MR_Word Db_3,
  MR_Word * X_4)
{
  *X_4 = ((MR_Unsigned) ((MR_hl_field(0, Db_3, (MR_Integer) 0))) & (MR_Integer) 1);
}

void MR_CALL 
hlds__const_struct__const_struct_db_get_poly_enabled_2_p_0(
  MR_Word Db_3,
  MR_Word * X_4)
{
  *X_4 = ((((MR_Unsigned) ((MR_hl_field(0, Db_3, (MR_Integer) 0))) >> 1)) & (MR_Integer) 1);
}

void MR_CALL 
hlds__const_struct__const_struct_db_get_structs_2_p_0(
  MR_Word Db_3,
  MR_Word * Structs_4)
{
  MR_Word NumMap_5 = ((MR_Word) ((MR_hl_field(0, Db_3, (MR_Integer) 4))));

  mercury__map__to_assoc_list_2_p_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_int_0), (MR_Word) (&hlds__const_struct__hlds__const_struct__type_ctor_info_const_struct_0), NumMap_5, Structs_4);
}

void MR_CALL 
hlds__const_struct__delete_const_struct_3_p_0(
  MR_Integer ConstNum_4,
  MR_Word STATE_VARIABLE_Db_0_25,
  MR_Word * STATE_VARIABLE_Db_26)
{
  MR_bool succeeded;
  MR_Word NumMap0_6 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Db_0_25, (MR_Integer) 4))));
  MR_Word ConstStruct_7;
  MR_Word NumMap_8;
  MR_Word ConsId_9;
  MR_Word Args_10;
  MR_Word Type_11;
  MR_Word Inst_12;
  MR_Word STATE_VARIABLE_Db_27_27;
  MR_Box conv0_ConstStruct_7;
  MR_Integer Var_43;
  MR_Word Var_44;
  MR_Word Var_45;
  MR_Word Var_47;
  MR_Unsigned packed_word_1;
  MR_Word SymName_14;

  mercury__map__det_remove_4_p_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_int_0), (MR_Word) (&hlds__const_struct__hlds__const_struct__type_ctor_info_const_struct_0), ((MR_Box) (ConstNum_4)), &conv0_ConstStruct_7, NumMap0_6, &NumMap_8);
  ConstStruct_7 = ((MR_Word) (conv0_ConstStruct_7));
  packed_word_1 = (MR_Unsigned) ((MR_hl_field(0, STATE_VARIABLE_Db_0_25, (MR_Integer) 0)));
  Var_43 = ((MR_Integer) ((MR_hl_field(0, STATE_VARIABLE_Db_0_25, (MR_Integer) 1))));
  Var_44 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Db_0_25, (MR_Integer) 2))));
  Var_45 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Db_0_25, (MR_Integer) 3))));
  Var_47 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Db_0_25, (MR_Integer) 5))));
  {
    STATE_VARIABLE_Db_27_27 = (MR_Word) MR_new_object(MR_Word, (6 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, STATE_VARIABLE_Db_27_27, 0) = (MR_Box) (packed_word_1);
    MR_hl_field(0, STATE_VARIABLE_Db_27_27, 1) = ((MR_Box) (Var_43));
    MR_hl_field(0, STATE_VARIABLE_Db_27_27, 2) = ((MR_Box) (Var_44));
    MR_hl_field(0, STATE_VARIABLE_Db_27_27, 3) = ((MR_Box) (Var_45));
    MR_hl_field(0, STATE_VARIABLE_Db_27_27, 4) = ((MR_Box) (NumMap_8));
    MR_hl_field(0, STATE_VARIABLE_Db_27_27, 5) = ((MR_Box) (Var_47));
  }
  ConsId_9 = ((MR_Word) ((MR_hl_field(0, ConstStruct_7, (MR_Integer) 0))));
  Args_10 = ((MR_Word) ((MR_hl_field(0, ConstStruct_7, (MR_Integer) 1))));
  Type_11 = ((MR_Word) ((MR_hl_field(0, ConstStruct_7, (MR_Integer) 2))));
  Inst_12 = ((MR_Word) ((MR_hl_field(0, ConstStruct_7, (MR_Integer) 3))));
  succeeded = ((((MR_tag((MR_Word) ConsId_9)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(3, ConsId_9, (MR_Integer) 0)))) == (MR_Integer) 2)));
  if (succeeded)
  {
    SymName_14 = ((MR_Word) ((MR_hl_field(3, ConsId_9, (MR_Integer) 1))));
    {
      MR_String Name_17;
      MR_Word ConsProxyStruct_18;
      MR_Word ConsProxyMap0_19;
      MR_Word ConsProxyMap_21;
      MR_Box conv1__ConstNum_20;
      MR_Integer Var_56;
      MR_Word Var_58;
      MR_Word Var_59;
      MR_Word Var_60;
      MR_Unsigned packed_word_4;

      Name_17 = mdbcomp__sym_name__unqualify_name_1_f_0(SymName_14);
      {
        ConsProxyStruct_18 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(0, ConsProxyStruct_18, 0) = ((MR_Box) (Name_17));
        MR_hl_field(0, ConsProxyStruct_18, 1) = ((MR_Box) (Args_10));
        MR_hl_field(0, ConsProxyStruct_18, 2) = ((MR_Box) (ConsId_9));
        MR_hl_field(0, ConsProxyStruct_18, 3) = ((MR_Box) (Type_11));
        MR_hl_field(0, ConsProxyStruct_18, 4) = ((MR_Box) (Inst_12));
      }
      ConsProxyMap0_19 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Db_27_27, (MR_Integer) 2))));
      mercury__map__det_remove_4_p_0((MR_Word) (&hlds__const_struct__hlds__const_struct__type_ctor_info_cons_proxy_struct_0), (MR_Word) (&mercury__builtin__builtin__type_ctor_info_int_0), ((MR_Box) (ConsProxyStruct_18)), &conv1__ConstNum_20, ConsProxyMap0_19, &ConsProxyMap_21);
      packed_word_4 = (MR_Unsigned) ((MR_hl_field(0, STATE_VARIABLE_Db_27_27, (MR_Integer) 0)));
      Var_56 = ((MR_Integer) ((MR_hl_field(0, STATE_VARIABLE_Db_27_27, (MR_Integer) 1))));
      Var_58 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Db_27_27, (MR_Integer) 3))));
      Var_59 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Db_27_27, (MR_Integer) 4))));
      Var_60 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Db_27_27, (MR_Integer) 5))));
      {
        MR_Word base;
        base = (MR_Word) MR_new_object(MR_Word, (6 * sizeof(MR_Word)), NULL, NULL);
        *STATE_VARIABLE_Db_26 = base;
        MR_hl_field(0, base, 0) = (MR_Box) (packed_word_4);
        MR_hl_field(0, base, 1) = ((MR_Box) (Var_56));
        MR_hl_field(0, base, 2) = ((MR_Box) (ConsProxyMap_21));
        MR_hl_field(0, base, 3) = ((MR_Box) (Var_58));
        MR_hl_field(0, base, 4) = ((MR_Box) (Var_59));
        MR_hl_field(0, base, 5) = ((MR_Box) (Var_60));
      }
    }
  }
  else
  {
    MR_Word NonConsProxyStruct_22;
    MR_Word NonConsProxyMap0_23;
    MR_Word NonConsProxyMap_24;
    MR_Box conv2__ConstNum_30;
    MR_Integer Var_69;
    MR_Word Var_70;
    MR_Word Var_72;
    MR_Word Var_73;
    MR_Unsigned packed_word_6;

    {
      NonConsProxyStruct_22 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(0, NonConsProxyStruct_22, 0) = ((MR_Box) (ConsId_9));
      MR_hl_field(0, NonConsProxyStruct_22, 1) = ((MR_Box) (Args_10));
      MR_hl_field(0, NonConsProxyStruct_22, 2) = ((MR_Box) (Type_11));
      MR_hl_field(0, NonConsProxyStruct_22, 3) = ((MR_Box) (Inst_12));
    }
    NonConsProxyMap0_23 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Db_27_27, (MR_Integer) 3))));
    mercury__map__det_remove_4_p_0((MR_Word) (&hlds__const_struct__hlds__const_struct__type_ctor_info_noncons_proxy_struct_0), (MR_Word) (&mercury__builtin__builtin__type_ctor_info_int_0), ((MR_Box) (NonConsProxyStruct_22)), &conv2__ConstNum_30, NonConsProxyMap0_23, &NonConsProxyMap_24);
    packed_word_6 = (MR_Unsigned) ((MR_hl_field(0, STATE_VARIABLE_Db_27_27, (MR_Integer) 0)));
    Var_69 = ((MR_Integer) ((MR_hl_field(0, STATE_VARIABLE_Db_27_27, (MR_Integer) 1))));
    Var_70 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Db_27_27, (MR_Integer) 2))));
    Var_72 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Db_27_27, (MR_Integer) 4))));
    Var_73 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Db_27_27, (MR_Integer) 5))));
    {
      MR_Word base;
      base = (MR_Word) MR_new_object(MR_Word, (6 * sizeof(MR_Word)), NULL, NULL);
      *STATE_VARIABLE_Db_26 = base;
      MR_hl_field(0, base, 0) = (MR_Box) (packed_word_6);
      MR_hl_field(0, base, 1) = ((MR_Box) (Var_69));
      MR_hl_field(0, base, 2) = ((MR_Box) (Var_70));
      MR_hl_field(0, base, 3) = ((MR_Box) (NonConsProxyMap_24));
      MR_hl_field(0, base, 4) = ((MR_Box) (Var_72));
      MR_hl_field(0, base, 5) = ((MR_Box) (Var_73));
    }
  }
}

void MR_CALL 
hlds__const_struct__insert_constant_instance_4_p_0(
  MR_Word InstanceId_5,
  MR_Integer ConstNum_6,
  MR_Word STATE_VARIABLE_Db_0_10,
  MR_Word * STATE_VARIABLE_Db_11)
{
  MR_Word InstanceMap0_8 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Db_0_10, (MR_Integer) 5))));
  MR_Word InstanceMap_9;
  MR_Integer Var_22;
  MR_Word Var_23;
  MR_Word Var_24;
  MR_Word Var_25;
  MR_Unsigned packed_word_1;

  mercury__map__det_insert_4_p_0((MR_Word) (&hlds__const_struct__hlds__const_struct__type_ctor_info_const_instance_id_0), (MR_Word) (&mercury__builtin__builtin__type_ctor_info_int_0), ((MR_Box) (InstanceId_5)), ((MR_Box) (ConstNum_6)), InstanceMap0_8, &InstanceMap_9);
  packed_word_1 = (MR_Unsigned) ((MR_hl_field(0, STATE_VARIABLE_Db_0_10, (MR_Integer) 0)));
  Var_22 = ((MR_Integer) ((MR_hl_field(0, STATE_VARIABLE_Db_0_10, (MR_Integer) 1))));
  Var_23 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Db_0_10, (MR_Integer) 2))));
  Var_24 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Db_0_10, (MR_Integer) 3))));
  Var_25 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Db_0_10, (MR_Integer) 4))));
  {
    MR_Word base;
    base = (MR_Word) MR_new_object(MR_Word, (6 * sizeof(MR_Word)), NULL, NULL);
    *STATE_VARIABLE_Db_11 = base;
    MR_hl_field(0, base, 0) = (MR_Box) (packed_word_1);
    MR_hl_field(0, base, 1) = ((MR_Box) (Var_22));
    MR_hl_field(0, base, 2) = ((MR_Box) (Var_23));
    MR_hl_field(0, base, 3) = ((MR_Box) (Var_24));
    MR_hl_field(0, base, 4) = ((MR_Box) (Var_25));
    MR_hl_field(0, base, 5) = ((MR_Box) (InstanceMap_9));
  }
}

MR_bool MR_CALL 
hlds__const_struct__search_for_constant_instance_3_p_0(
  MR_Word Db_4,
  MR_Word InstanceId_5,
  MR_Integer * ConstNum_6)
{
  MR_bool succeeded;
  MR_Word InstanceMap_7 = ((MR_Word) ((MR_hl_field(0, Db_4, (MR_Integer) 5))));
  MR_Box conv0_ConstNum_6;

  succeeded = mercury__map__search_3_p_0((MR_Word) (&hlds__const_struct__hlds__const_struct__type_ctor_info_const_instance_id_0), (MR_Word) (&mercury__builtin__builtin__type_ctor_info_int_0), InstanceMap_7, ((MR_Box) (InstanceId_5)), &conv0_ConstNum_6);
  if (succeeded)
  {
    *ConstNum_6 = ((MR_Integer) (conv0_ConstNum_6));
    succeeded = MR_TRUE;
  }
  return succeeded;
}

void MR_CALL 
hlds__const_struct__lookup_const_struct_num_3_p_0(
  MR_Word Db_4,
  MR_Integer ConstNum_5,
  MR_Word * ConstStruct_6)
{
  MR_Word NumMap_7 = ((MR_Word) ((MR_hl_field(0, Db_4, (MR_Integer) 4))));
  MR_Box conv0_ConstStruct_6;

  mercury__map__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_108_111_111_107_117_112_95_95_91_75_32_61_32_105_110_116_93_95_48_95_49_3_p_0((MR_Word) (&hlds__const_struct__hlds__const_struct__type_ctor_info_const_struct_0), NumMap_7, ConstNum_5, &conv0_ConstStruct_6);
  *ConstStruct_6 = ((MR_Word) (conv0_ConstStruct_6));
}

void MR_CALL 
hlds__const_struct__lookup_insert_const_struct_4_p_0(
  MR_Word ConstStruct_5,
  MR_Integer * ConstNum_6,
  MR_Word STATE_VARIABLE_Db_0_28,
  MR_Word * STATE_VARIABLE_Db_29)
{
  MR_bool succeeded;
  MR_Word Enabled_8 = ((((MR_Unsigned) ((MR_hl_field(0, STATE_VARIABLE_Db_0_28, (MR_Integer) 0))) >> 1)) & (MR_Integer) 1);

  switch (Enabled_8) {
    default: /*NOTREACHED*/ MR_assert(0);
    case (MR_Integer) 1:
      {
        mercury__require__unexpected_2_p_0((MR_String) "predicate \140hlds.const_struct.lookup_insert_const_struct\'/4", (MR_String) "not enabled");
        return;
      }
      break;
    case (MR_Integer) 0:
      {
        MR_Word ConsId_9 = ((MR_Word) ((MR_hl_field(0, ConstStruct_5, (MR_Integer) 0))));
        MR_Word Args_10 = ((MR_Word) ((MR_hl_field(0, ConstStruct_5, (MR_Integer) 1))));
        MR_Word Type_11 = ((MR_Word) ((MR_hl_field(0, ConstStruct_5, (MR_Integer) 2))));
        MR_Word Inst_12 = ((MR_Word) ((MR_hl_field(0, ConstStruct_5, (MR_Integer) 3))));
        MR_Word DefinedWhere_13 = ((MR_Unsigned) ((MR_hl_field(0, ConstStruct_5, (MR_Integer) 4))) & (MR_Integer) 1);
        MR_Word SymName_14;

        succeeded = ((((MR_tag((MR_Word) ConsId_9)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(3, ConsId_9, (MR_Integer) 0)))) == (MR_Integer) 2)));
        if (succeeded)
        {
          SymName_14 = ((MR_Word) ((MR_hl_field(3, ConsId_9, (MR_Integer) 1))));
          {
            MR_String Name_17;
            MR_Word ConsProxyStruct_18;
            MR_Integer NextConstNum_19;
            MR_Word ConsProxyMap0_20;
            MR_Word MaybeOldConstNum_21;
            MR_Word ConsProxyMap_22;

            Name_17 = mdbcomp__sym_name__unqualify_name_1_f_0(SymName_14);
            {
              ConsProxyStruct_18 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
              MR_hl_field(0, ConsProxyStruct_18, 0) = ((MR_Box) (Name_17));
              MR_hl_field(0, ConsProxyStruct_18, 1) = ((MR_Box) (Args_10));
              MR_hl_field(0, ConsProxyStruct_18, 2) = ((MR_Box) (ConsId_9));
              MR_hl_field(0, ConsProxyStruct_18, 3) = ((MR_Box) (Type_11));
              MR_hl_field(0, ConsProxyStruct_18, 4) = ((MR_Box) (Inst_12));
            }
            NextConstNum_19 = ((MR_Integer) ((MR_hl_field(0, STATE_VARIABLE_Db_0_28, (MR_Integer) 1))));
            ConsProxyMap0_20 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Db_0_28, (MR_Integer) 2))));
            mercury__map__search_insert_5_p_0((MR_Word) (&hlds__const_struct__hlds__const_struct__type_ctor_info_cons_proxy_struct_0), (MR_Word) (&mercury__builtin__builtin__type_ctor_info_int_0), ((MR_Box) (ConsProxyStruct_18)), ((MR_Box) (NextConstNum_19)), &MaybeOldConstNum_21, ConsProxyMap0_20, &ConsProxyMap_22);
            if ((MaybeOldConstNum_21 == (MR_Word) ((MR_Unsigned) 0U)))
            {
              MR_Word NumMap0_23;
              MR_Word NumMap_24;
              MR_Integer Var_33;
              MR_Word Var_84;
              MR_Word Var_86;
              MR_Unsigned packed_word_4;

              *ConstNum_6 = NextConstNum_19;
              NumMap0_23 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Db_0_28, (MR_Integer) 4))));
              mercury__map__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_100_101_116_95_105_110_115_101_114_116_95_95_91_75_32_61_32_105_110_116_93_95_48_95_49_4_p_0((MR_Word) (&hlds__const_struct__hlds__const_struct__type_ctor_info_const_struct_0), *ConstNum_6, ((MR_Box) (ConstStruct_5)), NumMap0_23, &NumMap_24);
              Var_33 = (MR_Integer) ((MR_Unsigned) NextConstNum_19 + (MR_Unsigned) 1);
              packed_word_4 = (MR_Unsigned) ((MR_hl_field(0, STATE_VARIABLE_Db_0_28, (MR_Integer) 0)));
              Var_84 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Db_0_28, (MR_Integer) 3))));
              Var_86 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Db_0_28, (MR_Integer) 5))));
              {
                MR_Word base;
                base = (MR_Word) MR_new_object(MR_Word, (6 * sizeof(MR_Word)), NULL, NULL);
                *STATE_VARIABLE_Db_29 = base;
                MR_hl_field(0, base, 0) = (MR_Box) (packed_word_4);
                MR_hl_field(0, base, 1) = ((MR_Box) (Var_33));
                MR_hl_field(0, base, 2) = ((MR_Box) (ConsProxyMap_22));
                MR_hl_field(0, base, 3) = ((MR_Box) (Var_84));
                MR_hl_field(0, base, 4) = ((MR_Box) (NumMap_24));
                MR_hl_field(0, base, 5) = ((MR_Box) (Var_86));
              }
            }
            else
            {
              *ConstNum_6 = ((MR_Integer) ((MR_hl_field(1, MaybeOldConstNum_21, (MR_Integer) 0))));
              hlds__const_struct__maybe_update_defined_where_4_p_0(DefinedWhere_13, *ConstNum_6, STATE_VARIABLE_Db_0_28, STATE_VARIABLE_Db_29);
            }
          }
        }
        else
        {
          MR_Word NonConsProxyStruct_25;
          MR_Word NonConsProxyMap0_26;
          MR_Word NonConsProxyMap_27;
          MR_Integer NextConstNum_48;
          MR_Word MaybeOldConstNum_49;

          {
            NonConsProxyStruct_25 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
            MR_hl_field(0, NonConsProxyStruct_25, 0) = ((MR_Box) (ConsId_9));
            MR_hl_field(0, NonConsProxyStruct_25, 1) = ((MR_Box) (Args_10));
            MR_hl_field(0, NonConsProxyStruct_25, 2) = ((MR_Box) (Type_11));
            MR_hl_field(0, NonConsProxyStruct_25, 3) = ((MR_Box) (Inst_12));
          }
          NextConstNum_48 = ((MR_Integer) ((MR_hl_field(0, STATE_VARIABLE_Db_0_28, (MR_Integer) 1))));
          hlds__const_struct__const_struct_db_get_noncons_proxy_map_2_p_0(STATE_VARIABLE_Db_0_28, &NonConsProxyMap0_26);
          mercury__map__search_insert_5_p_0((MR_Word) (&hlds__const_struct__hlds__const_struct__type_ctor_info_noncons_proxy_struct_0), (MR_Word) (&mercury__builtin__builtin__type_ctor_info_int_0), ((MR_Box) (NonConsProxyStruct_25)), ((MR_Box) (NextConstNum_48)), &MaybeOldConstNum_49, NonConsProxyMap0_26, &NonConsProxyMap_27);
          if ((MaybeOldConstNum_49 == (MR_Word) ((MR_Unsigned) 0U)))
          {
            MR_Integer Var_39;
            MR_Word STATE_VARIABLE_Db_40_40;
            MR_Word STATE_VARIABLE_Db_42_42;
            MR_Word NumMap0_44;
            MR_Word NumMap_45;

            *ConstNum_6 = NextConstNum_48;
            hlds__const_struct__const_struct_db_get_num_map_2_p_0(STATE_VARIABLE_Db_0_28, &NumMap0_44);
            mercury__map__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_100_101_116_95_105_110_115_101_114_116_95_95_91_75_32_61_32_105_110_116_93_95_48_95_49_4_p_0((MR_Word) (&hlds__const_struct__hlds__const_struct__type_ctor_info_const_struct_0), *ConstNum_6, ((MR_Box) (ConstStruct_5)), NumMap0_44, &NumMap_45);
            Var_39 = (MR_Integer) ((MR_Unsigned) NextConstNum_48 + (MR_Unsigned) 1);
            hlds__const_struct__const_struct_db_set_next_num_3_p_0(Var_39, STATE_VARIABLE_Db_0_28, &STATE_VARIABLE_Db_40_40);
            hlds__const_struct__const_struct_db_set_noncons_proxy_map_3_p_0(NonConsProxyMap_27, STATE_VARIABLE_Db_40_40, &STATE_VARIABLE_Db_42_42);
            hlds__const_struct__const_struct_db_set_num_map_3_p_0(NumMap_45, STATE_VARIABLE_Db_42_42, STATE_VARIABLE_Db_29);
          }
          else
          {
            *ConstNum_6 = ((MR_Integer) ((MR_hl_field(1, MaybeOldConstNum_49, (MR_Integer) 0))));
            hlds__const_struct__maybe_update_defined_where_4_p_0(DefinedWhere_13, *ConstNum_6, STATE_VARIABLE_Db_0_28, STATE_VARIABLE_Db_29);
          }
        }
      }
      break;
  }
}

static void MR_CALL 
hlds__const_struct__const_struct_db_set_num_map_3_p_0(
  MR_Word NumMap_4,
  MR_Word STATE_VARIABLE_Db_0_6,
  MR_Word * STATE_VARIABLE_Db_7)
{
  MR_Integer Var_10 = ((MR_Integer) ((MR_hl_field(0, STATE_VARIABLE_Db_0_6, (MR_Integer) 1))));
  MR_Word Var_11 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Db_0_6, (MR_Integer) 2))));
  MR_Word Var_12 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Db_0_6, (MR_Integer) 3))));
  MR_Word Var_14 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Db_0_6, (MR_Integer) 5))));
  MR_Unsigned packed_word_0 = (MR_Unsigned) ((MR_hl_field(0, STATE_VARIABLE_Db_0_6, (MR_Integer) 0)));

  {
    MR_Word base;
    base = (MR_Word) MR_new_object(MR_Word, (6 * sizeof(MR_Word)), NULL, NULL);
    *STATE_VARIABLE_Db_7 = base;
    MR_hl_field(0, base, 0) = (MR_Box) (packed_word_0);
    MR_hl_field(0, base, 1) = ((MR_Box) (Var_10));
    MR_hl_field(0, base, 2) = ((MR_Box) (Var_11));
    MR_hl_field(0, base, 3) = ((MR_Box) (Var_12));
    MR_hl_field(0, base, 4) = ((MR_Box) (NumMap_4));
    MR_hl_field(0, base, 5) = ((MR_Box) (Var_14));
  }
}

static void MR_CALL 
hlds__const_struct__const_struct_db_set_noncons_proxy_map_3_p_0(
  MR_Word NonConsProxyMap_4,
  MR_Word STATE_VARIABLE_Db_0_6,
  MR_Word * STATE_VARIABLE_Db_7)
{
  MR_Integer Var_10 = ((MR_Integer) ((MR_hl_field(0, STATE_VARIABLE_Db_0_6, (MR_Integer) 1))));
  MR_Word Var_11 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Db_0_6, (MR_Integer) 2))));
  MR_Word Var_13 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Db_0_6, (MR_Integer) 4))));
  MR_Word Var_14 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Db_0_6, (MR_Integer) 5))));
  MR_Unsigned packed_word_0 = (MR_Unsigned) ((MR_hl_field(0, STATE_VARIABLE_Db_0_6, (MR_Integer) 0)));

  {
    MR_Word base;
    base = (MR_Word) MR_new_object(MR_Word, (6 * sizeof(MR_Word)), NULL, NULL);
    *STATE_VARIABLE_Db_7 = base;
    MR_hl_field(0, base, 0) = (MR_Box) (packed_word_0);
    MR_hl_field(0, base, 1) = ((MR_Box) (Var_10));
    MR_hl_field(0, base, 2) = ((MR_Box) (Var_11));
    MR_hl_field(0, base, 3) = ((MR_Box) (NonConsProxyMap_4));
    MR_hl_field(0, base, 4) = ((MR_Box) (Var_13));
    MR_hl_field(0, base, 5) = ((MR_Box) (Var_14));
  }
}

static void MR_CALL 
hlds__const_struct__const_struct_db_set_next_num_3_p_0(
  MR_Integer Num_4,
  MR_Word STATE_VARIABLE_Db_0_6,
  MR_Word * STATE_VARIABLE_Db_7)
{
  MR_Word Var_11 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Db_0_6, (MR_Integer) 2))));
  MR_Word Var_12 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Db_0_6, (MR_Integer) 3))));
  MR_Word Var_13 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Db_0_6, (MR_Integer) 4))));
  MR_Word Var_14 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Db_0_6, (MR_Integer) 5))));
  MR_Unsigned packed_word_0 = (MR_Unsigned) ((MR_hl_field(0, STATE_VARIABLE_Db_0_6, (MR_Integer) 0)));

  {
    MR_Word base;
    base = (MR_Word) MR_new_object(MR_Word, (6 * sizeof(MR_Word)), NULL, NULL);
    *STATE_VARIABLE_Db_7 = base;
    MR_hl_field(0, base, 0) = (MR_Box) (packed_word_0);
    MR_hl_field(0, base, 1) = ((MR_Box) (Num_4));
    MR_hl_field(0, base, 2) = ((MR_Box) (Var_11));
    MR_hl_field(0, base, 3) = ((MR_Box) (Var_12));
    MR_hl_field(0, base, 4) = ((MR_Box) (Var_13));
    MR_hl_field(0, base, 5) = ((MR_Box) (Var_14));
  }
}

static void MR_CALL 
hlds__const_struct__const_struct_db_get_num_map_2_p_0(
  MR_Word Db_3,
  MR_Word * X_4)
{
  *X_4 = ((MR_Word) ((MR_hl_field(0, Db_3, (MR_Integer) 4))));
}

static void MR_CALL 
hlds__const_struct__const_struct_db_get_noncons_proxy_map_2_p_0(
  MR_Word Db_3,
  MR_Word * X_4)
{
  *X_4 = ((MR_Word) ((MR_hl_field(0, Db_3, (MR_Integer) 3))));
}

static void MR_CALL 
hlds__const_struct__maybe_update_defined_where_4_p_0(
  MR_Word DefinedWhere_5,
  MR_Integer ConstNum_6,
  MR_Word STATE_VARIABLE_Db_0_13,
  MR_Word * STATE_VARIABLE_Db_14)
{
  MR_bool succeeded;
  MR_Word NumMap0_8 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Db_0_13, (MR_Integer) 4))));
  MR_Word ConstStruct0_9;
  MR_Word DefinedWhere0_10;
  MR_Box conv0_ConstStruct0_9;

  mercury__map__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_108_111_111_107_117_112_95_95_91_75_32_61_32_105_110_116_93_95_48_95_49_3_p_0((MR_Word) (&hlds__const_struct__hlds__const_struct__type_ctor_info_const_struct_0), NumMap0_8, ConstNum_6, &conv0_ConstStruct0_9);
  ConstStruct0_9 = ((MR_Word) (conv0_ConstStruct0_9));
  DefinedWhere0_10 = ((MR_Unsigned) ((MR_hl_field(0, ConstStruct0_9, (MR_Integer) 4))) & (MR_Integer) 1);
  succeeded = (DefinedWhere_5 == (MR_Integer) 0);
  if (succeeded)
    succeeded = (DefinedWhere0_10 == (MR_Integer) 1);
  if (succeeded)
  {
    MR_Word ConstStruct_11;
    MR_Word NumMap_12;
    MR_Word Var_20 = ((MR_Word) ((MR_hl_field(0, ConstStruct0_9, (MR_Integer) 0))));
    MR_Word Var_21 = ((MR_Word) ((MR_hl_field(0, ConstStruct0_9, (MR_Integer) 1))));
    MR_Word Var_22 = ((MR_Word) ((MR_hl_field(0, ConstStruct0_9, (MR_Integer) 2))));
    MR_Word Var_23 = ((MR_Word) ((MR_hl_field(0, ConstStruct0_9, (MR_Integer) 3))));
    MR_Integer Var_35;
    MR_Word Var_36;
    MR_Word Var_37;
    MR_Word Var_39;
    MR_Unsigned packed_word_3;

    {
      ConstStruct_11 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(0, ConstStruct_11, 0) = ((MR_Box) (Var_20));
      MR_hl_field(0, ConstStruct_11, 1) = ((MR_Box) (Var_21));
      MR_hl_field(0, ConstStruct_11, 2) = ((MR_Box) (Var_22));
      MR_hl_field(0, ConstStruct_11, 3) = ((MR_Box) (Var_23));
      MR_hl_field(0, ConstStruct_11, 4) = (MR_Box) ((MR_Unsigned) (DefinedWhere_5));
    }
    mercury__map__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_100_101_116_95_117_112_100_97_116_101_95_95_91_75_32_61_32_105_110_116_93_95_48_95_49_4_p_0((MR_Word) (&hlds__const_struct__hlds__const_struct__type_ctor_info_const_struct_0), ConstNum_6, ((MR_Box) (ConstStruct_11)), NumMap0_8, &NumMap_12);
    packed_word_3 = (MR_Unsigned) ((MR_hl_field(0, STATE_VARIABLE_Db_0_13, (MR_Integer) 0)));
    Var_35 = ((MR_Integer) ((MR_hl_field(0, STATE_VARIABLE_Db_0_13, (MR_Integer) 1))));
    Var_36 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Db_0_13, (MR_Integer) 2))));
    Var_37 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Db_0_13, (MR_Integer) 3))));
    Var_39 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Db_0_13, (MR_Integer) 5))));
    {
      MR_Word base;
      base = (MR_Word) MR_new_object(MR_Word, (6 * sizeof(MR_Word)), NULL, NULL);
      *STATE_VARIABLE_Db_14 = base;
      MR_hl_field(0, base, 0) = (MR_Box) (packed_word_3);
      MR_hl_field(0, base, 1) = ((MR_Box) (Var_35));
      MR_hl_field(0, base, 2) = ((MR_Box) (Var_36));
      MR_hl_field(0, base, 3) = ((MR_Box) (Var_37));
      MR_hl_field(0, base, 4) = ((MR_Box) (NumMap_12));
      MR_hl_field(0, base, 5) = ((MR_Box) (Var_39));
    }
  }
  else
    *STATE_VARIABLE_Db_14 = STATE_VARIABLE_Db_0_13;
}

void MR_CALL 
hlds__const_struct__const_struct_db_init_2_p_0(
  MR_Word Globals_3,
  MR_Word * Db_4)
{
  MR_Word OptTuple_5;
  MR_Word PolyEnabled_6;
  MR_Word GroundTermEnabled_7;
  MR_Word Var_9;
  MR_Word Var_10;
  MR_Word Var_11;
  MR_Word Var_12;

  libs__globals__get_opt_tuple_2_p_0(Globals_3, &OptTuple_5);
  PolyEnabled_6 = ((((MR_Unsigned) ((MR_hl_field(0, OptTuple_5, (MR_Integer) 0))) >> 26)) & (MR_Integer) 1);
  GroundTermEnabled_7 = ((((MR_Unsigned) ((MR_hl_field(0, OptTuple_5, (MR_Integer) 0))) >> 25)) & (MR_Integer) 1);
  Var_9 = mercury__map__init_0_f_0((MR_Word) (&hlds__const_struct__hlds__const_struct__type_ctor_info_cons_proxy_struct_0), (MR_Word) (&mercury__builtin__builtin__type_ctor_info_int_0));
  Var_10 = mercury__map__init_0_f_0((MR_Word) (&hlds__const_struct__hlds__const_struct__type_ctor_info_noncons_proxy_struct_0), (MR_Word) (&mercury__builtin__builtin__type_ctor_info_int_0));
  Var_11 = mercury__map__init_0_f_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_int_0), (MR_Word) (&hlds__const_struct__hlds__const_struct__type_ctor_info_const_struct_0));
  Var_12 = mercury__map__init_0_f_0((MR_Word) (&hlds__const_struct__hlds__const_struct__type_ctor_info_const_instance_id_0), (MR_Word) (&mercury__builtin__builtin__type_ctor_info_int_0));
  {
    MR_Word base;
    base = (MR_Word) MR_new_object(MR_Word, (6 * sizeof(MR_Word)), NULL, NULL);
    *Db_4 = base;
    MR_hl_field(0, base, 0) = (MR_Box) (((((MR_Unsigned) (PolyEnabled_6) << 1)) | (MR_Unsigned) (GroundTermEnabled_7)));
    MR_hl_field(0, base, 1) = ((MR_Box) ((MR_Integer) 0));
    MR_hl_field(0, base, 2) = ((MR_Box) (Var_9));
    MR_hl_field(0, base, 3) = ((MR_Box) (Var_10));
    MR_hl_field(0, base, 4) = ((MR_Box) (Var_11));
    MR_hl_field(0, base, 5) = ((MR_Box) (Var_12));
  }
}

static MR_bool MR_CALL 
hlds__const_struct____Unify____cons_proxy_struct_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  MR_bool succeeded;

  succeeded = hlds__const_struct____Unify____cons_proxy_struct_0_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
  return succeeded;
}

static void MR_CALL 
hlds__const_struct____Compare____cons_proxy_struct_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  MR_Word conv0_HeadVar__1_1;

  hlds__const_struct____Compare____cons_proxy_struct_0_0(&conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
  *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
}

static MR_bool MR_CALL 
hlds__const_struct____Unify____const_instance_id_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  MR_bool succeeded;

  succeeded = hlds__const_struct____Unify____const_instance_id_0_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
  return succeeded;
}

static void MR_CALL 
hlds__const_struct____Compare____const_instance_id_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  MR_Word conv0_HeadVar__1_1;

  hlds__const_struct____Compare____const_instance_id_0_0(&conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
  *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
}

static MR_bool MR_CALL 
hlds__const_struct____Unify____const_instance_map_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  MR_bool succeeded;

  succeeded = hlds__const_struct____Unify____const_instance_map_0_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
  return succeeded;
}

static void MR_CALL 
hlds__const_struct____Compare____const_instance_map_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  MR_Word conv0_HeadVar__1_1;

  hlds__const_struct____Compare____const_instance_map_0_0(&conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
  *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
}

static MR_bool MR_CALL 
hlds__const_struct____Unify____const_struct_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  MR_bool succeeded;

  succeeded = hlds__const_struct____Unify____const_struct_0_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
  return succeeded;
}

static void MR_CALL 
hlds__const_struct____Compare____const_struct_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  MR_Word conv0_HeadVar__1_1;

  hlds__const_struct____Compare____const_struct_0_0(&conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
  *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
}

static MR_bool MR_CALL 
hlds__const_struct____Unify____const_struct_arg_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  MR_bool succeeded;

  succeeded = hlds__const_struct____Unify____const_struct_arg_0_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
  return succeeded;
}

static void MR_CALL 
hlds__const_struct____Compare____const_struct_arg_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  MR_Word conv0_HeadVar__1_1;

  hlds__const_struct____Compare____const_struct_arg_0_0(&conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
  *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
}

static MR_bool MR_CALL 
hlds__const_struct____Unify____const_struct_db_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  MR_bool succeeded;

  succeeded = hlds__const_struct____Unify____const_struct_db_0_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
  return succeeded;
}

static void MR_CALL 
hlds__const_struct____Compare____const_struct_db_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  MR_Word conv0_HeadVar__1_1;

  hlds__const_struct____Compare____const_struct_db_0_0(&conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
  *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
}

static MR_bool MR_CALL 
hlds__const_struct____Unify____defined_where_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  MR_bool succeeded;

  succeeded = hlds__const_struct____Unify____defined_where_0_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
  return succeeded;
}

static void MR_CALL 
hlds__const_struct____Compare____defined_where_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  MR_Word conv0_HeadVar__1_1;

  hlds__const_struct____Compare____defined_where_0_0(&conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
  *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
}

static MR_bool MR_CALL 
hlds__const_struct____Unify____noncons_proxy_struct_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  MR_bool succeeded;

  succeeded = hlds__const_struct____Unify____noncons_proxy_struct_0_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
  return succeeded;
}

static void MR_CALL 
hlds__const_struct____Compare____noncons_proxy_struct_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  MR_Word conv0_HeadVar__1_1;

  hlds__const_struct____Compare____noncons_proxy_struct_0_0(&conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
  *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
}

void mercury__hlds__const_struct__init(void)
{
}

void mercury__hlds__const_struct__init_type_tables(void)
{
	static MR_bool initialised = MR_FALSE;
	if (initialised) return;
	initialised = MR_TRUE;

	MR_register_type_ctor_info(&hlds__const_struct__hlds__const_struct__type_ctor_info_cons_proxy_struct_0);
	MR_register_type_ctor_info(&hlds__const_struct__hlds__const_struct__type_ctor_info_const_instance_id_0);
	MR_register_type_ctor_info(&hlds__const_struct__hlds__const_struct__type_ctor_info_const_instance_map_0);
	MR_register_type_ctor_info(&hlds__const_struct__hlds__const_struct__type_ctor_info_const_struct_0);
	MR_register_type_ctor_info(&hlds__const_struct__hlds__const_struct__type_ctor_info_const_struct_arg_0);
	MR_register_type_ctor_info(&hlds__const_struct__hlds__const_struct__type_ctor_info_const_struct_db_0);
	MR_register_type_ctor_info(&hlds__const_struct__hlds__const_struct__type_ctor_info_defined_where_0);
	MR_register_type_ctor_info(&hlds__const_struct__hlds__const_struct__type_ctor_info_noncons_proxy_struct_0);
}

void mercury__hlds__const_struct__init_debugger(void)
{
	MR_fatal_error("debugger initialization in MLDS grade");
}

// Ensure everything is compiled with the same grade.
const char *mercury__hlds__const_struct__grade_check(void)
{
    return &MR_GRADE_VAR;
}

// :- end_module hlds.const_struct.
