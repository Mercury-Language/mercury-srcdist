/*
** Automatically generated from `make.hash.m'
** by the Mercury compiler,
** version rotd-2023-12-07
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


// :- module make.hash.
// :- implementation.

/*
INIT mercury__make__hash__init
ENDINIT
*/

#include "make.hash.mih"


#include "array.mih"
#include "assoc_list.mih"
#include "backend_libs.mih"
#include "bitmap.mih"
#include "bool.mih"
#include "builtin.mih"
#include "char.mih"
#include "construct.mih"
#include "cord.mih"
#include "deconstruct.mih"
#include "enum.mih"
#include "getopt.mih"
#include "int.mih"
#include "io.mih"
#include "libs.mih"
#include "list.mih"
#include "make.mih"
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
#include "uint.mih"
#include "unit.mih"
#include "univ.mih"
#include "varset.mih"
#include "version_array.mih"
#include "version_hash_table.mih"
#include "backend_libs.compile_target_code.mih"
#include "libs.file_util.mih"
#include "libs.globals.mih"
#include "libs.maybe_util.mih"
#include "libs.op_mode.mih"
#include "libs.optimization_options.mih"
#include "libs.options.mih"
#include "libs.timestamp.mih"
#include "libs.trace_params.mih"
#include "make.build.mih"
#include "make.deps_cache.mih"
#include "make.deps_set.mih"
#include "make.make_info.mih"
#include "make.options_file.mih"
#include "mdbcomp.feedback.mih"
#include "mdbcomp.prim_data.mih"
#include "mdbcomp.sym_name.mih"
#include "parse_tree.file_names.mih"
#include "parse_tree.module_dep_info.mih"
#include "parse_tree.prog_data.mih"
#include "parse_tree.prog_data_pragma.mih"
#include "parse_tree.prog_item.mih"
#include "parse_tree.read_modules.mih"
#include "parse_tree.set_of_var.mih"





static /* final */ const MR_Box make__hash_scalar_common_1[1][2];




static /* final */ const MR_Box make__hash_scalar_common_1[1][2] = {
  /* row   0 */
  {
    ((MR_Box) (base_typeclass_info_enum__uenum__arity1__make__deps_set__module_index__arity0__)),
    ((MR_Box) (&make__deps_set__make__deps_set__type_ctor_info_module_index_0))
  },
};



#include "array.mh"
#include "bitmap.mh"
#include "io.mh"
#include "string.mh"
#include "time.mh"
#include "version_array.mh"
#include "io.stream_ops.mh"
#include "make.build.mh"


void MR_CALL 
make__hash__dependency_file_with_module_index_hash_2_p_0(
  MR_Word DepFile_3,
  MR_Integer * Hash_4)
{
  if (((MR_tag((MR_Word) DepFile_3)) == (MR_Integer) 1))
  {
    MR_String FileName_9 = ((MR_String) ((MR_hl_field(1, DepFile_3, (MR_Integer) 0))));

    *Hash_4 = mercury__string__hash_1_f_0(FileName_9);
  }
  else
  {
    MR_Word ModuleIndex_5 = ((MR_Word) ((MR_hl_field(0, DepFile_3, (MR_Integer) 0))));
    MR_Word Type_6 = ((MR_Word) ((MR_hl_field(0, DepFile_3, (MR_Integer) 1))));
    MR_Integer Hash0_7;
    MR_Integer Hash1_8;
    MR_Unsigned Var_10;
    MR_Integer H1_25;
    MR_Integer Var_26;
    MR_Box MR_CALL (* func_0)(MR_Box, MR_Box) = ((MR_Box MR_CALL (*)(MR_Box, MR_Box)) ((MR_hl_field(0, (MR_hl_field(0, (MR_Word) (&make__hash_scalar_common_1[0]), (MR_Integer) 0)), (MR_Integer) 5))));
    MR_Box conv1_Var_10;

    conv1_Var_10 = func_0(((MR_Box) ((MR_Word) (&make__hash_scalar_common_1[0]))), ((MR_Box) (ModuleIndex_5)));
    Var_10 = ((MR_Unsigned) (conv1_Var_10));
    Hash0_7 = mercury__uint__cast_to_int_1_f_0(Var_10);
    switch (MR_tag((MR_Word) Type_6)) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        switch (MR_unmkbody(Type_6)) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
            Hash1_8 = (MR_Integer) 1;
            break;
          case (MR_Integer) 1:
            Hash1_8 = (MR_Integer) 2;
            break;
          case (MR_Integer) 2:
            Hash1_8 = (MR_Integer) 3;
            break;
          case (MR_Integer) 3:
            Hash1_8 = (MR_Integer) 4;
            break;
          case (MR_Integer) 4:
            Hash1_8 = (MR_Integer) 5;
            break;
          case (MR_Integer) 5:
            Hash1_8 = (MR_Integer) 6;
            break;
          case (MR_Integer) 6:
            Hash1_8 = (MR_Integer) 7;
            break;
          case (MR_Integer) 7:
            Hash1_8 = (MR_Integer) 8;
            break;
          case (MR_Integer) 8:
            Hash1_8 = (MR_Integer) 20;
            break;
          case (MR_Integer) 9:
            Hash1_8 = (MR_Integer) 11;
            break;
          case (MR_Integer) 10:
            Hash1_8 = (MR_Integer) 22;
            break;
          case (MR_Integer) 11:
            Hash1_8 = (MR_Integer) 12;
            break;
          case (MR_Integer) 12:
            Hash1_8 = (MR_Integer) 21;
            break;
          case (MR_Integer) 13:
            Hash1_8 = (MR_Integer) 19;
            break;
        }
        break;
      case (MR_Integer) 1:
        {
          MR_Word Var_21 = ((MR_Unsigned) ((MR_hl_field(1, Type_6, (MR_Integer) 0))) & (MR_Integer) 1);

          switch (Var_21) {
            default: /*NOTREACHED*/ MR_assert(0);
            case (MR_Integer) 0:
              Hash1_8 = (MR_Integer) 9;
              break;
            case (MR_Integer) 1:
              Hash1_8 = (MR_Integer) 10;
              break;
          }
        }
        break;
      case (MR_Integer) 2:
        {
          MR_Word PIC_12 = ((MR_Unsigned) ((MR_hl_field(2, Type_6, (MR_Integer) 0))) & (MR_Integer) 1);
          MR_Integer Var_19;
          MR_Integer H1_22;

          switch (PIC_12) {
            default: /*NOTREACHED*/ MR_assert(0);
            case (MR_Integer) 1:
              Var_19 = (MR_Integer) 3;
              break;
            case (MR_Integer) 0:
              Var_19 = (MR_Integer) 1;
              break;
          }
          H1_22 = ((MR_Integer) 16 ^ (((MR_Integer) 16 << 5)));
          Hash1_8 = (H1_22 ^ Var_19);
        }
        break;
      case (MR_Integer) 3:
        switch (((MR_Integer) ((MR_hl_field(3, Type_6, (MR_Integer) 0))))) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
            Hash1_8 = (MR_Integer) 17;
            break;
          case (MR_Integer) 1:
            Hash1_8 = (MR_Integer) 18;
            break;
        }
        break;
    }
    Var_26 = (Hash0_7 << 5);
    H1_25 = (Hash0_7 ^ Var_26);
    *Hash_4 = (H1_25 ^ Hash1_8);
  }
}

void MR_CALL 
make__hash__dependency_file_hash_2_p_0(
  MR_Word DepFile_3,
  MR_Integer * Hash_4)
{
  if (((MR_tag((MR_Word) DepFile_3)) == (MR_Integer) 1))
  {
    MR_String FileName_6 = ((MR_String) ((MR_hl_field(1, DepFile_3, (MR_Integer) 0))));

    *Hash_4 = mercury__string__hash_1_f_0(FileName_6);
  }
  else
  {
    MR_Word TargetFile_5 = (MR_Word) ((MR_Word) (DepFile_3));

    make__hash__target_file_hash_2_p_0(TargetFile_5, Hash_4);
  }
}

void MR_CALL 
make__hash__target_file_hash_2_p_0(
  MR_Word TargetFile_3,
  MR_Integer * Hash_4)
{
  MR_Word ModuleName_5 = ((MR_Word) ((MR_hl_field(0, TargetFile_3, (MR_Integer) 0))));
  MR_Word Type_6 = ((MR_Word) ((MR_hl_field(0, TargetFile_3, (MR_Integer) 1))));
  MR_Integer Hash0_7;
  MR_Integer Hash1_8;
  MR_Integer H1_25;
  MR_Integer Var_26;

  if (((MR_tag((MR_Word) ModuleName_5)) == (MR_Integer) 1))
  {
    MR_String Name_11 = ((MR_String) ((MR_hl_field(1, ModuleName_5, (MR_Integer) 1))));

    Hash0_7 = mercury__string__hash_1_f_0(Name_11);
  }
  else
  {
    MR_String Name_9 = ((MR_String) ((MR_hl_field(0, ModuleName_5, (MR_Integer) 0))));

    Hash0_7 = mercury__string__hash_1_f_0(Name_9);
  }
  switch (MR_tag((MR_Word) Type_6)) {
    default: /*NOTREACHED*/ MR_assert(0);
    case (MR_Integer) 0:
      switch (MR_unmkbody(Type_6)) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 0:
          Hash1_8 = (MR_Integer) 1;
          break;
        case (MR_Integer) 1:
          Hash1_8 = (MR_Integer) 2;
          break;
        case (MR_Integer) 2:
          Hash1_8 = (MR_Integer) 3;
          break;
        case (MR_Integer) 3:
          Hash1_8 = (MR_Integer) 4;
          break;
        case (MR_Integer) 4:
          Hash1_8 = (MR_Integer) 5;
          break;
        case (MR_Integer) 5:
          Hash1_8 = (MR_Integer) 6;
          break;
        case (MR_Integer) 6:
          Hash1_8 = (MR_Integer) 7;
          break;
        case (MR_Integer) 7:
          Hash1_8 = (MR_Integer) 8;
          break;
        case (MR_Integer) 8:
          Hash1_8 = (MR_Integer) 20;
          break;
        case (MR_Integer) 9:
          Hash1_8 = (MR_Integer) 11;
          break;
        case (MR_Integer) 10:
          Hash1_8 = (MR_Integer) 22;
          break;
        case (MR_Integer) 11:
          Hash1_8 = (MR_Integer) 12;
          break;
        case (MR_Integer) 12:
          Hash1_8 = (MR_Integer) 21;
          break;
        case (MR_Integer) 13:
          Hash1_8 = (MR_Integer) 19;
          break;
      }
      break;
    case (MR_Integer) 1:
      {
        MR_Word Var_21 = ((MR_Unsigned) ((MR_hl_field(1, Type_6, (MR_Integer) 0))) & (MR_Integer) 1);

        switch (Var_21) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
            Hash1_8 = (MR_Integer) 9;
            break;
          case (MR_Integer) 1:
            Hash1_8 = (MR_Integer) 10;
            break;
        }
      }
      break;
    case (MR_Integer) 2:
      {
        MR_Word PIC_12 = ((MR_Unsigned) ((MR_hl_field(2, Type_6, (MR_Integer) 0))) & (MR_Integer) 1);
        MR_Integer Var_19;
        MR_Integer H1_22;

        switch (PIC_12) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 1:
            Var_19 = (MR_Integer) 3;
            break;
          case (MR_Integer) 0:
            Var_19 = (MR_Integer) 1;
            break;
        }
        H1_22 = ((MR_Integer) 16 ^ (((MR_Integer) 16 << 5)));
        Hash1_8 = (H1_22 ^ Var_19);
      }
      break;
    case (MR_Integer) 3:
      switch (((MR_Integer) ((MR_hl_field(3, Type_6, (MR_Integer) 0))))) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 0:
          Hash1_8 = (MR_Integer) 17;
          break;
        case (MR_Integer) 1:
          Hash1_8 = (MR_Integer) 18;
          break;
      }
      break;
  }
  Var_26 = (Hash0_7 << 5);
  H1_25 = (Hash0_7 ^ Var_26);
  *Hash_4 = (H1_25 ^ Hash1_8);
}

void MR_CALL 
make__hash__module_name_hash_2_p_0(
  MR_Word SymName_3,
  MR_Integer * Hash_4)
{
  if (((MR_tag((MR_Word) SymName_3)) == (MR_Integer) 1))
  {
    MR_String Name_7 = ((MR_String) ((MR_hl_field(1, SymName_3, (MR_Integer) 1))));

    *Hash_4 = mercury__string__hash_1_f_0(Name_7);
  }
  else
  {
    MR_String Name_5 = ((MR_String) ((MR_hl_field(0, SymName_3, (MR_Integer) 0))));

    *Hash_4 = mercury__string__hash_1_f_0(Name_5);
  }
}

void mercury__make__hash__init(void)
{
}

void mercury__make__hash__init_type_tables(void)
{
}

void mercury__make__hash__init_debugger(void)
{
	MR_fatal_error("debugger initialization in MLDS grade");
}

// Ensure everything is compiled with the same grade.
const char *mercury__make__hash__grade_check(void)
{
    return &MR_GRADE_VAR;
}

// :- end_module make.hash.
