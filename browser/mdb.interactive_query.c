/*
** Automatically generated from `interactive_query.m'
** by the Mercury compiler,
** version rotd-2017-04-20
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


/* :- module mdb.interactive_query. */
/* :- implementation. */

/*
INIT mercury__mdb__interactive_query__init
ENDINIT
*/

#include "mdb.interactive_query.mih"
#include "mdb.interactive_query.mh"


#include "mdb.mih"
#include "mdbcomp.mih"
#include "mdb.dl.mih"
#include "mdb.name_mangle.mih"
#include "mdb.util.mih"
#include "mdbcomp.prim_data.mih"
#include "mdbcomp.sym_name.mih"
#include "array.mih"
#include "assoc_list.mih"
#include "bitmap.mih"
#include "bool.mih"
#include "builtin.mih"
#include "char.mih"
#include "construct.mih"
#include "deconstruct.mih"
#include "enum.mih"
#include "exception.mih"
#include "integer.mih"
#include "io.mih"
#include "lexer.mih"
#include "list.mih"
#include "map.mih"
#include "maybe.mih"
#include "ops.mih"
#include "pair.mih"
#include "parser.mih"
#include "pretty_printer.mih"
#include "private_builtin.mih"
#include "random.mih"
#include "rtti_implementation.mih"
#include "set.mih"
#include "set_ordlist.mih"
#include "stm_builtin.mih"
#include "store.mih"
#include "stream.mih"
#include "string.mih"
#include "term.mih"
#include "term_io.mih"
#include "time.mih"
#include "tree234.mih"
#include "type_desc.mih"
#include "univ.mih"
#include "varset.mih"
#include "string.format.mih"
#include "string.parse_util.mih"



struct mdb__interactive_query__call_run_normal_3_p_0_env_0_s {
  MR_Word * mdb__interactive_query__call_run_normal_3_p_0_env_0__Solution_6;
  MR_Cont mdb__interactive_query__call_run_normal_3_p_0_env_0__cont;
  void * mdb__interactive_query__call_run_normal_3_p_0_env_0__cont_env_ptr;
  MR_Word mdb__interactive_query__call_run_normal_3_p_0_env_0__Bindings_8;
  MR_Word mdb__interactive_query__call_run_normal_3_p_0_env_0__Loaded_9;
  MR_Box mdb__interactive_query__call_run_normal_3_p_0_env_0__conv2_Bindings_8;
  MR_Box mdb__interactive_query__call_run_normal_3_p_0_env_0__conv1_Loaded_9;
};

struct mdb__interactive_query__link_and_run_normal_5_p_0_2_env_0_s {
  MR_Box * mdb__interactive_query__link_and_run_normal_5_p_0_2_env_0__wrapper_arg_1;
  MR_Cont mdb__interactive_query__link_and_run_normal_5_p_0_2_env_0__cont;
  void * mdb__interactive_query__link_and_run_normal_5_p_0_2_env_0__cont_env_ptr;
  MR_Word mdb__interactive_query__link_and_run_normal_5_p_0_2_env_0__conv0_Solution_6;
};


static const MR_FA_PseudoTypeInfo_Struct1 mdb__interactive_query__varset__pti_varset_1__plain_term__type_ctor_info_generic_0;

static const MR_FA_PseudoTypeInfo_Struct1 mdb__interactive_query__term__pti_var_1__plain_term__type_ctor_info_generic_0;

static const MR_FA_PseudoTypeInfo_Struct2 mdb__interactive_query__tree234__pti_tree234_2__plain_builtin__type_ctor_info_string_0__plain_univ__type_ctor_info_univ_0;

static const MR_FA_TypeInfo_Struct2 mdb__interactive_query__tree234__ti_tree234_2builtin__type_ctor_info_string_0univ__type_ctor_info_univ_0;

static const MR_VA_PseudoTypeInfo_Struct3 mdb__interactive_query____vpti_pred_3__plain_tree234__ti_tree234_2builtin__type_ctor_info_string_0univ__type_ctor_info_univ_0__plain_tree234__ti_tree234_2builtin__type_ctor_info_string_0univ__type_ctor_info_univ_0__plain_bool__type_ctor_info_bool_0;

static const MR_FA_PseudoTypeInfo_Struct1 mdb__interactive_query__list__pti_list_1__plain_builtin__type_ctor_info_string_0;

static const MR_VA_PseudoTypeInfo_Struct5 mdb__interactive_query____vpti_pred_5__plain_tree234__ti_tree234_2builtin__type_ctor_info_string_0univ__type_ctor_info_univ_0__plain_tree234__ti_tree234_2builtin__type_ctor_info_string_0univ__type_ctor_info_univ_0__plain_bool__type_ctor_info_bool_0__plain_io__type_ctor_info_state_0__plain_io__type_ctor_info_state_0;

static const MR_FA_TypeInfo_Struct1 mdb__interactive_query__list__ti_list_1builtin__type_ctor_info_string_0;

static const MR_DuFunctorDesc mdb__interactive_query__mdb__interactive_query__du_functor_desc_interactive_query_response_0_0;

static const MR_PseudoTypeInfo mdb__interactive_query__mdb__interactive_query__field_types_interactive_query_response_0_1[1];

static const MR_DuFunctorDesc mdb__interactive_query__mdb__interactive_query__du_functor_desc_interactive_query_response_0_1;

static const MR_DuFunctorDesc mdb__interactive_query__mdb__interactive_query__du_functor_desc_interactive_query_response_0_2;

static const MR_DuFunctorDesc mdb__interactive_query__mdb__interactive_query__du_functor_desc_interactive_query_response_0_3;

static const MR_PseudoTypeInfo mdb__interactive_query__mdb__interactive_query__field_types_interactive_query_response_0_4[1];

static const MR_DuFunctorDesc mdb__interactive_query__mdb__interactive_query__du_functor_desc_interactive_query_response_0_4;

static const MR_DuFunctorDescPtr mdb__interactive_query__mdb__interactive_query__du_stag_ordered_interactive_query_response_0_0[3];

static const MR_DuFunctorDescPtr mdb__interactive_query__mdb__interactive_query__du_stag_ordered_interactive_query_response_0_1[1];

static const MR_DuFunctorDescPtr mdb__interactive_query__mdb__interactive_query__du_stag_ordered_interactive_query_response_0_2[1];

static const MR_DuPtagLayout mdb__interactive_query__mdb__interactive_query__du_ptag_ordered_interactive_query_response_0[3];

static const MR_DuFunctorDescPtr mdb__interactive_query__mdb__interactive_query__du_name_ordered_interactive_query_response_0[5];

static const MR_Integer mdb__interactive_query__mdb__interactive_query__functor_number_map_interactive_query_response_0[5];

static const MR_FA_TypeInfo_Struct1 mdb__interactive_query__term__ti_term_1term__type_ctor_info_generic_0;

static const MR_FA_TypeInfo_Struct1 mdb__interactive_query__varset__ti_varset_1term__type_ctor_info_generic_0;

static const MR_PseudoTypeInfo mdb__interactive_query__mdb__interactive_query__field_types_prog_0_0[7];

static const MR_ConstString mdb__interactive_query__mdb__interactive_query__field_names_prog_0_0[7];

static const MR_DuFunctorDesc mdb__interactive_query__mdb__interactive_query__du_functor_desc_prog_0_0;

static const MR_DuFunctorDescPtr mdb__interactive_query__mdb__interactive_query__du_stag_ordered_prog_0_0[1];

static const MR_DuPtagLayout mdb__interactive_query__mdb__interactive_query__du_ptag_ordered_prog_0[1];

static const MR_DuFunctorDescPtr mdb__interactive_query__mdb__interactive_query__du_name_ordered_prog_0[1];

static const MR_Integer mdb__interactive_query__mdb__interactive_query__functor_number_map_prog_0[1];

static const MR_DuFunctorDesc mdb__interactive_query__mdb__interactive_query__du_functor_desc_query_command_0_0;

static const MR_PseudoTypeInfo mdb__interactive_query__mdb__interactive_query__field_types_query_command_0_1[1];

static const MR_DuFunctorDesc mdb__interactive_query__mdb__interactive_query__du_functor_desc_query_command_0_1;

static const MR_PseudoTypeInfo mdb__interactive_query__mdb__interactive_query__field_types_query_command_0_2[1];

static const MR_DuFunctorDesc mdb__interactive_query__mdb__interactive_query__du_functor_desc_query_command_0_2;

static const MR_DuFunctorDesc mdb__interactive_query__mdb__interactive_query__du_functor_desc_query_command_0_3;

static const MR_DuFunctorDescPtr mdb__interactive_query__mdb__interactive_query__du_stag_ordered_query_command_0_0[2];

static const MR_DuFunctorDescPtr mdb__interactive_query__mdb__interactive_query__du_stag_ordered_query_command_0_1[1];

static const MR_DuFunctorDescPtr mdb__interactive_query__mdb__interactive_query__du_stag_ordered_query_command_0_2[1];

static const MR_DuPtagLayout mdb__interactive_query__mdb__interactive_query__du_ptag_ordered_query_command_0[3];

static const MR_DuFunctorDescPtr mdb__interactive_query__mdb__interactive_query__du_name_ordered_query_command_0[4];

static const MR_Integer mdb__interactive_query__mdb__interactive_query__functor_number_map_query_command_0[4];

static const MR_PseudoTypeInfo mdb__interactive_query__mdb__interactive_query__field_types_query_env_0_0[6];

static const MR_ConstString mdb__interactive_query__mdb__interactive_query__field_names_query_env_0_0[6];

static const MR_DuFunctorDesc mdb__interactive_query__mdb__interactive_query__du_functor_desc_query_env_0_0;

static const MR_DuFunctorDescPtr mdb__interactive_query__mdb__interactive_query__du_stag_ordered_query_env_0_0[1];

static const MR_DuPtagLayout mdb__interactive_query__mdb__interactive_query__du_ptag_ordered_query_env_0[1];

static const MR_DuFunctorDescPtr mdb__interactive_query__mdb__interactive_query__du_name_ordered_query_env_0[1];

static const MR_Integer mdb__interactive_query__mdb__interactive_query__functor_number_map_query_env_0[1];

static const MR_EnumFunctorDesc mdb__interactive_query__mdb__interactive_query__enum_functor_desc_query_type_0_0;

static const MR_EnumFunctorDesc mdb__interactive_query__mdb__interactive_query__enum_functor_desc_query_type_0_1;

static const MR_EnumFunctorDesc mdb__interactive_query__mdb__interactive_query__enum_functor_desc_query_type_0_2;

static const MR_EnumFunctorDescPtr mdb__interactive_query__mdb__interactive_query__enum_value_ordered_query_type_0[3];

static const MR_EnumFunctorDescPtr mdb__interactive_query__mdb__interactive_query__enum_name_ordered_query_type_0[3];

static const MR_Integer mdb__interactive_query__mdb__interactive_query__functor_number_map_query_type_0[3];

static const MR_VA_TypeInfo_Struct3 mdb__interactive_query____vti_pred_3tree234__ti_tree234_2builtin__type_ctor_info_string_0univ__type_ctor_info_univ_0tree234__ti_tree234_2builtin__type_ctor_info_string_0univ__type_ctor_info_univ_0bool__type_ctor_info_bool_0;

static const MR_VA_TypeInfo_Struct5 mdb__interactive_query____vti_pred_5tree234__ti_tree234_2builtin__type_ctor_info_string_0univ__type_ctor_info_univ_0tree234__ti_tree234_2builtin__type_ctor_info_string_0univ__type_ctor_info_univ_0bool__type_ctor_info_bool_0io__type_ctor_info_state_0io__type_ctor_info_state_0;

static const MR_DuFunctorDesc mdb__interactive_query__mdb__interactive_query__du_functor_desc_solution_0_0;

static const MR_PseudoTypeInfo mdb__interactive_query__mdb__interactive_query__field_types_solution_0_1[1];

static const MR_DuFunctorDesc mdb__interactive_query__mdb__interactive_query__du_functor_desc_solution_0_1;

static const MR_DuFunctorDescPtr mdb__interactive_query__mdb__interactive_query__du_stag_ordered_solution_0_0[1];

static const MR_DuFunctorDescPtr mdb__interactive_query__mdb__interactive_query__du_stag_ordered_solution_0_1[1];

static const MR_DuPtagLayout mdb__interactive_query__mdb__interactive_query__du_ptag_ordered_solution_0[2];

static const MR_DuFunctorDescPtr mdb__interactive_query__mdb__interactive_query__du_name_ordered_solution_0[2];

static const MR_Integer mdb__interactive_query__mdb__interactive_query__functor_number_map_solution_0[2];

static MR_bool MR_CALL 
mdb__interactive_query____Unify____bindings_0_0_10001(
  MR_Box mdb__interactive_query__wrapper_arg_1,
  MR_Box mdb__interactive_query__wrapper_arg_2);

static void MR_CALL 
mdb__interactive_query____Compare____bindings_0_0_10001(
  MR_Box * mdb__interactive_query__wrapper_arg_1,
  MR_Box mdb__interactive_query__wrapper_arg_2,
  MR_Box mdb__interactive_query__wrapper_arg_3);

static MR_bool MR_CALL 
mdb__interactive_query____Unify____imports_0_0_10001(
  MR_Box mdb__interactive_query__wrapper_arg_1,
  MR_Box mdb__interactive_query__wrapper_arg_2);

static void MR_CALL 
mdb__interactive_query____Compare____imports_0_0_10001(
  MR_Box * mdb__interactive_query__wrapper_arg_1,
  MR_Box mdb__interactive_query__wrapper_arg_2,
  MR_Box mdb__interactive_query__wrapper_arg_3);

static MR_bool MR_CALL 
mdb__interactive_query____Unify____interactive_query_response_0_0_10001(
  MR_Box mdb__interactive_query__wrapper_arg_1,
  MR_Box mdb__interactive_query__wrapper_arg_2);

static void MR_CALL 
mdb__interactive_query____Compare____interactive_query_response_0_0_10001(
  MR_Box * mdb__interactive_query__wrapper_arg_1,
  MR_Box mdb__interactive_query__wrapper_arg_2,
  MR_Box mdb__interactive_query__wrapper_arg_3);

static MR_bool MR_CALL 
mdb__interactive_query____Unify____options_string_0_0_10001(
  MR_Box mdb__interactive_query__wrapper_arg_1,
  MR_Box mdb__interactive_query__wrapper_arg_2);

static void MR_CALL 
mdb__interactive_query____Compare____options_string_0_0_10001(
  MR_Box * mdb__interactive_query__wrapper_arg_1,
  MR_Box mdb__interactive_query__wrapper_arg_2,
  MR_Box mdb__interactive_query__wrapper_arg_3);

static MR_bool MR_CALL 
mdb__interactive_query____Unify____prog_0_0_10001(
  MR_Box mdb__interactive_query__wrapper_arg_1,
  MR_Box mdb__interactive_query__wrapper_arg_2);

static void MR_CALL 
mdb__interactive_query____Compare____prog_0_0_10001(
  MR_Box * mdb__interactive_query__wrapper_arg_1,
  MR_Box mdb__interactive_query__wrapper_arg_2,
  MR_Box mdb__interactive_query__wrapper_arg_3);

static MR_bool MR_CALL 
mdb__interactive_query____Unify____query_command_0_0_10001(
  MR_Box mdb__interactive_query__wrapper_arg_1,
  MR_Box mdb__interactive_query__wrapper_arg_2);

static void MR_CALL 
mdb__interactive_query____Compare____query_command_0_0_10001(
  MR_Box * mdb__interactive_query__wrapper_arg_1,
  MR_Box mdb__interactive_query__wrapper_arg_2,
  MR_Box mdb__interactive_query__wrapper_arg_3);

static MR_bool MR_CALL 
mdb__interactive_query____Unify____query_env_0_0_10001(
  MR_Box mdb__interactive_query__wrapper_arg_1,
  MR_Box mdb__interactive_query__wrapper_arg_2);

static void MR_CALL 
mdb__interactive_query____Compare____query_env_0_0_10001(
  MR_Box * mdb__interactive_query__wrapper_arg_1,
  MR_Box mdb__interactive_query__wrapper_arg_2,
  MR_Box mdb__interactive_query__wrapper_arg_3);

static MR_bool MR_CALL 
mdb__interactive_query____Unify____query_type_0_0_10001(
  MR_Box mdb__interactive_query__wrapper_arg_1,
  MR_Box mdb__interactive_query__wrapper_arg_2);

static void MR_CALL 
mdb__interactive_query____Compare____query_type_0_0_10001(
  MR_Box * mdb__interactive_query__wrapper_arg_1,
  MR_Box mdb__interactive_query__wrapper_arg_2,
  MR_Box mdb__interactive_query__wrapper_arg_3);

static MR_bool MR_CALL 
mdb__interactive_query____Unify____run_cc_pred_0_0_10001(
  MR_Box mdb__interactive_query__wrapper_arg_1,
  MR_Box mdb__interactive_query__wrapper_arg_2);

static void MR_CALL 
mdb__interactive_query____Compare____run_cc_pred_0_0_10001(
  MR_Box * mdb__interactive_query__wrapper_arg_1,
  MR_Box mdb__interactive_query__wrapper_arg_2,
  MR_Box mdb__interactive_query__wrapper_arg_3);

static MR_bool MR_CALL 
mdb__interactive_query____Unify____run_io_pred_0_0_10001(
  MR_Box mdb__interactive_query__wrapper_arg_1,
  MR_Box mdb__interactive_query__wrapper_arg_2);

static void MR_CALL 
mdb__interactive_query____Compare____run_io_pred_0_0_10001(
  MR_Box * mdb__interactive_query__wrapper_arg_1,
  MR_Box mdb__interactive_query__wrapper_arg_2,
  MR_Box mdb__interactive_query__wrapper_arg_3);

static MR_bool MR_CALL 
mdb__interactive_query____Unify____run_normal_pred_0_0_10001(
  MR_Box mdb__interactive_query__wrapper_arg_1,
  MR_Box mdb__interactive_query__wrapper_arg_2);

static void MR_CALL 
mdb__interactive_query____Compare____run_normal_pred_0_0_10001(
  MR_Box * mdb__interactive_query__wrapper_arg_1,
  MR_Box mdb__interactive_query__wrapper_arg_2,
  MR_Box mdb__interactive_query__wrapper_arg_3);

static MR_bool MR_CALL 
mdb__interactive_query____Unify____solution_0_0_10001(
  MR_Box mdb__interactive_query__wrapper_arg_1,
  MR_Box mdb__interactive_query__wrapper_arg_2);

static void MR_CALL 
mdb__interactive_query____Compare____solution_0_0_10001(
  MR_Box * mdb__interactive_query__wrapper_arg_1,
  MR_Box mdb__interactive_query__wrapper_arg_2,
  MR_Box mdb__interactive_query__wrapper_arg_3);

static void MR_CALL 
mdb__interactive_query__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_73_110_116_114_111_100_117_99_101_100_70_114_111_109_95_95_112_114_101_100_95_95_119_114_105_116_101_95_112_114_111_103_95_116_111_95_115_116_114_101_97_109_95_95_52_55_53_95_95_49_95_95_91_49_93_95_48_3_p_0(void);

static void MR_CALL 
mdb__interactive_query__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_108_105_110_107_95_97_110_100_95_114_117_110_95_105_111_95_95_91_50_93_95_48_5_p_0_1(
  MR_Box mdb__interactive_query__closure_arg,
  MR_Box * mdb__interactive_query__wrapper_arg_1,
  MR_Box mdb__interactive_query__wrapper_arg_2,
  MR_Box * mdb__interactive_query__wrapper_arg_3);

static void MR_CALL 
mdb__interactive_query__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_108_105_110_107_95_97_110_100_95_114_117_110_95_105_111_95_95_91_50_93_95_48_5_p_0(
  MR_Word mdb__interactive_query__Bindings_6,
  MR_Word mdb__interactive_query__Handle_8);

static void MR_CALL 
mdb__interactive_query__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_99_108_101_97_110_117_112_95_113_117_101_114_121_95_95_91_49_93_95_48_3_p_0(void);

static void MR_CALL 
mdb__interactive_query__IntroducedFrom__pred__write_prog_to_stream__475__1_3_p_0(
  MR_String mdb__interactive_query__LambdaHeadVar__1_123);

static MR_bool MR_CALL 
mdb__interactive_query__IntroducedFrom__pred__make_program__382__1_1_p_0(
  MR_String mdb__interactive_query__LambdaHeadVar__1_21);

static MR_bool MR_CALL 
mdb__interactive_query__IntroducedFrom__pred__make_program__377__1_2_p_0(
  MR_Word mdb__interactive_query__HeadVar__1_19,
  MR_String mdb__interactive_query__HeadVar__2_53);

static MR_bool MR_CALL 
mdb__interactive_query__IntroducedFrom__pred__make_program__376__1_3_p_0(
  MR_Word mdb__interactive_query__Varset_7,
  MR_Word mdb__interactive_query__HeadVar__2_49,
  MR_String * mdb__interactive_query__HeadVar__3_50);

static void MR_CALL 
mdb__interactive_query____Compare____solution_0_0(
  MR_Word * mdb__interactive_query__HeadVar__1_1,
  MR_Word mdb__interactive_query__HeadVar__2_2,
  MR_Word mdb__interactive_query__HeadVar__3_3);

static MR_bool MR_CALL 
mdb__interactive_query____Unify____solution_0_0(
  MR_Word mdb__interactive_query__HeadVar__1_1,
  MR_Word mdb__interactive_query__HeadVar__2_2);

static void MR_CALL 
mdb__interactive_query____Compare____run_normal_pred_0_0(
  MR_Word * mdb__interactive_query__HeadVar__1_1,
  MR_Word mdb__interactive_query__HeadVar__2_2,
  MR_Word mdb__interactive_query__HeadVar__3_3);

static MR_bool MR_CALL 
mdb__interactive_query____Unify____run_normal_pred_0_0(
  MR_Word mdb__interactive_query__HeadVar__1_1,
  MR_Word mdb__interactive_query__HeadVar__2_2);

static void MR_CALL 
mdb__interactive_query____Compare____run_io_pred_0_0(
  MR_Word * mdb__interactive_query__HeadVar__1_1,
  MR_Word mdb__interactive_query__HeadVar__2_2,
  MR_Word mdb__interactive_query__HeadVar__3_3);

static MR_bool MR_CALL 
mdb__interactive_query____Unify____run_io_pred_0_0(
  MR_Word mdb__interactive_query__HeadVar__1_1,
  MR_Word mdb__interactive_query__HeadVar__2_2);

static void MR_CALL 
mdb__interactive_query____Compare____run_cc_pred_0_0(
  MR_Word * mdb__interactive_query__HeadVar__1_1,
  MR_Word mdb__interactive_query__HeadVar__2_2,
  MR_Word mdb__interactive_query__HeadVar__3_3);

static MR_bool MR_CALL 
mdb__interactive_query____Unify____run_cc_pred_0_0(
  MR_Word mdb__interactive_query__HeadVar__1_1,
  MR_Word mdb__interactive_query__HeadVar__2_2);

static void MR_CALL 
mdb__interactive_query____Compare____query_env_0_0(
  MR_Word * mdb__interactive_query__HeadVar__1_1,
  MR_Word mdb__interactive_query__HeadVar__2_2,
  MR_Word mdb__interactive_query__HeadVar__3_3);

static MR_bool MR_CALL 
mdb__interactive_query____Unify____query_env_0_0(
  MR_Word mdb__interactive_query__HeadVar__1_1,
  MR_Word mdb__interactive_query__HeadVar__2_2);

static void MR_CALL 
mdb__interactive_query____Compare____query_command_0_0(
  MR_Word * mdb__interactive_query__HeadVar__1_1,
  MR_Word mdb__interactive_query__HeadVar__2_2,
  MR_Word mdb__interactive_query__HeadVar__3_3);

static MR_bool MR_CALL 
mdb__interactive_query____Unify____query_command_0_0(
  MR_Word mdb__interactive_query__HeadVar__1_1,
  MR_Word mdb__interactive_query__HeadVar__2_2);

static void MR_CALL 
mdb__interactive_query____Compare____prog_0_0(
  MR_Word * mdb__interactive_query__HeadVar__1_1,
  MR_Word mdb__interactive_query__HeadVar__2_2,
  MR_Word mdb__interactive_query__HeadVar__3_3);

static MR_bool MR_CALL 
mdb__interactive_query____Unify____prog_0_0(
  MR_Word mdb__interactive_query__HeadVar__1_1,
  MR_Word mdb__interactive_query__HeadVar__2_2);

static void MR_CALL 
mdb__interactive_query____Compare____interactive_query_response_0_0(
  MR_Word * mdb__interactive_query__HeadVar__1_1,
  MR_Word mdb__interactive_query__HeadVar__2_2,
  MR_Word mdb__interactive_query__HeadVar__3_3);

static MR_bool MR_CALL 
mdb__interactive_query____Unify____interactive_query_response_0_0(
  MR_Word mdb__interactive_query__HeadVar__1_1,
  MR_Word mdb__interactive_query__HeadVar__2_2);

static void MR_CALL 
mdb__interactive_query____Compare____bindings_0_0(
  MR_Word * mdb__interactive_query__HeadVar__1_1,
  MR_Word mdb__interactive_query__HeadVar__2_2,
  MR_Word mdb__interactive_query__HeadVar__3_3);

static MR_bool MR_CALL 
mdb__interactive_query____Unify____bindings_0_0(
  MR_Word mdb__interactive_query__HeadVar__1_1,
  MR_Word mdb__interactive_query__HeadVar__2_2);

static MR_bool MR_CALL 
mdb__interactive_query__system_is_darwin_0_p_0(void);

static MR_Word MR_CALL 
mdb__interactive_query__inst_cast_io_1_f_0(
  MR_Word mdb__interactive_query__X_1);

static MR_Word MR_CALL 
mdb__interactive_query__inst_cast_cc_1_f_0(
  MR_Word mdb__interactive_query__X_1);

static MR_Word MR_CALL 
mdb__interactive_query__inst_cast_normal_1_f_0(
  MR_Word mdb__interactive_query__X_1);

static void MR_CALL 
mdb__interactive_query__write_binding_4_p_0(
  MR_Word mdb__interactive_query__Bindings_5,
  MR_String mdb__interactive_query__Output_6);

static void MR_CALL 
mdb__interactive_query__write_solution_5_p_0_1(
  MR_Box mdb__interactive_query__closure_arg,
  MR_Box mdb__interactive_query__wrapper_arg_1,
  MR_Box mdb__interactive_query__wrapper_arg_2,
  MR_Box * mdb__interactive_query__wrapper_arg_3);

static void MR_CALL 
mdb__interactive_query__write_solution_5_p_0(
  MR_Word mdb__interactive_query__Outputs_6,
  MR_String mdb__interactive_query__End_7,
  MR_Word mdb__interactive_query__Solution_8);

static void MR_CALL 
mdb__interactive_query__call_run_io_5_p_0(
  MR_Word mdb__interactive_query__QueryPred0_6,
  MR_Word mdb__interactive_query__Bindings0_7,
  MR_Word * mdb__interactive_query__Solution_8);

static MR_bool MR_CALL 
mdb__interactive_query__call_run_cc_3_p_0(
  MR_Word mdb__interactive_query__QueryPred0_4,
  MR_Word mdb__interactive_query__Bindings0_5,
  MR_Word * mdb__interactive_query__Solution_6);

static MR_bool MR_CALL 
mdb__interactive_query__link_and_run_cc_5_p_0_1(
  MR_Box mdb__interactive_query__closure_arg,
  MR_Box * mdb__interactive_query__wrapper_arg_1);

static void MR_CALL 
mdb__interactive_query__link_and_run_cc_5_p_0(
  MR_Word mdb__interactive_query__Bindings_6,
  MR_Word mdb__interactive_query__Outputs_7,
  MR_Word mdb__interactive_query__Handle_8);

static void MR_CALL 
mdb__interactive_query__call_run_normal_3_p_0_2(
  void * mdb__interactive_query__env_ptr_arg);

static void MR_CALL 
mdb__interactive_query__call_run_normal_3_p_0_1(
  void * mdb__interactive_query__env_ptr_arg);

static void MR_CALL 
mdb__interactive_query__call_run_normal_3_p_0(
  MR_Word mdb__interactive_query__QueryPred0_4,
  MR_Word mdb__interactive_query__Bindings0_5,
  MR_Word * mdb__interactive_query__Solution_6,
  MR_Cont mdb__interactive_query__cont,
  void * mdb__interactive_query__cont_env_ptr);

static void MR_CALL 
mdb__interactive_query__link_and_run_normal_5_p_0_3(
  MR_Box mdb__interactive_query__closure_arg,
  MR_Box mdb__interactive_query__wrapper_arg_1,
  MR_Box mdb__interactive_query__wrapper_arg_2,
  MR_Box * mdb__interactive_query__wrapper_arg_3);

static void MR_CALL 
mdb__interactive_query__link_and_run_normal_5_p_0_1(
  void * mdb__interactive_query__env_ptr_arg);

static void MR_CALL 
mdb__interactive_query__link_and_run_normal_5_p_0_2(
  MR_Box mdb__interactive_query__closure_arg,
  MR_Box * mdb__interactive_query__wrapper_arg_1,
  MR_Cont mdb__interactive_query__cont,
  void * mdb__interactive_query__cont_env_ptr);

static void MR_CALL 
mdb__interactive_query__link_and_run_normal_5_p_0(
  MR_Word mdb__interactive_query__Bindings_6,
  MR_Word mdb__interactive_query__Outputs_7,
  MR_Word mdb__interactive_query__Handle_8);

static void MR_CALL 
mdb__interactive_query__dynamically_load_and_run_3_p_0(
  MR_Word mdb__interactive_query__Program_4);

static MR_String MR_CALL 
mdb__interactive_query__query_module_name_0_f_0(void);

static MR_String MR_CALL 
mdb__interactive_query__grade_option_0_f_0(void);

static void MR_CALL 
mdb__interactive_query__cleanup_file_4_p_0(
  MR_String mdb__interactive_query__Prefix_5,
  MR_String mdb__interactive_query__Suffix_6);

static void MR_CALL 
mdb__interactive_query__compile_file_4_p_0(
  MR_String mdb__interactive_query__Options_5,
  MR_Word * mdb__interactive_query__Succeeded_6);

static void MR_CALL 
mdb__interactive_query__write_import_list_4_p_0_1(
  MR_Box mdb__interactive_query__closure_arg,
  MR_Box mdb__interactive_query__wrapper_arg_1,
  MR_Box mdb__interactive_query__wrapper_arg_2,
  MR_Box * mdb__interactive_query__wrapper_arg_3);

static void MR_CALL 
mdb__interactive_query__write_import_list_4_p_0(
  MR_Word mdb__interactive_query__Out_5,
  MR_Word mdb__interactive_query__Imports_6);

static void MR_CALL 
mdb__interactive_query__write_comma_var_3_p_0(
  MR_String mdb__interactive_query__Var_4);

static void MR_CALL 
mdb__interactive_query__write_args_3_p_0_1(
  MR_Box mdb__interactive_query__closure_arg,
  MR_Box mdb__interactive_query__wrapper_arg_1,
  MR_Box mdb__interactive_query__wrapper_arg_2,
  MR_Box * mdb__interactive_query__wrapper_arg_3);

static void MR_CALL 
mdb__interactive_query__write_args_3_p_0(
  MR_Word mdb__interactive_query__Vars_4);

static void MR_CALL 
mdb__interactive_query__write_var_type_4_p_0(
  MR_Word mdb__interactive_query__Bindings_5,
  MR_String mdb__interactive_query__Var_6);

static void MR_CALL 
mdb__interactive_query__write_arg_types_4_p_0_1(
  MR_Box mdb__interactive_query__closure_arg,
  MR_Box mdb__interactive_query__wrapper_arg_1,
  MR_Box mdb__interactive_query__wrapper_arg_2,
  MR_Box * mdb__interactive_query__wrapper_arg_3);

static void MR_CALL 
mdb__interactive_query__write_arg_types_4_p_0(
  MR_Word mdb__interactive_query__Bindings_5,
  MR_Word mdb__interactive_query__Vars_6);

static void MR_CALL 
mdb__interactive_query__write_line_directive_2_p_0(void);

static void MR_CALL 
mdb__interactive_query__write_set_goal_3_p_0(
  MR_String mdb__interactive_query__Var_4);

static void MR_CALL 
mdb__interactive_query__write_cast_goal_3_p_0(
  MR_String mdb__interactive_query__Var_4);

static MR_String MR_CALL 
mdb__interactive_query__query_type_rule_1_f_0(
  MR_Word mdb__interactive_query__HeadVar__1_1);

static MR_String MR_CALL 
mdb__interactive_query__query_type_extra_args_1_f_0(
  MR_Word mdb__interactive_query__HeadVar__1_1);

static MR_String MR_CALL 
mdb__interactive_query__query_type_extra_modes_1_f_0(
  MR_Word mdb__interactive_query__HeadVar__1_1);

static MR_String MR_CALL 
mdb__interactive_query__query_type_extra_decls_1_f_0(
  MR_Word mdb__interactive_query__HeadVar__1_1);

static MR_String MR_CALL 
mdb__interactive_query__query_type_extra_imports_1_f_0(
  MR_Word mdb__interactive_query__HeadVar__1_1);

static MR_String MR_CALL 
mdb__interactive_query__query_type_detism_1_f_0(
  MR_Word mdb__interactive_query__HeadVar__1_1);

static void MR_CALL 
mdb__interactive_query__write_prog_to_stream_3_p_0_5(
  MR_Box mdb__interactive_query__closure_arg,
  MR_Box mdb__interactive_query__wrapper_arg_1,
  MR_Box mdb__interactive_query__wrapper_arg_2,
  MR_Box * mdb__interactive_query__wrapper_arg_3);

static void MR_CALL 
mdb__interactive_query__write_prog_to_stream_3_p_0_4(
  MR_Box mdb__interactive_query__closure_arg,
  MR_Box mdb__interactive_query__wrapper_arg_1,
  MR_Box mdb__interactive_query__wrapper_arg_2,
  MR_Box * mdb__interactive_query__wrapper_arg_3);

static void MR_CALL 
mdb__interactive_query__write_prog_to_stream_3_p_0_3(
  MR_Box mdb__interactive_query__closure_arg,
  MR_Box mdb__interactive_query__wrapper_arg_1,
  MR_Box mdb__interactive_query__wrapper_arg_2,
  MR_Box * mdb__interactive_query__wrapper_arg_3);

static void MR_CALL 
mdb__interactive_query__write_prog_to_stream_3_p_0_2(
  MR_Box mdb__interactive_query__closure_arg,
  MR_Box mdb__interactive_query__wrapper_arg_1,
  MR_Box mdb__interactive_query__wrapper_arg_2,
  MR_Box * mdb__interactive_query__wrapper_arg_3);

static void MR_CALL 
mdb__interactive_query__write_prog_to_stream_3_p_0_1(
  MR_Box mdb__interactive_query__closure_arg,
  MR_Box mdb__interactive_query__wrapper_arg_1,
  MR_Box mdb__interactive_query__wrapper_arg_2,
  MR_Box * mdb__interactive_query__wrapper_arg_3);

static void MR_CALL 
mdb__interactive_query__write_prog_to_stream_3_p_0(
  MR_Word mdb__interactive_query__Prog_4);

static void MR_CALL 
mdb__interactive_query__write_prog_to_file_4_p_0(
  MR_Word mdb__interactive_query__Program_5,
  MR_String mdb__interactive_query__FileName_6);

static MR_bool MR_CALL 
mdb__interactive_query__run_query_5_p_0_3(
  MR_Box mdb__interactive_query__closure_arg,
  MR_Box mdb__interactive_query__wrapper_arg_1);

static MR_bool MR_CALL 
mdb__interactive_query__run_query_5_p_0_2(
  MR_Box mdb__interactive_query__closure_arg,
  MR_Box mdb__interactive_query__wrapper_arg_1);

static MR_bool MR_CALL 
mdb__interactive_query__run_query_5_p_0_1(
  MR_Box mdb__interactive_query__closure_arg,
  MR_Box mdb__interactive_query__wrapper_arg_1,
  MR_Box * mdb__interactive_query__wrapper_arg_2);

static void MR_CALL 
mdb__interactive_query__run_query_5_p_0(
  MR_Word mdb__interactive_query__Env_6,
  MR_Word mdb__interactive_query__Goal_7,
  MR_Word mdb__interactive_query__Varset_8);

static MR_bool MR_CALL 
mdb__interactive_query__term_to_list_2_p_0(
  MR_Word mdb__interactive_query__HeadVar__1_1,
  MR_Word * mdb__interactive_query__HeadVar__2_2);

static void MR_CALL 
mdb__interactive_query__parse_query_command_2_p_0(
  MR_Word mdb__interactive_query__Term_3,
  MR_Word * mdb__interactive_query__Cmd_4);

static void MR_CALL 
mdb__interactive_query__send_term_to_socket_4_p_0(
  MR_Word mdb__interactive_query__Term_5,
  MR_Word mdb__interactive_query__SocketStream_6);

static void MR_CALL 
mdb__interactive_query__query_external_2_3_p_0(
  MR_Word mdb__interactive_query__Env_4);

static void MR_CALL 
mdb__interactive_query__query_3_4_p_0(
  MR_Word mdb__interactive_query__Env_5,
  MR_Word mdb__interactive_query__ReadTerm_6);

static void MR_CALL 
mdb__interactive_query__query_2_3_p_0(
  MR_Word mdb__interactive_query__Env_4);


static /* final */ const MR_Box mdb__interactive_query_scalar_common_1[27][2];

static /* final */ const MR_Box mdb__interactive_query_scalar_common_2[9][3];

static /* final */ const MR_Box mdb__interactive_query_scalar_common_3[4][5];

static /* final */ const MR_Box mdb__interactive_query_scalar_common_4[2][7];

static /* final */ const MR_Box mdb__interactive_query_scalar_common_5[3][6];

static /* final */ const MR_Box mdb__interactive_query_scalar_common_6[1][4];

static /* final */ const MR_Box mdb__interactive_query_scalar_common_7[1][1];

static /* final */ const MR_Box mdb__interactive_query_scalar_common_8[2][8];




static /* final */ const MR_Box mdb__interactive_query_scalar_common_1[27][2] = {
  /* row 0 */
  {
    ((MR_Box) (&mercury__term__term__type_ctor_info_var_1)),
    ((MR_Box) (&mercury__term__term__type_ctor_info_generic_0))
  },
  /* row 1 */
  {
    ((MR_Box) (&mercury__list__list__type_ctor_info_list_1)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_string_0))
  },
  /* row 2 */
  {
    ((MR_Box) (&mercury__term__term__type_ctor_info_term_1)),
    ((MR_Box) (&mercury__term__term__type_ctor_info_generic_0))
  },
  /* row 3 */
  {
    ((MR_Box) (&mercury__varset__varset__type_ctor_info_varset_1)),
    ((MR_Box) (&mercury__term__term__type_ctor_info_generic_0))
  },
  /* row 4 */
  {
    ((MR_Box) ((MR_String) "   ( if\n")),
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))))
  },
  /* row 5 */
  {
    ((MR_Box) ((MR_String) ") :-\n")),
    ((MR_Box) (MR_mkword(MR_mktag(1), &mdb__interactive_query_scalar_common_1[4])))
  },
  /* row 6 */
  {
    ((MR_Box) ((MR_String) ":- type inputs ---> inputs")),
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))))
  },
  /* row 7 */
  {
    ((MR_Box) ((MR_String) "\n")),
    ((MR_Box) (MR_mkword(MR_mktag(1), &mdb__interactive_query_scalar_common_1[6])))
  },
  /* row 8 */
  {
    ((MR_Box) ((MR_String) "   ).\n")),
    ((MR_Box) (MR_mkword(MR_mktag(1), &mdb__interactive_query_scalar_common_1[7])))
  },
  /* row 9 */
  {
    ((MR_Box) ((MR_String) "       Loaded = no\n")),
    ((MR_Box) (MR_mkword(MR_mktag(1), &mdb__interactive_query_scalar_common_1[8])))
  },
  /* row 10 */
  {
    ((MR_Box) ((MR_String) "   else\n")),
    ((MR_Box) (MR_mkword(MR_mktag(1), &mdb__interactive_query_scalar_common_1[9])))
  },
  /* row 11 */
  {
    ((MR_Box) ((MR_String) "       Loaded = yes\n")),
    ((MR_Box) (MR_mkword(MR_mktag(1), &mdb__interactive_query_scalar_common_1[10])))
  },
  /* row 12 */
  {
    ((MR_Box) ((MR_String) "#1\n")),
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))))
  },
  /* row 13 */
  {
    ((MR_Box) ((MR_String) ":- pragma source_file(\"<stdin>\").\n")),
    ((MR_Box) (MR_mkword(MR_mktag(1), &mdb__interactive_query_scalar_common_1[12])))
  },
  /* row 14 */
  {
    ((MR_Box) ((MR_String) "\n")),
    ((MR_Box) (MR_mkword(MR_mktag(1), &mdb__interactive_query_scalar_common_1[13])))
  },
  /* row 15 */
  {
    ((MR_Box) ((MR_String) ".\n")),
    ((MR_Box) (MR_mkword(MR_mktag(1), &mdb__interactive_query_scalar_common_1[14])))
  },
  /* row 16 */
  {
    ((MR_Box) ((MR_String) ":- mode query(in")),
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))))
  },
  /* row 17 */
  {
    ((MR_Box) ((MR_String) "#1\n")),
    ((MR_Box) (MR_mkword(MR_mktag(1), &mdb__interactive_query_scalar_common_1[16])))
  },
  /* row 18 */
  {
    ((MR_Box) ((MR_String) "query(inputs")),
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))))
  },
  /* row 19 */
  {
    ((MR_Box) ((MR_String) "#1\n")),
    ((MR_Box) (MR_mkword(MR_mktag(1), &mdb__interactive_query_scalar_common_1[18])))
  },
  /* row 20 */
  {
    ((MR_Box) ((MR_String) ".\n")),
    ((MR_Box) (MR_mkword(MR_mktag(1), &mdb__interactive_query_scalar_common_1[19])))
  },
  /* row 21 */
  {
    ((MR_Box) ((MR_String) "\n")),
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))))
  },
  /* row 22 */
  {
    ((MR_Box) ((MR_String) ".query(inputs")),
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))))
  },
  /* row 23 */
  {
    ((MR_Box) ((MR_String) "),\n")),
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))))
  },
  /* row 24 */
  {
    ((MR_Box) ((MR_String) "), !Bindings),\n")),
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))))
  },
  /* row 25 */
  {
    ((MR_Box) ((MR_String) "mdb_query")),
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))))
  },
  /* row 26 */
  {
    ((MR_Box) ((MR_String) " --compile-to-shared-lib ")),
    ((MR_Box) (MR_mkword(MR_mktag(1), &mdb__interactive_query_scalar_common_1[25])))
  },
};

static /* final */ const MR_Box mdb__interactive_query_scalar_common_2[9][3] = {
  /* row 0 */
  {
    ((MR_Box) (&mercury__tree234__tree234__type_ctor_info_tree234_2)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_string_0)),
    ((MR_Box) (&mercury__univ__univ__type_ctor_info_univ_0))
  },
  /* row 1 */
  {
    ((MR_Box) (&mdb__interactive_query_scalar_common_6[0])),
    ((MR_Box) (mdb__interactive_query__run_query_5_p_0_3)),
    ((MR_Box) (MR_Word) ((MR_Integer) 0))
  },
  /* row 2 */
  {
    ((MR_Box) (&mdb__interactive_query_scalar_common_5[1])),
    ((MR_Box) (mdb__interactive_query__write_prog_to_stream_3_p_0_1)),
    ((MR_Box) (MR_Word) ((MR_Integer) 0))
  },
  /* row 3 */
  {
    ((MR_Box) (&mdb__interactive_query_scalar_common_5[1])),
    ((MR_Box) (mdb__interactive_query__write_prog_to_stream_3_p_0_2)),
    ((MR_Box) (MR_Word) ((MR_Integer) 0))
  },
  /* row 4 */
  {
    ((MR_Box) (&mdb__interactive_query_scalar_common_5[1])),
    ((MR_Box) (mdb__interactive_query__write_prog_to_stream_3_p_0_3)),
    ((MR_Box) (MR_Word) ((MR_Integer) 0))
  },
  /* row 5 */
  {
    ((MR_Box) (&mdb__interactive_query_scalar_common_5[1])),
    ((MR_Box) (mdb__interactive_query__write_prog_to_stream_3_p_0_4)),
    ((MR_Box) (MR_Word) ((MR_Integer) 0))
  },
  /* row 6 */
  {
    ((MR_Box) (&mdb__interactive_query_scalar_common_5[1])),
    ((MR_Box) (mdb__interactive_query__write_prog_to_stream_3_p_0_5)),
    ((MR_Box) (MR_Word) ((MR_Integer) 0))
  },
  /* row 7 */
  {
    ((MR_Box) (&mdb__interactive_query_scalar_common_5[1])),
    ((MR_Box) (mdb__interactive_query__write_args_3_p_0_1)),
    ((MR_Box) (MR_Word) ((MR_Integer) 0))
  },
  /* row 8 */
  {
    ((MR_Box) (&mdb__interactive_query_scalar_common_5[1])),
    ((MR_Box) (mdb__interactive_query__write_import_list_4_p_0_1)),
    ((MR_Box) (MR_Word) ((MR_Integer) 0))
  },
};

static /* final */ const MR_Box mdb__interactive_query_scalar_common_3[4][5] = {
  /* row 0 */
  {
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_pred_0)),
    ((MR_Box) ((MR_Integer) 3)),
    ((MR_Box) (&mdb__interactive_query_scalar_common_2[0])),
    ((MR_Box) (&mdb__interactive_query_scalar_common_2[0])),
    ((MR_Box) (&mercury__bool__bool__type_ctor_info_bool_0))
  },
  /* row 1 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 2)),
    ((MR_Box) (&mdb__interactive_query__tree234__pti_tree234_2__plain_builtin__type_ctor_info_string_0__plain_univ__type_ctor_info_univ_0)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_string_0))
  },
  /* row 2 */
  {
    ((MR_Box) ((MR_Integer) 0)),
    ((MR_Box) (MR_mkword(MR_mktag(1), &mdb__interactive_query_scalar_common_7[0]))),
    ((MR_Box) ((MR_String) "run")),
    ((MR_Box) ((MR_Integer) 3)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row 3 */
  {
    ((MR_Box) ((MR_Integer) 0)),
    ((MR_Box) (MR_mkword(MR_mktag(1), &mdb__interactive_query_scalar_common_7[0]))),
    ((MR_Box) ((MR_String) "run")),
    ((MR_Box) ((MR_Integer) 5)),
    ((MR_Box) ((MR_Integer) 0))
  },
};

static /* final */ const MR_Box mdb__interactive_query_scalar_common_4[2][7] = {
  /* row 0 */
  {
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_pred_0)),
    ((MR_Box) ((MR_Integer) 5)),
    ((MR_Box) (&mdb__interactive_query_scalar_common_2[0])),
    ((MR_Box) (&mdb__interactive_query_scalar_common_2[0])),
    ((MR_Box) (&mercury__bool__bool__type_ctor_info_bool_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0))
  },
  /* row 1 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 4)),
    ((MR_Box) (&mdb__interactive_query__tree234__pti_tree234_2__plain_builtin__type_ctor_info_string_0__plain_univ__type_ctor_info_univ_0)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_string_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0))
  },
};

static /* final */ const MR_Box mdb__interactive_query_scalar_common_5[3][6] = {
  /* row 0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 3)),
    ((MR_Box) (&mdb__interactive_query__varset__pti_varset_1__plain_term__type_ctor_info_generic_0)),
    ((MR_Box) (&mdb__interactive_query__term__pti_var_1__plain_term__type_ctor_info_generic_0)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_string_0))
  },
  /* row 1 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 3)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_string_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0))
  },
  /* row 2 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 3)),
    ((MR_Box) (&mdb__interactive_query____vpti_pred_3__plain_tree234__ti_tree234_2builtin__type_ctor_info_string_0univ__type_ctor_info_univ_0__plain_tree234__ti_tree234_2builtin__type_ctor_info_string_0univ__type_ctor_info_univ_0__plain_bool__type_ctor_info_bool_0)),
    ((MR_Box) (&mdb__interactive_query__tree234__pti_tree234_2__plain_builtin__type_ctor_info_string_0__plain_univ__type_ctor_info_univ_0)),
    ((MR_Box) (&mdb__interactive_query__mdb__interactive_query__type_ctor_info_solution_0))
  },
};

static /* final */ const MR_Box mdb__interactive_query_scalar_common_6[1][4] = {
  /* row 0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 1)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_string_0))
  },
};

static /* final */ const MR_Box mdb__interactive_query_scalar_common_7[1][1] = {
  /* row 0 */
  {
    ((MR_Box) ((MR_String) "mdb_query"))
  },
};

static /* final */ const MR_Box mdb__interactive_query_scalar_common_8[2][8] = {
  /* row 0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 5)),
    ((MR_Box) (&mdb__interactive_query__list__pti_list_1__plain_builtin__type_ctor_info_string_0)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_string_0)),
    ((MR_Box) (&mdb__interactive_query__mdb__interactive_query__type_ctor_info_solution_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0))
  },
  /* row 1 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 5)),
    ((MR_Box) (&mdb__interactive_query____vpti_pred_5__plain_tree234__ti_tree234_2builtin__type_ctor_info_string_0univ__type_ctor_info_univ_0__plain_tree234__ti_tree234_2builtin__type_ctor_info_string_0univ__type_ctor_info_univ_0__plain_bool__type_ctor_info_bool_0__plain_io__type_ctor_info_state_0__plain_io__type_ctor_info_state_0)),
    ((MR_Box) (&mdb__interactive_query__tree234__pti_tree234_2__plain_builtin__type_ctor_info_string_0__plain_univ__type_ctor_info_univ_0)),
    ((MR_Box) (&mdb__interactive_query__mdb__interactive_query__type_ctor_info_solution_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0))
  },
};



#include "io.mh"
#include "mdb.mh"
#include "string.mh"
#include "time.mh"
#include "mdb.interactive_query.mh"

#line 95 "interactive_query.m"
void 
ML_query(
  MR_Word mdb__interactive_query__QueryType_10,
  MR_Word mdb__interactive_query__Imports_11,
  MR_String mdb__interactive_query__Options_12,
  MR_Word mdb__interactive_query__Names_13,
  MR_Word mdb__interactive_query__Values_14,
  MR_Word mdb__interactive_query__MdbStdin_15,
  MR_Word mdb__interactive_query__MdbStdout_16)
#line 95 "interactive_query.m"
{
#line 95 "interactive_query.m"
	mdb__interactive_query__query_9_p_0((MR_Word) mdb__interactive_query__QueryType_10, (MR_Word) mdb__interactive_query__Imports_11, (MR_String) mdb__interactive_query__Options_12, (MR_Word) mdb__interactive_query__Names_13, (MR_Word) mdb__interactive_query__Values_14, (MR_Word) mdb__interactive_query__MdbStdin_15, (MR_Word) mdb__interactive_query__MdbStdout_16);
}

#line 182 "interactive_query.m"
void 
ML_query_external(
  MR_Word mdb__interactive_query__QueryType_10,
  MR_Word mdb__interactive_query__Imports_11,
  MR_String mdb__interactive_query__Options_12,
  MR_Word mdb__interactive_query__Names_13,
  MR_Word mdb__interactive_query__Values_14,
  MR_Word mdb__interactive_query__SocketIn_15,
  MR_Word mdb__interactive_query__SocketOut_16)
#line 182 "interactive_query.m"
{
#line 182 "interactive_query.m"
	mdb__interactive_query__query_external_9_p_0((MR_Word) mdb__interactive_query__QueryType_10, (MR_Word) mdb__interactive_query__Imports_11, (MR_String) mdb__interactive_query__Options_12, (MR_Word) mdb__interactive_query__Names_13, (MR_Word) mdb__interactive_query__Values_14, (MR_Word) mdb__interactive_query__SocketIn_15, (MR_Word) mdb__interactive_query__SocketOut_16);
}


static const MR_FA_PseudoTypeInfo_Struct1 mdb__interactive_query__varset__pti_varset_1__plain_term__type_ctor_info_generic_0 = {
  &mercury__varset__varset__type_ctor_info_varset_1,
  {
    (MR_PseudoTypeInfo) &mercury__term__term__type_ctor_info_generic_0
  }
};

static const MR_FA_PseudoTypeInfo_Struct1 mdb__interactive_query__term__pti_var_1__plain_term__type_ctor_info_generic_0 = {
  &mercury__term__term__type_ctor_info_var_1,
  {
    (MR_PseudoTypeInfo) &mercury__term__term__type_ctor_info_generic_0
  }
};

static const MR_FA_PseudoTypeInfo_Struct2 mdb__interactive_query__tree234__pti_tree234_2__plain_builtin__type_ctor_info_string_0__plain_univ__type_ctor_info_univ_0 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_string_0,
    (MR_PseudoTypeInfo) &mercury__univ__univ__type_ctor_info_univ_0
  }
};

static const MR_FA_TypeInfo_Struct2 mdb__interactive_query__tree234__ti_tree234_2builtin__type_ctor_info_string_0univ__type_ctor_info_univ_0 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_TypeInfo) &mercury__builtin__builtin__type_ctor_info_string_0,
    (MR_TypeInfo) &mercury__univ__univ__type_ctor_info_univ_0
  }
};

static const MR_VA_PseudoTypeInfo_Struct3 mdb__interactive_query____vpti_pred_3__plain_tree234__ti_tree234_2builtin__type_ctor_info_string_0univ__type_ctor_info_univ_0__plain_tree234__ti_tree234_2builtin__type_ctor_info_string_0univ__type_ctor_info_univ_0__plain_bool__type_ctor_info_bool_0 = {
  &mercury__builtin__builtin__type_ctor_info_pred_0,
  (MR_Integer) 3,
  {
    (MR_PseudoTypeInfo) &mdb__interactive_query__tree234__ti_tree234_2builtin__type_ctor_info_string_0univ__type_ctor_info_univ_0,
    (MR_PseudoTypeInfo) &mdb__interactive_query__tree234__ti_tree234_2builtin__type_ctor_info_string_0univ__type_ctor_info_univ_0,
    (MR_PseudoTypeInfo) &mercury__bool__bool__type_ctor_info_bool_0
  }
};

static const MR_FA_PseudoTypeInfo_Struct1 mdb__interactive_query__list__pti_list_1__plain_builtin__type_ctor_info_string_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  {
    (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_string_0
  }
};

static const MR_VA_PseudoTypeInfo_Struct5 mdb__interactive_query____vpti_pred_5__plain_tree234__ti_tree234_2builtin__type_ctor_info_string_0univ__type_ctor_info_univ_0__plain_tree234__ti_tree234_2builtin__type_ctor_info_string_0univ__type_ctor_info_univ_0__plain_bool__type_ctor_info_bool_0__plain_io__type_ctor_info_state_0__plain_io__type_ctor_info_state_0 = {
  &mercury__builtin__builtin__type_ctor_info_pred_0,
  (MR_Integer) 5,
  {
    (MR_PseudoTypeInfo) &mdb__interactive_query__tree234__ti_tree234_2builtin__type_ctor_info_string_0univ__type_ctor_info_univ_0,
    (MR_PseudoTypeInfo) &mdb__interactive_query__tree234__ti_tree234_2builtin__type_ctor_info_string_0univ__type_ctor_info_univ_0,
    (MR_PseudoTypeInfo) &mercury__bool__bool__type_ctor_info_bool_0,
    (MR_PseudoTypeInfo) &mercury__io__io__type_ctor_info_state_0,
    (MR_PseudoTypeInfo) &mercury__io__io__type_ctor_info_state_0
  }
};

const MR_TypeCtorInfo_Struct mdb__interactive_query__mdb__interactive_query__type_ctor_info_bindings_0 = {
  (MR_Integer) 0,
  (MR_Integer) 17,
  (MR_Integer) -1,
  mercury__private_builtin__MR_TYPECTOR_REP_EQUIV_GROUND,
  ((MR_Box) (mdb__interactive_query____Unify____bindings_0_0_10001)),
  ((MR_Box) (mdb__interactive_query____Compare____bindings_0_0_10001)),
  (MR_String) "mdb.interactive_query",
  (MR_String) "bindings",
  {     NULL },
  {     (MR_PseudoTypeInfo) &mdb__interactive_query__tree234__ti_tree234_2builtin__type_ctor_info_string_0univ__type_ctor_info_univ_0 },
  (MR_Integer) -1,
  (MR_Integer) 0,
  NULL
};

static const MR_FA_TypeInfo_Struct1 mdb__interactive_query__list__ti_list_1builtin__type_ctor_info_string_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  {
    (MR_TypeInfo) &mercury__builtin__builtin__type_ctor_info_string_0
  }
};

const MR_TypeCtorInfo_Struct mdb__interactive_query__mdb__interactive_query__type_ctor_info_imports_0 = {
  (MR_Integer) 0,
  (MR_Integer) 17,
  (MR_Integer) -1,
  mercury__private_builtin__MR_TYPECTOR_REP_EQUIV_GROUND,
  ((MR_Box) (mdb__interactive_query____Unify____imports_0_0_10001)),
  ((MR_Box) (mdb__interactive_query____Compare____imports_0_0_10001)),
  (MR_String) "mdb.interactive_query",
  (MR_String) "imports",
  {     NULL },
  {     (MR_PseudoTypeInfo) &mdb__interactive_query__list__ti_list_1builtin__type_ctor_info_string_0 },
  (MR_Integer) -1,
  (MR_Integer) 0,
  NULL
};

static const MR_DuFunctorDesc mdb__interactive_query__mdb__interactive_query__du_functor_desc_interactive_query_response_0_0 = {
  (MR_String) "iq_ok",
  (MR_Integer) 0,
  (MR_Integer) 0,
  mercury__private_builtin__MR_SECTAG_LOCAL,
  (MR_Integer) 0,
  (MR_Integer) 0,
  (MR_Integer) 0,
  NULL,
  NULL,
  NULL,
  NULL,
  mercury__private_builtin__MR_FUNCTOR_SUBTYPE_NONE
};

static const MR_PseudoTypeInfo mdb__interactive_query__mdb__interactive_query__field_types_interactive_query_response_0_1[1] = {
  (MR_PseudoTypeInfo) &mdb__interactive_query__list__ti_list_1builtin__type_ctor_info_string_0
};

static const MR_DuFunctorDesc mdb__interactive_query__mdb__interactive_query__du_functor_desc_interactive_query_response_0_1 = {
  (MR_String) "iq_imported",
  (MR_Integer) 1,
  (MR_Integer) 0,
  mercury__private_builtin__MR_SECTAG_NONE,
  (MR_Integer) 1,
  (MR_Integer) -1,
  (MR_Integer) 1,
  mdb__interactive_query__mdb__interactive_query__field_types_interactive_query_response_0_1,
  NULL,
  NULL,
  NULL,
  mercury__private_builtin__MR_FUNCTOR_SUBTYPE_NONE
};

static const MR_DuFunctorDesc mdb__interactive_query__mdb__interactive_query__du_functor_desc_interactive_query_response_0_2 = {
  (MR_String) "iq_quit",
  (MR_Integer) 0,
  (MR_Integer) 0,
  mercury__private_builtin__MR_SECTAG_LOCAL,
  (MR_Integer) 0,
  (MR_Integer) 1,
  (MR_Integer) 2,
  NULL,
  NULL,
  NULL,
  NULL,
  mercury__private_builtin__MR_FUNCTOR_SUBTYPE_NONE
};

static const MR_DuFunctorDesc mdb__interactive_query__mdb__interactive_query__du_functor_desc_interactive_query_response_0_3 = {
  (MR_String) "iq_eof",
  (MR_Integer) 0,
  (MR_Integer) 0,
  mercury__private_builtin__MR_SECTAG_LOCAL,
  (MR_Integer) 0,
  (MR_Integer) 2,
  (MR_Integer) 3,
  NULL,
  NULL,
  NULL,
  NULL,
  mercury__private_builtin__MR_FUNCTOR_SUBTYPE_NONE
};

static const MR_PseudoTypeInfo mdb__interactive_query__mdb__interactive_query__field_types_interactive_query_response_0_4[1] = {
  (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_string_0
};

static const MR_DuFunctorDesc mdb__interactive_query__mdb__interactive_query__du_functor_desc_interactive_query_response_0_4 = {
  (MR_String) "iq_error",
  (MR_Integer) 1,
  (MR_Integer) 0,
  mercury__private_builtin__MR_SECTAG_NONE,
  (MR_Integer) 2,
  (MR_Integer) -1,
  (MR_Integer) 4,
  mdb__interactive_query__mdb__interactive_query__field_types_interactive_query_response_0_4,
  NULL,
  NULL,
  NULL,
  mercury__private_builtin__MR_FUNCTOR_SUBTYPE_NONE
};

static const MR_DuFunctorDescPtr mdb__interactive_query__mdb__interactive_query__du_stag_ordered_interactive_query_response_0_0[3] = {
  &mdb__interactive_query__mdb__interactive_query__du_functor_desc_interactive_query_response_0_0,
  &mdb__interactive_query__mdb__interactive_query__du_functor_desc_interactive_query_response_0_2,
  &mdb__interactive_query__mdb__interactive_query__du_functor_desc_interactive_query_response_0_3
};

static const MR_DuFunctorDescPtr mdb__interactive_query__mdb__interactive_query__du_stag_ordered_interactive_query_response_0_1[1] = {
  &mdb__interactive_query__mdb__interactive_query__du_functor_desc_interactive_query_response_0_1
};

static const MR_DuFunctorDescPtr mdb__interactive_query__mdb__interactive_query__du_stag_ordered_interactive_query_response_0_2[1] = {
  &mdb__interactive_query__mdb__interactive_query__du_functor_desc_interactive_query_response_0_4
};

static const MR_DuPtagLayout mdb__interactive_query__mdb__interactive_query__du_ptag_ordered_interactive_query_response_0[3] = {
  {
    (MR_Integer) 3,
    mercury__private_builtin__MR_SECTAG_LOCAL,
    mdb__interactive_query__mdb__interactive_query__du_stag_ordered_interactive_query_response_0_0
  },
  {
    (MR_Integer) 1,
    mercury__private_builtin__MR_SECTAG_NONE,
    mdb__interactive_query__mdb__interactive_query__du_stag_ordered_interactive_query_response_0_1
  },
  {
    (MR_Integer) 1,
    mercury__private_builtin__MR_SECTAG_NONE,
    mdb__interactive_query__mdb__interactive_query__du_stag_ordered_interactive_query_response_0_2
  }
};

static const MR_DuFunctorDescPtr mdb__interactive_query__mdb__interactive_query__du_name_ordered_interactive_query_response_0[5] = {
  &mdb__interactive_query__mdb__interactive_query__du_functor_desc_interactive_query_response_0_3,
  &mdb__interactive_query__mdb__interactive_query__du_functor_desc_interactive_query_response_0_4,
  &mdb__interactive_query__mdb__interactive_query__du_functor_desc_interactive_query_response_0_1,
  &mdb__interactive_query__mdb__interactive_query__du_functor_desc_interactive_query_response_0_0,
  &mdb__interactive_query__mdb__interactive_query__du_functor_desc_interactive_query_response_0_2
};

static const MR_Integer mdb__interactive_query__mdb__interactive_query__functor_number_map_interactive_query_response_0[5] = {
  (MR_Integer) 3,
  (MR_Integer) 2,
  (MR_Integer) 4,
  (MR_Integer) 0,
  (MR_Integer) 1
};

const MR_TypeCtorInfo_Struct mdb__interactive_query__mdb__interactive_query__type_ctor_info_interactive_query_response_0 = {
  (MR_Integer) 0,
  (MR_Integer) 17,
  (MR_Integer) 3,
  mercury__private_builtin__MR_TYPECTOR_REP_DU,
  ((MR_Box) (mdb__interactive_query____Unify____interactive_query_response_0_0_10001)),
  ((MR_Box) (mdb__interactive_query____Compare____interactive_query_response_0_0_10001)),
  (MR_String) "mdb.interactive_query",
  (MR_String) "interactive_query_response",
  {     mdb__interactive_query__mdb__interactive_query__du_name_ordered_interactive_query_response_0 },
  {     mdb__interactive_query__mdb__interactive_query__du_ptag_ordered_interactive_query_response_0 },
  (MR_Integer) 5,
  (MR_Integer) 4,
  mdb__interactive_query__mdb__interactive_query__functor_number_map_interactive_query_response_0
};

const MR_TypeCtorInfo_Struct mdb__interactive_query__mdb__interactive_query__type_ctor_info_options_string_0 = {
  (MR_Integer) 0,
  (MR_Integer) 17,
  (MR_Integer) -1,
  mercury__private_builtin__MR_TYPECTOR_REP_EQUIV_GROUND,
  ((MR_Box) (mdb__interactive_query____Unify____options_string_0_0_10001)),
  ((MR_Box) (mdb__interactive_query____Compare____options_string_0_0_10001)),
  (MR_String) "mdb.interactive_query",
  (MR_String) "options_string",
  {     NULL },
  {     (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_string_0 },
  (MR_Integer) -1,
  (MR_Integer) 0,
  NULL
};

static const MR_FA_TypeInfo_Struct1 mdb__interactive_query__term__ti_term_1term__type_ctor_info_generic_0 = {
  &mercury__term__term__type_ctor_info_term_1,
  {
    (MR_TypeInfo) &mercury__term__term__type_ctor_info_generic_0
  }
};

static const MR_FA_TypeInfo_Struct1 mdb__interactive_query__varset__ti_varset_1term__type_ctor_info_generic_0 = {
  &mercury__varset__varset__type_ctor_info_varset_1,
  {
    (MR_TypeInfo) &mercury__term__term__type_ctor_info_generic_0
  }
};

static const MR_PseudoTypeInfo mdb__interactive_query__mdb__interactive_query__field_types_prog_0_0[7] = {
  (MR_PseudoTypeInfo) &mdb__interactive_query__mdb__interactive_query__type_ctor_info_query_type_0,
  (MR_PseudoTypeInfo) &mdb__interactive_query__list__ti_list_1builtin__type_ctor_info_string_0,
  (MR_PseudoTypeInfo) &mdb__interactive_query__tree234__ti_tree234_2builtin__type_ctor_info_string_0univ__type_ctor_info_univ_0,
  (MR_PseudoTypeInfo) &mdb__interactive_query__list__ti_list_1builtin__type_ctor_info_string_0,
  (MR_PseudoTypeInfo) &mdb__interactive_query__list__ti_list_1builtin__type_ctor_info_string_0,
  (MR_PseudoTypeInfo) &mdb__interactive_query__term__ti_term_1term__type_ctor_info_generic_0,
  (MR_PseudoTypeInfo) &mdb__interactive_query__varset__ti_varset_1term__type_ctor_info_generic_0
};

static const MR_ConstString mdb__interactive_query__mdb__interactive_query__field_names_prog_0_0[7] = {
  (MR_String) "prog_query_type",
  (MR_String) "prog_imports",
  (MR_String) "prog_bindings",
  (MR_String) "prog_inputs",
  (MR_String) "prog_outputs",
  (MR_String) "prog_goal",
  (MR_String) "prog_varset"
};

static const MR_DuFunctorDesc mdb__interactive_query__mdb__interactive_query__du_functor_desc_prog_0_0 = {
  (MR_String) "prog",
  (MR_Integer) 7,
  (MR_Integer) 0,
  mercury__private_builtin__MR_SECTAG_NONE,
  (MR_Integer) 0,
  (MR_Integer) -1,
  (MR_Integer) 0,
  mdb__interactive_query__mdb__interactive_query__field_types_prog_0_0,
  mdb__interactive_query__mdb__interactive_query__field_names_prog_0_0,
  NULL,
  NULL,
  mercury__private_builtin__MR_FUNCTOR_SUBTYPE_NONE
};

static const MR_DuFunctorDescPtr mdb__interactive_query__mdb__interactive_query__du_stag_ordered_prog_0_0[1] = {
  &mdb__interactive_query__mdb__interactive_query__du_functor_desc_prog_0_0
};

static const MR_DuPtagLayout mdb__interactive_query__mdb__interactive_query__du_ptag_ordered_prog_0[1] = {
  {
    (MR_Integer) 1,
    mercury__private_builtin__MR_SECTAG_NONE,
    mdb__interactive_query__mdb__interactive_query__du_stag_ordered_prog_0_0
  }
};

static const MR_DuFunctorDescPtr mdb__interactive_query__mdb__interactive_query__du_name_ordered_prog_0[1] = {
  &mdb__interactive_query__mdb__interactive_query__du_functor_desc_prog_0_0
};

static const MR_Integer mdb__interactive_query__mdb__interactive_query__functor_number_map_prog_0[1] = {
  (MR_Integer) 0
};

const MR_TypeCtorInfo_Struct mdb__interactive_query__mdb__interactive_query__type_ctor_info_prog_0 = {
  (MR_Integer) 0,
  (MR_Integer) 17,
  (MR_Integer) 1,
  mercury__private_builtin__MR_TYPECTOR_REP_DU,
  ((MR_Box) (mdb__interactive_query____Unify____prog_0_0_10001)),
  ((MR_Box) (mdb__interactive_query____Compare____prog_0_0_10001)),
  (MR_String) "mdb.interactive_query",
  (MR_String) "prog",
  {     mdb__interactive_query__mdb__interactive_query__du_name_ordered_prog_0 },
  {     mdb__interactive_query__mdb__interactive_query__du_ptag_ordered_prog_0 },
  (MR_Integer) 1,
  (MR_Integer) 4,
  mdb__interactive_query__mdb__interactive_query__functor_number_map_prog_0
};

static const MR_DuFunctorDesc mdb__interactive_query__mdb__interactive_query__du_functor_desc_query_command_0_0 = {
  (MR_String) "qc_quit",
  (MR_Integer) 0,
  (MR_Integer) 0,
  mercury__private_builtin__MR_SECTAG_LOCAL,
  (MR_Integer) 0,
  (MR_Integer) 0,
  (MR_Integer) 0,
  NULL,
  NULL,
  NULL,
  NULL,
  mercury__private_builtin__MR_FUNCTOR_SUBTYPE_NONE
};

static const MR_PseudoTypeInfo mdb__interactive_query__mdb__interactive_query__field_types_query_command_0_1[1] = {
  (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_string_0
};

static const MR_DuFunctorDesc mdb__interactive_query__mdb__interactive_query__du_functor_desc_query_command_0_1 = {
  (MR_String) "qc_options",
  (MR_Integer) 1,
  (MR_Integer) 0,
  mercury__private_builtin__MR_SECTAG_NONE,
  (MR_Integer) 1,
  (MR_Integer) -1,
  (MR_Integer) 1,
  mdb__interactive_query__mdb__interactive_query__field_types_query_command_0_1,
  NULL,
  NULL,
  NULL,
  mercury__private_builtin__MR_FUNCTOR_SUBTYPE_NONE
};

static const MR_PseudoTypeInfo mdb__interactive_query__mdb__interactive_query__field_types_query_command_0_2[1] = {
  (MR_PseudoTypeInfo) &mdb__interactive_query__list__ti_list_1builtin__type_ctor_info_string_0
};

static const MR_DuFunctorDesc mdb__interactive_query__mdb__interactive_query__du_functor_desc_query_command_0_2 = {
  (MR_String) "qc_imports",
  (MR_Integer) 1,
  (MR_Integer) 0,
  mercury__private_builtin__MR_SECTAG_NONE,
  (MR_Integer) 2,
  (MR_Integer) -1,
  (MR_Integer) 2,
  mdb__interactive_query__mdb__interactive_query__field_types_query_command_0_2,
  NULL,
  NULL,
  NULL,
  mercury__private_builtin__MR_FUNCTOR_SUBTYPE_NONE
};

static const MR_DuFunctorDesc mdb__interactive_query__mdb__interactive_query__du_functor_desc_query_command_0_3 = {
  (MR_String) "qc_goal",
  (MR_Integer) 0,
  (MR_Integer) 0,
  mercury__private_builtin__MR_SECTAG_LOCAL,
  (MR_Integer) 0,
  (MR_Integer) 1,
  (MR_Integer) 3,
  NULL,
  NULL,
  NULL,
  NULL,
  mercury__private_builtin__MR_FUNCTOR_SUBTYPE_NONE
};

static const MR_DuFunctorDescPtr mdb__interactive_query__mdb__interactive_query__du_stag_ordered_query_command_0_0[2] = {
  &mdb__interactive_query__mdb__interactive_query__du_functor_desc_query_command_0_0,
  &mdb__interactive_query__mdb__interactive_query__du_functor_desc_query_command_0_3
};

static const MR_DuFunctorDescPtr mdb__interactive_query__mdb__interactive_query__du_stag_ordered_query_command_0_1[1] = {
  &mdb__interactive_query__mdb__interactive_query__du_functor_desc_query_command_0_1
};

static const MR_DuFunctorDescPtr mdb__interactive_query__mdb__interactive_query__du_stag_ordered_query_command_0_2[1] = {
  &mdb__interactive_query__mdb__interactive_query__du_functor_desc_query_command_0_2
};

static const MR_DuPtagLayout mdb__interactive_query__mdb__interactive_query__du_ptag_ordered_query_command_0[3] = {
  {
    (MR_Integer) 2,
    mercury__private_builtin__MR_SECTAG_LOCAL,
    mdb__interactive_query__mdb__interactive_query__du_stag_ordered_query_command_0_0
  },
  {
    (MR_Integer) 1,
    mercury__private_builtin__MR_SECTAG_NONE,
    mdb__interactive_query__mdb__interactive_query__du_stag_ordered_query_command_0_1
  },
  {
    (MR_Integer) 1,
    mercury__private_builtin__MR_SECTAG_NONE,
    mdb__interactive_query__mdb__interactive_query__du_stag_ordered_query_command_0_2
  }
};

static const MR_DuFunctorDescPtr mdb__interactive_query__mdb__interactive_query__du_name_ordered_query_command_0[4] = {
  &mdb__interactive_query__mdb__interactive_query__du_functor_desc_query_command_0_3,
  &mdb__interactive_query__mdb__interactive_query__du_functor_desc_query_command_0_2,
  &mdb__interactive_query__mdb__interactive_query__du_functor_desc_query_command_0_1,
  &mdb__interactive_query__mdb__interactive_query__du_functor_desc_query_command_0_0
};

static const MR_Integer mdb__interactive_query__mdb__interactive_query__functor_number_map_query_command_0[4] = {
  (MR_Integer) 3,
  (MR_Integer) 2,
  (MR_Integer) 1,
  (MR_Integer) 0
};

const MR_TypeCtorInfo_Struct mdb__interactive_query__mdb__interactive_query__type_ctor_info_query_command_0 = {
  (MR_Integer) 0,
  (MR_Integer) 17,
  (MR_Integer) 3,
  mercury__private_builtin__MR_TYPECTOR_REP_DU,
  ((MR_Box) (mdb__interactive_query____Unify____query_command_0_0_10001)),
  ((MR_Box) (mdb__interactive_query____Compare____query_command_0_0_10001)),
  (MR_String) "mdb.interactive_query",
  (MR_String) "query_command",
  {     mdb__interactive_query__mdb__interactive_query__du_name_ordered_query_command_0 },
  {     mdb__interactive_query__mdb__interactive_query__du_ptag_ordered_query_command_0 },
  (MR_Integer) 4,
  (MR_Integer) 4,
  mdb__interactive_query__mdb__interactive_query__functor_number_map_query_command_0
};

static const MR_PseudoTypeInfo mdb__interactive_query__mdb__interactive_query__field_types_query_env_0_0[6] = {
  (MR_PseudoTypeInfo) &mdb__interactive_query__mdb__interactive_query__type_ctor_info_query_type_0,
  (MR_PseudoTypeInfo) &mdb__interactive_query__list__ti_list_1builtin__type_ctor_info_string_0,
  (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_string_0,
  (MR_PseudoTypeInfo) &mdb__interactive_query__tree234__ti_tree234_2builtin__type_ctor_info_string_0univ__type_ctor_info_univ_0,
  (MR_PseudoTypeInfo) &mercury__io__io__type_ctor_info_input_stream_0,
  (MR_PseudoTypeInfo) &mercury__io__io__type_ctor_info_output_stream_0
};

static const MR_ConstString mdb__interactive_query__mdb__interactive_query__field_names_query_env_0_0[6] = {
  (MR_String) "qe_query_type",
  (MR_String) "qe_imports",
  (MR_String) "qe_options",
  (MR_String) "qe_bindings",
  (MR_String) "qe_in",
  (MR_String) "qe_out"
};

static const MR_DuFunctorDesc mdb__interactive_query__mdb__interactive_query__du_functor_desc_query_env_0_0 = {
  (MR_String) "query_env",
  (MR_Integer) 6,
  (MR_Integer) 0,
  mercury__private_builtin__MR_SECTAG_NONE,
  (MR_Integer) 0,
  (MR_Integer) -1,
  (MR_Integer) 0,
  mdb__interactive_query__mdb__interactive_query__field_types_query_env_0_0,
  mdb__interactive_query__mdb__interactive_query__field_names_query_env_0_0,
  NULL,
  NULL,
  mercury__private_builtin__MR_FUNCTOR_SUBTYPE_NONE
};

static const MR_DuFunctorDescPtr mdb__interactive_query__mdb__interactive_query__du_stag_ordered_query_env_0_0[1] = {
  &mdb__interactive_query__mdb__interactive_query__du_functor_desc_query_env_0_0
};

static const MR_DuPtagLayout mdb__interactive_query__mdb__interactive_query__du_ptag_ordered_query_env_0[1] = {
  {
    (MR_Integer) 1,
    mercury__private_builtin__MR_SECTAG_NONE,
    mdb__interactive_query__mdb__interactive_query__du_stag_ordered_query_env_0_0
  }
};

static const MR_DuFunctorDescPtr mdb__interactive_query__mdb__interactive_query__du_name_ordered_query_env_0[1] = {
  &mdb__interactive_query__mdb__interactive_query__du_functor_desc_query_env_0_0
};

static const MR_Integer mdb__interactive_query__mdb__interactive_query__functor_number_map_query_env_0[1] = {
  (MR_Integer) 0
};

const MR_TypeCtorInfo_Struct mdb__interactive_query__mdb__interactive_query__type_ctor_info_query_env_0 = {
  (MR_Integer) 0,
  (MR_Integer) 17,
  (MR_Integer) 1,
  mercury__private_builtin__MR_TYPECTOR_REP_DU,
  ((MR_Box) (mdb__interactive_query____Unify____query_env_0_0_10001)),
  ((MR_Box) (mdb__interactive_query____Compare____query_env_0_0_10001)),
  (MR_String) "mdb.interactive_query",
  (MR_String) "query_env",
  {     mdb__interactive_query__mdb__interactive_query__du_name_ordered_query_env_0 },
  {     mdb__interactive_query__mdb__interactive_query__du_ptag_ordered_query_env_0 },
  (MR_Integer) 1,
  (MR_Integer) 4,
  mdb__interactive_query__mdb__interactive_query__functor_number_map_query_env_0
};

static const MR_EnumFunctorDesc mdb__interactive_query__mdb__interactive_query__enum_functor_desc_query_type_0_0 = {
  (MR_String) "normal_query",
  (MR_Integer) 0
};

static const MR_EnumFunctorDesc mdb__interactive_query__mdb__interactive_query__enum_functor_desc_query_type_0_1 = {
  (MR_String) "cc_query",
  (MR_Integer) 1
};

static const MR_EnumFunctorDesc mdb__interactive_query__mdb__interactive_query__enum_functor_desc_query_type_0_2 = {
  (MR_String) "io_query",
  (MR_Integer) 2
};

static const MR_EnumFunctorDescPtr mdb__interactive_query__mdb__interactive_query__enum_value_ordered_query_type_0[3] = {
  &mdb__interactive_query__mdb__interactive_query__enum_functor_desc_query_type_0_0,
  &mdb__interactive_query__mdb__interactive_query__enum_functor_desc_query_type_0_1,
  &mdb__interactive_query__mdb__interactive_query__enum_functor_desc_query_type_0_2
};

static const MR_EnumFunctorDescPtr mdb__interactive_query__mdb__interactive_query__enum_name_ordered_query_type_0[3] = {
  &mdb__interactive_query__mdb__interactive_query__enum_functor_desc_query_type_0_1,
  &mdb__interactive_query__mdb__interactive_query__enum_functor_desc_query_type_0_2,
  &mdb__interactive_query__mdb__interactive_query__enum_functor_desc_query_type_0_0
};

static const MR_Integer mdb__interactive_query__mdb__interactive_query__functor_number_map_query_type_0[3] = {
  (MR_Integer) 2,
  (MR_Integer) 0,
  (MR_Integer) 1
};

const MR_TypeCtorInfo_Struct mdb__interactive_query__mdb__interactive_query__type_ctor_info_query_type_0 = {
  (MR_Integer) 0,
  (MR_Integer) 17,
  (MR_Integer) -1,
  mercury__private_builtin__MR_TYPECTOR_REP_ENUM,
  ((MR_Box) (mdb__interactive_query____Unify____query_type_0_0_10001)),
  ((MR_Box) (mdb__interactive_query____Compare____query_type_0_0_10001)),
  (MR_String) "mdb.interactive_query",
  (MR_String) "query_type",
  {     mdb__interactive_query__mdb__interactive_query__enum_name_ordered_query_type_0 },
  {     mdb__interactive_query__mdb__interactive_query__enum_value_ordered_query_type_0 },
  (MR_Integer) 3,
  (MR_Integer) 4,
  mdb__interactive_query__mdb__interactive_query__functor_number_map_query_type_0
};

static const MR_VA_TypeInfo_Struct3 mdb__interactive_query____vti_pred_3tree234__ti_tree234_2builtin__type_ctor_info_string_0univ__type_ctor_info_univ_0tree234__ti_tree234_2builtin__type_ctor_info_string_0univ__type_ctor_info_univ_0bool__type_ctor_info_bool_0 = {
  &mercury__builtin__builtin__type_ctor_info_pred_0,
  (MR_Integer) 3,
  {
    (MR_TypeInfo) &mdb__interactive_query__tree234__ti_tree234_2builtin__type_ctor_info_string_0univ__type_ctor_info_univ_0,
    (MR_TypeInfo) &mdb__interactive_query__tree234__ti_tree234_2builtin__type_ctor_info_string_0univ__type_ctor_info_univ_0,
    (MR_TypeInfo) &mercury__bool__bool__type_ctor_info_bool_0
  }
};

const MR_TypeCtorInfo_Struct mdb__interactive_query__mdb__interactive_query__type_ctor_info_run_cc_pred_0 = {
  (MR_Integer) 0,
  (MR_Integer) 17,
  (MR_Integer) -1,
  mercury__private_builtin__MR_TYPECTOR_REP_EQUIV_GROUND,
  ((MR_Box) (mdb__interactive_query____Unify____run_cc_pred_0_0_10001)),
  ((MR_Box) (mdb__interactive_query____Compare____run_cc_pred_0_0_10001)),
  (MR_String) "mdb.interactive_query",
  (MR_String) "run_cc_pred",
  {     NULL },
  {     (MR_PseudoTypeInfo) &mdb__interactive_query____vti_pred_3tree234__ti_tree234_2builtin__type_ctor_info_string_0univ__type_ctor_info_univ_0tree234__ti_tree234_2builtin__type_ctor_info_string_0univ__type_ctor_info_univ_0bool__type_ctor_info_bool_0 },
  (MR_Integer) -1,
  (MR_Integer) 0,
  NULL
};

static const MR_VA_TypeInfo_Struct5 mdb__interactive_query____vti_pred_5tree234__ti_tree234_2builtin__type_ctor_info_string_0univ__type_ctor_info_univ_0tree234__ti_tree234_2builtin__type_ctor_info_string_0univ__type_ctor_info_univ_0bool__type_ctor_info_bool_0io__type_ctor_info_state_0io__type_ctor_info_state_0 = {
  &mercury__builtin__builtin__type_ctor_info_pred_0,
  (MR_Integer) 5,
  {
    (MR_TypeInfo) &mdb__interactive_query__tree234__ti_tree234_2builtin__type_ctor_info_string_0univ__type_ctor_info_univ_0,
    (MR_TypeInfo) &mdb__interactive_query__tree234__ti_tree234_2builtin__type_ctor_info_string_0univ__type_ctor_info_univ_0,
    (MR_TypeInfo) &mercury__bool__bool__type_ctor_info_bool_0,
    (MR_TypeInfo) &mercury__io__io__type_ctor_info_state_0,
    (MR_TypeInfo) &mercury__io__io__type_ctor_info_state_0
  }
};

const MR_TypeCtorInfo_Struct mdb__interactive_query__mdb__interactive_query__type_ctor_info_run_io_pred_0 = {
  (MR_Integer) 0,
  (MR_Integer) 17,
  (MR_Integer) -1,
  mercury__private_builtin__MR_TYPECTOR_REP_EQUIV_GROUND,
  ((MR_Box) (mdb__interactive_query____Unify____run_io_pred_0_0_10001)),
  ((MR_Box) (mdb__interactive_query____Compare____run_io_pred_0_0_10001)),
  (MR_String) "mdb.interactive_query",
  (MR_String) "run_io_pred",
  {     NULL },
  {     (MR_PseudoTypeInfo) &mdb__interactive_query____vti_pred_5tree234__ti_tree234_2builtin__type_ctor_info_string_0univ__type_ctor_info_univ_0tree234__ti_tree234_2builtin__type_ctor_info_string_0univ__type_ctor_info_univ_0bool__type_ctor_info_bool_0io__type_ctor_info_state_0io__type_ctor_info_state_0 },
  (MR_Integer) -1,
  (MR_Integer) 0,
  NULL
};

const MR_TypeCtorInfo_Struct mdb__interactive_query__mdb__interactive_query__type_ctor_info_run_normal_pred_0 = {
  (MR_Integer) 0,
  (MR_Integer) 17,
  (MR_Integer) -1,
  mercury__private_builtin__MR_TYPECTOR_REP_EQUIV_GROUND,
  ((MR_Box) (mdb__interactive_query____Unify____run_normal_pred_0_0_10001)),
  ((MR_Box) (mdb__interactive_query____Compare____run_normal_pred_0_0_10001)),
  (MR_String) "mdb.interactive_query",
  (MR_String) "run_normal_pred",
  {     NULL },
  {     (MR_PseudoTypeInfo) &mdb__interactive_query____vti_pred_3tree234__ti_tree234_2builtin__type_ctor_info_string_0univ__type_ctor_info_univ_0tree234__ti_tree234_2builtin__type_ctor_info_string_0univ__type_ctor_info_univ_0bool__type_ctor_info_bool_0 },
  (MR_Integer) -1,
  (MR_Integer) 0,
  NULL
};

static const MR_DuFunctorDesc mdb__interactive_query__mdb__interactive_query__du_functor_desc_solution_0_0 = {
  (MR_String) "load_failure",
  (MR_Integer) 0,
  (MR_Integer) 0,
  mercury__private_builtin__MR_SECTAG_LOCAL,
  (MR_Integer) 0,
  (MR_Integer) 0,
  (MR_Integer) 0,
  NULL,
  NULL,
  NULL,
  NULL,
  mercury__private_builtin__MR_FUNCTOR_SUBTYPE_NONE
};

static const MR_PseudoTypeInfo mdb__interactive_query__mdb__interactive_query__field_types_solution_0_1[1] = {
  (MR_PseudoTypeInfo) &mdb__interactive_query__tree234__ti_tree234_2builtin__type_ctor_info_string_0univ__type_ctor_info_univ_0
};

static const MR_DuFunctorDesc mdb__interactive_query__mdb__interactive_query__du_functor_desc_solution_0_1 = {
  (MR_String) "solution",
  (MR_Integer) 1,
  (MR_Integer) 0,
  mercury__private_builtin__MR_SECTAG_NONE,
  (MR_Integer) 1,
  (MR_Integer) -1,
  (MR_Integer) 1,
  mdb__interactive_query__mdb__interactive_query__field_types_solution_0_1,
  NULL,
  NULL,
  NULL,
  mercury__private_builtin__MR_FUNCTOR_SUBTYPE_NONE
};

static const MR_DuFunctorDescPtr mdb__interactive_query__mdb__interactive_query__du_stag_ordered_solution_0_0[1] = {
  &mdb__interactive_query__mdb__interactive_query__du_functor_desc_solution_0_0
};

static const MR_DuFunctorDescPtr mdb__interactive_query__mdb__interactive_query__du_stag_ordered_solution_0_1[1] = {
  &mdb__interactive_query__mdb__interactive_query__du_functor_desc_solution_0_1
};

static const MR_DuPtagLayout mdb__interactive_query__mdb__interactive_query__du_ptag_ordered_solution_0[2] = {
  {
    (MR_Integer) 1,
    mercury__private_builtin__MR_SECTAG_LOCAL,
    mdb__interactive_query__mdb__interactive_query__du_stag_ordered_solution_0_0
  },
  {
    (MR_Integer) 1,
    mercury__private_builtin__MR_SECTAG_NONE,
    mdb__interactive_query__mdb__interactive_query__du_stag_ordered_solution_0_1
  }
};

static const MR_DuFunctorDescPtr mdb__interactive_query__mdb__interactive_query__du_name_ordered_solution_0[2] = {
  &mdb__interactive_query__mdb__interactive_query__du_functor_desc_solution_0_0,
  &mdb__interactive_query__mdb__interactive_query__du_functor_desc_solution_0_1
};

static const MR_Integer mdb__interactive_query__mdb__interactive_query__functor_number_map_solution_0[2] = {
  (MR_Integer) 0,
  (MR_Integer) 1
};

const MR_TypeCtorInfo_Struct mdb__interactive_query__mdb__interactive_query__type_ctor_info_solution_0 = {
  (MR_Integer) 0,
  (MR_Integer) 17,
  (MR_Integer) 2,
  mercury__private_builtin__MR_TYPECTOR_REP_DU,
  ((MR_Box) (mdb__interactive_query____Unify____solution_0_0_10001)),
  ((MR_Box) (mdb__interactive_query____Compare____solution_0_0_10001)),
  (MR_String) "mdb.interactive_query",
  (MR_String) "solution",
  {     mdb__interactive_query__mdb__interactive_query__du_name_ordered_solution_0 },
  {     mdb__interactive_query__mdb__interactive_query__du_ptag_ordered_solution_0 },
  (MR_Integer) 2,
  (MR_Integer) 4,
  mdb__interactive_query__mdb__interactive_query__functor_number_map_solution_0
};

static MR_bool MR_CALL 
mdb__interactive_query____Unify____bindings_0_0_10001(
  MR_Box mdb__interactive_query__wrapper_arg_1,
  MR_Box mdb__interactive_query__wrapper_arg_2)
{
  {
    MR_bool mdb__interactive_query__succeeded;

    {
      mdb__interactive_query__succeeded = mdb__interactive_query____Unify____bindings_0_0(((MR_Word) mdb__interactive_query__wrapper_arg_1), ((MR_Word) mdb__interactive_query__wrapper_arg_2));
    }
    return mdb__interactive_query__succeeded;
  }
}

static void MR_CALL 
mdb__interactive_query____Compare____bindings_0_0_10001(
  MR_Box * mdb__interactive_query__wrapper_arg_1,
  MR_Box mdb__interactive_query__wrapper_arg_2,
  MR_Box mdb__interactive_query__wrapper_arg_3)
{
  {
    MR_Word mdb__interactive_query__conv0_HeadVar__1_1;

    {
      mdb__interactive_query____Compare____bindings_0_0(&mdb__interactive_query__conv0_HeadVar__1_1, ((MR_Word) mdb__interactive_query__wrapper_arg_2), ((MR_Word) mdb__interactive_query__wrapper_arg_3));
    }
    *mdb__interactive_query__wrapper_arg_1 = ((MR_Box) (mdb__interactive_query__conv0_HeadVar__1_1));
  }
}

static MR_bool MR_CALL 
mdb__interactive_query____Unify____imports_0_0_10001(
  MR_Box mdb__interactive_query__wrapper_arg_1,
  MR_Box mdb__interactive_query__wrapper_arg_2)
{
  {
    MR_bool mdb__interactive_query__succeeded;

    {
      mdb__interactive_query__succeeded = mdb__interactive_query____Unify____imports_0_0(((MR_Word) mdb__interactive_query__wrapper_arg_1), ((MR_Word) mdb__interactive_query__wrapper_arg_2));
    }
    return mdb__interactive_query__succeeded;
  }
}

static void MR_CALL 
mdb__interactive_query____Compare____imports_0_0_10001(
  MR_Box * mdb__interactive_query__wrapper_arg_1,
  MR_Box mdb__interactive_query__wrapper_arg_2,
  MR_Box mdb__interactive_query__wrapper_arg_3)
{
  {
    MR_Word mdb__interactive_query__conv0_HeadVar__1_1;

    {
      mdb__interactive_query____Compare____imports_0_0(&mdb__interactive_query__conv0_HeadVar__1_1, ((MR_Word) mdb__interactive_query__wrapper_arg_2), ((MR_Word) mdb__interactive_query__wrapper_arg_3));
    }
    *mdb__interactive_query__wrapper_arg_1 = ((MR_Box) (mdb__interactive_query__conv0_HeadVar__1_1));
  }
}

static MR_bool MR_CALL 
mdb__interactive_query____Unify____interactive_query_response_0_0_10001(
  MR_Box mdb__interactive_query__wrapper_arg_1,
  MR_Box mdb__interactive_query__wrapper_arg_2)
{
  {
    MR_bool mdb__interactive_query__succeeded;

    {
      mdb__interactive_query__succeeded = mdb__interactive_query____Unify____interactive_query_response_0_0(((MR_Word) mdb__interactive_query__wrapper_arg_1), ((MR_Word) mdb__interactive_query__wrapper_arg_2));
    }
    return mdb__interactive_query__succeeded;
  }
}

static void MR_CALL 
mdb__interactive_query____Compare____interactive_query_response_0_0_10001(
  MR_Box * mdb__interactive_query__wrapper_arg_1,
  MR_Box mdb__interactive_query__wrapper_arg_2,
  MR_Box mdb__interactive_query__wrapper_arg_3)
{
  {
    MR_Word mdb__interactive_query__conv0_HeadVar__1_1;

    {
      mdb__interactive_query____Compare____interactive_query_response_0_0(&mdb__interactive_query__conv0_HeadVar__1_1, ((MR_Word) mdb__interactive_query__wrapper_arg_2), ((MR_Word) mdb__interactive_query__wrapper_arg_3));
    }
    *mdb__interactive_query__wrapper_arg_1 = ((MR_Box) (mdb__interactive_query__conv0_HeadVar__1_1));
  }
}

static MR_bool MR_CALL 
mdb__interactive_query____Unify____options_string_0_0_10001(
  MR_Box mdb__interactive_query__wrapper_arg_1,
  MR_Box mdb__interactive_query__wrapper_arg_2)
{
  {
    MR_bool mdb__interactive_query__succeeded;

    {
      mdb__interactive_query__succeeded = mdb__interactive_query____Unify____options_string_0_0(((MR_String) mdb__interactive_query__wrapper_arg_1), ((MR_String) mdb__interactive_query__wrapper_arg_2));
    }
    return mdb__interactive_query__succeeded;
  }
}

static void MR_CALL 
mdb__interactive_query____Compare____options_string_0_0_10001(
  MR_Box * mdb__interactive_query__wrapper_arg_1,
  MR_Box mdb__interactive_query__wrapper_arg_2,
  MR_Box mdb__interactive_query__wrapper_arg_3)
{
  {
    MR_Word mdb__interactive_query__conv0_HeadVar__1_1;

    {
      mdb__interactive_query____Compare____options_string_0_0(&mdb__interactive_query__conv0_HeadVar__1_1, ((MR_String) mdb__interactive_query__wrapper_arg_2), ((MR_String) mdb__interactive_query__wrapper_arg_3));
    }
    *mdb__interactive_query__wrapper_arg_1 = ((MR_Box) (mdb__interactive_query__conv0_HeadVar__1_1));
  }
}

static MR_bool MR_CALL 
mdb__interactive_query____Unify____prog_0_0_10001(
  MR_Box mdb__interactive_query__wrapper_arg_1,
  MR_Box mdb__interactive_query__wrapper_arg_2)
{
  {
    MR_bool mdb__interactive_query__succeeded;

    {
      mdb__interactive_query__succeeded = mdb__interactive_query____Unify____prog_0_0(((MR_Word) mdb__interactive_query__wrapper_arg_1), ((MR_Word) mdb__interactive_query__wrapper_arg_2));
    }
    return mdb__interactive_query__succeeded;
  }
}

static void MR_CALL 
mdb__interactive_query____Compare____prog_0_0_10001(
  MR_Box * mdb__interactive_query__wrapper_arg_1,
  MR_Box mdb__interactive_query__wrapper_arg_2,
  MR_Box mdb__interactive_query__wrapper_arg_3)
{
  {
    MR_Word mdb__interactive_query__conv0_HeadVar__1_1;

    {
      mdb__interactive_query____Compare____prog_0_0(&mdb__interactive_query__conv0_HeadVar__1_1, ((MR_Word) mdb__interactive_query__wrapper_arg_2), ((MR_Word) mdb__interactive_query__wrapper_arg_3));
    }
    *mdb__interactive_query__wrapper_arg_1 = ((MR_Box) (mdb__interactive_query__conv0_HeadVar__1_1));
  }
}

static MR_bool MR_CALL 
mdb__interactive_query____Unify____query_command_0_0_10001(
  MR_Box mdb__interactive_query__wrapper_arg_1,
  MR_Box mdb__interactive_query__wrapper_arg_2)
{
  {
    MR_bool mdb__interactive_query__succeeded;

    {
      mdb__interactive_query__succeeded = mdb__interactive_query____Unify____query_command_0_0(((MR_Word) mdb__interactive_query__wrapper_arg_1), ((MR_Word) mdb__interactive_query__wrapper_arg_2));
    }
    return mdb__interactive_query__succeeded;
  }
}

static void MR_CALL 
mdb__interactive_query____Compare____query_command_0_0_10001(
  MR_Box * mdb__interactive_query__wrapper_arg_1,
  MR_Box mdb__interactive_query__wrapper_arg_2,
  MR_Box mdb__interactive_query__wrapper_arg_3)
{
  {
    MR_Word mdb__interactive_query__conv0_HeadVar__1_1;

    {
      mdb__interactive_query____Compare____query_command_0_0(&mdb__interactive_query__conv0_HeadVar__1_1, ((MR_Word) mdb__interactive_query__wrapper_arg_2), ((MR_Word) mdb__interactive_query__wrapper_arg_3));
    }
    *mdb__interactive_query__wrapper_arg_1 = ((MR_Box) (mdb__interactive_query__conv0_HeadVar__1_1));
  }
}

static MR_bool MR_CALL 
mdb__interactive_query____Unify____query_env_0_0_10001(
  MR_Box mdb__interactive_query__wrapper_arg_1,
  MR_Box mdb__interactive_query__wrapper_arg_2)
{
  {
    MR_bool mdb__interactive_query__succeeded;

    {
      mdb__interactive_query__succeeded = mdb__interactive_query____Unify____query_env_0_0(((MR_Word) mdb__interactive_query__wrapper_arg_1), ((MR_Word) mdb__interactive_query__wrapper_arg_2));
    }
    return mdb__interactive_query__succeeded;
  }
}

static void MR_CALL 
mdb__interactive_query____Compare____query_env_0_0_10001(
  MR_Box * mdb__interactive_query__wrapper_arg_1,
  MR_Box mdb__interactive_query__wrapper_arg_2,
  MR_Box mdb__interactive_query__wrapper_arg_3)
{
  {
    MR_Word mdb__interactive_query__conv0_HeadVar__1_1;

    {
      mdb__interactive_query____Compare____query_env_0_0(&mdb__interactive_query__conv0_HeadVar__1_1, ((MR_Word) mdb__interactive_query__wrapper_arg_2), ((MR_Word) mdb__interactive_query__wrapper_arg_3));
    }
    *mdb__interactive_query__wrapper_arg_1 = ((MR_Box) (mdb__interactive_query__conv0_HeadVar__1_1));
  }
}

static MR_bool MR_CALL 
mdb__interactive_query____Unify____query_type_0_0_10001(
  MR_Box mdb__interactive_query__wrapper_arg_1,
  MR_Box mdb__interactive_query__wrapper_arg_2)
{
  {
    MR_bool mdb__interactive_query__succeeded;

    {
      mdb__interactive_query__succeeded = mdb__interactive_query____Unify____query_type_0_0(((MR_Word) mdb__interactive_query__wrapper_arg_1), ((MR_Word) mdb__interactive_query__wrapper_arg_2));
    }
    return mdb__interactive_query__succeeded;
  }
}

static void MR_CALL 
mdb__interactive_query____Compare____query_type_0_0_10001(
  MR_Box * mdb__interactive_query__wrapper_arg_1,
  MR_Box mdb__interactive_query__wrapper_arg_2,
  MR_Box mdb__interactive_query__wrapper_arg_3)
{
  {
    MR_Word mdb__interactive_query__conv0_HeadVar__1_1;

    {
      mdb__interactive_query____Compare____query_type_0_0(&mdb__interactive_query__conv0_HeadVar__1_1, ((MR_Word) mdb__interactive_query__wrapper_arg_2), ((MR_Word) mdb__interactive_query__wrapper_arg_3));
    }
    *mdb__interactive_query__wrapper_arg_1 = ((MR_Box) (mdb__interactive_query__conv0_HeadVar__1_1));
  }
}

static MR_bool MR_CALL 
mdb__interactive_query____Unify____run_cc_pred_0_0_10001(
  MR_Box mdb__interactive_query__wrapper_arg_1,
  MR_Box mdb__interactive_query__wrapper_arg_2)
{
  {
    MR_bool mdb__interactive_query__succeeded;

    {
      mdb__interactive_query__succeeded = mdb__interactive_query____Unify____run_cc_pred_0_0(((MR_Word) mdb__interactive_query__wrapper_arg_1), ((MR_Word) mdb__interactive_query__wrapper_arg_2));
    }
    return mdb__interactive_query__succeeded;
  }
}

static void MR_CALL 
mdb__interactive_query____Compare____run_cc_pred_0_0_10001(
  MR_Box * mdb__interactive_query__wrapper_arg_1,
  MR_Box mdb__interactive_query__wrapper_arg_2,
  MR_Box mdb__interactive_query__wrapper_arg_3)
{
  {
    MR_Word mdb__interactive_query__conv0_HeadVar__1_1;

    {
      mdb__interactive_query____Compare____run_cc_pred_0_0(&mdb__interactive_query__conv0_HeadVar__1_1, ((MR_Word) mdb__interactive_query__wrapper_arg_2), ((MR_Word) mdb__interactive_query__wrapper_arg_3));
    }
    *mdb__interactive_query__wrapper_arg_1 = ((MR_Box) (mdb__interactive_query__conv0_HeadVar__1_1));
  }
}

static MR_bool MR_CALL 
mdb__interactive_query____Unify____run_io_pred_0_0_10001(
  MR_Box mdb__interactive_query__wrapper_arg_1,
  MR_Box mdb__interactive_query__wrapper_arg_2)
{
  {
    MR_bool mdb__interactive_query__succeeded;

    {
      mdb__interactive_query__succeeded = mdb__interactive_query____Unify____run_io_pred_0_0(((MR_Word) mdb__interactive_query__wrapper_arg_1), ((MR_Word) mdb__interactive_query__wrapper_arg_2));
    }
    return mdb__interactive_query__succeeded;
  }
}

static void MR_CALL 
mdb__interactive_query____Compare____run_io_pred_0_0_10001(
  MR_Box * mdb__interactive_query__wrapper_arg_1,
  MR_Box mdb__interactive_query__wrapper_arg_2,
  MR_Box mdb__interactive_query__wrapper_arg_3)
{
  {
    MR_Word mdb__interactive_query__conv0_HeadVar__1_1;

    {
      mdb__interactive_query____Compare____run_io_pred_0_0(&mdb__interactive_query__conv0_HeadVar__1_1, ((MR_Word) mdb__interactive_query__wrapper_arg_2), ((MR_Word) mdb__interactive_query__wrapper_arg_3));
    }
    *mdb__interactive_query__wrapper_arg_1 = ((MR_Box) (mdb__interactive_query__conv0_HeadVar__1_1));
  }
}

static MR_bool MR_CALL 
mdb__interactive_query____Unify____run_normal_pred_0_0_10001(
  MR_Box mdb__interactive_query__wrapper_arg_1,
  MR_Box mdb__interactive_query__wrapper_arg_2)
{
  {
    MR_bool mdb__interactive_query__succeeded;

    {
      mdb__interactive_query__succeeded = mdb__interactive_query____Unify____run_normal_pred_0_0(((MR_Word) mdb__interactive_query__wrapper_arg_1), ((MR_Word) mdb__interactive_query__wrapper_arg_2));
    }
    return mdb__interactive_query__succeeded;
  }
}

static void MR_CALL 
mdb__interactive_query____Compare____run_normal_pred_0_0_10001(
  MR_Box * mdb__interactive_query__wrapper_arg_1,
  MR_Box mdb__interactive_query__wrapper_arg_2,
  MR_Box mdb__interactive_query__wrapper_arg_3)
{
  {
    MR_Word mdb__interactive_query__conv0_HeadVar__1_1;

    {
      mdb__interactive_query____Compare____run_normal_pred_0_0(&mdb__interactive_query__conv0_HeadVar__1_1, ((MR_Word) mdb__interactive_query__wrapper_arg_2), ((MR_Word) mdb__interactive_query__wrapper_arg_3));
    }
    *mdb__interactive_query__wrapper_arg_1 = ((MR_Box) (mdb__interactive_query__conv0_HeadVar__1_1));
  }
}

static MR_bool MR_CALL 
mdb__interactive_query____Unify____solution_0_0_10001(
  MR_Box mdb__interactive_query__wrapper_arg_1,
  MR_Box mdb__interactive_query__wrapper_arg_2)
{
  {
    MR_bool mdb__interactive_query__succeeded;

    {
      mdb__interactive_query__succeeded = mdb__interactive_query____Unify____solution_0_0(((MR_Word) mdb__interactive_query__wrapper_arg_1), ((MR_Word) mdb__interactive_query__wrapper_arg_2));
    }
    return mdb__interactive_query__succeeded;
  }
}

static void MR_CALL 
mdb__interactive_query____Compare____solution_0_0_10001(
  MR_Box * mdb__interactive_query__wrapper_arg_1,
  MR_Box mdb__interactive_query__wrapper_arg_2,
  MR_Box mdb__interactive_query__wrapper_arg_3)
{
  {
    MR_Word mdb__interactive_query__conv0_HeadVar__1_1;

    {
      mdb__interactive_query____Compare____solution_0_0(&mdb__interactive_query__conv0_HeadVar__1_1, ((MR_Word) mdb__interactive_query__wrapper_arg_2), ((MR_Word) mdb__interactive_query__wrapper_arg_3));
    }
    *mdb__interactive_query__wrapper_arg_1 = ((MR_Box) (mdb__interactive_query__conv0_HeadVar__1_1));
  }
}

static void MR_CALL 
mdb__interactive_query__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_73_110_116_114_111_100_117_99_101_100_70_114_111_109_95_95_112_114_101_100_95_95_119_114_105_116_101_95_112_114_111_103_95_116_111_95_115_116_114_101_97_109_95_95_52_55_53_95_95_49_95_95_91_49_93_95_48_3_p_0(void)
{
  {
    MR_bool mdb__interactive_query__succeeded;

    {
      mercury__io__write_string_3_p_0((MR_String) ", out");
    }
  }
}

static void MR_CALL 
mdb__interactive_query__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_108_105_110_107_95_97_110_100_95_114_117_110_95_105_111_95_95_91_50_93_95_48_5_p_0_1(
  MR_Box mdb__interactive_query__closure_arg,
  MR_Box * mdb__interactive_query__wrapper_arg_1,
  MR_Box mdb__interactive_query__wrapper_arg_2,
  MR_Box * mdb__interactive_query__wrapper_arg_3)
{
  {
    MR_Box mdb__interactive_query__closure = mdb__interactive_query__closure_arg;
    MR_Word mdb__interactive_query__conv0_Solution_8;

    {
      mdb__interactive_query__call_run_io_5_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), mdb__interactive_query__closure, (MR_Integer) 3))), ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__interactive_query__closure, (MR_Integer) 4))), &mdb__interactive_query__conv0_Solution_8);
    }
    *mdb__interactive_query__wrapper_arg_1 = ((MR_Box) (mdb__interactive_query__conv0_Solution_8));
  }
}

static void MR_CALL 
mdb__interactive_query__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_108_105_110_107_95_97_110_100_95_114_117_110_95_105_111_95_95_91_50_93_95_48_5_p_0(
  MR_Word mdb__interactive_query__Bindings_6,
  MR_Word mdb__interactive_query__Handle_8)
{
  {
    MR_bool mdb__interactive_query__succeeded;
    MR_Word mdb__interactive_query__MaybeQuery_10;

    {
      mdb__dl__mercury_sym_5_p_0((MR_Word) &mdb__interactive_query_scalar_common_4[0], mdb__interactive_query__Handle_8, (MR_Word) &mdb__interactive_query_scalar_common_3[3], &mdb__interactive_query__MaybeQuery_10);
    }
    if (((MR_tag((MR_Word) mdb__interactive_query__MaybeQuery_10)) == (MR_mktag((MR_Integer) 1))))
      {
        MR_String mdb__interactive_query__Msg_11 = ((MR_String) (MR_hl_field(MR_mktag(1), mdb__interactive_query__MaybeQuery_10, (MR_Integer) 0)));
        MR_Word mdb__interactive_query__V_24_24;
        MR_Word mdb__interactive_query__V_27_27;

        {
          mdb__interactive_query__V_27_27 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), mdb__interactive_query__V_27_27, 0) = ((MR_Box) (mdb__interactive_query__Msg_11));
          MR_hl_field(MR_mktag(1), mdb__interactive_query__V_27_27, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &mdb__interactive_query_scalar_common_1[21])));
        }
        {
          mdb__interactive_query__V_24_24 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), mdb__interactive_query__V_24_24, 0) = ((MR_Box) ((MR_String) "dlsym failed: "));
          MR_hl_field(MR_mktag(1), mdb__interactive_query__V_24_24, 1) = ((MR_Box) (mdb__interactive_query__V_27_27));
        }
        {
          mercury__io__write_strings_3_p_0(mdb__interactive_query__V_24_24);
        }
      }
    else
      {
        MR_Word mdb__interactive_query__QueryPred_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__interactive_query__MaybeQuery_10, (MR_Integer) 0)));
        MR_Word mdb__interactive_query__Result_13;
        MR_Word mdb__interactive_query__V_20_20;

        {
          mdb__interactive_query__V_20_20 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(MR_mktag(0), mdb__interactive_query__V_20_20, 0) = ((MR_Box) (&mdb__interactive_query_scalar_common_8[1]));
          MR_hl_field(MR_mktag(0), mdb__interactive_query__V_20_20, 1) = ((MR_Box) (mdb__interactive_query__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_108_105_110_107_95_97_110_100_95_114_117_110_95_105_111_95_95_91_50_93_95_48_5_p_0_1));
          MR_hl_field(MR_mktag(0), mdb__interactive_query__V_20_20, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
          MR_hl_field(MR_mktag(0), mdb__interactive_query__V_20_20, 3) = ((MR_Box) (mdb__interactive_query__QueryPred_12));
          MR_hl_field(MR_mktag(0), mdb__interactive_query__V_20_20, 4) = ((MR_Box) (mdb__interactive_query__Bindings_6));
        }
        {
          mercury__exception__try_io_4_p_1((MR_Word) &mdb__interactive_query__mdb__interactive_query__type_ctor_info_solution_0, mdb__interactive_query__V_20_20, &mdb__interactive_query__Result_13);
        }
        if (((MR_tag((MR_Word) mdb__interactive_query__Result_13)) == (MR_mktag((MR_Integer) 2))))
          {
            MR_Word mdb__interactive_query__TypeInfo_36_36;
            MR_Word mdb__interactive_query__Excp_15 = ((MR_Word) (MR_hl_field(MR_mktag(2), mdb__interactive_query__Result_13, (MR_Integer) 0)));
            MR_Box mdb__interactive_query__V_22_22;

            {
              mdb__interactive_query__V_22_22 = mercury__univ__univ_value_1_f_0(&mdb__interactive_query__TypeInfo_36_36, mdb__interactive_query__Excp_15);
            }
            {
              mercury__io__write_string_3_p_0((MR_String) "*** caught exception: ");
            }
            {
              mercury__io__write_cc_3_p_0(mdb__interactive_query__TypeInfo_36_36, mdb__interactive_query__V_22_22);
            }
            {
              mercury__io__nl_2_p_0();
            }
          }
        else
          {
          }
      }
  }
}

static void MR_CALL 
mdb__interactive_query__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_99_108_101_97_110_117_112_95_113_117_101_114_121_95_95_91_49_93_95_48_3_p_0(void)
{
  {
    MR_bool mdb__interactive_query__succeeded;
    MR_Word mdb__interactive_query__V_50_50;
    MR_Word mdb__interactive_query__V_60_60;
    MR_Word mdb__interactive_query__V_70_70;
    MR_Word mdb__interactive_query__V_80_80;
    MR_Word mdb__interactive_query__V_90_90;

    {
      mercury__io__remove_file_4_p_0((MR_String) "mdb_query.m", &mdb__interactive_query__V_50_50);
    }
    {
      mercury__io__remove_file_4_p_0((MR_String) "mdb_query.mh", &mdb__interactive_query__V_60_60);
    }
    {
      mercury__io__remove_file_4_p_0((MR_String) "mdb_query.d", &mdb__interactive_query__V_70_70);
    }
    {
      mercury__io__remove_file_4_p_0((MR_String) "Mercury/ds/mdb_query.d", &mdb__interactive_query__V_80_80);
    }
    {
      mercury__io__remove_file_4_p_0((MR_String) "mdb_query.c", &mdb__interactive_query__V_90_90);
    }
    {
      mdb__interactive_query__cleanup_file_4_p_0((MR_String) "Mercury/cs/", (MR_String) ".c");
    }
    {
      mdb__interactive_query__cleanup_file_4_p_0((MR_String) "", (MR_String) ".c_date");
    }
    {
      mdb__interactive_query__cleanup_file_4_p_0((MR_String) "Mercury/c_dates/", (MR_String) ".c_date");
    }
    {
      mdb__interactive_query__cleanup_file_4_p_0((MR_String) "", (MR_String) ".o");
    }
    {
      mdb__interactive_query__cleanup_file_4_p_0((MR_String) "Mercury/os/", (MR_String) ".o");
    }
    {
      mdb__interactive_query__cleanup_file_4_p_0((MR_String) "", (MR_String) ".pic_o");
    }
    {
      mdb__interactive_query__cleanup_file_4_p_0((MR_String) "Mercury/os/", (MR_String) ".pic_o");
    }
    {
      mdb__interactive_query__cleanup_file_4_p_0((MR_String) "lib", (MR_String) ".so");
    }
  }
}

static void MR_CALL 
mdb__interactive_query__IntroducedFrom__pred__write_prog_to_stream__475__1_3_p_0(
  MR_String mdb__interactive_query__LambdaHeadVar__1_123)
{
  {
    MR_bool mdb__interactive_query__succeeded;

    {
      mdb__interactive_query__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_73_110_116_114_111_100_117_99_101_100_70_114_111_109_95_95_112_114_101_100_95_95_119_114_105_116_101_95_112_114_111_103_95_116_111_95_115_116_114_101_97_109_95_95_52_55_53_95_95_49_95_95_91_49_93_95_48_3_p_0();
    }
  }
}

static MR_bool MR_CALL 
mdb__interactive_query__IntroducedFrom__pred__make_program__382__1_1_p_0(
  MR_String mdb__interactive_query__LambdaHeadVar__1_21)
{
  {
    MR_bool mdb__interactive_query__succeeded;
    MR_Char mdb__interactive_query__V_56_56;

    {
      mdb__interactive_query__succeeded = mercury__string__index_3_p_0(mdb__interactive_query__LambdaHeadVar__1_21, (MR_Integer) 0, &mdb__interactive_query__V_56_56);
    }
    if (mdb__interactive_query__succeeded)
      mdb__interactive_query__succeeded = ((MR_Char) 95 == mdb__interactive_query__V_56_56);
    mdb__interactive_query__succeeded = !(mdb__interactive_query__succeeded);
    return mdb__interactive_query__succeeded;
  }
}

static MR_bool MR_CALL 
mdb__interactive_query__IntroducedFrom__pred__make_program__377__1_2_p_0(
  MR_Word mdb__interactive_query__HeadVar__1_19,
  MR_String mdb__interactive_query__HeadVar__2_53)
{
  {
    MR_bool mdb__interactive_query__succeeded;

    {
      mdb__interactive_query__succeeded = mercury__map__contains_2_p_0((MR_Word) &mercury__builtin__builtin__type_ctor_info_string_0, (MR_Word) &mercury__univ__univ__type_ctor_info_univ_0, mdb__interactive_query__HeadVar__1_19, ((MR_Box) (mdb__interactive_query__HeadVar__2_53)));
    }
    return mdb__interactive_query__succeeded;
  }
}

static MR_bool MR_CALL 
mdb__interactive_query__IntroducedFrom__pred__make_program__376__1_3_p_0(
  MR_Word mdb__interactive_query__Varset_7,
  MR_Word mdb__interactive_query__HeadVar__2_49,
  MR_String * mdb__interactive_query__HeadVar__3_50)
{
  {
    MR_bool mdb__interactive_query__succeeded;

    {
      mdb__interactive_query__succeeded = mercury__varset__search_name_3_p_0((MR_Word) &mercury__term__term__type_ctor_info_generic_0, mdb__interactive_query__Varset_7, mdb__interactive_query__HeadVar__2_49, mdb__interactive_query__HeadVar__3_50);
    }
    return mdb__interactive_query__succeeded;
  }
}

static void MR_CALL 
mdb__interactive_query____Compare____solution_0_0(
  MR_Word * mdb__interactive_query__HeadVar__1_1,
  MR_Word mdb__interactive_query__HeadVar__2_2,
  MR_Word mdb__interactive_query__HeadVar__3_3)
{
  {
    MR_bool mdb__interactive_query__succeeded;
    MR_Integer mdb__interactive_query__CastX_8 = (MR_Integer) mdb__interactive_query__HeadVar__2_2;
    MR_Integer mdb__interactive_query__CastY_9 = (MR_Integer) mdb__interactive_query__HeadVar__3_3;

    mdb__interactive_query__succeeded = (mdb__interactive_query__CastX_8 == mdb__interactive_query__CastY_9);
    if (mdb__interactive_query__succeeded)
      *mdb__interactive_query__HeadVar__1_1 = (MR_Integer) 0;
    else
    if ((mdb__interactive_query__HeadVar__2_2 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
      if ((mdb__interactive_query__HeadVar__3_3 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
        *mdb__interactive_query__HeadVar__1_1 = (MR_Integer) 0;
      else
        *mdb__interactive_query__HeadVar__1_1 = (MR_Integer) 1;
    else
      {
        MR_Word mdb__interactive_query__V_11_11 = ((MR_Word) (MR_hl_field(MR_mktag(1), mdb__interactive_query__HeadVar__2_2, (MR_Integer) 0)));

        if ((mdb__interactive_query__HeadVar__3_3 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
          *mdb__interactive_query__HeadVar__1_1 = (MR_Integer) 2;
        else
          {
            MR_Word mdb__interactive_query__V_7_7 = ((MR_Word) (MR_hl_field(MR_mktag(1), mdb__interactive_query__HeadVar__3_3, (MR_Integer) 0)));

            {
              mercury__builtin__compare_3_p_0((MR_Word) &mdb__interactive_query_scalar_common_2[0], mdb__interactive_query__HeadVar__1_1, ((MR_Box) (mdb__interactive_query__V_11_11)), ((MR_Box) (mdb__interactive_query__V_7_7)));
            }
          }
      }
  }
}

static MR_bool MR_CALL 
mdb__interactive_query____Unify____solution_0_0(
  MR_Word mdb__interactive_query__HeadVar__1_1,
  MR_Word mdb__interactive_query__HeadVar__2_2)
{
  {
    MR_bool mdb__interactive_query__succeeded;
    MR_Integer mdb__interactive_query__CastX_7 = (MR_Integer) mdb__interactive_query__HeadVar__1_1;
    MR_Integer mdb__interactive_query__CastY_8 = (MR_Integer) mdb__interactive_query__HeadVar__2_2;

    mdb__interactive_query__succeeded = (mdb__interactive_query__CastX_7 == mdb__interactive_query__CastY_8);
    if (mdb__interactive_query__succeeded)
      mdb__interactive_query__succeeded = MR_TRUE;
    else
    if ((mdb__interactive_query__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
      {
        MR_Integer mdb__interactive_query__CastX_3 = (MR_Integer) mdb__interactive_query__HeadVar__1_1;
        MR_Integer mdb__interactive_query__CastY_4 = (MR_Integer) mdb__interactive_query__HeadVar__2_2;

        mdb__interactive_query__succeeded = (mdb__interactive_query__CastY_4 == mdb__interactive_query__CastX_3);
      }
    else
      {
        MR_Word mdb__interactive_query__TypeInfo_9_9;
        MR_Word mdb__interactive_query__V_5_5 = ((MR_Word) (MR_hl_field(MR_mktag(1), mdb__interactive_query__HeadVar__1_1, (MR_Integer) 0)));
        MR_Word mdb__interactive_query__V_6_6;

        mdb__interactive_query__succeeded = ((MR_tag((MR_Word) mdb__interactive_query__HeadVar__2_2)) == (MR_mktag((MR_Integer) 1)));
        if (mdb__interactive_query__succeeded)
          {
            mdb__interactive_query__V_6_6 = ((MR_Word) (MR_hl_field(MR_mktag(1), mdb__interactive_query__HeadVar__2_2, (MR_Integer) 0)));
            mdb__interactive_query__TypeInfo_9_9 = (MR_Word) &mdb__interactive_query_scalar_common_2[0];
            {
              mdb__interactive_query__succeeded = mercury__builtin__unify_2_p_0(mdb__interactive_query__TypeInfo_9_9, ((MR_Box) (mdb__interactive_query__V_5_5)), ((MR_Box) (mdb__interactive_query__V_6_6)));
            }
          }
      }
    return mdb__interactive_query__succeeded;
  }
}

static void MR_CALL 
mdb__interactive_query____Compare____run_normal_pred_0_0(
  MR_Word * mdb__interactive_query__HeadVar__1_1,
  MR_Word mdb__interactive_query__HeadVar__2_2,
  MR_Word mdb__interactive_query__HeadVar__3_3)
{
  {
    MR_bool mdb__interactive_query__succeeded;
    MR_Word mdb__interactive_query__Cast_HeadVar1_4 = mdb__interactive_query__HeadVar__2_2;
    MR_Word mdb__interactive_query__Cast_HeadVar2_5 = mdb__interactive_query__HeadVar__3_3;

    {
      mercury__builtin__compare_3_p_0((MR_Word) &mdb__interactive_query_scalar_common_3[0], mdb__interactive_query__HeadVar__1_1, ((MR_Box) (mdb__interactive_query__Cast_HeadVar1_4)), ((MR_Box) (mdb__interactive_query__Cast_HeadVar2_5)));
    }
  }
}

static MR_bool MR_CALL 
mdb__interactive_query____Unify____run_normal_pred_0_0(
  MR_Word mdb__interactive_query__HeadVar__1_1,
  MR_Word mdb__interactive_query__HeadVar__2_2)
{
  {
    MR_bool mdb__interactive_query__succeeded;
    MR_Word mdb__interactive_query__Cast_HeadVar1_3 = mdb__interactive_query__HeadVar__1_1;
    MR_Word mdb__interactive_query__Cast_HeadVar2_4 = mdb__interactive_query__HeadVar__2_2;

    {
      mdb__interactive_query__succeeded = mercury__private_builtin__builtin_unify_pred_2_p_0((MR_Word) mdb__interactive_query__Cast_HeadVar1_3, (MR_Word) mdb__interactive_query__Cast_HeadVar2_4);
    }
    return mdb__interactive_query__succeeded;
  }
}

static void MR_CALL 
mdb__interactive_query____Compare____run_io_pred_0_0(
  MR_Word * mdb__interactive_query__HeadVar__1_1,
  MR_Word mdb__interactive_query__HeadVar__2_2,
  MR_Word mdb__interactive_query__HeadVar__3_3)
{
  {
    MR_bool mdb__interactive_query__succeeded;
    MR_Word mdb__interactive_query__Cast_HeadVar1_4 = mdb__interactive_query__HeadVar__2_2;
    MR_Word mdb__interactive_query__Cast_HeadVar2_5 = mdb__interactive_query__HeadVar__3_3;

    {
      mercury__builtin__compare_3_p_0((MR_Word) &mdb__interactive_query_scalar_common_4[0], mdb__interactive_query__HeadVar__1_1, ((MR_Box) (mdb__interactive_query__Cast_HeadVar1_4)), ((MR_Box) (mdb__interactive_query__Cast_HeadVar2_5)));
    }
  }
}

static MR_bool MR_CALL 
mdb__interactive_query____Unify____run_io_pred_0_0(
  MR_Word mdb__interactive_query__HeadVar__1_1,
  MR_Word mdb__interactive_query__HeadVar__2_2)
{
  {
    MR_bool mdb__interactive_query__succeeded;
    MR_Word mdb__interactive_query__Cast_HeadVar1_3 = mdb__interactive_query__HeadVar__1_1;
    MR_Word mdb__interactive_query__Cast_HeadVar2_4 = mdb__interactive_query__HeadVar__2_2;

    {
      mdb__interactive_query__succeeded = mercury__private_builtin__builtin_unify_pred_2_p_0((MR_Word) mdb__interactive_query__Cast_HeadVar1_3, (MR_Word) mdb__interactive_query__Cast_HeadVar2_4);
    }
    return mdb__interactive_query__succeeded;
  }
}

static void MR_CALL 
mdb__interactive_query____Compare____run_cc_pred_0_0(
  MR_Word * mdb__interactive_query__HeadVar__1_1,
  MR_Word mdb__interactive_query__HeadVar__2_2,
  MR_Word mdb__interactive_query__HeadVar__3_3)
{
  {
    MR_bool mdb__interactive_query__succeeded;
    MR_Word mdb__interactive_query__Cast_HeadVar1_4 = mdb__interactive_query__HeadVar__2_2;
    MR_Word mdb__interactive_query__Cast_HeadVar2_5 = mdb__interactive_query__HeadVar__3_3;

    {
      mercury__builtin__compare_3_p_0((MR_Word) &mdb__interactive_query_scalar_common_3[0], mdb__interactive_query__HeadVar__1_1, ((MR_Box) (mdb__interactive_query__Cast_HeadVar1_4)), ((MR_Box) (mdb__interactive_query__Cast_HeadVar2_5)));
    }
  }
}

static MR_bool MR_CALL 
mdb__interactive_query____Unify____run_cc_pred_0_0(
  MR_Word mdb__interactive_query__HeadVar__1_1,
  MR_Word mdb__interactive_query__HeadVar__2_2)
{
  {
    MR_bool mdb__interactive_query__succeeded;
    MR_Word mdb__interactive_query__Cast_HeadVar1_3 = mdb__interactive_query__HeadVar__1_1;
    MR_Word mdb__interactive_query__Cast_HeadVar2_4 = mdb__interactive_query__HeadVar__2_2;

    {
      mdb__interactive_query__succeeded = mercury__private_builtin__builtin_unify_pred_2_p_0((MR_Word) mdb__interactive_query__Cast_HeadVar1_3, (MR_Word) mdb__interactive_query__Cast_HeadVar2_4);
    }
    return mdb__interactive_query__succeeded;
  }
}

void MR_CALL 
mdb__interactive_query____Compare____query_type_0_0(
  MR_Word * mdb__interactive_query__HeadVar__1_1,
  MR_Word mdb__interactive_query__HeadVar__2_2,
  MR_Word mdb__interactive_query__HeadVar__3_3)
{
  {
    MR_bool mdb__interactive_query__succeeded;
    MR_Integer mdb__interactive_query__Cast_HeadVar1_4 = (MR_Integer) mdb__interactive_query__HeadVar__2_2;
    MR_Integer mdb__interactive_query__Cast_HeadVar2_5 = (MR_Integer) mdb__interactive_query__HeadVar__3_3;

    {
      mercury__private_builtin__builtin_compare_int_3_p_0(mdb__interactive_query__HeadVar__1_1, mdb__interactive_query__Cast_HeadVar1_4, mdb__interactive_query__Cast_HeadVar2_5);
    }
  }
}

MR_bool MR_CALL 
mdb__interactive_query____Unify____query_type_0_0(
  MR_Word mdb__interactive_query__HeadVar__2_1,
  MR_Word mdb__interactive_query__HeadVar__2_2)
{
  {
    MR_bool mdb__interactive_query__succeeded = (mdb__interactive_query__HeadVar__2_1 == mdb__interactive_query__HeadVar__2_2);

    return mdb__interactive_query__succeeded;
  }
}

static void MR_CALL 
mdb__interactive_query____Compare____query_env_0_0(
  MR_Word * mdb__interactive_query__HeadVar__1_1,
  MR_Word mdb__interactive_query__HeadVar__2_2,
  MR_Word mdb__interactive_query__HeadVar__3_3)
{
  {
    MR_bool mdb__interactive_query__succeeded;
    MR_Integer mdb__interactive_query__CastX_21 = (MR_Integer) mdb__interactive_query__HeadVar__2_2;
    MR_Integer mdb__interactive_query__CastY_22 = (MR_Integer) mdb__interactive_query__HeadVar__3_3;

    mdb__interactive_query__succeeded = (mdb__interactive_query__CastX_21 == mdb__interactive_query__CastY_22);
    if (mdb__interactive_query__succeeded)
      *mdb__interactive_query__HeadVar__1_1 = (MR_Integer) 0;
    else
      {
        MR_Word mdb__interactive_query__V_4_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__interactive_query__HeadVar__2_2, (MR_Integer) 0)));
        MR_Word mdb__interactive_query__V_5_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__interactive_query__HeadVar__2_2, (MR_Integer) 1)));
        MR_String mdb__interactive_query__V_6_6 = ((MR_String) (MR_hl_field(MR_mktag(0), mdb__interactive_query__HeadVar__2_2, (MR_Integer) 2)));
        MR_Word mdb__interactive_query__V_7_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__interactive_query__HeadVar__2_2, (MR_Integer) 3)));
        MR_Word mdb__interactive_query__V_8_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__interactive_query__HeadVar__2_2, (MR_Integer) 4)));
        MR_Word mdb__interactive_query__V_9_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__interactive_query__HeadVar__2_2, (MR_Integer) 5)));
        MR_Word mdb__interactive_query__V_10_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__interactive_query__HeadVar__3_3, (MR_Integer) 0)));
        MR_Word mdb__interactive_query__V_11_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__interactive_query__HeadVar__3_3, (MR_Integer) 1)));
        MR_String mdb__interactive_query__V_12_12 = ((MR_String) (MR_hl_field(MR_mktag(0), mdb__interactive_query__HeadVar__3_3, (MR_Integer) 2)));
        MR_Word mdb__interactive_query__V_13_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__interactive_query__HeadVar__3_3, (MR_Integer) 3)));
        MR_Word mdb__interactive_query__V_14_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__interactive_query__HeadVar__3_3, (MR_Integer) 4)));
        MR_Word mdb__interactive_query__V_15_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__interactive_query__HeadVar__3_3, (MR_Integer) 5)));
        MR_Word mdb__interactive_query__V_16_16;
        MR_Integer mdb__interactive_query__V_29_29 = (MR_Integer) mdb__interactive_query__V_4_4;
        MR_Integer mdb__interactive_query__V_30_30 = (MR_Integer) mdb__interactive_query__V_10_10;

        {
          mercury__private_builtin__builtin_compare_int_3_p_0(&mdb__interactive_query__V_16_16, mdb__interactive_query__V_29_29, mdb__interactive_query__V_30_30);
        }
        mdb__interactive_query__succeeded = (mdb__interactive_query__V_16_16 == (MR_Integer) 0);
        mdb__interactive_query__succeeded = !(mdb__interactive_query__succeeded);
        if (mdb__interactive_query__succeeded)
          *mdb__interactive_query__HeadVar__1_1 = mdb__interactive_query__V_16_16;
        else
          {
            MR_Word mdb__interactive_query__V_17_17;

            {
              mercury__builtin__compare_3_p_0((MR_Word) &mdb__interactive_query_scalar_common_1[1], &mdb__interactive_query__V_17_17, ((MR_Box) (mdb__interactive_query__V_5_5)), ((MR_Box) (mdb__interactive_query__V_11_11)));
            }
            mdb__interactive_query__succeeded = (mdb__interactive_query__V_17_17 == (MR_Integer) 0);
            mdb__interactive_query__succeeded = !(mdb__interactive_query__succeeded);
            if (mdb__interactive_query__succeeded)
              *mdb__interactive_query__HeadVar__1_1 = mdb__interactive_query__V_17_17;
            else
              {
                MR_Word mdb__interactive_query__V_18_18;

                {
                  mercury__private_builtin__builtin_compare_string_3_p_0(&mdb__interactive_query__V_18_18, mdb__interactive_query__V_6_6, mdb__interactive_query__V_12_12);
                }
                mdb__interactive_query__succeeded = (mdb__interactive_query__V_18_18 == (MR_Integer) 0);
                mdb__interactive_query__succeeded = !(mdb__interactive_query__succeeded);
                if (mdb__interactive_query__succeeded)
                  *mdb__interactive_query__HeadVar__1_1 = mdb__interactive_query__V_18_18;
                else
                  {
                    MR_Word mdb__interactive_query__V_19_19;

                    {
                      mercury__builtin__compare_3_p_0((MR_Word) &mdb__interactive_query_scalar_common_2[0], &mdb__interactive_query__V_19_19, ((MR_Box) (mdb__interactive_query__V_7_7)), ((MR_Box) (mdb__interactive_query__V_13_13)));
                    }
                    mdb__interactive_query__succeeded = (mdb__interactive_query__V_19_19 == (MR_Integer) 0);
                    mdb__interactive_query__succeeded = !(mdb__interactive_query__succeeded);
                    if (mdb__interactive_query__succeeded)
                      *mdb__interactive_query__HeadVar__1_1 = mdb__interactive_query__V_19_19;
                    else
                      {
                        MR_Word mdb__interactive_query__V_20_20;

                        {
                          mercury__io____Compare____input_stream_0_0(&mdb__interactive_query__V_20_20, mdb__interactive_query__V_8_8, mdb__interactive_query__V_14_14);
                        }
                        mdb__interactive_query__succeeded = (mdb__interactive_query__V_20_20 == (MR_Integer) 0);
                        mdb__interactive_query__succeeded = !(mdb__interactive_query__succeeded);
                        if (mdb__interactive_query__succeeded)
                          *mdb__interactive_query__HeadVar__1_1 = mdb__interactive_query__V_20_20;
                        else
                          {
                            mercury__io____Compare____output_stream_0_0(mdb__interactive_query__HeadVar__1_1, mdb__interactive_query__V_9_9, mdb__interactive_query__V_15_15);
                          }
                      }
                  }
              }
          }
      }
  }
}

static MR_bool MR_CALL 
mdb__interactive_query____Unify____query_env_0_0(
  MR_Word mdb__interactive_query__HeadVar__1_1,
  MR_Word mdb__interactive_query__HeadVar__2_2)
{
  {
    MR_bool mdb__interactive_query__succeeded;
    MR_Integer mdb__interactive_query__CastX_15 = (MR_Integer) mdb__interactive_query__HeadVar__1_1;
    MR_Integer mdb__interactive_query__CastY_16 = (MR_Integer) mdb__interactive_query__HeadVar__2_2;

    mdb__interactive_query__succeeded = (mdb__interactive_query__CastX_15 == mdb__interactive_query__CastY_16);
    if (mdb__interactive_query__succeeded)
      mdb__interactive_query__succeeded = MR_TRUE;
    else
      {
        MR_Word mdb__interactive_query__TypeInfo_17_17;
        MR_Word mdb__interactive_query__TypeInfo_18_18;
        MR_Word mdb__interactive_query__V_3_3 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__interactive_query__HeadVar__1_1, (MR_Integer) 0)));
        MR_Word mdb__interactive_query__V_4_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__interactive_query__HeadVar__1_1, (MR_Integer) 1)));
        MR_String mdb__interactive_query__V_5_5 = ((MR_String) (MR_hl_field(MR_mktag(0), mdb__interactive_query__HeadVar__1_1, (MR_Integer) 2)));
        MR_Word mdb__interactive_query__V_6_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__interactive_query__HeadVar__1_1, (MR_Integer) 3)));
        MR_Word mdb__interactive_query__V_7_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__interactive_query__HeadVar__1_1, (MR_Integer) 4)));
        MR_Word mdb__interactive_query__V_8_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__interactive_query__HeadVar__1_1, (MR_Integer) 5)));
        MR_Word mdb__interactive_query__V_9_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__interactive_query__HeadVar__2_2, (MR_Integer) 0)));
        MR_Word mdb__interactive_query__V_10_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__interactive_query__HeadVar__2_2, (MR_Integer) 1)));
        MR_String mdb__interactive_query__V_11_11 = ((MR_String) (MR_hl_field(MR_mktag(0), mdb__interactive_query__HeadVar__2_2, (MR_Integer) 2)));
        MR_Word mdb__interactive_query__V_12_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__interactive_query__HeadVar__2_2, (MR_Integer) 3)));
        MR_Word mdb__interactive_query__V_13_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__interactive_query__HeadVar__2_2, (MR_Integer) 4)));
        MR_Word mdb__interactive_query__V_14_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__interactive_query__HeadVar__2_2, (MR_Integer) 5)));

        mdb__interactive_query__succeeded = (mdb__interactive_query__V_3_3 == mdb__interactive_query__V_9_9);
        if (mdb__interactive_query__succeeded)
          {
            mdb__interactive_query__TypeInfo_17_17 = (MR_Word) &mdb__interactive_query_scalar_common_1[1];
            {
              mdb__interactive_query__succeeded = mercury__builtin__unify_2_p_0(mdb__interactive_query__TypeInfo_17_17, ((MR_Box) (mdb__interactive_query__V_4_4)), ((MR_Box) (mdb__interactive_query__V_10_10)));
            }
            if (mdb__interactive_query__succeeded)
              {
                mdb__interactive_query__succeeded = (strcmp(mdb__interactive_query__V_5_5, mdb__interactive_query__V_11_11) == 0);
                if (mdb__interactive_query__succeeded)
                  {
                    mdb__interactive_query__TypeInfo_18_18 = (MR_Word) &mdb__interactive_query_scalar_common_2[0];
                    {
                      mdb__interactive_query__succeeded = mercury__builtin__unify_2_p_0(mdb__interactive_query__TypeInfo_18_18, ((MR_Box) (mdb__interactive_query__V_6_6)), ((MR_Box) (mdb__interactive_query__V_12_12)));
                    }
                    if (mdb__interactive_query__succeeded)
                      {
                        {
                          mdb__interactive_query__succeeded = mercury__io____Unify____input_stream_0_0(mdb__interactive_query__V_7_7, mdb__interactive_query__V_13_13);
                        }
                        if (mdb__interactive_query__succeeded)
                          {
                            mdb__interactive_query__succeeded = mercury__io____Unify____output_stream_0_0(mdb__interactive_query__V_8_8, mdb__interactive_query__V_14_14);
                          }
                      }
                  }
              }
          }
      }
    return mdb__interactive_query__succeeded;
  }
}

static void MR_CALL 
mdb__interactive_query____Compare____query_command_0_0(
  MR_Word * mdb__interactive_query__HeadVar__1_1,
  MR_Word mdb__interactive_query__HeadVar__2_2,
  MR_Word mdb__interactive_query__HeadVar__3_3)
{
  {
    MR_bool mdb__interactive_query__succeeded;
    MR_Integer mdb__interactive_query__CastX_20 = (MR_Integer) mdb__interactive_query__HeadVar__2_2;
    MR_Integer mdb__interactive_query__CastY_21 = (MR_Integer) mdb__interactive_query__HeadVar__3_3;

    mdb__interactive_query__succeeded = (mdb__interactive_query__CastX_20 == mdb__interactive_query__CastY_21);
    if (mdb__interactive_query__succeeded)
      *mdb__interactive_query__HeadVar__1_1 = (MR_Integer) 0;
    else
      switch (MR_tag((MR_Word) mdb__interactive_query__HeadVar__2_2)) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 0:
          switch (MR_unmkbody(mdb__interactive_query__HeadVar__2_2)) {
            default: /*NOTREACHED*/ MR_assert(0);
            case (MR_Integer) 0:
              switch (MR_tag((MR_Word) mdb__interactive_query__HeadVar__3_3)) {
                default: /*NOTREACHED*/ MR_assert(0);
                case (MR_Integer) 0:
                  switch (MR_unmkbody(mdb__interactive_query__HeadVar__3_3)) {
                    default: /*NOTREACHED*/ MR_assert(0);
                    case (MR_Integer) 0:
                      *mdb__interactive_query__HeadVar__1_1 = (MR_Integer) 0;
                      break;
                    case (MR_Integer) 1:
                      *mdb__interactive_query__HeadVar__1_1 = (MR_Integer) 1;
                      break;
                  }
                  break;
                case (MR_Integer) 1:
                  *mdb__interactive_query__HeadVar__1_1 = (MR_Integer) 1;
                  break;
                case (MR_Integer) 2:
                  *mdb__interactive_query__HeadVar__1_1 = (MR_Integer) 1;
                  break;
              }
              break;
            case (MR_Integer) 1:
              switch (MR_tag((MR_Word) mdb__interactive_query__HeadVar__3_3)) {
                default: /*NOTREACHED*/ MR_assert(0);
                case (MR_Integer) 0:
                  switch (MR_unmkbody(mdb__interactive_query__HeadVar__3_3)) {
                    default: /*NOTREACHED*/ MR_assert(0);
                    case (MR_Integer) 0:
                      *mdb__interactive_query__HeadVar__1_1 = (MR_Integer) 2;
                      break;
                    case (MR_Integer) 1:
                      *mdb__interactive_query__HeadVar__1_1 = (MR_Integer) 0;
                      break;
                  }
                  break;
                case (MR_Integer) 1:
                  *mdb__interactive_query__HeadVar__1_1 = (MR_Integer) 2;
                  break;
                case (MR_Integer) 2:
                  *mdb__interactive_query__HeadVar__1_1 = (MR_Integer) 2;
                  break;
              }
              break;
          }
          break;
        case (MR_Integer) 1:
          {
            MR_String mdb__interactive_query__V_25_25 = ((MR_String) (MR_hl_field(MR_mktag(1), mdb__interactive_query__HeadVar__2_2, (MR_Integer) 0)));

            switch (MR_tag((MR_Word) mdb__interactive_query__HeadVar__3_3)) {
              default: /*NOTREACHED*/ MR_assert(0);
              case (MR_Integer) 0:
                switch (MR_unmkbody(mdb__interactive_query__HeadVar__3_3)) {
                  default: /*NOTREACHED*/ MR_assert(0);
                  case (MR_Integer) 0:
                    *mdb__interactive_query__HeadVar__1_1 = (MR_Integer) 2;
                    break;
                  case (MR_Integer) 1:
                    *mdb__interactive_query__HeadVar__1_1 = (MR_Integer) 1;
                    break;
                }
                break;
              case (MR_Integer) 1:
                {
                  MR_String mdb__interactive_query__V_8_8 = ((MR_String) (MR_hl_field(MR_mktag(1), mdb__interactive_query__HeadVar__3_3, (MR_Integer) 0)));

                  {
                    mercury__private_builtin__builtin_compare_string_3_p_0(mdb__interactive_query__HeadVar__1_1, mdb__interactive_query__V_25_25, mdb__interactive_query__V_8_8);
                  }
                }
                break;
              case (MR_Integer) 2:
                *mdb__interactive_query__HeadVar__1_1 = (MR_Integer) 1;
                break;
            }
          }
          break;
        case (MR_Integer) 2:
          {
            MR_Word mdb__interactive_query__V_24_24 = ((MR_Word) (MR_hl_field(MR_mktag(2), mdb__interactive_query__HeadVar__2_2, (MR_Integer) 0)));

            switch (MR_tag((MR_Word) mdb__interactive_query__HeadVar__3_3)) {
              default: /*NOTREACHED*/ MR_assert(0);
              case (MR_Integer) 0:
                switch (MR_unmkbody(mdb__interactive_query__HeadVar__3_3)) {
                  default: /*NOTREACHED*/ MR_assert(0);
                  case (MR_Integer) 0:
                    *mdb__interactive_query__HeadVar__1_1 = (MR_Integer) 2;
                    break;
                  case (MR_Integer) 1:
                    *mdb__interactive_query__HeadVar__1_1 = (MR_Integer) 1;
                    break;
                }
                break;
              case (MR_Integer) 1:
                *mdb__interactive_query__HeadVar__1_1 = (MR_Integer) 2;
                break;
              case (MR_Integer) 2:
                {
                  MR_Word mdb__interactive_query__V_16_16 = ((MR_Word) (MR_hl_field(MR_mktag(2), mdb__interactive_query__HeadVar__3_3, (MR_Integer) 0)));

                  {
                    mercury__builtin__compare_3_p_0((MR_Word) &mdb__interactive_query_scalar_common_1[1], mdb__interactive_query__HeadVar__1_1, ((MR_Box) (mdb__interactive_query__V_24_24)), ((MR_Box) (mdb__interactive_query__V_16_16)));
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
mdb__interactive_query____Unify____query_command_0_0(
  MR_Word mdb__interactive_query__HeadVar__1_1,
  MR_Word mdb__interactive_query__HeadVar__2_2)
{
  {
    MR_bool mdb__interactive_query__succeeded;
    MR_Integer mdb__interactive_query__CastX_11 = (MR_Integer) mdb__interactive_query__HeadVar__1_1;
    MR_Integer mdb__interactive_query__CastY_12 = (MR_Integer) mdb__interactive_query__HeadVar__2_2;

    mdb__interactive_query__succeeded = (mdb__interactive_query__CastX_11 == mdb__interactive_query__CastY_12);
    if (mdb__interactive_query__succeeded)
      mdb__interactive_query__succeeded = MR_TRUE;
    else
      switch (MR_tag((MR_Word) mdb__interactive_query__HeadVar__1_1)) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 0:
          switch (MR_unmkbody(mdb__interactive_query__HeadVar__1_1)) {
            default: /*NOTREACHED*/ MR_assert(0);
            case (MR_Integer) 0:
              {
                MR_Integer mdb__interactive_query__CastX_3 = (MR_Integer) mdb__interactive_query__HeadVar__1_1;
                MR_Integer mdb__interactive_query__CastY_4 = (MR_Integer) mdb__interactive_query__HeadVar__2_2;

                mdb__interactive_query__succeeded = (mdb__interactive_query__CastY_4 == mdb__interactive_query__CastX_3);
              }
              break;
            case (MR_Integer) 1:
              {
                MR_Integer mdb__interactive_query__CastX_9 = (MR_Integer) mdb__interactive_query__HeadVar__1_1;
                MR_Integer mdb__interactive_query__CastY_10 = (MR_Integer) mdb__interactive_query__HeadVar__2_2;

                mdb__interactive_query__succeeded = (mdb__interactive_query__CastY_10 == mdb__interactive_query__CastX_9);
              }
              break;
          }
          break;
        case (MR_Integer) 1:
          {
            MR_String mdb__interactive_query__V_5_5 = ((MR_String) (MR_hl_field(MR_mktag(1), mdb__interactive_query__HeadVar__1_1, (MR_Integer) 0)));
            MR_String mdb__interactive_query__V_6_6;

            mdb__interactive_query__succeeded = ((MR_tag((MR_Word) mdb__interactive_query__HeadVar__2_2)) == (MR_mktag((MR_Integer) 1)));
            if (mdb__interactive_query__succeeded)
              {
                mdb__interactive_query__V_6_6 = ((MR_String) (MR_hl_field(MR_mktag(1), mdb__interactive_query__HeadVar__2_2, (MR_Integer) 0)));
                mdb__interactive_query__succeeded = (strcmp(mdb__interactive_query__V_5_5, mdb__interactive_query__V_6_6) == 0);
              }
          }
          break;
        case (MR_Integer) 2:
          {
            MR_Word mdb__interactive_query__TypeInfo_13_13;
            MR_Word mdb__interactive_query__V_7_7 = ((MR_Word) (MR_hl_field(MR_mktag(2), mdb__interactive_query__HeadVar__1_1, (MR_Integer) 0)));
            MR_Word mdb__interactive_query__V_8_8;

            mdb__interactive_query__succeeded = ((MR_tag((MR_Word) mdb__interactive_query__HeadVar__2_2)) == (MR_mktag((MR_Integer) 2)));
            if (mdb__interactive_query__succeeded)
              {
                mdb__interactive_query__V_8_8 = ((MR_Word) (MR_hl_field(MR_mktag(2), mdb__interactive_query__HeadVar__2_2, (MR_Integer) 0)));
                mdb__interactive_query__TypeInfo_13_13 = (MR_Word) &mdb__interactive_query_scalar_common_1[1];
                {
                  mdb__interactive_query__succeeded = mercury__builtin__unify_2_p_0(mdb__interactive_query__TypeInfo_13_13, ((MR_Box) (mdb__interactive_query__V_7_7)), ((MR_Box) (mdb__interactive_query__V_8_8)));
                }
              }
          }
          break;
      }
    return mdb__interactive_query__succeeded;
  }
}

static void MR_CALL 
mdb__interactive_query____Compare____prog_0_0(
  MR_Word * mdb__interactive_query__HeadVar__1_1,
  MR_Word mdb__interactive_query__HeadVar__2_2,
  MR_Word mdb__interactive_query__HeadVar__3_3)
{
  {
    MR_bool mdb__interactive_query__succeeded;
    MR_Integer mdb__interactive_query__CastX_24 = (MR_Integer) mdb__interactive_query__HeadVar__2_2;
    MR_Integer mdb__interactive_query__CastY_25 = (MR_Integer) mdb__interactive_query__HeadVar__3_3;

    mdb__interactive_query__succeeded = (mdb__interactive_query__CastX_24 == mdb__interactive_query__CastY_25);
    if (mdb__interactive_query__succeeded)
      *mdb__interactive_query__HeadVar__1_1 = (MR_Integer) 0;
    else
      {
        MR_Word mdb__interactive_query__V_4_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__interactive_query__HeadVar__2_2, (MR_Integer) 0)));
        MR_Word mdb__interactive_query__V_5_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__interactive_query__HeadVar__2_2, (MR_Integer) 1)));
        MR_Word mdb__interactive_query__V_6_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__interactive_query__HeadVar__2_2, (MR_Integer) 2)));
        MR_Word mdb__interactive_query__V_7_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__interactive_query__HeadVar__2_2, (MR_Integer) 3)));
        MR_Word mdb__interactive_query__V_8_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__interactive_query__HeadVar__2_2, (MR_Integer) 4)));
        MR_Word mdb__interactive_query__V_9_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__interactive_query__HeadVar__2_2, (MR_Integer) 5)));
        MR_Word mdb__interactive_query__V_10_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__interactive_query__HeadVar__2_2, (MR_Integer) 6)));
        MR_Word mdb__interactive_query__V_11_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__interactive_query__HeadVar__3_3, (MR_Integer) 0)));
        MR_Word mdb__interactive_query__V_12_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__interactive_query__HeadVar__3_3, (MR_Integer) 1)));
        MR_Word mdb__interactive_query__V_13_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__interactive_query__HeadVar__3_3, (MR_Integer) 2)));
        MR_Word mdb__interactive_query__V_14_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__interactive_query__HeadVar__3_3, (MR_Integer) 3)));
        MR_Word mdb__interactive_query__V_15_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__interactive_query__HeadVar__3_3, (MR_Integer) 4)));
        MR_Word mdb__interactive_query__V_16_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__interactive_query__HeadVar__3_3, (MR_Integer) 5)));
        MR_Word mdb__interactive_query__V_17_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__interactive_query__HeadVar__3_3, (MR_Integer) 6)));
        MR_Word mdb__interactive_query__V_18_18;
        MR_Integer mdb__interactive_query__V_33_33 = (MR_Integer) mdb__interactive_query__V_4_4;
        MR_Integer mdb__interactive_query__V_34_34 = (MR_Integer) mdb__interactive_query__V_11_11;

        {
          mercury__private_builtin__builtin_compare_int_3_p_0(&mdb__interactive_query__V_18_18, mdb__interactive_query__V_33_33, mdb__interactive_query__V_34_34);
        }
        mdb__interactive_query__succeeded = (mdb__interactive_query__V_18_18 == (MR_Integer) 0);
        mdb__interactive_query__succeeded = !(mdb__interactive_query__succeeded);
        if (mdb__interactive_query__succeeded)
          *mdb__interactive_query__HeadVar__1_1 = mdb__interactive_query__V_18_18;
        else
          {
            MR_Word mdb__interactive_query__V_19_19;

            {
              mercury__builtin__compare_3_p_0((MR_Word) &mdb__interactive_query_scalar_common_1[1], &mdb__interactive_query__V_19_19, ((MR_Box) (mdb__interactive_query__V_5_5)), ((MR_Box) (mdb__interactive_query__V_12_12)));
            }
            mdb__interactive_query__succeeded = (mdb__interactive_query__V_19_19 == (MR_Integer) 0);
            mdb__interactive_query__succeeded = !(mdb__interactive_query__succeeded);
            if (mdb__interactive_query__succeeded)
              *mdb__interactive_query__HeadVar__1_1 = mdb__interactive_query__V_19_19;
            else
              {
                MR_Word mdb__interactive_query__V_20_20;

                {
                  mercury__builtin__compare_3_p_0((MR_Word) &mdb__interactive_query_scalar_common_2[0], &mdb__interactive_query__V_20_20, ((MR_Box) (mdb__interactive_query__V_6_6)), ((MR_Box) (mdb__interactive_query__V_13_13)));
                }
                mdb__interactive_query__succeeded = (mdb__interactive_query__V_20_20 == (MR_Integer) 0);
                mdb__interactive_query__succeeded = !(mdb__interactive_query__succeeded);
                if (mdb__interactive_query__succeeded)
                  *mdb__interactive_query__HeadVar__1_1 = mdb__interactive_query__V_20_20;
                else
                  {
                    MR_Word mdb__interactive_query__V_21_21;

                    {
                      mercury__builtin__compare_3_p_0((MR_Word) &mdb__interactive_query_scalar_common_1[1], &mdb__interactive_query__V_21_21, ((MR_Box) (mdb__interactive_query__V_7_7)), ((MR_Box) (mdb__interactive_query__V_14_14)));
                    }
                    mdb__interactive_query__succeeded = (mdb__interactive_query__V_21_21 == (MR_Integer) 0);
                    mdb__interactive_query__succeeded = !(mdb__interactive_query__succeeded);
                    if (mdb__interactive_query__succeeded)
                      *mdb__interactive_query__HeadVar__1_1 = mdb__interactive_query__V_21_21;
                    else
                      {
                        MR_Word mdb__interactive_query__V_22_22;

                        {
                          mercury__builtin__compare_3_p_0((MR_Word) &mdb__interactive_query_scalar_common_1[1], &mdb__interactive_query__V_22_22, ((MR_Box) (mdb__interactive_query__V_8_8)), ((MR_Box) (mdb__interactive_query__V_15_15)));
                        }
                        mdb__interactive_query__succeeded = (mdb__interactive_query__V_22_22 == (MR_Integer) 0);
                        mdb__interactive_query__succeeded = !(mdb__interactive_query__succeeded);
                        if (mdb__interactive_query__succeeded)
                          *mdb__interactive_query__HeadVar__1_1 = mdb__interactive_query__V_22_22;
                        else
                          {
                            MR_Word mdb__interactive_query__V_23_23;

                            {
                              mercury__builtin__compare_3_p_0((MR_Word) &mdb__interactive_query_scalar_common_1[2], &mdb__interactive_query__V_23_23, ((MR_Box) (mdb__interactive_query__V_9_9)), ((MR_Box) (mdb__interactive_query__V_16_16)));
                            }
                            mdb__interactive_query__succeeded = (mdb__interactive_query__V_23_23 == (MR_Integer) 0);
                            mdb__interactive_query__succeeded = !(mdb__interactive_query__succeeded);
                            if (mdb__interactive_query__succeeded)
                              *mdb__interactive_query__HeadVar__1_1 = mdb__interactive_query__V_23_23;
                            else
                              {
                                {
                                  mercury__builtin__compare_3_p_0((MR_Word) &mdb__interactive_query_scalar_common_1[3], mdb__interactive_query__HeadVar__1_1, ((MR_Box) (mdb__interactive_query__V_10_10)), ((MR_Box) (mdb__interactive_query__V_17_17)));
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

static MR_bool MR_CALL 
mdb__interactive_query____Unify____prog_0_0(
  MR_Word mdb__interactive_query__HeadVar__1_1,
  MR_Word mdb__interactive_query__HeadVar__2_2)
{
  {
    MR_bool mdb__interactive_query__succeeded;
    MR_Integer mdb__interactive_query__CastX_17 = (MR_Integer) mdb__interactive_query__HeadVar__1_1;
    MR_Integer mdb__interactive_query__CastY_18 = (MR_Integer) mdb__interactive_query__HeadVar__2_2;

    mdb__interactive_query__succeeded = (mdb__interactive_query__CastX_17 == mdb__interactive_query__CastY_18);
    if (mdb__interactive_query__succeeded)
      mdb__interactive_query__succeeded = MR_TRUE;
    else
      {
        MR_Word mdb__interactive_query__TypeInfo_19_19;
        MR_Word mdb__interactive_query__TypeInfo_20_20;
        MR_Word mdb__interactive_query__TypeInfo_21_21;
        MR_Word mdb__interactive_query__TypeInfo_22_22;
        MR_Word mdb__interactive_query__TypeInfo_23_23;
        MR_Word mdb__interactive_query__TypeInfo_24_24;
        MR_Word mdb__interactive_query__V_3_3 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__interactive_query__HeadVar__1_1, (MR_Integer) 0)));
        MR_Word mdb__interactive_query__V_4_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__interactive_query__HeadVar__1_1, (MR_Integer) 1)));
        MR_Word mdb__interactive_query__V_5_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__interactive_query__HeadVar__1_1, (MR_Integer) 2)));
        MR_Word mdb__interactive_query__V_6_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__interactive_query__HeadVar__1_1, (MR_Integer) 3)));
        MR_Word mdb__interactive_query__V_7_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__interactive_query__HeadVar__1_1, (MR_Integer) 4)));
        MR_Word mdb__interactive_query__V_8_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__interactive_query__HeadVar__1_1, (MR_Integer) 5)));
        MR_Word mdb__interactive_query__V_9_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__interactive_query__HeadVar__1_1, (MR_Integer) 6)));
        MR_Word mdb__interactive_query__V_10_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__interactive_query__HeadVar__2_2, (MR_Integer) 0)));
        MR_Word mdb__interactive_query__V_11_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__interactive_query__HeadVar__2_2, (MR_Integer) 1)));
        MR_Word mdb__interactive_query__V_12_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__interactive_query__HeadVar__2_2, (MR_Integer) 2)));
        MR_Word mdb__interactive_query__V_13_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__interactive_query__HeadVar__2_2, (MR_Integer) 3)));
        MR_Word mdb__interactive_query__V_14_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__interactive_query__HeadVar__2_2, (MR_Integer) 4)));
        MR_Word mdb__interactive_query__V_15_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__interactive_query__HeadVar__2_2, (MR_Integer) 5)));
        MR_Word mdb__interactive_query__V_16_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__interactive_query__HeadVar__2_2, (MR_Integer) 6)));

        mdb__interactive_query__succeeded = (mdb__interactive_query__V_3_3 == mdb__interactive_query__V_10_10);
        if (mdb__interactive_query__succeeded)
          {
            mdb__interactive_query__TypeInfo_19_19 = (MR_Word) &mdb__interactive_query_scalar_common_1[1];
            {
              mdb__interactive_query__succeeded = mercury__builtin__unify_2_p_0(mdb__interactive_query__TypeInfo_19_19, ((MR_Box) (mdb__interactive_query__V_4_4)), ((MR_Box) (mdb__interactive_query__V_11_11)));
            }
            if (mdb__interactive_query__succeeded)
              {
                mdb__interactive_query__TypeInfo_20_20 = (MR_Word) &mdb__interactive_query_scalar_common_2[0];
                {
                  mdb__interactive_query__succeeded = mercury__builtin__unify_2_p_0(mdb__interactive_query__TypeInfo_20_20, ((MR_Box) (mdb__interactive_query__V_5_5)), ((MR_Box) (mdb__interactive_query__V_12_12)));
                }
                if (mdb__interactive_query__succeeded)
                  {
                    mdb__interactive_query__TypeInfo_21_21 = (MR_Word) &mdb__interactive_query_scalar_common_1[1];
                    {
                      mdb__interactive_query__succeeded = mercury__builtin__unify_2_p_0(mdb__interactive_query__TypeInfo_21_21, ((MR_Box) (mdb__interactive_query__V_6_6)), ((MR_Box) (mdb__interactive_query__V_13_13)));
                    }
                    if (mdb__interactive_query__succeeded)
                      {
                        mdb__interactive_query__TypeInfo_22_22 = (MR_Word) &mdb__interactive_query_scalar_common_1[1];
                        {
                          mdb__interactive_query__succeeded = mercury__builtin__unify_2_p_0(mdb__interactive_query__TypeInfo_22_22, ((MR_Box) (mdb__interactive_query__V_7_7)), ((MR_Box) (mdb__interactive_query__V_14_14)));
                        }
                        if (mdb__interactive_query__succeeded)
                          {
                            mdb__interactive_query__TypeInfo_23_23 = (MR_Word) &mdb__interactive_query_scalar_common_1[2];
                            {
                              mdb__interactive_query__succeeded = mercury__builtin__unify_2_p_0(mdb__interactive_query__TypeInfo_23_23, ((MR_Box) (mdb__interactive_query__V_8_8)), ((MR_Box) (mdb__interactive_query__V_15_15)));
                            }
                            if (mdb__interactive_query__succeeded)
                              {
                                mdb__interactive_query__TypeInfo_24_24 = (MR_Word) &mdb__interactive_query_scalar_common_1[3];
                                {
                                  mdb__interactive_query__succeeded = mercury__builtin__unify_2_p_0(mdb__interactive_query__TypeInfo_24_24, ((MR_Box) (mdb__interactive_query__V_9_9)), ((MR_Box) (mdb__interactive_query__V_16_16)));
                                }
                              }
                          }
                      }
                  }
              }
          }
      }
    return mdb__interactive_query__succeeded;
  }
}

void MR_CALL 
mdb__interactive_query____Compare____options_string_0_0(
  MR_Word * mdb__interactive_query__HeadVar__1_1,
  MR_String mdb__interactive_query__HeadVar__2_2,
  MR_String mdb__interactive_query__HeadVar__3_3)
{
  {
    MR_bool mdb__interactive_query__succeeded;
    MR_String mdb__interactive_query__Cast_HeadVar1_4 = mdb__interactive_query__HeadVar__2_2;
    MR_String mdb__interactive_query__Cast_HeadVar2_5 = mdb__interactive_query__HeadVar__3_3;

    {
      mercury__private_builtin__builtin_compare_string_3_p_0(mdb__interactive_query__HeadVar__1_1, mdb__interactive_query__Cast_HeadVar1_4, mdb__interactive_query__Cast_HeadVar2_5);
    }
  }
}

MR_bool MR_CALL 
mdb__interactive_query____Unify____options_string_0_0(
  MR_String mdb__interactive_query__HeadVar__1_1,
  MR_String mdb__interactive_query__HeadVar__2_2)
{
  {
    MR_bool mdb__interactive_query__succeeded;
    MR_String mdb__interactive_query__Cast_HeadVar1_3 = mdb__interactive_query__HeadVar__1_1;
    MR_String mdb__interactive_query__Cast_HeadVar2_4 = mdb__interactive_query__HeadVar__2_2;

    mdb__interactive_query__succeeded = (strcmp(mdb__interactive_query__Cast_HeadVar1_3, mdb__interactive_query__Cast_HeadVar2_4) == 0);
    return mdb__interactive_query__succeeded;
  }
}

static void MR_CALL 
mdb__interactive_query____Compare____interactive_query_response_0_0(
  MR_Word * mdb__interactive_query__HeadVar__1_1,
  MR_Word mdb__interactive_query__HeadVar__2_2,
  MR_Word mdb__interactive_query__HeadVar__3_3)
{
  {
    MR_bool mdb__interactive_query__succeeded;
    MR_Integer mdb__interactive_query__CastX_24 = (MR_Integer) mdb__interactive_query__HeadVar__2_2;
    MR_Integer mdb__interactive_query__CastY_25 = (MR_Integer) mdb__interactive_query__HeadVar__3_3;

    mdb__interactive_query__succeeded = (mdb__interactive_query__CastX_24 == mdb__interactive_query__CastY_25);
    if (mdb__interactive_query__succeeded)
      *mdb__interactive_query__HeadVar__1_1 = (MR_Integer) 0;
    else
      switch (MR_tag((MR_Word) mdb__interactive_query__HeadVar__2_2)) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 0:
          switch (MR_unmkbody(mdb__interactive_query__HeadVar__2_2)) {
            default: /*NOTREACHED*/ MR_assert(0);
            case (MR_Integer) 0:
              switch (MR_tag((MR_Word) mdb__interactive_query__HeadVar__3_3)) {
                default: /*NOTREACHED*/ MR_assert(0);
                case (MR_Integer) 0:
                  switch (MR_unmkbody(mdb__interactive_query__HeadVar__3_3)) {
                    default: /*NOTREACHED*/ MR_assert(0);
                    case (MR_Integer) 0:
                      *mdb__interactive_query__HeadVar__1_1 = (MR_Integer) 0;
                      break;
                    case (MR_Integer) 1:
                      *mdb__interactive_query__HeadVar__1_1 = (MR_Integer) 1;
                      break;
                    case (MR_Integer) 2:
                      *mdb__interactive_query__HeadVar__1_1 = (MR_Integer) 1;
                      break;
                  }
                  break;
                case (MR_Integer) 1:
                  *mdb__interactive_query__HeadVar__1_1 = (MR_Integer) 1;
                  break;
                case (MR_Integer) 2:
                  *mdb__interactive_query__HeadVar__1_1 = (MR_Integer) 1;
                  break;
              }
              break;
            case (MR_Integer) 1:
              switch (MR_tag((MR_Word) mdb__interactive_query__HeadVar__3_3)) {
                default: /*NOTREACHED*/ MR_assert(0);
                case (MR_Integer) 0:
                  switch (MR_unmkbody(mdb__interactive_query__HeadVar__3_3)) {
                    default: /*NOTREACHED*/ MR_assert(0);
                    case (MR_Integer) 0:
                      *mdb__interactive_query__HeadVar__1_1 = (MR_Integer) 2;
                      break;
                    case (MR_Integer) 1:
                      *mdb__interactive_query__HeadVar__1_1 = (MR_Integer) 0;
                      break;
                    case (MR_Integer) 2:
                      *mdb__interactive_query__HeadVar__1_1 = (MR_Integer) 1;
                      break;
                  }
                  break;
                case (MR_Integer) 1:
                  *mdb__interactive_query__HeadVar__1_1 = (MR_Integer) 2;
                  break;
                case (MR_Integer) 2:
                  *mdb__interactive_query__HeadVar__1_1 = (MR_Integer) 1;
                  break;
              }
              break;
            case (MR_Integer) 2:
              switch (MR_tag((MR_Word) mdb__interactive_query__HeadVar__3_3)) {
                default: /*NOTREACHED*/ MR_assert(0);
                case (MR_Integer) 0:
                  switch (MR_unmkbody(mdb__interactive_query__HeadVar__3_3)) {
                    default: /*NOTREACHED*/ MR_assert(0);
                    case (MR_Integer) 0:
                      *mdb__interactive_query__HeadVar__1_1 = (MR_Integer) 2;
                      break;
                    case (MR_Integer) 1:
                      *mdb__interactive_query__HeadVar__1_1 = (MR_Integer) 2;
                      break;
                    case (MR_Integer) 2:
                      *mdb__interactive_query__HeadVar__1_1 = (MR_Integer) 0;
                      break;
                  }
                  break;
                case (MR_Integer) 1:
                  *mdb__interactive_query__HeadVar__1_1 = (MR_Integer) 2;
                  break;
                case (MR_Integer) 2:
                  *mdb__interactive_query__HeadVar__1_1 = (MR_Integer) 1;
                  break;
              }
              break;
          }
          break;
        case (MR_Integer) 1:
          {
            MR_Word mdb__interactive_query__V_29_29 = ((MR_Word) (MR_hl_field(MR_mktag(1), mdb__interactive_query__HeadVar__2_2, (MR_Integer) 0)));

            switch (MR_tag((MR_Word) mdb__interactive_query__HeadVar__3_3)) {
              default: /*NOTREACHED*/ MR_assert(0);
              case (MR_Integer) 0:
                switch (MR_unmkbody(mdb__interactive_query__HeadVar__3_3)) {
                  default: /*NOTREACHED*/ MR_assert(0);
                  case (MR_Integer) 0:
                    *mdb__interactive_query__HeadVar__1_1 = (MR_Integer) 2;
                    break;
                  case (MR_Integer) 1:
                    *mdb__interactive_query__HeadVar__1_1 = (MR_Integer) 1;
                    break;
                  case (MR_Integer) 2:
                    *mdb__interactive_query__HeadVar__1_1 = (MR_Integer) 1;
                    break;
                }
                break;
              case (MR_Integer) 1:
                {
                  MR_Word mdb__interactive_query__V_8_8 = ((MR_Word) (MR_hl_field(MR_mktag(1), mdb__interactive_query__HeadVar__3_3, (MR_Integer) 0)));

                  {
                    mercury__builtin__compare_3_p_0((MR_Word) &mdb__interactive_query_scalar_common_1[1], mdb__interactive_query__HeadVar__1_1, ((MR_Box) (mdb__interactive_query__V_29_29)), ((MR_Box) (mdb__interactive_query__V_8_8)));
                  }
                }
                break;
              case (MR_Integer) 2:
                *mdb__interactive_query__HeadVar__1_1 = (MR_Integer) 1;
                break;
            }
          }
          break;
        case (MR_Integer) 2:
          {
            MR_String mdb__interactive_query__V_28_28 = ((MR_String) (MR_hl_field(MR_mktag(2), mdb__interactive_query__HeadVar__2_2, (MR_Integer) 0)));

            switch (MR_tag((MR_Word) mdb__interactive_query__HeadVar__3_3)) {
              default: /*NOTREACHED*/ MR_assert(0);
              case (MR_Integer) 0:
                switch (MR_unmkbody(mdb__interactive_query__HeadVar__3_3)) {
                  default: /*NOTREACHED*/ MR_assert(0);
                  case (MR_Integer) 0:
                    *mdb__interactive_query__HeadVar__1_1 = (MR_Integer) 2;
                    break;
                  case (MR_Integer) 1:
                    *mdb__interactive_query__HeadVar__1_1 = (MR_Integer) 2;
                    break;
                  case (MR_Integer) 2:
                    *mdb__interactive_query__HeadVar__1_1 = (MR_Integer) 2;
                    break;
                }
                break;
              case (MR_Integer) 1:
                *mdb__interactive_query__HeadVar__1_1 = (MR_Integer) 2;
                break;
              case (MR_Integer) 2:
                {
                  MR_String mdb__interactive_query__V_23_23 = ((MR_String) (MR_hl_field(MR_mktag(2), mdb__interactive_query__HeadVar__3_3, (MR_Integer) 0)));

                  {
                    mercury__private_builtin__builtin_compare_string_3_p_0(mdb__interactive_query__HeadVar__1_1, mdb__interactive_query__V_28_28, mdb__interactive_query__V_23_23);
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
mdb__interactive_query____Unify____interactive_query_response_0_0(
  MR_Word mdb__interactive_query__HeadVar__1_1,
  MR_Word mdb__interactive_query__HeadVar__2_2)
{
  {
    MR_bool mdb__interactive_query__succeeded;
    MR_Integer mdb__interactive_query__CastX_13 = (MR_Integer) mdb__interactive_query__HeadVar__1_1;
    MR_Integer mdb__interactive_query__CastY_14 = (MR_Integer) mdb__interactive_query__HeadVar__2_2;

    mdb__interactive_query__succeeded = (mdb__interactive_query__CastX_13 == mdb__interactive_query__CastY_14);
    if (mdb__interactive_query__succeeded)
      mdb__interactive_query__succeeded = MR_TRUE;
    else
      switch (MR_tag((MR_Word) mdb__interactive_query__HeadVar__1_1)) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 0:
          switch (MR_unmkbody(mdb__interactive_query__HeadVar__1_1)) {
            default: /*NOTREACHED*/ MR_assert(0);
            case (MR_Integer) 0:
              {
                MR_Integer mdb__interactive_query__CastX_3 = (MR_Integer) mdb__interactive_query__HeadVar__1_1;
                MR_Integer mdb__interactive_query__CastY_4 = (MR_Integer) mdb__interactive_query__HeadVar__2_2;

                mdb__interactive_query__succeeded = (mdb__interactive_query__CastY_4 == mdb__interactive_query__CastX_3);
              }
              break;
            case (MR_Integer) 1:
              {
                MR_Integer mdb__interactive_query__CastX_7 = (MR_Integer) mdb__interactive_query__HeadVar__1_1;
                MR_Integer mdb__interactive_query__CastY_8 = (MR_Integer) mdb__interactive_query__HeadVar__2_2;

                mdb__interactive_query__succeeded = (mdb__interactive_query__CastY_8 == mdb__interactive_query__CastX_7);
              }
              break;
            case (MR_Integer) 2:
              {
                MR_Integer mdb__interactive_query__CastX_9 = (MR_Integer) mdb__interactive_query__HeadVar__1_1;
                MR_Integer mdb__interactive_query__CastY_10 = (MR_Integer) mdb__interactive_query__HeadVar__2_2;

                mdb__interactive_query__succeeded = (mdb__interactive_query__CastY_10 == mdb__interactive_query__CastX_9);
              }
              break;
          }
          break;
        case (MR_Integer) 1:
          {
            MR_Word mdb__interactive_query__TypeInfo_15_15;
            MR_Word mdb__interactive_query__V_5_5 = ((MR_Word) (MR_hl_field(MR_mktag(1), mdb__interactive_query__HeadVar__1_1, (MR_Integer) 0)));
            MR_Word mdb__interactive_query__V_6_6;

            mdb__interactive_query__succeeded = ((MR_tag((MR_Word) mdb__interactive_query__HeadVar__2_2)) == (MR_mktag((MR_Integer) 1)));
            if (mdb__interactive_query__succeeded)
              {
                mdb__interactive_query__V_6_6 = ((MR_Word) (MR_hl_field(MR_mktag(1), mdb__interactive_query__HeadVar__2_2, (MR_Integer) 0)));
                mdb__interactive_query__TypeInfo_15_15 = (MR_Word) &mdb__interactive_query_scalar_common_1[1];
                {
                  mdb__interactive_query__succeeded = mercury__builtin__unify_2_p_0(mdb__interactive_query__TypeInfo_15_15, ((MR_Box) (mdb__interactive_query__V_5_5)), ((MR_Box) (mdb__interactive_query__V_6_6)));
                }
              }
          }
          break;
        case (MR_Integer) 2:
          {
            MR_String mdb__interactive_query__V_11_11 = ((MR_String) (MR_hl_field(MR_mktag(2), mdb__interactive_query__HeadVar__1_1, (MR_Integer) 0)));
            MR_String mdb__interactive_query__V_12_12;

            mdb__interactive_query__succeeded = ((MR_tag((MR_Word) mdb__interactive_query__HeadVar__2_2)) == (MR_mktag((MR_Integer) 2)));
            if (mdb__interactive_query__succeeded)
              {
                mdb__interactive_query__V_12_12 = ((MR_String) (MR_hl_field(MR_mktag(2), mdb__interactive_query__HeadVar__2_2, (MR_Integer) 0)));
                mdb__interactive_query__succeeded = (strcmp(mdb__interactive_query__V_11_11, mdb__interactive_query__V_12_12) == 0);
              }
          }
          break;
      }
    return mdb__interactive_query__succeeded;
  }
}

void MR_CALL 
mdb__interactive_query____Compare____imports_0_0(
  MR_Word * mdb__interactive_query__HeadVar__1_1,
  MR_Word mdb__interactive_query__HeadVar__2_2,
  MR_Word mdb__interactive_query__HeadVar__3_3)
{
  {
    MR_bool mdb__interactive_query__succeeded;
    MR_Word mdb__interactive_query__Cast_HeadVar1_4 = mdb__interactive_query__HeadVar__2_2;
    MR_Word mdb__interactive_query__Cast_HeadVar2_5 = mdb__interactive_query__HeadVar__3_3;

    {
      mercury__builtin__compare_3_p_0((MR_Word) &mdb__interactive_query_scalar_common_1[1], mdb__interactive_query__HeadVar__1_1, ((MR_Box) (mdb__interactive_query__Cast_HeadVar1_4)), ((MR_Box) (mdb__interactive_query__Cast_HeadVar2_5)));
    }
  }
}

MR_bool MR_CALL 
mdb__interactive_query____Unify____imports_0_0(
  MR_Word mdb__interactive_query__HeadVar__1_1,
  MR_Word mdb__interactive_query__HeadVar__2_2)
{
  {
    MR_bool mdb__interactive_query__succeeded;
    MR_Word mdb__interactive_query__Cast_HeadVar1_3 = mdb__interactive_query__HeadVar__1_1;
    MR_Word mdb__interactive_query__Cast_HeadVar2_4 = mdb__interactive_query__HeadVar__2_2;

    {
      mdb__interactive_query__succeeded = mercury__builtin__unify_2_p_0((MR_Word) &mdb__interactive_query_scalar_common_1[1], ((MR_Box) (mdb__interactive_query__Cast_HeadVar1_3)), ((MR_Box) (mdb__interactive_query__Cast_HeadVar2_4)));
    }
    return mdb__interactive_query__succeeded;
  }
}

static void MR_CALL 
mdb__interactive_query____Compare____bindings_0_0(
  MR_Word * mdb__interactive_query__HeadVar__1_1,
  MR_Word mdb__interactive_query__HeadVar__2_2,
  MR_Word mdb__interactive_query__HeadVar__3_3)
{
  {
    MR_bool mdb__interactive_query__succeeded;
    MR_Word mdb__interactive_query__Cast_HeadVar1_4 = mdb__interactive_query__HeadVar__2_2;
    MR_Word mdb__interactive_query__Cast_HeadVar2_5 = mdb__interactive_query__HeadVar__3_3;

    {
      mercury__builtin__compare_3_p_0((MR_Word) &mdb__interactive_query_scalar_common_2[0], mdb__interactive_query__HeadVar__1_1, ((MR_Box) (mdb__interactive_query__Cast_HeadVar1_4)), ((MR_Box) (mdb__interactive_query__Cast_HeadVar2_5)));
    }
  }
}

static MR_bool MR_CALL 
mdb__interactive_query____Unify____bindings_0_0(
  MR_Word mdb__interactive_query__HeadVar__1_1,
  MR_Word mdb__interactive_query__HeadVar__2_2)
{
  {
    MR_bool mdb__interactive_query__succeeded;
    MR_Word mdb__interactive_query__Cast_HeadVar1_3 = mdb__interactive_query__HeadVar__1_1;
    MR_Word mdb__interactive_query__Cast_HeadVar2_4 = mdb__interactive_query__HeadVar__2_2;

    {
      mdb__interactive_query__succeeded = mercury__builtin__unify_2_p_0((MR_Word) &mdb__interactive_query_scalar_common_2[0], ((MR_Box) (mdb__interactive_query__Cast_HeadVar1_3)), ((MR_Box) (mdb__interactive_query__Cast_HeadVar2_4)));
    }
    return mdb__interactive_query__succeeded;
  }
}

static MR_bool MR_CALL 
mdb__interactive_query__system_is_darwin_0_p_0(void)
{
  {
    MR_bool mdb__interactive_query__succeeded;

{
#define MR_PROC_LABEL mdb__interactive_query__system_is_darwin_0_p_0

	MR_bool SUCCESS_INDICATOR;

		{

#if defined(MR_MAC_OSX)
    SUCCESS_INDICATOR = MR_TRUE;
#else
    SUCCESS_INDICATOR = MR_FALSE;
#endif


		;}
#undef MR_PROC_LABEL
	if (SUCCESS_INDICATOR) {
	}
mdb__interactive_query__succeeded  = SUCCESS_INDICATOR;
}
    return mdb__interactive_query__succeeded;
  }
}

static MR_Word MR_CALL 
mdb__interactive_query__inst_cast_io_1_f_0(
  MR_Word mdb__interactive_query__X_1)
{
  {
    MR_bool mdb__interactive_query__succeeded;
    MR_Word mdb__interactive_query__Y_2;

{
#define MR_PROC_LABEL mdb__interactive_query__inst_cast_io_1_f_0

	MR_Word X;
	MR_Word Y;

	X =  mdb__interactive_query__X_1 ;
		{

    Y = X


		;}
#undef MR_PROC_LABEL
	 mdb__interactive_query__Y_2  = Y;
}
    return mdb__interactive_query__Y_2;
  }
}

static MR_Word MR_CALL 
mdb__interactive_query__inst_cast_cc_1_f_0(
  MR_Word mdb__interactive_query__X_1)
{
  {
    MR_bool mdb__interactive_query__succeeded;
    MR_Word mdb__interactive_query__Y_2;

{
#define MR_PROC_LABEL mdb__interactive_query__inst_cast_cc_1_f_0

	MR_Word X;
	MR_Word Y;

	X =  mdb__interactive_query__X_1 ;
		{

    Y = X


		;}
#undef MR_PROC_LABEL
	 mdb__interactive_query__Y_2  = Y;
}
    return mdb__interactive_query__Y_2;
  }
}

static MR_Word MR_CALL 
mdb__interactive_query__inst_cast_normal_1_f_0(
  MR_Word mdb__interactive_query__X_1)
{
  {
    MR_bool mdb__interactive_query__succeeded;
    MR_Word mdb__interactive_query__Y_2;

{
#define MR_PROC_LABEL mdb__interactive_query__inst_cast_normal_1_f_0

	MR_Word X;
	MR_Word Y;

	X =  mdb__interactive_query__X_1 ;
		{

    Y = X


		;}
#undef MR_PROC_LABEL
	 mdb__interactive_query__Y_2  = Y;
}
    return mdb__interactive_query__Y_2;
  }
}

static void MR_CALL 
mdb__interactive_query__write_binding_4_p_0(
  MR_Word mdb__interactive_query__Bindings_5,
  MR_String mdb__interactive_query__Output_6)
{
  {
    MR_bool mdb__interactive_query__succeeded;
    MR_Word mdb__interactive_query__TypeInfo_20_20;
    MR_Word mdb__interactive_query__Univ_8;
    MR_Box mdb__interactive_query__V_14_14;
    MR_Box mdb__interactive_query__conv0_Univ_8;

    {
      mercury__map__lookup_3_p_0((MR_Word) &mercury__builtin__builtin__type_ctor_info_string_0, (MR_Word) &mercury__univ__univ__type_ctor_info_univ_0, mdb__interactive_query__Bindings_5, ((MR_Box) (mdb__interactive_query__Output_6)), &mdb__interactive_query__conv0_Univ_8);
    }
    mdb__interactive_query__Univ_8 = ((MR_Word) mdb__interactive_query__conv0_Univ_8);
    {
      mercury__io__write_string_3_p_0(mdb__interactive_query__Output_6);
    }
    {
      mercury__io__write_string_3_p_0((MR_String) " = ");
    }
    {
      mdb__interactive_query__V_14_14 = mercury__univ__univ_value_1_f_0(&mdb__interactive_query__TypeInfo_20_20, mdb__interactive_query__Univ_8);
    }
    {
      mercury__io__write_cc_3_p_0(mdb__interactive_query__TypeInfo_20_20, mdb__interactive_query__V_14_14);
    }
    {
      mercury__io__write_string_3_p_0((MR_String) ", ");
    }
  }
}

static void MR_CALL 
mdb__interactive_query__write_solution_5_p_0_1(
  MR_Box mdb__interactive_query__closure_arg,
  MR_Box mdb__interactive_query__wrapper_arg_1,
  MR_Box mdb__interactive_query__wrapper_arg_2,
  MR_Box * mdb__interactive_query__wrapper_arg_3)
{
  {
    MR_Box mdb__interactive_query__closure = mdb__interactive_query__closure_arg;

    {
      mdb__interactive_query__write_binding_4_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), mdb__interactive_query__closure, (MR_Integer) 3))), ((MR_String) mdb__interactive_query__wrapper_arg_1));
    }
  }
}

static void MR_CALL 
mdb__interactive_query__write_solution_5_p_0(
  MR_Word mdb__interactive_query__Outputs_6,
  MR_String mdb__interactive_query__End_7,
  MR_Word mdb__interactive_query__Solution_8)
{
  {
    MR_bool mdb__interactive_query__succeeded;

    if ((mdb__interactive_query__Solution_8 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
      {
        {
          mercury__io__write_string_3_p_0((MR_String) "Error loading some variables.\n");
        }
      }
    else
      {
        MR_Word mdb__interactive_query__Bindings_10 = ((MR_Word) (MR_hl_field(MR_mktag(1), mdb__interactive_query__Solution_8, (MR_Integer) 0)));
        MR_Word mdb__interactive_query__V_13_13;
        MR_Box mdb__interactive_query__conv0_STATE_VARIABLE_IO_14_14;

        {
          mdb__interactive_query__V_13_13 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(MR_mktag(0), mdb__interactive_query__V_13_13, 0) = ((MR_Box) (&mdb__interactive_query_scalar_common_4[1]));
          MR_hl_field(MR_mktag(0), mdb__interactive_query__V_13_13, 1) = ((MR_Box) (mdb__interactive_query__write_solution_5_p_0_1));
          MR_hl_field(MR_mktag(0), mdb__interactive_query__V_13_13, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
          MR_hl_field(MR_mktag(0), mdb__interactive_query__V_13_13, 3) = ((MR_Box) (mdb__interactive_query__Bindings_10));
        }
        {
          mercury__list__foldl_4_p_10((MR_Word) &mercury__builtin__builtin__type_ctor_info_string_0, (MR_Word) &mercury__io__io__type_ctor_info_state_0, mdb__interactive_query__V_13_13, mdb__interactive_query__Outputs_6, ((MR_Box) ((MR_Integer) 0)), &mdb__interactive_query__conv0_STATE_VARIABLE_IO_14_14);
        }
        {
          mercury__io__write_string_3_p_0(mdb__interactive_query__End_7);
        }
        {
          mercury__io__write_string_3_p_0((MR_String) "\n");
        }
      }
  }
}

static void MR_CALL 
mdb__interactive_query__call_run_io_5_p_0(
  MR_Word mdb__interactive_query__QueryPred0_6,
  MR_Word mdb__interactive_query__Bindings0_7,
  MR_Word * mdb__interactive_query__Solution_8)
{
  {
    MR_bool mdb__interactive_query__succeeded;
    MR_Word mdb__interactive_query__QueryPred_10;
    MR_Word mdb__interactive_query__Bindings_11;
    MR_Word mdb__interactive_query__Loaded_12;
    void MR_CALL (* mdb__interactive_query__func_0)(MR_Box, MR_Box, MR_Box *, MR_Box *, MR_Box, MR_Box *);
    MR_Box mdb__interactive_query__conv3_Bindings_11;
    MR_Box mdb__interactive_query__conv2_Loaded_12;
    MR_Box mdb__interactive_query__conv1_STATE_VARIABLE_IO_14;

{
#define MR_PROC_LABEL mdb__interactive_query__call_run_io_5_p_0

	MR_Word X;
	MR_Word Y;

	X =  mdb__interactive_query__QueryPred0_6 ;
		{

    Y = X


		;}
#undef MR_PROC_LABEL
	 mdb__interactive_query__QueryPred_10  = Y;
}
    mdb__interactive_query__func_0 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box *, MR_Box *, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), mdb__interactive_query__QueryPred_10, (MR_Integer) 1)));
    {
      mdb__interactive_query__func_0(((MR_Box) mdb__interactive_query__QueryPred_10), ((MR_Box) (mdb__interactive_query__Bindings0_7)), &mdb__interactive_query__conv3_Bindings_11, &mdb__interactive_query__conv2_Loaded_12, ((MR_Box) ((MR_Integer) 0)), &mdb__interactive_query__conv1_STATE_VARIABLE_IO_14);
    }
    mdb__interactive_query__Bindings_11 = ((MR_Word) mdb__interactive_query__conv3_Bindings_11);
    mdb__interactive_query__Loaded_12 = ((MR_Word) mdb__interactive_query__conv2_Loaded_12);
    switch (mdb__interactive_query__Loaded_12) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        *mdb__interactive_query__Solution_8 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
        break;
      case (MR_Integer) 1:
        {
          MR_Word base;
          base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
          *mdb__interactive_query__Solution_8 = base;
          MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (mdb__interactive_query__Bindings_11));
        }
        break;
    }
  }
}

static MR_bool MR_CALL 
mdb__interactive_query__call_run_cc_3_p_0(
  MR_Word mdb__interactive_query__QueryPred0_4,
  MR_Word mdb__interactive_query__Bindings0_5,
  MR_Word * mdb__interactive_query__Solution_6)
{
  {
    MR_bool mdb__interactive_query__succeeded;
    MR_Word mdb__interactive_query__QueryPred_7;
    MR_Word mdb__interactive_query__Bindings_8;
    MR_Word mdb__interactive_query__Loaded_9;
    MR_bool MR_CALL (* mdb__interactive_query__func_0)(MR_Box, MR_Box, MR_Box *, MR_Box *);
    MR_Box mdb__interactive_query__conv2_Bindings_8;
    MR_Box mdb__interactive_query__conv1_Loaded_9;

{
#define MR_PROC_LABEL mdb__interactive_query__call_run_cc_3_p_0

	MR_Word X;
	MR_Word Y;

	X =  mdb__interactive_query__QueryPred0_4 ;
		{

    Y = X


		;}
#undef MR_PROC_LABEL
	 mdb__interactive_query__QueryPred_7  = Y;
}
    mdb__interactive_query__func_0 = ((MR_bool MR_CALL (*)(MR_Box, MR_Box, MR_Box *, MR_Box *)) (MR_hl_field(MR_mktag(0), mdb__interactive_query__QueryPred_7, (MR_Integer) 1)));
    {
      mdb__interactive_query__succeeded = mdb__interactive_query__func_0(((MR_Box) mdb__interactive_query__QueryPred_7), ((MR_Box) (mdb__interactive_query__Bindings0_5)), &mdb__interactive_query__conv2_Bindings_8, &mdb__interactive_query__conv1_Loaded_9);
    }
    if (mdb__interactive_query__succeeded)
      {
        mdb__interactive_query__Bindings_8 = ((MR_Word) mdb__interactive_query__conv2_Bindings_8);
        mdb__interactive_query__Loaded_9 = ((MR_Word) mdb__interactive_query__conv1_Loaded_9);
        mdb__interactive_query__succeeded = MR_TRUE;
      }
    if (mdb__interactive_query__succeeded)
      {
        switch (mdb__interactive_query__Loaded_9) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
            *mdb__interactive_query__Solution_6 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
            break;
          case (MR_Integer) 1:
            {
              MR_Word base;
              base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
              *mdb__interactive_query__Solution_6 = base;
              MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (mdb__interactive_query__Bindings_8));
            }
            break;
        }
        mdb__interactive_query__succeeded = MR_TRUE;
      }
    return mdb__interactive_query__succeeded;
  }
}

static MR_bool MR_CALL 
mdb__interactive_query__link_and_run_cc_5_p_0_1(
  MR_Box mdb__interactive_query__closure_arg,
  MR_Box * mdb__interactive_query__wrapper_arg_1)
{
  {
    MR_bool mdb__interactive_query__succeeded;
    MR_Box mdb__interactive_query__closure = mdb__interactive_query__closure_arg;
    MR_Word mdb__interactive_query__conv0_Solution_6;

    {
      mdb__interactive_query__succeeded = mdb__interactive_query__call_run_cc_3_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), mdb__interactive_query__closure, (MR_Integer) 3))), ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__interactive_query__closure, (MR_Integer) 4))), &mdb__interactive_query__conv0_Solution_6);
    }
    if (mdb__interactive_query__succeeded)
      {
        *mdb__interactive_query__wrapper_arg_1 = ((MR_Box) (mdb__interactive_query__conv0_Solution_6));
        mdb__interactive_query__succeeded = MR_TRUE;
      }
    return mdb__interactive_query__succeeded;
  }
}

static void MR_CALL 
mdb__interactive_query__link_and_run_cc_5_p_0(
  MR_Word mdb__interactive_query__Bindings_6,
  MR_Word mdb__interactive_query__Outputs_7,
  MR_Word mdb__interactive_query__Handle_8)
{
  {
    MR_bool mdb__interactive_query__succeeded;
    MR_Word mdb__interactive_query__MaybeQuery_10;

    {
      mdb__dl__mercury_sym_5_p_0((MR_Word) &mdb__interactive_query_scalar_common_3[0], mdb__interactive_query__Handle_8, (MR_Word) &mdb__interactive_query_scalar_common_3[2], &mdb__interactive_query__MaybeQuery_10);
    }
    if (((MR_tag((MR_Word) mdb__interactive_query__MaybeQuery_10)) == (MR_mktag((MR_Integer) 1))))
      {
        MR_String mdb__interactive_query__Msg_11 = ((MR_String) (MR_hl_field(MR_mktag(1), mdb__interactive_query__MaybeQuery_10, (MR_Integer) 0)));
        MR_Word mdb__interactive_query__V_27_27;
        MR_Word mdb__interactive_query__V_30_30;

        {
          mdb__interactive_query__V_30_30 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), mdb__interactive_query__V_30_30, 0) = ((MR_Box) (mdb__interactive_query__Msg_11));
          MR_hl_field(MR_mktag(1), mdb__interactive_query__V_30_30, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &mdb__interactive_query_scalar_common_1[21])));
        }
        {
          mdb__interactive_query__V_27_27 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), mdb__interactive_query__V_27_27, 0) = ((MR_Box) ((MR_String) "dlsym failed: "));
          MR_hl_field(MR_mktag(1), mdb__interactive_query__V_27_27, 1) = ((MR_Box) (mdb__interactive_query__V_30_30));
        }
        {
          mercury__io__write_strings_3_p_0(mdb__interactive_query__V_27_27);
        }
      }
    else
      {
        MR_Word mdb__interactive_query__QueryPred_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__interactive_query__MaybeQuery_10, (MR_Integer) 0)));
        MR_Word mdb__interactive_query__Result_13;
        MR_Word mdb__interactive_query__V_20_20;

        {
          mdb__interactive_query__V_20_20 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(MR_mktag(0), mdb__interactive_query__V_20_20, 0) = ((MR_Box) (&mdb__interactive_query_scalar_common_5[2]));
          MR_hl_field(MR_mktag(0), mdb__interactive_query__V_20_20, 1) = ((MR_Box) (mdb__interactive_query__link_and_run_cc_5_p_0_1));
          MR_hl_field(MR_mktag(0), mdb__interactive_query__V_20_20, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
          MR_hl_field(MR_mktag(0), mdb__interactive_query__V_20_20, 3) = ((MR_Box) (mdb__interactive_query__QueryPred_12));
          MR_hl_field(MR_mktag(0), mdb__interactive_query__V_20_20, 4) = ((MR_Box) (mdb__interactive_query__Bindings_6));
        }
        {
          mercury__exception__try_2_p_3((MR_Word) &mdb__interactive_query__mdb__interactive_query__type_ctor_info_solution_0, mdb__interactive_query__V_20_20, &mdb__interactive_query__Result_13);
        }
        switch (MR_tag((MR_Word) mdb__interactive_query__Result_13)) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
            {
              {
                mercury__io__write_string_3_p_0((MR_String) "No solution.\n");
              }
            }
            break;
          case (MR_Integer) 1:
            {
              MR_Word mdb__interactive_query__Solution_14 = ((MR_Word) (MR_hl_field(MR_mktag(1), mdb__interactive_query__Result_13, (MR_Integer) 0)));

              {
                mdb__interactive_query__write_solution_5_p_0(mdb__interactive_query__Outputs_7, (MR_String) "true.", mdb__interactive_query__Solution_14);
              }
            }
            break;
          case (MR_Integer) 2:
            {
              MR_Word mdb__interactive_query__TypeInfo_37_37;
              MR_Word mdb__interactive_query__Excp_15 = ((MR_Word) (MR_hl_field(MR_mktag(2), mdb__interactive_query__Result_13, (MR_Integer) 0)));
              MR_Box mdb__interactive_query__V_21_21;

              {
                mdb__interactive_query__V_21_21 = mercury__univ__univ_value_1_f_0(&mdb__interactive_query__TypeInfo_37_37, mdb__interactive_query__Excp_15);
              }
              {
                mercury__io__write_string_3_p_0((MR_String) "*** caught exception: ");
              }
              {
                mercury__io__write_cc_3_p_0(mdb__interactive_query__TypeInfo_37_37, mdb__interactive_query__V_21_21);
              }
              {
                mercury__io__nl_2_p_0();
              }
            }
            break;
        }
      }
  }
}

static void MR_CALL 
mdb__interactive_query__call_run_normal_3_p_0_2(
  void * mdb__interactive_query__env_ptr_arg)
{
  {
    struct mdb__interactive_query__call_run_normal_3_p_0_env_0_s * mdb__interactive_query__env_ptr = (struct mdb__interactive_query__call_run_normal_3_p_0_env_0_s *) mdb__interactive_query__env_ptr_arg;

    (mdb__interactive_query__env_ptr)->mdb__interactive_query__call_run_normal_3_p_0_env_0__Bindings_8 = ((MR_Word) (mdb__interactive_query__env_ptr)->mdb__interactive_query__call_run_normal_3_p_0_env_0__conv2_Bindings_8);
    (mdb__interactive_query__env_ptr)->mdb__interactive_query__call_run_normal_3_p_0_env_0__Loaded_9 = ((MR_Word) (mdb__interactive_query__env_ptr)->mdb__interactive_query__call_run_normal_3_p_0_env_0__conv1_Loaded_9);
    {
      mdb__interactive_query__call_run_normal_3_p_0_1(mdb__interactive_query__env_ptr);
    }
  }
}

static void MR_CALL 
mdb__interactive_query__call_run_normal_3_p_0_1(
  void * mdb__interactive_query__env_ptr_arg)
{
  {
    struct mdb__interactive_query__call_run_normal_3_p_0_env_0_s * mdb__interactive_query__env_ptr = (struct mdb__interactive_query__call_run_normal_3_p_0_env_0_s *) mdb__interactive_query__env_ptr_arg;

    switch ((mdb__interactive_query__env_ptr)->mdb__interactive_query__call_run_normal_3_p_0_env_0__Loaded_9) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        *((mdb__interactive_query__env_ptr)->mdb__interactive_query__call_run_normal_3_p_0_env_0__Solution_6) = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
        break;
      case (MR_Integer) 1:
        {
          MR_Word base;
          base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
          *((mdb__interactive_query__env_ptr)->mdb__interactive_query__call_run_normal_3_p_0_env_0__Solution_6) = base;
          MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) ((mdb__interactive_query__env_ptr)->mdb__interactive_query__call_run_normal_3_p_0_env_0__Bindings_8));
        }
        break;
    }
    {
      ((mdb__interactive_query__env_ptr)->mdb__interactive_query__call_run_normal_3_p_0_env_0__cont)((mdb__interactive_query__env_ptr)->mdb__interactive_query__call_run_normal_3_p_0_env_0__cont_env_ptr);
    }
  }
}

static void MR_CALL 
mdb__interactive_query__call_run_normal_3_p_0(
  MR_Word mdb__interactive_query__QueryPred0_4,
  MR_Word mdb__interactive_query__Bindings0_5,
  MR_Word * mdb__interactive_query__Solution_6,
  MR_Cont mdb__interactive_query__cont,
  void * mdb__interactive_query__cont_env_ptr)
{
  {
    struct mdb__interactive_query__call_run_normal_3_p_0_env_0_s mdb__interactive_query__env;

    (mdb__interactive_query__env).mdb__interactive_query__call_run_normal_3_p_0_env_0__Solution_6 = mdb__interactive_query__Solution_6;
    (mdb__interactive_query__env).mdb__interactive_query__call_run_normal_3_p_0_env_0__cont = mdb__interactive_query__cont;
    (mdb__interactive_query__env).mdb__interactive_query__call_run_normal_3_p_0_env_0__cont_env_ptr = mdb__interactive_query__cont_env_ptr;
    {
      MR_bool mdb__interactive_query__succeeded;
      MR_Word mdb__interactive_query__QueryPred_7;
      void MR_CALL (* mdb__interactive_query__func_0)(MR_Box, MR_Box, MR_Box *, MR_Box *, MR_Cont, void *);

{
#define MR_PROC_LABEL mdb__interactive_query__call_run_normal_3_p_0

	MR_Word X;
	MR_Word Y;

	X =  mdb__interactive_query__QueryPred0_4 ;
		{

    Y = X


		;}
#undef MR_PROC_LABEL
	 mdb__interactive_query__QueryPred_7  = Y;
}
      mdb__interactive_query__func_0 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box *, MR_Box *, MR_Cont, void *)) (MR_hl_field(MR_mktag(0), mdb__interactive_query__QueryPred_7, (MR_Integer) 1)));
      {
        mdb__interactive_query__func_0(((MR_Box) mdb__interactive_query__QueryPred_7), ((MR_Box) (mdb__interactive_query__Bindings0_5)), &(mdb__interactive_query__env).mdb__interactive_query__call_run_normal_3_p_0_env_0__conv2_Bindings_8, &(mdb__interactive_query__env).mdb__interactive_query__call_run_normal_3_p_0_env_0__conv1_Loaded_9, mdb__interactive_query__call_run_normal_3_p_0_2, &mdb__interactive_query__env);
      }
    }
  }
}

static void MR_CALL 
mdb__interactive_query__link_and_run_normal_5_p_0_3(
  MR_Box mdb__interactive_query__closure_arg,
  MR_Box mdb__interactive_query__wrapper_arg_1,
  MR_Box mdb__interactive_query__wrapper_arg_2,
  MR_Box * mdb__interactive_query__wrapper_arg_3)
{
  {
    MR_Box mdb__interactive_query__closure = mdb__interactive_query__closure_arg;

    {
      mdb__interactive_query__write_solution_5_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), mdb__interactive_query__closure, (MR_Integer) 3))), ((MR_String) (MR_hl_field(MR_mktag(0), mdb__interactive_query__closure, (MR_Integer) 4))), ((MR_Word) mdb__interactive_query__wrapper_arg_1));
    }
  }
}

static void MR_CALL 
mdb__interactive_query__link_and_run_normal_5_p_0_1(
  void * mdb__interactive_query__env_ptr_arg)
{
  {
    struct mdb__interactive_query__link_and_run_normal_5_p_0_2_env_0_s * mdb__interactive_query__env_ptr = (struct mdb__interactive_query__link_and_run_normal_5_p_0_2_env_0_s *) mdb__interactive_query__env_ptr_arg;

    *((mdb__interactive_query__env_ptr)->mdb__interactive_query__link_and_run_normal_5_p_0_2_env_0__wrapper_arg_1) = ((MR_Box) ((mdb__interactive_query__env_ptr)->mdb__interactive_query__link_and_run_normal_5_p_0_2_env_0__conv0_Solution_6));
    {
      ((mdb__interactive_query__env_ptr)->mdb__interactive_query__link_and_run_normal_5_p_0_2_env_0__cont)((mdb__interactive_query__env_ptr)->mdb__interactive_query__link_and_run_normal_5_p_0_2_env_0__cont_env_ptr);
    }
  }
}

static void MR_CALL 
mdb__interactive_query__link_and_run_normal_5_p_0_2(
  MR_Box mdb__interactive_query__closure_arg,
  MR_Box * mdb__interactive_query__wrapper_arg_1,
  MR_Cont mdb__interactive_query__cont,
  void * mdb__interactive_query__cont_env_ptr)
{
  {
    struct mdb__interactive_query__link_and_run_normal_5_p_0_2_env_0_s mdb__interactive_query__env;

    (mdb__interactive_query__env).mdb__interactive_query__link_and_run_normal_5_p_0_2_env_0__wrapper_arg_1 = mdb__interactive_query__wrapper_arg_1;
    (mdb__interactive_query__env).mdb__interactive_query__link_and_run_normal_5_p_0_2_env_0__cont = mdb__interactive_query__cont;
    (mdb__interactive_query__env).mdb__interactive_query__link_and_run_normal_5_p_0_2_env_0__cont_env_ptr = mdb__interactive_query__cont_env_ptr;
    {
      MR_Box mdb__interactive_query__closure = mdb__interactive_query__closure_arg;

      {
        mdb__interactive_query__call_run_normal_3_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), mdb__interactive_query__closure, (MR_Integer) 3))), ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__interactive_query__closure, (MR_Integer) 4))), &(mdb__interactive_query__env).mdb__interactive_query__link_and_run_normal_5_p_0_2_env_0__conv0_Solution_6, mdb__interactive_query__link_and_run_normal_5_p_0_1, &mdb__interactive_query__env);
      }
    }
  }
}

static void MR_CALL 
mdb__interactive_query__link_and_run_normal_5_p_0(
  MR_Word mdb__interactive_query__Bindings_6,
  MR_Word mdb__interactive_query__Outputs_7,
  MR_Word mdb__interactive_query__Handle_8)
{
  {
    MR_bool mdb__interactive_query__succeeded;
    MR_Word mdb__interactive_query__MaybeQuery_10;

    {
      mdb__dl__mercury_sym_5_p_0((MR_Word) &mdb__interactive_query_scalar_common_3[0], mdb__interactive_query__Handle_8, (MR_Word) &mdb__interactive_query_scalar_common_3[2], &mdb__interactive_query__MaybeQuery_10);
    }
    if (((MR_tag((MR_Word) mdb__interactive_query__MaybeQuery_10)) == (MR_mktag((MR_Integer) 1))))
      {
        MR_String mdb__interactive_query__Msg_11 = ((MR_String) (MR_hl_field(MR_mktag(1), mdb__interactive_query__MaybeQuery_10, (MR_Integer) 0)));
        MR_Word mdb__interactive_query__V_30_30;
        MR_Word mdb__interactive_query__V_33_33;

        {
          mdb__interactive_query__V_33_33 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), mdb__interactive_query__V_33_33, 0) = ((MR_Box) (mdb__interactive_query__Msg_11));
          MR_hl_field(MR_mktag(1), mdb__interactive_query__V_33_33, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &mdb__interactive_query_scalar_common_1[21])));
        }
        {
          mdb__interactive_query__V_30_30 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), mdb__interactive_query__V_30_30, 0) = ((MR_Box) ((MR_String) "dlsym failed: "));
          MR_hl_field(MR_mktag(1), mdb__interactive_query__V_30_30, 1) = ((MR_Box) (mdb__interactive_query__V_33_33));
        }
        {
          mercury__io__write_strings_3_p_0(mdb__interactive_query__V_30_30);
        }
      }
    else
      {
        MR_Word mdb__interactive_query__TypeCtorInfo_39_39;
        MR_Word mdb__interactive_query__QueryPred_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__interactive_query__MaybeQuery_10, (MR_Integer) 0)));
        MR_Word mdb__interactive_query__MaybeExcp_13;
        MR_Word mdb__interactive_query__Solutions_14;
        MR_Word mdb__interactive_query__V_20_20;
        MR_Word mdb__interactive_query__V_21_21;
        MR_Box mdb__interactive_query__conv1_STATE_VARIABLE_IO_22_22;

        {
          mdb__interactive_query__V_20_20 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(MR_mktag(0), mdb__interactive_query__V_20_20, 0) = ((MR_Box) (&mdb__interactive_query_scalar_common_5[2]));
          MR_hl_field(MR_mktag(0), mdb__interactive_query__V_20_20, 1) = ((MR_Box) (mdb__interactive_query__link_and_run_normal_5_p_0_2));
          MR_hl_field(MR_mktag(0), mdb__interactive_query__V_20_20, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
          MR_hl_field(MR_mktag(0), mdb__interactive_query__V_20_20, 3) = ((MR_Box) (mdb__interactive_query__QueryPred_12));
          MR_hl_field(MR_mktag(0), mdb__interactive_query__V_20_20, 4) = ((MR_Box) (mdb__interactive_query__Bindings_6));
        }
        mdb__interactive_query__TypeCtorInfo_39_39 = (MR_Word) &mdb__interactive_query__mdb__interactive_query__type_ctor_info_solution_0;
        {
          mercury__exception__try_all_3_p_3(mdb__interactive_query__TypeCtorInfo_39_39, mdb__interactive_query__V_20_20, &mdb__interactive_query__MaybeExcp_13, &mdb__interactive_query__Solutions_14);
        }
        {
          mdb__interactive_query__V_21_21 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(MR_mktag(0), mdb__interactive_query__V_21_21, 0) = ((MR_Box) (&mdb__interactive_query_scalar_common_8[0]));
          MR_hl_field(MR_mktag(0), mdb__interactive_query__V_21_21, 1) = ((MR_Box) (mdb__interactive_query__link_and_run_normal_5_p_0_3));
          MR_hl_field(MR_mktag(0), mdb__interactive_query__V_21_21, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
          MR_hl_field(MR_mktag(0), mdb__interactive_query__V_21_21, 3) = ((MR_Box) (mdb__interactive_query__Outputs_7));
          MR_hl_field(MR_mktag(0), mdb__interactive_query__V_21_21, 4) = ((MR_Box) ((MR_String) "true ;"));
        }
        {
          mercury__list__foldl_4_p_10(mdb__interactive_query__TypeCtorInfo_39_39, (MR_Word) &mercury__io__io__type_ctor_info_state_0, mdb__interactive_query__V_21_21, mdb__interactive_query__Solutions_14, ((MR_Box) ((MR_Integer) 0)), &mdb__interactive_query__conv1_STATE_VARIABLE_IO_22_22);
        }
        if ((mdb__interactive_query__MaybeExcp_13 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
          {
            {
              mercury__io__write_string_3_p_0((MR_String) "fail.\n");
            }
          }
        else
          {
            MR_Word mdb__interactive_query__TypeInfo_44_44;
            MR_Word mdb__interactive_query__Excp_15 = ((MR_Word) (MR_hl_field(MR_mktag(1), mdb__interactive_query__MaybeExcp_13, (MR_Integer) 0)));
            MR_Box mdb__interactive_query__V_26_26;

            {
              mdb__interactive_query__V_26_26 = mercury__univ__univ_value_1_f_0(&mdb__interactive_query__TypeInfo_44_44, mdb__interactive_query__Excp_15);
            }
            {
              mercury__io__write_string_3_p_0((MR_String) "*** caught exception: ");
            }
            {
              mercury__io__write_cc_3_p_0(mdb__interactive_query__TypeInfo_44_44, mdb__interactive_query__V_26_26);
            }
            {
              mercury__io__nl_2_p_0();
            }
          }
        {
          mercury__io__write_string_3_p_0((MR_String) "No (more) solutions.\n");
        }
      }
  }
}

static void MR_CALL 
mdb__interactive_query__dynamically_load_and_run_3_p_0(
  MR_Word mdb__interactive_query__Program_4)
{
  {
    MR_bool mdb__interactive_query__succeeded;
    MR_String mdb__interactive_query__Filename_6;
    MR_Word mdb__interactive_query__MaybeHandle_7;
    MR_String mdb__interactive_query__V_18_18;
    MR_String mdb__interactive_query__V_20_20;

{
#define MR_PROC_LABEL mdb__interactive_query__dynamically_load_and_run_3_p_0

	MR_bool SUCCESS_INDICATOR;

		{

#if defined(MR_MAC_OSX)
    SUCCESS_INDICATOR = MR_TRUE;
#else
    SUCCESS_INDICATOR = MR_FALSE;
#endif


		;}
#undef MR_PROC_LABEL
	if (SUCCESS_INDICATOR) {
	}
mdb__interactive_query__succeeded  = SUCCESS_INDICATOR;
}
    if (mdb__interactive_query__succeeded)
      mdb__interactive_query__V_20_20 = (MR_String) ".dylib";
    else
      mdb__interactive_query__V_20_20 = (MR_String) ".so";
    {
      mdb__interactive_query__V_18_18 = mercury__string__f_43_43_2_f_0((MR_String) "mdb_query", mdb__interactive_query__V_20_20);
    }
    {
      mdb__interactive_query__Filename_6 = mercury__string__f_43_43_2_f_0((MR_String) "./lib", mdb__interactive_query__V_18_18);
    }
    {
      mdb__dl__open_6_p_0(mdb__interactive_query__Filename_6, (MR_Integer) 0, (MR_Integer) 0, &mdb__interactive_query__MaybeHandle_7);
    }
    if (((MR_tag((MR_Word) mdb__interactive_query__MaybeHandle_7)) == (MR_mktag((MR_Integer) 1))))
      {
        MR_String mdb__interactive_query__Msg_8 = ((MR_String) (MR_hl_field(MR_mktag(1), mdb__interactive_query__MaybeHandle_7, (MR_Integer) 0)));

        {
          mercury__io__write_string_3_p_0((MR_String) "dlopen failed: ");
        }
        {
          mercury__io__write_string_3_p_0(mdb__interactive_query__Msg_8);
        }
        {
          mercury__io__write_string_3_p_0((MR_String) "\n");
        }
      }
    else
      {
        MR_Word mdb__interactive_query__Handle_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__interactive_query__MaybeHandle_7, (MR_Integer) 0)));
        MR_Word mdb__interactive_query__QueryType_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__interactive_query__Program_4, (MR_Integer) 0)));
        MR_Word mdb__interactive_query__Bindings_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__interactive_query__Program_4, (MR_Integer) 2)));
        MR_Word mdb__interactive_query__Outputs_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__interactive_query__Program_4, (MR_Integer) 4)));
        MR_Word mdb__interactive_query__Result_13;
        MR_Word mdb__interactive_query__V_38_38 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__interactive_query__Program_4, (MR_Integer) 1)));
        MR_Word mdb__interactive_query__V_40_40 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__interactive_query__Program_4, (MR_Integer) 3)));
        MR_Word mdb__interactive_query__V_42_42 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__interactive_query__Program_4, (MR_Integer) 5)));
        MR_Word mdb__interactive_query__V_43_43 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__interactive_query__Program_4, (MR_Integer) 6)));

        switch (mdb__interactive_query__QueryType_10) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 1:
            {
              mdb__interactive_query__link_and_run_cc_5_p_0(mdb__interactive_query__Bindings_11, mdb__interactive_query__Outputs_12, mdb__interactive_query__Handle_9);
            }
            break;
          case (MR_Integer) 2:
            {
              mdb__interactive_query__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_108_105_110_107_95_97_110_100_95_114_117_110_95_105_111_95_95_91_50_93_95_48_5_p_0(mdb__interactive_query__Bindings_11, mdb__interactive_query__Handle_9);
            }
            break;
          case (MR_Integer) 0:
            {
              mdb__interactive_query__link_and_run_normal_5_p_0(mdb__interactive_query__Bindings_11, mdb__interactive_query__Outputs_12, mdb__interactive_query__Handle_9);
            }
            break;
        }
        {
          mdb__dl__close_4_p_0(mdb__interactive_query__Handle_9, &mdb__interactive_query__Result_13);
        }
        if ((mdb__interactive_query__Result_13 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
          {
          }
        else
          {
            MR_String mdb__interactive_query__CloseMsg_14 = ((MR_String) (MR_hl_field(MR_mktag(1), mdb__interactive_query__Result_13, (MR_Integer) 0)));

            {
              mercury__io__write_string_3_p_0((MR_String) "dlclose failed: ");
            }
            {
              mercury__io__write_string_3_p_0(mdb__interactive_query__CloseMsg_14);
            }
            {
              mercury__io__write_string_3_p_0((MR_String) "\n");
            }
          }
      }
  }
}

static MR_String MR_CALL 
mdb__interactive_query__query_module_name_0_f_0(void)
{
  {
    MR_bool mdb__interactive_query__succeeded;

    return (MR_String) "mdb_query";
  }
}

static MR_String MR_CALL 
mdb__interactive_query__grade_option_0_f_0(void)
{
  {
    MR_bool mdb__interactive_query__succeeded;
    MR_String mdb__interactive_query__GradeOpt_1;

{
#define MR_PROC_LABEL mdb__interactive_query__grade_option_0_f_0

	MR_String GradeOpt;

		{

    MR_make_aligned_string(GradeOpt, (MR_String) MR_GRADE_OPT);


		;}
#undef MR_PROC_LABEL
	 mdb__interactive_query__GradeOpt_1  = GradeOpt;
}
    return mdb__interactive_query__GradeOpt_1;
  }
}

static void MR_CALL 
mdb__interactive_query__cleanup_file_4_p_0(
  MR_String mdb__interactive_query__Prefix_5,
  MR_String mdb__interactive_query__Suffix_6)
{
  {
    MR_bool mdb__interactive_query__succeeded;
    MR_String mdb__interactive_query__V_11_11;
    MR_String mdb__interactive_query__V_13_13;
    MR_Word mdb__interactive_query__V_8_8;

    {
      mdb__interactive_query__V_13_13 = mercury__string__f_43_43_2_f_0((MR_String) "mdb_query", mdb__interactive_query__Suffix_6);
    }
    {
      mdb__interactive_query__V_11_11 = mercury__string__f_43_43_2_f_0(mdb__interactive_query__Prefix_5, mdb__interactive_query__V_13_13);
    }
    {
      mercury__io__remove_file_4_p_0(mdb__interactive_query__V_11_11, &mdb__interactive_query__V_8_8);
    }
  }
}

static void MR_CALL 
mdb__interactive_query__compile_file_4_p_0(
  MR_String mdb__interactive_query__Options_5,
  MR_Word * mdb__interactive_query__Succeeded_6)
{
  {
    MR_bool mdb__interactive_query__succeeded;
    MR_String mdb__interactive_query__Command_8;
    MR_Word mdb__interactive_query__V_11_11;
    MR_Word mdb__interactive_query__V_13_13;
    MR_Word mdb__interactive_query__V_15_15;
    MR_Word mdb__interactive_query__V_17_17;
    MR_Word mdb__interactive_query__V_19_19;
    MR_Word mdb__interactive_query__V_20_20;
    MR_Word mdb__interactive_query__V_22_22;
    MR_String mdb__interactive_query__V_23_23;
    MR_Word mdb__interactive_query__Result_37;

{
#define MR_PROC_LABEL mdb__interactive_query__compile_file_4_p_0

	MR_String GradeOpt;

		{

    MR_make_aligned_string(GradeOpt, (MR_String) MR_GRADE_OPT);


		;}
#undef MR_PROC_LABEL
	 mdb__interactive_query__V_23_23  = GradeOpt;
}
    {
      mdb__interactive_query__V_22_22 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), mdb__interactive_query__V_22_22, 0) = ((MR_Box) (mdb__interactive_query__V_23_23));
      MR_hl_field(MR_mktag(1), mdb__interactive_query__V_22_22, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &mdb__interactive_query_scalar_common_1[26])));
    }
    {
      mdb__interactive_query__V_20_20 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), mdb__interactive_query__V_20_20, 0) = ((MR_Box) ((MR_String) " --grade "));
      MR_hl_field(MR_mktag(1), mdb__interactive_query__V_20_20, 1) = ((MR_Box) (mdb__interactive_query__V_22_22));
    }
    {
      mdb__interactive_query__V_19_19 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), mdb__interactive_query__V_19_19, 0) = ((MR_Box) (mdb__interactive_query__Options_5));
      MR_hl_field(MR_mktag(1), mdb__interactive_query__V_19_19, 1) = ((MR_Box) (mdb__interactive_query__V_20_20));
    }
    {
      mdb__interactive_query__V_17_17 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), mdb__interactive_query__V_17_17, 0) = ((MR_Box) ((MR_String) "--allow-undefined "));
      MR_hl_field(MR_mktag(1), mdb__interactive_query__V_17_17, 1) = ((MR_Box) (mdb__interactive_query__V_19_19));
    }
    {
      mdb__interactive_query__V_15_15 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), mdb__interactive_query__V_15_15, 0) = ((MR_Box) ((MR_String) "--output-compile-error-lines 10000 "));
      MR_hl_field(MR_mktag(1), mdb__interactive_query__V_15_15, 1) = ((MR_Box) (mdb__interactive_query__V_17_17));
    }
    {
      mdb__interactive_query__V_13_13 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), mdb__interactive_query__V_13_13, 0) = ((MR_Box) ((MR_String) "--no-warn-simple-code --no-warn-det-decls-too-lax "));
      MR_hl_field(MR_mktag(1), mdb__interactive_query__V_13_13, 1) = ((MR_Box) (mdb__interactive_query__V_15_15));
    }
    {
      mdb__interactive_query__V_11_11 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), mdb__interactive_query__V_11_11, 0) = ((MR_Box) ((MR_String) "mmc --infer-all --no-verbose-make -O0 --no-c-optimize "));
      MR_hl_field(MR_mktag(1), mdb__interactive_query__V_11_11, 1) = ((MR_Box) (mdb__interactive_query__V_13_13));
    }
    {
      mercury__string__append_list_2_p_0(mdb__interactive_query__V_11_11, &mdb__interactive_query__Command_8);
    }
    {
      mercury__io__call_system_4_p_0(mdb__interactive_query__Command_8, &mdb__interactive_query__Result_37);
    }
    if (((MR_tag((MR_Word) mdb__interactive_query__Result_37)) == (MR_mktag((MR_Integer) 1))))
      {
        {
          mercury__io__write_string_3_p_0((MR_String) "Error: unable to invoke the compiler.\n");
        }
        *mdb__interactive_query__Succeeded_6 = (MR_Integer) 0;
      }
    else
      {
        MR_Integer mdb__interactive_query__Status_38 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mdb__interactive_query__Result_37, (MR_Integer) 0)));

        mdb__interactive_query__succeeded = (mdb__interactive_query__Status_38 == (MR_Integer) 0);
        if (mdb__interactive_query__succeeded)
          *mdb__interactive_query__Succeeded_6 = (MR_Integer) 1;
        else
          {
            {
              mercury__io__write_string_3_p_0((MR_String) "Compilation error(s) occurred.\n");
            }
            *mdb__interactive_query__Succeeded_6 = (MR_Integer) 0;
          }
      }
  }
}

static void MR_CALL 
mdb__interactive_query__write_import_list_4_p_0_1(
  MR_Box mdb__interactive_query__closure_arg,
  MR_Box mdb__interactive_query__wrapper_arg_1,
  MR_Box mdb__interactive_query__wrapper_arg_2,
  MR_Box * mdb__interactive_query__wrapper_arg_3)
{
  {
    MR_Box mdb__interactive_query__closure = mdb__interactive_query__closure_arg;

    {
      mercury__term_io__quote_atom_3_p_0(((MR_String) mdb__interactive_query__wrapper_arg_1));
    }
  }
}

static void MR_CALL 
mdb__interactive_query__write_import_list_4_p_0(
  MR_Word mdb__interactive_query__Out_5,
  MR_Word mdb__interactive_query__Imports_6)
{
  {
    MR_bool mdb__interactive_query__succeeded;

    if ((mdb__interactive_query__Imports_6 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
      {
      }
    else
      {
        {
          mercury__io__write_string_4_p_0(mdb__interactive_query__Out_5, (MR_String) ":- import_module ");
        }
        {
          mercury__io__write_list_6_p_0((MR_Word) &mercury__builtin__builtin__type_ctor_info_string_0, mdb__interactive_query__Out_5, mdb__interactive_query__Imports_6, (MR_String) ", ", (MR_Word) &mdb__interactive_query_scalar_common_2[8]);
        }
        {
          mercury__io__write_string_4_p_0(mdb__interactive_query__Out_5, (MR_String) ".\n");
        }
      }
  }
}

static void MR_CALL 
mdb__interactive_query__write_comma_var_3_p_0(
  MR_String mdb__interactive_query__Var_4)
{
  {
    MR_bool mdb__interactive_query__succeeded;

    {
      mercury__io__write_string_3_p_0((MR_String) ", ");
    }
    {
      mercury__io__write_string_3_p_0(mdb__interactive_query__Var_4);
    }
  }
}

static void MR_CALL 
mdb__interactive_query__write_args_3_p_0_1(
  MR_Box mdb__interactive_query__closure_arg,
  MR_Box mdb__interactive_query__wrapper_arg_1,
  MR_Box mdb__interactive_query__wrapper_arg_2,
  MR_Box * mdb__interactive_query__wrapper_arg_3)
{
  {
    MR_Box mdb__interactive_query__closure = mdb__interactive_query__closure_arg;

    {
      mercury__io__write_string_3_p_0(((MR_String) mdb__interactive_query__wrapper_arg_1));
    }
  }
}

static void MR_CALL 
mdb__interactive_query__write_args_3_p_0(
  MR_Word mdb__interactive_query__Vars_4)
{
  {
    MR_bool mdb__interactive_query__succeeded;

    if ((mdb__interactive_query__Vars_4 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
      {
      }
    else
      {
        {
          mercury__io__write_string_3_p_0((MR_String) "(");
        }
        {
          mercury__io__write_list_5_p_0((MR_Word) &mercury__builtin__builtin__type_ctor_info_string_0, mdb__interactive_query__Vars_4, (MR_String) ", ", (MR_Word) &mdb__interactive_query_scalar_common_2[7]);
        }
        {
          mercury__io__write_string_3_p_0((MR_String) ")");
        }
      }
  }
}

static void MR_CALL 
mdb__interactive_query__write_var_type_4_p_0(
  MR_Word mdb__interactive_query__Bindings_5,
  MR_String mdb__interactive_query__Var_6)
{
  {
    MR_bool mdb__interactive_query__succeeded;
    MR_Word mdb__interactive_query__TypeInfo_17_17;
    MR_Word mdb__interactive_query__Univ_8;
    MR_String mdb__interactive_query__V_11_11;
    MR_Word mdb__interactive_query__V_13_13;
    MR_Box mdb__interactive_query__conv0_Univ_8;
    MR_Box mdb__interactive_query__V_14_14;
    MR_Box mdb__interactive_query__V_18_18;

    {
      mercury__map__lookup_3_p_0((MR_Word) &mercury__builtin__builtin__type_ctor_info_string_0, (MR_Word) &mercury__univ__univ__type_ctor_info_univ_0, mdb__interactive_query__Bindings_5, ((MR_Box) (mdb__interactive_query__Var_6)), &mdb__interactive_query__conv0_Univ_8);
    }
    mdb__interactive_query__Univ_8 = ((MR_Word) mdb__interactive_query__conv0_Univ_8);
    {
      mdb__interactive_query__V_14_14 = mercury__univ__univ_value_1_f_0(&mdb__interactive_query__TypeInfo_17_17, mdb__interactive_query__Univ_8);
    }
    {
      mdb__interactive_query__V_13_13 = mercury__type_desc__type_of_1_f_0(mdb__interactive_query__TypeInfo_17_17);
    }
    {
      mdb__interactive_query__V_11_11 = mercury__type_desc__type_name_1_f_0(mdb__interactive_query__V_13_13);
    }
    {
      mercury__io__write_string_3_p_0(mdb__interactive_query__V_11_11);
    }
  }
}

static void MR_CALL 
mdb__interactive_query__write_arg_types_4_p_0_1(
  MR_Box mdb__interactive_query__closure_arg,
  MR_Box mdb__interactive_query__wrapper_arg_1,
  MR_Box mdb__interactive_query__wrapper_arg_2,
  MR_Box * mdb__interactive_query__wrapper_arg_3)
{
  {
    MR_Box mdb__interactive_query__closure = mdb__interactive_query__closure_arg;

    {
      mdb__interactive_query__write_var_type_4_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), mdb__interactive_query__closure, (MR_Integer) 3))), ((MR_String) mdb__interactive_query__wrapper_arg_1));
    }
  }
}

static void MR_CALL 
mdb__interactive_query__write_arg_types_4_p_0(
  MR_Word mdb__interactive_query__Bindings_5,
  MR_Word mdb__interactive_query__Vars_6)
{
  {
    MR_bool mdb__interactive_query__succeeded;

    if ((mdb__interactive_query__Vars_6 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
      {
      }
    else
      {
        MR_Word mdb__interactive_query__V_15_15;

        {
          mercury__io__write_string_3_p_0((MR_String) "(");
        }
        {
          mdb__interactive_query__V_15_15 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(MR_mktag(0), mdb__interactive_query__V_15_15, 0) = ((MR_Box) (&mdb__interactive_query_scalar_common_4[1]));
          MR_hl_field(MR_mktag(0), mdb__interactive_query__V_15_15, 1) = ((MR_Box) (mdb__interactive_query__write_arg_types_4_p_0_1));
          MR_hl_field(MR_mktag(0), mdb__interactive_query__V_15_15, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
          MR_hl_field(MR_mktag(0), mdb__interactive_query__V_15_15, 3) = ((MR_Box) (mdb__interactive_query__Bindings_5));
        }
        {
          mercury__io__write_list_5_p_0((MR_Word) &mercury__builtin__builtin__type_ctor_info_string_0, mdb__interactive_query__Vars_6, (MR_String) ", ", mdb__interactive_query__V_15_15);
        }
        {
          mercury__io__write_string_3_p_0((MR_String) ")");
        }
      }
  }
}

static void MR_CALL 
mdb__interactive_query__write_line_directive_2_p_0(void)
{
  {
    MR_bool mdb__interactive_query__succeeded;
    MR_Integer mdb__interactive_query__LineNum_4;

    {
      mercury__io__write_string_3_p_0((MR_String) "\n#");
    }
    {
      mercury__io__get_line_number_3_p_0(&mdb__interactive_query__LineNum_4);
    }
    {
      mercury__io__write_int_3_p_0(mdb__interactive_query__LineNum_4);
    }
    {
      mercury__io__nl_2_p_0();
    }
  }
}

static void MR_CALL 
mdb__interactive_query__write_set_goal_3_p_0(
  MR_String mdb__interactive_query__Var_4)
{
  {
    MR_bool mdb__interactive_query__succeeded;
    MR_Word mdb__interactive_query__V_8_8;
    MR_Word mdb__interactive_query__V_11_11;
    MR_Word mdb__interactive_query__V_12_12;
    MR_Word mdb__interactive_query__V_14_14;

    {
      mdb__interactive_query__V_14_14 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), mdb__interactive_query__V_14_14, 0) = ((MR_Box) (mdb__interactive_query__Var_4));
      MR_hl_field(MR_mktag(1), mdb__interactive_query__V_14_14, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &mdb__interactive_query_scalar_common_1[24])));
    }
    {
      mdb__interactive_query__V_12_12 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), mdb__interactive_query__V_12_12, 0) = ((MR_Box) ((MR_String) "\", univ.univ("));
      MR_hl_field(MR_mktag(1), mdb__interactive_query__V_12_12, 1) = ((MR_Box) (mdb__interactive_query__V_14_14));
    }
    {
      mdb__interactive_query__V_11_11 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), mdb__interactive_query__V_11_11, 0) = ((MR_Box) (mdb__interactive_query__Var_4));
      MR_hl_field(MR_mktag(1), mdb__interactive_query__V_11_11, 1) = ((MR_Box) (mdb__interactive_query__V_12_12));
    }
    {
      mdb__interactive_query__V_8_8 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), mdb__interactive_query__V_8_8, 0) = ((MR_Box) ((MR_String) "       map.set(\""));
      MR_hl_field(MR_mktag(1), mdb__interactive_query__V_8_8, 1) = ((MR_Box) (mdb__interactive_query__V_11_11));
    }
    {
      mercury__io__write_strings_3_p_0(mdb__interactive_query__V_8_8);
    }
  }
}

static void MR_CALL 
mdb__interactive_query__write_cast_goal_3_p_0(
  MR_String mdb__interactive_query__Var_4)
{
  {
    MR_bool mdb__interactive_query__succeeded;
    MR_Word mdb__interactive_query__V_8_8;
    MR_Word mdb__interactive_query__V_11_11;
    MR_Word mdb__interactive_query__V_12_12;
    MR_Word mdb__interactive_query__V_14_14;

    {
      mdb__interactive_query__V_14_14 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), mdb__interactive_query__V_14_14, 0) = ((MR_Box) (mdb__interactive_query__Var_4));
      MR_hl_field(MR_mktag(1), mdb__interactive_query__V_14_14, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &mdb__interactive_query_scalar_common_1[23])));
    }
    {
      mdb__interactive_query__V_12_12 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), mdb__interactive_query__V_12_12, 0) = ((MR_Box) ((MR_String) "\"), "));
      MR_hl_field(MR_mktag(1), mdb__interactive_query__V_12_12, 1) = ((MR_Box) (mdb__interactive_query__V_14_14));
    }
    {
      mdb__interactive_query__V_11_11 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), mdb__interactive_query__V_11_11, 0) = ((MR_Box) (mdb__interactive_query__Var_4));
      MR_hl_field(MR_mktag(1), mdb__interactive_query__V_11_11, 1) = ((MR_Box) (mdb__interactive_query__V_12_12));
    }
    {
      mdb__interactive_query__V_8_8 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), mdb__interactive_query__V_8_8, 0) = ((MR_Box) ((MR_String) "       univ.univ_to_type(!.Bindings ^ elem(\""));
      MR_hl_field(MR_mktag(1), mdb__interactive_query__V_8_8, 1) = ((MR_Box) (mdb__interactive_query__V_11_11));
    }
    {
      mercury__io__write_strings_3_p_0(mdb__interactive_query__V_8_8);
    }
  }
}

static MR_String MR_CALL 
mdb__interactive_query__query_type_rule_1_f_0(
  MR_Word mdb__interactive_query__HeadVar__1_1)
{
  {
    MR_bool mdb__interactive_query__succeeded;
    MR_String mdb__interactive_query__HeadVar__2_2;

    switch (mdb__interactive_query__HeadVar__1_1) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 1:
        mdb__interactive_query__HeadVar__2_2 = (MR_String) ":-";
        break;
      case (MR_Integer) 2:
        mdb__interactive_query__HeadVar__2_2 = (MR_String) "-->";
        break;
      case (MR_Integer) 0:
        mdb__interactive_query__HeadVar__2_2 = (MR_String) ":-";
        break;
    }
    return mdb__interactive_query__HeadVar__2_2;
  }
}

static MR_String MR_CALL 
mdb__interactive_query__query_type_extra_args_1_f_0(
  MR_Word mdb__interactive_query__HeadVar__1_1)
{
  {
    MR_bool mdb__interactive_query__succeeded;
    MR_String mdb__interactive_query__HeadVar__2_2;

    switch (mdb__interactive_query__HeadVar__1_1) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 1:
        mdb__interactive_query__HeadVar__2_2 = (MR_String) "";
        break;
      case (MR_Integer) 2:
        mdb__interactive_query__HeadVar__2_2 = (MR_String) ", !IO";
        break;
      case (MR_Integer) 0:
        mdb__interactive_query__HeadVar__2_2 = (MR_String) "";
        break;
    }
    return mdb__interactive_query__HeadVar__2_2;
  }
}

static MR_String MR_CALL 
mdb__interactive_query__query_type_extra_modes_1_f_0(
  MR_Word mdb__interactive_query__HeadVar__1_1)
{
  {
    MR_bool mdb__interactive_query__succeeded;
    MR_String mdb__interactive_query__HeadVar__2_2;

    switch (mdb__interactive_query__HeadVar__1_1) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 1:
        mdb__interactive_query__HeadVar__2_2 = (MR_String) "";
        break;
      case (MR_Integer) 2:
        mdb__interactive_query__HeadVar__2_2 = (MR_String) ", di, uo";
        break;
      case (MR_Integer) 0:
        mdb__interactive_query__HeadVar__2_2 = (MR_String) "";
        break;
    }
    return mdb__interactive_query__HeadVar__2_2;
  }
}

static MR_String MR_CALL 
mdb__interactive_query__query_type_extra_decls_1_f_0(
  MR_Word mdb__interactive_query__HeadVar__1_1)
{
  {
    MR_bool mdb__interactive_query__succeeded;
    MR_String mdb__interactive_query__HeadVar__2_2;

    switch (mdb__interactive_query__HeadVar__1_1) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 1:
        mdb__interactive_query__HeadVar__2_2 = (MR_String) "";
        break;
      case (MR_Integer) 2:
        mdb__interactive_query__HeadVar__2_2 = (MR_String) ", io::di, io::uo";
        break;
      case (MR_Integer) 0:
        mdb__interactive_query__HeadVar__2_2 = (MR_String) "";
        break;
    }
    return mdb__interactive_query__HeadVar__2_2;
  }
}

static MR_String MR_CALL 
mdb__interactive_query__query_type_extra_imports_1_f_0(
  MR_Word mdb__interactive_query__HeadVar__1_1)
{
  {
    MR_bool mdb__interactive_query__succeeded;
    MR_String mdb__interactive_query__HeadVar__2_2;

    switch (mdb__interactive_query__HeadVar__1_1) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 1:
        mdb__interactive_query__HeadVar__2_2 = (MR_String) "";
        break;
      case (MR_Integer) 2:
        mdb__interactive_query__HeadVar__2_2 = (MR_String) ":- import_module io.\n";
        break;
      case (MR_Integer) 0:
        mdb__interactive_query__HeadVar__2_2 = (MR_String) "";
        break;
    }
    return mdb__interactive_query__HeadVar__2_2;
  }
}

static MR_String MR_CALL 
mdb__interactive_query__query_type_detism_1_f_0(
  MR_Word mdb__interactive_query__HeadVar__1_1)
{
  {
    MR_bool mdb__interactive_query__succeeded;
    MR_String mdb__interactive_query__HeadVar__2_2;

    switch (mdb__interactive_query__HeadVar__1_1) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 1:
        mdb__interactive_query__HeadVar__2_2 = (MR_String) "cc_nondet";
        break;
      case (MR_Integer) 2:
        mdb__interactive_query__HeadVar__2_2 = (MR_String) "cc_multi";
        break;
      case (MR_Integer) 0:
        mdb__interactive_query__HeadVar__2_2 = (MR_String) "nondet";
        break;
    }
    return mdb__interactive_query__HeadVar__2_2;
  }
}

static void MR_CALL 
mdb__interactive_query__write_prog_to_stream_3_p_0_5(
  MR_Box mdb__interactive_query__closure_arg,
  MR_Box mdb__interactive_query__wrapper_arg_1,
  MR_Box mdb__interactive_query__wrapper_arg_2,
  MR_Box * mdb__interactive_query__wrapper_arg_3)
{
  {
    MR_Box mdb__interactive_query__closure = mdb__interactive_query__closure_arg;

    {
      mdb__interactive_query__write_comma_var_3_p_0(((MR_String) mdb__interactive_query__wrapper_arg_1));
    }
  }
}

static void MR_CALL 
mdb__interactive_query__write_prog_to_stream_3_p_0_4(
  MR_Box mdb__interactive_query__closure_arg,
  MR_Box mdb__interactive_query__wrapper_arg_1,
  MR_Box mdb__interactive_query__wrapper_arg_2,
  MR_Box * mdb__interactive_query__wrapper_arg_3)
{
  {
    MR_Box mdb__interactive_query__closure = mdb__interactive_query__closure_arg;

    {
      mdb__interactive_query__IntroducedFrom__pred__write_prog_to_stream__475__1_3_p_0(((MR_String) mdb__interactive_query__wrapper_arg_1));
    }
  }
}

static void MR_CALL 
mdb__interactive_query__write_prog_to_stream_3_p_0_3(
  MR_Box mdb__interactive_query__closure_arg,
  MR_Box mdb__interactive_query__wrapper_arg_1,
  MR_Box mdb__interactive_query__wrapper_arg_2,
  MR_Box * mdb__interactive_query__wrapper_arg_3)
{
  {
    MR_Box mdb__interactive_query__closure = mdb__interactive_query__closure_arg;

    {
      mdb__interactive_query__write_set_goal_3_p_0(((MR_String) mdb__interactive_query__wrapper_arg_1));
    }
  }
}

static void MR_CALL 
mdb__interactive_query__write_prog_to_stream_3_p_0_2(
  MR_Box mdb__interactive_query__closure_arg,
  MR_Box mdb__interactive_query__wrapper_arg_1,
  MR_Box mdb__interactive_query__wrapper_arg_2,
  MR_Box * mdb__interactive_query__wrapper_arg_3)
{
  {
    MR_Box mdb__interactive_query__closure = mdb__interactive_query__closure_arg;

    {
      mdb__interactive_query__write_comma_var_3_p_0(((MR_String) mdb__interactive_query__wrapper_arg_1));
    }
  }
}

static void MR_CALL 
mdb__interactive_query__write_prog_to_stream_3_p_0_1(
  MR_Box mdb__interactive_query__closure_arg,
  MR_Box mdb__interactive_query__wrapper_arg_1,
  MR_Box mdb__interactive_query__wrapper_arg_2,
  MR_Box * mdb__interactive_query__wrapper_arg_3)
{
  {
    MR_Box mdb__interactive_query__closure = mdb__interactive_query__closure_arg;

    {
      mdb__interactive_query__write_cast_goal_3_p_0(((MR_String) mdb__interactive_query__wrapper_arg_1));
    }
  }
}

static void MR_CALL 
mdb__interactive_query__write_prog_to_stream_3_p_0(
  MR_Word mdb__interactive_query__Prog_4)
{
  {
    MR_bool mdb__interactive_query__succeeded;
    MR_Word mdb__interactive_query__TypeCtorInfo_163_163;
    MR_Word mdb__interactive_query__TypeCtorInfo_164_164;
    MR_Word mdb__interactive_query__QueryType_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__interactive_query__Prog_4, (MR_Integer) 0)));
    MR_Word mdb__interactive_query__Imports_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__interactive_query__Prog_4, (MR_Integer) 1)));
    MR_Word mdb__interactive_query__Bindings_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__interactive_query__Prog_4, (MR_Integer) 2)));
    MR_Word mdb__interactive_query__Inputs_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__interactive_query__Prog_4, (MR_Integer) 3)));
    MR_Word mdb__interactive_query__Outputs_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__interactive_query__Prog_4, (MR_Integer) 4)));
    MR_Word mdb__interactive_query__Goal_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__interactive_query__Prog_4, (MR_Integer) 5)));
    MR_Word mdb__interactive_query__Varset_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__interactive_query__Prog_4, (MR_Integer) 6)));
    MR_Word mdb__interactive_query__Out_13;
    MR_Word mdb__interactive_query__V_17_17;
    MR_Word mdb__interactive_query__V_20_20;
    MR_Word mdb__interactive_query__V_22_22;
    MR_Word mdb__interactive_query__V_24_24;
    MR_Word mdb__interactive_query__V_26_26;
    MR_String mdb__interactive_query__V_27_27;
    MR_Word mdb__interactive_query__V_28_28;
    MR_Word mdb__interactive_query__V_30_30;
    MR_Word mdb__interactive_query__V_32_32;
    MR_Word mdb__interactive_query__V_34_34;
    MR_Word mdb__interactive_query__V_36_36;
    MR_Word mdb__interactive_query__V_38_38;
    MR_String mdb__interactive_query__V_39_39;
    MR_Word mdb__interactive_query__V_40_40;
    MR_Word mdb__interactive_query__V_42_42;
    MR_String mdb__interactive_query__V_43_43;
    MR_Word mdb__interactive_query__V_44_44;
    MR_Word mdb__interactive_query__V_46_46;
    MR_Word mdb__interactive_query__V_48_48;
    MR_Word mdb__interactive_query__V_50_50;
    MR_Word mdb__interactive_query__V_52_52;
    MR_Word mdb__interactive_query__V_54_54;
    MR_String mdb__interactive_query__V_55_55;
    MR_Word mdb__interactive_query__V_63_63;
    MR_Word mdb__interactive_query__V_66_66;
    MR_Word mdb__interactive_query__V_68_68;
    MR_Word mdb__interactive_query__V_70_70;
    MR_String mdb__interactive_query__V_71_71;
    MR_Word mdb__interactive_query__V_78_78;
    MR_String mdb__interactive_query__V_80_80;
    MR_Word mdb__interactive_query__V_127_127;
    MR_String mdb__interactive_query__V_129_129;
    MR_Word mdb__interactive_query__V_130_130;
    MR_Word mdb__interactive_query__V_132_132;
    MR_String mdb__interactive_query__V_133_133;
    MR_Word mdb__interactive_query__V_144_144;
    MR_Word mdb__interactive_query__V_147_147;
    MR_String mdb__interactive_query__V_148_148;
    MR_Box mdb__interactive_query__conv0_STATE_VARIABLE_IO_62_62;
    MR_Box mdb__interactive_query__conv1_STATE_VARIABLE_IO_77_77;
    MR_Box mdb__interactive_query__conv2_STATE_VARIABLE_IO_85_85;
    MR_Box mdb__interactive_query__conv3_STATE_VARIABLE_IO_120_120;
    MR_Box mdb__interactive_query__conv4_STATE_VARIABLE_IO_143_143;

    {
      mdb__interactive_query__V_27_27 = mdb__interactive_query__query_type_extra_imports_1_f_0(mdb__interactive_query__QueryType_6);
    }
    {
      mdb__interactive_query__V_39_39 = mdb__interactive_query__query_type_extra_decls_1_f_0(mdb__interactive_query__QueryType_6);
    }
    {
      mdb__interactive_query__V_43_43 = mdb__interactive_query__query_type_detism_1_f_0(mdb__interactive_query__QueryType_6);
    }
    {
      mdb__interactive_query__V_55_55 = mdb__interactive_query__query_type_extra_args_1_f_0(mdb__interactive_query__QueryType_6);
    }
    {
      mdb__interactive_query__V_54_54 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), mdb__interactive_query__V_54_54, 0) = ((MR_Box) (mdb__interactive_query__V_55_55));
      MR_hl_field(MR_mktag(1), mdb__interactive_query__V_54_54, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &mdb__interactive_query_scalar_common_1[5])));
    }
    {
      mdb__interactive_query__V_52_52 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), mdb__interactive_query__V_52_52, 0) = ((MR_Box) ((MR_String) "run(!Bindings, Loaded"));
      MR_hl_field(MR_mktag(1), mdb__interactive_query__V_52_52, 1) = ((MR_Box) (mdb__interactive_query__V_54_54));
    }
    {
      mdb__interactive_query__V_50_50 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), mdb__interactive_query__V_50_50, 0) = ((MR_Box) ((MR_String) "\n"));
      MR_hl_field(MR_mktag(1), mdb__interactive_query__V_50_50, 1) = ((MR_Box) (mdb__interactive_query__V_52_52));
    }
    {
      mdb__interactive_query__V_48_48 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), mdb__interactive_query__V_48_48, 0) = ((MR_Box) ((MR_String) ":- implementation.\n"));
      MR_hl_field(MR_mktag(1), mdb__interactive_query__V_48_48, 1) = ((MR_Box) (mdb__interactive_query__V_50_50));
    }
    {
      mdb__interactive_query__V_46_46 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), mdb__interactive_query__V_46_46, 0) = ((MR_Box) ((MR_String) "\n"));
      MR_hl_field(MR_mktag(1), mdb__interactive_query__V_46_46, 1) = ((MR_Box) (mdb__interactive_query__V_48_48));
    }
    {
      mdb__interactive_query__V_44_44 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), mdb__interactive_query__V_44_44, 0) = ((MR_Box) ((MR_String) ".\n"));
      MR_hl_field(MR_mktag(1), mdb__interactive_query__V_44_44, 1) = ((MR_Box) (mdb__interactive_query__V_46_46));
    }
    {
      mdb__interactive_query__V_42_42 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), mdb__interactive_query__V_42_42, 0) = ((MR_Box) (mdb__interactive_query__V_43_43));
      MR_hl_field(MR_mktag(1), mdb__interactive_query__V_42_42, 1) = ((MR_Box) (mdb__interactive_query__V_44_44));
    }
    {
      mdb__interactive_query__V_40_40 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), mdb__interactive_query__V_40_40, 0) = ((MR_Box) ((MR_String) ") is "));
      MR_hl_field(MR_mktag(1), mdb__interactive_query__V_40_40, 1) = ((MR_Box) (mdb__interactive_query__V_42_42));
    }
    {
      mdb__interactive_query__V_38_38 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), mdb__interactive_query__V_38_38, 0) = ((MR_Box) (mdb__interactive_query__V_39_39));
      MR_hl_field(MR_mktag(1), mdb__interactive_query__V_38_38, 1) = ((MR_Box) (mdb__interactive_query__V_40_40));
    }
    {
      mdb__interactive_query__V_36_36 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), mdb__interactive_query__V_36_36, 0) = ((MR_Box) ((MR_String) "   bool::out"));
      MR_hl_field(MR_mktag(1), mdb__interactive_query__V_36_36, 1) = ((MR_Box) (mdb__interactive_query__V_38_38));
    }
    {
      mdb__interactive_query__V_34_34 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), mdb__interactive_query__V_34_34, 0) = ((MR_Box) ((MR_String) ":- pred run(map(string, univ)::in, map(string, univ)::out,\n"));
      MR_hl_field(MR_mktag(1), mdb__interactive_query__V_34_34, 1) = ((MR_Box) (mdb__interactive_query__V_36_36));
    }
    {
      mdb__interactive_query__V_32_32 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), mdb__interactive_query__V_32_32, 0) = ((MR_Box) ((MR_String) "\n"));
      MR_hl_field(MR_mktag(1), mdb__interactive_query__V_32_32, 1) = ((MR_Box) (mdb__interactive_query__V_34_34));
    }
    {
      mdb__interactive_query__V_30_30 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), mdb__interactive_query__V_30_30, 0) = ((MR_Box) ((MR_String) ":- import_module univ.\n"));
      MR_hl_field(MR_mktag(1), mdb__interactive_query__V_30_30, 1) = ((MR_Box) (mdb__interactive_query__V_32_32));
    }
    {
      mdb__interactive_query__V_28_28 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), mdb__interactive_query__V_28_28, 0) = ((MR_Box) ((MR_String) ":- import_module map.\n"));
      MR_hl_field(MR_mktag(1), mdb__interactive_query__V_28_28, 1) = ((MR_Box) (mdb__interactive_query__V_30_30));
    }
    {
      mdb__interactive_query__V_26_26 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), mdb__interactive_query__V_26_26, 0) = ((MR_Box) (mdb__interactive_query__V_27_27));
      MR_hl_field(MR_mktag(1), mdb__interactive_query__V_26_26, 1) = ((MR_Box) (mdb__interactive_query__V_28_28));
    }
    {
      mdb__interactive_query__V_24_24 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), mdb__interactive_query__V_24_24, 0) = ((MR_Box) ((MR_String) ":- import_module bool.\n"));
      MR_hl_field(MR_mktag(1), mdb__interactive_query__V_24_24, 1) = ((MR_Box) (mdb__interactive_query__V_26_26));
    }
    {
      mdb__interactive_query__V_22_22 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), mdb__interactive_query__V_22_22, 0) = ((MR_Box) ((MR_String) "\n"));
      MR_hl_field(MR_mktag(1), mdb__interactive_query__V_22_22, 1) = ((MR_Box) (mdb__interactive_query__V_24_24));
    }
    {
      mdb__interactive_query__V_20_20 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), mdb__interactive_query__V_20_20, 0) = ((MR_Box) ((MR_String) ":- interface.\n"));
      MR_hl_field(MR_mktag(1), mdb__interactive_query__V_20_20, 1) = ((MR_Box) (mdb__interactive_query__V_22_22));
    }
    {
      mdb__interactive_query__V_17_17 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), mdb__interactive_query__V_17_17, 0) = ((MR_Box) ((MR_String) ":- module mdb_query.\n"));
      MR_hl_field(MR_mktag(1), mdb__interactive_query__V_17_17, 1) = ((MR_Box) (mdb__interactive_query__V_20_20));
    }
    {
      mercury__io__write_strings_3_p_0(mdb__interactive_query__V_17_17);
    }
    mdb__interactive_query__TypeCtorInfo_163_163 = (MR_Word) &mercury__builtin__builtin__type_ctor_info_string_0;
    mdb__interactive_query__TypeCtorInfo_164_164 = (MR_Word) &mercury__io__io__type_ctor_info_state_0;
    {
      mercury__list__foldl_4_p_2(mdb__interactive_query__TypeCtorInfo_163_163, mdb__interactive_query__TypeCtorInfo_164_164, (MR_Word) &mdb__interactive_query_scalar_common_2[2], mdb__interactive_query__Inputs_9, ((MR_Box) ((MR_Integer) 0)), &mdb__interactive_query__conv0_STATE_VARIABLE_IO_62_62);
    }
    {
      mdb__interactive_query__V_71_71 = mdb__interactive_query__query_module_name_0_f_0();
    }
    {
      mdb__interactive_query__V_70_70 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), mdb__interactive_query__V_70_70, 0) = ((MR_Box) (mdb__interactive_query__V_71_71));
      MR_hl_field(MR_mktag(1), mdb__interactive_query__V_70_70, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &mdb__interactive_query_scalar_common_1[22])));
    }
    {
      mdb__interactive_query__V_68_68 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), mdb__interactive_query__V_68_68, 0) = ((MR_Box) ((MR_String) "       "));
      MR_hl_field(MR_mktag(1), mdb__interactive_query__V_68_68, 1) = ((MR_Box) (mdb__interactive_query__V_70_70));
    }
    {
      mdb__interactive_query__V_66_66 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), mdb__interactive_query__V_66_66, 0) = ((MR_Box) ((MR_String) "   then\n"));
      MR_hl_field(MR_mktag(1), mdb__interactive_query__V_66_66, 1) = ((MR_Box) (mdb__interactive_query__V_68_68));
    }
    {
      mdb__interactive_query__V_63_63 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), mdb__interactive_query__V_63_63, 0) = ((MR_Box) ((MR_String) "       true\n"));
      MR_hl_field(MR_mktag(1), mdb__interactive_query__V_63_63, 1) = ((MR_Box) (mdb__interactive_query__V_66_66));
    }
    {
      mercury__io__write_strings_3_p_0(mdb__interactive_query__V_63_63);
    }
    {
      mdb__interactive_query__write_args_3_p_0(mdb__interactive_query__Inputs_9);
    }
    {
      mercury__list__foldl_4_p_2(mdb__interactive_query__TypeCtorInfo_163_163, mdb__interactive_query__TypeCtorInfo_164_164, (MR_Word) &mdb__interactive_query_scalar_common_2[3], mdb__interactive_query__Outputs_10, ((MR_Box) ((MR_Integer) 0)), &mdb__interactive_query__conv1_STATE_VARIABLE_IO_77_77);
    }
    {
      mdb__interactive_query__V_80_80 = mdb__interactive_query__query_type_extra_args_1_f_0(mdb__interactive_query__QueryType_6);
    }
    {
      mdb__interactive_query__V_78_78 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), mdb__interactive_query__V_78_78, 0) = ((MR_Box) (mdb__interactive_query__V_80_80));
      MR_hl_field(MR_mktag(1), mdb__interactive_query__V_78_78, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &mdb__interactive_query_scalar_common_1[23])));
    }
    {
      mercury__io__write_strings_3_p_0(mdb__interactive_query__V_78_78);
    }
    {
      mercury__list__foldl_4_p_2(mdb__interactive_query__TypeCtorInfo_163_163, mdb__interactive_query__TypeCtorInfo_164_164, (MR_Word) &mdb__interactive_query_scalar_common_2[4], mdb__interactive_query__Outputs_10, ((MR_Box) ((MR_Integer) 0)), &mdb__interactive_query__conv2_STATE_VARIABLE_IO_85_85);
    }
    {
      mercury__io__write_strings_3_p_0((MR_Word) MR_mkword(MR_mktag(1), &mdb__interactive_query_scalar_common_1[11]));
    }
    {
      mdb__interactive_query__write_arg_types_4_p_0(mdb__interactive_query__Bindings_8, mdb__interactive_query__Inputs_9);
    }
    {
      mercury__io__write_strings_3_p_0((MR_Word) MR_mkword(MR_mktag(1), &mdb__interactive_query_scalar_common_1[15]));
    }
    {
      mercury__io__output_stream_3_p_0(&mdb__interactive_query__Out_13);
    }
    {
      mdb__interactive_query__write_import_list_4_p_0(mdb__interactive_query__Out_13, mdb__interactive_query__Imports_7);
    }
    {
      mercury__io__write_strings_3_p_0((MR_Word) MR_mkword(MR_mktag(1), &mdb__interactive_query_scalar_common_1[17]));
    }
    {
      mercury__list__foldl_4_p_2(mdb__interactive_query__TypeCtorInfo_163_163, mdb__interactive_query__TypeCtorInfo_164_164, (MR_Word) &mdb__interactive_query_scalar_common_2[5], mdb__interactive_query__Outputs_10, ((MR_Box) ((MR_Integer) 0)), &mdb__interactive_query__conv3_STATE_VARIABLE_IO_120_120);
    }
    {
      mdb__interactive_query__V_129_129 = mdb__interactive_query__query_type_extra_modes_1_f_0(mdb__interactive_query__QueryType_6);
    }
    {
      mdb__interactive_query__V_133_133 = mdb__interactive_query__query_type_detism_1_f_0(mdb__interactive_query__QueryType_6);
    }
    {
      mdb__interactive_query__V_132_132 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), mdb__interactive_query__V_132_132, 0) = ((MR_Box) (mdb__interactive_query__V_133_133));
      MR_hl_field(MR_mktag(1), mdb__interactive_query__V_132_132, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &mdb__interactive_query_scalar_common_1[20])));
    }
    {
      mdb__interactive_query__V_130_130 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), mdb__interactive_query__V_130_130, 0) = ((MR_Box) ((MR_String) ") is "));
      MR_hl_field(MR_mktag(1), mdb__interactive_query__V_130_130, 1) = ((MR_Box) (mdb__interactive_query__V_132_132));
    }
    {
      mdb__interactive_query__V_127_127 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), mdb__interactive_query__V_127_127, 0) = ((MR_Box) (mdb__interactive_query__V_129_129));
      MR_hl_field(MR_mktag(1), mdb__interactive_query__V_127_127, 1) = ((MR_Box) (mdb__interactive_query__V_130_130));
    }
    {
      mercury__io__write_strings_3_p_0(mdb__interactive_query__V_127_127);
    }
    {
      mdb__interactive_query__write_args_3_p_0(mdb__interactive_query__Inputs_9);
    }
    {
      mercury__list__foldl_4_p_2(mdb__interactive_query__TypeCtorInfo_163_163, mdb__interactive_query__TypeCtorInfo_164_164, (MR_Word) &mdb__interactive_query_scalar_common_2[6], mdb__interactive_query__Outputs_10, ((MR_Box) ((MR_Integer) 0)), &mdb__interactive_query__conv4_STATE_VARIABLE_IO_143_143);
    }
    {
      mdb__interactive_query__V_148_148 = mdb__interactive_query__query_type_rule_1_f_0(mdb__interactive_query__QueryType_6);
    }
    {
      mdb__interactive_query__V_147_147 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), mdb__interactive_query__V_147_147, 0) = ((MR_Box) (mdb__interactive_query__V_148_148));
      MR_hl_field(MR_mktag(1), mdb__interactive_query__V_147_147, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
    }
    {
      mdb__interactive_query__V_144_144 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), mdb__interactive_query__V_144_144, 0) = ((MR_Box) ((MR_String) ") "));
      MR_hl_field(MR_mktag(1), mdb__interactive_query__V_144_144, 1) = ((MR_Box) (mdb__interactive_query__V_147_147));
    }
    {
      mercury__io__write_strings_3_p_0(mdb__interactive_query__V_144_144);
    }
    {
      mdb__interactive_query__write_line_directive_2_p_0();
    }
    {
      mercury__io__write_string_3_p_0((MR_String) "   ( ");
    }
    {
      mercury__term_io__write_term_4_p_0((MR_Word) &mercury__term__term__type_ctor_info_generic_0, mdb__interactive_query__Varset_12, mdb__interactive_query__Goal_11);
    }
    {
      mercury__io__write_string_3_p_0((MR_String) " ).\n");
    }
  }
}

static void MR_CALL 
mdb__interactive_query__write_prog_to_file_4_p_0(
  MR_Word mdb__interactive_query__Program_5,
  MR_String mdb__interactive_query__FileName_6)
{
  {
    MR_bool mdb__interactive_query__succeeded;
    MR_Word mdb__interactive_query__Stream_8;
    MR_Word mdb__interactive_query__OldStream_9;
    MR_Word mdb__interactive_query__Result_23;
    MR_Word mdb__interactive_query__V_10_10;

    {
      mercury__io__open_output_4_p_0(mdb__interactive_query__FileName_6, &mdb__interactive_query__Result_23);
    }
    if (((MR_tag((MR_Word) mdb__interactive_query__Result_23)) == (MR_mktag((MR_Integer) 1))))
      {
        MR_Word mdb__interactive_query__Error_25 = ((MR_Word) (MR_hl_field(MR_mktag(1), mdb__interactive_query__Result_23, (MR_Integer) 0)));
        MR_String mdb__interactive_query__Progname_26;
        MR_String mdb__interactive_query__ErrorMessage_27;
        MR_String mdb__interactive_query__Message_28;
        MR_Word mdb__interactive_query__V_32_32;
        MR_Word mdb__interactive_query__V_33_33;
        MR_Word mdb__interactive_query__V_35_35;
        MR_Word mdb__interactive_query__V_37_37;
        MR_Word mdb__interactive_query__V_38_38;
        MR_Word mdb__interactive_query__V_40_40;

        {
          mercury__io__progname_4_p_0((MR_String) "interactive", &mdb__interactive_query__Progname_26);
        }
        {
          mercury__io__error_message_2_p_0(mdb__interactive_query__Error_25, &mdb__interactive_query__ErrorMessage_27);
        }
        {
          mdb__interactive_query__V_40_40 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), mdb__interactive_query__V_40_40, 0) = ((MR_Box) (mdb__interactive_query__ErrorMessage_27));
          MR_hl_field(MR_mktag(1), mdb__interactive_query__V_40_40, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &mdb__interactive_query_scalar_common_1[21])));
        }
        {
          mdb__interactive_query__V_38_38 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), mdb__interactive_query__V_38_38, 0) = ((MR_Box) ((MR_String) "\' for output:\n\t"));
          MR_hl_field(MR_mktag(1), mdb__interactive_query__V_38_38, 1) = ((MR_Box) (mdb__interactive_query__V_40_40));
        }
        {
          mdb__interactive_query__V_37_37 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), mdb__interactive_query__V_37_37, 0) = ((MR_Box) (mdb__interactive_query__FileName_6));
          MR_hl_field(MR_mktag(1), mdb__interactive_query__V_37_37, 1) = ((MR_Box) (mdb__interactive_query__V_38_38));
        }
        {
          mdb__interactive_query__V_35_35 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), mdb__interactive_query__V_35_35, 0) = ((MR_Box) ((MR_String) "error opening file \140"));
          MR_hl_field(MR_mktag(1), mdb__interactive_query__V_35_35, 1) = ((MR_Box) (mdb__interactive_query__V_37_37));
        }
        {
          mdb__interactive_query__V_33_33 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), mdb__interactive_query__V_33_33, 0) = ((MR_Box) ((MR_String) ": "));
          MR_hl_field(MR_mktag(1), mdb__interactive_query__V_33_33, 1) = ((MR_Box) (mdb__interactive_query__V_35_35));
        }
        {
          mdb__interactive_query__V_32_32 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), mdb__interactive_query__V_32_32, 0) = ((MR_Box) (mdb__interactive_query__Progname_26));
          MR_hl_field(MR_mktag(1), mdb__interactive_query__V_32_32, 1) = ((MR_Box) (mdb__interactive_query__V_33_33));
        }
        {
          mercury__string__append_list_2_p_0(mdb__interactive_query__V_32_32, &mdb__interactive_query__Message_28);
        }
        {
          mercury__io__write_string_3_p_0(mdb__interactive_query__Message_28);
        }
        {
          mercury__io__stdout_stream_3_p_0(&mdb__interactive_query__Stream_8);
        }
      }
    else
      mdb__interactive_query__Stream_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__interactive_query__Result_23, (MR_Integer) 0)));
    {
      mercury__io__set_output_stream_4_p_0(mdb__interactive_query__Stream_8, &mdb__interactive_query__OldStream_9);
    }
    {
      mdb__interactive_query__write_prog_to_stream_3_p_0(mdb__interactive_query__Program_5);
    }
    {
      mercury__io__set_output_stream_4_p_0(mdb__interactive_query__OldStream_9, &mdb__interactive_query__V_10_10);
    }
    {
      mercury__io__close_output_3_p_0(mdb__interactive_query__Stream_8);
    }
  }
}

static MR_bool MR_CALL 
mdb__interactive_query__run_query_5_p_0_3(
  MR_Box mdb__interactive_query__closure_arg,
  MR_Box mdb__interactive_query__wrapper_arg_1)
{
  {
    MR_bool mdb__interactive_query__succeeded;
    MR_Box mdb__interactive_query__closure = mdb__interactive_query__closure_arg;

    {
      mdb__interactive_query__succeeded = mdb__interactive_query__IntroducedFrom__pred__make_program__382__1_1_p_0(((MR_String) mdb__interactive_query__wrapper_arg_1));
    }
    return mdb__interactive_query__succeeded;
  }
}

static MR_bool MR_CALL 
mdb__interactive_query__run_query_5_p_0_2(
  MR_Box mdb__interactive_query__closure_arg,
  MR_Box mdb__interactive_query__wrapper_arg_1)
{
  {
    MR_bool mdb__interactive_query__succeeded;
    MR_Box mdb__interactive_query__closure = mdb__interactive_query__closure_arg;

    {
      mdb__interactive_query__succeeded = mdb__interactive_query__IntroducedFrom__pred__make_program__377__1_2_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), mdb__interactive_query__closure, (MR_Integer) 3))), ((MR_String) mdb__interactive_query__wrapper_arg_1));
    }
    return mdb__interactive_query__succeeded;
  }
}

static MR_bool MR_CALL 
mdb__interactive_query__run_query_5_p_0_1(
  MR_Box mdb__interactive_query__closure_arg,
  MR_Box mdb__interactive_query__wrapper_arg_1,
  MR_Box * mdb__interactive_query__wrapper_arg_2)
{
  {
    MR_bool mdb__interactive_query__succeeded;
    MR_Box mdb__interactive_query__closure = mdb__interactive_query__closure_arg;
    MR_String mdb__interactive_query__conv0_HeadVar__3_50;

    {
      mdb__interactive_query__succeeded = mdb__interactive_query__IntroducedFrom__pred__make_program__376__1_3_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), mdb__interactive_query__closure, (MR_Integer) 3))), ((MR_Word) mdb__interactive_query__wrapper_arg_1), &mdb__interactive_query__conv0_HeadVar__3_50);
    }
    if (mdb__interactive_query__succeeded)
      {
        *mdb__interactive_query__wrapper_arg_2 = ((MR_Box) (mdb__interactive_query__conv0_HeadVar__3_50));
        mdb__interactive_query__succeeded = MR_TRUE;
      }
    return mdb__interactive_query__succeeded;
  }
}

static void MR_CALL 
mdb__interactive_query__run_query_5_p_0(
  MR_Word mdb__interactive_query__Env_6,
  MR_Word mdb__interactive_query__Goal_7,
  MR_Word mdb__interactive_query__Varset_8)
{
  {
    MR_bool mdb__interactive_query__succeeded;
    MR_Word mdb__interactive_query__MaybeMercuryOptions_11;

    {
      mercury__io__get_environment_var_4_p_0((MR_String) "MERCURY_OPTIONS", &mdb__interactive_query__MaybeMercuryOptions_11);
    }
    if ((mdb__interactive_query__MaybeMercuryOptions_11 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
      {
        {
          mercury__io__write_string_3_p_0((MR_String) "Unable to unset MERCURY_OPTIONS environment variable");
        }
      }
    else
      {
        MR_Word mdb__interactive_query__TypeInfo_48_87;
        MR_Word mdb__interactive_query__TypeCtorInfo_52_91;
        MR_String mdb__interactive_query__MercuryOptions_12 = ((MR_String) (MR_hl_field(MR_mktag(1), mdb__interactive_query__MaybeMercuryOptions_11, (MR_Integer) 0)));
        MR_Word mdb__interactive_query__Program_13;
        MR_Word mdb__interactive_query__Succeeded_14;
        MR_String mdb__interactive_query__V_27_27;
        MR_Word mdb__interactive_query__QueryType_48;
        MR_Word mdb__interactive_query__Vars0_49;
        MR_Word mdb__interactive_query__Vars1_50;
        MR_Word mdb__interactive_query__Vars_51;
        MR_Word mdb__interactive_query__Inputs_52;
        MR_Word mdb__interactive_query__Outputs0_53;
        MR_Word mdb__interactive_query__Outputs_55;
        MR_Word mdb__interactive_query__V_56_56;
        MR_Word mdb__interactive_query__V_57_57;
        MR_Word mdb__interactive_query__V_58_58;
        MR_Word mdb__interactive_query__V_63_63;
        MR_Word mdb__interactive_query__V_78_78;
        MR_Word mdb__interactive_query__V_66_66;
        MR_String mdb__interactive_query__V_67_67;
        MR_Word mdb__interactive_query__V_68_68;
        MR_Word mdb__interactive_query__V_69_69;
        MR_Word mdb__interactive_query__V_70_70;
        MR_Word mdb__interactive_query__V_71_71;
        MR_Word mdb__interactive_query__V_72_72;
        MR_String mdb__interactive_query__V_73_73;
        MR_Word mdb__interactive_query__V_74_74;
        MR_Word mdb__interactive_query__V_75_75;
        MR_Word mdb__interactive_query__V_76_76;
        MR_String mdb__interactive_query__V_77_77;
        MR_Word mdb__interactive_query__V_79_79;
        MR_Word mdb__interactive_query__V_80_80;
        MR_Word mdb__interactive_query__V_34_34;
        MR_Word mdb__interactive_query__V_35_35;
        MR_Word mdb__interactive_query__V_36_36;
        MR_Word mdb__interactive_query__V_37_37;
        MR_Word mdb__interactive_query__V_38_38;

        {
          mercury__io__set_environment_var_4_p_0((MR_String) "MERCURY_OPTIONS", (MR_String) "");
        }
        mdb__interactive_query__QueryType_48 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__interactive_query__Env_6, (MR_Integer) 0)));
        mdb__interactive_query__V_66_66 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__interactive_query__Env_6, (MR_Integer) 1)));
        mdb__interactive_query__V_67_67 = ((MR_String) (MR_hl_field(MR_mktag(0), mdb__interactive_query__Env_6, (MR_Integer) 2)));
        mdb__interactive_query__V_68_68 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__interactive_query__Env_6, (MR_Integer) 3)));
        mdb__interactive_query__V_69_69 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__interactive_query__Env_6, (MR_Integer) 4)));
        mdb__interactive_query__V_70_70 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__interactive_query__Env_6, (MR_Integer) 5)));
        {
          mercury__term__vars_2_p_0((MR_Word) &mercury__term__term__type_ctor_info_generic_0, mdb__interactive_query__Goal_7, &mdb__interactive_query__Vars0_49);
        }
        mdb__interactive_query__TypeInfo_48_87 = (MR_Word) &mdb__interactive_query_scalar_common_1[0];
        {
          mercury__list__remove_dups_2_p_0(mdb__interactive_query__TypeInfo_48_87, mdb__interactive_query__Vars0_49, &mdb__interactive_query__Vars1_50);
        }
        {
          mdb__interactive_query__V_56_56 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(MR_mktag(0), mdb__interactive_query__V_56_56, 0) = ((MR_Box) (&mdb__interactive_query_scalar_common_5[0]));
          MR_hl_field(MR_mktag(0), mdb__interactive_query__V_56_56, 1) = ((MR_Box) (mdb__interactive_query__run_query_5_p_0_1));
          MR_hl_field(MR_mktag(0), mdb__interactive_query__V_56_56, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
          MR_hl_field(MR_mktag(0), mdb__interactive_query__V_56_56, 3) = ((MR_Box) (mdb__interactive_query__Varset_8));
        }
        mdb__interactive_query__TypeCtorInfo_52_91 = (MR_Word) &mercury__builtin__builtin__type_ctor_info_string_0;
        {
          mercury__list__filter_map_3_p_0(mdb__interactive_query__TypeInfo_48_87, mdb__interactive_query__TypeCtorInfo_52_91, mdb__interactive_query__V_56_56, mdb__interactive_query__Vars1_50, &mdb__interactive_query__Vars_51);
        }
        mdb__interactive_query__V_71_71 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__interactive_query__Env_6, (MR_Integer) 0)));
        mdb__interactive_query__V_72_72 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__interactive_query__Env_6, (MR_Integer) 1)));
        mdb__interactive_query__V_73_73 = ((MR_String) (MR_hl_field(MR_mktag(0), mdb__interactive_query__Env_6, (MR_Integer) 2)));
        mdb__interactive_query__V_58_58 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__interactive_query__Env_6, (MR_Integer) 3)));
        mdb__interactive_query__V_74_74 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__interactive_query__Env_6, (MR_Integer) 4)));
        mdb__interactive_query__V_75_75 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__interactive_query__Env_6, (MR_Integer) 5)));
        {
          mdb__interactive_query__V_57_57 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(MR_mktag(0), mdb__interactive_query__V_57_57, 0) = ((MR_Box) (&mdb__interactive_query_scalar_common_3[1]));
          MR_hl_field(MR_mktag(0), mdb__interactive_query__V_57_57, 1) = ((MR_Box) (mdb__interactive_query__run_query_5_p_0_2));
          MR_hl_field(MR_mktag(0), mdb__interactive_query__V_57_57, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
          MR_hl_field(MR_mktag(0), mdb__interactive_query__V_57_57, 3) = ((MR_Box) (mdb__interactive_query__V_58_58));
        }
        {
          mercury__list__filter_4_p_0(mdb__interactive_query__TypeCtorInfo_52_91, mdb__interactive_query__V_57_57, mdb__interactive_query__Vars_51, &mdb__interactive_query__Inputs_52, &mdb__interactive_query__Outputs0_53);
        }
        switch (mdb__interactive_query__QueryType_48) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 1:
          case (MR_Integer) 0:
            {
              {
                mercury__list__filter_3_p_0(mdb__interactive_query__TypeCtorInfo_52_91, (MR_Word) &mdb__interactive_query_scalar_common_2[1], mdb__interactive_query__Outputs0_53, &mdb__interactive_query__Outputs_55);
              }
            }
            break;
          case (MR_Integer) 2:
            mdb__interactive_query__Outputs_55 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
            break;
        }
        mdb__interactive_query__V_76_76 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__interactive_query__Env_6, (MR_Integer) 0)));
        mdb__interactive_query__V_63_63 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__interactive_query__Env_6, (MR_Integer) 1)));
        mdb__interactive_query__V_77_77 = ((MR_String) (MR_hl_field(MR_mktag(0), mdb__interactive_query__Env_6, (MR_Integer) 2)));
        mdb__interactive_query__V_78_78 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__interactive_query__Env_6, (MR_Integer) 3)));
        mdb__interactive_query__V_79_79 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__interactive_query__Env_6, (MR_Integer) 4)));
        mdb__interactive_query__V_80_80 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__interactive_query__Env_6, (MR_Integer) 5)));
        {
          mdb__interactive_query__Program_13 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 7 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(MR_mktag(0), mdb__interactive_query__Program_13, 0) = ((MR_Box) (mdb__interactive_query__QueryType_48));
          MR_hl_field(MR_mktag(0), mdb__interactive_query__Program_13, 1) = ((MR_Box) (mdb__interactive_query__V_63_63));
          MR_hl_field(MR_mktag(0), mdb__interactive_query__Program_13, 2) = ((MR_Box) (mdb__interactive_query__V_78_78));
          MR_hl_field(MR_mktag(0), mdb__interactive_query__Program_13, 3) = ((MR_Box) (mdb__interactive_query__Inputs_52));
          MR_hl_field(MR_mktag(0), mdb__interactive_query__Program_13, 4) = ((MR_Box) (mdb__interactive_query__Outputs_55));
          MR_hl_field(MR_mktag(0), mdb__interactive_query__Program_13, 5) = ((MR_Box) (mdb__interactive_query__Goal_7));
          MR_hl_field(MR_mktag(0), mdb__interactive_query__Program_13, 6) = ((MR_Box) (mdb__interactive_query__Varset_8));
        }
        {
          mdb__interactive_query__write_prog_to_file_4_p_0(mdb__interactive_query__Program_13, (MR_String) "mdb_query.m");
        }
        mdb__interactive_query__V_34_34 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__interactive_query__Env_6, (MR_Integer) 0)));
        mdb__interactive_query__V_35_35 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__interactive_query__Env_6, (MR_Integer) 1)));
        mdb__interactive_query__V_27_27 = ((MR_String) (MR_hl_field(MR_mktag(0), mdb__interactive_query__Env_6, (MR_Integer) 2)));
        mdb__interactive_query__V_36_36 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__interactive_query__Env_6, (MR_Integer) 3)));
        mdb__interactive_query__V_37_37 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__interactive_query__Env_6, (MR_Integer) 4)));
        mdb__interactive_query__V_38_38 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__interactive_query__Env_6, (MR_Integer) 5)));
        {
          mdb__interactive_query__compile_file_4_p_0(mdb__interactive_query__V_27_27, &mdb__interactive_query__Succeeded_14);
        }
        switch (mdb__interactive_query__Succeeded_14) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
            {
            }
            break;
          case (MR_Integer) 1:
            {
              mdb__interactive_query__dynamically_load_and_run_3_p_0(mdb__interactive_query__Program_13);
            }
            break;
        }
        {
          mdb__interactive_query__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_99_108_101_97_110_117_112_95_113_117_101_114_121_95_95_91_49_93_95_48_3_p_0();
        }
        {
          mercury__io__set_environment_var_4_p_0((MR_String) "MERCURY_OPTIONS", mdb__interactive_query__MercuryOptions_12);
        }
      }
  }
}

static MR_bool MR_CALL 
mdb__interactive_query__term_to_list_2_p_0(
  MR_Word mdb__interactive_query__HeadVar__1_1,
  MR_Word * mdb__interactive_query__HeadVar__2_2)
{
  {
    MR_bool mdb__interactive_query__succeeded = ((MR_tag((MR_Word) mdb__interactive_query__HeadVar__1_1)) == (MR_mktag((MR_Integer) 0)));
    MR_Word mdb__interactive_query__V_21_21;
    MR_Word mdb__interactive_query__V_22_22;
    MR_String mdb__interactive_query__V_23_23;
    MR_Word mdb__interactive_query__V_20_20;

    if (mdb__interactive_query__succeeded)
      {
        mdb__interactive_query__V_22_22 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__interactive_query__HeadVar__1_1, (MR_Integer) 0)));
        mdb__interactive_query__V_21_21 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__interactive_query__HeadVar__1_1, (MR_Integer) 1)));
        mdb__interactive_query__V_20_20 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__interactive_query__HeadVar__1_1, (MR_Integer) 2)));
        mdb__interactive_query__succeeded = ((MR_tag((MR_Word) mdb__interactive_query__V_22_22)) == (MR_mktag((MR_Integer) 0)));
        if (mdb__interactive_query__succeeded)
          {
            mdb__interactive_query__V_23_23 = ((MR_String) (MR_hl_field(MR_mktag(0), mdb__interactive_query__V_22_22, (MR_Integer) 0)));
            if ((mdb__interactive_query__V_21_21 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
              {
                mdb__interactive_query__succeeded = (strcmp(mdb__interactive_query__V_23_23, (MR_String) "[]") == 0);
                if (mdb__interactive_query__succeeded)
                  {
                    *mdb__interactive_query__HeadVar__2_2 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
                    mdb__interactive_query__succeeded = MR_TRUE;
                  }
              }
            else
              {
                MR_String mdb__interactive_query__Module_7;
                MR_Word mdb__interactive_query__Rest_9;
                MR_Word mdb__interactive_query__Modules_11;
                MR_Word mdb__interactive_query__V_15_15;
                MR_Word mdb__interactive_query__V_16_16;
                MR_Word mdb__interactive_query__V_17_17;
                MR_Word mdb__interactive_query__V_18_18;
                MR_Word mdb__interactive_query__V_19_19;
                MR_Word mdb__interactive_query___C1_8;

                mdb__interactive_query__succeeded = (strcmp(mdb__interactive_query__V_23_23, (MR_String) "[|]") == 0);
                if (mdb__interactive_query__succeeded)
                  {
                    mdb__interactive_query__V_15_15 = ((MR_Word) (MR_hl_field(MR_mktag(1), mdb__interactive_query__V_21_21, (MR_Integer) 0)));
                    mdb__interactive_query__V_18_18 = ((MR_Word) (MR_hl_field(MR_mktag(1), mdb__interactive_query__V_21_21, (MR_Integer) 1)));
                    mdb__interactive_query__succeeded = ((MR_tag((MR_Word) mdb__interactive_query__V_15_15)) == (MR_mktag((MR_Integer) 0)));
                    if (mdb__interactive_query__succeeded)
                      {
                        mdb__interactive_query__V_16_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__interactive_query__V_15_15, (MR_Integer) 0)));
                        mdb__interactive_query__V_17_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__interactive_query__V_15_15, (MR_Integer) 1)));
                        mdb__interactive_query___C1_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__interactive_query__V_15_15, (MR_Integer) 2)));
                        mdb__interactive_query__succeeded = (mdb__interactive_query__V_17_17 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
                        if (mdb__interactive_query__succeeded)
                          {
                            mdb__interactive_query__succeeded = ((MR_tag((MR_Word) mdb__interactive_query__V_16_16)) == (MR_mktag((MR_Integer) 0)));
                            if (mdb__interactive_query__succeeded)
                              {
                                mdb__interactive_query__Module_7 = ((MR_String) (MR_hl_field(MR_mktag(0), mdb__interactive_query__V_16_16, (MR_Integer) 0)));
                                mdb__interactive_query__succeeded = ((MR_tag((MR_Word) mdb__interactive_query__V_18_18)) == (MR_mktag((MR_Integer) 1)));
                                if (mdb__interactive_query__succeeded)
                                  {
                                    mdb__interactive_query__Rest_9 = ((MR_Word) (MR_hl_field(MR_mktag(1), mdb__interactive_query__V_18_18, (MR_Integer) 0)));
                                    mdb__interactive_query__V_19_19 = ((MR_Word) (MR_hl_field(MR_mktag(1), mdb__interactive_query__V_18_18, (MR_Integer) 1)));
                                    mdb__interactive_query__succeeded = (mdb__interactive_query__V_19_19 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
                                    if (mdb__interactive_query__succeeded)
                                      {
                                        {
                                          mdb__interactive_query__succeeded = mdb__interactive_query__term_to_list_2_p_0(mdb__interactive_query__Rest_9, &mdb__interactive_query__Modules_11);
                                        }
                                        if (mdb__interactive_query__succeeded)
                                          {
                                            {
                                              MR_Word base;
                                              base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                                              *mdb__interactive_query__HeadVar__2_2 = base;
                                              MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (mdb__interactive_query__Module_7));
                                              MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (mdb__interactive_query__Modules_11));
                                            }
                                            mdb__interactive_query__succeeded = MR_TRUE;
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
    return mdb__interactive_query__succeeded;
  }
}

static void MR_CALL 
mdb__interactive_query__parse_query_command_2_p_0(
  MR_Word mdb__interactive_query__Term_3,
  MR_Word * mdb__interactive_query__Cmd_4)
{
  {
    MR_bool mdb__interactive_query__succeeded = ((MR_tag((MR_Word) mdb__interactive_query__Term_3)) == (MR_mktag((MR_Integer) 0)));
    MR_Word mdb__interactive_query__V_11_11;
    MR_String mdb__interactive_query__V_12_12;
    MR_Word mdb__interactive_query__V_13_13;
    MR_Word mdb__interactive_query__V_5_5;

    if (mdb__interactive_query__succeeded)
      {
        mdb__interactive_query__V_11_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__interactive_query__Term_3, (MR_Integer) 0)));
        mdb__interactive_query__V_13_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__interactive_query__Term_3, (MR_Integer) 1)));
        mdb__interactive_query__V_5_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__interactive_query__Term_3, (MR_Integer) 2)));
        mdb__interactive_query__succeeded = ((MR_tag((MR_Word) mdb__interactive_query__V_11_11)) == (MR_mktag((MR_Integer) 0)));
        if (mdb__interactive_query__succeeded)
          {
            mdb__interactive_query__V_12_12 = ((MR_String) (MR_hl_field(MR_mktag(0), mdb__interactive_query__V_11_11, (MR_Integer) 0)));
            mdb__interactive_query__succeeded = (strcmp(mdb__interactive_query__V_12_12, (MR_String) "quit") == 0);
            if (mdb__interactive_query__succeeded)
              mdb__interactive_query__succeeded = (mdb__interactive_query__V_13_13 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
          }
      }
    if (mdb__interactive_query__succeeded)
      *mdb__interactive_query__Cmd_4 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
    else
      {
        MR_String mdb__interactive_query__Options_8;
        MR_Word mdb__interactive_query__Subterm_6;
        MR_Word mdb__interactive_query__V_14_14;
        MR_String mdb__interactive_query__V_15_15;
        MR_Word mdb__interactive_query__V_16_16;
        MR_Word mdb__interactive_query__V_17_17;
        MR_Word mdb__interactive_query__V_18_18;
        MR_Word mdb__interactive_query__V_19_19;
        MR_Word mdb__interactive_query__V_7_7;
        MR_Word mdb__interactive_query__V_9_9;

        mdb__interactive_query__succeeded = ((MR_tag((MR_Word) mdb__interactive_query__Term_3)) == (MR_mktag((MR_Integer) 0)));
        if (mdb__interactive_query__succeeded)
          {
            mdb__interactive_query__V_14_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__interactive_query__Term_3, (MR_Integer) 0)));
            mdb__interactive_query__V_16_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__interactive_query__Term_3, (MR_Integer) 1)));
            mdb__interactive_query__V_7_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__interactive_query__Term_3, (MR_Integer) 2)));
            mdb__interactive_query__succeeded = ((MR_tag((MR_Word) mdb__interactive_query__V_14_14)) == (MR_mktag((MR_Integer) 0)));
            if (mdb__interactive_query__succeeded)
              {
                mdb__interactive_query__V_15_15 = ((MR_String) (MR_hl_field(MR_mktag(0), mdb__interactive_query__V_14_14, (MR_Integer) 0)));
                mdb__interactive_query__succeeded = (strcmp(mdb__interactive_query__V_15_15, (MR_String) "options") == 0);
                if (mdb__interactive_query__succeeded)
                  {
                    mdb__interactive_query__succeeded = ((MR_tag((MR_Word) mdb__interactive_query__V_16_16)) == (MR_mktag((MR_Integer) 1)));
                    if (mdb__interactive_query__succeeded)
                      {
                        mdb__interactive_query__Subterm_6 = ((MR_Word) (MR_hl_field(MR_mktag(1), mdb__interactive_query__V_16_16, (MR_Integer) 0)));
                        mdb__interactive_query__V_17_17 = ((MR_Word) (MR_hl_field(MR_mktag(1), mdb__interactive_query__V_16_16, (MR_Integer) 1)));
                        mdb__interactive_query__succeeded = (mdb__interactive_query__V_17_17 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
                        if (mdb__interactive_query__succeeded)
                          {
                            mdb__interactive_query__succeeded = ((MR_tag((MR_Word) mdb__interactive_query__Subterm_6)) == (MR_mktag((MR_Integer) 0)));
                            if (mdb__interactive_query__succeeded)
                              {
                                mdb__interactive_query__V_18_18 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__interactive_query__Subterm_6, (MR_Integer) 0)));
                                mdb__interactive_query__V_19_19 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__interactive_query__Subterm_6, (MR_Integer) 1)));
                                mdb__interactive_query__V_9_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__interactive_query__Subterm_6, (MR_Integer) 2)));
                                mdb__interactive_query__succeeded = ((((MR_tag((MR_Word) mdb__interactive_query__V_18_18)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), mdb__interactive_query__V_18_18, (MR_Integer) 0)))) == (MR_Integer) 0)));
                                if (mdb__interactive_query__succeeded)
                                  {
                                    mdb__interactive_query__Options_8 = ((MR_String) (MR_hl_field(MR_mktag(3), mdb__interactive_query__V_18_18, (MR_Integer) 1)));
                                    mdb__interactive_query__succeeded = (mdb__interactive_query__V_19_19 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
                                  }
                              }
                          }
                      }
                  }
              }
          }
        if (mdb__interactive_query__succeeded)
          {
            MR_Word base;
            base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
            *mdb__interactive_query__Cmd_4 = base;
            MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (mdb__interactive_query__Options_8));
          }
        else
          {
            MR_Word mdb__interactive_query__Imports_10;

            {
              mdb__interactive_query__succeeded = mdb__interactive_query__term_to_list_2_p_0(mdb__interactive_query__Term_3, &mdb__interactive_query__Imports_10);
            }
            if (mdb__interactive_query__succeeded)
              {
                MR_Word base;
                base = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
                *mdb__interactive_query__Cmd_4 = base;
                MR_hl_field(MR_mktag(2), base, 0) = ((MR_Box) (mdb__interactive_query__Imports_10));
              }
            else
              *mdb__interactive_query__Cmd_4 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 1));
          }
      }
  }
}

static void MR_CALL 
mdb__interactive_query__send_term_to_socket_4_p_0(
  MR_Word mdb__interactive_query__Term_5,
  MR_Word mdb__interactive_query__SocketStream_6)
{
  {
    MR_bool mdb__interactive_query__succeeded;

    {
      mercury__io__write_4_p_0((MR_Word) &mdb__interactive_query__mdb__interactive_query__type_ctor_info_interactive_query_response_0, mdb__interactive_query__SocketStream_6, ((MR_Box) (mdb__interactive_query__Term_5)));
    }
    {
      mercury__io__write_string_4_p_0(mdb__interactive_query__SocketStream_6, (MR_String) ".\n");
    }
    {
      mercury__io__flush_output_3_p_0(mdb__interactive_query__SocketStream_6);
    }
  }
}

static void MR_CALL 
mdb__interactive_query__query_external_2_3_p_0(
  MR_Word mdb__interactive_query__Env_4)
{
  while (MR_TRUE)
    {
      /* tailcall optimized into a loop */
      {
        MR_bool mdb__interactive_query__succeeded;
        MR_Word mdb__interactive_query__OldInputStream_6;
        MR_Word mdb__interactive_query__Result_7;
        MR_Word mdb__interactive_query__V_20_20 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__interactive_query__Env_4, (MR_Integer) 4)));
        MR_Word mdb__interactive_query__V_49_49 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__interactive_query__Env_4, (MR_Integer) 0)));
        MR_Word mdb__interactive_query__V_50_50 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__interactive_query__Env_4, (MR_Integer) 1)));
        MR_String mdb__interactive_query__V_51_51 = ((MR_String) (MR_hl_field(MR_mktag(0), mdb__interactive_query__Env_4, (MR_Integer) 2)));
        MR_Word mdb__interactive_query__V_52_52 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__interactive_query__Env_4, (MR_Integer) 3)));
        MR_Word mdb__interactive_query__V_53_53 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__interactive_query__Env_4, (MR_Integer) 5)));
        MR_Word mdb__interactive_query__V_8_8;

        {
          mercury__io__set_input_stream_4_p_0(mdb__interactive_query__V_20_20, &mdb__interactive_query__OldInputStream_6);
        }
        {
          mercury__term_io__read_term_3_p_0((MR_Word) &mercury__term__term__type_ctor_info_generic_0, &mdb__interactive_query__Result_7);
        }
        {
          mercury__io__set_input_stream_4_p_0(mdb__interactive_query__OldInputStream_6, &mdb__interactive_query__V_8_8);
        }
        switch (MR_tag((MR_Word) mdb__interactive_query__Result_7)) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
            {
              MR_Word mdb__interactive_query__V_46_46 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__interactive_query__Env_4, (MR_Integer) 5)));
              MR_Word mdb__interactive_query__V_54_54 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__interactive_query__Env_4, (MR_Integer) 0)));
              MR_Word mdb__interactive_query__V_55_55 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__interactive_query__Env_4, (MR_Integer) 1)));
              MR_String mdb__interactive_query__V_56_56 = ((MR_String) (MR_hl_field(MR_mktag(0), mdb__interactive_query__Env_4, (MR_Integer) 2)));
              MR_Word mdb__interactive_query__V_57_57 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__interactive_query__Env_4, (MR_Integer) 3)));
              MR_Word mdb__interactive_query__V_58_58 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__interactive_query__Env_4, (MR_Integer) 4)));

              {
                mdb__interactive_query__send_term_to_socket_4_p_0((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 2)), mdb__interactive_query__V_46_46);
              }
            }
            break;
          case (MR_Integer) 1:
            {
              MR_String mdb__interactive_query__ErrorMsg_9 = ((MR_String) (MR_hl_field(MR_mktag(1), mdb__interactive_query__Result_7, (MR_Integer) 0)));
              MR_Word mdb__interactive_query__V_41_41;
              MR_Word mdb__interactive_query__V_42_42;
              MR_Integer mdb__interactive_query___Line_10 = ((MR_Integer) (MR_hl_field(MR_mktag(1), mdb__interactive_query__Result_7, (MR_Integer) 1)));
              MR_Word mdb__interactive_query__V_59_59;
              MR_Word mdb__interactive_query__V_60_60;
              MR_String mdb__interactive_query__V_61_61;
              MR_Word mdb__interactive_query__V_62_62;
              MR_Word mdb__interactive_query__V_63_63;

              {
                mdb__interactive_query__V_41_41 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(2), mdb__interactive_query__V_41_41, 0) = ((MR_Box) (mdb__interactive_query__ErrorMsg_9));
              }
              mdb__interactive_query__V_59_59 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__interactive_query__Env_4, (MR_Integer) 0)));
              mdb__interactive_query__V_60_60 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__interactive_query__Env_4, (MR_Integer) 1)));
              mdb__interactive_query__V_61_61 = ((MR_String) (MR_hl_field(MR_mktag(0), mdb__interactive_query__Env_4, (MR_Integer) 2)));
              mdb__interactive_query__V_62_62 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__interactive_query__Env_4, (MR_Integer) 3)));
              mdb__interactive_query__V_63_63 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__interactive_query__Env_4, (MR_Integer) 4)));
              mdb__interactive_query__V_42_42 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__interactive_query__Env_4, (MR_Integer) 5)));
              {
                mdb__interactive_query__send_term_to_socket_4_p_0(mdb__interactive_query__V_41_41, mdb__interactive_query__V_42_42);
              }
              /* direct tailcall eliminated */
              {
              }
              continue;
            }
            break;
          case (MR_Integer) 2:
            {
              MR_Word mdb__interactive_query__Varset_11 = ((MR_Word) (MR_hl_field(MR_mktag(2), mdb__interactive_query__Result_7, (MR_Integer) 0)));
              MR_Word mdb__interactive_query__Term_12 = ((MR_Word) (MR_hl_field(MR_mktag(2), mdb__interactive_query__Result_7, (MR_Integer) 1)));
              MR_Word mdb__interactive_query__Cmd_13;

              {
                mdb__interactive_query__parse_query_command_2_p_0(mdb__interactive_query__Term_12, &mdb__interactive_query__Cmd_13);
              }
              switch (MR_tag((MR_Word) mdb__interactive_query__Cmd_13)) {
                default: /*NOTREACHED*/ MR_assert(0);
                case (MR_Integer) 0:
                  switch (MR_unmkbody(mdb__interactive_query__Cmd_13)) {
                    default: /*NOTREACHED*/ MR_assert(0);
                    case (MR_Integer) 0:
                      {
                        MR_Word mdb__interactive_query__V_39_39 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__interactive_query__Env_4, (MR_Integer) 5)));
                        MR_Word mdb__interactive_query__V_64_64 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__interactive_query__Env_4, (MR_Integer) 0)));
                        MR_Word mdb__interactive_query__V_65_65 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__interactive_query__Env_4, (MR_Integer) 1)));
                        MR_String mdb__interactive_query__V_66_66 = ((MR_String) (MR_hl_field(MR_mktag(0), mdb__interactive_query__Env_4, (MR_Integer) 2)));
                        MR_Word mdb__interactive_query__V_67_67 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__interactive_query__Env_4, (MR_Integer) 3)));
                        MR_Word mdb__interactive_query__V_68_68 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__interactive_query__Env_4, (MR_Integer) 4)));

                        {
                          mdb__interactive_query__send_term_to_socket_4_p_0((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 1)), mdb__interactive_query__V_39_39);
                        }
                      }
                      break;
                    case (MR_Integer) 1:
                      {
                        MR_Word mdb__interactive_query__V_26_26;
                        MR_Word mdb__interactive_query__V_96_96;
                        MR_Word mdb__interactive_query__V_97_97;
                        MR_String mdb__interactive_query__V_98_98;
                        MR_Word mdb__interactive_query__V_99_99;
                        MR_Word mdb__interactive_query__V_100_100;

                        {
                          mdb__interactive_query__run_query_5_p_0(mdb__interactive_query__Env_4, mdb__interactive_query__Term_12, mdb__interactive_query__Varset_11);
                        }
                        mdb__interactive_query__V_96_96 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__interactive_query__Env_4, (MR_Integer) 0)));
                        mdb__interactive_query__V_97_97 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__interactive_query__Env_4, (MR_Integer) 1)));
                        mdb__interactive_query__V_98_98 = ((MR_String) (MR_hl_field(MR_mktag(0), mdb__interactive_query__Env_4, (MR_Integer) 2)));
                        mdb__interactive_query__V_99_99 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__interactive_query__Env_4, (MR_Integer) 3)));
                        mdb__interactive_query__V_100_100 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__interactive_query__Env_4, (MR_Integer) 4)));
                        mdb__interactive_query__V_26_26 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__interactive_query__Env_4, (MR_Integer) 5)));
                        {
                          mdb__interactive_query__send_term_to_socket_4_p_0((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), mdb__interactive_query__V_26_26);
                        }
                        /* direct tailcall eliminated */
                        {
                        }
                        continue;
                      }
                      break;
                  }
                  break;
                case (MR_Integer) 1:
                  {
                    MR_String mdb__interactive_query__NewOptions_14 = ((MR_String) (MR_hl_field(MR_mktag(1), mdb__interactive_query__Cmd_13, (MR_Integer) 0)));
                    MR_Word mdb__interactive_query__Env1_15;
                    MR_Word mdb__interactive_query__V_35_35 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__interactive_query__Env_4, (MR_Integer) 5)));
                    MR_Word mdb__interactive_query__V_69_69 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__interactive_query__Env_4, (MR_Integer) 0)));
                    MR_Word mdb__interactive_query__V_70_70 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__interactive_query__Env_4, (MR_Integer) 1)));
                    MR_String mdb__interactive_query__V_71_71 = ((MR_String) (MR_hl_field(MR_mktag(0), mdb__interactive_query__Env_4, (MR_Integer) 2)));
                    MR_Word mdb__interactive_query__V_72_72 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__interactive_query__Env_4, (MR_Integer) 3)));
                    MR_Word mdb__interactive_query__V_73_73 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__interactive_query__Env_4, (MR_Integer) 4)));
                    MR_Word mdb__interactive_query__V_74_74;
                    MR_Word mdb__interactive_query__V_75_75;
                    MR_Word mdb__interactive_query__V_77_77;
                    MR_Word mdb__interactive_query__V_78_78;
                    MR_Word mdb__interactive_query__V_79_79;
                    MR_String mdb__interactive_query__V_76_76;

                    {
                      mdb__interactive_query__send_term_to_socket_4_p_0((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), mdb__interactive_query__V_35_35);
                    }
                    mdb__interactive_query__V_74_74 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__interactive_query__Env_4, (MR_Integer) 0)));
                    mdb__interactive_query__V_75_75 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__interactive_query__Env_4, (MR_Integer) 1)));
                    mdb__interactive_query__V_76_76 = ((MR_String) (MR_hl_field(MR_mktag(0), mdb__interactive_query__Env_4, (MR_Integer) 2)));
                    mdb__interactive_query__V_77_77 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__interactive_query__Env_4, (MR_Integer) 3)));
                    mdb__interactive_query__V_78_78 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__interactive_query__Env_4, (MR_Integer) 4)));
                    mdb__interactive_query__V_79_79 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__interactive_query__Env_4, (MR_Integer) 5)));
                    {
                      mdb__interactive_query__Env1_15 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 6 * sizeof(MR_Word)), NULL, NULL);
                      MR_hl_field(MR_mktag(0), mdb__interactive_query__Env1_15, 0) = ((MR_Box) (mdb__interactive_query__V_74_74));
                      MR_hl_field(MR_mktag(0), mdb__interactive_query__Env1_15, 1) = ((MR_Box) (mdb__interactive_query__V_75_75));
                      MR_hl_field(MR_mktag(0), mdb__interactive_query__Env1_15, 2) = ((MR_Box) (mdb__interactive_query__NewOptions_14));
                      MR_hl_field(MR_mktag(0), mdb__interactive_query__Env1_15, 3) = ((MR_Box) (mdb__interactive_query__V_77_77));
                      MR_hl_field(MR_mktag(0), mdb__interactive_query__Env1_15, 4) = ((MR_Box) (mdb__interactive_query__V_78_78));
                      MR_hl_field(MR_mktag(0), mdb__interactive_query__Env1_15, 5) = ((MR_Box) (mdb__interactive_query__V_79_79));
                    }
                    /* direct tailcall eliminated */
                    {
                      MR_Word mdb__interactive_query__Env__tmp_copy_4 = mdb__interactive_query__Env1_15;

                      mdb__interactive_query__Env_4 = mdb__interactive_query__Env__tmp_copy_4;
                    }
                    continue;
                  }
                  break;
                case (MR_Integer) 2:
                  {
                    MR_Word mdb__interactive_query__AddedImports_16 = ((MR_Word) (MR_hl_field(MR_mktag(2), mdb__interactive_query__Cmd_13, (MR_Integer) 0)));
                    MR_Word mdb__interactive_query__Imports_17;
                    MR_Word mdb__interactive_query__V_29_29 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__interactive_query__Env_4, (MR_Integer) 1)));
                    MR_Word mdb__interactive_query__V_30_30;
                    MR_Word mdb__interactive_query__Env1_48;
                    MR_Word mdb__interactive_query__V_90_90;
                    MR_Word mdb__interactive_query__V_80_80 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__interactive_query__Env_4, (MR_Integer) 0)));
                    MR_String mdb__interactive_query__V_81_81 = ((MR_String) (MR_hl_field(MR_mktag(0), mdb__interactive_query__Env_4, (MR_Integer) 2)));
                    MR_Word mdb__interactive_query__V_82_82 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__interactive_query__Env_4, (MR_Integer) 3)));
                    MR_Word mdb__interactive_query__V_83_83 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__interactive_query__Env_4, (MR_Integer) 4)));
                    MR_Word mdb__interactive_query__V_84_84 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__interactive_query__Env_4, (MR_Integer) 5)));
                    MR_Word mdb__interactive_query__V_85_85;
                    MR_String mdb__interactive_query__V_87_87;
                    MR_Word mdb__interactive_query__V_88_88;
                    MR_Word mdb__interactive_query__V_89_89;
                    MR_Word mdb__interactive_query__V_86_86;

                    {
                      mdb__interactive_query__Imports_17 = mercury__list__f_43_43_2_f_0((MR_Word) &mercury__builtin__builtin__type_ctor_info_string_0, mdb__interactive_query__V_29_29, mdb__interactive_query__AddedImports_16);
                    }
                    mdb__interactive_query__V_85_85 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__interactive_query__Env_4, (MR_Integer) 0)));
                    mdb__interactive_query__V_86_86 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__interactive_query__Env_4, (MR_Integer) 1)));
                    mdb__interactive_query__V_87_87 = ((MR_String) (MR_hl_field(MR_mktag(0), mdb__interactive_query__Env_4, (MR_Integer) 2)));
                    mdb__interactive_query__V_88_88 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__interactive_query__Env_4, (MR_Integer) 3)));
                    mdb__interactive_query__V_89_89 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__interactive_query__Env_4, (MR_Integer) 4)));
                    mdb__interactive_query__V_90_90 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__interactive_query__Env_4, (MR_Integer) 5)));
                    {
                      mdb__interactive_query__Env1_48 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 6 * sizeof(MR_Word)), NULL, NULL);
                      MR_hl_field(MR_mktag(0), mdb__interactive_query__Env1_48, 0) = ((MR_Box) (mdb__interactive_query__V_85_85));
                      MR_hl_field(MR_mktag(0), mdb__interactive_query__Env1_48, 1) = ((MR_Box) (mdb__interactive_query__Imports_17));
                      MR_hl_field(MR_mktag(0), mdb__interactive_query__Env1_48, 2) = ((MR_Box) (mdb__interactive_query__V_87_87));
                      MR_hl_field(MR_mktag(0), mdb__interactive_query__Env1_48, 3) = ((MR_Box) (mdb__interactive_query__V_88_88));
                      MR_hl_field(MR_mktag(0), mdb__interactive_query__Env1_48, 4) = ((MR_Box) (mdb__interactive_query__V_89_89));
                      MR_hl_field(MR_mktag(0), mdb__interactive_query__Env1_48, 5) = ((MR_Box) (mdb__interactive_query__V_90_90));
                    }
                    {
                      mdb__interactive_query__V_30_30 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
                      MR_hl_field(MR_mktag(1), mdb__interactive_query__V_30_30, 0) = ((MR_Box) (mdb__interactive_query__Imports_17));
                    }
                    {
                      mdb__interactive_query__send_term_to_socket_4_p_0(mdb__interactive_query__V_30_30, mdb__interactive_query__V_90_90);
                    }
                    /* direct tailcall eliminated */
                    {
                      MR_Word mdb__interactive_query__Env__tmp_copy_4 = mdb__interactive_query__Env1_48;

                      mdb__interactive_query__Env_4 = mdb__interactive_query__Env__tmp_copy_4;
                    }
                    continue;
                  }
                  break;
              }
            }
            break;
        }
      }
      break;
    }
}

static void MR_CALL 
mdb__interactive_query__query_3_4_p_0(
  MR_Word mdb__interactive_query__Env_5,
  MR_Word mdb__interactive_query__ReadTerm_6)
{
  {
    MR_bool mdb__interactive_query__succeeded;

    switch (MR_tag((MR_Word) mdb__interactive_query__ReadTerm_6)) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        {
          MR_Word mdb__interactive_query__V_42_42 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__interactive_query__Env_5, (MR_Integer) 5)));
          MR_Word mdb__interactive_query__V_45_45 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__interactive_query__Env_5, (MR_Integer) 0)));
          MR_Word mdb__interactive_query__V_46_46 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__interactive_query__Env_5, (MR_Integer) 1)));
          MR_String mdb__interactive_query__V_47_47 = ((MR_String) (MR_hl_field(MR_mktag(0), mdb__interactive_query__Env_5, (MR_Integer) 2)));
          MR_Word mdb__interactive_query__V_48_48 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__interactive_query__Env_5, (MR_Integer) 3)));
          MR_Word mdb__interactive_query__V_49_49 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__interactive_query__Env_5, (MR_Integer) 4)));

          {
            mercury__io__nl_3_p_0(mdb__interactive_query__V_42_42);
          }
        }
        break;
      case (MR_Integer) 1:
        {
          MR_String mdb__interactive_query__Msg_8 = ((MR_String) (MR_hl_field(MR_mktag(1), mdb__interactive_query__ReadTerm_6, (MR_Integer) 0)));
          MR_Word mdb__interactive_query__V_37_37 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__interactive_query__Env_5, (MR_Integer) 5)));
          MR_Word mdb__interactive_query__V_39_39;
          MR_Integer mdb__interactive_query___Line_9 = ((MR_Integer) (MR_hl_field(MR_mktag(1), mdb__interactive_query__ReadTerm_6, (MR_Integer) 1)));
          MR_Word mdb__interactive_query__V_50_50 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__interactive_query__Env_5, (MR_Integer) 0)));
          MR_Word mdb__interactive_query__V_51_51 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__interactive_query__Env_5, (MR_Integer) 1)));
          MR_String mdb__interactive_query__V_52_52 = ((MR_String) (MR_hl_field(MR_mktag(0), mdb__interactive_query__Env_5, (MR_Integer) 2)));
          MR_Word mdb__interactive_query__V_53_53 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__interactive_query__Env_5, (MR_Integer) 3)));
          MR_Word mdb__interactive_query__V_54_54 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__interactive_query__Env_5, (MR_Integer) 4)));
          MR_Word mdb__interactive_query__V_55_55;
          MR_Word mdb__interactive_query__V_56_56;
          MR_String mdb__interactive_query__V_57_57;
          MR_Word mdb__interactive_query__V_58_58;
          MR_Word mdb__interactive_query__V_59_59;

          {
            mercury__io__write_string_4_p_0(mdb__interactive_query__V_37_37, mdb__interactive_query__Msg_8);
          }
          mdb__interactive_query__V_55_55 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__interactive_query__Env_5, (MR_Integer) 0)));
          mdb__interactive_query__V_56_56 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__interactive_query__Env_5, (MR_Integer) 1)));
          mdb__interactive_query__V_57_57 = ((MR_String) (MR_hl_field(MR_mktag(0), mdb__interactive_query__Env_5, (MR_Integer) 2)));
          mdb__interactive_query__V_58_58 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__interactive_query__Env_5, (MR_Integer) 3)));
          mdb__interactive_query__V_59_59 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__interactive_query__Env_5, (MR_Integer) 4)));
          mdb__interactive_query__V_39_39 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__interactive_query__Env_5, (MR_Integer) 5)));
          {
            mercury__io__nl_3_p_0(mdb__interactive_query__V_39_39);
          }
          {
            mdb__interactive_query__query_2_3_p_0(mdb__interactive_query__Env_5);
          }
        }
        break;
      case (MR_Integer) 2:
        {
          MR_Word mdb__interactive_query__Varset_10 = ((MR_Word) (MR_hl_field(MR_mktag(2), mdb__interactive_query__ReadTerm_6, (MR_Integer) 0)));
          MR_Word mdb__interactive_query__Term_11 = ((MR_Word) (MR_hl_field(MR_mktag(2), mdb__interactive_query__ReadTerm_6, (MR_Integer) 1)));
          MR_Word mdb__interactive_query__Cmd_12;
          MR_Word mdb__interactive_query__V_109_109;
          MR_Word mdb__interactive_query__V_113_113;
          MR_Word mdb__interactive_query__V_110_110;
          MR_Word mdb__interactive_query__V_111_111;
          MR_String mdb__interactive_query__V_112_112;
          MR_Word mdb__interactive_query__V_114_114;

          {
            mdb__interactive_query__parse_query_command_2_p_0(mdb__interactive_query__Term_11, &mdb__interactive_query__Cmd_12);
          }
          mdb__interactive_query__V_114_114 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__interactive_query__Env_5, (MR_Integer) 0)));
          mdb__interactive_query__V_113_113 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__interactive_query__Env_5, (MR_Integer) 1)));
          mdb__interactive_query__V_112_112 = ((MR_String) (MR_hl_field(MR_mktag(0), mdb__interactive_query__Env_5, (MR_Integer) 2)));
          mdb__interactive_query__V_111_111 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__interactive_query__Env_5, (MR_Integer) 3)));
          mdb__interactive_query__V_110_110 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__interactive_query__Env_5, (MR_Integer) 4)));
          mdb__interactive_query__V_109_109 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__interactive_query__Env_5, (MR_Integer) 5)));
          switch (MR_tag((MR_Word) mdb__interactive_query__Cmd_12)) {
            default: /*NOTREACHED*/ MR_assert(0);
            case (MR_Integer) 0:
              switch (MR_unmkbody(mdb__interactive_query__Cmd_12)) {
                default: /*NOTREACHED*/ MR_assert(0);
                case (MR_Integer) 0:
                  {
                    mercury__io__nl_3_p_0(mdb__interactive_query__V_109_109);
                  }
                  break;
                case (MR_Integer) 1:
                  {
                    {
                      mercury__io__flush_output_3_p_0(mdb__interactive_query__V_109_109);
                    }
                    {
                      mdb__interactive_query__run_query_5_p_0(mdb__interactive_query__Env_5, mdb__interactive_query__Term_11, mdb__interactive_query__Varset_10);
                    }
                    {
                      mdb__interactive_query__query_2_3_p_0(mdb__interactive_query__Env_5);
                    }
                  }
                  break;
              }
              break;
            case (MR_Integer) 1:
              {
                MR_Word mdb__interactive_query__TypeCtorInfo_107_107 = (MR_Word) &mercury__builtin__builtin__type_ctor_info_string_0;
                MR_String mdb__interactive_query__NewOptions_13 = ((MR_String) (MR_hl_field(MR_mktag(1), mdb__interactive_query__Cmd_12, (MR_Integer) 0)));
                MR_Word mdb__interactive_query__Env1_14;
                MR_Word mdb__interactive_query__V_30_30;
                MR_Word mdb__interactive_query__V_32_32;
                MR_Word mdb__interactive_query__V_70_70;
                MR_Word mdb__interactive_query__V_71_71;
                MR_String mdb__interactive_query__V_72_72;
                MR_Word mdb__interactive_query__V_73_73;
                MR_Word mdb__interactive_query__V_74_74;
                MR_Word mdb__interactive_query__V_75_75;
                MR_Word mdb__interactive_query__V_76_76;
                MR_String mdb__interactive_query__V_77_77;
                MR_Word mdb__interactive_query__V_78_78;
                MR_Word mdb__interactive_query__V_79_79;
                MR_Word mdb__interactive_query__V_80_80;
                MR_Word mdb__interactive_query__V_81_81;
                MR_Word mdb__interactive_query__V_83_83;
                MR_Word mdb__interactive_query__V_84_84;
                MR_Word mdb__interactive_query__V_85_85;
                MR_String mdb__interactive_query__V_82_82;

                {
                  mercury__io__print_4_p_0(mdb__interactive_query__TypeCtorInfo_107_107, mdb__interactive_query__V_109_109, ((MR_Box) ((MR_String) "Compilation options: ")));
                }
                mdb__interactive_query__V_70_70 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__interactive_query__Env_5, (MR_Integer) 0)));
                mdb__interactive_query__V_71_71 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__interactive_query__Env_5, (MR_Integer) 1)));
                mdb__interactive_query__V_72_72 = ((MR_String) (MR_hl_field(MR_mktag(0), mdb__interactive_query__Env_5, (MR_Integer) 2)));
                mdb__interactive_query__V_73_73 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__interactive_query__Env_5, (MR_Integer) 3)));
                mdb__interactive_query__V_74_74 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__interactive_query__Env_5, (MR_Integer) 4)));
                mdb__interactive_query__V_30_30 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__interactive_query__Env_5, (MR_Integer) 5)));
                {
                  mercury__io__print_4_p_0(mdb__interactive_query__TypeCtorInfo_107_107, mdb__interactive_query__V_30_30, ((MR_Box) (mdb__interactive_query__NewOptions_13)));
                }
                mdb__interactive_query__V_75_75 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__interactive_query__Env_5, (MR_Integer) 0)));
                mdb__interactive_query__V_76_76 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__interactive_query__Env_5, (MR_Integer) 1)));
                mdb__interactive_query__V_77_77 = ((MR_String) (MR_hl_field(MR_mktag(0), mdb__interactive_query__Env_5, (MR_Integer) 2)));
                mdb__interactive_query__V_78_78 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__interactive_query__Env_5, (MR_Integer) 3)));
                mdb__interactive_query__V_79_79 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__interactive_query__Env_5, (MR_Integer) 4)));
                mdb__interactive_query__V_32_32 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__interactive_query__Env_5, (MR_Integer) 5)));
                {
                  mercury__io__nl_3_p_0(mdb__interactive_query__V_32_32);
                }
                mdb__interactive_query__V_80_80 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__interactive_query__Env_5, (MR_Integer) 0)));
                mdb__interactive_query__V_81_81 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__interactive_query__Env_5, (MR_Integer) 1)));
                mdb__interactive_query__V_82_82 = ((MR_String) (MR_hl_field(MR_mktag(0), mdb__interactive_query__Env_5, (MR_Integer) 2)));
                mdb__interactive_query__V_83_83 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__interactive_query__Env_5, (MR_Integer) 3)));
                mdb__interactive_query__V_84_84 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__interactive_query__Env_5, (MR_Integer) 4)));
                mdb__interactive_query__V_85_85 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__interactive_query__Env_5, (MR_Integer) 5)));
                {
                  mdb__interactive_query__Env1_14 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 6 * sizeof(MR_Word)), NULL, NULL);
                  MR_hl_field(MR_mktag(0), mdb__interactive_query__Env1_14, 0) = ((MR_Box) (mdb__interactive_query__V_80_80));
                  MR_hl_field(MR_mktag(0), mdb__interactive_query__Env1_14, 1) = ((MR_Box) (mdb__interactive_query__V_81_81));
                  MR_hl_field(MR_mktag(0), mdb__interactive_query__Env1_14, 2) = ((MR_Box) (mdb__interactive_query__NewOptions_13));
                  MR_hl_field(MR_mktag(0), mdb__interactive_query__Env1_14, 3) = ((MR_Box) (mdb__interactive_query__V_83_83));
                  MR_hl_field(MR_mktag(0), mdb__interactive_query__Env1_14, 4) = ((MR_Box) (mdb__interactive_query__V_84_84));
                  MR_hl_field(MR_mktag(0), mdb__interactive_query__Env1_14, 5) = ((MR_Box) (mdb__interactive_query__V_85_85));
                }
                {
                  mdb__interactive_query__query_2_3_p_0(mdb__interactive_query__Env1_14);
                }
              }
              break;
            case (MR_Integer) 2:
              {
                MR_Word mdb__interactive_query__AddedImports_15 = ((MR_Word) (MR_hl_field(MR_mktag(2), mdb__interactive_query__Cmd_12, (MR_Integer) 0)));
                MR_Word mdb__interactive_query__Imports_16;
                MR_Word mdb__interactive_query__Env1_44;
                MR_Word mdb__interactive_query__V_96_96;
                MR_Word mdb__interactive_query__V_91_91;
                MR_String mdb__interactive_query__V_93_93;
                MR_Word mdb__interactive_query__V_94_94;
                MR_Word mdb__interactive_query__V_95_95;
                MR_Word mdb__interactive_query__V_92_92;

                {
                  mdb__interactive_query__Imports_16 = mercury__list__f_43_43_2_f_0((MR_Word) &mercury__builtin__builtin__type_ctor_info_string_0, mdb__interactive_query__V_113_113, mdb__interactive_query__AddedImports_15);
                }
                mdb__interactive_query__V_91_91 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__interactive_query__Env_5, (MR_Integer) 0)));
                mdb__interactive_query__V_92_92 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__interactive_query__Env_5, (MR_Integer) 1)));
                mdb__interactive_query__V_93_93 = ((MR_String) (MR_hl_field(MR_mktag(0), mdb__interactive_query__Env_5, (MR_Integer) 2)));
                mdb__interactive_query__V_94_94 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__interactive_query__Env_5, (MR_Integer) 3)));
                mdb__interactive_query__V_95_95 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__interactive_query__Env_5, (MR_Integer) 4)));
                mdb__interactive_query__V_96_96 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__interactive_query__Env_5, (MR_Integer) 5)));
                {
                  mdb__interactive_query__Env1_44 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 6 * sizeof(MR_Word)), NULL, NULL);
                  MR_hl_field(MR_mktag(0), mdb__interactive_query__Env1_44, 0) = ((MR_Box) (mdb__interactive_query__V_91_91));
                  MR_hl_field(MR_mktag(0), mdb__interactive_query__Env1_44, 1) = ((MR_Box) (mdb__interactive_query__Imports_16));
                  MR_hl_field(MR_mktag(0), mdb__interactive_query__Env1_44, 2) = ((MR_Box) (mdb__interactive_query__V_93_93));
                  MR_hl_field(MR_mktag(0), mdb__interactive_query__Env1_44, 3) = ((MR_Box) (mdb__interactive_query__V_94_94));
                  MR_hl_field(MR_mktag(0), mdb__interactive_query__Env1_44, 4) = ((MR_Box) (mdb__interactive_query__V_95_95));
                  MR_hl_field(MR_mktag(0), mdb__interactive_query__Env1_44, 5) = ((MR_Box) (mdb__interactive_query__V_96_96));
                }
                {
                  mdb__interactive_query__write_import_list_4_p_0(mdb__interactive_query__V_96_96, mdb__interactive_query__Imports_16);
                }
                {
                  mdb__interactive_query__query_2_3_p_0(mdb__interactive_query__Env1_44);
                }
              }
              break;
          }
        }
        break;
    }
  }
}

static void MR_CALL 
mdb__interactive_query__query_2_3_p_0(
  MR_Word mdb__interactive_query__Env_4)
{
  while (MR_TRUE)
    {
      /* tailcall optimized into a loop */
      {
        MR_bool mdb__interactive_query__succeeded;
        MR_String mdb__interactive_query__Prompt_6;
        MR_Word mdb__interactive_query__Result_7;
        MR_Word mdb__interactive_query__V_15_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__interactive_query__Env_4, (MR_Integer) 0)));
        MR_Word mdb__interactive_query__V_31_31 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__interactive_query__Env_4, (MR_Integer) 4)));
        MR_Word mdb__interactive_query__V_32_32 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__interactive_query__Env_4, (MR_Integer) 5)));
        MR_Word mdb__interactive_query__V_28_28 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__interactive_query__Env_4, (MR_Integer) 1)));
        MR_String mdb__interactive_query__V_29_29 = ((MR_String) (MR_hl_field(MR_mktag(0), mdb__interactive_query__Env_4, (MR_Integer) 2)));
        MR_Word mdb__interactive_query__V_30_30 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__interactive_query__Env_4, (MR_Integer) 3)));

        switch (mdb__interactive_query__V_15_15) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 1:
            mdb__interactive_query__Prompt_6 = (MR_String) "\?- ";
            break;
          case (MR_Integer) 2:
            mdb__interactive_query__Prompt_6 = (MR_String) "run <-- ";
            break;
          case (MR_Integer) 0:
            mdb__interactive_query__Prompt_6 = (MR_String) "\?- ";
            break;
        }
        {
          mdb__util__trace_getline_6_p_0(mdb__interactive_query__Prompt_6, &mdb__interactive_query__Result_7, mdb__interactive_query__V_31_31, mdb__interactive_query__V_32_32);
        }
        switch (MR_tag((MR_Word) mdb__interactive_query__Result_7)) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
            {
              MR_Word mdb__interactive_query__V_26_26 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__interactive_query__Env_4, (MR_Integer) 5)));
              MR_Word mdb__interactive_query__V_43_43 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__interactive_query__Env_4, (MR_Integer) 0)));
              MR_Word mdb__interactive_query__V_44_44 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__interactive_query__Env_4, (MR_Integer) 1)));
              MR_String mdb__interactive_query__V_45_45 = ((MR_String) (MR_hl_field(MR_mktag(0), mdb__interactive_query__Env_4, (MR_Integer) 2)));
              MR_Word mdb__interactive_query__V_46_46 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__interactive_query__Env_4, (MR_Integer) 3)));
              MR_Word mdb__interactive_query__V_47_47 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__interactive_query__Env_4, (MR_Integer) 4)));

              {
                mercury__io__nl_3_p_0(mdb__interactive_query__V_26_26);
              }
            }
            break;
          case (MR_Integer) 1:
            {
              MR_String mdb__interactive_query__Line_10 = ((MR_String) (MR_hl_field(MR_mktag(1), mdb__interactive_query__Result_7, (MR_Integer) 0)));
              MR_Word mdb__interactive_query__ReadTerm_12;
              MR_Word mdb__interactive_query__V_11_11;

              {
                mercury__parser__read_term_from_string_4_p_0((MR_Word) &mercury__term__term__type_ctor_info_generic_0, (MR_String) "", mdb__interactive_query__Line_10, &mdb__interactive_query__V_11_11, &mdb__interactive_query__ReadTerm_12);
              }
              {
                mdb__interactive_query__query_3_4_p_0(mdb__interactive_query__Env_4, mdb__interactive_query__ReadTerm_12);
              }
            }
            break;
          case (MR_Integer) 2:
            {
              MR_Word mdb__interactive_query__Error_8 = ((MR_Word) (MR_hl_field(MR_mktag(2), mdb__interactive_query__Result_7, (MR_Integer) 0)));
              MR_String mdb__interactive_query__Msg_9;
              MR_Word mdb__interactive_query__V_21_21;
              MR_Word mdb__interactive_query__V_23_23;
              MR_Word mdb__interactive_query__V_48_48;
              MR_Word mdb__interactive_query__V_49_49;
              MR_String mdb__interactive_query__V_50_50;
              MR_Word mdb__interactive_query__V_51_51;
              MR_Word mdb__interactive_query__V_52_52;
              MR_Word mdb__interactive_query__V_53_53;
              MR_Word mdb__interactive_query__V_54_54;
              MR_String mdb__interactive_query__V_55_55;
              MR_Word mdb__interactive_query__V_56_56;
              MR_Word mdb__interactive_query__V_57_57;

              {
                mercury__io__error_message_2_p_0(mdb__interactive_query__Error_8, &mdb__interactive_query__Msg_9);
              }
              mdb__interactive_query__V_48_48 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__interactive_query__Env_4, (MR_Integer) 0)));
              mdb__interactive_query__V_49_49 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__interactive_query__Env_4, (MR_Integer) 1)));
              mdb__interactive_query__V_50_50 = ((MR_String) (MR_hl_field(MR_mktag(0), mdb__interactive_query__Env_4, (MR_Integer) 2)));
              mdb__interactive_query__V_51_51 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__interactive_query__Env_4, (MR_Integer) 3)));
              mdb__interactive_query__V_52_52 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__interactive_query__Env_4, (MR_Integer) 4)));
              mdb__interactive_query__V_21_21 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__interactive_query__Env_4, (MR_Integer) 5)));
              {
                mercury__io__write_string_4_p_0(mdb__interactive_query__V_21_21, mdb__interactive_query__Msg_9);
              }
              mdb__interactive_query__V_53_53 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__interactive_query__Env_4, (MR_Integer) 0)));
              mdb__interactive_query__V_54_54 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__interactive_query__Env_4, (MR_Integer) 1)));
              mdb__interactive_query__V_55_55 = ((MR_String) (MR_hl_field(MR_mktag(0), mdb__interactive_query__Env_4, (MR_Integer) 2)));
              mdb__interactive_query__V_56_56 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__interactive_query__Env_4, (MR_Integer) 3)));
              mdb__interactive_query__V_57_57 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__interactive_query__Env_4, (MR_Integer) 4)));
              mdb__interactive_query__V_23_23 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__interactive_query__Env_4, (MR_Integer) 5)));
              {
                mercury__io__nl_3_p_0(mdb__interactive_query__V_23_23);
              }
              /* direct tailcall eliminated */
              {
              }
              continue;
            }
            break;
        }
      }
      break;
    }
}

void MR_CALL 
mdb__interactive_query__query_external_9_p_0(
  MR_Word mdb__interactive_query__QueryType_10,
  MR_Word mdb__interactive_query__Imports_11,
  MR_String mdb__interactive_query__Options_12,
  MR_Word mdb__interactive_query__Names_13,
  MR_Word mdb__interactive_query__Values_14,
  MR_Word mdb__interactive_query__SocketIn_15,
  MR_Word mdb__interactive_query__SocketOut_16)
{
  {
    MR_bool mdb__interactive_query__succeeded;
    MR_Word mdb__interactive_query__Bindings_18;
    MR_Word mdb__interactive_query__Env_19;

    {
      mercury__map__from_corresponding_lists_3_p_0((MR_Word) &mercury__builtin__builtin__type_ctor_info_string_0, (MR_Word) &mercury__univ__univ__type_ctor_info_univ_0, mdb__interactive_query__Names_13, mdb__interactive_query__Values_14, &mdb__interactive_query__Bindings_18);
    }
    {
      mdb__interactive_query__Env_19 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 6 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), mdb__interactive_query__Env_19, 0) = ((MR_Box) (mdb__interactive_query__QueryType_10));
      MR_hl_field(MR_mktag(0), mdb__interactive_query__Env_19, 1) = ((MR_Box) (mdb__interactive_query__Imports_11));
      MR_hl_field(MR_mktag(0), mdb__interactive_query__Env_19, 2) = ((MR_Box) (mdb__interactive_query__Options_12));
      MR_hl_field(MR_mktag(0), mdb__interactive_query__Env_19, 3) = ((MR_Box) (mdb__interactive_query__Bindings_18));
      MR_hl_field(MR_mktag(0), mdb__interactive_query__Env_19, 4) = ((MR_Box) (mdb__interactive_query__SocketIn_15));
      MR_hl_field(MR_mktag(0), mdb__interactive_query__Env_19, 5) = ((MR_Box) (mdb__interactive_query__SocketOut_16));
    }
    {
      mdb__interactive_query__query_external_2_3_p_0(mdb__interactive_query__Env_19);
    }
  }
}

void MR_CALL 
mdb__interactive_query__query_9_p_0(
  MR_Word mdb__interactive_query__QueryType_10,
  MR_Word mdb__interactive_query__Imports_11,
  MR_String mdb__interactive_query__Options_12,
  MR_Word mdb__interactive_query__Names_13,
  MR_Word mdb__interactive_query__Values_14,
  MR_Word mdb__interactive_query__MdbStdin_15,
  MR_Word mdb__interactive_query__MdbStdout_16)
{
  {
    MR_bool mdb__interactive_query__succeeded;
    MR_Word mdb__interactive_query__Bindings_18;
    MR_Word mdb__interactive_query__Env_19;

    {
      mercury__map__from_corresponding_lists_3_p_0((MR_Word) &mercury__builtin__builtin__type_ctor_info_string_0, (MR_Word) &mercury__univ__univ__type_ctor_info_univ_0, mdb__interactive_query__Names_13, mdb__interactive_query__Values_14, &mdb__interactive_query__Bindings_18);
    }
    {
      mdb__interactive_query__Env_19 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 6 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), mdb__interactive_query__Env_19, 0) = ((MR_Box) (mdb__interactive_query__QueryType_10));
      MR_hl_field(MR_mktag(0), mdb__interactive_query__Env_19, 1) = ((MR_Box) (mdb__interactive_query__Imports_11));
      MR_hl_field(MR_mktag(0), mdb__interactive_query__Env_19, 2) = ((MR_Box) (mdb__interactive_query__Options_12));
      MR_hl_field(MR_mktag(0), mdb__interactive_query__Env_19, 3) = ((MR_Box) (mdb__interactive_query__Bindings_18));
      MR_hl_field(MR_mktag(0), mdb__interactive_query__Env_19, 4) = ((MR_Box) (mdb__interactive_query__MdbStdin_15));
      MR_hl_field(MR_mktag(0), mdb__interactive_query__Env_19, 5) = ((MR_Box) (mdb__interactive_query__MdbStdout_16));
    }
    {
      mdb__interactive_query__query_2_3_p_0(mdb__interactive_query__Env_19);
    }
  }
}

void mercury__mdb__interactive_query__init(void)
{
}

void mercury__mdb__interactive_query__init_type_tables(void)
{
	static MR_bool initialised = MR_FALSE;
	if (initialised) return;
	initialised = MR_TRUE;

	MR_register_type_ctor_info(&mdb__interactive_query__mdb__interactive_query__type_ctor_info_bindings_0);
	MR_register_type_ctor_info(&mdb__interactive_query__mdb__interactive_query__type_ctor_info_imports_0);
	MR_register_type_ctor_info(&mdb__interactive_query__mdb__interactive_query__type_ctor_info_interactive_query_response_0);
	MR_register_type_ctor_info(&mdb__interactive_query__mdb__interactive_query__type_ctor_info_options_string_0);
	MR_register_type_ctor_info(&mdb__interactive_query__mdb__interactive_query__type_ctor_info_prog_0);
	MR_register_type_ctor_info(&mdb__interactive_query__mdb__interactive_query__type_ctor_info_query_command_0);
	MR_register_type_ctor_info(&mdb__interactive_query__mdb__interactive_query__type_ctor_info_query_env_0);
	MR_register_type_ctor_info(&mdb__interactive_query__mdb__interactive_query__type_ctor_info_query_type_0);
	MR_register_type_ctor_info(&mdb__interactive_query__mdb__interactive_query__type_ctor_info_run_cc_pred_0);
	MR_register_type_ctor_info(&mdb__interactive_query__mdb__interactive_query__type_ctor_info_run_io_pred_0);
	MR_register_type_ctor_info(&mdb__interactive_query__mdb__interactive_query__type_ctor_info_run_normal_pred_0);
	MR_register_type_ctor_info(&mdb__interactive_query__mdb__interactive_query__type_ctor_info_solution_0);
}

void mercury__mdb__interactive_query__init_debugger(void)
{
	MR_fatal_error("debugger initialization in MLDS grade");
}

// Ensure everything is compiled with the same grade.
const char *mercury__mdb__interactive_query__grade_check(void)
{
    return &MR_GRADE_VAR;
}

/* :- end_module mdb.interactive_query. */
