/*
** Automatically generated from `llds_out_code_addr.m'
** by the Mercury compiler,
** version rotd-2020-10-05
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


// :- module ll_backend.llds_out.llds_out_code_addr.
// :- implementation.

/*
INIT mercury__ll_backend__llds_out__llds_out_code_addr__init
ENDINIT
*/

#include "ll_backend.llds_out.llds_out_code_addr.mih"


#include "array.mih"
#include "assoc_list.mih"
#include "backend_libs.mih"
#include "bimap.mih"
#include "bitmap.mih"
#include "bool.mih"
#include "builtin.mih"
#include "char.mih"
#include "check_hlds.mih"
#include "construct.mih"
#include "cord.mih"
#include "counter.mih"
#include "deconstruct.mih"
#include "enum.mih"
#include "getopt_io.mih"
#include "hlds.mih"
#include "int.mih"
#include "io.mih"
#include "libs.mih"
#include "list.mih"
#include "ll_backend.mih"
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
#include "set_tree234.mih"
#include "stream.mih"
#include "string.mih"
#include "term.mih"
#include "time.mih"
#include "tree234.mih"
#include "type_desc.mih"
#include "unit.mih"
#include "univ.mih"
#include "varset.mih"
#include "backend_libs.builtin_ops.mih"
#include "backend_libs.name_mangle.mih"
#include "backend_libs.rtti.mih"
#include "check_hlds.type_util.mih"
#include "hlds.code_model.mih"
#include "hlds.hlds_data.mih"
#include "hlds.hlds_llds.mih"
#include "hlds.hlds_module.mih"
#include "hlds.hlds_pred.mih"
#include "libs.globals.mih"
#include "libs.optimization_options.mih"
#include "libs.options.mih"
#include "libs.trace_params.mih"
#include "ll_backend.layout.mih"
#include "ll_backend.llds.mih"
#include "ll_backend.llds_out.mih"
#include "mdbcomp.goal_path.mih"
#include "mdbcomp.prim_data.mih"
#include "mdbcomp.program_representation.mih"
#include "mdbcomp.sym_name.mih"
#include "parse_tree.file_names.mih"
#include "parse_tree.prog_data.mih"
#include "parse_tree.prog_data_foreign.mih"
#include "parse_tree.prog_data_pragma.mih"
#include "parse_tree.prog_foreign.mih"
#include "parse_tree.prog_item.mih"
#include "parse_tree.set_of_var.mih"
#include "ll_backend.llds_out.llds_out_util.mih"




static const MR_EnumFunctorDesc ll_backend__llds_out__llds_out_code_addr__ll_backend__llds_out__llds_out_code_addr__enum_functor_desc_wrapper_0_0;

static const MR_EnumFunctorDesc ll_backend__llds_out__llds_out_code_addr__ll_backend__llds_out__llds_out_code_addr__enum_functor_desc_wrapper_0_1;

static const MR_EnumFunctorDesc ll_backend__llds_out__llds_out_code_addr__ll_backend__llds_out__llds_out_code_addr__enum_functor_desc_wrapper_0_2;

static const MR_EnumFunctorDescPtr ll_backend__llds_out__llds_out_code_addr__ll_backend__llds_out__llds_out_code_addr__enum_value_ordered_wrapper_0[3];

static const MR_EnumFunctorDescPtr ll_backend__llds_out__llds_out_code_addr__ll_backend__llds_out__llds_out_code_addr__enum_name_ordered_wrapper_0[3];

static const MR_Integer ll_backend__llds_out__llds_out_code_addr__ll_backend__llds_out__llds_out_code_addr__functor_number_map_wrapper_0[3];

static void MR_CALL 
ll_backend__llds_out__llds_out_code_addr__output_code_addr_decls_4_p_0(
  MR_Word Info_5,
  MR_Word CodeAddr_6);

static void MR_CALL 
ll_backend__llds_out__llds_out_code_addr__output_label_as_code_addr_decls_3_p_0(
  MR_Word Label_4);

static MR_bool MR_CALL 
ll_backend__llds_out__llds_out_code_addr____Unify____wrapper_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2);

static void MR_CALL 
ll_backend__llds_out__llds_out_code_addr____Compare____wrapper_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3);







#include "array.mh"
#include "bitmap.mh"
#include "io.mh"
#include "string.mh"
#include "time.mh"



static const MR_EnumFunctorDesc ll_backend__llds_out__llds_out_code_addr__ll_backend__llds_out__llds_out_code_addr__enum_functor_desc_wrapper_0_0 = {
  (MR_String) "wrapper_entry",
  INT32_C(0)
};

static const MR_EnumFunctorDesc ll_backend__llds_out__llds_out_code_addr__ll_backend__llds_out__llds_out_code_addr__enum_functor_desc_wrapper_0_1 = {
  (MR_String) "wrapper_label",
  INT32_C(1)
};

static const MR_EnumFunctorDesc ll_backend__llds_out__llds_out_code_addr__ll_backend__llds_out__llds_out_code_addr__enum_functor_desc_wrapper_0_2 = {
  (MR_String) "wrapper_none",
  INT32_C(2)
};

static const MR_EnumFunctorDescPtr ll_backend__llds_out__llds_out_code_addr__ll_backend__llds_out__llds_out_code_addr__enum_value_ordered_wrapper_0[3] = {
  &ll_backend__llds_out__llds_out_code_addr__ll_backend__llds_out__llds_out_code_addr__enum_functor_desc_wrapper_0_0,
  &ll_backend__llds_out__llds_out_code_addr__ll_backend__llds_out__llds_out_code_addr__enum_functor_desc_wrapper_0_1,
  &ll_backend__llds_out__llds_out_code_addr__ll_backend__llds_out__llds_out_code_addr__enum_functor_desc_wrapper_0_2
};

static const MR_EnumFunctorDescPtr ll_backend__llds_out__llds_out_code_addr__ll_backend__llds_out__llds_out_code_addr__enum_name_ordered_wrapper_0[3] = {
  &ll_backend__llds_out__llds_out_code_addr__ll_backend__llds_out__llds_out_code_addr__enum_functor_desc_wrapper_0_0,
  &ll_backend__llds_out__llds_out_code_addr__ll_backend__llds_out__llds_out_code_addr__enum_functor_desc_wrapper_0_1,
  &ll_backend__llds_out__llds_out_code_addr__ll_backend__llds_out__llds_out_code_addr__enum_functor_desc_wrapper_0_2
};

static const MR_Integer ll_backend__llds_out__llds_out_code_addr__ll_backend__llds_out__llds_out_code_addr__functor_number_map_wrapper_0[3] = {
  (MR_Integer) 0,
  (MR_Integer) 1,
  (MR_Integer) 2
};

const MR_TypeCtorInfo_Struct ll_backend__llds_out__llds_out_code_addr__ll_backend__llds_out__llds_out_code_addr__type_ctor_info_wrapper_0 = {
  (MR_Integer) 0,
  UINT8_C(17),
  INT8_C(-1),
  MR_TYPECTOR_REP_ENUM,
  ((MR_Box) (ll_backend__llds_out__llds_out_code_addr____Unify____wrapper_0_0_10001)),
  ((MR_Box) (ll_backend__llds_out__llds_out_code_addr____Compare____wrapper_0_0_10001)),
  (MR_String) "ll_backend.llds_out.llds_out_code_addr",
  (MR_String) "wrapper",
  {     ll_backend__llds_out__llds_out_code_addr__ll_backend__llds_out__llds_out_code_addr__enum_name_ordered_wrapper_0 },
  {     ll_backend__llds_out__llds_out_code_addr__ll_backend__llds_out__llds_out_code_addr__enum_value_ordered_wrapper_0 },
  (MR_Integer) 3,
  UINT16_C(4),
  ll_backend__llds_out__llds_out_code_addr__ll_backend__llds_out__llds_out_code_addr__functor_number_map_wrapper_0
};

void MR_CALL 
ll_backend__llds_out__llds_out_code_addr____Compare____wrapper_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3)
{
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
}

MR_bool MR_CALL 
ll_backend__llds_out__llds_out_code_addr____Unify____wrapper_0_0(
  MR_Word HeadVar__2_1,
  MR_Word HeadVar__2_2)
{
  {
    MR_bool succeeded = (HeadVar__2_1 == HeadVar__2_2);

    return succeeded;
  }
}

MR_Word MR_CALL 
ll_backend__llds_out__llds_out_code_addr__label_is_external_to_c_module_1_f_0(
  MR_Word HeadVar__1_1)
{
  {
    MR_Word HeadVar__2_2;

    if (((MR_tag((MR_Word) HeadVar__1_1)) == (MR_Integer) 1))
    {
      MR_Word Var_12 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 0))) & (MR_Integer) 3);

      switch (Var_12) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 0:
          HeadVar__2_2 = (MR_Integer) 0;
          break;
        case (MR_Integer) 2:
          HeadVar__2_2 = (MR_Integer) 1;
          break;
        case (MR_Integer) 1:
          HeadVar__2_2 = (MR_Integer) 1;
          break;
      }
    }
    else
      HeadVar__2_2 = (MR_Integer) 0;
    return HeadVar__2_2;
  }
}

void MR_CALL 
ll_backend__llds_out__llds_out_code_addr__output_label_as_code_addr_3_p_0(
  MR_Word Label_4)
{
  {
    MR_String Str_6;
    MR_String LabelStr_12;

    LabelStr_12 = ll_backend__llds_out__llds_out_code_addr__label_to_c_string_2_f_0(Label_4, (MR_Integer) 0);
    if (((MR_tag((MR_Word) Label_4)) == (MR_Integer) 1))
    {
      MR_Word Var_30 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(1), Label_4, (MR_Integer) 0))) & (MR_Integer) 3);

      switch (Var_30) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 0:
          {
            MR_String Var_16;

            Var_16 = mercury__string__f_43_43_2_f_0(LabelStr_12, (MR_String) ")");
            Str_6 = mercury__string__f_43_43_2_f_0((MR_String) "MR_LABEL_AP(", Var_16);
          }
          break;
        case (MR_Integer) 2:
          {
            MR_String Var_19;

            Var_19 = mercury__string__f_43_43_2_f_0(LabelStr_12, (MR_String) ")");
            Str_6 = mercury__string__f_43_43_2_f_0((MR_String) "MR_ENTRY_AP(", Var_19);
          }
          break;
        case (MR_Integer) 1:
          {
            MR_String Var_41;

            Var_41 = mercury__string__f_43_43_2_f_0(LabelStr_12, (MR_String) ")");
            Str_6 = mercury__string__f_43_43_2_f_0((MR_String) "MR_ENTRY_AP(", Var_41);
          }
          break;
      }
    }
    else
    {
      MR_String Var_34;

      Var_34 = mercury__string__f_43_43_2_f_0(LabelStr_12, (MR_String) ")");
      Str_6 = mercury__string__f_43_43_2_f_0((MR_String) "MR_LABEL_AP(", Var_34);
    }
    mercury__io__write_string_3_p_0(Str_6);
  }
}

void MR_CALL 
ll_backend__llds_out__llds_out_code_addr__output_code_addr_3_p_0(
  MR_Word CodeAddr_4)
{
  {
    MR_String BaseStr_6;
    MR_Word NeedsPrefix_7;
    MR_Word Wrapper_8;

    ll_backend__llds_out__llds_out_code_addr__code_addr_to_string_base_4_p_0(CodeAddr_4, &BaseStr_6, &NeedsPrefix_7, &Wrapper_8);
    ll_backend__llds_out__llds_out_code_addr__output_code_addr_from_pieces_5_p_0(BaseStr_6, NeedsPrefix_7, Wrapper_8);
  }
}

void MR_CALL 
ll_backend__llds_out__llds_out_code_addr__code_addr_to_string_base_4_p_0(
  MR_Word CodeAddr_5,
  MR_String * BaseStr_6,
  MR_Word * NeedsPrefix_7,
  MR_Word * Wrapper_8)
{
  switch (MR_tag((MR_Word) CodeAddr_5)) {
    default: /*NOTREACHED*/ MR_assert(0);
    case (MR_Integer) 0:
      switch (MR_unmkbody(CodeAddr_5)) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 0:
          {
            *BaseStr_6 = (MR_String) "MR_succip";
            *NeedsPrefix_7 = (MR_Integer) 0;
            *Wrapper_8 = (MR_Integer) 2;
          }
          break;
        case (MR_Integer) 1:
          {
            *BaseStr_6 = (MR_String) "MR_do_redo";
            *NeedsPrefix_7 = (MR_Integer) 0;
            *Wrapper_8 = (MR_Integer) 0;
          }
          break;
        case (MR_Integer) 2:
          {
            *BaseStr_6 = (MR_String) "MR_do_fail";
            *NeedsPrefix_7 = (MR_Integer) 0;
            *Wrapper_8 = (MR_Integer) 0;
          }
          break;
        case (MR_Integer) 3:
          {
            *BaseStr_6 = (MR_String) "MR_do_trace_redo_fail_shallow";
            *NeedsPrefix_7 = (MR_Integer) 0;
            *Wrapper_8 = (MR_Integer) 0;
          }
          break;
        case (MR_Integer) 4:
          {
            *BaseStr_6 = (MR_String) "MR_do_trace_redo_fail_deep";
            *NeedsPrefix_7 = (MR_Integer) 0;
            *Wrapper_8 = (MR_Integer) 0;
          }
          break;
        case (MR_Integer) 5:
          {
            *BaseStr_6 = (MR_String) "MR_do_not_reached";
            *NeedsPrefix_7 = (MR_Integer) 0;
            *Wrapper_8 = (MR_Integer) 0;
          }
          break;
      }
      break;
    case (MR_Integer) 1:
      {
        MR_Word Label_9 = ((MR_Word) ((MR_hl_field(MR_mktag(1), CodeAddr_5, (MR_Integer) 0))));

        *BaseStr_6 = ll_backend__llds_out__llds_out_code_addr__label_to_c_string_2_f_0(Label_9, (MR_Integer) 0);
        *NeedsPrefix_7 = (MR_Integer) 1;
        if (((MR_tag((MR_Word) Label_9)) == (MR_Integer) 1))
        {
          MR_Word Var_30 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(1), Label_9, (MR_Integer) 0))) & (MR_Integer) 3);

          switch (Var_30) {
            default: /*NOTREACHED*/ MR_assert(0);
            case (MR_Integer) 0:
              *Wrapper_8 = (MR_Integer) 1;
              break;
            case (MR_Integer) 2:
              *Wrapper_8 = (MR_Integer) 0;
              break;
            case (MR_Integer) 1:
              *Wrapper_8 = (MR_Integer) 0;
              break;
          }
        }
        else
          *Wrapper_8 = (MR_Integer) 1;
      }
      break;
    case (MR_Integer) 2:
      {
        MR_Word ProcLabel_11 = ((MR_Word) ((MR_hl_field(MR_mktag(2), CodeAddr_5, (MR_Integer) 0))));

        *BaseStr_6 = backend_libs__name_mangle__proc_label_to_c_string_2_f_0(ProcLabel_11, (MR_Integer) 0);
        *NeedsPrefix_7 = (MR_Integer) 1;
        *Wrapper_8 = (MR_Integer) 0;
      }
      break;
    case (MR_Integer) 3:
      switch (((MR_Integer) ((MR_hl_field(MR_mktag(3), CodeAddr_5, (MR_Integer) 0))))) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 0:
          {
            MR_Word Last_12 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(3), CodeAddr_5, (MR_Integer) 1))) & (MR_Integer) 1);

            switch (Last_12) {
              default: /*NOTREACHED*/ MR_assert(0);
              case (MR_Integer) 0:
                *BaseStr_6 = (MR_String) "MR_do_succeed";
                break;
              case (MR_Integer) 1:
                *BaseStr_6 = (MR_String) "MR_do_last_succeed";
                break;
            }
            *NeedsPrefix_7 = (MR_Integer) 0;
            *Wrapper_8 = (MR_Integer) 0;
          }
          break;
        case (MR_Integer) 1:
          {
            MR_Word Variant_13 = ((MR_Word) ((MR_hl_field(MR_mktag(3), CodeAddr_5, (MR_Integer) 1))));
            MR_String Var_17;

            if ((Variant_13 == (MR_Word) ((MR_Unsigned) 0U)))
              Var_17 = (MR_String) "compact";
            else
            {
              MR_Integer Num_36 = ((MR_Integer) ((MR_hl_field(MR_mktag(1), Variant_13, (MR_Integer) 0))));

              Var_17 = mercury__string__int_to_string_1_f_0(Num_36);
            }
            *BaseStr_6 = mercury__string__f_43_43_2_f_0((MR_String) "mercury__do_call_closure_", Var_17);
            *NeedsPrefix_7 = (MR_Integer) 0;
            *Wrapper_8 = (MR_Integer) 0;
          }
          break;
        case (MR_Integer) 2:
          {
            MR_String Var_15;
            MR_Word Variant_20 = ((MR_Word) ((MR_hl_field(MR_mktag(3), CodeAddr_5, (MR_Integer) 1))));

            if ((Variant_20 == (MR_Word) ((MR_Unsigned) 0U)))
              Var_15 = (MR_String) "compact";
            else
            {
              MR_Integer Num_33 = ((MR_Integer) ((MR_hl_field(MR_mktag(1), Variant_20, (MR_Integer) 0))));

              Var_15 = mercury__string__int_to_string_1_f_0(Num_33);
            }
            *BaseStr_6 = mercury__string__f_43_43_2_f_0((MR_String) "mercury__do_call_class_method_", Var_15);
            *NeedsPrefix_7 = (MR_Integer) 0;
            *Wrapper_8 = (MR_Integer) 0;
          }
          break;
      }
      break;
  }
}

void MR_CALL 
ll_backend__llds_out__llds_out_code_addr__output_code_addr_from_pieces_5_p_0(
  MR_String BaseStr_6,
  MR_Word NeedsPrefix_7,
  MR_Word Wrapper_8)
{
  switch (NeedsPrefix_7) {
    default: /*NOTREACHED*/ MR_assert(0);
    case (MR_Integer) 0:
      switch (Wrapper_8) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 0:
          {
            mercury__io__write_string_3_p_0((MR_String) "MR_ENTRY(");
            mercury__io__write_string_3_p_0(BaseStr_6);
            mercury__io__write_string_3_p_0((MR_String) ")");
          }
          break;
        case (MR_Integer) 1:
          {
            mercury__io__write_string_3_p_0((MR_String) "MR_LABEL(");
            mercury__io__write_string_3_p_0(BaseStr_6);
            mercury__io__write_string_3_p_0((MR_String) ")");
          }
          break;
        case (MR_Integer) 2:
          mercury__io__write_string_3_p_0(BaseStr_6);
          break;
      }
      break;
    case (MR_Integer) 1:
      switch (Wrapper_8) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 0:
          {
            mercury__io__write_string_3_p_0((MR_String) "MR_ENTRY_AP(");
            mercury__io__write_string_3_p_0(BaseStr_6);
            mercury__io__write_string_3_p_0((MR_String) ")");
          }
          break;
        case (MR_Integer) 1:
          {
            mercury__io__write_string_3_p_0((MR_String) "MR_LABEL_AP(");
            mercury__io__write_string_3_p_0(BaseStr_6);
            mercury__io__write_string_3_p_0((MR_String) ")");
          }
          break;
        case (MR_Integer) 2:
          {
            MR_String Var_32;

            Var_32 = backend_libs__name_mangle__mercury_label_prefix_0_f_0();
            mercury__io__write_string_3_p_0(Var_32);
            mercury__io__write_string_3_p_0(BaseStr_6);
          }
          break;
      }
      break;
  }
}

void MR_CALL 
ll_backend__llds_out__llds_out_code_addr__output_label_maybe_prefix_4_p_0(
  MR_Word Label_5,
  MR_Word AddPrefix_6)
{
  {
    MR_String LabelStr_8;

    LabelStr_8 = ll_backend__llds_out__llds_out_code_addr__label_to_c_string_2_f_0(Label_5, AddPrefix_6);
    mercury__io__write_string_3_p_0(LabelStr_8);
  }
}

void MR_CALL 
ll_backend__llds_out__llds_out_code_addr__output_label_no_prefix_3_p_0(
  MR_Word Label_4)
{
  {
    MR_String LabelStr_6;

    LabelStr_6 = ll_backend__llds_out__llds_out_code_addr__label_to_c_string_2_f_0(Label_4, (MR_Integer) 0);
    mercury__io__write_string_3_p_0(LabelStr_6);
  }
}

void MR_CALL 
ll_backend__llds_out__llds_out_code_addr__output_label_3_p_0(
  MR_Word Label_4)
{
  {
    MR_String LabelStr_6;

    LabelStr_6 = ll_backend__llds_out__llds_out_code_addr__label_to_c_string_2_f_0(Label_4, (MR_Integer) 1);
    mercury__io__write_string_3_p_0(LabelStr_6);
  }
}

MR_String MR_CALL 
ll_backend__llds_out__llds_out_code_addr__label_to_c_string_2_f_0(
  MR_Word Label_4,
  MR_Word AddPrefix_5)
{
  {
    MR_String LabelStr_6;

    if (((MR_tag((MR_Word) Label_4)) == (MR_Integer) 1))
    {
      MR_Word ProcLabel_8 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Label_4, (MR_Integer) 1))));

      LabelStr_6 = backend_libs__name_mangle__proc_label_to_c_string_2_f_0(ProcLabel_8, AddPrefix_5);
    }
    else
    {
      MR_Integer Num_9 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), Label_4, (MR_Integer) 0))));
      MR_String ProcLabelStr_10;
      MR_String NumStr_11;
      MR_String Var_12;
      MR_Word ProcLabel_14 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Label_4, (MR_Integer) 1))));

      ProcLabelStr_10 = backend_libs__name_mangle__proc_label_to_c_string_2_f_0(ProcLabel_14, AddPrefix_5);
      mercury__string__int_to_string_2_p_0(Num_9, &NumStr_11);
      Var_12 = mercury__string__f_43_43_2_f_0((MR_String) "_i", NumStr_11);
      LabelStr_6 = mercury__string__f_43_43_2_f_0(ProcLabelStr_10, Var_12);
    }
    return LabelStr_6;
  }
}

MR_String MR_CALL 
ll_backend__llds_out__llds_out_code_addr__ho_call_variant_to_string_1_f_0(
  MR_Word Variant_3)
{
  {
    MR_String Str_4;

    if ((Variant_3 == (MR_Word) ((MR_Unsigned) 0U)))
      Str_4 = (MR_String) "compact";
    else
    {
      MR_Integer Num_5 = ((MR_Integer) ((MR_hl_field(MR_mktag(1), Variant_3, (MR_Integer) 0))));

      Str_4 = mercury__string__int_to_string_1_f_0(Num_5);
    }
    return Str_4;
  }
}

void MR_CALL 
ll_backend__llds_out__llds_out_code_addr__output_record_code_addr_decls_6_p_0(
  MR_Word Info_7,
  MR_Word CodeAddress_8,
  MR_Word STATE_VARIABLE_DeclSet_0_12,
  MR_Word * STATE_VARIABLE_DeclSet_13)
{
  {
    MR_Integer Var_11;

    ll_backend__llds_out__llds_out_code_addr__output_record_code_addr_decls_format_10_p_0(Info_7, CodeAddress_8, (MR_String) "", (MR_String) "", (MR_Integer) 0, &Var_11, STATE_VARIABLE_DeclSet_0_12, STATE_VARIABLE_DeclSet_13);
  }
}

void MR_CALL 
ll_backend__llds_out__llds_out_code_addr__output_record_code_addr_decls_format_10_p_0(
  MR_Word Info_11,
  MR_Word CodeAddress_12,
  MR_String FirstIndent_13,
  MR_String LaterIndent_14,
  MR_Integer STATE_VARIABLE_N_0_19,
  MR_Integer * STATE_VARIABLE_N_20,
  MR_Word STATE_VARIABLE_DeclSet_0_21,
  MR_Word * STATE_VARIABLE_DeclSet_22)
{
  {
    MR_bool succeeded;
    MR_Word Var_25;

    {
      Var_25 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(3), Var_25, 0) = ((MR_Box) ((MR_Unsigned) 1U));
      MR_hl_field(MR_mktag(3), Var_25, 1) = ((MR_Box) (CodeAddress_12));
    }
    succeeded = ll_backend__llds_out__llds_out_util__decl_set_is_member_2_p_0(Var_25, STATE_VARIABLE_DeclSet_0_21);
    if (succeeded)
    {
      *STATE_VARIABLE_DeclSet_22 = STATE_VARIABLE_DeclSet_0_21;
      *STATE_VARIABLE_N_20 = STATE_VARIABLE_N_0_19;
    }
    else
    {
      MR_Word Var_26;

      {
        Var_26 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(3), Var_26, 0) = ((MR_Box) ((MR_Unsigned) 1U));
        MR_hl_field(MR_mktag(3), Var_26, 1) = ((MR_Box) (CodeAddress_12));
      }
      ll_backend__llds_out__llds_out_util__decl_set_insert_3_p_0(Var_26, STATE_VARIABLE_DeclSet_0_21, STATE_VARIABLE_DeclSet_22);
      switch (MR_tag((MR_Word) CodeAddress_12)) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 0:
          switch (MR_unmkbody(CodeAddress_12)) {
            default: /*NOTREACHED*/ MR_assert(0);
            case (MR_Integer) 0:
              *STATE_VARIABLE_N_20 = STATE_VARIABLE_N_0_19;
              break;
            case (MR_Integer) 1:
            case (MR_Integer) 2:
              {
                MR_Word UseMacro_45 = ((((MR_Unsigned) ((MR_hl_field(MR_mktag(0), Info_11, (MR_Integer) 7))) >> 3)) & (MR_Integer) 1);

                switch (UseMacro_45) {
                  default: /*NOTREACHED*/ MR_assert(0);
                  case (MR_Integer) 1:
                    {
                      ll_backend__llds_out__llds_out_util__output_indent_5_p_0(FirstIndent_13, LaterIndent_14, STATE_VARIABLE_N_0_19);
                      *STATE_VARIABLE_N_20 = (MR_Integer) ((MR_Unsigned) STATE_VARIABLE_N_0_19 + (MR_Unsigned) 1);
                      ll_backend__llds_out__llds_out_code_addr__output_code_addr_decls_4_p_0(Info_11, CodeAddress_12);
                    }
                    break;
                  case (MR_Integer) 0:
                    *STATE_VARIABLE_N_20 = STATE_VARIABLE_N_0_19;
                    break;
                }
              }
              break;
            case (MR_Integer) 3:
            case (MR_Integer) 4:
            case (MR_Integer) 5:
              {
                ll_backend__llds_out__llds_out_util__output_indent_5_p_0(FirstIndent_13, LaterIndent_14, STATE_VARIABLE_N_0_19);
                *STATE_VARIABLE_N_20 = (MR_Integer) ((MR_Unsigned) STATE_VARIABLE_N_0_19 + (MR_Unsigned) 1);
                ll_backend__llds_out__llds_out_code_addr__output_code_addr_decls_4_p_0(Info_11, CodeAddress_12);
              }
              break;
          }
          break;
        case (MR_Integer) 1:
          {
            MR_Word Label_35 = ((MR_Word) ((MR_hl_field(MR_mktag(1), CodeAddress_12, (MR_Integer) 0))));

            if (((MR_tag((MR_Word) Label_35)) == (MR_Integer) 1))
            {
              MR_Word Var_73 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(1), Label_35, (MR_Integer) 0))) & (MR_Integer) 3);

              switch (Var_73) {
                default: /*NOTREACHED*/ MR_assert(0);
                case (MR_Integer) 0:
                  *STATE_VARIABLE_N_20 = STATE_VARIABLE_N_0_19;
                  break;
                case (MR_Integer) 2:
                  {
                    ll_backend__llds_out__llds_out_util__output_indent_5_p_0(FirstIndent_13, LaterIndent_14, STATE_VARIABLE_N_0_19);
                    *STATE_VARIABLE_N_20 = (MR_Integer) ((MR_Unsigned) STATE_VARIABLE_N_0_19 + (MR_Unsigned) 1);
                    ll_backend__llds_out__llds_out_code_addr__output_code_addr_decls_4_p_0(Info_11, CodeAddress_12);
                  }
                  break;
                case (MR_Integer) 1:
                  {
                    ll_backend__llds_out__llds_out_util__output_indent_5_p_0(FirstIndent_13, LaterIndent_14, STATE_VARIABLE_N_0_19);
                    *STATE_VARIABLE_N_20 = (MR_Integer) ((MR_Unsigned) STATE_VARIABLE_N_0_19 + (MR_Unsigned) 1);
                    ll_backend__llds_out__llds_out_code_addr__output_code_addr_decls_4_p_0(Info_11, CodeAddress_12);
                  }
                  break;
              }
            }
            else
              *STATE_VARIABLE_N_20 = STATE_VARIABLE_N_0_19;
          }
          break;
        case (MR_Integer) 2:
          {
            ll_backend__llds_out__llds_out_util__output_indent_5_p_0(FirstIndent_13, LaterIndent_14, STATE_VARIABLE_N_0_19);
            *STATE_VARIABLE_N_20 = (MR_Integer) ((MR_Unsigned) STATE_VARIABLE_N_0_19 + (MR_Unsigned) 1);
            ll_backend__llds_out__llds_out_code_addr__output_code_addr_decls_4_p_0(Info_11, CodeAddress_12);
          }
          break;
        case (MR_Integer) 3:
          switch (((MR_Integer) ((MR_hl_field(MR_mktag(3), CodeAddress_12, (MR_Integer) 0))))) {
            default: /*NOTREACHED*/ MR_assert(0);
            case (MR_Integer) 0:
              *STATE_VARIABLE_N_20 = STATE_VARIABLE_N_0_19;
              break;
            case (MR_Integer) 1:
            case (MR_Integer) 2:
              {
                ll_backend__llds_out__llds_out_util__output_indent_5_p_0(FirstIndent_13, LaterIndent_14, STATE_VARIABLE_N_0_19);
                *STATE_VARIABLE_N_20 = (MR_Integer) ((MR_Unsigned) STATE_VARIABLE_N_0_19 + (MR_Unsigned) 1);
                ll_backend__llds_out__llds_out_code_addr__output_code_addr_decls_4_p_0(Info_11, CodeAddress_12);
              }
              break;
          }
          break;
      }
    }
  }
}

static void MR_CALL 
ll_backend__llds_out__llds_out_code_addr__output_code_addr_decls_4_p_0(
  MR_Word Info_5,
  MR_Word CodeAddr_6)
{
  switch (MR_tag((MR_Word) CodeAddr_6)) {
    default: /*NOTREACHED*/ MR_assert(0);
    case (MR_Integer) 0:
      switch (MR_unmkbody(CodeAddr_6)) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 0:
          {
          }
          break;
        case (MR_Integer) 1:
          {
            MR_Word UseMacro_11 = ((((MR_Unsigned) ((MR_hl_field(MR_mktag(0), Info_5, (MR_Integer) 7))) >> 3)) & (MR_Integer) 1);

            switch (UseMacro_11) {
              default: /*NOTREACHED*/ MR_assert(0);
              case (MR_Integer) 1:
                mercury__io__write_string_3_p_0((MR_String) "MR_declare_entry(MR_do_redo);\n");
                break;
              case (MR_Integer) 0:
                {
                }
                break;
            }
          }
          break;
        case (MR_Integer) 2:
          {
            MR_Word UseMacro_43 = ((((MR_Unsigned) ((MR_hl_field(MR_mktag(0), Info_5, (MR_Integer) 7))) >> 3)) & (MR_Integer) 1);

            switch (UseMacro_43) {
              default: /*NOTREACHED*/ MR_assert(0);
              case (MR_Integer) 1:
                mercury__io__write_string_3_p_0((MR_String) "MR_declare_entry(MR_do_fail);\n");
                break;
              case (MR_Integer) 0:
                {
                }
                break;
            }
          }
          break;
        case (MR_Integer) 3:
          mercury__io__write_string_3_p_0((MR_String) "MR_declare_entry(MR_do_trace_redo_fail_shallow);\n");
          break;
        case (MR_Integer) 4:
          mercury__io__write_string_3_p_0((MR_String) "MR_declare_entry(MR_do_trace_redo_fail_deep);\n");
          break;
        case (MR_Integer) 5:
          mercury__io__write_string_3_p_0((MR_String) "MR_declare_entry(MR_do_not_reached);\n");
          break;
      }
      break;
    case (MR_Integer) 1:
      {
        MR_Word Label_8 = ((MR_Word) ((MR_hl_field(MR_mktag(1), CodeAddr_6, (MR_Integer) 0))));

        ll_backend__llds_out__llds_out_code_addr__output_label_as_code_addr_decls_3_p_0(Label_8);
      }
      break;
    case (MR_Integer) 2:
      {
        MR_Word ProcLabel_9 = ((MR_Word) ((MR_hl_field(MR_mktag(2), CodeAddr_6, (MR_Integer) 0))));

        mercury__io__write_string_3_p_0((MR_String) "MR_decl_entry(");
        backend_libs__name_mangle__output_proc_label_no_prefix_3_p_0(ProcLabel_9);
        mercury__io__write_string_3_p_0((MR_String) ");\n");
      }
      break;
    case (MR_Integer) 3:
      switch (((MR_Integer) ((MR_hl_field(MR_mktag(3), CodeAddr_6, (MR_Integer) 0))))) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 0:
          {
          }
          break;
        case (MR_Integer) 1:
          {
            MR_Word Variant_12 = ((MR_Word) ((MR_hl_field(MR_mktag(3), CodeAddr_6, (MR_Integer) 1))));
            MR_String Var_25;

            mercury__io__write_string_3_p_0((MR_String) "MR_declare_entry(mercury__do_call_closure_");
            if ((Variant_12 == (MR_Word) ((MR_Unsigned) 0U)))
              Var_25 = (MR_String) "compact";
            else
            {
              MR_Integer Num_96 = ((MR_Integer) ((MR_hl_field(MR_mktag(1), Variant_12, (MR_Integer) 0))));

              Var_25 = mercury__string__int_to_string_1_f_0(Num_96);
            }
            mercury__io__write_string_3_p_0(Var_25);
            mercury__io__write_string_3_p_0((MR_String) ");\n");
          }
          break;
        case (MR_Integer) 2:
          {
            MR_String Var_19;
            MR_Word Variant_44 = ((MR_Word) ((MR_hl_field(MR_mktag(3), CodeAddr_6, (MR_Integer) 1))));

            mercury__io__write_string_3_p_0((MR_String) "MR_declare_entry(mercury__do_call_class_method_");
            if ((Variant_44 == (MR_Word) ((MR_Unsigned) 0U)))
              Var_19 = (MR_String) "compact";
            else
            {
              MR_Integer Num_93 = ((MR_Integer) ((MR_hl_field(MR_mktag(1), Variant_44, (MR_Integer) 0))));

              Var_19 = mercury__string__int_to_string_1_f_0(Num_93);
            }
            mercury__io__write_string_3_p_0(Var_19);
            mercury__io__write_string_3_p_0((MR_String) ");\n");
          }
          break;
      }
      break;
  }
}

static void MR_CALL 
ll_backend__llds_out__llds_out_code_addr__output_label_as_code_addr_decls_3_p_0(
  MR_Word Label_4)
{
  if (((MR_tag((MR_Word) Label_4)) == (MR_Integer) 1))
  {
    MR_Word Var_24 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Label_4, (MR_Integer) 1))));
    MR_Word Var_25 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(1), Label_4, (MR_Integer) 0))) & (MR_Integer) 3);

    switch (Var_25) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        {
        }
        break;
      case (MR_Integer) 2:
        {
          MR_String LabelStr_30;

          mercury__io__write_string_3_p_0((MR_String) "MR_decl_entry(");
          LabelStr_30 = backend_libs__name_mangle__proc_label_to_c_string_2_f_0(Var_24, (MR_Integer) 0);
          mercury__io__write_string_3_p_0(LabelStr_30);
          mercury__io__write_string_3_p_0((MR_String) ");\n");
        }
        break;
      case (MR_Integer) 1:
        {
        }
        break;
    }
  }
}

static MR_bool MR_CALL 
ll_backend__llds_out__llds_out_code_addr____Unify____wrapper_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  {
    MR_bool succeeded;

    succeeded = ll_backend__llds_out__llds_out_code_addr____Unify____wrapper_0_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
    return succeeded;
  }
}

static void MR_CALL 
ll_backend__llds_out__llds_out_code_addr____Compare____wrapper_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  {
    MR_Word conv0_HeadVar__1_1;

    ll_backend__llds_out__llds_out_code_addr____Compare____wrapper_0_0(&conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
    *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
  }
}

void mercury__ll_backend__llds_out__llds_out_code_addr__init(void)
{
}

void mercury__ll_backend__llds_out__llds_out_code_addr__init_type_tables(void)
{
	static MR_bool initialised = MR_FALSE;
	if (initialised) return;
	initialised = MR_TRUE;

	MR_register_type_ctor_info(&ll_backend__llds_out__llds_out_code_addr__ll_backend__llds_out__llds_out_code_addr__type_ctor_info_wrapper_0);
}

void mercury__ll_backend__llds_out__llds_out_code_addr__init_debugger(void)
{
	MR_fatal_error("debugger initialization in MLDS grade");
}

// Ensure everything is compiled with the same grade.
const char *mercury__ll_backend__llds_out__llds_out_code_addr__grade_check(void)
{
    return &MR_GRADE_VAR;
}

// :- end_module ll_backend.llds_out.llds_out_code_addr.
