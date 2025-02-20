/*
** Automatically generated from `warn_unread_modules.m'
** by the Mercury compiler,
** version rotd-2025-02-20
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


// :- module parse_tree.warn_unread_modules.
// :- implementation.

/*
INIT mercury__parse_tree__warn_unread_modules__init
ENDINIT
*/

#include "parse_tree.warn_unread_modules.mih"


#include "array.mih"
#include "assoc_list.mih"
#include "bitmap.mih"
#include "bool.mih"
#include "builtin.mih"
#include "char.mih"
#include "construct.mih"
#include "cord.mih"
#include "deconstruct.mih"
#include "edit_seq.mih"
#include "enum.mih"
#include "getopt.mih"
#include "io.mih"
#include "libs.mih"
#include "list.mih"
#include "map.mih"
#include "maybe.mih"
#include "mdbcomp.mih"
#include "one_or_more.mih"
#include "pair.mih"
#include "parse_tree.mih"
#include "pretty_printer.mih"
#include "private_builtin.mih"
#include "set.mih"
#include "set_ordlist.mih"
#include "set_tree234.mih"
#include "stream.mih"
#include "string.mih"
#include "term.mih"
#include "term_context.mih"
#include "time.mih"
#include "tree234.mih"
#include "type_desc.mih"
#include "univ.mih"
#include "varset.mih"
#include "libs.file_util.mih"
#include "libs.globals.mih"
#include "libs.options.mih"
#include "mdbcomp.prim_data.mih"
#include "mdbcomp.sym_name.mih"
#include "parse_tree.error_spec.mih"
#include "parse_tree.prog_data.mih"
#include "parse_tree.prog_item.mih"
#include "parse_tree.var_table.mih"




static const MR_EnumFunctorDesc parse_tree__warn_unread_modules__parse_tree__warn_unread_modules__enum_functor_desc_parent_or_ancestor_0_0;

static const MR_EnumFunctorDesc parse_tree__warn_unread_modules__parse_tree__warn_unread_modules__enum_functor_desc_parent_or_ancestor_0_1;

static const MR_EnumFunctorDescPtr parse_tree__warn_unread_modules__parse_tree__warn_unread_modules__enum_ordinal_ordered_parent_or_ancestor_0[2];

static const MR_EnumFunctorDescPtr parse_tree__warn_unread_modules__parse_tree__warn_unread_modules__enum_name_ordered_parent_or_ancestor_0[2];

static const MR_Integer parse_tree__warn_unread_modules__parse_tree__warn_unread_modules__functor_number_map_parent_or_ancestor_0[2];

static void MR_CALL 
parse_tree__warn_unread_modules____Compare____parent_or_ancestor_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3);

static MR_bool MR_CALL 
parse_tree__warn_unread_modules____Unify____parent_or_ancestor_0_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2);

static MR_Word MR_CALL 
parse_tree__warn_unread_modules__wrap_module_name_1_f_0(
  MR_Word ModuleName_3);

static MR_Box MR_CALL 
parse_tree__warn_unread_modules__warn_about_any_unread_modules_with_read_ancestors_4_p_0_3(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1);

static MR_Box MR_CALL 
parse_tree__warn_unread_modules__warn_about_any_unread_modules_with_read_ancestors_4_p_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1);

static MR_Box MR_CALL 
parse_tree__warn_unread_modules__warn_about_any_unread_modules_with_read_ancestors_4_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1);

static void MR_CALL 
parse_tree__warn_unread_modules__find_read_ancestors_of_unread_modules_8_p_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word STATE_VARIABLE_Parents_0_3,
  MR_Word * STATE_VARIABLE_Parents_4,
  MR_Word STATE_VARIABLE_Ancestors_0_5,
  MR_Word * STATE_VARIABLE_Ancestors_6,
  MR_Word STATE_VARIABLE_BadUnreads_0_7,
  MR_Word * STATE_VARIABLE_BadUnreads_8);

static MR_bool MR_CALL 
parse_tree__warn_unread_modules__find_first_read_ancestor_5_p_0(
  MR_Word ReadModules_6,
  MR_Word Module_7,
  MR_Word CurPoA_8,
  MR_Word * AncestorModule_9,
  MR_Word * PoA_10);

static MR_bool MR_CALL 
parse_tree__warn_unread_modules____Unify____parent_or_ancestor_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2);

static void MR_CALL 
parse_tree__warn_unread_modules____Compare____parent_or_ancestor_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3);


static /* final */ const MR_Box parse_tree__warn_unread_modules_scalar_common_1[34][2];

static /* final */ const MR_Box parse_tree__warn_unread_modules_scalar_common_2[1][5];

static /* final */ const MR_Box parse_tree__warn_unread_modules_scalar_common_3[3][3];




static /* final */ const MR_Box parse_tree__warn_unread_modules_scalar_common_1[34][2] = {
  /* row   0 */
  {
    ((MR_Box) ((MR_Unsigned) 16U)),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row   1 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 36U)),
    ((MR_Box) ((MR_Integer) 1))
  },
  /* row   2 */
  {
    ((MR_Box) (MR_mkword(3, &parse_tree__warn_unread_modules_scalar_common_1[1]))),
    ((MR_Box) (MR_mkword(1, &parse_tree__warn_unread_modules_scalar_common_1[0])))
  },
  /* row   3 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 36U)),
    ((MR_Box) ((MR_Integer) -1))
  },
  /* row   4 */
  {
    ((MR_Box) (MR_mkword(3, &parse_tree__warn_unread_modules_scalar_common_1[3]))),
    ((MR_Box) (MR_mkword(1, &parse_tree__warn_unread_modules_scalar_common_1[0])))
  },
  /* row   5 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 6U)),
    ((MR_Box) ((MR_String) "specifically"))
  },
  /* row   6 */
  {
    ((MR_Box) (MR_mkword(3, &parse_tree__warn_unread_modules_scalar_common_1[5]))),
    ((MR_Box) (MR_mkword(1, &parse_tree__warn_unread_modules_scalar_common_1[2])))
  },
  /* row   7 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 6U)),
    ((MR_Box) ((MR_String) "and"))
  },
  /* row   8 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 6U)),
    ((MR_Box) ((MR_String) "Warning:"))
  },
  /* row   9 */
  {
    ((MR_Box) (MR_mkword(3, &parse_tree__warn_unread_modules_scalar_common_1[8]))),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row  10 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 6U)),
    ((MR_Box) ((MR_String) "have"))
  },
  /* row  11 */
  {
    ((MR_Box) (MR_mkword(3, &parse_tree__warn_unread_modules_scalar_common_1[10]))),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row  12 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 6U)),
    ((MR_Box) ((MR_String) "in the current directory,"))
  },
  /* row  13 */
  {
    ((MR_Box) (MR_mkword(3, &parse_tree__warn_unread_modules_scalar_common_1[12]))),
    ((MR_Box) (MR_mkword(1, &parse_tree__warn_unread_modules_scalar_common_1[11])))
  },
  /* row  14 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 6U)),
    ((MR_Box) ((MR_String) "which the compiler could not find"))
  },
  /* row  15 */
  {
    ((MR_Box) (MR_mkword(3, &parse_tree__warn_unread_modules_scalar_common_1[14]))),
    ((MR_Box) (MR_mkword(1, &parse_tree__warn_unread_modules_scalar_common_1[13])))
  },
  /* row  16 */
  {
    ((MR_Box) ((MR_Unsigned) 12U)),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row  17 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "."))
  },
  /* row  18 */
  {
    ((MR_Box) (MR_mkword(3, &parse_tree__warn_unread_modules_scalar_common_1[17]))),
    ((MR_Box) (MR_mkword(1, &parse_tree__warn_unread_modules_scalar_common_1[16])))
  },
  /* row  19 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 0U)),
    ((MR_Box) ((MR_String) "mmc -f *.m"))
  },
  /* row  20 */
  {
    ((MR_Box) (MR_mkword(3, &parse_tree__warn_unread_modules_scalar_common_1[19]))),
    ((MR_Box) (MR_mkword(1, &parse_tree__warn_unread_modules_scalar_common_1[18])))
  },
  /* row  21 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 6U)),
    ((MR_Box) ((MR_String) "This is usually done using a command such as"))
  },
  /* row  22 */
  {
    ((MR_Box) (MR_mkword(3, &parse_tree__warn_unread_modules_scalar_common_1[21]))),
    ((MR_Box) (MR_mkword(1, &parse_tree__warn_unread_modules_scalar_common_1[20])))
  },
  /* row  23 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 6U)),
    ((MR_Box) ((MR_String) "You need to rebuild it."))
  },
  /* row  24 */
  {
    ((MR_Box) (MR_mkword(3, &parse_tree__warn_unread_modules_scalar_common_1[23]))),
    ((MR_Box) (MR_mkword(1, &parse_tree__warn_unread_modules_scalar_common_1[22])))
  },
  /* row  25 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 6U)),
    ((MR_Box) ((MR_String) "is either missing or out-of-date."))
  },
  /* row  26 */
  {
    ((MR_Box) (MR_mkword(3, &parse_tree__warn_unread_modules_scalar_common_1[25]))),
    ((MR_Box) (MR_mkword(1, &parse_tree__warn_unread_modules_scalar_common_1[24])))
  },
  /* row  27 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 6U)),
    ((MR_Box) ((MR_String) "which contains the module name to source file name map,"))
  },
  /* row  28 */
  {
    ((MR_Box) (MR_mkword(3, &parse_tree__warn_unread_modules_scalar_common_1[27]))),
    ((MR_Box) (MR_mkword(1, &parse_tree__warn_unread_modules_scalar_common_1[26])))
  },
  /* row  29 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 6U)),
    ((MR_Box) ((MR_String) "This usually indicates that the Mercury.modules file,"))
  },
  /* row  30 */
  {
    ((MR_Box) (MR_mkword(3, &parse_tree__warn_unread_modules_scalar_common_1[29]))),
    ((MR_Box) (MR_mkword(1, &parse_tree__warn_unread_modules_scalar_common_1[28])))
  },
  /* row  31 */
  {
    ((MR_Box) ((MR_Unsigned) 16U)),
    ((MR_Box) (MR_mkword(1, &parse_tree__warn_unread_modules_scalar_common_1[30])))
  },
  /* row  32 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 6U)),
    ((MR_Box) ((MR_String) "which the compiler *did* find in the current directory."))
  },
  /* row  33 */
  {
    ((MR_Box) (MR_mkword(3, &parse_tree__warn_unread_modules_scalar_common_1[32]))),
    ((MR_Box) (MR_mkword(1, &parse_tree__warn_unread_modules_scalar_common_1[31])))
  },
};

static /* final */ const MR_Box parse_tree__warn_unread_modules_scalar_common_2[1][5] = {
  /* row   0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 2)),
    ((MR_Box) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0)),
    ((MR_Box) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0))
  },
};

static /* final */ const MR_Box parse_tree__warn_unread_modules_scalar_common_3[3][3] = {
  /* row   0 */
  {
    ((MR_Box) (&parse_tree__warn_unread_modules_scalar_common_2[0])),
    ((MR_Box) (parse_tree__warn_unread_modules__warn_about_any_unread_modules_with_read_ancestors_4_p_0_1)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row   1 */
  {
    ((MR_Box) (&parse_tree__warn_unread_modules_scalar_common_2[0])),
    ((MR_Box) (parse_tree__warn_unread_modules__warn_about_any_unread_modules_with_read_ancestors_4_p_0_2)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row   2 */
  {
    ((MR_Box) (&parse_tree__warn_unread_modules_scalar_common_2[0])),
    ((MR_Box) (parse_tree__warn_unread_modules__warn_about_any_unread_modules_with_read_ancestors_4_p_0_3)),
    ((MR_Box) ((MR_Integer) 0))
  },
};



#include "array.mh"
#include "bitmap.mh"
#include "io.mh"
#include "string.mh"
#include "time.mh"
#include "io.stream_ops.mh"


static const MR_EnumFunctorDesc parse_tree__warn_unread_modules__parse_tree__warn_unread_modules__enum_functor_desc_parent_or_ancestor_0_0 = {
  (MR_String) "parent",
  INT32_C(0)
};

static const MR_EnumFunctorDesc parse_tree__warn_unread_modules__parse_tree__warn_unread_modules__enum_functor_desc_parent_or_ancestor_0_1 = {
  (MR_String) "ancestor",
  INT32_C(1)
};

static const MR_EnumFunctorDescPtr parse_tree__warn_unread_modules__parse_tree__warn_unread_modules__enum_ordinal_ordered_parent_or_ancestor_0[2] = {
  &parse_tree__warn_unread_modules__parse_tree__warn_unread_modules__enum_functor_desc_parent_or_ancestor_0_0,
  &parse_tree__warn_unread_modules__parse_tree__warn_unread_modules__enum_functor_desc_parent_or_ancestor_0_1
};

static const MR_EnumFunctorDescPtr parse_tree__warn_unread_modules__parse_tree__warn_unread_modules__enum_name_ordered_parent_or_ancestor_0[2] = {
  &parse_tree__warn_unread_modules__parse_tree__warn_unread_modules__enum_functor_desc_parent_or_ancestor_0_1,
  &parse_tree__warn_unread_modules__parse_tree__warn_unread_modules__enum_functor_desc_parent_or_ancestor_0_0
};

static const MR_Integer parse_tree__warn_unread_modules__parse_tree__warn_unread_modules__functor_number_map_parent_or_ancestor_0[2] = {
  (MR_Integer) 1,
  (MR_Integer) 0
};

const MR_TypeCtorInfo_Struct parse_tree__warn_unread_modules__parse_tree__warn_unread_modules__type_ctor_info_parent_or_ancestor_0 = {
  (MR_Integer) 0,
  UINT8_C(18),
  INT8_C(-1),
  MR_TYPECTOR_REP_ENUM,
  ((MR_Box) (parse_tree__warn_unread_modules____Unify____parent_or_ancestor_0_0_10001)),
  ((MR_Box) (parse_tree__warn_unread_modules____Compare____parent_or_ancestor_0_0_10001)),
  (MR_String) "parse_tree.warn_unread_modules",
  (MR_String) "parent_or_ancestor",
  { parse_tree__warn_unread_modules__parse_tree__warn_unread_modules__enum_name_ordered_parent_or_ancestor_0 },
  { parse_tree__warn_unread_modules__parse_tree__warn_unread_modules__enum_ordinal_ordered_parent_or_ancestor_0 },
  (MR_Integer) 2,
  UINT16_C(12),
  parse_tree__warn_unread_modules__parse_tree__warn_unread_modules__functor_number_map_parent_or_ancestor_0,

};

static void MR_CALL 
parse_tree__warn_unread_modules____Compare____parent_or_ancestor_0_0(
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

static MR_bool MR_CALL 
parse_tree__warn_unread_modules____Unify____parent_or_ancestor_0_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2)
{
  MR_bool succeeded = (HeadVar__1_1 == HeadVar__2_2);

  return succeeded;
}

static MR_Word MR_CALL 
parse_tree__warn_unread_modules__wrap_module_name_1_f_0(
  MR_Word ModuleName_3)
{
  MR_Word HeadVar__2_2;
  MR_String Var_4;

  Var_4 = mdbcomp__sym_name__sym_name_to_string_1_f_0(ModuleName_3);
  {
    HeadVar__2_2 = (MR_Word) MR_mkword(2, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(2, HeadVar__2_2, 0) = ((MR_Box) (Var_4));
  }
  return HeadVar__2_2;
}

static MR_Box MR_CALL 
parse_tree__warn_unread_modules__warn_about_any_unread_modules_with_read_ancestors_4_p_0_3(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1)
{
  MR_Box wrapper_arg_2;
  MR_Box closure = closure_arg;
  MR_Word conv3_HeadVar__2_2;

  conv3_HeadVar__2_2 = parse_tree__warn_unread_modules__wrap_module_name_1_f_0(((MR_Word) (wrapper_arg_1)));
  wrapper_arg_2 = ((MR_Box) (conv3_HeadVar__2_2));
  return wrapper_arg_2;
}

static MR_Box MR_CALL 
parse_tree__warn_unread_modules__warn_about_any_unread_modules_with_read_ancestors_4_p_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1)
{
  MR_Box wrapper_arg_2;
  MR_Box closure = closure_arg;
  MR_Word conv2_HeadVar__2_2;

  conv2_HeadVar__2_2 = parse_tree__warn_unread_modules__wrap_module_name_1_f_0(((MR_Word) (wrapper_arg_1)));
  wrapper_arg_2 = ((MR_Box) (conv2_HeadVar__2_2));
  return wrapper_arg_2;
}

static MR_Box MR_CALL 
parse_tree__warn_unread_modules__warn_about_any_unread_modules_with_read_ancestors_4_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1)
{
  MR_Box wrapper_arg_2;
  MR_Box closure = closure_arg;
  MR_Word conv0_HeadVar__2_2;

  conv0_HeadVar__2_2 = parse_tree__warn_unread_modules__wrap_module_name_1_f_0(((MR_Word) (wrapper_arg_1)));
  wrapper_arg_2 = ((MR_Box) (conv0_HeadVar__2_2));
  return wrapper_arg_2;
}

void MR_CALL 
parse_tree__warn_unread_modules__warn_about_any_unread_modules_with_read_ancestors_4_p_0(
  MR_Word ReadModules_5,
  MR_Word UnreadModules_6,
  MR_Word STATE_VARIABLE_Specs_0_42,
  MR_Word * STATE_VARIABLE_Specs_43)
{
  MR_Word UnreadModuleList_8;
  MR_Word Parents_9;
  MR_Word Ancestors_10;
  MR_Word BadUnreads_11;
  MR_Word BadUnreadList_12;
  MR_Word Var_44;
  MR_Word Var_45;
  MR_Word Var_46;

  mercury__set_tree234__to_sorted_list_2_p_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), UnreadModules_6, &UnreadModuleList_8);
  Var_44 = mercury__set_tree234__init_0_f_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0));
  Var_45 = mercury__set_tree234__init_0_f_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0));
  Var_46 = mercury__set_tree234__init_0_f_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0));
  parse_tree__warn_unread_modules__find_read_ancestors_of_unread_modules_8_p_0(ReadModules_5, UnreadModuleList_8, Var_44, &Parents_9, Var_45, &Ancestors_10, Var_46, &BadUnreads_11);
  mercury__set_tree234__to_sorted_list_2_p_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), BadUnreads_11, &BadUnreadList_12);
  if ((BadUnreadList_12 == (MR_Word) ((MR_Unsigned) 0U)))
    *STATE_VARIABLE_Specs_43 = STATE_VARIABLE_Specs_0_42;
  else
  {
    MR_Word BadUnreadModulePieces_15;
    MR_Word BadUnreadModuleListPieces_16;
    MR_String TheModules_17;
    MR_Word BadUnreadPieces_18;
    MR_Word ParentList_19;
    MR_Word AncestorList_20;
    MR_Word ParentModulePieces_21;
    MR_Word AncestorModulePieces_22;
    MR_Word ParentPieces_23;
    MR_Word AncestorPieces_30;
    MR_Word Pieces_40;
    MR_Word Spec_41;
    MR_Word Var_51;
    MR_Word Var_52;
    MR_Word Var_59;
    MR_Word Var_112;
    MR_Word Var_113;
    MR_Word Var_124;
    MR_Word Var_125;
    MR_Box conv1_TheModules_17;

    BadUnreadModulePieces_15 = mercury__list__map_2_f_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), (MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), (MR_Word) (&parse_tree__warn_unread_modules_scalar_common_3[0]), BadUnreadList_12);
    mercury__list__intersperse_3_p_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), ((MR_Box) ((MR_Unsigned) 12U)), BadUnreadModulePieces_15, &BadUnreadModuleListPieces_16);
    conv1_TheModules_17 = parse_tree__error_spec__choose_number_3_f_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), (MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), BadUnreadList_12, ((MR_Box) ((MR_String) "the module")), ((MR_Box) ((MR_String) "the modules")));
    TheModules_17 = ((MR_String) (conv1_TheModules_17));
    {
      Var_52 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(3, Var_52, 0) = ((MR_Box) ((MR_Unsigned) 6U));
      MR_hl_field(3, Var_52, 1) = ((MR_Box) (TheModules_17));
    }
    {
      Var_51 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(1, Var_51, 0) = ((MR_Box) (Var_52));
      MR_hl_field(1, Var_51, 1) = ((MR_Box) (MR_mkword(1, &parse_tree__warn_unread_modules_scalar_common_1[2])));
    }
    Var_59 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), BadUnreadModuleListPieces_16, (MR_Word) (MR_mkword(1, &parse_tree__warn_unread_modules_scalar_common_1[4])));
    BadUnreadPieces_18 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), Var_51, Var_59);
    mercury__set_tree234__to_sorted_list_2_p_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), Parents_9, &ParentList_19);
    mercury__set_tree234__to_sorted_list_2_p_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), Ancestors_10, &AncestorList_20);
    ParentModulePieces_21 = mercury__list__map_2_f_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), (MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), (MR_Word) (&parse_tree__warn_unread_modules_scalar_common_3[1]), ParentList_19);
    AncestorModulePieces_22 = mercury__list__map_2_f_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), (MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), (MR_Word) (&parse_tree__warn_unread_modules_scalar_common_3[2]), AncestorList_20);
    if ((ParentModulePieces_21 == (MR_Word) ((MR_Unsigned) 0U)))
      ParentPieces_23 = (MR_Word) ((MR_Unsigned) 0U);
    else
    {
      MR_Word TailParentModulePieces_25 = ((MR_Word) ((MR_hl_field(1, ParentModulePieces_21, (MR_Integer) 1))));
      MR_String ParentWords_26;
      MR_Word ParentModuleListPieces_29;
      MR_Word Var_69;
      MR_Word Var_70;
      MR_Word Var_80;

      if ((TailParentModulePieces_25 == (MR_Word) ((MR_Unsigned) 0U)))
        ParentWords_26 = (MR_String) "a parent module,";
      else
        ParentWords_26 = (MR_String) "parent modules,";
      mercury__list__intersperse_3_p_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), ((MR_Box) ((MR_Unsigned) 12U)), ParentModulePieces_21, &ParentModuleListPieces_29);
      {
        Var_70 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(3, Var_70, 0) = ((MR_Box) ((MR_Unsigned) 6U));
        MR_hl_field(3, Var_70, 1) = ((MR_Box) (ParentWords_26));
      }
      {
        Var_69 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(1, Var_69, 0) = ((MR_Box) (Var_70));
        MR_hl_field(1, Var_69, 1) = ((MR_Box) (MR_mkword(1, &parse_tree__warn_unread_modules_scalar_common_1[6])));
      }
      Var_80 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), ParentModuleListPieces_29, (MR_Word) (MR_mkword(1, &parse_tree__warn_unread_modules_scalar_common_1[4])));
      ParentPieces_23 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), Var_69, Var_80);
    }
    if ((AncestorModulePieces_22 == (MR_Word) ((MR_Unsigned) 0U)))
      AncestorPieces_30 = (MR_Word) ((MR_Unsigned) 0U);
    else
    {
      MR_Word TailAncestorModulePieces_32 = ((MR_Word) ((MR_hl_field(1, AncestorModulePieces_22, (MR_Integer) 1))));
      MR_String AncestorWords_33;
      MR_Word AncestorModuleListPieces_36;
      MR_Word AncestorPieces0_37;
      MR_Word Var_88;
      MR_Word Var_89;
      MR_Word Var_99;

      if ((TailAncestorModulePieces_32 == (MR_Word) ((MR_Unsigned) 0U)))
        AncestorWords_33 = (MR_String) "an ancestor module,";
      else
        AncestorWords_33 = (MR_String) "ancestor modules,";
      mercury__list__intersperse_3_p_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), ((MR_Box) ((MR_Unsigned) 12U)), AncestorModulePieces_22, &AncestorModuleListPieces_36);
      {
        Var_89 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(3, Var_89, 0) = ((MR_Box) ((MR_Unsigned) 6U));
        MR_hl_field(3, Var_89, 1) = ((MR_Box) (AncestorWords_33));
      }
      {
        Var_88 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(1, Var_88, 0) = ((MR_Box) (Var_89));
        MR_hl_field(1, Var_88, 1) = ((MR_Box) (MR_mkword(1, &parse_tree__warn_unread_modules_scalar_common_1[6])));
      }
      Var_99 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), AncestorModuleListPieces_36, (MR_Word) (MR_mkword(1, &parse_tree__warn_unread_modules_scalar_common_1[4])));
      AncestorPieces0_37 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), Var_88, Var_99);
      if ((ParentModulePieces_21 == (MR_Word) ((MR_Unsigned) 0U)))
        AncestorPieces_30 = AncestorPieces0_37;
      else
        {
          AncestorPieces_30 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(1, AncestorPieces_30, 0) = ((MR_Box) (MR_mkword(3, &parse_tree__warn_unread_modules_scalar_common_1[7])));
          MR_hl_field(1, AncestorPieces_30, 1) = ((MR_Box) (AncestorPieces0_37));
        }
    }
    Var_125 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), AncestorPieces_30, (MR_Word) (MR_mkword(1, &parse_tree__warn_unread_modules_scalar_common_1[33])));
    Var_124 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), ParentPieces_23, Var_125);
    Var_113 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), (MR_Word) (MR_mkword(1, &parse_tree__warn_unread_modules_scalar_common_1[15])), Var_124);
    Var_112 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), BadUnreadPieces_18, Var_113);
    Pieces_40 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), (MR_Word) (MR_mkword(1, &parse_tree__warn_unread_modules_scalar_common_1[9])), Var_112);
    {
      Spec_41 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(1, Spec_41, 0) = ((MR_Box) ((MR_String) "predicate \140parse_tree.warn_unread_modules.warn_about_any_unread_modules_with_read_ancestors\'/4"));
      MR_hl_field(1, Spec_41, 1) = ((MR_Box) ((MR_Unsigned) 4U));
      MR_hl_field(1, Spec_41, 2) = ((MR_Box) ((MR_Unsigned) 16U));
      MR_hl_field(1, Spec_41, 3) = ((MR_Box) (Pieces_40));
    }
    {
      MR_Word base;
      base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      *STATE_VARIABLE_Specs_43 = base;
      MR_hl_field(1, base, 0) = ((MR_Box) (Spec_41));
      MR_hl_field(1, base, 1) = ((MR_Box) (STATE_VARIABLE_Specs_0_42));
    }
  }
}

static void MR_CALL 
parse_tree__warn_unread_modules__find_read_ancestors_of_unread_modules_8_p_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word STATE_VARIABLE_Parents_0_3,
  MR_Word * STATE_VARIABLE_Parents_4,
  MR_Word STATE_VARIABLE_Ancestors_0_5,
  MR_Word * STATE_VARIABLE_Ancestors_6,
  MR_Word STATE_VARIABLE_BadUnreads_0_7,
  MR_Word * STATE_VARIABLE_BadUnreads_8)
{
  while (MR_TRUE)
  {
    MR_bool succeeded;

    // setup for model_det tailcalls optimized into a loop
    ;
    if ((HeadVar__2_2 == (MR_Word) ((MR_Unsigned) 0U)))
    {
      *STATE_VARIABLE_BadUnreads_8 = STATE_VARIABLE_BadUnreads_0_7;
      *STATE_VARIABLE_Ancestors_6 = STATE_VARIABLE_Ancestors_0_5;
      *STATE_VARIABLE_Parents_4 = STATE_VARIABLE_Parents_0_3;
    }
    else
    {
      MR_Word UnreadModule_20 = ((MR_Word) ((MR_hl_field(1, HeadVar__2_2, (MR_Integer) 0))));
      MR_Word UnreadModules_21 = ((MR_Word) ((MR_hl_field(1, HeadVar__2_2, (MR_Integer) 1))));
      MR_Word STATE_VARIABLE_BadUnreads_37_37;
      MR_Word STATE_VARIABLE_Parents_38_38;
      MR_Word STATE_VARIABLE_Ancestors_39_39;
      MR_Word next_value_of_HeadVar__2_2;
      MR_Word next_value_of_STATE_VARIABLE_Parents_0_3;
      MR_Word next_value_of_STATE_VARIABLE_Ancestors_0_5;
      MR_Word next_value_of_STATE_VARIABLE_BadUnreads_0_7;

      if (((MR_tag((MR_Word) UnreadModule_20)) == (MR_Integer) 1))
      {
        MR_Word ParentModule_26 = ((MR_Word) ((MR_hl_field(1, UnreadModule_20, (MR_Integer) 0))));
        MR_Word AncestorModule_28;
        MR_Word PoA_29;

        succeeded = parse_tree__warn_unread_modules__find_first_read_ancestor_5_p_0(HeadVar__1_1, ParentModule_26, (MR_Integer) 0, &AncestorModule_28, &PoA_29);
        if (succeeded)
        {
          mercury__set_tree234__insert_3_p_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), ((MR_Box) (UnreadModule_20)), STATE_VARIABLE_BadUnreads_0_7, &STATE_VARIABLE_BadUnreads_37_37);
          switch (PoA_29) {
            default: /*NOTREACHED*/ MR_assert(0);
            case (MR_Integer) 1:
              {
                mercury__set_tree234__insert_3_p_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), ((MR_Box) (AncestorModule_28)), STATE_VARIABLE_Ancestors_0_5, &STATE_VARIABLE_Ancestors_39_39);
                STATE_VARIABLE_Parents_38_38 = STATE_VARIABLE_Parents_0_3;
              }
              break;
            case (MR_Integer) 0:
              {
                mercury__set_tree234__insert_3_p_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), ((MR_Box) (AncestorModule_28)), STATE_VARIABLE_Parents_0_3, &STATE_VARIABLE_Parents_38_38);
                STATE_VARIABLE_Ancestors_39_39 = STATE_VARIABLE_Ancestors_0_5;
              }
              break;
          }
        }
        else
        {
          STATE_VARIABLE_BadUnreads_37_37 = STATE_VARIABLE_BadUnreads_0_7;
          STATE_VARIABLE_Ancestors_39_39 = STATE_VARIABLE_Ancestors_0_5;
          STATE_VARIABLE_Parents_38_38 = STATE_VARIABLE_Parents_0_3;
        }
      }
      else
      {
        STATE_VARIABLE_Parents_38_38 = STATE_VARIABLE_Parents_0_3;
        STATE_VARIABLE_Ancestors_39_39 = STATE_VARIABLE_Ancestors_0_5;
        STATE_VARIABLE_BadUnreads_37_37 = STATE_VARIABLE_BadUnreads_0_7;
      }
      // direct tailcall eliminated
      ;
      next_value_of_HeadVar__2_2 = UnreadModules_21;
      next_value_of_STATE_VARIABLE_Parents_0_3 = STATE_VARIABLE_Parents_38_38;
      next_value_of_STATE_VARIABLE_Ancestors_0_5 = STATE_VARIABLE_Ancestors_39_39;
      next_value_of_STATE_VARIABLE_BadUnreads_0_7 = STATE_VARIABLE_BadUnreads_37_37;
      HeadVar__2_2 = next_value_of_HeadVar__2_2;
      STATE_VARIABLE_Parents_0_3 = next_value_of_STATE_VARIABLE_Parents_0_3;
      STATE_VARIABLE_Ancestors_0_5 = next_value_of_STATE_VARIABLE_Ancestors_0_5;
      STATE_VARIABLE_BadUnreads_0_7 = next_value_of_STATE_VARIABLE_BadUnreads_0_7;
      continue;
    }
    break;
  }
}

static MR_bool MR_CALL 
parse_tree__warn_unread_modules__find_first_read_ancestor_5_p_0(
  MR_Word ReadModules_6,
  MR_Word Module_7,
  MR_Word CurPoA_8,
  MR_Word * AncestorModule_9,
  MR_Word * PoA_10)
{
  while (MR_TRUE)
  {
    MR_bool succeeded;

    // setup for model_semi tailcalls optimized into a loop
    ;
    succeeded = mercury__set_tree234__contains_2_p_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), ReadModules_6, ((MR_Box) (Module_7)));
    if (succeeded)
    {
      *AncestorModule_9 = Module_7;
      *PoA_10 = CurPoA_8;
      succeeded = MR_TRUE;
    }
    else
    {
      MR_Word ParentModule_11;
      MR_Word Var_13;
      MR_Word next_value_of_Module_7;
      MR_Word next_value_of_CurPoA_8;

      succeeded = ((MR_tag((MR_Word) Module_7)) == (MR_Integer) 1);
      if (succeeded)
      {
        ParentModule_11 = ((MR_Word) ((MR_hl_field(1, Module_7, (MR_Integer) 0))));
        Var_13 = (MR_Integer) 1;
        // direct tailcall eliminated
        ;
        next_value_of_Module_7 = ParentModule_11;
        next_value_of_CurPoA_8 = Var_13;
        Module_7 = next_value_of_Module_7;
        CurPoA_8 = next_value_of_CurPoA_8;
        continue;
      }
    }
    return succeeded;
    break;
  }
}

static MR_bool MR_CALL 
parse_tree__warn_unread_modules____Unify____parent_or_ancestor_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  MR_bool succeeded;

  succeeded = parse_tree__warn_unread_modules____Unify____parent_or_ancestor_0_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
  return succeeded;
}

static void MR_CALL 
parse_tree__warn_unread_modules____Compare____parent_or_ancestor_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  MR_Word conv0_HeadVar__1_1;

  parse_tree__warn_unread_modules____Compare____parent_or_ancestor_0_0(&conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
  *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
}

void mercury__parse_tree__warn_unread_modules__init(void)
{
}

void mercury__parse_tree__warn_unread_modules__init_type_tables(void)
{
	static MR_bool initialised = MR_FALSE;
	if (initialised) return;
	initialised = MR_TRUE;

	MR_register_type_ctor_info(&parse_tree__warn_unread_modules__parse_tree__warn_unread_modules__type_ctor_info_parent_or_ancestor_0);
}

void mercury__parse_tree__warn_unread_modules__init_debugger(void)
{
	MR_fatal_error("debugger initialization in MLDS grade");
}

// Ensure everything is compiled with the same grade.
const char *mercury__parse_tree__warn_unread_modules__grade_check(void)
{
    return &MR_GRADE_VAR;
}

// :- end_module parse_tree.warn_unread_modules.
