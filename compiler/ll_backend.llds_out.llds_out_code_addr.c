/*
** Automatically generated from `llds_out_code_addr.m'
** by the Mercury compiler,
** version rotd-2015-11-30
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




#line 153 "ll_backend.llds_out.llds_out_code_addr.c"
static const MR_EnumFunctorDesc ll_backend__llds_out__llds_out_code_addr__ll_backend__llds_out__llds_out_code_addr__enum_functor_desc_wrapper_0_0;

#line 156 "ll_backend.llds_out.llds_out_code_addr.c"
static const MR_EnumFunctorDesc ll_backend__llds_out__llds_out_code_addr__ll_backend__llds_out__llds_out_code_addr__enum_functor_desc_wrapper_0_1;

#line 159 "ll_backend.llds_out.llds_out_code_addr.c"
static const MR_EnumFunctorDesc ll_backend__llds_out__llds_out_code_addr__ll_backend__llds_out__llds_out_code_addr__enum_functor_desc_wrapper_0_2;

#line 162 "ll_backend.llds_out.llds_out_code_addr.c"
static const MR_EnumFunctorDescPtr ll_backend__llds_out__llds_out_code_addr__ll_backend__llds_out__llds_out_code_addr__enum_value_ordered_wrapper_0[3];

#line 165 "ll_backend.llds_out.llds_out_code_addr.c"
static const MR_EnumFunctorDescPtr ll_backend__llds_out__llds_out_code_addr__ll_backend__llds_out__llds_out_code_addr__enum_name_ordered_wrapper_0[3];

#line 168 "ll_backend.llds_out.llds_out_code_addr.c"
static const MR_Integer ll_backend__llds_out__llds_out_code_addr__ll_backend__llds_out__llds_out_code_addr__functor_number_map_wrapper_0[3];

#line 171 "ll_backend.llds_out.llds_out_code_addr.c"
static MR_bool MR_CALL 
ll_backend__llds_out__llds_out_code_addr____Unify____wrapper_0_0_10001(
#line 174 "ll_backend.llds_out.llds_out_code_addr.c"
  MR_Box ll_backend__llds_out__llds_out_code_addr__wrapper_arg_1,
#line 176 "ll_backend.llds_out.llds_out_code_addr.c"
  MR_Box ll_backend__llds_out__llds_out_code_addr__wrapper_arg_2);

#line 179 "ll_backend.llds_out.llds_out_code_addr.c"
static void MR_CALL 
ll_backend__llds_out__llds_out_code_addr____Compare____wrapper_0_0_10001(
#line 182 "ll_backend.llds_out.llds_out_code_addr.c"
  MR_Box * ll_backend__llds_out__llds_out_code_addr__wrapper_arg_1,
#line 184 "ll_backend.llds_out.llds_out_code_addr.c"
  MR_Box ll_backend__llds_out__llds_out_code_addr__wrapper_arg_2,
#line 186 "ll_backend.llds_out.llds_out_code_addr.c"
  MR_Box ll_backend__llds_out__llds_out_code_addr__wrapper_arg_3);

#line 218 "llds_out_code_addr.m"
static void MR_CALL 
ll_backend__llds_out__llds_out_code_addr__output_label_as_code_addr_decls_3_p_0(
#line 218 "llds_out_code_addr.m"
  MR_Word ll_backend__llds_out__llds_out_code_addr__Label_4);

#line 160 "llds_out_code_addr.m"
static void MR_CALL 
ll_backend__llds_out__llds_out_code_addr__output_code_addr_decls_4_p_0(
#line 160 "llds_out_code_addr.m"
  MR_Word ll_backend__llds_out__llds_out_code_addr__Info_5,
#line 160 "llds_out_code_addr.m"
  MR_Word ll_backend__llds_out__llds_out_code_addr__CodeAddr_6);







#include "io.mh"
#include "string.mh"
#include "time.mh"
#include "mdbcomp.rtti_access.mh"



#line 216 "ll_backend.llds_out.llds_out_code_addr.c"
static const MR_EnumFunctorDesc ll_backend__llds_out__llds_out_code_addr__ll_backend__llds_out__llds_out_code_addr__enum_functor_desc_wrapper_0_0 = {
  (MR_String) "wrapper_entry",
  (MR_Integer) 0
};

#line 222 "ll_backend.llds_out.llds_out_code_addr.c"
static const MR_EnumFunctorDesc ll_backend__llds_out__llds_out_code_addr__ll_backend__llds_out__llds_out_code_addr__enum_functor_desc_wrapper_0_1 = {
  (MR_String) "wrapper_label",
  (MR_Integer) 1
};

#line 228 "ll_backend.llds_out.llds_out_code_addr.c"
static const MR_EnumFunctorDesc ll_backend__llds_out__llds_out_code_addr__ll_backend__llds_out__llds_out_code_addr__enum_functor_desc_wrapper_0_2 = {
  (MR_String) "wrapper_none",
  (MR_Integer) 2
};

#line 234 "ll_backend.llds_out.llds_out_code_addr.c"
static const MR_EnumFunctorDescPtr ll_backend__llds_out__llds_out_code_addr__ll_backend__llds_out__llds_out_code_addr__enum_value_ordered_wrapper_0[3] = {
  &ll_backend__llds_out__llds_out_code_addr__ll_backend__llds_out__llds_out_code_addr__enum_functor_desc_wrapper_0_0,
  &ll_backend__llds_out__llds_out_code_addr__ll_backend__llds_out__llds_out_code_addr__enum_functor_desc_wrapper_0_1,
  &ll_backend__llds_out__llds_out_code_addr__ll_backend__llds_out__llds_out_code_addr__enum_functor_desc_wrapper_0_2
};

#line 241 "ll_backend.llds_out.llds_out_code_addr.c"
static const MR_EnumFunctorDescPtr ll_backend__llds_out__llds_out_code_addr__ll_backend__llds_out__llds_out_code_addr__enum_name_ordered_wrapper_0[3] = {
  &ll_backend__llds_out__llds_out_code_addr__ll_backend__llds_out__llds_out_code_addr__enum_functor_desc_wrapper_0_0,
  &ll_backend__llds_out__llds_out_code_addr__ll_backend__llds_out__llds_out_code_addr__enum_functor_desc_wrapper_0_1,
  &ll_backend__llds_out__llds_out_code_addr__ll_backend__llds_out__llds_out_code_addr__enum_functor_desc_wrapper_0_2
};

#line 248 "ll_backend.llds_out.llds_out_code_addr.c"
static const MR_Integer ll_backend__llds_out__llds_out_code_addr__ll_backend__llds_out__llds_out_code_addr__functor_number_map_wrapper_0[3] = {
  (MR_Integer) 0,
  (MR_Integer) 1,
  (MR_Integer) 2
};

#line 255 "ll_backend.llds_out.llds_out_code_addr.c"
const MR_TypeCtorInfo_Struct ll_backend__llds_out__llds_out_code_addr__ll_backend__llds_out__llds_out_code_addr__type_ctor_info_wrapper_0 = {
  (MR_Integer) 0,
  (MR_Integer) 15,
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

#line 272 "ll_backend.llds_out.llds_out_code_addr.c"
static MR_bool MR_CALL 
ll_backend__llds_out__llds_out_code_addr____Unify____wrapper_0_0_10001(
#line 275 "ll_backend.llds_out.llds_out_code_addr.c"
  MR_Box ll_backend__llds_out__llds_out_code_addr__wrapper_arg_1,
#line 277 "ll_backend.llds_out.llds_out_code_addr.c"
  MR_Box ll_backend__llds_out__llds_out_code_addr__wrapper_arg_2)
#line 279 "ll_backend.llds_out.llds_out_code_addr.c"
{
#line 281 "ll_backend.llds_out.llds_out_code_addr.c"
  {
#line 283 "ll_backend.llds_out.llds_out_code_addr.c"
    MR_bool ll_backend__llds_out__llds_out_code_addr__succeeded;

#line 286 "ll_backend.llds_out.llds_out_code_addr.c"
    {
#line 288 "ll_backend.llds_out.llds_out_code_addr.c"
      ll_backend__llds_out__llds_out_code_addr__succeeded = ll_backend__llds_out__llds_out_code_addr____Unify____wrapper_0_0(((MR_Word) ll_backend__llds_out__llds_out_code_addr__wrapper_arg_1), ((MR_Word) ll_backend__llds_out__llds_out_code_addr__wrapper_arg_2));
    }
#line 291 "ll_backend.llds_out.llds_out_code_addr.c"
    return ll_backend__llds_out__llds_out_code_addr__succeeded;
#line 293 "ll_backend.llds_out.llds_out_code_addr.c"
  }
#line 295 "ll_backend.llds_out.llds_out_code_addr.c"
}

#line 298 "ll_backend.llds_out.llds_out_code_addr.c"
static void MR_CALL 
ll_backend__llds_out__llds_out_code_addr____Compare____wrapper_0_0_10001(
#line 301 "ll_backend.llds_out.llds_out_code_addr.c"
  MR_Box * ll_backend__llds_out__llds_out_code_addr__wrapper_arg_1,
#line 303 "ll_backend.llds_out.llds_out_code_addr.c"
  MR_Box ll_backend__llds_out__llds_out_code_addr__wrapper_arg_2,
#line 305 "ll_backend.llds_out.llds_out_code_addr.c"
  MR_Box ll_backend__llds_out__llds_out_code_addr__wrapper_arg_3)
#line 307 "ll_backend.llds_out.llds_out_code_addr.c"
{
#line 309 "ll_backend.llds_out.llds_out_code_addr.c"
  {
#line 311 "ll_backend.llds_out.llds_out_code_addr.c"
    MR_Word ll_backend__llds_out__llds_out_code_addr__conv0_HeadVar__1_1;

#line 314 "ll_backend.llds_out.llds_out_code_addr.c"
    {
#line 316 "ll_backend.llds_out.llds_out_code_addr.c"
      ll_backend__llds_out__llds_out_code_addr____Compare____wrapper_0_0(&ll_backend__llds_out__llds_out_code_addr__conv0_HeadVar__1_1, ((MR_Word) ll_backend__llds_out__llds_out_code_addr__wrapper_arg_2), ((MR_Word) ll_backend__llds_out__llds_out_code_addr__wrapper_arg_3));
    }
#line 319 "ll_backend.llds_out.llds_out_code_addr.c"
    *ll_backend__llds_out__llds_out_code_addr__wrapper_arg_1 = ((MR_Box) (ll_backend__llds_out__llds_out_code_addr__conv0_HeadVar__1_1));
#line 321 "ll_backend.llds_out.llds_out_code_addr.c"
  }
#line 323 "ll_backend.llds_out.llds_out_code_addr.c"
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
#line 365 "ll_backend.llds_out.llds_out_code_addr.c"
  {
#line 367 "ll_backend.llds_out.llds_out_code_addr.c"
    MR_bool ll_backend__llds_out__llds_out_code_addr__succeeded = (ll_backend__llds_out__llds_out_code_addr__HeadVar__2_1 == ll_backend__llds_out__llds_out_code_addr__HeadVar__2_2);

#line 370 "ll_backend.llds_out.llds_out_code_addr.c"
    return ll_backend__llds_out__llds_out_code_addr__succeeded;
#line 372 "ll_backend.llds_out.llds_out_code_addr.c"
  }
#line 61 "llds_out_code_addr.m"
}

#line 218 "llds_out_code_addr.m"
static void MR_CALL 
ll_backend__llds_out__llds_out_code_addr__output_label_as_code_addr_decls_3_p_0(
#line 218 "llds_out_code_addr.m"
  MR_Word ll_backend__llds_out__llds_out_code_addr__Label_4)
#line 218 "llds_out_code_addr.m"
{
#line 222 "llds_out_code_addr.m"
  {
#line 222 "llds_out_code_addr.m"
    MR_bool ll_backend__llds_out__llds_out_code_addr__succeeded;

#line 222 "llds_out_code_addr.m"
    if (((MR_tag((MR_Word) ll_backend__llds_out__llds_out_code_addr__Label_4)) == (MR_mktag((MR_Integer) 1))))
#line 222 "llds_out_code_addr.m"
      {
#line 222 "llds_out_code_addr.m"
        MR_Word ll_backend__llds_out__llds_out_code_addr__V_24_24 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__llds_out__llds_out_code_addr__Label_4, (MR_Integer) 1)));
#line 222 "llds_out_code_addr.m"
        MR_Word ll_backend__llds_out__llds_out_code_addr__V_25_25 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__llds_out__llds_out_code_addr__Label_4, (MR_Integer) 0)));

#line 222 "llds_out_code_addr.m"
#line 222 "llds_out_code_addr.m"
        switch (ll_backend__llds_out__llds_out_code_addr__V_25_25) {
#line 222 "llds_out_code_addr.m"
          default: /*NOTREACHED*/ MR_assert(0);
#line 222 "llds_out_code_addr.m"
          case (MR_Integer) 0:
#line 230 "llds_out_code_addr.m"
            {
#line 230 "llds_out_code_addr.m"
            }
#line 222 "llds_out_code_addr.m"
            break;
#line 222 "llds_out_code_addr.m"
          case (MR_Integer) 2:
#line 222 "llds_out_code_addr.m"
            {
#line 222 "llds_out_code_addr.m"
              MR_String ll_backend__llds_out__llds_out_code_addr__LabelStr_30;

#line 223 "llds_out_code_addr.m"
              {
#line 223 "llds_out_code_addr.m"
                mercury__io__write_string_3_p_0((MR_String) "MR_decl_entry(");
              }
#line 273 "llds_out_code_addr.m"
              {
#line 273 "llds_out_code_addr.m"
                ll_backend__llds_out__llds_out_code_addr__LabelStr_30 = backend_libs__name_mangle__proc_label_to_c_string_2_f_0(ll_backend__llds_out__llds_out_code_addr__V_24_24, (MR_Integer) 0);
              }
#line 257 "llds_out_code_addr.m"
              {
#line 257 "llds_out_code_addr.m"
                mercury__io__write_string_3_p_0(ll_backend__llds_out__llds_out_code_addr__LabelStr_30);
              }
#line 226 "llds_out_code_addr.m"
              {
#line 226 "llds_out_code_addr.m"
                mercury__io__write_string_3_p_0((MR_String) ");\n");
              }
#line 222 "llds_out_code_addr.m"
            }
#line 222 "llds_out_code_addr.m"
            break;
#line 222 "llds_out_code_addr.m"
          case (MR_Integer) 1:
#line 228 "llds_out_code_addr.m"
            {
#line 228 "llds_out_code_addr.m"
            }
#line 222 "llds_out_code_addr.m"
            break;
#line 222 "llds_out_code_addr.m"
        }
#line 222 "llds_out_code_addr.m"
      }
#line 222 "llds_out_code_addr.m"
    else
#line 232 "llds_out_code_addr.m"
      {
#line 232 "llds_out_code_addr.m"
      }
#line 222 "llds_out_code_addr.m"
  }
#line 218 "llds_out_code_addr.m"
}

#line 160 "llds_out_code_addr.m"
static void MR_CALL 
ll_backend__llds_out__llds_out_code_addr__output_code_addr_decls_4_p_0(
#line 160 "llds_out_code_addr.m"
  MR_Word ll_backend__llds_out__llds_out_code_addr__Info_5,
#line 160 "llds_out_code_addr.m"
  MR_Word ll_backend__llds_out__llds_out_code_addr__CodeAddr_6)
#line 160 "llds_out_code_addr.m"
{
#line 165 "llds_out_code_addr.m"
  {
#line 165 "llds_out_code_addr.m"
    MR_bool ll_backend__llds_out__llds_out_code_addr__succeeded;

#line 165 "llds_out_code_addr.m"
#line 165 "llds_out_code_addr.m"
    switch (MR_tag((MR_Word) ll_backend__llds_out__llds_out_code_addr__CodeAddr_6)) {
#line 165 "llds_out_code_addr.m"
      default: /*NOTREACHED*/ MR_assert(0);
#line 165 "llds_out_code_addr.m"
      case (MR_Integer) 0:
#line 165 "llds_out_code_addr.m"
#line 165 "llds_out_code_addr.m"
        switch (MR_unmkbody(ll_backend__llds_out__llds_out_code_addr__CodeAddr_6)) {
#line 165 "llds_out_code_addr.m"
          default: /*NOTREACHED*/ MR_assert(0);
#line 165 "llds_out_code_addr.m"
          case (MR_Integer) 0:
#line 173 "llds_out_code_addr.m"
            {
#line 173 "llds_out_code_addr.m"
            }
#line 165 "llds_out_code_addr.m"
            break;
#line 165 "llds_out_code_addr.m"
          case (MR_Integer) 1:
#line 177 "llds_out_code_addr.m"
            {
#line 177 "llds_out_code_addr.m"
              MR_Word ll_backend__llds_out__llds_out_code_addr__UseMacro_11 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_code_addr__Info_5, (MR_Integer) 7)))) >> (MR_Integer) 12)) & (MR_Integer) 1);
#line 178 "llds_out_code_addr.m"
              MR_Word ll_backend__llds_out__llds_out_code_addr__V_45_45 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_code_addr__Info_5, (MR_Integer) 0)));
#line 178 "llds_out_code_addr.m"
              MR_String ll_backend__llds_out__llds_out_code_addr__V_46_46 = ((MR_String) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_code_addr__Info_5, (MR_Integer) 1)));
#line 178 "llds_out_code_addr.m"
              MR_String ll_backend__llds_out__llds_out_code_addr__V_47_47 = ((MR_String) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_code_addr__Info_5, (MR_Integer) 2)));
#line 178 "llds_out_code_addr.m"
              MR_Word ll_backend__llds_out__llds_out_code_addr__V_48_48 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_code_addr__Info_5, (MR_Integer) 3)));
#line 178 "llds_out_code_addr.m"
              MR_Word ll_backend__llds_out__llds_out_code_addr__V_49_49 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_code_addr__Info_5, (MR_Integer) 4)));
#line 178 "llds_out_code_addr.m"
              MR_Word ll_backend__llds_out__llds_out_code_addr__V_50_50 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_code_addr__Info_5, (MR_Integer) 5)));
#line 178 "llds_out_code_addr.m"
              MR_Word ll_backend__llds_out__llds_out_code_addr__V_51_51 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_code_addr__Info_5, (MR_Integer) 6)));
#line 178 "llds_out_code_addr.m"
              MR_Word ll_backend__llds_out__llds_out_code_addr__V_52_52 = ((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_code_addr__Info_5, (MR_Integer) 7)))) & (MR_Integer) 1);
#line 178 "llds_out_code_addr.m"
              MR_Word ll_backend__llds_out__llds_out_code_addr__V_53_53 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_code_addr__Info_5, (MR_Integer) 7)))) >> (MR_Integer) 1)) & (MR_Integer) 1);
#line 178 "llds_out_code_addr.m"
              MR_Word ll_backend__llds_out__llds_out_code_addr__V_54_54 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_code_addr__Info_5, (MR_Integer) 7)))) >> (MR_Integer) 2)) & (MR_Integer) 1);
#line 178 "llds_out_code_addr.m"
              MR_Word ll_backend__llds_out__llds_out_code_addr__V_55_55 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_code_addr__Info_5, (MR_Integer) 7)))) >> (MR_Integer) 3)) & (MR_Integer) 1);
#line 178 "llds_out_code_addr.m"
              MR_Word ll_backend__llds_out__llds_out_code_addr__V_56_56 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_code_addr__Info_5, (MR_Integer) 7)))) >> (MR_Integer) 4)) & (MR_Integer) 1);
#line 178 "llds_out_code_addr.m"
              MR_Word ll_backend__llds_out__llds_out_code_addr__V_57_57 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_code_addr__Info_5, (MR_Integer) 7)))) >> (MR_Integer) 5)) & (MR_Integer) 1);
#line 178 "llds_out_code_addr.m"
              MR_Word ll_backend__llds_out__llds_out_code_addr__V_58_58 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_code_addr__Info_5, (MR_Integer) 7)))) >> (MR_Integer) 6)) & (MR_Integer) 1);
#line 178 "llds_out_code_addr.m"
              MR_Word ll_backend__llds_out__llds_out_code_addr__V_59_59 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_code_addr__Info_5, (MR_Integer) 7)))) >> (MR_Integer) 7)) & (MR_Integer) 1);
#line 178 "llds_out_code_addr.m"
              MR_Word ll_backend__llds_out__llds_out_code_addr__V_60_60 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_code_addr__Info_5, (MR_Integer) 7)))) >> (MR_Integer) 8)) & (MR_Integer) 1);
#line 178 "llds_out_code_addr.m"
              MR_Word ll_backend__llds_out__llds_out_code_addr__V_61_61 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_code_addr__Info_5, (MR_Integer) 7)))) >> (MR_Integer) 9)) & (MR_Integer) 1);
#line 178 "llds_out_code_addr.m"
              MR_Word ll_backend__llds_out__llds_out_code_addr__V_62_62 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_code_addr__Info_5, (MR_Integer) 7)))) >> (MR_Integer) 10)) & (MR_Integer) 1);
#line 178 "llds_out_code_addr.m"
              MR_Word ll_backend__llds_out__llds_out_code_addr__V_63_63 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_code_addr__Info_5, (MR_Integer) 7)))) >> (MR_Integer) 11)) & (MR_Integer) 1);
#line 178 "llds_out_code_addr.m"
              MR_Word ll_backend__llds_out__llds_out_code_addr__V_64_64 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_code_addr__Info_5, (MR_Integer) 7)))) >> (MR_Integer) 13)) & (MR_Integer) 7);
#line 178 "llds_out_code_addr.m"
              MR_Word ll_backend__llds_out__llds_out_code_addr__V_65_65 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_code_addr__Info_5, (MR_Integer) 8)));

#line 181 "llds_out_code_addr.m"
#line 181 "llds_out_code_addr.m"
              switch (ll_backend__llds_out__llds_out_code_addr__UseMacro_11) {
#line 181 "llds_out_code_addr.m"
                default: /*NOTREACHED*/ MR_assert(0);
#line 181 "llds_out_code_addr.m"
                case (MR_Integer) 0:
#line 182 "llds_out_code_addr.m"
                  {
#line 183 "llds_out_code_addr.m"
                    {
#line 183 "llds_out_code_addr.m"
                      mercury__io__write_string_3_p_0((MR_String) "MR_declare_entry(MR_do_redo);\n");
                    }
#line 182 "llds_out_code_addr.m"
                  }
#line 181 "llds_out_code_addr.m"
                  break;
#line 181 "llds_out_code_addr.m"
                case (MR_Integer) 1:
#line 180 "llds_out_code_addr.m"
                  {
#line 180 "llds_out_code_addr.m"
                  }
#line 181 "llds_out_code_addr.m"
                  break;
#line 181 "llds_out_code_addr.m"
              }
#line 177 "llds_out_code_addr.m"
            }
#line 165 "llds_out_code_addr.m"
            break;
#line 165 "llds_out_code_addr.m"
          case (MR_Integer) 2:
#line 186 "llds_out_code_addr.m"
            {
#line 186 "llds_out_code_addr.m"
              MR_Word ll_backend__llds_out__llds_out_code_addr__UseMacro_43 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_code_addr__Info_5, (MR_Integer) 7)))) >> (MR_Integer) 12)) & (MR_Integer) 1);
#line 187 "llds_out_code_addr.m"
              MR_Word ll_backend__llds_out__llds_out_code_addr__V_66_66 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_code_addr__Info_5, (MR_Integer) 0)));
#line 187 "llds_out_code_addr.m"
              MR_String ll_backend__llds_out__llds_out_code_addr__V_67_67 = ((MR_String) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_code_addr__Info_5, (MR_Integer) 1)));
#line 187 "llds_out_code_addr.m"
              MR_String ll_backend__llds_out__llds_out_code_addr__V_68_68 = ((MR_String) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_code_addr__Info_5, (MR_Integer) 2)));
#line 187 "llds_out_code_addr.m"
              MR_Word ll_backend__llds_out__llds_out_code_addr__V_69_69 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_code_addr__Info_5, (MR_Integer) 3)));
#line 187 "llds_out_code_addr.m"
              MR_Word ll_backend__llds_out__llds_out_code_addr__V_70_70 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_code_addr__Info_5, (MR_Integer) 4)));
#line 187 "llds_out_code_addr.m"
              MR_Word ll_backend__llds_out__llds_out_code_addr__V_71_71 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_code_addr__Info_5, (MR_Integer) 5)));
#line 187 "llds_out_code_addr.m"
              MR_Word ll_backend__llds_out__llds_out_code_addr__V_72_72 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_code_addr__Info_5, (MR_Integer) 6)));
#line 187 "llds_out_code_addr.m"
              MR_Word ll_backend__llds_out__llds_out_code_addr__V_73_73 = ((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_code_addr__Info_5, (MR_Integer) 7)))) & (MR_Integer) 1);
#line 187 "llds_out_code_addr.m"
              MR_Word ll_backend__llds_out__llds_out_code_addr__V_74_74 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_code_addr__Info_5, (MR_Integer) 7)))) >> (MR_Integer) 1)) & (MR_Integer) 1);
#line 187 "llds_out_code_addr.m"
              MR_Word ll_backend__llds_out__llds_out_code_addr__V_75_75 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_code_addr__Info_5, (MR_Integer) 7)))) >> (MR_Integer) 2)) & (MR_Integer) 1);
#line 187 "llds_out_code_addr.m"
              MR_Word ll_backend__llds_out__llds_out_code_addr__V_76_76 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_code_addr__Info_5, (MR_Integer) 7)))) >> (MR_Integer) 3)) & (MR_Integer) 1);
#line 187 "llds_out_code_addr.m"
              MR_Word ll_backend__llds_out__llds_out_code_addr__V_77_77 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_code_addr__Info_5, (MR_Integer) 7)))) >> (MR_Integer) 4)) & (MR_Integer) 1);
#line 187 "llds_out_code_addr.m"
              MR_Word ll_backend__llds_out__llds_out_code_addr__V_78_78 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_code_addr__Info_5, (MR_Integer) 7)))) >> (MR_Integer) 5)) & (MR_Integer) 1);
#line 187 "llds_out_code_addr.m"
              MR_Word ll_backend__llds_out__llds_out_code_addr__V_79_79 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_code_addr__Info_5, (MR_Integer) 7)))) >> (MR_Integer) 6)) & (MR_Integer) 1);
#line 187 "llds_out_code_addr.m"
              MR_Word ll_backend__llds_out__llds_out_code_addr__V_80_80 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_code_addr__Info_5, (MR_Integer) 7)))) >> (MR_Integer) 7)) & (MR_Integer) 1);
#line 187 "llds_out_code_addr.m"
              MR_Word ll_backend__llds_out__llds_out_code_addr__V_81_81 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_code_addr__Info_5, (MR_Integer) 7)))) >> (MR_Integer) 8)) & (MR_Integer) 1);
#line 187 "llds_out_code_addr.m"
              MR_Word ll_backend__llds_out__llds_out_code_addr__V_82_82 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_code_addr__Info_5, (MR_Integer) 7)))) >> (MR_Integer) 9)) & (MR_Integer) 1);
#line 187 "llds_out_code_addr.m"
              MR_Word ll_backend__llds_out__llds_out_code_addr__V_83_83 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_code_addr__Info_5, (MR_Integer) 7)))) >> (MR_Integer) 10)) & (MR_Integer) 1);
#line 187 "llds_out_code_addr.m"
              MR_Word ll_backend__llds_out__llds_out_code_addr__V_84_84 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_code_addr__Info_5, (MR_Integer) 7)))) >> (MR_Integer) 11)) & (MR_Integer) 1);
#line 187 "llds_out_code_addr.m"
              MR_Word ll_backend__llds_out__llds_out_code_addr__V_85_85 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_code_addr__Info_5, (MR_Integer) 7)))) >> (MR_Integer) 13)) & (MR_Integer) 7);
#line 187 "llds_out_code_addr.m"
              MR_Word ll_backend__llds_out__llds_out_code_addr__V_86_86 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_code_addr__Info_5, (MR_Integer) 8)));

#line 190 "llds_out_code_addr.m"
#line 190 "llds_out_code_addr.m"
              switch (ll_backend__llds_out__llds_out_code_addr__UseMacro_43) {
#line 190 "llds_out_code_addr.m"
                default: /*NOTREACHED*/ MR_assert(0);
#line 190 "llds_out_code_addr.m"
                case (MR_Integer) 0:
#line 191 "llds_out_code_addr.m"
                  {
#line 192 "llds_out_code_addr.m"
                    {
#line 192 "llds_out_code_addr.m"
                      mercury__io__write_string_3_p_0((MR_String) "MR_declare_entry(MR_do_fail);\n");
                    }
#line 191 "llds_out_code_addr.m"
                  }
#line 190 "llds_out_code_addr.m"
                  break;
#line 190 "llds_out_code_addr.m"
                case (MR_Integer) 1:
#line 189 "llds_out_code_addr.m"
                  {
#line 189 "llds_out_code_addr.m"
                  }
#line 190 "llds_out_code_addr.m"
                  break;
#line 190 "llds_out_code_addr.m"
              }
#line 186 "llds_out_code_addr.m"
            }
#line 165 "llds_out_code_addr.m"
            break;
#line 165 "llds_out_code_addr.m"
          case (MR_Integer) 3:
#line 195 "llds_out_code_addr.m"
            {
#line 196 "llds_out_code_addr.m"
              {
#line 196 "llds_out_code_addr.m"
                mercury__io__write_string_3_p_0((MR_String) "MR_declare_entry(MR_do_trace_redo_fail_shallow);\n");
              }
#line 195 "llds_out_code_addr.m"
            }
#line 165 "llds_out_code_addr.m"
            break;
#line 165 "llds_out_code_addr.m"
          case (MR_Integer) 4:
#line 199 "llds_out_code_addr.m"
            {
#line 200 "llds_out_code_addr.m"
              {
#line 200 "llds_out_code_addr.m"
                mercury__io__write_string_3_p_0((MR_String) "MR_declare_entry(MR_do_trace_redo_fail_deep);\n");
              }
#line 199 "llds_out_code_addr.m"
            }
#line 165 "llds_out_code_addr.m"
            break;
#line 165 "llds_out_code_addr.m"
          case (MR_Integer) 5:
#line 214 "llds_out_code_addr.m"
            {
#line 215 "llds_out_code_addr.m"
              {
#line 215 "llds_out_code_addr.m"
                mercury__io__write_string_3_p_0((MR_String) "MR_declare_entry(MR_do_not_reached);\n");
              }
#line 214 "llds_out_code_addr.m"
            }
#line 165 "llds_out_code_addr.m"
            break;
#line 165 "llds_out_code_addr.m"
        }
#line 165 "llds_out_code_addr.m"
        break;
#line 165 "llds_out_code_addr.m"
      case (MR_Integer) 1:
#line 165 "llds_out_code_addr.m"
        {
#line 165 "llds_out_code_addr.m"
          MR_Word ll_backend__llds_out__llds_out_code_addr__Label_8 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__llds_out__llds_out_code_addr__CodeAddr_6, (MR_Integer) 0)));

#line 166 "llds_out_code_addr.m"
          {
#line 166 "llds_out_code_addr.m"
            ll_backend__llds_out__llds_out_code_addr__output_label_as_code_addr_decls_3_p_0(ll_backend__llds_out__llds_out_code_addr__Label_8);
          }
#line 165 "llds_out_code_addr.m"
        }
#line 165 "llds_out_code_addr.m"
        break;
#line 165 "llds_out_code_addr.m"
      case (MR_Integer) 2:
#line 168 "llds_out_code_addr.m"
        {
#line 168 "llds_out_code_addr.m"
          MR_Word ll_backend__llds_out__llds_out_code_addr__ProcLabel_9 = ((MR_Word) (MR_hl_field(MR_mktag(2), ll_backend__llds_out__llds_out_code_addr__CodeAddr_6, (MR_Integer) 0)));

#line 169 "llds_out_code_addr.m"
          {
#line 169 "llds_out_code_addr.m"
            mercury__io__write_string_3_p_0((MR_String) "MR_decl_entry(");
          }
#line 170 "llds_out_code_addr.m"
          {
#line 170 "llds_out_code_addr.m"
            backend_libs__name_mangle__output_proc_label_no_prefix_3_p_0(ll_backend__llds_out__llds_out_code_addr__ProcLabel_9);
          }
#line 171 "llds_out_code_addr.m"
          {
#line 171 "llds_out_code_addr.m"
            mercury__io__write_string_3_p_0((MR_String) ");\n");
          }
#line 168 "llds_out_code_addr.m"
        }
#line 165 "llds_out_code_addr.m"
        break;
#line 165 "llds_out_code_addr.m"
      case (MR_Integer) 3:
#line 165 "llds_out_code_addr.m"
#line 165 "llds_out_code_addr.m"
        switch (((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__llds_out__llds_out_code_addr__CodeAddr_6, (MR_Integer) 0)))) {
#line 165 "llds_out_code_addr.m"
          default: /*NOTREACHED*/ MR_assert(0);
#line 165 "llds_out_code_addr.m"
          case (MR_Integer) 0:
#line 174 "llds_out_code_addr.m"
            {
#line 174 "llds_out_code_addr.m"
            }
#line 165 "llds_out_code_addr.m"
            break;
#line 165 "llds_out_code_addr.m"
          case (MR_Integer) 1:
#line 203 "llds_out_code_addr.m"
            {
#line 203 "llds_out_code_addr.m"
              MR_Word ll_backend__llds_out__llds_out_code_addr__Variant_12 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__llds_out__llds_out_code_addr__CodeAddr_6, (MR_Integer) 1)));
#line 203 "llds_out_code_addr.m"
              MR_String ll_backend__llds_out__llds_out_code_addr__V_25_25;

#line 204 "llds_out_code_addr.m"
              {
#line 204 "llds_out_code_addr.m"
                mercury__io__write_string_3_p_0((MR_String) "MR_declare_entry(mercury__do_call_closure_");
              }
#line 239 "llds_out_code_addr.m"
              if ((ll_backend__llds_out__llds_out_code_addr__Variant_12 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 240 "llds_out_code_addr.m"
                ll_backend__llds_out__llds_out_code_addr__V_25_25 = (MR_String) "compact";
#line 239 "llds_out_code_addr.m"
              else
#line 242 "llds_out_code_addr.m"
                {
#line 242 "llds_out_code_addr.m"
                  MR_Integer ll_backend__llds_out__llds_out_code_addr__Num_92 = ((MR_Integer) (MR_hl_field(MR_mktag(1), ll_backend__llds_out__llds_out_code_addr__Variant_12, (MR_Integer) 0)));

#line 243 "llds_out_code_addr.m"
                  {
#line 243 "llds_out_code_addr.m"
                    ll_backend__llds_out__llds_out_code_addr__V_25_25 = mercury__string__int_to_string_1_f_0(ll_backend__llds_out__llds_out_code_addr__Num_92);
                  }
#line 242 "llds_out_code_addr.m"
                }
#line 205 "llds_out_code_addr.m"
              {
#line 205 "llds_out_code_addr.m"
                mercury__io__write_string_3_p_0(ll_backend__llds_out__llds_out_code_addr__V_25_25);
              }
#line 206 "llds_out_code_addr.m"
              {
#line 206 "llds_out_code_addr.m"
                mercury__io__write_string_3_p_0((MR_String) ");\n");
              }
#line 203 "llds_out_code_addr.m"
            }
#line 165 "llds_out_code_addr.m"
            break;
#line 165 "llds_out_code_addr.m"
          case (MR_Integer) 2:
#line 208 "llds_out_code_addr.m"
            {
#line 208 "llds_out_code_addr.m"
              MR_String ll_backend__llds_out__llds_out_code_addr__V_19_19;
#line 208 "llds_out_code_addr.m"
              MR_Word ll_backend__llds_out__llds_out_code_addr__Variant_44 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__llds_out__llds_out_code_addr__CodeAddr_6, (MR_Integer) 1)));

#line 209 "llds_out_code_addr.m"
              {
#line 209 "llds_out_code_addr.m"
                mercury__io__write_string_3_p_0((MR_String) "MR_declare_entry(mercury__do_call_class_method_");
              }
#line 239 "llds_out_code_addr.m"
              if ((ll_backend__llds_out__llds_out_code_addr__Variant_44 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 240 "llds_out_code_addr.m"
                ll_backend__llds_out__llds_out_code_addr__V_19_19 = (MR_String) "compact";
#line 239 "llds_out_code_addr.m"
              else
#line 242 "llds_out_code_addr.m"
                {
#line 242 "llds_out_code_addr.m"
                  MR_Integer ll_backend__llds_out__llds_out_code_addr__Num_89 = ((MR_Integer) (MR_hl_field(MR_mktag(1), ll_backend__llds_out__llds_out_code_addr__Variant_44, (MR_Integer) 0)));

#line 243 "llds_out_code_addr.m"
                  {
#line 243 "llds_out_code_addr.m"
                    ll_backend__llds_out__llds_out_code_addr__V_19_19 = mercury__string__int_to_string_1_f_0(ll_backend__llds_out__llds_out_code_addr__Num_89);
                  }
#line 242 "llds_out_code_addr.m"
                }
#line 211 "llds_out_code_addr.m"
              {
#line 211 "llds_out_code_addr.m"
                mercury__io__write_string_3_p_0(ll_backend__llds_out__llds_out_code_addr__V_19_19);
              }
#line 212 "llds_out_code_addr.m"
              {
#line 212 "llds_out_code_addr.m"
                mercury__io__write_string_3_p_0((MR_String) ");\n");
              }
#line 208 "llds_out_code_addr.m"
            }
#line 165 "llds_out_code_addr.m"
            break;
#line 165 "llds_out_code_addr.m"
        }
#line 165 "llds_out_code_addr.m"
        break;
#line 165 "llds_out_code_addr.m"
    }
#line 165 "llds_out_code_addr.m"
  }
#line 160 "llds_out_code_addr.m"
}

#line 74 "llds_out_code_addr.m"
MR_Word MR_CALL 
ll_backend__llds_out__llds_out_code_addr__label_is_external_to_c_module_1_f_0(
#line 74 "llds_out_code_addr.m"
  MR_Word ll_backend__llds_out__llds_out_code_addr__HeadVar__1_1)
#line 74 "llds_out_code_addr.m"
{
#line 414 "llds_out_code_addr.m"
  {
#line 414 "llds_out_code_addr.m"
    MR_bool ll_backend__llds_out__llds_out_code_addr__succeeded;
#line 414 "llds_out_code_addr.m"
    MR_Word ll_backend__llds_out__llds_out_code_addr__HeadVar__2_2;

#line 414 "llds_out_code_addr.m"
    if (((MR_tag((MR_Word) ll_backend__llds_out__llds_out_code_addr__HeadVar__1_1)) == (MR_mktag((MR_Integer) 1))))
#line 414 "llds_out_code_addr.m"
      {
#line 414 "llds_out_code_addr.m"
        MR_Word ll_backend__llds_out__llds_out_code_addr__V_12_12 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__llds_out__llds_out_code_addr__HeadVar__1_1, (MR_Integer) 0)));
#line 414 "llds_out_code_addr.m"
        MR_Word ll_backend__llds_out__llds_out_code_addr__V_11_11 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__llds_out__llds_out_code_addr__HeadVar__1_1, (MR_Integer) 1)));

#line 414 "llds_out_code_addr.m"
#line 414 "llds_out_code_addr.m"
        switch (ll_backend__llds_out__llds_out_code_addr__V_12_12) {
#line 414 "llds_out_code_addr.m"
          default: /*NOTREACHED*/ MR_assert(0);
#line 414 "llds_out_code_addr.m"
          case (MR_Integer) 0:
#line 416 "llds_out_code_addr.m"
            ll_backend__llds_out__llds_out_code_addr__HeadVar__2_2 = (MR_Integer) 0;
#line 414 "llds_out_code_addr.m"
            break;
#line 414 "llds_out_code_addr.m"
          case (MR_Integer) 2:
#line 414 "llds_out_code_addr.m"
            ll_backend__llds_out__llds_out_code_addr__HeadVar__2_2 = (MR_Integer) 1;
#line 414 "llds_out_code_addr.m"
            break;
#line 414 "llds_out_code_addr.m"
          case (MR_Integer) 1:
#line 415 "llds_out_code_addr.m"
            ll_backend__llds_out__llds_out_code_addr__HeadVar__2_2 = (MR_Integer) 1;
#line 414 "llds_out_code_addr.m"
            break;
#line 414 "llds_out_code_addr.m"
        }
#line 414 "llds_out_code_addr.m"
      }
#line 414 "llds_out_code_addr.m"
    else
#line 417 "llds_out_code_addr.m"
      ll_backend__llds_out__llds_out_code_addr__HeadVar__2_2 = (MR_Integer) 0;
#line 414 "llds_out_code_addr.m"
    return ll_backend__llds_out__llds_out_code_addr__HeadVar__2_2;
#line 414 "llds_out_code_addr.m"
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
#line 332 "llds_out_code_addr.m"
  {
#line 332 "llds_out_code_addr.m"
    MR_bool ll_backend__llds_out__llds_out_code_addr__succeeded;

#line 332 "llds_out_code_addr.m"
#line 332 "llds_out_code_addr.m"
    switch (MR_tag((MR_Word) ll_backend__llds_out__llds_out_code_addr__CodeAddr_5)) {
#line 332 "llds_out_code_addr.m"
      default: /*NOTREACHED*/ MR_assert(0);
#line 332 "llds_out_code_addr.m"
      case (MR_Integer) 0:
#line 332 "llds_out_code_addr.m"
#line 332 "llds_out_code_addr.m"
        switch (MR_unmkbody(ll_backend__llds_out__llds_out_code_addr__CodeAddr_5)) {
#line 332 "llds_out_code_addr.m"
          default: /*NOTREACHED*/ MR_assert(0);
#line 332 "llds_out_code_addr.m"
          case (MR_Integer) 0:
#line 349 "llds_out_code_addr.m"
            {
#line 350 "llds_out_code_addr.m"
              *ll_backend__llds_out__llds_out_code_addr__BaseStr_6 = (MR_String) "MR_succip";
#line 351 "llds_out_code_addr.m"
              *ll_backend__llds_out__llds_out_code_addr__NeedsPrefix_7 = (MR_Integer) 0;
#line 352 "llds_out_code_addr.m"
              *ll_backend__llds_out__llds_out_code_addr__Wrapper_8 = (MR_Integer) 2;
#line 349 "llds_out_code_addr.m"
            }
#line 332 "llds_out_code_addr.m"
            break;
#line 332 "llds_out_code_addr.m"
          case (MR_Integer) 1:
#line 380 "llds_out_code_addr.m"
            {
#line 367 "llds_out_code_addr.m"
              *ll_backend__llds_out__llds_out_code_addr__BaseStr_6 = (MR_String) "MR_do_redo";
#line 381 "llds_out_code_addr.m"
              *ll_backend__llds_out__llds_out_code_addr__NeedsPrefix_7 = (MR_Integer) 0;
#line 382 "llds_out_code_addr.m"
              *ll_backend__llds_out__llds_out_code_addr__Wrapper_8 = (MR_Integer) 0;
#line 380 "llds_out_code_addr.m"
            }
#line 332 "llds_out_code_addr.m"
            break;
#line 332 "llds_out_code_addr.m"
          case (MR_Integer) 2:
#line 380 "llds_out_code_addr.m"
            {
#line 370 "llds_out_code_addr.m"
              *ll_backend__llds_out__llds_out_code_addr__BaseStr_6 = (MR_String) "MR_do_fail";
#line 381 "llds_out_code_addr.m"
              *ll_backend__llds_out__llds_out_code_addr__NeedsPrefix_7 = (MR_Integer) 0;
#line 382 "llds_out_code_addr.m"
              *ll_backend__llds_out__llds_out_code_addr__Wrapper_8 = (MR_Integer) 0;
#line 380 "llds_out_code_addr.m"
            }
#line 332 "llds_out_code_addr.m"
            break;
#line 332 "llds_out_code_addr.m"
          case (MR_Integer) 3:
#line 380 "llds_out_code_addr.m"
            {
#line 373 "llds_out_code_addr.m"
              *ll_backend__llds_out__llds_out_code_addr__BaseStr_6 = (MR_String) "MR_do_trace_redo_fail_shallow";
#line 381 "llds_out_code_addr.m"
              *ll_backend__llds_out__llds_out_code_addr__NeedsPrefix_7 = (MR_Integer) 0;
#line 382 "llds_out_code_addr.m"
              *ll_backend__llds_out__llds_out_code_addr__Wrapper_8 = (MR_Integer) 0;
#line 380 "llds_out_code_addr.m"
            }
#line 332 "llds_out_code_addr.m"
            break;
#line 332 "llds_out_code_addr.m"
          case (MR_Integer) 4:
#line 380 "llds_out_code_addr.m"
            {
#line 376 "llds_out_code_addr.m"
              *ll_backend__llds_out__llds_out_code_addr__BaseStr_6 = (MR_String) "MR_do_trace_redo_fail_deep";
#line 381 "llds_out_code_addr.m"
              *ll_backend__llds_out__llds_out_code_addr__NeedsPrefix_7 = (MR_Integer) 0;
#line 382 "llds_out_code_addr.m"
              *ll_backend__llds_out__llds_out_code_addr__Wrapper_8 = (MR_Integer) 0;
#line 380 "llds_out_code_addr.m"
            }
#line 332 "llds_out_code_addr.m"
            break;
#line 332 "llds_out_code_addr.m"
          case (MR_Integer) 5:
#line 380 "llds_out_code_addr.m"
            {
#line 379 "llds_out_code_addr.m"
              *ll_backend__llds_out__llds_out_code_addr__BaseStr_6 = (MR_String) "MR_do_not_reached";
#line 381 "llds_out_code_addr.m"
              *ll_backend__llds_out__llds_out_code_addr__NeedsPrefix_7 = (MR_Integer) 0;
#line 382 "llds_out_code_addr.m"
              *ll_backend__llds_out__llds_out_code_addr__Wrapper_8 = (MR_Integer) 0;
#line 380 "llds_out_code_addr.m"
            }
#line 332 "llds_out_code_addr.m"
            break;
#line 332 "llds_out_code_addr.m"
        }
#line 332 "llds_out_code_addr.m"
        break;
#line 332 "llds_out_code_addr.m"
      case (MR_Integer) 1:
#line 332 "llds_out_code_addr.m"
        {
#line 332 "llds_out_code_addr.m"
          MR_Word ll_backend__llds_out__llds_out_code_addr__Label_9 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__llds_out__llds_out_code_addr__CodeAddr_5, (MR_Integer) 0)));

#line 333 "llds_out_code_addr.m"
          {
#line 333 "llds_out_code_addr.m"
            *ll_backend__llds_out__llds_out_code_addr__BaseStr_6 = ll_backend__llds_out__llds_out_code_addr__label_to_c_string_2_f_0(ll_backend__llds_out__llds_out_code_addr__Label_9, (MR_Integer) 0);
          }
#line 334 "llds_out_code_addr.m"
          *ll_backend__llds_out__llds_out_code_addr__NeedsPrefix_7 = (MR_Integer) 1;
#line 1057 "ll_backend.llds_out.llds_out_code_addr.c"
          if (((MR_tag((MR_Word) ll_backend__llds_out__llds_out_code_addr__Label_9)) == (MR_mktag((MR_Integer) 1))))
#line 1059 "ll_backend.llds_out.llds_out_code_addr.c"
            {
#line 1061 "ll_backend.llds_out.llds_out_code_addr.c"
              MR_Word ll_backend__llds_out__llds_out_code_addr__V_30_30 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__llds_out__llds_out_code_addr__Label_9, (MR_Integer) 0)));
#line 414 "llds_out_code_addr.m"
              MR_Word ll_backend__llds_out__llds_out_code_addr__V_29_29 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__llds_out__llds_out_code_addr__Label_9, (MR_Integer) 1)));

#line 1066 "ll_backend.llds_out.llds_out_code_addr.c"
#line 1067 "ll_backend.llds_out.llds_out_code_addr.c"
              switch (ll_backend__llds_out__llds_out_code_addr__V_30_30) {
#line 1069 "ll_backend.llds_out.llds_out_code_addr.c"
                default: /*NOTREACHED*/ MR_assert(0);
#line 1071 "ll_backend.llds_out.llds_out_code_addr.c"
                case (MR_Integer) 0:
#line 341 "llds_out_code_addr.m"
                  *ll_backend__llds_out__llds_out_code_addr__Wrapper_8 = (MR_Integer) 1;
#line 1075 "ll_backend.llds_out.llds_out_code_addr.c"
                  break;
#line 1077 "ll_backend.llds_out.llds_out_code_addr.c"
                case (MR_Integer) 2:
#line 338 "llds_out_code_addr.m"
                  *ll_backend__llds_out__llds_out_code_addr__Wrapper_8 = (MR_Integer) 0;
#line 1081 "ll_backend.llds_out.llds_out_code_addr.c"
                  break;
#line 1083 "ll_backend.llds_out.llds_out_code_addr.c"
                case (MR_Integer) 1:
#line 338 "llds_out_code_addr.m"
                  *ll_backend__llds_out__llds_out_code_addr__Wrapper_8 = (MR_Integer) 0;
#line 1087 "ll_backend.llds_out.llds_out_code_addr.c"
                  break;
#line 1089 "ll_backend.llds_out.llds_out_code_addr.c"
              }
#line 1091 "ll_backend.llds_out.llds_out_code_addr.c"
            }
#line 1093 "ll_backend.llds_out.llds_out_code_addr.c"
          else
#line 341 "llds_out_code_addr.m"
            *ll_backend__llds_out__llds_out_code_addr__Wrapper_8 = (MR_Integer) 1;
#line 332 "llds_out_code_addr.m"
        }
#line 332 "llds_out_code_addr.m"
        break;
#line 332 "llds_out_code_addr.m"
      case (MR_Integer) 2:
#line 344 "llds_out_code_addr.m"
        {
#line 344 "llds_out_code_addr.m"
          MR_Word ll_backend__llds_out__llds_out_code_addr__ProcLabel_11 = ((MR_Word) (MR_hl_field(MR_mktag(2), ll_backend__llds_out__llds_out_code_addr__CodeAddr_5, (MR_Integer) 0)));

#line 345 "llds_out_code_addr.m"
          {
#line 345 "llds_out_code_addr.m"
            *ll_backend__llds_out__llds_out_code_addr__BaseStr_6 = backend_libs__name_mangle__proc_label_to_c_string_2_f_0(ll_backend__llds_out__llds_out_code_addr__ProcLabel_11, (MR_Integer) 0);
          }
#line 346 "llds_out_code_addr.m"
          *ll_backend__llds_out__llds_out_code_addr__NeedsPrefix_7 = (MR_Integer) 1;
#line 347 "llds_out_code_addr.m"
          *ll_backend__llds_out__llds_out_code_addr__Wrapper_8 = (MR_Integer) 0;
#line 344 "llds_out_code_addr.m"
        }
#line 332 "llds_out_code_addr.m"
        break;
#line 332 "llds_out_code_addr.m"
      case (MR_Integer) 3:
#line 332 "llds_out_code_addr.m"
#line 332 "llds_out_code_addr.m"
        switch (((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__llds_out__llds_out_code_addr__CodeAddr_5, (MR_Integer) 0)))) {
#line 332 "llds_out_code_addr.m"
          default: /*NOTREACHED*/ MR_assert(0);
#line 332 "llds_out_code_addr.m"
          case (MR_Integer) 0:
#line 354 "llds_out_code_addr.m"
            {
#line 354 "llds_out_code_addr.m"
              MR_Word ll_backend__llds_out__llds_out_code_addr__Last_12 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__llds_out__llds_out_code_addr__CodeAddr_5, (MR_Integer) 1)));

#line 358 "llds_out_code_addr.m"
#line 358 "llds_out_code_addr.m"
              switch (ll_backend__llds_out__llds_out_code_addr__Last_12) {
#line 358 "llds_out_code_addr.m"
                default: /*NOTREACHED*/ MR_assert(0);
#line 358 "llds_out_code_addr.m"
                case (MR_Integer) 0:
#line 357 "llds_out_code_addr.m"
                  *ll_backend__llds_out__llds_out_code_addr__BaseStr_6 = (MR_String) "MR_do_succeed";
#line 358 "llds_out_code_addr.m"
                  break;
#line 358 "llds_out_code_addr.m"
                case (MR_Integer) 1:
#line 360 "llds_out_code_addr.m"
                  *ll_backend__llds_out__llds_out_code_addr__BaseStr_6 = (MR_String) "MR_do_last_succeed";
#line 358 "llds_out_code_addr.m"
                  break;
#line 358 "llds_out_code_addr.m"
              }
#line 362 "llds_out_code_addr.m"
              *ll_backend__llds_out__llds_out_code_addr__NeedsPrefix_7 = (MR_Integer) 0;
#line 363 "llds_out_code_addr.m"
              *ll_backend__llds_out__llds_out_code_addr__Wrapper_8 = (MR_Integer) 0;
#line 354 "llds_out_code_addr.m"
            }
#line 332 "llds_out_code_addr.m"
            break;
#line 332 "llds_out_code_addr.m"
          case (MR_Integer) 1:
#line 384 "llds_out_code_addr.m"
            {
#line 384 "llds_out_code_addr.m"
              MR_Word ll_backend__llds_out__llds_out_code_addr__Variant_13 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__llds_out__llds_out_code_addr__CodeAddr_5, (MR_Integer) 1)));
#line 384 "llds_out_code_addr.m"
              MR_String ll_backend__llds_out__llds_out_code_addr__V_17_17;

#line 239 "llds_out_code_addr.m"
              if ((ll_backend__llds_out__llds_out_code_addr__Variant_13 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 240 "llds_out_code_addr.m"
                ll_backend__llds_out__llds_out_code_addr__V_17_17 = (MR_String) "compact";
#line 239 "llds_out_code_addr.m"
              else
#line 242 "llds_out_code_addr.m"
                {
#line 242 "llds_out_code_addr.m"
                  MR_Integer ll_backend__llds_out__llds_out_code_addr__Num_36 = ((MR_Integer) (MR_hl_field(MR_mktag(1), ll_backend__llds_out__llds_out_code_addr__Variant_13, (MR_Integer) 0)));

#line 243 "llds_out_code_addr.m"
                  {
#line 243 "llds_out_code_addr.m"
                    ll_backend__llds_out__llds_out_code_addr__V_17_17 = mercury__string__int_to_string_1_f_0(ll_backend__llds_out__llds_out_code_addr__Num_36);
                  }
#line 242 "llds_out_code_addr.m"
                }
#line 385 "llds_out_code_addr.m"
              {
#line 385 "llds_out_code_addr.m"
                *ll_backend__llds_out__llds_out_code_addr__BaseStr_6 = mercury__string__f_43_43_2_f_0((MR_String) "mercury__do_call_closure_", ll_backend__llds_out__llds_out_code_addr__V_17_17);
              }
#line 387 "llds_out_code_addr.m"
              *ll_backend__llds_out__llds_out_code_addr__NeedsPrefix_7 = (MR_Integer) 0;
#line 388 "llds_out_code_addr.m"
              *ll_backend__llds_out__llds_out_code_addr__Wrapper_8 = (MR_Integer) 0;
#line 384 "llds_out_code_addr.m"
            }
#line 332 "llds_out_code_addr.m"
            break;
#line 332 "llds_out_code_addr.m"
          case (MR_Integer) 2:
#line 390 "llds_out_code_addr.m"
            {
#line 390 "llds_out_code_addr.m"
              MR_String ll_backend__llds_out__llds_out_code_addr__V_15_15;
#line 390 "llds_out_code_addr.m"
              MR_Word ll_backend__llds_out__llds_out_code_addr__Variant_20 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__llds_out__llds_out_code_addr__CodeAddr_5, (MR_Integer) 1)));

#line 239 "llds_out_code_addr.m"
              if ((ll_backend__llds_out__llds_out_code_addr__Variant_20 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 240 "llds_out_code_addr.m"
                ll_backend__llds_out__llds_out_code_addr__V_15_15 = (MR_String) "compact";
#line 239 "llds_out_code_addr.m"
              else
#line 242 "llds_out_code_addr.m"
                {
#line 242 "llds_out_code_addr.m"
                  MR_Integer ll_backend__llds_out__llds_out_code_addr__Num_33 = ((MR_Integer) (MR_hl_field(MR_mktag(1), ll_backend__llds_out__llds_out_code_addr__Variant_20, (MR_Integer) 0)));

#line 243 "llds_out_code_addr.m"
                  {
#line 243 "llds_out_code_addr.m"
                    ll_backend__llds_out__llds_out_code_addr__V_15_15 = mercury__string__int_to_string_1_f_0(ll_backend__llds_out__llds_out_code_addr__Num_33);
                  }
#line 242 "llds_out_code_addr.m"
                }
#line 391 "llds_out_code_addr.m"
              {
#line 391 "llds_out_code_addr.m"
                *ll_backend__llds_out__llds_out_code_addr__BaseStr_6 = mercury__string__f_43_43_2_f_0((MR_String) "mercury__do_call_class_method_", ll_backend__llds_out__llds_out_code_addr__V_15_15);
              }
#line 393 "llds_out_code_addr.m"
              *ll_backend__llds_out__llds_out_code_addr__NeedsPrefix_7 = (MR_Integer) 0;
#line 394 "llds_out_code_addr.m"
              *ll_backend__llds_out__llds_out_code_addr__Wrapper_8 = (MR_Integer) 0;
#line 390 "llds_out_code_addr.m"
            }
#line 332 "llds_out_code_addr.m"
            break;
#line 332 "llds_out_code_addr.m"
        }
#line 332 "llds_out_code_addr.m"
        break;
#line 332 "llds_out_code_addr.m"
    }
#line 332 "llds_out_code_addr.m"
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
#line 397 "llds_out_code_addr.m"
  {
#line 397 "llds_out_code_addr.m"
    MR_bool ll_backend__llds_out__llds_out_code_addr__succeeded;
#line 397 "llds_out_code_addr.m"
    MR_String ll_backend__llds_out__llds_out_code_addr__Str_6;
#line 397 "llds_out_code_addr.m"
    MR_String ll_backend__llds_out__llds_out_code_addr__LabelStr_12;

#line 404 "llds_out_code_addr.m"
    {
#line 404 "llds_out_code_addr.m"
      ll_backend__llds_out__llds_out_code_addr__LabelStr_12 = ll_backend__llds_out__llds_out_code_addr__label_to_c_string_2_f_0(ll_backend__llds_out__llds_out_code_addr__Label_4, (MR_Integer) 0);
    }
#line 1274 "ll_backend.llds_out.llds_out_code_addr.c"
    if (((MR_tag((MR_Word) ll_backend__llds_out__llds_out_code_addr__Label_4)) == (MR_mktag((MR_Integer) 1))))
#line 1276 "ll_backend.llds_out.llds_out_code_addr.c"
      {
#line 1278 "ll_backend.llds_out.llds_out_code_addr.c"
        MR_Word ll_backend__llds_out__llds_out_code_addr__V_30_30 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__llds_out__llds_out_code_addr__Label_4, (MR_Integer) 0)));
#line 414 "llds_out_code_addr.m"
        MR_Word ll_backend__llds_out__llds_out_code_addr__V_29_29 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__llds_out__llds_out_code_addr__Label_4, (MR_Integer) 1)));

#line 1283 "ll_backend.llds_out.llds_out_code_addr.c"
#line 1284 "ll_backend.llds_out.llds_out_code_addr.c"
        switch (ll_backend__llds_out__llds_out_code_addr__V_30_30) {
#line 1286 "ll_backend.llds_out.llds_out_code_addr.c"
          default: /*NOTREACHED*/ MR_assert(0);
#line 1288 "ll_backend.llds_out.llds_out_code_addr.c"
          case (MR_Integer) 0:
#line 1290 "ll_backend.llds_out.llds_out_code_addr.c"
            {
#line 1292 "ll_backend.llds_out.llds_out_code_addr.c"
              MR_String ll_backend__llds_out__llds_out_code_addr__V_16_16;

#line 411 "llds_out_code_addr.m"
              {
#line 411 "llds_out_code_addr.m"
                ll_backend__llds_out__llds_out_code_addr__V_16_16 = mercury__string__f_43_43_2_f_0(ll_backend__llds_out__llds_out_code_addr__LabelStr_12, (MR_String) ")");
              }
#line 411 "llds_out_code_addr.m"
              {
#line 411 "llds_out_code_addr.m"
                ll_backend__llds_out__llds_out_code_addr__Str_6 = mercury__string__f_43_43_2_f_0((MR_String) "MR_LABEL_AP(", ll_backend__llds_out__llds_out_code_addr__V_16_16);
              }
#line 1305 "ll_backend.llds_out.llds_out_code_addr.c"
            }
#line 1307 "ll_backend.llds_out.llds_out_code_addr.c"
            break;
#line 1309 "ll_backend.llds_out.llds_out_code_addr.c"
          case (MR_Integer) 2:
#line 1311 "ll_backend.llds_out.llds_out_code_addr.c"
            {
#line 1313 "ll_backend.llds_out.llds_out_code_addr.c"
              MR_String ll_backend__llds_out__llds_out_code_addr__V_19_19;

#line 408 "llds_out_code_addr.m"
              {
#line 408 "llds_out_code_addr.m"
                ll_backend__llds_out__llds_out_code_addr__V_19_19 = mercury__string__f_43_43_2_f_0(ll_backend__llds_out__llds_out_code_addr__LabelStr_12, (MR_String) ")");
              }
#line 408 "llds_out_code_addr.m"
              {
#line 408 "llds_out_code_addr.m"
                ll_backend__llds_out__llds_out_code_addr__Str_6 = mercury__string__f_43_43_2_f_0((MR_String) "MR_ENTRY_AP(", ll_backend__llds_out__llds_out_code_addr__V_19_19);
              }
#line 1326 "ll_backend.llds_out.llds_out_code_addr.c"
            }
#line 1328 "ll_backend.llds_out.llds_out_code_addr.c"
            break;
#line 1330 "ll_backend.llds_out.llds_out_code_addr.c"
          case (MR_Integer) 1:
#line 1332 "ll_backend.llds_out.llds_out_code_addr.c"
            {
#line 1334 "ll_backend.llds_out.llds_out_code_addr.c"
              MR_String ll_backend__llds_out__llds_out_code_addr__V_41_41;

#line 408 "llds_out_code_addr.m"
              {
#line 408 "llds_out_code_addr.m"
                ll_backend__llds_out__llds_out_code_addr__V_41_41 = mercury__string__f_43_43_2_f_0(ll_backend__llds_out__llds_out_code_addr__LabelStr_12, (MR_String) ")");
              }
#line 408 "llds_out_code_addr.m"
              {
#line 408 "llds_out_code_addr.m"
                ll_backend__llds_out__llds_out_code_addr__Str_6 = mercury__string__f_43_43_2_f_0((MR_String) "MR_ENTRY_AP(", ll_backend__llds_out__llds_out_code_addr__V_41_41);
              }
#line 1347 "ll_backend.llds_out.llds_out_code_addr.c"
            }
#line 1349 "ll_backend.llds_out.llds_out_code_addr.c"
            break;
#line 1351 "ll_backend.llds_out.llds_out_code_addr.c"
        }
#line 1353 "ll_backend.llds_out.llds_out_code_addr.c"
      }
#line 1355 "ll_backend.llds_out.llds_out_code_addr.c"
    else
#line 1357 "ll_backend.llds_out.llds_out_code_addr.c"
      {
#line 1359 "ll_backend.llds_out.llds_out_code_addr.c"
        MR_String ll_backend__llds_out__llds_out_code_addr__V_34_34;

#line 411 "llds_out_code_addr.m"
        {
#line 411 "llds_out_code_addr.m"
          ll_backend__llds_out__llds_out_code_addr__V_34_34 = mercury__string__f_43_43_2_f_0(ll_backend__llds_out__llds_out_code_addr__LabelStr_12, (MR_String) ")");
        }
#line 411 "llds_out_code_addr.m"
        {
#line 411 "llds_out_code_addr.m"
          ll_backend__llds_out__llds_out_code_addr__Str_6 = mercury__string__f_43_43_2_f_0((MR_String) "MR_LABEL_AP(", ll_backend__llds_out__llds_out_code_addr__V_34_34);
        }
#line 1372 "ll_backend.llds_out.llds_out_code_addr.c"
      }
#line 399 "llds_out_code_addr.m"
    {
#line 399 "llds_out_code_addr.m"
      mercury__io__write_string_3_p_0(ll_backend__llds_out__llds_out_code_addr__Str_6);
    }
#line 397 "llds_out_code_addr.m"
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
#line 292 "llds_out_code_addr.m"
  {
#line 292 "llds_out_code_addr.m"
    MR_bool ll_backend__llds_out__llds_out_code_addr__succeeded;

#line 292 "llds_out_code_addr.m"
#line 292 "llds_out_code_addr.m"
    switch (ll_backend__llds_out__llds_out_code_addr__NeedsPrefix_7) {
#line 292 "llds_out_code_addr.m"
      default: /*NOTREACHED*/ MR_assert(0);
#line 292 "llds_out_code_addr.m"
      case (MR_Integer) 0:
#line 292 "llds_out_code_addr.m"
#line 292 "llds_out_code_addr.m"
        switch (ll_backend__llds_out__llds_out_code_addr__Wrapper_8) {
#line 292 "llds_out_code_addr.m"
          default: /*NOTREACHED*/ MR_assert(0);
#line 292 "llds_out_code_addr.m"
          case (MR_Integer) 0:
#line 301 "llds_out_code_addr.m"
            {
#line 310 "llds_out_code_addr.m"
              {
#line 310 "llds_out_code_addr.m"
                mercury__io__write_string_3_p_0((MR_String) "MR_ENTRY(");
              }
#line 311 "llds_out_code_addr.m"
              {
#line 311 "llds_out_code_addr.m"
                mercury__io__write_string_3_p_0(ll_backend__llds_out__llds_out_code_addr__BaseStr_6);
              }
#line 312 "llds_out_code_addr.m"
              {
#line 312 "llds_out_code_addr.m"
                mercury__io__write_string_3_p_0((MR_String) ")");
              }
#line 301 "llds_out_code_addr.m"
            }
#line 292 "llds_out_code_addr.m"
            break;
#line 292 "llds_out_code_addr.m"
          case (MR_Integer) 1:
#line 315 "llds_out_code_addr.m"
            {
#line 324 "llds_out_code_addr.m"
              {
#line 324 "llds_out_code_addr.m"
                mercury__io__write_string_3_p_0((MR_String) "MR_LABEL(");
              }
#line 325 "llds_out_code_addr.m"
              {
#line 325 "llds_out_code_addr.m"
                mercury__io__write_string_3_p_0(ll_backend__llds_out__llds_out_code_addr__BaseStr_6);
              }
#line 326 "llds_out_code_addr.m"
              {
#line 326 "llds_out_code_addr.m"
                mercury__io__write_string_3_p_0((MR_String) ")");
              }
#line 315 "llds_out_code_addr.m"
            }
#line 292 "llds_out_code_addr.m"
            break;
#line 292 "llds_out_code_addr.m"
          case (MR_Integer) 2:
#line 299 "llds_out_code_addr.m"
            {
#line 299 "llds_out_code_addr.m"
              mercury__io__write_string_3_p_0(ll_backend__llds_out__llds_out_code_addr__BaseStr_6);
            }
#line 292 "llds_out_code_addr.m"
            break;
#line 292 "llds_out_code_addr.m"
        }
#line 292 "llds_out_code_addr.m"
        break;
#line 292 "llds_out_code_addr.m"
      case (MR_Integer) 1:
#line 292 "llds_out_code_addr.m"
#line 292 "llds_out_code_addr.m"
        switch (ll_backend__llds_out__llds_out_code_addr__Wrapper_8) {
#line 292 "llds_out_code_addr.m"
          default: /*NOTREACHED*/ MR_assert(0);
#line 292 "llds_out_code_addr.m"
          case (MR_Integer) 0:
#line 301 "llds_out_code_addr.m"
            {
#line 305 "llds_out_code_addr.m"
              {
#line 305 "llds_out_code_addr.m"
                mercury__io__write_string_3_p_0((MR_String) "MR_ENTRY_AP(");
              }
#line 306 "llds_out_code_addr.m"
              {
#line 306 "llds_out_code_addr.m"
                mercury__io__write_string_3_p_0(ll_backend__llds_out__llds_out_code_addr__BaseStr_6);
              }
#line 307 "llds_out_code_addr.m"
              {
#line 307 "llds_out_code_addr.m"
                mercury__io__write_string_3_p_0((MR_String) ")");
              }
#line 301 "llds_out_code_addr.m"
            }
#line 292 "llds_out_code_addr.m"
            break;
#line 292 "llds_out_code_addr.m"
          case (MR_Integer) 1:
#line 315 "llds_out_code_addr.m"
            {
#line 319 "llds_out_code_addr.m"
              {
#line 319 "llds_out_code_addr.m"
                mercury__io__write_string_3_p_0((MR_String) "MR_LABEL_AP(");
              }
#line 320 "llds_out_code_addr.m"
              {
#line 320 "llds_out_code_addr.m"
                mercury__io__write_string_3_p_0(ll_backend__llds_out__llds_out_code_addr__BaseStr_6);
              }
#line 321 "llds_out_code_addr.m"
              {
#line 321 "llds_out_code_addr.m"
                mercury__io__write_string_3_p_0((MR_String) ")");
              }
#line 315 "llds_out_code_addr.m"
            }
#line 292 "llds_out_code_addr.m"
            break;
#line 292 "llds_out_code_addr.m"
          case (MR_Integer) 2:
#line 292 "llds_out_code_addr.m"
            {
#line 292 "llds_out_code_addr.m"
              MR_String ll_backend__llds_out__llds_out_code_addr__V_32_32;

#line 295 "llds_out_code_addr.m"
              {
#line 295 "llds_out_code_addr.m"
                ll_backend__llds_out__llds_out_code_addr__V_32_32 = backend_libs__name_mangle__mercury_label_prefix_0_f_0();
              }
#line 295 "llds_out_code_addr.m"
              {
#line 295 "llds_out_code_addr.m"
                mercury__io__write_string_3_p_0(ll_backend__llds_out__llds_out_code_addr__V_32_32);
              }
#line 299 "llds_out_code_addr.m"
              {
#line 299 "llds_out_code_addr.m"
                mercury__io__write_string_3_p_0(ll_backend__llds_out__llds_out_code_addr__BaseStr_6);
              }
#line 292 "llds_out_code_addr.m"
            }
#line 292 "llds_out_code_addr.m"
            break;
#line 292 "llds_out_code_addr.m"
        }
#line 292 "llds_out_code_addr.m"
        break;
#line 292 "llds_out_code_addr.m"
    }
#line 292 "llds_out_code_addr.m"
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
#line 286 "llds_out_code_addr.m"
  {
#line 286 "llds_out_code_addr.m"
    MR_bool ll_backend__llds_out__llds_out_code_addr__succeeded;
#line 286 "llds_out_code_addr.m"
    MR_String ll_backend__llds_out__llds_out_code_addr__BaseStr_6;
#line 286 "llds_out_code_addr.m"
    MR_Word ll_backend__llds_out__llds_out_code_addr__NeedsPrefix_7;
#line 286 "llds_out_code_addr.m"
    MR_Word ll_backend__llds_out__llds_out_code_addr__Wrapper_8;

#line 287 "llds_out_code_addr.m"
    {
#line 287 "llds_out_code_addr.m"
      ll_backend__llds_out__llds_out_code_addr__code_addr_to_string_base_4_p_0(ll_backend__llds_out__llds_out_code_addr__CodeAddr_4, &ll_backend__llds_out__llds_out_code_addr__BaseStr_6, &ll_backend__llds_out__llds_out_code_addr__NeedsPrefix_7, &ll_backend__llds_out__llds_out_code_addr__Wrapper_8);
    }
#line 288 "llds_out_code_addr.m"
    {
#line 288 "llds_out_code_addr.m"
      ll_backend__llds_out__llds_out_code_addr__output_code_addr_from_pieces_5_p_0(ll_backend__llds_out__llds_out_code_addr__BaseStr_6, ll_backend__llds_out__llds_out_code_addr__NeedsPrefix_7, ll_backend__llds_out__llds_out_code_addr__Wrapper_8);
    }
#line 286 "llds_out_code_addr.m"
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
#line 265 "llds_out_code_addr.m"
  {
#line 265 "llds_out_code_addr.m"
    MR_bool ll_backend__llds_out__llds_out_code_addr__succeeded;
#line 265 "llds_out_code_addr.m"
    MR_String ll_backend__llds_out__llds_out_code_addr__LabelStr_6;

#line 265 "llds_out_code_addr.m"
    if (((MR_tag((MR_Word) ll_backend__llds_out__llds_out_code_addr__Label_4)) == (MR_mktag((MR_Integer) 1))))
#line 265 "llds_out_code_addr.m"
      {
#line 265 "llds_out_code_addr.m"
        MR_Word ll_backend__llds_out__llds_out_code_addr__ProcLabel_8 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__llds_out__llds_out_code_addr__Label_4, (MR_Integer) 1)));
#line 265 "llds_out_code_addr.m"
        MR_Word ll_backend__llds_out__llds_out_code_addr__V_7_7 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__llds_out__llds_out_code_addr__Label_4, (MR_Integer) 0)));

#line 273 "llds_out_code_addr.m"
        {
#line 273 "llds_out_code_addr.m"
          ll_backend__llds_out__llds_out_code_addr__LabelStr_6 = backend_libs__name_mangle__proc_label_to_c_string_2_f_0(ll_backend__llds_out__llds_out_code_addr__ProcLabel_8, ll_backend__llds_out__llds_out_code_addr__AddPrefix_5);
        }
#line 265 "llds_out_code_addr.m"
      }
#line 265 "llds_out_code_addr.m"
    else
#line 275 "llds_out_code_addr.m"
      {
#line 275 "llds_out_code_addr.m"
        MR_Integer ll_backend__llds_out__llds_out_code_addr__Num_9 = ((MR_Integer) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_code_addr__Label_4, (MR_Integer) 0)));
#line 275 "llds_out_code_addr.m"
        MR_String ll_backend__llds_out__llds_out_code_addr__ProcLabelStr_10;
#line 275 "llds_out_code_addr.m"
        MR_String ll_backend__llds_out__llds_out_code_addr__NumStr_11;
#line 275 "llds_out_code_addr.m"
        MR_String ll_backend__llds_out__llds_out_code_addr__V_12_12;
#line 275 "llds_out_code_addr.m"
        MR_Word ll_backend__llds_out__llds_out_code_addr__ProcLabel_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_code_addr__Label_4, (MR_Integer) 1)));

#line 276 "llds_out_code_addr.m"
        {
#line 276 "llds_out_code_addr.m"
          ll_backend__llds_out__llds_out_code_addr__ProcLabelStr_10 = backend_libs__name_mangle__proc_label_to_c_string_2_f_0(ll_backend__llds_out__llds_out_code_addr__ProcLabel_14, ll_backend__llds_out__llds_out_code_addr__AddPrefix_5);
        }
#line 277 "llds_out_code_addr.m"
        {
#line 277 "llds_out_code_addr.m"
          mercury__string__int_to_string_2_p_0(ll_backend__llds_out__llds_out_code_addr__Num_9, &ll_backend__llds_out__llds_out_code_addr__NumStr_11);
        }
#line 278 "llds_out_code_addr.m"
        {
#line 278 "llds_out_code_addr.m"
          ll_backend__llds_out__llds_out_code_addr__V_12_12 = mercury__string__f_43_43_2_f_0((MR_String) "_i", ll_backend__llds_out__llds_out_code_addr__NumStr_11);
        }
#line 278 "llds_out_code_addr.m"
        {
#line 278 "llds_out_code_addr.m"
          ll_backend__llds_out__llds_out_code_addr__LabelStr_6 = mercury__string__f_43_43_2_f_0(ll_backend__llds_out__llds_out_code_addr__ProcLabelStr_10, ll_backend__llds_out__llds_out_code_addr__V_12_12);
        }
#line 275 "llds_out_code_addr.m"
      }
#line 265 "llds_out_code_addr.m"
    return ll_backend__llds_out__llds_out_code_addr__LabelStr_6;
#line 265 "llds_out_code_addr.m"
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
#line 259 "llds_out_code_addr.m"
  {
#line 259 "llds_out_code_addr.m"
    MR_bool ll_backend__llds_out__llds_out_code_addr__succeeded;
#line 259 "llds_out_code_addr.m"
    MR_String ll_backend__llds_out__llds_out_code_addr__LabelStr_8;

#line 260 "llds_out_code_addr.m"
    {
#line 260 "llds_out_code_addr.m"
      ll_backend__llds_out__llds_out_code_addr__LabelStr_8 = ll_backend__llds_out__llds_out_code_addr__label_to_c_string_2_f_0(ll_backend__llds_out__llds_out_code_addr__Label_5, ll_backend__llds_out__llds_out_code_addr__AddPrefix_6);
    }
#line 261 "llds_out_code_addr.m"
    {
#line 261 "llds_out_code_addr.m"
      mercury__io__write_string_3_p_0(ll_backend__llds_out__llds_out_code_addr__LabelStr_8);
    }
#line 259 "llds_out_code_addr.m"
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
#line 255 "llds_out_code_addr.m"
  {
#line 255 "llds_out_code_addr.m"
    MR_bool ll_backend__llds_out__llds_out_code_addr__succeeded;
#line 255 "llds_out_code_addr.m"
    MR_String ll_backend__llds_out__llds_out_code_addr__LabelStr_6;

#line 256 "llds_out_code_addr.m"
    {
#line 256 "llds_out_code_addr.m"
      ll_backend__llds_out__llds_out_code_addr__LabelStr_6 = ll_backend__llds_out__llds_out_code_addr__label_to_c_string_2_f_0(ll_backend__llds_out__llds_out_code_addr__Label_4, (MR_Integer) 0);
    }
#line 257 "llds_out_code_addr.m"
    {
#line 257 "llds_out_code_addr.m"
      mercury__io__write_string_3_p_0(ll_backend__llds_out__llds_out_code_addr__LabelStr_6);
    }
#line 255 "llds_out_code_addr.m"
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
#line 251 "llds_out_code_addr.m"
  {
#line 251 "llds_out_code_addr.m"
    MR_bool ll_backend__llds_out__llds_out_code_addr__succeeded;
#line 251 "llds_out_code_addr.m"
    MR_String ll_backend__llds_out__llds_out_code_addr__LabelStr_6;

#line 252 "llds_out_code_addr.m"
    {
#line 252 "llds_out_code_addr.m"
      ll_backend__llds_out__llds_out_code_addr__LabelStr_6 = ll_backend__llds_out__llds_out_code_addr__label_to_c_string_2_f_0(ll_backend__llds_out__llds_out_code_addr__Label_4, (MR_Integer) 1);
    }
#line 253 "llds_out_code_addr.m"
    {
#line 253 "llds_out_code_addr.m"
      mercury__io__write_string_3_p_0(ll_backend__llds_out__llds_out_code_addr__LabelStr_6);
    }
#line 251 "llds_out_code_addr.m"
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
#line 239 "llds_out_code_addr.m"
  {
#line 239 "llds_out_code_addr.m"
    MR_bool ll_backend__llds_out__llds_out_code_addr__succeeded;
#line 239 "llds_out_code_addr.m"
    MR_String ll_backend__llds_out__llds_out_code_addr__Str_4;

#line 239 "llds_out_code_addr.m"
    if ((ll_backend__llds_out__llds_out_code_addr__Variant_3 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 240 "llds_out_code_addr.m"
      ll_backend__llds_out__llds_out_code_addr__Str_4 = (MR_String) "compact";
#line 239 "llds_out_code_addr.m"
    else
#line 242 "llds_out_code_addr.m"
      {
#line 242 "llds_out_code_addr.m"
        MR_Integer ll_backend__llds_out__llds_out_code_addr__Num_5 = ((MR_Integer) (MR_hl_field(MR_mktag(1), ll_backend__llds_out__llds_out_code_addr__Variant_3, (MR_Integer) 0)));

#line 243 "llds_out_code_addr.m"
        {
#line 243 "llds_out_code_addr.m"
          ll_backend__llds_out__llds_out_code_addr__Str_4 = mercury__string__int_to_string_1_f_0(ll_backend__llds_out__llds_out_code_addr__Num_5);
        }
#line 242 "llds_out_code_addr.m"
      }
#line 239 "llds_out_code_addr.m"
    return ll_backend__llds_out__llds_out_code_addr__Str_4;
#line 239 "llds_out_code_addr.m"
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
#line 98 "llds_out_code_addr.m"
  {
#line 98 "llds_out_code_addr.m"
    MR_bool ll_backend__llds_out__llds_out_code_addr__succeeded;
#line 98 "llds_out_code_addr.m"
    MR_Word ll_backend__llds_out__llds_out_code_addr__V_25_25;

#line 98 "llds_out_code_addr.m"
    {
#line 98 "llds_out_code_addr.m"
      ll_backend__llds_out__llds_out_code_addr__V_25_25 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 98 "llds_out_code_addr.m"
      MR_hl_field(MR_mktag(2), ll_backend__llds_out__llds_out_code_addr__V_25_25, 0) = ((MR_Box) (ll_backend__llds_out__llds_out_code_addr__CodeAddress_12));
#line 98 "llds_out_code_addr.m"
    }
#line 98 "llds_out_code_addr.m"
    {
#line 98 "llds_out_code_addr.m"
      ll_backend__llds_out__llds_out_code_addr__succeeded = ll_backend__llds_out__llds_out_util__decl_set_is_member_2_p_0(ll_backend__llds_out__llds_out_code_addr__V_25_25, ll_backend__llds_out__llds_out_code_addr__STATE_VARIABLE_DeclSet_0_21);
    }
#line 98 "llds_out_code_addr.m"
    if (ll_backend__llds_out__llds_out_code_addr__succeeded)
#line 99 "llds_out_code_addr.m"
      {
#line 99 "llds_out_code_addr.m"
        *ll_backend__llds_out__llds_out_code_addr__STATE_VARIABLE_DeclSet_22 = ll_backend__llds_out__llds_out_code_addr__STATE_VARIABLE_DeclSet_0_21;
#line 99 "llds_out_code_addr.m"
        *ll_backend__llds_out__llds_out_code_addr__STATE_VARIABLE_N_20 = ll_backend__llds_out__llds_out_code_addr__STATE_VARIABLE_N_0_19;
#line 99 "llds_out_code_addr.m"
      }
#line 98 "llds_out_code_addr.m"
    else
#line 101 "llds_out_code_addr.m"
      {
#line 101 "llds_out_code_addr.m"
        MR_Word ll_backend__llds_out__llds_out_code_addr__V_26_26;

#line 101 "llds_out_code_addr.m"
        {
#line 101 "llds_out_code_addr.m"
          ll_backend__llds_out__llds_out_code_addr__V_26_26 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 101 "llds_out_code_addr.m"
          MR_hl_field(MR_mktag(2), ll_backend__llds_out__llds_out_code_addr__V_26_26, 0) = ((MR_Box) (ll_backend__llds_out__llds_out_code_addr__CodeAddress_12));
#line 101 "llds_out_code_addr.m"
        }
#line 101 "llds_out_code_addr.m"
        {
#line 101 "llds_out_code_addr.m"
          ll_backend__llds_out__llds_out_util__decl_set_insert_3_p_0(ll_backend__llds_out__llds_out_code_addr__V_26_26, ll_backend__llds_out__llds_out_code_addr__STATE_VARIABLE_DeclSet_0_21, ll_backend__llds_out__llds_out_code_addr__STATE_VARIABLE_DeclSet_22);
        }
#line 1869 "ll_backend.llds_out.llds_out_code_addr.c"
#line 1870 "ll_backend.llds_out.llds_out_code_addr.c"
        switch (MR_tag((MR_Word) ll_backend__llds_out__llds_out_code_addr__CodeAddress_12)) {
#line 1872 "ll_backend.llds_out.llds_out_code_addr.c"
          default: /*NOTREACHED*/ MR_assert(0);
#line 1874 "ll_backend.llds_out.llds_out_code_addr.c"
          case (MR_Integer) 0:
#line 1876 "ll_backend.llds_out.llds_out_code_addr.c"
#line 1877 "ll_backend.llds_out.llds_out_code_addr.c"
            switch (MR_unmkbody(ll_backend__llds_out__llds_out_code_addr__CodeAddress_12)) {
#line 1879 "ll_backend.llds_out.llds_out_code_addr.c"
              default: /*NOTREACHED*/ MR_assert(0);
#line 1881 "ll_backend.llds_out.llds_out_code_addr.c"
              case (MR_Integer) 0:
#line 109 "llds_out_code_addr.m"
                *ll_backend__llds_out__llds_out_code_addr__STATE_VARIABLE_N_20 = ll_backend__llds_out__llds_out_code_addr__STATE_VARIABLE_N_0_19;
#line 1885 "ll_backend.llds_out.llds_out_code_addr.c"
                break;
#line 1887 "ll_backend.llds_out.llds_out_code_addr.c"
              case (MR_Integer) 1:
#line 1889 "ll_backend.llds_out.llds_out_code_addr.c"
              case (MR_Integer) 2:
#line 1891 "ll_backend.llds_out.llds_out_code_addr.c"
                {
#line 1893 "ll_backend.llds_out.llds_out_code_addr.c"
                  MR_Word ll_backend__llds_out__llds_out_code_addr__UseMacro_45 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_code_addr__Info_11, (MR_Integer) 7)))) >> (MR_Integer) 12)) & (MR_Integer) 1);
#line 150 "llds_out_code_addr.m"
                  MR_Word ll_backend__llds_out__llds_out_code_addr__V_49_49 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_code_addr__Info_11, (MR_Integer) 0)));
#line 150 "llds_out_code_addr.m"
                  MR_String ll_backend__llds_out__llds_out_code_addr__V_50_50 = ((MR_String) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_code_addr__Info_11, (MR_Integer) 1)));
#line 150 "llds_out_code_addr.m"
                  MR_String ll_backend__llds_out__llds_out_code_addr__V_51_51 = ((MR_String) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_code_addr__Info_11, (MR_Integer) 2)));
#line 150 "llds_out_code_addr.m"
                  MR_Word ll_backend__llds_out__llds_out_code_addr__V_52_52 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_code_addr__Info_11, (MR_Integer) 3)));
#line 150 "llds_out_code_addr.m"
                  MR_Word ll_backend__llds_out__llds_out_code_addr__V_53_53 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_code_addr__Info_11, (MR_Integer) 4)));
#line 150 "llds_out_code_addr.m"
                  MR_Word ll_backend__llds_out__llds_out_code_addr__V_54_54 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_code_addr__Info_11, (MR_Integer) 5)));
#line 150 "llds_out_code_addr.m"
                  MR_Word ll_backend__llds_out__llds_out_code_addr__V_55_55 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_code_addr__Info_11, (MR_Integer) 6)));
#line 150 "llds_out_code_addr.m"
                  MR_Word ll_backend__llds_out__llds_out_code_addr__V_56_56 = ((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_code_addr__Info_11, (MR_Integer) 7)))) & (MR_Integer) 1);
#line 150 "llds_out_code_addr.m"
                  MR_Word ll_backend__llds_out__llds_out_code_addr__V_57_57 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_code_addr__Info_11, (MR_Integer) 7)))) >> (MR_Integer) 1)) & (MR_Integer) 1);
#line 150 "llds_out_code_addr.m"
                  MR_Word ll_backend__llds_out__llds_out_code_addr__V_58_58 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_code_addr__Info_11, (MR_Integer) 7)))) >> (MR_Integer) 2)) & (MR_Integer) 1);
#line 150 "llds_out_code_addr.m"
                  MR_Word ll_backend__llds_out__llds_out_code_addr__V_59_59 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_code_addr__Info_11, (MR_Integer) 7)))) >> (MR_Integer) 3)) & (MR_Integer) 1);
#line 150 "llds_out_code_addr.m"
                  MR_Word ll_backend__llds_out__llds_out_code_addr__V_60_60 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_code_addr__Info_11, (MR_Integer) 7)))) >> (MR_Integer) 4)) & (MR_Integer) 1);
#line 150 "llds_out_code_addr.m"
                  MR_Word ll_backend__llds_out__llds_out_code_addr__V_61_61 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_code_addr__Info_11, (MR_Integer) 7)))) >> (MR_Integer) 5)) & (MR_Integer) 1);
#line 150 "llds_out_code_addr.m"
                  MR_Word ll_backend__llds_out__llds_out_code_addr__V_62_62 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_code_addr__Info_11, (MR_Integer) 7)))) >> (MR_Integer) 6)) & (MR_Integer) 1);
#line 150 "llds_out_code_addr.m"
                  MR_Word ll_backend__llds_out__llds_out_code_addr__V_63_63 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_code_addr__Info_11, (MR_Integer) 7)))) >> (MR_Integer) 7)) & (MR_Integer) 1);
#line 150 "llds_out_code_addr.m"
                  MR_Word ll_backend__llds_out__llds_out_code_addr__V_64_64 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_code_addr__Info_11, (MR_Integer) 7)))) >> (MR_Integer) 8)) & (MR_Integer) 1);
#line 150 "llds_out_code_addr.m"
                  MR_Word ll_backend__llds_out__llds_out_code_addr__V_65_65 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_code_addr__Info_11, (MR_Integer) 7)))) >> (MR_Integer) 9)) & (MR_Integer) 1);
#line 150 "llds_out_code_addr.m"
                  MR_Word ll_backend__llds_out__llds_out_code_addr__V_66_66 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_code_addr__Info_11, (MR_Integer) 7)))) >> (MR_Integer) 10)) & (MR_Integer) 1);
#line 150 "llds_out_code_addr.m"
                  MR_Word ll_backend__llds_out__llds_out_code_addr__V_67_67 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_code_addr__Info_11, (MR_Integer) 7)))) >> (MR_Integer) 11)) & (MR_Integer) 1);
#line 150 "llds_out_code_addr.m"
                  MR_Word ll_backend__llds_out__llds_out_code_addr__V_68_68 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_code_addr__Info_11, (MR_Integer) 7)))) >> (MR_Integer) 13)) & (MR_Integer) 7);
#line 150 "llds_out_code_addr.m"
                  MR_Word ll_backend__llds_out__llds_out_code_addr__V_69_69 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_code_addr__Info_11, (MR_Integer) 8)));

#line 1938 "ll_backend.llds_out.llds_out_code_addr.c"
#line 1939 "ll_backend.llds_out.llds_out_code_addr.c"
                  switch (ll_backend__llds_out__llds_out_code_addr__UseMacro_45) {
#line 1941 "ll_backend.llds_out.llds_out_code_addr.c"
                    default: /*NOTREACHED*/ MR_assert(0);
#line 1943 "ll_backend.llds_out.llds_out_code_addr.c"
                    case (MR_Integer) 0:
#line 1945 "ll_backend.llds_out.llds_out_code_addr.c"
                      {
#line 105 "llds_out_code_addr.m"
                        {
#line 105 "llds_out_code_addr.m"
                          ll_backend__llds_out__llds_out_util__output_indent_5_p_0(ll_backend__llds_out__llds_out_code_addr__FirstIndent_13, ll_backend__llds_out__llds_out_code_addr__LaterIndent_14, ll_backend__llds_out__llds_out_code_addr__STATE_VARIABLE_N_0_19);
                        }
#line 106 "llds_out_code_addr.m"
                        *ll_backend__llds_out__llds_out_code_addr__STATE_VARIABLE_N_20 = (ll_backend__llds_out__llds_out_code_addr__STATE_VARIABLE_N_0_19 + (MR_Integer) 1);
#line 107 "llds_out_code_addr.m"
                        {
#line 107 "llds_out_code_addr.m"
                          ll_backend__llds_out__llds_out_code_addr__output_code_addr_decls_4_p_0(ll_backend__llds_out__llds_out_code_addr__Info_11, ll_backend__llds_out__llds_out_code_addr__CodeAddress_12);
                        }
#line 1959 "ll_backend.llds_out.llds_out_code_addr.c"
                      }
#line 1961 "ll_backend.llds_out.llds_out_code_addr.c"
                      break;
#line 1963 "ll_backend.llds_out.llds_out_code_addr.c"
                    case (MR_Integer) 1:
#line 109 "llds_out_code_addr.m"
                      *ll_backend__llds_out__llds_out_code_addr__STATE_VARIABLE_N_20 = ll_backend__llds_out__llds_out_code_addr__STATE_VARIABLE_N_0_19;
#line 1967 "ll_backend.llds_out.llds_out_code_addr.c"
                      break;
#line 1969 "ll_backend.llds_out.llds_out_code_addr.c"
                  }
#line 1971 "ll_backend.llds_out.llds_out_code_addr.c"
                }
#line 1973 "ll_backend.llds_out.llds_out_code_addr.c"
                break;
#line 1975 "ll_backend.llds_out.llds_out_code_addr.c"
              case (MR_Integer) 3:
#line 1977 "ll_backend.llds_out.llds_out_code_addr.c"
              case (MR_Integer) 4:
#line 1979 "ll_backend.llds_out.llds_out_code_addr.c"
              case (MR_Integer) 5:
#line 1981 "ll_backend.llds_out.llds_out_code_addr.c"
                {
#line 105 "llds_out_code_addr.m"
                  {
#line 105 "llds_out_code_addr.m"
                    ll_backend__llds_out__llds_out_util__output_indent_5_p_0(ll_backend__llds_out__llds_out_code_addr__FirstIndent_13, ll_backend__llds_out__llds_out_code_addr__LaterIndent_14, ll_backend__llds_out__llds_out_code_addr__STATE_VARIABLE_N_0_19);
                  }
#line 106 "llds_out_code_addr.m"
                  *ll_backend__llds_out__llds_out_code_addr__STATE_VARIABLE_N_20 = (ll_backend__llds_out__llds_out_code_addr__STATE_VARIABLE_N_0_19 + (MR_Integer) 1);
#line 107 "llds_out_code_addr.m"
                  {
#line 107 "llds_out_code_addr.m"
                    ll_backend__llds_out__llds_out_code_addr__output_code_addr_decls_4_p_0(ll_backend__llds_out__llds_out_code_addr__Info_11, ll_backend__llds_out__llds_out_code_addr__CodeAddress_12);
                  }
#line 1995 "ll_backend.llds_out.llds_out_code_addr.c"
                }
#line 1997 "ll_backend.llds_out.llds_out_code_addr.c"
                break;
#line 1999 "ll_backend.llds_out.llds_out_code_addr.c"
            }
#line 2001 "ll_backend.llds_out.llds_out_code_addr.c"
            break;
#line 2003 "ll_backend.llds_out.llds_out_code_addr.c"
          case (MR_Integer) 1:
#line 2005 "ll_backend.llds_out.llds_out_code_addr.c"
            {
#line 2007 "ll_backend.llds_out.llds_out_code_addr.c"
              MR_Word ll_backend__llds_out__llds_out_code_addr__Label_35 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__llds_out__llds_out_code_addr__CodeAddress_12, (MR_Integer) 0)));

#line 2010 "ll_backend.llds_out.llds_out_code_addr.c"
              if (((MR_tag((MR_Word) ll_backend__llds_out__llds_out_code_addr__Label_35)) == (MR_mktag((MR_Integer) 1))))
#line 2012 "ll_backend.llds_out.llds_out_code_addr.c"
                {
#line 2014 "ll_backend.llds_out.llds_out_code_addr.c"
                  MR_Word ll_backend__llds_out__llds_out_code_addr__V_71_71 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__llds_out__llds_out_code_addr__Label_35, (MR_Integer) 0)));
#line 120 "llds_out_code_addr.m"
                  MR_Word ll_backend__llds_out__llds_out_code_addr__V_70_70 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__llds_out__llds_out_code_addr__Label_35, (MR_Integer) 1)));

#line 2019 "ll_backend.llds_out.llds_out_code_addr.c"
#line 2020 "ll_backend.llds_out.llds_out_code_addr.c"
                  switch (ll_backend__llds_out__llds_out_code_addr__V_71_71) {
#line 2022 "ll_backend.llds_out.llds_out_code_addr.c"
                    default: /*NOTREACHED*/ MR_assert(0);
#line 2024 "ll_backend.llds_out.llds_out_code_addr.c"
                    case (MR_Integer) 0:
#line 109 "llds_out_code_addr.m"
                      *ll_backend__llds_out__llds_out_code_addr__STATE_VARIABLE_N_20 = ll_backend__llds_out__llds_out_code_addr__STATE_VARIABLE_N_0_19;
#line 2028 "ll_backend.llds_out.llds_out_code_addr.c"
                      break;
#line 2030 "ll_backend.llds_out.llds_out_code_addr.c"
                    case (MR_Integer) 2:
#line 2032 "ll_backend.llds_out.llds_out_code_addr.c"
                      {
#line 105 "llds_out_code_addr.m"
                        {
#line 105 "llds_out_code_addr.m"
                          ll_backend__llds_out__llds_out_util__output_indent_5_p_0(ll_backend__llds_out__llds_out_code_addr__FirstIndent_13, ll_backend__llds_out__llds_out_code_addr__LaterIndent_14, ll_backend__llds_out__llds_out_code_addr__STATE_VARIABLE_N_0_19);
                        }
#line 106 "llds_out_code_addr.m"
                        *ll_backend__llds_out__llds_out_code_addr__STATE_VARIABLE_N_20 = (ll_backend__llds_out__llds_out_code_addr__STATE_VARIABLE_N_0_19 + (MR_Integer) 1);
#line 107 "llds_out_code_addr.m"
                        {
#line 107 "llds_out_code_addr.m"
                          ll_backend__llds_out__llds_out_code_addr__output_code_addr_decls_4_p_0(ll_backend__llds_out__llds_out_code_addr__Info_11, ll_backend__llds_out__llds_out_code_addr__CodeAddress_12);
                        }
#line 2046 "ll_backend.llds_out.llds_out_code_addr.c"
                      }
#line 2048 "ll_backend.llds_out.llds_out_code_addr.c"
                      break;
#line 2050 "ll_backend.llds_out.llds_out_code_addr.c"
                    case (MR_Integer) 1:
#line 2052 "ll_backend.llds_out.llds_out_code_addr.c"
                      {
#line 105 "llds_out_code_addr.m"
                        {
#line 105 "llds_out_code_addr.m"
                          ll_backend__llds_out__llds_out_util__output_indent_5_p_0(ll_backend__llds_out__llds_out_code_addr__FirstIndent_13, ll_backend__llds_out__llds_out_code_addr__LaterIndent_14, ll_backend__llds_out__llds_out_code_addr__STATE_VARIABLE_N_0_19);
                        }
#line 106 "llds_out_code_addr.m"
                        *ll_backend__llds_out__llds_out_code_addr__STATE_VARIABLE_N_20 = (ll_backend__llds_out__llds_out_code_addr__STATE_VARIABLE_N_0_19 + (MR_Integer) 1);
#line 107 "llds_out_code_addr.m"
                        {
#line 107 "llds_out_code_addr.m"
                          ll_backend__llds_out__llds_out_code_addr__output_code_addr_decls_4_p_0(ll_backend__llds_out__llds_out_code_addr__Info_11, ll_backend__llds_out__llds_out_code_addr__CodeAddress_12);
                        }
#line 2066 "ll_backend.llds_out.llds_out_code_addr.c"
                      }
#line 2068 "ll_backend.llds_out.llds_out_code_addr.c"
                      break;
#line 2070 "ll_backend.llds_out.llds_out_code_addr.c"
                  }
#line 2072 "ll_backend.llds_out.llds_out_code_addr.c"
                }
#line 2074 "ll_backend.llds_out.llds_out_code_addr.c"
              else
#line 109 "llds_out_code_addr.m"
                *ll_backend__llds_out__llds_out_code_addr__STATE_VARIABLE_N_20 = ll_backend__llds_out__llds_out_code_addr__STATE_VARIABLE_N_0_19;
#line 2078 "ll_backend.llds_out.llds_out_code_addr.c"
            }
#line 2080 "ll_backend.llds_out.llds_out_code_addr.c"
            break;
#line 2082 "ll_backend.llds_out.llds_out_code_addr.c"
          case (MR_Integer) 2:
#line 2084 "ll_backend.llds_out.llds_out_code_addr.c"
            {
#line 105 "llds_out_code_addr.m"
              {
#line 105 "llds_out_code_addr.m"
                ll_backend__llds_out__llds_out_util__output_indent_5_p_0(ll_backend__llds_out__llds_out_code_addr__FirstIndent_13, ll_backend__llds_out__llds_out_code_addr__LaterIndent_14, ll_backend__llds_out__llds_out_code_addr__STATE_VARIABLE_N_0_19);
              }
#line 106 "llds_out_code_addr.m"
              *ll_backend__llds_out__llds_out_code_addr__STATE_VARIABLE_N_20 = (ll_backend__llds_out__llds_out_code_addr__STATE_VARIABLE_N_0_19 + (MR_Integer) 1);
#line 107 "llds_out_code_addr.m"
              {
#line 107 "llds_out_code_addr.m"
                ll_backend__llds_out__llds_out_code_addr__output_code_addr_decls_4_p_0(ll_backend__llds_out__llds_out_code_addr__Info_11, ll_backend__llds_out__llds_out_code_addr__CodeAddress_12);
              }
#line 2098 "ll_backend.llds_out.llds_out_code_addr.c"
            }
#line 2100 "ll_backend.llds_out.llds_out_code_addr.c"
            break;
#line 2102 "ll_backend.llds_out.llds_out_code_addr.c"
          case (MR_Integer) 3:
#line 2104 "ll_backend.llds_out.llds_out_code_addr.c"
#line 2105 "ll_backend.llds_out.llds_out_code_addr.c"
            switch (((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__llds_out__llds_out_code_addr__CodeAddress_12, (MR_Integer) 0)))) {
#line 2107 "ll_backend.llds_out.llds_out_code_addr.c"
              default: /*NOTREACHED*/ MR_assert(0);
#line 2109 "ll_backend.llds_out.llds_out_code_addr.c"
              case (MR_Integer) 0:
#line 109 "llds_out_code_addr.m"
                *ll_backend__llds_out__llds_out_code_addr__STATE_VARIABLE_N_20 = ll_backend__llds_out__llds_out_code_addr__STATE_VARIABLE_N_0_19;
#line 2113 "ll_backend.llds_out.llds_out_code_addr.c"
                break;
#line 2115 "ll_backend.llds_out.llds_out_code_addr.c"
              case (MR_Integer) 1:
#line 2117 "ll_backend.llds_out.llds_out_code_addr.c"
              case (MR_Integer) 2:
#line 2119 "ll_backend.llds_out.llds_out_code_addr.c"
                {
#line 105 "llds_out_code_addr.m"
                  {
#line 105 "llds_out_code_addr.m"
                    ll_backend__llds_out__llds_out_util__output_indent_5_p_0(ll_backend__llds_out__llds_out_code_addr__FirstIndent_13, ll_backend__llds_out__llds_out_code_addr__LaterIndent_14, ll_backend__llds_out__llds_out_code_addr__STATE_VARIABLE_N_0_19);
                  }
#line 106 "llds_out_code_addr.m"
                  *ll_backend__llds_out__llds_out_code_addr__STATE_VARIABLE_N_20 = (ll_backend__llds_out__llds_out_code_addr__STATE_VARIABLE_N_0_19 + (MR_Integer) 1);
#line 107 "llds_out_code_addr.m"
                  {
#line 107 "llds_out_code_addr.m"
                    ll_backend__llds_out__llds_out_code_addr__output_code_addr_decls_4_p_0(ll_backend__llds_out__llds_out_code_addr__Info_11, ll_backend__llds_out__llds_out_code_addr__CodeAddress_12);
                  }
#line 2133 "ll_backend.llds_out.llds_out_code_addr.c"
                }
#line 2135 "ll_backend.llds_out.llds_out_code_addr.c"
                break;
#line 2137 "ll_backend.llds_out.llds_out_code_addr.c"
            }
#line 2139 "ll_backend.llds_out.llds_out_code_addr.c"
            break;
#line 2141 "ll_backend.llds_out.llds_out_code_addr.c"
        }
#line 101 "llds_out_code_addr.m"
      }
#line 98 "llds_out_code_addr.m"
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
#line 92 "llds_out_code_addr.m"
  {
#line 92 "llds_out_code_addr.m"
    MR_bool ll_backend__llds_out__llds_out_code_addr__succeeded;
#line 93 "llds_out_code_addr.m"
    MR_Integer ll_backend__llds_out__llds_out_code_addr__V_11_11;

#line 93 "llds_out_code_addr.m"
    {
#line 93 "llds_out_code_addr.m"
      ll_backend__llds_out__llds_out_code_addr__output_record_code_addr_decls_format_10_p_0(ll_backend__llds_out__llds_out_code_addr__Info_7, ll_backend__llds_out__llds_out_code_addr__CodeAddress_8, (MR_String) "", (MR_String) "", (MR_Integer) 0, &ll_backend__llds_out__llds_out_code_addr__V_11_11, ll_backend__llds_out__llds_out_code_addr__STATE_VARIABLE_DeclSet_0_12, ll_backend__llds_out__llds_out_code_addr__STATE_VARIABLE_DeclSet_13);
    }
#line 92 "llds_out_code_addr.m"
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
