/*
** Automatically generated from `source_file_map.m'
** by the Mercury compiler,
** version rotd-2026-04-22
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
#include "require.mih"
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
#include "mdbcomp.feedback.feedback_info.mih"




static const MR_FA_PseudoTypeInfo_Struct2 parse_tree__source_file_map__bimap__pti_bimap_2__plain_mdbcomp__sym_name__type_ctor_info_sym_name_0__plain_builtin__type_ctor_info_string_0;

static const MR_FA_PseudoTypeInfo_Struct1 parse_tree__source_file_map__cord__pti_cord_1__plain_builtin__type_ctor_info_string_0;

static const MR_FA_PseudoTypeInfo_Struct1 parse_tree__source_file_map__list__pti_list_1__plain_parse_tree__error_spec__type_ctor_info_error_spec_0;

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
parse_tree__source_file_map__acc_source_file_map_line_9_p_0(
  MR_String FileName_10,
  MR_Word Mn2FnMap0_11,
  MR_Word * Mn2FnMap_12,
  MR_Word STATE_VARIABLE_MapFileLineCord_0_27,
  MR_Word * STATE_VARIABLE_MapFileLineCord_28,
  MR_Word STATE_VARIABLE_Specs_0_29,
  MR_Word * STATE_VARIABLE_Specs_30);

static void MR_CALL 
parse_tree__source_file_map__get_source_file_map_3_p_0(
  MR_Word * SourceFileMap_4);

static void MR_CALL 
parse_tree__source_file_map__parse_source_file_map_7_p_0(
  MR_Word Lines_8,
  MR_String ModulesFileName_9,
  MR_Integer CurLineNumber_10,
  MR_Word STATE_VARIABLE_ErrorMsgCord_0_22,
  MR_Word * STATE_VARIABLE_ErrorMsgCord_23,
  MR_Word STATE_VARIABLE_SourceFileMap_0_24,
  MR_Word * STATE_VARIABLE_SourceFileMap_25);

static void MR_CALL 
parse_tree__source_file_map__write_source_file_map_5_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3,
  MR_Box wrapper_arg_4,
  MR_Box * wrapper_arg_5,
  MR_Box wrapper_arg_6,
  MR_Box * wrapper_arg_7,
  MR_Box wrapper_arg_8,
  MR_Box * wrapper_arg_9);

static MR_bool MR_CALL 
parse_tree__source_file_map____Unify____source_file_map_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2);

static void MR_CALL 
parse_tree__source_file_map____Compare____source_file_map_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3);


static /* final */ const MR_Box parse_tree__source_file_map_scalar_common_1[2][3];

static /* final */ const MR_Box parse_tree__source_file_map_scalar_common_2[20][2];

static /* final */ const MR_Box parse_tree__source_file_map_scalar_common_3[1][1];

static /* final */ const MR_Box parse_tree__source_file_map_scalar_common_4[1][12];




static /* final */ const MR_Box parse_tree__source_file_map_scalar_common_1[2][3] = {
  /* row   0 */
  {
    ((MR_Box) (&mercury__bimap__bimap__type_ctor_info_bimap_2)),
    ((MR_Box) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_string_0))
  },
  /* row   1 */
  {
    ((MR_Box) (&parse_tree__source_file_map_scalar_common_4[0])),
    ((MR_Box) (parse_tree__source_file_map__write_source_file_map_5_p_0_1)),
    ((MR_Box) ((MR_Integer) 0))
  },
};

static /* final */ const MR_Box parse_tree__source_file_map_scalar_common_2[20][2] = {
  /* row   0 */
  {
    ((MR_Box) (&mercury__cord__cord__type_ctor_info_cord_1)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_string_0))
  },
  /* row   1 */
  {
    ((MR_Box) (&mercury__list__list__type_ctor_info_list_1)),
    ((MR_Box) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_error_spec_0))
  },
  /* row   2 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 8U)),
    ((MR_Box) ((MR_String) ":"))
  },
  /* row   3 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 9U)),
    ((MR_Box) ((MR_String) "error opening"))
  },
  /* row   4 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 9U)),
    ((MR_Box) ((MR_String) "for output:"))
  },
  /* row   5 */
  {
    ((MR_Box) ((MR_Unsigned) 12U)),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row   6 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 8U)),
    ((MR_Box) ((MR_String) "."))
  },
  /* row   7 */
  {
    ((MR_Box) (MR_mkword(3, &parse_tree__source_file_map_scalar_common_2[6]))),
    ((MR_Box) (MR_mkword(1, &parse_tree__source_file_map_scalar_common_2[5])))
  },
  /* row   8 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 9U)),
    ((MR_Box) ((MR_String) "cannot find out which file contains"))
  },
  /* row   9 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 9U)),
    ((MR_Box) ((MR_String) "module"))
  },
  /* row  10 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 8U)),
    ((MR_Box) ((MR_String) ","))
  },
  /* row  11 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 9U)),
    ((MR_Box) ((MR_String) "because its name does not appear in Mercury.modules,"))
  },
  /* row  12 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 9U)),
    ((MR_Box) ((MR_String) "and the file whose name is the default file name"))
  },
  /* row  13 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 9U)),
    ((MR_Box) ((MR_String) "for this module name, i.e."))
  },
  /* row  14 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 9U)),
    ((MR_Box) ((MR_String) "is recorded in Mercury.options"))
  },
  /* row  15 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 9U)),
    ((MR_Box) ((MR_String) "as containing a different module, namely"))
  },
  /* row  16 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 9U)),
    ((MR_Box) ((MR_String) "mercury_compile: the files named"))
  },
  /* row  17 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 9U)),
    ((MR_Box) ((MR_String) "and"))
  },
  /* row  18 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 9U)),
    ((MR_Box) ((MR_String) "both contain the same module,"))
  },
  /* row  19 */
  {
    ((MR_Box) ((MR_Unsigned) 0U)),
    ((MR_Box) ((MR_String) "Mercury.modules"))
  },
};

static /* final */ const MR_Box parse_tree__source_file_map_scalar_common_3[1][1] = {
  /* row   0 */
  { (MR_Box) (((((MR_Unsigned) 0U << 4)) | (((((MR_Unsigned) 0U << 3)) | (((((MR_Unsigned) 0U << 2)) | (((MR_Unsigned) 0U << 1)))))))) },
};

static /* final */ const MR_Box parse_tree__source_file_map_scalar_common_4[1][12] = {
  /* row   0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 9)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_string_0)),
    ((MR_Box) (&parse_tree__source_file_map__bimap__pti_bimap_2__plain_mdbcomp__sym_name__type_ctor_info_sym_name_0__plain_builtin__type_ctor_info_string_0)),
    ((MR_Box) (&parse_tree__source_file_map__bimap__pti_bimap_2__plain_mdbcomp__sym_name__type_ctor_info_sym_name_0__plain_builtin__type_ctor_info_string_0)),
    ((MR_Box) (&parse_tree__source_file_map__cord__pti_cord_1__plain_builtin__type_ctor_info_string_0)),
    ((MR_Box) (&parse_tree__source_file_map__cord__pti_cord_1__plain_builtin__type_ctor_info_string_0)),
    ((MR_Box) (&parse_tree__source_file_map__list__pti_list_1__plain_parse_tree__error_spec__type_ctor_info_error_spec_0)),
    ((MR_Box) (&parse_tree__source_file_map__list__pti_list_1__plain_parse_tree__error_spec__type_ctor_info_error_spec_0)),
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
#line 337 "source_file_map.m"
MR_Word parse_tree__source_file_map__mutable_variable_maybe_source_file_map;
#ifdef MR_THREAD_SAFE
    MercuryLock parse_tree__source_file_map__mutable_variable_maybe_source_file_map_lock;
#endif


#line 337 "source_file_map.m"
void 
parse_tree__source_file_map__user_init_pred_41_0(void)
#line 337 "source_file_map.m"
{
#line 337 "source_file_map.m"
	parse_tree__source_file_map__initialise_mutable_maybe_source_file_map_0_p_0();
}


static const MR_FA_PseudoTypeInfo_Struct2 parse_tree__source_file_map__bimap__pti_bimap_2__plain_mdbcomp__sym_name__type_ctor_info_sym_name_0__plain_builtin__type_ctor_info_string_0 = {
  &mercury__bimap__bimap__type_ctor_info_bimap_2,
  {
    (MR_PseudoTypeInfo) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0),
    (MR_PseudoTypeInfo) (&mercury__builtin__builtin__type_ctor_info_string_0)
  }
};

static const MR_FA_PseudoTypeInfo_Struct1 parse_tree__source_file_map__cord__pti_cord_1__plain_builtin__type_ctor_info_string_0 = {
  &mercury__cord__cord__type_ctor_info_cord_1,
  { (MR_PseudoTypeInfo) (&mercury__builtin__builtin__type_ctor_info_string_0) }
};

static const MR_FA_PseudoTypeInfo_Struct1 parse_tree__source_file_map__list__pti_list_1__plain_parse_tree__error_spec__type_ctor_info_error_spec_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  { (MR_PseudoTypeInfo) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_error_spec_0) }
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
parse_tree__source_file_map__acc_source_file_map_line_9_p_0(
  MR_String FileName_10,
  MR_Word Mn2FnMap0_11,
  MR_Word * Mn2FnMap_12,
  MR_Word STATE_VARIABLE_MapFileLineCord_0_27,
  MR_Word * STATE_VARIABLE_MapFileLineCord_28,
  MR_Word STATE_VARIABLE_Specs_0_29,
  MR_Word * STATE_VARIABLE_Specs_30)
{
  MR_bool succeeded;
  MR_Box conv0_Var_16;

  succeeded = mercury__bimap__reverse_search_3_p_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), (MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), Mn2FnMap0_11, &conv0_Var_16, ((MR_Box) (FileName_10)));
  if (succeeded)
    succeeded = MR_TRUE;
  if (succeeded)
  {
    *Mn2FnMap_12 = Mn2FnMap0_11;
    *STATE_VARIABLE_Specs_30 = STATE_VARIABLE_Specs_0_29;
    *STATE_VARIABLE_MapFileLineCord_28 = STATE_VARIABLE_MapFileLineCord_0_27;
  }
  else
  {
    MR_Word OpenRes_82;

    mercury__io__open_input_4_p_0(FileName_10, &OpenRes_82);
    if (((MR_tag((MR_Word) OpenRes_82)) == (MR_Integer) 1))
    {
      MR_Word MnSpecs_26;
      MR_Word Error_85 = ((MR_Word) ((MR_hl_field(1, OpenRes_82, 0))));
      MR_String ErrorMsg_86;
      MR_String Progname_87;
      MR_Word Pieces_88;
      MR_Word Spec_89;
      MR_Word Var_93;
      MR_Word Var_94;
      MR_Word Var_95;
      MR_Word Var_97;
      MR_Word Var_100;
      MR_Word Var_101;
      MR_Word Var_102;
      MR_Word Var_105;
      MR_Word Var_106;

      ErrorMsg_86 = mercury__io__error_message_1_f_0(Error_85);
      mercury__io__progname_base_4_p_0((MR_String) "mercury_compile", &Progname_87);
      {
        Var_93 = (MR_Word) MR_mkword(2, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(2, Var_93, 0) = ((MR_Box) (Progname_87));
      }
      Var_95 = (MR_Word) (MR_mkword(3, &parse_tree__source_file_map_scalar_common_2[2]));
      {
        Var_101 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(3, Var_101, 0) = ((MR_Box) ((MR_Unsigned) 0U));
        MR_hl_field(3, Var_101, 1) = ((MR_Box) (FileName_10));
      }
      {
        Var_106 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(3, Var_106, 0) = ((MR_Box) ((MR_Unsigned) 9U));
        MR_hl_field(3, Var_106, 1) = ((MR_Box) (ErrorMsg_86));
      }
      {
        Var_105 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(1, Var_105, 0) = ((MR_Box) (Var_106));
        MR_hl_field(1, Var_105, 1) = ((MR_Box) (MR_mkword(1, &parse_tree__source_file_map_scalar_common_2[7])));
      }
      {
        Var_102 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(1, Var_102, 0) = ((MR_Box) (Var_95));
        MR_hl_field(1, Var_102, 1) = ((MR_Box) (Var_105));
      }
      {
        Var_100 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(1, Var_100, 0) = ((MR_Box) (Var_101));
        MR_hl_field(1, Var_100, 1) = ((MR_Box) (Var_102));
      }
      {
        Var_97 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(1, Var_97, 0) = ((MR_Box) (MR_mkword(3, &parse_tree__source_file_map_scalar_common_2[3])));
        MR_hl_field(1, Var_97, 1) = ((MR_Box) (Var_100));
      }
      {
        Var_94 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(1, Var_94, 0) = ((MR_Box) (Var_95));
        MR_hl_field(1, Var_94, 1) = ((MR_Box) (Var_97));
      }
      {
        Pieces_88 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(1, Pieces_88, 0) = ((MR_Box) (Var_93));
        MR_hl_field(1, Pieces_88, 1) = ((MR_Box) (Var_94));
      }
      {
        Spec_89 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(1, Spec_89, 0) = ((MR_Box) ((MR_String) "predicate \140parse_tree.source_file_map.find_name_of_module_in_file\'/4"));
        MR_hl_field(1, Spec_89, 1) = ((MR_Box) ((MR_Unsigned) 0U));
        MR_hl_field(1, Spec_89, 2) = ((MR_Box) ((MR_Unsigned) 16U));
        MR_hl_field(1, Spec_89, 3) = ((MR_Box) (Pieces_88));
      }
      {
        MnSpecs_26 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(1, MnSpecs_26, 0) = ((MR_Box) (Spec_89));
        MR_hl_field(1, MnSpecs_26, 1) = ((MR_Box) ((MR_Unsigned) 0U));
      }
      *Mn2FnMap_12 = Mn2FnMap0_11;
      *STATE_VARIABLE_Specs_30 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_error_spec_0), STATE_VARIABLE_Specs_0_29, MnSpecs_26);
      *STATE_VARIABLE_MapFileLineCord_28 = STATE_VARIABLE_MapFileLineCord_0_27;
    }
    else
    {
      MR_Word FileStream_83 = ((MR_Word) ((MR_hl_field(0, OpenRes_82, 0))));
      MR_Word MaybeModuleName_117;

      parse_tree__parse_module__peek_at_file_6_p_0(FileStream_83, FileName_10, (MR_Word) ((MR_Unsigned) 0U), &MaybeModuleName_117);
      mercury__io__close_input_3_p_0(FileStream_83);
      if (((MR_tag((MR_Word) MaybeModuleName_117)) == (MR_Integer) 0))
      {
        MR_Word MnSpecs_113 = ((MR_Word) ((MR_hl_field(0, MaybeModuleName_117, 0))));

        *Mn2FnMap_12 = Mn2FnMap0_11;
        *STATE_VARIABLE_Specs_30 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_error_spec_0), STATE_VARIABLE_Specs_0_29, MnSpecs_113);
        *STATE_VARIABLE_MapFileLineCord_28 = STATE_VARIABLE_MapFileLineCord_0_27;
      }
      else
      {
        MR_Word ModuleName_18 = ((MR_Word) ((MR_hl_field(1, MaybeModuleName_117, 0))));
        MR_String PartialFileName_23;
        MR_Word DefaultModuleName_24;
        MR_String Var_59;
        MR_String PrevFileName_19;
        MR_Box conv1_PrevFileName_19;
        MR_String PartialFileName0_22;
        MR_String Var_60;
        MR_String Var_76;

        succeeded = mercury__bimap__search_3_p_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), (MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), Mn2FnMap0_11, ((MR_Box) (ModuleName_18)), &conv1_PrevFileName_19);
        if (succeeded)
        {
          PrevFileName_19 = ((MR_String) (conv1_PrevFileName_19));
          succeeded = MR_TRUE;
        }
        if (succeeded)
        {
          MR_Word Pieces_20;
          MR_Word Spec_21;
          MR_Word Var_36;
          MR_Word Var_37;
          MR_Word Var_38;
          MR_Word Var_41;
          MR_Word Var_42;
          MR_Word Var_43;
          MR_Word Var_46;
          MR_Word Var_47;

          {
            Var_37 = (MR_Word) MR_mkword(2, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(2, Var_37, 0) = ((MR_Box) (PrevFileName_19));
          }
          {
            Var_42 = (MR_Word) MR_mkword(2, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(2, Var_42, 0) = ((MR_Box) (FileName_10));
          }
          {
            Var_47 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(3, Var_47, 0) = ((MR_Box) ((MR_Unsigned) 11U));
            MR_hl_field(3, Var_47, 1) = ((MR_Box) (ModuleName_18));
          }
          {
            Var_46 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(1, Var_46, 0) = ((MR_Box) (Var_47));
            MR_hl_field(1, Var_46, 1) = ((MR_Box) (MR_mkword(1, &parse_tree__source_file_map_scalar_common_2[7])));
          }
          {
            Var_43 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(1, Var_43, 0) = ((MR_Box) (MR_mkword(3, &parse_tree__source_file_map_scalar_common_2[18])));
            MR_hl_field(1, Var_43, 1) = ((MR_Box) (Var_46));
          }
          {
            Var_41 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(1, Var_41, 0) = ((MR_Box) (Var_42));
            MR_hl_field(1, Var_41, 1) = ((MR_Box) (Var_43));
          }
          {
            Var_38 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(1, Var_38, 0) = ((MR_Box) (MR_mkword(3, &parse_tree__source_file_map_scalar_common_2[17])));
            MR_hl_field(1, Var_38, 1) = ((MR_Box) (Var_41));
          }
          {
            Var_36 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(1, Var_36, 0) = ((MR_Box) (Var_37));
            MR_hl_field(1, Var_36, 1) = ((MR_Box) (Var_38));
          }
          {
            Pieces_20 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(1, Pieces_20, 0) = ((MR_Box) (MR_mkword(3, &parse_tree__source_file_map_scalar_common_2[16])));
            MR_hl_field(1, Pieces_20, 1) = ((MR_Box) (Var_36));
          }
          {
            Spec_21 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(1, Spec_21, 0) = ((MR_Box) ((MR_String) "predicate \140parse_tree.source_file_map.acc_source_file_map_line\'/9"));
            MR_hl_field(1, Spec_21, 1) = ((MR_Box) ((MR_Unsigned) 0U));
            MR_hl_field(1, Spec_21, 2) = ((MR_Box) ((MR_Unsigned) 16U));
            MR_hl_field(1, Spec_21, 3) = ((MR_Box) (Pieces_20));
          }
          {
            MR_Word base;
            base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            *STATE_VARIABLE_Specs_30 = base;
            MR_hl_field(1, base, 0) = ((MR_Box) (Spec_21));
            MR_hl_field(1, base, 1) = ((MR_Box) (STATE_VARIABLE_Specs_0_29));
          }
          *Mn2FnMap_12 = Mn2FnMap0_11;
        }
        else
        {
          mercury__bimap__det_insert_4_p_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), (MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), ((MR_Box) (ModuleName_18)), ((MR_Box) (FileName_10)), Mn2FnMap0_11, Mn2FnMap_12);
          *STATE_VARIABLE_Specs_30 = STATE_VARIABLE_Specs_0_29;
        }
        succeeded = mercury__string__remove_suffix_3_p_0(FileName_10, (MR_String) ".m", &PartialFileName0_22);
        if (succeeded)
          PartialFileName_23 = PartialFileName0_22;
        else
          PartialFileName_23 = FileName_10;
        Var_59 = mercury__dir__det_basename_1_f_0(PartialFileName_23);
        parse_tree__file_names__file_name_to_module_name_2_p_0(Var_59, &DefaultModuleName_24);
        Var_60 = mercury__dir__dirname_1_f_0(PartialFileName_23);
        Var_76 = mercury__dir__this_directory_0_f_0();
        succeeded = (strcmp(Var_60, Var_76) == 0);
        if (succeeded)
          succeeded = mdbcomp__sym_name____Unify____sym_name_0_0(ModuleName_18, DefaultModuleName_24);
        if (succeeded)
          *STATE_VARIABLE_MapFileLineCord_28 = STATE_VARIABLE_MapFileLineCord_0_27;
        else
        {
          MR_String MapFileLine_25;
          MR_String Var_64;
          MR_String Var_78;
          MR_String Var_80;

          Var_64 = parse_tree__parse_tree_out_sym_name__escaped_sym_name_to_string_1_f_0(ModuleName_18);
          Var_78 = mercury__string__f_43_43_2_f_0(FileName_10, (MR_String) "\n");
          Var_80 = mercury__string__f_43_43_2_f_0((MR_String) "\t", Var_78);
          MapFileLine_25 = mercury__string__f_43_43_2_f_0(Var_64, Var_80);
          mercury__cord__snoc_3_p_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), ((MR_Box) (MapFileLine_25)), STATE_VARIABLE_MapFileLineCord_0_27, STATE_VARIABLE_MapFileLineCord_28);
        }
      }
    }
  }
}

void MR_CALL 
parse_tree__source_file_map__lookup_source_file_maybe_module_4_p_0(
  MR_String FileName_5,
  MR_Word * MaybeModuleName_6)
{
  MR_bool succeeded;
  MR_Word SourceFileMap_8;
  MR_Word ModuleName_9;
  MR_Box conv0_ModuleName_9;

  parse_tree__source_file_map__get_source_file_map_3_p_0(&SourceFileMap_8);
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
    MR_String FileNameBeforeDotM_18;

    succeeded = mercury__string__remove_suffix_3_p_0(FileName_5, (MR_String) ".m", &FileNameBeforeDotM_18);
    if (succeeded)
    {
      parse_tree__file_names__file_name_to_module_name_2_p_0(FileNameBeforeDotM_18, &DefaultModuleName_10);
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
  MR_String * FileName_6)
{
  MR_bool succeeded;
  MR_Word SourceFileMap_8;
  MR_String FileNamePrime_9;
  MR_Box conv0_FileNamePrime_9;

  parse_tree__source_file_map__get_source_file_map_3_p_0(&SourceFileMap_8);
  succeeded = mercury__bimap__search_3_p_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), (MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), SourceFileMap_8, ((MR_Box) (ModuleName_5)), &conv0_FileNamePrime_9);
  if (succeeded)
  {
    FileNamePrime_9 = ((MR_String) (conv0_FileNamePrime_9));
    succeeded = MR_TRUE;
  }
  if (succeeded)
    *FileName_6 = FileNamePrime_9;
  else
  {
    MR_String DefaultFileName_10;
    MR_String Var_70;
    MR_Word Other_11;
    MR_Box conv1_Other_11;

    Var_70 = mdbcomp__sym_name__sym_name_to_string_1_f_0(ModuleName_5);
    DefaultFileName_10 = mercury__string__f_43_43_2_f_0(Var_70, (MR_String) ".m");
    succeeded = mercury__bimap__reverse_search_3_p_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), (MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), SourceFileMap_8, &conv1_Other_11, ((MR_Box) (DefaultFileName_10)));
    if (succeeded)
    {
      Other_11 = ((MR_Word) (conv1_Other_11));
      succeeded = MR_TRUE;
    }
    if (succeeded)
    {
      MR_String Progname_12;
      MR_Word Pieces_13;
      MR_Word ErrorLines_14;
      MR_String ErrorStr_15;
      MR_Word Var_21;
      MR_Word Var_22;
      MR_Word Var_25;
      MR_Word Var_28;
      MR_Word Var_31;
      MR_Word Var_32;
      MR_Word Var_33;
      MR_Word Var_34;
      MR_Word Var_36;
      MR_Word Var_39;
      MR_Word Var_42;
      MR_Word Var_45;
      MR_Word Var_46;
      MR_Word Var_47;
      MR_Word Var_50;
      MR_Word Var_53;
      MR_Word Var_56;
      MR_Word Var_57;

      mercury__io__progname_base_4_p_0((MR_String) "mercury_compile", &Progname_12);
      {
        Var_21 = (MR_Word) MR_mkword(2, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(2, Var_21, 0) = ((MR_Box) (Progname_12));
      }
      {
        Var_32 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(3, Var_32, 0) = ((MR_Box) ((MR_Unsigned) 11U));
        MR_hl_field(3, Var_32, 1) = ((MR_Box) (ModuleName_5));
      }
      Var_34 = (MR_Word) (MR_mkword(3, &parse_tree__source_file_map_scalar_common_2[10]));
      {
        Var_46 = (MR_Word) MR_mkword(2, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(2, Var_46, 0) = ((MR_Box) (DefaultFileName_10));
      }
      {
        Var_57 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(3, Var_57, 0) = ((MR_Box) ((MR_Unsigned) 11U));
        MR_hl_field(3, Var_57, 1) = ((MR_Box) (Other_11));
      }
      {
        Var_56 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(1, Var_56, 0) = ((MR_Box) (Var_57));
        MR_hl_field(1, Var_56, 1) = ((MR_Box) (MR_mkword(1, &parse_tree__source_file_map_scalar_common_2[7])));
      }
      {
        Var_53 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(1, Var_53, 0) = ((MR_Box) (MR_mkword(3, &parse_tree__source_file_map_scalar_common_2[15])));
        MR_hl_field(1, Var_53, 1) = ((MR_Box) (Var_56));
      }
      {
        Var_50 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(1, Var_50, 0) = ((MR_Box) (MR_mkword(3, &parse_tree__source_file_map_scalar_common_2[14])));
        MR_hl_field(1, Var_50, 1) = ((MR_Box) (Var_53));
      }
      {
        Var_47 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(1, Var_47, 0) = ((MR_Box) (Var_34));
        MR_hl_field(1, Var_47, 1) = ((MR_Box) (Var_50));
      }
      {
        Var_45 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(1, Var_45, 0) = ((MR_Box) (Var_46));
        MR_hl_field(1, Var_45, 1) = ((MR_Box) (Var_47));
      }
      {
        Var_42 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(1, Var_42, 0) = ((MR_Box) (MR_mkword(3, &parse_tree__source_file_map_scalar_common_2[13])));
        MR_hl_field(1, Var_42, 1) = ((MR_Box) (Var_45));
      }
      {
        Var_39 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(1, Var_39, 0) = ((MR_Box) (MR_mkword(3, &parse_tree__source_file_map_scalar_common_2[12])));
        MR_hl_field(1, Var_39, 1) = ((MR_Box) (Var_42));
      }
      {
        Var_36 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(1, Var_36, 0) = ((MR_Box) (MR_mkword(3, &parse_tree__source_file_map_scalar_common_2[11])));
        MR_hl_field(1, Var_36, 1) = ((MR_Box) (Var_39));
      }
      {
        Var_33 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(1, Var_33, 0) = ((MR_Box) (Var_34));
        MR_hl_field(1, Var_33, 1) = ((MR_Box) (Var_36));
      }
      {
        Var_31 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(1, Var_31, 0) = ((MR_Box) (Var_32));
        MR_hl_field(1, Var_31, 1) = ((MR_Box) (Var_33));
      }
      {
        Var_28 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(1, Var_28, 0) = ((MR_Box) (MR_mkword(3, &parse_tree__source_file_map_scalar_common_2[9])));
        MR_hl_field(1, Var_28, 1) = ((MR_Box) (Var_31));
      }
      {
        Var_25 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(1, Var_25, 0) = ((MR_Box) (MR_mkword(3, &parse_tree__source_file_map_scalar_common_2[8])));
        MR_hl_field(1, Var_25, 1) = ((MR_Box) (Var_28));
      }
      {
        Var_22 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(1, Var_22, 0) = ((MR_Box) (MR_mkword(3, &parse_tree__source_file_map_scalar_common_2[2])));
        MR_hl_field(1, Var_22, 1) = ((MR_Box) (Var_25));
      }
      {
        Pieces_13 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(1, Pieces_13, 0) = ((MR_Box) (Var_21));
        MR_hl_field(1, Pieces_13, 1) = ((MR_Box) (Var_22));
      }
      ErrorLines_14 = parse_tree__write_error_spec__error_pieces_to_std_lines_1_f_0(Pieces_13);
      ErrorStr_15 = parse_tree__write_error_spec__error_lines_to_multi_line_string_2_f_0((MR_String) "", ErrorLines_14);
      {
        mercury__require__unexpected_2_p_0((MR_String) "predicate \140parse_tree.source_file_map.lookup_module_source_file\'/4", ErrorStr_15);
        return;
      }
    }
    else
      *FileName_6 = DefaultFileName_10;
  }
}

void MR_CALL 
parse_tree__source_file_map__have_source_file_map_3_p_0(
  MR_Word * HaveMap_4)
{
  MR_bool succeeded;
  MR_Word SourceFileMap_6;

  parse_tree__source_file_map__get_source_file_map_3_p_0(&SourceFileMap_6);
  succeeded = mercury__bimap__is_empty_1_p_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), (MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), SourceFileMap_6);
  if (succeeded)
    *HaveMap_4 = (MR_Integer) 0;
  else
    *HaveMap_4 = (MR_Integer) 1;
}

static void MR_CALL 
parse_tree__source_file_map__get_source_file_map_3_p_0(
  MR_Word * SourceFileMap_4)
{
  MR_Word MaybeSourceFileMap0_6;

{
#define MR_PROC_LABEL parse_tree__source_file_map__get_source_file_map_3_p_0


		{
#ifdef MR_THREAD_SAFE
  MR_LOCK(&parse_tree__source_file_map__mutable_variable_maybe_source_file_map_lock, "parse_tree__source_file_map__mutable_variable_maybe_source_file_map_lock");
#endif


		;}
#undef MR_PROC_LABEL
}
{
#define MR_PROC_LABEL parse_tree__source_file_map__get_source_file_map_3_p_0

	MR_Word X;

		{
X = parse_tree__source_file_map__mutable_variable_maybe_source_file_map;


		;}
#undef MR_PROC_LABEL
	MaybeSourceFileMap0_6  = X;
}
{
#define MR_PROC_LABEL parse_tree__source_file_map__get_source_file_map_3_p_0


		{
#ifdef MR_THREAD_SAFE
  MR_UNLOCK(&parse_tree__source_file_map__mutable_variable_maybe_source_file_map_lock, "parse_tree__source_file_map__mutable_variable_maybe_source_file_map_lock");
#endif


		;}
#undef MR_PROC_LABEL
}
  if ((MaybeSourceFileMap0_6 == (MR_Word) ((MR_Unsigned) 0U)))
  {
    MR_Word ReadResult_9;
    MR_Word Var_28;

    mercury__io__read_named_file_as_lines_4_p_0((MR_String) "Mercury.modules", &ReadResult_9);
    if (((MR_tag((MR_Word) ReadResult_9)) == (MR_Integer) 1))
      mercury__bimap__init_1_p_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), (MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), SourceFileMap_4);
    else
    {
      MR_Word FileLines_10 = ((MR_Word) ((MR_hl_field(0, ReadResult_9, 0))));
      MR_Word ErrorMsgCord_11;
      MR_Word SourceFileMap1_12;
      MR_Word ErrorMsgs_13;
      MR_Word Var_23;
      MR_Word SourceFileMap0_30;

      mercury__bimap__init_1_p_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), (MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), &SourceFileMap0_30);
      Var_23 = mercury__cord__init_0_f_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0));
      parse_tree__source_file_map__parse_source_file_map_7_p_0(FileLines_10, (MR_String) "Mercury.modules", (MR_Integer) 1, Var_23, &ErrorMsgCord_11, SourceFileMap0_30, &SourceFileMap1_12);
      ErrorMsgs_13 = mercury__cord__list_1_f_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), ErrorMsgCord_11);
      if ((ErrorMsgs_13 == (MR_Word) ((MR_Unsigned) 0U)))
        *SourceFileMap_4 = SourceFileMap1_12;
      else
      {
        MR_Word StdErr_16;

        mercury__bimap__init_1_p_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), (MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), SourceFileMap_4);
        mercury__io__stderr_stream_3_p_0(&StdErr_16);
        mercury__io__write_strings_4_p_0(StdErr_16, ErrorMsgs_13);
        mercury__io__write_string_4_p_0(StdErr_16, (MR_String) "You need to rebuild Mercury.modules.\n");
      }
    }
    {
      Var_28 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(1, Var_28, 0) = ((MR_Box) (*SourceFileMap_4));
    }
{
#define MR_PROC_LABEL parse_tree__source_file_map__get_source_file_map_3_p_0


		{
#ifdef MR_THREAD_SAFE
  MR_LOCK(&parse_tree__source_file_map__mutable_variable_maybe_source_file_map_lock, "parse_tree__source_file_map__mutable_variable_maybe_source_file_map_lock");
#endif


		;}
#undef MR_PROC_LABEL
}
{
#define MR_PROC_LABEL parse_tree__source_file_map__get_source_file_map_3_p_0

	MR_Word X;

	X = Var_28 ;
		{
parse_tree__source_file_map__mutable_variable_maybe_source_file_map = X;


		;}
#undef MR_PROC_LABEL
}
{
#define MR_PROC_LABEL parse_tree__source_file_map__get_source_file_map_3_p_0


		{
#ifdef MR_THREAD_SAFE
  MR_UNLOCK(&parse_tree__source_file_map__mutable_variable_maybe_source_file_map_lock, "parse_tree__source_file_map__mutable_variable_maybe_source_file_map_lock");
#endif


		;}
#undef MR_PROC_LABEL
}
  }
  else
    *SourceFileMap_4 = ((MR_Word) ((MR_hl_field(1, MaybeSourceFileMap0_6, 0))));
}

static void MR_CALL 
parse_tree__source_file_map__parse_source_file_map_7_p_0(
  MR_Word Lines_8,
  MR_String ModulesFileName_9,
  MR_Integer CurLineNumber_10,
  MR_Word STATE_VARIABLE_ErrorMsgCord_0_22,
  MR_Word * STATE_VARIABLE_ErrorMsgCord_23,
  MR_Word STATE_VARIABLE_SourceFileMap_0_24,
  MR_Word * STATE_VARIABLE_SourceFileMap_25)
{
  while (MR_TRUE)
  {
    MR_bool succeeded;

    // setup for model_det tailcalls optimized into a loop
    ;
    if ((Lines_8 == (MR_Word) ((MR_Unsigned) 0U)))
    {
      *STATE_VARIABLE_ErrorMsgCord_23 = STATE_VARIABLE_ErrorMsgCord_0_22;
      *STATE_VARIABLE_SourceFileMap_25 = STATE_VARIABLE_SourceFileMap_0_24;
    }
    else
    {
      MR_String HeadLine_13 = ((MR_String) ((MR_hl_field(1, Lines_8, 0))));
      MR_Word TailLines_14 = ((MR_Word) ((MR_hl_field(1, Lines_8, 1))));
      MR_Integer TabIndex_15;

      succeeded = mercury__string__sub_string_search_3_p_0(HeadLine_13, (MR_String) "\t", &TabIndex_15);
      if (succeeded)
      {
        MR_Integer LineLength_16;
        MR_String ModuleNameStr_17;
        MR_String FileName_18;
        MR_Word ModuleName_19;
        MR_Integer Var_28;
        MR_Word STATE_VARIABLE_ErrorMsgCord_1_47;
        MR_Word STATE_VARIABLE_SourceFileMap_2_48;
        MR_Integer Var_49;
        MR_Word STATE_VARIABLE_SourceFileMap_1_30;
        MR_Word next_value_of_Lines_8;
        MR_Integer next_value_of_CurLineNumber_10;
        MR_Word next_value_of_STATE_VARIABLE_ErrorMsgCord_0_22;
        MR_Word next_value_of_STATE_VARIABLE_SourceFileMap_0_24;

        mercury__string__length_2_p_0(HeadLine_13, &LineLength_16);
        mercury__string__unsafe_between_4_p_0(HeadLine_13, (MR_Integer) 0, TabIndex_15, &ModuleNameStr_17);
        Var_28 = (MR_Integer) ((MR_Unsigned) TabIndex_15 + (MR_Unsigned) 1);
        mercury__string__unsafe_between_4_p_0(HeadLine_13, Var_28, LineLength_16, &FileName_18);
        ModuleName_19 = mdbcomp__sym_name__string_to_sym_name_1_f_0(ModuleNameStr_17);
        succeeded = mercury__bimap__insert_4_p_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), (MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), ((MR_Box) (ModuleName_19)), ((MR_Box) (FileName_18)), STATE_VARIABLE_SourceFileMap_0_24, &STATE_VARIABLE_SourceFileMap_1_30);
        if (succeeded)
        {
          STATE_VARIABLE_SourceFileMap_2_48 = STATE_VARIABLE_SourceFileMap_1_30;
          STATE_VARIABLE_ErrorMsgCord_1_47 = STATE_VARIABLE_ErrorMsgCord_0_22;
        }
        else
        {
          MR_String ErrorMsg_21;
          MR_Box conv0_Var_20;

          succeeded = mercury__bimap__search_3_p_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), (MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), STATE_VARIABLE_SourceFileMap_0_24, ((MR_Box) (ModuleName_19)), &conv0_Var_20);
          if (succeeded)
            succeeded = MR_TRUE;
          if (succeeded)
          {
            MR_String Var_68;
            MR_String Var_70;
            MR_String Var_71;
            MR_String Var_78;

            Var_68 = mercury__string__f_43_43_2_f_0(ModulesFileName_9, (MR_String) " duplicates an existing module name\n");
            Var_70 = mercury__string__f_43_43_2_f_0((MR_String) " of ", Var_68);
            mercury__string__format__format_signed_int_component_nowidth_noprec_3_p_0((MR_Word) (&parse_tree__source_file_map_scalar_common_3[0]), CurLineNumber_10, &Var_71);
            Var_78 = mercury__string__f_43_43_2_f_0(Var_71, Var_70);
            ErrorMsg_21 = mercury__string__f_43_43_2_f_0((MR_String) "line ", Var_78);
          }
          else
          {
            MR_String Var_81;
            MR_String Var_83;
            MR_String Var_84;
            MR_String Var_91;

            Var_81 = mercury__string__f_43_43_2_f_0(ModulesFileName_9, (MR_String) " duplicates an existing file name\n");
            Var_83 = mercury__string__f_43_43_2_f_0((MR_String) " of ", Var_81);
            mercury__string__format__format_signed_int_component_nowidth_noprec_3_p_0((MR_Word) (&parse_tree__source_file_map_scalar_common_3[0]), CurLineNumber_10, &Var_84);
            Var_91 = mercury__string__f_43_43_2_f_0(Var_84, Var_83);
            ErrorMsg_21 = mercury__string__f_43_43_2_f_0((MR_String) "line ", Var_91);
          }
          mercury__cord__snoc_3_p_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), ((MR_Box) (ErrorMsg_21)), STATE_VARIABLE_ErrorMsgCord_0_22, &STATE_VARIABLE_ErrorMsgCord_1_47);
          STATE_VARIABLE_SourceFileMap_2_48 = STATE_VARIABLE_SourceFileMap_0_24;
        }
        Var_49 = (MR_Integer) ((MR_Unsigned) CurLineNumber_10 + (MR_Unsigned) 1);
        // direct tailcall eliminated
        ;
        next_value_of_Lines_8 = TailLines_14;
        next_value_of_CurLineNumber_10 = Var_49;
        next_value_of_STATE_VARIABLE_ErrorMsgCord_0_22 = STATE_VARIABLE_ErrorMsgCord_1_47;
        next_value_of_STATE_VARIABLE_SourceFileMap_0_24 = STATE_VARIABLE_SourceFileMap_2_48;
        Lines_8 = next_value_of_Lines_8;
        CurLineNumber_10 = next_value_of_CurLineNumber_10;
        STATE_VARIABLE_ErrorMsgCord_0_22 = next_value_of_STATE_VARIABLE_ErrorMsgCord_0_22;
        STATE_VARIABLE_SourceFileMap_0_24 = next_value_of_STATE_VARIABLE_SourceFileMap_0_24;
        continue;
      }
      else
      {
        MR_String ErrorMsg_60;
        MR_String Var_94;
        MR_String Var_96;
        MR_String Var_97;
        MR_String Var_104;

        Var_94 = mercury__string__f_43_43_2_f_0(ModulesFileName_9, (MR_String) " is missing a tab character\n");
        Var_96 = mercury__string__f_43_43_2_f_0((MR_String) " of ", Var_94);
        mercury__string__format__format_signed_int_component_nowidth_noprec_3_p_0((MR_Word) (&parse_tree__source_file_map_scalar_common_3[0]), CurLineNumber_10, &Var_97);
        Var_104 = mercury__string__f_43_43_2_f_0(Var_97, Var_96);
        ErrorMsg_60 = mercury__string__f_43_43_2_f_0((MR_String) "line ", Var_104);
        mercury__cord__snoc_3_p_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), ((MR_Box) (ErrorMsg_60)), STATE_VARIABLE_ErrorMsgCord_0_22, STATE_VARIABLE_ErrorMsgCord_23);
        *STATE_VARIABLE_SourceFileMap_25 = STATE_VARIABLE_SourceFileMap_0_24;
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
  MR_Box * wrapper_arg_5,
  MR_Box wrapper_arg_6,
  MR_Box * wrapper_arg_7,
  MR_Box wrapper_arg_8,
  MR_Box * wrapper_arg_9)
{
  MR_Box closure = closure_arg;
  MR_Word conv2_Mn2FnMap_12;
  MR_Word conv1_STATE_VARIABLE_MapFileLineCord_28;
  MR_Word conv0_STATE_VARIABLE_Specs_30;

  parse_tree__source_file_map__acc_source_file_map_line_9_p_0(((MR_String) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), &conv2_Mn2FnMap_12, ((MR_Word) (wrapper_arg_4)), &conv1_STATE_VARIABLE_MapFileLineCord_28, ((MR_Word) (wrapper_arg_6)), &conv0_STATE_VARIABLE_Specs_30);
  *wrapper_arg_3 = ((MR_Box) (conv2_Mn2FnMap_12));
  *wrapper_arg_5 = ((MR_Box) (conv1_STATE_VARIABLE_MapFileLineCord_28));
  *wrapper_arg_7 = ((MR_Box) (conv0_STATE_VARIABLE_Specs_30));
}

void MR_CALL 
parse_tree__source_file_map__write_source_file_map_5_p_0(
  MR_Word ErrorStream_6,
  MR_Word Globals_7,
  MR_Word FileNames_8)
{
  MR_Word MapFileLineCord_11;
  MR_Word Specs_12;
  MR_Word Var_27;
  MR_Word Var_28;
  MR_Box conv6_Var_10;
  MR_Box conv5_MapFileLineCord_11;
  MR_Box conv4_Specs_12;
  MR_Box conv3_STATE_VARIABLE_IO_1_30;

  Var_27 = mercury__bimap__init_0_f_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), (MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0));
  Var_28 = mercury__cord__init_0_f_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0));
  mercury__list__foldl4_10_p_2((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), (MR_Word) (&parse_tree__source_file_map_scalar_common_1[0]), (MR_Word) (&parse_tree__source_file_map_scalar_common_2[0]), (MR_Word) (&parse_tree__source_file_map_scalar_common_2[1]), (MR_Word) (&mercury__io__io__type_ctor_info_state_0), (MR_Word) (&parse_tree__source_file_map_scalar_common_1[1]), FileNames_8, ((MR_Box) (Var_27)), &conv6_Var_10, ((MR_Box) (Var_28)), &conv5_MapFileLineCord_11, ((MR_Box) ((MR_Unsigned) 0U)), &conv4_Specs_12, ((MR_Box) ((MR_Integer) 0)), &conv3_STATE_VARIABLE_IO_1_30);
  MapFileLineCord_11 = ((MR_Word) (conv5_MapFileLineCord_11));
  Specs_12 = ((MR_Word) (conv4_Specs_12));
  if ((Specs_12 == (MR_Word) ((MR_Unsigned) 0U)))
  {
    MR_Word ModulesFileResult_14;

    mercury__io__open_output_4_p_0((MR_String) "Mercury.modules", &ModulesFileResult_14);
    if (((MR_tag((MR_Word) ModulesFileResult_14)) == (MR_Integer) 1))
    {
      MR_Word Error_17 = ((MR_Word) ((MR_hl_field(1, ModulesFileResult_14, 0))));
      MR_String ErrorMsg_18;
      MR_String Progname_19;
      MR_Word Pieces_20;
      MR_Word Spec_21;
      MR_Word Var_36;
      MR_Word Var_37;
      MR_Word Var_40;
      MR_Word Var_43;
      MR_Word Var_45;
      MR_Word Var_48;
      MR_Word Var_49;

      ErrorMsg_18 = mercury__io__error_message_1_f_0(Error_17);
      mercury__io__progname_base_4_p_0((MR_String) "mercury_compile", &Progname_19);
      {
        Var_36 = (MR_Word) MR_mkword(2, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(2, Var_36, 0) = ((MR_Box) (Progname_19));
      }
      {
        Var_49 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(3, Var_49, 0) = ((MR_Box) ((MR_Unsigned) 9U));
        MR_hl_field(3, Var_49, 1) = ((MR_Box) (ErrorMsg_18));
      }
      {
        Var_48 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(1, Var_48, 0) = ((MR_Box) (Var_49));
        MR_hl_field(1, Var_48, 1) = ((MR_Box) (MR_mkword(1, &parse_tree__source_file_map_scalar_common_2[7])));
      }
      {
        Var_45 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(1, Var_45, 0) = ((MR_Box) (MR_mkword(3, &parse_tree__source_file_map_scalar_common_2[4])));
        MR_hl_field(1, Var_45, 1) = ((MR_Box) (Var_48));
      }
      {
        Var_43 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(1, Var_43, 0) = ((MR_Box) (MR_mkword(3, &parse_tree__source_file_map_scalar_common_2[19])));
        MR_hl_field(1, Var_43, 1) = ((MR_Box) (Var_45));
      }
      {
        Var_40 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(1, Var_40, 0) = ((MR_Box) (MR_mkword(3, &parse_tree__source_file_map_scalar_common_2[3])));
        MR_hl_field(1, Var_40, 1) = ((MR_Box) (Var_43));
      }
      {
        Var_37 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(1, Var_37, 0) = ((MR_Box) (MR_mkword(3, &parse_tree__source_file_map_scalar_common_2[2])));
        MR_hl_field(1, Var_37, 1) = ((MR_Box) (Var_40));
      }
      {
        Pieces_20 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(1, Pieces_20, 0) = ((MR_Box) (Var_36));
        MR_hl_field(1, Pieces_20, 1) = ((MR_Box) (Var_37));
      }
      {
        Spec_21 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(1, Spec_21, 0) = ((MR_Box) ((MR_String) "predicate \140parse_tree.source_file_map.write_source_file_map\'/5"));
        MR_hl_field(1, Spec_21, 1) = ((MR_Box) ((MR_Unsigned) 0U));
        MR_hl_field(1, Spec_21, 2) = ((MR_Box) ((MR_Unsigned) 16U));
        MR_hl_field(1, Spec_21, 3) = ((MR_Box) (Pieces_20));
      }
      parse_tree__write_error_spec__write_error_spec_5_p_0(ErrorStream_6, Globals_7, Spec_21);
    }
    else
    {
      MR_Word ModulesFileStream_15 = ((MR_Word) ((MR_hl_field(0, ModulesFileResult_14, 0))));
      MR_Word MapFileLines_16;

      MapFileLines_16 = mercury__cord__list_1_f_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), MapFileLineCord_11);
      mercury__io__write_strings_4_p_0(ModulesFileStream_15, MapFileLines_16);
      mercury__io__close_output_3_p_0(ModulesFileStream_15);
    }
  }
  else
    parse_tree__write_error_spec__write_error_specs_5_p_0(ErrorStream_6, Globals_7, Specs_12);
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
  parse_tree__source_file_map__user_init_pred_41_0();
}

// Ensure everything is compiled with the same grade.
const char *mercury__parse_tree__source_file_map__grade_check(void)
{
  return &MR_GRADE_VAR;
}

// :- end_module parse_tree.source_file_map.
