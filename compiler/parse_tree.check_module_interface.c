/*
** Automatically generated from `check_module_interface.m'
** by the Mercury compiler,
** version rotd-2024-07-15
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
#include "parse_tree.var_table.mih"
#include "recompilation.item_types.mih"




static void MR_CALL 
parse_tree__check_module_interface__IntroducedFrom__pred__check_module_interface_for_no_exports__74__1_6_p_0(
  MR_Word LambdaHeadVar__1_66,
  MR_Word LambdaHeadVar__2_67,
  MR_Integer LambdaHeadVar__3_68,
  MR_Integer * LambdaHeadVar__4_69,
  MR_Integer LambdaHeadVar__5_70,
  MR_Integer * LambdaHeadVar__6_71);

static void MR_CALL 
parse_tree__check_module_interface__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_73_110_116_114_111_100_117_99_101_100_70_114_111_109_95_95_112_114_101_100_95_95_99_104_101_99_107_95_109_111_100_117_108_101_95_105_110_116_101_114_102_97_99_101_95_102_111_114_95_110_111_95_101_120_112_111_114_116_115_95_95_55_52_95_95_49_95_95_91_49_93_95_48_6_p_0(
  MR_Word LambdaHeadVar__2_67,
  MR_Integer LambdaHeadVar__3_68,
  MR_Integer * LambdaHeadVar__4_69,
  MR_Integer LambdaHeadVar__5_70,
  MR_Integer * LambdaHeadVar__6_71);

static void MR_CALL 
parse_tree__check_module_interface__check_module_interface_for_no_exports_4_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box * wrapper_arg_4,
  MR_Box wrapper_arg_5,
  MR_Box * wrapper_arg_6);


static /* final */ const MR_Box parse_tree__check_module_interface_scalar_common_1[50][2];

static /* final */ const MR_Box parse_tree__check_module_interface_scalar_common_2[1][9];

static /* final */ const MR_Box parse_tree__check_module_interface_scalar_common_3[1][3];




static /* final */ const MR_Box parse_tree__check_module_interface_scalar_common_1[50][2] = {
  /* row   0 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 6U)),
    ((MR_Box) ((MR_String) "Warning: the interface of module"))
  },
  /* row   1 */
  {
    ((MR_Box) (MR_mkword(3, &parse_tree__check_module_interface_scalar_common_1[0]))),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row   2 */
  {
    ((MR_Box) ((MR_Integer) 2)),
    ((MR_Box) ((MR_String) ""))
  },
  /* row   3 */
  {
    ((MR_Box) (MR_mkword(1, &parse_tree__check_module_interface_scalar_common_1[2]))),
    ((MR_Box) (MR_mkword(1, &parse_tree__check_module_interface_scalar_common_1[1])))
  },
  /* row   4 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 6U)),
    ((MR_Box) ((MR_String) "does not export anything."))
  },
  /* row   5 */
  {
    ((MR_Box) (MR_mkword(3, &parse_tree__check_module_interface_scalar_common_1[4]))),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row   6 */
  {
    ((MR_Box) ((MR_Unsigned) 8U)),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row   7 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 6U)),
    ((MR_Box) ((MR_String) "definition."))
  },
  /* row   8 */
  {
    ((MR_Box) (MR_mkword(3, &parse_tree__check_module_interface_scalar_common_1[7]))),
    ((MR_Box) (MR_mkword(1, &parse_tree__check_module_interface_scalar_common_1[6])))
  },
  /* row   9 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 32U)),
    ((MR_Box) ((MR_String) "instance"))
  },
  /* row  10 */
  {
    ((MR_Box) (MR_mkword(3, &parse_tree__check_module_interface_scalar_common_1[9]))),
    ((MR_Box) (MR_mkword(1, &parse_tree__check_module_interface_scalar_common_1[8])))
  },
  /* row  11 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 6U)),
    ((MR_Box) ((MR_String) "or"))
  },
  /* row  12 */
  {
    ((MR_Box) (MR_mkword(3, &parse_tree__check_module_interface_scalar_common_1[11]))),
    ((MR_Box) (MR_mkword(1, &parse_tree__check_module_interface_scalar_common_1[10])))
  },
  /* row  13 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 32U)),
    ((MR_Box) ((MR_String) "typeclass"))
  },
  /* row  14 */
  {
    ((MR_Box) (MR_mkword(3, &parse_tree__check_module_interface_scalar_common_1[13]))),
    ((MR_Box) (MR_mkword(1, &parse_tree__check_module_interface_scalar_common_1[12])))
  },
  /* row  15 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) ","))
  },
  /* row  16 */
  {
    ((MR_Box) (MR_mkword(3, &parse_tree__check_module_interface_scalar_common_1[15]))),
    ((MR_Box) (MR_mkword(1, &parse_tree__check_module_interface_scalar_common_1[14])))
  },
  /* row  17 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 32U)),
    ((MR_Box) ((MR_String) "mode"))
  },
  /* row  18 */
  {
    ((MR_Box) (MR_mkword(3, &parse_tree__check_module_interface_scalar_common_1[17]))),
    ((MR_Box) (MR_mkword(1, &parse_tree__check_module_interface_scalar_common_1[16])))
  },
  /* row  19 */
  {
    ((MR_Box) (MR_mkword(3, &parse_tree__check_module_interface_scalar_common_1[15]))),
    ((MR_Box) (MR_mkword(1, &parse_tree__check_module_interface_scalar_common_1[18])))
  },
  /* row  20 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 32U)),
    ((MR_Box) ((MR_String) "inst"))
  },
  /* row  21 */
  {
    ((MR_Box) (MR_mkword(3, &parse_tree__check_module_interface_scalar_common_1[20]))),
    ((MR_Box) (MR_mkword(1, &parse_tree__check_module_interface_scalar_common_1[19])))
  },
  /* row  22 */
  {
    ((MR_Box) (MR_mkword(3, &parse_tree__check_module_interface_scalar_common_1[15]))),
    ((MR_Box) (MR_mkword(1, &parse_tree__check_module_interface_scalar_common_1[21])))
  },
  /* row  23 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 32U)),
    ((MR_Box) ((MR_String) "type"))
  },
  /* row  24 */
  {
    ((MR_Box) (MR_mkword(3, &parse_tree__check_module_interface_scalar_common_1[23]))),
    ((MR_Box) (MR_mkword(1, &parse_tree__check_module_interface_scalar_common_1[22])))
  },
  /* row  25 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 6U)),
    ((MR_Box) ((MR_String) "declaration, or a"))
  },
  /* row  26 */
  {
    ((MR_Box) (MR_mkword(3, &parse_tree__check_module_interface_scalar_common_1[25]))),
    ((MR_Box) (MR_mkword(1, &parse_tree__check_module_interface_scalar_common_1[24])))
  },
  /* row  27 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 32U)),
    ((MR_Box) ((MR_String) "func"))
  },
  /* row  28 */
  {
    ((MR_Box) (MR_mkword(3, &parse_tree__check_module_interface_scalar_common_1[27]))),
    ((MR_Box) (MR_mkword(1, &parse_tree__check_module_interface_scalar_common_1[26])))
  },
  /* row  29 */
  {
    ((MR_Box) (MR_mkword(3, &parse_tree__check_module_interface_scalar_common_1[11]))),
    ((MR_Box) (MR_mkword(1, &parse_tree__check_module_interface_scalar_common_1[28])))
  },
  /* row  30 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 32U)),
    ((MR_Box) ((MR_String) "pred"))
  },
  /* row  31 */
  {
    ((MR_Box) (MR_mkword(3, &parse_tree__check_module_interface_scalar_common_1[30]))),
    ((MR_Box) (MR_mkword(1, &parse_tree__check_module_interface_scalar_common_1[29])))
  },
  /* row  32 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 6U)),
    ((MR_Box) ((MR_String) "This would normally be a"))
  },
  /* row  33 */
  {
    ((MR_Box) (MR_mkword(3, &parse_tree__check_module_interface_scalar_common_1[32]))),
    ((MR_Box) (MR_mkword(1, &parse_tree__check_module_interface_scalar_common_1[31])))
  },
  /* row  34 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 6U)),
    ((MR_Box) ((MR_String) "in its interface section(s)."))
  },
  /* row  35 */
  {
    ((MR_Box) (MR_mkword(3, &parse_tree__check_module_interface_scalar_common_1[34]))),
    ((MR_Box) (MR_mkword(1, &parse_tree__check_module_interface_scalar_common_1[33])))
  },
  /* row  36 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 32U)),
    ((MR_Box) ((MR_String) "import_module"))
  },
  /* row  37 */
  {
    ((MR_Box) (MR_mkword(3, &parse_tree__check_module_interface_scalar_common_1[36]))),
    ((MR_Box) (MR_mkword(1, &parse_tree__check_module_interface_scalar_common_1[35])))
  },
  /* row  38 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 6U)),
    ((MR_Box) ((MR_String) "other than"))
  },
  /* row  39 */
  {
    ((MR_Box) (MR_mkword(3, &parse_tree__check_module_interface_scalar_common_1[38]))),
    ((MR_Box) (MR_mkword(1, &parse_tree__check_module_interface_scalar_common_1[37])))
  },
  /* row  40 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 6U)),
    ((MR_Box) ((MR_String) "A file should contain at least one declaration"))
  },
  /* row  41 */
  {
    ((MR_Box) (MR_mkword(3, &parse_tree__check_module_interface_scalar_common_1[40]))),
    ((MR_Box) (MR_mkword(1, &parse_tree__check_module_interface_scalar_common_1[39])))
  },
  /* row  42 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 6U)),
    ((MR_Box) ((MR_String) "To be useful, a module should export something."))
  },
  /* row  43 */
  {
    ((MR_Box) (MR_mkword(3, &parse_tree__check_module_interface_scalar_common_1[42]))),
    ((MR_Box) (MR_mkword(1, &parse_tree__check_module_interface_scalar_common_1[41])))
  },
  /* row  44 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 6U)),
    ((MR_Box) ((MR_String) "by that submodule."))
  },
  /* row  45 */
  {
    ((MR_Box) (MR_mkword(3, &parse_tree__check_module_interface_scalar_common_1[44]))),
    ((MR_Box) (MR_mkword(1, &parse_tree__check_module_interface_scalar_common_1[6])))
  },
  /* row  46 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 6U)),
    ((MR_Box) ((MR_String) "is not useful, because it can be replaced"))
  },
  /* row  47 */
  {
    ((MR_Box) (MR_mkword(3, &parse_tree__check_module_interface_scalar_common_1[46]))),
    ((MR_Box) (MR_mkword(1, &parse_tree__check_module_interface_scalar_common_1[45])))
  },
  /* row  48 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 6U)),
    ((MR_Box) ((MR_String) "A module that includes a single submodule"))
  },
  /* row  49 */
  {
    ((MR_Box) (MR_mkword(3, &parse_tree__check_module_interface_scalar_common_1[48]))),
    ((MR_Box) (MR_mkword(1, &parse_tree__check_module_interface_scalar_common_1[47])))
  },
};

static /* final */ const MR_Box parse_tree__check_module_interface_scalar_common_2[1][9] = {
  /* row   0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 6)),
    ((MR_Box) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0)),
    ((MR_Box) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_include_module_info_0)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_int_0)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_int_0)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_int_0)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_int_0))
  },
};

static /* final */ const MR_Box parse_tree__check_module_interface_scalar_common_3[1][3] = {
  /* row   0 */
  {
    ((MR_Box) (&parse_tree__check_module_interface_scalar_common_2[0])),
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
parse_tree__check_module_interface__IntroducedFrom__pred__check_module_interface_for_no_exports__74__1_6_p_0(
  MR_Word LambdaHeadVar__1_66,
  MR_Word LambdaHeadVar__2_67,
  MR_Integer LambdaHeadVar__3_68,
  MR_Integer * LambdaHeadVar__4_69,
  MR_Integer LambdaHeadVar__5_70,
  MR_Integer * LambdaHeadVar__6_71)
{
  parse_tree__check_module_interface__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_73_110_116_114_111_100_117_99_101_100_70_114_111_109_95_95_112_114_101_100_95_95_99_104_101_99_107_95_109_111_100_117_108_101_95_105_110_116_101_114_102_97_99_101_95_102_111_114_95_110_111_95_101_120_112_111_114_116_115_95_95_55_52_95_95_49_95_95_91_49_93_95_48_6_p_0(LambdaHeadVar__2_67, LambdaHeadVar__3_68, LambdaHeadVar__4_69, LambdaHeadVar__5_70, LambdaHeadVar__6_71);
}

static void MR_CALL 
parse_tree__check_module_interface__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_73_110_116_114_111_100_117_99_101_100_70_114_111_109_95_95_112_114_101_100_95_95_99_104_101_99_107_95_109_111_100_117_108_101_95_105_110_116_101_114_102_97_99_101_95_102_111_114_95_110_111_95_101_120_112_111_114_116_115_95_95_55_52_95_95_49_95_95_91_49_93_95_48_6_p_0(
  MR_Word LambdaHeadVar__2_67,
  MR_Integer LambdaHeadVar__3_68,
  MR_Integer * LambdaHeadVar__4_69,
  MR_Integer LambdaHeadVar__5_70,
  MR_Integer * LambdaHeadVar__6_71)
{
  MR_Word Section_52 = ((MR_Unsigned) ((MR_hl_field(0, LambdaHeadVar__2_67, (MR_Integer) 0))) & (MR_Integer) 1);

  switch (Section_52) {
    default: /*NOTREACHED*/ MR_assert(0);
    case (MR_Integer) 1:
      {
        *LambdaHeadVar__4_69 = LambdaHeadVar__3_68;
        *LambdaHeadVar__6_71 = (MR_Integer) ((MR_Unsigned) LambdaHeadVar__5_70 + (MR_Unsigned) 1);
      }
      break;
    case (MR_Integer) 0:
      {
        *LambdaHeadVar__4_69 = (MR_Integer) ((MR_Unsigned) LambdaHeadVar__3_68 + (MR_Unsigned) 1);
        *LambdaHeadVar__6_71 = LambdaHeadVar__5_70;
      }
      break;
  }
}

static void MR_CALL 
parse_tree__check_module_interface__check_module_interface_for_no_exports_4_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box * wrapper_arg_4,
  MR_Box wrapper_arg_5,
  MR_Box * wrapper_arg_6)
{
  MR_Box closure = closure_arg;
  MR_Integer conv1_LambdaHeadVar__4_69;
  MR_Integer conv0_LambdaHeadVar__6_71;

  parse_tree__check_module_interface__IntroducedFrom__pred__check_module_interface_for_no_exports__74__1_6_p_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), ((MR_Integer) (wrapper_arg_3)), &conv1_LambdaHeadVar__4_69, ((MR_Integer) (wrapper_arg_5)), &conv0_LambdaHeadVar__6_71);
  *wrapper_arg_4 = ((MR_Box) (conv1_LambdaHeadVar__4_69));
  *wrapper_arg_6 = ((MR_Box) (conv0_LambdaHeadVar__6_71));
}

void MR_CALL 
parse_tree__check_module_interface__check_module_interface_for_no_exports_4_p_0(
  MR_Word Globals_5,
  MR_Word ParseTreeModuleSrc_6,
  MR_Word STATE_VARIABLE_Specs_0_63,
  MR_Word * STATE_VARIABLE_Specs_64)
{
  MR_bool succeeded;
  MR_Word ExportWarning_8;

  libs__globals__lookup_bool_option_3_p_0(Globals_5, (MR_Integer) 13, &ExportWarning_8);
  switch (ExportWarning_8) {
    default: /*NOTREACHED*/ MR_assert(0);
    case (MR_Integer) 0:
      *STATE_VARIABLE_Specs_64 = STATE_VARIABLE_Specs_0_63;
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
        MR_Word IntDeclMarkers_27 = ((MR_Word) ((MR_hl_field(0, ParseTreeModuleSrc_6, (MR_Integer) 18))));
        MR_Word IntPromises_28 = ((MR_Word) ((MR_hl_field(0, ParseTreeModuleSrc_6, (MR_Integer) 19))));
        MR_Integer NumIntIncls_54;
        MR_Integer NumImpIncls_55;
        MR_Box conv3_NumIntIncls_54;
        MR_Box conv2_NumImpIncls_55;
        MR_Word IntTypeDefns_56;
        MR_Word IntInstDefns_59;
        MR_Word IntModeDefns_61;
        MR_Word Var_57;
        MR_Word Var_58;
        MR_Word Var_60;
        MR_Word Var_62;

        mercury__map__foldl2_6_p_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), (MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_include_module_info_0), (MR_Word) (&mercury__builtin__builtin__type_ctor_info_int_0), (MR_Word) (&mercury__builtin__builtin__type_ctor_info_int_0), (MR_Word) (&parse_tree__check_module_interface_scalar_common_3[0]), InclMap_11, ((MR_Box) ((MR_Integer) 0)), &conv3_NumIntIncls_54, ((MR_Box) ((MR_Integer) 0)), &conv2_NumImpIncls_55);
        NumIntIncls_54 = ((MR_Integer) (conv3_NumIntIncls_54));
        NumImpIncls_55 = ((MR_Integer) (conv2_NumImpIncls_55));
        switch (NumIntIncls_54) {
          default:
            succeeded = MR_FALSE;
            break;
          case (MR_Integer) 0:
            succeeded = MR_TRUE;
            break;
          case (MR_Integer) 1:
            succeeded = (NumImpIncls_55 == (MR_Integer) 0);
            break;
        }
        if (succeeded)
        {
          parse_tree__item_util__type_ctor_checked_map_get_src_defns_4_p_0(TypeCtorCheckedMap_17, &IntTypeDefns_56, &Var_57, &Var_58);
          succeeded = (IntTypeDefns_56 == (MR_Word) ((MR_Unsigned) 0U));
          if (succeeded)
          {
            parse_tree__item_util__inst_ctor_checked_map_get_src_defns_3_p_0(InstCtorCheckedMap_18, &IntInstDefns_59, &Var_60);
            succeeded = (IntInstDefns_59 == (MR_Word) ((MR_Unsigned) 0U));
            if (succeeded)
            {
              parse_tree__item_util__mode_ctor_checked_map_get_src_defns_3_p_0(ModeCtorCheckedMap_19, &IntModeDefns_61, &Var_62);
              succeeded = (IntModeDefns_61 == (MR_Word) ((MR_Unsigned) 0U));
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
                            {
                              succeeded = (IntDeclMarkers_27 == (MR_Word) ((MR_Unsigned) 0U));
                              if (succeeded)
                                succeeded = (IntPromises_28 == (MR_Word) ((MR_Unsigned) 0U));
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
        if (succeeded)
        {
          MR_Word AlwaysPieces_87;
          MR_Word StdVerbosePieces_88;
          MR_Word VerbosePieces_89;
          MR_Word Msg_90;
          MR_Word Spec_91;
          MR_Word Var_93;
          MR_Word Var_94;
          MR_Word Var_95;
          MR_Word Var_96;
          MR_Word Var_98;
          MR_Word Var_99;
          MR_Word Var_108;
          MR_Word Var_109;
          MR_Word Var_110;
          MR_Word Var_111;
          MR_Word Var_117;

          {
            Var_96 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(3, Var_96, 0) = ((MR_Box) ((MR_Unsigned) 8U));
            MR_hl_field(3, Var_96, 1) = ((MR_Box) (ModuleName_9));
          }
          {
            Var_95 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(1, Var_95, 0) = ((MR_Box) (Var_96));
            MR_hl_field(1, Var_95, 1) = ((MR_Box) (IntPromises_28));
          }
          Var_94 = parse_tree__error_spec__color_as_subject_1_f_0(Var_95);
          Var_99 = parse_tree__error_spec__color_as_incorrect_1_f_0((MR_Word) (MR_mkword(1, &parse_tree__check_module_interface_scalar_common_1[5])));
          Var_98 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), Var_99, (MR_Word) (MR_mkword(1, &parse_tree__check_module_interface_scalar_common_1[6])));
          Var_93 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), Var_94, Var_98);
          AlwaysPieces_87 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), (MR_Word) (MR_mkword(1, &parse_tree__check_module_interface_scalar_common_1[3])), Var_93);
          StdVerbosePieces_88 = (MR_Word) (MR_mkword(1, &parse_tree__check_module_interface_scalar_common_1[43]));
          switch (NumIntIncls_54) {
            default: /*NOTREACHED*/ MR_assert(0);
            case (MR_Integer) 0:
              VerbosePieces_89 = StdVerbosePieces_88;
              break;
            case (MR_Integer) 1:
              VerbosePieces_89 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), StdVerbosePieces_88, (MR_Word) (MR_mkword(1, &parse_tree__check_module_interface_scalar_common_1[49])));
              break;
          }
          {
            Var_109 = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
            MR_hl_field(0, Var_109, 0) = ((MR_Box) (AlwaysPieces_87));
          }
          {
            Var_111 = (MR_Word) MR_mkword(2, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(2, Var_111, 0) = (MR_Box) ((MR_Unsigned) ((MR_Integer) 0));
            MR_hl_field(2, Var_111, 1) = ((MR_Box) (VerbosePieces_89));
          }
          {
            Var_110 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(1, Var_110, 0) = ((MR_Box) (Var_111));
            MR_hl_field(1, Var_110, 1) = ((MR_Box) ((MR_Unsigned) 0U));
          }
          {
            Var_108 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(1, Var_108, 0) = ((MR_Box) (Var_109));
            MR_hl_field(1, Var_108, 1) = ((MR_Box) (Var_110));
          }
          {
            Msg_90 = (MR_Word) MR_mkword(2, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(2, Msg_90, 0) = ((MR_Box) (ModuleNameContext_10));
            MR_hl_field(2, Msg_90, 1) = ((MR_Box) (Var_108));
          }
          {
            Var_117 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(1, Var_117, 0) = ((MR_Box) (Msg_90));
            MR_hl_field(1, Var_117, 1) = ((MR_Box) ((MR_Unsigned) 0U));
          }
          {
            Spec_91 = (MR_Word) MR_mkword(2, MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(2, Spec_91, 0) = ((MR_Box) ((MR_String) "predicate \140parse_tree.check_module_interface.generate_no_exports_warning\'/5"));
            MR_hl_field(2, Spec_91, 1) = ((MR_Box) ((MR_Unsigned) 4U));
            MR_hl_field(2, Spec_91, 2) = ((MR_Box) ((MR_Unsigned) 24U));
            MR_hl_field(2, Spec_91, 3) = ((MR_Box) (Var_117));
          }
          {
            MR_Word base;
            base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            *STATE_VARIABLE_Specs_64 = base;
            MR_hl_field(1, base, 0) = ((MR_Box) (Spec_91));
            MR_hl_field(1, base, 1) = ((MR_Box) (STATE_VARIABLE_Specs_0_63));
          }
        }
        else
          *STATE_VARIABLE_Specs_64 = STATE_VARIABLE_Specs_0_63;
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
