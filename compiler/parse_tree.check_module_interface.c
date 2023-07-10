/*
** Automatically generated from `check_module_interface.m'
** by the Mercury compiler,
** version rotd-2023-07-10
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


// :- module parse_tree.check_module_interface.
// :- implementation.

/*
INIT mercury__parse_tree__check_module_interface__init
ENDINIT
*/

#include "parse_tree.check_module_interface.mih"


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
#include "int.mih"
#include "io.mih"
#include "libs.mih"
#include "list.mih"
#include "map.mih"
#include "maybe.mih"
#include "mdbcomp.mih"
#include "one_or_more.mih"
#include "one_or_more_map.mih"
#include "pair.mih"
#include "parse_tree.mih"
#include "pretty_printer.mih"
#include "private_builtin.mih"
#include "recompilation.mih"
#include "set.mih"
#include "set_ordlist.mih"
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
#include "libs.globals.mih"
#include "libs.op_mode.mih"
#include "libs.optimization_options.mih"
#include "libs.options.mih"
#include "libs.timestamp.mih"
#include "libs.trace_params.mih"
#include "mdbcomp.feedback.mih"
#include "mdbcomp.prim_data.mih"
#include "mdbcomp.sym_name.mih"
#include "parse_tree.error_spec.mih"
#include "parse_tree.item_util.mih"
#include "parse_tree.maybe_error.mih"
#include "parse_tree.prog_data.mih"
#include "parse_tree.prog_data_foreign.mih"
#include "parse_tree.prog_data_pragma.mih"
#include "parse_tree.prog_item.mih"
#include "parse_tree.set_of_var.mih"




static void MR_CALL 
parse_tree__check_module_interface__IntroducedFrom__pred__check_module_interface_for_no_exports__74__1_4_p_0(
  MR_Word LambdaHeadVar__1_59,
  MR_Word LambdaHeadVar__2_60,
  MR_Integer LambdaHeadVar__3_61,
  MR_Integer * LambdaHeadVar__4_62);

static void MR_CALL 
parse_tree__check_module_interface__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_73_110_116_114_111_100_117_99_101_100_70_114_111_109_95_95_112_114_101_100_95_95_99_104_101_99_107_95_109_111_100_117_108_101_95_105_110_116_101_114_102_97_99_101_95_102_111_114_95_110_111_95_101_120_112_111_114_116_115_95_95_55_52_95_95_49_95_95_91_49_93_95_48_4_p_0(
  MR_Word LambdaHeadVar__2_60,
  MR_Integer LambdaHeadVar__3_61,
  MR_Integer * LambdaHeadVar__4_62);

static void MR_CALL 
parse_tree__check_module_interface__check_module_interface_for_no_exports_4_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box * wrapper_arg_4);


static /* final */ const MR_Box parse_tree__check_module_interface_scalar_common_1[1][1];

static /* final */ const MR_Box parse_tree__check_module_interface_scalar_common_2[51][2];

static /* final */ const MR_Box parse_tree__check_module_interface_scalar_common_3[1][7];

static /* final */ const MR_Box parse_tree__check_module_interface_scalar_common_4[1][3];




static /* final */ const MR_Box parse_tree__check_module_interface_scalar_common_1[1][1] = {
  /* row   0 */
  { ((MR_Box) ((MR_Integer) 2)) },
};

static /* final */ const MR_Box parse_tree__check_module_interface_scalar_common_2[51][2] = {
  /* row   0 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 6U)),
    ((MR_Box) ((MR_String) "Warning: the interface of module"))
  },
  /* row   1 */
  {
    ((MR_Box) ((MR_Unsigned) 8U)),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row   2 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 6U)),
    ((MR_Box) ((MR_String) "does not export anything."))
  },
  /* row   3 */
  {
    ((MR_Box) (MR_mkword(3, &parse_tree__check_module_interface_scalar_common_2[2]))),
    ((MR_Box) (MR_mkword(1, &parse_tree__check_module_interface_scalar_common_2[1])))
  },
  /* row   4 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 6U)),
    ((MR_Box) ((MR_String) "definition."))
  },
  /* row   5 */
  {
    ((MR_Box) (MR_mkword(3, &parse_tree__check_module_interface_scalar_common_2[4]))),
    ((MR_Box) (MR_mkword(1, &parse_tree__check_module_interface_scalar_common_2[1])))
  },
  /* row   6 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 31U)),
    ((MR_Box) ((MR_String) "instance"))
  },
  /* row   7 */
  {
    ((MR_Box) (MR_mkword(3, &parse_tree__check_module_interface_scalar_common_2[6]))),
    ((MR_Box) (MR_mkword(1, &parse_tree__check_module_interface_scalar_common_2[5])))
  },
  /* row   8 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 6U)),
    ((MR_Box) ((MR_String) "or"))
  },
  /* row   9 */
  {
    ((MR_Box) (MR_mkword(3, &parse_tree__check_module_interface_scalar_common_2[8]))),
    ((MR_Box) (MR_mkword(1, &parse_tree__check_module_interface_scalar_common_2[7])))
  },
  /* row  10 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 31U)),
    ((MR_Box) ((MR_String) "typeclass"))
  },
  /* row  11 */
  {
    ((MR_Box) (MR_mkword(3, &parse_tree__check_module_interface_scalar_common_2[10]))),
    ((MR_Box) (MR_mkword(1, &parse_tree__check_module_interface_scalar_common_2[9])))
  },
  /* row  12 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) ","))
  },
  /* row  13 */
  {
    ((MR_Box) (MR_mkword(3, &parse_tree__check_module_interface_scalar_common_2[12]))),
    ((MR_Box) (MR_mkword(1, &parse_tree__check_module_interface_scalar_common_2[11])))
  },
  /* row  14 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 31U)),
    ((MR_Box) ((MR_String) "mode"))
  },
  /* row  15 */
  {
    ((MR_Box) (MR_mkword(3, &parse_tree__check_module_interface_scalar_common_2[14]))),
    ((MR_Box) (MR_mkword(1, &parse_tree__check_module_interface_scalar_common_2[13])))
  },
  /* row  16 */
  {
    ((MR_Box) (MR_mkword(3, &parse_tree__check_module_interface_scalar_common_2[12]))),
    ((MR_Box) (MR_mkword(1, &parse_tree__check_module_interface_scalar_common_2[15])))
  },
  /* row  17 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 31U)),
    ((MR_Box) ((MR_String) "inst"))
  },
  /* row  18 */
  {
    ((MR_Box) (MR_mkword(3, &parse_tree__check_module_interface_scalar_common_2[17]))),
    ((MR_Box) (MR_mkword(1, &parse_tree__check_module_interface_scalar_common_2[16])))
  },
  /* row  19 */
  {
    ((MR_Box) (MR_mkword(3, &parse_tree__check_module_interface_scalar_common_2[12]))),
    ((MR_Box) (MR_mkword(1, &parse_tree__check_module_interface_scalar_common_2[18])))
  },
  /* row  20 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 31U)),
    ((MR_Box) ((MR_String) "type"))
  },
  /* row  21 */
  {
    ((MR_Box) (MR_mkword(3, &parse_tree__check_module_interface_scalar_common_2[20]))),
    ((MR_Box) (MR_mkword(1, &parse_tree__check_module_interface_scalar_common_2[19])))
  },
  /* row  22 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 6U)),
    ((MR_Box) ((MR_String) "declaration, or a"))
  },
  /* row  23 */
  {
    ((MR_Box) (MR_mkword(3, &parse_tree__check_module_interface_scalar_common_2[22]))),
    ((MR_Box) (MR_mkword(1, &parse_tree__check_module_interface_scalar_common_2[21])))
  },
  /* row  24 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 31U)),
    ((MR_Box) ((MR_String) "func"))
  },
  /* row  25 */
  {
    ((MR_Box) (MR_mkword(3, &parse_tree__check_module_interface_scalar_common_2[24]))),
    ((MR_Box) (MR_mkword(1, &parse_tree__check_module_interface_scalar_common_2[23])))
  },
  /* row  26 */
  {
    ((MR_Box) (MR_mkword(3, &parse_tree__check_module_interface_scalar_common_2[8]))),
    ((MR_Box) (MR_mkword(1, &parse_tree__check_module_interface_scalar_common_2[25])))
  },
  /* row  27 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 31U)),
    ((MR_Box) ((MR_String) "pred"))
  },
  /* row  28 */
  {
    ((MR_Box) (MR_mkword(3, &parse_tree__check_module_interface_scalar_common_2[27]))),
    ((MR_Box) (MR_mkword(1, &parse_tree__check_module_interface_scalar_common_2[26])))
  },
  /* row  29 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 6U)),
    ((MR_Box) ((MR_String) "This would normally be a"))
  },
  /* row  30 */
  {
    ((MR_Box) (MR_mkword(3, &parse_tree__check_module_interface_scalar_common_2[29]))),
    ((MR_Box) (MR_mkword(1, &parse_tree__check_module_interface_scalar_common_2[28])))
  },
  /* row  31 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 6U)),
    ((MR_Box) ((MR_String) "in its interface section(s)."))
  },
  /* row  32 */
  {
    ((MR_Box) (MR_mkword(3, &parse_tree__check_module_interface_scalar_common_2[31]))),
    ((MR_Box) (MR_mkword(1, &parse_tree__check_module_interface_scalar_common_2[30])))
  },
  /* row  33 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 31U)),
    ((MR_Box) ((MR_String) "import_module"))
  },
  /* row  34 */
  {
    ((MR_Box) (MR_mkword(3, &parse_tree__check_module_interface_scalar_common_2[33]))),
    ((MR_Box) (MR_mkword(1, &parse_tree__check_module_interface_scalar_common_2[32])))
  },
  /* row  35 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 6U)),
    ((MR_Box) ((MR_String) "other than"))
  },
  /* row  36 */
  {
    ((MR_Box) (MR_mkword(3, &parse_tree__check_module_interface_scalar_common_2[35]))),
    ((MR_Box) (MR_mkword(1, &parse_tree__check_module_interface_scalar_common_2[34])))
  },
  /* row  37 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 6U)),
    ((MR_Box) ((MR_String) "A file should contain at least one declaration"))
  },
  /* row  38 */
  {
    ((MR_Box) (MR_mkword(3, &parse_tree__check_module_interface_scalar_common_2[37]))),
    ((MR_Box) (MR_mkword(1, &parse_tree__check_module_interface_scalar_common_2[36])))
  },
  /* row  39 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 6U)),
    ((MR_Box) ((MR_String) "To be useful, a module should export something."))
  },
  /* row  40 */
  {
    ((MR_Box) (MR_mkword(3, &parse_tree__check_module_interface_scalar_common_2[39]))),
    ((MR_Box) (MR_mkword(1, &parse_tree__check_module_interface_scalar_common_2[38])))
  },
  /* row  41 */
  {
    (MR_Box) ((MR_Unsigned) 0U),
    ((MR_Box) (MR_mkword(1, &parse_tree__check_module_interface_scalar_common_2[40])))
  },
  /* row  42 */
  {
    ((MR_Box) (MR_mkword(2, &parse_tree__check_module_interface_scalar_common_2[41]))),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row  43 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 6U)),
    ((MR_Box) ((MR_String) "by that submodule."))
  },
  /* row  44 */
  {
    ((MR_Box) (MR_mkword(3, &parse_tree__check_module_interface_scalar_common_2[43]))),
    ((MR_Box) (MR_mkword(1, &parse_tree__check_module_interface_scalar_common_2[1])))
  },
  /* row  45 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 6U)),
    ((MR_Box) ((MR_String) "is not useful, because it can be replaced"))
  },
  /* row  46 */
  {
    ((MR_Box) (MR_mkword(3, &parse_tree__check_module_interface_scalar_common_2[45]))),
    ((MR_Box) (MR_mkword(1, &parse_tree__check_module_interface_scalar_common_2[44])))
  },
  /* row  47 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 6U)),
    ((MR_Box) ((MR_String) "A module that includes a single submodule"))
  },
  /* row  48 */
  {
    ((MR_Box) (MR_mkword(3, &parse_tree__check_module_interface_scalar_common_2[47]))),
    ((MR_Box) (MR_mkword(1, &parse_tree__check_module_interface_scalar_common_2[46])))
  },
  /* row  49 */
  {
    (MR_Box) ((MR_Unsigned) 0U),
    ((MR_Box) (MR_mkword(1, &parse_tree__check_module_interface_scalar_common_2[48])))
  },
  /* row  50 */
  {
    ((MR_Box) (MR_mkword(2, &parse_tree__check_module_interface_scalar_common_2[49]))),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
};

static /* final */ const MR_Box parse_tree__check_module_interface_scalar_common_3[1][7] = {
  /* row   0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 4)),
    ((MR_Box) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0)),
    ((MR_Box) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_include_module_info_0)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_int_0)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_int_0))
  },
};

static /* final */ const MR_Box parse_tree__check_module_interface_scalar_common_4[1][3] = {
  /* row   0 */
  {
    ((MR_Box) (&parse_tree__check_module_interface_scalar_common_3[0])),
    ((MR_Box) (parse_tree__check_module_interface__check_module_interface_for_no_exports_4_p_0_1)),
    ((MR_Box) ((MR_Integer) 0))
  },
};



#include "array.mh"
#include "bitmap.mh"
#include "io.mh"
#include "string.mh"
#include "time.mh"
#include "io.stream_ops.mh"


static void MR_CALL 
parse_tree__check_module_interface__IntroducedFrom__pred__check_module_interface_for_no_exports__74__1_4_p_0(
  MR_Word LambdaHeadVar__1_59,
  MR_Word LambdaHeadVar__2_60,
  MR_Integer LambdaHeadVar__3_61,
  MR_Integer * LambdaHeadVar__4_62)
{
  parse_tree__check_module_interface__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_73_110_116_114_111_100_117_99_101_100_70_114_111_109_95_95_112_114_101_100_95_95_99_104_101_99_107_95_109_111_100_117_108_101_95_105_110_116_101_114_102_97_99_101_95_102_111_114_95_110_111_95_101_120_112_111_114_116_115_95_95_55_52_95_95_49_95_95_91_49_93_95_48_4_p_0(LambdaHeadVar__2_60, LambdaHeadVar__3_61, LambdaHeadVar__4_62);
}

static void MR_CALL 
parse_tree__check_module_interface__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_73_110_116_114_111_100_117_99_101_100_70_114_111_109_95_95_112_114_101_100_95_95_99_104_101_99_107_95_109_111_100_117_108_101_95_105_110_116_101_114_102_97_99_101_95_102_111_114_95_110_111_95_101_120_112_111_114_116_115_95_95_55_52_95_95_49_95_95_91_49_93_95_48_4_p_0(
  MR_Word LambdaHeadVar__2_60,
  MR_Integer LambdaHeadVar__3_61,
  MR_Integer * LambdaHeadVar__4_62)
{
  MR_Word Section_46 = ((MR_Unsigned) ((MR_hl_field(0, LambdaHeadVar__2_60, (MR_Integer) 0))) & (MR_Integer) 1);

  switch (Section_46) {
    default: /*NOTREACHED*/ MR_assert(0);
    case (MR_Integer) 1:
      *LambdaHeadVar__4_62 = LambdaHeadVar__3_61;
      break;
    case (MR_Integer) 0:
      *LambdaHeadVar__4_62 = (MR_Integer) ((MR_Unsigned) LambdaHeadVar__3_61 + (MR_Unsigned) 1);
      break;
  }
}

static void MR_CALL 
parse_tree__check_module_interface__check_module_interface_for_no_exports_4_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box * wrapper_arg_4)
{
  MR_Box closure = closure_arg;
  MR_Integer conv0_LambdaHeadVar__4_62;

  parse_tree__check_module_interface__IntroducedFrom__pred__check_module_interface_for_no_exports__74__1_4_p_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), ((MR_Integer) (wrapper_arg_3)), &conv0_LambdaHeadVar__4_62);
  *wrapper_arg_4 = ((MR_Box) (conv0_LambdaHeadVar__4_62));
}

void MR_CALL 
parse_tree__check_module_interface__check_module_interface_for_no_exports_4_p_0(
  MR_Word Globals_5,
  MR_Word ParseTreeModuleSrc_6,
  MR_Word STATE_VARIABLE_Specs_0_56,
  MR_Word * STATE_VARIABLE_Specs_57)
{
  MR_bool succeeded;
  MR_Word ExportWarning_8;

  libs__globals__lookup_bool_option_3_p_0(Globals_5, (MR_Integer) 13, &ExportWarning_8);
  switch (ExportWarning_8) {
    default: /*NOTREACHED*/ MR_assert(0);
    case (MR_Integer) 0:
      *STATE_VARIABLE_Specs_57 = STATE_VARIABLE_Specs_0_56;
      break;
    case (MR_Integer) 1:
      {
        MR_Word ModuleName_9 = ((MR_Word) ((MR_hl_field(0, ParseTreeModuleSrc_6, (MR_Integer) 0))));
        MR_Word ModuleNameContext_10 = ((MR_Word) ((MR_hl_field(0, ParseTreeModuleSrc_6, (MR_Integer) 1))));
        MR_Word InclMap_11 = ((MR_Word) ((MR_hl_field(0, ParseTreeModuleSrc_6, (MR_Integer) 2))));
        MR_Word TypeCtorCheckedMap_17 = ((MR_Word) ((MR_hl_field(0, ParseTreeModuleSrc_6, (MR_Integer) 8))));
        MR_Word InstCtorCheckedMap_18 = ((MR_Word) ((MR_hl_field(0, ParseTreeModuleSrc_6, (MR_Integer) 9))));
        MR_Word ModeCtorCheckedMap_19 = ((MR_Word) ((MR_hl_field(0, ParseTreeModuleSrc_6, (MR_Integer) 10))));
        MR_Word TypeSpecs_20 = ((MR_Word) ((MR_hl_field(0, ParseTreeModuleSrc_6, (MR_Integer) 11))));
        MR_Word InstModeSpecs_21 = ((MR_Word) ((MR_hl_field(0, ParseTreeModuleSrc_6, (MR_Integer) 12))));
        MR_Word IntTypeClasses_22 = ((MR_Word) ((MR_hl_field(0, ParseTreeModuleSrc_6, (MR_Integer) 13))));
        MR_Word IntInstances_23 = ((MR_Word) ((MR_hl_field(0, ParseTreeModuleSrc_6, (MR_Integer) 14))));
        MR_Word IntPredDecls_24 = ((MR_Word) ((MR_hl_field(0, ParseTreeModuleSrc_6, (MR_Integer) 15))));
        MR_Word IntModeDecls_25 = ((MR_Word) ((MR_hl_field(0, ParseTreeModuleSrc_6, (MR_Integer) 16))));
        MR_Word IntDeclPragmas_26 = ((MR_Word) ((MR_hl_field(0, ParseTreeModuleSrc_6, (MR_Integer) 17))));
        MR_Word IntPromises_27 = ((MR_Word) ((MR_hl_field(0, ParseTreeModuleSrc_6, (MR_Integer) 18))));
        MR_Integer NumIntIncls_48;
        MR_Box conv1_NumIntIncls_48;
        MR_Word IntTypeDefns_49;
        MR_Word IntInstDefns_52;
        MR_Word IntModeDefns_54;
        MR_Word Var_50;
        MR_Word Var_51;
        MR_Word Var_53;
        MR_Word Var_55;

        mercury__map__foldl_4_p_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), (MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_include_module_info_0), (MR_Word) (&mercury__builtin__builtin__type_ctor_info_int_0), (MR_Word) (&parse_tree__check_module_interface_scalar_common_4[0]), InclMap_11, ((MR_Box) ((MR_Integer) 0)), &conv1_NumIntIncls_48);
        NumIntIncls_48 = ((MR_Integer) (conv1_NumIntIncls_48));
        switch (NumIntIncls_48) {
          default:
            succeeded = MR_FALSE;
            break;
          case (MR_Integer) 0:
            succeeded = MR_TRUE;
            break;
          case (MR_Integer) 1:
            succeeded = MR_TRUE;
            break;
        }
        if (succeeded)
        {
          parse_tree__item_util__type_ctor_checked_map_get_src_defns_4_p_0(TypeCtorCheckedMap_17, &IntTypeDefns_49, &Var_50, &Var_51);
          succeeded = (IntTypeDefns_49 == (MR_Word) ((MR_Unsigned) 0U));
          if (succeeded)
          {
            parse_tree__item_util__inst_ctor_checked_map_get_src_defns_3_p_0(InstCtorCheckedMap_18, &IntInstDefns_52, &Var_53);
            succeeded = (IntInstDefns_52 == (MR_Word) ((MR_Unsigned) 0U));
            if (succeeded)
            {
              parse_tree__item_util__mode_ctor_checked_map_get_src_defns_3_p_0(ModeCtorCheckedMap_19, &IntModeDefns_54, &Var_55);
              succeeded = (IntModeDefns_54 == (MR_Word) ((MR_Unsigned) 0U));
              if (succeeded)
              {
                succeeded = (TypeSpecs_20 == (MR_Word) ((MR_Unsigned) 0U));
                if (succeeded)
                {
                  succeeded = (InstModeSpecs_21 == (MR_Word) ((MR_Unsigned) 0U));
                  if (succeeded)
                  {
                    succeeded = (IntTypeClasses_22 == (MR_Word) ((MR_Unsigned) 0U));
                    if (succeeded)
                    {
                      succeeded = (IntInstances_23 == (MR_Word) ((MR_Unsigned) 0U));
                      if (succeeded)
                      {
                        succeeded = (IntPredDecls_24 == (MR_Word) ((MR_Unsigned) 0U));
                        if (succeeded)
                        {
                          succeeded = (IntModeDecls_25 == (MR_Word) ((MR_Unsigned) 0U));
                          if (succeeded)
                          {
                            succeeded = (IntDeclPragmas_26 == (MR_Word) ((MR_Unsigned) 0U));
                            if (succeeded)
                              succeeded = (IntPromises_27 == (MR_Word) ((MR_Unsigned) 0U));
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
        if (succeeded)
        {
          MR_Word MainMsg_74;
          MR_Word Msgs_75;
          MR_Word Spec_77;
          MR_Word Var_78;
          MR_Word Var_79;
          MR_Word Var_80;
          MR_Word Var_83;
          MR_Word Var_86;
          MR_Word Var_87;

          {
            Var_87 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(3, Var_87, 0) = ((MR_Box) ((MR_Unsigned) 8U));
            MR_hl_field(3, Var_87, 1) = ((MR_Box) (ModuleName_9));
          }
          {
            Var_86 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(1, Var_86, 0) = ((MR_Box) (Var_87));
            MR_hl_field(1, Var_86, 1) = ((MR_Box) (MR_mkword(1, &parse_tree__check_module_interface_scalar_common_2[3])));
          }
          {
            Var_83 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(1, Var_83, 0) = ((MR_Box) (MR_mkword(3, &parse_tree__check_module_interface_scalar_common_2[0])));
            MR_hl_field(1, Var_83, 1) = ((MR_Box) (Var_86));
          }
          {
            Var_80 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(1, Var_80, 0) = ((MR_Box) (MR_mkword(1, &parse_tree__check_module_interface_scalar_common_1[0])));
            MR_hl_field(1, Var_80, 1) = ((MR_Box) (Var_83));
          }
          {
            Var_79 = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
            MR_hl_field(0, Var_79, 0) = ((MR_Box) (Var_80));
          }
          {
            Var_78 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(1, Var_78, 0) = ((MR_Box) (Var_79));
            MR_hl_field(1, Var_78, 1) = ((MR_Box) (MR_mkword(1, &parse_tree__check_module_interface_scalar_common_2[42])));
          }
          {
            MainMsg_74 = (MR_Word) MR_mkword(2, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(2, MainMsg_74, 0) = ((MR_Box) (ModuleNameContext_10));
            MR_hl_field(2, MainMsg_74, 1) = ((MR_Box) (Var_78));
          }
          switch (NumIntIncls_48) {
            default: /*NOTREACHED*/ MR_assert(0);
            case (MR_Integer) 0:
              {
                Msgs_75 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(1, Msgs_75, 0) = ((MR_Box) (MainMsg_74));
                MR_hl_field(1, Msgs_75, 1) = ((MR_Box) (IntPromises_27));
              }
              break;
            case (MR_Integer) 1:
              {
                MR_Word InclMsg_76;
                MR_Word Var_92;

                {
                  InclMsg_76 = (MR_Word) MR_mkword(2, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(2, InclMsg_76, 0) = ((MR_Box) (ModuleNameContext_10));
                  MR_hl_field(2, InclMsg_76, 1) = ((MR_Box) (MR_mkword(1, &parse_tree__check_module_interface_scalar_common_2[50])));
                }
                {
                  Var_92 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(1, Var_92, 0) = ((MR_Box) (InclMsg_76));
                  MR_hl_field(1, Var_92, 1) = ((MR_Box) (IntPromises_27));
                }
                {
                  Msgs_75 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(1, Msgs_75, 0) = ((MR_Box) (MainMsg_74));
                  MR_hl_field(1, Msgs_75, 1) = ((MR_Box) (Var_92));
                }
              }
              break;
          }
          {
            Spec_77 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
            MR_hl_field(0, Spec_77, 0) = ((MR_Box) ((MR_String) "predicate \140parse_tree.check_module_interface.generate_no_exports_warning\'/5"));
            MR_hl_field(0, Spec_77, 1) = ((MR_Box) ((MR_Unsigned) 4U));
            MR_hl_field(0, Spec_77, 2) = ((MR_Box) ((MR_Unsigned) 20U));
            MR_hl_field(0, Spec_77, 3) = ((MR_Box) (Msgs_75));
          }
          {
            MR_Word base;
            base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            *STATE_VARIABLE_Specs_57 = base;
            MR_hl_field(1, base, 0) = ((MR_Box) (Spec_77));
            MR_hl_field(1, base, 1) = ((MR_Box) (STATE_VARIABLE_Specs_0_56));
          }
        }
        else
          *STATE_VARIABLE_Specs_57 = STATE_VARIABLE_Specs_0_56;
      }
      break;
  }
}

void mercury__parse_tree__check_module_interface__init(void)
{
}

void mercury__parse_tree__check_module_interface__init_type_tables(void)
{
}

void mercury__parse_tree__check_module_interface__init_debugger(void)
{
	MR_fatal_error("debugger initialization in MLDS grade");
}

// Ensure everything is compiled with the same grade.
const char *mercury__parse_tree__check_module_interface__grade_check(void)
{
    return &MR_GRADE_VAR;
}

// :- end_module parse_tree.check_module_interface.
