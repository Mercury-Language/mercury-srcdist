/*
** Automatically generated from `prog_io_mutable.m'
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


/* :- module parse_tree.prog_io_mutable. */
/* :- implementation. */

/*
INIT mercury__parse_tree__prog_io_mutable__init
ENDINIT
*/

#include "parse_tree.prog_io_mutable.mih"


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
#include "parse_tree.parse_tree_out_info.mih"
#include "parse_tree.parse_tree_out_term.mih"
#include "parse_tree.prog_data.mih"
#include "parse_tree.prog_io_iom.mih"
#include "parse_tree.prog_io_pragma.mih"
#include "parse_tree.prog_io_sym_name.mih"
#include "parse_tree.prog_io_util.mih"
#include "parse_tree.prog_item.mih"
#include "parse_tree.set_of_var.mih"
#include "mdbcomp.feedback.automatic_parallelism.mih"



#line 299 "prog_io_mutable.m"
struct parse_tree__prog_io_mutable__parse_mutable_attrs_3_p_0_env_0_s {
#line 302 "prog_io_mutable.m"
  MR_bool parse_tree__prog_io_mutable__parse_mutable_attrs_3_p_0_env_0__succeeded;
#line 316 "prog_io_mutable.m"
  MR_Word parse_tree__prog_io_mutable__parse_mutable_attrs_3_p_0_env_0__CollectedMutAttrs_11;
#line 326 "prog_io_mutable.m"
  jmp_buf parse_tree__prog_io_mutable__parse_mutable_attrs_3_p_0_env_0__commit_0;
#line 326 "prog_io_mutable.m"
  MR_Word parse_tree__prog_io_mutable__parse_mutable_attrs_3_p_0_env_0__TypeCtorInfo_116_116;
#line 326 "prog_io_mutable.m"
  MR_Word parse_tree__prog_io_mutable__parse_mutable_attrs_3_p_0_env_0__Conflict1_12;
#line 326 "prog_io_mutable.m"
  MR_Word parse_tree__prog_io_mutable__parse_mutable_attrs_3_p_0_env_0__Conflict2_13;
#line 326 "prog_io_mutable.m"
  MR_Word parse_tree__prog_io_mutable__parse_mutable_attrs_3_p_0_env_0__V_49_49;
#line 326 "prog_io_mutable.m"
  MR_Box parse_tree__prog_io_mutable__parse_mutable_attrs_3_p_0_env_0__conv1_V_49_49;
#line 299 "prog_io_mutable.m"
};

#line 271 "prog_io_mutable.m"
struct parse_tree__prog_io_mutable__parse_mutable_inst_3_p_0_env_0_s {
#line 271 "prog_io_mutable.m"
  MR_Word parse_tree__prog_io_mutable__parse_mutable_inst_3_p_0_env_0__InstTerm_5;
#line 274 "prog_io_mutable.m"
  MR_bool parse_tree__prog_io_mutable__parse_mutable_inst_3_p_0_env_0__succeeded;
#line 274 "prog_io_mutable.m"
  jmp_buf parse_tree__prog_io_mutable__parse_mutable_inst_3_p_0_env_0__commit_0;
#line 271 "prog_io_mutable.m"
};

#line 255 "prog_io_mutable.m"
struct parse_tree__prog_io_mutable__parse_mutable_type_3_p_0_env_0_s {
#line 255 "prog_io_mutable.m"
  MR_Word parse_tree__prog_io_mutable__parse_mutable_type_3_p_0_env_0__TypeTerm_5;
#line 258 "prog_io_mutable.m"
  MR_bool parse_tree__prog_io_mutable__parse_mutable_type_3_p_0_env_0__succeeded;
#line 258 "prog_io_mutable.m"
  jmp_buf parse_tree__prog_io_mutable__parse_mutable_type_3_p_0_env_0__commit_0;
#line 255 "prog_io_mutable.m"
};


#line 144 "parse_tree.prog_io_mutable.c"
static const MR_FA_PseudoTypeInfo_Struct1 parse_tree__prog_io_mutable__term__pti_term_1__plain_term__type_ctor_info_generic_0;

#line 147 "parse_tree.prog_io_mutable.c"
static const MR_FA_PseudoTypeInfo_Struct1 parse_tree__prog_io_mutable__parse_tree__maybe_error__pti_maybe1_1__plain_parse_tree__prog_io_mutable__type_ctor_info_collected_mutable_attribute_0;

#line 150 "parse_tree.prog_io_mutable.c"
static const MR_PseudoTypeInfo parse_tree__prog_io_mutable__parse_tree__prog_io_mutable__field_types_collected_mutable_attribute_0_0[1];

#line 153 "parse_tree.prog_io_mutable.c"
static const MR_DuFunctorDesc parse_tree__prog_io_mutable__parse_tree__prog_io_mutable__du_functor_desc_collected_mutable_attribute_0_0;

#line 156 "parse_tree.prog_io_mutable.c"
static const MR_PseudoTypeInfo parse_tree__prog_io_mutable__parse_tree__prog_io_mutable__field_types_collected_mutable_attribute_0_1[1];

#line 159 "parse_tree.prog_io_mutable.c"
static const MR_DuFunctorDesc parse_tree__prog_io_mutable__parse_tree__prog_io_mutable__du_functor_desc_collected_mutable_attribute_0_1;

#line 162 "parse_tree.prog_io_mutable.c"
static const MR_PseudoTypeInfo parse_tree__prog_io_mutable__parse_tree__prog_io_mutable__field_types_collected_mutable_attribute_0_2[1];

#line 165 "parse_tree.prog_io_mutable.c"
static const MR_DuFunctorDesc parse_tree__prog_io_mutable__parse_tree__prog_io_mutable__du_functor_desc_collected_mutable_attribute_0_2;

#line 168 "parse_tree.prog_io_mutable.c"
static const MR_PseudoTypeInfo parse_tree__prog_io_mutable__parse_tree__prog_io_mutable__field_types_collected_mutable_attribute_0_3[1];

#line 171 "parse_tree.prog_io_mutable.c"
static const MR_DuFunctorDesc parse_tree__prog_io_mutable__parse_tree__prog_io_mutable__du_functor_desc_collected_mutable_attribute_0_3;

#line 174 "parse_tree.prog_io_mutable.c"
static const MR_PseudoTypeInfo parse_tree__prog_io_mutable__parse_tree__prog_io_mutable__field_types_collected_mutable_attribute_0_4[1];

#line 177 "parse_tree.prog_io_mutable.c"
static const MR_DuFunctorDesc parse_tree__prog_io_mutable__parse_tree__prog_io_mutable__du_functor_desc_collected_mutable_attribute_0_4;

#line 180 "parse_tree.prog_io_mutable.c"
static const MR_DuFunctorDescPtr parse_tree__prog_io_mutable__parse_tree__prog_io_mutable__du_stag_ordered_collected_mutable_attribute_0_0[1];

#line 183 "parse_tree.prog_io_mutable.c"
static const MR_DuFunctorDescPtr parse_tree__prog_io_mutable__parse_tree__prog_io_mutable__du_stag_ordered_collected_mutable_attribute_0_1[1];

#line 186 "parse_tree.prog_io_mutable.c"
static const MR_DuFunctorDescPtr parse_tree__prog_io_mutable__parse_tree__prog_io_mutable__du_stag_ordered_collected_mutable_attribute_0_2[1];

#line 189 "parse_tree.prog_io_mutable.c"
static const MR_DuFunctorDescPtr parse_tree__prog_io_mutable__parse_tree__prog_io_mutable__du_stag_ordered_collected_mutable_attribute_0_3[2];

#line 192 "parse_tree.prog_io_mutable.c"
static const MR_DuPtagLayout parse_tree__prog_io_mutable__parse_tree__prog_io_mutable__du_ptag_ordered_collected_mutable_attribute_0[4];

#line 195 "parse_tree.prog_io_mutable.c"
static const MR_DuFunctorDescPtr parse_tree__prog_io_mutable__parse_tree__prog_io_mutable__du_name_ordered_collected_mutable_attribute_0[5];

#line 198 "parse_tree.prog_io_mutable.c"
static const MR_Integer parse_tree__prog_io_mutable__parse_tree__prog_io_mutable__functor_number_map_collected_mutable_attribute_0[5];

#line 201 "parse_tree.prog_io_mutable.c"
static const MR_EnumFunctorDesc parse_tree__prog_io_mutable__parse_tree__prog_io_mutable__enum_functor_desc_mutable_locn_0_0;

#line 204 "parse_tree.prog_io_mutable.c"
static const MR_EnumFunctorDesc parse_tree__prog_io_mutable__parse_tree__prog_io_mutable__enum_functor_desc_mutable_locn_0_1;

#line 207 "parse_tree.prog_io_mutable.c"
static const MR_EnumFunctorDescPtr parse_tree__prog_io_mutable__parse_tree__prog_io_mutable__enum_value_ordered_mutable_locn_0[2];

#line 210 "parse_tree.prog_io_mutable.c"
static const MR_EnumFunctorDescPtr parse_tree__prog_io_mutable__parse_tree__prog_io_mutable__enum_name_ordered_mutable_locn_0[2];

#line 213 "parse_tree.prog_io_mutable.c"
static const MR_Integer parse_tree__prog_io_mutable__parse_tree__prog_io_mutable__functor_number_map_mutable_locn_0[2];

#line 216 "parse_tree.prog_io_mutable.c"
static MR_bool MR_CALL 
parse_tree__prog_io_mutable____Unify____collected_mutable_attribute_0_0_10001(
#line 219 "parse_tree.prog_io_mutable.c"
  MR_Box parse_tree__prog_io_mutable__wrapper_arg_1,
#line 221 "parse_tree.prog_io_mutable.c"
  MR_Box parse_tree__prog_io_mutable__wrapper_arg_2);

#line 224 "parse_tree.prog_io_mutable.c"
static void MR_CALL 
parse_tree__prog_io_mutable____Compare____collected_mutable_attribute_0_0_10001(
#line 227 "parse_tree.prog_io_mutable.c"
  MR_Box * parse_tree__prog_io_mutable__wrapper_arg_1,
#line 229 "parse_tree.prog_io_mutable.c"
  MR_Box parse_tree__prog_io_mutable__wrapper_arg_2,
#line 231 "parse_tree.prog_io_mutable.c"
  MR_Box parse_tree__prog_io_mutable__wrapper_arg_3);

#line 234 "parse_tree.prog_io_mutable.c"
static MR_bool MR_CALL 
parse_tree__prog_io_mutable____Unify____mutable_locn_0_0_10001(
#line 237 "parse_tree.prog_io_mutable.c"
  MR_Box parse_tree__prog_io_mutable__wrapper_arg_1,
#line 239 "parse_tree.prog_io_mutable.c"
  MR_Box parse_tree__prog_io_mutable__wrapper_arg_2);

#line 242 "parse_tree.prog_io_mutable.c"
static void MR_CALL 
parse_tree__prog_io_mutable____Compare____mutable_locn_0_0_10001(
#line 245 "parse_tree.prog_io_mutable.c"
  MR_Box * parse_tree__prog_io_mutable__wrapper_arg_1,
#line 247 "parse_tree.prog_io_mutable.c"
  MR_Box parse_tree__prog_io_mutable__wrapper_arg_2,
#line 249 "parse_tree.prog_io_mutable.c"
  MR_Box parse_tree__prog_io_mutable__wrapper_arg_3);

#line 292 "prog_io_mutable.m"
static void MR_CALL 
parse_tree__prog_io_mutable____Compare____collected_mutable_attribute_0_0(
#line 292 "prog_io_mutable.m"
  MR_Word * parse_tree__prog_io_mutable__HeadVar__1_1,
#line 292 "prog_io_mutable.m"
  MR_Word parse_tree__prog_io_mutable__HeadVar__2_2,
#line 292 "prog_io_mutable.m"
  MR_Word parse_tree__prog_io_mutable__HeadVar__3_3);

#line 292 "prog_io_mutable.m"
static MR_bool MR_CALL 
parse_tree__prog_io_mutable____Unify____collected_mutable_attribute_0_0(
#line 292 "prog_io_mutable.m"
  MR_Word parse_tree__prog_io_mutable__HeadVar__1_1,
#line 292 "prog_io_mutable.m"
  MR_Word parse_tree__prog_io_mutable__HeadVar__2_2);

#line 380 "prog_io_mutable.m"
static void MR_CALL 
parse_tree__prog_io_mutable__parse_mutable_attr_2_p_0(
#line 380 "prog_io_mutable.m"
  MR_Word parse_tree__prog_io_mutable__MutAttrTerm_3,
#line 380 "prog_io_mutable.m"
  MR_Word * parse_tree__prog_io_mutable__MutAttrResult_4);

#line 356 "prog_io_mutable.m"
static void MR_CALL 
parse_tree__prog_io_mutable__process_mutable_attribute_3_p_0(
#line 356 "prog_io_mutable.m"
  MR_Word parse_tree__prog_io_mutable__HeadVar__1_1,
#line 356 "prog_io_mutable.m"
  MR_Word parse_tree__prog_io_mutable__STATE_VARIABLE_Attributes_0_2,
#line 356 "prog_io_mutable.m"
  MR_Word * parse_tree__prog_io_mutable__STATE_VARIABLE_Attributes_3);

#line 341 "prog_io_mutable.m"
static void MR_CALL 
parse_tree__prog_io_mutable__parse_mutable_attrs_3_p_0_6(
#line 341 "prog_io_mutable.m"
  MR_Box parse_tree__prog_io_mutable__closure_arg,
#line 341 "prog_io_mutable.m"
  MR_Box parse_tree__prog_io_mutable__wrapper_arg_1,
#line 341 "prog_io_mutable.m"
  MR_Box parse_tree__prog_io_mutable__wrapper_arg_2,
#line 341 "prog_io_mutable.m"
  MR_Box * parse_tree__prog_io_mutable__wrapper_arg_3);

#line 318 "prog_io_mutable.m"
static void MR_CALL 
parse_tree__prog_io_mutable__parse_mutable_attrs_3_p_0_1(
#line 318 "prog_io_mutable.m"
  MR_Box parse_tree__prog_io_mutable__closure_arg,
#line 318 "prog_io_mutable.m"
  MR_Box parse_tree__prog_io_mutable__wrapper_arg_1,
#line 318 "prog_io_mutable.m"
  MR_Box * parse_tree__prog_io_mutable__wrapper_arg_2);

#line 326 "prog_io_mutable.m"
static void MR_CALL 
parse_tree__prog_io_mutable__parse_mutable_attrs_3_p_0_2(
#line 326 "prog_io_mutable.m"
  void * parse_tree__prog_io_mutable__env_ptr_arg);

#line 326 "prog_io_mutable.m"
static void MR_CALL 
parse_tree__prog_io_mutable__parse_mutable_attrs_3_p_0_4(
#line 326 "prog_io_mutable.m"
  void * parse_tree__prog_io_mutable__env_ptr_arg);

#line 326 "prog_io_mutable.m"
static void MR_CALL 
parse_tree__prog_io_mutable__parse_mutable_attrs_3_p_0_3(
#line 326 "prog_io_mutable.m"
  void * parse_tree__prog_io_mutable__env_ptr_arg);

#line 326 "prog_io_mutable.m"
static void MR_CALL 
parse_tree__prog_io_mutable__parse_mutable_attrs_3_p_0_5(
#line 326 "prog_io_mutable.m"
  void * parse_tree__prog_io_mutable__env_ptr_arg);

#line 299 "prog_io_mutable.m"
static void MR_CALL 
parse_tree__prog_io_mutable__parse_mutable_attrs_3_p_0(
#line 299 "prog_io_mutable.m"
  MR_Word parse_tree__prog_io_mutable__VarSet_4,
#line 299 "prog_io_mutable.m"
  MR_Word parse_tree__prog_io_mutable__MutAttrsTerm_5,
#line 299 "prog_io_mutable.m"
  MR_Word * parse_tree__prog_io_mutable__MaybeMutAttrs_6);

#line 274 "prog_io_mutable.m"
static void MR_CALL 
parse_tree__prog_io_mutable__parse_mutable_inst_3_p_0_1(
#line 274 "prog_io_mutable.m"
  void * parse_tree__prog_io_mutable__env_ptr_arg);

#line 274 "prog_io_mutable.m"
static void MR_CALL 
parse_tree__prog_io_mutable__parse_mutable_inst_3_p_0_2(
#line 274 "prog_io_mutable.m"
  void * parse_tree__prog_io_mutable__env_ptr_arg);

#line 271 "prog_io_mutable.m"
static void MR_CALL 
parse_tree__prog_io_mutable__parse_mutable_inst_3_p_0(
#line 271 "prog_io_mutable.m"
  MR_Word parse_tree__prog_io_mutable__VarSet_4,
#line 271 "prog_io_mutable.m"
  MR_Word parse_tree__prog_io_mutable__InstTerm_5,
#line 271 "prog_io_mutable.m"
  MR_Word * parse_tree__prog_io_mutable__MaybeInst_6);

#line 258 "prog_io_mutable.m"
static void MR_CALL 
parse_tree__prog_io_mutable__parse_mutable_type_3_p_0_1(
#line 258 "prog_io_mutable.m"
  void * parse_tree__prog_io_mutable__env_ptr_arg);

#line 258 "prog_io_mutable.m"
static void MR_CALL 
parse_tree__prog_io_mutable__parse_mutable_type_3_p_0_2(
#line 258 "prog_io_mutable.m"
  void * parse_tree__prog_io_mutable__env_ptr_arg);

#line 255 "prog_io_mutable.m"
static void MR_CALL 
parse_tree__prog_io_mutable__parse_mutable_type_3_p_0(
#line 255 "prog_io_mutable.m"
  MR_Word parse_tree__prog_io_mutable__VarSet_4,
#line 255 "prog_io_mutable.m"
  MR_Word parse_tree__prog_io_mutable__TypeTerm_5,
#line 255 "prog_io_mutable.m"
  MR_Word * parse_tree__prog_io_mutable__MaybeType_6);

#line 243 "prog_io_mutable.m"
static void MR_CALL 
parse_tree__prog_io_mutable__parse_mutable_name_2_p_0(
#line 243 "prog_io_mutable.m"
  MR_Word parse_tree__prog_io_mutable__NameTerm_3,
#line 243 "prog_io_mutable.m"
  MR_Word * parse_tree__prog_io_mutable__MaybeName_4);


static /* final */ const MR_Box parse_tree__prog_io_mutable_scalar_common_1[3][3];

static /* final */ const MR_Box parse_tree__prog_io_mutable_scalar_common_2[89][2];

static /* final */ const MR_Box parse_tree__prog_io_mutable_scalar_common_3[8][1];

static /* final */ const MR_Box parse_tree__prog_io_mutable_scalar_common_4[1][5];

static /* final */ const MR_Box parse_tree__prog_io_mutable_scalar_common_5[1][6];


#line 389 "prog_io_mutable.m"
/* sealed */ struct parse_tree__prog_io_mutable__vector_common_type_6_0_s {
#line 389 "prog_io_mutable.m"
  const MR_String parse_tree__prog_io_mutable__vector_common_type_6_0__vct_6_f_0;
#line 389 "prog_io_mutable.m"
  const MR_Word parse_tree__prog_io_mutable__vector_common_type_6_0__vct_6_f_1;
#line 389 "prog_io_mutable.m"
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

static /* final */ const MR_Box parse_tree__prog_io_mutable_scalar_common_2[89][2] = {
  /* row 0 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 1)))),
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))))
  },
  /* row 1 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 5)),
    ((MR_Box) ((MR_String) "doesn\'t."))
  },
  /* row 2 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__prog_io_mutable_scalar_common_2[1]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__prog_io_mutable_scalar_common_2[0])))
  },
  /* row 3 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 5)),
    ((MR_Box) ((MR_String) "is not zero or two."))
  },
  /* row 4 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__prog_io_mutable_scalar_common_2[3]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__prog_io_mutable_scalar_common_2[0])))
  },
  /* row 5 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 5)),
    ((MR_Box) ((MR_String) "whose arity"))
  },
  /* row 6 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__prog_io_mutable_scalar_common_2[5]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__prog_io_mutable_scalar_common_2[4])))
  },
  /* row 7 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 4)),
    ((MR_Box) ((MR_String) ","))
  },
  /* row 8 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__prog_io_mutable_scalar_common_2[7]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__prog_io_mutable_scalar_common_2[6])))
  },
  /* row 9 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 0)),
    ((MR_Box) ((MR_String) ":- initialise pred_name/pred_arity."))
  },
  /* row 10 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__prog_io_mutable_scalar_common_2[9]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__prog_io_mutable_scalar_common_2[0])))
  },
  /* row 11 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 5)),
    ((MR_Box) ((MR_String) "should have the form"))
  },
  /* row 12 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__prog_io_mutable_scalar_common_2[11]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__prog_io_mutable_scalar_common_2[10])))
  },
  /* row 13 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 5)),
    ((MR_Box) ((MR_String) "declaration"))
  },
  /* row 14 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__prog_io_mutable_scalar_common_2[13]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__prog_io_mutable_scalar_common_2[12])))
  },
  /* row 15 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 13)),
    ((MR_Box) ((MR_String) "initialise"))
  },
  /* row 16 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__prog_io_mutable_scalar_common_2[15]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__prog_io_mutable_scalar_common_2[14])))
  },
  /* row 17 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 5)),
    ((MR_Box) ((MR_String) "Error: an"))
  },
  /* row 18 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__prog_io_mutable_scalar_common_2[17]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__prog_io_mutable_scalar_common_2[16])))
  },
  /* row 19 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 4)),
    ((MR_Box) ((MR_String) "."))
  },
  /* row 20 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__prog_io_mutable_scalar_common_2[19]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__prog_io_mutable_scalar_common_2[0])))
  },
  /* row 21 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 0)),
    ((MR_Box) ((MR_String) ":- finalise pred_name/pred_arity."))
  },
  /* row 22 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__prog_io_mutable_scalar_common_2[21]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__prog_io_mutable_scalar_common_2[0])))
  },
  /* row 23 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__prog_io_mutable_scalar_common_2[11]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__prog_io_mutable_scalar_common_2[22])))
  },
  /* row 24 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__prog_io_mutable_scalar_common_2[13]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__prog_io_mutable_scalar_common_2[23])))
  },
  /* row 25 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 13)),
    ((MR_Box) ((MR_String) "finalise"))
  },
  /* row 26 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__prog_io_mutable_scalar_common_2[25]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__prog_io_mutable_scalar_common_2[24])))
  },
  /* row 27 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 5)),
    ((MR_Box) ((MR_String) "Error: a"))
  },
  /* row 28 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__prog_io_mutable_scalar_common_2[27]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__prog_io_mutable_scalar_common_2[26])))
  },
  /* row 29 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 5)),
    ((MR_Box) ((MR_String) "representing part of the constraint store"))
  },
  /* row 30 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__prog_io_mutable_scalar_common_2[29]))),
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))))
  },
  /* row 31 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 13)),
    ((MR_Box) ((MR_String) "mutable"))
  },
  /* row 32 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__prog_io_mutable_scalar_common_2[31]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__prog_io_mutable_scalar_common_2[30])))
  },
  /* row 33 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 5)),
    ((MR_Box) ((MR_String) "a"))
  },
  /* row 34 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__prog_io_mutable_scalar_common_2[33]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__prog_io_mutable_scalar_common_2[32])))
  },
  /* row 35 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__prog_io_mutable_scalar_common_2[13]))),
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))))
  },
  /* row 36 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__prog_io_mutable_scalar_common_2[31]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__prog_io_mutable_scalar_common_2[35])))
  },
  /* row 37 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__prog_io_mutable_scalar_common_2[33]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__prog_io_mutable_scalar_common_2[36])))
  },
  /* row 38 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 5)),
    ((MR_Box) ((MR_String) "Error: invalid mutable name."))
  },
  /* row 39 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__prog_io_mutable_scalar_common_2[38]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__prog_io_mutable_scalar_common_2[0])))
  },
  /* row 40 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 5)),
    ((MR_Box) ((MR_String) "declaration."))
  },
  /* row 41 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__prog_io_mutable_scalar_common_2[40]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__prog_io_mutable_scalar_common_2[0])))
  },
  /* row 42 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__prog_io_mutable_scalar_common_2[31]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__prog_io_mutable_scalar_common_2[41])))
  },
  /* row 43 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 5)),
    ((MR_Box) ((MR_String) "Error: invalid inst in"))
  },
  /* row 44 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__prog_io_mutable_scalar_common_2[43]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__prog_io_mutable_scalar_common_2[42])))
  },
  /* row 45 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 1)),
    ((MR_Box) ((MR_Integer) 1))
  },
  /* row 46 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 0)),
    ((MR_Box) ((MR_Integer) 1))
  },
  /* row 47 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__prog_io_mutable_scalar_common_2[46]))),
    ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__prog_io_mutable_scalar_common_2[45])))
  },
  /* row 48 */
  {
    ((MR_Box) (&parse_tree__prog_io_mutable_scalar_common_2[47])),
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))))
  },
  /* row 49 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__prog_io_mutable_scalar_common_2[46]))),
    ((MR_Box) (MR_mkword(MR_mktag(2), &parse_tree__prog_io_mutable_scalar_common_3[0])))
  },
  /* row 50 */
  {
    ((MR_Box) (&parse_tree__prog_io_mutable_scalar_common_2[49])),
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__prog_io_mutable_scalar_common_2[48])))
  },
  /* row 51 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__prog_io_mutable_scalar_common_2[46]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__prog_io_mutable_scalar_common_3[1])))
  },
  /* row 52 */
  {
    ((MR_Box) (&parse_tree__prog_io_mutable_scalar_common_2[51])),
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__prog_io_mutable_scalar_common_2[50])))
  },
  /* row 53 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__prog_io_mutable_scalar_common_3[1]))),
    ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__prog_io_mutable_scalar_common_2[45])))
  },
  /* row 54 */
  {
    ((MR_Box) (&parse_tree__prog_io_mutable_scalar_common_2[53])),
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__prog_io_mutable_scalar_common_2[52])))
  },
  /* row 55 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__prog_io_mutable_scalar_common_3[1]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__prog_io_mutable_scalar_common_3[2])))
  },
  /* row 56 */
  {
    ((MR_Box) (&parse_tree__prog_io_mutable_scalar_common_2[55])),
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__prog_io_mutable_scalar_common_2[54])))
  },
  /* row 57 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 5)),
    ((MR_Box) ((MR_String) "in"))
  },
  /* row 58 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__prog_io_mutable_scalar_common_2[57]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__prog_io_mutable_scalar_common_2[42])))
  },
  /* row 59 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 5)),
    ((MR_Box) ((MR_String) "Error: unrecognised attribute"))
  },
  /* row 60 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__prog_io_mutable_scalar_common_2[59]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__prog_io_mutable_scalar_common_2[58])))
  },
  /* row 61 */
  {
    ((MR_Box) (&parse_tree__prog_io_mutable_scalar_common_3[3])),
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))))
  },
  /* row 62 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 5)),
    ((MR_Box) ((MR_String) "Error: the type in a"))
  },
  /* row 63 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 13)),
    ((MR_Box) ((MR_String) "mutable"))
  },
  /* row 64 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 5)),
    ((MR_Box) ((MR_String) "declaration cannot contain variables:"))
  },
  /* row 65 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 5)),
    ((MR_Box) ((MR_String) "Error: the inst in a"))
  },
  /* row 66 */
  {
    ((MR_Box) (&parse_tree__prog_io_mutable_scalar_common_3[4])),
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))))
  },
  /* row 67 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 5)),
    ((MR_Box) ((MR_String) "Error: conflicting attributes"))
  },
  /* row 68 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 5)),
    ((MR_Box) ((MR_String) "in attribute list:"))
  },
  /* row 69 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 5)),
    ((MR_Box) ((MR_String) "Error: malformed attribute list"))
  },
  /* row 70 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 5)),
    ((MR_Box) ((MR_String) "in"))
  },
  /* row 71 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 5)),
    ((MR_Box) ((MR_String) "declaration:"))
  },
  /* row 72 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 0)),
    ((MR_Box) ((MR_Integer) 1))
  },
  /* row 73 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 1)),
    ((MR_Box) ((MR_Integer) 1))
  },
  /* row 74 */
  {
    ((MR_Box) (&parse_tree__prog_io_mutable_scalar_common_3[5])),
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))))
  },
  /* row 75 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 5)),
    ((MR_Box) ((MR_String) "Error: the predicate specification in an"))
  },
  /* row 76 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 13)),
    ((MR_Box) ((MR_String) "initialise"))
  },
  /* row 77 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 5)),
    ((MR_Box) ((MR_String) "declaration"))
  },
  /* row 78 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 5)),
    ((MR_Box) ((MR_String) "must specify the predicate\'s arity;"))
  },
  /* row 79 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 5)),
    ((MR_Box) ((MR_String) "Error:"))
  },
  /* row 80 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 5)),
    ((MR_Box) ((MR_String) "declaration specifies a predicate,"))
  },
  /* row 81 */
  {
    ((MR_Box) (&parse_tree__prog_io_mutable_scalar_common_3[6])),
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))))
  },
  /* row 82 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 13)),
    ((MR_Box) ((MR_String) "finalise"))
  },
  /* row 83 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 5)),
    ((MR_Box) ((MR_String) "requires arity, found"))
  },
  /* row 84 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 5)),
    ((MR_Box) ((MR_String) "declaration specifies a predicate"))
  },
  /* row 85 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 5)),
    ((MR_Box) ((MR_String) "whose arity is not zero or two:"))
  },
  /* row 86 */
  {
    ((MR_Box) (&parse_tree__prog_io_mutable_scalar_common_3[7])),
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))))
  },
  /* row 87 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 5)),
    ((MR_Box) ((MR_String) "should have the form"))
  },
  /* row 88 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 5)),
    ((MR_Box) ((MR_String) "or the form"))
  },
};

static /* final */ const MR_Box parse_tree__prog_io_mutable_scalar_common_3[8][1] = {
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
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__prog_io_mutable_scalar_common_2[39])))
  },
  /* row 4 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__prog_io_mutable_scalar_common_2[44])))
  },
  /* row 5 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__prog_io_mutable_scalar_common_2[60])))
  },
  /* row 6 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__prog_io_mutable_scalar_common_2[18])))
  },
  /* row 7 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__prog_io_mutable_scalar_common_2[28])))
  },
};

static /* final */ const MR_Box parse_tree__prog_io_mutable_scalar_common_4[1][5] = {
  /* row 0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 2)),
    ((MR_Box) (&parse_tree__prog_io_mutable__term__pti_term_1__plain_term__type_ctor_info_generic_0)),
    ((MR_Box) (&parse_tree__prog_io_mutable__parse_tree__maybe_error__pti_maybe1_1__plain_parse_tree__prog_io_mutable__type_ctor_info_collected_mutable_attribute_0))
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
    (MR_Word) MR_mkword(MR_mktag(3), &parse_tree__prog_io_mutable_scalar_common_2[72])
  },
  /* row 2 */
  {
    (MR_String) "thread_local",
    (MR_Word) MR_mkword(MR_mktag(3), &parse_tree__prog_io_mutable_scalar_common_2[73])
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



#line 985 "parse_tree.prog_io_mutable.c"
static const MR_FA_PseudoTypeInfo_Struct1 parse_tree__prog_io_mutable__term__pti_term_1__plain_term__type_ctor_info_generic_0 = {
  &mercury__term__term__type_ctor_info_term_1,
  {
    (MR_PseudoTypeInfo) &mercury__term__term__type_ctor_info_generic_0
  }
};

#line 993 "parse_tree.prog_io_mutable.c"
static const MR_FA_PseudoTypeInfo_Struct1 parse_tree__prog_io_mutable__parse_tree__maybe_error__pti_maybe1_1__plain_parse_tree__prog_io_mutable__type_ctor_info_collected_mutable_attribute_0 = {
  &parse_tree__maybe_error__parse_tree__maybe_error__type_ctor_info_maybe1_1,
  {
    (MR_PseudoTypeInfo) &parse_tree__prog_io_mutable__parse_tree__prog_io_mutable__type_ctor_info_collected_mutable_attribute_0
  }
};

#line 1001 "parse_tree.prog_io_mutable.c"
static const MR_PseudoTypeInfo parse_tree__prog_io_mutable__parse_tree__prog_io_mutable__field_types_collected_mutable_attribute_0_0[1] = {
  (MR_PseudoTypeInfo) &parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_mutable_trailed_0
};

#line 1006 "parse_tree.prog_io_mutable.c"
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

#line 1021 "parse_tree.prog_io_mutable.c"
static const MR_PseudoTypeInfo parse_tree__prog_io_mutable__parse_tree__prog_io_mutable__field_types_collected_mutable_attribute_0_1[1] = {
  (MR_PseudoTypeInfo) &parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_foreign_name_0
};

#line 1026 "parse_tree.prog_io_mutable.c"
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

#line 1041 "parse_tree.prog_io_mutable.c"
static const MR_PseudoTypeInfo parse_tree__prog_io_mutable__parse_tree__prog_io_mutable__field_types_collected_mutable_attribute_0_2[1] = {
  (MR_PseudoTypeInfo) &parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_mutable_attach_to_io_state_0
};

#line 1046 "parse_tree.prog_io_mutable.c"
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

#line 1061 "parse_tree.prog_io_mutable.c"
static const MR_PseudoTypeInfo parse_tree__prog_io_mutable__parse_tree__prog_io_mutable__field_types_collected_mutable_attribute_0_3[1] = {
  (MR_PseudoTypeInfo) &parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_mutable_constant_0
};

#line 1066 "parse_tree.prog_io_mutable.c"
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

#line 1081 "parse_tree.prog_io_mutable.c"
static const MR_PseudoTypeInfo parse_tree__prog_io_mutable__parse_tree__prog_io_mutable__field_types_collected_mutable_attribute_0_4[1] = {
  (MR_PseudoTypeInfo) &parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_mutable_thread_local_0
};

#line 1086 "parse_tree.prog_io_mutable.c"
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

#line 1101 "parse_tree.prog_io_mutable.c"
static const MR_DuFunctorDescPtr parse_tree__prog_io_mutable__parse_tree__prog_io_mutable__du_stag_ordered_collected_mutable_attribute_0_0[1] = {
  &parse_tree__prog_io_mutable__parse_tree__prog_io_mutable__du_functor_desc_collected_mutable_attribute_0_1
};

#line 1106 "parse_tree.prog_io_mutable.c"
static const MR_DuFunctorDescPtr parse_tree__prog_io_mutable__parse_tree__prog_io_mutable__du_stag_ordered_collected_mutable_attribute_0_1[1] = {
  &parse_tree__prog_io_mutable__parse_tree__prog_io_mutable__du_functor_desc_collected_mutable_attribute_0_0
};

#line 1111 "parse_tree.prog_io_mutable.c"
static const MR_DuFunctorDescPtr parse_tree__prog_io_mutable__parse_tree__prog_io_mutable__du_stag_ordered_collected_mutable_attribute_0_2[1] = {
  &parse_tree__prog_io_mutable__parse_tree__prog_io_mutable__du_functor_desc_collected_mutable_attribute_0_2
};

#line 1116 "parse_tree.prog_io_mutable.c"
static const MR_DuFunctorDescPtr parse_tree__prog_io_mutable__parse_tree__prog_io_mutable__du_stag_ordered_collected_mutable_attribute_0_3[2] = {
  &parse_tree__prog_io_mutable__parse_tree__prog_io_mutable__du_functor_desc_collected_mutable_attribute_0_3,
  &parse_tree__prog_io_mutable__parse_tree__prog_io_mutable__du_functor_desc_collected_mutable_attribute_0_4
};

#line 1122 "parse_tree.prog_io_mutable.c"
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

#line 1146 "parse_tree.prog_io_mutable.c"
static const MR_DuFunctorDescPtr parse_tree__prog_io_mutable__parse_tree__prog_io_mutable__du_name_ordered_collected_mutable_attribute_0[5] = {
  &parse_tree__prog_io_mutable__parse_tree__prog_io_mutable__du_functor_desc_collected_mutable_attribute_0_2,
  &parse_tree__prog_io_mutable__parse_tree__prog_io_mutable__du_functor_desc_collected_mutable_attribute_0_3,
  &parse_tree__prog_io_mutable__parse_tree__prog_io_mutable__du_functor_desc_collected_mutable_attribute_0_1,
  &parse_tree__prog_io_mutable__parse_tree__prog_io_mutable__du_functor_desc_collected_mutable_attribute_0_4,
  &parse_tree__prog_io_mutable__parse_tree__prog_io_mutable__du_functor_desc_collected_mutable_attribute_0_0
};

#line 1155 "parse_tree.prog_io_mutable.c"
static const MR_Integer parse_tree__prog_io_mutable__parse_tree__prog_io_mutable__functor_number_map_collected_mutable_attribute_0[5] = {
  (MR_Integer) 4,
  (MR_Integer) 2,
  (MR_Integer) 0,
  (MR_Integer) 1,
  (MR_Integer) 3
};

#line 1164 "parse_tree.prog_io_mutable.c"
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

#line 1181 "parse_tree.prog_io_mutable.c"
static const MR_EnumFunctorDesc parse_tree__prog_io_mutable__parse_tree__prog_io_mutable__enum_functor_desc_mutable_locn_0_0 = {
  (MR_String) "mutable_locn_item",
  (MR_Integer) 0
};

#line 1187 "parse_tree.prog_io_mutable.c"
static const MR_EnumFunctorDesc parse_tree__prog_io_mutable__parse_tree__prog_io_mutable__enum_functor_desc_mutable_locn_0_1 = {
  (MR_String) "mutable_locn_in_solver_type",
  (MR_Integer) 1
};

#line 1193 "parse_tree.prog_io_mutable.c"
static const MR_EnumFunctorDescPtr parse_tree__prog_io_mutable__parse_tree__prog_io_mutable__enum_value_ordered_mutable_locn_0[2] = {
  &parse_tree__prog_io_mutable__parse_tree__prog_io_mutable__enum_functor_desc_mutable_locn_0_0,
  &parse_tree__prog_io_mutable__parse_tree__prog_io_mutable__enum_functor_desc_mutable_locn_0_1
};

#line 1199 "parse_tree.prog_io_mutable.c"
static const MR_EnumFunctorDescPtr parse_tree__prog_io_mutable__parse_tree__prog_io_mutable__enum_name_ordered_mutable_locn_0[2] = {
  &parse_tree__prog_io_mutable__parse_tree__prog_io_mutable__enum_functor_desc_mutable_locn_0_1,
  &parse_tree__prog_io_mutable__parse_tree__prog_io_mutable__enum_functor_desc_mutable_locn_0_0
};

#line 1205 "parse_tree.prog_io_mutable.c"
static const MR_Integer parse_tree__prog_io_mutable__parse_tree__prog_io_mutable__functor_number_map_mutable_locn_0[2] = {
  (MR_Integer) 1,
  (MR_Integer) 0
};

#line 1211 "parse_tree.prog_io_mutable.c"
const MR_TypeCtorInfo_Struct parse_tree__prog_io_mutable__parse_tree__prog_io_mutable__type_ctor_info_mutable_locn_0 = {
  (MR_Integer) 0,
  (MR_Integer) 15,
  (MR_Integer) -1,
  mercury__private_builtin__MR_TYPECTOR_REP_ENUM,
  ((MR_Box) (parse_tree__prog_io_mutable____Unify____mutable_locn_0_0_10001)),
  ((MR_Box) (parse_tree__prog_io_mutable____Compare____mutable_locn_0_0_10001)),
  (MR_String) "parse_tree.prog_io_mutable",
  (MR_String) "mutable_locn",
  {     parse_tree__prog_io_mutable__parse_tree__prog_io_mutable__enum_name_ordered_mutable_locn_0 },
  {     parse_tree__prog_io_mutable__parse_tree__prog_io_mutable__enum_value_ordered_mutable_locn_0 },
  (MR_Integer) 2,
  (MR_Integer) 4,
  parse_tree__prog_io_mutable__parse_tree__prog_io_mutable__functor_number_map_mutable_locn_0
};

#line 1228 "parse_tree.prog_io_mutable.c"
static MR_bool MR_CALL 
parse_tree__prog_io_mutable____Unify____collected_mutable_attribute_0_0_10001(
#line 1231 "parse_tree.prog_io_mutable.c"
  MR_Box parse_tree__prog_io_mutable__wrapper_arg_1,
#line 1233 "parse_tree.prog_io_mutable.c"
  MR_Box parse_tree__prog_io_mutable__wrapper_arg_2)
#line 1235 "parse_tree.prog_io_mutable.c"
{
#line 1237 "parse_tree.prog_io_mutable.c"
  {
#line 1239 "parse_tree.prog_io_mutable.c"
    MR_bool parse_tree__prog_io_mutable__succeeded;

#line 1242 "parse_tree.prog_io_mutable.c"
    {
#line 1244 "parse_tree.prog_io_mutable.c"
      parse_tree__prog_io_mutable__succeeded = parse_tree__prog_io_mutable____Unify____collected_mutable_attribute_0_0(((MR_Word) parse_tree__prog_io_mutable__wrapper_arg_1), ((MR_Word) parse_tree__prog_io_mutable__wrapper_arg_2));
    }
#line 1247 "parse_tree.prog_io_mutable.c"
    return parse_tree__prog_io_mutable__succeeded;
#line 1249 "parse_tree.prog_io_mutable.c"
  }
#line 1251 "parse_tree.prog_io_mutable.c"
}

#line 1254 "parse_tree.prog_io_mutable.c"
static void MR_CALL 
parse_tree__prog_io_mutable____Compare____collected_mutable_attribute_0_0_10001(
#line 1257 "parse_tree.prog_io_mutable.c"
  MR_Box * parse_tree__prog_io_mutable__wrapper_arg_1,
#line 1259 "parse_tree.prog_io_mutable.c"
  MR_Box parse_tree__prog_io_mutable__wrapper_arg_2,
#line 1261 "parse_tree.prog_io_mutable.c"
  MR_Box parse_tree__prog_io_mutable__wrapper_arg_3)
#line 1263 "parse_tree.prog_io_mutable.c"
{
#line 1265 "parse_tree.prog_io_mutable.c"
  {
#line 1267 "parse_tree.prog_io_mutable.c"
    MR_Word parse_tree__prog_io_mutable__conv0_HeadVar__1_1;

#line 1270 "parse_tree.prog_io_mutable.c"
    {
#line 1272 "parse_tree.prog_io_mutable.c"
      parse_tree__prog_io_mutable____Compare____collected_mutable_attribute_0_0(&parse_tree__prog_io_mutable__conv0_HeadVar__1_1, ((MR_Word) parse_tree__prog_io_mutable__wrapper_arg_2), ((MR_Word) parse_tree__prog_io_mutable__wrapper_arg_3));
    }
#line 1275 "parse_tree.prog_io_mutable.c"
    *parse_tree__prog_io_mutable__wrapper_arg_1 = ((MR_Box) (parse_tree__prog_io_mutable__conv0_HeadVar__1_1));
#line 1277 "parse_tree.prog_io_mutable.c"
  }
#line 1279 "parse_tree.prog_io_mutable.c"
}

#line 1282 "parse_tree.prog_io_mutable.c"
static MR_bool MR_CALL 
parse_tree__prog_io_mutable____Unify____mutable_locn_0_0_10001(
#line 1285 "parse_tree.prog_io_mutable.c"
  MR_Box parse_tree__prog_io_mutable__wrapper_arg_1,
#line 1287 "parse_tree.prog_io_mutable.c"
  MR_Box parse_tree__prog_io_mutable__wrapper_arg_2)
#line 1289 "parse_tree.prog_io_mutable.c"
{
#line 1291 "parse_tree.prog_io_mutable.c"
  {
#line 1293 "parse_tree.prog_io_mutable.c"
    MR_bool parse_tree__prog_io_mutable__succeeded;

#line 1296 "parse_tree.prog_io_mutable.c"
    {
#line 1298 "parse_tree.prog_io_mutable.c"
      parse_tree__prog_io_mutable__succeeded = parse_tree__prog_io_mutable____Unify____mutable_locn_0_0(((MR_Word) parse_tree__prog_io_mutable__wrapper_arg_1), ((MR_Word) parse_tree__prog_io_mutable__wrapper_arg_2));
    }
#line 1301 "parse_tree.prog_io_mutable.c"
    return parse_tree__prog_io_mutable__succeeded;
#line 1303 "parse_tree.prog_io_mutable.c"
  }
#line 1305 "parse_tree.prog_io_mutable.c"
}

#line 1308 "parse_tree.prog_io_mutable.c"
static void MR_CALL 
parse_tree__prog_io_mutable____Compare____mutable_locn_0_0_10001(
#line 1311 "parse_tree.prog_io_mutable.c"
  MR_Box * parse_tree__prog_io_mutable__wrapper_arg_1,
#line 1313 "parse_tree.prog_io_mutable.c"
  MR_Box parse_tree__prog_io_mutable__wrapper_arg_2,
#line 1315 "parse_tree.prog_io_mutable.c"
  MR_Box parse_tree__prog_io_mutable__wrapper_arg_3)
#line 1317 "parse_tree.prog_io_mutable.c"
{
#line 1319 "parse_tree.prog_io_mutable.c"
  {
#line 1321 "parse_tree.prog_io_mutable.c"
    MR_Word parse_tree__prog_io_mutable__conv0_HeadVar__1_1;

#line 1324 "parse_tree.prog_io_mutable.c"
    {
#line 1326 "parse_tree.prog_io_mutable.c"
      parse_tree__prog_io_mutable____Compare____mutable_locn_0_0(&parse_tree__prog_io_mutable__conv0_HeadVar__1_1, ((MR_Word) parse_tree__prog_io_mutable__wrapper_arg_2), ((MR_Word) parse_tree__prog_io_mutable__wrapper_arg_3));
    }
#line 1329 "parse_tree.prog_io_mutable.c"
    *parse_tree__prog_io_mutable__wrapper_arg_1 = ((MR_Box) (parse_tree__prog_io_mutable__conv0_HeadVar__1_1));
#line 1331 "parse_tree.prog_io_mutable.c"
  }
#line 1333 "parse_tree.prog_io_mutable.c"
}

#line 43 "prog_io_mutable.m"
void MR_CALL 
parse_tree__prog_io_mutable__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_112_97_114_115_101_95_109_117_116_97_98_108_101_95_100_101_99_108_95_105_110_102_111_95_95_91_49_93_95_48_7_p_0(
#line 43 "prog_io_mutable.m"
  MR_Word parse_tree__prog_io_mutable__VarSet_9,
#line 43 "prog_io_mutable.m"
  MR_Word parse_tree__prog_io_mutable__ArgTerms_10,
#line 43 "prog_io_mutable.m"
  MR_Word parse_tree__prog_io_mutable__Context_11,
#line 43 "prog_io_mutable.m"
  MR_Integer parse_tree__prog_io_mutable__SeqNum_12,
#line 43 "prog_io_mutable.m"
  MR_Word parse_tree__prog_io_mutable__MutableLocn_13,
#line 43 "prog_io_mutable.m"
  MR_Word * parse_tree__prog_io_mutable__MaybeItemMutableInfo_14)
#line 43 "prog_io_mutable.m"
{
#line 176 "prog_io_mutable.m"
  {
#line 176 "prog_io_mutable.m"
    MR_bool parse_tree__prog_io_mutable__succeeded = ((MR_tag((MR_Word) parse_tree__prog_io_mutable__ArgTerms_10)) == (MR_mktag((MR_Integer) 1)));
#line 176 "prog_io_mutable.m"
    MR_Word parse_tree__prog_io_mutable__NameTerm_15;
#line 176 "prog_io_mutable.m"
    MR_Word parse_tree__prog_io_mutable__TypeTerm_16;
#line 176 "prog_io_mutable.m"
    MR_Word parse_tree__prog_io_mutable__ValueTerm_17;
#line 176 "prog_io_mutable.m"
    MR_Word parse_tree__prog_io_mutable__InstTerm_18;
#line 176 "prog_io_mutable.m"
    MR_Word parse_tree__prog_io_mutable__MaybeAttrsTerm_20;
#line 177 "prog_io_mutable.m"
    MR_Word parse_tree__prog_io_mutable__OptMutAttrsTerm_19;
#line 177 "prog_io_mutable.m"
    MR_Word parse_tree__prog_io_mutable__V_42_42;
#line 177 "prog_io_mutable.m"
    MR_Word parse_tree__prog_io_mutable__V_43_43;
#line 177 "prog_io_mutable.m"
    MR_Word parse_tree__prog_io_mutable__V_44_44;

#line 177 "prog_io_mutable.m"
    if (parse_tree__prog_io_mutable__succeeded)
#line 177 "prog_io_mutable.m"
      {
#line 177 "prog_io_mutable.m"
        parse_tree__prog_io_mutable__NameTerm_15 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_mutable__ArgTerms_10, (MR_Integer) 0)));
#line 177 "prog_io_mutable.m"
        parse_tree__prog_io_mutable__V_42_42 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_mutable__ArgTerms_10, (MR_Integer) 1)));
#line 177 "prog_io_mutable.m"
        parse_tree__prog_io_mutable__succeeded = ((MR_tag((MR_Word) parse_tree__prog_io_mutable__V_42_42)) == (MR_mktag((MR_Integer) 1)));
#line 177 "prog_io_mutable.m"
        if (parse_tree__prog_io_mutable__succeeded)
#line 177 "prog_io_mutable.m"
          {
#line 177 "prog_io_mutable.m"
            parse_tree__prog_io_mutable__TypeTerm_16 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_mutable__V_42_42, (MR_Integer) 0)));
#line 177 "prog_io_mutable.m"
            parse_tree__prog_io_mutable__V_43_43 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_mutable__V_42_42, (MR_Integer) 1)));
#line 177 "prog_io_mutable.m"
            parse_tree__prog_io_mutable__succeeded = ((MR_tag((MR_Word) parse_tree__prog_io_mutable__V_43_43)) == (MR_mktag((MR_Integer) 1)));
#line 177 "prog_io_mutable.m"
            if (parse_tree__prog_io_mutable__succeeded)
#line 177 "prog_io_mutable.m"
              {
#line 177 "prog_io_mutable.m"
                parse_tree__prog_io_mutable__ValueTerm_17 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_mutable__V_43_43, (MR_Integer) 0)));
#line 177 "prog_io_mutable.m"
                parse_tree__prog_io_mutable__V_44_44 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_mutable__V_43_43, (MR_Integer) 1)));
#line 177 "prog_io_mutable.m"
                parse_tree__prog_io_mutable__succeeded = ((MR_tag((MR_Word) parse_tree__prog_io_mutable__V_44_44)) == (MR_mktag((MR_Integer) 1)));
#line 177 "prog_io_mutable.m"
                if (parse_tree__prog_io_mutable__succeeded)
#line 177 "prog_io_mutable.m"
                  {
#line 177 "prog_io_mutable.m"
                    parse_tree__prog_io_mutable__InstTerm_18 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_mutable__V_44_44, (MR_Integer) 0)));
#line 177 "prog_io_mutable.m"
                    parse_tree__prog_io_mutable__OptMutAttrsTerm_19 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_mutable__V_44_44, (MR_Integer) 1)));
#line 182 "prog_io_mutable.m"
                    if ((parse_tree__prog_io_mutable__OptMutAttrsTerm_19 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 181 "prog_io_mutable.m"
                      {
#line 181 "prog_io_mutable.m"
                        parse_tree__prog_io_mutable__MaybeAttrsTerm_20 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 181 "prog_io_mutable.m"
                        parse_tree__prog_io_mutable__succeeded = MR_TRUE;
#line 181 "prog_io_mutable.m"
                      }
#line 182 "prog_io_mutable.m"
                    else
#line 183 "prog_io_mutable.m"
                      {
#line 183 "prog_io_mutable.m"
                        MR_Word parse_tree__prog_io_mutable__MutAttrsTerm0_21 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_mutable__OptMutAttrsTerm_19, (MR_Integer) 0)));
#line 183 "prog_io_mutable.m"
                        MR_Word parse_tree__prog_io_mutable__V_45_45 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_mutable__OptMutAttrsTerm_19, (MR_Integer) 1)));

#line 183 "prog_io_mutable.m"
                        parse_tree__prog_io_mutable__succeeded = (parse_tree__prog_io_mutable__V_45_45 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 183 "prog_io_mutable.m"
                        if (parse_tree__prog_io_mutable__succeeded)
#line 183 "prog_io_mutable.m"
                          {
#line 184 "prog_io_mutable.m"
                            {
#line 184 "prog_io_mutable.m"
                              parse_tree__prog_io_mutable__MaybeAttrsTerm_20 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 184 "prog_io_mutable.m"
                              MR_hl_field(MR_mktag(1), parse_tree__prog_io_mutable__MaybeAttrsTerm_20, 0) = ((MR_Box) (parse_tree__prog_io_mutable__MutAttrsTerm0_21));
#line 184 "prog_io_mutable.m"
                            }
#line 184 "prog_io_mutable.m"
                            parse_tree__prog_io_mutable__succeeded = MR_TRUE;
#line 183 "prog_io_mutable.m"
                          }
#line 183 "prog_io_mutable.m"
                      }
#line 177 "prog_io_mutable.m"
                  }
#line 177 "prog_io_mutable.m"
              }
#line 177 "prog_io_mutable.m"
          }
#line 177 "prog_io_mutable.m"
      }
#line 176 "prog_io_mutable.m"
    if (parse_tree__prog_io_mutable__succeeded)
#line 187 "prog_io_mutable.m"
      {
#line 187 "prog_io_mutable.m"
        MR_Word parse_tree__prog_io_mutable__TypeCtorInfo_104_104;
#line 187 "prog_io_mutable.m"
        MR_Word parse_tree__prog_io_mutable__TypeCtorInfo_105_105;
#line 187 "prog_io_mutable.m"
        MR_Word parse_tree__prog_io_mutable__MaybeName_22;
#line 187 "prog_io_mutable.m"
        MR_Word parse_tree__prog_io_mutable__MaybeType_23;
#line 187 "prog_io_mutable.m"
        MR_Word parse_tree__prog_io_mutable__Value_24;
#line 187 "prog_io_mutable.m"
        MR_Word parse_tree__prog_io_mutable__ProgVarSet_25;
#line 187 "prog_io_mutable.m"
        MR_Word parse_tree__prog_io_mutable__MaybeInst_26;
#line 187 "prog_io_mutable.m"
        MR_Word parse_tree__prog_io_mutable__MaybeMutAttrs_27;
#line 200 "prog_io_mutable.m"
        MR_String parse_tree__prog_io_mutable__Name_29;
#line 200 "prog_io_mutable.m"
        MR_Word parse_tree__prog_io_mutable__Type_30;
#line 200 "prog_io_mutable.m"
        MR_Word parse_tree__prog_io_mutable__Inst_31;
#line 200 "prog_io_mutable.m"
        MR_Word parse_tree__prog_io_mutable__MutAttrs_32;

#line 187 "prog_io_mutable.m"
        {
#line 187 "prog_io_mutable.m"
          parse_tree__prog_io_mutable__parse_mutable_name_2_p_0(parse_tree__prog_io_mutable__NameTerm_15, &parse_tree__prog_io_mutable__MaybeName_22);
        }
#line 188 "prog_io_mutable.m"
        {
#line 188 "prog_io_mutable.m"
          parse_tree__prog_io_mutable__parse_mutable_type_3_p_0(parse_tree__prog_io_mutable__VarSet_9, parse_tree__prog_io_mutable__TypeTerm_16, &parse_tree__prog_io_mutable__MaybeType_23);
        }
#line 1500 "parse_tree.prog_io_mutable.c"
        parse_tree__prog_io_mutable__TypeCtorInfo_104_104 = (MR_Word) &mercury__term__term__type_ctor_info_generic_0;
#line 1502 "parse_tree.prog_io_mutable.c"
        parse_tree__prog_io_mutable__TypeCtorInfo_105_105 = (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0;
#line 189 "prog_io_mutable.m"
        {
#line 189 "prog_io_mutable.m"
          mercury__term__coerce_2_p_0(parse_tree__prog_io_mutable__TypeCtorInfo_104_104, parse_tree__prog_io_mutable__TypeCtorInfo_105_105, parse_tree__prog_io_mutable__ValueTerm_17, &parse_tree__prog_io_mutable__Value_24);
        }
#line 190 "prog_io_mutable.m"
        {
#line 190 "prog_io_mutable.m"
          mercury__varset__coerce_2_p_0(parse_tree__prog_io_mutable__TypeCtorInfo_104_104, parse_tree__prog_io_mutable__TypeCtorInfo_105_105, parse_tree__prog_io_mutable__VarSet_9, &parse_tree__prog_io_mutable__ProgVarSet_25);
        }
#line 191 "prog_io_mutable.m"
        {
#line 191 "prog_io_mutable.m"
          parse_tree__prog_io_mutable__parse_mutable_inst_3_p_0(parse_tree__prog_io_mutable__VarSet_9, parse_tree__prog_io_mutable__InstTerm_18, &parse_tree__prog_io_mutable__MaybeInst_26);
        }
#line 196 "prog_io_mutable.m"
        if ((parse_tree__prog_io_mutable__MaybeAttrsTerm_20 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 194 "prog_io_mutable.m"
          {
#line 194 "prog_io_mutable.m"
            MR_Word parse_tree__prog_io_mutable__V_46_46;

#line 195 "prog_io_mutable.m"
            {
#line 195 "prog_io_mutable.m"
              parse_tree__prog_io_mutable__V_46_46 = parse_tree__prog_item__default_mutable_attributes_0_f_0();
            }
#line 195 "prog_io_mutable.m"
            {
#line 195 "prog_io_mutable.m"
              parse_tree__prog_io_mutable__MaybeMutAttrs_27 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 195 "prog_io_mutable.m"
              MR_hl_field(MR_mktag(1), parse_tree__prog_io_mutable__MaybeMutAttrs_27, 0) = ((MR_Box) (parse_tree__prog_io_mutable__V_46_46));
#line 195 "prog_io_mutable.m"
            }
#line 194 "prog_io_mutable.m"
          }
#line 196 "prog_io_mutable.m"
        else
#line 197 "prog_io_mutable.m"
          {
#line 197 "prog_io_mutable.m"
            MR_Word parse_tree__prog_io_mutable__MutAttrsTerm_28 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_mutable__MaybeAttrsTerm_20, (MR_Integer) 0)));

#line 198 "prog_io_mutable.m"
            {
#line 198 "prog_io_mutable.m"
              parse_tree__prog_io_mutable__parse_mutable_attrs_3_p_0(parse_tree__prog_io_mutable__VarSet_9, parse_tree__prog_io_mutable__MutAttrsTerm_28, &parse_tree__prog_io_mutable__MaybeMutAttrs_27);
            }
#line 197 "prog_io_mutable.m"
          }
#line 201 "prog_io_mutable.m"
        parse_tree__prog_io_mutable__succeeded = ((MR_tag((MR_Word) parse_tree__prog_io_mutable__MaybeName_22)) == (MR_mktag((MR_Integer) 1)));
#line 201 "prog_io_mutable.m"
        if (parse_tree__prog_io_mutable__succeeded)
#line 201 "prog_io_mutable.m"
          {
#line 201 "prog_io_mutable.m"
            parse_tree__prog_io_mutable__Name_29 = ((MR_String) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_mutable__MaybeName_22, (MR_Integer) 0)));
#line 202 "prog_io_mutable.m"
            parse_tree__prog_io_mutable__succeeded = ((MR_tag((MR_Word) parse_tree__prog_io_mutable__MaybeType_23)) == (MR_mktag((MR_Integer) 1)));
#line 202 "prog_io_mutable.m"
            if (parse_tree__prog_io_mutable__succeeded)
#line 202 "prog_io_mutable.m"
              {
#line 202 "prog_io_mutable.m"
                parse_tree__prog_io_mutable__Type_30 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_mutable__MaybeType_23, (MR_Integer) 0)));
#line 203 "prog_io_mutable.m"
                parse_tree__prog_io_mutable__succeeded = ((MR_tag((MR_Word) parse_tree__prog_io_mutable__MaybeInst_26)) == (MR_mktag((MR_Integer) 1)));
#line 203 "prog_io_mutable.m"
                if (parse_tree__prog_io_mutable__succeeded)
#line 203 "prog_io_mutable.m"
                  {
#line 203 "prog_io_mutable.m"
                    parse_tree__prog_io_mutable__Inst_31 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_mutable__MaybeInst_26, (MR_Integer) 0)));
#line 204 "prog_io_mutable.m"
                    parse_tree__prog_io_mutable__succeeded = ((MR_tag((MR_Word) parse_tree__prog_io_mutable__MaybeMutAttrs_27)) == (MR_mktag((MR_Integer) 1)));
#line 204 "prog_io_mutable.m"
                    if (parse_tree__prog_io_mutable__succeeded)
#line 204 "prog_io_mutable.m"
                      parse_tree__prog_io_mutable__MutAttrs_32 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_mutable__MaybeMutAttrs_27, (MR_Integer) 0)));
#line 203 "prog_io_mutable.m"
                  }
#line 202 "prog_io_mutable.m"
              }
#line 201 "prog_io_mutable.m"
          }
#line 200 "prog_io_mutable.m"
        if (parse_tree__prog_io_mutable__succeeded)
#line 213 "prog_io_mutable.m"
          {
#line 213 "prog_io_mutable.m"
            MR_Word parse_tree__prog_io_mutable__ItemMutableInfo_33;

#line 212 "prog_io_mutable.m"
            {
#line 212 "prog_io_mutable.m"
              parse_tree__prog_io_mutable__ItemMutableInfo_33 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 10 * sizeof(MR_Word)), NULL, NULL);
#line 212 "prog_io_mutable.m"
              MR_hl_field(MR_mktag(0), parse_tree__prog_io_mutable__ItemMutableInfo_33, 0) = ((MR_Box) (parse_tree__prog_io_mutable__Name_29));
#line 212 "prog_io_mutable.m"
              MR_hl_field(MR_mktag(0), parse_tree__prog_io_mutable__ItemMutableInfo_33, 1) = ((MR_Box) (parse_tree__prog_io_mutable__Type_30));
#line 212 "prog_io_mutable.m"
              MR_hl_field(MR_mktag(0), parse_tree__prog_io_mutable__ItemMutableInfo_33, 2) = ((MR_Box) (parse_tree__prog_io_mutable__Type_30));
#line 212 "prog_io_mutable.m"
              MR_hl_field(MR_mktag(0), parse_tree__prog_io_mutable__ItemMutableInfo_33, 3) = ((MR_Box) (parse_tree__prog_io_mutable__Inst_31));
#line 212 "prog_io_mutable.m"
              MR_hl_field(MR_mktag(0), parse_tree__prog_io_mutable__ItemMutableInfo_33, 4) = ((MR_Box) (parse_tree__prog_io_mutable__Inst_31));
#line 212 "prog_io_mutable.m"
              MR_hl_field(MR_mktag(0), parse_tree__prog_io_mutable__ItemMutableInfo_33, 5) = ((MR_Box) (parse_tree__prog_io_mutable__Value_24));
#line 212 "prog_io_mutable.m"
              MR_hl_field(MR_mktag(0), parse_tree__prog_io_mutable__ItemMutableInfo_33, 6) = ((MR_Box) (parse_tree__prog_io_mutable__ProgVarSet_25));
#line 212 "prog_io_mutable.m"
              MR_hl_field(MR_mktag(0), parse_tree__prog_io_mutable__ItemMutableInfo_33, 7) = ((MR_Box) (parse_tree__prog_io_mutable__MutAttrs_32));
#line 212 "prog_io_mutable.m"
              MR_hl_field(MR_mktag(0), parse_tree__prog_io_mutable__ItemMutableInfo_33, 8) = ((MR_Box) (parse_tree__prog_io_mutable__Context_11));
#line 212 "prog_io_mutable.m"
              MR_hl_field(MR_mktag(0), parse_tree__prog_io_mutable__ItemMutableInfo_33, 9) = ((MR_Box) (parse_tree__prog_io_mutable__SeqNum_12));
#line 212 "prog_io_mutable.m"
            }
#line 214 "prog_io_mutable.m"
            {
#line 214 "prog_io_mutable.m"
              MR_Word base;
#line 214 "prog_io_mutable.m"
              base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 214 "prog_io_mutable.m"
              *parse_tree__prog_io_mutable__MaybeItemMutableInfo_14 = base;
#line 214 "prog_io_mutable.m"
              MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (parse_tree__prog_io_mutable__ItemMutableInfo_33));
#line 214 "prog_io_mutable.m"
            }
#line 213 "prog_io_mutable.m"
          }
#line 200 "prog_io_mutable.m"
        else
#line 217 "prog_io_mutable.m"
          {
#line 217 "prog_io_mutable.m"
            MR_Word parse_tree__prog_io_mutable__TypeCtorInfo_106_106 = (MR_Word) &parse_tree__error_util__parse_tree__error_util__type_ctor_info_error_spec_0;
#line 217 "prog_io_mutable.m"
            MR_Word parse_tree__prog_io_mutable__Specs_34;
#line 217 "prog_io_mutable.m"
            MR_Word parse_tree__prog_io_mutable__V_49_49;
#line 217 "prog_io_mutable.m"
            MR_Word parse_tree__prog_io_mutable__V_50_50;
#line 217 "prog_io_mutable.m"
            MR_Word parse_tree__prog_io_mutable__V_51_51;
#line 217 "prog_io_mutable.m"
            MR_Word parse_tree__prog_io_mutable__V_52_52;
#line 217 "prog_io_mutable.m"
            MR_Word parse_tree__prog_io_mutable__V_53_53;
#line 217 "prog_io_mutable.m"
            MR_Word parse_tree__prog_io_mutable__V_54_54;

#line 216 "prog_io_mutable.m"
            {
#line 216 "prog_io_mutable.m"
              parse_tree__prog_io_mutable__V_49_49 = parse_tree__maybe_error__get_any_errors1_1_f_0((MR_Word) &mercury__builtin__builtin__type_ctor_info_string_0, parse_tree__prog_io_mutable__MaybeName_22);
            }
#line 216 "prog_io_mutable.m"
            {
#line 216 "prog_io_mutable.m"
              parse_tree__prog_io_mutable__V_51_51 = parse_tree__maybe_error__get_any_errors1_1_f_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0, parse_tree__prog_io_mutable__MaybeType_23);
            }
#line 217 "prog_io_mutable.m"
            {
#line 217 "prog_io_mutable.m"
              parse_tree__prog_io_mutable__V_53_53 = parse_tree__maybe_error__get_any_errors1_1_f_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_inst_0, parse_tree__prog_io_mutable__MaybeInst_26);
            }
#line 217 "prog_io_mutable.m"
            {
#line 217 "prog_io_mutable.m"
              parse_tree__prog_io_mutable__V_54_54 = parse_tree__maybe_error__get_any_errors1_1_f_0((MR_Word) &parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_mutable_var_attributes_0, parse_tree__prog_io_mutable__MaybeMutAttrs_27);
            }
#line 217 "prog_io_mutable.m"
            {
#line 217 "prog_io_mutable.m"
              parse_tree__prog_io_mutable__V_52_52 = mercury__list__f_43_43_2_f_0(parse_tree__prog_io_mutable__TypeCtorInfo_106_106, parse_tree__prog_io_mutable__V_53_53, parse_tree__prog_io_mutable__V_54_54);
            }
#line 216 "prog_io_mutable.m"
            {
#line 216 "prog_io_mutable.m"
              parse_tree__prog_io_mutable__V_50_50 = mercury__list__f_43_43_2_f_0(parse_tree__prog_io_mutable__TypeCtorInfo_106_106, parse_tree__prog_io_mutable__V_51_51, parse_tree__prog_io_mutable__V_52_52);
            }
#line 216 "prog_io_mutable.m"
            {
#line 216 "prog_io_mutable.m"
              parse_tree__prog_io_mutable__Specs_34 = mercury__list__f_43_43_2_f_0(parse_tree__prog_io_mutable__TypeCtorInfo_106_106, parse_tree__prog_io_mutable__V_49_49, parse_tree__prog_io_mutable__V_50_50);
            }
#line 218 "prog_io_mutable.m"
            {
#line 218 "prog_io_mutable.m"
              MR_Word base;
#line 218 "prog_io_mutable.m"
              base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 218 "prog_io_mutable.m"
              *parse_tree__prog_io_mutable__MaybeItemMutableInfo_14 = base;
#line 218 "prog_io_mutable.m"
              MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (parse_tree__prog_io_mutable__Specs_34));
#line 218 "prog_io_mutable.m"
            }
#line 217 "prog_io_mutable.m"
          }
#line 187 "prog_io_mutable.m"
      }
#line 176 "prog_io_mutable.m"
    else
#line 221 "prog_io_mutable.m"
      {
#line 221 "prog_io_mutable.m"
        MR_Word parse_tree__prog_io_mutable__WhatPieces_37;
#line 221 "prog_io_mutable.m"
        MR_String parse_tree__prog_io_mutable__Prefix_38;
#line 221 "prog_io_mutable.m"
        MR_String parse_tree__prog_io_mutable__Suffix1_39;
#line 221 "prog_io_mutable.m"
        MR_Word parse_tree__prog_io_mutable__Pieces_40;
#line 221 "prog_io_mutable.m"
        MR_Word parse_tree__prog_io_mutable__Spec_41;
#line 221 "prog_io_mutable.m"
        MR_Word parse_tree__prog_io_mutable__V_73_73;
#line 221 "prog_io_mutable.m"
        MR_Word parse_tree__prog_io_mutable__V_76_76;
#line 221 "prog_io_mutable.m"
        MR_Word parse_tree__prog_io_mutable__V_79_79;
#line 221 "prog_io_mutable.m"
        MR_Word parse_tree__prog_io_mutable__V_80_80;
#line 221 "prog_io_mutable.m"
        MR_String parse_tree__prog_io_mutable__V_81_81;
#line 221 "prog_io_mutable.m"
        MR_String parse_tree__prog_io_mutable__V_82_82;
#line 221 "prog_io_mutable.m"
        MR_Word parse_tree__prog_io_mutable__V_83_83;
#line 221 "prog_io_mutable.m"
        MR_Word parse_tree__prog_io_mutable__V_86_86;
#line 221 "prog_io_mutable.m"
        MR_Word parse_tree__prog_io_mutable__V_87_87;
#line 221 "prog_io_mutable.m"
        MR_String parse_tree__prog_io_mutable__V_88_88;
#line 221 "prog_io_mutable.m"
        MR_Word parse_tree__prog_io_mutable__V_96_96;
#line 221 "prog_io_mutable.m"
        MR_Word parse_tree__prog_io_mutable__V_97_97;
#line 221 "prog_io_mutable.m"
        MR_Word parse_tree__prog_io_mutable__V_98_98;
#line 221 "prog_io_mutable.m"
        MR_Word parse_tree__prog_io_mutable__V_99_99;
#line 221 "prog_io_mutable.m"
        MR_Word parse_tree__prog_io_mutable__V_102_102;

#line 228 "prog_io_mutable.m"
#line 228 "prog_io_mutable.m"
        switch (parse_tree__prog_io_mutable__MutableLocn_13) {
#line 228 "prog_io_mutable.m"
          default: /*NOTREACHED*/ MR_assert(0);
#line 228 "prog_io_mutable.m"
          case (MR_Integer) 1:
#line 229 "prog_io_mutable.m"
            {
#line 230 "prog_io_mutable.m"
              parse_tree__prog_io_mutable__WhatPieces_37 = (MR_Word) MR_mkword(MR_mktag(1), &parse_tree__prog_io_mutable_scalar_common_2[34]);
#line 232 "prog_io_mutable.m"
              parse_tree__prog_io_mutable__Prefix_38 = (MR_String) "";
#line 233 "prog_io_mutable.m"
              parse_tree__prog_io_mutable__Suffix1_39 = (MR_String) "";
#line 229 "prog_io_mutable.m"
            }
#line 228 "prog_io_mutable.m"
            break;
#line 228 "prog_io_mutable.m"
          case (MR_Integer) 0:
#line 224 "prog_io_mutable.m"
            {
#line 225 "prog_io_mutable.m"
              parse_tree__prog_io_mutable__WhatPieces_37 = (MR_Word) MR_mkword(MR_mktag(1), &parse_tree__prog_io_mutable_scalar_common_2[37]);
#line 226 "prog_io_mutable.m"
              parse_tree__prog_io_mutable__Prefix_38 = (MR_String) ":- ";
#line 227 "prog_io_mutable.m"
              parse_tree__prog_io_mutable__Suffix1_39 = (MR_String) ".";
#line 224 "prog_io_mutable.m"
            }
#line 228 "prog_io_mutable.m"
            break;
#line 228 "prog_io_mutable.m"
        }
#line 235 "prog_io_mutable.m"
        {
#line 235 "prog_io_mutable.m"
          parse_tree__prog_io_mutable__V_73_73 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 235 "prog_io_mutable.m"
          MR_hl_field(MR_mktag(1), parse_tree__prog_io_mutable__V_73_73, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__prog_io_mutable_scalar_common_2[79])));
#line 235 "prog_io_mutable.m"
          MR_hl_field(MR_mktag(1), parse_tree__prog_io_mutable__V_73_73, 1) = ((MR_Box) (parse_tree__prog_io_mutable__WhatPieces_37));
#line 235 "prog_io_mutable.m"
        }
#line 236 "prog_io_mutable.m"
        {
#line 236 "prog_io_mutable.m"
          parse_tree__prog_io_mutable__V_82_82 = mercury__string__f_43_43_2_f_0((MR_String) "mutable(name, type, init_value, inst)", parse_tree__prog_io_mutable__Suffix1_39);
        }
#line 236 "prog_io_mutable.m"
        {
#line 236 "prog_io_mutable.m"
          parse_tree__prog_io_mutable__V_81_81 = mercury__string__f_43_43_2_f_0(parse_tree__prog_io_mutable__Prefix_38, parse_tree__prog_io_mutable__V_82_82);
        }
#line 236 "prog_io_mutable.m"
        {
#line 236 "prog_io_mutable.m"
          parse_tree__prog_io_mutable__V_80_80 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 236 "prog_io_mutable.m"
          MR_hl_field(MR_mktag(3), parse_tree__prog_io_mutable__V_80_80, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 0));
#line 236 "prog_io_mutable.m"
          MR_hl_field(MR_mktag(3), parse_tree__prog_io_mutable__V_80_80, 1) = ((MR_Box) (parse_tree__prog_io_mutable__V_81_81));
#line 236 "prog_io_mutable.m"
        }
#line 237 "prog_io_mutable.m"
        {
#line 237 "prog_io_mutable.m"
          parse_tree__prog_io_mutable__V_88_88 = mercury__string__f_43_43_2_f_0(parse_tree__prog_io_mutable__Prefix_38, (MR_String) "mutable(name, type, init_value, inst, [attr1, ...]).");
        }
#line 237 "prog_io_mutable.m"
        {
#line 237 "prog_io_mutable.m"
          parse_tree__prog_io_mutable__V_87_87 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 237 "prog_io_mutable.m"
          MR_hl_field(MR_mktag(3), parse_tree__prog_io_mutable__V_87_87, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 0));
#line 237 "prog_io_mutable.m"
          MR_hl_field(MR_mktag(3), parse_tree__prog_io_mutable__V_87_87, 1) = ((MR_Box) (parse_tree__prog_io_mutable__V_88_88));
#line 237 "prog_io_mutable.m"
        }
#line 237 "prog_io_mutable.m"
        {
#line 237 "prog_io_mutable.m"
          parse_tree__prog_io_mutable__V_86_86 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 237 "prog_io_mutable.m"
          MR_hl_field(MR_mktag(1), parse_tree__prog_io_mutable__V_86_86, 0) = ((MR_Box) (parse_tree__prog_io_mutable__V_87_87));
#line 237 "prog_io_mutable.m"
          MR_hl_field(MR_mktag(1), parse_tree__prog_io_mutable__V_86_86, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__prog_io_mutable_scalar_common_2[0])));
#line 237 "prog_io_mutable.m"
        }
#line 237 "prog_io_mutable.m"
        {
#line 237 "prog_io_mutable.m"
          parse_tree__prog_io_mutable__V_83_83 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 237 "prog_io_mutable.m"
          MR_hl_field(MR_mktag(1), parse_tree__prog_io_mutable__V_83_83, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__prog_io_mutable_scalar_common_2[88])));
#line 237 "prog_io_mutable.m"
          MR_hl_field(MR_mktag(1), parse_tree__prog_io_mutable__V_83_83, 1) = ((MR_Box) (parse_tree__prog_io_mutable__V_86_86));
#line 237 "prog_io_mutable.m"
        }
#line 236 "prog_io_mutable.m"
        {
#line 236 "prog_io_mutable.m"
          parse_tree__prog_io_mutable__V_79_79 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 236 "prog_io_mutable.m"
          MR_hl_field(MR_mktag(1), parse_tree__prog_io_mutable__V_79_79, 0) = ((MR_Box) (parse_tree__prog_io_mutable__V_80_80));
#line 236 "prog_io_mutable.m"
          MR_hl_field(MR_mktag(1), parse_tree__prog_io_mutable__V_79_79, 1) = ((MR_Box) (parse_tree__prog_io_mutable__V_83_83));
#line 236 "prog_io_mutable.m"
        }
#line 236 "prog_io_mutable.m"
        {
#line 236 "prog_io_mutable.m"
          parse_tree__prog_io_mutable__V_76_76 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 236 "prog_io_mutable.m"
          MR_hl_field(MR_mktag(1), parse_tree__prog_io_mutable__V_76_76, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__prog_io_mutable_scalar_common_2[87])));
#line 236 "prog_io_mutable.m"
          MR_hl_field(MR_mktag(1), parse_tree__prog_io_mutable__V_76_76, 1) = ((MR_Box) (parse_tree__prog_io_mutable__V_79_79));
#line 236 "prog_io_mutable.m"
        }
#line 235 "prog_io_mutable.m"
        {
#line 235 "prog_io_mutable.m"
          parse_tree__prog_io_mutable__Pieces_40 = mercury__list__f_43_43_2_f_0((MR_Word) &parse_tree__error_util__parse_tree__error_util__type_ctor_info_format_component_0, parse_tree__prog_io_mutable__V_73_73, parse_tree__prog_io_mutable__V_76_76);
        }
#line 239 "prog_io_mutable.m"
        {
#line 239 "prog_io_mutable.m"
          parse_tree__prog_io_mutable__V_99_99 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 239 "prog_io_mutable.m"
          MR_hl_field(MR_mktag(0), parse_tree__prog_io_mutable__V_99_99, 0) = ((MR_Box) (parse_tree__prog_io_mutable__Pieces_40));
#line 239 "prog_io_mutable.m"
        }
#line 239 "prog_io_mutable.m"
        {
#line 239 "prog_io_mutable.m"
          parse_tree__prog_io_mutable__V_98_98 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 239 "prog_io_mutable.m"
          MR_hl_field(MR_mktag(1), parse_tree__prog_io_mutable__V_98_98, 0) = ((MR_Box) (parse_tree__prog_io_mutable__V_99_99));
#line 239 "prog_io_mutable.m"
          MR_hl_field(MR_mktag(1), parse_tree__prog_io_mutable__V_98_98, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 239 "prog_io_mutable.m"
        }
#line 239 "prog_io_mutable.m"
        {
#line 239 "prog_io_mutable.m"
          parse_tree__prog_io_mutable__V_97_97 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 239 "prog_io_mutable.m"
          MR_hl_field(MR_mktag(0), parse_tree__prog_io_mutable__V_97_97, 0) = ((MR_Box) (parse_tree__prog_io_mutable__Context_11));
#line 239 "prog_io_mutable.m"
          MR_hl_field(MR_mktag(0), parse_tree__prog_io_mutable__V_97_97, 1) = ((MR_Box) (parse_tree__prog_io_mutable__V_98_98));
#line 239 "prog_io_mutable.m"
        }
#line 239 "prog_io_mutable.m"
        {
#line 239 "prog_io_mutable.m"
          parse_tree__prog_io_mutable__V_96_96 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 239 "prog_io_mutable.m"
          MR_hl_field(MR_mktag(1), parse_tree__prog_io_mutable__V_96_96, 0) = ((MR_Box) (parse_tree__prog_io_mutable__V_97_97));
#line 239 "prog_io_mutable.m"
          MR_hl_field(MR_mktag(1), parse_tree__prog_io_mutable__V_96_96, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 239 "prog_io_mutable.m"
        }
#line 238 "prog_io_mutable.m"
        {
#line 238 "prog_io_mutable.m"
          parse_tree__prog_io_mutable__Spec_41 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 238 "prog_io_mutable.m"
          MR_hl_field(MR_mktag(0), parse_tree__prog_io_mutable__Spec_41, 0) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 238 "prog_io_mutable.m"
          MR_hl_field(MR_mktag(0), parse_tree__prog_io_mutable__Spec_41, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 3))));
#line 238 "prog_io_mutable.m"
          MR_hl_field(MR_mktag(0), parse_tree__prog_io_mutable__Spec_41, 2) = ((MR_Box) (parse_tree__prog_io_mutable__V_96_96));
#line 238 "prog_io_mutable.m"
        }
#line 240 "prog_io_mutable.m"
        {
#line 240 "prog_io_mutable.m"
          parse_tree__prog_io_mutable__V_102_102 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 240 "prog_io_mutable.m"
          MR_hl_field(MR_mktag(1), parse_tree__prog_io_mutable__V_102_102, 0) = ((MR_Box) (parse_tree__prog_io_mutable__Spec_41));
#line 240 "prog_io_mutable.m"
          MR_hl_field(MR_mktag(1), parse_tree__prog_io_mutable__V_102_102, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 240 "prog_io_mutable.m"
        }
#line 240 "prog_io_mutable.m"
        {
#line 240 "prog_io_mutable.m"
          MR_Word base;
#line 240 "prog_io_mutable.m"
          base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 240 "prog_io_mutable.m"
          *parse_tree__prog_io_mutable__MaybeItemMutableInfo_14 = base;
#line 240 "prog_io_mutable.m"
          MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (parse_tree__prog_io_mutable__V_102_102));
#line 240 "prog_io_mutable.m"
        }
#line 221 "prog_io_mutable.m"
      }
#line 176 "prog_io_mutable.m"
  }
#line 43 "prog_io_mutable.m"
}

#line 34 "prog_io_mutable.m"
void MR_CALL 
parse_tree__prog_io_mutable__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_112_97_114_115_101_95_109_117_116_97_98_108_101_95_105_116_101_109_95_95_91_49_93_95_48_6_p_0(
#line 34 "prog_io_mutable.m"
  MR_Word parse_tree__prog_io_mutable__VarSet_8,
#line 34 "prog_io_mutable.m"
  MR_Word parse_tree__prog_io_mutable__ArgTerms_9,
#line 34 "prog_io_mutable.m"
  MR_Word parse_tree__prog_io_mutable__Context_10,
#line 34 "prog_io_mutable.m"
  MR_Integer parse_tree__prog_io_mutable__SeqNum_11,
#line 34 "prog_io_mutable.m"
  MR_Word * parse_tree__prog_io_mutable__MaybeIOM_12)
#line 34 "prog_io_mutable.m"
{
#line 161 "prog_io_mutable.m"
  {
#line 161 "prog_io_mutable.m"
    MR_bool parse_tree__prog_io_mutable__succeeded;
#line 161 "prog_io_mutable.m"
    MR_Word parse_tree__prog_io_mutable__MaybeItemMutableInfo_13;

#line 162 "prog_io_mutable.m"
    {
#line 162 "prog_io_mutable.m"
      parse_tree__prog_io_mutable__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_112_97_114_115_101_95_109_117_116_97_98_108_101_95_100_101_99_108_95_105_110_102_111_95_95_91_49_93_95_48_7_p_0(parse_tree__prog_io_mutable__VarSet_8, parse_tree__prog_io_mutable__ArgTerms_9, parse_tree__prog_io_mutable__Context_10, parse_tree__prog_io_mutable__SeqNum_11, (MR_Integer) 0, &parse_tree__prog_io_mutable__MaybeItemMutableInfo_13);
    }
#line 167 "prog_io_mutable.m"
    if (((MR_tag((MR_Word) parse_tree__prog_io_mutable__MaybeItemMutableInfo_13)) == (MR_mktag((MR_Integer) 0))))
#line 169 "prog_io_mutable.m"
      *parse_tree__prog_io_mutable__MaybeIOM_12 = (MR_Word) parse_tree__prog_io_mutable__MaybeItemMutableInfo_13;
#line 167 "prog_io_mutable.m"
    else
#line 165 "prog_io_mutable.m"
      {
#line 165 "prog_io_mutable.m"
        MR_Word parse_tree__prog_io_mutable__ItemMutableInfo_14 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_mutable__MaybeItemMutableInfo_13, (MR_Integer) 0)));
#line 165 "prog_io_mutable.m"
        MR_Word parse_tree__prog_io_mutable__V_17_17;
#line 165 "prog_io_mutable.m"
        MR_Word parse_tree__prog_io_mutable__V_18_18;

#line 166 "prog_io_mutable.m"
        {
#line 166 "prog_io_mutable.m"
          parse_tree__prog_io_mutable__V_18_18 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 166 "prog_io_mutable.m"
          MR_hl_field(MR_mktag(3), parse_tree__prog_io_mutable__V_18_18, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 9));
#line 166 "prog_io_mutable.m"
          MR_hl_field(MR_mktag(3), parse_tree__prog_io_mutable__V_18_18, 1) = ((MR_Box) (parse_tree__prog_io_mutable__ItemMutableInfo_14));
#line 166 "prog_io_mutable.m"
        }
#line 166 "prog_io_mutable.m"
        {
#line 166 "prog_io_mutable.m"
          parse_tree__prog_io_mutable__V_17_17 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 166 "prog_io_mutable.m"
          MR_hl_field(MR_mktag(0), parse_tree__prog_io_mutable__V_17_17, 0) = ((MR_Box) (parse_tree__prog_io_mutable__V_18_18));
#line 166 "prog_io_mutable.m"
        }
#line 166 "prog_io_mutable.m"
        {
#line 166 "prog_io_mutable.m"
          MR_Word base;
#line 166 "prog_io_mutable.m"
          base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 166 "prog_io_mutable.m"
          *parse_tree__prog_io_mutable__MaybeIOM_12 = base;
#line 166 "prog_io_mutable.m"
          MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (parse_tree__prog_io_mutable__V_17_17));
#line 166 "prog_io_mutable.m"
        }
#line 165 "prog_io_mutable.m"
      }
#line 161 "prog_io_mutable.m"
  }
#line 34 "prog_io_mutable.m"
}

#line 31 "prog_io_mutable.m"
void MR_CALL 
parse_tree__prog_io_mutable__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_112_97_114_115_101_95_102_105_110_97_108_105_115_101_95_105_116_101_109_95_95_91_49_93_95_48_6_p_0(
#line 31 "prog_io_mutable.m"
  MR_Word parse_tree__prog_io_mutable__VarSet_8,
#line 31 "prog_io_mutable.m"
  MR_Word parse_tree__prog_io_mutable__ArgTerms_9,
#line 31 "prog_io_mutable.m"
  MR_Word parse_tree__prog_io_mutable__Context_10,
#line 31 "prog_io_mutable.m"
  MR_Integer parse_tree__prog_io_mutable__SeqNum_11,
#line 31 "prog_io_mutable.m"
  MR_Word * parse_tree__prog_io_mutable__MaybeIOM_12)
#line 31 "prog_io_mutable.m"
{
#line 115 "prog_io_mutable.m"
  {
#line 115 "prog_io_mutable.m"
    MR_bool parse_tree__prog_io_mutable__succeeded = ((MR_tag((MR_Word) parse_tree__prog_io_mutable__ArgTerms_9)) == (MR_mktag((MR_Integer) 1)));
#line 115 "prog_io_mutable.m"
    MR_Word parse_tree__prog_io_mutable__Term_13;
#line 115 "prog_io_mutable.m"
    MR_Word parse_tree__prog_io_mutable__V_25_25;

#line 115 "prog_io_mutable.m"
    if (parse_tree__prog_io_mutable__succeeded)
#line 115 "prog_io_mutable.m"
      {
#line 115 "prog_io_mutable.m"
        parse_tree__prog_io_mutable__Term_13 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_mutable__ArgTerms_9, (MR_Integer) 0)));
#line 115 "prog_io_mutable.m"
        parse_tree__prog_io_mutable__V_25_25 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_mutable__ArgTerms_9, (MR_Integer) 1)));
#line 115 "prog_io_mutable.m"
        parse_tree__prog_io_mutable__succeeded = (parse_tree__prog_io_mutable__V_25_25 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 115 "prog_io_mutable.m"
      }
#line 115 "prog_io_mutable.m"
    if (parse_tree__prog_io_mutable__succeeded)
#line 116 "prog_io_mutable.m"
      {
#line 116 "prog_io_mutable.m"
        MR_Word parse_tree__prog_io_mutable__MaybeSymNameSpecifier_14;

#line 116 "prog_io_mutable.m"
        {
#line 116 "prog_io_mutable.m"
          parse_tree__prog_io_sym_name__parse_symbol_name_specifier_3_p_0(parse_tree__prog_io_mutable__VarSet_8, parse_tree__prog_io_mutable__Term_13, &parse_tree__prog_io_mutable__MaybeSymNameSpecifier_14);
        }
#line 120 "prog_io_mutable.m"
        if (((MR_tag((MR_Word) parse_tree__prog_io_mutable__MaybeSymNameSpecifier_14)) == (MR_mktag((MR_Integer) 0))))
#line 119 "prog_io_mutable.m"
          *parse_tree__prog_io_mutable__MaybeIOM_12 = (MR_Word) parse_tree__prog_io_mutable__MaybeSymNameSpecifier_14;
#line 120 "prog_io_mutable.m"
        else
#line 121 "prog_io_mutable.m"
          {
#line 121 "prog_io_mutable.m"
            MR_Word parse_tree__prog_io_mutable__SymNameSpecifier_16 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_mutable__MaybeSymNameSpecifier_14, (MR_Integer) 0)));

#line 131 "prog_io_mutable.m"
            if (((MR_tag((MR_Word) parse_tree__prog_io_mutable__SymNameSpecifier_16)) == (MR_mktag((MR_Integer) 0))))
#line 123 "prog_io_mutable.m"
              {
#line 123 "prog_io_mutable.m"
                MR_Word parse_tree__prog_io_mutable__TypeCtorInfo_126_126 = (MR_Word) &mercury__term__term__type_ctor_info_generic_0;
#line 123 "prog_io_mutable.m"
                MR_String parse_tree__prog_io_mutable__TermStr_18;
#line 123 "prog_io_mutable.m"
                MR_Word parse_tree__prog_io_mutable__Pieces_19;
#line 123 "prog_io_mutable.m"
                MR_Word parse_tree__prog_io_mutable__Spec_20;
#line 123 "prog_io_mutable.m"
                MR_Word parse_tree__prog_io_mutable__V_60_60;
#line 123 "prog_io_mutable.m"
                MR_Word parse_tree__prog_io_mutable__V_63_63;
#line 123 "prog_io_mutable.m"
                MR_Word parse_tree__prog_io_mutable__V_66_66;
#line 123 "prog_io_mutable.m"
                MR_Word parse_tree__prog_io_mutable__V_69_69;
#line 123 "prog_io_mutable.m"
                MR_Word parse_tree__prog_io_mutable__V_70_70;
#line 123 "prog_io_mutable.m"
                MR_Word parse_tree__prog_io_mutable__V_79_79;
#line 123 "prog_io_mutable.m"
                MR_Word parse_tree__prog_io_mutable__V_80_80;
#line 123 "prog_io_mutable.m"
                MR_Word parse_tree__prog_io_mutable__V_81_81;
#line 123 "prog_io_mutable.m"
                MR_Word parse_tree__prog_io_mutable__V_82_82;
#line 123 "prog_io_mutable.m"
                MR_Word parse_tree__prog_io_mutable__V_83_83;
#line 123 "prog_io_mutable.m"
                MR_Word parse_tree__prog_io_mutable__V_86_86;

#line 124 "prog_io_mutable.m"
                {
#line 124 "prog_io_mutable.m"
                  parse_tree__prog_io_mutable__TermStr_18 = parse_tree__parse_tree_out_term__describe_error_term_2_f_0(parse_tree__prog_io_mutable__TypeCtorInfo_126_126, parse_tree__prog_io_mutable__VarSet_8, parse_tree__prog_io_mutable__Term_13);
                }
#line 127 "prog_io_mutable.m"
                {
#line 127 "prog_io_mutable.m"
                  parse_tree__prog_io_mutable__V_70_70 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 127 "prog_io_mutable.m"
                  MR_hl_field(MR_mktag(2), parse_tree__prog_io_mutable__V_70_70, 0) = ((MR_Box) (parse_tree__prog_io_mutable__TermStr_18));
#line 127 "prog_io_mutable.m"
                }
#line 127 "prog_io_mutable.m"
                {
#line 127 "prog_io_mutable.m"
                  parse_tree__prog_io_mutable__V_69_69 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 127 "prog_io_mutable.m"
                  MR_hl_field(MR_mktag(1), parse_tree__prog_io_mutable__V_69_69, 0) = ((MR_Box) (parse_tree__prog_io_mutable__V_70_70));
#line 127 "prog_io_mutable.m"
                  MR_hl_field(MR_mktag(1), parse_tree__prog_io_mutable__V_69_69, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__prog_io_mutable_scalar_common_2[20])));
#line 127 "prog_io_mutable.m"
                }
#line 126 "prog_io_mutable.m"
                {
#line 126 "prog_io_mutable.m"
                  parse_tree__prog_io_mutable__V_66_66 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 126 "prog_io_mutable.m"
                  MR_hl_field(MR_mktag(1), parse_tree__prog_io_mutable__V_66_66, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__prog_io_mutable_scalar_common_2[83])));
#line 126 "prog_io_mutable.m"
                  MR_hl_field(MR_mktag(1), parse_tree__prog_io_mutable__V_66_66, 1) = ((MR_Box) (parse_tree__prog_io_mutable__V_69_69));
#line 126 "prog_io_mutable.m"
                }
#line 126 "prog_io_mutable.m"
                {
#line 126 "prog_io_mutable.m"
                  parse_tree__prog_io_mutable__V_63_63 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 126 "prog_io_mutable.m"
                  MR_hl_field(MR_mktag(1), parse_tree__prog_io_mutable__V_63_63, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__prog_io_mutable_scalar_common_2[77])));
#line 126 "prog_io_mutable.m"
                  MR_hl_field(MR_mktag(1), parse_tree__prog_io_mutable__V_63_63, 1) = ((MR_Box) (parse_tree__prog_io_mutable__V_66_66));
#line 126 "prog_io_mutable.m"
                }
#line 125 "prog_io_mutable.m"
                {
#line 125 "prog_io_mutable.m"
                  parse_tree__prog_io_mutable__V_60_60 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 125 "prog_io_mutable.m"
                  MR_hl_field(MR_mktag(1), parse_tree__prog_io_mutable__V_60_60, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__prog_io_mutable_scalar_common_2[82])));
#line 125 "prog_io_mutable.m"
                  MR_hl_field(MR_mktag(1), parse_tree__prog_io_mutable__V_60_60, 1) = ((MR_Box) (parse_tree__prog_io_mutable__V_63_63));
#line 125 "prog_io_mutable.m"
                }
#line 125 "prog_io_mutable.m"
                {
#line 125 "prog_io_mutable.m"
                  parse_tree__prog_io_mutable__Pieces_19 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 125 "prog_io_mutable.m"
                  MR_hl_field(MR_mktag(1), parse_tree__prog_io_mutable__Pieces_19, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__prog_io_mutable_scalar_common_2[79])));
#line 125 "prog_io_mutable.m"
                  MR_hl_field(MR_mktag(1), parse_tree__prog_io_mutable__Pieces_19, 1) = ((MR_Box) (parse_tree__prog_io_mutable__V_60_60));
#line 125 "prog_io_mutable.m"
                }
#line 129 "prog_io_mutable.m"
                {
#line 129 "prog_io_mutable.m"
                  parse_tree__prog_io_mutable__V_81_81 = mercury__term__get_term_context_1_f_0(parse_tree__prog_io_mutable__TypeCtorInfo_126_126, parse_tree__prog_io_mutable__Term_13);
                }
#line 129 "prog_io_mutable.m"
                {
#line 129 "prog_io_mutable.m"
                  parse_tree__prog_io_mutable__V_83_83 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 129 "prog_io_mutable.m"
                  MR_hl_field(MR_mktag(0), parse_tree__prog_io_mutable__V_83_83, 0) = ((MR_Box) (parse_tree__prog_io_mutable__Pieces_19));
#line 129 "prog_io_mutable.m"
                }
#line 129 "prog_io_mutable.m"
                {
#line 129 "prog_io_mutable.m"
                  parse_tree__prog_io_mutable__V_82_82 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 129 "prog_io_mutable.m"
                  MR_hl_field(MR_mktag(1), parse_tree__prog_io_mutable__V_82_82, 0) = ((MR_Box) (parse_tree__prog_io_mutable__V_83_83));
#line 129 "prog_io_mutable.m"
                  MR_hl_field(MR_mktag(1), parse_tree__prog_io_mutable__V_82_82, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 129 "prog_io_mutable.m"
                }
#line 129 "prog_io_mutable.m"
                {
#line 129 "prog_io_mutable.m"
                  parse_tree__prog_io_mutable__V_80_80 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 129 "prog_io_mutable.m"
                  MR_hl_field(MR_mktag(0), parse_tree__prog_io_mutable__V_80_80, 0) = ((MR_Box) (parse_tree__prog_io_mutable__V_81_81));
#line 129 "prog_io_mutable.m"
                  MR_hl_field(MR_mktag(0), parse_tree__prog_io_mutable__V_80_80, 1) = ((MR_Box) (parse_tree__prog_io_mutable__V_82_82));
#line 129 "prog_io_mutable.m"
                }
#line 129 "prog_io_mutable.m"
                {
#line 129 "prog_io_mutable.m"
                  parse_tree__prog_io_mutable__V_79_79 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 129 "prog_io_mutable.m"
                  MR_hl_field(MR_mktag(1), parse_tree__prog_io_mutable__V_79_79, 0) = ((MR_Box) (parse_tree__prog_io_mutable__V_80_80));
#line 129 "prog_io_mutable.m"
                  MR_hl_field(MR_mktag(1), parse_tree__prog_io_mutable__V_79_79, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 129 "prog_io_mutable.m"
                }
#line 128 "prog_io_mutable.m"
                {
#line 128 "prog_io_mutable.m"
                  parse_tree__prog_io_mutable__Spec_20 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 128 "prog_io_mutable.m"
                  MR_hl_field(MR_mktag(0), parse_tree__prog_io_mutable__Spec_20, 0) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 128 "prog_io_mutable.m"
                  MR_hl_field(MR_mktag(0), parse_tree__prog_io_mutable__Spec_20, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 3))));
#line 128 "prog_io_mutable.m"
                  MR_hl_field(MR_mktag(0), parse_tree__prog_io_mutable__Spec_20, 2) = ((MR_Box) (parse_tree__prog_io_mutable__V_79_79));
#line 128 "prog_io_mutable.m"
                }
#line 130 "prog_io_mutable.m"
                {
#line 130 "prog_io_mutable.m"
                  parse_tree__prog_io_mutable__V_86_86 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 130 "prog_io_mutable.m"
                  MR_hl_field(MR_mktag(1), parse_tree__prog_io_mutable__V_86_86, 0) = ((MR_Box) (parse_tree__prog_io_mutable__Spec_20));
#line 130 "prog_io_mutable.m"
                  MR_hl_field(MR_mktag(1), parse_tree__prog_io_mutable__V_86_86, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 130 "prog_io_mutable.m"
                }
#line 130 "prog_io_mutable.m"
                {
#line 130 "prog_io_mutable.m"
                  MR_Word base;
#line 130 "prog_io_mutable.m"
                  base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 130 "prog_io_mutable.m"
                  *parse_tree__prog_io_mutable__MaybeIOM_12 = base;
#line 130 "prog_io_mutable.m"
                  MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (parse_tree__prog_io_mutable__V_86_86));
#line 130 "prog_io_mutable.m"
                }
#line 123 "prog_io_mutable.m"
              }
#line 131 "prog_io_mutable.m"
            else
#line 132 "prog_io_mutable.m"
              {
#line 132 "prog_io_mutable.m"
                MR_Word parse_tree__prog_io_mutable__SymName_21 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_mutable__SymNameSpecifier_16, (MR_Integer) 0)));
#line 132 "prog_io_mutable.m"
                MR_Integer parse_tree__prog_io_mutable__Arity_22 = ((MR_Integer) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_mutable__SymNameSpecifier_16, (MR_Integer) 1)));

#line 133 "prog_io_mutable.m"
#line 133 "prog_io_mutable.m"
                switch (parse_tree__prog_io_mutable__Arity_22) {
#line 133 "prog_io_mutable.m"
                  default:
#line 133 "prog_io_mutable.m"
                    parse_tree__prog_io_mutable__succeeded = MR_FALSE;
#line 133 "prog_io_mutable.m"
                    break;
#line 133 "prog_io_mutable.m"
                  case (MR_Integer) 0:
#line 133 "prog_io_mutable.m"
                    parse_tree__prog_io_mutable__succeeded = MR_TRUE;
#line 133 "prog_io_mutable.m"
                    break;
#line 133 "prog_io_mutable.m"
                  case (MR_Integer) 2:
#line 133 "prog_io_mutable.m"
                    parse_tree__prog_io_mutable__succeeded = MR_TRUE;
#line 133 "prog_io_mutable.m"
                    break;
#line 133 "prog_io_mutable.m"
                }
#line 133 "prog_io_mutable.m"
                if (parse_tree__prog_io_mutable__succeeded)
#line 135 "prog_io_mutable.m"
                  {
#line 135 "prog_io_mutable.m"
                    MR_Word parse_tree__prog_io_mutable__ItemFinalise_23;
#line 135 "prog_io_mutable.m"
                    MR_Word parse_tree__prog_io_mutable__Item_24;
#line 135 "prog_io_mutable.m"
                    MR_Word parse_tree__prog_io_mutable__V_27_27;

#line 134 "prog_io_mutable.m"
                    {
#line 134 "prog_io_mutable.m"
                      parse_tree__prog_io_mutable__ItemFinalise_23 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
#line 134 "prog_io_mutable.m"
                      MR_hl_field(MR_mktag(0), parse_tree__prog_io_mutable__ItemFinalise_23, 0) = ((MR_Box) (parse_tree__prog_io_mutable__SymName_21));
#line 134 "prog_io_mutable.m"
                      MR_hl_field(MR_mktag(0), parse_tree__prog_io_mutable__ItemFinalise_23, 1) = ((MR_Box) (parse_tree__prog_io_mutable__Arity_22));
#line 134 "prog_io_mutable.m"
                      MR_hl_field(MR_mktag(0), parse_tree__prog_io_mutable__ItemFinalise_23, 2) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 134 "prog_io_mutable.m"
                      MR_hl_field(MR_mktag(0), parse_tree__prog_io_mutable__ItemFinalise_23, 3) = ((MR_Box) (parse_tree__prog_io_mutable__Context_10));
#line 134 "prog_io_mutable.m"
                      MR_hl_field(MR_mktag(0), parse_tree__prog_io_mutable__ItemFinalise_23, 4) = ((MR_Box) (parse_tree__prog_io_mutable__SeqNum_11));
#line 134 "prog_io_mutable.m"
                    }
#line 136 "prog_io_mutable.m"
                    {
#line 136 "prog_io_mutable.m"
                      parse_tree__prog_io_mutable__Item_24 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 136 "prog_io_mutable.m"
                      MR_hl_field(MR_mktag(3), parse_tree__prog_io_mutable__Item_24, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 8));
#line 136 "prog_io_mutable.m"
                      MR_hl_field(MR_mktag(3), parse_tree__prog_io_mutable__Item_24, 1) = ((MR_Box) (parse_tree__prog_io_mutable__ItemFinalise_23));
#line 136 "prog_io_mutable.m"
                    }
#line 137 "prog_io_mutable.m"
                    {
#line 137 "prog_io_mutable.m"
                      parse_tree__prog_io_mutable__V_27_27 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 137 "prog_io_mutable.m"
                      MR_hl_field(MR_mktag(0), parse_tree__prog_io_mutable__V_27_27, 0) = ((MR_Box) (parse_tree__prog_io_mutable__Item_24));
#line 137 "prog_io_mutable.m"
                    }
#line 137 "prog_io_mutable.m"
                    {
#line 137 "prog_io_mutable.m"
                      MR_Word base;
#line 137 "prog_io_mutable.m"
                      base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 137 "prog_io_mutable.m"
                      *parse_tree__prog_io_mutable__MaybeIOM_12 = base;
#line 137 "prog_io_mutable.m"
                      MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (parse_tree__prog_io_mutable__V_27_27));
#line 137 "prog_io_mutable.m"
                    }
#line 135 "prog_io_mutable.m"
                  }
#line 133 "prog_io_mutable.m"
                else
#line 139 "prog_io_mutable.m"
                  {
#line 139 "prog_io_mutable.m"
                    MR_Word parse_tree__prog_io_mutable__TypeCtorInfo_127_127 = (MR_Word) &mercury__term__term__type_ctor_info_generic_0;
#line 139 "prog_io_mutable.m"
                    MR_Word parse_tree__prog_io_mutable__V_30_30;
#line 139 "prog_io_mutable.m"
                    MR_Word parse_tree__prog_io_mutable__V_33_33;
#line 139 "prog_io_mutable.m"
                    MR_Word parse_tree__prog_io_mutable__V_36_36;
#line 139 "prog_io_mutable.m"
                    MR_Word parse_tree__prog_io_mutable__V_39_39;
#line 139 "prog_io_mutable.m"
                    MR_Word parse_tree__prog_io_mutable__V_40_40;
#line 139 "prog_io_mutable.m"
                    MR_Word parse_tree__prog_io_mutable__V_49_49;
#line 139 "prog_io_mutable.m"
                    MR_Word parse_tree__prog_io_mutable__V_50_50;
#line 139 "prog_io_mutable.m"
                    MR_Word parse_tree__prog_io_mutable__V_51_51;
#line 139 "prog_io_mutable.m"
                    MR_Word parse_tree__prog_io_mutable__V_52_52;
#line 139 "prog_io_mutable.m"
                    MR_Word parse_tree__prog_io_mutable__V_53_53;
#line 139 "prog_io_mutable.m"
                    MR_Word parse_tree__prog_io_mutable__V_56_56;
#line 139 "prog_io_mutable.m"
                    MR_String parse_tree__prog_io_mutable__TermStr_115;
#line 139 "prog_io_mutable.m"
                    MR_Word parse_tree__prog_io_mutable__Pieces_116;
#line 139 "prog_io_mutable.m"
                    MR_Word parse_tree__prog_io_mutable__Spec_117;

#line 139 "prog_io_mutable.m"
                    {
#line 139 "prog_io_mutable.m"
                      parse_tree__prog_io_mutable__TermStr_115 = parse_tree__parse_tree_out_term__describe_error_term_2_f_0(parse_tree__prog_io_mutable__TypeCtorInfo_127_127, parse_tree__prog_io_mutable__VarSet_8, parse_tree__prog_io_mutable__Term_13);
                    }
#line 143 "prog_io_mutable.m"
                    {
#line 143 "prog_io_mutable.m"
                      parse_tree__prog_io_mutable__V_40_40 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 143 "prog_io_mutable.m"
                      MR_hl_field(MR_mktag(3), parse_tree__prog_io_mutable__V_40_40, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 5));
#line 143 "prog_io_mutable.m"
                      MR_hl_field(MR_mktag(3), parse_tree__prog_io_mutable__V_40_40, 1) = ((MR_Box) (parse_tree__prog_io_mutable__TermStr_115));
#line 143 "prog_io_mutable.m"
                    }
#line 143 "prog_io_mutable.m"
                    {
#line 143 "prog_io_mutable.m"
                      parse_tree__prog_io_mutable__V_39_39 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 143 "prog_io_mutable.m"
                      MR_hl_field(MR_mktag(1), parse_tree__prog_io_mutable__V_39_39, 0) = ((MR_Box) (parse_tree__prog_io_mutable__V_40_40));
#line 143 "prog_io_mutable.m"
                      MR_hl_field(MR_mktag(1), parse_tree__prog_io_mutable__V_39_39, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__prog_io_mutable_scalar_common_2[20])));
#line 143 "prog_io_mutable.m"
                    }
#line 142 "prog_io_mutable.m"
                    {
#line 142 "prog_io_mutable.m"
                      parse_tree__prog_io_mutable__V_36_36 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 142 "prog_io_mutable.m"
                      MR_hl_field(MR_mktag(1), parse_tree__prog_io_mutable__V_36_36, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__prog_io_mutable_scalar_common_2[85])));
#line 142 "prog_io_mutable.m"
                      MR_hl_field(MR_mktag(1), parse_tree__prog_io_mutable__V_36_36, 1) = ((MR_Box) (parse_tree__prog_io_mutable__V_39_39));
#line 142 "prog_io_mutable.m"
                    }
#line 141 "prog_io_mutable.m"
                    {
#line 141 "prog_io_mutable.m"
                      parse_tree__prog_io_mutable__V_33_33 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 141 "prog_io_mutable.m"
                      MR_hl_field(MR_mktag(1), parse_tree__prog_io_mutable__V_33_33, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__prog_io_mutable_scalar_common_2[84])));
#line 141 "prog_io_mutable.m"
                      MR_hl_field(MR_mktag(1), parse_tree__prog_io_mutable__V_33_33, 1) = ((MR_Box) (parse_tree__prog_io_mutable__V_36_36));
#line 141 "prog_io_mutable.m"
                    }
#line 140 "prog_io_mutable.m"
                    {
#line 140 "prog_io_mutable.m"
                      parse_tree__prog_io_mutable__V_30_30 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 140 "prog_io_mutable.m"
                      MR_hl_field(MR_mktag(1), parse_tree__prog_io_mutable__V_30_30, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__prog_io_mutable_scalar_common_2[82])));
#line 140 "prog_io_mutable.m"
                      MR_hl_field(MR_mktag(1), parse_tree__prog_io_mutable__V_30_30, 1) = ((MR_Box) (parse_tree__prog_io_mutable__V_33_33));
#line 140 "prog_io_mutable.m"
                    }
#line 140 "prog_io_mutable.m"
                    {
#line 140 "prog_io_mutable.m"
                      parse_tree__prog_io_mutable__Pieces_116 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 140 "prog_io_mutable.m"
                      MR_hl_field(MR_mktag(1), parse_tree__prog_io_mutable__Pieces_116, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__prog_io_mutable_scalar_common_2[79])));
#line 140 "prog_io_mutable.m"
                      MR_hl_field(MR_mktag(1), parse_tree__prog_io_mutable__Pieces_116, 1) = ((MR_Box) (parse_tree__prog_io_mutable__V_30_30));
#line 140 "prog_io_mutable.m"
                    }
#line 145 "prog_io_mutable.m"
                    {
#line 145 "prog_io_mutable.m"
                      parse_tree__prog_io_mutable__V_51_51 = mercury__term__get_term_context_1_f_0(parse_tree__prog_io_mutable__TypeCtorInfo_127_127, parse_tree__prog_io_mutable__Term_13);
                    }
#line 145 "prog_io_mutable.m"
                    {
#line 145 "prog_io_mutable.m"
                      parse_tree__prog_io_mutable__V_53_53 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 145 "prog_io_mutable.m"
                      MR_hl_field(MR_mktag(0), parse_tree__prog_io_mutable__V_53_53, 0) = ((MR_Box) (parse_tree__prog_io_mutable__Pieces_116));
#line 145 "prog_io_mutable.m"
                    }
#line 145 "prog_io_mutable.m"
                    {
#line 145 "prog_io_mutable.m"
                      parse_tree__prog_io_mutable__V_52_52 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 145 "prog_io_mutable.m"
                      MR_hl_field(MR_mktag(1), parse_tree__prog_io_mutable__V_52_52, 0) = ((MR_Box) (parse_tree__prog_io_mutable__V_53_53));
#line 145 "prog_io_mutable.m"
                      MR_hl_field(MR_mktag(1), parse_tree__prog_io_mutable__V_52_52, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 145 "prog_io_mutable.m"
                    }
#line 145 "prog_io_mutable.m"
                    {
#line 145 "prog_io_mutable.m"
                      parse_tree__prog_io_mutable__V_50_50 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 145 "prog_io_mutable.m"
                      MR_hl_field(MR_mktag(0), parse_tree__prog_io_mutable__V_50_50, 0) = ((MR_Box) (parse_tree__prog_io_mutable__V_51_51));
#line 145 "prog_io_mutable.m"
                      MR_hl_field(MR_mktag(0), parse_tree__prog_io_mutable__V_50_50, 1) = ((MR_Box) (parse_tree__prog_io_mutable__V_52_52));
#line 145 "prog_io_mutable.m"
                    }
#line 145 "prog_io_mutable.m"
                    {
#line 145 "prog_io_mutable.m"
                      parse_tree__prog_io_mutable__V_49_49 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 145 "prog_io_mutable.m"
                      MR_hl_field(MR_mktag(1), parse_tree__prog_io_mutable__V_49_49, 0) = ((MR_Box) (parse_tree__prog_io_mutable__V_50_50));
#line 145 "prog_io_mutable.m"
                      MR_hl_field(MR_mktag(1), parse_tree__prog_io_mutable__V_49_49, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 145 "prog_io_mutable.m"
                    }
#line 144 "prog_io_mutable.m"
                    {
#line 144 "prog_io_mutable.m"
                      parse_tree__prog_io_mutable__Spec_117 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 144 "prog_io_mutable.m"
                      MR_hl_field(MR_mktag(0), parse_tree__prog_io_mutable__Spec_117, 0) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 144 "prog_io_mutable.m"
                      MR_hl_field(MR_mktag(0), parse_tree__prog_io_mutable__Spec_117, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 3))));
#line 144 "prog_io_mutable.m"
                      MR_hl_field(MR_mktag(0), parse_tree__prog_io_mutable__Spec_117, 2) = ((MR_Box) (parse_tree__prog_io_mutable__V_49_49));
#line 144 "prog_io_mutable.m"
                    }
#line 146 "prog_io_mutable.m"
                    {
#line 146 "prog_io_mutable.m"
                      parse_tree__prog_io_mutable__V_56_56 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 146 "prog_io_mutable.m"
                      MR_hl_field(MR_mktag(1), parse_tree__prog_io_mutable__V_56_56, 0) = ((MR_Box) (parse_tree__prog_io_mutable__Spec_117));
#line 146 "prog_io_mutable.m"
                      MR_hl_field(MR_mktag(1), parse_tree__prog_io_mutable__V_56_56, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 146 "prog_io_mutable.m"
                    }
#line 146 "prog_io_mutable.m"
                    {
#line 146 "prog_io_mutable.m"
                      MR_Word base;
#line 146 "prog_io_mutable.m"
                      base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 146 "prog_io_mutable.m"
                      *parse_tree__prog_io_mutable__MaybeIOM_12 = base;
#line 146 "prog_io_mutable.m"
                      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (parse_tree__prog_io_mutable__V_56_56));
#line 146 "prog_io_mutable.m"
                    }
#line 139 "prog_io_mutable.m"
                  }
#line 132 "prog_io_mutable.m"
              }
#line 121 "prog_io_mutable.m"
          }
#line 116 "prog_io_mutable.m"
      }
#line 115 "prog_io_mutable.m"
    else
#line 153 "prog_io_mutable.m"
      {
#line 153 "prog_io_mutable.m"
        MR_Word parse_tree__prog_io_mutable__V_107_107;
#line 153 "prog_io_mutable.m"
        MR_Word parse_tree__prog_io_mutable__V_108_108;
#line 153 "prog_io_mutable.m"
        MR_Word parse_tree__prog_io_mutable__V_113_113;
#line 153 "prog_io_mutable.m"
        MR_Word parse_tree__prog_io_mutable__Spec_125;

#line 155 "prog_io_mutable.m"
        {
#line 155 "prog_io_mutable.m"
          parse_tree__prog_io_mutable__V_108_108 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 155 "prog_io_mutable.m"
          MR_hl_field(MR_mktag(0), parse_tree__prog_io_mutable__V_108_108, 0) = ((MR_Box) (parse_tree__prog_io_mutable__Context_10));
#line 155 "prog_io_mutable.m"
          MR_hl_field(MR_mktag(0), parse_tree__prog_io_mutable__V_108_108, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__prog_io_mutable_scalar_common_2[86])));
#line 155 "prog_io_mutable.m"
        }
#line 155 "prog_io_mutable.m"
        {
#line 155 "prog_io_mutable.m"
          parse_tree__prog_io_mutable__V_107_107 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 155 "prog_io_mutable.m"
          MR_hl_field(MR_mktag(1), parse_tree__prog_io_mutable__V_107_107, 0) = ((MR_Box) (parse_tree__prog_io_mutable__V_108_108));
#line 155 "prog_io_mutable.m"
          MR_hl_field(MR_mktag(1), parse_tree__prog_io_mutable__V_107_107, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 155 "prog_io_mutable.m"
        }
#line 154 "prog_io_mutable.m"
        {
#line 154 "prog_io_mutable.m"
          parse_tree__prog_io_mutable__Spec_125 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 154 "prog_io_mutable.m"
          MR_hl_field(MR_mktag(0), parse_tree__prog_io_mutable__Spec_125, 0) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 154 "prog_io_mutable.m"
          MR_hl_field(MR_mktag(0), parse_tree__prog_io_mutable__Spec_125, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 3))));
#line 154 "prog_io_mutable.m"
          MR_hl_field(MR_mktag(0), parse_tree__prog_io_mutable__Spec_125, 2) = ((MR_Box) (parse_tree__prog_io_mutable__V_107_107));
#line 154 "prog_io_mutable.m"
        }
#line 156 "prog_io_mutable.m"
        {
#line 156 "prog_io_mutable.m"
          parse_tree__prog_io_mutable__V_113_113 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 156 "prog_io_mutable.m"
          MR_hl_field(MR_mktag(1), parse_tree__prog_io_mutable__V_113_113, 0) = ((MR_Box) (parse_tree__prog_io_mutable__Spec_125));
#line 156 "prog_io_mutable.m"
          MR_hl_field(MR_mktag(1), parse_tree__prog_io_mutable__V_113_113, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 156 "prog_io_mutable.m"
        }
#line 156 "prog_io_mutable.m"
        {
#line 156 "prog_io_mutable.m"
          MR_Word base;
#line 156 "prog_io_mutable.m"
          base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 156 "prog_io_mutable.m"
          *parse_tree__prog_io_mutable__MaybeIOM_12 = base;
#line 156 "prog_io_mutable.m"
          MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (parse_tree__prog_io_mutable__V_113_113));
#line 156 "prog_io_mutable.m"
        }
#line 153 "prog_io_mutable.m"
      }
#line 115 "prog_io_mutable.m"
  }
#line 31 "prog_io_mutable.m"
}

#line 28 "prog_io_mutable.m"
void MR_CALL 
parse_tree__prog_io_mutable__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_112_97_114_115_101_95_105_110_105_116_105_97_108_105_115_101_95_105_116_101_109_95_95_91_49_93_95_48_6_p_0(
#line 28 "prog_io_mutable.m"
  MR_Word parse_tree__prog_io_mutable__VarSet_8,
#line 28 "prog_io_mutable.m"
  MR_Word parse_tree__prog_io_mutable__ArgTerms_9,
#line 28 "prog_io_mutable.m"
  MR_Word parse_tree__prog_io_mutable__Context_10,
#line 28 "prog_io_mutable.m"
  MR_Integer parse_tree__prog_io_mutable__SeqNum_11,
#line 28 "prog_io_mutable.m"
  MR_Word * parse_tree__prog_io_mutable__MaybeIOM_12)
#line 28 "prog_io_mutable.m"
{
#line 66 "prog_io_mutable.m"
  {
#line 66 "prog_io_mutable.m"
    MR_bool parse_tree__prog_io_mutable__succeeded = ((MR_tag((MR_Word) parse_tree__prog_io_mutable__ArgTerms_9)) == (MR_mktag((MR_Integer) 1)));
#line 66 "prog_io_mutable.m"
    MR_Word parse_tree__prog_io_mutable__Term_13;
#line 66 "prog_io_mutable.m"
    MR_Word parse_tree__prog_io_mutable__V_25_25;

#line 66 "prog_io_mutable.m"
    if (parse_tree__prog_io_mutable__succeeded)
#line 66 "prog_io_mutable.m"
      {
#line 66 "prog_io_mutable.m"
        parse_tree__prog_io_mutable__Term_13 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_mutable__ArgTerms_9, (MR_Integer) 0)));
#line 66 "prog_io_mutable.m"
        parse_tree__prog_io_mutable__V_25_25 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_mutable__ArgTerms_9, (MR_Integer) 1)));
#line 66 "prog_io_mutable.m"
        parse_tree__prog_io_mutable__succeeded = (parse_tree__prog_io_mutable__V_25_25 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 66 "prog_io_mutable.m"
      }
#line 66 "prog_io_mutable.m"
    if (parse_tree__prog_io_mutable__succeeded)
#line 67 "prog_io_mutable.m"
      {
#line 67 "prog_io_mutable.m"
        MR_Word parse_tree__prog_io_mutable__MaybeSymNameSpecifier_14;

#line 67 "prog_io_mutable.m"
        {
#line 67 "prog_io_mutable.m"
          parse_tree__prog_io_sym_name__parse_symbol_name_specifier_3_p_0(parse_tree__prog_io_mutable__VarSet_8, parse_tree__prog_io_mutable__Term_13, &parse_tree__prog_io_mutable__MaybeSymNameSpecifier_14);
        }
#line 71 "prog_io_mutable.m"
        if (((MR_tag((MR_Word) parse_tree__prog_io_mutable__MaybeSymNameSpecifier_14)) == (MR_mktag((MR_Integer) 0))))
#line 70 "prog_io_mutable.m"
          *parse_tree__prog_io_mutable__MaybeIOM_12 = (MR_Word) parse_tree__prog_io_mutable__MaybeSymNameSpecifier_14;
#line 71 "prog_io_mutable.m"
        else
#line 72 "prog_io_mutable.m"
          {
#line 72 "prog_io_mutable.m"
            MR_Word parse_tree__prog_io_mutable__SymNameSpecifier_16 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_mutable__MaybeSymNameSpecifier_14, (MR_Integer) 0)));

#line 83 "prog_io_mutable.m"
            if (((MR_tag((MR_Word) parse_tree__prog_io_mutable__SymNameSpecifier_16)) == (MR_mktag((MR_Integer) 0))))
#line 74 "prog_io_mutable.m"
              {
#line 74 "prog_io_mutable.m"
                MR_Word parse_tree__prog_io_mutable__TypeCtorInfo_129_129 = (MR_Word) &mercury__term__term__type_ctor_info_generic_0;
#line 74 "prog_io_mutable.m"
                MR_String parse_tree__prog_io_mutable__TermStr_18;
#line 74 "prog_io_mutable.m"
                MR_Word parse_tree__prog_io_mutable__Pieces_19;
#line 74 "prog_io_mutable.m"
                MR_Word parse_tree__prog_io_mutable__Spec_20;
#line 74 "prog_io_mutable.m"
                MR_Word parse_tree__prog_io_mutable__V_63_63;
#line 74 "prog_io_mutable.m"
                MR_Word parse_tree__prog_io_mutable__V_66_66;
#line 74 "prog_io_mutable.m"
                MR_Word parse_tree__prog_io_mutable__V_69_69;
#line 74 "prog_io_mutable.m"
                MR_Word parse_tree__prog_io_mutable__V_72_72;
#line 74 "prog_io_mutable.m"
                MR_Word parse_tree__prog_io_mutable__V_73_73;
#line 74 "prog_io_mutable.m"
                MR_Word parse_tree__prog_io_mutable__V_82_82;
#line 74 "prog_io_mutable.m"
                MR_Word parse_tree__prog_io_mutable__V_83_83;
#line 74 "prog_io_mutable.m"
                MR_Word parse_tree__prog_io_mutable__V_84_84;
#line 74 "prog_io_mutable.m"
                MR_Word parse_tree__prog_io_mutable__V_85_85;
#line 74 "prog_io_mutable.m"
                MR_Word parse_tree__prog_io_mutable__V_86_86;
#line 74 "prog_io_mutable.m"
                MR_Word parse_tree__prog_io_mutable__V_89_89;

#line 75 "prog_io_mutable.m"
                {
#line 75 "prog_io_mutable.m"
                  parse_tree__prog_io_mutable__TermStr_18 = parse_tree__parse_tree_out_term__describe_error_term_2_f_0(parse_tree__prog_io_mutable__TypeCtorInfo_129_129, parse_tree__prog_io_mutable__VarSet_8, parse_tree__prog_io_mutable__Term_13);
                }
#line 79 "prog_io_mutable.m"
                {
#line 79 "prog_io_mutable.m"
                  parse_tree__prog_io_mutable__V_73_73 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 79 "prog_io_mutable.m"
                  MR_hl_field(MR_mktag(3), parse_tree__prog_io_mutable__V_73_73, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 0));
#line 79 "prog_io_mutable.m"
                  MR_hl_field(MR_mktag(3), parse_tree__prog_io_mutable__V_73_73, 1) = ((MR_Box) (parse_tree__prog_io_mutable__TermStr_18));
#line 79 "prog_io_mutable.m"
                }
#line 79 "prog_io_mutable.m"
                {
#line 79 "prog_io_mutable.m"
                  parse_tree__prog_io_mutable__V_72_72 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 79 "prog_io_mutable.m"
                  MR_hl_field(MR_mktag(1), parse_tree__prog_io_mutable__V_72_72, 0) = ((MR_Box) (parse_tree__prog_io_mutable__V_73_73));
#line 79 "prog_io_mutable.m"
                  MR_hl_field(MR_mktag(1), parse_tree__prog_io_mutable__V_72_72, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__prog_io_mutable_scalar_common_2[2])));
#line 79 "prog_io_mutable.m"
                }
#line 78 "prog_io_mutable.m"
                {
#line 78 "prog_io_mutable.m"
                  parse_tree__prog_io_mutable__V_69_69 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 78 "prog_io_mutable.m"
                  MR_hl_field(MR_mktag(1), parse_tree__prog_io_mutable__V_69_69, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__prog_io_mutable_scalar_common_2[78])));
#line 78 "prog_io_mutable.m"
                  MR_hl_field(MR_mktag(1), parse_tree__prog_io_mutable__V_69_69, 1) = ((MR_Box) (parse_tree__prog_io_mutable__V_72_72));
#line 78 "prog_io_mutable.m"
                }
#line 77 "prog_io_mutable.m"
                {
#line 77 "prog_io_mutable.m"
                  parse_tree__prog_io_mutable__V_66_66 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 77 "prog_io_mutable.m"
                  MR_hl_field(MR_mktag(1), parse_tree__prog_io_mutable__V_66_66, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__prog_io_mutable_scalar_common_2[77])));
#line 77 "prog_io_mutable.m"
                  MR_hl_field(MR_mktag(1), parse_tree__prog_io_mutable__V_66_66, 1) = ((MR_Box) (parse_tree__prog_io_mutable__V_69_69));
#line 77 "prog_io_mutable.m"
                }
#line 77 "prog_io_mutable.m"
                {
#line 77 "prog_io_mutable.m"
                  parse_tree__prog_io_mutable__V_63_63 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 77 "prog_io_mutable.m"
                  MR_hl_field(MR_mktag(1), parse_tree__prog_io_mutable__V_63_63, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__prog_io_mutable_scalar_common_2[76])));
#line 77 "prog_io_mutable.m"
                  MR_hl_field(MR_mktag(1), parse_tree__prog_io_mutable__V_63_63, 1) = ((MR_Box) (parse_tree__prog_io_mutable__V_66_66));
#line 77 "prog_io_mutable.m"
                }
#line 76 "prog_io_mutable.m"
                {
#line 76 "prog_io_mutable.m"
                  parse_tree__prog_io_mutable__Pieces_19 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 76 "prog_io_mutable.m"
                  MR_hl_field(MR_mktag(1), parse_tree__prog_io_mutable__Pieces_19, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__prog_io_mutable_scalar_common_2[75])));
#line 76 "prog_io_mutable.m"
                  MR_hl_field(MR_mktag(1), parse_tree__prog_io_mutable__Pieces_19, 1) = ((MR_Box) (parse_tree__prog_io_mutable__V_63_63));
#line 76 "prog_io_mutable.m"
                }
#line 81 "prog_io_mutable.m"
                {
#line 81 "prog_io_mutable.m"
                  parse_tree__prog_io_mutable__V_84_84 = mercury__term__get_term_context_1_f_0(parse_tree__prog_io_mutable__TypeCtorInfo_129_129, parse_tree__prog_io_mutable__Term_13);
                }
#line 81 "prog_io_mutable.m"
                {
#line 81 "prog_io_mutable.m"
                  parse_tree__prog_io_mutable__V_86_86 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 81 "prog_io_mutable.m"
                  MR_hl_field(MR_mktag(0), parse_tree__prog_io_mutable__V_86_86, 0) = ((MR_Box) (parse_tree__prog_io_mutable__Pieces_19));
#line 81 "prog_io_mutable.m"
                }
#line 81 "prog_io_mutable.m"
                {
#line 81 "prog_io_mutable.m"
                  parse_tree__prog_io_mutable__V_85_85 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 81 "prog_io_mutable.m"
                  MR_hl_field(MR_mktag(1), parse_tree__prog_io_mutable__V_85_85, 0) = ((MR_Box) (parse_tree__prog_io_mutable__V_86_86));
#line 81 "prog_io_mutable.m"
                  MR_hl_field(MR_mktag(1), parse_tree__prog_io_mutable__V_85_85, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 81 "prog_io_mutable.m"
                }
#line 81 "prog_io_mutable.m"
                {
#line 81 "prog_io_mutable.m"
                  parse_tree__prog_io_mutable__V_83_83 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 81 "prog_io_mutable.m"
                  MR_hl_field(MR_mktag(0), parse_tree__prog_io_mutable__V_83_83, 0) = ((MR_Box) (parse_tree__prog_io_mutable__V_84_84));
#line 81 "prog_io_mutable.m"
                  MR_hl_field(MR_mktag(0), parse_tree__prog_io_mutable__V_83_83, 1) = ((MR_Box) (parse_tree__prog_io_mutable__V_85_85));
#line 81 "prog_io_mutable.m"
                }
#line 81 "prog_io_mutable.m"
                {
#line 81 "prog_io_mutable.m"
                  parse_tree__prog_io_mutable__V_82_82 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 81 "prog_io_mutable.m"
                  MR_hl_field(MR_mktag(1), parse_tree__prog_io_mutable__V_82_82, 0) = ((MR_Box) (parse_tree__prog_io_mutable__V_83_83));
#line 81 "prog_io_mutable.m"
                  MR_hl_field(MR_mktag(1), parse_tree__prog_io_mutable__V_82_82, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 81 "prog_io_mutable.m"
                }
#line 80 "prog_io_mutable.m"
                {
#line 80 "prog_io_mutable.m"
                  parse_tree__prog_io_mutable__Spec_20 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 80 "prog_io_mutable.m"
                  MR_hl_field(MR_mktag(0), parse_tree__prog_io_mutable__Spec_20, 0) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 80 "prog_io_mutable.m"
                  MR_hl_field(MR_mktag(0), parse_tree__prog_io_mutable__Spec_20, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 3))));
#line 80 "prog_io_mutable.m"
                  MR_hl_field(MR_mktag(0), parse_tree__prog_io_mutable__Spec_20, 2) = ((MR_Box) (parse_tree__prog_io_mutable__V_82_82));
#line 80 "prog_io_mutable.m"
                }
#line 82 "prog_io_mutable.m"
                {
#line 82 "prog_io_mutable.m"
                  parse_tree__prog_io_mutable__V_89_89 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 82 "prog_io_mutable.m"
                  MR_hl_field(MR_mktag(1), parse_tree__prog_io_mutable__V_89_89, 0) = ((MR_Box) (parse_tree__prog_io_mutable__Spec_20));
#line 82 "prog_io_mutable.m"
                  MR_hl_field(MR_mktag(1), parse_tree__prog_io_mutable__V_89_89, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 82 "prog_io_mutable.m"
                }
#line 82 "prog_io_mutable.m"
                {
#line 82 "prog_io_mutable.m"
                  MR_Word base;
#line 82 "prog_io_mutable.m"
                  base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 82 "prog_io_mutable.m"
                  *parse_tree__prog_io_mutable__MaybeIOM_12 = base;
#line 82 "prog_io_mutable.m"
                  MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (parse_tree__prog_io_mutable__V_89_89));
#line 82 "prog_io_mutable.m"
                }
#line 74 "prog_io_mutable.m"
              }
#line 83 "prog_io_mutable.m"
            else
#line 84 "prog_io_mutable.m"
              {
#line 84 "prog_io_mutable.m"
                MR_Word parse_tree__prog_io_mutable__SymName_21 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_mutable__SymNameSpecifier_16, (MR_Integer) 0)));
#line 84 "prog_io_mutable.m"
                MR_Integer parse_tree__prog_io_mutable__Arity_22 = ((MR_Integer) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_mutable__SymNameSpecifier_16, (MR_Integer) 1)));

#line 85 "prog_io_mutable.m"
#line 85 "prog_io_mutable.m"
                switch (parse_tree__prog_io_mutable__Arity_22) {
#line 85 "prog_io_mutable.m"
                  default:
#line 85 "prog_io_mutable.m"
                    parse_tree__prog_io_mutable__succeeded = MR_FALSE;
#line 85 "prog_io_mutable.m"
                    break;
#line 85 "prog_io_mutable.m"
                  case (MR_Integer) 0:
#line 85 "prog_io_mutable.m"
                    parse_tree__prog_io_mutable__succeeded = MR_TRUE;
#line 85 "prog_io_mutable.m"
                    break;
#line 85 "prog_io_mutable.m"
                  case (MR_Integer) 2:
#line 85 "prog_io_mutable.m"
                    parse_tree__prog_io_mutable__succeeded = MR_TRUE;
#line 85 "prog_io_mutable.m"
                    break;
#line 85 "prog_io_mutable.m"
                }
#line 85 "prog_io_mutable.m"
                if (parse_tree__prog_io_mutable__succeeded)
#line 87 "prog_io_mutable.m"
                  {
#line 87 "prog_io_mutable.m"
                    MR_Word parse_tree__prog_io_mutable__ItemInitialise_23;
#line 87 "prog_io_mutable.m"
                    MR_Word parse_tree__prog_io_mutable__Item_24;
#line 87 "prog_io_mutable.m"
                    MR_Word parse_tree__prog_io_mutable__V_27_27;

#line 86 "prog_io_mutable.m"
                    {
#line 86 "prog_io_mutable.m"
                      parse_tree__prog_io_mutable__ItemInitialise_23 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
#line 86 "prog_io_mutable.m"
                      MR_hl_field(MR_mktag(0), parse_tree__prog_io_mutable__ItemInitialise_23, 0) = ((MR_Box) (parse_tree__prog_io_mutable__SymName_21));
#line 86 "prog_io_mutable.m"
                      MR_hl_field(MR_mktag(0), parse_tree__prog_io_mutable__ItemInitialise_23, 1) = ((MR_Box) (parse_tree__prog_io_mutable__Arity_22));
#line 86 "prog_io_mutable.m"
                      MR_hl_field(MR_mktag(0), parse_tree__prog_io_mutable__ItemInitialise_23, 2) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 86 "prog_io_mutable.m"
                      MR_hl_field(MR_mktag(0), parse_tree__prog_io_mutable__ItemInitialise_23, 3) = ((MR_Box) (parse_tree__prog_io_mutable__Context_10));
#line 86 "prog_io_mutable.m"
                      MR_hl_field(MR_mktag(0), parse_tree__prog_io_mutable__ItemInitialise_23, 4) = ((MR_Box) (parse_tree__prog_io_mutable__SeqNum_11));
#line 86 "prog_io_mutable.m"
                    }
#line 88 "prog_io_mutable.m"
                    {
#line 88 "prog_io_mutable.m"
                      parse_tree__prog_io_mutable__Item_24 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 88 "prog_io_mutable.m"
                      MR_hl_field(MR_mktag(3), parse_tree__prog_io_mutable__Item_24, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 7));
#line 88 "prog_io_mutable.m"
                      MR_hl_field(MR_mktag(3), parse_tree__prog_io_mutable__Item_24, 1) = ((MR_Box) (parse_tree__prog_io_mutable__ItemInitialise_23));
#line 88 "prog_io_mutable.m"
                    }
#line 89 "prog_io_mutable.m"
                    {
#line 89 "prog_io_mutable.m"
                      parse_tree__prog_io_mutable__V_27_27 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 89 "prog_io_mutable.m"
                      MR_hl_field(MR_mktag(0), parse_tree__prog_io_mutable__V_27_27, 0) = ((MR_Box) (parse_tree__prog_io_mutable__Item_24));
#line 89 "prog_io_mutable.m"
                    }
#line 89 "prog_io_mutable.m"
                    {
#line 89 "prog_io_mutable.m"
                      MR_Word base;
#line 89 "prog_io_mutable.m"
                      base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 89 "prog_io_mutable.m"
                      *parse_tree__prog_io_mutable__MaybeIOM_12 = base;
#line 89 "prog_io_mutable.m"
                      MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (parse_tree__prog_io_mutable__V_27_27));
#line 89 "prog_io_mutable.m"
                    }
#line 87 "prog_io_mutable.m"
                  }
#line 85 "prog_io_mutable.m"
                else
#line 91 "prog_io_mutable.m"
                  {
#line 91 "prog_io_mutable.m"
                    MR_Word parse_tree__prog_io_mutable__TypeCtorInfo_130_130 = (MR_Word) &mercury__term__term__type_ctor_info_generic_0;
#line 91 "prog_io_mutable.m"
                    MR_Word parse_tree__prog_io_mutable__V_30_30;
#line 91 "prog_io_mutable.m"
                    MR_Word parse_tree__prog_io_mutable__V_33_33;
#line 91 "prog_io_mutable.m"
                    MR_Word parse_tree__prog_io_mutable__V_36_36;
#line 91 "prog_io_mutable.m"
                    MR_Word parse_tree__prog_io_mutable__V_37_37;
#line 91 "prog_io_mutable.m"
                    MR_Word parse_tree__prog_io_mutable__V_52_52;
#line 91 "prog_io_mutable.m"
                    MR_Word parse_tree__prog_io_mutable__V_53_53;
#line 91 "prog_io_mutable.m"
                    MR_Word parse_tree__prog_io_mutable__V_54_54;
#line 91 "prog_io_mutable.m"
                    MR_Word parse_tree__prog_io_mutable__V_55_55;
#line 91 "prog_io_mutable.m"
                    MR_Word parse_tree__prog_io_mutable__V_56_56;
#line 91 "prog_io_mutable.m"
                    MR_Word parse_tree__prog_io_mutable__V_59_59;
#line 91 "prog_io_mutable.m"
                    MR_String parse_tree__prog_io_mutable__TermStr_118;
#line 91 "prog_io_mutable.m"
                    MR_Word parse_tree__prog_io_mutable__Pieces_119;
#line 91 "prog_io_mutable.m"
                    MR_Word parse_tree__prog_io_mutable__Spec_120;

#line 91 "prog_io_mutable.m"
                    {
#line 91 "prog_io_mutable.m"
                      parse_tree__prog_io_mutable__TermStr_118 = parse_tree__parse_tree_out_term__describe_error_term_2_f_0(parse_tree__prog_io_mutable__TypeCtorInfo_130_130, parse_tree__prog_io_mutable__VarSet_8, parse_tree__prog_io_mutable__Term_13);
                    }
#line 94 "prog_io_mutable.m"
                    {
#line 94 "prog_io_mutable.m"
                      parse_tree__prog_io_mutable__V_37_37 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 94 "prog_io_mutable.m"
                      MR_hl_field(MR_mktag(3), parse_tree__prog_io_mutable__V_37_37, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 0));
#line 94 "prog_io_mutable.m"
                      MR_hl_field(MR_mktag(3), parse_tree__prog_io_mutable__V_37_37, 1) = ((MR_Box) (parse_tree__prog_io_mutable__TermStr_118));
#line 94 "prog_io_mutable.m"
                    }
#line 94 "prog_io_mutable.m"
                    {
#line 94 "prog_io_mutable.m"
                      parse_tree__prog_io_mutable__V_36_36 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 94 "prog_io_mutable.m"
                      MR_hl_field(MR_mktag(1), parse_tree__prog_io_mutable__V_36_36, 0) = ((MR_Box) (parse_tree__prog_io_mutable__V_37_37));
#line 94 "prog_io_mutable.m"
                      MR_hl_field(MR_mktag(1), parse_tree__prog_io_mutable__V_36_36, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__prog_io_mutable_scalar_common_2[8])));
#line 94 "prog_io_mutable.m"
                    }
#line 93 "prog_io_mutable.m"
                    {
#line 93 "prog_io_mutable.m"
                      parse_tree__prog_io_mutable__V_33_33 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 93 "prog_io_mutable.m"
                      MR_hl_field(MR_mktag(1), parse_tree__prog_io_mutable__V_33_33, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__prog_io_mutable_scalar_common_2[80])));
#line 93 "prog_io_mutable.m"
                      MR_hl_field(MR_mktag(1), parse_tree__prog_io_mutable__V_33_33, 1) = ((MR_Box) (parse_tree__prog_io_mutable__V_36_36));
#line 93 "prog_io_mutable.m"
                    }
#line 92 "prog_io_mutable.m"
                    {
#line 92 "prog_io_mutable.m"
                      parse_tree__prog_io_mutable__V_30_30 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 92 "prog_io_mutable.m"
                      MR_hl_field(MR_mktag(1), parse_tree__prog_io_mutable__V_30_30, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__prog_io_mutable_scalar_common_2[76])));
#line 92 "prog_io_mutable.m"
                      MR_hl_field(MR_mktag(1), parse_tree__prog_io_mutable__V_30_30, 1) = ((MR_Box) (parse_tree__prog_io_mutable__V_33_33));
#line 92 "prog_io_mutable.m"
                    }
#line 92 "prog_io_mutable.m"
                    {
#line 92 "prog_io_mutable.m"
                      parse_tree__prog_io_mutable__Pieces_119 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 92 "prog_io_mutable.m"
                      MR_hl_field(MR_mktag(1), parse_tree__prog_io_mutable__Pieces_119, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__prog_io_mutable_scalar_common_2[79])));
#line 92 "prog_io_mutable.m"
                      MR_hl_field(MR_mktag(1), parse_tree__prog_io_mutable__Pieces_119, 1) = ((MR_Box) (parse_tree__prog_io_mutable__V_30_30));
#line 92 "prog_io_mutable.m"
                    }
#line 97 "prog_io_mutable.m"
                    {
#line 97 "prog_io_mutable.m"
                      parse_tree__prog_io_mutable__V_54_54 = mercury__term__get_term_context_1_f_0(parse_tree__prog_io_mutable__TypeCtorInfo_130_130, parse_tree__prog_io_mutable__Term_13);
                    }
#line 97 "prog_io_mutable.m"
                    {
#line 97 "prog_io_mutable.m"
                      parse_tree__prog_io_mutable__V_56_56 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 97 "prog_io_mutable.m"
                      MR_hl_field(MR_mktag(0), parse_tree__prog_io_mutable__V_56_56, 0) = ((MR_Box) (parse_tree__prog_io_mutable__Pieces_119));
#line 97 "prog_io_mutable.m"
                    }
#line 97 "prog_io_mutable.m"
                    {
#line 97 "prog_io_mutable.m"
                      parse_tree__prog_io_mutable__V_55_55 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 97 "prog_io_mutable.m"
                      MR_hl_field(MR_mktag(1), parse_tree__prog_io_mutable__V_55_55, 0) = ((MR_Box) (parse_tree__prog_io_mutable__V_56_56));
#line 97 "prog_io_mutable.m"
                      MR_hl_field(MR_mktag(1), parse_tree__prog_io_mutable__V_55_55, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 97 "prog_io_mutable.m"
                    }
#line 97 "prog_io_mutable.m"
                    {
#line 97 "prog_io_mutable.m"
                      parse_tree__prog_io_mutable__V_53_53 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 97 "prog_io_mutable.m"
                      MR_hl_field(MR_mktag(0), parse_tree__prog_io_mutable__V_53_53, 0) = ((MR_Box) (parse_tree__prog_io_mutable__V_54_54));
#line 97 "prog_io_mutable.m"
                      MR_hl_field(MR_mktag(0), parse_tree__prog_io_mutable__V_53_53, 1) = ((MR_Box) (parse_tree__prog_io_mutable__V_55_55));
#line 97 "prog_io_mutable.m"
                    }
#line 97 "prog_io_mutable.m"
                    {
#line 97 "prog_io_mutable.m"
                      parse_tree__prog_io_mutable__V_52_52 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 97 "prog_io_mutable.m"
                      MR_hl_field(MR_mktag(1), parse_tree__prog_io_mutable__V_52_52, 0) = ((MR_Box) (parse_tree__prog_io_mutable__V_53_53));
#line 97 "prog_io_mutable.m"
                      MR_hl_field(MR_mktag(1), parse_tree__prog_io_mutable__V_52_52, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 97 "prog_io_mutable.m"
                    }
#line 96 "prog_io_mutable.m"
                    {
#line 96 "prog_io_mutable.m"
                      parse_tree__prog_io_mutable__Spec_120 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 96 "prog_io_mutable.m"
                      MR_hl_field(MR_mktag(0), parse_tree__prog_io_mutable__Spec_120, 0) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 96 "prog_io_mutable.m"
                      MR_hl_field(MR_mktag(0), parse_tree__prog_io_mutable__Spec_120, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 3))));
#line 96 "prog_io_mutable.m"
                      MR_hl_field(MR_mktag(0), parse_tree__prog_io_mutable__Spec_120, 2) = ((MR_Box) (parse_tree__prog_io_mutable__V_52_52));
#line 96 "prog_io_mutable.m"
                    }
#line 98 "prog_io_mutable.m"
                    {
#line 98 "prog_io_mutable.m"
                      parse_tree__prog_io_mutable__V_59_59 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 98 "prog_io_mutable.m"
                      MR_hl_field(MR_mktag(1), parse_tree__prog_io_mutable__V_59_59, 0) = ((MR_Box) (parse_tree__prog_io_mutable__Spec_120));
#line 98 "prog_io_mutable.m"
                      MR_hl_field(MR_mktag(1), parse_tree__prog_io_mutable__V_59_59, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 98 "prog_io_mutable.m"
                    }
#line 98 "prog_io_mutable.m"
                    {
#line 98 "prog_io_mutable.m"
                      MR_Word base;
#line 98 "prog_io_mutable.m"
                      base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 98 "prog_io_mutable.m"
                      *parse_tree__prog_io_mutable__MaybeIOM_12 = base;
#line 98 "prog_io_mutable.m"
                      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (parse_tree__prog_io_mutable__V_59_59));
#line 98 "prog_io_mutable.m"
                    }
#line 91 "prog_io_mutable.m"
                  }
#line 84 "prog_io_mutable.m"
              }
#line 72 "prog_io_mutable.m"
          }
#line 67 "prog_io_mutable.m"
      }
#line 66 "prog_io_mutable.m"
    else
#line 105 "prog_io_mutable.m"
      {
#line 105 "prog_io_mutable.m"
        MR_Word parse_tree__prog_io_mutable__V_110_110;
#line 105 "prog_io_mutable.m"
        MR_Word parse_tree__prog_io_mutable__V_111_111;
#line 105 "prog_io_mutable.m"
        MR_Word parse_tree__prog_io_mutable__V_116_116;
#line 105 "prog_io_mutable.m"
        MR_Word parse_tree__prog_io_mutable__Spec_128;

#line 107 "prog_io_mutable.m"
        {
#line 107 "prog_io_mutable.m"
          parse_tree__prog_io_mutable__V_111_111 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 107 "prog_io_mutable.m"
          MR_hl_field(MR_mktag(0), parse_tree__prog_io_mutable__V_111_111, 0) = ((MR_Box) (parse_tree__prog_io_mutable__Context_10));
#line 107 "prog_io_mutable.m"
          MR_hl_field(MR_mktag(0), parse_tree__prog_io_mutable__V_111_111, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__prog_io_mutable_scalar_common_2[81])));
#line 107 "prog_io_mutable.m"
        }
#line 107 "prog_io_mutable.m"
        {
#line 107 "prog_io_mutable.m"
          parse_tree__prog_io_mutable__V_110_110 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 107 "prog_io_mutable.m"
          MR_hl_field(MR_mktag(1), parse_tree__prog_io_mutable__V_110_110, 0) = ((MR_Box) (parse_tree__prog_io_mutable__V_111_111));
#line 107 "prog_io_mutable.m"
          MR_hl_field(MR_mktag(1), parse_tree__prog_io_mutable__V_110_110, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 107 "prog_io_mutable.m"
        }
#line 106 "prog_io_mutable.m"
        {
#line 106 "prog_io_mutable.m"
          parse_tree__prog_io_mutable__Spec_128 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 106 "prog_io_mutable.m"
          MR_hl_field(MR_mktag(0), parse_tree__prog_io_mutable__Spec_128, 0) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 106 "prog_io_mutable.m"
          MR_hl_field(MR_mktag(0), parse_tree__prog_io_mutable__Spec_128, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 3))));
#line 106 "prog_io_mutable.m"
          MR_hl_field(MR_mktag(0), parse_tree__prog_io_mutable__Spec_128, 2) = ((MR_Box) (parse_tree__prog_io_mutable__V_110_110));
#line 106 "prog_io_mutable.m"
        }
#line 108 "prog_io_mutable.m"
        {
#line 108 "prog_io_mutable.m"
          parse_tree__prog_io_mutable__V_116_116 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 108 "prog_io_mutable.m"
          MR_hl_field(MR_mktag(1), parse_tree__prog_io_mutable__V_116_116, 0) = ((MR_Box) (parse_tree__prog_io_mutable__Spec_128));
#line 108 "prog_io_mutable.m"
          MR_hl_field(MR_mktag(1), parse_tree__prog_io_mutable__V_116_116, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 108 "prog_io_mutable.m"
        }
#line 108 "prog_io_mutable.m"
        {
#line 108 "prog_io_mutable.m"
          MR_Word base;
#line 108 "prog_io_mutable.m"
          base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 108 "prog_io_mutable.m"
          *parse_tree__prog_io_mutable__MaybeIOM_12 = base;
#line 108 "prog_io_mutable.m"
          MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (parse_tree__prog_io_mutable__V_116_116));
#line 108 "prog_io_mutable.m"
        }
#line 105 "prog_io_mutable.m"
      }
#line 66 "prog_io_mutable.m"
  }
#line 28 "prog_io_mutable.m"
}

#line 37 "prog_io_mutable.m"
void MR_CALL 
parse_tree__prog_io_mutable____Compare____mutable_locn_0_0(
#line 37 "prog_io_mutable.m"
  MR_Word * parse_tree__prog_io_mutable__HeadVar__1_1,
#line 37 "prog_io_mutable.m"
  MR_Word parse_tree__prog_io_mutable__HeadVar__2_2,
#line 37 "prog_io_mutable.m"
  MR_Word parse_tree__prog_io_mutable__HeadVar__3_3)
#line 37 "prog_io_mutable.m"
{
#line 37 "prog_io_mutable.m"
  {
#line 37 "prog_io_mutable.m"
    MR_bool parse_tree__prog_io_mutable__succeeded;
#line 37 "prog_io_mutable.m"
    MR_Integer parse_tree__prog_io_mutable__Cast_HeadVar1_4 = (MR_Integer) parse_tree__prog_io_mutable__HeadVar__2_2;
#line 37 "prog_io_mutable.m"
    MR_Integer parse_tree__prog_io_mutable__Cast_HeadVar2_5 = (MR_Integer) parse_tree__prog_io_mutable__HeadVar__3_3;

#line 37 "prog_io_mutable.m"
    {
#line 37 "prog_io_mutable.m"
      mercury__private_builtin__builtin_compare_int_3_p_0(parse_tree__prog_io_mutable__HeadVar__1_1, parse_tree__prog_io_mutable__Cast_HeadVar1_4, parse_tree__prog_io_mutable__Cast_HeadVar2_5);
    }
#line 37 "prog_io_mutable.m"
  }
#line 37 "prog_io_mutable.m"
}

#line 37 "prog_io_mutable.m"
MR_bool MR_CALL 
parse_tree__prog_io_mutable____Unify____mutable_locn_0_0(
#line 37 "prog_io_mutable.m"
  MR_Word parse_tree__prog_io_mutable__HeadVar__2_1,
#line 37 "prog_io_mutable.m"
  MR_Word parse_tree__prog_io_mutable__HeadVar__2_2)
#line 37 "prog_io_mutable.m"
{
#line 3239 "parse_tree.prog_io_mutable.c"
  {
#line 3241 "parse_tree.prog_io_mutable.c"
    MR_bool parse_tree__prog_io_mutable__succeeded = (parse_tree__prog_io_mutable__HeadVar__2_1 == parse_tree__prog_io_mutable__HeadVar__2_2);

#line 3244 "parse_tree.prog_io_mutable.c"
    return parse_tree__prog_io_mutable__succeeded;
#line 3246 "parse_tree.prog_io_mutable.c"
  }
#line 37 "prog_io_mutable.m"
}

#line 292 "prog_io_mutable.m"
static void MR_CALL 
parse_tree__prog_io_mutable____Compare____collected_mutable_attribute_0_0(
#line 292 "prog_io_mutable.m"
  MR_Word * parse_tree__prog_io_mutable__HeadVar__1_1,
#line 292 "prog_io_mutable.m"
  MR_Word parse_tree__prog_io_mutable__HeadVar__2_2,
#line 292 "prog_io_mutable.m"
  MR_Word parse_tree__prog_io_mutable__HeadVar__3_3)
#line 292 "prog_io_mutable.m"
{
#line 292 "prog_io_mutable.m"
  {
#line 292 "prog_io_mutable.m"
    MR_bool parse_tree__prog_io_mutable__succeeded;
#line 292 "prog_io_mutable.m"
    MR_Integer parse_tree__prog_io_mutable__CastX_54 = (MR_Integer) parse_tree__prog_io_mutable__HeadVar__2_2;
#line 292 "prog_io_mutable.m"
    MR_Integer parse_tree__prog_io_mutable__CastY_55 = (MR_Integer) parse_tree__prog_io_mutable__HeadVar__3_3;

#line 292 "prog_io_mutable.m"
    parse_tree__prog_io_mutable__succeeded = (parse_tree__prog_io_mutable__CastX_54 == parse_tree__prog_io_mutable__CastY_55);
#line 292 "prog_io_mutable.m"
    if (parse_tree__prog_io_mutable__succeeded)
#line 3275 "parse_tree.prog_io_mutable.c"
      *parse_tree__prog_io_mutable__HeadVar__1_1 = (MR_Integer) 0;
#line 292 "prog_io_mutable.m"
    else
#line 292 "prog_io_mutable.m"
#line 292 "prog_io_mutable.m"
      switch (MR_tag((MR_Word) parse_tree__prog_io_mutable__HeadVar__2_2)) {
#line 292 "prog_io_mutable.m"
        default: /*NOTREACHED*/ MR_assert(0);
#line 292 "prog_io_mutable.m"
        case (MR_Integer) 0:
#line 292 "prog_io_mutable.m"
          {
#line 292 "prog_io_mutable.m"
            MR_Word parse_tree__prog_io_mutable__V_63_63 = (MR_Word) MR_body(((MR_Word) parse_tree__prog_io_mutable__HeadVar__2_2), (MR_Integer) 0);

#line 292 "prog_io_mutable.m"
#line 292 "prog_io_mutable.m"
            switch (MR_tag((MR_Word) parse_tree__prog_io_mutable__HeadVar__3_3)) {
#line 292 "prog_io_mutable.m"
              default: /*NOTREACHED*/ MR_assert(0);
#line 292 "prog_io_mutable.m"
              case (MR_Integer) 0:
#line 292 "prog_io_mutable.m"
                {
#line 292 "prog_io_mutable.m"
                  MR_Word parse_tree__prog_io_mutable__V_17_17 = (MR_Word) MR_body(((MR_Word) parse_tree__prog_io_mutable__HeadVar__3_3), (MR_Integer) 0);

#line 292 "prog_io_mutable.m"
                  {
#line 292 "prog_io_mutable.m"
                    parse_tree__prog_item____Compare____foreign_name_0_0(parse_tree__prog_io_mutable__HeadVar__1_1, parse_tree__prog_io_mutable__V_63_63, parse_tree__prog_io_mutable__V_17_17);
                  }
#line 292 "prog_io_mutable.m"
                }
#line 292 "prog_io_mutable.m"
                break;
#line 292 "prog_io_mutable.m"
              case (MR_Integer) 1:
#line 3314 "parse_tree.prog_io_mutable.c"
                *parse_tree__prog_io_mutable__HeadVar__1_1 = (MR_Integer) 2;
#line 292 "prog_io_mutable.m"
                break;
#line 292 "prog_io_mutable.m"
              case (MR_Integer) 2:
#line 3320 "parse_tree.prog_io_mutable.c"
                *parse_tree__prog_io_mutable__HeadVar__1_1 = (MR_Integer) 1;
#line 292 "prog_io_mutable.m"
                break;
#line 292 "prog_io_mutable.m"
              case (MR_Integer) 3:
#line 292 "prog_io_mutable.m"
#line 292 "prog_io_mutable.m"
                switch (((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__prog_io_mutable__HeadVar__3_3, (MR_Integer) 0)))) {
#line 292 "prog_io_mutable.m"
                  default: /*NOTREACHED*/ MR_assert(0);
#line 292 "prog_io_mutable.m"
                  case (MR_Integer) 0:
#line 3333 "parse_tree.prog_io_mutable.c"
                    *parse_tree__prog_io_mutable__HeadVar__1_1 = (MR_Integer) 1;
#line 292 "prog_io_mutable.m"
                    break;
#line 292 "prog_io_mutable.m"
                  case (MR_Integer) 1:
#line 3339 "parse_tree.prog_io_mutable.c"
                    *parse_tree__prog_io_mutable__HeadVar__1_1 = (MR_Integer) 1;
#line 292 "prog_io_mutable.m"
                    break;
#line 292 "prog_io_mutable.m"
                }
#line 292 "prog_io_mutable.m"
                break;
#line 292 "prog_io_mutable.m"
            }
#line 292 "prog_io_mutable.m"
          }
#line 292 "prog_io_mutable.m"
          break;
#line 292 "prog_io_mutable.m"
        case (MR_Integer) 1:
#line 292 "prog_io_mutable.m"
          {
#line 292 "prog_io_mutable.m"
            MR_Word parse_tree__prog_io_mutable__V_65_65 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_mutable__HeadVar__2_2, (MR_Integer) 0)));

#line 292 "prog_io_mutable.m"
#line 292 "prog_io_mutable.m"
            switch (MR_tag((MR_Word) parse_tree__prog_io_mutable__HeadVar__3_3)) {
#line 292 "prog_io_mutable.m"
              default: /*NOTREACHED*/ MR_assert(0);
#line 292 "prog_io_mutable.m"
              case (MR_Integer) 0:
#line 3367 "parse_tree.prog_io_mutable.c"
                *parse_tree__prog_io_mutable__HeadVar__1_1 = (MR_Integer) 1;
#line 292 "prog_io_mutable.m"
                break;
#line 292 "prog_io_mutable.m"
              case (MR_Integer) 1:
#line 292 "prog_io_mutable.m"
                {
#line 292 "prog_io_mutable.m"
                  MR_Word parse_tree__prog_io_mutable__V_5_5 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_mutable__HeadVar__3_3, (MR_Integer) 0)));
#line 292 "prog_io_mutable.m"
                  MR_Integer parse_tree__prog_io_mutable__V_72_72 = (MR_Integer) parse_tree__prog_io_mutable__V_65_65;
#line 292 "prog_io_mutable.m"
                  MR_Integer parse_tree__prog_io_mutable__V_73_73 = (MR_Integer) parse_tree__prog_io_mutable__V_5_5;

#line 292 "prog_io_mutable.m"
                  {
#line 292 "prog_io_mutable.m"
                    mercury__private_builtin__builtin_compare_int_3_p_0(parse_tree__prog_io_mutable__HeadVar__1_1, parse_tree__prog_io_mutable__V_72_72, parse_tree__prog_io_mutable__V_73_73);
                  }
#line 292 "prog_io_mutable.m"
                }
#line 292 "prog_io_mutable.m"
                break;
#line 292 "prog_io_mutable.m"
              case (MR_Integer) 2:
#line 3393 "parse_tree.prog_io_mutable.c"
                *parse_tree__prog_io_mutable__HeadVar__1_1 = (MR_Integer) 1;
#line 292 "prog_io_mutable.m"
                break;
#line 292 "prog_io_mutable.m"
              case (MR_Integer) 3:
#line 292 "prog_io_mutable.m"
#line 292 "prog_io_mutable.m"
                switch (((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__prog_io_mutable__HeadVar__3_3, (MR_Integer) 0)))) {
#line 292 "prog_io_mutable.m"
                  default: /*NOTREACHED*/ MR_assert(0);
#line 292 "prog_io_mutable.m"
                  case (MR_Integer) 0:
#line 3406 "parse_tree.prog_io_mutable.c"
                    *parse_tree__prog_io_mutable__HeadVar__1_1 = (MR_Integer) 1;
#line 292 "prog_io_mutable.m"
                    break;
#line 292 "prog_io_mutable.m"
                  case (MR_Integer) 1:
#line 3412 "parse_tree.prog_io_mutable.c"
                    *parse_tree__prog_io_mutable__HeadVar__1_1 = (MR_Integer) 1;
#line 292 "prog_io_mutable.m"
                    break;
#line 292 "prog_io_mutable.m"
                }
#line 292 "prog_io_mutable.m"
                break;
#line 292 "prog_io_mutable.m"
            }
#line 292 "prog_io_mutable.m"
          }
#line 292 "prog_io_mutable.m"
          break;
#line 292 "prog_io_mutable.m"
        case (MR_Integer) 2:
#line 292 "prog_io_mutable.m"
          {
#line 292 "prog_io_mutable.m"
            MR_Word parse_tree__prog_io_mutable__V_61_61 = ((MR_Word) (MR_hl_field(MR_mktag(2), parse_tree__prog_io_mutable__HeadVar__2_2, (MR_Integer) 0)));

#line 292 "prog_io_mutable.m"
#line 292 "prog_io_mutable.m"
            switch (MR_tag((MR_Word) parse_tree__prog_io_mutable__HeadVar__3_3)) {
#line 292 "prog_io_mutable.m"
              default: /*NOTREACHED*/ MR_assert(0);
#line 292 "prog_io_mutable.m"
              case (MR_Integer) 0:
#line 3440 "parse_tree.prog_io_mutable.c"
                *parse_tree__prog_io_mutable__HeadVar__1_1 = (MR_Integer) 2;
#line 292 "prog_io_mutable.m"
                break;
#line 292 "prog_io_mutable.m"
              case (MR_Integer) 1:
#line 3446 "parse_tree.prog_io_mutable.c"
                *parse_tree__prog_io_mutable__HeadVar__1_1 = (MR_Integer) 2;
#line 292 "prog_io_mutable.m"
                break;
#line 292 "prog_io_mutable.m"
              case (MR_Integer) 2:
#line 292 "prog_io_mutable.m"
                {
#line 292 "prog_io_mutable.m"
                  MR_Word parse_tree__prog_io_mutable__V_29_29 = ((MR_Word) (MR_hl_field(MR_mktag(2), parse_tree__prog_io_mutable__HeadVar__3_3, (MR_Integer) 0)));
#line 292 "prog_io_mutable.m"
                  MR_Integer parse_tree__prog_io_mutable__V_66_66 = (MR_Integer) parse_tree__prog_io_mutable__V_61_61;
#line 292 "prog_io_mutable.m"
                  MR_Integer parse_tree__prog_io_mutable__V_67_67 = (MR_Integer) parse_tree__prog_io_mutable__V_29_29;

#line 292 "prog_io_mutable.m"
                  {
#line 292 "prog_io_mutable.m"
                    mercury__private_builtin__builtin_compare_int_3_p_0(parse_tree__prog_io_mutable__HeadVar__1_1, parse_tree__prog_io_mutable__V_66_66, parse_tree__prog_io_mutable__V_67_67);
                  }
#line 292 "prog_io_mutable.m"
                }
#line 292 "prog_io_mutable.m"
                break;
#line 292 "prog_io_mutable.m"
              case (MR_Integer) 3:
#line 292 "prog_io_mutable.m"
#line 292 "prog_io_mutable.m"
                switch (((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__prog_io_mutable__HeadVar__3_3, (MR_Integer) 0)))) {
#line 292 "prog_io_mutable.m"
                  default: /*NOTREACHED*/ MR_assert(0);
#line 292 "prog_io_mutable.m"
                  case (MR_Integer) 0:
#line 3479 "parse_tree.prog_io_mutable.c"
                    *parse_tree__prog_io_mutable__HeadVar__1_1 = (MR_Integer) 1;
#line 292 "prog_io_mutable.m"
                    break;
#line 292 "prog_io_mutable.m"
                  case (MR_Integer) 1:
#line 3485 "parse_tree.prog_io_mutable.c"
                    *parse_tree__prog_io_mutable__HeadVar__1_1 = (MR_Integer) 1;
#line 292 "prog_io_mutable.m"
                    break;
#line 292 "prog_io_mutable.m"
                }
#line 292 "prog_io_mutable.m"
                break;
#line 292 "prog_io_mutable.m"
            }
#line 292 "prog_io_mutable.m"
          }
#line 292 "prog_io_mutable.m"
          break;
#line 292 "prog_io_mutable.m"
        case (MR_Integer) 3:
#line 292 "prog_io_mutable.m"
#line 292 "prog_io_mutable.m"
          switch (((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__prog_io_mutable__HeadVar__2_2, (MR_Integer) 0)))) {
#line 292 "prog_io_mutable.m"
            default: /*NOTREACHED*/ MR_assert(0);
#line 292 "prog_io_mutable.m"
            case (MR_Integer) 0:
#line 292 "prog_io_mutable.m"
              {
#line 292 "prog_io_mutable.m"
                MR_Word parse_tree__prog_io_mutable__V_62_62 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__prog_io_mutable__HeadVar__2_2, (MR_Integer) 1)));

#line 292 "prog_io_mutable.m"
#line 292 "prog_io_mutable.m"
                switch (MR_tag((MR_Word) parse_tree__prog_io_mutable__HeadVar__3_3)) {
#line 292 "prog_io_mutable.m"
                  default: /*NOTREACHED*/ MR_assert(0);
#line 292 "prog_io_mutable.m"
                  case (MR_Integer) 0:
#line 3520 "parse_tree.prog_io_mutable.c"
                    *parse_tree__prog_io_mutable__HeadVar__1_1 = (MR_Integer) 2;
#line 292 "prog_io_mutable.m"
                    break;
#line 292 "prog_io_mutable.m"
                  case (MR_Integer) 1:
#line 3526 "parse_tree.prog_io_mutable.c"
                    *parse_tree__prog_io_mutable__HeadVar__1_1 = (MR_Integer) 2;
#line 292 "prog_io_mutable.m"
                    break;
#line 292 "prog_io_mutable.m"
                  case (MR_Integer) 2:
#line 3532 "parse_tree.prog_io_mutable.c"
                    *parse_tree__prog_io_mutable__HeadVar__1_1 = (MR_Integer) 2;
#line 292 "prog_io_mutable.m"
                    break;
#line 292 "prog_io_mutable.m"
                  case (MR_Integer) 3:
#line 292 "prog_io_mutable.m"
#line 292 "prog_io_mutable.m"
                    switch (((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__prog_io_mutable__HeadVar__3_3, (MR_Integer) 0)))) {
#line 292 "prog_io_mutable.m"
                      default: /*NOTREACHED*/ MR_assert(0);
#line 292 "prog_io_mutable.m"
                      case (MR_Integer) 0:
#line 292 "prog_io_mutable.m"
                        {
#line 292 "prog_io_mutable.m"
                          MR_Word parse_tree__prog_io_mutable__V_41_41 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__prog_io_mutable__HeadVar__3_3, (MR_Integer) 1)));
#line 292 "prog_io_mutable.m"
                          MR_Integer parse_tree__prog_io_mutable__V_68_68 = (MR_Integer) parse_tree__prog_io_mutable__V_62_62;
#line 292 "prog_io_mutable.m"
                          MR_Integer parse_tree__prog_io_mutable__V_69_69 = (MR_Integer) parse_tree__prog_io_mutable__V_41_41;

#line 292 "prog_io_mutable.m"
                          {
#line 292 "prog_io_mutable.m"
                            mercury__private_builtin__builtin_compare_int_3_p_0(parse_tree__prog_io_mutable__HeadVar__1_1, parse_tree__prog_io_mutable__V_68_68, parse_tree__prog_io_mutable__V_69_69);
                          }
#line 292 "prog_io_mutable.m"
                        }
#line 292 "prog_io_mutable.m"
                        break;
#line 292 "prog_io_mutable.m"
                      case (MR_Integer) 1:
#line 3565 "parse_tree.prog_io_mutable.c"
                        *parse_tree__prog_io_mutable__HeadVar__1_1 = (MR_Integer) 1;
#line 292 "prog_io_mutable.m"
                        break;
#line 292 "prog_io_mutable.m"
                    }
#line 292 "prog_io_mutable.m"
                    break;
#line 292 "prog_io_mutable.m"
                }
#line 292 "prog_io_mutable.m"
              }
#line 292 "prog_io_mutable.m"
              break;
#line 292 "prog_io_mutable.m"
            case (MR_Integer) 1:
#line 292 "prog_io_mutable.m"
              {
#line 292 "prog_io_mutable.m"
                MR_Word parse_tree__prog_io_mutable__V_64_64 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__prog_io_mutable__HeadVar__2_2, (MR_Integer) 1)));

#line 292 "prog_io_mutable.m"
#line 292 "prog_io_mutable.m"
                switch (MR_tag((MR_Word) parse_tree__prog_io_mutable__HeadVar__3_3)) {
#line 292 "prog_io_mutable.m"
                  default: /*NOTREACHED*/ MR_assert(0);
#line 292 "prog_io_mutable.m"
                  case (MR_Integer) 0:
#line 3593 "parse_tree.prog_io_mutable.c"
                    *parse_tree__prog_io_mutable__HeadVar__1_1 = (MR_Integer) 2;
#line 292 "prog_io_mutable.m"
                    break;
#line 292 "prog_io_mutable.m"
                  case (MR_Integer) 1:
#line 3599 "parse_tree.prog_io_mutable.c"
                    *parse_tree__prog_io_mutable__HeadVar__1_1 = (MR_Integer) 2;
#line 292 "prog_io_mutable.m"
                    break;
#line 292 "prog_io_mutable.m"
                  case (MR_Integer) 2:
#line 3605 "parse_tree.prog_io_mutable.c"
                    *parse_tree__prog_io_mutable__HeadVar__1_1 = (MR_Integer) 2;
#line 292 "prog_io_mutable.m"
                    break;
#line 292 "prog_io_mutable.m"
                  case (MR_Integer) 3:
#line 292 "prog_io_mutable.m"
#line 292 "prog_io_mutable.m"
                    switch (((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__prog_io_mutable__HeadVar__3_3, (MR_Integer) 0)))) {
#line 292 "prog_io_mutable.m"
                      default: /*NOTREACHED*/ MR_assert(0);
#line 292 "prog_io_mutable.m"
                      case (MR_Integer) 0:
#line 3618 "parse_tree.prog_io_mutable.c"
                        *parse_tree__prog_io_mutable__HeadVar__1_1 = (MR_Integer) 2;
#line 292 "prog_io_mutable.m"
                        break;
#line 292 "prog_io_mutable.m"
                      case (MR_Integer) 1:
#line 292 "prog_io_mutable.m"
                        {
#line 292 "prog_io_mutable.m"
                          MR_Word parse_tree__prog_io_mutable__V_53_53 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__prog_io_mutable__HeadVar__3_3, (MR_Integer) 1)));
#line 292 "prog_io_mutable.m"
                          MR_Integer parse_tree__prog_io_mutable__V_70_70 = (MR_Integer) parse_tree__prog_io_mutable__V_64_64;
#line 292 "prog_io_mutable.m"
                          MR_Integer parse_tree__prog_io_mutable__V_71_71 = (MR_Integer) parse_tree__prog_io_mutable__V_53_53;

#line 292 "prog_io_mutable.m"
                          {
#line 292 "prog_io_mutable.m"
                            mercury__private_builtin__builtin_compare_int_3_p_0(parse_tree__prog_io_mutable__HeadVar__1_1, parse_tree__prog_io_mutable__V_70_70, parse_tree__prog_io_mutable__V_71_71);
                          }
#line 292 "prog_io_mutable.m"
                        }
#line 292 "prog_io_mutable.m"
                        break;
#line 292 "prog_io_mutable.m"
                    }
#line 292 "prog_io_mutable.m"
                    break;
#line 292 "prog_io_mutable.m"
                }
#line 292 "prog_io_mutable.m"
              }
#line 292 "prog_io_mutable.m"
              break;
#line 292 "prog_io_mutable.m"
          }
#line 292 "prog_io_mutable.m"
          break;
#line 292 "prog_io_mutable.m"
      }
#line 292 "prog_io_mutable.m"
  }
#line 292 "prog_io_mutable.m"
}

#line 292 "prog_io_mutable.m"
static MR_bool MR_CALL 
parse_tree__prog_io_mutable____Unify____collected_mutable_attribute_0_0(
#line 292 "prog_io_mutable.m"
  MR_Word parse_tree__prog_io_mutable__HeadVar__1_1,
#line 292 "prog_io_mutable.m"
  MR_Word parse_tree__prog_io_mutable__HeadVar__2_2)
#line 292 "prog_io_mutable.m"
{
#line 292 "prog_io_mutable.m"
  {
#line 292 "prog_io_mutable.m"
    MR_bool parse_tree__prog_io_mutable__succeeded;
#line 292 "prog_io_mutable.m"
    MR_Integer parse_tree__prog_io_mutable__CastX_13 = (MR_Integer) parse_tree__prog_io_mutable__HeadVar__1_1;
#line 292 "prog_io_mutable.m"
    MR_Integer parse_tree__prog_io_mutable__CastY_14 = (MR_Integer) parse_tree__prog_io_mutable__HeadVar__2_2;

#line 292 "prog_io_mutable.m"
    parse_tree__prog_io_mutable__succeeded = (parse_tree__prog_io_mutable__CastX_13 == parse_tree__prog_io_mutable__CastY_14);
#line 292 "prog_io_mutable.m"
    if (parse_tree__prog_io_mutable__succeeded)
#line 292 "prog_io_mutable.m"
      parse_tree__prog_io_mutable__succeeded = MR_TRUE;
#line 292 "prog_io_mutable.m"
    else
#line 292 "prog_io_mutable.m"
#line 292 "prog_io_mutable.m"
      switch (MR_tag((MR_Word) parse_tree__prog_io_mutable__HeadVar__1_1)) {
#line 292 "prog_io_mutable.m"
        default: /*NOTREACHED*/ MR_assert(0);
#line 292 "prog_io_mutable.m"
        case (MR_Integer) 0:
#line 292 "prog_io_mutable.m"
          {
#line 292 "prog_io_mutable.m"
            MR_Word parse_tree__prog_io_mutable__V_5_5 = (MR_Word) MR_body(((MR_Word) parse_tree__prog_io_mutable__HeadVar__1_1), (MR_Integer) 0);
#line 292 "prog_io_mutable.m"
            MR_Word parse_tree__prog_io_mutable__V_6_6;

#line 292 "prog_io_mutable.m"
            parse_tree__prog_io_mutable__succeeded = ((MR_tag((MR_Word) parse_tree__prog_io_mutable__HeadVar__2_2)) == (MR_mktag((MR_Integer) 0)));
#line 292 "prog_io_mutable.m"
            if (parse_tree__prog_io_mutable__succeeded)
#line 292 "prog_io_mutable.m"
              {
#line 292 "prog_io_mutable.m"
                parse_tree__prog_io_mutable__V_6_6 = (MR_Word) MR_body(((MR_Word) parse_tree__prog_io_mutable__HeadVar__2_2), (MR_Integer) 0);
#line 3711 "parse_tree.prog_io_mutable.c"
                {
#line 3713 "parse_tree.prog_io_mutable.c"
                  parse_tree__prog_io_mutable__succeeded = parse_tree__prog_item____Unify____foreign_name_0_0(parse_tree__prog_io_mutable__V_5_5, parse_tree__prog_io_mutable__V_6_6);
                }
#line 292 "prog_io_mutable.m"
              }
#line 292 "prog_io_mutable.m"
          }
#line 292 "prog_io_mutable.m"
          break;
#line 292 "prog_io_mutable.m"
        case (MR_Integer) 1:
#line 292 "prog_io_mutable.m"
          {
#line 292 "prog_io_mutable.m"
            MR_Word parse_tree__prog_io_mutable__V_3_3 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_mutable__HeadVar__1_1, (MR_Integer) 0)));
#line 292 "prog_io_mutable.m"
            MR_Word parse_tree__prog_io_mutable__V_4_4;

#line 292 "prog_io_mutable.m"
            parse_tree__prog_io_mutable__succeeded = ((MR_tag((MR_Word) parse_tree__prog_io_mutable__HeadVar__2_2)) == (MR_mktag((MR_Integer) 1)));
#line 292 "prog_io_mutable.m"
            if (parse_tree__prog_io_mutable__succeeded)
#line 292 "prog_io_mutable.m"
              {
#line 292 "prog_io_mutable.m"
                parse_tree__prog_io_mutable__V_4_4 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_mutable__HeadVar__2_2, (MR_Integer) 0)));
#line 3739 "parse_tree.prog_io_mutable.c"
                parse_tree__prog_io_mutable__succeeded = (parse_tree__prog_io_mutable__V_3_3 == parse_tree__prog_io_mutable__V_4_4);
#line 292 "prog_io_mutable.m"
              }
#line 292 "prog_io_mutable.m"
          }
#line 292 "prog_io_mutable.m"
          break;
#line 292 "prog_io_mutable.m"
        case (MR_Integer) 2:
#line 292 "prog_io_mutable.m"
          {
#line 292 "prog_io_mutable.m"
            MR_Word parse_tree__prog_io_mutable__V_7_7 = ((MR_Word) (MR_hl_field(MR_mktag(2), parse_tree__prog_io_mutable__HeadVar__1_1, (MR_Integer) 0)));
#line 292 "prog_io_mutable.m"
            MR_Word parse_tree__prog_io_mutable__V_8_8;

#line 292 "prog_io_mutable.m"
            parse_tree__prog_io_mutable__succeeded = ((MR_tag((MR_Word) parse_tree__prog_io_mutable__HeadVar__2_2)) == (MR_mktag((MR_Integer) 2)));
#line 292 "prog_io_mutable.m"
            if (parse_tree__prog_io_mutable__succeeded)
#line 292 "prog_io_mutable.m"
              {
#line 292 "prog_io_mutable.m"
                parse_tree__prog_io_mutable__V_8_8 = ((MR_Word) (MR_hl_field(MR_mktag(2), parse_tree__prog_io_mutable__HeadVar__2_2, (MR_Integer) 0)));
#line 3764 "parse_tree.prog_io_mutable.c"
                parse_tree__prog_io_mutable__succeeded = (parse_tree__prog_io_mutable__V_7_7 == parse_tree__prog_io_mutable__V_8_8);
#line 292 "prog_io_mutable.m"
              }
#line 292 "prog_io_mutable.m"
          }
#line 292 "prog_io_mutable.m"
          break;
#line 292 "prog_io_mutable.m"
        case (MR_Integer) 3:
#line 292 "prog_io_mutable.m"
#line 292 "prog_io_mutable.m"
          switch (((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__prog_io_mutable__HeadVar__1_1, (MR_Integer) 0)))) {
#line 292 "prog_io_mutable.m"
            default: /*NOTREACHED*/ MR_assert(0);
#line 292 "prog_io_mutable.m"
            case (MR_Integer) 0:
#line 292 "prog_io_mutable.m"
              {
#line 292 "prog_io_mutable.m"
                MR_Word parse_tree__prog_io_mutable__V_9_9 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__prog_io_mutable__HeadVar__1_1, (MR_Integer) 1)));
#line 292 "prog_io_mutable.m"
                MR_Word parse_tree__prog_io_mutable__V_10_10;

#line 292 "prog_io_mutable.m"
                parse_tree__prog_io_mutable__succeeded = ((((MR_tag((MR_Word) parse_tree__prog_io_mutable__HeadVar__2_2)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__prog_io_mutable__HeadVar__2_2, (MR_Integer) 0)))) == (MR_Integer) 0)));
#line 292 "prog_io_mutable.m"
                if (parse_tree__prog_io_mutable__succeeded)
#line 292 "prog_io_mutable.m"
                  {
#line 292 "prog_io_mutable.m"
                    parse_tree__prog_io_mutable__V_10_10 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__prog_io_mutable__HeadVar__2_2, (MR_Integer) 1)));
#line 3796 "parse_tree.prog_io_mutable.c"
                    parse_tree__prog_io_mutable__succeeded = (parse_tree__prog_io_mutable__V_9_9 == parse_tree__prog_io_mutable__V_10_10);
#line 292 "prog_io_mutable.m"
                  }
#line 292 "prog_io_mutable.m"
              }
#line 292 "prog_io_mutable.m"
              break;
#line 292 "prog_io_mutable.m"
            case (MR_Integer) 1:
#line 292 "prog_io_mutable.m"
              {
#line 292 "prog_io_mutable.m"
                MR_Word parse_tree__prog_io_mutable__V_11_11 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__prog_io_mutable__HeadVar__1_1, (MR_Integer) 1)));
#line 292 "prog_io_mutable.m"
                MR_Word parse_tree__prog_io_mutable__V_12_12;

#line 292 "prog_io_mutable.m"
                parse_tree__prog_io_mutable__succeeded = ((((MR_tag((MR_Word) parse_tree__prog_io_mutable__HeadVar__2_2)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__prog_io_mutable__HeadVar__2_2, (MR_Integer) 0)))) == (MR_Integer) 1)));
#line 292 "prog_io_mutable.m"
                if (parse_tree__prog_io_mutable__succeeded)
#line 292 "prog_io_mutable.m"
                  {
#line 292 "prog_io_mutable.m"
                    parse_tree__prog_io_mutable__V_12_12 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__prog_io_mutable__HeadVar__2_2, (MR_Integer) 1)));
#line 3821 "parse_tree.prog_io_mutable.c"
                    parse_tree__prog_io_mutable__succeeded = (parse_tree__prog_io_mutable__V_11_11 == parse_tree__prog_io_mutable__V_12_12);
#line 292 "prog_io_mutable.m"
                  }
#line 292 "prog_io_mutable.m"
              }
#line 292 "prog_io_mutable.m"
              break;
#line 292 "prog_io_mutable.m"
          }
#line 292 "prog_io_mutable.m"
          break;
#line 292 "prog_io_mutable.m"
      }
#line 292 "prog_io_mutable.m"
    return parse_tree__prog_io_mutable__succeeded;
#line 292 "prog_io_mutable.m"
  }
#line 292 "prog_io_mutable.m"
}

#line 380 "prog_io_mutable.m"
static void MR_CALL 
parse_tree__prog_io_mutable__parse_mutable_attr_2_p_0(
#line 380 "prog_io_mutable.m"
  MR_Word parse_tree__prog_io_mutable__MutAttrTerm_3,
#line 380 "prog_io_mutable.m"
  MR_Word * parse_tree__prog_io_mutable__MutAttrResult_4)
#line 380 "prog_io_mutable.m"
{
#line 384 "prog_io_mutable.m"
  {
#line 384 "prog_io_mutable.m"
    MR_bool parse_tree__prog_io_mutable__succeeded = ((MR_tag((MR_Word) parse_tree__prog_io_mutable__MutAttrTerm_3)) == (MR_mktag((MR_Integer) 0)));
#line 384 "prog_io_mutable.m"
    MR_Word parse_tree__prog_io_mutable__MutAttr_7;
#line 385 "prog_io_mutable.m"
    MR_String parse_tree__prog_io_mutable__String_5;
#line 385 "prog_io_mutable.m"
    MR_Word parse_tree__prog_io_mutable__V_17_17;
#line 385 "prog_io_mutable.m"
    MR_Word parse_tree__prog_io_mutable__V_18_18;
#line 385 "prog_io_mutable.m"
    MR_Word parse_tree__prog_io_mutable__V_6_6;
#line 389 "prog_io_mutable.m"
    MR_Integer parse_tree__prog_io_mutable__lo_0;
#line 389 "prog_io_mutable.m"
    MR_Integer parse_tree__prog_io_mutable__hi_1;
#line 389 "prog_io_mutable.m"
    MR_Integer parse_tree__prog_io_mutable__mid_2;
#line 389 "prog_io_mutable.m"
    MR_Integer parse_tree__prog_io_mutable__result_3;

#line 385 "prog_io_mutable.m"
    if (parse_tree__prog_io_mutable__succeeded)
#line 385 "prog_io_mutable.m"
      {
#line 385 "prog_io_mutable.m"
        parse_tree__prog_io_mutable__V_17_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_mutable__MutAttrTerm_3, (MR_Integer) 0)));
#line 385 "prog_io_mutable.m"
        parse_tree__prog_io_mutable__V_18_18 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_mutable__MutAttrTerm_3, (MR_Integer) 1)));
#line 385 "prog_io_mutable.m"
        parse_tree__prog_io_mutable__V_6_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_mutable__MutAttrTerm_3, (MR_Integer) 2)));
#line 385 "prog_io_mutable.m"
        parse_tree__prog_io_mutable__succeeded = (parse_tree__prog_io_mutable__V_18_18 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 385 "prog_io_mutable.m"
        if (parse_tree__prog_io_mutable__succeeded)
#line 385 "prog_io_mutable.m"
          {
#line 385 "prog_io_mutable.m"
            parse_tree__prog_io_mutable__succeeded = ((MR_tag((MR_Word) parse_tree__prog_io_mutable__V_17_17)) == (MR_mktag((MR_Integer) 0)));
#line 385 "prog_io_mutable.m"
            if (parse_tree__prog_io_mutable__succeeded)
#line 385 "prog_io_mutable.m"
              {
#line 385 "prog_io_mutable.m"
                parse_tree__prog_io_mutable__String_5 = ((MR_String) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_mutable__V_17_17, (MR_Integer) 0)));
#line 389 "prog_io_mutable.m"
                /* binary string simple lookup switch */
#line 389 "prog_io_mutable.m"
                parse_tree__prog_io_mutable__lo_0 = (MR_Integer) 0;
#line 389 "prog_io_mutable.m"
                parse_tree__prog_io_mutable__hi_1 = (MR_Integer) 4;
#line 389 "prog_io_mutable.m"
                do
#line 389 "prog_io_mutable.m"
                  {
#line 389 "prog_io_mutable.m"
                    parse_tree__prog_io_mutable__mid_2 = (((parse_tree__prog_io_mutable__lo_0 + parse_tree__prog_io_mutable__hi_1)) / (MR_Integer) 2);
#line 389 "prog_io_mutable.m"
                    parse_tree__prog_io_mutable__result_3 = MR_strcmp(parse_tree__prog_io_mutable__String_5, ((&parse_tree__prog_io_mutable_vector_common_6[0 + parse_tree__prog_io_mutable__mid_2]))->parse_tree__prog_io_mutable__vector_common_type_6_0__vct_6_f_0);
#line 389 "prog_io_mutable.m"
                    if ((parse_tree__prog_io_mutable__result_3 == (MR_Integer) 0))
#line 389 "prog_io_mutable.m"
                      {
#line 389 "prog_io_mutable.m"
                        parse_tree__prog_io_mutable__MutAttr_7 = ((&parse_tree__prog_io_mutable_vector_common_6[0 + parse_tree__prog_io_mutable__mid_2]))->parse_tree__prog_io_mutable__vector_common_type_6_0__vct_6_f_1;
#line 389 "prog_io_mutable.m"
                        parse_tree__prog_io_mutable__succeeded = MR_TRUE;
#line 389 "prog_io_mutable.m"
                        /* jump out of search loop */
#line 389 "prog_io_mutable.m"
                        goto label_0;
#line 389 "prog_io_mutable.m"
                      }
#line 389 "prog_io_mutable.m"
                    else
#line 389 "prog_io_mutable.m"
                    if ((parse_tree__prog_io_mutable__result_3 < (MR_Integer) 0))
#line 389 "prog_io_mutable.m"
                      parse_tree__prog_io_mutable__hi_1 = (parse_tree__prog_io_mutable__mid_2 - (MR_Integer) 1);
#line 389 "prog_io_mutable.m"
                    else
#line 389 "prog_io_mutable.m"
                      parse_tree__prog_io_mutable__lo_0 = (parse_tree__prog_io_mutable__mid_2 + (MR_Integer) 1);
#line 389 "prog_io_mutable.m"
                  }
#line 389 "prog_io_mutable.m"
                while ((parse_tree__prog_io_mutable__lo_0 <= parse_tree__prog_io_mutable__hi_1));
#line 389 "prog_io_mutable.m"
                parse_tree__prog_io_mutable__succeeded = MR_FALSE;
#line 389 "prog_io_mutable.m"
              label_0:;
#line 385 "prog_io_mutable.m"
              }
#line 385 "prog_io_mutable.m"
          }
#line 385 "prog_io_mutable.m"
      }
#line 384 "prog_io_mutable.m"
    if (parse_tree__prog_io_mutable__succeeded)
#line 404 "prog_io_mutable.m"
      {
#line 404 "prog_io_mutable.m"
        MR_Word base;
#line 404 "prog_io_mutable.m"
        base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 404 "prog_io_mutable.m"
        *parse_tree__prog_io_mutable__MutAttrResult_4 = base;
#line 404 "prog_io_mutable.m"
        MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (parse_tree__prog_io_mutable__MutAttr_7));
#line 404 "prog_io_mutable.m"
      }
#line 384 "prog_io_mutable.m"
    else
#line 405 "prog_io_mutable.m"
      {
#line 405 "prog_io_mutable.m"
        MR_Word parse_tree__prog_io_mutable__Lang_12;
#line 405 "prog_io_mutable.m"
        MR_String parse_tree__prog_io_mutable__ForeignName_13;
#line 406 "prog_io_mutable.m"
        MR_Word parse_tree__prog_io_mutable__Args_8;
#line 406 "prog_io_mutable.m"
        MR_Word parse_tree__prog_io_mutable__LangTerm_10;
#line 406 "prog_io_mutable.m"
        MR_Word parse_tree__prog_io_mutable__ForeignNameTerm_11;
#line 406 "prog_io_mutable.m"
        MR_Word parse_tree__prog_io_mutable__V_24_24;
#line 406 "prog_io_mutable.m"
        MR_String parse_tree__prog_io_mutable__V_25_25;
#line 406 "prog_io_mutable.m"
        MR_Word parse_tree__prog_io_mutable__V_26_26;
#line 406 "prog_io_mutable.m"
        MR_Word parse_tree__prog_io_mutable__V_27_27;
#line 406 "prog_io_mutable.m"
        MR_Word parse_tree__prog_io_mutable__V_28_28;
#line 406 "prog_io_mutable.m"
        MR_Word parse_tree__prog_io_mutable__V_29_29;
#line 406 "prog_io_mutable.m"
        MR_Word parse_tree__prog_io_mutable__V_9_9;
#line 409 "prog_io_mutable.m"
        MR_Word parse_tree__prog_io_mutable__V_14_14;

#line 406 "prog_io_mutable.m"
        parse_tree__prog_io_mutable__succeeded = ((MR_tag((MR_Word) parse_tree__prog_io_mutable__MutAttrTerm_3)) == (MR_mktag((MR_Integer) 0)));
#line 406 "prog_io_mutable.m"
        if (parse_tree__prog_io_mutable__succeeded)
#line 406 "prog_io_mutable.m"
          {
#line 406 "prog_io_mutable.m"
            parse_tree__prog_io_mutable__V_24_24 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_mutable__MutAttrTerm_3, (MR_Integer) 0)));
#line 406 "prog_io_mutable.m"
            parse_tree__prog_io_mutable__Args_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_mutable__MutAttrTerm_3, (MR_Integer) 1)));
#line 406 "prog_io_mutable.m"
            parse_tree__prog_io_mutable__V_9_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_mutable__MutAttrTerm_3, (MR_Integer) 2)));
#line 406 "prog_io_mutable.m"
            parse_tree__prog_io_mutable__succeeded = ((MR_tag((MR_Word) parse_tree__prog_io_mutable__V_24_24)) == (MR_mktag((MR_Integer) 0)));
#line 406 "prog_io_mutable.m"
            if (parse_tree__prog_io_mutable__succeeded)
#line 406 "prog_io_mutable.m"
              {
#line 406 "prog_io_mutable.m"
                parse_tree__prog_io_mutable__V_25_25 = ((MR_String) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_mutable__V_24_24, (MR_Integer) 0)));
#line 406 "prog_io_mutable.m"
                parse_tree__prog_io_mutable__succeeded = (strcmp(parse_tree__prog_io_mutable__V_25_25, (MR_String) "foreign_name") == 0);
#line 406 "prog_io_mutable.m"
                if (parse_tree__prog_io_mutable__succeeded)
#line 406 "prog_io_mutable.m"
                  {
#line 407 "prog_io_mutable.m"
                    parse_tree__prog_io_mutable__succeeded = ((MR_tag((MR_Word) parse_tree__prog_io_mutable__Args_8)) == (MR_mktag((MR_Integer) 1)));
#line 407 "prog_io_mutable.m"
                    if (parse_tree__prog_io_mutable__succeeded)
#line 407 "prog_io_mutable.m"
                      {
#line 407 "prog_io_mutable.m"
                        parse_tree__prog_io_mutable__LangTerm_10 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_mutable__Args_8, (MR_Integer) 0)));
#line 407 "prog_io_mutable.m"
                        parse_tree__prog_io_mutable__V_26_26 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_mutable__Args_8, (MR_Integer) 1)));
#line 407 "prog_io_mutable.m"
                        parse_tree__prog_io_mutable__succeeded = ((MR_tag((MR_Word) parse_tree__prog_io_mutable__V_26_26)) == (MR_mktag((MR_Integer) 1)));
#line 407 "prog_io_mutable.m"
                        if (parse_tree__prog_io_mutable__succeeded)
#line 407 "prog_io_mutable.m"
                          {
#line 407 "prog_io_mutable.m"
                            parse_tree__prog_io_mutable__ForeignNameTerm_11 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_mutable__V_26_26, (MR_Integer) 0)));
#line 407 "prog_io_mutable.m"
                            parse_tree__prog_io_mutable__V_27_27 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_mutable__V_26_26, (MR_Integer) 1)));
#line 407 "prog_io_mutable.m"
                            parse_tree__prog_io_mutable__succeeded = (parse_tree__prog_io_mutable__V_27_27 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 406 "prog_io_mutable.m"
                            if (parse_tree__prog_io_mutable__succeeded)
#line 406 "prog_io_mutable.m"
                              {
#line 408 "prog_io_mutable.m"
                                {
#line 408 "prog_io_mutable.m"
                                  parse_tree__prog_io_mutable__succeeded = parse_tree__prog_io_pragma__parse_foreign_language_2_p_0(parse_tree__prog_io_mutable__LangTerm_10, &parse_tree__prog_io_mutable__Lang_12);
                                }
#line 406 "prog_io_mutable.m"
                                if (parse_tree__prog_io_mutable__succeeded)
#line 406 "prog_io_mutable.m"
                                  {
#line 409 "prog_io_mutable.m"
                                    parse_tree__prog_io_mutable__succeeded = ((MR_tag((MR_Word) parse_tree__prog_io_mutable__ForeignNameTerm_11)) == (MR_mktag((MR_Integer) 0)));
#line 409 "prog_io_mutable.m"
                                    if (parse_tree__prog_io_mutable__succeeded)
#line 409 "prog_io_mutable.m"
                                      {
#line 409 "prog_io_mutable.m"
                                        parse_tree__prog_io_mutable__V_28_28 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_mutable__ForeignNameTerm_11, (MR_Integer) 0)));
#line 409 "prog_io_mutable.m"
                                        parse_tree__prog_io_mutable__V_29_29 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_mutable__ForeignNameTerm_11, (MR_Integer) 1)));
#line 409 "prog_io_mutable.m"
                                        parse_tree__prog_io_mutable__V_14_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_mutable__ForeignNameTerm_11, (MR_Integer) 2)));
#line 409 "prog_io_mutable.m"
                                        parse_tree__prog_io_mutable__succeeded = (parse_tree__prog_io_mutable__V_29_29 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 406 "prog_io_mutable.m"
                                        if (parse_tree__prog_io_mutable__succeeded)
#line 406 "prog_io_mutable.m"
                                          {
#line 409 "prog_io_mutable.m"
                                            parse_tree__prog_io_mutable__succeeded = ((((MR_tag((MR_Word) parse_tree__prog_io_mutable__V_28_28)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__prog_io_mutable__V_28_28, (MR_Integer) 0)))) == (MR_Integer) 0)));
#line 409 "prog_io_mutable.m"
                                            if (parse_tree__prog_io_mutable__succeeded)
#line 409 "prog_io_mutable.m"
                                              parse_tree__prog_io_mutable__ForeignName_13 = ((MR_String) (MR_hl_field(MR_mktag(3), parse_tree__prog_io_mutable__V_28_28, (MR_Integer) 1)));
#line 406 "prog_io_mutable.m"
                                          }
#line 409 "prog_io_mutable.m"
                                      }
#line 406 "prog_io_mutable.m"
                                  }
#line 406 "prog_io_mutable.m"
                              }
#line 407 "prog_io_mutable.m"
                          }
#line 407 "prog_io_mutable.m"
                      }
#line 406 "prog_io_mutable.m"
                  }
#line 406 "prog_io_mutable.m"
              }
#line 406 "prog_io_mutable.m"
          }
#line 405 "prog_io_mutable.m"
        if (parse_tree__prog_io_mutable__succeeded)
#line 411 "prog_io_mutable.m"
          {
#line 411 "prog_io_mutable.m"
            MR_Word parse_tree__prog_io_mutable__V_30_30;
#line 411 "prog_io_mutable.m"
            MR_Word parse_tree__prog_io_mutable__MutAttr_56;

#line 411 "prog_io_mutable.m"
            {
#line 411 "prog_io_mutable.m"
              parse_tree__prog_io_mutable__V_30_30 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 411 "prog_io_mutable.m"
              MR_hl_field(MR_mktag(0), parse_tree__prog_io_mutable__V_30_30, 0) = ((MR_Box) (parse_tree__prog_io_mutable__Lang_12));
#line 411 "prog_io_mutable.m"
              MR_hl_field(MR_mktag(0), parse_tree__prog_io_mutable__V_30_30, 1) = ((MR_Box) (parse_tree__prog_io_mutable__ForeignName_13));
#line 411 "prog_io_mutable.m"
            }
#line 411 "prog_io_mutable.m"
            parse_tree__prog_io_mutable__MutAttr_56 = (MR_Word) MR_mkword(MR_mktag(0), (MR_Word) parse_tree__prog_io_mutable__V_30_30);
#line 412 "prog_io_mutable.m"
            {
#line 412 "prog_io_mutable.m"
              MR_Word base;
#line 412 "prog_io_mutable.m"
              base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 412 "prog_io_mutable.m"
              *parse_tree__prog_io_mutable__MutAttrResult_4 = base;
#line 412 "prog_io_mutable.m"
              MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (parse_tree__prog_io_mutable__MutAttr_56));
#line 412 "prog_io_mutable.m"
            }
#line 411 "prog_io_mutable.m"
          }
#line 405 "prog_io_mutable.m"
        else
#line 415 "prog_io_mutable.m"
          {
#line 415 "prog_io_mutable.m"
            MR_Word parse_tree__prog_io_mutable__Spec_16;
#line 415 "prog_io_mutable.m"
            MR_Word parse_tree__prog_io_mutable__V_47_47;
#line 415 "prog_io_mutable.m"
            MR_Word parse_tree__prog_io_mutable__V_48_48;
#line 415 "prog_io_mutable.m"
            MR_Word parse_tree__prog_io_mutable__V_49_49;
#line 415 "prog_io_mutable.m"
            MR_Word parse_tree__prog_io_mutable__V_54_54;

#line 417 "prog_io_mutable.m"
            {
#line 417 "prog_io_mutable.m"
              parse_tree__prog_io_mutable__V_49_49 = mercury__term__get_term_context_1_f_0((MR_Word) &mercury__term__term__type_ctor_info_generic_0, parse_tree__prog_io_mutable__MutAttrTerm_3);
            }
#line 417 "prog_io_mutable.m"
            {
#line 417 "prog_io_mutable.m"
              parse_tree__prog_io_mutable__V_48_48 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 417 "prog_io_mutable.m"
              MR_hl_field(MR_mktag(0), parse_tree__prog_io_mutable__V_48_48, 0) = ((MR_Box) (parse_tree__prog_io_mutable__V_49_49));
#line 417 "prog_io_mutable.m"
              MR_hl_field(MR_mktag(0), parse_tree__prog_io_mutable__V_48_48, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__prog_io_mutable_scalar_common_2[74])));
#line 417 "prog_io_mutable.m"
            }
#line 417 "prog_io_mutable.m"
            {
#line 417 "prog_io_mutable.m"
              parse_tree__prog_io_mutable__V_47_47 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 417 "prog_io_mutable.m"
              MR_hl_field(MR_mktag(1), parse_tree__prog_io_mutable__V_47_47, 0) = ((MR_Box) (parse_tree__prog_io_mutable__V_48_48));
#line 417 "prog_io_mutable.m"
              MR_hl_field(MR_mktag(1), parse_tree__prog_io_mutable__V_47_47, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 417 "prog_io_mutable.m"
            }
#line 416 "prog_io_mutable.m"
            {
#line 416 "prog_io_mutable.m"
              parse_tree__prog_io_mutable__Spec_16 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 416 "prog_io_mutable.m"
              MR_hl_field(MR_mktag(0), parse_tree__prog_io_mutable__Spec_16, 0) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 416 "prog_io_mutable.m"
              MR_hl_field(MR_mktag(0), parse_tree__prog_io_mutable__Spec_16, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 3))));
#line 416 "prog_io_mutable.m"
              MR_hl_field(MR_mktag(0), parse_tree__prog_io_mutable__Spec_16, 2) = ((MR_Box) (parse_tree__prog_io_mutable__V_47_47));
#line 416 "prog_io_mutable.m"
            }
#line 418 "prog_io_mutable.m"
            {
#line 418 "prog_io_mutable.m"
              parse_tree__prog_io_mutable__V_54_54 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 418 "prog_io_mutable.m"
              MR_hl_field(MR_mktag(1), parse_tree__prog_io_mutable__V_54_54, 0) = ((MR_Box) (parse_tree__prog_io_mutable__Spec_16));
#line 418 "prog_io_mutable.m"
              MR_hl_field(MR_mktag(1), parse_tree__prog_io_mutable__V_54_54, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 418 "prog_io_mutable.m"
            }
#line 418 "prog_io_mutable.m"
            {
#line 418 "prog_io_mutable.m"
              MR_Word base;
#line 418 "prog_io_mutable.m"
              base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 418 "prog_io_mutable.m"
              *parse_tree__prog_io_mutable__MutAttrResult_4 = base;
#line 418 "prog_io_mutable.m"
              MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (parse_tree__prog_io_mutable__V_54_54));
#line 418 "prog_io_mutable.m"
            }
#line 415 "prog_io_mutable.m"
          }
#line 405 "prog_io_mutable.m"
      }
#line 384 "prog_io_mutable.m"
  }
#line 380 "prog_io_mutable.m"
}

#line 356 "prog_io_mutable.m"
static void MR_CALL 
parse_tree__prog_io_mutable__process_mutable_attribute_3_p_0(
#line 356 "prog_io_mutable.m"
  MR_Word parse_tree__prog_io_mutable__HeadVar__1_1,
#line 356 "prog_io_mutable.m"
  MR_Word parse_tree__prog_io_mutable__STATE_VARIABLE_Attributes_0_2,
#line 356 "prog_io_mutable.m"
  MR_Word * parse_tree__prog_io_mutable__STATE_VARIABLE_Attributes_3)
#line 356 "prog_io_mutable.m"
{
#line 359 "prog_io_mutable.m"
  {
#line 359 "prog_io_mutable.m"
    MR_bool parse_tree__prog_io_mutable__succeeded;

#line 359 "prog_io_mutable.m"
#line 359 "prog_io_mutable.m"
    switch (MR_tag((MR_Word) parse_tree__prog_io_mutable__HeadVar__1_1)) {
#line 359 "prog_io_mutable.m"
      default: /*NOTREACHED*/ MR_assert(0);
#line 359 "prog_io_mutable.m"
      case (MR_Integer) 0:
#line 362 "prog_io_mutable.m"
        {
#line 362 "prog_io_mutable.m"
          MR_Word parse_tree__prog_io_mutable__ForeignName_9 = (MR_Word) MR_body(((MR_Word) parse_tree__prog_io_mutable__HeadVar__1_1), (MR_Integer) 0);

#line 363 "prog_io_mutable.m"
          {
#line 363 "prog_io_mutable.m"
            parse_tree__prog_item__set_mutable_add_foreign_name_3_p_0(parse_tree__prog_io_mutable__ForeignName_9, parse_tree__prog_io_mutable__STATE_VARIABLE_Attributes_0_2, parse_tree__prog_io_mutable__STATE_VARIABLE_Attributes_3);
          }
#line 362 "prog_io_mutable.m"
        }
#line 359 "prog_io_mutable.m"
        break;
#line 359 "prog_io_mutable.m"
      case (MR_Integer) 1:
#line 359 "prog_io_mutable.m"
        {
#line 359 "prog_io_mutable.m"
          MR_Word parse_tree__prog_io_mutable__Trailed_4 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_mutable__HeadVar__1_1, (MR_Integer) 0)));

#line 360 "prog_io_mutable.m"
          {
#line 360 "prog_io_mutable.m"
            parse_tree__prog_item__set_mutable_var_trailed_3_p_0(parse_tree__prog_io_mutable__Trailed_4, parse_tree__prog_io_mutable__STATE_VARIABLE_Attributes_0_2, parse_tree__prog_io_mutable__STATE_VARIABLE_Attributes_3);
          }
#line 359 "prog_io_mutable.m"
        }
#line 359 "prog_io_mutable.m"
        break;
#line 359 "prog_io_mutable.m"
      case (MR_Integer) 2:
#line 365 "prog_io_mutable.m"
        {
#line 365 "prog_io_mutable.m"
          MR_Word parse_tree__prog_io_mutable__AttachToIOState_14 = ((MR_Word) (MR_hl_field(MR_mktag(2), parse_tree__prog_io_mutable__HeadVar__1_1, (MR_Integer) 0)));

#line 366 "prog_io_mutable.m"
          {
#line 366 "prog_io_mutable.m"
            parse_tree__prog_item__set_mutable_var_attach_to_io_state_3_p_0(parse_tree__prog_io_mutable__AttachToIOState_14, parse_tree__prog_io_mutable__STATE_VARIABLE_Attributes_0_2, parse_tree__prog_io_mutable__STATE_VARIABLE_Attributes_3);
          }
#line 365 "prog_io_mutable.m"
        }
#line 359 "prog_io_mutable.m"
        break;
#line 359 "prog_io_mutable.m"
      case (MR_Integer) 3:
#line 359 "prog_io_mutable.m"
#line 359 "prog_io_mutable.m"
        switch (((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__prog_io_mutable__HeadVar__1_1, (MR_Integer) 0)))) {
#line 359 "prog_io_mutable.m"
          default: /*NOTREACHED*/ MR_assert(0);
#line 359 "prog_io_mutable.m"
          case (MR_Integer) 0:
#line 367 "prog_io_mutable.m"
            {
#line 367 "prog_io_mutable.m"
              MR_Word parse_tree__prog_io_mutable__Constant_19 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__prog_io_mutable__HeadVar__1_1, (MR_Integer) 1)));
#line 367 "prog_io_mutable.m"
              MR_Word parse_tree__prog_io_mutable__STATE_VARIABLE_Attributes_23_23;

#line 368 "prog_io_mutable.m"
              {
#line 368 "prog_io_mutable.m"
                parse_tree__prog_item__set_mutable_var_constant_3_p_0(parse_tree__prog_io_mutable__Constant_19, parse_tree__prog_io_mutable__STATE_VARIABLE_Attributes_0_2, &parse_tree__prog_io_mutable__STATE_VARIABLE_Attributes_23_23);
              }
#line 374 "prog_io_mutable.m"
#line 374 "prog_io_mutable.m"
              switch (parse_tree__prog_io_mutable__Constant_19) {
#line 374 "prog_io_mutable.m"
                default: /*NOTREACHED*/ MR_assert(0);
#line 374 "prog_io_mutable.m"
                case (MR_Integer) 1:
#line 370 "prog_io_mutable.m"
                  {
#line 370 "prog_io_mutable.m"
                    MR_Word parse_tree__prog_io_mutable__STATE_VARIABLE_Attributes_25_25;

#line 371 "prog_io_mutable.m"
                    {
#line 371 "prog_io_mutable.m"
                      parse_tree__prog_item__set_mutable_var_trailed_3_p_0((MR_Integer) 0, parse_tree__prog_io_mutable__STATE_VARIABLE_Attributes_23_23, &parse_tree__prog_io_mutable__STATE_VARIABLE_Attributes_25_25);
                    }
#line 372 "prog_io_mutable.m"
                    {
#line 372 "prog_io_mutable.m"
                      parse_tree__prog_item__set_mutable_var_attach_to_io_state_3_p_0((MR_Integer) 0, parse_tree__prog_io_mutable__STATE_VARIABLE_Attributes_25_25, parse_tree__prog_io_mutable__STATE_VARIABLE_Attributes_3);
                    }
#line 370 "prog_io_mutable.m"
                  }
#line 374 "prog_io_mutable.m"
                  break;
#line 374 "prog_io_mutable.m"
                case (MR_Integer) 0:
#line 375 "prog_io_mutable.m"
                  *parse_tree__prog_io_mutable__STATE_VARIABLE_Attributes_3 = parse_tree__prog_io_mutable__STATE_VARIABLE_Attributes_23_23;
#line 374 "prog_io_mutable.m"
                  break;
#line 374 "prog_io_mutable.m"
              }
#line 367 "prog_io_mutable.m"
            }
#line 359 "prog_io_mutable.m"
            break;
#line 359 "prog_io_mutable.m"
          case (MR_Integer) 1:
#line 377 "prog_io_mutable.m"
            {
#line 377 "prog_io_mutable.m"
              MR_Word parse_tree__prog_io_mutable__ThrLocal_28 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__prog_io_mutable__HeadVar__1_1, (MR_Integer) 1)));

#line 378 "prog_io_mutable.m"
              {
#line 378 "prog_io_mutable.m"
                parse_tree__prog_item__set_mutable_var_thread_local_3_p_0(parse_tree__prog_io_mutable__ThrLocal_28, parse_tree__prog_io_mutable__STATE_VARIABLE_Attributes_0_2, parse_tree__prog_io_mutable__STATE_VARIABLE_Attributes_3);
              }
#line 377 "prog_io_mutable.m"
            }
#line 359 "prog_io_mutable.m"
            break;
#line 359 "prog_io_mutable.m"
        }
#line 359 "prog_io_mutable.m"
        break;
#line 359 "prog_io_mutable.m"
    }
#line 359 "prog_io_mutable.m"
  }
#line 356 "prog_io_mutable.m"
}

#line 341 "prog_io_mutable.m"
static void MR_CALL 
parse_tree__prog_io_mutable__parse_mutable_attrs_3_p_0_6(
#line 341 "prog_io_mutable.m"
  MR_Box parse_tree__prog_io_mutable__closure_arg,
#line 341 "prog_io_mutable.m"
  MR_Box parse_tree__prog_io_mutable__wrapper_arg_1,
#line 341 "prog_io_mutable.m"
  MR_Box parse_tree__prog_io_mutable__wrapper_arg_2,
#line 341 "prog_io_mutable.m"
  MR_Box * parse_tree__prog_io_mutable__wrapper_arg_3)
#line 341 "prog_io_mutable.m"
{
#line 341 "prog_io_mutable.m"
  {
#line 341 "prog_io_mutable.m"
    MR_Box parse_tree__prog_io_mutable__closure = parse_tree__prog_io_mutable__closure_arg;
#line 341 "prog_io_mutable.m"
    MR_Word parse_tree__prog_io_mutable__conv2_STATE_VARIABLE_Attributes_3;

#line 341 "prog_io_mutable.m"
    {
#line 341 "prog_io_mutable.m"
      parse_tree__prog_io_mutable__process_mutable_attribute_3_p_0(((MR_Word) parse_tree__prog_io_mutable__wrapper_arg_1), ((MR_Word) parse_tree__prog_io_mutable__wrapper_arg_2), &parse_tree__prog_io_mutable__conv2_STATE_VARIABLE_Attributes_3);
    }
#line 341 "prog_io_mutable.m"
    *parse_tree__prog_io_mutable__wrapper_arg_3 = ((MR_Box) (parse_tree__prog_io_mutable__conv2_STATE_VARIABLE_Attributes_3));
#line 341 "prog_io_mutable.m"
  }
#line 341 "prog_io_mutable.m"
}

#line 318 "prog_io_mutable.m"
static void MR_CALL 
parse_tree__prog_io_mutable__parse_mutable_attrs_3_p_0_1(
#line 318 "prog_io_mutable.m"
  MR_Box parse_tree__prog_io_mutable__closure_arg,
#line 318 "prog_io_mutable.m"
  MR_Box parse_tree__prog_io_mutable__wrapper_arg_1,
#line 318 "prog_io_mutable.m"
  MR_Box * parse_tree__prog_io_mutable__wrapper_arg_2)
#line 318 "prog_io_mutable.m"
{
#line 318 "prog_io_mutable.m"
  {
#line 318 "prog_io_mutable.m"
    MR_Box parse_tree__prog_io_mutable__closure = parse_tree__prog_io_mutable__closure_arg;
#line 318 "prog_io_mutable.m"
    MR_Word parse_tree__prog_io_mutable__conv0_MutAttrResult_4;

#line 318 "prog_io_mutable.m"
    {
#line 318 "prog_io_mutable.m"
      parse_tree__prog_io_mutable__parse_mutable_attr_2_p_0(((MR_Word) parse_tree__prog_io_mutable__wrapper_arg_1), &parse_tree__prog_io_mutable__conv0_MutAttrResult_4);
    }
#line 318 "prog_io_mutable.m"
    *parse_tree__prog_io_mutable__wrapper_arg_2 = ((MR_Box) (parse_tree__prog_io_mutable__conv0_MutAttrResult_4));
#line 318 "prog_io_mutable.m"
  }
#line 318 "prog_io_mutable.m"
}

#line 326 "prog_io_mutable.m"
static void MR_CALL 
parse_tree__prog_io_mutable__parse_mutable_attrs_3_p_0_2(
#line 326 "prog_io_mutable.m"
  void * parse_tree__prog_io_mutable__env_ptr_arg)
#line 326 "prog_io_mutable.m"
{
#line 326 "prog_io_mutable.m"
  {
#line 326 "prog_io_mutable.m"
    struct parse_tree__prog_io_mutable__parse_mutable_attrs_3_p_0_env_0_s * parse_tree__prog_io_mutable__env_ptr = (struct parse_tree__prog_io_mutable__parse_mutable_attrs_3_p_0_env_0_s *) parse_tree__prog_io_mutable__env_ptr_arg;

#line 326 "prog_io_mutable.m"
    MR_builtin_longjmp((parse_tree__prog_io_mutable__env_ptr)->parse_tree__prog_io_mutable__parse_mutable_attrs_3_p_0_env_0__commit_0, 1);
#line 326 "prog_io_mutable.m"
  }
#line 326 "prog_io_mutable.m"
}

#line 326 "prog_io_mutable.m"
static void MR_CALL 
parse_tree__prog_io_mutable__parse_mutable_attrs_3_p_0_4(
#line 326 "prog_io_mutable.m"
  void * parse_tree__prog_io_mutable__env_ptr_arg)
#line 326 "prog_io_mutable.m"
{
#line 326 "prog_io_mutable.m"
  {
#line 326 "prog_io_mutable.m"
    struct parse_tree__prog_io_mutable__parse_mutable_attrs_3_p_0_env_0_s * parse_tree__prog_io_mutable__env_ptr = (struct parse_tree__prog_io_mutable__parse_mutable_attrs_3_p_0_env_0_s *) parse_tree__prog_io_mutable__env_ptr_arg;

#line 326 "prog_io_mutable.m"
    (parse_tree__prog_io_mutable__env_ptr)->parse_tree__prog_io_mutable__parse_mutable_attrs_3_p_0_env_0__V_49_49 = ((MR_Word) (parse_tree__prog_io_mutable__env_ptr)->parse_tree__prog_io_mutable__parse_mutable_attrs_3_p_0_env_0__conv1_V_49_49);
#line 326 "prog_io_mutable.m"
    {
#line 326 "prog_io_mutable.m"
      parse_tree__prog_io_mutable__parse_mutable_attrs_3_p_0_3(parse_tree__prog_io_mutable__env_ptr);
    }
#line 326 "prog_io_mutable.m"
  }
#line 326 "prog_io_mutable.m"
}

#line 326 "prog_io_mutable.m"
static void MR_CALL 
parse_tree__prog_io_mutable__parse_mutable_attrs_3_p_0_3(
#line 326 "prog_io_mutable.m"
  void * parse_tree__prog_io_mutable__env_ptr_arg)
#line 326 "prog_io_mutable.m"
{
#line 326 "prog_io_mutable.m"
  {
#line 326 "prog_io_mutable.m"
    struct parse_tree__prog_io_mutable__parse_mutable_attrs_3_p_0_env_0_s * parse_tree__prog_io_mutable__env_ptr = (struct parse_tree__prog_io_mutable__parse_mutable_attrs_3_p_0_env_0_s *) parse_tree__prog_io_mutable__env_ptr_arg;

#line 326 "prog_io_mutable.m"
    (parse_tree__prog_io_mutable__env_ptr)->parse_tree__prog_io_mutable__parse_mutable_attrs_3_p_0_env_0__Conflict1_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), (parse_tree__prog_io_mutable__env_ptr)->parse_tree__prog_io_mutable__parse_mutable_attrs_3_p_0_env_0__V_49_49, (MR_Integer) 0)));
#line 326 "prog_io_mutable.m"
    (parse_tree__prog_io_mutable__env_ptr)->parse_tree__prog_io_mutable__parse_mutable_attrs_3_p_0_env_0__Conflict2_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), (parse_tree__prog_io_mutable__env_ptr)->parse_tree__prog_io_mutable__parse_mutable_attrs_3_p_0_env_0__V_49_49, (MR_Integer) 1)));
#line 4492 "parse_tree.prog_io_mutable.c"
    (parse_tree__prog_io_mutable__env_ptr)->parse_tree__prog_io_mutable__parse_mutable_attrs_3_p_0_env_0__TypeCtorInfo_116_116 = (MR_Word) &parse_tree__prog_io_mutable__parse_tree__prog_io_mutable__type_ctor_info_collected_mutable_attribute_0;
#line 327 "prog_io_mutable.m"
    {
#line 327 "prog_io_mutable.m"
      (parse_tree__prog_io_mutable__env_ptr)->parse_tree__prog_io_mutable__parse_mutable_attrs_3_p_0_env_0__succeeded = mercury__list__member_2_p_0((parse_tree__prog_io_mutable__env_ptr)->parse_tree__prog_io_mutable__parse_mutable_attrs_3_p_0_env_0__TypeCtorInfo_116_116, ((MR_Box) ((parse_tree__prog_io_mutable__env_ptr)->parse_tree__prog_io_mutable__parse_mutable_attrs_3_p_0_env_0__Conflict1_12)), (parse_tree__prog_io_mutable__env_ptr)->parse_tree__prog_io_mutable__parse_mutable_attrs_3_p_0_env_0__CollectedMutAttrs_11);
    }
#line 326 "prog_io_mutable.m"
    if ((parse_tree__prog_io_mutable__env_ptr)->parse_tree__prog_io_mutable__parse_mutable_attrs_3_p_0_env_0__succeeded)
#line 326 "prog_io_mutable.m"
      {
#line 328 "prog_io_mutable.m"
        {
#line 328 "prog_io_mutable.m"
          (parse_tree__prog_io_mutable__env_ptr)->parse_tree__prog_io_mutable__parse_mutable_attrs_3_p_0_env_0__succeeded = mercury__list__member_2_p_0((parse_tree__prog_io_mutable__env_ptr)->parse_tree__prog_io_mutable__parse_mutable_attrs_3_p_0_env_0__TypeCtorInfo_116_116, ((MR_Box) ((parse_tree__prog_io_mutable__env_ptr)->parse_tree__prog_io_mutable__parse_mutable_attrs_3_p_0_env_0__Conflict2_13)), (parse_tree__prog_io_mutable__env_ptr)->parse_tree__prog_io_mutable__parse_mutable_attrs_3_p_0_env_0__CollectedMutAttrs_11);
        }
#line 328 "prog_io_mutable.m"
        if ((parse_tree__prog_io_mutable__env_ptr)->parse_tree__prog_io_mutable__parse_mutable_attrs_3_p_0_env_0__succeeded)
#line 328 "prog_io_mutable.m"
          {
#line 328 "prog_io_mutable.m"
            parse_tree__prog_io_mutable__parse_mutable_attrs_3_p_0_2(parse_tree__prog_io_mutable__env_ptr);
          }
#line 326 "prog_io_mutable.m"
      }
#line 326 "prog_io_mutable.m"
  }
#line 326 "prog_io_mutable.m"
}

#line 326 "prog_io_mutable.m"
static void MR_CALL 
parse_tree__prog_io_mutable__parse_mutable_attrs_3_p_0_5(
#line 326 "prog_io_mutable.m"
  void * parse_tree__prog_io_mutable__env_ptr_arg)
#line 326 "prog_io_mutable.m"
{
#line 326 "prog_io_mutable.m"
  {
#line 326 "prog_io_mutable.m"
    struct parse_tree__prog_io_mutable__parse_mutable_attrs_3_p_0_env_0_s * parse_tree__prog_io_mutable__env_ptr = (struct parse_tree__prog_io_mutable__parse_mutable_attrs_3_p_0_env_0_s *) parse_tree__prog_io_mutable__env_ptr_arg;

#line 326 "prog_io_mutable.m"
    if (MR_builtin_setjmp((parse_tree__prog_io_mutable__env_ptr)->parse_tree__prog_io_mutable__parse_mutable_attrs_3_p_0_env_0__commit_0) == 0)
#line 326 "prog_io_mutable.m"
      {
#line 326 "prog_io_mutable.m"
        {
#line 326 "prog_io_mutable.m"
          {
#line 326 "prog_io_mutable.m"
            mercury__list__member_2_p_1((MR_Word) &parse_tree__prog_io_mutable_scalar_common_1[0], &(parse_tree__prog_io_mutable__env_ptr)->parse_tree__prog_io_mutable__parse_mutable_attrs_3_p_0_env_0__conv1_V_49_49, (MR_Word) MR_mkword(MR_mktag(1), &parse_tree__prog_io_mutable_scalar_common_2[56]), parse_tree__prog_io_mutable__parse_mutable_attrs_3_p_0_4, parse_tree__prog_io_mutable__env_ptr);
          }
#line 326 "prog_io_mutable.m"
        }
#line 326 "prog_io_mutable.m"
        (parse_tree__prog_io_mutable__env_ptr)->parse_tree__prog_io_mutable__parse_mutable_attrs_3_p_0_env_0__succeeded = MR_FALSE;
#line 326 "prog_io_mutable.m"
      }
#line 326 "prog_io_mutable.m"
    else
#line 326 "prog_io_mutable.m"
      (parse_tree__prog_io_mutable__env_ptr)->parse_tree__prog_io_mutable__parse_mutable_attrs_3_p_0_env_0__succeeded = MR_TRUE;
#line 326 "prog_io_mutable.m"
  }
#line 326 "prog_io_mutable.m"
}

#line 299 "prog_io_mutable.m"
static void MR_CALL 
parse_tree__prog_io_mutable__parse_mutable_attrs_3_p_0(
#line 299 "prog_io_mutable.m"
  MR_Word parse_tree__prog_io_mutable__VarSet_4,
#line 299 "prog_io_mutable.m"
  MR_Word parse_tree__prog_io_mutable__MutAttrsTerm_5,
#line 299 "prog_io_mutable.m"
  MR_Word * parse_tree__prog_io_mutable__MaybeMutAttrs_6)
#line 299 "prog_io_mutable.m"
{
#line 299 "prog_io_mutable.m"
  {
#line 299 "prog_io_mutable.m"
    struct parse_tree__prog_io_mutable__parse_mutable_attrs_3_p_0_env_0_s parse_tree__prog_io_mutable__env;

#line 302 "prog_io_mutable.m"
    {
#line 302 "prog_io_mutable.m"
      MR_Word parse_tree__prog_io_mutable__Attributes0_7;
#line 317 "prog_io_mutable.m"
      MR_Word parse_tree__prog_io_mutable__TypeCtorInfo_114_114;
#line 317 "prog_io_mutable.m"
      MR_Word parse_tree__prog_io_mutable__MutAttrTerms_9;
#line 317 "prog_io_mutable.m"
      MR_Word parse_tree__prog_io_mutable__MaybeAttrList_10;
#line 317 "prog_io_mutable.m"
      MR_Word parse_tree__prog_io_mutable__V_48_48;

#line 303 "prog_io_mutable.m"
      {
#line 303 "prog_io_mutable.m"
        parse_tree__prog_io_mutable__Attributes0_7 = parse_tree__prog_item__default_mutable_attributes_0_f_0();
      }
#line 317 "prog_io_mutable.m"
      {
#line 317 "prog_io_mutable.m"
        (parse_tree__prog_io_mutable__env).parse_tree__prog_io_mutable__parse_mutable_attrs_3_p_0_env_0__succeeded = parse_tree__prog_io_util__list_term_to_term_list_2_p_0(parse_tree__prog_io_mutable__MutAttrsTerm_5, &parse_tree__prog_io_mutable__MutAttrTerms_9);
      }
#line 317 "prog_io_mutable.m"
      if ((parse_tree__prog_io_mutable__env).parse_tree__prog_io_mutable__parse_mutable_attrs_3_p_0_env_0__succeeded)
#line 317 "prog_io_mutable.m"
        {
#line 318 "prog_io_mutable.m"
          parse_tree__prog_io_mutable__V_48_48 = (MR_Word) &parse_tree__prog_io_mutable_scalar_common_1[1];
#line 4605 "parse_tree.prog_io_mutable.c"
          parse_tree__prog_io_mutable__TypeCtorInfo_114_114 = (MR_Word) &parse_tree__prog_io_mutable__parse_tree__prog_io_mutable__type_ctor_info_collected_mutable_attribute_0;
#line 318 "prog_io_mutable.m"
          {
#line 318 "prog_io_mutable.m"
            parse_tree__prog_io_util__map_parser_3_p_0(parse_tree__prog_io_mutable__TypeCtorInfo_114_114, parse_tree__prog_io_mutable__V_48_48, parse_tree__prog_io_mutable__MutAttrTerms_9, &parse_tree__prog_io_mutable__MaybeAttrList_10);
          }
#line 319 "prog_io_mutable.m"
          (parse_tree__prog_io_mutable__env).parse_tree__prog_io_mutable__parse_mutable_attrs_3_p_0_env_0__succeeded = ((MR_tag((MR_Word) parse_tree__prog_io_mutable__MaybeAttrList_10)) == (MR_mktag((MR_Integer) 1)));
#line 319 "prog_io_mutable.m"
          if ((parse_tree__prog_io_mutable__env).parse_tree__prog_io_mutable__parse_mutable_attrs_3_p_0_env_0__succeeded)
#line 319 "prog_io_mutable.m"
            (parse_tree__prog_io_mutable__env).parse_tree__prog_io_mutable__parse_mutable_attrs_3_p_0_env_0__CollectedMutAttrs_11 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_mutable__MaybeAttrList_10, (MR_Integer) 0)));
#line 317 "prog_io_mutable.m"
        }
#line 316 "prog_io_mutable.m"
      if ((parse_tree__prog_io_mutable__env).parse_tree__prog_io_mutable__parse_mutable_attrs_3_p_0_env_0__succeeded)
#line 325 "prog_io_mutable.m"
        {
#line 326 "prog_io_mutable.m"
          {
#line 326 "prog_io_mutable.m"
            parse_tree__prog_io_mutable__parse_mutable_attrs_3_p_0_5(&parse_tree__prog_io_mutable__env);
          }
#line 325 "prog_io_mutable.m"
          if ((parse_tree__prog_io_mutable__env).parse_tree__prog_io_mutable__parse_mutable_attrs_3_p_0_env_0__succeeded)
#line 332 "prog_io_mutable.m"
            {
#line 332 "prog_io_mutable.m"
              MR_Word parse_tree__prog_io_mutable__TypeCtorInfo_117_117 = (MR_Word) &mercury__term__term__type_ctor_info_generic_0;
#line 332 "prog_io_mutable.m"
              MR_String parse_tree__prog_io_mutable__MutAttrsStr_14;
#line 332 "prog_io_mutable.m"
              MR_Word parse_tree__prog_io_mutable__Pieces_15;
#line 332 "prog_io_mutable.m"
              MR_Word parse_tree__prog_io_mutable__Spec_16;
#line 332 "prog_io_mutable.m"
              MR_Word parse_tree__prog_io_mutable__V_53_53;
#line 332 "prog_io_mutable.m"
              MR_Word parse_tree__prog_io_mutable__V_56_56;
#line 332 "prog_io_mutable.m"
              MR_Word parse_tree__prog_io_mutable__V_58_58;
#line 332 "prog_io_mutable.m"
              MR_Word parse_tree__prog_io_mutable__V_59_59;
#line 332 "prog_io_mutable.m"
              MR_Word parse_tree__prog_io_mutable__V_68_68;
#line 332 "prog_io_mutable.m"
              MR_Word parse_tree__prog_io_mutable__V_69_69;
#line 332 "prog_io_mutable.m"
              MR_Word parse_tree__prog_io_mutable__V_70_70;
#line 332 "prog_io_mutable.m"
              MR_Word parse_tree__prog_io_mutable__V_71_71;
#line 332 "prog_io_mutable.m"
              MR_Word parse_tree__prog_io_mutable__V_72_72;
#line 332 "prog_io_mutable.m"
              MR_Word parse_tree__prog_io_mutable__V_75_75;

#line 331 "prog_io_mutable.m"
              {
#line 331 "prog_io_mutable.m"
                parse_tree__prog_io_mutable__MutAttrsStr_14 = parse_tree__parse_tree_out_term__mercury_term_to_string_3_f_0(parse_tree__prog_io_mutable__TypeCtorInfo_117_117, parse_tree__prog_io_mutable__VarSet_4, (MR_Integer) 0, parse_tree__prog_io_mutable__MutAttrsTerm_5);
              }
#line 335 "prog_io_mutable.m"
              {
#line 335 "prog_io_mutable.m"
                parse_tree__prog_io_mutable__V_59_59 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 335 "prog_io_mutable.m"
                MR_hl_field(MR_mktag(3), parse_tree__prog_io_mutable__V_59_59, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 5));
#line 335 "prog_io_mutable.m"
                MR_hl_field(MR_mktag(3), parse_tree__prog_io_mutable__V_59_59, 1) = ((MR_Box) (parse_tree__prog_io_mutable__MutAttrsStr_14));
#line 335 "prog_io_mutable.m"
              }
#line 335 "prog_io_mutable.m"
              {
#line 335 "prog_io_mutable.m"
                parse_tree__prog_io_mutable__V_58_58 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 335 "prog_io_mutable.m"
                MR_hl_field(MR_mktag(1), parse_tree__prog_io_mutable__V_58_58, 0) = ((MR_Box) (parse_tree__prog_io_mutable__V_59_59));
#line 335 "prog_io_mutable.m"
                MR_hl_field(MR_mktag(1), parse_tree__prog_io_mutable__V_58_58, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__prog_io_mutable_scalar_common_2[20])));
#line 335 "prog_io_mutable.m"
              }
#line 334 "prog_io_mutable.m"
              {
#line 334 "prog_io_mutable.m"
                parse_tree__prog_io_mutable__V_56_56 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 334 "prog_io_mutable.m"
                MR_hl_field(MR_mktag(1), parse_tree__prog_io_mutable__V_56_56, 0) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 1))));
#line 334 "prog_io_mutable.m"
                MR_hl_field(MR_mktag(1), parse_tree__prog_io_mutable__V_56_56, 1) = ((MR_Box) (parse_tree__prog_io_mutable__V_58_58));
#line 334 "prog_io_mutable.m"
              }
#line 334 "prog_io_mutable.m"
              {
#line 334 "prog_io_mutable.m"
                parse_tree__prog_io_mutable__V_53_53 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 334 "prog_io_mutable.m"
                MR_hl_field(MR_mktag(1), parse_tree__prog_io_mutable__V_53_53, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__prog_io_mutable_scalar_common_2[68])));
#line 334 "prog_io_mutable.m"
                MR_hl_field(MR_mktag(1), parse_tree__prog_io_mutable__V_53_53, 1) = ((MR_Box) (parse_tree__prog_io_mutable__V_56_56));
#line 334 "prog_io_mutable.m"
              }
#line 333 "prog_io_mutable.m"
              {
#line 333 "prog_io_mutable.m"
                parse_tree__prog_io_mutable__Pieces_15 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 333 "prog_io_mutable.m"
                MR_hl_field(MR_mktag(1), parse_tree__prog_io_mutable__Pieces_15, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__prog_io_mutable_scalar_common_2[67])));
#line 333 "prog_io_mutable.m"
                MR_hl_field(MR_mktag(1), parse_tree__prog_io_mutable__Pieces_15, 1) = ((MR_Box) (parse_tree__prog_io_mutable__V_53_53));
#line 333 "prog_io_mutable.m"
              }
#line 337 "prog_io_mutable.m"
              {
#line 337 "prog_io_mutable.m"
                parse_tree__prog_io_mutable__V_70_70 = mercury__term__get_term_context_1_f_0(parse_tree__prog_io_mutable__TypeCtorInfo_117_117, parse_tree__prog_io_mutable__MutAttrsTerm_5);
              }
#line 338 "prog_io_mutable.m"
              {
#line 338 "prog_io_mutable.m"
                parse_tree__prog_io_mutable__V_72_72 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 338 "prog_io_mutable.m"
                MR_hl_field(MR_mktag(0), parse_tree__prog_io_mutable__V_72_72, 0) = ((MR_Box) (parse_tree__prog_io_mutable__Pieces_15));
#line 338 "prog_io_mutable.m"
              }
#line 338 "prog_io_mutable.m"
              {
#line 338 "prog_io_mutable.m"
                parse_tree__prog_io_mutable__V_71_71 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 338 "prog_io_mutable.m"
                MR_hl_field(MR_mktag(1), parse_tree__prog_io_mutable__V_71_71, 0) = ((MR_Box) (parse_tree__prog_io_mutable__V_72_72));
#line 338 "prog_io_mutable.m"
                MR_hl_field(MR_mktag(1), parse_tree__prog_io_mutable__V_71_71, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 338 "prog_io_mutable.m"
              }
#line 337 "prog_io_mutable.m"
              {
#line 337 "prog_io_mutable.m"
                parse_tree__prog_io_mutable__V_69_69 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 337 "prog_io_mutable.m"
                MR_hl_field(MR_mktag(0), parse_tree__prog_io_mutable__V_69_69, 0) = ((MR_Box) (parse_tree__prog_io_mutable__V_70_70));
#line 337 "prog_io_mutable.m"
                MR_hl_field(MR_mktag(0), parse_tree__prog_io_mutable__V_69_69, 1) = ((MR_Box) (parse_tree__prog_io_mutable__V_71_71));
#line 337 "prog_io_mutable.m"
              }
#line 338 "prog_io_mutable.m"
              {
#line 338 "prog_io_mutable.m"
                parse_tree__prog_io_mutable__V_68_68 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 338 "prog_io_mutable.m"
                MR_hl_field(MR_mktag(1), parse_tree__prog_io_mutable__V_68_68, 0) = ((MR_Box) (parse_tree__prog_io_mutable__V_69_69));
#line 338 "prog_io_mutable.m"
                MR_hl_field(MR_mktag(1), parse_tree__prog_io_mutable__V_68_68, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 338 "prog_io_mutable.m"
              }
#line 336 "prog_io_mutable.m"
              {
#line 336 "prog_io_mutable.m"
                parse_tree__prog_io_mutable__Spec_16 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 336 "prog_io_mutable.m"
                MR_hl_field(MR_mktag(0), parse_tree__prog_io_mutable__Spec_16, 0) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 336 "prog_io_mutable.m"
                MR_hl_field(MR_mktag(0), parse_tree__prog_io_mutable__Spec_16, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 3))));
#line 336 "prog_io_mutable.m"
                MR_hl_field(MR_mktag(0), parse_tree__prog_io_mutable__Spec_16, 2) = ((MR_Box) (parse_tree__prog_io_mutable__V_68_68));
#line 336 "prog_io_mutable.m"
              }
#line 339 "prog_io_mutable.m"
              {
#line 339 "prog_io_mutable.m"
                parse_tree__prog_io_mutable__V_75_75 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 339 "prog_io_mutable.m"
                MR_hl_field(MR_mktag(1), parse_tree__prog_io_mutable__V_75_75, 0) = ((MR_Box) (parse_tree__prog_io_mutable__Spec_16));
#line 339 "prog_io_mutable.m"
                MR_hl_field(MR_mktag(1), parse_tree__prog_io_mutable__V_75_75, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 339 "prog_io_mutable.m"
              }
#line 339 "prog_io_mutable.m"
              {
#line 339 "prog_io_mutable.m"
                MR_Word base;
#line 339 "prog_io_mutable.m"
                base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 339 "prog_io_mutable.m"
                *parse_tree__prog_io_mutable__MaybeMutAttrs_6 = base;
#line 339 "prog_io_mutable.m"
                MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (parse_tree__prog_io_mutable__V_75_75));
#line 339 "prog_io_mutable.m"
              }
#line 332 "prog_io_mutable.m"
            }
#line 325 "prog_io_mutable.m"
          else
#line 342 "prog_io_mutable.m"
            {
#line 342 "prog_io_mutable.m"
              MR_Word parse_tree__prog_io_mutable__Attributes_17;
#line 341 "prog_io_mutable.m"
              MR_Box parse_tree__prog_io_mutable__conv3_Attributes_17;

#line 341 "prog_io_mutable.m"
              {
#line 341 "prog_io_mutable.m"
                mercury__list__foldl_4_p_0((MR_Word) &parse_tree__prog_io_mutable__parse_tree__prog_io_mutable__type_ctor_info_collected_mutable_attribute_0, (MR_Word) &parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_mutable_var_attributes_0, (MR_Word) &parse_tree__prog_io_mutable_scalar_common_1[2], (parse_tree__prog_io_mutable__env).parse_tree__prog_io_mutable__parse_mutable_attrs_3_p_0_env_0__CollectedMutAttrs_11, ((MR_Box) (parse_tree__prog_io_mutable__Attributes0_7)), &parse_tree__prog_io_mutable__conv3_Attributes_17);
              }
#line 341 "prog_io_mutable.m"
              parse_tree__prog_io_mutable__Attributes_17 = ((MR_Word) parse_tree__prog_io_mutable__conv3_Attributes_17);
#line 343 "prog_io_mutable.m"
              {
#line 343 "prog_io_mutable.m"
                MR_Word base;
#line 343 "prog_io_mutable.m"
                base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 343 "prog_io_mutable.m"
                *parse_tree__prog_io_mutable__MaybeMutAttrs_6 = base;
#line 343 "prog_io_mutable.m"
                MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (parse_tree__prog_io_mutable__Attributes_17));
#line 343 "prog_io_mutable.m"
              }
#line 342 "prog_io_mutable.m"
            }
#line 325 "prog_io_mutable.m"
        }
#line 316 "prog_io_mutable.m"
      else
#line 347 "prog_io_mutable.m"
        {
#line 347 "prog_io_mutable.m"
          MR_Word parse_tree__prog_io_mutable__TypeCtorInfo_123_123 = (MR_Word) &mercury__term__term__type_ctor_info_generic_0;
#line 347 "prog_io_mutable.m"
          MR_Word parse_tree__prog_io_mutable__V_81_81;
#line 347 "prog_io_mutable.m"
          MR_Word parse_tree__prog_io_mutable__V_84_84;
#line 347 "prog_io_mutable.m"
          MR_Word parse_tree__prog_io_mutable__V_87_87;
#line 347 "prog_io_mutable.m"
          MR_Word parse_tree__prog_io_mutable__V_90_90;
#line 347 "prog_io_mutable.m"
          MR_Word parse_tree__prog_io_mutable__V_91_91;
#line 347 "prog_io_mutable.m"
          MR_Word parse_tree__prog_io_mutable__V_100_100;
#line 347 "prog_io_mutable.m"
          MR_Word parse_tree__prog_io_mutable__V_101_101;
#line 347 "prog_io_mutable.m"
          MR_Word parse_tree__prog_io_mutable__V_102_102;
#line 347 "prog_io_mutable.m"
          MR_Word parse_tree__prog_io_mutable__V_103_103;
#line 347 "prog_io_mutable.m"
          MR_Word parse_tree__prog_io_mutable__V_104_104;
#line 347 "prog_io_mutable.m"
          MR_Word parse_tree__prog_io_mutable__V_107_107;
#line 347 "prog_io_mutable.m"
          MR_String parse_tree__prog_io_mutable__MutAttrsStr_109;
#line 347 "prog_io_mutable.m"
          MR_Word parse_tree__prog_io_mutable__Pieces_110;
#line 347 "prog_io_mutable.m"
          MR_Word parse_tree__prog_io_mutable__Spec_111;

#line 346 "prog_io_mutable.m"
          {
#line 346 "prog_io_mutable.m"
            parse_tree__prog_io_mutable__MutAttrsStr_109 = parse_tree__parse_tree_out_term__mercury_term_to_string_3_f_0(parse_tree__prog_io_mutable__TypeCtorInfo_123_123, parse_tree__prog_io_mutable__VarSet_4, (MR_Integer) 0, parse_tree__prog_io_mutable__MutAttrsTerm_5);
          }
#line 350 "prog_io_mutable.m"
          {
#line 350 "prog_io_mutable.m"
            parse_tree__prog_io_mutable__V_91_91 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 350 "prog_io_mutable.m"
            MR_hl_field(MR_mktag(3), parse_tree__prog_io_mutable__V_91_91, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 5));
#line 350 "prog_io_mutable.m"
            MR_hl_field(MR_mktag(3), parse_tree__prog_io_mutable__V_91_91, 1) = ((MR_Box) (parse_tree__prog_io_mutable__MutAttrsStr_109));
#line 350 "prog_io_mutable.m"
          }
#line 350 "prog_io_mutable.m"
          {
#line 350 "prog_io_mutable.m"
            parse_tree__prog_io_mutable__V_90_90 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 350 "prog_io_mutable.m"
            MR_hl_field(MR_mktag(1), parse_tree__prog_io_mutable__V_90_90, 0) = ((MR_Box) (parse_tree__prog_io_mutable__V_91_91));
#line 350 "prog_io_mutable.m"
            MR_hl_field(MR_mktag(1), parse_tree__prog_io_mutable__V_90_90, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__prog_io_mutable_scalar_common_2[20])));
#line 350 "prog_io_mutable.m"
          }
#line 349 "prog_io_mutable.m"
          {
#line 349 "prog_io_mutable.m"
            parse_tree__prog_io_mutable__V_87_87 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 349 "prog_io_mutable.m"
            MR_hl_field(MR_mktag(1), parse_tree__prog_io_mutable__V_87_87, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__prog_io_mutable_scalar_common_2[71])));
#line 349 "prog_io_mutable.m"
            MR_hl_field(MR_mktag(1), parse_tree__prog_io_mutable__V_87_87, 1) = ((MR_Box) (parse_tree__prog_io_mutable__V_90_90));
#line 349 "prog_io_mutable.m"
          }
#line 349 "prog_io_mutable.m"
          {
#line 349 "prog_io_mutable.m"
            parse_tree__prog_io_mutable__V_84_84 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 349 "prog_io_mutable.m"
            MR_hl_field(MR_mktag(1), parse_tree__prog_io_mutable__V_84_84, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__prog_io_mutable_scalar_common_2[63])));
#line 349 "prog_io_mutable.m"
            MR_hl_field(MR_mktag(1), parse_tree__prog_io_mutable__V_84_84, 1) = ((MR_Box) (parse_tree__prog_io_mutable__V_87_87));
#line 349 "prog_io_mutable.m"
          }
#line 349 "prog_io_mutable.m"
          {
#line 349 "prog_io_mutable.m"
            parse_tree__prog_io_mutable__V_81_81 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 349 "prog_io_mutable.m"
            MR_hl_field(MR_mktag(1), parse_tree__prog_io_mutable__V_81_81, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__prog_io_mutable_scalar_common_2[70])));
#line 349 "prog_io_mutable.m"
            MR_hl_field(MR_mktag(1), parse_tree__prog_io_mutable__V_81_81, 1) = ((MR_Box) (parse_tree__prog_io_mutable__V_84_84));
#line 349 "prog_io_mutable.m"
          }
#line 348 "prog_io_mutable.m"
          {
#line 348 "prog_io_mutable.m"
            parse_tree__prog_io_mutable__Pieces_110 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 348 "prog_io_mutable.m"
            MR_hl_field(MR_mktag(1), parse_tree__prog_io_mutable__Pieces_110, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__prog_io_mutable_scalar_common_2[69])));
#line 348 "prog_io_mutable.m"
            MR_hl_field(MR_mktag(1), parse_tree__prog_io_mutable__Pieces_110, 1) = ((MR_Box) (parse_tree__prog_io_mutable__V_81_81));
#line 348 "prog_io_mutable.m"
          }
#line 352 "prog_io_mutable.m"
          {
#line 352 "prog_io_mutable.m"
            parse_tree__prog_io_mutable__V_102_102 = mercury__term__get_term_context_1_f_0(parse_tree__prog_io_mutable__TypeCtorInfo_123_123, parse_tree__prog_io_mutable__MutAttrsTerm_5);
          }
#line 352 "prog_io_mutable.m"
          {
#line 352 "prog_io_mutable.m"
            parse_tree__prog_io_mutable__V_104_104 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 352 "prog_io_mutable.m"
            MR_hl_field(MR_mktag(0), parse_tree__prog_io_mutable__V_104_104, 0) = ((MR_Box) (parse_tree__prog_io_mutable__Pieces_110));
#line 352 "prog_io_mutable.m"
          }
#line 352 "prog_io_mutable.m"
          {
#line 352 "prog_io_mutable.m"
            parse_tree__prog_io_mutable__V_103_103 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 352 "prog_io_mutable.m"
            MR_hl_field(MR_mktag(1), parse_tree__prog_io_mutable__V_103_103, 0) = ((MR_Box) (parse_tree__prog_io_mutable__V_104_104));
#line 352 "prog_io_mutable.m"
            MR_hl_field(MR_mktag(1), parse_tree__prog_io_mutable__V_103_103, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 352 "prog_io_mutable.m"
          }
#line 352 "prog_io_mutable.m"
          {
#line 352 "prog_io_mutable.m"
            parse_tree__prog_io_mutable__V_101_101 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 352 "prog_io_mutable.m"
            MR_hl_field(MR_mktag(0), parse_tree__prog_io_mutable__V_101_101, 0) = ((MR_Box) (parse_tree__prog_io_mutable__V_102_102));
#line 352 "prog_io_mutable.m"
            MR_hl_field(MR_mktag(0), parse_tree__prog_io_mutable__V_101_101, 1) = ((MR_Box) (parse_tree__prog_io_mutable__V_103_103));
#line 352 "prog_io_mutable.m"
          }
#line 352 "prog_io_mutable.m"
          {
#line 352 "prog_io_mutable.m"
            parse_tree__prog_io_mutable__V_100_100 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 352 "prog_io_mutable.m"
            MR_hl_field(MR_mktag(1), parse_tree__prog_io_mutable__V_100_100, 0) = ((MR_Box) (parse_tree__prog_io_mutable__V_101_101));
#line 352 "prog_io_mutable.m"
            MR_hl_field(MR_mktag(1), parse_tree__prog_io_mutable__V_100_100, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 352 "prog_io_mutable.m"
          }
#line 351 "prog_io_mutable.m"
          {
#line 351 "prog_io_mutable.m"
            parse_tree__prog_io_mutable__Spec_111 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 351 "prog_io_mutable.m"
            MR_hl_field(MR_mktag(0), parse_tree__prog_io_mutable__Spec_111, 0) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 351 "prog_io_mutable.m"
            MR_hl_field(MR_mktag(0), parse_tree__prog_io_mutable__Spec_111, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 3))));
#line 351 "prog_io_mutable.m"
            MR_hl_field(MR_mktag(0), parse_tree__prog_io_mutable__Spec_111, 2) = ((MR_Box) (parse_tree__prog_io_mutable__V_100_100));
#line 351 "prog_io_mutable.m"
          }
#line 353 "prog_io_mutable.m"
          {
#line 353 "prog_io_mutable.m"
            parse_tree__prog_io_mutable__V_107_107 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 353 "prog_io_mutable.m"
            MR_hl_field(MR_mktag(1), parse_tree__prog_io_mutable__V_107_107, 0) = ((MR_Box) (parse_tree__prog_io_mutable__Spec_111));
#line 353 "prog_io_mutable.m"
            MR_hl_field(MR_mktag(1), parse_tree__prog_io_mutable__V_107_107, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 353 "prog_io_mutable.m"
          }
#line 353 "prog_io_mutable.m"
          {
#line 353 "prog_io_mutable.m"
            MR_Word base;
#line 353 "prog_io_mutable.m"
            base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 353 "prog_io_mutable.m"
            *parse_tree__prog_io_mutable__MaybeMutAttrs_6 = base;
#line 353 "prog_io_mutable.m"
            MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (parse_tree__prog_io_mutable__V_107_107));
#line 353 "prog_io_mutable.m"
          }
#line 347 "prog_io_mutable.m"
        }
#line 302 "prog_io_mutable.m"
    }
#line 299 "prog_io_mutable.m"
  }
#line 299 "prog_io_mutable.m"
}

#line 274 "prog_io_mutable.m"
static void MR_CALL 
parse_tree__prog_io_mutable__parse_mutable_inst_3_p_0_1(
#line 274 "prog_io_mutable.m"
  void * parse_tree__prog_io_mutable__env_ptr_arg)
#line 274 "prog_io_mutable.m"
{
#line 274 "prog_io_mutable.m"
  {
#line 274 "prog_io_mutable.m"
    struct parse_tree__prog_io_mutable__parse_mutable_inst_3_p_0_env_0_s * parse_tree__prog_io_mutable__env_ptr = (struct parse_tree__prog_io_mutable__parse_mutable_inst_3_p_0_env_0_s *) parse_tree__prog_io_mutable__env_ptr_arg;

#line 274 "prog_io_mutable.m"
    MR_builtin_longjmp((parse_tree__prog_io_mutable__env_ptr)->parse_tree__prog_io_mutable__parse_mutable_inst_3_p_0_env_0__commit_0, 1);
#line 274 "prog_io_mutable.m"
  }
#line 274 "prog_io_mutable.m"
}

#line 274 "prog_io_mutable.m"
static void MR_CALL 
parse_tree__prog_io_mutable__parse_mutable_inst_3_p_0_2(
#line 274 "prog_io_mutable.m"
  void * parse_tree__prog_io_mutable__env_ptr_arg)
#line 274 "prog_io_mutable.m"
{
#line 274 "prog_io_mutable.m"
  {
#line 274 "prog_io_mutable.m"
    struct parse_tree__prog_io_mutable__parse_mutable_inst_3_p_0_env_0_s * parse_tree__prog_io_mutable__env_ptr = (struct parse_tree__prog_io_mutable__parse_mutable_inst_3_p_0_env_0_s *) parse_tree__prog_io_mutable__env_ptr_arg;

#line 274 "prog_io_mutable.m"
    if (MR_builtin_setjmp((parse_tree__prog_io_mutable__env_ptr)->parse_tree__prog_io_mutable__parse_mutable_inst_3_p_0_env_0__commit_0) == 0)
#line 274 "prog_io_mutable.m"
      {
#line 274 "prog_io_mutable.m"
        {
#line 274 "prog_io_mutable.m"
          MR_Word parse_tree__prog_io_mutable__V_7_7;

#line 274 "prog_io_mutable.m"
          {
#line 274 "prog_io_mutable.m"
            mercury__term__contains_var_2_p_1((MR_Word) &mercury__term__term__type_ctor_info_generic_0, (parse_tree__prog_io_mutable__env_ptr)->parse_tree__prog_io_mutable__parse_mutable_inst_3_p_0_env_0__InstTerm_5, &parse_tree__prog_io_mutable__V_7_7, parse_tree__prog_io_mutable__parse_mutable_inst_3_p_0_1, parse_tree__prog_io_mutable__env_ptr);
          }
#line 274 "prog_io_mutable.m"
        }
#line 274 "prog_io_mutable.m"
        (parse_tree__prog_io_mutable__env_ptr)->parse_tree__prog_io_mutable__parse_mutable_inst_3_p_0_env_0__succeeded = MR_FALSE;
#line 274 "prog_io_mutable.m"
      }
#line 274 "prog_io_mutable.m"
    else
#line 274 "prog_io_mutable.m"
      (parse_tree__prog_io_mutable__env_ptr)->parse_tree__prog_io_mutable__parse_mutable_inst_3_p_0_env_0__succeeded = MR_TRUE;
#line 274 "prog_io_mutable.m"
  }
#line 274 "prog_io_mutable.m"
}

#line 271 "prog_io_mutable.m"
static void MR_CALL 
parse_tree__prog_io_mutable__parse_mutable_inst_3_p_0(
#line 271 "prog_io_mutable.m"
  MR_Word parse_tree__prog_io_mutable__VarSet_4,
#line 271 "prog_io_mutable.m"
  MR_Word parse_tree__prog_io_mutable__InstTerm_5,
#line 271 "prog_io_mutable.m"
  MR_Word * parse_tree__prog_io_mutable__MaybeInst_6)
#line 271 "prog_io_mutable.m"
{
#line 271 "prog_io_mutable.m"
  {
#line 271 "prog_io_mutable.m"
    struct parse_tree__prog_io_mutable__parse_mutable_inst_3_p_0_env_0_s parse_tree__prog_io_mutable__env;

#line 271 "prog_io_mutable.m"
    (parse_tree__prog_io_mutable__env).parse_tree__prog_io_mutable__parse_mutable_inst_3_p_0_env_0__InstTerm_5 = parse_tree__prog_io_mutable__InstTerm_5;
#line 274 "prog_io_mutable.m"
    {
#line 274 "prog_io_mutable.m"
      parse_tree__prog_io_mutable__parse_mutable_inst_3_p_0_2(&parse_tree__prog_io_mutable__env);
    }
#line 274 "prog_io_mutable.m"
    if ((parse_tree__prog_io_mutable__env).parse_tree__prog_io_mutable__parse_mutable_inst_3_p_0_env_0__succeeded)
#line 275 "prog_io_mutable.m"
      {
#line 275 "prog_io_mutable.m"
        MR_Word parse_tree__prog_io_mutable__TypeCtorInfo_67_67 = (MR_Word) &mercury__term__term__type_ctor_info_generic_0;
#line 275 "prog_io_mutable.m"
        MR_String parse_tree__prog_io_mutable__InstTermStr_8;
#line 275 "prog_io_mutable.m"
        MR_Word parse_tree__prog_io_mutable__Pieces_9;
#line 275 "prog_io_mutable.m"
        MR_Word parse_tree__prog_io_mutable__Spec_10;
#line 275 "prog_io_mutable.m"
        MR_Word parse_tree__prog_io_mutable__V_14_14;
#line 275 "prog_io_mutable.m"
        MR_Word parse_tree__prog_io_mutable__V_17_17;
#line 275 "prog_io_mutable.m"
        MR_Word parse_tree__prog_io_mutable__V_20_20;
#line 275 "prog_io_mutable.m"
        MR_Word parse_tree__prog_io_mutable__V_21_21;
#line 275 "prog_io_mutable.m"
        MR_Word parse_tree__prog_io_mutable__V_30_30;
#line 275 "prog_io_mutable.m"
        MR_Word parse_tree__prog_io_mutable__V_31_31;
#line 275 "prog_io_mutable.m"
        MR_Word parse_tree__prog_io_mutable__V_32_32;
#line 275 "prog_io_mutable.m"
        MR_Word parse_tree__prog_io_mutable__V_33_33;
#line 275 "prog_io_mutable.m"
        MR_Word parse_tree__prog_io_mutable__V_34_34;
#line 275 "prog_io_mutable.m"
        MR_Word parse_tree__prog_io_mutable__V_37_37;

#line 275 "prog_io_mutable.m"
        {
#line 275 "prog_io_mutable.m"
          parse_tree__prog_io_mutable__InstTermStr_8 = parse_tree__parse_tree_out_term__describe_error_term_2_f_0(parse_tree__prog_io_mutable__TypeCtorInfo_67_67, parse_tree__prog_io_mutable__VarSet_4, (parse_tree__prog_io_mutable__env).parse_tree__prog_io_mutable__parse_mutable_inst_3_p_0_env_0__InstTerm_5);
        }
#line 278 "prog_io_mutable.m"
        {
#line 278 "prog_io_mutable.m"
          parse_tree__prog_io_mutable__V_21_21 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 278 "prog_io_mutable.m"
          MR_hl_field(MR_mktag(3), parse_tree__prog_io_mutable__V_21_21, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 5));
#line 278 "prog_io_mutable.m"
          MR_hl_field(MR_mktag(3), parse_tree__prog_io_mutable__V_21_21, 1) = ((MR_Box) (parse_tree__prog_io_mutable__InstTermStr_8));
#line 278 "prog_io_mutable.m"
        }
#line 278 "prog_io_mutable.m"
        {
#line 278 "prog_io_mutable.m"
          parse_tree__prog_io_mutable__V_20_20 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 278 "prog_io_mutable.m"
          MR_hl_field(MR_mktag(1), parse_tree__prog_io_mutable__V_20_20, 0) = ((MR_Box) (parse_tree__prog_io_mutable__V_21_21));
#line 278 "prog_io_mutable.m"
          MR_hl_field(MR_mktag(1), parse_tree__prog_io_mutable__V_20_20, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__prog_io_mutable_scalar_common_2[20])));
#line 278 "prog_io_mutable.m"
        }
#line 277 "prog_io_mutable.m"
        {
#line 277 "prog_io_mutable.m"
          parse_tree__prog_io_mutable__V_17_17 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 277 "prog_io_mutable.m"
          MR_hl_field(MR_mktag(1), parse_tree__prog_io_mutable__V_17_17, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__prog_io_mutable_scalar_common_2[64])));
#line 277 "prog_io_mutable.m"
          MR_hl_field(MR_mktag(1), parse_tree__prog_io_mutable__V_17_17, 1) = ((MR_Box) (parse_tree__prog_io_mutable__V_20_20));
#line 277 "prog_io_mutable.m"
        }
#line 276 "prog_io_mutable.m"
        {
#line 276 "prog_io_mutable.m"
          parse_tree__prog_io_mutable__V_14_14 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 276 "prog_io_mutable.m"
          MR_hl_field(MR_mktag(1), parse_tree__prog_io_mutable__V_14_14, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__prog_io_mutable_scalar_common_2[63])));
#line 276 "prog_io_mutable.m"
          MR_hl_field(MR_mktag(1), parse_tree__prog_io_mutable__V_14_14, 1) = ((MR_Box) (parse_tree__prog_io_mutable__V_17_17));
#line 276 "prog_io_mutable.m"
        }
#line 276 "prog_io_mutable.m"
        {
#line 276 "prog_io_mutable.m"
          parse_tree__prog_io_mutable__Pieces_9 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 276 "prog_io_mutable.m"
          MR_hl_field(MR_mktag(1), parse_tree__prog_io_mutable__Pieces_9, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__prog_io_mutable_scalar_common_2[65])));
#line 276 "prog_io_mutable.m"
          MR_hl_field(MR_mktag(1), parse_tree__prog_io_mutable__Pieces_9, 1) = ((MR_Box) (parse_tree__prog_io_mutable__V_14_14));
#line 276 "prog_io_mutable.m"
        }
#line 280 "prog_io_mutable.m"
        {
#line 280 "prog_io_mutable.m"
          parse_tree__prog_io_mutable__V_32_32 = mercury__term__get_term_context_1_f_0(parse_tree__prog_io_mutable__TypeCtorInfo_67_67, (parse_tree__prog_io_mutable__env).parse_tree__prog_io_mutable__parse_mutable_inst_3_p_0_env_0__InstTerm_5);
        }
#line 280 "prog_io_mutable.m"
        {
#line 280 "prog_io_mutable.m"
          parse_tree__prog_io_mutable__V_34_34 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 280 "prog_io_mutable.m"
          MR_hl_field(MR_mktag(0), parse_tree__prog_io_mutable__V_34_34, 0) = ((MR_Box) (parse_tree__prog_io_mutable__Pieces_9));
#line 280 "prog_io_mutable.m"
        }
#line 280 "prog_io_mutable.m"
        {
#line 280 "prog_io_mutable.m"
          parse_tree__prog_io_mutable__V_33_33 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 280 "prog_io_mutable.m"
          MR_hl_field(MR_mktag(1), parse_tree__prog_io_mutable__V_33_33, 0) = ((MR_Box) (parse_tree__prog_io_mutable__V_34_34));
#line 280 "prog_io_mutable.m"
          MR_hl_field(MR_mktag(1), parse_tree__prog_io_mutable__V_33_33, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 280 "prog_io_mutable.m"
        }
#line 280 "prog_io_mutable.m"
        {
#line 280 "prog_io_mutable.m"
          parse_tree__prog_io_mutable__V_31_31 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 280 "prog_io_mutable.m"
          MR_hl_field(MR_mktag(0), parse_tree__prog_io_mutable__V_31_31, 0) = ((MR_Box) (parse_tree__prog_io_mutable__V_32_32));
#line 280 "prog_io_mutable.m"
          MR_hl_field(MR_mktag(0), parse_tree__prog_io_mutable__V_31_31, 1) = ((MR_Box) (parse_tree__prog_io_mutable__V_33_33));
#line 280 "prog_io_mutable.m"
        }
#line 280 "prog_io_mutable.m"
        {
#line 280 "prog_io_mutable.m"
          parse_tree__prog_io_mutable__V_30_30 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 280 "prog_io_mutable.m"
          MR_hl_field(MR_mktag(1), parse_tree__prog_io_mutable__V_30_30, 0) = ((MR_Box) (parse_tree__prog_io_mutable__V_31_31));
#line 280 "prog_io_mutable.m"
          MR_hl_field(MR_mktag(1), parse_tree__prog_io_mutable__V_30_30, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 280 "prog_io_mutable.m"
        }
#line 279 "prog_io_mutable.m"
        {
#line 279 "prog_io_mutable.m"
          parse_tree__prog_io_mutable__Spec_10 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 279 "prog_io_mutable.m"
          MR_hl_field(MR_mktag(0), parse_tree__prog_io_mutable__Spec_10, 0) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 279 "prog_io_mutable.m"
          MR_hl_field(MR_mktag(0), parse_tree__prog_io_mutable__Spec_10, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 3))));
#line 279 "prog_io_mutable.m"
          MR_hl_field(MR_mktag(0), parse_tree__prog_io_mutable__Spec_10, 2) = ((MR_Box) (parse_tree__prog_io_mutable__V_30_30));
#line 279 "prog_io_mutable.m"
        }
#line 281 "prog_io_mutable.m"
        {
#line 281 "prog_io_mutable.m"
          parse_tree__prog_io_mutable__V_37_37 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 281 "prog_io_mutable.m"
          MR_hl_field(MR_mktag(1), parse_tree__prog_io_mutable__V_37_37, 0) = ((MR_Box) (parse_tree__prog_io_mutable__Spec_10));
#line 281 "prog_io_mutable.m"
          MR_hl_field(MR_mktag(1), parse_tree__prog_io_mutable__V_37_37, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 281 "prog_io_mutable.m"
        }
#line 281 "prog_io_mutable.m"
        {
#line 281 "prog_io_mutable.m"
          MR_Word base;
#line 281 "prog_io_mutable.m"
          base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 281 "prog_io_mutable.m"
          *parse_tree__prog_io_mutable__MaybeInst_6 = base;
#line 281 "prog_io_mutable.m"
          MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (parse_tree__prog_io_mutable__V_37_37));
#line 281 "prog_io_mutable.m"
        }
#line 275 "prog_io_mutable.m"
      }
#line 274 "prog_io_mutable.m"
    else
#line 282 "prog_io_mutable.m"
      {
#line 282 "prog_io_mutable.m"
        MR_Word parse_tree__prog_io_mutable__Inst_11;

#line 282 "prog_io_mutable.m"
        {
#line 282 "prog_io_mutable.m"
          (parse_tree__prog_io_mutable__env).parse_tree__prog_io_mutable__parse_mutable_inst_3_p_0_env_0__succeeded = parse_tree__prog_io_util__convert_inst_3_p_0((MR_Integer) 1, (parse_tree__prog_io_mutable__env).parse_tree__prog_io_mutable__parse_mutable_inst_3_p_0_env_0__InstTerm_5, &parse_tree__prog_io_mutable__Inst_11);
        }
#line 282 "prog_io_mutable.m"
        if ((parse_tree__prog_io_mutable__env).parse_tree__prog_io_mutable__parse_mutable_inst_3_p_0_env_0__succeeded)
#line 283 "prog_io_mutable.m"
          {
#line 283 "prog_io_mutable.m"
            MR_Word base;
#line 283 "prog_io_mutable.m"
            base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 283 "prog_io_mutable.m"
            *parse_tree__prog_io_mutable__MaybeInst_6 = base;
#line 283 "prog_io_mutable.m"
            MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (parse_tree__prog_io_mutable__Inst_11));
#line 283 "prog_io_mutable.m"
          }
#line 282 "prog_io_mutable.m"
        else
#line 286 "prog_io_mutable.m"
          {
#line 286 "prog_io_mutable.m"
            MR_Word parse_tree__prog_io_mutable__V_53_53;
#line 286 "prog_io_mutable.m"
            MR_Word parse_tree__prog_io_mutable__V_54_54;
#line 286 "prog_io_mutable.m"
            MR_Word parse_tree__prog_io_mutable__V_55_55;
#line 286 "prog_io_mutable.m"
            MR_Word parse_tree__prog_io_mutable__V_60_60;
#line 286 "prog_io_mutable.m"
            MR_Word parse_tree__prog_io_mutable__Spec_63;

#line 288 "prog_io_mutable.m"
            {
#line 288 "prog_io_mutable.m"
              parse_tree__prog_io_mutable__V_55_55 = mercury__term__get_term_context_1_f_0((MR_Word) &mercury__term__term__type_ctor_info_generic_0, (parse_tree__prog_io_mutable__env).parse_tree__prog_io_mutable__parse_mutable_inst_3_p_0_env_0__InstTerm_5);
            }
#line 288 "prog_io_mutable.m"
            {
#line 288 "prog_io_mutable.m"
              parse_tree__prog_io_mutable__V_54_54 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 288 "prog_io_mutable.m"
              MR_hl_field(MR_mktag(0), parse_tree__prog_io_mutable__V_54_54, 0) = ((MR_Box) (parse_tree__prog_io_mutable__V_55_55));
#line 288 "prog_io_mutable.m"
              MR_hl_field(MR_mktag(0), parse_tree__prog_io_mutable__V_54_54, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__prog_io_mutable_scalar_common_2[66])));
#line 288 "prog_io_mutable.m"
            }
#line 288 "prog_io_mutable.m"
            {
#line 288 "prog_io_mutable.m"
              parse_tree__prog_io_mutable__V_53_53 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 288 "prog_io_mutable.m"
              MR_hl_field(MR_mktag(1), parse_tree__prog_io_mutable__V_53_53, 0) = ((MR_Box) (parse_tree__prog_io_mutable__V_54_54));
#line 288 "prog_io_mutable.m"
              MR_hl_field(MR_mktag(1), parse_tree__prog_io_mutable__V_53_53, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 288 "prog_io_mutable.m"
            }
#line 287 "prog_io_mutable.m"
            {
#line 287 "prog_io_mutable.m"
              parse_tree__prog_io_mutable__Spec_63 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 287 "prog_io_mutable.m"
              MR_hl_field(MR_mktag(0), parse_tree__prog_io_mutable__Spec_63, 0) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 287 "prog_io_mutable.m"
              MR_hl_field(MR_mktag(0), parse_tree__prog_io_mutable__Spec_63, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 3))));
#line 287 "prog_io_mutable.m"
              MR_hl_field(MR_mktag(0), parse_tree__prog_io_mutable__Spec_63, 2) = ((MR_Box) (parse_tree__prog_io_mutable__V_53_53));
#line 287 "prog_io_mutable.m"
            }
#line 289 "prog_io_mutable.m"
            {
#line 289 "prog_io_mutable.m"
              parse_tree__prog_io_mutable__V_60_60 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 289 "prog_io_mutable.m"
              MR_hl_field(MR_mktag(1), parse_tree__prog_io_mutable__V_60_60, 0) = ((MR_Box) (parse_tree__prog_io_mutable__Spec_63));
#line 289 "prog_io_mutable.m"
              MR_hl_field(MR_mktag(1), parse_tree__prog_io_mutable__V_60_60, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 289 "prog_io_mutable.m"
            }
#line 289 "prog_io_mutable.m"
            {
#line 289 "prog_io_mutable.m"
              MR_Word base;
#line 289 "prog_io_mutable.m"
              base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 289 "prog_io_mutable.m"
              *parse_tree__prog_io_mutable__MaybeInst_6 = base;
#line 289 "prog_io_mutable.m"
              MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (parse_tree__prog_io_mutable__V_60_60));
#line 289 "prog_io_mutable.m"
            }
#line 286 "prog_io_mutable.m"
          }
#line 282 "prog_io_mutable.m"
      }
#line 271 "prog_io_mutable.m"
  }
#line 271 "prog_io_mutable.m"
}

#line 258 "prog_io_mutable.m"
static void MR_CALL 
parse_tree__prog_io_mutable__parse_mutable_type_3_p_0_1(
#line 258 "prog_io_mutable.m"
  void * parse_tree__prog_io_mutable__env_ptr_arg)
#line 258 "prog_io_mutable.m"
{
#line 258 "prog_io_mutable.m"
  {
#line 258 "prog_io_mutable.m"
    struct parse_tree__prog_io_mutable__parse_mutable_type_3_p_0_env_0_s * parse_tree__prog_io_mutable__env_ptr = (struct parse_tree__prog_io_mutable__parse_mutable_type_3_p_0_env_0_s *) parse_tree__prog_io_mutable__env_ptr_arg;

#line 258 "prog_io_mutable.m"
    MR_builtin_longjmp((parse_tree__prog_io_mutable__env_ptr)->parse_tree__prog_io_mutable__parse_mutable_type_3_p_0_env_0__commit_0, 1);
#line 258 "prog_io_mutable.m"
  }
#line 258 "prog_io_mutable.m"
}

#line 258 "prog_io_mutable.m"
static void MR_CALL 
parse_tree__prog_io_mutable__parse_mutable_type_3_p_0_2(
#line 258 "prog_io_mutable.m"
  void * parse_tree__prog_io_mutable__env_ptr_arg)
#line 258 "prog_io_mutable.m"
{
#line 258 "prog_io_mutable.m"
  {
#line 258 "prog_io_mutable.m"
    struct parse_tree__prog_io_mutable__parse_mutable_type_3_p_0_env_0_s * parse_tree__prog_io_mutable__env_ptr = (struct parse_tree__prog_io_mutable__parse_mutable_type_3_p_0_env_0_s *) parse_tree__prog_io_mutable__env_ptr_arg;

#line 258 "prog_io_mutable.m"
    if (MR_builtin_setjmp((parse_tree__prog_io_mutable__env_ptr)->parse_tree__prog_io_mutable__parse_mutable_type_3_p_0_env_0__commit_0) == 0)
#line 258 "prog_io_mutable.m"
      {
#line 258 "prog_io_mutable.m"
        {
#line 258 "prog_io_mutable.m"
          MR_Word parse_tree__prog_io_mutable__V_7_7;

#line 258 "prog_io_mutable.m"
          {
#line 258 "prog_io_mutable.m"
            mercury__term__contains_var_2_p_1((MR_Word) &mercury__term__term__type_ctor_info_generic_0, (parse_tree__prog_io_mutable__env_ptr)->parse_tree__prog_io_mutable__parse_mutable_type_3_p_0_env_0__TypeTerm_5, &parse_tree__prog_io_mutable__V_7_7, parse_tree__prog_io_mutable__parse_mutable_type_3_p_0_1, parse_tree__prog_io_mutable__env_ptr);
          }
#line 258 "prog_io_mutable.m"
        }
#line 258 "prog_io_mutable.m"
        (parse_tree__prog_io_mutable__env_ptr)->parse_tree__prog_io_mutable__parse_mutable_type_3_p_0_env_0__succeeded = MR_FALSE;
#line 258 "prog_io_mutable.m"
      }
#line 258 "prog_io_mutable.m"
    else
#line 258 "prog_io_mutable.m"
      (parse_tree__prog_io_mutable__env_ptr)->parse_tree__prog_io_mutable__parse_mutable_type_3_p_0_env_0__succeeded = MR_TRUE;
#line 258 "prog_io_mutable.m"
  }
#line 258 "prog_io_mutable.m"
}

#line 255 "prog_io_mutable.m"
static void MR_CALL 
parse_tree__prog_io_mutable__parse_mutable_type_3_p_0(
#line 255 "prog_io_mutable.m"
  MR_Word parse_tree__prog_io_mutable__VarSet_4,
#line 255 "prog_io_mutable.m"
  MR_Word parse_tree__prog_io_mutable__TypeTerm_5,
#line 255 "prog_io_mutable.m"
  MR_Word * parse_tree__prog_io_mutable__MaybeType_6)
#line 255 "prog_io_mutable.m"
{
#line 255 "prog_io_mutable.m"
  {
#line 255 "prog_io_mutable.m"
    struct parse_tree__prog_io_mutable__parse_mutable_type_3_p_0_env_0_s parse_tree__prog_io_mutable__env;

#line 255 "prog_io_mutable.m"
    (parse_tree__prog_io_mutable__env).parse_tree__prog_io_mutable__parse_mutable_type_3_p_0_env_0__TypeTerm_5 = parse_tree__prog_io_mutable__TypeTerm_5;
#line 258 "prog_io_mutable.m"
    {
#line 258 "prog_io_mutable.m"
      parse_tree__prog_io_mutable__parse_mutable_type_3_p_0_2(&parse_tree__prog_io_mutable__env);
    }
#line 258 "prog_io_mutable.m"
    if ((parse_tree__prog_io_mutable__env).parse_tree__prog_io_mutable__parse_mutable_type_3_p_0_env_0__succeeded)
#line 259 "prog_io_mutable.m"
      {
#line 259 "prog_io_mutable.m"
        MR_Word parse_tree__prog_io_mutable__TypeCtorInfo_40_40 = (MR_Word) &mercury__term__term__type_ctor_info_generic_0;
#line 259 "prog_io_mutable.m"
        MR_String parse_tree__prog_io_mutable__TypeTermStr_8;
#line 259 "prog_io_mutable.m"
        MR_Word parse_tree__prog_io_mutable__Pieces_9;
#line 259 "prog_io_mutable.m"
        MR_Word parse_tree__prog_io_mutable__Spec_10;
#line 259 "prog_io_mutable.m"
        MR_Word parse_tree__prog_io_mutable__V_14_14;
#line 259 "prog_io_mutable.m"
        MR_Word parse_tree__prog_io_mutable__V_17_17;
#line 259 "prog_io_mutable.m"
        MR_Word parse_tree__prog_io_mutable__V_20_20;
#line 259 "prog_io_mutable.m"
        MR_Word parse_tree__prog_io_mutable__V_21_21;
#line 259 "prog_io_mutable.m"
        MR_Word parse_tree__prog_io_mutable__V_30_30;
#line 259 "prog_io_mutable.m"
        MR_Word parse_tree__prog_io_mutable__V_31_31;
#line 259 "prog_io_mutable.m"
        MR_Word parse_tree__prog_io_mutable__V_32_32;
#line 259 "prog_io_mutable.m"
        MR_Word parse_tree__prog_io_mutable__V_33_33;
#line 259 "prog_io_mutable.m"
        MR_Word parse_tree__prog_io_mutable__V_34_34;
#line 259 "prog_io_mutable.m"
        MR_Word parse_tree__prog_io_mutable__V_37_37;

#line 259 "prog_io_mutable.m"
        {
#line 259 "prog_io_mutable.m"
          parse_tree__prog_io_mutable__TypeTermStr_8 = parse_tree__parse_tree_out_term__describe_error_term_2_f_0(parse_tree__prog_io_mutable__TypeCtorInfo_40_40, parse_tree__prog_io_mutable__VarSet_4, (parse_tree__prog_io_mutable__env).parse_tree__prog_io_mutable__parse_mutable_type_3_p_0_env_0__TypeTerm_5);
        }
#line 262 "prog_io_mutable.m"
        {
#line 262 "prog_io_mutable.m"
          parse_tree__prog_io_mutable__V_21_21 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 262 "prog_io_mutable.m"
          MR_hl_field(MR_mktag(3), parse_tree__prog_io_mutable__V_21_21, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 5));
#line 262 "prog_io_mutable.m"
          MR_hl_field(MR_mktag(3), parse_tree__prog_io_mutable__V_21_21, 1) = ((MR_Box) (parse_tree__prog_io_mutable__TypeTermStr_8));
#line 262 "prog_io_mutable.m"
        }
#line 262 "prog_io_mutable.m"
        {
#line 262 "prog_io_mutable.m"
          parse_tree__prog_io_mutable__V_20_20 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 262 "prog_io_mutable.m"
          MR_hl_field(MR_mktag(1), parse_tree__prog_io_mutable__V_20_20, 0) = ((MR_Box) (parse_tree__prog_io_mutable__V_21_21));
#line 262 "prog_io_mutable.m"
          MR_hl_field(MR_mktag(1), parse_tree__prog_io_mutable__V_20_20, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__prog_io_mutable_scalar_common_2[20])));
#line 262 "prog_io_mutable.m"
        }
#line 261 "prog_io_mutable.m"
        {
#line 261 "prog_io_mutable.m"
          parse_tree__prog_io_mutable__V_17_17 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 261 "prog_io_mutable.m"
          MR_hl_field(MR_mktag(1), parse_tree__prog_io_mutable__V_17_17, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__prog_io_mutable_scalar_common_2[64])));
#line 261 "prog_io_mutable.m"
          MR_hl_field(MR_mktag(1), parse_tree__prog_io_mutable__V_17_17, 1) = ((MR_Box) (parse_tree__prog_io_mutable__V_20_20));
#line 261 "prog_io_mutable.m"
        }
#line 260 "prog_io_mutable.m"
        {
#line 260 "prog_io_mutable.m"
          parse_tree__prog_io_mutable__V_14_14 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 260 "prog_io_mutable.m"
          MR_hl_field(MR_mktag(1), parse_tree__prog_io_mutable__V_14_14, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__prog_io_mutable_scalar_common_2[63])));
#line 260 "prog_io_mutable.m"
          MR_hl_field(MR_mktag(1), parse_tree__prog_io_mutable__V_14_14, 1) = ((MR_Box) (parse_tree__prog_io_mutable__V_17_17));
#line 260 "prog_io_mutable.m"
        }
#line 260 "prog_io_mutable.m"
        {
#line 260 "prog_io_mutable.m"
          parse_tree__prog_io_mutable__Pieces_9 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 260 "prog_io_mutable.m"
          MR_hl_field(MR_mktag(1), parse_tree__prog_io_mutable__Pieces_9, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__prog_io_mutable_scalar_common_2[62])));
#line 260 "prog_io_mutable.m"
          MR_hl_field(MR_mktag(1), parse_tree__prog_io_mutable__Pieces_9, 1) = ((MR_Box) (parse_tree__prog_io_mutable__V_14_14));
#line 260 "prog_io_mutable.m"
        }
#line 264 "prog_io_mutable.m"
        {
#line 264 "prog_io_mutable.m"
          parse_tree__prog_io_mutable__V_32_32 = mercury__term__get_term_context_1_f_0(parse_tree__prog_io_mutable__TypeCtorInfo_40_40, (parse_tree__prog_io_mutable__env).parse_tree__prog_io_mutable__parse_mutable_type_3_p_0_env_0__TypeTerm_5);
        }
#line 264 "prog_io_mutable.m"
        {
#line 264 "prog_io_mutable.m"
          parse_tree__prog_io_mutable__V_34_34 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 264 "prog_io_mutable.m"
          MR_hl_field(MR_mktag(0), parse_tree__prog_io_mutable__V_34_34, 0) = ((MR_Box) (parse_tree__prog_io_mutable__Pieces_9));
#line 264 "prog_io_mutable.m"
        }
#line 264 "prog_io_mutable.m"
        {
#line 264 "prog_io_mutable.m"
          parse_tree__prog_io_mutable__V_33_33 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 264 "prog_io_mutable.m"
          MR_hl_field(MR_mktag(1), parse_tree__prog_io_mutable__V_33_33, 0) = ((MR_Box) (parse_tree__prog_io_mutable__V_34_34));
#line 264 "prog_io_mutable.m"
          MR_hl_field(MR_mktag(1), parse_tree__prog_io_mutable__V_33_33, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 264 "prog_io_mutable.m"
        }
#line 264 "prog_io_mutable.m"
        {
#line 264 "prog_io_mutable.m"
          parse_tree__prog_io_mutable__V_31_31 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 264 "prog_io_mutable.m"
          MR_hl_field(MR_mktag(0), parse_tree__prog_io_mutable__V_31_31, 0) = ((MR_Box) (parse_tree__prog_io_mutable__V_32_32));
#line 264 "prog_io_mutable.m"
          MR_hl_field(MR_mktag(0), parse_tree__prog_io_mutable__V_31_31, 1) = ((MR_Box) (parse_tree__prog_io_mutable__V_33_33));
#line 264 "prog_io_mutable.m"
        }
#line 264 "prog_io_mutable.m"
        {
#line 264 "prog_io_mutable.m"
          parse_tree__prog_io_mutable__V_30_30 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 264 "prog_io_mutable.m"
          MR_hl_field(MR_mktag(1), parse_tree__prog_io_mutable__V_30_30, 0) = ((MR_Box) (parse_tree__prog_io_mutable__V_31_31));
#line 264 "prog_io_mutable.m"
          MR_hl_field(MR_mktag(1), parse_tree__prog_io_mutable__V_30_30, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 264 "prog_io_mutable.m"
        }
#line 263 "prog_io_mutable.m"
        {
#line 263 "prog_io_mutable.m"
          parse_tree__prog_io_mutable__Spec_10 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 263 "prog_io_mutable.m"
          MR_hl_field(MR_mktag(0), parse_tree__prog_io_mutable__Spec_10, 0) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 263 "prog_io_mutable.m"
          MR_hl_field(MR_mktag(0), parse_tree__prog_io_mutable__Spec_10, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 3))));
#line 263 "prog_io_mutable.m"
          MR_hl_field(MR_mktag(0), parse_tree__prog_io_mutable__Spec_10, 2) = ((MR_Box) (parse_tree__prog_io_mutable__V_30_30));
#line 263 "prog_io_mutable.m"
        }
#line 265 "prog_io_mutable.m"
        {
#line 265 "prog_io_mutable.m"
          parse_tree__prog_io_mutable__V_37_37 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 265 "prog_io_mutable.m"
          MR_hl_field(MR_mktag(1), parse_tree__prog_io_mutable__V_37_37, 0) = ((MR_Box) (parse_tree__prog_io_mutable__Spec_10));
#line 265 "prog_io_mutable.m"
          MR_hl_field(MR_mktag(1), parse_tree__prog_io_mutable__V_37_37, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 265 "prog_io_mutable.m"
        }
#line 265 "prog_io_mutable.m"
        {
#line 265 "prog_io_mutable.m"
          MR_Word base;
#line 265 "prog_io_mutable.m"
          base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 265 "prog_io_mutable.m"
          *parse_tree__prog_io_mutable__MaybeType_6 = base;
#line 265 "prog_io_mutable.m"
          MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (parse_tree__prog_io_mutable__V_37_37));
#line 265 "prog_io_mutable.m"
        }
#line 259 "prog_io_mutable.m"
      }
#line 258 "prog_io_mutable.m"
    else
#line 267 "prog_io_mutable.m"
      {
#line 267 "prog_io_mutable.m"
        MR_Word parse_tree__prog_io_mutable__ContextPieces_11;

#line 267 "prog_io_mutable.m"
        {
#line 267 "prog_io_mutable.m"
          parse_tree__prog_io_mutable__ContextPieces_11 = mercury__cord__init_0_f_0((MR_Word) &parse_tree__error_util__parse_tree__error_util__type_ctor_info_format_component_0);
        }
#line 268 "prog_io_mutable.m"
        {
#line 268 "prog_io_mutable.m"
          parse_tree__prog_io_util__parse_type_4_p_0((parse_tree__prog_io_mutable__env).parse_tree__prog_io_mutable__parse_mutable_type_3_p_0_env_0__TypeTerm_5, parse_tree__prog_io_mutable__VarSet_4, parse_tree__prog_io_mutable__ContextPieces_11, parse_tree__prog_io_mutable__MaybeType_6);
        }
#line 267 "prog_io_mutable.m"
      }
#line 255 "prog_io_mutable.m"
  }
#line 255 "prog_io_mutable.m"
}

#line 243 "prog_io_mutable.m"
static void MR_CALL 
parse_tree__prog_io_mutable__parse_mutable_name_2_p_0(
#line 243 "prog_io_mutable.m"
  MR_Word parse_tree__prog_io_mutable__NameTerm_3,
#line 243 "prog_io_mutable.m"
  MR_Word * parse_tree__prog_io_mutable__MaybeName_4)
#line 243 "prog_io_mutable.m"
{
#line 246 "prog_io_mutable.m"
  {
#line 246 "prog_io_mutable.m"
    MR_bool parse_tree__prog_io_mutable__succeeded = ((MR_tag((MR_Word) parse_tree__prog_io_mutable__NameTerm_3)) == (MR_mktag((MR_Integer) 0)));
#line 246 "prog_io_mutable.m"
    MR_String parse_tree__prog_io_mutable__Name_5;
#line 246 "prog_io_mutable.m"
    MR_Word parse_tree__prog_io_mutable__V_9_9;
#line 246 "prog_io_mutable.m"
    MR_Word parse_tree__prog_io_mutable__V_10_10;
#line 246 "prog_io_mutable.m"
    MR_Word parse_tree__prog_io_mutable__V_6_6;

#line 246 "prog_io_mutable.m"
    if (parse_tree__prog_io_mutable__succeeded)
#line 246 "prog_io_mutable.m"
      {
#line 246 "prog_io_mutable.m"
        parse_tree__prog_io_mutable__V_9_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_mutable__NameTerm_3, (MR_Integer) 0)));
#line 246 "prog_io_mutable.m"
        parse_tree__prog_io_mutable__V_10_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_mutable__NameTerm_3, (MR_Integer) 1)));
#line 246 "prog_io_mutable.m"
        parse_tree__prog_io_mutable__V_6_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_mutable__NameTerm_3, (MR_Integer) 2)));
#line 246 "prog_io_mutable.m"
        parse_tree__prog_io_mutable__succeeded = (parse_tree__prog_io_mutable__V_10_10 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 246 "prog_io_mutable.m"
        if (parse_tree__prog_io_mutable__succeeded)
#line 246 "prog_io_mutable.m"
          {
#line 246 "prog_io_mutable.m"
            parse_tree__prog_io_mutable__succeeded = ((MR_tag((MR_Word) parse_tree__prog_io_mutable__V_9_9)) == (MR_mktag((MR_Integer) 0)));
#line 246 "prog_io_mutable.m"
            if (parse_tree__prog_io_mutable__succeeded)
#line 246 "prog_io_mutable.m"
              parse_tree__prog_io_mutable__Name_5 = ((MR_String) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_mutable__V_9_9, (MR_Integer) 0)));
#line 246 "prog_io_mutable.m"
          }
#line 246 "prog_io_mutable.m"
      }
#line 246 "prog_io_mutable.m"
    if (parse_tree__prog_io_mutable__succeeded)
#line 247 "prog_io_mutable.m"
      {
#line 247 "prog_io_mutable.m"
        MR_Word base;
#line 247 "prog_io_mutable.m"
        base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 247 "prog_io_mutable.m"
        *parse_tree__prog_io_mutable__MaybeName_4 = base;
#line 247 "prog_io_mutable.m"
        MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (parse_tree__prog_io_mutable__Name_5));
#line 247 "prog_io_mutable.m"
      }
#line 246 "prog_io_mutable.m"
    else
#line 249 "prog_io_mutable.m"
      {
#line 249 "prog_io_mutable.m"
        MR_Word parse_tree__prog_io_mutable__Spec_8;
#line 249 "prog_io_mutable.m"
        MR_Word parse_tree__prog_io_mutable__V_18_18;
#line 249 "prog_io_mutable.m"
        MR_Word parse_tree__prog_io_mutable__V_19_19;
#line 249 "prog_io_mutable.m"
        MR_Word parse_tree__prog_io_mutable__V_20_20;
#line 249 "prog_io_mutable.m"
        MR_Word parse_tree__prog_io_mutable__V_25_25;

#line 251 "prog_io_mutable.m"
        {
#line 251 "prog_io_mutable.m"
          parse_tree__prog_io_mutable__V_20_20 = mercury__term__get_term_context_1_f_0((MR_Word) &mercury__term__term__type_ctor_info_generic_0, parse_tree__prog_io_mutable__NameTerm_3);
        }
#line 251 "prog_io_mutable.m"
        {
#line 251 "prog_io_mutable.m"
          parse_tree__prog_io_mutable__V_19_19 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 251 "prog_io_mutable.m"
          MR_hl_field(MR_mktag(0), parse_tree__prog_io_mutable__V_19_19, 0) = ((MR_Box) (parse_tree__prog_io_mutable__V_20_20));
#line 251 "prog_io_mutable.m"
          MR_hl_field(MR_mktag(0), parse_tree__prog_io_mutable__V_19_19, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__prog_io_mutable_scalar_common_2[61])));
#line 251 "prog_io_mutable.m"
        }
#line 251 "prog_io_mutable.m"
        {
#line 251 "prog_io_mutable.m"
          parse_tree__prog_io_mutable__V_18_18 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 251 "prog_io_mutable.m"
          MR_hl_field(MR_mktag(1), parse_tree__prog_io_mutable__V_18_18, 0) = ((MR_Box) (parse_tree__prog_io_mutable__V_19_19));
#line 251 "prog_io_mutable.m"
          MR_hl_field(MR_mktag(1), parse_tree__prog_io_mutable__V_18_18, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 251 "prog_io_mutable.m"
        }
#line 250 "prog_io_mutable.m"
        {
#line 250 "prog_io_mutable.m"
          parse_tree__prog_io_mutable__Spec_8 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 250 "prog_io_mutable.m"
          MR_hl_field(MR_mktag(0), parse_tree__prog_io_mutable__Spec_8, 0) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 250 "prog_io_mutable.m"
          MR_hl_field(MR_mktag(0), parse_tree__prog_io_mutable__Spec_8, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 3))));
#line 250 "prog_io_mutable.m"
          MR_hl_field(MR_mktag(0), parse_tree__prog_io_mutable__Spec_8, 2) = ((MR_Box) (parse_tree__prog_io_mutable__V_18_18));
#line 250 "prog_io_mutable.m"
        }
#line 252 "prog_io_mutable.m"
        {
#line 252 "prog_io_mutable.m"
          parse_tree__prog_io_mutable__V_25_25 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 252 "prog_io_mutable.m"
          MR_hl_field(MR_mktag(1), parse_tree__prog_io_mutable__V_25_25, 0) = ((MR_Box) (parse_tree__prog_io_mutable__Spec_8));
#line 252 "prog_io_mutable.m"
          MR_hl_field(MR_mktag(1), parse_tree__prog_io_mutable__V_25_25, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 252 "prog_io_mutable.m"
        }
#line 252 "prog_io_mutable.m"
        {
#line 252 "prog_io_mutable.m"
          MR_Word base;
#line 252 "prog_io_mutable.m"
          base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 252 "prog_io_mutable.m"
          *parse_tree__prog_io_mutable__MaybeName_4 = base;
#line 252 "prog_io_mutable.m"
          MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (parse_tree__prog_io_mutable__V_25_25));
#line 252 "prog_io_mutable.m"
        }
#line 249 "prog_io_mutable.m"
      }
#line 246 "prog_io_mutable.m"
  }
#line 243 "prog_io_mutable.m"
}

#line 43 "prog_io_mutable.m"
void MR_CALL 
parse_tree__prog_io_mutable__parse_mutable_decl_info_7_p_0(
#line 43 "prog_io_mutable.m"
  MR_Word parse_tree__prog_io_mutable___ModuleName_8,
#line 43 "prog_io_mutable.m"
  MR_Word parse_tree__prog_io_mutable__VarSet_9,
#line 43 "prog_io_mutable.m"
  MR_Word parse_tree__prog_io_mutable__ArgTerms_10,
#line 43 "prog_io_mutable.m"
  MR_Word parse_tree__prog_io_mutable__Context_11,
#line 43 "prog_io_mutable.m"
  MR_Integer parse_tree__prog_io_mutable__SeqNum_12,
#line 43 "prog_io_mutable.m"
  MR_Word parse_tree__prog_io_mutable__MutableLocn_13,
#line 43 "prog_io_mutable.m"
  MR_Word * parse_tree__prog_io_mutable__MaybeItemMutableInfo_14)
#line 43 "prog_io_mutable.m"
{
#line 176 "prog_io_mutable.m"
  {
#line 176 "prog_io_mutable.m"
    MR_bool parse_tree__prog_io_mutable__succeeded;

#line 176 "prog_io_mutable.m"
    {
#line 176 "prog_io_mutable.m"
      parse_tree__prog_io_mutable__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_112_97_114_115_101_95_109_117_116_97_98_108_101_95_100_101_99_108_95_105_110_102_111_95_95_91_49_93_95_48_7_p_0(parse_tree__prog_io_mutable__VarSet_9, parse_tree__prog_io_mutable__ArgTerms_10, parse_tree__prog_io_mutable__Context_11, parse_tree__prog_io_mutable__SeqNum_12, parse_tree__prog_io_mutable__MutableLocn_13, parse_tree__prog_io_mutable__MaybeItemMutableInfo_14);
    }
#line 176 "prog_io_mutable.m"
  }
#line 43 "prog_io_mutable.m"
}

#line 34 "prog_io_mutable.m"
void MR_CALL 
parse_tree__prog_io_mutable__parse_mutable_item_6_p_0(
#line 34 "prog_io_mutable.m"
  MR_Word parse_tree__prog_io_mutable__ModuleName_7,
#line 34 "prog_io_mutable.m"
  MR_Word parse_tree__prog_io_mutable__VarSet_8,
#line 34 "prog_io_mutable.m"
  MR_Word parse_tree__prog_io_mutable__ArgTerms_9,
#line 34 "prog_io_mutable.m"
  MR_Word parse_tree__prog_io_mutable__Context_10,
#line 34 "prog_io_mutable.m"
  MR_Integer parse_tree__prog_io_mutable__SeqNum_11,
#line 34 "prog_io_mutable.m"
  MR_Word * parse_tree__prog_io_mutable__MaybeIOM_12)
#line 34 "prog_io_mutable.m"
{
#line 161 "prog_io_mutable.m"
  {
#line 161 "prog_io_mutable.m"
    MR_bool parse_tree__prog_io_mutable__succeeded;

#line 161 "prog_io_mutable.m"
    {
#line 161 "prog_io_mutable.m"
      parse_tree__prog_io_mutable__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_112_97_114_115_101_95_109_117_116_97_98_108_101_95_105_116_101_109_95_95_91_49_93_95_48_6_p_0(parse_tree__prog_io_mutable__VarSet_8, parse_tree__prog_io_mutable__ArgTerms_9, parse_tree__prog_io_mutable__Context_10, parse_tree__prog_io_mutable__SeqNum_11, parse_tree__prog_io_mutable__MaybeIOM_12);
    }
#line 161 "prog_io_mutable.m"
  }
#line 34 "prog_io_mutable.m"
}

#line 31 "prog_io_mutable.m"
void MR_CALL 
parse_tree__prog_io_mutable__parse_finalise_item_6_p_0(
#line 31 "prog_io_mutable.m"
  MR_Word parse_tree__prog_io_mutable___ModuleName_7,
#line 31 "prog_io_mutable.m"
  MR_Word parse_tree__prog_io_mutable__VarSet_8,
#line 31 "prog_io_mutable.m"
  MR_Word parse_tree__prog_io_mutable__ArgTerms_9,
#line 31 "prog_io_mutable.m"
  MR_Word parse_tree__prog_io_mutable__Context_10,
#line 31 "prog_io_mutable.m"
  MR_Integer parse_tree__prog_io_mutable__SeqNum_11,
#line 31 "prog_io_mutable.m"
  MR_Word * parse_tree__prog_io_mutable__MaybeIOM_12)
#line 31 "prog_io_mutable.m"
{
#line 115 "prog_io_mutable.m"
  {
#line 115 "prog_io_mutable.m"
    MR_bool parse_tree__prog_io_mutable__succeeded;

#line 115 "prog_io_mutable.m"
    {
#line 115 "prog_io_mutable.m"
      parse_tree__prog_io_mutable__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_112_97_114_115_101_95_102_105_110_97_108_105_115_101_95_105_116_101_109_95_95_91_49_93_95_48_6_p_0(parse_tree__prog_io_mutable__VarSet_8, parse_tree__prog_io_mutable__ArgTerms_9, parse_tree__prog_io_mutable__Context_10, parse_tree__prog_io_mutable__SeqNum_11, parse_tree__prog_io_mutable__MaybeIOM_12);
    }
#line 115 "prog_io_mutable.m"
  }
#line 31 "prog_io_mutable.m"
}

#line 28 "prog_io_mutable.m"
void MR_CALL 
parse_tree__prog_io_mutable__parse_initialise_item_6_p_0(
#line 28 "prog_io_mutable.m"
  MR_Word parse_tree__prog_io_mutable___ModuleName_7,
#line 28 "prog_io_mutable.m"
  MR_Word parse_tree__prog_io_mutable__VarSet_8,
#line 28 "prog_io_mutable.m"
  MR_Word parse_tree__prog_io_mutable__ArgTerms_9,
#line 28 "prog_io_mutable.m"
  MR_Word parse_tree__prog_io_mutable__Context_10,
#line 28 "prog_io_mutable.m"
  MR_Integer parse_tree__prog_io_mutable__SeqNum_11,
#line 28 "prog_io_mutable.m"
  MR_Word * parse_tree__prog_io_mutable__MaybeIOM_12)
#line 28 "prog_io_mutable.m"
{
#line 66 "prog_io_mutable.m"
  {
#line 66 "prog_io_mutable.m"
    MR_bool parse_tree__prog_io_mutable__succeeded;

#line 66 "prog_io_mutable.m"
    {
#line 66 "prog_io_mutable.m"
      parse_tree__prog_io_mutable__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_112_97_114_115_101_95_105_110_105_116_105_97_108_105_115_101_95_105_116_101_109_95_95_91_49_93_95_48_6_p_0(parse_tree__prog_io_mutable__VarSet_8, parse_tree__prog_io_mutable__ArgTerms_9, parse_tree__prog_io_mutable__Context_10, parse_tree__prog_io_mutable__SeqNum_11, parse_tree__prog_io_mutable__MaybeIOM_12);
    }
#line 66 "prog_io_mutable.m"
  }
#line 28 "prog_io_mutable.m"
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
	MR_register_type_ctor_info(&parse_tree__prog_io_mutable__parse_tree__prog_io_mutable__type_ctor_info_mutable_locn_0);
}

void mercury__parse_tree__prog_io_mutable__init_debugger(void)
{
	MR_fatal_error("debugger initialization in MLDS grade");
}

/* ensure everything is compiled with the same grade */
static const void *const MR_grade = &MR_GRADE_VAR;

/* :- end_module parse_tree.prog_io_mutable. */
