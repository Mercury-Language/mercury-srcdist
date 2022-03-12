/*
** Automatically generated from `interactive_query.m'
** by the Mercury compiler,
** version rotd-2022-03-12
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


// :- module mdb.interactive_query.
// :- implementation.

/*
INIT mercury__mdb__interactive_query__init
ENDINIT
*/

#include "mdb.interactive_query.mih"
#include "mdb.interactive_query.mh"


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
#include "list.mih"
#include "map.mih"
#include "maybe.mih"
#include "mdb.mih"
#include "mdbcomp.mih"
#include "mercury_term_lexer.mih"
#include "mercury_term_parser.mih"
#include "ops.mih"
#include "pair.mih"
#include "pretty_printer.mih"
#include "private_builtin.mih"
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
#include "io.call_system.mih"
#include "io.environment.mih"
#include "io.file.mih"
#include "mdb.dl.mih"
#include "mdb.name_mangle.mih"
#include "mdb.util.mih"
#include "mdbcomp.prim_data.mih"
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

struct mdb__interactive_query__link_and_run_normal_6_p_0_2_env_0_s {
  MR_Box * mdb__interactive_query__link_and_run_normal_6_p_0_2_env_0__wrapper_arg_1;
  MR_Cont mdb__interactive_query__link_and_run_normal_6_p_0_2_env_0__cont;
  void * mdb__interactive_query__link_and_run_normal_6_p_0_2_env_0__cont_env_ptr;
  MR_Word mdb__interactive_query__link_and_run_normal_6_p_0_2_env_0__conv0_Solution_6;
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

static const MR_DuArgLocn mdb__interactive_query__mdb__interactive_query__field_locns_prog_0_0[7];

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

static const MR_DuArgLocn mdb__interactive_query__mdb__interactive_query__field_locns_query_env_0_0[6];

static const MR_DuFunctorDesc mdb__interactive_query__mdb__interactive_query__du_functor_desc_query_env_0_0;

static const MR_DuFunctorDescPtr mdb__interactive_query__mdb__interactive_query__du_stag_ordered_query_env_0_0[1];

static const MR_DuPtagLayout mdb__interactive_query__mdb__interactive_query__du_ptag_ordered_query_env_0[1];

static const MR_DuFunctorDescPtr mdb__interactive_query__mdb__interactive_query__du_name_ordered_query_env_0[1];

static const MR_Integer mdb__interactive_query__mdb__interactive_query__functor_number_map_query_env_0[1];

static const MR_EnumFunctorDesc mdb__interactive_query__mdb__interactive_query__enum_functor_desc_query_type_0_0;

static const MR_EnumFunctorDesc mdb__interactive_query__mdb__interactive_query__enum_functor_desc_query_type_0_1;

static const MR_EnumFunctorDesc mdb__interactive_query__mdb__interactive_query__enum_functor_desc_query_type_0_2;

static const MR_EnumFunctorDescPtr mdb__interactive_query__mdb__interactive_query__enum_ordinal_ordered_query_type_0[3];

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

static void MR_CALL 
mdb__interactive_query__IntroducedFrom__pred__write_prog_to_stream__484__1_4_p_0(
  MR_Word OutputStream_6,
  MR_String LambdaHeadVar__1_126);

static void MR_CALL 
mdb__interactive_query__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_73_110_116_114_111_100_117_99_101_100_70_114_111_109_95_95_112_114_101_100_95_95_119_114_105_116_101_95_112_114_111_103_95_116_111_95_115_116_114_101_97_109_95_95_52_56_52_95_95_49_95_95_91_50_93_95_48_4_p_0(
  MR_Word OutputStream_6);

static MR_bool MR_CALL 
mdb__interactive_query__IntroducedFrom__pred__make_program__390__1_1_p_0(
  MR_String LambdaHeadVar__1_21);

static MR_bool MR_CALL 
mdb__interactive_query__IntroducedFrom__pred__make_program__385__1_2_p_0(
  MR_Word HeadVar__1_19,
  MR_String HeadVar__2_53);

static MR_bool MR_CALL 
mdb__interactive_query__IntroducedFrom__pred__make_program__384__1_3_p_0(
  MR_Word Varset_7,
  MR_Word HeadVar__2_49,
  MR_String * HeadVar__3_50);

static void MR_CALL 
mdb__interactive_query____Compare____solution_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3);

static MR_bool MR_CALL 
mdb__interactive_query____Unify____solution_0_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2);

static void MR_CALL 
mdb__interactive_query____Compare____run_normal_pred_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3);

static MR_bool MR_CALL 
mdb__interactive_query____Unify____run_normal_pred_0_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2);

static void MR_CALL 
mdb__interactive_query____Compare____run_io_pred_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3);

static MR_bool MR_CALL 
mdb__interactive_query____Unify____run_io_pred_0_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2);

static void MR_CALL 
mdb__interactive_query____Compare____run_cc_pred_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3);

static MR_bool MR_CALL 
mdb__interactive_query____Unify____run_cc_pred_0_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2);

static void MR_CALL 
mdb__interactive_query____Compare____query_env_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3);

static MR_bool MR_CALL 
mdb__interactive_query____Unify____query_env_0_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2);

static void MR_CALL 
mdb__interactive_query____Compare____query_command_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3);

static MR_bool MR_CALL 
mdb__interactive_query____Unify____query_command_0_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2);

static void MR_CALL 
mdb__interactive_query____Compare____prog_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3);

static MR_bool MR_CALL 
mdb__interactive_query____Unify____prog_0_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2);

static void MR_CALL 
mdb__interactive_query____Compare____interactive_query_response_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3);

static MR_bool MR_CALL 
mdb__interactive_query____Unify____interactive_query_response_0_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2);

static void MR_CALL 
mdb__interactive_query____Compare____bindings_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3);

static MR_bool MR_CALL 
mdb__interactive_query____Unify____bindings_0_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2);

static MR_bool MR_CALL 
mdb__interactive_query__system_is_darwin_0_p_0(void);

static MR_Word MR_CALL 
mdb__interactive_query__inst_cast_io_1_f_0(
  MR_Word X_1);

static MR_Word MR_CALL 
mdb__interactive_query__inst_cast_cc_1_f_0(
  MR_Word X_1);

static MR_Word MR_CALL 
mdb__interactive_query__inst_cast_normal_1_f_0(
  MR_Word X_1);

static void MR_CALL 
mdb__interactive_query__write_binding_5_p_0(
  MR_Word OutputStream_6,
  MR_Word Bindings_7,
  MR_String Output_8);

static void MR_CALL 
mdb__interactive_query__call_run_io_5_p_0(
  MR_Word QueryPred0_6,
  MR_Word Bindings0_7,
  MR_Word * Solution_8);

static MR_bool MR_CALL 
mdb__interactive_query__call_run_cc_3_p_0(
  MR_Word QueryPred0_4,
  MR_Word Bindings0_5,
  MR_Word * Solution_6);

static void MR_CALL 
mdb__interactive_query__call_run_normal_3_p_0_2(
  void * env_ptr_arg);

static void MR_CALL 
mdb__interactive_query__call_run_normal_3_p_0_1(
  void * env_ptr_arg);

static void MR_CALL 
mdb__interactive_query__call_run_normal_3_p_0(
  MR_Word QueryPred0_4,
  MR_Word Bindings0_5,
  MR_Word * Solution_6,
  MR_Cont cont,
  void * cont_env_ptr);

static MR_String MR_CALL 
mdb__interactive_query__grade_option_0_f_0(void);

static void MR_CALL 
mdb__interactive_query__write_module_import_4_p_0(
  MR_Word OutputStream_5,
  MR_String ModuleName_6);

static void MR_CALL 
mdb__interactive_query__write_comma_var_4_p_0(
  MR_Word OutputStream_5,
  MR_String Var_6);

static void MR_CALL 
mdb__interactive_query__write_set_goal_4_p_0(
  MR_Word OutputStream_5,
  MR_String Var_6);

static void MR_CALL 
mdb__interactive_query__write_cast_goal_4_p_0(
  MR_Word OutputStream_5,
  MR_String Var_6);

static void MR_CALL 
mdb__interactive_query__query_external_2_3_p_0(
  MR_Word Env_4);

static void MR_CALL 
mdb__interactive_query__query_send_term_to_socket_4_p_0(
  MR_Word SocketStream_5,
  MR_Word Term_6);

static void MR_CALL 
mdb__interactive_query__query_3_4_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3);

static void MR_CALL 
mdb__interactive_query__query_2_3_p_0(
  MR_Word tscc_proc_1_input_1_Env_4);

static void MR_CALL 
mdb__interactive_query__query_3_4_p_0(
  MR_Word tscc_proc_2_input_1_Env_5,
  MR_Word tscc_proc_2_input_2_ReadTerm_6);

static void MR_CALL 
mdb__interactive_query__run_query_5_p_0(
  MR_Word Env_6,
  MR_Word Goal_7,
  MR_Word Varset_8);

static void MR_CALL 
mdb__interactive_query__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_99_108_101_97_110_117_112_95_113_117_101_114_121_95_95_91_49_93_95_48_3_p_0(void);

static void MR_CALL 
mdb__interactive_query__cleanup_file_4_p_0(
  MR_String Prefix_5,
  MR_String Suffix_6);

static void MR_CALL 
mdb__interactive_query__dynamically_load_and_run_4_p_0(
  MR_Word OutputStream_5,
  MR_Word Program_6);

static void MR_CALL 
mdb__interactive_query__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_108_105_110_107_95_97_110_100_95_114_117_110_95_105_111_95_95_91_51_93_95_48_6_p_0_1(
  MR_Box closure_arg,
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3);

static void MR_CALL 
mdb__interactive_query__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_108_105_110_107_95_97_110_100_95_114_117_110_95_105_111_95_95_91_51_93_95_48_6_p_0(
  MR_Word OutputStream_7,
  MR_Word Bindings_8,
  MR_Word Handle_10);

static MR_bool MR_CALL 
mdb__interactive_query__link_and_run_cc_6_p_0_1(
  MR_Box closure_arg,
  MR_Box * wrapper_arg_1);

static void MR_CALL 
mdb__interactive_query__link_and_run_cc_6_p_0(
  MR_Word OutputStream_7,
  MR_Word Bindings_8,
  MR_Word Outputs_9,
  MR_Word Handle_10);

static void MR_CALL 
mdb__interactive_query__write_solution_6_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3);

static void MR_CALL 
mdb__interactive_query__write_solution_6_p_0(
  MR_Word OutputStream_7,
  MR_Word Outputs_8,
  MR_String End_9,
  MR_Word Solution_10);

static void MR_CALL 
mdb__interactive_query__link_and_run_normal_6_p_0_3(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3);

static void MR_CALL 
mdb__interactive_query__link_and_run_normal_6_p_0_1(
  void * env_ptr_arg);

static void MR_CALL 
mdb__interactive_query__link_and_run_normal_6_p_0_2(
  MR_Box closure_arg,
  MR_Box * wrapper_arg_1,
  MR_Cont cont,
  void * cont_env_ptr);

static void MR_CALL 
mdb__interactive_query__link_and_run_normal_6_p_0(
  MR_Word OutputStream_7,
  MR_Word Bindings_8,
  MR_Word Outputs_9,
  MR_Word Handle_10);

static void MR_CALL 
mdb__interactive_query__compile_file_5_p_0(
  MR_Word OutputStream_6,
  MR_String Options_7,
  MR_Word * Succeeded_8);

static void MR_CALL 
mdb__interactive_query__write_prog_to_file_6_p_0(
  MR_Word OutputStream_7,
  MR_Integer LineNumberForDirective_8,
  MR_Word Program_9,
  MR_String FileName_10);

static void MR_CALL 
mdb__interactive_query__write_prog_to_stream_5_p_0_5(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3);

static void MR_CALL 
mdb__interactive_query__write_prog_to_stream_5_p_0_4(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3);

static void MR_CALL 
mdb__interactive_query__write_prog_to_stream_5_p_0_3(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3);

static void MR_CALL 
mdb__interactive_query__write_prog_to_stream_5_p_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3);

static void MR_CALL 
mdb__interactive_query__write_prog_to_stream_5_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3);

static void MR_CALL 
mdb__interactive_query__write_prog_to_stream_5_p_0(
  MR_Word OutputStream_6,
  MR_Integer LineNumberForDirective_7,
  MR_Word Prog_8);

static MR_String MR_CALL 
mdb__interactive_query__query_module_name_0_f_0(void);

static void MR_CALL 
mdb__interactive_query__write_args_4_p_0(
  MR_Word OutputStream_5,
  MR_Word Vars_6);

static void MR_CALL 
mdb__interactive_query__write_comma_args_4_p_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2);

static void MR_CALL 
mdb__interactive_query__write_arg_types_5_p_0(
  MR_Word OutputStream_6,
  MR_Word Bindings_7,
  MR_Word Vars_8);

static void MR_CALL 
mdb__interactive_query__write_comma_var_type_5_p_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3);

static MR_String MR_CALL 
mdb__interactive_query__query_type_rule_1_f_0(
  MR_Word HeadVar__1_1);

static MR_String MR_CALL 
mdb__interactive_query__query_type_extra_args_1_f_0(
  MR_Word HeadVar__1_1);

static MR_String MR_CALL 
mdb__interactive_query__query_type_extra_modes_1_f_0(
  MR_Word HeadVar__1_1);

static MR_String MR_CALL 
mdb__interactive_query__query_type_extra_decls_1_f_0(
  MR_Word HeadVar__1_1);

static MR_String MR_CALL 
mdb__interactive_query__query_type_extra_imports_1_f_0(
  MR_Word HeadVar__1_1);

static MR_String MR_CALL 
mdb__interactive_query__query_type_detism_1_f_0(
  MR_Word HeadVar__1_1);

static MR_bool MR_CALL 
mdb__interactive_query__make_program_4_p_0_3(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1);

static MR_bool MR_CALL 
mdb__interactive_query__make_program_4_p_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1);

static MR_bool MR_CALL 
mdb__interactive_query__make_program_4_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2);

static void MR_CALL 
mdb__interactive_query__make_program_4_p_0(
  MR_Word Env_5,
  MR_Word Goal_6,
  MR_Word Varset_7,
  MR_Word * Program_8);

static void MR_CALL 
mdb__interactive_query__parse_query_command_2_p_0(
  MR_Word Term_3,
  MR_Word * Cmd_4);

static MR_bool MR_CALL 
mdb__interactive_query__term_to_list_2_p_0(
  MR_Word HeadVar__1_1,
  MR_Word * HeadVar__2_2);

static MR_bool MR_CALL 
mdb__interactive_query____Unify____bindings_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2);

static void MR_CALL 
mdb__interactive_query____Compare____bindings_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3);

static MR_bool MR_CALL 
mdb__interactive_query____Unify____imports_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2);

static void MR_CALL 
mdb__interactive_query____Compare____imports_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3);

static MR_bool MR_CALL 
mdb__interactive_query____Unify____interactive_query_response_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2);

static void MR_CALL 
mdb__interactive_query____Compare____interactive_query_response_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3);

static MR_bool MR_CALL 
mdb__interactive_query____Unify____options_string_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2);

static void MR_CALL 
mdb__interactive_query____Compare____options_string_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3);

static MR_bool MR_CALL 
mdb__interactive_query____Unify____prog_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2);

static void MR_CALL 
mdb__interactive_query____Compare____prog_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3);

static MR_bool MR_CALL 
mdb__interactive_query____Unify____query_command_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2);

static void MR_CALL 
mdb__interactive_query____Compare____query_command_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3);

static MR_bool MR_CALL 
mdb__interactive_query____Unify____query_env_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2);

static void MR_CALL 
mdb__interactive_query____Compare____query_env_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3);

static MR_bool MR_CALL 
mdb__interactive_query____Unify____query_type_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2);

static void MR_CALL 
mdb__interactive_query____Compare____query_type_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3);

static MR_bool MR_CALL 
mdb__interactive_query____Unify____run_cc_pred_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2);

static void MR_CALL 
mdb__interactive_query____Compare____run_cc_pred_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3);

static MR_bool MR_CALL 
mdb__interactive_query____Unify____run_io_pred_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2);

static void MR_CALL 
mdb__interactive_query____Compare____run_io_pred_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3);

static MR_bool MR_CALL 
mdb__interactive_query____Unify____run_normal_pred_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2);

static void MR_CALL 
mdb__interactive_query____Compare____run_normal_pred_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3);

static MR_bool MR_CALL 
mdb__interactive_query____Unify____solution_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2);

static void MR_CALL 
mdb__interactive_query____Compare____solution_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3);


static /* final */ const MR_Box mdb__interactive_query_scalar_common_1[26][2];

static /* final */ const MR_Box mdb__interactive_query_scalar_common_2[3][3];

static /* final */ const MR_Box mdb__interactive_query_scalar_common_3[2][4];

static /* final */ const MR_Box mdb__interactive_query_scalar_common_4[6][5];

static /* final */ const MR_Box mdb__interactive_query_scalar_common_5[2][7];

static /* final */ const MR_Box mdb__interactive_query_scalar_common_6[2][1];

static /* final */ const MR_Box mdb__interactive_query_scalar_common_7[2][6];

static /* final */ const MR_Box mdb__interactive_query_scalar_common_8[1][9];

static /* final */ const MR_Box mdb__interactive_query_scalar_common_9[2][8];




static /* final */ const MR_Box mdb__interactive_query_scalar_common_1[26][2] = {
  /* row   0 */
  {
    ((MR_Box) (&mercury__term__term__type_ctor_info_var_1)),
    ((MR_Box) (&mercury__term__term__type_ctor_info_generic_0))
  },
  /* row   1 */
  {
    ((MR_Box) (&mercury__list__list__type_ctor_info_list_1)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_string_0))
  },
  /* row   2 */
  {
    ((MR_Box) (&mercury__term__term__type_ctor_info_term_1)),
    ((MR_Box) (&mercury__term__term__type_ctor_info_generic_0))
  },
  /* row   3 */
  {
    ((MR_Box) (&mercury__varset__varset__type_ctor_info_varset_1)),
    ((MR_Box) (&mercury__term__term__type_ctor_info_generic_0))
  },
  /* row   4 */
  {
    ((MR_Box) ((MR_String) "   ( if\n")),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row   5 */
  {
    ((MR_Box) ((MR_String) ") :-\n")),
    ((MR_Box) (MR_mkword(MR_mktag(1), &mdb__interactive_query_scalar_common_1[4])))
  },
  /* row   6 */
  {
    ((MR_Box) ((MR_String) ".query(inputs")),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row   7 */
  {
    ((MR_Box) ((MR_String) "),\n")),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row   8 */
  {
    ((MR_Box) ((MR_String) ":- type inputs ---> inputs")),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row   9 */
  {
    ((MR_Box) ((MR_String) "\n")),
    ((MR_Box) (MR_mkword(MR_mktag(1), &mdb__interactive_query_scalar_common_1[8])))
  },
  /* row  10 */
  {
    ((MR_Box) ((MR_String) "   ).\n")),
    ((MR_Box) (MR_mkword(MR_mktag(1), &mdb__interactive_query_scalar_common_1[9])))
  },
  /* row  11 */
  {
    ((MR_Box) ((MR_String) "       Loaded = no\n")),
    ((MR_Box) (MR_mkword(MR_mktag(1), &mdb__interactive_query_scalar_common_1[10])))
  },
  /* row  12 */
  {
    ((MR_Box) ((MR_String) "   else\n")),
    ((MR_Box) (MR_mkword(MR_mktag(1), &mdb__interactive_query_scalar_common_1[11])))
  },
  /* row  13 */
  {
    ((MR_Box) ((MR_String) "       Loaded = yes\n")),
    ((MR_Box) (MR_mkword(MR_mktag(1), &mdb__interactive_query_scalar_common_1[12])))
  },
  /* row  14 */
  {
    ((MR_Box) ((MR_String) "#1\n")),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row  15 */
  {
    ((MR_Box) ((MR_String) ":- pragma source_file(\"<stdin>\").\n")),
    ((MR_Box) (MR_mkword(MR_mktag(1), &mdb__interactive_query_scalar_common_1[14])))
  },
  /* row  16 */
  {
    ((MR_Box) ((MR_String) "\n")),
    ((MR_Box) (MR_mkword(MR_mktag(1), &mdb__interactive_query_scalar_common_1[15])))
  },
  /* row  17 */
  {
    ((MR_Box) ((MR_String) ".\n")),
    ((MR_Box) (MR_mkword(MR_mktag(1), &mdb__interactive_query_scalar_common_1[16])))
  },
  /* row  18 */
  {
    ((MR_Box) ((MR_String) ":- mode query(in")),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row  19 */
  {
    ((MR_Box) ((MR_String) "#1\n")),
    ((MR_Box) (MR_mkword(MR_mktag(1), &mdb__interactive_query_scalar_common_1[18])))
  },
  /* row  20 */
  {
    ((MR_Box) ((MR_String) "query(inputs")),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row  21 */
  {
    ((MR_Box) ((MR_String) "#1\n")),
    ((MR_Box) (MR_mkword(MR_mktag(1), &mdb__interactive_query_scalar_common_1[20])))
  },
  /* row  22 */
  {
    ((MR_Box) ((MR_String) ".\n")),
    ((MR_Box) (MR_mkword(MR_mktag(1), &mdb__interactive_query_scalar_common_1[21])))
  },
  /* row  23 */
  {
    ((MR_Box) ((MR_String) "), !Bindings),\n")),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row  24 */
  {
    ((MR_Box) ((MR_String) "mdb_query")),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row  25 */
  {
    ((MR_Box) ((MR_String) " --compile-to-shared-lib ")),
    ((MR_Box) (MR_mkword(MR_mktag(1), &mdb__interactive_query_scalar_common_1[24])))
  },
};

static /* final */ const MR_Box mdb__interactive_query_scalar_common_2[3][3] = {
  /* row   0 */
  {
    ((MR_Box) (base_typeclass_info_stream__stream__arity2__io__output_stream__arity0__io__state__arity0__)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_output_stream_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0))
  },
  /* row   1 */
  {
    ((MR_Box) (&mercury__tree234__tree234__type_ctor_info_tree234_2)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_string_0)),
    ((MR_Box) (&mercury__univ__univ__type_ctor_info_univ_0))
  },
  /* row   2 */
  {
    ((MR_Box) (&mdb__interactive_query_scalar_common_3[1])),
    ((MR_Box) (mdb__interactive_query__make_program_4_p_0_3)),
    ((MR_Box) ((MR_Integer) 0))
  },
};

static /* final */ const MR_Box mdb__interactive_query_scalar_common_3[2][4] = {
  /* row   0 */
  {
    ((MR_Box) (base_typeclass_info_stream__output__arity2__io__output_stream__arity0__io__state__arity0__)),
    ((MR_Box) (&mdb__interactive_query_scalar_common_2[0])),
    ((MR_Box) (&mercury__io__io__type_ctor_info_output_stream_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0))
  },
  /* row   1 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 1)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_string_0))
  },
};

static /* final */ const MR_Box mdb__interactive_query_scalar_common_4[6][5] = {
  /* row   0 */
  {
    ((MR_Box) (base_typeclass_info_stream__writer__arity3__io__output_stream__arity0__string__arity0__io__state__arity0__)),
    ((MR_Box) (&mdb__interactive_query_scalar_common_3[0])),
    ((MR_Box) (&mercury__io__io__type_ctor_info_output_stream_0)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_string_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0))
  },
  /* row   1 */
  {
    ((MR_Box) (base_typeclass_info_stream__writer__arity3__io__output_stream__arity0__character__arity0__io__state__arity0__)),
    ((MR_Box) (&mdb__interactive_query_scalar_common_3[0])),
    ((MR_Box) (&mercury__io__io__type_ctor_info_output_stream_0)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_character_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0))
  },
  /* row   2 */
  {
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_pred_0)),
    ((MR_Box) ((MR_Integer) 3)),
    ((MR_Box) (&mdb__interactive_query_scalar_common_2[1])),
    ((MR_Box) (&mdb__interactive_query_scalar_common_2[1])),
    ((MR_Box) (&mercury__bool__bool__type_ctor_info_bool_0))
  },
  /* row   3 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 2)),
    ((MR_Box) (&mdb__interactive_query__tree234__pti_tree234_2__plain_builtin__type_ctor_info_string_0__plain_univ__type_ctor_info_univ_0)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_string_0))
  },
  /* row   4 */
  {
    (MR_Box) ((MR_Unsigned) 0U),
    ((MR_Box) (MR_mkword(MR_mktag(1), &mdb__interactive_query_scalar_common_6[1]))),
    ((MR_Box) ((MR_String) "run")),
    ((MR_Box) ((MR_Integer) 3)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row   5 */
  {
    (MR_Box) ((MR_Unsigned) 0U),
    ((MR_Box) (MR_mkword(MR_mktag(1), &mdb__interactive_query_scalar_common_6[1]))),
    ((MR_Box) ((MR_String) "run")),
    ((MR_Box) ((MR_Integer) 5)),
    ((MR_Box) ((MR_Integer) 0))
  },
};

static /* final */ const MR_Box mdb__interactive_query_scalar_common_5[2][7] = {
  /* row   0 */
  {
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_pred_0)),
    ((MR_Box) ((MR_Integer) 5)),
    ((MR_Box) (&mdb__interactive_query_scalar_common_2[1])),
    ((MR_Box) (&mdb__interactive_query_scalar_common_2[1])),
    ((MR_Box) (&mercury__bool__bool__type_ctor_info_bool_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0))
  },
  /* row   1 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 4)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_output_stream_0)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_string_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0))
  },
};

static /* final */ const MR_Box mdb__interactive_query_scalar_common_6[2][1] = {
  /* row   0 */
  {
    (MR_Box) (((((MR_Unsigned) 0U << 4)) | (((((MR_Unsigned) 0U << 3)) | (((((MR_Unsigned) 0U << 2)) | (((MR_Unsigned) 0U << 1))))))))
  },
  /* row   1 */
  {
    ((MR_Box) ((MR_String) "mdb_query"))
  },
};

static /* final */ const MR_Box mdb__interactive_query_scalar_common_7[2][6] = {
  /* row   0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 3)),
    ((MR_Box) (&mdb__interactive_query__varset__pti_varset_1__plain_term__type_ctor_info_generic_0)),
    ((MR_Box) (&mdb__interactive_query__term__pti_var_1__plain_term__type_ctor_info_generic_0)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_string_0))
  },
  /* row   1 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 3)),
    ((MR_Box) (&mdb__interactive_query____vpti_pred_3__plain_tree234__ti_tree234_2builtin__type_ctor_info_string_0univ__type_ctor_info_univ_0__plain_tree234__ti_tree234_2builtin__type_ctor_info_string_0univ__type_ctor_info_univ_0__plain_bool__type_ctor_info_bool_0)),
    ((MR_Box) (&mdb__interactive_query__tree234__pti_tree234_2__plain_builtin__type_ctor_info_string_0__plain_univ__type_ctor_info_univ_0)),
    ((MR_Box) (&mdb__interactive_query__mdb__interactive_query__type_ctor_info_solution_0))
  },
};

static /* final */ const MR_Box mdb__interactive_query_scalar_common_8[1][9] = {
  /* row   0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 6)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_output_stream_0)),
    ((MR_Box) (&mdb__interactive_query__list__pti_list_1__plain_builtin__type_ctor_info_string_0)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_string_0)),
    ((MR_Box) (&mdb__interactive_query__mdb__interactive_query__type_ctor_info_solution_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0))
  },
};

static /* final */ const MR_Box mdb__interactive_query_scalar_common_9[2][8] = {
  /* row   0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 5)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_output_stream_0)),
    ((MR_Box) (&mdb__interactive_query__tree234__pti_tree234_2__plain_builtin__type_ctor_info_string_0__plain_univ__type_ctor_info_univ_0)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_string_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0))
  },
  /* row   1 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 5)),
    ((MR_Box) (&mdb__interactive_query____vpti_pred_5__plain_tree234__ti_tree234_2builtin__type_ctor_info_string_0univ__type_ctor_info_univ_0__plain_tree234__ti_tree234_2builtin__type_ctor_info_string_0univ__type_ctor_info_univ_0__plain_bool__type_ctor_info_bool_0__plain_io__type_ctor_info_state_0__plain_io__type_ctor_info_state_0)),
    ((MR_Box) (&mdb__interactive_query__tree234__pti_tree234_2__plain_builtin__type_ctor_info_string_0__plain_univ__type_ctor_info_univ_0)),
    ((MR_Box) (&mdb__interactive_query__mdb__interactive_query__type_ctor_info_solution_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0))
  },
};



#include "array.mh"
#include "bitmap.mh"
#include "io.mh"
#include "mdb.mh"
#include "stm_builtin.mh"
#include "store.mh"
#include "string.mh"
#include "time.mh"
#include "mdb.interactive_query.mh"

#line 98 "interactive_query.m"
void 
ML_query(
  MR_Word QueryType_10,
  MR_Word Imports_11,
  MR_String Options_12,
  MR_Word Names_13,
  MR_Word Values_14,
  MR_Word MdbStdin_15,
  MR_Word MdbStdout_16)
#line 98 "interactive_query.m"
{
#line 98 "interactive_query.m"
	mdb__interactive_query__query_9_p_0((MR_Word) QueryType_10, (MR_Word) Imports_11, (MR_String) Options_12, (MR_Word) Names_13, (MR_Word) Values_14, (MR_Word) MdbStdin_15, (MR_Word) MdbStdout_16);
}

#line 186 "interactive_query.m"
void 
ML_query_external(
  MR_Word QueryType_10,
  MR_Word Imports_11,
  MR_String Options_12,
  MR_Word Names_13,
  MR_Word Values_14,
  MR_Word SocketIn_15,
  MR_Word SocketOut_16)
#line 186 "interactive_query.m"
{
#line 186 "interactive_query.m"
	mdb__interactive_query__query_external_9_p_0((MR_Word) QueryType_10, (MR_Word) Imports_11, (MR_String) Options_12, (MR_Word) Names_13, (MR_Word) Values_14, (MR_Word) SocketIn_15, (MR_Word) SocketOut_16);
}


static const MR_FA_PseudoTypeInfo_Struct1 mdb__interactive_query__varset__pti_varset_1__plain_term__type_ctor_info_generic_0 = {
  &mercury__varset__varset__type_ctor_info_varset_1,
  {
    (MR_PseudoTypeInfo) (&mercury__term__term__type_ctor_info_generic_0)
  }
};

static const MR_FA_PseudoTypeInfo_Struct1 mdb__interactive_query__term__pti_var_1__plain_term__type_ctor_info_generic_0 = {
  &mercury__term__term__type_ctor_info_var_1,
  {
    (MR_PseudoTypeInfo) (&mercury__term__term__type_ctor_info_generic_0)
  }
};

static const MR_FA_PseudoTypeInfo_Struct2 mdb__interactive_query__tree234__pti_tree234_2__plain_builtin__type_ctor_info_string_0__plain_univ__type_ctor_info_univ_0 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_PseudoTypeInfo) (&mercury__builtin__builtin__type_ctor_info_string_0),
    (MR_PseudoTypeInfo) (&mercury__univ__univ__type_ctor_info_univ_0)
  }
};

static const MR_FA_TypeInfo_Struct2 mdb__interactive_query__tree234__ti_tree234_2builtin__type_ctor_info_string_0univ__type_ctor_info_univ_0 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_TypeInfo) (&mercury__builtin__builtin__type_ctor_info_string_0),
    (MR_TypeInfo) (&mercury__univ__univ__type_ctor_info_univ_0)
  }
};

static const MR_VA_PseudoTypeInfo_Struct3 mdb__interactive_query____vpti_pred_3__plain_tree234__ti_tree234_2builtin__type_ctor_info_string_0univ__type_ctor_info_univ_0__plain_tree234__ti_tree234_2builtin__type_ctor_info_string_0univ__type_ctor_info_univ_0__plain_bool__type_ctor_info_bool_0 = {
  &mercury__builtin__builtin__type_ctor_info_pred_0,
  (MR_Integer) 3,
  {
    (MR_PseudoTypeInfo) (&mdb__interactive_query__tree234__ti_tree234_2builtin__type_ctor_info_string_0univ__type_ctor_info_univ_0),
    (MR_PseudoTypeInfo) (&mdb__interactive_query__tree234__ti_tree234_2builtin__type_ctor_info_string_0univ__type_ctor_info_univ_0),
    (MR_PseudoTypeInfo) (&mercury__bool__bool__type_ctor_info_bool_0)
  }
};

static const MR_FA_PseudoTypeInfo_Struct1 mdb__interactive_query__list__pti_list_1__plain_builtin__type_ctor_info_string_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  {
    (MR_PseudoTypeInfo) (&mercury__builtin__builtin__type_ctor_info_string_0)
  }
};

static const MR_VA_PseudoTypeInfo_Struct5 mdb__interactive_query____vpti_pred_5__plain_tree234__ti_tree234_2builtin__type_ctor_info_string_0univ__type_ctor_info_univ_0__plain_tree234__ti_tree234_2builtin__type_ctor_info_string_0univ__type_ctor_info_univ_0__plain_bool__type_ctor_info_bool_0__plain_io__type_ctor_info_state_0__plain_io__type_ctor_info_state_0 = {
  &mercury__builtin__builtin__type_ctor_info_pred_0,
  (MR_Integer) 5,
  {
    (MR_PseudoTypeInfo) (&mdb__interactive_query__tree234__ti_tree234_2builtin__type_ctor_info_string_0univ__type_ctor_info_univ_0),
    (MR_PseudoTypeInfo) (&mdb__interactive_query__tree234__ti_tree234_2builtin__type_ctor_info_string_0univ__type_ctor_info_univ_0),
    (MR_PseudoTypeInfo) (&mercury__bool__bool__type_ctor_info_bool_0),
    (MR_PseudoTypeInfo) (&mercury__io__io__type_ctor_info_state_0),
    (MR_PseudoTypeInfo) (&mercury__io__io__type_ctor_info_state_0)
  }
};

const MR_TypeCtorInfo_Struct mdb__interactive_query__mdb__interactive_query__type_ctor_info_bindings_0 = {
  (MR_Integer) 0,
  UINT8_C(18),
  INT8_C(-1),
  MR_TYPECTOR_REP_EQUIV_GROUND,
  ((MR_Box) (mdb__interactive_query____Unify____bindings_0_0_10001)),
  ((MR_Box) (mdb__interactive_query____Compare____bindings_0_0_10001)),
  (MR_String) "mdb.interactive_query",
  (MR_String) "bindings",
  { NULL },
  { (MR_PseudoTypeInfo) (&mdb__interactive_query__tree234__ti_tree234_2builtin__type_ctor_info_string_0univ__type_ctor_info_univ_0) },
  (MR_Integer) -1,
  UINT16_C(0),
  NULL,

};

static const MR_FA_TypeInfo_Struct1 mdb__interactive_query__list__ti_list_1builtin__type_ctor_info_string_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  {
    (MR_TypeInfo) (&mercury__builtin__builtin__type_ctor_info_string_0)
  }
};

const MR_TypeCtorInfo_Struct mdb__interactive_query__mdb__interactive_query__type_ctor_info_imports_0 = {
  (MR_Integer) 0,
  UINT8_C(18),
  INT8_C(-1),
  MR_TYPECTOR_REP_EQUIV_GROUND,
  ((MR_Box) (mdb__interactive_query____Unify____imports_0_0_10001)),
  ((MR_Box) (mdb__interactive_query____Compare____imports_0_0_10001)),
  (MR_String) "mdb.interactive_query",
  (MR_String) "imports",
  { NULL },
  { (MR_PseudoTypeInfo) (&mdb__interactive_query__list__ti_list_1builtin__type_ctor_info_string_0) },
  (MR_Integer) -1,
  UINT16_C(0),
  NULL,

};

static const MR_DuFunctorDesc mdb__interactive_query__mdb__interactive_query__du_functor_desc_interactive_query_response_0_0 = {
  (MR_String) "iq_ok",
  INT16_C(0),
  UINT16_C(0),
  MR_SECTAG_LOCAL_REST_OF_WORD,
  UINT8_C(0),
  (MR_Integer) 0,
  INT32_C(0),
  NULL,
  NULL,
  NULL,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE,
  UINT8_C(0)
};

static const MR_PseudoTypeInfo mdb__interactive_query__mdb__interactive_query__field_types_interactive_query_response_0_1[1] = {
  (MR_PseudoTypeInfo) (&mdb__interactive_query__list__ti_list_1builtin__type_ctor_info_string_0)
};

static const MR_DuFunctorDesc mdb__interactive_query__mdb__interactive_query__du_functor_desc_interactive_query_response_0_1 = {
  (MR_String) "iq_imported",
  INT16_C(1),
  UINT16_C(0),
  MR_SECTAG_NONE,
  UINT8_C(1),
  (MR_Integer) -1,
  INT32_C(1),
  mdb__interactive_query__mdb__interactive_query__field_types_interactive_query_response_0_1,
  NULL,
  NULL,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE,
  UINT8_C(0)
};

static const MR_DuFunctorDesc mdb__interactive_query__mdb__interactive_query__du_functor_desc_interactive_query_response_0_2 = {
  (MR_String) "iq_quit",
  INT16_C(0),
  UINT16_C(0),
  MR_SECTAG_LOCAL_REST_OF_WORD,
  UINT8_C(0),
  (MR_Integer) 1,
  INT32_C(2),
  NULL,
  NULL,
  NULL,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE,
  UINT8_C(0)
};

static const MR_DuFunctorDesc mdb__interactive_query__mdb__interactive_query__du_functor_desc_interactive_query_response_0_3 = {
  (MR_String) "iq_eof",
  INT16_C(0),
  UINT16_C(0),
  MR_SECTAG_LOCAL_REST_OF_WORD,
  UINT8_C(0),
  (MR_Integer) 2,
  INT32_C(3),
  NULL,
  NULL,
  NULL,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE,
  UINT8_C(0)
};

static const MR_PseudoTypeInfo mdb__interactive_query__mdb__interactive_query__field_types_interactive_query_response_0_4[1] = {
  (MR_PseudoTypeInfo) (&mercury__builtin__builtin__type_ctor_info_string_0)
};

static const MR_DuFunctorDesc mdb__interactive_query__mdb__interactive_query__du_functor_desc_interactive_query_response_0_4 = {
  (MR_String) "iq_error",
  INT16_C(1),
  UINT16_C(0),
  MR_SECTAG_NONE,
  UINT8_C(2),
  (MR_Integer) -1,
  INT32_C(4),
  mdb__interactive_query__mdb__interactive_query__field_types_interactive_query_response_0_4,
  NULL,
  NULL,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE,
  UINT8_C(0)
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
    UINT32_C(3),
    MR_SECTAG_LOCAL_REST_OF_WORD,
    mdb__interactive_query__mdb__interactive_query__du_stag_ordered_interactive_query_response_0_0,
    INT8_C(-1),
    UINT8_C(0),
    UINT8_C(1)
  },
  {
    UINT32_C(1),
    MR_SECTAG_NONE,
    mdb__interactive_query__mdb__interactive_query__du_stag_ordered_interactive_query_response_0_1,
    INT8_C(-1),
    UINT8_C(1),
    UINT8_C(1)
  },
  {
    UINT32_C(1),
    MR_SECTAG_NONE,
    mdb__interactive_query__mdb__interactive_query__du_stag_ordered_interactive_query_response_0_2,
    INT8_C(-1),
    UINT8_C(2),
    UINT8_C(1)
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
  UINT8_C(18),
  INT8_C(3),
  MR_TYPECTOR_REP_DU,
  ((MR_Box) (mdb__interactive_query____Unify____interactive_query_response_0_0_10001)),
  ((MR_Box) (mdb__interactive_query____Compare____interactive_query_response_0_0_10001)),
  (MR_String) "mdb.interactive_query",
  (MR_String) "interactive_query_response",
  { mdb__interactive_query__mdb__interactive_query__du_name_ordered_interactive_query_response_0 },
  { mdb__interactive_query__mdb__interactive_query__du_ptag_ordered_interactive_query_response_0 },
  (MR_Integer) 5,
  UINT16_C(12),
  mdb__interactive_query__mdb__interactive_query__functor_number_map_interactive_query_response_0,

};

const MR_TypeCtorInfo_Struct mdb__interactive_query__mdb__interactive_query__type_ctor_info_options_string_0 = {
  (MR_Integer) 0,
  UINT8_C(18),
  INT8_C(-1),
  MR_TYPECTOR_REP_EQUIV_GROUND,
  ((MR_Box) (mdb__interactive_query____Unify____options_string_0_0_10001)),
  ((MR_Box) (mdb__interactive_query____Compare____options_string_0_0_10001)),
  (MR_String) "mdb.interactive_query",
  (MR_String) "options_string",
  { NULL },
  { (MR_PseudoTypeInfo) (&mercury__builtin__builtin__type_ctor_info_string_0) },
  (MR_Integer) -1,
  UINT16_C(0),
  NULL,

};

static const MR_FA_TypeInfo_Struct1 mdb__interactive_query__term__ti_term_1term__type_ctor_info_generic_0 = {
  &mercury__term__term__type_ctor_info_term_1,
  {
    (MR_TypeInfo) (&mercury__term__term__type_ctor_info_generic_0)
  }
};

static const MR_FA_TypeInfo_Struct1 mdb__interactive_query__varset__ti_varset_1term__type_ctor_info_generic_0 = {
  &mercury__varset__varset__type_ctor_info_varset_1,
  {
    (MR_TypeInfo) (&mercury__term__term__type_ctor_info_generic_0)
  }
};

static const MR_PseudoTypeInfo mdb__interactive_query__mdb__interactive_query__field_types_prog_0_0[7] = {
  (MR_PseudoTypeInfo) (&mdb__interactive_query__mdb__interactive_query__type_ctor_info_query_type_0),
  (MR_PseudoTypeInfo) (&mdb__interactive_query__list__ti_list_1builtin__type_ctor_info_string_0),
  (MR_PseudoTypeInfo) (&mdb__interactive_query__tree234__ti_tree234_2builtin__type_ctor_info_string_0univ__type_ctor_info_univ_0),
  (MR_PseudoTypeInfo) (&mdb__interactive_query__list__ti_list_1builtin__type_ctor_info_string_0),
  (MR_PseudoTypeInfo) (&mdb__interactive_query__list__ti_list_1builtin__type_ctor_info_string_0),
  (MR_PseudoTypeInfo) (&mdb__interactive_query__term__ti_term_1term__type_ctor_info_generic_0),
  (MR_PseudoTypeInfo) (&mdb__interactive_query__varset__ti_varset_1term__type_ctor_info_generic_0)
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

static const MR_DuArgLocn mdb__interactive_query__mdb__interactive_query__field_locns_prog_0_0[7] = {
  {
    (MR_Integer) 0,
    (MR_Integer) 0,
    (MR_Integer) 2
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
  },
  {
    (MR_Integer) 6,
    (MR_Integer) 0,
    (MR_Integer) 0
  }
};

static const MR_DuFunctorDesc mdb__interactive_query__mdb__interactive_query__du_functor_desc_prog_0_0 = {
  (MR_String) "prog",
  INT16_C(7),
  UINT16_C(0),
  MR_SECTAG_NONE,
  UINT8_C(0),
  (MR_Integer) -1,
  INT32_C(0),
  mdb__interactive_query__mdb__interactive_query__field_types_prog_0_0,
  mdb__interactive_query__mdb__interactive_query__field_names_prog_0_0,
  mdb__interactive_query__mdb__interactive_query__field_locns_prog_0_0,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE,
  UINT8_C(0)
};

static const MR_DuFunctorDescPtr mdb__interactive_query__mdb__interactive_query__du_stag_ordered_prog_0_0[1] = {
  &mdb__interactive_query__mdb__interactive_query__du_functor_desc_prog_0_0
};

static const MR_DuPtagLayout mdb__interactive_query__mdb__interactive_query__du_ptag_ordered_prog_0[1] = {
  {
    UINT32_C(1),
    MR_SECTAG_NONE,
    mdb__interactive_query__mdb__interactive_query__du_stag_ordered_prog_0_0,
    INT8_C(-1),
    UINT8_C(0),
    UINT8_C(1)
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
  UINT8_C(18),
  INT8_C(1),
  MR_TYPECTOR_REP_DU,
  ((MR_Box) (mdb__interactive_query____Unify____prog_0_0_10001)),
  ((MR_Box) (mdb__interactive_query____Compare____prog_0_0_10001)),
  (MR_String) "mdb.interactive_query",
  (MR_String) "prog",
  { mdb__interactive_query__mdb__interactive_query__du_name_ordered_prog_0 },
  { mdb__interactive_query__mdb__interactive_query__du_ptag_ordered_prog_0 },
  (MR_Integer) 1,
  UINT16_C(12),
  mdb__interactive_query__mdb__interactive_query__functor_number_map_prog_0,

};

static const MR_DuFunctorDesc mdb__interactive_query__mdb__interactive_query__du_functor_desc_query_command_0_0 = {
  (MR_String) "qc_quit",
  INT16_C(0),
  UINT16_C(0),
  MR_SECTAG_LOCAL_REST_OF_WORD,
  UINT8_C(0),
  (MR_Integer) 0,
  INT32_C(0),
  NULL,
  NULL,
  NULL,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE,
  UINT8_C(0)
};

static const MR_PseudoTypeInfo mdb__interactive_query__mdb__interactive_query__field_types_query_command_0_1[1] = {
  (MR_PseudoTypeInfo) (&mercury__builtin__builtin__type_ctor_info_string_0)
};

static const MR_DuFunctorDesc mdb__interactive_query__mdb__interactive_query__du_functor_desc_query_command_0_1 = {
  (MR_String) "qc_options",
  INT16_C(1),
  UINT16_C(0),
  MR_SECTAG_NONE,
  UINT8_C(1),
  (MR_Integer) -1,
  INT32_C(1),
  mdb__interactive_query__mdb__interactive_query__field_types_query_command_0_1,
  NULL,
  NULL,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE,
  UINT8_C(0)
};

static const MR_PseudoTypeInfo mdb__interactive_query__mdb__interactive_query__field_types_query_command_0_2[1] = {
  (MR_PseudoTypeInfo) (&mdb__interactive_query__list__ti_list_1builtin__type_ctor_info_string_0)
};

static const MR_DuFunctorDesc mdb__interactive_query__mdb__interactive_query__du_functor_desc_query_command_0_2 = {
  (MR_String) "qc_imports",
  INT16_C(1),
  UINT16_C(0),
  MR_SECTAG_NONE,
  UINT8_C(2),
  (MR_Integer) -1,
  INT32_C(2),
  mdb__interactive_query__mdb__interactive_query__field_types_query_command_0_2,
  NULL,
  NULL,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE,
  UINT8_C(0)
};

static const MR_DuFunctorDesc mdb__interactive_query__mdb__interactive_query__du_functor_desc_query_command_0_3 = {
  (MR_String) "qc_goal",
  INT16_C(0),
  UINT16_C(0),
  MR_SECTAG_LOCAL_REST_OF_WORD,
  UINT8_C(0),
  (MR_Integer) 1,
  INT32_C(3),
  NULL,
  NULL,
  NULL,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE,
  UINT8_C(0)
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
    UINT32_C(2),
    MR_SECTAG_LOCAL_REST_OF_WORD,
    mdb__interactive_query__mdb__interactive_query__du_stag_ordered_query_command_0_0,
    INT8_C(-1),
    UINT8_C(0),
    UINT8_C(1)
  },
  {
    UINT32_C(1),
    MR_SECTAG_NONE,
    mdb__interactive_query__mdb__interactive_query__du_stag_ordered_query_command_0_1,
    INT8_C(-1),
    UINT8_C(1),
    UINT8_C(1)
  },
  {
    UINT32_C(1),
    MR_SECTAG_NONE,
    mdb__interactive_query__mdb__interactive_query__du_stag_ordered_query_command_0_2,
    INT8_C(-1),
    UINT8_C(2),
    UINT8_C(1)
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
  UINT8_C(18),
  INT8_C(3),
  MR_TYPECTOR_REP_DU,
  ((MR_Box) (mdb__interactive_query____Unify____query_command_0_0_10001)),
  ((MR_Box) (mdb__interactive_query____Compare____query_command_0_0_10001)),
  (MR_String) "mdb.interactive_query",
  (MR_String) "query_command",
  { mdb__interactive_query__mdb__interactive_query__du_name_ordered_query_command_0 },
  { mdb__interactive_query__mdb__interactive_query__du_ptag_ordered_query_command_0 },
  (MR_Integer) 4,
  UINT16_C(12),
  mdb__interactive_query__mdb__interactive_query__functor_number_map_query_command_0,

};

static const MR_PseudoTypeInfo mdb__interactive_query__mdb__interactive_query__field_types_query_env_0_0[6] = {
  (MR_PseudoTypeInfo) (&mdb__interactive_query__mdb__interactive_query__type_ctor_info_query_type_0),
  (MR_PseudoTypeInfo) (&mdb__interactive_query__list__ti_list_1builtin__type_ctor_info_string_0),
  (MR_PseudoTypeInfo) (&mercury__builtin__builtin__type_ctor_info_string_0),
  (MR_PseudoTypeInfo) (&mdb__interactive_query__tree234__ti_tree234_2builtin__type_ctor_info_string_0univ__type_ctor_info_univ_0),
  (MR_PseudoTypeInfo) (&mercury__io__io__type_ctor_info_input_stream_0),
  (MR_PseudoTypeInfo) (&mercury__io__io__type_ctor_info_output_stream_0)
};

static const MR_ConstString mdb__interactive_query__mdb__interactive_query__field_names_query_env_0_0[6] = {
  (MR_String) "qe_query_type",
  (MR_String) "qe_imports",
  (MR_String) "qe_options",
  (MR_String) "qe_bindings",
  (MR_String) "qe_instream",
  (MR_String) "qe_outstream"
};

static const MR_DuArgLocn mdb__interactive_query__mdb__interactive_query__field_locns_query_env_0_0[6] = {
  {
    (MR_Integer) 0,
    (MR_Integer) 0,
    (MR_Integer) 2
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

static const MR_DuFunctorDesc mdb__interactive_query__mdb__interactive_query__du_functor_desc_query_env_0_0 = {
  (MR_String) "query_env",
  INT16_C(6),
  UINT16_C(0),
  MR_SECTAG_NONE,
  UINT8_C(0),
  (MR_Integer) -1,
  INT32_C(0),
  mdb__interactive_query__mdb__interactive_query__field_types_query_env_0_0,
  mdb__interactive_query__mdb__interactive_query__field_names_query_env_0_0,
  mdb__interactive_query__mdb__interactive_query__field_locns_query_env_0_0,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE,
  UINT8_C(0)
};

static const MR_DuFunctorDescPtr mdb__interactive_query__mdb__interactive_query__du_stag_ordered_query_env_0_0[1] = {
  &mdb__interactive_query__mdb__interactive_query__du_functor_desc_query_env_0_0
};

static const MR_DuPtagLayout mdb__interactive_query__mdb__interactive_query__du_ptag_ordered_query_env_0[1] = {
  {
    UINT32_C(1),
    MR_SECTAG_NONE,
    mdb__interactive_query__mdb__interactive_query__du_stag_ordered_query_env_0_0,
    INT8_C(-1),
    UINT8_C(0),
    UINT8_C(1)
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
  UINT8_C(18),
  INT8_C(1),
  MR_TYPECTOR_REP_DU,
  ((MR_Box) (mdb__interactive_query____Unify____query_env_0_0_10001)),
  ((MR_Box) (mdb__interactive_query____Compare____query_env_0_0_10001)),
  (MR_String) "mdb.interactive_query",
  (MR_String) "query_env",
  { mdb__interactive_query__mdb__interactive_query__du_name_ordered_query_env_0 },
  { mdb__interactive_query__mdb__interactive_query__du_ptag_ordered_query_env_0 },
  (MR_Integer) 1,
  UINT16_C(12),
  mdb__interactive_query__mdb__interactive_query__functor_number_map_query_env_0,

};

static const MR_EnumFunctorDesc mdb__interactive_query__mdb__interactive_query__enum_functor_desc_query_type_0_0 = {
  (MR_String) "normal_query",
  INT32_C(0)
};

static const MR_EnumFunctorDesc mdb__interactive_query__mdb__interactive_query__enum_functor_desc_query_type_0_1 = {
  (MR_String) "cc_query",
  INT32_C(1)
};

static const MR_EnumFunctorDesc mdb__interactive_query__mdb__interactive_query__enum_functor_desc_query_type_0_2 = {
  (MR_String) "io_query",
  INT32_C(2)
};

static const MR_EnumFunctorDescPtr mdb__interactive_query__mdb__interactive_query__enum_ordinal_ordered_query_type_0[3] = {
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
  UINT8_C(18),
  INT8_C(-1),
  MR_TYPECTOR_REP_ENUM,
  ((MR_Box) (mdb__interactive_query____Unify____query_type_0_0_10001)),
  ((MR_Box) (mdb__interactive_query____Compare____query_type_0_0_10001)),
  (MR_String) "mdb.interactive_query",
  (MR_String) "query_type",
  { mdb__interactive_query__mdb__interactive_query__enum_name_ordered_query_type_0 },
  { mdb__interactive_query__mdb__interactive_query__enum_ordinal_ordered_query_type_0 },
  (MR_Integer) 3,
  UINT16_C(12),
  mdb__interactive_query__mdb__interactive_query__functor_number_map_query_type_0,

};

static const MR_VA_TypeInfo_Struct3 mdb__interactive_query____vti_pred_3tree234__ti_tree234_2builtin__type_ctor_info_string_0univ__type_ctor_info_univ_0tree234__ti_tree234_2builtin__type_ctor_info_string_0univ__type_ctor_info_univ_0bool__type_ctor_info_bool_0 = {
  &mercury__builtin__builtin__type_ctor_info_pred_0,
  (MR_Integer) 3,
  {
    (MR_TypeInfo) (&mdb__interactive_query__tree234__ti_tree234_2builtin__type_ctor_info_string_0univ__type_ctor_info_univ_0),
    (MR_TypeInfo) (&mdb__interactive_query__tree234__ti_tree234_2builtin__type_ctor_info_string_0univ__type_ctor_info_univ_0),
    (MR_TypeInfo) (&mercury__bool__bool__type_ctor_info_bool_0)
  }
};

const MR_TypeCtorInfo_Struct mdb__interactive_query__mdb__interactive_query__type_ctor_info_run_cc_pred_0 = {
  (MR_Integer) 0,
  UINT8_C(18),
  INT8_C(-1),
  MR_TYPECTOR_REP_EQUIV_GROUND,
  ((MR_Box) (mdb__interactive_query____Unify____run_cc_pred_0_0_10001)),
  ((MR_Box) (mdb__interactive_query____Compare____run_cc_pred_0_0_10001)),
  (MR_String) "mdb.interactive_query",
  (MR_String) "run_cc_pred",
  { NULL },
  { (MR_PseudoTypeInfo) (&mdb__interactive_query____vti_pred_3tree234__ti_tree234_2builtin__type_ctor_info_string_0univ__type_ctor_info_univ_0tree234__ti_tree234_2builtin__type_ctor_info_string_0univ__type_ctor_info_univ_0bool__type_ctor_info_bool_0) },
  (MR_Integer) -1,
  UINT16_C(0),
  NULL,

};

static const MR_VA_TypeInfo_Struct5 mdb__interactive_query____vti_pred_5tree234__ti_tree234_2builtin__type_ctor_info_string_0univ__type_ctor_info_univ_0tree234__ti_tree234_2builtin__type_ctor_info_string_0univ__type_ctor_info_univ_0bool__type_ctor_info_bool_0io__type_ctor_info_state_0io__type_ctor_info_state_0 = {
  &mercury__builtin__builtin__type_ctor_info_pred_0,
  (MR_Integer) 5,
  {
    (MR_TypeInfo) (&mdb__interactive_query__tree234__ti_tree234_2builtin__type_ctor_info_string_0univ__type_ctor_info_univ_0),
    (MR_TypeInfo) (&mdb__interactive_query__tree234__ti_tree234_2builtin__type_ctor_info_string_0univ__type_ctor_info_univ_0),
    (MR_TypeInfo) (&mercury__bool__bool__type_ctor_info_bool_0),
    (MR_TypeInfo) (&mercury__io__io__type_ctor_info_state_0),
    (MR_TypeInfo) (&mercury__io__io__type_ctor_info_state_0)
  }
};

const MR_TypeCtorInfo_Struct mdb__interactive_query__mdb__interactive_query__type_ctor_info_run_io_pred_0 = {
  (MR_Integer) 0,
  UINT8_C(18),
  INT8_C(-1),
  MR_TYPECTOR_REP_EQUIV_GROUND,
  ((MR_Box) (mdb__interactive_query____Unify____run_io_pred_0_0_10001)),
  ((MR_Box) (mdb__interactive_query____Compare____run_io_pred_0_0_10001)),
  (MR_String) "mdb.interactive_query",
  (MR_String) "run_io_pred",
  { NULL },
  { (MR_PseudoTypeInfo) (&mdb__interactive_query____vti_pred_5tree234__ti_tree234_2builtin__type_ctor_info_string_0univ__type_ctor_info_univ_0tree234__ti_tree234_2builtin__type_ctor_info_string_0univ__type_ctor_info_univ_0bool__type_ctor_info_bool_0io__type_ctor_info_state_0io__type_ctor_info_state_0) },
  (MR_Integer) -1,
  UINT16_C(0),
  NULL,

};

const MR_TypeCtorInfo_Struct mdb__interactive_query__mdb__interactive_query__type_ctor_info_run_normal_pred_0 = {
  (MR_Integer) 0,
  UINT8_C(18),
  INT8_C(-1),
  MR_TYPECTOR_REP_EQUIV_GROUND,
  ((MR_Box) (mdb__interactive_query____Unify____run_normal_pred_0_0_10001)),
  ((MR_Box) (mdb__interactive_query____Compare____run_normal_pred_0_0_10001)),
  (MR_String) "mdb.interactive_query",
  (MR_String) "run_normal_pred",
  { NULL },
  { (MR_PseudoTypeInfo) (&mdb__interactive_query____vti_pred_3tree234__ti_tree234_2builtin__type_ctor_info_string_0univ__type_ctor_info_univ_0tree234__ti_tree234_2builtin__type_ctor_info_string_0univ__type_ctor_info_univ_0bool__type_ctor_info_bool_0) },
  (MR_Integer) -1,
  UINT16_C(0),
  NULL,

};

static const MR_DuFunctorDesc mdb__interactive_query__mdb__interactive_query__du_functor_desc_solution_0_0 = {
  (MR_String) "load_failure",
  INT16_C(0),
  UINT16_C(0),
  MR_SECTAG_LOCAL_REST_OF_WORD,
  UINT8_C(0),
  (MR_Integer) 0,
  INT32_C(0),
  NULL,
  NULL,
  NULL,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE,
  UINT8_C(0)
};

static const MR_PseudoTypeInfo mdb__interactive_query__mdb__interactive_query__field_types_solution_0_1[1] = {
  (MR_PseudoTypeInfo) (&mdb__interactive_query__tree234__ti_tree234_2builtin__type_ctor_info_string_0univ__type_ctor_info_univ_0)
};

static const MR_DuFunctorDesc mdb__interactive_query__mdb__interactive_query__du_functor_desc_solution_0_1 = {
  (MR_String) "solution",
  INT16_C(1),
  UINT16_C(0),
  MR_SECTAG_NONE,
  UINT8_C(1),
  (MR_Integer) -1,
  INT32_C(1),
  mdb__interactive_query__mdb__interactive_query__field_types_solution_0_1,
  NULL,
  NULL,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE,
  UINT8_C(0)
};

static const MR_DuFunctorDescPtr mdb__interactive_query__mdb__interactive_query__du_stag_ordered_solution_0_0[1] = {
  &mdb__interactive_query__mdb__interactive_query__du_functor_desc_solution_0_0
};

static const MR_DuFunctorDescPtr mdb__interactive_query__mdb__interactive_query__du_stag_ordered_solution_0_1[1] = {
  &mdb__interactive_query__mdb__interactive_query__du_functor_desc_solution_0_1
};

static const MR_DuPtagLayout mdb__interactive_query__mdb__interactive_query__du_ptag_ordered_solution_0[2] = {
  {
    UINT32_C(1),
    MR_SECTAG_LOCAL_REST_OF_WORD,
    mdb__interactive_query__mdb__interactive_query__du_stag_ordered_solution_0_0,
    INT8_C(-1),
    UINT8_C(0),
    UINT8_C(1)
  },
  {
    UINT32_C(1),
    MR_SECTAG_NONE,
    mdb__interactive_query__mdb__interactive_query__du_stag_ordered_solution_0_1,
    INT8_C(-1),
    UINT8_C(1),
    UINT8_C(1)
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
  UINT8_C(18),
  INT8_C(2),
  MR_TYPECTOR_REP_DU,
  ((MR_Box) (mdb__interactive_query____Unify____solution_0_0_10001)),
  ((MR_Box) (mdb__interactive_query____Compare____solution_0_0_10001)),
  (MR_String) "mdb.interactive_query",
  (MR_String) "solution",
  { mdb__interactive_query__mdb__interactive_query__du_name_ordered_solution_0 },
  { mdb__interactive_query__mdb__interactive_query__du_ptag_ordered_solution_0 },
  (MR_Integer) 2,
  UINT16_C(12),
  mdb__interactive_query__mdb__interactive_query__functor_number_map_solution_0,

};

static void MR_CALL 
mdb__interactive_query__IntroducedFrom__pred__write_prog_to_stream__484__1_4_p_0(
  MR_Word OutputStream_6,
  MR_String LambdaHeadVar__1_126)
{
  mdb__interactive_query__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_73_110_116_114_111_100_117_99_101_100_70_114_111_109_95_95_112_114_101_100_95_95_119_114_105_116_101_95_112_114_111_103_95_116_111_95_115_116_114_101_97_109_95_95_52_56_52_95_95_49_95_95_91_50_93_95_48_4_p_0(OutputStream_6);
}

static void MR_CALL 
mdb__interactive_query__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_73_110_116_114_111_100_117_99_101_100_70_114_111_109_95_95_112_114_101_100_95_95_119_114_105_116_101_95_112_114_111_103_95_116_111_95_115_116_114_101_97_109_95_95_52_56_52_95_95_49_95_95_91_50_93_95_48_4_p_0(
  MR_Word OutputStream_6)
{
  mercury__io__write_string_4_p_0(OutputStream_6, (MR_String) ", out");
}

static MR_bool MR_CALL 
mdb__interactive_query__IntroducedFrom__pred__make_program__390__1_1_p_0(
  MR_String LambdaHeadVar__1_21)
{
  MR_bool succeeded;
  MR_Char Var_56;

  succeeded = mercury__string__index_3_p_0(LambdaHeadVar__1_21, (MR_Integer) 0, &Var_56);
  if (succeeded)
    succeeded = ((MR_Char) 95 == Var_56);
  succeeded = !(succeeded);
  return succeeded;
}

static MR_bool MR_CALL 
mdb__interactive_query__IntroducedFrom__pred__make_program__385__1_2_p_0(
  MR_Word HeadVar__1_19,
  MR_String HeadVar__2_53)
{
  MR_bool succeeded;

  succeeded = mercury__map__contains_2_p_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), (MR_Word) (&mercury__univ__univ__type_ctor_info_univ_0), HeadVar__1_19, ((MR_Box) (HeadVar__2_53)));
  return succeeded;
}

static MR_bool MR_CALL 
mdb__interactive_query__IntroducedFrom__pred__make_program__384__1_3_p_0(
  MR_Word Varset_7,
  MR_Word HeadVar__2_49,
  MR_String * HeadVar__3_50)
{
  MR_bool succeeded;

  succeeded = mercury__varset__search_name_3_p_0((MR_Word) (&mercury__term__term__type_ctor_info_generic_0), Varset_7, HeadVar__2_49, HeadVar__3_50);
  return succeeded;
}

static void MR_CALL 
mdb__interactive_query____Compare____solution_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3)
{
  MR_bool succeeded;
  MR_Integer CastX_8 = (MR_Integer) (HeadVar__2_2);
  MR_Integer CastY_9 = (MR_Integer) (HeadVar__3_3);

  succeeded = (CastX_8 == CastY_9);
  if (succeeded)
    *HeadVar__1_1 = (MR_Integer) 0;
  else
  if ((HeadVar__2_2 == (MR_Word) ((MR_Unsigned) 0U)))
    if ((HeadVar__3_3 == (MR_Word) ((MR_Unsigned) 0U)))
      *HeadVar__1_1 = (MR_Integer) 0;
    else
      *HeadVar__1_1 = (MR_Integer) 1;
  else
  {
    MR_Word Var_11 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__2_2, (MR_Integer) 0))));

    if ((HeadVar__3_3 == (MR_Word) ((MR_Unsigned) 0U)))
      *HeadVar__1_1 = (MR_Integer) 2;
    else
    {
      MR_Word ArgY1_7 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__3_3, (MR_Integer) 0))));

      mercury__builtin__compare_3_p_0((MR_Word) (&mdb__interactive_query_scalar_common_2[1]), HeadVar__1_1, ((MR_Box) (Var_11)), ((MR_Box) (ArgY1_7)));
    }
  }
}

static MR_bool MR_CALL 
mdb__interactive_query____Unify____solution_0_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2)
{
  MR_bool succeeded;
  MR_Integer CastX_7 = (MR_Integer) (HeadVar__1_1);
  MR_Integer CastY_8 = (MR_Integer) (HeadVar__2_2);

  succeeded = (CastX_7 == CastY_8);
  if (succeeded)
    succeeded = MR_TRUE;
  else
  if ((HeadVar__1_1 == (MR_Word) ((MR_Unsigned) 0U)))
  {
    MR_Integer CastX_3 = (MR_Integer) (HeadVar__1_1);
    MR_Integer CastY_4 = (MR_Integer) (HeadVar__2_2);

    succeeded = (CastY_4 == CastX_3);
  }
  else
  {
    MR_Word TypeInfo_9_9;
    MR_Word ArgX1_5 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 0))));
    MR_Word ArgY1_6;

    succeeded = (HeadVar__2_2 != (MR_Word) ((MR_Unsigned) 0U));
    if (succeeded)
    {
      ArgY1_6 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__2_2, (MR_Integer) 0))));
      TypeInfo_9_9 = (MR_Word) (&mdb__interactive_query_scalar_common_2[1]);
      succeeded = mercury__builtin__unify_2_p_0(TypeInfo_9_9, ((MR_Box) (ArgX1_5)), ((MR_Box) (ArgY1_6)));
    }
  }
  return succeeded;
}

static void MR_CALL 
mdb__interactive_query____Compare____run_normal_pred_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3)
{
  MR_Word Cast_HeadVar1_4 = HeadVar__2_2;
  MR_Word Cast_HeadVar2_5 = HeadVar__3_3;

  mercury__builtin__compare_3_p_0((MR_Word) (&mdb__interactive_query_scalar_common_4[2]), HeadVar__1_1, ((MR_Box) (Cast_HeadVar1_4)), ((MR_Box) (Cast_HeadVar2_5)));
}

static MR_bool MR_CALL 
mdb__interactive_query____Unify____run_normal_pred_0_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2)
{
  MR_bool succeeded;
  MR_Word Cast_HeadVar1_3 = HeadVar__1_1;
  MR_Word Cast_HeadVar2_4 = HeadVar__2_2;

  succeeded = mercury__private_builtin__builtin_unify_pred_2_p_0((MR_Word) (Cast_HeadVar1_3), (MR_Word) (Cast_HeadVar2_4));
  return succeeded;
}

static void MR_CALL 
mdb__interactive_query____Compare____run_io_pred_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3)
{
  MR_Word Cast_HeadVar1_4 = HeadVar__2_2;
  MR_Word Cast_HeadVar2_5 = HeadVar__3_3;

  mercury__builtin__compare_3_p_0((MR_Word) (&mdb__interactive_query_scalar_common_5[0]), HeadVar__1_1, ((MR_Box) (Cast_HeadVar1_4)), ((MR_Box) (Cast_HeadVar2_5)));
}

static MR_bool MR_CALL 
mdb__interactive_query____Unify____run_io_pred_0_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2)
{
  MR_bool succeeded;
  MR_Word Cast_HeadVar1_3 = HeadVar__1_1;
  MR_Word Cast_HeadVar2_4 = HeadVar__2_2;

  succeeded = mercury__private_builtin__builtin_unify_pred_2_p_0((MR_Word) (Cast_HeadVar1_3), (MR_Word) (Cast_HeadVar2_4));
  return succeeded;
}

static void MR_CALL 
mdb__interactive_query____Compare____run_cc_pred_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3)
{
  MR_Word Cast_HeadVar1_4 = HeadVar__2_2;
  MR_Word Cast_HeadVar2_5 = HeadVar__3_3;

  mercury__builtin__compare_3_p_0((MR_Word) (&mdb__interactive_query_scalar_common_4[2]), HeadVar__1_1, ((MR_Box) (Cast_HeadVar1_4)), ((MR_Box) (Cast_HeadVar2_5)));
}

static MR_bool MR_CALL 
mdb__interactive_query____Unify____run_cc_pred_0_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2)
{
  MR_bool succeeded;
  MR_Word Cast_HeadVar1_3 = HeadVar__1_1;
  MR_Word Cast_HeadVar2_4 = HeadVar__2_2;

  succeeded = mercury__private_builtin__builtin_unify_pred_2_p_0((MR_Word) (Cast_HeadVar1_3), (MR_Word) (Cast_HeadVar2_4));
  return succeeded;
}

void MR_CALL 
mdb__interactive_query____Compare____query_type_0_0(
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
mdb__interactive_query____Unify____query_type_0_0(
  MR_Word HeadVar__2_1,
  MR_Word HeadVar__2_2)
{
  MR_bool succeeded = (HeadVar__2_1 == HeadVar__2_2);

  return succeeded;
}

static void MR_CALL 
mdb__interactive_query____Compare____query_env_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3)
{
  MR_bool succeeded;
  MR_Integer CastX_21 = (MR_Integer) (HeadVar__2_2);
  MR_Integer CastY_22 = (MR_Integer) (HeadVar__3_3);

  succeeded = (CastX_21 == CastY_22);
  if (succeeded)
    *HeadVar__1_1 = (MR_Integer) 0;
  else
  {
    MR_Word ArgX1_4 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 0))) & (MR_Integer) 3);
    MR_Word ArgY1_5 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(0), HeadVar__3_3, (MR_Integer) 0))) & (MR_Integer) 3);
    MR_Word ArgX2_7 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 1))));
    MR_Word ArgY2_8 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__3_3, (MR_Integer) 1))));
    MR_String ArgX3_10 = ((MR_String) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 2))));
    MR_String ArgY3_11 = ((MR_String) ((MR_hl_field(MR_mktag(0), HeadVar__3_3, (MR_Integer) 2))));
    MR_Word ArgX4_13 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 3))));
    MR_Word ArgY4_14 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__3_3, (MR_Integer) 3))));
    MR_Word ArgX5_16 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 4))));
    MR_Word ArgY5_17 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__3_3, (MR_Integer) 4))));
    MR_Word ArgX6_19 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 5))));
    MR_Word ArgY6_20 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__3_3, (MR_Integer) 5))));
    MR_Word SubResult1_6;
    MR_Integer Var_29 = (MR_Integer) (ArgX1_4);
    MR_Integer Var_30 = (MR_Integer) (ArgY1_5);

    succeeded = (Var_29 < Var_30);
    if (succeeded)
    {
      SubResult1_6 = (MR_Integer) 1;
      succeeded = MR_TRUE;
    }
    else
    {
      succeeded = (Var_29 > Var_30);
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

      mercury__builtin__compare_3_p_0((MR_Word) (&mdb__interactive_query_scalar_common_1[1]), &SubResult2_9, ((MR_Box) (ArgX2_7)), ((MR_Box) (ArgY2_8)));
      succeeded = (SubResult2_9 != (MR_Integer) 0);
      if (succeeded)
        *HeadVar__1_1 = SubResult2_9;
      else
      {
        MR_Word SubResult3_12;

        mercury__private_builtin__builtin_compare_string_3_p_0(&SubResult3_12, ArgX3_10, ArgY3_11);
        succeeded = (SubResult3_12 != (MR_Integer) 0);
        if (succeeded)
          *HeadVar__1_1 = SubResult3_12;
        else
        {
          MR_Word SubResult4_15;

          mercury__builtin__compare_3_p_0((MR_Word) (&mdb__interactive_query_scalar_common_2[1]), &SubResult4_15, ((MR_Box) (ArgX4_13)), ((MR_Box) (ArgY4_14)));
          succeeded = (SubResult4_15 != (MR_Integer) 0);
          if (succeeded)
            *HeadVar__1_1 = SubResult4_15;
          else
          {
            MR_Word SubResult5_18;

            mercury__io____Compare____input_stream_0_0(&SubResult5_18, ArgX5_16, ArgY5_17);
            succeeded = (SubResult5_18 != (MR_Integer) 0);
            if (succeeded)
              *HeadVar__1_1 = SubResult5_18;
            else
              mercury__io____Compare____output_stream_0_0(HeadVar__1_1, ArgX6_19, ArgY6_20);
          }
        }
      }
    }
  }
}

static MR_bool MR_CALL 
mdb__interactive_query____Unify____query_env_0_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2)
{
  MR_bool succeeded;
  MR_Integer CastX_15 = (MR_Integer) (HeadVar__1_1);
  MR_Integer CastY_16 = (MR_Integer) (HeadVar__2_2);

  succeeded = (CastX_15 == CastY_16);
  if (succeeded)
    succeeded = MR_TRUE;
  else
  {
    MR_Word TypeInfo_17_17;
    MR_Word TypeInfo_18_18;
    MR_Word ArgX1_3 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(0), HeadVar__1_1, (MR_Integer) 0))) & (MR_Integer) 3);
    MR_Word ArgY1_4 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 0))) & (MR_Integer) 3);
    MR_Word ArgX2_5 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__1_1, (MR_Integer) 1))));
    MR_Word ArgY2_6 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 1))));
    MR_String ArgX3_7 = ((MR_String) ((MR_hl_field(MR_mktag(0), HeadVar__1_1, (MR_Integer) 2))));
    MR_String ArgY3_8 = ((MR_String) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 2))));
    MR_Word ArgX4_9 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__1_1, (MR_Integer) 3))));
    MR_Word ArgY4_10 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 3))));
    MR_Word ArgX5_11 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__1_1, (MR_Integer) 4))));
    MR_Word ArgY5_12 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 4))));
    MR_Word ArgX6_13 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__1_1, (MR_Integer) 5))));
    MR_Word ArgY6_14 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 5))));

    succeeded = (ArgX1_3 == ArgY1_4);
    if (succeeded)
    {
      TypeInfo_17_17 = (MR_Word) (&mdb__interactive_query_scalar_common_1[1]);
      succeeded = mercury__builtin__unify_2_p_0(TypeInfo_17_17, ((MR_Box) (ArgX2_5)), ((MR_Box) (ArgY2_6)));
      if (succeeded)
      {
        succeeded = (strcmp(ArgX3_7, ArgY3_8) == 0);
        if (succeeded)
        {
          TypeInfo_18_18 = (MR_Word) (&mdb__interactive_query_scalar_common_2[1]);
          succeeded = mercury__builtin__unify_2_p_0(TypeInfo_18_18, ((MR_Box) (ArgX4_9)), ((MR_Box) (ArgY4_10)));
          if (succeeded)
          {
            succeeded = mercury__io____Unify____input_stream_0_0(ArgX5_11, ArgY5_12);
            if (succeeded)
              succeeded = mercury__io____Unify____output_stream_0_0(ArgX6_13, ArgY6_14);
          }
        }
      }
    }
  }
  return succeeded;
}

static void MR_CALL 
mdb__interactive_query____Compare____query_command_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3)
{
  MR_bool succeeded;
  MR_Integer CastX_20 = (MR_Integer) (HeadVar__2_2);
  MR_Integer CastY_21 = (MR_Integer) (HeadVar__3_3);

  succeeded = (CastX_20 == CastY_21);
  if (succeeded)
    *HeadVar__1_1 = (MR_Integer) 0;
  else
    switch (MR_tag((MR_Word) HeadVar__2_2)) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        switch (MR_unmkbody(HeadVar__2_2)) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
            switch (MR_tag((MR_Word) HeadVar__3_3)) {
              default: /*NOTREACHED*/ MR_assert(0);
              case (MR_Integer) 0:
                switch (MR_unmkbody(HeadVar__3_3)) {
                  default: /*NOTREACHED*/ MR_assert(0);
                  case (MR_Integer) 0:
                    *HeadVar__1_1 = (MR_Integer) 0;
                    break;
                  case (MR_Integer) 1:
                    *HeadVar__1_1 = (MR_Integer) 1;
                    break;
                }
                break;
              case (MR_Integer) 1:
                *HeadVar__1_1 = (MR_Integer) 1;
                break;
              case (MR_Integer) 2:
                *HeadVar__1_1 = (MR_Integer) 1;
                break;
            }
            break;
          case (MR_Integer) 1:
            switch (MR_tag((MR_Word) HeadVar__3_3)) {
              default: /*NOTREACHED*/ MR_assert(0);
              case (MR_Integer) 0:
                switch (MR_unmkbody(HeadVar__3_3)) {
                  default: /*NOTREACHED*/ MR_assert(0);
                  case (MR_Integer) 0:
                    *HeadVar__1_1 = (MR_Integer) 2;
                    break;
                  case (MR_Integer) 1:
                    *HeadVar__1_1 = (MR_Integer) 0;
                    break;
                }
                break;
              case (MR_Integer) 1:
                *HeadVar__1_1 = (MR_Integer) 2;
                break;
              case (MR_Integer) 2:
                *HeadVar__1_1 = (MR_Integer) 2;
                break;
            }
            break;
        }
        break;
      case (MR_Integer) 1:
        {
          MR_String Var_25 = ((MR_String) ((MR_hl_field(MR_mktag(1), HeadVar__2_2, (MR_Integer) 0))));

          switch (MR_tag((MR_Word) HeadVar__3_3)) {
            default: /*NOTREACHED*/ MR_assert(0);
            case (MR_Integer) 0:
              switch (MR_unmkbody(HeadVar__3_3)) {
                default: /*NOTREACHED*/ MR_assert(0);
                case (MR_Integer) 0:
                  *HeadVar__1_1 = (MR_Integer) 2;
                  break;
                case (MR_Integer) 1:
                  *HeadVar__1_1 = (MR_Integer) 1;
                  break;
              }
              break;
            case (MR_Integer) 1:
              {
                MR_String ArgY1_8 = ((MR_String) ((MR_hl_field(MR_mktag(1), HeadVar__3_3, (MR_Integer) 0))));

                mercury__private_builtin__builtin_compare_string_3_p_0(HeadVar__1_1, Var_25, ArgY1_8);
              }
              break;
            case (MR_Integer) 2:
              *HeadVar__1_1 = (MR_Integer) 1;
              break;
          }
        }
        break;
      case (MR_Integer) 2:
        {
          MR_Word Var_24 = ((MR_Word) ((MR_hl_field(MR_mktag(2), HeadVar__2_2, (MR_Integer) 0))));

          switch (MR_tag((MR_Word) HeadVar__3_3)) {
            default: /*NOTREACHED*/ MR_assert(0);
            case (MR_Integer) 0:
              switch (MR_unmkbody(HeadVar__3_3)) {
                default: /*NOTREACHED*/ MR_assert(0);
                case (MR_Integer) 0:
                  *HeadVar__1_1 = (MR_Integer) 2;
                  break;
                case (MR_Integer) 1:
                  *HeadVar__1_1 = (MR_Integer) 1;
                  break;
              }
              break;
            case (MR_Integer) 1:
              *HeadVar__1_1 = (MR_Integer) 2;
              break;
            case (MR_Integer) 2:
              {
                MR_Word ArgY1_16 = ((MR_Word) ((MR_hl_field(MR_mktag(2), HeadVar__3_3, (MR_Integer) 0))));

                mercury__builtin__compare_3_p_0((MR_Word) (&mdb__interactive_query_scalar_common_1[1]), HeadVar__1_1, ((MR_Box) (Var_24)), ((MR_Box) (ArgY1_16)));
              }
              break;
          }
        }
        break;
    }
}

static MR_bool MR_CALL 
mdb__interactive_query____Unify____query_command_0_0(
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
    switch (MR_tag((MR_Word) HeadVar__1_1)) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        switch (MR_unmkbody(HeadVar__1_1)) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
            {
              MR_Integer CastX_3 = (MR_Integer) (HeadVar__1_1);
              MR_Integer CastY_4 = (MR_Integer) (HeadVar__2_2);

              succeeded = (CastY_4 == CastX_3);
            }
            break;
          case (MR_Integer) 1:
            {
              MR_Integer CastX_9 = (MR_Integer) (HeadVar__1_1);
              MR_Integer CastY_10 = (MR_Integer) (HeadVar__2_2);

              succeeded = (CastY_10 == CastX_9);
            }
            break;
        }
        break;
      case (MR_Integer) 1:
        {
          MR_String ArgX1_5 = ((MR_String) ((MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 0))));
          MR_String ArgY1_6;

          succeeded = ((MR_tag((MR_Word) HeadVar__2_2)) == (MR_Integer) 1);
          if (succeeded)
          {
            ArgY1_6 = ((MR_String) ((MR_hl_field(MR_mktag(1), HeadVar__2_2, (MR_Integer) 0))));
            succeeded = (strcmp(ArgX1_5, ArgY1_6) == 0);
          }
        }
        break;
      case (MR_Integer) 2:
        {
          MR_Word TypeInfo_13_13;
          MR_Word ArgX1_7 = ((MR_Word) ((MR_hl_field(MR_mktag(2), HeadVar__1_1, (MR_Integer) 0))));
          MR_Word ArgY1_8;

          succeeded = ((MR_tag((MR_Word) HeadVar__2_2)) == (MR_Integer) 2);
          if (succeeded)
          {
            ArgY1_8 = ((MR_Word) ((MR_hl_field(MR_mktag(2), HeadVar__2_2, (MR_Integer) 0))));
            TypeInfo_13_13 = (MR_Word) (&mdb__interactive_query_scalar_common_1[1]);
            succeeded = mercury__builtin__unify_2_p_0(TypeInfo_13_13, ((MR_Box) (ArgX1_7)), ((MR_Box) (ArgY1_8)));
          }
        }
        break;
    }
  return succeeded;
}

static void MR_CALL 
mdb__interactive_query____Compare____prog_0_0(
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
    MR_Word ArgX1_4 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 0))) & (MR_Integer) 3);
    MR_Word ArgY1_5 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(0), HeadVar__3_3, (MR_Integer) 0))) & (MR_Integer) 3);
    MR_Word ArgX2_7 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 1))));
    MR_Word ArgY2_8 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__3_3, (MR_Integer) 1))));
    MR_Word ArgX3_10 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 2))));
    MR_Word ArgY3_11 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__3_3, (MR_Integer) 2))));
    MR_Word ArgX4_13 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 3))));
    MR_Word ArgY4_14 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__3_3, (MR_Integer) 3))));
    MR_Word ArgX5_16 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 4))));
    MR_Word ArgY5_17 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__3_3, (MR_Integer) 4))));
    MR_Word ArgX6_19 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 5))));
    MR_Word ArgY6_20 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__3_3, (MR_Integer) 5))));
    MR_Word ArgX7_22 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 6))));
    MR_Word ArgY7_23 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__3_3, (MR_Integer) 6))));
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

      mercury__builtin__compare_3_p_0((MR_Word) (&mdb__interactive_query_scalar_common_1[1]), &SubResult2_9, ((MR_Box) (ArgX2_7)), ((MR_Box) (ArgY2_8)));
      succeeded = (SubResult2_9 != (MR_Integer) 0);
      if (succeeded)
        *HeadVar__1_1 = SubResult2_9;
      else
      {
        MR_Word SubResult3_12;

        mercury__builtin__compare_3_p_0((MR_Word) (&mdb__interactive_query_scalar_common_2[1]), &SubResult3_12, ((MR_Box) (ArgX3_10)), ((MR_Box) (ArgY3_11)));
        succeeded = (SubResult3_12 != (MR_Integer) 0);
        if (succeeded)
          *HeadVar__1_1 = SubResult3_12;
        else
        {
          MR_Word SubResult4_15;

          mercury__builtin__compare_3_p_0((MR_Word) (&mdb__interactive_query_scalar_common_1[1]), &SubResult4_15, ((MR_Box) (ArgX4_13)), ((MR_Box) (ArgY4_14)));
          succeeded = (SubResult4_15 != (MR_Integer) 0);
          if (succeeded)
            *HeadVar__1_1 = SubResult4_15;
          else
          {
            MR_Word SubResult5_18;

            mercury__builtin__compare_3_p_0((MR_Word) (&mdb__interactive_query_scalar_common_1[1]), &SubResult5_18, ((MR_Box) (ArgX5_16)), ((MR_Box) (ArgY5_17)));
            succeeded = (SubResult5_18 != (MR_Integer) 0);
            if (succeeded)
              *HeadVar__1_1 = SubResult5_18;
            else
            {
              MR_Word SubResult6_21;

              mercury__builtin__compare_3_p_0((MR_Word) (&mdb__interactive_query_scalar_common_1[2]), &SubResult6_21, ((MR_Box) (ArgX6_19)), ((MR_Box) (ArgY6_20)));
              succeeded = (SubResult6_21 != (MR_Integer) 0);
              if (succeeded)
                *HeadVar__1_1 = SubResult6_21;
              else
                mercury__builtin__compare_3_p_0((MR_Word) (&mdb__interactive_query_scalar_common_1[3]), HeadVar__1_1, ((MR_Box) (ArgX7_22)), ((MR_Box) (ArgY7_23)));
            }
          }
        }
      }
    }
  }
}

static MR_bool MR_CALL 
mdb__interactive_query____Unify____prog_0_0(
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
    MR_Word TypeInfo_23_23;
    MR_Word TypeInfo_24_24;
    MR_Word ArgX1_3 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(0), HeadVar__1_1, (MR_Integer) 0))) & (MR_Integer) 3);
    MR_Word ArgY1_4 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 0))) & (MR_Integer) 3);
    MR_Word ArgX2_5 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__1_1, (MR_Integer) 1))));
    MR_Word ArgY2_6 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 1))));
    MR_Word ArgX3_7 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__1_1, (MR_Integer) 2))));
    MR_Word ArgY3_8 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 2))));
    MR_Word ArgX4_9 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__1_1, (MR_Integer) 3))));
    MR_Word ArgY4_10 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 3))));
    MR_Word ArgX5_11 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__1_1, (MR_Integer) 4))));
    MR_Word ArgY5_12 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 4))));
    MR_Word ArgX6_13 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__1_1, (MR_Integer) 5))));
    MR_Word ArgY6_14 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 5))));
    MR_Word ArgX7_15 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__1_1, (MR_Integer) 6))));
    MR_Word ArgY7_16 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 6))));

    succeeded = (ArgX1_3 == ArgY1_4);
    if (succeeded)
    {
      TypeInfo_19_19 = (MR_Word) (&mdb__interactive_query_scalar_common_1[1]);
      succeeded = mercury__builtin__unify_2_p_0(TypeInfo_19_19, ((MR_Box) (ArgX2_5)), ((MR_Box) (ArgY2_6)));
      if (succeeded)
      {
        TypeInfo_20_20 = (MR_Word) (&mdb__interactive_query_scalar_common_2[1]);
        succeeded = mercury__builtin__unify_2_p_0(TypeInfo_20_20, ((MR_Box) (ArgX3_7)), ((MR_Box) (ArgY3_8)));
        if (succeeded)
        {
          TypeInfo_21_21 = (MR_Word) (&mdb__interactive_query_scalar_common_1[1]);
          succeeded = mercury__builtin__unify_2_p_0(TypeInfo_21_21, ((MR_Box) (ArgX4_9)), ((MR_Box) (ArgY4_10)));
          if (succeeded)
          {
            TypeInfo_22_22 = (MR_Word) (&mdb__interactive_query_scalar_common_1[1]);
            succeeded = mercury__builtin__unify_2_p_0(TypeInfo_22_22, ((MR_Box) (ArgX5_11)), ((MR_Box) (ArgY5_12)));
            if (succeeded)
            {
              TypeInfo_23_23 = (MR_Word) (&mdb__interactive_query_scalar_common_1[2]);
              succeeded = mercury__builtin__unify_2_p_0(TypeInfo_23_23, ((MR_Box) (ArgX6_13)), ((MR_Box) (ArgY6_14)));
              if (succeeded)
              {
                TypeInfo_24_24 = (MR_Word) (&mdb__interactive_query_scalar_common_1[3]);
                succeeded = mercury__builtin__unify_2_p_0(TypeInfo_24_24, ((MR_Box) (ArgX7_15)), ((MR_Box) (ArgY7_16)));
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
mdb__interactive_query____Compare____options_string_0_0(
  MR_Word * HeadVar__1_1,
  MR_String HeadVar__2_2,
  MR_String HeadVar__3_3)
{
  MR_String Cast_HeadVar1_4 = HeadVar__2_2;
  MR_String Cast_HeadVar2_5 = HeadVar__3_3;

  mercury__private_builtin__builtin_compare_string_3_p_0(HeadVar__1_1, Cast_HeadVar1_4, Cast_HeadVar2_5);
}

MR_bool MR_CALL 
mdb__interactive_query____Unify____options_string_0_0(
  MR_String HeadVar__1_1,
  MR_String HeadVar__2_2)
{
  MR_bool succeeded;
  MR_String Cast_HeadVar1_3 = HeadVar__1_1;
  MR_String Cast_HeadVar2_4 = HeadVar__2_2;

  succeeded = (strcmp(Cast_HeadVar1_3, Cast_HeadVar2_4) == 0);
  return succeeded;
}

static void MR_CALL 
mdb__interactive_query____Compare____interactive_query_response_0_0(
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
    switch (MR_tag((MR_Word) HeadVar__2_2)) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        switch (MR_unmkbody(HeadVar__2_2)) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
            switch (MR_tag((MR_Word) HeadVar__3_3)) {
              default: /*NOTREACHED*/ MR_assert(0);
              case (MR_Integer) 0:
                switch (MR_unmkbody(HeadVar__3_3)) {
                  default: /*NOTREACHED*/ MR_assert(0);
                  case (MR_Integer) 0:
                    *HeadVar__1_1 = (MR_Integer) 0;
                    break;
                  case (MR_Integer) 1:
                    *HeadVar__1_1 = (MR_Integer) 1;
                    break;
                  case (MR_Integer) 2:
                    *HeadVar__1_1 = (MR_Integer) 1;
                    break;
                }
                break;
              case (MR_Integer) 1:
                *HeadVar__1_1 = (MR_Integer) 1;
                break;
              case (MR_Integer) 2:
                *HeadVar__1_1 = (MR_Integer) 1;
                break;
            }
            break;
          case (MR_Integer) 1:
            switch (MR_tag((MR_Word) HeadVar__3_3)) {
              default: /*NOTREACHED*/ MR_assert(0);
              case (MR_Integer) 0:
                switch (MR_unmkbody(HeadVar__3_3)) {
                  default: /*NOTREACHED*/ MR_assert(0);
                  case (MR_Integer) 0:
                    *HeadVar__1_1 = (MR_Integer) 2;
                    break;
                  case (MR_Integer) 1:
                    *HeadVar__1_1 = (MR_Integer) 0;
                    break;
                  case (MR_Integer) 2:
                    *HeadVar__1_1 = (MR_Integer) 1;
                    break;
                }
                break;
              case (MR_Integer) 1:
                *HeadVar__1_1 = (MR_Integer) 2;
                break;
              case (MR_Integer) 2:
                *HeadVar__1_1 = (MR_Integer) 1;
                break;
            }
            break;
          case (MR_Integer) 2:
            switch (MR_tag((MR_Word) HeadVar__3_3)) {
              default: /*NOTREACHED*/ MR_assert(0);
              case (MR_Integer) 0:
                switch (MR_unmkbody(HeadVar__3_3)) {
                  default: /*NOTREACHED*/ MR_assert(0);
                  case (MR_Integer) 0:
                    *HeadVar__1_1 = (MR_Integer) 2;
                    break;
                  case (MR_Integer) 1:
                    *HeadVar__1_1 = (MR_Integer) 2;
                    break;
                  case (MR_Integer) 2:
                    *HeadVar__1_1 = (MR_Integer) 0;
                    break;
                }
                break;
              case (MR_Integer) 1:
                *HeadVar__1_1 = (MR_Integer) 2;
                break;
              case (MR_Integer) 2:
                *HeadVar__1_1 = (MR_Integer) 1;
                break;
            }
            break;
        }
        break;
      case (MR_Integer) 1:
        {
          MR_Word Var_29 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__2_2, (MR_Integer) 0))));

          switch (MR_tag((MR_Word) HeadVar__3_3)) {
            default: /*NOTREACHED*/ MR_assert(0);
            case (MR_Integer) 0:
              switch (MR_unmkbody(HeadVar__3_3)) {
                default: /*NOTREACHED*/ MR_assert(0);
                case (MR_Integer) 0:
                  *HeadVar__1_1 = (MR_Integer) 2;
                  break;
                case (MR_Integer) 1:
                  *HeadVar__1_1 = (MR_Integer) 1;
                  break;
                case (MR_Integer) 2:
                  *HeadVar__1_1 = (MR_Integer) 1;
                  break;
              }
              break;
            case (MR_Integer) 1:
              {
                MR_Word ArgY1_8 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__3_3, (MR_Integer) 0))));

                mercury__builtin__compare_3_p_0((MR_Word) (&mdb__interactive_query_scalar_common_1[1]), HeadVar__1_1, ((MR_Box) (Var_29)), ((MR_Box) (ArgY1_8)));
              }
              break;
            case (MR_Integer) 2:
              *HeadVar__1_1 = (MR_Integer) 1;
              break;
          }
        }
        break;
      case (MR_Integer) 2:
        {
          MR_String Var_28 = ((MR_String) ((MR_hl_field(MR_mktag(2), HeadVar__2_2, (MR_Integer) 0))));

          switch (MR_tag((MR_Word) HeadVar__3_3)) {
            default: /*NOTREACHED*/ MR_assert(0);
            case (MR_Integer) 0:
              switch (MR_unmkbody(HeadVar__3_3)) {
                default: /*NOTREACHED*/ MR_assert(0);
                case (MR_Integer) 0:
                  *HeadVar__1_1 = (MR_Integer) 2;
                  break;
                case (MR_Integer) 1:
                  *HeadVar__1_1 = (MR_Integer) 2;
                  break;
                case (MR_Integer) 2:
                  *HeadVar__1_1 = (MR_Integer) 2;
                  break;
              }
              break;
            case (MR_Integer) 1:
              *HeadVar__1_1 = (MR_Integer) 2;
              break;
            case (MR_Integer) 2:
              {
                MR_String ArgY1_23 = ((MR_String) ((MR_hl_field(MR_mktag(2), HeadVar__3_3, (MR_Integer) 0))));

                mercury__private_builtin__builtin_compare_string_3_p_0(HeadVar__1_1, Var_28, ArgY1_23);
              }
              break;
          }
        }
        break;
    }
}

static MR_bool MR_CALL 
mdb__interactive_query____Unify____interactive_query_response_0_0(
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
    switch (MR_tag((MR_Word) HeadVar__1_1)) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        switch (MR_unmkbody(HeadVar__1_1)) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
            {
              MR_Integer CastX_3 = (MR_Integer) (HeadVar__1_1);
              MR_Integer CastY_4 = (MR_Integer) (HeadVar__2_2);

              succeeded = (CastY_4 == CastX_3);
            }
            break;
          case (MR_Integer) 1:
            {
              MR_Integer CastX_7 = (MR_Integer) (HeadVar__1_1);
              MR_Integer CastY_8 = (MR_Integer) (HeadVar__2_2);

              succeeded = (CastY_8 == CastX_7);
            }
            break;
          case (MR_Integer) 2:
            {
              MR_Integer CastX_9 = (MR_Integer) (HeadVar__1_1);
              MR_Integer CastY_10 = (MR_Integer) (HeadVar__2_2);

              succeeded = (CastY_10 == CastX_9);
            }
            break;
        }
        break;
      case (MR_Integer) 1:
        {
          MR_Word TypeInfo_15_15;
          MR_Word ArgX1_5 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 0))));
          MR_Word ArgY1_6;

          succeeded = ((MR_tag((MR_Word) HeadVar__2_2)) == (MR_Integer) 1);
          if (succeeded)
          {
            ArgY1_6 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__2_2, (MR_Integer) 0))));
            TypeInfo_15_15 = (MR_Word) (&mdb__interactive_query_scalar_common_1[1]);
            succeeded = mercury__builtin__unify_2_p_0(TypeInfo_15_15, ((MR_Box) (ArgX1_5)), ((MR_Box) (ArgY1_6)));
          }
        }
        break;
      case (MR_Integer) 2:
        {
          MR_String ArgX1_11 = ((MR_String) ((MR_hl_field(MR_mktag(2), HeadVar__1_1, (MR_Integer) 0))));
          MR_String ArgY1_12;

          succeeded = ((MR_tag((MR_Word) HeadVar__2_2)) == (MR_Integer) 2);
          if (succeeded)
          {
            ArgY1_12 = ((MR_String) ((MR_hl_field(MR_mktag(2), HeadVar__2_2, (MR_Integer) 0))));
            succeeded = (strcmp(ArgX1_11, ArgY1_12) == 0);
          }
        }
        break;
    }
  return succeeded;
}

void MR_CALL 
mdb__interactive_query____Compare____imports_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3)
{
  MR_Word Cast_HeadVar1_4 = HeadVar__2_2;
  MR_Word Cast_HeadVar2_5 = HeadVar__3_3;

  mercury__builtin__compare_3_p_0((MR_Word) (&mdb__interactive_query_scalar_common_1[1]), HeadVar__1_1, ((MR_Box) (Cast_HeadVar1_4)), ((MR_Box) (Cast_HeadVar2_5)));
}

MR_bool MR_CALL 
mdb__interactive_query____Unify____imports_0_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2)
{
  MR_bool succeeded;
  MR_Word Cast_HeadVar1_3 = HeadVar__1_1;
  MR_Word Cast_HeadVar2_4 = HeadVar__2_2;

  succeeded = mercury__builtin__unify_2_p_0((MR_Word) (&mdb__interactive_query_scalar_common_1[1]), ((MR_Box) (Cast_HeadVar1_3)), ((MR_Box) (Cast_HeadVar2_4)));
  return succeeded;
}

static void MR_CALL 
mdb__interactive_query____Compare____bindings_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3)
{
  MR_Word Cast_HeadVar1_4 = HeadVar__2_2;
  MR_Word Cast_HeadVar2_5 = HeadVar__3_3;

  mercury__builtin__compare_3_p_0((MR_Word) (&mdb__interactive_query_scalar_common_2[1]), HeadVar__1_1, ((MR_Box) (Cast_HeadVar1_4)), ((MR_Box) (Cast_HeadVar2_5)));
}

static MR_bool MR_CALL 
mdb__interactive_query____Unify____bindings_0_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2)
{
  MR_bool succeeded;
  MR_Word Cast_HeadVar1_3 = HeadVar__1_1;
  MR_Word Cast_HeadVar2_4 = HeadVar__2_2;

  succeeded = mercury__builtin__unify_2_p_0((MR_Word) (&mdb__interactive_query_scalar_common_2[1]), ((MR_Box) (Cast_HeadVar1_3)), ((MR_Box) (Cast_HeadVar2_4)));
  return succeeded;
}

static MR_bool MR_CALL 
mdb__interactive_query__system_is_darwin_0_p_0(void)
{
  MR_bool succeeded;

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
succeeded  = SUCCESS_INDICATOR;
}
  return succeeded;
}

static MR_Word MR_CALL 
mdb__interactive_query__inst_cast_io_1_f_0(
  MR_Word X_1)
{
  MR_Word Y_2;

{
#define MR_PROC_LABEL mdb__interactive_query__inst_cast_io_1_f_0

	MR_Word X;
	MR_Word Y;

	X = X_1 ;
		{

    Y = X


		;}
#undef MR_PROC_LABEL
	Y_2  = Y;
}
  return Y_2;
}

static MR_Word MR_CALL 
mdb__interactive_query__inst_cast_cc_1_f_0(
  MR_Word X_1)
{
  MR_Word Y_2;

{
#define MR_PROC_LABEL mdb__interactive_query__inst_cast_cc_1_f_0

	MR_Word X;
	MR_Word Y;

	X = X_1 ;
		{

    Y = X


		;}
#undef MR_PROC_LABEL
	Y_2  = Y;
}
  return Y_2;
}

static MR_Word MR_CALL 
mdb__interactive_query__inst_cast_normal_1_f_0(
  MR_Word X_1)
{
  MR_Word Y_2;

{
#define MR_PROC_LABEL mdb__interactive_query__inst_cast_normal_1_f_0

	MR_Word X;
	MR_Word Y;

	X = X_1 ;
		{

    Y = X


		;}
#undef MR_PROC_LABEL
	Y_2  = Y;
}
  return Y_2;
}

static void MR_CALL 
mdb__interactive_query__write_binding_5_p_0(
  MR_Word OutputStream_6,
  MR_Word Bindings_7,
  MR_String Output_8)
{
  MR_Word TypeInfo_22_22;
  MR_Word Univ_10;
  MR_Box Var_16;
  MR_Box conv0_Univ_10;

  mercury__map__lookup_3_p_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), (MR_Word) (&mercury__univ__univ__type_ctor_info_univ_0), Bindings_7, ((MR_Box) (Output_8)), &conv0_Univ_10);
  Univ_10 = ((MR_Word) (conv0_Univ_10));
  mercury__io__write_string_4_p_0(OutputStream_6, Output_8);
  mercury__io__write_string_4_p_0(OutputStream_6, (MR_String) " = ");
  Var_16 = mercury__univ__univ_value_1_f_0(&TypeInfo_22_22, Univ_10);
  mercury__io__write_cc_4_p_0(TypeInfo_22_22, OutputStream_6, Var_16);
  mercury__io__write_string_4_p_0(OutputStream_6, (MR_String) ", ");
}

static void MR_CALL 
mdb__interactive_query__call_run_io_5_p_0(
  MR_Word QueryPred0_6,
  MR_Word Bindings0_7,
  MR_Word * Solution_8)
{
  MR_Word QueryPred_10;
  MR_Word Bindings_11;
  MR_Word Loaded_12;
  void MR_CALL (* func_0)(MR_Box, MR_Box, MR_Box *, MR_Box *, MR_Box, MR_Box *);
  MR_Box conv3_Bindings_11;
  MR_Box conv2_Loaded_12;
  MR_Box conv1_STATE_VARIABLE_IO_14;

{
#define MR_PROC_LABEL mdb__interactive_query__call_run_io_5_p_0

	MR_Word X;
	MR_Word Y;

	X = QueryPred0_6 ;
		{

    Y = X


		;}
#undef MR_PROC_LABEL
	QueryPred_10  = Y;
}
  func_0 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box *, MR_Box *, MR_Box, MR_Box *)) ((MR_hl_field(MR_mktag(0), QueryPred_10, (MR_Integer) 1))));
  func_0(((MR_Box) (QueryPred_10)), ((MR_Box) (Bindings0_7)), &conv3_Bindings_11, &conv2_Loaded_12, ((MR_Box) ((MR_Integer) 0)), &conv1_STATE_VARIABLE_IO_14);
  Bindings_11 = ((MR_Word) (conv3_Bindings_11));
  Loaded_12 = ((MR_Word) (conv2_Loaded_12));
  switch (Loaded_12) {
    default: /*NOTREACHED*/ MR_assert(0);
    case (MR_Integer) 0:
      *Solution_8 = (MR_Word) ((MR_Unsigned) 0U);
      break;
    case (MR_Integer) 1:
      {
        MR_Word base;
        base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
        *Solution_8 = base;
        MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (Bindings_11));
      }
      break;
  }
}

static MR_bool MR_CALL 
mdb__interactive_query__call_run_cc_3_p_0(
  MR_Word QueryPred0_4,
  MR_Word Bindings0_5,
  MR_Word * Solution_6)
{
  MR_bool succeeded;
  MR_Word QueryPred_7;
  MR_Word Bindings_8;
  MR_Word Loaded_9;
  MR_bool MR_CALL (* func_0)(MR_Box, MR_Box, MR_Box *, MR_Box *);
  MR_Box conv2_Bindings_8;
  MR_Box conv1_Loaded_9;

{
#define MR_PROC_LABEL mdb__interactive_query__call_run_cc_3_p_0

	MR_Word X;
	MR_Word Y;

	X = QueryPred0_4 ;
		{

    Y = X


		;}
#undef MR_PROC_LABEL
	QueryPred_7  = Y;
}
  func_0 = ((MR_bool MR_CALL (*)(MR_Box, MR_Box, MR_Box *, MR_Box *)) ((MR_hl_field(MR_mktag(0), QueryPred_7, (MR_Integer) 1))));
  succeeded = func_0(((MR_Box) (QueryPred_7)), ((MR_Box) (Bindings0_5)), &conv2_Bindings_8, &conv1_Loaded_9);
  if (succeeded)
  {
    Bindings_8 = ((MR_Word) (conv2_Bindings_8));
    Loaded_9 = ((MR_Word) (conv1_Loaded_9));
    succeeded = MR_TRUE;
  }
  if (succeeded)
  {
    switch (Loaded_9) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        *Solution_6 = (MR_Word) ((MR_Unsigned) 0U);
        break;
      case (MR_Integer) 1:
        {
          MR_Word base;
          base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
          *Solution_6 = base;
          MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (Bindings_8));
        }
        break;
    }
    succeeded = MR_TRUE;
  }
  return succeeded;
}

static void MR_CALL 
mdb__interactive_query__call_run_normal_3_p_0_2(
  void * env_ptr_arg)
{
  struct mdb__interactive_query__call_run_normal_3_p_0_env_0_s * env_ptr = (struct mdb__interactive_query__call_run_normal_3_p_0_env_0_s *) (env_ptr_arg);

  (env_ptr)->mdb__interactive_query__call_run_normal_3_p_0_env_0__Bindings_8 = ((MR_Word) ((env_ptr)->mdb__interactive_query__call_run_normal_3_p_0_env_0__conv2_Bindings_8));
  (env_ptr)->mdb__interactive_query__call_run_normal_3_p_0_env_0__Loaded_9 = ((MR_Word) ((env_ptr)->mdb__interactive_query__call_run_normal_3_p_0_env_0__conv1_Loaded_9));
  mdb__interactive_query__call_run_normal_3_p_0_1(env_ptr);
}

static void MR_CALL 
mdb__interactive_query__call_run_normal_3_p_0_1(
  void * env_ptr_arg)
{
  struct mdb__interactive_query__call_run_normal_3_p_0_env_0_s * env_ptr = (struct mdb__interactive_query__call_run_normal_3_p_0_env_0_s *) (env_ptr_arg);

  switch ((env_ptr)->mdb__interactive_query__call_run_normal_3_p_0_env_0__Loaded_9) {
    default: /*NOTREACHED*/ MR_assert(0);
    case (MR_Integer) 0:
      *((env_ptr)->mdb__interactive_query__call_run_normal_3_p_0_env_0__Solution_6) = (MR_Word) ((MR_Unsigned) 0U);
      break;
    case (MR_Integer) 1:
      {
        MR_Word base;
        base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
        *((env_ptr)->mdb__interactive_query__call_run_normal_3_p_0_env_0__Solution_6) = base;
        MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) ((env_ptr)->mdb__interactive_query__call_run_normal_3_p_0_env_0__Bindings_8));
      }
      break;
  }
  ((env_ptr)->mdb__interactive_query__call_run_normal_3_p_0_env_0__cont)((env_ptr)->mdb__interactive_query__call_run_normal_3_p_0_env_0__cont_env_ptr);
}

static void MR_CALL 
mdb__interactive_query__call_run_normal_3_p_0(
  MR_Word QueryPred0_4,
  MR_Word Bindings0_5,
  MR_Word * Solution_6,
  MR_Cont cont,
  void * cont_env_ptr)
{
  struct mdb__interactive_query__call_run_normal_3_p_0_env_0_s env;

  (env).mdb__interactive_query__call_run_normal_3_p_0_env_0__Solution_6 = Solution_6;
  (env).mdb__interactive_query__call_run_normal_3_p_0_env_0__cont = cont;
  (env).mdb__interactive_query__call_run_normal_3_p_0_env_0__cont_env_ptr = cont_env_ptr;
  {
    MR_Word QueryPred_7;
    void MR_CALL (* func_0)(MR_Box, MR_Box, MR_Box *, MR_Box *, MR_Cont, void *);

{
#define MR_PROC_LABEL mdb__interactive_query__call_run_normal_3_p_0

	MR_Word X;
	MR_Word Y;

	X = QueryPred0_4 ;
		{

    Y = X


		;}
#undef MR_PROC_LABEL
	QueryPred_7  = Y;
}
    func_0 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box *, MR_Box *, MR_Cont, void *)) ((MR_hl_field(MR_mktag(0), QueryPred_7, (MR_Integer) 1))));
    func_0(((MR_Box) (QueryPred_7)), ((MR_Box) (Bindings0_5)), &(env).mdb__interactive_query__call_run_normal_3_p_0_env_0__conv2_Bindings_8, &(env).mdb__interactive_query__call_run_normal_3_p_0_env_0__conv1_Loaded_9, mdb__interactive_query__call_run_normal_3_p_0_2, &env);
  }
}

static MR_String MR_CALL 
mdb__interactive_query__grade_option_0_f_0(void)
{
  MR_String GradeOpt_1;

{
#define MR_PROC_LABEL mdb__interactive_query__grade_option_0_f_0

	MR_String GradeOpt;

		{

    MR_make_aligned_string(GradeOpt, (MR_String) MR_GRADE_OPT);


		;}
#undef MR_PROC_LABEL
	GradeOpt_1  = GradeOpt;
}
  return GradeOpt_1;
}

static void MR_CALL 
mdb__interactive_query__write_module_import_4_p_0(
  MR_Word OutputStream_5,
  MR_String ModuleName_6)
{
  mercury__io__write_string_4_p_0(OutputStream_5, (MR_String) ":- import_module ");
  mercury__term_io__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_113_117_111_116_101_95_97_116_111_109_95_95_91_83_116_114_101_97_109_32_61_32_105_111_46_111_117_116_112_117_116_95_115_116_114_101_97_109_44_32_83_116_97_116_101_32_61_32_105_111_46_115_116_97_116_101_93_95_48_95_49_4_p_0((MR_Word) (&mdb__interactive_query_scalar_common_4[0]), (MR_Word) (&mdb__interactive_query_scalar_common_4[1]), OutputStream_5, ModuleName_6);
  mercury__io__write_string_4_p_0(OutputStream_5, (MR_String) ".\n");
}

static void MR_CALL 
mdb__interactive_query__write_comma_var_4_p_0(
  MR_Word OutputStream_5,
  MR_String Var_6)
{
  mercury__io__write_string_4_p_0(OutputStream_5, (MR_String) ", ");
  mercury__io__write_string_4_p_0(OutputStream_5, Var_6);
}

static void MR_CALL 
mdb__interactive_query__write_set_goal_4_p_0(
  MR_Word OutputStream_5,
  MR_String Var_6)
{
  MR_Word Var_10;
  MR_Word Var_13;
  MR_Word Var_14;
  MR_Word Var_16;

  {
    Var_16 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(MR_mktag(1), Var_16, 0) = ((MR_Box) (Var_6));
    MR_hl_field(MR_mktag(1), Var_16, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &mdb__interactive_query_scalar_common_1[23])));
  }
  {
    Var_14 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(MR_mktag(1), Var_14, 0) = ((MR_Box) ((MR_String) "\", univ.univ("));
    MR_hl_field(MR_mktag(1), Var_14, 1) = ((MR_Box) (Var_16));
  }
  {
    Var_13 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(MR_mktag(1), Var_13, 0) = ((MR_Box) (Var_6));
    MR_hl_field(MR_mktag(1), Var_13, 1) = ((MR_Box) (Var_14));
  }
  {
    Var_10 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(MR_mktag(1), Var_10, 0) = ((MR_Box) ((MR_String) "       map.set(\""));
    MR_hl_field(MR_mktag(1), Var_10, 1) = ((MR_Box) (Var_13));
  }
  mercury__io__write_strings_4_p_0(OutputStream_5, Var_10);
}

static void MR_CALL 
mdb__interactive_query__write_cast_goal_4_p_0(
  MR_Word OutputStream_5,
  MR_String Var_6)
{
  MR_Word Var_10;
  MR_Word Var_13;
  MR_Word Var_14;
  MR_Word Var_16;

  {
    Var_16 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(MR_mktag(1), Var_16, 0) = ((MR_Box) (Var_6));
    MR_hl_field(MR_mktag(1), Var_16, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &mdb__interactive_query_scalar_common_1[7])));
  }
  {
    Var_14 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(MR_mktag(1), Var_14, 0) = ((MR_Box) ((MR_String) "\"), "));
    MR_hl_field(MR_mktag(1), Var_14, 1) = ((MR_Box) (Var_16));
  }
  {
    Var_13 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(MR_mktag(1), Var_13, 0) = ((MR_Box) (Var_6));
    MR_hl_field(MR_mktag(1), Var_13, 1) = ((MR_Box) (Var_14));
  }
  {
    Var_10 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(MR_mktag(1), Var_10, 0) = ((MR_Box) ((MR_String) "       univ.univ_to_type(!.Bindings ^ elem(\""));
    MR_hl_field(MR_mktag(1), Var_10, 1) = ((MR_Box) (Var_13));
  }
  mercury__io__write_strings_4_p_0(OutputStream_5, Var_10);
}

void MR_CALL 
mdb__interactive_query__query_external_9_p_0(
  MR_Word QueryType_10,
  MR_Word Imports_11,
  MR_String Options_12,
  MR_Word Names_13,
  MR_Word Values_14,
  MR_Word SocketIn_15,
  MR_Word SocketOut_16)
{
  MR_Word Bindings_18;
  MR_Word Env_19;

  mercury__map__from_corresponding_lists_3_p_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), (MR_Word) (&mercury__univ__univ__type_ctor_info_univ_0), Names_13, Values_14, &Bindings_18);
  {
    Env_19 = (MR_Word) MR_new_object(MR_Word, (6 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(MR_mktag(0), Env_19, 0) = (MR_Box) ((MR_Unsigned) (QueryType_10));
    MR_hl_field(MR_mktag(0), Env_19, 1) = ((MR_Box) (Imports_11));
    MR_hl_field(MR_mktag(0), Env_19, 2) = ((MR_Box) (Options_12));
    MR_hl_field(MR_mktag(0), Env_19, 3) = ((MR_Box) (Bindings_18));
    MR_hl_field(MR_mktag(0), Env_19, 4) = ((MR_Box) (SocketIn_15));
    MR_hl_field(MR_mktag(0), Env_19, 5) = ((MR_Box) (SocketOut_16));
  }
  mdb__interactive_query__query_external_2_3_p_0(Env_19);
}

static void MR_CALL 
mdb__interactive_query__query_external_2_3_p_0(
  MR_Word Env_4)
{
  while (MR_TRUE)
  {
    MR_Word Result_6;
    MR_Word Var_18 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Env_4, (MR_Integer) 4))));

    // setup for model_det tailcalls optimized into a loop
    ;
    mercury__mercury_term_parser__read_term_4_p_0((MR_Word) (&mercury__term__term__type_ctor_info_generic_0), Var_18, &Result_6);
    switch (MR_tag((MR_Word) Result_6)) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        {
          MR_Word Var_41 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Env_4, (MR_Integer) 5))));

          mdb__interactive_query__query_send_term_to_socket_4_p_0(Var_41, (MR_Word) ((MR_Unsigned) 8U));
        }
        break;
      case (MR_Integer) 1:
        {
          MR_String ErrorMsg_7 = ((MR_String) ((MR_hl_field(MR_mktag(1), Result_6, (MR_Integer) 0))));
          MR_Word Var_37 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Env_4, (MR_Integer) 5))));
          MR_Word Var_38;

          {
            Var_38 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(2), Var_38, 0) = ((MR_Box) (ErrorMsg_7));
          }
          mdb__interactive_query__query_send_term_to_socket_4_p_0(Var_37, Var_38);
          // direct tailcall eliminated
          ;
          continue;
        }
        break;
      case (MR_Integer) 2:
        {
          MR_Word Varset_9 = ((MR_Word) ((MR_hl_field(MR_mktag(2), Result_6, (MR_Integer) 0))));
          MR_Word Term_10 = ((MR_Word) ((MR_hl_field(MR_mktag(2), Result_6, (MR_Integer) 1))));
          MR_Word Cmd_11;

          mdb__interactive_query__parse_query_command_2_p_0(Term_10, &Cmd_11);
          switch (MR_tag((MR_Word) Cmd_11)) {
            default: /*NOTREACHED*/ MR_assert(0);
            case (MR_Integer) 0:
              switch (MR_unmkbody(Cmd_11)) {
                default: /*NOTREACHED*/ MR_assert(0);
                case (MR_Integer) 0:
                  {
                    MR_Word Var_34 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Env_4, (MR_Integer) 5))));

                    mdb__interactive_query__query_send_term_to_socket_4_p_0(Var_34, (MR_Word) ((MR_Unsigned) 4U));
                  }
                  break;
                case (MR_Integer) 1:
                  {
                    MR_Word Var_21;

                    mdb__interactive_query__run_query_5_p_0(Env_4, Term_10, Varset_9);
                    Var_21 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Env_4, (MR_Integer) 5))));
                    mdb__interactive_query__query_send_term_to_socket_4_p_0(Var_21, (MR_Word) ((MR_Unsigned) 0U));
                    // direct tailcall eliminated
                    ;
                    continue;
                  }
                  break;
              }
              break;
            case (MR_Integer) 1:
              {
                MR_String NewOptions_12 = ((MR_String) ((MR_hl_field(MR_mktag(1), Cmd_11, (MR_Integer) 0))));
                MR_Word Env1_13;
                MR_Word Var_30 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Env_4, (MR_Integer) 5))));
                MR_Word Var_70;
                MR_Word Var_71;
                MR_Word Var_73;
                MR_Word Var_74;
                MR_Word Var_75;
                MR_Word next_value_of_Env_4;

                mdb__interactive_query__query_send_term_to_socket_4_p_0(Var_30, (MR_Word) ((MR_Unsigned) 0U));
                Var_70 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(0), Env_4, (MR_Integer) 0))) & (MR_Integer) 3);
                Var_71 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Env_4, (MR_Integer) 1))));
                Var_73 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Env_4, (MR_Integer) 3))));
                Var_74 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Env_4, (MR_Integer) 4))));
                Var_75 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Env_4, (MR_Integer) 5))));
                {
                  Env1_13 = (MR_Word) MR_new_object(MR_Word, (6 * sizeof(MR_Word)), NULL, NULL);
                  MR_hl_field(MR_mktag(0), Env1_13, 0) = (MR_Box) ((MR_Unsigned) (Var_70));
                  MR_hl_field(MR_mktag(0), Env1_13, 1) = ((MR_Box) (Var_71));
                  MR_hl_field(MR_mktag(0), Env1_13, 2) = ((MR_Box) (NewOptions_12));
                  MR_hl_field(MR_mktag(0), Env1_13, 3) = ((MR_Box) (Var_73));
                  MR_hl_field(MR_mktag(0), Env1_13, 4) = ((MR_Box) (Var_74));
                  MR_hl_field(MR_mktag(0), Env1_13, 5) = ((MR_Box) (Var_75));
                }
                // direct tailcall eliminated
                ;
                next_value_of_Env_4 = Env1_13;
                Env_4 = next_value_of_Env_4;
                continue;
              }
              break;
            case (MR_Integer) 2:
              {
                MR_Word AddedImports_14 = ((MR_Word) ((MR_hl_field(MR_mktag(2), Cmd_11, (MR_Integer) 0))));
                MR_Word Imports_15;
                MR_Word Var_25 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Env_4, (MR_Integer) 1))));
                MR_Word Var_27;
                MR_Word Env1_44;
                MR_Word Var_86;
                MR_Word Var_81;
                MR_String Var_83;
                MR_Word Var_84;
                MR_Word Var_85;
                MR_Word next_value_of_Env_4;

                Imports_15 = mercury__list__f_43_43_2_f_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), Var_25, AddedImports_14);
                Var_81 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(0), Env_4, (MR_Integer) 0))) & (MR_Integer) 3);
                Var_83 = ((MR_String) ((MR_hl_field(MR_mktag(0), Env_4, (MR_Integer) 2))));
                Var_84 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Env_4, (MR_Integer) 3))));
                Var_85 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Env_4, (MR_Integer) 4))));
                Var_86 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Env_4, (MR_Integer) 5))));
                {
                  Env1_44 = (MR_Word) MR_new_object(MR_Word, (6 * sizeof(MR_Word)), NULL, NULL);
                  MR_hl_field(MR_mktag(0), Env1_44, 0) = (MR_Box) ((MR_Unsigned) (Var_81));
                  MR_hl_field(MR_mktag(0), Env1_44, 1) = ((MR_Box) (Imports_15));
                  MR_hl_field(MR_mktag(0), Env1_44, 2) = ((MR_Box) (Var_83));
                  MR_hl_field(MR_mktag(0), Env1_44, 3) = ((MR_Box) (Var_84));
                  MR_hl_field(MR_mktag(0), Env1_44, 4) = ((MR_Box) (Var_85));
                  MR_hl_field(MR_mktag(0), Env1_44, 5) = ((MR_Box) (Var_86));
                }
                {
                  Var_27 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(MR_mktag(1), Var_27, 0) = ((MR_Box) (Imports_15));
                }
                mdb__interactive_query__query_send_term_to_socket_4_p_0(Var_86, Var_27);
                // direct tailcall eliminated
                ;
                next_value_of_Env_4 = Env1_44;
                Env_4 = next_value_of_Env_4;
                continue;
              }
              break;
          }
        }
        break;
    }
    break;
  }
}

static void MR_CALL 
mdb__interactive_query__query_send_term_to_socket_4_p_0(
  MR_Word SocketStream_5,
  MR_Word Term_6)
{
  mercury__io__write_4_p_0((MR_Word) (&mdb__interactive_query__mdb__interactive_query__type_ctor_info_interactive_query_response_0), SocketStream_5, ((MR_Box) (Term_6)));
  mercury__io__write_string_4_p_0(SocketStream_5, (MR_String) ".\n");
  mercury__io__flush_output_3_p_0(SocketStream_5);
}

void MR_CALL 
mdb__interactive_query__query_9_p_0(
  MR_Word QueryType_10,
  MR_Word Imports_11,
  MR_String Options_12,
  MR_Word Names_13,
  MR_Word Values_14,
  MR_Word MdbStdin_15,
  MR_Word MdbStdout_16)
{
  MR_Word Bindings_18;
  MR_Word Env_19;

  mercury__map__from_corresponding_lists_3_p_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), (MR_Word) (&mercury__univ__univ__type_ctor_info_univ_0), Names_13, Values_14, &Bindings_18);
  {
    Env_19 = (MR_Word) MR_new_object(MR_Word, (6 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(MR_mktag(0), Env_19, 0) = (MR_Box) ((MR_Unsigned) (QueryType_10));
    MR_hl_field(MR_mktag(0), Env_19, 1) = ((MR_Box) (Imports_11));
    MR_hl_field(MR_mktag(0), Env_19, 2) = ((MR_Box) (Options_12));
    MR_hl_field(MR_mktag(0), Env_19, 3) = ((MR_Box) (Bindings_18));
    MR_hl_field(MR_mktag(0), Env_19, 4) = ((MR_Box) (MdbStdin_15));
    MR_hl_field(MR_mktag(0), Env_19, 5) = ((MR_Box) (MdbStdout_16));
  }
  mdb__interactive_query__query_2_3_p_0(Env_19);
}

static void MR_CALL 
mdb__interactive_query__query_3_4_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3)
{
  MR_Box closure = closure_arg;

  mdb__interactive_query__write_module_import_4_p_0(((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3)))), ((MR_String) (wrapper_arg_1)));
}

static void MR_CALL 
mdb__interactive_query__query_2_3_p_0(
  MR_Word tscc_proc_1_input_1_Env_4)
{
  MR_Word tscc_proc_2_input_1_Env_5;
  MR_Word tscc_proc_2_input_2_ReadTerm_6;

  // The code for TSCC PROC 1: pred mdb.interactive_query.query_2/3-0.
  ;
  // Setup for mutual tailcalls optimized into a loop.
  ;
  // The mutually recursive procedures are:
  ;
  ;
  // proc 1 in TSCC: pred mdb.interactive_query.query_2/3-0
  ;
  // proc 2 in TSCC: pred mdb.interactive_query.query_3/4-0
  ;
  ;
  goto top_of_proc_1;
top_of_proc_1:;
  {
    MR_Word Env_4 = tscc_proc_1_input_1_Env_4;
    MR_String Prompt_6;
    MR_Word Result_7;
    MR_Word Var_15 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(0), Env_4, (MR_Integer) 0))) & (MR_Integer) 3);
    MR_Word Var_31 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Env_4, (MR_Integer) 4))));
    MR_Word Var_32 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Env_4, (MR_Integer) 5))));

    switch (Var_15) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 1:
        Prompt_6 = (MR_String) "\?- ";
        break;
      case (MR_Integer) 2:
        Prompt_6 = (MR_String) "run <-- ";
        break;
      case (MR_Integer) 0:
        Prompt_6 = (MR_String) "\?- ";
        break;
    }
    mdb__util__trace_getline_6_p_0(Var_31, Var_32, Prompt_6, &Result_7);
    switch (MR_tag((MR_Word) Result_7)) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        {
          MR_Word Var_26 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Env_4, (MR_Integer) 5))));

          mercury__io__nl_3_p_0(Var_26);
        }
        break;
      case (MR_Integer) 1:
        {
          MR_String Line_10 = ((MR_String) ((MR_hl_field(MR_mktag(1), Result_7, (MR_Integer) 0))));
          MR_Word ReadTerm_12;
          MR_Word Var_11;
          MR_Word next_value_of_tscc_proc_2_input_1_Env_5;
          MR_Word next_value_of_tscc_proc_2_input_2_ReadTerm_6;

          mercury__mercury_term_parser__read_term_from_string_4_p_0((MR_Word) (&mercury__term__term__type_ctor_info_generic_0), (MR_String) "", Line_10, &Var_11, &ReadTerm_12);
          // direct tailcall eliminated
          ;
          next_value_of_tscc_proc_2_input_1_Env_5 = Env_4;
          next_value_of_tscc_proc_2_input_2_ReadTerm_6 = ReadTerm_12;
          tscc_proc_2_input_1_Env_5 = next_value_of_tscc_proc_2_input_1_Env_5;
          tscc_proc_2_input_2_ReadTerm_6 = next_value_of_tscc_proc_2_input_2_ReadTerm_6;
          goto top_of_proc_2;
        }
        break;
      case (MR_Integer) 2:
        {
          MR_Word Error_8 = ((MR_Word) ((MR_hl_field(MR_mktag(2), Result_7, (MR_Integer) 0))));
          MR_String Msg_9;
          MR_Word Var_21;
          MR_Word Var_23;
          MR_Word next_value_of_tscc_proc_1_input_1_Env_4;

          mercury__io__error_message_2_p_0(Error_8, &Msg_9);
          Var_21 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Env_4, (MR_Integer) 5))));
          mercury__io__write_string_4_p_0(Var_21, Msg_9);
          Var_23 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Env_4, (MR_Integer) 5))));
          mercury__io__nl_3_p_0(Var_23);
          // direct tailcall eliminated
          ;
          next_value_of_tscc_proc_1_input_1_Env_4 = Env_4;
          tscc_proc_1_input_1_Env_4 = next_value_of_tscc_proc_1_input_1_Env_4;
          goto top_of_proc_1;
        }
        break;
    }
    goto tscc_end;
  }
top_of_proc_2:;
  {
    MR_Word Env_5 = tscc_proc_2_input_1_Env_5;
    MR_Word ReadTerm_6 = tscc_proc_2_input_2_ReadTerm_6;

    switch (MR_tag((MR_Word) ReadTerm_6)) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        {
          MR_Word Var_43 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Env_5, (MR_Integer) 5))));

          mercury__io__nl_3_p_0(Var_43);
        }
        break;
      case (MR_Integer) 1:
        {
          MR_String Msg_8 = ((MR_String) ((MR_hl_field(MR_mktag(1), ReadTerm_6, (MR_Integer) 0))));
          MR_Word Var_38 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Env_5, (MR_Integer) 5))));
          MR_Word Var_40;
          MR_Word next_value_of_tscc_proc_1_input_1_Env_4;

          mercury__io__write_string_4_p_0(Var_38, Msg_8);
          Var_40 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Env_5, (MR_Integer) 5))));
          mercury__io__nl_3_p_0(Var_40);
          // direct tailcall eliminated
          ;
          next_value_of_tscc_proc_1_input_1_Env_4 = Env_5;
          tscc_proc_1_input_1_Env_4 = next_value_of_tscc_proc_1_input_1_Env_4;
          goto top_of_proc_1;
        }
        break;
      case (MR_Integer) 2:
        {
          MR_Word Varset_10 = ((MR_Word) ((MR_hl_field(MR_mktag(2), ReadTerm_6, (MR_Integer) 0))));
          MR_Word Term_11 = ((MR_Word) ((MR_hl_field(MR_mktag(2), ReadTerm_6, (MR_Integer) 1))));
          MR_Word Cmd_12;
          MR_Word Var_114;
          MR_Word Var_118;

          mdb__interactive_query__parse_query_command_2_p_0(Term_11, &Cmd_12);
          Var_118 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Env_5, (MR_Integer) 1))));
          Var_114 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Env_5, (MR_Integer) 5))));
          switch (MR_tag((MR_Word) Cmd_12)) {
            default: /*NOTREACHED*/ MR_assert(0);
            case (MR_Integer) 0:
              switch (MR_unmkbody(Cmd_12)) {
                default: /*NOTREACHED*/ MR_assert(0);
                case (MR_Integer) 0:
                  mercury__io__nl_3_p_0(Var_114);
                  break;
                case (MR_Integer) 1:
                  {
                    MR_Word next_value_of_tscc_proc_1_input_1_Env_4;

                    mercury__io__flush_output_3_p_0(Var_114);
                    mdb__interactive_query__run_query_5_p_0(Env_5, Term_11, Varset_10);
                    // direct tailcall eliminated
                    ;
                    next_value_of_tscc_proc_1_input_1_Env_4 = Env_5;
                    tscc_proc_1_input_1_Env_4 = next_value_of_tscc_proc_1_input_1_Env_4;
                    goto top_of_proc_1;
                  }
                  break;
              }
              break;
            case (MR_Integer) 1:
              {
                MR_String NewOptions_13 = ((MR_String) ((MR_hl_field(MR_mktag(1), Cmd_12, (MR_Integer) 0))));
                MR_Word Env1_14;
                MR_Word Var_31;
                MR_Word Var_33;
                MR_Word Var_81;
                MR_Word Var_82;
                MR_Word Var_84;
                MR_Word Var_85;
                MR_Word Var_86;
                MR_Word next_value_of_tscc_proc_1_input_1_Env_4;

                mercury__io__print_4_p_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), Var_114, ((MR_Box) ((MR_String) "Compilation options: ")));
                Var_31 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Env_5, (MR_Integer) 5))));
                mercury__io__print_4_p_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), Var_31, ((MR_Box) (NewOptions_13)));
                Var_33 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Env_5, (MR_Integer) 5))));
                mercury__io__nl_3_p_0(Var_33);
                Var_81 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(0), Env_5, (MR_Integer) 0))) & (MR_Integer) 3);
                Var_82 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Env_5, (MR_Integer) 1))));
                Var_84 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Env_5, (MR_Integer) 3))));
                Var_85 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Env_5, (MR_Integer) 4))));
                Var_86 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Env_5, (MR_Integer) 5))));
                {
                  Env1_14 = (MR_Word) MR_new_object(MR_Word, (6 * sizeof(MR_Word)), NULL, NULL);
                  MR_hl_field(MR_mktag(0), Env1_14, 0) = (MR_Box) ((MR_Unsigned) (Var_81));
                  MR_hl_field(MR_mktag(0), Env1_14, 1) = ((MR_Box) (Var_82));
                  MR_hl_field(MR_mktag(0), Env1_14, 2) = ((MR_Box) (NewOptions_13));
                  MR_hl_field(MR_mktag(0), Env1_14, 3) = ((MR_Box) (Var_84));
                  MR_hl_field(MR_mktag(0), Env1_14, 4) = ((MR_Box) (Var_85));
                  MR_hl_field(MR_mktag(0), Env1_14, 5) = ((MR_Box) (Var_86));
                }
                // direct tailcall eliminated
                ;
                next_value_of_tscc_proc_1_input_1_Env_4 = Env1_14;
                tscc_proc_1_input_1_Env_4 = next_value_of_tscc_proc_1_input_1_Env_4;
                goto top_of_proc_1;
              }
              break;
            case (MR_Integer) 2:
              {
                MR_Word AddedImports_15 = ((MR_Word) ((MR_hl_field(MR_mktag(2), Cmd_12, (MR_Integer) 0))));
                MR_Word Imports_16;
                MR_Word Var_24;
                MR_Word Env1_45;
                MR_Word Var_97;
                MR_Word Var_92;
                MR_String Var_94;
                MR_Word Var_95;
                MR_Word Var_96;
                MR_Box conv0_STATE_VARIABLE_IO_25_25;
                MR_Word next_value_of_tscc_proc_1_input_1_Env_4;

                Imports_16 = mercury__list__f_43_43_2_f_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), Var_118, AddedImports_15);
                Var_92 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(0), Env_5, (MR_Integer) 0))) & (MR_Integer) 3);
                Var_94 = ((MR_String) ((MR_hl_field(MR_mktag(0), Env_5, (MR_Integer) 2))));
                Var_95 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Env_5, (MR_Integer) 3))));
                Var_96 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Env_5, (MR_Integer) 4))));
                Var_97 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Env_5, (MR_Integer) 5))));
                {
                  Env1_45 = (MR_Word) MR_new_object(MR_Word, (6 * sizeof(MR_Word)), NULL, NULL);
                  MR_hl_field(MR_mktag(0), Env1_45, 0) = (MR_Box) ((MR_Unsigned) (Var_92));
                  MR_hl_field(MR_mktag(0), Env1_45, 1) = ((MR_Box) (Imports_16));
                  MR_hl_field(MR_mktag(0), Env1_45, 2) = ((MR_Box) (Var_94));
                  MR_hl_field(MR_mktag(0), Env1_45, 3) = ((MR_Box) (Var_95));
                  MR_hl_field(MR_mktag(0), Env1_45, 4) = ((MR_Box) (Var_96));
                  MR_hl_field(MR_mktag(0), Env1_45, 5) = ((MR_Box) (Var_97));
                }
                {
                  Var_24 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
                  MR_hl_field(MR_mktag(0), Var_24, 0) = ((MR_Box) (&mdb__interactive_query_scalar_common_5[1]));
                  MR_hl_field(MR_mktag(0), Var_24, 1) = ((MR_Box) (mdb__interactive_query__query_3_4_p_0_1));
                  MR_hl_field(MR_mktag(0), Var_24, 2) = ((MR_Box) ((MR_Integer) 1));
                  MR_hl_field(MR_mktag(0), Var_24, 3) = ((MR_Box) (Var_97));
                }
                mercury__list__foldl_4_p_2((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), (MR_Word) (&mercury__io__io__type_ctor_info_state_0), Var_24, Imports_16, ((MR_Box) ((MR_Integer) 0)), &conv0_STATE_VARIABLE_IO_25_25);
                // direct tailcall eliminated
                ;
                next_value_of_tscc_proc_1_input_1_Env_4 = Env1_45;
                tscc_proc_1_input_1_Env_4 = next_value_of_tscc_proc_1_input_1_Env_4;
                goto top_of_proc_1;
              }
              break;
          }
        }
        break;
    }
    goto tscc_end;
  }
tscc_end:;
  return;
}

static void MR_CALL 
mdb__interactive_query__query_3_4_p_0(
  MR_Word tscc_proc_2_input_1_Env_5,
  MR_Word tscc_proc_2_input_2_ReadTerm_6)
{
  MR_Word tscc_proc_1_input_1_Env_4;

  // The code for TSCC PROC 2: pred mdb.interactive_query.query_3/4-0.
  ;
  // Setup for mutual tailcalls optimized into a loop.
  ;
  // The mutually recursive procedures are:
  ;
  ;
  // proc 1 in TSCC: pred mdb.interactive_query.query_2/3-0
  ;
  // proc 2 in TSCC: pred mdb.interactive_query.query_3/4-0
  ;
  ;
  goto top_of_proc_2;
top_of_proc_1:;
  {
    MR_Word Env_4 = tscc_proc_1_input_1_Env_4;
    MR_String Prompt_6;
    MR_Word Result_7;
    MR_Word Var_15 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(0), Env_4, (MR_Integer) 0))) & (MR_Integer) 3);
    MR_Word Var_31 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Env_4, (MR_Integer) 4))));
    MR_Word Var_32 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Env_4, (MR_Integer) 5))));

    switch (Var_15) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 1:
        Prompt_6 = (MR_String) "\?- ";
        break;
      case (MR_Integer) 2:
        Prompt_6 = (MR_String) "run <-- ";
        break;
      case (MR_Integer) 0:
        Prompt_6 = (MR_String) "\?- ";
        break;
    }
    mdb__util__trace_getline_6_p_0(Var_31, Var_32, Prompt_6, &Result_7);
    switch (MR_tag((MR_Word) Result_7)) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        {
          MR_Word Var_26 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Env_4, (MR_Integer) 5))));

          mercury__io__nl_3_p_0(Var_26);
        }
        break;
      case (MR_Integer) 1:
        {
          MR_String Line_10 = ((MR_String) ((MR_hl_field(MR_mktag(1), Result_7, (MR_Integer) 0))));
          MR_Word ReadTerm_12;
          MR_Word Var_11;
          MR_Word next_value_of_tscc_proc_2_input_1_Env_5;
          MR_Word next_value_of_tscc_proc_2_input_2_ReadTerm_6;

          mercury__mercury_term_parser__read_term_from_string_4_p_0((MR_Word) (&mercury__term__term__type_ctor_info_generic_0), (MR_String) "", Line_10, &Var_11, &ReadTerm_12);
          // direct tailcall eliminated
          ;
          next_value_of_tscc_proc_2_input_1_Env_5 = Env_4;
          next_value_of_tscc_proc_2_input_2_ReadTerm_6 = ReadTerm_12;
          tscc_proc_2_input_1_Env_5 = next_value_of_tscc_proc_2_input_1_Env_5;
          tscc_proc_2_input_2_ReadTerm_6 = next_value_of_tscc_proc_2_input_2_ReadTerm_6;
          goto top_of_proc_2;
        }
        break;
      case (MR_Integer) 2:
        {
          MR_Word Error_8 = ((MR_Word) ((MR_hl_field(MR_mktag(2), Result_7, (MR_Integer) 0))));
          MR_String Msg_9;
          MR_Word Var_21;
          MR_Word Var_23;
          MR_Word next_value_of_tscc_proc_1_input_1_Env_4;

          mercury__io__error_message_2_p_0(Error_8, &Msg_9);
          Var_21 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Env_4, (MR_Integer) 5))));
          mercury__io__write_string_4_p_0(Var_21, Msg_9);
          Var_23 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Env_4, (MR_Integer) 5))));
          mercury__io__nl_3_p_0(Var_23);
          // direct tailcall eliminated
          ;
          next_value_of_tscc_proc_1_input_1_Env_4 = Env_4;
          tscc_proc_1_input_1_Env_4 = next_value_of_tscc_proc_1_input_1_Env_4;
          goto top_of_proc_1;
        }
        break;
    }
    goto tscc_end;
  }
top_of_proc_2:;
  {
    MR_Word Env_5 = tscc_proc_2_input_1_Env_5;
    MR_Word ReadTerm_6 = tscc_proc_2_input_2_ReadTerm_6;

    switch (MR_tag((MR_Word) ReadTerm_6)) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        {
          MR_Word Var_43 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Env_5, (MR_Integer) 5))));

          mercury__io__nl_3_p_0(Var_43);
        }
        break;
      case (MR_Integer) 1:
        {
          MR_String Msg_8 = ((MR_String) ((MR_hl_field(MR_mktag(1), ReadTerm_6, (MR_Integer) 0))));
          MR_Word Var_38 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Env_5, (MR_Integer) 5))));
          MR_Word Var_40;
          MR_Word next_value_of_tscc_proc_1_input_1_Env_4;

          mercury__io__write_string_4_p_0(Var_38, Msg_8);
          Var_40 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Env_5, (MR_Integer) 5))));
          mercury__io__nl_3_p_0(Var_40);
          // direct tailcall eliminated
          ;
          next_value_of_tscc_proc_1_input_1_Env_4 = Env_5;
          tscc_proc_1_input_1_Env_4 = next_value_of_tscc_proc_1_input_1_Env_4;
          goto top_of_proc_1;
        }
        break;
      case (MR_Integer) 2:
        {
          MR_Word Varset_10 = ((MR_Word) ((MR_hl_field(MR_mktag(2), ReadTerm_6, (MR_Integer) 0))));
          MR_Word Term_11 = ((MR_Word) ((MR_hl_field(MR_mktag(2), ReadTerm_6, (MR_Integer) 1))));
          MR_Word Cmd_12;
          MR_Word Var_114;
          MR_Word Var_118;

          mdb__interactive_query__parse_query_command_2_p_0(Term_11, &Cmd_12);
          Var_118 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Env_5, (MR_Integer) 1))));
          Var_114 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Env_5, (MR_Integer) 5))));
          switch (MR_tag((MR_Word) Cmd_12)) {
            default: /*NOTREACHED*/ MR_assert(0);
            case (MR_Integer) 0:
              switch (MR_unmkbody(Cmd_12)) {
                default: /*NOTREACHED*/ MR_assert(0);
                case (MR_Integer) 0:
                  mercury__io__nl_3_p_0(Var_114);
                  break;
                case (MR_Integer) 1:
                  {
                    MR_Word next_value_of_tscc_proc_1_input_1_Env_4;

                    mercury__io__flush_output_3_p_0(Var_114);
                    mdb__interactive_query__run_query_5_p_0(Env_5, Term_11, Varset_10);
                    // direct tailcall eliminated
                    ;
                    next_value_of_tscc_proc_1_input_1_Env_4 = Env_5;
                    tscc_proc_1_input_1_Env_4 = next_value_of_tscc_proc_1_input_1_Env_4;
                    goto top_of_proc_1;
                  }
                  break;
              }
              break;
            case (MR_Integer) 1:
              {
                MR_String NewOptions_13 = ((MR_String) ((MR_hl_field(MR_mktag(1), Cmd_12, (MR_Integer) 0))));
                MR_Word Env1_14;
                MR_Word Var_31;
                MR_Word Var_33;
                MR_Word Var_81;
                MR_Word Var_82;
                MR_Word Var_84;
                MR_Word Var_85;
                MR_Word Var_86;
                MR_Word next_value_of_tscc_proc_1_input_1_Env_4;

                mercury__io__print_4_p_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), Var_114, ((MR_Box) ((MR_String) "Compilation options: ")));
                Var_31 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Env_5, (MR_Integer) 5))));
                mercury__io__print_4_p_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), Var_31, ((MR_Box) (NewOptions_13)));
                Var_33 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Env_5, (MR_Integer) 5))));
                mercury__io__nl_3_p_0(Var_33);
                Var_81 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(0), Env_5, (MR_Integer) 0))) & (MR_Integer) 3);
                Var_82 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Env_5, (MR_Integer) 1))));
                Var_84 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Env_5, (MR_Integer) 3))));
                Var_85 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Env_5, (MR_Integer) 4))));
                Var_86 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Env_5, (MR_Integer) 5))));
                {
                  Env1_14 = (MR_Word) MR_new_object(MR_Word, (6 * sizeof(MR_Word)), NULL, NULL);
                  MR_hl_field(MR_mktag(0), Env1_14, 0) = (MR_Box) ((MR_Unsigned) (Var_81));
                  MR_hl_field(MR_mktag(0), Env1_14, 1) = ((MR_Box) (Var_82));
                  MR_hl_field(MR_mktag(0), Env1_14, 2) = ((MR_Box) (NewOptions_13));
                  MR_hl_field(MR_mktag(0), Env1_14, 3) = ((MR_Box) (Var_84));
                  MR_hl_field(MR_mktag(0), Env1_14, 4) = ((MR_Box) (Var_85));
                  MR_hl_field(MR_mktag(0), Env1_14, 5) = ((MR_Box) (Var_86));
                }
                // direct tailcall eliminated
                ;
                next_value_of_tscc_proc_1_input_1_Env_4 = Env1_14;
                tscc_proc_1_input_1_Env_4 = next_value_of_tscc_proc_1_input_1_Env_4;
                goto top_of_proc_1;
              }
              break;
            case (MR_Integer) 2:
              {
                MR_Word AddedImports_15 = ((MR_Word) ((MR_hl_field(MR_mktag(2), Cmd_12, (MR_Integer) 0))));
                MR_Word Imports_16;
                MR_Word Var_24;
                MR_Word Env1_45;
                MR_Word Var_97;
                MR_Word Var_92;
                MR_String Var_94;
                MR_Word Var_95;
                MR_Word Var_96;
                MR_Box conv0_STATE_VARIABLE_IO_25_25;
                MR_Word next_value_of_tscc_proc_1_input_1_Env_4;

                Imports_16 = mercury__list__f_43_43_2_f_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), Var_118, AddedImports_15);
                Var_92 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(0), Env_5, (MR_Integer) 0))) & (MR_Integer) 3);
                Var_94 = ((MR_String) ((MR_hl_field(MR_mktag(0), Env_5, (MR_Integer) 2))));
                Var_95 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Env_5, (MR_Integer) 3))));
                Var_96 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Env_5, (MR_Integer) 4))));
                Var_97 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Env_5, (MR_Integer) 5))));
                {
                  Env1_45 = (MR_Word) MR_new_object(MR_Word, (6 * sizeof(MR_Word)), NULL, NULL);
                  MR_hl_field(MR_mktag(0), Env1_45, 0) = (MR_Box) ((MR_Unsigned) (Var_92));
                  MR_hl_field(MR_mktag(0), Env1_45, 1) = ((MR_Box) (Imports_16));
                  MR_hl_field(MR_mktag(0), Env1_45, 2) = ((MR_Box) (Var_94));
                  MR_hl_field(MR_mktag(0), Env1_45, 3) = ((MR_Box) (Var_95));
                  MR_hl_field(MR_mktag(0), Env1_45, 4) = ((MR_Box) (Var_96));
                  MR_hl_field(MR_mktag(0), Env1_45, 5) = ((MR_Box) (Var_97));
                }
                {
                  Var_24 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
                  MR_hl_field(MR_mktag(0), Var_24, 0) = ((MR_Box) (&mdb__interactive_query_scalar_common_5[1]));
                  MR_hl_field(MR_mktag(0), Var_24, 1) = ((MR_Box) (mdb__interactive_query__query_3_4_p_0_1));
                  MR_hl_field(MR_mktag(0), Var_24, 2) = ((MR_Box) ((MR_Integer) 1));
                  MR_hl_field(MR_mktag(0), Var_24, 3) = ((MR_Box) (Var_97));
                }
                mercury__list__foldl_4_p_2((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), (MR_Word) (&mercury__io__io__type_ctor_info_state_0), Var_24, Imports_16, ((MR_Box) ((MR_Integer) 0)), &conv0_STATE_VARIABLE_IO_25_25);
                // direct tailcall eliminated
                ;
                next_value_of_tscc_proc_1_input_1_Env_4 = Env1_45;
                tscc_proc_1_input_1_Env_4 = next_value_of_tscc_proc_1_input_1_Env_4;
                goto top_of_proc_1;
              }
              break;
          }
        }
        break;
    }
    goto tscc_end;
  }
tscc_end:;
  return;
}

static void MR_CALL 
mdb__interactive_query__run_query_5_p_0(
  MR_Word Env_6,
  MR_Word Goal_7,
  MR_Word Varset_8)
{
  MR_String SourceFile_10;
  MR_Word MaybeMercuryOptions_11;

  SourceFile_10 = mercury__string__f_43_43_2_f_0((MR_String) "mdb_query", (MR_String) ".m");
  mercury__io__environment__get_environment_var_4_p_0((MR_String) "MERCURY_OPTIONS", &MaybeMercuryOptions_11);
  if ((MaybeMercuryOptions_11 == (MR_Word) ((MR_Unsigned) 0U)))
  {
    MR_Word Var_22 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Env_6, (MR_Integer) 5))));

    mercury__io__write_string_4_p_0(Var_22, (MR_String) "Unable to unset MERCURY_OPTIONS environment variable");
  }
  else
  {
    MR_String MercuryOptions_12 = ((MR_String) ((MR_hl_field(MR_mktag(1), MaybeMercuryOptions_11, (MR_Integer) 0))));
    MR_Word Program_13;
    MR_Integer LineNumberForDirective_14;
    MR_Word Succeeded_15;
    MR_Word Var_28;
    MR_Word Var_30;
    MR_Word Var_32;
    MR_String Var_53;

    mercury__io__environment__set_environment_var_4_p_0((MR_String) "MERCURY_OPTIONS", (MR_String) "");
    mdb__interactive_query__make_program_4_p_0(Env_6, Goal_7, Varset_8, &Program_13);
    Var_28 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Env_6, (MR_Integer) 4))));
    mercury__io__get_line_number_4_p_0(Var_28, &LineNumberForDirective_14);
    Var_30 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Env_6, (MR_Integer) 5))));
    mdb__interactive_query__write_prog_to_file_6_p_0(Var_30, LineNumberForDirective_14, Program_13, SourceFile_10);
    Var_53 = ((MR_String) ((MR_hl_field(MR_mktag(0), Env_6, (MR_Integer) 2))));
    Var_32 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Env_6, (MR_Integer) 5))));
    mdb__interactive_query__compile_file_5_p_0(Var_32, Var_53, &Succeeded_15);
    switch (Succeeded_15) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        {
        }
        break;
      case (MR_Integer) 1:
        {
          MR_Word Var_35 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Env_6, (MR_Integer) 5))));

          mdb__interactive_query__dynamically_load_and_run_4_p_0(Var_35, Program_13);
        }
        break;
    }
    mdb__interactive_query__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_99_108_101_97_110_117_112_95_113_117_101_114_121_95_95_91_49_93_95_48_3_p_0();
    mercury__io__environment__set_environment_var_4_p_0((MR_String) "MERCURY_OPTIONS", MercuryOptions_12);
  }
}

static void MR_CALL 
mdb__interactive_query__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_99_108_101_97_110_117_112_95_113_117_101_114_121_95_95_91_49_93_95_48_3_p_0(void)
{
  MR_bool succeeded;
  MR_String Var_45;
  MR_String Var_53;
  MR_String Var_55;
  MR_String Var_63;
  MR_String Var_65;
  MR_String Var_73;
  MR_String Var_75;
  MR_String Var_83;
  MR_String Var_85;
  MR_String Var_93;
  MR_String Var_95;
  MR_Word Var_52;
  MR_Word Var_62;
  MR_Word Var_72;
  MR_Word Var_82;
  MR_Word Var_92;

  Var_55 = mercury__string__f_43_43_2_f_0((MR_String) "mdb_query", (MR_String) ".m");
  Var_53 = mercury__string__f_43_43_2_f_0((MR_String) "", Var_55);
  mercury__io__file__remove_file_4_p_0(Var_53, &Var_52);
  Var_65 = mercury__string__f_43_43_2_f_0((MR_String) "mdb_query", (MR_String) ".mh");
  Var_63 = mercury__string__f_43_43_2_f_0((MR_String) "", Var_65);
  mercury__io__file__remove_file_4_p_0(Var_63, &Var_62);
  Var_75 = mercury__string__f_43_43_2_f_0((MR_String) "mdb_query", (MR_String) ".d");
  Var_73 = mercury__string__f_43_43_2_f_0((MR_String) "", Var_75);
  mercury__io__file__remove_file_4_p_0(Var_73, &Var_72);
  Var_85 = mercury__string__f_43_43_2_f_0((MR_String) "mdb_query", (MR_String) ".d");
  Var_83 = mercury__string__f_43_43_2_f_0((MR_String) "Mercury/ds/", Var_85);
  mercury__io__file__remove_file_4_p_0(Var_83, &Var_82);
  Var_95 = mercury__string__f_43_43_2_f_0((MR_String) "mdb_query", (MR_String) ".c");
  Var_93 = mercury__string__f_43_43_2_f_0((MR_String) "", Var_95);
  mercury__io__file__remove_file_4_p_0(Var_93, &Var_92);
  mdb__interactive_query__cleanup_file_4_p_0((MR_String) "Mercury/cs/", (MR_String) ".c");
  mdb__interactive_query__cleanup_file_4_p_0((MR_String) "", (MR_String) ".c_date");
  mdb__interactive_query__cleanup_file_4_p_0((MR_String) "Mercury/c_dates/", (MR_String) ".c_date");
  mdb__interactive_query__cleanup_file_4_p_0((MR_String) "", (MR_String) ".o");
  mdb__interactive_query__cleanup_file_4_p_0((MR_String) "Mercury/os/", (MR_String) ".o");
  mdb__interactive_query__cleanup_file_4_p_0((MR_String) "", (MR_String) ".pic_o");
  mdb__interactive_query__cleanup_file_4_p_0((MR_String) "Mercury/os/", (MR_String) ".pic_o");
{
#define MR_PROC_LABEL mdb__interactive_query__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_99_108_101_97_110_117_112_95_113_117_101_114_121_95_95_91_49_93_95_48_3_p_0

	MR_bool SUCCESS_INDICATOR;

		{

#if defined(MR_MAC_OSX)
    SUCCESS_INDICATOR = MR_TRUE;
#else
    SUCCESS_INDICATOR = MR_FALSE;
#endif


		;}
#undef MR_PROC_LABEL
succeeded  = SUCCESS_INDICATOR;
}
  if (succeeded)
    Var_45 = (MR_String) ".dylib";
  else
    Var_45 = (MR_String) ".so";
  mdb__interactive_query__cleanup_file_4_p_0((MR_String) "lib", Var_45);
}

static void MR_CALL 
mdb__interactive_query__cleanup_file_4_p_0(
  MR_String Prefix_5,
  MR_String Suffix_6)
{
  MR_String Var_11;
  MR_String Var_13;
  MR_Word Var_8;

  Var_13 = mercury__string__f_43_43_2_f_0((MR_String) "mdb_query", Suffix_6);
  Var_11 = mercury__string__f_43_43_2_f_0(Prefix_5, Var_13);
  mercury__io__file__remove_file_4_p_0(Var_11, &Var_8);
}

static void MR_CALL 
mdb__interactive_query__dynamically_load_and_run_4_p_0(
  MR_Word OutputStream_5,
  MR_Word Program_6)
{
  MR_bool succeeded;
  MR_String Filename_8;
  MR_Word MaybeHandle_9;
  MR_String Var_20;
  MR_String Var_22;

{
#define MR_PROC_LABEL mdb__interactive_query__dynamically_load_and_run_4_p_0

	MR_bool SUCCESS_INDICATOR;

		{

#if defined(MR_MAC_OSX)
    SUCCESS_INDICATOR = MR_TRUE;
#else
    SUCCESS_INDICATOR = MR_FALSE;
#endif


		;}
#undef MR_PROC_LABEL
succeeded  = SUCCESS_INDICATOR;
}
  if (succeeded)
    Var_22 = (MR_String) ".dylib";
  else
    Var_22 = (MR_String) ".so";
  Var_20 = mercury__string__f_43_43_2_f_0((MR_String) "mdb_query", Var_22);
  Filename_8 = mercury__string__f_43_43_2_f_0((MR_String) "./lib", Var_20);
  mdb__dl__open_6_p_0(Filename_8, (MR_Integer) 0, (MR_Integer) 0, &MaybeHandle_9);
  if (((MR_tag((MR_Word) MaybeHandle_9)) == (MR_Integer) 1))
  {
    MR_String Msg_10 = ((MR_String) ((MR_hl_field(MR_mktag(1), MaybeHandle_9, (MR_Integer) 0))));

    mercury__io__write_string_4_p_0(OutputStream_5, (MR_String) "dlopen failed: ");
    mercury__io__write_string_4_p_0(OutputStream_5, Msg_10);
    mercury__io__write_string_4_p_0(OutputStream_5, (MR_String) "\n");
  }
  else
  {
    MR_Word Handle_11 = ((MR_Word) ((MR_hl_field(MR_mktag(0), MaybeHandle_9, (MR_Integer) 0))));
    MR_Word QueryType_12 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(0), Program_6, (MR_Integer) 0))) & (MR_Integer) 3);
    MR_Word Bindings_13 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Program_6, (MR_Integer) 2))));
    MR_Word Outputs_14 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Program_6, (MR_Integer) 4))));
    MR_Word Result_15;

    switch (QueryType_12) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 1:
        mdb__interactive_query__link_and_run_cc_6_p_0(OutputStream_5, Bindings_13, Outputs_14, Handle_11);
        break;
      case (MR_Integer) 2:
        mdb__interactive_query__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_108_105_110_107_95_97_110_100_95_114_117_110_95_105_111_95_95_91_51_93_95_48_6_p_0(OutputStream_5, Bindings_13, Handle_11);
        break;
      case (MR_Integer) 0:
        mdb__interactive_query__link_and_run_normal_6_p_0(OutputStream_5, Bindings_13, Outputs_14, Handle_11);
        break;
    }
    mdb__dl__close_4_p_0(Handle_11, &Result_15);
    if (!((Result_15 == (MR_Word) ((MR_Unsigned) 0U))))
    {
      MR_String CloseMsg_16 = ((MR_String) ((MR_hl_field(MR_mktag(1), Result_15, (MR_Integer) 0))));

      mercury__io__write_string_4_p_0(OutputStream_5, (MR_String) "dlclose failed: ");
      mercury__io__write_string_4_p_0(OutputStream_5, CloseMsg_16);
      mercury__io__write_string_4_p_0(OutputStream_5, (MR_String) "\n");
    }
  }
}

static void MR_CALL 
mdb__interactive_query__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_108_105_110_107_95_97_110_100_95_114_117_110_95_105_111_95_95_91_51_93_95_48_6_p_0_1(
  MR_Box closure_arg,
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3)
{
  MR_Box closure = closure_arg;
  MR_Word conv0_Solution_8;

  mdb__interactive_query__call_run_io_5_p_0(((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3)))), ((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 4)))), &conv0_Solution_8);
  *wrapper_arg_1 = ((MR_Box) (conv0_Solution_8));
}

static void MR_CALL 
mdb__interactive_query__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_108_105_110_107_95_97_110_100_95_114_117_110_95_105_111_95_95_91_51_93_95_48_6_p_0(
  MR_Word OutputStream_7,
  MR_Word Bindings_8,
  MR_Word Handle_10)
{
  MR_Word MaybeQuery_12;

  mdb__dl__mercury_sym_5_p_0((MR_Word) (&mdb__interactive_query_scalar_common_5[0]), Handle_10, (MR_Word) (&mdb__interactive_query_scalar_common_4[5]), &MaybeQuery_12);
  if (((MR_tag((MR_Word) MaybeQuery_12)) == (MR_Integer) 1))
  {
    MR_String Msg_13 = ((MR_String) ((MR_hl_field(MR_mktag(1), MaybeQuery_12, (MR_Integer) 0))));

    mercury__io__write_string_4_p_0(OutputStream_7, (MR_String) "dlsym failed: ");
    mercury__io__write_string_4_p_0(OutputStream_7, Msg_13);
    mercury__io__write_string_4_p_0(OutputStream_7, (MR_String) "\n");
  }
  else
  {
    MR_Word QueryPred_14 = ((MR_Word) ((MR_hl_field(MR_mktag(0), MaybeQuery_12, (MR_Integer) 0))));
    MR_Word Result_15;
    MR_Word Var_22;

    {
      Var_22 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), Var_22, 0) = ((MR_Box) (&mdb__interactive_query_scalar_common_9[1]));
      MR_hl_field(MR_mktag(0), Var_22, 1) = ((MR_Box) (mdb__interactive_query__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_108_105_110_107_95_97_110_100_95_114_117_110_95_105_111_95_95_91_51_93_95_48_6_p_0_1));
      MR_hl_field(MR_mktag(0), Var_22, 2) = ((MR_Box) ((MR_Integer) 2));
      MR_hl_field(MR_mktag(0), Var_22, 3) = ((MR_Box) (QueryPred_14));
      MR_hl_field(MR_mktag(0), Var_22, 4) = ((MR_Box) (Bindings_8));
    }
    mercury__exception__try_io_4_p_1((MR_Word) (&mdb__interactive_query__mdb__interactive_query__type_ctor_info_solution_0), Var_22, &Result_15);
    if (((MR_tag((MR_Word) Result_15)) == (MR_Integer) 2))
    {
      MR_Word TypeInfo_36_36;
      MR_Word Excp_17 = ((MR_Word) ((MR_hl_field(MR_mktag(2), Result_15, (MR_Integer) 0))));
      MR_Box Var_24;

      Var_24 = mercury__univ__univ_value_1_f_0(&TypeInfo_36_36, Excp_17);
      mercury__io__write_string_4_p_0(OutputStream_7, (MR_String) "*** caught exception: ");
      mercury__io__write_line_cc_4_p_0(TypeInfo_36_36, OutputStream_7, Var_24);
    }
  }
}

static MR_bool MR_CALL 
mdb__interactive_query__link_and_run_cc_6_p_0_1(
  MR_Box closure_arg,
  MR_Box * wrapper_arg_1)
{
  MR_bool succeeded;
  MR_Box closure = closure_arg;
  MR_Word conv0_Solution_6;

  succeeded = mdb__interactive_query__call_run_cc_3_p_0(((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3)))), ((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 4)))), &conv0_Solution_6);
  if (succeeded)
  {
    *wrapper_arg_1 = ((MR_Box) (conv0_Solution_6));
    succeeded = MR_TRUE;
  }
  return succeeded;
}

static void MR_CALL 
mdb__interactive_query__link_and_run_cc_6_p_0(
  MR_Word OutputStream_7,
  MR_Word Bindings_8,
  MR_Word Outputs_9,
  MR_Word Handle_10)
{
  MR_bool succeeded;
  MR_Word MaybeQuery_12;

  mdb__dl__mercury_sym_5_p_0((MR_Word) (&mdb__interactive_query_scalar_common_4[2]), Handle_10, (MR_Word) (&mdb__interactive_query_scalar_common_4[4]), &MaybeQuery_12);
  if (((MR_tag((MR_Word) MaybeQuery_12)) == (MR_Integer) 1))
  {
    MR_String Msg_13 = ((MR_String) ((MR_hl_field(MR_mktag(1), MaybeQuery_12, (MR_Integer) 0))));

    mercury__io__write_string_4_p_0(OutputStream_7, (MR_String) "dlsym failed: ");
    mercury__io__write_string_4_p_0(OutputStream_7, Msg_13);
    mercury__io__write_string_4_p_0(OutputStream_7, (MR_String) "\n");
  }
  else
  {
    MR_Word QueryPred_14 = ((MR_Word) ((MR_hl_field(MR_mktag(0), MaybeQuery_12, (MR_Integer) 0))));
    MR_Word Result_15;
    MR_Word Var_22;

    {
      Var_22 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), Var_22, 0) = ((MR_Box) (&mdb__interactive_query_scalar_common_7[1]));
      MR_hl_field(MR_mktag(0), Var_22, 1) = ((MR_Box) (mdb__interactive_query__link_and_run_cc_6_p_0_1));
      MR_hl_field(MR_mktag(0), Var_22, 2) = ((MR_Box) ((MR_Integer) 2));
      MR_hl_field(MR_mktag(0), Var_22, 3) = ((MR_Box) (QueryPred_14));
      MR_hl_field(MR_mktag(0), Var_22, 4) = ((MR_Box) (Bindings_8));
    }
    mercury__exception__try_2_p_3((MR_Word) (&mdb__interactive_query__mdb__interactive_query__type_ctor_info_solution_0), Var_22, &Result_15);
    switch (MR_tag((MR_Word) Result_15)) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        mercury__io__write_string_4_p_0(OutputStream_7, (MR_String) "No solution.\n");
        break;
      case (MR_Integer) 1:
        {
          MR_Word Solution_16 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Result_15, (MR_Integer) 0))));

          mdb__interactive_query__write_solution_6_p_0(OutputStream_7, Outputs_9, (MR_String) "true.", Solution_16);
        }
        break;
      case (MR_Integer) 2:
        {
          MR_Word TypeInfo_37_37;
          MR_Word Excp_17 = ((MR_Word) ((MR_hl_field(MR_mktag(2), Result_15, (MR_Integer) 0))));
          MR_Box Var_23;

          Var_23 = mercury__univ__univ_value_1_f_0(&TypeInfo_37_37, Excp_17);
          mercury__io__write_string_4_p_0(OutputStream_7, (MR_String) "*** caught exception: ");
          mercury__io__write_line_cc_4_p_0(TypeInfo_37_37, OutputStream_7, Var_23);
        }
        break;
    }
  }
}

static void MR_CALL 
mdb__interactive_query__write_solution_6_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3)
{
  MR_Box closure = closure_arg;

  mdb__interactive_query__write_binding_5_p_0(((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3)))), ((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 4)))), ((MR_String) (wrapper_arg_1)));
}

static void MR_CALL 
mdb__interactive_query__write_solution_6_p_0(
  MR_Word OutputStream_7,
  MR_Word Outputs_8,
  MR_String End_9,
  MR_Word Solution_10)
{
  if ((Solution_10 == (MR_Word) ((MR_Unsigned) 0U)))
    mercury__io__write_string_4_p_0(OutputStream_7, (MR_String) "Error loading some variables.\n");
  else
  {
    MR_Word Bindings_12 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Solution_10, (MR_Integer) 0))));
    MR_Word Var_15;
    MR_Box conv0_STATE_VARIABLE_IO_16_16;

    {
      Var_15 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), Var_15, 0) = ((MR_Box) (&mdb__interactive_query_scalar_common_9[0]));
      MR_hl_field(MR_mktag(0), Var_15, 1) = ((MR_Box) (mdb__interactive_query__write_solution_6_p_0_1));
      MR_hl_field(MR_mktag(0), Var_15, 2) = ((MR_Box) ((MR_Integer) 2));
      MR_hl_field(MR_mktag(0), Var_15, 3) = ((MR_Box) (OutputStream_7));
      MR_hl_field(MR_mktag(0), Var_15, 4) = ((MR_Box) (Bindings_12));
    }
    mercury__list__foldl_4_p_10((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), (MR_Word) (&mercury__io__io__type_ctor_info_state_0), Var_15, Outputs_8, ((MR_Box) ((MR_Integer) 0)), &conv0_STATE_VARIABLE_IO_16_16);
    mercury__io__write_string_4_p_0(OutputStream_7, End_9);
    mercury__io__write_string_4_p_0(OutputStream_7, (MR_String) "\n");
  }
}

static void MR_CALL 
mdb__interactive_query__link_and_run_normal_6_p_0_3(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3)
{
  MR_Box closure = closure_arg;

  mdb__interactive_query__write_solution_6_p_0(((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3)))), ((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 4)))), ((MR_String) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 5)))), ((MR_Word) (wrapper_arg_1)));
}

static void MR_CALL 
mdb__interactive_query__link_and_run_normal_6_p_0_1(
  void * env_ptr_arg)
{
  struct mdb__interactive_query__link_and_run_normal_6_p_0_2_env_0_s * env_ptr = (struct mdb__interactive_query__link_and_run_normal_6_p_0_2_env_0_s *) (env_ptr_arg);

  *((env_ptr)->mdb__interactive_query__link_and_run_normal_6_p_0_2_env_0__wrapper_arg_1) = ((MR_Box) ((env_ptr)->mdb__interactive_query__link_and_run_normal_6_p_0_2_env_0__conv0_Solution_6));
  ((env_ptr)->mdb__interactive_query__link_and_run_normal_6_p_0_2_env_0__cont)((env_ptr)->mdb__interactive_query__link_and_run_normal_6_p_0_2_env_0__cont_env_ptr);
}

static void MR_CALL 
mdb__interactive_query__link_and_run_normal_6_p_0_2(
  MR_Box closure_arg,
  MR_Box * wrapper_arg_1,
  MR_Cont cont,
  void * cont_env_ptr)
{
  struct mdb__interactive_query__link_and_run_normal_6_p_0_2_env_0_s env;

  (env).mdb__interactive_query__link_and_run_normal_6_p_0_2_env_0__wrapper_arg_1 = wrapper_arg_1;
  (env).mdb__interactive_query__link_and_run_normal_6_p_0_2_env_0__cont = cont;
  (env).mdb__interactive_query__link_and_run_normal_6_p_0_2_env_0__cont_env_ptr = cont_env_ptr;
  {
    MR_Box closure = closure_arg;

    mdb__interactive_query__call_run_normal_3_p_0(((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3)))), ((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 4)))), &(env).mdb__interactive_query__link_and_run_normal_6_p_0_2_env_0__conv0_Solution_6, mdb__interactive_query__link_and_run_normal_6_p_0_1, &env);
  }
}

static void MR_CALL 
mdb__interactive_query__link_and_run_normal_6_p_0(
  MR_Word OutputStream_7,
  MR_Word Bindings_8,
  MR_Word Outputs_9,
  MR_Word Handle_10)
{
  MR_Word MaybeQuery_12;

  mdb__dl__mercury_sym_5_p_0((MR_Word) (&mdb__interactive_query_scalar_common_4[2]), Handle_10, (MR_Word) (&mdb__interactive_query_scalar_common_4[4]), &MaybeQuery_12);
  if (((MR_tag((MR_Word) MaybeQuery_12)) == (MR_Integer) 1))
  {
    MR_String Msg_13 = ((MR_String) ((MR_hl_field(MR_mktag(1), MaybeQuery_12, (MR_Integer) 0))));

    mercury__io__write_string_4_p_0(OutputStream_7, (MR_String) "dlsym failed: ");
    mercury__io__write_string_4_p_0(OutputStream_7, Msg_13);
    mercury__io__write_string_4_p_0(OutputStream_7, (MR_String) "\n");
  }
  else
  {
    MR_Word QueryPred_14 = ((MR_Word) ((MR_hl_field(MR_mktag(0), MaybeQuery_12, (MR_Integer) 0))));
    MR_Word MaybeExcp_15;
    MR_Word Solutions_16;
    MR_Word Var_22;
    MR_Word Var_23;
    MR_Box conv1_STATE_VARIABLE_IO_24_24;

    {
      Var_22 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), Var_22, 0) = ((MR_Box) (&mdb__interactive_query_scalar_common_7[1]));
      MR_hl_field(MR_mktag(0), Var_22, 1) = ((MR_Box) (mdb__interactive_query__link_and_run_normal_6_p_0_2));
      MR_hl_field(MR_mktag(0), Var_22, 2) = ((MR_Box) ((MR_Integer) 2));
      MR_hl_field(MR_mktag(0), Var_22, 3) = ((MR_Box) (QueryPred_14));
      MR_hl_field(MR_mktag(0), Var_22, 4) = ((MR_Box) (Bindings_8));
    }
    mercury__exception__try_all_3_p_3((MR_Word) (&mdb__interactive_query__mdb__interactive_query__type_ctor_info_solution_0), Var_22, &MaybeExcp_15, &Solutions_16);
    {
      Var_23 = (MR_Word) MR_new_object(MR_Word, (6 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), Var_23, 0) = ((MR_Box) (&mdb__interactive_query_scalar_common_8[0]));
      MR_hl_field(MR_mktag(0), Var_23, 1) = ((MR_Box) (mdb__interactive_query__link_and_run_normal_6_p_0_3));
      MR_hl_field(MR_mktag(0), Var_23, 2) = ((MR_Box) ((MR_Integer) 3));
      MR_hl_field(MR_mktag(0), Var_23, 3) = ((MR_Box) (OutputStream_7));
      MR_hl_field(MR_mktag(0), Var_23, 4) = ((MR_Box) (Outputs_9));
      MR_hl_field(MR_mktag(0), Var_23, 5) = ((MR_Box) ((MR_String) "true ;"));
    }
    mercury__list__foldl_4_p_10((MR_Word) (&mdb__interactive_query__mdb__interactive_query__type_ctor_info_solution_0), (MR_Word) (&mercury__io__io__type_ctor_info_state_0), Var_23, Solutions_16, ((MR_Box) ((MR_Integer) 0)), &conv1_STATE_VARIABLE_IO_24_24);
    if ((MaybeExcp_15 == (MR_Word) ((MR_Unsigned) 0U)))
      mercury__io__write_string_4_p_0(OutputStream_7, (MR_String) "fail.\n");
    else
    {
      MR_Word TypeInfo_44_44;
      MR_Word Excp_17 = ((MR_Word) ((MR_hl_field(MR_mktag(1), MaybeExcp_15, (MR_Integer) 0))));
      MR_Box Var_28;

      Var_28 = mercury__univ__univ_value_1_f_0(&TypeInfo_44_44, Excp_17);
      mercury__io__write_string_4_p_0(OutputStream_7, (MR_String) "*** caught exception: ");
      mercury__io__write_line_cc_4_p_0(TypeInfo_44_44, OutputStream_7, Var_28);
    }
    mercury__io__write_string_4_p_0(OutputStream_7, (MR_String) "No (more) solutions.\n");
  }
}

static void MR_CALL 
mdb__interactive_query__compile_file_5_p_0(
  MR_Word OutputStream_6,
  MR_String Options_7,
  MR_Word * Succeeded_8)
{
  MR_bool succeeded;
  MR_String Command_10;
  MR_Word Var_13;
  MR_Word Var_15;
  MR_Word Var_17;
  MR_Word Var_19;
  MR_Word Var_21;
  MR_Word Var_22;
  MR_Word Var_24;
  MR_String Var_25;
  MR_Word Result_41;

{
#define MR_PROC_LABEL mdb__interactive_query__compile_file_5_p_0

	MR_String GradeOpt;

		{

    MR_make_aligned_string(GradeOpt, (MR_String) MR_GRADE_OPT);


		;}
#undef MR_PROC_LABEL
	Var_25  = GradeOpt;
}
  {
    Var_24 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(MR_mktag(1), Var_24, 0) = ((MR_Box) (Var_25));
    MR_hl_field(MR_mktag(1), Var_24, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &mdb__interactive_query_scalar_common_1[25])));
  }
  {
    Var_22 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(MR_mktag(1), Var_22, 0) = ((MR_Box) ((MR_String) " --grade "));
    MR_hl_field(MR_mktag(1), Var_22, 1) = ((MR_Box) (Var_24));
  }
  {
    Var_21 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(MR_mktag(1), Var_21, 0) = ((MR_Box) (Options_7));
    MR_hl_field(MR_mktag(1), Var_21, 1) = ((MR_Box) (Var_22));
  }
  {
    Var_19 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(MR_mktag(1), Var_19, 0) = ((MR_Box) ((MR_String) "--allow-undefined "));
    MR_hl_field(MR_mktag(1), Var_19, 1) = ((MR_Box) (Var_21));
  }
  {
    Var_17 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(MR_mktag(1), Var_17, 0) = ((MR_Box) ((MR_String) "--output-compile-error-lines 10000 "));
    MR_hl_field(MR_mktag(1), Var_17, 1) = ((MR_Box) (Var_19));
  }
  {
    Var_15 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(MR_mktag(1), Var_15, 0) = ((MR_Box) ((MR_String) "--no-warn-simple-code --no-warn-det-decls-too-lax "));
    MR_hl_field(MR_mktag(1), Var_15, 1) = ((MR_Box) (Var_17));
  }
  {
    Var_13 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(MR_mktag(1), Var_13, 0) = ((MR_Box) ((MR_String) "mmc --infer-all --no-verbose-make -O0 --no-c-optimize "));
    MR_hl_field(MR_mktag(1), Var_13, 1) = ((MR_Box) (Var_15));
  }
  mercury__string__append_list_2_p_0(Var_13, &Command_10);
  mercury__io__call_system__call_system_4_p_0(Command_10, &Result_41);
  if (((MR_tag((MR_Word) Result_41)) == (MR_Integer) 1))
  {
    mercury__io__write_string_4_p_0(OutputStream_6, (MR_String) "Error: unable to invoke the compiler.\n");
    *Succeeded_8 = (MR_Integer) 0;
  }
  else
  {
    MR_Integer Status_42 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), Result_41, (MR_Integer) 0))));

    succeeded = (Status_42 == (MR_Integer) 0);
    if (succeeded)
      *Succeeded_8 = (MR_Integer) 1;
    else
    {
      mercury__io__write_string_4_p_0(OutputStream_6, (MR_String) "Compilation error(s) occurred.\n");
      *Succeeded_8 = (MR_Integer) 0;
    }
  }
}

static void MR_CALL 
mdb__interactive_query__write_prog_to_file_6_p_0(
  MR_Word OutputStream_7,
  MR_Integer LineNumberForDirective_8,
  MR_Word Program_9,
  MR_String FileName_10)
{
  MR_Word Result_12;

  mercury__io__open_output_4_p_0(FileName_10, &Result_12);
  if (((MR_tag((MR_Word) Result_12)) == (MR_Integer) 1))
  {
    MR_Word Error_14 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Result_12, (MR_Integer) 0))));
    MR_String Progname_15;
    MR_String ErrorMessage_16;

    mercury__io__progname_4_p_0((MR_String) "interactive", &Progname_15);
    mercury__io__error_message_2_p_0(Error_14, &ErrorMessage_16);
    mercury__io__write_string_4_p_0(OutputStream_7, Progname_15);
    mercury__io__write_string_4_p_0(OutputStream_7, (MR_String) ": error opening file \140");
    mercury__io__write_string_4_p_0(OutputStream_7, FileName_10);
    mercury__io__write_string_4_p_0(OutputStream_7, (MR_String) "\' for output:\n\t");
    mercury__io__write_string_4_p_0(OutputStream_7, ErrorMessage_16);
    mercury__io__write_string_4_p_0(OutputStream_7, (MR_String) "\n");
  }
  else
  {
    MR_Word FileStream_13 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Result_12, (MR_Integer) 0))));

    mdb__interactive_query__write_prog_to_stream_5_p_0(FileStream_13, LineNumberForDirective_8, Program_9);
    mercury__io__close_output_3_p_0(FileStream_13);
  }
}

static void MR_CALL 
mdb__interactive_query__write_prog_to_stream_5_p_0_5(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3)
{
  MR_Box closure = closure_arg;

  mdb__interactive_query__IntroducedFrom__pred__write_prog_to_stream__484__1_4_p_0(((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3)))), ((MR_String) (wrapper_arg_1)));
}

static void MR_CALL 
mdb__interactive_query__write_prog_to_stream_5_p_0_4(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3)
{
  MR_Box closure = closure_arg;

  mdb__interactive_query__write_module_import_4_p_0(((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3)))), ((MR_String) (wrapper_arg_1)));
}

static void MR_CALL 
mdb__interactive_query__write_prog_to_stream_5_p_0_3(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3)
{
  MR_Box closure = closure_arg;

  mdb__interactive_query__write_set_goal_4_p_0(((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3)))), ((MR_String) (wrapper_arg_1)));
}

static void MR_CALL 
mdb__interactive_query__write_prog_to_stream_5_p_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3)
{
  MR_Box closure = closure_arg;

  mdb__interactive_query__write_comma_var_4_p_0(((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3)))), ((MR_String) (wrapper_arg_1)));
}

static void MR_CALL 
mdb__interactive_query__write_prog_to_stream_5_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3)
{
  MR_Box closure = closure_arg;

  mdb__interactive_query__write_cast_goal_4_p_0(((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3)))), ((MR_String) (wrapper_arg_1)));
}

static void MR_CALL 
mdb__interactive_query__write_prog_to_stream_5_p_0(
  MR_Word OutputStream_6,
  MR_Integer LineNumberForDirective_7,
  MR_Word Prog_8)
{
  MR_Word QueryType_10 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(0), Prog_8, (MR_Integer) 0))) & (MR_Integer) 3);
  MR_Word Imports_11 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Prog_8, (MR_Integer) 1))));
  MR_Word Bindings_12 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Prog_8, (MR_Integer) 2))));
  MR_Word Inputs_13 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Prog_8, (MR_Integer) 3))));
  MR_Word Outputs_14 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Prog_8, (MR_Integer) 4))));
  MR_Word Goal_15 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Prog_8, (MR_Integer) 5))));
  MR_Word Varset_16 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Prog_8, (MR_Integer) 6))));
  MR_Word Var_20;
  MR_Word Var_23;
  MR_Word Var_25;
  MR_Word Var_27;
  MR_Word Var_29;
  MR_String Var_30;
  MR_Word Var_31;
  MR_Word Var_33;
  MR_Word Var_35;
  MR_Word Var_37;
  MR_Word Var_39;
  MR_Word Var_41;
  MR_String Var_42;
  MR_Word Var_43;
  MR_Word Var_45;
  MR_String Var_46;
  MR_Word Var_47;
  MR_Word Var_49;
  MR_Word Var_51;
  MR_Word Var_53;
  MR_Word Var_55;
  MR_Word Var_57;
  MR_String Var_58;
  MR_Word Var_64;
  MR_Word Var_66;
  MR_Word Var_69;
  MR_Word Var_71;
  MR_Word Var_73;
  MR_String Var_74;
  MR_Word Var_79;
  MR_Word Var_81;
  MR_String Var_83;
  MR_Word Var_87;
  MR_Word Var_114;
  MR_Word Var_122;
  MR_Word Var_130;
  MR_String Var_132;
  MR_Word Var_133;
  MR_Word Var_135;
  MR_String Var_136;
  MR_Word Var_147;
  MR_Word Var_150;
  MR_String Var_151;
  MR_String Var_188;
  MR_Box conv0_STATE_VARIABLE_IO_65_65;
  MR_Box conv1_STATE_VARIABLE_IO_80_80;
  MR_Box conv2_STATE_VARIABLE_IO_88_88;
  MR_Box conv3_STATE_VARIABLE_IO_115_115;
  MR_Box conv4_STATE_VARIABLE_IO_123_123;
  MR_Box conv5_STATE_VARIABLE_IO_146_146;

  Var_30 = mdb__interactive_query__query_type_extra_imports_1_f_0(QueryType_10);
  Var_42 = mdb__interactive_query__query_type_extra_decls_1_f_0(QueryType_10);
  Var_46 = mdb__interactive_query__query_type_detism_1_f_0(QueryType_10);
  Var_58 = mdb__interactive_query__query_type_extra_args_1_f_0(QueryType_10);
  {
    Var_57 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(MR_mktag(1), Var_57, 0) = ((MR_Box) (Var_58));
    MR_hl_field(MR_mktag(1), Var_57, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &mdb__interactive_query_scalar_common_1[5])));
  }
  {
    Var_55 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(MR_mktag(1), Var_55, 0) = ((MR_Box) ((MR_String) "run(!Bindings, Loaded"));
    MR_hl_field(MR_mktag(1), Var_55, 1) = ((MR_Box) (Var_57));
  }
  {
    Var_53 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(MR_mktag(1), Var_53, 0) = ((MR_Box) ((MR_String) "\n"));
    MR_hl_field(MR_mktag(1), Var_53, 1) = ((MR_Box) (Var_55));
  }
  {
    Var_51 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(MR_mktag(1), Var_51, 0) = ((MR_Box) ((MR_String) ":- implementation.\n"));
    MR_hl_field(MR_mktag(1), Var_51, 1) = ((MR_Box) (Var_53));
  }
  {
    Var_49 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(MR_mktag(1), Var_49, 0) = ((MR_Box) ((MR_String) "\n"));
    MR_hl_field(MR_mktag(1), Var_49, 1) = ((MR_Box) (Var_51));
  }
  {
    Var_47 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(MR_mktag(1), Var_47, 0) = ((MR_Box) ((MR_String) ".\n"));
    MR_hl_field(MR_mktag(1), Var_47, 1) = ((MR_Box) (Var_49));
  }
  {
    Var_45 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(MR_mktag(1), Var_45, 0) = ((MR_Box) (Var_46));
    MR_hl_field(MR_mktag(1), Var_45, 1) = ((MR_Box) (Var_47));
  }
  {
    Var_43 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(MR_mktag(1), Var_43, 0) = ((MR_Box) ((MR_String) ") is "));
    MR_hl_field(MR_mktag(1), Var_43, 1) = ((MR_Box) (Var_45));
  }
  {
    Var_41 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(MR_mktag(1), Var_41, 0) = ((MR_Box) (Var_42));
    MR_hl_field(MR_mktag(1), Var_41, 1) = ((MR_Box) (Var_43));
  }
  {
    Var_39 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(MR_mktag(1), Var_39, 0) = ((MR_Box) ((MR_String) "   bool::out"));
    MR_hl_field(MR_mktag(1), Var_39, 1) = ((MR_Box) (Var_41));
  }
  {
    Var_37 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(MR_mktag(1), Var_37, 0) = ((MR_Box) ((MR_String) ":- pred run(map(string, univ)::in, map(string, univ)::out,\n"));
    MR_hl_field(MR_mktag(1), Var_37, 1) = ((MR_Box) (Var_39));
  }
  {
    Var_35 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(MR_mktag(1), Var_35, 0) = ((MR_Box) ((MR_String) "\n"));
    MR_hl_field(MR_mktag(1), Var_35, 1) = ((MR_Box) (Var_37));
  }
  {
    Var_33 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(MR_mktag(1), Var_33, 0) = ((MR_Box) ((MR_String) ":- import_module univ.\n"));
    MR_hl_field(MR_mktag(1), Var_33, 1) = ((MR_Box) (Var_35));
  }
  {
    Var_31 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(MR_mktag(1), Var_31, 0) = ((MR_Box) ((MR_String) ":- import_module map.\n"));
    MR_hl_field(MR_mktag(1), Var_31, 1) = ((MR_Box) (Var_33));
  }
  {
    Var_29 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(MR_mktag(1), Var_29, 0) = ((MR_Box) (Var_30));
    MR_hl_field(MR_mktag(1), Var_29, 1) = ((MR_Box) (Var_31));
  }
  {
    Var_27 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(MR_mktag(1), Var_27, 0) = ((MR_Box) ((MR_String) ":- import_module bool.\n"));
    MR_hl_field(MR_mktag(1), Var_27, 1) = ((MR_Box) (Var_29));
  }
  {
    Var_25 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(MR_mktag(1), Var_25, 0) = ((MR_Box) ((MR_String) "\n"));
    MR_hl_field(MR_mktag(1), Var_25, 1) = ((MR_Box) (Var_27));
  }
  {
    Var_23 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(MR_mktag(1), Var_23, 0) = ((MR_Box) ((MR_String) ":- interface.\n"));
    MR_hl_field(MR_mktag(1), Var_23, 1) = ((MR_Box) (Var_25));
  }
  {
    Var_20 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(MR_mktag(1), Var_20, 0) = ((MR_Box) ((MR_String) ":- module mdb_query.\n"));
    MR_hl_field(MR_mktag(1), Var_20, 1) = ((MR_Box) (Var_23));
  }
  mercury__io__write_strings_4_p_0(OutputStream_6, Var_20);
  {
    Var_64 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(MR_mktag(0), Var_64, 0) = ((MR_Box) (&mdb__interactive_query_scalar_common_5[1]));
    MR_hl_field(MR_mktag(0), Var_64, 1) = ((MR_Box) (mdb__interactive_query__write_prog_to_stream_5_p_0_1));
    MR_hl_field(MR_mktag(0), Var_64, 2) = ((MR_Box) ((MR_Integer) 1));
    MR_hl_field(MR_mktag(0), Var_64, 3) = ((MR_Box) (OutputStream_6));
  }
  mercury__list__foldl_4_p_2((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), (MR_Word) (&mercury__io__io__type_ctor_info_state_0), Var_64, Inputs_13, ((MR_Box) ((MR_Integer) 0)), &conv0_STATE_VARIABLE_IO_65_65);
  Var_74 = mdb__interactive_query__query_module_name_0_f_0();
  {
    Var_73 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(MR_mktag(1), Var_73, 0) = ((MR_Box) (Var_74));
    MR_hl_field(MR_mktag(1), Var_73, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &mdb__interactive_query_scalar_common_1[6])));
  }
  {
    Var_71 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(MR_mktag(1), Var_71, 0) = ((MR_Box) ((MR_String) "       "));
    MR_hl_field(MR_mktag(1), Var_71, 1) = ((MR_Box) (Var_73));
  }
  {
    Var_69 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(MR_mktag(1), Var_69, 0) = ((MR_Box) ((MR_String) "   then\n"));
    MR_hl_field(MR_mktag(1), Var_69, 1) = ((MR_Box) (Var_71));
  }
  {
    Var_66 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(MR_mktag(1), Var_66, 0) = ((MR_Box) ((MR_String) "       true\n"));
    MR_hl_field(MR_mktag(1), Var_66, 1) = ((MR_Box) (Var_69));
  }
  mercury__io__write_strings_4_p_0(OutputStream_6, Var_66);
  mdb__interactive_query__write_args_4_p_0(OutputStream_6, Inputs_13);
  {
    Var_79 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(MR_mktag(0), Var_79, 0) = ((MR_Box) (&mdb__interactive_query_scalar_common_5[1]));
    MR_hl_field(MR_mktag(0), Var_79, 1) = ((MR_Box) (mdb__interactive_query__write_prog_to_stream_5_p_0_2));
    MR_hl_field(MR_mktag(0), Var_79, 2) = ((MR_Box) ((MR_Integer) 1));
    MR_hl_field(MR_mktag(0), Var_79, 3) = ((MR_Box) (OutputStream_6));
  }
  mercury__list__foldl_4_p_2((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), (MR_Word) (&mercury__io__io__type_ctor_info_state_0), Var_79, Outputs_14, ((MR_Box) ((MR_Integer) 0)), &conv1_STATE_VARIABLE_IO_80_80);
  Var_83 = mdb__interactive_query__query_type_extra_args_1_f_0(QueryType_10);
  {
    Var_81 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(MR_mktag(1), Var_81, 0) = ((MR_Box) (Var_83));
    MR_hl_field(MR_mktag(1), Var_81, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &mdb__interactive_query_scalar_common_1[7])));
  }
  mercury__io__write_strings_4_p_0(OutputStream_6, Var_81);
  {
    Var_87 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(MR_mktag(0), Var_87, 0) = ((MR_Box) (&mdb__interactive_query_scalar_common_5[1]));
    MR_hl_field(MR_mktag(0), Var_87, 1) = ((MR_Box) (mdb__interactive_query__write_prog_to_stream_5_p_0_3));
    MR_hl_field(MR_mktag(0), Var_87, 2) = ((MR_Box) ((MR_Integer) 1));
    MR_hl_field(MR_mktag(0), Var_87, 3) = ((MR_Box) (OutputStream_6));
  }
  mercury__list__foldl_4_p_2((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), (MR_Word) (&mercury__io__io__type_ctor_info_state_0), Var_87, Outputs_14, ((MR_Box) ((MR_Integer) 0)), &conv2_STATE_VARIABLE_IO_88_88);
  mercury__io__write_strings_4_p_0(OutputStream_6, (MR_Word) (MR_mkword(MR_mktag(1), &mdb__interactive_query_scalar_common_1[13])));
  mdb__interactive_query__write_arg_types_5_p_0(OutputStream_6, Bindings_12, Inputs_13);
  mercury__io__write_strings_4_p_0(OutputStream_6, (MR_Word) (MR_mkword(MR_mktag(1), &mdb__interactive_query_scalar_common_1[17])));
  {
    Var_114 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(MR_mktag(0), Var_114, 0) = ((MR_Box) (&mdb__interactive_query_scalar_common_5[1]));
    MR_hl_field(MR_mktag(0), Var_114, 1) = ((MR_Box) (mdb__interactive_query__write_prog_to_stream_5_p_0_4));
    MR_hl_field(MR_mktag(0), Var_114, 2) = ((MR_Box) ((MR_Integer) 1));
    MR_hl_field(MR_mktag(0), Var_114, 3) = ((MR_Box) (OutputStream_6));
  }
  mercury__list__foldl_4_p_2((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), (MR_Word) (&mercury__io__io__type_ctor_info_state_0), Var_114, Imports_11, ((MR_Box) ((MR_Integer) 0)), &conv3_STATE_VARIABLE_IO_115_115);
  mercury__io__write_strings_4_p_0(OutputStream_6, (MR_Word) (MR_mkword(MR_mktag(1), &mdb__interactive_query_scalar_common_1[19])));
  {
    Var_122 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(MR_mktag(0), Var_122, 0) = ((MR_Box) (&mdb__interactive_query_scalar_common_5[1]));
    MR_hl_field(MR_mktag(0), Var_122, 1) = ((MR_Box) (mdb__interactive_query__write_prog_to_stream_5_p_0_5));
    MR_hl_field(MR_mktag(0), Var_122, 2) = ((MR_Box) ((MR_Integer) 1));
    MR_hl_field(MR_mktag(0), Var_122, 3) = ((MR_Box) (OutputStream_6));
  }
  mercury__list__foldl_4_p_2((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), (MR_Word) (&mercury__io__io__type_ctor_info_state_0), Var_122, Outputs_14, ((MR_Box) ((MR_Integer) 0)), &conv4_STATE_VARIABLE_IO_123_123);
  Var_132 = mdb__interactive_query__query_type_extra_modes_1_f_0(QueryType_10);
  Var_136 = mdb__interactive_query__query_type_detism_1_f_0(QueryType_10);
  {
    Var_135 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(MR_mktag(1), Var_135, 0) = ((MR_Box) (Var_136));
    MR_hl_field(MR_mktag(1), Var_135, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &mdb__interactive_query_scalar_common_1[22])));
  }
  {
    Var_133 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(MR_mktag(1), Var_133, 0) = ((MR_Box) ((MR_String) ") is "));
    MR_hl_field(MR_mktag(1), Var_133, 1) = ((MR_Box) (Var_135));
  }
  {
    Var_130 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(MR_mktag(1), Var_130, 0) = ((MR_Box) (Var_132));
    MR_hl_field(MR_mktag(1), Var_130, 1) = ((MR_Box) (Var_133));
  }
  mercury__io__write_strings_4_p_0(OutputStream_6, Var_130);
  mdb__interactive_query__write_args_4_p_0(OutputStream_6, Inputs_13);
  mercury__list__foldl_4_p_2((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), (MR_Word) (&mercury__io__io__type_ctor_info_state_0), Var_79, Outputs_14, ((MR_Box) ((MR_Integer) 0)), &conv5_STATE_VARIABLE_IO_146_146);
  Var_151 = mdb__interactive_query__query_type_rule_1_f_0(QueryType_10);
  {
    Var_150 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(MR_mktag(1), Var_150, 0) = ((MR_Box) (Var_151));
    MR_hl_field(MR_mktag(1), Var_150, 1) = ((MR_Box) ((MR_Unsigned) 0U));
  }
  {
    Var_147 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(MR_mktag(1), Var_147, 0) = ((MR_Box) ((MR_String) ") "));
    MR_hl_field(MR_mktag(1), Var_147, 1) = ((MR_Box) (Var_150));
  }
  mercury__io__write_strings_4_p_0(OutputStream_6, Var_147);
  mercury__io__write_string_4_p_0(OutputStream_6, (MR_String) "\n#");
  mercury__string__format__format_signed_int_component_nowidth_noprec_3_p_0((MR_Word) (&mdb__interactive_query_scalar_common_6[0]), LineNumberForDirective_7, &Var_188);
  mercury__io__write_string_4_p_0(OutputStream_6, Var_188);
  mercury__io__write_string_4_p_0(OutputStream_6, (MR_String) "\n");
  mercury__io__write_string_4_p_0(OutputStream_6, (MR_String) "   ( ");
  mercury__term_io__write_term_5_p_0((MR_Word) (&mercury__term__term__type_ctor_info_generic_0), OutputStream_6, Varset_16, Goal_15);
  mercury__io__write_string_4_p_0(OutputStream_6, (MR_String) " ).\n");
}

static MR_String MR_CALL 
mdb__interactive_query__query_module_name_0_f_0(void)
{
  return (MR_String) "mdb_query";
}

static void MR_CALL 
mdb__interactive_query__write_args_4_p_0(
  MR_Word OutputStream_5,
  MR_Word Vars_6)
{
  if (!((Vars_6 == (MR_Word) ((MR_Unsigned) 0U))))
  {
    MR_String HeadVar_8 = ((MR_String) ((MR_hl_field(MR_mktag(1), Vars_6, (MR_Integer) 0))));
    MR_Word TailVars_9 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Vars_6, (MR_Integer) 1))));

    mercury__io__write_string_4_p_0(OutputStream_5, (MR_String) "(");
    mercury__io__write_string_4_p_0(OutputStream_5, HeadVar_8);
    mdb__interactive_query__write_comma_args_4_p_0(OutputStream_5, TailVars_9);
    mercury__io__write_string_4_p_0(OutputStream_5, (MR_String) ")");
  }
}

static void MR_CALL 
mdb__interactive_query__write_comma_args_4_p_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2)
{
  while (MR_TRUE)
  {
    // setup for model_det tailcalls optimized into a loop
    ;
    if (!((HeadVar__2_2 == (MR_Word) ((MR_Unsigned) 0U))))
    {
      MR_String Var_10 = ((MR_String) ((MR_hl_field(MR_mktag(1), HeadVar__2_2, (MR_Integer) 0))));
      MR_Word Vars_11 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__2_2, (MR_Integer) 1))));
      MR_Word next_value_of_HeadVar__2_2;

      mercury__io__write_string_4_p_0(HeadVar__1_1, (MR_String) ", ");
      mercury__io__write_string_4_p_0(HeadVar__1_1, Var_10);
      // direct tailcall eliminated
      ;
      next_value_of_HeadVar__2_2 = Vars_11;
      HeadVar__2_2 = next_value_of_HeadVar__2_2;
      continue;
    }
    break;
  }
}

static void MR_CALL 
mdb__interactive_query__write_arg_types_5_p_0(
  MR_Word OutputStream_6,
  MR_Word Bindings_7,
  MR_Word Vars_8)
{
  if (!((Vars_8 == (MR_Word) ((MR_Unsigned) 0U))))
  {
    MR_Word TypeInfo_19_33;
    MR_String HeadVar_10 = ((MR_String) ((MR_hl_field(MR_mktag(1), Vars_8, (MR_Integer) 0))));
    MR_Word TailVars_11 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Vars_8, (MR_Integer) 1))));
    MR_Word Univ_26;
    MR_String Var_27;
    MR_Word Var_29;
    MR_Box conv0_Univ_26;
    MR_Box Var_30;

    mercury__io__write_string_4_p_0(OutputStream_6, (MR_String) "(");
    mercury__map__lookup_3_p_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), (MR_Word) (&mercury__univ__univ__type_ctor_info_univ_0), Bindings_7, ((MR_Box) (HeadVar_10)), &conv0_Univ_26);
    Univ_26 = ((MR_Word) (conv0_Univ_26));
    Var_30 = mercury__univ__univ_value_1_f_0(&TypeInfo_19_33, Univ_26);
    Var_29 = mercury__type_desc__type_of_1_f_0(TypeInfo_19_33);
    Var_27 = mercury__type_desc__type_name_1_f_0(Var_29);
    mercury__io__write_string_4_p_0(OutputStream_6, Var_27);
    mdb__interactive_query__write_comma_var_type_5_p_0(OutputStream_6, Bindings_7, TailVars_11);
    mercury__io__write_string_4_p_0(OutputStream_6, (MR_String) ")");
  }
}

static void MR_CALL 
mdb__interactive_query__write_comma_var_type_5_p_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3)
{
  while (MR_TRUE)
  {
    // setup for model_det tailcalls optimized into a loop
    ;
    if (!((HeadVar__3_3 == (MR_Word) ((MR_Unsigned) 0U))))
    {
      MR_Word TypeInfo_19_35;
      MR_String Var_13 = ((MR_String) ((MR_hl_field(MR_mktag(1), HeadVar__3_3, (MR_Integer) 0))));
      MR_Word Vars_14 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__3_3, (MR_Integer) 1))));
      MR_Word Univ_28;
      MR_String Var_29;
      MR_Word Var_31;
      MR_Box conv0_Univ_28;
      MR_Box Var_32;
      MR_Word next_value_of_HeadVar__3_3;

      mercury__io__write_string_4_p_0(HeadVar__1_1, (MR_String) ", ");
      mercury__map__lookup_3_p_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), (MR_Word) (&mercury__univ__univ__type_ctor_info_univ_0), HeadVar__2_2, ((MR_Box) (Var_13)), &conv0_Univ_28);
      Univ_28 = ((MR_Word) (conv0_Univ_28));
      Var_32 = mercury__univ__univ_value_1_f_0(&TypeInfo_19_35, Univ_28);
      Var_31 = mercury__type_desc__type_of_1_f_0(TypeInfo_19_35);
      Var_29 = mercury__type_desc__type_name_1_f_0(Var_31);
      mercury__io__write_string_4_p_0(HeadVar__1_1, Var_29);
      // direct tailcall eliminated
      ;
      next_value_of_HeadVar__3_3 = Vars_14;
      HeadVar__3_3 = next_value_of_HeadVar__3_3;
      continue;
    }
    break;
  }
}

static MR_String MR_CALL 
mdb__interactive_query__query_type_rule_1_f_0(
  MR_Word HeadVar__1_1)
{
  MR_String HeadVar__2_2;

  switch (HeadVar__1_1) {
    default: /*NOTREACHED*/ MR_assert(0);
    case (MR_Integer) 1:
      HeadVar__2_2 = (MR_String) ":-";
      break;
    case (MR_Integer) 2:
      HeadVar__2_2 = (MR_String) "-->";
      break;
    case (MR_Integer) 0:
      HeadVar__2_2 = (MR_String) ":-";
      break;
  }
  return HeadVar__2_2;
}

static MR_String MR_CALL 
mdb__interactive_query__query_type_extra_args_1_f_0(
  MR_Word HeadVar__1_1)
{
  MR_String HeadVar__2_2;

  switch (HeadVar__1_1) {
    default: /*NOTREACHED*/ MR_assert(0);
    case (MR_Integer) 1:
      HeadVar__2_2 = (MR_String) "";
      break;
    case (MR_Integer) 2:
      HeadVar__2_2 = (MR_String) ", !IO";
      break;
    case (MR_Integer) 0:
      HeadVar__2_2 = (MR_String) "";
      break;
  }
  return HeadVar__2_2;
}

static MR_String MR_CALL 
mdb__interactive_query__query_type_extra_modes_1_f_0(
  MR_Word HeadVar__1_1)
{
  MR_String HeadVar__2_2;

  switch (HeadVar__1_1) {
    default: /*NOTREACHED*/ MR_assert(0);
    case (MR_Integer) 1:
      HeadVar__2_2 = (MR_String) "";
      break;
    case (MR_Integer) 2:
      HeadVar__2_2 = (MR_String) ", di, uo";
      break;
    case (MR_Integer) 0:
      HeadVar__2_2 = (MR_String) "";
      break;
  }
  return HeadVar__2_2;
}

static MR_String MR_CALL 
mdb__interactive_query__query_type_extra_decls_1_f_0(
  MR_Word HeadVar__1_1)
{
  MR_String HeadVar__2_2;

  switch (HeadVar__1_1) {
    default: /*NOTREACHED*/ MR_assert(0);
    case (MR_Integer) 1:
      HeadVar__2_2 = (MR_String) "";
      break;
    case (MR_Integer) 2:
      HeadVar__2_2 = (MR_String) ", io::di, io::uo";
      break;
    case (MR_Integer) 0:
      HeadVar__2_2 = (MR_String) "";
      break;
  }
  return HeadVar__2_2;
}

static MR_String MR_CALL 
mdb__interactive_query__query_type_extra_imports_1_f_0(
  MR_Word HeadVar__1_1)
{
  MR_String HeadVar__2_2;

  switch (HeadVar__1_1) {
    default: /*NOTREACHED*/ MR_assert(0);
    case (MR_Integer) 1:
      HeadVar__2_2 = (MR_String) "";
      break;
    case (MR_Integer) 2:
      HeadVar__2_2 = (MR_String) ":- import_module io.\n";
      break;
    case (MR_Integer) 0:
      HeadVar__2_2 = (MR_String) "";
      break;
  }
  return HeadVar__2_2;
}

static MR_String MR_CALL 
mdb__interactive_query__query_type_detism_1_f_0(
  MR_Word HeadVar__1_1)
{
  MR_String HeadVar__2_2;

  switch (HeadVar__1_1) {
    default: /*NOTREACHED*/ MR_assert(0);
    case (MR_Integer) 1:
      HeadVar__2_2 = (MR_String) "cc_nondet";
      break;
    case (MR_Integer) 2:
      HeadVar__2_2 = (MR_String) "cc_multi";
      break;
    case (MR_Integer) 0:
      HeadVar__2_2 = (MR_String) "nondet";
      break;
  }
  return HeadVar__2_2;
}

static MR_bool MR_CALL 
mdb__interactive_query__make_program_4_p_0_3(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1)
{
  MR_bool succeeded;
  MR_Box closure = closure_arg;

  succeeded = mdb__interactive_query__IntroducedFrom__pred__make_program__390__1_1_p_0(((MR_String) (wrapper_arg_1)));
  return succeeded;
}

static MR_bool MR_CALL 
mdb__interactive_query__make_program_4_p_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1)
{
  MR_bool succeeded;
  MR_Box closure = closure_arg;

  succeeded = mdb__interactive_query__IntroducedFrom__pred__make_program__385__1_2_p_0(((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3)))), ((MR_String) (wrapper_arg_1)));
  return succeeded;
}

static MR_bool MR_CALL 
mdb__interactive_query__make_program_4_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2)
{
  MR_bool succeeded;
  MR_Box closure = closure_arg;
  MR_String conv0_HeadVar__3_50;

  succeeded = mdb__interactive_query__IntroducedFrom__pred__make_program__384__1_3_p_0(((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3)))), ((MR_Word) (wrapper_arg_1)), &conv0_HeadVar__3_50);
  if (succeeded)
  {
    *wrapper_arg_2 = ((MR_Box) (conv0_HeadVar__3_50));
    succeeded = MR_TRUE;
  }
  return succeeded;
}

static void MR_CALL 
mdb__interactive_query__make_program_4_p_0(
  MR_Word Env_5,
  MR_Word Goal_6,
  MR_Word Varset_7,
  MR_Word * Program_8)
{
  MR_bool succeeded;
  MR_Word QueryType_9 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(0), Env_5, (MR_Integer) 0))) & (MR_Integer) 3);
  MR_Word Vars0_10;
  MR_Word Vars1_11;
  MR_Word Vars_12;
  MR_Word Inputs_13;
  MR_Word Outputs0_14;
  MR_Word Outputs_16;
  MR_Word Var_17;
  MR_Word Var_18;
  MR_Word Var_19;
  MR_Word Var_24;
  MR_Word Var_39;

  mercury__term__vars_2_p_0((MR_Word) (&mercury__term__term__type_ctor_info_generic_0), Goal_6, &Vars0_10);
  mercury__list__remove_dups_2_p_0((MR_Word) (&mdb__interactive_query_scalar_common_1[0]), Vars0_10, &Vars1_11);
  {
    Var_17 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(MR_mktag(0), Var_17, 0) = ((MR_Box) (&mdb__interactive_query_scalar_common_7[0]));
    MR_hl_field(MR_mktag(0), Var_17, 1) = ((MR_Box) (mdb__interactive_query__make_program_4_p_0_1));
    MR_hl_field(MR_mktag(0), Var_17, 2) = ((MR_Box) ((MR_Integer) 1));
    MR_hl_field(MR_mktag(0), Var_17, 3) = ((MR_Box) (Varset_7));
  }
  mercury__list__filter_map_3_p_0((MR_Word) (&mdb__interactive_query_scalar_common_1[0]), (MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), Var_17, Vars1_11, &Vars_12);
  Var_19 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Env_5, (MR_Integer) 3))));
  {
    Var_18 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(MR_mktag(0), Var_18, 0) = ((MR_Box) (&mdb__interactive_query_scalar_common_4[3]));
    MR_hl_field(MR_mktag(0), Var_18, 1) = ((MR_Box) (mdb__interactive_query__make_program_4_p_0_2));
    MR_hl_field(MR_mktag(0), Var_18, 2) = ((MR_Box) ((MR_Integer) 1));
    MR_hl_field(MR_mktag(0), Var_18, 3) = ((MR_Box) (Var_19));
  }
  mercury__list__filter_4_p_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), Var_18, Vars_12, &Inputs_13, &Outputs0_14);
  switch (QueryType_9) {
    default: /*NOTREACHED*/ MR_assert(0);
    case (MR_Integer) 1:
    case (MR_Integer) 0:
      mercury__list__filter_3_p_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), (MR_Word) (&mdb__interactive_query_scalar_common_2[2]), Outputs0_14, &Outputs_16);
      break;
    case (MR_Integer) 2:
      Outputs_16 = (MR_Word) ((MR_Unsigned) 0U);
      break;
  }
  Var_24 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Env_5, (MR_Integer) 1))));
  Var_39 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Env_5, (MR_Integer) 3))));
  {
    MR_Word base;
    base = (MR_Word) MR_new_object(MR_Word, (7 * sizeof(MR_Word)), NULL, NULL);
    *Program_8 = base;
    MR_hl_field(MR_mktag(0), base, 0) = (MR_Box) ((MR_Unsigned) (QueryType_9));
    MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (Var_24));
    MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (Var_39));
    MR_hl_field(MR_mktag(0), base, 3) = ((MR_Box) (Inputs_13));
    MR_hl_field(MR_mktag(0), base, 4) = ((MR_Box) (Outputs_16));
    MR_hl_field(MR_mktag(0), base, 5) = ((MR_Box) (Goal_6));
    MR_hl_field(MR_mktag(0), base, 6) = ((MR_Box) (Varset_7));
  }
}

static void MR_CALL 
mdb__interactive_query__parse_query_command_2_p_0(
  MR_Word Term_3,
  MR_Word * Cmd_4)
{
  MR_bool succeeded = ((MR_tag((MR_Word) Term_3)) == (MR_Integer) 0);
  MR_Word Var_11;
  MR_String Var_12;
  MR_Word Var_13;

  if (succeeded)
  {
    Var_11 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Term_3, (MR_Integer) 0))));
    Var_13 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Term_3, (MR_Integer) 1))));
    succeeded = ((MR_tag((MR_Word) Var_11)) == (MR_Integer) 0);
    if (succeeded)
    {
      Var_12 = ((MR_String) ((MR_hl_field(MR_mktag(0), Var_11, (MR_Integer) 0))));
      succeeded = (strcmp(Var_12, (MR_String) "quit") == 0);
      if (succeeded)
        succeeded = (Var_13 == (MR_Word) ((MR_Unsigned) 0U));
    }
  }
  if (succeeded)
    *Cmd_4 = (MR_Word) ((MR_Unsigned) 0U);
  else
  {
    MR_String Options_8;
    MR_Word Subterm_6;
    MR_Word Var_14;
    MR_String Var_15;
    MR_Word Var_16;
    MR_Word Var_17;
    MR_Word Var_18;
    MR_Word Var_19;

    succeeded = ((MR_tag((MR_Word) Term_3)) == (MR_Integer) 0);
    if (succeeded)
    {
      Var_14 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Term_3, (MR_Integer) 0))));
      Var_16 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Term_3, (MR_Integer) 1))));
      succeeded = ((MR_tag((MR_Word) Var_14)) == (MR_Integer) 0);
      if (succeeded)
      {
        Var_15 = ((MR_String) ((MR_hl_field(MR_mktag(0), Var_14, (MR_Integer) 0))));
        succeeded = (strcmp(Var_15, (MR_String) "options") == 0);
        if (succeeded)
        {
          succeeded = (Var_16 != (MR_Word) ((MR_Unsigned) 0U));
          if (succeeded)
          {
            Subterm_6 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Var_16, (MR_Integer) 0))));
            Var_17 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Var_16, (MR_Integer) 1))));
            succeeded = (Var_17 == (MR_Word) ((MR_Unsigned) 0U));
            if (succeeded)
            {
              succeeded = ((MR_tag((MR_Word) Subterm_6)) == (MR_Integer) 0);
              if (succeeded)
              {
                Var_18 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Subterm_6, (MR_Integer) 0))));
                Var_19 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Subterm_6, (MR_Integer) 1))));
                succeeded = ((MR_tag((MR_Word) Var_18)) == (MR_Integer) 2);
                if (succeeded)
                {
                  Options_8 = ((MR_String) ((MR_hl_field(MR_mktag(2), Var_18, (MR_Integer) 0))));
                  succeeded = (Var_19 == (MR_Word) ((MR_Unsigned) 0U));
                }
              }
            }
          }
        }
      }
    }
    if (succeeded)
      {
        MR_Word base;
        base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
        *Cmd_4 = base;
        MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (Options_8));
      }
    else
    {
      MR_Word Imports_10;

      succeeded = mdb__interactive_query__term_to_list_2_p_0(Term_3, &Imports_10);
      if (succeeded)
        {
          MR_Word base;
          base = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
          *Cmd_4 = base;
          MR_hl_field(MR_mktag(2), base, 0) = ((MR_Box) (Imports_10));
        }
      else
        *Cmd_4 = (MR_Word) ((MR_Unsigned) 4U);
    }
  }
}

static MR_bool MR_CALL 
mdb__interactive_query__term_to_list_2_p_0(
  MR_Word HeadVar__1_1,
  MR_Word * HeadVar__2_2)
{
  MR_bool succeeded = ((MR_tag((MR_Word) HeadVar__1_1)) == (MR_Integer) 0);
  MR_Word Var_21;
  MR_Word Var_22;
  MR_String Var_23;

  if (succeeded)
  {
    Var_22 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__1_1, (MR_Integer) 0))));
    Var_21 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__1_1, (MR_Integer) 1))));
    succeeded = ((MR_tag((MR_Word) Var_22)) == (MR_Integer) 0);
    if (succeeded)
    {
      Var_23 = ((MR_String) ((MR_hl_field(MR_mktag(0), Var_22, (MR_Integer) 0))));
      if ((Var_21 == (MR_Word) ((MR_Unsigned) 0U)))
      {
        succeeded = (strcmp(Var_23, (MR_String) "[]") == 0);
        if (succeeded)
        {
          *HeadVar__2_2 = (MR_Word) ((MR_Unsigned) 0U);
          succeeded = MR_TRUE;
        }
      }
      else
      {
        MR_String Module_7;
        MR_Word Rest_9;
        MR_Word Modules_11;
        MR_Word Var_15;
        MR_Word Var_16;
        MR_Word Var_17;
        MR_Word Var_18;
        MR_Word Var_19;

        succeeded = (strcmp(Var_23, (MR_String) "[|]") == 0);
        if (succeeded)
        {
          Var_15 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Var_21, (MR_Integer) 0))));
          Var_18 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Var_21, (MR_Integer) 1))));
          succeeded = ((MR_tag((MR_Word) Var_15)) == (MR_Integer) 0);
          if (succeeded)
          {
            Var_16 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Var_15, (MR_Integer) 0))));
            Var_17 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Var_15, (MR_Integer) 1))));
            succeeded = (Var_17 == (MR_Word) ((MR_Unsigned) 0U));
            if (succeeded)
            {
              succeeded = ((MR_tag((MR_Word) Var_16)) == (MR_Integer) 0);
              if (succeeded)
              {
                Module_7 = ((MR_String) ((MR_hl_field(MR_mktag(0), Var_16, (MR_Integer) 0))));
                succeeded = (Var_18 != (MR_Word) ((MR_Unsigned) 0U));
                if (succeeded)
                {
                  Rest_9 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Var_18, (MR_Integer) 0))));
                  Var_19 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Var_18, (MR_Integer) 1))));
                  succeeded = (Var_19 == (MR_Word) ((MR_Unsigned) 0U));
                  if (succeeded)
                  {
                    succeeded = mdb__interactive_query__term_to_list_2_p_0(Rest_9, &Modules_11);
                    if (succeeded)
                    {
                      {
                        MR_Word base;
                        base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                        *HeadVar__2_2 = base;
                        MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (Module_7));
                        MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (Modules_11));
                      }
                      succeeded = MR_TRUE;
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
  return succeeded;
}

static MR_bool MR_CALL 
mdb__interactive_query____Unify____bindings_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  MR_bool succeeded;

  succeeded = mdb__interactive_query____Unify____bindings_0_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
  return succeeded;
}

static void MR_CALL 
mdb__interactive_query____Compare____bindings_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  MR_Word conv0_HeadVar__1_1;

  mdb__interactive_query____Compare____bindings_0_0(&conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
  *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
}

static MR_bool MR_CALL 
mdb__interactive_query____Unify____imports_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  MR_bool succeeded;

  succeeded = mdb__interactive_query____Unify____imports_0_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
  return succeeded;
}

static void MR_CALL 
mdb__interactive_query____Compare____imports_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  MR_Word conv0_HeadVar__1_1;

  mdb__interactive_query____Compare____imports_0_0(&conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
  *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
}

static MR_bool MR_CALL 
mdb__interactive_query____Unify____interactive_query_response_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  MR_bool succeeded;

  succeeded = mdb__interactive_query____Unify____interactive_query_response_0_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
  return succeeded;
}

static void MR_CALL 
mdb__interactive_query____Compare____interactive_query_response_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  MR_Word conv0_HeadVar__1_1;

  mdb__interactive_query____Compare____interactive_query_response_0_0(&conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
  *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
}

static MR_bool MR_CALL 
mdb__interactive_query____Unify____options_string_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  MR_bool succeeded;

  succeeded = mdb__interactive_query____Unify____options_string_0_0(((MR_String) (wrapper_arg_1)), ((MR_String) (wrapper_arg_2)));
  return succeeded;
}

static void MR_CALL 
mdb__interactive_query____Compare____options_string_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  MR_Word conv0_HeadVar__1_1;

  mdb__interactive_query____Compare____options_string_0_0(&conv0_HeadVar__1_1, ((MR_String) (wrapper_arg_2)), ((MR_String) (wrapper_arg_3)));
  *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
}

static MR_bool MR_CALL 
mdb__interactive_query____Unify____prog_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  MR_bool succeeded;

  succeeded = mdb__interactive_query____Unify____prog_0_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
  return succeeded;
}

static void MR_CALL 
mdb__interactive_query____Compare____prog_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  MR_Word conv0_HeadVar__1_1;

  mdb__interactive_query____Compare____prog_0_0(&conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
  *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
}

static MR_bool MR_CALL 
mdb__interactive_query____Unify____query_command_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  MR_bool succeeded;

  succeeded = mdb__interactive_query____Unify____query_command_0_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
  return succeeded;
}

static void MR_CALL 
mdb__interactive_query____Compare____query_command_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  MR_Word conv0_HeadVar__1_1;

  mdb__interactive_query____Compare____query_command_0_0(&conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
  *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
}

static MR_bool MR_CALL 
mdb__interactive_query____Unify____query_env_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  MR_bool succeeded;

  succeeded = mdb__interactive_query____Unify____query_env_0_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
  return succeeded;
}

static void MR_CALL 
mdb__interactive_query____Compare____query_env_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  MR_Word conv0_HeadVar__1_1;

  mdb__interactive_query____Compare____query_env_0_0(&conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
  *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
}

static MR_bool MR_CALL 
mdb__interactive_query____Unify____query_type_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  MR_bool succeeded;

  succeeded = mdb__interactive_query____Unify____query_type_0_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
  return succeeded;
}

static void MR_CALL 
mdb__interactive_query____Compare____query_type_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  MR_Word conv0_HeadVar__1_1;

  mdb__interactive_query____Compare____query_type_0_0(&conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
  *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
}

static MR_bool MR_CALL 
mdb__interactive_query____Unify____run_cc_pred_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  MR_bool succeeded;

  succeeded = mdb__interactive_query____Unify____run_cc_pred_0_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
  return succeeded;
}

static void MR_CALL 
mdb__interactive_query____Compare____run_cc_pred_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  MR_Word conv0_HeadVar__1_1;

  mdb__interactive_query____Compare____run_cc_pred_0_0(&conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
  *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
}

static MR_bool MR_CALL 
mdb__interactive_query____Unify____run_io_pred_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  MR_bool succeeded;

  succeeded = mdb__interactive_query____Unify____run_io_pred_0_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
  return succeeded;
}

static void MR_CALL 
mdb__interactive_query____Compare____run_io_pred_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  MR_Word conv0_HeadVar__1_1;

  mdb__interactive_query____Compare____run_io_pred_0_0(&conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
  *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
}

static MR_bool MR_CALL 
mdb__interactive_query____Unify____run_normal_pred_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  MR_bool succeeded;

  succeeded = mdb__interactive_query____Unify____run_normal_pred_0_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
  return succeeded;
}

static void MR_CALL 
mdb__interactive_query____Compare____run_normal_pred_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  MR_Word conv0_HeadVar__1_1;

  mdb__interactive_query____Compare____run_normal_pred_0_0(&conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
  *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
}

static MR_bool MR_CALL 
mdb__interactive_query____Unify____solution_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  MR_bool succeeded;

  succeeded = mdb__interactive_query____Unify____solution_0_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
  return succeeded;
}

static void MR_CALL 
mdb__interactive_query____Compare____solution_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  MR_Word conv0_HeadVar__1_1;

  mdb__interactive_query____Compare____solution_0_0(&conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
  *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
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

// :- end_module mdb.interactive_query.
