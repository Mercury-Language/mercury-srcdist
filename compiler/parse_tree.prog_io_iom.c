/*
** Automatically generated from `prog_io_iom.m'
** by the Mercury compiler,
** version rotd-2015-11-30
** configured for x86_64-apple-darwin13.4.0.
** Do not edit.
**
** The autoconfigured grade settings governing
** the generation of this C file were
**
** TAG_BITS=2
** UNBOXED_FLOAT=no
** PREGENERATED_DIST=yes
** HIGHLEVEL_CODE=yes
**
** END_OF_C_GRADE_INFO
*/


/* :- module parse_tree.prog_io_iom. */
/* :- implementation. */

/*
INIT mercury__parse_tree__prog_io_iom__init
ENDINIT
*/

#include "parse_tree.prog_io_iom.mih"


#include "libs.mih"
#include "mdbcomp.mih"
#include "parse_tree.mih"
#include "recompilation.mih"
#include "libs.globals.mih"
#include "libs.op_mode.mih"
#include "libs.options.mih"
#include "libs.rat.mih"
#include "libs.timestamp.mih"
#include "libs.trace_params.mih"
#include "mdbcomp.feedback.mih"
#include "mdbcomp.goal_path.mih"
#include "mdbcomp.prim_data.mih"
#include "mdbcomp.program_representation.mih"
#include "mdbcomp.rtti_access.mih"
#include "mdbcomp.sym_name.mih"
#include "mdbcomp.trace_counts.mih"
#include "array.mih"
#include "assoc_list.mih"
#include "bimap.mih"
#include "bitmap.mih"
#include "bool.mih"
#include "builtin.mih"
#include "char.mih"
#include "construct.mih"
#include "cord.mih"
#include "deconstruct.mih"
#include "enum.mih"
#include "getopt_io.mih"
#include "integer.mih"
#include "io.mih"
#include "list.mih"
#include "map.mih"
#include "maybe.mih"
#include "ops.mih"
#include "pair.mih"
#include "pretty_printer.mih"
#include "private_builtin.mih"
#include "random.mih"
#include "rtti_implementation.mih"
#include "set.mih"
#include "set_ordlist.mih"
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
#include "parse_tree.error_util.mih"
#include "parse_tree.file_kind.mih"
#include "parse_tree.maybe_error.mih"
#include "parse_tree.prog_data.mih"
#include "parse_tree.prog_item.mih"
#include "parse_tree.set_of_var.mih"
#include "mdbcomp.feedback.automatic_parallelism.mih"




#line 95 "parse_tree.prog_io_iom.c"
static const MR_PseudoTypeInfo parse_tree__prog_io_iom__parse_tree__prog_io_iom__field_types_item_or_marker_0_0[1];

#line 98 "parse_tree.prog_io_iom.c"
static const MR_DuFunctorDesc parse_tree__prog_io_iom__parse_tree__prog_io_iom__du_functor_desc_item_or_marker_0_0;

#line 101 "parse_tree.prog_io_iom.c"
static const MR_FA_TypeInfo_Struct1 parse_tree__prog_io_iom__list__ti_one_or_more_1parse_tree__prog_item__type_ctor_info_item_include_0;

#line 104 "parse_tree.prog_io_iom.c"
static const MR_PseudoTypeInfo parse_tree__prog_io_iom__parse_tree__prog_io_iom__field_types_item_or_marker_0_1[1];

#line 107 "parse_tree.prog_io_iom.c"
static const MR_DuFunctorDesc parse_tree__prog_io_iom__parse_tree__prog_io_iom__du_functor_desc_item_or_marker_0_1;

#line 110 "parse_tree.prog_io_iom.c"
static const MR_FA_TypeInfo_Struct1 parse_tree__prog_io_iom__list__ti_one_or_more_1parse_tree__prog_item__type_ctor_info_item_avail_0;

#line 113 "parse_tree.prog_io_iom.c"
static const MR_PseudoTypeInfo parse_tree__prog_io_iom__parse_tree__prog_io_iom__field_types_item_or_marker_0_2[1];

#line 116 "parse_tree.prog_io_iom.c"
static const MR_DuFunctorDesc parse_tree__prog_io_iom__parse_tree__prog_io_iom__du_functor_desc_item_or_marker_0_2;

#line 119 "parse_tree.prog_io_iom.c"
static const MR_PseudoTypeInfo parse_tree__prog_io_iom__parse_tree__prog_io_iom__field_types_item_or_marker_0_3[1];

#line 122 "parse_tree.prog_io_iom.c"
static const MR_DuFunctorDesc parse_tree__prog_io_iom__parse_tree__prog_io_iom__du_functor_desc_item_or_marker_0_3;

#line 125 "parse_tree.prog_io_iom.c"
static const MR_PseudoTypeInfo parse_tree__prog_io_iom__parse_tree__prog_io_iom__field_types_item_or_marker_0_4[1];

#line 128 "parse_tree.prog_io_iom.c"
static const MR_DuFunctorDesc parse_tree__prog_io_iom__parse_tree__prog_io_iom__du_functor_desc_item_or_marker_0_4;

#line 131 "parse_tree.prog_io_iom.c"
static const MR_PseudoTypeInfo parse_tree__prog_io_iom__parse_tree__prog_io_iom__field_types_item_or_marker_0_5[3];

#line 134 "parse_tree.prog_io_iom.c"
static const MR_DuFunctorDesc parse_tree__prog_io_iom__parse_tree__prog_io_iom__du_functor_desc_item_or_marker_0_5;

#line 137 "parse_tree.prog_io_iom.c"
static const MR_PseudoTypeInfo parse_tree__prog_io_iom__parse_tree__prog_io_iom__field_types_item_or_marker_0_6[3];

#line 140 "parse_tree.prog_io_iom.c"
static const MR_DuFunctorDesc parse_tree__prog_io_iom__parse_tree__prog_io_iom__du_functor_desc_item_or_marker_0_6;

#line 143 "parse_tree.prog_io_iom.c"
static const MR_PseudoTypeInfo parse_tree__prog_io_iom__parse_tree__prog_io_iom__field_types_item_or_marker_0_7[3];

#line 146 "parse_tree.prog_io_iom.c"
static const MR_DuFunctorDesc parse_tree__prog_io_iom__parse_tree__prog_io_iom__du_functor_desc_item_or_marker_0_7;

#line 149 "parse_tree.prog_io_iom.c"
static const MR_DuFunctorDescPtr parse_tree__prog_io_iom__parse_tree__prog_io_iom__du_stag_ordered_item_or_marker_0_0[1];

#line 152 "parse_tree.prog_io_iom.c"
static const MR_DuFunctorDescPtr parse_tree__prog_io_iom__parse_tree__prog_io_iom__du_stag_ordered_item_or_marker_0_1[1];

#line 155 "parse_tree.prog_io_iom.c"
static const MR_DuFunctorDescPtr parse_tree__prog_io_iom__parse_tree__prog_io_iom__du_stag_ordered_item_or_marker_0_2[1];

#line 158 "parse_tree.prog_io_iom.c"
static const MR_DuFunctorDescPtr parse_tree__prog_io_iom__parse_tree__prog_io_iom__du_stag_ordered_item_or_marker_0_3[5];

#line 161 "parse_tree.prog_io_iom.c"
static const MR_DuPtagLayout parse_tree__prog_io_iom__parse_tree__prog_io_iom__du_ptag_ordered_item_or_marker_0[4];

#line 164 "parse_tree.prog_io_iom.c"
static const MR_DuFunctorDescPtr parse_tree__prog_io_iom__parse_tree__prog_io_iom__du_name_ordered_item_or_marker_0[8];

#line 167 "parse_tree.prog_io_iom.c"
static const MR_Integer parse_tree__prog_io_iom__parse_tree__prog_io_iom__functor_number_map_item_or_marker_0[8];

#line 170 "parse_tree.prog_io_iom.c"
static MR_bool MR_CALL 
parse_tree__prog_io_iom____Unify____item_or_marker_0_0_10001(
#line 173 "parse_tree.prog_io_iom.c"
  MR_Box parse_tree__prog_io_iom__wrapper_arg_1,
#line 175 "parse_tree.prog_io_iom.c"
  MR_Box parse_tree__prog_io_iom__wrapper_arg_2);

#line 178 "parse_tree.prog_io_iom.c"
static void MR_CALL 
parse_tree__prog_io_iom____Compare____item_or_marker_0_0_10001(
#line 181 "parse_tree.prog_io_iom.c"
  MR_Box * parse_tree__prog_io_iom__wrapper_arg_1,
#line 183 "parse_tree.prog_io_iom.c"
  MR_Box parse_tree__prog_io_iom__wrapper_arg_2,
#line 185 "parse_tree.prog_io_iom.c"
  MR_Box parse_tree__prog_io_iom__wrapper_arg_3);


static /* final */ const MR_Box parse_tree__prog_io_iom_scalar_common_1[2][2];




static /* final */ const MR_Box parse_tree__prog_io_iom_scalar_common_1[2][2] = {
  /* row 0 */
  {
    ((MR_Box) (&mercury__list__list__type_ctor_info_one_or_more_1)),
    ((MR_Box) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_avail_0))
  },
  /* row 1 */
  {
    ((MR_Box) (&mercury__list__list__type_ctor_info_one_or_more_1)),
    ((MR_Box) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_include_0))
  },
};



#include "io.mh"
#include "string.mh"
#include "time.mh"
#include "mdbcomp.rtti_access.mh"



#line 216 "parse_tree.prog_io_iom.c"
static const MR_PseudoTypeInfo parse_tree__prog_io_iom__parse_tree__prog_io_iom__field_types_item_or_marker_0_0[1] = {
  (MR_PseudoTypeInfo) &parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_0
};

#line 221 "parse_tree.prog_io_iom.c"
static const MR_DuFunctorDesc parse_tree__prog_io_iom__parse_tree__prog_io_iom__du_functor_desc_item_or_marker_0_0 = {
  (MR_String) "iom_item",
  (MR_Integer) 1,
  (MR_Integer) 0,
  mercury__private_builtin__MR_SECTAG_NONE,
  (MR_Integer) 0,
  (MR_Integer) -1,
  (MR_Integer) 0,
  parse_tree__prog_io_iom__parse_tree__prog_io_iom__field_types_item_or_marker_0_0,
  NULL,
  NULL,
  NULL
};

#line 236 "parse_tree.prog_io_iom.c"
static const MR_FA_TypeInfo_Struct1 parse_tree__prog_io_iom__list__ti_one_or_more_1parse_tree__prog_item__type_ctor_info_item_include_0 = {
  &mercury__list__list__type_ctor_info_one_or_more_1,
  {
    (MR_TypeInfo) &parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_include_0
  }
};

#line 244 "parse_tree.prog_io_iom.c"
static const MR_PseudoTypeInfo parse_tree__prog_io_iom__parse_tree__prog_io_iom__field_types_item_or_marker_0_1[1] = {
  (MR_PseudoTypeInfo) &parse_tree__prog_io_iom__list__ti_one_or_more_1parse_tree__prog_item__type_ctor_info_item_include_0
};

#line 249 "parse_tree.prog_io_iom.c"
static const MR_DuFunctorDesc parse_tree__prog_io_iom__parse_tree__prog_io_iom__du_functor_desc_item_or_marker_0_1 = {
  (MR_String) "iom_marker_include",
  (MR_Integer) 1,
  (MR_Integer) 0,
  mercury__private_builtin__MR_SECTAG_NONE,
  (MR_Integer) 1,
  (MR_Integer) -1,
  (MR_Integer) 1,
  parse_tree__prog_io_iom__parse_tree__prog_io_iom__field_types_item_or_marker_0_1,
  NULL,
  NULL,
  NULL
};

#line 264 "parse_tree.prog_io_iom.c"
static const MR_FA_TypeInfo_Struct1 parse_tree__prog_io_iom__list__ti_one_or_more_1parse_tree__prog_item__type_ctor_info_item_avail_0 = {
  &mercury__list__list__type_ctor_info_one_or_more_1,
  {
    (MR_TypeInfo) &parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_avail_0
  }
};

#line 272 "parse_tree.prog_io_iom.c"
static const MR_PseudoTypeInfo parse_tree__prog_io_iom__parse_tree__prog_io_iom__field_types_item_or_marker_0_2[1] = {
  (MR_PseudoTypeInfo) &parse_tree__prog_io_iom__list__ti_one_or_more_1parse_tree__prog_item__type_ctor_info_item_avail_0
};

#line 277 "parse_tree.prog_io_iom.c"
static const MR_DuFunctorDesc parse_tree__prog_io_iom__parse_tree__prog_io_iom__du_functor_desc_item_or_marker_0_2 = {
  (MR_String) "iom_marker_avail",
  (MR_Integer) 1,
  (MR_Integer) 0,
  mercury__private_builtin__MR_SECTAG_NONE,
  (MR_Integer) 2,
  (MR_Integer) -1,
  (MR_Integer) 2,
  parse_tree__prog_io_iom__parse_tree__prog_io_iom__field_types_item_or_marker_0_2,
  NULL,
  NULL,
  NULL
};

#line 292 "parse_tree.prog_io_iom.c"
static const MR_PseudoTypeInfo parse_tree__prog_io_iom__parse_tree__prog_io_iom__field_types_item_or_marker_0_3[1] = {
  (MR_PseudoTypeInfo) &recompilation__recompilation__type_ctor_info_version_numbers_0
};

#line 297 "parse_tree.prog_io_iom.c"
static const MR_DuFunctorDesc parse_tree__prog_io_iom__parse_tree__prog_io_iom__du_functor_desc_item_or_marker_0_3 = {
  (MR_String) "iom_marker_version_numbers",
  (MR_Integer) 1,
  (MR_Integer) 0,
  mercury__private_builtin__MR_SECTAG_REMOTE,
  (MR_Integer) 3,
  (MR_Integer) 0,
  (MR_Integer) 3,
  parse_tree__prog_io_iom__parse_tree__prog_io_iom__field_types_item_or_marker_0_3,
  NULL,
  NULL,
  NULL
};

#line 312 "parse_tree.prog_io_iom.c"
static const MR_PseudoTypeInfo parse_tree__prog_io_iom__parse_tree__prog_io_iom__field_types_item_or_marker_0_4[1] = {
  (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_string_0
};

#line 317 "parse_tree.prog_io_iom.c"
static const MR_DuFunctorDesc parse_tree__prog_io_iom__parse_tree__prog_io_iom__du_functor_desc_item_or_marker_0_4 = {
  (MR_String) "iom_marker_src_file",
  (MR_Integer) 1,
  (MR_Integer) 0,
  mercury__private_builtin__MR_SECTAG_REMOTE,
  (MR_Integer) 3,
  (MR_Integer) 1,
  (MR_Integer) 4,
  parse_tree__prog_io_iom__parse_tree__prog_io_iom__field_types_item_or_marker_0_4,
  NULL,
  NULL,
  NULL
};

#line 332 "parse_tree.prog_io_iom.c"
static const MR_PseudoTypeInfo parse_tree__prog_io_iom__parse_tree__prog_io_iom__field_types_item_or_marker_0_5[3] = {
  (MR_PseudoTypeInfo) &mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0,
  (MR_PseudoTypeInfo) &mercury__term__term__type_ctor_info_context_0,
  (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_int_0
};

#line 339 "parse_tree.prog_io_iom.c"
static const MR_DuFunctorDesc parse_tree__prog_io_iom__parse_tree__prog_io_iom__du_functor_desc_item_or_marker_0_5 = {
  (MR_String) "iom_marker_module_start",
  (MR_Integer) 3,
  (MR_Integer) 0,
  mercury__private_builtin__MR_SECTAG_REMOTE,
  (MR_Integer) 3,
  (MR_Integer) 2,
  (MR_Integer) 5,
  parse_tree__prog_io_iom__parse_tree__prog_io_iom__field_types_item_or_marker_0_5,
  NULL,
  NULL,
  NULL
};

#line 354 "parse_tree.prog_io_iom.c"
static const MR_PseudoTypeInfo parse_tree__prog_io_iom__parse_tree__prog_io_iom__field_types_item_or_marker_0_6[3] = {
  (MR_PseudoTypeInfo) &mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0,
  (MR_PseudoTypeInfo) &mercury__term__term__type_ctor_info_context_0,
  (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_int_0
};

#line 361 "parse_tree.prog_io_iom.c"
static const MR_DuFunctorDesc parse_tree__prog_io_iom__parse_tree__prog_io_iom__du_functor_desc_item_or_marker_0_6 = {
  (MR_String) "iom_marker_module_end",
  (MR_Integer) 3,
  (MR_Integer) 0,
  mercury__private_builtin__MR_SECTAG_REMOTE,
  (MR_Integer) 3,
  (MR_Integer) 3,
  (MR_Integer) 6,
  parse_tree__prog_io_iom__parse_tree__prog_io_iom__field_types_item_or_marker_0_6,
  NULL,
  NULL,
  NULL
};

#line 376 "parse_tree.prog_io_iom.c"
static const MR_PseudoTypeInfo parse_tree__prog_io_iom__parse_tree__prog_io_iom__field_types_item_or_marker_0_7[3] = {
  (MR_PseudoTypeInfo) &parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_module_section_0,
  (MR_PseudoTypeInfo) &mercury__term__term__type_ctor_info_context_0,
  (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_int_0
};

#line 383 "parse_tree.prog_io_iom.c"
static const MR_DuFunctorDesc parse_tree__prog_io_iom__parse_tree__prog_io_iom__du_functor_desc_item_or_marker_0_7 = {
  (MR_String) "iom_marker_section",
  (MR_Integer) 3,
  (MR_Integer) 0,
  mercury__private_builtin__MR_SECTAG_REMOTE,
  (MR_Integer) 3,
  (MR_Integer) 4,
  (MR_Integer) 7,
  parse_tree__prog_io_iom__parse_tree__prog_io_iom__field_types_item_or_marker_0_7,
  NULL,
  NULL,
  NULL
};

#line 398 "parse_tree.prog_io_iom.c"
static const MR_DuFunctorDescPtr parse_tree__prog_io_iom__parse_tree__prog_io_iom__du_stag_ordered_item_or_marker_0_0[1] = {
  &parse_tree__prog_io_iom__parse_tree__prog_io_iom__du_functor_desc_item_or_marker_0_0
};

#line 403 "parse_tree.prog_io_iom.c"
static const MR_DuFunctorDescPtr parse_tree__prog_io_iom__parse_tree__prog_io_iom__du_stag_ordered_item_or_marker_0_1[1] = {
  &parse_tree__prog_io_iom__parse_tree__prog_io_iom__du_functor_desc_item_or_marker_0_1
};

#line 408 "parse_tree.prog_io_iom.c"
static const MR_DuFunctorDescPtr parse_tree__prog_io_iom__parse_tree__prog_io_iom__du_stag_ordered_item_or_marker_0_2[1] = {
  &parse_tree__prog_io_iom__parse_tree__prog_io_iom__du_functor_desc_item_or_marker_0_2
};

#line 413 "parse_tree.prog_io_iom.c"
static const MR_DuFunctorDescPtr parse_tree__prog_io_iom__parse_tree__prog_io_iom__du_stag_ordered_item_or_marker_0_3[5] = {
  &parse_tree__prog_io_iom__parse_tree__prog_io_iom__du_functor_desc_item_or_marker_0_3,
  &parse_tree__prog_io_iom__parse_tree__prog_io_iom__du_functor_desc_item_or_marker_0_4,
  &parse_tree__prog_io_iom__parse_tree__prog_io_iom__du_functor_desc_item_or_marker_0_5,
  &parse_tree__prog_io_iom__parse_tree__prog_io_iom__du_functor_desc_item_or_marker_0_6,
  &parse_tree__prog_io_iom__parse_tree__prog_io_iom__du_functor_desc_item_or_marker_0_7
};

#line 422 "parse_tree.prog_io_iom.c"
static const MR_DuPtagLayout parse_tree__prog_io_iom__parse_tree__prog_io_iom__du_ptag_ordered_item_or_marker_0[4] = {
  {
    (MR_Integer) 1,
    mercury__private_builtin__MR_SECTAG_NONE,
    parse_tree__prog_io_iom__parse_tree__prog_io_iom__du_stag_ordered_item_or_marker_0_0
  },
  {
    (MR_Integer) 1,
    mercury__private_builtin__MR_SECTAG_NONE,
    parse_tree__prog_io_iom__parse_tree__prog_io_iom__du_stag_ordered_item_or_marker_0_1
  },
  {
    (MR_Integer) 1,
    mercury__private_builtin__MR_SECTAG_NONE,
    parse_tree__prog_io_iom__parse_tree__prog_io_iom__du_stag_ordered_item_or_marker_0_2
  },
  {
    (MR_Integer) 5,
    mercury__private_builtin__MR_SECTAG_REMOTE,
    parse_tree__prog_io_iom__parse_tree__prog_io_iom__du_stag_ordered_item_or_marker_0_3
  }
};

#line 446 "parse_tree.prog_io_iom.c"
static const MR_DuFunctorDescPtr parse_tree__prog_io_iom__parse_tree__prog_io_iom__du_name_ordered_item_or_marker_0[8] = {
  &parse_tree__prog_io_iom__parse_tree__prog_io_iom__du_functor_desc_item_or_marker_0_0,
  &parse_tree__prog_io_iom__parse_tree__prog_io_iom__du_functor_desc_item_or_marker_0_2,
  &parse_tree__prog_io_iom__parse_tree__prog_io_iom__du_functor_desc_item_or_marker_0_1,
  &parse_tree__prog_io_iom__parse_tree__prog_io_iom__du_functor_desc_item_or_marker_0_6,
  &parse_tree__prog_io_iom__parse_tree__prog_io_iom__du_functor_desc_item_or_marker_0_5,
  &parse_tree__prog_io_iom__parse_tree__prog_io_iom__du_functor_desc_item_or_marker_0_7,
  &parse_tree__prog_io_iom__parse_tree__prog_io_iom__du_functor_desc_item_or_marker_0_4,
  &parse_tree__prog_io_iom__parse_tree__prog_io_iom__du_functor_desc_item_or_marker_0_3
};

#line 458 "parse_tree.prog_io_iom.c"
static const MR_Integer parse_tree__prog_io_iom__parse_tree__prog_io_iom__functor_number_map_item_or_marker_0[8] = {
  (MR_Integer) 0,
  (MR_Integer) 2,
  (MR_Integer) 1,
  (MR_Integer) 7,
  (MR_Integer) 6,
  (MR_Integer) 4,
  (MR_Integer) 3,
  (MR_Integer) 5
};

#line 470 "parse_tree.prog_io_iom.c"
const MR_TypeCtorInfo_Struct parse_tree__prog_io_iom__parse_tree__prog_io_iom__type_ctor_info_item_or_marker_0 = {
  (MR_Integer) 0,
  (MR_Integer) 15,
  (MR_Integer) 4,
  mercury__private_builtin__MR_TYPECTOR_REP_DU,
  ((MR_Box) (parse_tree__prog_io_iom____Unify____item_or_marker_0_0_10001)),
  ((MR_Box) (parse_tree__prog_io_iom____Compare____item_or_marker_0_0_10001)),
  (MR_String) "parse_tree.prog_io_iom",
  (MR_String) "item_or_marker",
  {     parse_tree__prog_io_iom__parse_tree__prog_io_iom__du_name_ordered_item_or_marker_0 },
  {     parse_tree__prog_io_iom__parse_tree__prog_io_iom__du_ptag_ordered_item_or_marker_0 },
  (MR_Integer) 8,
  (MR_Integer) 4,
  parse_tree__prog_io_iom__parse_tree__prog_io_iom__functor_number_map_item_or_marker_0
};

#line 487 "parse_tree.prog_io_iom.c"
static MR_bool MR_CALL 
parse_tree__prog_io_iom____Unify____item_or_marker_0_0_10001(
#line 490 "parse_tree.prog_io_iom.c"
  MR_Box parse_tree__prog_io_iom__wrapper_arg_1,
#line 492 "parse_tree.prog_io_iom.c"
  MR_Box parse_tree__prog_io_iom__wrapper_arg_2)
#line 494 "parse_tree.prog_io_iom.c"
{
#line 496 "parse_tree.prog_io_iom.c"
  {
#line 498 "parse_tree.prog_io_iom.c"
    MR_bool parse_tree__prog_io_iom__succeeded;

#line 501 "parse_tree.prog_io_iom.c"
    {
#line 503 "parse_tree.prog_io_iom.c"
      parse_tree__prog_io_iom__succeeded = parse_tree__prog_io_iom____Unify____item_or_marker_0_0(((MR_Word) parse_tree__prog_io_iom__wrapper_arg_1), ((MR_Word) parse_tree__prog_io_iom__wrapper_arg_2));
    }
#line 506 "parse_tree.prog_io_iom.c"
    return parse_tree__prog_io_iom__succeeded;
#line 508 "parse_tree.prog_io_iom.c"
  }
#line 510 "parse_tree.prog_io_iom.c"
}

#line 513 "parse_tree.prog_io_iom.c"
static void MR_CALL 
parse_tree__prog_io_iom____Compare____item_or_marker_0_0_10001(
#line 516 "parse_tree.prog_io_iom.c"
  MR_Box * parse_tree__prog_io_iom__wrapper_arg_1,
#line 518 "parse_tree.prog_io_iom.c"
  MR_Box parse_tree__prog_io_iom__wrapper_arg_2,
#line 520 "parse_tree.prog_io_iom.c"
  MR_Box parse_tree__prog_io_iom__wrapper_arg_3)
#line 522 "parse_tree.prog_io_iom.c"
{
#line 524 "parse_tree.prog_io_iom.c"
  {
#line 526 "parse_tree.prog_io_iom.c"
    MR_Word parse_tree__prog_io_iom__conv0_HeadVar__1_1;

#line 529 "parse_tree.prog_io_iom.c"
    {
#line 531 "parse_tree.prog_io_iom.c"
      parse_tree__prog_io_iom____Compare____item_or_marker_0_0(&parse_tree__prog_io_iom__conv0_HeadVar__1_1, ((MR_Word) parse_tree__prog_io_iom__wrapper_arg_2), ((MR_Word) parse_tree__prog_io_iom__wrapper_arg_3));
    }
#line 534 "parse_tree.prog_io_iom.c"
    *parse_tree__prog_io_iom__wrapper_arg_1 = ((MR_Box) (parse_tree__prog_io_iom__conv0_HeadVar__1_1));
#line 536 "parse_tree.prog_io_iom.c"
  }
#line 538 "parse_tree.prog_io_iom.c"
}

#line 27 "prog_io_iom.m"
void MR_CALL 
parse_tree__prog_io_iom____Compare____item_or_marker_0_0(
#line 27 "prog_io_iom.m"
  MR_Word * parse_tree__prog_io_iom__HeadVar__1_1,
#line 27 "prog_io_iom.m"
  MR_Word parse_tree__prog_io_iom__HeadVar__2_2,
#line 27 "prog_io_iom.m"
  MR_Word parse_tree__prog_io_iom__HeadVar__3_3)
#line 27 "prog_io_iom.m"
{
#line 27 "prog_io_iom.m"
  {
#line 27 "prog_io_iom.m"
    MR_bool parse_tree__prog_io_iom__succeeded;
#line 27 "prog_io_iom.m"
    MR_Integer parse_tree__prog_io_iom__CastX_234 = (MR_Integer) parse_tree__prog_io_iom__HeadVar__2_2;
#line 27 "prog_io_iom.m"
    MR_Integer parse_tree__prog_io_iom__CastY_235 = (MR_Integer) parse_tree__prog_io_iom__HeadVar__3_3;

#line 27 "prog_io_iom.m"
    parse_tree__prog_io_iom__succeeded = (parse_tree__prog_io_iom__CastX_234 == parse_tree__prog_io_iom__CastY_235);
#line 27 "prog_io_iom.m"
    if (parse_tree__prog_io_iom__succeeded)
#line 565 "parse_tree.prog_io_iom.c"
      *parse_tree__prog_io_iom__HeadVar__1_1 = (MR_Integer) 0;
#line 27 "prog_io_iom.m"
    else
#line 27 "prog_io_iom.m"
#line 27 "prog_io_iom.m"
      switch (MR_tag((MR_Word) parse_tree__prog_io_iom__HeadVar__2_2)) {
#line 27 "prog_io_iom.m"
        default: /*NOTREACHED*/ MR_assert(0);
#line 27 "prog_io_iom.m"
        case (MR_Integer) 0:
#line 27 "prog_io_iom.m"
          {
#line 27 "prog_io_iom.m"
            MR_Word parse_tree__prog_io_iom__V_250_250 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_iom__HeadVar__2_2, (MR_Integer) 0)));

#line 27 "prog_io_iom.m"
#line 27 "prog_io_iom.m"
            switch (MR_tag((MR_Word) parse_tree__prog_io_iom__HeadVar__3_3)) {
#line 27 "prog_io_iom.m"
              default: /*NOTREACHED*/ MR_assert(0);
#line 27 "prog_io_iom.m"
              case (MR_Integer) 0:
#line 27 "prog_io_iom.m"
                {
#line 27 "prog_io_iom.m"
                  MR_Word parse_tree__prog_io_iom__V_5_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_iom__HeadVar__3_3, (MR_Integer) 0)));

#line 27 "prog_io_iom.m"
                  {
#line 27 "prog_io_iom.m"
                    parse_tree__prog_item____Compare____item_0_0(parse_tree__prog_io_iom__HeadVar__1_1, parse_tree__prog_io_iom__V_250_250, parse_tree__prog_io_iom__V_5_5);
                  }
#line 27 "prog_io_iom.m"
                }
#line 27 "prog_io_iom.m"
                break;
#line 27 "prog_io_iom.m"
              case (MR_Integer) 1:
#line 604 "parse_tree.prog_io_iom.c"
                *parse_tree__prog_io_iom__HeadVar__1_1 = (MR_Integer) 1;
#line 27 "prog_io_iom.m"
                break;
#line 27 "prog_io_iom.m"
              case (MR_Integer) 2:
#line 610 "parse_tree.prog_io_iom.c"
                *parse_tree__prog_io_iom__HeadVar__1_1 = (MR_Integer) 1;
#line 27 "prog_io_iom.m"
                break;
#line 27 "prog_io_iom.m"
              case (MR_Integer) 3:
#line 27 "prog_io_iom.m"
#line 27 "prog_io_iom.m"
                switch (((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__prog_io_iom__HeadVar__3_3, (MR_Integer) 0)))) {
#line 27 "prog_io_iom.m"
                  default: /*NOTREACHED*/ MR_assert(0);
#line 27 "prog_io_iom.m"
                  case (MR_Integer) 0:
#line 623 "parse_tree.prog_io_iom.c"
                    *parse_tree__prog_io_iom__HeadVar__1_1 = (MR_Integer) 1;
#line 27 "prog_io_iom.m"
                    break;
#line 27 "prog_io_iom.m"
                  case (MR_Integer) 1:
#line 629 "parse_tree.prog_io_iom.c"
                    *parse_tree__prog_io_iom__HeadVar__1_1 = (MR_Integer) 1;
#line 27 "prog_io_iom.m"
                    break;
#line 27 "prog_io_iom.m"
                  case (MR_Integer) 2:
#line 635 "parse_tree.prog_io_iom.c"
                    *parse_tree__prog_io_iom__HeadVar__1_1 = (MR_Integer) 1;
#line 27 "prog_io_iom.m"
                    break;
#line 27 "prog_io_iom.m"
                  case (MR_Integer) 3:
#line 641 "parse_tree.prog_io_iom.c"
                    *parse_tree__prog_io_iom__HeadVar__1_1 = (MR_Integer) 1;
#line 27 "prog_io_iom.m"
                    break;
#line 27 "prog_io_iom.m"
                  case (MR_Integer) 4:
#line 647 "parse_tree.prog_io_iom.c"
                    *parse_tree__prog_io_iom__HeadVar__1_1 = (MR_Integer) 1;
#line 27 "prog_io_iom.m"
                    break;
#line 27 "prog_io_iom.m"
                }
#line 27 "prog_io_iom.m"
                break;
#line 27 "prog_io_iom.m"
            }
#line 27 "prog_io_iom.m"
          }
#line 27 "prog_io_iom.m"
          break;
#line 27 "prog_io_iom.m"
        case (MR_Integer) 1:
#line 27 "prog_io_iom.m"
          {
#line 27 "prog_io_iom.m"
            MR_Word parse_tree__prog_io_iom__V_252_252 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_iom__HeadVar__2_2, (MR_Integer) 0)));

#line 27 "prog_io_iom.m"
#line 27 "prog_io_iom.m"
            switch (MR_tag((MR_Word) parse_tree__prog_io_iom__HeadVar__3_3)) {
#line 27 "prog_io_iom.m"
              default: /*NOTREACHED*/ MR_assert(0);
#line 27 "prog_io_iom.m"
              case (MR_Integer) 0:
#line 675 "parse_tree.prog_io_iom.c"
                *parse_tree__prog_io_iom__HeadVar__1_1 = (MR_Integer) 2;
#line 27 "prog_io_iom.m"
                break;
#line 27 "prog_io_iom.m"
              case (MR_Integer) 1:
#line 27 "prog_io_iom.m"
                {
#line 27 "prog_io_iom.m"
                  MR_Word parse_tree__prog_io_iom__V_29_29 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_iom__HeadVar__3_3, (MR_Integer) 0)));

#line 27 "prog_io_iom.m"
                  {
#line 27 "prog_io_iom.m"
                    mercury__builtin__compare_3_p_0((MR_Word) &parse_tree__prog_io_iom_scalar_common_1[1], parse_tree__prog_io_iom__HeadVar__1_1, ((MR_Box) (parse_tree__prog_io_iom__V_252_252)), ((MR_Box) (parse_tree__prog_io_iom__V_29_29)));
                  }
#line 27 "prog_io_iom.m"
                }
#line 27 "prog_io_iom.m"
                break;
#line 27 "prog_io_iom.m"
              case (MR_Integer) 2:
#line 697 "parse_tree.prog_io_iom.c"
                *parse_tree__prog_io_iom__HeadVar__1_1 = (MR_Integer) 1;
#line 27 "prog_io_iom.m"
                break;
#line 27 "prog_io_iom.m"
              case (MR_Integer) 3:
#line 27 "prog_io_iom.m"
#line 27 "prog_io_iom.m"
                switch (((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__prog_io_iom__HeadVar__3_3, (MR_Integer) 0)))) {
#line 27 "prog_io_iom.m"
                  default: /*NOTREACHED*/ MR_assert(0);
#line 27 "prog_io_iom.m"
                  case (MR_Integer) 0:
#line 710 "parse_tree.prog_io_iom.c"
                    *parse_tree__prog_io_iom__HeadVar__1_1 = (MR_Integer) 1;
#line 27 "prog_io_iom.m"
                    break;
#line 27 "prog_io_iom.m"
                  case (MR_Integer) 1:
#line 716 "parse_tree.prog_io_iom.c"
                    *parse_tree__prog_io_iom__HeadVar__1_1 = (MR_Integer) 1;
#line 27 "prog_io_iom.m"
                    break;
#line 27 "prog_io_iom.m"
                  case (MR_Integer) 2:
#line 722 "parse_tree.prog_io_iom.c"
                    *parse_tree__prog_io_iom__HeadVar__1_1 = (MR_Integer) 1;
#line 27 "prog_io_iom.m"
                    break;
#line 27 "prog_io_iom.m"
                  case (MR_Integer) 3:
#line 728 "parse_tree.prog_io_iom.c"
                    *parse_tree__prog_io_iom__HeadVar__1_1 = (MR_Integer) 1;
#line 27 "prog_io_iom.m"
                    break;
#line 27 "prog_io_iom.m"
                  case (MR_Integer) 4:
#line 734 "parse_tree.prog_io_iom.c"
                    *parse_tree__prog_io_iom__HeadVar__1_1 = (MR_Integer) 1;
#line 27 "prog_io_iom.m"
                    break;
#line 27 "prog_io_iom.m"
                }
#line 27 "prog_io_iom.m"
                break;
#line 27 "prog_io_iom.m"
            }
#line 27 "prog_io_iom.m"
          }
#line 27 "prog_io_iom.m"
          break;
#line 27 "prog_io_iom.m"
        case (MR_Integer) 2:
#line 27 "prog_io_iom.m"
          {
#line 27 "prog_io_iom.m"
            MR_Word parse_tree__prog_io_iom__V_251_251 = ((MR_Word) (MR_hl_field(MR_mktag(2), parse_tree__prog_io_iom__HeadVar__2_2, (MR_Integer) 0)));

#line 27 "prog_io_iom.m"
#line 27 "prog_io_iom.m"
            switch (MR_tag((MR_Word) parse_tree__prog_io_iom__HeadVar__3_3)) {
#line 27 "prog_io_iom.m"
              default: /*NOTREACHED*/ MR_assert(0);
#line 27 "prog_io_iom.m"
              case (MR_Integer) 0:
#line 762 "parse_tree.prog_io_iom.c"
                *parse_tree__prog_io_iom__HeadVar__1_1 = (MR_Integer) 2;
#line 27 "prog_io_iom.m"
                break;
#line 27 "prog_io_iom.m"
              case (MR_Integer) 1:
#line 768 "parse_tree.prog_io_iom.c"
                *parse_tree__prog_io_iom__HeadVar__1_1 = (MR_Integer) 2;
#line 27 "prog_io_iom.m"
                break;
#line 27 "prog_io_iom.m"
              case (MR_Integer) 2:
#line 27 "prog_io_iom.m"
                {
#line 27 "prog_io_iom.m"
                  MR_Word parse_tree__prog_io_iom__V_53_53 = ((MR_Word) (MR_hl_field(MR_mktag(2), parse_tree__prog_io_iom__HeadVar__3_3, (MR_Integer) 0)));

#line 27 "prog_io_iom.m"
                  {
#line 27 "prog_io_iom.m"
                    mercury__builtin__compare_3_p_0((MR_Word) &parse_tree__prog_io_iom_scalar_common_1[0], parse_tree__prog_io_iom__HeadVar__1_1, ((MR_Box) (parse_tree__prog_io_iom__V_251_251)), ((MR_Box) (parse_tree__prog_io_iom__V_53_53)));
                  }
#line 27 "prog_io_iom.m"
                }
#line 27 "prog_io_iom.m"
                break;
#line 27 "prog_io_iom.m"
              case (MR_Integer) 3:
#line 27 "prog_io_iom.m"
#line 27 "prog_io_iom.m"
                switch (((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__prog_io_iom__HeadVar__3_3, (MR_Integer) 0)))) {
#line 27 "prog_io_iom.m"
                  default: /*NOTREACHED*/ MR_assert(0);
#line 27 "prog_io_iom.m"
                  case (MR_Integer) 0:
#line 797 "parse_tree.prog_io_iom.c"
                    *parse_tree__prog_io_iom__HeadVar__1_1 = (MR_Integer) 1;
#line 27 "prog_io_iom.m"
                    break;
#line 27 "prog_io_iom.m"
                  case (MR_Integer) 1:
#line 803 "parse_tree.prog_io_iom.c"
                    *parse_tree__prog_io_iom__HeadVar__1_1 = (MR_Integer) 1;
#line 27 "prog_io_iom.m"
                    break;
#line 27 "prog_io_iom.m"
                  case (MR_Integer) 2:
#line 809 "parse_tree.prog_io_iom.c"
                    *parse_tree__prog_io_iom__HeadVar__1_1 = (MR_Integer) 1;
#line 27 "prog_io_iom.m"
                    break;
#line 27 "prog_io_iom.m"
                  case (MR_Integer) 3:
#line 815 "parse_tree.prog_io_iom.c"
                    *parse_tree__prog_io_iom__HeadVar__1_1 = (MR_Integer) 1;
#line 27 "prog_io_iom.m"
                    break;
#line 27 "prog_io_iom.m"
                  case (MR_Integer) 4:
#line 821 "parse_tree.prog_io_iom.c"
                    *parse_tree__prog_io_iom__HeadVar__1_1 = (MR_Integer) 1;
#line 27 "prog_io_iom.m"
                    break;
#line 27 "prog_io_iom.m"
                }
#line 27 "prog_io_iom.m"
                break;
#line 27 "prog_io_iom.m"
            }
#line 27 "prog_io_iom.m"
          }
#line 27 "prog_io_iom.m"
          break;
#line 27 "prog_io_iom.m"
        case (MR_Integer) 3:
#line 27 "prog_io_iom.m"
#line 27 "prog_io_iom.m"
          switch (((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__prog_io_iom__HeadVar__2_2, (MR_Integer) 0)))) {
#line 27 "prog_io_iom.m"
            default: /*NOTREACHED*/ MR_assert(0);
#line 27 "prog_io_iom.m"
            case (MR_Integer) 0:
#line 27 "prog_io_iom.m"
              {
#line 27 "prog_io_iom.m"
                MR_Word parse_tree__prog_io_iom__V_263_263 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__prog_io_iom__HeadVar__2_2, (MR_Integer) 1)));

#line 27 "prog_io_iom.m"
#line 27 "prog_io_iom.m"
                switch (MR_tag((MR_Word) parse_tree__prog_io_iom__HeadVar__3_3)) {
#line 27 "prog_io_iom.m"
                  default: /*NOTREACHED*/ MR_assert(0);
#line 27 "prog_io_iom.m"
                  case (MR_Integer) 0:
#line 856 "parse_tree.prog_io_iom.c"
                    *parse_tree__prog_io_iom__HeadVar__1_1 = (MR_Integer) 2;
#line 27 "prog_io_iom.m"
                    break;
#line 27 "prog_io_iom.m"
                  case (MR_Integer) 1:
#line 862 "parse_tree.prog_io_iom.c"
                    *parse_tree__prog_io_iom__HeadVar__1_1 = (MR_Integer) 2;
#line 27 "prog_io_iom.m"
                    break;
#line 27 "prog_io_iom.m"
                  case (MR_Integer) 2:
#line 868 "parse_tree.prog_io_iom.c"
                    *parse_tree__prog_io_iom__HeadVar__1_1 = (MR_Integer) 2;
#line 27 "prog_io_iom.m"
                    break;
#line 27 "prog_io_iom.m"
                  case (MR_Integer) 3:
#line 27 "prog_io_iom.m"
#line 27 "prog_io_iom.m"
                    switch (((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__prog_io_iom__HeadVar__3_3, (MR_Integer) 0)))) {
#line 27 "prog_io_iom.m"
                      default: /*NOTREACHED*/ MR_assert(0);
#line 27 "prog_io_iom.m"
                      case (MR_Integer) 0:
#line 27 "prog_io_iom.m"
                        {
#line 27 "prog_io_iom.m"
                          MR_Word parse_tree__prog_io_iom__V_77_77 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__prog_io_iom__HeadVar__3_3, (MR_Integer) 1)));

#line 27 "prog_io_iom.m"
                          {
#line 27 "prog_io_iom.m"
                            recompilation____Compare____version_numbers_0_0(parse_tree__prog_io_iom__HeadVar__1_1, parse_tree__prog_io_iom__V_263_263, parse_tree__prog_io_iom__V_77_77);
                          }
#line 27 "prog_io_iom.m"
                        }
#line 27 "prog_io_iom.m"
                        break;
#line 27 "prog_io_iom.m"
                      case (MR_Integer) 1:
#line 897 "parse_tree.prog_io_iom.c"
                        *parse_tree__prog_io_iom__HeadVar__1_1 = (MR_Integer) 1;
#line 27 "prog_io_iom.m"
                        break;
#line 27 "prog_io_iom.m"
                      case (MR_Integer) 2:
#line 903 "parse_tree.prog_io_iom.c"
                        *parse_tree__prog_io_iom__HeadVar__1_1 = (MR_Integer) 1;
#line 27 "prog_io_iom.m"
                        break;
#line 27 "prog_io_iom.m"
                      case (MR_Integer) 3:
#line 909 "parse_tree.prog_io_iom.c"
                        *parse_tree__prog_io_iom__HeadVar__1_1 = (MR_Integer) 1;
#line 27 "prog_io_iom.m"
                        break;
#line 27 "prog_io_iom.m"
                      case (MR_Integer) 4:
#line 915 "parse_tree.prog_io_iom.c"
                        *parse_tree__prog_io_iom__HeadVar__1_1 = (MR_Integer) 1;
#line 27 "prog_io_iom.m"
                        break;
#line 27 "prog_io_iom.m"
                    }
#line 27 "prog_io_iom.m"
                    break;
#line 27 "prog_io_iom.m"
                }
#line 27 "prog_io_iom.m"
              }
#line 27 "prog_io_iom.m"
              break;
#line 27 "prog_io_iom.m"
            case (MR_Integer) 1:
#line 27 "prog_io_iom.m"
              {
#line 27 "prog_io_iom.m"
                MR_String parse_tree__prog_io_iom__V_262_262 = ((MR_String) (MR_hl_field(MR_mktag(3), parse_tree__prog_io_iom__HeadVar__2_2, (MR_Integer) 1)));

#line 27 "prog_io_iom.m"
#line 27 "prog_io_iom.m"
                switch (MR_tag((MR_Word) parse_tree__prog_io_iom__HeadVar__3_3)) {
#line 27 "prog_io_iom.m"
                  default: /*NOTREACHED*/ MR_assert(0);
#line 27 "prog_io_iom.m"
                  case (MR_Integer) 0:
#line 943 "parse_tree.prog_io_iom.c"
                    *parse_tree__prog_io_iom__HeadVar__1_1 = (MR_Integer) 2;
#line 27 "prog_io_iom.m"
                    break;
#line 27 "prog_io_iom.m"
                  case (MR_Integer) 1:
#line 949 "parse_tree.prog_io_iom.c"
                    *parse_tree__prog_io_iom__HeadVar__1_1 = (MR_Integer) 2;
#line 27 "prog_io_iom.m"
                    break;
#line 27 "prog_io_iom.m"
                  case (MR_Integer) 2:
#line 955 "parse_tree.prog_io_iom.c"
                    *parse_tree__prog_io_iom__HeadVar__1_1 = (MR_Integer) 2;
#line 27 "prog_io_iom.m"
                    break;
#line 27 "prog_io_iom.m"
                  case (MR_Integer) 3:
#line 27 "prog_io_iom.m"
#line 27 "prog_io_iom.m"
                    switch (((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__prog_io_iom__HeadVar__3_3, (MR_Integer) 0)))) {
#line 27 "prog_io_iom.m"
                      default: /*NOTREACHED*/ MR_assert(0);
#line 27 "prog_io_iom.m"
                      case (MR_Integer) 0:
#line 968 "parse_tree.prog_io_iom.c"
                        *parse_tree__prog_io_iom__HeadVar__1_1 = (MR_Integer) 2;
#line 27 "prog_io_iom.m"
                        break;
#line 27 "prog_io_iom.m"
                      case (MR_Integer) 1:
#line 27 "prog_io_iom.m"
                        {
#line 27 "prog_io_iom.m"
                          MR_String parse_tree__prog_io_iom__V_101_101 = ((MR_String) (MR_hl_field(MR_mktag(3), parse_tree__prog_io_iom__HeadVar__3_3, (MR_Integer) 1)));

#line 27 "prog_io_iom.m"
                          {
#line 27 "prog_io_iom.m"
                            mercury__private_builtin__builtin_compare_string_3_p_0(parse_tree__prog_io_iom__HeadVar__1_1, parse_tree__prog_io_iom__V_262_262, parse_tree__prog_io_iom__V_101_101);
                          }
#line 27 "prog_io_iom.m"
                        }
#line 27 "prog_io_iom.m"
                        break;
#line 27 "prog_io_iom.m"
                      case (MR_Integer) 2:
#line 990 "parse_tree.prog_io_iom.c"
                        *parse_tree__prog_io_iom__HeadVar__1_1 = (MR_Integer) 1;
#line 27 "prog_io_iom.m"
                        break;
#line 27 "prog_io_iom.m"
                      case (MR_Integer) 3:
#line 996 "parse_tree.prog_io_iom.c"
                        *parse_tree__prog_io_iom__HeadVar__1_1 = (MR_Integer) 1;
#line 27 "prog_io_iom.m"
                        break;
#line 27 "prog_io_iom.m"
                      case (MR_Integer) 4:
#line 1002 "parse_tree.prog_io_iom.c"
                        *parse_tree__prog_io_iom__HeadVar__1_1 = (MR_Integer) 1;
#line 27 "prog_io_iom.m"
                        break;
#line 27 "prog_io_iom.m"
                    }
#line 27 "prog_io_iom.m"
                    break;
#line 27 "prog_io_iom.m"
                }
#line 27 "prog_io_iom.m"
              }
#line 27 "prog_io_iom.m"
              break;
#line 27 "prog_io_iom.m"
            case (MR_Integer) 2:
#line 27 "prog_io_iom.m"
              {
#line 27 "prog_io_iom.m"
                MR_Integer parse_tree__prog_io_iom__V_256_256 = ((MR_Integer) (MR_hl_field(MR_mktag(3), parse_tree__prog_io_iom__HeadVar__2_2, (MR_Integer) 3)));
#line 27 "prog_io_iom.m"
                MR_Word parse_tree__prog_io_iom__V_257_257 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__prog_io_iom__HeadVar__2_2, (MR_Integer) 2)));
#line 27 "prog_io_iom.m"
                MR_Word parse_tree__prog_io_iom__V_258_258 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__prog_io_iom__HeadVar__2_2, (MR_Integer) 1)));

#line 27 "prog_io_iom.m"
#line 27 "prog_io_iom.m"
                switch (MR_tag((MR_Word) parse_tree__prog_io_iom__HeadVar__3_3)) {
#line 27 "prog_io_iom.m"
                  default: /*NOTREACHED*/ MR_assert(0);
#line 27 "prog_io_iom.m"
                  case (MR_Integer) 0:
#line 1034 "parse_tree.prog_io_iom.c"
                    *parse_tree__prog_io_iom__HeadVar__1_1 = (MR_Integer) 2;
#line 27 "prog_io_iom.m"
                    break;
#line 27 "prog_io_iom.m"
                  case (MR_Integer) 1:
#line 1040 "parse_tree.prog_io_iom.c"
                    *parse_tree__prog_io_iom__HeadVar__1_1 = (MR_Integer) 2;
#line 27 "prog_io_iom.m"
                    break;
#line 27 "prog_io_iom.m"
                  case (MR_Integer) 2:
#line 1046 "parse_tree.prog_io_iom.c"
                    *parse_tree__prog_io_iom__HeadVar__1_1 = (MR_Integer) 2;
#line 27 "prog_io_iom.m"
                    break;
#line 27 "prog_io_iom.m"
                  case (MR_Integer) 3:
#line 27 "prog_io_iom.m"
#line 27 "prog_io_iom.m"
                    switch (((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__prog_io_iom__HeadVar__3_3, (MR_Integer) 0)))) {
#line 27 "prog_io_iom.m"
                      default: /*NOTREACHED*/ MR_assert(0);
#line 27 "prog_io_iom.m"
                      case (MR_Integer) 0:
#line 1059 "parse_tree.prog_io_iom.c"
                        *parse_tree__prog_io_iom__HeadVar__1_1 = (MR_Integer) 2;
#line 27 "prog_io_iom.m"
                        break;
#line 27 "prog_io_iom.m"
                      case (MR_Integer) 1:
#line 1065 "parse_tree.prog_io_iom.c"
                        *parse_tree__prog_io_iom__HeadVar__1_1 = (MR_Integer) 2;
#line 27 "prog_io_iom.m"
                        break;
#line 27 "prog_io_iom.m"
                      case (MR_Integer) 2:
#line 27 "prog_io_iom.m"
                        {
#line 27 "prog_io_iom.m"
                          MR_Word parse_tree__prog_io_iom__V_137_137 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__prog_io_iom__HeadVar__3_3, (MR_Integer) 1)));
#line 27 "prog_io_iom.m"
                          MR_Word parse_tree__prog_io_iom__V_138_138 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__prog_io_iom__HeadVar__3_3, (MR_Integer) 2)));
#line 27 "prog_io_iom.m"
                          MR_Integer parse_tree__prog_io_iom__V_139_139 = ((MR_Integer) (MR_hl_field(MR_mktag(3), parse_tree__prog_io_iom__HeadVar__3_3, (MR_Integer) 3)));
#line 27 "prog_io_iom.m"
                          MR_Word parse_tree__prog_io_iom__V_140_140;

#line 27 "prog_io_iom.m"
                          {
#line 27 "prog_io_iom.m"
                            mdbcomp__sym_name____Compare____sym_name_0_0(&parse_tree__prog_io_iom__V_140_140, parse_tree__prog_io_iom__V_258_258, parse_tree__prog_io_iom__V_137_137);
                          }
#line 1087 "parse_tree.prog_io_iom.c"
                          parse_tree__prog_io_iom__succeeded = (parse_tree__prog_io_iom__V_140_140 == (MR_Integer) 0);
#line 27 "prog_io_iom.m"
                          parse_tree__prog_io_iom__succeeded = !(parse_tree__prog_io_iom__succeeded);
#line 27 "prog_io_iom.m"
                          if (parse_tree__prog_io_iom__succeeded)
#line 27 "prog_io_iom.m"
                            *parse_tree__prog_io_iom__HeadVar__1_1 = parse_tree__prog_io_iom__V_140_140;
#line 27 "prog_io_iom.m"
                          else
#line 27 "prog_io_iom.m"
                            {
#line 27 "prog_io_iom.m"
                              MR_Word parse_tree__prog_io_iom__V_141_141;

#line 27 "prog_io_iom.m"
                              {
#line 27 "prog_io_iom.m"
                                mercury__term____Compare____context_0_0(&parse_tree__prog_io_iom__V_141_141, parse_tree__prog_io_iom__V_257_257, parse_tree__prog_io_iom__V_138_138);
                              }
#line 1107 "parse_tree.prog_io_iom.c"
                              parse_tree__prog_io_iom__succeeded = (parse_tree__prog_io_iom__V_141_141 == (MR_Integer) 0);
#line 27 "prog_io_iom.m"
                              parse_tree__prog_io_iom__succeeded = !(parse_tree__prog_io_iom__succeeded);
#line 27 "prog_io_iom.m"
                              if (parse_tree__prog_io_iom__succeeded)
#line 27 "prog_io_iom.m"
                                *parse_tree__prog_io_iom__HeadVar__1_1 = parse_tree__prog_io_iom__V_141_141;
#line 27 "prog_io_iom.m"
                              else
#line 27 "prog_io_iom.m"
                                {
#line 27 "prog_io_iom.m"
                                  mercury__private_builtin__builtin_compare_int_3_p_0(parse_tree__prog_io_iom__HeadVar__1_1, parse_tree__prog_io_iom__V_256_256, parse_tree__prog_io_iom__V_139_139);
                                }
#line 27 "prog_io_iom.m"
                            }
#line 27 "prog_io_iom.m"
                        }
#line 27 "prog_io_iom.m"
                        break;
#line 27 "prog_io_iom.m"
                      case (MR_Integer) 3:
#line 1130 "parse_tree.prog_io_iom.c"
                        *parse_tree__prog_io_iom__HeadVar__1_1 = (MR_Integer) 1;
#line 27 "prog_io_iom.m"
                        break;
#line 27 "prog_io_iom.m"
                      case (MR_Integer) 4:
#line 1136 "parse_tree.prog_io_iom.c"
                        *parse_tree__prog_io_iom__HeadVar__1_1 = (MR_Integer) 1;
#line 27 "prog_io_iom.m"
                        break;
#line 27 "prog_io_iom.m"
                    }
#line 27 "prog_io_iom.m"
                    break;
#line 27 "prog_io_iom.m"
                }
#line 27 "prog_io_iom.m"
              }
#line 27 "prog_io_iom.m"
              break;
#line 27 "prog_io_iom.m"
            case (MR_Integer) 3:
#line 27 "prog_io_iom.m"
              {
#line 27 "prog_io_iom.m"
                MR_Integer parse_tree__prog_io_iom__V_253_253 = ((MR_Integer) (MR_hl_field(MR_mktag(3), parse_tree__prog_io_iom__HeadVar__2_2, (MR_Integer) 3)));
#line 27 "prog_io_iom.m"
                MR_Word parse_tree__prog_io_iom__V_254_254 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__prog_io_iom__HeadVar__2_2, (MR_Integer) 2)));
#line 27 "prog_io_iom.m"
                MR_Word parse_tree__prog_io_iom__V_255_255 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__prog_io_iom__HeadVar__2_2, (MR_Integer) 1)));

#line 27 "prog_io_iom.m"
#line 27 "prog_io_iom.m"
                switch (MR_tag((MR_Word) parse_tree__prog_io_iom__HeadVar__3_3)) {
#line 27 "prog_io_iom.m"
                  default: /*NOTREACHED*/ MR_assert(0);
#line 27 "prog_io_iom.m"
                  case (MR_Integer) 0:
#line 1168 "parse_tree.prog_io_iom.c"
                    *parse_tree__prog_io_iom__HeadVar__1_1 = (MR_Integer) 2;
#line 27 "prog_io_iom.m"
                    break;
#line 27 "prog_io_iom.m"
                  case (MR_Integer) 1:
#line 1174 "parse_tree.prog_io_iom.c"
                    *parse_tree__prog_io_iom__HeadVar__1_1 = (MR_Integer) 2;
#line 27 "prog_io_iom.m"
                    break;
#line 27 "prog_io_iom.m"
                  case (MR_Integer) 2:
#line 1180 "parse_tree.prog_io_iom.c"
                    *parse_tree__prog_io_iom__HeadVar__1_1 = (MR_Integer) 2;
#line 27 "prog_io_iom.m"
                    break;
#line 27 "prog_io_iom.m"
                  case (MR_Integer) 3:
#line 27 "prog_io_iom.m"
#line 27 "prog_io_iom.m"
                    switch (((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__prog_io_iom__HeadVar__3_3, (MR_Integer) 0)))) {
#line 27 "prog_io_iom.m"
                      default: /*NOTREACHED*/ MR_assert(0);
#line 27 "prog_io_iom.m"
                      case (MR_Integer) 0:
#line 1193 "parse_tree.prog_io_iom.c"
                        *parse_tree__prog_io_iom__HeadVar__1_1 = (MR_Integer) 2;
#line 27 "prog_io_iom.m"
                        break;
#line 27 "prog_io_iom.m"
                      case (MR_Integer) 1:
#line 1199 "parse_tree.prog_io_iom.c"
                        *parse_tree__prog_io_iom__HeadVar__1_1 = (MR_Integer) 2;
#line 27 "prog_io_iom.m"
                        break;
#line 27 "prog_io_iom.m"
                      case (MR_Integer) 2:
#line 1205 "parse_tree.prog_io_iom.c"
                        *parse_tree__prog_io_iom__HeadVar__1_1 = (MR_Integer) 2;
#line 27 "prog_io_iom.m"
                        break;
#line 27 "prog_io_iom.m"
                      case (MR_Integer) 3:
#line 27 "prog_io_iom.m"
                        {
#line 27 "prog_io_iom.m"
                          MR_Word parse_tree__prog_io_iom__V_183_183 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__prog_io_iom__HeadVar__3_3, (MR_Integer) 1)));
#line 27 "prog_io_iom.m"
                          MR_Word parse_tree__prog_io_iom__V_184_184 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__prog_io_iom__HeadVar__3_3, (MR_Integer) 2)));
#line 27 "prog_io_iom.m"
                          MR_Integer parse_tree__prog_io_iom__V_185_185 = ((MR_Integer) (MR_hl_field(MR_mktag(3), parse_tree__prog_io_iom__HeadVar__3_3, (MR_Integer) 3)));
#line 27 "prog_io_iom.m"
                          MR_Word parse_tree__prog_io_iom__V_186_186;

#line 27 "prog_io_iom.m"
                          {
#line 27 "prog_io_iom.m"
                            mdbcomp__sym_name____Compare____sym_name_0_0(&parse_tree__prog_io_iom__V_186_186, parse_tree__prog_io_iom__V_255_255, parse_tree__prog_io_iom__V_183_183);
                          }
#line 1227 "parse_tree.prog_io_iom.c"
                          parse_tree__prog_io_iom__succeeded = (parse_tree__prog_io_iom__V_186_186 == (MR_Integer) 0);
#line 27 "prog_io_iom.m"
                          parse_tree__prog_io_iom__succeeded = !(parse_tree__prog_io_iom__succeeded);
#line 27 "prog_io_iom.m"
                          if (parse_tree__prog_io_iom__succeeded)
#line 27 "prog_io_iom.m"
                            *parse_tree__prog_io_iom__HeadVar__1_1 = parse_tree__prog_io_iom__V_186_186;
#line 27 "prog_io_iom.m"
                          else
#line 27 "prog_io_iom.m"
                            {
#line 27 "prog_io_iom.m"
                              MR_Word parse_tree__prog_io_iom__V_187_187;

#line 27 "prog_io_iom.m"
                              {
#line 27 "prog_io_iom.m"
                                mercury__term____Compare____context_0_0(&parse_tree__prog_io_iom__V_187_187, parse_tree__prog_io_iom__V_254_254, parse_tree__prog_io_iom__V_184_184);
                              }
#line 1247 "parse_tree.prog_io_iom.c"
                              parse_tree__prog_io_iom__succeeded = (parse_tree__prog_io_iom__V_187_187 == (MR_Integer) 0);
#line 27 "prog_io_iom.m"
                              parse_tree__prog_io_iom__succeeded = !(parse_tree__prog_io_iom__succeeded);
#line 27 "prog_io_iom.m"
                              if (parse_tree__prog_io_iom__succeeded)
#line 27 "prog_io_iom.m"
                                *parse_tree__prog_io_iom__HeadVar__1_1 = parse_tree__prog_io_iom__V_187_187;
#line 27 "prog_io_iom.m"
                              else
#line 27 "prog_io_iom.m"
                                {
#line 27 "prog_io_iom.m"
                                  mercury__private_builtin__builtin_compare_int_3_p_0(parse_tree__prog_io_iom__HeadVar__1_1, parse_tree__prog_io_iom__V_253_253, parse_tree__prog_io_iom__V_185_185);
                                }
#line 27 "prog_io_iom.m"
                            }
#line 27 "prog_io_iom.m"
                        }
#line 27 "prog_io_iom.m"
                        break;
#line 27 "prog_io_iom.m"
                      case (MR_Integer) 4:
#line 1270 "parse_tree.prog_io_iom.c"
                        *parse_tree__prog_io_iom__HeadVar__1_1 = (MR_Integer) 1;
#line 27 "prog_io_iom.m"
                        break;
#line 27 "prog_io_iom.m"
                    }
#line 27 "prog_io_iom.m"
                    break;
#line 27 "prog_io_iom.m"
                }
#line 27 "prog_io_iom.m"
              }
#line 27 "prog_io_iom.m"
              break;
#line 27 "prog_io_iom.m"
            case (MR_Integer) 4:
#line 27 "prog_io_iom.m"
              {
#line 27 "prog_io_iom.m"
                MR_Integer parse_tree__prog_io_iom__V_259_259 = ((MR_Integer) (MR_hl_field(MR_mktag(3), parse_tree__prog_io_iom__HeadVar__2_2, (MR_Integer) 3)));
#line 27 "prog_io_iom.m"
                MR_Word parse_tree__prog_io_iom__V_260_260 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__prog_io_iom__HeadVar__2_2, (MR_Integer) 2)));
#line 27 "prog_io_iom.m"
                MR_Word parse_tree__prog_io_iom__V_261_261 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__prog_io_iom__HeadVar__2_2, (MR_Integer) 1)));

#line 27 "prog_io_iom.m"
#line 27 "prog_io_iom.m"
                switch (MR_tag((MR_Word) parse_tree__prog_io_iom__HeadVar__3_3)) {
#line 27 "prog_io_iom.m"
                  default: /*NOTREACHED*/ MR_assert(0);
#line 27 "prog_io_iom.m"
                  case (MR_Integer) 0:
#line 1302 "parse_tree.prog_io_iom.c"
                    *parse_tree__prog_io_iom__HeadVar__1_1 = (MR_Integer) 2;
#line 27 "prog_io_iom.m"
                    break;
#line 27 "prog_io_iom.m"
                  case (MR_Integer) 1:
#line 1308 "parse_tree.prog_io_iom.c"
                    *parse_tree__prog_io_iom__HeadVar__1_1 = (MR_Integer) 2;
#line 27 "prog_io_iom.m"
                    break;
#line 27 "prog_io_iom.m"
                  case (MR_Integer) 2:
#line 1314 "parse_tree.prog_io_iom.c"
                    *parse_tree__prog_io_iom__HeadVar__1_1 = (MR_Integer) 2;
#line 27 "prog_io_iom.m"
                    break;
#line 27 "prog_io_iom.m"
                  case (MR_Integer) 3:
#line 27 "prog_io_iom.m"
#line 27 "prog_io_iom.m"
                    switch (((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__prog_io_iom__HeadVar__3_3, (MR_Integer) 0)))) {
#line 27 "prog_io_iom.m"
                      default: /*NOTREACHED*/ MR_assert(0);
#line 27 "prog_io_iom.m"
                      case (MR_Integer) 0:
#line 1327 "parse_tree.prog_io_iom.c"
                        *parse_tree__prog_io_iom__HeadVar__1_1 = (MR_Integer) 2;
#line 27 "prog_io_iom.m"
                        break;
#line 27 "prog_io_iom.m"
                      case (MR_Integer) 1:
#line 1333 "parse_tree.prog_io_iom.c"
                        *parse_tree__prog_io_iom__HeadVar__1_1 = (MR_Integer) 2;
#line 27 "prog_io_iom.m"
                        break;
#line 27 "prog_io_iom.m"
                      case (MR_Integer) 2:
#line 1339 "parse_tree.prog_io_iom.c"
                        *parse_tree__prog_io_iom__HeadVar__1_1 = (MR_Integer) 2;
#line 27 "prog_io_iom.m"
                        break;
#line 27 "prog_io_iom.m"
                      case (MR_Integer) 3:
#line 1345 "parse_tree.prog_io_iom.c"
                        *parse_tree__prog_io_iom__HeadVar__1_1 = (MR_Integer) 2;
#line 27 "prog_io_iom.m"
                        break;
#line 27 "prog_io_iom.m"
                      case (MR_Integer) 4:
#line 27 "prog_io_iom.m"
                        {
#line 27 "prog_io_iom.m"
                          MR_Word parse_tree__prog_io_iom__V_229_229 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__prog_io_iom__HeadVar__3_3, (MR_Integer) 1)));
#line 27 "prog_io_iom.m"
                          MR_Word parse_tree__prog_io_iom__V_230_230 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__prog_io_iom__HeadVar__3_3, (MR_Integer) 2)));
#line 27 "prog_io_iom.m"
                          MR_Integer parse_tree__prog_io_iom__V_231_231 = ((MR_Integer) (MR_hl_field(MR_mktag(3), parse_tree__prog_io_iom__HeadVar__3_3, (MR_Integer) 3)));
#line 27 "prog_io_iom.m"
                          MR_Word parse_tree__prog_io_iom__V_232_232;
#line 27 "prog_io_iom.m"
                          MR_Integer parse_tree__prog_io_iom__V_264_264 = (MR_Integer) parse_tree__prog_io_iom__V_261_261;
#line 27 "prog_io_iom.m"
                          MR_Integer parse_tree__prog_io_iom__V_265_265 = (MR_Integer) parse_tree__prog_io_iom__V_229_229;

#line 27 "prog_io_iom.m"
                          {
#line 27 "prog_io_iom.m"
                            mercury__private_builtin__builtin_compare_int_3_p_0(&parse_tree__prog_io_iom__V_232_232, parse_tree__prog_io_iom__V_264_264, parse_tree__prog_io_iom__V_265_265);
                          }
#line 1371 "parse_tree.prog_io_iom.c"
                          parse_tree__prog_io_iom__succeeded = (parse_tree__prog_io_iom__V_232_232 == (MR_Integer) 0);
#line 27 "prog_io_iom.m"
                          parse_tree__prog_io_iom__succeeded = !(parse_tree__prog_io_iom__succeeded);
#line 27 "prog_io_iom.m"
                          if (parse_tree__prog_io_iom__succeeded)
#line 27 "prog_io_iom.m"
                            *parse_tree__prog_io_iom__HeadVar__1_1 = parse_tree__prog_io_iom__V_232_232;
#line 27 "prog_io_iom.m"
                          else
#line 27 "prog_io_iom.m"
                            {
#line 27 "prog_io_iom.m"
                              MR_Word parse_tree__prog_io_iom__V_233_233;

#line 27 "prog_io_iom.m"
                              {
#line 27 "prog_io_iom.m"
                                mercury__term____Compare____context_0_0(&parse_tree__prog_io_iom__V_233_233, parse_tree__prog_io_iom__V_260_260, parse_tree__prog_io_iom__V_230_230);
                              }
#line 1391 "parse_tree.prog_io_iom.c"
                              parse_tree__prog_io_iom__succeeded = (parse_tree__prog_io_iom__V_233_233 == (MR_Integer) 0);
#line 27 "prog_io_iom.m"
                              parse_tree__prog_io_iom__succeeded = !(parse_tree__prog_io_iom__succeeded);
#line 27 "prog_io_iom.m"
                              if (parse_tree__prog_io_iom__succeeded)
#line 27 "prog_io_iom.m"
                                *parse_tree__prog_io_iom__HeadVar__1_1 = parse_tree__prog_io_iom__V_233_233;
#line 27 "prog_io_iom.m"
                              else
#line 27 "prog_io_iom.m"
                                {
#line 27 "prog_io_iom.m"
                                  mercury__private_builtin__builtin_compare_int_3_p_0(parse_tree__prog_io_iom__HeadVar__1_1, parse_tree__prog_io_iom__V_259_259, parse_tree__prog_io_iom__V_231_231);
                                }
#line 27 "prog_io_iom.m"
                            }
#line 27 "prog_io_iom.m"
                        }
#line 27 "prog_io_iom.m"
                        break;
#line 27 "prog_io_iom.m"
                    }
#line 27 "prog_io_iom.m"
                    break;
#line 27 "prog_io_iom.m"
                }
#line 27 "prog_io_iom.m"
              }
#line 27 "prog_io_iom.m"
              break;
#line 27 "prog_io_iom.m"
          }
#line 27 "prog_io_iom.m"
          break;
#line 27 "prog_io_iom.m"
      }
#line 27 "prog_io_iom.m"
  }
#line 27 "prog_io_iom.m"
}

#line 27 "prog_io_iom.m"
MR_bool MR_CALL 
parse_tree__prog_io_iom____Unify____item_or_marker_0_0(
#line 27 "prog_io_iom.m"
  MR_Word parse_tree__prog_io_iom__HeadVar__1_1,
#line 27 "prog_io_iom.m"
  MR_Word parse_tree__prog_io_iom__HeadVar__2_2)
#line 27 "prog_io_iom.m"
{
#line 27 "prog_io_iom.m"
  {
#line 27 "prog_io_iom.m"
    MR_bool parse_tree__prog_io_iom__succeeded;
#line 27 "prog_io_iom.m"
    MR_Integer parse_tree__prog_io_iom__CastX_31 = (MR_Integer) parse_tree__prog_io_iom__HeadVar__1_1;
#line 27 "prog_io_iom.m"
    MR_Integer parse_tree__prog_io_iom__CastY_32 = (MR_Integer) parse_tree__prog_io_iom__HeadVar__2_2;

#line 27 "prog_io_iom.m"
    parse_tree__prog_io_iom__succeeded = (parse_tree__prog_io_iom__CastX_31 == parse_tree__prog_io_iom__CastY_32);
#line 27 "prog_io_iom.m"
    if (parse_tree__prog_io_iom__succeeded)
#line 27 "prog_io_iom.m"
      parse_tree__prog_io_iom__succeeded = MR_TRUE;
#line 27 "prog_io_iom.m"
    else
#line 27 "prog_io_iom.m"
#line 27 "prog_io_iom.m"
      switch (MR_tag((MR_Word) parse_tree__prog_io_iom__HeadVar__1_1)) {
#line 27 "prog_io_iom.m"
        default: /*NOTREACHED*/ MR_assert(0);
#line 27 "prog_io_iom.m"
        case (MR_Integer) 0:
#line 27 "prog_io_iom.m"
          {
#line 27 "prog_io_iom.m"
            MR_Word parse_tree__prog_io_iom__V_3_3 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_iom__HeadVar__1_1, (MR_Integer) 0)));
#line 27 "prog_io_iom.m"
            MR_Word parse_tree__prog_io_iom__V_4_4;

#line 27 "prog_io_iom.m"
            parse_tree__prog_io_iom__succeeded = ((MR_tag((MR_Word) parse_tree__prog_io_iom__HeadVar__2_2)) == (MR_mktag((MR_Integer) 0)));
#line 27 "prog_io_iom.m"
            if (parse_tree__prog_io_iom__succeeded)
#line 27 "prog_io_iom.m"
              {
#line 27 "prog_io_iom.m"
                parse_tree__prog_io_iom__V_4_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_iom__HeadVar__2_2, (MR_Integer) 0)));
#line 1481 "parse_tree.prog_io_iom.c"
                {
#line 1483 "parse_tree.prog_io_iom.c"
                  parse_tree__prog_io_iom__succeeded = parse_tree__prog_item____Unify____item_0_0(parse_tree__prog_io_iom__V_3_3, parse_tree__prog_io_iom__V_4_4);
                }
#line 27 "prog_io_iom.m"
              }
#line 27 "prog_io_iom.m"
          }
#line 27 "prog_io_iom.m"
          break;
#line 27 "prog_io_iom.m"
        case (MR_Integer) 1:
#line 27 "prog_io_iom.m"
          {
#line 27 "prog_io_iom.m"
            MR_Word parse_tree__prog_io_iom__TypeInfo_35_35;
#line 27 "prog_io_iom.m"
            MR_Word parse_tree__prog_io_iom__V_5_5 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_iom__HeadVar__1_1, (MR_Integer) 0)));
#line 27 "prog_io_iom.m"
            MR_Word parse_tree__prog_io_iom__V_6_6;

#line 27 "prog_io_iom.m"
            parse_tree__prog_io_iom__succeeded = ((MR_tag((MR_Word) parse_tree__prog_io_iom__HeadVar__2_2)) == (MR_mktag((MR_Integer) 1)));
#line 27 "prog_io_iom.m"
            if (parse_tree__prog_io_iom__succeeded)
#line 27 "prog_io_iom.m"
              {
#line 27 "prog_io_iom.m"
                parse_tree__prog_io_iom__V_6_6 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_iom__HeadVar__2_2, (MR_Integer) 0)));
#line 1511 "parse_tree.prog_io_iom.c"
                parse_tree__prog_io_iom__TypeInfo_35_35 = (MR_Word) &parse_tree__prog_io_iom_scalar_common_1[1];
#line 1513 "parse_tree.prog_io_iom.c"
                {
#line 1515 "parse_tree.prog_io_iom.c"
                  parse_tree__prog_io_iom__succeeded = mercury__builtin__unify_2_p_0(parse_tree__prog_io_iom__TypeInfo_35_35, ((MR_Box) (parse_tree__prog_io_iom__V_5_5)), ((MR_Box) (parse_tree__prog_io_iom__V_6_6)));
                }
#line 27 "prog_io_iom.m"
              }
#line 27 "prog_io_iom.m"
          }
#line 27 "prog_io_iom.m"
          break;
#line 27 "prog_io_iom.m"
        case (MR_Integer) 2:
#line 27 "prog_io_iom.m"
          {
#line 27 "prog_io_iom.m"
            MR_Word parse_tree__prog_io_iom__TypeInfo_34_34;
#line 27 "prog_io_iom.m"
            MR_Word parse_tree__prog_io_iom__V_7_7 = ((MR_Word) (MR_hl_field(MR_mktag(2), parse_tree__prog_io_iom__HeadVar__1_1, (MR_Integer) 0)));
#line 27 "prog_io_iom.m"
            MR_Word parse_tree__prog_io_iom__V_8_8;

#line 27 "prog_io_iom.m"
            parse_tree__prog_io_iom__succeeded = ((MR_tag((MR_Word) parse_tree__prog_io_iom__HeadVar__2_2)) == (MR_mktag((MR_Integer) 2)));
#line 27 "prog_io_iom.m"
            if (parse_tree__prog_io_iom__succeeded)
#line 27 "prog_io_iom.m"
              {
#line 27 "prog_io_iom.m"
                parse_tree__prog_io_iom__V_8_8 = ((MR_Word) (MR_hl_field(MR_mktag(2), parse_tree__prog_io_iom__HeadVar__2_2, (MR_Integer) 0)));
#line 1543 "parse_tree.prog_io_iom.c"
                parse_tree__prog_io_iom__TypeInfo_34_34 = (MR_Word) &parse_tree__prog_io_iom_scalar_common_1[0];
#line 1545 "parse_tree.prog_io_iom.c"
                {
#line 1547 "parse_tree.prog_io_iom.c"
                  parse_tree__prog_io_iom__succeeded = mercury__builtin__unify_2_p_0(parse_tree__prog_io_iom__TypeInfo_34_34, ((MR_Box) (parse_tree__prog_io_iom__V_7_7)), ((MR_Box) (parse_tree__prog_io_iom__V_8_8)));
                }
#line 27 "prog_io_iom.m"
              }
#line 27 "prog_io_iom.m"
          }
#line 27 "prog_io_iom.m"
          break;
#line 27 "prog_io_iom.m"
        case (MR_Integer) 3:
#line 27 "prog_io_iom.m"
#line 27 "prog_io_iom.m"
          switch (((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__prog_io_iom__HeadVar__1_1, (MR_Integer) 0)))) {
#line 27 "prog_io_iom.m"
            default: /*NOTREACHED*/ MR_assert(0);
#line 27 "prog_io_iom.m"
            case (MR_Integer) 0:
#line 27 "prog_io_iom.m"
              {
#line 27 "prog_io_iom.m"
                MR_Word parse_tree__prog_io_iom__V_9_9 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__prog_io_iom__HeadVar__1_1, (MR_Integer) 1)));
#line 27 "prog_io_iom.m"
                MR_Word parse_tree__prog_io_iom__V_10_10;

#line 27 "prog_io_iom.m"
                parse_tree__prog_io_iom__succeeded = ((((MR_tag((MR_Word) parse_tree__prog_io_iom__HeadVar__2_2)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__prog_io_iom__HeadVar__2_2, (MR_Integer) 0)))) == (MR_Integer) 0)));
#line 27 "prog_io_iom.m"
                if (parse_tree__prog_io_iom__succeeded)
#line 27 "prog_io_iom.m"
                  {
#line 27 "prog_io_iom.m"
                    parse_tree__prog_io_iom__V_10_10 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__prog_io_iom__HeadVar__2_2, (MR_Integer) 1)));
#line 1580 "parse_tree.prog_io_iom.c"
                    {
#line 1582 "parse_tree.prog_io_iom.c"
                      parse_tree__prog_io_iom__succeeded = recompilation____Unify____version_numbers_0_0(parse_tree__prog_io_iom__V_9_9, parse_tree__prog_io_iom__V_10_10);
                    }
#line 27 "prog_io_iom.m"
                  }
#line 27 "prog_io_iom.m"
              }
#line 27 "prog_io_iom.m"
              break;
#line 27 "prog_io_iom.m"
            case (MR_Integer) 1:
#line 27 "prog_io_iom.m"
              {
#line 27 "prog_io_iom.m"
                MR_String parse_tree__prog_io_iom__V_11_11 = ((MR_String) (MR_hl_field(MR_mktag(3), parse_tree__prog_io_iom__HeadVar__1_1, (MR_Integer) 1)));
#line 27 "prog_io_iom.m"
                MR_String parse_tree__prog_io_iom__V_12_12;

#line 27 "prog_io_iom.m"
                parse_tree__prog_io_iom__succeeded = ((((MR_tag((MR_Word) parse_tree__prog_io_iom__HeadVar__2_2)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__prog_io_iom__HeadVar__2_2, (MR_Integer) 0)))) == (MR_Integer) 1)));
#line 27 "prog_io_iom.m"
                if (parse_tree__prog_io_iom__succeeded)
#line 27 "prog_io_iom.m"
                  {
#line 27 "prog_io_iom.m"
                    parse_tree__prog_io_iom__V_12_12 = ((MR_String) (MR_hl_field(MR_mktag(3), parse_tree__prog_io_iom__HeadVar__2_2, (MR_Integer) 1)));
#line 1608 "parse_tree.prog_io_iom.c"
                    parse_tree__prog_io_iom__succeeded = (strcmp(parse_tree__prog_io_iom__V_11_11, parse_tree__prog_io_iom__V_12_12) == 0);
#line 27 "prog_io_iom.m"
                  }
#line 27 "prog_io_iom.m"
              }
#line 27 "prog_io_iom.m"
              break;
#line 27 "prog_io_iom.m"
            case (MR_Integer) 2:
#line 27 "prog_io_iom.m"
              {
#line 27 "prog_io_iom.m"
                MR_Word parse_tree__prog_io_iom__V_13_13 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__prog_io_iom__HeadVar__1_1, (MR_Integer) 1)));
#line 27 "prog_io_iom.m"
                MR_Word parse_tree__prog_io_iom__V_14_14 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__prog_io_iom__HeadVar__1_1, (MR_Integer) 2)));
#line 27 "prog_io_iom.m"
                MR_Integer parse_tree__prog_io_iom__V_15_15 = ((MR_Integer) (MR_hl_field(MR_mktag(3), parse_tree__prog_io_iom__HeadVar__1_1, (MR_Integer) 3)));
#line 27 "prog_io_iom.m"
                MR_Word parse_tree__prog_io_iom__V_16_16;
#line 27 "prog_io_iom.m"
                MR_Word parse_tree__prog_io_iom__V_17_17;
#line 27 "prog_io_iom.m"
                MR_Integer parse_tree__prog_io_iom__V_18_18;

#line 27 "prog_io_iom.m"
                parse_tree__prog_io_iom__succeeded = ((((MR_tag((MR_Word) parse_tree__prog_io_iom__HeadVar__2_2)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__prog_io_iom__HeadVar__2_2, (MR_Integer) 0)))) == (MR_Integer) 2)));
#line 27 "prog_io_iom.m"
                if (parse_tree__prog_io_iom__succeeded)
#line 27 "prog_io_iom.m"
                  {
#line 27 "prog_io_iom.m"
                    parse_tree__prog_io_iom__V_16_16 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__prog_io_iom__HeadVar__2_2, (MR_Integer) 1)));
#line 27 "prog_io_iom.m"
                    parse_tree__prog_io_iom__V_17_17 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__prog_io_iom__HeadVar__2_2, (MR_Integer) 2)));
#line 27 "prog_io_iom.m"
                    parse_tree__prog_io_iom__V_18_18 = ((MR_Integer) (MR_hl_field(MR_mktag(3), parse_tree__prog_io_iom__HeadVar__2_2, (MR_Integer) 3)));
#line 1645 "parse_tree.prog_io_iom.c"
                    {
#line 1647 "parse_tree.prog_io_iom.c"
                      parse_tree__prog_io_iom__succeeded = mdbcomp__sym_name____Unify____sym_name_0_0(parse_tree__prog_io_iom__V_13_13, parse_tree__prog_io_iom__V_16_16);
                    }
#line 27 "prog_io_iom.m"
                    if (parse_tree__prog_io_iom__succeeded)
#line 27 "prog_io_iom.m"
                      {
#line 1654 "parse_tree.prog_io_iom.c"
                        {
#line 1656 "parse_tree.prog_io_iom.c"
                          parse_tree__prog_io_iom__succeeded = mercury__term____Unify____context_0_0(parse_tree__prog_io_iom__V_14_14, parse_tree__prog_io_iom__V_17_17);
                        }
#line 27 "prog_io_iom.m"
                        if (parse_tree__prog_io_iom__succeeded)
#line 1661 "parse_tree.prog_io_iom.c"
                          parse_tree__prog_io_iom__succeeded = (parse_tree__prog_io_iom__V_15_15 == parse_tree__prog_io_iom__V_18_18);
#line 27 "prog_io_iom.m"
                      }
#line 27 "prog_io_iom.m"
                  }
#line 27 "prog_io_iom.m"
              }
#line 27 "prog_io_iom.m"
              break;
#line 27 "prog_io_iom.m"
            case (MR_Integer) 3:
#line 27 "prog_io_iom.m"
              {
#line 27 "prog_io_iom.m"
                MR_Word parse_tree__prog_io_iom__V_19_19 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__prog_io_iom__HeadVar__1_1, (MR_Integer) 1)));
#line 27 "prog_io_iom.m"
                MR_Word parse_tree__prog_io_iom__V_20_20 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__prog_io_iom__HeadVar__1_1, (MR_Integer) 2)));
#line 27 "prog_io_iom.m"
                MR_Integer parse_tree__prog_io_iom__V_21_21 = ((MR_Integer) (MR_hl_field(MR_mktag(3), parse_tree__prog_io_iom__HeadVar__1_1, (MR_Integer) 3)));
#line 27 "prog_io_iom.m"
                MR_Word parse_tree__prog_io_iom__V_22_22;
#line 27 "prog_io_iom.m"
                MR_Word parse_tree__prog_io_iom__V_23_23;
#line 27 "prog_io_iom.m"
                MR_Integer parse_tree__prog_io_iom__V_24_24;

#line 27 "prog_io_iom.m"
                parse_tree__prog_io_iom__succeeded = ((((MR_tag((MR_Word) parse_tree__prog_io_iom__HeadVar__2_2)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__prog_io_iom__HeadVar__2_2, (MR_Integer) 0)))) == (MR_Integer) 3)));
#line 27 "prog_io_iom.m"
                if (parse_tree__prog_io_iom__succeeded)
#line 27 "prog_io_iom.m"
                  {
#line 27 "prog_io_iom.m"
                    parse_tree__prog_io_iom__V_22_22 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__prog_io_iom__HeadVar__2_2, (MR_Integer) 1)));
#line 27 "prog_io_iom.m"
                    parse_tree__prog_io_iom__V_23_23 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__prog_io_iom__HeadVar__2_2, (MR_Integer) 2)));
#line 27 "prog_io_iom.m"
                    parse_tree__prog_io_iom__V_24_24 = ((MR_Integer) (MR_hl_field(MR_mktag(3), parse_tree__prog_io_iom__HeadVar__2_2, (MR_Integer) 3)));
#line 1700 "parse_tree.prog_io_iom.c"
                    {
#line 1702 "parse_tree.prog_io_iom.c"
                      parse_tree__prog_io_iom__succeeded = mdbcomp__sym_name____Unify____sym_name_0_0(parse_tree__prog_io_iom__V_19_19, parse_tree__prog_io_iom__V_22_22);
                    }
#line 27 "prog_io_iom.m"
                    if (parse_tree__prog_io_iom__succeeded)
#line 27 "prog_io_iom.m"
                      {
#line 1709 "parse_tree.prog_io_iom.c"
                        {
#line 1711 "parse_tree.prog_io_iom.c"
                          parse_tree__prog_io_iom__succeeded = mercury__term____Unify____context_0_0(parse_tree__prog_io_iom__V_20_20, parse_tree__prog_io_iom__V_23_23);
                        }
#line 27 "prog_io_iom.m"
                        if (parse_tree__prog_io_iom__succeeded)
#line 1716 "parse_tree.prog_io_iom.c"
                          parse_tree__prog_io_iom__succeeded = (parse_tree__prog_io_iom__V_21_21 == parse_tree__prog_io_iom__V_24_24);
#line 27 "prog_io_iom.m"
                      }
#line 27 "prog_io_iom.m"
                  }
#line 27 "prog_io_iom.m"
              }
#line 27 "prog_io_iom.m"
              break;
#line 27 "prog_io_iom.m"
            case (MR_Integer) 4:
#line 27 "prog_io_iom.m"
              {
#line 27 "prog_io_iom.m"
                MR_Word parse_tree__prog_io_iom__V_25_25 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__prog_io_iom__HeadVar__1_1, (MR_Integer) 1)));
#line 27 "prog_io_iom.m"
                MR_Word parse_tree__prog_io_iom__V_26_26 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__prog_io_iom__HeadVar__1_1, (MR_Integer) 2)));
#line 27 "prog_io_iom.m"
                MR_Integer parse_tree__prog_io_iom__V_27_27 = ((MR_Integer) (MR_hl_field(MR_mktag(3), parse_tree__prog_io_iom__HeadVar__1_1, (MR_Integer) 3)));
#line 27 "prog_io_iom.m"
                MR_Word parse_tree__prog_io_iom__V_28_28;
#line 27 "prog_io_iom.m"
                MR_Word parse_tree__prog_io_iom__V_29_29;
#line 27 "prog_io_iom.m"
                MR_Integer parse_tree__prog_io_iom__V_30_30;

#line 27 "prog_io_iom.m"
                parse_tree__prog_io_iom__succeeded = ((((MR_tag((MR_Word) parse_tree__prog_io_iom__HeadVar__2_2)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__prog_io_iom__HeadVar__2_2, (MR_Integer) 0)))) == (MR_Integer) 4)));
#line 27 "prog_io_iom.m"
                if (parse_tree__prog_io_iom__succeeded)
#line 27 "prog_io_iom.m"
                  {
#line 27 "prog_io_iom.m"
                    parse_tree__prog_io_iom__V_28_28 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__prog_io_iom__HeadVar__2_2, (MR_Integer) 1)));
#line 27 "prog_io_iom.m"
                    parse_tree__prog_io_iom__V_29_29 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__prog_io_iom__HeadVar__2_2, (MR_Integer) 2)));
#line 27 "prog_io_iom.m"
                    parse_tree__prog_io_iom__V_30_30 = ((MR_Integer) (MR_hl_field(MR_mktag(3), parse_tree__prog_io_iom__HeadVar__2_2, (MR_Integer) 3)));
#line 1755 "parse_tree.prog_io_iom.c"
                    parse_tree__prog_io_iom__succeeded = (parse_tree__prog_io_iom__V_25_25 == parse_tree__prog_io_iom__V_28_28);
#line 27 "prog_io_iom.m"
                    if (parse_tree__prog_io_iom__succeeded)
#line 27 "prog_io_iom.m"
                      {
#line 1761 "parse_tree.prog_io_iom.c"
                        {
#line 1763 "parse_tree.prog_io_iom.c"
                          parse_tree__prog_io_iom__succeeded = mercury__term____Unify____context_0_0(parse_tree__prog_io_iom__V_26_26, parse_tree__prog_io_iom__V_29_29);
                        }
#line 27 "prog_io_iom.m"
                        if (parse_tree__prog_io_iom__succeeded)
#line 1768 "parse_tree.prog_io_iom.c"
                          parse_tree__prog_io_iom__succeeded = (parse_tree__prog_io_iom__V_27_27 == parse_tree__prog_io_iom__V_30_30);
#line 27 "prog_io_iom.m"
                      }
#line 27 "prog_io_iom.m"
                  }
#line 27 "prog_io_iom.m"
              }
#line 27 "prog_io_iom.m"
              break;
#line 27 "prog_io_iom.m"
          }
#line 27 "prog_io_iom.m"
          break;
#line 27 "prog_io_iom.m"
      }
#line 27 "prog_io_iom.m"
    return parse_tree__prog_io_iom__succeeded;
#line 27 "prog_io_iom.m"
  }
#line 27 "prog_io_iom.m"
}

void mercury__parse_tree__prog_io_iom__init(void)
{
}

void mercury__parse_tree__prog_io_iom__init_type_tables(void)
{
	static MR_bool initialised = MR_FALSE;
	if (initialised) return;
	initialised = MR_TRUE;

	MR_register_type_ctor_info(&parse_tree__prog_io_iom__parse_tree__prog_io_iom__type_ctor_info_item_or_marker_0);
}

void mercury__parse_tree__prog_io_iom__init_debugger(void)
{
	MR_fatal_error("debugger initialization in MLDS grade");
}

/* ensure everything is compiled with the same grade */
static const void *const MR_grade = &MR_GRADE_VAR;

/* :- end_module parse_tree.prog_io_iom. */
