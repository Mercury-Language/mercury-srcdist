/*
** Automatically generated from `prog_io_mutable.m'
** by the Mercury compiler,
** version rotd-2015-09-28
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


/* :- module parse_tree.prog_io_mutable. */
/* :- implementation. */

/*
INIT mercury__parse_tree__prog_io_mutable__init
ENDINIT
*/

#include "parse_tree.prog_io_mutable.mih"


#include "check_hlds.mih"
#include "hlds.mih"
#include "libs.mih"
#include "mdbcomp.mih"
#include "parse_tree.mih"
#include "recompilation.mih"
#include "libs.globals.mih"
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
#include "parse_tree.parse_tree_out_info.mih"
#include "parse_tree.parse_tree_out_term.mih"
#include "parse_tree.prog_data.mih"
#include "parse_tree.prog_io_pragma.mih"
#include "parse_tree.prog_io_sym_name.mih"
#include "parse_tree.prog_io_util.mih"
#include "parse_tree.prog_item.mih"
#include "parse_tree.set_of_var.mih"
#include "mdbcomp.feedback.automatic_parallelism.mih"



#line 231 "prog_io_mutable.m"
struct parse_tree__prog_io_mutable__parse_mutable_attrs_3_p_0_env_0_s {
#line 234 "prog_io_mutable.m"
  MR_bool parse_tree__prog_io_mutable__parse_mutable_attrs_3_p_0_env_0__succeeded;
#line 277 "prog_io_mutable.m"
  MR_Word parse_tree__prog_io_mutable__parse_mutable_attrs_3_p_0_env_0__CollectedMutAttrs_11;
#line 258 "prog_io_mutable.m"
  jmp_buf parse_tree__prog_io_mutable__parse_mutable_attrs_3_p_0_env_0__commit_0;
#line 258 "prog_io_mutable.m"
  MR_Word parse_tree__prog_io_mutable__parse_mutable_attrs_3_p_0_env_0__TypeCtorInfo_116_116;
#line 258 "prog_io_mutable.m"
  MR_Word parse_tree__prog_io_mutable__parse_mutable_attrs_3_p_0_env_0__Conflict1_12;
#line 258 "prog_io_mutable.m"
  MR_Word parse_tree__prog_io_mutable__parse_mutable_attrs_3_p_0_env_0__Conflict2_13;
#line 258 "prog_io_mutable.m"
  MR_Word parse_tree__prog_io_mutable__parse_mutable_attrs_3_p_0_env_0__V_49_49;
#line 258 "prog_io_mutable.m"
  MR_Box parse_tree__prog_io_mutable__parse_mutable_attrs_3_p_0_env_0__conv1_V_49_49;
#line 231 "prog_io_mutable.m"
};

#line 203 "prog_io_mutable.m"
struct parse_tree__prog_io_mutable__parse_mutable_inst_3_p_0_env_0_s {
#line 203 "prog_io_mutable.m"
  MR_Word parse_tree__prog_io_mutable__parse_mutable_inst_3_p_0_env_0__InstTerm_5;
#line 214 "prog_io_mutable.m"
  MR_bool parse_tree__prog_io_mutable__parse_mutable_inst_3_p_0_env_0__succeeded;
#line 206 "prog_io_mutable.m"
  jmp_buf parse_tree__prog_io_mutable__parse_mutable_inst_3_p_0_env_0__commit_0;
#line 203 "prog_io_mutable.m"
};

#line 187 "prog_io_mutable.m"
struct parse_tree__prog_io_mutable__parse_mutable_type_3_p_0_env_0_s {
#line 187 "prog_io_mutable.m"
  MR_Word parse_tree__prog_io_mutable__parse_mutable_type_3_p_0_env_0__TypeTerm_5;
#line 198 "prog_io_mutable.m"
  MR_bool parse_tree__prog_io_mutable__parse_mutable_type_3_p_0_env_0__succeeded;
#line 190 "prog_io_mutable.m"
  jmp_buf parse_tree__prog_io_mutable__parse_mutable_type_3_p_0_env_0__commit_0;
#line 187 "prog_io_mutable.m"
};


#line 143 "parse_tree.prog_io_mutable.c"
static const MR_FA_PseudoTypeInfo_Struct1 parse_tree__prog_io_mutable__term__pti_term_1__plain_term__type_ctor_info_generic_0;

#line 146 "parse_tree.prog_io_mutable.c"
static const MR_FA_PseudoTypeInfo_Struct1 parse_tree__prog_io_mutable__parse_tree__prog_io_util__pti_maybe1_1__plain_parse_tree__prog_io_mutable__type_ctor_info_collected_mutable_attribute_0;

#line 149 "parse_tree.prog_io_mutable.c"
static const MR_PseudoTypeInfo parse_tree__prog_io_mutable__parse_tree__prog_io_mutable__field_types_collected_mutable_attribute_0_0[1];

#line 152 "parse_tree.prog_io_mutable.c"
static const MR_DuFunctorDesc parse_tree__prog_io_mutable__parse_tree__prog_io_mutable__du_functor_desc_collected_mutable_attribute_0_0;

#line 155 "parse_tree.prog_io_mutable.c"
static const MR_PseudoTypeInfo parse_tree__prog_io_mutable__parse_tree__prog_io_mutable__field_types_collected_mutable_attribute_0_1[1];

#line 158 "parse_tree.prog_io_mutable.c"
static const MR_DuFunctorDesc parse_tree__prog_io_mutable__parse_tree__prog_io_mutable__du_functor_desc_collected_mutable_attribute_0_1;

#line 161 "parse_tree.prog_io_mutable.c"
static const MR_PseudoTypeInfo parse_tree__prog_io_mutable__parse_tree__prog_io_mutable__field_types_collected_mutable_attribute_0_2[1];

#line 164 "parse_tree.prog_io_mutable.c"
static const MR_DuFunctorDesc parse_tree__prog_io_mutable__parse_tree__prog_io_mutable__du_functor_desc_collected_mutable_attribute_0_2;

#line 167 "parse_tree.prog_io_mutable.c"
static const MR_PseudoTypeInfo parse_tree__prog_io_mutable__parse_tree__prog_io_mutable__field_types_collected_mutable_attribute_0_3[1];

#line 170 "parse_tree.prog_io_mutable.c"
static const MR_DuFunctorDesc parse_tree__prog_io_mutable__parse_tree__prog_io_mutable__du_functor_desc_collected_mutable_attribute_0_3;

#line 173 "parse_tree.prog_io_mutable.c"
static const MR_PseudoTypeInfo parse_tree__prog_io_mutable__parse_tree__prog_io_mutable__field_types_collected_mutable_attribute_0_4[1];

#line 176 "parse_tree.prog_io_mutable.c"
static const MR_DuFunctorDesc parse_tree__prog_io_mutable__parse_tree__prog_io_mutable__du_functor_desc_collected_mutable_attribute_0_4;

#line 179 "parse_tree.prog_io_mutable.c"
static const MR_DuFunctorDescPtr parse_tree__prog_io_mutable__parse_tree__prog_io_mutable__du_stag_ordered_collected_mutable_attribute_0_0[1];

#line 182 "parse_tree.prog_io_mutable.c"
static const MR_DuFunctorDescPtr parse_tree__prog_io_mutable__parse_tree__prog_io_mutable__du_stag_ordered_collected_mutable_attribute_0_1[1];

#line 185 "parse_tree.prog_io_mutable.c"
static const MR_DuFunctorDescPtr parse_tree__prog_io_mutable__parse_tree__prog_io_mutable__du_stag_ordered_collected_mutable_attribute_0_2[1];

#line 188 "parse_tree.prog_io_mutable.c"
static const MR_DuFunctorDescPtr parse_tree__prog_io_mutable__parse_tree__prog_io_mutable__du_stag_ordered_collected_mutable_attribute_0_3[2];

#line 191 "parse_tree.prog_io_mutable.c"
static const MR_DuPtagLayout parse_tree__prog_io_mutable__parse_tree__prog_io_mutable__du_ptag_ordered_collected_mutable_attribute_0[4];

#line 194 "parse_tree.prog_io_mutable.c"
static const MR_DuFunctorDescPtr parse_tree__prog_io_mutable__parse_tree__prog_io_mutable__du_name_ordered_collected_mutable_attribute_0[5];

#line 197 "parse_tree.prog_io_mutable.c"
static const MR_Integer parse_tree__prog_io_mutable__parse_tree__prog_io_mutable__functor_number_map_collected_mutable_attribute_0[5];

#line 200 "parse_tree.prog_io_mutable.c"
static MR_bool MR_CALL 
parse_tree__prog_io_mutable____Unify____collected_mutable_attribute_0_0_10001(
#line 203 "parse_tree.prog_io_mutable.c"
  MR_Box parse_tree__prog_io_mutable__wrapper_arg_1,
#line 205 "parse_tree.prog_io_mutable.c"
  MR_Box parse_tree__prog_io_mutable__wrapper_arg_2);

#line 208 "parse_tree.prog_io_mutable.c"
static void MR_CALL 
parse_tree__prog_io_mutable____Compare____collected_mutable_attribute_0_0_10001(
#line 211 "parse_tree.prog_io_mutable.c"
  MR_Box * parse_tree__prog_io_mutable__wrapper_arg_1,
#line 213 "parse_tree.prog_io_mutable.c"
  MR_Box parse_tree__prog_io_mutable__wrapper_arg_2,
#line 215 "parse_tree.prog_io_mutable.c"
  MR_Box parse_tree__prog_io_mutable__wrapper_arg_3);

#line 224 "prog_io_mutable.m"
static void MR_CALL 
parse_tree__prog_io_mutable____Compare____collected_mutable_attribute_0_0(
#line 224 "prog_io_mutable.m"
  MR_Word * parse_tree__prog_io_mutable__HeadVar__1_1,
#line 224 "prog_io_mutable.m"
  MR_Word parse_tree__prog_io_mutable__HeadVar__2_2,
#line 224 "prog_io_mutable.m"
  MR_Word parse_tree__prog_io_mutable__HeadVar__3_3);

#line 224 "prog_io_mutable.m"
static MR_bool MR_CALL 
parse_tree__prog_io_mutable____Unify____collected_mutable_attribute_0_0(
#line 224 "prog_io_mutable.m"
  MR_Word parse_tree__prog_io_mutable__HeadVar__1_1,
#line 224 "prog_io_mutable.m"
  MR_Word parse_tree__prog_io_mutable__HeadVar__2_2);

#line 312 "prog_io_mutable.m"
static void MR_CALL 
parse_tree__prog_io_mutable__parse_mutable_attr_2_p_0(
#line 312 "prog_io_mutable.m"
  MR_Word parse_tree__prog_io_mutable__MutAttrTerm_3,
#line 312 "prog_io_mutable.m"
  MR_Word * parse_tree__prog_io_mutable__MutAttrResult_4);

#line 288 "prog_io_mutable.m"
static void MR_CALL 
parse_tree__prog_io_mutable__process_mutable_attribute_3_p_0(
#line 288 "prog_io_mutable.m"
  MR_Word parse_tree__prog_io_mutable__HeadVar__1_1,
#line 288 "prog_io_mutable.m"
  MR_Word parse_tree__prog_io_mutable__STATE_VARIABLE_Attributes_0_2,
#line 288 "prog_io_mutable.m"
  MR_Word * parse_tree__prog_io_mutable__STATE_VARIABLE_Attributes_3);

#line 273 "prog_io_mutable.m"
static void MR_CALL 
parse_tree__prog_io_mutable__parse_mutable_attrs_3_p_0_6(
#line 273 "prog_io_mutable.m"
  MR_Box parse_tree__prog_io_mutable__closure_arg,
#line 273 "prog_io_mutable.m"
  MR_Box parse_tree__prog_io_mutable__wrapper_arg_1,
#line 273 "prog_io_mutable.m"
  MR_Box parse_tree__prog_io_mutable__wrapper_arg_2,
#line 273 "prog_io_mutable.m"
  MR_Box * parse_tree__prog_io_mutable__wrapper_arg_3);

#line 250 "prog_io_mutable.m"
static void MR_CALL 
parse_tree__prog_io_mutable__parse_mutable_attrs_3_p_0_1(
#line 250 "prog_io_mutable.m"
  MR_Box parse_tree__prog_io_mutable__closure_arg,
#line 250 "prog_io_mutable.m"
  MR_Box parse_tree__prog_io_mutable__wrapper_arg_1,
#line 250 "prog_io_mutable.m"
  MR_Box * parse_tree__prog_io_mutable__wrapper_arg_2);

#line 258 "prog_io_mutable.m"
static void MR_CALL 
parse_tree__prog_io_mutable__parse_mutable_attrs_3_p_0_2(
#line 258 "prog_io_mutable.m"
  void * parse_tree__prog_io_mutable__env_ptr_arg);

#line 258 "prog_io_mutable.m"
static void MR_CALL 
parse_tree__prog_io_mutable__parse_mutable_attrs_3_p_0_4(
#line 258 "prog_io_mutable.m"
  void * parse_tree__prog_io_mutable__env_ptr_arg);

#line 258 "prog_io_mutable.m"
static void MR_CALL 
parse_tree__prog_io_mutable__parse_mutable_attrs_3_p_0_3(
#line 258 "prog_io_mutable.m"
  void * parse_tree__prog_io_mutable__env_ptr_arg);

#line 258 "prog_io_mutable.m"
static void MR_CALL 
parse_tree__prog_io_mutable__parse_mutable_attrs_3_p_0_5(
#line 258 "prog_io_mutable.m"
  void * parse_tree__prog_io_mutable__env_ptr_arg);

#line 231 "prog_io_mutable.m"
static void MR_CALL 
parse_tree__prog_io_mutable__parse_mutable_attrs_3_p_0(
#line 231 "prog_io_mutable.m"
  MR_Word parse_tree__prog_io_mutable__VarSet_4,
#line 231 "prog_io_mutable.m"
  MR_Word parse_tree__prog_io_mutable__MutAttrsTerm_5,
#line 231 "prog_io_mutable.m"
  MR_Word * parse_tree__prog_io_mutable__MaybeMutAttrs_6);

#line 206 "prog_io_mutable.m"
static void MR_CALL 
parse_tree__prog_io_mutable__parse_mutable_inst_3_p_0_1(
#line 206 "prog_io_mutable.m"
  void * parse_tree__prog_io_mutable__env_ptr_arg);

#line 206 "prog_io_mutable.m"
static void MR_CALL 
parse_tree__prog_io_mutable__parse_mutable_inst_3_p_0_2(
#line 206 "prog_io_mutable.m"
  void * parse_tree__prog_io_mutable__env_ptr_arg);

#line 203 "prog_io_mutable.m"
static void MR_CALL 
parse_tree__prog_io_mutable__parse_mutable_inst_3_p_0(
#line 203 "prog_io_mutable.m"
  MR_Word parse_tree__prog_io_mutable__VarSet_4,
#line 203 "prog_io_mutable.m"
  MR_Word parse_tree__prog_io_mutable__InstTerm_5,
#line 203 "prog_io_mutable.m"
  MR_Word * parse_tree__prog_io_mutable__MaybeInst_6);

#line 190 "prog_io_mutable.m"
static void MR_CALL 
parse_tree__prog_io_mutable__parse_mutable_type_3_p_0_1(
#line 190 "prog_io_mutable.m"
  void * parse_tree__prog_io_mutable__env_ptr_arg);

#line 190 "prog_io_mutable.m"
static void MR_CALL 
parse_tree__prog_io_mutable__parse_mutable_type_3_p_0_2(
#line 190 "prog_io_mutable.m"
  void * parse_tree__prog_io_mutable__env_ptr_arg);

#line 187 "prog_io_mutable.m"
static void MR_CALL 
parse_tree__prog_io_mutable__parse_mutable_type_3_p_0(
#line 187 "prog_io_mutable.m"
  MR_Word parse_tree__prog_io_mutable__VarSet_4,
#line 187 "prog_io_mutable.m"
  MR_Word parse_tree__prog_io_mutable__TypeTerm_5,
#line 187 "prog_io_mutable.m"
  MR_Word * parse_tree__prog_io_mutable__MaybeType_6);


static /* final */ const MR_Box parse_tree__prog_io_mutable_scalar_common_1[3][3];

static /* final */ const MR_Box parse_tree__prog_io_mutable_scalar_common_2[48][2];

static /* final */ const MR_Box parse_tree__prog_io_mutable_scalar_common_3[6][1];

static /* final */ const MR_Box parse_tree__prog_io_mutable_scalar_common_4[1][5];

static /* final */ const MR_Box parse_tree__prog_io_mutable_scalar_common_5[1][6];


#line 321 "prog_io_mutable.m"
/* sealed */ struct parse_tree__prog_io_mutable__vector_common_type_6_0_s {
#line 321 "prog_io_mutable.m"
  const MR_String parse_tree__prog_io_mutable__vector_common_type_6_0__vct_6_f_0;
#line 321 "prog_io_mutable.m"
  const MR_Word parse_tree__prog_io_mutable__vector_common_type_6_0__vct_6_f_1;
#line 321 "prog_io_mutable.m"
};

static /* final */ const struct parse_tree__prog_io_mutable__vector_common_type_6_0_s parse_tree__prog_io_mutable_vector_common_6[5];



static /* final */ const MR_Box parse_tree__prog_io_mutable_scalar_common_1[3][3] = {
  /* row 0 */
  {
    ((MR_Box) (&mercury__pair__pair__type_ctor_info_pair_2)),
    ((MR_Box) (&parse_tree__prog_io_mutable__parse_tree__prog_io_mutable__type_ctor_info_collected_mutable_attribute_0)),
    ((MR_Box) (&parse_tree__prog_io_mutable__parse_tree__prog_io_mutable__type_ctor_info_collected_mutable_attribute_0))
  },
  /* row 1 */
  {
    ((MR_Box) (&parse_tree__prog_io_mutable_scalar_common_4[0])),
    ((MR_Box) (parse_tree__prog_io_mutable__parse_mutable_attrs_3_p_0_1)),
    ((MR_Box) (MR_Word) ((MR_Integer) 0))
  },
  /* row 2 */
  {
    ((MR_Box) (&parse_tree__prog_io_mutable_scalar_common_5[0])),
    ((MR_Box) (parse_tree__prog_io_mutable__parse_mutable_attrs_3_p_0_6)),
    ((MR_Box) (MR_Word) ((MR_Integer) 0))
  },
};

static /* final */ const MR_Box parse_tree__prog_io_mutable_scalar_common_2[48][2] = {
  /* row 0 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 1)))),
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))))
  },
  /* row 1 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 4)),
    ((MR_Box) ((MR_String) "."))
  },
  /* row 2 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__prog_io_mutable_scalar_common_2[1]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__prog_io_mutable_scalar_common_2[0])))
  },
  /* row 3 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 5)),
    ((MR_Box) ((MR_String) "Error: invalid mutable name."))
  },
  /* row 4 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__prog_io_mutable_scalar_common_2[3]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__prog_io_mutable_scalar_common_2[0])))
  },
  /* row 5 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 5)),
    ((MR_Box) ((MR_String) "declaration."))
  },
  /* row 6 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__prog_io_mutable_scalar_common_2[5]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__prog_io_mutable_scalar_common_2[0])))
  },
  /* row 7 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 13)),
    ((MR_Box) ((MR_String) "mutable"))
  },
  /* row 8 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__prog_io_mutable_scalar_common_2[7]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__prog_io_mutable_scalar_common_2[6])))
  },
  /* row 9 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 5)),
    ((MR_Box) ((MR_String) "Error: invalid inst in"))
  },
  /* row 10 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__prog_io_mutable_scalar_common_2[9]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__prog_io_mutable_scalar_common_2[8])))
  },
  /* row 11 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 1)),
    ((MR_Box) ((MR_Integer) 1))
  },
  /* row 12 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 0)),
    ((MR_Box) ((MR_Integer) 1))
  },
  /* row 13 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__prog_io_mutable_scalar_common_2[12]))),
    ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__prog_io_mutable_scalar_common_2[11])))
  },
  /* row 14 */
  {
    ((MR_Box) (&parse_tree__prog_io_mutable_scalar_common_2[13])),
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))))
  },
  /* row 15 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__prog_io_mutable_scalar_common_2[12]))),
    ((MR_Box) (MR_mkword(MR_mktag(2), &parse_tree__prog_io_mutable_scalar_common_3[0])))
  },
  /* row 16 */
  {
    ((MR_Box) (&parse_tree__prog_io_mutable_scalar_common_2[15])),
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__prog_io_mutable_scalar_common_2[14])))
  },
  /* row 17 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__prog_io_mutable_scalar_common_2[12]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__prog_io_mutable_scalar_common_3[1])))
  },
  /* row 18 */
  {
    ((MR_Box) (&parse_tree__prog_io_mutable_scalar_common_2[17])),
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__prog_io_mutable_scalar_common_2[16])))
  },
  /* row 19 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__prog_io_mutable_scalar_common_3[1]))),
    ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__prog_io_mutable_scalar_common_2[11])))
  },
  /* row 20 */
  {
    ((MR_Box) (&parse_tree__prog_io_mutable_scalar_common_2[19])),
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__prog_io_mutable_scalar_common_2[18])))
  },
  /* row 21 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__prog_io_mutable_scalar_common_3[1]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__prog_io_mutable_scalar_common_3[2])))
  },
  /* row 22 */
  {
    ((MR_Box) (&parse_tree__prog_io_mutable_scalar_common_2[21])),
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__prog_io_mutable_scalar_common_2[20])))
  },
  /* row 23 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 5)),
    ((MR_Box) ((MR_String) "in"))
  },
  /* row 24 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__prog_io_mutable_scalar_common_2[23]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__prog_io_mutable_scalar_common_2[8])))
  },
  /* row 25 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 5)),
    ((MR_Box) ((MR_String) "Error: unrecognised attribute"))
  },
  /* row 26 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__prog_io_mutable_scalar_common_2[25]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__prog_io_mutable_scalar_common_2[24])))
  },
  /* row 27 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 5)),
    ((MR_Box) ((MR_String) "Error: the type in a"))
  },
  /* row 28 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 13)),
    ((MR_Box) ((MR_String) "mutable"))
  },
  /* row 29 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 5)),
    ((MR_Box) ((MR_String) "declaration cannot contain variables:"))
  },
  /* row 30 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 5)),
    ((MR_Box) ((MR_String) "Error: the inst in a"))
  },
  /* row 31 */
  {
    ((MR_Box) (&parse_tree__prog_io_mutable_scalar_common_3[3])),
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))))
  },
  /* row 32 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 5)),
    ((MR_Box) ((MR_String) "Error: conflicting attributes"))
  },
  /* row 33 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 5)),
    ((MR_Box) ((MR_String) "in attribute list:"))
  },
  /* row 34 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 5)),
    ((MR_Box) ((MR_String) "Error: malformed attribute list"))
  },
  /* row 35 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 5)),
    ((MR_Box) ((MR_String) "in"))
  },
  /* row 36 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 5)),
    ((MR_Box) ((MR_String) "declaration:"))
  },
  /* row 37 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 0)),
    ((MR_Box) ((MR_Integer) 1))
  },
  /* row 38 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 1)),
    ((MR_Box) ((MR_Integer) 1))
  },
  /* row 39 */
  {
    ((MR_Box) (&parse_tree__prog_io_mutable_scalar_common_3[4])),
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))))
  },
  /* row 40 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 5)),
    ((MR_Box) ((MR_String) "Error:"))
  },
  /* row 41 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 13)),
    ((MR_Box) ((MR_String) "initialise"))
  },
  /* row 42 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 5)),
    ((MR_Box) ((MR_String) "declaration"))
  },
  /* row 43 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 5)),
    ((MR_Box) ((MR_String) "requires arity, found"))
  },
  /* row 44 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 5)),
    ((MR_Box) ((MR_String) "declaration specifies a predicate"))
  },
  /* row 45 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 5)),
    ((MR_Box) ((MR_String) "whose arity is not zero or two:"))
  },
  /* row 46 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 13)),
    ((MR_Box) ((MR_String) "finalise"))
  },
  /* row 47 */
  {
    ((MR_Box) (&parse_tree__prog_io_mutable_scalar_common_3[5])),
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))))
  },
};

static /* final */ const MR_Box parse_tree__prog_io_mutable_scalar_common_3[6][1] = {
  /* row 0 */
  {
    ((MR_Box) ((MR_Integer) 1))
  },
  /* row 1 */
  {
    ((MR_Box) ((MR_Integer) 1))
  },
  /* row 2 */
  {
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row 3 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__prog_io_mutable_scalar_common_2[10])))
  },
  /* row 4 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__prog_io_mutable_scalar_common_2[26])))
  },
  /* row 5 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__prog_io_mutable_scalar_common_2[4])))
  },
};

static /* final */ const MR_Box parse_tree__prog_io_mutable_scalar_common_4[1][5] = {
  /* row 0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 2)),
    ((MR_Box) (&parse_tree__prog_io_mutable__term__pti_term_1__plain_term__type_ctor_info_generic_0)),
    ((MR_Box) (&parse_tree__prog_io_mutable__parse_tree__prog_io_util__pti_maybe1_1__plain_parse_tree__prog_io_mutable__type_ctor_info_collected_mutable_attribute_0))
  },
};

static /* final */ const MR_Box parse_tree__prog_io_mutable_scalar_common_5[1][6] = {
  /* row 0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 3)),
    ((MR_Box) (&parse_tree__prog_io_mutable__parse_tree__prog_io_mutable__type_ctor_info_collected_mutable_attribute_0)),
    ((MR_Box) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_mutable_var_attributes_0)),
    ((MR_Box) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_mutable_var_attributes_0))
  },
};


static /* final */ const struct parse_tree__prog_io_mutable__vector_common_type_6_0_s parse_tree__prog_io_mutable_vector_common_6[5] = {
  /* row 0 */
  {
    (MR_String) "attach_to_io_state",
    (MR_Word) MR_mkword(MR_mktag(2), &parse_tree__prog_io_mutable_scalar_common_3[0])
  },
  /* row 1 */
  {
    (MR_String) "constant",
    (MR_Word) MR_mkword(MR_mktag(3), &parse_tree__prog_io_mutable_scalar_common_2[37])
  },
  /* row 2 */
  {
    (MR_String) "thread_local",
    (MR_Word) MR_mkword(MR_mktag(3), &parse_tree__prog_io_mutable_scalar_common_2[38])
  },
  /* row 3 */
  {
    (MR_String) "trailed",
    (MR_Word) MR_mkword(MR_mktag(1), &parse_tree__prog_io_mutable_scalar_common_3[1])
  },
  /* row 4 */
  {
    (MR_String) "untrailed",
    (MR_Word) MR_mkword(MR_mktag(1), &parse_tree__prog_io_mutable_scalar_common_3[2])
  },
};


#include "io.mh"
#include "string.mh"
#include "time.mh"
#include "mdbcomp.rtti_access.mh"



#line 730 "parse_tree.prog_io_mutable.c"
static const MR_FA_PseudoTypeInfo_Struct1 parse_tree__prog_io_mutable__term__pti_term_1__plain_term__type_ctor_info_generic_0 = {
  &mercury__term__term__type_ctor_info_term_1,
  {
    (MR_PseudoTypeInfo) &mercury__term__term__type_ctor_info_generic_0
  }
};

#line 738 "parse_tree.prog_io_mutable.c"
static const MR_FA_PseudoTypeInfo_Struct1 parse_tree__prog_io_mutable__parse_tree__prog_io_util__pti_maybe1_1__plain_parse_tree__prog_io_mutable__type_ctor_info_collected_mutable_attribute_0 = {
  &parse_tree__prog_io_util__parse_tree__prog_io_util__type_ctor_info_maybe1_1,
  {
    (MR_PseudoTypeInfo) &parse_tree__prog_io_mutable__parse_tree__prog_io_mutable__type_ctor_info_collected_mutable_attribute_0
  }
};

#line 746 "parse_tree.prog_io_mutable.c"
static const MR_PseudoTypeInfo parse_tree__prog_io_mutable__parse_tree__prog_io_mutable__field_types_collected_mutable_attribute_0_0[1] = {
  (MR_PseudoTypeInfo) &parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_mutable_trailed_0
};

#line 751 "parse_tree.prog_io_mutable.c"
static const MR_DuFunctorDesc parse_tree__prog_io_mutable__parse_tree__prog_io_mutable__du_functor_desc_collected_mutable_attribute_0_0 = {
  (MR_String) "mutable_attr_trailed",
  (MR_Integer) 1,
  (MR_Integer) 0,
  mercury__private_builtin__MR_SECTAG_NONE,
  (MR_Integer) 1,
  (MR_Integer) -1,
  (MR_Integer) 0,
  parse_tree__prog_io_mutable__parse_tree__prog_io_mutable__field_types_collected_mutable_attribute_0_0,
  NULL,
  NULL,
  NULL
};

#line 766 "parse_tree.prog_io_mutable.c"
static const MR_PseudoTypeInfo parse_tree__prog_io_mutable__parse_tree__prog_io_mutable__field_types_collected_mutable_attribute_0_1[1] = {
  (MR_PseudoTypeInfo) &parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_foreign_name_0
};

#line 771 "parse_tree.prog_io_mutable.c"
static const MR_DuFunctorDesc parse_tree__prog_io_mutable__parse_tree__prog_io_mutable__du_functor_desc_collected_mutable_attribute_0_1 = {
  (MR_String) "mutable_attr_foreign_name",
  (MR_Integer) 1,
  (MR_Integer) 0,
  mercury__private_builtin__MR_SECTAG_NONE_DIRECT_ARG,
  (MR_Integer) 0,
  (MR_Integer) -1,
  (MR_Integer) 1,
  parse_tree__prog_io_mutable__parse_tree__prog_io_mutable__field_types_collected_mutable_attribute_0_1,
  NULL,
  NULL,
  NULL
};

#line 786 "parse_tree.prog_io_mutable.c"
static const MR_PseudoTypeInfo parse_tree__prog_io_mutable__parse_tree__prog_io_mutable__field_types_collected_mutable_attribute_0_2[1] = {
  (MR_PseudoTypeInfo) &parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_mutable_attach_to_io_state_0
};

#line 791 "parse_tree.prog_io_mutable.c"
static const MR_DuFunctorDesc parse_tree__prog_io_mutable__parse_tree__prog_io_mutable__du_functor_desc_collected_mutable_attribute_0_2 = {
  (MR_String) "mutable_attr_attach_to_io_state",
  (MR_Integer) 1,
  (MR_Integer) 0,
  mercury__private_builtin__MR_SECTAG_NONE,
  (MR_Integer) 2,
  (MR_Integer) -1,
  (MR_Integer) 2,
  parse_tree__prog_io_mutable__parse_tree__prog_io_mutable__field_types_collected_mutable_attribute_0_2,
  NULL,
  NULL,
  NULL
};

#line 806 "parse_tree.prog_io_mutable.c"
static const MR_PseudoTypeInfo parse_tree__prog_io_mutable__parse_tree__prog_io_mutable__field_types_collected_mutable_attribute_0_3[1] = {
  (MR_PseudoTypeInfo) &parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_mutable_constant_0
};

#line 811 "parse_tree.prog_io_mutable.c"
static const MR_DuFunctorDesc parse_tree__prog_io_mutable__parse_tree__prog_io_mutable__du_functor_desc_collected_mutable_attribute_0_3 = {
  (MR_String) "mutable_attr_constant",
  (MR_Integer) 1,
  (MR_Integer) 0,
  mercury__private_builtin__MR_SECTAG_REMOTE,
  (MR_Integer) 3,
  (MR_Integer) 0,
  (MR_Integer) 3,
  parse_tree__prog_io_mutable__parse_tree__prog_io_mutable__field_types_collected_mutable_attribute_0_3,
  NULL,
  NULL,
  NULL
};

#line 826 "parse_tree.prog_io_mutable.c"
static const MR_PseudoTypeInfo parse_tree__prog_io_mutable__parse_tree__prog_io_mutable__field_types_collected_mutable_attribute_0_4[1] = {
  (MR_PseudoTypeInfo) &parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_mutable_thread_local_0
};

#line 831 "parse_tree.prog_io_mutable.c"
static const MR_DuFunctorDesc parse_tree__prog_io_mutable__parse_tree__prog_io_mutable__du_functor_desc_collected_mutable_attribute_0_4 = {
  (MR_String) "mutable_attr_thread_local",
  (MR_Integer) 1,
  (MR_Integer) 0,
  mercury__private_builtin__MR_SECTAG_REMOTE,
  (MR_Integer) 3,
  (MR_Integer) 1,
  (MR_Integer) 4,
  parse_tree__prog_io_mutable__parse_tree__prog_io_mutable__field_types_collected_mutable_attribute_0_4,
  NULL,
  NULL,
  NULL
};

#line 846 "parse_tree.prog_io_mutable.c"
static const MR_DuFunctorDescPtr parse_tree__prog_io_mutable__parse_tree__prog_io_mutable__du_stag_ordered_collected_mutable_attribute_0_0[1] = {
  &parse_tree__prog_io_mutable__parse_tree__prog_io_mutable__du_functor_desc_collected_mutable_attribute_0_1
};

#line 851 "parse_tree.prog_io_mutable.c"
static const MR_DuFunctorDescPtr parse_tree__prog_io_mutable__parse_tree__prog_io_mutable__du_stag_ordered_collected_mutable_attribute_0_1[1] = {
  &parse_tree__prog_io_mutable__parse_tree__prog_io_mutable__du_functor_desc_collected_mutable_attribute_0_0
};

#line 856 "parse_tree.prog_io_mutable.c"
static const MR_DuFunctorDescPtr parse_tree__prog_io_mutable__parse_tree__prog_io_mutable__du_stag_ordered_collected_mutable_attribute_0_2[1] = {
  &parse_tree__prog_io_mutable__parse_tree__prog_io_mutable__du_functor_desc_collected_mutable_attribute_0_2
};

#line 861 "parse_tree.prog_io_mutable.c"
static const MR_DuFunctorDescPtr parse_tree__prog_io_mutable__parse_tree__prog_io_mutable__du_stag_ordered_collected_mutable_attribute_0_3[2] = {
  &parse_tree__prog_io_mutable__parse_tree__prog_io_mutable__du_functor_desc_collected_mutable_attribute_0_3,
  &parse_tree__prog_io_mutable__parse_tree__prog_io_mutable__du_functor_desc_collected_mutable_attribute_0_4
};

#line 867 "parse_tree.prog_io_mutable.c"
static const MR_DuPtagLayout parse_tree__prog_io_mutable__parse_tree__prog_io_mutable__du_ptag_ordered_collected_mutable_attribute_0[4] = {
  {
    (MR_Integer) 1,
    mercury__private_builtin__MR_SECTAG_NONE_DIRECT_ARG,
    parse_tree__prog_io_mutable__parse_tree__prog_io_mutable__du_stag_ordered_collected_mutable_attribute_0_0
  },
  {
    (MR_Integer) 1,
    mercury__private_builtin__MR_SECTAG_NONE,
    parse_tree__prog_io_mutable__parse_tree__prog_io_mutable__du_stag_ordered_collected_mutable_attribute_0_1
  },
  {
    (MR_Integer) 1,
    mercury__private_builtin__MR_SECTAG_NONE,
    parse_tree__prog_io_mutable__parse_tree__prog_io_mutable__du_stag_ordered_collected_mutable_attribute_0_2
  },
  {
    (MR_Integer) 2,
    mercury__private_builtin__MR_SECTAG_REMOTE,
    parse_tree__prog_io_mutable__parse_tree__prog_io_mutable__du_stag_ordered_collected_mutable_attribute_0_3
  }
};

#line 891 "parse_tree.prog_io_mutable.c"
static const MR_DuFunctorDescPtr parse_tree__prog_io_mutable__parse_tree__prog_io_mutable__du_name_ordered_collected_mutable_attribute_0[5] = {
  &parse_tree__prog_io_mutable__parse_tree__prog_io_mutable__du_functor_desc_collected_mutable_attribute_0_2,
  &parse_tree__prog_io_mutable__parse_tree__prog_io_mutable__du_functor_desc_collected_mutable_attribute_0_3,
  &parse_tree__prog_io_mutable__parse_tree__prog_io_mutable__du_functor_desc_collected_mutable_attribute_0_1,
  &parse_tree__prog_io_mutable__parse_tree__prog_io_mutable__du_functor_desc_collected_mutable_attribute_0_4,
  &parse_tree__prog_io_mutable__parse_tree__prog_io_mutable__du_functor_desc_collected_mutable_attribute_0_0
};

#line 900 "parse_tree.prog_io_mutable.c"
static const MR_Integer parse_tree__prog_io_mutable__parse_tree__prog_io_mutable__functor_number_map_collected_mutable_attribute_0[5] = {
  (MR_Integer) 4,
  (MR_Integer) 2,
  (MR_Integer) 0,
  (MR_Integer) 1,
  (MR_Integer) 3
};

#line 909 "parse_tree.prog_io_mutable.c"
const MR_TypeCtorInfo_Struct parse_tree__prog_io_mutable__parse_tree__prog_io_mutable__type_ctor_info_collected_mutable_attribute_0 = {
  (MR_Integer) 0,
  (MR_Integer) 15,
  (MR_Integer) 4,
  mercury__private_builtin__MR_TYPECTOR_REP_DU,
  ((MR_Box) (parse_tree__prog_io_mutable____Unify____collected_mutable_attribute_0_0_10001)),
  ((MR_Box) (parse_tree__prog_io_mutable____Compare____collected_mutable_attribute_0_0_10001)),
  (MR_String) "parse_tree.prog_io_mutable",
  (MR_String) "collected_mutable_attribute",
  {     parse_tree__prog_io_mutable__parse_tree__prog_io_mutable__du_name_ordered_collected_mutable_attribute_0 },
  {     parse_tree__prog_io_mutable__parse_tree__prog_io_mutable__du_ptag_ordered_collected_mutable_attribute_0 },
  (MR_Integer) 5,
  (MR_Integer) 4,
  parse_tree__prog_io_mutable__parse_tree__prog_io_mutable__functor_number_map_collected_mutable_attribute_0
};

#line 926 "parse_tree.prog_io_mutable.c"
static MR_bool MR_CALL 
parse_tree__prog_io_mutable____Unify____collected_mutable_attribute_0_0_10001(
#line 929 "parse_tree.prog_io_mutable.c"
  MR_Box parse_tree__prog_io_mutable__wrapper_arg_1,
#line 931 "parse_tree.prog_io_mutable.c"
  MR_Box parse_tree__prog_io_mutable__wrapper_arg_2)
#line 933 "parse_tree.prog_io_mutable.c"
{
#line 935 "parse_tree.prog_io_mutable.c"
  {
#line 937 "parse_tree.prog_io_mutable.c"
    MR_bool parse_tree__prog_io_mutable__succeeded;

#line 940 "parse_tree.prog_io_mutable.c"
    {
#line 942 "parse_tree.prog_io_mutable.c"
      parse_tree__prog_io_mutable__succeeded = parse_tree__prog_io_mutable____Unify____collected_mutable_attribute_0_0(((MR_Word) parse_tree__prog_io_mutable__wrapper_arg_1), ((MR_Word) parse_tree__prog_io_mutable__wrapper_arg_2));
    }
#line 945 "parse_tree.prog_io_mutable.c"
    return parse_tree__prog_io_mutable__succeeded;
#line 947 "parse_tree.prog_io_mutable.c"
  }
#line 949 "parse_tree.prog_io_mutable.c"
}

#line 952 "parse_tree.prog_io_mutable.c"
static void MR_CALL 
parse_tree__prog_io_mutable____Compare____collected_mutable_attribute_0_0_10001(
#line 955 "parse_tree.prog_io_mutable.c"
  MR_Box * parse_tree__prog_io_mutable__wrapper_arg_1,
#line 957 "parse_tree.prog_io_mutable.c"
  MR_Box parse_tree__prog_io_mutable__wrapper_arg_2,
#line 959 "parse_tree.prog_io_mutable.c"
  MR_Box parse_tree__prog_io_mutable__wrapper_arg_3)
#line 961 "parse_tree.prog_io_mutable.c"
{
#line 963 "parse_tree.prog_io_mutable.c"
  {
#line 965 "parse_tree.prog_io_mutable.c"
    MR_Word parse_tree__prog_io_mutable__conv0_HeadVar__1_1;

#line 968 "parse_tree.prog_io_mutable.c"
    {
#line 970 "parse_tree.prog_io_mutable.c"
      parse_tree__prog_io_mutable____Compare____collected_mutable_attribute_0_0(&parse_tree__prog_io_mutable__conv0_HeadVar__1_1, ((MR_Word) parse_tree__prog_io_mutable__wrapper_arg_2), ((MR_Word) parse_tree__prog_io_mutable__wrapper_arg_3));
    }
#line 973 "parse_tree.prog_io_mutable.c"
    *parse_tree__prog_io_mutable__wrapper_arg_1 = ((MR_Box) (parse_tree__prog_io_mutable__conv0_HeadVar__1_1));
#line 975 "parse_tree.prog_io_mutable.c"
  }
#line 977 "parse_tree.prog_io_mutable.c"
}

#line 36 "prog_io_mutable.m"
MR_bool MR_CALL 
parse_tree__prog_io_mutable__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_112_97_114_115_101_95_109_117_116_97_98_108_101_95_100_101_99_108_95_105_110_102_111_95_95_91_49_93_95_48_6_p_0(
#line 36 "prog_io_mutable.m"
  MR_Word parse_tree__prog_io_mutable__VarSet_8,
#line 36 "prog_io_mutable.m"
  MR_Word parse_tree__prog_io_mutable__Terms_9,
#line 36 "prog_io_mutable.m"
  MR_Word parse_tree__prog_io_mutable__Context_10,
#line 36 "prog_io_mutable.m"
  MR_Integer parse_tree__prog_io_mutable__SeqNum_11,
#line 36 "prog_io_mutable.m"
  MR_Word * parse_tree__prog_io_mutable__MaybeMutableInfo_12)
#line 36 "prog_io_mutable.m"
{
#line 138 "prog_io_mutable.m"
  {
#line 138 "prog_io_mutable.m"
    MR_bool parse_tree__prog_io_mutable__succeeded = ((MR_tag((MR_Word) parse_tree__prog_io_mutable__Terms_9)) == (MR_mktag((MR_Integer) 1)));
#line 138 "prog_io_mutable.m"
    MR_Word parse_tree__prog_io_mutable__TypeCtorInfo_42_42;
#line 138 "prog_io_mutable.m"
    MR_Word parse_tree__prog_io_mutable__TypeCtorInfo_43_43;
#line 138 "prog_io_mutable.m"
    MR_Word parse_tree__prog_io_mutable__NameTerm_13;
#line 138 "prog_io_mutable.m"
    MR_Word parse_tree__prog_io_mutable__TypeTerm_14;
#line 138 "prog_io_mutable.m"
    MR_Word parse_tree__prog_io_mutable__ValueTerm_15;
#line 138 "prog_io_mutable.m"
    MR_Word parse_tree__prog_io_mutable__InstTerm_16;
#line 138 "prog_io_mutable.m"
    MR_Word parse_tree__prog_io_mutable__OptMutAttrsTerm_17;
#line 138 "prog_io_mutable.m"
    MR_Word parse_tree__prog_io_mutable__MaybeName_18;
#line 138 "prog_io_mutable.m"
    MR_Word parse_tree__prog_io_mutable__MaybeType_19;
#line 138 "prog_io_mutable.m"
    MR_Word parse_tree__prog_io_mutable__Value_20;
#line 138 "prog_io_mutable.m"
    MR_Word parse_tree__prog_io_mutable__ProgVarSet_21;
#line 138 "prog_io_mutable.m"
    MR_Word parse_tree__prog_io_mutable__MaybeInst_22;
#line 138 "prog_io_mutable.m"
    MR_Word parse_tree__prog_io_mutable__MaybeMutAttrs_23;
#line 138 "prog_io_mutable.m"
    MR_Word parse_tree__prog_io_mutable__V_31_31;
#line 138 "prog_io_mutable.m"
    MR_Word parse_tree__prog_io_mutable__V_32_32;
#line 138 "prog_io_mutable.m"
    MR_Word parse_tree__prog_io_mutable__V_33_33;
#line 180 "prog_io_mutable.m"
    MR_String parse_tree__prog_io_mutable__Name_51;
#line 178 "prog_io_mutable.m"
    MR_Word parse_tree__prog_io_mutable__V_55_55;
#line 178 "prog_io_mutable.m"
    MR_Word parse_tree__prog_io_mutable__V_56_56;
#line 178 "prog_io_mutable.m"
    MR_Word parse_tree__prog_io_mutable__V_52_52;
#line 169 "prog_io_mutable.m"
    MR_String parse_tree__prog_io_mutable__Name_25;
#line 169 "prog_io_mutable.m"
    MR_Word parse_tree__prog_io_mutable__Type_26;
#line 169 "prog_io_mutable.m"
    MR_Word parse_tree__prog_io_mutable__Inst_27;
#line 169 "prog_io_mutable.m"
    MR_Word parse_tree__prog_io_mutable__MutAttrs_28;

#line 139 "prog_io_mutable.m"
    if (parse_tree__prog_io_mutable__succeeded)
#line 139 "prog_io_mutable.m"
      {
#line 139 "prog_io_mutable.m"
        parse_tree__prog_io_mutable__NameTerm_13 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_mutable__Terms_9, (MR_Integer) 0)));
#line 139 "prog_io_mutable.m"
        parse_tree__prog_io_mutable__V_31_31 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_mutable__Terms_9, (MR_Integer) 1)));
#line 139 "prog_io_mutable.m"
        parse_tree__prog_io_mutable__succeeded = ((MR_tag((MR_Word) parse_tree__prog_io_mutable__V_31_31)) == (MR_mktag((MR_Integer) 1)));
#line 139 "prog_io_mutable.m"
        if (parse_tree__prog_io_mutable__succeeded)
#line 139 "prog_io_mutable.m"
          {
#line 139 "prog_io_mutable.m"
            parse_tree__prog_io_mutable__TypeTerm_14 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_mutable__V_31_31, (MR_Integer) 0)));
#line 139 "prog_io_mutable.m"
            parse_tree__prog_io_mutable__V_32_32 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_mutable__V_31_31, (MR_Integer) 1)));
#line 139 "prog_io_mutable.m"
            parse_tree__prog_io_mutable__succeeded = ((MR_tag((MR_Word) parse_tree__prog_io_mutable__V_32_32)) == (MR_mktag((MR_Integer) 1)));
#line 139 "prog_io_mutable.m"
            if (parse_tree__prog_io_mutable__succeeded)
#line 139 "prog_io_mutable.m"
              {
#line 139 "prog_io_mutable.m"
                parse_tree__prog_io_mutable__ValueTerm_15 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_mutable__V_32_32, (MR_Integer) 0)));
#line 139 "prog_io_mutable.m"
                parse_tree__prog_io_mutable__V_33_33 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_mutable__V_32_32, (MR_Integer) 1)));
#line 139 "prog_io_mutable.m"
                parse_tree__prog_io_mutable__succeeded = ((MR_tag((MR_Word) parse_tree__prog_io_mutable__V_33_33)) == (MR_mktag((MR_Integer) 1)));
#line 139 "prog_io_mutable.m"
                if (parse_tree__prog_io_mutable__succeeded)
#line 139 "prog_io_mutable.m"
                  {
#line 139 "prog_io_mutable.m"
                    parse_tree__prog_io_mutable__InstTerm_16 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_mutable__V_33_33, (MR_Integer) 0)));
#line 139 "prog_io_mutable.m"
                    parse_tree__prog_io_mutable__OptMutAttrsTerm_17 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_mutable__V_33_33, (MR_Integer) 1)));
#line 178 "prog_io_mutable.m"
                    parse_tree__prog_io_mutable__succeeded = ((MR_tag((MR_Word) parse_tree__prog_io_mutable__NameTerm_13)) == (MR_mktag((MR_Integer) 0)));
#line 178 "prog_io_mutable.m"
                    if (parse_tree__prog_io_mutable__succeeded)
#line 178 "prog_io_mutable.m"
                      {
#line 178 "prog_io_mutable.m"
                        parse_tree__prog_io_mutable__V_55_55 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_mutable__NameTerm_13, (MR_Integer) 0)));
#line 178 "prog_io_mutable.m"
                        parse_tree__prog_io_mutable__V_56_56 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_mutable__NameTerm_13, (MR_Integer) 1)));
#line 178 "prog_io_mutable.m"
                        parse_tree__prog_io_mutable__V_52_52 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_mutable__NameTerm_13, (MR_Integer) 2)));
#line 178 "prog_io_mutable.m"
                        parse_tree__prog_io_mutable__succeeded = (parse_tree__prog_io_mutable__V_56_56 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 178 "prog_io_mutable.m"
                        if (parse_tree__prog_io_mutable__succeeded)
#line 178 "prog_io_mutable.m"
                          {
#line 178 "prog_io_mutable.m"
                            parse_tree__prog_io_mutable__succeeded = ((MR_tag((MR_Word) parse_tree__prog_io_mutable__V_55_55)) == (MR_mktag((MR_Integer) 0)));
#line 178 "prog_io_mutable.m"
                            if (parse_tree__prog_io_mutable__succeeded)
#line 178 "prog_io_mutable.m"
                              parse_tree__prog_io_mutable__Name_51 = ((MR_String) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_mutable__V_55_55, (MR_Integer) 0)));
#line 178 "prog_io_mutable.m"
                          }
#line 178 "prog_io_mutable.m"
                      }
#line 180 "prog_io_mutable.m"
                    if (parse_tree__prog_io_mutable__succeeded)
#line 179 "prog_io_mutable.m"
                      {
#line 179 "prog_io_mutable.m"
                        parse_tree__prog_io_mutable__MaybeName_18 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 179 "prog_io_mutable.m"
                        MR_hl_field(MR_mktag(1), parse_tree__prog_io_mutable__MaybeName_18, 0) = ((MR_Box) (parse_tree__prog_io_mutable__Name_51));
#line 179 "prog_io_mutable.m"
                      }
#line 180 "prog_io_mutable.m"
                    else
#line 181 "prog_io_mutable.m"
                      {
#line 181 "prog_io_mutable.m"
                        MR_Word parse_tree__prog_io_mutable__Spec_54;
#line 181 "prog_io_mutable.m"
                        MR_Word parse_tree__prog_io_mutable__V_64_64;
#line 181 "prog_io_mutable.m"
                        MR_Word parse_tree__prog_io_mutable__V_65_65;
#line 181 "prog_io_mutable.m"
                        MR_Word parse_tree__prog_io_mutable__V_66_66;
#line 181 "prog_io_mutable.m"
                        MR_Word parse_tree__prog_io_mutable__V_71_71;

#line 183 "prog_io_mutable.m"
                        {
#line 183 "prog_io_mutable.m"
                          parse_tree__prog_io_mutable__V_66_66 = mercury__term__get_term_context_1_f_0((MR_Word) &mercury__term__term__type_ctor_info_generic_0, parse_tree__prog_io_mutable__NameTerm_13);
                        }
#line 183 "prog_io_mutable.m"
                        {
#line 183 "prog_io_mutable.m"
                          parse_tree__prog_io_mutable__V_65_65 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 183 "prog_io_mutable.m"
                          MR_hl_field(MR_mktag(0), parse_tree__prog_io_mutable__V_65_65, 0) = ((MR_Box) (parse_tree__prog_io_mutable__V_66_66));
#line 183 "prog_io_mutable.m"
                          MR_hl_field(MR_mktag(0), parse_tree__prog_io_mutable__V_65_65, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__prog_io_mutable_scalar_common_2[47])));
#line 183 "prog_io_mutable.m"
                        }
#line 183 "prog_io_mutable.m"
                        {
#line 183 "prog_io_mutable.m"
                          parse_tree__prog_io_mutable__V_64_64 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 183 "prog_io_mutable.m"
                          MR_hl_field(MR_mktag(1), parse_tree__prog_io_mutable__V_64_64, 0) = ((MR_Box) (parse_tree__prog_io_mutable__V_65_65));
#line 183 "prog_io_mutable.m"
                          MR_hl_field(MR_mktag(1), parse_tree__prog_io_mutable__V_64_64, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 183 "prog_io_mutable.m"
                        }
#line 182 "prog_io_mutable.m"
                        {
#line 182 "prog_io_mutable.m"
                          parse_tree__prog_io_mutable__Spec_54 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 182 "prog_io_mutable.m"
                          MR_hl_field(MR_mktag(0), parse_tree__prog_io_mutable__Spec_54, 0) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 182 "prog_io_mutable.m"
                          MR_hl_field(MR_mktag(0), parse_tree__prog_io_mutable__Spec_54, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 2))));
#line 182 "prog_io_mutable.m"
                          MR_hl_field(MR_mktag(0), parse_tree__prog_io_mutable__Spec_54, 2) = ((MR_Box) (parse_tree__prog_io_mutable__V_64_64));
#line 182 "prog_io_mutable.m"
                        }
#line 184 "prog_io_mutable.m"
                        {
#line 184 "prog_io_mutable.m"
                          parse_tree__prog_io_mutable__V_71_71 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 184 "prog_io_mutable.m"
                          MR_hl_field(MR_mktag(1), parse_tree__prog_io_mutable__V_71_71, 0) = ((MR_Box) (parse_tree__prog_io_mutable__Spec_54));
#line 184 "prog_io_mutable.m"
                          MR_hl_field(MR_mktag(1), parse_tree__prog_io_mutable__V_71_71, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 184 "prog_io_mutable.m"
                        }
#line 184 "prog_io_mutable.m"
                        {
#line 184 "prog_io_mutable.m"
                          parse_tree__prog_io_mutable__MaybeName_18 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 184 "prog_io_mutable.m"
                          MR_hl_field(MR_mktag(0), parse_tree__prog_io_mutable__MaybeName_18, 0) = ((MR_Box) (parse_tree__prog_io_mutable__V_71_71));
#line 184 "prog_io_mutable.m"
                        }
#line 181 "prog_io_mutable.m"
                      }
#line 141 "prog_io_mutable.m"
                    {
#line 141 "prog_io_mutable.m"
                      parse_tree__prog_io_mutable__parse_mutable_type_3_p_0(parse_tree__prog_io_mutable__VarSet_8, parse_tree__prog_io_mutable__TypeTerm_14, &parse_tree__prog_io_mutable__MaybeType_19);
                    }
#line 1201 "parse_tree.prog_io_mutable.c"
                    parse_tree__prog_io_mutable__TypeCtorInfo_42_42 = (MR_Word) &mercury__term__term__type_ctor_info_generic_0;
#line 1203 "parse_tree.prog_io_mutable.c"
                    parse_tree__prog_io_mutable__TypeCtorInfo_43_43 = (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0;
#line 142 "prog_io_mutable.m"
                    {
#line 142 "prog_io_mutable.m"
                      mercury__term__coerce_2_p_0(parse_tree__prog_io_mutable__TypeCtorInfo_42_42, parse_tree__prog_io_mutable__TypeCtorInfo_43_43, parse_tree__prog_io_mutable__ValueTerm_15, &parse_tree__prog_io_mutable__Value_20);
                    }
#line 143 "prog_io_mutable.m"
                    {
#line 143 "prog_io_mutable.m"
                      mercury__varset__coerce_2_p_0(parse_tree__prog_io_mutable__TypeCtorInfo_42_42, parse_tree__prog_io_mutable__TypeCtorInfo_43_43, parse_tree__prog_io_mutable__VarSet_8, &parse_tree__prog_io_mutable__ProgVarSet_21);
                    }
#line 144 "prog_io_mutable.m"
                    {
#line 144 "prog_io_mutable.m"
                      parse_tree__prog_io_mutable__parse_mutable_inst_3_p_0(parse_tree__prog_io_mutable__VarSet_8, parse_tree__prog_io_mutable__InstTerm_16, &parse_tree__prog_io_mutable__MaybeInst_22);
                    }
#line 150 "prog_io_mutable.m"
                    if ((parse_tree__prog_io_mutable__OptMutAttrsTerm_17 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 148 "prog_io_mutable.m"
                      {
#line 148 "prog_io_mutable.m"
                        MR_Word parse_tree__prog_io_mutable__V_35_35;

#line 149 "prog_io_mutable.m"
                        {
#line 149 "prog_io_mutable.m"
                          parse_tree__prog_io_mutable__V_35_35 = parse_tree__prog_item__default_mutable_attributes_0_f_0();
                        }
#line 149 "prog_io_mutable.m"
                        {
#line 149 "prog_io_mutable.m"
                          parse_tree__prog_io_mutable__MaybeMutAttrs_23 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 149 "prog_io_mutable.m"
                          MR_hl_field(MR_mktag(1), parse_tree__prog_io_mutable__MaybeMutAttrs_23, 0) = ((MR_Box) (parse_tree__prog_io_mutable__V_35_35));
#line 149 "prog_io_mutable.m"
                        }
#line 148 "prog_io_mutable.m"
                        parse_tree__prog_io_mutable__succeeded = MR_TRUE;
#line 148 "prog_io_mutable.m"
                      }
#line 150 "prog_io_mutable.m"
                    else
#line 151 "prog_io_mutable.m"
                      {
#line 151 "prog_io_mutable.m"
                        MR_Word parse_tree__prog_io_mutable__MutAttrsTerm_24 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_mutable__OptMutAttrsTerm_17, (MR_Integer) 0)));
#line 151 "prog_io_mutable.m"
                        MR_Word parse_tree__prog_io_mutable__V_34_34 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_mutable__OptMutAttrsTerm_17, (MR_Integer) 1)));

#line 151 "prog_io_mutable.m"
                        parse_tree__prog_io_mutable__succeeded = (parse_tree__prog_io_mutable__V_34_34 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 151 "prog_io_mutable.m"
                        if (parse_tree__prog_io_mutable__succeeded)
#line 151 "prog_io_mutable.m"
                          {
#line 152 "prog_io_mutable.m"
                            {
#line 152 "prog_io_mutable.m"
                              parse_tree__prog_io_mutable__parse_mutable_attrs_3_p_0(parse_tree__prog_io_mutable__VarSet_8, parse_tree__prog_io_mutable__MutAttrsTerm_24, &parse_tree__prog_io_mutable__MaybeMutAttrs_23);
                            }
#line 152 "prog_io_mutable.m"
                            parse_tree__prog_io_mutable__succeeded = MR_TRUE;
#line 151 "prog_io_mutable.m"
                          }
#line 151 "prog_io_mutable.m"
                      }
#line 138 "prog_io_mutable.m"
                    if (parse_tree__prog_io_mutable__succeeded)
#line 138 "prog_io_mutable.m"
                      {
#line 155 "prog_io_mutable.m"
                        parse_tree__prog_io_mutable__succeeded = ((MR_tag((MR_Word) parse_tree__prog_io_mutable__MaybeName_18)) == (MR_mktag((MR_Integer) 1)));
#line 155 "prog_io_mutable.m"
                        if (parse_tree__prog_io_mutable__succeeded)
#line 155 "prog_io_mutable.m"
                          {
#line 155 "prog_io_mutable.m"
                            parse_tree__prog_io_mutable__Name_25 = ((MR_String) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_mutable__MaybeName_18, (MR_Integer) 0)));
#line 156 "prog_io_mutable.m"
                            parse_tree__prog_io_mutable__succeeded = ((MR_tag((MR_Word) parse_tree__prog_io_mutable__MaybeType_19)) == (MR_mktag((MR_Integer) 1)));
#line 156 "prog_io_mutable.m"
                            if (parse_tree__prog_io_mutable__succeeded)
#line 156 "prog_io_mutable.m"
                              {
#line 156 "prog_io_mutable.m"
                                parse_tree__prog_io_mutable__Type_26 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_mutable__MaybeType_19, (MR_Integer) 0)));
#line 157 "prog_io_mutable.m"
                                parse_tree__prog_io_mutable__succeeded = ((MR_tag((MR_Word) parse_tree__prog_io_mutable__MaybeInst_22)) == (MR_mktag((MR_Integer) 1)));
#line 157 "prog_io_mutable.m"
                                if (parse_tree__prog_io_mutable__succeeded)
#line 157 "prog_io_mutable.m"
                                  {
#line 157 "prog_io_mutable.m"
                                    parse_tree__prog_io_mutable__Inst_27 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_mutable__MaybeInst_22, (MR_Integer) 0)));
#line 158 "prog_io_mutable.m"
                                    parse_tree__prog_io_mutable__succeeded = ((MR_tag((MR_Word) parse_tree__prog_io_mutable__MaybeMutAttrs_23)) == (MR_mktag((MR_Integer) 1)));
#line 158 "prog_io_mutable.m"
                                    if (parse_tree__prog_io_mutable__succeeded)
#line 158 "prog_io_mutable.m"
                                      parse_tree__prog_io_mutable__MutAttrs_28 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_mutable__MaybeMutAttrs_23, (MR_Integer) 0)));
#line 157 "prog_io_mutable.m"
                                  }
#line 156 "prog_io_mutable.m"
                              }
#line 155 "prog_io_mutable.m"
                          }
#line 169 "prog_io_mutable.m"
                        if (parse_tree__prog_io_mutable__succeeded)
#line 167 "prog_io_mutable.m"
                          {
#line 167 "prog_io_mutable.m"
                            MR_Word parse_tree__prog_io_mutable__MutableInfo_29;

#line 166 "prog_io_mutable.m"
                            {
#line 166 "prog_io_mutable.m"
                              parse_tree__prog_io_mutable__MutableInfo_29 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 8 * sizeof(MR_Word)), NULL, NULL);
#line 166 "prog_io_mutable.m"
                              MR_hl_field(MR_mktag(0), parse_tree__prog_io_mutable__MutableInfo_29, 0) = ((MR_Box) (parse_tree__prog_io_mutable__Name_25));
#line 166 "prog_io_mutable.m"
                              MR_hl_field(MR_mktag(0), parse_tree__prog_io_mutable__MutableInfo_29, 1) = ((MR_Box) (parse_tree__prog_io_mutable__Type_26));
#line 166 "prog_io_mutable.m"
                              MR_hl_field(MR_mktag(0), parse_tree__prog_io_mutable__MutableInfo_29, 2) = ((MR_Box) (parse_tree__prog_io_mutable__Value_20));
#line 166 "prog_io_mutable.m"
                              MR_hl_field(MR_mktag(0), parse_tree__prog_io_mutable__MutableInfo_29, 3) = ((MR_Box) (parse_tree__prog_io_mutable__Inst_27));
#line 166 "prog_io_mutable.m"
                              MR_hl_field(MR_mktag(0), parse_tree__prog_io_mutable__MutableInfo_29, 4) = ((MR_Box) (parse_tree__prog_io_mutable__MutAttrs_28));
#line 166 "prog_io_mutable.m"
                              MR_hl_field(MR_mktag(0), parse_tree__prog_io_mutable__MutableInfo_29, 5) = ((MR_Box) (parse_tree__prog_io_mutable__ProgVarSet_21));
#line 166 "prog_io_mutable.m"
                              MR_hl_field(MR_mktag(0), parse_tree__prog_io_mutable__MutableInfo_29, 6) = ((MR_Box) (parse_tree__prog_io_mutable__Context_10));
#line 166 "prog_io_mutable.m"
                              MR_hl_field(MR_mktag(0), parse_tree__prog_io_mutable__MutableInfo_29, 7) = ((MR_Box) (parse_tree__prog_io_mutable__SeqNum_11));
#line 166 "prog_io_mutable.m"
                            }
#line 168 "prog_io_mutable.m"
                            {
#line 168 "prog_io_mutable.m"
                              MR_Word base;
#line 168 "prog_io_mutable.m"
                              base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 168 "prog_io_mutable.m"
                              *parse_tree__prog_io_mutable__MaybeMutableInfo_12 = base;
#line 168 "prog_io_mutable.m"
                              MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (parse_tree__prog_io_mutable__MutableInfo_29));
#line 168 "prog_io_mutable.m"
                            }
#line 167 "prog_io_mutable.m"
                          }
#line 169 "prog_io_mutable.m"
                        else
#line 171 "prog_io_mutable.m"
                          {
#line 171 "prog_io_mutable.m"
                            MR_Word parse_tree__prog_io_mutable__TypeCtorInfo_44_44 = (MR_Word) &parse_tree__error_util__parse_tree__error_util__type_ctor_info_error_spec_0;
#line 171 "prog_io_mutable.m"
                            MR_Word parse_tree__prog_io_mutable__Specs_30;
#line 171 "prog_io_mutable.m"
                            MR_Word parse_tree__prog_io_mutable__V_36_36;
#line 171 "prog_io_mutable.m"
                            MR_Word parse_tree__prog_io_mutable__V_37_37;
#line 171 "prog_io_mutable.m"
                            MR_Word parse_tree__prog_io_mutable__V_38_38;
#line 171 "prog_io_mutable.m"
                            MR_Word parse_tree__prog_io_mutable__V_39_39;
#line 171 "prog_io_mutable.m"
                            MR_Word parse_tree__prog_io_mutable__V_40_40;
#line 171 "prog_io_mutable.m"
                            MR_Word parse_tree__prog_io_mutable__V_41_41;

#line 170 "prog_io_mutable.m"
                            {
#line 170 "prog_io_mutable.m"
                              parse_tree__prog_io_mutable__V_36_36 = parse_tree__prog_io_util__get_any_errors1_1_f_0((MR_Word) &mercury__builtin__builtin__type_ctor_info_string_0, parse_tree__prog_io_mutable__MaybeName_18);
                            }
#line 170 "prog_io_mutable.m"
                            {
#line 170 "prog_io_mutable.m"
                              parse_tree__prog_io_mutable__V_38_38 = parse_tree__prog_io_util__get_any_errors1_1_f_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0, parse_tree__prog_io_mutable__MaybeType_19);
                            }
#line 171 "prog_io_mutable.m"
                            {
#line 171 "prog_io_mutable.m"
                              parse_tree__prog_io_mutable__V_40_40 = parse_tree__prog_io_util__get_any_errors1_1_f_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_inst_0, parse_tree__prog_io_mutable__MaybeInst_22);
                            }
#line 171 "prog_io_mutable.m"
                            {
#line 171 "prog_io_mutable.m"
                              parse_tree__prog_io_mutable__V_41_41 = parse_tree__prog_io_util__get_any_errors1_1_f_0((MR_Word) &parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_mutable_var_attributes_0, parse_tree__prog_io_mutable__MaybeMutAttrs_23);
                            }
#line 171 "prog_io_mutable.m"
                            {
#line 171 "prog_io_mutable.m"
                              parse_tree__prog_io_mutable__V_39_39 = mercury__list__f_43_43_2_f_0(parse_tree__prog_io_mutable__TypeCtorInfo_44_44, parse_tree__prog_io_mutable__V_40_40, parse_tree__prog_io_mutable__V_41_41);
                            }
#line 170 "prog_io_mutable.m"
                            {
#line 170 "prog_io_mutable.m"
                              parse_tree__prog_io_mutable__V_37_37 = mercury__list__f_43_43_2_f_0(parse_tree__prog_io_mutable__TypeCtorInfo_44_44, parse_tree__prog_io_mutable__V_38_38, parse_tree__prog_io_mutable__V_39_39);
                            }
#line 170 "prog_io_mutable.m"
                            {
#line 170 "prog_io_mutable.m"
                              parse_tree__prog_io_mutable__Specs_30 = mercury__list__f_43_43_2_f_0(parse_tree__prog_io_mutable__TypeCtorInfo_44_44, parse_tree__prog_io_mutable__V_36_36, parse_tree__prog_io_mutable__V_37_37);
                            }
#line 172 "prog_io_mutable.m"
                            {
#line 172 "prog_io_mutable.m"
                              MR_Word base;
#line 172 "prog_io_mutable.m"
                              base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 172 "prog_io_mutable.m"
                              *parse_tree__prog_io_mutable__MaybeMutableInfo_12 = base;
#line 172 "prog_io_mutable.m"
                              MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (parse_tree__prog_io_mutable__Specs_30));
#line 172 "prog_io_mutable.m"
                            }
#line 171 "prog_io_mutable.m"
                          }
#line 169 "prog_io_mutable.m"
                        parse_tree__prog_io_mutable__succeeded = MR_TRUE;
#line 138 "prog_io_mutable.m"
                      }
#line 139 "prog_io_mutable.m"
                  }
#line 139 "prog_io_mutable.m"
              }
#line 139 "prog_io_mutable.m"
          }
#line 139 "prog_io_mutable.m"
      }
#line 138 "prog_io_mutable.m"
    return parse_tree__prog_io_mutable__succeeded;
#line 138 "prog_io_mutable.m"
  }
#line 36 "prog_io_mutable.m"
}

#line 33 "prog_io_mutable.m"
MR_bool MR_CALL 
parse_tree__prog_io_mutable__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_112_97_114_115_101_95_109_117_116_97_98_108_101_95_100_101_99_108_95_95_91_49_93_95_48_6_p_0(
#line 33 "prog_io_mutable.m"
  MR_Word parse_tree__prog_io_mutable__VarSet_8,
#line 33 "prog_io_mutable.m"
  MR_Word parse_tree__prog_io_mutable__Terms_9,
#line 33 "prog_io_mutable.m"
  MR_Word parse_tree__prog_io_mutable__Context_10,
#line 33 "prog_io_mutable.m"
  MR_Integer parse_tree__prog_io_mutable__SeqNum_11,
#line 33 "prog_io_mutable.m"
  MR_Word * parse_tree__prog_io_mutable__MaybeItem_12)
#line 33 "prog_io_mutable.m"
{
#line 126 "prog_io_mutable.m"
  {
#line 126 "prog_io_mutable.m"
    MR_bool parse_tree__prog_io_mutable__succeeded;
#line 126 "prog_io_mutable.m"
    MR_Word parse_tree__prog_io_mutable__MaybeMutableInfo_13;

#line 127 "prog_io_mutable.m"
    {
#line 127 "prog_io_mutable.m"
      parse_tree__prog_io_mutable__succeeded = parse_tree__prog_io_mutable__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_112_97_114_115_101_95_109_117_116_97_98_108_101_95_100_101_99_108_95_105_110_102_111_95_95_91_49_93_95_48_6_p_0(parse_tree__prog_io_mutable__VarSet_8, parse_tree__prog_io_mutable__Terms_9, parse_tree__prog_io_mutable__Context_10, parse_tree__prog_io_mutable__SeqNum_11, &parse_tree__prog_io_mutable__MaybeMutableInfo_13);
    }
#line 126 "prog_io_mutable.m"
    if (parse_tree__prog_io_mutable__succeeded)
#line 126 "prog_io_mutable.m"
      {
#line 132 "prog_io_mutable.m"
        if (((MR_tag((MR_Word) parse_tree__prog_io_mutable__MaybeMutableInfo_13)) == (MR_mktag((MR_Integer) 0))))
#line 134 "prog_io_mutable.m"
          *parse_tree__prog_io_mutable__MaybeItem_12 = (MR_Word) parse_tree__prog_io_mutable__MaybeMutableInfo_13;
#line 132 "prog_io_mutable.m"
        else
#line 130 "prog_io_mutable.m"
          {
#line 130 "prog_io_mutable.m"
            MR_Word parse_tree__prog_io_mutable__MutableInfo_14 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_mutable__MaybeMutableInfo_13, (MR_Integer) 0)));
#line 130 "prog_io_mutable.m"
            MR_Word parse_tree__prog_io_mutable__V_16_16;

#line 131 "prog_io_mutable.m"
            {
#line 131 "prog_io_mutable.m"
              parse_tree__prog_io_mutable__V_16_16 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 131 "prog_io_mutable.m"
              MR_hl_field(MR_mktag(3), parse_tree__prog_io_mutable__V_16_16, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 9));
#line 131 "prog_io_mutable.m"
              MR_hl_field(MR_mktag(3), parse_tree__prog_io_mutable__V_16_16, 1) = ((MR_Box) (parse_tree__prog_io_mutable__MutableInfo_14));
#line 131 "prog_io_mutable.m"
            }
#line 131 "prog_io_mutable.m"
            {
#line 131 "prog_io_mutable.m"
              MR_Word base;
#line 131 "prog_io_mutable.m"
              base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 131 "prog_io_mutable.m"
              *parse_tree__prog_io_mutable__MaybeItem_12 = base;
#line 131 "prog_io_mutable.m"
              MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (parse_tree__prog_io_mutable__V_16_16));
#line 131 "prog_io_mutable.m"
            }
#line 130 "prog_io_mutable.m"
          }
#line 132 "prog_io_mutable.m"
        parse_tree__prog_io_mutable__succeeded = MR_TRUE;
#line 126 "prog_io_mutable.m"
      }
#line 126 "prog_io_mutable.m"
    return parse_tree__prog_io_mutable__succeeded;
#line 126 "prog_io_mutable.m"
  }
#line 33 "prog_io_mutable.m"
}

#line 30 "prog_io_mutable.m"
void MR_CALL 
parse_tree__prog_io_mutable__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_112_97_114_115_101_95_102_105_110_97_108_105_115_101_95_100_101_99_108_95_95_91_49_93_95_48_6_p_0(
#line 30 "prog_io_mutable.m"
  MR_Word parse_tree__prog_io_mutable__VarSet_8,
#line 30 "prog_io_mutable.m"
  MR_Word parse_tree__prog_io_mutable__Term_9,
#line 30 "prog_io_mutable.m"
  MR_Word parse_tree__prog_io_mutable__Context_10,
#line 30 "prog_io_mutable.m"
  MR_Integer parse_tree__prog_io_mutable__SeqNum_11,
#line 30 "prog_io_mutable.m"
  MR_Word * parse_tree__prog_io_mutable__MaybeItem_12)
#line 30 "prog_io_mutable.m"
{
#line 90 "prog_io_mutable.m"
  {
#line 90 "prog_io_mutable.m"
    MR_bool parse_tree__prog_io_mutable__succeeded;
#line 90 "prog_io_mutable.m"
    MR_Word parse_tree__prog_io_mutable__MaybeSymNameSpecifier_13;

#line 91 "prog_io_mutable.m"
    {
#line 91 "prog_io_mutable.m"
      parse_tree__prog_io_sym_name__parse_symbol_name_specifier_3_p_0(parse_tree__prog_io_mutable__VarSet_8, parse_tree__prog_io_mutable__Term_9, &parse_tree__prog_io_mutable__MaybeSymNameSpecifier_13);
    }
#line 95 "prog_io_mutable.m"
    if (((MR_tag((MR_Word) parse_tree__prog_io_mutable__MaybeSymNameSpecifier_13)) == (MR_mktag((MR_Integer) 0))))
#line 94 "prog_io_mutable.m"
      *parse_tree__prog_io_mutable__MaybeItem_12 = (MR_Word) parse_tree__prog_io_mutable__MaybeSymNameSpecifier_13;
#line 95 "prog_io_mutable.m"
    else
#line 96 "prog_io_mutable.m"
      {
#line 96 "prog_io_mutable.m"
        MR_Word parse_tree__prog_io_mutable__SymNameSpecifier_15 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_mutable__MaybeSymNameSpecifier_13, (MR_Integer) 0)));

#line 106 "prog_io_mutable.m"
        if (((MR_tag((MR_Word) parse_tree__prog_io_mutable__SymNameSpecifier_15)) == (MR_mktag((MR_Integer) 0))))
#line 98 "prog_io_mutable.m"
          {
#line 98 "prog_io_mutable.m"
            MR_Word parse_tree__prog_io_mutable__TypeCtorInfo_94_94 = (MR_Word) &mercury__term__term__type_ctor_info_generic_0;
#line 98 "prog_io_mutable.m"
            MR_String parse_tree__prog_io_mutable__TermStr_17;
#line 98 "prog_io_mutable.m"
            MR_Word parse_tree__prog_io_mutable__Pieces_18;
#line 98 "prog_io_mutable.m"
            MR_Word parse_tree__prog_io_mutable__Spec_19;
#line 98 "prog_io_mutable.m"
            MR_Word parse_tree__prog_io_mutable__V_57_57;
#line 98 "prog_io_mutable.m"
            MR_Word parse_tree__prog_io_mutable__V_60_60;
#line 98 "prog_io_mutable.m"
            MR_Word parse_tree__prog_io_mutable__V_63_63;
#line 98 "prog_io_mutable.m"
            MR_Word parse_tree__prog_io_mutable__V_66_66;
#line 98 "prog_io_mutable.m"
            MR_Word parse_tree__prog_io_mutable__V_67_67;
#line 98 "prog_io_mutable.m"
            MR_Word parse_tree__prog_io_mutable__V_76_76;
#line 98 "prog_io_mutable.m"
            MR_Word parse_tree__prog_io_mutable__V_77_77;
#line 98 "prog_io_mutable.m"
            MR_Word parse_tree__prog_io_mutable__V_78_78;
#line 98 "prog_io_mutable.m"
            MR_Word parse_tree__prog_io_mutable__V_79_79;
#line 98 "prog_io_mutable.m"
            MR_Word parse_tree__prog_io_mutable__V_80_80;
#line 98 "prog_io_mutable.m"
            MR_Word parse_tree__prog_io_mutable__V_83_83;

#line 99 "prog_io_mutable.m"
            {
#line 99 "prog_io_mutable.m"
              parse_tree__prog_io_mutable__TermStr_17 = parse_tree__parse_tree_out_term__describe_error_term_2_f_0(parse_tree__prog_io_mutable__TypeCtorInfo_94_94, parse_tree__prog_io_mutable__VarSet_8, parse_tree__prog_io_mutable__Term_9);
            }
#line 102 "prog_io_mutable.m"
            {
#line 102 "prog_io_mutable.m"
              parse_tree__prog_io_mutable__V_67_67 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 102 "prog_io_mutable.m"
              MR_hl_field(MR_mktag(2), parse_tree__prog_io_mutable__V_67_67, 0) = ((MR_Box) (parse_tree__prog_io_mutable__TermStr_17));
#line 102 "prog_io_mutable.m"
            }
#line 102 "prog_io_mutable.m"
            {
#line 102 "prog_io_mutable.m"
              parse_tree__prog_io_mutable__V_66_66 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 102 "prog_io_mutable.m"
              MR_hl_field(MR_mktag(1), parse_tree__prog_io_mutable__V_66_66, 0) = ((MR_Box) (parse_tree__prog_io_mutable__V_67_67));
#line 102 "prog_io_mutable.m"
              MR_hl_field(MR_mktag(1), parse_tree__prog_io_mutable__V_66_66, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__prog_io_mutable_scalar_common_2[2])));
#line 102 "prog_io_mutable.m"
            }
#line 101 "prog_io_mutable.m"
            {
#line 101 "prog_io_mutable.m"
              parse_tree__prog_io_mutable__V_63_63 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 101 "prog_io_mutable.m"
              MR_hl_field(MR_mktag(1), parse_tree__prog_io_mutable__V_63_63, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__prog_io_mutable_scalar_common_2[43])));
#line 101 "prog_io_mutable.m"
              MR_hl_field(MR_mktag(1), parse_tree__prog_io_mutable__V_63_63, 1) = ((MR_Box) (parse_tree__prog_io_mutable__V_66_66));
#line 101 "prog_io_mutable.m"
            }
#line 101 "prog_io_mutable.m"
            {
#line 101 "prog_io_mutable.m"
              parse_tree__prog_io_mutable__V_60_60 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 101 "prog_io_mutable.m"
              MR_hl_field(MR_mktag(1), parse_tree__prog_io_mutable__V_60_60, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__prog_io_mutable_scalar_common_2[42])));
#line 101 "prog_io_mutable.m"
              MR_hl_field(MR_mktag(1), parse_tree__prog_io_mutable__V_60_60, 1) = ((MR_Box) (parse_tree__prog_io_mutable__V_63_63));
#line 101 "prog_io_mutable.m"
            }
#line 100 "prog_io_mutable.m"
            {
#line 100 "prog_io_mutable.m"
              parse_tree__prog_io_mutable__V_57_57 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 100 "prog_io_mutable.m"
              MR_hl_field(MR_mktag(1), parse_tree__prog_io_mutable__V_57_57, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__prog_io_mutable_scalar_common_2[46])));
#line 100 "prog_io_mutable.m"
              MR_hl_field(MR_mktag(1), parse_tree__prog_io_mutable__V_57_57, 1) = ((MR_Box) (parse_tree__prog_io_mutable__V_60_60));
#line 100 "prog_io_mutable.m"
            }
#line 100 "prog_io_mutable.m"
            {
#line 100 "prog_io_mutable.m"
              parse_tree__prog_io_mutable__Pieces_18 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 100 "prog_io_mutable.m"
              MR_hl_field(MR_mktag(1), parse_tree__prog_io_mutable__Pieces_18, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__prog_io_mutable_scalar_common_2[40])));
#line 100 "prog_io_mutable.m"
              MR_hl_field(MR_mktag(1), parse_tree__prog_io_mutable__Pieces_18, 1) = ((MR_Box) (parse_tree__prog_io_mutable__V_57_57));
#line 100 "prog_io_mutable.m"
            }
#line 104 "prog_io_mutable.m"
            {
#line 104 "prog_io_mutable.m"
              parse_tree__prog_io_mutable__V_78_78 = mercury__term__get_term_context_1_f_0(parse_tree__prog_io_mutable__TypeCtorInfo_94_94, parse_tree__prog_io_mutable__Term_9);
            }
#line 104 "prog_io_mutable.m"
            {
#line 104 "prog_io_mutable.m"
              parse_tree__prog_io_mutable__V_80_80 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 104 "prog_io_mutable.m"
              MR_hl_field(MR_mktag(0), parse_tree__prog_io_mutable__V_80_80, 0) = ((MR_Box) (parse_tree__prog_io_mutable__Pieces_18));
#line 104 "prog_io_mutable.m"
            }
#line 104 "prog_io_mutable.m"
            {
#line 104 "prog_io_mutable.m"
              parse_tree__prog_io_mutable__V_79_79 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 104 "prog_io_mutable.m"
              MR_hl_field(MR_mktag(1), parse_tree__prog_io_mutable__V_79_79, 0) = ((MR_Box) (parse_tree__prog_io_mutable__V_80_80));
#line 104 "prog_io_mutable.m"
              MR_hl_field(MR_mktag(1), parse_tree__prog_io_mutable__V_79_79, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 104 "prog_io_mutable.m"
            }
#line 104 "prog_io_mutable.m"
            {
#line 104 "prog_io_mutable.m"
              parse_tree__prog_io_mutable__V_77_77 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 104 "prog_io_mutable.m"
              MR_hl_field(MR_mktag(0), parse_tree__prog_io_mutable__V_77_77, 0) = ((MR_Box) (parse_tree__prog_io_mutable__V_78_78));
#line 104 "prog_io_mutable.m"
              MR_hl_field(MR_mktag(0), parse_tree__prog_io_mutable__V_77_77, 1) = ((MR_Box) (parse_tree__prog_io_mutable__V_79_79));
#line 104 "prog_io_mutable.m"
            }
#line 104 "prog_io_mutable.m"
            {
#line 104 "prog_io_mutable.m"
              parse_tree__prog_io_mutable__V_76_76 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 104 "prog_io_mutable.m"
              MR_hl_field(MR_mktag(1), parse_tree__prog_io_mutable__V_76_76, 0) = ((MR_Box) (parse_tree__prog_io_mutable__V_77_77));
#line 104 "prog_io_mutable.m"
              MR_hl_field(MR_mktag(1), parse_tree__prog_io_mutable__V_76_76, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 104 "prog_io_mutable.m"
            }
#line 103 "prog_io_mutable.m"
            {
#line 103 "prog_io_mutable.m"
              parse_tree__prog_io_mutable__Spec_19 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 103 "prog_io_mutable.m"
              MR_hl_field(MR_mktag(0), parse_tree__prog_io_mutable__Spec_19, 0) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 103 "prog_io_mutable.m"
              MR_hl_field(MR_mktag(0), parse_tree__prog_io_mutable__Spec_19, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 2))));
#line 103 "prog_io_mutable.m"
              MR_hl_field(MR_mktag(0), parse_tree__prog_io_mutable__Spec_19, 2) = ((MR_Box) (parse_tree__prog_io_mutable__V_76_76));
#line 103 "prog_io_mutable.m"
            }
#line 105 "prog_io_mutable.m"
            {
#line 105 "prog_io_mutable.m"
              parse_tree__prog_io_mutable__V_83_83 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 105 "prog_io_mutable.m"
              MR_hl_field(MR_mktag(1), parse_tree__prog_io_mutable__V_83_83, 0) = ((MR_Box) (parse_tree__prog_io_mutable__Spec_19));
#line 105 "prog_io_mutable.m"
              MR_hl_field(MR_mktag(1), parse_tree__prog_io_mutable__V_83_83, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 105 "prog_io_mutable.m"
            }
#line 105 "prog_io_mutable.m"
            {
#line 105 "prog_io_mutable.m"
              MR_Word base;
#line 105 "prog_io_mutable.m"
              base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 105 "prog_io_mutable.m"
              *parse_tree__prog_io_mutable__MaybeItem_12 = base;
#line 105 "prog_io_mutable.m"
              MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (parse_tree__prog_io_mutable__V_83_83));
#line 105 "prog_io_mutable.m"
            }
#line 98 "prog_io_mutable.m"
          }
#line 106 "prog_io_mutable.m"
        else
#line 107 "prog_io_mutable.m"
          {
#line 107 "prog_io_mutable.m"
            MR_Word parse_tree__prog_io_mutable__SymName_20 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_mutable__SymNameSpecifier_15, (MR_Integer) 0)));
#line 107 "prog_io_mutable.m"
            MR_Integer parse_tree__prog_io_mutable__Arity_21 = ((MR_Integer) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_mutable__SymNameSpecifier_15, (MR_Integer) 1)));

#line 108 "prog_io_mutable.m"
#line 108 "prog_io_mutable.m"
            switch (parse_tree__prog_io_mutable__Arity_21) {
#line 108 "prog_io_mutable.m"
              default:
#line 108 "prog_io_mutable.m"
                parse_tree__prog_io_mutable__succeeded = MR_FALSE;
#line 108 "prog_io_mutable.m"
                break;
#line 108 "prog_io_mutable.m"
              case (MR_Integer) 0:
#line 108 "prog_io_mutable.m"
                parse_tree__prog_io_mutable__succeeded = MR_TRUE;
#line 108 "prog_io_mutable.m"
                break;
#line 108 "prog_io_mutable.m"
              case (MR_Integer) 2:
#line 108 "prog_io_mutable.m"
                parse_tree__prog_io_mutable__succeeded = MR_TRUE;
#line 108 "prog_io_mutable.m"
                break;
#line 108 "prog_io_mutable.m"
            }
#line 113 "prog_io_mutable.m"
            if (parse_tree__prog_io_mutable__succeeded)
#line 110 "prog_io_mutable.m"
              {
#line 110 "prog_io_mutable.m"
                MR_Word parse_tree__prog_io_mutable__ItemFinalise_22;
#line 110 "prog_io_mutable.m"
                MR_Word parse_tree__prog_io_mutable__Item_23;

#line 109 "prog_io_mutable.m"
                {
#line 109 "prog_io_mutable.m"
                  parse_tree__prog_io_mutable__ItemFinalise_22 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
#line 109 "prog_io_mutable.m"
                  MR_hl_field(MR_mktag(0), parse_tree__prog_io_mutable__ItemFinalise_22, 0) = ((MR_Box) (parse_tree__prog_io_mutable__SymName_20));
#line 109 "prog_io_mutable.m"
                  MR_hl_field(MR_mktag(0), parse_tree__prog_io_mutable__ItemFinalise_22, 1) = ((MR_Box) (parse_tree__prog_io_mutable__Arity_21));
#line 109 "prog_io_mutable.m"
                  MR_hl_field(MR_mktag(0), parse_tree__prog_io_mutable__ItemFinalise_22, 2) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 109 "prog_io_mutable.m"
                  MR_hl_field(MR_mktag(0), parse_tree__prog_io_mutable__ItemFinalise_22, 3) = ((MR_Box) (parse_tree__prog_io_mutable__Context_10));
#line 109 "prog_io_mutable.m"
                  MR_hl_field(MR_mktag(0), parse_tree__prog_io_mutable__ItemFinalise_22, 4) = ((MR_Box) (parse_tree__prog_io_mutable__SeqNum_11));
#line 109 "prog_io_mutable.m"
                }
#line 111 "prog_io_mutable.m"
                {
#line 111 "prog_io_mutable.m"
                  parse_tree__prog_io_mutable__Item_23 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 111 "prog_io_mutable.m"
                  MR_hl_field(MR_mktag(3), parse_tree__prog_io_mutable__Item_23, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 8));
#line 111 "prog_io_mutable.m"
                  MR_hl_field(MR_mktag(3), parse_tree__prog_io_mutable__Item_23, 1) = ((MR_Box) (parse_tree__prog_io_mutable__ItemFinalise_22));
#line 111 "prog_io_mutable.m"
                }
#line 112 "prog_io_mutable.m"
                {
#line 112 "prog_io_mutable.m"
                  MR_Word base;
#line 112 "prog_io_mutable.m"
                  base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 112 "prog_io_mutable.m"
                  *parse_tree__prog_io_mutable__MaybeItem_12 = base;
#line 112 "prog_io_mutable.m"
                  MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (parse_tree__prog_io_mutable__Item_23));
#line 112 "prog_io_mutable.m"
                }
#line 110 "prog_io_mutable.m"
              }
#line 113 "prog_io_mutable.m"
            else
#line 114 "prog_io_mutable.m"
              {
#line 114 "prog_io_mutable.m"
                MR_Word parse_tree__prog_io_mutable__TypeCtorInfo_95_95 = (MR_Word) &mercury__term__term__type_ctor_info_generic_0;
#line 114 "prog_io_mutable.m"
                MR_Word parse_tree__prog_io_mutable__V_27_27;
#line 114 "prog_io_mutable.m"
                MR_Word parse_tree__prog_io_mutable__V_30_30;
#line 114 "prog_io_mutable.m"
                MR_Word parse_tree__prog_io_mutable__V_33_33;
#line 114 "prog_io_mutable.m"
                MR_Word parse_tree__prog_io_mutable__V_36_36;
#line 114 "prog_io_mutable.m"
                MR_Word parse_tree__prog_io_mutable__V_37_37;
#line 114 "prog_io_mutable.m"
                MR_Word parse_tree__prog_io_mutable__V_46_46;
#line 114 "prog_io_mutable.m"
                MR_Word parse_tree__prog_io_mutable__V_47_47;
#line 114 "prog_io_mutable.m"
                MR_Word parse_tree__prog_io_mutable__V_48_48;
#line 114 "prog_io_mutable.m"
                MR_Word parse_tree__prog_io_mutable__V_49_49;
#line 114 "prog_io_mutable.m"
                MR_Word parse_tree__prog_io_mutable__V_50_50;
#line 114 "prog_io_mutable.m"
                MR_Word parse_tree__prog_io_mutable__V_53_53;
#line 114 "prog_io_mutable.m"
                MR_String parse_tree__prog_io_mutable__TermStr_85;
#line 114 "prog_io_mutable.m"
                MR_Word parse_tree__prog_io_mutable__Pieces_86;
#line 114 "prog_io_mutable.m"
                MR_Word parse_tree__prog_io_mutable__Spec_87;

#line 114 "prog_io_mutable.m"
                {
#line 114 "prog_io_mutable.m"
                  parse_tree__prog_io_mutable__TermStr_85 = parse_tree__parse_tree_out_term__describe_error_term_2_f_0(parse_tree__prog_io_mutable__TypeCtorInfo_95_95, parse_tree__prog_io_mutable__VarSet_8, parse_tree__prog_io_mutable__Term_9);
                }
#line 118 "prog_io_mutable.m"
                {
#line 118 "prog_io_mutable.m"
                  parse_tree__prog_io_mutable__V_37_37 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 118 "prog_io_mutable.m"
                  MR_hl_field(MR_mktag(3), parse_tree__prog_io_mutable__V_37_37, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 5));
#line 118 "prog_io_mutable.m"
                  MR_hl_field(MR_mktag(3), parse_tree__prog_io_mutable__V_37_37, 1) = ((MR_Box) (parse_tree__prog_io_mutable__TermStr_85));
#line 118 "prog_io_mutable.m"
                }
#line 118 "prog_io_mutable.m"
                {
#line 118 "prog_io_mutable.m"
                  parse_tree__prog_io_mutable__V_36_36 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 118 "prog_io_mutable.m"
                  MR_hl_field(MR_mktag(1), parse_tree__prog_io_mutable__V_36_36, 0) = ((MR_Box) (parse_tree__prog_io_mutable__V_37_37));
#line 118 "prog_io_mutable.m"
                  MR_hl_field(MR_mktag(1), parse_tree__prog_io_mutable__V_36_36, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__prog_io_mutable_scalar_common_2[2])));
#line 118 "prog_io_mutable.m"
                }
#line 117 "prog_io_mutable.m"
                {
#line 117 "prog_io_mutable.m"
                  parse_tree__prog_io_mutable__V_33_33 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 117 "prog_io_mutable.m"
                  MR_hl_field(MR_mktag(1), parse_tree__prog_io_mutable__V_33_33, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__prog_io_mutable_scalar_common_2[45])));
#line 117 "prog_io_mutable.m"
                  MR_hl_field(MR_mktag(1), parse_tree__prog_io_mutable__V_33_33, 1) = ((MR_Box) (parse_tree__prog_io_mutable__V_36_36));
#line 117 "prog_io_mutable.m"
                }
#line 116 "prog_io_mutable.m"
                {
#line 116 "prog_io_mutable.m"
                  parse_tree__prog_io_mutable__V_30_30 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 116 "prog_io_mutable.m"
                  MR_hl_field(MR_mktag(1), parse_tree__prog_io_mutable__V_30_30, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__prog_io_mutable_scalar_common_2[44])));
#line 116 "prog_io_mutable.m"
                  MR_hl_field(MR_mktag(1), parse_tree__prog_io_mutable__V_30_30, 1) = ((MR_Box) (parse_tree__prog_io_mutable__V_33_33));
#line 116 "prog_io_mutable.m"
                }
#line 115 "prog_io_mutable.m"
                {
#line 115 "prog_io_mutable.m"
                  parse_tree__prog_io_mutable__V_27_27 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 115 "prog_io_mutable.m"
                  MR_hl_field(MR_mktag(1), parse_tree__prog_io_mutable__V_27_27, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__prog_io_mutable_scalar_common_2[46])));
#line 115 "prog_io_mutable.m"
                  MR_hl_field(MR_mktag(1), parse_tree__prog_io_mutable__V_27_27, 1) = ((MR_Box) (parse_tree__prog_io_mutable__V_30_30));
#line 115 "prog_io_mutable.m"
                }
#line 115 "prog_io_mutable.m"
                {
#line 115 "prog_io_mutable.m"
                  parse_tree__prog_io_mutable__Pieces_86 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 115 "prog_io_mutable.m"
                  MR_hl_field(MR_mktag(1), parse_tree__prog_io_mutable__Pieces_86, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__prog_io_mutable_scalar_common_2[40])));
#line 115 "prog_io_mutable.m"
                  MR_hl_field(MR_mktag(1), parse_tree__prog_io_mutable__Pieces_86, 1) = ((MR_Box) (parse_tree__prog_io_mutable__V_27_27));
#line 115 "prog_io_mutable.m"
                }
#line 120 "prog_io_mutable.m"
                {
#line 120 "prog_io_mutable.m"
                  parse_tree__prog_io_mutable__V_48_48 = mercury__term__get_term_context_1_f_0(parse_tree__prog_io_mutable__TypeCtorInfo_95_95, parse_tree__prog_io_mutable__Term_9);
                }
#line 120 "prog_io_mutable.m"
                {
#line 120 "prog_io_mutable.m"
                  parse_tree__prog_io_mutable__V_50_50 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 120 "prog_io_mutable.m"
                  MR_hl_field(MR_mktag(0), parse_tree__prog_io_mutable__V_50_50, 0) = ((MR_Box) (parse_tree__prog_io_mutable__Pieces_86));
#line 120 "prog_io_mutable.m"
                }
#line 120 "prog_io_mutable.m"
                {
#line 120 "prog_io_mutable.m"
                  parse_tree__prog_io_mutable__V_49_49 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 120 "prog_io_mutable.m"
                  MR_hl_field(MR_mktag(1), parse_tree__prog_io_mutable__V_49_49, 0) = ((MR_Box) (parse_tree__prog_io_mutable__V_50_50));
#line 120 "prog_io_mutable.m"
                  MR_hl_field(MR_mktag(1), parse_tree__prog_io_mutable__V_49_49, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 120 "prog_io_mutable.m"
                }
#line 120 "prog_io_mutable.m"
                {
#line 120 "prog_io_mutable.m"
                  parse_tree__prog_io_mutable__V_47_47 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 120 "prog_io_mutable.m"
                  MR_hl_field(MR_mktag(0), parse_tree__prog_io_mutable__V_47_47, 0) = ((MR_Box) (parse_tree__prog_io_mutable__V_48_48));
#line 120 "prog_io_mutable.m"
                  MR_hl_field(MR_mktag(0), parse_tree__prog_io_mutable__V_47_47, 1) = ((MR_Box) (parse_tree__prog_io_mutable__V_49_49));
#line 120 "prog_io_mutable.m"
                }
#line 120 "prog_io_mutable.m"
                {
#line 120 "prog_io_mutable.m"
                  parse_tree__prog_io_mutable__V_46_46 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 120 "prog_io_mutable.m"
                  MR_hl_field(MR_mktag(1), parse_tree__prog_io_mutable__V_46_46, 0) = ((MR_Box) (parse_tree__prog_io_mutable__V_47_47));
#line 120 "prog_io_mutable.m"
                  MR_hl_field(MR_mktag(1), parse_tree__prog_io_mutable__V_46_46, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 120 "prog_io_mutable.m"
                }
#line 119 "prog_io_mutable.m"
                {
#line 119 "prog_io_mutable.m"
                  parse_tree__prog_io_mutable__Spec_87 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 119 "prog_io_mutable.m"
                  MR_hl_field(MR_mktag(0), parse_tree__prog_io_mutable__Spec_87, 0) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 119 "prog_io_mutable.m"
                  MR_hl_field(MR_mktag(0), parse_tree__prog_io_mutable__Spec_87, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 2))));
#line 119 "prog_io_mutable.m"
                  MR_hl_field(MR_mktag(0), parse_tree__prog_io_mutable__Spec_87, 2) = ((MR_Box) (parse_tree__prog_io_mutable__V_46_46));
#line 119 "prog_io_mutable.m"
                }
#line 121 "prog_io_mutable.m"
                {
#line 121 "prog_io_mutable.m"
                  parse_tree__prog_io_mutable__V_53_53 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 121 "prog_io_mutable.m"
                  MR_hl_field(MR_mktag(1), parse_tree__prog_io_mutable__V_53_53, 0) = ((MR_Box) (parse_tree__prog_io_mutable__Spec_87));
#line 121 "prog_io_mutable.m"
                  MR_hl_field(MR_mktag(1), parse_tree__prog_io_mutable__V_53_53, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 121 "prog_io_mutable.m"
                }
#line 121 "prog_io_mutable.m"
                {
#line 121 "prog_io_mutable.m"
                  MR_Word base;
#line 121 "prog_io_mutable.m"
                  base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 121 "prog_io_mutable.m"
                  *parse_tree__prog_io_mutable__MaybeItem_12 = base;
#line 121 "prog_io_mutable.m"
                  MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (parse_tree__prog_io_mutable__V_53_53));
#line 121 "prog_io_mutable.m"
                }
#line 114 "prog_io_mutable.m"
              }
#line 107 "prog_io_mutable.m"
          }
#line 96 "prog_io_mutable.m"
      }
#line 90 "prog_io_mutable.m"
  }
#line 30 "prog_io_mutable.m"
}

#line 27 "prog_io_mutable.m"
void MR_CALL 
parse_tree__prog_io_mutable__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_112_97_114_115_101_95_105_110_105_116_105_97_108_105_115_101_95_100_101_99_108_95_95_91_49_93_95_48_6_p_0(
#line 27 "prog_io_mutable.m"
  MR_Word parse_tree__prog_io_mutable__VarSet_8,
#line 27 "prog_io_mutable.m"
  MR_Word parse_tree__prog_io_mutable__Term_9,
#line 27 "prog_io_mutable.m"
  MR_Word parse_tree__prog_io_mutable__Context_10,
#line 27 "prog_io_mutable.m"
  MR_Integer parse_tree__prog_io_mutable__SeqNum_11,
#line 27 "prog_io_mutable.m"
  MR_Word * parse_tree__prog_io_mutable__MaybeItem_12)
#line 27 "prog_io_mutable.m"
{
#line 52 "prog_io_mutable.m"
  {
#line 52 "prog_io_mutable.m"
    MR_bool parse_tree__prog_io_mutable__succeeded;
#line 52 "prog_io_mutable.m"
    MR_Word parse_tree__prog_io_mutable__MaybeSymNameSpecifier_13;

#line 53 "prog_io_mutable.m"
    {
#line 53 "prog_io_mutable.m"
      parse_tree__prog_io_sym_name__parse_symbol_name_specifier_3_p_0(parse_tree__prog_io_mutable__VarSet_8, parse_tree__prog_io_mutable__Term_9, &parse_tree__prog_io_mutable__MaybeSymNameSpecifier_13);
    }
#line 57 "prog_io_mutable.m"
    if (((MR_tag((MR_Word) parse_tree__prog_io_mutable__MaybeSymNameSpecifier_13)) == (MR_mktag((MR_Integer) 0))))
#line 56 "prog_io_mutable.m"
      *parse_tree__prog_io_mutable__MaybeItem_12 = (MR_Word) parse_tree__prog_io_mutable__MaybeSymNameSpecifier_13;
#line 57 "prog_io_mutable.m"
    else
#line 58 "prog_io_mutable.m"
      {
#line 58 "prog_io_mutable.m"
        MR_Word parse_tree__prog_io_mutable__SymNameSpecifier_15 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_mutable__MaybeSymNameSpecifier_13, (MR_Integer) 0)));

#line 68 "prog_io_mutable.m"
        if (((MR_tag((MR_Word) parse_tree__prog_io_mutable__SymNameSpecifier_15)) == (MR_mktag((MR_Integer) 0))))
#line 60 "prog_io_mutable.m"
          {
#line 60 "prog_io_mutable.m"
            MR_Word parse_tree__prog_io_mutable__TypeCtorInfo_94_94 = (MR_Word) &mercury__term__term__type_ctor_info_generic_0;
#line 60 "prog_io_mutable.m"
            MR_String parse_tree__prog_io_mutable__TermStr_17;
#line 60 "prog_io_mutable.m"
            MR_Word parse_tree__prog_io_mutable__Pieces_18;
#line 60 "prog_io_mutable.m"
            MR_Word parse_tree__prog_io_mutable__Spec_19;
#line 60 "prog_io_mutable.m"
            MR_Word parse_tree__prog_io_mutable__V_57_57;
#line 60 "prog_io_mutable.m"
            MR_Word parse_tree__prog_io_mutable__V_60_60;
#line 60 "prog_io_mutable.m"
            MR_Word parse_tree__prog_io_mutable__V_63_63;
#line 60 "prog_io_mutable.m"
            MR_Word parse_tree__prog_io_mutable__V_66_66;
#line 60 "prog_io_mutable.m"
            MR_Word parse_tree__prog_io_mutable__V_67_67;
#line 60 "prog_io_mutable.m"
            MR_Word parse_tree__prog_io_mutable__V_76_76;
#line 60 "prog_io_mutable.m"
            MR_Word parse_tree__prog_io_mutable__V_77_77;
#line 60 "prog_io_mutable.m"
            MR_Word parse_tree__prog_io_mutable__V_78_78;
#line 60 "prog_io_mutable.m"
            MR_Word parse_tree__prog_io_mutable__V_79_79;
#line 60 "prog_io_mutable.m"
            MR_Word parse_tree__prog_io_mutable__V_80_80;
#line 60 "prog_io_mutable.m"
            MR_Word parse_tree__prog_io_mutable__V_83_83;

#line 61 "prog_io_mutable.m"
            {
#line 61 "prog_io_mutable.m"
              parse_tree__prog_io_mutable__TermStr_17 = parse_tree__parse_tree_out_term__describe_error_term_2_f_0(parse_tree__prog_io_mutable__TypeCtorInfo_94_94, parse_tree__prog_io_mutable__VarSet_8, parse_tree__prog_io_mutable__Term_9);
            }
#line 64 "prog_io_mutable.m"
            {
#line 64 "prog_io_mutable.m"
              parse_tree__prog_io_mutable__V_67_67 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 64 "prog_io_mutable.m"
              MR_hl_field(MR_mktag(3), parse_tree__prog_io_mutable__V_67_67, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 5));
#line 64 "prog_io_mutable.m"
              MR_hl_field(MR_mktag(3), parse_tree__prog_io_mutable__V_67_67, 1) = ((MR_Box) (parse_tree__prog_io_mutable__TermStr_17));
#line 64 "prog_io_mutable.m"
            }
#line 64 "prog_io_mutable.m"
            {
#line 64 "prog_io_mutable.m"
              parse_tree__prog_io_mutable__V_66_66 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 64 "prog_io_mutable.m"
              MR_hl_field(MR_mktag(1), parse_tree__prog_io_mutable__V_66_66, 0) = ((MR_Box) (parse_tree__prog_io_mutable__V_67_67));
#line 64 "prog_io_mutable.m"
              MR_hl_field(MR_mktag(1), parse_tree__prog_io_mutable__V_66_66, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__prog_io_mutable_scalar_common_2[2])));
#line 64 "prog_io_mutable.m"
            }
#line 63 "prog_io_mutable.m"
            {
#line 63 "prog_io_mutable.m"
              parse_tree__prog_io_mutable__V_63_63 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 63 "prog_io_mutable.m"
              MR_hl_field(MR_mktag(1), parse_tree__prog_io_mutable__V_63_63, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__prog_io_mutable_scalar_common_2[43])));
#line 63 "prog_io_mutable.m"
              MR_hl_field(MR_mktag(1), parse_tree__prog_io_mutable__V_63_63, 1) = ((MR_Box) (parse_tree__prog_io_mutable__V_66_66));
#line 63 "prog_io_mutable.m"
            }
#line 63 "prog_io_mutable.m"
            {
#line 63 "prog_io_mutable.m"
              parse_tree__prog_io_mutable__V_60_60 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 63 "prog_io_mutable.m"
              MR_hl_field(MR_mktag(1), parse_tree__prog_io_mutable__V_60_60, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__prog_io_mutable_scalar_common_2[42])));
#line 63 "prog_io_mutable.m"
              MR_hl_field(MR_mktag(1), parse_tree__prog_io_mutable__V_60_60, 1) = ((MR_Box) (parse_tree__prog_io_mutable__V_63_63));
#line 63 "prog_io_mutable.m"
            }
#line 62 "prog_io_mutable.m"
            {
#line 62 "prog_io_mutable.m"
              parse_tree__prog_io_mutable__V_57_57 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 62 "prog_io_mutable.m"
              MR_hl_field(MR_mktag(1), parse_tree__prog_io_mutable__V_57_57, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__prog_io_mutable_scalar_common_2[41])));
#line 62 "prog_io_mutable.m"
              MR_hl_field(MR_mktag(1), parse_tree__prog_io_mutable__V_57_57, 1) = ((MR_Box) (parse_tree__prog_io_mutable__V_60_60));
#line 62 "prog_io_mutable.m"
            }
#line 62 "prog_io_mutable.m"
            {
#line 62 "prog_io_mutable.m"
              parse_tree__prog_io_mutable__Pieces_18 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 62 "prog_io_mutable.m"
              MR_hl_field(MR_mktag(1), parse_tree__prog_io_mutable__Pieces_18, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__prog_io_mutable_scalar_common_2[40])));
#line 62 "prog_io_mutable.m"
              MR_hl_field(MR_mktag(1), parse_tree__prog_io_mutable__Pieces_18, 1) = ((MR_Box) (parse_tree__prog_io_mutable__V_57_57));
#line 62 "prog_io_mutable.m"
            }
#line 66 "prog_io_mutable.m"
            {
#line 66 "prog_io_mutable.m"
              parse_tree__prog_io_mutable__V_78_78 = mercury__term__get_term_context_1_f_0(parse_tree__prog_io_mutable__TypeCtorInfo_94_94, parse_tree__prog_io_mutable__Term_9);
            }
#line 66 "prog_io_mutable.m"
            {
#line 66 "prog_io_mutable.m"
              parse_tree__prog_io_mutable__V_80_80 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 66 "prog_io_mutable.m"
              MR_hl_field(MR_mktag(0), parse_tree__prog_io_mutable__V_80_80, 0) = ((MR_Box) (parse_tree__prog_io_mutable__Pieces_18));
#line 66 "prog_io_mutable.m"
            }
#line 66 "prog_io_mutable.m"
            {
#line 66 "prog_io_mutable.m"
              parse_tree__prog_io_mutable__V_79_79 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 66 "prog_io_mutable.m"
              MR_hl_field(MR_mktag(1), parse_tree__prog_io_mutable__V_79_79, 0) = ((MR_Box) (parse_tree__prog_io_mutable__V_80_80));
#line 66 "prog_io_mutable.m"
              MR_hl_field(MR_mktag(1), parse_tree__prog_io_mutable__V_79_79, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 66 "prog_io_mutable.m"
            }
#line 66 "prog_io_mutable.m"
            {
#line 66 "prog_io_mutable.m"
              parse_tree__prog_io_mutable__V_77_77 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 66 "prog_io_mutable.m"
              MR_hl_field(MR_mktag(0), parse_tree__prog_io_mutable__V_77_77, 0) = ((MR_Box) (parse_tree__prog_io_mutable__V_78_78));
#line 66 "prog_io_mutable.m"
              MR_hl_field(MR_mktag(0), parse_tree__prog_io_mutable__V_77_77, 1) = ((MR_Box) (parse_tree__prog_io_mutable__V_79_79));
#line 66 "prog_io_mutable.m"
            }
#line 66 "prog_io_mutable.m"
            {
#line 66 "prog_io_mutable.m"
              parse_tree__prog_io_mutable__V_76_76 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 66 "prog_io_mutable.m"
              MR_hl_field(MR_mktag(1), parse_tree__prog_io_mutable__V_76_76, 0) = ((MR_Box) (parse_tree__prog_io_mutable__V_77_77));
#line 66 "prog_io_mutable.m"
              MR_hl_field(MR_mktag(1), parse_tree__prog_io_mutable__V_76_76, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 66 "prog_io_mutable.m"
            }
#line 65 "prog_io_mutable.m"
            {
#line 65 "prog_io_mutable.m"
              parse_tree__prog_io_mutable__Spec_19 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 65 "prog_io_mutable.m"
              MR_hl_field(MR_mktag(0), parse_tree__prog_io_mutable__Spec_19, 0) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 65 "prog_io_mutable.m"
              MR_hl_field(MR_mktag(0), parse_tree__prog_io_mutable__Spec_19, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 2))));
#line 65 "prog_io_mutable.m"
              MR_hl_field(MR_mktag(0), parse_tree__prog_io_mutable__Spec_19, 2) = ((MR_Box) (parse_tree__prog_io_mutable__V_76_76));
#line 65 "prog_io_mutable.m"
            }
#line 67 "prog_io_mutable.m"
            {
#line 67 "prog_io_mutable.m"
              parse_tree__prog_io_mutable__V_83_83 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 67 "prog_io_mutable.m"
              MR_hl_field(MR_mktag(1), parse_tree__prog_io_mutable__V_83_83, 0) = ((MR_Box) (parse_tree__prog_io_mutable__Spec_19));
#line 67 "prog_io_mutable.m"
              MR_hl_field(MR_mktag(1), parse_tree__prog_io_mutable__V_83_83, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 67 "prog_io_mutable.m"
            }
#line 67 "prog_io_mutable.m"
            {
#line 67 "prog_io_mutable.m"
              MR_Word base;
#line 67 "prog_io_mutable.m"
              base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 67 "prog_io_mutable.m"
              *parse_tree__prog_io_mutable__MaybeItem_12 = base;
#line 67 "prog_io_mutable.m"
              MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (parse_tree__prog_io_mutable__V_83_83));
#line 67 "prog_io_mutable.m"
            }
#line 60 "prog_io_mutable.m"
          }
#line 68 "prog_io_mutable.m"
        else
#line 69 "prog_io_mutable.m"
          {
#line 69 "prog_io_mutable.m"
            MR_Word parse_tree__prog_io_mutable__SymName_20 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_mutable__SymNameSpecifier_15, (MR_Integer) 0)));
#line 69 "prog_io_mutable.m"
            MR_Integer parse_tree__prog_io_mutable__Arity_21 = ((MR_Integer) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_mutable__SymNameSpecifier_15, (MR_Integer) 1)));

#line 70 "prog_io_mutable.m"
#line 70 "prog_io_mutable.m"
            switch (parse_tree__prog_io_mutable__Arity_21) {
#line 70 "prog_io_mutable.m"
              default:
#line 70 "prog_io_mutable.m"
                parse_tree__prog_io_mutable__succeeded = MR_FALSE;
#line 70 "prog_io_mutable.m"
                break;
#line 70 "prog_io_mutable.m"
              case (MR_Integer) 0:
#line 70 "prog_io_mutable.m"
                parse_tree__prog_io_mutable__succeeded = MR_TRUE;
#line 70 "prog_io_mutable.m"
                break;
#line 70 "prog_io_mutable.m"
              case (MR_Integer) 2:
#line 70 "prog_io_mutable.m"
                parse_tree__prog_io_mutable__succeeded = MR_TRUE;
#line 70 "prog_io_mutable.m"
                break;
#line 70 "prog_io_mutable.m"
            }
#line 75 "prog_io_mutable.m"
            if (parse_tree__prog_io_mutable__succeeded)
#line 72 "prog_io_mutable.m"
              {
#line 72 "prog_io_mutable.m"
                MR_Word parse_tree__prog_io_mutable__ItemInitialise_22;
#line 72 "prog_io_mutable.m"
                MR_Word parse_tree__prog_io_mutable__Item_23;

#line 71 "prog_io_mutable.m"
                {
#line 71 "prog_io_mutable.m"
                  parse_tree__prog_io_mutable__ItemInitialise_22 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
#line 71 "prog_io_mutable.m"
                  MR_hl_field(MR_mktag(0), parse_tree__prog_io_mutable__ItemInitialise_22, 0) = ((MR_Box) (parse_tree__prog_io_mutable__SymName_20));
#line 71 "prog_io_mutable.m"
                  MR_hl_field(MR_mktag(0), parse_tree__prog_io_mutable__ItemInitialise_22, 1) = ((MR_Box) (parse_tree__prog_io_mutable__Arity_21));
#line 71 "prog_io_mutable.m"
                  MR_hl_field(MR_mktag(0), parse_tree__prog_io_mutable__ItemInitialise_22, 2) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 71 "prog_io_mutable.m"
                  MR_hl_field(MR_mktag(0), parse_tree__prog_io_mutable__ItemInitialise_22, 3) = ((MR_Box) (parse_tree__prog_io_mutable__Context_10));
#line 71 "prog_io_mutable.m"
                  MR_hl_field(MR_mktag(0), parse_tree__prog_io_mutable__ItemInitialise_22, 4) = ((MR_Box) (parse_tree__prog_io_mutable__SeqNum_11));
#line 71 "prog_io_mutable.m"
                }
#line 73 "prog_io_mutable.m"
                {
#line 73 "prog_io_mutable.m"
                  parse_tree__prog_io_mutable__Item_23 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 73 "prog_io_mutable.m"
                  MR_hl_field(MR_mktag(3), parse_tree__prog_io_mutable__Item_23, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 7));
#line 73 "prog_io_mutable.m"
                  MR_hl_field(MR_mktag(3), parse_tree__prog_io_mutable__Item_23, 1) = ((MR_Box) (parse_tree__prog_io_mutable__ItemInitialise_22));
#line 73 "prog_io_mutable.m"
                }
#line 74 "prog_io_mutable.m"
                {
#line 74 "prog_io_mutable.m"
                  MR_Word base;
#line 74 "prog_io_mutable.m"
                  base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 74 "prog_io_mutable.m"
                  *parse_tree__prog_io_mutable__MaybeItem_12 = base;
#line 74 "prog_io_mutable.m"
                  MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (parse_tree__prog_io_mutable__Item_23));
#line 74 "prog_io_mutable.m"
                }
#line 72 "prog_io_mutable.m"
              }
#line 75 "prog_io_mutable.m"
            else
#line 76 "prog_io_mutable.m"
              {
#line 76 "prog_io_mutable.m"
                MR_Word parse_tree__prog_io_mutable__TypeCtorInfo_95_95 = (MR_Word) &mercury__term__term__type_ctor_info_generic_0;
#line 76 "prog_io_mutable.m"
                MR_Word parse_tree__prog_io_mutable__V_27_27;
#line 76 "prog_io_mutable.m"
                MR_Word parse_tree__prog_io_mutable__V_30_30;
#line 76 "prog_io_mutable.m"
                MR_Word parse_tree__prog_io_mutable__V_33_33;
#line 76 "prog_io_mutable.m"
                MR_Word parse_tree__prog_io_mutable__V_36_36;
#line 76 "prog_io_mutable.m"
                MR_Word parse_tree__prog_io_mutable__V_37_37;
#line 76 "prog_io_mutable.m"
                MR_Word parse_tree__prog_io_mutable__V_46_46;
#line 76 "prog_io_mutable.m"
                MR_Word parse_tree__prog_io_mutable__V_47_47;
#line 76 "prog_io_mutable.m"
                MR_Word parse_tree__prog_io_mutable__V_48_48;
#line 76 "prog_io_mutable.m"
                MR_Word parse_tree__prog_io_mutable__V_49_49;
#line 76 "prog_io_mutable.m"
                MR_Word parse_tree__prog_io_mutable__V_50_50;
#line 76 "prog_io_mutable.m"
                MR_Word parse_tree__prog_io_mutable__V_53_53;
#line 76 "prog_io_mutable.m"
                MR_String parse_tree__prog_io_mutable__TermStr_85;
#line 76 "prog_io_mutable.m"
                MR_Word parse_tree__prog_io_mutable__Pieces_86;
#line 76 "prog_io_mutable.m"
                MR_Word parse_tree__prog_io_mutable__Spec_87;

#line 76 "prog_io_mutable.m"
                {
#line 76 "prog_io_mutable.m"
                  parse_tree__prog_io_mutable__TermStr_85 = parse_tree__parse_tree_out_term__describe_error_term_2_f_0(parse_tree__prog_io_mutable__TypeCtorInfo_95_95, parse_tree__prog_io_mutable__VarSet_8, parse_tree__prog_io_mutable__Term_9);
                }
#line 80 "prog_io_mutable.m"
                {
#line 80 "prog_io_mutable.m"
                  parse_tree__prog_io_mutable__V_37_37 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 80 "prog_io_mutable.m"
                  MR_hl_field(MR_mktag(2), parse_tree__prog_io_mutable__V_37_37, 0) = ((MR_Box) (parse_tree__prog_io_mutable__TermStr_85));
#line 80 "prog_io_mutable.m"
                }
#line 80 "prog_io_mutable.m"
                {
#line 80 "prog_io_mutable.m"
                  parse_tree__prog_io_mutable__V_36_36 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 80 "prog_io_mutable.m"
                  MR_hl_field(MR_mktag(1), parse_tree__prog_io_mutable__V_36_36, 0) = ((MR_Box) (parse_tree__prog_io_mutable__V_37_37));
#line 80 "prog_io_mutable.m"
                  MR_hl_field(MR_mktag(1), parse_tree__prog_io_mutable__V_36_36, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__prog_io_mutable_scalar_common_2[2])));
#line 80 "prog_io_mutable.m"
                }
#line 79 "prog_io_mutable.m"
                {
#line 79 "prog_io_mutable.m"
                  parse_tree__prog_io_mutable__V_33_33 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 79 "prog_io_mutable.m"
                  MR_hl_field(MR_mktag(1), parse_tree__prog_io_mutable__V_33_33, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__prog_io_mutable_scalar_common_2[45])));
#line 79 "prog_io_mutable.m"
                  MR_hl_field(MR_mktag(1), parse_tree__prog_io_mutable__V_33_33, 1) = ((MR_Box) (parse_tree__prog_io_mutable__V_36_36));
#line 79 "prog_io_mutable.m"
                }
#line 78 "prog_io_mutable.m"
                {
#line 78 "prog_io_mutable.m"
                  parse_tree__prog_io_mutable__V_30_30 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 78 "prog_io_mutable.m"
                  MR_hl_field(MR_mktag(1), parse_tree__prog_io_mutable__V_30_30, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__prog_io_mutable_scalar_common_2[44])));
#line 78 "prog_io_mutable.m"
                  MR_hl_field(MR_mktag(1), parse_tree__prog_io_mutable__V_30_30, 1) = ((MR_Box) (parse_tree__prog_io_mutable__V_33_33));
#line 78 "prog_io_mutable.m"
                }
#line 77 "prog_io_mutable.m"
                {
#line 77 "prog_io_mutable.m"
                  parse_tree__prog_io_mutable__V_27_27 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 77 "prog_io_mutable.m"
                  MR_hl_field(MR_mktag(1), parse_tree__prog_io_mutable__V_27_27, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__prog_io_mutable_scalar_common_2[41])));
#line 77 "prog_io_mutable.m"
                  MR_hl_field(MR_mktag(1), parse_tree__prog_io_mutable__V_27_27, 1) = ((MR_Box) (parse_tree__prog_io_mutable__V_30_30));
#line 77 "prog_io_mutable.m"
                }
#line 77 "prog_io_mutable.m"
                {
#line 77 "prog_io_mutable.m"
                  parse_tree__prog_io_mutable__Pieces_86 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 77 "prog_io_mutable.m"
                  MR_hl_field(MR_mktag(1), parse_tree__prog_io_mutable__Pieces_86, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__prog_io_mutable_scalar_common_2[40])));
#line 77 "prog_io_mutable.m"
                  MR_hl_field(MR_mktag(1), parse_tree__prog_io_mutable__Pieces_86, 1) = ((MR_Box) (parse_tree__prog_io_mutable__V_27_27));
#line 77 "prog_io_mutable.m"
                }
#line 82 "prog_io_mutable.m"
                {
#line 82 "prog_io_mutable.m"
                  parse_tree__prog_io_mutable__V_48_48 = mercury__term__get_term_context_1_f_0(parse_tree__prog_io_mutable__TypeCtorInfo_95_95, parse_tree__prog_io_mutable__Term_9);
                }
#line 82 "prog_io_mutable.m"
                {
#line 82 "prog_io_mutable.m"
                  parse_tree__prog_io_mutable__V_50_50 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 82 "prog_io_mutable.m"
                  MR_hl_field(MR_mktag(0), parse_tree__prog_io_mutable__V_50_50, 0) = ((MR_Box) (parse_tree__prog_io_mutable__Pieces_86));
#line 82 "prog_io_mutable.m"
                }
#line 82 "prog_io_mutable.m"
                {
#line 82 "prog_io_mutable.m"
                  parse_tree__prog_io_mutable__V_49_49 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 82 "prog_io_mutable.m"
                  MR_hl_field(MR_mktag(1), parse_tree__prog_io_mutable__V_49_49, 0) = ((MR_Box) (parse_tree__prog_io_mutable__V_50_50));
#line 82 "prog_io_mutable.m"
                  MR_hl_field(MR_mktag(1), parse_tree__prog_io_mutable__V_49_49, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 82 "prog_io_mutable.m"
                }
#line 82 "prog_io_mutable.m"
                {
#line 82 "prog_io_mutable.m"
                  parse_tree__prog_io_mutable__V_47_47 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 82 "prog_io_mutable.m"
                  MR_hl_field(MR_mktag(0), parse_tree__prog_io_mutable__V_47_47, 0) = ((MR_Box) (parse_tree__prog_io_mutable__V_48_48));
#line 82 "prog_io_mutable.m"
                  MR_hl_field(MR_mktag(0), parse_tree__prog_io_mutable__V_47_47, 1) = ((MR_Box) (parse_tree__prog_io_mutable__V_49_49));
#line 82 "prog_io_mutable.m"
                }
#line 82 "prog_io_mutable.m"
                {
#line 82 "prog_io_mutable.m"
                  parse_tree__prog_io_mutable__V_46_46 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 82 "prog_io_mutable.m"
                  MR_hl_field(MR_mktag(1), parse_tree__prog_io_mutable__V_46_46, 0) = ((MR_Box) (parse_tree__prog_io_mutable__V_47_47));
#line 82 "prog_io_mutable.m"
                  MR_hl_field(MR_mktag(1), parse_tree__prog_io_mutable__V_46_46, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 82 "prog_io_mutable.m"
                }
#line 81 "prog_io_mutable.m"
                {
#line 81 "prog_io_mutable.m"
                  parse_tree__prog_io_mutable__Spec_87 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 81 "prog_io_mutable.m"
                  MR_hl_field(MR_mktag(0), parse_tree__prog_io_mutable__Spec_87, 0) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 81 "prog_io_mutable.m"
                  MR_hl_field(MR_mktag(0), parse_tree__prog_io_mutable__Spec_87, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 2))));
#line 81 "prog_io_mutable.m"
                  MR_hl_field(MR_mktag(0), parse_tree__prog_io_mutable__Spec_87, 2) = ((MR_Box) (parse_tree__prog_io_mutable__V_46_46));
#line 81 "prog_io_mutable.m"
                }
#line 83 "prog_io_mutable.m"
                {
#line 83 "prog_io_mutable.m"
                  parse_tree__prog_io_mutable__V_53_53 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 83 "prog_io_mutable.m"
                  MR_hl_field(MR_mktag(1), parse_tree__prog_io_mutable__V_53_53, 0) = ((MR_Box) (parse_tree__prog_io_mutable__Spec_87));
#line 83 "prog_io_mutable.m"
                  MR_hl_field(MR_mktag(1), parse_tree__prog_io_mutable__V_53_53, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 83 "prog_io_mutable.m"
                }
#line 83 "prog_io_mutable.m"
                {
#line 83 "prog_io_mutable.m"
                  MR_Word base;
#line 83 "prog_io_mutable.m"
                  base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 83 "prog_io_mutable.m"
                  *parse_tree__prog_io_mutable__MaybeItem_12 = base;
#line 83 "prog_io_mutable.m"
                  MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (parse_tree__prog_io_mutable__V_53_53));
#line 83 "prog_io_mutable.m"
                }
#line 76 "prog_io_mutable.m"
              }
#line 69 "prog_io_mutable.m"
          }
#line 58 "prog_io_mutable.m"
      }
#line 52 "prog_io_mutable.m"
  }
#line 27 "prog_io_mutable.m"
}

#line 224 "prog_io_mutable.m"
static void MR_CALL 
parse_tree__prog_io_mutable____Compare____collected_mutable_attribute_0_0(
#line 224 "prog_io_mutable.m"
  MR_Word * parse_tree__prog_io_mutable__HeadVar__1_1,
#line 224 "prog_io_mutable.m"
  MR_Word parse_tree__prog_io_mutable__HeadVar__2_2,
#line 224 "prog_io_mutable.m"
  MR_Word parse_tree__prog_io_mutable__HeadVar__3_3)
#line 224 "prog_io_mutable.m"
{
#line 224 "prog_io_mutable.m"
  {
#line 224 "prog_io_mutable.m"
    MR_bool parse_tree__prog_io_mutable__succeeded;
#line 224 "prog_io_mutable.m"
    MR_Integer parse_tree__prog_io_mutable__CastX_54 = (MR_Integer) parse_tree__prog_io_mutable__HeadVar__2_2;
#line 224 "prog_io_mutable.m"
    MR_Integer parse_tree__prog_io_mutable__CastY_55 = (MR_Integer) parse_tree__prog_io_mutable__HeadVar__3_3;

#line 224 "prog_io_mutable.m"
    parse_tree__prog_io_mutable__succeeded = (parse_tree__prog_io_mutable__CastX_54 == parse_tree__prog_io_mutable__CastY_55);
#line 224 "prog_io_mutable.m"
    if (parse_tree__prog_io_mutable__succeeded)
#line 2513 "parse_tree.prog_io_mutable.c"
      *parse_tree__prog_io_mutable__HeadVar__1_1 = (MR_Integer) 0;
#line 224 "prog_io_mutable.m"
    else
#line 224 "prog_io_mutable.m"
#line 224 "prog_io_mutable.m"
      switch (MR_tag((MR_Word) parse_tree__prog_io_mutable__HeadVar__2_2)) {
#line 224 "prog_io_mutable.m"
        default: /*NOTREACHED*/ MR_assert(0);
#line 224 "prog_io_mutable.m"
        case (MR_Integer) 0:
#line 224 "prog_io_mutable.m"
          {
#line 224 "prog_io_mutable.m"
            MR_Word parse_tree__prog_io_mutable__V_63_63 = (MR_Word) MR_body(((MR_Word) parse_tree__prog_io_mutable__HeadVar__2_2), (MR_Integer) 0);

#line 224 "prog_io_mutable.m"
#line 224 "prog_io_mutable.m"
            switch (MR_tag((MR_Word) parse_tree__prog_io_mutable__HeadVar__3_3)) {
#line 224 "prog_io_mutable.m"
              default: /*NOTREACHED*/ MR_assert(0);
#line 224 "prog_io_mutable.m"
              case (MR_Integer) 0:
#line 224 "prog_io_mutable.m"
                {
#line 224 "prog_io_mutable.m"
                  MR_Word parse_tree__prog_io_mutable__V_17_17 = (MR_Word) MR_body(((MR_Word) parse_tree__prog_io_mutable__HeadVar__3_3), (MR_Integer) 0);

#line 224 "prog_io_mutable.m"
                  {
#line 224 "prog_io_mutable.m"
                    parse_tree__prog_item____Compare____foreign_name_0_0(parse_tree__prog_io_mutable__HeadVar__1_1, parse_tree__prog_io_mutable__V_63_63, parse_tree__prog_io_mutable__V_17_17);
#line 224 "prog_io_mutable.m"
                    return;
                  }
#line 224 "prog_io_mutable.m"
                }
#line 224 "prog_io_mutable.m"
                break;
#line 224 "prog_io_mutable.m"
              case (MR_Integer) 1:
#line 2554 "parse_tree.prog_io_mutable.c"
                *parse_tree__prog_io_mutable__HeadVar__1_1 = (MR_Integer) 2;
#line 224 "prog_io_mutable.m"
                break;
#line 224 "prog_io_mutable.m"
              case (MR_Integer) 2:
#line 2560 "parse_tree.prog_io_mutable.c"
                *parse_tree__prog_io_mutable__HeadVar__1_1 = (MR_Integer) 1;
#line 224 "prog_io_mutable.m"
                break;
#line 224 "prog_io_mutable.m"
              case (MR_Integer) 3:
#line 224 "prog_io_mutable.m"
#line 224 "prog_io_mutable.m"
                switch (((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__prog_io_mutable__HeadVar__3_3, (MR_Integer) 0)))) {
#line 224 "prog_io_mutable.m"
                  default: /*NOTREACHED*/ MR_assert(0);
#line 224 "prog_io_mutable.m"
                  case (MR_Integer) 0:
#line 2573 "parse_tree.prog_io_mutable.c"
                    *parse_tree__prog_io_mutable__HeadVar__1_1 = (MR_Integer) 1;
#line 224 "prog_io_mutable.m"
                    break;
#line 224 "prog_io_mutable.m"
                  case (MR_Integer) 1:
#line 2579 "parse_tree.prog_io_mutable.c"
                    *parse_tree__prog_io_mutable__HeadVar__1_1 = (MR_Integer) 1;
#line 224 "prog_io_mutable.m"
                    break;
#line 224 "prog_io_mutable.m"
                }
#line 224 "prog_io_mutable.m"
                break;
#line 224 "prog_io_mutable.m"
            }
#line 224 "prog_io_mutable.m"
          }
#line 224 "prog_io_mutable.m"
          break;
#line 224 "prog_io_mutable.m"
        case (MR_Integer) 1:
#line 224 "prog_io_mutable.m"
          {
#line 224 "prog_io_mutable.m"
            MR_Word parse_tree__prog_io_mutable__V_65_65 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_mutable__HeadVar__2_2, (MR_Integer) 0)));

#line 224 "prog_io_mutable.m"
#line 224 "prog_io_mutable.m"
            switch (MR_tag((MR_Word) parse_tree__prog_io_mutable__HeadVar__3_3)) {
#line 224 "prog_io_mutable.m"
              default: /*NOTREACHED*/ MR_assert(0);
#line 224 "prog_io_mutable.m"
              case (MR_Integer) 0:
#line 2607 "parse_tree.prog_io_mutable.c"
                *parse_tree__prog_io_mutable__HeadVar__1_1 = (MR_Integer) 1;
#line 224 "prog_io_mutable.m"
                break;
#line 224 "prog_io_mutable.m"
              case (MR_Integer) 1:
#line 224 "prog_io_mutable.m"
                {
#line 224 "prog_io_mutable.m"
                  MR_Word parse_tree__prog_io_mutable__V_5_5 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_mutable__HeadVar__3_3, (MR_Integer) 0)));
#line 224 "prog_io_mutable.m"
                  MR_Integer parse_tree__prog_io_mutable__V_72_72 = (MR_Integer) parse_tree__prog_io_mutable__V_65_65;
#line 224 "prog_io_mutable.m"
                  MR_Integer parse_tree__prog_io_mutable__V_73_73 = (MR_Integer) parse_tree__prog_io_mutable__V_5_5;

#line 224 "prog_io_mutable.m"
                  {
#line 224 "prog_io_mutable.m"
                    mercury__private_builtin__builtin_compare_int_3_p_0(parse_tree__prog_io_mutable__HeadVar__1_1, parse_tree__prog_io_mutable__V_72_72, parse_tree__prog_io_mutable__V_73_73);
#line 224 "prog_io_mutable.m"
                    return;
                  }
#line 224 "prog_io_mutable.m"
                }
#line 224 "prog_io_mutable.m"
                break;
#line 224 "prog_io_mutable.m"
              case (MR_Integer) 2:
#line 2635 "parse_tree.prog_io_mutable.c"
                *parse_tree__prog_io_mutable__HeadVar__1_1 = (MR_Integer) 1;
#line 224 "prog_io_mutable.m"
                break;
#line 224 "prog_io_mutable.m"
              case (MR_Integer) 3:
#line 224 "prog_io_mutable.m"
#line 224 "prog_io_mutable.m"
                switch (((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__prog_io_mutable__HeadVar__3_3, (MR_Integer) 0)))) {
#line 224 "prog_io_mutable.m"
                  default: /*NOTREACHED*/ MR_assert(0);
#line 224 "prog_io_mutable.m"
                  case (MR_Integer) 0:
#line 2648 "parse_tree.prog_io_mutable.c"
                    *parse_tree__prog_io_mutable__HeadVar__1_1 = (MR_Integer) 1;
#line 224 "prog_io_mutable.m"
                    break;
#line 224 "prog_io_mutable.m"
                  case (MR_Integer) 1:
#line 2654 "parse_tree.prog_io_mutable.c"
                    *parse_tree__prog_io_mutable__HeadVar__1_1 = (MR_Integer) 1;
#line 224 "prog_io_mutable.m"
                    break;
#line 224 "prog_io_mutable.m"
                }
#line 224 "prog_io_mutable.m"
                break;
#line 224 "prog_io_mutable.m"
            }
#line 224 "prog_io_mutable.m"
          }
#line 224 "prog_io_mutable.m"
          break;
#line 224 "prog_io_mutable.m"
        case (MR_Integer) 2:
#line 224 "prog_io_mutable.m"
          {
#line 224 "prog_io_mutable.m"
            MR_Word parse_tree__prog_io_mutable__V_61_61 = ((MR_Word) (MR_hl_field(MR_mktag(2), parse_tree__prog_io_mutable__HeadVar__2_2, (MR_Integer) 0)));

#line 224 "prog_io_mutable.m"
#line 224 "prog_io_mutable.m"
            switch (MR_tag((MR_Word) parse_tree__prog_io_mutable__HeadVar__3_3)) {
#line 224 "prog_io_mutable.m"
              default: /*NOTREACHED*/ MR_assert(0);
#line 224 "prog_io_mutable.m"
              case (MR_Integer) 0:
#line 2682 "parse_tree.prog_io_mutable.c"
                *parse_tree__prog_io_mutable__HeadVar__1_1 = (MR_Integer) 2;
#line 224 "prog_io_mutable.m"
                break;
#line 224 "prog_io_mutable.m"
              case (MR_Integer) 1:
#line 2688 "parse_tree.prog_io_mutable.c"
                *parse_tree__prog_io_mutable__HeadVar__1_1 = (MR_Integer) 2;
#line 224 "prog_io_mutable.m"
                break;
#line 224 "prog_io_mutable.m"
              case (MR_Integer) 2:
#line 224 "prog_io_mutable.m"
                {
#line 224 "prog_io_mutable.m"
                  MR_Word parse_tree__prog_io_mutable__V_29_29 = ((MR_Word) (MR_hl_field(MR_mktag(2), parse_tree__prog_io_mutable__HeadVar__3_3, (MR_Integer) 0)));
#line 224 "prog_io_mutable.m"
                  MR_Integer parse_tree__prog_io_mutable__V_66_66 = (MR_Integer) parse_tree__prog_io_mutable__V_61_61;
#line 224 "prog_io_mutable.m"
                  MR_Integer parse_tree__prog_io_mutable__V_67_67 = (MR_Integer) parse_tree__prog_io_mutable__V_29_29;

#line 224 "prog_io_mutable.m"
                  {
#line 224 "prog_io_mutable.m"
                    mercury__private_builtin__builtin_compare_int_3_p_0(parse_tree__prog_io_mutable__HeadVar__1_1, parse_tree__prog_io_mutable__V_66_66, parse_tree__prog_io_mutable__V_67_67);
#line 224 "prog_io_mutable.m"
                    return;
                  }
#line 224 "prog_io_mutable.m"
                }
#line 224 "prog_io_mutable.m"
                break;
#line 224 "prog_io_mutable.m"
              case (MR_Integer) 3:
#line 224 "prog_io_mutable.m"
#line 224 "prog_io_mutable.m"
                switch (((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__prog_io_mutable__HeadVar__3_3, (MR_Integer) 0)))) {
#line 224 "prog_io_mutable.m"
                  default: /*NOTREACHED*/ MR_assert(0);
#line 224 "prog_io_mutable.m"
                  case (MR_Integer) 0:
#line 2723 "parse_tree.prog_io_mutable.c"
                    *parse_tree__prog_io_mutable__HeadVar__1_1 = (MR_Integer) 1;
#line 224 "prog_io_mutable.m"
                    break;
#line 224 "prog_io_mutable.m"
                  case (MR_Integer) 1:
#line 2729 "parse_tree.prog_io_mutable.c"
                    *parse_tree__prog_io_mutable__HeadVar__1_1 = (MR_Integer) 1;
#line 224 "prog_io_mutable.m"
                    break;
#line 224 "prog_io_mutable.m"
                }
#line 224 "prog_io_mutable.m"
                break;
#line 224 "prog_io_mutable.m"
            }
#line 224 "prog_io_mutable.m"
          }
#line 224 "prog_io_mutable.m"
          break;
#line 224 "prog_io_mutable.m"
        case (MR_Integer) 3:
#line 224 "prog_io_mutable.m"
#line 224 "prog_io_mutable.m"
          switch (((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__prog_io_mutable__HeadVar__2_2, (MR_Integer) 0)))) {
#line 224 "prog_io_mutable.m"
            default: /*NOTREACHED*/ MR_assert(0);
#line 224 "prog_io_mutable.m"
            case (MR_Integer) 0:
#line 224 "prog_io_mutable.m"
              {
#line 224 "prog_io_mutable.m"
                MR_Word parse_tree__prog_io_mutable__V_62_62 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__prog_io_mutable__HeadVar__2_2, (MR_Integer) 1)));

#line 224 "prog_io_mutable.m"
#line 224 "prog_io_mutable.m"
                switch (MR_tag((MR_Word) parse_tree__prog_io_mutable__HeadVar__3_3)) {
#line 224 "prog_io_mutable.m"
                  default: /*NOTREACHED*/ MR_assert(0);
#line 224 "prog_io_mutable.m"
                  case (MR_Integer) 0:
#line 2764 "parse_tree.prog_io_mutable.c"
                    *parse_tree__prog_io_mutable__HeadVar__1_1 = (MR_Integer) 2;
#line 224 "prog_io_mutable.m"
                    break;
#line 224 "prog_io_mutable.m"
                  case (MR_Integer) 1:
#line 2770 "parse_tree.prog_io_mutable.c"
                    *parse_tree__prog_io_mutable__HeadVar__1_1 = (MR_Integer) 2;
#line 224 "prog_io_mutable.m"
                    break;
#line 224 "prog_io_mutable.m"
                  case (MR_Integer) 2:
#line 2776 "parse_tree.prog_io_mutable.c"
                    *parse_tree__prog_io_mutable__HeadVar__1_1 = (MR_Integer) 2;
#line 224 "prog_io_mutable.m"
                    break;
#line 224 "prog_io_mutable.m"
                  case (MR_Integer) 3:
#line 224 "prog_io_mutable.m"
#line 224 "prog_io_mutable.m"
                    switch (((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__prog_io_mutable__HeadVar__3_3, (MR_Integer) 0)))) {
#line 224 "prog_io_mutable.m"
                      default: /*NOTREACHED*/ MR_assert(0);
#line 224 "prog_io_mutable.m"
                      case (MR_Integer) 0:
#line 224 "prog_io_mutable.m"
                        {
#line 224 "prog_io_mutable.m"
                          MR_Word parse_tree__prog_io_mutable__V_41_41 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__prog_io_mutable__HeadVar__3_3, (MR_Integer) 1)));
#line 224 "prog_io_mutable.m"
                          MR_Integer parse_tree__prog_io_mutable__V_68_68 = (MR_Integer) parse_tree__prog_io_mutable__V_62_62;
#line 224 "prog_io_mutable.m"
                          MR_Integer parse_tree__prog_io_mutable__V_69_69 = (MR_Integer) parse_tree__prog_io_mutable__V_41_41;

#line 224 "prog_io_mutable.m"
                          {
#line 224 "prog_io_mutable.m"
                            mercury__private_builtin__builtin_compare_int_3_p_0(parse_tree__prog_io_mutable__HeadVar__1_1, parse_tree__prog_io_mutable__V_68_68, parse_tree__prog_io_mutable__V_69_69);
#line 224 "prog_io_mutable.m"
                            return;
                          }
#line 224 "prog_io_mutable.m"
                        }
#line 224 "prog_io_mutable.m"
                        break;
#line 224 "prog_io_mutable.m"
                      case (MR_Integer) 1:
#line 2811 "parse_tree.prog_io_mutable.c"
                        *parse_tree__prog_io_mutable__HeadVar__1_1 = (MR_Integer) 1;
#line 224 "prog_io_mutable.m"
                        break;
#line 224 "prog_io_mutable.m"
                    }
#line 224 "prog_io_mutable.m"
                    break;
#line 224 "prog_io_mutable.m"
                }
#line 224 "prog_io_mutable.m"
              }
#line 224 "prog_io_mutable.m"
              break;
#line 224 "prog_io_mutable.m"
            case (MR_Integer) 1:
#line 224 "prog_io_mutable.m"
              {
#line 224 "prog_io_mutable.m"
                MR_Word parse_tree__prog_io_mutable__V_64_64 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__prog_io_mutable__HeadVar__2_2, (MR_Integer) 1)));

#line 224 "prog_io_mutable.m"
#line 224 "prog_io_mutable.m"
                switch (MR_tag((MR_Word) parse_tree__prog_io_mutable__HeadVar__3_3)) {
#line 224 "prog_io_mutable.m"
                  default: /*NOTREACHED*/ MR_assert(0);
#line 224 "prog_io_mutable.m"
                  case (MR_Integer) 0:
#line 2839 "parse_tree.prog_io_mutable.c"
                    *parse_tree__prog_io_mutable__HeadVar__1_1 = (MR_Integer) 2;
#line 224 "prog_io_mutable.m"
                    break;
#line 224 "prog_io_mutable.m"
                  case (MR_Integer) 1:
#line 2845 "parse_tree.prog_io_mutable.c"
                    *parse_tree__prog_io_mutable__HeadVar__1_1 = (MR_Integer) 2;
#line 224 "prog_io_mutable.m"
                    break;
#line 224 "prog_io_mutable.m"
                  case (MR_Integer) 2:
#line 2851 "parse_tree.prog_io_mutable.c"
                    *parse_tree__prog_io_mutable__HeadVar__1_1 = (MR_Integer) 2;
#line 224 "prog_io_mutable.m"
                    break;
#line 224 "prog_io_mutable.m"
                  case (MR_Integer) 3:
#line 224 "prog_io_mutable.m"
#line 224 "prog_io_mutable.m"
                    switch (((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__prog_io_mutable__HeadVar__3_3, (MR_Integer) 0)))) {
#line 224 "prog_io_mutable.m"
                      default: /*NOTREACHED*/ MR_assert(0);
#line 224 "prog_io_mutable.m"
                      case (MR_Integer) 0:
#line 2864 "parse_tree.prog_io_mutable.c"
                        *parse_tree__prog_io_mutable__HeadVar__1_1 = (MR_Integer) 2;
#line 224 "prog_io_mutable.m"
                        break;
#line 224 "prog_io_mutable.m"
                      case (MR_Integer) 1:
#line 224 "prog_io_mutable.m"
                        {
#line 224 "prog_io_mutable.m"
                          MR_Word parse_tree__prog_io_mutable__V_53_53 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__prog_io_mutable__HeadVar__3_3, (MR_Integer) 1)));
#line 224 "prog_io_mutable.m"
                          MR_Integer parse_tree__prog_io_mutable__V_70_70 = (MR_Integer) parse_tree__prog_io_mutable__V_64_64;
#line 224 "prog_io_mutable.m"
                          MR_Integer parse_tree__prog_io_mutable__V_71_71 = (MR_Integer) parse_tree__prog_io_mutable__V_53_53;

#line 224 "prog_io_mutable.m"
                          {
#line 224 "prog_io_mutable.m"
                            mercury__private_builtin__builtin_compare_int_3_p_0(parse_tree__prog_io_mutable__HeadVar__1_1, parse_tree__prog_io_mutable__V_70_70, parse_tree__prog_io_mutable__V_71_71);
#line 224 "prog_io_mutable.m"
                            return;
                          }
#line 224 "prog_io_mutable.m"
                        }
#line 224 "prog_io_mutable.m"
                        break;
#line 224 "prog_io_mutable.m"
                    }
#line 224 "prog_io_mutable.m"
                    break;
#line 224 "prog_io_mutable.m"
                }
#line 224 "prog_io_mutable.m"
              }
#line 224 "prog_io_mutable.m"
              break;
#line 224 "prog_io_mutable.m"
          }
#line 224 "prog_io_mutable.m"
          break;
#line 224 "prog_io_mutable.m"
      }
#line 224 "prog_io_mutable.m"
  }
#line 224 "prog_io_mutable.m"
}

#line 224 "prog_io_mutable.m"
static MR_bool MR_CALL 
parse_tree__prog_io_mutable____Unify____collected_mutable_attribute_0_0(
#line 224 "prog_io_mutable.m"
  MR_Word parse_tree__prog_io_mutable__HeadVar__1_1,
#line 224 "prog_io_mutable.m"
  MR_Word parse_tree__prog_io_mutable__HeadVar__2_2)
#line 224 "prog_io_mutable.m"
{
#line 224 "prog_io_mutable.m"
  {
#line 224 "prog_io_mutable.m"
    MR_bool parse_tree__prog_io_mutable__succeeded;
#line 224 "prog_io_mutable.m"
    MR_Integer parse_tree__prog_io_mutable__CastX_13 = (MR_Integer) parse_tree__prog_io_mutable__HeadVar__1_1;
#line 224 "prog_io_mutable.m"
    MR_Integer parse_tree__prog_io_mutable__CastY_14 = (MR_Integer) parse_tree__prog_io_mutable__HeadVar__2_2;

#line 224 "prog_io_mutable.m"
    parse_tree__prog_io_mutable__succeeded = (parse_tree__prog_io_mutable__CastX_13 == parse_tree__prog_io_mutable__CastY_14);
#line 224 "prog_io_mutable.m"
    if (parse_tree__prog_io_mutable__succeeded)
#line 224 "prog_io_mutable.m"
      parse_tree__prog_io_mutable__succeeded = MR_TRUE;
#line 224 "prog_io_mutable.m"
    else
#line 224 "prog_io_mutable.m"
#line 224 "prog_io_mutable.m"
      switch (MR_tag((MR_Word) parse_tree__prog_io_mutable__HeadVar__1_1)) {
#line 224 "prog_io_mutable.m"
        default: /*NOTREACHED*/ MR_assert(0);
#line 224 "prog_io_mutable.m"
        case (MR_Integer) 0:
#line 224 "prog_io_mutable.m"
          {
#line 224 "prog_io_mutable.m"
            MR_Word parse_tree__prog_io_mutable__V_5_5 = (MR_Word) MR_body(((MR_Word) parse_tree__prog_io_mutable__HeadVar__1_1), (MR_Integer) 0);
#line 224 "prog_io_mutable.m"
            MR_Word parse_tree__prog_io_mutable__V_6_6;

#line 224 "prog_io_mutable.m"
            parse_tree__prog_io_mutable__succeeded = ((MR_tag((MR_Word) parse_tree__prog_io_mutable__HeadVar__2_2)) == (MR_mktag((MR_Integer) 0)));
#line 224 "prog_io_mutable.m"
            if (parse_tree__prog_io_mutable__succeeded)
#line 224 "prog_io_mutable.m"
              {
#line 224 "prog_io_mutable.m"
                parse_tree__prog_io_mutable__V_6_6 = (MR_Word) MR_body(((MR_Word) parse_tree__prog_io_mutable__HeadVar__2_2), (MR_Integer) 0);
#line 2959 "parse_tree.prog_io_mutable.c"
                {
#line 2961 "parse_tree.prog_io_mutable.c"
                  return parse_tree__prog_io_mutable__succeeded = parse_tree__prog_item____Unify____foreign_name_0_0(parse_tree__prog_io_mutable__V_5_5, parse_tree__prog_io_mutable__V_6_6);
                }
#line 224 "prog_io_mutable.m"
              }
#line 224 "prog_io_mutable.m"
          }
#line 224 "prog_io_mutable.m"
          break;
#line 224 "prog_io_mutable.m"
        case (MR_Integer) 1:
#line 224 "prog_io_mutable.m"
          {
#line 224 "prog_io_mutable.m"
            MR_Word parse_tree__prog_io_mutable__V_3_3 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_mutable__HeadVar__1_1, (MR_Integer) 0)));
#line 224 "prog_io_mutable.m"
            MR_Word parse_tree__prog_io_mutable__V_4_4;

#line 224 "prog_io_mutable.m"
            parse_tree__prog_io_mutable__succeeded = ((MR_tag((MR_Word) parse_tree__prog_io_mutable__HeadVar__2_2)) == (MR_mktag((MR_Integer) 1)));
#line 224 "prog_io_mutable.m"
            if (parse_tree__prog_io_mutable__succeeded)
#line 224 "prog_io_mutable.m"
              {
#line 224 "prog_io_mutable.m"
                parse_tree__prog_io_mutable__V_4_4 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_mutable__HeadVar__2_2, (MR_Integer) 0)));
#line 2987 "parse_tree.prog_io_mutable.c"
                parse_tree__prog_io_mutable__succeeded = (parse_tree__prog_io_mutable__V_3_3 == parse_tree__prog_io_mutable__V_4_4);
#line 224 "prog_io_mutable.m"
              }
#line 224 "prog_io_mutable.m"
          }
#line 224 "prog_io_mutable.m"
          break;
#line 224 "prog_io_mutable.m"
        case (MR_Integer) 2:
#line 224 "prog_io_mutable.m"
          {
#line 224 "prog_io_mutable.m"
            MR_Word parse_tree__prog_io_mutable__V_7_7 = ((MR_Word) (MR_hl_field(MR_mktag(2), parse_tree__prog_io_mutable__HeadVar__1_1, (MR_Integer) 0)));
#line 224 "prog_io_mutable.m"
            MR_Word parse_tree__prog_io_mutable__V_8_8;

#line 224 "prog_io_mutable.m"
            parse_tree__prog_io_mutable__succeeded = ((MR_tag((MR_Word) parse_tree__prog_io_mutable__HeadVar__2_2)) == (MR_mktag((MR_Integer) 2)));
#line 224 "prog_io_mutable.m"
            if (parse_tree__prog_io_mutable__succeeded)
#line 224 "prog_io_mutable.m"
              {
#line 224 "prog_io_mutable.m"
                parse_tree__prog_io_mutable__V_8_8 = ((MR_Word) (MR_hl_field(MR_mktag(2), parse_tree__prog_io_mutable__HeadVar__2_2, (MR_Integer) 0)));
#line 3012 "parse_tree.prog_io_mutable.c"
                parse_tree__prog_io_mutable__succeeded = (parse_tree__prog_io_mutable__V_7_7 == parse_tree__prog_io_mutable__V_8_8);
#line 224 "prog_io_mutable.m"
              }
#line 224 "prog_io_mutable.m"
          }
#line 224 "prog_io_mutable.m"
          break;
#line 224 "prog_io_mutable.m"
        case (MR_Integer) 3:
#line 224 "prog_io_mutable.m"
#line 224 "prog_io_mutable.m"
          switch (((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__prog_io_mutable__HeadVar__1_1, (MR_Integer) 0)))) {
#line 224 "prog_io_mutable.m"
            default: /*NOTREACHED*/ MR_assert(0);
#line 224 "prog_io_mutable.m"
            case (MR_Integer) 0:
#line 224 "prog_io_mutable.m"
              {
#line 224 "prog_io_mutable.m"
                MR_Word parse_tree__prog_io_mutable__V_9_9 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__prog_io_mutable__HeadVar__1_1, (MR_Integer) 1)));
#line 224 "prog_io_mutable.m"
                MR_Word parse_tree__prog_io_mutable__V_10_10;

#line 224 "prog_io_mutable.m"
                parse_tree__prog_io_mutable__succeeded = ((((MR_tag((MR_Word) parse_tree__prog_io_mutable__HeadVar__2_2)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__prog_io_mutable__HeadVar__2_2, (MR_Integer) 0)))) == (MR_Integer) 0)));
#line 224 "prog_io_mutable.m"
                if (parse_tree__prog_io_mutable__succeeded)
#line 224 "prog_io_mutable.m"
                  {
#line 224 "prog_io_mutable.m"
                    parse_tree__prog_io_mutable__V_10_10 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__prog_io_mutable__HeadVar__2_2, (MR_Integer) 1)));
#line 3044 "parse_tree.prog_io_mutable.c"
                    parse_tree__prog_io_mutable__succeeded = (parse_tree__prog_io_mutable__V_9_9 == parse_tree__prog_io_mutable__V_10_10);
#line 224 "prog_io_mutable.m"
                  }
#line 224 "prog_io_mutable.m"
              }
#line 224 "prog_io_mutable.m"
              break;
#line 224 "prog_io_mutable.m"
            case (MR_Integer) 1:
#line 224 "prog_io_mutable.m"
              {
#line 224 "prog_io_mutable.m"
                MR_Word parse_tree__prog_io_mutable__V_11_11 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__prog_io_mutable__HeadVar__1_1, (MR_Integer) 1)));
#line 224 "prog_io_mutable.m"
                MR_Word parse_tree__prog_io_mutable__V_12_12;

#line 224 "prog_io_mutable.m"
                parse_tree__prog_io_mutable__succeeded = ((((MR_tag((MR_Word) parse_tree__prog_io_mutable__HeadVar__2_2)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__prog_io_mutable__HeadVar__2_2, (MR_Integer) 0)))) == (MR_Integer) 1)));
#line 224 "prog_io_mutable.m"
                if (parse_tree__prog_io_mutable__succeeded)
#line 224 "prog_io_mutable.m"
                  {
#line 224 "prog_io_mutable.m"
                    parse_tree__prog_io_mutable__V_12_12 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__prog_io_mutable__HeadVar__2_2, (MR_Integer) 1)));
#line 3069 "parse_tree.prog_io_mutable.c"
                    parse_tree__prog_io_mutable__succeeded = (parse_tree__prog_io_mutable__V_11_11 == parse_tree__prog_io_mutable__V_12_12);
#line 224 "prog_io_mutable.m"
                  }
#line 224 "prog_io_mutable.m"
              }
#line 224 "prog_io_mutable.m"
              break;
#line 224 "prog_io_mutable.m"
          }
#line 224 "prog_io_mutable.m"
          break;
#line 224 "prog_io_mutable.m"
      }
#line 224 "prog_io_mutable.m"
    return parse_tree__prog_io_mutable__succeeded;
#line 224 "prog_io_mutable.m"
  }
#line 224 "prog_io_mutable.m"
}

#line 312 "prog_io_mutable.m"
static void MR_CALL 
parse_tree__prog_io_mutable__parse_mutable_attr_2_p_0(
#line 312 "prog_io_mutable.m"
  MR_Word parse_tree__prog_io_mutable__MutAttrTerm_3,
#line 312 "prog_io_mutable.m"
  MR_Word * parse_tree__prog_io_mutable__MutAttrResult_4)
#line 312 "prog_io_mutable.m"
{
#line 337 "prog_io_mutable.m"
  {
#line 337 "prog_io_mutable.m"
    MR_bool parse_tree__prog_io_mutable__succeeded = ((MR_tag((MR_Word) parse_tree__prog_io_mutable__MutAttrTerm_3)) == (MR_mktag((MR_Integer) 0)));
#line 337 "prog_io_mutable.m"
    MR_Word parse_tree__prog_io_mutable__MutAttr_7;
#line 317 "prog_io_mutable.m"
    MR_String parse_tree__prog_io_mutable__String_5;
#line 317 "prog_io_mutable.m"
    MR_Word parse_tree__prog_io_mutable__V_17_17;
#line 317 "prog_io_mutable.m"
    MR_Word parse_tree__prog_io_mutable__V_18_18;
#line 317 "prog_io_mutable.m"
    MR_Word parse_tree__prog_io_mutable__V_6_6;
#line 321 "prog_io_mutable.m"
    MR_Integer parse_tree__prog_io_mutable__lo_0;
#line 321 "prog_io_mutable.m"
    MR_Integer parse_tree__prog_io_mutable__hi_1;
#line 321 "prog_io_mutable.m"
    MR_Integer parse_tree__prog_io_mutable__mid_2;
#line 321 "prog_io_mutable.m"
    MR_Integer parse_tree__prog_io_mutable__result_3;

#line 317 "prog_io_mutable.m"
    if (parse_tree__prog_io_mutable__succeeded)
#line 317 "prog_io_mutable.m"
      {
#line 317 "prog_io_mutable.m"
        parse_tree__prog_io_mutable__V_17_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_mutable__MutAttrTerm_3, (MR_Integer) 0)));
#line 317 "prog_io_mutable.m"
        parse_tree__prog_io_mutable__V_18_18 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_mutable__MutAttrTerm_3, (MR_Integer) 1)));
#line 317 "prog_io_mutable.m"
        parse_tree__prog_io_mutable__V_6_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_mutable__MutAttrTerm_3, (MR_Integer) 2)));
#line 317 "prog_io_mutable.m"
        parse_tree__prog_io_mutable__succeeded = (parse_tree__prog_io_mutable__V_18_18 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 317 "prog_io_mutable.m"
        if (parse_tree__prog_io_mutable__succeeded)
#line 317 "prog_io_mutable.m"
          {
#line 317 "prog_io_mutable.m"
            parse_tree__prog_io_mutable__succeeded = ((MR_tag((MR_Word) parse_tree__prog_io_mutable__V_17_17)) == (MR_mktag((MR_Integer) 0)));
#line 317 "prog_io_mutable.m"
            if (parse_tree__prog_io_mutable__succeeded)
#line 317 "prog_io_mutable.m"
              {
#line 317 "prog_io_mutable.m"
                parse_tree__prog_io_mutable__String_5 = ((MR_String) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_mutable__V_17_17, (MR_Integer) 0)));
#line 321 "prog_io_mutable.m"
                /* binary string simple lookup switch */
#line 321 "prog_io_mutable.m"
                parse_tree__prog_io_mutable__lo_0 = (MR_Integer) 0;
#line 321 "prog_io_mutable.m"
                parse_tree__prog_io_mutable__hi_1 = (MR_Integer) 4;
#line 321 "prog_io_mutable.m"
                do
#line 321 "prog_io_mutable.m"
                  {
#line 321 "prog_io_mutable.m"
                    parse_tree__prog_io_mutable__mid_2 = (((parse_tree__prog_io_mutable__lo_0 + parse_tree__prog_io_mutable__hi_1)) / (MR_Integer) 2);
#line 321 "prog_io_mutable.m"
                    parse_tree__prog_io_mutable__result_3 = MR_strcmp(parse_tree__prog_io_mutable__String_5, ((&parse_tree__prog_io_mutable_vector_common_6[0 + parse_tree__prog_io_mutable__mid_2]))->parse_tree__prog_io_mutable__vector_common_type_6_0__vct_6_f_0);
#line 321 "prog_io_mutable.m"
                    if ((parse_tree__prog_io_mutable__result_3 == (MR_Integer) 0))
#line 321 "prog_io_mutable.m"
                      {
#line 321 "prog_io_mutable.m"
                        parse_tree__prog_io_mutable__MutAttr_7 = ((&parse_tree__prog_io_mutable_vector_common_6[0 + parse_tree__prog_io_mutable__mid_2]))->parse_tree__prog_io_mutable__vector_common_type_6_0__vct_6_f_1;
#line 321 "prog_io_mutable.m"
                        parse_tree__prog_io_mutable__succeeded = MR_TRUE;
#line 321 "prog_io_mutable.m"
                        /* jump out of search loop */
#line 321 "prog_io_mutable.m"
                        goto label_0;
#line 321 "prog_io_mutable.m"
                      }
#line 321 "prog_io_mutable.m"
                    else
#line 321 "prog_io_mutable.m"
                    if ((parse_tree__prog_io_mutable__result_3 < (MR_Integer) 0))
#line 321 "prog_io_mutable.m"
                      parse_tree__prog_io_mutable__hi_1 = (parse_tree__prog_io_mutable__mid_2 - (MR_Integer) 1);
#line 321 "prog_io_mutable.m"
                    else
#line 321 "prog_io_mutable.m"
                      parse_tree__prog_io_mutable__lo_0 = (parse_tree__prog_io_mutable__mid_2 + (MR_Integer) 1);
#line 321 "prog_io_mutable.m"
                  }
#line 321 "prog_io_mutable.m"
                while ((parse_tree__prog_io_mutable__lo_0 <= parse_tree__prog_io_mutable__hi_1));
#line 321 "prog_io_mutable.m"
                parse_tree__prog_io_mutable__succeeded = MR_FALSE;
#line 321 "prog_io_mutable.m"
              label_0:;
#line 317 "prog_io_mutable.m"
              }
#line 317 "prog_io_mutable.m"
          }
#line 317 "prog_io_mutable.m"
      }
#line 337 "prog_io_mutable.m"
    if (parse_tree__prog_io_mutable__succeeded)
#line 336 "prog_io_mutable.m"
      {
#line 336 "prog_io_mutable.m"
        MR_Word base;
#line 336 "prog_io_mutable.m"
        base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 336 "prog_io_mutable.m"
        *parse_tree__prog_io_mutable__MutAttrResult_4 = base;
#line 336 "prog_io_mutable.m"
        MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (parse_tree__prog_io_mutable__MutAttr_7));
#line 336 "prog_io_mutable.m"
      }
#line 337 "prog_io_mutable.m"
    else
#line 345 "prog_io_mutable.m"
      {
#line 345 "prog_io_mutable.m"
        MR_Word parse_tree__prog_io_mutable__Lang_12;
#line 345 "prog_io_mutable.m"
        MR_String parse_tree__prog_io_mutable__ForeignName_13;
#line 338 "prog_io_mutable.m"
        MR_Word parse_tree__prog_io_mutable__Args_8;
#line 338 "prog_io_mutable.m"
        MR_Word parse_tree__prog_io_mutable__LangTerm_10;
#line 338 "prog_io_mutable.m"
        MR_Word parse_tree__prog_io_mutable__ForeignNameTerm_11;
#line 338 "prog_io_mutable.m"
        MR_Word parse_tree__prog_io_mutable__V_24_24;
#line 338 "prog_io_mutable.m"
        MR_String parse_tree__prog_io_mutable__V_25_25;
#line 338 "prog_io_mutable.m"
        MR_Word parse_tree__prog_io_mutable__V_26_26;
#line 338 "prog_io_mutable.m"
        MR_Word parse_tree__prog_io_mutable__V_27_27;
#line 338 "prog_io_mutable.m"
        MR_Word parse_tree__prog_io_mutable__V_28_28;
#line 338 "prog_io_mutable.m"
        MR_Word parse_tree__prog_io_mutable__V_29_29;
#line 338 "prog_io_mutable.m"
        MR_Word parse_tree__prog_io_mutable__V_9_9;
#line 341 "prog_io_mutable.m"
        MR_Word parse_tree__prog_io_mutable__V_14_14;

#line 338 "prog_io_mutable.m"
        parse_tree__prog_io_mutable__succeeded = ((MR_tag((MR_Word) parse_tree__prog_io_mutable__MutAttrTerm_3)) == (MR_mktag((MR_Integer) 0)));
#line 338 "prog_io_mutable.m"
        if (parse_tree__prog_io_mutable__succeeded)
#line 338 "prog_io_mutable.m"
          {
#line 338 "prog_io_mutable.m"
            parse_tree__prog_io_mutable__V_24_24 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_mutable__MutAttrTerm_3, (MR_Integer) 0)));
#line 338 "prog_io_mutable.m"
            parse_tree__prog_io_mutable__Args_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_mutable__MutAttrTerm_3, (MR_Integer) 1)));
#line 338 "prog_io_mutable.m"
            parse_tree__prog_io_mutable__V_9_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_mutable__MutAttrTerm_3, (MR_Integer) 2)));
#line 338 "prog_io_mutable.m"
            parse_tree__prog_io_mutable__succeeded = ((MR_tag((MR_Word) parse_tree__prog_io_mutable__V_24_24)) == (MR_mktag((MR_Integer) 0)));
#line 338 "prog_io_mutable.m"
            if (parse_tree__prog_io_mutable__succeeded)
#line 338 "prog_io_mutable.m"
              {
#line 338 "prog_io_mutable.m"
                parse_tree__prog_io_mutable__V_25_25 = ((MR_String) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_mutable__V_24_24, (MR_Integer) 0)));
#line 338 "prog_io_mutable.m"
                parse_tree__prog_io_mutable__succeeded = (strcmp(parse_tree__prog_io_mutable__V_25_25, (MR_String) "foreign_name") == 0);
#line 338 "prog_io_mutable.m"
                if (parse_tree__prog_io_mutable__succeeded)
#line 338 "prog_io_mutable.m"
                  {
#line 339 "prog_io_mutable.m"
                    parse_tree__prog_io_mutable__succeeded = ((MR_tag((MR_Word) parse_tree__prog_io_mutable__Args_8)) == (MR_mktag((MR_Integer) 1)));
#line 339 "prog_io_mutable.m"
                    if (parse_tree__prog_io_mutable__succeeded)
#line 339 "prog_io_mutable.m"
                      {
#line 339 "prog_io_mutable.m"
                        parse_tree__prog_io_mutable__LangTerm_10 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_mutable__Args_8, (MR_Integer) 0)));
#line 339 "prog_io_mutable.m"
                        parse_tree__prog_io_mutable__V_26_26 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_mutable__Args_8, (MR_Integer) 1)));
#line 339 "prog_io_mutable.m"
                        parse_tree__prog_io_mutable__succeeded = ((MR_tag((MR_Word) parse_tree__prog_io_mutable__V_26_26)) == (MR_mktag((MR_Integer) 1)));
#line 339 "prog_io_mutable.m"
                        if (parse_tree__prog_io_mutable__succeeded)
#line 339 "prog_io_mutable.m"
                          {
#line 339 "prog_io_mutable.m"
                            parse_tree__prog_io_mutable__ForeignNameTerm_11 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_mutable__V_26_26, (MR_Integer) 0)));
#line 339 "prog_io_mutable.m"
                            parse_tree__prog_io_mutable__V_27_27 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_mutable__V_26_26, (MR_Integer) 1)));
#line 339 "prog_io_mutable.m"
                            parse_tree__prog_io_mutable__succeeded = (parse_tree__prog_io_mutable__V_27_27 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 338 "prog_io_mutable.m"
                            if (parse_tree__prog_io_mutable__succeeded)
#line 338 "prog_io_mutable.m"
                              {
#line 340 "prog_io_mutable.m"
                                {
#line 340 "prog_io_mutable.m"
                                  parse_tree__prog_io_mutable__succeeded = parse_tree__prog_io_pragma__parse_foreign_language_2_p_0(parse_tree__prog_io_mutable__LangTerm_10, &parse_tree__prog_io_mutable__Lang_12);
                                }
#line 338 "prog_io_mutable.m"
                                if (parse_tree__prog_io_mutable__succeeded)
#line 338 "prog_io_mutable.m"
                                  {
#line 341 "prog_io_mutable.m"
                                    parse_tree__prog_io_mutable__succeeded = ((MR_tag((MR_Word) parse_tree__prog_io_mutable__ForeignNameTerm_11)) == (MR_mktag((MR_Integer) 0)));
#line 341 "prog_io_mutable.m"
                                    if (parse_tree__prog_io_mutable__succeeded)
#line 341 "prog_io_mutable.m"
                                      {
#line 341 "prog_io_mutable.m"
                                        parse_tree__prog_io_mutable__V_28_28 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_mutable__ForeignNameTerm_11, (MR_Integer) 0)));
#line 341 "prog_io_mutable.m"
                                        parse_tree__prog_io_mutable__V_29_29 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_mutable__ForeignNameTerm_11, (MR_Integer) 1)));
#line 341 "prog_io_mutable.m"
                                        parse_tree__prog_io_mutable__V_14_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_mutable__ForeignNameTerm_11, (MR_Integer) 2)));
#line 341 "prog_io_mutable.m"
                                        parse_tree__prog_io_mutable__succeeded = (parse_tree__prog_io_mutable__V_29_29 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 338 "prog_io_mutable.m"
                                        if (parse_tree__prog_io_mutable__succeeded)
#line 338 "prog_io_mutable.m"
                                          {
#line 341 "prog_io_mutable.m"
                                            parse_tree__prog_io_mutable__succeeded = ((((MR_tag((MR_Word) parse_tree__prog_io_mutable__V_28_28)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__prog_io_mutable__V_28_28, (MR_Integer) 0)))) == (MR_Integer) 0)));
#line 341 "prog_io_mutable.m"
                                            if (parse_tree__prog_io_mutable__succeeded)
#line 341 "prog_io_mutable.m"
                                              parse_tree__prog_io_mutable__ForeignName_13 = ((MR_String) (MR_hl_field(MR_mktag(3), parse_tree__prog_io_mutable__V_28_28, (MR_Integer) 1)));
#line 338 "prog_io_mutable.m"
                                          }
#line 341 "prog_io_mutable.m"
                                      }
#line 338 "prog_io_mutable.m"
                                  }
#line 338 "prog_io_mutable.m"
                              }
#line 339 "prog_io_mutable.m"
                          }
#line 339 "prog_io_mutable.m"
                      }
#line 338 "prog_io_mutable.m"
                  }
#line 338 "prog_io_mutable.m"
              }
#line 338 "prog_io_mutable.m"
          }
#line 345 "prog_io_mutable.m"
        if (parse_tree__prog_io_mutable__succeeded)
#line 343 "prog_io_mutable.m"
          {
#line 343 "prog_io_mutable.m"
            MR_Word parse_tree__prog_io_mutable__V_30_30;
#line 343 "prog_io_mutable.m"
            MR_Word parse_tree__prog_io_mutable__MutAttr_56;

#line 343 "prog_io_mutable.m"
            {
#line 343 "prog_io_mutable.m"
              parse_tree__prog_io_mutable__V_30_30 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 343 "prog_io_mutable.m"
              MR_hl_field(MR_mktag(0), parse_tree__prog_io_mutable__V_30_30, 0) = ((MR_Box) (parse_tree__prog_io_mutable__Lang_12));
#line 343 "prog_io_mutable.m"
              MR_hl_field(MR_mktag(0), parse_tree__prog_io_mutable__V_30_30, 1) = ((MR_Box) (parse_tree__prog_io_mutable__ForeignName_13));
#line 343 "prog_io_mutable.m"
            }
#line 343 "prog_io_mutable.m"
            parse_tree__prog_io_mutable__MutAttr_56 = (MR_Word) MR_mkword(MR_mktag(0), (MR_Word) parse_tree__prog_io_mutable__V_30_30);
#line 344 "prog_io_mutable.m"
            {
#line 344 "prog_io_mutable.m"
              MR_Word base;
#line 344 "prog_io_mutable.m"
              base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 344 "prog_io_mutable.m"
              *parse_tree__prog_io_mutable__MutAttrResult_4 = base;
#line 344 "prog_io_mutable.m"
              MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (parse_tree__prog_io_mutable__MutAttr_56));
#line 344 "prog_io_mutable.m"
            }
#line 343 "prog_io_mutable.m"
          }
#line 345 "prog_io_mutable.m"
        else
#line 347 "prog_io_mutable.m"
          {
#line 347 "prog_io_mutable.m"
            MR_Word parse_tree__prog_io_mutable__Spec_16;
#line 347 "prog_io_mutable.m"
            MR_Word parse_tree__prog_io_mutable__V_47_47;
#line 347 "prog_io_mutable.m"
            MR_Word parse_tree__prog_io_mutable__V_48_48;
#line 347 "prog_io_mutable.m"
            MR_Word parse_tree__prog_io_mutable__V_49_49;
#line 347 "prog_io_mutable.m"
            MR_Word parse_tree__prog_io_mutable__V_54_54;

#line 349 "prog_io_mutable.m"
            {
#line 349 "prog_io_mutable.m"
              parse_tree__prog_io_mutable__V_49_49 = mercury__term__get_term_context_1_f_0((MR_Word) &mercury__term__term__type_ctor_info_generic_0, parse_tree__prog_io_mutable__MutAttrTerm_3);
            }
#line 349 "prog_io_mutable.m"
            {
#line 349 "prog_io_mutable.m"
              parse_tree__prog_io_mutable__V_48_48 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 349 "prog_io_mutable.m"
              MR_hl_field(MR_mktag(0), parse_tree__prog_io_mutable__V_48_48, 0) = ((MR_Box) (parse_tree__prog_io_mutable__V_49_49));
#line 349 "prog_io_mutable.m"
              MR_hl_field(MR_mktag(0), parse_tree__prog_io_mutable__V_48_48, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__prog_io_mutable_scalar_common_2[39])));
#line 349 "prog_io_mutable.m"
            }
#line 349 "prog_io_mutable.m"
            {
#line 349 "prog_io_mutable.m"
              parse_tree__prog_io_mutable__V_47_47 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 349 "prog_io_mutable.m"
              MR_hl_field(MR_mktag(1), parse_tree__prog_io_mutable__V_47_47, 0) = ((MR_Box) (parse_tree__prog_io_mutable__V_48_48));
#line 349 "prog_io_mutable.m"
              MR_hl_field(MR_mktag(1), parse_tree__prog_io_mutable__V_47_47, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 349 "prog_io_mutable.m"
            }
#line 348 "prog_io_mutable.m"
            {
#line 348 "prog_io_mutable.m"
              parse_tree__prog_io_mutable__Spec_16 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 348 "prog_io_mutable.m"
              MR_hl_field(MR_mktag(0), parse_tree__prog_io_mutable__Spec_16, 0) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 348 "prog_io_mutable.m"
              MR_hl_field(MR_mktag(0), parse_tree__prog_io_mutable__Spec_16, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 2))));
#line 348 "prog_io_mutable.m"
              MR_hl_field(MR_mktag(0), parse_tree__prog_io_mutable__Spec_16, 2) = ((MR_Box) (parse_tree__prog_io_mutable__V_47_47));
#line 348 "prog_io_mutable.m"
            }
#line 350 "prog_io_mutable.m"
            {
#line 350 "prog_io_mutable.m"
              parse_tree__prog_io_mutable__V_54_54 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 350 "prog_io_mutable.m"
              MR_hl_field(MR_mktag(1), parse_tree__prog_io_mutable__V_54_54, 0) = ((MR_Box) (parse_tree__prog_io_mutable__Spec_16));
#line 350 "prog_io_mutable.m"
              MR_hl_field(MR_mktag(1), parse_tree__prog_io_mutable__V_54_54, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 350 "prog_io_mutable.m"
            }
#line 350 "prog_io_mutable.m"
            {
#line 350 "prog_io_mutable.m"
              MR_Word base;
#line 350 "prog_io_mutable.m"
              base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 350 "prog_io_mutable.m"
              *parse_tree__prog_io_mutable__MutAttrResult_4 = base;
#line 350 "prog_io_mutable.m"
              MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (parse_tree__prog_io_mutable__V_54_54));
#line 350 "prog_io_mutable.m"
            }
#line 347 "prog_io_mutable.m"
          }
#line 345 "prog_io_mutable.m"
      }
#line 337 "prog_io_mutable.m"
  }
#line 312 "prog_io_mutable.m"
}

#line 288 "prog_io_mutable.m"
static void MR_CALL 
parse_tree__prog_io_mutable__process_mutable_attribute_3_p_0(
#line 288 "prog_io_mutable.m"
  MR_Word parse_tree__prog_io_mutable__HeadVar__1_1,
#line 288 "prog_io_mutable.m"
  MR_Word parse_tree__prog_io_mutable__STATE_VARIABLE_Attributes_0_2,
#line 288 "prog_io_mutable.m"
  MR_Word * parse_tree__prog_io_mutable__STATE_VARIABLE_Attributes_3)
#line 288 "prog_io_mutable.m"
{
#line 291 "prog_io_mutable.m"
  {
#line 291 "prog_io_mutable.m"
    MR_bool parse_tree__prog_io_mutable__succeeded;

#line 291 "prog_io_mutable.m"
#line 291 "prog_io_mutable.m"
    switch (MR_tag((MR_Word) parse_tree__prog_io_mutable__HeadVar__1_1)) {
#line 291 "prog_io_mutable.m"
      default: /*NOTREACHED*/ MR_assert(0);
#line 291 "prog_io_mutable.m"
      case (MR_Integer) 0:
#line 294 "prog_io_mutable.m"
        {
#line 294 "prog_io_mutable.m"
          MR_Word parse_tree__prog_io_mutable__ForeignName_9 = (MR_Word) MR_body(((MR_Word) parse_tree__prog_io_mutable__HeadVar__1_1), (MR_Integer) 0);

#line 295 "prog_io_mutable.m"
          {
#line 295 "prog_io_mutable.m"
            parse_tree__prog_item__set_mutable_add_foreign_name_3_p_0(parse_tree__prog_io_mutable__ForeignName_9, parse_tree__prog_io_mutable__STATE_VARIABLE_Attributes_0_2, parse_tree__prog_io_mutable__STATE_VARIABLE_Attributes_3);
#line 295 "prog_io_mutable.m"
            return;
          }
#line 294 "prog_io_mutable.m"
        }
#line 291 "prog_io_mutable.m"
        break;
#line 291 "prog_io_mutable.m"
      case (MR_Integer) 1:
#line 291 "prog_io_mutable.m"
        {
#line 291 "prog_io_mutable.m"
          MR_Word parse_tree__prog_io_mutable__Trailed_4 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_mutable__HeadVar__1_1, (MR_Integer) 0)));

#line 292 "prog_io_mutable.m"
          {
#line 292 "prog_io_mutable.m"
            parse_tree__prog_item__set_mutable_var_trailed_3_p_0(parse_tree__prog_io_mutable__Trailed_4, parse_tree__prog_io_mutable__STATE_VARIABLE_Attributes_0_2, parse_tree__prog_io_mutable__STATE_VARIABLE_Attributes_3);
#line 292 "prog_io_mutable.m"
            return;
          }
#line 291 "prog_io_mutable.m"
        }
#line 291 "prog_io_mutable.m"
        break;
#line 291 "prog_io_mutable.m"
      case (MR_Integer) 2:
#line 297 "prog_io_mutable.m"
        {
#line 297 "prog_io_mutable.m"
          MR_Word parse_tree__prog_io_mutable__AttachToIOState_14 = ((MR_Word) (MR_hl_field(MR_mktag(2), parse_tree__prog_io_mutable__HeadVar__1_1, (MR_Integer) 0)));

#line 298 "prog_io_mutable.m"
          {
#line 298 "prog_io_mutable.m"
            parse_tree__prog_item__set_mutable_var_attach_to_io_state_3_p_0(parse_tree__prog_io_mutable__AttachToIOState_14, parse_tree__prog_io_mutable__STATE_VARIABLE_Attributes_0_2, parse_tree__prog_io_mutable__STATE_VARIABLE_Attributes_3);
#line 298 "prog_io_mutable.m"
            return;
          }
#line 297 "prog_io_mutable.m"
        }
#line 291 "prog_io_mutable.m"
        break;
#line 291 "prog_io_mutable.m"
      case (MR_Integer) 3:
#line 291 "prog_io_mutable.m"
#line 291 "prog_io_mutable.m"
        switch (((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__prog_io_mutable__HeadVar__1_1, (MR_Integer) 0)))) {
#line 291 "prog_io_mutable.m"
          default: /*NOTREACHED*/ MR_assert(0);
#line 291 "prog_io_mutable.m"
          case (MR_Integer) 0:
#line 299 "prog_io_mutable.m"
            {
#line 299 "prog_io_mutable.m"
              MR_Word parse_tree__prog_io_mutable__Constant_19 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__prog_io_mutable__HeadVar__1_1, (MR_Integer) 1)));
#line 299 "prog_io_mutable.m"
              MR_Word parse_tree__prog_io_mutable__STATE_VARIABLE_Attributes_23_23;

#line 300 "prog_io_mutable.m"
              {
#line 300 "prog_io_mutable.m"
                parse_tree__prog_item__set_mutable_var_constant_3_p_0(parse_tree__prog_io_mutable__Constant_19, parse_tree__prog_io_mutable__STATE_VARIABLE_Attributes_0_2, &parse_tree__prog_io_mutable__STATE_VARIABLE_Attributes_23_23);
              }
#line 306 "prog_io_mutable.m"
#line 306 "prog_io_mutable.m"
              switch (parse_tree__prog_io_mutable__Constant_19) {
#line 306 "prog_io_mutable.m"
                default: /*NOTREACHED*/ MR_assert(0);
#line 306 "prog_io_mutable.m"
                case (MR_Integer) 1:
#line 302 "prog_io_mutable.m"
                  {
#line 302 "prog_io_mutable.m"
                    MR_Word parse_tree__prog_io_mutable__STATE_VARIABLE_Attributes_25_25;

#line 303 "prog_io_mutable.m"
                    {
#line 303 "prog_io_mutable.m"
                      parse_tree__prog_item__set_mutable_var_trailed_3_p_0((MR_Integer) 0, parse_tree__prog_io_mutable__STATE_VARIABLE_Attributes_23_23, &parse_tree__prog_io_mutable__STATE_VARIABLE_Attributes_25_25);
                    }
#line 304 "prog_io_mutable.m"
                    {
#line 304 "prog_io_mutable.m"
                      parse_tree__prog_item__set_mutable_var_attach_to_io_state_3_p_0((MR_Integer) 0, parse_tree__prog_io_mutable__STATE_VARIABLE_Attributes_25_25, parse_tree__prog_io_mutable__STATE_VARIABLE_Attributes_3);
#line 304 "prog_io_mutable.m"
                      return;
                    }
#line 302 "prog_io_mutable.m"
                  }
#line 306 "prog_io_mutable.m"
                  break;
#line 306 "prog_io_mutable.m"
                case (MR_Integer) 0:
#line 307 "prog_io_mutable.m"
                  *parse_tree__prog_io_mutable__STATE_VARIABLE_Attributes_3 = parse_tree__prog_io_mutable__STATE_VARIABLE_Attributes_23_23;
#line 306 "prog_io_mutable.m"
                  break;
#line 306 "prog_io_mutable.m"
              }
#line 299 "prog_io_mutable.m"
            }
#line 291 "prog_io_mutable.m"
            break;
#line 291 "prog_io_mutable.m"
          case (MR_Integer) 1:
#line 309 "prog_io_mutable.m"
            {
#line 309 "prog_io_mutable.m"
              MR_Word parse_tree__prog_io_mutable__ThrLocal_28 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__prog_io_mutable__HeadVar__1_1, (MR_Integer) 1)));

#line 310 "prog_io_mutable.m"
              {
#line 310 "prog_io_mutable.m"
                parse_tree__prog_item__set_mutable_var_thread_local_3_p_0(parse_tree__prog_io_mutable__ThrLocal_28, parse_tree__prog_io_mutable__STATE_VARIABLE_Attributes_0_2, parse_tree__prog_io_mutable__STATE_VARIABLE_Attributes_3);
#line 310 "prog_io_mutable.m"
                return;
              }
#line 309 "prog_io_mutable.m"
            }
#line 291 "prog_io_mutable.m"
            break;
#line 291 "prog_io_mutable.m"
        }
#line 291 "prog_io_mutable.m"
        break;
#line 291 "prog_io_mutable.m"
    }
#line 291 "prog_io_mutable.m"
  }
#line 288 "prog_io_mutable.m"
}

#line 273 "prog_io_mutable.m"
static void MR_CALL 
parse_tree__prog_io_mutable__parse_mutable_attrs_3_p_0_6(
#line 273 "prog_io_mutable.m"
  MR_Box parse_tree__prog_io_mutable__closure_arg,
#line 273 "prog_io_mutable.m"
  MR_Box parse_tree__prog_io_mutable__wrapper_arg_1,
#line 273 "prog_io_mutable.m"
  MR_Box parse_tree__prog_io_mutable__wrapper_arg_2,
#line 273 "prog_io_mutable.m"
  MR_Box * parse_tree__prog_io_mutable__wrapper_arg_3)
#line 273 "prog_io_mutable.m"
{
#line 273 "prog_io_mutable.m"
  {
#line 273 "prog_io_mutable.m"
    MR_Box parse_tree__prog_io_mutable__closure = parse_tree__prog_io_mutable__closure_arg;
#line 273 "prog_io_mutable.m"
    MR_Word parse_tree__prog_io_mutable__conv2_STATE_VARIABLE_Attributes_3;

#line 273 "prog_io_mutable.m"
    {
#line 273 "prog_io_mutable.m"
      parse_tree__prog_io_mutable__process_mutable_attribute_3_p_0(((MR_Word) parse_tree__prog_io_mutable__wrapper_arg_1), ((MR_Word) parse_tree__prog_io_mutable__wrapper_arg_2), &parse_tree__prog_io_mutable__conv2_STATE_VARIABLE_Attributes_3);
    }
#line 273 "prog_io_mutable.m"
    *parse_tree__prog_io_mutable__wrapper_arg_3 = ((MR_Box) (parse_tree__prog_io_mutable__conv2_STATE_VARIABLE_Attributes_3));
#line 273 "prog_io_mutable.m"
  }
#line 273 "prog_io_mutable.m"
}

#line 250 "prog_io_mutable.m"
static void MR_CALL 
parse_tree__prog_io_mutable__parse_mutable_attrs_3_p_0_1(
#line 250 "prog_io_mutable.m"
  MR_Box parse_tree__prog_io_mutable__closure_arg,
#line 250 "prog_io_mutable.m"
  MR_Box parse_tree__prog_io_mutable__wrapper_arg_1,
#line 250 "prog_io_mutable.m"
  MR_Box * parse_tree__prog_io_mutable__wrapper_arg_2)
#line 250 "prog_io_mutable.m"
{
#line 250 "prog_io_mutable.m"
  {
#line 250 "prog_io_mutable.m"
    MR_Box parse_tree__prog_io_mutable__closure = parse_tree__prog_io_mutable__closure_arg;
#line 250 "prog_io_mutable.m"
    MR_Word parse_tree__prog_io_mutable__conv0_MutAttrResult_4;

#line 250 "prog_io_mutable.m"
    {
#line 250 "prog_io_mutable.m"
      parse_tree__prog_io_mutable__parse_mutable_attr_2_p_0(((MR_Word) parse_tree__prog_io_mutable__wrapper_arg_1), &parse_tree__prog_io_mutable__conv0_MutAttrResult_4);
    }
#line 250 "prog_io_mutable.m"
    *parse_tree__prog_io_mutable__wrapper_arg_2 = ((MR_Box) (parse_tree__prog_io_mutable__conv0_MutAttrResult_4));
#line 250 "prog_io_mutable.m"
  }
#line 250 "prog_io_mutable.m"
}

#line 258 "prog_io_mutable.m"
static void MR_CALL 
parse_tree__prog_io_mutable__parse_mutable_attrs_3_p_0_2(
#line 258 "prog_io_mutable.m"
  void * parse_tree__prog_io_mutable__env_ptr_arg)
#line 258 "prog_io_mutable.m"
{
#line 258 "prog_io_mutable.m"
  {
#line 258 "prog_io_mutable.m"
    struct parse_tree__prog_io_mutable__parse_mutable_attrs_3_p_0_env_0_s * parse_tree__prog_io_mutable__env_ptr = (struct parse_tree__prog_io_mutable__parse_mutable_attrs_3_p_0_env_0_s *) parse_tree__prog_io_mutable__env_ptr_arg;

#line 258 "prog_io_mutable.m"
    MR_builtin_longjmp((parse_tree__prog_io_mutable__env_ptr)->parse_tree__prog_io_mutable__parse_mutable_attrs_3_p_0_env_0__commit_0, 1);
#line 258 "prog_io_mutable.m"
  }
#line 258 "prog_io_mutable.m"
}

#line 258 "prog_io_mutable.m"
static void MR_CALL 
parse_tree__prog_io_mutable__parse_mutable_attrs_3_p_0_4(
#line 258 "prog_io_mutable.m"
  void * parse_tree__prog_io_mutable__env_ptr_arg)
#line 258 "prog_io_mutable.m"
{
#line 258 "prog_io_mutable.m"
  {
#line 258 "prog_io_mutable.m"
    struct parse_tree__prog_io_mutable__parse_mutable_attrs_3_p_0_env_0_s * parse_tree__prog_io_mutable__env_ptr = (struct parse_tree__prog_io_mutable__parse_mutable_attrs_3_p_0_env_0_s *) parse_tree__prog_io_mutable__env_ptr_arg;

#line 258 "prog_io_mutable.m"
    (parse_tree__prog_io_mutable__env_ptr)->parse_tree__prog_io_mutable__parse_mutable_attrs_3_p_0_env_0__V_49_49 = ((MR_Word) (parse_tree__prog_io_mutable__env_ptr)->parse_tree__prog_io_mutable__parse_mutable_attrs_3_p_0_env_0__conv1_V_49_49);
#line 258 "prog_io_mutable.m"
    {
#line 258 "prog_io_mutable.m"
      parse_tree__prog_io_mutable__parse_mutable_attrs_3_p_0_3(parse_tree__prog_io_mutable__env_ptr);
#line 258 "prog_io_mutable.m"
      return;
    }
#line 258 "prog_io_mutable.m"
  }
#line 258 "prog_io_mutable.m"
}

#line 258 "prog_io_mutable.m"
static void MR_CALL 
parse_tree__prog_io_mutable__parse_mutable_attrs_3_p_0_3(
#line 258 "prog_io_mutable.m"
  void * parse_tree__prog_io_mutable__env_ptr_arg)
#line 258 "prog_io_mutable.m"
{
#line 258 "prog_io_mutable.m"
  {
#line 258 "prog_io_mutable.m"
    struct parse_tree__prog_io_mutable__parse_mutable_attrs_3_p_0_env_0_s * parse_tree__prog_io_mutable__env_ptr = (struct parse_tree__prog_io_mutable__parse_mutable_attrs_3_p_0_env_0_s *) parse_tree__prog_io_mutable__env_ptr_arg;

#line 258 "prog_io_mutable.m"
    (parse_tree__prog_io_mutable__env_ptr)->parse_tree__prog_io_mutable__parse_mutable_attrs_3_p_0_env_0__Conflict1_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), (parse_tree__prog_io_mutable__env_ptr)->parse_tree__prog_io_mutable__parse_mutable_attrs_3_p_0_env_0__V_49_49, (MR_Integer) 0)));
#line 258 "prog_io_mutable.m"
    (parse_tree__prog_io_mutable__env_ptr)->parse_tree__prog_io_mutable__parse_mutable_attrs_3_p_0_env_0__Conflict2_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), (parse_tree__prog_io_mutable__env_ptr)->parse_tree__prog_io_mutable__parse_mutable_attrs_3_p_0_env_0__V_49_49, (MR_Integer) 1)));
#line 3752 "parse_tree.prog_io_mutable.c"
    (parse_tree__prog_io_mutable__env_ptr)->parse_tree__prog_io_mutable__parse_mutable_attrs_3_p_0_env_0__TypeCtorInfo_116_116 = (MR_Word) &parse_tree__prog_io_mutable__parse_tree__prog_io_mutable__type_ctor_info_collected_mutable_attribute_0;
#line 259 "prog_io_mutable.m"
    {
#line 259 "prog_io_mutable.m"
      (parse_tree__prog_io_mutable__env_ptr)->parse_tree__prog_io_mutable__parse_mutable_attrs_3_p_0_env_0__succeeded = mercury__list__member_2_p_0((parse_tree__prog_io_mutable__env_ptr)->parse_tree__prog_io_mutable__parse_mutable_attrs_3_p_0_env_0__TypeCtorInfo_116_116, ((MR_Box) ((parse_tree__prog_io_mutable__env_ptr)->parse_tree__prog_io_mutable__parse_mutable_attrs_3_p_0_env_0__Conflict1_12)), (parse_tree__prog_io_mutable__env_ptr)->parse_tree__prog_io_mutable__parse_mutable_attrs_3_p_0_env_0__CollectedMutAttrs_11);
    }
#line 258 "prog_io_mutable.m"
    if ((parse_tree__prog_io_mutable__env_ptr)->parse_tree__prog_io_mutable__parse_mutable_attrs_3_p_0_env_0__succeeded)
#line 258 "prog_io_mutable.m"
      {
#line 260 "prog_io_mutable.m"
        {
#line 260 "prog_io_mutable.m"
          (parse_tree__prog_io_mutable__env_ptr)->parse_tree__prog_io_mutable__parse_mutable_attrs_3_p_0_env_0__succeeded = mercury__list__member_2_p_0((parse_tree__prog_io_mutable__env_ptr)->parse_tree__prog_io_mutable__parse_mutable_attrs_3_p_0_env_0__TypeCtorInfo_116_116, ((MR_Box) ((parse_tree__prog_io_mutable__env_ptr)->parse_tree__prog_io_mutable__parse_mutable_attrs_3_p_0_env_0__Conflict2_13)), (parse_tree__prog_io_mutable__env_ptr)->parse_tree__prog_io_mutable__parse_mutable_attrs_3_p_0_env_0__CollectedMutAttrs_11);
        }
#line 260 "prog_io_mutable.m"
        if ((parse_tree__prog_io_mutable__env_ptr)->parse_tree__prog_io_mutable__parse_mutable_attrs_3_p_0_env_0__succeeded)
#line 260 "prog_io_mutable.m"
          {
#line 260 "prog_io_mutable.m"
            parse_tree__prog_io_mutable__parse_mutable_attrs_3_p_0_2(parse_tree__prog_io_mutable__env_ptr);
#line 260 "prog_io_mutable.m"
            return;
          }
#line 258 "prog_io_mutable.m"
      }
#line 258 "prog_io_mutable.m"
  }
#line 258 "prog_io_mutable.m"
}

#line 258 "prog_io_mutable.m"
static void MR_CALL 
parse_tree__prog_io_mutable__parse_mutable_attrs_3_p_0_5(
#line 258 "prog_io_mutable.m"
  void * parse_tree__prog_io_mutable__env_ptr_arg)
#line 258 "prog_io_mutable.m"
{
#line 258 "prog_io_mutable.m"
  {
#line 258 "prog_io_mutable.m"
    struct parse_tree__prog_io_mutable__parse_mutable_attrs_3_p_0_env_0_s * parse_tree__prog_io_mutable__env_ptr = (struct parse_tree__prog_io_mutable__parse_mutable_attrs_3_p_0_env_0_s *) parse_tree__prog_io_mutable__env_ptr_arg;

#line 258 "prog_io_mutable.m"
    if (MR_builtin_setjmp((parse_tree__prog_io_mutable__env_ptr)->parse_tree__prog_io_mutable__parse_mutable_attrs_3_p_0_env_0__commit_0) == 0)
#line 258 "prog_io_mutable.m"
      {
#line 258 "prog_io_mutable.m"
        {
#line 258 "prog_io_mutable.m"
          {
#line 258 "prog_io_mutable.m"
            mercury__list__member_2_p_1((MR_Word) &parse_tree__prog_io_mutable_scalar_common_1[0], &(parse_tree__prog_io_mutable__env_ptr)->parse_tree__prog_io_mutable__parse_mutable_attrs_3_p_0_env_0__conv1_V_49_49, (MR_Word) MR_mkword(MR_mktag(1), &parse_tree__prog_io_mutable_scalar_common_2[22]), parse_tree__prog_io_mutable__parse_mutable_attrs_3_p_0_4, parse_tree__prog_io_mutable__env_ptr);
          }
#line 258 "prog_io_mutable.m"
        }
#line 258 "prog_io_mutable.m"
        (parse_tree__prog_io_mutable__env_ptr)->parse_tree__prog_io_mutable__parse_mutable_attrs_3_p_0_env_0__succeeded = MR_FALSE;
#line 258 "prog_io_mutable.m"
      }
#line 258 "prog_io_mutable.m"
    else
#line 258 "prog_io_mutable.m"
      (parse_tree__prog_io_mutable__env_ptr)->parse_tree__prog_io_mutable__parse_mutable_attrs_3_p_0_env_0__succeeded = MR_TRUE;
#line 258 "prog_io_mutable.m"
  }
#line 258 "prog_io_mutable.m"
}

#line 231 "prog_io_mutable.m"
static void MR_CALL 
parse_tree__prog_io_mutable__parse_mutable_attrs_3_p_0(
#line 231 "prog_io_mutable.m"
  MR_Word parse_tree__prog_io_mutable__VarSet_4,
#line 231 "prog_io_mutable.m"
  MR_Word parse_tree__prog_io_mutable__MutAttrsTerm_5,
#line 231 "prog_io_mutable.m"
  MR_Word * parse_tree__prog_io_mutable__MaybeMutAttrs_6)
#line 231 "prog_io_mutable.m"
{
#line 231 "prog_io_mutable.m"
  {
#line 231 "prog_io_mutable.m"
    struct parse_tree__prog_io_mutable__parse_mutable_attrs_3_p_0_env_0_s parse_tree__prog_io_mutable__env;

#line 234 "prog_io_mutable.m"
    {
#line 234 "prog_io_mutable.m"
      MR_Word parse_tree__prog_io_mutable__Attributes0_7;
#line 249 "prog_io_mutable.m"
      MR_Word parse_tree__prog_io_mutable__TypeCtorInfo_114_114;
#line 249 "prog_io_mutable.m"
      MR_Word parse_tree__prog_io_mutable__MutAttrTerms_9;
#line 249 "prog_io_mutable.m"
      MR_Word parse_tree__prog_io_mutable__MaybeAttrList_10;
#line 249 "prog_io_mutable.m"
      MR_Word parse_tree__prog_io_mutable__V_48_48;

#line 235 "prog_io_mutable.m"
      {
#line 235 "prog_io_mutable.m"
        parse_tree__prog_io_mutable__Attributes0_7 = parse_tree__prog_item__default_mutable_attributes_0_f_0();
      }
#line 249 "prog_io_mutable.m"
      {
#line 249 "prog_io_mutable.m"
        (parse_tree__prog_io_mutable__env).parse_tree__prog_io_mutable__parse_mutable_attrs_3_p_0_env_0__succeeded = parse_tree__prog_io_util__list_term_to_term_list_2_p_0(parse_tree__prog_io_mutable__MutAttrsTerm_5, &parse_tree__prog_io_mutable__MutAttrTerms_9);
      }
#line 249 "prog_io_mutable.m"
      if ((parse_tree__prog_io_mutable__env).parse_tree__prog_io_mutable__parse_mutable_attrs_3_p_0_env_0__succeeded)
#line 249 "prog_io_mutable.m"
        {
#line 250 "prog_io_mutable.m"
          parse_tree__prog_io_mutable__V_48_48 = (MR_Word) &parse_tree__prog_io_mutable_scalar_common_1[1];
#line 3867 "parse_tree.prog_io_mutable.c"
          parse_tree__prog_io_mutable__TypeCtorInfo_114_114 = (MR_Word) &parse_tree__prog_io_mutable__parse_tree__prog_io_mutable__type_ctor_info_collected_mutable_attribute_0;
#line 250 "prog_io_mutable.m"
          {
#line 250 "prog_io_mutable.m"
            parse_tree__prog_io_util__map_parser_3_p_0(parse_tree__prog_io_mutable__TypeCtorInfo_114_114, parse_tree__prog_io_mutable__V_48_48, parse_tree__prog_io_mutable__MutAttrTerms_9, &parse_tree__prog_io_mutable__MaybeAttrList_10);
          }
#line 251 "prog_io_mutable.m"
          (parse_tree__prog_io_mutable__env).parse_tree__prog_io_mutable__parse_mutable_attrs_3_p_0_env_0__succeeded = ((MR_tag((MR_Word) parse_tree__prog_io_mutable__MaybeAttrList_10)) == (MR_mktag((MR_Integer) 1)));
#line 251 "prog_io_mutable.m"
          if ((parse_tree__prog_io_mutable__env).parse_tree__prog_io_mutable__parse_mutable_attrs_3_p_0_env_0__succeeded)
#line 251 "prog_io_mutable.m"
            (parse_tree__prog_io_mutable__env).parse_tree__prog_io_mutable__parse_mutable_attrs_3_p_0_env_0__CollectedMutAttrs_11 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_mutable__MaybeAttrList_10, (MR_Integer) 0)));
#line 249 "prog_io_mutable.m"
        }
#line 277 "prog_io_mutable.m"
      if ((parse_tree__prog_io_mutable__env).parse_tree__prog_io_mutable__parse_mutable_attrs_3_p_0_env_0__succeeded)
#line 272 "prog_io_mutable.m"
        {
#line 258 "prog_io_mutable.m"
          {
#line 258 "prog_io_mutable.m"
            parse_tree__prog_io_mutable__parse_mutable_attrs_3_p_0_5(&parse_tree__prog_io_mutable__env);
          }
#line 272 "prog_io_mutable.m"
          if ((parse_tree__prog_io_mutable__env).parse_tree__prog_io_mutable__parse_mutable_attrs_3_p_0_env_0__succeeded)
#line 264 "prog_io_mutable.m"
            {
#line 264 "prog_io_mutable.m"
              MR_Word parse_tree__prog_io_mutable__TypeCtorInfo_117_117 = (MR_Word) &mercury__term__term__type_ctor_info_generic_0;
#line 264 "prog_io_mutable.m"
              MR_String parse_tree__prog_io_mutable__MutAttrsStr_14;
#line 264 "prog_io_mutable.m"
              MR_Word parse_tree__prog_io_mutable__Pieces_15;
#line 264 "prog_io_mutable.m"
              MR_Word parse_tree__prog_io_mutable__Spec_16;
#line 264 "prog_io_mutable.m"
              MR_Word parse_tree__prog_io_mutable__V_53_53;
#line 264 "prog_io_mutable.m"
              MR_Word parse_tree__prog_io_mutable__V_56_56;
#line 264 "prog_io_mutable.m"
              MR_Word parse_tree__prog_io_mutable__V_58_58;
#line 264 "prog_io_mutable.m"
              MR_Word parse_tree__prog_io_mutable__V_59_59;
#line 264 "prog_io_mutable.m"
              MR_Word parse_tree__prog_io_mutable__V_68_68;
#line 264 "prog_io_mutable.m"
              MR_Word parse_tree__prog_io_mutable__V_69_69;
#line 264 "prog_io_mutable.m"
              MR_Word parse_tree__prog_io_mutable__V_70_70;
#line 264 "prog_io_mutable.m"
              MR_Word parse_tree__prog_io_mutable__V_71_71;
#line 264 "prog_io_mutable.m"
              MR_Word parse_tree__prog_io_mutable__V_72_72;
#line 264 "prog_io_mutable.m"
              MR_Word parse_tree__prog_io_mutable__V_75_75;

#line 263 "prog_io_mutable.m"
              {
#line 263 "prog_io_mutable.m"
                parse_tree__prog_io_mutable__MutAttrsStr_14 = parse_tree__parse_tree_out_term__mercury_term_to_string_3_f_0(parse_tree__prog_io_mutable__TypeCtorInfo_117_117, parse_tree__prog_io_mutable__VarSet_4, (MR_Integer) 0, parse_tree__prog_io_mutable__MutAttrsTerm_5);
              }
#line 267 "prog_io_mutable.m"
              {
#line 267 "prog_io_mutable.m"
                parse_tree__prog_io_mutable__V_59_59 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 267 "prog_io_mutable.m"
                MR_hl_field(MR_mktag(3), parse_tree__prog_io_mutable__V_59_59, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 5));
#line 267 "prog_io_mutable.m"
                MR_hl_field(MR_mktag(3), parse_tree__prog_io_mutable__V_59_59, 1) = ((MR_Box) (parse_tree__prog_io_mutable__MutAttrsStr_14));
#line 267 "prog_io_mutable.m"
              }
#line 267 "prog_io_mutable.m"
              {
#line 267 "prog_io_mutable.m"
                parse_tree__prog_io_mutable__V_58_58 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 267 "prog_io_mutable.m"
                MR_hl_field(MR_mktag(1), parse_tree__prog_io_mutable__V_58_58, 0) = ((MR_Box) (parse_tree__prog_io_mutable__V_59_59));
#line 267 "prog_io_mutable.m"
                MR_hl_field(MR_mktag(1), parse_tree__prog_io_mutable__V_58_58, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__prog_io_mutable_scalar_common_2[2])));
#line 267 "prog_io_mutable.m"
              }
#line 266 "prog_io_mutable.m"
              {
#line 266 "prog_io_mutable.m"
                parse_tree__prog_io_mutable__V_56_56 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 266 "prog_io_mutable.m"
                MR_hl_field(MR_mktag(1), parse_tree__prog_io_mutable__V_56_56, 0) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 1))));
#line 266 "prog_io_mutable.m"
                MR_hl_field(MR_mktag(1), parse_tree__prog_io_mutable__V_56_56, 1) = ((MR_Box) (parse_tree__prog_io_mutable__V_58_58));
#line 266 "prog_io_mutable.m"
              }
#line 266 "prog_io_mutable.m"
              {
#line 266 "prog_io_mutable.m"
                parse_tree__prog_io_mutable__V_53_53 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 266 "prog_io_mutable.m"
                MR_hl_field(MR_mktag(1), parse_tree__prog_io_mutable__V_53_53, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__prog_io_mutable_scalar_common_2[33])));
#line 266 "prog_io_mutable.m"
                MR_hl_field(MR_mktag(1), parse_tree__prog_io_mutable__V_53_53, 1) = ((MR_Box) (parse_tree__prog_io_mutable__V_56_56));
#line 266 "prog_io_mutable.m"
              }
#line 265 "prog_io_mutable.m"
              {
#line 265 "prog_io_mutable.m"
                parse_tree__prog_io_mutable__Pieces_15 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 265 "prog_io_mutable.m"
                MR_hl_field(MR_mktag(1), parse_tree__prog_io_mutable__Pieces_15, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__prog_io_mutable_scalar_common_2[32])));
#line 265 "prog_io_mutable.m"
                MR_hl_field(MR_mktag(1), parse_tree__prog_io_mutable__Pieces_15, 1) = ((MR_Box) (parse_tree__prog_io_mutable__V_53_53));
#line 265 "prog_io_mutable.m"
              }
#line 269 "prog_io_mutable.m"
              {
#line 269 "prog_io_mutable.m"
                parse_tree__prog_io_mutable__V_70_70 = mercury__term__get_term_context_1_f_0(parse_tree__prog_io_mutable__TypeCtorInfo_117_117, parse_tree__prog_io_mutable__MutAttrsTerm_5);
              }
#line 270 "prog_io_mutable.m"
              {
#line 270 "prog_io_mutable.m"
                parse_tree__prog_io_mutable__V_72_72 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 270 "prog_io_mutable.m"
                MR_hl_field(MR_mktag(0), parse_tree__prog_io_mutable__V_72_72, 0) = ((MR_Box) (parse_tree__prog_io_mutable__Pieces_15));
#line 270 "prog_io_mutable.m"
              }
#line 270 "prog_io_mutable.m"
              {
#line 270 "prog_io_mutable.m"
                parse_tree__prog_io_mutable__V_71_71 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 270 "prog_io_mutable.m"
                MR_hl_field(MR_mktag(1), parse_tree__prog_io_mutable__V_71_71, 0) = ((MR_Box) (parse_tree__prog_io_mutable__V_72_72));
#line 270 "prog_io_mutable.m"
                MR_hl_field(MR_mktag(1), parse_tree__prog_io_mutable__V_71_71, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 270 "prog_io_mutable.m"
              }
#line 269 "prog_io_mutable.m"
              {
#line 269 "prog_io_mutable.m"
                parse_tree__prog_io_mutable__V_69_69 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 269 "prog_io_mutable.m"
                MR_hl_field(MR_mktag(0), parse_tree__prog_io_mutable__V_69_69, 0) = ((MR_Box) (parse_tree__prog_io_mutable__V_70_70));
#line 269 "prog_io_mutable.m"
                MR_hl_field(MR_mktag(0), parse_tree__prog_io_mutable__V_69_69, 1) = ((MR_Box) (parse_tree__prog_io_mutable__V_71_71));
#line 269 "prog_io_mutable.m"
              }
#line 270 "prog_io_mutable.m"
              {
#line 270 "prog_io_mutable.m"
                parse_tree__prog_io_mutable__V_68_68 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 270 "prog_io_mutable.m"
                MR_hl_field(MR_mktag(1), parse_tree__prog_io_mutable__V_68_68, 0) = ((MR_Box) (parse_tree__prog_io_mutable__V_69_69));
#line 270 "prog_io_mutable.m"
                MR_hl_field(MR_mktag(1), parse_tree__prog_io_mutable__V_68_68, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 270 "prog_io_mutable.m"
              }
#line 268 "prog_io_mutable.m"
              {
#line 268 "prog_io_mutable.m"
                parse_tree__prog_io_mutable__Spec_16 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 268 "prog_io_mutable.m"
                MR_hl_field(MR_mktag(0), parse_tree__prog_io_mutable__Spec_16, 0) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 268 "prog_io_mutable.m"
                MR_hl_field(MR_mktag(0), parse_tree__prog_io_mutable__Spec_16, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 2))));
#line 268 "prog_io_mutable.m"
                MR_hl_field(MR_mktag(0), parse_tree__prog_io_mutable__Spec_16, 2) = ((MR_Box) (parse_tree__prog_io_mutable__V_68_68));
#line 268 "prog_io_mutable.m"
              }
#line 271 "prog_io_mutable.m"
              {
#line 271 "prog_io_mutable.m"
                parse_tree__prog_io_mutable__V_75_75 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 271 "prog_io_mutable.m"
                MR_hl_field(MR_mktag(1), parse_tree__prog_io_mutable__V_75_75, 0) = ((MR_Box) (parse_tree__prog_io_mutable__Spec_16));
#line 271 "prog_io_mutable.m"
                MR_hl_field(MR_mktag(1), parse_tree__prog_io_mutable__V_75_75, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 271 "prog_io_mutable.m"
              }
#line 271 "prog_io_mutable.m"
              {
#line 271 "prog_io_mutable.m"
                MR_Word base;
#line 271 "prog_io_mutable.m"
                base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 271 "prog_io_mutable.m"
                *parse_tree__prog_io_mutable__MaybeMutAttrs_6 = base;
#line 271 "prog_io_mutable.m"
                MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (parse_tree__prog_io_mutable__V_75_75));
#line 271 "prog_io_mutable.m"
              }
#line 264 "prog_io_mutable.m"
            }
#line 272 "prog_io_mutable.m"
          else
#line 274 "prog_io_mutable.m"
            {
#line 274 "prog_io_mutable.m"
              MR_Word parse_tree__prog_io_mutable__Attributes_17;
#line 273 "prog_io_mutable.m"
              MR_Box parse_tree__prog_io_mutable__conv3_Attributes_17;

#line 273 "prog_io_mutable.m"
              {
#line 273 "prog_io_mutable.m"
                mercury__list__foldl_4_p_0((MR_Word) &parse_tree__prog_io_mutable__parse_tree__prog_io_mutable__type_ctor_info_collected_mutable_attribute_0, (MR_Word) &parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_mutable_var_attributes_0, (MR_Word) &parse_tree__prog_io_mutable_scalar_common_1[2], (parse_tree__prog_io_mutable__env).parse_tree__prog_io_mutable__parse_mutable_attrs_3_p_0_env_0__CollectedMutAttrs_11, ((MR_Box) (parse_tree__prog_io_mutable__Attributes0_7)), &parse_tree__prog_io_mutable__conv3_Attributes_17);
              }
#line 273 "prog_io_mutable.m"
              parse_tree__prog_io_mutable__Attributes_17 = ((MR_Word) parse_tree__prog_io_mutable__conv3_Attributes_17);
#line 275 "prog_io_mutable.m"
              {
#line 275 "prog_io_mutable.m"
                MR_Word base;
#line 275 "prog_io_mutable.m"
                base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 275 "prog_io_mutable.m"
                *parse_tree__prog_io_mutable__MaybeMutAttrs_6 = base;
#line 275 "prog_io_mutable.m"
                MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (parse_tree__prog_io_mutable__Attributes_17));
#line 275 "prog_io_mutable.m"
              }
#line 274 "prog_io_mutable.m"
            }
#line 272 "prog_io_mutable.m"
        }
#line 277 "prog_io_mutable.m"
      else
#line 279 "prog_io_mutable.m"
        {
#line 279 "prog_io_mutable.m"
          MR_Word parse_tree__prog_io_mutable__TypeCtorInfo_123_123 = (MR_Word) &mercury__term__term__type_ctor_info_generic_0;
#line 279 "prog_io_mutable.m"
          MR_Word parse_tree__prog_io_mutable__V_81_81;
#line 279 "prog_io_mutable.m"
          MR_Word parse_tree__prog_io_mutable__V_84_84;
#line 279 "prog_io_mutable.m"
          MR_Word parse_tree__prog_io_mutable__V_87_87;
#line 279 "prog_io_mutable.m"
          MR_Word parse_tree__prog_io_mutable__V_90_90;
#line 279 "prog_io_mutable.m"
          MR_Word parse_tree__prog_io_mutable__V_91_91;
#line 279 "prog_io_mutable.m"
          MR_Word parse_tree__prog_io_mutable__V_100_100;
#line 279 "prog_io_mutable.m"
          MR_Word parse_tree__prog_io_mutable__V_101_101;
#line 279 "prog_io_mutable.m"
          MR_Word parse_tree__prog_io_mutable__V_102_102;
#line 279 "prog_io_mutable.m"
          MR_Word parse_tree__prog_io_mutable__V_103_103;
#line 279 "prog_io_mutable.m"
          MR_Word parse_tree__prog_io_mutable__V_104_104;
#line 279 "prog_io_mutable.m"
          MR_Word parse_tree__prog_io_mutable__V_107_107;
#line 279 "prog_io_mutable.m"
          MR_String parse_tree__prog_io_mutable__MutAttrsStr_109;
#line 279 "prog_io_mutable.m"
          MR_Word parse_tree__prog_io_mutable__Pieces_110;
#line 279 "prog_io_mutable.m"
          MR_Word parse_tree__prog_io_mutable__Spec_111;

#line 278 "prog_io_mutable.m"
          {
#line 278 "prog_io_mutable.m"
            parse_tree__prog_io_mutable__MutAttrsStr_109 = parse_tree__parse_tree_out_term__mercury_term_to_string_3_f_0(parse_tree__prog_io_mutable__TypeCtorInfo_123_123, parse_tree__prog_io_mutable__VarSet_4, (MR_Integer) 0, parse_tree__prog_io_mutable__MutAttrsTerm_5);
          }
#line 282 "prog_io_mutable.m"
          {
#line 282 "prog_io_mutable.m"
            parse_tree__prog_io_mutable__V_91_91 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 282 "prog_io_mutable.m"
            MR_hl_field(MR_mktag(3), parse_tree__prog_io_mutable__V_91_91, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 5));
#line 282 "prog_io_mutable.m"
            MR_hl_field(MR_mktag(3), parse_tree__prog_io_mutable__V_91_91, 1) = ((MR_Box) (parse_tree__prog_io_mutable__MutAttrsStr_109));
#line 282 "prog_io_mutable.m"
          }
#line 282 "prog_io_mutable.m"
          {
#line 282 "prog_io_mutable.m"
            parse_tree__prog_io_mutable__V_90_90 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 282 "prog_io_mutable.m"
            MR_hl_field(MR_mktag(1), parse_tree__prog_io_mutable__V_90_90, 0) = ((MR_Box) (parse_tree__prog_io_mutable__V_91_91));
#line 282 "prog_io_mutable.m"
            MR_hl_field(MR_mktag(1), parse_tree__prog_io_mutable__V_90_90, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__prog_io_mutable_scalar_common_2[2])));
#line 282 "prog_io_mutable.m"
          }
#line 281 "prog_io_mutable.m"
          {
#line 281 "prog_io_mutable.m"
            parse_tree__prog_io_mutable__V_87_87 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 281 "prog_io_mutable.m"
            MR_hl_field(MR_mktag(1), parse_tree__prog_io_mutable__V_87_87, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__prog_io_mutable_scalar_common_2[36])));
#line 281 "prog_io_mutable.m"
            MR_hl_field(MR_mktag(1), parse_tree__prog_io_mutable__V_87_87, 1) = ((MR_Box) (parse_tree__prog_io_mutable__V_90_90));
#line 281 "prog_io_mutable.m"
          }
#line 281 "prog_io_mutable.m"
          {
#line 281 "prog_io_mutable.m"
            parse_tree__prog_io_mutable__V_84_84 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 281 "prog_io_mutable.m"
            MR_hl_field(MR_mktag(1), parse_tree__prog_io_mutable__V_84_84, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__prog_io_mutable_scalar_common_2[28])));
#line 281 "prog_io_mutable.m"
            MR_hl_field(MR_mktag(1), parse_tree__prog_io_mutable__V_84_84, 1) = ((MR_Box) (parse_tree__prog_io_mutable__V_87_87));
#line 281 "prog_io_mutable.m"
          }
#line 281 "prog_io_mutable.m"
          {
#line 281 "prog_io_mutable.m"
            parse_tree__prog_io_mutable__V_81_81 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 281 "prog_io_mutable.m"
            MR_hl_field(MR_mktag(1), parse_tree__prog_io_mutable__V_81_81, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__prog_io_mutable_scalar_common_2[35])));
#line 281 "prog_io_mutable.m"
            MR_hl_field(MR_mktag(1), parse_tree__prog_io_mutable__V_81_81, 1) = ((MR_Box) (parse_tree__prog_io_mutable__V_84_84));
#line 281 "prog_io_mutable.m"
          }
#line 280 "prog_io_mutable.m"
          {
#line 280 "prog_io_mutable.m"
            parse_tree__prog_io_mutable__Pieces_110 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 280 "prog_io_mutable.m"
            MR_hl_field(MR_mktag(1), parse_tree__prog_io_mutable__Pieces_110, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__prog_io_mutable_scalar_common_2[34])));
#line 280 "prog_io_mutable.m"
            MR_hl_field(MR_mktag(1), parse_tree__prog_io_mutable__Pieces_110, 1) = ((MR_Box) (parse_tree__prog_io_mutable__V_81_81));
#line 280 "prog_io_mutable.m"
          }
#line 284 "prog_io_mutable.m"
          {
#line 284 "prog_io_mutable.m"
            parse_tree__prog_io_mutable__V_102_102 = mercury__term__get_term_context_1_f_0(parse_tree__prog_io_mutable__TypeCtorInfo_123_123, parse_tree__prog_io_mutable__MutAttrsTerm_5);
          }
#line 284 "prog_io_mutable.m"
          {
#line 284 "prog_io_mutable.m"
            parse_tree__prog_io_mutable__V_104_104 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 284 "prog_io_mutable.m"
            MR_hl_field(MR_mktag(0), parse_tree__prog_io_mutable__V_104_104, 0) = ((MR_Box) (parse_tree__prog_io_mutable__Pieces_110));
#line 284 "prog_io_mutable.m"
          }
#line 284 "prog_io_mutable.m"
          {
#line 284 "prog_io_mutable.m"
            parse_tree__prog_io_mutable__V_103_103 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 284 "prog_io_mutable.m"
            MR_hl_field(MR_mktag(1), parse_tree__prog_io_mutable__V_103_103, 0) = ((MR_Box) (parse_tree__prog_io_mutable__V_104_104));
#line 284 "prog_io_mutable.m"
            MR_hl_field(MR_mktag(1), parse_tree__prog_io_mutable__V_103_103, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 284 "prog_io_mutable.m"
          }
#line 284 "prog_io_mutable.m"
          {
#line 284 "prog_io_mutable.m"
            parse_tree__prog_io_mutable__V_101_101 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 284 "prog_io_mutable.m"
            MR_hl_field(MR_mktag(0), parse_tree__prog_io_mutable__V_101_101, 0) = ((MR_Box) (parse_tree__prog_io_mutable__V_102_102));
#line 284 "prog_io_mutable.m"
            MR_hl_field(MR_mktag(0), parse_tree__prog_io_mutable__V_101_101, 1) = ((MR_Box) (parse_tree__prog_io_mutable__V_103_103));
#line 284 "prog_io_mutable.m"
          }
#line 284 "prog_io_mutable.m"
          {
#line 284 "prog_io_mutable.m"
            parse_tree__prog_io_mutable__V_100_100 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 284 "prog_io_mutable.m"
            MR_hl_field(MR_mktag(1), parse_tree__prog_io_mutable__V_100_100, 0) = ((MR_Box) (parse_tree__prog_io_mutable__V_101_101));
#line 284 "prog_io_mutable.m"
            MR_hl_field(MR_mktag(1), parse_tree__prog_io_mutable__V_100_100, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 284 "prog_io_mutable.m"
          }
#line 283 "prog_io_mutable.m"
          {
#line 283 "prog_io_mutable.m"
            parse_tree__prog_io_mutable__Spec_111 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 283 "prog_io_mutable.m"
            MR_hl_field(MR_mktag(0), parse_tree__prog_io_mutable__Spec_111, 0) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 283 "prog_io_mutable.m"
            MR_hl_field(MR_mktag(0), parse_tree__prog_io_mutable__Spec_111, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 2))));
#line 283 "prog_io_mutable.m"
            MR_hl_field(MR_mktag(0), parse_tree__prog_io_mutable__Spec_111, 2) = ((MR_Box) (parse_tree__prog_io_mutable__V_100_100));
#line 283 "prog_io_mutable.m"
          }
#line 285 "prog_io_mutable.m"
          {
#line 285 "prog_io_mutable.m"
            parse_tree__prog_io_mutable__V_107_107 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 285 "prog_io_mutable.m"
            MR_hl_field(MR_mktag(1), parse_tree__prog_io_mutable__V_107_107, 0) = ((MR_Box) (parse_tree__prog_io_mutable__Spec_111));
#line 285 "prog_io_mutable.m"
            MR_hl_field(MR_mktag(1), parse_tree__prog_io_mutable__V_107_107, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 285 "prog_io_mutable.m"
          }
#line 285 "prog_io_mutable.m"
          {
#line 285 "prog_io_mutable.m"
            MR_Word base;
#line 285 "prog_io_mutable.m"
            base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 285 "prog_io_mutable.m"
            *parse_tree__prog_io_mutable__MaybeMutAttrs_6 = base;
#line 285 "prog_io_mutable.m"
            MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (parse_tree__prog_io_mutable__V_107_107));
#line 285 "prog_io_mutable.m"
          }
#line 279 "prog_io_mutable.m"
        }
#line 234 "prog_io_mutable.m"
    }
#line 231 "prog_io_mutable.m"
  }
#line 231 "prog_io_mutable.m"
}

#line 206 "prog_io_mutable.m"
static void MR_CALL 
parse_tree__prog_io_mutable__parse_mutable_inst_3_p_0_1(
#line 206 "prog_io_mutable.m"
  void * parse_tree__prog_io_mutable__env_ptr_arg)
#line 206 "prog_io_mutable.m"
{
#line 206 "prog_io_mutable.m"
  {
#line 206 "prog_io_mutable.m"
    struct parse_tree__prog_io_mutable__parse_mutable_inst_3_p_0_env_0_s * parse_tree__prog_io_mutable__env_ptr = (struct parse_tree__prog_io_mutable__parse_mutable_inst_3_p_0_env_0_s *) parse_tree__prog_io_mutable__env_ptr_arg;

#line 206 "prog_io_mutable.m"
    MR_builtin_longjmp((parse_tree__prog_io_mutable__env_ptr)->parse_tree__prog_io_mutable__parse_mutable_inst_3_p_0_env_0__commit_0, 1);
#line 206 "prog_io_mutable.m"
  }
#line 206 "prog_io_mutable.m"
}

#line 206 "prog_io_mutable.m"
static void MR_CALL 
parse_tree__prog_io_mutable__parse_mutable_inst_3_p_0_2(
#line 206 "prog_io_mutable.m"
  void * parse_tree__prog_io_mutable__env_ptr_arg)
#line 206 "prog_io_mutable.m"
{
#line 206 "prog_io_mutable.m"
  {
#line 206 "prog_io_mutable.m"
    struct parse_tree__prog_io_mutable__parse_mutable_inst_3_p_0_env_0_s * parse_tree__prog_io_mutable__env_ptr = (struct parse_tree__prog_io_mutable__parse_mutable_inst_3_p_0_env_0_s *) parse_tree__prog_io_mutable__env_ptr_arg;

#line 206 "prog_io_mutable.m"
    if (MR_builtin_setjmp((parse_tree__prog_io_mutable__env_ptr)->parse_tree__prog_io_mutable__parse_mutable_inst_3_p_0_env_0__commit_0) == 0)
#line 206 "prog_io_mutable.m"
      {
#line 206 "prog_io_mutable.m"
        {
#line 206 "prog_io_mutable.m"
          MR_Word parse_tree__prog_io_mutable__V_7_7;

#line 206 "prog_io_mutable.m"
          {
#line 206 "prog_io_mutable.m"
            mercury__term__contains_var_2_p_1((MR_Word) &mercury__term__term__type_ctor_info_generic_0, (parse_tree__prog_io_mutable__env_ptr)->parse_tree__prog_io_mutable__parse_mutable_inst_3_p_0_env_0__InstTerm_5, &parse_tree__prog_io_mutable__V_7_7, parse_tree__prog_io_mutable__parse_mutable_inst_3_p_0_1, parse_tree__prog_io_mutable__env_ptr);
          }
#line 206 "prog_io_mutable.m"
        }
#line 206 "prog_io_mutable.m"
        (parse_tree__prog_io_mutable__env_ptr)->parse_tree__prog_io_mutable__parse_mutable_inst_3_p_0_env_0__succeeded = MR_FALSE;
#line 206 "prog_io_mutable.m"
      }
#line 206 "prog_io_mutable.m"
    else
#line 206 "prog_io_mutable.m"
      (parse_tree__prog_io_mutable__env_ptr)->parse_tree__prog_io_mutable__parse_mutable_inst_3_p_0_env_0__succeeded = MR_TRUE;
#line 206 "prog_io_mutable.m"
  }
#line 206 "prog_io_mutable.m"
}

#line 203 "prog_io_mutable.m"
static void MR_CALL 
parse_tree__prog_io_mutable__parse_mutable_inst_3_p_0(
#line 203 "prog_io_mutable.m"
  MR_Word parse_tree__prog_io_mutable__VarSet_4,
#line 203 "prog_io_mutable.m"
  MR_Word parse_tree__prog_io_mutable__InstTerm_5,
#line 203 "prog_io_mutable.m"
  MR_Word * parse_tree__prog_io_mutable__MaybeInst_6)
#line 203 "prog_io_mutable.m"
{
#line 203 "prog_io_mutable.m"
  {
#line 203 "prog_io_mutable.m"
    struct parse_tree__prog_io_mutable__parse_mutable_inst_3_p_0_env_0_s parse_tree__prog_io_mutable__env;

#line 203 "prog_io_mutable.m"
    (parse_tree__prog_io_mutable__env).parse_tree__prog_io_mutable__parse_mutable_inst_3_p_0_env_0__InstTerm_5 = parse_tree__prog_io_mutable__InstTerm_5;
#line 206 "prog_io_mutable.m"
    {
#line 206 "prog_io_mutable.m"
      parse_tree__prog_io_mutable__parse_mutable_inst_3_p_0_2(&parse_tree__prog_io_mutable__env);
    }
#line 214 "prog_io_mutable.m"
    if ((parse_tree__prog_io_mutable__env).parse_tree__prog_io_mutable__parse_mutable_inst_3_p_0_env_0__succeeded)
#line 207 "prog_io_mutable.m"
      {
#line 207 "prog_io_mutable.m"
        MR_Word parse_tree__prog_io_mutable__TypeCtorInfo_67_67 = (MR_Word) &mercury__term__term__type_ctor_info_generic_0;
#line 207 "prog_io_mutable.m"
        MR_String parse_tree__prog_io_mutable__InstTermStr_8;
#line 207 "prog_io_mutable.m"
        MR_Word parse_tree__prog_io_mutable__Pieces_9;
#line 207 "prog_io_mutable.m"
        MR_Word parse_tree__prog_io_mutable__Spec_10;
#line 207 "prog_io_mutable.m"
        MR_Word parse_tree__prog_io_mutable__V_14_14;
#line 207 "prog_io_mutable.m"
        MR_Word parse_tree__prog_io_mutable__V_17_17;
#line 207 "prog_io_mutable.m"
        MR_Word parse_tree__prog_io_mutable__V_20_20;
#line 207 "prog_io_mutable.m"
        MR_Word parse_tree__prog_io_mutable__V_21_21;
#line 207 "prog_io_mutable.m"
        MR_Word parse_tree__prog_io_mutable__V_30_30;
#line 207 "prog_io_mutable.m"
        MR_Word parse_tree__prog_io_mutable__V_31_31;
#line 207 "prog_io_mutable.m"
        MR_Word parse_tree__prog_io_mutable__V_32_32;
#line 207 "prog_io_mutable.m"
        MR_Word parse_tree__prog_io_mutable__V_33_33;
#line 207 "prog_io_mutable.m"
        MR_Word parse_tree__prog_io_mutable__V_34_34;
#line 207 "prog_io_mutable.m"
        MR_Word parse_tree__prog_io_mutable__V_37_37;

#line 207 "prog_io_mutable.m"
        {
#line 207 "prog_io_mutable.m"
          parse_tree__prog_io_mutable__InstTermStr_8 = parse_tree__parse_tree_out_term__describe_error_term_2_f_0(parse_tree__prog_io_mutable__TypeCtorInfo_67_67, parse_tree__prog_io_mutable__VarSet_4, (parse_tree__prog_io_mutable__env).parse_tree__prog_io_mutable__parse_mutable_inst_3_p_0_env_0__InstTerm_5);
        }
#line 210 "prog_io_mutable.m"
        {
#line 210 "prog_io_mutable.m"
          parse_tree__prog_io_mutable__V_21_21 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 210 "prog_io_mutable.m"
          MR_hl_field(MR_mktag(3), parse_tree__prog_io_mutable__V_21_21, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 5));
#line 210 "prog_io_mutable.m"
          MR_hl_field(MR_mktag(3), parse_tree__prog_io_mutable__V_21_21, 1) = ((MR_Box) (parse_tree__prog_io_mutable__InstTermStr_8));
#line 210 "prog_io_mutable.m"
        }
#line 210 "prog_io_mutable.m"
        {
#line 210 "prog_io_mutable.m"
          parse_tree__prog_io_mutable__V_20_20 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 210 "prog_io_mutable.m"
          MR_hl_field(MR_mktag(1), parse_tree__prog_io_mutable__V_20_20, 0) = ((MR_Box) (parse_tree__prog_io_mutable__V_21_21));
#line 210 "prog_io_mutable.m"
          MR_hl_field(MR_mktag(1), parse_tree__prog_io_mutable__V_20_20, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__prog_io_mutable_scalar_common_2[2])));
#line 210 "prog_io_mutable.m"
        }
#line 209 "prog_io_mutable.m"
        {
#line 209 "prog_io_mutable.m"
          parse_tree__prog_io_mutable__V_17_17 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 209 "prog_io_mutable.m"
          MR_hl_field(MR_mktag(1), parse_tree__prog_io_mutable__V_17_17, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__prog_io_mutable_scalar_common_2[29])));
#line 209 "prog_io_mutable.m"
          MR_hl_field(MR_mktag(1), parse_tree__prog_io_mutable__V_17_17, 1) = ((MR_Box) (parse_tree__prog_io_mutable__V_20_20));
#line 209 "prog_io_mutable.m"
        }
#line 208 "prog_io_mutable.m"
        {
#line 208 "prog_io_mutable.m"
          parse_tree__prog_io_mutable__V_14_14 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 208 "prog_io_mutable.m"
          MR_hl_field(MR_mktag(1), parse_tree__prog_io_mutable__V_14_14, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__prog_io_mutable_scalar_common_2[28])));
#line 208 "prog_io_mutable.m"
          MR_hl_field(MR_mktag(1), parse_tree__prog_io_mutable__V_14_14, 1) = ((MR_Box) (parse_tree__prog_io_mutable__V_17_17));
#line 208 "prog_io_mutable.m"
        }
#line 208 "prog_io_mutable.m"
        {
#line 208 "prog_io_mutable.m"
          parse_tree__prog_io_mutable__Pieces_9 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 208 "prog_io_mutable.m"
          MR_hl_field(MR_mktag(1), parse_tree__prog_io_mutable__Pieces_9, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__prog_io_mutable_scalar_common_2[30])));
#line 208 "prog_io_mutable.m"
          MR_hl_field(MR_mktag(1), parse_tree__prog_io_mutable__Pieces_9, 1) = ((MR_Box) (parse_tree__prog_io_mutable__V_14_14));
#line 208 "prog_io_mutable.m"
        }
#line 212 "prog_io_mutable.m"
        {
#line 212 "prog_io_mutable.m"
          parse_tree__prog_io_mutable__V_32_32 = mercury__term__get_term_context_1_f_0(parse_tree__prog_io_mutable__TypeCtorInfo_67_67, (parse_tree__prog_io_mutable__env).parse_tree__prog_io_mutable__parse_mutable_inst_3_p_0_env_0__InstTerm_5);
        }
#line 212 "prog_io_mutable.m"
        {
#line 212 "prog_io_mutable.m"
          parse_tree__prog_io_mutable__V_34_34 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 212 "prog_io_mutable.m"
          MR_hl_field(MR_mktag(0), parse_tree__prog_io_mutable__V_34_34, 0) = ((MR_Box) (parse_tree__prog_io_mutable__Pieces_9));
#line 212 "prog_io_mutable.m"
        }
#line 212 "prog_io_mutable.m"
        {
#line 212 "prog_io_mutable.m"
          parse_tree__prog_io_mutable__V_33_33 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 212 "prog_io_mutable.m"
          MR_hl_field(MR_mktag(1), parse_tree__prog_io_mutable__V_33_33, 0) = ((MR_Box) (parse_tree__prog_io_mutable__V_34_34));
#line 212 "prog_io_mutable.m"
          MR_hl_field(MR_mktag(1), parse_tree__prog_io_mutable__V_33_33, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 212 "prog_io_mutable.m"
        }
#line 212 "prog_io_mutable.m"
        {
#line 212 "prog_io_mutable.m"
          parse_tree__prog_io_mutable__V_31_31 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 212 "prog_io_mutable.m"
          MR_hl_field(MR_mktag(0), parse_tree__prog_io_mutable__V_31_31, 0) = ((MR_Box) (parse_tree__prog_io_mutable__V_32_32));
#line 212 "prog_io_mutable.m"
          MR_hl_field(MR_mktag(0), parse_tree__prog_io_mutable__V_31_31, 1) = ((MR_Box) (parse_tree__prog_io_mutable__V_33_33));
#line 212 "prog_io_mutable.m"
        }
#line 212 "prog_io_mutable.m"
        {
#line 212 "prog_io_mutable.m"
          parse_tree__prog_io_mutable__V_30_30 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 212 "prog_io_mutable.m"
          MR_hl_field(MR_mktag(1), parse_tree__prog_io_mutable__V_30_30, 0) = ((MR_Box) (parse_tree__prog_io_mutable__V_31_31));
#line 212 "prog_io_mutable.m"
          MR_hl_field(MR_mktag(1), parse_tree__prog_io_mutable__V_30_30, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 212 "prog_io_mutable.m"
        }
#line 211 "prog_io_mutable.m"
        {
#line 211 "prog_io_mutable.m"
          parse_tree__prog_io_mutable__Spec_10 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 211 "prog_io_mutable.m"
          MR_hl_field(MR_mktag(0), parse_tree__prog_io_mutable__Spec_10, 0) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 211 "prog_io_mutable.m"
          MR_hl_field(MR_mktag(0), parse_tree__prog_io_mutable__Spec_10, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 2))));
#line 211 "prog_io_mutable.m"
          MR_hl_field(MR_mktag(0), parse_tree__prog_io_mutable__Spec_10, 2) = ((MR_Box) (parse_tree__prog_io_mutable__V_30_30));
#line 211 "prog_io_mutable.m"
        }
#line 213 "prog_io_mutable.m"
        {
#line 213 "prog_io_mutable.m"
          parse_tree__prog_io_mutable__V_37_37 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 213 "prog_io_mutable.m"
          MR_hl_field(MR_mktag(1), parse_tree__prog_io_mutable__V_37_37, 0) = ((MR_Box) (parse_tree__prog_io_mutable__Spec_10));
#line 213 "prog_io_mutable.m"
          MR_hl_field(MR_mktag(1), parse_tree__prog_io_mutable__V_37_37, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 213 "prog_io_mutable.m"
        }
#line 213 "prog_io_mutable.m"
        {
#line 213 "prog_io_mutable.m"
          MR_Word base;
#line 213 "prog_io_mutable.m"
          base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 213 "prog_io_mutable.m"
          *parse_tree__prog_io_mutable__MaybeInst_6 = base;
#line 213 "prog_io_mutable.m"
          MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (parse_tree__prog_io_mutable__V_37_37));
#line 213 "prog_io_mutable.m"
        }
#line 207 "prog_io_mutable.m"
      }
#line 214 "prog_io_mutable.m"
    else
#line 216 "prog_io_mutable.m"
      {
#line 216 "prog_io_mutable.m"
        MR_Word parse_tree__prog_io_mutable__Inst_11;

#line 214 "prog_io_mutable.m"
        {
#line 214 "prog_io_mutable.m"
          (parse_tree__prog_io_mutable__env).parse_tree__prog_io_mutable__parse_mutable_inst_3_p_0_env_0__succeeded = parse_tree__prog_io_util__convert_inst_3_p_0((MR_Integer) 1, (parse_tree__prog_io_mutable__env).parse_tree__prog_io_mutable__parse_mutable_inst_3_p_0_env_0__InstTerm_5, &parse_tree__prog_io_mutable__Inst_11);
        }
#line 216 "prog_io_mutable.m"
        if ((parse_tree__prog_io_mutable__env).parse_tree__prog_io_mutable__parse_mutable_inst_3_p_0_env_0__succeeded)
#line 215 "prog_io_mutable.m"
          {
#line 215 "prog_io_mutable.m"
            MR_Word base;
#line 215 "prog_io_mutable.m"
            base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 215 "prog_io_mutable.m"
            *parse_tree__prog_io_mutable__MaybeInst_6 = base;
#line 215 "prog_io_mutable.m"
            MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (parse_tree__prog_io_mutable__Inst_11));
#line 215 "prog_io_mutable.m"
          }
#line 216 "prog_io_mutable.m"
        else
#line 218 "prog_io_mutable.m"
          {
#line 218 "prog_io_mutable.m"
            MR_Word parse_tree__prog_io_mutable__V_53_53;
#line 218 "prog_io_mutable.m"
            MR_Word parse_tree__prog_io_mutable__V_54_54;
#line 218 "prog_io_mutable.m"
            MR_Word parse_tree__prog_io_mutable__V_55_55;
#line 218 "prog_io_mutable.m"
            MR_Word parse_tree__prog_io_mutable__V_60_60;
#line 218 "prog_io_mutable.m"
            MR_Word parse_tree__prog_io_mutable__Spec_63;

#line 220 "prog_io_mutable.m"
            {
#line 220 "prog_io_mutable.m"
              parse_tree__prog_io_mutable__V_55_55 = mercury__term__get_term_context_1_f_0((MR_Word) &mercury__term__term__type_ctor_info_generic_0, (parse_tree__prog_io_mutable__env).parse_tree__prog_io_mutable__parse_mutable_inst_3_p_0_env_0__InstTerm_5);
            }
#line 220 "prog_io_mutable.m"
            {
#line 220 "prog_io_mutable.m"
              parse_tree__prog_io_mutable__V_54_54 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 220 "prog_io_mutable.m"
              MR_hl_field(MR_mktag(0), parse_tree__prog_io_mutable__V_54_54, 0) = ((MR_Box) (parse_tree__prog_io_mutable__V_55_55));
#line 220 "prog_io_mutable.m"
              MR_hl_field(MR_mktag(0), parse_tree__prog_io_mutable__V_54_54, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__prog_io_mutable_scalar_common_2[31])));
#line 220 "prog_io_mutable.m"
            }
#line 220 "prog_io_mutable.m"
            {
#line 220 "prog_io_mutable.m"
              parse_tree__prog_io_mutable__V_53_53 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 220 "prog_io_mutable.m"
              MR_hl_field(MR_mktag(1), parse_tree__prog_io_mutable__V_53_53, 0) = ((MR_Box) (parse_tree__prog_io_mutable__V_54_54));
#line 220 "prog_io_mutable.m"
              MR_hl_field(MR_mktag(1), parse_tree__prog_io_mutable__V_53_53, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 220 "prog_io_mutable.m"
            }
#line 219 "prog_io_mutable.m"
            {
#line 219 "prog_io_mutable.m"
              parse_tree__prog_io_mutable__Spec_63 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 219 "prog_io_mutable.m"
              MR_hl_field(MR_mktag(0), parse_tree__prog_io_mutable__Spec_63, 0) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 219 "prog_io_mutable.m"
              MR_hl_field(MR_mktag(0), parse_tree__prog_io_mutable__Spec_63, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 2))));
#line 219 "prog_io_mutable.m"
              MR_hl_field(MR_mktag(0), parse_tree__prog_io_mutable__Spec_63, 2) = ((MR_Box) (parse_tree__prog_io_mutable__V_53_53));
#line 219 "prog_io_mutable.m"
            }
#line 221 "prog_io_mutable.m"
            {
#line 221 "prog_io_mutable.m"
              parse_tree__prog_io_mutable__V_60_60 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 221 "prog_io_mutable.m"
              MR_hl_field(MR_mktag(1), parse_tree__prog_io_mutable__V_60_60, 0) = ((MR_Box) (parse_tree__prog_io_mutable__Spec_63));
#line 221 "prog_io_mutable.m"
              MR_hl_field(MR_mktag(1), parse_tree__prog_io_mutable__V_60_60, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 221 "prog_io_mutable.m"
            }
#line 221 "prog_io_mutable.m"
            {
#line 221 "prog_io_mutable.m"
              MR_Word base;
#line 221 "prog_io_mutable.m"
              base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 221 "prog_io_mutable.m"
              *parse_tree__prog_io_mutable__MaybeInst_6 = base;
#line 221 "prog_io_mutable.m"
              MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (parse_tree__prog_io_mutable__V_60_60));
#line 221 "prog_io_mutable.m"
            }
#line 218 "prog_io_mutable.m"
          }
#line 216 "prog_io_mutable.m"
      }
#line 203 "prog_io_mutable.m"
  }
#line 203 "prog_io_mutable.m"
}

#line 190 "prog_io_mutable.m"
static void MR_CALL 
parse_tree__prog_io_mutable__parse_mutable_type_3_p_0_1(
#line 190 "prog_io_mutable.m"
  void * parse_tree__prog_io_mutable__env_ptr_arg)
#line 190 "prog_io_mutable.m"
{
#line 190 "prog_io_mutable.m"
  {
#line 190 "prog_io_mutable.m"
    struct parse_tree__prog_io_mutable__parse_mutable_type_3_p_0_env_0_s * parse_tree__prog_io_mutable__env_ptr = (struct parse_tree__prog_io_mutable__parse_mutable_type_3_p_0_env_0_s *) parse_tree__prog_io_mutable__env_ptr_arg;

#line 190 "prog_io_mutable.m"
    MR_builtin_longjmp((parse_tree__prog_io_mutable__env_ptr)->parse_tree__prog_io_mutable__parse_mutable_type_3_p_0_env_0__commit_0, 1);
#line 190 "prog_io_mutable.m"
  }
#line 190 "prog_io_mutable.m"
}

#line 190 "prog_io_mutable.m"
static void MR_CALL 
parse_tree__prog_io_mutable__parse_mutable_type_3_p_0_2(
#line 190 "prog_io_mutable.m"
  void * parse_tree__prog_io_mutable__env_ptr_arg)
#line 190 "prog_io_mutable.m"
{
#line 190 "prog_io_mutable.m"
  {
#line 190 "prog_io_mutable.m"
    struct parse_tree__prog_io_mutable__parse_mutable_type_3_p_0_env_0_s * parse_tree__prog_io_mutable__env_ptr = (struct parse_tree__prog_io_mutable__parse_mutable_type_3_p_0_env_0_s *) parse_tree__prog_io_mutable__env_ptr_arg;

#line 190 "prog_io_mutable.m"
    if (MR_builtin_setjmp((parse_tree__prog_io_mutable__env_ptr)->parse_tree__prog_io_mutable__parse_mutable_type_3_p_0_env_0__commit_0) == 0)
#line 190 "prog_io_mutable.m"
      {
#line 190 "prog_io_mutable.m"
        {
#line 190 "prog_io_mutable.m"
          MR_Word parse_tree__prog_io_mutable__V_7_7;

#line 190 "prog_io_mutable.m"
          {
#line 190 "prog_io_mutable.m"
            mercury__term__contains_var_2_p_1((MR_Word) &mercury__term__term__type_ctor_info_generic_0, (parse_tree__prog_io_mutable__env_ptr)->parse_tree__prog_io_mutable__parse_mutable_type_3_p_0_env_0__TypeTerm_5, &parse_tree__prog_io_mutable__V_7_7, parse_tree__prog_io_mutable__parse_mutable_type_3_p_0_1, parse_tree__prog_io_mutable__env_ptr);
          }
#line 190 "prog_io_mutable.m"
        }
#line 190 "prog_io_mutable.m"
        (parse_tree__prog_io_mutable__env_ptr)->parse_tree__prog_io_mutable__parse_mutable_type_3_p_0_env_0__succeeded = MR_FALSE;
#line 190 "prog_io_mutable.m"
      }
#line 190 "prog_io_mutable.m"
    else
#line 190 "prog_io_mutable.m"
      (parse_tree__prog_io_mutable__env_ptr)->parse_tree__prog_io_mutable__parse_mutable_type_3_p_0_env_0__succeeded = MR_TRUE;
#line 190 "prog_io_mutable.m"
  }
#line 190 "prog_io_mutable.m"
}

#line 187 "prog_io_mutable.m"
static void MR_CALL 
parse_tree__prog_io_mutable__parse_mutable_type_3_p_0(
#line 187 "prog_io_mutable.m"
  MR_Word parse_tree__prog_io_mutable__VarSet_4,
#line 187 "prog_io_mutable.m"
  MR_Word parse_tree__prog_io_mutable__TypeTerm_5,
#line 187 "prog_io_mutable.m"
  MR_Word * parse_tree__prog_io_mutable__MaybeType_6)
#line 187 "prog_io_mutable.m"
{
#line 187 "prog_io_mutable.m"
  {
#line 187 "prog_io_mutable.m"
    struct parse_tree__prog_io_mutable__parse_mutable_type_3_p_0_env_0_s parse_tree__prog_io_mutable__env;

#line 187 "prog_io_mutable.m"
    (parse_tree__prog_io_mutable__env).parse_tree__prog_io_mutable__parse_mutable_type_3_p_0_env_0__TypeTerm_5 = parse_tree__prog_io_mutable__TypeTerm_5;
#line 190 "prog_io_mutable.m"
    {
#line 190 "prog_io_mutable.m"
      parse_tree__prog_io_mutable__parse_mutable_type_3_p_0_2(&parse_tree__prog_io_mutable__env);
    }
#line 198 "prog_io_mutable.m"
    if ((parse_tree__prog_io_mutable__env).parse_tree__prog_io_mutable__parse_mutable_type_3_p_0_env_0__succeeded)
#line 191 "prog_io_mutable.m"
      {
#line 191 "prog_io_mutable.m"
        MR_Word parse_tree__prog_io_mutable__TypeCtorInfo_40_40 = (MR_Word) &mercury__term__term__type_ctor_info_generic_0;
#line 191 "prog_io_mutable.m"
        MR_String parse_tree__prog_io_mutable__TypeTermStr_8;
#line 191 "prog_io_mutable.m"
        MR_Word parse_tree__prog_io_mutable__Pieces_9;
#line 191 "prog_io_mutable.m"
        MR_Word parse_tree__prog_io_mutable__Spec_10;
#line 191 "prog_io_mutable.m"
        MR_Word parse_tree__prog_io_mutable__V_14_14;
#line 191 "prog_io_mutable.m"
        MR_Word parse_tree__prog_io_mutable__V_17_17;
#line 191 "prog_io_mutable.m"
        MR_Word parse_tree__prog_io_mutable__V_20_20;
#line 191 "prog_io_mutable.m"
        MR_Word parse_tree__prog_io_mutable__V_21_21;
#line 191 "prog_io_mutable.m"
        MR_Word parse_tree__prog_io_mutable__V_30_30;
#line 191 "prog_io_mutable.m"
        MR_Word parse_tree__prog_io_mutable__V_31_31;
#line 191 "prog_io_mutable.m"
        MR_Word parse_tree__prog_io_mutable__V_32_32;
#line 191 "prog_io_mutable.m"
        MR_Word parse_tree__prog_io_mutable__V_33_33;
#line 191 "prog_io_mutable.m"
        MR_Word parse_tree__prog_io_mutable__V_34_34;
#line 191 "prog_io_mutable.m"
        MR_Word parse_tree__prog_io_mutable__V_37_37;

#line 191 "prog_io_mutable.m"
        {
#line 191 "prog_io_mutable.m"
          parse_tree__prog_io_mutable__TypeTermStr_8 = parse_tree__parse_tree_out_term__describe_error_term_2_f_0(parse_tree__prog_io_mutable__TypeCtorInfo_40_40, parse_tree__prog_io_mutable__VarSet_4, (parse_tree__prog_io_mutable__env).parse_tree__prog_io_mutable__parse_mutable_type_3_p_0_env_0__TypeTerm_5);
        }
#line 194 "prog_io_mutable.m"
        {
#line 194 "prog_io_mutable.m"
          parse_tree__prog_io_mutable__V_21_21 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 194 "prog_io_mutable.m"
          MR_hl_field(MR_mktag(3), parse_tree__prog_io_mutable__V_21_21, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 5));
#line 194 "prog_io_mutable.m"
          MR_hl_field(MR_mktag(3), parse_tree__prog_io_mutable__V_21_21, 1) = ((MR_Box) (parse_tree__prog_io_mutable__TypeTermStr_8));
#line 194 "prog_io_mutable.m"
        }
#line 194 "prog_io_mutable.m"
        {
#line 194 "prog_io_mutable.m"
          parse_tree__prog_io_mutable__V_20_20 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 194 "prog_io_mutable.m"
          MR_hl_field(MR_mktag(1), parse_tree__prog_io_mutable__V_20_20, 0) = ((MR_Box) (parse_tree__prog_io_mutable__V_21_21));
#line 194 "prog_io_mutable.m"
          MR_hl_field(MR_mktag(1), parse_tree__prog_io_mutable__V_20_20, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__prog_io_mutable_scalar_common_2[2])));
#line 194 "prog_io_mutable.m"
        }
#line 193 "prog_io_mutable.m"
        {
#line 193 "prog_io_mutable.m"
          parse_tree__prog_io_mutable__V_17_17 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 193 "prog_io_mutable.m"
          MR_hl_field(MR_mktag(1), parse_tree__prog_io_mutable__V_17_17, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__prog_io_mutable_scalar_common_2[29])));
#line 193 "prog_io_mutable.m"
          MR_hl_field(MR_mktag(1), parse_tree__prog_io_mutable__V_17_17, 1) = ((MR_Box) (parse_tree__prog_io_mutable__V_20_20));
#line 193 "prog_io_mutable.m"
        }
#line 192 "prog_io_mutable.m"
        {
#line 192 "prog_io_mutable.m"
          parse_tree__prog_io_mutable__V_14_14 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 192 "prog_io_mutable.m"
          MR_hl_field(MR_mktag(1), parse_tree__prog_io_mutable__V_14_14, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__prog_io_mutable_scalar_common_2[28])));
#line 192 "prog_io_mutable.m"
          MR_hl_field(MR_mktag(1), parse_tree__prog_io_mutable__V_14_14, 1) = ((MR_Box) (parse_tree__prog_io_mutable__V_17_17));
#line 192 "prog_io_mutable.m"
        }
#line 192 "prog_io_mutable.m"
        {
#line 192 "prog_io_mutable.m"
          parse_tree__prog_io_mutable__Pieces_9 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 192 "prog_io_mutable.m"
          MR_hl_field(MR_mktag(1), parse_tree__prog_io_mutable__Pieces_9, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__prog_io_mutable_scalar_common_2[27])));
#line 192 "prog_io_mutable.m"
          MR_hl_field(MR_mktag(1), parse_tree__prog_io_mutable__Pieces_9, 1) = ((MR_Box) (parse_tree__prog_io_mutable__V_14_14));
#line 192 "prog_io_mutable.m"
        }
#line 196 "prog_io_mutable.m"
        {
#line 196 "prog_io_mutable.m"
          parse_tree__prog_io_mutable__V_32_32 = mercury__term__get_term_context_1_f_0(parse_tree__prog_io_mutable__TypeCtorInfo_40_40, (parse_tree__prog_io_mutable__env).parse_tree__prog_io_mutable__parse_mutable_type_3_p_0_env_0__TypeTerm_5);
        }
#line 196 "prog_io_mutable.m"
        {
#line 196 "prog_io_mutable.m"
          parse_tree__prog_io_mutable__V_34_34 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 196 "prog_io_mutable.m"
          MR_hl_field(MR_mktag(0), parse_tree__prog_io_mutable__V_34_34, 0) = ((MR_Box) (parse_tree__prog_io_mutable__Pieces_9));
#line 196 "prog_io_mutable.m"
        }
#line 196 "prog_io_mutable.m"
        {
#line 196 "prog_io_mutable.m"
          parse_tree__prog_io_mutable__V_33_33 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 196 "prog_io_mutable.m"
          MR_hl_field(MR_mktag(1), parse_tree__prog_io_mutable__V_33_33, 0) = ((MR_Box) (parse_tree__prog_io_mutable__V_34_34));
#line 196 "prog_io_mutable.m"
          MR_hl_field(MR_mktag(1), parse_tree__prog_io_mutable__V_33_33, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 196 "prog_io_mutable.m"
        }
#line 196 "prog_io_mutable.m"
        {
#line 196 "prog_io_mutable.m"
          parse_tree__prog_io_mutable__V_31_31 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 196 "prog_io_mutable.m"
          MR_hl_field(MR_mktag(0), parse_tree__prog_io_mutable__V_31_31, 0) = ((MR_Box) (parse_tree__prog_io_mutable__V_32_32));
#line 196 "prog_io_mutable.m"
          MR_hl_field(MR_mktag(0), parse_tree__prog_io_mutable__V_31_31, 1) = ((MR_Box) (parse_tree__prog_io_mutable__V_33_33));
#line 196 "prog_io_mutable.m"
        }
#line 196 "prog_io_mutable.m"
        {
#line 196 "prog_io_mutable.m"
          parse_tree__prog_io_mutable__V_30_30 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 196 "prog_io_mutable.m"
          MR_hl_field(MR_mktag(1), parse_tree__prog_io_mutable__V_30_30, 0) = ((MR_Box) (parse_tree__prog_io_mutable__V_31_31));
#line 196 "prog_io_mutable.m"
          MR_hl_field(MR_mktag(1), parse_tree__prog_io_mutable__V_30_30, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 196 "prog_io_mutable.m"
        }
#line 195 "prog_io_mutable.m"
        {
#line 195 "prog_io_mutable.m"
          parse_tree__prog_io_mutable__Spec_10 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 195 "prog_io_mutable.m"
          MR_hl_field(MR_mktag(0), parse_tree__prog_io_mutable__Spec_10, 0) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 195 "prog_io_mutable.m"
          MR_hl_field(MR_mktag(0), parse_tree__prog_io_mutable__Spec_10, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 2))));
#line 195 "prog_io_mutable.m"
          MR_hl_field(MR_mktag(0), parse_tree__prog_io_mutable__Spec_10, 2) = ((MR_Box) (parse_tree__prog_io_mutable__V_30_30));
#line 195 "prog_io_mutable.m"
        }
#line 197 "prog_io_mutable.m"
        {
#line 197 "prog_io_mutable.m"
          parse_tree__prog_io_mutable__V_37_37 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 197 "prog_io_mutable.m"
          MR_hl_field(MR_mktag(1), parse_tree__prog_io_mutable__V_37_37, 0) = ((MR_Box) (parse_tree__prog_io_mutable__Spec_10));
#line 197 "prog_io_mutable.m"
          MR_hl_field(MR_mktag(1), parse_tree__prog_io_mutable__V_37_37, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 197 "prog_io_mutable.m"
        }
#line 197 "prog_io_mutable.m"
        {
#line 197 "prog_io_mutable.m"
          MR_Word base;
#line 197 "prog_io_mutable.m"
          base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 197 "prog_io_mutable.m"
          *parse_tree__prog_io_mutable__MaybeType_6 = base;
#line 197 "prog_io_mutable.m"
          MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (parse_tree__prog_io_mutable__V_37_37));
#line 197 "prog_io_mutable.m"
        }
#line 191 "prog_io_mutable.m"
      }
#line 198 "prog_io_mutable.m"
    else
#line 199 "prog_io_mutable.m"
      {
#line 200 "prog_io_mutable.m"
        {
#line 200 "prog_io_mutable.m"
          parse_tree__prog_io_util__parse_type_4_p_0((parse_tree__prog_io_mutable__env).parse_tree__prog_io_mutable__parse_mutable_type_3_p_0_env_0__TypeTerm_5, parse_tree__prog_io_mutable__VarSet_4, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), parse_tree__prog_io_mutable__MaybeType_6);
#line 200 "prog_io_mutable.m"
          return;
        }
#line 199 "prog_io_mutable.m"
      }
#line 187 "prog_io_mutable.m"
  }
#line 187 "prog_io_mutable.m"
}

#line 36 "prog_io_mutable.m"
MR_bool MR_CALL 
parse_tree__prog_io_mutable__parse_mutable_decl_info_6_p_0(
#line 36 "prog_io_mutable.m"
  MR_Word parse_tree__prog_io_mutable___ModuleName_7,
#line 36 "prog_io_mutable.m"
  MR_Word parse_tree__prog_io_mutable__VarSet_8,
#line 36 "prog_io_mutable.m"
  MR_Word parse_tree__prog_io_mutable__Terms_9,
#line 36 "prog_io_mutable.m"
  MR_Word parse_tree__prog_io_mutable__Context_10,
#line 36 "prog_io_mutable.m"
  MR_Integer parse_tree__prog_io_mutable__SeqNum_11,
#line 36 "prog_io_mutable.m"
  MR_Word * parse_tree__prog_io_mutable__MaybeMutableInfo_12)
#line 36 "prog_io_mutable.m"
{
#line 138 "prog_io_mutable.m"
  {
#line 138 "prog_io_mutable.m"
    MR_bool parse_tree__prog_io_mutable__succeeded;

#line 138 "prog_io_mutable.m"
    {
#line 138 "prog_io_mutable.m"
      return parse_tree__prog_io_mutable__succeeded = parse_tree__prog_io_mutable__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_112_97_114_115_101_95_109_117_116_97_98_108_101_95_100_101_99_108_95_105_110_102_111_95_95_91_49_93_95_48_6_p_0(parse_tree__prog_io_mutable__VarSet_8, parse_tree__prog_io_mutable__Terms_9, parse_tree__prog_io_mutable__Context_10, parse_tree__prog_io_mutable__SeqNum_11, parse_tree__prog_io_mutable__MaybeMutableInfo_12);
    }
#line 138 "prog_io_mutable.m"
    return parse_tree__prog_io_mutable__succeeded;
#line 138 "prog_io_mutable.m"
  }
#line 36 "prog_io_mutable.m"
}

#line 33 "prog_io_mutable.m"
MR_bool MR_CALL 
parse_tree__prog_io_mutable__parse_mutable_decl_6_p_0(
#line 33 "prog_io_mutable.m"
  MR_Word parse_tree__prog_io_mutable__ModuleName_7,
#line 33 "prog_io_mutable.m"
  MR_Word parse_tree__prog_io_mutable__VarSet_8,
#line 33 "prog_io_mutable.m"
  MR_Word parse_tree__prog_io_mutable__Terms_9,
#line 33 "prog_io_mutable.m"
  MR_Word parse_tree__prog_io_mutable__Context_10,
#line 33 "prog_io_mutable.m"
  MR_Integer parse_tree__prog_io_mutable__SeqNum_11,
#line 33 "prog_io_mutable.m"
  MR_Word * parse_tree__prog_io_mutable__MaybeItem_12)
#line 33 "prog_io_mutable.m"
{
#line 126 "prog_io_mutable.m"
  {
#line 126 "prog_io_mutable.m"
    MR_bool parse_tree__prog_io_mutable__succeeded;

#line 126 "prog_io_mutable.m"
    {
#line 126 "prog_io_mutable.m"
      return parse_tree__prog_io_mutable__succeeded = parse_tree__prog_io_mutable__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_112_97_114_115_101_95_109_117_116_97_98_108_101_95_100_101_99_108_95_95_91_49_93_95_48_6_p_0(parse_tree__prog_io_mutable__VarSet_8, parse_tree__prog_io_mutable__Terms_9, parse_tree__prog_io_mutable__Context_10, parse_tree__prog_io_mutable__SeqNum_11, parse_tree__prog_io_mutable__MaybeItem_12);
    }
#line 126 "prog_io_mutable.m"
    return parse_tree__prog_io_mutable__succeeded;
#line 126 "prog_io_mutable.m"
  }
#line 33 "prog_io_mutable.m"
}

#line 30 "prog_io_mutable.m"
void MR_CALL 
parse_tree__prog_io_mutable__parse_finalise_decl_6_p_0(
#line 30 "prog_io_mutable.m"
  MR_Word parse_tree__prog_io_mutable___ModuleName_7,
#line 30 "prog_io_mutable.m"
  MR_Word parse_tree__prog_io_mutable__VarSet_8,
#line 30 "prog_io_mutable.m"
  MR_Word parse_tree__prog_io_mutable__Term_9,
#line 30 "prog_io_mutable.m"
  MR_Word parse_tree__prog_io_mutable__Context_10,
#line 30 "prog_io_mutable.m"
  MR_Integer parse_tree__prog_io_mutable__SeqNum_11,
#line 30 "prog_io_mutable.m"
  MR_Word * parse_tree__prog_io_mutable__MaybeItem_12)
#line 30 "prog_io_mutable.m"
{
#line 90 "prog_io_mutable.m"
  {
#line 90 "prog_io_mutable.m"
    MR_bool parse_tree__prog_io_mutable__succeeded;

#line 90 "prog_io_mutable.m"
    {
#line 90 "prog_io_mutable.m"
      parse_tree__prog_io_mutable__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_112_97_114_115_101_95_102_105_110_97_108_105_115_101_95_100_101_99_108_95_95_91_49_93_95_48_6_p_0(parse_tree__prog_io_mutable__VarSet_8, parse_tree__prog_io_mutable__Term_9, parse_tree__prog_io_mutable__Context_10, parse_tree__prog_io_mutable__SeqNum_11, parse_tree__prog_io_mutable__MaybeItem_12);
#line 90 "prog_io_mutable.m"
      return;
    }
#line 90 "prog_io_mutable.m"
  }
#line 30 "prog_io_mutable.m"
}

#line 27 "prog_io_mutable.m"
void MR_CALL 
parse_tree__prog_io_mutable__parse_initialise_decl_6_p_0(
#line 27 "prog_io_mutable.m"
  MR_Word parse_tree__prog_io_mutable___ModuleName_7,
#line 27 "prog_io_mutable.m"
  MR_Word parse_tree__prog_io_mutable__VarSet_8,
#line 27 "prog_io_mutable.m"
  MR_Word parse_tree__prog_io_mutable__Term_9,
#line 27 "prog_io_mutable.m"
  MR_Word parse_tree__prog_io_mutable__Context_10,
#line 27 "prog_io_mutable.m"
  MR_Integer parse_tree__prog_io_mutable__SeqNum_11,
#line 27 "prog_io_mutable.m"
  MR_Word * parse_tree__prog_io_mutable__MaybeItem_12)
#line 27 "prog_io_mutable.m"
{
#line 52 "prog_io_mutable.m"
  {
#line 52 "prog_io_mutable.m"
    MR_bool parse_tree__prog_io_mutable__succeeded;

#line 52 "prog_io_mutable.m"
    {
#line 52 "prog_io_mutable.m"
      parse_tree__prog_io_mutable__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_112_97_114_115_101_95_105_110_105_116_105_97_108_105_115_101_95_100_101_99_108_95_95_91_49_93_95_48_6_p_0(parse_tree__prog_io_mutable__VarSet_8, parse_tree__prog_io_mutable__Term_9, parse_tree__prog_io_mutable__Context_10, parse_tree__prog_io_mutable__SeqNum_11, parse_tree__prog_io_mutable__MaybeItem_12);
#line 52 "prog_io_mutable.m"
      return;
    }
#line 52 "prog_io_mutable.m"
  }
#line 27 "prog_io_mutable.m"
}

void mercury__parse_tree__prog_io_mutable__init(void)
{
}

void mercury__parse_tree__prog_io_mutable__init_type_tables(void)
{
	static MR_bool initialised = MR_FALSE;
	if (initialised) return;
	initialised = MR_TRUE;

	MR_register_type_ctor_info(&parse_tree__prog_io_mutable__parse_tree__prog_io_mutable__type_ctor_info_collected_mutable_attribute_0);
}

void mercury__parse_tree__prog_io_mutable__init_debugger(void)
{
	MR_fatal_error("debugger initialization in MLDS grade");
}

/* ensure everything is compiled with the same grade */
static const void *const MR_grade = &MR_GRADE_VAR;

/* :- end_module parse_tree.prog_io_mutable. */
