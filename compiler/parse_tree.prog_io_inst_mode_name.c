/*
** Automatically generated from `prog_io_inst_mode_name.m'
** by the Mercury compiler,
** version rotd-2016-02-08
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


/* :- module parse_tree.prog_io_inst_mode_name. */
/* :- implementation. */

/*
INIT mercury__parse_tree__prog_io_inst_mode_name__init
ENDINIT
*/

#include "parse_tree.prog_io_inst_mode_name.mih"


#include "libs.mih"
#include "mdbcomp.mih"
#include "parse_tree.mih"
#include "recompilation.mih"
#include "libs.compiler_util.mih"
#include "libs.globals.mih"
#include "libs.op_mode.mih"
#include "libs.options.mih"
#include "libs.rat.mih"
#include "libs.timestamp.mih"
#include "libs.trace_params.mih"
#include "mdbcomp.builtin_modules.mih"
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
#include "parse_tree.prog_io_sym_name.mih"
#include "parse_tree.prog_io_util.mih"
#include "parse_tree.prog_item.mih"
#include "parse_tree.prog_util.mih"
#include "parse_tree.set_of_var.mih"
#include "mdbcomp.feedback.automatic_parallelism.mih"



struct parse_tree__prog_io_inst_mode_name__parse_bound_inst_list_4_p_0_env_0_s {
  MR_bool parse_tree__prog_io_inst_mode_name__parse_bound_inst_list_4_p_0_env_0__succeeded;
  MR_Word parse_tree__prog_io_inst_mode_name__parse_bound_inst_list_4_p_0_env_0__TypeCtorInfo_23_23;
  MR_Word parse_tree__prog_io_inst_mode_name__parse_bound_inst_list_4_p_0_env_0__Functors_11;
  jmp_buf parse_tree__prog_io_inst_mode_name__parse_bound_inst_list_4_p_0_env_0__commit_0;
  MR_Word parse_tree__prog_io_inst_mode_name__parse_bound_inst_list_4_p_0_env_0__SubList_13;
  MR_Word parse_tree__prog_io_inst_mode_name__parse_bound_inst_list_4_p_0_env_0__F1_14;
  MR_Word parse_tree__prog_io_inst_mode_name__parse_bound_inst_list_4_p_0_env_0__F2_15;
  MR_Word parse_tree__prog_io_inst_mode_name__parse_bound_inst_list_4_p_0_env_0__ConsId_17;
  MR_Word parse_tree__prog_io_inst_mode_name__parse_bound_inst_list_4_p_0_env_0__V_20_20;
  MR_Word parse_tree__prog_io_inst_mode_name__parse_bound_inst_list_4_p_0_env_0__V_24_24;
};


static const MR_EnumFunctorDesc parse_tree__prog_io_inst_mode_name__parse_tree__prog_io_inst_mode_name__enum_functor_desc_allow_constrained_inst_var_0_0;

static const MR_EnumFunctorDesc parse_tree__prog_io_inst_mode_name__parse_tree__prog_io_inst_mode_name__enum_functor_desc_allow_constrained_inst_var_0_1;

static const MR_EnumFunctorDescPtr parse_tree__prog_io_inst_mode_name__parse_tree__prog_io_inst_mode_name__enum_value_ordered_allow_constrained_inst_var_0[2];

static const MR_EnumFunctorDescPtr parse_tree__prog_io_inst_mode_name__parse_tree__prog_io_inst_mode_name__enum_name_ordered_allow_constrained_inst_var_0[2];

static const MR_Integer parse_tree__prog_io_inst_mode_name__parse_tree__prog_io_inst_mode_name__functor_number_map_allow_constrained_inst_var_0[2];

static const MR_PseudoTypeInfo parse_tree__prog_io_inst_mode_name__parse_tree__prog_io_inst_mode_name__field_types_known_compound_inst_kind_1_0[2];

static const MR_DuFunctorDesc parse_tree__prog_io_inst_mode_name__parse_tree__prog_io_inst_mode_name__du_functor_desc_known_compound_inst_kind_1_0;

static const MR_PseudoTypeInfo parse_tree__prog_io_inst_mode_name__parse_tree__prog_io_inst_mode_name__field_types_known_compound_inst_kind_1_1[2];

static const MR_DuFunctorDesc parse_tree__prog_io_inst_mode_name__parse_tree__prog_io_inst_mode_name__du_functor_desc_known_compound_inst_kind_1_1;

static const MR_PseudoTypeInfo parse_tree__prog_io_inst_mode_name__parse_tree__prog_io_inst_mode_name__field_types_known_compound_inst_kind_1_2[1];

static const MR_DuFunctorDesc parse_tree__prog_io_inst_mode_name__parse_tree__prog_io_inst_mode_name__du_functor_desc_known_compound_inst_kind_1_2;

static const MR_PseudoTypeInfo parse_tree__prog_io_inst_mode_name__parse_tree__prog_io_inst_mode_name__field_types_known_compound_inst_kind_1_3[1];

static const MR_DuFunctorDesc parse_tree__prog_io_inst_mode_name__parse_tree__prog_io_inst_mode_name__du_functor_desc_known_compound_inst_kind_1_3;

static const MR_PseudoTypeInfo parse_tree__prog_io_inst_mode_name__parse_tree__prog_io_inst_mode_name__field_types_known_compound_inst_kind_1_4[1];

static const MR_DuFunctorDesc parse_tree__prog_io_inst_mode_name__parse_tree__prog_io_inst_mode_name__du_functor_desc_known_compound_inst_kind_1_4;

static const MR_DuFunctorDescPtr parse_tree__prog_io_inst_mode_name__parse_tree__prog_io_inst_mode_name__du_stag_ordered_known_compound_inst_kind_1_0[1];

static const MR_DuFunctorDescPtr parse_tree__prog_io_inst_mode_name__parse_tree__prog_io_inst_mode_name__du_stag_ordered_known_compound_inst_kind_1_1[1];

static const MR_DuFunctorDescPtr parse_tree__prog_io_inst_mode_name__parse_tree__prog_io_inst_mode_name__du_stag_ordered_known_compound_inst_kind_1_2[1];

static const MR_DuFunctorDescPtr parse_tree__prog_io_inst_mode_name__parse_tree__prog_io_inst_mode_name__du_stag_ordered_known_compound_inst_kind_1_3[2];

static const MR_DuPtagLayout parse_tree__prog_io_inst_mode_name__parse_tree__prog_io_inst_mode_name__du_ptag_ordered_known_compound_inst_kind_1[4];

static const MR_DuFunctorDescPtr parse_tree__prog_io_inst_mode_name__parse_tree__prog_io_inst_mode_name__du_name_ordered_known_compound_inst_kind_1[5];

static const MR_Integer parse_tree__prog_io_inst_mode_name__parse_tree__prog_io_inst_mode_name__functor_number_map_known_compound_inst_kind_1[5];

static const MR_PseudoTypeInfo parse_tree__prog_io_inst_mode_name__parse_tree__prog_io_inst_mode_name__field_types_known_inst_kind_1_0[1];

static const MR_DuFunctorDesc parse_tree__prog_io_inst_mode_name__parse_tree__prog_io_inst_mode_name__du_functor_desc_known_inst_kind_1_0;

static const MR_FA_PseudoTypeInfo_Struct1 parse_tree__prog_io_inst_mode_name__parse_tree__prog_io_inst_mode_name__pti_known_compound_inst_kind_1__pseudo_1;

static const MR_PseudoTypeInfo parse_tree__prog_io_inst_mode_name__parse_tree__prog_io_inst_mode_name__field_types_known_inst_kind_1_1[1];

static const MR_DuFunctorDesc parse_tree__prog_io_inst_mode_name__parse_tree__prog_io_inst_mode_name__du_functor_desc_known_inst_kind_1_1;

static const MR_DuFunctorDesc parse_tree__prog_io_inst_mode_name__parse_tree__prog_io_inst_mode_name__du_functor_desc_known_inst_kind_1_2;

static const MR_DuFunctorDescPtr parse_tree__prog_io_inst_mode_name__parse_tree__prog_io_inst_mode_name__du_stag_ordered_known_inst_kind_1_0[1];

static const MR_DuFunctorDescPtr parse_tree__prog_io_inst_mode_name__parse_tree__prog_io_inst_mode_name__du_stag_ordered_known_inst_kind_1_1[1];

static const MR_DuFunctorDescPtr parse_tree__prog_io_inst_mode_name__parse_tree__prog_io_inst_mode_name__du_stag_ordered_known_inst_kind_1_2[1];

static const MR_DuPtagLayout parse_tree__prog_io_inst_mode_name__parse_tree__prog_io_inst_mode_name__du_ptag_ordered_known_inst_kind_1[3];

static const MR_DuFunctorDescPtr parse_tree__prog_io_inst_mode_name__parse_tree__prog_io_inst_mode_name__du_name_ordered_known_inst_kind_1[3];

static const MR_Integer parse_tree__prog_io_inst_mode_name__parse_tree__prog_io_inst_mode_name__functor_number_map_known_inst_kind_1[3];

static MR_bool MR_CALL 
parse_tree__prog_io_inst_mode_name____Unify____allow_constrained_inst_var_0_0_10001(
  MR_Box parse_tree__prog_io_inst_mode_name__wrapper_arg_1,
  MR_Box parse_tree__prog_io_inst_mode_name__wrapper_arg_2);

static void MR_CALL 
parse_tree__prog_io_inst_mode_name____Compare____allow_constrained_inst_var_0_0_10001(
  MR_Box * parse_tree__prog_io_inst_mode_name__wrapper_arg_1,
  MR_Box parse_tree__prog_io_inst_mode_name__wrapper_arg_2,
  MR_Box parse_tree__prog_io_inst_mode_name__wrapper_arg_3);

static MR_bool MR_CALL 
parse_tree__prog_io_inst_mode_name____Unify____known_compound_inst_kind_1_0_10001(
  MR_Box parse_tree__prog_io_inst_mode_name__wrapper_arg_1,
  MR_Box parse_tree__prog_io_inst_mode_name__wrapper_arg_2,
  MR_Box parse_tree__prog_io_inst_mode_name__wrapper_arg_3);

static void MR_CALL 
parse_tree__prog_io_inst_mode_name____Compare____known_compound_inst_kind_1_0_10001(
  MR_Box parse_tree__prog_io_inst_mode_name__wrapper_arg_1,
  MR_Box * parse_tree__prog_io_inst_mode_name__wrapper_arg_2,
  MR_Box parse_tree__prog_io_inst_mode_name__wrapper_arg_3,
  MR_Box parse_tree__prog_io_inst_mode_name__wrapper_arg_4);

static MR_bool MR_CALL 
parse_tree__prog_io_inst_mode_name____Unify____known_inst_kind_1_0_10001(
  MR_Box parse_tree__prog_io_inst_mode_name__wrapper_arg_1,
  MR_Box parse_tree__prog_io_inst_mode_name__wrapper_arg_2,
  MR_Box parse_tree__prog_io_inst_mode_name__wrapper_arg_3);

static void MR_CALL 
parse_tree__prog_io_inst_mode_name____Compare____known_inst_kind_1_0_10001(
  MR_Box parse_tree__prog_io_inst_mode_name__wrapper_arg_1,
  MR_Box * parse_tree__prog_io_inst_mode_name__wrapper_arg_2,
  MR_Box parse_tree__prog_io_inst_mode_name__wrapper_arg_3,
  MR_Box parse_tree__prog_io_inst_mode_name__wrapper_arg_4);

static MR_bool MR_CALL 
parse_tree__prog_io_inst_mode_name__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_105_115_95_107_110_111_119_110_95_105_110_115_116_95_110_97_109_101_95_97_114_103_115_95_95_91_49_93_95_48_3_p_0(
  MR_String parse_tree__prog_io_inst_mode_name__Name_4,
  MR_Word parse_tree__prog_io_inst_mode_name__Args_5,
  MR_Word * parse_tree__prog_io_inst_mode_name__KnownInst_6);

static void MR_CALL 
parse_tree__prog_io_inst_mode_name____Compare____known_inst_kind_1_0(
  MR_Word parse_tree__prog_io_inst_mode_name__TypeInfo_for_T_18,
  MR_Word * parse_tree__prog_io_inst_mode_name__HeadVar__1_1,
  MR_Word parse_tree__prog_io_inst_mode_name__HeadVar__2_2,
  MR_Word parse_tree__prog_io_inst_mode_name__HeadVar__3_3);

static MR_bool MR_CALL 
parse_tree__prog_io_inst_mode_name____Unify____known_inst_kind_1_0(
  MR_Word parse_tree__prog_io_inst_mode_name__TypeInfo_for_T_11,
  MR_Word parse_tree__prog_io_inst_mode_name__HeadVar__1_1,
  MR_Word parse_tree__prog_io_inst_mode_name__HeadVar__2_2);

static void MR_CALL 
parse_tree__prog_io_inst_mode_name____Compare____known_compound_inst_kind_1_0(
  MR_Word parse_tree__prog_io_inst_mode_name__TypeInfo_for_T_78,
  MR_Word * parse_tree__prog_io_inst_mode_name__HeadVar__1_1,
  MR_Word parse_tree__prog_io_inst_mode_name__HeadVar__2_2,
  MR_Word parse_tree__prog_io_inst_mode_name__HeadVar__3_3);

static MR_bool MR_CALL 
parse_tree__prog_io_inst_mode_name____Unify____known_compound_inst_kind_1_0(
  MR_Word parse_tree__prog_io_inst_mode_name__TypeInfo_for_T_19,
  MR_Word parse_tree__prog_io_inst_mode_name__HeadVar__1_1,
  MR_Word parse_tree__prog_io_inst_mode_name__HeadVar__2_2);

static MR_bool MR_CALL 
parse_tree__prog_io_inst_mode_name__convert_bound_inst_3_p_0(
  MR_Word parse_tree__prog_io_inst_mode_name__AllowConstrainedInstVar_4,
  MR_Word parse_tree__prog_io_inst_mode_name__InstTerm_5,
  MR_Word * parse_tree__prog_io_inst_mode_name__BoundInst_6);

static MR_bool MR_CALL 
parse_tree__prog_io_inst_mode_name__convert_bound_inst_list_3_p_0(
  MR_Word parse_tree__prog_io_inst_mode_name__AllowConstrainedInstVar_1,
  MR_Word parse_tree__prog_io_inst_mode_name__HeadVar__2_2,
  MR_Word * parse_tree__prog_io_inst_mode_name__HeadVar__3_3);

static void MR_CALL 
parse_tree__prog_io_inst_mode_name__parse_bound_inst_list_4_p_0_1(
  void * parse_tree__prog_io_inst_mode_name__env_ptr_arg);

static void MR_CALL 
parse_tree__prog_io_inst_mode_name__parse_bound_inst_list_4_p_0_2(
  void * parse_tree__prog_io_inst_mode_name__env_ptr_arg);

static void MR_CALL 
parse_tree__prog_io_inst_mode_name__parse_bound_inst_list_4_p_0_3(
  void * parse_tree__prog_io_inst_mode_name__env_ptr_arg);

static MR_bool MR_CALL 
parse_tree__prog_io_inst_mode_name__parse_bound_inst_list_4_p_0(
  MR_Word parse_tree__prog_io_inst_mode_name__AllowConstrainedInstVar_5,
  MR_Word parse_tree__prog_io_inst_mode_name__Disj_6,
  MR_Word parse_tree__prog_io_inst_mode_name__Uniqueness_7,
  MR_Word * parse_tree__prog_io_inst_mode_name__Inst_8);

static MR_bool MR_CALL 
parse_tree__prog_io_inst_mode_name__convert_higher_order_inst_4_p_0(
  MR_Word parse_tree__prog_io_inst_mode_name__AllowConstrainedInstVar_5,
  MR_Word parse_tree__prog_io_inst_mode_name__BeforeIsTerm_6,
  MR_Word parse_tree__prog_io_inst_mode_name__DetTerm_7,
  MR_Word * parse_tree__prog_io_inst_mode_name__Inst_8);

static MR_bool MR_CALL 
parse_tree__prog_io_inst_mode_name__convert_higher_order_mode_4_p_0(
  MR_Word parse_tree__prog_io_inst_mode_name__AllowConstrainedInstVar_5,
  MR_Word parse_tree__prog_io_inst_mode_name__BeforeIsTerm_6,
  MR_Word parse_tree__prog_io_inst_mode_name__DetTerm_7,
  MR_Word * parse_tree__prog_io_inst_mode_name__Mode_8);


static /* final */ const MR_Box parse_tree__prog_io_inst_mode_name_scalar_common_1[7][2];

static /* final */ const MR_Box parse_tree__prog_io_inst_mode_name_scalar_common_2[13][1];

static /* final */ const MR_Box parse_tree__prog_io_inst_mode_name_scalar_common_4[5][3];


/* sealed */ struct parse_tree__prog_io_inst_mode_name__vector_common_type_3_0_s {
  const MR_String parse_tree__prog_io_inst_mode_name__vector_common_type_3_0__vct_3_f_0;
  const MR_Integer parse_tree__prog_io_inst_mode_name__vector_common_type_3_0__vct_3_f_1;
  const MR_Word parse_tree__prog_io_inst_mode_name__vector_common_type_3_0__vct_3_f_2;
};

static /* final */ const struct parse_tree__prog_io_inst_mode_name__vector_common_type_3_0_s parse_tree__prog_io_inst_mode_name_vector_common_3[32];



static /* final */ const MR_Box parse_tree__prog_io_inst_mode_name_scalar_common_1[7][2] = {
  /* row 0 */
  {
    ((MR_Box) (&mercury__term__term__type_ctor_info_term_1)),
    ((MR_Box) (&mercury__term__term__type_ctor_info_generic_0))
  },
  /* row 1 */
  {
    ((MR_Box) (&mercury__term__term__type_ctor_info_var_1)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_inst_var_type_0))
  },
  /* row 2 */
  {
    ((MR_Box) ((MR_Integer) 0)),
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))))
  },
  /* row 3 */
  {
    ((MR_Box) ((MR_Integer) 3)),
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))))
  },
  /* row 4 */
  {
    ((MR_Box) ((MR_Integer) 4)),
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))))
  },
  /* row 5 */
  {
    ((MR_Box) ((MR_Integer) 2)),
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))))
  },
  /* row 6 */
  {
    ((MR_Box) ((MR_Integer) 1)),
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))))
  },
};

static /* final */ const MR_Box parse_tree__prog_io_inst_mode_name_scalar_common_2[13][1] = {
  /* row 0 */
  {
    ((MR_Box) ((MR_String) ""))
  },
  /* row 1 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(2), &parse_tree__prog_io_inst_mode_name_scalar_common_1[2])))
  },
  /* row 2 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__prog_io_inst_mode_name_scalar_common_4[0])))
  },
  /* row 3 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(2), &parse_tree__prog_io_inst_mode_name_scalar_common_1[3])))
  },
  /* row 4 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))))
  },
  /* row 5 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__prog_io_inst_mode_name_scalar_common_4[1])))
  },
  /* row 6 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__prog_io_inst_mode_name_scalar_common_4[2])))
  },
  /* row 7 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(2), &parse_tree__prog_io_inst_mode_name_scalar_common_1[4])))
  },
  /* row 8 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__prog_io_inst_mode_name_scalar_common_4[3])))
  },
  /* row 9 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(2), &parse_tree__prog_io_inst_mode_name_scalar_common_1[5])))
  },
  /* row 10 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 1))))
  },
  /* row 11 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__prog_io_inst_mode_name_scalar_common_4[4])))
  },
  /* row 12 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(2), &parse_tree__prog_io_inst_mode_name_scalar_common_1[6])))
  },
};

static /* final */ const MR_Box parse_tree__prog_io_inst_mode_name_scalar_common_4[5][3] = {
  /* row 0 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 1)),
    ((MR_Box) ((MR_Integer) 3)),
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))))
  },
  /* row 1 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 1)),
    ((MR_Box) ((MR_Integer) 0)),
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))))
  },
  /* row 2 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 1)),
    ((MR_Box) ((MR_Integer) 4)),
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))))
  },
  /* row 3 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 1)),
    ((MR_Box) ((MR_Integer) 2)),
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))))
  },
  /* row 4 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 1)),
    ((MR_Box) ((MR_Integer) 1)),
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))))
  },
};


static /* final */ const struct parse_tree__prog_io_inst_mode_name__vector_common_type_3_0_s parse_tree__prog_io_inst_mode_name_vector_common_3[32] = {
  /* row 0 */
  {
    (MR_String) "semidet",
    (MR_Integer) -1,
    (MR_Integer) 1
  },
  /* row 1 */
  {
    (MR_String) "erroneous",
    (MR_Integer) -1,
    (MR_Integer) 6
  },
  /* row 2 */
  {
    (MR_String) "multi",
    (MR_Integer) -1,
    (MR_Integer) 2
  },
  /* row 3 */
  {
    NULL,
    (MR_Integer) -2,
    (MR_Word) (MR_Integer) 0
  },
  /* row 4 */
  {
    NULL,
    (MR_Integer) -2,
    (MR_Word) (MR_Integer) 0
  },
  /* row 5 */
  {
    NULL,
    (MR_Integer) -2,
    (MR_Word) (MR_Integer) 0
  },
  /* row 6 */
  {
    NULL,
    (MR_Integer) -2,
    (MR_Word) (MR_Integer) 0
  },
  /* row 7 */
  {
    (MR_String) "failure",
    (MR_Integer) -1,
    (MR_Integer) 7
  },
  /* row 8 */
  {
    NULL,
    (MR_Integer) -2,
    (MR_Word) (MR_Integer) 0
  },
  /* row 9 */
  {
    NULL,
    (MR_Integer) -2,
    (MR_Word) (MR_Integer) 0
  },
  /* row 10 */
  {
    NULL,
    (MR_Integer) -2,
    (MR_Word) (MR_Integer) 0
  },
  /* row 11 */
  {
    NULL,
    (MR_Integer) -2,
    (MR_Word) (MR_Integer) 0
  },
  /* row 12 */
  {
    (MR_String) "cc_nondet",
    (MR_Integer) 2,
    (MR_Integer) 5
  },
  /* row 13 */
  {
    NULL,
    (MR_Integer) -2,
    (MR_Word) (MR_Integer) 0
  },
  /* row 14 */
  {
    NULL,
    (MR_Integer) -2,
    (MR_Word) (MR_Integer) 0
  },
  /* row 15 */
  {
    NULL,
    (MR_Integer) -2,
    (MR_Word) (MR_Integer) 0
  },
  /* row 16 */
  {
    NULL,
    (MR_Integer) -2,
    (MR_Word) (MR_Integer) 0
  },
  /* row 17 */
  {
    NULL,
    (MR_Integer) -2,
    (MR_Word) (MR_Integer) 0
  },
  /* row 18 */
  {
    NULL,
    (MR_Integer) -2,
    (MR_Word) (MR_Integer) 0
  },
  /* row 19 */
  {
    NULL,
    (MR_Integer) -2,
    (MR_Word) (MR_Integer) 0
  },
  /* row 20 */
  {
    (MR_String) "multidet",
    (MR_Integer) -1,
    (MR_Integer) 2
  },
  /* row 21 */
  {
    NULL,
    (MR_Integer) -2,
    (MR_Word) (MR_Integer) 0
  },
  /* row 22 */
  {
    (MR_String) "det",
    (MR_Integer) -1,
    (MR_Integer) 0
  },
  /* row 23 */
  {
    NULL,
    (MR_Integer) -2,
    (MR_Word) (MR_Integer) 0
  },
  /* row 24 */
  {
    NULL,
    (MR_Integer) -2,
    (MR_Word) (MR_Integer) 0
  },
  /* row 25 */
  {
    NULL,
    (MR_Integer) -2,
    (MR_Word) (MR_Integer) 0
  },
  /* row 26 */
  {
    NULL,
    (MR_Integer) -2,
    (MR_Word) (MR_Integer) 0
  },
  /* row 27 */
  {
    NULL,
    (MR_Integer) -2,
    (MR_Word) (MR_Integer) 0
  },
  /* row 28 */
  {
    (MR_String) "nondet",
    (MR_Integer) -1,
    (MR_Integer) 3
  },
  /* row 29 */
  {
    NULL,
    (MR_Integer) -2,
    (MR_Word) (MR_Integer) 0
  },
  /* row 30 */
  {
    (MR_String) "cc_multi",
    (MR_Integer) -1,
    (MR_Integer) 4
  },
  /* row 31 */
  {
    NULL,
    (MR_Integer) -2,
    (MR_Word) (MR_Integer) 0
  },
};


#include "io.mh"
#include "string.mh"
#include "time.mh"
#include "mdbcomp.rtti_access.mh"



static const MR_EnumFunctorDesc parse_tree__prog_io_inst_mode_name__parse_tree__prog_io_inst_mode_name__enum_functor_desc_allow_constrained_inst_var_0_0 = {
  (MR_String) "allow_constrained_inst_var",
  (MR_Integer) 0
};

static const MR_EnumFunctorDesc parse_tree__prog_io_inst_mode_name__parse_tree__prog_io_inst_mode_name__enum_functor_desc_allow_constrained_inst_var_0_1 = {
  (MR_String) "no_allow_constrained_inst_var",
  (MR_Integer) 1
};

static const MR_EnumFunctorDescPtr parse_tree__prog_io_inst_mode_name__parse_tree__prog_io_inst_mode_name__enum_value_ordered_allow_constrained_inst_var_0[2] = {
  &parse_tree__prog_io_inst_mode_name__parse_tree__prog_io_inst_mode_name__enum_functor_desc_allow_constrained_inst_var_0_0,
  &parse_tree__prog_io_inst_mode_name__parse_tree__prog_io_inst_mode_name__enum_functor_desc_allow_constrained_inst_var_0_1
};

static const MR_EnumFunctorDescPtr parse_tree__prog_io_inst_mode_name__parse_tree__prog_io_inst_mode_name__enum_name_ordered_allow_constrained_inst_var_0[2] = {
  &parse_tree__prog_io_inst_mode_name__parse_tree__prog_io_inst_mode_name__enum_functor_desc_allow_constrained_inst_var_0_0,
  &parse_tree__prog_io_inst_mode_name__parse_tree__prog_io_inst_mode_name__enum_functor_desc_allow_constrained_inst_var_0_1
};

static const MR_Integer parse_tree__prog_io_inst_mode_name__parse_tree__prog_io_inst_mode_name__functor_number_map_allow_constrained_inst_var_0[2] = {
  (MR_Integer) 0,
  (MR_Integer) 1
};

const MR_TypeCtorInfo_Struct parse_tree__prog_io_inst_mode_name__parse_tree__prog_io_inst_mode_name__type_ctor_info_allow_constrained_inst_var_0 = {
  (MR_Integer) 0,
  (MR_Integer) 15,
  (MR_Integer) -1,
  mercury__private_builtin__MR_TYPECTOR_REP_ENUM,
  ((MR_Box) (parse_tree__prog_io_inst_mode_name____Unify____allow_constrained_inst_var_0_0_10001)),
  ((MR_Box) (parse_tree__prog_io_inst_mode_name____Compare____allow_constrained_inst_var_0_0_10001)),
  (MR_String) "parse_tree.prog_io_inst_mode_name",
  (MR_String) "allow_constrained_inst_var",
  {     parse_tree__prog_io_inst_mode_name__parse_tree__prog_io_inst_mode_name__enum_name_ordered_allow_constrained_inst_var_0 },
  {     parse_tree__prog_io_inst_mode_name__parse_tree__prog_io_inst_mode_name__enum_value_ordered_allow_constrained_inst_var_0 },
  (MR_Integer) 2,
  (MR_Integer) 4,
  parse_tree__prog_io_inst_mode_name__parse_tree__prog_io_inst_mode_name__functor_number_map_allow_constrained_inst_var_0
};

static const MR_PseudoTypeInfo parse_tree__prog_io_inst_mode_name__parse_tree__prog_io_inst_mode_name__field_types_known_compound_inst_kind_1_0[2] = {
  (MR_PseudoTypeInfo) (MR_Integer) 1,
  (MR_PseudoTypeInfo) (MR_Integer) 1
};

static const MR_DuFunctorDesc parse_tree__prog_io_inst_mode_name__parse_tree__prog_io_inst_mode_name__du_functor_desc_known_compound_inst_kind_1_0 = {
  (MR_String) "kcik_is",
  (MR_Integer) 2,
  (MR_Integer) 3,
  mercury__private_builtin__MR_SECTAG_NONE,
  (MR_Integer) 0,
  (MR_Integer) -1,
  (MR_Integer) 0,
  parse_tree__prog_io_inst_mode_name__parse_tree__prog_io_inst_mode_name__field_types_known_compound_inst_kind_1_0,
  NULL,
  NULL,
  NULL
};

static const MR_PseudoTypeInfo parse_tree__prog_io_inst_mode_name__parse_tree__prog_io_inst_mode_name__field_types_known_compound_inst_kind_1_1[2] = {
  (MR_PseudoTypeInfo) (MR_Integer) 1,
  (MR_PseudoTypeInfo) (MR_Integer) 1
};

static const MR_DuFunctorDesc parse_tree__prog_io_inst_mode_name__parse_tree__prog_io_inst_mode_name__du_functor_desc_known_compound_inst_kind_1_1 = {
  (MR_String) "kcik_constrained",
  (MR_Integer) 2,
  (MR_Integer) 3,
  mercury__private_builtin__MR_SECTAG_NONE,
  (MR_Integer) 1,
  (MR_Integer) -1,
  (MR_Integer) 1,
  parse_tree__prog_io_inst_mode_name__parse_tree__prog_io_inst_mode_name__field_types_known_compound_inst_kind_1_1,
  NULL,
  NULL,
  NULL
};

static const MR_PseudoTypeInfo parse_tree__prog_io_inst_mode_name__parse_tree__prog_io_inst_mode_name__field_types_known_compound_inst_kind_1_2[1] = {
  (MR_PseudoTypeInfo) (MR_Integer) 1
};

static const MR_DuFunctorDesc parse_tree__prog_io_inst_mode_name__parse_tree__prog_io_inst_mode_name__du_functor_desc_known_compound_inst_kind_1_2 = {
  (MR_String) "kcik_bound",
  (MR_Integer) 1,
  (MR_Integer) 1,
  mercury__private_builtin__MR_SECTAG_NONE,
  (MR_Integer) 2,
  (MR_Integer) -1,
  (MR_Integer) 2,
  parse_tree__prog_io_inst_mode_name__parse_tree__prog_io_inst_mode_name__field_types_known_compound_inst_kind_1_2,
  NULL,
  NULL,
  NULL
};

static const MR_PseudoTypeInfo parse_tree__prog_io_inst_mode_name__parse_tree__prog_io_inst_mode_name__field_types_known_compound_inst_kind_1_3[1] = {
  (MR_PseudoTypeInfo) (MR_Integer) 1
};

static const MR_DuFunctorDesc parse_tree__prog_io_inst_mode_name__parse_tree__prog_io_inst_mode_name__du_functor_desc_known_compound_inst_kind_1_3 = {
  (MR_String) "kcik_unique",
  (MR_Integer) 1,
  (MR_Integer) 1,
  mercury__private_builtin__MR_SECTAG_REMOTE,
  (MR_Integer) 3,
  (MR_Integer) 0,
  (MR_Integer) 3,
  parse_tree__prog_io_inst_mode_name__parse_tree__prog_io_inst_mode_name__field_types_known_compound_inst_kind_1_3,
  NULL,
  NULL,
  NULL
};

static const MR_PseudoTypeInfo parse_tree__prog_io_inst_mode_name__parse_tree__prog_io_inst_mode_name__field_types_known_compound_inst_kind_1_4[1] = {
  (MR_PseudoTypeInfo) (MR_Integer) 1
};

static const MR_DuFunctorDesc parse_tree__prog_io_inst_mode_name__parse_tree__prog_io_inst_mode_name__du_functor_desc_known_compound_inst_kind_1_4 = {
  (MR_String) "kcik_mostly_unique",
  (MR_Integer) 1,
  (MR_Integer) 1,
  mercury__private_builtin__MR_SECTAG_REMOTE,
  (MR_Integer) 3,
  (MR_Integer) 1,
  (MR_Integer) 4,
  parse_tree__prog_io_inst_mode_name__parse_tree__prog_io_inst_mode_name__field_types_known_compound_inst_kind_1_4,
  NULL,
  NULL,
  NULL
};

static const MR_DuFunctorDescPtr parse_tree__prog_io_inst_mode_name__parse_tree__prog_io_inst_mode_name__du_stag_ordered_known_compound_inst_kind_1_0[1] = {
  &parse_tree__prog_io_inst_mode_name__parse_tree__prog_io_inst_mode_name__du_functor_desc_known_compound_inst_kind_1_0
};

static const MR_DuFunctorDescPtr parse_tree__prog_io_inst_mode_name__parse_tree__prog_io_inst_mode_name__du_stag_ordered_known_compound_inst_kind_1_1[1] = {
  &parse_tree__prog_io_inst_mode_name__parse_tree__prog_io_inst_mode_name__du_functor_desc_known_compound_inst_kind_1_1
};

static const MR_DuFunctorDescPtr parse_tree__prog_io_inst_mode_name__parse_tree__prog_io_inst_mode_name__du_stag_ordered_known_compound_inst_kind_1_2[1] = {
  &parse_tree__prog_io_inst_mode_name__parse_tree__prog_io_inst_mode_name__du_functor_desc_known_compound_inst_kind_1_2
};

static const MR_DuFunctorDescPtr parse_tree__prog_io_inst_mode_name__parse_tree__prog_io_inst_mode_name__du_stag_ordered_known_compound_inst_kind_1_3[2] = {
  &parse_tree__prog_io_inst_mode_name__parse_tree__prog_io_inst_mode_name__du_functor_desc_known_compound_inst_kind_1_3,
  &parse_tree__prog_io_inst_mode_name__parse_tree__prog_io_inst_mode_name__du_functor_desc_known_compound_inst_kind_1_4
};

static const MR_DuPtagLayout parse_tree__prog_io_inst_mode_name__parse_tree__prog_io_inst_mode_name__du_ptag_ordered_known_compound_inst_kind_1[4] = {
  {
    (MR_Integer) 1,
    mercury__private_builtin__MR_SECTAG_NONE,
    parse_tree__prog_io_inst_mode_name__parse_tree__prog_io_inst_mode_name__du_stag_ordered_known_compound_inst_kind_1_0
  },
  {
    (MR_Integer) 1,
    mercury__private_builtin__MR_SECTAG_NONE,
    parse_tree__prog_io_inst_mode_name__parse_tree__prog_io_inst_mode_name__du_stag_ordered_known_compound_inst_kind_1_1
  },
  {
    (MR_Integer) 1,
    mercury__private_builtin__MR_SECTAG_NONE,
    parse_tree__prog_io_inst_mode_name__parse_tree__prog_io_inst_mode_name__du_stag_ordered_known_compound_inst_kind_1_2
  },
  {
    (MR_Integer) 2,
    mercury__private_builtin__MR_SECTAG_REMOTE,
    parse_tree__prog_io_inst_mode_name__parse_tree__prog_io_inst_mode_name__du_stag_ordered_known_compound_inst_kind_1_3
  }
};

static const MR_DuFunctorDescPtr parse_tree__prog_io_inst_mode_name__parse_tree__prog_io_inst_mode_name__du_name_ordered_known_compound_inst_kind_1[5] = {
  &parse_tree__prog_io_inst_mode_name__parse_tree__prog_io_inst_mode_name__du_functor_desc_known_compound_inst_kind_1_2,
  &parse_tree__prog_io_inst_mode_name__parse_tree__prog_io_inst_mode_name__du_functor_desc_known_compound_inst_kind_1_1,
  &parse_tree__prog_io_inst_mode_name__parse_tree__prog_io_inst_mode_name__du_functor_desc_known_compound_inst_kind_1_0,
  &parse_tree__prog_io_inst_mode_name__parse_tree__prog_io_inst_mode_name__du_functor_desc_known_compound_inst_kind_1_4,
  &parse_tree__prog_io_inst_mode_name__parse_tree__prog_io_inst_mode_name__du_functor_desc_known_compound_inst_kind_1_3
};

static const MR_Integer parse_tree__prog_io_inst_mode_name__parse_tree__prog_io_inst_mode_name__functor_number_map_known_compound_inst_kind_1[5] = {
  (MR_Integer) 2,
  (MR_Integer) 1,
  (MR_Integer) 0,
  (MR_Integer) 4,
  (MR_Integer) 3
};

const MR_TypeCtorInfo_Struct parse_tree__prog_io_inst_mode_name__parse_tree__prog_io_inst_mode_name__type_ctor_info_known_compound_inst_kind_1 = {
  (MR_Integer) 1,
  (MR_Integer) 15,
  (MR_Integer) 4,
  mercury__private_builtin__MR_TYPECTOR_REP_DU,
  ((MR_Box) (parse_tree__prog_io_inst_mode_name____Unify____known_compound_inst_kind_1_0_10001)),
  ((MR_Box) (parse_tree__prog_io_inst_mode_name____Compare____known_compound_inst_kind_1_0_10001)),
  (MR_String) "parse_tree.prog_io_inst_mode_name",
  (MR_String) "known_compound_inst_kind",
  {     parse_tree__prog_io_inst_mode_name__parse_tree__prog_io_inst_mode_name__du_name_ordered_known_compound_inst_kind_1 },
  {     parse_tree__prog_io_inst_mode_name__parse_tree__prog_io_inst_mode_name__du_ptag_ordered_known_compound_inst_kind_1 },
  (MR_Integer) 5,
  (MR_Integer) 4,
  parse_tree__prog_io_inst_mode_name__parse_tree__prog_io_inst_mode_name__functor_number_map_known_compound_inst_kind_1
};

static const MR_PseudoTypeInfo parse_tree__prog_io_inst_mode_name__parse_tree__prog_io_inst_mode_name__field_types_known_inst_kind_1_0[1] = {
  (MR_PseudoTypeInfo) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_inst_0
};

static const MR_DuFunctorDesc parse_tree__prog_io_inst_mode_name__parse_tree__prog_io_inst_mode_name__du_functor_desc_known_inst_kind_1_0 = {
  (MR_String) "known_inst_simple",
  (MR_Integer) 1,
  (MR_Integer) 0,
  mercury__private_builtin__MR_SECTAG_NONE,
  (MR_Integer) 1,
  (MR_Integer) -1,
  (MR_Integer) 0,
  parse_tree__prog_io_inst_mode_name__parse_tree__prog_io_inst_mode_name__field_types_known_inst_kind_1_0,
  NULL,
  NULL,
  NULL
};

static const MR_FA_PseudoTypeInfo_Struct1 parse_tree__prog_io_inst_mode_name__parse_tree__prog_io_inst_mode_name__pti_known_compound_inst_kind_1__pseudo_1 = {
  &parse_tree__prog_io_inst_mode_name__parse_tree__prog_io_inst_mode_name__type_ctor_info_known_compound_inst_kind_1,
  {
    (MR_PseudoTypeInfo) (MR_Integer) 1
  }
};

static const MR_PseudoTypeInfo parse_tree__prog_io_inst_mode_name__parse_tree__prog_io_inst_mode_name__field_types_known_inst_kind_1_1[1] = {
  (MR_PseudoTypeInfo) &parse_tree__prog_io_inst_mode_name__parse_tree__prog_io_inst_mode_name__pti_known_compound_inst_kind_1__pseudo_1
};

static const MR_DuFunctorDesc parse_tree__prog_io_inst_mode_name__parse_tree__prog_io_inst_mode_name__du_functor_desc_known_inst_kind_1_1 = {
  (MR_String) "known_inst_compound",
  (MR_Integer) 1,
  (MR_Integer) 1,
  mercury__private_builtin__MR_SECTAG_NONE,
  (MR_Integer) 2,
  (MR_Integer) -1,
  (MR_Integer) 1,
  parse_tree__prog_io_inst_mode_name__parse_tree__prog_io_inst_mode_name__field_types_known_inst_kind_1_1,
  NULL,
  NULL,
  NULL
};

static const MR_DuFunctorDesc parse_tree__prog_io_inst_mode_name__parse_tree__prog_io_inst_mode_name__du_functor_desc_known_inst_kind_1_2 = {
  (MR_String) "known_inst_bad_arity",
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

static const MR_DuFunctorDescPtr parse_tree__prog_io_inst_mode_name__parse_tree__prog_io_inst_mode_name__du_stag_ordered_known_inst_kind_1_0[1] = {
  &parse_tree__prog_io_inst_mode_name__parse_tree__prog_io_inst_mode_name__du_functor_desc_known_inst_kind_1_2
};

static const MR_DuFunctorDescPtr parse_tree__prog_io_inst_mode_name__parse_tree__prog_io_inst_mode_name__du_stag_ordered_known_inst_kind_1_1[1] = {
  &parse_tree__prog_io_inst_mode_name__parse_tree__prog_io_inst_mode_name__du_functor_desc_known_inst_kind_1_0
};

static const MR_DuFunctorDescPtr parse_tree__prog_io_inst_mode_name__parse_tree__prog_io_inst_mode_name__du_stag_ordered_known_inst_kind_1_2[1] = {
  &parse_tree__prog_io_inst_mode_name__parse_tree__prog_io_inst_mode_name__du_functor_desc_known_inst_kind_1_1
};

static const MR_DuPtagLayout parse_tree__prog_io_inst_mode_name__parse_tree__prog_io_inst_mode_name__du_ptag_ordered_known_inst_kind_1[3] = {
  {
    (MR_Integer) 1,
    mercury__private_builtin__MR_SECTAG_LOCAL,
    parse_tree__prog_io_inst_mode_name__parse_tree__prog_io_inst_mode_name__du_stag_ordered_known_inst_kind_1_0
  },
  {
    (MR_Integer) 1,
    mercury__private_builtin__MR_SECTAG_NONE,
    parse_tree__prog_io_inst_mode_name__parse_tree__prog_io_inst_mode_name__du_stag_ordered_known_inst_kind_1_1
  },
  {
    (MR_Integer) 1,
    mercury__private_builtin__MR_SECTAG_NONE,
    parse_tree__prog_io_inst_mode_name__parse_tree__prog_io_inst_mode_name__du_stag_ordered_known_inst_kind_1_2
  }
};

static const MR_DuFunctorDescPtr parse_tree__prog_io_inst_mode_name__parse_tree__prog_io_inst_mode_name__du_name_ordered_known_inst_kind_1[3] = {
  &parse_tree__prog_io_inst_mode_name__parse_tree__prog_io_inst_mode_name__du_functor_desc_known_inst_kind_1_2,
  &parse_tree__prog_io_inst_mode_name__parse_tree__prog_io_inst_mode_name__du_functor_desc_known_inst_kind_1_1,
  &parse_tree__prog_io_inst_mode_name__parse_tree__prog_io_inst_mode_name__du_functor_desc_known_inst_kind_1_0
};

static const MR_Integer parse_tree__prog_io_inst_mode_name__parse_tree__prog_io_inst_mode_name__functor_number_map_known_inst_kind_1[3] = {
  (MR_Integer) 2,
  (MR_Integer) 1,
  (MR_Integer) 0
};

const MR_TypeCtorInfo_Struct parse_tree__prog_io_inst_mode_name__parse_tree__prog_io_inst_mode_name__type_ctor_info_known_inst_kind_1 = {
  (MR_Integer) 1,
  (MR_Integer) 15,
  (MR_Integer) 3,
  mercury__private_builtin__MR_TYPECTOR_REP_DU,
  ((MR_Box) (parse_tree__prog_io_inst_mode_name____Unify____known_inst_kind_1_0_10001)),
  ((MR_Box) (parse_tree__prog_io_inst_mode_name____Compare____known_inst_kind_1_0_10001)),
  (MR_String) "parse_tree.prog_io_inst_mode_name",
  (MR_String) "known_inst_kind",
  {     parse_tree__prog_io_inst_mode_name__parse_tree__prog_io_inst_mode_name__du_name_ordered_known_inst_kind_1 },
  {     parse_tree__prog_io_inst_mode_name__parse_tree__prog_io_inst_mode_name__du_ptag_ordered_known_inst_kind_1 },
  (MR_Integer) 3,
  (MR_Integer) 4,
  parse_tree__prog_io_inst_mode_name__parse_tree__prog_io_inst_mode_name__functor_number_map_known_inst_kind_1
};

static MR_bool MR_CALL 
parse_tree__prog_io_inst_mode_name____Unify____allow_constrained_inst_var_0_0_10001(
  MR_Box parse_tree__prog_io_inst_mode_name__wrapper_arg_1,
  MR_Box parse_tree__prog_io_inst_mode_name__wrapper_arg_2)
{
  {
    MR_bool parse_tree__prog_io_inst_mode_name__succeeded;

    {
      parse_tree__prog_io_inst_mode_name__succeeded = parse_tree__prog_io_inst_mode_name____Unify____allow_constrained_inst_var_0_0(((MR_Word) parse_tree__prog_io_inst_mode_name__wrapper_arg_1), ((MR_Word) parse_tree__prog_io_inst_mode_name__wrapper_arg_2));
    }
    return parse_tree__prog_io_inst_mode_name__succeeded;
  }
}

static void MR_CALL 
parse_tree__prog_io_inst_mode_name____Compare____allow_constrained_inst_var_0_0_10001(
  MR_Box * parse_tree__prog_io_inst_mode_name__wrapper_arg_1,
  MR_Box parse_tree__prog_io_inst_mode_name__wrapper_arg_2,
  MR_Box parse_tree__prog_io_inst_mode_name__wrapper_arg_3)
{
  {
    MR_Word parse_tree__prog_io_inst_mode_name__conv0_HeadVar__1_1;

    {
      parse_tree__prog_io_inst_mode_name____Compare____allow_constrained_inst_var_0_0(&parse_tree__prog_io_inst_mode_name__conv0_HeadVar__1_1, ((MR_Word) parse_tree__prog_io_inst_mode_name__wrapper_arg_2), ((MR_Word) parse_tree__prog_io_inst_mode_name__wrapper_arg_3));
    }
    *parse_tree__prog_io_inst_mode_name__wrapper_arg_1 = ((MR_Box) (parse_tree__prog_io_inst_mode_name__conv0_HeadVar__1_1));
  }
}

static MR_bool MR_CALL 
parse_tree__prog_io_inst_mode_name____Unify____known_compound_inst_kind_1_0_10001(
  MR_Box parse_tree__prog_io_inst_mode_name__wrapper_arg_1,
  MR_Box parse_tree__prog_io_inst_mode_name__wrapper_arg_2,
  MR_Box parse_tree__prog_io_inst_mode_name__wrapper_arg_3)
{
  {
    MR_bool parse_tree__prog_io_inst_mode_name__succeeded;

    {
      parse_tree__prog_io_inst_mode_name__succeeded = parse_tree__prog_io_inst_mode_name____Unify____known_compound_inst_kind_1_0(((MR_Word) parse_tree__prog_io_inst_mode_name__wrapper_arg_1), ((MR_Word) parse_tree__prog_io_inst_mode_name__wrapper_arg_2), ((MR_Word) parse_tree__prog_io_inst_mode_name__wrapper_arg_3));
    }
    return parse_tree__prog_io_inst_mode_name__succeeded;
  }
}

static void MR_CALL 
parse_tree__prog_io_inst_mode_name____Compare____known_compound_inst_kind_1_0_10001(
  MR_Box parse_tree__prog_io_inst_mode_name__wrapper_arg_1,
  MR_Box * parse_tree__prog_io_inst_mode_name__wrapper_arg_2,
  MR_Box parse_tree__prog_io_inst_mode_name__wrapper_arg_3,
  MR_Box parse_tree__prog_io_inst_mode_name__wrapper_arg_4)
{
  {
    MR_Word parse_tree__prog_io_inst_mode_name__conv0_HeadVar__1_1;

    {
      parse_tree__prog_io_inst_mode_name____Compare____known_compound_inst_kind_1_0(((MR_Word) parse_tree__prog_io_inst_mode_name__wrapper_arg_1), &parse_tree__prog_io_inst_mode_name__conv0_HeadVar__1_1, ((MR_Word) parse_tree__prog_io_inst_mode_name__wrapper_arg_3), ((MR_Word) parse_tree__prog_io_inst_mode_name__wrapper_arg_4));
    }
    *parse_tree__prog_io_inst_mode_name__wrapper_arg_2 = ((MR_Box) (parse_tree__prog_io_inst_mode_name__conv0_HeadVar__1_1));
  }
}

static MR_bool MR_CALL 
parse_tree__prog_io_inst_mode_name____Unify____known_inst_kind_1_0_10001(
  MR_Box parse_tree__prog_io_inst_mode_name__wrapper_arg_1,
  MR_Box parse_tree__prog_io_inst_mode_name__wrapper_arg_2,
  MR_Box parse_tree__prog_io_inst_mode_name__wrapper_arg_3)
{
  {
    MR_bool parse_tree__prog_io_inst_mode_name__succeeded;

    {
      parse_tree__prog_io_inst_mode_name__succeeded = parse_tree__prog_io_inst_mode_name____Unify____known_inst_kind_1_0(((MR_Word) parse_tree__prog_io_inst_mode_name__wrapper_arg_1), ((MR_Word) parse_tree__prog_io_inst_mode_name__wrapper_arg_2), ((MR_Word) parse_tree__prog_io_inst_mode_name__wrapper_arg_3));
    }
    return parse_tree__prog_io_inst_mode_name__succeeded;
  }
}

static void MR_CALL 
parse_tree__prog_io_inst_mode_name____Compare____known_inst_kind_1_0_10001(
  MR_Box parse_tree__prog_io_inst_mode_name__wrapper_arg_1,
  MR_Box * parse_tree__prog_io_inst_mode_name__wrapper_arg_2,
  MR_Box parse_tree__prog_io_inst_mode_name__wrapper_arg_3,
  MR_Box parse_tree__prog_io_inst_mode_name__wrapper_arg_4)
{
  {
    MR_Word parse_tree__prog_io_inst_mode_name__conv0_HeadVar__1_1;

    {
      parse_tree__prog_io_inst_mode_name____Compare____known_inst_kind_1_0(((MR_Word) parse_tree__prog_io_inst_mode_name__wrapper_arg_1), &parse_tree__prog_io_inst_mode_name__conv0_HeadVar__1_1, ((MR_Word) parse_tree__prog_io_inst_mode_name__wrapper_arg_3), ((MR_Word) parse_tree__prog_io_inst_mode_name__wrapper_arg_4));
    }
    *parse_tree__prog_io_inst_mode_name__wrapper_arg_2 = ((MR_Box) (parse_tree__prog_io_inst_mode_name__conv0_HeadVar__1_1));
  }
}

static MR_bool MR_CALL 
parse_tree__prog_io_inst_mode_name__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_105_115_95_107_110_111_119_110_95_105_110_115_116_95_110_97_109_101_95_97_114_103_115_95_95_91_49_93_95_48_3_p_0(
  MR_String parse_tree__prog_io_inst_mode_name__Name_4,
  MR_Word parse_tree__prog_io_inst_mode_name__Args_5,
  MR_Word * parse_tree__prog_io_inst_mode_name__KnownInst_6)
{
  {
    MR_bool parse_tree__prog_io_inst_mode_name__succeeded;

    {
      MR_Integer parse_tree__prog_io_inst_mode_name__case_num_0 = (MR_Integer) -1;

      switch (MR_nth_code_unit(parse_tree__prog_io_inst_mode_name__Name_4, 0)) {
        case (MR_Integer) 61:
          if (MR_offset_streq(1, parse_tree__prog_io_inst_mode_name__Name_4, (MR_String) "=<"))
            parse_tree__prog_io_inst_mode_name__case_num_0 = (MR_Integer) 0;
          break;
        case (MR_Integer) 97:
          if (MR_offset_streq(1, parse_tree__prog_io_inst_mode_name__Name_4, (MR_String) "any"))
            parse_tree__prog_io_inst_mode_name__case_num_0 = (MR_Integer) 1;
          break;
        case (MR_Integer) 98:
          if (((((((((MR_nth_code_unit(parse_tree__prog_io_inst_mode_name__Name_4, 1)) == (MR_Integer) 111)) && (((MR_nth_code_unit(parse_tree__prog_io_inst_mode_name__Name_4, 2)) == (MR_Integer) 117)))) && (((MR_nth_code_unit(parse_tree__prog_io_inst_mode_name__Name_4, 3)) == (MR_Integer) 110)))) && (((MR_nth_code_unit(parse_tree__prog_io_inst_mode_name__Name_4, 4)) == (MR_Integer) 100))))
            switch (MR_nth_code_unit(parse_tree__prog_io_inst_mode_name__Name_4, 5)) {
              case (MR_Integer) 0:
                parse_tree__prog_io_inst_mode_name__case_num_0 = (MR_Integer) 2;
                break;
              case (MR_Integer) 95:
                if (MR_offset_streq(6, parse_tree__prog_io_inst_mode_name__Name_4, (MR_String) "bound_unique"))
                  parse_tree__prog_io_inst_mode_name__case_num_0 = (MR_Integer) 3;
                break;
            }
          break;
        case (MR_Integer) 99:
          if (((((((((((((((((MR_nth_code_unit(parse_tree__prog_io_inst_mode_name__Name_4, 1)) == (MR_Integer) 108)) && (((MR_nth_code_unit(parse_tree__prog_io_inst_mode_name__Name_4, 2)) == (MR_Integer) 111)))) && (((MR_nth_code_unit(parse_tree__prog_io_inst_mode_name__Name_4, 3)) == (MR_Integer) 98)))) && (((MR_nth_code_unit(parse_tree__prog_io_inst_mode_name__Name_4, 4)) == (MR_Integer) 98)))) && (((MR_nth_code_unit(parse_tree__prog_io_inst_mode_name__Name_4, 5)) == (MR_Integer) 101)))) && (((MR_nth_code_unit(parse_tree__prog_io_inst_mode_name__Name_4, 6)) == (MR_Integer) 114)))) && (((MR_nth_code_unit(parse_tree__prog_io_inst_mode_name__Name_4, 7)) == (MR_Integer) 101)))) && (((MR_nth_code_unit(parse_tree__prog_io_inst_mode_name__Name_4, 8)) == (MR_Integer) 100))))
            switch (MR_nth_code_unit(parse_tree__prog_io_inst_mode_name__Name_4, 9)) {
              case (MR_Integer) 0:
                parse_tree__prog_io_inst_mode_name__case_num_0 = (MR_Integer) 4;
                break;
              case (MR_Integer) 95:
                if (MR_offset_streq(10, parse_tree__prog_io_inst_mode_name__Name_4, (MR_String) "clobbered_any"))
                  parse_tree__prog_io_inst_mode_name__case_num_0 = (MR_Integer) 5;
                break;
            }
          break;
        case (MR_Integer) 102:
          if (MR_offset_streq(1, parse_tree__prog_io_inst_mode_name__Name_4, (MR_String) "free"))
            parse_tree__prog_io_inst_mode_name__case_num_0 = (MR_Integer) 6;
          break;
        case (MR_Integer) 103:
          if (MR_offset_streq(1, parse_tree__prog_io_inst_mode_name__Name_4, (MR_String) "ground"))
            parse_tree__prog_io_inst_mode_name__case_num_0 = (MR_Integer) 7;
          break;
        case (MR_Integer) 105:
          if (MR_offset_streq(1, parse_tree__prog_io_inst_mode_name__Name_4, (MR_String) "is"))
            parse_tree__prog_io_inst_mode_name__case_num_0 = (MR_Integer) 8;
          break;
        case (MR_Integer) 109:
          if (((((((((((((MR_nth_code_unit(parse_tree__prog_io_inst_mode_name__Name_4, 1)) == (MR_Integer) 111)) && (((MR_nth_code_unit(parse_tree__prog_io_inst_mode_name__Name_4, 2)) == (MR_Integer) 115)))) && (((MR_nth_code_unit(parse_tree__prog_io_inst_mode_name__Name_4, 3)) == (MR_Integer) 116)))) && (((MR_nth_code_unit(parse_tree__prog_io_inst_mode_name__Name_4, 4)) == (MR_Integer) 108)))) && (((MR_nth_code_unit(parse_tree__prog_io_inst_mode_name__Name_4, 5)) == (MR_Integer) 121)))) && (((MR_nth_code_unit(parse_tree__prog_io_inst_mode_name__Name_4, 6)) == (MR_Integer) 95))))
            switch (MR_nth_code_unit(parse_tree__prog_io_inst_mode_name__Name_4, 7)) {
              case (MR_Integer) 99:
                if (((((((((((((((((MR_nth_code_unit(parse_tree__prog_io_inst_mode_name__Name_4, 8)) == (MR_Integer) 108)) && (((MR_nth_code_unit(parse_tree__prog_io_inst_mode_name__Name_4, 9)) == (MR_Integer) 111)))) && (((MR_nth_code_unit(parse_tree__prog_io_inst_mode_name__Name_4, 10)) == (MR_Integer) 98)))) && (((MR_nth_code_unit(parse_tree__prog_io_inst_mode_name__Name_4, 11)) == (MR_Integer) 98)))) && (((MR_nth_code_unit(parse_tree__prog_io_inst_mode_name__Name_4, 12)) == (MR_Integer) 101)))) && (((MR_nth_code_unit(parse_tree__prog_io_inst_mode_name__Name_4, 13)) == (MR_Integer) 114)))) && (((MR_nth_code_unit(parse_tree__prog_io_inst_mode_name__Name_4, 14)) == (MR_Integer) 101)))) && (((MR_nth_code_unit(parse_tree__prog_io_inst_mode_name__Name_4, 15)) == (MR_Integer) 100))))
                  switch (MR_nth_code_unit(parse_tree__prog_io_inst_mode_name__Name_4, 16)) {
                    case (MR_Integer) 0:
                      parse_tree__prog_io_inst_mode_name__case_num_0 = (MR_Integer) 9;
                      break;
                    case (MR_Integer) 95:
                      if (MR_offset_streq(17, parse_tree__prog_io_inst_mode_name__Name_4, (MR_String) "mostly_clobbered_any"))
                        parse_tree__prog_io_inst_mode_name__case_num_0 = (MR_Integer) 10;
                      break;
                  }
                break;
              case (MR_Integer) 117:
                if (((((((((((MR_nth_code_unit(parse_tree__prog_io_inst_mode_name__Name_4, 8)) == (MR_Integer) 110)) && (((MR_nth_code_unit(parse_tree__prog_io_inst_mode_name__Name_4, 9)) == (MR_Integer) 105)))) && (((MR_nth_code_unit(parse_tree__prog_io_inst_mode_name__Name_4, 10)) == (MR_Integer) 113)))) && (((MR_nth_code_unit(parse_tree__prog_io_inst_mode_name__Name_4, 11)) == (MR_Integer) 117)))) && (((MR_nth_code_unit(parse_tree__prog_io_inst_mode_name__Name_4, 12)) == (MR_Integer) 101))))
                  switch (MR_nth_code_unit(parse_tree__prog_io_inst_mode_name__Name_4, 13)) {
                    case (MR_Integer) 0:
                      parse_tree__prog_io_inst_mode_name__case_num_0 = (MR_Integer) 11;
                      break;
                    case (MR_Integer) 95:
                      if (MR_offset_streq(14, parse_tree__prog_io_inst_mode_name__Name_4, (MR_String) "mostly_unique_any"))
                        parse_tree__prog_io_inst_mode_name__case_num_0 = (MR_Integer) 12;
                      break;
                  }
                break;
            }
          break;
        case (MR_Integer) 110:
          if (MR_offset_streq(1, parse_tree__prog_io_inst_mode_name__Name_4, (MR_String) "not_reached"))
            parse_tree__prog_io_inst_mode_name__case_num_0 = (MR_Integer) 13;
          break;
        case (MR_Integer) 117:
          if (((((((((((MR_nth_code_unit(parse_tree__prog_io_inst_mode_name__Name_4, 1)) == (MR_Integer) 110)) && (((MR_nth_code_unit(parse_tree__prog_io_inst_mode_name__Name_4, 2)) == (MR_Integer) 105)))) && (((MR_nth_code_unit(parse_tree__prog_io_inst_mode_name__Name_4, 3)) == (MR_Integer) 113)))) && (((MR_nth_code_unit(parse_tree__prog_io_inst_mode_name__Name_4, 4)) == (MR_Integer) 117)))) && (((MR_nth_code_unit(parse_tree__prog_io_inst_mode_name__Name_4, 5)) == (MR_Integer) 101))))
            switch (MR_nth_code_unit(parse_tree__prog_io_inst_mode_name__Name_4, 6)) {
              case (MR_Integer) 0:
                parse_tree__prog_io_inst_mode_name__case_num_0 = (MR_Integer) 14;
                break;
              case (MR_Integer) 95:
                if (MR_offset_streq(7, parse_tree__prog_io_inst_mode_name__Name_4, (MR_String) "unique_any"))
                  parse_tree__prog_io_inst_mode_name__case_num_0 = (MR_Integer) 15;
                break;
            }
          break;
      }
      switch (parse_tree__prog_io_inst_mode_name__case_num_0) {
        default:
          parse_tree__prog_io_inst_mode_name__succeeded = MR_FALSE;
          break;
        case (MR_Integer) 0:
          {
            /* case "=<" */
            if ((parse_tree__prog_io_inst_mode_name__Args_5 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
              *parse_tree__prog_io_inst_mode_name__KnownInst_6 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
            else
              {
                MR_Word parse_tree__prog_io_inst_mode_name__V_180_180 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_inst_mode_name__Args_5, (MR_Integer) 1)));
                MR_Box parse_tree__prog_io_inst_mode_name__V_181_181 = (MR_hl_field(MR_mktag(1), parse_tree__prog_io_inst_mode_name__Args_5, (MR_Integer) 0));

                if ((parse_tree__prog_io_inst_mode_name__V_180_180 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
                  *parse_tree__prog_io_inst_mode_name__KnownInst_6 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
                else
                  {
                    MR_Word parse_tree__prog_io_inst_mode_name__V_192_192 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_inst_mode_name__V_180_180, (MR_Integer) 1)));
                    MR_Box parse_tree__prog_io_inst_mode_name__V_193_193 = (MR_hl_field(MR_mktag(1), parse_tree__prog_io_inst_mode_name__V_180_180, (MR_Integer) 0));

                    if ((parse_tree__prog_io_inst_mode_name__V_192_192 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
                      {
                        MR_Word parse_tree__prog_io_inst_mode_name__V_44_44;

                        {
                          parse_tree__prog_io_inst_mode_name__V_44_44 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                          MR_hl_field(MR_mktag(1), parse_tree__prog_io_inst_mode_name__V_44_44, 0) = parse_tree__prog_io_inst_mode_name__V_181_181;
                          MR_hl_field(MR_mktag(1), parse_tree__prog_io_inst_mode_name__V_44_44, 1) = parse_tree__prog_io_inst_mode_name__V_193_193;
                        }
                        {
                          MR_Word base;
                          base = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
                          *parse_tree__prog_io_inst_mode_name__KnownInst_6 = base;
                          MR_hl_field(MR_mktag(2), base, 0) = ((MR_Box) (parse_tree__prog_io_inst_mode_name__V_44_44));
                        }
                      }
                    else
                      *parse_tree__prog_io_inst_mode_name__KnownInst_6 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
                  }
              }
            parse_tree__prog_io_inst_mode_name__succeeded = MR_TRUE;
          }
          break;
        case (MR_Integer) 1:
          {
            /* case "any" */
            if ((parse_tree__prog_io_inst_mode_name__Args_5 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
              *parse_tree__prog_io_inst_mode_name__KnownInst_6 = (MR_Word) MR_mkword(MR_mktag(1), &parse_tree__prog_io_inst_mode_name_scalar_common_2[1]);
            else
              *parse_tree__prog_io_inst_mode_name__KnownInst_6 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
            parse_tree__prog_io_inst_mode_name__succeeded = MR_TRUE;
          }
          break;
        case (MR_Integer) 2:
          {
            /* case "bound" */
            if ((parse_tree__prog_io_inst_mode_name__Args_5 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
              *parse_tree__prog_io_inst_mode_name__KnownInst_6 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
            else
              {
                MR_Word parse_tree__prog_io_inst_mode_name__V_182_182 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_inst_mode_name__Args_5, (MR_Integer) 1)));
                MR_Box parse_tree__prog_io_inst_mode_name__V_183_183 = (MR_hl_field(MR_mktag(1), parse_tree__prog_io_inst_mode_name__Args_5, (MR_Integer) 0));

                if ((parse_tree__prog_io_inst_mode_name__V_182_182 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
                  {
                    MR_Word parse_tree__prog_io_inst_mode_name__V_39_39;

                    {
                      parse_tree__prog_io_inst_mode_name__V_39_39 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
                      MR_hl_field(MR_mktag(2), parse_tree__prog_io_inst_mode_name__V_39_39, 0) = parse_tree__prog_io_inst_mode_name__V_183_183;
                    }
                    {
                      MR_Word base;
                      base = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
                      *parse_tree__prog_io_inst_mode_name__KnownInst_6 = base;
                      MR_hl_field(MR_mktag(2), base, 0) = ((MR_Box) (parse_tree__prog_io_inst_mode_name__V_39_39));
                    }
                  }
                else
                  *parse_tree__prog_io_inst_mode_name__KnownInst_6 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
              }
            parse_tree__prog_io_inst_mode_name__succeeded = MR_TRUE;
          }
          break;
        case (MR_Integer) 3:
          {
            /* case "bound_unique" */
            if ((parse_tree__prog_io_inst_mode_name__Args_5 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
              *parse_tree__prog_io_inst_mode_name__KnownInst_6 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
            else
              {
                MR_Word parse_tree__prog_io_inst_mode_name__V_184_184 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_inst_mode_name__Args_5, (MR_Integer) 1)));
                MR_Box parse_tree__prog_io_inst_mode_name__V_185_185 = (MR_hl_field(MR_mktag(1), parse_tree__prog_io_inst_mode_name__Args_5, (MR_Integer) 0));

                if ((parse_tree__prog_io_inst_mode_name__V_184_184 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
                  {
                    MR_Word parse_tree__prog_io_inst_mode_name__V_36_36;

                    {
                      parse_tree__prog_io_inst_mode_name__V_36_36 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                      MR_hl_field(MR_mktag(3), parse_tree__prog_io_inst_mode_name__V_36_36, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 0));
                      MR_hl_field(MR_mktag(3), parse_tree__prog_io_inst_mode_name__V_36_36, 1) = parse_tree__prog_io_inst_mode_name__V_185_185;
                    }
                    {
                      MR_Word base;
                      base = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
                      *parse_tree__prog_io_inst_mode_name__KnownInst_6 = base;
                      MR_hl_field(MR_mktag(2), base, 0) = ((MR_Box) (parse_tree__prog_io_inst_mode_name__V_36_36));
                    }
                  }
                else
                  *parse_tree__prog_io_inst_mode_name__KnownInst_6 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
              }
            parse_tree__prog_io_inst_mode_name__succeeded = MR_TRUE;
          }
          break;
        case (MR_Integer) 4:
          {
            /* case "clobbered" */
            if ((parse_tree__prog_io_inst_mode_name__Args_5 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
              *parse_tree__prog_io_inst_mode_name__KnownInst_6 = (MR_Word) MR_mkword(MR_mktag(1), &parse_tree__prog_io_inst_mode_name_scalar_common_2[2]);
            else
              *parse_tree__prog_io_inst_mode_name__KnownInst_6 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
            parse_tree__prog_io_inst_mode_name__succeeded = MR_TRUE;
          }
          break;
        case (MR_Integer) 5:
          {
            /* case "clobbered_any" */
            if ((parse_tree__prog_io_inst_mode_name__Args_5 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
              *parse_tree__prog_io_inst_mode_name__KnownInst_6 = (MR_Word) MR_mkword(MR_mktag(1), &parse_tree__prog_io_inst_mode_name_scalar_common_2[3]);
            else
              *parse_tree__prog_io_inst_mode_name__KnownInst_6 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
            parse_tree__prog_io_inst_mode_name__succeeded = MR_TRUE;
          }
          break;
        case (MR_Integer) 6:
          {
            /* case "free" */
            if ((parse_tree__prog_io_inst_mode_name__Args_5 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
              *parse_tree__prog_io_inst_mode_name__KnownInst_6 = (MR_Word) MR_mkword(MR_mktag(1), &parse_tree__prog_io_inst_mode_name_scalar_common_2[4]);
            else
              *parse_tree__prog_io_inst_mode_name__KnownInst_6 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
            parse_tree__prog_io_inst_mode_name__succeeded = MR_TRUE;
          }
          break;
        case (MR_Integer) 7:
          {
            /* case "ground" */
            if ((parse_tree__prog_io_inst_mode_name__Args_5 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
              *parse_tree__prog_io_inst_mode_name__KnownInst_6 = (MR_Word) MR_mkword(MR_mktag(1), &parse_tree__prog_io_inst_mode_name_scalar_common_2[5]);
            else
              *parse_tree__prog_io_inst_mode_name__KnownInst_6 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
            parse_tree__prog_io_inst_mode_name__succeeded = MR_TRUE;
          }
          break;
        case (MR_Integer) 8:
          {
            /* case "is" */
            if ((parse_tree__prog_io_inst_mode_name__Args_5 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
              *parse_tree__prog_io_inst_mode_name__KnownInst_6 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
            else
              {
                MR_Word parse_tree__prog_io_inst_mode_name__V_186_186 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_inst_mode_name__Args_5, (MR_Integer) 1)));
                MR_Box parse_tree__prog_io_inst_mode_name__V_187_187 = (MR_hl_field(MR_mktag(1), parse_tree__prog_io_inst_mode_name__Args_5, (MR_Integer) 0));

                if ((parse_tree__prog_io_inst_mode_name__V_186_186 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
                  *parse_tree__prog_io_inst_mode_name__KnownInst_6 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
                else
                  {
                    MR_Word parse_tree__prog_io_inst_mode_name__V_194_194 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_inst_mode_name__V_186_186, (MR_Integer) 1)));
                    MR_Box parse_tree__prog_io_inst_mode_name__V_195_195 = (MR_hl_field(MR_mktag(1), parse_tree__prog_io_inst_mode_name__V_186_186, (MR_Integer) 0));

                    if ((parse_tree__prog_io_inst_mode_name__V_194_194 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
                      {
                        MR_Word parse_tree__prog_io_inst_mode_name__V_50_50;

                        {
                          parse_tree__prog_io_inst_mode_name__V_50_50 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
                          MR_hl_field(MR_mktag(0), parse_tree__prog_io_inst_mode_name__V_50_50, 0) = parse_tree__prog_io_inst_mode_name__V_187_187;
                          MR_hl_field(MR_mktag(0), parse_tree__prog_io_inst_mode_name__V_50_50, 1) = parse_tree__prog_io_inst_mode_name__V_195_195;
                        }
                        {
                          MR_Word base;
                          base = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
                          *parse_tree__prog_io_inst_mode_name__KnownInst_6 = base;
                          MR_hl_field(MR_mktag(2), base, 0) = ((MR_Box) (parse_tree__prog_io_inst_mode_name__V_50_50));
                        }
                      }
                    else
                      *parse_tree__prog_io_inst_mode_name__KnownInst_6 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
                  }
              }
            parse_tree__prog_io_inst_mode_name__succeeded = MR_TRUE;
          }
          break;
        case (MR_Integer) 9:
          {
            /* case "mostly_clobbered" */
            if ((parse_tree__prog_io_inst_mode_name__Args_5 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
              *parse_tree__prog_io_inst_mode_name__KnownInst_6 = (MR_Word) MR_mkword(MR_mktag(1), &parse_tree__prog_io_inst_mode_name_scalar_common_2[6]);
            else
              *parse_tree__prog_io_inst_mode_name__KnownInst_6 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
            parse_tree__prog_io_inst_mode_name__succeeded = MR_TRUE;
          }
          break;
        case (MR_Integer) 10:
          {
            /* case "mostly_clobbered_any" */
            if ((parse_tree__prog_io_inst_mode_name__Args_5 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
              *parse_tree__prog_io_inst_mode_name__KnownInst_6 = (MR_Word) MR_mkword(MR_mktag(1), &parse_tree__prog_io_inst_mode_name_scalar_common_2[7]);
            else
              *parse_tree__prog_io_inst_mode_name__KnownInst_6 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
            parse_tree__prog_io_inst_mode_name__succeeded = MR_TRUE;
          }
          break;
        case (MR_Integer) 11:
          {
            /* case "mostly_unique" */
            if ((parse_tree__prog_io_inst_mode_name__Args_5 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
              {
                *parse_tree__prog_io_inst_mode_name__KnownInst_6 = (MR_Word) MR_mkword(MR_mktag(1), &parse_tree__prog_io_inst_mode_name_scalar_common_2[8]);
              }
            else
              {
                MR_Word parse_tree__prog_io_inst_mode_name__V_188_188 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_inst_mode_name__Args_5, (MR_Integer) 1)));
                MR_Box parse_tree__prog_io_inst_mode_name__V_189_189 = (MR_hl_field(MR_mktag(1), parse_tree__prog_io_inst_mode_name__Args_5, (MR_Integer) 0));

                if ((parse_tree__prog_io_inst_mode_name__V_188_188 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
                  {
                    MR_Word parse_tree__prog_io_inst_mode_name__V_54_54;

                    {
                      parse_tree__prog_io_inst_mode_name__V_54_54 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                      MR_hl_field(MR_mktag(3), parse_tree__prog_io_inst_mode_name__V_54_54, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
                      MR_hl_field(MR_mktag(3), parse_tree__prog_io_inst_mode_name__V_54_54, 1) = parse_tree__prog_io_inst_mode_name__V_189_189;
                    }
                    {
                      MR_Word base;
                      base = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
                      *parse_tree__prog_io_inst_mode_name__KnownInst_6 = base;
                      MR_hl_field(MR_mktag(2), base, 0) = ((MR_Box) (parse_tree__prog_io_inst_mode_name__V_54_54));
                    }
                  }
                else
                  *parse_tree__prog_io_inst_mode_name__KnownInst_6 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
              }
            parse_tree__prog_io_inst_mode_name__succeeded = MR_TRUE;
          }
          break;
        case (MR_Integer) 12:
          {
            /* case "mostly_unique_any" */
            if ((parse_tree__prog_io_inst_mode_name__Args_5 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
              *parse_tree__prog_io_inst_mode_name__KnownInst_6 = (MR_Word) MR_mkword(MR_mktag(1), &parse_tree__prog_io_inst_mode_name_scalar_common_2[9]);
            else
              *parse_tree__prog_io_inst_mode_name__KnownInst_6 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
            parse_tree__prog_io_inst_mode_name__succeeded = MR_TRUE;
          }
          break;
        case (MR_Integer) 13:
          {
            /* case "not_reached" */
            if ((parse_tree__prog_io_inst_mode_name__Args_5 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
              *parse_tree__prog_io_inst_mode_name__KnownInst_6 = (MR_Word) MR_mkword(MR_mktag(1), &parse_tree__prog_io_inst_mode_name_scalar_common_2[10]);
            else
              *parse_tree__prog_io_inst_mode_name__KnownInst_6 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
            parse_tree__prog_io_inst_mode_name__succeeded = MR_TRUE;
          }
          break;
        case (MR_Integer) 14:
          {
            /* case "unique" */
            if ((parse_tree__prog_io_inst_mode_name__Args_5 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
              {
                *parse_tree__prog_io_inst_mode_name__KnownInst_6 = (MR_Word) MR_mkword(MR_mktag(1), &parse_tree__prog_io_inst_mode_name_scalar_common_2[11]);
              }
            else
              {
                MR_Word parse_tree__prog_io_inst_mode_name__V_190_190 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_inst_mode_name__Args_5, (MR_Integer) 1)));
                MR_Box parse_tree__prog_io_inst_mode_name__V_191_191 = (MR_hl_field(MR_mktag(1), parse_tree__prog_io_inst_mode_name__Args_5, (MR_Integer) 0));

                if ((parse_tree__prog_io_inst_mode_name__V_190_190 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
                  {
                    MR_Word parse_tree__prog_io_inst_mode_name__V_60_60;

                    {
                      parse_tree__prog_io_inst_mode_name__V_60_60 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                      MR_hl_field(MR_mktag(3), parse_tree__prog_io_inst_mode_name__V_60_60, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 0));
                      MR_hl_field(MR_mktag(3), parse_tree__prog_io_inst_mode_name__V_60_60, 1) = parse_tree__prog_io_inst_mode_name__V_191_191;
                    }
                    {
                      MR_Word base;
                      base = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
                      *parse_tree__prog_io_inst_mode_name__KnownInst_6 = base;
                      MR_hl_field(MR_mktag(2), base, 0) = ((MR_Box) (parse_tree__prog_io_inst_mode_name__V_60_60));
                    }
                  }
                else
                  *parse_tree__prog_io_inst_mode_name__KnownInst_6 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
              }
            parse_tree__prog_io_inst_mode_name__succeeded = MR_TRUE;
          }
          break;
        case (MR_Integer) 15:
          {
            /* case "unique_any" */
            if ((parse_tree__prog_io_inst_mode_name__Args_5 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
              *parse_tree__prog_io_inst_mode_name__KnownInst_6 = (MR_Word) MR_mkword(MR_mktag(1), &parse_tree__prog_io_inst_mode_name_scalar_common_2[12]);
            else
              *parse_tree__prog_io_inst_mode_name__KnownInst_6 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
            parse_tree__prog_io_inst_mode_name__succeeded = MR_TRUE;
          }
          break;
      }
    }
    return parse_tree__prog_io_inst_mode_name__succeeded;
  }
}

static void MR_CALL 
parse_tree__prog_io_inst_mode_name____Compare____known_inst_kind_1_0(
  MR_Word parse_tree__prog_io_inst_mode_name__TypeInfo_for_T_18,
  MR_Word * parse_tree__prog_io_inst_mode_name__HeadVar__1_1,
  MR_Word parse_tree__prog_io_inst_mode_name__HeadVar__2_2,
  MR_Word parse_tree__prog_io_inst_mode_name__HeadVar__3_3)
{
  {
    MR_bool parse_tree__prog_io_inst_mode_name__succeeded;
    MR_Integer parse_tree__prog_io_inst_mode_name__CastX_16 = (MR_Integer) parse_tree__prog_io_inst_mode_name__HeadVar__2_2;
    MR_Integer parse_tree__prog_io_inst_mode_name__CastY_17 = (MR_Integer) parse_tree__prog_io_inst_mode_name__HeadVar__3_3;

    parse_tree__prog_io_inst_mode_name__succeeded = (parse_tree__prog_io_inst_mode_name__CastX_16 == parse_tree__prog_io_inst_mode_name__CastY_17);
    if (parse_tree__prog_io_inst_mode_name__succeeded)
      *parse_tree__prog_io_inst_mode_name__HeadVar__1_1 = (MR_Integer) 0;
    else
      switch (MR_tag((MR_Word) parse_tree__prog_io_inst_mode_name__HeadVar__2_2)) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 0:
          switch (MR_tag((MR_Word) parse_tree__prog_io_inst_mode_name__HeadVar__3_3)) {
            default: /*NOTREACHED*/ MR_assert(0);
            case (MR_Integer) 0:
              *parse_tree__prog_io_inst_mode_name__HeadVar__1_1 = (MR_Integer) 0;
              break;
            case (MR_Integer) 1:
              *parse_tree__prog_io_inst_mode_name__HeadVar__1_1 = (MR_Integer) 2;
              break;
            case (MR_Integer) 2:
              *parse_tree__prog_io_inst_mode_name__HeadVar__1_1 = (MR_Integer) 2;
              break;
          }
          break;
        case (MR_Integer) 1:
          {
            MR_Word parse_tree__prog_io_inst_mode_name__V_23_23 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_inst_mode_name__HeadVar__2_2, (MR_Integer) 0)));

            switch (MR_tag((MR_Word) parse_tree__prog_io_inst_mode_name__HeadVar__3_3)) {
              default: /*NOTREACHED*/ MR_assert(0);
              case (MR_Integer) 0:
                *parse_tree__prog_io_inst_mode_name__HeadVar__1_1 = (MR_Integer) 1;
                break;
              case (MR_Integer) 1:
                {
                  MR_Word parse_tree__prog_io_inst_mode_name__V_5_5 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_inst_mode_name__HeadVar__3_3, (MR_Integer) 0)));

                  {
                    parse_tree__prog_data____Compare____mer_inst_0_0(parse_tree__prog_io_inst_mode_name__HeadVar__1_1, parse_tree__prog_io_inst_mode_name__V_23_23, parse_tree__prog_io_inst_mode_name__V_5_5);
                  }
                }
                break;
              case (MR_Integer) 2:
                *parse_tree__prog_io_inst_mode_name__HeadVar__1_1 = (MR_Integer) 1;
                break;
            }
          }
          break;
        case (MR_Integer) 2:
          {
            MR_Word parse_tree__prog_io_inst_mode_name__V_22_22 = ((MR_Word) (MR_hl_field(MR_mktag(2), parse_tree__prog_io_inst_mode_name__HeadVar__2_2, (MR_Integer) 0)));

            switch (MR_tag((MR_Word) parse_tree__prog_io_inst_mode_name__HeadVar__3_3)) {
              default: /*NOTREACHED*/ MR_assert(0);
              case (MR_Integer) 0:
                *parse_tree__prog_io_inst_mode_name__HeadVar__1_1 = (MR_Integer) 1;
                break;
              case (MR_Integer) 1:
                *parse_tree__prog_io_inst_mode_name__HeadVar__1_1 = (MR_Integer) 2;
                break;
              case (MR_Integer) 2:
                {
                  MR_Word parse_tree__prog_io_inst_mode_name__V_12_12 = ((MR_Word) (MR_hl_field(MR_mktag(2), parse_tree__prog_io_inst_mode_name__HeadVar__3_3, (MR_Integer) 0)));

                  {
                    parse_tree__prog_io_inst_mode_name____Compare____known_compound_inst_kind_1_0(parse_tree__prog_io_inst_mode_name__TypeInfo_for_T_18, parse_tree__prog_io_inst_mode_name__HeadVar__1_1, parse_tree__prog_io_inst_mode_name__V_22_22, parse_tree__prog_io_inst_mode_name__V_12_12);
                  }
                }
                break;
            }
          }
          break;
      }
  }
}

static MR_bool MR_CALL 
parse_tree__prog_io_inst_mode_name____Unify____known_inst_kind_1_0(
  MR_Word parse_tree__prog_io_inst_mode_name__TypeInfo_for_T_11,
  MR_Word parse_tree__prog_io_inst_mode_name__HeadVar__1_1,
  MR_Word parse_tree__prog_io_inst_mode_name__HeadVar__2_2)
{
  {
    MR_bool parse_tree__prog_io_inst_mode_name__succeeded;
    MR_Integer parse_tree__prog_io_inst_mode_name__CastX_9 = (MR_Integer) parse_tree__prog_io_inst_mode_name__HeadVar__1_1;
    MR_Integer parse_tree__prog_io_inst_mode_name__CastY_10 = (MR_Integer) parse_tree__prog_io_inst_mode_name__HeadVar__2_2;

    parse_tree__prog_io_inst_mode_name__succeeded = (parse_tree__prog_io_inst_mode_name__CastX_9 == parse_tree__prog_io_inst_mode_name__CastY_10);
    if (parse_tree__prog_io_inst_mode_name__succeeded)
      parse_tree__prog_io_inst_mode_name__succeeded = MR_TRUE;
    else
      switch (MR_tag((MR_Word) parse_tree__prog_io_inst_mode_name__HeadVar__1_1)) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 0:
          {
            MR_Integer parse_tree__prog_io_inst_mode_name__CastX_7 = (MR_Integer) parse_tree__prog_io_inst_mode_name__HeadVar__1_1;
            MR_Integer parse_tree__prog_io_inst_mode_name__CastY_8 = (MR_Integer) parse_tree__prog_io_inst_mode_name__HeadVar__2_2;

            parse_tree__prog_io_inst_mode_name__succeeded = (parse_tree__prog_io_inst_mode_name__CastY_8 == parse_tree__prog_io_inst_mode_name__CastX_7);
          }
          break;
        case (MR_Integer) 1:
          {
            MR_Word parse_tree__prog_io_inst_mode_name__V_3_3 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_inst_mode_name__HeadVar__1_1, (MR_Integer) 0)));
            MR_Word parse_tree__prog_io_inst_mode_name__V_4_4;

            parse_tree__prog_io_inst_mode_name__succeeded = ((MR_tag((MR_Word) parse_tree__prog_io_inst_mode_name__HeadVar__2_2)) == (MR_mktag((MR_Integer) 1)));
            if (parse_tree__prog_io_inst_mode_name__succeeded)
              {
                parse_tree__prog_io_inst_mode_name__V_4_4 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_inst_mode_name__HeadVar__2_2, (MR_Integer) 0)));
                {
                  parse_tree__prog_io_inst_mode_name__succeeded = parse_tree__prog_data____Unify____mer_inst_0_0(parse_tree__prog_io_inst_mode_name__V_3_3, parse_tree__prog_io_inst_mode_name__V_4_4);
                }
              }
          }
          break;
        case (MR_Integer) 2:
          {
            MR_Word parse_tree__prog_io_inst_mode_name__V_5_5 = ((MR_Word) (MR_hl_field(MR_mktag(2), parse_tree__prog_io_inst_mode_name__HeadVar__1_1, (MR_Integer) 0)));
            MR_Word parse_tree__prog_io_inst_mode_name__V_6_6;

            parse_tree__prog_io_inst_mode_name__succeeded = ((MR_tag((MR_Word) parse_tree__prog_io_inst_mode_name__HeadVar__2_2)) == (MR_mktag((MR_Integer) 2)));
            if (parse_tree__prog_io_inst_mode_name__succeeded)
              {
                parse_tree__prog_io_inst_mode_name__V_6_6 = ((MR_Word) (MR_hl_field(MR_mktag(2), parse_tree__prog_io_inst_mode_name__HeadVar__2_2, (MR_Integer) 0)));
                {
                  parse_tree__prog_io_inst_mode_name__succeeded = parse_tree__prog_io_inst_mode_name____Unify____known_compound_inst_kind_1_0(parse_tree__prog_io_inst_mode_name__TypeInfo_for_T_11, parse_tree__prog_io_inst_mode_name__V_5_5, parse_tree__prog_io_inst_mode_name__V_6_6);
                }
              }
          }
          break;
      }
    return parse_tree__prog_io_inst_mode_name__succeeded;
  }
}

static void MR_CALL 
parse_tree__prog_io_inst_mode_name____Compare____known_compound_inst_kind_1_0(
  MR_Word parse_tree__prog_io_inst_mode_name__TypeInfo_for_T_78,
  MR_Word * parse_tree__prog_io_inst_mode_name__HeadVar__1_1,
  MR_Word parse_tree__prog_io_inst_mode_name__HeadVar__2_2,
  MR_Word parse_tree__prog_io_inst_mode_name__HeadVar__3_3)
{
  {
    MR_bool parse_tree__prog_io_inst_mode_name__succeeded;
    MR_Integer parse_tree__prog_io_inst_mode_name__CastX_76 = (MR_Integer) parse_tree__prog_io_inst_mode_name__HeadVar__2_2;
    MR_Integer parse_tree__prog_io_inst_mode_name__CastY_77 = (MR_Integer) parse_tree__prog_io_inst_mode_name__HeadVar__3_3;

    parse_tree__prog_io_inst_mode_name__succeeded = (parse_tree__prog_io_inst_mode_name__CastX_76 == parse_tree__prog_io_inst_mode_name__CastY_77);
    if (parse_tree__prog_io_inst_mode_name__succeeded)
      *parse_tree__prog_io_inst_mode_name__HeadVar__1_1 = (MR_Integer) 0;
    else
      switch (MR_tag((MR_Word) parse_tree__prog_io_inst_mode_name__HeadVar__2_2)) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 0:
          {
            MR_Box parse_tree__prog_io_inst_mode_name__V_82_82 = (MR_hl_field(MR_mktag(0), parse_tree__prog_io_inst_mode_name__HeadVar__2_2, (MR_Integer) 1));
            MR_Box parse_tree__prog_io_inst_mode_name__V_83_83 = (MR_hl_field(MR_mktag(0), parse_tree__prog_io_inst_mode_name__HeadVar__2_2, (MR_Integer) 0));

            switch (MR_tag((MR_Word) parse_tree__prog_io_inst_mode_name__HeadVar__3_3)) {
              default: /*NOTREACHED*/ MR_assert(0);
              case (MR_Integer) 0:
                {
                  MR_Box parse_tree__prog_io_inst_mode_name__V_6_6 = (MR_hl_field(MR_mktag(0), parse_tree__prog_io_inst_mode_name__HeadVar__3_3, (MR_Integer) 0));
                  MR_Box parse_tree__prog_io_inst_mode_name__V_7_7 = (MR_hl_field(MR_mktag(0), parse_tree__prog_io_inst_mode_name__HeadVar__3_3, (MR_Integer) 1));
                  MR_Word parse_tree__prog_io_inst_mode_name__V_8_8;

                  {
                    mercury__builtin__compare_3_p_0(parse_tree__prog_io_inst_mode_name__TypeInfo_for_T_78, &parse_tree__prog_io_inst_mode_name__V_8_8, parse_tree__prog_io_inst_mode_name__V_83_83, parse_tree__prog_io_inst_mode_name__V_6_6);
                  }
                  parse_tree__prog_io_inst_mode_name__succeeded = (parse_tree__prog_io_inst_mode_name__V_8_8 == (MR_Integer) 0);
                  parse_tree__prog_io_inst_mode_name__succeeded = !(parse_tree__prog_io_inst_mode_name__succeeded);
                  if (parse_tree__prog_io_inst_mode_name__succeeded)
                    *parse_tree__prog_io_inst_mode_name__HeadVar__1_1 = parse_tree__prog_io_inst_mode_name__V_8_8;
                  else
                    {
                      mercury__builtin__compare_3_p_0(parse_tree__prog_io_inst_mode_name__TypeInfo_for_T_78, parse_tree__prog_io_inst_mode_name__HeadVar__1_1, parse_tree__prog_io_inst_mode_name__V_82_82, parse_tree__prog_io_inst_mode_name__V_7_7);
                    }
                }
                break;
              case (MR_Integer) 1:
                *parse_tree__prog_io_inst_mode_name__HeadVar__1_1 = (MR_Integer) 1;
                break;
              case (MR_Integer) 2:
                *parse_tree__prog_io_inst_mode_name__HeadVar__1_1 = (MR_Integer) 1;
                break;
              case (MR_Integer) 3:
                switch (((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__prog_io_inst_mode_name__HeadVar__3_3, (MR_Integer) 0)))) {
                  default: /*NOTREACHED*/ MR_assert(0);
                  case (MR_Integer) 0:
                    *parse_tree__prog_io_inst_mode_name__HeadVar__1_1 = (MR_Integer) 1;
                    break;
                  case (MR_Integer) 1:
                    *parse_tree__prog_io_inst_mode_name__HeadVar__1_1 = (MR_Integer) 1;
                    break;
                }
                break;
            }
          }
          break;
        case (MR_Integer) 1:
          {
            MR_Box parse_tree__prog_io_inst_mode_name__V_80_80 = (MR_hl_field(MR_mktag(1), parse_tree__prog_io_inst_mode_name__HeadVar__2_2, (MR_Integer) 1));
            MR_Box parse_tree__prog_io_inst_mode_name__V_81_81 = (MR_hl_field(MR_mktag(1), parse_tree__prog_io_inst_mode_name__HeadVar__2_2, (MR_Integer) 0));

            switch (MR_tag((MR_Word) parse_tree__prog_io_inst_mode_name__HeadVar__3_3)) {
              default: /*NOTREACHED*/ MR_assert(0);
              case (MR_Integer) 0:
                *parse_tree__prog_io_inst_mode_name__HeadVar__1_1 = (MR_Integer) 2;
                break;
              case (MR_Integer) 1:
                {
                  MR_Box parse_tree__prog_io_inst_mode_name__V_28_28 = (MR_hl_field(MR_mktag(1), parse_tree__prog_io_inst_mode_name__HeadVar__3_3, (MR_Integer) 0));
                  MR_Box parse_tree__prog_io_inst_mode_name__V_29_29 = (MR_hl_field(MR_mktag(1), parse_tree__prog_io_inst_mode_name__HeadVar__3_3, (MR_Integer) 1));
                  MR_Word parse_tree__prog_io_inst_mode_name__V_30_30;

                  {
                    mercury__builtin__compare_3_p_0(parse_tree__prog_io_inst_mode_name__TypeInfo_for_T_78, &parse_tree__prog_io_inst_mode_name__V_30_30, parse_tree__prog_io_inst_mode_name__V_81_81, parse_tree__prog_io_inst_mode_name__V_28_28);
                  }
                  parse_tree__prog_io_inst_mode_name__succeeded = (parse_tree__prog_io_inst_mode_name__V_30_30 == (MR_Integer) 0);
                  parse_tree__prog_io_inst_mode_name__succeeded = !(parse_tree__prog_io_inst_mode_name__succeeded);
                  if (parse_tree__prog_io_inst_mode_name__succeeded)
                    *parse_tree__prog_io_inst_mode_name__HeadVar__1_1 = parse_tree__prog_io_inst_mode_name__V_30_30;
                  else
                    {
                      mercury__builtin__compare_3_p_0(parse_tree__prog_io_inst_mode_name__TypeInfo_for_T_78, parse_tree__prog_io_inst_mode_name__HeadVar__1_1, parse_tree__prog_io_inst_mode_name__V_80_80, parse_tree__prog_io_inst_mode_name__V_29_29);
                    }
                }
                break;
              case (MR_Integer) 2:
                *parse_tree__prog_io_inst_mode_name__HeadVar__1_1 = (MR_Integer) 1;
                break;
              case (MR_Integer) 3:
                switch (((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__prog_io_inst_mode_name__HeadVar__3_3, (MR_Integer) 0)))) {
                  default: /*NOTREACHED*/ MR_assert(0);
                  case (MR_Integer) 0:
                    *parse_tree__prog_io_inst_mode_name__HeadVar__1_1 = (MR_Integer) 1;
                    break;
                  case (MR_Integer) 1:
                    *parse_tree__prog_io_inst_mode_name__HeadVar__1_1 = (MR_Integer) 1;
                    break;
                }
                break;
            }
          }
          break;
        case (MR_Integer) 2:
          {
            MR_Box parse_tree__prog_io_inst_mode_name__V_79_79 = (MR_hl_field(MR_mktag(2), parse_tree__prog_io_inst_mode_name__HeadVar__2_2, (MR_Integer) 0));

            switch (MR_tag((MR_Word) parse_tree__prog_io_inst_mode_name__HeadVar__3_3)) {
              default: /*NOTREACHED*/ MR_assert(0);
              case (MR_Integer) 0:
                *parse_tree__prog_io_inst_mode_name__HeadVar__1_1 = (MR_Integer) 2;
                break;
              case (MR_Integer) 1:
                *parse_tree__prog_io_inst_mode_name__HeadVar__1_1 = (MR_Integer) 2;
                break;
              case (MR_Integer) 2:
                {
                  MR_Box parse_tree__prog_io_inst_mode_name__V_47_47 = (MR_hl_field(MR_mktag(2), parse_tree__prog_io_inst_mode_name__HeadVar__3_3, (MR_Integer) 0));

                  {
                    mercury__builtin__compare_3_p_0(parse_tree__prog_io_inst_mode_name__TypeInfo_for_T_78, parse_tree__prog_io_inst_mode_name__HeadVar__1_1, parse_tree__prog_io_inst_mode_name__V_79_79, parse_tree__prog_io_inst_mode_name__V_47_47);
                  }
                }
                break;
              case (MR_Integer) 3:
                switch (((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__prog_io_inst_mode_name__HeadVar__3_3, (MR_Integer) 0)))) {
                  default: /*NOTREACHED*/ MR_assert(0);
                  case (MR_Integer) 0:
                    *parse_tree__prog_io_inst_mode_name__HeadVar__1_1 = (MR_Integer) 1;
                    break;
                  case (MR_Integer) 1:
                    *parse_tree__prog_io_inst_mode_name__HeadVar__1_1 = (MR_Integer) 1;
                    break;
                }
                break;
            }
          }
          break;
        case (MR_Integer) 3:
          switch (((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__prog_io_inst_mode_name__HeadVar__2_2, (MR_Integer) 0)))) {
            default: /*NOTREACHED*/ MR_assert(0);
            case (MR_Integer) 0:
              {
                MR_Box parse_tree__prog_io_inst_mode_name__V_85_85 = (MR_hl_field(MR_mktag(3), parse_tree__prog_io_inst_mode_name__HeadVar__2_2, (MR_Integer) 1));

                switch (MR_tag((MR_Word) parse_tree__prog_io_inst_mode_name__HeadVar__3_3)) {
                  default: /*NOTREACHED*/ MR_assert(0);
                  case (MR_Integer) 0:
                    *parse_tree__prog_io_inst_mode_name__HeadVar__1_1 = (MR_Integer) 2;
                    break;
                  case (MR_Integer) 1:
                    *parse_tree__prog_io_inst_mode_name__HeadVar__1_1 = (MR_Integer) 2;
                    break;
                  case (MR_Integer) 2:
                    *parse_tree__prog_io_inst_mode_name__HeadVar__1_1 = (MR_Integer) 2;
                    break;
                  case (MR_Integer) 3:
                    switch (((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__prog_io_inst_mode_name__HeadVar__3_3, (MR_Integer) 0)))) {
                      default: /*NOTREACHED*/ MR_assert(0);
                      case (MR_Integer) 0:
                        {
                          MR_Box parse_tree__prog_io_inst_mode_name__V_61_61 = (MR_hl_field(MR_mktag(3), parse_tree__prog_io_inst_mode_name__HeadVar__3_3, (MR_Integer) 1));

                          {
                            mercury__builtin__compare_3_p_0(parse_tree__prog_io_inst_mode_name__TypeInfo_for_T_78, parse_tree__prog_io_inst_mode_name__HeadVar__1_1, parse_tree__prog_io_inst_mode_name__V_85_85, parse_tree__prog_io_inst_mode_name__V_61_61);
                          }
                        }
                        break;
                      case (MR_Integer) 1:
                        *parse_tree__prog_io_inst_mode_name__HeadVar__1_1 = (MR_Integer) 1;
                        break;
                    }
                    break;
                }
              }
              break;
            case (MR_Integer) 1:
              {
                MR_Box parse_tree__prog_io_inst_mode_name__V_84_84 = (MR_hl_field(MR_mktag(3), parse_tree__prog_io_inst_mode_name__HeadVar__2_2, (MR_Integer) 1));

                switch (MR_tag((MR_Word) parse_tree__prog_io_inst_mode_name__HeadVar__3_3)) {
                  default: /*NOTREACHED*/ MR_assert(0);
                  case (MR_Integer) 0:
                    *parse_tree__prog_io_inst_mode_name__HeadVar__1_1 = (MR_Integer) 2;
                    break;
                  case (MR_Integer) 1:
                    *parse_tree__prog_io_inst_mode_name__HeadVar__1_1 = (MR_Integer) 2;
                    break;
                  case (MR_Integer) 2:
                    *parse_tree__prog_io_inst_mode_name__HeadVar__1_1 = (MR_Integer) 2;
                    break;
                  case (MR_Integer) 3:
                    switch (((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__prog_io_inst_mode_name__HeadVar__3_3, (MR_Integer) 0)))) {
                      default: /*NOTREACHED*/ MR_assert(0);
                      case (MR_Integer) 0:
                        *parse_tree__prog_io_inst_mode_name__HeadVar__1_1 = (MR_Integer) 2;
                        break;
                      case (MR_Integer) 1:
                        {
                          MR_Box parse_tree__prog_io_inst_mode_name__V_75_75 = (MR_hl_field(MR_mktag(3), parse_tree__prog_io_inst_mode_name__HeadVar__3_3, (MR_Integer) 1));

                          {
                            mercury__builtin__compare_3_p_0(parse_tree__prog_io_inst_mode_name__TypeInfo_for_T_78, parse_tree__prog_io_inst_mode_name__HeadVar__1_1, parse_tree__prog_io_inst_mode_name__V_84_84, parse_tree__prog_io_inst_mode_name__V_75_75);
                          }
                        }
                        break;
                    }
                    break;
                }
              }
              break;
          }
          break;
      }
  }
}

static MR_bool MR_CALL 
parse_tree__prog_io_inst_mode_name____Unify____known_compound_inst_kind_1_0(
  MR_Word parse_tree__prog_io_inst_mode_name__TypeInfo_for_T_19,
  MR_Word parse_tree__prog_io_inst_mode_name__HeadVar__1_1,
  MR_Word parse_tree__prog_io_inst_mode_name__HeadVar__2_2)
{
  {
    MR_bool parse_tree__prog_io_inst_mode_name__succeeded;
    MR_Integer parse_tree__prog_io_inst_mode_name__CastX_17 = (MR_Integer) parse_tree__prog_io_inst_mode_name__HeadVar__1_1;
    MR_Integer parse_tree__prog_io_inst_mode_name__CastY_18 = (MR_Integer) parse_tree__prog_io_inst_mode_name__HeadVar__2_2;

    parse_tree__prog_io_inst_mode_name__succeeded = (parse_tree__prog_io_inst_mode_name__CastX_17 == parse_tree__prog_io_inst_mode_name__CastY_18);
    if (parse_tree__prog_io_inst_mode_name__succeeded)
      parse_tree__prog_io_inst_mode_name__succeeded = MR_TRUE;
    else
      switch (MR_tag((MR_Word) parse_tree__prog_io_inst_mode_name__HeadVar__1_1)) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 0:
          {
            MR_Box parse_tree__prog_io_inst_mode_name__V_3_3 = (MR_hl_field(MR_mktag(0), parse_tree__prog_io_inst_mode_name__HeadVar__1_1, (MR_Integer) 0));
            MR_Box parse_tree__prog_io_inst_mode_name__V_4_4 = (MR_hl_field(MR_mktag(0), parse_tree__prog_io_inst_mode_name__HeadVar__1_1, (MR_Integer) 1));
            MR_Box parse_tree__prog_io_inst_mode_name__V_5_5;
            MR_Box parse_tree__prog_io_inst_mode_name__V_6_6;

            parse_tree__prog_io_inst_mode_name__succeeded = ((MR_tag((MR_Word) parse_tree__prog_io_inst_mode_name__HeadVar__2_2)) == (MR_mktag((MR_Integer) 0)));
            if (parse_tree__prog_io_inst_mode_name__succeeded)
              {
                parse_tree__prog_io_inst_mode_name__V_5_5 = (MR_hl_field(MR_mktag(0), parse_tree__prog_io_inst_mode_name__HeadVar__2_2, (MR_Integer) 0));
                parse_tree__prog_io_inst_mode_name__V_6_6 = (MR_hl_field(MR_mktag(0), parse_tree__prog_io_inst_mode_name__HeadVar__2_2, (MR_Integer) 1));
                {
                  parse_tree__prog_io_inst_mode_name__succeeded = mercury__builtin__unify_2_p_0(parse_tree__prog_io_inst_mode_name__TypeInfo_for_T_19, parse_tree__prog_io_inst_mode_name__V_3_3, parse_tree__prog_io_inst_mode_name__V_5_5);
                }
                if (parse_tree__prog_io_inst_mode_name__succeeded)
                  {
                    parse_tree__prog_io_inst_mode_name__succeeded = mercury__builtin__unify_2_p_0(parse_tree__prog_io_inst_mode_name__TypeInfo_for_T_19, parse_tree__prog_io_inst_mode_name__V_4_4, parse_tree__prog_io_inst_mode_name__V_6_6);
                  }
              }
          }
          break;
        case (MR_Integer) 1:
          {
            MR_Box parse_tree__prog_io_inst_mode_name__V_7_7 = (MR_hl_field(MR_mktag(1), parse_tree__prog_io_inst_mode_name__HeadVar__1_1, (MR_Integer) 0));
            MR_Box parse_tree__prog_io_inst_mode_name__V_8_8 = (MR_hl_field(MR_mktag(1), parse_tree__prog_io_inst_mode_name__HeadVar__1_1, (MR_Integer) 1));
            MR_Box parse_tree__prog_io_inst_mode_name__V_9_9;
            MR_Box parse_tree__prog_io_inst_mode_name__V_10_10;

            parse_tree__prog_io_inst_mode_name__succeeded = ((MR_tag((MR_Word) parse_tree__prog_io_inst_mode_name__HeadVar__2_2)) == (MR_mktag((MR_Integer) 1)));
            if (parse_tree__prog_io_inst_mode_name__succeeded)
              {
                parse_tree__prog_io_inst_mode_name__V_9_9 = (MR_hl_field(MR_mktag(1), parse_tree__prog_io_inst_mode_name__HeadVar__2_2, (MR_Integer) 0));
                parse_tree__prog_io_inst_mode_name__V_10_10 = (MR_hl_field(MR_mktag(1), parse_tree__prog_io_inst_mode_name__HeadVar__2_2, (MR_Integer) 1));
                {
                  parse_tree__prog_io_inst_mode_name__succeeded = mercury__builtin__unify_2_p_0(parse_tree__prog_io_inst_mode_name__TypeInfo_for_T_19, parse_tree__prog_io_inst_mode_name__V_7_7, parse_tree__prog_io_inst_mode_name__V_9_9);
                }
                if (parse_tree__prog_io_inst_mode_name__succeeded)
                  {
                    parse_tree__prog_io_inst_mode_name__succeeded = mercury__builtin__unify_2_p_0(parse_tree__prog_io_inst_mode_name__TypeInfo_for_T_19, parse_tree__prog_io_inst_mode_name__V_8_8, parse_tree__prog_io_inst_mode_name__V_10_10);
                  }
              }
          }
          break;
        case (MR_Integer) 2:
          {
            MR_Box parse_tree__prog_io_inst_mode_name__V_11_11 = (MR_hl_field(MR_mktag(2), parse_tree__prog_io_inst_mode_name__HeadVar__1_1, (MR_Integer) 0));
            MR_Box parse_tree__prog_io_inst_mode_name__V_12_12;

            parse_tree__prog_io_inst_mode_name__succeeded = ((MR_tag((MR_Word) parse_tree__prog_io_inst_mode_name__HeadVar__2_2)) == (MR_mktag((MR_Integer) 2)));
            if (parse_tree__prog_io_inst_mode_name__succeeded)
              {
                parse_tree__prog_io_inst_mode_name__V_12_12 = (MR_hl_field(MR_mktag(2), parse_tree__prog_io_inst_mode_name__HeadVar__2_2, (MR_Integer) 0));
                {
                  parse_tree__prog_io_inst_mode_name__succeeded = mercury__builtin__unify_2_p_0(parse_tree__prog_io_inst_mode_name__TypeInfo_for_T_19, parse_tree__prog_io_inst_mode_name__V_11_11, parse_tree__prog_io_inst_mode_name__V_12_12);
                }
              }
          }
          break;
        case (MR_Integer) 3:
          switch (((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__prog_io_inst_mode_name__HeadVar__1_1, (MR_Integer) 0)))) {
            default: /*NOTREACHED*/ MR_assert(0);
            case (MR_Integer) 0:
              {
                MR_Box parse_tree__prog_io_inst_mode_name__V_13_13 = (MR_hl_field(MR_mktag(3), parse_tree__prog_io_inst_mode_name__HeadVar__1_1, (MR_Integer) 1));
                MR_Box parse_tree__prog_io_inst_mode_name__V_14_14;

                parse_tree__prog_io_inst_mode_name__succeeded = ((((MR_tag((MR_Word) parse_tree__prog_io_inst_mode_name__HeadVar__2_2)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__prog_io_inst_mode_name__HeadVar__2_2, (MR_Integer) 0)))) == (MR_Integer) 0)));
                if (parse_tree__prog_io_inst_mode_name__succeeded)
                  {
                    parse_tree__prog_io_inst_mode_name__V_14_14 = (MR_hl_field(MR_mktag(3), parse_tree__prog_io_inst_mode_name__HeadVar__2_2, (MR_Integer) 1));
                    {
                      parse_tree__prog_io_inst_mode_name__succeeded = mercury__builtin__unify_2_p_0(parse_tree__prog_io_inst_mode_name__TypeInfo_for_T_19, parse_tree__prog_io_inst_mode_name__V_13_13, parse_tree__prog_io_inst_mode_name__V_14_14);
                    }
                  }
              }
              break;
            case (MR_Integer) 1:
              {
                MR_Box parse_tree__prog_io_inst_mode_name__V_15_15 = (MR_hl_field(MR_mktag(3), parse_tree__prog_io_inst_mode_name__HeadVar__1_1, (MR_Integer) 1));
                MR_Box parse_tree__prog_io_inst_mode_name__V_16_16;

                parse_tree__prog_io_inst_mode_name__succeeded = ((((MR_tag((MR_Word) parse_tree__prog_io_inst_mode_name__HeadVar__2_2)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__prog_io_inst_mode_name__HeadVar__2_2, (MR_Integer) 0)))) == (MR_Integer) 1)));
                if (parse_tree__prog_io_inst_mode_name__succeeded)
                  {
                    parse_tree__prog_io_inst_mode_name__V_16_16 = (MR_hl_field(MR_mktag(3), parse_tree__prog_io_inst_mode_name__HeadVar__2_2, (MR_Integer) 1));
                    {
                      parse_tree__prog_io_inst_mode_name__succeeded = mercury__builtin__unify_2_p_0(parse_tree__prog_io_inst_mode_name__TypeInfo_for_T_19, parse_tree__prog_io_inst_mode_name__V_15_15, parse_tree__prog_io_inst_mode_name__V_16_16);
                    }
                  }
              }
              break;
          }
          break;
      }
    return parse_tree__prog_io_inst_mode_name__succeeded;
  }
}

void MR_CALL 
parse_tree__prog_io_inst_mode_name____Compare____allow_constrained_inst_var_0_0(
  MR_Word * parse_tree__prog_io_inst_mode_name__HeadVar__1_1,
  MR_Word parse_tree__prog_io_inst_mode_name__HeadVar__2_2,
  MR_Word parse_tree__prog_io_inst_mode_name__HeadVar__3_3)
{
  {
    MR_bool parse_tree__prog_io_inst_mode_name__succeeded;
    MR_Integer parse_tree__prog_io_inst_mode_name__Cast_HeadVar1_4 = (MR_Integer) parse_tree__prog_io_inst_mode_name__HeadVar__2_2;
    MR_Integer parse_tree__prog_io_inst_mode_name__Cast_HeadVar2_5 = (MR_Integer) parse_tree__prog_io_inst_mode_name__HeadVar__3_3;

    {
      mercury__private_builtin__builtin_compare_int_3_p_0(parse_tree__prog_io_inst_mode_name__HeadVar__1_1, parse_tree__prog_io_inst_mode_name__Cast_HeadVar1_4, parse_tree__prog_io_inst_mode_name__Cast_HeadVar2_5);
    }
  }
}

MR_bool MR_CALL 
parse_tree__prog_io_inst_mode_name____Unify____allow_constrained_inst_var_0_0(
  MR_Word parse_tree__prog_io_inst_mode_name__HeadVar__2_1,
  MR_Word parse_tree__prog_io_inst_mode_name__HeadVar__2_2)
{
  {
    MR_bool parse_tree__prog_io_inst_mode_name__succeeded = (parse_tree__prog_io_inst_mode_name__HeadVar__2_1 == parse_tree__prog_io_inst_mode_name__HeadVar__2_2);

    return parse_tree__prog_io_inst_mode_name__succeeded;
  }
}

static MR_bool MR_CALL 
parse_tree__prog_io_inst_mode_name__convert_bound_inst_3_p_0(
  MR_Word parse_tree__prog_io_inst_mode_name__AllowConstrainedInstVar_4,
  MR_Word parse_tree__prog_io_inst_mode_name__InstTerm_5,
  MR_Word * parse_tree__prog_io_inst_mode_name__BoundInst_6)
{
  {
    MR_bool parse_tree__prog_io_inst_mode_name__succeeded = ((MR_tag((MR_Word) parse_tree__prog_io_inst_mode_name__InstTerm_5)) == (MR_mktag((MR_Integer) 0)));
    MR_Word parse_tree__prog_io_inst_mode_name__Functor_7;
    MR_Word parse_tree__prog_io_inst_mode_name__Args0_8;
    MR_Word parse_tree__prog_io_inst_mode_name__Args1_12;
    MR_Word parse_tree__prog_io_inst_mode_name__ConsId_14;
    MR_Word parse_tree__prog_io_inst_mode_name__Args_21;
    MR_Word parse_tree__prog_io_inst_mode_name__V_9_9;

    if (parse_tree__prog_io_inst_mode_name__succeeded)
      {
        parse_tree__prog_io_inst_mode_name__Functor_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_inst_mode_name__InstTerm_5, (MR_Integer) 0)));
        parse_tree__prog_io_inst_mode_name__Args0_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_inst_mode_name__InstTerm_5, (MR_Integer) 1)));
        parse_tree__prog_io_inst_mode_name__V_9_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_inst_mode_name__InstTerm_5, (MR_Integer) 2)));
        switch (MR_tag((MR_Word) parse_tree__prog_io_inst_mode_name__Functor_7)) {
          default:
            parse_tree__prog_io_inst_mode_name__succeeded = MR_FALSE;
            break;
          case (MR_Integer) 0:
            {
              MR_Word parse_tree__prog_io_inst_mode_name__TypeInfo_25_25;
              MR_Word parse_tree__prog_io_inst_mode_name__SymName_11;
              MR_Integer parse_tree__prog_io_inst_mode_name__Arity_13;
              MR_Word parse_tree__prog_io_inst_mode_name__V_22_22;

              {
                parse_tree__prog_io_inst_mode_name__succeeded = parse_tree__prog_io_sym_name__try_parse_sym_name_and_args_from_f_args_4_p_0((MR_Word) &mercury__term__term__type_ctor_info_generic_0, parse_tree__prog_io_inst_mode_name__Functor_7, parse_tree__prog_io_inst_mode_name__Args0_8, &parse_tree__prog_io_inst_mode_name__SymName_11, &parse_tree__prog_io_inst_mode_name__Args1_12);
              }
              if (parse_tree__prog_io_inst_mode_name__succeeded)
                {
                  parse_tree__prog_io_inst_mode_name__TypeInfo_25_25 = (MR_Word) &parse_tree__prog_io_inst_mode_name_scalar_common_1[0];
                  {
                    mercury__list__length_2_p_0(parse_tree__prog_io_inst_mode_name__TypeInfo_25_25, parse_tree__prog_io_inst_mode_name__Args1_12, &parse_tree__prog_io_inst_mode_name__Arity_13);
                  }
                  {
                    parse_tree__prog_io_inst_mode_name__V_22_22 = parse_tree__prog_data__cons_id_dummy_type_ctor_0_f_0();
                  }
                  {
                    parse_tree__prog_io_inst_mode_name__ConsId_14 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL));
                    MR_hl_field(MR_mktag(3), parse_tree__prog_io_inst_mode_name__ConsId_14, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
                    MR_hl_field(MR_mktag(3), parse_tree__prog_io_inst_mode_name__ConsId_14, 1) = ((MR_Box) (parse_tree__prog_io_inst_mode_name__SymName_11));
                    MR_hl_field(MR_mktag(3), parse_tree__prog_io_inst_mode_name__ConsId_14, 2) = ((MR_Box) (parse_tree__prog_io_inst_mode_name__Arity_13));
                    MR_hl_field(MR_mktag(3), parse_tree__prog_io_inst_mode_name__ConsId_14, 3) = ((MR_Box) (parse_tree__prog_io_inst_mode_name__V_22_22));
                  }
                  parse_tree__prog_io_inst_mode_name__succeeded = MR_TRUE;
                }
            }
            break;
          case (MR_Integer) 1:
          case (MR_Integer) 2:
            {
              MR_Integer parse_tree__prog_io_inst_mode_name__Arity_23;

              parse_tree__prog_io_inst_mode_name__Args1_12 = parse_tree__prog_io_inst_mode_name__Args0_8;
              {
                mercury__list__length_2_p_0((MR_Word) &parse_tree__prog_io_inst_mode_name_scalar_common_1[0], parse_tree__prog_io_inst_mode_name__Args1_12, &parse_tree__prog_io_inst_mode_name__Arity_23);
              }
              {
                parse_tree__prog_io_inst_mode_name__succeeded = parse_tree__prog_util__make_functor_cons_id_3_p_0(parse_tree__prog_io_inst_mode_name__Functor_7, parse_tree__prog_io_inst_mode_name__Arity_23, &parse_tree__prog_io_inst_mode_name__ConsId_14);
              }
            }
            break;
          case (MR_Integer) 3:
            switch (((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__prog_io_inst_mode_name__Functor_7, (MR_Integer) 0)))) {
              default:
                parse_tree__prog_io_inst_mode_name__succeeded = MR_FALSE;
                break;
              case (MR_Integer) 0:
              case (MR_Integer) 1:
                {
                  MR_Integer parse_tree__prog_io_inst_mode_name__Arity_23;

                  parse_tree__prog_io_inst_mode_name__Args1_12 = parse_tree__prog_io_inst_mode_name__Args0_8;
                  {
                    mercury__list__length_2_p_0((MR_Word) &parse_tree__prog_io_inst_mode_name_scalar_common_1[0], parse_tree__prog_io_inst_mode_name__Args1_12, &parse_tree__prog_io_inst_mode_name__Arity_23);
                  }
                  {
                    parse_tree__prog_io_inst_mode_name__succeeded = parse_tree__prog_util__make_functor_cons_id_3_p_0(parse_tree__prog_io_inst_mode_name__Functor_7, parse_tree__prog_io_inst_mode_name__Arity_23, &parse_tree__prog_io_inst_mode_name__ConsId_14);
                  }
                }
                break;
            }
            break;
        }
        if (parse_tree__prog_io_inst_mode_name__succeeded)
          {
            {
              parse_tree__prog_io_inst_mode_name__succeeded = parse_tree__prog_io_inst_mode_name__convert_inst_list_3_p_0(parse_tree__prog_io_inst_mode_name__AllowConstrainedInstVar_4, parse_tree__prog_io_inst_mode_name__Args1_12, &parse_tree__prog_io_inst_mode_name__Args_21);
            }
            if (parse_tree__prog_io_inst_mode_name__succeeded)
              {
                {
                  MR_Word base;
                  base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
                  *parse_tree__prog_io_inst_mode_name__BoundInst_6 = base;
                  MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (parse_tree__prog_io_inst_mode_name__ConsId_14));
                  MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (parse_tree__prog_io_inst_mode_name__Args_21));
                }
                parse_tree__prog_io_inst_mode_name__succeeded = MR_TRUE;
              }
          }
      }
    return parse_tree__prog_io_inst_mode_name__succeeded;
  }
}

static MR_bool MR_CALL 
parse_tree__prog_io_inst_mode_name__convert_bound_inst_list_3_p_0(
  MR_Word parse_tree__prog_io_inst_mode_name__AllowConstrainedInstVar_1,
  MR_Word parse_tree__prog_io_inst_mode_name__HeadVar__2_2,
  MR_Word * parse_tree__prog_io_inst_mode_name__HeadVar__3_3)
{
  {
    MR_bool parse_tree__prog_io_inst_mode_name__succeeded;

    if ((parse_tree__prog_io_inst_mode_name__HeadVar__2_2 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
      {
        *parse_tree__prog_io_inst_mode_name__HeadVar__3_3 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
        parse_tree__prog_io_inst_mode_name__succeeded = MR_TRUE;
      }
    else
      {
        MR_Word parse_tree__prog_io_inst_mode_name__H0_6 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_inst_mode_name__HeadVar__2_2, (MR_Integer) 0)));
        MR_Word parse_tree__prog_io_inst_mode_name__T0_7 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_inst_mode_name__HeadVar__2_2, (MR_Integer) 1)));
        MR_Word parse_tree__prog_io_inst_mode_name__H_8;
        MR_Word parse_tree__prog_io_inst_mode_name__T_9;

        {
          parse_tree__prog_io_inst_mode_name__succeeded = parse_tree__prog_io_inst_mode_name__convert_bound_inst_3_p_0(parse_tree__prog_io_inst_mode_name__AllowConstrainedInstVar_1, parse_tree__prog_io_inst_mode_name__H0_6, &parse_tree__prog_io_inst_mode_name__H_8);
        }
        if (parse_tree__prog_io_inst_mode_name__succeeded)
          {
            {
              parse_tree__prog_io_inst_mode_name__succeeded = parse_tree__prog_io_inst_mode_name__convert_bound_inst_list_3_p_0(parse_tree__prog_io_inst_mode_name__AllowConstrainedInstVar_1, parse_tree__prog_io_inst_mode_name__T0_7, &parse_tree__prog_io_inst_mode_name__T_9);
            }
            if (parse_tree__prog_io_inst_mode_name__succeeded)
              {
                {
                  MR_Word base;
                  base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                  *parse_tree__prog_io_inst_mode_name__HeadVar__3_3 = base;
                  MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (parse_tree__prog_io_inst_mode_name__H_8));
                  MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (parse_tree__prog_io_inst_mode_name__T_9));
                }
                parse_tree__prog_io_inst_mode_name__succeeded = MR_TRUE;
              }
          }
      }
    return parse_tree__prog_io_inst_mode_name__succeeded;
  }
}

static void MR_CALL 
parse_tree__prog_io_inst_mode_name__parse_bound_inst_list_4_p_0_1(
  void * parse_tree__prog_io_inst_mode_name__env_ptr_arg)
{
  {
    struct parse_tree__prog_io_inst_mode_name__parse_bound_inst_list_4_p_0_env_0_s * parse_tree__prog_io_inst_mode_name__env_ptr = (struct parse_tree__prog_io_inst_mode_name__parse_bound_inst_list_4_p_0_env_0_s *) parse_tree__prog_io_inst_mode_name__env_ptr_arg;

    MR_builtin_longjmp((parse_tree__prog_io_inst_mode_name__env_ptr)->parse_tree__prog_io_inst_mode_name__parse_bound_inst_list_4_p_0_env_0__commit_0, 1);
  }
}

static void MR_CALL 
parse_tree__prog_io_inst_mode_name__parse_bound_inst_list_4_p_0_2(
  void * parse_tree__prog_io_inst_mode_name__env_ptr_arg)
{
  {
    struct parse_tree__prog_io_inst_mode_name__parse_bound_inst_list_4_p_0_env_0_s * parse_tree__prog_io_inst_mode_name__env_ptr = (struct parse_tree__prog_io_inst_mode_name__parse_bound_inst_list_4_p_0_env_0_s *) parse_tree__prog_io_inst_mode_name__env_ptr_arg;

    {
      MR_Word parse_tree__prog_io_inst_mode_name__V_16_16;
      MR_Word parse_tree__prog_io_inst_mode_name__V_18_18;
      MR_Word parse_tree__prog_io_inst_mode_name__V_19_19;

      (parse_tree__prog_io_inst_mode_name__env_ptr)->parse_tree__prog_io_inst_mode_name__parse_bound_inst_list_4_p_0_env_0__succeeded = ((MR_tag((MR_Word) (parse_tree__prog_io_inst_mode_name__env_ptr)->parse_tree__prog_io_inst_mode_name__parse_bound_inst_list_4_p_0_env_0__SubList_13)) == (MR_mktag((MR_Integer) 1)));
      if ((parse_tree__prog_io_inst_mode_name__env_ptr)->parse_tree__prog_io_inst_mode_name__parse_bound_inst_list_4_p_0_env_0__succeeded)
        {
          {
            (parse_tree__prog_io_inst_mode_name__env_ptr)->parse_tree__prog_io_inst_mode_name__parse_bound_inst_list_4_p_0_env_0__F1_14 = ((MR_Word) (MR_hl_field(MR_mktag(1), (parse_tree__prog_io_inst_mode_name__env_ptr)->parse_tree__prog_io_inst_mode_name__parse_bound_inst_list_4_p_0_env_0__SubList_13, (MR_Integer) 0)));
            (parse_tree__prog_io_inst_mode_name__env_ptr)->parse_tree__prog_io_inst_mode_name__parse_bound_inst_list_4_p_0_env_0__V_20_20 = ((MR_Word) (MR_hl_field(MR_mktag(1), (parse_tree__prog_io_inst_mode_name__env_ptr)->parse_tree__prog_io_inst_mode_name__parse_bound_inst_list_4_p_0_env_0__SubList_13, (MR_Integer) 1)));
          }
          {
            (parse_tree__prog_io_inst_mode_name__env_ptr)->parse_tree__prog_io_inst_mode_name__parse_bound_inst_list_4_p_0_env_0__succeeded = ((MR_tag((MR_Word) (parse_tree__prog_io_inst_mode_name__env_ptr)->parse_tree__prog_io_inst_mode_name__parse_bound_inst_list_4_p_0_env_0__V_20_20)) == (MR_mktag((MR_Integer) 1)));
            if ((parse_tree__prog_io_inst_mode_name__env_ptr)->parse_tree__prog_io_inst_mode_name__parse_bound_inst_list_4_p_0_env_0__succeeded)
              {
                {
                  (parse_tree__prog_io_inst_mode_name__env_ptr)->parse_tree__prog_io_inst_mode_name__parse_bound_inst_list_4_p_0_env_0__F2_15 = ((MR_Word) (MR_hl_field(MR_mktag(1), (parse_tree__prog_io_inst_mode_name__env_ptr)->parse_tree__prog_io_inst_mode_name__parse_bound_inst_list_4_p_0_env_0__V_20_20, (MR_Integer) 0)));
                  parse_tree__prog_io_inst_mode_name__V_16_16 = ((MR_Word) (MR_hl_field(MR_mktag(1), (parse_tree__prog_io_inst_mode_name__env_ptr)->parse_tree__prog_io_inst_mode_name__parse_bound_inst_list_4_p_0_env_0__V_20_20, (MR_Integer) 1)));
                }
                {
                  (parse_tree__prog_io_inst_mode_name__env_ptr)->parse_tree__prog_io_inst_mode_name__parse_bound_inst_list_4_p_0_env_0__ConsId_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), (parse_tree__prog_io_inst_mode_name__env_ptr)->parse_tree__prog_io_inst_mode_name__parse_bound_inst_list_4_p_0_env_0__F1_14, (MR_Integer) 0)));
                  parse_tree__prog_io_inst_mode_name__V_18_18 = ((MR_Word) (MR_hl_field(MR_mktag(0), (parse_tree__prog_io_inst_mode_name__env_ptr)->parse_tree__prog_io_inst_mode_name__parse_bound_inst_list_4_p_0_env_0__F1_14, (MR_Integer) 1)));
                  (parse_tree__prog_io_inst_mode_name__env_ptr)->parse_tree__prog_io_inst_mode_name__parse_bound_inst_list_4_p_0_env_0__V_24_24 = ((MR_Word) (MR_hl_field(MR_mktag(0), (parse_tree__prog_io_inst_mode_name__env_ptr)->parse_tree__prog_io_inst_mode_name__parse_bound_inst_list_4_p_0_env_0__F2_15, (MR_Integer) 0)));
                  parse_tree__prog_io_inst_mode_name__V_19_19 = ((MR_Word) (MR_hl_field(MR_mktag(0), (parse_tree__prog_io_inst_mode_name__env_ptr)->parse_tree__prog_io_inst_mode_name__parse_bound_inst_list_4_p_0_env_0__F2_15, (MR_Integer) 1)));
                  {
                    (parse_tree__prog_io_inst_mode_name__env_ptr)->parse_tree__prog_io_inst_mode_name__parse_bound_inst_list_4_p_0_env_0__succeeded = parse_tree__prog_data____Unify____cons_id_0_0((parse_tree__prog_io_inst_mode_name__env_ptr)->parse_tree__prog_io_inst_mode_name__parse_bound_inst_list_4_p_0_env_0__ConsId_17, (parse_tree__prog_io_inst_mode_name__env_ptr)->parse_tree__prog_io_inst_mode_name__parse_bound_inst_list_4_p_0_env_0__V_24_24);
                  }
                  if ((parse_tree__prog_io_inst_mode_name__env_ptr)->parse_tree__prog_io_inst_mode_name__parse_bound_inst_list_4_p_0_env_0__succeeded)
                    {
                      parse_tree__prog_io_inst_mode_name__parse_bound_inst_list_4_p_0_1(parse_tree__prog_io_inst_mode_name__env_ptr);
                    }
                }
              }
          }
        }
    }
  }
}

static void MR_CALL 
parse_tree__prog_io_inst_mode_name__parse_bound_inst_list_4_p_0_3(
  void * parse_tree__prog_io_inst_mode_name__env_ptr_arg)
{
  {
    struct parse_tree__prog_io_inst_mode_name__parse_bound_inst_list_4_p_0_env_0_s * parse_tree__prog_io_inst_mode_name__env_ptr = (struct parse_tree__prog_io_inst_mode_name__parse_bound_inst_list_4_p_0_env_0_s *) parse_tree__prog_io_inst_mode_name__env_ptr_arg;

    if (MR_builtin_setjmp((parse_tree__prog_io_inst_mode_name__env_ptr)->parse_tree__prog_io_inst_mode_name__parse_bound_inst_list_4_p_0_env_0__commit_0) == 0)
      {
        {
          MR_Word parse_tree__prog_io_inst_mode_name__V_12_12;

          {
            mercury__list__append_3_p_4((parse_tree__prog_io_inst_mode_name__env_ptr)->parse_tree__prog_io_inst_mode_name__parse_bound_inst_list_4_p_0_env_0__TypeCtorInfo_23_23, &parse_tree__prog_io_inst_mode_name__V_12_12, &(parse_tree__prog_io_inst_mode_name__env_ptr)->parse_tree__prog_io_inst_mode_name__parse_bound_inst_list_4_p_0_env_0__SubList_13, (parse_tree__prog_io_inst_mode_name__env_ptr)->parse_tree__prog_io_inst_mode_name__parse_bound_inst_list_4_p_0_env_0__Functors_11, parse_tree__prog_io_inst_mode_name__parse_bound_inst_list_4_p_0_2, parse_tree__prog_io_inst_mode_name__env_ptr);
          }
        }
        (parse_tree__prog_io_inst_mode_name__env_ptr)->parse_tree__prog_io_inst_mode_name__parse_bound_inst_list_4_p_0_env_0__succeeded = MR_FALSE;
      }
    else
      (parse_tree__prog_io_inst_mode_name__env_ptr)->parse_tree__prog_io_inst_mode_name__parse_bound_inst_list_4_p_0_env_0__succeeded = MR_TRUE;
  }
}

static MR_bool MR_CALL 
parse_tree__prog_io_inst_mode_name__parse_bound_inst_list_4_p_0(
  MR_Word parse_tree__prog_io_inst_mode_name__AllowConstrainedInstVar_5,
  MR_Word parse_tree__prog_io_inst_mode_name__Disj_6,
  MR_Word parse_tree__prog_io_inst_mode_name__Uniqueness_7,
  MR_Word * parse_tree__prog_io_inst_mode_name__Inst_8)
{
  {
    struct parse_tree__prog_io_inst_mode_name__parse_bound_inst_list_4_p_0_env_0_s parse_tree__prog_io_inst_mode_name__env;

    {
      MR_Word parse_tree__prog_io_inst_mode_name__Disjuncts_9;
      MR_Word parse_tree__prog_io_inst_mode_name__Functors0_10;
      MR_Word parse_tree__prog_io_inst_mode_name__V_21_21;

      {
        parse_tree__prog_io_util__disjunction_to_list_2_p_0((MR_Word) &mercury__term__term__type_ctor_info_generic_0, parse_tree__prog_io_inst_mode_name__Disj_6, &parse_tree__prog_io_inst_mode_name__Disjuncts_9);
      }
      {
        (parse_tree__prog_io_inst_mode_name__env).parse_tree__prog_io_inst_mode_name__parse_bound_inst_list_4_p_0_env_0__succeeded = parse_tree__prog_io_inst_mode_name__convert_bound_inst_list_3_p_0(parse_tree__prog_io_inst_mode_name__AllowConstrainedInstVar_5, parse_tree__prog_io_inst_mode_name__Disjuncts_9, &parse_tree__prog_io_inst_mode_name__Functors0_10);
      }
      if ((parse_tree__prog_io_inst_mode_name__env).parse_tree__prog_io_inst_mode_name__parse_bound_inst_list_4_p_0_env_0__succeeded)
        {
          (parse_tree__prog_io_inst_mode_name__env).parse_tree__prog_io_inst_mode_name__parse_bound_inst_list_4_p_0_env_0__TypeCtorInfo_23_23 = (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_bound_inst_0;
          {
            mercury__list__sort_2_p_0((parse_tree__prog_io_inst_mode_name__env).parse_tree__prog_io_inst_mode_name__parse_bound_inst_list_4_p_0_env_0__TypeCtorInfo_23_23, parse_tree__prog_io_inst_mode_name__Functors0_10, &(parse_tree__prog_io_inst_mode_name__env).parse_tree__prog_io_inst_mode_name__parse_bound_inst_list_4_p_0_env_0__Functors_11);
          }
          {
            parse_tree__prog_io_inst_mode_name__parse_bound_inst_list_4_p_0_3(&parse_tree__prog_io_inst_mode_name__env);
          }
          (parse_tree__prog_io_inst_mode_name__env).parse_tree__prog_io_inst_mode_name__parse_bound_inst_list_4_p_0_env_0__succeeded = !((parse_tree__prog_io_inst_mode_name__env).parse_tree__prog_io_inst_mode_name__parse_bound_inst_list_4_p_0_env_0__succeeded);
          if ((parse_tree__prog_io_inst_mode_name__env).parse_tree__prog_io_inst_mode_name__parse_bound_inst_list_4_p_0_env_0__succeeded)
            {
              parse_tree__prog_io_inst_mode_name__V_21_21 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
              {
                MR_Word base;
                base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL));
                *parse_tree__prog_io_inst_mode_name__Inst_8 = base;
                MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 0));
                MR_hl_field(MR_mktag(3), base, 1) = ((MR_Box) (parse_tree__prog_io_inst_mode_name__Uniqueness_7));
                MR_hl_field(MR_mktag(3), base, 2) = ((MR_Box) (parse_tree__prog_io_inst_mode_name__V_21_21));
                MR_hl_field(MR_mktag(3), base, 3) = ((MR_Box) ((parse_tree__prog_io_inst_mode_name__env).parse_tree__prog_io_inst_mode_name__parse_bound_inst_list_4_p_0_env_0__Functors_11));
              }
              (parse_tree__prog_io_inst_mode_name__env).parse_tree__prog_io_inst_mode_name__parse_bound_inst_list_4_p_0_env_0__succeeded = MR_TRUE;
            }
        }
      return (parse_tree__prog_io_inst_mode_name__env).parse_tree__prog_io_inst_mode_name__parse_bound_inst_list_4_p_0_env_0__succeeded;
    }
  }
}

static MR_bool MR_CALL 
parse_tree__prog_io_inst_mode_name__convert_higher_order_inst_4_p_0(
  MR_Word parse_tree__prog_io_inst_mode_name__AllowConstrainedInstVar_5,
  MR_Word parse_tree__prog_io_inst_mode_name__BeforeIsTerm_6,
  MR_Word parse_tree__prog_io_inst_mode_name__DetTerm_7,
  MR_Word * parse_tree__prog_io_inst_mode_name__Inst_8)
{
  {
    MR_bool parse_tree__prog_io_inst_mode_name__succeeded = ((MR_tag((MR_Word) parse_tree__prog_io_inst_mode_name__BeforeIsTerm_6)) == (MR_mktag((MR_Integer) 0)));
    MR_String parse_tree__prog_io_inst_mode_name__BeforeIsFunctor_9;
    MR_Word parse_tree__prog_io_inst_mode_name__BeforeIsArgTerms_10;
    MR_Word parse_tree__prog_io_inst_mode_name__V_27_27;
    MR_Word parse_tree__prog_io_inst_mode_name__V_11_11;

    if (parse_tree__prog_io_inst_mode_name__succeeded)
      {
        parse_tree__prog_io_inst_mode_name__V_27_27 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_inst_mode_name__BeforeIsTerm_6, (MR_Integer) 0)));
        parse_tree__prog_io_inst_mode_name__BeforeIsArgTerms_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_inst_mode_name__BeforeIsTerm_6, (MR_Integer) 1)));
        parse_tree__prog_io_inst_mode_name__V_11_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_inst_mode_name__BeforeIsTerm_6, (MR_Integer) 2)));
        parse_tree__prog_io_inst_mode_name__succeeded = ((MR_tag((MR_Word) parse_tree__prog_io_inst_mode_name__V_27_27)) == (MR_mktag((MR_Integer) 0)));
        if (parse_tree__prog_io_inst_mode_name__succeeded)
          {
            parse_tree__prog_io_inst_mode_name__BeforeIsFunctor_9 = ((MR_String) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_inst_mode_name__V_27_27, (MR_Integer) 0)));
            if ((strcmp(parse_tree__prog_io_inst_mode_name__BeforeIsFunctor_9, (MR_String) "=") == 0))
              {
                MR_Word parse_tree__prog_io_inst_mode_name__TypeCtorInfo_53_53;
                MR_Word parse_tree__prog_io_inst_mode_name__FuncTerm_18;
                MR_Word parse_tree__prog_io_inst_mode_name__RetModeTerm_19;
                MR_String parse_tree__prog_io_inst_mode_name__FuncTermFunctor_20;
                MR_Word parse_tree__prog_io_inst_mode_name__ArgModesTerms_21;
                MR_Word parse_tree__prog_io_inst_mode_name__V_28_28;
                MR_Word parse_tree__prog_io_inst_mode_name__V_29_29;
                MR_Word parse_tree__prog_io_inst_mode_name__V_30_30;
                MR_Word parse_tree__prog_io_inst_mode_name__V_31_31;
                MR_Word parse_tree__prog_io_inst_mode_name__V_32_32;
                MR_Word parse_tree__prog_io_inst_mode_name__V_34_34;
                MR_Word parse_tree__prog_io_inst_mode_name__V_35_35;
                MR_Word parse_tree__prog_io_inst_mode_name__V_36_36;
                MR_String parse_tree__prog_io_inst_mode_name__DetString_51;
                MR_Word parse_tree__prog_io_inst_mode_name__V_22_22;
                MR_Word parse_tree__prog_io_inst_mode_name__V_23_23;

                parse_tree__prog_io_inst_mode_name__succeeded = ((MR_tag((MR_Word) parse_tree__prog_io_inst_mode_name__BeforeIsArgTerms_10)) == (MR_mktag((MR_Integer) 1)));
                if (parse_tree__prog_io_inst_mode_name__succeeded)
                  {
                    parse_tree__prog_io_inst_mode_name__FuncTerm_18 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_inst_mode_name__BeforeIsArgTerms_10, (MR_Integer) 0)));
                    parse_tree__prog_io_inst_mode_name__V_28_28 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_inst_mode_name__BeforeIsArgTerms_10, (MR_Integer) 1)));
                    parse_tree__prog_io_inst_mode_name__succeeded = ((MR_tag((MR_Word) parse_tree__prog_io_inst_mode_name__V_28_28)) == (MR_mktag((MR_Integer) 1)));
                    if (parse_tree__prog_io_inst_mode_name__succeeded)
                      {
                        parse_tree__prog_io_inst_mode_name__RetModeTerm_19 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_inst_mode_name__V_28_28, (MR_Integer) 0)));
                        parse_tree__prog_io_inst_mode_name__V_29_29 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_inst_mode_name__V_28_28, (MR_Integer) 1)));
                        parse_tree__prog_io_inst_mode_name__succeeded = (parse_tree__prog_io_inst_mode_name__V_29_29 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
                        if (parse_tree__prog_io_inst_mode_name__succeeded)
                          {
                            parse_tree__prog_io_inst_mode_name__succeeded = ((MR_tag((MR_Word) parse_tree__prog_io_inst_mode_name__FuncTerm_18)) == (MR_mktag((MR_Integer) 0)));
                            if (parse_tree__prog_io_inst_mode_name__succeeded)
                              {
                                parse_tree__prog_io_inst_mode_name__V_30_30 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_inst_mode_name__FuncTerm_18, (MR_Integer) 0)));
                                parse_tree__prog_io_inst_mode_name__ArgModesTerms_21 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_inst_mode_name__FuncTerm_18, (MR_Integer) 1)));
                                parse_tree__prog_io_inst_mode_name__V_22_22 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_inst_mode_name__FuncTerm_18, (MR_Integer) 2)));
                                parse_tree__prog_io_inst_mode_name__succeeded = ((MR_tag((MR_Word) parse_tree__prog_io_inst_mode_name__V_30_30)) == (MR_mktag((MR_Integer) 0)));
                                if (parse_tree__prog_io_inst_mode_name__succeeded)
                                  {
                                    parse_tree__prog_io_inst_mode_name__FuncTermFunctor_20 = ((MR_String) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_inst_mode_name__V_30_30, (MR_Integer) 0)));
                                    parse_tree__prog_io_inst_mode_name__succeeded = ((MR_tag((MR_Word) parse_tree__prog_io_inst_mode_name__DetTerm_7)) == (MR_mktag((MR_Integer) 0)));
                                    if (parse_tree__prog_io_inst_mode_name__succeeded)
                                      {
                                        parse_tree__prog_io_inst_mode_name__V_31_31 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_inst_mode_name__DetTerm_7, (MR_Integer) 0)));
                                        parse_tree__prog_io_inst_mode_name__V_32_32 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_inst_mode_name__DetTerm_7, (MR_Integer) 1)));
                                        parse_tree__prog_io_inst_mode_name__V_23_23 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_inst_mode_name__DetTerm_7, (MR_Integer) 2)));
                                        parse_tree__prog_io_inst_mode_name__succeeded = (parse_tree__prog_io_inst_mode_name__V_32_32 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
                                        if (parse_tree__prog_io_inst_mode_name__succeeded)
                                          {
                                            parse_tree__prog_io_inst_mode_name__succeeded = ((MR_tag((MR_Word) parse_tree__prog_io_inst_mode_name__V_31_31)) == (MR_mktag((MR_Integer) 0)));
                                            if (parse_tree__prog_io_inst_mode_name__succeeded)
                                              {
                                                parse_tree__prog_io_inst_mode_name__DetString_51 = ((MR_String) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_inst_mode_name__V_31_31, (MR_Integer) 0)));
                                                parse_tree__prog_io_inst_mode_name__V_34_34 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
                                                parse_tree__prog_io_inst_mode_name__TypeCtorInfo_53_53 = (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_mode_0;
                                                parse_tree__prog_io_inst_mode_name__V_35_35 = (MR_Integer) 1;
                                                parse_tree__prog_io_inst_mode_name__V_36_36 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
                                                if ((strcmp(parse_tree__prog_io_inst_mode_name__FuncTermFunctor_20, (MR_String) "func") == 0))
                                                  {
                                                    MR_Word parse_tree__prog_io_inst_mode_name__V_39_39;
                                                    MR_Word parse_tree__prog_io_inst_mode_name__V_40_40;
                                                    MR_Word parse_tree__prog_io_inst_mode_name__ArgModes0_55;
                                                    MR_Word parse_tree__prog_io_inst_mode_name__RetMode_56;
                                                    MR_Word parse_tree__prog_io_inst_mode_name__FuncInst_57;
                                                    MR_Word parse_tree__prog_io_inst_mode_name__V_58_58;
                                                    MR_Word parse_tree__prog_io_inst_mode_name__ArgModes_60;
                                                    MR_Word parse_tree__prog_io_inst_mode_name__Detism_61;

                                                    {
                                                      parse_tree__prog_io_inst_mode_name__succeeded = parse_tree__prog_io_inst_mode_name__standard_det_2_p_0(parse_tree__prog_io_inst_mode_name__DetString_51, &parse_tree__prog_io_inst_mode_name__Detism_61);
                                                    }
                                                    if (parse_tree__prog_io_inst_mode_name__succeeded)
                                                      {
                                                        {
                                                          parse_tree__prog_io_inst_mode_name__succeeded = parse_tree__prog_io_inst_mode_name__convert_mode_list_3_p_0(parse_tree__prog_io_inst_mode_name__AllowConstrainedInstVar_5, parse_tree__prog_io_inst_mode_name__ArgModesTerms_21, &parse_tree__prog_io_inst_mode_name__ArgModes0_55);
                                                        }
                                                        if (parse_tree__prog_io_inst_mode_name__succeeded)
                                                          {
                                                            {
                                                              parse_tree__prog_io_inst_mode_name__succeeded = parse_tree__prog_io_inst_mode_name__convert_mode_3_p_0(parse_tree__prog_io_inst_mode_name__AllowConstrainedInstVar_5, parse_tree__prog_io_inst_mode_name__RetModeTerm_19, &parse_tree__prog_io_inst_mode_name__RetMode_56);
                                                            }
                                                            if (parse_tree__prog_io_inst_mode_name__succeeded)
                                                              {
                                                                {
                                                                  parse_tree__prog_io_inst_mode_name__V_58_58 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                                                                  MR_hl_field(MR_mktag(1), parse_tree__prog_io_inst_mode_name__V_58_58, 0) = ((MR_Box) (parse_tree__prog_io_inst_mode_name__RetMode_56));
                                                                  MR_hl_field(MR_mktag(1), parse_tree__prog_io_inst_mode_name__V_58_58, 1) = ((MR_Box) (parse_tree__prog_io_inst_mode_name__V_34_34));
                                                                }
                                                                {
                                                                  mercury__list__append_3_p_1(parse_tree__prog_io_inst_mode_name__TypeCtorInfo_53_53, parse_tree__prog_io_inst_mode_name__ArgModes0_55, parse_tree__prog_io_inst_mode_name__V_58_58, &parse_tree__prog_io_inst_mode_name__ArgModes_60);
                                                                }
                                                                parse_tree__prog_io_inst_mode_name__V_39_39 = (MR_Integer) 0;
                                                                {
                                                                  parse_tree__prog_io_inst_mode_name__FuncInst_57 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
                                                                  MR_hl_field(MR_mktag(0), parse_tree__prog_io_inst_mode_name__FuncInst_57, 0) = ((MR_Box) (parse_tree__prog_io_inst_mode_name__V_35_35));
                                                                  MR_hl_field(MR_mktag(0), parse_tree__prog_io_inst_mode_name__FuncInst_57, 1) = ((MR_Box) (parse_tree__prog_io_inst_mode_name__ArgModes_60));
                                                                  MR_hl_field(MR_mktag(0), parse_tree__prog_io_inst_mode_name__FuncInst_57, 2) = ((MR_Box) (parse_tree__prog_io_inst_mode_name__V_36_36));
                                                                  MR_hl_field(MR_mktag(0), parse_tree__prog_io_inst_mode_name__FuncInst_57, 3) = ((MR_Box) (parse_tree__prog_io_inst_mode_name__Detism_61));
                                                                }
                                                                parse_tree__prog_io_inst_mode_name__V_40_40 = (MR_Word) MR_mkword(MR_mktag(1), (MR_Word) parse_tree__prog_io_inst_mode_name__FuncInst_57);
                                                                {
                                                                  MR_Word base;
                                                                  base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
                                                                  *parse_tree__prog_io_inst_mode_name__Inst_8 = base;
                                                                  MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
                                                                  MR_hl_field(MR_mktag(3), base, 1) = ((MR_Box) (parse_tree__prog_io_inst_mode_name__V_39_39));
                                                                  MR_hl_field(MR_mktag(3), base, 2) = ((MR_Box) (parse_tree__prog_io_inst_mode_name__V_40_40));
                                                                }
                                                                parse_tree__prog_io_inst_mode_name__succeeded = MR_TRUE;
                                                              }
                                                          }
                                                      }
                                                  }
                                                else
                                                if ((strcmp(parse_tree__prog_io_inst_mode_name__FuncTermFunctor_20, (MR_String) "any_func") == 0))
                                                  {
                                                    MR_Word parse_tree__prog_io_inst_mode_name__ArgModes0_24;
                                                    MR_Word parse_tree__prog_io_inst_mode_name__RetMode_25;
                                                    MR_Word parse_tree__prog_io_inst_mode_name__FuncInst_26;
                                                    MR_Word parse_tree__prog_io_inst_mode_name__V_33_33;
                                                    MR_Word parse_tree__prog_io_inst_mode_name__V_37_37;
                                                    MR_Word parse_tree__prog_io_inst_mode_name__V_38_38;
                                                    MR_Word parse_tree__prog_io_inst_mode_name__ArgModes_50;
                                                    MR_Word parse_tree__prog_io_inst_mode_name__Detism_52;

                                                    {
                                                      parse_tree__prog_io_inst_mode_name__succeeded = parse_tree__prog_io_inst_mode_name__standard_det_2_p_0(parse_tree__prog_io_inst_mode_name__DetString_51, &parse_tree__prog_io_inst_mode_name__Detism_52);
                                                    }
                                                    if (parse_tree__prog_io_inst_mode_name__succeeded)
                                                      {
                                                        {
                                                          parse_tree__prog_io_inst_mode_name__succeeded = parse_tree__prog_io_inst_mode_name__convert_mode_list_3_p_0(parse_tree__prog_io_inst_mode_name__AllowConstrainedInstVar_5, parse_tree__prog_io_inst_mode_name__ArgModesTerms_21, &parse_tree__prog_io_inst_mode_name__ArgModes0_24);
                                                        }
                                                        if (parse_tree__prog_io_inst_mode_name__succeeded)
                                                          {
                                                            {
                                                              parse_tree__prog_io_inst_mode_name__succeeded = parse_tree__prog_io_inst_mode_name__convert_mode_3_p_0(parse_tree__prog_io_inst_mode_name__AllowConstrainedInstVar_5, parse_tree__prog_io_inst_mode_name__RetModeTerm_19, &parse_tree__prog_io_inst_mode_name__RetMode_25);
                                                            }
                                                            if (parse_tree__prog_io_inst_mode_name__succeeded)
                                                              {
                                                                {
                                                                  parse_tree__prog_io_inst_mode_name__V_33_33 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                                                                  MR_hl_field(MR_mktag(1), parse_tree__prog_io_inst_mode_name__V_33_33, 0) = ((MR_Box) (parse_tree__prog_io_inst_mode_name__RetMode_25));
                                                                  MR_hl_field(MR_mktag(1), parse_tree__prog_io_inst_mode_name__V_33_33, 1) = ((MR_Box) (parse_tree__prog_io_inst_mode_name__V_34_34));
                                                                }
                                                                {
                                                                  mercury__list__append_3_p_1(parse_tree__prog_io_inst_mode_name__TypeCtorInfo_53_53, parse_tree__prog_io_inst_mode_name__ArgModes0_24, parse_tree__prog_io_inst_mode_name__V_33_33, &parse_tree__prog_io_inst_mode_name__ArgModes_50);
                                                                }
                                                                parse_tree__prog_io_inst_mode_name__V_37_37 = (MR_Integer) 0;
                                                                {
                                                                  parse_tree__prog_io_inst_mode_name__FuncInst_26 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
                                                                  MR_hl_field(MR_mktag(0), parse_tree__prog_io_inst_mode_name__FuncInst_26, 0) = ((MR_Box) (parse_tree__prog_io_inst_mode_name__V_35_35));
                                                                  MR_hl_field(MR_mktag(0), parse_tree__prog_io_inst_mode_name__FuncInst_26, 1) = ((MR_Box) (parse_tree__prog_io_inst_mode_name__ArgModes_50));
                                                                  MR_hl_field(MR_mktag(0), parse_tree__prog_io_inst_mode_name__FuncInst_26, 2) = ((MR_Box) (parse_tree__prog_io_inst_mode_name__V_36_36));
                                                                  MR_hl_field(MR_mktag(0), parse_tree__prog_io_inst_mode_name__FuncInst_26, 3) = ((MR_Box) (parse_tree__prog_io_inst_mode_name__Detism_52));
                                                                }
                                                                parse_tree__prog_io_inst_mode_name__V_38_38 = (MR_Word) MR_mkword(MR_mktag(1), (MR_Word) parse_tree__prog_io_inst_mode_name__FuncInst_26);
                                                                {
                                                                  MR_Word base;
                                                                  base = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                                                                  *parse_tree__prog_io_inst_mode_name__Inst_8 = base;
                                                                  MR_hl_field(MR_mktag(2), base, 0) = ((MR_Box) (parse_tree__prog_io_inst_mode_name__V_37_37));
                                                                  MR_hl_field(MR_mktag(2), base, 1) = ((MR_Box) (parse_tree__prog_io_inst_mode_name__V_38_38));
                                                                }
                                                                parse_tree__prog_io_inst_mode_name__succeeded = MR_TRUE;
                                                              }
                                                          }
                                                      }
                                                  }
                                                else
                                                  parse_tree__prog_io_inst_mode_name__succeeded = MR_FALSE;
                                              }
                                          }
                                      }
                                  }
                              }
                          }
                      }
                  }
              }
            else
            if ((((strcmp(parse_tree__prog_io_inst_mode_name__BeforeIsFunctor_9, (MR_String) "any_pred") == 0)) || ((strcmp(parse_tree__prog_io_inst_mode_name__BeforeIsFunctor_9, (MR_String) "pred") == 0))))
              {
                MR_Word parse_tree__prog_io_inst_mode_name__ArgModes_13;
                MR_String parse_tree__prog_io_inst_mode_name__DetString_14;
                MR_Word parse_tree__prog_io_inst_mode_name__Detism_16;
                MR_Word parse_tree__prog_io_inst_mode_name__PredInst_17;
                MR_Word parse_tree__prog_io_inst_mode_name__V_41_41;
                MR_Word parse_tree__prog_io_inst_mode_name__V_42_42;
                MR_Word parse_tree__prog_io_inst_mode_name__V_43_43;
                MR_Word parse_tree__prog_io_inst_mode_name__V_44_44;
                MR_Word parse_tree__prog_io_inst_mode_name__V_15_15;

                {
                  parse_tree__prog_io_inst_mode_name__succeeded = parse_tree__prog_io_inst_mode_name__convert_mode_list_3_p_0(parse_tree__prog_io_inst_mode_name__AllowConstrainedInstVar_5, parse_tree__prog_io_inst_mode_name__BeforeIsArgTerms_10, &parse_tree__prog_io_inst_mode_name__ArgModes_13);
                }
                if (parse_tree__prog_io_inst_mode_name__succeeded)
                  {
                    parse_tree__prog_io_inst_mode_name__succeeded = ((MR_tag((MR_Word) parse_tree__prog_io_inst_mode_name__DetTerm_7)) == (MR_mktag((MR_Integer) 0)));
                    if (parse_tree__prog_io_inst_mode_name__succeeded)
                      {
                        parse_tree__prog_io_inst_mode_name__V_41_41 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_inst_mode_name__DetTerm_7, (MR_Integer) 0)));
                        parse_tree__prog_io_inst_mode_name__V_42_42 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_inst_mode_name__DetTerm_7, (MR_Integer) 1)));
                        parse_tree__prog_io_inst_mode_name__V_15_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_inst_mode_name__DetTerm_7, (MR_Integer) 2)));
                        parse_tree__prog_io_inst_mode_name__succeeded = (parse_tree__prog_io_inst_mode_name__V_42_42 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
                        if (parse_tree__prog_io_inst_mode_name__succeeded)
                          {
                            parse_tree__prog_io_inst_mode_name__succeeded = ((MR_tag((MR_Word) parse_tree__prog_io_inst_mode_name__V_41_41)) == (MR_mktag((MR_Integer) 0)));
                            if (parse_tree__prog_io_inst_mode_name__succeeded)
                              {
                                parse_tree__prog_io_inst_mode_name__DetString_14 = ((MR_String) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_inst_mode_name__V_41_41, (MR_Integer) 0)));
                                {
                                  parse_tree__prog_io_inst_mode_name__succeeded = parse_tree__prog_io_inst_mode_name__standard_det_2_p_0(parse_tree__prog_io_inst_mode_name__DetString_14, &parse_tree__prog_io_inst_mode_name__Detism_16);
                                }
                                if (parse_tree__prog_io_inst_mode_name__succeeded)
                                  {
                                    parse_tree__prog_io_inst_mode_name__V_43_43 = (MR_Integer) 0;
                                    parse_tree__prog_io_inst_mode_name__V_44_44 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
                                    {
                                      parse_tree__prog_io_inst_mode_name__PredInst_17 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
                                      MR_hl_field(MR_mktag(0), parse_tree__prog_io_inst_mode_name__PredInst_17, 0) = ((MR_Box) (parse_tree__prog_io_inst_mode_name__V_43_43));
                                      MR_hl_field(MR_mktag(0), parse_tree__prog_io_inst_mode_name__PredInst_17, 1) = ((MR_Box) (parse_tree__prog_io_inst_mode_name__ArgModes_13));
                                      MR_hl_field(MR_mktag(0), parse_tree__prog_io_inst_mode_name__PredInst_17, 2) = ((MR_Box) (parse_tree__prog_io_inst_mode_name__V_44_44));
                                      MR_hl_field(MR_mktag(0), parse_tree__prog_io_inst_mode_name__PredInst_17, 3) = ((MR_Box) (parse_tree__prog_io_inst_mode_name__Detism_16));
                                    }
                                    if ((strcmp(parse_tree__prog_io_inst_mode_name__BeforeIsFunctor_9, (MR_String) "pred") == 0))
                                      {
                                        MR_Word parse_tree__prog_io_inst_mode_name__V_48_48 = (MR_Word) MR_mkword(MR_mktag(1), (MR_Word) parse_tree__prog_io_inst_mode_name__PredInst_17);

                                        {
                                          MR_Word base;
                                          base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
                                          *parse_tree__prog_io_inst_mode_name__Inst_8 = base;
                                          MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
                                          MR_hl_field(MR_mktag(3), base, 1) = ((MR_Box) ((MR_Integer) 0));
                                          MR_hl_field(MR_mktag(3), base, 2) = ((MR_Box) (parse_tree__prog_io_inst_mode_name__V_48_48));
                                        }
                                      }
                                    else
                                      {
                                        MR_Word parse_tree__prog_io_inst_mode_name__V_46_46 = (MR_Word) MR_mkword(MR_mktag(1), (MR_Word) parse_tree__prog_io_inst_mode_name__PredInst_17);

                                        {
                                          MR_Word base;
                                          base = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                                          *parse_tree__prog_io_inst_mode_name__Inst_8 = base;
                                          MR_hl_field(MR_mktag(2), base, 0) = ((MR_Box) ((MR_Integer) 0));
                                          MR_hl_field(MR_mktag(2), base, 1) = ((MR_Box) (parse_tree__prog_io_inst_mode_name__V_46_46));
                                        }
                                      }
                                    parse_tree__prog_io_inst_mode_name__succeeded = MR_TRUE;
                                  }
                              }
                          }
                      }
                  }
              }
            else
              parse_tree__prog_io_inst_mode_name__succeeded = MR_FALSE;
          }
      }
    return parse_tree__prog_io_inst_mode_name__succeeded;
  }
}

static MR_bool MR_CALL 
parse_tree__prog_io_inst_mode_name__convert_higher_order_mode_4_p_0(
  MR_Word parse_tree__prog_io_inst_mode_name__AllowConstrainedInstVar_5,
  MR_Word parse_tree__prog_io_inst_mode_name__BeforeIsTerm_6,
  MR_Word parse_tree__prog_io_inst_mode_name__DetTerm_7,
  MR_Word * parse_tree__prog_io_inst_mode_name__Mode_8)
{
  {
    MR_bool parse_tree__prog_io_inst_mode_name__succeeded = ((MR_tag((MR_Word) parse_tree__prog_io_inst_mode_name__BeforeIsTerm_6)) == (MR_mktag((MR_Integer) 0)));
    MR_String parse_tree__prog_io_inst_mode_name__BeforeIsFunctor_9;
    MR_Word parse_tree__prog_io_inst_mode_name__BeforeIsArgTerms_10;
    MR_Word parse_tree__prog_io_inst_mode_name__V_28_28;
    MR_Word parse_tree__prog_io_inst_mode_name__V_11_11;

    if (parse_tree__prog_io_inst_mode_name__succeeded)
      {
        parse_tree__prog_io_inst_mode_name__V_28_28 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_inst_mode_name__BeforeIsTerm_6, (MR_Integer) 0)));
        parse_tree__prog_io_inst_mode_name__BeforeIsArgTerms_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_inst_mode_name__BeforeIsTerm_6, (MR_Integer) 1)));
        parse_tree__prog_io_inst_mode_name__V_11_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_inst_mode_name__BeforeIsTerm_6, (MR_Integer) 2)));
        parse_tree__prog_io_inst_mode_name__succeeded = ((MR_tag((MR_Word) parse_tree__prog_io_inst_mode_name__V_28_28)) == (MR_mktag((MR_Integer) 0)));
        if (parse_tree__prog_io_inst_mode_name__succeeded)
          {
            parse_tree__prog_io_inst_mode_name__BeforeIsFunctor_9 = ((MR_String) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_inst_mode_name__V_28_28, (MR_Integer) 0)));
            if ((strcmp(parse_tree__prog_io_inst_mode_name__BeforeIsFunctor_9, (MR_String) "=") == 0))
              {
                MR_Word parse_tree__prog_io_inst_mode_name__TypeCtorInfo_57_57;
                MR_Word parse_tree__prog_io_inst_mode_name__FuncTerm_19;
                MR_Word parse_tree__prog_io_inst_mode_name__RetModeTerm_20;
                MR_String parse_tree__prog_io_inst_mode_name__FuncTermFunctor_21;
                MR_Word parse_tree__prog_io_inst_mode_name__ArgModesTerms_22;
                MR_Word parse_tree__prog_io_inst_mode_name__V_29_29;
                MR_Word parse_tree__prog_io_inst_mode_name__V_30_30;
                MR_Word parse_tree__prog_io_inst_mode_name__V_31_31;
                MR_Word parse_tree__prog_io_inst_mode_name__V_32_32;
                MR_Word parse_tree__prog_io_inst_mode_name__V_33_33;
                MR_Word parse_tree__prog_io_inst_mode_name__V_35_35;
                MR_Word parse_tree__prog_io_inst_mode_name__V_36_36;
                MR_Word parse_tree__prog_io_inst_mode_name__V_37_37;
                MR_String parse_tree__prog_io_inst_mode_name__DetString_54;
                MR_Word parse_tree__prog_io_inst_mode_name__Inst_56;
                MR_Word parse_tree__prog_io_inst_mode_name__V_23_23;
                MR_Word parse_tree__prog_io_inst_mode_name__V_24_24;

                parse_tree__prog_io_inst_mode_name__succeeded = ((MR_tag((MR_Word) parse_tree__prog_io_inst_mode_name__BeforeIsArgTerms_10)) == (MR_mktag((MR_Integer) 1)));
                if (parse_tree__prog_io_inst_mode_name__succeeded)
                  {
                    parse_tree__prog_io_inst_mode_name__FuncTerm_19 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_inst_mode_name__BeforeIsArgTerms_10, (MR_Integer) 0)));
                    parse_tree__prog_io_inst_mode_name__V_29_29 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_inst_mode_name__BeforeIsArgTerms_10, (MR_Integer) 1)));
                    parse_tree__prog_io_inst_mode_name__succeeded = ((MR_tag((MR_Word) parse_tree__prog_io_inst_mode_name__V_29_29)) == (MR_mktag((MR_Integer) 1)));
                    if (parse_tree__prog_io_inst_mode_name__succeeded)
                      {
                        parse_tree__prog_io_inst_mode_name__RetModeTerm_20 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_inst_mode_name__V_29_29, (MR_Integer) 0)));
                        parse_tree__prog_io_inst_mode_name__V_30_30 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_inst_mode_name__V_29_29, (MR_Integer) 1)));
                        parse_tree__prog_io_inst_mode_name__succeeded = (parse_tree__prog_io_inst_mode_name__V_30_30 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
                        if (parse_tree__prog_io_inst_mode_name__succeeded)
                          {
                            parse_tree__prog_io_inst_mode_name__succeeded = ((MR_tag((MR_Word) parse_tree__prog_io_inst_mode_name__FuncTerm_19)) == (MR_mktag((MR_Integer) 0)));
                            if (parse_tree__prog_io_inst_mode_name__succeeded)
                              {
                                parse_tree__prog_io_inst_mode_name__V_31_31 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_inst_mode_name__FuncTerm_19, (MR_Integer) 0)));
                                parse_tree__prog_io_inst_mode_name__ArgModesTerms_22 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_inst_mode_name__FuncTerm_19, (MR_Integer) 1)));
                                parse_tree__prog_io_inst_mode_name__V_23_23 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_inst_mode_name__FuncTerm_19, (MR_Integer) 2)));
                                parse_tree__prog_io_inst_mode_name__succeeded = ((MR_tag((MR_Word) parse_tree__prog_io_inst_mode_name__V_31_31)) == (MR_mktag((MR_Integer) 0)));
                                if (parse_tree__prog_io_inst_mode_name__succeeded)
                                  {
                                    parse_tree__prog_io_inst_mode_name__FuncTermFunctor_21 = ((MR_String) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_inst_mode_name__V_31_31, (MR_Integer) 0)));
                                    parse_tree__prog_io_inst_mode_name__succeeded = ((MR_tag((MR_Word) parse_tree__prog_io_inst_mode_name__DetTerm_7)) == (MR_mktag((MR_Integer) 0)));
                                    if (parse_tree__prog_io_inst_mode_name__succeeded)
                                      {
                                        parse_tree__prog_io_inst_mode_name__V_32_32 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_inst_mode_name__DetTerm_7, (MR_Integer) 0)));
                                        parse_tree__prog_io_inst_mode_name__V_33_33 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_inst_mode_name__DetTerm_7, (MR_Integer) 1)));
                                        parse_tree__prog_io_inst_mode_name__V_24_24 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_inst_mode_name__DetTerm_7, (MR_Integer) 2)));
                                        parse_tree__prog_io_inst_mode_name__succeeded = (parse_tree__prog_io_inst_mode_name__V_33_33 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
                                        if (parse_tree__prog_io_inst_mode_name__succeeded)
                                          {
                                            parse_tree__prog_io_inst_mode_name__succeeded = ((MR_tag((MR_Word) parse_tree__prog_io_inst_mode_name__V_32_32)) == (MR_mktag((MR_Integer) 0)));
                                            if (parse_tree__prog_io_inst_mode_name__succeeded)
                                              {
                                                parse_tree__prog_io_inst_mode_name__DetString_54 = ((MR_String) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_inst_mode_name__V_32_32, (MR_Integer) 0)));
                                                parse_tree__prog_io_inst_mode_name__V_35_35 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
                                                parse_tree__prog_io_inst_mode_name__TypeCtorInfo_57_57 = (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_mode_0;
                                                parse_tree__prog_io_inst_mode_name__V_36_36 = (MR_Integer) 1;
                                                parse_tree__prog_io_inst_mode_name__V_37_37 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
                                                if ((strcmp(parse_tree__prog_io_inst_mode_name__FuncTermFunctor_21, (MR_String) "func") == 0))
                                                  {
                                                    MR_Word parse_tree__prog_io_inst_mode_name__V_40_40;
                                                    MR_Word parse_tree__prog_io_inst_mode_name__V_41_41;
                                                    MR_Word parse_tree__prog_io_inst_mode_name__ArgModes0_59;
                                                    MR_Word parse_tree__prog_io_inst_mode_name__RetMode_60;
                                                    MR_Word parse_tree__prog_io_inst_mode_name__FuncInstInfo_61;
                                                    MR_Word parse_tree__prog_io_inst_mode_name__V_62_62;
                                                    MR_Word parse_tree__prog_io_inst_mode_name__ArgModes_64;
                                                    MR_Word parse_tree__prog_io_inst_mode_name__Detism_65;

                                                    {
                                                      parse_tree__prog_io_inst_mode_name__succeeded = parse_tree__prog_io_inst_mode_name__standard_det_2_p_0(parse_tree__prog_io_inst_mode_name__DetString_54, &parse_tree__prog_io_inst_mode_name__Detism_65);
                                                    }
                                                    if (parse_tree__prog_io_inst_mode_name__succeeded)
                                                      {
                                                        {
                                                          parse_tree__prog_io_inst_mode_name__succeeded = parse_tree__prog_io_inst_mode_name__convert_mode_list_3_p_0(parse_tree__prog_io_inst_mode_name__AllowConstrainedInstVar_5, parse_tree__prog_io_inst_mode_name__ArgModesTerms_22, &parse_tree__prog_io_inst_mode_name__ArgModes0_59);
                                                        }
                                                        if (parse_tree__prog_io_inst_mode_name__succeeded)
                                                          {
                                                            {
                                                              parse_tree__prog_io_inst_mode_name__succeeded = parse_tree__prog_io_inst_mode_name__convert_mode_3_p_0(parse_tree__prog_io_inst_mode_name__AllowConstrainedInstVar_5, parse_tree__prog_io_inst_mode_name__RetModeTerm_20, &parse_tree__prog_io_inst_mode_name__RetMode_60);
                                                            }
                                                            if (parse_tree__prog_io_inst_mode_name__succeeded)
                                                              {
                                                                {
                                                                  parse_tree__prog_io_inst_mode_name__V_62_62 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                                                                  MR_hl_field(MR_mktag(1), parse_tree__prog_io_inst_mode_name__V_62_62, 0) = ((MR_Box) (parse_tree__prog_io_inst_mode_name__RetMode_60));
                                                                  MR_hl_field(MR_mktag(1), parse_tree__prog_io_inst_mode_name__V_62_62, 1) = ((MR_Box) (parse_tree__prog_io_inst_mode_name__V_35_35));
                                                                }
                                                                {
                                                                  mercury__list__append_3_p_1(parse_tree__prog_io_inst_mode_name__TypeCtorInfo_57_57, parse_tree__prog_io_inst_mode_name__ArgModes0_59, parse_tree__prog_io_inst_mode_name__V_62_62, &parse_tree__prog_io_inst_mode_name__ArgModes_64);
                                                                }
                                                                parse_tree__prog_io_inst_mode_name__V_40_40 = (MR_Integer) 0;
                                                                {
                                                                  parse_tree__prog_io_inst_mode_name__FuncInstInfo_61 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
                                                                  MR_hl_field(MR_mktag(0), parse_tree__prog_io_inst_mode_name__FuncInstInfo_61, 0) = ((MR_Box) (parse_tree__prog_io_inst_mode_name__V_36_36));
                                                                  MR_hl_field(MR_mktag(0), parse_tree__prog_io_inst_mode_name__FuncInstInfo_61, 1) = ((MR_Box) (parse_tree__prog_io_inst_mode_name__ArgModes_64));
                                                                  MR_hl_field(MR_mktag(0), parse_tree__prog_io_inst_mode_name__FuncInstInfo_61, 2) = ((MR_Box) (parse_tree__prog_io_inst_mode_name__V_37_37));
                                                                  MR_hl_field(MR_mktag(0), parse_tree__prog_io_inst_mode_name__FuncInstInfo_61, 3) = ((MR_Box) (parse_tree__prog_io_inst_mode_name__Detism_65));
                                                                }
                                                                parse_tree__prog_io_inst_mode_name__V_41_41 = (MR_Word) MR_mkword(MR_mktag(1), (MR_Word) parse_tree__prog_io_inst_mode_name__FuncInstInfo_61);
                                                                {
                                                                  parse_tree__prog_io_inst_mode_name__Inst_56 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
                                                                  MR_hl_field(MR_mktag(3), parse_tree__prog_io_inst_mode_name__Inst_56, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
                                                                  MR_hl_field(MR_mktag(3), parse_tree__prog_io_inst_mode_name__Inst_56, 1) = ((MR_Box) (parse_tree__prog_io_inst_mode_name__V_40_40));
                                                                  MR_hl_field(MR_mktag(3), parse_tree__prog_io_inst_mode_name__Inst_56, 2) = ((MR_Box) (parse_tree__prog_io_inst_mode_name__V_41_41));
                                                                }
                                                                parse_tree__prog_io_inst_mode_name__succeeded = MR_TRUE;
                                                              }
                                                          }
                                                      }
                                                  }
                                                else
                                                if ((strcmp(parse_tree__prog_io_inst_mode_name__FuncTermFunctor_21, (MR_String) "any_func") == 0))
                                                  {
                                                    MR_Word parse_tree__prog_io_inst_mode_name__ArgModes0_25;
                                                    MR_Word parse_tree__prog_io_inst_mode_name__RetMode_26;
                                                    MR_Word parse_tree__prog_io_inst_mode_name__FuncInstInfo_27;
                                                    MR_Word parse_tree__prog_io_inst_mode_name__V_34_34;
                                                    MR_Word parse_tree__prog_io_inst_mode_name__V_38_38;
                                                    MR_Word parse_tree__prog_io_inst_mode_name__V_39_39;
                                                    MR_Word parse_tree__prog_io_inst_mode_name__ArgModes_53;
                                                    MR_Word parse_tree__prog_io_inst_mode_name__Detism_55;

                                                    {
                                                      parse_tree__prog_io_inst_mode_name__succeeded = parse_tree__prog_io_inst_mode_name__standard_det_2_p_0(parse_tree__prog_io_inst_mode_name__DetString_54, &parse_tree__prog_io_inst_mode_name__Detism_55);
                                                    }
                                                    if (parse_tree__prog_io_inst_mode_name__succeeded)
                                                      {
                                                        {
                                                          parse_tree__prog_io_inst_mode_name__succeeded = parse_tree__prog_io_inst_mode_name__convert_mode_list_3_p_0(parse_tree__prog_io_inst_mode_name__AllowConstrainedInstVar_5, parse_tree__prog_io_inst_mode_name__ArgModesTerms_22, &parse_tree__prog_io_inst_mode_name__ArgModes0_25);
                                                        }
                                                        if (parse_tree__prog_io_inst_mode_name__succeeded)
                                                          {
                                                            {
                                                              parse_tree__prog_io_inst_mode_name__succeeded = parse_tree__prog_io_inst_mode_name__convert_mode_3_p_0(parse_tree__prog_io_inst_mode_name__AllowConstrainedInstVar_5, parse_tree__prog_io_inst_mode_name__RetModeTerm_20, &parse_tree__prog_io_inst_mode_name__RetMode_26);
                                                            }
                                                            if (parse_tree__prog_io_inst_mode_name__succeeded)
                                                              {
                                                                {
                                                                  parse_tree__prog_io_inst_mode_name__V_34_34 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                                                                  MR_hl_field(MR_mktag(1), parse_tree__prog_io_inst_mode_name__V_34_34, 0) = ((MR_Box) (parse_tree__prog_io_inst_mode_name__RetMode_26));
                                                                  MR_hl_field(MR_mktag(1), parse_tree__prog_io_inst_mode_name__V_34_34, 1) = ((MR_Box) (parse_tree__prog_io_inst_mode_name__V_35_35));
                                                                }
                                                                {
                                                                  mercury__list__append_3_p_1(parse_tree__prog_io_inst_mode_name__TypeCtorInfo_57_57, parse_tree__prog_io_inst_mode_name__ArgModes0_25, parse_tree__prog_io_inst_mode_name__V_34_34, &parse_tree__prog_io_inst_mode_name__ArgModes_53);
                                                                }
                                                                parse_tree__prog_io_inst_mode_name__V_38_38 = (MR_Integer) 0;
                                                                {
                                                                  parse_tree__prog_io_inst_mode_name__FuncInstInfo_27 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
                                                                  MR_hl_field(MR_mktag(0), parse_tree__prog_io_inst_mode_name__FuncInstInfo_27, 0) = ((MR_Box) (parse_tree__prog_io_inst_mode_name__V_36_36));
                                                                  MR_hl_field(MR_mktag(0), parse_tree__prog_io_inst_mode_name__FuncInstInfo_27, 1) = ((MR_Box) (parse_tree__prog_io_inst_mode_name__ArgModes_53));
                                                                  MR_hl_field(MR_mktag(0), parse_tree__prog_io_inst_mode_name__FuncInstInfo_27, 2) = ((MR_Box) (parse_tree__prog_io_inst_mode_name__V_37_37));
                                                                  MR_hl_field(MR_mktag(0), parse_tree__prog_io_inst_mode_name__FuncInstInfo_27, 3) = ((MR_Box) (parse_tree__prog_io_inst_mode_name__Detism_55));
                                                                }
                                                                parse_tree__prog_io_inst_mode_name__V_39_39 = (MR_Word) MR_mkword(MR_mktag(1), (MR_Word) parse_tree__prog_io_inst_mode_name__FuncInstInfo_27);
                                                                {
                                                                  parse_tree__prog_io_inst_mode_name__Inst_56 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                                                                  MR_hl_field(MR_mktag(2), parse_tree__prog_io_inst_mode_name__Inst_56, 0) = ((MR_Box) (parse_tree__prog_io_inst_mode_name__V_38_38));
                                                                  MR_hl_field(MR_mktag(2), parse_tree__prog_io_inst_mode_name__Inst_56, 1) = ((MR_Box) (parse_tree__prog_io_inst_mode_name__V_39_39));
                                                                }
                                                                parse_tree__prog_io_inst_mode_name__succeeded = MR_TRUE;
                                                              }
                                                          }
                                                      }
                                                  }
                                                else
                                                  parse_tree__prog_io_inst_mode_name__succeeded = MR_FALSE;
                                                if (parse_tree__prog_io_inst_mode_name__succeeded)
                                                  {
                                                    {
                                                      MR_Word base;
                                                      base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
                                                      *parse_tree__prog_io_inst_mode_name__Mode_8 = base;
                                                      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (parse_tree__prog_io_inst_mode_name__Inst_56));
                                                      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (parse_tree__prog_io_inst_mode_name__Inst_56));
                                                    }
                                                    parse_tree__prog_io_inst_mode_name__succeeded = MR_TRUE;
                                                  }
                                              }
                                          }
                                      }
                                  }
                              }
                          }
                      }
                  }
              }
            else
            if ((((strcmp(parse_tree__prog_io_inst_mode_name__BeforeIsFunctor_9, (MR_String) "any_pred") == 0)) || ((strcmp(parse_tree__prog_io_inst_mode_name__BeforeIsFunctor_9, (MR_String) "pred") == 0))))
              {
                MR_Word parse_tree__prog_io_inst_mode_name__ArgModes_13;
                MR_String parse_tree__prog_io_inst_mode_name__DetString_14;
                MR_Word parse_tree__prog_io_inst_mode_name__Detism_16;
                MR_Word parse_tree__prog_io_inst_mode_name__PredInstInfo_17;
                MR_Word parse_tree__prog_io_inst_mode_name__Inst_18;
                MR_Word parse_tree__prog_io_inst_mode_name__V_43_43;
                MR_Word parse_tree__prog_io_inst_mode_name__V_44_44;
                MR_Word parse_tree__prog_io_inst_mode_name__V_45_45;
                MR_Word parse_tree__prog_io_inst_mode_name__V_46_46;
                MR_Word parse_tree__prog_io_inst_mode_name__V_15_15;

                {
                  parse_tree__prog_io_inst_mode_name__succeeded = parse_tree__prog_io_inst_mode_name__convert_mode_list_3_p_0(parse_tree__prog_io_inst_mode_name__AllowConstrainedInstVar_5, parse_tree__prog_io_inst_mode_name__BeforeIsArgTerms_10, &parse_tree__prog_io_inst_mode_name__ArgModes_13);
                }
                if (parse_tree__prog_io_inst_mode_name__succeeded)
                  {
                    parse_tree__prog_io_inst_mode_name__succeeded = ((MR_tag((MR_Word) parse_tree__prog_io_inst_mode_name__DetTerm_7)) == (MR_mktag((MR_Integer) 0)));
                    if (parse_tree__prog_io_inst_mode_name__succeeded)
                      {
                        parse_tree__prog_io_inst_mode_name__V_43_43 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_inst_mode_name__DetTerm_7, (MR_Integer) 0)));
                        parse_tree__prog_io_inst_mode_name__V_44_44 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_inst_mode_name__DetTerm_7, (MR_Integer) 1)));
                        parse_tree__prog_io_inst_mode_name__V_15_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_inst_mode_name__DetTerm_7, (MR_Integer) 2)));
                        parse_tree__prog_io_inst_mode_name__succeeded = (parse_tree__prog_io_inst_mode_name__V_44_44 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
                        if (parse_tree__prog_io_inst_mode_name__succeeded)
                          {
                            parse_tree__prog_io_inst_mode_name__succeeded = ((MR_tag((MR_Word) parse_tree__prog_io_inst_mode_name__V_43_43)) == (MR_mktag((MR_Integer) 0)));
                            if (parse_tree__prog_io_inst_mode_name__succeeded)
                              {
                                parse_tree__prog_io_inst_mode_name__DetString_14 = ((MR_String) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_inst_mode_name__V_43_43, (MR_Integer) 0)));
                                {
                                  parse_tree__prog_io_inst_mode_name__succeeded = parse_tree__prog_io_inst_mode_name__standard_det_2_p_0(parse_tree__prog_io_inst_mode_name__DetString_14, &parse_tree__prog_io_inst_mode_name__Detism_16);
                                }
                                if (parse_tree__prog_io_inst_mode_name__succeeded)
                                  {
                                    parse_tree__prog_io_inst_mode_name__V_45_45 = (MR_Integer) 0;
                                    parse_tree__prog_io_inst_mode_name__V_46_46 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
                                    {
                                      parse_tree__prog_io_inst_mode_name__PredInstInfo_17 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
                                      MR_hl_field(MR_mktag(0), parse_tree__prog_io_inst_mode_name__PredInstInfo_17, 0) = ((MR_Box) (parse_tree__prog_io_inst_mode_name__V_45_45));
                                      MR_hl_field(MR_mktag(0), parse_tree__prog_io_inst_mode_name__PredInstInfo_17, 1) = ((MR_Box) (parse_tree__prog_io_inst_mode_name__ArgModes_13));
                                      MR_hl_field(MR_mktag(0), parse_tree__prog_io_inst_mode_name__PredInstInfo_17, 2) = ((MR_Box) (parse_tree__prog_io_inst_mode_name__V_46_46));
                                      MR_hl_field(MR_mktag(0), parse_tree__prog_io_inst_mode_name__PredInstInfo_17, 3) = ((MR_Box) (parse_tree__prog_io_inst_mode_name__Detism_16));
                                    }
                                    if ((strcmp(parse_tree__prog_io_inst_mode_name__BeforeIsFunctor_9, (MR_String) "pred") == 0))
                                      {
                                        MR_Word parse_tree__prog_io_inst_mode_name__V_50_50 = (MR_Word) MR_mkword(MR_mktag(1), (MR_Word) parse_tree__prog_io_inst_mode_name__PredInstInfo_17);

                                        {
                                          parse_tree__prog_io_inst_mode_name__Inst_18 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
                                          MR_hl_field(MR_mktag(3), parse_tree__prog_io_inst_mode_name__Inst_18, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
                                          MR_hl_field(MR_mktag(3), parse_tree__prog_io_inst_mode_name__Inst_18, 1) = ((MR_Box) ((MR_Integer) 0));
                                          MR_hl_field(MR_mktag(3), parse_tree__prog_io_inst_mode_name__Inst_18, 2) = ((MR_Box) (parse_tree__prog_io_inst_mode_name__V_50_50));
                                        }
                                      }
                                    else
                                      {
                                        MR_Word parse_tree__prog_io_inst_mode_name__V_48_48 = (MR_Word) MR_mkword(MR_mktag(1), (MR_Word) parse_tree__prog_io_inst_mode_name__PredInstInfo_17);

                                        {
                                          parse_tree__prog_io_inst_mode_name__Inst_18 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                                          MR_hl_field(MR_mktag(2), parse_tree__prog_io_inst_mode_name__Inst_18, 0) = ((MR_Box) ((MR_Integer) 0));
                                          MR_hl_field(MR_mktag(2), parse_tree__prog_io_inst_mode_name__Inst_18, 1) = ((MR_Box) (parse_tree__prog_io_inst_mode_name__V_48_48));
                                        }
                                      }
                                    {
                                      MR_Word base;
                                      base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
                                      *parse_tree__prog_io_inst_mode_name__Mode_8 = base;
                                      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (parse_tree__prog_io_inst_mode_name__Inst_18));
                                      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (parse_tree__prog_io_inst_mode_name__Inst_18));
                                    }
                                    parse_tree__prog_io_inst_mode_name__succeeded = MR_TRUE;
                                  }
                              }
                          }
                      }
                  }
              }
            else
              parse_tree__prog_io_inst_mode_name__succeeded = MR_FALSE;
          }
      }
    return parse_tree__prog_io_inst_mode_name__succeeded;
  }
}

MR_bool MR_CALL 
parse_tree__prog_io_inst_mode_name__standard_det_2_p_0(
  MR_String parse_tree__prog_io_inst_mode_name__HeadVar__1_1,
  MR_Word * parse_tree__prog_io_inst_mode_name__HeadVar__2_2)
{
  {
    MR_bool parse_tree__prog_io_inst_mode_name__succeeded;
    MR_Integer parse_tree__prog_io_inst_mode_name__slot_0;
    MR_String parse_tree__prog_io_inst_mode_name__str_1;

    /* hashed string simple lookup switch */
    /* compute the hash value of the input string */
    parse_tree__prog_io_inst_mode_name__slot_0 = ((MR_hash_string4(parse_tree__prog_io_inst_mode_name__HeadVar__1_1)) & (MR_Integer) 31);
    /* hash chain loop */
    do
      {
        /* lookup the string for this hash slot */
        parse_tree__prog_io_inst_mode_name__str_1 = ((&parse_tree__prog_io_inst_mode_name_vector_common_3[0 + parse_tree__prog_io_inst_mode_name__slot_0]))->parse_tree__prog_io_inst_mode_name__vector_common_type_3_0__vct_3_f_0;
        /* did we find a match? */
        if ((((parse_tree__prog_io_inst_mode_name__str_1 != NULL)) && ((strcmp(parse_tree__prog_io_inst_mode_name__str_1, parse_tree__prog_io_inst_mode_name__HeadVar__1_1) == 0))))
          {
            /* we found a match; look up the results */
            *parse_tree__prog_io_inst_mode_name__HeadVar__2_2 = ((&parse_tree__prog_io_inst_mode_name_vector_common_3[0 + parse_tree__prog_io_inst_mode_name__slot_0]))->parse_tree__prog_io_inst_mode_name__vector_common_type_3_0__vct_3_f_2;
            parse_tree__prog_io_inst_mode_name__succeeded = MR_TRUE;
            /* jump out of search loop */
            goto label_0;
          }
        else
          {
            /* no match yet, so get next slot in hash chain */
            parse_tree__prog_io_inst_mode_name__slot_0 = ((&parse_tree__prog_io_inst_mode_name_vector_common_3[0 + parse_tree__prog_io_inst_mode_name__slot_0]))->parse_tree__prog_io_inst_mode_name__vector_common_type_3_0__vct_3_f_1;
          }
      }
    while ((parse_tree__prog_io_inst_mode_name__slot_0 >= (MR_Integer) 0));
    parse_tree__prog_io_inst_mode_name__succeeded = MR_FALSE;
  label_0:;
    return parse_tree__prog_io_inst_mode_name__succeeded;
  }
}

MR_bool MR_CALL 
parse_tree__prog_io_inst_mode_name__is_known_inst_name_1_p_0(
  MR_String parse_tree__prog_io_inst_mode_name__Name_2)
{
  {
    MR_bool parse_tree__prog_io_inst_mode_name__succeeded;
    MR_Word parse_tree__prog_io_inst_mode_name__V_3_3;

    {
      parse_tree__prog_io_inst_mode_name__succeeded = parse_tree__prog_io_inst_mode_name__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_105_115_95_107_110_111_119_110_95_105_110_115_116_95_110_97_109_101_95_97_114_103_115_95_95_91_49_93_95_48_3_p_0(parse_tree__prog_io_inst_mode_name__Name_2, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), &parse_tree__prog_io_inst_mode_name__V_3_3);
    }
    return parse_tree__prog_io_inst_mode_name__succeeded;
  }
}

MR_bool MR_CALL 
parse_tree__prog_io_inst_mode_name__convert_inst_3_p_0(
  MR_Word parse_tree__prog_io_inst_mode_name__AllowConstrainedInstVar_4,
  MR_Word parse_tree__prog_io_inst_mode_name__Term_5,
  MR_Word * parse_tree__prog_io_inst_mode_name__Inst_6)
{
  {
    MR_bool parse_tree__prog_io_inst_mode_name__succeeded;

    if (((MR_tag((MR_Word) parse_tree__prog_io_inst_mode_name__Term_5)) == (MR_mktag((MR_Integer) 0))))
      {
        MR_Word parse_tree__prog_io_inst_mode_name__Functor_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_inst_mode_name__Term_5, (MR_Integer) 0)));
        MR_Word parse_tree__prog_io_inst_mode_name__Args0_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_inst_mode_name__Term_5, (MR_Integer) 1)));
        MR_String parse_tree__prog_io_inst_mode_name__Name_13;
        MR_Word parse_tree__prog_io_inst_mode_name___Context_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_inst_mode_name__Term_5, (MR_Integer) 2)));
        MR_Word parse_tree__prog_io_inst_mode_name__KnownInstKind_14;

        parse_tree__prog_io_inst_mode_name__succeeded = ((MR_tag((MR_Word) parse_tree__prog_io_inst_mode_name__Functor_10)) == (MR_mktag((MR_Integer) 0)));
        if (parse_tree__prog_io_inst_mode_name__succeeded)
          {
            parse_tree__prog_io_inst_mode_name__Name_13 = ((MR_String) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_inst_mode_name__Functor_10, (MR_Integer) 0)));
            {
              parse_tree__prog_io_inst_mode_name__succeeded = parse_tree__prog_io_inst_mode_name__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_105_115_95_107_110_111_119_110_95_105_110_115_116_95_110_97_109_101_95_97_114_103_115_95_95_91_49_93_95_48_3_p_0(parse_tree__prog_io_inst_mode_name__Name_13, parse_tree__prog_io_inst_mode_name__Args0_11, &parse_tree__prog_io_inst_mode_name__KnownInstKind_14);
            }
            if (parse_tree__prog_io_inst_mode_name__succeeded)
              if (((MR_tag((MR_Word) parse_tree__prog_io_inst_mode_name__KnownInstKind_14)) == (MR_mktag((MR_Integer) 2))))
                {
                  MR_Word parse_tree__prog_io_inst_mode_name__CompoundInstKind_15 = ((MR_Word) (MR_hl_field(MR_mktag(2), parse_tree__prog_io_inst_mode_name__KnownInstKind_14, (MR_Integer) 0)));

                  switch (MR_tag((MR_Word) parse_tree__prog_io_inst_mode_name__CompoundInstKind_15)) {
                    default: /*NOTREACHED*/ MR_assert(0);
                    case (MR_Integer) 0:
                      {
                        MR_Word parse_tree__prog_io_inst_mode_name__BeforeIsTerm_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_inst_mode_name__CompoundInstKind_15, (MR_Integer) 0)));
                        MR_Word parse_tree__prog_io_inst_mode_name__DetTerm_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_inst_mode_name__CompoundInstKind_15, (MR_Integer) 1)));

                        {
                          parse_tree__prog_io_inst_mode_name__succeeded = parse_tree__prog_io_inst_mode_name__convert_higher_order_inst_4_p_0(parse_tree__prog_io_inst_mode_name__AllowConstrainedInstVar_4, parse_tree__prog_io_inst_mode_name__BeforeIsTerm_16, parse_tree__prog_io_inst_mode_name__DetTerm_17, parse_tree__prog_io_inst_mode_name__Inst_6);
                        }
                      }
                      break;
                    case (MR_Integer) 1:
                      {
                        MR_Word parse_tree__prog_io_inst_mode_name__TypeInfo_50_50;
                        MR_Word parse_tree__prog_io_inst_mode_name__TypeCtorInfo_51_51;
                        MR_Word parse_tree__prog_io_inst_mode_name__TypeCtorInfo_52_52;
                        MR_Word parse_tree__prog_io_inst_mode_name__VarTerm_19;
                        MR_Word parse_tree__prog_io_inst_mode_name__SubInstTerm_20;
                        MR_Word parse_tree__prog_io_inst_mode_name__Var_21;
                        MR_Word parse_tree__prog_io_inst_mode_name__SubInst_23;
                        MR_Word parse_tree__prog_io_inst_mode_name__V_32_32;
                        MR_Word parse_tree__prog_io_inst_mode_name__V_33_33;
                        MR_Word parse_tree__prog_io_inst_mode_name__V_34_34;
                        MR_Word parse_tree__prog_io_inst_mode_name__V_22_22;

                        parse_tree__prog_io_inst_mode_name__succeeded = (parse_tree__prog_io_inst_mode_name__AllowConstrainedInstVar_4 == (MR_Integer) 0);
                        if (parse_tree__prog_io_inst_mode_name__succeeded)
                          {
                            parse_tree__prog_io_inst_mode_name__VarTerm_19 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_inst_mode_name__CompoundInstKind_15, (MR_Integer) 0)));
                            parse_tree__prog_io_inst_mode_name__SubInstTerm_20 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_inst_mode_name__CompoundInstKind_15, (MR_Integer) 1)));
                            parse_tree__prog_io_inst_mode_name__succeeded = ((MR_tag((MR_Word) parse_tree__prog_io_inst_mode_name__VarTerm_19)) == (MR_mktag((MR_Integer) 1)));
                            if (parse_tree__prog_io_inst_mode_name__succeeded)
                              {
                                parse_tree__prog_io_inst_mode_name__Var_21 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_inst_mode_name__VarTerm_19, (MR_Integer) 0)));
                                parse_tree__prog_io_inst_mode_name__V_22_22 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_inst_mode_name__VarTerm_19, (MR_Integer) 1)));
                                parse_tree__prog_io_inst_mode_name__V_32_32 = (MR_Integer) 1;
                                {
                                  parse_tree__prog_io_inst_mode_name__succeeded = parse_tree__prog_io_inst_mode_name__convert_inst_3_p_0(parse_tree__prog_io_inst_mode_name__V_32_32, parse_tree__prog_io_inst_mode_name__SubInstTerm_20, &parse_tree__prog_io_inst_mode_name__SubInst_23);
                                }
                                if (parse_tree__prog_io_inst_mode_name__succeeded)
                                  {
                                    parse_tree__prog_io_inst_mode_name__TypeInfo_50_50 = (MR_Word) &parse_tree__prog_io_inst_mode_name_scalar_common_1[1];
                                    parse_tree__prog_io_inst_mode_name__TypeCtorInfo_51_51 = (MR_Word) &mercury__term__term__type_ctor_info_generic_0;
                                    parse_tree__prog_io_inst_mode_name__TypeCtorInfo_52_52 = (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_inst_var_type_0;
                                    {
                                      parse_tree__prog_io_inst_mode_name__V_34_34 = mercury__term__coerce_var_1_f_0(parse_tree__prog_io_inst_mode_name__TypeCtorInfo_51_51, parse_tree__prog_io_inst_mode_name__TypeCtorInfo_52_52, parse_tree__prog_io_inst_mode_name__Var_21);
                                    }
                                    {
                                      parse_tree__prog_io_inst_mode_name__V_33_33 = mercury__set__make_singleton_set_1_f_0(parse_tree__prog_io_inst_mode_name__TypeInfo_50_50, ((MR_Box) (parse_tree__prog_io_inst_mode_name__V_34_34)));
                                    }
                                    {
                                      MR_Word base;
                                      base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
                                      *parse_tree__prog_io_inst_mode_name__Inst_6 = base;
                                      MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 3));
                                      MR_hl_field(MR_mktag(3), base, 1) = ((MR_Box) (parse_tree__prog_io_inst_mode_name__V_33_33));
                                      MR_hl_field(MR_mktag(3), base, 2) = ((MR_Box) (parse_tree__prog_io_inst_mode_name__SubInst_23));
                                    }
                                    parse_tree__prog_io_inst_mode_name__succeeded = MR_TRUE;
                                  }
                              }
                          }
                      }
                      break;
                    case (MR_Integer) 2:
                      {
                        MR_Word parse_tree__prog_io_inst_mode_name__DisjTerm_18 = ((MR_Word) (MR_hl_field(MR_mktag(2), parse_tree__prog_io_inst_mode_name__CompoundInstKind_15, (MR_Integer) 0)));

                        {
                          parse_tree__prog_io_inst_mode_name__succeeded = parse_tree__prog_io_inst_mode_name__parse_bound_inst_list_4_p_0(parse_tree__prog_io_inst_mode_name__AllowConstrainedInstVar_4, parse_tree__prog_io_inst_mode_name__DisjTerm_18, (MR_Integer) 0, parse_tree__prog_io_inst_mode_name__Inst_6);
                        }
                      }
                      break;
                    case (MR_Integer) 3:
                      switch (((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__prog_io_inst_mode_name__CompoundInstKind_15, (MR_Integer) 0)))) {
                        default: /*NOTREACHED*/ MR_assert(0);
                        case (MR_Integer) 0:
                          {
                            MR_Word parse_tree__prog_io_inst_mode_name__DisjTerm_42 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__prog_io_inst_mode_name__CompoundInstKind_15, (MR_Integer) 1)));

                            {
                              parse_tree__prog_io_inst_mode_name__succeeded = parse_tree__prog_io_inst_mode_name__parse_bound_inst_list_4_p_0(parse_tree__prog_io_inst_mode_name__AllowConstrainedInstVar_4, parse_tree__prog_io_inst_mode_name__DisjTerm_42, (MR_Integer) 1, parse_tree__prog_io_inst_mode_name__Inst_6);
                            }
                          }
                          break;
                        case (MR_Integer) 1:
                          {
                            MR_Word parse_tree__prog_io_inst_mode_name__DisjTerm_43 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__prog_io_inst_mode_name__CompoundInstKind_15, (MR_Integer) 1)));

                            {
                              parse_tree__prog_io_inst_mode_name__succeeded = parse_tree__prog_io_inst_mode_name__parse_bound_inst_list_4_p_0(parse_tree__prog_io_inst_mode_name__AllowConstrainedInstVar_4, parse_tree__prog_io_inst_mode_name__DisjTerm_43, (MR_Integer) 2, parse_tree__prog_io_inst_mode_name__Inst_6);
                            }
                          }
                          break;
                      }
                      break;
                  }
                }
              else
              if (((MR_tag((MR_Word) parse_tree__prog_io_inst_mode_name__KnownInstKind_14)) == (MR_mktag((MR_Integer) 1))))
                {
                  *parse_tree__prog_io_inst_mode_name__Inst_6 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_inst_mode_name__KnownInstKind_14, (MR_Integer) 0)));
                  parse_tree__prog_io_inst_mode_name__succeeded = MR_TRUE;
                }
              else
                parse_tree__prog_io_inst_mode_name__succeeded = MR_FALSE;
            else
              {
                MR_Word parse_tree__prog_io_inst_mode_name__QualifiedName_24;
                MR_Word parse_tree__prog_io_inst_mode_name__Args1_25;
                MR_Word parse_tree__prog_io_inst_mode_name__InstPrime_28;
                MR_Word parse_tree__prog_io_inst_mode_name__BuiltinModule_26;
                MR_String parse_tree__prog_io_inst_mode_name__UnqualifiedName_27;
                MR_Word parse_tree__prog_io_inst_mode_name__V_38_38;
                MR_String parse_tree__prog_io_inst_mode_name__V_39_39;
                MR_Word parse_tree__prog_io_inst_mode_name__KnownInstKind_44;
                MR_Word parse_tree__prog_io_inst_mode_name__V_55_55;
                MR_Word parse_tree__prog_io_inst_mode_name__V_40_40;
                MR_Word parse_tree__prog_io_inst_mode_name__V_29_29;
                MR_Word parse_tree__prog_io_inst_mode_name__V_30_30;

                {
                  parse_tree__prog_io_inst_mode_name__succeeded = parse_tree__prog_io_sym_name__try_parse_sym_name_and_args_from_f_args_4_p_0((MR_Word) &mercury__term__term__type_ctor_info_generic_0, parse_tree__prog_io_inst_mode_name__Functor_10, parse_tree__prog_io_inst_mode_name__Args0_11, &parse_tree__prog_io_inst_mode_name__QualifiedName_24, &parse_tree__prog_io_inst_mode_name__Args1_25);
                }
                if (parse_tree__prog_io_inst_mode_name__succeeded)
                  {
                    {
                      parse_tree__prog_io_inst_mode_name__BuiltinModule_26 = mdbcomp__builtin_modules__mercury_public_builtin_module_0_f_0();
                    }
                    parse_tree__prog_io_inst_mode_name__V_39_39 = (MR_String) "";
                    parse_tree__prog_io_inst_mode_name__V_38_38 = (MR_Word) &parse_tree__prog_io_inst_mode_name_scalar_common_2[0];
                    {
                      mdbcomp__sym_name__sym_name_get_module_name_default_3_p_0(parse_tree__prog_io_inst_mode_name__QualifiedName_24, parse_tree__prog_io_inst_mode_name__V_38_38, &parse_tree__prog_io_inst_mode_name__V_55_55);
                    }
                    {
                      parse_tree__prog_io_inst_mode_name__succeeded = mdbcomp__sym_name____Unify____sym_name_0_0(parse_tree__prog_io_inst_mode_name__BuiltinModule_26, parse_tree__prog_io_inst_mode_name__V_55_55);
                    }
                    if (parse_tree__prog_io_inst_mode_name__succeeded)
                      {
                        {
                          parse_tree__prog_io_inst_mode_name__UnqualifiedName_27 = mdbcomp__sym_name__unqualify_name_1_f_0(parse_tree__prog_io_inst_mode_name__QualifiedName_24);
                        }
                        {
                          parse_tree__prog_io_inst_mode_name__succeeded = parse_tree__prog_io_inst_mode_name__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_105_115_95_107_110_111_119_110_95_105_110_115_116_95_110_97_109_101_95_97_114_103_115_95_95_91_49_93_95_48_3_p_0(parse_tree__prog_io_inst_mode_name__UnqualifiedName_27, parse_tree__prog_io_inst_mode_name__Args1_25, &parse_tree__prog_io_inst_mode_name__KnownInstKind_44);
                        }
                        if (parse_tree__prog_io_inst_mode_name__succeeded)
                          {
                            parse_tree__prog_io_inst_mode_name__succeeded = ((MR_tag((MR_Word) parse_tree__prog_io_inst_mode_name__KnownInstKind_44)) == (MR_mktag((MR_Integer) 1)));
                            if (parse_tree__prog_io_inst_mode_name__succeeded)
                              {
                                parse_tree__prog_io_inst_mode_name__InstPrime_28 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_inst_mode_name__KnownInstKind_44, (MR_Integer) 0)));
                                parse_tree__prog_io_inst_mode_name__succeeded = ((((MR_tag((MR_Word) parse_tree__prog_io_inst_mode_name__InstPrime_28)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__prog_io_inst_mode_name__InstPrime_28, (MR_Integer) 0)))) == (MR_Integer) 4)));
                                if (parse_tree__prog_io_inst_mode_name__succeeded)
                                  {
                                    parse_tree__prog_io_inst_mode_name__V_40_40 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__prog_io_inst_mode_name__InstPrime_28, (MR_Integer) 1)));
                                    parse_tree__prog_io_inst_mode_name__succeeded = ((MR_tag((MR_Word) parse_tree__prog_io_inst_mode_name__V_40_40)) == (MR_mktag((MR_Integer) 0)));
                                    if (parse_tree__prog_io_inst_mode_name__succeeded)
                                      {
                                        parse_tree__prog_io_inst_mode_name__V_29_29 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_inst_mode_name__V_40_40, (MR_Integer) 0)));
                                        parse_tree__prog_io_inst_mode_name__V_30_30 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_inst_mode_name__V_40_40, (MR_Integer) 1)));
                                      }
                                  }
                                parse_tree__prog_io_inst_mode_name__succeeded = !(parse_tree__prog_io_inst_mode_name__succeeded);
                              }
                          }
                      }
                    if (parse_tree__prog_io_inst_mode_name__succeeded)
                      {
                        *parse_tree__prog_io_inst_mode_name__Inst_6 = parse_tree__prog_io_inst_mode_name__InstPrime_28;
                        parse_tree__prog_io_inst_mode_name__succeeded = MR_TRUE;
                      }
                    else
                      {
                        MR_Word parse_tree__prog_io_inst_mode_name__Args_31;
                        MR_Word parse_tree__prog_io_inst_mode_name__V_41_41;

                        {
                          parse_tree__prog_io_inst_mode_name__succeeded = parse_tree__prog_io_inst_mode_name__convert_inst_list_3_p_0(parse_tree__prog_io_inst_mode_name__AllowConstrainedInstVar_4, parse_tree__prog_io_inst_mode_name__Args1_25, &parse_tree__prog_io_inst_mode_name__Args_31);
                        }
                        if (parse_tree__prog_io_inst_mode_name__succeeded)
                          {
                            {
                              parse_tree__prog_io_inst_mode_name__V_41_41 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
                              MR_hl_field(MR_mktag(0), parse_tree__prog_io_inst_mode_name__V_41_41, 0) = ((MR_Box) (parse_tree__prog_io_inst_mode_name__QualifiedName_24));
                              MR_hl_field(MR_mktag(0), parse_tree__prog_io_inst_mode_name__V_41_41, 1) = ((MR_Box) (parse_tree__prog_io_inst_mode_name__Args_31));
                            }
                            {
                              MR_Word base;
                              base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                              *parse_tree__prog_io_inst_mode_name__Inst_6 = base;
                              MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 4));
                              MR_hl_field(MR_mktag(3), base, 1) = ((MR_Box) (parse_tree__prog_io_inst_mode_name__V_41_41));
                            }
                            parse_tree__prog_io_inst_mode_name__succeeded = MR_TRUE;
                          }
                      }
                  }
              }
          }
      }
    else
      {
        MR_Word parse_tree__prog_io_inst_mode_name__V0_7 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_inst_mode_name__Term_5, (MR_Integer) 0)));
        MR_Word parse_tree__prog_io_inst_mode_name__V_9;
        MR_Word parse_tree__prog_io_inst_mode_name__V_8_8 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_inst_mode_name__Term_5, (MR_Integer) 1)));

        {
          mercury__term__coerce_var_2_p_0((MR_Word) &mercury__term__term__type_ctor_info_generic_0, (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_inst_var_type_0, parse_tree__prog_io_inst_mode_name__V0_7, &parse_tree__prog_io_inst_mode_name__V_9);
        }
        {
          MR_Word base;
          base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
          *parse_tree__prog_io_inst_mode_name__Inst_6 = base;
          MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
          MR_hl_field(MR_mktag(3), base, 1) = ((MR_Box) (parse_tree__prog_io_inst_mode_name__V_9));
        }
        parse_tree__prog_io_inst_mode_name__succeeded = MR_TRUE;
      }
    return parse_tree__prog_io_inst_mode_name__succeeded;
  }
}

MR_bool MR_CALL 
parse_tree__prog_io_inst_mode_name__convert_inst_list_3_p_0(
  MR_Word parse_tree__prog_io_inst_mode_name__AllowConstrainedInstVar_1,
  MR_Word parse_tree__prog_io_inst_mode_name__HeadVar__2_2,
  MR_Word * parse_tree__prog_io_inst_mode_name__HeadVar__3_3)
{
  {
    MR_bool parse_tree__prog_io_inst_mode_name__succeeded;

    if ((parse_tree__prog_io_inst_mode_name__HeadVar__2_2 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
      {
        *parse_tree__prog_io_inst_mode_name__HeadVar__3_3 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
        parse_tree__prog_io_inst_mode_name__succeeded = MR_TRUE;
      }
    else
      {
        MR_Word parse_tree__prog_io_inst_mode_name__Term_6 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_inst_mode_name__HeadVar__2_2, (MR_Integer) 0)));
        MR_Word parse_tree__prog_io_inst_mode_name__Terms_7 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_inst_mode_name__HeadVar__2_2, (MR_Integer) 1)));
        MR_Word parse_tree__prog_io_inst_mode_name__Inst_8;
        MR_Word parse_tree__prog_io_inst_mode_name__Insts_9;

        {
          parse_tree__prog_io_inst_mode_name__succeeded = parse_tree__prog_io_inst_mode_name__convert_inst_3_p_0(parse_tree__prog_io_inst_mode_name__AllowConstrainedInstVar_1, parse_tree__prog_io_inst_mode_name__Term_6, &parse_tree__prog_io_inst_mode_name__Inst_8);
        }
        if (parse_tree__prog_io_inst_mode_name__succeeded)
          {
            {
              parse_tree__prog_io_inst_mode_name__succeeded = parse_tree__prog_io_inst_mode_name__convert_inst_list_3_p_0(parse_tree__prog_io_inst_mode_name__AllowConstrainedInstVar_1, parse_tree__prog_io_inst_mode_name__Terms_7, &parse_tree__prog_io_inst_mode_name__Insts_9);
            }
            if (parse_tree__prog_io_inst_mode_name__succeeded)
              {
                {
                  MR_Word base;
                  base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                  *parse_tree__prog_io_inst_mode_name__HeadVar__3_3 = base;
                  MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (parse_tree__prog_io_inst_mode_name__Inst_8));
                  MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (parse_tree__prog_io_inst_mode_name__Insts_9));
                }
                parse_tree__prog_io_inst_mode_name__succeeded = MR_TRUE;
              }
          }
      }
    return parse_tree__prog_io_inst_mode_name__succeeded;
  }
}

MR_bool MR_CALL 
parse_tree__prog_io_inst_mode_name__is_known_mode_name_1_p_0(
  MR_String parse_tree__prog_io_inst_mode_name__HeadVar__1_1)
{
  {
    MR_bool parse_tree__prog_io_inst_mode_name__succeeded;

    if ((strcmp(parse_tree__prog_io_inst_mode_name__HeadVar__1_1, (MR_String) ">>") == 0))
      parse_tree__prog_io_inst_mode_name__succeeded = MR_TRUE;
    else
    if ((strcmp(parse_tree__prog_io_inst_mode_name__HeadVar__1_1, (MR_String) "is") == 0))
      parse_tree__prog_io_inst_mode_name__succeeded = MR_TRUE;
    else
      parse_tree__prog_io_inst_mode_name__succeeded = MR_FALSE;
    return parse_tree__prog_io_inst_mode_name__succeeded;
  }
}

MR_bool MR_CALL 
parse_tree__prog_io_inst_mode_name__convert_mode_3_p_0(
  MR_Word parse_tree__prog_io_inst_mode_name__AllowConstrainedInstVar_4,
  MR_Word parse_tree__prog_io_inst_mode_name__Term_5,
  MR_Word * parse_tree__prog_io_inst_mode_name__Mode_6)
{
  {
    MR_bool parse_tree__prog_io_inst_mode_name__succeeded = ((MR_tag((MR_Word) parse_tree__prog_io_inst_mode_name__Term_5)) == (MR_mktag((MR_Integer) 0)));
    MR_Word parse_tree__prog_io_inst_mode_name__TermFunctor_7;
    MR_Word parse_tree__prog_io_inst_mode_name__TermArgs_8;
    MR_Word parse_tree__prog_io_inst_mode_name__V_9_9;
    MR_String parse_tree__prog_io_inst_mode_name__V_19_19;

    if (parse_tree__prog_io_inst_mode_name__succeeded)
      {
        parse_tree__prog_io_inst_mode_name__TermFunctor_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_inst_mode_name__Term_5, (MR_Integer) 0)));
        parse_tree__prog_io_inst_mode_name__TermArgs_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_inst_mode_name__Term_5, (MR_Integer) 1)));
        parse_tree__prog_io_inst_mode_name__V_9_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_inst_mode_name__Term_5, (MR_Integer) 2)));
        parse_tree__prog_io_inst_mode_name__succeeded = ((MR_tag((MR_Word) parse_tree__prog_io_inst_mode_name__TermFunctor_7)) == (MR_mktag((MR_Integer) 0)));
        if (parse_tree__prog_io_inst_mode_name__succeeded)
          {
            parse_tree__prog_io_inst_mode_name__V_19_19 = ((MR_String) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_inst_mode_name__TermFunctor_7, (MR_Integer) 0)));
            parse_tree__prog_io_inst_mode_name__succeeded = (strcmp(parse_tree__prog_io_inst_mode_name__V_19_19, (MR_String) ">>") == 0);
          }
        if (parse_tree__prog_io_inst_mode_name__succeeded)
          {
            MR_Word parse_tree__prog_io_inst_mode_name__InstTermA_10;
            MR_Word parse_tree__prog_io_inst_mode_name__InstTermB_11;
            MR_Word parse_tree__prog_io_inst_mode_name__InstA_12;
            MR_Word parse_tree__prog_io_inst_mode_name__InstB_13;
            MR_Word parse_tree__prog_io_inst_mode_name__V_20_20;
            MR_Word parse_tree__prog_io_inst_mode_name__V_21_21;

            parse_tree__prog_io_inst_mode_name__succeeded = ((MR_tag((MR_Word) parse_tree__prog_io_inst_mode_name__TermArgs_8)) == (MR_mktag((MR_Integer) 1)));
            if (parse_tree__prog_io_inst_mode_name__succeeded)
              {
                parse_tree__prog_io_inst_mode_name__InstTermA_10 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_inst_mode_name__TermArgs_8, (MR_Integer) 0)));
                parse_tree__prog_io_inst_mode_name__V_20_20 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_inst_mode_name__TermArgs_8, (MR_Integer) 1)));
                parse_tree__prog_io_inst_mode_name__succeeded = ((MR_tag((MR_Word) parse_tree__prog_io_inst_mode_name__V_20_20)) == (MR_mktag((MR_Integer) 1)));
                if (parse_tree__prog_io_inst_mode_name__succeeded)
                  {
                    parse_tree__prog_io_inst_mode_name__InstTermB_11 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_inst_mode_name__V_20_20, (MR_Integer) 0)));
                    parse_tree__prog_io_inst_mode_name__V_21_21 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_inst_mode_name__V_20_20, (MR_Integer) 1)));
                    parse_tree__prog_io_inst_mode_name__succeeded = (parse_tree__prog_io_inst_mode_name__V_21_21 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
                    if (parse_tree__prog_io_inst_mode_name__succeeded)
                      {
                        {
                          parse_tree__prog_io_inst_mode_name__succeeded = parse_tree__prog_io_inst_mode_name__convert_inst_3_p_0(parse_tree__prog_io_inst_mode_name__AllowConstrainedInstVar_4, parse_tree__prog_io_inst_mode_name__InstTermA_10, &parse_tree__prog_io_inst_mode_name__InstA_12);
                        }
                        if (parse_tree__prog_io_inst_mode_name__succeeded)
                          {
                            {
                              parse_tree__prog_io_inst_mode_name__succeeded = parse_tree__prog_io_inst_mode_name__convert_inst_3_p_0(parse_tree__prog_io_inst_mode_name__AllowConstrainedInstVar_4, parse_tree__prog_io_inst_mode_name__InstTermB_11, &parse_tree__prog_io_inst_mode_name__InstB_13);
                            }
                            if (parse_tree__prog_io_inst_mode_name__succeeded)
                              {
                                {
                                  MR_Word base;
                                  base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
                                  *parse_tree__prog_io_inst_mode_name__Mode_6 = base;
                                  MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (parse_tree__prog_io_inst_mode_name__InstA_12));
                                  MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (parse_tree__prog_io_inst_mode_name__InstB_13));
                                }
                                parse_tree__prog_io_inst_mode_name__succeeded = MR_TRUE;
                              }
                          }
                      }
                  }
              }
          }
        else
          {
            MR_String parse_tree__prog_io_inst_mode_name__V_22_22;

            parse_tree__prog_io_inst_mode_name__succeeded = ((MR_tag((MR_Word) parse_tree__prog_io_inst_mode_name__TermFunctor_7)) == (MR_mktag((MR_Integer) 0)));
            if (parse_tree__prog_io_inst_mode_name__succeeded)
              {
                parse_tree__prog_io_inst_mode_name__V_22_22 = ((MR_String) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_inst_mode_name__TermFunctor_7, (MR_Integer) 0)));
                parse_tree__prog_io_inst_mode_name__succeeded = (strcmp(parse_tree__prog_io_inst_mode_name__V_22_22, (MR_String) "is") == 0);
              }
            if (parse_tree__prog_io_inst_mode_name__succeeded)
              {
                MR_Word parse_tree__prog_io_inst_mode_name__BeforeIsTerm_14;
                MR_Word parse_tree__prog_io_inst_mode_name__DetTerm_15;
                MR_Word parse_tree__prog_io_inst_mode_name__V_23_23;
                MR_Word parse_tree__prog_io_inst_mode_name__V_24_24;

                parse_tree__prog_io_inst_mode_name__succeeded = ((MR_tag((MR_Word) parse_tree__prog_io_inst_mode_name__TermArgs_8)) == (MR_mktag((MR_Integer) 1)));
                if (parse_tree__prog_io_inst_mode_name__succeeded)
                  {
                    parse_tree__prog_io_inst_mode_name__BeforeIsTerm_14 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_inst_mode_name__TermArgs_8, (MR_Integer) 0)));
                    parse_tree__prog_io_inst_mode_name__V_23_23 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_inst_mode_name__TermArgs_8, (MR_Integer) 1)));
                    parse_tree__prog_io_inst_mode_name__succeeded = ((MR_tag((MR_Word) parse_tree__prog_io_inst_mode_name__V_23_23)) == (MR_mktag((MR_Integer) 1)));
                    if (parse_tree__prog_io_inst_mode_name__succeeded)
                      {
                        parse_tree__prog_io_inst_mode_name__DetTerm_15 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_inst_mode_name__V_23_23, (MR_Integer) 0)));
                        parse_tree__prog_io_inst_mode_name__V_24_24 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_inst_mode_name__V_23_23, (MR_Integer) 1)));
                        parse_tree__prog_io_inst_mode_name__succeeded = (parse_tree__prog_io_inst_mode_name__V_24_24 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
                        if (parse_tree__prog_io_inst_mode_name__succeeded)
                          {
                            parse_tree__prog_io_inst_mode_name__succeeded = parse_tree__prog_io_inst_mode_name__convert_higher_order_mode_4_p_0(parse_tree__prog_io_inst_mode_name__AllowConstrainedInstVar_4, parse_tree__prog_io_inst_mode_name__BeforeIsTerm_14, parse_tree__prog_io_inst_mode_name__DetTerm_15, parse_tree__prog_io_inst_mode_name__Mode_6);
                          }
                      }
                  }
              }
            else
              {
                MR_Word parse_tree__prog_io_inst_mode_name__Name_16;
                MR_Word parse_tree__prog_io_inst_mode_name__Args_17;
                MR_Word parse_tree__prog_io_inst_mode_name__ConvertedArgs_18;

                {
                  parse_tree__prog_io_inst_mode_name__succeeded = parse_tree__prog_io_sym_name__try_parse_sym_name_and_args_from_f_args_4_p_0((MR_Word) &mercury__term__term__type_ctor_info_generic_0, parse_tree__prog_io_inst_mode_name__TermFunctor_7, parse_tree__prog_io_inst_mode_name__TermArgs_8, &parse_tree__prog_io_inst_mode_name__Name_16, &parse_tree__prog_io_inst_mode_name__Args_17);
                }
                if (parse_tree__prog_io_inst_mode_name__succeeded)
                  {
                    {
                      parse_tree__prog_io_inst_mode_name__succeeded = parse_tree__prog_io_inst_mode_name__convert_inst_list_3_p_0(parse_tree__prog_io_inst_mode_name__AllowConstrainedInstVar_4, parse_tree__prog_io_inst_mode_name__Args_17, &parse_tree__prog_io_inst_mode_name__ConvertedArgs_18);
                    }
                    if (parse_tree__prog_io_inst_mode_name__succeeded)
                      {
                        {
                          MR_Word base;
                          base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                          *parse_tree__prog_io_inst_mode_name__Mode_6 = base;
                          MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (parse_tree__prog_io_inst_mode_name__Name_16));
                          MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (parse_tree__prog_io_inst_mode_name__ConvertedArgs_18));
                        }
                        parse_tree__prog_io_inst_mode_name__succeeded = MR_TRUE;
                      }
                  }
              }
          }
      }
    return parse_tree__prog_io_inst_mode_name__succeeded;
  }
}

MR_bool MR_CALL 
parse_tree__prog_io_inst_mode_name__convert_mode_list_3_p_0(
  MR_Word parse_tree__prog_io_inst_mode_name__AllowConstrainedInstVar_1,
  MR_Word parse_tree__prog_io_inst_mode_name__HeadVar__2_2,
  MR_Word * parse_tree__prog_io_inst_mode_name__HeadVar__3_3)
{
  {
    MR_bool parse_tree__prog_io_inst_mode_name__succeeded;

    if ((parse_tree__prog_io_inst_mode_name__HeadVar__2_2 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
      {
        *parse_tree__prog_io_inst_mode_name__HeadVar__3_3 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
        parse_tree__prog_io_inst_mode_name__succeeded = MR_TRUE;
      }
    else
      {
        MR_Word parse_tree__prog_io_inst_mode_name__H0_6 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_inst_mode_name__HeadVar__2_2, (MR_Integer) 0)));
        MR_Word parse_tree__prog_io_inst_mode_name__T0_7 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_inst_mode_name__HeadVar__2_2, (MR_Integer) 1)));
        MR_Word parse_tree__prog_io_inst_mode_name__H_8;
        MR_Word parse_tree__prog_io_inst_mode_name__T_9;

        {
          parse_tree__prog_io_inst_mode_name__succeeded = parse_tree__prog_io_inst_mode_name__convert_mode_3_p_0(parse_tree__prog_io_inst_mode_name__AllowConstrainedInstVar_1, parse_tree__prog_io_inst_mode_name__H0_6, &parse_tree__prog_io_inst_mode_name__H_8);
        }
        if (parse_tree__prog_io_inst_mode_name__succeeded)
          {
            {
              parse_tree__prog_io_inst_mode_name__succeeded = parse_tree__prog_io_inst_mode_name__convert_mode_list_3_p_0(parse_tree__prog_io_inst_mode_name__AllowConstrainedInstVar_1, parse_tree__prog_io_inst_mode_name__T0_7, &parse_tree__prog_io_inst_mode_name__T_9);
            }
            if (parse_tree__prog_io_inst_mode_name__succeeded)
              {
                {
                  MR_Word base;
                  base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                  *parse_tree__prog_io_inst_mode_name__HeadVar__3_3 = base;
                  MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (parse_tree__prog_io_inst_mode_name__H_8));
                  MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (parse_tree__prog_io_inst_mode_name__T_9));
                }
                parse_tree__prog_io_inst_mode_name__succeeded = MR_TRUE;
              }
          }
      }
    return parse_tree__prog_io_inst_mode_name__succeeded;
  }
}

void mercury__parse_tree__prog_io_inst_mode_name__init(void)
{
}

void mercury__parse_tree__prog_io_inst_mode_name__init_type_tables(void)
{
	static MR_bool initialised = MR_FALSE;
	if (initialised) return;
	initialised = MR_TRUE;

	MR_register_type_ctor_info(&parse_tree__prog_io_inst_mode_name__parse_tree__prog_io_inst_mode_name__type_ctor_info_allow_constrained_inst_var_0);
	MR_register_type_ctor_info(&parse_tree__prog_io_inst_mode_name__parse_tree__prog_io_inst_mode_name__type_ctor_info_known_compound_inst_kind_1);
	MR_register_type_ctor_info(&parse_tree__prog_io_inst_mode_name__parse_tree__prog_io_inst_mode_name__type_ctor_info_known_inst_kind_1);
}

void mercury__parse_tree__prog_io_inst_mode_name__init_debugger(void)
{
	MR_fatal_error("debugger initialization in MLDS grade");
}

/* ensure everything is compiled with the same grade */
static const void *const MR_grade = &MR_GRADE_VAR;

/* :- end_module parse_tree.prog_io_inst_mode_name. */
