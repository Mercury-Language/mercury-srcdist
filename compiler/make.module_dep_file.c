/*
** Automatically generated from `make.module_dep_file.m'
** by the Mercury compiler,
** version rotd-2024-08-10
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


// :- module make.module_dep_file.
// :- implementation.

/*
INIT mercury__make__module_dep_file__init
ENDINIT
*/

#include "make.module_dep_file.mih"


#include "array.mih"
#include "assoc_list.mih"
#include "bitmap.mih"
#include "bool.mih"
#include "builtin.mih"
#include "char.mih"
#include "construct.mih"
#include "cord.mih"
#include "deconstruct.mih"
#include "dir.mih"
#include "enum.mih"
#include "getopt.mih"
#include "integer.mih"
#include "io.mih"
#include "libs.mih"
#include "list.mih"
#include "make.mih"
#include "map.mih"
#include "maybe.mih"
#include "mdbcomp.mih"
#include "mercury_term_lexer.mih"
#include "mercury_term_parser.mih"
#include "one_or_more.mih"
#include "one_or_more_map.mih"
#include "ops.mih"
#include "pair.mih"
#include "parse_tree.mih"
#include "pretty_printer.mih"
#include "private_builtin.mih"
#include "recompilation.mih"
#include "require.mih"
#include "set.mih"
#include "set_ordlist.mih"
#include "sparse_bitset.mih"
#include "stream.mih"
#include "string.mih"
#include "term.mih"
#include "term_context.mih"
#include "term_int.mih"
#include "term_io.mih"
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
#include "libs.timestamp.mih"
#include "libs.trace_params.mih"
#include "mdbcomp.feedback.mih"
#include "mdbcomp.prim_data.mih"
#include "mdbcomp.sym_name.mih"
#include "parse_tree.error_spec.mih"
#include "parse_tree.file_kind.mih"
#include "parse_tree.file_names.mih"
#include "parse_tree.get_dependencies.mih"
#include "parse_tree.maybe_error.mih"
#include "parse_tree.module_baggage.mih"
#include "parse_tree.module_dep_info.mih"
#include "parse_tree.parse_error.mih"
#include "parse_tree.parse_sym_name.mih"
#include "parse_tree.parse_tree_out_misc.mih"
#include "parse_tree.parse_tree_out_sym_name.mih"
#include "parse_tree.parse_tree_out_term.mih"
#include "parse_tree.parse_tree_output.mih"
#include "parse_tree.prog_data.mih"
#include "parse_tree.prog_data_foreign.mih"
#include "parse_tree.prog_data_pragma.mih"
#include "parse_tree.prog_item.mih"
#include "parse_tree.set_of_var.mih"
#include "recompilation.item_types.mih"
#include "string.builder.mih"
#include "string.format.mih"
#include "string.parse_util.mih"




static const MR_FA_PseudoTypeInfo_Struct1 make__module_dep_file__term__pti_term_1__plain_term__type_ctor_info_generic_0;

static const MR_FA_PseudoTypeInfo_Struct1 make__module_dep_file__list__pti_list_1__plain_mdbcomp__sym_name__type_ctor_info_sym_name_0;

static const MR_FA_PseudoTypeInfo_Struct1 make__module_dep_file__set_ordlist__pti_set_ordlist_1__plain_mdbcomp__sym_name__type_ctor_info_sym_name_0;

static const MR_EnumFunctorDesc make__module_dep_file__make__module_dep_file__enum_functor_desc_module_dep_file_version_0_0;

static const MR_EnumFunctorDesc make__module_dep_file__make__module_dep_file__enum_functor_desc_module_dep_file_version_0_1;

static const MR_EnumFunctorDescPtr make__module_dep_file__make__module_dep_file__enum_ordinal_ordered_module_dep_file_version_0[2];

static const MR_EnumFunctorDescPtr make__module_dep_file__make__module_dep_file__enum_name_ordered_module_dep_file_version_0[2];

static const MR_Integer make__module_dep_file__make__module_dep_file__functor_number_map_module_dep_file_version_0[2];

static MR_bool MR_CALL 
make__module_dep_file__IntroducedFrom__pred__sym_names_term__399__1_2_p_0(
  MR_Word HeadVar__1_6,
  MR_Word * HeadVar__2_7);

static MR_bool MR_CALL 
make__module_dep_file__IntroducedFrom__pred__parse_module_dep_file_term__360__1_2_p_0(
  MR_Word ParentsSet_39,
  MR_Word AncestorsSet_40);

static MR_bool MR_CALL 
make__module_dep_file__IntroducedFrom__pred__parse_module_dep_file_term__355__1_2_p_0(
  MR_Word NestedSubModules0_31,
  MR_Word HeadVar__2_64);

static void MR_CALL 
make__module_dep_file____Compare____module_dep_file_version_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3);

static MR_bool MR_CALL 
make__module_dep_file____Unify____module_dep_file_version_0_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2);

static MR_bool MR_CALL 
make__module_dep_file__foreign_include_term_2_p_0(
  MR_Word Term_3,
  MR_Word * ForeignInclude_4);

static MR_bool MR_CALL 
make__module_dep_file__foreign_import_term_2_p_0(
  MR_Word Term_3,
  MR_Word * FIMSpec_4);

static MR_bool MR_CALL 
make__module_dep_file__foreign_language_term_2_p_0(
  MR_Word Term_3,
  MR_Word * Lang_4);

static MR_bool MR_CALL 
make__module_dep_file__fact_dep_term_2_p_0(
  MR_Word Term_3,
  MR_String * FactDep_4);

static MR_String MR_CALL 
make__module_dep_file__foreign_include_file_info_to_string_1_f_0(
  MR_Word ForeignInclude_3);

static MR_String MR_CALL 
make__module_dep_file__fim_spec_to_string_1_f_0(
  MR_Word FIMSpec_3);

static MR_bool MR_CALL 
make__module_dep_file__parse_module_dep_file_term_4_p_0_3(
  MR_Box closure_arg);

static MR_bool MR_CALL 
make__module_dep_file__parse_module_dep_file_term_4_p_0_2(
  MR_Box closure_arg);

static MR_bool MR_CALL 
make__module_dep_file__parse_module_dep_file_term_4_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2);

static MR_bool MR_CALL 
make__module_dep_file__parse_module_dep_file_term_4_p_0(
  MR_Word ModuleName_5,
  MR_String DepFileDir_6,
  MR_Word Term_7,
  MR_Word * ModuleSummary_8);

static MR_bool MR_CALL 
make__module_dep_file__braces_term__ho5_3_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2);

static MR_bool MR_CALL 
make__module_dep_file__braces_term__ho5_3_p_0(
  MR_Word Term_5,
  MR_Word * Args_6);

static MR_bool MR_CALL 
make__module_dep_file__braces_term__ho4_3_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2);

static MR_bool MR_CALL 
make__module_dep_file__braces_term__ho4_3_p_0(
  MR_Word Term_5,
  MR_Word * Args_6);

static MR_bool MR_CALL 
make__module_dep_file__braces_term__ho3_3_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2);

static MR_bool MR_CALL 
make__module_dep_file__braces_term__ho3_3_p_0(
  MR_Word Term_5,
  MR_Word * Args_6);

static MR_bool MR_CALL 
make__module_dep_file__braces_term__ho2_3_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2);

static MR_bool MR_CALL 
make__module_dep_file__braces_term__ho2_3_p_0(
  MR_Word Term_5,
  MR_Word * Args_6);

static MR_bool MR_CALL 
make__module_dep_file__contains_foreign_export_term_2_p_0(
  MR_Word Term_3,
  MR_Word * ContainsForeignExport_4);

static MR_bool MR_CALL 
make__module_dep_file__sym_names_term_2_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2);

static MR_bool MR_CALL 
make__module_dep_file__sym_names_term_2_p_0(
  MR_Word Term_3,
  MR_Word * SymNames_4);

static MR_Box MR_CALL 
make__module_dep_file__do_write_module_dep_file_to_stream_6_p_0_4(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1);

static MR_Box MR_CALL 
make__module_dep_file__do_write_module_dep_file_to_stream_6_p_0_3(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1);

static MR_Box MR_CALL 
make__module_dep_file__do_write_module_dep_file_to_stream_6_p_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1);

static MR_Box MR_CALL 
make__module_dep_file__do_write_module_dep_file_to_stream_6_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1);

static void MR_CALL 
make__module_dep_file__do_write_module_dep_file_to_stream_6_p_0(
  MR_Word Stream_7,
  MR_Word Globals_8,
  MR_Word Baggage_9,
  MR_Word ParseTreeModuleSrc_10);

static MR_Box MR_CALL 
make__module_dep_file__bracketed_sym_names_to_comma_list_string_1_f_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1);

static MR_String MR_CALL 
make__module_dep_file__bracketed_sym_names_to_comma_list_string_1_f_0(
  MR_Word SymNames_3);

static MR_bool MR_CALL 
make__module_dep_file____Unify____module_dep_file_version_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2);

static void MR_CALL 
make__module_dep_file____Compare____module_dep_file_version_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3);


static /* final */ const MR_Box make__module_dep_file_scalar_common_1[4][2];

static /* final */ const MR_Box make__module_dep_file_scalar_common_2[3][1];

static /* final */ const MR_Box make__module_dep_file_scalar_common_3[12][5];

static /* final */ const MR_Box make__module_dep_file_scalar_common_4[11][3];




static /* final */ const MR_Box make__module_dep_file_scalar_common_1[4][2] = {
  /* row   0 */
  {
    ((MR_Box) (&mercury__list__list__type_ctor_info_list_1)),
    ((MR_Box) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0))
  },
  /* row   1 */
  {
    ((MR_Box) (&mercury__term__term__type_ctor_info_term_1)),
    ((MR_Box) (&mercury__term__term__type_ctor_info_generic_0))
  },
  /* row   2 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 0U)),
    (MR_Box) ((MR_Unsigned) 22U)
  },
  /* row   3 */
  {
    ((MR_Box) (&mercury__list__list__type_ctor_info_list_1)),
    ((MR_Box) (&make__module_dep_file_scalar_common_1[1]))
  },
};

static /* final */ const MR_Box make__module_dep_file_scalar_common_2[3][1] = {
  /* row   0 */
  { ((MR_Box) ((MR_String) "unexpected eof")) },
  /* row   1 */
  { ((MR_Box) ((MR_String) "failed to parse term")) },
  /* row   2 */
  { (MR_Box) (((((MR_Unsigned) 0U << 4)) | (((((MR_Unsigned) 0U << 3)) | (((((MR_Unsigned) 0U << 2)) | (((MR_Unsigned) 0U << 1)))))))) },
};

static /* final */ const MR_Box make__module_dep_file_scalar_common_3[12][5] = {
  /* row   0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 2)),
    ((MR_Box) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_string_0))
  },
  /* row   1 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 2)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_string_0)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_string_0))
  },
  /* row   2 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 2)),
    ((MR_Box) (&libs__globals__libs__globals__type_ctor_info_foreign_language_0)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_string_0))
  },
  /* row   3 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 2)),
    ((MR_Box) (&parse_tree__prog_data_foreign__parse_tree__prog_data_foreign__type_ctor_info_fim_spec_0)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_string_0))
  },
  /* row   4 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 2)),
    ((MR_Box) (&parse_tree__prog_data_foreign__parse_tree__prog_data_foreign__type_ctor_info_foreign_include_file_info_0)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_string_0))
  },
  /* row   5 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 2)),
    ((MR_Box) (&make__module_dep_file__term__pti_term_1__plain_term__type_ctor_info_generic_0)),
    ((MR_Box) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0))
  },
  /* row   6 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 2)),
    ((MR_Box) (&make__module_dep_file__term__pti_term_1__plain_term__type_ctor_info_generic_0)),
    ((MR_Box) (&parse_tree__prog_data_foreign__parse_tree__prog_data_foreign__type_ctor_info_foreign_include_file_info_0))
  },
  /* row   7 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 2)),
    ((MR_Box) (&make__module_dep_file__term__pti_term_1__plain_term__type_ctor_info_generic_0)),
    ((MR_Box) (&parse_tree__prog_data_foreign__parse_tree__prog_data_foreign__type_ctor_info_fim_spec_0))
  },
  /* row   8 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 2)),
    ((MR_Box) (&make__module_dep_file__term__pti_term_1__plain_term__type_ctor_info_generic_0)),
    ((MR_Box) (&libs__globals__libs__globals__type_ctor_info_foreign_language_0))
  },
  /* row   9 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 2)),
    ((MR_Box) (&make__module_dep_file__term__pti_term_1__plain_term__type_ctor_info_generic_0)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_string_0))
  },
  /* row  10 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 2)),
    ((MR_Box) (&make__module_dep_file__list__pti_list_1__plain_mdbcomp__sym_name__type_ctor_info_sym_name_0)),
    ((MR_Box) (&make__module_dep_file__list__pti_list_1__plain_mdbcomp__sym_name__type_ctor_info_sym_name_0))
  },
  /* row  11 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 2)),
    ((MR_Box) (&make__module_dep_file__set_ordlist__pti_set_ordlist_1__plain_mdbcomp__sym_name__type_ctor_info_sym_name_0)),
    ((MR_Box) (&make__module_dep_file__set_ordlist__pti_set_ordlist_1__plain_mdbcomp__sym_name__type_ctor_info_sym_name_0))
  },
};

static /* final */ const MR_Box make__module_dep_file_scalar_common_4[11][3] = {
  /* row   0 */
  {
    ((MR_Box) (&make__module_dep_file_scalar_common_3[0])),
    ((MR_Box) (make__module_dep_file__bracketed_sym_names_to_comma_list_string_1_f_0_1)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row   1 */
  {
    ((MR_Box) (&make__module_dep_file_scalar_common_3[1])),
    ((MR_Box) (make__module_dep_file__do_write_module_dep_file_to_stream_6_p_0_1)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row   2 */
  {
    ((MR_Box) (&make__module_dep_file_scalar_common_3[2])),
    ((MR_Box) (make__module_dep_file__do_write_module_dep_file_to_stream_6_p_0_2)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row   3 */
  {
    ((MR_Box) (&make__module_dep_file_scalar_common_3[3])),
    ((MR_Box) (make__module_dep_file__do_write_module_dep_file_to_stream_6_p_0_3)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row   4 */
  {
    ((MR_Box) (&make__module_dep_file_scalar_common_3[4])),
    ((MR_Box) (make__module_dep_file__do_write_module_dep_file_to_stream_6_p_0_4)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row   5 */
  {
    ((MR_Box) (&make__module_dep_file_scalar_common_3[5])),
    ((MR_Box) (make__module_dep_file__sym_names_term_2_p_0_1)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row   6 */
  {
    ((MR_Box) (&make__module_dep_file_scalar_common_3[6])),
    ((MR_Box) (make__module_dep_file__braces_term__ho2_3_p_0_1)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row   7 */
  {
    ((MR_Box) (&make__module_dep_file_scalar_common_3[7])),
    ((MR_Box) (make__module_dep_file__braces_term__ho3_3_p_0_1)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row   8 */
  {
    ((MR_Box) (&make__module_dep_file_scalar_common_3[8])),
    ((MR_Box) (make__module_dep_file__braces_term__ho4_3_p_0_1)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row   9 */
  {
    ((MR_Box) (&make__module_dep_file_scalar_common_3[9])),
    ((MR_Box) (make__module_dep_file__braces_term__ho5_3_p_0_1)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row  10 */
  {
    ((MR_Box) (&make__module_dep_file_scalar_common_3[5])),
    ((MR_Box) (make__module_dep_file__parse_module_dep_file_term_4_p_0_1)),
    ((MR_Box) ((MR_Integer) 0))
  },
};



#include "array.mh"
#include "bitmap.mh"
#include "dir.mh"
#include "io.mh"
#include "string.mh"
#include "time.mh"
#include "io.stream_ops.mh"


static const MR_FA_PseudoTypeInfo_Struct1 make__module_dep_file__term__pti_term_1__plain_term__type_ctor_info_generic_0 = {
  &mercury__term__term__type_ctor_info_term_1,
  { (MR_PseudoTypeInfo) (&mercury__term__term__type_ctor_info_generic_0) }
};

static const MR_FA_PseudoTypeInfo_Struct1 make__module_dep_file__list__pti_list_1__plain_mdbcomp__sym_name__type_ctor_info_sym_name_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  { (MR_PseudoTypeInfo) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0) }
};

static const MR_FA_PseudoTypeInfo_Struct1 make__module_dep_file__set_ordlist__pti_set_ordlist_1__plain_mdbcomp__sym_name__type_ctor_info_sym_name_0 = {
  &mercury__set_ordlist__set_ordlist__type_ctor_info_set_ordlist_1,
  { (MR_PseudoTypeInfo) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0) }
};

static const MR_EnumFunctorDesc make__module_dep_file__make__module_dep_file__enum_functor_desc_module_dep_file_version_0_0 = {
  (MR_String) "module_dep_file_v1",
  INT32_C(0)
};

static const MR_EnumFunctorDesc make__module_dep_file__make__module_dep_file__enum_functor_desc_module_dep_file_version_0_1 = {
  (MR_String) "module_dep_file_v2",
  INT32_C(1)
};

static const MR_EnumFunctorDescPtr make__module_dep_file__make__module_dep_file__enum_ordinal_ordered_module_dep_file_version_0[2] = {
  &make__module_dep_file__make__module_dep_file__enum_functor_desc_module_dep_file_version_0_0,
  &make__module_dep_file__make__module_dep_file__enum_functor_desc_module_dep_file_version_0_1
};

static const MR_EnumFunctorDescPtr make__module_dep_file__make__module_dep_file__enum_name_ordered_module_dep_file_version_0[2] = {
  &make__module_dep_file__make__module_dep_file__enum_functor_desc_module_dep_file_version_0_0,
  &make__module_dep_file__make__module_dep_file__enum_functor_desc_module_dep_file_version_0_1
};

static const MR_Integer make__module_dep_file__make__module_dep_file__functor_number_map_module_dep_file_version_0[2] = {
  (MR_Integer) 0,
  (MR_Integer) 1
};

const MR_TypeCtorInfo_Struct make__module_dep_file__make__module_dep_file__type_ctor_info_module_dep_file_version_0 = {
  (MR_Integer) 0,
  UINT8_C(18),
  INT8_C(-1),
  MR_TYPECTOR_REP_ENUM,
  ((MR_Box) (make__module_dep_file____Unify____module_dep_file_version_0_0_10001)),
  ((MR_Box) (make__module_dep_file____Compare____module_dep_file_version_0_0_10001)),
  (MR_String) "make.module_dep_file",
  (MR_String) "module_dep_file_version",
  { make__module_dep_file__make__module_dep_file__enum_name_ordered_module_dep_file_version_0 },
  { make__module_dep_file__make__module_dep_file__enum_ordinal_ordered_module_dep_file_version_0 },
  (MR_Integer) 2,
  UINT16_C(12),
  make__module_dep_file__make__module_dep_file__functor_number_map_module_dep_file_version_0,

};

static MR_bool MR_CALL 
make__module_dep_file__IntroducedFrom__pred__sym_names_term__399__1_2_p_0(
  MR_Word HeadVar__1_6,
  MR_Word * HeadVar__2_7)
{
  MR_bool succeeded;

  succeeded = parse_tree__parse_sym_name__try_parse_sym_name_and_no_args_2_p_0((MR_Word) (&mercury__term__term__type_ctor_info_generic_0), HeadVar__1_6, HeadVar__2_7);
  return succeeded;
}

static MR_bool MR_CALL 
make__module_dep_file__IntroducedFrom__pred__parse_module_dep_file_term__360__1_2_p_0(
  MR_Word ParentsSet_39,
  MR_Word AncestorsSet_40)
{
  MR_bool succeeded;

  succeeded = mercury__set__equal_2_p_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), ParentsSet_39, AncestorsSet_40);
  return succeeded;
}

static MR_bool MR_CALL 
make__module_dep_file__IntroducedFrom__pred__parse_module_dep_file_term__355__1_2_p_0(
  MR_Word NestedSubModules0_31,
  MR_Word HeadVar__2_64)
{
  MR_bool succeeded;

  succeeded = mercury__builtin__unify_2_p_0((MR_Word) (&make__module_dep_file_scalar_common_1[0]), ((MR_Box) (NestedSubModules0_31)), ((MR_Box) (HeadVar__2_64)));
  return succeeded;
}

static void MR_CALL 
make__module_dep_file____Compare____module_dep_file_version_0_0(
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
make__module_dep_file____Unify____module_dep_file_version_0_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2)
{
  MR_bool succeeded = (HeadVar__1_1 == HeadVar__2_2);

  return succeeded;
}

static MR_bool MR_CALL 
make__module_dep_file__foreign_include_term_2_p_0(
  MR_Word Term_3,
  MR_Word * ForeignInclude_4)
{
  MR_bool succeeded = ((MR_tag((MR_Word) Term_3)) == (MR_Integer) 0);
  MR_Word TypeInfo_15_15;
  MR_Word LanguageTerm_5;
  MR_Word FileNameTerm_6;
  MR_Word Language_7;
  MR_String FileName_8;
  MR_Word Var_10;
  MR_Word Var_11;
  MR_String Var_13;
  MR_Word Var_14;
  MR_Word Var_17;
  MR_String String_18;
  MR_Word Var_20;
  MR_Word Var_21;
  MR_Word Var_23;
  MR_Word Var_24;

  if (succeeded)
  {
    Var_17 = ((MR_Word) ((MR_hl_field(0, Term_3, (MR_Integer) 0))));
    Var_10 = ((MR_Word) ((MR_hl_field(0, Term_3, (MR_Integer) 1))));
    succeeded = ((MR_tag((MR_Word) Var_17)) == (MR_Integer) 0);
    if (succeeded)
    {
      Var_13 = ((MR_String) ((MR_hl_field(0, Var_17, (MR_Integer) 0))));
      succeeded = (strcmp((MR_String) "-", Var_13) == 0);
      if (succeeded)
      {
        succeeded = (Var_10 != (MR_Word) ((MR_Unsigned) 0U));
        if (succeeded)
        {
          LanguageTerm_5 = ((MR_Word) ((MR_hl_field(1, Var_10, (MR_Integer) 0))));
          Var_11 = ((MR_Word) ((MR_hl_field(1, Var_10, (MR_Integer) 1))));
          succeeded = (Var_11 != (MR_Word) ((MR_Unsigned) 0U));
          if (succeeded)
          {
            FileNameTerm_6 = ((MR_Word) ((MR_hl_field(1, Var_11, (MR_Integer) 0))));
            Var_14 = ((MR_Word) ((MR_hl_field(1, Var_11, (MR_Integer) 1))));
            TypeInfo_15_15 = (MR_Word) (&make__module_dep_file_scalar_common_1[3]);
            succeeded = mercury__builtin__unify_2_p_0(TypeInfo_15_15, ((MR_Box) ((MR_Unsigned) 0U)), ((MR_Box) (Var_14)));
            if (succeeded)
            {
              succeeded = ((MR_tag((MR_Word) LanguageTerm_5)) == (MR_Integer) 0);
              if (succeeded)
              {
                Var_20 = ((MR_Word) ((MR_hl_field(0, LanguageTerm_5, (MR_Integer) 0))));
                Var_21 = ((MR_Word) ((MR_hl_field(0, LanguageTerm_5, (MR_Integer) 1))));
                succeeded = (Var_21 == (MR_Word) ((MR_Unsigned) 0U));
                if (succeeded)
                {
                  succeeded = ((MR_tag((MR_Word) Var_20)) == (MR_Integer) 2);
                  if (succeeded)
                  {
                    String_18 = ((MR_String) ((MR_hl_field(2, Var_20, (MR_Integer) 0))));
                    succeeded = libs__globals__convert_foreign_language_2_p_0(String_18, &Language_7);
                    if (succeeded)
                    {
                      succeeded = ((MR_tag((MR_Word) FileNameTerm_6)) == (MR_Integer) 0);
                      if (succeeded)
                      {
                        Var_23 = ((MR_Word) ((MR_hl_field(0, FileNameTerm_6, (MR_Integer) 0))));
                        Var_24 = ((MR_Word) ((MR_hl_field(0, FileNameTerm_6, (MR_Integer) 1))));
                        succeeded = (Var_24 == (MR_Word) ((MR_Unsigned) 0U));
                        if (succeeded)
                        {
                          succeeded = ((MR_tag((MR_Word) Var_23)) == (MR_Integer) 2);
                          if (succeeded)
                          {
                            FileName_8 = ((MR_String) ((MR_hl_field(2, Var_23, (MR_Integer) 0))));
                            {
                              MR_Word base;
                              base = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
                              *ForeignInclude_4 = base;
                              MR_hl_field(0, base, 0) = (MR_Box) ((MR_Unsigned) (Language_7));
                              MR_hl_field(0, base, 1) = ((MR_Box) (FileName_8));
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
      }
    }
  }
  return succeeded;
}

static MR_bool MR_CALL 
make__module_dep_file__foreign_import_term_2_p_0(
  MR_Word Term_3,
  MR_Word * FIMSpec_4)
{
  MR_bool succeeded = ((MR_tag((MR_Word) Term_3)) == (MR_Integer) 0);
  MR_Word TypeCtorInfo_13_13;
  MR_Word TypeInfo_16_16;
  MR_Word LanguageTerm_5;
  MR_Word ImportedModuleTerm_6;
  MR_Word Language_7;
  MR_Word ImportedModuleName_8;
  MR_Word Var_10;
  MR_Word Var_11;
  MR_String Var_14;
  MR_Word Var_15;
  MR_Word Var_18;
  MR_String String_19;
  MR_Word Var_21;
  MR_Word Var_22;

  if (succeeded)
  {
    Var_18 = ((MR_Word) ((MR_hl_field(0, Term_3, (MR_Integer) 0))));
    Var_10 = ((MR_Word) ((MR_hl_field(0, Term_3, (MR_Integer) 1))));
    succeeded = ((MR_tag((MR_Word) Var_18)) == (MR_Integer) 0);
    if (succeeded)
    {
      Var_14 = ((MR_String) ((MR_hl_field(0, Var_18, (MR_Integer) 0))));
      succeeded = (strcmp((MR_String) "-", Var_14) == 0);
      if (succeeded)
      {
        succeeded = (Var_10 != (MR_Word) ((MR_Unsigned) 0U));
        if (succeeded)
        {
          LanguageTerm_5 = ((MR_Word) ((MR_hl_field(1, Var_10, (MR_Integer) 0))));
          Var_11 = ((MR_Word) ((MR_hl_field(1, Var_10, (MR_Integer) 1))));
          succeeded = (Var_11 != (MR_Word) ((MR_Unsigned) 0U));
          if (succeeded)
          {
            ImportedModuleTerm_6 = ((MR_Word) ((MR_hl_field(1, Var_11, (MR_Integer) 0))));
            Var_15 = ((MR_Word) ((MR_hl_field(1, Var_11, (MR_Integer) 1))));
            TypeInfo_16_16 = (MR_Word) (&make__module_dep_file_scalar_common_1[3]);
            succeeded = mercury__builtin__unify_2_p_0(TypeInfo_16_16, ((MR_Box) ((MR_Unsigned) 0U)), ((MR_Box) (Var_15)));
            if (succeeded)
            {
              succeeded = ((MR_tag((MR_Word) LanguageTerm_5)) == (MR_Integer) 0);
              if (succeeded)
              {
                Var_21 = ((MR_Word) ((MR_hl_field(0, LanguageTerm_5, (MR_Integer) 0))));
                Var_22 = ((MR_Word) ((MR_hl_field(0, LanguageTerm_5, (MR_Integer) 1))));
                succeeded = (Var_22 == (MR_Word) ((MR_Unsigned) 0U));
                if (succeeded)
                {
                  succeeded = ((MR_tag((MR_Word) Var_21)) == (MR_Integer) 2);
                  if (succeeded)
                  {
                    String_19 = ((MR_String) ((MR_hl_field(2, Var_21, (MR_Integer) 0))));
                    succeeded = libs__globals__convert_foreign_language_2_p_0(String_19, &Language_7);
                    if (succeeded)
                    {
                      TypeCtorInfo_13_13 = (MR_Word) (&mercury__term__term__type_ctor_info_generic_0);
                      succeeded = parse_tree__parse_sym_name__try_parse_sym_name_and_no_args_2_p_0(TypeCtorInfo_13_13, ImportedModuleTerm_6, &ImportedModuleName_8);
                      if (succeeded)
                      {
                        {
                          MR_Word base;
                          base = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
                          *FIMSpec_4 = base;
                          MR_hl_field(0, base, 0) = (MR_Box) ((MR_Unsigned) (Language_7));
                          MR_hl_field(0, base, 1) = ((MR_Box) (ImportedModuleName_8));
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
  }
  return succeeded;
}

static MR_bool MR_CALL 
make__module_dep_file__foreign_language_term_2_p_0(
  MR_Word Term_3,
  MR_Word * Lang_4)
{
  MR_bool succeeded = ((MR_tag((MR_Word) Term_3)) == (MR_Integer) 0);
  MR_String String_5;
  MR_Word Var_7;
  MR_Word Var_8;

  if (succeeded)
  {
    Var_7 = ((MR_Word) ((MR_hl_field(0, Term_3, (MR_Integer) 0))));
    Var_8 = ((MR_Word) ((MR_hl_field(0, Term_3, (MR_Integer) 1))));
    succeeded = ((MR_tag((MR_Word) Var_7)) == (MR_Integer) 2);
    if (succeeded)
    {
      String_5 = ((MR_String) ((MR_hl_field(2, Var_7, (MR_Integer) 0))));
      succeeded = (Var_8 == (MR_Word) ((MR_Unsigned) 0U));
      if (succeeded)
        succeeded = libs__globals__convert_foreign_language_2_p_0(String_5, Lang_4);
    }
  }
  return succeeded;
}

static MR_bool MR_CALL 
make__module_dep_file__fact_dep_term_2_p_0(
  MR_Word Term_3,
  MR_String * FactDep_4)
{
  MR_bool succeeded = ((MR_tag((MR_Word) Term_3)) == (MR_Integer) 0);
  MR_Word Var_6;
  MR_Word Var_7;

  if (succeeded)
  {
    Var_6 = ((MR_Word) ((MR_hl_field(0, Term_3, (MR_Integer) 0))));
    Var_7 = ((MR_Word) ((MR_hl_field(0, Term_3, (MR_Integer) 1))));
    succeeded = ((MR_tag((MR_Word) Var_6)) == (MR_Integer) 2);
    if (succeeded)
    {
      *FactDep_4 = ((MR_String) ((MR_hl_field(2, Var_6, (MR_Integer) 0))));
      succeeded = (Var_7 == (MR_Word) ((MR_Unsigned) 0U));
    }
  }
  return succeeded;
}

static MR_String MR_CALL 
make__module_dep_file__foreign_include_file_info_to_string_1_f_0(
  MR_Word ForeignInclude_3)
{
  MR_String Str_4;
  MR_Word Lang_5 = ((MR_Unsigned) ((MR_hl_field(0, ForeignInclude_3, (MR_Integer) 0))) & (MR_Integer) 3);
  MR_String FileName_6 = ((MR_String) ((MR_hl_field(0, ForeignInclude_3, (MR_Integer) 1))));
  MR_String LangStr_7;
  MR_String Var_8;
  MR_String Var_10;

  LangStr_7 = parse_tree__parse_tree_out_misc__mercury_foreign_language_to_string_1_f_0(Lang_5);
  Var_10 = mercury__term_io__quoted_string_1_f_0(FileName_6);
  Var_8 = mercury__string__f_43_43_2_f_0((MR_String) " - ", Var_10);
  Str_4 = mercury__string__f_43_43_2_f_0(LangStr_7, Var_8);
  return Str_4;
}

static MR_String MR_CALL 
make__module_dep_file__fim_spec_to_string_1_f_0(
  MR_Word FIMSpec_3)
{
  MR_String Str_4;
  MR_Word Lang_5 = ((MR_Unsigned) ((MR_hl_field(0, FIMSpec_3, (MR_Integer) 0))) & (MR_Integer) 3);
  MR_Word ForeignImport_6 = ((MR_Word) ((MR_hl_field(0, FIMSpec_3, (MR_Integer) 1))));
  MR_String LangStr_7;
  MR_String ForeignImportStr_8;
  MR_String Var_9;

  LangStr_7 = parse_tree__parse_tree_out_misc__mercury_foreign_language_to_string_1_f_0(Lang_5);
  ForeignImportStr_8 = parse_tree__parse_tree_out_sym_name__mercury_bracketed_sym_name_to_string_1_f_0(ForeignImport_6);
  Var_9 = mercury__string__f_43_43_2_f_0((MR_String) " - ", ForeignImportStr_8);
  Str_4 = mercury__string__f_43_43_2_f_0(LangStr_7, Var_9);
  return Str_4;
}

void MR_CALL 
make__module_dep_file__read_module_dep_file_5_p_0(
  MR_String DepFileDir_6,
  MR_String DepFileName_7,
  MR_String DepFileContents_8,
  MR_Word ModuleName_9,
  MR_Word * Result_10)
{
  MR_bool succeeded;
  MR_String DepFilePathName_11;
  MR_Word TermResult_13;
  MR_Word _EndPos_12;

  DepFilePathName_11 = mercury__dir__f_slash_2_f_0(DepFileDir_6, DepFileName_7);
  mercury__mercury_term_parser__read_term_from_string_4_p_0((MR_Word) (&mercury__term__term__type_ctor_info_generic_0), DepFilePathName_11, DepFileContents_8, &_EndPos_12, &TermResult_13);
  switch (MR_tag((MR_Word) TermResult_13)) {
    default: /*NOTREACHED*/ MR_assert(0);
    case (MR_Integer) 0:
      *Result_10 = (MR_Word) (&make__module_dep_file_scalar_common_2[0]);
      break;
    case (MR_Integer) 1:
      {
        MR_String Error_17 = ((MR_String) ((MR_hl_field(1, TermResult_13, (MR_Integer) 0))));
        MR_String Var_21;

        Var_21 = mercury__string__f_43_43_2_f_0((MR_String) "parse error: ", Error_17);
        {
          MR_Word base;
          base = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
          *Result_10 = base;
          MR_hl_field(0, base, 0) = ((MR_Box) (Var_21));
        }
      }
      break;
    case (MR_Integer) 2:
      {
        MR_Word Term_15 = ((MR_Word) ((MR_hl_field(2, TermResult_13, (MR_Integer) 1))));
        MR_Word ModuleSummary_16;

        succeeded = make__module_dep_file__parse_module_dep_file_term_4_p_0(ModuleName_9, DepFileDir_6, Term_15, &ModuleSummary_16);
        if (succeeded)
          {
            MR_Word base;
            base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
            *Result_10 = base;
            MR_hl_field(1, base, 0) = ((MR_Box) (ModuleSummary_16));
          }
        else
          *Result_10 = (MR_Word) (&make__module_dep_file_scalar_common_2[1]);
      }
      break;
  }
}

static MR_bool MR_CALL 
make__module_dep_file__parse_module_dep_file_term_4_p_0_3(
  MR_Box closure_arg)
{
  MR_bool succeeded;
  MR_Box closure = closure_arg;

  succeeded = make__module_dep_file__IntroducedFrom__pred__parse_module_dep_file_term__360__1_2_p_0(((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 3)))), ((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 4)))));
  return succeeded;
}

static MR_bool MR_CALL 
make__module_dep_file__parse_module_dep_file_term_4_p_0_2(
  MR_Box closure_arg)
{
  MR_bool succeeded;
  MR_Box closure = closure_arg;

  succeeded = make__module_dep_file__IntroducedFrom__pred__parse_module_dep_file_term__355__1_2_p_0(((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 3)))), ((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 4)))));
  return succeeded;
}

static MR_bool MR_CALL 
make__module_dep_file__parse_module_dep_file_term_4_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2)
{
  MR_bool succeeded;
  MR_Box closure = closure_arg;
  MR_Word conv0_HeadVar__2_7;

  succeeded = make__module_dep_file__IntroducedFrom__pred__sym_names_term__399__1_2_p_0(((MR_Word) (wrapper_arg_1)), &conv0_HeadVar__2_7);
  if (succeeded)
  {
    *wrapper_arg_2 = ((MR_Box) (conv0_HeadVar__2_7));
    succeeded = MR_TRUE;
  }
  return succeeded;
}

static MR_bool MR_CALL 
make__module_dep_file__parse_module_dep_file_term_4_p_0(
  MR_Word ModuleName_5,
  MR_String DepFileDir_6,
  MR_Word Term_7,
  MR_Word * ModuleSummary_8)
{
  MR_bool succeeded = ((MR_tag((MR_Word) Term_7)) == (MR_Integer) 0);
  MR_Word TypeCtorInfo_75_75;
  MR_Word TypeCtorInfo_78_78;
  MR_Word TypeCtorInfo_81_81;
  MR_Word TypeCtorInfo_84_84;
  MR_Word TypeCtorInfo_90_90;
  MR_Word TypeCtorInfo_92_92;
  MR_Word TypeCtorInfo_6_98;
  MR_Word TypeInfo_for_U_107;
  MR_Word TypeInfo_10_108;
  MR_Word ModuleArgs_9;
  MR_Word VersionNumberTerm_10;
  MR_Word SourceFileTerm_11;
  MR_Word SourceFileModuleNameTerm_12;
  MR_Word ParentsTerm_13;
  MR_Word IntDepsTerm_14;
  MR_Word ImpDepsTerm_15;
  MR_Word ChildrenTerm_16;
  MR_Word NestedSubModulesTerm_17;
  MR_Word FactDepsTerm_18;
  MR_Word ForeignLanguagesTerm_19;
  MR_Word ForeignImportsTerm_20;
  MR_Word ContainsForeignExportTerm_21;
  MR_Word ModuleArgsTail_23;
  MR_Word Version_24;
  MR_String SourceFileName_25;
  MR_Word SourceFileModuleName_26;
  MR_Word Parents_27;
  MR_Word IntDeps_28;
  MR_Word ImpDeps_29;
  MR_Word Children_30;
  MR_Word NestedSubModules0_31;
  MR_Word FactDeps_32;
  MR_Word ForeignLanguages_33;
  MR_Word ForeignImports_34;
  MR_Word ContainsForeignExport_35;
  MR_Word ForeignIncludes_36;
  MR_Word MaybeTopModule_38;
  MR_Word ParentsSet_39;
  MR_Word AncestorsSet_40;
  MR_Word ContainsForeignCode_41;
  MR_Word Var_43;
  MR_Word Var_44;
  MR_Word Var_45;
  MR_Word Var_46;
  MR_Word Var_47;
  MR_Word Var_48;
  MR_Word Var_49;
  MR_Word Var_50;
  MR_Word Var_51;
  MR_Word Var_52;
  MR_Word Var_53;
  MR_Word Var_54;
  MR_Word Var_65;
  MR_String Var_66;
  MR_String Var_67;
  MR_Word Var_68;
  MR_Word Var_69;
  MR_Word Var_70;
  MR_Word Var_71;
  MR_Word Var_72;
  MR_Word Var_73;
  MR_Word Var_74;
  MR_String Var_93;
  MR_Word Var_96;
  MR_Integer Int_97;
  MR_Word Var_100;
  MR_Word Var_101;
  MR_Word P_104;
  MR_Word ArgTerms_105;
  MR_String Var_106;
  MR_String Var_109;
  MR_Word Var_111;

  if (succeeded)
  {
    Var_96 = ((MR_Word) ((MR_hl_field(0, Term_7, (MR_Integer) 0))));
    ModuleArgs_9 = ((MR_Word) ((MR_hl_field(0, Term_7, (MR_Integer) 1))));
    succeeded = ((MR_tag((MR_Word) Var_96)) == (MR_Integer) 0);
    if (succeeded)
    {
      Var_93 = ((MR_String) ((MR_hl_field(0, Var_96, (MR_Integer) 0))));
      succeeded = (strcmp((MR_String) "module", Var_93) == 0);
      if (succeeded)
      {
        succeeded = (ModuleArgs_9 != (MR_Word) ((MR_Unsigned) 0U));
        if (succeeded)
        {
          VersionNumberTerm_10 = ((MR_Word) ((MR_hl_field(1, ModuleArgs_9, (MR_Integer) 0))));
          Var_43 = ((MR_Word) ((MR_hl_field(1, ModuleArgs_9, (MR_Integer) 1))));
          succeeded = (Var_43 != (MR_Word) ((MR_Unsigned) 0U));
          if (succeeded)
          {
            SourceFileTerm_11 = ((MR_Word) ((MR_hl_field(1, Var_43, (MR_Integer) 0))));
            Var_44 = ((MR_Word) ((MR_hl_field(1, Var_43, (MR_Integer) 1))));
            succeeded = (Var_44 != (MR_Word) ((MR_Unsigned) 0U));
            if (succeeded)
            {
              SourceFileModuleNameTerm_12 = ((MR_Word) ((MR_hl_field(1, Var_44, (MR_Integer) 0))));
              Var_45 = ((MR_Word) ((MR_hl_field(1, Var_44, (MR_Integer) 1))));
              succeeded = (Var_45 != (MR_Word) ((MR_Unsigned) 0U));
              if (succeeded)
              {
                ParentsTerm_13 = ((MR_Word) ((MR_hl_field(1, Var_45, (MR_Integer) 0))));
                Var_46 = ((MR_Word) ((MR_hl_field(1, Var_45, (MR_Integer) 1))));
                succeeded = (Var_46 != (MR_Word) ((MR_Unsigned) 0U));
                if (succeeded)
                {
                  IntDepsTerm_14 = ((MR_Word) ((MR_hl_field(1, Var_46, (MR_Integer) 0))));
                  Var_47 = ((MR_Word) ((MR_hl_field(1, Var_46, (MR_Integer) 1))));
                  succeeded = (Var_47 != (MR_Word) ((MR_Unsigned) 0U));
                  if (succeeded)
                  {
                    ImpDepsTerm_15 = ((MR_Word) ((MR_hl_field(1, Var_47, (MR_Integer) 0))));
                    Var_48 = ((MR_Word) ((MR_hl_field(1, Var_47, (MR_Integer) 1))));
                    succeeded = (Var_48 != (MR_Word) ((MR_Unsigned) 0U));
                    if (succeeded)
                    {
                      ChildrenTerm_16 = ((MR_Word) ((MR_hl_field(1, Var_48, (MR_Integer) 0))));
                      Var_49 = ((MR_Word) ((MR_hl_field(1, Var_48, (MR_Integer) 1))));
                      succeeded = (Var_49 != (MR_Word) ((MR_Unsigned) 0U));
                      if (succeeded)
                      {
                        NestedSubModulesTerm_17 = ((MR_Word) ((MR_hl_field(1, Var_49, (MR_Integer) 0))));
                        Var_50 = ((MR_Word) ((MR_hl_field(1, Var_49, (MR_Integer) 1))));
                        succeeded = (Var_50 != (MR_Word) ((MR_Unsigned) 0U));
                        if (succeeded)
                        {
                          FactDepsTerm_18 = ((MR_Word) ((MR_hl_field(1, Var_50, (MR_Integer) 0))));
                          Var_51 = ((MR_Word) ((MR_hl_field(1, Var_50, (MR_Integer) 1))));
                          succeeded = (Var_51 != (MR_Word) ((MR_Unsigned) 0U));
                          if (succeeded)
                          {
                            ForeignLanguagesTerm_19 = ((MR_Word) ((MR_hl_field(1, Var_51, (MR_Integer) 0))));
                            Var_52 = ((MR_Word) ((MR_hl_field(1, Var_51, (MR_Integer) 1))));
                            succeeded = (Var_52 != (MR_Word) ((MR_Unsigned) 0U));
                            if (succeeded)
                            {
                              ForeignImportsTerm_20 = ((MR_Word) ((MR_hl_field(1, Var_52, (MR_Integer) 0))));
                              Var_53 = ((MR_Word) ((MR_hl_field(1, Var_52, (MR_Integer) 1))));
                              succeeded = (Var_53 != (MR_Word) ((MR_Unsigned) 0U));
                              if (succeeded)
                              {
                                ContainsForeignExportTerm_21 = ((MR_Word) ((MR_hl_field(1, Var_53, (MR_Integer) 0))));
                                Var_54 = ((MR_Word) ((MR_hl_field(1, Var_53, (MR_Integer) 1))));
                                succeeded = (Var_54 != (MR_Word) ((MR_Unsigned) 0U));
                                if (succeeded)
                                {
                                  ModuleArgsTail_23 = ((MR_Word) ((MR_hl_field(1, Var_54, (MR_Integer) 1))));
                                  TypeCtorInfo_6_98 = (MR_Word) (&mercury__term__term__type_ctor_info_generic_0);
                                  succeeded = mercury__term_int__decimal_term_to_int_2_p_0(TypeCtorInfo_6_98, VersionNumberTerm_10, &Int_97);
                                  if (succeeded)
                                  {
                                    switch (Int_97) {
                                      default:
                                        succeeded = MR_FALSE;
                                        break;
                                      case (MR_Integer) 1:
                                        {
                                          Version_24 = (MR_Integer) 0;
                                          succeeded = MR_TRUE;
                                        }
                                        break;
                                      case (MR_Integer) 2:
                                        {
                                          Version_24 = (MR_Integer) 1;
                                          succeeded = MR_TRUE;
                                        }
                                        break;
                                    }
                                    if (succeeded)
                                    {
                                      succeeded = ((MR_tag((MR_Word) SourceFileTerm_11)) == (MR_Integer) 0);
                                      if (succeeded)
                                      {
                                        Var_100 = ((MR_Word) ((MR_hl_field(0, SourceFileTerm_11, (MR_Integer) 0))));
                                        Var_101 = ((MR_Word) ((MR_hl_field(0, SourceFileTerm_11, (MR_Integer) 1))));
                                        succeeded = (Var_101 == (MR_Word) ((MR_Unsigned) 0U));
                                        if (succeeded)
                                        {
                                          succeeded = ((MR_tag((MR_Word) Var_100)) == (MR_Integer) 2);
                                          if (succeeded)
                                          {
                                            SourceFileName_25 = ((MR_String) ((MR_hl_field(2, Var_100, (MR_Integer) 0))));
                                            TypeCtorInfo_75_75 = (MR_Word) (&mercury__term__term__type_ctor_info_generic_0);
                                            succeeded = parse_tree__parse_sym_name__try_parse_sym_name_and_no_args_2_p_0(TypeCtorInfo_75_75, SourceFileModuleNameTerm_12, &SourceFileModuleName_26);
                                            if (succeeded)
                                            {
                                              TypeInfo_for_U_107 = (MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0);
                                              P_104 = (MR_Word) (&make__module_dep_file_scalar_common_4[10]);
                                              Var_106 = (MR_String) "{}";
                                              succeeded = ((MR_tag((MR_Word) ParentsTerm_13)) == (MR_Integer) 0);
                                              if (succeeded)
                                              {
                                                Var_111 = ((MR_Word) ((MR_hl_field(0, ParentsTerm_13, (MR_Integer) 0))));
                                                ArgTerms_105 = ((MR_Word) ((MR_hl_field(0, ParentsTerm_13, (MR_Integer) 1))));
                                                succeeded = ((MR_tag((MR_Word) Var_111)) == (MR_Integer) 0);
                                                if (succeeded)
                                                {
                                                  Var_109 = ((MR_String) ((MR_hl_field(0, Var_111, (MR_Integer) 0))));
                                                  succeeded = (strcmp(Var_106, Var_109) == 0);
                                                  if (succeeded)
                                                  {
                                                    TypeInfo_10_108 = (MR_Word) (&make__module_dep_file_scalar_common_1[1]);
                                                    succeeded = mercury__list__map_3_p_2(TypeInfo_10_108, TypeInfo_for_U_107, P_104, ArgTerms_105, &Parents_27);
                                                    if (succeeded)
                                                    {
                                                      succeeded = make__module_dep_file__sym_names_term_2_p_0(IntDepsTerm_14, &IntDeps_28);
                                                      if (succeeded)
                                                      {
                                                        succeeded = make__module_dep_file__sym_names_term_2_p_0(ImpDepsTerm_15, &ImpDeps_29);
                                                        if (succeeded)
                                                        {
                                                          succeeded = make__module_dep_file__sym_names_term_2_p_0(ChildrenTerm_16, &Children_30);
                                                          if (succeeded)
                                                          {
                                                            succeeded = make__module_dep_file__sym_names_term_2_p_0(NestedSubModulesTerm_17, &NestedSubModules0_31);
                                                            if (succeeded)
                                                            {
                                                              TypeCtorInfo_78_78 = (MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0);
                                                              succeeded = make__module_dep_file__braces_term__ho5_3_p_0(FactDepsTerm_18, &FactDeps_32);
                                                              if (succeeded)
                                                              {
                                                                TypeCtorInfo_81_81 = (MR_Word) (&libs__globals__libs__globals__type_ctor_info_foreign_language_0);
                                                                succeeded = make__module_dep_file__braces_term__ho4_3_p_0(ForeignLanguagesTerm_19, &ForeignLanguages_33);
                                                                if (succeeded)
                                                                {
                                                                  TypeCtorInfo_84_84 = (MR_Word) (&parse_tree__prog_data_foreign__parse_tree__prog_data_foreign__type_ctor_info_fim_spec_0);
                                                                  succeeded = make__module_dep_file__braces_term__ho3_3_p_0(ForeignImportsTerm_20, &ForeignImports_34);
                                                                  if (succeeded)
                                                                  {
                                                                    succeeded = make__module_dep_file__contains_foreign_export_term_2_p_0(ContainsForeignExportTerm_21, &ContainsForeignExport_35);
                                                                    if (succeeded)
                                                                    {
                                                                      if ((ModuleArgsTail_23 == (MR_Word) ((MR_Unsigned) 0U)))
                                                                      {
                                                                        succeeded = (Version_24 == (MR_Integer) 0);
                                                                        if (succeeded)
                                                                        {
                                                                          ForeignIncludes_36 = (MR_Word) ((MR_Unsigned) 0U);
                                                                          succeeded = MR_TRUE;
                                                                        }
                                                                      }
                                                                      else
                                                                      {
                                                                        MR_Word ForeignIncludesTerm_37;
                                                                        MR_Word Var_58;

                                                                        succeeded = (Version_24 == (MR_Integer) 1);
                                                                        if (succeeded)
                                                                        {
                                                                          ForeignIncludesTerm_37 = ((MR_Word) ((MR_hl_field(1, ModuleArgsTail_23, (MR_Integer) 0))));
                                                                          Var_58 = ((MR_Word) ((MR_hl_field(1, ModuleArgsTail_23, (MR_Integer) 1))));
                                                                          succeeded = (Var_58 == (MR_Word) ((MR_Unsigned) 0U));
                                                                          if (succeeded)
                                                                            succeeded = make__module_dep_file__braces_term__ho2_3_p_0(ForeignIncludesTerm_37, &ForeignIncludes_36);
                                                                        }
                                                                      }
                                                                      if (succeeded)
                                                                      {
                                                                        succeeded = mdbcomp__sym_name____Unify____sym_name_0_0(ModuleName_5, SourceFileModuleName_26);
                                                                        if (succeeded)
                                                                        {
                                                                          MR_Word Var_60;

                                                                          Var_60 = mercury__set__list_to_set_1_f_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), NestedSubModules0_31);
                                                                          {
                                                                            MaybeTopModule_38 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
                                                                            MR_hl_field(1, MaybeTopModule_38, 0) = ((MR_Box) (Var_60));
                                                                          }
                                                                        }
                                                                        else
                                                                        {
                                                                          MR_Word Var_61;

                                                                          MaybeTopModule_38 = (MR_Word) ((MR_Unsigned) 0U);
                                                                          {
                                                                            Var_61 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
                                                                            MR_hl_field(0, Var_61, 0) = ((MR_Box) (&make__module_dep_file_scalar_common_3[10]));
                                                                            MR_hl_field(0, Var_61, 1) = ((MR_Box) (make__module_dep_file__parse_module_dep_file_term_4_p_0_2));
                                                                            MR_hl_field(0, Var_61, 2) = ((MR_Box) ((MR_Integer) 2));
                                                                            MR_hl_field(0, Var_61, 3) = ((MR_Box) (NestedSubModules0_31));
                                                                            MR_hl_field(0, Var_61, 4) = ((MR_Box) ((MR_Unsigned) 0U));
                                                                          }
                                                                          mercury__require__expect_3_p_0(Var_61, (MR_String) "predicate \140make.module_dep_file.parse_module_dep_file_term\'/4", (MR_String) "NestedSubModules0 != []");
                                                                        }
                                                                        TypeCtorInfo_90_90 = (MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0);
                                                                        mercury__set__list_to_set_2_p_0(TypeCtorInfo_90_90, Parents_27, &ParentsSet_39);
                                                                        AncestorsSet_40 = mdbcomp__sym_name__get_ancestors_set_1_f_0(ModuleName_5);
                                                                        Var_66 = (MR_String) "predicate \140make.module_dep_file.parse_module_dep_file_term\'/4";
                                                                        Var_67 = (MR_String) "ParentsSet != AncestorsSet";
                                                                        {
                                                                          Var_65 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
                                                                          MR_hl_field(0, Var_65, 0) = ((MR_Box) (&make__module_dep_file_scalar_common_3[11]));
                                                                          MR_hl_field(0, Var_65, 1) = ((MR_Box) (make__module_dep_file__parse_module_dep_file_term_4_p_0_3));
                                                                          MR_hl_field(0, Var_65, 2) = ((MR_Box) ((MR_Integer) 2));
                                                                          MR_hl_field(0, Var_65, 3) = ((MR_Box) (ParentsSet_39));
                                                                          MR_hl_field(0, Var_65, 4) = ((MR_Box) (AncestorsSet_40));
                                                                        }
                                                                        mercury__require__expect_3_p_0(Var_65, Var_66, Var_67);
                                                                        Var_68 = mercury__set__list_to_set_1_f_0(TypeCtorInfo_81_81, ForeignLanguages_33);
                                                                        {
                                                                          ContainsForeignCode_41 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
                                                                          MR_hl_field(1, ContainsForeignCode_41, 0) = ((MR_Box) (Var_68));
                                                                        }
                                                                        Var_69 = mercury__set__list_to_set_1_f_0(TypeCtorInfo_90_90, Children_30);
                                                                        Var_70 = mercury__set__list_to_set_1_f_0(TypeCtorInfo_90_90, IntDeps_28);
                                                                        Var_71 = mercury__set__list_to_set_1_f_0(TypeCtorInfo_90_90, ImpDeps_29);
                                                                        Var_72 = mercury__set__list_to_set_1_f_0(TypeCtorInfo_78_78, FactDeps_32);
                                                                        Var_73 = mercury__set__list_to_set_1_f_0(TypeCtorInfo_84_84, ForeignImports_34);
                                                                        TypeCtorInfo_92_92 = (MR_Word) (&parse_tree__prog_data_foreign__parse_tree__prog_data_foreign__type_ctor_info_foreign_include_file_info_0);
                                                                        Var_74 = mercury__set__list_to_set_1_f_0(TypeCtorInfo_92_92, ForeignIncludes_36);
                                                                        {
                                                                          MR_Word base;
                                                                          base = (MR_Word) MR_new_object(MR_Word, (13 * sizeof(MR_Word)), NULL, NULL);
                                                                          *ModuleSummary_8 = base;
                                                                          MR_hl_field(0, base, 0) = ((MR_Box) (SourceFileName_25));
                                                                          MR_hl_field(0, base, 1) = ((MR_Box) (DepFileDir_6));
                                                                          MR_hl_field(0, base, 2) = ((MR_Box) (SourceFileModuleName_26));
                                                                          MR_hl_field(0, base, 3) = ((MR_Box) (ModuleName_5));
                                                                          MR_hl_field(0, base, 4) = ((MR_Box) (Var_69));
                                                                          MR_hl_field(0, base, 5) = ((MR_Box) (MaybeTopModule_38));
                                                                          MR_hl_field(0, base, 6) = ((MR_Box) (Var_70));
                                                                          MR_hl_field(0, base, 7) = ((MR_Box) (Var_71));
                                                                          MR_hl_field(0, base, 8) = ((MR_Box) (Var_72));
                                                                          MR_hl_field(0, base, 9) = ((MR_Box) (Var_73));
                                                                          MR_hl_field(0, base, 10) = ((MR_Box) (Var_74));
                                                                          MR_hl_field(0, base, 11) = ((MR_Box) (ContainsForeignCode_41));
                                                                          MR_hl_field(0, base, 12) = (MR_Box) ((MR_Unsigned) (ContainsForeignExport_35));
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
          }
        }
      }
    }
  }
  return succeeded;
}

static MR_bool MR_CALL 
make__module_dep_file__braces_term__ho5_3_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2)
{
  MR_bool succeeded;
  MR_Box closure = closure_arg;
  MR_String conv0_FactDep_4;

  succeeded = make__module_dep_file__fact_dep_term_2_p_0(((MR_Word) (wrapper_arg_1)), &conv0_FactDep_4);
  if (succeeded)
  {
    *wrapper_arg_2 = ((MR_Box) (conv0_FactDep_4));
    succeeded = MR_TRUE;
  }
  return succeeded;
}

static MR_bool MR_CALL 
make__module_dep_file__braces_term__ho5_3_p_0(
  MR_Word Term_5,
  MR_Word * Args_6)
{
  MR_bool succeeded = ((MR_tag((MR_Word) Term_5)) == (MR_Integer) 0);
  MR_Word TypeInfo_10_10;
  MR_Word ArgTerms_7;
  MR_String Var_11;
  MR_Word Var_13;

  if (succeeded)
  {
    Var_13 = ((MR_Word) ((MR_hl_field(0, Term_5, (MR_Integer) 0))));
    ArgTerms_7 = ((MR_Word) ((MR_hl_field(0, Term_5, (MR_Integer) 1))));
    succeeded = ((MR_tag((MR_Word) Var_13)) == (MR_Integer) 0);
    if (succeeded)
    {
      Var_11 = ((MR_String) ((MR_hl_field(0, Var_13, (MR_Integer) 0))));
      succeeded = (strcmp((MR_String) "{}", Var_11) == 0);
      if (succeeded)
      {
        TypeInfo_10_10 = (MR_Word) (&make__module_dep_file_scalar_common_1[1]);
        succeeded = mercury__list__map_3_p_2(TypeInfo_10_10, (MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), (MR_Word) (&make__module_dep_file_scalar_common_4[9]), ArgTerms_7, Args_6);
      }
    }
  }
  return succeeded;
}

static MR_bool MR_CALL 
make__module_dep_file__braces_term__ho4_3_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2)
{
  MR_bool succeeded;
  MR_Box closure = closure_arg;
  MR_Word conv0_Lang_4;

  succeeded = make__module_dep_file__foreign_language_term_2_p_0(((MR_Word) (wrapper_arg_1)), &conv0_Lang_4);
  if (succeeded)
  {
    *wrapper_arg_2 = ((MR_Box) (conv0_Lang_4));
    succeeded = MR_TRUE;
  }
  return succeeded;
}

static MR_bool MR_CALL 
make__module_dep_file__braces_term__ho4_3_p_0(
  MR_Word Term_5,
  MR_Word * Args_6)
{
  MR_bool succeeded = ((MR_tag((MR_Word) Term_5)) == (MR_Integer) 0);
  MR_Word TypeInfo_10_10;
  MR_Word ArgTerms_7;
  MR_String Var_11;
  MR_Word Var_13;

  if (succeeded)
  {
    Var_13 = ((MR_Word) ((MR_hl_field(0, Term_5, (MR_Integer) 0))));
    ArgTerms_7 = ((MR_Word) ((MR_hl_field(0, Term_5, (MR_Integer) 1))));
    succeeded = ((MR_tag((MR_Word) Var_13)) == (MR_Integer) 0);
    if (succeeded)
    {
      Var_11 = ((MR_String) ((MR_hl_field(0, Var_13, (MR_Integer) 0))));
      succeeded = (strcmp((MR_String) "{}", Var_11) == 0);
      if (succeeded)
      {
        TypeInfo_10_10 = (MR_Word) (&make__module_dep_file_scalar_common_1[1]);
        succeeded = mercury__list__map_3_p_2(TypeInfo_10_10, (MR_Word) (&libs__globals__libs__globals__type_ctor_info_foreign_language_0), (MR_Word) (&make__module_dep_file_scalar_common_4[8]), ArgTerms_7, Args_6);
      }
    }
  }
  return succeeded;
}

static MR_bool MR_CALL 
make__module_dep_file__braces_term__ho3_3_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2)
{
  MR_bool succeeded;
  MR_Box closure = closure_arg;
  MR_Word conv0_FIMSpec_4;

  succeeded = make__module_dep_file__foreign_import_term_2_p_0(((MR_Word) (wrapper_arg_1)), &conv0_FIMSpec_4);
  if (succeeded)
  {
    *wrapper_arg_2 = ((MR_Box) (conv0_FIMSpec_4));
    succeeded = MR_TRUE;
  }
  return succeeded;
}

static MR_bool MR_CALL 
make__module_dep_file__braces_term__ho3_3_p_0(
  MR_Word Term_5,
  MR_Word * Args_6)
{
  MR_bool succeeded = ((MR_tag((MR_Word) Term_5)) == (MR_Integer) 0);
  MR_Word TypeInfo_10_10;
  MR_Word ArgTerms_7;
  MR_String Var_11;
  MR_Word Var_13;

  if (succeeded)
  {
    Var_13 = ((MR_Word) ((MR_hl_field(0, Term_5, (MR_Integer) 0))));
    ArgTerms_7 = ((MR_Word) ((MR_hl_field(0, Term_5, (MR_Integer) 1))));
    succeeded = ((MR_tag((MR_Word) Var_13)) == (MR_Integer) 0);
    if (succeeded)
    {
      Var_11 = ((MR_String) ((MR_hl_field(0, Var_13, (MR_Integer) 0))));
      succeeded = (strcmp((MR_String) "{}", Var_11) == 0);
      if (succeeded)
      {
        TypeInfo_10_10 = (MR_Word) (&make__module_dep_file_scalar_common_1[1]);
        succeeded = mercury__list__map_3_p_2(TypeInfo_10_10, (MR_Word) (&parse_tree__prog_data_foreign__parse_tree__prog_data_foreign__type_ctor_info_fim_spec_0), (MR_Word) (&make__module_dep_file_scalar_common_4[7]), ArgTerms_7, Args_6);
      }
    }
  }
  return succeeded;
}

static MR_bool MR_CALL 
make__module_dep_file__braces_term__ho2_3_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2)
{
  MR_bool succeeded;
  MR_Box closure = closure_arg;
  MR_Word conv0_ForeignInclude_4;

  succeeded = make__module_dep_file__foreign_include_term_2_p_0(((MR_Word) (wrapper_arg_1)), &conv0_ForeignInclude_4);
  if (succeeded)
  {
    *wrapper_arg_2 = ((MR_Box) (conv0_ForeignInclude_4));
    succeeded = MR_TRUE;
  }
  return succeeded;
}

static MR_bool MR_CALL 
make__module_dep_file__braces_term__ho2_3_p_0(
  MR_Word Term_5,
  MR_Word * Args_6)
{
  MR_bool succeeded = ((MR_tag((MR_Word) Term_5)) == (MR_Integer) 0);
  MR_Word TypeInfo_10_10;
  MR_Word ArgTerms_7;
  MR_String Var_11;
  MR_Word Var_13;

  if (succeeded)
  {
    Var_13 = ((MR_Word) ((MR_hl_field(0, Term_5, (MR_Integer) 0))));
    ArgTerms_7 = ((MR_Word) ((MR_hl_field(0, Term_5, (MR_Integer) 1))));
    succeeded = ((MR_tag((MR_Word) Var_13)) == (MR_Integer) 0);
    if (succeeded)
    {
      Var_11 = ((MR_String) ((MR_hl_field(0, Var_13, (MR_Integer) 0))));
      succeeded = (strcmp((MR_String) "{}", Var_11) == 0);
      if (succeeded)
      {
        TypeInfo_10_10 = (MR_Word) (&make__module_dep_file_scalar_common_1[1]);
        succeeded = mercury__list__map_3_p_2(TypeInfo_10_10, (MR_Word) (&parse_tree__prog_data_foreign__parse_tree__prog_data_foreign__type_ctor_info_foreign_include_file_info_0), (MR_Word) (&make__module_dep_file_scalar_common_4[6]), ArgTerms_7, Args_6);
      }
    }
  }
  return succeeded;
}

static MR_bool MR_CALL 
make__module_dep_file__contains_foreign_export_term_2_p_0(
  MR_Word Term_3,
  MR_Word * ContainsForeignExport_4)
{
  MR_bool succeeded = ((MR_tag((MR_Word) Term_3)) == (MR_Integer) 0);
  MR_Word TypeInfo_8_8;
  MR_String Atom_5;
  MR_Word Var_7;
  MR_Word Var_10;

  if (succeeded)
  {
    Var_10 = ((MR_Word) ((MR_hl_field(0, Term_3, (MR_Integer) 0))));
    Var_7 = ((MR_Word) ((MR_hl_field(0, Term_3, (MR_Integer) 1))));
    succeeded = ((MR_tag((MR_Word) Var_10)) == (MR_Integer) 0);
    if (succeeded)
    {
      Atom_5 = ((MR_String) ((MR_hl_field(0, Var_10, (MR_Integer) 0))));
      TypeInfo_8_8 = (MR_Word) (&make__module_dep_file_scalar_common_1[3]);
      succeeded = mercury__builtin__unify_2_p_0(TypeInfo_8_8, ((MR_Box) ((MR_Unsigned) 0U)), ((MR_Box) (Var_7)));
      if (succeeded)
      {
        if ((strcmp(Atom_5, (MR_String) "no_foreign_export") == 0))
        {
          *ContainsForeignExport_4 = (MR_Integer) 1;
          succeeded = MR_TRUE;
        }
        else
        if ((strcmp(Atom_5, (MR_String) "contains_foreign_export") == 0))
        {
          *ContainsForeignExport_4 = (MR_Integer) 0;
          succeeded = MR_TRUE;
        }
        else
          succeeded = MR_FALSE;
      }
    }
  }
  return succeeded;
}

static MR_bool MR_CALL 
make__module_dep_file__sym_names_term_2_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2)
{
  MR_bool succeeded;
  MR_Box closure = closure_arg;
  MR_Word conv0_HeadVar__2_7;

  succeeded = make__module_dep_file__IntroducedFrom__pred__sym_names_term__399__1_2_p_0(((MR_Word) (wrapper_arg_1)), &conv0_HeadVar__2_7);
  if (succeeded)
  {
    *wrapper_arg_2 = ((MR_Box) (conv0_HeadVar__2_7));
    succeeded = MR_TRUE;
  }
  return succeeded;
}

static MR_bool MR_CALL 
make__module_dep_file__sym_names_term_2_p_0(
  MR_Word Term_3,
  MR_Word * SymNames_4)
{
  MR_bool succeeded = ((MR_tag((MR_Word) Term_3)) == (MR_Integer) 0);
  MR_Word TypeInfo_10_14;
  MR_Word ArgTerms_11;
  MR_String Var_15;
  MR_Word Var_17;

  if (succeeded)
  {
    Var_17 = ((MR_Word) ((MR_hl_field(0, Term_3, (MR_Integer) 0))));
    ArgTerms_11 = ((MR_Word) ((MR_hl_field(0, Term_3, (MR_Integer) 1))));
    succeeded = ((MR_tag((MR_Word) Var_17)) == (MR_Integer) 0);
    if (succeeded)
    {
      Var_15 = ((MR_String) ((MR_hl_field(0, Var_17, (MR_Integer) 0))));
      succeeded = (strcmp((MR_String) "{}", Var_15) == 0);
      if (succeeded)
      {
        TypeInfo_10_14 = (MR_Word) (&make__module_dep_file_scalar_common_1[1]);
        succeeded = mercury__list__map_3_p_2(TypeInfo_10_14, (MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), (MR_Word) (&make__module_dep_file_scalar_common_4[5]), ArgTerms_11, SymNames_4);
      }
    }
  }
  return succeeded;
}

void MR_CALL 
make__module_dep_file__write_module_dep_file_5_p_0(
  MR_Word ProgressStream_6,
  MR_Word Globals_7,
  MR_Word BurdenedModule0_8)
{
  MR_Word Baggage0_10 = ((MR_Word) ((MR_hl_field(0, BurdenedModule0_8, (MR_Integer) 0))));
  MR_Word ParseTreeModuleSrc_11 = ((MR_Word) ((MR_hl_field(0, BurdenedModule0_8, (MR_Integer) 1))));
  MR_String SourceFileName_12 = ((MR_String) ((MR_hl_field(0, Baggage0_10, (MR_Integer) 0))));
  MR_Word SourceFileModuleName_14 = ((MR_Word) ((MR_hl_field(0, Baggage0_10, (MR_Integer) 2))));
  MR_Word MaybeTopModule_15 = ((MR_Word) ((MR_hl_field(0, Baggage0_10, (MR_Integer) 3))));
  MR_Word ModuleName_22 = ((MR_Word) ((MR_hl_field(0, ParseTreeModuleSrc_11, (MR_Integer) 0))));
  MR_Word GrabbedFileMap_23;
  MR_Word Errors_24;
  MR_Word Baggage_25;
  MR_Word BurdenedModule_26;
  MR_Word Var_29;
  MR_String Var_30;

  {
    Var_29 = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, Var_29, 0) = ((MR_Box) (ParseTreeModuleSrc_11));
  }
  GrabbedFileMap_23 = mercury__map__singleton_2_f_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), (MR_Word) (&parse_tree__module_baggage__parse_tree__module_baggage__type_ctor_info_grabbed_file_0), ((MR_Box) (ModuleName_22)), ((MR_Box) (Var_29)));
  Errors_24 = parse_tree__parse_error__init_read_module_errors_0_f_0();
  Var_30 = mercury__dir__this_directory_0_f_0();
  {
    Baggage_25 = (MR_Word) MR_new_object(MR_Word, (8 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, Baggage_25, 0) = ((MR_Box) (SourceFileName_12));
    MR_hl_field(0, Baggage_25, 1) = ((MR_Box) (Var_30));
    MR_hl_field(0, Baggage_25, 2) = ((MR_Box) (SourceFileModuleName_14));
    MR_hl_field(0, Baggage_25, 3) = ((MR_Box) (MaybeTopModule_15));
    MR_hl_field(0, Baggage_25, 4) = ((MR_Box) ((MR_Unsigned) 0U));
    MR_hl_field(0, Baggage_25, 5) = ((MR_Box) ((MR_Unsigned) 0U));
    MR_hl_field(0, Baggage_25, 6) = ((MR_Box) (GrabbedFileMap_23));
    MR_hl_field(0, Baggage_25, 7) = ((MR_Box) (Errors_24));
  }
  {
    BurdenedModule_26 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, BurdenedModule_26, 0) = ((MR_Box) (Baggage_25));
    MR_hl_field(0, BurdenedModule_26, 1) = ((MR_Box) (ParseTreeModuleSrc_11));
  }
  make__module_dep_file__do_write_module_dep_file_5_p_0(ProgressStream_6, Globals_7, BurdenedModule_26);
}

void MR_CALL 
make__module_dep_file__do_write_module_dep_file_5_p_0(
  MR_Word ProgressStream_6,
  MR_Word Globals_7,
  MR_Word BurdenedModule_8)
{
  MR_Word Baggage_10 = ((MR_Word) ((MR_hl_field(0, BurdenedModule_8, (MR_Integer) 0))));
  MR_Word ParseTreeModuleSrc_11 = ((MR_Word) ((MR_hl_field(0, BurdenedModule_8, (MR_Integer) 1))));
  MR_Word ModuleName_12 = ((MR_Word) ((MR_hl_field(0, ParseTreeModuleSrc_11, (MR_Integer) 0))));
  MR_String ProgDepFile_13;
  MR_Word ProgDepResult_14;

  parse_tree__file_names__module_name_to_file_name_create_dirs_7_p_0(Globals_7, (MR_String) "predicate \140make.module_dep_file.do_write_module_dep_file\'/5", (MR_Word) (MR_mkword(3, &make__module_dep_file_scalar_common_1[2])), ModuleName_12, &ProgDepFile_13);
  mercury__io__open_output_4_p_0(ProgDepFile_13, &ProgDepResult_14);
  if (((MR_tag((MR_Word) ProgDepResult_14)) == (MR_Integer) 1))
  {
    MR_Word Error_16 = ((MR_Word) ((MR_hl_field(1, ProgDepResult_14, (MR_Integer) 0))));
    MR_String Msg_17;

    mercury__io__error_message_2_p_0(Error_16, &Msg_17);
    mercury__io__write_string_4_p_0(ProgressStream_6, (MR_String) "Error opening ");
    mercury__io__write_string_4_p_0(ProgressStream_6, ProgDepFile_13);
    mercury__io__write_string_4_p_0(ProgressStream_6, (MR_String) " for output: ");
    mercury__io__write_string_4_p_0(ProgressStream_6, Msg_17);
    mercury__io__write_string_4_p_0(ProgressStream_6, (MR_String) "\n");
    mercury__io__set_exit_status_3_p_0((MR_Integer) 1);
  }
  else
  {
    MR_Word ProgDepStream_15 = ((MR_Word) ((MR_hl_field(0, ProgDepResult_14, (MR_Integer) 0))));

    make__module_dep_file__do_write_module_dep_file_to_stream_6_p_0(ProgDepStream_15, Globals_7, Baggage_10, ParseTreeModuleSrc_11);
    mercury__io__close_output_3_p_0(ProgDepStream_15);
  }
}

static MR_Box MR_CALL 
make__module_dep_file__do_write_module_dep_file_to_stream_6_p_0_4(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1)
{
  MR_Box wrapper_arg_2;
  MR_Box closure = closure_arg;
  MR_String conv3_Str_4;

  conv3_Str_4 = make__module_dep_file__foreign_include_file_info_to_string_1_f_0(((MR_Word) (wrapper_arg_1)));
  wrapper_arg_2 = ((MR_Box) (conv3_Str_4));
  return wrapper_arg_2;
}

static MR_Box MR_CALL 
make__module_dep_file__do_write_module_dep_file_to_stream_6_p_0_3(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1)
{
  MR_Box wrapper_arg_2;
  MR_Box closure = closure_arg;
  MR_String conv2_Str_4;

  conv2_Str_4 = make__module_dep_file__fim_spec_to_string_1_f_0(((MR_Word) (wrapper_arg_1)));
  wrapper_arg_2 = ((MR_Box) (conv2_Str_4));
  return wrapper_arg_2;
}

static MR_Box MR_CALL 
make__module_dep_file__do_write_module_dep_file_to_stream_6_p_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1)
{
  MR_Box wrapper_arg_2;
  MR_Box closure = closure_arg;
  MR_String conv1_HeadVar__2_2;

  conv1_HeadVar__2_2 = parse_tree__parse_tree_out_misc__mercury_foreign_language_to_string_1_f_0(((MR_Word) (wrapper_arg_1)));
  wrapper_arg_2 = ((MR_Box) (conv1_HeadVar__2_2));
  return wrapper_arg_2;
}

static MR_Box MR_CALL 
make__module_dep_file__do_write_module_dep_file_to_stream_6_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1)
{
  MR_Box wrapper_arg_2;
  MR_Box closure = closure_arg;
  MR_String conv0_HeadVar__2_2;

  conv0_HeadVar__2_2 = mercury__term_io__quoted_string_1_f_0(((MR_String) (wrapper_arg_1)));
  wrapper_arg_2 = ((MR_Box) (conv0_HeadVar__2_2));
  return wrapper_arg_2;
}

static void MR_CALL 
make__module_dep_file__do_write_module_dep_file_to_stream_6_p_0(
  MR_Word Stream_7,
  MR_Word Globals_8,
  MR_Word Baggage_9,
  MR_Word ParseTreeModuleSrc_10)
{
  MR_bool succeeded;
  MR_String SourceFileName_14 = ((MR_String) ((MR_hl_field(0, Baggage_9, (MR_Integer) 0))));
  MR_Word SourceFileModuleName_15 = ((MR_Word) ((MR_hl_field(0, Baggage_9, (MR_Integer) 2))));
  MR_String SourceFileModuleNameStr_16;
  MR_Word ModuleName_17;
  MR_Word Ancestors_18;
  MR_Word IncludeMap_19;
  MR_Word Children_20;
  MR_Word IntDepSet_21;
  MR_Word ImpDepSet_22;
  MR_Word IntDeps_23;
  MR_Word ImpDeps_24;
  MR_Word MaybeTopModule_25;
  MR_Word NestedSubModules_26;
  MR_Word FactTableFilesSet_27;
  MR_Word FactTableFilesStrs_28;
  MR_Word BackendLangsList_29;
  MR_Word BackendLangs_30;
  MR_Word CodeLangs_31;
  MR_Word ExportLangs_32;
  MR_Word BackendCodeLangs_33;
  MR_Word BackendExportLangs_34;
  MR_Word CodeLangStrs_35;
  MR_Word FIMSpecs_37;
  MR_Word ForeignIncludeFiles_38;
  MR_Word FIMSpecStrs_39;
  MR_Word FIFOStrs_40;
  MR_String ContainsForeignExportStr_41;
  MR_Word Var_44;
  MR_Word Var_46;
  MR_Word Var_48;
  MR_Word Var_50;
  MR_Word Var_52;
  MR_String Var_89;
  MR_String Var_92;
  MR_String Var_95;
  MR_String Var_98;
  MR_String Var_101;
  MR_String Var_104;
  MR_String Var_108;
  MR_String Var_112;
  MR_String Var_118;
  MR_String Var_229;

  SourceFileModuleNameStr_16 = parse_tree__parse_tree_out_sym_name__mercury_bracketed_sym_name_to_string_1_f_0(SourceFileModuleName_15);
  ModuleName_17 = ((MR_Word) ((MR_hl_field(0, ParseTreeModuleSrc_10, (MR_Integer) 0))));
  Var_44 = mdbcomp__sym_name__get_ancestors_set_1_f_0(ModuleName_17);
  Ancestors_18 = mercury__set__to_sorted_list_1_f_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), Var_44);
  IncludeMap_19 = ((MR_Word) ((MR_hl_field(0, ParseTreeModuleSrc_10, (MR_Integer) 2))));
  Children_20 = mercury__map__keys_1_f_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), (MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_include_module_info_0), IncludeMap_19);
  parse_tree__module_baggage__parse_tree_module_src_get_int_imp_deps_3_p_0(ParseTreeModuleSrc_10, &IntDepSet_21, &ImpDepSet_22);
  mercury__set__to_sorted_list_2_p_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), IntDepSet_21, &IntDeps_23);
  mercury__set__to_sorted_list_2_p_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), ImpDepSet_22, &ImpDeps_24);
  MaybeTopModule_25 = ((MR_Word) ((MR_hl_field(0, Baggage_9, (MR_Integer) 3))));
  NestedSubModules_26 = parse_tree__module_baggage__get_nested_children_list_of_top_module_1_f_0(MaybeTopModule_25);
  parse_tree__get_dependencies__get_fact_tables_2_p_0(ParseTreeModuleSrc_10, &FactTableFilesSet_27);
  Var_46 = mercury__set__to_sorted_list_1_f_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), FactTableFilesSet_27);
  FactTableFilesStrs_28 = mercury__list__map_2_f_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), (MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), (MR_Word) (&make__module_dep_file_scalar_common_4[1]), Var_46);
  libs__globals__get_backend_foreign_languages_2_p_0(Globals_8, &BackendLangsList_29);
  BackendLangs_30 = mercury__set__list_to_set_1_f_0((MR_Word) (&libs__globals__libs__globals__type_ctor_info_foreign_language_0), BackendLangsList_29);
  parse_tree__get_dependencies__get_foreign_code_langs_2_p_0(ParseTreeModuleSrc_10, &CodeLangs_31);
  parse_tree__get_dependencies__get_foreign_export_langs_2_p_0(ParseTreeModuleSrc_10, &ExportLangs_32);
  mercury__set__intersect_3_p_0((MR_Word) (&libs__globals__libs__globals__type_ctor_info_foreign_language_0), BackendLangs_30, CodeLangs_31, &BackendCodeLangs_33);
  mercury__set__intersect_3_p_0((MR_Word) (&libs__globals__libs__globals__type_ctor_info_foreign_language_0), BackendLangs_30, ExportLangs_32, &BackendExportLangs_34);
  Var_48 = mercury__set__to_sorted_list_1_f_0((MR_Word) (&libs__globals__libs__globals__type_ctor_info_foreign_language_0), BackendCodeLangs_33);
  CodeLangStrs_35 = mercury__list__map_2_f_0((MR_Word) (&libs__globals__libs__globals__type_ctor_info_foreign_language_0), (MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), (MR_Word) (&make__module_dep_file_scalar_common_4[2]), Var_48);
  parse_tree__get_dependencies__get_fim_specs_2_p_0(ParseTreeModuleSrc_10, &FIMSpecs_37);
  parse_tree__get_dependencies__get_foreign_include_file_infos_2_p_0(ParseTreeModuleSrc_10, &ForeignIncludeFiles_38);
  Var_50 = mercury__set__to_sorted_list_1_f_0((MR_Word) (&parse_tree__prog_data_foreign__parse_tree__prog_data_foreign__type_ctor_info_fim_spec_0), FIMSpecs_37);
  FIMSpecStrs_39 = mercury__list__map_2_f_0((MR_Word) (&parse_tree__prog_data_foreign__parse_tree__prog_data_foreign__type_ctor_info_fim_spec_0), (MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), (MR_Word) (&make__module_dep_file_scalar_common_4[3]), Var_50);
  Var_52 = mercury__set__to_sorted_list_1_f_0((MR_Word) (&parse_tree__prog_data_foreign__parse_tree__prog_data_foreign__type_ctor_info_foreign_include_file_info_0), ForeignIncludeFiles_38);
  FIFOStrs_40 = mercury__list__map_2_f_0((MR_Word) (&parse_tree__prog_data_foreign__parse_tree__prog_data_foreign__type_ctor_info_foreign_include_file_info_0), (MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), (MR_Word) (&make__module_dep_file_scalar_common_4[4]), Var_52);
  succeeded = mercury__set__is_empty_1_p_0((MR_Word) (&libs__globals__libs__globals__type_ctor_info_foreign_language_0), BackendExportLangs_34);
  if (succeeded)
    ContainsForeignExportStr_41 = (MR_String) "no_foreign_export";
  else
    ContainsForeignExportStr_41 = (MR_String) "contains_foreign_export";
  Var_89 = make__module_dep_file__bracketed_sym_names_to_comma_list_string_1_f_0(Ancestors_18);
  Var_92 = make__module_dep_file__bracketed_sym_names_to_comma_list_string_1_f_0(IntDeps_23);
  Var_95 = make__module_dep_file__bracketed_sym_names_to_comma_list_string_1_f_0(ImpDeps_24);
  Var_98 = make__module_dep_file__bracketed_sym_names_to_comma_list_string_1_f_0(Children_20);
  Var_101 = make__module_dep_file__bracketed_sym_names_to_comma_list_string_1_f_0(NestedSubModules_26);
  Var_104 = mercury__string__join_list_2_f_0((MR_String) ", ", FactTableFilesStrs_28);
  Var_108 = mercury__string__join_list_2_f_0((MR_String) ", ", CodeLangStrs_35);
  Var_112 = mercury__string__join_list_2_f_0((MR_String) ", ", FIMSpecStrs_39);
  Var_118 = mercury__string__join_list_2_f_0((MR_String) ", ", FIFOStrs_40);
  mercury__io__write_string_4_p_0(Stream_7, (MR_String) "module(");
  mercury__string__format__format_signed_int_component_nowidth_noprec_3_p_0((MR_Word) (&make__module_dep_file_scalar_common_2[2]), (MR_Integer) 2, &Var_229);
  mercury__io__write_string_4_p_0(Stream_7, Var_229);
  mercury__io__write_string_4_p_0(Stream_7, (MR_String) ", \"");
  mercury__io__write_string_4_p_0(Stream_7, SourceFileName_14);
  mercury__io__write_string_4_p_0(Stream_7, (MR_String) "\",\n\t");
  mercury__io__write_string_4_p_0(Stream_7, SourceFileModuleNameStr_16);
  mercury__io__write_string_4_p_0(Stream_7, (MR_String) ",\n\t{");
  mercury__io__write_string_4_p_0(Stream_7, Var_89);
  mercury__io__write_string_4_p_0(Stream_7, (MR_String) "},\n\t{");
  mercury__io__write_string_4_p_0(Stream_7, Var_92);
  mercury__io__write_string_4_p_0(Stream_7, (MR_String) "},\n\t{");
  mercury__io__write_string_4_p_0(Stream_7, Var_95);
  mercury__io__write_string_4_p_0(Stream_7, (MR_String) "},\n\t{");
  mercury__io__write_string_4_p_0(Stream_7, Var_98);
  mercury__io__write_string_4_p_0(Stream_7, (MR_String) "},\n\t{");
  mercury__io__write_string_4_p_0(Stream_7, Var_101);
  mercury__io__write_string_4_p_0(Stream_7, (MR_String) "},\n\t{");
  mercury__io__write_string_4_p_0(Stream_7, Var_104);
  mercury__io__write_string_4_p_0(Stream_7, (MR_String) "},\n\t{");
  mercury__io__write_string_4_p_0(Stream_7, Var_108);
  mercury__io__write_string_4_p_0(Stream_7, (MR_String) "},\n\t{");
  mercury__io__write_string_4_p_0(Stream_7, Var_112);
  mercury__io__write_string_4_p_0(Stream_7, (MR_String) "},\n\t");
  mercury__io__write_string_4_p_0(Stream_7, ContainsForeignExportStr_41);
  mercury__io__write_string_4_p_0(Stream_7, (MR_String) ",\n\tno_main,\n\t{");
  mercury__io__write_string_4_p_0(Stream_7, Var_118);
  mercury__io__write_string_4_p_0(Stream_7, (MR_String) "}\n).\n");
}

static MR_Box MR_CALL 
make__module_dep_file__bracketed_sym_names_to_comma_list_string_1_f_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1)
{
  MR_Box wrapper_arg_2;
  MR_Box closure = closure_arg;
  MR_String conv0_HeadVar__2_2;

  conv0_HeadVar__2_2 = parse_tree__parse_tree_out_sym_name__mercury_bracketed_sym_name_to_string_1_f_0(((MR_Word) (wrapper_arg_1)));
  wrapper_arg_2 = ((MR_Box) (conv0_HeadVar__2_2));
  return wrapper_arg_2;
}

static MR_String MR_CALL 
make__module_dep_file__bracketed_sym_names_to_comma_list_string_1_f_0(
  MR_Word SymNames_3)
{
  MR_String Str_4;
  MR_Word Strs_5;

  Strs_5 = mercury__list__map_2_f_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), (MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), (MR_Word) (&make__module_dep_file_scalar_common_4[0]), SymNames_3);
  Str_4 = mercury__string__join_list_2_f_0((MR_String) ", ", Strs_5);
  return Str_4;
}

static MR_bool MR_CALL 
make__module_dep_file____Unify____module_dep_file_version_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  MR_bool succeeded;

  succeeded = make__module_dep_file____Unify____module_dep_file_version_0_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
  return succeeded;
}

static void MR_CALL 
make__module_dep_file____Compare____module_dep_file_version_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  MR_Word conv0_HeadVar__1_1;

  make__module_dep_file____Compare____module_dep_file_version_0_0(&conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
  *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
}

void mercury__make__module_dep_file__init(void)
{
}

void mercury__make__module_dep_file__init_type_tables(void)
{
	static MR_bool initialised = MR_FALSE;
	if (initialised) return;
	initialised = MR_TRUE;

	MR_register_type_ctor_info(&make__module_dep_file__make__module_dep_file__type_ctor_info_module_dep_file_version_0);
}

void mercury__make__module_dep_file__init_debugger(void)
{
	MR_fatal_error("debugger initialization in MLDS grade");
}

// Ensure everything is compiled with the same grade.
const char *mercury__make__module_dep_file__grade_check(void)
{
    return &MR_GRADE_VAR;
}

// :- end_module make.module_dep_file.
