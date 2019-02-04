/*
** Automatically generated from `llds_out_code_addr.m'
** by the Mercury compiler,
** version rotd-2017-04-20
** configured for x86_64-apple-darwin13.4.0.
** Do not edit.
**
** The autoconfigured grade settings governing
** the generation of this C file were
**
** TAG_BITS=2
** UNBOXED_FLOAT=no
** PREGENERATED_DIST=yes
** HIGHLEVEL_CODE=yes
**
** END_OF_C_GRADE_INFO
*/


/* :- module ll_backend.llds_out.llds_out_code_addr. */
/* :- implementation. */

/*
INIT mercury__ll_backend__llds_out__llds_out_code_addr__init
ENDINIT
*/

#include "ll_backend.llds_out.llds_out_code_addr.mih"


#include "analysis.mih"
#include "backend_libs.mih"
#include "check_hlds.mih"
#include "hlds.mih"
#include "libs.mih"
#include "ll_backend.mih"
#include "mdbcomp.mih"
#include "mode_robdd.mih"
#include "parse_tree.mih"
#include "recompilation.mih"
#include "transform_hlds.mih"
#include "backend_libs.builtin_ops.mih"
#include "backend_libs.name_mangle.mih"
#include "backend_libs.rtti.mih"
#include "check_hlds.delay_info.mih"
#include "check_hlds.mode_constraint_robdd.mih"
#include "check_hlds.mode_errors.mih"
#include "check_hlds.mode_info.mih"
#include "check_hlds.type_util.mih"
#include "check_hlds.unify_proc.mih"
#include "hlds.code_model.mih"
#include "hlds.const_struct.mih"
#include "hlds.hlds_args.mih"
#include "hlds.hlds_clauses.mih"
#include "hlds.hlds_data.mih"
#include "hlds.hlds_dependency_graph.mih"
#include "hlds.hlds_goal.mih"
#include "hlds.hlds_llds.mih"
#include "hlds.hlds_module.mih"
#include "hlds.hlds_pred.mih"
#include "hlds.hlds_rtti.mih"
#include "hlds.inst_graph.mih"
#include "hlds.instmap.mih"
#include "hlds.pred_table.mih"
#include "hlds.special_pred.mih"
#include "hlds.status.mih"
#include "hlds.vartypes.mih"
#include "libs.compiler_util.mih"
#include "libs.dependency_graph.mih"
#include "libs.globals.mih"
#include "libs.lp_rational.mih"
#include "libs.op_mode.mih"
#include "libs.options.mih"
#include "libs.polyhedron.mih"
#include "libs.rat.mih"
#include "libs.timestamp.mih"
#include "libs.trace_params.mih"
#include "ll_backend.layout.mih"
#include "ll_backend.llds.mih"
#include "ll_backend.llds_out.mih"
#include "mdbcomp.feedback.mih"
#include "mdbcomp.goal_path.mih"
#include "mdbcomp.prim_data.mih"
#include "mdbcomp.program_representation.mih"
#include "mdbcomp.rtti_access.mih"
#include "mdbcomp.sym_name.mih"
#include "mdbcomp.trace_counts.mih"
#include "array.mih"
#include "assoc_list.mih"
#include "bag.mih"
#include "bimap.mih"
#include "bitmap.mih"
#include "bool.mih"
#include "builtin.mih"
#include "char.mih"
#include "construct.mih"
#include "cord.mih"
#include "counter.mih"
#include "deconstruct.mih"
#include "digraph.mih"
#include "enum.mih"
#include "getopt_io.mih"
#include "int.mih"
#include "integer.mih"
#include "io.mih"
#include "list.mih"
#include "map.mih"
#include "maybe.mih"
#include "multi_map.mih"
#include "ops.mih"
#include "pair.mih"
#include "pretty_printer.mih"
#include "private_builtin.mih"
#include "queue.mih"
#include "random.mih"
#include "robdd.mih"
#include "rtti_implementation.mih"
#include "set.mih"
#include "set_ordlist.mih"
#include "set_tree234.mih"
#include "sparse_bitset.mih"
#include "stack.mih"
#include "stream.mih"
#include "string.mih"
#include "term.mih"
#include "time.mih"
#include "tree234.mih"
#include "type_desc.mih"
#include "unit.mih"
#include "univ.mih"
#include "varset.mih"
#include "mode_robdd.tfeirn.mih"
#include "parse_tree.error_util.mih"
#include "parse_tree.file_kind.mih"
#include "parse_tree.maybe_error.mih"
#include "parse_tree.module_qual.mih"
#include "parse_tree.prog_data.mih"
#include "parse_tree.prog_data_event.mih"
#include "parse_tree.prog_data_foreign.mih"
#include "parse_tree.prog_data_pragma.mih"
#include "parse_tree.prog_data_used_modules.mih"
#include "parse_tree.prog_foreign.mih"
#include "parse_tree.prog_item.mih"
#include "parse_tree.prog_rename.mih"
#include "parse_tree.prog_type.mih"
#include "parse_tree.set_of_var.mih"
#include "transform_hlds.term_constr_data.mih"
#include "transform_hlds.term_constr_errors.mih"
#include "transform_hlds.term_constr_main_types.mih"
#include "transform_hlds.term_errors.mih"
#include "transform_hlds.term_norm.mih"
#include "transform_hlds.term_util.mih"
#include "ll_backend.llds_out.llds_out_util.mih"
#include "mdbcomp.feedback.automatic_parallelism.mih"




static const MR_EnumFunctorDesc ll_backend__llds_out__llds_out_code_addr__ll_backend__llds_out__llds_out_code_addr__enum_functor_desc_wrapper_0_0;

static const MR_EnumFunctorDesc ll_backend__llds_out__llds_out_code_addr__ll_backend__llds_out__llds_out_code_addr__enum_functor_desc_wrapper_0_1;

static const MR_EnumFunctorDesc ll_backend__llds_out__llds_out_code_addr__ll_backend__llds_out__llds_out_code_addr__enum_functor_desc_wrapper_0_2;

static const MR_EnumFunctorDescPtr ll_backend__llds_out__llds_out_code_addr__ll_backend__llds_out__llds_out_code_addr__enum_value_ordered_wrapper_0[3];

static const MR_EnumFunctorDescPtr ll_backend__llds_out__llds_out_code_addr__ll_backend__llds_out__llds_out_code_addr__enum_name_ordered_wrapper_0[3];

static const MR_Integer ll_backend__llds_out__llds_out_code_addr__ll_backend__llds_out__llds_out_code_addr__functor_number_map_wrapper_0[3];

static MR_bool MR_CALL 
ll_backend__llds_out__llds_out_code_addr____Unify____wrapper_0_0_10001(
  MR_Box ll_backend__llds_out__llds_out_code_addr__wrapper_arg_1,
  MR_Box ll_backend__llds_out__llds_out_code_addr__wrapper_arg_2);

static void MR_CALL 
ll_backend__llds_out__llds_out_code_addr____Compare____wrapper_0_0_10001(
  MR_Box * ll_backend__llds_out__llds_out_code_addr__wrapper_arg_1,
  MR_Box ll_backend__llds_out__llds_out_code_addr__wrapper_arg_2,
  MR_Box ll_backend__llds_out__llds_out_code_addr__wrapper_arg_3);

static void MR_CALL 
ll_backend__llds_out__llds_out_code_addr__output_label_as_code_addr_decls_3_p_0(
  MR_Word ll_backend__llds_out__llds_out_code_addr__Label_4);

static void MR_CALL 
ll_backend__llds_out__llds_out_code_addr__output_code_addr_decls_4_p_0(
  MR_Word ll_backend__llds_out__llds_out_code_addr__Info_5,
  MR_Word ll_backend__llds_out__llds_out_code_addr__CodeAddr_6);







#include "io.mh"
#include "string.mh"
#include "time.mh"
#include "mdbcomp.rtti_access.mh"



static const MR_EnumFunctorDesc ll_backend__llds_out__llds_out_code_addr__ll_backend__llds_out__llds_out_code_addr__enum_functor_desc_wrapper_0_0 = {
  (MR_String) "wrapper_entry",
  (MR_Integer) 0
};

static const MR_EnumFunctorDesc ll_backend__llds_out__llds_out_code_addr__ll_backend__llds_out__llds_out_code_addr__enum_functor_desc_wrapper_0_1 = {
  (MR_String) "wrapper_label",
  (MR_Integer) 1
};

static const MR_EnumFunctorDesc ll_backend__llds_out__llds_out_code_addr__ll_backend__llds_out__llds_out_code_addr__enum_functor_desc_wrapper_0_2 = {
  (MR_String) "wrapper_none",
  (MR_Integer) 2
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
  (MR_Integer) 17,
  (MR_Integer) -1,
  mercury__private_builtin__MR_TYPECTOR_REP_ENUM,
  ((MR_Box) (ll_backend__llds_out__llds_out_code_addr____Unify____wrapper_0_0_10001)),
  ((MR_Box) (ll_backend__llds_out__llds_out_code_addr____Compare____wrapper_0_0_10001)),
  (MR_String) "ll_backend.llds_out.llds_out_code_addr",
  (MR_String) "wrapper",
  {     ll_backend__llds_out__llds_out_code_addr__ll_backend__llds_out__llds_out_code_addr__enum_name_ordered_wrapper_0 },
  {     ll_backend__llds_out__llds_out_code_addr__ll_backend__llds_out__llds_out_code_addr__enum_value_ordered_wrapper_0 },
  (MR_Integer) 3,
  (MR_Integer) 4,
  ll_backend__llds_out__llds_out_code_addr__ll_backend__llds_out__llds_out_code_addr__functor_number_map_wrapper_0
};

static MR_bool MR_CALL 
ll_backend__llds_out__llds_out_code_addr____Unify____wrapper_0_0_10001(
  MR_Box ll_backend__llds_out__llds_out_code_addr__wrapper_arg_1,
  MR_Box ll_backend__llds_out__llds_out_code_addr__wrapper_arg_2)
{
  {
    MR_bool ll_backend__llds_out__llds_out_code_addr__succeeded;

    {
      ll_backend__llds_out__llds_out_code_addr__succeeded = ll_backend__llds_out__llds_out_code_addr____Unify____wrapper_0_0(((MR_Word) ll_backend__llds_out__llds_out_code_addr__wrapper_arg_1), ((MR_Word) ll_backend__llds_out__llds_out_code_addr__wrapper_arg_2));
    }
    return ll_backend__llds_out__llds_out_code_addr__succeeded;
  }
}

static void MR_CALL 
ll_backend__llds_out__llds_out_code_addr____Compare____wrapper_0_0_10001(
  MR_Box * ll_backend__llds_out__llds_out_code_addr__wrapper_arg_1,
  MR_Box ll_backend__llds_out__llds_out_code_addr__wrapper_arg_2,
  MR_Box ll_backend__llds_out__llds_out_code_addr__wrapper_arg_3)
{
  {
    MR_Word ll_backend__llds_out__llds_out_code_addr__conv0_HeadVar__1_1;

    {
      ll_backend__llds_out__llds_out_code_addr____Compare____wrapper_0_0(&ll_backend__llds_out__llds_out_code_addr__conv0_HeadVar__1_1, ((MR_Word) ll_backend__llds_out__llds_out_code_addr__wrapper_arg_2), ((MR_Word) ll_backend__llds_out__llds_out_code_addr__wrapper_arg_3));
    }
    *ll_backend__llds_out__llds_out_code_addr__wrapper_arg_1 = ((MR_Box) (ll_backend__llds_out__llds_out_code_addr__conv0_HeadVar__1_1));
  }
}

void MR_CALL 
ll_backend__llds_out__llds_out_code_addr____Compare____wrapper_0_0(
  MR_Word * ll_backend__llds_out__llds_out_code_addr__HeadVar__1_1,
  MR_Word ll_backend__llds_out__llds_out_code_addr__HeadVar__2_2,
  MR_Word ll_backend__llds_out__llds_out_code_addr__HeadVar__3_3)
{
  {
    MR_bool ll_backend__llds_out__llds_out_code_addr__succeeded;
    MR_Integer ll_backend__llds_out__llds_out_code_addr__Cast_HeadVar1_4 = (MR_Integer) ll_backend__llds_out__llds_out_code_addr__HeadVar__2_2;
    MR_Integer ll_backend__llds_out__llds_out_code_addr__Cast_HeadVar2_5 = (MR_Integer) ll_backend__llds_out__llds_out_code_addr__HeadVar__3_3;

    {
      mercury__private_builtin__builtin_compare_int_3_p_0(ll_backend__llds_out__llds_out_code_addr__HeadVar__1_1, ll_backend__llds_out__llds_out_code_addr__Cast_HeadVar1_4, ll_backend__llds_out__llds_out_code_addr__Cast_HeadVar2_5);
    }
  }
}

MR_bool MR_CALL 
ll_backend__llds_out__llds_out_code_addr____Unify____wrapper_0_0(
  MR_Word ll_backend__llds_out__llds_out_code_addr__HeadVar__2_1,
  MR_Word ll_backend__llds_out__llds_out_code_addr__HeadVar__2_2)
{
  {
    MR_bool ll_backend__llds_out__llds_out_code_addr__succeeded = (ll_backend__llds_out__llds_out_code_addr__HeadVar__2_1 == ll_backend__llds_out__llds_out_code_addr__HeadVar__2_2);

    return ll_backend__llds_out__llds_out_code_addr__succeeded;
  }
}

static void MR_CALL 
ll_backend__llds_out__llds_out_code_addr__output_label_as_code_addr_decls_3_p_0(
  MR_Word ll_backend__llds_out__llds_out_code_addr__Label_4)
{
  {
    MR_bool ll_backend__llds_out__llds_out_code_addr__succeeded;

    if (((MR_tag((MR_Word) ll_backend__llds_out__llds_out_code_addr__Label_4)) == (MR_mktag((MR_Integer) 1))))
      {
        MR_Word ll_backend__llds_out__llds_out_code_addr__V_24_24 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__llds_out__llds_out_code_addr__Label_4, (MR_Integer) 1)));
        MR_Word ll_backend__llds_out__llds_out_code_addr__V_25_25 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__llds_out__llds_out_code_addr__Label_4, (MR_Integer) 0)));

        switch (ll_backend__llds_out__llds_out_code_addr__V_25_25) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
            {
            }
            break;
          case (MR_Integer) 2:
            {
              MR_String ll_backend__llds_out__llds_out_code_addr__LabelStr_30;

              {
                mercury__io__write_string_3_p_0((MR_String) "MR_decl_entry(");
              }
              {
                ll_backend__llds_out__llds_out_code_addr__LabelStr_30 = backend_libs__name_mangle__proc_label_to_c_string_2_f_0(ll_backend__llds_out__llds_out_code_addr__V_24_24, (MR_Integer) 0);
              }
              {
                mercury__io__write_string_3_p_0(ll_backend__llds_out__llds_out_code_addr__LabelStr_30);
              }
              {
                mercury__io__write_string_3_p_0((MR_String) ");\n");
              }
            }
            break;
          case (MR_Integer) 1:
            {
            }
            break;
        }
      }
    else
      {
      }
  }
}

static void MR_CALL 
ll_backend__llds_out__llds_out_code_addr__output_code_addr_decls_4_p_0(
  MR_Word ll_backend__llds_out__llds_out_code_addr__Info_5,
  MR_Word ll_backend__llds_out__llds_out_code_addr__CodeAddr_6)
{
  {
    MR_bool ll_backend__llds_out__llds_out_code_addr__succeeded;

    switch (MR_tag((MR_Word) ll_backend__llds_out__llds_out_code_addr__CodeAddr_6)) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        switch (MR_unmkbody(ll_backend__llds_out__llds_out_code_addr__CodeAddr_6)) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
            {
            }
            break;
          case (MR_Integer) 1:
            {
              MR_Word ll_backend__llds_out__llds_out_code_addr__UseMacro_11 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_code_addr__Info_5, (MR_Integer) 7)))) >> (MR_Integer) 12)) & (MR_Integer) 1);
              MR_Word ll_backend__llds_out__llds_out_code_addr__V_45_45 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_code_addr__Info_5, (MR_Integer) 0)));
              MR_String ll_backend__llds_out__llds_out_code_addr__V_46_46 = ((MR_String) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_code_addr__Info_5, (MR_Integer) 1)));
              MR_String ll_backend__llds_out__llds_out_code_addr__V_47_47 = ((MR_String) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_code_addr__Info_5, (MR_Integer) 2)));
              MR_Word ll_backend__llds_out__llds_out_code_addr__V_48_48 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_code_addr__Info_5, (MR_Integer) 3)));
              MR_Word ll_backend__llds_out__llds_out_code_addr__V_49_49 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_code_addr__Info_5, (MR_Integer) 4)));
              MR_Word ll_backend__llds_out__llds_out_code_addr__V_50_50 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_code_addr__Info_5, (MR_Integer) 5)));
              MR_Word ll_backend__llds_out__llds_out_code_addr__V_51_51 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_code_addr__Info_5, (MR_Integer) 6)));
              MR_Word ll_backend__llds_out__llds_out_code_addr__V_52_52 = ((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_code_addr__Info_5, (MR_Integer) 7)))) & (MR_Integer) 1);
              MR_Word ll_backend__llds_out__llds_out_code_addr__V_53_53 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_code_addr__Info_5, (MR_Integer) 7)))) >> (MR_Integer) 1)) & (MR_Integer) 1);
              MR_Word ll_backend__llds_out__llds_out_code_addr__V_54_54 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_code_addr__Info_5, (MR_Integer) 7)))) >> (MR_Integer) 2)) & (MR_Integer) 1);
              MR_Word ll_backend__llds_out__llds_out_code_addr__V_55_55 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_code_addr__Info_5, (MR_Integer) 7)))) >> (MR_Integer) 3)) & (MR_Integer) 1);
              MR_Word ll_backend__llds_out__llds_out_code_addr__V_56_56 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_code_addr__Info_5, (MR_Integer) 7)))) >> (MR_Integer) 4)) & (MR_Integer) 1);
              MR_Word ll_backend__llds_out__llds_out_code_addr__V_57_57 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_code_addr__Info_5, (MR_Integer) 7)))) >> (MR_Integer) 5)) & (MR_Integer) 1);
              MR_Word ll_backend__llds_out__llds_out_code_addr__V_58_58 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_code_addr__Info_5, (MR_Integer) 7)))) >> (MR_Integer) 6)) & (MR_Integer) 1);
              MR_Word ll_backend__llds_out__llds_out_code_addr__V_59_59 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_code_addr__Info_5, (MR_Integer) 7)))) >> (MR_Integer) 7)) & (MR_Integer) 1);
              MR_Word ll_backend__llds_out__llds_out_code_addr__V_60_60 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_code_addr__Info_5, (MR_Integer) 7)))) >> (MR_Integer) 8)) & (MR_Integer) 1);
              MR_Word ll_backend__llds_out__llds_out_code_addr__V_61_61 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_code_addr__Info_5, (MR_Integer) 7)))) >> (MR_Integer) 9)) & (MR_Integer) 1);
              MR_Word ll_backend__llds_out__llds_out_code_addr__V_62_62 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_code_addr__Info_5, (MR_Integer) 7)))) >> (MR_Integer) 10)) & (MR_Integer) 1);
              MR_Word ll_backend__llds_out__llds_out_code_addr__V_63_63 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_code_addr__Info_5, (MR_Integer) 7)))) >> (MR_Integer) 11)) & (MR_Integer) 1);
              MR_Word ll_backend__llds_out__llds_out_code_addr__V_64_64 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_code_addr__Info_5, (MR_Integer) 7)))) >> (MR_Integer) 13)) & (MR_Integer) 7);
              MR_Word ll_backend__llds_out__llds_out_code_addr__V_65_65 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_code_addr__Info_5, (MR_Integer) 8)));

              switch (ll_backend__llds_out__llds_out_code_addr__UseMacro_11) {
                default: /*NOTREACHED*/ MR_assert(0);
                case (MR_Integer) 0:
                  {
                    {
                      mercury__io__write_string_3_p_0((MR_String) "MR_declare_entry(MR_do_redo);\n");
                    }
                  }
                  break;
                case (MR_Integer) 1:
                  {
                  }
                  break;
              }
            }
            break;
          case (MR_Integer) 2:
            {
              MR_Word ll_backend__llds_out__llds_out_code_addr__UseMacro_43 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_code_addr__Info_5, (MR_Integer) 7)))) >> (MR_Integer) 12)) & (MR_Integer) 1);
              MR_Word ll_backend__llds_out__llds_out_code_addr__V_66_66 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_code_addr__Info_5, (MR_Integer) 0)));
              MR_String ll_backend__llds_out__llds_out_code_addr__V_67_67 = ((MR_String) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_code_addr__Info_5, (MR_Integer) 1)));
              MR_String ll_backend__llds_out__llds_out_code_addr__V_68_68 = ((MR_String) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_code_addr__Info_5, (MR_Integer) 2)));
              MR_Word ll_backend__llds_out__llds_out_code_addr__V_69_69 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_code_addr__Info_5, (MR_Integer) 3)));
              MR_Word ll_backend__llds_out__llds_out_code_addr__V_70_70 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_code_addr__Info_5, (MR_Integer) 4)));
              MR_Word ll_backend__llds_out__llds_out_code_addr__V_71_71 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_code_addr__Info_5, (MR_Integer) 5)));
              MR_Word ll_backend__llds_out__llds_out_code_addr__V_72_72 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_code_addr__Info_5, (MR_Integer) 6)));
              MR_Word ll_backend__llds_out__llds_out_code_addr__V_73_73 = ((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_code_addr__Info_5, (MR_Integer) 7)))) & (MR_Integer) 1);
              MR_Word ll_backend__llds_out__llds_out_code_addr__V_74_74 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_code_addr__Info_5, (MR_Integer) 7)))) >> (MR_Integer) 1)) & (MR_Integer) 1);
              MR_Word ll_backend__llds_out__llds_out_code_addr__V_75_75 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_code_addr__Info_5, (MR_Integer) 7)))) >> (MR_Integer) 2)) & (MR_Integer) 1);
              MR_Word ll_backend__llds_out__llds_out_code_addr__V_76_76 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_code_addr__Info_5, (MR_Integer) 7)))) >> (MR_Integer) 3)) & (MR_Integer) 1);
              MR_Word ll_backend__llds_out__llds_out_code_addr__V_77_77 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_code_addr__Info_5, (MR_Integer) 7)))) >> (MR_Integer) 4)) & (MR_Integer) 1);
              MR_Word ll_backend__llds_out__llds_out_code_addr__V_78_78 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_code_addr__Info_5, (MR_Integer) 7)))) >> (MR_Integer) 5)) & (MR_Integer) 1);
              MR_Word ll_backend__llds_out__llds_out_code_addr__V_79_79 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_code_addr__Info_5, (MR_Integer) 7)))) >> (MR_Integer) 6)) & (MR_Integer) 1);
              MR_Word ll_backend__llds_out__llds_out_code_addr__V_80_80 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_code_addr__Info_5, (MR_Integer) 7)))) >> (MR_Integer) 7)) & (MR_Integer) 1);
              MR_Word ll_backend__llds_out__llds_out_code_addr__V_81_81 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_code_addr__Info_5, (MR_Integer) 7)))) >> (MR_Integer) 8)) & (MR_Integer) 1);
              MR_Word ll_backend__llds_out__llds_out_code_addr__V_82_82 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_code_addr__Info_5, (MR_Integer) 7)))) >> (MR_Integer) 9)) & (MR_Integer) 1);
              MR_Word ll_backend__llds_out__llds_out_code_addr__V_83_83 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_code_addr__Info_5, (MR_Integer) 7)))) >> (MR_Integer) 10)) & (MR_Integer) 1);
              MR_Word ll_backend__llds_out__llds_out_code_addr__V_84_84 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_code_addr__Info_5, (MR_Integer) 7)))) >> (MR_Integer) 11)) & (MR_Integer) 1);
              MR_Word ll_backend__llds_out__llds_out_code_addr__V_85_85 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_code_addr__Info_5, (MR_Integer) 7)))) >> (MR_Integer) 13)) & (MR_Integer) 7);
              MR_Word ll_backend__llds_out__llds_out_code_addr__V_86_86 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_code_addr__Info_5, (MR_Integer) 8)));

              switch (ll_backend__llds_out__llds_out_code_addr__UseMacro_43) {
                default: /*NOTREACHED*/ MR_assert(0);
                case (MR_Integer) 0:
                  {
                    {
                      mercury__io__write_string_3_p_0((MR_String) "MR_declare_entry(MR_do_fail);\n");
                    }
                  }
                  break;
                case (MR_Integer) 1:
                  {
                  }
                  break;
              }
            }
            break;
          case (MR_Integer) 3:
            {
              {
                mercury__io__write_string_3_p_0((MR_String) "MR_declare_entry(MR_do_trace_redo_fail_shallow);\n");
              }
            }
            break;
          case (MR_Integer) 4:
            {
              {
                mercury__io__write_string_3_p_0((MR_String) "MR_declare_entry(MR_do_trace_redo_fail_deep);\n");
              }
            }
            break;
          case (MR_Integer) 5:
            {
              {
                mercury__io__write_string_3_p_0((MR_String) "MR_declare_entry(MR_do_not_reached);\n");
              }
            }
            break;
        }
        break;
      case (MR_Integer) 1:
        {
          MR_Word ll_backend__llds_out__llds_out_code_addr__Label_8 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__llds_out__llds_out_code_addr__CodeAddr_6, (MR_Integer) 0)));

          {
            ll_backend__llds_out__llds_out_code_addr__output_label_as_code_addr_decls_3_p_0(ll_backend__llds_out__llds_out_code_addr__Label_8);
          }
        }
        break;
      case (MR_Integer) 2:
        {
          MR_Word ll_backend__llds_out__llds_out_code_addr__ProcLabel_9 = ((MR_Word) (MR_hl_field(MR_mktag(2), ll_backend__llds_out__llds_out_code_addr__CodeAddr_6, (MR_Integer) 0)));

          {
            mercury__io__write_string_3_p_0((MR_String) "MR_decl_entry(");
          }
          {
            backend_libs__name_mangle__output_proc_label_no_prefix_3_p_0(ll_backend__llds_out__llds_out_code_addr__ProcLabel_9);
          }
          {
            mercury__io__write_string_3_p_0((MR_String) ");\n");
          }
        }
        break;
      case (MR_Integer) 3:
        switch (((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__llds_out__llds_out_code_addr__CodeAddr_6, (MR_Integer) 0)))) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
            {
            }
            break;
          case (MR_Integer) 1:
            {
              MR_Word ll_backend__llds_out__llds_out_code_addr__Variant_12 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__llds_out__llds_out_code_addr__CodeAddr_6, (MR_Integer) 1)));
              MR_String ll_backend__llds_out__llds_out_code_addr__V_25_25;

              {
                mercury__io__write_string_3_p_0((MR_String) "MR_declare_entry(mercury__do_call_closure_");
              }
              if ((ll_backend__llds_out__llds_out_code_addr__Variant_12 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
                ll_backend__llds_out__llds_out_code_addr__V_25_25 = (MR_String) "compact";
              else
                {
                  MR_Integer ll_backend__llds_out__llds_out_code_addr__Num_92 = ((MR_Integer) (MR_hl_field(MR_mktag(1), ll_backend__llds_out__llds_out_code_addr__Variant_12, (MR_Integer) 0)));

                  {
                    ll_backend__llds_out__llds_out_code_addr__V_25_25 = mercury__string__int_to_string_1_f_0(ll_backend__llds_out__llds_out_code_addr__Num_92);
                  }
                }
              {
                mercury__io__write_string_3_p_0(ll_backend__llds_out__llds_out_code_addr__V_25_25);
              }
              {
                mercury__io__write_string_3_p_0((MR_String) ");\n");
              }
            }
            break;
          case (MR_Integer) 2:
            {
              MR_String ll_backend__llds_out__llds_out_code_addr__V_19_19;
              MR_Word ll_backend__llds_out__llds_out_code_addr__Variant_44 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__llds_out__llds_out_code_addr__CodeAddr_6, (MR_Integer) 1)));

              {
                mercury__io__write_string_3_p_0((MR_String) "MR_declare_entry(mercury__do_call_class_method_");
              }
              if ((ll_backend__llds_out__llds_out_code_addr__Variant_44 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
                ll_backend__llds_out__llds_out_code_addr__V_19_19 = (MR_String) "compact";
              else
                {
                  MR_Integer ll_backend__llds_out__llds_out_code_addr__Num_89 = ((MR_Integer) (MR_hl_field(MR_mktag(1), ll_backend__llds_out__llds_out_code_addr__Variant_44, (MR_Integer) 0)));

                  {
                    ll_backend__llds_out__llds_out_code_addr__V_19_19 = mercury__string__int_to_string_1_f_0(ll_backend__llds_out__llds_out_code_addr__Num_89);
                  }
                }
              {
                mercury__io__write_string_3_p_0(ll_backend__llds_out__llds_out_code_addr__V_19_19);
              }
              {
                mercury__io__write_string_3_p_0((MR_String) ");\n");
              }
            }
            break;
        }
        break;
    }
  }
}

MR_Word MR_CALL 
ll_backend__llds_out__llds_out_code_addr__label_is_external_to_c_module_1_f_0(
  MR_Word ll_backend__llds_out__llds_out_code_addr__HeadVar__1_1)
{
  {
    MR_bool ll_backend__llds_out__llds_out_code_addr__succeeded;
    MR_Word ll_backend__llds_out__llds_out_code_addr__HeadVar__2_2;

    if (((MR_tag((MR_Word) ll_backend__llds_out__llds_out_code_addr__HeadVar__1_1)) == (MR_mktag((MR_Integer) 1))))
      {
        MR_Word ll_backend__llds_out__llds_out_code_addr__V_12_12 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__llds_out__llds_out_code_addr__HeadVar__1_1, (MR_Integer) 0)));
        MR_Word ll_backend__llds_out__llds_out_code_addr__V_11_11 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__llds_out__llds_out_code_addr__HeadVar__1_1, (MR_Integer) 1)));

        switch (ll_backend__llds_out__llds_out_code_addr__V_12_12) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
            ll_backend__llds_out__llds_out_code_addr__HeadVar__2_2 = (MR_Integer) 0;
            break;
          case (MR_Integer) 2:
            ll_backend__llds_out__llds_out_code_addr__HeadVar__2_2 = (MR_Integer) 1;
            break;
          case (MR_Integer) 1:
            ll_backend__llds_out__llds_out_code_addr__HeadVar__2_2 = (MR_Integer) 1;
            break;
        }
      }
    else
      ll_backend__llds_out__llds_out_code_addr__HeadVar__2_2 = (MR_Integer) 0;
    return ll_backend__llds_out__llds_out_code_addr__HeadVar__2_2;
  }
}

void MR_CALL 
ll_backend__llds_out__llds_out_code_addr__code_addr_to_string_base_4_p_0(
  MR_Word ll_backend__llds_out__llds_out_code_addr__CodeAddr_5,
  MR_String * ll_backend__llds_out__llds_out_code_addr__BaseStr_6,
  MR_Word * ll_backend__llds_out__llds_out_code_addr__NeedsPrefix_7,
  MR_Word * ll_backend__llds_out__llds_out_code_addr__Wrapper_8)
{
  {
    MR_bool ll_backend__llds_out__llds_out_code_addr__succeeded;

    switch (MR_tag((MR_Word) ll_backend__llds_out__llds_out_code_addr__CodeAddr_5)) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        switch (MR_unmkbody(ll_backend__llds_out__llds_out_code_addr__CodeAddr_5)) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
            {
              *ll_backend__llds_out__llds_out_code_addr__BaseStr_6 = (MR_String) "MR_succip";
              *ll_backend__llds_out__llds_out_code_addr__NeedsPrefix_7 = (MR_Integer) 0;
              *ll_backend__llds_out__llds_out_code_addr__Wrapper_8 = (MR_Integer) 2;
            }
            break;
          case (MR_Integer) 1:
            {
              *ll_backend__llds_out__llds_out_code_addr__BaseStr_6 = (MR_String) "MR_do_redo";
              *ll_backend__llds_out__llds_out_code_addr__NeedsPrefix_7 = (MR_Integer) 0;
              *ll_backend__llds_out__llds_out_code_addr__Wrapper_8 = (MR_Integer) 0;
            }
            break;
          case (MR_Integer) 2:
            {
              *ll_backend__llds_out__llds_out_code_addr__BaseStr_6 = (MR_String) "MR_do_fail";
              *ll_backend__llds_out__llds_out_code_addr__NeedsPrefix_7 = (MR_Integer) 0;
              *ll_backend__llds_out__llds_out_code_addr__Wrapper_8 = (MR_Integer) 0;
            }
            break;
          case (MR_Integer) 3:
            {
              *ll_backend__llds_out__llds_out_code_addr__BaseStr_6 = (MR_String) "MR_do_trace_redo_fail_shallow";
              *ll_backend__llds_out__llds_out_code_addr__NeedsPrefix_7 = (MR_Integer) 0;
              *ll_backend__llds_out__llds_out_code_addr__Wrapper_8 = (MR_Integer) 0;
            }
            break;
          case (MR_Integer) 4:
            {
              *ll_backend__llds_out__llds_out_code_addr__BaseStr_6 = (MR_String) "MR_do_trace_redo_fail_deep";
              *ll_backend__llds_out__llds_out_code_addr__NeedsPrefix_7 = (MR_Integer) 0;
              *ll_backend__llds_out__llds_out_code_addr__Wrapper_8 = (MR_Integer) 0;
            }
            break;
          case (MR_Integer) 5:
            {
              *ll_backend__llds_out__llds_out_code_addr__BaseStr_6 = (MR_String) "MR_do_not_reached";
              *ll_backend__llds_out__llds_out_code_addr__NeedsPrefix_7 = (MR_Integer) 0;
              *ll_backend__llds_out__llds_out_code_addr__Wrapper_8 = (MR_Integer) 0;
            }
            break;
        }
        break;
      case (MR_Integer) 1:
        {
          MR_Word ll_backend__llds_out__llds_out_code_addr__Label_9 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__llds_out__llds_out_code_addr__CodeAddr_5, (MR_Integer) 0)));

          {
            *ll_backend__llds_out__llds_out_code_addr__BaseStr_6 = ll_backend__llds_out__llds_out_code_addr__label_to_c_string_2_f_0(ll_backend__llds_out__llds_out_code_addr__Label_9, (MR_Integer) 0);
          }
          *ll_backend__llds_out__llds_out_code_addr__NeedsPrefix_7 = (MR_Integer) 1;
          if (((MR_tag((MR_Word) ll_backend__llds_out__llds_out_code_addr__Label_9)) == (MR_mktag((MR_Integer) 1))))
            {
              MR_Word ll_backend__llds_out__llds_out_code_addr__V_30_30 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__llds_out__llds_out_code_addr__Label_9, (MR_Integer) 0)));
              MR_Word ll_backend__llds_out__llds_out_code_addr__V_29_29 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__llds_out__llds_out_code_addr__Label_9, (MR_Integer) 1)));

              switch (ll_backend__llds_out__llds_out_code_addr__V_30_30) {
                default: /*NOTREACHED*/ MR_assert(0);
                case (MR_Integer) 0:
                  *ll_backend__llds_out__llds_out_code_addr__Wrapper_8 = (MR_Integer) 1;
                  break;
                case (MR_Integer) 2:
                  *ll_backend__llds_out__llds_out_code_addr__Wrapper_8 = (MR_Integer) 0;
                  break;
                case (MR_Integer) 1:
                  *ll_backend__llds_out__llds_out_code_addr__Wrapper_8 = (MR_Integer) 0;
                  break;
              }
            }
          else
            *ll_backend__llds_out__llds_out_code_addr__Wrapper_8 = (MR_Integer) 1;
        }
        break;
      case (MR_Integer) 2:
        {
          MR_Word ll_backend__llds_out__llds_out_code_addr__ProcLabel_11 = ((MR_Word) (MR_hl_field(MR_mktag(2), ll_backend__llds_out__llds_out_code_addr__CodeAddr_5, (MR_Integer) 0)));

          {
            *ll_backend__llds_out__llds_out_code_addr__BaseStr_6 = backend_libs__name_mangle__proc_label_to_c_string_2_f_0(ll_backend__llds_out__llds_out_code_addr__ProcLabel_11, (MR_Integer) 0);
          }
          *ll_backend__llds_out__llds_out_code_addr__NeedsPrefix_7 = (MR_Integer) 1;
          *ll_backend__llds_out__llds_out_code_addr__Wrapper_8 = (MR_Integer) 0;
        }
        break;
      case (MR_Integer) 3:
        switch (((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__llds_out__llds_out_code_addr__CodeAddr_5, (MR_Integer) 0)))) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
            {
              MR_Word ll_backend__llds_out__llds_out_code_addr__Last_12 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__llds_out__llds_out_code_addr__CodeAddr_5, (MR_Integer) 1)));

              switch (ll_backend__llds_out__llds_out_code_addr__Last_12) {
                default: /*NOTREACHED*/ MR_assert(0);
                case (MR_Integer) 0:
                  *ll_backend__llds_out__llds_out_code_addr__BaseStr_6 = (MR_String) "MR_do_succeed";
                  break;
                case (MR_Integer) 1:
                  *ll_backend__llds_out__llds_out_code_addr__BaseStr_6 = (MR_String) "MR_do_last_succeed";
                  break;
              }
              *ll_backend__llds_out__llds_out_code_addr__NeedsPrefix_7 = (MR_Integer) 0;
              *ll_backend__llds_out__llds_out_code_addr__Wrapper_8 = (MR_Integer) 0;
            }
            break;
          case (MR_Integer) 1:
            {
              MR_Word ll_backend__llds_out__llds_out_code_addr__Variant_13 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__llds_out__llds_out_code_addr__CodeAddr_5, (MR_Integer) 1)));
              MR_String ll_backend__llds_out__llds_out_code_addr__V_17_17;

              if ((ll_backend__llds_out__llds_out_code_addr__Variant_13 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
                ll_backend__llds_out__llds_out_code_addr__V_17_17 = (MR_String) "compact";
              else
                {
                  MR_Integer ll_backend__llds_out__llds_out_code_addr__Num_36 = ((MR_Integer) (MR_hl_field(MR_mktag(1), ll_backend__llds_out__llds_out_code_addr__Variant_13, (MR_Integer) 0)));

                  {
                    ll_backend__llds_out__llds_out_code_addr__V_17_17 = mercury__string__int_to_string_1_f_0(ll_backend__llds_out__llds_out_code_addr__Num_36);
                  }
                }
              {
                *ll_backend__llds_out__llds_out_code_addr__BaseStr_6 = mercury__string__f_43_43_2_f_0((MR_String) "mercury__do_call_closure_", ll_backend__llds_out__llds_out_code_addr__V_17_17);
              }
              *ll_backend__llds_out__llds_out_code_addr__NeedsPrefix_7 = (MR_Integer) 0;
              *ll_backend__llds_out__llds_out_code_addr__Wrapper_8 = (MR_Integer) 0;
            }
            break;
          case (MR_Integer) 2:
            {
              MR_String ll_backend__llds_out__llds_out_code_addr__V_15_15;
              MR_Word ll_backend__llds_out__llds_out_code_addr__Variant_20 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__llds_out__llds_out_code_addr__CodeAddr_5, (MR_Integer) 1)));

              if ((ll_backend__llds_out__llds_out_code_addr__Variant_20 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
                ll_backend__llds_out__llds_out_code_addr__V_15_15 = (MR_String) "compact";
              else
                {
                  MR_Integer ll_backend__llds_out__llds_out_code_addr__Num_33 = ((MR_Integer) (MR_hl_field(MR_mktag(1), ll_backend__llds_out__llds_out_code_addr__Variant_20, (MR_Integer) 0)));

                  {
                    ll_backend__llds_out__llds_out_code_addr__V_15_15 = mercury__string__int_to_string_1_f_0(ll_backend__llds_out__llds_out_code_addr__Num_33);
                  }
                }
              {
                *ll_backend__llds_out__llds_out_code_addr__BaseStr_6 = mercury__string__f_43_43_2_f_0((MR_String) "mercury__do_call_class_method_", ll_backend__llds_out__llds_out_code_addr__V_15_15);
              }
              *ll_backend__llds_out__llds_out_code_addr__NeedsPrefix_7 = (MR_Integer) 0;
              *ll_backend__llds_out__llds_out_code_addr__Wrapper_8 = (MR_Integer) 0;
            }
            break;
        }
        break;
    }
  }
}

void MR_CALL 
ll_backend__llds_out__llds_out_code_addr__output_label_as_code_addr_3_p_0(
  MR_Word ll_backend__llds_out__llds_out_code_addr__Label_4)
{
  {
    MR_bool ll_backend__llds_out__llds_out_code_addr__succeeded;
    MR_String ll_backend__llds_out__llds_out_code_addr__Str_6;
    MR_String ll_backend__llds_out__llds_out_code_addr__LabelStr_12;

    {
      ll_backend__llds_out__llds_out_code_addr__LabelStr_12 = ll_backend__llds_out__llds_out_code_addr__label_to_c_string_2_f_0(ll_backend__llds_out__llds_out_code_addr__Label_4, (MR_Integer) 0);
    }
    if (((MR_tag((MR_Word) ll_backend__llds_out__llds_out_code_addr__Label_4)) == (MR_mktag((MR_Integer) 1))))
      {
        MR_Word ll_backend__llds_out__llds_out_code_addr__V_30_30 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__llds_out__llds_out_code_addr__Label_4, (MR_Integer) 0)));
        MR_Word ll_backend__llds_out__llds_out_code_addr__V_29_29 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__llds_out__llds_out_code_addr__Label_4, (MR_Integer) 1)));

        switch (ll_backend__llds_out__llds_out_code_addr__V_30_30) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
            {
              MR_String ll_backend__llds_out__llds_out_code_addr__V_16_16;

              {
                ll_backend__llds_out__llds_out_code_addr__V_16_16 = mercury__string__f_43_43_2_f_0(ll_backend__llds_out__llds_out_code_addr__LabelStr_12, (MR_String) ")");
              }
              {
                ll_backend__llds_out__llds_out_code_addr__Str_6 = mercury__string__f_43_43_2_f_0((MR_String) "MR_LABEL_AP(", ll_backend__llds_out__llds_out_code_addr__V_16_16);
              }
            }
            break;
          case (MR_Integer) 2:
            {
              MR_String ll_backend__llds_out__llds_out_code_addr__V_19_19;

              {
                ll_backend__llds_out__llds_out_code_addr__V_19_19 = mercury__string__f_43_43_2_f_0(ll_backend__llds_out__llds_out_code_addr__LabelStr_12, (MR_String) ")");
              }
              {
                ll_backend__llds_out__llds_out_code_addr__Str_6 = mercury__string__f_43_43_2_f_0((MR_String) "MR_ENTRY_AP(", ll_backend__llds_out__llds_out_code_addr__V_19_19);
              }
            }
            break;
          case (MR_Integer) 1:
            {
              MR_String ll_backend__llds_out__llds_out_code_addr__V_41_41;

              {
                ll_backend__llds_out__llds_out_code_addr__V_41_41 = mercury__string__f_43_43_2_f_0(ll_backend__llds_out__llds_out_code_addr__LabelStr_12, (MR_String) ")");
              }
              {
                ll_backend__llds_out__llds_out_code_addr__Str_6 = mercury__string__f_43_43_2_f_0((MR_String) "MR_ENTRY_AP(", ll_backend__llds_out__llds_out_code_addr__V_41_41);
              }
            }
            break;
        }
      }
    else
      {
        MR_String ll_backend__llds_out__llds_out_code_addr__V_34_34;

        {
          ll_backend__llds_out__llds_out_code_addr__V_34_34 = mercury__string__f_43_43_2_f_0(ll_backend__llds_out__llds_out_code_addr__LabelStr_12, (MR_String) ")");
        }
        {
          ll_backend__llds_out__llds_out_code_addr__Str_6 = mercury__string__f_43_43_2_f_0((MR_String) "MR_LABEL_AP(", ll_backend__llds_out__llds_out_code_addr__V_34_34);
        }
      }
    {
      mercury__io__write_string_3_p_0(ll_backend__llds_out__llds_out_code_addr__Str_6);
    }
  }
}

void MR_CALL 
ll_backend__llds_out__llds_out_code_addr__output_code_addr_from_pieces_5_p_0(
  MR_String ll_backend__llds_out__llds_out_code_addr__BaseStr_6,
  MR_Word ll_backend__llds_out__llds_out_code_addr__NeedsPrefix_7,
  MR_Word ll_backend__llds_out__llds_out_code_addr__Wrapper_8)
{
  {
    MR_bool ll_backend__llds_out__llds_out_code_addr__succeeded;

    switch (ll_backend__llds_out__llds_out_code_addr__NeedsPrefix_7) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        switch (ll_backend__llds_out__llds_out_code_addr__Wrapper_8) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
            {
              {
                mercury__io__write_string_3_p_0((MR_String) "MR_ENTRY(");
              }
              {
                mercury__io__write_string_3_p_0(ll_backend__llds_out__llds_out_code_addr__BaseStr_6);
              }
              {
                mercury__io__write_string_3_p_0((MR_String) ")");
              }
            }
            break;
          case (MR_Integer) 1:
            {
              {
                mercury__io__write_string_3_p_0((MR_String) "MR_LABEL(");
              }
              {
                mercury__io__write_string_3_p_0(ll_backend__llds_out__llds_out_code_addr__BaseStr_6);
              }
              {
                mercury__io__write_string_3_p_0((MR_String) ")");
              }
            }
            break;
          case (MR_Integer) 2:
            {
              mercury__io__write_string_3_p_0(ll_backend__llds_out__llds_out_code_addr__BaseStr_6);
            }
            break;
        }
        break;
      case (MR_Integer) 1:
        switch (ll_backend__llds_out__llds_out_code_addr__Wrapper_8) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
            {
              {
                mercury__io__write_string_3_p_0((MR_String) "MR_ENTRY_AP(");
              }
              {
                mercury__io__write_string_3_p_0(ll_backend__llds_out__llds_out_code_addr__BaseStr_6);
              }
              {
                mercury__io__write_string_3_p_0((MR_String) ")");
              }
            }
            break;
          case (MR_Integer) 1:
            {
              {
                mercury__io__write_string_3_p_0((MR_String) "MR_LABEL_AP(");
              }
              {
                mercury__io__write_string_3_p_0(ll_backend__llds_out__llds_out_code_addr__BaseStr_6);
              }
              {
                mercury__io__write_string_3_p_0((MR_String) ")");
              }
            }
            break;
          case (MR_Integer) 2:
            {
              MR_String ll_backend__llds_out__llds_out_code_addr__V_32_32;

              {
                ll_backend__llds_out__llds_out_code_addr__V_32_32 = backend_libs__name_mangle__mercury_label_prefix_0_f_0();
              }
              {
                mercury__io__write_string_3_p_0(ll_backend__llds_out__llds_out_code_addr__V_32_32);
              }
              {
                mercury__io__write_string_3_p_0(ll_backend__llds_out__llds_out_code_addr__BaseStr_6);
              }
            }
            break;
        }
        break;
    }
  }
}

void MR_CALL 
ll_backend__llds_out__llds_out_code_addr__output_code_addr_3_p_0(
  MR_Word ll_backend__llds_out__llds_out_code_addr__CodeAddr_4)
{
  {
    MR_bool ll_backend__llds_out__llds_out_code_addr__succeeded;
    MR_String ll_backend__llds_out__llds_out_code_addr__BaseStr_6;
    MR_Word ll_backend__llds_out__llds_out_code_addr__NeedsPrefix_7;
    MR_Word ll_backend__llds_out__llds_out_code_addr__Wrapper_8;

    {
      ll_backend__llds_out__llds_out_code_addr__code_addr_to_string_base_4_p_0(ll_backend__llds_out__llds_out_code_addr__CodeAddr_4, &ll_backend__llds_out__llds_out_code_addr__BaseStr_6, &ll_backend__llds_out__llds_out_code_addr__NeedsPrefix_7, &ll_backend__llds_out__llds_out_code_addr__Wrapper_8);
    }
    {
      ll_backend__llds_out__llds_out_code_addr__output_code_addr_from_pieces_5_p_0(ll_backend__llds_out__llds_out_code_addr__BaseStr_6, ll_backend__llds_out__llds_out_code_addr__NeedsPrefix_7, ll_backend__llds_out__llds_out_code_addr__Wrapper_8);
    }
  }
}

MR_String MR_CALL 
ll_backend__llds_out__llds_out_code_addr__label_to_c_string_2_f_0(
  MR_Word ll_backend__llds_out__llds_out_code_addr__Label_4,
  MR_Word ll_backend__llds_out__llds_out_code_addr__AddPrefix_5)
{
  {
    MR_bool ll_backend__llds_out__llds_out_code_addr__succeeded;
    MR_String ll_backend__llds_out__llds_out_code_addr__LabelStr_6;

    if (((MR_tag((MR_Word) ll_backend__llds_out__llds_out_code_addr__Label_4)) == (MR_mktag((MR_Integer) 1))))
      {
        MR_Word ll_backend__llds_out__llds_out_code_addr__ProcLabel_8 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__llds_out__llds_out_code_addr__Label_4, (MR_Integer) 1)));
        MR_Word ll_backend__llds_out__llds_out_code_addr__V_7_7 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__llds_out__llds_out_code_addr__Label_4, (MR_Integer) 0)));

        {
          ll_backend__llds_out__llds_out_code_addr__LabelStr_6 = backend_libs__name_mangle__proc_label_to_c_string_2_f_0(ll_backend__llds_out__llds_out_code_addr__ProcLabel_8, ll_backend__llds_out__llds_out_code_addr__AddPrefix_5);
        }
      }
    else
      {
        MR_Integer ll_backend__llds_out__llds_out_code_addr__Num_9 = ((MR_Integer) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_code_addr__Label_4, (MR_Integer) 0)));
        MR_String ll_backend__llds_out__llds_out_code_addr__ProcLabelStr_10;
        MR_String ll_backend__llds_out__llds_out_code_addr__NumStr_11;
        MR_String ll_backend__llds_out__llds_out_code_addr__V_12_12;
        MR_Word ll_backend__llds_out__llds_out_code_addr__ProcLabel_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_code_addr__Label_4, (MR_Integer) 1)));

        {
          ll_backend__llds_out__llds_out_code_addr__ProcLabelStr_10 = backend_libs__name_mangle__proc_label_to_c_string_2_f_0(ll_backend__llds_out__llds_out_code_addr__ProcLabel_14, ll_backend__llds_out__llds_out_code_addr__AddPrefix_5);
        }
        {
          mercury__string__int_to_string_2_p_0(ll_backend__llds_out__llds_out_code_addr__Num_9, &ll_backend__llds_out__llds_out_code_addr__NumStr_11);
        }
        {
          ll_backend__llds_out__llds_out_code_addr__V_12_12 = mercury__string__f_43_43_2_f_0((MR_String) "_i", ll_backend__llds_out__llds_out_code_addr__NumStr_11);
        }
        {
          ll_backend__llds_out__llds_out_code_addr__LabelStr_6 = mercury__string__f_43_43_2_f_0(ll_backend__llds_out__llds_out_code_addr__ProcLabelStr_10, ll_backend__llds_out__llds_out_code_addr__V_12_12);
        }
      }
    return ll_backend__llds_out__llds_out_code_addr__LabelStr_6;
  }
}

void MR_CALL 
ll_backend__llds_out__llds_out_code_addr__output_label_maybe_prefix_4_p_0(
  MR_Word ll_backend__llds_out__llds_out_code_addr__Label_5,
  MR_Word ll_backend__llds_out__llds_out_code_addr__AddPrefix_6)
{
  {
    MR_bool ll_backend__llds_out__llds_out_code_addr__succeeded;
    MR_String ll_backend__llds_out__llds_out_code_addr__LabelStr_8;

    {
      ll_backend__llds_out__llds_out_code_addr__LabelStr_8 = ll_backend__llds_out__llds_out_code_addr__label_to_c_string_2_f_0(ll_backend__llds_out__llds_out_code_addr__Label_5, ll_backend__llds_out__llds_out_code_addr__AddPrefix_6);
    }
    {
      mercury__io__write_string_3_p_0(ll_backend__llds_out__llds_out_code_addr__LabelStr_8);
    }
  }
}

void MR_CALL 
ll_backend__llds_out__llds_out_code_addr__output_label_no_prefix_3_p_0(
  MR_Word ll_backend__llds_out__llds_out_code_addr__Label_4)
{
  {
    MR_bool ll_backend__llds_out__llds_out_code_addr__succeeded;
    MR_String ll_backend__llds_out__llds_out_code_addr__LabelStr_6;

    {
      ll_backend__llds_out__llds_out_code_addr__LabelStr_6 = ll_backend__llds_out__llds_out_code_addr__label_to_c_string_2_f_0(ll_backend__llds_out__llds_out_code_addr__Label_4, (MR_Integer) 0);
    }
    {
      mercury__io__write_string_3_p_0(ll_backend__llds_out__llds_out_code_addr__LabelStr_6);
    }
  }
}

void MR_CALL 
ll_backend__llds_out__llds_out_code_addr__output_label_3_p_0(
  MR_Word ll_backend__llds_out__llds_out_code_addr__Label_4)
{
  {
    MR_bool ll_backend__llds_out__llds_out_code_addr__succeeded;
    MR_String ll_backend__llds_out__llds_out_code_addr__LabelStr_6;

    {
      ll_backend__llds_out__llds_out_code_addr__LabelStr_6 = ll_backend__llds_out__llds_out_code_addr__label_to_c_string_2_f_0(ll_backend__llds_out__llds_out_code_addr__Label_4, (MR_Integer) 1);
    }
    {
      mercury__io__write_string_3_p_0(ll_backend__llds_out__llds_out_code_addr__LabelStr_6);
    }
  }
}

MR_String MR_CALL 
ll_backend__llds_out__llds_out_code_addr__ho_call_variant_to_string_1_f_0(
  MR_Word ll_backend__llds_out__llds_out_code_addr__Variant_3)
{
  {
    MR_bool ll_backend__llds_out__llds_out_code_addr__succeeded;
    MR_String ll_backend__llds_out__llds_out_code_addr__Str_4;

    if ((ll_backend__llds_out__llds_out_code_addr__Variant_3 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
      ll_backend__llds_out__llds_out_code_addr__Str_4 = (MR_String) "compact";
    else
      {
        MR_Integer ll_backend__llds_out__llds_out_code_addr__Num_5 = ((MR_Integer) (MR_hl_field(MR_mktag(1), ll_backend__llds_out__llds_out_code_addr__Variant_3, (MR_Integer) 0)));

        {
          ll_backend__llds_out__llds_out_code_addr__Str_4 = mercury__string__int_to_string_1_f_0(ll_backend__llds_out__llds_out_code_addr__Num_5);
        }
      }
    return ll_backend__llds_out__llds_out_code_addr__Str_4;
  }
}

void MR_CALL 
ll_backend__llds_out__llds_out_code_addr__output_record_code_addr_decls_format_10_p_0(
  MR_Word ll_backend__llds_out__llds_out_code_addr__Info_11,
  MR_Word ll_backend__llds_out__llds_out_code_addr__CodeAddress_12,
  MR_String ll_backend__llds_out__llds_out_code_addr__FirstIndent_13,
  MR_String ll_backend__llds_out__llds_out_code_addr__LaterIndent_14,
  MR_Integer ll_backend__llds_out__llds_out_code_addr__STATE_VARIABLE_N_0_19,
  MR_Integer * ll_backend__llds_out__llds_out_code_addr__STATE_VARIABLE_N_20,
  MR_Word ll_backend__llds_out__llds_out_code_addr__STATE_VARIABLE_DeclSet_0_21,
  MR_Word * ll_backend__llds_out__llds_out_code_addr__STATE_VARIABLE_DeclSet_22)
{
  {
    MR_bool ll_backend__llds_out__llds_out_code_addr__succeeded;
    MR_Word ll_backend__llds_out__llds_out_code_addr__V_25_25;

    {
      ll_backend__llds_out__llds_out_code_addr__V_25_25 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(2), ll_backend__llds_out__llds_out_code_addr__V_25_25, 0) = ((MR_Box) (ll_backend__llds_out__llds_out_code_addr__CodeAddress_12));
    }
    {
      ll_backend__llds_out__llds_out_code_addr__succeeded = ll_backend__llds_out__llds_out_util__decl_set_is_member_2_p_0(ll_backend__llds_out__llds_out_code_addr__V_25_25, ll_backend__llds_out__llds_out_code_addr__STATE_VARIABLE_DeclSet_0_21);
    }
    if (ll_backend__llds_out__llds_out_code_addr__succeeded)
      {
        *ll_backend__llds_out__llds_out_code_addr__STATE_VARIABLE_DeclSet_22 = ll_backend__llds_out__llds_out_code_addr__STATE_VARIABLE_DeclSet_0_21;
        *ll_backend__llds_out__llds_out_code_addr__STATE_VARIABLE_N_20 = ll_backend__llds_out__llds_out_code_addr__STATE_VARIABLE_N_0_19;
      }
    else
      {
        MR_Word ll_backend__llds_out__llds_out_code_addr__V_26_26;

        {
          ll_backend__llds_out__llds_out_code_addr__V_26_26 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(2), ll_backend__llds_out__llds_out_code_addr__V_26_26, 0) = ((MR_Box) (ll_backend__llds_out__llds_out_code_addr__CodeAddress_12));
        }
        {
          ll_backend__llds_out__llds_out_util__decl_set_insert_3_p_0(ll_backend__llds_out__llds_out_code_addr__V_26_26, ll_backend__llds_out__llds_out_code_addr__STATE_VARIABLE_DeclSet_0_21, ll_backend__llds_out__llds_out_code_addr__STATE_VARIABLE_DeclSet_22);
        }
        switch (MR_tag((MR_Word) ll_backend__llds_out__llds_out_code_addr__CodeAddress_12)) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
            switch (MR_unmkbody(ll_backend__llds_out__llds_out_code_addr__CodeAddress_12)) {
              default: /*NOTREACHED*/ MR_assert(0);
              case (MR_Integer) 0:
                *ll_backend__llds_out__llds_out_code_addr__STATE_VARIABLE_N_20 = ll_backend__llds_out__llds_out_code_addr__STATE_VARIABLE_N_0_19;
                break;
              case (MR_Integer) 1:
              case (MR_Integer) 2:
                {
                  MR_Word ll_backend__llds_out__llds_out_code_addr__UseMacro_45 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_code_addr__Info_11, (MR_Integer) 7)))) >> (MR_Integer) 12)) & (MR_Integer) 1);
                  MR_Word ll_backend__llds_out__llds_out_code_addr__V_49_49 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_code_addr__Info_11, (MR_Integer) 0)));
                  MR_String ll_backend__llds_out__llds_out_code_addr__V_50_50 = ((MR_String) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_code_addr__Info_11, (MR_Integer) 1)));
                  MR_String ll_backend__llds_out__llds_out_code_addr__V_51_51 = ((MR_String) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_code_addr__Info_11, (MR_Integer) 2)));
                  MR_Word ll_backend__llds_out__llds_out_code_addr__V_52_52 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_code_addr__Info_11, (MR_Integer) 3)));
                  MR_Word ll_backend__llds_out__llds_out_code_addr__V_53_53 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_code_addr__Info_11, (MR_Integer) 4)));
                  MR_Word ll_backend__llds_out__llds_out_code_addr__V_54_54 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_code_addr__Info_11, (MR_Integer) 5)));
                  MR_Word ll_backend__llds_out__llds_out_code_addr__V_55_55 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_code_addr__Info_11, (MR_Integer) 6)));
                  MR_Word ll_backend__llds_out__llds_out_code_addr__V_56_56 = ((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_code_addr__Info_11, (MR_Integer) 7)))) & (MR_Integer) 1);
                  MR_Word ll_backend__llds_out__llds_out_code_addr__V_57_57 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_code_addr__Info_11, (MR_Integer) 7)))) >> (MR_Integer) 1)) & (MR_Integer) 1);
                  MR_Word ll_backend__llds_out__llds_out_code_addr__V_58_58 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_code_addr__Info_11, (MR_Integer) 7)))) >> (MR_Integer) 2)) & (MR_Integer) 1);
                  MR_Word ll_backend__llds_out__llds_out_code_addr__V_59_59 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_code_addr__Info_11, (MR_Integer) 7)))) >> (MR_Integer) 3)) & (MR_Integer) 1);
                  MR_Word ll_backend__llds_out__llds_out_code_addr__V_60_60 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_code_addr__Info_11, (MR_Integer) 7)))) >> (MR_Integer) 4)) & (MR_Integer) 1);
                  MR_Word ll_backend__llds_out__llds_out_code_addr__V_61_61 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_code_addr__Info_11, (MR_Integer) 7)))) >> (MR_Integer) 5)) & (MR_Integer) 1);
                  MR_Word ll_backend__llds_out__llds_out_code_addr__V_62_62 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_code_addr__Info_11, (MR_Integer) 7)))) >> (MR_Integer) 6)) & (MR_Integer) 1);
                  MR_Word ll_backend__llds_out__llds_out_code_addr__V_63_63 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_code_addr__Info_11, (MR_Integer) 7)))) >> (MR_Integer) 7)) & (MR_Integer) 1);
                  MR_Word ll_backend__llds_out__llds_out_code_addr__V_64_64 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_code_addr__Info_11, (MR_Integer) 7)))) >> (MR_Integer) 8)) & (MR_Integer) 1);
                  MR_Word ll_backend__llds_out__llds_out_code_addr__V_65_65 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_code_addr__Info_11, (MR_Integer) 7)))) >> (MR_Integer) 9)) & (MR_Integer) 1);
                  MR_Word ll_backend__llds_out__llds_out_code_addr__V_66_66 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_code_addr__Info_11, (MR_Integer) 7)))) >> (MR_Integer) 10)) & (MR_Integer) 1);
                  MR_Word ll_backend__llds_out__llds_out_code_addr__V_67_67 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_code_addr__Info_11, (MR_Integer) 7)))) >> (MR_Integer) 11)) & (MR_Integer) 1);
                  MR_Word ll_backend__llds_out__llds_out_code_addr__V_68_68 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_code_addr__Info_11, (MR_Integer) 7)))) >> (MR_Integer) 13)) & (MR_Integer) 7);
                  MR_Word ll_backend__llds_out__llds_out_code_addr__V_69_69 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_code_addr__Info_11, (MR_Integer) 8)));

                  switch (ll_backend__llds_out__llds_out_code_addr__UseMacro_45) {
                    default: /*NOTREACHED*/ MR_assert(0);
                    case (MR_Integer) 0:
                      {
                        {
                          ll_backend__llds_out__llds_out_util__output_indent_5_p_0(ll_backend__llds_out__llds_out_code_addr__FirstIndent_13, ll_backend__llds_out__llds_out_code_addr__LaterIndent_14, ll_backend__llds_out__llds_out_code_addr__STATE_VARIABLE_N_0_19);
                        }
                        *ll_backend__llds_out__llds_out_code_addr__STATE_VARIABLE_N_20 = (ll_backend__llds_out__llds_out_code_addr__STATE_VARIABLE_N_0_19 + (MR_Integer) 1);
                        {
                          ll_backend__llds_out__llds_out_code_addr__output_code_addr_decls_4_p_0(ll_backend__llds_out__llds_out_code_addr__Info_11, ll_backend__llds_out__llds_out_code_addr__CodeAddress_12);
                        }
                      }
                      break;
                    case (MR_Integer) 1:
                      *ll_backend__llds_out__llds_out_code_addr__STATE_VARIABLE_N_20 = ll_backend__llds_out__llds_out_code_addr__STATE_VARIABLE_N_0_19;
                      break;
                  }
                }
                break;
              case (MR_Integer) 3:
              case (MR_Integer) 4:
              case (MR_Integer) 5:
                {
                  {
                    ll_backend__llds_out__llds_out_util__output_indent_5_p_0(ll_backend__llds_out__llds_out_code_addr__FirstIndent_13, ll_backend__llds_out__llds_out_code_addr__LaterIndent_14, ll_backend__llds_out__llds_out_code_addr__STATE_VARIABLE_N_0_19);
                  }
                  *ll_backend__llds_out__llds_out_code_addr__STATE_VARIABLE_N_20 = (ll_backend__llds_out__llds_out_code_addr__STATE_VARIABLE_N_0_19 + (MR_Integer) 1);
                  {
                    ll_backend__llds_out__llds_out_code_addr__output_code_addr_decls_4_p_0(ll_backend__llds_out__llds_out_code_addr__Info_11, ll_backend__llds_out__llds_out_code_addr__CodeAddress_12);
                  }
                }
                break;
            }
            break;
          case (MR_Integer) 1:
            {
              MR_Word ll_backend__llds_out__llds_out_code_addr__Label_35 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__llds_out__llds_out_code_addr__CodeAddress_12, (MR_Integer) 0)));

              if (((MR_tag((MR_Word) ll_backend__llds_out__llds_out_code_addr__Label_35)) == (MR_mktag((MR_Integer) 1))))
                {
                  MR_Word ll_backend__llds_out__llds_out_code_addr__V_71_71 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__llds_out__llds_out_code_addr__Label_35, (MR_Integer) 0)));
                  MR_Word ll_backend__llds_out__llds_out_code_addr__V_70_70 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__llds_out__llds_out_code_addr__Label_35, (MR_Integer) 1)));

                  switch (ll_backend__llds_out__llds_out_code_addr__V_71_71) {
                    default: /*NOTREACHED*/ MR_assert(0);
                    case (MR_Integer) 0:
                      *ll_backend__llds_out__llds_out_code_addr__STATE_VARIABLE_N_20 = ll_backend__llds_out__llds_out_code_addr__STATE_VARIABLE_N_0_19;
                      break;
                    case (MR_Integer) 2:
                      {
                        {
                          ll_backend__llds_out__llds_out_util__output_indent_5_p_0(ll_backend__llds_out__llds_out_code_addr__FirstIndent_13, ll_backend__llds_out__llds_out_code_addr__LaterIndent_14, ll_backend__llds_out__llds_out_code_addr__STATE_VARIABLE_N_0_19);
                        }
                        *ll_backend__llds_out__llds_out_code_addr__STATE_VARIABLE_N_20 = (ll_backend__llds_out__llds_out_code_addr__STATE_VARIABLE_N_0_19 + (MR_Integer) 1);
                        {
                          ll_backend__llds_out__llds_out_code_addr__output_code_addr_decls_4_p_0(ll_backend__llds_out__llds_out_code_addr__Info_11, ll_backend__llds_out__llds_out_code_addr__CodeAddress_12);
                        }
                      }
                      break;
                    case (MR_Integer) 1:
                      {
                        {
                          ll_backend__llds_out__llds_out_util__output_indent_5_p_0(ll_backend__llds_out__llds_out_code_addr__FirstIndent_13, ll_backend__llds_out__llds_out_code_addr__LaterIndent_14, ll_backend__llds_out__llds_out_code_addr__STATE_VARIABLE_N_0_19);
                        }
                        *ll_backend__llds_out__llds_out_code_addr__STATE_VARIABLE_N_20 = (ll_backend__llds_out__llds_out_code_addr__STATE_VARIABLE_N_0_19 + (MR_Integer) 1);
                        {
                          ll_backend__llds_out__llds_out_code_addr__output_code_addr_decls_4_p_0(ll_backend__llds_out__llds_out_code_addr__Info_11, ll_backend__llds_out__llds_out_code_addr__CodeAddress_12);
                        }
                      }
                      break;
                  }
                }
              else
                *ll_backend__llds_out__llds_out_code_addr__STATE_VARIABLE_N_20 = ll_backend__llds_out__llds_out_code_addr__STATE_VARIABLE_N_0_19;
            }
            break;
          case (MR_Integer) 2:
            {
              {
                ll_backend__llds_out__llds_out_util__output_indent_5_p_0(ll_backend__llds_out__llds_out_code_addr__FirstIndent_13, ll_backend__llds_out__llds_out_code_addr__LaterIndent_14, ll_backend__llds_out__llds_out_code_addr__STATE_VARIABLE_N_0_19);
              }
              *ll_backend__llds_out__llds_out_code_addr__STATE_VARIABLE_N_20 = (ll_backend__llds_out__llds_out_code_addr__STATE_VARIABLE_N_0_19 + (MR_Integer) 1);
              {
                ll_backend__llds_out__llds_out_code_addr__output_code_addr_decls_4_p_0(ll_backend__llds_out__llds_out_code_addr__Info_11, ll_backend__llds_out__llds_out_code_addr__CodeAddress_12);
              }
            }
            break;
          case (MR_Integer) 3:
            switch (((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__llds_out__llds_out_code_addr__CodeAddress_12, (MR_Integer) 0)))) {
              default: /*NOTREACHED*/ MR_assert(0);
              case (MR_Integer) 0:
                *ll_backend__llds_out__llds_out_code_addr__STATE_VARIABLE_N_20 = ll_backend__llds_out__llds_out_code_addr__STATE_VARIABLE_N_0_19;
                break;
              case (MR_Integer) 1:
              case (MR_Integer) 2:
                {
                  {
                    ll_backend__llds_out__llds_out_util__output_indent_5_p_0(ll_backend__llds_out__llds_out_code_addr__FirstIndent_13, ll_backend__llds_out__llds_out_code_addr__LaterIndent_14, ll_backend__llds_out__llds_out_code_addr__STATE_VARIABLE_N_0_19);
                  }
                  *ll_backend__llds_out__llds_out_code_addr__STATE_VARIABLE_N_20 = (ll_backend__llds_out__llds_out_code_addr__STATE_VARIABLE_N_0_19 + (MR_Integer) 1);
                  {
                    ll_backend__llds_out__llds_out_code_addr__output_code_addr_decls_4_p_0(ll_backend__llds_out__llds_out_code_addr__Info_11, ll_backend__llds_out__llds_out_code_addr__CodeAddress_12);
                  }
                }
                break;
            }
            break;
        }
      }
  }
}

void MR_CALL 
ll_backend__llds_out__llds_out_code_addr__output_record_code_addr_decls_6_p_0(
  MR_Word ll_backend__llds_out__llds_out_code_addr__Info_7,
  MR_Word ll_backend__llds_out__llds_out_code_addr__CodeAddress_8,
  MR_Word ll_backend__llds_out__llds_out_code_addr__STATE_VARIABLE_DeclSet_0_12,
  MR_Word * ll_backend__llds_out__llds_out_code_addr__STATE_VARIABLE_DeclSet_13)
{
  {
    MR_bool ll_backend__llds_out__llds_out_code_addr__succeeded;
    MR_Integer ll_backend__llds_out__llds_out_code_addr__V_11_11;

    {
      ll_backend__llds_out__llds_out_code_addr__output_record_code_addr_decls_format_10_p_0(ll_backend__llds_out__llds_out_code_addr__Info_7, ll_backend__llds_out__llds_out_code_addr__CodeAddress_8, (MR_String) "", (MR_String) "", (MR_Integer) 0, &ll_backend__llds_out__llds_out_code_addr__V_11_11, ll_backend__llds_out__llds_out_code_addr__STATE_VARIABLE_DeclSet_0_12, ll_backend__llds_out__llds_out_code_addr__STATE_VARIABLE_DeclSet_13);
    }
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

/* :- end_module ll_backend.llds_out.llds_out_code_addr. */
