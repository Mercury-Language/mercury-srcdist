/*
** Automatically generated from `name_mangle.m'
** by the Mercury compiler,
** version rotd-2015-08-10
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


/* :- module backend_libs.name_mangle. */
/* :- implementation. */

/*
INIT mercury__backend_libs__name_mangle__init
ENDINIT
*/

#include "backend_libs.name_mangle.mih"


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
#include "deconstruct.mih"
#include "digraph.mih"
#include "enum.mih"
#include "getopt_io.mih"
#include "hlds.mih"
#include "int.mih"
#include "integer.mih"
#include "io.mih"
#include "libs.mih"
#include "list.mih"
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
#include "type_desc.mih"
#include "unit.mih"
#include "univ.mih"
#include "varset.mih"
#include "backend_libs.rtti.mih"
#include "check_hlds.delay_info.mih"
#include "check_hlds.mode_constraint_robdd.mih"
#include "check_hlds.mode_errors.mih"
#include "check_hlds.mode_info.mih"
#include "check_hlds.unify_proc.mih"
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
#include "hlds.vartypes.mih"
#include "libs.globals.mih"
#include "libs.lp_rational.mih"
#include "libs.options.mih"
#include "libs.polyhedron.mih"
#include "libs.rat.mih"
#include "libs.timestamp.mih"
#include "libs.trace_params.mih"
#include "mdbcomp.feedback.mih"
#include "mdbcomp.goal_path.mih"
#include "mdbcomp.prim_data.mih"
#include "mdbcomp.program_representation.mih"
#include "mdbcomp.rtti_access.mih"
#include "mdbcomp.sym_name.mih"
#include "mdbcomp.trace_counts.mih"
#include "mode_robdd.tfeirn.mih"
#include "parse_tree.error_util.mih"
#include "parse_tree.file_kind.mih"
#include "parse_tree.module_qual.mih"
#include "parse_tree.prog_data.mih"
#include "parse_tree.prog_foreign.mih"
#include "parse_tree.prog_item.mih"
#include "parse_tree.prog_rename.mih"
#include "parse_tree.set_of_var.mih"
#include "parse_tree.status.mih"
#include "transform_hlds.term_constr_data.mih"
#include "transform_hlds.term_constr_errors.mih"
#include "transform_hlds.term_constr_main.mih"
#include "transform_hlds.term_errors.mih"
#include "transform_hlds.term_norm.mih"
#include "transform_hlds.term_util.mih"
#include "mdbcomp.feedback.automatic_parallelism.mih"




#line 188 "name_mangle.m"
static MR_String MR_CALL 
backend_libs__name_mangle__make_pred_or_func_name_6_f_0(
#line 188 "name_mangle.m"
  MR_Word backend_libs__name_mangle__DefiningModule_8,
#line 188 "name_mangle.m"
  MR_Word backend_libs__name_mangle__PredOrFunc_9,
#line 188 "name_mangle.m"
  MR_Word backend_libs__name_mangle__DeclaringModule_10,
#line 188 "name_mangle.m"
  MR_String backend_libs__name_mangle__Name0_11,
#line 188 "name_mangle.m"
  MR_Integer backend_libs__name_mangle__Arity_12,
#line 188 "name_mangle.m"
  MR_Word backend_libs__name_mangle__AddPrefix_13);


static /* final */ const MR_Box backend_libs__name_mangle_scalar_common_1[1][1];




static /* final */ const MR_Box backend_libs__name_mangle_scalar_common_1[1][1] = {
  /* row 0 */
  {
    ((MR_Box) ((MR_String) ""))
  },
};



#include "io.mh"
#include "io.mh"
#include "time.mh"
#include "string.mh"
#include "mdbcomp.rtti_access.mh"
#include "mdbcomp.rtti_access.mh"



#line 188 "name_mangle.m"
static MR_String MR_CALL 
backend_libs__name_mangle__make_pred_or_func_name_6_f_0(
#line 188 "name_mangle.m"
  MR_Word backend_libs__name_mangle__DefiningModule_8,
#line 188 "name_mangle.m"
  MR_Word backend_libs__name_mangle__PredOrFunc_9,
#line 188 "name_mangle.m"
  MR_Word backend_libs__name_mangle__DeclaringModule_10,
#line 188 "name_mangle.m"
  MR_String backend_libs__name_mangle__Name0_11,
#line 188 "name_mangle.m"
  MR_Integer backend_libs__name_mangle__Arity_12,
#line 188 "name_mangle.m"
  MR_Word backend_libs__name_mangle__AddPrefix_13)
#line 188 "name_mangle.m"
{
#line 192 "name_mangle.m"
  {
#line 192 "name_mangle.m"
    MR_bool backend_libs__name_mangle__succeeded;
#line 192 "name_mangle.m"
    MR_String backend_libs__name_mangle__LabelName_14;
#line 192 "name_mangle.m"
    MR_String backend_libs__name_mangle__DeclaringModuleName_15;
#line 192 "name_mangle.m"
    MR_String backend_libs__name_mangle__DefiningModuleName_16;
#line 192 "name_mangle.m"
    MR_String backend_libs__name_mangle__LabelName0_17;
#line 192 "name_mangle.m"
    MR_String backend_libs__name_mangle__LabelName1_18;
#line 192 "name_mangle.m"
    MR_String backend_libs__name_mangle__LabelName2_19;
#line 192 "name_mangle.m"
    MR_String backend_libs__name_mangle__LabelName3_20;

#line 197 "name_mangle.m"
    {
#line 197 "name_mangle.m"
      backend_libs__name_mangle__DeclaringModuleName_15 = parse_tree__prog_foreign__sym_name_mangle_1_f_0(backend_libs__name_mangle__DeclaringModule_10);
    }
#line 198 "name_mangle.m"
    {
#line 198 "name_mangle.m"
      backend_libs__name_mangle__DefiningModuleName_16 = parse_tree__prog_foreign__sym_name_mangle_1_f_0(backend_libs__name_mangle__DefiningModule_8);
    }
#line 234 "name_mangle.m"
    backend_libs__name_mangle__succeeded = (strcmp(backend_libs__name_mangle__Name0_11, (MR_String) "main") == 0);
#line 234 "name_mangle.m"
    if (backend_libs__name_mangle__succeeded)
#line 235 "name_mangle.m"
      backend_libs__name_mangle__succeeded = (backend_libs__name_mangle__Arity_12 == (MR_Integer) 2);
#line 234 "name_mangle.m"
    if (!(backend_libs__name_mangle__succeeded))
#line 237 "name_mangle.m"
      {
#line 237 "name_mangle.m"
        {
#line 237 "name_mangle.m"
          backend_libs__name_mangle__succeeded = mercury__string__prefix_2_p_0(backend_libs__name_mangle__Name0_11, (MR_String) "__");
        }
#line 237 "name_mangle.m"
      }
#line 201 "name_mangle.m"
    if (backend_libs__name_mangle__succeeded)
#line 200 "name_mangle.m"
      backend_libs__name_mangle__LabelName0_17 = backend_libs__name_mangle__Name0_11;
#line 201 "name_mangle.m"
    else
#line 202 "name_mangle.m"
      {
#line 202 "name_mangle.m"
        backend_libs__name_mangle__LabelName0_17 = parse_tree__prog_foreign__qualify_name_2_f_0(backend_libs__name_mangle__DeclaringModuleName_15, backend_libs__name_mangle__Name0_11);
      }
#line 206 "name_mangle.m"
    {
#line 206 "name_mangle.m"
      backend_libs__name_mangle__succeeded = mdbcomp__sym_name____Unify____sym_name_0_0(backend_libs__name_mangle__DefiningModule_8, backend_libs__name_mangle__DeclaringModule_10);
    }
#line 206 "name_mangle.m"
    backend_libs__name_mangle__succeeded = !(backend_libs__name_mangle__succeeded);
#line 208 "name_mangle.m"
    if (backend_libs__name_mangle__succeeded)
#line 207 "name_mangle.m"
      {
#line 207 "name_mangle.m"
        MR_String backend_libs__name_mangle__V_21_21;

#line 207 "name_mangle.m"
        {
#line 207 "name_mangle.m"
          backend_libs__name_mangle__V_21_21 = mercury__string__f_43_43_2_f_0((MR_String) "__", backend_libs__name_mangle__LabelName0_17);
        }
#line 207 "name_mangle.m"
        {
#line 207 "name_mangle.m"
          backend_libs__name_mangle__LabelName1_18 = mercury__string__f_43_43_2_f_0(backend_libs__name_mangle__DefiningModuleName_16, backend_libs__name_mangle__V_21_21);
        }
#line 207 "name_mangle.m"
      }
#line 208 "name_mangle.m"
    else
#line 209 "name_mangle.m"
      backend_libs__name_mangle__LabelName1_18 = backend_libs__name_mangle__LabelName0_17;
#line 211 "name_mangle.m"
    {
#line 211 "name_mangle.m"
      backend_libs__name_mangle__LabelName2_19 = parse_tree__prog_foreign__name_mangle_1_f_0(backend_libs__name_mangle__LabelName1_18);
    }
#line 215 "name_mangle.m"
#line 215 "name_mangle.m"
    switch (backend_libs__name_mangle__PredOrFunc_9) {
#line 215 "name_mangle.m"
      default: /*NOTREACHED*/ MR_assert(0);
#line 215 "name_mangle.m"
      case (MR_Integer) 1:
#line 213 "name_mangle.m"
        {
#line 214 "name_mangle.m"
          {
#line 214 "name_mangle.m"
            backend_libs__name_mangle__LabelName3_20 = mercury__string__f_43_43_2_f_0((MR_String) "fn__", backend_libs__name_mangle__LabelName2_19);
          }
#line 213 "name_mangle.m"
        }
#line 215 "name_mangle.m"
        break;
#line 215 "name_mangle.m"
      case (MR_Integer) 0:
#line 217 "name_mangle.m"
        backend_libs__name_mangle__LabelName3_20 = backend_libs__name_mangle__LabelName2_19;
#line 215 "name_mangle.m"
        break;
#line 215 "name_mangle.m"
    }
#line 222 "name_mangle.m"
#line 222 "name_mangle.m"
    switch (backend_libs__name_mangle__AddPrefix_13) {
#line 222 "name_mangle.m"
      default: /*NOTREACHED*/ MR_assert(0);
#line 222 "name_mangle.m"
      case (MR_Integer) 0:
#line 224 "name_mangle.m"
        backend_libs__name_mangle__LabelName_14 = backend_libs__name_mangle__LabelName3_20;
#line 222 "name_mangle.m"
        break;
#line 222 "name_mangle.m"
      case (MR_Integer) 1:
#line 220 "name_mangle.m"
        {
#line 221 "name_mangle.m"
          {
#line 221 "name_mangle.m"
            return backend_libs__name_mangle__LabelName_14 = mercury__string__f_43_43_2_f_0((MR_String) "mercury__", backend_libs__name_mangle__LabelName3_20);
          }
#line 220 "name_mangle.m"
        }
#line 222 "name_mangle.m"
        break;
#line 222 "name_mangle.m"
    }
#line 192 "name_mangle.m"
    return backend_libs__name_mangle__LabelName_14;
#line 192 "name_mangle.m"
  }
#line 188 "name_mangle.m"
}

#line 100 "name_mangle.m"
MR_String MR_CALL 
backend_libs__name_mangle__mercury_common_type_prefix_0_f_0(void)
#line 100 "name_mangle.m"
{
#line 295 "name_mangle.m"
  {
#line 295 "name_mangle.m"
    MR_bool backend_libs__name_mangle__succeeded;

#line 295 "name_mangle.m"
    return (MR_String) "mercury_type_";
#line 295 "name_mangle.m"
  }
#line 100 "name_mangle.m"
}

#line 95 "name_mangle.m"
MR_String MR_CALL 
backend_libs__name_mangle__mercury_vector_common_array_prefix_0_f_0(void)
#line 95 "name_mangle.m"
{
#line 293 "name_mangle.m"
  {
#line 293 "name_mangle.m"
    MR_bool backend_libs__name_mangle__succeeded;

#line 293 "name_mangle.m"
    return (MR_String) "mercury_vector_common_";
#line 293 "name_mangle.m"
  }
#line 95 "name_mangle.m"
}

#line 94 "name_mangle.m"
MR_String MR_CALL 
backend_libs__name_mangle__mercury_scalar_common_array_prefix_0_f_0(void)
#line 94 "name_mangle.m"
{
#line 292 "name_mangle.m"
  {
#line 292 "name_mangle.m"
    MR_bool backend_libs__name_mangle__succeeded;

#line 292 "name_mangle.m"
    return (MR_String) "mercury_common_";
#line 292 "name_mangle.m"
  }
#line 94 "name_mangle.m"
}

#line 93 "name_mangle.m"
MR_String MR_CALL 
backend_libs__name_mangle__mercury_data_prefix_0_f_0(void)
#line 93 "name_mangle.m"
{
#line 291 "name_mangle.m"
  {
#line 291 "name_mangle.m"
    MR_bool backend_libs__name_mangle__succeeded;

#line 291 "name_mangle.m"
    return (MR_String) "mercury_data_";
#line 291 "name_mangle.m"
  }
#line 93 "name_mangle.m"
}

#line 87 "name_mangle.m"
MR_String MR_CALL 
backend_libs__name_mangle__mercury_var_prefix_0_f_0(void)
#line 87 "name_mangle.m"
{
#line 289 "name_mangle.m"
  {
#line 289 "name_mangle.m"
    MR_bool backend_libs__name_mangle__succeeded;

#line 289 "name_mangle.m"
    return (MR_String) "mercury_var_";
#line 289 "name_mangle.m"
  }
#line 87 "name_mangle.m"
}

#line 81 "name_mangle.m"
MR_String MR_CALL 
backend_libs__name_mangle__mercury_label_prefix_0_f_0(void)
#line 81 "name_mangle.m"
{
#line 287 "name_mangle.m"
  {
#line 287 "name_mangle.m"
    MR_bool backend_libs__name_mangle__succeeded;

#line 287 "name_mangle.m"
    return (MR_String) "mercury__";
#line 287 "name_mangle.m"
  }
#line 81 "name_mangle.m"
}

#line 76 "name_mangle.m"
void MR_CALL 
backend_libs__name_mangle__output_init_name_3_p_0(
#line 76 "name_mangle.m"
  MR_Word backend_libs__name_mangle__ModuleName_4)
#line 76 "name_mangle.m"
{
#line 281 "name_mangle.m"
  {
#line 281 "name_mangle.m"
    MR_bool backend_libs__name_mangle__succeeded;
#line 281 "name_mangle.m"
    MR_String backend_libs__name_mangle__InitName_6;

#line 282 "name_mangle.m"
    {
#line 282 "name_mangle.m"
      backend_libs__name_mangle__InitName_6 = parse_tree__prog_foreign__make_init_name_1_f_0(backend_libs__name_mangle__ModuleName_4);
    }
#line 283 "name_mangle.m"
    {
#line 283 "name_mangle.m"
      mercury__io__write_string_3_p_0(backend_libs__name_mangle__InitName_6);
#line 283 "name_mangle.m"
      return;
    }
#line 281 "name_mangle.m"
  }
#line 76 "name_mangle.m"
}

#line 70 "name_mangle.m"
void MR_CALL 
backend_libs__name_mangle__output_base_typeclass_info_name_4_p_0(
#line 70 "name_mangle.m"
  MR_Word backend_libs__name_mangle__TCName_5,
#line 70 "name_mangle.m"
  MR_String backend_libs__name_mangle__TypeNames_6)
#line 70 "name_mangle.m"
{
#line 265 "name_mangle.m"
  {
#line 265 "name_mangle.m"
    MR_bool backend_libs__name_mangle__succeeded;
#line 265 "name_mangle.m"
    MR_String backend_libs__name_mangle__Str_8;

#line 266 "name_mangle.m"
    {
#line 266 "name_mangle.m"
      backend_libs__name_mangle__Str_8 = backend_libs__name_mangle__make_base_typeclass_info_name_2_f_0(backend_libs__name_mangle__TCName_5, backend_libs__name_mangle__TypeNames_6);
    }
#line 267 "name_mangle.m"
    {
#line 267 "name_mangle.m"
      mercury__io__write_string_3_p_0((MR_String) "mercury_data_");
    }
#line 268 "name_mangle.m"
    {
#line 268 "name_mangle.m"
      mercury__io__write_string_3_p_0(backend_libs__name_mangle__Str_8);
#line 268 "name_mangle.m"
      return;
    }
#line 265 "name_mangle.m"
  }
#line 70 "name_mangle.m"
}

#line 65 "name_mangle.m"
MR_String MR_CALL 
backend_libs__name_mangle__make_base_typeclass_info_name_2_f_0(
#line 65 "name_mangle.m"
  MR_Word backend_libs__name_mangle__TCName_4,
#line 65 "name_mangle.m"
  MR_String backend_libs__name_mangle__TypeNames_5)
#line 65 "name_mangle.m"
{
#line 270 "name_mangle.m"
  {
#line 270 "name_mangle.m"
    MR_bool backend_libs__name_mangle__succeeded;
#line 270 "name_mangle.m"
    MR_String backend_libs__name_mangle__Str_6;
#line 270 "name_mangle.m"
    MR_Word backend_libs__name_mangle__ModuleName_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__name_mangle__TCName_4, (MR_Integer) 0)));
#line 270 "name_mangle.m"
    MR_String backend_libs__name_mangle__ClassName_8 = ((MR_String) (MR_hl_field(MR_mktag(0), backend_libs__name_mangle__TCName_4, (MR_Integer) 1)));
#line 270 "name_mangle.m"
    MR_Integer backend_libs__name_mangle__ClassArity_9 = ((MR_Integer) (MR_hl_field(MR_mktag(0), backend_libs__name_mangle__TCName_4, (MR_Integer) 2)));
#line 270 "name_mangle.m"
    MR_Word backend_libs__name_mangle__ClassSym_10;
#line 270 "name_mangle.m"
    MR_String backend_libs__name_mangle__MangledClassString_11;
#line 270 "name_mangle.m"
    MR_String backend_libs__name_mangle__ArityString_12;
#line 270 "name_mangle.m"
    MR_String backend_libs__name_mangle__MangledTypeNames_13;
#line 270 "name_mangle.m"
    MR_Word backend_libs__name_mangle__V_14_14;
#line 270 "name_mangle.m"
    MR_Word backend_libs__name_mangle__V_16_16;
#line 270 "name_mangle.m"
    MR_Word backend_libs__name_mangle__V_17_17;
#line 270 "name_mangle.m"
    MR_Word backend_libs__name_mangle__V_19_19;
#line 270 "name_mangle.m"
    MR_Word backend_libs__name_mangle__V_20_20;
#line 270 "name_mangle.m"
    MR_Word backend_libs__name_mangle__V_22_22;

#line 272 "name_mangle.m"
    {
#line 272 "name_mangle.m"
      backend_libs__name_mangle__ClassSym_10 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 272 "name_mangle.m"
      MR_hl_field(MR_mktag(1), backend_libs__name_mangle__ClassSym_10, 0) = ((MR_Box) (backend_libs__name_mangle__ModuleName_7));
#line 272 "name_mangle.m"
      MR_hl_field(MR_mktag(1), backend_libs__name_mangle__ClassSym_10, 1) = ((MR_Box) (backend_libs__name_mangle__ClassName_8));
#line 272 "name_mangle.m"
    }
#line 273 "name_mangle.m"
    {
#line 273 "name_mangle.m"
      backend_libs__name_mangle__MangledClassString_11 = parse_tree__prog_foreign__sym_name_mangle_1_f_0(backend_libs__name_mangle__ClassSym_10);
    }
#line 274 "name_mangle.m"
    {
#line 274 "name_mangle.m"
      mercury__string__int_to_string_2_p_0(backend_libs__name_mangle__ClassArity_9, &backend_libs__name_mangle__ArityString_12);
    }
#line 275 "name_mangle.m"
    {
#line 275 "name_mangle.m"
      backend_libs__name_mangle__MangledTypeNames_13 = parse_tree__prog_foreign__name_mangle_1_f_0(backend_libs__name_mangle__TypeNames_5);
    }
#line 277 "name_mangle.m"
    {
#line 277 "name_mangle.m"
      backend_libs__name_mangle__V_22_22 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 277 "name_mangle.m"
      MR_hl_field(MR_mktag(1), backend_libs__name_mangle__V_22_22, 0) = ((MR_Box) (backend_libs__name_mangle__MangledTypeNames_13));
#line 277 "name_mangle.m"
      MR_hl_field(MR_mktag(1), backend_libs__name_mangle__V_22_22, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 277 "name_mangle.m"
    }
#line 277 "name_mangle.m"
    {
#line 277 "name_mangle.m"
      backend_libs__name_mangle__V_20_20 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 277 "name_mangle.m"
      MR_hl_field(MR_mktag(1), backend_libs__name_mangle__V_20_20, 0) = ((MR_Box) ((MR_String) "__"));
#line 277 "name_mangle.m"
      MR_hl_field(MR_mktag(1), backend_libs__name_mangle__V_20_20, 1) = ((MR_Box) (backend_libs__name_mangle__V_22_22));
#line 277 "name_mangle.m"
    }
#line 277 "name_mangle.m"
    {
#line 277 "name_mangle.m"
      backend_libs__name_mangle__V_19_19 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 277 "name_mangle.m"
      MR_hl_field(MR_mktag(1), backend_libs__name_mangle__V_19_19, 0) = ((MR_Box) (backend_libs__name_mangle__ArityString_12));
#line 277 "name_mangle.m"
      MR_hl_field(MR_mktag(1), backend_libs__name_mangle__V_19_19, 1) = ((MR_Box) (backend_libs__name_mangle__V_20_20));
#line 277 "name_mangle.m"
    }
#line 277 "name_mangle.m"
    {
#line 277 "name_mangle.m"
      backend_libs__name_mangle__V_17_17 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 277 "name_mangle.m"
      MR_hl_field(MR_mktag(1), backend_libs__name_mangle__V_17_17, 0) = ((MR_Box) ((MR_String) "__arity"));
#line 277 "name_mangle.m"
      MR_hl_field(MR_mktag(1), backend_libs__name_mangle__V_17_17, 1) = ((MR_Box) (backend_libs__name_mangle__V_19_19));
#line 277 "name_mangle.m"
    }
#line 276 "name_mangle.m"
    {
#line 276 "name_mangle.m"
      backend_libs__name_mangle__V_16_16 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 276 "name_mangle.m"
      MR_hl_field(MR_mktag(1), backend_libs__name_mangle__V_16_16, 0) = ((MR_Box) (backend_libs__name_mangle__MangledClassString_11));
#line 276 "name_mangle.m"
      MR_hl_field(MR_mktag(1), backend_libs__name_mangle__V_16_16, 1) = ((MR_Box) (backend_libs__name_mangle__V_17_17));
#line 276 "name_mangle.m"
    }
#line 276 "name_mangle.m"
    {
#line 276 "name_mangle.m"
      backend_libs__name_mangle__V_14_14 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 276 "name_mangle.m"
      MR_hl_field(MR_mktag(1), backend_libs__name_mangle__V_14_14, 0) = ((MR_Box) ((MR_String) "base_typeclass_info_"));
#line 276 "name_mangle.m"
      MR_hl_field(MR_mktag(1), backend_libs__name_mangle__V_14_14, 1) = ((MR_Box) (backend_libs__name_mangle__V_16_16));
#line 276 "name_mangle.m"
    }
#line 276 "name_mangle.m"
    {
#line 276 "name_mangle.m"
      mercury__string__append_list_2_p_0(backend_libs__name_mangle__V_14_14, &backend_libs__name_mangle__Str_6);
    }
#line 270 "name_mangle.m"
    return backend_libs__name_mangle__Str_6;
#line 270 "name_mangle.m"
  }
#line 65 "name_mangle.m"
}

#line 61 "name_mangle.m"
MR_bool MR_CALL 
backend_libs__name_mangle__sym_name_doesnt_need_mangling_1_p_0(
#line 61 "name_mangle.m"
  MR_Word backend_libs__name_mangle__HeadVar__1_1)
#line 61 "name_mangle.m"
{
#line 244 "name_mangle.m"
  {
#line 244 "name_mangle.m"
    MR_bool backend_libs__name_mangle__succeeded;

#line 244 "name_mangle.m"
    if (((MR_tag((MR_Word) backend_libs__name_mangle__HeadVar__1_1)) == (MR_mktag((MR_Integer) 1))))
#line 246 "name_mangle.m"
      {
#line 246 "name_mangle.m"
        MR_Word backend_libs__name_mangle__ModuleName_3 = ((MR_Word) (MR_hl_field(MR_mktag(1), backend_libs__name_mangle__HeadVar__1_1, (MR_Integer) 0)));
#line 246 "name_mangle.m"
        MR_String backend_libs__name_mangle__PlainName_4 = ((MR_String) (MR_hl_field(MR_mktag(1), backend_libs__name_mangle__HeadVar__1_1, (MR_Integer) 1)));
#line 242 "name_mangle.m"
        MR_String backend_libs__name_mangle__V_7_7;
#line 242 "name_mangle.m"
        MR_String backend_libs__name_mangle___Suffix_6;

#line 247 "name_mangle.m"
        {
#line 247 "name_mangle.m"
          backend_libs__name_mangle__succeeded = backend_libs__name_mangle__sym_name_doesnt_need_mangling_1_p_0(backend_libs__name_mangle__ModuleName_3);
        }
#line 246 "name_mangle.m"
        if (backend_libs__name_mangle__succeeded)
#line 246 "name_mangle.m"
          {
#line 241 "name_mangle.m"
            {
#line 241 "name_mangle.m"
              backend_libs__name_mangle__succeeded = mercury__string__is_all_alnum_or_underscore_1_p_0(backend_libs__name_mangle__PlainName_4);
            }
#line 246 "name_mangle.m"
            if (backend_libs__name_mangle__succeeded)
#line 246 "name_mangle.m"
              {
#line 242 "name_mangle.m"
                backend_libs__name_mangle__V_7_7 = (MR_String) "f_";
#line 242 "name_mangle.m"
                {
#line 242 "name_mangle.m"
                  backend_libs__name_mangle__succeeded = mercury__string__append_3_p_1(backend_libs__name_mangle__V_7_7, &backend_libs__name_mangle___Suffix_6, backend_libs__name_mangle__PlainName_4);
                }
#line 242 "name_mangle.m"
                backend_libs__name_mangle__succeeded = !(backend_libs__name_mangle__succeeded);
#line 246 "name_mangle.m"
              }
#line 246 "name_mangle.m"
          }
#line 246 "name_mangle.m"
      }
#line 244 "name_mangle.m"
    else
#line 244 "name_mangle.m"
      {
#line 244 "name_mangle.m"
        MR_String backend_libs__name_mangle__Name_2 = ((MR_String) (MR_hl_field(MR_mktag(0), backend_libs__name_mangle__HeadVar__1_1, (MR_Integer) 0)));
#line 242 "name_mangle.m"
        MR_String backend_libs__name_mangle__V_10_10;
#line 242 "name_mangle.m"
        MR_String backend_libs__name_mangle___Suffix_9;

#line 241 "name_mangle.m"
        {
#line 241 "name_mangle.m"
          backend_libs__name_mangle__succeeded = mercury__string__is_all_alnum_or_underscore_1_p_0(backend_libs__name_mangle__Name_2);
        }
#line 244 "name_mangle.m"
        if (backend_libs__name_mangle__succeeded)
#line 244 "name_mangle.m"
          {
#line 242 "name_mangle.m"
            backend_libs__name_mangle__V_10_10 = (MR_String) "f_";
#line 242 "name_mangle.m"
            {
#line 242 "name_mangle.m"
              backend_libs__name_mangle__succeeded = mercury__string__append_3_p_1(backend_libs__name_mangle__V_10_10, &backend_libs__name_mangle___Suffix_9, backend_libs__name_mangle__Name_2);
            }
#line 242 "name_mangle.m"
            backend_libs__name_mangle__succeeded = !(backend_libs__name_mangle__succeeded);
#line 244 "name_mangle.m"
          }
#line 244 "name_mangle.m"
      }
#line 244 "name_mangle.m"
    return backend_libs__name_mangle__succeeded;
#line 244 "name_mangle.m"
  }
#line 61 "name_mangle.m"
}

#line 60 "name_mangle.m"
MR_bool MR_CALL 
backend_libs__name_mangle__name_doesnt_need_mangling_1_p_0(
#line 60 "name_mangle.m"
  MR_String backend_libs__name_mangle__Name_2)
#line 60 "name_mangle.m"
{
#line 240 "name_mangle.m"
  {
#line 240 "name_mangle.m"
    MR_bool backend_libs__name_mangle__succeeded;
#line 242 "name_mangle.m"
    MR_String backend_libs__name_mangle__V_4_4;
#line 242 "name_mangle.m"
    MR_String backend_libs__name_mangle___Suffix_3;

#line 241 "name_mangle.m"
    {
#line 241 "name_mangle.m"
      backend_libs__name_mangle__succeeded = mercury__string__is_all_alnum_or_underscore_1_p_0(backend_libs__name_mangle__Name_2);
    }
#line 240 "name_mangle.m"
    if (backend_libs__name_mangle__succeeded)
#line 240 "name_mangle.m"
      {
#line 242 "name_mangle.m"
        backend_libs__name_mangle__V_4_4 = (MR_String) "f_";
#line 242 "name_mangle.m"
        {
#line 242 "name_mangle.m"
          backend_libs__name_mangle__succeeded = mercury__string__append_3_p_1(backend_libs__name_mangle__V_4_4, &backend_libs__name_mangle___Suffix_3, backend_libs__name_mangle__Name_2);
        }
#line 242 "name_mangle.m"
        backend_libs__name_mangle__succeeded = !(backend_libs__name_mangle__succeeded);
#line 240 "name_mangle.m"
      }
#line 240 "name_mangle.m"
    return backend_libs__name_mangle__succeeded;
#line 240 "name_mangle.m"
  }
#line 60 "name_mangle.m"
}

#line 56 "name_mangle.m"
MR_String MR_CALL 
backend_libs__name_mangle__proc_label_to_c_string_2_f_0(
#line 56 "name_mangle.m"
  MR_Word backend_libs__name_mangle__ProcLabel_4,
#line 56 "name_mangle.m"
  MR_Word backend_libs__name_mangle__AddPrefix_5)
#line 56 "name_mangle.m"
{
#line 132 "name_mangle.m"
  {
#line 132 "name_mangle.m"
    MR_bool backend_libs__name_mangle__succeeded;
#line 132 "name_mangle.m"
    MR_String backend_libs__name_mangle__ProcLabelString_6;

#line 132 "name_mangle.m"
    if (((MR_tag((MR_Word) backend_libs__name_mangle__ProcLabel_4)) == (MR_mktag((MR_Integer) 0))))
#line 132 "name_mangle.m"
      {
#line 132 "name_mangle.m"
        MR_Word backend_libs__name_mangle__DefiningModule_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__name_mangle__ProcLabel_4, (MR_Integer) 0)));
#line 132 "name_mangle.m"
        MR_Word backend_libs__name_mangle__PredOrFunc_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__name_mangle__ProcLabel_4, (MR_Integer) 1)));
#line 132 "name_mangle.m"
        MR_Word backend_libs__name_mangle__PredModule_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__name_mangle__ProcLabel_4, (MR_Integer) 2)));
#line 132 "name_mangle.m"
        MR_String backend_libs__name_mangle__PredName_10 = ((MR_String) (MR_hl_field(MR_mktag(0), backend_libs__name_mangle__ProcLabel_4, (MR_Integer) 3)));
#line 132 "name_mangle.m"
        MR_Integer backend_libs__name_mangle__Arity_11 = ((MR_Integer) (MR_hl_field(MR_mktag(0), backend_libs__name_mangle__ProcLabel_4, (MR_Integer) 4)));
#line 132 "name_mangle.m"
        MR_Integer backend_libs__name_mangle__ModeInt_12 = ((MR_Integer) (MR_hl_field(MR_mktag(0), backend_libs__name_mangle__ProcLabel_4, (MR_Integer) 5)));
#line 132 "name_mangle.m"
        MR_String backend_libs__name_mangle__LabelName_13;
#line 132 "name_mangle.m"
        MR_Integer backend_libs__name_mangle__OrigArity_14;
#line 132 "name_mangle.m"
        MR_String backend_libs__name_mangle__ArityString_15;
#line 132 "name_mangle.m"
        MR_String backend_libs__name_mangle__ModeNumString_16;
#line 132 "name_mangle.m"
        MR_Word backend_libs__name_mangle__V_48_48;
#line 132 "name_mangle.m"
        MR_Word backend_libs__name_mangle__V_49_49;
#line 132 "name_mangle.m"
        MR_Word backend_libs__name_mangle__V_51_51;
#line 132 "name_mangle.m"
        MR_Word backend_libs__name_mangle__V_52_52;
#line 132 "name_mangle.m"
        MR_Word backend_libs__name_mangle__V_54_54;
#line 132 "name_mangle.m"
        MR_String backend_libs__name_mangle__DeclaringModuleName_67;
#line 132 "name_mangle.m"
        MR_String backend_libs__name_mangle__DefiningModuleName_68;
#line 132 "name_mangle.m"
        MR_String backend_libs__name_mangle__LabelName0_69;
#line 132 "name_mangle.m"
        MR_String backend_libs__name_mangle__LabelName1_70;
#line 132 "name_mangle.m"
        MR_String backend_libs__name_mangle__LabelName2_71;
#line 132 "name_mangle.m"
        MR_String backend_libs__name_mangle__LabelName3_72;

#line 197 "name_mangle.m"
        {
#line 197 "name_mangle.m"
          backend_libs__name_mangle__DeclaringModuleName_67 = parse_tree__prog_foreign__sym_name_mangle_1_f_0(backend_libs__name_mangle__PredModule_9);
        }
#line 198 "name_mangle.m"
        {
#line 198 "name_mangle.m"
          backend_libs__name_mangle__DefiningModuleName_68 = parse_tree__prog_foreign__sym_name_mangle_1_f_0(backend_libs__name_mangle__DefiningModule_7);
        }
#line 234 "name_mangle.m"
        backend_libs__name_mangle__succeeded = (strcmp(backend_libs__name_mangle__PredName_10, (MR_String) "main") == 0);
#line 234 "name_mangle.m"
        if (backend_libs__name_mangle__succeeded)
#line 235 "name_mangle.m"
          backend_libs__name_mangle__succeeded = (backend_libs__name_mangle__Arity_11 == (MR_Integer) 2);
#line 234 "name_mangle.m"
        if (!(backend_libs__name_mangle__succeeded))
#line 237 "name_mangle.m"
          {
#line 237 "name_mangle.m"
            {
#line 237 "name_mangle.m"
              backend_libs__name_mangle__succeeded = mercury__string__prefix_2_p_0(backend_libs__name_mangle__PredName_10, (MR_String) "__");
            }
#line 237 "name_mangle.m"
          }
#line 201 "name_mangle.m"
        if (backend_libs__name_mangle__succeeded)
#line 200 "name_mangle.m"
          backend_libs__name_mangle__LabelName0_69 = backend_libs__name_mangle__PredName_10;
#line 201 "name_mangle.m"
        else
#line 202 "name_mangle.m"
          {
#line 202 "name_mangle.m"
            backend_libs__name_mangle__LabelName0_69 = parse_tree__prog_foreign__qualify_name_2_f_0(backend_libs__name_mangle__DeclaringModuleName_67, backend_libs__name_mangle__PredName_10);
          }
#line 206 "name_mangle.m"
        {
#line 206 "name_mangle.m"
          backend_libs__name_mangle__succeeded = mdbcomp__sym_name____Unify____sym_name_0_0(backend_libs__name_mangle__DefiningModule_7, backend_libs__name_mangle__PredModule_9);
        }
#line 206 "name_mangle.m"
        backend_libs__name_mangle__succeeded = !(backend_libs__name_mangle__succeeded);
#line 208 "name_mangle.m"
        if (backend_libs__name_mangle__succeeded)
#line 207 "name_mangle.m"
          {
#line 207 "name_mangle.m"
            MR_String backend_libs__name_mangle__V_73_73;

#line 207 "name_mangle.m"
            {
#line 207 "name_mangle.m"
              backend_libs__name_mangle__V_73_73 = mercury__string__f_43_43_2_f_0((MR_String) "__", backend_libs__name_mangle__LabelName0_69);
            }
#line 207 "name_mangle.m"
            {
#line 207 "name_mangle.m"
              backend_libs__name_mangle__LabelName1_70 = mercury__string__f_43_43_2_f_0(backend_libs__name_mangle__DefiningModuleName_68, backend_libs__name_mangle__V_73_73);
            }
#line 207 "name_mangle.m"
          }
#line 208 "name_mangle.m"
        else
#line 209 "name_mangle.m"
          backend_libs__name_mangle__LabelName1_70 = backend_libs__name_mangle__LabelName0_69;
#line 211 "name_mangle.m"
        {
#line 211 "name_mangle.m"
          backend_libs__name_mangle__LabelName2_71 = parse_tree__prog_foreign__name_mangle_1_f_0(backend_libs__name_mangle__LabelName1_70);
        }
#line 934 "backend_libs.name_mangle.c"
#line 935 "backend_libs.name_mangle.c"
        switch (backend_libs__name_mangle__PredOrFunc_8) {
#line 937 "backend_libs.name_mangle.c"
          default: /*NOTREACHED*/ MR_assert(0);
#line 939 "backend_libs.name_mangle.c"
          case (MR_Integer) 1:
#line 941 "backend_libs.name_mangle.c"
            {
#line 214 "name_mangle.m"
              {
#line 214 "name_mangle.m"
                backend_libs__name_mangle__LabelName3_72 = mercury__string__f_43_43_2_f_0((MR_String) "fn__", backend_libs__name_mangle__LabelName2_71);
              }
#line 137 "name_mangle.m"
              backend_libs__name_mangle__OrigArity_14 = (backend_libs__name_mangle__Arity_11 - (MR_Integer) 1);
#line 950 "backend_libs.name_mangle.c"
            }
#line 952 "backend_libs.name_mangle.c"
            break;
#line 954 "backend_libs.name_mangle.c"
          case (MR_Integer) 0:
#line 956 "backend_libs.name_mangle.c"
            {
#line 217 "name_mangle.m"
              backend_libs__name_mangle__LabelName3_72 = backend_libs__name_mangle__LabelName2_71;
#line 140 "name_mangle.m"
              backend_libs__name_mangle__OrigArity_14 = backend_libs__name_mangle__Arity_11;
#line 962 "backend_libs.name_mangle.c"
            }
#line 964 "backend_libs.name_mangle.c"
            break;
#line 966 "backend_libs.name_mangle.c"
        }
#line 222 "name_mangle.m"
#line 222 "name_mangle.m"
        switch (backend_libs__name_mangle__AddPrefix_5) {
#line 222 "name_mangle.m"
          default: /*NOTREACHED*/ MR_assert(0);
#line 222 "name_mangle.m"
          case (MR_Integer) 0:
#line 224 "name_mangle.m"
            backend_libs__name_mangle__LabelName_13 = backend_libs__name_mangle__LabelName3_72;
#line 222 "name_mangle.m"
            break;
#line 222 "name_mangle.m"
          case (MR_Integer) 1:
#line 220 "name_mangle.m"
            {
#line 221 "name_mangle.m"
              {
#line 221 "name_mangle.m"
                backend_libs__name_mangle__LabelName_13 = mercury__string__f_43_43_2_f_0((MR_String) "mercury__", backend_libs__name_mangle__LabelName3_72);
              }
#line 220 "name_mangle.m"
            }
#line 222 "name_mangle.m"
            break;
#line 222 "name_mangle.m"
        }
#line 142 "name_mangle.m"
        {
#line 142 "name_mangle.m"
          mercury__string__int_to_string_2_p_0(backend_libs__name_mangle__OrigArity_14, &backend_libs__name_mangle__ArityString_15);
        }
#line 143 "name_mangle.m"
        {
#line 143 "name_mangle.m"
          mercury__string__int_to_string_2_p_0(backend_libs__name_mangle__ModeInt_12, &backend_libs__name_mangle__ModeNumString_16);
        }
#line 144 "name_mangle.m"
        {
#line 144 "name_mangle.m"
          backend_libs__name_mangle__V_54_54 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 144 "name_mangle.m"
          MR_hl_field(MR_mktag(1), backend_libs__name_mangle__V_54_54, 0) = ((MR_Box) (backend_libs__name_mangle__ModeNumString_16));
#line 144 "name_mangle.m"
          MR_hl_field(MR_mktag(1), backend_libs__name_mangle__V_54_54, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 144 "name_mangle.m"
        }
#line 144 "name_mangle.m"
        {
#line 144 "name_mangle.m"
          backend_libs__name_mangle__V_52_52 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 144 "name_mangle.m"
          MR_hl_field(MR_mktag(1), backend_libs__name_mangle__V_52_52, 0) = ((MR_Box) ((MR_String) "_"));
#line 144 "name_mangle.m"
          MR_hl_field(MR_mktag(1), backend_libs__name_mangle__V_52_52, 1) = ((MR_Box) (backend_libs__name_mangle__V_54_54));
#line 144 "name_mangle.m"
        }
#line 144 "name_mangle.m"
        {
#line 144 "name_mangle.m"
          backend_libs__name_mangle__V_51_51 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 144 "name_mangle.m"
          MR_hl_field(MR_mktag(1), backend_libs__name_mangle__V_51_51, 0) = ((MR_Box) (backend_libs__name_mangle__ArityString_15));
#line 144 "name_mangle.m"
          MR_hl_field(MR_mktag(1), backend_libs__name_mangle__V_51_51, 1) = ((MR_Box) (backend_libs__name_mangle__V_52_52));
#line 144 "name_mangle.m"
        }
#line 144 "name_mangle.m"
        {
#line 144 "name_mangle.m"
          backend_libs__name_mangle__V_49_49 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 144 "name_mangle.m"
          MR_hl_field(MR_mktag(1), backend_libs__name_mangle__V_49_49, 0) = ((MR_Box) ((MR_String) "_"));
#line 144 "name_mangle.m"
          MR_hl_field(MR_mktag(1), backend_libs__name_mangle__V_49_49, 1) = ((MR_Box) (backend_libs__name_mangle__V_51_51));
#line 144 "name_mangle.m"
        }
#line 144 "name_mangle.m"
        {
#line 144 "name_mangle.m"
          backend_libs__name_mangle__V_48_48 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 144 "name_mangle.m"
          MR_hl_field(MR_mktag(1), backend_libs__name_mangle__V_48_48, 0) = ((MR_Box) (backend_libs__name_mangle__LabelName_13));
#line 144 "name_mangle.m"
          MR_hl_field(MR_mktag(1), backend_libs__name_mangle__V_48_48, 1) = ((MR_Box) (backend_libs__name_mangle__V_49_49));
#line 144 "name_mangle.m"
        }
#line 144 "name_mangle.m"
        {
#line 144 "name_mangle.m"
          mercury__string__append_list_2_p_0(backend_libs__name_mangle__V_48_48, &backend_libs__name_mangle__ProcLabelString_6);
        }
#line 132 "name_mangle.m"
      }
#line 132 "name_mangle.m"
    else
#line 148 "name_mangle.m"
      {
#line 148 "name_mangle.m"
        MR_Word backend_libs__name_mangle__Module_17 = ((MR_Word) (MR_hl_field(MR_mktag(1), backend_libs__name_mangle__ProcLabel_4, (MR_Integer) 0)));
#line 148 "name_mangle.m"
        MR_Word backend_libs__name_mangle__SpecialPredId_18 = ((MR_Word) (MR_hl_field(MR_mktag(1), backend_libs__name_mangle__ProcLabel_4, (MR_Integer) 1)));
#line 148 "name_mangle.m"
        MR_Word backend_libs__name_mangle__TypeModule_19 = ((MR_Word) (MR_hl_field(MR_mktag(1), backend_libs__name_mangle__ProcLabel_4, (MR_Integer) 2)));
#line 148 "name_mangle.m"
        MR_String backend_libs__name_mangle__TypeName_20 = ((MR_String) (MR_hl_field(MR_mktag(1), backend_libs__name_mangle__ProcLabel_4, (MR_Integer) 3)));
#line 148 "name_mangle.m"
        MR_Integer backend_libs__name_mangle__TypeArity_21 = ((MR_Integer) (MR_hl_field(MR_mktag(1), backend_libs__name_mangle__ProcLabel_4, (MR_Integer) 4)));
#line 148 "name_mangle.m"
        MR_Word backend_libs__name_mangle__TypeCtor_23;
#line 148 "name_mangle.m"
        MR_String backend_libs__name_mangle__TypeArityString_24;
#line 148 "name_mangle.m"
        MR_String backend_libs__name_mangle__MangledModule_25;
#line 148 "name_mangle.m"
        MR_String backend_libs__name_mangle__MangledTypeModule_26;
#line 148 "name_mangle.m"
        MR_String backend_libs__name_mangle__MangledTypeName_27;
#line 148 "name_mangle.m"
        MR_String backend_libs__name_mangle__QualifiedMangledTypeName_28;
#line 148 "name_mangle.m"
        MR_String backend_libs__name_mangle__FullyQualifiedMangledTypeName_29;
#line 148 "name_mangle.m"
        MR_Word backend_libs__name_mangle__V_30_30;
#line 148 "name_mangle.m"
        MR_Word backend_libs__name_mangle__V_31_31;
#line 148 "name_mangle.m"
        MR_Word backend_libs__name_mangle__V_36_36;
#line 148 "name_mangle.m"
        MR_Word backend_libs__name_mangle__V_37_37;
#line 148 "name_mangle.m"
        MR_Word backend_libs__name_mangle__V_39_39;
#line 148 "name_mangle.m"
        MR_Word backend_libs__name_mangle__V_40_40;
#line 148 "name_mangle.m"
        MR_Word backend_libs__name_mangle__V_42_42;
#line 148 "name_mangle.m"
        MR_Word backend_libs__name_mangle__V_43_43;
#line 148 "name_mangle.m"
        MR_Word backend_libs__name_mangle__V_45_45;
#line 148 "name_mangle.m"
        MR_String backend_libs__name_mangle__PredName_56;
#line 148 "name_mangle.m"
        MR_Integer backend_libs__name_mangle__ModeInt_57 = ((MR_Integer) (MR_hl_field(MR_mktag(1), backend_libs__name_mangle__ProcLabel_4, (MR_Integer) 5)));
#line 148 "name_mangle.m"
        MR_String backend_libs__name_mangle__LabelName_58;
#line 148 "name_mangle.m"
        MR_String backend_libs__name_mangle__ModeNumString_59;
#line 148 "name_mangle.m"
        MR_String backend_libs__name_mangle__UnderscoresModule_84;
#line 257 "name_mangle.m"
        MR_String backend_libs__name_mangle__V_85_85;

#line 154 "name_mangle.m"
        {
#line 154 "name_mangle.m"
          backend_libs__name_mangle__V_30_30 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 154 "name_mangle.m"
          MR_hl_field(MR_mktag(1), backend_libs__name_mangle__V_30_30, 0) = ((MR_Box) (backend_libs__name_mangle__TypeModule_19));
#line 154 "name_mangle.m"
          MR_hl_field(MR_mktag(1), backend_libs__name_mangle__V_30_30, 1) = ((MR_Box) (backend_libs__name_mangle__TypeName_20));
#line 154 "name_mangle.m"
        }
#line 154 "name_mangle.m"
        {
#line 154 "name_mangle.m"
          backend_libs__name_mangle__TypeCtor_23 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 154 "name_mangle.m"
          MR_hl_field(MR_mktag(0), backend_libs__name_mangle__TypeCtor_23, 0) = ((MR_Box) (backend_libs__name_mangle__V_30_30));
#line 154 "name_mangle.m"
          MR_hl_field(MR_mktag(0), backend_libs__name_mangle__TypeCtor_23, 1) = ((MR_Box) (backend_libs__name_mangle__TypeArity_21));
#line 154 "name_mangle.m"
        }
#line 155 "name_mangle.m"
        {
#line 155 "name_mangle.m"
          backend_libs__name_mangle__PredName_56 = hlds__special_pred__special_pred_name_2_f_0(backend_libs__name_mangle__SpecialPredId_18, backend_libs__name_mangle__TypeCtor_23);
        }
#line 156 "name_mangle.m"
        backend_libs__name_mangle__V_31_31 = (MR_Word) &backend_libs__name_mangle_scalar_common_1[0];
#line 156 "name_mangle.m"
        {
#line 156 "name_mangle.m"
          backend_libs__name_mangle__LabelName_58 = backend_libs__name_mangle__make_pred_or_func_name_6_f_0(backend_libs__name_mangle__V_31_31, (MR_Integer) 0, backend_libs__name_mangle__V_31_31, backend_libs__name_mangle__PredName_56, (MR_Integer) -1, backend_libs__name_mangle__AddPrefix_5);
        }
#line 160 "name_mangle.m"
        {
#line 160 "name_mangle.m"
          mercury__string__int_to_string_2_p_0(backend_libs__name_mangle__TypeArity_21, &backend_libs__name_mangle__TypeArityString_24);
        }
#line 161 "name_mangle.m"
        {
#line 161 "name_mangle.m"
          mercury__string__int_to_string_2_p_0(backend_libs__name_mangle__ModeInt_57, &backend_libs__name_mangle__ModeNumString_59);
        }
#line 164 "name_mangle.m"
        {
#line 164 "name_mangle.m"
          backend_libs__name_mangle__MangledModule_25 = parse_tree__prog_foreign__sym_name_mangle_1_f_0(backend_libs__name_mangle__Module_17);
        }
#line 165 "name_mangle.m"
        {
#line 165 "name_mangle.m"
          backend_libs__name_mangle__MangledTypeModule_26 = parse_tree__prog_foreign__sym_name_mangle_1_f_0(backend_libs__name_mangle__TypeModule_19);
        }
#line 166 "name_mangle.m"
        {
#line 166 "name_mangle.m"
          backend_libs__name_mangle__MangledTypeName_27 = parse_tree__prog_foreign__name_mangle_1_f_0(backend_libs__name_mangle__TypeName_20);
        }
#line 173 "name_mangle.m"
        {
#line 173 "name_mangle.m"
          backend_libs__name_mangle__QualifiedMangledTypeName_28 = parse_tree__prog_foreign__qualify_name_2_f_0(backend_libs__name_mangle__MangledTypeModule_26, backend_libs__name_mangle__MangledTypeName_27);
        }
#line 256 "name_mangle.m"
        {
#line 256 "name_mangle.m"
          mercury__string__append_3_p_2(backend_libs__name_mangle__MangledModule_25, (MR_String) "__", &backend_libs__name_mangle__UnderscoresModule_84);
        }
#line 257 "name_mangle.m"
        {
#line 257 "name_mangle.m"
          backend_libs__name_mangle__succeeded = mercury__string__append_3_p_1(backend_libs__name_mangle__UnderscoresModule_84, &backend_libs__name_mangle__V_85_85, backend_libs__name_mangle__QualifiedMangledTypeName_28);
        }
#line 259 "name_mangle.m"
        if (backend_libs__name_mangle__succeeded)
#line 258 "name_mangle.m"
          backend_libs__name_mangle__FullyQualifiedMangledTypeName_29 = backend_libs__name_mangle__QualifiedMangledTypeName_28;
#line 259 "name_mangle.m"
        else
#line 260 "name_mangle.m"
          {
#line 260 "name_mangle.m"
            mercury__string__append_3_p_2(backend_libs__name_mangle__UnderscoresModule_84, backend_libs__name_mangle__QualifiedMangledTypeName_28, &backend_libs__name_mangle__FullyQualifiedMangledTypeName_29);
          }
#line 180 "name_mangle.m"
        {
#line 180 "name_mangle.m"
          backend_libs__name_mangle__V_45_45 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 180 "name_mangle.m"
          MR_hl_field(MR_mktag(1), backend_libs__name_mangle__V_45_45, 0) = ((MR_Box) (backend_libs__name_mangle__ModeNumString_59));
#line 180 "name_mangle.m"
          MR_hl_field(MR_mktag(1), backend_libs__name_mangle__V_45_45, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 180 "name_mangle.m"
        }
#line 180 "name_mangle.m"
        {
#line 180 "name_mangle.m"
          backend_libs__name_mangle__V_43_43 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 180 "name_mangle.m"
          MR_hl_field(MR_mktag(1), backend_libs__name_mangle__V_43_43, 0) = ((MR_Box) ((MR_String) "_"));
#line 180 "name_mangle.m"
          MR_hl_field(MR_mktag(1), backend_libs__name_mangle__V_43_43, 1) = ((MR_Box) (backend_libs__name_mangle__V_45_45));
#line 180 "name_mangle.m"
        }
#line 180 "name_mangle.m"
        {
#line 180 "name_mangle.m"
          backend_libs__name_mangle__V_42_42 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 180 "name_mangle.m"
          MR_hl_field(MR_mktag(1), backend_libs__name_mangle__V_42_42, 0) = ((MR_Box) (backend_libs__name_mangle__TypeArityString_24));
#line 180 "name_mangle.m"
          MR_hl_field(MR_mktag(1), backend_libs__name_mangle__V_42_42, 1) = ((MR_Box) (backend_libs__name_mangle__V_43_43));
#line 180 "name_mangle.m"
        }
#line 180 "name_mangle.m"
        {
#line 180 "name_mangle.m"
          backend_libs__name_mangle__V_40_40 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 180 "name_mangle.m"
          MR_hl_field(MR_mktag(1), backend_libs__name_mangle__V_40_40, 0) = ((MR_Box) ((MR_String) "_"));
#line 180 "name_mangle.m"
          MR_hl_field(MR_mktag(1), backend_libs__name_mangle__V_40_40, 1) = ((MR_Box) (backend_libs__name_mangle__V_42_42));
#line 180 "name_mangle.m"
        }
#line 179 "name_mangle.m"
        {
#line 179 "name_mangle.m"
          backend_libs__name_mangle__V_39_39 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 179 "name_mangle.m"
          MR_hl_field(MR_mktag(1), backend_libs__name_mangle__V_39_39, 0) = ((MR_Box) (backend_libs__name_mangle__FullyQualifiedMangledTypeName_29));
#line 179 "name_mangle.m"
          MR_hl_field(MR_mktag(1), backend_libs__name_mangle__V_39_39, 1) = ((MR_Box) (backend_libs__name_mangle__V_40_40));
#line 179 "name_mangle.m"
        }
#line 179 "name_mangle.m"
        {
#line 179 "name_mangle.m"
          backend_libs__name_mangle__V_37_37 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 179 "name_mangle.m"
          MR_hl_field(MR_mktag(1), backend_libs__name_mangle__V_37_37, 0) = ((MR_Box) ((MR_String) "_"));
#line 179 "name_mangle.m"
          MR_hl_field(MR_mktag(1), backend_libs__name_mangle__V_37_37, 1) = ((MR_Box) (backend_libs__name_mangle__V_39_39));
#line 179 "name_mangle.m"
        }
#line 179 "name_mangle.m"
        {
#line 179 "name_mangle.m"
          backend_libs__name_mangle__V_36_36 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 179 "name_mangle.m"
          MR_hl_field(MR_mktag(1), backend_libs__name_mangle__V_36_36, 0) = ((MR_Box) (backend_libs__name_mangle__LabelName_58));
#line 179 "name_mangle.m"
          MR_hl_field(MR_mktag(1), backend_libs__name_mangle__V_36_36, 1) = ((MR_Box) (backend_libs__name_mangle__V_37_37));
#line 179 "name_mangle.m"
        }
#line 179 "name_mangle.m"
        {
#line 179 "name_mangle.m"
          mercury__string__append_list_2_p_0(backend_libs__name_mangle__V_36_36, &backend_libs__name_mangle__ProcLabelString_6);
        }
#line 148 "name_mangle.m"
      }
#line 132 "name_mangle.m"
    return backend_libs__name_mangle__ProcLabelString_6;
#line 132 "name_mangle.m"
  }
#line 56 "name_mangle.m"
}

#line 50 "name_mangle.m"
void MR_CALL 
backend_libs__name_mangle__output_proc_label_maybe_prefix_4_p_0(
#line 50 "name_mangle.m"
  MR_Word backend_libs__name_mangle__ProcLabel_5,
#line 50 "name_mangle.m"
  MR_Word backend_libs__name_mangle__AddPrefix_6)
#line 50 "name_mangle.m"
{
#line 125 "name_mangle.m"
  {
#line 125 "name_mangle.m"
    MR_bool backend_libs__name_mangle__succeeded;
#line 125 "name_mangle.m"
    MR_String backend_libs__name_mangle__ProcLabelString_8;

#line 126 "name_mangle.m"
    {
#line 126 "name_mangle.m"
      backend_libs__name_mangle__ProcLabelString_8 = backend_libs__name_mangle__proc_label_to_c_string_2_f_0(backend_libs__name_mangle__ProcLabel_5, backend_libs__name_mangle__AddPrefix_6);
    }
#line 127 "name_mangle.m"
    {
#line 127 "name_mangle.m"
      mercury__io__write_string_3_p_0(backend_libs__name_mangle__ProcLabelString_8);
#line 127 "name_mangle.m"
      return;
    }
#line 125 "name_mangle.m"
  }
#line 50 "name_mangle.m"
}

#line 45 "name_mangle.m"
void MR_CALL 
backend_libs__name_mangle__output_proc_label_no_prefix_3_p_0(
#line 45 "name_mangle.m"
  MR_Word backend_libs__name_mangle__ProcLabel_4)
#line 45 "name_mangle.m"
{
#line 122 "name_mangle.m"
  {
#line 122 "name_mangle.m"
    MR_bool backend_libs__name_mangle__succeeded;
#line 122 "name_mangle.m"
    MR_String backend_libs__name_mangle__ProcLabelString_15;

#line 126 "name_mangle.m"
    {
#line 126 "name_mangle.m"
      backend_libs__name_mangle__ProcLabelString_15 = backend_libs__name_mangle__proc_label_to_c_string_2_f_0(backend_libs__name_mangle__ProcLabel_4, (MR_Integer) 0);
    }
#line 127 "name_mangle.m"
    {
#line 127 "name_mangle.m"
      mercury__io__write_string_3_p_0(backend_libs__name_mangle__ProcLabelString_15);
#line 127 "name_mangle.m"
      return;
    }
#line 122 "name_mangle.m"
  }
#line 45 "name_mangle.m"
}

#line 41 "name_mangle.m"
void MR_CALL 
backend_libs__name_mangle__output_proc_label_3_p_0(
#line 41 "name_mangle.m"
  MR_Word backend_libs__name_mangle__ProcLabel_4)
#line 41 "name_mangle.m"
{
#line 119 "name_mangle.m"
  {
#line 119 "name_mangle.m"
    MR_bool backend_libs__name_mangle__succeeded;
#line 119 "name_mangle.m"
    MR_String backend_libs__name_mangle__ProcLabelString_15;

#line 126 "name_mangle.m"
    {
#line 126 "name_mangle.m"
      backend_libs__name_mangle__ProcLabelString_15 = backend_libs__name_mangle__proc_label_to_c_string_2_f_0(backend_libs__name_mangle__ProcLabel_4, (MR_Integer) 1);
    }
#line 127 "name_mangle.m"
    {
#line 127 "name_mangle.m"
      mercury__io__write_string_3_p_0(backend_libs__name_mangle__ProcLabelString_15);
#line 127 "name_mangle.m"
      return;
    }
#line 119 "name_mangle.m"
  }
#line 41 "name_mangle.m"
}

void mercury__backend_libs__name_mangle__init(void)
{
}

void mercury__backend_libs__name_mangle__init_type_tables(void)
{
}

void mercury__backend_libs__name_mangle__init_debugger(void)
{
	MR_fatal_error("debugger initialization in MLDS grade");
}

/* ensure everything is compiled with the same grade */
static const void *const MR_grade = &MR_GRADE_VAR;

/* :- end_module backend_libs.name_mangle. */
