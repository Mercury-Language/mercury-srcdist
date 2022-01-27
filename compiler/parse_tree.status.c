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




#line 68 "parse_tree.status.c"
static const MR_EnumFunctorDesc parse_tree__status__parse_tree__status__enum_functor_desc_import_locn_0_0;

#line 71 "parse_tree.status.c"
static const MR_EnumFunctorDesc parse_tree__status__parse_tree__status__enum_functor_desc_import_locn_0_1;

#line 74 "parse_tree.status.c"
static const MR_EnumFunctorDesc parse_tree__status__parse_tree__status__enum_functor_desc_import_locn_0_2;

#line 77 "parse_tree.status.c"
static const MR_EnumFunctorDesc parse_tree__status__parse_tree__status__enum_functor_desc_import_locn_0_3;

#line 80 "parse_tree.status.c"
static const MR_EnumFunctorDescPtr parse_tree__status__parse_tree__status__enum_value_ordered_import_locn_0[4];

#line 83 "parse_tree.status.c"
static const MR_EnumFunctorDescPtr parse_tree__status__parse_tree__status__enum_name_ordered_import_locn_0[4];

#line 86 "parse_tree.status.c"
static const MR_Integer parse_tree__status__parse_tree__status__functor_number_map_import_locn_0[4];

#line 89 "parse_tree.status.c"
static const MR_PseudoTypeInfo parse_tree__status__parse_tree__status__field_types_import_status_0_0[1];

#line 92 "parse_tree.status.c"
static const MR_DuFunctorDesc parse_tree__status__parse_tree__status__du_functor_desc_import_status_0_0;

#line 95 "parse_tree.status.c"
static const MR_PseudoTypeInfo parse_tree__status__parse_tree__status__field_types_import_status_0_1[1];

#line 98 "parse_tree.status.c"
static const MR_DuFunctorDesc parse_tree__status__parse_tree__status__du_functor_desc_import_status_0_1;

#line 101 "parse_tree.status.c"
static const MR_DuFunctorDesc parse_tree__status__parse_tree__status__du_functor_desc_import_status_0_2;

#line 104 "parse_tree.status.c"
static const MR_DuFunctorDesc parse_tree__status__parse_tree__status__du_functor_desc_import_status_0_3;

#line 107 "parse_tree.status.c"
static const MR_DuFunctorDesc parse_tree__status__parse_tree__status__du_functor_desc_import_status_0_4;

#line 110 "parse_tree.status.c"
static const MR_DuFunctorDesc parse_tree__status__parse_tree__status__du_functor_desc_import_status_0_5;

#line 113 "parse_tree.status.c"
static const MR_DuFunctorDesc parse_tree__status__parse_tree__status__du_functor_desc_import_status_0_6;

#line 116 "parse_tree.status.c"
static const MR_DuFunctorDesc parse_tree__status__parse_tree__status__du_functor_desc_import_status_0_7;

#line 119 "parse_tree.status.c"
static const MR_DuFunctorDesc parse_tree__status__parse_tree__status__du_functor_desc_import_status_0_8;

#line 122 "parse_tree.status.c"
static const MR_DuFunctorDesc parse_tree__status__parse_tree__status__du_functor_desc_import_status_0_9;

#line 125 "parse_tree.status.c"
static const MR_DuFunctorDesc parse_tree__status__parse_tree__status__du_functor_desc_import_status_0_10;

#line 128 "parse_tree.status.c"
static const MR_DuFunctorDescPtr parse_tree__status__parse_tree__status__du_stag_ordered_import_status_0_0[9];

#line 131 "parse_tree.status.c"
static const MR_DuFunctorDescPtr parse_tree__status__parse_tree__status__du_stag_ordered_import_status_0_1[1];

#line 134 "parse_tree.status.c"
static const MR_DuFunctorDescPtr parse_tree__status__parse_tree__status__du_stag_ordered_import_status_0_2[1];

#line 137 "parse_tree.status.c"
static const MR_DuPtagLayout parse_tree__status__parse_tree__status__du_ptag_ordered_import_status_0[3];

#line 140 "parse_tree.status.c"
static const MR_DuFunctorDescPtr parse_tree__status__parse_tree__status__du_name_ordered_import_status_0[11];

#line 143 "parse_tree.status.c"
static const MR_Integer parse_tree__status__parse_tree__status__functor_number_map_import_status_0[11];

#line 146 "parse_tree.status.c"
static const MR_PseudoTypeInfo parse_tree__status__parse_tree__status__field_types_int_for_opt_module_section_0_0[2];

#line 149 "parse_tree.status.c"
static const MR_DuFunctorDesc parse_tree__status__parse_tree__status__du_functor_desc_int_for_opt_module_section_0_0;

#line 152 "parse_tree.status.c"
static const MR_DuFunctorDescPtr parse_tree__status__parse_tree__status__du_stag_ordered_int_for_opt_module_section_0_0[1];

#line 155 "parse_tree.status.c"
static const MR_DuPtagLayout parse_tree__status__parse_tree__status__du_ptag_ordered_int_for_opt_module_section_0[1];

#line 158 "parse_tree.status.c"
static const MR_DuFunctorDescPtr parse_tree__status__parse_tree__status__du_name_ordered_int_for_opt_module_section_0[1];

#line 161 "parse_tree.status.c"
static const MR_Integer parse_tree__status__parse_tree__status__functor_number_map_int_for_opt_module_section_0[1];

#line 164 "parse_tree.status.c"
static const MR_PseudoTypeInfo parse_tree__status__parse_tree__status__field_types_int_module_section_0_0[3];

#line 167 "parse_tree.status.c"
static const MR_DuArgLocn parse_tree__status__parse_tree__status__field_locns_int_module_section_0_0[3];

#line 170 "parse_tree.status.c"
static const MR_DuFunctorDesc parse_tree__status__parse_tree__status__du_functor_desc_int_module_section_0_0;

#line 173 "parse_tree.status.c"
static const MR_PseudoTypeInfo parse_tree__status__parse_tree__status__field_types_int_module_section_0_1[3];

#line 176 "parse_tree.status.c"
static const MR_DuArgLocn parse_tree__status__parse_tree__status__field_locns_int_module_section_0_1[3];

#line 179 "parse_tree.status.c"
static const MR_DuFunctorDesc parse_tree__status__parse_tree__status__du_functor_desc_int_module_section_0_1;

#line 182 "parse_tree.status.c"
static const MR_PseudoTypeInfo parse_tree__status__parse_tree__status__field_types_int_module_section_0_2[2];

#line 185 "parse_tree.status.c"
static const MR_DuFunctorDesc parse_tree__status__parse_tree__status__du_functor_desc_int_module_section_0_2;

#line 188 "parse_tree.status.c"
static const MR_DuFunctorDescPtr parse_tree__status__parse_tree__status__du_stag_ordered_int_module_section_0_0[1];

#line 191 "parse_tree.status.c"
static const MR_DuFunctorDescPtr parse_tree__status__parse_tree__status__du_stag_ordered_int_module_section_0_1[1];

#line 194 "parse_tree.status.c"
static const MR_DuFunctorDescPtr parse_tree__status__parse_tree__status__du_stag_ordered_int_module_section_0_2[1];

#line 197 "parse_tree.status.c"
static const MR_DuPtagLayout parse_tree__status__parse_tree__status__du_ptag_ordered_int_module_section_0[3];

#line 200 "parse_tree.status.c"
static const MR_DuFunctorDescPtr parse_tree__status__parse_tree__status__du_name_ordered_int_module_section_0[3];

#line 203 "parse_tree.status.c"
static const MR_Integer parse_tree__status__parse_tree__status__functor_number_map_int_module_section_0[3];

#line 206 "parse_tree.status.c"
static const MR_PseudoTypeInfo parse_tree__status__parse_tree__status__field_types_item_status_0_0[2];

#line 209 "parse_tree.status.c"
static const MR_DuFunctorDesc parse_tree__status__parse_tree__status__du_functor_desc_item_status_0_0;

#line 212 "parse_tree.status.c"
static const MR_DuFunctorDescPtr parse_tree__status__parse_tree__status__du_stag_ordered_item_status_0_0[1];

#line 215 "parse_tree.status.c"
static const MR_DuPtagLayout parse_tree__status__parse_tree__status__du_ptag_ordered_item_status_0[1];

#line 218 "parse_tree.status.c"
static const MR_DuFunctorDescPtr parse_tree__status__parse_tree__status__du_name_ordered_item_status_0[1];

#line 221 "parse_tree.status.c"
static const MR_Integer parse_tree__status__parse_tree__status__functor_number_map_item_status_0[1];

#line 224 "parse_tree.status.c"
static const MR_EnumFunctorDesc parse_tree__status__parse_tree__status__enum_functor_desc_module_section_0_0;

#line 227 "parse_tree.status.c"
static const MR_EnumFunctorDesc parse_tree__status__parse_tree__status__enum_functor_desc_module_section_0_1;

#line 230 "parse_tree.status.c"
static const MR_EnumFunctorDescPtr parse_tree__status__parse_tree__status__enum_value_ordered_module_section_0[2];

#line 233 "parse_tree.status.c"
static const MR_EnumFunctorDescPtr parse_tree__status__parse_tree__status__enum_name_ordered_module_section_0[2];

#line 236 "parse_tree.status.c"
static const MR_Integer parse_tree__status__parse_tree__status__functor_number_map_module_section_0[2];

#line 239 "parse_tree.status.c"
static const MR_EnumFunctorDesc parse_tree__status__parse_tree__status__enum_functor_desc_need_qualifier_0_0;

#line 242 "parse_tree.status.c"
static const MR_EnumFunctorDesc parse_tree__status__parse_tree__status__enum_functor_desc_need_qualifier_0_1;

#line 245 "parse_tree.status.c"
static const MR_EnumFunctorDescPtr parse_tree__status__parse_tree__status__enum_value_ordered_need_qualifier_0[2];

#line 248 "parse_tree.status.c"
static const MR_EnumFunctorDescPtr parse_tree__status__parse_tree__status__enum_name_ordered_need_qualifier_0[2];

#line 251 "parse_tree.status.c"
static const MR_Integer parse_tree__status__parse_tree__status__functor_number_map_need_qualifier_0[2];

#line 254 "parse_tree.status.c"
static const MR_PseudoTypeInfo parse_tree__status__parse_tree__status__field_types_opt_module_section_0_0[2];

#line 257 "parse_tree.status.c"
static const MR_DuFunctorDesc parse_tree__status__parse_tree__status__du_functor_desc_opt_module_section_0_0;

#line 260 "parse_tree.status.c"
static const MR_DuFunctorDescPtr parse_tree__status__parse_tree__status__du_stag_ordered_opt_module_section_0_0[1];

#line 263 "parse_tree.status.c"
static const MR_DuPtagLayout parse_tree__status__parse_tree__status__du_ptag_ordered_opt_module_section_0[1];

#line 266 "parse_tree.status.c"
static const MR_DuFunctorDescPtr parse_tree__status__parse_tree__status__du_name_ordered_opt_module_section_0[1];

#line 269 "parse_tree.status.c"
static const MR_Integer parse_tree__status__parse_tree__status__functor_number_map_opt_module_section_0[1];

#line 272 "parse_tree.status.c"
static const MR_EnumFunctorDesc parse_tree__status__parse_tree__status__enum_functor_desc_src_module_section_0_0;

#line 275 "parse_tree.status.c"
static const MR_EnumFunctorDesc parse_tree__status__parse_tree__status__enum_functor_desc_src_module_section_0_1;

#line 278 "parse_tree.status.c"
static const MR_EnumFunctorDesc parse_tree__status__parse_tree__status__enum_functor_desc_src_module_section_0_2;

#line 281 "parse_tree.status.c"
static const MR_EnumFunctorDescPtr parse_tree__status__parse_tree__status__enum_value_ordered_src_module_section_0[3];

#line 284 "parse_tree.status.c"
static const MR_EnumFunctorDescPtr parse_tree__status__parse_tree__status__enum_name_ordered_src_module_section_0[3];

#line 287 "parse_tree.status.c"
static const MR_Integer parse_tree__status__parse_tree__status__functor_number_map_src_module_section_0[3];

#line 290 "parse_tree.status.c"
static MR_bool MR_CALL 
parse_tree__status____Unify____import_locn_0_0_10001(
#line 293 "parse_tree.status.c"
  MR_Box parse_tree__status__wrapper_arg_1,
#line 295 "parse_tree.status.c"
  MR_Box parse_tree__status__wrapper_arg_2);

#line 298 "parse_tree.status.c"
static void MR_CALL 
parse_tree__status____Compare____import_locn_0_0_10001(
#line 301 "parse_tree.status.c"
  MR_Box * parse_tree__status__wrapper_arg_1,
#line 303 "parse_tree.status.c"
  MR_Box parse_tree__status__wrapper_arg_2,
#line 305 "parse_tree.status.c"
  MR_Box parse_tree__status__wrapper_arg_3);

#line 308 "parse_tree.status.c"
static MR_bool MR_CALL 
parse_tree__status____Unify____import_status_0_0_10001(
#line 311 "parse_tree.status.c"
  MR_Box parse_tree__status__wrapper_arg_1,
#line 313 "parse_tree.status.c"
  MR_Box parse_tree__status__wrapper_arg_2);

#line 316 "parse_tree.status.c"
static void MR_CALL 
parse_tree__status____Compare____import_status_0_0_10001(
#line 319 "parse_tree.status.c"
  MR_Box * parse_tree__status__wrapper_arg_1,
#line 321 "parse_tree.status.c"
  MR_Box parse_tree__status__wrapper_arg_2,
#line 323 "parse_tree.status.c"
  MR_Box parse_tree__status__wrapper_arg_3);

#line 326 "parse_tree.status.c"
static MR_bool MR_CALL 
parse_tree__status____Unify____int_for_opt_module_section_0_0_10001(
#line 329 "parse_tree.status.c"
  MR_Box parse_tree__status__wrapper_arg_1,
#line 331 "parse_tree.status.c"
  MR_Box parse_tree__status__wrapper_arg_2);

#line 334 "parse_tree.status.c"
static void MR_CALL 
parse_tree__status____Compare____int_for_opt_module_section_0_0_10001(
#line 337 "parse_tree.status.c"
  MR_Box * parse_tree__status__wrapper_arg_1,
#line 339 "parse_tree.status.c"
  MR_Box parse_tree__status__wrapper_arg_2,
#line 341 "parse_tree.status.c"
  MR_Box parse_tree__status__wrapper_arg_3);

#line 344 "parse_tree.status.c"
static MR_bool MR_CALL 
parse_tree__status____Unify____int_module_section_0_0_10001(
#line 347 "parse_tree.status.c"
  MR_Box parse_tree__status__wrapper_arg_1,
#line 349 "parse_tree.status.c"
  MR_Box parse_tree__status__wrapper_arg_2);

#line 352 "parse_tree.status.c"
static void MR_CALL 
parse_tree__status____Compare____int_module_section_0_0_10001(
#line 355 "parse_tree.status.c"
  MR_Box * parse_tree__status__wrapper_arg_1,
#line 357 "parse_tree.status.c"
  MR_Box parse_tree__status__wrapper_arg_2,
#line 359 "parse_tree.status.c"
  MR_Box parse_tree__status__wrapper_arg_3);

#line 362 "parse_tree.status.c"
static MR_bool MR_CALL 
parse_tree__status____Unify____item_status_0_0_10001(
#line 365 "parse_tree.status.c"
  MR_Box parse_tree__status__wrapper_arg_1,
#line 367 "parse_tree.status.c"
  MR_Box parse_tree__status__wrapper_arg_2);

#line 370 "parse_tree.status.c"
static void MR_CALL 
parse_tree__status____Compare____item_status_0_0_10001(
#line 373 "parse_tree.status.c"
  MR_Box * parse_tree__status__wrapper_arg_1,
#line 375 "parse_tree.status.c"
  MR_Box parse_tree__status__wrapper_arg_2,
#line 377 "parse_tree.status.c"
  MR_Box parse_tree__status__wrapper_arg_3);

#line 380 "parse_tree.status.c"
static MR_bool MR_CALL 
parse_tree__status____Unify____module_section_0_0_10001(
#line 383 "parse_tree.status.c"
  MR_Box parse_tree__status__wrapper_arg_1,
#line 385 "parse_tree.status.c"
  MR_Box parse_tree__status__wrapper_arg_2);

#line 388 "parse_tree.status.c"
static void MR_CALL 
parse_tree__status____Compare____module_section_0_0_10001(
#line 391 "parse_tree.status.c"
  MR_Box * parse_tree__status__wrapper_arg_1,
#line 393 "parse_tree.status.c"
  MR_Box parse_tree__status__wrapper_arg_2,
#line 395 "parse_tree.status.c"
  MR_Box parse_tree__status__wrapper_arg_3);

#line 398 "parse_tree.status.c"
static MR_bool MR_CALL 
parse_tree__status____Unify____need_qualifier_0_0_10001(
#line 401 "parse_tree.status.c"
  MR_Box parse_tree__status__wrapper_arg_1,
#line 403 "parse_tree.status.c"
  MR_Box parse_tree__status__wrapper_arg_2);

#line 406 "parse_tree.status.c"
static void MR_CALL 
parse_tree__status____Compare____need_qualifier_0_0_10001(
#line 409 "parse_tree.status.c"
  MR_Box * parse_tree__status__wrapper_arg_1,
#line 411 "parse_tree.status.c"
  MR_Box parse_tree__status__wrapper_arg_2,
#line 413 "parse_tree.status.c"
  MR_Box parse_tree__status__wrapper_arg_3);

#line 416 "parse_tree.status.c"
static MR_bool MR_CALL 
parse_tree__status____Unify____opt_module_section_0_0_10001(
#line 419 "parse_tree.status.c"
  MR_Box parse_tree__status__wrapper_arg_1,
#line 421 "parse_tree.status.c"
  MR_Box parse_tree__status__wrapper_arg_2);

#line 424 "parse_tree.status.c"
static void MR_CALL 
parse_tree__status____Compare____opt_module_section_0_0_10001(
#line 427 "parse_tree.status.c"
  MR_Box * parse_tree__status__wrapper_arg_1,
#line 429 "parse_tree.status.c"
  MR_Box parse_tree__status__wrapper_arg_2,
#line 431 "parse_tree.status.c"
  MR_Box parse_tree__status__wrapper_arg_3);

#line 434 "parse_tree.status.c"
static MR_bool MR_CALL 
parse_tree__status____Unify____src_module_section_0_0_10001(
#line 437 "parse_tree.status.c"
  MR_Box parse_tree__status__wrapper_arg_1,
#line 439 "parse_tree.status.c"
  MR_Box parse_tree__status__wrapper_arg_2);

#line 442 "parse_tree.status.c"
static void MR_CALL 
parse_tree__status____Compare____src_module_section_0_0_10001(
#line 445 "parse_tree.status.c"
  MR_Box * parse_tree__status__wrapper_arg_1,
#line 447 "parse_tree.status.c"
  MR_Box parse_tree__status__wrapper_arg_2,
#line 449 "parse_tree.status.c"
  MR_Box parse_tree__status__wrapper_arg_3);


static /* final */ const MR_Box parse_tree__status_scalar_common_2[5][2];


#line 294 "status.m"
/* sealed */ struct parse_tree__status__vector_common_type_1_0_s {
#line 294 "status.m"
  const MR_Word parse_tree__status__vector_common_type_1_0__vct_1_f_0;
#line 294 "status.m"
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
#include "string.mh"
#include "time.mh"



#line 510 "parse_tree.status.c"
static const MR_EnumFunctorDesc parse_tree__status__parse_tree__status__enum_functor_desc_import_locn_0_0 = {
  (MR_String) "import_locn_implementation",
  (MR_Integer) 0
};

#line 516 "parse_tree.status.c"
static const MR_EnumFunctorDesc parse_tree__status__parse_tree__status__enum_functor_desc_import_locn_0_1 = {
  (MR_String) "import_locn_interface",
  (MR_Integer) 1
};

#line 522 "parse_tree.status.c"
static const MR_EnumFunctorDesc parse_tree__status__parse_tree__status__enum_functor_desc_import_locn_0_2 = {
  (MR_String) "import_locn_ancestor",
  (MR_Integer) 2
};

#line 528 "parse_tree.status.c"
static const MR_EnumFunctorDesc parse_tree__status__parse_tree__status__enum_functor_desc_import_locn_0_3 = {
  (MR_String) "import_locn_ancestor_private_interface_proper",
  (MR_Integer) 3
};

#line 534 "parse_tree.status.c"
static const MR_EnumFunctorDescPtr parse_tree__status__parse_tree__status__enum_value_ordered_import_locn_0[4] = {
  &parse_tree__status__parse_tree__status__enum_functor_desc_import_locn_0_0,
  &parse_tree__status__parse_tree__status__enum_functor_desc_import_locn_0_1,
  &parse_tree__status__parse_tree__status__enum_functor_desc_import_locn_0_2,
  &parse_tree__status__parse_tree__status__enum_functor_desc_import_locn_0_3
};

#line 542 "parse_tree.status.c"
static const MR_EnumFunctorDescPtr parse_tree__status__parse_tree__status__enum_name_ordered_import_locn_0[4] = {
  &parse_tree__status__parse_tree__status__enum_functor_desc_import_locn_0_2,
  &parse_tree__status__parse_tree__status__enum_functor_desc_import_locn_0_3,
  &parse_tree__status__parse_tree__status__enum_functor_desc_import_locn_0_0,
  &parse_tree__status__parse_tree__status__enum_functor_desc_import_locn_0_1
};

#line 550 "parse_tree.status.c"
static const MR_Integer parse_tree__status__parse_tree__status__functor_number_map_import_locn_0[4] = {
  (MR_Integer) 2,
  (MR_Integer) 3,
  (MR_Integer) 0,
  (MR_Integer) 1
};

#line 558 "parse_tree.status.c"
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

#line 575 "parse_tree.status.c"
static const MR_PseudoTypeInfo parse_tree__status__parse_tree__status__field_types_import_status_0_0[1] = {
  (MR_PseudoTypeInfo) &parse_tree__status__parse_tree__status__type_ctor_info_import_status_0
};

#line 580 "parse_tree.status.c"
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

#line 595 "parse_tree.status.c"
static const MR_PseudoTypeInfo parse_tree__status__parse_tree__status__field_types_import_status_0_1[1] = {
  (MR_PseudoTypeInfo) &parse_tree__status__parse_tree__status__type_ctor_info_import_locn_0
};

#line 600 "parse_tree.status.c"
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

#line 615 "parse_tree.status.c"
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

#line 630 "parse_tree.status.c"
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

#line 645 "parse_tree.status.c"
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

#line 660 "parse_tree.status.c"
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

#line 675 "parse_tree.status.c"
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

#line 690 "parse_tree.status.c"
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

#line 705 "parse_tree.status.c"
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

#line 720 "parse_tree.status.c"
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

#line 735 "parse_tree.status.c"
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

#line 750 "parse_tree.status.c"
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

#line 763 "parse_tree.status.c"
static const MR_DuFunctorDescPtr parse_tree__status__parse_tree__status__du_stag_ordered_import_status_0_1[1] = {
  &parse_tree__status__parse_tree__status__du_functor_desc_import_status_0_0
};

#line 768 "parse_tree.status.c"
static const MR_DuFunctorDescPtr parse_tree__status__parse_tree__status__du_stag_ordered_import_status_0_2[1] = {
  &parse_tree__status__parse_tree__status__du_functor_desc_import_status_0_1
};

#line 773 "parse_tree.status.c"
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

#line 792 "parse_tree.status.c"
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

#line 807 "parse_tree.status.c"
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

#line 822 "parse_tree.status.c"
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

#line 839 "parse_tree.status.c"
static const MR_PseudoTypeInfo parse_tree__status__parse_tree__status__field_types_int_for_opt_module_section_0_0[2] = {
  (MR_PseudoTypeInfo) &mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0,
  (MR_PseudoTypeInfo) &parse_tree__file_kind__parse_tree__file_kind__type_ctor_info_int_file_kind_0
};

#line 845 "parse_tree.status.c"
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

#line 860 "parse_tree.status.c"
static const MR_DuFunctorDescPtr parse_tree__status__parse_tree__status__du_stag_ordered_int_for_opt_module_section_0_0[1] = {
  &parse_tree__status__parse_tree__status__du_functor_desc_int_for_opt_module_section_0_0
};

#line 865 "parse_tree.status.c"
static const MR_DuPtagLayout parse_tree__status__parse_tree__status__du_ptag_ordered_int_for_opt_module_section_0[1] = {
  {
    (MR_Integer) 1,
    mercury__private_builtin__MR_SECTAG_NONE,
    parse_tree__status__parse_tree__status__du_stag_ordered_int_for_opt_module_section_0_0
  }
};

#line 874 "parse_tree.status.c"
static const MR_DuFunctorDescPtr parse_tree__status__parse_tree__status__du_name_ordered_int_for_opt_module_section_0[1] = {
  &parse_tree__status__parse_tree__status__du_functor_desc_int_for_opt_module_section_0_0
};

#line 879 "parse_tree.status.c"
static const MR_Integer parse_tree__status__parse_tree__status__functor_number_map_int_for_opt_module_section_0[1] = {
  (MR_Integer) 0
};

#line 884 "parse_tree.status.c"
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

#line 901 "parse_tree.status.c"
static const MR_PseudoTypeInfo parse_tree__status__parse_tree__status__field_types_int_module_section_0_0[3] = {
  (MR_PseudoTypeInfo) &mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0,
  (MR_PseudoTypeInfo) &parse_tree__file_kind__parse_tree__file_kind__type_ctor_info_int_file_kind_0,
  (MR_PseudoTypeInfo) &parse_tree__status__parse_tree__status__type_ctor_info_import_locn_0
};

#line 908 "parse_tree.status.c"
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

#line 927 "parse_tree.status.c"
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

#line 942 "parse_tree.status.c"
static const MR_PseudoTypeInfo parse_tree__status__parse_tree__status__field_types_int_module_section_0_1[3] = {
  (MR_PseudoTypeInfo) &mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0,
  (MR_PseudoTypeInfo) &parse_tree__file_kind__parse_tree__file_kind__type_ctor_info_int_file_kind_0,
  (MR_PseudoTypeInfo) &parse_tree__status__parse_tree__status__type_ctor_info_import_locn_0
};

#line 949 "parse_tree.status.c"
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

#line 968 "parse_tree.status.c"
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

#line 983 "parse_tree.status.c"
static const MR_PseudoTypeInfo parse_tree__status__parse_tree__status__field_types_int_module_section_0_2[2] = {
  (MR_PseudoTypeInfo) &mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0,
  (MR_PseudoTypeInfo) &parse_tree__file_kind__parse_tree__file_kind__type_ctor_info_int_file_kind_0
};

#line 989 "parse_tree.status.c"
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

#line 1004 "parse_tree.status.c"
static const MR_DuFunctorDescPtr parse_tree__status__parse_tree__status__du_stag_ordered_int_module_section_0_0[1] = {
  &parse_tree__status__parse_tree__status__du_functor_desc_int_module_section_0_0
};

#line 1009 "parse_tree.status.c"
static const MR_DuFunctorDescPtr parse_tree__status__parse_tree__status__du_stag_ordered_int_module_section_0_1[1] = {
  &parse_tree__status__parse_tree__status__du_functor_desc_int_module_section_0_1
};

#line 1014 "parse_tree.status.c"
static const MR_DuFunctorDescPtr parse_tree__status__parse_tree__status__du_stag_ordered_int_module_section_0_2[1] = {
  &parse_tree__status__parse_tree__status__du_functor_desc_int_module_section_0_2
};

#line 1019 "parse_tree.status.c"
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

#line 1038 "parse_tree.status.c"
static const MR_DuFunctorDescPtr parse_tree__status__parse_tree__status__du_name_ordered_int_module_section_0[3] = {
  &parse_tree__status__parse_tree__status__du_functor_desc_int_module_section_0_2,
  &parse_tree__status__parse_tree__status__du_functor_desc_int_module_section_0_0,
  &parse_tree__status__parse_tree__status__du_functor_desc_int_module_section_0_1
};

#line 1045 "parse_tree.status.c"
static const MR_Integer parse_tree__status__parse_tree__status__functor_number_map_int_module_section_0[3] = {
  (MR_Integer) 1,
  (MR_Integer) 2,
  (MR_Integer) 0
};

#line 1052 "parse_tree.status.c"
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

#line 1069 "parse_tree.status.c"
static const MR_PseudoTypeInfo parse_tree__status__parse_tree__status__field_types_item_status_0_0[2] = {
  (MR_PseudoTypeInfo) &parse_tree__status__parse_tree__status__type_ctor_info_import_status_0,
  (MR_PseudoTypeInfo) &parse_tree__status__parse_tree__status__type_ctor_info_need_qualifier_0
};

#line 1075 "parse_tree.status.c"
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

#line 1090 "parse_tree.status.c"
static const MR_DuFunctorDescPtr parse_tree__status__parse_tree__status__du_stag_ordered_item_status_0_0[1] = {
  &parse_tree__status__parse_tree__status__du_functor_desc_item_status_0_0
};

#line 1095 "parse_tree.status.c"
static const MR_DuPtagLayout parse_tree__status__parse_tree__status__du_ptag_ordered_item_status_0[1] = {
  {
    (MR_Integer) 1,
    mercury__private_builtin__MR_SECTAG_NONE,
    parse_tree__status__parse_tree__status__du_stag_ordered_item_status_0_0
  }
};

#line 1104 "parse_tree.status.c"
static const MR_DuFunctorDescPtr parse_tree__status__parse_tree__status__du_name_ordered_item_status_0[1] = {
  &parse_tree__status__parse_tree__status__du_functor_desc_item_status_0_0
};

#line 1109 "parse_tree.status.c"
static const MR_Integer parse_tree__status__parse_tree__status__functor_number_map_item_status_0[1] = {
  (MR_Integer) 0
};

#line 1114 "parse_tree.status.c"
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

#line 1131 "parse_tree.status.c"
static const MR_EnumFunctorDesc parse_tree__status__parse_tree__status__enum_functor_desc_module_section_0_0 = {
  (MR_String) "ms_interface",
  (MR_Integer) 0
};

#line 1137 "parse_tree.status.c"
static const MR_EnumFunctorDesc parse_tree__status__parse_tree__status__enum_functor_desc_module_section_0_1 = {
  (MR_String) "ms_implementation",
  (MR_Integer) 1
};

#line 1143 "parse_tree.status.c"
static const MR_EnumFunctorDescPtr parse_tree__status__parse_tree__status__enum_value_ordered_module_section_0[2] = {
  &parse_tree__status__parse_tree__status__enum_functor_desc_module_section_0_0,
  &parse_tree__status__parse_tree__status__enum_functor_desc_module_section_0_1
};

#line 1149 "parse_tree.status.c"
static const MR_EnumFunctorDescPtr parse_tree__status__parse_tree__status__enum_name_ordered_module_section_0[2] = {
  &parse_tree__status__parse_tree__status__enum_functor_desc_module_section_0_1,
  &parse_tree__status__parse_tree__status__enum_functor_desc_module_section_0_0
};

#line 1155 "parse_tree.status.c"
static const MR_Integer parse_tree__status__parse_tree__status__functor_number_map_module_section_0[2] = {
  (MR_Integer) 1,
  (MR_Integer) 0
};

#line 1161 "parse_tree.status.c"
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

#line 1178 "parse_tree.status.c"
static const MR_EnumFunctorDesc parse_tree__status__parse_tree__status__enum_functor_desc_need_qualifier_0_0 = {
  (MR_String) "must_be_qualified",
  (MR_Integer) 0
};

#line 1184 "parse_tree.status.c"
static const MR_EnumFunctorDesc parse_tree__status__parse_tree__status__enum_functor_desc_need_qualifier_0_1 = {
  (MR_String) "may_be_unqualified",
  (MR_Integer) 1
};

#line 1190 "parse_tree.status.c"
static const MR_EnumFunctorDescPtr parse_tree__status__parse_tree__status__enum_value_ordered_need_qualifier_0[2] = {
  &parse_tree__status__parse_tree__status__enum_functor_desc_need_qualifier_0_0,
  &parse_tree__status__parse_tree__status__enum_functor_desc_need_qualifier_0_1
};

#line 1196 "parse_tree.status.c"
static const MR_EnumFunctorDescPtr parse_tree__status__parse_tree__status__enum_name_ordered_need_qualifier_0[2] = {
  &parse_tree__status__parse_tree__status__enum_functor_desc_need_qualifier_0_1,
  &parse_tree__status__parse_tree__status__enum_functor_desc_need_qualifier_0_0
};

#line 1202 "parse_tree.status.c"
static const MR_Integer parse_tree__status__parse_tree__status__functor_number_map_need_qualifier_0[2] = {
  (MR_Integer) 1,
  (MR_Integer) 0
};

#line 1208 "parse_tree.status.c"
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

#line 1225 "parse_tree.status.c"
static const MR_PseudoTypeInfo parse_tree__status__parse_tree__status__field_types_opt_module_section_0_0[2] = {
  (MR_PseudoTypeInfo) &mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0,
  (MR_PseudoTypeInfo) &parse_tree__file_kind__parse_tree__file_kind__type_ctor_info_opt_file_kind_0
};

#line 1231 "parse_tree.status.c"
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

#line 1246 "parse_tree.status.c"
static const MR_DuFunctorDescPtr parse_tree__status__parse_tree__status__du_stag_ordered_opt_module_section_0_0[1] = {
  &parse_tree__status__parse_tree__status__du_functor_desc_opt_module_section_0_0
};

#line 1251 "parse_tree.status.c"
static const MR_DuPtagLayout parse_tree__status__parse_tree__status__du_ptag_ordered_opt_module_section_0[1] = {
  {
    (MR_Integer) 1,
    mercury__private_builtin__MR_SECTAG_NONE,
    parse_tree__status__parse_tree__status__du_stag_ordered_opt_module_section_0_0
  }
};

#line 1260 "parse_tree.status.c"
static const MR_DuFunctorDescPtr parse_tree__status__parse_tree__status__du_name_ordered_opt_module_section_0[1] = {
  &parse_tree__status__parse_tree__status__du_functor_desc_opt_module_section_0_0
};

#line 1265 "parse_tree.status.c"
static const MR_Integer parse_tree__status__parse_tree__status__functor_number_map_opt_module_section_0[1] = {
  (MR_Integer) 0
};

#line 1270 "parse_tree.status.c"
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

#line 1287 "parse_tree.status.c"
static const MR_EnumFunctorDesc parse_tree__status__parse_tree__status__enum_functor_desc_src_module_section_0_0 = {
  (MR_String) "sms_interface",
  (MR_Integer) 0
};

#line 1293 "parse_tree.status.c"
static const MR_EnumFunctorDesc parse_tree__status__parse_tree__status__enum_functor_desc_src_module_section_0_1 = {
  (MR_String) "sms_implementation",
  (MR_Integer) 1
};

#line 1299 "parse_tree.status.c"
static const MR_EnumFunctorDesc parse_tree__status__parse_tree__status__enum_functor_desc_src_module_section_0_2 = {
  (MR_String) "sms_impl_but_exported_to_submodules",
  (MR_Integer) 2
};

#line 1305 "parse_tree.status.c"
static const MR_EnumFunctorDescPtr parse_tree__status__parse_tree__status__enum_value_ordered_src_module_section_0[3] = {
  &parse_tree__status__parse_tree__status__enum_functor_desc_src_module_section_0_0,
  &parse_tree__status__parse_tree__status__enum_functor_desc_src_module_section_0_1,
  &parse_tree__status__parse_tree__status__enum_functor_desc_src_module_section_0_2
};

#line 1312 "parse_tree.status.c"
static const MR_EnumFunctorDescPtr parse_tree__status__parse_tree__status__enum_name_ordered_src_module_section_0[3] = {
  &parse_tree__status__parse_tree__status__enum_functor_desc_src_module_section_0_2,
  &parse_tree__status__parse_tree__status__enum_functor_desc_src_module_section_0_1,
  &parse_tree__status__parse_tree__status__enum_functor_desc_src_module_section_0_0
};

#line 1319 "parse_tree.status.c"
static const MR_Integer parse_tree__status__parse_tree__status__functor_number_map_src_module_section_0[3] = {
  (MR_Integer) 2,
  (MR_Integer) 1,
  (MR_Integer) 0
};

#line 1326 "parse_tree.status.c"
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

#line 1343 "parse_tree.status.c"
static MR_bool MR_CALL 
parse_tree__status____Unify____import_locn_0_0_10001(
#line 1346 "parse_tree.status.c"
  MR_Box parse_tree__status__wrapper_arg_1,
#line 1348 "parse_tree.status.c"
  MR_Box parse_tree__status__wrapper_arg_2)
#line 1350 "parse_tree.status.c"
{
#line 1352 "parse_tree.status.c"
  {
#line 1354 "parse_tree.status.c"
    MR_bool parse_tree__status__succeeded;

#line 1357 "parse_tree.status.c"
    {
#line 1359 "parse_tree.status.c"
      parse_tree__status__succeeded = parse_tree__status____Unify____import_locn_0_0(((MR_Word) parse_tree__status__wrapper_arg_1), ((MR_Word) parse_tree__status__wrapper_arg_2));
    }
#line 1362 "parse_tree.status.c"
    return parse_tree__status__succeeded;
#line 1364 "parse_tree.status.c"
  }
#line 1366 "parse_tree.status.c"
}

#line 1369 "parse_tree.status.c"
static void MR_CALL 
parse_tree__status____Compare____import_locn_0_0_10001(
#line 1372 "parse_tree.status.c"
  MR_Box * parse_tree__status__wrapper_arg_1,
#line 1374 "parse_tree.status.c"
  MR_Box parse_tree__status__wrapper_arg_2,
#line 1376 "parse_tree.status.c"
  MR_Box parse_tree__status__wrapper_arg_3)
#line 1378 "parse_tree.status.c"
{
#line 1380 "parse_tree.status.c"
  {
#line 1382 "parse_tree.status.c"
    MR_Word parse_tree__status__conv0_HeadVar__1_1;

#line 1385 "parse_tree.status.c"
    {
#line 1387 "parse_tree.status.c"
      parse_tree__status____Compare____import_locn_0_0(&parse_tree__status__conv0_HeadVar__1_1, ((MR_Word) parse_tree__status__wrapper_arg_2), ((MR_Word) parse_tree__status__wrapper_arg_3));
    }
#line 1390 "parse_tree.status.c"
    *parse_tree__status__wrapper_arg_1 = ((MR_Box) (parse_tree__status__conv0_HeadVar__1_1));
#line 1392 "parse_tree.status.c"
  }
#line 1394 "parse_tree.status.c"
}

#line 1397 "parse_tree.status.c"
static MR_bool MR_CALL 
parse_tree__status____Unify____import_status_0_0_10001(
#line 1400 "parse_tree.status.c"
  MR_Box parse_tree__status__wrapper_arg_1,
#line 1402 "parse_tree.status.c"
  MR_Box parse_tree__status__wrapper_arg_2)
#line 1404 "parse_tree.status.c"
{
#line 1406 "parse_tree.status.c"
  {
#line 1408 "parse_tree.status.c"
    MR_bool parse_tree__status__succeeded;

#line 1411 "parse_tree.status.c"
    {
#line 1413 "parse_tree.status.c"
      parse_tree__status__succeeded = parse_tree__status____Unify____import_status_0_0(((MR_Word) parse_tree__status__wrapper_arg_1), ((MR_Word) parse_tree__status__wrapper_arg_2));
    }
#line 1416 "parse_tree.status.c"
    return parse_tree__status__succeeded;
#line 1418 "parse_tree.status.c"
  }
#line 1420 "parse_tree.status.c"
}

#line 1423 "parse_tree.status.c"
static void MR_CALL 
parse_tree__status____Compare____import_status_0_0_10001(
#line 1426 "parse_tree.status.c"
  MR_Box * parse_tree__status__wrapper_arg_1,
#line 1428 "parse_tree.status.c"
  MR_Box parse_tree__status__wrapper_arg_2,
#line 1430 "parse_tree.status.c"
  MR_Box parse_tree__status__wrapper_arg_3)
#line 1432 "parse_tree.status.c"
{
#line 1434 "parse_tree.status.c"
  {
#line 1436 "parse_tree.status.c"
    MR_Word parse_tree__status__conv0_HeadVar__1_1;

#line 1439 "parse_tree.status.c"
    {
#line 1441 "parse_tree.status.c"
      parse_tree__status____Compare____import_status_0_0(&parse_tree__status__conv0_HeadVar__1_1, ((MR_Word) parse_tree__status__wrapper_arg_2), ((MR_Word) parse_tree__status__wrapper_arg_3));
    }
#line 1444 "parse_tree.status.c"
    *parse_tree__status__wrapper_arg_1 = ((MR_Box) (parse_tree__status__conv0_HeadVar__1_1));
#line 1446 "parse_tree.status.c"
  }
#line 1448 "parse_tree.status.c"
}

#line 1451 "parse_tree.status.c"
static MR_bool MR_CALL 
parse_tree__status____Unify____int_for_opt_module_section_0_0_10001(
#line 1454 "parse_tree.status.c"
  MR_Box parse_tree__status__wrapper_arg_1,
#line 1456 "parse_tree.status.c"
  MR_Box parse_tree__status__wrapper_arg_2)
#line 1458 "parse_tree.status.c"
{
#line 1460 "parse_tree.status.c"
  {
#line 1462 "parse_tree.status.c"
    MR_bool parse_tree__status__succeeded;

#line 1465 "parse_tree.status.c"
    {
#line 1467 "parse_tree.status.c"
      parse_tree__status__succeeded = parse_tree__status____Unify____int_for_opt_module_section_0_0(((MR_Word) parse_tree__status__wrapper_arg_1), ((MR_Word) parse_tree__status__wrapper_arg_2));
    }
#line 1470 "parse_tree.status.c"
    return parse_tree__status__succeeded;
#line 1472 "parse_tree.status.c"
  }
#line 1474 "parse_tree.status.c"
}

#line 1477 "parse_tree.status.c"
static void MR_CALL 
parse_tree__status____Compare____int_for_opt_module_section_0_0_10001(
#line 1480 "parse_tree.status.c"
  MR_Box * parse_tree__status__wrapper_arg_1,
#line 1482 "parse_tree.status.c"
  MR_Box parse_tree__status__wrapper_arg_2,
#line 1484 "parse_tree.status.c"
  MR_Box parse_tree__status__wrapper_arg_3)
#line 1486 "parse_tree.status.c"
{
#line 1488 "parse_tree.status.c"
  {
#line 1490 "parse_tree.status.c"
    MR_Word parse_tree__status__conv0_HeadVar__1_1;

#line 1493 "parse_tree.status.c"
    {
#line 1495 "parse_tree.status.c"
      parse_tree__status____Compare____int_for_opt_module_section_0_0(&parse_tree__status__conv0_HeadVar__1_1, ((MR_Word) parse_tree__status__wrapper_arg_2), ((MR_Word) parse_tree__status__wrapper_arg_3));
    }
#line 1498 "parse_tree.status.c"
    *parse_tree__status__wrapper_arg_1 = ((MR_Box) (parse_tree__status__conv0_HeadVar__1_1));
#line 1500 "parse_tree.status.c"
  }
#line 1502 "parse_tree.status.c"
}

#line 1505 "parse_tree.status.c"
static MR_bool MR_CALL 
parse_tree__status____Unify____int_module_section_0_0_10001(
#line 1508 "parse_tree.status.c"
  MR_Box parse_tree__status__wrapper_arg_1,
#line 1510 "parse_tree.status.c"
  MR_Box parse_tree__status__wrapper_arg_2)
#line 1512 "parse_tree.status.c"
{
#line 1514 "parse_tree.status.c"
  {
#line 1516 "parse_tree.status.c"
    MR_bool parse_tree__status__succeeded;

#line 1519 "parse_tree.status.c"
    {
#line 1521 "parse_tree.status.c"
      parse_tree__status__succeeded = parse_tree__status____Unify____int_module_section_0_0(((MR_Word) parse_tree__status__wrapper_arg_1), ((MR_Word) parse_tree__status__wrapper_arg_2));
    }
#line 1524 "parse_tree.status.c"
    return parse_tree__status__succeeded;
#line 1526 "parse_tree.status.c"
  }
#line 1528 "parse_tree.status.c"
}

#line 1531 "parse_tree.status.c"
static void MR_CALL 
parse_tree__status____Compare____int_module_section_0_0_10001(
#line 1534 "parse_tree.status.c"
  MR_Box * parse_tree__status__wrapper_arg_1,
#line 1536 "parse_tree.status.c"
  MR_Box parse_tree__status__wrapper_arg_2,
#line 1538 "parse_tree.status.c"
  MR_Box parse_tree__status__wrapper_arg_3)
#line 1540 "parse_tree.status.c"
{
#line 1542 "parse_tree.status.c"
  {
#line 1544 "parse_tree.status.c"
    MR_Word parse_tree__status__conv0_HeadVar__1_1;

#line 1547 "parse_tree.status.c"
    {
#line 1549 "parse_tree.status.c"
      parse_tree__status____Compare____int_module_section_0_0(&parse_tree__status__conv0_HeadVar__1_1, ((MR_Word) parse_tree__status__wrapper_arg_2), ((MR_Word) parse_tree__status__wrapper_arg_3));
    }
#line 1552 "parse_tree.status.c"
    *parse_tree__status__wrapper_arg_1 = ((MR_Box) (parse_tree__status__conv0_HeadVar__1_1));
#line 1554 "parse_tree.status.c"
  }
#line 1556 "parse_tree.status.c"
}

#line 1559 "parse_tree.status.c"
static MR_bool MR_CALL 
parse_tree__status____Unify____item_status_0_0_10001(
#line 1562 "parse_tree.status.c"
  MR_Box parse_tree__status__wrapper_arg_1,
#line 1564 "parse_tree.status.c"
  MR_Box parse_tree__status__wrapper_arg_2)
#line 1566 "parse_tree.status.c"
{
#line 1568 "parse_tree.status.c"
  {
#line 1570 "parse_tree.status.c"
    MR_bool parse_tree__status__succeeded;

#line 1573 "parse_tree.status.c"
    {
#line 1575 "parse_tree.status.c"
      parse_tree__status__succeeded = parse_tree__status____Unify____item_status_0_0(((MR_Word) parse_tree__status__wrapper_arg_1), ((MR_Word) parse_tree__status__wrapper_arg_2));
    }
#line 1578 "parse_tree.status.c"
    return parse_tree__status__succeeded;
#line 1580 "parse_tree.status.c"
  }
#line 1582 "parse_tree.status.c"
}

#line 1585 "parse_tree.status.c"
static void MR_CALL 
parse_tree__status____Compare____item_status_0_0_10001(
#line 1588 "parse_tree.status.c"
  MR_Box * parse_tree__status__wrapper_arg_1,
#line 1590 "parse_tree.status.c"
  MR_Box parse_tree__status__wrapper_arg_2,
#line 1592 "parse_tree.status.c"
  MR_Box parse_tree__status__wrapper_arg_3)
#line 1594 "parse_tree.status.c"
{
#line 1596 "parse_tree.status.c"
  {
#line 1598 "parse_tree.status.c"
    MR_Word parse_tree__status__conv0_HeadVar__1_1;

#line 1601 "parse_tree.status.c"
    {
#line 1603 "parse_tree.status.c"
      parse_tree__status____Compare____item_status_0_0(&parse_tree__status__conv0_HeadVar__1_1, ((MR_Word) parse_tree__status__wrapper_arg_2), ((MR_Word) parse_tree__status__wrapper_arg_3));
    }
#line 1606 "parse_tree.status.c"
    *parse_tree__status__wrapper_arg_1 = ((MR_Box) (parse_tree__status__conv0_HeadVar__1_1));
#line 1608 "parse_tree.status.c"
  }
#line 1610 "parse_tree.status.c"
}

#line 1613 "parse_tree.status.c"
static MR_bool MR_CALL 
parse_tree__status____Unify____module_section_0_0_10001(
#line 1616 "parse_tree.status.c"
  MR_Box parse_tree__status__wrapper_arg_1,
#line 1618 "parse_tree.status.c"
  MR_Box parse_tree__status__wrapper_arg_2)
#line 1620 "parse_tree.status.c"
{
#line 1622 "parse_tree.status.c"
  {
#line 1624 "parse_tree.status.c"
    MR_bool parse_tree__status__succeeded;

#line 1627 "parse_tree.status.c"
    {
#line 1629 "parse_tree.status.c"
      parse_tree__status__succeeded = parse_tree__status____Unify____module_section_0_0(((MR_Word) parse_tree__status__wrapper_arg_1), ((MR_Word) parse_tree__status__wrapper_arg_2));
    }
#line 1632 "parse_tree.status.c"
    return parse_tree__status__succeeded;
#line 1634 "parse_tree.status.c"
  }
#line 1636 "parse_tree.status.c"
}

#line 1639 "parse_tree.status.c"
static void MR_CALL 
parse_tree__status____Compare____module_section_0_0_10001(
#line 1642 "parse_tree.status.c"
  MR_Box * parse_tree__status__wrapper_arg_1,
#line 1644 "parse_tree.status.c"
  MR_Box parse_tree__status__wrapper_arg_2,
#line 1646 "parse_tree.status.c"
  MR_Box parse_tree__status__wrapper_arg_3)
#line 1648 "parse_tree.status.c"
{
#line 1650 "parse_tree.status.c"
  {
#line 1652 "parse_tree.status.c"
    MR_Word parse_tree__status__conv0_HeadVar__1_1;

#line 1655 "parse_tree.status.c"
    {
#line 1657 "parse_tree.status.c"
      parse_tree__status____Compare____module_section_0_0(&parse_tree__status__conv0_HeadVar__1_1, ((MR_Word) parse_tree__status__wrapper_arg_2), ((MR_Word) parse_tree__status__wrapper_arg_3));
    }
#line 1660 "parse_tree.status.c"
    *parse_tree__status__wrapper_arg_1 = ((MR_Box) (parse_tree__status__conv0_HeadVar__1_1));
#line 1662 "parse_tree.status.c"
  }
#line 1664 "parse_tree.status.c"
}

#line 1667 "parse_tree.status.c"
static MR_bool MR_CALL 
parse_tree__status____Unify____need_qualifier_0_0_10001(
#line 1670 "parse_tree.status.c"
  MR_Box parse_tree__status__wrapper_arg_1,
#line 1672 "parse_tree.status.c"
  MR_Box parse_tree__status__wrapper_arg_2)
#line 1674 "parse_tree.status.c"
{
#line 1676 "parse_tree.status.c"
  {
#line 1678 "parse_tree.status.c"
    MR_bool parse_tree__status__succeeded;

#line 1681 "parse_tree.status.c"
    {
#line 1683 "parse_tree.status.c"
      parse_tree__status__succeeded = parse_tree__status____Unify____need_qualifier_0_0(((MR_Word) parse_tree__status__wrapper_arg_1), ((MR_Word) parse_tree__status__wrapper_arg_2));
    }
#line 1686 "parse_tree.status.c"
    return parse_tree__status__succeeded;
#line 1688 "parse_tree.status.c"
  }
#line 1690 "parse_tree.status.c"
}

#line 1693 "parse_tree.status.c"
static void MR_CALL 
parse_tree__status____Compare____need_qualifier_0_0_10001(
#line 1696 "parse_tree.status.c"
  MR_Box * parse_tree__status__wrapper_arg_1,
#line 1698 "parse_tree.status.c"
  MR_Box parse_tree__status__wrapper_arg_2,
#line 1700 "parse_tree.status.c"
  MR_Box parse_tree__status__wrapper_arg_3)
#line 1702 "parse_tree.status.c"
{
#line 1704 "parse_tree.status.c"
  {
#line 1706 "parse_tree.status.c"
    MR_Word parse_tree__status__conv0_HeadVar__1_1;

#line 1709 "parse_tree.status.c"
    {
#line 1711 "parse_tree.status.c"
      parse_tree__status____Compare____need_qualifier_0_0(&parse_tree__status__conv0_HeadVar__1_1, ((MR_Word) parse_tree__status__wrapper_arg_2), ((MR_Word) parse_tree__status__wrapper_arg_3));
    }
#line 1714 "parse_tree.status.c"
    *parse_tree__status__wrapper_arg_1 = ((MR_Box) (parse_tree__status__conv0_HeadVar__1_1));
#line 1716 "parse_tree.status.c"
  }
#line 1718 "parse_tree.status.c"
}

#line 1721 "parse_tree.status.c"
static MR_bool MR_CALL 
parse_tree__status____Unify____opt_module_section_0_0_10001(
#line 1724 "parse_tree.status.c"
  MR_Box parse_tree__status__wrapper_arg_1,
#line 1726 "parse_tree.status.c"
  MR_Box parse_tree__status__wrapper_arg_2)
#line 1728 "parse_tree.status.c"
{
#line 1730 "parse_tree.status.c"
  {
#line 1732 "parse_tree.status.c"
    MR_bool parse_tree__status__succeeded;

#line 1735 "parse_tree.status.c"
    {
#line 1737 "parse_tree.status.c"
      parse_tree__status__succeeded = parse_tree__status____Unify____opt_module_section_0_0(((MR_Word) parse_tree__status__wrapper_arg_1), ((MR_Word) parse_tree__status__wrapper_arg_2));
    }
#line 1740 "parse_tree.status.c"
    return parse_tree__status__succeeded;
#line 1742 "parse_tree.status.c"
  }
#line 1744 "parse_tree.status.c"
}

#line 1747 "parse_tree.status.c"
static void MR_CALL 
parse_tree__status____Compare____opt_module_section_0_0_10001(
#line 1750 "parse_tree.status.c"
  MR_Box * parse_tree__status__wrapper_arg_1,
#line 1752 "parse_tree.status.c"
  MR_Box parse_tree__status__wrapper_arg_2,
#line 1754 "parse_tree.status.c"
  MR_Box parse_tree__status__wrapper_arg_3)
#line 1756 "parse_tree.status.c"
{
#line 1758 "parse_tree.status.c"
  {
#line 1760 "parse_tree.status.c"
    MR_Word parse_tree__status__conv0_HeadVar__1_1;

#line 1763 "parse_tree.status.c"
    {
#line 1765 "parse_tree.status.c"
      parse_tree__status____Compare____opt_module_section_0_0(&parse_tree__status__conv0_HeadVar__1_1, ((MR_Word) parse_tree__status__wrapper_arg_2), ((MR_Word) parse_tree__status__wrapper_arg_3));
    }
#line 1768 "parse_tree.status.c"
    *parse_tree__status__wrapper_arg_1 = ((MR_Box) (parse_tree__status__conv0_HeadVar__1_1));
#line 1770 "parse_tree.status.c"
  }
#line 1772 "parse_tree.status.c"
}

#line 1775 "parse_tree.status.c"
static MR_bool MR_CALL 
parse_tree__status____Unify____src_module_section_0_0_10001(
#line 1778 "parse_tree.status.c"
  MR_Box parse_tree__status__wrapper_arg_1,
#line 1780 "parse_tree.status.c"
  MR_Box parse_tree__status__wrapper_arg_2)
#line 1782 "parse_tree.status.c"
{
#line 1784 "parse_tree.status.c"
  {
#line 1786 "parse_tree.status.c"
    MR_bool parse_tree__status__succeeded;

#line 1789 "parse_tree.status.c"
    {
#line 1791 "parse_tree.status.c"
      parse_tree__status__succeeded = parse_tree__status____Unify____src_module_section_0_0(((MR_Word) parse_tree__status__wrapper_arg_1), ((MR_Word) parse_tree__status__wrapper_arg_2));
    }
#line 1794 "parse_tree.status.c"
    return parse_tree__status__succeeded;
#line 1796 "parse_tree.status.c"
  }
#line 1798 "parse_tree.status.c"
}

#line 1801 "parse_tree.status.c"
static void MR_CALL 
parse_tree__status____Compare____src_module_section_0_0_10001(
#line 1804 "parse_tree.status.c"
  MR_Box * parse_tree__status__wrapper_arg_1,
#line 1806 "parse_tree.status.c"
  MR_Box parse_tree__status__wrapper_arg_2,
#line 1808 "parse_tree.status.c"
  MR_Box parse_tree__status__wrapper_arg_3)
#line 1810 "parse_tree.status.c"
{
#line 1812 "parse_tree.status.c"
  {
#line 1814 "parse_tree.status.c"
    MR_Word parse_tree__status__conv0_HeadVar__1_1;

#line 1817 "parse_tree.status.c"
    {
#line 1819 "parse_tree.status.c"
      parse_tree__status____Compare____src_module_section_0_0(&parse_tree__status__conv0_HeadVar__1_1, ((MR_Word) parse_tree__status__wrapper_arg_2), ((MR_Word) parse_tree__status__wrapper_arg_3));
    }
#line 1822 "parse_tree.status.c"
    *parse_tree__status__wrapper_arg_1 = ((MR_Box) (parse_tree__status__conv0_HeadVar__1_1));
#line 1824 "parse_tree.status.c"
  }
#line 1826 "parse_tree.status.c"
}

#line 234 "status.m"
void MR_CALL 
parse_tree__status__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_105_110_116_95_102_111_114_95_111_112_116_95_109_111_100_117_108_101_95_115_101_99_116_105_111_110_95_115_116_97_116_117_115_95_95_91_49_93_95_48_2_p_0(
#line 234 "status.m"
  MR_Word * parse_tree__status__Status_4)
#line 234 "status.m"
{
#line 347 "status.m"
  {
#line 347 "status.m"
    MR_bool parse_tree__status__succeeded;

#line 350 "status.m"
    *parse_tree__status__Status_4 = (MR_Word) &parse_tree__status_scalar_common_2[4];
#line 347 "status.m"
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
#line 341 "status.m"
  {
#line 341 "status.m"
    MR_bool parse_tree__status__succeeded;

#line 344 "status.m"
    *parse_tree__status__Status_4 = (MR_Word) &parse_tree__status_scalar_common_2[4];
#line 341 "status.m"
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
#line 1908 "parse_tree.status.c"
  {
#line 1910 "parse_tree.status.c"
    MR_bool parse_tree__status__succeeded = (parse_tree__status__HeadVar__2_1 == parse_tree__status__HeadVar__2_2);

#line 1913 "parse_tree.status.c"
    return parse_tree__status__succeeded;
#line 1915 "parse_tree.status.c"
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
#line 1944 "parse_tree.status.c"
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
#line 1966 "parse_tree.status.c"
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

#line 2036 "parse_tree.status.c"
        {
#line 2038 "parse_tree.status.c"
          parse_tree__status__succeeded = mdbcomp__sym_name____Unify____sym_name_0_0(parse_tree__status__V_3_3, parse_tree__status__V_5_5);
        }
#line 201 "status.m"
        if (parse_tree__status__succeeded)
#line 2043 "parse_tree.status.c"
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
#line 2095 "parse_tree.status.c"
  {
#line 2097 "parse_tree.status.c"
    MR_bool parse_tree__status__succeeded = (parse_tree__status__HeadVar__2_1 == parse_tree__status__HeadVar__2_2);

#line 2100 "parse_tree.status.c"
    return parse_tree__status__succeeded;
#line 2102 "parse_tree.status.c"
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
#line 2148 "parse_tree.status.c"
  {
#line 2150 "parse_tree.status.c"
    MR_bool parse_tree__status__succeeded = (parse_tree__status__HeadVar__2_1 == parse_tree__status__HeadVar__2_2);

#line 2153 "parse_tree.status.c"
    return parse_tree__status__succeeded;
#line 2155 "parse_tree.status.c"
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
#line 2184 "parse_tree.status.c"
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
#line 2206 "parse_tree.status.c"
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

#line 2276 "parse_tree.status.c"
        {
#line 2278 "parse_tree.status.c"
          parse_tree__status__succeeded = parse_tree__status____Unify____import_status_0_0(parse_tree__status__V_3_3, parse_tree__status__V_5_5);
        }
#line 168 "status.m"
        if (parse_tree__status__succeeded)
#line 2283 "parse_tree.status.c"
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
#line 2318 "parse_tree.status.c"
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
#line 2361 "parse_tree.status.c"
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
#line 2385 "parse_tree.status.c"
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
#line 2419 "parse_tree.status.c"
                *parse_tree__status__HeadVar__1_1 = (MR_Integer) 1;
#line 186 "status.m"
                break;
#line 186 "status.m"
              case (MR_Integer) 2:
#line 2425 "parse_tree.status.c"
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
#line 2453 "parse_tree.status.c"
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
#line 2475 "parse_tree.status.c"
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
#line 2499 "parse_tree.status.c"
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
#line 2533 "parse_tree.status.c"
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
#line 2559 "parse_tree.status.c"
                *parse_tree__status__HeadVar__1_1 = (MR_Integer) 2;
#line 186 "status.m"
                break;
#line 186 "status.m"
              case (MR_Integer) 1:
#line 2565 "parse_tree.status.c"
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
#line 2585 "parse_tree.status.c"
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
#line 2688 "parse_tree.status.c"
                {
#line 2690 "parse_tree.status.c"
                  parse_tree__status__succeeded = mdbcomp__sym_name____Unify____sym_name_0_0(parse_tree__status__V_3_3, parse_tree__status__V_6_6);
                }
#line 186 "status.m"
                if (parse_tree__status__succeeded)
#line 186 "status.m"
                  {
#line 2697 "parse_tree.status.c"
                    parse_tree__status__succeeded = (parse_tree__status__V_4_4 == parse_tree__status__V_7_7);
#line 186 "status.m"
                    if (parse_tree__status__succeeded)
#line 2701 "parse_tree.status.c"
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
#line 2740 "parse_tree.status.c"
                {
#line 2742 "parse_tree.status.c"
                  parse_tree__status__succeeded = mdbcomp__sym_name____Unify____sym_name_0_0(parse_tree__status__V_9_9, parse_tree__status__V_12_12);
                }
#line 186 "status.m"
                if (parse_tree__status__succeeded)
#line 186 "status.m"
                  {
#line 2749 "parse_tree.status.c"
                    parse_tree__status__succeeded = (parse_tree__status__V_10_10 == parse_tree__status__V_13_13);
#line 186 "status.m"
                    if (parse_tree__status__succeeded)
#line 2753 "parse_tree.status.c"
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
#line 2786 "parse_tree.status.c"
                {
#line 2788 "parse_tree.status.c"
                  parse_tree__status__succeeded = mdbcomp__sym_name____Unify____sym_name_0_0(parse_tree__status__V_15_15, parse_tree__status__V_17_17);
                }
#line 186 "status.m"
                if (parse_tree__status__succeeded)
#line 2793 "parse_tree.status.c"
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
#line 2834 "parse_tree.status.c"
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
#line 2856 "parse_tree.status.c"
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

#line 2926 "parse_tree.status.c"
        {
#line 2928 "parse_tree.status.c"
          parse_tree__status__succeeded = mdbcomp__sym_name____Unify____sym_name_0_0(parse_tree__status__V_3_3, parse_tree__status__V_5_5);
        }
#line 206 "status.m"
        if (parse_tree__status__succeeded)
#line 2933 "parse_tree.status.c"
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
#line 2974 "parse_tree.status.c"
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
#line 3064 "parse_tree.status.c"
                      *parse_tree__status__HeadVar__1_1 = (MR_Integer) 2;
#line 45 "status.m"
                      break;
#line 45 "status.m"
                    case (MR_Integer) 2:
#line 3070 "parse_tree.status.c"
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
#line 3152 "parse_tree.status.c"
                      *parse_tree__status__HeadVar__1_1 = (MR_Integer) 2;
#line 45 "status.m"
                      break;
#line 45 "status.m"
                    case (MR_Integer) 2:
#line 3158 "parse_tree.status.c"
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
#line 3240 "parse_tree.status.c"
                      *parse_tree__status__HeadVar__1_1 = (MR_Integer) 2;
#line 45 "status.m"
                      break;
#line 45 "status.m"
                    case (MR_Integer) 2:
#line 3246 "parse_tree.status.c"
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
#line 3328 "parse_tree.status.c"
                      *parse_tree__status__HeadVar__1_1 = (MR_Integer) 2;
#line 45 "status.m"
                      break;
#line 45 "status.m"
                    case (MR_Integer) 2:
#line 3334 "parse_tree.status.c"
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
#line 3416 "parse_tree.status.c"
                      *parse_tree__status__HeadVar__1_1 = (MR_Integer) 2;
#line 45 "status.m"
                      break;
#line 45 "status.m"
                    case (MR_Integer) 2:
#line 3422 "parse_tree.status.c"
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
#line 3504 "parse_tree.status.c"
                      *parse_tree__status__HeadVar__1_1 = (MR_Integer) 2;
#line 45 "status.m"
                      break;
#line 45 "status.m"
                    case (MR_Integer) 2:
#line 3510 "parse_tree.status.c"
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
#line 3592 "parse_tree.status.c"
                      *parse_tree__status__HeadVar__1_1 = (MR_Integer) 2;
#line 45 "status.m"
                      break;
#line 45 "status.m"
                    case (MR_Integer) 2:
#line 3598 "parse_tree.status.c"
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
#line 3680 "parse_tree.status.c"
                      *parse_tree__status__HeadVar__1_1 = (MR_Integer) 2;
#line 45 "status.m"
                      break;
#line 45 "status.m"
                    case (MR_Integer) 2:
#line 3686 "parse_tree.status.c"
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
#line 3768 "parse_tree.status.c"
                      *parse_tree__status__HeadVar__1_1 = (MR_Integer) 2;
#line 45 "status.m"
                      break;
#line 45 "status.m"
                    case (MR_Integer) 2:
#line 3774 "parse_tree.status.c"
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
#line 3807 "parse_tree.status.c"
                        *parse_tree__status__HeadVar__1_1 = (MR_Integer) 1;
#line 45 "status.m"
                        break;
#line 45 "status.m"
                      case (MR_Integer) 1:
#line 3813 "parse_tree.status.c"
                        *parse_tree__status__HeadVar__1_1 = (MR_Integer) 1;
#line 45 "status.m"
                        break;
#line 45 "status.m"
                      case (MR_Integer) 2:
#line 3819 "parse_tree.status.c"
                        *parse_tree__status__HeadVar__1_1 = (MR_Integer) 1;
#line 45 "status.m"
                        break;
#line 45 "status.m"
                      case (MR_Integer) 3:
#line 3825 "parse_tree.status.c"
                        *parse_tree__status__HeadVar__1_1 = (MR_Integer) 1;
#line 45 "status.m"
                        break;
#line 45 "status.m"
                      case (MR_Integer) 4:
#line 3831 "parse_tree.status.c"
                        *parse_tree__status__HeadVar__1_1 = (MR_Integer) 1;
#line 45 "status.m"
                        break;
#line 45 "status.m"
                      case (MR_Integer) 5:
#line 3837 "parse_tree.status.c"
                        *parse_tree__status__HeadVar__1_1 = (MR_Integer) 1;
#line 45 "status.m"
                        break;
#line 45 "status.m"
                      case (MR_Integer) 6:
#line 3843 "parse_tree.status.c"
                        *parse_tree__status__HeadVar__1_1 = (MR_Integer) 1;
#line 45 "status.m"
                        break;
#line 45 "status.m"
                      case (MR_Integer) 7:
#line 3849 "parse_tree.status.c"
                        *parse_tree__status__HeadVar__1_1 = (MR_Integer) 1;
#line 45 "status.m"
                        break;
#line 45 "status.m"
                      case (MR_Integer) 8:
#line 3855 "parse_tree.status.c"
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
#line 3893 "parse_tree.status.c"
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
#line 3924 "parse_tree.status.c"
                        *parse_tree__status__HeadVar__1_1 = (MR_Integer) 1;
#line 45 "status.m"
                        break;
#line 45 "status.m"
                      case (MR_Integer) 1:
#line 3930 "parse_tree.status.c"
                        *parse_tree__status__HeadVar__1_1 = (MR_Integer) 1;
#line 45 "status.m"
                        break;
#line 45 "status.m"
                      case (MR_Integer) 2:
#line 3936 "parse_tree.status.c"
                        *parse_tree__status__HeadVar__1_1 = (MR_Integer) 1;
#line 45 "status.m"
                        break;
#line 45 "status.m"
                      case (MR_Integer) 3:
#line 3942 "parse_tree.status.c"
                        *parse_tree__status__HeadVar__1_1 = (MR_Integer) 1;
#line 45 "status.m"
                        break;
#line 45 "status.m"
                      case (MR_Integer) 4:
#line 3948 "parse_tree.status.c"
                        *parse_tree__status__HeadVar__1_1 = (MR_Integer) 1;
#line 45 "status.m"
                        break;
#line 45 "status.m"
                      case (MR_Integer) 5:
#line 3954 "parse_tree.status.c"
                        *parse_tree__status__HeadVar__1_1 = (MR_Integer) 1;
#line 45 "status.m"
                        break;
#line 45 "status.m"
                      case (MR_Integer) 6:
#line 3960 "parse_tree.status.c"
                        *parse_tree__status__HeadVar__1_1 = (MR_Integer) 1;
#line 45 "status.m"
                        break;
#line 45 "status.m"
                      case (MR_Integer) 7:
#line 3966 "parse_tree.status.c"
                        *parse_tree__status__HeadVar__1_1 = (MR_Integer) 1;
#line 45 "status.m"
                        break;
#line 45 "status.m"
                      case (MR_Integer) 8:
#line 3972 "parse_tree.status.c"
                        *parse_tree__status__HeadVar__1_1 = (MR_Integer) 1;
#line 45 "status.m"
                        break;
#line 45 "status.m"
                    }
#line 45 "status.m"
                    break;
#line 45 "status.m"
                  case (MR_Integer) 1:
#line 3982 "parse_tree.status.c"
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
#line 4225 "parse_tree.status.c"
                    /* direct tailcall eliminated */
#line 4227 "parse_tree.status.c"
                    {
#line 4229 "parse_tree.status.c"
                      MR_Word parse_tree__status__HeadVar__1__tmp_copy_1 = parse_tree__status__V_3_3;
#line 4231 "parse_tree.status.c"
                      MR_Word parse_tree__status__HeadVar__2__tmp_copy_2 = parse_tree__status__V_4_4;

#line 4234 "parse_tree.status.c"
                      parse_tree__status__HeadVar__2_2 = parse_tree__status__HeadVar__2__tmp_copy_2;
#line 4236 "parse_tree.status.c"
                      parse_tree__status__HeadVar__1_1 = parse_tree__status__HeadVar__1__tmp_copy_1;
#line 4238 "parse_tree.status.c"
                    }
#line 4240 "parse_tree.status.c"
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
#line 4265 "parse_tree.status.c"
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
#line 4327 "parse_tree.status.c"
  {
#line 4329 "parse_tree.status.c"
    MR_bool parse_tree__status__succeeded = (parse_tree__status__HeadVar__2_1 == parse_tree__status__HeadVar__2_2);

#line 4332 "parse_tree.status.c"
    return parse_tree__status__succeeded;
#line 4334 "parse_tree.status.c"
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
#line 347 "status.m"
  {
#line 347 "status.m"
    MR_bool parse_tree__status__succeeded;

#line 347 "status.m"
    {
#line 347 "status.m"
      parse_tree__status__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_105_110_116_95_102_111_114_95_111_112_116_95_109_111_100_117_108_101_95_115_101_99_116_105_111_110_95_115_116_97_116_117_115_95_95_91_49_93_95_48_2_p_0(parse_tree__status__Status_4);
#line 347 "status.m"
      return;
    }
#line 347 "status.m"
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
#line 341 "status.m"
  {
#line 341 "status.m"
    MR_bool parse_tree__status__succeeded;

#line 341 "status.m"
    {
#line 341 "status.m"
      parse_tree__status__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_111_112_116_95_109_111_100_117_108_101_95_115_101_99_116_105_111_110_95_115_116_97_116_117_115_95_95_91_49_93_95_48_2_p_0(parse_tree__status__Status_4);
#line 341 "status.m"
      return;
    }
#line 341 "status.m"
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
#line 331 "status.m"
  {
#line 331 "status.m"
    MR_bool parse_tree__status__succeeded;

#line 331 "status.m"
#line 331 "status.m"
    switch (MR_tag((MR_Word) parse_tree__status__IntSection_3)) {
#line 331 "status.m"
      default: /*NOTREACHED*/ MR_assert(0);
#line 331 "status.m"
      case (MR_Integer) 0:
#line 331 "status.m"
        {
#line 331 "status.m"
          MR_Word parse_tree__status__Section_7 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__status__IntSection_3, (MR_Integer) 1)))) >> (MR_Integer) 2)) & (MR_Integer) 3);
#line 331 "status.m"
          MR_Word parse_tree__status__V_12_12;
#line 331 "status.m"
          MR_Word parse_tree__status___ModuleName_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__status__IntSection_3, (MR_Integer) 0)));
#line 331 "status.m"
          MR_Word parse_tree__status___IntFileKind_6 = ((((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__status__IntSection_3, (MR_Integer) 1)))) & (MR_Integer) 3);

#line 332 "status.m"
          {
#line 332 "status.m"
            parse_tree__status__V_12_12 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 332 "status.m"
            MR_hl_field(MR_mktag(2), parse_tree__status__V_12_12, 0) = ((MR_Box) (parse_tree__status__Section_7));
#line 332 "status.m"
          }
#line 332 "status.m"
          {
#line 332 "status.m"
            MR_Word base;
#line 332 "status.m"
            base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 332 "status.m"
            *parse_tree__status__Status_4 = base;
#line 332 "status.m"
            MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (parse_tree__status__V_12_12));
#line 332 "status.m"
            MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) ((MR_Integer) 1));
#line 332 "status.m"
          }
#line 331 "status.m"
        }
#line 331 "status.m"
        break;
#line 331 "status.m"
      case (MR_Integer) 1:
#line 334 "status.m"
        {
#line 334 "status.m"
          MR_Word parse_tree__status__V_10_10;
#line 334 "status.m"
          MR_Word parse_tree__status__Section_18 = ((((((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__status__IntSection_3, (MR_Integer) 1)))) >> (MR_Integer) 2)) & (MR_Integer) 3);
#line 334 "status.m"
          MR_Word parse_tree__status___ModuleName_14 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__status__IntSection_3, (MR_Integer) 0)));
#line 334 "status.m"
          MR_Word parse_tree__status___IntFileKind_15 = ((((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__status__IntSection_3, (MR_Integer) 1)))) & (MR_Integer) 3);

#line 335 "status.m"
          {
#line 335 "status.m"
            parse_tree__status__V_10_10 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 335 "status.m"
            MR_hl_field(MR_mktag(2), parse_tree__status__V_10_10, 0) = ((MR_Box) (parse_tree__status__Section_18));
#line 335 "status.m"
          }
#line 335 "status.m"
          {
#line 335 "status.m"
            MR_Word base;
#line 335 "status.m"
            base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 335 "status.m"
            *parse_tree__status__Status_4 = base;
#line 335 "status.m"
            MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (parse_tree__status__V_10_10));
#line 335 "status.m"
            MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) ((MR_Integer) 0));
#line 335 "status.m"
          }
#line 334 "status.m"
        }
#line 331 "status.m"
        break;
#line 331 "status.m"
      case (MR_Integer) 2:
#line 337 "status.m"
        {
#line 338 "status.m"
          *parse_tree__status__Status_4 = (MR_Word) &parse_tree__status_scalar_common_2[3];
#line 337 "status.m"
        }
#line 331 "status.m"
        break;
#line 331 "status.m"
    }
#line 331 "status.m"
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
#line 318 "status.m"
  {
#line 318 "status.m"
    MR_bool parse_tree__status__succeeded;

#line 318 "status.m"
#line 318 "status.m"
    switch (parse_tree__status__SrcSection_3) {
#line 318 "status.m"
      default: /*NOTREACHED*/ MR_assert(0);
#line 318 "status.m"
      case (MR_Integer) 2:
#line 324 "status.m"
        {
#line 325 "status.m"
          *parse_tree__status__Status_4 = (MR_Word) &parse_tree__status_scalar_common_2[0];
#line 324 "status.m"
        }
#line 318 "status.m"
        break;
#line 318 "status.m"
      case (MR_Integer) 1:
#line 321 "status.m"
        {
#line 322 "status.m"
          *parse_tree__status__Status_4 = (MR_Word) &parse_tree__status_scalar_common_2[1];
#line 321 "status.m"
        }
#line 318 "status.m"
        break;
#line 318 "status.m"
      case (MR_Integer) 0:
#line 318 "status.m"
        {
#line 319 "status.m"
          *parse_tree__status__Status_4 = (MR_Word) &parse_tree__status_scalar_common_2[2];
#line 318 "status.m"
        }
#line 318 "status.m"
        break;
#line 318 "status.m"
    }
#line 318 "status.m"
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
#line 310 "status.m"
  {
#line 310 "status.m"
    MR_bool parse_tree__status__succeeded;
#line 310 "status.m"
    MR_Word parse_tree__status__HeadVar__3_3;

#line 310 "status.m"
    {
#line 310 "status.m"
      parse_tree__status__HeadVar__3_3 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 310 "status.m"
      MR_hl_field(MR_mktag(0), parse_tree__status__HeadVar__3_3, 0) = ((MR_Box) (parse_tree__status__ModuleName_4));
#line 310 "status.m"
      MR_hl_field(MR_mktag(0), parse_tree__status__HeadVar__3_3, 1) = ((MR_Box) (parse_tree__status__OptFileKind_5));
#line 310 "status.m"
    }
#line 310 "status.m"
    return parse_tree__status__HeadVar__3_3;
#line 310 "status.m"
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
#line 307 "status.m"
  {
#line 307 "status.m"
    MR_bool parse_tree__status__succeeded;
#line 307 "status.m"
    MR_Word parse_tree__status__HeadVar__3_3;

#line 307 "status.m"
    {
#line 307 "status.m"
      parse_tree__status__HeadVar__3_3 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 307 "status.m"
      MR_hl_field(MR_mktag(2), parse_tree__status__HeadVar__3_3, 0) = ((MR_Box) (parse_tree__status__ModuleName_4));
#line 307 "status.m"
      MR_hl_field(MR_mktag(2), parse_tree__status__HeadVar__3_3, 1) = ((MR_Box) (parse_tree__status__IntFileKind_5));
#line 307 "status.m"
    }
#line 307 "status.m"
    return parse_tree__status__HeadVar__3_3;
#line 307 "status.m"
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
#line 305 "status.m"
  {
#line 305 "status.m"
    MR_bool parse_tree__status__succeeded;
#line 305 "status.m"
    MR_Word parse_tree__status__HeadVar__4_4;

#line 305 "status.m"
    {
#line 305 "status.m"
      parse_tree__status__HeadVar__4_4 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 305 "status.m"
      MR_hl_field(MR_mktag(1), parse_tree__status__HeadVar__4_4, 0) = ((MR_Box) (parse_tree__status__ModuleName_6));
#line 305 "status.m"
      MR_hl_field(MR_mktag(1), parse_tree__status__HeadVar__4_4, 1) = ((MR_Box) ((parse_tree__status__IntFileKind_7 | ((parse_tree__status__ImportLocn_5 << (MR_Integer) 2)))));
#line 305 "status.m"
    }
#line 305 "status.m"
    return parse_tree__status__HeadVar__4_4;
#line 305 "status.m"
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
#line 303 "status.m"
  {
#line 303 "status.m"
    MR_bool parse_tree__status__succeeded;
#line 303 "status.m"
    MR_Word parse_tree__status__HeadVar__4_4;

#line 303 "status.m"
    {
#line 303 "status.m"
      parse_tree__status__HeadVar__4_4 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 303 "status.m"
      MR_hl_field(MR_mktag(0), parse_tree__status__HeadVar__4_4, 0) = ((MR_Box) (parse_tree__status__ModuleName_6));
#line 303 "status.m"
      MR_hl_field(MR_mktag(0), parse_tree__status__HeadVar__4_4, 1) = ((MR_Box) ((parse_tree__status__IntFileKind_7 | ((parse_tree__status__ImportLocn_5 << (MR_Integer) 2)))));
#line 303 "status.m"
    }
#line 303 "status.m"
    return parse_tree__status__HeadVar__4_4;
#line 303 "status.m"
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
#line 277 "status.m"
  while (MR_TRUE)
#line 277 "status.m"
    {
#line 277 "status.m"
      /* tailcall optimized into a loop */
#line 277 "status.m"
      {
#line 277 "status.m"
        MR_bool parse_tree__status__succeeded;
#line 277 "status.m"
        MR_Word parse_tree__status__HeadVar__2_2;

#line 277 "status.m"
#line 277 "status.m"
        switch (MR_tag((MR_Word) parse_tree__status__HeadVar__1_1)) {
#line 277 "status.m"
          default: /*NOTREACHED*/ MR_assert(0);
#line 277 "status.m"
          case (MR_Integer) 0:
#line 277 "status.m"
#line 277 "status.m"
            switch (MR_unmkbody(parse_tree__status__HeadVar__1_1)) {
#line 277 "status.m"
              default: /*NOTREACHED*/ MR_assert(0);
#line 277 "status.m"
              case (MR_Integer) 0:
#line 280 "status.m"
                parse_tree__status__HeadVar__2_2 = (MR_Integer) 0;
#line 277 "status.m"
                break;
#line 277 "status.m"
              case (MR_Integer) 1:
#line 281 "status.m"
                parse_tree__status__HeadVar__2_2 = (MR_Integer) 0;
#line 277 "status.m"
                break;
#line 277 "status.m"
              case (MR_Integer) 2:
#line 282 "status.m"
                parse_tree__status__HeadVar__2_2 = (MR_Integer) 0;
#line 277 "status.m"
                break;
#line 277 "status.m"
              case (MR_Integer) 3:
#line 283 "status.m"
                parse_tree__status__HeadVar__2_2 = (MR_Integer) 0;
#line 277 "status.m"
                break;
#line 277 "status.m"
              case (MR_Integer) 4:
#line 284 "status.m"
                parse_tree__status__HeadVar__2_2 = (MR_Integer) 1;
#line 277 "status.m"
                break;
#line 277 "status.m"
              case (MR_Integer) 5:
#line 277 "status.m"
                parse_tree__status__HeadVar__2_2 = (MR_Integer) 1;
#line 277 "status.m"
                break;
#line 277 "status.m"
              case (MR_Integer) 6:
#line 285 "status.m"
                parse_tree__status__HeadVar__2_2 = (MR_Integer) 0;
#line 277 "status.m"
                break;
#line 277 "status.m"
              case (MR_Integer) 7:
#line 278 "status.m"
                parse_tree__status__HeadVar__2_2 = (MR_Integer) 1;
#line 277 "status.m"
                break;
#line 277 "status.m"
              case (MR_Integer) 8:
#line 279 "status.m"
                parse_tree__status__HeadVar__2_2 = (MR_Integer) 1;
#line 277 "status.m"
                break;
#line 277 "status.m"
            }
#line 277 "status.m"
            break;
#line 277 "status.m"
          case (MR_Integer) 1:
#line 286 "status.m"
            {
#line 286 "status.m"
              MR_Word parse_tree__status__Status_3 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__status__HeadVar__1_1, (MR_Integer) 0)));

#line 287 "status.m"
              /* direct tailcall eliminated */
#line 287 "status.m"
              {
#line 287 "status.m"
                MR_Word parse_tree__status__HeadVar__1__tmp_copy_1 = parse_tree__status__Status_3;

#line 287 "status.m"
                parse_tree__status__HeadVar__1_1 = parse_tree__status__HeadVar__1__tmp_copy_1;
#line 287 "status.m"
              }
#line 287 "status.m"
              continue;
#line 286 "status.m"
            }
#line 277 "status.m"
            break;
#line 277 "status.m"
          case (MR_Integer) 2:
#line 288 "status.m"
            {
#line 288 "status.m"
              MR_Word parse_tree__status__ImportLocn_4 = ((MR_Word) (MR_hl_field(MR_mktag(2), parse_tree__status__HeadVar__1_1, (MR_Integer) 0)));

#line 294 "status.m"
              parse_tree__status__HeadVar__2_2 = ((&parse_tree__status_vector_common_1[0 + parse_tree__status__ImportLocn_4]))->parse_tree__status__vector_common_type_1_0__vct_1_f_0;
#line 288 "status.m"
            }
#line 277 "status.m"
            break;
#line 277 "status.m"
        }
#line 277 "status.m"
        return parse_tree__status__HeadVar__2_2;
#line 277 "status.m"
      }
#line 277 "status.m"
      break;
#line 277 "status.m"
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
#line 265 "status.m"
  {
#line 265 "status.m"
    MR_bool parse_tree__status__succeeded;
#line 265 "status.m"
    MR_Word parse_tree__status__HeadVar__2_2;

#line 265 "status.m"
#line 265 "status.m"
    switch (MR_tag((MR_Word) parse_tree__status__HeadVar__1_1)) {
#line 265 "status.m"
      default: /*NOTREACHED*/ MR_assert(0);
#line 265 "status.m"
      case (MR_Integer) 0:
#line 265 "status.m"
#line 265 "status.m"
        switch (MR_unmkbody(parse_tree__status__HeadVar__1_1)) {
#line 265 "status.m"
          default: /*NOTREACHED*/ MR_assert(0);
#line 265 "status.m"
          case (MR_Integer) 0:
#line 269 "status.m"
            parse_tree__status__HeadVar__2_2 = (MR_Integer) 0;
#line 265 "status.m"
            break;
#line 265 "status.m"
          case (MR_Integer) 1:
#line 267 "status.m"
            parse_tree__status__HeadVar__2_2 = (MR_Integer) 0;
#line 265 "status.m"
            break;
#line 265 "status.m"
          case (MR_Integer) 2:
#line 268 "status.m"
            parse_tree__status__HeadVar__2_2 = (MR_Integer) 0;
#line 265 "status.m"
            break;
#line 265 "status.m"
          case (MR_Integer) 3:
#line 270 "status.m"
            parse_tree__status__HeadVar__2_2 = (MR_Integer) 1;
#line 265 "status.m"
            break;
#line 265 "status.m"
          case (MR_Integer) 4:
#line 271 "status.m"
            parse_tree__status__HeadVar__2_2 = (MR_Integer) 1;
#line 265 "status.m"
            break;
#line 265 "status.m"
          case (MR_Integer) 5:
#line 272 "status.m"
            parse_tree__status__HeadVar__2_2 = (MR_Integer) 1;
#line 265 "status.m"
            break;
#line 265 "status.m"
          case (MR_Integer) 6:
#line 273 "status.m"
            parse_tree__status__HeadVar__2_2 = (MR_Integer) 1;
#line 265 "status.m"
            break;
#line 265 "status.m"
          case (MR_Integer) 7:
#line 274 "status.m"
            parse_tree__status__HeadVar__2_2 = (MR_Integer) 1;
#line 265 "status.m"
            break;
#line 265 "status.m"
          case (MR_Integer) 8:
#line 275 "status.m"
            parse_tree__status__HeadVar__2_2 = (MR_Integer) 1;
#line 265 "status.m"
            break;
#line 265 "status.m"
        }
#line 265 "status.m"
        break;
#line 265 "status.m"
      case (MR_Integer) 1:
#line 266 "status.m"
        parse_tree__status__HeadVar__2_2 = (MR_Integer) 0;
#line 265 "status.m"
        break;
#line 265 "status.m"
      case (MR_Integer) 2:
#line 265 "status.m"
        parse_tree__status__HeadVar__2_2 = (MR_Integer) 0;
#line 265 "status.m"
        break;
#line 265 "status.m"
    }
#line 265 "status.m"
    return parse_tree__status__HeadVar__2_2;
#line 265 "status.m"
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
#line 263 "status.m"
  {
#line 263 "status.m"
    MR_bool parse_tree__status__succeeded;
#line 263 "status.m"
    MR_Word parse_tree__status__HeadVar__2_2;
#line 263 "status.m"
    MR_Word parse_tree__status__V_4_4;

#line 263 "status.m"
    {
#line 263 "status.m"
      parse_tree__status__V_4_4 = parse_tree__status__status_defined_in_this_module_1_f_0(parse_tree__status__Status_3);
    }
#line 263 "status.m"
    {
#line 263 "status.m"
      return parse_tree__status__HeadVar__2_2 = mercury__bool__not_1_f_0(parse_tree__status__V_4_4);
    }
#line 263 "status.m"
    return parse_tree__status__HeadVar__2_2;
#line 263 "status.m"
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
#line 253 "status.m"
  {
#line 253 "status.m"
    MR_bool parse_tree__status__succeeded;
#line 253 "status.m"
    MR_Word parse_tree__status__HeadVar__2_2;
#line 255 "status.m"
    MR_Word parse_tree__status__V_4_4;

#line 255 "status.m"
    {
#line 255 "status.m"
      parse_tree__status__V_4_4 = parse_tree__status__status_is_exported_1_f_0(parse_tree__status__Status_3);
    }
#line 255 "status.m"
    parse_tree__status__succeeded = (parse_tree__status__V_4_4 == (MR_Integer) 1);
#line 255 "status.m"
    if (parse_tree__status__succeeded)
#line 255 "status.m"
      {
#line 256 "status.m"
        parse_tree__status__succeeded = (parse_tree__status__Status_3 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 7))));
#line 256 "status.m"
        parse_tree__status__succeeded = !(parse_tree__status__succeeded);
#line 255 "status.m"
      }
#line 253 "status.m"
    if (parse_tree__status__succeeded)
#line 258 "status.m"
      parse_tree__status__HeadVar__2_2 = (MR_Integer) 1;
#line 253 "status.m"
    else
#line 260 "status.m"
      parse_tree__status__HeadVar__2_2 = (MR_Integer) 0;
#line 253 "status.m"
    return parse_tree__status__HeadVar__2_2;
#line 253 "status.m"
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
#line 241 "status.m"
  {
#line 241 "status.m"
    MR_bool parse_tree__status__succeeded;
#line 241 "status.m"
    MR_Word parse_tree__status__HeadVar__2_2;

#line 241 "status.m"
#line 241 "status.m"
    switch (MR_tag((MR_Word) parse_tree__status__HeadVar__1_1)) {
#line 241 "status.m"
      default: /*NOTREACHED*/ MR_assert(0);
#line 241 "status.m"
      case (MR_Integer) 0:
#line 241 "status.m"
#line 241 "status.m"
        switch (MR_unmkbody(parse_tree__status__HeadVar__1_1)) {
#line 241 "status.m"
          default: /*NOTREACHED*/ MR_assert(0);
#line 241 "status.m"
          case (MR_Integer) 0:
#line 245 "status.m"
            parse_tree__status__HeadVar__2_2 = (MR_Integer) 0;
#line 241 "status.m"
            break;
#line 241 "status.m"
          case (MR_Integer) 1:
#line 243 "status.m"
            parse_tree__status__HeadVar__2_2 = (MR_Integer) 0;
#line 241 "status.m"
            break;
#line 241 "status.m"
          case (MR_Integer) 2:
#line 244 "status.m"
            parse_tree__status__HeadVar__2_2 = (MR_Integer) 0;
#line 241 "status.m"
            break;
#line 241 "status.m"
          case (MR_Integer) 3:
#line 246 "status.m"
            parse_tree__status__HeadVar__2_2 = (MR_Integer) 1;
#line 241 "status.m"
            break;
#line 241 "status.m"
          case (MR_Integer) 4:
#line 247 "status.m"
            parse_tree__status__HeadVar__2_2 = (MR_Integer) 1;
#line 241 "status.m"
            break;
#line 241 "status.m"
          case (MR_Integer) 5:
#line 248 "status.m"
            parse_tree__status__HeadVar__2_2 = (MR_Integer) 1;
#line 241 "status.m"
            break;
#line 241 "status.m"
          case (MR_Integer) 6:
#line 249 "status.m"
            parse_tree__status__HeadVar__2_2 = (MR_Integer) 1;
#line 241 "status.m"
            break;
#line 241 "status.m"
          case (MR_Integer) 7:
#line 250 "status.m"
            parse_tree__status__HeadVar__2_2 = (MR_Integer) 1;
#line 241 "status.m"
            break;
#line 241 "status.m"
          case (MR_Integer) 8:
#line 251 "status.m"
            parse_tree__status__HeadVar__2_2 = (MR_Integer) 0;
#line 241 "status.m"
            break;
#line 241 "status.m"
        }
#line 241 "status.m"
        break;
#line 241 "status.m"
      case (MR_Integer) 1:
#line 242 "status.m"
        parse_tree__status__HeadVar__2_2 = (MR_Integer) 0;
#line 241 "status.m"
        break;
#line 241 "status.m"
      case (MR_Integer) 2:
#line 241 "status.m"
        parse_tree__status__HeadVar__2_2 = (MR_Integer) 0;
#line 241 "status.m"
        break;
#line 241 "status.m"
    }
#line 241 "status.m"
    return parse_tree__status__HeadVar__2_2;
#line 241 "status.m"
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
