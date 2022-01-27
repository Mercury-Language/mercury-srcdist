/*
** Automatically generated from `status.m'
** by the Mercury compiler,
** version rotd-2015-07-28
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


/* :- module parse_tree.status. */
/* :- implementation. */

/*
INIT mercury__parse_tree__status__init
ENDINIT
*/

#include "parse_tree.status.mih"


#include "assoc_list.mih"
#include "bitmap.mih"
#include "bool.mih"
#include "builtin.mih"
#include "char.mih"
#include "construct.mih"
#include "deconstruct.mih"
#include "enum.mih"
#include "integer.mih"
#include "io.mih"
#include "libs.mih"
#include "list.mih"
#include "map.mih"
#include "maybe.mih"
#include "mdbcomp.mih"
#include "ops.mih"
#include "pair.mih"
#include "parse_tree.mih"
#include "pretty_printer.mih"
#include "private_builtin.mih"
#include "require.mih"
#include "rtti_implementation.mih"
#include "set.mih"
#include "set_ordlist.mih"
#include "stream.mih"
#include "string.mih"
#include "term.mih"
#include "time.mih"
#include "tree234.mih"
#include "type_desc.mih"
#include "univ.mih"
#include "mdbcomp.sym_name.mih"




#line 68 "parse_tree.status.c"
static const MR_DuFunctorDesc parse_tree__status__parse_tree__status__du_functor_desc_aug_module_section_0_0;

#line 71 "parse_tree.status.c"
static const MR_DuFunctorDesc parse_tree__status__parse_tree__status__du_functor_desc_aug_module_section_0_1;

#line 74 "parse_tree.status.c"
static const MR_DuFunctorDesc parse_tree__status__parse_tree__status__du_functor_desc_aug_module_section_0_2;

#line 77 "parse_tree.status.c"
static const MR_PseudoTypeInfo parse_tree__status__parse_tree__status__field_types_aug_module_section_0_3[2];

#line 80 "parse_tree.status.c"
static const MR_DuFunctorDesc parse_tree__status__parse_tree__status__du_functor_desc_aug_module_section_0_3;

#line 83 "parse_tree.status.c"
static const MR_PseudoTypeInfo parse_tree__status__parse_tree__status__field_types_aug_module_section_0_4[2];

#line 86 "parse_tree.status.c"
static const MR_DuFunctorDesc parse_tree__status__parse_tree__status__du_functor_desc_aug_module_section_0_4;

#line 89 "parse_tree.status.c"
static const MR_PseudoTypeInfo parse_tree__status__parse_tree__status__field_types_aug_module_section_0_5[1];

#line 92 "parse_tree.status.c"
static const MR_DuFunctorDesc parse_tree__status__parse_tree__status__du_functor_desc_aug_module_section_0_5;

#line 95 "parse_tree.status.c"
static const MR_PseudoTypeInfo parse_tree__status__parse_tree__status__field_types_aug_module_section_0_6[1];

#line 98 "parse_tree.status.c"
static const MR_DuFunctorDesc parse_tree__status__parse_tree__status__du_functor_desc_aug_module_section_0_6;

#line 101 "parse_tree.status.c"
static const MR_DuFunctorDesc parse_tree__status__parse_tree__status__du_functor_desc_aug_module_section_0_7;

#line 104 "parse_tree.status.c"
static const MR_DuFunctorDescPtr parse_tree__status__parse_tree__status__du_stag_ordered_aug_module_section_0_0[4];

#line 107 "parse_tree.status.c"
static const MR_DuFunctorDescPtr parse_tree__status__parse_tree__status__du_stag_ordered_aug_module_section_0_1[1];

#line 110 "parse_tree.status.c"
static const MR_DuFunctorDescPtr parse_tree__status__parse_tree__status__du_stag_ordered_aug_module_section_0_2[1];

#line 113 "parse_tree.status.c"
static const MR_DuFunctorDescPtr parse_tree__status__parse_tree__status__du_stag_ordered_aug_module_section_0_3[2];

#line 116 "parse_tree.status.c"
static const MR_DuPtagLayout parse_tree__status__parse_tree__status__du_ptag_ordered_aug_module_section_0[4];

#line 119 "parse_tree.status.c"
static const MR_DuFunctorDescPtr parse_tree__status__parse_tree__status__du_name_ordered_aug_module_section_0[8];

#line 122 "parse_tree.status.c"
static const MR_Integer parse_tree__status__parse_tree__status__functor_number_map_aug_module_section_0[8];

#line 125 "parse_tree.status.c"
static const MR_EnumFunctorDesc parse_tree__status__parse_tree__status__enum_functor_desc_import_locn_0_0;

#line 128 "parse_tree.status.c"
static const MR_EnumFunctorDesc parse_tree__status__parse_tree__status__enum_functor_desc_import_locn_0_1;

#line 131 "parse_tree.status.c"
static const MR_EnumFunctorDesc parse_tree__status__parse_tree__status__enum_functor_desc_import_locn_0_2;

#line 134 "parse_tree.status.c"
static const MR_EnumFunctorDesc parse_tree__status__parse_tree__status__enum_functor_desc_import_locn_0_3;

#line 137 "parse_tree.status.c"
static const MR_EnumFunctorDescPtr parse_tree__status__parse_tree__status__enum_value_ordered_import_locn_0[4];

#line 140 "parse_tree.status.c"
static const MR_EnumFunctorDescPtr parse_tree__status__parse_tree__status__enum_name_ordered_import_locn_0[4];

#line 143 "parse_tree.status.c"
static const MR_Integer parse_tree__status__parse_tree__status__functor_number_map_import_locn_0[4];

#line 146 "parse_tree.status.c"
static const MR_PseudoTypeInfo parse_tree__status__parse_tree__status__field_types_import_status_0_0[1];

#line 149 "parse_tree.status.c"
static const MR_DuFunctorDesc parse_tree__status__parse_tree__status__du_functor_desc_import_status_0_0;

#line 152 "parse_tree.status.c"
static const MR_PseudoTypeInfo parse_tree__status__parse_tree__status__field_types_import_status_0_1[1];

#line 155 "parse_tree.status.c"
static const MR_DuFunctorDesc parse_tree__status__parse_tree__status__du_functor_desc_import_status_0_1;

#line 158 "parse_tree.status.c"
static const MR_DuFunctorDesc parse_tree__status__parse_tree__status__du_functor_desc_import_status_0_2;

#line 161 "parse_tree.status.c"
static const MR_DuFunctorDesc parse_tree__status__parse_tree__status__du_functor_desc_import_status_0_3;

#line 164 "parse_tree.status.c"
static const MR_DuFunctorDesc parse_tree__status__parse_tree__status__du_functor_desc_import_status_0_4;

#line 167 "parse_tree.status.c"
static const MR_DuFunctorDesc parse_tree__status__parse_tree__status__du_functor_desc_import_status_0_5;

#line 170 "parse_tree.status.c"
static const MR_DuFunctorDesc parse_tree__status__parse_tree__status__du_functor_desc_import_status_0_6;

#line 173 "parse_tree.status.c"
static const MR_DuFunctorDesc parse_tree__status__parse_tree__status__du_functor_desc_import_status_0_7;

#line 176 "parse_tree.status.c"
static const MR_DuFunctorDesc parse_tree__status__parse_tree__status__du_functor_desc_import_status_0_8;

#line 179 "parse_tree.status.c"
static const MR_DuFunctorDesc parse_tree__status__parse_tree__status__du_functor_desc_import_status_0_9;

#line 182 "parse_tree.status.c"
static const MR_DuFunctorDesc parse_tree__status__parse_tree__status__du_functor_desc_import_status_0_10;

#line 185 "parse_tree.status.c"
static const MR_DuFunctorDescPtr parse_tree__status__parse_tree__status__du_stag_ordered_import_status_0_0[9];

#line 188 "parse_tree.status.c"
static const MR_DuFunctorDescPtr parse_tree__status__parse_tree__status__du_stag_ordered_import_status_0_1[1];

#line 191 "parse_tree.status.c"
static const MR_DuFunctorDescPtr parse_tree__status__parse_tree__status__du_stag_ordered_import_status_0_2[1];

#line 194 "parse_tree.status.c"
static const MR_DuPtagLayout parse_tree__status__parse_tree__status__du_ptag_ordered_import_status_0[3];

#line 197 "parse_tree.status.c"
static const MR_DuFunctorDescPtr parse_tree__status__parse_tree__status__du_name_ordered_import_status_0[11];

#line 200 "parse_tree.status.c"
static const MR_Integer parse_tree__status__parse_tree__status__functor_number_map_import_status_0[11];

#line 203 "parse_tree.status.c"
static const MR_PseudoTypeInfo parse_tree__status__parse_tree__status__field_types_item_status_0_0[2];

#line 206 "parse_tree.status.c"
static const MR_DuFunctorDesc parse_tree__status__parse_tree__status__du_functor_desc_item_status_0_0;

#line 209 "parse_tree.status.c"
static const MR_DuFunctorDescPtr parse_tree__status__parse_tree__status__du_stag_ordered_item_status_0_0[1];

#line 212 "parse_tree.status.c"
static const MR_DuPtagLayout parse_tree__status__parse_tree__status__du_ptag_ordered_item_status_0[1];

#line 215 "parse_tree.status.c"
static const MR_DuFunctorDescPtr parse_tree__status__parse_tree__status__du_name_ordered_item_status_0[1];

#line 218 "parse_tree.status.c"
static const MR_Integer parse_tree__status__parse_tree__status__functor_number_map_item_status_0[1];

#line 221 "parse_tree.status.c"
static const MR_EnumFunctorDesc parse_tree__status__parse_tree__status__enum_functor_desc_module_section_0_0;

#line 224 "parse_tree.status.c"
static const MR_EnumFunctorDesc parse_tree__status__parse_tree__status__enum_functor_desc_module_section_0_1;

#line 227 "parse_tree.status.c"
static const MR_EnumFunctorDescPtr parse_tree__status__parse_tree__status__enum_value_ordered_module_section_0[2];

#line 230 "parse_tree.status.c"
static const MR_EnumFunctorDescPtr parse_tree__status__parse_tree__status__enum_name_ordered_module_section_0[2];

#line 233 "parse_tree.status.c"
static const MR_Integer parse_tree__status__parse_tree__status__functor_number_map_module_section_0[2];

#line 236 "parse_tree.status.c"
static const MR_EnumFunctorDesc parse_tree__status__parse_tree__status__enum_functor_desc_need_qualifier_0_0;

#line 239 "parse_tree.status.c"
static const MR_EnumFunctorDesc parse_tree__status__parse_tree__status__enum_functor_desc_need_qualifier_0_1;

#line 242 "parse_tree.status.c"
static const MR_EnumFunctorDescPtr parse_tree__status__parse_tree__status__enum_value_ordered_need_qualifier_0[2];

#line 245 "parse_tree.status.c"
static const MR_EnumFunctorDescPtr parse_tree__status__parse_tree__status__enum_name_ordered_need_qualifier_0[2];

#line 248 "parse_tree.status.c"
static const MR_Integer parse_tree__status__parse_tree__status__functor_number_map_need_qualifier_0[2];

#line 251 "parse_tree.status.c"
static MR_bool MR_CALL 
parse_tree__status____Unify____aug_module_section_0_0_10001(
#line 254 "parse_tree.status.c"
  MR_Box parse_tree__status__wrapper_arg_1,
#line 256 "parse_tree.status.c"
  MR_Box parse_tree__status__wrapper_arg_2);

#line 259 "parse_tree.status.c"
static void MR_CALL 
parse_tree__status____Compare____aug_module_section_0_0_10001(
#line 262 "parse_tree.status.c"
  MR_Box * parse_tree__status__wrapper_arg_1,
#line 264 "parse_tree.status.c"
  MR_Box parse_tree__status__wrapper_arg_2,
#line 266 "parse_tree.status.c"
  MR_Box parse_tree__status__wrapper_arg_3);

#line 269 "parse_tree.status.c"
static MR_bool MR_CALL 
parse_tree__status____Unify____import_locn_0_0_10001(
#line 272 "parse_tree.status.c"
  MR_Box parse_tree__status__wrapper_arg_1,
#line 274 "parse_tree.status.c"
  MR_Box parse_tree__status__wrapper_arg_2);

#line 277 "parse_tree.status.c"
static void MR_CALL 
parse_tree__status____Compare____import_locn_0_0_10001(
#line 280 "parse_tree.status.c"
  MR_Box * parse_tree__status__wrapper_arg_1,
#line 282 "parse_tree.status.c"
  MR_Box parse_tree__status__wrapper_arg_2,
#line 284 "parse_tree.status.c"
  MR_Box parse_tree__status__wrapper_arg_3);

#line 287 "parse_tree.status.c"
static MR_bool MR_CALL 
parse_tree__status____Unify____import_status_0_0_10001(
#line 290 "parse_tree.status.c"
  MR_Box parse_tree__status__wrapper_arg_1,
#line 292 "parse_tree.status.c"
  MR_Box parse_tree__status__wrapper_arg_2);

#line 295 "parse_tree.status.c"
static void MR_CALL 
parse_tree__status____Compare____import_status_0_0_10001(
#line 298 "parse_tree.status.c"
  MR_Box * parse_tree__status__wrapper_arg_1,
#line 300 "parse_tree.status.c"
  MR_Box parse_tree__status__wrapper_arg_2,
#line 302 "parse_tree.status.c"
  MR_Box parse_tree__status__wrapper_arg_3);

#line 305 "parse_tree.status.c"
static MR_bool MR_CALL 
parse_tree__status____Unify____item_status_0_0_10001(
#line 308 "parse_tree.status.c"
  MR_Box parse_tree__status__wrapper_arg_1,
#line 310 "parse_tree.status.c"
  MR_Box parse_tree__status__wrapper_arg_2);

#line 313 "parse_tree.status.c"
static void MR_CALL 
parse_tree__status____Compare____item_status_0_0_10001(
#line 316 "parse_tree.status.c"
  MR_Box * parse_tree__status__wrapper_arg_1,
#line 318 "parse_tree.status.c"
  MR_Box parse_tree__status__wrapper_arg_2,
#line 320 "parse_tree.status.c"
  MR_Box parse_tree__status__wrapper_arg_3);

#line 323 "parse_tree.status.c"
static MR_bool MR_CALL 
parse_tree__status____Unify____module_section_0_0_10001(
#line 326 "parse_tree.status.c"
  MR_Box parse_tree__status__wrapper_arg_1,
#line 328 "parse_tree.status.c"
  MR_Box parse_tree__status__wrapper_arg_2);

#line 331 "parse_tree.status.c"
static void MR_CALL 
parse_tree__status____Compare____module_section_0_0_10001(
#line 334 "parse_tree.status.c"
  MR_Box * parse_tree__status__wrapper_arg_1,
#line 336 "parse_tree.status.c"
  MR_Box parse_tree__status__wrapper_arg_2,
#line 338 "parse_tree.status.c"
  MR_Box parse_tree__status__wrapper_arg_3);

#line 341 "parse_tree.status.c"
static MR_bool MR_CALL 
parse_tree__status____Unify____need_qualifier_0_0_10001(
#line 344 "parse_tree.status.c"
  MR_Box parse_tree__status__wrapper_arg_1,
#line 346 "parse_tree.status.c"
  MR_Box parse_tree__status__wrapper_arg_2);

#line 349 "parse_tree.status.c"
static void MR_CALL 
parse_tree__status____Compare____need_qualifier_0_0_10001(
#line 352 "parse_tree.status.c"
  MR_Box * parse_tree__status__wrapper_arg_1,
#line 354 "parse_tree.status.c"
  MR_Box parse_tree__status__wrapper_arg_2,
#line 356 "parse_tree.status.c"
  MR_Box parse_tree__status__wrapper_arg_3);


static /* final */ const MR_Box parse_tree__status_scalar_common_2[5][2];

static /* final */ const MR_Box parse_tree__status_scalar_common_3[5][1];


#line 295 "status.m"
/* sealed */ struct parse_tree__status__vector_common_type_1_0_s {
#line 295 "status.m"
  const MR_Word parse_tree__status__vector_common_type_1_0__vct_1_f_0;
#line 295 "status.m"
};

static /* final */ const struct parse_tree__status__vector_common_type_1_0_s parse_tree__status_vector_common_1[4];



static /* final */ const MR_Box parse_tree__status_scalar_common_2[5][2] = {
  /* row 0 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 1)))),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row 1 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 7)))),
    ((MR_Box) ((MR_Integer) 1))
  },
  /* row 2 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 8)))),
    ((MR_Box) ((MR_Integer) 1))
  },
  /* row 3 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 3)))),
    ((MR_Box) ((MR_Integer) 1))
  },
  /* row 4 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))),
    ((MR_Box) ((MR_Integer) 0))
  },
};

static /* final */ const MR_Box parse_tree__status_scalar_common_3[5][1] = {
  /* row 0 */
  {
    ((MR_Box) (&parse_tree__status_scalar_common_2[0]))
  },
  /* row 1 */
  {
    ((MR_Box) (&parse_tree__status_scalar_common_2[1]))
  },
  /* row 2 */
  {
    ((MR_Box) (&parse_tree__status_scalar_common_2[2]))
  },
  /* row 3 */
  {
    ((MR_Box) (&parse_tree__status_scalar_common_2[3]))
  },
  /* row 4 */
  {
    ((MR_Box) (&parse_tree__status_scalar_common_2[4]))
  },
};


static /* final */ const struct parse_tree__status__vector_common_type_1_0_s parse_tree__status_vector_common_1[4] = {
  /* row 0 */   {     (MR_Integer) 1 },
  /* row 1 */   {     (MR_Integer) 1 },
  /* row 2 */   {     (MR_Integer) 1 },
  /* row 3 */   {     (MR_Integer) 1 },
};


#include "io.mh"
#include "io.mh"
#include "time.mh"
#include "string.mh"



#line 443 "parse_tree.status.c"
static const MR_DuFunctorDesc parse_tree__status__parse_tree__status__du_functor_desc_aug_module_section_0_0 = {
  (MR_String) "ams_interface",
  (MR_Integer) 0,
  (MR_Integer) 0,
  mercury__private_builtin__MR_SECTAG_LOCAL,
  (MR_Integer) 0,
  (MR_Integer) 0,
  (MR_Integer) 0,
  NULL,
  NULL,
  NULL,
  NULL
};

#line 458 "parse_tree.status.c"
static const MR_DuFunctorDesc parse_tree__status__parse_tree__status__du_functor_desc_aug_module_section_0_1 = {
  (MR_String) "ams_implementation",
  (MR_Integer) 0,
  (MR_Integer) 0,
  mercury__private_builtin__MR_SECTAG_LOCAL,
  (MR_Integer) 0,
  (MR_Integer) 1,
  (MR_Integer) 1,
  NULL,
  NULL,
  NULL,
  NULL
};

#line 473 "parse_tree.status.c"
static const MR_DuFunctorDesc parse_tree__status__parse_tree__status__du_functor_desc_aug_module_section_0_2 = {
  (MR_String) "ams_impl_but_exported_to_submodules",
  (MR_Integer) 0,
  (MR_Integer) 0,
  mercury__private_builtin__MR_SECTAG_LOCAL,
  (MR_Integer) 0,
  (MR_Integer) 2,
  (MR_Integer) 2,
  NULL,
  NULL,
  NULL,
  NULL
};

#line 488 "parse_tree.status.c"
static const MR_PseudoTypeInfo parse_tree__status__parse_tree__status__field_types_aug_module_section_0_3[2] = {
  (MR_PseudoTypeInfo) &mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0,
  (MR_PseudoTypeInfo) &parse_tree__status__parse_tree__status__type_ctor_info_import_locn_0
};

#line 494 "parse_tree.status.c"
static const MR_DuFunctorDesc parse_tree__status__parse_tree__status__du_functor_desc_aug_module_section_0_3 = {
  (MR_String) "ams_imported",
  (MR_Integer) 2,
  (MR_Integer) 0,
  mercury__private_builtin__MR_SECTAG_NONE,
  (MR_Integer) 1,
  (MR_Integer) -1,
  (MR_Integer) 3,
  parse_tree__status__parse_tree__status__field_types_aug_module_section_0_3,
  NULL,
  NULL,
  NULL
};

#line 509 "parse_tree.status.c"
static const MR_PseudoTypeInfo parse_tree__status__parse_tree__status__field_types_aug_module_section_0_4[2] = {
  (MR_PseudoTypeInfo) &mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0,
  (MR_PseudoTypeInfo) &parse_tree__status__parse_tree__status__type_ctor_info_import_locn_0
};

#line 515 "parse_tree.status.c"
static const MR_DuFunctorDesc parse_tree__status__parse_tree__status__du_functor_desc_aug_module_section_0_4 = {
  (MR_String) "ams_used",
  (MR_Integer) 2,
  (MR_Integer) 0,
  mercury__private_builtin__MR_SECTAG_NONE,
  (MR_Integer) 2,
  (MR_Integer) -1,
  (MR_Integer) 4,
  parse_tree__status__parse_tree__status__field_types_aug_module_section_0_4,
  NULL,
  NULL,
  NULL
};

#line 530 "parse_tree.status.c"
static const MR_PseudoTypeInfo parse_tree__status__parse_tree__status__field_types_aug_module_section_0_5[1] = {
  (MR_PseudoTypeInfo) &mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0
};

#line 535 "parse_tree.status.c"
static const MR_DuFunctorDesc parse_tree__status__parse_tree__status__du_functor_desc_aug_module_section_0_5 = {
  (MR_String) "ams_abstract_imported",
  (MR_Integer) 1,
  (MR_Integer) 0,
  mercury__private_builtin__MR_SECTAG_REMOTE,
  (MR_Integer) 3,
  (MR_Integer) 0,
  (MR_Integer) 5,
  parse_tree__status__parse_tree__status__field_types_aug_module_section_0_5,
  NULL,
  NULL,
  NULL
};

#line 550 "parse_tree.status.c"
static const MR_PseudoTypeInfo parse_tree__status__parse_tree__status__field_types_aug_module_section_0_6[1] = {
  (MR_PseudoTypeInfo) &mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0
};

#line 555 "parse_tree.status.c"
static const MR_DuFunctorDesc parse_tree__status__parse_tree__status__du_functor_desc_aug_module_section_0_6 = {
  (MR_String) "ams_opt_imported",
  (MR_Integer) 1,
  (MR_Integer) 0,
  mercury__private_builtin__MR_SECTAG_REMOTE,
  (MR_Integer) 3,
  (MR_Integer) 1,
  (MR_Integer) 6,
  parse_tree__status__parse_tree__status__field_types_aug_module_section_0_6,
  NULL,
  NULL,
  NULL
};

#line 570 "parse_tree.status.c"
static const MR_DuFunctorDesc parse_tree__status__parse_tree__status__du_functor_desc_aug_module_section_0_7 = {
  (MR_String) "ams_transitively_imported",
  (MR_Integer) 0,
  (MR_Integer) 0,
  mercury__private_builtin__MR_SECTAG_LOCAL,
  (MR_Integer) 0,
  (MR_Integer) 3,
  (MR_Integer) 7,
  NULL,
  NULL,
  NULL,
  NULL
};

#line 585 "parse_tree.status.c"
static const MR_DuFunctorDescPtr parse_tree__status__parse_tree__status__du_stag_ordered_aug_module_section_0_0[4] = {
  &parse_tree__status__parse_tree__status__du_functor_desc_aug_module_section_0_0,
  &parse_tree__status__parse_tree__status__du_functor_desc_aug_module_section_0_1,
  &parse_tree__status__parse_tree__status__du_functor_desc_aug_module_section_0_2,
  &parse_tree__status__parse_tree__status__du_functor_desc_aug_module_section_0_7
};

#line 593 "parse_tree.status.c"
static const MR_DuFunctorDescPtr parse_tree__status__parse_tree__status__du_stag_ordered_aug_module_section_0_1[1] = {
  &parse_tree__status__parse_tree__status__du_functor_desc_aug_module_section_0_3
};

#line 598 "parse_tree.status.c"
static const MR_DuFunctorDescPtr parse_tree__status__parse_tree__status__du_stag_ordered_aug_module_section_0_2[1] = {
  &parse_tree__status__parse_tree__status__du_functor_desc_aug_module_section_0_4
};

#line 603 "parse_tree.status.c"
static const MR_DuFunctorDescPtr parse_tree__status__parse_tree__status__du_stag_ordered_aug_module_section_0_3[2] = {
  &parse_tree__status__parse_tree__status__du_functor_desc_aug_module_section_0_5,
  &parse_tree__status__parse_tree__status__du_functor_desc_aug_module_section_0_6
};

#line 609 "parse_tree.status.c"
static const MR_DuPtagLayout parse_tree__status__parse_tree__status__du_ptag_ordered_aug_module_section_0[4] = {
  {
    (MR_Integer) 4,
    mercury__private_builtin__MR_SECTAG_LOCAL,
    parse_tree__status__parse_tree__status__du_stag_ordered_aug_module_section_0_0
  },
  {
    (MR_Integer) 1,
    mercury__private_builtin__MR_SECTAG_NONE,
    parse_tree__status__parse_tree__status__du_stag_ordered_aug_module_section_0_1
  },
  {
    (MR_Integer) 1,
    mercury__private_builtin__MR_SECTAG_NONE,
    parse_tree__status__parse_tree__status__du_stag_ordered_aug_module_section_0_2
  },
  {
    (MR_Integer) 2,
    mercury__private_builtin__MR_SECTAG_REMOTE,
    parse_tree__status__parse_tree__status__du_stag_ordered_aug_module_section_0_3
  }
};

#line 633 "parse_tree.status.c"
static const MR_DuFunctorDescPtr parse_tree__status__parse_tree__status__du_name_ordered_aug_module_section_0[8] = {
  &parse_tree__status__parse_tree__status__du_functor_desc_aug_module_section_0_5,
  &parse_tree__status__parse_tree__status__du_functor_desc_aug_module_section_0_2,
  &parse_tree__status__parse_tree__status__du_functor_desc_aug_module_section_0_1,
  &parse_tree__status__parse_tree__status__du_functor_desc_aug_module_section_0_3,
  &parse_tree__status__parse_tree__status__du_functor_desc_aug_module_section_0_0,
  &parse_tree__status__parse_tree__status__du_functor_desc_aug_module_section_0_6,
  &parse_tree__status__parse_tree__status__du_functor_desc_aug_module_section_0_7,
  &parse_tree__status__parse_tree__status__du_functor_desc_aug_module_section_0_4
};

#line 645 "parse_tree.status.c"
static const MR_Integer parse_tree__status__parse_tree__status__functor_number_map_aug_module_section_0[8] = {
  (MR_Integer) 4,
  (MR_Integer) 2,
  (MR_Integer) 1,
  (MR_Integer) 3,
  (MR_Integer) 7,
  (MR_Integer) 0,
  (MR_Integer) 5,
  (MR_Integer) 6
};

#line 657 "parse_tree.status.c"
const MR_TypeCtorInfo_Struct parse_tree__status__parse_tree__status__type_ctor_info_aug_module_section_0 = {
  (MR_Integer) 0,
  (MR_Integer) 15,
  (MR_Integer) 4,
  mercury__private_builtin__MR_TYPECTOR_REP_DU,
  ((MR_Box) (parse_tree__status____Unify____aug_module_section_0_0_10001)),
  ((MR_Box) (parse_tree__status____Compare____aug_module_section_0_0_10001)),
  (MR_String) "parse_tree.status",
  (MR_String) "aug_module_section",
  {     parse_tree__status__parse_tree__status__du_name_ordered_aug_module_section_0 },
  {     parse_tree__status__parse_tree__status__du_ptag_ordered_aug_module_section_0 },
  (MR_Integer) 8,
  (MR_Integer) 4,
  parse_tree__status__parse_tree__status__functor_number_map_aug_module_section_0
};

#line 674 "parse_tree.status.c"
static const MR_EnumFunctorDesc parse_tree__status__parse_tree__status__enum_functor_desc_import_locn_0_0 = {
  (MR_String) "import_locn_implementation",
  (MR_Integer) 0
};

#line 680 "parse_tree.status.c"
static const MR_EnumFunctorDesc parse_tree__status__parse_tree__status__enum_functor_desc_import_locn_0_1 = {
  (MR_String) "import_locn_interface",
  (MR_Integer) 1
};

#line 686 "parse_tree.status.c"
static const MR_EnumFunctorDesc parse_tree__status__parse_tree__status__enum_functor_desc_import_locn_0_2 = {
  (MR_String) "import_locn_ancestor",
  (MR_Integer) 2
};

#line 692 "parse_tree.status.c"
static const MR_EnumFunctorDesc parse_tree__status__parse_tree__status__enum_functor_desc_import_locn_0_3 = {
  (MR_String) "import_locn_ancestor_private_interface_proper",
  (MR_Integer) 3
};

#line 698 "parse_tree.status.c"
static const MR_EnumFunctorDescPtr parse_tree__status__parse_tree__status__enum_value_ordered_import_locn_0[4] = {
  &parse_tree__status__parse_tree__status__enum_functor_desc_import_locn_0_0,
  &parse_tree__status__parse_tree__status__enum_functor_desc_import_locn_0_1,
  &parse_tree__status__parse_tree__status__enum_functor_desc_import_locn_0_2,
  &parse_tree__status__parse_tree__status__enum_functor_desc_import_locn_0_3
};

#line 706 "parse_tree.status.c"
static const MR_EnumFunctorDescPtr parse_tree__status__parse_tree__status__enum_name_ordered_import_locn_0[4] = {
  &parse_tree__status__parse_tree__status__enum_functor_desc_import_locn_0_2,
  &parse_tree__status__parse_tree__status__enum_functor_desc_import_locn_0_3,
  &parse_tree__status__parse_tree__status__enum_functor_desc_import_locn_0_0,
  &parse_tree__status__parse_tree__status__enum_functor_desc_import_locn_0_1
};

#line 714 "parse_tree.status.c"
static const MR_Integer parse_tree__status__parse_tree__status__functor_number_map_import_locn_0[4] = {
  (MR_Integer) 2,
  (MR_Integer) 3,
  (MR_Integer) 0,
  (MR_Integer) 1
};

#line 722 "parse_tree.status.c"
const MR_TypeCtorInfo_Struct parse_tree__status__parse_tree__status__type_ctor_info_import_locn_0 = {
  (MR_Integer) 0,
  (MR_Integer) 15,
  (MR_Integer) -1,
  mercury__private_builtin__MR_TYPECTOR_REP_ENUM,
  ((MR_Box) (parse_tree__status____Unify____import_locn_0_0_10001)),
  ((MR_Box) (parse_tree__status____Compare____import_locn_0_0_10001)),
  (MR_String) "parse_tree.status",
  (MR_String) "import_locn",
  {     parse_tree__status__parse_tree__status__enum_name_ordered_import_locn_0 },
  {     parse_tree__status__parse_tree__status__enum_value_ordered_import_locn_0 },
  (MR_Integer) 4,
  (MR_Integer) 4,
  parse_tree__status__parse_tree__status__functor_number_map_import_locn_0
};

#line 739 "parse_tree.status.c"
static const MR_PseudoTypeInfo parse_tree__status__parse_tree__status__field_types_import_status_0_0[1] = {
  (MR_PseudoTypeInfo) &parse_tree__status__parse_tree__status__type_ctor_info_import_status_0
};

#line 744 "parse_tree.status.c"
static const MR_DuFunctorDesc parse_tree__status__parse_tree__status__du_functor_desc_import_status_0_0 = {
  (MR_String) "status_external",
  (MR_Integer) 1,
  (MR_Integer) 0,
  mercury__private_builtin__MR_SECTAG_NONE,
  (MR_Integer) 1,
  (MR_Integer) -1,
  (MR_Integer) 0,
  parse_tree__status__parse_tree__status__field_types_import_status_0_0,
  NULL,
  NULL,
  NULL
};

#line 759 "parse_tree.status.c"
static const MR_PseudoTypeInfo parse_tree__status__parse_tree__status__field_types_import_status_0_1[1] = {
  (MR_PseudoTypeInfo) &parse_tree__status__parse_tree__status__type_ctor_info_import_locn_0
};

#line 764 "parse_tree.status.c"
static const MR_DuFunctorDesc parse_tree__status__parse_tree__status__du_functor_desc_import_status_0_1 = {
  (MR_String) "status_imported",
  (MR_Integer) 1,
  (MR_Integer) 0,
  mercury__private_builtin__MR_SECTAG_NONE,
  (MR_Integer) 2,
  (MR_Integer) -1,
  (MR_Integer) 1,
  parse_tree__status__parse_tree__status__field_types_import_status_0_1,
  NULL,
  NULL,
  NULL
};

#line 779 "parse_tree.status.c"
static const MR_DuFunctorDesc parse_tree__status__parse_tree__status__du_functor_desc_import_status_0_2 = {
  (MR_String) "status_opt_imported",
  (MR_Integer) 0,
  (MR_Integer) 0,
  mercury__private_builtin__MR_SECTAG_LOCAL,
  (MR_Integer) 0,
  (MR_Integer) 0,
  (MR_Integer) 2,
  NULL,
  NULL,
  NULL,
  NULL
};

#line 794 "parse_tree.status.c"
static const MR_DuFunctorDesc parse_tree__status__parse_tree__status__du_functor_desc_import_status_0_3 = {
  (MR_String) "status_abstract_imported",
  (MR_Integer) 0,
  (MR_Integer) 0,
  mercury__private_builtin__MR_SECTAG_LOCAL,
  (MR_Integer) 0,
  (MR_Integer) 1,
  (MR_Integer) 3,
  NULL,
  NULL,
  NULL,
  NULL
};

#line 809 "parse_tree.status.c"
static const MR_DuFunctorDesc parse_tree__status__parse_tree__status__du_functor_desc_import_status_0_4 = {
  (MR_String) "status_pseudo_imported",
  (MR_Integer) 0,
  (MR_Integer) 0,
  mercury__private_builtin__MR_SECTAG_LOCAL,
  (MR_Integer) 0,
  (MR_Integer) 2,
  (MR_Integer) 4,
  NULL,
  NULL,
  NULL,
  NULL
};

#line 824 "parse_tree.status.c"
static const MR_DuFunctorDesc parse_tree__status__parse_tree__status__du_functor_desc_import_status_0_5 = {
  (MR_String) "status_exported",
  (MR_Integer) 0,
  (MR_Integer) 0,
  mercury__private_builtin__MR_SECTAG_LOCAL,
  (MR_Integer) 0,
  (MR_Integer) 3,
  (MR_Integer) 5,
  NULL,
  NULL,
  NULL,
  NULL
};

#line 839 "parse_tree.status.c"
static const MR_DuFunctorDesc parse_tree__status__parse_tree__status__du_functor_desc_import_status_0_6 = {
  (MR_String) "status_opt_exported",
  (MR_Integer) 0,
  (MR_Integer) 0,
  mercury__private_builtin__MR_SECTAG_LOCAL,
  (MR_Integer) 0,
  (MR_Integer) 4,
  (MR_Integer) 6,
  NULL,
  NULL,
  NULL,
  NULL
};

#line 854 "parse_tree.status.c"
static const MR_DuFunctorDesc parse_tree__status__parse_tree__status__du_functor_desc_import_status_0_7 = {
  (MR_String) "status_abstract_exported",
  (MR_Integer) 0,
  (MR_Integer) 0,
  mercury__private_builtin__MR_SECTAG_LOCAL,
  (MR_Integer) 0,
  (MR_Integer) 5,
  (MR_Integer) 7,
  NULL,
  NULL,
  NULL,
  NULL
};

#line 869 "parse_tree.status.c"
static const MR_DuFunctorDesc parse_tree__status__parse_tree__status__du_functor_desc_import_status_0_8 = {
  (MR_String) "status_pseudo_exported",
  (MR_Integer) 0,
  (MR_Integer) 0,
  mercury__private_builtin__MR_SECTAG_LOCAL,
  (MR_Integer) 0,
  (MR_Integer) 6,
  (MR_Integer) 8,
  NULL,
  NULL,
  NULL,
  NULL
};

#line 884 "parse_tree.status.c"
static const MR_DuFunctorDesc parse_tree__status__parse_tree__status__du_functor_desc_import_status_0_9 = {
  (MR_String) "status_exported_to_submodules",
  (MR_Integer) 0,
  (MR_Integer) 0,
  mercury__private_builtin__MR_SECTAG_LOCAL,
  (MR_Integer) 0,
  (MR_Integer) 7,
  (MR_Integer) 9,
  NULL,
  NULL,
  NULL,
  NULL
};

#line 899 "parse_tree.status.c"
static const MR_DuFunctorDesc parse_tree__status__parse_tree__status__du_functor_desc_import_status_0_10 = {
  (MR_String) "status_local",
  (MR_Integer) 0,
  (MR_Integer) 0,
  mercury__private_builtin__MR_SECTAG_LOCAL,
  (MR_Integer) 0,
  (MR_Integer) 8,
  (MR_Integer) 10,
  NULL,
  NULL,
  NULL,
  NULL
};

#line 914 "parse_tree.status.c"
static const MR_DuFunctorDescPtr parse_tree__status__parse_tree__status__du_stag_ordered_import_status_0_0[9] = {
  &parse_tree__status__parse_tree__status__du_functor_desc_import_status_0_2,
  &parse_tree__status__parse_tree__status__du_functor_desc_import_status_0_3,
  &parse_tree__status__parse_tree__status__du_functor_desc_import_status_0_4,
  &parse_tree__status__parse_tree__status__du_functor_desc_import_status_0_5,
  &parse_tree__status__parse_tree__status__du_functor_desc_import_status_0_6,
  &parse_tree__status__parse_tree__status__du_functor_desc_import_status_0_7,
  &parse_tree__status__parse_tree__status__du_functor_desc_import_status_0_8,
  &parse_tree__status__parse_tree__status__du_functor_desc_import_status_0_9,
  &parse_tree__status__parse_tree__status__du_functor_desc_import_status_0_10
};

#line 927 "parse_tree.status.c"
static const MR_DuFunctorDescPtr parse_tree__status__parse_tree__status__du_stag_ordered_import_status_0_1[1] = {
  &parse_tree__status__parse_tree__status__du_functor_desc_import_status_0_0
};

#line 932 "parse_tree.status.c"
static const MR_DuFunctorDescPtr parse_tree__status__parse_tree__status__du_stag_ordered_import_status_0_2[1] = {
  &parse_tree__status__parse_tree__status__du_functor_desc_import_status_0_1
};

#line 937 "parse_tree.status.c"
static const MR_DuPtagLayout parse_tree__status__parse_tree__status__du_ptag_ordered_import_status_0[3] = {
  {
    (MR_Integer) 9,
    mercury__private_builtin__MR_SECTAG_LOCAL,
    parse_tree__status__parse_tree__status__du_stag_ordered_import_status_0_0
  },
  {
    (MR_Integer) 1,
    mercury__private_builtin__MR_SECTAG_NONE,
    parse_tree__status__parse_tree__status__du_stag_ordered_import_status_0_1
  },
  {
    (MR_Integer) 1,
    mercury__private_builtin__MR_SECTAG_NONE,
    parse_tree__status__parse_tree__status__du_stag_ordered_import_status_0_2
  }
};

#line 956 "parse_tree.status.c"
static const MR_DuFunctorDescPtr parse_tree__status__parse_tree__status__du_name_ordered_import_status_0[11] = {
  &parse_tree__status__parse_tree__status__du_functor_desc_import_status_0_7,
  &parse_tree__status__parse_tree__status__du_functor_desc_import_status_0_3,
  &parse_tree__status__parse_tree__status__du_functor_desc_import_status_0_5,
  &parse_tree__status__parse_tree__status__du_functor_desc_import_status_0_9,
  &parse_tree__status__parse_tree__status__du_functor_desc_import_status_0_0,
  &parse_tree__status__parse_tree__status__du_functor_desc_import_status_0_1,
  &parse_tree__status__parse_tree__status__du_functor_desc_import_status_0_10,
  &parse_tree__status__parse_tree__status__du_functor_desc_import_status_0_6,
  &parse_tree__status__parse_tree__status__du_functor_desc_import_status_0_2,
  &parse_tree__status__parse_tree__status__du_functor_desc_import_status_0_8,
  &parse_tree__status__parse_tree__status__du_functor_desc_import_status_0_4
};

#line 971 "parse_tree.status.c"
static const MR_Integer parse_tree__status__parse_tree__status__functor_number_map_import_status_0[11] = {
  (MR_Integer) 4,
  (MR_Integer) 5,
  (MR_Integer) 8,
  (MR_Integer) 1,
  (MR_Integer) 10,
  (MR_Integer) 2,
  (MR_Integer) 7,
  (MR_Integer) 0,
  (MR_Integer) 9,
  (MR_Integer) 3,
  (MR_Integer) 6
};

#line 986 "parse_tree.status.c"
const MR_TypeCtorInfo_Struct parse_tree__status__parse_tree__status__type_ctor_info_import_status_0 = {
  (MR_Integer) 0,
  (MR_Integer) 15,
  (MR_Integer) 3,
  mercury__private_builtin__MR_TYPECTOR_REP_DU,
  ((MR_Box) (parse_tree__status____Unify____import_status_0_0_10001)),
  ((MR_Box) (parse_tree__status____Compare____import_status_0_0_10001)),
  (MR_String) "parse_tree.status",
  (MR_String) "import_status",
  {     parse_tree__status__parse_tree__status__du_name_ordered_import_status_0 },
  {     parse_tree__status__parse_tree__status__du_ptag_ordered_import_status_0 },
  (MR_Integer) 11,
  (MR_Integer) 4,
  parse_tree__status__parse_tree__status__functor_number_map_import_status_0
};

#line 1003 "parse_tree.status.c"
static const MR_PseudoTypeInfo parse_tree__status__parse_tree__status__field_types_item_status_0_0[2] = {
  (MR_PseudoTypeInfo) &parse_tree__status__parse_tree__status__type_ctor_info_import_status_0,
  (MR_PseudoTypeInfo) &parse_tree__status__parse_tree__status__type_ctor_info_need_qualifier_0
};

#line 1009 "parse_tree.status.c"
static const MR_DuFunctorDesc parse_tree__status__parse_tree__status__du_functor_desc_item_status_0_0 = {
  (MR_String) "item_status",
  (MR_Integer) 2,
  (MR_Integer) 0,
  mercury__private_builtin__MR_SECTAG_NONE,
  (MR_Integer) 0,
  (MR_Integer) -1,
  (MR_Integer) 0,
  parse_tree__status__parse_tree__status__field_types_item_status_0_0,
  NULL,
  NULL,
  NULL
};

#line 1024 "parse_tree.status.c"
static const MR_DuFunctorDescPtr parse_tree__status__parse_tree__status__du_stag_ordered_item_status_0_0[1] = {
  &parse_tree__status__parse_tree__status__du_functor_desc_item_status_0_0
};

#line 1029 "parse_tree.status.c"
static const MR_DuPtagLayout parse_tree__status__parse_tree__status__du_ptag_ordered_item_status_0[1] = {
  {
    (MR_Integer) 1,
    mercury__private_builtin__MR_SECTAG_NONE,
    parse_tree__status__parse_tree__status__du_stag_ordered_item_status_0_0
  }
};

#line 1038 "parse_tree.status.c"
static const MR_DuFunctorDescPtr parse_tree__status__parse_tree__status__du_name_ordered_item_status_0[1] = {
  &parse_tree__status__parse_tree__status__du_functor_desc_item_status_0_0
};

#line 1043 "parse_tree.status.c"
static const MR_Integer parse_tree__status__parse_tree__status__functor_number_map_item_status_0[1] = {
  (MR_Integer) 0
};

#line 1048 "parse_tree.status.c"
const MR_TypeCtorInfo_Struct parse_tree__status__parse_tree__status__type_ctor_info_item_status_0 = {
  (MR_Integer) 0,
  (MR_Integer) 15,
  (MR_Integer) 1,
  mercury__private_builtin__MR_TYPECTOR_REP_DU,
  ((MR_Box) (parse_tree__status____Unify____item_status_0_0_10001)),
  ((MR_Box) (parse_tree__status____Compare____item_status_0_0_10001)),
  (MR_String) "parse_tree.status",
  (MR_String) "item_status",
  {     parse_tree__status__parse_tree__status__du_name_ordered_item_status_0 },
  {     parse_tree__status__parse_tree__status__du_ptag_ordered_item_status_0 },
  (MR_Integer) 1,
  (MR_Integer) 4,
  parse_tree__status__parse_tree__status__functor_number_map_item_status_0
};

#line 1065 "parse_tree.status.c"
static const MR_EnumFunctorDesc parse_tree__status__parse_tree__status__enum_functor_desc_module_section_0_0 = {
  (MR_String) "ms_interface",
  (MR_Integer) 0
};

#line 1071 "parse_tree.status.c"
static const MR_EnumFunctorDesc parse_tree__status__parse_tree__status__enum_functor_desc_module_section_0_1 = {
  (MR_String) "ms_implementation",
  (MR_Integer) 1
};

#line 1077 "parse_tree.status.c"
static const MR_EnumFunctorDescPtr parse_tree__status__parse_tree__status__enum_value_ordered_module_section_0[2] = {
  &parse_tree__status__parse_tree__status__enum_functor_desc_module_section_0_0,
  &parse_tree__status__parse_tree__status__enum_functor_desc_module_section_0_1
};

#line 1083 "parse_tree.status.c"
static const MR_EnumFunctorDescPtr parse_tree__status__parse_tree__status__enum_name_ordered_module_section_0[2] = {
  &parse_tree__status__parse_tree__status__enum_functor_desc_module_section_0_1,
  &parse_tree__status__parse_tree__status__enum_functor_desc_module_section_0_0
};

#line 1089 "parse_tree.status.c"
static const MR_Integer parse_tree__status__parse_tree__status__functor_number_map_module_section_0[2] = {
  (MR_Integer) 1,
  (MR_Integer) 0
};

#line 1095 "parse_tree.status.c"
const MR_TypeCtorInfo_Struct parse_tree__status__parse_tree__status__type_ctor_info_module_section_0 = {
  (MR_Integer) 0,
  (MR_Integer) 15,
  (MR_Integer) -1,
  mercury__private_builtin__MR_TYPECTOR_REP_ENUM,
  ((MR_Box) (parse_tree__status____Unify____module_section_0_0_10001)),
  ((MR_Box) (parse_tree__status____Compare____module_section_0_0_10001)),
  (MR_String) "parse_tree.status",
  (MR_String) "module_section",
  {     parse_tree__status__parse_tree__status__enum_name_ordered_module_section_0 },
  {     parse_tree__status__parse_tree__status__enum_value_ordered_module_section_0 },
  (MR_Integer) 2,
  (MR_Integer) 4,
  parse_tree__status__parse_tree__status__functor_number_map_module_section_0
};

#line 1112 "parse_tree.status.c"
static const MR_EnumFunctorDesc parse_tree__status__parse_tree__status__enum_functor_desc_need_qualifier_0_0 = {
  (MR_String) "must_be_qualified",
  (MR_Integer) 0
};

#line 1118 "parse_tree.status.c"
static const MR_EnumFunctorDesc parse_tree__status__parse_tree__status__enum_functor_desc_need_qualifier_0_1 = {
  (MR_String) "may_be_unqualified",
  (MR_Integer) 1
};

#line 1124 "parse_tree.status.c"
static const MR_EnumFunctorDescPtr parse_tree__status__parse_tree__status__enum_value_ordered_need_qualifier_0[2] = {
  &parse_tree__status__parse_tree__status__enum_functor_desc_need_qualifier_0_0,
  &parse_tree__status__parse_tree__status__enum_functor_desc_need_qualifier_0_1
};

#line 1130 "parse_tree.status.c"
static const MR_EnumFunctorDescPtr parse_tree__status__parse_tree__status__enum_name_ordered_need_qualifier_0[2] = {
  &parse_tree__status__parse_tree__status__enum_functor_desc_need_qualifier_0_1,
  &parse_tree__status__parse_tree__status__enum_functor_desc_need_qualifier_0_0
};

#line 1136 "parse_tree.status.c"
static const MR_Integer parse_tree__status__parse_tree__status__functor_number_map_need_qualifier_0[2] = {
  (MR_Integer) 1,
  (MR_Integer) 0
};

#line 1142 "parse_tree.status.c"
const MR_TypeCtorInfo_Struct parse_tree__status__parse_tree__status__type_ctor_info_need_qualifier_0 = {
  (MR_Integer) 0,
  (MR_Integer) 15,
  (MR_Integer) -1,
  mercury__private_builtin__MR_TYPECTOR_REP_ENUM,
  ((MR_Box) (parse_tree__status____Unify____need_qualifier_0_0_10001)),
  ((MR_Box) (parse_tree__status____Compare____need_qualifier_0_0_10001)),
  (MR_String) "parse_tree.status",
  (MR_String) "need_qualifier",
  {     parse_tree__status__parse_tree__status__enum_name_ordered_need_qualifier_0 },
  {     parse_tree__status__parse_tree__status__enum_value_ordered_need_qualifier_0 },
  (MR_Integer) 2,
  (MR_Integer) 4,
  parse_tree__status__parse_tree__status__functor_number_map_need_qualifier_0
};

#line 1159 "parse_tree.status.c"
static MR_bool MR_CALL 
parse_tree__status____Unify____aug_module_section_0_0_10001(
#line 1162 "parse_tree.status.c"
  MR_Box parse_tree__status__wrapper_arg_1,
#line 1164 "parse_tree.status.c"
  MR_Box parse_tree__status__wrapper_arg_2)
#line 1166 "parse_tree.status.c"
{
#line 1168 "parse_tree.status.c"
  {
#line 1170 "parse_tree.status.c"
    MR_bool parse_tree__status__succeeded;

#line 1173 "parse_tree.status.c"
    {
#line 1175 "parse_tree.status.c"
      parse_tree__status__succeeded = parse_tree__status____Unify____aug_module_section_0_0(((MR_Word) parse_tree__status__wrapper_arg_1), ((MR_Word) parse_tree__status__wrapper_arg_2));
    }
#line 1178 "parse_tree.status.c"
    return parse_tree__status__succeeded;
#line 1180 "parse_tree.status.c"
  }
#line 1182 "parse_tree.status.c"
}

#line 1185 "parse_tree.status.c"
static void MR_CALL 
parse_tree__status____Compare____aug_module_section_0_0_10001(
#line 1188 "parse_tree.status.c"
  MR_Box * parse_tree__status__wrapper_arg_1,
#line 1190 "parse_tree.status.c"
  MR_Box parse_tree__status__wrapper_arg_2,
#line 1192 "parse_tree.status.c"
  MR_Box parse_tree__status__wrapper_arg_3)
#line 1194 "parse_tree.status.c"
{
#line 1196 "parse_tree.status.c"
  {
#line 1198 "parse_tree.status.c"
    MR_Word parse_tree__status__conv0_HeadVar__1_1;

#line 1201 "parse_tree.status.c"
    {
#line 1203 "parse_tree.status.c"
      parse_tree__status____Compare____aug_module_section_0_0(&parse_tree__status__conv0_HeadVar__1_1, ((MR_Word) parse_tree__status__wrapper_arg_2), ((MR_Word) parse_tree__status__wrapper_arg_3));
    }
#line 1206 "parse_tree.status.c"
    *parse_tree__status__wrapper_arg_1 = ((MR_Box) (parse_tree__status__conv0_HeadVar__1_1));
#line 1208 "parse_tree.status.c"
  }
#line 1210 "parse_tree.status.c"
}

#line 1213 "parse_tree.status.c"
static MR_bool MR_CALL 
parse_tree__status____Unify____import_locn_0_0_10001(
#line 1216 "parse_tree.status.c"
  MR_Box parse_tree__status__wrapper_arg_1,
#line 1218 "parse_tree.status.c"
  MR_Box parse_tree__status__wrapper_arg_2)
#line 1220 "parse_tree.status.c"
{
#line 1222 "parse_tree.status.c"
  {
#line 1224 "parse_tree.status.c"
    MR_bool parse_tree__status__succeeded;

#line 1227 "parse_tree.status.c"
    {
#line 1229 "parse_tree.status.c"
      parse_tree__status__succeeded = parse_tree__status____Unify____import_locn_0_0(((MR_Word) parse_tree__status__wrapper_arg_1), ((MR_Word) parse_tree__status__wrapper_arg_2));
    }
#line 1232 "parse_tree.status.c"
    return parse_tree__status__succeeded;
#line 1234 "parse_tree.status.c"
  }
#line 1236 "parse_tree.status.c"
}

#line 1239 "parse_tree.status.c"
static void MR_CALL 
parse_tree__status____Compare____import_locn_0_0_10001(
#line 1242 "parse_tree.status.c"
  MR_Box * parse_tree__status__wrapper_arg_1,
#line 1244 "parse_tree.status.c"
  MR_Box parse_tree__status__wrapper_arg_2,
#line 1246 "parse_tree.status.c"
  MR_Box parse_tree__status__wrapper_arg_3)
#line 1248 "parse_tree.status.c"
{
#line 1250 "parse_tree.status.c"
  {
#line 1252 "parse_tree.status.c"
    MR_Word parse_tree__status__conv0_HeadVar__1_1;

#line 1255 "parse_tree.status.c"
    {
#line 1257 "parse_tree.status.c"
      parse_tree__status____Compare____import_locn_0_0(&parse_tree__status__conv0_HeadVar__1_1, ((MR_Word) parse_tree__status__wrapper_arg_2), ((MR_Word) parse_tree__status__wrapper_arg_3));
    }
#line 1260 "parse_tree.status.c"
    *parse_tree__status__wrapper_arg_1 = ((MR_Box) (parse_tree__status__conv0_HeadVar__1_1));
#line 1262 "parse_tree.status.c"
  }
#line 1264 "parse_tree.status.c"
}

#line 1267 "parse_tree.status.c"
static MR_bool MR_CALL 
parse_tree__status____Unify____import_status_0_0_10001(
#line 1270 "parse_tree.status.c"
  MR_Box parse_tree__status__wrapper_arg_1,
#line 1272 "parse_tree.status.c"
  MR_Box parse_tree__status__wrapper_arg_2)
#line 1274 "parse_tree.status.c"
{
#line 1276 "parse_tree.status.c"
  {
#line 1278 "parse_tree.status.c"
    MR_bool parse_tree__status__succeeded;

#line 1281 "parse_tree.status.c"
    {
#line 1283 "parse_tree.status.c"
      parse_tree__status__succeeded = parse_tree__status____Unify____import_status_0_0(((MR_Word) parse_tree__status__wrapper_arg_1), ((MR_Word) parse_tree__status__wrapper_arg_2));
    }
#line 1286 "parse_tree.status.c"
    return parse_tree__status__succeeded;
#line 1288 "parse_tree.status.c"
  }
#line 1290 "parse_tree.status.c"
}

#line 1293 "parse_tree.status.c"
static void MR_CALL 
parse_tree__status____Compare____import_status_0_0_10001(
#line 1296 "parse_tree.status.c"
  MR_Box * parse_tree__status__wrapper_arg_1,
#line 1298 "parse_tree.status.c"
  MR_Box parse_tree__status__wrapper_arg_2,
#line 1300 "parse_tree.status.c"
  MR_Box parse_tree__status__wrapper_arg_3)
#line 1302 "parse_tree.status.c"
{
#line 1304 "parse_tree.status.c"
  {
#line 1306 "parse_tree.status.c"
    MR_Word parse_tree__status__conv0_HeadVar__1_1;

#line 1309 "parse_tree.status.c"
    {
#line 1311 "parse_tree.status.c"
      parse_tree__status____Compare____import_status_0_0(&parse_tree__status__conv0_HeadVar__1_1, ((MR_Word) parse_tree__status__wrapper_arg_2), ((MR_Word) parse_tree__status__wrapper_arg_3));
    }
#line 1314 "parse_tree.status.c"
    *parse_tree__status__wrapper_arg_1 = ((MR_Box) (parse_tree__status__conv0_HeadVar__1_1));
#line 1316 "parse_tree.status.c"
  }
#line 1318 "parse_tree.status.c"
}

#line 1321 "parse_tree.status.c"
static MR_bool MR_CALL 
parse_tree__status____Unify____item_status_0_0_10001(
#line 1324 "parse_tree.status.c"
  MR_Box parse_tree__status__wrapper_arg_1,
#line 1326 "parse_tree.status.c"
  MR_Box parse_tree__status__wrapper_arg_2)
#line 1328 "parse_tree.status.c"
{
#line 1330 "parse_tree.status.c"
  {
#line 1332 "parse_tree.status.c"
    MR_bool parse_tree__status__succeeded;

#line 1335 "parse_tree.status.c"
    {
#line 1337 "parse_tree.status.c"
      parse_tree__status__succeeded = parse_tree__status____Unify____item_status_0_0(((MR_Word) parse_tree__status__wrapper_arg_1), ((MR_Word) parse_tree__status__wrapper_arg_2));
    }
#line 1340 "parse_tree.status.c"
    return parse_tree__status__succeeded;
#line 1342 "parse_tree.status.c"
  }
#line 1344 "parse_tree.status.c"
}

#line 1347 "parse_tree.status.c"
static void MR_CALL 
parse_tree__status____Compare____item_status_0_0_10001(
#line 1350 "parse_tree.status.c"
  MR_Box * parse_tree__status__wrapper_arg_1,
#line 1352 "parse_tree.status.c"
  MR_Box parse_tree__status__wrapper_arg_2,
#line 1354 "parse_tree.status.c"
  MR_Box parse_tree__status__wrapper_arg_3)
#line 1356 "parse_tree.status.c"
{
#line 1358 "parse_tree.status.c"
  {
#line 1360 "parse_tree.status.c"
    MR_Word parse_tree__status__conv0_HeadVar__1_1;

#line 1363 "parse_tree.status.c"
    {
#line 1365 "parse_tree.status.c"
      parse_tree__status____Compare____item_status_0_0(&parse_tree__status__conv0_HeadVar__1_1, ((MR_Word) parse_tree__status__wrapper_arg_2), ((MR_Word) parse_tree__status__wrapper_arg_3));
    }
#line 1368 "parse_tree.status.c"
    *parse_tree__status__wrapper_arg_1 = ((MR_Box) (parse_tree__status__conv0_HeadVar__1_1));
#line 1370 "parse_tree.status.c"
  }
#line 1372 "parse_tree.status.c"
}

#line 1375 "parse_tree.status.c"
static MR_bool MR_CALL 
parse_tree__status____Unify____module_section_0_0_10001(
#line 1378 "parse_tree.status.c"
  MR_Box parse_tree__status__wrapper_arg_1,
#line 1380 "parse_tree.status.c"
  MR_Box parse_tree__status__wrapper_arg_2)
#line 1382 "parse_tree.status.c"
{
#line 1384 "parse_tree.status.c"
  {
#line 1386 "parse_tree.status.c"
    MR_bool parse_tree__status__succeeded;

#line 1389 "parse_tree.status.c"
    {
#line 1391 "parse_tree.status.c"
      parse_tree__status__succeeded = parse_tree__status____Unify____module_section_0_0(((MR_Word) parse_tree__status__wrapper_arg_1), ((MR_Word) parse_tree__status__wrapper_arg_2));
    }
#line 1394 "parse_tree.status.c"
    return parse_tree__status__succeeded;
#line 1396 "parse_tree.status.c"
  }
#line 1398 "parse_tree.status.c"
}

#line 1401 "parse_tree.status.c"
static void MR_CALL 
parse_tree__status____Compare____module_section_0_0_10001(
#line 1404 "parse_tree.status.c"
  MR_Box * parse_tree__status__wrapper_arg_1,
#line 1406 "parse_tree.status.c"
  MR_Box parse_tree__status__wrapper_arg_2,
#line 1408 "parse_tree.status.c"
  MR_Box parse_tree__status__wrapper_arg_3)
#line 1410 "parse_tree.status.c"
{
#line 1412 "parse_tree.status.c"
  {
#line 1414 "parse_tree.status.c"
    MR_Word parse_tree__status__conv0_HeadVar__1_1;

#line 1417 "parse_tree.status.c"
    {
#line 1419 "parse_tree.status.c"
      parse_tree__status____Compare____module_section_0_0(&parse_tree__status__conv0_HeadVar__1_1, ((MR_Word) parse_tree__status__wrapper_arg_2), ((MR_Word) parse_tree__status__wrapper_arg_3));
    }
#line 1422 "parse_tree.status.c"
    *parse_tree__status__wrapper_arg_1 = ((MR_Box) (parse_tree__status__conv0_HeadVar__1_1));
#line 1424 "parse_tree.status.c"
  }
#line 1426 "parse_tree.status.c"
}

#line 1429 "parse_tree.status.c"
static MR_bool MR_CALL 
parse_tree__status____Unify____need_qualifier_0_0_10001(
#line 1432 "parse_tree.status.c"
  MR_Box parse_tree__status__wrapper_arg_1,
#line 1434 "parse_tree.status.c"
  MR_Box parse_tree__status__wrapper_arg_2)
#line 1436 "parse_tree.status.c"
{
#line 1438 "parse_tree.status.c"
  {
#line 1440 "parse_tree.status.c"
    MR_bool parse_tree__status__succeeded;

#line 1443 "parse_tree.status.c"
    {
#line 1445 "parse_tree.status.c"
      parse_tree__status__succeeded = parse_tree__status____Unify____need_qualifier_0_0(((MR_Word) parse_tree__status__wrapper_arg_1), ((MR_Word) parse_tree__status__wrapper_arg_2));
    }
#line 1448 "parse_tree.status.c"
    return parse_tree__status__succeeded;
#line 1450 "parse_tree.status.c"
  }
#line 1452 "parse_tree.status.c"
}

#line 1455 "parse_tree.status.c"
static void MR_CALL 
parse_tree__status____Compare____need_qualifier_0_0_10001(
#line 1458 "parse_tree.status.c"
  MR_Box * parse_tree__status__wrapper_arg_1,
#line 1460 "parse_tree.status.c"
  MR_Box parse_tree__status__wrapper_arg_2,
#line 1462 "parse_tree.status.c"
  MR_Box parse_tree__status__wrapper_arg_3)
#line 1464 "parse_tree.status.c"
{
#line 1466 "parse_tree.status.c"
  {
#line 1468 "parse_tree.status.c"
    MR_Word parse_tree__status__conv0_HeadVar__1_1;

#line 1471 "parse_tree.status.c"
    {
#line 1473 "parse_tree.status.c"
      parse_tree__status____Compare____need_qualifier_0_0(&parse_tree__status__conv0_HeadVar__1_1, ((MR_Word) parse_tree__status__wrapper_arg_2), ((MR_Word) parse_tree__status__wrapper_arg_3));
    }
#line 1476 "parse_tree.status.c"
    *parse_tree__status__wrapper_arg_1 = ((MR_Box) (parse_tree__status__conv0_HeadVar__1_1));
#line 1478 "parse_tree.status.c"
  }
#line 1480 "parse_tree.status.c"
}

#line 229 "status.m"
MR_Word MR_CALL 
parse_tree__status__f_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_109_97_107_101_95_97_109_115_95_116_114_97_110_115_105_116_105_118_101_108_121_95_105_109_112_111_114_116_101_100_95_95_91_49_93_95_48_1_f_0(void)
#line 229 "status.m"
{
#line 312 "status.m"
  {
#line 312 "status.m"
    MR_bool parse_tree__status__succeeded;

#line 312 "status.m"
    return (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 3));
#line 312 "status.m"
  }
#line 229 "status.m"
}

#line 223 "status.m"
MR_Word MR_CALL 
parse_tree__status__f_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_109_97_107_101_95_97_109_115_95_105_109_112_108_95_98_117_116_95_101_120_112_111_114_116_101_100_95_116_111_95_115_117_98_109_111_100_117_108_101_115_95_95_91_49_93_95_48_1_f_0(void)
#line 223 "status.m"
{
#line 306 "status.m"
  {
#line 306 "status.m"
    MR_bool parse_tree__status__succeeded;

#line 306 "status.m"
    return (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 2));
#line 306 "status.m"
  }
#line 223 "status.m"
}

#line 222 "status.m"
MR_Word MR_CALL 
parse_tree__status__f_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_109_97_107_101_95_97_109_115_95_105_109_112_108_101_109_101_110_116_97_116_105_111_110_95_95_91_49_93_95_48_1_f_0(void)
#line 222 "status.m"
{
#line 304 "status.m"
  {
#line 304 "status.m"
    MR_bool parse_tree__status__succeeded;

#line 304 "status.m"
    return (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 1));
#line 304 "status.m"
  }
#line 222 "status.m"
}

#line 221 "status.m"
MR_Word MR_CALL 
parse_tree__status__f_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_109_97_107_101_95_97_109_115_95_105_110_116_101_114_102_97_99_101_95_95_91_49_93_95_48_1_f_0(void)
#line 221 "status.m"
{
#line 303 "status.m"
  {
#line 303 "status.m"
    MR_bool parse_tree__status__succeeded;

#line 303 "status.m"
    return (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 303 "status.m"
  }
#line 221 "status.m"
}

#line 161 "status.m"
void MR_CALL 
parse_tree__status____Compare____need_qualifier_0_0(
#line 161 "status.m"
  MR_Word * parse_tree__status__HeadVar__1_1,
#line 161 "status.m"
  MR_Word parse_tree__status__HeadVar__2_2,
#line 161 "status.m"
  MR_Word parse_tree__status__HeadVar__3_3)
#line 161 "status.m"
{
#line 161 "status.m"
  {
#line 161 "status.m"
    MR_bool parse_tree__status__succeeded;
#line 161 "status.m"
    MR_Integer parse_tree__status__Cast_HeadVar1_4 = (MR_Integer) parse_tree__status__HeadVar__2_2;
#line 161 "status.m"
    MR_Integer parse_tree__status__Cast_HeadVar2_5 = (MR_Integer) parse_tree__status__HeadVar__3_3;

#line 161 "status.m"
    {
#line 161 "status.m"
      mercury__private_builtin__builtin_compare_int_3_p_0(parse_tree__status__HeadVar__1_1, parse_tree__status__Cast_HeadVar1_4, parse_tree__status__Cast_HeadVar2_5);
#line 161 "status.m"
      return;
    }
#line 161 "status.m"
  }
#line 161 "status.m"
}

#line 161 "status.m"
MR_bool MR_CALL 
parse_tree__status____Unify____need_qualifier_0_0(
#line 161 "status.m"
  MR_Word parse_tree__status__HeadVar__2_1,
#line 161 "status.m"
  MR_Word parse_tree__status__HeadVar__2_2)
#line 161 "status.m"
{
#line 1592 "parse_tree.status.c"
  {
#line 1594 "parse_tree.status.c"
    MR_bool parse_tree__status__succeeded = (parse_tree__status__HeadVar__2_1 == parse_tree__status__HeadVar__2_2);

#line 1597 "parse_tree.status.c"
    return parse_tree__status__succeeded;
#line 1599 "parse_tree.status.c"
  }
#line 161 "status.m"
}

#line 173 "status.m"
void MR_CALL 
parse_tree__status____Compare____module_section_0_0(
#line 173 "status.m"
  MR_Word * parse_tree__status__HeadVar__1_1,
#line 173 "status.m"
  MR_Word parse_tree__status__HeadVar__2_2,
#line 173 "status.m"
  MR_Word parse_tree__status__HeadVar__3_3)
#line 173 "status.m"
{
#line 173 "status.m"
  {
#line 173 "status.m"
    MR_bool parse_tree__status__succeeded;
#line 173 "status.m"
    MR_Integer parse_tree__status__Cast_HeadVar1_4 = (MR_Integer) parse_tree__status__HeadVar__2_2;
#line 173 "status.m"
    MR_Integer parse_tree__status__Cast_HeadVar2_5 = (MR_Integer) parse_tree__status__HeadVar__3_3;

#line 173 "status.m"
    {
#line 173 "status.m"
      mercury__private_builtin__builtin_compare_int_3_p_0(parse_tree__status__HeadVar__1_1, parse_tree__status__Cast_HeadVar1_4, parse_tree__status__Cast_HeadVar2_5);
#line 173 "status.m"
      return;
    }
#line 173 "status.m"
  }
#line 173 "status.m"
}

#line 173 "status.m"
MR_bool MR_CALL 
parse_tree__status____Unify____module_section_0_0(
#line 173 "status.m"
  MR_Word parse_tree__status__HeadVar__2_1,
#line 173 "status.m"
  MR_Word parse_tree__status__HeadVar__2_2)
#line 173 "status.m"
{
#line 1645 "parse_tree.status.c"
  {
#line 1647 "parse_tree.status.c"
    MR_bool parse_tree__status__succeeded = (parse_tree__status__HeadVar__2_1 == parse_tree__status__HeadVar__2_2);

#line 1650 "parse_tree.status.c"
    return parse_tree__status__succeeded;
#line 1652 "parse_tree.status.c"
  }
#line 173 "status.m"
}

#line 168 "status.m"
void MR_CALL 
parse_tree__status____Compare____item_status_0_0(
#line 168 "status.m"
  MR_Word * parse_tree__status__HeadVar__1_1,
#line 168 "status.m"
  MR_Word parse_tree__status__HeadVar__2_2,
#line 168 "status.m"
  MR_Word parse_tree__status__HeadVar__3_3)
#line 168 "status.m"
{
#line 168 "status.m"
  {
#line 168 "status.m"
    MR_bool parse_tree__status__succeeded;
#line 168 "status.m"
    MR_Integer parse_tree__status__CastX_9 = (MR_Integer) parse_tree__status__HeadVar__2_2;
#line 168 "status.m"
    MR_Integer parse_tree__status__CastY_10 = (MR_Integer) parse_tree__status__HeadVar__3_3;

#line 168 "status.m"
    parse_tree__status__succeeded = (parse_tree__status__CastX_9 == parse_tree__status__CastY_10);
#line 168 "status.m"
    if (parse_tree__status__succeeded)
#line 1681 "parse_tree.status.c"
      *parse_tree__status__HeadVar__1_1 = (MR_Integer) 0;
#line 168 "status.m"
    else
#line 168 "status.m"
      {
#line 168 "status.m"
        MR_Word parse_tree__status__V_4_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__status__HeadVar__2_2, (MR_Integer) 0)));
#line 168 "status.m"
        MR_Word parse_tree__status__V_5_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__status__HeadVar__2_2, (MR_Integer) 1)));
#line 168 "status.m"
        MR_Word parse_tree__status__V_6_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__status__HeadVar__3_3, (MR_Integer) 0)));
#line 168 "status.m"
        MR_Word parse_tree__status__V_7_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__status__HeadVar__3_3, (MR_Integer) 1)));
#line 168 "status.m"
        MR_Word parse_tree__status__V_8_8;

#line 168 "status.m"
        {
#line 168 "status.m"
          parse_tree__status____Compare____import_status_0_0(&parse_tree__status__V_8_8, parse_tree__status__V_4_4, parse_tree__status__V_6_6);
        }
#line 1703 "parse_tree.status.c"
        parse_tree__status__succeeded = (parse_tree__status__V_8_8 == (MR_Integer) 0);
#line 168 "status.m"
        parse_tree__status__succeeded = !(parse_tree__status__succeeded);
#line 168 "status.m"
        if (parse_tree__status__succeeded)
#line 168 "status.m"
          *parse_tree__status__HeadVar__1_1 = parse_tree__status__V_8_8;
#line 168 "status.m"
        else
#line 168 "status.m"
          {
#line 168 "status.m"
            MR_Integer parse_tree__status__V_13_13 = (MR_Integer) parse_tree__status__V_5_5;
#line 168 "status.m"
            MR_Integer parse_tree__status__V_14_14 = (MR_Integer) parse_tree__status__V_7_7;

#line 168 "status.m"
            {
#line 168 "status.m"
              mercury__private_builtin__builtin_compare_int_3_p_0(parse_tree__status__HeadVar__1_1, parse_tree__status__V_13_13, parse_tree__status__V_14_14);
#line 168 "status.m"
              return;
            }
#line 168 "status.m"
          }
#line 168 "status.m"
      }
#line 168 "status.m"
  }
#line 168 "status.m"
}

#line 168 "status.m"
MR_bool MR_CALL 
parse_tree__status____Unify____item_status_0_0(
#line 168 "status.m"
  MR_Word parse_tree__status__HeadVar__1_1,
#line 168 "status.m"
  MR_Word parse_tree__status__HeadVar__2_2)
#line 168 "status.m"
{
#line 168 "status.m"
  {
#line 168 "status.m"
    MR_bool parse_tree__status__succeeded;
#line 168 "status.m"
    MR_Integer parse_tree__status__CastX_7 = (MR_Integer) parse_tree__status__HeadVar__1_1;
#line 168 "status.m"
    MR_Integer parse_tree__status__CastY_8 = (MR_Integer) parse_tree__status__HeadVar__2_2;

#line 168 "status.m"
    parse_tree__status__succeeded = (parse_tree__status__CastX_7 == parse_tree__status__CastY_8);
#line 168 "status.m"
    if (parse_tree__status__succeeded)
#line 168 "status.m"
      parse_tree__status__succeeded = MR_TRUE;
#line 168 "status.m"
    else
#line 168 "status.m"
      {
#line 168 "status.m"
        MR_Word parse_tree__status__V_3_3 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__status__HeadVar__1_1, (MR_Integer) 0)));
#line 168 "status.m"
        MR_Word parse_tree__status__V_4_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__status__HeadVar__1_1, (MR_Integer) 1)));
#line 168 "status.m"
        MR_Word parse_tree__status__V_5_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__status__HeadVar__2_2, (MR_Integer) 0)));
#line 168 "status.m"
        MR_Word parse_tree__status__V_6_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__status__HeadVar__2_2, (MR_Integer) 1)));

#line 1773 "parse_tree.status.c"
        {
#line 1775 "parse_tree.status.c"
          parse_tree__status__succeeded = parse_tree__status____Unify____import_status_0_0(parse_tree__status__V_3_3, parse_tree__status__V_5_5);
        }
#line 168 "status.m"
        if (parse_tree__status__succeeded)
#line 1780 "parse_tree.status.c"
          parse_tree__status__succeeded = (parse_tree__status__V_4_4 == parse_tree__status__V_6_6);
#line 168 "status.m"
      }
#line 168 "status.m"
    return parse_tree__status__succeeded;
#line 168 "status.m"
  }
#line 168 "status.m"
}

#line 45 "status.m"
void MR_CALL 
parse_tree__status____Compare____import_status_0_0(
#line 45 "status.m"
  MR_Word * parse_tree__status__HeadVar__1_1,
#line 45 "status.m"
  MR_Word parse_tree__status__HeadVar__2_2,
#line 45 "status.m"
  MR_Word parse_tree__status__HeadVar__3_3)
#line 45 "status.m"
{
#line 45 "status.m"
  while (MR_TRUE)
#line 45 "status.m"
    {
#line 45 "status.m"
      /* tailcall optimized into a loop */
#line 45 "status.m"
      {
#line 45 "status.m"
        MR_bool parse_tree__status__succeeded;
#line 45 "status.m"
        MR_Integer parse_tree__status__CastX_48 = (MR_Integer) parse_tree__status__HeadVar__2_2;
#line 45 "status.m"
        MR_Integer parse_tree__status__CastY_49 = (MR_Integer) parse_tree__status__HeadVar__3_3;

#line 45 "status.m"
        parse_tree__status__succeeded = (parse_tree__status__CastX_48 == parse_tree__status__CastY_49);
#line 45 "status.m"
        if (parse_tree__status__succeeded)
#line 1821 "parse_tree.status.c"
          *parse_tree__status__HeadVar__1_1 = (MR_Integer) 0;
#line 45 "status.m"
        else
#line 45 "status.m"
#line 45 "status.m"
          switch (MR_tag((MR_Word) parse_tree__status__HeadVar__2_2)) {
#line 45 "status.m"
            default: /*NOTREACHED*/ MR_assert(0);
#line 45 "status.m"
            case (MR_Integer) 0:
#line 45 "status.m"
#line 45 "status.m"
              switch (MR_unmkbody(parse_tree__status__HeadVar__2_2)) {
#line 45 "status.m"
                default: /*NOTREACHED*/ MR_assert(0);
#line 45 "status.m"
                case (MR_Integer) 0:
#line 45 "status.m"
#line 45 "status.m"
                  switch (MR_tag((MR_Word) parse_tree__status__HeadVar__3_3)) {
#line 45 "status.m"
                    default: /*NOTREACHED*/ MR_assert(0);
#line 45 "status.m"
                    case (MR_Integer) 0:
#line 45 "status.m"
#line 45 "status.m"
                      switch (MR_unmkbody(parse_tree__status__HeadVar__3_3)) {
#line 45 "status.m"
                        default: /*NOTREACHED*/ MR_assert(0);
#line 45 "status.m"
                        case (MR_Integer) 0:
#line 45 "status.m"
                          *parse_tree__status__HeadVar__1_1 = (MR_Integer) 0;
#line 45 "status.m"
                          break;
#line 45 "status.m"
                        case (MR_Integer) 1:
#line 45 "status.m"
                          *parse_tree__status__HeadVar__1_1 = (MR_Integer) 1;
#line 45 "status.m"
                          break;
#line 45 "status.m"
                        case (MR_Integer) 2:
#line 45 "status.m"
                          *parse_tree__status__HeadVar__1_1 = (MR_Integer) 1;
#line 45 "status.m"
                          break;
#line 45 "status.m"
                        case (MR_Integer) 3:
#line 45 "status.m"
                          *parse_tree__status__HeadVar__1_1 = (MR_Integer) 1;
#line 45 "status.m"
                          break;
#line 45 "status.m"
                        case (MR_Integer) 4:
#line 45 "status.m"
                          *parse_tree__status__HeadVar__1_1 = (MR_Integer) 1;
#line 45 "status.m"
                          break;
#line 45 "status.m"
                        case (MR_Integer) 5:
#line 45 "status.m"
                          *parse_tree__status__HeadVar__1_1 = (MR_Integer) 1;
#line 45 "status.m"
                          break;
#line 45 "status.m"
                        case (MR_Integer) 6:
#line 45 "status.m"
                          *parse_tree__status__HeadVar__1_1 = (MR_Integer) 1;
#line 45 "status.m"
                          break;
#line 45 "status.m"
                        case (MR_Integer) 7:
#line 45 "status.m"
                          *parse_tree__status__HeadVar__1_1 = (MR_Integer) 1;
#line 45 "status.m"
                          break;
#line 45 "status.m"
                        case (MR_Integer) 8:
#line 45 "status.m"
                          *parse_tree__status__HeadVar__1_1 = (MR_Integer) 1;
#line 45 "status.m"
                          break;
#line 45 "status.m"
                      }
#line 45 "status.m"
                      break;
#line 45 "status.m"
                    case (MR_Integer) 1:
#line 1911 "parse_tree.status.c"
                      *parse_tree__status__HeadVar__1_1 = (MR_Integer) 2;
#line 45 "status.m"
                      break;
#line 45 "status.m"
                    case (MR_Integer) 2:
#line 1917 "parse_tree.status.c"
                      *parse_tree__status__HeadVar__1_1 = (MR_Integer) 2;
#line 45 "status.m"
                      break;
#line 45 "status.m"
                  }
#line 45 "status.m"
                  break;
#line 45 "status.m"
                case (MR_Integer) 1:
#line 45 "status.m"
#line 45 "status.m"
                  switch (MR_tag((MR_Word) parse_tree__status__HeadVar__3_3)) {
#line 45 "status.m"
                    default: /*NOTREACHED*/ MR_assert(0);
#line 45 "status.m"
                    case (MR_Integer) 0:
#line 45 "status.m"
#line 45 "status.m"
                      switch (MR_unmkbody(parse_tree__status__HeadVar__3_3)) {
#line 45 "status.m"
                        default: /*NOTREACHED*/ MR_assert(0);
#line 45 "status.m"
                        case (MR_Integer) 0:
#line 45 "status.m"
                          *parse_tree__status__HeadVar__1_1 = (MR_Integer) 2;
#line 45 "status.m"
                          break;
#line 45 "status.m"
                        case (MR_Integer) 1:
#line 45 "status.m"
                          *parse_tree__status__HeadVar__1_1 = (MR_Integer) 0;
#line 45 "status.m"
                          break;
#line 45 "status.m"
                        case (MR_Integer) 2:
#line 45 "status.m"
                          *parse_tree__status__HeadVar__1_1 = (MR_Integer) 1;
#line 45 "status.m"
                          break;
#line 45 "status.m"
                        case (MR_Integer) 3:
#line 45 "status.m"
                          *parse_tree__status__HeadVar__1_1 = (MR_Integer) 1;
#line 45 "status.m"
                          break;
#line 45 "status.m"
                        case (MR_Integer) 4:
#line 45 "status.m"
                          *parse_tree__status__HeadVar__1_1 = (MR_Integer) 1;
#line 45 "status.m"
                          break;
#line 45 "status.m"
                        case (MR_Integer) 5:
#line 45 "status.m"
                          *parse_tree__status__HeadVar__1_1 = (MR_Integer) 1;
#line 45 "status.m"
                          break;
#line 45 "status.m"
                        case (MR_Integer) 6:
#line 45 "status.m"
                          *parse_tree__status__HeadVar__1_1 = (MR_Integer) 1;
#line 45 "status.m"
                          break;
#line 45 "status.m"
                        case (MR_Integer) 7:
#line 45 "status.m"
                          *parse_tree__status__HeadVar__1_1 = (MR_Integer) 1;
#line 45 "status.m"
                          break;
#line 45 "status.m"
                        case (MR_Integer) 8:
#line 45 "status.m"
                          *parse_tree__status__HeadVar__1_1 = (MR_Integer) 1;
#line 45 "status.m"
                          break;
#line 45 "status.m"
                      }
#line 45 "status.m"
                      break;
#line 45 "status.m"
                    case (MR_Integer) 1:
#line 1999 "parse_tree.status.c"
                      *parse_tree__status__HeadVar__1_1 = (MR_Integer) 2;
#line 45 "status.m"
                      break;
#line 45 "status.m"
                    case (MR_Integer) 2:
#line 2005 "parse_tree.status.c"
                      *parse_tree__status__HeadVar__1_1 = (MR_Integer) 2;
#line 45 "status.m"
                      break;
#line 45 "status.m"
                  }
#line 45 "status.m"
                  break;
#line 45 "status.m"
                case (MR_Integer) 2:
#line 45 "status.m"
#line 45 "status.m"
                  switch (MR_tag((MR_Word) parse_tree__status__HeadVar__3_3)) {
#line 45 "status.m"
                    default: /*NOTREACHED*/ MR_assert(0);
#line 45 "status.m"
                    case (MR_Integer) 0:
#line 45 "status.m"
#line 45 "status.m"
                      switch (MR_unmkbody(parse_tree__status__HeadVar__3_3)) {
#line 45 "status.m"
                        default: /*NOTREACHED*/ MR_assert(0);
#line 45 "status.m"
                        case (MR_Integer) 0:
#line 45 "status.m"
                          *parse_tree__status__HeadVar__1_1 = (MR_Integer) 2;
#line 45 "status.m"
                          break;
#line 45 "status.m"
                        case (MR_Integer) 1:
#line 45 "status.m"
                          *parse_tree__status__HeadVar__1_1 = (MR_Integer) 2;
#line 45 "status.m"
                          break;
#line 45 "status.m"
                        case (MR_Integer) 2:
#line 45 "status.m"
                          *parse_tree__status__HeadVar__1_1 = (MR_Integer) 0;
#line 45 "status.m"
                          break;
#line 45 "status.m"
                        case (MR_Integer) 3:
#line 45 "status.m"
                          *parse_tree__status__HeadVar__1_1 = (MR_Integer) 1;
#line 45 "status.m"
                          break;
#line 45 "status.m"
                        case (MR_Integer) 4:
#line 45 "status.m"
                          *parse_tree__status__HeadVar__1_1 = (MR_Integer) 1;
#line 45 "status.m"
                          break;
#line 45 "status.m"
                        case (MR_Integer) 5:
#line 45 "status.m"
                          *parse_tree__status__HeadVar__1_1 = (MR_Integer) 1;
#line 45 "status.m"
                          break;
#line 45 "status.m"
                        case (MR_Integer) 6:
#line 45 "status.m"
                          *parse_tree__status__HeadVar__1_1 = (MR_Integer) 1;
#line 45 "status.m"
                          break;
#line 45 "status.m"
                        case (MR_Integer) 7:
#line 45 "status.m"
                          *parse_tree__status__HeadVar__1_1 = (MR_Integer) 1;
#line 45 "status.m"
                          break;
#line 45 "status.m"
                        case (MR_Integer) 8:
#line 45 "status.m"
                          *parse_tree__status__HeadVar__1_1 = (MR_Integer) 1;
#line 45 "status.m"
                          break;
#line 45 "status.m"
                      }
#line 45 "status.m"
                      break;
#line 45 "status.m"
                    case (MR_Integer) 1:
#line 2087 "parse_tree.status.c"
                      *parse_tree__status__HeadVar__1_1 = (MR_Integer) 2;
#line 45 "status.m"
                      break;
#line 45 "status.m"
                    case (MR_Integer) 2:
#line 2093 "parse_tree.status.c"
                      *parse_tree__status__HeadVar__1_1 = (MR_Integer) 2;
#line 45 "status.m"
                      break;
#line 45 "status.m"
                  }
#line 45 "status.m"
                  break;
#line 45 "status.m"
                case (MR_Integer) 3:
#line 45 "status.m"
#line 45 "status.m"
                  switch (MR_tag((MR_Word) parse_tree__status__HeadVar__3_3)) {
#line 45 "status.m"
                    default: /*NOTREACHED*/ MR_assert(0);
#line 45 "status.m"
                    case (MR_Integer) 0:
#line 45 "status.m"
#line 45 "status.m"
                      switch (MR_unmkbody(parse_tree__status__HeadVar__3_3)) {
#line 45 "status.m"
                        default: /*NOTREACHED*/ MR_assert(0);
#line 45 "status.m"
                        case (MR_Integer) 0:
#line 45 "status.m"
                          *parse_tree__status__HeadVar__1_1 = (MR_Integer) 2;
#line 45 "status.m"
                          break;
#line 45 "status.m"
                        case (MR_Integer) 1:
#line 45 "status.m"
                          *parse_tree__status__HeadVar__1_1 = (MR_Integer) 2;
#line 45 "status.m"
                          break;
#line 45 "status.m"
                        case (MR_Integer) 2:
#line 45 "status.m"
                          *parse_tree__status__HeadVar__1_1 = (MR_Integer) 2;
#line 45 "status.m"
                          break;
#line 45 "status.m"
                        case (MR_Integer) 3:
#line 45 "status.m"
                          *parse_tree__status__HeadVar__1_1 = (MR_Integer) 0;
#line 45 "status.m"
                          break;
#line 45 "status.m"
                        case (MR_Integer) 4:
#line 45 "status.m"
                          *parse_tree__status__HeadVar__1_1 = (MR_Integer) 1;
#line 45 "status.m"
                          break;
#line 45 "status.m"
                        case (MR_Integer) 5:
#line 45 "status.m"
                          *parse_tree__status__HeadVar__1_1 = (MR_Integer) 1;
#line 45 "status.m"
                          break;
#line 45 "status.m"
                        case (MR_Integer) 6:
#line 45 "status.m"
                          *parse_tree__status__HeadVar__1_1 = (MR_Integer) 1;
#line 45 "status.m"
                          break;
#line 45 "status.m"
                        case (MR_Integer) 7:
#line 45 "status.m"
                          *parse_tree__status__HeadVar__1_1 = (MR_Integer) 1;
#line 45 "status.m"
                          break;
#line 45 "status.m"
                        case (MR_Integer) 8:
#line 45 "status.m"
                          *parse_tree__status__HeadVar__1_1 = (MR_Integer) 1;
#line 45 "status.m"
                          break;
#line 45 "status.m"
                      }
#line 45 "status.m"
                      break;
#line 45 "status.m"
                    case (MR_Integer) 1:
#line 2175 "parse_tree.status.c"
                      *parse_tree__status__HeadVar__1_1 = (MR_Integer) 2;
#line 45 "status.m"
                      break;
#line 45 "status.m"
                    case (MR_Integer) 2:
#line 2181 "parse_tree.status.c"
                      *parse_tree__status__HeadVar__1_1 = (MR_Integer) 2;
#line 45 "status.m"
                      break;
#line 45 "status.m"
                  }
#line 45 "status.m"
                  break;
#line 45 "status.m"
                case (MR_Integer) 4:
#line 45 "status.m"
#line 45 "status.m"
                  switch (MR_tag((MR_Word) parse_tree__status__HeadVar__3_3)) {
#line 45 "status.m"
                    default: /*NOTREACHED*/ MR_assert(0);
#line 45 "status.m"
                    case (MR_Integer) 0:
#line 45 "status.m"
#line 45 "status.m"
                      switch (MR_unmkbody(parse_tree__status__HeadVar__3_3)) {
#line 45 "status.m"
                        default: /*NOTREACHED*/ MR_assert(0);
#line 45 "status.m"
                        case (MR_Integer) 0:
#line 45 "status.m"
                          *parse_tree__status__HeadVar__1_1 = (MR_Integer) 2;
#line 45 "status.m"
                          break;
#line 45 "status.m"
                        case (MR_Integer) 1:
#line 45 "status.m"
                          *parse_tree__status__HeadVar__1_1 = (MR_Integer) 2;
#line 45 "status.m"
                          break;
#line 45 "status.m"
                        case (MR_Integer) 2:
#line 45 "status.m"
                          *parse_tree__status__HeadVar__1_1 = (MR_Integer) 2;
#line 45 "status.m"
                          break;
#line 45 "status.m"
                        case (MR_Integer) 3:
#line 45 "status.m"
                          *parse_tree__status__HeadVar__1_1 = (MR_Integer) 2;
#line 45 "status.m"
                          break;
#line 45 "status.m"
                        case (MR_Integer) 4:
#line 45 "status.m"
                          *parse_tree__status__HeadVar__1_1 = (MR_Integer) 0;
#line 45 "status.m"
                          break;
#line 45 "status.m"
                        case (MR_Integer) 5:
#line 45 "status.m"
                          *parse_tree__status__HeadVar__1_1 = (MR_Integer) 1;
#line 45 "status.m"
                          break;
#line 45 "status.m"
                        case (MR_Integer) 6:
#line 45 "status.m"
                          *parse_tree__status__HeadVar__1_1 = (MR_Integer) 1;
#line 45 "status.m"
                          break;
#line 45 "status.m"
                        case (MR_Integer) 7:
#line 45 "status.m"
                          *parse_tree__status__HeadVar__1_1 = (MR_Integer) 1;
#line 45 "status.m"
                          break;
#line 45 "status.m"
                        case (MR_Integer) 8:
#line 45 "status.m"
                          *parse_tree__status__HeadVar__1_1 = (MR_Integer) 1;
#line 45 "status.m"
                          break;
#line 45 "status.m"
                      }
#line 45 "status.m"
                      break;
#line 45 "status.m"
                    case (MR_Integer) 1:
#line 2263 "parse_tree.status.c"
                      *parse_tree__status__HeadVar__1_1 = (MR_Integer) 2;
#line 45 "status.m"
                      break;
#line 45 "status.m"
                    case (MR_Integer) 2:
#line 2269 "parse_tree.status.c"
                      *parse_tree__status__HeadVar__1_1 = (MR_Integer) 2;
#line 45 "status.m"
                      break;
#line 45 "status.m"
                  }
#line 45 "status.m"
                  break;
#line 45 "status.m"
                case (MR_Integer) 5:
#line 45 "status.m"
#line 45 "status.m"
                  switch (MR_tag((MR_Word) parse_tree__status__HeadVar__3_3)) {
#line 45 "status.m"
                    default: /*NOTREACHED*/ MR_assert(0);
#line 45 "status.m"
                    case (MR_Integer) 0:
#line 45 "status.m"
#line 45 "status.m"
                      switch (MR_unmkbody(parse_tree__status__HeadVar__3_3)) {
#line 45 "status.m"
                        default: /*NOTREACHED*/ MR_assert(0);
#line 45 "status.m"
                        case (MR_Integer) 0:
#line 45 "status.m"
                          *parse_tree__status__HeadVar__1_1 = (MR_Integer) 2;
#line 45 "status.m"
                          break;
#line 45 "status.m"
                        case (MR_Integer) 1:
#line 45 "status.m"
                          *parse_tree__status__HeadVar__1_1 = (MR_Integer) 2;
#line 45 "status.m"
                          break;
#line 45 "status.m"
                        case (MR_Integer) 2:
#line 45 "status.m"
                          *parse_tree__status__HeadVar__1_1 = (MR_Integer) 2;
#line 45 "status.m"
                          break;
#line 45 "status.m"
                        case (MR_Integer) 3:
#line 45 "status.m"
                          *parse_tree__status__HeadVar__1_1 = (MR_Integer) 2;
#line 45 "status.m"
                          break;
#line 45 "status.m"
                        case (MR_Integer) 4:
#line 45 "status.m"
                          *parse_tree__status__HeadVar__1_1 = (MR_Integer) 2;
#line 45 "status.m"
                          break;
#line 45 "status.m"
                        case (MR_Integer) 5:
#line 45 "status.m"
                          *parse_tree__status__HeadVar__1_1 = (MR_Integer) 0;
#line 45 "status.m"
                          break;
#line 45 "status.m"
                        case (MR_Integer) 6:
#line 45 "status.m"
                          *parse_tree__status__HeadVar__1_1 = (MR_Integer) 1;
#line 45 "status.m"
                          break;
#line 45 "status.m"
                        case (MR_Integer) 7:
#line 45 "status.m"
                          *parse_tree__status__HeadVar__1_1 = (MR_Integer) 1;
#line 45 "status.m"
                          break;
#line 45 "status.m"
                        case (MR_Integer) 8:
#line 45 "status.m"
                          *parse_tree__status__HeadVar__1_1 = (MR_Integer) 1;
#line 45 "status.m"
                          break;
#line 45 "status.m"
                      }
#line 45 "status.m"
                      break;
#line 45 "status.m"
                    case (MR_Integer) 1:
#line 2351 "parse_tree.status.c"
                      *parse_tree__status__HeadVar__1_1 = (MR_Integer) 2;
#line 45 "status.m"
                      break;
#line 45 "status.m"
                    case (MR_Integer) 2:
#line 2357 "parse_tree.status.c"
                      *parse_tree__status__HeadVar__1_1 = (MR_Integer) 2;
#line 45 "status.m"
                      break;
#line 45 "status.m"
                  }
#line 45 "status.m"
                  break;
#line 45 "status.m"
                case (MR_Integer) 6:
#line 45 "status.m"
#line 45 "status.m"
                  switch (MR_tag((MR_Word) parse_tree__status__HeadVar__3_3)) {
#line 45 "status.m"
                    default: /*NOTREACHED*/ MR_assert(0);
#line 45 "status.m"
                    case (MR_Integer) 0:
#line 45 "status.m"
#line 45 "status.m"
                      switch (MR_unmkbody(parse_tree__status__HeadVar__3_3)) {
#line 45 "status.m"
                        default: /*NOTREACHED*/ MR_assert(0);
#line 45 "status.m"
                        case (MR_Integer) 0:
#line 45 "status.m"
                          *parse_tree__status__HeadVar__1_1 = (MR_Integer) 2;
#line 45 "status.m"
                          break;
#line 45 "status.m"
                        case (MR_Integer) 1:
#line 45 "status.m"
                          *parse_tree__status__HeadVar__1_1 = (MR_Integer) 2;
#line 45 "status.m"
                          break;
#line 45 "status.m"
                        case (MR_Integer) 2:
#line 45 "status.m"
                          *parse_tree__status__HeadVar__1_1 = (MR_Integer) 2;
#line 45 "status.m"
                          break;
#line 45 "status.m"
                        case (MR_Integer) 3:
#line 45 "status.m"
                          *parse_tree__status__HeadVar__1_1 = (MR_Integer) 2;
#line 45 "status.m"
                          break;
#line 45 "status.m"
                        case (MR_Integer) 4:
#line 45 "status.m"
                          *parse_tree__status__HeadVar__1_1 = (MR_Integer) 2;
#line 45 "status.m"
                          break;
#line 45 "status.m"
                        case (MR_Integer) 5:
#line 45 "status.m"
                          *parse_tree__status__HeadVar__1_1 = (MR_Integer) 2;
#line 45 "status.m"
                          break;
#line 45 "status.m"
                        case (MR_Integer) 6:
#line 45 "status.m"
                          *parse_tree__status__HeadVar__1_1 = (MR_Integer) 0;
#line 45 "status.m"
                          break;
#line 45 "status.m"
                        case (MR_Integer) 7:
#line 45 "status.m"
                          *parse_tree__status__HeadVar__1_1 = (MR_Integer) 1;
#line 45 "status.m"
                          break;
#line 45 "status.m"
                        case (MR_Integer) 8:
#line 45 "status.m"
                          *parse_tree__status__HeadVar__1_1 = (MR_Integer) 1;
#line 45 "status.m"
                          break;
#line 45 "status.m"
                      }
#line 45 "status.m"
                      break;
#line 45 "status.m"
                    case (MR_Integer) 1:
#line 2439 "parse_tree.status.c"
                      *parse_tree__status__HeadVar__1_1 = (MR_Integer) 2;
#line 45 "status.m"
                      break;
#line 45 "status.m"
                    case (MR_Integer) 2:
#line 2445 "parse_tree.status.c"
                      *parse_tree__status__HeadVar__1_1 = (MR_Integer) 2;
#line 45 "status.m"
                      break;
#line 45 "status.m"
                  }
#line 45 "status.m"
                  break;
#line 45 "status.m"
                case (MR_Integer) 7:
#line 45 "status.m"
#line 45 "status.m"
                  switch (MR_tag((MR_Word) parse_tree__status__HeadVar__3_3)) {
#line 45 "status.m"
                    default: /*NOTREACHED*/ MR_assert(0);
#line 45 "status.m"
                    case (MR_Integer) 0:
#line 45 "status.m"
#line 45 "status.m"
                      switch (MR_unmkbody(parse_tree__status__HeadVar__3_3)) {
#line 45 "status.m"
                        default: /*NOTREACHED*/ MR_assert(0);
#line 45 "status.m"
                        case (MR_Integer) 0:
#line 45 "status.m"
                          *parse_tree__status__HeadVar__1_1 = (MR_Integer) 2;
#line 45 "status.m"
                          break;
#line 45 "status.m"
                        case (MR_Integer) 1:
#line 45 "status.m"
                          *parse_tree__status__HeadVar__1_1 = (MR_Integer) 2;
#line 45 "status.m"
                          break;
#line 45 "status.m"
                        case (MR_Integer) 2:
#line 45 "status.m"
                          *parse_tree__status__HeadVar__1_1 = (MR_Integer) 2;
#line 45 "status.m"
                          break;
#line 45 "status.m"
                        case (MR_Integer) 3:
#line 45 "status.m"
                          *parse_tree__status__HeadVar__1_1 = (MR_Integer) 2;
#line 45 "status.m"
                          break;
#line 45 "status.m"
                        case (MR_Integer) 4:
#line 45 "status.m"
                          *parse_tree__status__HeadVar__1_1 = (MR_Integer) 2;
#line 45 "status.m"
                          break;
#line 45 "status.m"
                        case (MR_Integer) 5:
#line 45 "status.m"
                          *parse_tree__status__HeadVar__1_1 = (MR_Integer) 2;
#line 45 "status.m"
                          break;
#line 45 "status.m"
                        case (MR_Integer) 6:
#line 45 "status.m"
                          *parse_tree__status__HeadVar__1_1 = (MR_Integer) 2;
#line 45 "status.m"
                          break;
#line 45 "status.m"
                        case (MR_Integer) 7:
#line 45 "status.m"
                          *parse_tree__status__HeadVar__1_1 = (MR_Integer) 0;
#line 45 "status.m"
                          break;
#line 45 "status.m"
                        case (MR_Integer) 8:
#line 45 "status.m"
                          *parse_tree__status__HeadVar__1_1 = (MR_Integer) 1;
#line 45 "status.m"
                          break;
#line 45 "status.m"
                      }
#line 45 "status.m"
                      break;
#line 45 "status.m"
                    case (MR_Integer) 1:
#line 2527 "parse_tree.status.c"
                      *parse_tree__status__HeadVar__1_1 = (MR_Integer) 2;
#line 45 "status.m"
                      break;
#line 45 "status.m"
                    case (MR_Integer) 2:
#line 2533 "parse_tree.status.c"
                      *parse_tree__status__HeadVar__1_1 = (MR_Integer) 2;
#line 45 "status.m"
                      break;
#line 45 "status.m"
                  }
#line 45 "status.m"
                  break;
#line 45 "status.m"
                case (MR_Integer) 8:
#line 45 "status.m"
#line 45 "status.m"
                  switch (MR_tag((MR_Word) parse_tree__status__HeadVar__3_3)) {
#line 45 "status.m"
                    default: /*NOTREACHED*/ MR_assert(0);
#line 45 "status.m"
                    case (MR_Integer) 0:
#line 45 "status.m"
#line 45 "status.m"
                      switch (MR_unmkbody(parse_tree__status__HeadVar__3_3)) {
#line 45 "status.m"
                        default: /*NOTREACHED*/ MR_assert(0);
#line 45 "status.m"
                        case (MR_Integer) 0:
#line 45 "status.m"
                          *parse_tree__status__HeadVar__1_1 = (MR_Integer) 2;
#line 45 "status.m"
                          break;
#line 45 "status.m"
                        case (MR_Integer) 1:
#line 45 "status.m"
                          *parse_tree__status__HeadVar__1_1 = (MR_Integer) 2;
#line 45 "status.m"
                          break;
#line 45 "status.m"
                        case (MR_Integer) 2:
#line 45 "status.m"
                          *parse_tree__status__HeadVar__1_1 = (MR_Integer) 2;
#line 45 "status.m"
                          break;
#line 45 "status.m"
                        case (MR_Integer) 3:
#line 45 "status.m"
                          *parse_tree__status__HeadVar__1_1 = (MR_Integer) 2;
#line 45 "status.m"
                          break;
#line 45 "status.m"
                        case (MR_Integer) 4:
#line 45 "status.m"
                          *parse_tree__status__HeadVar__1_1 = (MR_Integer) 2;
#line 45 "status.m"
                          break;
#line 45 "status.m"
                        case (MR_Integer) 5:
#line 45 "status.m"
                          *parse_tree__status__HeadVar__1_1 = (MR_Integer) 2;
#line 45 "status.m"
                          break;
#line 45 "status.m"
                        case (MR_Integer) 6:
#line 45 "status.m"
                          *parse_tree__status__HeadVar__1_1 = (MR_Integer) 2;
#line 45 "status.m"
                          break;
#line 45 "status.m"
                        case (MR_Integer) 7:
#line 45 "status.m"
                          *parse_tree__status__HeadVar__1_1 = (MR_Integer) 2;
#line 45 "status.m"
                          break;
#line 45 "status.m"
                        case (MR_Integer) 8:
#line 45 "status.m"
                          *parse_tree__status__HeadVar__1_1 = (MR_Integer) 0;
#line 45 "status.m"
                          break;
#line 45 "status.m"
                      }
#line 45 "status.m"
                      break;
#line 45 "status.m"
                    case (MR_Integer) 1:
#line 2615 "parse_tree.status.c"
                      *parse_tree__status__HeadVar__1_1 = (MR_Integer) 2;
#line 45 "status.m"
                      break;
#line 45 "status.m"
                    case (MR_Integer) 2:
#line 2621 "parse_tree.status.c"
                      *parse_tree__status__HeadVar__1_1 = (MR_Integer) 2;
#line 45 "status.m"
                      break;
#line 45 "status.m"
                  }
#line 45 "status.m"
                  break;
#line 45 "status.m"
              }
#line 45 "status.m"
              break;
#line 45 "status.m"
            case (MR_Integer) 1:
#line 45 "status.m"
              {
#line 45 "status.m"
                MR_Word parse_tree__status__V_52_52 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__status__HeadVar__2_2, (MR_Integer) 0)));

#line 45 "status.m"
#line 45 "status.m"
                switch (MR_tag((MR_Word) parse_tree__status__HeadVar__3_3)) {
#line 45 "status.m"
                  default: /*NOTREACHED*/ MR_assert(0);
#line 45 "status.m"
                  case (MR_Integer) 0:
#line 45 "status.m"
#line 45 "status.m"
                    switch (MR_unmkbody(parse_tree__status__HeadVar__3_3)) {
#line 45 "status.m"
                      default: /*NOTREACHED*/ MR_assert(0);
#line 45 "status.m"
                      case (MR_Integer) 0:
#line 2654 "parse_tree.status.c"
                        *parse_tree__status__HeadVar__1_1 = (MR_Integer) 1;
#line 45 "status.m"
                        break;
#line 45 "status.m"
                      case (MR_Integer) 1:
#line 2660 "parse_tree.status.c"
                        *parse_tree__status__HeadVar__1_1 = (MR_Integer) 1;
#line 45 "status.m"
                        break;
#line 45 "status.m"
                      case (MR_Integer) 2:
#line 2666 "parse_tree.status.c"
                        *parse_tree__status__HeadVar__1_1 = (MR_Integer) 1;
#line 45 "status.m"
                        break;
#line 45 "status.m"
                      case (MR_Integer) 3:
#line 2672 "parse_tree.status.c"
                        *parse_tree__status__HeadVar__1_1 = (MR_Integer) 1;
#line 45 "status.m"
                        break;
#line 45 "status.m"
                      case (MR_Integer) 4:
#line 2678 "parse_tree.status.c"
                        *parse_tree__status__HeadVar__1_1 = (MR_Integer) 1;
#line 45 "status.m"
                        break;
#line 45 "status.m"
                      case (MR_Integer) 5:
#line 2684 "parse_tree.status.c"
                        *parse_tree__status__HeadVar__1_1 = (MR_Integer) 1;
#line 45 "status.m"
                        break;
#line 45 "status.m"
                      case (MR_Integer) 6:
#line 2690 "parse_tree.status.c"
                        *parse_tree__status__HeadVar__1_1 = (MR_Integer) 1;
#line 45 "status.m"
                        break;
#line 45 "status.m"
                      case (MR_Integer) 7:
#line 2696 "parse_tree.status.c"
                        *parse_tree__status__HeadVar__1_1 = (MR_Integer) 1;
#line 45 "status.m"
                        break;
#line 45 "status.m"
                      case (MR_Integer) 8:
#line 2702 "parse_tree.status.c"
                        *parse_tree__status__HeadVar__1_1 = (MR_Integer) 1;
#line 45 "status.m"
                        break;
#line 45 "status.m"
                    }
#line 45 "status.m"
                    break;
#line 45 "status.m"
                  case (MR_Integer) 1:
#line 45 "status.m"
                    {
#line 45 "status.m"
                      MR_Word parse_tree__status__V_5_5 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__status__HeadVar__3_3, (MR_Integer) 0)));

#line 45 "status.m"
                      /* direct tailcall eliminated */
#line 45 "status.m"
                      {
#line 45 "status.m"
                        MR_Word parse_tree__status__HeadVar__2__tmp_copy_2 = parse_tree__status__V_52_52;
#line 45 "status.m"
                        MR_Word parse_tree__status__HeadVar__3__tmp_copy_3 = parse_tree__status__V_5_5;

#line 45 "status.m"
                        parse_tree__status__HeadVar__3_3 = parse_tree__status__HeadVar__3__tmp_copy_3;
#line 45 "status.m"
                        parse_tree__status__HeadVar__2_2 = parse_tree__status__HeadVar__2__tmp_copy_2;
#line 45 "status.m"
                      }
#line 45 "status.m"
                      continue;
#line 45 "status.m"
                    }
#line 45 "status.m"
                    break;
#line 45 "status.m"
                  case (MR_Integer) 2:
#line 2740 "parse_tree.status.c"
                    *parse_tree__status__HeadVar__1_1 = (MR_Integer) 1;
#line 45 "status.m"
                    break;
#line 45 "status.m"
                }
#line 45 "status.m"
              }
#line 45 "status.m"
              break;
#line 45 "status.m"
            case (MR_Integer) 2:
#line 45 "status.m"
              {
#line 45 "status.m"
                MR_Word parse_tree__status__V_53_53 = ((MR_Word) (MR_hl_field(MR_mktag(2), parse_tree__status__HeadVar__2_2, (MR_Integer) 0)));

#line 45 "status.m"
#line 45 "status.m"
                switch (MR_tag((MR_Word) parse_tree__status__HeadVar__3_3)) {
#line 45 "status.m"
                  default: /*NOTREACHED*/ MR_assert(0);
#line 45 "status.m"
                  case (MR_Integer) 0:
#line 45 "status.m"
#line 45 "status.m"
                    switch (MR_unmkbody(parse_tree__status__HeadVar__3_3)) {
#line 45 "status.m"
                      default: /*NOTREACHED*/ MR_assert(0);
#line 45 "status.m"
                      case (MR_Integer) 0:
#line 2771 "parse_tree.status.c"
                        *parse_tree__status__HeadVar__1_1 = (MR_Integer) 1;
#line 45 "status.m"
                        break;
#line 45 "status.m"
                      case (MR_Integer) 1:
#line 2777 "parse_tree.status.c"
                        *parse_tree__status__HeadVar__1_1 = (MR_Integer) 1;
#line 45 "status.m"
                        break;
#line 45 "status.m"
                      case (MR_Integer) 2:
#line 2783 "parse_tree.status.c"
                        *parse_tree__status__HeadVar__1_1 = (MR_Integer) 1;
#line 45 "status.m"
                        break;
#line 45 "status.m"
                      case (MR_Integer) 3:
#line 2789 "parse_tree.status.c"
                        *parse_tree__status__HeadVar__1_1 = (MR_Integer) 1;
#line 45 "status.m"
                        break;
#line 45 "status.m"
                      case (MR_Integer) 4:
#line 2795 "parse_tree.status.c"
                        *parse_tree__status__HeadVar__1_1 = (MR_Integer) 1;
#line 45 "status.m"
                        break;
#line 45 "status.m"
                      case (MR_Integer) 5:
#line 2801 "parse_tree.status.c"
                        *parse_tree__status__HeadVar__1_1 = (MR_Integer) 1;
#line 45 "status.m"
                        break;
#line 45 "status.m"
                      case (MR_Integer) 6:
#line 2807 "parse_tree.status.c"
                        *parse_tree__status__HeadVar__1_1 = (MR_Integer) 1;
#line 45 "status.m"
                        break;
#line 45 "status.m"
                      case (MR_Integer) 7:
#line 2813 "parse_tree.status.c"
                        *parse_tree__status__HeadVar__1_1 = (MR_Integer) 1;
#line 45 "status.m"
                        break;
#line 45 "status.m"
                      case (MR_Integer) 8:
#line 2819 "parse_tree.status.c"
                        *parse_tree__status__HeadVar__1_1 = (MR_Integer) 1;
#line 45 "status.m"
                        break;
#line 45 "status.m"
                    }
#line 45 "status.m"
                    break;
#line 45 "status.m"
                  case (MR_Integer) 1:
#line 2829 "parse_tree.status.c"
                    *parse_tree__status__HeadVar__1_1 = (MR_Integer) 2;
#line 45 "status.m"
                    break;
#line 45 "status.m"
                  case (MR_Integer) 2:
#line 45 "status.m"
                    {
#line 45 "status.m"
                      MR_Word parse_tree__status__V_20_20 = ((MR_Word) (MR_hl_field(MR_mktag(2), parse_tree__status__HeadVar__3_3, (MR_Integer) 0)));
#line 45 "status.m"
                      MR_Integer parse_tree__status__V_54_54 = (MR_Integer) parse_tree__status__V_53_53;
#line 45 "status.m"
                      MR_Integer parse_tree__status__V_55_55 = (MR_Integer) parse_tree__status__V_20_20;

#line 45 "status.m"
                      {
#line 45 "status.m"
                        mercury__private_builtin__builtin_compare_int_3_p_0(parse_tree__status__HeadVar__1_1, parse_tree__status__V_54_54, parse_tree__status__V_55_55);
#line 45 "status.m"
                        return;
                      }
#line 45 "status.m"
                    }
#line 45 "status.m"
                    break;
#line 45 "status.m"
                }
#line 45 "status.m"
              }
#line 45 "status.m"
              break;
#line 45 "status.m"
          }
#line 45 "status.m"
      }
#line 45 "status.m"
      break;
#line 45 "status.m"
    }
#line 45 "status.m"
}

#line 45 "status.m"
MR_bool MR_CALL 
parse_tree__status____Unify____import_status_0_0(
#line 45 "status.m"
  MR_Word parse_tree__status__HeadVar__1_1,
#line 45 "status.m"
  MR_Word parse_tree__status__HeadVar__2_2)
#line 45 "status.m"
{
#line 45 "status.m"
  while (MR_TRUE)
#line 45 "status.m"
    {
#line 45 "status.m"
      /* tailcall optimized into a loop */
#line 45 "status.m"
      {
#line 45 "status.m"
        MR_bool parse_tree__status__succeeded;
#line 45 "status.m"
        MR_Integer parse_tree__status__CastX_25 = (MR_Integer) parse_tree__status__HeadVar__1_1;
#line 45 "status.m"
        MR_Integer parse_tree__status__CastY_26 = (MR_Integer) parse_tree__status__HeadVar__2_2;

#line 45 "status.m"
        parse_tree__status__succeeded = (parse_tree__status__CastX_25 == parse_tree__status__CastY_26);
#line 45 "status.m"
        if (parse_tree__status__succeeded)
#line 45 "status.m"
          parse_tree__status__succeeded = MR_TRUE;
#line 45 "status.m"
        else
#line 45 "status.m"
#line 45 "status.m"
          switch (MR_tag((MR_Word) parse_tree__status__HeadVar__1_1)) {
#line 45 "status.m"
            default: /*NOTREACHED*/ MR_assert(0);
#line 45 "status.m"
            case (MR_Integer) 0:
#line 45 "status.m"
#line 45 "status.m"
              switch (MR_unmkbody(parse_tree__status__HeadVar__1_1)) {
#line 45 "status.m"
                default: /*NOTREACHED*/ MR_assert(0);
#line 45 "status.m"
                case (MR_Integer) 0:
#line 45 "status.m"
                  {
#line 45 "status.m"
                    MR_Integer parse_tree__status__CastX_7 = (MR_Integer) parse_tree__status__HeadVar__1_1;
#line 45 "status.m"
                    MR_Integer parse_tree__status__CastY_8 = (MR_Integer) parse_tree__status__HeadVar__2_2;

#line 45 "status.m"
                    parse_tree__status__succeeded = (parse_tree__status__CastY_8 == parse_tree__status__CastX_7);
#line 45 "status.m"
                  }
#line 45 "status.m"
                  break;
#line 45 "status.m"
                case (MR_Integer) 1:
#line 45 "status.m"
                  {
#line 45 "status.m"
                    MR_Integer parse_tree__status__CastX_9 = (MR_Integer) parse_tree__status__HeadVar__1_1;
#line 45 "status.m"
                    MR_Integer parse_tree__status__CastY_10 = (MR_Integer) parse_tree__status__HeadVar__2_2;

#line 45 "status.m"
                    parse_tree__status__succeeded = (parse_tree__status__CastY_10 == parse_tree__status__CastX_9);
#line 45 "status.m"
                  }
#line 45 "status.m"
                  break;
#line 45 "status.m"
                case (MR_Integer) 2:
#line 45 "status.m"
                  {
#line 45 "status.m"
                    MR_Integer parse_tree__status__CastX_11 = (MR_Integer) parse_tree__status__HeadVar__1_1;
#line 45 "status.m"
                    MR_Integer parse_tree__status__CastY_12 = (MR_Integer) parse_tree__status__HeadVar__2_2;

#line 45 "status.m"
                    parse_tree__status__succeeded = (parse_tree__status__CastY_12 == parse_tree__status__CastX_11);
#line 45 "status.m"
                  }
#line 45 "status.m"
                  break;
#line 45 "status.m"
                case (MR_Integer) 3:
#line 45 "status.m"
                  {
#line 45 "status.m"
                    MR_Integer parse_tree__status__CastX_13 = (MR_Integer) parse_tree__status__HeadVar__1_1;
#line 45 "status.m"
                    MR_Integer parse_tree__status__CastY_14 = (MR_Integer) parse_tree__status__HeadVar__2_2;

#line 45 "status.m"
                    parse_tree__status__succeeded = (parse_tree__status__CastY_14 == parse_tree__status__CastX_13);
#line 45 "status.m"
                  }
#line 45 "status.m"
                  break;
#line 45 "status.m"
                case (MR_Integer) 4:
#line 45 "status.m"
                  {
#line 45 "status.m"
                    MR_Integer parse_tree__status__CastX_15 = (MR_Integer) parse_tree__status__HeadVar__1_1;
#line 45 "status.m"
                    MR_Integer parse_tree__status__CastY_16 = (MR_Integer) parse_tree__status__HeadVar__2_2;

#line 45 "status.m"
                    parse_tree__status__succeeded = (parse_tree__status__CastY_16 == parse_tree__status__CastX_15);
#line 45 "status.m"
                  }
#line 45 "status.m"
                  break;
#line 45 "status.m"
                case (MR_Integer) 5:
#line 45 "status.m"
                  {
#line 45 "status.m"
                    MR_Integer parse_tree__status__CastX_17 = (MR_Integer) parse_tree__status__HeadVar__1_1;
#line 45 "status.m"
                    MR_Integer parse_tree__status__CastY_18 = (MR_Integer) parse_tree__status__HeadVar__2_2;

#line 45 "status.m"
                    parse_tree__status__succeeded = (parse_tree__status__CastY_18 == parse_tree__status__CastX_17);
#line 45 "status.m"
                  }
#line 45 "status.m"
                  break;
#line 45 "status.m"
                case (MR_Integer) 6:
#line 45 "status.m"
                  {
#line 45 "status.m"
                    MR_Integer parse_tree__status__CastX_19 = (MR_Integer) parse_tree__status__HeadVar__1_1;
#line 45 "status.m"
                    MR_Integer parse_tree__status__CastY_20 = (MR_Integer) parse_tree__status__HeadVar__2_2;

#line 45 "status.m"
                    parse_tree__status__succeeded = (parse_tree__status__CastY_20 == parse_tree__status__CastX_19);
#line 45 "status.m"
                  }
#line 45 "status.m"
                  break;
#line 45 "status.m"
                case (MR_Integer) 7:
#line 45 "status.m"
                  {
#line 45 "status.m"
                    MR_Integer parse_tree__status__CastX_21 = (MR_Integer) parse_tree__status__HeadVar__1_1;
#line 45 "status.m"
                    MR_Integer parse_tree__status__CastY_22 = (MR_Integer) parse_tree__status__HeadVar__2_2;

#line 45 "status.m"
                    parse_tree__status__succeeded = (parse_tree__status__CastY_22 == parse_tree__status__CastX_21);
#line 45 "status.m"
                  }
#line 45 "status.m"
                  break;
#line 45 "status.m"
                case (MR_Integer) 8:
#line 45 "status.m"
                  {
#line 45 "status.m"
                    MR_Integer parse_tree__status__CastX_23 = (MR_Integer) parse_tree__status__HeadVar__1_1;
#line 45 "status.m"
                    MR_Integer parse_tree__status__CastY_24 = (MR_Integer) parse_tree__status__HeadVar__2_2;

#line 45 "status.m"
                    parse_tree__status__succeeded = (parse_tree__status__CastY_24 == parse_tree__status__CastX_23);
#line 45 "status.m"
                  }
#line 45 "status.m"
                  break;
#line 45 "status.m"
              }
#line 45 "status.m"
              break;
#line 45 "status.m"
            case (MR_Integer) 1:
#line 45 "status.m"
              {
#line 45 "status.m"
                MR_Word parse_tree__status__V_3_3 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__status__HeadVar__1_1, (MR_Integer) 0)));
#line 45 "status.m"
                MR_Word parse_tree__status__V_4_4;

#line 45 "status.m"
                parse_tree__status__succeeded = ((MR_tag((MR_Word) parse_tree__status__HeadVar__2_2)) == (MR_mktag((MR_Integer) 1)));
#line 45 "status.m"
                if (parse_tree__status__succeeded)
#line 45 "status.m"
                  {
#line 45 "status.m"
                    parse_tree__status__V_4_4 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__status__HeadVar__2_2, (MR_Integer) 0)));
#line 3072 "parse_tree.status.c"
                    /* direct tailcall eliminated */
#line 3074 "parse_tree.status.c"
                    {
#line 3076 "parse_tree.status.c"
                      MR_Word parse_tree__status__HeadVar__1__tmp_copy_1 = parse_tree__status__V_3_3;
#line 3078 "parse_tree.status.c"
                      MR_Word parse_tree__status__HeadVar__2__tmp_copy_2 = parse_tree__status__V_4_4;

#line 3081 "parse_tree.status.c"
                      parse_tree__status__HeadVar__2_2 = parse_tree__status__HeadVar__2__tmp_copy_2;
#line 3083 "parse_tree.status.c"
                      parse_tree__status__HeadVar__1_1 = parse_tree__status__HeadVar__1__tmp_copy_1;
#line 3085 "parse_tree.status.c"
                    }
#line 3087 "parse_tree.status.c"
                    continue;
#line 45 "status.m"
                  }
#line 45 "status.m"
              }
#line 45 "status.m"
              break;
#line 45 "status.m"
            case (MR_Integer) 2:
#line 45 "status.m"
              {
#line 45 "status.m"
                MR_Word parse_tree__status__V_5_5 = ((MR_Word) (MR_hl_field(MR_mktag(2), parse_tree__status__HeadVar__1_1, (MR_Integer) 0)));
#line 45 "status.m"
                MR_Word parse_tree__status__V_6_6;

#line 45 "status.m"
                parse_tree__status__succeeded = ((MR_tag((MR_Word) parse_tree__status__HeadVar__2_2)) == (MR_mktag((MR_Integer) 2)));
#line 45 "status.m"
                if (parse_tree__status__succeeded)
#line 45 "status.m"
                  {
#line 45 "status.m"
                    parse_tree__status__V_6_6 = ((MR_Word) (MR_hl_field(MR_mktag(2), parse_tree__status__HeadVar__2_2, (MR_Integer) 0)));
#line 3112 "parse_tree.status.c"
                    parse_tree__status__succeeded = (parse_tree__status__V_5_5 == parse_tree__status__V_6_6);
#line 45 "status.m"
                  }
#line 45 "status.m"
              }
#line 45 "status.m"
              break;
#line 45 "status.m"
          }
#line 45 "status.m"
        return parse_tree__status__succeeded;
#line 45 "status.m"
      }
#line 45 "status.m"
      break;
#line 45 "status.m"
    }
#line 45 "status.m"
}

#line 105 "status.m"
void MR_CALL 
parse_tree__status____Compare____import_locn_0_0(
#line 105 "status.m"
  MR_Word * parse_tree__status__HeadVar__1_1,
#line 105 "status.m"
  MR_Word parse_tree__status__HeadVar__2_2,
#line 105 "status.m"
  MR_Word parse_tree__status__HeadVar__3_3)
#line 105 "status.m"
{
#line 105 "status.m"
  {
#line 105 "status.m"
    MR_bool parse_tree__status__succeeded;
#line 105 "status.m"
    MR_Integer parse_tree__status__Cast_HeadVar1_4 = (MR_Integer) parse_tree__status__HeadVar__2_2;
#line 105 "status.m"
    MR_Integer parse_tree__status__Cast_HeadVar2_5 = (MR_Integer) parse_tree__status__HeadVar__3_3;

#line 105 "status.m"
    {
#line 105 "status.m"
      mercury__private_builtin__builtin_compare_int_3_p_0(parse_tree__status__HeadVar__1_1, parse_tree__status__Cast_HeadVar1_4, parse_tree__status__Cast_HeadVar2_5);
#line 105 "status.m"
      return;
    }
#line 105 "status.m"
  }
#line 105 "status.m"
}

#line 105 "status.m"
MR_bool MR_CALL 
parse_tree__status____Unify____import_locn_0_0(
#line 105 "status.m"
  MR_Word parse_tree__status__HeadVar__2_1,
#line 105 "status.m"
  MR_Word parse_tree__status__HeadVar__2_2)
#line 105 "status.m"
{
#line 3174 "parse_tree.status.c"
  {
#line 3176 "parse_tree.status.c"
    MR_bool parse_tree__status__succeeded = (parse_tree__status__HeadVar__2_1 == parse_tree__status__HeadVar__2_2);

#line 3179 "parse_tree.status.c"
    return parse_tree__status__succeeded;
#line 3181 "parse_tree.status.c"
  }
#line 105 "status.m"
}

#line 177 "status.m"
void MR_CALL 
parse_tree__status____Compare____aug_module_section_0_0(
#line 177 "status.m"
  MR_Word * parse_tree__status__HeadVar__1_1,
#line 177 "status.m"
  MR_Word parse_tree__status__HeadVar__2_2,
#line 177 "status.m"
  MR_Word parse_tree__status__HeadVar__3_3)
#line 177 "status.m"
{
#line 177 "status.m"
  {
#line 177 "status.m"
    MR_bool parse_tree__status__succeeded;
#line 177 "status.m"
    MR_Integer parse_tree__status__CastX_102 = (MR_Integer) parse_tree__status__HeadVar__2_2;
#line 177 "status.m"
    MR_Integer parse_tree__status__CastY_103 = (MR_Integer) parse_tree__status__HeadVar__3_3;

#line 177 "status.m"
    parse_tree__status__succeeded = (parse_tree__status__CastX_102 == parse_tree__status__CastY_103);
#line 177 "status.m"
    if (parse_tree__status__succeeded)
#line 3210 "parse_tree.status.c"
      *parse_tree__status__HeadVar__1_1 = (MR_Integer) 0;
#line 177 "status.m"
    else
#line 177 "status.m"
#line 177 "status.m"
      switch (MR_tag((MR_Word) parse_tree__status__HeadVar__2_2)) {
#line 177 "status.m"
        default: /*NOTREACHED*/ MR_assert(0);
#line 177 "status.m"
        case (MR_Integer) 0:
#line 177 "status.m"
#line 177 "status.m"
          switch (MR_unmkbody(parse_tree__status__HeadVar__2_2)) {
#line 177 "status.m"
            default: /*NOTREACHED*/ MR_assert(0);
#line 177 "status.m"
            case (MR_Integer) 0:
#line 177 "status.m"
#line 177 "status.m"
              switch (MR_tag((MR_Word) parse_tree__status__HeadVar__3_3)) {
#line 177 "status.m"
                default: /*NOTREACHED*/ MR_assert(0);
#line 177 "status.m"
                case (MR_Integer) 0:
#line 177 "status.m"
#line 177 "status.m"
                  switch (MR_unmkbody(parse_tree__status__HeadVar__3_3)) {
#line 177 "status.m"
                    default: /*NOTREACHED*/ MR_assert(0);
#line 177 "status.m"
                    case (MR_Integer) 0:
#line 177 "status.m"
                      *parse_tree__status__HeadVar__1_1 = (MR_Integer) 0;
#line 177 "status.m"
                      break;
#line 177 "status.m"
                    case (MR_Integer) 1:
#line 177 "status.m"
                      *parse_tree__status__HeadVar__1_1 = (MR_Integer) 1;
#line 177 "status.m"
                      break;
#line 177 "status.m"
                    case (MR_Integer) 2:
#line 177 "status.m"
                      *parse_tree__status__HeadVar__1_1 = (MR_Integer) 1;
#line 177 "status.m"
                      break;
#line 177 "status.m"
                    case (MR_Integer) 3:
#line 177 "status.m"
                      *parse_tree__status__HeadVar__1_1 = (MR_Integer) 1;
#line 177 "status.m"
                      break;
#line 177 "status.m"
                  }
#line 177 "status.m"
                  break;
#line 177 "status.m"
                case (MR_Integer) 1:
#line 3270 "parse_tree.status.c"
                  *parse_tree__status__HeadVar__1_1 = (MR_Integer) 1;
#line 177 "status.m"
                  break;
#line 177 "status.m"
                case (MR_Integer) 2:
#line 3276 "parse_tree.status.c"
                  *parse_tree__status__HeadVar__1_1 = (MR_Integer) 1;
#line 177 "status.m"
                  break;
#line 177 "status.m"
                case (MR_Integer) 3:
#line 177 "status.m"
#line 177 "status.m"
                  switch (((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__status__HeadVar__3_3, (MR_Integer) 0)))) {
#line 177 "status.m"
                    default: /*NOTREACHED*/ MR_assert(0);
#line 177 "status.m"
                    case (MR_Integer) 0:
#line 3289 "parse_tree.status.c"
                      *parse_tree__status__HeadVar__1_1 = (MR_Integer) 1;
#line 177 "status.m"
                      break;
#line 177 "status.m"
                    case (MR_Integer) 1:
#line 3295 "parse_tree.status.c"
                      *parse_tree__status__HeadVar__1_1 = (MR_Integer) 1;
#line 177 "status.m"
                      break;
#line 177 "status.m"
                  }
#line 177 "status.m"
                  break;
#line 177 "status.m"
              }
#line 177 "status.m"
              break;
#line 177 "status.m"
            case (MR_Integer) 1:
#line 177 "status.m"
#line 177 "status.m"
              switch (MR_tag((MR_Word) parse_tree__status__HeadVar__3_3)) {
#line 177 "status.m"
                default: /*NOTREACHED*/ MR_assert(0);
#line 177 "status.m"
                case (MR_Integer) 0:
#line 177 "status.m"
#line 177 "status.m"
                  switch (MR_unmkbody(parse_tree__status__HeadVar__3_3)) {
#line 177 "status.m"
                    default: /*NOTREACHED*/ MR_assert(0);
#line 177 "status.m"
                    case (MR_Integer) 0:
#line 177 "status.m"
                      *parse_tree__status__HeadVar__1_1 = (MR_Integer) 2;
#line 177 "status.m"
                      break;
#line 177 "status.m"
                    case (MR_Integer) 1:
#line 177 "status.m"
                      *parse_tree__status__HeadVar__1_1 = (MR_Integer) 0;
#line 177 "status.m"
                      break;
#line 177 "status.m"
                    case (MR_Integer) 2:
#line 177 "status.m"
                      *parse_tree__status__HeadVar__1_1 = (MR_Integer) 1;
#line 177 "status.m"
                      break;
#line 177 "status.m"
                    case (MR_Integer) 3:
#line 177 "status.m"
                      *parse_tree__status__HeadVar__1_1 = (MR_Integer) 1;
#line 177 "status.m"
                      break;
#line 177 "status.m"
                  }
#line 177 "status.m"
                  break;
#line 177 "status.m"
                case (MR_Integer) 1:
#line 3351 "parse_tree.status.c"
                  *parse_tree__status__HeadVar__1_1 = (MR_Integer) 1;
#line 177 "status.m"
                  break;
#line 177 "status.m"
                case (MR_Integer) 2:
#line 3357 "parse_tree.status.c"
                  *parse_tree__status__HeadVar__1_1 = (MR_Integer) 1;
#line 177 "status.m"
                  break;
#line 177 "status.m"
                case (MR_Integer) 3:
#line 177 "status.m"
#line 177 "status.m"
                  switch (((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__status__HeadVar__3_3, (MR_Integer) 0)))) {
#line 177 "status.m"
                    default: /*NOTREACHED*/ MR_assert(0);
#line 177 "status.m"
                    case (MR_Integer) 0:
#line 3370 "parse_tree.status.c"
                      *parse_tree__status__HeadVar__1_1 = (MR_Integer) 1;
#line 177 "status.m"
                      break;
#line 177 "status.m"
                    case (MR_Integer) 1:
#line 3376 "parse_tree.status.c"
                      *parse_tree__status__HeadVar__1_1 = (MR_Integer) 1;
#line 177 "status.m"
                      break;
#line 177 "status.m"
                  }
#line 177 "status.m"
                  break;
#line 177 "status.m"
              }
#line 177 "status.m"
              break;
#line 177 "status.m"
            case (MR_Integer) 2:
#line 177 "status.m"
#line 177 "status.m"
              switch (MR_tag((MR_Word) parse_tree__status__HeadVar__3_3)) {
#line 177 "status.m"
                default: /*NOTREACHED*/ MR_assert(0);
#line 177 "status.m"
                case (MR_Integer) 0:
#line 177 "status.m"
#line 177 "status.m"
                  switch (MR_unmkbody(parse_tree__status__HeadVar__3_3)) {
#line 177 "status.m"
                    default: /*NOTREACHED*/ MR_assert(0);
#line 177 "status.m"
                    case (MR_Integer) 0:
#line 177 "status.m"
                      *parse_tree__status__HeadVar__1_1 = (MR_Integer) 2;
#line 177 "status.m"
                      break;
#line 177 "status.m"
                    case (MR_Integer) 1:
#line 177 "status.m"
                      *parse_tree__status__HeadVar__1_1 = (MR_Integer) 2;
#line 177 "status.m"
                      break;
#line 177 "status.m"
                    case (MR_Integer) 2:
#line 177 "status.m"
                      *parse_tree__status__HeadVar__1_1 = (MR_Integer) 0;
#line 177 "status.m"
                      break;
#line 177 "status.m"
                    case (MR_Integer) 3:
#line 177 "status.m"
                      *parse_tree__status__HeadVar__1_1 = (MR_Integer) 1;
#line 177 "status.m"
                      break;
#line 177 "status.m"
                  }
#line 177 "status.m"
                  break;
#line 177 "status.m"
                case (MR_Integer) 1:
#line 3432 "parse_tree.status.c"
                  *parse_tree__status__HeadVar__1_1 = (MR_Integer) 1;
#line 177 "status.m"
                  break;
#line 177 "status.m"
                case (MR_Integer) 2:
#line 3438 "parse_tree.status.c"
                  *parse_tree__status__HeadVar__1_1 = (MR_Integer) 1;
#line 177 "status.m"
                  break;
#line 177 "status.m"
                case (MR_Integer) 3:
#line 177 "status.m"
#line 177 "status.m"
                  switch (((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__status__HeadVar__3_3, (MR_Integer) 0)))) {
#line 177 "status.m"
                    default: /*NOTREACHED*/ MR_assert(0);
#line 177 "status.m"
                    case (MR_Integer) 0:
#line 3451 "parse_tree.status.c"
                      *parse_tree__status__HeadVar__1_1 = (MR_Integer) 1;
#line 177 "status.m"
                      break;
#line 177 "status.m"
                    case (MR_Integer) 1:
#line 3457 "parse_tree.status.c"
                      *parse_tree__status__HeadVar__1_1 = (MR_Integer) 1;
#line 177 "status.m"
                      break;
#line 177 "status.m"
                  }
#line 177 "status.m"
                  break;
#line 177 "status.m"
              }
#line 177 "status.m"
              break;
#line 177 "status.m"
            case (MR_Integer) 3:
#line 177 "status.m"
#line 177 "status.m"
              switch (MR_tag((MR_Word) parse_tree__status__HeadVar__3_3)) {
#line 177 "status.m"
                default: /*NOTREACHED*/ MR_assert(0);
#line 177 "status.m"
                case (MR_Integer) 0:
#line 177 "status.m"
#line 177 "status.m"
                  switch (MR_unmkbody(parse_tree__status__HeadVar__3_3)) {
#line 177 "status.m"
                    default: /*NOTREACHED*/ MR_assert(0);
#line 177 "status.m"
                    case (MR_Integer) 0:
#line 177 "status.m"
                      *parse_tree__status__HeadVar__1_1 = (MR_Integer) 2;
#line 177 "status.m"
                      break;
#line 177 "status.m"
                    case (MR_Integer) 1:
#line 177 "status.m"
                      *parse_tree__status__HeadVar__1_1 = (MR_Integer) 2;
#line 177 "status.m"
                      break;
#line 177 "status.m"
                    case (MR_Integer) 2:
#line 177 "status.m"
                      *parse_tree__status__HeadVar__1_1 = (MR_Integer) 2;
#line 177 "status.m"
                      break;
#line 177 "status.m"
                    case (MR_Integer) 3:
#line 177 "status.m"
                      *parse_tree__status__HeadVar__1_1 = (MR_Integer) 0;
#line 177 "status.m"
                      break;
#line 177 "status.m"
                  }
#line 177 "status.m"
                  break;
#line 177 "status.m"
                case (MR_Integer) 1:
#line 3513 "parse_tree.status.c"
                  *parse_tree__status__HeadVar__1_1 = (MR_Integer) 2;
#line 177 "status.m"
                  break;
#line 177 "status.m"
                case (MR_Integer) 2:
#line 3519 "parse_tree.status.c"
                  *parse_tree__status__HeadVar__1_1 = (MR_Integer) 2;
#line 177 "status.m"
                  break;
#line 177 "status.m"
                case (MR_Integer) 3:
#line 177 "status.m"
#line 177 "status.m"
                  switch (((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__status__HeadVar__3_3, (MR_Integer) 0)))) {
#line 177 "status.m"
                    default: /*NOTREACHED*/ MR_assert(0);
#line 177 "status.m"
                    case (MR_Integer) 0:
#line 3532 "parse_tree.status.c"
                      *parse_tree__status__HeadVar__1_1 = (MR_Integer) 2;
#line 177 "status.m"
                      break;
#line 177 "status.m"
                    case (MR_Integer) 1:
#line 3538 "parse_tree.status.c"
                      *parse_tree__status__HeadVar__1_1 = (MR_Integer) 2;
#line 177 "status.m"
                      break;
#line 177 "status.m"
                  }
#line 177 "status.m"
                  break;
#line 177 "status.m"
              }
#line 177 "status.m"
              break;
#line 177 "status.m"
          }
#line 177 "status.m"
          break;
#line 177 "status.m"
        case (MR_Integer) 1:
#line 177 "status.m"
          {
#line 177 "status.m"
            MR_Word parse_tree__status__V_111_111 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__status__HeadVar__2_2, (MR_Integer) 1)));
#line 177 "status.m"
            MR_Word parse_tree__status__V_112_112 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__status__HeadVar__2_2, (MR_Integer) 0)));

#line 177 "status.m"
#line 177 "status.m"
            switch (MR_tag((MR_Word) parse_tree__status__HeadVar__3_3)) {
#line 177 "status.m"
              default: /*NOTREACHED*/ MR_assert(0);
#line 177 "status.m"
              case (MR_Integer) 0:
#line 177 "status.m"
#line 177 "status.m"
                switch (MR_unmkbody(parse_tree__status__HeadVar__3_3)) {
#line 177 "status.m"
                  default: /*NOTREACHED*/ MR_assert(0);
#line 177 "status.m"
                  case (MR_Integer) 0:
#line 3577 "parse_tree.status.c"
                    *parse_tree__status__HeadVar__1_1 = (MR_Integer) 2;
#line 177 "status.m"
                    break;
#line 177 "status.m"
                  case (MR_Integer) 1:
#line 3583 "parse_tree.status.c"
                    *parse_tree__status__HeadVar__1_1 = (MR_Integer) 2;
#line 177 "status.m"
                    break;
#line 177 "status.m"
                  case (MR_Integer) 2:
#line 3589 "parse_tree.status.c"
                    *parse_tree__status__HeadVar__1_1 = (MR_Integer) 2;
#line 177 "status.m"
                    break;
#line 177 "status.m"
                  case (MR_Integer) 3:
#line 3595 "parse_tree.status.c"
                    *parse_tree__status__HeadVar__1_1 = (MR_Integer) 1;
#line 177 "status.m"
                    break;
#line 177 "status.m"
                }
#line 177 "status.m"
                break;
#line 177 "status.m"
              case (MR_Integer) 1:
#line 177 "status.m"
                {
#line 177 "status.m"
                  MR_Word parse_tree__status__V_30_30 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__status__HeadVar__3_3, (MR_Integer) 0)));
#line 177 "status.m"
                  MR_Word parse_tree__status__V_31_31 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__status__HeadVar__3_3, (MR_Integer) 1)));
#line 177 "status.m"
                  MR_Word parse_tree__status__V_32_32;

#line 177 "status.m"
                  {
#line 177 "status.m"
                    mdbcomp__sym_name____Compare____sym_name_0_0(&parse_tree__status__V_32_32, parse_tree__status__V_112_112, parse_tree__status__V_30_30);
                  }
#line 3619 "parse_tree.status.c"
                  parse_tree__status__succeeded = (parse_tree__status__V_32_32 == (MR_Integer) 0);
#line 177 "status.m"
                  parse_tree__status__succeeded = !(parse_tree__status__succeeded);
#line 177 "status.m"
                  if (parse_tree__status__succeeded)
#line 177 "status.m"
                    *parse_tree__status__HeadVar__1_1 = parse_tree__status__V_32_32;
#line 177 "status.m"
                  else
#line 177 "status.m"
                    {
#line 177 "status.m"
                      MR_Integer parse_tree__status__V_116_116 = (MR_Integer) parse_tree__status__V_111_111;
#line 177 "status.m"
                      MR_Integer parse_tree__status__V_117_117 = (MR_Integer) parse_tree__status__V_31_31;

#line 177 "status.m"
                      {
#line 177 "status.m"
                        mercury__private_builtin__builtin_compare_int_3_p_0(parse_tree__status__HeadVar__1_1, parse_tree__status__V_116_116, parse_tree__status__V_117_117);
#line 177 "status.m"
                        return;
                      }
#line 177 "status.m"
                    }
#line 177 "status.m"
                }
#line 177 "status.m"
                break;
#line 177 "status.m"
              case (MR_Integer) 2:
#line 3651 "parse_tree.status.c"
                *parse_tree__status__HeadVar__1_1 = (MR_Integer) 1;
#line 177 "status.m"
                break;
#line 177 "status.m"
              case (MR_Integer) 3:
#line 177 "status.m"
#line 177 "status.m"
                switch (((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__status__HeadVar__3_3, (MR_Integer) 0)))) {
#line 177 "status.m"
                  default: /*NOTREACHED*/ MR_assert(0);
#line 177 "status.m"
                  case (MR_Integer) 0:
#line 3664 "parse_tree.status.c"
                    *parse_tree__status__HeadVar__1_1 = (MR_Integer) 1;
#line 177 "status.m"
                    break;
#line 177 "status.m"
                  case (MR_Integer) 1:
#line 3670 "parse_tree.status.c"
                    *parse_tree__status__HeadVar__1_1 = (MR_Integer) 1;
#line 177 "status.m"
                    break;
#line 177 "status.m"
                }
#line 177 "status.m"
                break;
#line 177 "status.m"
            }
#line 177 "status.m"
          }
#line 177 "status.m"
          break;
#line 177 "status.m"
        case (MR_Integer) 2:
#line 177 "status.m"
          {
#line 177 "status.m"
            MR_Word parse_tree__status__V_114_114 = ((MR_Word) (MR_hl_field(MR_mktag(2), parse_tree__status__HeadVar__2_2, (MR_Integer) 1)));
#line 177 "status.m"
            MR_Word parse_tree__status__V_115_115 = ((MR_Word) (MR_hl_field(MR_mktag(2), parse_tree__status__HeadVar__2_2, (MR_Integer) 0)));

#line 177 "status.m"
#line 177 "status.m"
            switch (MR_tag((MR_Word) parse_tree__status__HeadVar__3_3)) {
#line 177 "status.m"
              default: /*NOTREACHED*/ MR_assert(0);
#line 177 "status.m"
              case (MR_Integer) 0:
#line 177 "status.m"
#line 177 "status.m"
                switch (MR_unmkbody(parse_tree__status__HeadVar__3_3)) {
#line 177 "status.m"
                  default: /*NOTREACHED*/ MR_assert(0);
#line 177 "status.m"
                  case (MR_Integer) 0:
#line 3707 "parse_tree.status.c"
                    *parse_tree__status__HeadVar__1_1 = (MR_Integer) 2;
#line 177 "status.m"
                    break;
#line 177 "status.m"
                  case (MR_Integer) 1:
#line 3713 "parse_tree.status.c"
                    *parse_tree__status__HeadVar__1_1 = (MR_Integer) 2;
#line 177 "status.m"
                    break;
#line 177 "status.m"
                  case (MR_Integer) 2:
#line 3719 "parse_tree.status.c"
                    *parse_tree__status__HeadVar__1_1 = (MR_Integer) 2;
#line 177 "status.m"
                    break;
#line 177 "status.m"
                  case (MR_Integer) 3:
#line 3725 "parse_tree.status.c"
                    *parse_tree__status__HeadVar__1_1 = (MR_Integer) 1;
#line 177 "status.m"
                    break;
#line 177 "status.m"
                }
#line 177 "status.m"
                break;
#line 177 "status.m"
              case (MR_Integer) 1:
#line 3735 "parse_tree.status.c"
                *parse_tree__status__HeadVar__1_1 = (MR_Integer) 2;
#line 177 "status.m"
                break;
#line 177 "status.m"
              case (MR_Integer) 2:
#line 177 "status.m"
                {
#line 177 "status.m"
                  MR_Word parse_tree__status__V_57_57 = ((MR_Word) (MR_hl_field(MR_mktag(2), parse_tree__status__HeadVar__3_3, (MR_Integer) 0)));
#line 177 "status.m"
                  MR_Word parse_tree__status__V_58_58 = ((MR_Word) (MR_hl_field(MR_mktag(2), parse_tree__status__HeadVar__3_3, (MR_Integer) 1)));
#line 177 "status.m"
                  MR_Word parse_tree__status__V_59_59;

#line 177 "status.m"
                  {
#line 177 "status.m"
                    mdbcomp__sym_name____Compare____sym_name_0_0(&parse_tree__status__V_59_59, parse_tree__status__V_115_115, parse_tree__status__V_57_57);
                  }
#line 3755 "parse_tree.status.c"
                  parse_tree__status__succeeded = (parse_tree__status__V_59_59 == (MR_Integer) 0);
#line 177 "status.m"
                  parse_tree__status__succeeded = !(parse_tree__status__succeeded);
#line 177 "status.m"
                  if (parse_tree__status__succeeded)
#line 177 "status.m"
                    *parse_tree__status__HeadVar__1_1 = parse_tree__status__V_59_59;
#line 177 "status.m"
                  else
#line 177 "status.m"
                    {
#line 177 "status.m"
                      MR_Integer parse_tree__status__V_118_118 = (MR_Integer) parse_tree__status__V_114_114;
#line 177 "status.m"
                      MR_Integer parse_tree__status__V_119_119 = (MR_Integer) parse_tree__status__V_58_58;

#line 177 "status.m"
                      {
#line 177 "status.m"
                        mercury__private_builtin__builtin_compare_int_3_p_0(parse_tree__status__HeadVar__1_1, parse_tree__status__V_118_118, parse_tree__status__V_119_119);
#line 177 "status.m"
                        return;
                      }
#line 177 "status.m"
                    }
#line 177 "status.m"
                }
#line 177 "status.m"
                break;
#line 177 "status.m"
              case (MR_Integer) 3:
#line 177 "status.m"
#line 177 "status.m"
                switch (((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__status__HeadVar__3_3, (MR_Integer) 0)))) {
#line 177 "status.m"
                  default: /*NOTREACHED*/ MR_assert(0);
#line 177 "status.m"
                  case (MR_Integer) 0:
#line 3794 "parse_tree.status.c"
                    *parse_tree__status__HeadVar__1_1 = (MR_Integer) 1;
#line 177 "status.m"
                    break;
#line 177 "status.m"
                  case (MR_Integer) 1:
#line 3800 "parse_tree.status.c"
                    *parse_tree__status__HeadVar__1_1 = (MR_Integer) 1;
#line 177 "status.m"
                    break;
#line 177 "status.m"
                }
#line 177 "status.m"
                break;
#line 177 "status.m"
            }
#line 177 "status.m"
          }
#line 177 "status.m"
          break;
#line 177 "status.m"
        case (MR_Integer) 3:
#line 177 "status.m"
#line 177 "status.m"
          switch (((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__status__HeadVar__2_2, (MR_Integer) 0)))) {
#line 177 "status.m"
            default: /*NOTREACHED*/ MR_assert(0);
#line 177 "status.m"
            case (MR_Integer) 0:
#line 177 "status.m"
              {
#line 177 "status.m"
                MR_Word parse_tree__status__V_110_110 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__status__HeadVar__2_2, (MR_Integer) 1)));

#line 177 "status.m"
#line 177 "status.m"
                switch (MR_tag((MR_Word) parse_tree__status__HeadVar__3_3)) {
#line 177 "status.m"
                  default: /*NOTREACHED*/ MR_assert(0);
#line 177 "status.m"
                  case (MR_Integer) 0:
#line 177 "status.m"
#line 177 "status.m"
                    switch (MR_unmkbody(parse_tree__status__HeadVar__3_3)) {
#line 177 "status.m"
                      default: /*NOTREACHED*/ MR_assert(0);
#line 177 "status.m"
                      case (MR_Integer) 0:
#line 3842 "parse_tree.status.c"
                        *parse_tree__status__HeadVar__1_1 = (MR_Integer) 2;
#line 177 "status.m"
                        break;
#line 177 "status.m"
                      case (MR_Integer) 1:
#line 3848 "parse_tree.status.c"
                        *parse_tree__status__HeadVar__1_1 = (MR_Integer) 2;
#line 177 "status.m"
                        break;
#line 177 "status.m"
                      case (MR_Integer) 2:
#line 3854 "parse_tree.status.c"
                        *parse_tree__status__HeadVar__1_1 = (MR_Integer) 2;
#line 177 "status.m"
                        break;
#line 177 "status.m"
                      case (MR_Integer) 3:
#line 3860 "parse_tree.status.c"
                        *parse_tree__status__HeadVar__1_1 = (MR_Integer) 1;
#line 177 "status.m"
                        break;
#line 177 "status.m"
                    }
#line 177 "status.m"
                    break;
#line 177 "status.m"
                  case (MR_Integer) 1:
#line 3870 "parse_tree.status.c"
                    *parse_tree__status__HeadVar__1_1 = (MR_Integer) 2;
#line 177 "status.m"
                    break;
#line 177 "status.m"
                  case (MR_Integer) 2:
#line 3876 "parse_tree.status.c"
                    *parse_tree__status__HeadVar__1_1 = (MR_Integer) 2;
#line 177 "status.m"
                    break;
#line 177 "status.m"
                  case (MR_Integer) 3:
#line 177 "status.m"
#line 177 "status.m"
                    switch (((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__status__HeadVar__3_3, (MR_Integer) 0)))) {
#line 177 "status.m"
                      default: /*NOTREACHED*/ MR_assert(0);
#line 177 "status.m"
                      case (MR_Integer) 0:
#line 177 "status.m"
                        {
#line 177 "status.m"
                          MR_Word parse_tree__status__V_78_78 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__status__HeadVar__3_3, (MR_Integer) 1)));

#line 177 "status.m"
                          {
#line 177 "status.m"
                            mdbcomp__sym_name____Compare____sym_name_0_0(parse_tree__status__HeadVar__1_1, parse_tree__status__V_110_110, parse_tree__status__V_78_78);
#line 177 "status.m"
                            return;
                          }
#line 177 "status.m"
                        }
#line 177 "status.m"
                        break;
#line 177 "status.m"
                      case (MR_Integer) 1:
#line 3907 "parse_tree.status.c"
                        *parse_tree__status__HeadVar__1_1 = (MR_Integer) 1;
#line 177 "status.m"
                        break;
#line 177 "status.m"
                    }
#line 177 "status.m"
                    break;
#line 177 "status.m"
                }
#line 177 "status.m"
              }
#line 177 "status.m"
              break;
#line 177 "status.m"
            case (MR_Integer) 1:
#line 177 "status.m"
              {
#line 177 "status.m"
                MR_Word parse_tree__status__V_113_113 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__status__HeadVar__2_2, (MR_Integer) 1)));

#line 177 "status.m"
#line 177 "status.m"
                switch (MR_tag((MR_Word) parse_tree__status__HeadVar__3_3)) {
#line 177 "status.m"
                  default: /*NOTREACHED*/ MR_assert(0);
#line 177 "status.m"
                  case (MR_Integer) 0:
#line 177 "status.m"
#line 177 "status.m"
                    switch (MR_unmkbody(parse_tree__status__HeadVar__3_3)) {
#line 177 "status.m"
                      default: /*NOTREACHED*/ MR_assert(0);
#line 177 "status.m"
                      case (MR_Integer) 0:
#line 3942 "parse_tree.status.c"
                        *parse_tree__status__HeadVar__1_1 = (MR_Integer) 2;
#line 177 "status.m"
                        break;
#line 177 "status.m"
                      case (MR_Integer) 1:
#line 3948 "parse_tree.status.c"
                        *parse_tree__status__HeadVar__1_1 = (MR_Integer) 2;
#line 177 "status.m"
                        break;
#line 177 "status.m"
                      case (MR_Integer) 2:
#line 3954 "parse_tree.status.c"
                        *parse_tree__status__HeadVar__1_1 = (MR_Integer) 2;
#line 177 "status.m"
                        break;
#line 177 "status.m"
                      case (MR_Integer) 3:
#line 3960 "parse_tree.status.c"
                        *parse_tree__status__HeadVar__1_1 = (MR_Integer) 1;
#line 177 "status.m"
                        break;
#line 177 "status.m"
                    }
#line 177 "status.m"
                    break;
#line 177 "status.m"
                  case (MR_Integer) 1:
#line 3970 "parse_tree.status.c"
                    *parse_tree__status__HeadVar__1_1 = (MR_Integer) 2;
#line 177 "status.m"
                    break;
#line 177 "status.m"
                  case (MR_Integer) 2:
#line 3976 "parse_tree.status.c"
                    *parse_tree__status__HeadVar__1_1 = (MR_Integer) 2;
#line 177 "status.m"
                    break;
#line 177 "status.m"
                  case (MR_Integer) 3:
#line 177 "status.m"
#line 177 "status.m"
                    switch (((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__status__HeadVar__3_3, (MR_Integer) 0)))) {
#line 177 "status.m"
                      default: /*NOTREACHED*/ MR_assert(0);
#line 177 "status.m"
                      case (MR_Integer) 0:
#line 3989 "parse_tree.status.c"
                        *parse_tree__status__HeadVar__1_1 = (MR_Integer) 2;
#line 177 "status.m"
                        break;
#line 177 "status.m"
                      case (MR_Integer) 1:
#line 177 "status.m"
                        {
#line 177 "status.m"
                          MR_Word parse_tree__status__V_94_94 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__status__HeadVar__3_3, (MR_Integer) 1)));

#line 177 "status.m"
                          {
#line 177 "status.m"
                            mdbcomp__sym_name____Compare____sym_name_0_0(parse_tree__status__HeadVar__1_1, parse_tree__status__V_113_113, parse_tree__status__V_94_94);
#line 177 "status.m"
                            return;
                          }
#line 177 "status.m"
                        }
#line 177 "status.m"
                        break;
#line 177 "status.m"
                    }
#line 177 "status.m"
                    break;
#line 177 "status.m"
                }
#line 177 "status.m"
              }
#line 177 "status.m"
              break;
#line 177 "status.m"
          }
#line 177 "status.m"
          break;
#line 177 "status.m"
      }
#line 177 "status.m"
  }
#line 177 "status.m"
}

#line 177 "status.m"
MR_bool MR_CALL 
parse_tree__status____Unify____aug_module_section_0_0(
#line 177 "status.m"
  MR_Word parse_tree__status__HeadVar__1_1,
#line 177 "status.m"
  MR_Word parse_tree__status__HeadVar__2_2)
#line 177 "status.m"
{
#line 177 "status.m"
  {
#line 177 "status.m"
    MR_bool parse_tree__status__succeeded;
#line 177 "status.m"
    MR_Integer parse_tree__status__CastX_23 = (MR_Integer) parse_tree__status__HeadVar__1_1;
#line 177 "status.m"
    MR_Integer parse_tree__status__CastY_24 = (MR_Integer) parse_tree__status__HeadVar__2_2;

#line 177 "status.m"
    parse_tree__status__succeeded = (parse_tree__status__CastX_23 == parse_tree__status__CastY_24);
#line 177 "status.m"
    if (parse_tree__status__succeeded)
#line 177 "status.m"
      parse_tree__status__succeeded = MR_TRUE;
#line 177 "status.m"
    else
#line 177 "status.m"
#line 177 "status.m"
      switch (MR_tag((MR_Word) parse_tree__status__HeadVar__1_1)) {
#line 177 "status.m"
        default: /*NOTREACHED*/ MR_assert(0);
#line 177 "status.m"
        case (MR_Integer) 0:
#line 177 "status.m"
#line 177 "status.m"
          switch (MR_unmkbody(parse_tree__status__HeadVar__1_1)) {
#line 177 "status.m"
            default: /*NOTREACHED*/ MR_assert(0);
#line 177 "status.m"
            case (MR_Integer) 0:
#line 177 "status.m"
              {
#line 177 "status.m"
                MR_Integer parse_tree__status__CastX_3 = (MR_Integer) parse_tree__status__HeadVar__1_1;
#line 177 "status.m"
                MR_Integer parse_tree__status__CastY_4 = (MR_Integer) parse_tree__status__HeadVar__2_2;

#line 177 "status.m"
                parse_tree__status__succeeded = (parse_tree__status__CastY_4 == parse_tree__status__CastX_3);
#line 177 "status.m"
              }
#line 177 "status.m"
              break;
#line 177 "status.m"
            case (MR_Integer) 1:
#line 177 "status.m"
              {
#line 177 "status.m"
                MR_Integer parse_tree__status__CastX_5 = (MR_Integer) parse_tree__status__HeadVar__1_1;
#line 177 "status.m"
                MR_Integer parse_tree__status__CastY_6 = (MR_Integer) parse_tree__status__HeadVar__2_2;

#line 177 "status.m"
                parse_tree__status__succeeded = (parse_tree__status__CastY_6 == parse_tree__status__CastX_5);
#line 177 "status.m"
              }
#line 177 "status.m"
              break;
#line 177 "status.m"
            case (MR_Integer) 2:
#line 177 "status.m"
              {
#line 177 "status.m"
                MR_Integer parse_tree__status__CastX_7 = (MR_Integer) parse_tree__status__HeadVar__1_1;
#line 177 "status.m"
                MR_Integer parse_tree__status__CastY_8 = (MR_Integer) parse_tree__status__HeadVar__2_2;

#line 177 "status.m"
                parse_tree__status__succeeded = (parse_tree__status__CastY_8 == parse_tree__status__CastX_7);
#line 177 "status.m"
              }
#line 177 "status.m"
              break;
#line 177 "status.m"
            case (MR_Integer) 3:
#line 177 "status.m"
              {
#line 177 "status.m"
                MR_Integer parse_tree__status__CastX_21 = (MR_Integer) parse_tree__status__HeadVar__1_1;
#line 177 "status.m"
                MR_Integer parse_tree__status__CastY_22 = (MR_Integer) parse_tree__status__HeadVar__2_2;

#line 177 "status.m"
                parse_tree__status__succeeded = (parse_tree__status__CastY_22 == parse_tree__status__CastX_21);
#line 177 "status.m"
              }
#line 177 "status.m"
              break;
#line 177 "status.m"
          }
#line 177 "status.m"
          break;
#line 177 "status.m"
        case (MR_Integer) 1:
#line 177 "status.m"
          {
#line 177 "status.m"
            MR_Word parse_tree__status__V_9_9 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__status__HeadVar__1_1, (MR_Integer) 0)));
#line 177 "status.m"
            MR_Word parse_tree__status__V_10_10 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__status__HeadVar__1_1, (MR_Integer) 1)));
#line 177 "status.m"
            MR_Word parse_tree__status__V_11_11;
#line 177 "status.m"
            MR_Word parse_tree__status__V_12_12;

#line 177 "status.m"
            parse_tree__status__succeeded = ((MR_tag((MR_Word) parse_tree__status__HeadVar__2_2)) == (MR_mktag((MR_Integer) 1)));
#line 177 "status.m"
            if (parse_tree__status__succeeded)
#line 177 "status.m"
              {
#line 177 "status.m"
                parse_tree__status__V_11_11 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__status__HeadVar__2_2, (MR_Integer) 0)));
#line 177 "status.m"
                parse_tree__status__V_12_12 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__status__HeadVar__2_2, (MR_Integer) 1)));
#line 4157 "parse_tree.status.c"
                {
#line 4159 "parse_tree.status.c"
                  parse_tree__status__succeeded = mdbcomp__sym_name____Unify____sym_name_0_0(parse_tree__status__V_9_9, parse_tree__status__V_11_11);
                }
#line 177 "status.m"
                if (parse_tree__status__succeeded)
#line 4164 "parse_tree.status.c"
                  parse_tree__status__succeeded = (parse_tree__status__V_10_10 == parse_tree__status__V_12_12);
#line 177 "status.m"
              }
#line 177 "status.m"
          }
#line 177 "status.m"
          break;
#line 177 "status.m"
        case (MR_Integer) 2:
#line 177 "status.m"
          {
#line 177 "status.m"
            MR_Word parse_tree__status__V_13_13 = ((MR_Word) (MR_hl_field(MR_mktag(2), parse_tree__status__HeadVar__1_1, (MR_Integer) 0)));
#line 177 "status.m"
            MR_Word parse_tree__status__V_14_14 = ((MR_Word) (MR_hl_field(MR_mktag(2), parse_tree__status__HeadVar__1_1, (MR_Integer) 1)));
#line 177 "status.m"
            MR_Word parse_tree__status__V_15_15;
#line 177 "status.m"
            MR_Word parse_tree__status__V_16_16;

#line 177 "status.m"
            parse_tree__status__succeeded = ((MR_tag((MR_Word) parse_tree__status__HeadVar__2_2)) == (MR_mktag((MR_Integer) 2)));
#line 177 "status.m"
            if (parse_tree__status__succeeded)
#line 177 "status.m"
              {
#line 177 "status.m"
                parse_tree__status__V_15_15 = ((MR_Word) (MR_hl_field(MR_mktag(2), parse_tree__status__HeadVar__2_2, (MR_Integer) 0)));
#line 177 "status.m"
                parse_tree__status__V_16_16 = ((MR_Word) (MR_hl_field(MR_mktag(2), parse_tree__status__HeadVar__2_2, (MR_Integer) 1)));
#line 4195 "parse_tree.status.c"
                {
#line 4197 "parse_tree.status.c"
                  parse_tree__status__succeeded = mdbcomp__sym_name____Unify____sym_name_0_0(parse_tree__status__V_13_13, parse_tree__status__V_15_15);
                }
#line 177 "status.m"
                if (parse_tree__status__succeeded)
#line 4202 "parse_tree.status.c"
                  parse_tree__status__succeeded = (parse_tree__status__V_14_14 == parse_tree__status__V_16_16);
#line 177 "status.m"
              }
#line 177 "status.m"
          }
#line 177 "status.m"
          break;
#line 177 "status.m"
        case (MR_Integer) 3:
#line 177 "status.m"
#line 177 "status.m"
          switch (((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__status__HeadVar__1_1, (MR_Integer) 0)))) {
#line 177 "status.m"
            default: /*NOTREACHED*/ MR_assert(0);
#line 177 "status.m"
            case (MR_Integer) 0:
#line 177 "status.m"
              {
#line 177 "status.m"
                MR_Word parse_tree__status__V_17_17 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__status__HeadVar__1_1, (MR_Integer) 1)));
#line 177 "status.m"
                MR_Word parse_tree__status__V_18_18;

#line 177 "status.m"
                parse_tree__status__succeeded = ((((MR_tag((MR_Word) parse_tree__status__HeadVar__2_2)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__status__HeadVar__2_2, (MR_Integer) 0)))) == (MR_Integer) 0)));
#line 177 "status.m"
                if (parse_tree__status__succeeded)
#line 177 "status.m"
                  {
#line 177 "status.m"
                    parse_tree__status__V_18_18 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__status__HeadVar__2_2, (MR_Integer) 1)));
#line 4234 "parse_tree.status.c"
                    {
#line 4236 "parse_tree.status.c"
                      return parse_tree__status__succeeded = mdbcomp__sym_name____Unify____sym_name_0_0(parse_tree__status__V_17_17, parse_tree__status__V_18_18);
                    }
#line 177 "status.m"
                  }
#line 177 "status.m"
              }
#line 177 "status.m"
              break;
#line 177 "status.m"
            case (MR_Integer) 1:
#line 177 "status.m"
              {
#line 177 "status.m"
                MR_Word parse_tree__status__V_19_19 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__status__HeadVar__1_1, (MR_Integer) 1)));
#line 177 "status.m"
                MR_Word parse_tree__status__V_20_20;

#line 177 "status.m"
                parse_tree__status__succeeded = ((((MR_tag((MR_Word) parse_tree__status__HeadVar__2_2)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__status__HeadVar__2_2, (MR_Integer) 0)))) == (MR_Integer) 1)));
#line 177 "status.m"
                if (parse_tree__status__succeeded)
#line 177 "status.m"
                  {
#line 177 "status.m"
                    parse_tree__status__V_20_20 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__status__HeadVar__2_2, (MR_Integer) 1)));
#line 4262 "parse_tree.status.c"
                    {
#line 4264 "parse_tree.status.c"
                      return parse_tree__status__succeeded = mdbcomp__sym_name____Unify____sym_name_0_0(parse_tree__status__V_19_19, parse_tree__status__V_20_20);
                    }
#line 177 "status.m"
                  }
#line 177 "status.m"
              }
#line 177 "status.m"
              break;
#line 177 "status.m"
          }
#line 177 "status.m"
          break;
#line 177 "status.m"
      }
#line 177 "status.m"
    return parse_tree__status__succeeded;
#line 177 "status.m"
  }
#line 177 "status.m"
}

#line 233 "status.m"
void MR_CALL 
parse_tree__status__aug_module_section_status_2_p_0(
#line 233 "status.m"
  MR_Word parse_tree__status__AugSection_3,
#line 233 "status.m"
  MR_Word * parse_tree__status__MaybeStatus_4)
#line 233 "status.m"
{
#line 338 "status.m"
  {
#line 338 "status.m"
    MR_bool parse_tree__status__succeeded;

#line 338 "status.m"
#line 338 "status.m"
    switch (MR_tag((MR_Word) parse_tree__status__AugSection_3)) {
#line 338 "status.m"
      default: /*NOTREACHED*/ MR_assert(0);
#line 338 "status.m"
      case (MR_Integer) 0:
#line 338 "status.m"
#line 338 "status.m"
        switch (MR_unmkbody(parse_tree__status__AugSection_3)) {
#line 338 "status.m"
          default: /*NOTREACHED*/ MR_assert(0);
#line 338 "status.m"
          case (MR_Integer) 0:
#line 338 "status.m"
            {
#line 339 "status.m"
              *parse_tree__status__MaybeStatus_4 = (MR_Word) MR_mkword(MR_mktag(1), &parse_tree__status_scalar_common_3[3]);
#line 338 "status.m"
            }
#line 338 "status.m"
            break;
#line 338 "status.m"
          case (MR_Integer) 1:
#line 338 "status.m"
            {
#line 339 "status.m"
              *parse_tree__status__MaybeStatus_4 = (MR_Word) MR_mkword(MR_mktag(1), &parse_tree__status_scalar_common_3[2]);
#line 338 "status.m"
            }
#line 338 "status.m"
            break;
#line 338 "status.m"
          case (MR_Integer) 2:
#line 338 "status.m"
            {
#line 339 "status.m"
              *parse_tree__status__MaybeStatus_4 = (MR_Word) MR_mkword(MR_mktag(1), &parse_tree__status_scalar_common_3[1]);
#line 338 "status.m"
            }
#line 338 "status.m"
            break;
#line 338 "status.m"
          case (MR_Integer) 3:
#line 342 "status.m"
            *parse_tree__status__MaybeStatus_4 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 338 "status.m"
            break;
#line 338 "status.m"
        }
#line 338 "status.m"
        break;
#line 338 "status.m"
      case (MR_Integer) 1:
#line 338 "status.m"
        {
#line 338 "status.m"
          MR_Word parse_tree__status__Section_7 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__status__AugSection_3, (MR_Integer) 1)));
#line 338 "status.m"
          MR_Word parse_tree__status__V_14_14;
#line 338 "status.m"
          MR_Word parse_tree__status__Status_31;
#line 327 "status.m"
          MR_Word parse_tree__status___ModuleName_6 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__status__AugSection_3, (MR_Integer) 0)));

#line 328 "status.m"
          {
#line 328 "status.m"
            parse_tree__status__V_14_14 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 328 "status.m"
            MR_hl_field(MR_mktag(2), parse_tree__status__V_14_14, 0) = ((MR_Box) (parse_tree__status__Section_7));
#line 328 "status.m"
          }
#line 328 "status.m"
          {
#line 328 "status.m"
            parse_tree__status__Status_31 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 328 "status.m"
            MR_hl_field(MR_mktag(0), parse_tree__status__Status_31, 0) = ((MR_Box) (parse_tree__status__V_14_14));
#line 328 "status.m"
            MR_hl_field(MR_mktag(0), parse_tree__status__Status_31, 1) = ((MR_Box) ((MR_Integer) 1));
#line 328 "status.m"
          }
#line 339 "status.m"
          {
#line 339 "status.m"
            MR_Word base;
#line 339 "status.m"
            base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 339 "status.m"
            *parse_tree__status__MaybeStatus_4 = base;
#line 339 "status.m"
            MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (parse_tree__status__Status_31));
#line 339 "status.m"
          }
#line 338 "status.m"
        }
#line 338 "status.m"
        break;
#line 338 "status.m"
      case (MR_Integer) 2:
#line 338 "status.m"
        {
#line 338 "status.m"
          MR_Word parse_tree__status__V_12_12;
#line 338 "status.m"
          MR_Word parse_tree__status__Section_24 = ((MR_Word) (MR_hl_field(MR_mktag(2), parse_tree__status__AugSection_3, (MR_Integer) 1)));
#line 338 "status.m"
          MR_Word parse_tree__status__Status_34;
#line 330 "status.m"
          MR_Word parse_tree__status___ModuleName_22 = ((MR_Word) (MR_hl_field(MR_mktag(2), parse_tree__status__AugSection_3, (MR_Integer) 0)));

#line 331 "status.m"
          {
#line 331 "status.m"
            parse_tree__status__V_12_12 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 331 "status.m"
            MR_hl_field(MR_mktag(2), parse_tree__status__V_12_12, 0) = ((MR_Box) (parse_tree__status__Section_24));
#line 331 "status.m"
          }
#line 331 "status.m"
          {
#line 331 "status.m"
            parse_tree__status__Status_34 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 331 "status.m"
            MR_hl_field(MR_mktag(0), parse_tree__status__Status_34, 0) = ((MR_Box) (parse_tree__status__V_12_12));
#line 331 "status.m"
            MR_hl_field(MR_mktag(0), parse_tree__status__Status_34, 1) = ((MR_Box) ((MR_Integer) 0));
#line 331 "status.m"
          }
#line 339 "status.m"
          {
#line 339 "status.m"
            MR_Word base;
#line 339 "status.m"
            base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 339 "status.m"
            *parse_tree__status__MaybeStatus_4 = base;
#line 339 "status.m"
            MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (parse_tree__status__Status_34));
#line 339 "status.m"
          }
#line 338 "status.m"
        }
#line 338 "status.m"
        break;
#line 338 "status.m"
      case (MR_Integer) 3:
#line 338 "status.m"
#line 338 "status.m"
        switch (((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__status__AugSection_3, (MR_Integer) 0)))) {
#line 338 "status.m"
          default: /*NOTREACHED*/ MR_assert(0);
#line 338 "status.m"
          case (MR_Integer) 0:
#line 338 "status.m"
            {
#line 339 "status.m"
              *parse_tree__status__MaybeStatus_4 = (MR_Word) MR_mkword(MR_mktag(1), &parse_tree__status_scalar_common_3[0]);
#line 338 "status.m"
            }
#line 338 "status.m"
            break;
#line 338 "status.m"
          case (MR_Integer) 1:
#line 338 "status.m"
            {
#line 339 "status.m"
              *parse_tree__status__MaybeStatus_4 = (MR_Word) MR_mkword(MR_mktag(1), &parse_tree__status_scalar_common_3[4]);
#line 338 "status.m"
            }
#line 338 "status.m"
            break;
#line 338 "status.m"
        }
#line 338 "status.m"
        break;
#line 338 "status.m"
    }
#line 338 "status.m"
  }
#line 233 "status.m"
}

#line 229 "status.m"
MR_Word MR_CALL 
parse_tree__status__make_ams_transitively_imported_1_f_0(
#line 229 "status.m"
  MR_Word parse_tree__status___ModuleName_3)
#line 229 "status.m"
{
#line 312 "status.m"
  {
#line 312 "status.m"
    MR_bool parse_tree__status__succeeded;
#line 312 "status.m"
    MR_Word parse_tree__status__HeadVar__2_2;

#line 312 "status.m"
    {
#line 312 "status.m"
      return parse_tree__status__HeadVar__2_2 = parse_tree__status__f_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_109_97_107_101_95_97_109_115_95_116_114_97_110_115_105_116_105_118_101_108_121_95_105_109_112_111_114_116_101_100_95_95_91_49_93_95_48_1_f_0();
    }
#line 312 "status.m"
    return parse_tree__status__HeadVar__2_2;
#line 312 "status.m"
  }
#line 229 "status.m"
}

#line 228 "status.m"
MR_Word MR_CALL 
parse_tree__status__make_ams_opt_imported_1_f_0(
#line 228 "status.m"
  MR_Word parse_tree__status__ModuleName_3)
#line 228 "status.m"
{
#line 311 "status.m"
  {
#line 311 "status.m"
    MR_bool parse_tree__status__succeeded;
#line 311 "status.m"
    MR_Word parse_tree__status__HeadVar__2_2;

#line 311 "status.m"
    {
#line 311 "status.m"
      parse_tree__status__HeadVar__2_2 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 311 "status.m"
      MR_hl_field(MR_mktag(3), parse_tree__status__HeadVar__2_2, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 311 "status.m"
      MR_hl_field(MR_mktag(3), parse_tree__status__HeadVar__2_2, 1) = ((MR_Box) (parse_tree__status__ModuleName_3));
#line 311 "status.m"
    }
#line 311 "status.m"
    return parse_tree__status__HeadVar__2_2;
#line 311 "status.m"
  }
#line 228 "status.m"
}

#line 227 "status.m"
MR_Word MR_CALL 
parse_tree__status__make_ams_abstract_imported_1_f_0(
#line 227 "status.m"
  MR_Word parse_tree__status__ModuleName_3)
#line 227 "status.m"
{
#line 310 "status.m"
  {
#line 310 "status.m"
    MR_bool parse_tree__status__succeeded;
#line 310 "status.m"
    MR_Word parse_tree__status__HeadVar__2_2;

#line 310 "status.m"
    {
#line 310 "status.m"
      parse_tree__status__HeadVar__2_2 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 310 "status.m"
      MR_hl_field(MR_mktag(3), parse_tree__status__HeadVar__2_2, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 0));
#line 310 "status.m"
      MR_hl_field(MR_mktag(3), parse_tree__status__HeadVar__2_2, 1) = ((MR_Box) (parse_tree__status__ModuleName_3));
#line 310 "status.m"
    }
#line 310 "status.m"
    return parse_tree__status__HeadVar__2_2;
#line 310 "status.m"
  }
#line 227 "status.m"
}

#line 226 "status.m"
MR_Word MR_CALL 
parse_tree__status__make_ams_used_2_f_0(
#line 226 "status.m"
  MR_Word parse_tree__status__ImportLocn_4,
#line 226 "status.m"
  MR_Word parse_tree__status__ModuleName_5)
#line 226 "status.m"
{
#line 309 "status.m"
  {
#line 309 "status.m"
    MR_bool parse_tree__status__succeeded;
#line 309 "status.m"
    MR_Word parse_tree__status__HeadVar__3_3;

#line 309 "status.m"
    {
#line 309 "status.m"
      parse_tree__status__HeadVar__3_3 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 309 "status.m"
      MR_hl_field(MR_mktag(2), parse_tree__status__HeadVar__3_3, 0) = ((MR_Box) (parse_tree__status__ModuleName_5));
#line 309 "status.m"
      MR_hl_field(MR_mktag(2), parse_tree__status__HeadVar__3_3, 1) = ((MR_Box) (parse_tree__status__ImportLocn_4));
#line 309 "status.m"
    }
#line 309 "status.m"
    return parse_tree__status__HeadVar__3_3;
#line 309 "status.m"
  }
#line 226 "status.m"
}

#line 225 "status.m"
MR_Word MR_CALL 
parse_tree__status__make_ams_imported_2_f_0(
#line 225 "status.m"
  MR_Word parse_tree__status__ImportLocn_4,
#line 225 "status.m"
  MR_Word parse_tree__status__ModuleName_5)
#line 225 "status.m"
{
#line 308 "status.m"
  {
#line 308 "status.m"
    MR_bool parse_tree__status__succeeded;
#line 308 "status.m"
    MR_Word parse_tree__status__HeadVar__3_3;

#line 308 "status.m"
    {
#line 308 "status.m"
      parse_tree__status__HeadVar__3_3 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 308 "status.m"
      MR_hl_field(MR_mktag(1), parse_tree__status__HeadVar__3_3, 0) = ((MR_Box) (parse_tree__status__ModuleName_5));
#line 308 "status.m"
      MR_hl_field(MR_mktag(1), parse_tree__status__HeadVar__3_3, 1) = ((MR_Box) (parse_tree__status__ImportLocn_4));
#line 308 "status.m"
    }
#line 308 "status.m"
    return parse_tree__status__HeadVar__3_3;
#line 308 "status.m"
  }
#line 225 "status.m"
}

#line 223 "status.m"
MR_Word MR_CALL 
parse_tree__status__make_ams_impl_but_exported_to_submodules_1_f_0(
#line 223 "status.m"
  MR_Word parse_tree__status___ModuleName_3)
#line 223 "status.m"
{
#line 306 "status.m"
  {
#line 306 "status.m"
    MR_bool parse_tree__status__succeeded;
#line 306 "status.m"
    MR_Word parse_tree__status__HeadVar__2_2;

#line 306 "status.m"
    {
#line 306 "status.m"
      return parse_tree__status__HeadVar__2_2 = parse_tree__status__f_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_109_97_107_101_95_97_109_115_95_105_109_112_108_95_98_117_116_95_101_120_112_111_114_116_101_100_95_116_111_95_115_117_98_109_111_100_117_108_101_115_95_95_91_49_93_95_48_1_f_0();
    }
#line 306 "status.m"
    return parse_tree__status__HeadVar__2_2;
#line 306 "status.m"
  }
#line 223 "status.m"
}

#line 222 "status.m"
MR_Word MR_CALL 
parse_tree__status__make_ams_implementation_1_f_0(
#line 222 "status.m"
  MR_Word parse_tree__status___ModuleName_3)
#line 222 "status.m"
{
#line 304 "status.m"
  {
#line 304 "status.m"
    MR_bool parse_tree__status__succeeded;
#line 304 "status.m"
    MR_Word parse_tree__status__HeadVar__2_2;

#line 304 "status.m"
    {
#line 304 "status.m"
      return parse_tree__status__HeadVar__2_2 = parse_tree__status__f_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_109_97_107_101_95_97_109_115_95_105_109_112_108_101_109_101_110_116_97_116_105_111_110_95_95_91_49_93_95_48_1_f_0();
    }
#line 304 "status.m"
    return parse_tree__status__HeadVar__2_2;
#line 304 "status.m"
  }
#line 222 "status.m"
}

#line 221 "status.m"
MR_Word MR_CALL 
parse_tree__status__make_ams_interface_1_f_0(
#line 221 "status.m"
  MR_Word parse_tree__status___ModuleName_3)
#line 221 "status.m"
{
#line 303 "status.m"
  {
#line 303 "status.m"
    MR_bool parse_tree__status__succeeded;
#line 303 "status.m"
    MR_Word parse_tree__status__HeadVar__2_2;

#line 303 "status.m"
    {
#line 303 "status.m"
      return parse_tree__status__HeadVar__2_2 = parse_tree__status__f_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_109_97_107_101_95_97_109_115_95_105_110_116_101_114_102_97_99_101_95_95_91_49_93_95_48_1_f_0();
    }
#line 303 "status.m"
    return parse_tree__status__HeadVar__2_2;
#line 303 "status.m"
  }
#line 221 "status.m"
}

#line 154 "status.m"
MR_Word MR_CALL 
parse_tree__status__status_defined_in_impl_section_1_f_0(
#line 154 "status.m"
  MR_Word parse_tree__status__HeadVar__1_1)
#line 154 "status.m"
{
#line 278 "status.m"
  while (MR_TRUE)
#line 278 "status.m"
    {
#line 278 "status.m"
      /* tailcall optimized into a loop */
#line 278 "status.m"
      {
#line 278 "status.m"
        MR_bool parse_tree__status__succeeded;
#line 278 "status.m"
        MR_Word parse_tree__status__HeadVar__2_2;

#line 278 "status.m"
#line 278 "status.m"
        switch (MR_tag((MR_Word) parse_tree__status__HeadVar__1_1)) {
#line 278 "status.m"
          default: /*NOTREACHED*/ MR_assert(0);
#line 278 "status.m"
          case (MR_Integer) 0:
#line 278 "status.m"
#line 278 "status.m"
            switch (MR_unmkbody(parse_tree__status__HeadVar__1_1)) {
#line 278 "status.m"
              default: /*NOTREACHED*/ MR_assert(0);
#line 278 "status.m"
              case (MR_Integer) 0:
#line 281 "status.m"
                parse_tree__status__HeadVar__2_2 = (MR_Integer) 0;
#line 278 "status.m"
                break;
#line 278 "status.m"
              case (MR_Integer) 1:
#line 282 "status.m"
                parse_tree__status__HeadVar__2_2 = (MR_Integer) 0;
#line 278 "status.m"
                break;
#line 278 "status.m"
              case (MR_Integer) 2:
#line 283 "status.m"
                parse_tree__status__HeadVar__2_2 = (MR_Integer) 0;
#line 278 "status.m"
                break;
#line 278 "status.m"
              case (MR_Integer) 3:
#line 284 "status.m"
                parse_tree__status__HeadVar__2_2 = (MR_Integer) 0;
#line 278 "status.m"
                break;
#line 278 "status.m"
              case (MR_Integer) 4:
#line 285 "status.m"
                parse_tree__status__HeadVar__2_2 = (MR_Integer) 1;
#line 278 "status.m"
                break;
#line 278 "status.m"
              case (MR_Integer) 5:
#line 278 "status.m"
                parse_tree__status__HeadVar__2_2 = (MR_Integer) 1;
#line 278 "status.m"
                break;
#line 278 "status.m"
              case (MR_Integer) 6:
#line 286 "status.m"
                parse_tree__status__HeadVar__2_2 = (MR_Integer) 0;
#line 278 "status.m"
                break;
#line 278 "status.m"
              case (MR_Integer) 7:
#line 279 "status.m"
                parse_tree__status__HeadVar__2_2 = (MR_Integer) 1;
#line 278 "status.m"
                break;
#line 278 "status.m"
              case (MR_Integer) 8:
#line 280 "status.m"
                parse_tree__status__HeadVar__2_2 = (MR_Integer) 1;
#line 278 "status.m"
                break;
#line 278 "status.m"
            }
#line 278 "status.m"
            break;
#line 278 "status.m"
          case (MR_Integer) 1:
#line 287 "status.m"
            {
#line 287 "status.m"
              MR_Word parse_tree__status__Status_3 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__status__HeadVar__1_1, (MR_Integer) 0)));

#line 288 "status.m"
              /* direct tailcall eliminated */
#line 288 "status.m"
              {
#line 288 "status.m"
                MR_Word parse_tree__status__HeadVar__1__tmp_copy_1 = parse_tree__status__Status_3;

#line 288 "status.m"
                parse_tree__status__HeadVar__1_1 = parse_tree__status__HeadVar__1__tmp_copy_1;
#line 288 "status.m"
              }
#line 288 "status.m"
              continue;
#line 287 "status.m"
            }
#line 278 "status.m"
            break;
#line 278 "status.m"
          case (MR_Integer) 2:
#line 289 "status.m"
            {
#line 289 "status.m"
              MR_Word parse_tree__status__ImportLocn_4 = ((MR_Word) (MR_hl_field(MR_mktag(2), parse_tree__status__HeadVar__1_1, (MR_Integer) 0)));

#line 295 "status.m"
              parse_tree__status__HeadVar__2_2 = ((&parse_tree__status_vector_common_1[0 + parse_tree__status__ImportLocn_4]))->parse_tree__status__vector_common_type_1_0__vct_1_f_0;
#line 289 "status.m"
            }
#line 278 "status.m"
            break;
#line 278 "status.m"
        }
#line 278 "status.m"
        return parse_tree__status__HeadVar__2_2;
#line 278 "status.m"
      }
#line 278 "status.m"
      break;
#line 278 "status.m"
    }
#line 154 "status.m"
}

#line 149 "status.m"
MR_Word MR_CALL 
parse_tree__status__status_defined_in_this_module_1_f_0(
#line 149 "status.m"
  MR_Word parse_tree__status__HeadVar__1_1)
#line 149 "status.m"
{
#line 266 "status.m"
  {
#line 266 "status.m"
    MR_bool parse_tree__status__succeeded;
#line 266 "status.m"
    MR_Word parse_tree__status__HeadVar__2_2;

#line 266 "status.m"
#line 266 "status.m"
    switch (MR_tag((MR_Word) parse_tree__status__HeadVar__1_1)) {
#line 266 "status.m"
      default: /*NOTREACHED*/ MR_assert(0);
#line 266 "status.m"
      case (MR_Integer) 0:
#line 266 "status.m"
#line 266 "status.m"
        switch (MR_unmkbody(parse_tree__status__HeadVar__1_1)) {
#line 266 "status.m"
          default: /*NOTREACHED*/ MR_assert(0);
#line 266 "status.m"
          case (MR_Integer) 0:
#line 270 "status.m"
            parse_tree__status__HeadVar__2_2 = (MR_Integer) 0;
#line 266 "status.m"
            break;
#line 266 "status.m"
          case (MR_Integer) 1:
#line 268 "status.m"
            parse_tree__status__HeadVar__2_2 = (MR_Integer) 0;
#line 266 "status.m"
            break;
#line 266 "status.m"
          case (MR_Integer) 2:
#line 269 "status.m"
            parse_tree__status__HeadVar__2_2 = (MR_Integer) 0;
#line 266 "status.m"
            break;
#line 266 "status.m"
          case (MR_Integer) 3:
#line 271 "status.m"
            parse_tree__status__HeadVar__2_2 = (MR_Integer) 1;
#line 266 "status.m"
            break;
#line 266 "status.m"
          case (MR_Integer) 4:
#line 272 "status.m"
            parse_tree__status__HeadVar__2_2 = (MR_Integer) 1;
#line 266 "status.m"
            break;
#line 266 "status.m"
          case (MR_Integer) 5:
#line 273 "status.m"
            parse_tree__status__HeadVar__2_2 = (MR_Integer) 1;
#line 266 "status.m"
            break;
#line 266 "status.m"
          case (MR_Integer) 6:
#line 274 "status.m"
            parse_tree__status__HeadVar__2_2 = (MR_Integer) 1;
#line 266 "status.m"
            break;
#line 266 "status.m"
          case (MR_Integer) 7:
#line 275 "status.m"
            parse_tree__status__HeadVar__2_2 = (MR_Integer) 1;
#line 266 "status.m"
            break;
#line 266 "status.m"
          case (MR_Integer) 8:
#line 276 "status.m"
            parse_tree__status__HeadVar__2_2 = (MR_Integer) 1;
#line 266 "status.m"
            break;
#line 266 "status.m"
        }
#line 266 "status.m"
        break;
#line 266 "status.m"
      case (MR_Integer) 1:
#line 267 "status.m"
        parse_tree__status__HeadVar__2_2 = (MR_Integer) 0;
#line 266 "status.m"
        break;
#line 266 "status.m"
      case (MR_Integer) 2:
#line 266 "status.m"
        parse_tree__status__HeadVar__2_2 = (MR_Integer) 0;
#line 266 "status.m"
        break;
#line 266 "status.m"
    }
#line 266 "status.m"
    return parse_tree__status__HeadVar__2_2;
#line 266 "status.m"
  }
#line 149 "status.m"
}

#line 142 "status.m"
MR_Word MR_CALL 
parse_tree__status__status_is_imported_1_f_0(
#line 142 "status.m"
  MR_Word parse_tree__status__Status_3)
#line 142 "status.m"
{
#line 264 "status.m"
  {
#line 264 "status.m"
    MR_bool parse_tree__status__succeeded;
#line 264 "status.m"
    MR_Word parse_tree__status__HeadVar__2_2;
#line 264 "status.m"
    MR_Word parse_tree__status__V_4_4;

#line 264 "status.m"
    {
#line 264 "status.m"
      parse_tree__status__V_4_4 = parse_tree__status__status_defined_in_this_module_1_f_0(parse_tree__status__Status_3);
    }
#line 264 "status.m"
    {
#line 264 "status.m"
      return parse_tree__status__HeadVar__2_2 = mercury__bool__not_1_f_0(parse_tree__status__V_4_4);
    }
#line 264 "status.m"
    return parse_tree__status__HeadVar__2_2;
#line 264 "status.m"
  }
#line 142 "status.m"
}

#line 134 "status.m"
MR_Word MR_CALL 
parse_tree__status__status_is_exported_to_non_submodules_1_f_0(
#line 134 "status.m"
  MR_Word parse_tree__status__Status_3)
#line 134 "status.m"
{
#line 254 "status.m"
  {
#line 254 "status.m"
    MR_bool parse_tree__status__succeeded;
#line 254 "status.m"
    MR_Word parse_tree__status__HeadVar__2_2;
#line 256 "status.m"
    MR_Word parse_tree__status__V_4_4;

#line 256 "status.m"
    {
#line 256 "status.m"
      parse_tree__status__V_4_4 = parse_tree__status__status_is_exported_1_f_0(parse_tree__status__Status_3);
    }
#line 256 "status.m"
    parse_tree__status__succeeded = (parse_tree__status__V_4_4 == (MR_Integer) 1);
#line 256 "status.m"
    if (parse_tree__status__succeeded)
#line 256 "status.m"
      {
#line 257 "status.m"
        parse_tree__status__succeeded = (parse_tree__status__Status_3 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 7))));
#line 257 "status.m"
        parse_tree__status__succeeded = !(parse_tree__status__succeeded);
#line 256 "status.m"
      }
#line 254 "status.m"
    if (parse_tree__status__succeeded)
#line 259 "status.m"
      parse_tree__status__HeadVar__2_2 = (MR_Integer) 1;
#line 254 "status.m"
    else
#line 261 "status.m"
      parse_tree__status__HeadVar__2_2 = (MR_Integer) 0;
#line 254 "status.m"
    return parse_tree__status__HeadVar__2_2;
#line 254 "status.m"
  }
#line 134 "status.m"
}

#line 127 "status.m"
MR_Word MR_CALL 
parse_tree__status__status_is_exported_1_f_0(
#line 127 "status.m"
  MR_Word parse_tree__status__HeadVar__1_1)
#line 127 "status.m"
{
#line 242 "status.m"
  {
#line 242 "status.m"
    MR_bool parse_tree__status__succeeded;
#line 242 "status.m"
    MR_Word parse_tree__status__HeadVar__2_2;

#line 242 "status.m"
#line 242 "status.m"
    switch (MR_tag((MR_Word) parse_tree__status__HeadVar__1_1)) {
#line 242 "status.m"
      default: /*NOTREACHED*/ MR_assert(0);
#line 242 "status.m"
      case (MR_Integer) 0:
#line 242 "status.m"
#line 242 "status.m"
        switch (MR_unmkbody(parse_tree__status__HeadVar__1_1)) {
#line 242 "status.m"
          default: /*NOTREACHED*/ MR_assert(0);
#line 242 "status.m"
          case (MR_Integer) 0:
#line 246 "status.m"
            parse_tree__status__HeadVar__2_2 = (MR_Integer) 0;
#line 242 "status.m"
            break;
#line 242 "status.m"
          case (MR_Integer) 1:
#line 244 "status.m"
            parse_tree__status__HeadVar__2_2 = (MR_Integer) 0;
#line 242 "status.m"
            break;
#line 242 "status.m"
          case (MR_Integer) 2:
#line 245 "status.m"
            parse_tree__status__HeadVar__2_2 = (MR_Integer) 0;
#line 242 "status.m"
            break;
#line 242 "status.m"
          case (MR_Integer) 3:
#line 247 "status.m"
            parse_tree__status__HeadVar__2_2 = (MR_Integer) 1;
#line 242 "status.m"
            break;
#line 242 "status.m"
          case (MR_Integer) 4:
#line 248 "status.m"
            parse_tree__status__HeadVar__2_2 = (MR_Integer) 1;
#line 242 "status.m"
            break;
#line 242 "status.m"
          case (MR_Integer) 5:
#line 249 "status.m"
            parse_tree__status__HeadVar__2_2 = (MR_Integer) 1;
#line 242 "status.m"
            break;
#line 242 "status.m"
          case (MR_Integer) 6:
#line 250 "status.m"
            parse_tree__status__HeadVar__2_2 = (MR_Integer) 1;
#line 242 "status.m"
            break;
#line 242 "status.m"
          case (MR_Integer) 7:
#line 251 "status.m"
            parse_tree__status__HeadVar__2_2 = (MR_Integer) 1;
#line 242 "status.m"
            break;
#line 242 "status.m"
          case (MR_Integer) 8:
#line 252 "status.m"
            parse_tree__status__HeadVar__2_2 = (MR_Integer) 0;
#line 242 "status.m"
            break;
#line 242 "status.m"
        }
#line 242 "status.m"
        break;
#line 242 "status.m"
      case (MR_Integer) 1:
#line 243 "status.m"
        parse_tree__status__HeadVar__2_2 = (MR_Integer) 0;
#line 242 "status.m"
        break;
#line 242 "status.m"
      case (MR_Integer) 2:
#line 242 "status.m"
        parse_tree__status__HeadVar__2_2 = (MR_Integer) 0;
#line 242 "status.m"
        break;
#line 242 "status.m"
    }
#line 242 "status.m"
    return parse_tree__status__HeadVar__2_2;
#line 242 "status.m"
  }
#line 127 "status.m"
}

void mercury__parse_tree__status__init(void)
{
}

void mercury__parse_tree__status__init_type_tables(void)
{
	static MR_bool initialised = MR_FALSE;
	if (initialised) return;
	initialised = MR_TRUE;

	MR_register_type_ctor_info(&parse_tree__status__parse_tree__status__type_ctor_info_aug_module_section_0);
	MR_register_type_ctor_info(&parse_tree__status__parse_tree__status__type_ctor_info_import_locn_0);
	MR_register_type_ctor_info(&parse_tree__status__parse_tree__status__type_ctor_info_import_status_0);
	MR_register_type_ctor_info(&parse_tree__status__parse_tree__status__type_ctor_info_item_status_0);
	MR_register_type_ctor_info(&parse_tree__status__parse_tree__status__type_ctor_info_module_section_0);
	MR_register_type_ctor_info(&parse_tree__status__parse_tree__status__type_ctor_info_need_qualifier_0);
}

void mercury__parse_tree__status__init_debugger(void)
{
	MR_fatal_error("debugger initialization in MLDS grade");
}

/* ensure everything is compiled with the same grade */
static const void *const MR_grade = &MR_GRADE_VAR;

/* :- end_module parse_tree.status. */
