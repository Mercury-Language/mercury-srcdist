/*
** Automatically generated from `check_module_interface.m'
** by the Mercury compiler,
** version rotd-2022-08-22
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
#include "bimap.mih"
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
#include "integer.mih"
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
#include "recompilation.mih"
#include "set.mih"
#include "set_ordlist.mih"
#include "stream.mih"
#include "string.mih"
#include "term.mih"
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
#include "parse_tree.error_util.mih"
#include "parse_tree.file_kind.mih"
#include "parse_tree.item_util.mih"
#include "parse_tree.maybe_error.mih"
#include "parse_tree.prog_data.mih"
#include "parse_tree.prog_data_foreign.mih"
#include "parse_tree.prog_data_pragma.mih"
#include "parse_tree.prog_item.mih"
#include "parse_tree.set_of_var.mih"





static /* final */ const MR_Box parse_tree__check_module_interface_scalar_common_1[52][2];

static /* final */ const MR_Box parse_tree__check_module_interface_scalar_common_2[1][1];




static /* final */ const MR_Box parse_tree__check_module_interface_scalar_common_1[52][2] = {
  /* row   0 */
  {
    ((MR_Box) (&mercury__one_or_more__one_or_more__type_ctor_info_one_or_more_1)),
    ((MR_Box) (&mercury__term__term__type_ctor_info_context_0))
  },
  /* row   1 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "Warning: the interface of module"))
  },
  /* row   2 */
  {
    ((MR_Box) ((MR_Unsigned) 4U)),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row   3 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "does not export anything."))
  },
  /* row   4 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__check_module_interface_scalar_common_1[3]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__check_module_interface_scalar_common_1[2])))
  },
  /* row   5 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "definition."))
  },
  /* row   6 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__check_module_interface_scalar_common_1[5]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__check_module_interface_scalar_common_1[2])))
  },
  /* row   7 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 28U)),
    ((MR_Box) ((MR_String) "instance"))
  },
  /* row   8 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__check_module_interface_scalar_common_1[7]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__check_module_interface_scalar_common_1[6])))
  },
  /* row   9 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "or"))
  },
  /* row  10 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__check_module_interface_scalar_common_1[9]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__check_module_interface_scalar_common_1[8])))
  },
  /* row  11 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 28U)),
    ((MR_Box) ((MR_String) "typeclass"))
  },
  /* row  12 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__check_module_interface_scalar_common_1[11]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__check_module_interface_scalar_common_1[10])))
  },
  /* row  13 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 4U)),
    ((MR_Box) ((MR_String) ","))
  },
  /* row  14 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__check_module_interface_scalar_common_1[13]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__check_module_interface_scalar_common_1[12])))
  },
  /* row  15 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 28U)),
    ((MR_Box) ((MR_String) "mode"))
  },
  /* row  16 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__check_module_interface_scalar_common_1[15]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__check_module_interface_scalar_common_1[14])))
  },
  /* row  17 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__check_module_interface_scalar_common_1[13]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__check_module_interface_scalar_common_1[16])))
  },
  /* row  18 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 28U)),
    ((MR_Box) ((MR_String) "inst"))
  },
  /* row  19 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__check_module_interface_scalar_common_1[18]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__check_module_interface_scalar_common_1[17])))
  },
  /* row  20 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__check_module_interface_scalar_common_1[13]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__check_module_interface_scalar_common_1[19])))
  },
  /* row  21 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 28U)),
    ((MR_Box) ((MR_String) "type"))
  },
  /* row  22 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__check_module_interface_scalar_common_1[21]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__check_module_interface_scalar_common_1[20])))
  },
  /* row  23 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "declaration, or a"))
  },
  /* row  24 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__check_module_interface_scalar_common_1[23]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__check_module_interface_scalar_common_1[22])))
  },
  /* row  25 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 28U)),
    ((MR_Box) ((MR_String) "func"))
  },
  /* row  26 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__check_module_interface_scalar_common_1[25]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__check_module_interface_scalar_common_1[24])))
  },
  /* row  27 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__check_module_interface_scalar_common_1[9]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__check_module_interface_scalar_common_1[26])))
  },
  /* row  28 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 28U)),
    ((MR_Box) ((MR_String) "pred"))
  },
  /* row  29 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__check_module_interface_scalar_common_1[28]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__check_module_interface_scalar_common_1[27])))
  },
  /* row  30 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "This would normally be a"))
  },
  /* row  31 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__check_module_interface_scalar_common_1[30]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__check_module_interface_scalar_common_1[29])))
  },
  /* row  32 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "in its interface section(s)."))
  },
  /* row  33 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__check_module_interface_scalar_common_1[32]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__check_module_interface_scalar_common_1[31])))
  },
  /* row  34 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 28U)),
    ((MR_Box) ((MR_String) "import_module"))
  },
  /* row  35 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__check_module_interface_scalar_common_1[34]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__check_module_interface_scalar_common_1[33])))
  },
  /* row  36 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "other than"))
  },
  /* row  37 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__check_module_interface_scalar_common_1[36]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__check_module_interface_scalar_common_1[35])))
  },
  /* row  38 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "A file should contain at least one declaration"))
  },
  /* row  39 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__check_module_interface_scalar_common_1[38]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__check_module_interface_scalar_common_1[37])))
  },
  /* row  40 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "To be useful, a module should export something."))
  },
  /* row  41 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__check_module_interface_scalar_common_1[40]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__check_module_interface_scalar_common_1[39])))
  },
  /* row  42 */
  {
    (MR_Box) ((MR_Unsigned) 0U),
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__check_module_interface_scalar_common_1[41])))
  },
  /* row  43 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(2), &parse_tree__check_module_interface_scalar_common_1[42]))),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row  44 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "by that submodule."))
  },
  /* row  45 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__check_module_interface_scalar_common_1[44]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__check_module_interface_scalar_common_1[2])))
  },
  /* row  46 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "is not useful, because it can be replaced"))
  },
  /* row  47 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__check_module_interface_scalar_common_1[46]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__check_module_interface_scalar_common_1[45])))
  },
  /* row  48 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "A module that includes a single submodule"))
  },
  /* row  49 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__check_module_interface_scalar_common_1[48]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__check_module_interface_scalar_common_1[47])))
  },
  /* row  50 */
  {
    (MR_Box) ((MR_Unsigned) 0U),
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__check_module_interface_scalar_common_1[49])))
  },
  /* row  51 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(2), &parse_tree__check_module_interface_scalar_common_1[50]))),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
};

static /* final */ const MR_Box parse_tree__check_module_interface_scalar_common_2[1][1] = {
  /* row   0 */
  {
    ((MR_Box) ((MR_Integer) 2))
  },
};



#include "array.mh"
#include "bitmap.mh"
#include "io.mh"
#include "string.mh"
#include "time.mh"



void MR_CALL 
parse_tree__check_module_interface__check_module_interface_for_no_exports_4_p_0(
  MR_Word Globals_5,
  MR_Word ParseTreeModuleSrc_6,
  MR_Word STATE_VARIABLE_Specs_0_55,
  MR_Word * STATE_VARIABLE_Specs_56)
{
  MR_bool succeeded;
  MR_Word ExportWarning_8;

  libs__globals__lookup_bool_option_3_p_0(Globals_5, (MR_Integer) 13, &ExportWarning_8);
  switch (ExportWarning_8) {
    default: /*NOTREACHED*/ MR_assert(0);
    case (MR_Integer) 0:
      *STATE_VARIABLE_Specs_56 = STATE_VARIABLE_Specs_0_55;
      break;
    case (MR_Integer) 1:
      {
        MR_Word ModuleName_9 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ParseTreeModuleSrc_6, (MR_Integer) 0))));
        MR_Word ModuleNameContext_10 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ParseTreeModuleSrc_6, (MR_Integer) 1))));
        MR_Word IntIncls_11 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ParseTreeModuleSrc_6, (MR_Integer) 2))));
        MR_Word TypeCtorCheckedMap_23 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ParseTreeModuleSrc_6, (MR_Integer) 14))));
        MR_Word InstCtorCheckedMap_24 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ParseTreeModuleSrc_6, (MR_Integer) 15))));
        MR_Word ModeCtorCheckedMap_25 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ParseTreeModuleSrc_6, (MR_Integer) 16))));
        MR_Word TypeSpecs_26 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ParseTreeModuleSrc_6, (MR_Integer) 17))));
        MR_Word InstModeSpecs_27 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ParseTreeModuleSrc_6, (MR_Integer) 18))));
        MR_Word IntTypeClasses_28 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ParseTreeModuleSrc_6, (MR_Integer) 19))));
        MR_Word IntInstances_29 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ParseTreeModuleSrc_6, (MR_Integer) 20))));
        MR_Word IntPredDecls_30 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ParseTreeModuleSrc_6, (MR_Integer) 21))));
        MR_Word IntModeDecls_31 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ParseTreeModuleSrc_6, (MR_Integer) 22))));
        MR_Word IntDeclPragmas_32 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ParseTreeModuleSrc_6, (MR_Integer) 23))));
        MR_Word IntPromises_33 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ParseTreeModuleSrc_6, (MR_Integer) 24))));
        MR_Integer NumIntIncls_47;
        MR_Word IntTypeDefns_48;
        MR_Word IntInstDefns_51;
        MR_Word IntModeDefns_53;
        MR_Word Var_49;
        MR_Word Var_50;
        MR_Word Var_52;
        MR_Word Var_54;

        mercury__map__count_2_p_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), (MR_Word) (&parse_tree__check_module_interface_scalar_common_1[0]), IntIncls_11, &NumIntIncls_47);
        switch (NumIntIncls_47) {
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
          parse_tree__item_util__type_ctor_checked_map_get_src_defns_4_p_0(TypeCtorCheckedMap_23, &IntTypeDefns_48, &Var_49, &Var_50);
          succeeded = (IntTypeDefns_48 == (MR_Word) ((MR_Unsigned) 0U));
          if (succeeded)
          {
            parse_tree__item_util__inst_ctor_checked_map_get_src_defns_3_p_0(InstCtorCheckedMap_24, &IntInstDefns_51, &Var_52);
            succeeded = (IntInstDefns_51 == (MR_Word) ((MR_Unsigned) 0U));
            if (succeeded)
            {
              parse_tree__item_util__mode_ctor_checked_map_get_src_defns_3_p_0(ModeCtorCheckedMap_25, &IntModeDefns_53, &Var_54);
              succeeded = (IntModeDefns_53 == (MR_Word) ((MR_Unsigned) 0U));
              if (succeeded)
              {
                succeeded = (TypeSpecs_26 == (MR_Word) ((MR_Unsigned) 0U));
                if (succeeded)
                {
                  succeeded = (InstModeSpecs_27 == (MR_Word) ((MR_Unsigned) 0U));
                  if (succeeded)
                  {
                    succeeded = (IntTypeClasses_28 == (MR_Word) ((MR_Unsigned) 0U));
                    if (succeeded)
                    {
                      succeeded = (IntInstances_29 == (MR_Word) ((MR_Unsigned) 0U));
                      if (succeeded)
                      {
                        succeeded = (IntPredDecls_30 == (MR_Word) ((MR_Unsigned) 0U));
                        if (succeeded)
                        {
                          succeeded = (IntModeDecls_31 == (MR_Word) ((MR_Unsigned) 0U));
                          if (succeeded)
                          {
                            succeeded = (IntDeclPragmas_32 == (MR_Word) ((MR_Unsigned) 0U));
                            if (succeeded)
                              succeeded = (IntPromises_33 == (MR_Word) ((MR_Unsigned) 0U));
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
          MR_Word MainMsg_60;
          MR_Word Msgs_61;
          MR_Word Spec_63;
          MR_Word Var_64;
          MR_Word Var_65;
          MR_Word Var_66;
          MR_Word Var_69;
          MR_Word Var_72;
          MR_Word Var_73;

          {
            Var_73 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(3), Var_73, 0) = ((MR_Box) ((MR_Unsigned) 7U));
            MR_hl_field(MR_mktag(3), Var_73, 1) = ((MR_Box) (ModuleName_9));
          }
          {
            Var_72 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), Var_72, 0) = ((MR_Box) (Var_73));
            MR_hl_field(MR_mktag(1), Var_72, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__check_module_interface_scalar_common_1[4])));
          }
          {
            Var_69 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), Var_69, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__check_module_interface_scalar_common_1[1])));
            MR_hl_field(MR_mktag(1), Var_69, 1) = ((MR_Box) (Var_72));
          }
          {
            Var_66 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), Var_66, 0) = ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__check_module_interface_scalar_common_2[0])));
            MR_hl_field(MR_mktag(1), Var_66, 1) = ((MR_Box) (Var_69));
          }
          {
            Var_65 = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
            MR_hl_field(MR_mktag(0), Var_65, 0) = ((MR_Box) (Var_66));
          }
          {
            Var_64 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), Var_64, 0) = ((MR_Box) (Var_65));
            MR_hl_field(MR_mktag(1), Var_64, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__check_module_interface_scalar_common_1[43])));
          }
          {
            MainMsg_60 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(2), MainMsg_60, 0) = ((MR_Box) (ModuleNameContext_10));
            MR_hl_field(MR_mktag(2), MainMsg_60, 1) = ((MR_Box) (Var_64));
          }
          switch (NumIntIncls_47) {
            default: /*NOTREACHED*/ MR_assert(0);
            case (MR_Integer) 0:
              {
                Msgs_61 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(1), Msgs_61, 0) = ((MR_Box) (MainMsg_60));
                MR_hl_field(MR_mktag(1), Msgs_61, 1) = ((MR_Box) (IntPromises_33));
              }
              break;
            case (MR_Integer) 1:
              {
                MR_Word InclMsg_62;
                MR_Word Var_78;

                {
                  InclMsg_62 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(MR_mktag(2), InclMsg_62, 0) = ((MR_Box) (ModuleNameContext_10));
                  MR_hl_field(MR_mktag(2), InclMsg_62, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__check_module_interface_scalar_common_1[51])));
                }
                {
                  Var_78 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(MR_mktag(1), Var_78, 0) = ((MR_Box) (InclMsg_62));
                  MR_hl_field(MR_mktag(1), Var_78, 1) = ((MR_Box) (IntPromises_33));
                }
                {
                  Msgs_61 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(MR_mktag(1), Msgs_61, 0) = ((MR_Box) (MainMsg_60));
                  MR_hl_field(MR_mktag(1), Msgs_61, 1) = ((MR_Box) (Var_78));
                }
              }
              break;
          }
          {
            Spec_63 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
            MR_hl_field(MR_mktag(0), Spec_63, 0) = ((MR_Box) ((MR_String) "predicate \140parse_tree.check_module_interface.generate_no_exports_warning\'/5"));
            MR_hl_field(MR_mktag(0), Spec_63, 1) = ((MR_Box) ((MR_Unsigned) 4U));
            MR_hl_field(MR_mktag(0), Spec_63, 2) = ((MR_Box) ((MR_Unsigned) 20U));
            MR_hl_field(MR_mktag(0), Spec_63, 3) = ((MR_Box) (Msgs_61));
          }
          {
            MR_Word base;
            base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            *STATE_VARIABLE_Specs_56 = base;
            MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (Spec_63));
            MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (STATE_VARIABLE_Specs_0_55));
          }
        }
        else
          *STATE_VARIABLE_Specs_56 = STATE_VARIABLE_Specs_0_55;
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
