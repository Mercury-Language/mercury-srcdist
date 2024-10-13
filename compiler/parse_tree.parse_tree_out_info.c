/*
** Automatically generated from `parse_tree_out_info.m'
** by the Mercury compiler,
** version rotd-2024-10-13
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


// :- module parse_tree.parse_tree_out_info.
// :- implementation.

/*
INIT mercury__parse_tree__parse_tree_out_info__init
ENDINIT
*/

#include "parse_tree.parse_tree_out_info.mih"


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
#include "libs.indent.mih"
#include "libs.op_mode.mih"
#include "libs.optimization_options.mih"
#include "libs.options.mih"
#include "libs.trace_params.mih"
#include "mdbcomp.feedback.mih"
#include "mdbcomp.prim_data.mih"
#include "mdbcomp.sym_name.mih"
#include "parse_tree.error_spec.mih"
#include "parse_tree.maybe_error.mih"
#include "parse_tree.parse_tree_out_misc.mih"
#include "parse_tree.parse_tree_output.mih"
#include "parse_tree.prog_data.mih"
#include "parse_tree.prog_data_pragma.mih"
#include "parse_tree.prog_item.mih"
#include "parse_tree.set_of_var.mih"
#include "string.builder.mih"




static const MR_EnumFunctorDesc parse_tree__parse_tree_out_info__parse_tree__parse_tree_out_info__enum_functor_desc_maybe_output_line_numbers_0_0;

static const MR_EnumFunctorDesc parse_tree__parse_tree_out_info__parse_tree__parse_tree_out_info__enum_functor_desc_maybe_output_line_numbers_0_1;

static const MR_EnumFunctorDescPtr parse_tree__parse_tree_out_info__parse_tree__parse_tree_out_info__enum_ordinal_ordered_maybe_output_line_numbers_0[2];

static const MR_EnumFunctorDescPtr parse_tree__parse_tree_out_info__parse_tree__parse_tree_out_info__enum_name_ordered_maybe_output_line_numbers_0[2];

static const MR_Integer parse_tree__parse_tree_out_info__parse_tree__parse_tree_out_info__functor_number_map_maybe_output_line_numbers_0[2];

static const MR_EnumFunctorDesc parse_tree__parse_tree_out_info__parse_tree__parse_tree_out_info__enum_functor_desc_maybe_qualified_item_names_0_0;

static const MR_EnumFunctorDesc parse_tree__parse_tree_out_info__parse_tree__parse_tree_out_info__enum_functor_desc_maybe_qualified_item_names_0_1;

static const MR_EnumFunctorDescPtr parse_tree__parse_tree_out_info__parse_tree__parse_tree_out_info__enum_ordinal_ordered_maybe_qualified_item_names_0[2];

static const MR_EnumFunctorDescPtr parse_tree__parse_tree_out_info__parse_tree__parse_tree_out_info__enum_name_ordered_maybe_qualified_item_names_0[2];

static const MR_Integer parse_tree__parse_tree_out_info__parse_tree__parse_tree_out_info__functor_number_map_maybe_qualified_item_names_0[2];

static const MR_PseudoTypeInfo parse_tree__parse_tree_out_info__parse_tree__parse_tree_out_info__field_types_merc_out_info_0_0[5];

static const MR_ConstString parse_tree__parse_tree_out_info__parse_tree__parse_tree_out_info__field_names_merc_out_info_0_0[5];

static const MR_DuArgLocn parse_tree__parse_tree_out_info__parse_tree__parse_tree_out_info__field_locns_merc_out_info_0_0[5];

static const MR_DuFunctorDesc parse_tree__parse_tree_out_info__parse_tree__parse_tree_out_info__du_functor_desc_merc_out_info_0_0;

static const MR_DuFunctorDescPtr parse_tree__parse_tree_out_info__parse_tree__parse_tree_out_info__du_stag_ordered_merc_out_info_0_0[1];

static const MR_DuPtagLayout parse_tree__parse_tree_out_info__parse_tree__parse_tree_out_info__du_ptag_ordered_merc_out_info_0[1];

static const MR_DuFunctorDescPtr parse_tree__parse_tree_out_info__parse_tree__parse_tree_out_info__du_name_ordered_merc_out_info_0[1];

static const MR_Integer parse_tree__parse_tree_out_info__parse_tree__parse_tree_out_info__functor_number_map_merc_out_info_0[1];

static const MR_EnumFunctorDesc parse_tree__parse_tree_out_info__parse_tree__parse_tree_out_info__enum_functor_desc_output_lang_0_0;

static const MR_EnumFunctorDesc parse_tree__parse_tree_out_info__parse_tree__parse_tree_out_info__enum_functor_desc_output_lang_0_1;

static const MR_EnumFunctorDescPtr parse_tree__parse_tree_out_info__parse_tree__parse_tree_out_info__enum_ordinal_ordered_output_lang_0[2];

static const MR_EnumFunctorDescPtr parse_tree__parse_tree_out_info__parse_tree__parse_tree_out_info__enum_name_ordered_output_lang_0[2];

static const MR_Integer parse_tree__parse_tree_out_info__parse_tree__parse_tree_out_info__functor_number_map_output_lang_0[2];

static const MR_EnumFunctorDesc parse_tree__parse_tree_out_info__parse_tree__parse_tree_out_info__enum_functor_desc_type_repn_for_0_0;

static const MR_EnumFunctorDesc parse_tree__parse_tree_out_info__parse_tree__parse_tree_out_info__enum_functor_desc_type_repn_for_0_1;

static const MR_EnumFunctorDescPtr parse_tree__parse_tree_out_info__parse_tree__parse_tree_out_info__enum_ordinal_ordered_type_repn_for_0[2];

static const MR_EnumFunctorDescPtr parse_tree__parse_tree_out_info__parse_tree__parse_tree_out_info__enum_name_ordered_type_repn_for_0[2];

static const MR_Integer parse_tree__parse_tree_out_info__parse_tree__parse_tree_out_info__functor_number_map_type_repn_for_0[2];

static MR_bool MR_CALL 
parse_tree__parse_tree_out_info____Unify____maybe_output_line_numbers_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2);

static void MR_CALL 
parse_tree__parse_tree_out_info____Compare____maybe_output_line_numbers_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3);

static MR_bool MR_CALL 
parse_tree__parse_tree_out_info____Unify____maybe_qualified_item_names_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2);

static void MR_CALL 
parse_tree__parse_tree_out_info____Compare____maybe_qualified_item_names_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3);

static MR_bool MR_CALL 
parse_tree__parse_tree_out_info____Unify____merc_out_info_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2);

static void MR_CALL 
parse_tree__parse_tree_out_info____Compare____merc_out_info_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3);

static MR_bool MR_CALL 
parse_tree__parse_tree_out_info____Unify____output_lang_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2);

static void MR_CALL 
parse_tree__parse_tree_out_info____Compare____output_lang_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3);

static MR_bool MR_CALL 
parse_tree__parse_tree_out_info____Unify____type_repn_for_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2);

static void MR_CALL 
parse_tree__parse_tree_out_info____Compare____type_repn_for_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3);


static /* final */ const MR_Box parse_tree__parse_tree_out_info_scalar_common_1[2][2];




static /* final */ const MR_Box parse_tree__parse_tree_out_info_scalar_common_1[2][2] = {
  /* row   0 */
  {
    (MR_Box) (((((MR_Unsigned) 1U << 3)) | (((((MR_Unsigned) 0U << 2)) | (((MR_Unsigned) 1U << 1)))))),
    ((MR_Box) ((MR_String) ", "))
  },
  /* row   1 */
  {
    (MR_Box) (((((MR_Unsigned) 1U << 3)) | (((((MR_Unsigned) 0U << 2)) | (((MR_Unsigned) 0U << 1)))))),
    ((MR_Box) ((MR_String) ", "))
  },
};



#include "array.mh"
#include "bitmap.mh"
#include "io.mh"
#include "string.mh"
#include "time.mh"
#include "io.stream_ops.mh"


static const MR_EnumFunctorDesc parse_tree__parse_tree_out_info__parse_tree__parse_tree_out_info__enum_functor_desc_maybe_output_line_numbers_0_0 = {
  (MR_String) "do_not_output_line_numbers",
  INT32_C(0)
};

static const MR_EnumFunctorDesc parse_tree__parse_tree_out_info__parse_tree__parse_tree_out_info__enum_functor_desc_maybe_output_line_numbers_0_1 = {
  (MR_String) "do_output_line_numbers",
  INT32_C(1)
};

static const MR_EnumFunctorDescPtr parse_tree__parse_tree_out_info__parse_tree__parse_tree_out_info__enum_ordinal_ordered_maybe_output_line_numbers_0[2] = {
  &parse_tree__parse_tree_out_info__parse_tree__parse_tree_out_info__enum_functor_desc_maybe_output_line_numbers_0_0,
  &parse_tree__parse_tree_out_info__parse_tree__parse_tree_out_info__enum_functor_desc_maybe_output_line_numbers_0_1
};

static const MR_EnumFunctorDescPtr parse_tree__parse_tree_out_info__parse_tree__parse_tree_out_info__enum_name_ordered_maybe_output_line_numbers_0[2] = {
  &parse_tree__parse_tree_out_info__parse_tree__parse_tree_out_info__enum_functor_desc_maybe_output_line_numbers_0_0,
  &parse_tree__parse_tree_out_info__parse_tree__parse_tree_out_info__enum_functor_desc_maybe_output_line_numbers_0_1
};

static const MR_Integer parse_tree__parse_tree_out_info__parse_tree__parse_tree_out_info__functor_number_map_maybe_output_line_numbers_0[2] = {
  (MR_Integer) 0,
  (MR_Integer) 1
};

const MR_TypeCtorInfo_Struct parse_tree__parse_tree_out_info__parse_tree__parse_tree_out_info__type_ctor_info_maybe_output_line_numbers_0 = {
  (MR_Integer) 0,
  UINT8_C(18),
  INT8_C(-1),
  MR_TYPECTOR_REP_ENUM,
  ((MR_Box) (parse_tree__parse_tree_out_info____Unify____maybe_output_line_numbers_0_0_10001)),
  ((MR_Box) (parse_tree__parse_tree_out_info____Compare____maybe_output_line_numbers_0_0_10001)),
  (MR_String) "parse_tree.parse_tree_out_info",
  (MR_String) "maybe_output_line_numbers",
  { parse_tree__parse_tree_out_info__parse_tree__parse_tree_out_info__enum_name_ordered_maybe_output_line_numbers_0 },
  { parse_tree__parse_tree_out_info__parse_tree__parse_tree_out_info__enum_ordinal_ordered_maybe_output_line_numbers_0 },
  (MR_Integer) 2,
  UINT16_C(12),
  parse_tree__parse_tree_out_info__parse_tree__parse_tree_out_info__functor_number_map_maybe_output_line_numbers_0,

};

static const MR_EnumFunctorDesc parse_tree__parse_tree_out_info__parse_tree__parse_tree_out_info__enum_functor_desc_maybe_qualified_item_names_0_0 = {
  (MR_String) "unqualified_item_names",
  INT32_C(0)
};

static const MR_EnumFunctorDesc parse_tree__parse_tree_out_info__parse_tree__parse_tree_out_info__enum_functor_desc_maybe_qualified_item_names_0_1 = {
  (MR_String) "qualified_item_names",
  INT32_C(1)
};

static const MR_EnumFunctorDescPtr parse_tree__parse_tree_out_info__parse_tree__parse_tree_out_info__enum_ordinal_ordered_maybe_qualified_item_names_0[2] = {
  &parse_tree__parse_tree_out_info__parse_tree__parse_tree_out_info__enum_functor_desc_maybe_qualified_item_names_0_0,
  &parse_tree__parse_tree_out_info__parse_tree__parse_tree_out_info__enum_functor_desc_maybe_qualified_item_names_0_1
};

static const MR_EnumFunctorDescPtr parse_tree__parse_tree_out_info__parse_tree__parse_tree_out_info__enum_name_ordered_maybe_qualified_item_names_0[2] = {
  &parse_tree__parse_tree_out_info__parse_tree__parse_tree_out_info__enum_functor_desc_maybe_qualified_item_names_0_1,
  &parse_tree__parse_tree_out_info__parse_tree__parse_tree_out_info__enum_functor_desc_maybe_qualified_item_names_0_0
};

static const MR_Integer parse_tree__parse_tree_out_info__parse_tree__parse_tree_out_info__functor_number_map_maybe_qualified_item_names_0[2] = {
  (MR_Integer) 1,
  (MR_Integer) 0
};

const MR_TypeCtorInfo_Struct parse_tree__parse_tree_out_info__parse_tree__parse_tree_out_info__type_ctor_info_maybe_qualified_item_names_0 = {
  (MR_Integer) 0,
  UINT8_C(18),
  INT8_C(-1),
  MR_TYPECTOR_REP_ENUM,
  ((MR_Box) (parse_tree__parse_tree_out_info____Unify____maybe_qualified_item_names_0_0_10001)),
  ((MR_Box) (parse_tree__parse_tree_out_info____Compare____maybe_qualified_item_names_0_0_10001)),
  (MR_String) "parse_tree.parse_tree_out_info",
  (MR_String) "maybe_qualified_item_names",
  { parse_tree__parse_tree_out_info__parse_tree__parse_tree_out_info__enum_name_ordered_maybe_qualified_item_names_0 },
  { parse_tree__parse_tree_out_info__parse_tree__parse_tree_out_info__enum_ordinal_ordered_maybe_qualified_item_names_0 },
  (MR_Integer) 2,
  UINT16_C(12),
  parse_tree__parse_tree_out_info__parse_tree__parse_tree_out_info__functor_number_map_maybe_qualified_item_names_0,

};

static const MR_PseudoTypeInfo parse_tree__parse_tree_out_info__parse_tree__parse_tree_out_info__field_types_merc_out_info_0_0[5] = {
  (MR_PseudoTypeInfo) (&parse_tree__parse_tree_out_info__parse_tree__parse_tree_out_info__type_ctor_info_maybe_qualified_item_names_0),
  (MR_PseudoTypeInfo) (&parse_tree__parse_tree_out_info__parse_tree__parse_tree_out_info__type_ctor_info_maybe_output_line_numbers_0),
  (MR_PseudoTypeInfo) (&parse_tree__parse_tree_out_info__parse_tree__parse_tree_out_info__type_ctor_info_output_lang_0),
  (MR_PseudoTypeInfo) (&parse_tree__parse_tree_out_info__parse_tree__parse_tree_out_info__type_ctor_info_type_repn_for_0),
  (MR_PseudoTypeInfo) (&mercury__builtin__builtin__type_ctor_info_string_0)
};

static const MR_ConstString parse_tree__parse_tree_out_info__parse_tree__parse_tree_out_info__field_names_merc_out_info_0_0[5] = {
  (MR_String) "moi_qualify_item_names",
  (MR_String) "moi_output_line_numbers",
  (MR_String) "moi_output_lang",
  (MR_String) "moi_type_repn_for",
  (MR_String) "moi_human_comma_sep"
};

static const MR_DuArgLocn parse_tree__parse_tree_out_info__parse_tree__parse_tree_out_info__field_locns_merc_out_info_0_0[5] = {
  {
    (MR_Integer) 0,
    (MR_Integer) 3,
    (MR_Integer) 1
  },
  {
    (MR_Integer) 0,
    (MR_Integer) 2,
    (MR_Integer) 1
  },
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
  }
};

static const MR_DuFunctorDesc parse_tree__parse_tree_out_info__parse_tree__parse_tree_out_info__du_functor_desc_merc_out_info_0_0 = {
  (MR_String) "merc_out_info",
  INT16_C(5),
  UINT16_C(0),
  MR_SECTAG_NONE,
  UINT8_C(0),
  (MR_Integer) -1,
  INT32_C(0),
  parse_tree__parse_tree_out_info__parse_tree__parse_tree_out_info__field_types_merc_out_info_0_0,
  parse_tree__parse_tree_out_info__parse_tree__parse_tree_out_info__field_names_merc_out_info_0_0,
  parse_tree__parse_tree_out_info__parse_tree__parse_tree_out_info__field_locns_merc_out_info_0_0,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE,
  UINT8_C(0)
};

static const MR_DuFunctorDescPtr parse_tree__parse_tree_out_info__parse_tree__parse_tree_out_info__du_stag_ordered_merc_out_info_0_0[1] = { &parse_tree__parse_tree_out_info__parse_tree__parse_tree_out_info__du_functor_desc_merc_out_info_0_0 };

static const MR_DuPtagLayout parse_tree__parse_tree_out_info__parse_tree__parse_tree_out_info__du_ptag_ordered_merc_out_info_0[1] = {
  {
    UINT32_C(1),
    MR_SECTAG_NONE,
    parse_tree__parse_tree_out_info__parse_tree__parse_tree_out_info__du_stag_ordered_merc_out_info_0_0,
    INT8_C(-1),
    UINT8_C(0),
    UINT8_C(1)
  }
};

static const MR_DuFunctorDescPtr parse_tree__parse_tree_out_info__parse_tree__parse_tree_out_info__du_name_ordered_merc_out_info_0[1] = { &parse_tree__parse_tree_out_info__parse_tree__parse_tree_out_info__du_functor_desc_merc_out_info_0_0 };

static const MR_Integer parse_tree__parse_tree_out_info__parse_tree__parse_tree_out_info__functor_number_map_merc_out_info_0[1] = { (MR_Integer) 0 };

const MR_TypeCtorInfo_Struct parse_tree__parse_tree_out_info__parse_tree__parse_tree_out_info__type_ctor_info_merc_out_info_0 = {
  (MR_Integer) 0,
  UINT8_C(18),
  INT8_C(1),
  MR_TYPECTOR_REP_DU,
  ((MR_Box) (parse_tree__parse_tree_out_info____Unify____merc_out_info_0_0_10001)),
  ((MR_Box) (parse_tree__parse_tree_out_info____Compare____merc_out_info_0_0_10001)),
  (MR_String) "parse_tree.parse_tree_out_info",
  (MR_String) "merc_out_info",
  { parse_tree__parse_tree_out_info__parse_tree__parse_tree_out_info__du_name_ordered_merc_out_info_0 },
  { parse_tree__parse_tree_out_info__parse_tree__parse_tree_out_info__du_ptag_ordered_merc_out_info_0 },
  (MR_Integer) 1,
  UINT16_C(12),
  parse_tree__parse_tree_out_info__parse_tree__parse_tree_out_info__functor_number_map_merc_out_info_0,

};

static const MR_EnumFunctorDesc parse_tree__parse_tree_out_info__parse_tree__parse_tree_out_info__enum_functor_desc_output_lang_0_0 = {
  (MR_String) "output_mercury",
  INT32_C(0)
};

static const MR_EnumFunctorDesc parse_tree__parse_tree_out_info__parse_tree__parse_tree_out_info__enum_functor_desc_output_lang_0_1 = {
  (MR_String) "output_debug",
  INT32_C(1)
};

static const MR_EnumFunctorDescPtr parse_tree__parse_tree_out_info__parse_tree__parse_tree_out_info__enum_ordinal_ordered_output_lang_0[2] = {
  &parse_tree__parse_tree_out_info__parse_tree__parse_tree_out_info__enum_functor_desc_output_lang_0_0,
  &parse_tree__parse_tree_out_info__parse_tree__parse_tree_out_info__enum_functor_desc_output_lang_0_1
};

static const MR_EnumFunctorDescPtr parse_tree__parse_tree_out_info__parse_tree__parse_tree_out_info__enum_name_ordered_output_lang_0[2] = {
  &parse_tree__parse_tree_out_info__parse_tree__parse_tree_out_info__enum_functor_desc_output_lang_0_1,
  &parse_tree__parse_tree_out_info__parse_tree__parse_tree_out_info__enum_functor_desc_output_lang_0_0
};

static const MR_Integer parse_tree__parse_tree_out_info__parse_tree__parse_tree_out_info__functor_number_map_output_lang_0[2] = {
  (MR_Integer) 1,
  (MR_Integer) 0
};

const MR_TypeCtorInfo_Struct parse_tree__parse_tree_out_info__parse_tree__parse_tree_out_info__type_ctor_info_output_lang_0 = {
  (MR_Integer) 0,
  UINT8_C(18),
  INT8_C(-1),
  MR_TYPECTOR_REP_ENUM,
  ((MR_Box) (parse_tree__parse_tree_out_info____Unify____output_lang_0_0_10001)),
  ((MR_Box) (parse_tree__parse_tree_out_info____Compare____output_lang_0_0_10001)),
  (MR_String) "parse_tree.parse_tree_out_info",
  (MR_String) "output_lang",
  { parse_tree__parse_tree_out_info__parse_tree__parse_tree_out_info__enum_name_ordered_output_lang_0 },
  { parse_tree__parse_tree_out_info__parse_tree__parse_tree_out_info__enum_ordinal_ordered_output_lang_0 },
  (MR_Integer) 2,
  UINT16_C(12),
  parse_tree__parse_tree_out_info__parse_tree__parse_tree_out_info__functor_number_map_output_lang_0,

};

static const MR_EnumFunctorDesc parse_tree__parse_tree_out_info__parse_tree__parse_tree_out_info__enum_functor_desc_type_repn_for_0_0 = {
  (MR_String) "type_repn_for_machines",
  INT32_C(0)
};

static const MR_EnumFunctorDesc parse_tree__parse_tree_out_info__parse_tree__parse_tree_out_info__enum_functor_desc_type_repn_for_0_1 = {
  (MR_String) "type_repn_for_humans",
  INT32_C(1)
};

static const MR_EnumFunctorDescPtr parse_tree__parse_tree_out_info__parse_tree__parse_tree_out_info__enum_ordinal_ordered_type_repn_for_0[2] = {
  &parse_tree__parse_tree_out_info__parse_tree__parse_tree_out_info__enum_functor_desc_type_repn_for_0_0,
  &parse_tree__parse_tree_out_info__parse_tree__parse_tree_out_info__enum_functor_desc_type_repn_for_0_1
};

static const MR_EnumFunctorDescPtr parse_tree__parse_tree_out_info__parse_tree__parse_tree_out_info__enum_name_ordered_type_repn_for_0[2] = {
  &parse_tree__parse_tree_out_info__parse_tree__parse_tree_out_info__enum_functor_desc_type_repn_for_0_1,
  &parse_tree__parse_tree_out_info__parse_tree__parse_tree_out_info__enum_functor_desc_type_repn_for_0_0
};

static const MR_Integer parse_tree__parse_tree_out_info__parse_tree__parse_tree_out_info__functor_number_map_type_repn_for_0[2] = {
  (MR_Integer) 1,
  (MR_Integer) 0
};

const MR_TypeCtorInfo_Struct parse_tree__parse_tree_out_info__parse_tree__parse_tree_out_info__type_ctor_info_type_repn_for_0 = {
  (MR_Integer) 0,
  UINT8_C(18),
  INT8_C(-1),
  MR_TYPECTOR_REP_ENUM,
  ((MR_Box) (parse_tree__parse_tree_out_info____Unify____type_repn_for_0_0_10001)),
  ((MR_Box) (parse_tree__parse_tree_out_info____Compare____type_repn_for_0_0_10001)),
  (MR_String) "parse_tree.parse_tree_out_info",
  (MR_String) "type_repn_for",
  { parse_tree__parse_tree_out_info__parse_tree__parse_tree_out_info__enum_name_ordered_type_repn_for_0 },
  { parse_tree__parse_tree_out_info__parse_tree__parse_tree_out_info__enum_ordinal_ordered_type_repn_for_0 },
  (MR_Integer) 2,
  UINT16_C(12),
  parse_tree__parse_tree_out_info__parse_tree__parse_tree_out_info__functor_number_map_type_repn_for_0,

};

void MR_CALL 
parse_tree__parse_tree_out_info____Compare____type_repn_for_0_0(
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
parse_tree__parse_tree_out_info____Unify____type_repn_for_0_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2)
{
  MR_bool succeeded = (HeadVar__1_1 == HeadVar__2_2);

  return succeeded;
}

void MR_CALL 
parse_tree__parse_tree_out_info____Compare____output_lang_0_0(
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
parse_tree__parse_tree_out_info____Unify____output_lang_0_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2)
{
  MR_bool succeeded = (HeadVar__1_1 == HeadVar__2_2);

  return succeeded;
}

void MR_CALL 
parse_tree__parse_tree_out_info____Compare____merc_out_info_0_0(
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
    MR_Word ArgX1_4 = ((((MR_Unsigned) ((MR_hl_field(0, HeadVar__2_2, (MR_Integer) 0))) >> 3)) & (MR_Integer) 1);
    MR_Word ArgY1_5 = ((((MR_Unsigned) ((MR_hl_field(0, HeadVar__3_3, (MR_Integer) 0))) >> 3)) & (MR_Integer) 1);
    MR_Word ArgX2_7 = ((((MR_Unsigned) ((MR_hl_field(0, HeadVar__2_2, (MR_Integer) 0))) >> 2)) & (MR_Integer) 1);
    MR_Word ArgY2_8 = ((((MR_Unsigned) ((MR_hl_field(0, HeadVar__3_3, (MR_Integer) 0))) >> 2)) & (MR_Integer) 1);
    MR_Word ArgX3_10 = ((((MR_Unsigned) ((MR_hl_field(0, HeadVar__2_2, (MR_Integer) 0))) >> 1)) & (MR_Integer) 1);
    MR_Word ArgY3_11 = ((((MR_Unsigned) ((MR_hl_field(0, HeadVar__3_3, (MR_Integer) 0))) >> 1)) & (MR_Integer) 1);
    MR_Word ArgX4_13 = ((MR_Unsigned) ((MR_hl_field(0, HeadVar__2_2, (MR_Integer) 0))) & (MR_Integer) 1);
    MR_Word ArgY4_14 = ((MR_Unsigned) ((MR_hl_field(0, HeadVar__3_3, (MR_Integer) 0))) & (MR_Integer) 1);
    MR_String ArgX5_16 = ((MR_String) ((MR_hl_field(0, HeadVar__2_2, (MR_Integer) 1))));
    MR_String ArgY5_17 = ((MR_String) ((MR_hl_field(0, HeadVar__3_3, (MR_Integer) 1))));
    MR_Word SubResult1_6;
    MR_Integer Var_25 = (MR_Integer) (ArgX1_4);
    MR_Integer Var_26 = (MR_Integer) (ArgY1_5);

    succeeded = (Var_25 < Var_26);
    if (succeeded)
    {
      SubResult1_6 = (MR_Integer) 1;
      succeeded = MR_TRUE;
    }
    else
    {
      succeeded = (Var_25 > Var_26);
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
      MR_Integer Var_27 = (MR_Integer) (ArgX2_7);
      MR_Integer Var_28 = (MR_Integer) (ArgY2_8);

      succeeded = (Var_27 < Var_28);
      if (succeeded)
      {
        SubResult2_9 = (MR_Integer) 1;
        succeeded = MR_TRUE;
      }
      else
      {
        succeeded = (Var_27 > Var_28);
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
        MR_Integer Var_29 = (MR_Integer) (ArgX3_10);
        MR_Integer Var_30 = (MR_Integer) (ArgY3_11);

        succeeded = (Var_29 < Var_30);
        if (succeeded)
        {
          SubResult3_12 = (MR_Integer) 1;
          succeeded = MR_TRUE;
        }
        else
        {
          succeeded = (Var_29 > Var_30);
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
          MR_Integer Var_31 = (MR_Integer) (ArgX4_13);
          MR_Integer Var_32 = (MR_Integer) (ArgY4_14);

          succeeded = (Var_31 < Var_32);
          if (succeeded)
          {
            SubResult4_15 = (MR_Integer) 1;
            succeeded = MR_TRUE;
          }
          else
          {
            succeeded = (Var_31 > Var_32);
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
            mercury__private_builtin__builtin_compare_string_3_p_0(HeadVar__1_1, ArgX5_16, ArgY5_17);
        }
      }
    }
  }
}

MR_bool MR_CALL 
parse_tree__parse_tree_out_info____Unify____merc_out_info_0_0(
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
    MR_Word ArgX1_3 = ((((MR_Unsigned) ((MR_hl_field(0, HeadVar__1_1, (MR_Integer) 0))) >> 3)) & (MR_Integer) 1);
    MR_Word ArgY1_4 = ((((MR_Unsigned) ((MR_hl_field(0, HeadVar__2_2, (MR_Integer) 0))) >> 3)) & (MR_Integer) 1);
    MR_Word ArgX2_5 = ((((MR_Unsigned) ((MR_hl_field(0, HeadVar__1_1, (MR_Integer) 0))) >> 2)) & (MR_Integer) 1);
    MR_Word ArgY2_6 = ((((MR_Unsigned) ((MR_hl_field(0, HeadVar__2_2, (MR_Integer) 0))) >> 2)) & (MR_Integer) 1);
    MR_Word ArgX3_7 = ((((MR_Unsigned) ((MR_hl_field(0, HeadVar__1_1, (MR_Integer) 0))) >> 1)) & (MR_Integer) 1);
    MR_Word ArgY3_8 = ((((MR_Unsigned) ((MR_hl_field(0, HeadVar__2_2, (MR_Integer) 0))) >> 1)) & (MR_Integer) 1);
    MR_Word ArgX4_9 = ((MR_Unsigned) ((MR_hl_field(0, HeadVar__1_1, (MR_Integer) 0))) & (MR_Integer) 1);
    MR_Word ArgY4_10 = ((MR_Unsigned) ((MR_hl_field(0, HeadVar__2_2, (MR_Integer) 0))) & (MR_Integer) 1);
    MR_String ArgX5_11 = ((MR_String) ((MR_hl_field(0, HeadVar__1_1, (MR_Integer) 1))));
    MR_String ArgY5_12 = ((MR_String) ((MR_hl_field(0, HeadVar__2_2, (MR_Integer) 1))));

    succeeded = (ArgX1_3 == ArgY1_4);
    if (succeeded)
    {
      succeeded = (ArgX2_5 == ArgY2_6);
      if (succeeded)
      {
        succeeded = (ArgX3_7 == ArgY3_8);
        if (succeeded)
        {
          succeeded = (ArgX4_9 == ArgY4_10);
          if (succeeded)
            succeeded = (strcmp(ArgX5_11, ArgY5_12) == 0);
        }
      }
    }
  }
  return succeeded;
}

void MR_CALL 
parse_tree__parse_tree_out_info____Compare____maybe_qualified_item_names_0_0(
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
parse_tree__parse_tree_out_info____Unify____maybe_qualified_item_names_0_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2)
{
  MR_bool succeeded = (HeadVar__1_1 == HeadVar__2_2);

  return succeeded;
}

void MR_CALL 
parse_tree__parse_tree_out_info____Compare____maybe_output_line_numbers_0_0(
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
parse_tree__parse_tree_out_info____Unify____maybe_output_line_numbers_0_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2)
{
  MR_bool succeeded = (HeadVar__1_1 == HeadVar__2_2);

  return succeeded;
}

void MR_CALL 
parse_tree__parse_tree_out_info__maybe_unqualify_sym_name_3_p_0(
  MR_Word Info_4,
  MR_Word SymName_5,
  MR_Word * OutSymName_6)
{
  MR_Word MaybeQualifiedItemNames_7 = ((((MR_Unsigned) ((MR_hl_field(0, Info_4, (MR_Integer) 0))) >> 3)) & (MR_Integer) 1);

  switch (MaybeQualifiedItemNames_7) {
    default: /*NOTREACHED*/ MR_assert(0);
    case (MR_Integer) 1:
      *OutSymName_6 = SymName_5;
      break;
    case (MR_Integer) 0:
      {
        MR_String Var_8;

        Var_8 = mdbcomp__sym_name__unqualify_name_1_f_0(SymName_5);
        {
          MR_Word base;
          base = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
          *OutSymName_6 = base;
          MR_hl_field(0, base, 0) = ((MR_Box) (Var_8));
        }
      }
      break;
  }
}

void MR_CALL 
parse_tree__parse_tree_out_info__maybe_format_line_number_5_p_0(
  MR_Word TypeClassInfo_for_pt_output_17,
  MR_Word Info_6,
  MR_Word Context_7,
  MR_Box S_8,
  MR_Box STATE_VARIABLE_U_0_11,
  MR_Box * STATE_VARIABLE_U_12)
{
  MR_Word LineNumbers_10 = ((((MR_Unsigned) ((MR_hl_field(0, Info_6, (MR_Integer) 0))) >> 2)) & (MR_Integer) 1);

  switch (LineNumbers_10) {
    default: /*NOTREACHED*/ MR_assert(0);
    case (MR_Integer) 0:
      *STATE_VARIABLE_U_12 = STATE_VARIABLE_U_0_11;
      break;
    case (MR_Integer) 1:
      {
        MR_Box STATE_VARIABLE_U_14_14;
        MR_Box STATE_VARIABLE_U_15_15;
        void MR_CALL (* func_0)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) ((MR_hl_field(0, (MR_hl_field(0, TypeClassInfo_for_pt_output_17, (MR_Integer) 0)), (MR_Integer) 6))));
        void MR_CALL (* func_1)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *);

        func_0(((MR_Box) (TypeClassInfo_for_pt_output_17)), ((MR_Box) ((MR_String) "\t% ")), S_8, STATE_VARIABLE_U_0_11, &STATE_VARIABLE_U_14_14);
        parse_tree__parse_tree_out_misc__format_context_4_p_0(TypeClassInfo_for_pt_output_17, S_8, Context_7, STATE_VARIABLE_U_14_14, &STATE_VARIABLE_U_15_15);
        func_1 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) ((MR_hl_field(0, (MR_hl_field(0, TypeClassInfo_for_pt_output_17, (MR_Integer) 0)), (MR_Integer) 6))));
        func_1(((MR_Box) (TypeClassInfo_for_pt_output_17)), ((MR_Box) ((MR_String) "\n")), S_8, STATE_VARIABLE_U_15_15, STATE_VARIABLE_U_12);
      }
      break;
  }
}

MR_String MR_CALL 
parse_tree__parse_tree_out_info__get_human_comma_sep_1_f_0(
  MR_Word Info_3)
{
  MR_String HeadVar__2_2 = ((MR_String) ((MR_hl_field(0, Info_3, (MR_Integer) 1))));

  return HeadVar__2_2;
}

MR_Word MR_CALL 
parse_tree__parse_tree_out_info__get_type_repn_for_1_f_0(
  MR_Word Info_3)
{
  MR_Word HeadVar__2_2 = ((MR_Unsigned) ((MR_hl_field(0, Info_3, (MR_Integer) 0))) & (MR_Integer) 1);

  return HeadVar__2_2;
}

MR_Word MR_CALL 
parse_tree__parse_tree_out_info__get_output_lang_1_f_0(
  MR_Word Info_3)
{
  MR_Word HeadVar__2_2 = ((((MR_Unsigned) ((MR_hl_field(0, Info_3, (MR_Integer) 0))) >> 1)) & (MR_Integer) 1);

  return HeadVar__2_2;
}

MR_Word MR_CALL 
parse_tree__parse_tree_out_info__get_output_line_numbers_1_f_0(
  MR_Word Info_3)
{
  MR_Word HeadVar__2_2 = ((((MR_Unsigned) ((MR_hl_field(0, Info_3, (MR_Integer) 0))) >> 2)) & (MR_Integer) 1);

  return HeadVar__2_2;
}

MR_Word MR_CALL 
parse_tree__parse_tree_out_info__get_maybe_qualified_item_names_1_f_0(
  MR_Word Info_3)
{
  MR_Word HeadVar__2_2 = ((((MR_Unsigned) ((MR_hl_field(0, Info_3, (MR_Integer) 0))) >> 3)) & (MR_Integer) 1);

  return HeadVar__2_2;
}

MR_Word MR_CALL 
parse_tree__parse_tree_out_info__merc_out_info_disable_line_numbers_1_f_0(
  MR_Word Info0_3)
{
  MR_Word Info_4;
  MR_String Var_10 = ((MR_String) ((MR_hl_field(0, Info0_3, (MR_Integer) 1))));
  MR_Unsigned packed_word_0 = (MR_Unsigned) ((MR_hl_field(0, Info0_3, (MR_Integer) 0)));

  {
    Info_4 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, Info_4, 0) = (MR_Box) ((((packed_word_0 & (~((MR_Unsigned) 4U)))) | (((MR_Unsigned) ((MR_Integer) 0) << 2))));
    MR_hl_field(0, Info_4, 1) = ((MR_Box) (Var_10));
  }
  return Info_4;
}

MR_Word MR_CALL 
parse_tree__parse_tree_out_info__init_merc_out_info_3_f_0(
  MR_Word Globals_5,
  MR_Word MaybeQualifiedItemNames_6,
  MR_Word Lang_7)
{
  MR_Word Info_8;
  MR_Word LineNumbersOpt_9;
  MR_Word TypeRepnsForHumans_10;
  MR_Word LineNumbers_11;
  MR_Word For_12;
  MR_String CommaSep_13;

  libs__globals__lookup_bool_option_3_p_0(Globals_5, (MR_Integer) 193, &LineNumbersOpt_9);
  libs__globals__lookup_bool_option_3_p_0(Globals_5, (MR_Integer) 196, &TypeRepnsForHumans_10);
  switch (LineNumbersOpt_9) {
    default: /*NOTREACHED*/ MR_assert(0);
    case (MR_Integer) 0:
      LineNumbers_11 = (MR_Integer) 0;
      break;
    case (MR_Integer) 1:
      LineNumbers_11 = (MR_Integer) 1;
      break;
  }
  switch (TypeRepnsForHumans_10) {
    default: /*NOTREACHED*/ MR_assert(0);
    case (MR_Integer) 0:
      {
        For_12 = (MR_Integer) 0;
        CommaSep_13 = (MR_String) ", ";
      }
      break;
    case (MR_Integer) 1:
      {
        For_12 = (MR_Integer) 1;
        CommaSep_13 = (MR_String) ",\n    ";
      }
      break;
  }
  {
    Info_8 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, Info_8, 0) = (MR_Box) (((((MR_Unsigned) (MaybeQualifiedItemNames_6) << 3)) | (((((MR_Unsigned) (LineNumbers_11) << 2)) | (((((MR_Unsigned) (Lang_7) << 1)) | (MR_Unsigned) (For_12)))))));
    MR_hl_field(0, Info_8, 1) = ((MR_Box) (CommaSep_13));
  }
  return Info_8;
}

MR_Word MR_CALL 
parse_tree__parse_tree_out_info__init_write_int_merc_out_info_0_f_0(void)
{
  return (MR_Word) (&parse_tree__parse_tree_out_info_scalar_common_1[1]);
}

MR_Word MR_CALL 
parse_tree__parse_tree_out_info__init_debug_merc_out_info_0_f_0(void)
{
  return (MR_Word) (&parse_tree__parse_tree_out_info_scalar_common_1[0]);
}

static MR_bool MR_CALL 
parse_tree__parse_tree_out_info____Unify____maybe_output_line_numbers_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  MR_bool succeeded;

  succeeded = parse_tree__parse_tree_out_info____Unify____maybe_output_line_numbers_0_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
  return succeeded;
}

static void MR_CALL 
parse_tree__parse_tree_out_info____Compare____maybe_output_line_numbers_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  MR_Word conv0_HeadVar__1_1;

  parse_tree__parse_tree_out_info____Compare____maybe_output_line_numbers_0_0(&conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
  *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
}

static MR_bool MR_CALL 
parse_tree__parse_tree_out_info____Unify____maybe_qualified_item_names_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  MR_bool succeeded;

  succeeded = parse_tree__parse_tree_out_info____Unify____maybe_qualified_item_names_0_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
  return succeeded;
}

static void MR_CALL 
parse_tree__parse_tree_out_info____Compare____maybe_qualified_item_names_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  MR_Word conv0_HeadVar__1_1;

  parse_tree__parse_tree_out_info____Compare____maybe_qualified_item_names_0_0(&conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
  *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
}

static MR_bool MR_CALL 
parse_tree__parse_tree_out_info____Unify____merc_out_info_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  MR_bool succeeded;

  succeeded = parse_tree__parse_tree_out_info____Unify____merc_out_info_0_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
  return succeeded;
}

static void MR_CALL 
parse_tree__parse_tree_out_info____Compare____merc_out_info_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  MR_Word conv0_HeadVar__1_1;

  parse_tree__parse_tree_out_info____Compare____merc_out_info_0_0(&conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
  *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
}

static MR_bool MR_CALL 
parse_tree__parse_tree_out_info____Unify____output_lang_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  MR_bool succeeded;

  succeeded = parse_tree__parse_tree_out_info____Unify____output_lang_0_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
  return succeeded;
}

static void MR_CALL 
parse_tree__parse_tree_out_info____Compare____output_lang_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  MR_Word conv0_HeadVar__1_1;

  parse_tree__parse_tree_out_info____Compare____output_lang_0_0(&conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
  *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
}

static MR_bool MR_CALL 
parse_tree__parse_tree_out_info____Unify____type_repn_for_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  MR_bool succeeded;

  succeeded = parse_tree__parse_tree_out_info____Unify____type_repn_for_0_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
  return succeeded;
}

static void MR_CALL 
parse_tree__parse_tree_out_info____Compare____type_repn_for_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  MR_Word conv0_HeadVar__1_1;

  parse_tree__parse_tree_out_info____Compare____type_repn_for_0_0(&conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
  *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
}

void mercury__parse_tree__parse_tree_out_info__init(void)
{
}

void mercury__parse_tree__parse_tree_out_info__init_type_tables(void)
{
	static MR_bool initialised = MR_FALSE;
	if (initialised) return;
	initialised = MR_TRUE;

	MR_register_type_ctor_info(&parse_tree__parse_tree_out_info__parse_tree__parse_tree_out_info__type_ctor_info_maybe_output_line_numbers_0);
	MR_register_type_ctor_info(&parse_tree__parse_tree_out_info__parse_tree__parse_tree_out_info__type_ctor_info_maybe_qualified_item_names_0);
	MR_register_type_ctor_info(&parse_tree__parse_tree_out_info__parse_tree__parse_tree_out_info__type_ctor_info_merc_out_info_0);
	MR_register_type_ctor_info(&parse_tree__parse_tree_out_info__parse_tree__parse_tree_out_info__type_ctor_info_output_lang_0);
	MR_register_type_ctor_info(&parse_tree__parse_tree_out_info__parse_tree__parse_tree_out_info__type_ctor_info_type_repn_for_0);
}

void mercury__parse_tree__parse_tree_out_info__init_debugger(void)
{
	MR_fatal_error("debugger initialization in MLDS grade");
}

// Ensure everything is compiled with the same grade.
const char *mercury__parse_tree__parse_tree_out_info__grade_check(void)
{
    return &MR_GRADE_VAR;
}

// :- end_module parse_tree.parse_tree_out_info.
