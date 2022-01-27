/*
** Automatically generated from `llds_out_code_addr.m'
** by the Mercury compiler,
** version DEV, configured for x86_64-apple-darwin13.1.0.
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
#include "array.mih"
#include "assoc_list.mih"
#include "backend_libs.mih"
#include "bag.mih"
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
#include "digraph.mih"
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
#include "mode_robdd.mih"
#include "multi_map.mih"
#include "ops.mih"
#include "pair.mih"
#include "parse_tree.mih"
#include "pretty_printer.mih"
#include "private_builtin.mih"
#include "queue.mih"
#include "random.mih"
#include "recompilation.mih"
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
#include "tree_bitset.mih"
#include "type_desc.mih"
#include "unit.mih"
#include "univ.mih"
#include "varset.mih"
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
#include "hlds.hlds_goal.mih"
#include "hlds.hlds_llds.mih"
#include "hlds.hlds_module.mih"
#include "hlds.hlds_pred.mih"
#include "hlds.hlds_rtti.mih"
#include "hlds.inst_graph.mih"
#include "hlds.instmap.mih"
#include "hlds.pred_table.mih"
#include "hlds.special_pred.mih"
#include "libs.globals.mih"
#include "libs.lp_rational.mih"
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
#include "mdbcomp.trace_counts.mih"
#include "mode_robdd.tfeirn.mih"
#include "parse_tree.error_util.mih"
#include "parse_tree.module_qual.mih"
#include "parse_tree.prog_data.mih"
#include "parse_tree.prog_foreign.mih"
#include "parse_tree.prog_item.mih"
#include "parse_tree.prog_type.mih"
#include "parse_tree.set_of_var.mih"
#include "transform_hlds.term_constr_data.mih"
#include "transform_hlds.term_constr_errors.mih"
#include "transform_hlds.term_constr_main.mih"
#include "transform_hlds.term_errors.mih"
#include "transform_hlds.term_norm.mih"
#include "transform_hlds.term_util.mih"
#include "ll_backend.llds_out.llds_out_util.mih"
#include "mdbcomp.feedback.automatic_parallelism.mih"




#line 144 "ll_backend.llds_out.llds_out_code_addr.c"
static const MR_EnumFunctorDesc ll_backend__llds_out__llds_out_code_addr__ll_backend__llds_out__llds_out_code_addr__enum_functor_desc_wrapper_0_0;

#line 147 "ll_backend.llds_out.llds_out_code_addr.c"
static const MR_EnumFunctorDesc ll_backend__llds_out__llds_out_code_addr__ll_backend__llds_out__llds_out_code_addr__enum_functor_desc_wrapper_0_1;

#line 150 "ll_backend.llds_out.llds_out_code_addr.c"
static const MR_EnumFunctorDesc ll_backend__llds_out__llds_out_code_addr__ll_backend__llds_out__llds_out_code_addr__enum_functor_desc_wrapper_0_2;

#line 153 "ll_backend.llds_out.llds_out_code_addr.c"
static const MR_EnumFunctorDescPtr ll_backend__llds_out__llds_out_code_addr__ll_backend__llds_out__llds_out_code_addr__enum_value_ordered_wrapper_0[3];

#line 156 "ll_backend.llds_out.llds_out_code_addr.c"
static const MR_EnumFunctorDescPtr ll_backend__llds_out__llds_out_code_addr__ll_backend__llds_out__llds_out_code_addr__enum_name_ordered_wrapper_0[3];

#line 159 "ll_backend.llds_out.llds_out_code_addr.c"
static const MR_Integer ll_backend__llds_out__llds_out_code_addr__ll_backend__llds_out__llds_out_code_addr__functor_number_map_wrapper_0[3];

#line 162 "ll_backend.llds_out.llds_out_code_addr.c"
static MR_bool MR_CALL 
ll_backend__llds_out__llds_out_code_addr____Unify____wrapper_0_0_10001(
#line 165 "ll_backend.llds_out.llds_out_code_addr.c"
  MR_Box ll_backend__llds_out__llds_out_code_addr__wrapper_arg_1,
#line 167 "ll_backend.llds_out.llds_out_code_addr.c"
  MR_Box ll_backend__llds_out__llds_out_code_addr__wrapper_arg_2);

#line 170 "ll_backend.llds_out.llds_out_code_addr.c"
static void MR_CALL 
ll_backend__llds_out__llds_out_code_addr____Compare____wrapper_0_0_10001(
#line 173 "ll_backend.llds_out.llds_out_code_addr.c"
  MR_Box * ll_backend__llds_out__llds_out_code_addr__wrapper_arg_1,
#line 175 "ll_backend.llds_out.llds_out_code_addr.c"
  MR_Box ll_backend__llds_out__llds_out_code_addr__wrapper_arg_2,
#line 177 "ll_backend.llds_out.llds_out_code_addr.c"
  MR_Box ll_backend__llds_out__llds_out_code_addr__wrapper_arg_3);

#line 217 "llds_out_code_addr.m"
static void MR_CALL 
ll_backend__llds_out__llds_out_code_addr__output_label_as_code_addr_decls_3_p_0(
#line 217 "llds_out_code_addr.m"
  MR_Word ll_backend__llds_out__llds_out_code_addr__Label_4);

#line 159 "llds_out_code_addr.m"
static void MR_CALL 
ll_backend__llds_out__llds_out_code_addr__output_code_addr_decls_4_p_0(
#line 159 "llds_out_code_addr.m"
  MR_Word ll_backend__llds_out__llds_out_code_addr__Info_5,
#line 159 "llds_out_code_addr.m"
  MR_Word ll_backend__llds_out__llds_out_code_addr__CodeAddr_6);







#include "io.mh"
#include "io.mh"
#include "time.mh"
#include "string.mh"
#include "bitmap.mh"
#include "bitmap.mh"
#include "time.mh"
#include "time.mh"
#include "array.mh"
#include "array.mh"
#include "mdbcomp.rtti_access.mh"
#include "mdbcomp.rtti_access.mh"



#line 215 "ll_backend.llds_out.llds_out_code_addr.c"
static const MR_EnumFunctorDesc ll_backend__llds_out__llds_out_code_addr__ll_backend__llds_out__llds_out_code_addr__enum_functor_desc_wrapper_0_0 = {
  (MR_String) "wrapper_entry",
  (MR_Integer) 0
};

#line 221 "ll_backend.llds_out.llds_out_code_addr.c"
static const MR_EnumFunctorDesc ll_backend__llds_out__llds_out_code_addr__ll_backend__llds_out__llds_out_code_addr__enum_functor_desc_wrapper_0_1 = {
  (MR_String) "wrapper_label",
  (MR_Integer) 1
};

#line 227 "ll_backend.llds_out.llds_out_code_addr.c"
static const MR_EnumFunctorDesc ll_backend__llds_out__llds_out_code_addr__ll_backend__llds_out__llds_out_code_addr__enum_functor_desc_wrapper_0_2 = {
  (MR_String) "wrapper_none",
  (MR_Integer) 2
};

#line 233 "ll_backend.llds_out.llds_out_code_addr.c"
static const MR_EnumFunctorDescPtr ll_backend__llds_out__llds_out_code_addr__ll_backend__llds_out__llds_out_code_addr__enum_value_ordered_wrapper_0[3] = {
  &ll_backend__llds_out__llds_out_code_addr__ll_backend__llds_out__llds_out_code_addr__enum_functor_desc_wrapper_0_0,
  &ll_backend__llds_out__llds_out_code_addr__ll_backend__llds_out__llds_out_code_addr__enum_functor_desc_wrapper_0_1,
  &ll_backend__llds_out__llds_out_code_addr__ll_backend__llds_out__llds_out_code_addr__enum_functor_desc_wrapper_0_2
};

#line 240 "ll_backend.llds_out.llds_out_code_addr.c"
static const MR_EnumFunctorDescPtr ll_backend__llds_out__llds_out_code_addr__ll_backend__llds_out__llds_out_code_addr__enum_name_ordered_wrapper_0[3] = {
  &ll_backend__llds_out__llds_out_code_addr__ll_backend__llds_out__llds_out_code_addr__enum_functor_desc_wrapper_0_0,
  &ll_backend__llds_out__llds_out_code_addr__ll_backend__llds_out__llds_out_code_addr__enum_functor_desc_wrapper_0_1,
  &ll_backend__llds_out__llds_out_code_addr__ll_backend__llds_out__llds_out_code_addr__enum_functor_desc_wrapper_0_2
};

#line 247 "ll_backend.llds_out.llds_out_code_addr.c"
static const MR_Integer ll_backend__llds_out__llds_out_code_addr__ll_backend__llds_out__llds_out_code_addr__functor_number_map_wrapper_0[3] = {
  (MR_Integer) 0,
  (MR_Integer) 1,
  (MR_Integer) 2
};

#line 254 "ll_backend.llds_out.llds_out_code_addr.c"
const MR_TypeCtorInfo_Struct ll_backend__llds_out__llds_out_code_addr__ll_backend__llds_out__llds_out_code_addr__type_ctor_info_wrapper_0 = {
  (MR_Integer) 0,
  (MR_Integer) 15,
  (MR_Integer) -1,
  mercury__private_builtin__MR_TYPECTOR_REP_ENUM,
  ((MR_Box) (ll_backend__llds_out__llds_out_code_addr____Unify____wrapper_0_0_10001)),
  ((MR_Box) (ll_backend__llds_out__llds_out_code_addr____Compare____wrapper_0_0_10001)),
  (MR_String) "ll_backend.llds_out.llds_out_code_addr",
  (MR_String) "wrapper",
  {
    ll_backend__llds_out__llds_out_code_addr__ll_backend__llds_out__llds_out_code_addr__enum_name_ordered_wrapper_0
  },
  {
    ll_backend__llds_out__llds_out_code_addr__ll_backend__llds_out__llds_out_code_addr__enum_value_ordered_wrapper_0
  },
  (MR_Integer) 3,
  (MR_Integer) 4,
  ll_backend__llds_out__llds_out_code_addr__ll_backend__llds_out__llds_out_code_addr__functor_number_map_wrapper_0
};

#line 275 "ll_backend.llds_out.llds_out_code_addr.c"
static MR_bool MR_CALL 
ll_backend__llds_out__llds_out_code_addr____Unify____wrapper_0_0_10001(
#line 278 "ll_backend.llds_out.llds_out_code_addr.c"
  MR_Box ll_backend__llds_out__llds_out_code_addr__wrapper_arg_1,
#line 280 "ll_backend.llds_out.llds_out_code_addr.c"
  MR_Box ll_backend__llds_out__llds_out_code_addr__wrapper_arg_2)
#line 282 "ll_backend.llds_out.llds_out_code_addr.c"
{
#line 284 "ll_backend.llds_out.llds_out_code_addr.c"
  {
#line 286 "ll_backend.llds_out.llds_out_code_addr.c"
    MR_bool ll_backend__llds_out__llds_out_code_addr__succeeded;

#line 289 "ll_backend.llds_out.llds_out_code_addr.c"
    {
#line 291 "ll_backend.llds_out.llds_out_code_addr.c"
      ll_backend__llds_out__llds_out_code_addr__succeeded = ll_backend__llds_out__llds_out_code_addr____Unify____wrapper_0_0(((MR_Word) ll_backend__llds_out__llds_out_code_addr__wrapper_arg_1), ((MR_Word) ll_backend__llds_out__llds_out_code_addr__wrapper_arg_2));
    }
#line 294 "ll_backend.llds_out.llds_out_code_addr.c"
    return ll_backend__llds_out__llds_out_code_addr__succeeded;
#line 296 "ll_backend.llds_out.llds_out_code_addr.c"
  }
#line 298 "ll_backend.llds_out.llds_out_code_addr.c"
}

#line 301 "ll_backend.llds_out.llds_out_code_addr.c"
static void MR_CALL 
ll_backend__llds_out__llds_out_code_addr____Compare____wrapper_0_0_10001(
#line 304 "ll_backend.llds_out.llds_out_code_addr.c"
  MR_Box * ll_backend__llds_out__llds_out_code_addr__wrapper_arg_1,
#line 306 "ll_backend.llds_out.llds_out_code_addr.c"
  MR_Box ll_backend__llds_out__llds_out_code_addr__wrapper_arg_2,
#line 308 "ll_backend.llds_out.llds_out_code_addr.c"
  MR_Box ll_backend__llds_out__llds_out_code_addr__wrapper_arg_3)
#line 310 "ll_backend.llds_out.llds_out_code_addr.c"
{
#line 312 "ll_backend.llds_out.llds_out_code_addr.c"
  {
#line 314 "ll_backend.llds_out.llds_out_code_addr.c"
    MR_Word ll_backend__llds_out__llds_out_code_addr__conv0_HeadVar__1_1;

#line 317 "ll_backend.llds_out.llds_out_code_addr.c"
    {
#line 319 "ll_backend.llds_out.llds_out_code_addr.c"
      ll_backend__llds_out__llds_out_code_addr____Compare____wrapper_0_0(&ll_backend__llds_out__llds_out_code_addr__conv0_HeadVar__1_1, ((MR_Word) ll_backend__llds_out__llds_out_code_addr__wrapper_arg_2), ((MR_Word) ll_backend__llds_out__llds_out_code_addr__wrapper_arg_3));
    }
#line 322 "ll_backend.llds_out.llds_out_code_addr.c"
    *ll_backend__llds_out__llds_out_code_addr__wrapper_arg_1 = ((MR_Box) (ll_backend__llds_out__llds_out_code_addr__conv0_HeadVar__1_1));
#line 324 "ll_backend.llds_out.llds_out_code_addr.c"
  }
#line 326 "ll_backend.llds_out.llds_out_code_addr.c"
}

#line 61 "llds_out_code_addr.m"
void MR_CALL 
ll_backend__llds_out__llds_out_code_addr____Compare____wrapper_0_0(
#line 61 "llds_out_code_addr.m"
  MR_Word * ll_backend__llds_out__llds_out_code_addr__HeadVar__1_1,
#line 61 "llds_out_code_addr.m"
  MR_Word ll_backend__llds_out__llds_out_code_addr__HeadVar__2_2,
#line 61 "llds_out_code_addr.m"
  MR_Word ll_backend__llds_out__llds_out_code_addr__HeadVar__3_3)
#line 61 "llds_out_code_addr.m"
{
#line 61 "llds_out_code_addr.m"
  {
#line 61 "llds_out_code_addr.m"
    MR_bool ll_backend__llds_out__llds_out_code_addr__succeeded;
#line 61 "llds_out_code_addr.m"
    MR_Integer ll_backend__llds_out__llds_out_code_addr__Cast_HeadVar1_4 = (MR_Integer) ll_backend__llds_out__llds_out_code_addr__HeadVar__2_2;
#line 61 "llds_out_code_addr.m"
    MR_Integer ll_backend__llds_out__llds_out_code_addr__Cast_HeadVar2_5 = (MR_Integer) ll_backend__llds_out__llds_out_code_addr__HeadVar__3_3;

#line 61 "llds_out_code_addr.m"
    {
#line 61 "llds_out_code_addr.m"
      mercury__private_builtin__builtin_compare_int_3_p_0(ll_backend__llds_out__llds_out_code_addr__HeadVar__1_1, ll_backend__llds_out__llds_out_code_addr__Cast_HeadVar1_4, ll_backend__llds_out__llds_out_code_addr__Cast_HeadVar2_5);
#line 61 "llds_out_code_addr.m"
      return;
    }
#line 61 "llds_out_code_addr.m"
  }
#line 61 "llds_out_code_addr.m"
}

#line 61 "llds_out_code_addr.m"
MR_bool MR_CALL 
ll_backend__llds_out__llds_out_code_addr____Unify____wrapper_0_0(
#line 61 "llds_out_code_addr.m"
  MR_Word ll_backend__llds_out__llds_out_code_addr__HeadVar__2_1,
#line 61 "llds_out_code_addr.m"
  MR_Word ll_backend__llds_out__llds_out_code_addr__HeadVar__2_2)
#line 61 "llds_out_code_addr.m"
{
#line 370 "ll_backend.llds_out.llds_out_code_addr.c"
  {
#line 372 "ll_backend.llds_out.llds_out_code_addr.c"
    MR_bool ll_backend__llds_out__llds_out_code_addr__succeeded = (ll_backend__llds_out__llds_out_code_addr__HeadVar__2_1 == ll_backend__llds_out__llds_out_code_addr__HeadVar__2_2);

#line 375 "ll_backend.llds_out.llds_out_code_addr.c"
    return ll_backend__llds_out__llds_out_code_addr__succeeded;
#line 377 "ll_backend.llds_out.llds_out_code_addr.c"
  }
#line 61 "llds_out_code_addr.m"
}

#line 217 "llds_out_code_addr.m"
static void MR_CALL 
ll_backend__llds_out__llds_out_code_addr__output_label_as_code_addr_decls_3_p_0(
#line 217 "llds_out_code_addr.m"
  MR_Word ll_backend__llds_out__llds_out_code_addr__Label_4)
#line 217 "llds_out_code_addr.m"
{
#line 221 "llds_out_code_addr.m"
  {
#line 221 "llds_out_code_addr.m"
    MR_bool ll_backend__llds_out__llds_out_code_addr__succeeded;

#line 221 "llds_out_code_addr.m"
    if (((MR_tag((MR_Word) ll_backend__llds_out__llds_out_code_addr__Label_4)) == (MR_mktag((MR_Integer) 1))))
#line 221 "llds_out_code_addr.m"
      {
#line 221 "llds_out_code_addr.m"
        MR_Word ll_backend__llds_out__llds_out_code_addr__V_24_24 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__llds_out__llds_out_code_addr__Label_4, (MR_Integer) 1)));
#line 221 "llds_out_code_addr.m"
        MR_Word ll_backend__llds_out__llds_out_code_addr__V_25_25 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__llds_out__llds_out_code_addr__Label_4, (MR_Integer) 0)));

#line 221 "llds_out_code_addr.m"
        if ((ll_backend__llds_out__llds_out_code_addr__V_25_25 == (MR_Integer) 0))
#line 229 "llds_out_code_addr.m"
          {
#line 229 "llds_out_code_addr.m"
          }
#line 221 "llds_out_code_addr.m"
        else
#line 221 "llds_out_code_addr.m"
          if ((ll_backend__llds_out__llds_out_code_addr__V_25_25 == (MR_Integer) 2))
#line 221 "llds_out_code_addr.m"
            {
#line 221 "llds_out_code_addr.m"
              MR_String ll_backend__llds_out__llds_out_code_addr__LabelStr_30;

#line 222 "llds_out_code_addr.m"
              {
#line 222 "llds_out_code_addr.m"
                mercury__io__write_string_3_p_0((MR_String) "MR_decl_entry(");
              }
#line 272 "llds_out_code_addr.m"
              {
#line 272 "llds_out_code_addr.m"
                ll_backend__llds_out__llds_out_code_addr__LabelStr_30 = backend_libs__name_mangle__proc_label_to_c_string_2_f_0(ll_backend__llds_out__llds_out_code_addr__V_24_24, (MR_Integer) 0);
              }
#line 256 "llds_out_code_addr.m"
              {
#line 256 "llds_out_code_addr.m"
                mercury__io__write_string_3_p_0(ll_backend__llds_out__llds_out_code_addr__LabelStr_30);
              }
#line 225 "llds_out_code_addr.m"
              {
#line 225 "llds_out_code_addr.m"
                mercury__io__write_string_3_p_0((MR_String) ");\n");
#line 225 "llds_out_code_addr.m"
                return;
              }
#line 221 "llds_out_code_addr.m"
            }
#line 221 "llds_out_code_addr.m"
          else
#line 227 "llds_out_code_addr.m"
            {
#line 227 "llds_out_code_addr.m"
            }
#line 221 "llds_out_code_addr.m"
      }
#line 221 "llds_out_code_addr.m"
    else
#line 231 "llds_out_code_addr.m"
      {
#line 231 "llds_out_code_addr.m"
      }
#line 221 "llds_out_code_addr.m"
  }
#line 217 "llds_out_code_addr.m"
}

#line 159 "llds_out_code_addr.m"
static void MR_CALL 
ll_backend__llds_out__llds_out_code_addr__output_code_addr_decls_4_p_0(
#line 159 "llds_out_code_addr.m"
  MR_Word ll_backend__llds_out__llds_out_code_addr__Info_5,
#line 159 "llds_out_code_addr.m"
  MR_Word ll_backend__llds_out__llds_out_code_addr__CodeAddr_6)
#line 159 "llds_out_code_addr.m"
{
#line 164 "llds_out_code_addr.m"
  {
#line 164 "llds_out_code_addr.m"
    MR_bool ll_backend__llds_out__llds_out_code_addr__succeeded;

#line 164 "llds_out_code_addr.m"
    if ((ll_backend__llds_out__llds_out_code_addr__CodeAddr_6 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 172 "llds_out_code_addr.m"
      {
#line 172 "llds_out_code_addr.m"
      }
#line 164 "llds_out_code_addr.m"
    else
#line 164 "llds_out_code_addr.m"
      if ((ll_backend__llds_out__llds_out_code_addr__CodeAddr_6 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 2)))))
#line 185 "llds_out_code_addr.m"
        {
#line 185 "llds_out_code_addr.m"
          MR_Word ll_backend__llds_out__llds_out_code_addr__UseMacro_43 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_code_addr__Info_5, (MR_Integer) 6)))) >> (MR_Integer) 12)) & (MR_Integer) 1);
#line 186 "llds_out_code_addr.m"
          MR_Word ll_backend__llds_out__llds_out_code_addr__V_65_65 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_code_addr__Info_5, (MR_Integer) 0)));
#line 186 "llds_out_code_addr.m"
          MR_String ll_backend__llds_out__llds_out_code_addr__V_66_66 = ((MR_String) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_code_addr__Info_5, (MR_Integer) 1)));
#line 186 "llds_out_code_addr.m"
          MR_Word ll_backend__llds_out__llds_out_code_addr__V_67_67 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_code_addr__Info_5, (MR_Integer) 2)));
#line 186 "llds_out_code_addr.m"
          MR_Word ll_backend__llds_out__llds_out_code_addr__V_68_68 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_code_addr__Info_5, (MR_Integer) 3)));
#line 186 "llds_out_code_addr.m"
          MR_Word ll_backend__llds_out__llds_out_code_addr__V_69_69 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_code_addr__Info_5, (MR_Integer) 4)));
#line 186 "llds_out_code_addr.m"
          MR_Word ll_backend__llds_out__llds_out_code_addr__V_70_70 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_code_addr__Info_5, (MR_Integer) 5)));
#line 186 "llds_out_code_addr.m"
          MR_Word ll_backend__llds_out__llds_out_code_addr__V_71_71 = ((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_code_addr__Info_5, (MR_Integer) 6)))) & (MR_Integer) 1);
#line 186 "llds_out_code_addr.m"
          MR_Word ll_backend__llds_out__llds_out_code_addr__V_72_72 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_code_addr__Info_5, (MR_Integer) 6)))) >> (MR_Integer) 1)) & (MR_Integer) 1);
#line 186 "llds_out_code_addr.m"
          MR_Word ll_backend__llds_out__llds_out_code_addr__V_73_73 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_code_addr__Info_5, (MR_Integer) 6)))) >> (MR_Integer) 2)) & (MR_Integer) 1);
#line 186 "llds_out_code_addr.m"
          MR_Word ll_backend__llds_out__llds_out_code_addr__V_74_74 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_code_addr__Info_5, (MR_Integer) 6)))) >> (MR_Integer) 3)) & (MR_Integer) 1);
#line 186 "llds_out_code_addr.m"
          MR_Word ll_backend__llds_out__llds_out_code_addr__V_75_75 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_code_addr__Info_5, (MR_Integer) 6)))) >> (MR_Integer) 4)) & (MR_Integer) 1);
#line 186 "llds_out_code_addr.m"
          MR_Word ll_backend__llds_out__llds_out_code_addr__V_76_76 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_code_addr__Info_5, (MR_Integer) 6)))) >> (MR_Integer) 5)) & (MR_Integer) 1);
#line 186 "llds_out_code_addr.m"
          MR_Word ll_backend__llds_out__llds_out_code_addr__V_77_77 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_code_addr__Info_5, (MR_Integer) 6)))) >> (MR_Integer) 6)) & (MR_Integer) 1);
#line 186 "llds_out_code_addr.m"
          MR_Word ll_backend__llds_out__llds_out_code_addr__V_78_78 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_code_addr__Info_5, (MR_Integer) 6)))) >> (MR_Integer) 7)) & (MR_Integer) 1);
#line 186 "llds_out_code_addr.m"
          MR_Word ll_backend__llds_out__llds_out_code_addr__V_79_79 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_code_addr__Info_5, (MR_Integer) 6)))) >> (MR_Integer) 8)) & (MR_Integer) 1);
#line 186 "llds_out_code_addr.m"
          MR_Word ll_backend__llds_out__llds_out_code_addr__V_80_80 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_code_addr__Info_5, (MR_Integer) 6)))) >> (MR_Integer) 9)) & (MR_Integer) 1);
#line 186 "llds_out_code_addr.m"
          MR_Word ll_backend__llds_out__llds_out_code_addr__V_81_81 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_code_addr__Info_5, (MR_Integer) 6)))) >> (MR_Integer) 10)) & (MR_Integer) 1);
#line 186 "llds_out_code_addr.m"
          MR_Word ll_backend__llds_out__llds_out_code_addr__V_82_82 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_code_addr__Info_5, (MR_Integer) 6)))) >> (MR_Integer) 11)) & (MR_Integer) 1);
#line 186 "llds_out_code_addr.m"
          MR_Word ll_backend__llds_out__llds_out_code_addr__V_83_83 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_code_addr__Info_5, (MR_Integer) 6)))) >> (MR_Integer) 13)) & (MR_Integer) 7);
#line 186 "llds_out_code_addr.m"
          MR_Word ll_backend__llds_out__llds_out_code_addr__V_84_84 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_code_addr__Info_5, (MR_Integer) 7)));

#line 189 "llds_out_code_addr.m"
          if ((ll_backend__llds_out__llds_out_code_addr__UseMacro_43 == (MR_Integer) 0))
#line 190 "llds_out_code_addr.m"
            {
#line 191 "llds_out_code_addr.m"
              {
#line 191 "llds_out_code_addr.m"
                mercury__io__write_string_3_p_0((MR_String) "MR_declare_entry(MR_do_fail);\n");
#line 191 "llds_out_code_addr.m"
                return;
              }
#line 190 "llds_out_code_addr.m"
            }
#line 189 "llds_out_code_addr.m"
          else
#line 188 "llds_out_code_addr.m"
            {
#line 188 "llds_out_code_addr.m"
            }
#line 185 "llds_out_code_addr.m"
        }
#line 164 "llds_out_code_addr.m"
      else
#line 164 "llds_out_code_addr.m"
        if ((ll_backend__llds_out__llds_out_code_addr__CodeAddr_6 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 5)))))
#line 213 "llds_out_code_addr.m"
          {
#line 214 "llds_out_code_addr.m"
            {
#line 214 "llds_out_code_addr.m"
              mercury__io__write_string_3_p_0((MR_String) "MR_declare_entry(MR_do_not_reached);\n");
#line 214 "llds_out_code_addr.m"
              return;
            }
#line 213 "llds_out_code_addr.m"
          }
#line 164 "llds_out_code_addr.m"
        else
#line 164 "llds_out_code_addr.m"
          if ((ll_backend__llds_out__llds_out_code_addr__CodeAddr_6 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 1)))))
#line 176 "llds_out_code_addr.m"
            {
#line 176 "llds_out_code_addr.m"
              MR_Word ll_backend__llds_out__llds_out_code_addr__UseMacro_11 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_code_addr__Info_5, (MR_Integer) 6)))) >> (MR_Integer) 12)) & (MR_Integer) 1);
#line 177 "llds_out_code_addr.m"
              MR_Word ll_backend__llds_out__llds_out_code_addr__V_45_45 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_code_addr__Info_5, (MR_Integer) 0)));
#line 177 "llds_out_code_addr.m"
              MR_String ll_backend__llds_out__llds_out_code_addr__V_46_46 = ((MR_String) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_code_addr__Info_5, (MR_Integer) 1)));
#line 177 "llds_out_code_addr.m"
              MR_Word ll_backend__llds_out__llds_out_code_addr__V_47_47 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_code_addr__Info_5, (MR_Integer) 2)));
#line 177 "llds_out_code_addr.m"
              MR_Word ll_backend__llds_out__llds_out_code_addr__V_48_48 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_code_addr__Info_5, (MR_Integer) 3)));
#line 177 "llds_out_code_addr.m"
              MR_Word ll_backend__llds_out__llds_out_code_addr__V_49_49 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_code_addr__Info_5, (MR_Integer) 4)));
#line 177 "llds_out_code_addr.m"
              MR_Word ll_backend__llds_out__llds_out_code_addr__V_50_50 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_code_addr__Info_5, (MR_Integer) 5)));
#line 177 "llds_out_code_addr.m"
              MR_Word ll_backend__llds_out__llds_out_code_addr__V_51_51 = ((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_code_addr__Info_5, (MR_Integer) 6)))) & (MR_Integer) 1);
#line 177 "llds_out_code_addr.m"
              MR_Word ll_backend__llds_out__llds_out_code_addr__V_52_52 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_code_addr__Info_5, (MR_Integer) 6)))) >> (MR_Integer) 1)) & (MR_Integer) 1);
#line 177 "llds_out_code_addr.m"
              MR_Word ll_backend__llds_out__llds_out_code_addr__V_53_53 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_code_addr__Info_5, (MR_Integer) 6)))) >> (MR_Integer) 2)) & (MR_Integer) 1);
#line 177 "llds_out_code_addr.m"
              MR_Word ll_backend__llds_out__llds_out_code_addr__V_54_54 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_code_addr__Info_5, (MR_Integer) 6)))) >> (MR_Integer) 3)) & (MR_Integer) 1);
#line 177 "llds_out_code_addr.m"
              MR_Word ll_backend__llds_out__llds_out_code_addr__V_55_55 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_code_addr__Info_5, (MR_Integer) 6)))) >> (MR_Integer) 4)) & (MR_Integer) 1);
#line 177 "llds_out_code_addr.m"
              MR_Word ll_backend__llds_out__llds_out_code_addr__V_56_56 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_code_addr__Info_5, (MR_Integer) 6)))) >> (MR_Integer) 5)) & (MR_Integer) 1);
#line 177 "llds_out_code_addr.m"
              MR_Word ll_backend__llds_out__llds_out_code_addr__V_57_57 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_code_addr__Info_5, (MR_Integer) 6)))) >> (MR_Integer) 6)) & (MR_Integer) 1);
#line 177 "llds_out_code_addr.m"
              MR_Word ll_backend__llds_out__llds_out_code_addr__V_58_58 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_code_addr__Info_5, (MR_Integer) 6)))) >> (MR_Integer) 7)) & (MR_Integer) 1);
#line 177 "llds_out_code_addr.m"
              MR_Word ll_backend__llds_out__llds_out_code_addr__V_59_59 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_code_addr__Info_5, (MR_Integer) 6)))) >> (MR_Integer) 8)) & (MR_Integer) 1);
#line 177 "llds_out_code_addr.m"
              MR_Word ll_backend__llds_out__llds_out_code_addr__V_60_60 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_code_addr__Info_5, (MR_Integer) 6)))) >> (MR_Integer) 9)) & (MR_Integer) 1);
#line 177 "llds_out_code_addr.m"
              MR_Word ll_backend__llds_out__llds_out_code_addr__V_61_61 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_code_addr__Info_5, (MR_Integer) 6)))) >> (MR_Integer) 10)) & (MR_Integer) 1);
#line 177 "llds_out_code_addr.m"
              MR_Word ll_backend__llds_out__llds_out_code_addr__V_62_62 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_code_addr__Info_5, (MR_Integer) 6)))) >> (MR_Integer) 11)) & (MR_Integer) 1);
#line 177 "llds_out_code_addr.m"
              MR_Word ll_backend__llds_out__llds_out_code_addr__V_63_63 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_code_addr__Info_5, (MR_Integer) 6)))) >> (MR_Integer) 13)) & (MR_Integer) 7);
#line 177 "llds_out_code_addr.m"
              MR_Word ll_backend__llds_out__llds_out_code_addr__V_64_64 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_code_addr__Info_5, (MR_Integer) 7)));

#line 180 "llds_out_code_addr.m"
              if ((ll_backend__llds_out__llds_out_code_addr__UseMacro_11 == (MR_Integer) 0))
#line 181 "llds_out_code_addr.m"
                {
#line 182 "llds_out_code_addr.m"
                  {
#line 182 "llds_out_code_addr.m"
                    mercury__io__write_string_3_p_0((MR_String) "MR_declare_entry(MR_do_redo);\n");
#line 182 "llds_out_code_addr.m"
                    return;
                  }
#line 181 "llds_out_code_addr.m"
                }
#line 180 "llds_out_code_addr.m"
              else
#line 179 "llds_out_code_addr.m"
                {
#line 179 "llds_out_code_addr.m"
                }
#line 176 "llds_out_code_addr.m"
            }
#line 164 "llds_out_code_addr.m"
          else
#line 164 "llds_out_code_addr.m"
            if ((ll_backend__llds_out__llds_out_code_addr__CodeAddr_6 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 4)))))
#line 198 "llds_out_code_addr.m"
              {
#line 199 "llds_out_code_addr.m"
                {
#line 199 "llds_out_code_addr.m"
                  mercury__io__write_string_3_p_0((MR_String) "MR_declare_entry(MR_do_trace_redo_fail_deep);\n");
#line 199 "llds_out_code_addr.m"
                  return;
                }
#line 198 "llds_out_code_addr.m"
              }
#line 164 "llds_out_code_addr.m"
            else
#line 164 "llds_out_code_addr.m"
              if ((ll_backend__llds_out__llds_out_code_addr__CodeAddr_6 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 3)))))
#line 194 "llds_out_code_addr.m"
                {
#line 195 "llds_out_code_addr.m"
                  {
#line 195 "llds_out_code_addr.m"
                    mercury__io__write_string_3_p_0((MR_String) "MR_declare_entry(MR_do_trace_redo_fail_shallow);\n");
#line 195 "llds_out_code_addr.m"
                    return;
                  }
#line 194 "llds_out_code_addr.m"
                }
#line 164 "llds_out_code_addr.m"
              else
#line 164 "llds_out_code_addr.m"
                if (((MR_tag((MR_Word) ll_backend__llds_out__llds_out_code_addr__CodeAddr_6)) == (MR_mktag((MR_Integer) 2))))
#line 167 "llds_out_code_addr.m"
                  {
#line 167 "llds_out_code_addr.m"
                    MR_Word ll_backend__llds_out__llds_out_code_addr__ProcLabel_9 = ((MR_Word) (MR_hl_field(MR_mktag(2), ll_backend__llds_out__llds_out_code_addr__CodeAddr_6, (MR_Integer) 0)));

#line 168 "llds_out_code_addr.m"
                    {
#line 168 "llds_out_code_addr.m"
                      mercury__io__write_string_3_p_0((MR_String) "MR_decl_entry(");
                    }
#line 169 "llds_out_code_addr.m"
                    {
#line 169 "llds_out_code_addr.m"
                      backend_libs__name_mangle__output_proc_label_no_prefix_3_p_0(ll_backend__llds_out__llds_out_code_addr__ProcLabel_9);
                    }
#line 170 "llds_out_code_addr.m"
                    {
#line 170 "llds_out_code_addr.m"
                      mercury__io__write_string_3_p_0((MR_String) ");\n");
#line 170 "llds_out_code_addr.m"
                      return;
                    }
#line 167 "llds_out_code_addr.m"
                  }
#line 164 "llds_out_code_addr.m"
                else
#line 164 "llds_out_code_addr.m"
                  if (((MR_tag((MR_Word) ll_backend__llds_out__llds_out_code_addr__CodeAddr_6)) == (MR_mktag((MR_Integer) 1))))
#line 164 "llds_out_code_addr.m"
                    {
#line 164 "llds_out_code_addr.m"
                      MR_Word ll_backend__llds_out__llds_out_code_addr__Label_8 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__llds_out__llds_out_code_addr__CodeAddr_6, (MR_Integer) 0)));

#line 165 "llds_out_code_addr.m"
                      {
#line 165 "llds_out_code_addr.m"
                        ll_backend__llds_out__llds_out_code_addr__output_label_as_code_addr_decls_3_p_0(ll_backend__llds_out__llds_out_code_addr__Label_8);
#line 165 "llds_out_code_addr.m"
                        return;
                      }
#line 164 "llds_out_code_addr.m"
                    }
#line 164 "llds_out_code_addr.m"
                  else
#line 164 "llds_out_code_addr.m"
                    if (((((MR_tag((MR_Word) ll_backend__llds_out__llds_out_code_addr__CodeAddr_6)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__llds_out__llds_out_code_addr__CodeAddr_6, (MR_Integer) 0)))) == (MR_Integer) 2))))
#line 207 "llds_out_code_addr.m"
                      {
#line 207 "llds_out_code_addr.m"
                        MR_String ll_backend__llds_out__llds_out_code_addr__V_19_19;
#line 207 "llds_out_code_addr.m"
                        MR_Word ll_backend__llds_out__llds_out_code_addr__Variant_44 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__llds_out__llds_out_code_addr__CodeAddr_6, (MR_Integer) 1)));

#line 208 "llds_out_code_addr.m"
                        {
#line 208 "llds_out_code_addr.m"
                          mercury__io__write_string_3_p_0((MR_String) "MR_declare_entry(mercury__do_call_class_method_");
                        }
#line 238 "llds_out_code_addr.m"
                        if ((ll_backend__llds_out__llds_out_code_addr__Variant_44 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 239 "llds_out_code_addr.m"
                          ll_backend__llds_out__llds_out_code_addr__V_19_19 = (MR_String) "compact";
#line 238 "llds_out_code_addr.m"
                        else
#line 241 "llds_out_code_addr.m"
                          {
#line 241 "llds_out_code_addr.m"
                            MR_Integer ll_backend__llds_out__llds_out_code_addr__Num_87 = ((MR_Integer) (MR_hl_field(MR_mktag(1), ll_backend__llds_out__llds_out_code_addr__Variant_44, (MR_Integer) 0)));

#line 242 "llds_out_code_addr.m"
                            {
#line 242 "llds_out_code_addr.m"
                              ll_backend__llds_out__llds_out_code_addr__V_19_19 = mercury__string__int_to_string_1_f_0(ll_backend__llds_out__llds_out_code_addr__Num_87);
                            }
#line 241 "llds_out_code_addr.m"
                          }
#line 210 "llds_out_code_addr.m"
                        {
#line 210 "llds_out_code_addr.m"
                          mercury__io__write_string_3_p_0(ll_backend__llds_out__llds_out_code_addr__V_19_19);
                        }
#line 211 "llds_out_code_addr.m"
                        {
#line 211 "llds_out_code_addr.m"
                          mercury__io__write_string_3_p_0((MR_String) ");\n");
#line 211 "llds_out_code_addr.m"
                          return;
                        }
#line 207 "llds_out_code_addr.m"
                      }
#line 164 "llds_out_code_addr.m"
                    else
#line 164 "llds_out_code_addr.m"
                      if (((((MR_tag((MR_Word) ll_backend__llds_out__llds_out_code_addr__CodeAddr_6)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__llds_out__llds_out_code_addr__CodeAddr_6, (MR_Integer) 0)))) == (MR_Integer) 1))))
#line 202 "llds_out_code_addr.m"
                        {
#line 202 "llds_out_code_addr.m"
                          MR_Word ll_backend__llds_out__llds_out_code_addr__Variant_12 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__llds_out__llds_out_code_addr__CodeAddr_6, (MR_Integer) 1)));
#line 202 "llds_out_code_addr.m"
                          MR_String ll_backend__llds_out__llds_out_code_addr__V_25_25;

#line 203 "llds_out_code_addr.m"
                          {
#line 203 "llds_out_code_addr.m"
                            mercury__io__write_string_3_p_0((MR_String) "MR_declare_entry(mercury__do_call_closure_");
                          }
#line 238 "llds_out_code_addr.m"
                          if ((ll_backend__llds_out__llds_out_code_addr__Variant_12 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 239 "llds_out_code_addr.m"
                            ll_backend__llds_out__llds_out_code_addr__V_25_25 = (MR_String) "compact";
#line 238 "llds_out_code_addr.m"
                          else
#line 241 "llds_out_code_addr.m"
                            {
#line 241 "llds_out_code_addr.m"
                              MR_Integer ll_backend__llds_out__llds_out_code_addr__Num_90 = ((MR_Integer) (MR_hl_field(MR_mktag(1), ll_backend__llds_out__llds_out_code_addr__Variant_12, (MR_Integer) 0)));

#line 242 "llds_out_code_addr.m"
                              {
#line 242 "llds_out_code_addr.m"
                                ll_backend__llds_out__llds_out_code_addr__V_25_25 = mercury__string__int_to_string_1_f_0(ll_backend__llds_out__llds_out_code_addr__Num_90);
                              }
#line 241 "llds_out_code_addr.m"
                            }
#line 204 "llds_out_code_addr.m"
                          {
#line 204 "llds_out_code_addr.m"
                            mercury__io__write_string_3_p_0(ll_backend__llds_out__llds_out_code_addr__V_25_25);
                          }
#line 205 "llds_out_code_addr.m"
                          {
#line 205 "llds_out_code_addr.m"
                            mercury__io__write_string_3_p_0((MR_String) ");\n");
#line 205 "llds_out_code_addr.m"
                            return;
                          }
#line 202 "llds_out_code_addr.m"
                        }
#line 164 "llds_out_code_addr.m"
                      else
#line 173 "llds_out_code_addr.m"
                        {
#line 173 "llds_out_code_addr.m"
                        }
#line 164 "llds_out_code_addr.m"
  }
#line 159 "llds_out_code_addr.m"
}

#line 74 "llds_out_code_addr.m"
MR_Word MR_CALL 
ll_backend__llds_out__llds_out_code_addr__label_is_external_to_c_module_1_f_0(
#line 74 "llds_out_code_addr.m"
  MR_Word ll_backend__llds_out__llds_out_code_addr__HeadVar__1_1)
#line 74 "llds_out_code_addr.m"
{
#line 413 "llds_out_code_addr.m"
  {
#line 413 "llds_out_code_addr.m"
    MR_bool ll_backend__llds_out__llds_out_code_addr__succeeded;
#line 413 "llds_out_code_addr.m"
    MR_Word ll_backend__llds_out__llds_out_code_addr__HeadVar__2_2;

#line 413 "llds_out_code_addr.m"
    if (((MR_tag((MR_Word) ll_backend__llds_out__llds_out_code_addr__HeadVar__1_1)) == (MR_mktag((MR_Integer) 1))))
#line 413 "llds_out_code_addr.m"
      {
#line 413 "llds_out_code_addr.m"
        MR_Word ll_backend__llds_out__llds_out_code_addr__V_12_12 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__llds_out__llds_out_code_addr__HeadVar__1_1, (MR_Integer) 0)));
#line 413 "llds_out_code_addr.m"
        MR_Word ll_backend__llds_out__llds_out_code_addr__V_11_11 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__llds_out__llds_out_code_addr__HeadVar__1_1, (MR_Integer) 1)));

#line 413 "llds_out_code_addr.m"
        if ((ll_backend__llds_out__llds_out_code_addr__V_12_12 == (MR_Integer) 0))
#line 415 "llds_out_code_addr.m"
          ll_backend__llds_out__llds_out_code_addr__HeadVar__2_2 = (MR_Integer) 0;
#line 413 "llds_out_code_addr.m"
        else
#line 413 "llds_out_code_addr.m"
          if ((ll_backend__llds_out__llds_out_code_addr__V_12_12 == (MR_Integer) 2))
#line 413 "llds_out_code_addr.m"
            ll_backend__llds_out__llds_out_code_addr__HeadVar__2_2 = (MR_Integer) 1;
#line 413 "llds_out_code_addr.m"
          else
#line 414 "llds_out_code_addr.m"
            ll_backend__llds_out__llds_out_code_addr__HeadVar__2_2 = (MR_Integer) 1;
#line 413 "llds_out_code_addr.m"
      }
#line 413 "llds_out_code_addr.m"
    else
#line 416 "llds_out_code_addr.m"
      ll_backend__llds_out__llds_out_code_addr__HeadVar__2_2 = (MR_Integer) 0;
#line 413 "llds_out_code_addr.m"
    return ll_backend__llds_out__llds_out_code_addr__HeadVar__2_2;
#line 413 "llds_out_code_addr.m"
  }
#line 74 "llds_out_code_addr.m"
}

#line 71 "llds_out_code_addr.m"
void MR_CALL 
ll_backend__llds_out__llds_out_code_addr__code_addr_to_string_base_4_p_0(
#line 71 "llds_out_code_addr.m"
  MR_Word ll_backend__llds_out__llds_out_code_addr__CodeAddr_5,
#line 71 "llds_out_code_addr.m"
  MR_String * ll_backend__llds_out__llds_out_code_addr__BaseStr_6,
#line 71 "llds_out_code_addr.m"
  MR_Word * ll_backend__llds_out__llds_out_code_addr__NeedsPrefix_7,
#line 71 "llds_out_code_addr.m"
  MR_Word * ll_backend__llds_out__llds_out_code_addr__Wrapper_8)
#line 71 "llds_out_code_addr.m"
{
#line 331 "llds_out_code_addr.m"
  {
#line 331 "llds_out_code_addr.m"
    MR_bool ll_backend__llds_out__llds_out_code_addr__succeeded;

#line 331 "llds_out_code_addr.m"
    if ((ll_backend__llds_out__llds_out_code_addr__CodeAddr_5 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 348 "llds_out_code_addr.m"
      {
#line 349 "llds_out_code_addr.m"
        *ll_backend__llds_out__llds_out_code_addr__BaseStr_6 = (MR_String) "MR_succip";
#line 350 "llds_out_code_addr.m"
        *ll_backend__llds_out__llds_out_code_addr__NeedsPrefix_7 = (MR_Integer) 0;
#line 351 "llds_out_code_addr.m"
        *ll_backend__llds_out__llds_out_code_addr__Wrapper_8 = (MR_Integer) 2;
#line 348 "llds_out_code_addr.m"
      }
#line 331 "llds_out_code_addr.m"
    else
#line 331 "llds_out_code_addr.m"
      if ((ll_backend__llds_out__llds_out_code_addr__CodeAddr_5 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 2)))))
#line 379 "llds_out_code_addr.m"
        {
#line 369 "llds_out_code_addr.m"
          *ll_backend__llds_out__llds_out_code_addr__BaseStr_6 = (MR_String) "MR_do_fail";
#line 380 "llds_out_code_addr.m"
          *ll_backend__llds_out__llds_out_code_addr__NeedsPrefix_7 = (MR_Integer) 0;
#line 381 "llds_out_code_addr.m"
          *ll_backend__llds_out__llds_out_code_addr__Wrapper_8 = (MR_Integer) 0;
#line 379 "llds_out_code_addr.m"
        }
#line 331 "llds_out_code_addr.m"
      else
#line 331 "llds_out_code_addr.m"
        if ((ll_backend__llds_out__llds_out_code_addr__CodeAddr_5 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 5)))))
#line 379 "llds_out_code_addr.m"
          {
#line 378 "llds_out_code_addr.m"
            *ll_backend__llds_out__llds_out_code_addr__BaseStr_6 = (MR_String) "MR_do_not_reached";
#line 380 "llds_out_code_addr.m"
            *ll_backend__llds_out__llds_out_code_addr__NeedsPrefix_7 = (MR_Integer) 0;
#line 381 "llds_out_code_addr.m"
            *ll_backend__llds_out__llds_out_code_addr__Wrapper_8 = (MR_Integer) 0;
#line 379 "llds_out_code_addr.m"
          }
#line 331 "llds_out_code_addr.m"
        else
#line 331 "llds_out_code_addr.m"
          if ((ll_backend__llds_out__llds_out_code_addr__CodeAddr_5 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 1)))))
#line 379 "llds_out_code_addr.m"
            {
#line 366 "llds_out_code_addr.m"
              *ll_backend__llds_out__llds_out_code_addr__BaseStr_6 = (MR_String) "MR_do_redo";
#line 380 "llds_out_code_addr.m"
              *ll_backend__llds_out__llds_out_code_addr__NeedsPrefix_7 = (MR_Integer) 0;
#line 381 "llds_out_code_addr.m"
              *ll_backend__llds_out__llds_out_code_addr__Wrapper_8 = (MR_Integer) 0;
#line 379 "llds_out_code_addr.m"
            }
#line 331 "llds_out_code_addr.m"
          else
#line 331 "llds_out_code_addr.m"
            if ((ll_backend__llds_out__llds_out_code_addr__CodeAddr_5 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 4)))))
#line 379 "llds_out_code_addr.m"
              {
#line 375 "llds_out_code_addr.m"
                *ll_backend__llds_out__llds_out_code_addr__BaseStr_6 = (MR_String) "MR_do_trace_redo_fail_deep";
#line 380 "llds_out_code_addr.m"
                *ll_backend__llds_out__llds_out_code_addr__NeedsPrefix_7 = (MR_Integer) 0;
#line 381 "llds_out_code_addr.m"
                *ll_backend__llds_out__llds_out_code_addr__Wrapper_8 = (MR_Integer) 0;
#line 379 "llds_out_code_addr.m"
              }
#line 331 "llds_out_code_addr.m"
            else
#line 331 "llds_out_code_addr.m"
              if ((ll_backend__llds_out__llds_out_code_addr__CodeAddr_5 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 3)))))
#line 379 "llds_out_code_addr.m"
                {
#line 372 "llds_out_code_addr.m"
                  *ll_backend__llds_out__llds_out_code_addr__BaseStr_6 = (MR_String) "MR_do_trace_redo_fail_shallow";
#line 380 "llds_out_code_addr.m"
                  *ll_backend__llds_out__llds_out_code_addr__NeedsPrefix_7 = (MR_Integer) 0;
#line 381 "llds_out_code_addr.m"
                  *ll_backend__llds_out__llds_out_code_addr__Wrapper_8 = (MR_Integer) 0;
#line 379 "llds_out_code_addr.m"
                }
#line 331 "llds_out_code_addr.m"
              else
#line 331 "llds_out_code_addr.m"
                if (((MR_tag((MR_Word) ll_backend__llds_out__llds_out_code_addr__CodeAddr_5)) == (MR_mktag((MR_Integer) 2))))
#line 343 "llds_out_code_addr.m"
                  {
#line 343 "llds_out_code_addr.m"
                    MR_Word ll_backend__llds_out__llds_out_code_addr__ProcLabel_11 = ((MR_Word) (MR_hl_field(MR_mktag(2), ll_backend__llds_out__llds_out_code_addr__CodeAddr_5, (MR_Integer) 0)));

#line 344 "llds_out_code_addr.m"
                    {
#line 344 "llds_out_code_addr.m"
                      *ll_backend__llds_out__llds_out_code_addr__BaseStr_6 = backend_libs__name_mangle__proc_label_to_c_string_2_f_0(ll_backend__llds_out__llds_out_code_addr__ProcLabel_11, (MR_Integer) 0);
                    }
#line 345 "llds_out_code_addr.m"
                    *ll_backend__llds_out__llds_out_code_addr__NeedsPrefix_7 = (MR_Integer) 1;
#line 346 "llds_out_code_addr.m"
                    *ll_backend__llds_out__llds_out_code_addr__Wrapper_8 = (MR_Integer) 0;
#line 343 "llds_out_code_addr.m"
                  }
#line 331 "llds_out_code_addr.m"
                else
#line 331 "llds_out_code_addr.m"
                  if (((MR_tag((MR_Word) ll_backend__llds_out__llds_out_code_addr__CodeAddr_5)) == (MR_mktag((MR_Integer) 1))))
#line 331 "llds_out_code_addr.m"
                    {
#line 331 "llds_out_code_addr.m"
                      MR_Word ll_backend__llds_out__llds_out_code_addr__Label_9 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__llds_out__llds_out_code_addr__CodeAddr_5, (MR_Integer) 0)));

#line 332 "llds_out_code_addr.m"
                      {
#line 332 "llds_out_code_addr.m"
                        *ll_backend__llds_out__llds_out_code_addr__BaseStr_6 = ll_backend__llds_out__llds_out_code_addr__label_to_c_string_2_f_0(ll_backend__llds_out__llds_out_code_addr__Label_9, (MR_Integer) 0);
                      }
#line 333 "llds_out_code_addr.m"
                      *ll_backend__llds_out__llds_out_code_addr__NeedsPrefix_7 = (MR_Integer) 1;
#line 1005 "ll_backend.llds_out.llds_out_code_addr.c"
                      if (((MR_tag((MR_Word) ll_backend__llds_out__llds_out_code_addr__Label_9)) == (MR_mktag((MR_Integer) 1))))
#line 1007 "ll_backend.llds_out.llds_out_code_addr.c"
                        {
#line 1009 "ll_backend.llds_out.llds_out_code_addr.c"
                          MR_Word ll_backend__llds_out__llds_out_code_addr__V_30_30 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__llds_out__llds_out_code_addr__Label_9, (MR_Integer) 0)));
#line 413 "llds_out_code_addr.m"
                          MR_Word ll_backend__llds_out__llds_out_code_addr__V_29_29 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__llds_out__llds_out_code_addr__Label_9, (MR_Integer) 1)));

#line 1014 "ll_backend.llds_out.llds_out_code_addr.c"
                          if ((ll_backend__llds_out__llds_out_code_addr__V_30_30 == (MR_Integer) 0))
#line 340 "llds_out_code_addr.m"
                            *ll_backend__llds_out__llds_out_code_addr__Wrapper_8 = (MR_Integer) 1;
#line 1018 "ll_backend.llds_out.llds_out_code_addr.c"
                          else
#line 1020 "ll_backend.llds_out.llds_out_code_addr.c"
                            if ((ll_backend__llds_out__llds_out_code_addr__V_30_30 == (MR_Integer) 2))
#line 337 "llds_out_code_addr.m"
                              *ll_backend__llds_out__llds_out_code_addr__Wrapper_8 = (MR_Integer) 0;
#line 1024 "ll_backend.llds_out.llds_out_code_addr.c"
                            else
#line 337 "llds_out_code_addr.m"
                              *ll_backend__llds_out__llds_out_code_addr__Wrapper_8 = (MR_Integer) 0;
#line 1028 "ll_backend.llds_out.llds_out_code_addr.c"
                        }
#line 1030 "ll_backend.llds_out.llds_out_code_addr.c"
                      else
#line 340 "llds_out_code_addr.m"
                        *ll_backend__llds_out__llds_out_code_addr__Wrapper_8 = (MR_Integer) 1;
#line 331 "llds_out_code_addr.m"
                    }
#line 331 "llds_out_code_addr.m"
                  else
#line 331 "llds_out_code_addr.m"
                    if (((((MR_tag((MR_Word) ll_backend__llds_out__llds_out_code_addr__CodeAddr_5)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__llds_out__llds_out_code_addr__CodeAddr_5, (MR_Integer) 0)))) == (MR_Integer) 2))))
#line 389 "llds_out_code_addr.m"
                      {
#line 389 "llds_out_code_addr.m"
                        MR_String ll_backend__llds_out__llds_out_code_addr__V_15_15;
#line 389 "llds_out_code_addr.m"
                        MR_Word ll_backend__llds_out__llds_out_code_addr__Variant_20 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__llds_out__llds_out_code_addr__CodeAddr_5, (MR_Integer) 1)));

#line 238 "llds_out_code_addr.m"
                        if ((ll_backend__llds_out__llds_out_code_addr__Variant_20 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 239 "llds_out_code_addr.m"
                          ll_backend__llds_out__llds_out_code_addr__V_15_15 = (MR_String) "compact";
#line 238 "llds_out_code_addr.m"
                        else
#line 241 "llds_out_code_addr.m"
                          {
#line 241 "llds_out_code_addr.m"
                            MR_Integer ll_backend__llds_out__llds_out_code_addr__Num_33 = ((MR_Integer) (MR_hl_field(MR_mktag(1), ll_backend__llds_out__llds_out_code_addr__Variant_20, (MR_Integer) 0)));

#line 242 "llds_out_code_addr.m"
                            {
#line 242 "llds_out_code_addr.m"
                              ll_backend__llds_out__llds_out_code_addr__V_15_15 = mercury__string__int_to_string_1_f_0(ll_backend__llds_out__llds_out_code_addr__Num_33);
                            }
#line 241 "llds_out_code_addr.m"
                          }
#line 390 "llds_out_code_addr.m"
                        {
#line 390 "llds_out_code_addr.m"
                          *ll_backend__llds_out__llds_out_code_addr__BaseStr_6 = mercury__string__f_43_43_2_f_0((MR_String) "mercury__do_call_class_method_", ll_backend__llds_out__llds_out_code_addr__V_15_15);
                        }
#line 392 "llds_out_code_addr.m"
                        *ll_backend__llds_out__llds_out_code_addr__NeedsPrefix_7 = (MR_Integer) 0;
#line 393 "llds_out_code_addr.m"
                        *ll_backend__llds_out__llds_out_code_addr__Wrapper_8 = (MR_Integer) 0;
#line 389 "llds_out_code_addr.m"
                      }
#line 331 "llds_out_code_addr.m"
                    else
#line 331 "llds_out_code_addr.m"
                      if (((((MR_tag((MR_Word) ll_backend__llds_out__llds_out_code_addr__CodeAddr_5)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__llds_out__llds_out_code_addr__CodeAddr_5, (MR_Integer) 0)))) == (MR_Integer) 1))))
#line 383 "llds_out_code_addr.m"
                        {
#line 383 "llds_out_code_addr.m"
                          MR_Word ll_backend__llds_out__llds_out_code_addr__Variant_13 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__llds_out__llds_out_code_addr__CodeAddr_5, (MR_Integer) 1)));
#line 383 "llds_out_code_addr.m"
                          MR_String ll_backend__llds_out__llds_out_code_addr__V_17_17;

#line 238 "llds_out_code_addr.m"
                          if ((ll_backend__llds_out__llds_out_code_addr__Variant_13 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 239 "llds_out_code_addr.m"
                            ll_backend__llds_out__llds_out_code_addr__V_17_17 = (MR_String) "compact";
#line 238 "llds_out_code_addr.m"
                          else
#line 241 "llds_out_code_addr.m"
                            {
#line 241 "llds_out_code_addr.m"
                              MR_Integer ll_backend__llds_out__llds_out_code_addr__Num_36 = ((MR_Integer) (MR_hl_field(MR_mktag(1), ll_backend__llds_out__llds_out_code_addr__Variant_13, (MR_Integer) 0)));

#line 242 "llds_out_code_addr.m"
                              {
#line 242 "llds_out_code_addr.m"
                                ll_backend__llds_out__llds_out_code_addr__V_17_17 = mercury__string__int_to_string_1_f_0(ll_backend__llds_out__llds_out_code_addr__Num_36);
                              }
#line 241 "llds_out_code_addr.m"
                            }
#line 384 "llds_out_code_addr.m"
                          {
#line 384 "llds_out_code_addr.m"
                            *ll_backend__llds_out__llds_out_code_addr__BaseStr_6 = mercury__string__f_43_43_2_f_0((MR_String) "mercury__do_call_closure_", ll_backend__llds_out__llds_out_code_addr__V_17_17);
                          }
#line 386 "llds_out_code_addr.m"
                          *ll_backend__llds_out__llds_out_code_addr__NeedsPrefix_7 = (MR_Integer) 0;
#line 387 "llds_out_code_addr.m"
                          *ll_backend__llds_out__llds_out_code_addr__Wrapper_8 = (MR_Integer) 0;
#line 383 "llds_out_code_addr.m"
                        }
#line 331 "llds_out_code_addr.m"
                      else
#line 353 "llds_out_code_addr.m"
                        {
#line 353 "llds_out_code_addr.m"
                          MR_Word ll_backend__llds_out__llds_out_code_addr__Last_12 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__llds_out__llds_out_code_addr__CodeAddr_5, (MR_Integer) 1)));

#line 357 "llds_out_code_addr.m"
                          if ((ll_backend__llds_out__llds_out_code_addr__Last_12 == (MR_Integer) 0))
#line 356 "llds_out_code_addr.m"
                            *ll_backend__llds_out__llds_out_code_addr__BaseStr_6 = (MR_String) "MR_do_succeed";
#line 357 "llds_out_code_addr.m"
                          else
#line 359 "llds_out_code_addr.m"
                            *ll_backend__llds_out__llds_out_code_addr__BaseStr_6 = (MR_String) "MR_do_last_succeed";
#line 361 "llds_out_code_addr.m"
                          *ll_backend__llds_out__llds_out_code_addr__NeedsPrefix_7 = (MR_Integer) 0;
#line 362 "llds_out_code_addr.m"
                          *ll_backend__llds_out__llds_out_code_addr__Wrapper_8 = (MR_Integer) 0;
#line 353 "llds_out_code_addr.m"
                        }
#line 331 "llds_out_code_addr.m"
  }
#line 71 "llds_out_code_addr.m"
}

#line 69 "llds_out_code_addr.m"
void MR_CALL 
ll_backend__llds_out__llds_out_code_addr__output_label_as_code_addr_3_p_0(
#line 69 "llds_out_code_addr.m"
  MR_Word ll_backend__llds_out__llds_out_code_addr__Label_4)
#line 69 "llds_out_code_addr.m"
{
#line 396 "llds_out_code_addr.m"
  {
#line 396 "llds_out_code_addr.m"
    MR_bool ll_backend__llds_out__llds_out_code_addr__succeeded;
#line 396 "llds_out_code_addr.m"
    MR_String ll_backend__llds_out__llds_out_code_addr__Str_6;
#line 396 "llds_out_code_addr.m"
    MR_String ll_backend__llds_out__llds_out_code_addr__LabelStr_12;

#line 403 "llds_out_code_addr.m"
    {
#line 403 "llds_out_code_addr.m"
      ll_backend__llds_out__llds_out_code_addr__LabelStr_12 = ll_backend__llds_out__llds_out_code_addr__label_to_c_string_2_f_0(ll_backend__llds_out__llds_out_code_addr__Label_4, (MR_Integer) 0);
    }
#line 1163 "ll_backend.llds_out.llds_out_code_addr.c"
    if (((MR_tag((MR_Word) ll_backend__llds_out__llds_out_code_addr__Label_4)) == (MR_mktag((MR_Integer) 1))))
#line 1165 "ll_backend.llds_out.llds_out_code_addr.c"
      {
#line 1167 "ll_backend.llds_out.llds_out_code_addr.c"
        MR_Word ll_backend__llds_out__llds_out_code_addr__V_30_30 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__llds_out__llds_out_code_addr__Label_4, (MR_Integer) 0)));
#line 413 "llds_out_code_addr.m"
        MR_Word ll_backend__llds_out__llds_out_code_addr__V_29_29 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__llds_out__llds_out_code_addr__Label_4, (MR_Integer) 1)));

#line 1172 "ll_backend.llds_out.llds_out_code_addr.c"
        if ((ll_backend__llds_out__llds_out_code_addr__V_30_30 == (MR_Integer) 0))
#line 1174 "ll_backend.llds_out.llds_out_code_addr.c"
          {
#line 1176 "ll_backend.llds_out.llds_out_code_addr.c"
            MR_String ll_backend__llds_out__llds_out_code_addr__V_16_16;

#line 410 "llds_out_code_addr.m"
            {
#line 410 "llds_out_code_addr.m"
              ll_backend__llds_out__llds_out_code_addr__V_16_16 = mercury__string__f_43_43_2_f_0(ll_backend__llds_out__llds_out_code_addr__LabelStr_12, (MR_String) ")");
            }
#line 410 "llds_out_code_addr.m"
            {
#line 410 "llds_out_code_addr.m"
              ll_backend__llds_out__llds_out_code_addr__Str_6 = mercury__string__f_43_43_2_f_0((MR_String) "MR_LABEL_AP(", ll_backend__llds_out__llds_out_code_addr__V_16_16);
            }
#line 1189 "ll_backend.llds_out.llds_out_code_addr.c"
          }
#line 1191 "ll_backend.llds_out.llds_out_code_addr.c"
        else
#line 1193 "ll_backend.llds_out.llds_out_code_addr.c"
          if ((ll_backend__llds_out__llds_out_code_addr__V_30_30 == (MR_Integer) 2))
#line 1195 "ll_backend.llds_out.llds_out_code_addr.c"
            {
#line 1197 "ll_backend.llds_out.llds_out_code_addr.c"
              MR_String ll_backend__llds_out__llds_out_code_addr__V_19_19;

#line 407 "llds_out_code_addr.m"
              {
#line 407 "llds_out_code_addr.m"
                ll_backend__llds_out__llds_out_code_addr__V_19_19 = mercury__string__f_43_43_2_f_0(ll_backend__llds_out__llds_out_code_addr__LabelStr_12, (MR_String) ")");
              }
#line 407 "llds_out_code_addr.m"
              {
#line 407 "llds_out_code_addr.m"
                ll_backend__llds_out__llds_out_code_addr__Str_6 = mercury__string__f_43_43_2_f_0((MR_String) "MR_ENTRY_AP(", ll_backend__llds_out__llds_out_code_addr__V_19_19);
              }
#line 1210 "ll_backend.llds_out.llds_out_code_addr.c"
            }
#line 1212 "ll_backend.llds_out.llds_out_code_addr.c"
          else
#line 1214 "ll_backend.llds_out.llds_out_code_addr.c"
            {
#line 1216 "ll_backend.llds_out.llds_out_code_addr.c"
              MR_String ll_backend__llds_out__llds_out_code_addr__V_41_41;

#line 407 "llds_out_code_addr.m"
              {
#line 407 "llds_out_code_addr.m"
                ll_backend__llds_out__llds_out_code_addr__V_41_41 = mercury__string__f_43_43_2_f_0(ll_backend__llds_out__llds_out_code_addr__LabelStr_12, (MR_String) ")");
              }
#line 407 "llds_out_code_addr.m"
              {
#line 407 "llds_out_code_addr.m"
                ll_backend__llds_out__llds_out_code_addr__Str_6 = mercury__string__f_43_43_2_f_0((MR_String) "MR_ENTRY_AP(", ll_backend__llds_out__llds_out_code_addr__V_41_41);
              }
#line 1229 "ll_backend.llds_out.llds_out_code_addr.c"
            }
#line 1231 "ll_backend.llds_out.llds_out_code_addr.c"
      }
#line 1233 "ll_backend.llds_out.llds_out_code_addr.c"
    else
#line 1235 "ll_backend.llds_out.llds_out_code_addr.c"
      {
#line 1237 "ll_backend.llds_out.llds_out_code_addr.c"
        MR_String ll_backend__llds_out__llds_out_code_addr__V_34_34;

#line 410 "llds_out_code_addr.m"
        {
#line 410 "llds_out_code_addr.m"
          ll_backend__llds_out__llds_out_code_addr__V_34_34 = mercury__string__f_43_43_2_f_0(ll_backend__llds_out__llds_out_code_addr__LabelStr_12, (MR_String) ")");
        }
#line 410 "llds_out_code_addr.m"
        {
#line 410 "llds_out_code_addr.m"
          ll_backend__llds_out__llds_out_code_addr__Str_6 = mercury__string__f_43_43_2_f_0((MR_String) "MR_LABEL_AP(", ll_backend__llds_out__llds_out_code_addr__V_34_34);
        }
#line 1250 "ll_backend.llds_out.llds_out_code_addr.c"
      }
#line 398 "llds_out_code_addr.m"
    {
#line 398 "llds_out_code_addr.m"
      mercury__io__write_string_3_p_0(ll_backend__llds_out__llds_out_code_addr__Str_6);
#line 398 "llds_out_code_addr.m"
      return;
    }
#line 396 "llds_out_code_addr.m"
  }
#line 69 "llds_out_code_addr.m"
}

#line 66 "llds_out_code_addr.m"
void MR_CALL 
ll_backend__llds_out__llds_out_code_addr__output_code_addr_from_pieces_5_p_0(
#line 66 "llds_out_code_addr.m"
  MR_String ll_backend__llds_out__llds_out_code_addr__BaseStr_6,
#line 66 "llds_out_code_addr.m"
  MR_Word ll_backend__llds_out__llds_out_code_addr__NeedsPrefix_7,
#line 66 "llds_out_code_addr.m"
  MR_Word ll_backend__llds_out__llds_out_code_addr__Wrapper_8)
#line 66 "llds_out_code_addr.m"
{
#line 291 "llds_out_code_addr.m"
  {
#line 291 "llds_out_code_addr.m"
    MR_bool ll_backend__llds_out__llds_out_code_addr__succeeded;

#line 291 "llds_out_code_addr.m"
    if ((ll_backend__llds_out__llds_out_code_addr__NeedsPrefix_7 == (MR_Integer) 0))
#line 291 "llds_out_code_addr.m"
      if ((ll_backend__llds_out__llds_out_code_addr__Wrapper_8 == (MR_Integer) 0))
#line 300 "llds_out_code_addr.m"
        {
#line 309 "llds_out_code_addr.m"
          {
#line 309 "llds_out_code_addr.m"
            mercury__io__write_string_3_p_0((MR_String) "MR_ENTRY(");
          }
#line 310 "llds_out_code_addr.m"
          {
#line 310 "llds_out_code_addr.m"
            mercury__io__write_string_3_p_0(ll_backend__llds_out__llds_out_code_addr__BaseStr_6);
          }
#line 311 "llds_out_code_addr.m"
          {
#line 311 "llds_out_code_addr.m"
            mercury__io__write_string_3_p_0((MR_String) ")");
#line 311 "llds_out_code_addr.m"
            return;
          }
#line 300 "llds_out_code_addr.m"
        }
#line 291 "llds_out_code_addr.m"
      else
#line 291 "llds_out_code_addr.m"
        if ((ll_backend__llds_out__llds_out_code_addr__Wrapper_8 == (MR_Integer) 1))
#line 314 "llds_out_code_addr.m"
          {
#line 323 "llds_out_code_addr.m"
            {
#line 323 "llds_out_code_addr.m"
              mercury__io__write_string_3_p_0((MR_String) "MR_LABEL(");
            }
#line 324 "llds_out_code_addr.m"
            {
#line 324 "llds_out_code_addr.m"
              mercury__io__write_string_3_p_0(ll_backend__llds_out__llds_out_code_addr__BaseStr_6);
            }
#line 325 "llds_out_code_addr.m"
            {
#line 325 "llds_out_code_addr.m"
              mercury__io__write_string_3_p_0((MR_String) ")");
#line 325 "llds_out_code_addr.m"
              return;
            }
#line 314 "llds_out_code_addr.m"
          }
#line 291 "llds_out_code_addr.m"
        else
#line 298 "llds_out_code_addr.m"
          {
#line 298 "llds_out_code_addr.m"
            mercury__io__write_string_3_p_0(ll_backend__llds_out__llds_out_code_addr__BaseStr_6);
#line 298 "llds_out_code_addr.m"
            return;
          }
#line 291 "llds_out_code_addr.m"
    else
#line 291 "llds_out_code_addr.m"
      if ((ll_backend__llds_out__llds_out_code_addr__Wrapper_8 == (MR_Integer) 0))
#line 300 "llds_out_code_addr.m"
        {
#line 304 "llds_out_code_addr.m"
          {
#line 304 "llds_out_code_addr.m"
            mercury__io__write_string_3_p_0((MR_String) "MR_ENTRY_AP(");
          }
#line 305 "llds_out_code_addr.m"
          {
#line 305 "llds_out_code_addr.m"
            mercury__io__write_string_3_p_0(ll_backend__llds_out__llds_out_code_addr__BaseStr_6);
          }
#line 306 "llds_out_code_addr.m"
          {
#line 306 "llds_out_code_addr.m"
            mercury__io__write_string_3_p_0((MR_String) ")");
#line 306 "llds_out_code_addr.m"
            return;
          }
#line 300 "llds_out_code_addr.m"
        }
#line 291 "llds_out_code_addr.m"
      else
#line 291 "llds_out_code_addr.m"
        if ((ll_backend__llds_out__llds_out_code_addr__Wrapper_8 == (MR_Integer) 1))
#line 314 "llds_out_code_addr.m"
          {
#line 318 "llds_out_code_addr.m"
            {
#line 318 "llds_out_code_addr.m"
              mercury__io__write_string_3_p_0((MR_String) "MR_LABEL_AP(");
            }
#line 319 "llds_out_code_addr.m"
            {
#line 319 "llds_out_code_addr.m"
              mercury__io__write_string_3_p_0(ll_backend__llds_out__llds_out_code_addr__BaseStr_6);
            }
#line 320 "llds_out_code_addr.m"
            {
#line 320 "llds_out_code_addr.m"
              mercury__io__write_string_3_p_0((MR_String) ")");
#line 320 "llds_out_code_addr.m"
              return;
            }
#line 314 "llds_out_code_addr.m"
          }
#line 291 "llds_out_code_addr.m"
        else
#line 291 "llds_out_code_addr.m"
          {
#line 291 "llds_out_code_addr.m"
            MR_String ll_backend__llds_out__llds_out_code_addr__V_32_32;

#line 294 "llds_out_code_addr.m"
            {
#line 294 "llds_out_code_addr.m"
              ll_backend__llds_out__llds_out_code_addr__V_32_32 = backend_libs__name_mangle__mercury_label_prefix_0_f_0();
            }
#line 294 "llds_out_code_addr.m"
            {
#line 294 "llds_out_code_addr.m"
              mercury__io__write_string_3_p_0(ll_backend__llds_out__llds_out_code_addr__V_32_32);
            }
#line 298 "llds_out_code_addr.m"
            {
#line 298 "llds_out_code_addr.m"
              mercury__io__write_string_3_p_0(ll_backend__llds_out__llds_out_code_addr__BaseStr_6);
#line 298 "llds_out_code_addr.m"
              return;
            }
#line 291 "llds_out_code_addr.m"
          }
#line 291 "llds_out_code_addr.m"
  }
#line 66 "llds_out_code_addr.m"
}

#line 59 "llds_out_code_addr.m"
void MR_CALL 
ll_backend__llds_out__llds_out_code_addr__output_code_addr_3_p_0(
#line 59 "llds_out_code_addr.m"
  MR_Word ll_backend__llds_out__llds_out_code_addr__CodeAddr_4)
#line 59 "llds_out_code_addr.m"
{
#line 285 "llds_out_code_addr.m"
  {
#line 285 "llds_out_code_addr.m"
    MR_bool ll_backend__llds_out__llds_out_code_addr__succeeded;
#line 285 "llds_out_code_addr.m"
    MR_String ll_backend__llds_out__llds_out_code_addr__BaseStr_6;
#line 285 "llds_out_code_addr.m"
    MR_Word ll_backend__llds_out__llds_out_code_addr__NeedsPrefix_7;
#line 285 "llds_out_code_addr.m"
    MR_Word ll_backend__llds_out__llds_out_code_addr__Wrapper_8;

#line 286 "llds_out_code_addr.m"
    {
#line 286 "llds_out_code_addr.m"
      ll_backend__llds_out__llds_out_code_addr__code_addr_to_string_base_4_p_0(ll_backend__llds_out__llds_out_code_addr__CodeAddr_4, &ll_backend__llds_out__llds_out_code_addr__BaseStr_6, &ll_backend__llds_out__llds_out_code_addr__NeedsPrefix_7, &ll_backend__llds_out__llds_out_code_addr__Wrapper_8);
    }
#line 287 "llds_out_code_addr.m"
    {
#line 287 "llds_out_code_addr.m"
      ll_backend__llds_out__llds_out_code_addr__output_code_addr_from_pieces_5_p_0(ll_backend__llds_out__llds_out_code_addr__BaseStr_6, ll_backend__llds_out__llds_out_code_addr__NeedsPrefix_7, ll_backend__llds_out__llds_out_code_addr__Wrapper_8);
#line 287 "llds_out_code_addr.m"
      return;
    }
#line 285 "llds_out_code_addr.m"
  }
#line 59 "llds_out_code_addr.m"
}

#line 57 "llds_out_code_addr.m"
MR_String MR_CALL 
ll_backend__llds_out__llds_out_code_addr__label_to_c_string_2_f_0(
#line 57 "llds_out_code_addr.m"
  MR_Word ll_backend__llds_out__llds_out_code_addr__Label_4,
#line 57 "llds_out_code_addr.m"
  MR_Word ll_backend__llds_out__llds_out_code_addr__AddPrefix_5)
#line 57 "llds_out_code_addr.m"
{
#line 264 "llds_out_code_addr.m"
  {
#line 264 "llds_out_code_addr.m"
    MR_bool ll_backend__llds_out__llds_out_code_addr__succeeded;
#line 264 "llds_out_code_addr.m"
    MR_String ll_backend__llds_out__llds_out_code_addr__LabelStr_6;

#line 264 "llds_out_code_addr.m"
    if (((MR_tag((MR_Word) ll_backend__llds_out__llds_out_code_addr__Label_4)) == (MR_mktag((MR_Integer) 1))))
#line 264 "llds_out_code_addr.m"
      {
#line 264 "llds_out_code_addr.m"
        MR_Word ll_backend__llds_out__llds_out_code_addr__ProcLabel_8 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__llds_out__llds_out_code_addr__Label_4, (MR_Integer) 1)));
#line 264 "llds_out_code_addr.m"
        MR_Word ll_backend__llds_out__llds_out_code_addr__V_7_7 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__llds_out__llds_out_code_addr__Label_4, (MR_Integer) 0)));

#line 272 "llds_out_code_addr.m"
        {
#line 272 "llds_out_code_addr.m"
          return ll_backend__llds_out__llds_out_code_addr__LabelStr_6 = backend_libs__name_mangle__proc_label_to_c_string_2_f_0(ll_backend__llds_out__llds_out_code_addr__ProcLabel_8, ll_backend__llds_out__llds_out_code_addr__AddPrefix_5);
        }
#line 264 "llds_out_code_addr.m"
      }
#line 264 "llds_out_code_addr.m"
    else
#line 274 "llds_out_code_addr.m"
      {
#line 274 "llds_out_code_addr.m"
        MR_Integer ll_backend__llds_out__llds_out_code_addr__Num_9 = ((MR_Integer) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_code_addr__Label_4, (MR_Integer) 0)));
#line 274 "llds_out_code_addr.m"
        MR_String ll_backend__llds_out__llds_out_code_addr__ProcLabelStr_10;
#line 274 "llds_out_code_addr.m"
        MR_String ll_backend__llds_out__llds_out_code_addr__NumStr_11;
#line 274 "llds_out_code_addr.m"
        MR_String ll_backend__llds_out__llds_out_code_addr__V_12_12;
#line 274 "llds_out_code_addr.m"
        MR_Word ll_backend__llds_out__llds_out_code_addr__ProcLabel_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_code_addr__Label_4, (MR_Integer) 1)));

#line 275 "llds_out_code_addr.m"
        {
#line 275 "llds_out_code_addr.m"
          ll_backend__llds_out__llds_out_code_addr__ProcLabelStr_10 = backend_libs__name_mangle__proc_label_to_c_string_2_f_0(ll_backend__llds_out__llds_out_code_addr__ProcLabel_14, ll_backend__llds_out__llds_out_code_addr__AddPrefix_5);
        }
#line 276 "llds_out_code_addr.m"
        {
#line 276 "llds_out_code_addr.m"
          mercury__string__int_to_string_2_p_0(ll_backend__llds_out__llds_out_code_addr__Num_9, &ll_backend__llds_out__llds_out_code_addr__NumStr_11);
        }
#line 277 "llds_out_code_addr.m"
        {
#line 277 "llds_out_code_addr.m"
          ll_backend__llds_out__llds_out_code_addr__V_12_12 = mercury__string__f_43_43_2_f_0((MR_String) "_i", ll_backend__llds_out__llds_out_code_addr__NumStr_11);
        }
#line 277 "llds_out_code_addr.m"
        {
#line 277 "llds_out_code_addr.m"
          return ll_backend__llds_out__llds_out_code_addr__LabelStr_6 = mercury__string__f_43_43_2_f_0(ll_backend__llds_out__llds_out_code_addr__ProcLabelStr_10, ll_backend__llds_out__llds_out_code_addr__V_12_12);
        }
#line 274 "llds_out_code_addr.m"
      }
#line 264 "llds_out_code_addr.m"
    return ll_backend__llds_out__llds_out_code_addr__LabelStr_6;
#line 264 "llds_out_code_addr.m"
  }
#line 57 "llds_out_code_addr.m"
}

#line 52 "llds_out_code_addr.m"
void MR_CALL 
ll_backend__llds_out__llds_out_code_addr__output_label_maybe_prefix_4_p_0(
#line 52 "llds_out_code_addr.m"
  MR_Word ll_backend__llds_out__llds_out_code_addr__Label_5,
#line 52 "llds_out_code_addr.m"
  MR_Word ll_backend__llds_out__llds_out_code_addr__AddPrefix_6)
#line 52 "llds_out_code_addr.m"
{
#line 258 "llds_out_code_addr.m"
  {
#line 258 "llds_out_code_addr.m"
    MR_bool ll_backend__llds_out__llds_out_code_addr__succeeded;
#line 258 "llds_out_code_addr.m"
    MR_String ll_backend__llds_out__llds_out_code_addr__LabelStr_8;

#line 259 "llds_out_code_addr.m"
    {
#line 259 "llds_out_code_addr.m"
      ll_backend__llds_out__llds_out_code_addr__LabelStr_8 = ll_backend__llds_out__llds_out_code_addr__label_to_c_string_2_f_0(ll_backend__llds_out__llds_out_code_addr__Label_5, ll_backend__llds_out__llds_out_code_addr__AddPrefix_6);
    }
#line 260 "llds_out_code_addr.m"
    {
#line 260 "llds_out_code_addr.m"
      mercury__io__write_string_3_p_0(ll_backend__llds_out__llds_out_code_addr__LabelStr_8);
#line 260 "llds_out_code_addr.m"
      return;
    }
#line 258 "llds_out_code_addr.m"
  }
#line 52 "llds_out_code_addr.m"
}

#line 48 "llds_out_code_addr.m"
void MR_CALL 
ll_backend__llds_out__llds_out_code_addr__output_label_no_prefix_3_p_0(
#line 48 "llds_out_code_addr.m"
  MR_Word ll_backend__llds_out__llds_out_code_addr__Label_4)
#line 48 "llds_out_code_addr.m"
{
#line 254 "llds_out_code_addr.m"
  {
#line 254 "llds_out_code_addr.m"
    MR_bool ll_backend__llds_out__llds_out_code_addr__succeeded;
#line 254 "llds_out_code_addr.m"
    MR_String ll_backend__llds_out__llds_out_code_addr__LabelStr_6;

#line 255 "llds_out_code_addr.m"
    {
#line 255 "llds_out_code_addr.m"
      ll_backend__llds_out__llds_out_code_addr__LabelStr_6 = ll_backend__llds_out__llds_out_code_addr__label_to_c_string_2_f_0(ll_backend__llds_out__llds_out_code_addr__Label_4, (MR_Integer) 0);
    }
#line 256 "llds_out_code_addr.m"
    {
#line 256 "llds_out_code_addr.m"
      mercury__io__write_string_3_p_0(ll_backend__llds_out__llds_out_code_addr__LabelStr_6);
#line 256 "llds_out_code_addr.m"
      return;
    }
#line 254 "llds_out_code_addr.m"
  }
#line 48 "llds_out_code_addr.m"
}

#line 46 "llds_out_code_addr.m"
void MR_CALL 
ll_backend__llds_out__llds_out_code_addr__output_label_3_p_0(
#line 46 "llds_out_code_addr.m"
  MR_Word ll_backend__llds_out__llds_out_code_addr__Label_4)
#line 46 "llds_out_code_addr.m"
{
#line 250 "llds_out_code_addr.m"
  {
#line 250 "llds_out_code_addr.m"
    MR_bool ll_backend__llds_out__llds_out_code_addr__succeeded;
#line 250 "llds_out_code_addr.m"
    MR_String ll_backend__llds_out__llds_out_code_addr__LabelStr_6;

#line 251 "llds_out_code_addr.m"
    {
#line 251 "llds_out_code_addr.m"
      ll_backend__llds_out__llds_out_code_addr__LabelStr_6 = ll_backend__llds_out__llds_out_code_addr__label_to_c_string_2_f_0(ll_backend__llds_out__llds_out_code_addr__Label_4, (MR_Integer) 1);
    }
#line 252 "llds_out_code_addr.m"
    {
#line 252 "llds_out_code_addr.m"
      mercury__io__write_string_3_p_0(ll_backend__llds_out__llds_out_code_addr__LabelStr_6);
#line 252 "llds_out_code_addr.m"
      return;
    }
#line 250 "llds_out_code_addr.m"
  }
#line 46 "llds_out_code_addr.m"
}

#line 42 "llds_out_code_addr.m"
MR_String MR_CALL 
ll_backend__llds_out__llds_out_code_addr__ho_call_variant_to_string_1_f_0(
#line 42 "llds_out_code_addr.m"
  MR_Word ll_backend__llds_out__llds_out_code_addr__Variant_3)
#line 42 "llds_out_code_addr.m"
{
#line 238 "llds_out_code_addr.m"
  {
#line 238 "llds_out_code_addr.m"
    MR_bool ll_backend__llds_out__llds_out_code_addr__succeeded;
#line 238 "llds_out_code_addr.m"
    MR_String ll_backend__llds_out__llds_out_code_addr__Str_4;

#line 238 "llds_out_code_addr.m"
    if ((ll_backend__llds_out__llds_out_code_addr__Variant_3 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 239 "llds_out_code_addr.m"
      ll_backend__llds_out__llds_out_code_addr__Str_4 = (MR_String) "compact";
#line 238 "llds_out_code_addr.m"
    else
#line 241 "llds_out_code_addr.m"
      {
#line 241 "llds_out_code_addr.m"
        MR_Integer ll_backend__llds_out__llds_out_code_addr__Num_5 = ((MR_Integer) (MR_hl_field(MR_mktag(1), ll_backend__llds_out__llds_out_code_addr__Variant_3, (MR_Integer) 0)));

#line 242 "llds_out_code_addr.m"
        {
#line 242 "llds_out_code_addr.m"
          return ll_backend__llds_out__llds_out_code_addr__Str_4 = mercury__string__int_to_string_1_f_0(ll_backend__llds_out__llds_out_code_addr__Num_5);
        }
#line 241 "llds_out_code_addr.m"
      }
#line 238 "llds_out_code_addr.m"
    return ll_backend__llds_out__llds_out_code_addr__Str_4;
#line 238 "llds_out_code_addr.m"
  }
#line 42 "llds_out_code_addr.m"
}

#line 35 "llds_out_code_addr.m"
void MR_CALL 
ll_backend__llds_out__llds_out_code_addr__output_record_code_addr_decls_format_10_p_0(
#line 35 "llds_out_code_addr.m"
  MR_Word ll_backend__llds_out__llds_out_code_addr__Info_11,
#line 35 "llds_out_code_addr.m"
  MR_Word ll_backend__llds_out__llds_out_code_addr__CodeAddress_12,
#line 35 "llds_out_code_addr.m"
  MR_String ll_backend__llds_out__llds_out_code_addr__FirstIndent_13,
#line 35 "llds_out_code_addr.m"
  MR_String ll_backend__llds_out__llds_out_code_addr__LaterIndent_14,
#line 35 "llds_out_code_addr.m"
  MR_Integer ll_backend__llds_out__llds_out_code_addr__STATE_VARIABLE_N_0_19,
#line 35 "llds_out_code_addr.m"
  MR_Integer * ll_backend__llds_out__llds_out_code_addr__STATE_VARIABLE_N_20,
#line 35 "llds_out_code_addr.m"
  MR_Word ll_backend__llds_out__llds_out_code_addr__STATE_VARIABLE_DeclSet_0_21,
#line 35 "llds_out_code_addr.m"
  MR_Word * ll_backend__llds_out__llds_out_code_addr__STATE_VARIABLE_DeclSet_22)
#line 35 "llds_out_code_addr.m"
{
#line 99 "llds_out_code_addr.m"
  {
#line 99 "llds_out_code_addr.m"
    MR_bool ll_backend__llds_out__llds_out_code_addr__succeeded;
#line 97 "llds_out_code_addr.m"
    MR_Word ll_backend__llds_out__llds_out_code_addr__V_25_25;

#line 97 "llds_out_code_addr.m"
    {
#line 97 "llds_out_code_addr.m"
      ll_backend__llds_out__llds_out_code_addr__V_25_25 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 97 "llds_out_code_addr.m"
      MR_hl_field(MR_mktag(2), ll_backend__llds_out__llds_out_code_addr__V_25_25, 0) = ((MR_Box) (ll_backend__llds_out__llds_out_code_addr__CodeAddress_12));
#line 97 "llds_out_code_addr.m"
    }
#line 97 "llds_out_code_addr.m"
    {
#line 97 "llds_out_code_addr.m"
      ll_backend__llds_out__llds_out_code_addr__succeeded = ll_backend__llds_out__llds_out_util__decl_set_is_member_2_p_0(ll_backend__llds_out__llds_out_code_addr__V_25_25, ll_backend__llds_out__llds_out_code_addr__STATE_VARIABLE_DeclSet_0_21);
    }
#line 99 "llds_out_code_addr.m"
    if (ll_backend__llds_out__llds_out_code_addr__succeeded)
#line 98 "llds_out_code_addr.m"
      {
#line 98 "llds_out_code_addr.m"
        *ll_backend__llds_out__llds_out_code_addr__STATE_VARIABLE_DeclSet_22 = ll_backend__llds_out__llds_out_code_addr__STATE_VARIABLE_DeclSet_0_21;
#line 98 "llds_out_code_addr.m"
        *ll_backend__llds_out__llds_out_code_addr__STATE_VARIABLE_N_20 = ll_backend__llds_out__llds_out_code_addr__STATE_VARIABLE_N_0_19;
#line 98 "llds_out_code_addr.m"
      }
#line 99 "llds_out_code_addr.m"
    else
#line 100 "llds_out_code_addr.m"
      {
#line 100 "llds_out_code_addr.m"
        MR_Word ll_backend__llds_out__llds_out_code_addr__V_26_26;

#line 100 "llds_out_code_addr.m"
        {
#line 100 "llds_out_code_addr.m"
          ll_backend__llds_out__llds_out_code_addr__V_26_26 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 100 "llds_out_code_addr.m"
          MR_hl_field(MR_mktag(2), ll_backend__llds_out__llds_out_code_addr__V_26_26, 0) = ((MR_Box) (ll_backend__llds_out__llds_out_code_addr__CodeAddress_12));
#line 100 "llds_out_code_addr.m"
        }
#line 100 "llds_out_code_addr.m"
        {
#line 100 "llds_out_code_addr.m"
          ll_backend__llds_out__llds_out_util__decl_set_insert_3_p_0(ll_backend__llds_out__llds_out_code_addr__V_26_26, ll_backend__llds_out__llds_out_code_addr__STATE_VARIABLE_DeclSet_0_21, ll_backend__llds_out__llds_out_code_addr__STATE_VARIABLE_DeclSet_22);
        }
#line 1736 "ll_backend.llds_out.llds_out_code_addr.c"
        if (((MR_tag((MR_Word) ll_backend__llds_out__llds_out_code_addr__CodeAddress_12)) == (MR_mktag((MR_Integer) 1))))
#line 1738 "ll_backend.llds_out.llds_out_code_addr.c"
          {
#line 1740 "ll_backend.llds_out.llds_out_code_addr.c"
            MR_Word ll_backend__llds_out__llds_out_code_addr__Label_35 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__llds_out__llds_out_code_addr__CodeAddress_12, (MR_Integer) 0)));

#line 1743 "ll_backend.llds_out.llds_out_code_addr.c"
            if (((MR_tag((MR_Word) ll_backend__llds_out__llds_out_code_addr__Label_35)) == (MR_mktag((MR_Integer) 1))))
#line 1745 "ll_backend.llds_out.llds_out_code_addr.c"
              {
#line 1747 "ll_backend.llds_out.llds_out_code_addr.c"
                MR_Word ll_backend__llds_out__llds_out_code_addr__V_70_70 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__llds_out__llds_out_code_addr__Label_35, (MR_Integer) 0)));
#line 119 "llds_out_code_addr.m"
                MR_Word ll_backend__llds_out__llds_out_code_addr__V_69_69 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__llds_out__llds_out_code_addr__Label_35, (MR_Integer) 1)));

#line 1752 "ll_backend.llds_out.llds_out_code_addr.c"
                if ((ll_backend__llds_out__llds_out_code_addr__V_70_70 == (MR_Integer) 0))
#line 108 "llds_out_code_addr.m"
                  *ll_backend__llds_out__llds_out_code_addr__STATE_VARIABLE_N_20 = ll_backend__llds_out__llds_out_code_addr__STATE_VARIABLE_N_0_19;
#line 1756 "ll_backend.llds_out.llds_out_code_addr.c"
                else
#line 1758 "ll_backend.llds_out.llds_out_code_addr.c"
                  if ((ll_backend__llds_out__llds_out_code_addr__V_70_70 == (MR_Integer) 2))
#line 1760 "ll_backend.llds_out.llds_out_code_addr.c"
                    {
#line 104 "llds_out_code_addr.m"
                      {
#line 104 "llds_out_code_addr.m"
                        ll_backend__llds_out__llds_out_util__output_indent_5_p_0(ll_backend__llds_out__llds_out_code_addr__FirstIndent_13, ll_backend__llds_out__llds_out_code_addr__LaterIndent_14, ll_backend__llds_out__llds_out_code_addr__STATE_VARIABLE_N_0_19);
                      }
#line 105 "llds_out_code_addr.m"
                      *ll_backend__llds_out__llds_out_code_addr__STATE_VARIABLE_N_20 = (ll_backend__llds_out__llds_out_code_addr__STATE_VARIABLE_N_0_19 + (MR_Integer) 1);
#line 106 "llds_out_code_addr.m"
                      {
#line 106 "llds_out_code_addr.m"
                        ll_backend__llds_out__llds_out_code_addr__output_code_addr_decls_4_p_0(ll_backend__llds_out__llds_out_code_addr__Info_11, ll_backend__llds_out__llds_out_code_addr__CodeAddress_12);
#line 106 "llds_out_code_addr.m"
                        return;
                      }
#line 1776 "ll_backend.llds_out.llds_out_code_addr.c"
                    }
#line 1778 "ll_backend.llds_out.llds_out_code_addr.c"
                  else
#line 1780 "ll_backend.llds_out.llds_out_code_addr.c"
                    {
#line 104 "llds_out_code_addr.m"
                      {
#line 104 "llds_out_code_addr.m"
                        ll_backend__llds_out__llds_out_util__output_indent_5_p_0(ll_backend__llds_out__llds_out_code_addr__FirstIndent_13, ll_backend__llds_out__llds_out_code_addr__LaterIndent_14, ll_backend__llds_out__llds_out_code_addr__STATE_VARIABLE_N_0_19);
                      }
#line 105 "llds_out_code_addr.m"
                      *ll_backend__llds_out__llds_out_code_addr__STATE_VARIABLE_N_20 = (ll_backend__llds_out__llds_out_code_addr__STATE_VARIABLE_N_0_19 + (MR_Integer) 1);
#line 106 "llds_out_code_addr.m"
                      {
#line 106 "llds_out_code_addr.m"
                        ll_backend__llds_out__llds_out_code_addr__output_code_addr_decls_4_p_0(ll_backend__llds_out__llds_out_code_addr__Info_11, ll_backend__llds_out__llds_out_code_addr__CodeAddress_12);
#line 106 "llds_out_code_addr.m"
                        return;
                      }
#line 1796 "ll_backend.llds_out.llds_out_code_addr.c"
                    }
#line 1798 "ll_backend.llds_out.llds_out_code_addr.c"
              }
#line 1800 "ll_backend.llds_out.llds_out_code_addr.c"
            else
#line 108 "llds_out_code_addr.m"
              *ll_backend__llds_out__llds_out_code_addr__STATE_VARIABLE_N_20 = ll_backend__llds_out__llds_out_code_addr__STATE_VARIABLE_N_0_19;
#line 1804 "ll_backend.llds_out.llds_out_code_addr.c"
          }
#line 1806 "ll_backend.llds_out.llds_out_code_addr.c"
        else
#line 1808 "ll_backend.llds_out.llds_out_code_addr.c"
          if ((((ll_backend__llds_out__llds_out_code_addr__CodeAddress_12 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 2))))) || ((ll_backend__llds_out__llds_out_code_addr__CodeAddress_12 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 1)))))))
#line 1810 "ll_backend.llds_out.llds_out_code_addr.c"
            {
#line 1812 "ll_backend.llds_out.llds_out_code_addr.c"
              MR_Word ll_backend__llds_out__llds_out_code_addr__UseMacro_45 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_code_addr__Info_11, (MR_Integer) 6)))) >> (MR_Integer) 12)) & (MR_Integer) 1);
#line 149 "llds_out_code_addr.m"
              MR_Word ll_backend__llds_out__llds_out_code_addr__V_49_49 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_code_addr__Info_11, (MR_Integer) 0)));
#line 149 "llds_out_code_addr.m"
              MR_String ll_backend__llds_out__llds_out_code_addr__V_50_50 = ((MR_String) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_code_addr__Info_11, (MR_Integer) 1)));
#line 149 "llds_out_code_addr.m"
              MR_Word ll_backend__llds_out__llds_out_code_addr__V_51_51 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_code_addr__Info_11, (MR_Integer) 2)));
#line 149 "llds_out_code_addr.m"
              MR_Word ll_backend__llds_out__llds_out_code_addr__V_52_52 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_code_addr__Info_11, (MR_Integer) 3)));
#line 149 "llds_out_code_addr.m"
              MR_Word ll_backend__llds_out__llds_out_code_addr__V_53_53 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_code_addr__Info_11, (MR_Integer) 4)));
#line 149 "llds_out_code_addr.m"
              MR_Word ll_backend__llds_out__llds_out_code_addr__V_54_54 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_code_addr__Info_11, (MR_Integer) 5)));
#line 149 "llds_out_code_addr.m"
              MR_Word ll_backend__llds_out__llds_out_code_addr__V_55_55 = ((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_code_addr__Info_11, (MR_Integer) 6)))) & (MR_Integer) 1);
#line 149 "llds_out_code_addr.m"
              MR_Word ll_backend__llds_out__llds_out_code_addr__V_56_56 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_code_addr__Info_11, (MR_Integer) 6)))) >> (MR_Integer) 1)) & (MR_Integer) 1);
#line 149 "llds_out_code_addr.m"
              MR_Word ll_backend__llds_out__llds_out_code_addr__V_57_57 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_code_addr__Info_11, (MR_Integer) 6)))) >> (MR_Integer) 2)) & (MR_Integer) 1);
#line 149 "llds_out_code_addr.m"
              MR_Word ll_backend__llds_out__llds_out_code_addr__V_58_58 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_code_addr__Info_11, (MR_Integer) 6)))) >> (MR_Integer) 3)) & (MR_Integer) 1);
#line 149 "llds_out_code_addr.m"
              MR_Word ll_backend__llds_out__llds_out_code_addr__V_59_59 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_code_addr__Info_11, (MR_Integer) 6)))) >> (MR_Integer) 4)) & (MR_Integer) 1);
#line 149 "llds_out_code_addr.m"
              MR_Word ll_backend__llds_out__llds_out_code_addr__V_60_60 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_code_addr__Info_11, (MR_Integer) 6)))) >> (MR_Integer) 5)) & (MR_Integer) 1);
#line 149 "llds_out_code_addr.m"
              MR_Word ll_backend__llds_out__llds_out_code_addr__V_61_61 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_code_addr__Info_11, (MR_Integer) 6)))) >> (MR_Integer) 6)) & (MR_Integer) 1);
#line 149 "llds_out_code_addr.m"
              MR_Word ll_backend__llds_out__llds_out_code_addr__V_62_62 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_code_addr__Info_11, (MR_Integer) 6)))) >> (MR_Integer) 7)) & (MR_Integer) 1);
#line 149 "llds_out_code_addr.m"
              MR_Word ll_backend__llds_out__llds_out_code_addr__V_63_63 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_code_addr__Info_11, (MR_Integer) 6)))) >> (MR_Integer) 8)) & (MR_Integer) 1);
#line 149 "llds_out_code_addr.m"
              MR_Word ll_backend__llds_out__llds_out_code_addr__V_64_64 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_code_addr__Info_11, (MR_Integer) 6)))) >> (MR_Integer) 9)) & (MR_Integer) 1);
#line 149 "llds_out_code_addr.m"
              MR_Word ll_backend__llds_out__llds_out_code_addr__V_65_65 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_code_addr__Info_11, (MR_Integer) 6)))) >> (MR_Integer) 10)) & (MR_Integer) 1);
#line 149 "llds_out_code_addr.m"
              MR_Word ll_backend__llds_out__llds_out_code_addr__V_66_66 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_code_addr__Info_11, (MR_Integer) 6)))) >> (MR_Integer) 11)) & (MR_Integer) 1);
#line 149 "llds_out_code_addr.m"
              MR_Word ll_backend__llds_out__llds_out_code_addr__V_67_67 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_code_addr__Info_11, (MR_Integer) 6)))) >> (MR_Integer) 13)) & (MR_Integer) 7);
#line 149 "llds_out_code_addr.m"
              MR_Word ll_backend__llds_out__llds_out_code_addr__V_68_68 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_code_addr__Info_11, (MR_Integer) 7)));

#line 1855 "ll_backend.llds_out.llds_out_code_addr.c"
              if ((ll_backend__llds_out__llds_out_code_addr__UseMacro_45 == (MR_Integer) 0))
#line 1857 "ll_backend.llds_out.llds_out_code_addr.c"
                {
#line 104 "llds_out_code_addr.m"
                  {
#line 104 "llds_out_code_addr.m"
                    ll_backend__llds_out__llds_out_util__output_indent_5_p_0(ll_backend__llds_out__llds_out_code_addr__FirstIndent_13, ll_backend__llds_out__llds_out_code_addr__LaterIndent_14, ll_backend__llds_out__llds_out_code_addr__STATE_VARIABLE_N_0_19);
                  }
#line 105 "llds_out_code_addr.m"
                  *ll_backend__llds_out__llds_out_code_addr__STATE_VARIABLE_N_20 = (ll_backend__llds_out__llds_out_code_addr__STATE_VARIABLE_N_0_19 + (MR_Integer) 1);
#line 106 "llds_out_code_addr.m"
                  {
#line 106 "llds_out_code_addr.m"
                    ll_backend__llds_out__llds_out_code_addr__output_code_addr_decls_4_p_0(ll_backend__llds_out__llds_out_code_addr__Info_11, ll_backend__llds_out__llds_out_code_addr__CodeAddress_12);
#line 106 "llds_out_code_addr.m"
                    return;
                  }
#line 1873 "ll_backend.llds_out.llds_out_code_addr.c"
                }
#line 1875 "ll_backend.llds_out.llds_out_code_addr.c"
              else
#line 108 "llds_out_code_addr.m"
                *ll_backend__llds_out__llds_out_code_addr__STATE_VARIABLE_N_20 = ll_backend__llds_out__llds_out_code_addr__STATE_VARIABLE_N_0_19;
#line 1879 "ll_backend.llds_out.llds_out_code_addr.c"
            }
#line 1881 "ll_backend.llds_out.llds_out_code_addr.c"
          else
#line 1883 "ll_backend.llds_out.llds_out_code_addr.c"
            if ((((ll_backend__llds_out__llds_out_code_addr__CodeAddress_12 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))))) || (((((MR_tag((MR_Word) ll_backend__llds_out__llds_out_code_addr__CodeAddress_12)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__llds_out__llds_out_code_addr__CodeAddress_12, (MR_Integer) 0)))) == (MR_Integer) 0))))))
#line 108 "llds_out_code_addr.m"
              *ll_backend__llds_out__llds_out_code_addr__STATE_VARIABLE_N_20 = ll_backend__llds_out__llds_out_code_addr__STATE_VARIABLE_N_0_19;
#line 1887 "ll_backend.llds_out.llds_out_code_addr.c"
            else
#line 1889 "ll_backend.llds_out.llds_out_code_addr.c"
              {
#line 104 "llds_out_code_addr.m"
                {
#line 104 "llds_out_code_addr.m"
                  ll_backend__llds_out__llds_out_util__output_indent_5_p_0(ll_backend__llds_out__llds_out_code_addr__FirstIndent_13, ll_backend__llds_out__llds_out_code_addr__LaterIndent_14, ll_backend__llds_out__llds_out_code_addr__STATE_VARIABLE_N_0_19);
                }
#line 105 "llds_out_code_addr.m"
                *ll_backend__llds_out__llds_out_code_addr__STATE_VARIABLE_N_20 = (ll_backend__llds_out__llds_out_code_addr__STATE_VARIABLE_N_0_19 + (MR_Integer) 1);
#line 106 "llds_out_code_addr.m"
                {
#line 106 "llds_out_code_addr.m"
                  ll_backend__llds_out__llds_out_code_addr__output_code_addr_decls_4_p_0(ll_backend__llds_out__llds_out_code_addr__Info_11, ll_backend__llds_out__llds_out_code_addr__CodeAddress_12);
#line 106 "llds_out_code_addr.m"
                  return;
                }
#line 1905 "ll_backend.llds_out.llds_out_code_addr.c"
              }
#line 100 "llds_out_code_addr.m"
      }
#line 99 "llds_out_code_addr.m"
  }
#line 35 "llds_out_code_addr.m"
}

#line 32 "llds_out_code_addr.m"
void MR_CALL 
ll_backend__llds_out__llds_out_code_addr__output_record_code_addr_decls_6_p_0(
#line 32 "llds_out_code_addr.m"
  MR_Word ll_backend__llds_out__llds_out_code_addr__Info_7,
#line 32 "llds_out_code_addr.m"
  MR_Word ll_backend__llds_out__llds_out_code_addr__CodeAddress_8,
#line 32 "llds_out_code_addr.m"
  MR_Word ll_backend__llds_out__llds_out_code_addr__STATE_VARIABLE_DeclSet_0_12,
#line 32 "llds_out_code_addr.m"
  MR_Word * ll_backend__llds_out__llds_out_code_addr__STATE_VARIABLE_DeclSet_13)
#line 32 "llds_out_code_addr.m"
{
#line 91 "llds_out_code_addr.m"
  {
#line 91 "llds_out_code_addr.m"
    MR_bool ll_backend__llds_out__llds_out_code_addr__succeeded;
#line 92 "llds_out_code_addr.m"
    MR_Integer ll_backend__llds_out__llds_out_code_addr__V_11_11;

#line 92 "llds_out_code_addr.m"
    {
#line 92 "llds_out_code_addr.m"
      ll_backend__llds_out__llds_out_code_addr__output_record_code_addr_decls_format_10_p_0(ll_backend__llds_out__llds_out_code_addr__Info_7, ll_backend__llds_out__llds_out_code_addr__CodeAddress_8, (MR_String) "", (MR_String) "", (MR_Integer) 0, &ll_backend__llds_out__llds_out_code_addr__V_11_11, ll_backend__llds_out__llds_out_code_addr__STATE_VARIABLE_DeclSet_0_12, ll_backend__llds_out__llds_out_code_addr__STATE_VARIABLE_DeclSet_13);
    }
#line 91 "llds_out_code_addr.m"
  }
#line 32 "llds_out_code_addr.m"
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

/* ensure everything is compiled with the same grade */
static const void *const MR_grade = &MR_GRADE_VAR;

/* :- end_module ll_backend.llds_out.llds_out_code_addr. */
