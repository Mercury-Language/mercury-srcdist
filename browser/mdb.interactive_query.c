/*
** Automatically generated from `interactive_query.m'
** by the Mercury compiler,
** version rotd-2018-01-04
** configured for x86_64-pc-linux-gnu.
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


// :- module mdb.interactive_query.
// :- implementation.

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


static const MR_FA_PseudoTypeInfo_Struct2 mdb__interactive_query__tree234__pti_tree234_2__plain_builtin__type_ctor_info_string_0__plain_univ__type_ctor_info_univ_0;

static const MR_FA_TypeInfo_Struct2 mdb__interactive_query__tree234__ti_tree234_2builtin__type_ctor_info_string_0univ__type_ctor_info_univ_0;

static const MR_VA_PseudoTypeInfo_Struct3 mdb__interactive_query____vpti_pred_3__plain_tree234__ti_tree234_2builtin__type_ctor_info_string_0univ__type_ctor_info_univ_0__plain_tree234__ti_tree234_2builtin__type_ctor_info_string_0univ__type_ctor_info_univ_0__plain_bool__type_ctor_info_bool_0;

static const MR_FA_PseudoTypeInfo_Struct1 mdb__interactive_query__list__pti_list_1__plain_builtin__type_ctor_info_string_0;

static const MR_VA_PseudoTypeInfo_Struct5 mdb__interactive_query____vpti_pred_5__plain_tree234__ti_tree234_2builtin__type_ctor_info_string_0univ__type_ctor_info_univ_0__plain_tree234__ti_tree234_2builtin__type_ctor_info_string_0univ__type_ctor_info_univ_0__plain_bool__type_ctor_info_bool_0__plain_io__type_ctor_info_state_0__plain_io__type_ctor_info_state_0;

static const MR_FA_PseudoTypeInfo_Struct1 mdb__interactive_query__varset__pti_varset_1__plain_term__type_ctor_info_generic_0;

static const MR_FA_PseudoTypeInfo_Struct1 mdb__interactive_query__term__pti_var_1__plain_term__type_ctor_info_generic_0;

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

static void MR_CALL 
mdb__interactive_query__IntroducedFrom__pred__write_prog_to_stream__475__1_3_p_0(
  MR_String LambdaHeadVar__1_123);

static void MR_CALL 
mdb__interactive_query__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_73_110_116_114_111_100_117_99_101_100_70_114_111_109_95_95_112_114_101_100_95_95_119_114_105_116_101_95_112_114_111_103_95_116_111_95_115_116_114_101_97_109_95_95_52_55_53_95_95_49_95_95_91_49_93_95_48_3_p_0(void);

static MR_bool MR_CALL 
mdb__interactive_query__IntroducedFrom__pred__make_program__382__1_1_p_0(
  MR_String LambdaHeadVar__1_21);

static MR_bool MR_CALL 
mdb__interactive_query__IntroducedFrom__pred__make_program__377__1_2_p_0(
  MR_Word HeadVar__1_19,
  MR_String HeadVar__2_53);

static MR_bool MR_CALL 
mdb__interactive_query__IntroducedFrom__pred__make_program__376__1_3_p_0(
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
mdb__interactive_query__write_binding_4_p_0(
  MR_Word Bindings_5,
  MR_String Output_6);

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
mdb__interactive_query__write_comma_var_3_p_0(
  MR_String Var_4);

static void MR_CALL 
mdb__interactive_query__write_var_type_4_p_0(
  MR_Word Bindings_5,
  MR_String Var_6);

static void MR_CALL 
mdb__interactive_query__write_set_goal_3_p_0(
  MR_String Var_4);

static void MR_CALL 
mdb__interactive_query__write_cast_goal_3_p_0(
  MR_String Var_4);

static void MR_CALL 
mdb__interactive_query__query_external_2_3_p_0(
  MR_Word Env_4);

static void MR_CALL 
mdb__interactive_query__send_term_to_socket_4_p_0(
  MR_Word Term_5,
  MR_Word SocketStream_6);

static void MR_CALL 
mdb__interactive_query__query_2_3_p_0(
  MR_Word tscc_proc_1_input_1_Env_4);

static void MR_CALL 
mdb__interactive_query__query_3_4_p_0(
  MR_Word tscc_proc_2_input_1_Env_5,
  MR_Word tscc_proc_2_input_2_ReadTerm_6);

static MR_bool MR_CALL 
mdb__interactive_query__run_query_5_p_0_3(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1);

static MR_bool MR_CALL 
mdb__interactive_query__run_query_5_p_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1);

static MR_bool MR_CALL 
mdb__interactive_query__run_query_5_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2);

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
mdb__interactive_query__dynamically_load_and_run_3_p_0(
  MR_Word Program_4);

static void MR_CALL 
mdb__interactive_query__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_108_105_110_107_95_97_110_100_95_114_117_110_95_105_111_95_95_91_50_93_95_48_5_p_0_1(
  MR_Box closure_arg,
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3);

static void MR_CALL 
mdb__interactive_query__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_108_105_110_107_95_97_110_100_95_114_117_110_95_105_111_95_95_91_50_93_95_48_5_p_0(
  MR_Word Bindings_6,
  MR_Word Handle_8);

static MR_bool MR_CALL 
mdb__interactive_query__link_and_run_cc_5_p_0_1(
  MR_Box closure_arg,
  MR_Box * wrapper_arg_1);

static void MR_CALL 
mdb__interactive_query__link_and_run_cc_5_p_0(
  MR_Word Bindings_6,
  MR_Word Outputs_7,
  MR_Word Handle_8);

static void MR_CALL 
mdb__interactive_query__write_solution_5_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3);

static void MR_CALL 
mdb__interactive_query__write_solution_5_p_0(
  MR_Word Outputs_6,
  MR_String End_7,
  MR_Word Solution_8);

static void MR_CALL 
mdb__interactive_query__link_and_run_normal_5_p_0_3(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3);

static void MR_CALL 
mdb__interactive_query__link_and_run_normal_5_p_0_1(
  void * env_ptr_arg);

static void MR_CALL 
mdb__interactive_query__link_and_run_normal_5_p_0_2(
  MR_Box closure_arg,
  MR_Box * wrapper_arg_1,
  MR_Cont cont,
  void * cont_env_ptr);

static void MR_CALL 
mdb__interactive_query__link_and_run_normal_5_p_0(
  MR_Word Bindings_6,
  MR_Word Outputs_7,
  MR_Word Handle_8);

static void MR_CALL 
mdb__interactive_query__compile_file_4_p_0(
  MR_String Options_5,
  MR_Word * Succeeded_6);

static void MR_CALL 
mdb__interactive_query__write_prog_to_file_4_p_0(
  MR_Word Program_5,
  MR_String FileName_6);

static void MR_CALL 
mdb__interactive_query__write_prog_to_stream_3_p_0_5(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3);

static void MR_CALL 
mdb__interactive_query__write_prog_to_stream_3_p_0_4(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3);

static void MR_CALL 
mdb__interactive_query__write_prog_to_stream_3_p_0_3(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3);

static void MR_CALL 
mdb__interactive_query__write_prog_to_stream_3_p_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3);

static void MR_CALL 
mdb__interactive_query__write_prog_to_stream_3_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3);

static void MR_CALL 
mdb__interactive_query__write_prog_to_stream_3_p_0(
  MR_Word Prog_4);

static MR_String MR_CALL 
mdb__interactive_query__query_module_name_0_f_0(void);

static void MR_CALL 
mdb__interactive_query__write_import_list_4_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3);

static void MR_CALL 
mdb__interactive_query__write_import_list_4_p_0(
  MR_Word Out_5,
  MR_Word Imports_6);

static void MR_CALL 
mdb__interactive_query__write_args_3_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3);

static void MR_CALL 
mdb__interactive_query__write_args_3_p_0(
  MR_Word Vars_4);

static void MR_CALL 
mdb__interactive_query__write_arg_types_4_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3);

static void MR_CALL 
mdb__interactive_query__write_arg_types_4_p_0(
  MR_Word Bindings_5,
  MR_Word Vars_6);

static void MR_CALL 
mdb__interactive_query__write_line_directive_2_p_0(void);

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


static /* final */ const MR_Box mdb__interactive_query_scalar_common_1[27][2];

static /* final */ const MR_Box mdb__interactive_query_scalar_common_2[9][3];

static /* final */ const MR_Box mdb__interactive_query_scalar_common_3[4][5];

static /* final */ const MR_Box mdb__interactive_query_scalar_common_4[2][7];

static /* final */ const MR_Box mdb__interactive_query_scalar_common_5[3][6];

static /* final */ const MR_Box mdb__interactive_query_scalar_common_6[1][1];

static /* final */ const MR_Box mdb__interactive_query_scalar_common_7[2][8];

static /* final */ const MR_Box mdb__interactive_query_scalar_common_8[1][4];




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
    ((MR_Box) ((MR_String) ".query(inputs")),
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))))
  },
  /* row 22 */
  {
    ((MR_Box) ((MR_String) "),\n")),
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))))
  },
  /* row 23 */
  {
    ((MR_Box) ((MR_String) "\n")),
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))))
  },
  /* row 24 */
  {
    ((MR_Box) ((MR_String) "mdb_query")),
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))))
  },
  /* row 25 */
  {
    ((MR_Box) ((MR_String) " --compile-to-shared-lib ")),
    ((MR_Box) (MR_mkword(MR_mktag(1), &mdb__interactive_query_scalar_common_1[24])))
  },
  /* row 26 */
  {
    ((MR_Box) ((MR_String) "), !Bindings),\n")),
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))))
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
    ((MR_Box) (&mdb__interactive_query_scalar_common_5[0])),
    ((MR_Box) (mdb__interactive_query__write_args_3_p_0_1)),
    ((MR_Box) (MR_Word) ((MR_Integer) 0))
  },
  /* row 2 */
  {
    ((MR_Box) (&mdb__interactive_query_scalar_common_5[0])),
    ((MR_Box) (mdb__interactive_query__write_import_list_4_p_0_1)),
    ((MR_Box) (MR_Word) ((MR_Integer) 0))
  },
  /* row 3 */
  {
    ((MR_Box) (&mdb__interactive_query_scalar_common_5[0])),
    ((MR_Box) (mdb__interactive_query__write_prog_to_stream_3_p_0_1)),
    ((MR_Box) (MR_Word) ((MR_Integer) 0))
  },
  /* row 4 */
  {
    ((MR_Box) (&mdb__interactive_query_scalar_common_5[0])),
    ((MR_Box) (mdb__interactive_query__write_prog_to_stream_3_p_0_2)),
    ((MR_Box) (MR_Word) ((MR_Integer) 0))
  },
  /* row 5 */
  {
    ((MR_Box) (&mdb__interactive_query_scalar_common_5[0])),
    ((MR_Box) (mdb__interactive_query__write_prog_to_stream_3_p_0_3)),
    ((MR_Box) (MR_Word) ((MR_Integer) 0))
  },
  /* row 6 */
  {
    ((MR_Box) (&mdb__interactive_query_scalar_common_5[0])),
    ((MR_Box) (mdb__interactive_query__write_prog_to_stream_3_p_0_4)),
    ((MR_Box) (MR_Word) ((MR_Integer) 0))
  },
  /* row 7 */
  {
    ((MR_Box) (&mdb__interactive_query_scalar_common_5[0])),
    ((MR_Box) (mdb__interactive_query__write_prog_to_stream_3_p_0_5)),
    ((MR_Box) (MR_Word) ((MR_Integer) 0))
  },
  /* row 8 */
  {
    ((MR_Box) (&mdb__interactive_query_scalar_common_8[0])),
    ((MR_Box) (mdb__interactive_query__run_query_5_p_0_3)),
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
    ((MR_Box) ((MR_Integer) 0)),
    ((MR_Box) (MR_mkword(MR_mktag(1), &mdb__interactive_query_scalar_common_6[0]))),
    ((MR_Box) ((MR_String) "run")),
    ((MR_Box) ((MR_Integer) 3)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row 2 */
  {
    ((MR_Box) ((MR_Integer) 0)),
    ((MR_Box) (MR_mkword(MR_mktag(1), &mdb__interactive_query_scalar_common_6[0]))),
    ((MR_Box) ((MR_String) "run")),
    ((MR_Box) ((MR_Integer) 5)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row 3 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 2)),
    ((MR_Box) (&mdb__interactive_query__tree234__pti_tree234_2__plain_builtin__type_ctor_info_string_0__plain_univ__type_ctor_info_univ_0)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_string_0))
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
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_string_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0))
  },
  /* row 1 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 3)),
    ((MR_Box) (&mdb__interactive_query____vpti_pred_3__plain_tree234__ti_tree234_2builtin__type_ctor_info_string_0univ__type_ctor_info_univ_0__plain_tree234__ti_tree234_2builtin__type_ctor_info_string_0univ__type_ctor_info_univ_0__plain_bool__type_ctor_info_bool_0)),
    ((MR_Box) (&mdb__interactive_query__tree234__pti_tree234_2__plain_builtin__type_ctor_info_string_0__plain_univ__type_ctor_info_univ_0)),
    ((MR_Box) (&mdb__interactive_query__mdb__interactive_query__type_ctor_info_solution_0))
  },
  /* row 2 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 3)),
    ((MR_Box) (&mdb__interactive_query__varset__pti_varset_1__plain_term__type_ctor_info_generic_0)),
    ((MR_Box) (&mdb__interactive_query__term__pti_var_1__plain_term__type_ctor_info_generic_0)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_string_0))
  },
};

static /* final */ const MR_Box mdb__interactive_query_scalar_common_6[1][1] = {
  /* row 0 */
  {
    ((MR_Box) ((MR_String) "mdb_query"))
  },
};

static /* final */ const MR_Box mdb__interactive_query_scalar_common_7[2][8] = {
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

static /* final */ const MR_Box mdb__interactive_query_scalar_common_8[1][4] = {
  /* row 0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 1)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_string_0))
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
  MR_Word QueryType_10,
  MR_Word Imports_11,
  MR_String Options_12,
  MR_Word Names_13,
  MR_Word Values_14,
  MR_Word MdbStdin_15,
  MR_Word MdbStdout_16)
#line 95 "interactive_query.m"
{
#line 95 "interactive_query.m"
	mdb__interactive_query__query_9_p_0((MR_Word) QueryType_10, (MR_Word) Imports_11, (MR_String) Options_12, (MR_Word) Names_13, (MR_Word) Values_14, (MR_Word) MdbStdin_15, (MR_Word) MdbStdout_16);
}

#line 182 "interactive_query.m"
void 
ML_query_external(
  MR_Word QueryType_10,
  MR_Word Imports_11,
  MR_String Options_12,
  MR_Word Names_13,
  MR_Word Values_14,
  MR_Word SocketIn_15,
  MR_Word SocketOut_16)
#line 182 "interactive_query.m"
{
#line 182 "interactive_query.m"
	mdb__interactive_query__query_external_9_p_0((MR_Word) QueryType_10, (MR_Word) Imports_11, (MR_String) Options_12, (MR_Word) Names_13, (MR_Word) Values_14, (MR_Word) SocketIn_15, (MR_Word) SocketOut_16);
}


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

const MR_TypeCtorInfo_Struct mdb__interactive_query__mdb__interactive_query__type_ctor_info_bindings_0 = {
  (MR_Integer) 0,
  (MR_Integer) 17,
  (MR_Integer) -1,
  MR_TYPECTOR_REP_EQUIV_GROUND,
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
  MR_TYPECTOR_REP_EQUIV_GROUND,
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
  MR_SECTAG_LOCAL,
  (MR_Integer) 0,
  (MR_Integer) 0,
  (MR_Integer) 0,
  NULL,
  NULL,
  NULL,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE
};

static const MR_PseudoTypeInfo mdb__interactive_query__mdb__interactive_query__field_types_interactive_query_response_0_1[1] = {
  (MR_PseudoTypeInfo) &mdb__interactive_query__list__ti_list_1builtin__type_ctor_info_string_0
};

static const MR_DuFunctorDesc mdb__interactive_query__mdb__interactive_query__du_functor_desc_interactive_query_response_0_1 = {
  (MR_String) "iq_imported",
  (MR_Integer) 1,
  (MR_Integer) 0,
  MR_SECTAG_NONE,
  (MR_Integer) 1,
  (MR_Integer) -1,
  (MR_Integer) 1,
  mdb__interactive_query__mdb__interactive_query__field_types_interactive_query_response_0_1,
  NULL,
  NULL,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE
};

static const MR_DuFunctorDesc mdb__interactive_query__mdb__interactive_query__du_functor_desc_interactive_query_response_0_2 = {
  (MR_String) "iq_quit",
  (MR_Integer) 0,
  (MR_Integer) 0,
  MR_SECTAG_LOCAL,
  (MR_Integer) 0,
  (MR_Integer) 1,
  (MR_Integer) 2,
  NULL,
  NULL,
  NULL,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE
};

static const MR_DuFunctorDesc mdb__interactive_query__mdb__interactive_query__du_functor_desc_interactive_query_response_0_3 = {
  (MR_String) "iq_eof",
  (MR_Integer) 0,
  (MR_Integer) 0,
  MR_SECTAG_LOCAL,
  (MR_Integer) 0,
  (MR_Integer) 2,
  (MR_Integer) 3,
  NULL,
  NULL,
  NULL,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE
};

static const MR_PseudoTypeInfo mdb__interactive_query__mdb__interactive_query__field_types_interactive_query_response_0_4[1] = {
  (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_string_0
};

static const MR_DuFunctorDesc mdb__interactive_query__mdb__interactive_query__du_functor_desc_interactive_query_response_0_4 = {
  (MR_String) "iq_error",
  (MR_Integer) 1,
  (MR_Integer) 0,
  MR_SECTAG_NONE,
  (MR_Integer) 2,
  (MR_Integer) -1,
  (MR_Integer) 4,
  mdb__interactive_query__mdb__interactive_query__field_types_interactive_query_response_0_4,
  NULL,
  NULL,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE
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
    MR_SECTAG_LOCAL,
    mdb__interactive_query__mdb__interactive_query__du_stag_ordered_interactive_query_response_0_0
  },
  {
    (MR_Integer) 1,
    MR_SECTAG_NONE,
    mdb__interactive_query__mdb__interactive_query__du_stag_ordered_interactive_query_response_0_1
  },
  {
    (MR_Integer) 1,
    MR_SECTAG_NONE,
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
  MR_TYPECTOR_REP_DU,
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
  MR_TYPECTOR_REP_EQUIV_GROUND,
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
  MR_SECTAG_NONE,
  (MR_Integer) 0,
  (MR_Integer) -1,
  (MR_Integer) 0,
  mdb__interactive_query__mdb__interactive_query__field_types_prog_0_0,
  mdb__interactive_query__mdb__interactive_query__field_names_prog_0_0,
  NULL,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE
};

static const MR_DuFunctorDescPtr mdb__interactive_query__mdb__interactive_query__du_stag_ordered_prog_0_0[1] = {
  &mdb__interactive_query__mdb__interactive_query__du_functor_desc_prog_0_0
};

static const MR_DuPtagLayout mdb__interactive_query__mdb__interactive_query__du_ptag_ordered_prog_0[1] = {
  {
    (MR_Integer) 1,
    MR_SECTAG_NONE,
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
  MR_TYPECTOR_REP_DU,
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
  MR_SECTAG_LOCAL,
  (MR_Integer) 0,
  (MR_Integer) 0,
  (MR_Integer) 0,
  NULL,
  NULL,
  NULL,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE
};

static const MR_PseudoTypeInfo mdb__interactive_query__mdb__interactive_query__field_types_query_command_0_1[1] = {
  (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_string_0
};

static const MR_DuFunctorDesc mdb__interactive_query__mdb__interactive_query__du_functor_desc_query_command_0_1 = {
  (MR_String) "qc_options",
  (MR_Integer) 1,
  (MR_Integer) 0,
  MR_SECTAG_NONE,
  (MR_Integer) 1,
  (MR_Integer) -1,
  (MR_Integer) 1,
  mdb__interactive_query__mdb__interactive_query__field_types_query_command_0_1,
  NULL,
  NULL,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE
};

static const MR_PseudoTypeInfo mdb__interactive_query__mdb__interactive_query__field_types_query_command_0_2[1] = {
  (MR_PseudoTypeInfo) &mdb__interactive_query__list__ti_list_1builtin__type_ctor_info_string_0
};

static const MR_DuFunctorDesc mdb__interactive_query__mdb__interactive_query__du_functor_desc_query_command_0_2 = {
  (MR_String) "qc_imports",
  (MR_Integer) 1,
  (MR_Integer) 0,
  MR_SECTAG_NONE,
  (MR_Integer) 2,
  (MR_Integer) -1,
  (MR_Integer) 2,
  mdb__interactive_query__mdb__interactive_query__field_types_query_command_0_2,
  NULL,
  NULL,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE
};

static const MR_DuFunctorDesc mdb__interactive_query__mdb__interactive_query__du_functor_desc_query_command_0_3 = {
  (MR_String) "qc_goal",
  (MR_Integer) 0,
  (MR_Integer) 0,
  MR_SECTAG_LOCAL,
  (MR_Integer) 0,
  (MR_Integer) 1,
  (MR_Integer) 3,
  NULL,
  NULL,
  NULL,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE
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
    MR_SECTAG_LOCAL,
    mdb__interactive_query__mdb__interactive_query__du_stag_ordered_query_command_0_0
  },
  {
    (MR_Integer) 1,
    MR_SECTAG_NONE,
    mdb__interactive_query__mdb__interactive_query__du_stag_ordered_query_command_0_1
  },
  {
    (MR_Integer) 1,
    MR_SECTAG_NONE,
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
  MR_TYPECTOR_REP_DU,
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
  MR_SECTAG_NONE,
  (MR_Integer) 0,
  (MR_Integer) -1,
  (MR_Integer) 0,
  mdb__interactive_query__mdb__interactive_query__field_types_query_env_0_0,
  mdb__interactive_query__mdb__interactive_query__field_names_query_env_0_0,
  NULL,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE
};

static const MR_DuFunctorDescPtr mdb__interactive_query__mdb__interactive_query__du_stag_ordered_query_env_0_0[1] = {
  &mdb__interactive_query__mdb__interactive_query__du_functor_desc_query_env_0_0
};

static const MR_DuPtagLayout mdb__interactive_query__mdb__interactive_query__du_ptag_ordered_query_env_0[1] = {
  {
    (MR_Integer) 1,
    MR_SECTAG_NONE,
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
  MR_TYPECTOR_REP_DU,
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
  MR_TYPECTOR_REP_ENUM,
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
  MR_TYPECTOR_REP_EQUIV_GROUND,
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
  MR_TYPECTOR_REP_EQUIV_GROUND,
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
  MR_TYPECTOR_REP_EQUIV_GROUND,
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
  MR_SECTAG_LOCAL,
  (MR_Integer) 0,
  (MR_Integer) 0,
  (MR_Integer) 0,
  NULL,
  NULL,
  NULL,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE
};

static const MR_PseudoTypeInfo mdb__interactive_query__mdb__interactive_query__field_types_solution_0_1[1] = {
  (MR_PseudoTypeInfo) &mdb__interactive_query__tree234__ti_tree234_2builtin__type_ctor_info_string_0univ__type_ctor_info_univ_0
};

static const MR_DuFunctorDesc mdb__interactive_query__mdb__interactive_query__du_functor_desc_solution_0_1 = {
  (MR_String) "solution",
  (MR_Integer) 1,
  (MR_Integer) 0,
  MR_SECTAG_NONE,
  (MR_Integer) 1,
  (MR_Integer) -1,
  (MR_Integer) 1,
  mdb__interactive_query__mdb__interactive_query__field_types_solution_0_1,
  NULL,
  NULL,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE
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
    MR_SECTAG_LOCAL,
    mdb__interactive_query__mdb__interactive_query__du_stag_ordered_solution_0_0
  },
  {
    (MR_Integer) 1,
    MR_SECTAG_NONE,
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
  MR_TYPECTOR_REP_DU,
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

static void MR_CALL 
mdb__interactive_query__IntroducedFrom__pred__write_prog_to_stream__475__1_3_p_0(
  MR_String LambdaHeadVar__1_123)
{
  mdb__interactive_query__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_73_110_116_114_111_100_117_99_101_100_70_114_111_109_95_95_112_114_101_100_95_95_119_114_105_116_101_95_112_114_111_103_95_116_111_95_115_116_114_101_97_109_95_95_52_55_53_95_95_49_95_95_91_49_93_95_48_3_p_0();
}

static void MR_CALL 
mdb__interactive_query__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_73_110_116_114_111_100_117_99_101_100_70_114_111_109_95_95_112_114_101_100_95_95_119_114_105_116_101_95_112_114_111_103_95_116_111_95_115_116_114_101_97_109_95_95_52_55_53_95_95_49_95_95_91_49_93_95_48_3_p_0(void)
{
  {
    mercury__io__write_string_3_p_0((MR_String) ", out");
  }
}

static MR_bool MR_CALL 
mdb__interactive_query__IntroducedFrom__pred__make_program__382__1_1_p_0(
  MR_String LambdaHeadVar__1_21)
{
  {
    MR_bool succeeded;
    MR_Char Var_56;

    succeeded = mercury__string__index_3_p_0(LambdaHeadVar__1_21, (MR_Integer) 0, &Var_56);
    if (succeeded)
      succeeded = ((MR_Char) 95 == Var_56);
    succeeded = !(succeeded);
    return succeeded;
  }
}

static MR_bool MR_CALL 
mdb__interactive_query__IntroducedFrom__pred__make_program__377__1_2_p_0(
  MR_Word HeadVar__1_19,
  MR_String HeadVar__2_53)
{
  {
    MR_bool succeeded;

    succeeded = mercury__map__contains_2_p_0((MR_Word) &mercury__builtin__builtin__type_ctor_info_string_0, (MR_Word) &mercury__univ__univ__type_ctor_info_univ_0, HeadVar__1_19, ((MR_Box) (HeadVar__2_53)));
    return succeeded;
  }
}

static MR_bool MR_CALL 
mdb__interactive_query__IntroducedFrom__pred__make_program__376__1_3_p_0(
  MR_Word Varset_7,
  MR_Word HeadVar__2_49,
  MR_String * HeadVar__3_50)
{
  {
    MR_bool succeeded;

    succeeded = mercury__varset__search_name_3_p_0((MR_Word) &mercury__term__term__type_ctor_info_generic_0, Varset_7, HeadVar__2_49, HeadVar__3_50);
    return succeeded;
  }
}

static void MR_CALL 
mdb__interactive_query____Compare____solution_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3)
{
  {
    MR_bool succeeded;
    MR_Integer CastX_8 = (MR_Integer) HeadVar__2_2;
    MR_Integer CastY_9 = (MR_Integer) HeadVar__3_3;

    succeeded = (CastX_8 == CastY_9);
    if (succeeded)
      *HeadVar__1_1 = (MR_Integer) 0;
    else
    if ((HeadVar__2_2 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
      if ((HeadVar__3_3 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
        *HeadVar__1_1 = (MR_Integer) 0;
      else
        *HeadVar__1_1 = (MR_Integer) 1;
    else
    {
      MR_Word Var_11 = ((MR_Word) (MR_hl_field(MR_mktag(1), HeadVar__2_2, (MR_Integer) 0)));

      if ((HeadVar__3_3 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
        *HeadVar__1_1 = (MR_Integer) 2;
      else
      {
        MR_Word ArgY1_7 = ((MR_Word) (MR_hl_field(MR_mktag(1), HeadVar__3_3, (MR_Integer) 0)));

        mercury__builtin__compare_3_p_0((MR_Word) &mdb__interactive_query_scalar_common_2[0], HeadVar__1_1, ((MR_Box) (Var_11)), ((MR_Box) (ArgY1_7)));
      }
    }
  }
}

static MR_bool MR_CALL 
mdb__interactive_query____Unify____solution_0_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2)
{
  {
    MR_bool succeeded;
    MR_Integer CastX_7 = (MR_Integer) HeadVar__1_1;
    MR_Integer CastY_8 = (MR_Integer) HeadVar__2_2;

    succeeded = (CastX_7 == CastY_8);
    if (succeeded)
      succeeded = MR_TRUE;
    else
    if ((HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
    {
      MR_Integer CastX_3 = (MR_Integer) HeadVar__1_1;
      MR_Integer CastY_4 = (MR_Integer) HeadVar__2_2;

      succeeded = (CastY_4 == CastX_3);
    }
    else
    {
      MR_Word TypeInfo_9_9;
      MR_Word ArgX1_5 = ((MR_Word) (MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 0)));
      MR_Word ArgY1_6;

      succeeded = ((MR_tag((MR_Word) HeadVar__2_2)) == (MR_mktag((MR_Integer) 1)));
      if (succeeded)
      {
        ArgY1_6 = ((MR_Word) (MR_hl_field(MR_mktag(1), HeadVar__2_2, (MR_Integer) 0)));
        TypeInfo_9_9 = (MR_Word) &mdb__interactive_query_scalar_common_2[0];
        succeeded = mercury__builtin__unify_2_p_0(TypeInfo_9_9, ((MR_Box) (ArgX1_5)), ((MR_Box) (ArgY1_6)));
      }
    }
    return succeeded;
  }
}

static void MR_CALL 
mdb__interactive_query____Compare____run_normal_pred_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3)
{
  {
    MR_Word Cast_HeadVar1_4 = HeadVar__2_2;
    MR_Word Cast_HeadVar2_5 = HeadVar__3_3;

    mercury__builtin__compare_3_p_0((MR_Word) &mdb__interactive_query_scalar_common_3[0], HeadVar__1_1, ((MR_Box) (Cast_HeadVar1_4)), ((MR_Box) (Cast_HeadVar2_5)));
  }
}

static MR_bool MR_CALL 
mdb__interactive_query____Unify____run_normal_pred_0_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2)
{
  {
    MR_bool succeeded;
    MR_Word Cast_HeadVar1_3 = HeadVar__1_1;
    MR_Word Cast_HeadVar2_4 = HeadVar__2_2;

    succeeded = mercury__private_builtin__builtin_unify_pred_2_p_0((MR_Word) Cast_HeadVar1_3, (MR_Word) Cast_HeadVar2_4);
    return succeeded;
  }
}

static void MR_CALL 
mdb__interactive_query____Compare____run_io_pred_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3)
{
  {
    MR_Word Cast_HeadVar1_4 = HeadVar__2_2;
    MR_Word Cast_HeadVar2_5 = HeadVar__3_3;

    mercury__builtin__compare_3_p_0((MR_Word) &mdb__interactive_query_scalar_common_4[0], HeadVar__1_1, ((MR_Box) (Cast_HeadVar1_4)), ((MR_Box) (Cast_HeadVar2_5)));
  }
}

static MR_bool MR_CALL 
mdb__interactive_query____Unify____run_io_pred_0_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2)
{
  {
    MR_bool succeeded;
    MR_Word Cast_HeadVar1_3 = HeadVar__1_1;
    MR_Word Cast_HeadVar2_4 = HeadVar__2_2;

    succeeded = mercury__private_builtin__builtin_unify_pred_2_p_0((MR_Word) Cast_HeadVar1_3, (MR_Word) Cast_HeadVar2_4);
    return succeeded;
  }
}

static void MR_CALL 
mdb__interactive_query____Compare____run_cc_pred_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3)
{
  {
    MR_Word Cast_HeadVar1_4 = HeadVar__2_2;
    MR_Word Cast_HeadVar2_5 = HeadVar__3_3;

    mercury__builtin__compare_3_p_0((MR_Word) &mdb__interactive_query_scalar_common_3[0], HeadVar__1_1, ((MR_Box) (Cast_HeadVar1_4)), ((MR_Box) (Cast_HeadVar2_5)));
  }
}

static MR_bool MR_CALL 
mdb__interactive_query____Unify____run_cc_pred_0_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2)
{
  {
    MR_bool succeeded;
    MR_Word Cast_HeadVar1_3 = HeadVar__1_1;
    MR_Word Cast_HeadVar2_4 = HeadVar__2_2;

    succeeded = mercury__private_builtin__builtin_unify_pred_2_p_0((MR_Word) Cast_HeadVar1_3, (MR_Word) Cast_HeadVar2_4);
    return succeeded;
  }
}

void MR_CALL 
mdb__interactive_query____Compare____query_type_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3)
{
  {
    MR_Integer Cast_HeadVar1_4 = (MR_Integer) HeadVar__2_2;
    MR_Integer Cast_HeadVar2_5 = (MR_Integer) HeadVar__3_3;

    mercury__private_builtin__builtin_compare_int_3_p_0(HeadVar__1_1, Cast_HeadVar1_4, Cast_HeadVar2_5);
  }
}

MR_bool MR_CALL 
mdb__interactive_query____Unify____query_type_0_0(
  MR_Word HeadVar__2_1,
  MR_Word HeadVar__2_2)
{
  {
    MR_bool succeeded = (HeadVar__2_1 == HeadVar__2_2);

    return succeeded;
  }
}

static void MR_CALL 
mdb__interactive_query____Compare____query_env_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3)
{
  {
    MR_bool succeeded;
    MR_Integer CastX_21 = (MR_Integer) HeadVar__2_2;
    MR_Integer CastY_22 = (MR_Integer) HeadVar__3_3;

    succeeded = (CastX_21 == CastY_22);
    if (succeeded)
      *HeadVar__1_1 = (MR_Integer) 0;
    else
    {
      MR_Word ArgX1_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 0)));
      MR_Word ArgY1_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), HeadVar__3_3, (MR_Integer) 0)));
      MR_Word ArgX2_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 1)));
      MR_Word ArgY2_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), HeadVar__3_3, (MR_Integer) 1)));
      MR_String ArgX3_8 = ((MR_String) (MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 2)));
      MR_String ArgY3_9 = ((MR_String) (MR_hl_field(MR_mktag(0), HeadVar__3_3, (MR_Integer) 2)));
      MR_Word ArgX4_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 3)));
      MR_Word ArgY4_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), HeadVar__3_3, (MR_Integer) 3)));
      MR_Word ArgX5_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 4)));
      MR_Word ArgY5_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), HeadVar__3_3, (MR_Integer) 4)));
      MR_Word ArgX6_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 5)));
      MR_Word ArgY6_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), HeadVar__3_3, (MR_Integer) 5)));
      MR_Word Var_16;
      MR_Integer Var_29 = (MR_Integer) ArgX1_4;
      MR_Integer Var_30 = (MR_Integer) ArgY1_5;

      mercury__private_builtin__builtin_compare_int_3_p_0(&Var_16, Var_29, Var_30);
      succeeded = (Var_16 == (MR_Integer) 0);
      succeeded = !(succeeded);
      if (succeeded)
        *HeadVar__1_1 = Var_16;
      else
      {
        MR_Word Var_17;

        mercury__builtin__compare_3_p_0((MR_Word) &mdb__interactive_query_scalar_common_1[1], &Var_17, ((MR_Box) (ArgX2_6)), ((MR_Box) (ArgY2_7)));
        succeeded = (Var_17 == (MR_Integer) 0);
        succeeded = !(succeeded);
        if (succeeded)
          *HeadVar__1_1 = Var_17;
        else
        {
          MR_Word Var_18;

          mercury__private_builtin__builtin_compare_string_3_p_0(&Var_18, ArgX3_8, ArgY3_9);
          succeeded = (Var_18 == (MR_Integer) 0);
          succeeded = !(succeeded);
          if (succeeded)
            *HeadVar__1_1 = Var_18;
          else
          {
            MR_Word Var_19;

            mercury__builtin__compare_3_p_0((MR_Word) &mdb__interactive_query_scalar_common_2[0], &Var_19, ((MR_Box) (ArgX4_10)), ((MR_Box) (ArgY4_11)));
            succeeded = (Var_19 == (MR_Integer) 0);
            succeeded = !(succeeded);
            if (succeeded)
              *HeadVar__1_1 = Var_19;
            else
            {
              MR_Word Var_20;

              mercury__io____Compare____input_stream_0_0(&Var_20, ArgX5_12, ArgY5_13);
              succeeded = (Var_20 == (MR_Integer) 0);
              succeeded = !(succeeded);
              if (succeeded)
                *HeadVar__1_1 = Var_20;
              else
                mercury__io____Compare____output_stream_0_0(HeadVar__1_1, ArgX6_14, ArgY6_15);
            }
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
  {
    MR_bool succeeded;
    MR_Integer CastX_15 = (MR_Integer) HeadVar__1_1;
    MR_Integer CastY_16 = (MR_Integer) HeadVar__2_2;

    succeeded = (CastX_15 == CastY_16);
    if (succeeded)
      succeeded = MR_TRUE;
    else
    {
      MR_Word TypeInfo_17_17;
      MR_Word TypeInfo_18_18;
      MR_Word ArgX1_3 = ((MR_Word) (MR_hl_field(MR_mktag(0), HeadVar__1_1, (MR_Integer) 0)));
      MR_Word ArgY1_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 0)));
      MR_Word ArgX2_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), HeadVar__1_1, (MR_Integer) 1)));
      MR_Word ArgY2_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 1)));
      MR_String ArgX3_7 = ((MR_String) (MR_hl_field(MR_mktag(0), HeadVar__1_1, (MR_Integer) 2)));
      MR_String ArgY3_8 = ((MR_String) (MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 2)));
      MR_Word ArgX4_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), HeadVar__1_1, (MR_Integer) 3)));
      MR_Word ArgY4_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 3)));
      MR_Word ArgX5_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), HeadVar__1_1, (MR_Integer) 4)));
      MR_Word ArgY5_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 4)));
      MR_Word ArgX6_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), HeadVar__1_1, (MR_Integer) 5)));
      MR_Word ArgY6_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 5)));

      succeeded = (ArgX1_3 == ArgY1_4);
      if (succeeded)
      {
        TypeInfo_17_17 = (MR_Word) &mdb__interactive_query_scalar_common_1[1];
        succeeded = mercury__builtin__unify_2_p_0(TypeInfo_17_17, ((MR_Box) (ArgX2_5)), ((MR_Box) (ArgY2_6)));
        if (succeeded)
        {
          succeeded = (strcmp(ArgX3_7, ArgY3_8) == 0);
          if (succeeded)
          {
            TypeInfo_18_18 = (MR_Word) &mdb__interactive_query_scalar_common_2[0];
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
}

static void MR_CALL 
mdb__interactive_query____Compare____query_command_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3)
{
  {
    MR_bool succeeded;
    MR_Integer CastX_20 = (MR_Integer) HeadVar__2_2;
    MR_Integer CastY_21 = (MR_Integer) HeadVar__3_3;

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
            MR_String Var_25 = ((MR_String) (MR_hl_field(MR_mktag(1), HeadVar__2_2, (MR_Integer) 0)));

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
                  MR_String ArgY1_8 = ((MR_String) (MR_hl_field(MR_mktag(1), HeadVar__3_3, (MR_Integer) 0)));

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
            MR_Word Var_24 = ((MR_Word) (MR_hl_field(MR_mktag(2), HeadVar__2_2, (MR_Integer) 0)));

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
                  MR_Word ArgY1_16 = ((MR_Word) (MR_hl_field(MR_mktag(2), HeadVar__3_3, (MR_Integer) 0)));

                  mercury__builtin__compare_3_p_0((MR_Word) &mdb__interactive_query_scalar_common_1[1], HeadVar__1_1, ((MR_Box) (Var_24)), ((MR_Box) (ArgY1_16)));
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
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2)
{
  {
    MR_bool succeeded;
    MR_Integer CastX_11 = (MR_Integer) HeadVar__1_1;
    MR_Integer CastY_12 = (MR_Integer) HeadVar__2_2;

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
                MR_Integer CastX_3 = (MR_Integer) HeadVar__1_1;
                MR_Integer CastY_4 = (MR_Integer) HeadVar__2_2;

                succeeded = (CastY_4 == CastX_3);
              }
              break;
            case (MR_Integer) 1:
              {
                MR_Integer CastX_9 = (MR_Integer) HeadVar__1_1;
                MR_Integer CastY_10 = (MR_Integer) HeadVar__2_2;

                succeeded = (CastY_10 == CastX_9);
              }
              break;
          }
          break;
        case (MR_Integer) 1:
          {
            MR_String ArgX1_5 = ((MR_String) (MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 0)));
            MR_String ArgY1_6;

            succeeded = ((MR_tag((MR_Word) HeadVar__2_2)) == (MR_mktag((MR_Integer) 1)));
            if (succeeded)
            {
              ArgY1_6 = ((MR_String) (MR_hl_field(MR_mktag(1), HeadVar__2_2, (MR_Integer) 0)));
              succeeded = (strcmp(ArgX1_5, ArgY1_6) == 0);
            }
          }
          break;
        case (MR_Integer) 2:
          {
            MR_Word TypeInfo_13_13;
            MR_Word ArgX1_7 = ((MR_Word) (MR_hl_field(MR_mktag(2), HeadVar__1_1, (MR_Integer) 0)));
            MR_Word ArgY1_8;

            succeeded = ((MR_tag((MR_Word) HeadVar__2_2)) == (MR_mktag((MR_Integer) 2)));
            if (succeeded)
            {
              ArgY1_8 = ((MR_Word) (MR_hl_field(MR_mktag(2), HeadVar__2_2, (MR_Integer) 0)));
              TypeInfo_13_13 = (MR_Word) &mdb__interactive_query_scalar_common_1[1];
              succeeded = mercury__builtin__unify_2_p_0(TypeInfo_13_13, ((MR_Box) (ArgX1_7)), ((MR_Box) (ArgY1_8)));
            }
          }
          break;
      }
    return succeeded;
  }
}

static void MR_CALL 
mdb__interactive_query____Compare____prog_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3)
{
  {
    MR_bool succeeded;
    MR_Integer CastX_24 = (MR_Integer) HeadVar__2_2;
    MR_Integer CastY_25 = (MR_Integer) HeadVar__3_3;

    succeeded = (CastX_24 == CastY_25);
    if (succeeded)
      *HeadVar__1_1 = (MR_Integer) 0;
    else
    {
      MR_Word ArgX1_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 0)));
      MR_Word ArgY1_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), HeadVar__3_3, (MR_Integer) 0)));
      MR_Word ArgX2_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 1)));
      MR_Word ArgY2_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), HeadVar__3_3, (MR_Integer) 1)));
      MR_Word ArgX3_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 2)));
      MR_Word ArgY3_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), HeadVar__3_3, (MR_Integer) 2)));
      MR_Word ArgX4_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 3)));
      MR_Word ArgY4_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), HeadVar__3_3, (MR_Integer) 3)));
      MR_Word ArgX5_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 4)));
      MR_Word ArgY5_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), HeadVar__3_3, (MR_Integer) 4)));
      MR_Word ArgX6_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 5)));
      MR_Word ArgY6_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), HeadVar__3_3, (MR_Integer) 5)));
      MR_Word ArgX7_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 6)));
      MR_Word ArgY7_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), HeadVar__3_3, (MR_Integer) 6)));
      MR_Word Var_18;
      MR_Integer Var_33 = (MR_Integer) ArgX1_4;
      MR_Integer Var_34 = (MR_Integer) ArgY1_5;

      mercury__private_builtin__builtin_compare_int_3_p_0(&Var_18, Var_33, Var_34);
      succeeded = (Var_18 == (MR_Integer) 0);
      succeeded = !(succeeded);
      if (succeeded)
        *HeadVar__1_1 = Var_18;
      else
      {
        MR_Word Var_19;

        mercury__builtin__compare_3_p_0((MR_Word) &mdb__interactive_query_scalar_common_1[1], &Var_19, ((MR_Box) (ArgX2_6)), ((MR_Box) (ArgY2_7)));
        succeeded = (Var_19 == (MR_Integer) 0);
        succeeded = !(succeeded);
        if (succeeded)
          *HeadVar__1_1 = Var_19;
        else
        {
          MR_Word Var_20;

          mercury__builtin__compare_3_p_0((MR_Word) &mdb__interactive_query_scalar_common_2[0], &Var_20, ((MR_Box) (ArgX3_8)), ((MR_Box) (ArgY3_9)));
          succeeded = (Var_20 == (MR_Integer) 0);
          succeeded = !(succeeded);
          if (succeeded)
            *HeadVar__1_1 = Var_20;
          else
          {
            MR_Word Var_21;

            mercury__builtin__compare_3_p_0((MR_Word) &mdb__interactive_query_scalar_common_1[1], &Var_21, ((MR_Box) (ArgX4_10)), ((MR_Box) (ArgY4_11)));
            succeeded = (Var_21 == (MR_Integer) 0);
            succeeded = !(succeeded);
            if (succeeded)
              *HeadVar__1_1 = Var_21;
            else
            {
              MR_Word Var_22;

              mercury__builtin__compare_3_p_0((MR_Word) &mdb__interactive_query_scalar_common_1[1], &Var_22, ((MR_Box) (ArgX5_12)), ((MR_Box) (ArgY5_13)));
              succeeded = (Var_22 == (MR_Integer) 0);
              succeeded = !(succeeded);
              if (succeeded)
                *HeadVar__1_1 = Var_22;
              else
              {
                MR_Word Var_23;

                mercury__builtin__compare_3_p_0((MR_Word) &mdb__interactive_query_scalar_common_1[2], &Var_23, ((MR_Box) (ArgX6_14)), ((MR_Box) (ArgY6_15)));
                succeeded = (Var_23 == (MR_Integer) 0);
                succeeded = !(succeeded);
                if (succeeded)
                  *HeadVar__1_1 = Var_23;
                else
                {
                  mercury__builtin__compare_3_p_0((MR_Word) &mdb__interactive_query_scalar_common_1[3], HeadVar__1_1, ((MR_Box) (ArgX7_16)), ((MR_Box) (ArgY7_17)));
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
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2)
{
  {
    MR_bool succeeded;
    MR_Integer CastX_17 = (MR_Integer) HeadVar__1_1;
    MR_Integer CastY_18 = (MR_Integer) HeadVar__2_2;

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
      MR_Word ArgX1_3 = ((MR_Word) (MR_hl_field(MR_mktag(0), HeadVar__1_1, (MR_Integer) 0)));
      MR_Word ArgY1_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 0)));
      MR_Word ArgX2_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), HeadVar__1_1, (MR_Integer) 1)));
      MR_Word ArgY2_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 1)));
      MR_Word ArgX3_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), HeadVar__1_1, (MR_Integer) 2)));
      MR_Word ArgY3_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 2)));
      MR_Word ArgX4_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), HeadVar__1_1, (MR_Integer) 3)));
      MR_Word ArgY4_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 3)));
      MR_Word ArgX5_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), HeadVar__1_1, (MR_Integer) 4)));
      MR_Word ArgY5_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 4)));
      MR_Word ArgX6_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), HeadVar__1_1, (MR_Integer) 5)));
      MR_Word ArgY6_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 5)));
      MR_Word ArgX7_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), HeadVar__1_1, (MR_Integer) 6)));
      MR_Word ArgY7_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 6)));

      succeeded = (ArgX1_3 == ArgY1_4);
      if (succeeded)
      {
        TypeInfo_19_19 = (MR_Word) &mdb__interactive_query_scalar_common_1[1];
        succeeded = mercury__builtin__unify_2_p_0(TypeInfo_19_19, ((MR_Box) (ArgX2_5)), ((MR_Box) (ArgY2_6)));
        if (succeeded)
        {
          TypeInfo_20_20 = (MR_Word) &mdb__interactive_query_scalar_common_2[0];
          succeeded = mercury__builtin__unify_2_p_0(TypeInfo_20_20, ((MR_Box) (ArgX3_7)), ((MR_Box) (ArgY3_8)));
          if (succeeded)
          {
            TypeInfo_21_21 = (MR_Word) &mdb__interactive_query_scalar_common_1[1];
            succeeded = mercury__builtin__unify_2_p_0(TypeInfo_21_21, ((MR_Box) (ArgX4_9)), ((MR_Box) (ArgY4_10)));
            if (succeeded)
            {
              TypeInfo_22_22 = (MR_Word) &mdb__interactive_query_scalar_common_1[1];
              succeeded = mercury__builtin__unify_2_p_0(TypeInfo_22_22, ((MR_Box) (ArgX5_11)), ((MR_Box) (ArgY5_12)));
              if (succeeded)
              {
                TypeInfo_23_23 = (MR_Word) &mdb__interactive_query_scalar_common_1[2];
                succeeded = mercury__builtin__unify_2_p_0(TypeInfo_23_23, ((MR_Box) (ArgX6_13)), ((MR_Box) (ArgY6_14)));
                if (succeeded)
                {
                  TypeInfo_24_24 = (MR_Word) &mdb__interactive_query_scalar_common_1[3];
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
}

void MR_CALL 
mdb__interactive_query____Compare____options_string_0_0(
  MR_Word * HeadVar__1_1,
  MR_String HeadVar__2_2,
  MR_String HeadVar__3_3)
{
  {
    MR_String Cast_HeadVar1_4 = HeadVar__2_2;
    MR_String Cast_HeadVar2_5 = HeadVar__3_3;

    mercury__private_builtin__builtin_compare_string_3_p_0(HeadVar__1_1, Cast_HeadVar1_4, Cast_HeadVar2_5);
  }
}

MR_bool MR_CALL 
mdb__interactive_query____Unify____options_string_0_0(
  MR_String HeadVar__1_1,
  MR_String HeadVar__2_2)
{
  {
    MR_bool succeeded;
    MR_String Cast_HeadVar1_3 = HeadVar__1_1;
    MR_String Cast_HeadVar2_4 = HeadVar__2_2;

    succeeded = (strcmp(Cast_HeadVar1_3, Cast_HeadVar2_4) == 0);
    return succeeded;
  }
}

static void MR_CALL 
mdb__interactive_query____Compare____interactive_query_response_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3)
{
  {
    MR_bool succeeded;
    MR_Integer CastX_24 = (MR_Integer) HeadVar__2_2;
    MR_Integer CastY_25 = (MR_Integer) HeadVar__3_3;

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
            MR_Word Var_29 = ((MR_Word) (MR_hl_field(MR_mktag(1), HeadVar__2_2, (MR_Integer) 0)));

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
                  MR_Word ArgY1_8 = ((MR_Word) (MR_hl_field(MR_mktag(1), HeadVar__3_3, (MR_Integer) 0)));

                  mercury__builtin__compare_3_p_0((MR_Word) &mdb__interactive_query_scalar_common_1[1], HeadVar__1_1, ((MR_Box) (Var_29)), ((MR_Box) (ArgY1_8)));
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
            MR_String Var_28 = ((MR_String) (MR_hl_field(MR_mktag(2), HeadVar__2_2, (MR_Integer) 0)));

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
                  MR_String ArgY1_23 = ((MR_String) (MR_hl_field(MR_mktag(2), HeadVar__3_3, (MR_Integer) 0)));

                  mercury__private_builtin__builtin_compare_string_3_p_0(HeadVar__1_1, Var_28, ArgY1_23);
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
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2)
{
  {
    MR_bool succeeded;
    MR_Integer CastX_13 = (MR_Integer) HeadVar__1_1;
    MR_Integer CastY_14 = (MR_Integer) HeadVar__2_2;

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
                MR_Integer CastX_3 = (MR_Integer) HeadVar__1_1;
                MR_Integer CastY_4 = (MR_Integer) HeadVar__2_2;

                succeeded = (CastY_4 == CastX_3);
              }
              break;
            case (MR_Integer) 1:
              {
                MR_Integer CastX_7 = (MR_Integer) HeadVar__1_1;
                MR_Integer CastY_8 = (MR_Integer) HeadVar__2_2;

                succeeded = (CastY_8 == CastX_7);
              }
              break;
            case (MR_Integer) 2:
              {
                MR_Integer CastX_9 = (MR_Integer) HeadVar__1_1;
                MR_Integer CastY_10 = (MR_Integer) HeadVar__2_2;

                succeeded = (CastY_10 == CastX_9);
              }
              break;
          }
          break;
        case (MR_Integer) 1:
          {
            MR_Word TypeInfo_15_15;
            MR_Word ArgX1_5 = ((MR_Word) (MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 0)));
            MR_Word ArgY1_6;

            succeeded = ((MR_tag((MR_Word) HeadVar__2_2)) == (MR_mktag((MR_Integer) 1)));
            if (succeeded)
            {
              ArgY1_6 = ((MR_Word) (MR_hl_field(MR_mktag(1), HeadVar__2_2, (MR_Integer) 0)));
              TypeInfo_15_15 = (MR_Word) &mdb__interactive_query_scalar_common_1[1];
              succeeded = mercury__builtin__unify_2_p_0(TypeInfo_15_15, ((MR_Box) (ArgX1_5)), ((MR_Box) (ArgY1_6)));
            }
          }
          break;
        case (MR_Integer) 2:
          {
            MR_String ArgX1_11 = ((MR_String) (MR_hl_field(MR_mktag(2), HeadVar__1_1, (MR_Integer) 0)));
            MR_String ArgY1_12;

            succeeded = ((MR_tag((MR_Word) HeadVar__2_2)) == (MR_mktag((MR_Integer) 2)));
            if (succeeded)
            {
              ArgY1_12 = ((MR_String) (MR_hl_field(MR_mktag(2), HeadVar__2_2, (MR_Integer) 0)));
              succeeded = (strcmp(ArgX1_11, ArgY1_12) == 0);
            }
          }
          break;
      }
    return succeeded;
  }
}

void MR_CALL 
mdb__interactive_query____Compare____imports_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3)
{
  {
    MR_Word Cast_HeadVar1_4 = HeadVar__2_2;
    MR_Word Cast_HeadVar2_5 = HeadVar__3_3;

    mercury__builtin__compare_3_p_0((MR_Word) &mdb__interactive_query_scalar_common_1[1], HeadVar__1_1, ((MR_Box) (Cast_HeadVar1_4)), ((MR_Box) (Cast_HeadVar2_5)));
  }
}

MR_bool MR_CALL 
mdb__interactive_query____Unify____imports_0_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2)
{
  {
    MR_bool succeeded;
    MR_Word Cast_HeadVar1_3 = HeadVar__1_1;
    MR_Word Cast_HeadVar2_4 = HeadVar__2_2;

    succeeded = mercury__builtin__unify_2_p_0((MR_Word) &mdb__interactive_query_scalar_common_1[1], ((MR_Box) (Cast_HeadVar1_3)), ((MR_Box) (Cast_HeadVar2_4)));
    return succeeded;
  }
}

static void MR_CALL 
mdb__interactive_query____Compare____bindings_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3)
{
  {
    MR_Word Cast_HeadVar1_4 = HeadVar__2_2;
    MR_Word Cast_HeadVar2_5 = HeadVar__3_3;

    mercury__builtin__compare_3_p_0((MR_Word) &mdb__interactive_query_scalar_common_2[0], HeadVar__1_1, ((MR_Box) (Cast_HeadVar1_4)), ((MR_Box) (Cast_HeadVar2_5)));
  }
}

static MR_bool MR_CALL 
mdb__interactive_query____Unify____bindings_0_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2)
{
  {
    MR_bool succeeded;
    MR_Word Cast_HeadVar1_3 = HeadVar__1_1;
    MR_Word Cast_HeadVar2_4 = HeadVar__2_2;

    succeeded = mercury__builtin__unify_2_p_0((MR_Word) &mdb__interactive_query_scalar_common_2[0], ((MR_Box) (Cast_HeadVar1_3)), ((MR_Box) (Cast_HeadVar2_4)));
    return succeeded;
  }
}

static MR_bool MR_CALL 
mdb__interactive_query__system_is_darwin_0_p_0(void)
{
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
	if (SUCCESS_INDICATOR) {
	}
succeeded  = SUCCESS_INDICATOR;
}
    return succeeded;
  }
}

static MR_Word MR_CALL 
mdb__interactive_query__inst_cast_io_1_f_0(
  MR_Word X_1)
{
  {
    MR_Word Y_2;

{
#define MR_PROC_LABEL mdb__interactive_query__inst_cast_io_1_f_0

	MR_Word X;
	MR_Word Y;

	X =  X_1 ;
		{

    Y = X


		;}
#undef MR_PROC_LABEL
	 Y_2  = Y;
}
    return Y_2;
  }
}

static MR_Word MR_CALL 
mdb__interactive_query__inst_cast_cc_1_f_0(
  MR_Word X_1)
{
  {
    MR_Word Y_2;

{
#define MR_PROC_LABEL mdb__interactive_query__inst_cast_cc_1_f_0

	MR_Word X;
	MR_Word Y;

	X =  X_1 ;
		{

    Y = X


		;}
#undef MR_PROC_LABEL
	 Y_2  = Y;
}
    return Y_2;
  }
}

static MR_Word MR_CALL 
mdb__interactive_query__inst_cast_normal_1_f_0(
  MR_Word X_1)
{
  {
    MR_Word Y_2;

{
#define MR_PROC_LABEL mdb__interactive_query__inst_cast_normal_1_f_0

	MR_Word X;
	MR_Word Y;

	X =  X_1 ;
		{

    Y = X


		;}
#undef MR_PROC_LABEL
	 Y_2  = Y;
}
    return Y_2;
  }
}

static void MR_CALL 
mdb__interactive_query__write_binding_4_p_0(
  MR_Word Bindings_5,
  MR_String Output_6)
{
  {
    MR_Word TypeInfo_20_20;
    MR_Word Univ_8;
    MR_Box Var_14;
    MR_Box conv0_Univ_8;

    mercury__map__lookup_3_p_0((MR_Word) &mercury__builtin__builtin__type_ctor_info_string_0, (MR_Word) &mercury__univ__univ__type_ctor_info_univ_0, Bindings_5, ((MR_Box) (Output_6)), &conv0_Univ_8);
    Univ_8 = ((MR_Word) conv0_Univ_8);
    mercury__io__write_string_3_p_0(Output_6);
    mercury__io__write_string_3_p_0((MR_String) " = ");
    Var_14 = mercury__univ__univ_value_1_f_0(&TypeInfo_20_20, Univ_8);
    mercury__io__write_cc_3_p_0(TypeInfo_20_20, Var_14);
    mercury__io__write_string_3_p_0((MR_String) ", ");
  }
}

static void MR_CALL 
mdb__interactive_query__call_run_io_5_p_0(
  MR_Word QueryPred0_6,
  MR_Word Bindings0_7,
  MR_Word * Solution_8)
{
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

	X =  QueryPred0_6 ;
		{

    Y = X


		;}
#undef MR_PROC_LABEL
	 QueryPred_10  = Y;
}
    func_0 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box *, MR_Box *, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), QueryPred_10, (MR_Integer) 1)));
    func_0(((MR_Box) QueryPred_10), ((MR_Box) (Bindings0_7)), &conv3_Bindings_11, &conv2_Loaded_12, ((MR_Box) ((MR_Integer) 0)), &conv1_STATE_VARIABLE_IO_14);
    Bindings_11 = ((MR_Word) conv3_Bindings_11);
    Loaded_12 = ((MR_Word) conv2_Loaded_12);
    switch (Loaded_12) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        *Solution_8 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
        break;
      case (MR_Integer) 1:
        {
          MR_Word base;
          base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
          *Solution_8 = base;
          MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (Bindings_11));
        }
        break;
    }
  }
}

static MR_bool MR_CALL 
mdb__interactive_query__call_run_cc_3_p_0(
  MR_Word QueryPred0_4,
  MR_Word Bindings0_5,
  MR_Word * Solution_6)
{
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

	X =  QueryPred0_4 ;
		{

    Y = X


		;}
#undef MR_PROC_LABEL
	 QueryPred_7  = Y;
}
    func_0 = ((MR_bool MR_CALL (*)(MR_Box, MR_Box, MR_Box *, MR_Box *)) (MR_hl_field(MR_mktag(0), QueryPred_7, (MR_Integer) 1)));
    succeeded = func_0(((MR_Box) QueryPred_7), ((MR_Box) (Bindings0_5)), &conv2_Bindings_8, &conv1_Loaded_9);
    if (succeeded)
    {
      Bindings_8 = ((MR_Word) conv2_Bindings_8);
      Loaded_9 = ((MR_Word) conv1_Loaded_9);
      succeeded = MR_TRUE;
    }
    if (succeeded)
    {
      switch (Loaded_9) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 0:
          *Solution_6 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
          break;
        case (MR_Integer) 1:
          {
            MR_Word base;
            base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
            *Solution_6 = base;
            MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (Bindings_8));
          }
          break;
      }
      succeeded = MR_TRUE;
    }
    return succeeded;
  }
}

static void MR_CALL 
mdb__interactive_query__call_run_normal_3_p_0_2(
  void * env_ptr_arg)
{
  {
    struct mdb__interactive_query__call_run_normal_3_p_0_env_0_s * env_ptr = (struct mdb__interactive_query__call_run_normal_3_p_0_env_0_s *) env_ptr_arg;

    (env_ptr)->mdb__interactive_query__call_run_normal_3_p_0_env_0__Bindings_8 = ((MR_Word) (env_ptr)->mdb__interactive_query__call_run_normal_3_p_0_env_0__conv2_Bindings_8);
    (env_ptr)->mdb__interactive_query__call_run_normal_3_p_0_env_0__Loaded_9 = ((MR_Word) (env_ptr)->mdb__interactive_query__call_run_normal_3_p_0_env_0__conv1_Loaded_9);
    mdb__interactive_query__call_run_normal_3_p_0_1(env_ptr);
  }
}

static void MR_CALL 
mdb__interactive_query__call_run_normal_3_p_0_1(
  void * env_ptr_arg)
{
  {
    struct mdb__interactive_query__call_run_normal_3_p_0_env_0_s * env_ptr = (struct mdb__interactive_query__call_run_normal_3_p_0_env_0_s *) env_ptr_arg;

    switch ((env_ptr)->mdb__interactive_query__call_run_normal_3_p_0_env_0__Loaded_9) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        *((env_ptr)->mdb__interactive_query__call_run_normal_3_p_0_env_0__Solution_6) = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
        break;
      case (MR_Integer) 1:
        {
          MR_Word base;
          base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
          *((env_ptr)->mdb__interactive_query__call_run_normal_3_p_0_env_0__Solution_6) = base;
          MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) ((env_ptr)->mdb__interactive_query__call_run_normal_3_p_0_env_0__Bindings_8));
        }
        break;
    }
    ((env_ptr)->mdb__interactive_query__call_run_normal_3_p_0_env_0__cont)((env_ptr)->mdb__interactive_query__call_run_normal_3_p_0_env_0__cont_env_ptr);
  }
}

static void MR_CALL 
mdb__interactive_query__call_run_normal_3_p_0(
  MR_Word QueryPred0_4,
  MR_Word Bindings0_5,
  MR_Word * Solution_6,
  MR_Cont cont,
  void * cont_env_ptr)
{
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

	X =  QueryPred0_4 ;
		{

    Y = X


		;}
#undef MR_PROC_LABEL
	 QueryPred_7  = Y;
}
      func_0 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box *, MR_Box *, MR_Cont, void *)) (MR_hl_field(MR_mktag(0), QueryPred_7, (MR_Integer) 1)));
      func_0(((MR_Box) QueryPred_7), ((MR_Box) (Bindings0_5)), &(env).mdb__interactive_query__call_run_normal_3_p_0_env_0__conv2_Bindings_8, &(env).mdb__interactive_query__call_run_normal_3_p_0_env_0__conv1_Loaded_9, mdb__interactive_query__call_run_normal_3_p_0_2, &env);
    }
  }
}

static MR_String MR_CALL 
mdb__interactive_query__grade_option_0_f_0(void)
{
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
}

static void MR_CALL 
mdb__interactive_query__write_comma_var_3_p_0(
  MR_String Var_4)
{
  {
    mercury__io__write_string_3_p_0((MR_String) ", ");
    mercury__io__write_string_3_p_0(Var_4);
  }
}

static void MR_CALL 
mdb__interactive_query__write_var_type_4_p_0(
  MR_Word Bindings_5,
  MR_String Var_6)
{
  {
    MR_Word TypeInfo_17_17;
    MR_Word Univ_8;
    MR_String Var_11;
    MR_Word Var_13;
    MR_Box conv0_Univ_8;
    MR_Box Var_14;
    MR_Box Var_18;

    mercury__map__lookup_3_p_0((MR_Word) &mercury__builtin__builtin__type_ctor_info_string_0, (MR_Word) &mercury__univ__univ__type_ctor_info_univ_0, Bindings_5, ((MR_Box) (Var_6)), &conv0_Univ_8);
    Univ_8 = ((MR_Word) conv0_Univ_8);
    Var_14 = mercury__univ__univ_value_1_f_0(&TypeInfo_17_17, Univ_8);
    Var_13 = mercury__type_desc__type_of_1_f_0(TypeInfo_17_17);
    Var_11 = mercury__type_desc__type_name_1_f_0(Var_13);
    mercury__io__write_string_3_p_0(Var_11);
  }
}

static void MR_CALL 
mdb__interactive_query__write_set_goal_3_p_0(
  MR_String Var_4)
{
  {
    MR_Word Var_8;
    MR_Word Var_11;
    MR_Word Var_12;
    MR_Word Var_14;

    {
      Var_14 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_14, 0) = ((MR_Box) (Var_4));
      MR_hl_field(MR_mktag(1), Var_14, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &mdb__interactive_query_scalar_common_1[26])));
    }
    {
      Var_12 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_12, 0) = ((MR_Box) ((MR_String) "\", univ.univ("));
      MR_hl_field(MR_mktag(1), Var_12, 1) = ((MR_Box) (Var_14));
    }
    {
      Var_11 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_11, 0) = ((MR_Box) (Var_4));
      MR_hl_field(MR_mktag(1), Var_11, 1) = ((MR_Box) (Var_12));
    }
    {
      Var_8 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_8, 0) = ((MR_Box) ((MR_String) "       map.set(\""));
      MR_hl_field(MR_mktag(1), Var_8, 1) = ((MR_Box) (Var_11));
    }
    mercury__io__write_strings_3_p_0(Var_8);
  }
}

static void MR_CALL 
mdb__interactive_query__write_cast_goal_3_p_0(
  MR_String Var_4)
{
  {
    MR_Word Var_8;
    MR_Word Var_11;
    MR_Word Var_12;
    MR_Word Var_14;

    {
      Var_14 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_14, 0) = ((MR_Box) (Var_4));
      MR_hl_field(MR_mktag(1), Var_14, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &mdb__interactive_query_scalar_common_1[22])));
    }
    {
      Var_12 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_12, 0) = ((MR_Box) ((MR_String) "\"), "));
      MR_hl_field(MR_mktag(1), Var_12, 1) = ((MR_Box) (Var_14));
    }
    {
      Var_11 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_11, 0) = ((MR_Box) (Var_4));
      MR_hl_field(MR_mktag(1), Var_11, 1) = ((MR_Box) (Var_12));
    }
    {
      Var_8 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_8, 0) = ((MR_Box) ((MR_String) "       univ.univ_to_type(!.Bindings ^ elem(\""));
      MR_hl_field(MR_mktag(1), Var_8, 1) = ((MR_Box) (Var_11));
    }
    mercury__io__write_strings_3_p_0(Var_8);
  }
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
  {
    MR_Word Bindings_18;
    MR_Word Env_19;

    mercury__map__from_corresponding_lists_3_p_0((MR_Word) &mercury__builtin__builtin__type_ctor_info_string_0, (MR_Word) &mercury__univ__univ__type_ctor_info_univ_0, Names_13, Values_14, &Bindings_18);
    {
      Env_19 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 6 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), Env_19, 0) = ((MR_Box) (QueryType_10));
      MR_hl_field(MR_mktag(0), Env_19, 1) = ((MR_Box) (Imports_11));
      MR_hl_field(MR_mktag(0), Env_19, 2) = ((MR_Box) (Options_12));
      MR_hl_field(MR_mktag(0), Env_19, 3) = ((MR_Box) (Bindings_18));
      MR_hl_field(MR_mktag(0), Env_19, 4) = ((MR_Box) (SocketIn_15));
      MR_hl_field(MR_mktag(0), Env_19, 5) = ((MR_Box) (SocketOut_16));
    }
    mdb__interactive_query__query_external_2_3_p_0(Env_19);
  }
}

static void MR_CALL 
mdb__interactive_query__query_external_2_3_p_0(
  MR_Word Env_4)
{
  while (MR_TRUE)
  {
    MR_Word OldInputStream_6;
    MR_Word Result_7;
    MR_Word Var_20 = ((MR_Word) (MR_hl_field(MR_mktag(0), Env_4, (MR_Integer) 4)));
    MR_Word Var_49 = ((MR_Word) (MR_hl_field(MR_mktag(0), Env_4, (MR_Integer) 0)));
    MR_Word Var_50 = ((MR_Word) (MR_hl_field(MR_mktag(0), Env_4, (MR_Integer) 1)));
    MR_String Var_51 = ((MR_String) (MR_hl_field(MR_mktag(0), Env_4, (MR_Integer) 2)));
    MR_Word Var_52 = ((MR_Word) (MR_hl_field(MR_mktag(0), Env_4, (MR_Integer) 3)));
    MR_Word Var_53 = ((MR_Word) (MR_hl_field(MR_mktag(0), Env_4, (MR_Integer) 5)));
    MR_Word Var_8;

    // setup for model_det tailcalls optimized into a loop
    mercury__io__set_input_stream_4_p_0(Var_20, &OldInputStream_6);
    mercury__term_io__read_term_3_p_0((MR_Word) &mercury__term__term__type_ctor_info_generic_0, &Result_7);
    mercury__io__set_input_stream_4_p_0(OldInputStream_6, &Var_8);
    switch (MR_tag((MR_Word) Result_7)) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        {
          MR_Word Var_46 = ((MR_Word) (MR_hl_field(MR_mktag(0), Env_4, (MR_Integer) 5)));
          MR_Word Var_54 = ((MR_Word) (MR_hl_field(MR_mktag(0), Env_4, (MR_Integer) 0)));
          MR_Word Var_55 = ((MR_Word) (MR_hl_field(MR_mktag(0), Env_4, (MR_Integer) 1)));
          MR_String Var_56 = ((MR_String) (MR_hl_field(MR_mktag(0), Env_4, (MR_Integer) 2)));
          MR_Word Var_57 = ((MR_Word) (MR_hl_field(MR_mktag(0), Env_4, (MR_Integer) 3)));
          MR_Word Var_58 = ((MR_Word) (MR_hl_field(MR_mktag(0), Env_4, (MR_Integer) 4)));

          mdb__interactive_query__send_term_to_socket_4_p_0((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 2)), Var_46);
        }
        break;
      case (MR_Integer) 1:
        {
          MR_String ErrorMsg_9 = ((MR_String) (MR_hl_field(MR_mktag(1), Result_7, (MR_Integer) 0)));
          MR_Word Var_41;
          MR_Word Var_42;
          MR_Integer _Line_10 = ((MR_Integer) (MR_hl_field(MR_mktag(1), Result_7, (MR_Integer) 1)));
          MR_Word Var_59;
          MR_Word Var_60;
          MR_String Var_61;
          MR_Word Var_62;
          MR_Word Var_63;

          {
            Var_41 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(2), Var_41, 0) = ((MR_Box) (ErrorMsg_9));
          }
          Var_59 = ((MR_Word) (MR_hl_field(MR_mktag(0), Env_4, (MR_Integer) 0)));
          Var_60 = ((MR_Word) (MR_hl_field(MR_mktag(0), Env_4, (MR_Integer) 1)));
          Var_61 = ((MR_String) (MR_hl_field(MR_mktag(0), Env_4, (MR_Integer) 2)));
          Var_62 = ((MR_Word) (MR_hl_field(MR_mktag(0), Env_4, (MR_Integer) 3)));
          Var_63 = ((MR_Word) (MR_hl_field(MR_mktag(0), Env_4, (MR_Integer) 4)));
          Var_42 = ((MR_Word) (MR_hl_field(MR_mktag(0), Env_4, (MR_Integer) 5)));
          mdb__interactive_query__send_term_to_socket_4_p_0(Var_41, Var_42);
          // direct tailcall eliminated
          continue;
        }
        break;
      case (MR_Integer) 2:
        {
          MR_Word Varset_11 = ((MR_Word) (MR_hl_field(MR_mktag(2), Result_7, (MR_Integer) 0)));
          MR_Word Term_12 = ((MR_Word) (MR_hl_field(MR_mktag(2), Result_7, (MR_Integer) 1)));
          MR_Word Cmd_13;

          mdb__interactive_query__parse_query_command_2_p_0(Term_12, &Cmd_13);
          switch (MR_tag((MR_Word) Cmd_13)) {
            default: /*NOTREACHED*/ MR_assert(0);
            case (MR_Integer) 0:
              switch (MR_unmkbody(Cmd_13)) {
                default: /*NOTREACHED*/ MR_assert(0);
                case (MR_Integer) 0:
                  {
                    MR_Word Var_39 = ((MR_Word) (MR_hl_field(MR_mktag(0), Env_4, (MR_Integer) 5)));
                    MR_Word Var_64 = ((MR_Word) (MR_hl_field(MR_mktag(0), Env_4, (MR_Integer) 0)));
                    MR_Word Var_65 = ((MR_Word) (MR_hl_field(MR_mktag(0), Env_4, (MR_Integer) 1)));
                    MR_String Var_66 = ((MR_String) (MR_hl_field(MR_mktag(0), Env_4, (MR_Integer) 2)));
                    MR_Word Var_67 = ((MR_Word) (MR_hl_field(MR_mktag(0), Env_4, (MR_Integer) 3)));
                    MR_Word Var_68 = ((MR_Word) (MR_hl_field(MR_mktag(0), Env_4, (MR_Integer) 4)));

                    mdb__interactive_query__send_term_to_socket_4_p_0((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 1)), Var_39);
                  }
                  break;
                case (MR_Integer) 1:
                  {
                    MR_Word Var_26;
                    MR_Word Var_96;
                    MR_Word Var_97;
                    MR_String Var_98;
                    MR_Word Var_99;
                    MR_Word Var_100;

                    mdb__interactive_query__run_query_5_p_0(Env_4, Term_12, Varset_11);
                    Var_96 = ((MR_Word) (MR_hl_field(MR_mktag(0), Env_4, (MR_Integer) 0)));
                    Var_97 = ((MR_Word) (MR_hl_field(MR_mktag(0), Env_4, (MR_Integer) 1)));
                    Var_98 = ((MR_String) (MR_hl_field(MR_mktag(0), Env_4, (MR_Integer) 2)));
                    Var_99 = ((MR_Word) (MR_hl_field(MR_mktag(0), Env_4, (MR_Integer) 3)));
                    Var_100 = ((MR_Word) (MR_hl_field(MR_mktag(0), Env_4, (MR_Integer) 4)));
                    Var_26 = ((MR_Word) (MR_hl_field(MR_mktag(0), Env_4, (MR_Integer) 5)));
                    mdb__interactive_query__send_term_to_socket_4_p_0((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), Var_26);
                    // direct tailcall eliminated
                    continue;
                  }
                  break;
              }
              break;
            case (MR_Integer) 1:
              {
                MR_String NewOptions_14 = ((MR_String) (MR_hl_field(MR_mktag(1), Cmd_13, (MR_Integer) 0)));
                MR_Word Env1_15;
                MR_Word Var_35 = ((MR_Word) (MR_hl_field(MR_mktag(0), Env_4, (MR_Integer) 5)));
                MR_Word Var_69 = ((MR_Word) (MR_hl_field(MR_mktag(0), Env_4, (MR_Integer) 0)));
                MR_Word Var_70 = ((MR_Word) (MR_hl_field(MR_mktag(0), Env_4, (MR_Integer) 1)));
                MR_String Var_71 = ((MR_String) (MR_hl_field(MR_mktag(0), Env_4, (MR_Integer) 2)));
                MR_Word Var_72 = ((MR_Word) (MR_hl_field(MR_mktag(0), Env_4, (MR_Integer) 3)));
                MR_Word Var_73 = ((MR_Word) (MR_hl_field(MR_mktag(0), Env_4, (MR_Integer) 4)));
                MR_Word Var_74;
                MR_Word Var_75;
                MR_Word Var_77;
                MR_Word Var_78;
                MR_Word Var_79;
                MR_String Var_76;
                MR_Word next_value_of_Env_4;

                mdb__interactive_query__send_term_to_socket_4_p_0((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), Var_35);
                Var_74 = ((MR_Word) (MR_hl_field(MR_mktag(0), Env_4, (MR_Integer) 0)));
                Var_75 = ((MR_Word) (MR_hl_field(MR_mktag(0), Env_4, (MR_Integer) 1)));
                Var_76 = ((MR_String) (MR_hl_field(MR_mktag(0), Env_4, (MR_Integer) 2)));
                Var_77 = ((MR_Word) (MR_hl_field(MR_mktag(0), Env_4, (MR_Integer) 3)));
                Var_78 = ((MR_Word) (MR_hl_field(MR_mktag(0), Env_4, (MR_Integer) 4)));
                Var_79 = ((MR_Word) (MR_hl_field(MR_mktag(0), Env_4, (MR_Integer) 5)));
                {
                  Env1_15 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 6 * sizeof(MR_Word)), NULL, NULL);
                  MR_hl_field(MR_mktag(0), Env1_15, 0) = ((MR_Box) (Var_74));
                  MR_hl_field(MR_mktag(0), Env1_15, 1) = ((MR_Box) (Var_75));
                  MR_hl_field(MR_mktag(0), Env1_15, 2) = ((MR_Box) (NewOptions_14));
                  MR_hl_field(MR_mktag(0), Env1_15, 3) = ((MR_Box) (Var_77));
                  MR_hl_field(MR_mktag(0), Env1_15, 4) = ((MR_Box) (Var_78));
                  MR_hl_field(MR_mktag(0), Env1_15, 5) = ((MR_Box) (Var_79));
                }
                // direct tailcall eliminated
                next_value_of_Env_4 = Env1_15;
                Env_4 = next_value_of_Env_4;
                continue;
              }
              break;
            case (MR_Integer) 2:
              {
                MR_Word AddedImports_16 = ((MR_Word) (MR_hl_field(MR_mktag(2), Cmd_13, (MR_Integer) 0)));
                MR_Word Imports_17;
                MR_Word Var_29 = ((MR_Word) (MR_hl_field(MR_mktag(0), Env_4, (MR_Integer) 1)));
                MR_Word Var_30;
                MR_Word Env1_48;
                MR_Word Var_90;
                MR_Word Var_80 = ((MR_Word) (MR_hl_field(MR_mktag(0), Env_4, (MR_Integer) 0)));
                MR_String Var_81 = ((MR_String) (MR_hl_field(MR_mktag(0), Env_4, (MR_Integer) 2)));
                MR_Word Var_82 = ((MR_Word) (MR_hl_field(MR_mktag(0), Env_4, (MR_Integer) 3)));
                MR_Word Var_83 = ((MR_Word) (MR_hl_field(MR_mktag(0), Env_4, (MR_Integer) 4)));
                MR_Word Var_84 = ((MR_Word) (MR_hl_field(MR_mktag(0), Env_4, (MR_Integer) 5)));
                MR_Word Var_85;
                MR_String Var_87;
                MR_Word Var_88;
                MR_Word Var_89;
                MR_Word Var_86;
                MR_Word next_value_of_Env_4;

                Imports_17 = mercury__list__f_43_43_2_f_0((MR_Word) &mercury__builtin__builtin__type_ctor_info_string_0, Var_29, AddedImports_16);
                Var_85 = ((MR_Word) (MR_hl_field(MR_mktag(0), Env_4, (MR_Integer) 0)));
                Var_86 = ((MR_Word) (MR_hl_field(MR_mktag(0), Env_4, (MR_Integer) 1)));
                Var_87 = ((MR_String) (MR_hl_field(MR_mktag(0), Env_4, (MR_Integer) 2)));
                Var_88 = ((MR_Word) (MR_hl_field(MR_mktag(0), Env_4, (MR_Integer) 3)));
                Var_89 = ((MR_Word) (MR_hl_field(MR_mktag(0), Env_4, (MR_Integer) 4)));
                Var_90 = ((MR_Word) (MR_hl_field(MR_mktag(0), Env_4, (MR_Integer) 5)));
                {
                  Env1_48 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 6 * sizeof(MR_Word)), NULL, NULL);
                  MR_hl_field(MR_mktag(0), Env1_48, 0) = ((MR_Box) (Var_85));
                  MR_hl_field(MR_mktag(0), Env1_48, 1) = ((MR_Box) (Imports_17));
                  MR_hl_field(MR_mktag(0), Env1_48, 2) = ((MR_Box) (Var_87));
                  MR_hl_field(MR_mktag(0), Env1_48, 3) = ((MR_Box) (Var_88));
                  MR_hl_field(MR_mktag(0), Env1_48, 4) = ((MR_Box) (Var_89));
                  MR_hl_field(MR_mktag(0), Env1_48, 5) = ((MR_Box) (Var_90));
                }
                {
                  Var_30 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(MR_mktag(1), Var_30, 0) = ((MR_Box) (Imports_17));
                }
                mdb__interactive_query__send_term_to_socket_4_p_0(Var_30, Var_90);
                // direct tailcall eliminated
                next_value_of_Env_4 = Env1_48;
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
mdb__interactive_query__send_term_to_socket_4_p_0(
  MR_Word Term_5,
  MR_Word SocketStream_6)
{
  {
    mercury__io__write_4_p_0((MR_Word) &mdb__interactive_query__mdb__interactive_query__type_ctor_info_interactive_query_response_0, SocketStream_6, ((MR_Box) (Term_5)));
    mercury__io__write_string_4_p_0(SocketStream_6, (MR_String) ".\n");
    mercury__io__flush_output_3_p_0(SocketStream_6);
  }
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
  {
    MR_Word Bindings_18;
    MR_Word Env_19;

    mercury__map__from_corresponding_lists_3_p_0((MR_Word) &mercury__builtin__builtin__type_ctor_info_string_0, (MR_Word) &mercury__univ__univ__type_ctor_info_univ_0, Names_13, Values_14, &Bindings_18);
    {
      Env_19 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 6 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), Env_19, 0) = ((MR_Box) (QueryType_10));
      MR_hl_field(MR_mktag(0), Env_19, 1) = ((MR_Box) (Imports_11));
      MR_hl_field(MR_mktag(0), Env_19, 2) = ((MR_Box) (Options_12));
      MR_hl_field(MR_mktag(0), Env_19, 3) = ((MR_Box) (Bindings_18));
      MR_hl_field(MR_mktag(0), Env_19, 4) = ((MR_Box) (MdbStdin_15));
      MR_hl_field(MR_mktag(0), Env_19, 5) = ((MR_Box) (MdbStdout_16));
    }
    mdb__interactive_query__query_2_3_p_0(Env_19);
  }
}

static void MR_CALL 
mdb__interactive_query__query_2_3_p_0(
  MR_Word tscc_proc_1_input_1_Env_4)
{
  {
    MR_Word tscc_proc_2_input_1_Env_5;
    MR_Word tscc_proc_2_input_2_ReadTerm_6;

    // The code for TSCC PROC 1: pred mdb.interactive_query.query_2/3-0.
    // Setup for mutual tailcalls optimized into a loop.
    // The mutually recursive procedures are:

    // proc 1 in TSCC: pred mdb.interactive_query.query_2/3-0
    // proc 2 in TSCC: pred mdb.interactive_query.query_3/4-0

    goto top_of_proc_1;
  top_of_proc_1:;
    {
      MR_Word Env_4 = tscc_proc_1_input_1_Env_4;
      MR_String Prompt_6;
      MR_Word Result_7;
      MR_Word Var_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), Env_4, (MR_Integer) 0)));
      MR_Word Var_31 = ((MR_Word) (MR_hl_field(MR_mktag(0), Env_4, (MR_Integer) 4)));
      MR_Word Var_32 = ((MR_Word) (MR_hl_field(MR_mktag(0), Env_4, (MR_Integer) 5)));
      MR_Word Var_28 = ((MR_Word) (MR_hl_field(MR_mktag(0), Env_4, (MR_Integer) 1)));
      MR_String Var_29 = ((MR_String) (MR_hl_field(MR_mktag(0), Env_4, (MR_Integer) 2)));
      MR_Word Var_30 = ((MR_Word) (MR_hl_field(MR_mktag(0), Env_4, (MR_Integer) 3)));

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
      mdb__util__trace_getline_6_p_0(Prompt_6, &Result_7, Var_31, Var_32);
      switch (MR_tag((MR_Word) Result_7)) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 0:
          {
            MR_Word Var_26 = ((MR_Word) (MR_hl_field(MR_mktag(0), Env_4, (MR_Integer) 5)));
            MR_Word Var_43 = ((MR_Word) (MR_hl_field(MR_mktag(0), Env_4, (MR_Integer) 0)));
            MR_Word Var_44 = ((MR_Word) (MR_hl_field(MR_mktag(0), Env_4, (MR_Integer) 1)));
            MR_String Var_45 = ((MR_String) (MR_hl_field(MR_mktag(0), Env_4, (MR_Integer) 2)));
            MR_Word Var_46 = ((MR_Word) (MR_hl_field(MR_mktag(0), Env_4, (MR_Integer) 3)));
            MR_Word Var_47 = ((MR_Word) (MR_hl_field(MR_mktag(0), Env_4, (MR_Integer) 4)));

            mercury__io__nl_3_p_0(Var_26);
          }
          break;
        case (MR_Integer) 1:
          {
            MR_String Line_10 = ((MR_String) (MR_hl_field(MR_mktag(1), Result_7, (MR_Integer) 0)));
            MR_Word ReadTerm_12;
            MR_Word Var_11;
            MR_Word next_value_of_tscc_proc_2_input_1_Env_5;
            MR_Word next_value_of_tscc_proc_2_input_2_ReadTerm_6;

            mercury__parser__read_term_from_string_4_p_0((MR_Word) &mercury__term__term__type_ctor_info_generic_0, (MR_String) "", Line_10, &Var_11, &ReadTerm_12);
            // direct tailcall eliminated
            next_value_of_tscc_proc_2_input_1_Env_5 = Env_4;
            next_value_of_tscc_proc_2_input_2_ReadTerm_6 = ReadTerm_12;
            tscc_proc_2_input_1_Env_5 = next_value_of_tscc_proc_2_input_1_Env_5;
            tscc_proc_2_input_2_ReadTerm_6 = next_value_of_tscc_proc_2_input_2_ReadTerm_6;
            goto top_of_proc_2;
          }
          break;
        case (MR_Integer) 2:
          {
            MR_Word Error_8 = ((MR_Word) (MR_hl_field(MR_mktag(2), Result_7, (MR_Integer) 0)));
            MR_String Msg_9;
            MR_Word Var_21;
            MR_Word Var_23;
            MR_Word Var_48;
            MR_Word Var_49;
            MR_String Var_50;
            MR_Word Var_51;
            MR_Word Var_52;
            MR_Word Var_53;
            MR_Word Var_54;
            MR_String Var_55;
            MR_Word Var_56;
            MR_Word Var_57;
            MR_Word next_value_of_tscc_proc_1_input_1_Env_4;

            mercury__io__error_message_2_p_0(Error_8, &Msg_9);
            Var_48 = ((MR_Word) (MR_hl_field(MR_mktag(0), Env_4, (MR_Integer) 0)));
            Var_49 = ((MR_Word) (MR_hl_field(MR_mktag(0), Env_4, (MR_Integer) 1)));
            Var_50 = ((MR_String) (MR_hl_field(MR_mktag(0), Env_4, (MR_Integer) 2)));
            Var_51 = ((MR_Word) (MR_hl_field(MR_mktag(0), Env_4, (MR_Integer) 3)));
            Var_52 = ((MR_Word) (MR_hl_field(MR_mktag(0), Env_4, (MR_Integer) 4)));
            Var_21 = ((MR_Word) (MR_hl_field(MR_mktag(0), Env_4, (MR_Integer) 5)));
            mercury__io__write_string_4_p_0(Var_21, Msg_9);
            Var_53 = ((MR_Word) (MR_hl_field(MR_mktag(0), Env_4, (MR_Integer) 0)));
            Var_54 = ((MR_Word) (MR_hl_field(MR_mktag(0), Env_4, (MR_Integer) 1)));
            Var_55 = ((MR_String) (MR_hl_field(MR_mktag(0), Env_4, (MR_Integer) 2)));
            Var_56 = ((MR_Word) (MR_hl_field(MR_mktag(0), Env_4, (MR_Integer) 3)));
            Var_57 = ((MR_Word) (MR_hl_field(MR_mktag(0), Env_4, (MR_Integer) 4)));
            Var_23 = ((MR_Word) (MR_hl_field(MR_mktag(0), Env_4, (MR_Integer) 5)));
            mercury__io__nl_3_p_0(Var_23);
            // direct tailcall eliminated
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
            MR_Word Var_42 = ((MR_Word) (MR_hl_field(MR_mktag(0), Env_5, (MR_Integer) 5)));
            MR_Word Var_45 = ((MR_Word) (MR_hl_field(MR_mktag(0), Env_5, (MR_Integer) 0)));
            MR_Word Var_46 = ((MR_Word) (MR_hl_field(MR_mktag(0), Env_5, (MR_Integer) 1)));
            MR_String Var_47 = ((MR_String) (MR_hl_field(MR_mktag(0), Env_5, (MR_Integer) 2)));
            MR_Word Var_48 = ((MR_Word) (MR_hl_field(MR_mktag(0), Env_5, (MR_Integer) 3)));
            MR_Word Var_49 = ((MR_Word) (MR_hl_field(MR_mktag(0), Env_5, (MR_Integer) 4)));

            mercury__io__nl_3_p_0(Var_42);
          }
          break;
        case (MR_Integer) 1:
          {
            MR_String Msg_8 = ((MR_String) (MR_hl_field(MR_mktag(1), ReadTerm_6, (MR_Integer) 0)));
            MR_Word Var_37 = ((MR_Word) (MR_hl_field(MR_mktag(0), Env_5, (MR_Integer) 5)));
            MR_Word Var_39;
            MR_Integer _Line_9 = ((MR_Integer) (MR_hl_field(MR_mktag(1), ReadTerm_6, (MR_Integer) 1)));
            MR_Word Var_50 = ((MR_Word) (MR_hl_field(MR_mktag(0), Env_5, (MR_Integer) 0)));
            MR_Word Var_51 = ((MR_Word) (MR_hl_field(MR_mktag(0), Env_5, (MR_Integer) 1)));
            MR_String Var_52 = ((MR_String) (MR_hl_field(MR_mktag(0), Env_5, (MR_Integer) 2)));
            MR_Word Var_53 = ((MR_Word) (MR_hl_field(MR_mktag(0), Env_5, (MR_Integer) 3)));
            MR_Word Var_54 = ((MR_Word) (MR_hl_field(MR_mktag(0), Env_5, (MR_Integer) 4)));
            MR_Word Var_55;
            MR_Word Var_56;
            MR_String Var_57;
            MR_Word Var_58;
            MR_Word Var_59;
            MR_Word next_value_of_tscc_proc_1_input_1_Env_4;

            mercury__io__write_string_4_p_0(Var_37, Msg_8);
            Var_55 = ((MR_Word) (MR_hl_field(MR_mktag(0), Env_5, (MR_Integer) 0)));
            Var_56 = ((MR_Word) (MR_hl_field(MR_mktag(0), Env_5, (MR_Integer) 1)));
            Var_57 = ((MR_String) (MR_hl_field(MR_mktag(0), Env_5, (MR_Integer) 2)));
            Var_58 = ((MR_Word) (MR_hl_field(MR_mktag(0), Env_5, (MR_Integer) 3)));
            Var_59 = ((MR_Word) (MR_hl_field(MR_mktag(0), Env_5, (MR_Integer) 4)));
            Var_39 = ((MR_Word) (MR_hl_field(MR_mktag(0), Env_5, (MR_Integer) 5)));
            mercury__io__nl_3_p_0(Var_39);
            // direct tailcall eliminated
            next_value_of_tscc_proc_1_input_1_Env_4 = Env_5;
            tscc_proc_1_input_1_Env_4 = next_value_of_tscc_proc_1_input_1_Env_4;
            goto top_of_proc_1;
          }
          break;
        case (MR_Integer) 2:
          {
            MR_Word Varset_10 = ((MR_Word) (MR_hl_field(MR_mktag(2), ReadTerm_6, (MR_Integer) 0)));
            MR_Word Term_11 = ((MR_Word) (MR_hl_field(MR_mktag(2), ReadTerm_6, (MR_Integer) 1)));
            MR_Word Cmd_12;
            MR_Word Var_109;
            MR_Word Var_113;
            MR_Word Var_110;
            MR_Word Var_111;
            MR_String Var_112;
            MR_Word Var_114;

            mdb__interactive_query__parse_query_command_2_p_0(Term_11, &Cmd_12);
            Var_114 = ((MR_Word) (MR_hl_field(MR_mktag(0), Env_5, (MR_Integer) 0)));
            Var_113 = ((MR_Word) (MR_hl_field(MR_mktag(0), Env_5, (MR_Integer) 1)));
            Var_112 = ((MR_String) (MR_hl_field(MR_mktag(0), Env_5, (MR_Integer) 2)));
            Var_111 = ((MR_Word) (MR_hl_field(MR_mktag(0), Env_5, (MR_Integer) 3)));
            Var_110 = ((MR_Word) (MR_hl_field(MR_mktag(0), Env_5, (MR_Integer) 4)));
            Var_109 = ((MR_Word) (MR_hl_field(MR_mktag(0), Env_5, (MR_Integer) 5)));
            switch (MR_tag((MR_Word) Cmd_12)) {
              default: /*NOTREACHED*/ MR_assert(0);
              case (MR_Integer) 0:
                switch (MR_unmkbody(Cmd_12)) {
                  default: /*NOTREACHED*/ MR_assert(0);
                  case (MR_Integer) 0:
                    mercury__io__nl_3_p_0(Var_109);
                    break;
                  case (MR_Integer) 1:
                    {
                      MR_Word next_value_of_tscc_proc_1_input_1_Env_4;

                      mercury__io__flush_output_3_p_0(Var_109);
                      mdb__interactive_query__run_query_5_p_0(Env_5, Term_11, Varset_10);
                      // direct tailcall eliminated
                      next_value_of_tscc_proc_1_input_1_Env_4 = Env_5;
                      tscc_proc_1_input_1_Env_4 = next_value_of_tscc_proc_1_input_1_Env_4;
                      goto top_of_proc_1;
                    }
                    break;
                }
                break;
              case (MR_Integer) 1:
                {
                  MR_Word TypeCtorInfo_107_107 = (MR_Word) &mercury__builtin__builtin__type_ctor_info_string_0;
                  MR_String NewOptions_13 = ((MR_String) (MR_hl_field(MR_mktag(1), Cmd_12, (MR_Integer) 0)));
                  MR_Word Env1_14;
                  MR_Word Var_30;
                  MR_Word Var_32;
                  MR_Word Var_70;
                  MR_Word Var_71;
                  MR_String Var_72;
                  MR_Word Var_73;
                  MR_Word Var_74;
                  MR_Word Var_75;
                  MR_Word Var_76;
                  MR_String Var_77;
                  MR_Word Var_78;
                  MR_Word Var_79;
                  MR_Word Var_80;
                  MR_Word Var_81;
                  MR_Word Var_83;
                  MR_Word Var_84;
                  MR_Word Var_85;
                  MR_String Var_82;
                  MR_Word next_value_of_tscc_proc_1_input_1_Env_4;

                  mercury__io__print_4_p_0(TypeCtorInfo_107_107, Var_109, ((MR_Box) ((MR_String) "Compilation options: ")));
                  Var_70 = ((MR_Word) (MR_hl_field(MR_mktag(0), Env_5, (MR_Integer) 0)));
                  Var_71 = ((MR_Word) (MR_hl_field(MR_mktag(0), Env_5, (MR_Integer) 1)));
                  Var_72 = ((MR_String) (MR_hl_field(MR_mktag(0), Env_5, (MR_Integer) 2)));
                  Var_73 = ((MR_Word) (MR_hl_field(MR_mktag(0), Env_5, (MR_Integer) 3)));
                  Var_74 = ((MR_Word) (MR_hl_field(MR_mktag(0), Env_5, (MR_Integer) 4)));
                  Var_30 = ((MR_Word) (MR_hl_field(MR_mktag(0), Env_5, (MR_Integer) 5)));
                  mercury__io__print_4_p_0(TypeCtorInfo_107_107, Var_30, ((MR_Box) (NewOptions_13)));
                  Var_75 = ((MR_Word) (MR_hl_field(MR_mktag(0), Env_5, (MR_Integer) 0)));
                  Var_76 = ((MR_Word) (MR_hl_field(MR_mktag(0), Env_5, (MR_Integer) 1)));
                  Var_77 = ((MR_String) (MR_hl_field(MR_mktag(0), Env_5, (MR_Integer) 2)));
                  Var_78 = ((MR_Word) (MR_hl_field(MR_mktag(0), Env_5, (MR_Integer) 3)));
                  Var_79 = ((MR_Word) (MR_hl_field(MR_mktag(0), Env_5, (MR_Integer) 4)));
                  Var_32 = ((MR_Word) (MR_hl_field(MR_mktag(0), Env_5, (MR_Integer) 5)));
                  mercury__io__nl_3_p_0(Var_32);
                  Var_80 = ((MR_Word) (MR_hl_field(MR_mktag(0), Env_5, (MR_Integer) 0)));
                  Var_81 = ((MR_Word) (MR_hl_field(MR_mktag(0), Env_5, (MR_Integer) 1)));
                  Var_82 = ((MR_String) (MR_hl_field(MR_mktag(0), Env_5, (MR_Integer) 2)));
                  Var_83 = ((MR_Word) (MR_hl_field(MR_mktag(0), Env_5, (MR_Integer) 3)));
                  Var_84 = ((MR_Word) (MR_hl_field(MR_mktag(0), Env_5, (MR_Integer) 4)));
                  Var_85 = ((MR_Word) (MR_hl_field(MR_mktag(0), Env_5, (MR_Integer) 5)));
                  {
                    Env1_14 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 6 * sizeof(MR_Word)), NULL, NULL);
                    MR_hl_field(MR_mktag(0), Env1_14, 0) = ((MR_Box) (Var_80));
                    MR_hl_field(MR_mktag(0), Env1_14, 1) = ((MR_Box) (Var_81));
                    MR_hl_field(MR_mktag(0), Env1_14, 2) = ((MR_Box) (NewOptions_13));
                    MR_hl_field(MR_mktag(0), Env1_14, 3) = ((MR_Box) (Var_83));
                    MR_hl_field(MR_mktag(0), Env1_14, 4) = ((MR_Box) (Var_84));
                    MR_hl_field(MR_mktag(0), Env1_14, 5) = ((MR_Box) (Var_85));
                  }
                  // direct tailcall eliminated
                  next_value_of_tscc_proc_1_input_1_Env_4 = Env1_14;
                  tscc_proc_1_input_1_Env_4 = next_value_of_tscc_proc_1_input_1_Env_4;
                  goto top_of_proc_1;
                }
                break;
              case (MR_Integer) 2:
                {
                  MR_Word AddedImports_15 = ((MR_Word) (MR_hl_field(MR_mktag(2), Cmd_12, (MR_Integer) 0)));
                  MR_Word Imports_16;
                  MR_Word Env1_44;
                  MR_Word Var_96;
                  MR_Word Var_91;
                  MR_String Var_93;
                  MR_Word Var_94;
                  MR_Word Var_95;
                  MR_Word Var_92;
                  MR_Word next_value_of_tscc_proc_1_input_1_Env_4;

                  Imports_16 = mercury__list__f_43_43_2_f_0((MR_Word) &mercury__builtin__builtin__type_ctor_info_string_0, Var_113, AddedImports_15);
                  Var_91 = ((MR_Word) (MR_hl_field(MR_mktag(0), Env_5, (MR_Integer) 0)));
                  Var_92 = ((MR_Word) (MR_hl_field(MR_mktag(0), Env_5, (MR_Integer) 1)));
                  Var_93 = ((MR_String) (MR_hl_field(MR_mktag(0), Env_5, (MR_Integer) 2)));
                  Var_94 = ((MR_Word) (MR_hl_field(MR_mktag(0), Env_5, (MR_Integer) 3)));
                  Var_95 = ((MR_Word) (MR_hl_field(MR_mktag(0), Env_5, (MR_Integer) 4)));
                  Var_96 = ((MR_Word) (MR_hl_field(MR_mktag(0), Env_5, (MR_Integer) 5)));
                  {
                    Env1_44 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 6 * sizeof(MR_Word)), NULL, NULL);
                    MR_hl_field(MR_mktag(0), Env1_44, 0) = ((MR_Box) (Var_91));
                    MR_hl_field(MR_mktag(0), Env1_44, 1) = ((MR_Box) (Imports_16));
                    MR_hl_field(MR_mktag(0), Env1_44, 2) = ((MR_Box) (Var_93));
                    MR_hl_field(MR_mktag(0), Env1_44, 3) = ((MR_Box) (Var_94));
                    MR_hl_field(MR_mktag(0), Env1_44, 4) = ((MR_Box) (Var_95));
                    MR_hl_field(MR_mktag(0), Env1_44, 5) = ((MR_Box) (Var_96));
                  }
                  mdb__interactive_query__write_import_list_4_p_0(Var_96, Imports_16);
                  // direct tailcall eliminated
                  next_value_of_tscc_proc_1_input_1_Env_4 = Env1_44;
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
}

static void MR_CALL 
mdb__interactive_query__query_3_4_p_0(
  MR_Word tscc_proc_2_input_1_Env_5,
  MR_Word tscc_proc_2_input_2_ReadTerm_6)
{
  {
    MR_Word tscc_proc_1_input_1_Env_4;

    // The code for TSCC PROC 2: pred mdb.interactive_query.query_3/4-0.
    // Setup for mutual tailcalls optimized into a loop.
    // The mutually recursive procedures are:

    // proc 1 in TSCC: pred mdb.interactive_query.query_2/3-0
    // proc 2 in TSCC: pred mdb.interactive_query.query_3/4-0

    goto top_of_proc_2;
  top_of_proc_1:;
    {
      MR_Word Env_4 = tscc_proc_1_input_1_Env_4;
      MR_String Prompt_6;
      MR_Word Result_7;
      MR_Word Var_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), Env_4, (MR_Integer) 0)));
      MR_Word Var_31 = ((MR_Word) (MR_hl_field(MR_mktag(0), Env_4, (MR_Integer) 4)));
      MR_Word Var_32 = ((MR_Word) (MR_hl_field(MR_mktag(0), Env_4, (MR_Integer) 5)));
      MR_Word Var_28 = ((MR_Word) (MR_hl_field(MR_mktag(0), Env_4, (MR_Integer) 1)));
      MR_String Var_29 = ((MR_String) (MR_hl_field(MR_mktag(0), Env_4, (MR_Integer) 2)));
      MR_Word Var_30 = ((MR_Word) (MR_hl_field(MR_mktag(0), Env_4, (MR_Integer) 3)));

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
      mdb__util__trace_getline_6_p_0(Prompt_6, &Result_7, Var_31, Var_32);
      switch (MR_tag((MR_Word) Result_7)) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 0:
          {
            MR_Word Var_26 = ((MR_Word) (MR_hl_field(MR_mktag(0), Env_4, (MR_Integer) 5)));
            MR_Word Var_43 = ((MR_Word) (MR_hl_field(MR_mktag(0), Env_4, (MR_Integer) 0)));
            MR_Word Var_44 = ((MR_Word) (MR_hl_field(MR_mktag(0), Env_4, (MR_Integer) 1)));
            MR_String Var_45 = ((MR_String) (MR_hl_field(MR_mktag(0), Env_4, (MR_Integer) 2)));
            MR_Word Var_46 = ((MR_Word) (MR_hl_field(MR_mktag(0), Env_4, (MR_Integer) 3)));
            MR_Word Var_47 = ((MR_Word) (MR_hl_field(MR_mktag(0), Env_4, (MR_Integer) 4)));

            mercury__io__nl_3_p_0(Var_26);
          }
          break;
        case (MR_Integer) 1:
          {
            MR_String Line_10 = ((MR_String) (MR_hl_field(MR_mktag(1), Result_7, (MR_Integer) 0)));
            MR_Word ReadTerm_12;
            MR_Word Var_11;
            MR_Word next_value_of_tscc_proc_2_input_1_Env_5;
            MR_Word next_value_of_tscc_proc_2_input_2_ReadTerm_6;

            mercury__parser__read_term_from_string_4_p_0((MR_Word) &mercury__term__term__type_ctor_info_generic_0, (MR_String) "", Line_10, &Var_11, &ReadTerm_12);
            // direct tailcall eliminated
            next_value_of_tscc_proc_2_input_1_Env_5 = Env_4;
            next_value_of_tscc_proc_2_input_2_ReadTerm_6 = ReadTerm_12;
            tscc_proc_2_input_1_Env_5 = next_value_of_tscc_proc_2_input_1_Env_5;
            tscc_proc_2_input_2_ReadTerm_6 = next_value_of_tscc_proc_2_input_2_ReadTerm_6;
            goto top_of_proc_2;
          }
          break;
        case (MR_Integer) 2:
          {
            MR_Word Error_8 = ((MR_Word) (MR_hl_field(MR_mktag(2), Result_7, (MR_Integer) 0)));
            MR_String Msg_9;
            MR_Word Var_21;
            MR_Word Var_23;
            MR_Word Var_48;
            MR_Word Var_49;
            MR_String Var_50;
            MR_Word Var_51;
            MR_Word Var_52;
            MR_Word Var_53;
            MR_Word Var_54;
            MR_String Var_55;
            MR_Word Var_56;
            MR_Word Var_57;
            MR_Word next_value_of_tscc_proc_1_input_1_Env_4;

            mercury__io__error_message_2_p_0(Error_8, &Msg_9);
            Var_48 = ((MR_Word) (MR_hl_field(MR_mktag(0), Env_4, (MR_Integer) 0)));
            Var_49 = ((MR_Word) (MR_hl_field(MR_mktag(0), Env_4, (MR_Integer) 1)));
            Var_50 = ((MR_String) (MR_hl_field(MR_mktag(0), Env_4, (MR_Integer) 2)));
            Var_51 = ((MR_Word) (MR_hl_field(MR_mktag(0), Env_4, (MR_Integer) 3)));
            Var_52 = ((MR_Word) (MR_hl_field(MR_mktag(0), Env_4, (MR_Integer) 4)));
            Var_21 = ((MR_Word) (MR_hl_field(MR_mktag(0), Env_4, (MR_Integer) 5)));
            mercury__io__write_string_4_p_0(Var_21, Msg_9);
            Var_53 = ((MR_Word) (MR_hl_field(MR_mktag(0), Env_4, (MR_Integer) 0)));
            Var_54 = ((MR_Word) (MR_hl_field(MR_mktag(0), Env_4, (MR_Integer) 1)));
            Var_55 = ((MR_String) (MR_hl_field(MR_mktag(0), Env_4, (MR_Integer) 2)));
            Var_56 = ((MR_Word) (MR_hl_field(MR_mktag(0), Env_4, (MR_Integer) 3)));
            Var_57 = ((MR_Word) (MR_hl_field(MR_mktag(0), Env_4, (MR_Integer) 4)));
            Var_23 = ((MR_Word) (MR_hl_field(MR_mktag(0), Env_4, (MR_Integer) 5)));
            mercury__io__nl_3_p_0(Var_23);
            // direct tailcall eliminated
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
            MR_Word Var_42 = ((MR_Word) (MR_hl_field(MR_mktag(0), Env_5, (MR_Integer) 5)));
            MR_Word Var_45 = ((MR_Word) (MR_hl_field(MR_mktag(0), Env_5, (MR_Integer) 0)));
            MR_Word Var_46 = ((MR_Word) (MR_hl_field(MR_mktag(0), Env_5, (MR_Integer) 1)));
            MR_String Var_47 = ((MR_String) (MR_hl_field(MR_mktag(0), Env_5, (MR_Integer) 2)));
            MR_Word Var_48 = ((MR_Word) (MR_hl_field(MR_mktag(0), Env_5, (MR_Integer) 3)));
            MR_Word Var_49 = ((MR_Word) (MR_hl_field(MR_mktag(0), Env_5, (MR_Integer) 4)));

            mercury__io__nl_3_p_0(Var_42);
          }
          break;
        case (MR_Integer) 1:
          {
            MR_String Msg_8 = ((MR_String) (MR_hl_field(MR_mktag(1), ReadTerm_6, (MR_Integer) 0)));
            MR_Word Var_37 = ((MR_Word) (MR_hl_field(MR_mktag(0), Env_5, (MR_Integer) 5)));
            MR_Word Var_39;
            MR_Integer _Line_9 = ((MR_Integer) (MR_hl_field(MR_mktag(1), ReadTerm_6, (MR_Integer) 1)));
            MR_Word Var_50 = ((MR_Word) (MR_hl_field(MR_mktag(0), Env_5, (MR_Integer) 0)));
            MR_Word Var_51 = ((MR_Word) (MR_hl_field(MR_mktag(0), Env_5, (MR_Integer) 1)));
            MR_String Var_52 = ((MR_String) (MR_hl_field(MR_mktag(0), Env_5, (MR_Integer) 2)));
            MR_Word Var_53 = ((MR_Word) (MR_hl_field(MR_mktag(0), Env_5, (MR_Integer) 3)));
            MR_Word Var_54 = ((MR_Word) (MR_hl_field(MR_mktag(0), Env_5, (MR_Integer) 4)));
            MR_Word Var_55;
            MR_Word Var_56;
            MR_String Var_57;
            MR_Word Var_58;
            MR_Word Var_59;
            MR_Word next_value_of_tscc_proc_1_input_1_Env_4;

            mercury__io__write_string_4_p_0(Var_37, Msg_8);
            Var_55 = ((MR_Word) (MR_hl_field(MR_mktag(0), Env_5, (MR_Integer) 0)));
            Var_56 = ((MR_Word) (MR_hl_field(MR_mktag(0), Env_5, (MR_Integer) 1)));
            Var_57 = ((MR_String) (MR_hl_field(MR_mktag(0), Env_5, (MR_Integer) 2)));
            Var_58 = ((MR_Word) (MR_hl_field(MR_mktag(0), Env_5, (MR_Integer) 3)));
            Var_59 = ((MR_Word) (MR_hl_field(MR_mktag(0), Env_5, (MR_Integer) 4)));
            Var_39 = ((MR_Word) (MR_hl_field(MR_mktag(0), Env_5, (MR_Integer) 5)));
            mercury__io__nl_3_p_0(Var_39);
            // direct tailcall eliminated
            next_value_of_tscc_proc_1_input_1_Env_4 = Env_5;
            tscc_proc_1_input_1_Env_4 = next_value_of_tscc_proc_1_input_1_Env_4;
            goto top_of_proc_1;
          }
          break;
        case (MR_Integer) 2:
          {
            MR_Word Varset_10 = ((MR_Word) (MR_hl_field(MR_mktag(2), ReadTerm_6, (MR_Integer) 0)));
            MR_Word Term_11 = ((MR_Word) (MR_hl_field(MR_mktag(2), ReadTerm_6, (MR_Integer) 1)));
            MR_Word Cmd_12;
            MR_Word Var_109;
            MR_Word Var_113;
            MR_Word Var_110;
            MR_Word Var_111;
            MR_String Var_112;
            MR_Word Var_114;

            mdb__interactive_query__parse_query_command_2_p_0(Term_11, &Cmd_12);
            Var_114 = ((MR_Word) (MR_hl_field(MR_mktag(0), Env_5, (MR_Integer) 0)));
            Var_113 = ((MR_Word) (MR_hl_field(MR_mktag(0), Env_5, (MR_Integer) 1)));
            Var_112 = ((MR_String) (MR_hl_field(MR_mktag(0), Env_5, (MR_Integer) 2)));
            Var_111 = ((MR_Word) (MR_hl_field(MR_mktag(0), Env_5, (MR_Integer) 3)));
            Var_110 = ((MR_Word) (MR_hl_field(MR_mktag(0), Env_5, (MR_Integer) 4)));
            Var_109 = ((MR_Word) (MR_hl_field(MR_mktag(0), Env_5, (MR_Integer) 5)));
            switch (MR_tag((MR_Word) Cmd_12)) {
              default: /*NOTREACHED*/ MR_assert(0);
              case (MR_Integer) 0:
                switch (MR_unmkbody(Cmd_12)) {
                  default: /*NOTREACHED*/ MR_assert(0);
                  case (MR_Integer) 0:
                    mercury__io__nl_3_p_0(Var_109);
                    break;
                  case (MR_Integer) 1:
                    {
                      MR_Word next_value_of_tscc_proc_1_input_1_Env_4;

                      mercury__io__flush_output_3_p_0(Var_109);
                      mdb__interactive_query__run_query_5_p_0(Env_5, Term_11, Varset_10);
                      // direct tailcall eliminated
                      next_value_of_tscc_proc_1_input_1_Env_4 = Env_5;
                      tscc_proc_1_input_1_Env_4 = next_value_of_tscc_proc_1_input_1_Env_4;
                      goto top_of_proc_1;
                    }
                    break;
                }
                break;
              case (MR_Integer) 1:
                {
                  MR_Word TypeCtorInfo_107_107 = (MR_Word) &mercury__builtin__builtin__type_ctor_info_string_0;
                  MR_String NewOptions_13 = ((MR_String) (MR_hl_field(MR_mktag(1), Cmd_12, (MR_Integer) 0)));
                  MR_Word Env1_14;
                  MR_Word Var_30;
                  MR_Word Var_32;
                  MR_Word Var_70;
                  MR_Word Var_71;
                  MR_String Var_72;
                  MR_Word Var_73;
                  MR_Word Var_74;
                  MR_Word Var_75;
                  MR_Word Var_76;
                  MR_String Var_77;
                  MR_Word Var_78;
                  MR_Word Var_79;
                  MR_Word Var_80;
                  MR_Word Var_81;
                  MR_Word Var_83;
                  MR_Word Var_84;
                  MR_Word Var_85;
                  MR_String Var_82;
                  MR_Word next_value_of_tscc_proc_1_input_1_Env_4;

                  mercury__io__print_4_p_0(TypeCtorInfo_107_107, Var_109, ((MR_Box) ((MR_String) "Compilation options: ")));
                  Var_70 = ((MR_Word) (MR_hl_field(MR_mktag(0), Env_5, (MR_Integer) 0)));
                  Var_71 = ((MR_Word) (MR_hl_field(MR_mktag(0), Env_5, (MR_Integer) 1)));
                  Var_72 = ((MR_String) (MR_hl_field(MR_mktag(0), Env_5, (MR_Integer) 2)));
                  Var_73 = ((MR_Word) (MR_hl_field(MR_mktag(0), Env_5, (MR_Integer) 3)));
                  Var_74 = ((MR_Word) (MR_hl_field(MR_mktag(0), Env_5, (MR_Integer) 4)));
                  Var_30 = ((MR_Word) (MR_hl_field(MR_mktag(0), Env_5, (MR_Integer) 5)));
                  mercury__io__print_4_p_0(TypeCtorInfo_107_107, Var_30, ((MR_Box) (NewOptions_13)));
                  Var_75 = ((MR_Word) (MR_hl_field(MR_mktag(0), Env_5, (MR_Integer) 0)));
                  Var_76 = ((MR_Word) (MR_hl_field(MR_mktag(0), Env_5, (MR_Integer) 1)));
                  Var_77 = ((MR_String) (MR_hl_field(MR_mktag(0), Env_5, (MR_Integer) 2)));
                  Var_78 = ((MR_Word) (MR_hl_field(MR_mktag(0), Env_5, (MR_Integer) 3)));
                  Var_79 = ((MR_Word) (MR_hl_field(MR_mktag(0), Env_5, (MR_Integer) 4)));
                  Var_32 = ((MR_Word) (MR_hl_field(MR_mktag(0), Env_5, (MR_Integer) 5)));
                  mercury__io__nl_3_p_0(Var_32);
                  Var_80 = ((MR_Word) (MR_hl_field(MR_mktag(0), Env_5, (MR_Integer) 0)));
                  Var_81 = ((MR_Word) (MR_hl_field(MR_mktag(0), Env_5, (MR_Integer) 1)));
                  Var_82 = ((MR_String) (MR_hl_field(MR_mktag(0), Env_5, (MR_Integer) 2)));
                  Var_83 = ((MR_Word) (MR_hl_field(MR_mktag(0), Env_5, (MR_Integer) 3)));
                  Var_84 = ((MR_Word) (MR_hl_field(MR_mktag(0), Env_5, (MR_Integer) 4)));
                  Var_85 = ((MR_Word) (MR_hl_field(MR_mktag(0), Env_5, (MR_Integer) 5)));
                  {
                    Env1_14 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 6 * sizeof(MR_Word)), NULL, NULL);
                    MR_hl_field(MR_mktag(0), Env1_14, 0) = ((MR_Box) (Var_80));
                    MR_hl_field(MR_mktag(0), Env1_14, 1) = ((MR_Box) (Var_81));
                    MR_hl_field(MR_mktag(0), Env1_14, 2) = ((MR_Box) (NewOptions_13));
                    MR_hl_field(MR_mktag(0), Env1_14, 3) = ((MR_Box) (Var_83));
                    MR_hl_field(MR_mktag(0), Env1_14, 4) = ((MR_Box) (Var_84));
                    MR_hl_field(MR_mktag(0), Env1_14, 5) = ((MR_Box) (Var_85));
                  }
                  // direct tailcall eliminated
                  next_value_of_tscc_proc_1_input_1_Env_4 = Env1_14;
                  tscc_proc_1_input_1_Env_4 = next_value_of_tscc_proc_1_input_1_Env_4;
                  goto top_of_proc_1;
                }
                break;
              case (MR_Integer) 2:
                {
                  MR_Word AddedImports_15 = ((MR_Word) (MR_hl_field(MR_mktag(2), Cmd_12, (MR_Integer) 0)));
                  MR_Word Imports_16;
                  MR_Word Env1_44;
                  MR_Word Var_96;
                  MR_Word Var_91;
                  MR_String Var_93;
                  MR_Word Var_94;
                  MR_Word Var_95;
                  MR_Word Var_92;
                  MR_Word next_value_of_tscc_proc_1_input_1_Env_4;

                  Imports_16 = mercury__list__f_43_43_2_f_0((MR_Word) &mercury__builtin__builtin__type_ctor_info_string_0, Var_113, AddedImports_15);
                  Var_91 = ((MR_Word) (MR_hl_field(MR_mktag(0), Env_5, (MR_Integer) 0)));
                  Var_92 = ((MR_Word) (MR_hl_field(MR_mktag(0), Env_5, (MR_Integer) 1)));
                  Var_93 = ((MR_String) (MR_hl_field(MR_mktag(0), Env_5, (MR_Integer) 2)));
                  Var_94 = ((MR_Word) (MR_hl_field(MR_mktag(0), Env_5, (MR_Integer) 3)));
                  Var_95 = ((MR_Word) (MR_hl_field(MR_mktag(0), Env_5, (MR_Integer) 4)));
                  Var_96 = ((MR_Word) (MR_hl_field(MR_mktag(0), Env_5, (MR_Integer) 5)));
                  {
                    Env1_44 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 6 * sizeof(MR_Word)), NULL, NULL);
                    MR_hl_field(MR_mktag(0), Env1_44, 0) = ((MR_Box) (Var_91));
                    MR_hl_field(MR_mktag(0), Env1_44, 1) = ((MR_Box) (Imports_16));
                    MR_hl_field(MR_mktag(0), Env1_44, 2) = ((MR_Box) (Var_93));
                    MR_hl_field(MR_mktag(0), Env1_44, 3) = ((MR_Box) (Var_94));
                    MR_hl_field(MR_mktag(0), Env1_44, 4) = ((MR_Box) (Var_95));
                    MR_hl_field(MR_mktag(0), Env1_44, 5) = ((MR_Box) (Var_96));
                  }
                  mdb__interactive_query__write_import_list_4_p_0(Var_96, Imports_16);
                  // direct tailcall eliminated
                  next_value_of_tscc_proc_1_input_1_Env_4 = Env1_44;
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
}

static MR_bool MR_CALL 
mdb__interactive_query__run_query_5_p_0_3(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1)
{
  {
    MR_bool succeeded;
    MR_Box closure = closure_arg;

    succeeded = mdb__interactive_query__IntroducedFrom__pred__make_program__382__1_1_p_0(((MR_String) wrapper_arg_1));
    return succeeded;
  }
}

static MR_bool MR_CALL 
mdb__interactive_query__run_query_5_p_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1)
{
  {
    MR_bool succeeded;
    MR_Box closure = closure_arg;

    succeeded = mdb__interactive_query__IntroducedFrom__pred__make_program__377__1_2_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3))), ((MR_String) wrapper_arg_1));
    return succeeded;
  }
}

static MR_bool MR_CALL 
mdb__interactive_query__run_query_5_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2)
{
  {
    MR_bool succeeded;
    MR_Box closure = closure_arg;
    MR_String conv0_HeadVar__3_50;

    succeeded = mdb__interactive_query__IntroducedFrom__pred__make_program__376__1_3_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3))), ((MR_Word) wrapper_arg_1), &conv0_HeadVar__3_50);
    if (succeeded)
    {
      *wrapper_arg_2 = ((MR_Box) (conv0_HeadVar__3_50));
      succeeded = MR_TRUE;
    }
    return succeeded;
  }
}

static void MR_CALL 
mdb__interactive_query__run_query_5_p_0(
  MR_Word Env_6,
  MR_Word Goal_7,
  MR_Word Varset_8)
{
  {
    MR_bool succeeded;
    MR_Word MaybeMercuryOptions_11;

    mercury__io__get_environment_var_4_p_0((MR_String) "MERCURY_OPTIONS", &MaybeMercuryOptions_11);
    if ((MaybeMercuryOptions_11 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
    {
      mercury__io__write_string_3_p_0((MR_String) "Unable to unset MERCURY_OPTIONS environment variable");
    }
    else
    {
      MR_Word TypeInfo_48_87;
      MR_Word TypeCtorInfo_52_91;
      MR_String MercuryOptions_12 = ((MR_String) (MR_hl_field(MR_mktag(1), MaybeMercuryOptions_11, (MR_Integer) 0)));
      MR_Word Program_13;
      MR_Word Succeeded_14;
      MR_String Var_27;
      MR_Word QueryType_48;
      MR_Word Vars0_49;
      MR_Word Vars1_50;
      MR_Word Vars_51;
      MR_Word Inputs_52;
      MR_Word Outputs0_53;
      MR_Word Outputs_55;
      MR_Word Var_56;
      MR_Word Var_57;
      MR_Word Var_58;
      MR_Word Var_63;
      MR_Word Var_78;
      MR_Word Var_66;
      MR_String Var_67;
      MR_Word Var_68;
      MR_Word Var_69;
      MR_Word Var_70;
      MR_Word Var_71;
      MR_Word Var_72;
      MR_String Var_73;
      MR_Word Var_74;
      MR_Word Var_75;
      MR_Word Var_76;
      MR_String Var_77;
      MR_Word Var_79;
      MR_Word Var_80;
      MR_Word Var_34;
      MR_Word Var_35;
      MR_Word Var_36;
      MR_Word Var_37;
      MR_Word Var_38;

      mercury__io__set_environment_var_4_p_0((MR_String) "MERCURY_OPTIONS", (MR_String) "");
      QueryType_48 = ((MR_Word) (MR_hl_field(MR_mktag(0), Env_6, (MR_Integer) 0)));
      Var_66 = ((MR_Word) (MR_hl_field(MR_mktag(0), Env_6, (MR_Integer) 1)));
      Var_67 = ((MR_String) (MR_hl_field(MR_mktag(0), Env_6, (MR_Integer) 2)));
      Var_68 = ((MR_Word) (MR_hl_field(MR_mktag(0), Env_6, (MR_Integer) 3)));
      Var_69 = ((MR_Word) (MR_hl_field(MR_mktag(0), Env_6, (MR_Integer) 4)));
      Var_70 = ((MR_Word) (MR_hl_field(MR_mktag(0), Env_6, (MR_Integer) 5)));
      mercury__term__vars_2_p_0((MR_Word) &mercury__term__term__type_ctor_info_generic_0, Goal_7, &Vars0_49);
      TypeInfo_48_87 = (MR_Word) &mdb__interactive_query_scalar_common_1[0];
      mercury__list__remove_dups_2_p_0(TypeInfo_48_87, Vars0_49, &Vars1_50);
      {
        Var_56 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(MR_mktag(0), Var_56, 0) = ((MR_Box) (&mdb__interactive_query_scalar_common_5[2]));
        MR_hl_field(MR_mktag(0), Var_56, 1) = ((MR_Box) (mdb__interactive_query__run_query_5_p_0_1));
        MR_hl_field(MR_mktag(0), Var_56, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
        MR_hl_field(MR_mktag(0), Var_56, 3) = ((MR_Box) (Varset_8));
      }
      TypeCtorInfo_52_91 = (MR_Word) &mercury__builtin__builtin__type_ctor_info_string_0;
      mercury__list__filter_map_3_p_0(TypeInfo_48_87, TypeCtorInfo_52_91, Var_56, Vars1_50, &Vars_51);
      Var_71 = ((MR_Word) (MR_hl_field(MR_mktag(0), Env_6, (MR_Integer) 0)));
      Var_72 = ((MR_Word) (MR_hl_field(MR_mktag(0), Env_6, (MR_Integer) 1)));
      Var_73 = ((MR_String) (MR_hl_field(MR_mktag(0), Env_6, (MR_Integer) 2)));
      Var_58 = ((MR_Word) (MR_hl_field(MR_mktag(0), Env_6, (MR_Integer) 3)));
      Var_74 = ((MR_Word) (MR_hl_field(MR_mktag(0), Env_6, (MR_Integer) 4)));
      Var_75 = ((MR_Word) (MR_hl_field(MR_mktag(0), Env_6, (MR_Integer) 5)));
      {
        Var_57 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(MR_mktag(0), Var_57, 0) = ((MR_Box) (&mdb__interactive_query_scalar_common_3[3]));
        MR_hl_field(MR_mktag(0), Var_57, 1) = ((MR_Box) (mdb__interactive_query__run_query_5_p_0_2));
        MR_hl_field(MR_mktag(0), Var_57, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
        MR_hl_field(MR_mktag(0), Var_57, 3) = ((MR_Box) (Var_58));
      }
      mercury__list__filter_4_p_0(TypeCtorInfo_52_91, Var_57, Vars_51, &Inputs_52, &Outputs0_53);
      switch (QueryType_48) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 1:
        case (MR_Integer) 0:
          {
            mercury__list__filter_3_p_0(TypeCtorInfo_52_91, (MR_Word) &mdb__interactive_query_scalar_common_2[8], Outputs0_53, &Outputs_55);
          }
          break;
        case (MR_Integer) 2:
          Outputs_55 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
          break;
      }
      Var_76 = ((MR_Word) (MR_hl_field(MR_mktag(0), Env_6, (MR_Integer) 0)));
      Var_63 = ((MR_Word) (MR_hl_field(MR_mktag(0), Env_6, (MR_Integer) 1)));
      Var_77 = ((MR_String) (MR_hl_field(MR_mktag(0), Env_6, (MR_Integer) 2)));
      Var_78 = ((MR_Word) (MR_hl_field(MR_mktag(0), Env_6, (MR_Integer) 3)));
      Var_79 = ((MR_Word) (MR_hl_field(MR_mktag(0), Env_6, (MR_Integer) 4)));
      Var_80 = ((MR_Word) (MR_hl_field(MR_mktag(0), Env_6, (MR_Integer) 5)));
      {
        Program_13 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 7 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(MR_mktag(0), Program_13, 0) = ((MR_Box) (QueryType_48));
        MR_hl_field(MR_mktag(0), Program_13, 1) = ((MR_Box) (Var_63));
        MR_hl_field(MR_mktag(0), Program_13, 2) = ((MR_Box) (Var_78));
        MR_hl_field(MR_mktag(0), Program_13, 3) = ((MR_Box) (Inputs_52));
        MR_hl_field(MR_mktag(0), Program_13, 4) = ((MR_Box) (Outputs_55));
        MR_hl_field(MR_mktag(0), Program_13, 5) = ((MR_Box) (Goal_7));
        MR_hl_field(MR_mktag(0), Program_13, 6) = ((MR_Box) (Varset_8));
      }
      mdb__interactive_query__write_prog_to_file_4_p_0(Program_13, (MR_String) "mdb_query.m");
      Var_34 = ((MR_Word) (MR_hl_field(MR_mktag(0), Env_6, (MR_Integer) 0)));
      Var_35 = ((MR_Word) (MR_hl_field(MR_mktag(0), Env_6, (MR_Integer) 1)));
      Var_27 = ((MR_String) (MR_hl_field(MR_mktag(0), Env_6, (MR_Integer) 2)));
      Var_36 = ((MR_Word) (MR_hl_field(MR_mktag(0), Env_6, (MR_Integer) 3)));
      Var_37 = ((MR_Word) (MR_hl_field(MR_mktag(0), Env_6, (MR_Integer) 4)));
      Var_38 = ((MR_Word) (MR_hl_field(MR_mktag(0), Env_6, (MR_Integer) 5)));
      mdb__interactive_query__compile_file_4_p_0(Var_27, &Succeeded_14);
      switch (Succeeded_14) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 0:
          {
          }
          break;
        case (MR_Integer) 1:
          mdb__interactive_query__dynamically_load_and_run_3_p_0(Program_13);
          break;
      }
      mdb__interactive_query__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_99_108_101_97_110_117_112_95_113_117_101_114_121_95_95_91_49_93_95_48_3_p_0();
      mercury__io__set_environment_var_4_p_0((MR_String) "MERCURY_OPTIONS", MercuryOptions_12);
    }
  }
}

static void MR_CALL 
mdb__interactive_query__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_99_108_101_97_110_117_112_95_113_117_101_114_121_95_95_91_49_93_95_48_3_p_0(void)
{
  {
    MR_Word Var_50;
    MR_Word Var_60;
    MR_Word Var_70;
    MR_Word Var_80;
    MR_Word Var_90;

    mercury__io__remove_file_4_p_0((MR_String) "mdb_query.m", &Var_50);
    mercury__io__remove_file_4_p_0((MR_String) "mdb_query.mh", &Var_60);
    mercury__io__remove_file_4_p_0((MR_String) "mdb_query.d", &Var_70);
    mercury__io__remove_file_4_p_0((MR_String) "Mercury/ds/mdb_query.d", &Var_80);
    mercury__io__remove_file_4_p_0((MR_String) "mdb_query.c", &Var_90);
    mdb__interactive_query__cleanup_file_4_p_0((MR_String) "Mercury/cs/", (MR_String) ".c");
    mdb__interactive_query__cleanup_file_4_p_0((MR_String) "", (MR_String) ".c_date");
    mdb__interactive_query__cleanup_file_4_p_0((MR_String) "Mercury/c_dates/", (MR_String) ".c_date");
    mdb__interactive_query__cleanup_file_4_p_0((MR_String) "", (MR_String) ".o");
    mdb__interactive_query__cleanup_file_4_p_0((MR_String) "Mercury/os/", (MR_String) ".o");
    mdb__interactive_query__cleanup_file_4_p_0((MR_String) "", (MR_String) ".pic_o");
    mdb__interactive_query__cleanup_file_4_p_0((MR_String) "Mercury/os/", (MR_String) ".pic_o");
    mdb__interactive_query__cleanup_file_4_p_0((MR_String) "lib", (MR_String) ".so");
  }
}

static void MR_CALL 
mdb__interactive_query__cleanup_file_4_p_0(
  MR_String Prefix_5,
  MR_String Suffix_6)
{
  {
    MR_String Var_11;
    MR_String Var_13;
    MR_Word Var_8;

    Var_13 = mercury__string__f_43_43_2_f_0((MR_String) "mdb_query", Suffix_6);
    Var_11 = mercury__string__f_43_43_2_f_0(Prefix_5, Var_13);
    mercury__io__remove_file_4_p_0(Var_11, &Var_8);
  }
}

static void MR_CALL 
mdb__interactive_query__dynamically_load_and_run_3_p_0(
  MR_Word Program_4)
{
  {
    MR_bool succeeded;
    MR_String Filename_6;
    MR_Word MaybeHandle_7;
    MR_String Var_18;
    MR_String Var_20;

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
succeeded  = SUCCESS_INDICATOR;
}
    if (succeeded)
      Var_20 = (MR_String) ".dylib";
    else
      Var_20 = (MR_String) ".so";
    Var_18 = mercury__string__f_43_43_2_f_0((MR_String) "mdb_query", Var_20);
    Filename_6 = mercury__string__f_43_43_2_f_0((MR_String) "./lib", Var_18);
    mdb__dl__open_6_p_0(Filename_6, (MR_Integer) 0, (MR_Integer) 0, &MaybeHandle_7);
    if (((MR_tag((MR_Word) MaybeHandle_7)) == (MR_mktag((MR_Integer) 1))))
    {
      MR_String Msg_8 = ((MR_String) (MR_hl_field(MR_mktag(1), MaybeHandle_7, (MR_Integer) 0)));

      mercury__io__write_string_3_p_0((MR_String) "dlopen failed: ");
      mercury__io__write_string_3_p_0(Msg_8);
      mercury__io__write_string_3_p_0((MR_String) "\n");
    }
    else
    {
      MR_Word Handle_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), MaybeHandle_7, (MR_Integer) 0)));
      MR_Word QueryType_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), Program_4, (MR_Integer) 0)));
      MR_Word Bindings_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), Program_4, (MR_Integer) 2)));
      MR_Word Outputs_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), Program_4, (MR_Integer) 4)));
      MR_Word Result_13;
      MR_Word Var_38 = ((MR_Word) (MR_hl_field(MR_mktag(0), Program_4, (MR_Integer) 1)));
      MR_Word Var_40 = ((MR_Word) (MR_hl_field(MR_mktag(0), Program_4, (MR_Integer) 3)));
      MR_Word Var_42 = ((MR_Word) (MR_hl_field(MR_mktag(0), Program_4, (MR_Integer) 5)));
      MR_Word Var_43 = ((MR_Word) (MR_hl_field(MR_mktag(0), Program_4, (MR_Integer) 6)));

      switch (QueryType_10) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 1:
          mdb__interactive_query__link_and_run_cc_5_p_0(Bindings_11, Outputs_12, Handle_9);
          break;
        case (MR_Integer) 2:
          mdb__interactive_query__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_108_105_110_107_95_97_110_100_95_114_117_110_95_105_111_95_95_91_50_93_95_48_5_p_0(Bindings_11, Handle_9);
          break;
        case (MR_Integer) 0:
          mdb__interactive_query__link_and_run_normal_5_p_0(Bindings_11, Outputs_12, Handle_9);
          break;
      }
      mdb__dl__close_4_p_0(Handle_9, &Result_13);
      if (!((Result_13 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))))))
      {
        MR_String CloseMsg_14 = ((MR_String) (MR_hl_field(MR_mktag(1), Result_13, (MR_Integer) 0)));

        mercury__io__write_string_3_p_0((MR_String) "dlclose failed: ");
        mercury__io__write_string_3_p_0(CloseMsg_14);
        mercury__io__write_string_3_p_0((MR_String) "\n");
      }
    }
  }
}

static void MR_CALL 
mdb__interactive_query__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_108_105_110_107_95_97_110_100_95_114_117_110_95_105_111_95_95_91_50_93_95_48_5_p_0_1(
  MR_Box closure_arg,
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3)
{
  {
    MR_Box closure = closure_arg;
    MR_Word conv0_Solution_8;

    mdb__interactive_query__call_run_io_5_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3))), ((MR_Word) (MR_hl_field(MR_mktag(0), closure, (MR_Integer) 4))), &conv0_Solution_8);
    *wrapper_arg_1 = ((MR_Box) (conv0_Solution_8));
  }
}

static void MR_CALL 
mdb__interactive_query__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_108_105_110_107_95_97_110_100_95_114_117_110_95_105_111_95_95_91_50_93_95_48_5_p_0(
  MR_Word Bindings_6,
  MR_Word Handle_8)
{
  {
    MR_Word MaybeQuery_10;

    mdb__dl__mercury_sym_5_p_0((MR_Word) &mdb__interactive_query_scalar_common_4[0], Handle_8, (MR_Word) &mdb__interactive_query_scalar_common_3[2], &MaybeQuery_10);
    if (((MR_tag((MR_Word) MaybeQuery_10)) == (MR_mktag((MR_Integer) 1))))
    {
      MR_String Msg_11 = ((MR_String) (MR_hl_field(MR_mktag(1), MaybeQuery_10, (MR_Integer) 0)));
      MR_Word Var_24;
      MR_Word Var_27;

      {
        Var_27 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), Var_27, 0) = ((MR_Box) (Msg_11));
        MR_hl_field(MR_mktag(1), Var_27, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &mdb__interactive_query_scalar_common_1[23])));
      }
      {
        Var_24 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), Var_24, 0) = ((MR_Box) ((MR_String) "dlsym failed: "));
        MR_hl_field(MR_mktag(1), Var_24, 1) = ((MR_Box) (Var_27));
      }
      mercury__io__write_strings_3_p_0(Var_24);
    }
    else
    {
      MR_Word QueryPred_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), MaybeQuery_10, (MR_Integer) 0)));
      MR_Word Result_13;
      MR_Word Var_20;

      {
        Var_20 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(MR_mktag(0), Var_20, 0) = ((MR_Box) (&mdb__interactive_query_scalar_common_7[1]));
        MR_hl_field(MR_mktag(0), Var_20, 1) = ((MR_Box) (mdb__interactive_query__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_108_105_110_107_95_97_110_100_95_114_117_110_95_105_111_95_95_91_50_93_95_48_5_p_0_1));
        MR_hl_field(MR_mktag(0), Var_20, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
        MR_hl_field(MR_mktag(0), Var_20, 3) = ((MR_Box) (QueryPred_12));
        MR_hl_field(MR_mktag(0), Var_20, 4) = ((MR_Box) (Bindings_6));
      }
      mercury__exception__try_io_4_p_1((MR_Word) &mdb__interactive_query__mdb__interactive_query__type_ctor_info_solution_0, Var_20, &Result_13);
      if (((MR_tag((MR_Word) Result_13)) == (MR_mktag((MR_Integer) 2))))
      {
        MR_Word TypeInfo_36_36;
        MR_Word Excp_15 = ((MR_Word) (MR_hl_field(MR_mktag(2), Result_13, (MR_Integer) 0)));
        MR_Box Var_22;

        Var_22 = mercury__univ__univ_value_1_f_0(&TypeInfo_36_36, Excp_15);
        mercury__io__write_string_3_p_0((MR_String) "*** caught exception: ");
        mercury__io__write_cc_3_p_0(TypeInfo_36_36, Var_22);
        mercury__io__nl_2_p_0();
      }
      else
      {
      }
    }
  }
}

static MR_bool MR_CALL 
mdb__interactive_query__link_and_run_cc_5_p_0_1(
  MR_Box closure_arg,
  MR_Box * wrapper_arg_1)
{
  {
    MR_bool succeeded;
    MR_Box closure = closure_arg;
    MR_Word conv0_Solution_6;

    succeeded = mdb__interactive_query__call_run_cc_3_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3))), ((MR_Word) (MR_hl_field(MR_mktag(0), closure, (MR_Integer) 4))), &conv0_Solution_6);
    if (succeeded)
    {
      *wrapper_arg_1 = ((MR_Box) (conv0_Solution_6));
      succeeded = MR_TRUE;
    }
    return succeeded;
  }
}

static void MR_CALL 
mdb__interactive_query__link_and_run_cc_5_p_0(
  MR_Word Bindings_6,
  MR_Word Outputs_7,
  MR_Word Handle_8)
{
  {
    MR_bool succeeded;
    MR_Word MaybeQuery_10;

    mdb__dl__mercury_sym_5_p_0((MR_Word) &mdb__interactive_query_scalar_common_3[0], Handle_8, (MR_Word) &mdb__interactive_query_scalar_common_3[1], &MaybeQuery_10);
    if (((MR_tag((MR_Word) MaybeQuery_10)) == (MR_mktag((MR_Integer) 1))))
    {
      MR_String Msg_11 = ((MR_String) (MR_hl_field(MR_mktag(1), MaybeQuery_10, (MR_Integer) 0)));
      MR_Word Var_27;
      MR_Word Var_30;

      {
        Var_30 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), Var_30, 0) = ((MR_Box) (Msg_11));
        MR_hl_field(MR_mktag(1), Var_30, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &mdb__interactive_query_scalar_common_1[23])));
      }
      {
        Var_27 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), Var_27, 0) = ((MR_Box) ((MR_String) "dlsym failed: "));
        MR_hl_field(MR_mktag(1), Var_27, 1) = ((MR_Box) (Var_30));
      }
      mercury__io__write_strings_3_p_0(Var_27);
    }
    else
    {
      MR_Word QueryPred_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), MaybeQuery_10, (MR_Integer) 0)));
      MR_Word Result_13;
      MR_Word Var_20;

      {
        Var_20 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(MR_mktag(0), Var_20, 0) = ((MR_Box) (&mdb__interactive_query_scalar_common_5[1]));
        MR_hl_field(MR_mktag(0), Var_20, 1) = ((MR_Box) (mdb__interactive_query__link_and_run_cc_5_p_0_1));
        MR_hl_field(MR_mktag(0), Var_20, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
        MR_hl_field(MR_mktag(0), Var_20, 3) = ((MR_Box) (QueryPred_12));
        MR_hl_field(MR_mktag(0), Var_20, 4) = ((MR_Box) (Bindings_6));
      }
      mercury__exception__try_2_p_3((MR_Word) &mdb__interactive_query__mdb__interactive_query__type_ctor_info_solution_0, Var_20, &Result_13);
      switch (MR_tag((MR_Word) Result_13)) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 0:
          {
            mercury__io__write_string_3_p_0((MR_String) "No solution.\n");
          }
          break;
        case (MR_Integer) 1:
          {
            MR_Word Solution_14 = ((MR_Word) (MR_hl_field(MR_mktag(1), Result_13, (MR_Integer) 0)));

            mdb__interactive_query__write_solution_5_p_0(Outputs_7, (MR_String) "true.", Solution_14);
          }
          break;
        case (MR_Integer) 2:
          {
            MR_Word TypeInfo_37_37;
            MR_Word Excp_15 = ((MR_Word) (MR_hl_field(MR_mktag(2), Result_13, (MR_Integer) 0)));
            MR_Box Var_21;

            Var_21 = mercury__univ__univ_value_1_f_0(&TypeInfo_37_37, Excp_15);
            mercury__io__write_string_3_p_0((MR_String) "*** caught exception: ");
            mercury__io__write_cc_3_p_0(TypeInfo_37_37, Var_21);
            mercury__io__nl_2_p_0();
          }
          break;
      }
    }
  }
}

static void MR_CALL 
mdb__interactive_query__write_solution_5_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3)
{
  {
    MR_Box closure = closure_arg;

    mdb__interactive_query__write_binding_4_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3))), ((MR_String) wrapper_arg_1));
  }
}

static void MR_CALL 
mdb__interactive_query__write_solution_5_p_0(
  MR_Word Outputs_6,
  MR_String End_7,
  MR_Word Solution_8)
{
  if ((Solution_8 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
  {
    mercury__io__write_string_3_p_0((MR_String) "Error loading some variables.\n");
  }
  else
  {
    MR_Word Bindings_10 = ((MR_Word) (MR_hl_field(MR_mktag(1), Solution_8, (MR_Integer) 0)));
    MR_Word Var_13;
    MR_Box conv0_STATE_VARIABLE_IO_14_14;

    {
      Var_13 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), Var_13, 0) = ((MR_Box) (&mdb__interactive_query_scalar_common_4[1]));
      MR_hl_field(MR_mktag(0), Var_13, 1) = ((MR_Box) (mdb__interactive_query__write_solution_5_p_0_1));
      MR_hl_field(MR_mktag(0), Var_13, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
      MR_hl_field(MR_mktag(0), Var_13, 3) = ((MR_Box) (Bindings_10));
    }
    mercury__list__foldl_4_p_10((MR_Word) &mercury__builtin__builtin__type_ctor_info_string_0, (MR_Word) &mercury__io__io__type_ctor_info_state_0, Var_13, Outputs_6, ((MR_Box) ((MR_Integer) 0)), &conv0_STATE_VARIABLE_IO_14_14);
    mercury__io__write_string_3_p_0(End_7);
    mercury__io__write_string_3_p_0((MR_String) "\n");
  }
}

static void MR_CALL 
mdb__interactive_query__link_and_run_normal_5_p_0_3(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3)
{
  {
    MR_Box closure = closure_arg;

    mdb__interactive_query__write_solution_5_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3))), ((MR_String) (MR_hl_field(MR_mktag(0), closure, (MR_Integer) 4))), ((MR_Word) wrapper_arg_1));
  }
}

static void MR_CALL 
mdb__interactive_query__link_and_run_normal_5_p_0_1(
  void * env_ptr_arg)
{
  {
    struct mdb__interactive_query__link_and_run_normal_5_p_0_2_env_0_s * env_ptr = (struct mdb__interactive_query__link_and_run_normal_5_p_0_2_env_0_s *) env_ptr_arg;

    *((env_ptr)->mdb__interactive_query__link_and_run_normal_5_p_0_2_env_0__wrapper_arg_1) = ((MR_Box) ((env_ptr)->mdb__interactive_query__link_and_run_normal_5_p_0_2_env_0__conv0_Solution_6));
    ((env_ptr)->mdb__interactive_query__link_and_run_normal_5_p_0_2_env_0__cont)((env_ptr)->mdb__interactive_query__link_and_run_normal_5_p_0_2_env_0__cont_env_ptr);
  }
}

static void MR_CALL 
mdb__interactive_query__link_and_run_normal_5_p_0_2(
  MR_Box closure_arg,
  MR_Box * wrapper_arg_1,
  MR_Cont cont,
  void * cont_env_ptr)
{
  {
    struct mdb__interactive_query__link_and_run_normal_5_p_0_2_env_0_s env;

    (env).mdb__interactive_query__link_and_run_normal_5_p_0_2_env_0__wrapper_arg_1 = wrapper_arg_1;
    (env).mdb__interactive_query__link_and_run_normal_5_p_0_2_env_0__cont = cont;
    (env).mdb__interactive_query__link_and_run_normal_5_p_0_2_env_0__cont_env_ptr = cont_env_ptr;
    {
      MR_Box closure = closure_arg;

      mdb__interactive_query__call_run_normal_3_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3))), ((MR_Word) (MR_hl_field(MR_mktag(0), closure, (MR_Integer) 4))), &(env).mdb__interactive_query__link_and_run_normal_5_p_0_2_env_0__conv0_Solution_6, mdb__interactive_query__link_and_run_normal_5_p_0_1, &env);
    }
  }
}

static void MR_CALL 
mdb__interactive_query__link_and_run_normal_5_p_0(
  MR_Word Bindings_6,
  MR_Word Outputs_7,
  MR_Word Handle_8)
{
  {
    MR_Word MaybeQuery_10;

    mdb__dl__mercury_sym_5_p_0((MR_Word) &mdb__interactive_query_scalar_common_3[0], Handle_8, (MR_Word) &mdb__interactive_query_scalar_common_3[1], &MaybeQuery_10);
    if (((MR_tag((MR_Word) MaybeQuery_10)) == (MR_mktag((MR_Integer) 1))))
    {
      MR_String Msg_11 = ((MR_String) (MR_hl_field(MR_mktag(1), MaybeQuery_10, (MR_Integer) 0)));
      MR_Word Var_30;
      MR_Word Var_33;

      {
        Var_33 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), Var_33, 0) = ((MR_Box) (Msg_11));
        MR_hl_field(MR_mktag(1), Var_33, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &mdb__interactive_query_scalar_common_1[23])));
      }
      {
        Var_30 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), Var_30, 0) = ((MR_Box) ((MR_String) "dlsym failed: "));
        MR_hl_field(MR_mktag(1), Var_30, 1) = ((MR_Box) (Var_33));
      }
      mercury__io__write_strings_3_p_0(Var_30);
    }
    else
    {
      MR_Word TypeCtorInfo_39_39;
      MR_Word QueryPred_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), MaybeQuery_10, (MR_Integer) 0)));
      MR_Word MaybeExcp_13;
      MR_Word Solutions_14;
      MR_Word Var_20;
      MR_Word Var_21;
      MR_Box conv1_STATE_VARIABLE_IO_22_22;

      {
        Var_20 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(MR_mktag(0), Var_20, 0) = ((MR_Box) (&mdb__interactive_query_scalar_common_5[1]));
        MR_hl_field(MR_mktag(0), Var_20, 1) = ((MR_Box) (mdb__interactive_query__link_and_run_normal_5_p_0_2));
        MR_hl_field(MR_mktag(0), Var_20, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
        MR_hl_field(MR_mktag(0), Var_20, 3) = ((MR_Box) (QueryPred_12));
        MR_hl_field(MR_mktag(0), Var_20, 4) = ((MR_Box) (Bindings_6));
      }
      TypeCtorInfo_39_39 = (MR_Word) &mdb__interactive_query__mdb__interactive_query__type_ctor_info_solution_0;
      mercury__exception__try_all_3_p_3(TypeCtorInfo_39_39, Var_20, &MaybeExcp_13, &Solutions_14);
      {
        Var_21 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(MR_mktag(0), Var_21, 0) = ((MR_Box) (&mdb__interactive_query_scalar_common_7[0]));
        MR_hl_field(MR_mktag(0), Var_21, 1) = ((MR_Box) (mdb__interactive_query__link_and_run_normal_5_p_0_3));
        MR_hl_field(MR_mktag(0), Var_21, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
        MR_hl_field(MR_mktag(0), Var_21, 3) = ((MR_Box) (Outputs_7));
        MR_hl_field(MR_mktag(0), Var_21, 4) = ((MR_Box) ((MR_String) "true ;"));
      }
      mercury__list__foldl_4_p_10(TypeCtorInfo_39_39, (MR_Word) &mercury__io__io__type_ctor_info_state_0, Var_21, Solutions_14, ((MR_Box) ((MR_Integer) 0)), &conv1_STATE_VARIABLE_IO_22_22);
      if ((MaybeExcp_13 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
      {
        mercury__io__write_string_3_p_0((MR_String) "fail.\n");
      }
      else
      {
        MR_Word TypeInfo_44_44;
        MR_Word Excp_15 = ((MR_Word) (MR_hl_field(MR_mktag(1), MaybeExcp_13, (MR_Integer) 0)));
        MR_Box Var_26;

        Var_26 = mercury__univ__univ_value_1_f_0(&TypeInfo_44_44, Excp_15);
        mercury__io__write_string_3_p_0((MR_String) "*** caught exception: ");
        mercury__io__write_cc_3_p_0(TypeInfo_44_44, Var_26);
        mercury__io__nl_2_p_0();
      }
      mercury__io__write_string_3_p_0((MR_String) "No (more) solutions.\n");
    }
  }
}

static void MR_CALL 
mdb__interactive_query__compile_file_4_p_0(
  MR_String Options_5,
  MR_Word * Succeeded_6)
{
  {
    MR_bool succeeded;
    MR_String Command_8;
    MR_Word Var_11;
    MR_Word Var_13;
    MR_Word Var_15;
    MR_Word Var_17;
    MR_Word Var_19;
    MR_Word Var_20;
    MR_Word Var_22;
    MR_String Var_23;
    MR_Word Result_37;

{
#define MR_PROC_LABEL mdb__interactive_query__compile_file_4_p_0

	MR_String GradeOpt;

		{

    MR_make_aligned_string(GradeOpt, (MR_String) MR_GRADE_OPT);


		;}
#undef MR_PROC_LABEL
	 Var_23  = GradeOpt;
}
    {
      Var_22 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_22, 0) = ((MR_Box) (Var_23));
      MR_hl_field(MR_mktag(1), Var_22, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &mdb__interactive_query_scalar_common_1[25])));
    }
    {
      Var_20 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_20, 0) = ((MR_Box) ((MR_String) " --grade "));
      MR_hl_field(MR_mktag(1), Var_20, 1) = ((MR_Box) (Var_22));
    }
    {
      Var_19 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_19, 0) = ((MR_Box) (Options_5));
      MR_hl_field(MR_mktag(1), Var_19, 1) = ((MR_Box) (Var_20));
    }
    {
      Var_17 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_17, 0) = ((MR_Box) ((MR_String) "--allow-undefined "));
      MR_hl_field(MR_mktag(1), Var_17, 1) = ((MR_Box) (Var_19));
    }
    {
      Var_15 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_15, 0) = ((MR_Box) ((MR_String) "--output-compile-error-lines 10000 "));
      MR_hl_field(MR_mktag(1), Var_15, 1) = ((MR_Box) (Var_17));
    }
    {
      Var_13 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_13, 0) = ((MR_Box) ((MR_String) "--no-warn-simple-code --no-warn-det-decls-too-lax "));
      MR_hl_field(MR_mktag(1), Var_13, 1) = ((MR_Box) (Var_15));
    }
    {
      Var_11 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_11, 0) = ((MR_Box) ((MR_String) "mmc --infer-all --no-verbose-make -O0 --no-c-optimize "));
      MR_hl_field(MR_mktag(1), Var_11, 1) = ((MR_Box) (Var_13));
    }
    mercury__string__append_list_2_p_0(Var_11, &Command_8);
    mercury__io__call_system_4_p_0(Command_8, &Result_37);
    if (((MR_tag((MR_Word) Result_37)) == (MR_mktag((MR_Integer) 1))))
    {
      mercury__io__write_string_3_p_0((MR_String) "Error: unable to invoke the compiler.\n");
      *Succeeded_6 = (MR_Integer) 0;
    }
    else
    {
      MR_Integer Status_38 = ((MR_Integer) (MR_hl_field(MR_mktag(0), Result_37, (MR_Integer) 0)));

      succeeded = (Status_38 == (MR_Integer) 0);
      if (succeeded)
        *Succeeded_6 = (MR_Integer) 1;
      else
      {
        mercury__io__write_string_3_p_0((MR_String) "Compilation error(s) occurred.\n");
        *Succeeded_6 = (MR_Integer) 0;
      }
    }
  }
}

static void MR_CALL 
mdb__interactive_query__write_prog_to_file_4_p_0(
  MR_Word Program_5,
  MR_String FileName_6)
{
  {
    MR_Word Stream_8;
    MR_Word OldStream_9;
    MR_Word Result_23;
    MR_Word Var_10;

    mercury__io__open_output_4_p_0(FileName_6, &Result_23);
    if (((MR_tag((MR_Word) Result_23)) == (MR_mktag((MR_Integer) 1))))
    {
      MR_Word Error_25 = ((MR_Word) (MR_hl_field(MR_mktag(1), Result_23, (MR_Integer) 0)));
      MR_String Progname_26;
      MR_String ErrorMessage_27;
      MR_String Message_28;
      MR_Word Var_32;
      MR_Word Var_33;
      MR_Word Var_35;
      MR_Word Var_37;
      MR_Word Var_38;
      MR_Word Var_40;

      mercury__io__progname_4_p_0((MR_String) "interactive", &Progname_26);
      mercury__io__error_message_2_p_0(Error_25, &ErrorMessage_27);
      {
        Var_40 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), Var_40, 0) = ((MR_Box) (ErrorMessage_27));
        MR_hl_field(MR_mktag(1), Var_40, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &mdb__interactive_query_scalar_common_1[23])));
      }
      {
        Var_38 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), Var_38, 0) = ((MR_Box) ((MR_String) "\' for output:\n\t"));
        MR_hl_field(MR_mktag(1), Var_38, 1) = ((MR_Box) (Var_40));
      }
      {
        Var_37 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), Var_37, 0) = ((MR_Box) (FileName_6));
        MR_hl_field(MR_mktag(1), Var_37, 1) = ((MR_Box) (Var_38));
      }
      {
        Var_35 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), Var_35, 0) = ((MR_Box) ((MR_String) "error opening file \140"));
        MR_hl_field(MR_mktag(1), Var_35, 1) = ((MR_Box) (Var_37));
      }
      {
        Var_33 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), Var_33, 0) = ((MR_Box) ((MR_String) ": "));
        MR_hl_field(MR_mktag(1), Var_33, 1) = ((MR_Box) (Var_35));
      }
      {
        Var_32 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), Var_32, 0) = ((MR_Box) (Progname_26));
        MR_hl_field(MR_mktag(1), Var_32, 1) = ((MR_Box) (Var_33));
      }
      mercury__string__append_list_2_p_0(Var_32, &Message_28);
      mercury__io__write_string_3_p_0(Message_28);
      mercury__io__stdout_stream_3_p_0(&Stream_8);
    }
    else
      Stream_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), Result_23, (MR_Integer) 0)));
    mercury__io__set_output_stream_4_p_0(Stream_8, &OldStream_9);
    mdb__interactive_query__write_prog_to_stream_3_p_0(Program_5);
    mercury__io__set_output_stream_4_p_0(OldStream_9, &Var_10);
    mercury__io__close_output_3_p_0(Stream_8);
  }
}

static void MR_CALL 
mdb__interactive_query__write_prog_to_stream_3_p_0_5(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3)
{
  {
    MR_Box closure = closure_arg;

    mdb__interactive_query__write_comma_var_3_p_0(((MR_String) wrapper_arg_1));
  }
}

static void MR_CALL 
mdb__interactive_query__write_prog_to_stream_3_p_0_4(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3)
{
  {
    MR_Box closure = closure_arg;

    mdb__interactive_query__IntroducedFrom__pred__write_prog_to_stream__475__1_3_p_0(((MR_String) wrapper_arg_1));
  }
}

static void MR_CALL 
mdb__interactive_query__write_prog_to_stream_3_p_0_3(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3)
{
  {
    MR_Box closure = closure_arg;

    mdb__interactive_query__write_set_goal_3_p_0(((MR_String) wrapper_arg_1));
  }
}

static void MR_CALL 
mdb__interactive_query__write_prog_to_stream_3_p_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3)
{
  {
    MR_Box closure = closure_arg;

    mdb__interactive_query__write_comma_var_3_p_0(((MR_String) wrapper_arg_1));
  }
}

static void MR_CALL 
mdb__interactive_query__write_prog_to_stream_3_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3)
{
  {
    MR_Box closure = closure_arg;

    mdb__interactive_query__write_cast_goal_3_p_0(((MR_String) wrapper_arg_1));
  }
}

static void MR_CALL 
mdb__interactive_query__write_prog_to_stream_3_p_0(
  MR_Word Prog_4)
{
  {
    MR_Word TypeCtorInfo_163_163;
    MR_Word TypeCtorInfo_164_164;
    MR_Word QueryType_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), Prog_4, (MR_Integer) 0)));
    MR_Word Imports_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), Prog_4, (MR_Integer) 1)));
    MR_Word Bindings_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), Prog_4, (MR_Integer) 2)));
    MR_Word Inputs_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), Prog_4, (MR_Integer) 3)));
    MR_Word Outputs_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), Prog_4, (MR_Integer) 4)));
    MR_Word Goal_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), Prog_4, (MR_Integer) 5)));
    MR_Word Varset_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), Prog_4, (MR_Integer) 6)));
    MR_Word Out_13;
    MR_Word Var_17;
    MR_Word Var_20;
    MR_Word Var_22;
    MR_Word Var_24;
    MR_Word Var_26;
    MR_String Var_27;
    MR_Word Var_28;
    MR_Word Var_30;
    MR_Word Var_32;
    MR_Word Var_34;
    MR_Word Var_36;
    MR_Word Var_38;
    MR_String Var_39;
    MR_Word Var_40;
    MR_Word Var_42;
    MR_String Var_43;
    MR_Word Var_44;
    MR_Word Var_46;
    MR_Word Var_48;
    MR_Word Var_50;
    MR_Word Var_52;
    MR_Word Var_54;
    MR_String Var_55;
    MR_Word Var_63;
    MR_Word Var_66;
    MR_Word Var_68;
    MR_Word Var_70;
    MR_String Var_71;
    MR_Word Var_78;
    MR_String Var_80;
    MR_Word Var_127;
    MR_String Var_129;
    MR_Word Var_130;
    MR_Word Var_132;
    MR_String Var_133;
    MR_Word Var_144;
    MR_Word Var_147;
    MR_String Var_148;
    MR_Box conv0_STATE_VARIABLE_IO_62_62;
    MR_Box conv1_STATE_VARIABLE_IO_77_77;
    MR_Box conv2_STATE_VARIABLE_IO_85_85;
    MR_Box conv3_STATE_VARIABLE_IO_120_120;
    MR_Box conv4_STATE_VARIABLE_IO_143_143;

    Var_27 = mdb__interactive_query__query_type_extra_imports_1_f_0(QueryType_6);
    Var_39 = mdb__interactive_query__query_type_extra_decls_1_f_0(QueryType_6);
    Var_43 = mdb__interactive_query__query_type_detism_1_f_0(QueryType_6);
    Var_55 = mdb__interactive_query__query_type_extra_args_1_f_0(QueryType_6);
    {
      Var_54 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_54, 0) = ((MR_Box) (Var_55));
      MR_hl_field(MR_mktag(1), Var_54, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &mdb__interactive_query_scalar_common_1[5])));
    }
    {
      Var_52 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_52, 0) = ((MR_Box) ((MR_String) "run(!Bindings, Loaded"));
      MR_hl_field(MR_mktag(1), Var_52, 1) = ((MR_Box) (Var_54));
    }
    {
      Var_50 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_50, 0) = ((MR_Box) ((MR_String) "\n"));
      MR_hl_field(MR_mktag(1), Var_50, 1) = ((MR_Box) (Var_52));
    }
    {
      Var_48 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_48, 0) = ((MR_Box) ((MR_String) ":- implementation.\n"));
      MR_hl_field(MR_mktag(1), Var_48, 1) = ((MR_Box) (Var_50));
    }
    {
      Var_46 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_46, 0) = ((MR_Box) ((MR_String) "\n"));
      MR_hl_field(MR_mktag(1), Var_46, 1) = ((MR_Box) (Var_48));
    }
    {
      Var_44 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_44, 0) = ((MR_Box) ((MR_String) ".\n"));
      MR_hl_field(MR_mktag(1), Var_44, 1) = ((MR_Box) (Var_46));
    }
    {
      Var_42 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_42, 0) = ((MR_Box) (Var_43));
      MR_hl_field(MR_mktag(1), Var_42, 1) = ((MR_Box) (Var_44));
    }
    {
      Var_40 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_40, 0) = ((MR_Box) ((MR_String) ") is "));
      MR_hl_field(MR_mktag(1), Var_40, 1) = ((MR_Box) (Var_42));
    }
    {
      Var_38 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_38, 0) = ((MR_Box) (Var_39));
      MR_hl_field(MR_mktag(1), Var_38, 1) = ((MR_Box) (Var_40));
    }
    {
      Var_36 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_36, 0) = ((MR_Box) ((MR_String) "   bool::out"));
      MR_hl_field(MR_mktag(1), Var_36, 1) = ((MR_Box) (Var_38));
    }
    {
      Var_34 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_34, 0) = ((MR_Box) ((MR_String) ":- pred run(map(string, univ)::in, map(string, univ)::out,\n"));
      MR_hl_field(MR_mktag(1), Var_34, 1) = ((MR_Box) (Var_36));
    }
    {
      Var_32 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_32, 0) = ((MR_Box) ((MR_String) "\n"));
      MR_hl_field(MR_mktag(1), Var_32, 1) = ((MR_Box) (Var_34));
    }
    {
      Var_30 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_30, 0) = ((MR_Box) ((MR_String) ":- import_module univ.\n"));
      MR_hl_field(MR_mktag(1), Var_30, 1) = ((MR_Box) (Var_32));
    }
    {
      Var_28 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_28, 0) = ((MR_Box) ((MR_String) ":- import_module map.\n"));
      MR_hl_field(MR_mktag(1), Var_28, 1) = ((MR_Box) (Var_30));
    }
    {
      Var_26 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_26, 0) = ((MR_Box) (Var_27));
      MR_hl_field(MR_mktag(1), Var_26, 1) = ((MR_Box) (Var_28));
    }
    {
      Var_24 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_24, 0) = ((MR_Box) ((MR_String) ":- import_module bool.\n"));
      MR_hl_field(MR_mktag(1), Var_24, 1) = ((MR_Box) (Var_26));
    }
    {
      Var_22 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_22, 0) = ((MR_Box) ((MR_String) "\n"));
      MR_hl_field(MR_mktag(1), Var_22, 1) = ((MR_Box) (Var_24));
    }
    {
      Var_20 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_20, 0) = ((MR_Box) ((MR_String) ":- interface.\n"));
      MR_hl_field(MR_mktag(1), Var_20, 1) = ((MR_Box) (Var_22));
    }
    {
      Var_17 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_17, 0) = ((MR_Box) ((MR_String) ":- module mdb_query.\n"));
      MR_hl_field(MR_mktag(1), Var_17, 1) = ((MR_Box) (Var_20));
    }
    mercury__io__write_strings_3_p_0(Var_17);
    TypeCtorInfo_163_163 = (MR_Word) &mercury__builtin__builtin__type_ctor_info_string_0;
    TypeCtorInfo_164_164 = (MR_Word) &mercury__io__io__type_ctor_info_state_0;
    mercury__list__foldl_4_p_2(TypeCtorInfo_163_163, TypeCtorInfo_164_164, (MR_Word) &mdb__interactive_query_scalar_common_2[3], Inputs_9, ((MR_Box) ((MR_Integer) 0)), &conv0_STATE_VARIABLE_IO_62_62);
    Var_71 = mdb__interactive_query__query_module_name_0_f_0();
    {
      Var_70 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_70, 0) = ((MR_Box) (Var_71));
      MR_hl_field(MR_mktag(1), Var_70, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &mdb__interactive_query_scalar_common_1[21])));
    }
    {
      Var_68 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_68, 0) = ((MR_Box) ((MR_String) "       "));
      MR_hl_field(MR_mktag(1), Var_68, 1) = ((MR_Box) (Var_70));
    }
    {
      Var_66 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_66, 0) = ((MR_Box) ((MR_String) "   then\n"));
      MR_hl_field(MR_mktag(1), Var_66, 1) = ((MR_Box) (Var_68));
    }
    {
      Var_63 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_63, 0) = ((MR_Box) ((MR_String) "       true\n"));
      MR_hl_field(MR_mktag(1), Var_63, 1) = ((MR_Box) (Var_66));
    }
    mercury__io__write_strings_3_p_0(Var_63);
    mdb__interactive_query__write_args_3_p_0(Inputs_9);
    mercury__list__foldl_4_p_2(TypeCtorInfo_163_163, TypeCtorInfo_164_164, (MR_Word) &mdb__interactive_query_scalar_common_2[4], Outputs_10, ((MR_Box) ((MR_Integer) 0)), &conv1_STATE_VARIABLE_IO_77_77);
    Var_80 = mdb__interactive_query__query_type_extra_args_1_f_0(QueryType_6);
    {
      Var_78 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_78, 0) = ((MR_Box) (Var_80));
      MR_hl_field(MR_mktag(1), Var_78, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &mdb__interactive_query_scalar_common_1[22])));
    }
    mercury__io__write_strings_3_p_0(Var_78);
    mercury__list__foldl_4_p_2(TypeCtorInfo_163_163, TypeCtorInfo_164_164, (MR_Word) &mdb__interactive_query_scalar_common_2[5], Outputs_10, ((MR_Box) ((MR_Integer) 0)), &conv2_STATE_VARIABLE_IO_85_85);
    mercury__io__write_strings_3_p_0((MR_Word) MR_mkword(MR_mktag(1), &mdb__interactive_query_scalar_common_1[11]));
    mdb__interactive_query__write_arg_types_4_p_0(Bindings_8, Inputs_9);
    mercury__io__write_strings_3_p_0((MR_Word) MR_mkword(MR_mktag(1), &mdb__interactive_query_scalar_common_1[15]));
    mercury__io__output_stream_3_p_0(&Out_13);
    mdb__interactive_query__write_import_list_4_p_0(Out_13, Imports_7);
    mercury__io__write_strings_3_p_0((MR_Word) MR_mkword(MR_mktag(1), &mdb__interactive_query_scalar_common_1[17]));
    mercury__list__foldl_4_p_2(TypeCtorInfo_163_163, TypeCtorInfo_164_164, (MR_Word) &mdb__interactive_query_scalar_common_2[6], Outputs_10, ((MR_Box) ((MR_Integer) 0)), &conv3_STATE_VARIABLE_IO_120_120);
    Var_129 = mdb__interactive_query__query_type_extra_modes_1_f_0(QueryType_6);
    Var_133 = mdb__interactive_query__query_type_detism_1_f_0(QueryType_6);
    {
      Var_132 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_132, 0) = ((MR_Box) (Var_133));
      MR_hl_field(MR_mktag(1), Var_132, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &mdb__interactive_query_scalar_common_1[20])));
    }
    {
      Var_130 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_130, 0) = ((MR_Box) ((MR_String) ") is "));
      MR_hl_field(MR_mktag(1), Var_130, 1) = ((MR_Box) (Var_132));
    }
    {
      Var_127 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_127, 0) = ((MR_Box) (Var_129));
      MR_hl_field(MR_mktag(1), Var_127, 1) = ((MR_Box) (Var_130));
    }
    mercury__io__write_strings_3_p_0(Var_127);
    mdb__interactive_query__write_args_3_p_0(Inputs_9);
    mercury__list__foldl_4_p_2(TypeCtorInfo_163_163, TypeCtorInfo_164_164, (MR_Word) &mdb__interactive_query_scalar_common_2[7], Outputs_10, ((MR_Box) ((MR_Integer) 0)), &conv4_STATE_VARIABLE_IO_143_143);
    Var_148 = mdb__interactive_query__query_type_rule_1_f_0(QueryType_6);
    {
      Var_147 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_147, 0) = ((MR_Box) (Var_148));
      MR_hl_field(MR_mktag(1), Var_147, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
    }
    {
      Var_144 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_144, 0) = ((MR_Box) ((MR_String) ") "));
      MR_hl_field(MR_mktag(1), Var_144, 1) = ((MR_Box) (Var_147));
    }
    mercury__io__write_strings_3_p_0(Var_144);
    mdb__interactive_query__write_line_directive_2_p_0();
    mercury__io__write_string_3_p_0((MR_String) "   ( ");
    mercury__term_io__write_term_4_p_0((MR_Word) &mercury__term__term__type_ctor_info_generic_0, Varset_12, Goal_11);
    mercury__io__write_string_3_p_0((MR_String) " ).\n");
  }
}

static MR_String MR_CALL 
mdb__interactive_query__query_module_name_0_f_0(void)
{
  {
    return (MR_String) "mdb_query";
  }
}

static void MR_CALL 
mdb__interactive_query__write_import_list_4_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3)
{
  {
    MR_Box closure = closure_arg;

    mercury__term_io__quote_atom_3_p_0(((MR_String) wrapper_arg_1));
  }
}

static void MR_CALL 
mdb__interactive_query__write_import_list_4_p_0(
  MR_Word Out_5,
  MR_Word Imports_6)
{
  if (!((Imports_6 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))))))
  {
    mercury__io__write_string_4_p_0(Out_5, (MR_String) ":- import_module ");
    mercury__io__write_list_6_p_0((MR_Word) &mercury__builtin__builtin__type_ctor_info_string_0, Out_5, Imports_6, (MR_String) ", ", (MR_Word) &mdb__interactive_query_scalar_common_2[2]);
    mercury__io__write_string_4_p_0(Out_5, (MR_String) ".\n");
  }
}

static void MR_CALL 
mdb__interactive_query__write_args_3_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3)
{
  {
    MR_Box closure = closure_arg;

    mercury__io__write_string_3_p_0(((MR_String) wrapper_arg_1));
  }
}

static void MR_CALL 
mdb__interactive_query__write_args_3_p_0(
  MR_Word Vars_4)
{
  if (!((Vars_4 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))))))
  {
    mercury__io__write_string_3_p_0((MR_String) "(");
    mercury__io__write_list_5_p_0((MR_Word) &mercury__builtin__builtin__type_ctor_info_string_0, Vars_4, (MR_String) ", ", (MR_Word) &mdb__interactive_query_scalar_common_2[1]);
    mercury__io__write_string_3_p_0((MR_String) ")");
  }
}

static void MR_CALL 
mdb__interactive_query__write_arg_types_4_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3)
{
  {
    MR_Box closure = closure_arg;

    mdb__interactive_query__write_var_type_4_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3))), ((MR_String) wrapper_arg_1));
  }
}

static void MR_CALL 
mdb__interactive_query__write_arg_types_4_p_0(
  MR_Word Bindings_5,
  MR_Word Vars_6)
{
  if (!((Vars_6 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))))))
  {
    MR_Word Var_15;

    mercury__io__write_string_3_p_0((MR_String) "(");
    {
      Var_15 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), Var_15, 0) = ((MR_Box) (&mdb__interactive_query_scalar_common_4[1]));
      MR_hl_field(MR_mktag(0), Var_15, 1) = ((MR_Box) (mdb__interactive_query__write_arg_types_4_p_0_1));
      MR_hl_field(MR_mktag(0), Var_15, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
      MR_hl_field(MR_mktag(0), Var_15, 3) = ((MR_Box) (Bindings_5));
    }
    mercury__io__write_list_5_p_0((MR_Word) &mercury__builtin__builtin__type_ctor_info_string_0, Vars_6, (MR_String) ", ", Var_15);
    mercury__io__write_string_3_p_0((MR_String) ")");
  }
}

static void MR_CALL 
mdb__interactive_query__write_line_directive_2_p_0(void)
{
  {
    MR_Integer LineNum_4;

    mercury__io__write_string_3_p_0((MR_String) "\n#");
    mercury__io__get_line_number_3_p_0(&LineNum_4);
    mercury__io__write_int_3_p_0(LineNum_4);
    mercury__io__nl_2_p_0();
  }
}

static MR_String MR_CALL 
mdb__interactive_query__query_type_rule_1_f_0(
  MR_Word HeadVar__1_1)
{
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
}

static MR_String MR_CALL 
mdb__interactive_query__query_type_extra_args_1_f_0(
  MR_Word HeadVar__1_1)
{
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
}

static MR_String MR_CALL 
mdb__interactive_query__query_type_extra_modes_1_f_0(
  MR_Word HeadVar__1_1)
{
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
}

static MR_String MR_CALL 
mdb__interactive_query__query_type_extra_decls_1_f_0(
  MR_Word HeadVar__1_1)
{
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
}

static MR_String MR_CALL 
mdb__interactive_query__query_type_extra_imports_1_f_0(
  MR_Word HeadVar__1_1)
{
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
}

static MR_String MR_CALL 
mdb__interactive_query__query_type_detism_1_f_0(
  MR_Word HeadVar__1_1)
{
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
}

static void MR_CALL 
mdb__interactive_query__parse_query_command_2_p_0(
  MR_Word Term_3,
  MR_Word * Cmd_4)
{
  {
    MR_bool succeeded = ((MR_tag((MR_Word) Term_3)) == (MR_mktag((MR_Integer) 0)));
    MR_Word Var_11;
    MR_String Var_12;
    MR_Word Var_13;
    MR_Word Var_5;

    if (succeeded)
    {
      Var_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), Term_3, (MR_Integer) 0)));
      Var_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), Term_3, (MR_Integer) 1)));
      Var_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), Term_3, (MR_Integer) 2)));
      succeeded = ((MR_tag((MR_Word) Var_11)) == (MR_mktag((MR_Integer) 0)));
      if (succeeded)
      {
        Var_12 = ((MR_String) (MR_hl_field(MR_mktag(0), Var_11, (MR_Integer) 0)));
        succeeded = (strcmp(Var_12, (MR_String) "quit") == 0);
        if (succeeded)
          succeeded = (Var_13 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
      }
    }
    if (succeeded)
      *Cmd_4 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
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
      MR_Word Var_7;
      MR_Word Var_9;

      succeeded = ((MR_tag((MR_Word) Term_3)) == (MR_mktag((MR_Integer) 0)));
      if (succeeded)
      {
        Var_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), Term_3, (MR_Integer) 0)));
        Var_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), Term_3, (MR_Integer) 1)));
        Var_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), Term_3, (MR_Integer) 2)));
        succeeded = ((MR_tag((MR_Word) Var_14)) == (MR_mktag((MR_Integer) 0)));
        if (succeeded)
        {
          Var_15 = ((MR_String) (MR_hl_field(MR_mktag(0), Var_14, (MR_Integer) 0)));
          succeeded = (strcmp(Var_15, (MR_String) "options") == 0);
          if (succeeded)
          {
            succeeded = ((MR_tag((MR_Word) Var_16)) == (MR_mktag((MR_Integer) 1)));
            if (succeeded)
            {
              Subterm_6 = ((MR_Word) (MR_hl_field(MR_mktag(1), Var_16, (MR_Integer) 0)));
              Var_17 = ((MR_Word) (MR_hl_field(MR_mktag(1), Var_16, (MR_Integer) 1)));
              succeeded = (Var_17 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
              if (succeeded)
              {
                succeeded = ((MR_tag((MR_Word) Subterm_6)) == (MR_mktag((MR_Integer) 0)));
                if (succeeded)
                {
                  Var_18 = ((MR_Word) (MR_hl_field(MR_mktag(0), Subterm_6, (MR_Integer) 0)));
                  Var_19 = ((MR_Word) (MR_hl_field(MR_mktag(0), Subterm_6, (MR_Integer) 1)));
                  Var_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), Subterm_6, (MR_Integer) 2)));
                  succeeded = ((MR_tag((MR_Word) Var_18)) == (MR_mktag((MR_Integer) 2)));
                  if (succeeded)
                  {
                    Options_8 = ((MR_String) (MR_hl_field(MR_mktag(2), Var_18, (MR_Integer) 0)));
                    succeeded = (Var_19 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
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
          base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
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
            base = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
            *Cmd_4 = base;
            MR_hl_field(MR_mktag(2), base, 0) = ((MR_Box) (Imports_10));
          }
        else
          *Cmd_4 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 1));
      }
    }
  }
}

static MR_bool MR_CALL 
mdb__interactive_query__term_to_list_2_p_0(
  MR_Word HeadVar__1_1,
  MR_Word * HeadVar__2_2)
{
  {
    MR_bool succeeded = ((MR_tag((MR_Word) HeadVar__1_1)) == (MR_mktag((MR_Integer) 0)));
    MR_Word Var_21;
    MR_Word Var_22;
    MR_String Var_23;
    MR_Word Var_20;

    if (succeeded)
    {
      Var_22 = ((MR_Word) (MR_hl_field(MR_mktag(0), HeadVar__1_1, (MR_Integer) 0)));
      Var_21 = ((MR_Word) (MR_hl_field(MR_mktag(0), HeadVar__1_1, (MR_Integer) 1)));
      Var_20 = ((MR_Word) (MR_hl_field(MR_mktag(0), HeadVar__1_1, (MR_Integer) 2)));
      succeeded = ((MR_tag((MR_Word) Var_22)) == (MR_mktag((MR_Integer) 0)));
      if (succeeded)
      {
        Var_23 = ((MR_String) (MR_hl_field(MR_mktag(0), Var_22, (MR_Integer) 0)));
        if ((Var_21 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
        {
          succeeded = (strcmp(Var_23, (MR_String) "[]") == 0);
          if (succeeded)
          {
            *HeadVar__2_2 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
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
          MR_Word _C1_8;

          succeeded = (strcmp(Var_23, (MR_String) "[|]") == 0);
          if (succeeded)
          {
            Var_15 = ((MR_Word) (MR_hl_field(MR_mktag(1), Var_21, (MR_Integer) 0)));
            Var_18 = ((MR_Word) (MR_hl_field(MR_mktag(1), Var_21, (MR_Integer) 1)));
            succeeded = ((MR_tag((MR_Word) Var_15)) == (MR_mktag((MR_Integer) 0)));
            if (succeeded)
            {
              Var_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), Var_15, (MR_Integer) 0)));
              Var_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), Var_15, (MR_Integer) 1)));
              _C1_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), Var_15, (MR_Integer) 2)));
              succeeded = (Var_17 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
              if (succeeded)
              {
                succeeded = ((MR_tag((MR_Word) Var_16)) == (MR_mktag((MR_Integer) 0)));
                if (succeeded)
                {
                  Module_7 = ((MR_String) (MR_hl_field(MR_mktag(0), Var_16, (MR_Integer) 0)));
                  succeeded = ((MR_tag((MR_Word) Var_18)) == (MR_mktag((MR_Integer) 1)));
                  if (succeeded)
                  {
                    Rest_9 = ((MR_Word) (MR_hl_field(MR_mktag(1), Var_18, (MR_Integer) 0)));
                    Var_19 = ((MR_Word) (MR_hl_field(MR_mktag(1), Var_18, (MR_Integer) 1)));
                    succeeded = (Var_19 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
                    if (succeeded)
                    {
                      succeeded = mdb__interactive_query__term_to_list_2_p_0(Rest_9, &Modules_11);
                      if (succeeded)
                      {
                        {
                          MR_Word base;
                          base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
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
}

static MR_bool MR_CALL 
mdb__interactive_query____Unify____bindings_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  {
    MR_bool succeeded;

    succeeded = mdb__interactive_query____Unify____bindings_0_0(((MR_Word) wrapper_arg_1), ((MR_Word) wrapper_arg_2));
    return succeeded;
  }
}

static void MR_CALL 
mdb__interactive_query____Compare____bindings_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  {
    MR_Word conv0_HeadVar__1_1;

    mdb__interactive_query____Compare____bindings_0_0(&conv0_HeadVar__1_1, ((MR_Word) wrapper_arg_2), ((MR_Word) wrapper_arg_3));
    *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
  }
}

static MR_bool MR_CALL 
mdb__interactive_query____Unify____imports_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  {
    MR_bool succeeded;

    succeeded = mdb__interactive_query____Unify____imports_0_0(((MR_Word) wrapper_arg_1), ((MR_Word) wrapper_arg_2));
    return succeeded;
  }
}

static void MR_CALL 
mdb__interactive_query____Compare____imports_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  {
    MR_Word conv0_HeadVar__1_1;

    mdb__interactive_query____Compare____imports_0_0(&conv0_HeadVar__1_1, ((MR_Word) wrapper_arg_2), ((MR_Word) wrapper_arg_3));
    *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
  }
}

static MR_bool MR_CALL 
mdb__interactive_query____Unify____interactive_query_response_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  {
    MR_bool succeeded;

    succeeded = mdb__interactive_query____Unify____interactive_query_response_0_0(((MR_Word) wrapper_arg_1), ((MR_Word) wrapper_arg_2));
    return succeeded;
  }
}

static void MR_CALL 
mdb__interactive_query____Compare____interactive_query_response_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  {
    MR_Word conv0_HeadVar__1_1;

    mdb__interactive_query____Compare____interactive_query_response_0_0(&conv0_HeadVar__1_1, ((MR_Word) wrapper_arg_2), ((MR_Word) wrapper_arg_3));
    *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
  }
}

static MR_bool MR_CALL 
mdb__interactive_query____Unify____options_string_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  {
    MR_bool succeeded;

    succeeded = mdb__interactive_query____Unify____options_string_0_0(((MR_String) wrapper_arg_1), ((MR_String) wrapper_arg_2));
    return succeeded;
  }
}

static void MR_CALL 
mdb__interactive_query____Compare____options_string_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  {
    MR_Word conv0_HeadVar__1_1;

    mdb__interactive_query____Compare____options_string_0_0(&conv0_HeadVar__1_1, ((MR_String) wrapper_arg_2), ((MR_String) wrapper_arg_3));
    *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
  }
}

static MR_bool MR_CALL 
mdb__interactive_query____Unify____prog_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  {
    MR_bool succeeded;

    succeeded = mdb__interactive_query____Unify____prog_0_0(((MR_Word) wrapper_arg_1), ((MR_Word) wrapper_arg_2));
    return succeeded;
  }
}

static void MR_CALL 
mdb__interactive_query____Compare____prog_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  {
    MR_Word conv0_HeadVar__1_1;

    mdb__interactive_query____Compare____prog_0_0(&conv0_HeadVar__1_1, ((MR_Word) wrapper_arg_2), ((MR_Word) wrapper_arg_3));
    *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
  }
}

static MR_bool MR_CALL 
mdb__interactive_query____Unify____query_command_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  {
    MR_bool succeeded;

    succeeded = mdb__interactive_query____Unify____query_command_0_0(((MR_Word) wrapper_arg_1), ((MR_Word) wrapper_arg_2));
    return succeeded;
  }
}

static void MR_CALL 
mdb__interactive_query____Compare____query_command_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  {
    MR_Word conv0_HeadVar__1_1;

    mdb__interactive_query____Compare____query_command_0_0(&conv0_HeadVar__1_1, ((MR_Word) wrapper_arg_2), ((MR_Word) wrapper_arg_3));
    *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
  }
}

static MR_bool MR_CALL 
mdb__interactive_query____Unify____query_env_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  {
    MR_bool succeeded;

    succeeded = mdb__interactive_query____Unify____query_env_0_0(((MR_Word) wrapper_arg_1), ((MR_Word) wrapper_arg_2));
    return succeeded;
  }
}

static void MR_CALL 
mdb__interactive_query____Compare____query_env_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  {
    MR_Word conv0_HeadVar__1_1;

    mdb__interactive_query____Compare____query_env_0_0(&conv0_HeadVar__1_1, ((MR_Word) wrapper_arg_2), ((MR_Word) wrapper_arg_3));
    *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
  }
}

static MR_bool MR_CALL 
mdb__interactive_query____Unify____query_type_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  {
    MR_bool succeeded;

    succeeded = mdb__interactive_query____Unify____query_type_0_0(((MR_Word) wrapper_arg_1), ((MR_Word) wrapper_arg_2));
    return succeeded;
  }
}

static void MR_CALL 
mdb__interactive_query____Compare____query_type_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  {
    MR_Word conv0_HeadVar__1_1;

    mdb__interactive_query____Compare____query_type_0_0(&conv0_HeadVar__1_1, ((MR_Word) wrapper_arg_2), ((MR_Word) wrapper_arg_3));
    *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
  }
}

static MR_bool MR_CALL 
mdb__interactive_query____Unify____run_cc_pred_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  {
    MR_bool succeeded;

    succeeded = mdb__interactive_query____Unify____run_cc_pred_0_0(((MR_Word) wrapper_arg_1), ((MR_Word) wrapper_arg_2));
    return succeeded;
  }
}

static void MR_CALL 
mdb__interactive_query____Compare____run_cc_pred_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  {
    MR_Word conv0_HeadVar__1_1;

    mdb__interactive_query____Compare____run_cc_pred_0_0(&conv0_HeadVar__1_1, ((MR_Word) wrapper_arg_2), ((MR_Word) wrapper_arg_3));
    *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
  }
}

static MR_bool MR_CALL 
mdb__interactive_query____Unify____run_io_pred_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  {
    MR_bool succeeded;

    succeeded = mdb__interactive_query____Unify____run_io_pred_0_0(((MR_Word) wrapper_arg_1), ((MR_Word) wrapper_arg_2));
    return succeeded;
  }
}

static void MR_CALL 
mdb__interactive_query____Compare____run_io_pred_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  {
    MR_Word conv0_HeadVar__1_1;

    mdb__interactive_query____Compare____run_io_pred_0_0(&conv0_HeadVar__1_1, ((MR_Word) wrapper_arg_2), ((MR_Word) wrapper_arg_3));
    *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
  }
}

static MR_bool MR_CALL 
mdb__interactive_query____Unify____run_normal_pred_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  {
    MR_bool succeeded;

    succeeded = mdb__interactive_query____Unify____run_normal_pred_0_0(((MR_Word) wrapper_arg_1), ((MR_Word) wrapper_arg_2));
    return succeeded;
  }
}

static void MR_CALL 
mdb__interactive_query____Compare____run_normal_pred_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  {
    MR_Word conv0_HeadVar__1_1;

    mdb__interactive_query____Compare____run_normal_pred_0_0(&conv0_HeadVar__1_1, ((MR_Word) wrapper_arg_2), ((MR_Word) wrapper_arg_3));
    *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
  }
}

static MR_bool MR_CALL 
mdb__interactive_query____Unify____solution_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  {
    MR_bool succeeded;

    succeeded = mdb__interactive_query____Unify____solution_0_0(((MR_Word) wrapper_arg_1), ((MR_Word) wrapper_arg_2));
    return succeeded;
  }
}

static void MR_CALL 
mdb__interactive_query____Compare____solution_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  {
    MR_Word conv0_HeadVar__1_1;

    mdb__interactive_query____Compare____solution_0_0(&conv0_HeadVar__1_1, ((MR_Word) wrapper_arg_2), ((MR_Word) wrapper_arg_3));
    *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
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

// :- end_module mdb.interactive_query.
