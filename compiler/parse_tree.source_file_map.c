/*
** Automatically generated from `source_file_map.m'
** by the Mercury compiler,
** version rotd-2025-06-23
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


// :- module parse_tree.source_file_map.
// :- implementation.

/*
INIT mercury__parse_tree__source_file_map__init
REQUIRED_INIT mercury__parse_tree__source_file_map__required_init
ENDINIT
*/

#include "parse_tree.source_file_map.mih"
#include "parse_tree.source_file_map.mh"


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
#include "dir.mih"
#include "edit_seq.mih"
#include "enum.mih"
#include "getopt.mih"
#include "int.mih"
#include "io.mih"
#include "libs.mih"
#include "list.mih"
#include "map.mih"
#include "maybe.mih"
#include "mdbcomp.mih"
#include "one_or_more.mih"
#include "one_or_more_map.mih"
#include "ops.mih"
#include "pair.mih"
#include "parse_tree.mih"
#include "pretty_printer.mih"
#include "private_builtin.mih"
#include "set.mih"
#include "set_ordlist.mih"
#include "sparse_bitset.mih"
#include "stream.mih"
#include "string.mih"
#include "term.mih"
#include "term_context.mih"
#include "time.mih"
#include "tree234.mih"
#include "type_desc.mih"
#include "unit.mih"
#include "univ.mih"
#include "varset.mih"
#include "libs.file_util.mih"
#include "libs.globals.mih"
#include "libs.indent.mih"
#include "libs.maybe_util.mih"
#include "libs.op_mode.mih"
#include "libs.optimization_options.mih"
#include "libs.options.mih"
#include "libs.trace_params.mih"
#include "mdbcomp.feedback.mih"
#include "mdbcomp.prim_data.mih"
#include "mdbcomp.sym_name.mih"
#include "parse_tree.error_spec.mih"
#include "parse_tree.file_names.mih"
#include "parse_tree.find_module.mih"
#include "parse_tree.maybe_error.mih"
#include "parse_tree.parse_error.mih"
#include "parse_tree.parse_module.mih"
#include "parse_tree.parse_tree_out_sym_name.mih"
#include "parse_tree.parse_tree_out_term.mih"
#include "parse_tree.parse_tree_output.mih"
#include "parse_tree.prog_data.mih"
#include "parse_tree.prog_data_pragma.mih"
#include "parse_tree.prog_item.mih"
#include "parse_tree.prog_parse_tree.mih"
#include "parse_tree.set_of_var.mih"
#include "parse_tree.var_table.mih"
#include "parse_tree.write_error_spec.mih"
#include "string.builder.mih"
#include "string.format.mih"
#include "string.parse_util.mih"




static const MR_FA_PseudoTypeInfo_Struct2 parse_tree__source_file_map__bimap__pti_bimap_2__plain_mdbcomp__sym_name__type_ctor_info_sym_name_0__plain_builtin__type_ctor_info_string_0;

static const MR_FA_TypeInfo_Struct2 parse_tree__source_file_map__bimap__ti_bimap_2mdbcomp__sym_name__type_ctor_info_sym_name_0builtin__type_ctor_info_string_0;

static void MR_CALL 
parse_tree__source_file_map____Compare____source_file_map_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3);

static MR_bool MR_CALL 
parse_tree__source_file_map____Unify____source_file_map_0_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2);

static void MR_CALL 
parse_tree__source_file_map__unsafe_set_maybe_source_file_map_1_p_0(
  MR_Word X_1);

static void MR_CALL 
parse_tree__source_file_map__unsafe_get_maybe_source_file_map_1_p_0(
  MR_Word * X_1);

static void MR_CALL 
parse_tree__source_file_map__unlock_maybe_source_file_map_0_p_0(void);

static void MR_CALL 
parse_tree__source_file_map__lock_maybe_source_file_map_0_p_0(void);

static void MR_CALL 
parse_tree__source_file_map__pre_initialise_mutable_maybe_source_file_map_0_p_0(void);

static void MR_CALL 
parse_tree__source_file_map__initialise_mutable_maybe_source_file_map_0_p_0(void);

static void MR_CALL 
parse_tree__source_file_map__write_source_file_map_line_8_p_0(
  MR_Word ProgressStream_9,
  MR_Word MapFileStream_10,
  MR_Word Globals_11,
  MR_String FileName_12,
  MR_Word SeenModules0_13,
  MR_Word * SeenModules_14);

static void MR_CALL 
parse_tree__source_file_map__parse_source_file_map_6_p_0(
  MR_Word Lines_7,
  MR_String ModulesFileName_8,
  MR_Integer CurLineNumber_9,
  MR_String * ErrorMsg_10,
  MR_Word STATE_VARIABLE_SourceFileMap_0_19,
  MR_Word * STATE_VARIABLE_SourceFileMap_20);

static void MR_CALL 
parse_tree__source_file_map__write_source_file_map_5_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3,
  MR_Box wrapper_arg_4,
  MR_Box * wrapper_arg_5);

static MR_bool MR_CALL 
parse_tree__source_file_map____Unify____source_file_map_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2);

static void MR_CALL 
parse_tree__source_file_map____Compare____source_file_map_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3);


static /* final */ const MR_Box parse_tree__source_file_map_scalar_common_1[1][3];

static /* final */ const MR_Box parse_tree__source_file_map_scalar_common_2[5][2];

static /* final */ const MR_Box parse_tree__source_file_map_scalar_common_3[1][1];

static /* final */ const MR_Box parse_tree__source_file_map_scalar_common_4[1][11];




static /* final */ const MR_Box parse_tree__source_file_map_scalar_common_1[1][3] = {
  /* row   0 */
  {
    ((MR_Box) (&mercury__bimap__bimap__type_ctor_info_bimap_2)),
    ((MR_Box) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_string_0))
  },
};

static /* final */ const MR_Box parse_tree__source_file_map_scalar_common_2[5][2] = {
  /* row   0 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 8U)),
    ((MR_Box) ((MR_String) ":"))
  },
  /* row   1 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 9U)),
    ((MR_Box) ((MR_String) "error opening"))
  },
  /* row   2 */
  {
    ((MR_Box) ((MR_Unsigned) 12U)),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row   3 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 8U)),
    ((MR_Box) ((MR_String) "."))
  },
  /* row   4 */
  {
    ((MR_Box) (MR_mkword(3, &parse_tree__source_file_map_scalar_common_2[3]))),
    ((MR_Box) (MR_mkword(1, &parse_tree__source_file_map_scalar_common_2[2])))
  },
};

static /* final */ const MR_Box parse_tree__source_file_map_scalar_common_3[1][1] = {
  /* row   0 */
  { (MR_Box) (((((MR_Unsigned) 0U << 4)) | (((((MR_Unsigned) 0U << 3)) | (((((MR_Unsigned) 0U << 2)) | (((MR_Unsigned) 0U << 1)))))))) },
};

static /* final */ const MR_Box parse_tree__source_file_map_scalar_common_4[1][11] = {
  /* row   0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 8)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_text_output_stream_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_text_output_stream_0)),
    ((MR_Box) (&libs__globals__libs__globals__type_ctor_info_globals_0)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_string_0)),
    ((MR_Box) (&parse_tree__source_file_map__bimap__pti_bimap_2__plain_mdbcomp__sym_name__type_ctor_info_sym_name_0__plain_builtin__type_ctor_info_string_0)),
    ((MR_Box) (&parse_tree__source_file_map__bimap__pti_bimap_2__plain_mdbcomp__sym_name__type_ctor_info_sym_name_0__plain_builtin__type_ctor_info_string_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0))
  },
};



#include "array.mh"
#include "bitmap.mh"
#include "dir.mh"
#include "io.mh"
#include "string.mh"
#include "time.mh"
#include "io.stream_ops.mh"
#include "parse_tree.source_file_map.mh"
#line 281 "source_file_map.m"
MR_Word parse_tree__source_file_map__mutable_variable_maybe_source_file_map;
#ifdef MR_THREAD_SAFE
    MercuryLock parse_tree__source_file_map__mutable_variable_maybe_source_file_map_lock;
#endif


#line 281 "source_file_map.m"
void 
parse_tree__source_file_map__user_init_pred_39_0(void)
#line 281 "source_file_map.m"
{
#line 281 "source_file_map.m"
	parse_tree__source_file_map__initialise_mutable_maybe_source_file_map_0_p_0();
}


static const MR_FA_PseudoTypeInfo_Struct2 parse_tree__source_file_map__bimap__pti_bimap_2__plain_mdbcomp__sym_name__type_ctor_info_sym_name_0__plain_builtin__type_ctor_info_string_0 = {
  &mercury__bimap__bimap__type_ctor_info_bimap_2,
  {
    (MR_PseudoTypeInfo) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0),
    (MR_PseudoTypeInfo) (&mercury__builtin__builtin__type_ctor_info_string_0)
  }
};

static const MR_FA_TypeInfo_Struct2 parse_tree__source_file_map__bimap__ti_bimap_2mdbcomp__sym_name__type_ctor_info_sym_name_0builtin__type_ctor_info_string_0 = {
  &mercury__bimap__bimap__type_ctor_info_bimap_2,
  {
    (MR_TypeInfo) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0),
    (MR_TypeInfo) (&mercury__builtin__builtin__type_ctor_info_string_0)
  }
};

const MR_TypeCtorInfo_Struct parse_tree__source_file_map__parse_tree__source_file_map__type_ctor_info_source_file_map_0 = {
  (MR_Integer) 0,
  UINT8_C(18),
  INT8_C(-1),
  MR_TYPECTOR_REP_EQUIV_GROUND,
  ((MR_Box) (parse_tree__source_file_map____Unify____source_file_map_0_0_10001)),
  ((MR_Box) (parse_tree__source_file_map____Compare____source_file_map_0_0_10001)),
  (MR_String) "parse_tree.source_file_map",
  (MR_String) "source_file_map",
  { NULL },
  { (MR_PseudoTypeInfo) (&parse_tree__source_file_map__bimap__ti_bimap_2mdbcomp__sym_name__type_ctor_info_sym_name_0builtin__type_ctor_info_string_0) },
  (MR_Integer) -1,
  UINT16_C(0),
  NULL,

};

static void MR_CALL 
parse_tree__source_file_map____Compare____source_file_map_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3)
{
  MR_Word Cast_HeadVar1_4 = HeadVar__2_2;
  MR_Word Cast_HeadVar2_5 = HeadVar__3_3;

  mercury__builtin__compare_3_p_0((MR_Word) (&parse_tree__source_file_map_scalar_common_1[0]), HeadVar__1_1, ((MR_Box) (Cast_HeadVar1_4)), ((MR_Box) (Cast_HeadVar2_5)));
}

static MR_bool MR_CALL 
parse_tree__source_file_map____Unify____source_file_map_0_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2)
{
  MR_bool succeeded;
  MR_Word Cast_HeadVar1_3 = HeadVar__1_1;
  MR_Word Cast_HeadVar2_4 = HeadVar__2_2;

  succeeded = mercury__builtin__unify_2_p_0((MR_Word) (&parse_tree__source_file_map_scalar_common_1[0]), ((MR_Box) (Cast_HeadVar1_3)), ((MR_Box) (Cast_HeadVar2_4)));
  return succeeded;
}

static void MR_CALL 
parse_tree__source_file_map__unsafe_set_maybe_source_file_map_1_p_0(
  MR_Word X_1)
{
{
#define MR_PROC_LABEL parse_tree__source_file_map__unsafe_set_maybe_source_file_map_1_p_0

	MR_Word X;

	X = X_1 ;
		{
parse_tree__source_file_map__mutable_variable_maybe_source_file_map = X;


		;}
#undef MR_PROC_LABEL
}
}

static void MR_CALL 
parse_tree__source_file_map__unsafe_get_maybe_source_file_map_1_p_0(
  MR_Word * X_1)
{
{
#define MR_PROC_LABEL parse_tree__source_file_map__unsafe_get_maybe_source_file_map_1_p_0

	MR_Word X;

		{
X = parse_tree__source_file_map__mutable_variable_maybe_source_file_map;


		;}
#undef MR_PROC_LABEL
	*X_1  = X;
}
}

static void MR_CALL 
parse_tree__source_file_map__unlock_maybe_source_file_map_0_p_0(void)
{
{
#define MR_PROC_LABEL parse_tree__source_file_map__unlock_maybe_source_file_map_0_p_0


		{
#ifdef MR_THREAD_SAFE
  MR_UNLOCK(&parse_tree__source_file_map__mutable_variable_maybe_source_file_map_lock, "parse_tree__source_file_map__mutable_variable_maybe_source_file_map_lock");
#endif


		;}
#undef MR_PROC_LABEL
}
}

static void MR_CALL 
parse_tree__source_file_map__lock_maybe_source_file_map_0_p_0(void)
{
{
#define MR_PROC_LABEL parse_tree__source_file_map__lock_maybe_source_file_map_0_p_0


		{
#ifdef MR_THREAD_SAFE
  MR_LOCK(&parse_tree__source_file_map__mutable_variable_maybe_source_file_map_lock, "parse_tree__source_file_map__mutable_variable_maybe_source_file_map_lock");
#endif


		;}
#undef MR_PROC_LABEL
}
}

static void MR_CALL 
parse_tree__source_file_map__pre_initialise_mutable_maybe_source_file_map_0_p_0(void)
{
{
#define MR_PROC_LABEL parse_tree__source_file_map__pre_initialise_mutable_maybe_source_file_map_0_p_0


		{
#ifdef MR_THREAD_SAFE
   pthread_mutex_init(&parse_tree__source_file_map__mutable_variable_maybe_source_file_map_lock, MR_MUTEX_ATTR);
#endif


		;}
#undef MR_PROC_LABEL
}
}

static void MR_CALL 
parse_tree__source_file_map__initialise_mutable_maybe_source_file_map_0_p_0(void)
{
{
#define MR_PROC_LABEL parse_tree__source_file_map__initialise_mutable_maybe_source_file_map_0_p_0


		{
#ifdef MR_THREAD_SAFE
   pthread_mutex_init(&parse_tree__source_file_map__mutable_variable_maybe_source_file_map_lock, MR_MUTEX_ATTR);
#endif


		;}
#undef MR_PROC_LABEL
}
{
#define MR_PROC_LABEL parse_tree__source_file_map__initialise_mutable_maybe_source_file_map_0_p_0


		{
#ifdef MR_THREAD_SAFE
  MR_LOCK(&parse_tree__source_file_map__mutable_variable_maybe_source_file_map_lock, "parse_tree__source_file_map__mutable_variable_maybe_source_file_map_lock");
#endif


		;}
#undef MR_PROC_LABEL
}
{
#define MR_PROC_LABEL parse_tree__source_file_map__initialise_mutable_maybe_source_file_map_0_p_0

	MR_Word X;

	X = (MR_Word) ((MR_Unsigned) 0U) ;
		{
parse_tree__source_file_map__mutable_variable_maybe_source_file_map = X;


		;}
#undef MR_PROC_LABEL
}
{
#define MR_PROC_LABEL parse_tree__source_file_map__initialise_mutable_maybe_source_file_map_0_p_0


		{
#ifdef MR_THREAD_SAFE
  MR_UNLOCK(&parse_tree__source_file_map__mutable_variable_maybe_source_file_map_lock, "parse_tree__source_file_map__mutable_variable_maybe_source_file_map_lock");
#endif


		;}
#undef MR_PROC_LABEL
}
}

static void MR_CALL 
parse_tree__source_file_map__write_source_file_map_line_8_p_0(
  MR_Word ProgressStream_9,
  MR_Word MapFileStream_10,
  MR_Word Globals_11,
  MR_String FileName_12,
  MR_Word SeenModules0_13,
  MR_Word * SeenModules_14)
{
  MR_bool succeeded;
  MR_Word OpenRes_72;

  mercury__io__open_input_4_p_0(FileName_12, &OpenRes_72);
  if (((MR_tag((MR_Word) OpenRes_72)) == (MR_Integer) 1))
  {
    MR_Word Specs_22;
    MR_Word Error_75 = ((MR_Word) ((MR_hl_field(1, OpenRes_72, 0))));
    MR_String ErrorMsg_76;
    MR_String Progname_77;
    MR_Word Pieces_78;
    MR_Word Spec_79;
    MR_Word Var_83;
    MR_Word Var_84;
    MR_Word Var_85;
    MR_Word Var_87;
    MR_Word Var_90;
    MR_Word Var_91;
    MR_Word Var_92;
    MR_Word Var_95;
    MR_Word Var_96;

    ErrorMsg_76 = mercury__io__error_message_1_f_0(Error_75);
    mercury__io__progname_base_4_p_0((MR_String) "mercury_compile", &Progname_77);
    {
      Var_83 = (MR_Word) MR_mkword(2, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(2, Var_83, 0) = ((MR_Box) (Progname_77));
    }
    Var_85 = (MR_Word) (MR_mkword(3, &parse_tree__source_file_map_scalar_common_2[0]));
    {
      Var_91 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(3, Var_91, 0) = ((MR_Box) ((MR_Unsigned) 0U));
      MR_hl_field(3, Var_91, 1) = ((MR_Box) (FileName_12));
    }
    {
      Var_96 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(3, Var_96, 0) = ((MR_Box) ((MR_Unsigned) 9U));
      MR_hl_field(3, Var_96, 1) = ((MR_Box) (ErrorMsg_76));
    }
    {
      Var_95 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(1, Var_95, 0) = ((MR_Box) (Var_96));
      MR_hl_field(1, Var_95, 1) = ((MR_Box) (MR_mkword(1, &parse_tree__source_file_map_scalar_common_2[4])));
    }
    {
      Var_92 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(1, Var_92, 0) = ((MR_Box) (Var_85));
      MR_hl_field(1, Var_92, 1) = ((MR_Box) (Var_95));
    }
    {
      Var_90 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(1, Var_90, 0) = ((MR_Box) (Var_91));
      MR_hl_field(1, Var_90, 1) = ((MR_Box) (Var_92));
    }
    {
      Var_87 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(1, Var_87, 0) = ((MR_Box) (MR_mkword(3, &parse_tree__source_file_map_scalar_common_2[1])));
      MR_hl_field(1, Var_87, 1) = ((MR_Box) (Var_90));
    }
    {
      Var_84 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(1, Var_84, 0) = ((MR_Box) (Var_85));
      MR_hl_field(1, Var_84, 1) = ((MR_Box) (Var_87));
    }
    {
      Pieces_78 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(1, Pieces_78, 0) = ((MR_Box) (Var_83));
      MR_hl_field(1, Pieces_78, 1) = ((MR_Box) (Var_84));
    }
    {
      Spec_79 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(1, Spec_79, 0) = ((MR_Box) ((MR_String) "predicate \140parse_tree.source_file_map.find_name_of_module_in_file\'/4"));
      MR_hl_field(1, Spec_79, 1) = ((MR_Box) ((MR_Unsigned) 0U));
      MR_hl_field(1, Spec_79, 2) = ((MR_Box) ((MR_Unsigned) 16U));
      MR_hl_field(1, Spec_79, 3) = ((MR_Box) (Pieces_78));
    }
    {
      Specs_22 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(1, Specs_22, 0) = ((MR_Box) (Spec_79));
      MR_hl_field(1, Specs_22, 1) = ((MR_Box) ((MR_Unsigned) 0U));
    }
    parse_tree__write_error_spec__write_error_specs_5_p_0(ProgressStream_9, Globals_11, Specs_22);
    *SeenModules_14 = SeenModules0_13;
  }
  else
  {
    MR_Word FileStream_73 = ((MR_Word) ((MR_hl_field(0, OpenRes_72, 0))));
    MR_Word MaybeModuleName_105;

    parse_tree__parse_module__peek_at_file_6_p_0(FileStream_73, FileName_12, (MR_Word) ((MR_Unsigned) 0U), &MaybeModuleName_105);
    mercury__io__close_input_3_p_0(FileStream_73);
    if (((MR_tag((MR_Word) MaybeModuleName_105)) == (MR_Integer) 0))
    {
      MR_Word Specs_103 = ((MR_Word) ((MR_hl_field(0, MaybeModuleName_105, 0))));

      parse_tree__write_error_spec__write_error_specs_5_p_0(ProgressStream_9, Globals_11, Specs_103);
      *SeenModules_14 = SeenModules0_13;
    }
    else
    {
      MR_Word ModuleName_17 = ((MR_Word) ((MR_hl_field(1, MaybeModuleName_105, 0))));
      MR_String PartialFileName_20;
      MR_Word DefaultModuleName_21;
      MR_String Var_41;
      MR_String PrevFileName_18;
      MR_Box conv0_PrevFileName_18;
      MR_String PartialFileName0_19;
      MR_String Var_42;
      MR_String Var_55;

      succeeded = mercury__bimap__search_3_p_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), (MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), SeenModules0_13, ((MR_Box) (ModuleName_17)), &conv0_PrevFileName_18);
      if (succeeded)
      {
        PrevFileName_18 = ((MR_String) (conv0_PrevFileName_18));
        succeeded = MR_TRUE;
      }
      if (succeeded)
      {
        succeeded = (strcmp(PrevFileName_18, FileName_12) == 0);
        succeeded = !(succeeded);
      }
      if (succeeded)
      {
        MR_String Var_32;

        Var_32 = mdbcomp__sym_name__sym_name_to_string_1_f_0(ModuleName_17);
        mercury__io__write_string_4_p_0(ProgressStream_9, (MR_String) "mercury_compile: module \140");
        mercury__io__write_string_4_p_0(ProgressStream_9, Var_32);
        mercury__io__write_string_4_p_0(ProgressStream_9, (MR_String) "\' defined in multiple files: ");
        mercury__io__write_string_4_p_0(ProgressStream_9, PrevFileName_18);
        mercury__io__write_string_4_p_0(ProgressStream_9, (MR_String) ", ");
        mercury__io__write_string_4_p_0(ProgressStream_9, FileName_12);
        mercury__io__write_string_4_p_0(ProgressStream_9, (MR_String) "\n.");
        mercury__io__set_exit_status_3_p_0((MR_Integer) 1);
        *SeenModules_14 = SeenModules0_13;
      }
      else
        mercury__bimap__set_4_p_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), (MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), ((MR_Box) (ModuleName_17)), ((MR_Box) (FileName_12)), SeenModules0_13, SeenModules_14);
      succeeded = mercury__string__remove_suffix_3_p_0(FileName_12, (MR_String) ".m", &PartialFileName0_19);
      if (succeeded)
        PartialFileName_20 = PartialFileName0_19;
      else
        PartialFileName_20 = FileName_12;
      Var_41 = mercury__dir__det_basename_1_f_0(PartialFileName_20);
      parse_tree__file_names__file_name_to_module_name_2_p_0(Var_41, &DefaultModuleName_21);
      Var_42 = mercury__dir__dirname_1_f_0(PartialFileName_20);
      Var_55 = mercury__dir__this_directory_0_f_0();
      succeeded = (strcmp(Var_42, Var_55) == 0);
      if (succeeded)
        succeeded = mdbcomp__sym_name____Unify____sym_name_0_0(ModuleName_17, DefaultModuleName_21);
      if (!(succeeded))
      {
        MR_String Var_47;

        Var_47 = parse_tree__parse_tree_out_sym_name__escaped_sym_name_to_string_1_f_0(ModuleName_17);
        mercury__io__write_string_4_p_0(MapFileStream_10, Var_47);
        mercury__io__write_string_4_p_0(MapFileStream_10, (MR_String) "\t");
        mercury__io__write_string_4_p_0(MapFileStream_10, FileName_12);
        mercury__io__write_string_4_p_0(MapFileStream_10, (MR_String) "\n");
      }
    }
  }
}

void MR_CALL 
parse_tree__source_file_map__lookup_source_file_module_4_p_0(
  MR_String FileName_5,
  MR_Word * MaybeModuleName_6)
{
  MR_bool succeeded;
  MR_Word SourceFileMap_8;
  MR_Word MaybeSourceFileMap0_18;
  MR_Word ModuleName_9;
  MR_Box conv0_ModuleName_9;

{
#define MR_PROC_LABEL parse_tree__source_file_map__lookup_source_file_module_4_p_0


		{
#ifdef MR_THREAD_SAFE
  MR_LOCK(&parse_tree__source_file_map__mutable_variable_maybe_source_file_map_lock, "parse_tree__source_file_map__mutable_variable_maybe_source_file_map_lock");
#endif


		;}
#undef MR_PROC_LABEL
}
{
#define MR_PROC_LABEL parse_tree__source_file_map__lookup_source_file_module_4_p_0

	MR_Word X;

		{
X = parse_tree__source_file_map__mutable_variable_maybe_source_file_map;


		;}
#undef MR_PROC_LABEL
	MaybeSourceFileMap0_18  = X;
}
{
#define MR_PROC_LABEL parse_tree__source_file_map__lookup_source_file_module_4_p_0


		{
#ifdef MR_THREAD_SAFE
  MR_UNLOCK(&parse_tree__source_file_map__mutable_variable_maybe_source_file_map_lock, "parse_tree__source_file_map__mutable_variable_maybe_source_file_map_lock");
#endif


		;}
#undef MR_PROC_LABEL
}
  if ((MaybeSourceFileMap0_18 == (MR_Word) ((MR_Unsigned) 0U)))
  {
    MR_Word ReadResult_21;
    MR_Word Var_29;

    mercury__io__read_named_file_as_lines_4_p_0((MR_String) "Mercury.modules", &ReadResult_21);
    if (((MR_tag((MR_Word) ReadResult_21)) == (MR_Integer) 1))
      mercury__bimap__init_1_p_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), (MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), &SourceFileMap_8);
    else
    {
      MR_Word FileLines_22 = ((MR_Word) ((MR_hl_field(0, ReadResult_21, 0))));
      MR_String ErrorMsg_23;
      MR_Word SourceFileMap1_24;
      MR_Word SourceFileMap0_30;

      mercury__bimap__init_1_p_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), (MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), &SourceFileMap0_30);
      parse_tree__source_file_map__parse_source_file_map_6_p_0(FileLines_22, (MR_String) "Mercury.modules", (MR_Integer) 1, &ErrorMsg_23, SourceFileMap0_30, &SourceFileMap1_24);
      succeeded = (strcmp(ErrorMsg_23, (MR_String) "") == 0);
      if (succeeded)
        SourceFileMap_8 = SourceFileMap1_24;
      else
        mercury__bimap__init_1_p_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), (MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), &SourceFileMap_8);
    }
    {
      Var_29 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(1, Var_29, 0) = ((MR_Box) (SourceFileMap_8));
    }
{
#define MR_PROC_LABEL parse_tree__source_file_map__lookup_source_file_module_4_p_0


		{
#ifdef MR_THREAD_SAFE
  MR_LOCK(&parse_tree__source_file_map__mutable_variable_maybe_source_file_map_lock, "parse_tree__source_file_map__mutable_variable_maybe_source_file_map_lock");
#endif


		;}
#undef MR_PROC_LABEL
}
{
#define MR_PROC_LABEL parse_tree__source_file_map__lookup_source_file_module_4_p_0

	MR_Word X;

	X = Var_29 ;
		{
parse_tree__source_file_map__mutable_variable_maybe_source_file_map = X;


		;}
#undef MR_PROC_LABEL
}
{
#define MR_PROC_LABEL parse_tree__source_file_map__lookup_source_file_module_4_p_0


		{
#ifdef MR_THREAD_SAFE
  MR_UNLOCK(&parse_tree__source_file_map__mutable_variable_maybe_source_file_map_lock, "parse_tree__source_file_map__mutable_variable_maybe_source_file_map_lock");
#endif


		;}
#undef MR_PROC_LABEL
}
  }
  else
    SourceFileMap_8 = ((MR_Word) ((MR_hl_field(1, MaybeSourceFileMap0_18, 0))));
  succeeded = mercury__bimap__reverse_search_3_p_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), (MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), SourceFileMap_8, &conv0_ModuleName_9, ((MR_Box) (FileName_5)));
  if (succeeded)
  {
    ModuleName_9 = ((MR_Word) (conv0_ModuleName_9));
    succeeded = MR_TRUE;
  }
  if (succeeded)
    {
      MR_Word base;
      base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
      *MaybeModuleName_6 = base;
      MR_hl_field(1, base, 0) = ((MR_Box) (ModuleName_9));
    }
  else
  {
    MR_Word DefaultModuleName_10;
    MR_String FileNameBeforeDotM_35;

    succeeded = mercury__string__remove_suffix_3_p_0(FileName_5, (MR_String) ".m", &FileNameBeforeDotM_35);
    if (succeeded)
    {
      parse_tree__file_names__file_name_to_module_name_2_p_0(FileNameBeforeDotM_35, &DefaultModuleName_10);
      succeeded = MR_TRUE;
    }
    if (succeeded)
    {
      MR_Box conv1_Var_11;

      succeeded = mercury__bimap__search_3_p_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), (MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), SourceFileMap_8, ((MR_Box) (DefaultModuleName_10)), &conv1_Var_11);
      if (succeeded)
        succeeded = MR_TRUE;
      if (succeeded)
        *MaybeModuleName_6 = (MR_Word) ((MR_Unsigned) 0U);
      else
        {
          MR_Word base;
          base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
          *MaybeModuleName_6 = base;
          MR_hl_field(1, base, 0) = ((MR_Box) (DefaultModuleName_10));
        }
    }
    else
      *MaybeModuleName_6 = (MR_Word) ((MR_Unsigned) 0U);
  }
}

void MR_CALL 
parse_tree__source_file_map__lookup_module_source_file_4_p_0(
  MR_Word ModuleName_5,
  MR_Word * MaybeFileName_6)
{
  MR_bool succeeded;
  MR_Word SourceFileMap_8;
  MR_Word MaybeSourceFileMap0_18;
  MR_String FileName_9;
  MR_Box conv0_FileName_9;

{
#define MR_PROC_LABEL parse_tree__source_file_map__lookup_module_source_file_4_p_0


		{
#ifdef MR_THREAD_SAFE
  MR_LOCK(&parse_tree__source_file_map__mutable_variable_maybe_source_file_map_lock, "parse_tree__source_file_map__mutable_variable_maybe_source_file_map_lock");
#endif


		;}
#undef MR_PROC_LABEL
}
{
#define MR_PROC_LABEL parse_tree__source_file_map__lookup_module_source_file_4_p_0

	MR_Word X;

		{
X = parse_tree__source_file_map__mutable_variable_maybe_source_file_map;


		;}
#undef MR_PROC_LABEL
	MaybeSourceFileMap0_18  = X;
}
{
#define MR_PROC_LABEL parse_tree__source_file_map__lookup_module_source_file_4_p_0


		{
#ifdef MR_THREAD_SAFE
  MR_UNLOCK(&parse_tree__source_file_map__mutable_variable_maybe_source_file_map_lock, "parse_tree__source_file_map__mutable_variable_maybe_source_file_map_lock");
#endif


		;}
#undef MR_PROC_LABEL
}
  if ((MaybeSourceFileMap0_18 == (MR_Word) ((MR_Unsigned) 0U)))
  {
    MR_Word ReadResult_21;
    MR_Word Var_29;

    mercury__io__read_named_file_as_lines_4_p_0((MR_String) "Mercury.modules", &ReadResult_21);
    if (((MR_tag((MR_Word) ReadResult_21)) == (MR_Integer) 1))
      mercury__bimap__init_1_p_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), (MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), &SourceFileMap_8);
    else
    {
      MR_Word FileLines_22 = ((MR_Word) ((MR_hl_field(0, ReadResult_21, 0))));
      MR_String ErrorMsg_23;
      MR_Word SourceFileMap1_24;
      MR_Word SourceFileMap0_30;

      mercury__bimap__init_1_p_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), (MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), &SourceFileMap0_30);
      parse_tree__source_file_map__parse_source_file_map_6_p_0(FileLines_22, (MR_String) "Mercury.modules", (MR_Integer) 1, &ErrorMsg_23, SourceFileMap0_30, &SourceFileMap1_24);
      succeeded = (strcmp(ErrorMsg_23, (MR_String) "") == 0);
      if (succeeded)
        SourceFileMap_8 = SourceFileMap1_24;
      else
        mercury__bimap__init_1_p_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), (MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), &SourceFileMap_8);
    }
    {
      Var_29 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(1, Var_29, 0) = ((MR_Box) (SourceFileMap_8));
    }
{
#define MR_PROC_LABEL parse_tree__source_file_map__lookup_module_source_file_4_p_0


		{
#ifdef MR_THREAD_SAFE
  MR_LOCK(&parse_tree__source_file_map__mutable_variable_maybe_source_file_map_lock, "parse_tree__source_file_map__mutable_variable_maybe_source_file_map_lock");
#endif


		;}
#undef MR_PROC_LABEL
}
{
#define MR_PROC_LABEL parse_tree__source_file_map__lookup_module_source_file_4_p_0

	MR_Word X;

	X = Var_29 ;
		{
parse_tree__source_file_map__mutable_variable_maybe_source_file_map = X;


		;}
#undef MR_PROC_LABEL
}
{
#define MR_PROC_LABEL parse_tree__source_file_map__lookup_module_source_file_4_p_0


		{
#ifdef MR_THREAD_SAFE
  MR_UNLOCK(&parse_tree__source_file_map__mutable_variable_maybe_source_file_map_lock, "parse_tree__source_file_map__mutable_variable_maybe_source_file_map_lock");
#endif


		;}
#undef MR_PROC_LABEL
}
  }
  else
    SourceFileMap_8 = ((MR_Word) ((MR_hl_field(1, MaybeSourceFileMap0_18, 0))));
  succeeded = mercury__bimap__search_3_p_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), (MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), SourceFileMap_8, ((MR_Box) (ModuleName_5)), &conv0_FileName_9);
  if (succeeded)
  {
    FileName_9 = ((MR_String) (conv0_FileName_9));
    succeeded = MR_TRUE;
  }
  if (succeeded)
    {
      MR_Word base;
      base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
      *MaybeFileName_6 = base;
      MR_hl_field(1, base, 0) = ((MR_Box) (FileName_9));
    }
  else
  {
    MR_String DefaultFileName_10;
    MR_String Var_35;
    MR_Box conv1_Var_11;

    Var_35 = mdbcomp__sym_name__sym_name_to_string_1_f_0(ModuleName_5);
    DefaultFileName_10 = mercury__string__f_43_43_2_f_0(Var_35, (MR_String) ".m");
    succeeded = mercury__bimap__reverse_search_3_p_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), (MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), SourceFileMap_8, &conv1_Var_11, ((MR_Box) (DefaultFileName_10)));
    if (succeeded)
      succeeded = MR_TRUE;
    if (succeeded)
      *MaybeFileName_6 = (MR_Word) ((MR_Unsigned) 0U);
    else
      {
        MR_Word base;
        base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
        *MaybeFileName_6 = base;
        MR_hl_field(1, base, 0) = ((MR_Box) (DefaultFileName_10));
      }
  }
}

void MR_CALL 
parse_tree__source_file_map__have_source_file_map_3_p_0(
  MR_Word * HaveMap_4)
{
  MR_bool succeeded;
  MR_Word SourceFileMap_6;
  MR_Word MaybeSourceFileMap0_11;

{
#define MR_PROC_LABEL parse_tree__source_file_map__have_source_file_map_3_p_0


		{
#ifdef MR_THREAD_SAFE
  MR_LOCK(&parse_tree__source_file_map__mutable_variable_maybe_source_file_map_lock, "parse_tree__source_file_map__mutable_variable_maybe_source_file_map_lock");
#endif


		;}
#undef MR_PROC_LABEL
}
{
#define MR_PROC_LABEL parse_tree__source_file_map__have_source_file_map_3_p_0

	MR_Word X;

		{
X = parse_tree__source_file_map__mutable_variable_maybe_source_file_map;


		;}
#undef MR_PROC_LABEL
	MaybeSourceFileMap0_11  = X;
}
{
#define MR_PROC_LABEL parse_tree__source_file_map__have_source_file_map_3_p_0


		{
#ifdef MR_THREAD_SAFE
  MR_UNLOCK(&parse_tree__source_file_map__mutable_variable_maybe_source_file_map_lock, "parse_tree__source_file_map__mutable_variable_maybe_source_file_map_lock");
#endif


		;}
#undef MR_PROC_LABEL
}
  if ((MaybeSourceFileMap0_11 == (MR_Word) ((MR_Unsigned) 0U)))
  {
    MR_Word ReadResult_14;
    MR_Word Var_22;

    mercury__io__read_named_file_as_lines_4_p_0((MR_String) "Mercury.modules", &ReadResult_14);
    if (((MR_tag((MR_Word) ReadResult_14)) == (MR_Integer) 1))
      mercury__bimap__init_1_p_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), (MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), &SourceFileMap_6);
    else
    {
      MR_Word FileLines_15 = ((MR_Word) ((MR_hl_field(0, ReadResult_14, 0))));
      MR_String ErrorMsg_16;
      MR_Word SourceFileMap1_17;
      MR_Word SourceFileMap0_23;

      mercury__bimap__init_1_p_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), (MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), &SourceFileMap0_23);
      parse_tree__source_file_map__parse_source_file_map_6_p_0(FileLines_15, (MR_String) "Mercury.modules", (MR_Integer) 1, &ErrorMsg_16, SourceFileMap0_23, &SourceFileMap1_17);
      succeeded = (strcmp(ErrorMsg_16, (MR_String) "") == 0);
      if (succeeded)
        SourceFileMap_6 = SourceFileMap1_17;
      else
        mercury__bimap__init_1_p_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), (MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), &SourceFileMap_6);
    }
    {
      Var_22 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(1, Var_22, 0) = ((MR_Box) (SourceFileMap_6));
    }
{
#define MR_PROC_LABEL parse_tree__source_file_map__have_source_file_map_3_p_0


		{
#ifdef MR_THREAD_SAFE
  MR_LOCK(&parse_tree__source_file_map__mutable_variable_maybe_source_file_map_lock, "parse_tree__source_file_map__mutable_variable_maybe_source_file_map_lock");
#endif


		;}
#undef MR_PROC_LABEL
}
{
#define MR_PROC_LABEL parse_tree__source_file_map__have_source_file_map_3_p_0

	MR_Word X;

	X = Var_22 ;
		{
parse_tree__source_file_map__mutable_variable_maybe_source_file_map = X;


		;}
#undef MR_PROC_LABEL
}
{
#define MR_PROC_LABEL parse_tree__source_file_map__have_source_file_map_3_p_0


		{
#ifdef MR_THREAD_SAFE
  MR_UNLOCK(&parse_tree__source_file_map__mutable_variable_maybe_source_file_map_lock, "parse_tree__source_file_map__mutable_variable_maybe_source_file_map_lock");
#endif


		;}
#undef MR_PROC_LABEL
}
  }
  else
    SourceFileMap_6 = ((MR_Word) ((MR_hl_field(1, MaybeSourceFileMap0_11, 0))));
  succeeded = mercury__bimap__is_empty_1_p_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), (MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), SourceFileMap_6);
  if (succeeded)
    *HaveMap_4 = (MR_Integer) 0;
  else
    *HaveMap_4 = (MR_Integer) 1;
}

static void MR_CALL 
parse_tree__source_file_map__parse_source_file_map_6_p_0(
  MR_Word Lines_7,
  MR_String ModulesFileName_8,
  MR_Integer CurLineNumber_9,
  MR_String * ErrorMsg_10,
  MR_Word STATE_VARIABLE_SourceFileMap_0_19,
  MR_Word * STATE_VARIABLE_SourceFileMap_20)
{
  while (MR_TRUE)
  {
    MR_bool succeeded;

    // setup for model_det tailcalls optimized into a loop
    ;
    if ((Lines_7 == (MR_Word) ((MR_Unsigned) 0U)))
    {
      *ErrorMsg_10 = (MR_String) "";
      *STATE_VARIABLE_SourceFileMap_20 = STATE_VARIABLE_SourceFileMap_0_19;
    }
    else
    {
      MR_String HeadLine_12 = ((MR_String) ((MR_hl_field(1, Lines_7, 0))));
      MR_Word TailLines_13 = ((MR_Word) ((MR_hl_field(1, Lines_7, 1))));
      MR_Integer TabIndex_14;

      succeeded = mercury__string__sub_string_search_3_p_0(HeadLine_12, (MR_String) "\t", &TabIndex_14);
      if (succeeded)
      {
        MR_Integer LineLength_15;
        MR_String ModuleNameStr_16;
        MR_String FileName_17;
        MR_Word ModuleName_18;
        MR_Integer Var_23;
        MR_Word STATE_VARIABLE_SourceFileMap_1_25;
        MR_Integer Var_26;
        MR_Word next_value_of_Lines_7;
        MR_Integer next_value_of_CurLineNumber_9;
        MR_Word next_value_of_STATE_VARIABLE_SourceFileMap_0_19;

        mercury__string__length_2_p_0(HeadLine_12, &LineLength_15);
        mercury__string__unsafe_between_4_p_0(HeadLine_12, (MR_Integer) 0, TabIndex_14, &ModuleNameStr_16);
        Var_23 = (MR_Integer) ((MR_Unsigned) TabIndex_14 + (MR_Unsigned) 1);
        mercury__string__unsafe_between_4_p_0(HeadLine_12, Var_23, LineLength_15, &FileName_17);
        ModuleName_18 = mdbcomp__sym_name__string_to_sym_name_1_f_0(ModuleNameStr_16);
        mercury__bimap__set_4_p_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), (MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), ((MR_Box) (ModuleName_18)), ((MR_Box) (FileName_17)), STATE_VARIABLE_SourceFileMap_0_19, &STATE_VARIABLE_SourceFileMap_1_25);
        Var_26 = (MR_Integer) ((MR_Unsigned) CurLineNumber_9 + (MR_Unsigned) 1);
        // direct tailcall eliminated
        ;
        next_value_of_Lines_7 = TailLines_13;
        next_value_of_CurLineNumber_9 = Var_26;
        next_value_of_STATE_VARIABLE_SourceFileMap_0_19 = STATE_VARIABLE_SourceFileMap_1_25;
        Lines_7 = next_value_of_Lines_7;
        CurLineNumber_9 = next_value_of_CurLineNumber_9;
        STATE_VARIABLE_SourceFileMap_0_19 = next_value_of_STATE_VARIABLE_SourceFileMap_0_19;
        continue;
      }
      else
      {
        MR_String Var_38;
        MR_String Var_40;
        MR_String Var_41;
        MR_String Var_48;

        Var_38 = mercury__string__f_43_43_2_f_0(ModulesFileName_8, (MR_String) " is missing a tab character");
        Var_40 = mercury__string__f_43_43_2_f_0((MR_String) " of ", Var_38);
        mercury__string__format__format_signed_int_component_nowidth_noprec_3_p_0((MR_Word) (&parse_tree__source_file_map_scalar_common_3[0]), CurLineNumber_9, &Var_41);
        Var_48 = mercury__string__f_43_43_2_f_0(Var_41, Var_40);
        *ErrorMsg_10 = mercury__string__f_43_43_2_f_0((MR_String) "line ", Var_48);
        *STATE_VARIABLE_SourceFileMap_20 = STATE_VARIABLE_SourceFileMap_0_19;
      }
    }
    break;
  }
}

static void MR_CALL 
parse_tree__source_file_map__write_source_file_map_5_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3,
  MR_Box wrapper_arg_4,
  MR_Box * wrapper_arg_5)
{
  MR_Box closure = closure_arg;
  MR_Word conv0_SeenModules_14;

  parse_tree__source_file_map__write_source_file_map_line_8_p_0(((MR_Word) ((MR_hl_field(0, closure, 3)))), ((MR_Word) ((MR_hl_field(0, closure, 4)))), ((MR_Word) ((MR_hl_field(0, closure, 5)))), ((MR_String) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), &conv0_SeenModules_14);
  *wrapper_arg_3 = ((MR_Box) (conv0_SeenModules_14));
}

void MR_CALL 
parse_tree__source_file_map__write_source_file_map_5_p_0(
  MR_Word ProgressStream_6,
  MR_Word Globals_7,
  MR_Word FileNames_8)
{
  MR_Word MapFileResult_11;

  mercury__io__open_output_4_p_0((MR_String) "Mercury.modules", &MapFileResult_11);
  if (((MR_tag((MR_Word) MapFileResult_11)) == (MR_Integer) 1))
  {
    MR_Word Error_14 = ((MR_Word) ((MR_hl_field(1, MapFileResult_11, 0))));
    MR_Word StdErr_15;
    MR_String Var_30;

    mercury__io__stderr_stream_3_p_0(&StdErr_15);
    Var_30 = mercury__io__error_message_1_f_0(Error_14);
    mercury__io__write_string_4_p_0(StdErr_15, (MR_String) "mercury_compile: error opening \140");
    mercury__io__write_string_4_p_0(StdErr_15, (MR_String) "Mercury.modules");
    mercury__io__write_string_4_p_0(StdErr_15, (MR_String) "\' for output: ");
    mercury__io__write_string_4_p_0(StdErr_15, Var_30);
    mercury__io__set_exit_status_3_p_0((MR_Integer) 1);
  }
  else
  {
    MR_Word MapFileStream_12 = ((MR_Word) ((MR_hl_field(0, MapFileResult_11, 0))));
    MR_Word Var_19;
    MR_Word Var_20;
    MR_Box conv2_Var_13;
    MR_Box conv1_STATE_VARIABLE_IO_2_21;

    {
      Var_19 = (MR_Word) MR_new_object(MR_Word, (6 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(0, Var_19, 0) = ((MR_Box) (&parse_tree__source_file_map_scalar_common_4[0]));
      MR_hl_field(0, Var_19, 1) = ((MR_Box) (parse_tree__source_file_map__write_source_file_map_5_p_0_1));
      MR_hl_field(0, Var_19, 2) = ((MR_Box) ((MR_Integer) 3));
      MR_hl_field(0, Var_19, 3) = ((MR_Box) (ProgressStream_6));
      MR_hl_field(0, Var_19, 4) = ((MR_Box) (MapFileStream_12));
      MR_hl_field(0, Var_19, 5) = ((MR_Box) (Globals_7));
    }
    Var_20 = mercury__bimap__init_0_f_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), (MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0));
    mercury__list__foldl2_6_p_2((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), (MR_Word) (&parse_tree__source_file_map_scalar_common_1[0]), (MR_Word) (&mercury__io__io__type_ctor_info_state_0), Var_19, FileNames_8, ((MR_Box) (Var_20)), &conv2_Var_13, ((MR_Box) ((MR_Integer) 0)), &conv1_STATE_VARIABLE_IO_2_21);
    mercury__io__close_output_3_p_0(MapFileStream_12);
  }
}

MR_String MR_CALL 
parse_tree__source_file_map__default_source_file_name_1_f_0(
  MR_Word ModuleName_3)
{
  MR_String HeadVar__2_2;
  MR_String Var_4;

  Var_4 = mdbcomp__sym_name__sym_name_to_string_1_f_0(ModuleName_3);
  HeadVar__2_2 = mercury__string__f_43_43_2_f_0(Var_4, (MR_String) ".m");
  return HeadVar__2_2;
}

static MR_bool MR_CALL 
parse_tree__source_file_map____Unify____source_file_map_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  MR_bool succeeded;

  succeeded = parse_tree__source_file_map____Unify____source_file_map_0_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
  return succeeded;
}

static void MR_CALL 
parse_tree__source_file_map____Compare____source_file_map_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  MR_Word conv0_HeadVar__1_1;

  parse_tree__source_file_map____Compare____source_file_map_0_0(&conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
  *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
}

void mercury__parse_tree__source_file_map__init(void)
{
}

void mercury__parse_tree__source_file_map__init_type_tables(void)
{
  static MR_bool initialised = MR_FALSE;
  if (initialised) return;
  initialised = MR_TRUE;

  MR_register_type_ctor_info(&parse_tree__source_file_map__parse_tree__source_file_map__type_ctor_info_source_file_map_0);
}

void mercury__parse_tree__source_file_map__init_debugger(void)
{
  MR_fatal_error("debugger initialization in MLDS grade");
}

void mercury__parse_tree__source_file_map__required_init(void)
{
  parse_tree__source_file_map__user_init_pred_39_0();
}

// Ensure everything is compiled with the same grade.
const char *mercury__parse_tree__source_file_map__grade_check(void)
{
  return &MR_GRADE_VAR;
}

// :- end_module parse_tree.source_file_map.
