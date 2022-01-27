/*
** Automatically generated from `status.m'
** by the Mercury compiler,
** version DEV
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
#include "parse_tree.file_kind.mih"




#line 69 "parse_tree.status.c"
static const MR_EnumFunctorDesc parse_tree__status__parse_tree__status__enum_functor_desc_import_locn_0_0;

#line 72 "parse_tree.status.c"
static const MR_EnumFunctorDesc parse_tree__status__parse_tree__status__enum_functor_desc_import_locn_0_1;

#line 75 "parse_tree.status.c"
static const MR_EnumFunctorDesc parse_tree__status__parse_tree__status__enum_functor_desc_import_locn_0_2;

#line 78 "parse_tree.status.c"
static const MR_EnumFunctorDesc parse_tree__status__parse_tree__status__enum_functor_desc_import_locn_0_3;

#line 81 "parse_tree.status.c"
static const MR_EnumFunctorDescPtr parse_tree__status__parse_tree__status__enum_value_ordered_import_locn_0[4];

#line 84 "parse_tree.status.c"
static const MR_EnumFunctorDescPtr parse_tree__status__parse_tree__status__enum_name_ordered_import_locn_0[4];

#line 87 "parse_tree.status.c"
static const MR_Integer parse_tree__status__parse_tree__status__functor_number_map_import_locn_0[4];

#line 90 "parse_tree.status.c"
static const MR_PseudoTypeInfo parse_tree__status__parse_tree__status__field_types_import_status_0_0[1];

#line 93 "parse_tree.status.c"
static const MR_DuFunctorDesc parse_tree__status__parse_tree__status__du_functor_desc_import_status_0_0;

#line 96 "parse_tree.status.c"
static const MR_PseudoTypeInfo parse_tree__status__parse_tree__status__field_types_import_status_0_1[1];

#line 99 "parse_tree.status.c"
static const MR_DuFunctorDesc parse_tree__status__parse_tree__status__du_functor_desc_import_status_0_1;

#line 102 "parse_tree.status.c"
static const MR_DuFunctorDesc parse_tree__status__parse_tree__status__du_functor_desc_import_status_0_2;

#line 105 "parse_tree.status.c"
static const MR_DuFunctorDesc parse_tree__status__parse_tree__status__du_functor_desc_import_status_0_3;

#line 108 "parse_tree.status.c"
static const MR_DuFunctorDesc parse_tree__status__parse_tree__status__du_functor_desc_import_status_0_4;

#line 111 "parse_tree.status.c"
static const MR_DuFunctorDesc parse_tree__status__parse_tree__status__du_functor_desc_import_status_0_5;

#line 114 "parse_tree.status.c"
static const MR_DuFunctorDesc parse_tree__status__parse_tree__status__du_functor_desc_import_status_0_6;

#line 117 "parse_tree.status.c"
static const MR_DuFunctorDesc parse_tree__status__parse_tree__status__du_functor_desc_import_status_0_7;

#line 120 "parse_tree.status.c"
static const MR_DuFunctorDesc parse_tree__status__parse_tree__status__du_functor_desc_import_status_0_8;

#line 123 "parse_tree.status.c"
static const MR_DuFunctorDesc parse_tree__status__parse_tree__status__du_functor_desc_import_status_0_9;

#line 126 "parse_tree.status.c"
static const MR_DuFunctorDesc parse_tree__status__parse_tree__status__du_functor_desc_import_status_0_10;

#line 129 "parse_tree.status.c"
static const MR_DuFunctorDescPtr parse_tree__status__parse_tree__status__du_stag_ordered_import_status_0_0[9];

#line 132 "parse_tree.status.c"
static const MR_DuFunctorDescPtr parse_tree__status__parse_tree__status__du_stag_ordered_import_status_0_1[1];

#line 135 "parse_tree.status.c"
static const MR_DuFunctorDescPtr parse_tree__status__parse_tree__status__du_stag_ordered_import_status_0_2[1];

#line 138 "parse_tree.status.c"
static const MR_DuPtagLayout parse_tree__status__parse_tree__status__du_ptag_ordered_import_status_0[3];

#line 141 "parse_tree.status.c"
static const MR_DuFunctorDescPtr parse_tree__status__parse_tree__status__du_name_ordered_import_status_0[11];

#line 144 "parse_tree.status.c"
static const MR_Integer parse_tree__status__parse_tree__status__functor_number_map_import_status_0[11];

#line 147 "parse_tree.status.c"
static const MR_PseudoTypeInfo parse_tree__status__parse_tree__status__field_types_int_for_opt_module_section_0_0[2];

#line 150 "parse_tree.status.c"
static const MR_DuFunctorDesc parse_tree__status__parse_tree__status__du_functor_desc_int_for_opt_module_section_0_0;

#line 153 "parse_tree.status.c"
static const MR_DuFunctorDescPtr parse_tree__status__parse_tree__status__du_stag_ordered_int_for_opt_module_section_0_0[1];

#line 156 "parse_tree.status.c"
static const MR_DuPtagLayout parse_tree__status__parse_tree__status__du_ptag_ordered_int_for_opt_module_section_0[1];

#line 159 "parse_tree.status.c"
static const MR_DuFunctorDescPtr parse_tree__status__parse_tree__status__du_name_ordered_int_for_opt_module_section_0[1];

#line 162 "parse_tree.status.c"
static const MR_Integer parse_tree__status__parse_tree__status__functor_number_map_int_for_opt_module_section_0[1];

#line 165 "parse_tree.status.c"
static const MR_PseudoTypeInfo parse_tree__status__parse_tree__status__field_types_int_module_section_0_0[3];

#line 168 "parse_tree.status.c"
static const MR_DuArgLocn parse_tree__status__parse_tree__status__field_locns_int_module_section_0_0[3];

#line 171 "parse_tree.status.c"
static const MR_DuFunctorDesc parse_tree__status__parse_tree__status__du_functor_desc_int_module_section_0_0;

#line 174 "parse_tree.status.c"
static const MR_PseudoTypeInfo parse_tree__status__parse_tree__status__field_types_int_module_section_0_1[3];

#line 177 "parse_tree.status.c"
static const MR_DuArgLocn parse_tree__status__parse_tree__status__field_locns_int_module_section_0_1[3];

#line 180 "parse_tree.status.c"
static const MR_DuFunctorDesc parse_tree__status__parse_tree__status__du_functor_desc_int_module_section_0_1;

#line 183 "parse_tree.status.c"
static const MR_PseudoTypeInfo parse_tree__status__parse_tree__status__field_types_int_module_section_0_2[2];

#line 186 "parse_tree.status.c"
static const MR_DuFunctorDesc parse_tree__status__parse_tree__status__du_functor_desc_int_module_section_0_2;

#line 189 "parse_tree.status.c"
static const MR_DuFunctorDescPtr parse_tree__status__parse_tree__status__du_stag_ordered_int_module_section_0_0[1];

#line 192 "parse_tree.status.c"
static const MR_DuFunctorDescPtr parse_tree__status__parse_tree__status__du_stag_ordered_int_module_section_0_1[1];

#line 195 "parse_tree.status.c"
static const MR_DuFunctorDescPtr parse_tree__status__parse_tree__status__du_stag_ordered_int_module_section_0_2[1];

#line 198 "parse_tree.status.c"
static const MR_DuPtagLayout parse_tree__status__parse_tree__status__du_ptag_ordered_int_module_section_0[3];

#line 201 "parse_tree.status.c"
static const MR_DuFunctorDescPtr parse_tree__status__parse_tree__status__du_name_ordered_int_module_section_0[3];

#line 204 "parse_tree.status.c"
static const MR_Integer parse_tree__status__parse_tree__status__functor_number_map_int_module_section_0[3];

#line 207 "parse_tree.status.c"
static const MR_PseudoTypeInfo parse_tree__status__parse_tree__status__field_types_item_status_0_0[2];

#line 210 "parse_tree.status.c"
static const MR_DuFunctorDesc parse_tree__status__parse_tree__status__du_functor_desc_item_status_0_0;

#line 213 "parse_tree.status.c"
static const MR_DuFunctorDescPtr parse_tree__status__parse_tree__status__du_stag_ordered_item_status_0_0[1];

#line 216 "parse_tree.status.c"
static const MR_DuPtagLayout parse_tree__status__parse_tree__status__du_ptag_ordered_item_status_0[1];

#line 219 "parse_tree.status.c"
static const MR_DuFunctorDescPtr parse_tree__status__parse_tree__status__du_name_ordered_item_status_0[1];

#line 222 "parse_tree.status.c"
static const MR_Integer parse_tree__status__parse_tree__status__functor_number_map_item_status_0[1];

#line 225 "parse_tree.status.c"
static const MR_EnumFunctorDesc parse_tree__status__parse_tree__status__enum_functor_desc_module_section_0_0;

#line 228 "parse_tree.status.c"
static const MR_EnumFunctorDesc parse_tree__status__parse_tree__status__enum_functor_desc_module_section_0_1;

#line 231 "parse_tree.status.c"
static const MR_EnumFunctorDescPtr parse_tree__status__parse_tree__status__enum_value_ordered_module_section_0[2];

#line 234 "parse_tree.status.c"
static const MR_EnumFunctorDescPtr parse_tree__status__parse_tree__status__enum_name_ordered_module_section_0[2];

#line 237 "parse_tree.status.c"
static const MR_Integer parse_tree__status__parse_tree__status__functor_number_map_module_section_0[2];

#line 240 "parse_tree.status.c"
static const MR_EnumFunctorDesc parse_tree__status__parse_tree__status__enum_functor_desc_need_qualifier_0_0;

#line 243 "parse_tree.status.c"
static const MR_EnumFunctorDesc parse_tree__status__parse_tree__status__enum_functor_desc_need_qualifier_0_1;

#line 246 "parse_tree.status.c"
static const MR_EnumFunctorDescPtr parse_tree__status__parse_tree__status__enum_value_ordered_need_qualifier_0[2];

#line 249 "parse_tree.status.c"
static const MR_EnumFunctorDescPtr parse_tree__status__parse_tree__status__enum_name_ordered_need_qualifier_0[2];

#line 252 "parse_tree.status.c"
static const MR_Integer parse_tree__status__parse_tree__status__functor_number_map_need_qualifier_0[2];

#line 255 "parse_tree.status.c"
static const MR_PseudoTypeInfo parse_tree__status__parse_tree__status__field_types_opt_module_section_0_0[2];

#line 258 "parse_tree.status.c"
static const MR_DuFunctorDesc parse_tree__status__parse_tree__status__du_functor_desc_opt_module_section_0_0;

#line 261 "parse_tree.status.c"
static const MR_DuFunctorDescPtr parse_tree__status__parse_tree__status__du_stag_ordered_opt_module_section_0_0[1];

#line 264 "parse_tree.status.c"
static const MR_DuPtagLayout parse_tree__status__parse_tree__status__du_ptag_ordered_opt_module_section_0[1];

#line 267 "parse_tree.status.c"
static const MR_DuFunctorDescPtr parse_tree__status__parse_tree__status__du_name_ordered_opt_module_section_0[1];

#line 270 "parse_tree.status.c"
static const MR_Integer parse_tree__status__parse_tree__status__functor_number_map_opt_module_section_0[1];

#line 273 "parse_tree.status.c"
static const MR_EnumFunctorDesc parse_tree__status__parse_tree__status__enum_functor_desc_src_module_section_0_0;

#line 276 "parse_tree.status.c"
static const MR_EnumFunctorDesc parse_tree__status__parse_tree__status__enum_functor_desc_src_module_section_0_1;

#line 279 "parse_tree.status.c"
static const MR_EnumFunctorDesc parse_tree__status__parse_tree__status__enum_functor_desc_src_module_section_0_2;

#line 282 "parse_tree.status.c"
static const MR_EnumFunctorDescPtr parse_tree__status__parse_tree__status__enum_value_ordered_src_module_section_0[3];

#line 285 "parse_tree.status.c"
static const MR_EnumFunctorDescPtr parse_tree__status__parse_tree__status__enum_name_ordered_src_module_section_0[3];

#line 288 "parse_tree.status.c"
static const MR_Integer parse_tree__status__parse_tree__status__functor_number_map_src_module_section_0[3];

#line 291 "parse_tree.status.c"
static MR_bool MR_CALL 
parse_tree__status____Unify____import_locn_0_0_10001(
#line 294 "parse_tree.status.c"
  MR_Box parse_tree__status__wrapper_arg_1,
#line 296 "parse_tree.status.c"
  MR_Box parse_tree__status__wrapper_arg_2);

#line 299 "parse_tree.status.c"
static void MR_CALL 
parse_tree__status____Compare____import_locn_0_0_10001(
#line 302 "parse_tree.status.c"
  MR_Box * parse_tree__status__wrapper_arg_1,
#line 304 "parse_tree.status.c"
  MR_Box parse_tree__status__wrapper_arg_2,
#line 306 "parse_tree.status.c"
  MR_Box parse_tree__status__wrapper_arg_3);

#line 309 "parse_tree.status.c"
static MR_bool MR_CALL 
parse_tree__status____Unify____import_status_0_0_10001(
#line 312 "parse_tree.status.c"
  MR_Box parse_tree__status__wrapper_arg_1,
#line 314 "parse_tree.status.c"
  MR_Box parse_tree__status__wrapper_arg_2);

#line 317 "parse_tree.status.c"
static void MR_CALL 
parse_tree__status____Compare____import_status_0_0_10001(
#line 320 "parse_tree.status.c"
  MR_Box * parse_tree__status__wrapper_arg_1,
#line 322 "parse_tree.status.c"
  MR_Box parse_tree__status__wrapper_arg_2,
#line 324 "parse_tree.status.c"
  MR_Box parse_tree__status__wrapper_arg_3);

#line 327 "parse_tree.status.c"
static MR_bool MR_CALL 
parse_tree__status____Unify____int_for_opt_module_section_0_0_10001(
#line 330 "parse_tree.status.c"
  MR_Box parse_tree__status__wrapper_arg_1,
#line 332 "parse_tree.status.c"
  MR_Box parse_tree__status__wrapper_arg_2);

#line 335 "parse_tree.status.c"
static void MR_CALL 
parse_tree__status____Compare____int_for_opt_module_section_0_0_10001(
#line 338 "parse_tree.status.c"
  MR_Box * parse_tree__status__wrapper_arg_1,
#line 340 "parse_tree.status.c"
  MR_Box parse_tree__status__wrapper_arg_2,
#line 342 "parse_tree.status.c"
  MR_Box parse_tree__status__wrapper_arg_3);

#line 345 "parse_tree.status.c"
static MR_bool MR_CALL 
parse_tree__status____Unify____int_module_section_0_0_10001(
#line 348 "parse_tree.status.c"
  MR_Box parse_tree__status__wrapper_arg_1,
#line 350 "parse_tree.status.c"
  MR_Box parse_tree__status__wrapper_arg_2);

#line 353 "parse_tree.status.c"
static void MR_CALL 
parse_tree__status____Compare____int_module_section_0_0_10001(
#line 356 "parse_tree.status.c"
  MR_Box * parse_tree__status__wrapper_arg_1,
#line 358 "parse_tree.status.c"
  MR_Box parse_tree__status__wrapper_arg_2,
#line 360 "parse_tree.status.c"
  MR_Box parse_tree__status__wrapper_arg_3);

#line 363 "parse_tree.status.c"
static MR_bool MR_CALL 
parse_tree__status____Unify____item_status_0_0_10001(
#line 366 "parse_tree.status.c"
  MR_Box parse_tree__status__wrapper_arg_1,
#line 368 "parse_tree.status.c"
  MR_Box parse_tree__status__wrapper_arg_2);

#line 371 "parse_tree.status.c"
static void MR_CALL 
parse_tree__status____Compare____item_status_0_0_10001(
#line 374 "parse_tree.status.c"
  MR_Box * parse_tree__status__wrapper_arg_1,
#line 376 "parse_tree.status.c"
  MR_Box parse_tree__status__wrapper_arg_2,
#line 378 "parse_tree.status.c"
  MR_Box parse_tree__status__wrapper_arg_3);

#line 381 "parse_tree.status.c"
static MR_bool MR_CALL 
parse_tree__status____Unify____module_section_0_0_10001(
#line 384 "parse_tree.status.c"
  MR_Box parse_tree__status__wrapper_arg_1,
#line 386 "parse_tree.status.c"
  MR_Box parse_tree__status__wrapper_arg_2);

#line 389 "parse_tree.status.c"
static void MR_CALL 
parse_tree__status____Compare____module_section_0_0_10001(
#line 392 "parse_tree.status.c"
  MR_Box * parse_tree__status__wrapper_arg_1,
#line 394 "parse_tree.status.c"
  MR_Box parse_tree__status__wrapper_arg_2,
#line 396 "parse_tree.status.c"
  MR_Box parse_tree__status__wrapper_arg_3);

#line 399 "parse_tree.status.c"
static MR_bool MR_CALL 
parse_tree__status____Unify____need_qualifier_0_0_10001(
#line 402 "parse_tree.status.c"
  MR_Box parse_tree__status__wrapper_arg_1,
#line 404 "parse_tree.status.c"
  MR_Box parse_tree__status__wrapper_arg_2);

#line 407 "parse_tree.status.c"
static void MR_CALL 
parse_tree__status____Compare____need_qualifier_0_0_10001(
#line 410 "parse_tree.status.c"
  MR_Box * parse_tree__status__wrapper_arg_1,
#line 412 "parse_tree.status.c"
  MR_Box parse_tree__status__wrapper_arg_2,
#line 414 "parse_tree.status.c"
  MR_Box parse_tree__status__wrapper_arg_3);

#line 417 "parse_tree.status.c"
static MR_bool MR_CALL 
parse_tree__status____Unify____opt_module_section_0_0_10001(
#line 420 "parse_tree.status.c"
  MR_Box parse_tree__status__wrapper_arg_1,
#line 422 "parse_tree.status.c"
  MR_Box parse_tree__status__wrapper_arg_2);

#line 425 "parse_tree.status.c"
static void MR_CALL 
parse_tree__status____Compare____opt_module_section_0_0_10001(
#line 428 "parse_tree.status.c"
  MR_Box * parse_tree__status__wrapper_arg_1,
#line 430 "parse_tree.status.c"
  MR_Box parse_tree__status__wrapper_arg_2,
#line 432 "parse_tree.status.c"
  MR_Box parse_tree__status__wrapper_arg_3);

#line 435 "parse_tree.status.c"
static MR_bool MR_CALL 
parse_tree__status____Unify____src_module_section_0_0_10001(
#line 438 "parse_tree.status.c"
  MR_Box parse_tree__status__wrapper_arg_1,
#line 440 "parse_tree.status.c"
  MR_Box parse_tree__status__wrapper_arg_2);

#line 443 "parse_tree.status.c"
static void MR_CALL 
parse_tree__status____Compare____src_module_section_0_0_10001(
#line 446 "parse_tree.status.c"
  MR_Box * parse_tree__status__wrapper_arg_1,
#line 448 "parse_tree.status.c"
  MR_Box parse_tree__status__wrapper_arg_2,
#line 450 "parse_tree.status.c"
  MR_Box parse_tree__status__wrapper_arg_3);


static /* final */ const MR_Box parse_tree__status_scalar_common_2[5][2];


#line 296 "status.m"
/* sealed */ struct parse_tree__status__vector_common_type_1_0_s {
#line 296 "status.m"
  const MR_Word parse_tree__status__vector_common_type_1_0__vct_1_f_0;
#line 296 "status.m"
};

static /* final */ const struct parse_tree__status__vector_common_type_1_0_s parse_tree__status_vector_common_1[4];



static /* final */ const MR_Box parse_tree__status_scalar_common_2[5][2] = {
  /* row 0 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 7)))),
    ((MR_Box) ((MR_Integer) 1))
  },
  /* row 1 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 8)))),
    ((MR_Box) ((MR_Integer) 1))
  },
  /* row 2 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 3)))),
    ((MR_Box) ((MR_Integer) 1))
  },
  /* row 3 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 1)))),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row 4 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))),
    ((MR_Box) ((MR_Integer) 0))
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



#line 512 "parse_tree.status.c"
static const MR_EnumFunctorDesc parse_tree__status__parse_tree__status__enum_functor_desc_import_locn_0_0 = {
  (MR_String) "import_locn_implementation",
  (MR_Integer) 0
};

#line 518 "parse_tree.status.c"
static const MR_EnumFunctorDesc parse_tree__status__parse_tree__status__enum_functor_desc_import_locn_0_1 = {
  (MR_String) "import_locn_interface",
  (MR_Integer) 1
};

#line 524 "parse_tree.status.c"
static const MR_EnumFunctorDesc parse_tree__status__parse_tree__status__enum_functor_desc_import_locn_0_2 = {
  (MR_String) "import_locn_ancestor",
  (MR_Integer) 2
};

#line 530 "parse_tree.status.c"
static const MR_EnumFunctorDesc parse_tree__status__parse_tree__status__enum_functor_desc_import_locn_0_3 = {
  (MR_String) "import_locn_ancestor_private_interface_proper",
  (MR_Integer) 3
};

#line 536 "parse_tree.status.c"
static const MR_EnumFunctorDescPtr parse_tree__status__parse_tree__status__enum_value_ordered_import_locn_0[4] = {
  &parse_tree__status__parse_tree__status__enum_functor_desc_import_locn_0_0,
  &parse_tree__status__parse_tree__status__enum_functor_desc_import_locn_0_1,
  &parse_tree__status__parse_tree__status__enum_functor_desc_import_locn_0_2,
  &parse_tree__status__parse_tree__status__enum_functor_desc_import_locn_0_3
};

#line 544 "parse_tree.status.c"
static const MR_EnumFunctorDescPtr parse_tree__status__parse_tree__status__enum_name_ordered_import_locn_0[4] = {
  &parse_tree__status__parse_tree__status__enum_functor_desc_import_locn_0_2,
  &parse_tree__status__parse_tree__status__enum_functor_desc_import_locn_0_3,
  &parse_tree__status__parse_tree__status__enum_functor_desc_import_locn_0_0,
  &parse_tree__status__parse_tree__status__enum_functor_desc_import_locn_0_1
};

#line 552 "parse_tree.status.c"
static const MR_Integer parse_tree__status__parse_tree__status__functor_number_map_import_locn_0[4] = {
  (MR_Integer) 2,
  (MR_Integer) 3,
  (MR_Integer) 0,
  (MR_Integer) 1
};

#line 560 "parse_tree.status.c"
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

#line 577 "parse_tree.status.c"
static const MR_PseudoTypeInfo parse_tree__status__parse_tree__status__field_types_import_status_0_0[1] = {
  (MR_PseudoTypeInfo) &parse_tree__status__parse_tree__status__type_ctor_info_import_status_0
};

#line 582 "parse_tree.status.c"
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

#line 597 "parse_tree.status.c"
static const MR_PseudoTypeInfo parse_tree__status__parse_tree__status__field_types_import_status_0_1[1] = {
  (MR_PseudoTypeInfo) &parse_tree__status__parse_tree__status__type_ctor_info_import_locn_0
};

#line 602 "parse_tree.status.c"
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

#line 617 "parse_tree.status.c"
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

#line 632 "parse_tree.status.c"
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

#line 647 "parse_tree.status.c"
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

#line 662 "parse_tree.status.c"
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

#line 677 "parse_tree.status.c"
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

#line 692 "parse_tree.status.c"
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

#line 707 "parse_tree.status.c"
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

#line 722 "parse_tree.status.c"
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

#line 737 "parse_tree.status.c"
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

#line 752 "parse_tree.status.c"
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

#line 765 "parse_tree.status.c"
static const MR_DuFunctorDescPtr parse_tree__status__parse_tree__status__du_stag_ordered_import_status_0_1[1] = {
  &parse_tree__status__parse_tree__status__du_functor_desc_import_status_0_0
};

#line 770 "parse_tree.status.c"
static const MR_DuFunctorDescPtr parse_tree__status__parse_tree__status__du_stag_ordered_import_status_0_2[1] = {
  &parse_tree__status__parse_tree__status__du_functor_desc_import_status_0_1
};

#line 775 "parse_tree.status.c"
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

#line 794 "parse_tree.status.c"
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

#line 809 "parse_tree.status.c"
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

#line 824 "parse_tree.status.c"
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

#line 841 "parse_tree.status.c"
static const MR_PseudoTypeInfo parse_tree__status__parse_tree__status__field_types_int_for_opt_module_section_0_0[2] = {
  (MR_PseudoTypeInfo) &mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0,
  (MR_PseudoTypeInfo) &parse_tree__file_kind__parse_tree__file_kind__type_ctor_info_int_file_kind_0
};

#line 847 "parse_tree.status.c"
static const MR_DuFunctorDesc parse_tree__status__parse_tree__status__du_functor_desc_int_for_opt_module_section_0_0 = {
  (MR_String) "ioms_opt_imported",
  (MR_Integer) 2,
  (MR_Integer) 0,
  mercury__private_builtin__MR_SECTAG_NONE,
  (MR_Integer) 0,
  (MR_Integer) -1,
  (MR_Integer) 0,
  parse_tree__status__parse_tree__status__field_types_int_for_opt_module_section_0_0,
  NULL,
  NULL,
  NULL
};

#line 862 "parse_tree.status.c"
static const MR_DuFunctorDescPtr parse_tree__status__parse_tree__status__du_stag_ordered_int_for_opt_module_section_0_0[1] = {
  &parse_tree__status__parse_tree__status__du_functor_desc_int_for_opt_module_section_0_0
};

#line 867 "parse_tree.status.c"
static const MR_DuPtagLayout parse_tree__status__parse_tree__status__du_ptag_ordered_int_for_opt_module_section_0[1] = {
  {
    (MR_Integer) 1,
    mercury__private_builtin__MR_SECTAG_NONE,
    parse_tree__status__parse_tree__status__du_stag_ordered_int_for_opt_module_section_0_0
  }
};

#line 876 "parse_tree.status.c"
static const MR_DuFunctorDescPtr parse_tree__status__parse_tree__status__du_name_ordered_int_for_opt_module_section_0[1] = {
  &parse_tree__status__parse_tree__status__du_functor_desc_int_for_opt_module_section_0_0
};

#line 881 "parse_tree.status.c"
static const MR_Integer parse_tree__status__parse_tree__status__functor_number_map_int_for_opt_module_section_0[1] = {
  (MR_Integer) 0
};

#line 886 "parse_tree.status.c"
const MR_TypeCtorInfo_Struct parse_tree__status__parse_tree__status__type_ctor_info_int_for_opt_module_section_0 = {
  (MR_Integer) 0,
  (MR_Integer) 15,
  (MR_Integer) 1,
  mercury__private_builtin__MR_TYPECTOR_REP_DU,
  ((MR_Box) (parse_tree__status____Unify____int_for_opt_module_section_0_0_10001)),
  ((MR_Box) (parse_tree__status____Compare____int_for_opt_module_section_0_0_10001)),
  (MR_String) "parse_tree.status",
  (MR_String) "int_for_opt_module_section",
  {     parse_tree__status__parse_tree__status__du_name_ordered_int_for_opt_module_section_0 },
  {     parse_tree__status__parse_tree__status__du_ptag_ordered_int_for_opt_module_section_0 },
  (MR_Integer) 1,
  (MR_Integer) 4,
  parse_tree__status__parse_tree__status__functor_number_map_int_for_opt_module_section_0
};

#line 903 "parse_tree.status.c"
static const MR_PseudoTypeInfo parse_tree__status__parse_tree__status__field_types_int_module_section_0_0[3] = {
  (MR_PseudoTypeInfo) &mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0,
  (MR_PseudoTypeInfo) &parse_tree__file_kind__parse_tree__file_kind__type_ctor_info_int_file_kind_0,
  (MR_PseudoTypeInfo) &parse_tree__status__parse_tree__status__type_ctor_info_import_locn_0
};

#line 910 "parse_tree.status.c"
static const MR_DuArgLocn parse_tree__status__parse_tree__status__field_locns_int_module_section_0_0[3] = {
  {
    (MR_Integer) 0,
    (MR_Integer) 0,
    (MR_Integer) 0
  },
  {
    (MR_Integer) 1,
    (MR_Integer) 0,
    (MR_Integer) 2
  },
  {
    (MR_Integer) 1,
    (MR_Integer) 2,
    (MR_Integer) 2
  }
};

#line 929 "parse_tree.status.c"
static const MR_DuFunctorDesc parse_tree__status__parse_tree__status__du_functor_desc_int_module_section_0_0 = {
  (MR_String) "ims_imported",
  (MR_Integer) 3,
  (MR_Integer) 0,
  mercury__private_builtin__MR_SECTAG_NONE,
  (MR_Integer) 0,
  (MR_Integer) -1,
  (MR_Integer) 0,
  parse_tree__status__parse_tree__status__field_types_int_module_section_0_0,
  NULL,
  parse_tree__status__parse_tree__status__field_locns_int_module_section_0_0,
  NULL
};

#line 944 "parse_tree.status.c"
static const MR_PseudoTypeInfo parse_tree__status__parse_tree__status__field_types_int_module_section_0_1[3] = {
  (MR_PseudoTypeInfo) &mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0,
  (MR_PseudoTypeInfo) &parse_tree__file_kind__parse_tree__file_kind__type_ctor_info_int_file_kind_0,
  (MR_PseudoTypeInfo) &parse_tree__status__parse_tree__status__type_ctor_info_import_locn_0
};

#line 951 "parse_tree.status.c"
static const MR_DuArgLocn parse_tree__status__parse_tree__status__field_locns_int_module_section_0_1[3] = {
  {
    (MR_Integer) 0,
    (MR_Integer) 0,
    (MR_Integer) 0
  },
  {
    (MR_Integer) 1,
    (MR_Integer) 0,
    (MR_Integer) 2
  },
  {
    (MR_Integer) 1,
    (MR_Integer) 2,
    (MR_Integer) 2
  }
};

#line 970 "parse_tree.status.c"
static const MR_DuFunctorDesc parse_tree__status__parse_tree__status__du_functor_desc_int_module_section_0_1 = {
  (MR_String) "ims_used",
  (MR_Integer) 3,
  (MR_Integer) 0,
  mercury__private_builtin__MR_SECTAG_NONE,
  (MR_Integer) 1,
  (MR_Integer) -1,
  (MR_Integer) 1,
  parse_tree__status__parse_tree__status__field_types_int_module_section_0_1,
  NULL,
  parse_tree__status__parse_tree__status__field_locns_int_module_section_0_1,
  NULL
};

#line 985 "parse_tree.status.c"
static const MR_PseudoTypeInfo parse_tree__status__parse_tree__status__field_types_int_module_section_0_2[2] = {
  (MR_PseudoTypeInfo) &mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0,
  (MR_PseudoTypeInfo) &parse_tree__file_kind__parse_tree__file_kind__type_ctor_info_int_file_kind_0
};

#line 991 "parse_tree.status.c"
static const MR_DuFunctorDesc parse_tree__status__parse_tree__status__du_functor_desc_int_module_section_0_2 = {
  (MR_String) "ims_abstract_imported",
  (MR_Integer) 2,
  (MR_Integer) 0,
  mercury__private_builtin__MR_SECTAG_NONE,
  (MR_Integer) 2,
  (MR_Integer) -1,
  (MR_Integer) 2,
  parse_tree__status__parse_tree__status__field_types_int_module_section_0_2,
  NULL,
  NULL,
  NULL
};

#line 1006 "parse_tree.status.c"
static const MR_DuFunctorDescPtr parse_tree__status__parse_tree__status__du_stag_ordered_int_module_section_0_0[1] = {
  &parse_tree__status__parse_tree__status__du_functor_desc_int_module_section_0_0
};

#line 1011 "parse_tree.status.c"
static const MR_DuFunctorDescPtr parse_tree__status__parse_tree__status__du_stag_ordered_int_module_section_0_1[1] = {
  &parse_tree__status__parse_tree__status__du_functor_desc_int_module_section_0_1
};

#line 1016 "parse_tree.status.c"
static const MR_DuFunctorDescPtr parse_tree__status__parse_tree__status__du_stag_ordered_int_module_section_0_2[1] = {
  &parse_tree__status__parse_tree__status__du_functor_desc_int_module_section_0_2
};

#line 1021 "parse_tree.status.c"
static const MR_DuPtagLayout parse_tree__status__parse_tree__status__du_ptag_ordered_int_module_section_0[3] = {
  {
    (MR_Integer) 1,
    mercury__private_builtin__MR_SECTAG_NONE,
    parse_tree__status__parse_tree__status__du_stag_ordered_int_module_section_0_0
  },
  {
    (MR_Integer) 1,
    mercury__private_builtin__MR_SECTAG_NONE,
    parse_tree__status__parse_tree__status__du_stag_ordered_int_module_section_0_1
  },
  {
    (MR_Integer) 1,
    mercury__private_builtin__MR_SECTAG_NONE,
    parse_tree__status__parse_tree__status__du_stag_ordered_int_module_section_0_2
  }
};

#line 1040 "parse_tree.status.c"
static const MR_DuFunctorDescPtr parse_tree__status__parse_tree__status__du_name_ordered_int_module_section_0[3] = {
  &parse_tree__status__parse_tree__status__du_functor_desc_int_module_section_0_2,
  &parse_tree__status__parse_tree__status__du_functor_desc_int_module_section_0_0,
  &parse_tree__status__parse_tree__status__du_functor_desc_int_module_section_0_1
};

#line 1047 "parse_tree.status.c"
static const MR_Integer parse_tree__status__parse_tree__status__functor_number_map_int_module_section_0[3] = {
  (MR_Integer) 1,
  (MR_Integer) 2,
  (MR_Integer) 0
};

#line 1054 "parse_tree.status.c"
const MR_TypeCtorInfo_Struct parse_tree__status__parse_tree__status__type_ctor_info_int_module_section_0 = {
  (MR_Integer) 0,
  (MR_Integer) 15,
  (MR_Integer) 3,
  mercury__private_builtin__MR_TYPECTOR_REP_DU,
  ((MR_Box) (parse_tree__status____Unify____int_module_section_0_0_10001)),
  ((MR_Box) (parse_tree__status____Compare____int_module_section_0_0_10001)),
  (MR_String) "parse_tree.status",
  (MR_String) "int_module_section",
  {     parse_tree__status__parse_tree__status__du_name_ordered_int_module_section_0 },
  {     parse_tree__status__parse_tree__status__du_ptag_ordered_int_module_section_0 },
  (MR_Integer) 3,
  (MR_Integer) 4,
  parse_tree__status__parse_tree__status__functor_number_map_int_module_section_0
};

#line 1071 "parse_tree.status.c"
static const MR_PseudoTypeInfo parse_tree__status__parse_tree__status__field_types_item_status_0_0[2] = {
  (MR_PseudoTypeInfo) &parse_tree__status__parse_tree__status__type_ctor_info_import_status_0,
  (MR_PseudoTypeInfo) &parse_tree__status__parse_tree__status__type_ctor_info_need_qualifier_0
};

#line 1077 "parse_tree.status.c"
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

#line 1092 "parse_tree.status.c"
static const MR_DuFunctorDescPtr parse_tree__status__parse_tree__status__du_stag_ordered_item_status_0_0[1] = {
  &parse_tree__status__parse_tree__status__du_functor_desc_item_status_0_0
};

#line 1097 "parse_tree.status.c"
static const MR_DuPtagLayout parse_tree__status__parse_tree__status__du_ptag_ordered_item_status_0[1] = {
  {
    (MR_Integer) 1,
    mercury__private_builtin__MR_SECTAG_NONE,
    parse_tree__status__parse_tree__status__du_stag_ordered_item_status_0_0
  }
};

#line 1106 "parse_tree.status.c"
static const MR_DuFunctorDescPtr parse_tree__status__parse_tree__status__du_name_ordered_item_status_0[1] = {
  &parse_tree__status__parse_tree__status__du_functor_desc_item_status_0_0
};

#line 1111 "parse_tree.status.c"
static const MR_Integer parse_tree__status__parse_tree__status__functor_number_map_item_status_0[1] = {
  (MR_Integer) 0
};

#line 1116 "parse_tree.status.c"
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

#line 1133 "parse_tree.status.c"
static const MR_EnumFunctorDesc parse_tree__status__parse_tree__status__enum_functor_desc_module_section_0_0 = {
  (MR_String) "ms_interface",
  (MR_Integer) 0
};

#line 1139 "parse_tree.status.c"
static const MR_EnumFunctorDesc parse_tree__status__parse_tree__status__enum_functor_desc_module_section_0_1 = {
  (MR_String) "ms_implementation",
  (MR_Integer) 1
};

#line 1145 "parse_tree.status.c"
static const MR_EnumFunctorDescPtr parse_tree__status__parse_tree__status__enum_value_ordered_module_section_0[2] = {
  &parse_tree__status__parse_tree__status__enum_functor_desc_module_section_0_0,
  &parse_tree__status__parse_tree__status__enum_functor_desc_module_section_0_1
};

#line 1151 "parse_tree.status.c"
static const MR_EnumFunctorDescPtr parse_tree__status__parse_tree__status__enum_name_ordered_module_section_0[2] = {
  &parse_tree__status__parse_tree__status__enum_functor_desc_module_section_0_1,
  &parse_tree__status__parse_tree__status__enum_functor_desc_module_section_0_0
};

#line 1157 "parse_tree.status.c"
static const MR_Integer parse_tree__status__parse_tree__status__functor_number_map_module_section_0[2] = {
  (MR_Integer) 1,
  (MR_Integer) 0
};

#line 1163 "parse_tree.status.c"
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

#line 1180 "parse_tree.status.c"
static const MR_EnumFunctorDesc parse_tree__status__parse_tree__status__enum_functor_desc_need_qualifier_0_0 = {
  (MR_String) "must_be_qualified",
  (MR_Integer) 0
};

#line 1186 "parse_tree.status.c"
static const MR_EnumFunctorDesc parse_tree__status__parse_tree__status__enum_functor_desc_need_qualifier_0_1 = {
  (MR_String) "may_be_unqualified",
  (MR_Integer) 1
};

#line 1192 "parse_tree.status.c"
static const MR_EnumFunctorDescPtr parse_tree__status__parse_tree__status__enum_value_ordered_need_qualifier_0[2] = {
  &parse_tree__status__parse_tree__status__enum_functor_desc_need_qualifier_0_0,
  &parse_tree__status__parse_tree__status__enum_functor_desc_need_qualifier_0_1
};

#line 1198 "parse_tree.status.c"
static const MR_EnumFunctorDescPtr parse_tree__status__parse_tree__status__enum_name_ordered_need_qualifier_0[2] = {
  &parse_tree__status__parse_tree__status__enum_functor_desc_need_qualifier_0_1,
  &parse_tree__status__parse_tree__status__enum_functor_desc_need_qualifier_0_0
};

#line 1204 "parse_tree.status.c"
static const MR_Integer parse_tree__status__parse_tree__status__functor_number_map_need_qualifier_0[2] = {
  (MR_Integer) 1,
  (MR_Integer) 0
};

#line 1210 "parse_tree.status.c"
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

#line 1227 "parse_tree.status.c"
static const MR_PseudoTypeInfo parse_tree__status__parse_tree__status__field_types_opt_module_section_0_0[2] = {
  (MR_PseudoTypeInfo) &mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0,
  (MR_PseudoTypeInfo) &parse_tree__file_kind__parse_tree__file_kind__type_ctor_info_opt_file_kind_0
};

#line 1233 "parse_tree.status.c"
static const MR_DuFunctorDesc parse_tree__status__parse_tree__status__du_functor_desc_opt_module_section_0_0 = {
  (MR_String) "oms_opt_imported",
  (MR_Integer) 2,
  (MR_Integer) 0,
  mercury__private_builtin__MR_SECTAG_NONE,
  (MR_Integer) 0,
  (MR_Integer) -1,
  (MR_Integer) 0,
  parse_tree__status__parse_tree__status__field_types_opt_module_section_0_0,
  NULL,
  NULL,
  NULL
};

#line 1248 "parse_tree.status.c"
static const MR_DuFunctorDescPtr parse_tree__status__parse_tree__status__du_stag_ordered_opt_module_section_0_0[1] = {
  &parse_tree__status__parse_tree__status__du_functor_desc_opt_module_section_0_0
};

#line 1253 "parse_tree.status.c"
static const MR_DuPtagLayout parse_tree__status__parse_tree__status__du_ptag_ordered_opt_module_section_0[1] = {
  {
    (MR_Integer) 1,
    mercury__private_builtin__MR_SECTAG_NONE,
    parse_tree__status__parse_tree__status__du_stag_ordered_opt_module_section_0_0
  }
};

#line 1262 "parse_tree.status.c"
static const MR_DuFunctorDescPtr parse_tree__status__parse_tree__status__du_name_ordered_opt_module_section_0[1] = {
  &parse_tree__status__parse_tree__status__du_functor_desc_opt_module_section_0_0
};

#line 1267 "parse_tree.status.c"
static const MR_Integer parse_tree__status__parse_tree__status__functor_number_map_opt_module_section_0[1] = {
  (MR_Integer) 0
};

#line 1272 "parse_tree.status.c"
const MR_TypeCtorInfo_Struct parse_tree__status__parse_tree__status__type_ctor_info_opt_module_section_0 = {
  (MR_Integer) 0,
  (MR_Integer) 15,
  (MR_Integer) 1,
  mercury__private_builtin__MR_TYPECTOR_REP_DU,
  ((MR_Box) (parse_tree__status____Unify____opt_module_section_0_0_10001)),
  ((MR_Box) (parse_tree__status____Compare____opt_module_section_0_0_10001)),
  (MR_String) "parse_tree.status",
  (MR_String) "opt_module_section",
  {     parse_tree__status__parse_tree__status__du_name_ordered_opt_module_section_0 },
  {     parse_tree__status__parse_tree__status__du_ptag_ordered_opt_module_section_0 },
  (MR_Integer) 1,
  (MR_Integer) 4,
  parse_tree__status__parse_tree__status__functor_number_map_opt_module_section_0
};

#line 1289 "parse_tree.status.c"
static const MR_EnumFunctorDesc parse_tree__status__parse_tree__status__enum_functor_desc_src_module_section_0_0 = {
  (MR_String) "sms_interface",
  (MR_Integer) 0
};

#line 1295 "parse_tree.status.c"
static const MR_EnumFunctorDesc parse_tree__status__parse_tree__status__enum_functor_desc_src_module_section_0_1 = {
  (MR_String) "sms_implementation",
  (MR_Integer) 1
};

#line 1301 "parse_tree.status.c"
static const MR_EnumFunctorDesc parse_tree__status__parse_tree__status__enum_functor_desc_src_module_section_0_2 = {
  (MR_String) "sms_impl_but_exported_to_submodules",
  (MR_Integer) 2
};

#line 1307 "parse_tree.status.c"
static const MR_EnumFunctorDescPtr parse_tree__status__parse_tree__status__enum_value_ordered_src_module_section_0[3] = {
  &parse_tree__status__parse_tree__status__enum_functor_desc_src_module_section_0_0,
  &parse_tree__status__parse_tree__status__enum_functor_desc_src_module_section_0_1,
  &parse_tree__status__parse_tree__status__enum_functor_desc_src_module_section_0_2
};

#line 1314 "parse_tree.status.c"
static const MR_EnumFunctorDescPtr parse_tree__status__parse_tree__status__enum_name_ordered_src_module_section_0[3] = {
  &parse_tree__status__parse_tree__status__enum_functor_desc_src_module_section_0_2,
  &parse_tree__status__parse_tree__status__enum_functor_desc_src_module_section_0_1,
  &parse_tree__status__parse_tree__status__enum_functor_desc_src_module_section_0_0
};

#line 1321 "parse_tree.status.c"
static const MR_Integer parse_tree__status__parse_tree__status__functor_number_map_src_module_section_0[3] = {
  (MR_Integer) 2,
  (MR_Integer) 1,
  (MR_Integer) 0
};

#line 1328 "parse_tree.status.c"
const MR_TypeCtorInfo_Struct parse_tree__status__parse_tree__status__type_ctor_info_src_module_section_0 = {
  (MR_Integer) 0,
  (MR_Integer) 15,
  (MR_Integer) -1,
  mercury__private_builtin__MR_TYPECTOR_REP_ENUM,
  ((MR_Box) (parse_tree__status____Unify____src_module_section_0_0_10001)),
  ((MR_Box) (parse_tree__status____Compare____src_module_section_0_0_10001)),
  (MR_String) "parse_tree.status",
  (MR_String) "src_module_section",
  {     parse_tree__status__parse_tree__status__enum_name_ordered_src_module_section_0 },
  {     parse_tree__status__parse_tree__status__enum_value_ordered_src_module_section_0 },
  (MR_Integer) 3,
  (MR_Integer) 4,
  parse_tree__status__parse_tree__status__functor_number_map_src_module_section_0
};

#line 1345 "parse_tree.status.c"
static MR_bool MR_CALL 
parse_tree__status____Unify____import_locn_0_0_10001(
#line 1348 "parse_tree.status.c"
  MR_Box parse_tree__status__wrapper_arg_1,
#line 1350 "parse_tree.status.c"
  MR_Box parse_tree__status__wrapper_arg_2)
#line 1352 "parse_tree.status.c"
{
#line 1354 "parse_tree.status.c"
  {
#line 1356 "parse_tree.status.c"
    MR_bool parse_tree__status__succeeded;

#line 1359 "parse_tree.status.c"
    {
#line 1361 "parse_tree.status.c"
      parse_tree__status__succeeded = parse_tree__status____Unify____import_locn_0_0(((MR_Word) parse_tree__status__wrapper_arg_1), ((MR_Word) parse_tree__status__wrapper_arg_2));
    }
#line 1364 "parse_tree.status.c"
    return parse_tree__status__succeeded;
#line 1366 "parse_tree.status.c"
  }
#line 1368 "parse_tree.status.c"
}

#line 1371 "parse_tree.status.c"
static void MR_CALL 
parse_tree__status____Compare____import_locn_0_0_10001(
#line 1374 "parse_tree.status.c"
  MR_Box * parse_tree__status__wrapper_arg_1,
#line 1376 "parse_tree.status.c"
  MR_Box parse_tree__status__wrapper_arg_2,
#line 1378 "parse_tree.status.c"
  MR_Box parse_tree__status__wrapper_arg_3)
#line 1380 "parse_tree.status.c"
{
#line 1382 "parse_tree.status.c"
  {
#line 1384 "parse_tree.status.c"
    MR_Word parse_tree__status__conv0_HeadVar__1_1;

#line 1387 "parse_tree.status.c"
    {
#line 1389 "parse_tree.status.c"
      parse_tree__status____Compare____import_locn_0_0(&parse_tree__status__conv0_HeadVar__1_1, ((MR_Word) parse_tree__status__wrapper_arg_2), ((MR_Word) parse_tree__status__wrapper_arg_3));
    }
#line 1392 "parse_tree.status.c"
    *parse_tree__status__wrapper_arg_1 = ((MR_Box) (parse_tree__status__conv0_HeadVar__1_1));
#line 1394 "parse_tree.status.c"
  }
#line 1396 "parse_tree.status.c"
}

#line 1399 "parse_tree.status.c"
static MR_bool MR_CALL 
parse_tree__status____Unify____import_status_0_0_10001(
#line 1402 "parse_tree.status.c"
  MR_Box parse_tree__status__wrapper_arg_1,
#line 1404 "parse_tree.status.c"
  MR_Box parse_tree__status__wrapper_arg_2)
#line 1406 "parse_tree.status.c"
{
#line 1408 "parse_tree.status.c"
  {
#line 1410 "parse_tree.status.c"
    MR_bool parse_tree__status__succeeded;

#line 1413 "parse_tree.status.c"
    {
#line 1415 "parse_tree.status.c"
      parse_tree__status__succeeded = parse_tree__status____Unify____import_status_0_0(((MR_Word) parse_tree__status__wrapper_arg_1), ((MR_Word) parse_tree__status__wrapper_arg_2));
    }
#line 1418 "parse_tree.status.c"
    return parse_tree__status__succeeded;
#line 1420 "parse_tree.status.c"
  }
#line 1422 "parse_tree.status.c"
}

#line 1425 "parse_tree.status.c"
static void MR_CALL 
parse_tree__status____Compare____import_status_0_0_10001(
#line 1428 "parse_tree.status.c"
  MR_Box * parse_tree__status__wrapper_arg_1,
#line 1430 "parse_tree.status.c"
  MR_Box parse_tree__status__wrapper_arg_2,
#line 1432 "parse_tree.status.c"
  MR_Box parse_tree__status__wrapper_arg_3)
#line 1434 "parse_tree.status.c"
{
#line 1436 "parse_tree.status.c"
  {
#line 1438 "parse_tree.status.c"
    MR_Word parse_tree__status__conv0_HeadVar__1_1;

#line 1441 "parse_tree.status.c"
    {
#line 1443 "parse_tree.status.c"
      parse_tree__status____Compare____import_status_0_0(&parse_tree__status__conv0_HeadVar__1_1, ((MR_Word) parse_tree__status__wrapper_arg_2), ((MR_Word) parse_tree__status__wrapper_arg_3));
    }
#line 1446 "parse_tree.status.c"
    *parse_tree__status__wrapper_arg_1 = ((MR_Box) (parse_tree__status__conv0_HeadVar__1_1));
#line 1448 "parse_tree.status.c"
  }
#line 1450 "parse_tree.status.c"
}

#line 1453 "parse_tree.status.c"
static MR_bool MR_CALL 
parse_tree__status____Unify____int_for_opt_module_section_0_0_10001(
#line 1456 "parse_tree.status.c"
  MR_Box parse_tree__status__wrapper_arg_1,
#line 1458 "parse_tree.status.c"
  MR_Box parse_tree__status__wrapper_arg_2)
#line 1460 "parse_tree.status.c"
{
#line 1462 "parse_tree.status.c"
  {
#line 1464 "parse_tree.status.c"
    MR_bool parse_tree__status__succeeded;

#line 1467 "parse_tree.status.c"
    {
#line 1469 "parse_tree.status.c"
      parse_tree__status__succeeded = parse_tree__status____Unify____int_for_opt_module_section_0_0(((MR_Word) parse_tree__status__wrapper_arg_1), ((MR_Word) parse_tree__status__wrapper_arg_2));
    }
#line 1472 "parse_tree.status.c"
    return parse_tree__status__succeeded;
#line 1474 "parse_tree.status.c"
  }
#line 1476 "parse_tree.status.c"
}

#line 1479 "parse_tree.status.c"
static void MR_CALL 
parse_tree__status____Compare____int_for_opt_module_section_0_0_10001(
#line 1482 "parse_tree.status.c"
  MR_Box * parse_tree__status__wrapper_arg_1,
#line 1484 "parse_tree.status.c"
  MR_Box parse_tree__status__wrapper_arg_2,
#line 1486 "parse_tree.status.c"
  MR_Box parse_tree__status__wrapper_arg_3)
#line 1488 "parse_tree.status.c"
{
#line 1490 "parse_tree.status.c"
  {
#line 1492 "parse_tree.status.c"
    MR_Word parse_tree__status__conv0_HeadVar__1_1;

#line 1495 "parse_tree.status.c"
    {
#line 1497 "parse_tree.status.c"
      parse_tree__status____Compare____int_for_opt_module_section_0_0(&parse_tree__status__conv0_HeadVar__1_1, ((MR_Word) parse_tree__status__wrapper_arg_2), ((MR_Word) parse_tree__status__wrapper_arg_3));
    }
#line 1500 "parse_tree.status.c"
    *parse_tree__status__wrapper_arg_1 = ((MR_Box) (parse_tree__status__conv0_HeadVar__1_1));
#line 1502 "parse_tree.status.c"
  }
#line 1504 "parse_tree.status.c"
}

#line 1507 "parse_tree.status.c"
static MR_bool MR_CALL 
parse_tree__status____Unify____int_module_section_0_0_10001(
#line 1510 "parse_tree.status.c"
  MR_Box parse_tree__status__wrapper_arg_1,
#line 1512 "parse_tree.status.c"
  MR_Box parse_tree__status__wrapper_arg_2)
#line 1514 "parse_tree.status.c"
{
#line 1516 "parse_tree.status.c"
  {
#line 1518 "parse_tree.status.c"
    MR_bool parse_tree__status__succeeded;

#line 1521 "parse_tree.status.c"
    {
#line 1523 "parse_tree.status.c"
      parse_tree__status__succeeded = parse_tree__status____Unify____int_module_section_0_0(((MR_Word) parse_tree__status__wrapper_arg_1), ((MR_Word) parse_tree__status__wrapper_arg_2));
    }
#line 1526 "parse_tree.status.c"
    return parse_tree__status__succeeded;
#line 1528 "parse_tree.status.c"
  }
#line 1530 "parse_tree.status.c"
}

#line 1533 "parse_tree.status.c"
static void MR_CALL 
parse_tree__status____Compare____int_module_section_0_0_10001(
#line 1536 "parse_tree.status.c"
  MR_Box * parse_tree__status__wrapper_arg_1,
#line 1538 "parse_tree.status.c"
  MR_Box parse_tree__status__wrapper_arg_2,
#line 1540 "parse_tree.status.c"
  MR_Box parse_tree__status__wrapper_arg_3)
#line 1542 "parse_tree.status.c"
{
#line 1544 "parse_tree.status.c"
  {
#line 1546 "parse_tree.status.c"
    MR_Word parse_tree__status__conv0_HeadVar__1_1;

#line 1549 "parse_tree.status.c"
    {
#line 1551 "parse_tree.status.c"
      parse_tree__status____Compare____int_module_section_0_0(&parse_tree__status__conv0_HeadVar__1_1, ((MR_Word) parse_tree__status__wrapper_arg_2), ((MR_Word) parse_tree__status__wrapper_arg_3));
    }
#line 1554 "parse_tree.status.c"
    *parse_tree__status__wrapper_arg_1 = ((MR_Box) (parse_tree__status__conv0_HeadVar__1_1));
#line 1556 "parse_tree.status.c"
  }
#line 1558 "parse_tree.status.c"
}

#line 1561 "parse_tree.status.c"
static MR_bool MR_CALL 
parse_tree__status____Unify____item_status_0_0_10001(
#line 1564 "parse_tree.status.c"
  MR_Box parse_tree__status__wrapper_arg_1,
#line 1566 "parse_tree.status.c"
  MR_Box parse_tree__status__wrapper_arg_2)
#line 1568 "parse_tree.status.c"
{
#line 1570 "parse_tree.status.c"
  {
#line 1572 "parse_tree.status.c"
    MR_bool parse_tree__status__succeeded;

#line 1575 "parse_tree.status.c"
    {
#line 1577 "parse_tree.status.c"
      parse_tree__status__succeeded = parse_tree__status____Unify____item_status_0_0(((MR_Word) parse_tree__status__wrapper_arg_1), ((MR_Word) parse_tree__status__wrapper_arg_2));
    }
#line 1580 "parse_tree.status.c"
    return parse_tree__status__succeeded;
#line 1582 "parse_tree.status.c"
  }
#line 1584 "parse_tree.status.c"
}

#line 1587 "parse_tree.status.c"
static void MR_CALL 
parse_tree__status____Compare____item_status_0_0_10001(
#line 1590 "parse_tree.status.c"
  MR_Box * parse_tree__status__wrapper_arg_1,
#line 1592 "parse_tree.status.c"
  MR_Box parse_tree__status__wrapper_arg_2,
#line 1594 "parse_tree.status.c"
  MR_Box parse_tree__status__wrapper_arg_3)
#line 1596 "parse_tree.status.c"
{
#line 1598 "parse_tree.status.c"
  {
#line 1600 "parse_tree.status.c"
    MR_Word parse_tree__status__conv0_HeadVar__1_1;

#line 1603 "parse_tree.status.c"
    {
#line 1605 "parse_tree.status.c"
      parse_tree__status____Compare____item_status_0_0(&parse_tree__status__conv0_HeadVar__1_1, ((MR_Word) parse_tree__status__wrapper_arg_2), ((MR_Word) parse_tree__status__wrapper_arg_3));
    }
#line 1608 "parse_tree.status.c"
    *parse_tree__status__wrapper_arg_1 = ((MR_Box) (parse_tree__status__conv0_HeadVar__1_1));
#line 1610 "parse_tree.status.c"
  }
#line 1612 "parse_tree.status.c"
}

#line 1615 "parse_tree.status.c"
static MR_bool MR_CALL 
parse_tree__status____Unify____module_section_0_0_10001(
#line 1618 "parse_tree.status.c"
  MR_Box parse_tree__status__wrapper_arg_1,
#line 1620 "parse_tree.status.c"
  MR_Box parse_tree__status__wrapper_arg_2)
#line 1622 "parse_tree.status.c"
{
#line 1624 "parse_tree.status.c"
  {
#line 1626 "parse_tree.status.c"
    MR_bool parse_tree__status__succeeded;

#line 1629 "parse_tree.status.c"
    {
#line 1631 "parse_tree.status.c"
      parse_tree__status__succeeded = parse_tree__status____Unify____module_section_0_0(((MR_Word) parse_tree__status__wrapper_arg_1), ((MR_Word) parse_tree__status__wrapper_arg_2));
    }
#line 1634 "parse_tree.status.c"
    return parse_tree__status__succeeded;
#line 1636 "parse_tree.status.c"
  }
#line 1638 "parse_tree.status.c"
}

#line 1641 "parse_tree.status.c"
static void MR_CALL 
parse_tree__status____Compare____module_section_0_0_10001(
#line 1644 "parse_tree.status.c"
  MR_Box * parse_tree__status__wrapper_arg_1,
#line 1646 "parse_tree.status.c"
  MR_Box parse_tree__status__wrapper_arg_2,
#line 1648 "parse_tree.status.c"
  MR_Box parse_tree__status__wrapper_arg_3)
#line 1650 "parse_tree.status.c"
{
#line 1652 "parse_tree.status.c"
  {
#line 1654 "parse_tree.status.c"
    MR_Word parse_tree__status__conv0_HeadVar__1_1;

#line 1657 "parse_tree.status.c"
    {
#line 1659 "parse_tree.status.c"
      parse_tree__status____Compare____module_section_0_0(&parse_tree__status__conv0_HeadVar__1_1, ((MR_Word) parse_tree__status__wrapper_arg_2), ((MR_Word) parse_tree__status__wrapper_arg_3));
    }
#line 1662 "parse_tree.status.c"
    *parse_tree__status__wrapper_arg_1 = ((MR_Box) (parse_tree__status__conv0_HeadVar__1_1));
#line 1664 "parse_tree.status.c"
  }
#line 1666 "parse_tree.status.c"
}

#line 1669 "parse_tree.status.c"
static MR_bool MR_CALL 
parse_tree__status____Unify____need_qualifier_0_0_10001(
#line 1672 "parse_tree.status.c"
  MR_Box parse_tree__status__wrapper_arg_1,
#line 1674 "parse_tree.status.c"
  MR_Box parse_tree__status__wrapper_arg_2)
#line 1676 "parse_tree.status.c"
{
#line 1678 "parse_tree.status.c"
  {
#line 1680 "parse_tree.status.c"
    MR_bool parse_tree__status__succeeded;

#line 1683 "parse_tree.status.c"
    {
#line 1685 "parse_tree.status.c"
      parse_tree__status__succeeded = parse_tree__status____Unify____need_qualifier_0_0(((MR_Word) parse_tree__status__wrapper_arg_1), ((MR_Word) parse_tree__status__wrapper_arg_2));
    }
#line 1688 "parse_tree.status.c"
    return parse_tree__status__succeeded;
#line 1690 "parse_tree.status.c"
  }
#line 1692 "parse_tree.status.c"
}

#line 1695 "parse_tree.status.c"
static void MR_CALL 
parse_tree__status____Compare____need_qualifier_0_0_10001(
#line 1698 "parse_tree.status.c"
  MR_Box * parse_tree__status__wrapper_arg_1,
#line 1700 "parse_tree.status.c"
  MR_Box parse_tree__status__wrapper_arg_2,
#line 1702 "parse_tree.status.c"
  MR_Box parse_tree__status__wrapper_arg_3)
#line 1704 "parse_tree.status.c"
{
#line 1706 "parse_tree.status.c"
  {
#line 1708 "parse_tree.status.c"
    MR_Word parse_tree__status__conv0_HeadVar__1_1;

#line 1711 "parse_tree.status.c"
    {
#line 1713 "parse_tree.status.c"
      parse_tree__status____Compare____need_qualifier_0_0(&parse_tree__status__conv0_HeadVar__1_1, ((MR_Word) parse_tree__status__wrapper_arg_2), ((MR_Word) parse_tree__status__wrapper_arg_3));
    }
#line 1716 "parse_tree.status.c"
    *parse_tree__status__wrapper_arg_1 = ((MR_Box) (parse_tree__status__conv0_HeadVar__1_1));
#line 1718 "parse_tree.status.c"
  }
#line 1720 "parse_tree.status.c"
}

#line 1723 "parse_tree.status.c"
static MR_bool MR_CALL 
parse_tree__status____Unify____opt_module_section_0_0_10001(
#line 1726 "parse_tree.status.c"
  MR_Box parse_tree__status__wrapper_arg_1,
#line 1728 "parse_tree.status.c"
  MR_Box parse_tree__status__wrapper_arg_2)
#line 1730 "parse_tree.status.c"
{
#line 1732 "parse_tree.status.c"
  {
#line 1734 "parse_tree.status.c"
    MR_bool parse_tree__status__succeeded;

#line 1737 "parse_tree.status.c"
    {
#line 1739 "parse_tree.status.c"
      parse_tree__status__succeeded = parse_tree__status____Unify____opt_module_section_0_0(((MR_Word) parse_tree__status__wrapper_arg_1), ((MR_Word) parse_tree__status__wrapper_arg_2));
    }
#line 1742 "parse_tree.status.c"
    return parse_tree__status__succeeded;
#line 1744 "parse_tree.status.c"
  }
#line 1746 "parse_tree.status.c"
}

#line 1749 "parse_tree.status.c"
static void MR_CALL 
parse_tree__status____Compare____opt_module_section_0_0_10001(
#line 1752 "parse_tree.status.c"
  MR_Box * parse_tree__status__wrapper_arg_1,
#line 1754 "parse_tree.status.c"
  MR_Box parse_tree__status__wrapper_arg_2,
#line 1756 "parse_tree.status.c"
  MR_Box parse_tree__status__wrapper_arg_3)
#line 1758 "parse_tree.status.c"
{
#line 1760 "parse_tree.status.c"
  {
#line 1762 "parse_tree.status.c"
    MR_Word parse_tree__status__conv0_HeadVar__1_1;

#line 1765 "parse_tree.status.c"
    {
#line 1767 "parse_tree.status.c"
      parse_tree__status____Compare____opt_module_section_0_0(&parse_tree__status__conv0_HeadVar__1_1, ((MR_Word) parse_tree__status__wrapper_arg_2), ((MR_Word) parse_tree__status__wrapper_arg_3));
    }
#line 1770 "parse_tree.status.c"
    *parse_tree__status__wrapper_arg_1 = ((MR_Box) (parse_tree__status__conv0_HeadVar__1_1));
#line 1772 "parse_tree.status.c"
  }
#line 1774 "parse_tree.status.c"
}

#line 1777 "parse_tree.status.c"
static MR_bool MR_CALL 
parse_tree__status____Unify____src_module_section_0_0_10001(
#line 1780 "parse_tree.status.c"
  MR_Box parse_tree__status__wrapper_arg_1,
#line 1782 "parse_tree.status.c"
  MR_Box parse_tree__status__wrapper_arg_2)
#line 1784 "parse_tree.status.c"
{
#line 1786 "parse_tree.status.c"
  {
#line 1788 "parse_tree.status.c"
    MR_bool parse_tree__status__succeeded;

#line 1791 "parse_tree.status.c"
    {
#line 1793 "parse_tree.status.c"
      parse_tree__status__succeeded = parse_tree__status____Unify____src_module_section_0_0(((MR_Word) parse_tree__status__wrapper_arg_1), ((MR_Word) parse_tree__status__wrapper_arg_2));
    }
#line 1796 "parse_tree.status.c"
    return parse_tree__status__succeeded;
#line 1798 "parse_tree.status.c"
  }
#line 1800 "parse_tree.status.c"
}

#line 1803 "parse_tree.status.c"
static void MR_CALL 
parse_tree__status____Compare____src_module_section_0_0_10001(
#line 1806 "parse_tree.status.c"
  MR_Box * parse_tree__status__wrapper_arg_1,
#line 1808 "parse_tree.status.c"
  MR_Box parse_tree__status__wrapper_arg_2,
#line 1810 "parse_tree.status.c"
  MR_Box parse_tree__status__wrapper_arg_3)
#line 1812 "parse_tree.status.c"
{
#line 1814 "parse_tree.status.c"
  {
#line 1816 "parse_tree.status.c"
    MR_Word parse_tree__status__conv0_HeadVar__1_1;

#line 1819 "parse_tree.status.c"
    {
#line 1821 "parse_tree.status.c"
      parse_tree__status____Compare____src_module_section_0_0(&parse_tree__status__conv0_HeadVar__1_1, ((MR_Word) parse_tree__status__wrapper_arg_2), ((MR_Word) parse_tree__status__wrapper_arg_3));
    }
#line 1824 "parse_tree.status.c"
    *parse_tree__status__wrapper_arg_1 = ((MR_Box) (parse_tree__status__conv0_HeadVar__1_1));
#line 1826 "parse_tree.status.c"
  }
#line 1828 "parse_tree.status.c"
}

#line 234 "status.m"
void MR_CALL 
parse_tree__status__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_105_110_116_95_102_111_114_95_111_112_116_95_109_111_100_117_108_101_95_115_101_99_116_105_111_110_95_115_116_97_116_117_115_95_95_91_49_93_95_48_2_p_0(
#line 234 "status.m"
  MR_Word * parse_tree__status__Status_4)
#line 234 "status.m"
{
#line 349 "status.m"
  {
#line 349 "status.m"
    MR_bool parse_tree__status__succeeded;

#line 352 "status.m"
    *parse_tree__status__Status_4 = (MR_Word) &parse_tree__status_scalar_common_2[4];
#line 349 "status.m"
  }
#line 234 "status.m"
}

#line 232 "status.m"
void MR_CALL 
parse_tree__status__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_111_112_116_95_109_111_100_117_108_101_95_115_101_99_116_105_111_110_95_115_116_97_116_117_115_95_95_91_49_93_95_48_2_p_0(
#line 232 "status.m"
  MR_Word * parse_tree__status__Status_4)
#line 232 "status.m"
{
#line 343 "status.m"
  {
#line 343 "status.m"
    MR_bool parse_tree__status__succeeded;

#line 346 "status.m"
    *parse_tree__status__Status_4 = (MR_Word) &parse_tree__status_scalar_common_2[4];
#line 343 "status.m"
  }
#line 232 "status.m"
}

#line 177 "status.m"
void MR_CALL 
parse_tree__status____Compare____src_module_section_0_0(
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
    MR_Integer parse_tree__status__Cast_HeadVar1_4 = (MR_Integer) parse_tree__status__HeadVar__2_2;
#line 177 "status.m"
    MR_Integer parse_tree__status__Cast_HeadVar2_5 = (MR_Integer) parse_tree__status__HeadVar__3_3;

#line 177 "status.m"
    {
#line 177 "status.m"
      mercury__private_builtin__builtin_compare_int_3_p_0(parse_tree__status__HeadVar__1_1, parse_tree__status__Cast_HeadVar1_4, parse_tree__status__Cast_HeadVar2_5);
#line 177 "status.m"
      return;
    }
#line 177 "status.m"
  }
#line 177 "status.m"
}

#line 177 "status.m"
MR_bool MR_CALL 
parse_tree__status____Unify____src_module_section_0_0(
#line 177 "status.m"
  MR_Word parse_tree__status__HeadVar__2_1,
#line 177 "status.m"
  MR_Word parse_tree__status__HeadVar__2_2)
#line 177 "status.m"
{
#line 1910 "parse_tree.status.c"
  {
#line 1912 "parse_tree.status.c"
    MR_bool parse_tree__status__succeeded = (parse_tree__status__HeadVar__2_1 == parse_tree__status__HeadVar__2_2);

#line 1915 "parse_tree.status.c"
    return parse_tree__status__succeeded;
#line 1917 "parse_tree.status.c"
  }
#line 177 "status.m"
}

#line 201 "status.m"
void MR_CALL 
parse_tree__status____Compare____opt_module_section_0_0(
#line 201 "status.m"
  MR_Word * parse_tree__status__HeadVar__1_1,
#line 201 "status.m"
  MR_Word parse_tree__status__HeadVar__2_2,
#line 201 "status.m"
  MR_Word parse_tree__status__HeadVar__3_3)
#line 201 "status.m"
{
#line 201 "status.m"
  {
#line 201 "status.m"
    MR_bool parse_tree__status__succeeded;
#line 201 "status.m"
    MR_Integer parse_tree__status__CastX_9 = (MR_Integer) parse_tree__status__HeadVar__2_2;
#line 201 "status.m"
    MR_Integer parse_tree__status__CastY_10 = (MR_Integer) parse_tree__status__HeadVar__3_3;

#line 201 "status.m"
    parse_tree__status__succeeded = (parse_tree__status__CastX_9 == parse_tree__status__CastY_10);
#line 201 "status.m"
    if (parse_tree__status__succeeded)
#line 1946 "parse_tree.status.c"
      *parse_tree__status__HeadVar__1_1 = (MR_Integer) 0;
#line 201 "status.m"
    else
#line 201 "status.m"
      {
#line 201 "status.m"
        MR_Word parse_tree__status__V_4_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__status__HeadVar__2_2, (MR_Integer) 0)));
#line 201 "status.m"
        MR_Word parse_tree__status__V_5_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__status__HeadVar__2_2, (MR_Integer) 1)));
#line 201 "status.m"
        MR_Word parse_tree__status__V_6_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__status__HeadVar__3_3, (MR_Integer) 0)));
#line 201 "status.m"
        MR_Word parse_tree__status__V_7_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__status__HeadVar__3_3, (MR_Integer) 1)));
#line 201 "status.m"
        MR_Word parse_tree__status__V_8_8;

#line 201 "status.m"
        {
#line 201 "status.m"
          mdbcomp__sym_name____Compare____sym_name_0_0(&parse_tree__status__V_8_8, parse_tree__status__V_4_4, parse_tree__status__V_6_6);
        }
#line 1968 "parse_tree.status.c"
        parse_tree__status__succeeded = (parse_tree__status__V_8_8 == (MR_Integer) 0);
#line 201 "status.m"
        parse_tree__status__succeeded = !(parse_tree__status__succeeded);
#line 201 "status.m"
        if (parse_tree__status__succeeded)
#line 201 "status.m"
          *parse_tree__status__HeadVar__1_1 = parse_tree__status__V_8_8;
#line 201 "status.m"
        else
#line 201 "status.m"
          {
#line 201 "status.m"
            MR_Integer parse_tree__status__V_13_13 = (MR_Integer) parse_tree__status__V_5_5;
#line 201 "status.m"
            MR_Integer parse_tree__status__V_14_14 = (MR_Integer) parse_tree__status__V_7_7;

#line 201 "status.m"
            {
#line 201 "status.m"
              mercury__private_builtin__builtin_compare_int_3_p_0(parse_tree__status__HeadVar__1_1, parse_tree__status__V_13_13, parse_tree__status__V_14_14);
#line 201 "status.m"
              return;
            }
#line 201 "status.m"
          }
#line 201 "status.m"
      }
#line 201 "status.m"
  }
#line 201 "status.m"
}

#line 201 "status.m"
MR_bool MR_CALL 
parse_tree__status____Unify____opt_module_section_0_0(
#line 201 "status.m"
  MR_Word parse_tree__status__HeadVar__1_1,
#line 201 "status.m"
  MR_Word parse_tree__status__HeadVar__2_2)
#line 201 "status.m"
{
#line 201 "status.m"
  {
#line 201 "status.m"
    MR_bool parse_tree__status__succeeded;
#line 201 "status.m"
    MR_Integer parse_tree__status__CastX_7 = (MR_Integer) parse_tree__status__HeadVar__1_1;
#line 201 "status.m"
    MR_Integer parse_tree__status__CastY_8 = (MR_Integer) parse_tree__status__HeadVar__2_2;

#line 201 "status.m"
    parse_tree__status__succeeded = (parse_tree__status__CastX_7 == parse_tree__status__CastY_8);
#line 201 "status.m"
    if (parse_tree__status__succeeded)
#line 201 "status.m"
      parse_tree__status__succeeded = MR_TRUE;
#line 201 "status.m"
    else
#line 201 "status.m"
      {
#line 201 "status.m"
        MR_Word parse_tree__status__V_3_3 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__status__HeadVar__1_1, (MR_Integer) 0)));
#line 201 "status.m"
        MR_Word parse_tree__status__V_4_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__status__HeadVar__1_1, (MR_Integer) 1)));
#line 201 "status.m"
        MR_Word parse_tree__status__V_5_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__status__HeadVar__2_2, (MR_Integer) 0)));
#line 201 "status.m"
        MR_Word parse_tree__status__V_6_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__status__HeadVar__2_2, (MR_Integer) 1)));

#line 2038 "parse_tree.status.c"
        {
#line 2040 "parse_tree.status.c"
          parse_tree__status__succeeded = mdbcomp__sym_name____Unify____sym_name_0_0(parse_tree__status__V_3_3, parse_tree__status__V_5_5);
        }
#line 201 "status.m"
        if (parse_tree__status__succeeded)
#line 2045 "parse_tree.status.c"
          parse_tree__status__succeeded = (parse_tree__status__V_4_4 == parse_tree__status__V_6_6);
#line 201 "status.m"
      }
#line 201 "status.m"
    return parse_tree__status__succeeded;
#line 201 "status.m"
  }
#line 201 "status.m"
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
#line 2097 "parse_tree.status.c"
  {
#line 2099 "parse_tree.status.c"
    MR_bool parse_tree__status__succeeded = (parse_tree__status__HeadVar__2_1 == parse_tree__status__HeadVar__2_2);

#line 2102 "parse_tree.status.c"
    return parse_tree__status__succeeded;
#line 2104 "parse_tree.status.c"
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
#line 2150 "parse_tree.status.c"
  {
#line 2152 "parse_tree.status.c"
    MR_bool parse_tree__status__succeeded = (parse_tree__status__HeadVar__2_1 == parse_tree__status__HeadVar__2_2);

#line 2155 "parse_tree.status.c"
    return parse_tree__status__succeeded;
#line 2157 "parse_tree.status.c"
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
#line 2186 "parse_tree.status.c"
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
#line 2208 "parse_tree.status.c"
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

#line 2278 "parse_tree.status.c"
        {
#line 2280 "parse_tree.status.c"
          parse_tree__status__succeeded = parse_tree__status____Unify____import_status_0_0(parse_tree__status__V_3_3, parse_tree__status__V_5_5);
        }
#line 168 "status.m"
        if (parse_tree__status__succeeded)
#line 2285 "parse_tree.status.c"
          parse_tree__status__succeeded = (parse_tree__status__V_4_4 == parse_tree__status__V_6_6);
#line 168 "status.m"
      }
#line 168 "status.m"
    return parse_tree__status__succeeded;
#line 168 "status.m"
  }
#line 168 "status.m"
}

#line 186 "status.m"
void MR_CALL 
parse_tree__status____Compare____int_module_section_0_0(
#line 186 "status.m"
  MR_Word * parse_tree__status__HeadVar__1_1,
#line 186 "status.m"
  MR_Word parse_tree__status__HeadVar__2_2,
#line 186 "status.m"
  MR_Word parse_tree__status__HeadVar__3_3)
#line 186 "status.m"
{
#line 186 "status.m"
  {
#line 186 "status.m"
    MR_bool parse_tree__status__succeeded;
#line 186 "status.m"
    MR_Integer parse_tree__status__CastX_57 = (MR_Integer) parse_tree__status__HeadVar__2_2;
#line 186 "status.m"
    MR_Integer parse_tree__status__CastY_58 = (MR_Integer) parse_tree__status__HeadVar__3_3;

#line 186 "status.m"
    parse_tree__status__succeeded = (parse_tree__status__CastX_57 == parse_tree__status__CastY_58);
#line 186 "status.m"
    if (parse_tree__status__succeeded)
#line 2320 "parse_tree.status.c"
      *parse_tree__status__HeadVar__1_1 = (MR_Integer) 0;
#line 186 "status.m"
    else
#line 186 "status.m"
#line 186 "status.m"
      switch (MR_tag((MR_Word) parse_tree__status__HeadVar__2_2)) {
#line 186 "status.m"
        default: /*NOTREACHED*/ MR_assert(0);
#line 186 "status.m"
        case (MR_Integer) 0:
#line 186 "status.m"
          {
#line 186 "status.m"
            MR_Word parse_tree__status__V_69_69 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__status__HeadVar__2_2, (MR_Integer) 1)))) >> (MR_Integer) 2)) & (MR_Integer) 3);
#line 186 "status.m"
            MR_Word parse_tree__status__V_70_70 = ((((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__status__HeadVar__2_2, (MR_Integer) 1)))) & (MR_Integer) 3);
#line 186 "status.m"
            MR_Word parse_tree__status__V_71_71 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__status__HeadVar__2_2, (MR_Integer) 0)));

#line 186 "status.m"
#line 186 "status.m"
            switch (MR_tag((MR_Word) parse_tree__status__HeadVar__3_3)) {
#line 186 "status.m"
              default: /*NOTREACHED*/ MR_assert(0);
#line 186 "status.m"
              case (MR_Integer) 0:
#line 186 "status.m"
                {
#line 186 "status.m"
                  MR_Word parse_tree__status__V_7_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__status__HeadVar__3_3, (MR_Integer) 0)));
#line 186 "status.m"
                  MR_Word parse_tree__status__V_8_8 = ((((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__status__HeadVar__3_3, (MR_Integer) 1)))) & (MR_Integer) 3);
#line 186 "status.m"
                  MR_Word parse_tree__status__V_9_9 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__status__HeadVar__3_3, (MR_Integer) 1)))) >> (MR_Integer) 2)) & (MR_Integer) 3);
#line 186 "status.m"
                  MR_Word parse_tree__status__V_10_10;

#line 186 "status.m"
                  {
#line 186 "status.m"
                    mdbcomp__sym_name____Compare____sym_name_0_0(&parse_tree__status__V_10_10, parse_tree__status__V_71_71, parse_tree__status__V_7_7);
                  }
#line 2363 "parse_tree.status.c"
                  parse_tree__status__succeeded = (parse_tree__status__V_10_10 == (MR_Integer) 0);
#line 186 "status.m"
                  parse_tree__status__succeeded = !(parse_tree__status__succeeded);
#line 186 "status.m"
                  if (parse_tree__status__succeeded)
#line 186 "status.m"
                    *parse_tree__status__HeadVar__1_1 = parse_tree__status__V_10_10;
#line 186 "status.m"
                  else
#line 186 "status.m"
                    {
#line 186 "status.m"
                      MR_Word parse_tree__status__V_11_11;
#line 186 "status.m"
                      MR_Integer parse_tree__status__V_77_77 = (MR_Integer) parse_tree__status__V_70_70;
#line 186 "status.m"
                      MR_Integer parse_tree__status__V_78_78 = (MR_Integer) parse_tree__status__V_8_8;

#line 186 "status.m"
                      {
#line 186 "status.m"
                        mercury__private_builtin__builtin_compare_int_3_p_0(&parse_tree__status__V_11_11, parse_tree__status__V_77_77, parse_tree__status__V_78_78);
                      }
#line 2387 "parse_tree.status.c"
                      parse_tree__status__succeeded = (parse_tree__status__V_11_11 == (MR_Integer) 0);
#line 186 "status.m"
                      parse_tree__status__succeeded = !(parse_tree__status__succeeded);
#line 186 "status.m"
                      if (parse_tree__status__succeeded)
#line 186 "status.m"
                        *parse_tree__status__HeadVar__1_1 = parse_tree__status__V_11_11;
#line 186 "status.m"
                      else
#line 186 "status.m"
                        {
#line 186 "status.m"
                          MR_Integer parse_tree__status__V_79_79 = (MR_Integer) parse_tree__status__V_69_69;
#line 186 "status.m"
                          MR_Integer parse_tree__status__V_80_80 = (MR_Integer) parse_tree__status__V_9_9;

#line 186 "status.m"
                          {
#line 186 "status.m"
                            mercury__private_builtin__builtin_compare_int_3_p_0(parse_tree__status__HeadVar__1_1, parse_tree__status__V_79_79, parse_tree__status__V_80_80);
#line 186 "status.m"
                            return;
                          }
#line 186 "status.m"
                        }
#line 186 "status.m"
                    }
#line 186 "status.m"
                }
#line 186 "status.m"
                break;
#line 186 "status.m"
              case (MR_Integer) 1:
#line 2421 "parse_tree.status.c"
                *parse_tree__status__HeadVar__1_1 = (MR_Integer) 1;
#line 186 "status.m"
                break;
#line 186 "status.m"
              case (MR_Integer) 2:
#line 2427 "parse_tree.status.c"
                *parse_tree__status__HeadVar__1_1 = (MR_Integer) 1;
#line 186 "status.m"
                break;
#line 186 "status.m"
            }
#line 186 "status.m"
          }
#line 186 "status.m"
          break;
#line 186 "status.m"
        case (MR_Integer) 1:
#line 186 "status.m"
          {
#line 186 "status.m"
            MR_Word parse_tree__status__V_72_72 = ((((((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__status__HeadVar__2_2, (MR_Integer) 1)))) >> (MR_Integer) 2)) & (MR_Integer) 3);
#line 186 "status.m"
            MR_Word parse_tree__status__V_73_73 = ((((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__status__HeadVar__2_2, (MR_Integer) 1)))) & (MR_Integer) 3);
#line 186 "status.m"
            MR_Word parse_tree__status__V_74_74 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__status__HeadVar__2_2, (MR_Integer) 0)));

#line 186 "status.m"
#line 186 "status.m"
            switch (MR_tag((MR_Word) parse_tree__status__HeadVar__3_3)) {
#line 186 "status.m"
              default: /*NOTREACHED*/ MR_assert(0);
#line 186 "status.m"
              case (MR_Integer) 0:
#line 2455 "parse_tree.status.c"
                *parse_tree__status__HeadVar__1_1 = (MR_Integer) 2;
#line 186 "status.m"
                break;
#line 186 "status.m"
              case (MR_Integer) 1:
#line 186 "status.m"
                {
#line 186 "status.m"
                  MR_Word parse_tree__status__V_32_32 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__status__HeadVar__3_3, (MR_Integer) 0)));
#line 186 "status.m"
                  MR_Word parse_tree__status__V_33_33 = ((((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__status__HeadVar__3_3, (MR_Integer) 1)))) & (MR_Integer) 3);
#line 186 "status.m"
                  MR_Word parse_tree__status__V_34_34 = ((((((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__status__HeadVar__3_3, (MR_Integer) 1)))) >> (MR_Integer) 2)) & (MR_Integer) 3);
#line 186 "status.m"
                  MR_Word parse_tree__status__V_35_35;

#line 186 "status.m"
                  {
#line 186 "status.m"
                    mdbcomp__sym_name____Compare____sym_name_0_0(&parse_tree__status__V_35_35, parse_tree__status__V_74_74, parse_tree__status__V_32_32);
                  }
#line 2477 "parse_tree.status.c"
                  parse_tree__status__succeeded = (parse_tree__status__V_35_35 == (MR_Integer) 0);
#line 186 "status.m"
                  parse_tree__status__succeeded = !(parse_tree__status__succeeded);
#line 186 "status.m"
                  if (parse_tree__status__succeeded)
#line 186 "status.m"
                    *parse_tree__status__HeadVar__1_1 = parse_tree__status__V_35_35;
#line 186 "status.m"
                  else
#line 186 "status.m"
                    {
#line 186 "status.m"
                      MR_Word parse_tree__status__V_36_36;
#line 186 "status.m"
                      MR_Integer parse_tree__status__V_81_81 = (MR_Integer) parse_tree__status__V_73_73;
#line 186 "status.m"
                      MR_Integer parse_tree__status__V_82_82 = (MR_Integer) parse_tree__status__V_33_33;

#line 186 "status.m"
                      {
#line 186 "status.m"
                        mercury__private_builtin__builtin_compare_int_3_p_0(&parse_tree__status__V_36_36, parse_tree__status__V_81_81, parse_tree__status__V_82_82);
                      }
#line 2501 "parse_tree.status.c"
                      parse_tree__status__succeeded = (parse_tree__status__V_36_36 == (MR_Integer) 0);
#line 186 "status.m"
                      parse_tree__status__succeeded = !(parse_tree__status__succeeded);
#line 186 "status.m"
                      if (parse_tree__status__succeeded)
#line 186 "status.m"
                        *parse_tree__status__HeadVar__1_1 = parse_tree__status__V_36_36;
#line 186 "status.m"
                      else
#line 186 "status.m"
                        {
#line 186 "status.m"
                          MR_Integer parse_tree__status__V_83_83 = (MR_Integer) parse_tree__status__V_72_72;
#line 186 "status.m"
                          MR_Integer parse_tree__status__V_84_84 = (MR_Integer) parse_tree__status__V_34_34;

#line 186 "status.m"
                          {
#line 186 "status.m"
                            mercury__private_builtin__builtin_compare_int_3_p_0(parse_tree__status__HeadVar__1_1, parse_tree__status__V_83_83, parse_tree__status__V_84_84);
#line 186 "status.m"
                            return;
                          }
#line 186 "status.m"
                        }
#line 186 "status.m"
                    }
#line 186 "status.m"
                }
#line 186 "status.m"
                break;
#line 186 "status.m"
              case (MR_Integer) 2:
#line 2535 "parse_tree.status.c"
                *parse_tree__status__HeadVar__1_1 = (MR_Integer) 1;
#line 186 "status.m"
                break;
#line 186 "status.m"
            }
#line 186 "status.m"
          }
#line 186 "status.m"
          break;
#line 186 "status.m"
        case (MR_Integer) 2:
#line 186 "status.m"
          {
#line 186 "status.m"
            MR_Word parse_tree__status__V_67_67 = ((MR_Word) (MR_hl_field(MR_mktag(2), parse_tree__status__HeadVar__2_2, (MR_Integer) 1)));
#line 186 "status.m"
            MR_Word parse_tree__status__V_68_68 = ((MR_Word) (MR_hl_field(MR_mktag(2), parse_tree__status__HeadVar__2_2, (MR_Integer) 0)));

#line 186 "status.m"
#line 186 "status.m"
            switch (MR_tag((MR_Word) parse_tree__status__HeadVar__3_3)) {
#line 186 "status.m"
              default: /*NOTREACHED*/ MR_assert(0);
#line 186 "status.m"
              case (MR_Integer) 0:
#line 2561 "parse_tree.status.c"
                *parse_tree__status__HeadVar__1_1 = (MR_Integer) 2;
#line 186 "status.m"
                break;
#line 186 "status.m"
              case (MR_Integer) 1:
#line 2567 "parse_tree.status.c"
                *parse_tree__status__HeadVar__1_1 = (MR_Integer) 2;
#line 186 "status.m"
                break;
#line 186 "status.m"
              case (MR_Integer) 2:
#line 186 "status.m"
                {
#line 186 "status.m"
                  MR_Word parse_tree__status__V_54_54 = ((MR_Word) (MR_hl_field(MR_mktag(2), parse_tree__status__HeadVar__3_3, (MR_Integer) 0)));
#line 186 "status.m"
                  MR_Word parse_tree__status__V_55_55 = ((MR_Word) (MR_hl_field(MR_mktag(2), parse_tree__status__HeadVar__3_3, (MR_Integer) 1)));
#line 186 "status.m"
                  MR_Word parse_tree__status__V_56_56;

#line 186 "status.m"
                  {
#line 186 "status.m"
                    mdbcomp__sym_name____Compare____sym_name_0_0(&parse_tree__status__V_56_56, parse_tree__status__V_68_68, parse_tree__status__V_54_54);
                  }
#line 2587 "parse_tree.status.c"
                  parse_tree__status__succeeded = (parse_tree__status__V_56_56 == (MR_Integer) 0);
#line 186 "status.m"
                  parse_tree__status__succeeded = !(parse_tree__status__succeeded);
#line 186 "status.m"
                  if (parse_tree__status__succeeded)
#line 186 "status.m"
                    *parse_tree__status__HeadVar__1_1 = parse_tree__status__V_56_56;
#line 186 "status.m"
                  else
#line 186 "status.m"
                    {
#line 186 "status.m"
                      MR_Integer parse_tree__status__V_75_75 = (MR_Integer) parse_tree__status__V_67_67;
#line 186 "status.m"
                      MR_Integer parse_tree__status__V_76_76 = (MR_Integer) parse_tree__status__V_55_55;

#line 186 "status.m"
                      {
#line 186 "status.m"
                        mercury__private_builtin__builtin_compare_int_3_p_0(parse_tree__status__HeadVar__1_1, parse_tree__status__V_75_75, parse_tree__status__V_76_76);
#line 186 "status.m"
                        return;
                      }
#line 186 "status.m"
                    }
#line 186 "status.m"
                }
#line 186 "status.m"
                break;
#line 186 "status.m"
            }
#line 186 "status.m"
          }
#line 186 "status.m"
          break;
#line 186 "status.m"
      }
#line 186 "status.m"
  }
#line 186 "status.m"
}

#line 186 "status.m"
MR_bool MR_CALL 
parse_tree__status____Unify____int_module_section_0_0(
#line 186 "status.m"
  MR_Word parse_tree__status__HeadVar__1_1,
#line 186 "status.m"
  MR_Word parse_tree__status__HeadVar__2_2)
#line 186 "status.m"
{
#line 186 "status.m"
  {
#line 186 "status.m"
    MR_bool parse_tree__status__succeeded;
#line 186 "status.m"
    MR_Integer parse_tree__status__CastX_19 = (MR_Integer) parse_tree__status__HeadVar__1_1;
#line 186 "status.m"
    MR_Integer parse_tree__status__CastY_20 = (MR_Integer) parse_tree__status__HeadVar__2_2;

#line 186 "status.m"
    parse_tree__status__succeeded = (parse_tree__status__CastX_19 == parse_tree__status__CastY_20);
#line 186 "status.m"
    if (parse_tree__status__succeeded)
#line 186 "status.m"
      parse_tree__status__succeeded = MR_TRUE;
#line 186 "status.m"
    else
#line 186 "status.m"
#line 186 "status.m"
      switch (MR_tag((MR_Word) parse_tree__status__HeadVar__1_1)) {
#line 186 "status.m"
        default: /*NOTREACHED*/ MR_assert(0);
#line 186 "status.m"
        case (MR_Integer) 0:
#line 186 "status.m"
          {
#line 186 "status.m"
            MR_Word parse_tree__status__V_3_3 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__status__HeadVar__1_1, (MR_Integer) 0)));
#line 186 "status.m"
            MR_Word parse_tree__status__V_4_4 = ((((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__status__HeadVar__1_1, (MR_Integer) 1)))) & (MR_Integer) 3);
#line 186 "status.m"
            MR_Word parse_tree__status__V_5_5 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__status__HeadVar__1_1, (MR_Integer) 1)))) >> (MR_Integer) 2)) & (MR_Integer) 3);
#line 186 "status.m"
            MR_Word parse_tree__status__V_6_6;
#line 186 "status.m"
            MR_Word parse_tree__status__V_7_7;
#line 186 "status.m"
            MR_Word parse_tree__status__V_8_8;

#line 186 "status.m"
            parse_tree__status__succeeded = ((MR_tag((MR_Word) parse_tree__status__HeadVar__2_2)) == (MR_mktag((MR_Integer) 0)));
#line 186 "status.m"
            if (parse_tree__status__succeeded)
#line 186 "status.m"
              {
#line 186 "status.m"
                parse_tree__status__V_6_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__status__HeadVar__2_2, (MR_Integer) 0)));
#line 186 "status.m"
                parse_tree__status__V_7_7 = ((((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__status__HeadVar__2_2, (MR_Integer) 1)))) & (MR_Integer) 3);
#line 186 "status.m"
                parse_tree__status__V_8_8 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__status__HeadVar__2_2, (MR_Integer) 1)))) >> (MR_Integer) 2)) & (MR_Integer) 3);
#line 2690 "parse_tree.status.c"
                {
#line 2692 "parse_tree.status.c"
                  parse_tree__status__succeeded = mdbcomp__sym_name____Unify____sym_name_0_0(parse_tree__status__V_3_3, parse_tree__status__V_6_6);
                }
#line 186 "status.m"
                if (parse_tree__status__succeeded)
#line 186 "status.m"
                  {
#line 2699 "parse_tree.status.c"
                    parse_tree__status__succeeded = (parse_tree__status__V_4_4 == parse_tree__status__V_7_7);
#line 186 "status.m"
                    if (parse_tree__status__succeeded)
#line 2703 "parse_tree.status.c"
                      parse_tree__status__succeeded = (parse_tree__status__V_5_5 == parse_tree__status__V_8_8);
#line 186 "status.m"
                  }
#line 186 "status.m"
              }
#line 186 "status.m"
          }
#line 186 "status.m"
          break;
#line 186 "status.m"
        case (MR_Integer) 1:
#line 186 "status.m"
          {
#line 186 "status.m"
            MR_Word parse_tree__status__V_9_9 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__status__HeadVar__1_1, (MR_Integer) 0)));
#line 186 "status.m"
            MR_Word parse_tree__status__V_10_10 = ((((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__status__HeadVar__1_1, (MR_Integer) 1)))) & (MR_Integer) 3);
#line 186 "status.m"
            MR_Word parse_tree__status__V_11_11 = ((((((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__status__HeadVar__1_1, (MR_Integer) 1)))) >> (MR_Integer) 2)) & (MR_Integer) 3);
#line 186 "status.m"
            MR_Word parse_tree__status__V_12_12;
#line 186 "status.m"
            MR_Word parse_tree__status__V_13_13;
#line 186 "status.m"
            MR_Word parse_tree__status__V_14_14;

#line 186 "status.m"
            parse_tree__status__succeeded = ((MR_tag((MR_Word) parse_tree__status__HeadVar__2_2)) == (MR_mktag((MR_Integer) 1)));
#line 186 "status.m"
            if (parse_tree__status__succeeded)
#line 186 "status.m"
              {
#line 186 "status.m"
                parse_tree__status__V_12_12 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__status__HeadVar__2_2, (MR_Integer) 0)));
#line 186 "status.m"
                parse_tree__status__V_13_13 = ((((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__status__HeadVar__2_2, (MR_Integer) 1)))) & (MR_Integer) 3);
#line 186 "status.m"
                parse_tree__status__V_14_14 = ((((((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__status__HeadVar__2_2, (MR_Integer) 1)))) >> (MR_Integer) 2)) & (MR_Integer) 3);
#line 2742 "parse_tree.status.c"
                {
#line 2744 "parse_tree.status.c"
                  parse_tree__status__succeeded = mdbcomp__sym_name____Unify____sym_name_0_0(parse_tree__status__V_9_9, parse_tree__status__V_12_12);
                }
#line 186 "status.m"
                if (parse_tree__status__succeeded)
#line 186 "status.m"
                  {
#line 2751 "parse_tree.status.c"
                    parse_tree__status__succeeded = (parse_tree__status__V_10_10 == parse_tree__status__V_13_13);
#line 186 "status.m"
                    if (parse_tree__status__succeeded)
#line 2755 "parse_tree.status.c"
                      parse_tree__status__succeeded = (parse_tree__status__V_11_11 == parse_tree__status__V_14_14);
#line 186 "status.m"
                  }
#line 186 "status.m"
              }
#line 186 "status.m"
          }
#line 186 "status.m"
          break;
#line 186 "status.m"
        case (MR_Integer) 2:
#line 186 "status.m"
          {
#line 186 "status.m"
            MR_Word parse_tree__status__V_15_15 = ((MR_Word) (MR_hl_field(MR_mktag(2), parse_tree__status__HeadVar__1_1, (MR_Integer) 0)));
#line 186 "status.m"
            MR_Word parse_tree__status__V_16_16 = ((MR_Word) (MR_hl_field(MR_mktag(2), parse_tree__status__HeadVar__1_1, (MR_Integer) 1)));
#line 186 "status.m"
            MR_Word parse_tree__status__V_17_17;
#line 186 "status.m"
            MR_Word parse_tree__status__V_18_18;

#line 186 "status.m"
            parse_tree__status__succeeded = ((MR_tag((MR_Word) parse_tree__status__HeadVar__2_2)) == (MR_mktag((MR_Integer) 2)));
#line 186 "status.m"
            if (parse_tree__status__succeeded)
#line 186 "status.m"
              {
#line 186 "status.m"
                parse_tree__status__V_17_17 = ((MR_Word) (MR_hl_field(MR_mktag(2), parse_tree__status__HeadVar__2_2, (MR_Integer) 0)));
#line 186 "status.m"
                parse_tree__status__V_18_18 = ((MR_Word) (MR_hl_field(MR_mktag(2), parse_tree__status__HeadVar__2_2, (MR_Integer) 1)));
#line 2788 "parse_tree.status.c"
                {
#line 2790 "parse_tree.status.c"
                  parse_tree__status__succeeded = mdbcomp__sym_name____Unify____sym_name_0_0(parse_tree__status__V_15_15, parse_tree__status__V_17_17);
                }
#line 186 "status.m"
                if (parse_tree__status__succeeded)
#line 2795 "parse_tree.status.c"
                  parse_tree__status__succeeded = (parse_tree__status__V_16_16 == parse_tree__status__V_18_18);
#line 186 "status.m"
              }
#line 186 "status.m"
          }
#line 186 "status.m"
          break;
#line 186 "status.m"
      }
#line 186 "status.m"
    return parse_tree__status__succeeded;
#line 186 "status.m"
  }
#line 186 "status.m"
}

#line 206 "status.m"
void MR_CALL 
parse_tree__status____Compare____int_for_opt_module_section_0_0(
#line 206 "status.m"
  MR_Word * parse_tree__status__HeadVar__1_1,
#line 206 "status.m"
  MR_Word parse_tree__status__HeadVar__2_2,
#line 206 "status.m"
  MR_Word parse_tree__status__HeadVar__3_3)
#line 206 "status.m"
{
#line 206 "status.m"
  {
#line 206 "status.m"
    MR_bool parse_tree__status__succeeded;
#line 206 "status.m"
    MR_Integer parse_tree__status__CastX_9 = (MR_Integer) parse_tree__status__HeadVar__2_2;
#line 206 "status.m"
    MR_Integer parse_tree__status__CastY_10 = (MR_Integer) parse_tree__status__HeadVar__3_3;

#line 206 "status.m"
    parse_tree__status__succeeded = (parse_tree__status__CastX_9 == parse_tree__status__CastY_10);
#line 206 "status.m"
    if (parse_tree__status__succeeded)
#line 2836 "parse_tree.status.c"
      *parse_tree__status__HeadVar__1_1 = (MR_Integer) 0;
#line 206 "status.m"
    else
#line 206 "status.m"
      {
#line 206 "status.m"
        MR_Word parse_tree__status__V_4_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__status__HeadVar__2_2, (MR_Integer) 0)));
#line 206 "status.m"
        MR_Word parse_tree__status__V_5_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__status__HeadVar__2_2, (MR_Integer) 1)));
#line 206 "status.m"
        MR_Word parse_tree__status__V_6_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__status__HeadVar__3_3, (MR_Integer) 0)));
#line 206 "status.m"
        MR_Word parse_tree__status__V_7_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__status__HeadVar__3_3, (MR_Integer) 1)));
#line 206 "status.m"
        MR_Word parse_tree__status__V_8_8;

#line 206 "status.m"
        {
#line 206 "status.m"
          mdbcomp__sym_name____Compare____sym_name_0_0(&parse_tree__status__V_8_8, parse_tree__status__V_4_4, parse_tree__status__V_6_6);
        }
#line 2858 "parse_tree.status.c"
        parse_tree__status__succeeded = (parse_tree__status__V_8_8 == (MR_Integer) 0);
#line 206 "status.m"
        parse_tree__status__succeeded = !(parse_tree__status__succeeded);
#line 206 "status.m"
        if (parse_tree__status__succeeded)
#line 206 "status.m"
          *parse_tree__status__HeadVar__1_1 = parse_tree__status__V_8_8;
#line 206 "status.m"
        else
#line 206 "status.m"
          {
#line 206 "status.m"
            MR_Integer parse_tree__status__V_13_13 = (MR_Integer) parse_tree__status__V_5_5;
#line 206 "status.m"
            MR_Integer parse_tree__status__V_14_14 = (MR_Integer) parse_tree__status__V_7_7;

#line 206 "status.m"
            {
#line 206 "status.m"
              mercury__private_builtin__builtin_compare_int_3_p_0(parse_tree__status__HeadVar__1_1, parse_tree__status__V_13_13, parse_tree__status__V_14_14);
#line 206 "status.m"
              return;
            }
#line 206 "status.m"
          }
#line 206 "status.m"
      }
#line 206 "status.m"
  }
#line 206 "status.m"
}

#line 206 "status.m"
MR_bool MR_CALL 
parse_tree__status____Unify____int_for_opt_module_section_0_0(
#line 206 "status.m"
  MR_Word parse_tree__status__HeadVar__1_1,
#line 206 "status.m"
  MR_Word parse_tree__status__HeadVar__2_2)
#line 206 "status.m"
{
#line 206 "status.m"
  {
#line 206 "status.m"
    MR_bool parse_tree__status__succeeded;
#line 206 "status.m"
    MR_Integer parse_tree__status__CastX_7 = (MR_Integer) parse_tree__status__HeadVar__1_1;
#line 206 "status.m"
    MR_Integer parse_tree__status__CastY_8 = (MR_Integer) parse_tree__status__HeadVar__2_2;

#line 206 "status.m"
    parse_tree__status__succeeded = (parse_tree__status__CastX_7 == parse_tree__status__CastY_8);
#line 206 "status.m"
    if (parse_tree__status__succeeded)
#line 206 "status.m"
      parse_tree__status__succeeded = MR_TRUE;
#line 206 "status.m"
    else
#line 206 "status.m"
      {
#line 206 "status.m"
        MR_Word parse_tree__status__V_3_3 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__status__HeadVar__1_1, (MR_Integer) 0)));
#line 206 "status.m"
        MR_Word parse_tree__status__V_4_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__status__HeadVar__1_1, (MR_Integer) 1)));
#line 206 "status.m"
        MR_Word parse_tree__status__V_5_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__status__HeadVar__2_2, (MR_Integer) 0)));
#line 206 "status.m"
        MR_Word parse_tree__status__V_6_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__status__HeadVar__2_2, (MR_Integer) 1)));

#line 2928 "parse_tree.status.c"
        {
#line 2930 "parse_tree.status.c"
          parse_tree__status__succeeded = mdbcomp__sym_name____Unify____sym_name_0_0(parse_tree__status__V_3_3, parse_tree__status__V_5_5);
        }
#line 206 "status.m"
        if (parse_tree__status__succeeded)
#line 2935 "parse_tree.status.c"
          parse_tree__status__succeeded = (parse_tree__status__V_4_4 == parse_tree__status__V_6_6);
#line 206 "status.m"
      }
#line 206 "status.m"
    return parse_tree__status__succeeded;
#line 206 "status.m"
  }
#line 206 "status.m"
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
#line 2976 "parse_tree.status.c"
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
#line 3066 "parse_tree.status.c"
                      *parse_tree__status__HeadVar__1_1 = (MR_Integer) 2;
#line 45 "status.m"
                      break;
#line 45 "status.m"
                    case (MR_Integer) 2:
#line 3072 "parse_tree.status.c"
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
#line 3154 "parse_tree.status.c"
                      *parse_tree__status__HeadVar__1_1 = (MR_Integer) 2;
#line 45 "status.m"
                      break;
#line 45 "status.m"
                    case (MR_Integer) 2:
#line 3160 "parse_tree.status.c"
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
#line 3242 "parse_tree.status.c"
                      *parse_tree__status__HeadVar__1_1 = (MR_Integer) 2;
#line 45 "status.m"
                      break;
#line 45 "status.m"
                    case (MR_Integer) 2:
#line 3248 "parse_tree.status.c"
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
#line 3330 "parse_tree.status.c"
                      *parse_tree__status__HeadVar__1_1 = (MR_Integer) 2;
#line 45 "status.m"
                      break;
#line 45 "status.m"
                    case (MR_Integer) 2:
#line 3336 "parse_tree.status.c"
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
#line 3418 "parse_tree.status.c"
                      *parse_tree__status__HeadVar__1_1 = (MR_Integer) 2;
#line 45 "status.m"
                      break;
#line 45 "status.m"
                    case (MR_Integer) 2:
#line 3424 "parse_tree.status.c"
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
#line 3506 "parse_tree.status.c"
                      *parse_tree__status__HeadVar__1_1 = (MR_Integer) 2;
#line 45 "status.m"
                      break;
#line 45 "status.m"
                    case (MR_Integer) 2:
#line 3512 "parse_tree.status.c"
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
#line 3594 "parse_tree.status.c"
                      *parse_tree__status__HeadVar__1_1 = (MR_Integer) 2;
#line 45 "status.m"
                      break;
#line 45 "status.m"
                    case (MR_Integer) 2:
#line 3600 "parse_tree.status.c"
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
#line 3682 "parse_tree.status.c"
                      *parse_tree__status__HeadVar__1_1 = (MR_Integer) 2;
#line 45 "status.m"
                      break;
#line 45 "status.m"
                    case (MR_Integer) 2:
#line 3688 "parse_tree.status.c"
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
#line 3770 "parse_tree.status.c"
                      *parse_tree__status__HeadVar__1_1 = (MR_Integer) 2;
#line 45 "status.m"
                      break;
#line 45 "status.m"
                    case (MR_Integer) 2:
#line 3776 "parse_tree.status.c"
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
#line 3809 "parse_tree.status.c"
                        *parse_tree__status__HeadVar__1_1 = (MR_Integer) 1;
#line 45 "status.m"
                        break;
#line 45 "status.m"
                      case (MR_Integer) 1:
#line 3815 "parse_tree.status.c"
                        *parse_tree__status__HeadVar__1_1 = (MR_Integer) 1;
#line 45 "status.m"
                        break;
#line 45 "status.m"
                      case (MR_Integer) 2:
#line 3821 "parse_tree.status.c"
                        *parse_tree__status__HeadVar__1_1 = (MR_Integer) 1;
#line 45 "status.m"
                        break;
#line 45 "status.m"
                      case (MR_Integer) 3:
#line 3827 "parse_tree.status.c"
                        *parse_tree__status__HeadVar__1_1 = (MR_Integer) 1;
#line 45 "status.m"
                        break;
#line 45 "status.m"
                      case (MR_Integer) 4:
#line 3833 "parse_tree.status.c"
                        *parse_tree__status__HeadVar__1_1 = (MR_Integer) 1;
#line 45 "status.m"
                        break;
#line 45 "status.m"
                      case (MR_Integer) 5:
#line 3839 "parse_tree.status.c"
                        *parse_tree__status__HeadVar__1_1 = (MR_Integer) 1;
#line 45 "status.m"
                        break;
#line 45 "status.m"
                      case (MR_Integer) 6:
#line 3845 "parse_tree.status.c"
                        *parse_tree__status__HeadVar__1_1 = (MR_Integer) 1;
#line 45 "status.m"
                        break;
#line 45 "status.m"
                      case (MR_Integer) 7:
#line 3851 "parse_tree.status.c"
                        *parse_tree__status__HeadVar__1_1 = (MR_Integer) 1;
#line 45 "status.m"
                        break;
#line 45 "status.m"
                      case (MR_Integer) 8:
#line 3857 "parse_tree.status.c"
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
#line 3895 "parse_tree.status.c"
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
#line 3926 "parse_tree.status.c"
                        *parse_tree__status__HeadVar__1_1 = (MR_Integer) 1;
#line 45 "status.m"
                        break;
#line 45 "status.m"
                      case (MR_Integer) 1:
#line 3932 "parse_tree.status.c"
                        *parse_tree__status__HeadVar__1_1 = (MR_Integer) 1;
#line 45 "status.m"
                        break;
#line 45 "status.m"
                      case (MR_Integer) 2:
#line 3938 "parse_tree.status.c"
                        *parse_tree__status__HeadVar__1_1 = (MR_Integer) 1;
#line 45 "status.m"
                        break;
#line 45 "status.m"
                      case (MR_Integer) 3:
#line 3944 "parse_tree.status.c"
                        *parse_tree__status__HeadVar__1_1 = (MR_Integer) 1;
#line 45 "status.m"
                        break;
#line 45 "status.m"
                      case (MR_Integer) 4:
#line 3950 "parse_tree.status.c"
                        *parse_tree__status__HeadVar__1_1 = (MR_Integer) 1;
#line 45 "status.m"
                        break;
#line 45 "status.m"
                      case (MR_Integer) 5:
#line 3956 "parse_tree.status.c"
                        *parse_tree__status__HeadVar__1_1 = (MR_Integer) 1;
#line 45 "status.m"
                        break;
#line 45 "status.m"
                      case (MR_Integer) 6:
#line 3962 "parse_tree.status.c"
                        *parse_tree__status__HeadVar__1_1 = (MR_Integer) 1;
#line 45 "status.m"
                        break;
#line 45 "status.m"
                      case (MR_Integer) 7:
#line 3968 "parse_tree.status.c"
                        *parse_tree__status__HeadVar__1_1 = (MR_Integer) 1;
#line 45 "status.m"
                        break;
#line 45 "status.m"
                      case (MR_Integer) 8:
#line 3974 "parse_tree.status.c"
                        *parse_tree__status__HeadVar__1_1 = (MR_Integer) 1;
#line 45 "status.m"
                        break;
#line 45 "status.m"
                    }
#line 45 "status.m"
                    break;
#line 45 "status.m"
                  case (MR_Integer) 1:
#line 3984 "parse_tree.status.c"
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
#line 4227 "parse_tree.status.c"
                    /* direct tailcall eliminated */
#line 4229 "parse_tree.status.c"
                    {
#line 4231 "parse_tree.status.c"
                      MR_Word parse_tree__status__HeadVar__1__tmp_copy_1 = parse_tree__status__V_3_3;
#line 4233 "parse_tree.status.c"
                      MR_Word parse_tree__status__HeadVar__2__tmp_copy_2 = parse_tree__status__V_4_4;

#line 4236 "parse_tree.status.c"
                      parse_tree__status__HeadVar__2_2 = parse_tree__status__HeadVar__2__tmp_copy_2;
#line 4238 "parse_tree.status.c"
                      parse_tree__status__HeadVar__1_1 = parse_tree__status__HeadVar__1__tmp_copy_1;
#line 4240 "parse_tree.status.c"
                    }
#line 4242 "parse_tree.status.c"
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
#line 4267 "parse_tree.status.c"
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
#line 4329 "parse_tree.status.c"
  {
#line 4331 "parse_tree.status.c"
    MR_bool parse_tree__status__succeeded = (parse_tree__status__HeadVar__2_1 == parse_tree__status__HeadVar__2_2);

#line 4334 "parse_tree.status.c"
    return parse_tree__status__succeeded;
#line 4336 "parse_tree.status.c"
  }
#line 105 "status.m"
}

#line 234 "status.m"
void MR_CALL 
parse_tree__status__int_for_opt_module_section_status_2_p_0(
#line 234 "status.m"
  MR_Word parse_tree__status__IntForOptSection_3,
#line 234 "status.m"
  MR_Word * parse_tree__status__Status_4)
#line 234 "status.m"
{
#line 349 "status.m"
  {
#line 349 "status.m"
    MR_bool parse_tree__status__succeeded;

#line 349 "status.m"
    {
#line 349 "status.m"
      parse_tree__status__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_105_110_116_95_102_111_114_95_111_112_116_95_109_111_100_117_108_101_95_115_101_99_116_105_111_110_95_115_116_97_116_117_115_95_95_91_49_93_95_48_2_p_0(parse_tree__status__Status_4);
#line 349 "status.m"
      return;
    }
#line 349 "status.m"
  }
#line 234 "status.m"
}

#line 232 "status.m"
void MR_CALL 
parse_tree__status__opt_module_section_status_2_p_0(
#line 232 "status.m"
  MR_Word parse_tree__status__OptSection_3,
#line 232 "status.m"
  MR_Word * parse_tree__status__Status_4)
#line 232 "status.m"
{
#line 343 "status.m"
  {
#line 343 "status.m"
    MR_bool parse_tree__status__succeeded;

#line 343 "status.m"
    {
#line 343 "status.m"
      parse_tree__status__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_111_112_116_95_109_111_100_117_108_101_95_115_101_99_116_105_111_110_95_115_116_97_116_117_115_95_95_91_49_93_95_48_2_p_0(parse_tree__status__Status_4);
#line 343 "status.m"
      return;
    }
#line 343 "status.m"
  }
#line 232 "status.m"
}

#line 230 "status.m"
void MR_CALL 
parse_tree__status__int_module_section_status_2_p_0(
#line 230 "status.m"
  MR_Word parse_tree__status__IntSection_3,
#line 230 "status.m"
  MR_Word * parse_tree__status__Status_4)
#line 230 "status.m"
{
#line 333 "status.m"
  {
#line 333 "status.m"
    MR_bool parse_tree__status__succeeded;

#line 333 "status.m"
#line 333 "status.m"
    switch (MR_tag((MR_Word) parse_tree__status__IntSection_3)) {
#line 333 "status.m"
      default: /*NOTREACHED*/ MR_assert(0);
#line 333 "status.m"
      case (MR_Integer) 0:
#line 333 "status.m"
        {
#line 333 "status.m"
          MR_Word parse_tree__status__Section_7 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__status__IntSection_3, (MR_Integer) 1)))) >> (MR_Integer) 2)) & (MR_Integer) 3);
#line 333 "status.m"
          MR_Word parse_tree__status__V_12_12;
#line 333 "status.m"
          MR_Word parse_tree__status___ModuleName_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__status__IntSection_3, (MR_Integer) 0)));
#line 333 "status.m"
          MR_Word parse_tree__status___IntFileKind_6 = ((((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__status__IntSection_3, (MR_Integer) 1)))) & (MR_Integer) 3);

#line 334 "status.m"
          {
#line 334 "status.m"
            parse_tree__status__V_12_12 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 334 "status.m"
            MR_hl_field(MR_mktag(2), parse_tree__status__V_12_12, 0) = ((MR_Box) (parse_tree__status__Section_7));
#line 334 "status.m"
          }
#line 334 "status.m"
          {
#line 334 "status.m"
            MR_Word base;
#line 334 "status.m"
            base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 334 "status.m"
            *parse_tree__status__Status_4 = base;
#line 334 "status.m"
            MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (parse_tree__status__V_12_12));
#line 334 "status.m"
            MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) ((MR_Integer) 1));
#line 334 "status.m"
          }
#line 333 "status.m"
        }
#line 333 "status.m"
        break;
#line 333 "status.m"
      case (MR_Integer) 1:
#line 336 "status.m"
        {
#line 336 "status.m"
          MR_Word parse_tree__status__V_10_10;
#line 336 "status.m"
          MR_Word parse_tree__status__Section_18 = ((((((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__status__IntSection_3, (MR_Integer) 1)))) >> (MR_Integer) 2)) & (MR_Integer) 3);
#line 336 "status.m"
          MR_Word parse_tree__status___ModuleName_14 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__status__IntSection_3, (MR_Integer) 0)));
#line 336 "status.m"
          MR_Word parse_tree__status___IntFileKind_15 = ((((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__status__IntSection_3, (MR_Integer) 1)))) & (MR_Integer) 3);

#line 337 "status.m"
          {
#line 337 "status.m"
            parse_tree__status__V_10_10 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 337 "status.m"
            MR_hl_field(MR_mktag(2), parse_tree__status__V_10_10, 0) = ((MR_Box) (parse_tree__status__Section_18));
#line 337 "status.m"
          }
#line 337 "status.m"
          {
#line 337 "status.m"
            MR_Word base;
#line 337 "status.m"
            base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 337 "status.m"
            *parse_tree__status__Status_4 = base;
#line 337 "status.m"
            MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (parse_tree__status__V_10_10));
#line 337 "status.m"
            MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) ((MR_Integer) 0));
#line 337 "status.m"
          }
#line 336 "status.m"
        }
#line 333 "status.m"
        break;
#line 333 "status.m"
      case (MR_Integer) 2:
#line 339 "status.m"
        {
#line 340 "status.m"
          *parse_tree__status__Status_4 = (MR_Word) &parse_tree__status_scalar_common_2[3];
#line 339 "status.m"
        }
#line 333 "status.m"
        break;
#line 333 "status.m"
    }
#line 333 "status.m"
  }
#line 230 "status.m"
}

#line 228 "status.m"
void MR_CALL 
parse_tree__status__src_module_section_status_2_p_0(
#line 228 "status.m"
  MR_Word parse_tree__status__SrcSection_3,
#line 228 "status.m"
  MR_Word * parse_tree__status__Status_4)
#line 228 "status.m"
{
#line 320 "status.m"
  {
#line 320 "status.m"
    MR_bool parse_tree__status__succeeded;

#line 320 "status.m"
#line 320 "status.m"
    switch (parse_tree__status__SrcSection_3) {
#line 320 "status.m"
      default: /*NOTREACHED*/ MR_assert(0);
#line 320 "status.m"
      case (MR_Integer) 2:
#line 326 "status.m"
        {
#line 327 "status.m"
          *parse_tree__status__Status_4 = (MR_Word) &parse_tree__status_scalar_common_2[0];
#line 326 "status.m"
        }
#line 320 "status.m"
        break;
#line 320 "status.m"
      case (MR_Integer) 1:
#line 323 "status.m"
        {
#line 324 "status.m"
          *parse_tree__status__Status_4 = (MR_Word) &parse_tree__status_scalar_common_2[1];
#line 323 "status.m"
        }
#line 320 "status.m"
        break;
#line 320 "status.m"
      case (MR_Integer) 0:
#line 320 "status.m"
        {
#line 321 "status.m"
          *parse_tree__status__Status_4 = (MR_Word) &parse_tree__status_scalar_common_2[2];
#line 320 "status.m"
        }
#line 320 "status.m"
        break;
#line 320 "status.m"
    }
#line 320 "status.m"
  }
#line 228 "status.m"
}

#line 223 "status.m"
MR_Word MR_CALL 
parse_tree__status__make_ioms_opt_imported_2_f_0(
#line 223 "status.m"
  MR_Word parse_tree__status__ModuleName_4,
#line 223 "status.m"
  MR_Word parse_tree__status__OptFileKind_5)
#line 223 "status.m"
{
#line 314 "status.m"
  {
#line 314 "status.m"
    MR_bool parse_tree__status__succeeded;
#line 314 "status.m"
    MR_Word parse_tree__status__HeadVar__3_3;

#line 314 "status.m"
    {
#line 314 "status.m"
      parse_tree__status__HeadVar__3_3 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 314 "status.m"
      MR_hl_field(MR_mktag(0), parse_tree__status__HeadVar__3_3, 0) = ((MR_Box) (parse_tree__status__ModuleName_4));
#line 314 "status.m"
      MR_hl_field(MR_mktag(0), parse_tree__status__HeadVar__3_3, 1) = ((MR_Box) (parse_tree__status__OptFileKind_5));
#line 314 "status.m"
    }
#line 314 "status.m"
    return parse_tree__status__HeadVar__3_3;
#line 314 "status.m"
  }
#line 223 "status.m"
}

#line 221 "status.m"
MR_Word MR_CALL 
parse_tree__status__make_oms_opt_imported_2_f_0(
#line 221 "status.m"
  MR_Word parse_tree__status__ModuleName_4,
#line 221 "status.m"
  MR_Word parse_tree__status__OptFileKind_5)
#line 221 "status.m"
{
#line 312 "status.m"
  {
#line 312 "status.m"
    MR_bool parse_tree__status__succeeded;
#line 312 "status.m"
    MR_Word parse_tree__status__HeadVar__3_3;

#line 312 "status.m"
    {
#line 312 "status.m"
      parse_tree__status__HeadVar__3_3 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 312 "status.m"
      MR_hl_field(MR_mktag(0), parse_tree__status__HeadVar__3_3, 0) = ((MR_Box) (parse_tree__status__ModuleName_4));
#line 312 "status.m"
      MR_hl_field(MR_mktag(0), parse_tree__status__HeadVar__3_3, 1) = ((MR_Box) (parse_tree__status__OptFileKind_5));
#line 312 "status.m"
    }
#line 312 "status.m"
    return parse_tree__status__HeadVar__3_3;
#line 312 "status.m"
  }
#line 221 "status.m"
}

#line 218 "status.m"
MR_Word MR_CALL 
parse_tree__status__make_ims_abstract_imported_2_f_0(
#line 218 "status.m"
  MR_Word parse_tree__status__ModuleName_4,
#line 218 "status.m"
  MR_Word parse_tree__status__IntFileKind_5)
#line 218 "status.m"
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
      MR_hl_field(MR_mktag(2), parse_tree__status__HeadVar__3_3, 0) = ((MR_Box) (parse_tree__status__ModuleName_4));
#line 309 "status.m"
      MR_hl_field(MR_mktag(2), parse_tree__status__HeadVar__3_3, 1) = ((MR_Box) (parse_tree__status__IntFileKind_5));
#line 309 "status.m"
    }
#line 309 "status.m"
    return parse_tree__status__HeadVar__3_3;
#line 309 "status.m"
  }
#line 218 "status.m"
}

#line 216 "status.m"
MR_Word MR_CALL 
parse_tree__status__make_ims_used_3_f_0(
#line 216 "status.m"
  MR_Word parse_tree__status__ImportLocn_5,
#line 216 "status.m"
  MR_Word parse_tree__status__ModuleName_6,
#line 216 "status.m"
  MR_Word parse_tree__status__IntFileKind_7)
#line 216 "status.m"
{
#line 307 "status.m"
  {
#line 307 "status.m"
    MR_bool parse_tree__status__succeeded;
#line 307 "status.m"
    MR_Word parse_tree__status__HeadVar__4_4;

#line 307 "status.m"
    {
#line 307 "status.m"
      parse_tree__status__HeadVar__4_4 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 307 "status.m"
      MR_hl_field(MR_mktag(1), parse_tree__status__HeadVar__4_4, 0) = ((MR_Box) (parse_tree__status__ModuleName_6));
#line 307 "status.m"
      MR_hl_field(MR_mktag(1), parse_tree__status__HeadVar__4_4, 1) = ((MR_Box) ((parse_tree__status__IntFileKind_7 | ((parse_tree__status__ImportLocn_5 << (MR_Integer) 2)))));
#line 307 "status.m"
    }
#line 307 "status.m"
    return parse_tree__status__HeadVar__4_4;
#line 307 "status.m"
  }
#line 216 "status.m"
}

#line 214 "status.m"
MR_Word MR_CALL 
parse_tree__status__make_ims_imported_3_f_0(
#line 214 "status.m"
  MR_Word parse_tree__status__ImportLocn_5,
#line 214 "status.m"
  MR_Word parse_tree__status__ModuleName_6,
#line 214 "status.m"
  MR_Word parse_tree__status__IntFileKind_7)
#line 214 "status.m"
{
#line 305 "status.m"
  {
#line 305 "status.m"
    MR_bool parse_tree__status__succeeded;
#line 305 "status.m"
    MR_Word parse_tree__status__HeadVar__4_4;

#line 305 "status.m"
    {
#line 305 "status.m"
      parse_tree__status__HeadVar__4_4 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 305 "status.m"
      MR_hl_field(MR_mktag(0), parse_tree__status__HeadVar__4_4, 0) = ((MR_Box) (parse_tree__status__ModuleName_6));
#line 305 "status.m"
      MR_hl_field(MR_mktag(0), parse_tree__status__HeadVar__4_4, 1) = ((MR_Box) ((parse_tree__status__IntFileKind_7 | ((parse_tree__status__ImportLocn_5 << (MR_Integer) 2)))));
#line 305 "status.m"
    }
#line 305 "status.m"
    return parse_tree__status__HeadVar__4_4;
#line 305 "status.m"
  }
#line 214 "status.m"
}

#line 154 "status.m"
MR_Word MR_CALL 
parse_tree__status__status_defined_in_impl_section_1_f_0(
#line 154 "status.m"
  MR_Word parse_tree__status__HeadVar__1_1)
#line 154 "status.m"
{
#line 279 "status.m"
  while (MR_TRUE)
#line 279 "status.m"
    {
#line 279 "status.m"
      /* tailcall optimized into a loop */
#line 279 "status.m"
      {
#line 279 "status.m"
        MR_bool parse_tree__status__succeeded;
#line 279 "status.m"
        MR_Word parse_tree__status__HeadVar__2_2;

#line 279 "status.m"
#line 279 "status.m"
        switch (MR_tag((MR_Word) parse_tree__status__HeadVar__1_1)) {
#line 279 "status.m"
          default: /*NOTREACHED*/ MR_assert(0);
#line 279 "status.m"
          case (MR_Integer) 0:
#line 279 "status.m"
#line 279 "status.m"
            switch (MR_unmkbody(parse_tree__status__HeadVar__1_1)) {
#line 279 "status.m"
              default: /*NOTREACHED*/ MR_assert(0);
#line 279 "status.m"
              case (MR_Integer) 0:
#line 282 "status.m"
                parse_tree__status__HeadVar__2_2 = (MR_Integer) 0;
#line 279 "status.m"
                break;
#line 279 "status.m"
              case (MR_Integer) 1:
#line 283 "status.m"
                parse_tree__status__HeadVar__2_2 = (MR_Integer) 0;
#line 279 "status.m"
                break;
#line 279 "status.m"
              case (MR_Integer) 2:
#line 284 "status.m"
                parse_tree__status__HeadVar__2_2 = (MR_Integer) 0;
#line 279 "status.m"
                break;
#line 279 "status.m"
              case (MR_Integer) 3:
#line 285 "status.m"
                parse_tree__status__HeadVar__2_2 = (MR_Integer) 0;
#line 279 "status.m"
                break;
#line 279 "status.m"
              case (MR_Integer) 4:
#line 286 "status.m"
                parse_tree__status__HeadVar__2_2 = (MR_Integer) 1;
#line 279 "status.m"
                break;
#line 279 "status.m"
              case (MR_Integer) 5:
#line 279 "status.m"
                parse_tree__status__HeadVar__2_2 = (MR_Integer) 1;
#line 279 "status.m"
                break;
#line 279 "status.m"
              case (MR_Integer) 6:
#line 287 "status.m"
                parse_tree__status__HeadVar__2_2 = (MR_Integer) 0;
#line 279 "status.m"
                break;
#line 279 "status.m"
              case (MR_Integer) 7:
#line 280 "status.m"
                parse_tree__status__HeadVar__2_2 = (MR_Integer) 1;
#line 279 "status.m"
                break;
#line 279 "status.m"
              case (MR_Integer) 8:
#line 281 "status.m"
                parse_tree__status__HeadVar__2_2 = (MR_Integer) 1;
#line 279 "status.m"
                break;
#line 279 "status.m"
            }
#line 279 "status.m"
            break;
#line 279 "status.m"
          case (MR_Integer) 1:
#line 288 "status.m"
            {
#line 288 "status.m"
              MR_Word parse_tree__status__Status_3 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__status__HeadVar__1_1, (MR_Integer) 0)));

#line 289 "status.m"
              /* direct tailcall eliminated */
#line 289 "status.m"
              {
#line 289 "status.m"
                MR_Word parse_tree__status__HeadVar__1__tmp_copy_1 = parse_tree__status__Status_3;

#line 289 "status.m"
                parse_tree__status__HeadVar__1_1 = parse_tree__status__HeadVar__1__tmp_copy_1;
#line 289 "status.m"
              }
#line 289 "status.m"
              continue;
#line 288 "status.m"
            }
#line 279 "status.m"
            break;
#line 279 "status.m"
          case (MR_Integer) 2:
#line 290 "status.m"
            {
#line 290 "status.m"
              MR_Word parse_tree__status__ImportLocn_4 = ((MR_Word) (MR_hl_field(MR_mktag(2), parse_tree__status__HeadVar__1_1, (MR_Integer) 0)));

#line 296 "status.m"
              parse_tree__status__HeadVar__2_2 = ((&parse_tree__status_vector_common_1[0 + parse_tree__status__ImportLocn_4]))->parse_tree__status__vector_common_type_1_0__vct_1_f_0;
#line 290 "status.m"
            }
#line 279 "status.m"
            break;
#line 279 "status.m"
        }
#line 279 "status.m"
        return parse_tree__status__HeadVar__2_2;
#line 279 "status.m"
      }
#line 279 "status.m"
      break;
#line 279 "status.m"
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
#line 267 "status.m"
  {
#line 267 "status.m"
    MR_bool parse_tree__status__succeeded;
#line 267 "status.m"
    MR_Word parse_tree__status__HeadVar__2_2;

#line 267 "status.m"
#line 267 "status.m"
    switch (MR_tag((MR_Word) parse_tree__status__HeadVar__1_1)) {
#line 267 "status.m"
      default: /*NOTREACHED*/ MR_assert(0);
#line 267 "status.m"
      case (MR_Integer) 0:
#line 267 "status.m"
#line 267 "status.m"
        switch (MR_unmkbody(parse_tree__status__HeadVar__1_1)) {
#line 267 "status.m"
          default: /*NOTREACHED*/ MR_assert(0);
#line 267 "status.m"
          case (MR_Integer) 0:
#line 271 "status.m"
            parse_tree__status__HeadVar__2_2 = (MR_Integer) 0;
#line 267 "status.m"
            break;
#line 267 "status.m"
          case (MR_Integer) 1:
#line 269 "status.m"
            parse_tree__status__HeadVar__2_2 = (MR_Integer) 0;
#line 267 "status.m"
            break;
#line 267 "status.m"
          case (MR_Integer) 2:
#line 270 "status.m"
            parse_tree__status__HeadVar__2_2 = (MR_Integer) 0;
#line 267 "status.m"
            break;
#line 267 "status.m"
          case (MR_Integer) 3:
#line 272 "status.m"
            parse_tree__status__HeadVar__2_2 = (MR_Integer) 1;
#line 267 "status.m"
            break;
#line 267 "status.m"
          case (MR_Integer) 4:
#line 273 "status.m"
            parse_tree__status__HeadVar__2_2 = (MR_Integer) 1;
#line 267 "status.m"
            break;
#line 267 "status.m"
          case (MR_Integer) 5:
#line 274 "status.m"
            parse_tree__status__HeadVar__2_2 = (MR_Integer) 1;
#line 267 "status.m"
            break;
#line 267 "status.m"
          case (MR_Integer) 6:
#line 275 "status.m"
            parse_tree__status__HeadVar__2_2 = (MR_Integer) 1;
#line 267 "status.m"
            break;
#line 267 "status.m"
          case (MR_Integer) 7:
#line 276 "status.m"
            parse_tree__status__HeadVar__2_2 = (MR_Integer) 1;
#line 267 "status.m"
            break;
#line 267 "status.m"
          case (MR_Integer) 8:
#line 277 "status.m"
            parse_tree__status__HeadVar__2_2 = (MR_Integer) 1;
#line 267 "status.m"
            break;
#line 267 "status.m"
        }
#line 267 "status.m"
        break;
#line 267 "status.m"
      case (MR_Integer) 1:
#line 268 "status.m"
        parse_tree__status__HeadVar__2_2 = (MR_Integer) 0;
#line 267 "status.m"
        break;
#line 267 "status.m"
      case (MR_Integer) 2:
#line 267 "status.m"
        parse_tree__status__HeadVar__2_2 = (MR_Integer) 0;
#line 267 "status.m"
        break;
#line 267 "status.m"
    }
#line 267 "status.m"
    return parse_tree__status__HeadVar__2_2;
#line 267 "status.m"
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
#line 265 "status.m"
  {
#line 265 "status.m"
    MR_bool parse_tree__status__succeeded;
#line 265 "status.m"
    MR_Word parse_tree__status__HeadVar__2_2;
#line 265 "status.m"
    MR_Word parse_tree__status__V_4_4;

#line 265 "status.m"
    {
#line 265 "status.m"
      parse_tree__status__V_4_4 = parse_tree__status__status_defined_in_this_module_1_f_0(parse_tree__status__Status_3);
    }
#line 265 "status.m"
    {
#line 265 "status.m"
      return parse_tree__status__HeadVar__2_2 = mercury__bool__not_1_f_0(parse_tree__status__V_4_4);
    }
#line 265 "status.m"
    return parse_tree__status__HeadVar__2_2;
#line 265 "status.m"
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
#line 255 "status.m"
  {
#line 255 "status.m"
    MR_bool parse_tree__status__succeeded;
#line 255 "status.m"
    MR_Word parse_tree__status__HeadVar__2_2;
#line 257 "status.m"
    MR_Word parse_tree__status__V_4_4;

#line 257 "status.m"
    {
#line 257 "status.m"
      parse_tree__status__V_4_4 = parse_tree__status__status_is_exported_1_f_0(parse_tree__status__Status_3);
    }
#line 257 "status.m"
    parse_tree__status__succeeded = (parse_tree__status__V_4_4 == (MR_Integer) 1);
#line 257 "status.m"
    if (parse_tree__status__succeeded)
#line 257 "status.m"
      {
#line 258 "status.m"
        parse_tree__status__succeeded = (parse_tree__status__Status_3 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 7))));
#line 258 "status.m"
        parse_tree__status__succeeded = !(parse_tree__status__succeeded);
#line 257 "status.m"
      }
#line 255 "status.m"
    if (parse_tree__status__succeeded)
#line 260 "status.m"
      parse_tree__status__HeadVar__2_2 = (MR_Integer) 1;
#line 255 "status.m"
    else
#line 262 "status.m"
      parse_tree__status__HeadVar__2_2 = (MR_Integer) 0;
#line 255 "status.m"
    return parse_tree__status__HeadVar__2_2;
#line 255 "status.m"
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
#line 243 "status.m"
  {
#line 243 "status.m"
    MR_bool parse_tree__status__succeeded;
#line 243 "status.m"
    MR_Word parse_tree__status__HeadVar__2_2;

#line 243 "status.m"
#line 243 "status.m"
    switch (MR_tag((MR_Word) parse_tree__status__HeadVar__1_1)) {
#line 243 "status.m"
      default: /*NOTREACHED*/ MR_assert(0);
#line 243 "status.m"
      case (MR_Integer) 0:
#line 243 "status.m"
#line 243 "status.m"
        switch (MR_unmkbody(parse_tree__status__HeadVar__1_1)) {
#line 243 "status.m"
          default: /*NOTREACHED*/ MR_assert(0);
#line 243 "status.m"
          case (MR_Integer) 0:
#line 247 "status.m"
            parse_tree__status__HeadVar__2_2 = (MR_Integer) 0;
#line 243 "status.m"
            break;
#line 243 "status.m"
          case (MR_Integer) 1:
#line 245 "status.m"
            parse_tree__status__HeadVar__2_2 = (MR_Integer) 0;
#line 243 "status.m"
            break;
#line 243 "status.m"
          case (MR_Integer) 2:
#line 246 "status.m"
            parse_tree__status__HeadVar__2_2 = (MR_Integer) 0;
#line 243 "status.m"
            break;
#line 243 "status.m"
          case (MR_Integer) 3:
#line 248 "status.m"
            parse_tree__status__HeadVar__2_2 = (MR_Integer) 1;
#line 243 "status.m"
            break;
#line 243 "status.m"
          case (MR_Integer) 4:
#line 249 "status.m"
            parse_tree__status__HeadVar__2_2 = (MR_Integer) 1;
#line 243 "status.m"
            break;
#line 243 "status.m"
          case (MR_Integer) 5:
#line 250 "status.m"
            parse_tree__status__HeadVar__2_2 = (MR_Integer) 1;
#line 243 "status.m"
            break;
#line 243 "status.m"
          case (MR_Integer) 6:
#line 251 "status.m"
            parse_tree__status__HeadVar__2_2 = (MR_Integer) 1;
#line 243 "status.m"
            break;
#line 243 "status.m"
          case (MR_Integer) 7:
#line 252 "status.m"
            parse_tree__status__HeadVar__2_2 = (MR_Integer) 1;
#line 243 "status.m"
            break;
#line 243 "status.m"
          case (MR_Integer) 8:
#line 253 "status.m"
            parse_tree__status__HeadVar__2_2 = (MR_Integer) 0;
#line 243 "status.m"
            break;
#line 243 "status.m"
        }
#line 243 "status.m"
        break;
#line 243 "status.m"
      case (MR_Integer) 1:
#line 244 "status.m"
        parse_tree__status__HeadVar__2_2 = (MR_Integer) 0;
#line 243 "status.m"
        break;
#line 243 "status.m"
      case (MR_Integer) 2:
#line 243 "status.m"
        parse_tree__status__HeadVar__2_2 = (MR_Integer) 0;
#line 243 "status.m"
        break;
#line 243 "status.m"
    }
#line 243 "status.m"
    return parse_tree__status__HeadVar__2_2;
#line 243 "status.m"
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

	MR_register_type_ctor_info(&parse_tree__status__parse_tree__status__type_ctor_info_import_locn_0);
	MR_register_type_ctor_info(&parse_tree__status__parse_tree__status__type_ctor_info_import_status_0);
	MR_register_type_ctor_info(&parse_tree__status__parse_tree__status__type_ctor_info_int_for_opt_module_section_0);
	MR_register_type_ctor_info(&parse_tree__status__parse_tree__status__type_ctor_info_int_module_section_0);
	MR_register_type_ctor_info(&parse_tree__status__parse_tree__status__type_ctor_info_item_status_0);
	MR_register_type_ctor_info(&parse_tree__status__parse_tree__status__type_ctor_info_module_section_0);
	MR_register_type_ctor_info(&parse_tree__status__parse_tree__status__type_ctor_info_need_qualifier_0);
	MR_register_type_ctor_info(&parse_tree__status__parse_tree__status__type_ctor_info_opt_module_section_0);
	MR_register_type_ctor_info(&parse_tree__status__parse_tree__status__type_ctor_info_src_module_section_0);
}

void mercury__parse_tree__status__init_debugger(void)
{
	MR_fatal_error("debugger initialization in MLDS grade");
}

/* ensure everything is compiled with the same grade */
static const void *const MR_grade = &MR_GRADE_VAR;

/* :- end_module parse_tree.status. */
