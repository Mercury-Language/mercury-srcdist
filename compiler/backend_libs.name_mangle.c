/*
** Automatically generated from `name_mangle.m'
** by the Mercury compiler,
** version rotd-2026-07-07
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


// :- module backend_libs.name_mangle.
// :- implementation.

/*
INIT mercury__backend_libs__name_mangle__init
ENDINIT
*/

#include "backend_libs.name_mangle.mih"


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
#include "hlds.mih"
#include "int.mih"
#include "io.mih"
#include "libs.mih"
#include "list.mih"
#include "map.mih"
#include "maybe.mih"
#include "mdbcomp.mih"
#include "one_or_more.mih"
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
#include "backend_libs.rtti.mih"
#include "hlds.hlds_pred.mih"
#include "hlds.hlds_rtti.mih"
#include "hlds.pred_name.mih"
#include "libs.file_util.mih"
#include "libs.globals.mih"
#include "mdbcomp.prim_data.mih"
#include "mdbcomp.sym_name.mih"
#include "parse_tree.file_names.mih"
#include "parse_tree.find_module.mih"
#include "parse_tree.prog_data.mih"
#include "parse_tree.prog_data_foreign.mih"
#include "parse_tree.prog_data_pragma.mih"
#include "parse_tree.prog_foreign.mih"
#include "parse_tree.prog_item.mih"
#include "parse_tree.set_of_var.mih"
#include "string.format.mih"
#include "string.parse_util.mih"




static const MR_EnumFunctorDesc backend_libs__name_mangle__backend_libs__name_mangle__enum_functor_desc_maybe_add_label_prefix_0_0;

static const MR_EnumFunctorDesc backend_libs__name_mangle__backend_libs__name_mangle__enum_functor_desc_maybe_add_label_prefix_0_1;

static const MR_EnumFunctorDescPtr backend_libs__name_mangle__backend_libs__name_mangle__enum_ordinal_ordered_maybe_add_label_prefix_0[2];

static const MR_EnumFunctorDescPtr backend_libs__name_mangle__backend_libs__name_mangle__enum_name_ordered_maybe_add_label_prefix_0[2];

static const MR_Integer backend_libs__name_mangle__backend_libs__name_mangle__functor_number_map_maybe_add_label_prefix_0[2];

static MR_String MR_CALL 
backend_libs__name_mangle__make_pred_or_func_name_6_f_0(
  MR_Word DefiningModule_8,
  MR_Word PredOrFunc_9,
  MR_Word DeclaringModule_10,
  MR_String Name0_11,
  MR_Integer Arity_12,
  MR_Word AddPrefix_13);

static MR_bool MR_CALL 
backend_libs__name_mangle____Unify____maybe_add_label_prefix_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2);

static void MR_CALL 
backend_libs__name_mangle____Compare____maybe_add_label_prefix_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3);


static /* final */ const MR_Box backend_libs__name_mangle_scalar_common_1[2][1];




static /* final */ const MR_Box backend_libs__name_mangle_scalar_common_1[2][1] = {
  /* row   0 */
  { (MR_Box) (((((MR_Unsigned) 0U << 4)) | (((((MR_Unsigned) 0U << 3)) | (((((MR_Unsigned) 0U << 2)) | (((MR_Unsigned) 0U << 1)))))))) },
  /* row   1 */
  { ((MR_Box) ((MR_String) "")) },
};



#include "array.mh"
#include "bitmap.mh"
#include "io.mh"
#include "string.mh"
#include "time.mh"
#include "io.stream_ops.mh"


static const MR_EnumFunctorDesc backend_libs__name_mangle__backend_libs__name_mangle__enum_functor_desc_maybe_add_label_prefix_0_0 = {
  (MR_String) "do_not_add_label_prefix",
  INT32_C(0)
};

static const MR_EnumFunctorDesc backend_libs__name_mangle__backend_libs__name_mangle__enum_functor_desc_maybe_add_label_prefix_0_1 = {
  (MR_String) "add_label_prefix",
  INT32_C(1)
};

static const MR_EnumFunctorDescPtr backend_libs__name_mangle__backend_libs__name_mangle__enum_ordinal_ordered_maybe_add_label_prefix_0[2] = {
  &backend_libs__name_mangle__backend_libs__name_mangle__enum_functor_desc_maybe_add_label_prefix_0_0,
  &backend_libs__name_mangle__backend_libs__name_mangle__enum_functor_desc_maybe_add_label_prefix_0_1
};

static const MR_EnumFunctorDescPtr backend_libs__name_mangle__backend_libs__name_mangle__enum_name_ordered_maybe_add_label_prefix_0[2] = {
  &backend_libs__name_mangle__backend_libs__name_mangle__enum_functor_desc_maybe_add_label_prefix_0_1,
  &backend_libs__name_mangle__backend_libs__name_mangle__enum_functor_desc_maybe_add_label_prefix_0_0
};

static const MR_Integer backend_libs__name_mangle__backend_libs__name_mangle__functor_number_map_maybe_add_label_prefix_0[2] = {
  (MR_Integer) 1,
  (MR_Integer) 0
};

const MR_TypeCtorInfo_Struct backend_libs__name_mangle__backend_libs__name_mangle__type_ctor_info_maybe_add_label_prefix_0 = {
  (MR_Integer) 0,
  UINT8_C(18),
  INT8_C(-1),
  MR_TYPECTOR_REP_ENUM,
  ((MR_Box) (backend_libs__name_mangle____Unify____maybe_add_label_prefix_0_0_10001)),
  ((MR_Box) (backend_libs__name_mangle____Compare____maybe_add_label_prefix_0_0_10001)),
  (MR_String) "backend_libs.name_mangle",
  (MR_String) "maybe_add_label_prefix",
  { backend_libs__name_mangle__backend_libs__name_mangle__enum_name_ordered_maybe_add_label_prefix_0 },
  { backend_libs__name_mangle__backend_libs__name_mangle__enum_ordinal_ordered_maybe_add_label_prefix_0 },
  (MR_Integer) 2,
  UINT16_C(12),
  backend_libs__name_mangle__backend_libs__name_mangle__functor_number_map_maybe_add_label_prefix_0,

};

void MR_CALL 
backend_libs__name_mangle____Compare____maybe_add_label_prefix_0_0(
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

MR_bool MR_CALL 
backend_libs__name_mangle____Unify____maybe_add_label_prefix_0_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2)
{
  MR_bool succeeded = (HeadVar__1_1 == HeadVar__2_2);

  return succeeded;
}

MR_String MR_CALL 
backend_libs__name_mangle__mercury_common_type_prefix_0_f_0(void)
{
  return (MR_String) "mercury_type_";
}

MR_String MR_CALL 
backend_libs__name_mangle__mercury_vector_common_array_prefix_0_f_0(void)
{
  return (MR_String) "mercury_vector_common_";
}

MR_String MR_CALL 
backend_libs__name_mangle__mercury_scalar_common_array_prefix_0_f_0(void)
{
  return (MR_String) "mercury_common_";
}

MR_String MR_CALL 
backend_libs__name_mangle__mercury_data_prefix_0_f_0(void)
{
  return (MR_String) "mercury_data_";
}

MR_String MR_CALL 
backend_libs__name_mangle__mercury_var_prefix_0_f_0(void)
{
  return (MR_String) "mercury_var_";
}

MR_String MR_CALL 
backend_libs__name_mangle__mercury_label_prefix_0_f_0(void)
{
  return (MR_String) "mercury__";
}

MR_String MR_CALL 
backend_libs__name_mangle__make_base_typeclass_info_name_with_data_prefix_2_f_0(
  MR_Word TCName_4,
  MR_String TypeNames_5)
{
  MR_String Str_6;
  MR_String Var_8;

  Var_8 = backend_libs__name_mangle__make_base_typeclass_info_name_2_f_0(TCName_4, TypeNames_5);
  Str_6 = mercury__string__f_43_43_2_f_0((MR_String) "mercury_data_", Var_8);
  return Str_6;
}

MR_String MR_CALL 
backend_libs__name_mangle__make_base_typeclass_info_name_2_f_0(
  MR_Word TCName_4,
  MR_String TypeNames_5)
{
  MR_String Str_6;
  MR_Word ModuleName_7 = ((MR_Word) ((MR_hl_field(0, TCName_4, 0))));
  MR_String ClassName_8 = ((MR_String) ((MR_hl_field(0, TCName_4, 1))));
  MR_Integer ClassArity_9 = ((MR_Integer) ((MR_hl_field(0, TCName_4, 2))));
  MR_Word ClassSym_10;
  MR_String MangledClassString_11;
  MR_String MangledTypeNames_12;
  MR_String Var_22;
  MR_String Var_23;
  MR_String Var_30;
  MR_String Var_32;
  MR_String Var_33;

  {
    ClassSym_10 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, ClassSym_10, 0) = ((MR_Box) (ModuleName_7));
    MR_hl_field(1, ClassSym_10, 1) = ((MR_Box) (ClassName_8));
  }
  MangledClassString_11 = parse_tree__prog_foreign__sym_name_mangle_1_f_0(ClassSym_10);
  MangledTypeNames_12 = parse_tree__prog_foreign__name_mangle_1_f_0(TypeNames_5);
  Var_22 = mercury__string__f_43_43_2_f_0((MR_String) "__", MangledTypeNames_12);
  mercury__string__format__format_signed_int_component_nowidth_noprec_3_p_0((MR_Word) (&backend_libs__name_mangle_scalar_common_1[0]), ClassArity_9, &Var_23);
  Var_30 = mercury__string__f_43_43_2_f_0(Var_23, Var_22);
  Var_32 = mercury__string__f_43_43_2_f_0((MR_String) "__arity", Var_30);
  Var_33 = mercury__string__f_43_43_2_f_0(MangledClassString_11, Var_32);
  Str_6 = mercury__string__f_43_43_2_f_0((MR_String) "base_typeclass_info_", Var_33);
  return Str_6;
}

MR_bool MR_CALL 
backend_libs__name_mangle__sym_name_doesnt_need_mangling_1_p_0(
  MR_Word HeadVar__1_1)
{
  MR_bool succeeded;

  if (((MR_tag((MR_Word) HeadVar__1_1)) == (MR_Integer) 1))
  {
    MR_Word ModuleName_3 = ((MR_Word) ((MR_hl_field(1, HeadVar__1_1, 0))));
    MR_String PlainName_4 = ((MR_String) ((MR_hl_field(1, HeadVar__1_1, 1))));
    MR_String Var_6;
    MR_String _Suffix_5;

    succeeded = backend_libs__name_mangle__sym_name_doesnt_need_mangling_1_p_0(ModuleName_3);
    if (succeeded)
    {
      succeeded = mercury__string__is_all_alnum_or_underscore_1_p_0(PlainName_4);
      if (succeeded)
      {
        Var_6 = (MR_String) "f_";
        succeeded = mercury__string__append_3_p_1(Var_6, &_Suffix_5, PlainName_4);
        succeeded = !(succeeded);
      }
    }
  }
  else
  {
    MR_String Name_2 = ((MR_String) ((MR_hl_field(0, HeadVar__1_1, 0))));
    MR_String Var_8;
    MR_String _Suffix_7;

    succeeded = mercury__string__is_all_alnum_or_underscore_1_p_0(Name_2);
    if (succeeded)
    {
      Var_8 = (MR_String) "f_";
      succeeded = mercury__string__append_3_p_1(Var_8, &_Suffix_7, Name_2);
      succeeded = !(succeeded);
    }
  }
  return succeeded;
}

MR_bool MR_CALL 
backend_libs__name_mangle__name_doesnt_need_mangling_1_p_0(
  MR_String Name_2)
{
  MR_bool succeeded;
  MR_String Var_4;
  MR_String _Suffix_3;

  succeeded = mercury__string__is_all_alnum_or_underscore_1_p_0(Name_2);
  if (succeeded)
  {
    Var_4 = (MR_String) "f_";
    succeeded = mercury__string__append_3_p_1(Var_4, &_Suffix_3, Name_2);
    succeeded = !(succeeded);
  }
  return succeeded;
}

MR_String MR_CALL 
backend_libs__name_mangle__proc_label_to_c_string_2_f_0(
  MR_Word AddPrefix_4,
  MR_Word ProcLabel_5)
{
  MR_bool succeeded;
  MR_String ProcLabelString_6;

  if (((MR_tag((MR_Word) ProcLabel_5)) == (MR_Integer) 0))
  {
    MR_Word DefiningModule_7 = ((MR_Word) ((MR_hl_field(0, ProcLabel_5, 0))));
    MR_Word PredOrFunc_8 = ((MR_Unsigned) ((MR_hl_field(0, ProcLabel_5, 1))) & (MR_Integer) 1);
    MR_Word PredModule_9 = ((MR_Word) ((MR_hl_field(0, ProcLabel_5, 2))));
    MR_String PredName_10 = ((MR_String) ((MR_hl_field(0, ProcLabel_5, 3))));
    MR_Integer Arity_11 = ((MR_Integer) ((MR_hl_field(0, ProcLabel_5, 4))));
    MR_Integer ModeNum_12 = ((MR_Integer) ((MR_hl_field(0, ProcLabel_5, 5))));
    MR_String LabelName_13;
    MR_Integer OrigArity_14;
    MR_String Var_77;
    MR_String Var_85;
    MR_String Var_86;
    MR_String Var_93;
    MR_String Var_95;

    LabelName_13 = backend_libs__name_mangle__make_pred_or_func_name_6_f_0(DefiningModule_7, PredOrFunc_8, PredModule_9, PredName_10, Arity_11, AddPrefix_4);
    switch (PredOrFunc_8) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 1:
        OrigArity_14 = (MR_Integer) ((MR_Unsigned) Arity_11 - (MR_Unsigned) 1);
        break;
      case (MR_Integer) 0:
        OrigArity_14 = Arity_11;
        break;
    }
    mercury__string__format__format_signed_int_component_nowidth_noprec_3_p_0((MR_Word) (&backend_libs__name_mangle_scalar_common_1[0]), ModeNum_12, &Var_77);
    Var_85 = mercury__string__f_43_43_2_f_0((MR_String) "_", Var_77);
    mercury__string__format__format_signed_int_component_nowidth_noprec_3_p_0((MR_Word) (&backend_libs__name_mangle_scalar_common_1[0]), OrigArity_14, &Var_86);
    Var_93 = mercury__string__f_43_43_2_f_0(Var_86, Var_85);
    Var_95 = mercury__string__f_43_43_2_f_0((MR_String) "_", Var_93);
    ProcLabelString_6 = mercury__string__f_43_43_2_f_0(LabelName_13, Var_95);
  }
  else
  {
    MR_Word Module_15 = ((MR_Word) ((MR_hl_field(1, ProcLabel_5, 0))));
    MR_Word SpecialPredId_16 = ((MR_Unsigned) ((MR_hl_field(1, ProcLabel_5, 1))) & (MR_Integer) 3);
    MR_Word TypeModule_17 = ((MR_Word) ((MR_hl_field(1, ProcLabel_5, 2))));
    MR_String TypeName_18 = ((MR_String) ((MR_hl_field(1, ProcLabel_5, 3))));
    MR_Integer TypeArity_19 = ((MR_Integer) ((MR_hl_field(1, ProcLabel_5, 4))));
    MR_Word TypeCtor_21;
    MR_String MangledModule_22;
    MR_String MangledTypeModule_23;
    MR_String MangledTypeName_24;
    MR_String QualifiedMangledTypeName_25;
    MR_String FullyQualifiedMangledTypeName_26;
    MR_Word Var_36;
    MR_String PredName_52;
    MR_Integer ModeNum_53 = ((MR_Integer) ((MR_hl_field(1, ProcLabel_5, 5))));
    MR_String LabelName_54;
    MR_String Var_55;
    MR_String Var_63;
    MR_String Var_64;
    MR_String Var_71;
    MR_String Var_73;
    MR_String Var_74;
    MR_String Var_76;
    MR_String UnderscoresModule_96;
    MR_String Var_97;

    {
      Var_36 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(1, Var_36, 0) = ((MR_Box) (TypeModule_17));
      MR_hl_field(1, Var_36, 1) = ((MR_Box) (TypeName_18));
    }
    {
      TypeCtor_21 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(0, TypeCtor_21, 0) = ((MR_Box) (Var_36));
      MR_hl_field(0, TypeCtor_21, 1) = ((MR_Box) (TypeArity_19));
    }
    PredName_52 = hlds__pred_name__uci_pred_name_2_f_0(SpecialPredId_16, TypeCtor_21);
    LabelName_54 = backend_libs__name_mangle__make_pred_or_func_name_6_f_0((MR_Word) (&backend_libs__name_mangle_scalar_common_1[1]), (MR_Integer) 0, (MR_Word) (&backend_libs__name_mangle_scalar_common_1[1]), PredName_52, (MR_Integer) -1, AddPrefix_4);
    MangledModule_22 = parse_tree__prog_foreign__sym_name_mangle_1_f_0(Module_15);
    MangledTypeModule_23 = parse_tree__prog_foreign__sym_name_mangle_1_f_0(TypeModule_17);
    MangledTypeName_24 = parse_tree__prog_foreign__name_mangle_1_f_0(TypeName_18);
    QualifiedMangledTypeName_25 = parse_tree__prog_foreign__qualify_name_2_f_0(MangledTypeModule_23, MangledTypeName_24);
    mercury__string__append_3_p_2(MangledModule_22, (MR_String) "__", &UnderscoresModule_96);
    succeeded = mercury__string__append_3_p_1(UnderscoresModule_96, &Var_97, QualifiedMangledTypeName_25);
    if (succeeded)
      FullyQualifiedMangledTypeName_26 = QualifiedMangledTypeName_25;
    else
      mercury__string__append_3_p_2(UnderscoresModule_96, QualifiedMangledTypeName_25, &FullyQualifiedMangledTypeName_26);
    mercury__string__format__format_signed_int_component_nowidth_noprec_3_p_0((MR_Word) (&backend_libs__name_mangle_scalar_common_1[0]), ModeNum_53, &Var_55);
    Var_63 = mercury__string__f_43_43_2_f_0((MR_String) "_", Var_55);
    mercury__string__format__format_signed_int_component_nowidth_noprec_3_p_0((MR_Word) (&backend_libs__name_mangle_scalar_common_1[0]), TypeArity_19, &Var_64);
    Var_71 = mercury__string__f_43_43_2_f_0(Var_64, Var_63);
    Var_73 = mercury__string__f_43_43_2_f_0((MR_String) "_", Var_71);
    Var_74 = mercury__string__f_43_43_2_f_0(FullyQualifiedMangledTypeName_26, Var_73);
    Var_76 = mercury__string__f_43_43_2_f_0((MR_String) "_", Var_74);
    ProcLabelString_6 = mercury__string__f_43_43_2_f_0(LabelName_54, Var_76);
  }
  return ProcLabelString_6;
}

static MR_String MR_CALL 
backend_libs__name_mangle__make_pred_or_func_name_6_f_0(
  MR_Word DefiningModule_8,
  MR_Word PredOrFunc_9,
  MR_Word DeclaringModule_10,
  MR_String Name0_11,
  MR_Integer Arity_12,
  MR_Word AddPrefix_13)
{
  MR_bool succeeded;
  MR_String LabelName_14;
  MR_String DeclaringModuleName_15;
  MR_String DefiningModuleName_16;
  MR_String LabelName0_17;
  MR_String LabelName1_18;
  MR_String LabelName2_19;
  MR_String LabelName3_20;

  DeclaringModuleName_15 = parse_tree__prog_foreign__sym_name_mangle_1_f_0(DeclaringModule_10);
  DefiningModuleName_16 = parse_tree__prog_foreign__sym_name_mangle_1_f_0(DefiningModule_8);
  succeeded = (strcmp(Name0_11, (MR_String) "main") == 0);
  if (succeeded)
    succeeded = (Arity_12 == (MR_Integer) 2);
  if (!(succeeded))
    succeeded = mercury__string__prefix_2_p_0(Name0_11, (MR_String) "__");
  if (succeeded)
    LabelName0_17 = Name0_11;
  else
    LabelName0_17 = parse_tree__prog_foreign__qualify_name_2_f_0(DeclaringModuleName_15, Name0_11);
  succeeded = mdbcomp__sym_name____Unify____sym_name_0_0(DefiningModule_8, DeclaringModule_10);
  succeeded = !(succeeded);
  if (succeeded)
  {
    MR_String Var_21;

    Var_21 = mercury__string__f_43_43_2_f_0((MR_String) "__", LabelName0_17);
    LabelName1_18 = mercury__string__f_43_43_2_f_0(DefiningModuleName_16, Var_21);
  }
  else
    LabelName1_18 = LabelName0_17;
  LabelName2_19 = parse_tree__prog_foreign__name_mangle_1_f_0(LabelName1_18);
  switch (PredOrFunc_9) {
    default: /*NOTREACHED*/ MR_assert(0);
    case (MR_Integer) 1:
      LabelName3_20 = mercury__string__f_43_43_2_f_0((MR_String) "fn__", LabelName2_19);
      break;
    case (MR_Integer) 0:
      LabelName3_20 = LabelName2_19;
      break;
  }
  switch (AddPrefix_13) {
    default: /*NOTREACHED*/ MR_assert(0);
    case (MR_Integer) 1:
      LabelName_14 = mercury__string__f_43_43_2_f_0((MR_String) "mercury__", LabelName3_20);
      break;
    case (MR_Integer) 0:
      LabelName_14 = LabelName3_20;
      break;
  }
  return LabelName_14;
}

static MR_bool MR_CALL 
backend_libs__name_mangle____Unify____maybe_add_label_prefix_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  MR_bool succeeded;

  succeeded = backend_libs__name_mangle____Unify____maybe_add_label_prefix_0_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
  return succeeded;
}

static void MR_CALL 
backend_libs__name_mangle____Compare____maybe_add_label_prefix_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  MR_Word conv0_HeadVar__1_1;

  backend_libs__name_mangle____Compare____maybe_add_label_prefix_0_0(&conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
  *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
}

void mercury__backend_libs__name_mangle__init(void)
{
}

void mercury__backend_libs__name_mangle__init_type_tables(void)
{
  static MR_bool initialised = MR_FALSE;
  if (initialised) return;
  initialised = MR_TRUE;

  MR_register_type_ctor_info(&backend_libs__name_mangle__backend_libs__name_mangle__type_ctor_info_maybe_add_label_prefix_0);
}

void mercury__backend_libs__name_mangle__init_debugger(void)
{
  MR_fatal_error("debugger initialization in MLDS grade");
}

// Ensure everything is compiled with the same grade.
const char *mercury__backend_libs__name_mangle__grade_check(void)
{
  return &MR_GRADE_VAR;
}

// :- end_module backend_libs.name_mangle.
