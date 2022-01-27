/*
** Automatically generated from `prog_mutable.m'
** by the Mercury compiler,
** version rotd-2015-03-10
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


/* :- module parse_tree.prog_mutable. */
/* :- implementation. */

/*
INIT mercury__parse_tree__prog_mutable__init
ENDINIT
*/

#include "parse_tree.prog_mutable.mih"


#include "analysis.mih"
#include "array.mih"
#include "assoc_list.mih"
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
#include "libs.file_util.mih"
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
#include "parse_tree.builtin_lib_types.mih"
#include "parse_tree.error_util.mih"
#include "parse_tree.file_names.mih"
#include "parse_tree.module_qual.mih"
#include "parse_tree.prog_data.mih"
#include "parse_tree.prog_foreign.mih"
#include "parse_tree.prog_item.mih"
#include "parse_tree.prog_mode.mih"
#include "parse_tree.set_of_var.mih"
#include "transform_hlds.term_constr_data.mih"
#include "transform_hlds.term_constr_errors.mih"
#include "transform_hlds.term_constr_main.mih"
#include "transform_hlds.term_errors.mih"
#include "transform_hlds.term_norm.mih"
#include "transform_hlds.term_util.mih"
#include "mdbcomp.feedback.automatic_parallelism.mih"




#line 136 "parse_tree.prog_mutable.c"
static const MR_EnumFunctorDesc parse_tree__prog_mutable__parse_tree__prog_mutable__enum_functor_desc_get_set_pred_kind_0_0;

#line 139 "parse_tree.prog_mutable.c"
static const MR_EnumFunctorDesc parse_tree__prog_mutable__parse_tree__prog_mutable__enum_functor_desc_get_set_pred_kind_0_1;

#line 142 "parse_tree.prog_mutable.c"
static const MR_EnumFunctorDesc parse_tree__prog_mutable__parse_tree__prog_mutable__enum_functor_desc_get_set_pred_kind_0_2;

#line 145 "parse_tree.prog_mutable.c"
static const MR_EnumFunctorDescPtr parse_tree__prog_mutable__parse_tree__prog_mutable__enum_value_ordered_get_set_pred_kind_0[3];

#line 148 "parse_tree.prog_mutable.c"
static const MR_EnumFunctorDescPtr parse_tree__prog_mutable__parse_tree__prog_mutable__enum_name_ordered_get_set_pred_kind_0[3];

#line 151 "parse_tree.prog_mutable.c"
static const MR_Integer parse_tree__prog_mutable__parse_tree__prog_mutable__functor_number_map_get_set_pred_kind_0[3];

#line 154 "parse_tree.prog_mutable.c"
static MR_bool MR_CALL 
parse_tree__prog_mutable____Unify____get_set_pred_kind_0_0_10001(
#line 157 "parse_tree.prog_mutable.c"
  MR_Box parse_tree__prog_mutable__wrapper_arg_1,
#line 159 "parse_tree.prog_mutable.c"
  MR_Box parse_tree__prog_mutable__wrapper_arg_2);

#line 162 "parse_tree.prog_mutable.c"
static void MR_CALL 
parse_tree__prog_mutable____Compare____get_set_pred_kind_0_0_10001(
#line 165 "parse_tree.prog_mutable.c"
  MR_Box * parse_tree__prog_mutable__wrapper_arg_1,
#line 167 "parse_tree.prog_mutable.c"
  MR_Box parse_tree__prog_mutable__wrapper_arg_2,
#line 169 "parse_tree.prog_mutable.c"
  MR_Box parse_tree__prog_mutable__wrapper_arg_3);

#line 666 "prog_mutable.m"
static void MR_CALL 
parse_tree__prog_mutable____Compare____get_set_pred_kind_0_0(
#line 666 "prog_mutable.m"
  MR_Word * parse_tree__prog_mutable__HeadVar__1_1,
#line 666 "prog_mutable.m"
  MR_Word parse_tree__prog_mutable__HeadVar__2_2,
#line 666 "prog_mutable.m"
  MR_Word parse_tree__prog_mutable__HeadVar__3_3);

#line 666 "prog_mutable.m"
static MR_bool MR_CALL 
parse_tree__prog_mutable____Unify____get_set_pred_kind_0_0(
#line 666 "prog_mutable.m"
  MR_Word parse_tree__prog_mutable__HeadVar__2_1,
#line 666 "prog_mutable.m"
  MR_Word parse_tree__prog_mutable__HeadVar__2_2);

#line 704 "prog_mutable.m"
static MR_Word MR_CALL 
parse_tree__prog_mutable__make_mutable_set_pred_decl_6_f_0(
#line 704 "prog_mutable.m"
  MR_Word parse_tree__prog_mutable__ModuleName_8,
#line 704 "prog_mutable.m"
  MR_String parse_tree__prog_mutable__Name_9,
#line 704 "prog_mutable.m"
  MR_Word parse_tree__prog_mutable__Type_10,
#line 704 "prog_mutable.m"
  MR_Word parse_tree__prog_mutable__Inst_11,
#line 704 "prog_mutable.m"
  MR_Word parse_tree__prog_mutable__PredKind_12,
#line 704 "prog_mutable.m"
  MR_Word parse_tree__prog_mutable__Context_13);

#line 671 "prog_mutable.m"
static MR_Word MR_CALL 
parse_tree__prog_mutable__make_mutable_get_pred_decl_6_f_0(
#line 671 "prog_mutable.m"
  MR_Word parse_tree__prog_mutable__ModuleName_8,
#line 671 "prog_mutable.m"
  MR_String parse_tree__prog_mutable__Name_9,
#line 671 "prog_mutable.m"
  MR_Word parse_tree__prog_mutable__Type_10,
#line 671 "prog_mutable.m"
  MR_Word parse_tree__prog_mutable__Inst_11,
#line 671 "prog_mutable.m"
  MR_Word parse_tree__prog_mutable__PredKind_12,
#line 671 "prog_mutable.m"
  MR_Word parse_tree__prog_mutable__Context_13);


static /* final */ const MR_Box parse_tree__prog_mutable_scalar_common_1[2][2];

static /* final */ const MR_Box parse_tree__prog_mutable_scalar_common_2[1][1];




static /* final */ const MR_Box parse_tree__prog_mutable_scalar_common_1[2][2] = {
  /* row 0 */
  {
    ((MR_Box) ((MR_Integer) 1)),
    ((MR_Box) ((MR_Integer) 1))
  },
  /* row 1 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))),
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))))
  },
};

static /* final */ const MR_Box parse_tree__prog_mutable_scalar_common_2[1][1] = {
  /* row 0 */
  {
    ((MR_Box) ((MR_Integer) 0))
  },
};



#include "io.mh"
#include "io.mh"
#include "time.mh"
#include "string.mh"
#include "bitmap.mh"
#include "bitmap.mh"
#include "time.mh"
#include "time.mh"
#include "mdbcomp.rtti_access.mh"
#include "mdbcomp.rtti_access.mh"
#include "array.mh"
#include "array.mh"



#line 267 "parse_tree.prog_mutable.c"
static const MR_EnumFunctorDesc parse_tree__prog_mutable__parse_tree__prog_mutable__enum_functor_desc_get_set_pred_kind_0_0 = {
  (MR_String) "get_set_pred_std",
  (MR_Integer) 0
};

#line 273 "parse_tree.prog_mutable.c"
static const MR_EnumFunctorDesc parse_tree__prog_mutable__parse_tree__prog_mutable__enum_functor_desc_get_set_pred_kind_0_1 = {
  (MR_String) "get_set_pred_constant",
  (MR_Integer) 1
};

#line 279 "parse_tree.prog_mutable.c"
static const MR_EnumFunctorDesc parse_tree__prog_mutable__parse_tree__prog_mutable__enum_functor_desc_get_set_pred_kind_0_2 = {
  (MR_String) "get_set_pred_io",
  (MR_Integer) 2
};

#line 285 "parse_tree.prog_mutable.c"
static const MR_EnumFunctorDescPtr parse_tree__prog_mutable__parse_tree__prog_mutable__enum_value_ordered_get_set_pred_kind_0[3] = {
  &parse_tree__prog_mutable__parse_tree__prog_mutable__enum_functor_desc_get_set_pred_kind_0_0,
  &parse_tree__prog_mutable__parse_tree__prog_mutable__enum_functor_desc_get_set_pred_kind_0_1,
  &parse_tree__prog_mutable__parse_tree__prog_mutable__enum_functor_desc_get_set_pred_kind_0_2
};

#line 292 "parse_tree.prog_mutable.c"
static const MR_EnumFunctorDescPtr parse_tree__prog_mutable__parse_tree__prog_mutable__enum_name_ordered_get_set_pred_kind_0[3] = {
  &parse_tree__prog_mutable__parse_tree__prog_mutable__enum_functor_desc_get_set_pred_kind_0_1,
  &parse_tree__prog_mutable__parse_tree__prog_mutable__enum_functor_desc_get_set_pred_kind_0_2,
  &parse_tree__prog_mutable__parse_tree__prog_mutable__enum_functor_desc_get_set_pred_kind_0_0
};

#line 299 "parse_tree.prog_mutable.c"
static const MR_Integer parse_tree__prog_mutable__parse_tree__prog_mutable__functor_number_map_get_set_pred_kind_0[3] = {
  (MR_Integer) 2,
  (MR_Integer) 0,
  (MR_Integer) 1
};

#line 306 "parse_tree.prog_mutable.c"
const MR_TypeCtorInfo_Struct parse_tree__prog_mutable__parse_tree__prog_mutable__type_ctor_info_get_set_pred_kind_0 = {
  (MR_Integer) 0,
  (MR_Integer) 15,
  (MR_Integer) -1,
  mercury__private_builtin__MR_TYPECTOR_REP_ENUM,
  ((MR_Box) (parse_tree__prog_mutable____Unify____get_set_pred_kind_0_0_10001)),
  ((MR_Box) (parse_tree__prog_mutable____Compare____get_set_pred_kind_0_0_10001)),
  (MR_String) "parse_tree.prog_mutable",
  (MR_String) "get_set_pred_kind",
  {     parse_tree__prog_mutable__parse_tree__prog_mutable__enum_name_ordered_get_set_pred_kind_0 },
  {     parse_tree__prog_mutable__parse_tree__prog_mutable__enum_value_ordered_get_set_pred_kind_0 },
  (MR_Integer) 3,
  (MR_Integer) 4,
  parse_tree__prog_mutable__parse_tree__prog_mutable__functor_number_map_get_set_pred_kind_0
};

#line 323 "parse_tree.prog_mutable.c"
static MR_bool MR_CALL 
parse_tree__prog_mutable____Unify____get_set_pred_kind_0_0_10001(
#line 326 "parse_tree.prog_mutable.c"
  MR_Box parse_tree__prog_mutable__wrapper_arg_1,
#line 328 "parse_tree.prog_mutable.c"
  MR_Box parse_tree__prog_mutable__wrapper_arg_2)
#line 330 "parse_tree.prog_mutable.c"
{
#line 332 "parse_tree.prog_mutable.c"
  {
#line 334 "parse_tree.prog_mutable.c"
    MR_bool parse_tree__prog_mutable__succeeded;

#line 337 "parse_tree.prog_mutable.c"
    {
#line 339 "parse_tree.prog_mutable.c"
      parse_tree__prog_mutable__succeeded = parse_tree__prog_mutable____Unify____get_set_pred_kind_0_0(((MR_Word) parse_tree__prog_mutable__wrapper_arg_1), ((MR_Word) parse_tree__prog_mutable__wrapper_arg_2));
    }
#line 342 "parse_tree.prog_mutable.c"
    return parse_tree__prog_mutable__succeeded;
#line 344 "parse_tree.prog_mutable.c"
  }
#line 346 "parse_tree.prog_mutable.c"
}

#line 349 "parse_tree.prog_mutable.c"
static void MR_CALL 
parse_tree__prog_mutable____Compare____get_set_pred_kind_0_0_10001(
#line 352 "parse_tree.prog_mutable.c"
  MR_Box * parse_tree__prog_mutable__wrapper_arg_1,
#line 354 "parse_tree.prog_mutable.c"
  MR_Box parse_tree__prog_mutable__wrapper_arg_2,
#line 356 "parse_tree.prog_mutable.c"
  MR_Box parse_tree__prog_mutable__wrapper_arg_3)
#line 358 "parse_tree.prog_mutable.c"
{
#line 360 "parse_tree.prog_mutable.c"
  {
#line 362 "parse_tree.prog_mutable.c"
    MR_Word parse_tree__prog_mutable__conv0_HeadVar__1_1;

#line 365 "parse_tree.prog_mutable.c"
    {
#line 367 "parse_tree.prog_mutable.c"
      parse_tree__prog_mutable____Compare____get_set_pred_kind_0_0(&parse_tree__prog_mutable__conv0_HeadVar__1_1, ((MR_Word) parse_tree__prog_mutable__wrapper_arg_2), ((MR_Word) parse_tree__prog_mutable__wrapper_arg_3));
    }
#line 370 "parse_tree.prog_mutable.c"
    *parse_tree__prog_mutable__wrapper_arg_1 = ((MR_Box) (parse_tree__prog_mutable__conv0_HeadVar__1_1));
#line 372 "parse_tree.prog_mutable.c"
  }
#line 374 "parse_tree.prog_mutable.c"
}

#line 666 "prog_mutable.m"
static void MR_CALL 
parse_tree__prog_mutable____Compare____get_set_pred_kind_0_0(
#line 666 "prog_mutable.m"
  MR_Word * parse_tree__prog_mutable__HeadVar__1_1,
#line 666 "prog_mutable.m"
  MR_Word parse_tree__prog_mutable__HeadVar__2_2,
#line 666 "prog_mutable.m"
  MR_Word parse_tree__prog_mutable__HeadVar__3_3)
#line 666 "prog_mutable.m"
{
#line 666 "prog_mutable.m"
  {
#line 666 "prog_mutable.m"
    MR_bool parse_tree__prog_mutable__succeeded;
#line 666 "prog_mutable.m"
    MR_Integer parse_tree__prog_mutable__Cast_HeadVar1_4 = (MR_Integer) parse_tree__prog_mutable__HeadVar__2_2;
#line 666 "prog_mutable.m"
    MR_Integer parse_tree__prog_mutable__Cast_HeadVar2_5 = (MR_Integer) parse_tree__prog_mutable__HeadVar__3_3;

#line 666 "prog_mutable.m"
    {
#line 666 "prog_mutable.m"
      mercury__private_builtin__builtin_compare_int_3_p_0(parse_tree__prog_mutable__HeadVar__1_1, parse_tree__prog_mutable__Cast_HeadVar1_4, parse_tree__prog_mutable__Cast_HeadVar2_5);
#line 666 "prog_mutable.m"
      return;
    }
#line 666 "prog_mutable.m"
  }
#line 666 "prog_mutable.m"
}

#line 666 "prog_mutable.m"
static MR_bool MR_CALL 
parse_tree__prog_mutable____Unify____get_set_pred_kind_0_0(
#line 666 "prog_mutable.m"
  MR_Word parse_tree__prog_mutable__HeadVar__2_1,
#line 666 "prog_mutable.m"
  MR_Word parse_tree__prog_mutable__HeadVar__2_2)
#line 666 "prog_mutable.m"
{
#line 418 "parse_tree.prog_mutable.c"
  {
#line 420 "parse_tree.prog_mutable.c"
    MR_bool parse_tree__prog_mutable__succeeded = (parse_tree__prog_mutable__HeadVar__2_1 == parse_tree__prog_mutable__HeadVar__2_2);

#line 423 "parse_tree.prog_mutable.c"
    return parse_tree__prog_mutable__succeeded;
#line 425 "parse_tree.prog_mutable.c"
  }
#line 666 "prog_mutable.m"
}

#line 704 "prog_mutable.m"
static MR_Word MR_CALL 
parse_tree__prog_mutable__make_mutable_set_pred_decl_6_f_0(
#line 704 "prog_mutable.m"
  MR_Word parse_tree__prog_mutable__ModuleName_8,
#line 704 "prog_mutable.m"
  MR_String parse_tree__prog_mutable__Name_9,
#line 704 "prog_mutable.m"
  MR_Word parse_tree__prog_mutable__Type_10,
#line 704 "prog_mutable.m"
  MR_Word parse_tree__prog_mutable__Inst_11,
#line 704 "prog_mutable.m"
  MR_Word parse_tree__prog_mutable__PredKind_12,
#line 704 "prog_mutable.m"
  MR_Word parse_tree__prog_mutable__Context_13)
#line 704 "prog_mutable.m"
{
#line 708 "prog_mutable.m"
  {
#line 708 "prog_mutable.m"
    MR_bool parse_tree__prog_mutable__succeeded;
#line 708 "prog_mutable.m"
    MR_Word parse_tree__prog_mutable__SetPredDecl_14;
#line 708 "prog_mutable.m"
    MR_Word parse_tree__prog_mutable__TypeVarSet_17;
#line 708 "prog_mutable.m"
    MR_Word parse_tree__prog_mutable__InstVarSet_18;
#line 708 "prog_mutable.m"
    MR_Word parse_tree__prog_mutable__MainArgTypesAndModes_20;
#line 708 "prog_mutable.m"
    MR_Word parse_tree__prog_mutable__SymName_21;
#line 708 "prog_mutable.m"
    MR_Word parse_tree__prog_mutable__ArgTypesAndModes_22;
#line 708 "prog_mutable.m"
    MR_Word parse_tree__prog_mutable__Purity_23;
#line 708 "prog_mutable.m"
    MR_Word parse_tree__prog_mutable__V_29_29;
#line 708 "prog_mutable.m"
    MR_Word parse_tree__prog_mutable__V_30_30;

#line 712 "prog_mutable.m"
    {
#line 712 "prog_mutable.m"
      parse_tree__prog_mutable__TypeVarSet_17 = mercury__varset__init_0_f_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_tvar_type_0);
    }
#line 713 "prog_mutable.m"
    {
#line 713 "prog_mutable.m"
      parse_tree__prog_mutable__InstVarSet_18 = mercury__varset__init_0_f_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_inst_var_type_0);
    }
#line 715 "prog_mutable.m"
    {
#line 715 "prog_mutable.m"
      parse_tree__prog_mutable__V_30_30 = parse_tree__prog_mode__in_mode_1_f_0(parse_tree__prog_mutable__Inst_11);
    }
#line 715 "prog_mutable.m"
    {
#line 715 "prog_mutable.m"
      parse_tree__prog_mutable__V_29_29 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 715 "prog_mutable.m"
      MR_hl_field(MR_mktag(1), parse_tree__prog_mutable__V_29_29, 0) = ((MR_Box) (parse_tree__prog_mutable__Type_10));
#line 715 "prog_mutable.m"
      MR_hl_field(MR_mktag(1), parse_tree__prog_mutable__V_29_29, 1) = ((MR_Box) (parse_tree__prog_mutable__V_30_30));
#line 715 "prog_mutable.m"
    }
#line 715 "prog_mutable.m"
    {
#line 715 "prog_mutable.m"
      parse_tree__prog_mutable__MainArgTypesAndModes_20 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 715 "prog_mutable.m"
      MR_hl_field(MR_mktag(1), parse_tree__prog_mutable__MainArgTypesAndModes_20, 0) = ((MR_Box) (parse_tree__prog_mutable__V_29_29));
#line 715 "prog_mutable.m"
      MR_hl_field(MR_mktag(1), parse_tree__prog_mutable__MainArgTypesAndModes_20, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 715 "prog_mutable.m"
    }
#line 721 "prog_mutable.m"
    if ((parse_tree__prog_mutable__PredKind_12 == (MR_Integer) 1))
#line 722 "prog_mutable.m"
      {
#line 722 "prog_mutable.m"
        MR_String parse_tree__prog_mutable__V_44_44;

#line 613 "prog_mutable.m"
        {
#line 613 "prog_mutable.m"
          parse_tree__prog_mutable__V_44_44 = mercury__string__f_43_43_2_f_0((MR_String) "secret_initialization_only_set_", parse_tree__prog_mutable__Name_9);
        }
#line 613 "prog_mutable.m"
        {
#line 613 "prog_mutable.m"
          parse_tree__prog_mutable__SymName_21 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 613 "prog_mutable.m"
          MR_hl_field(MR_mktag(1), parse_tree__prog_mutable__SymName_21, 0) = ((MR_Box) (parse_tree__prog_mutable__ModuleName_8));
#line 613 "prog_mutable.m"
          MR_hl_field(MR_mktag(1), parse_tree__prog_mutable__SymName_21, 1) = ((MR_Box) (parse_tree__prog_mutable__V_44_44));
#line 613 "prog_mutable.m"
        }
#line 724 "prog_mutable.m"
        parse_tree__prog_mutable__ArgTypesAndModes_22 = parse_tree__prog_mutable__MainArgTypesAndModes_20;
#line 725 "prog_mutable.m"
        parse_tree__prog_mutable__Purity_23 = (MR_Integer) 2;
#line 722 "prog_mutable.m"
      }
#line 721 "prog_mutable.m"
    else
#line 721 "prog_mutable.m"
    if ((parse_tree__prog_mutable__PredKind_12 == (MR_Integer) 2))
#line 727 "prog_mutable.m"
      {
#line 727 "prog_mutable.m"
        MR_Word parse_tree__prog_mutable__V_32_32;
#line 727 "prog_mutable.m"
        MR_String parse_tree__prog_mutable__V_48_48;
#line 727 "prog_mutable.m"
        MR_Word parse_tree__prog_mutable__V_50_50;
#line 727 "prog_mutable.m"
        MR_Word parse_tree__prog_mutable__V_51_51;
#line 727 "prog_mutable.m"
        MR_Word parse_tree__prog_mutable__V_52_52;
#line 727 "prog_mutable.m"
        MR_Word parse_tree__prog_mutable__V_53_53;
#line 727 "prog_mutable.m"
        MR_Word parse_tree__prog_mutable__V_54_54;
#line 727 "prog_mutable.m"
        MR_Word parse_tree__prog_mutable__V_55_55;
#line 727 "prog_mutable.m"
        MR_Word parse_tree__prog_mutable__V_56_56;

#line 610 "prog_mutable.m"
        {
#line 610 "prog_mutable.m"
          parse_tree__prog_mutable__V_48_48 = mercury__string__f_43_43_2_f_0((MR_String) "set_", parse_tree__prog_mutable__Name_9);
        }
#line 610 "prog_mutable.m"
        {
#line 610 "prog_mutable.m"
          parse_tree__prog_mutable__SymName_21 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 610 "prog_mutable.m"
          MR_hl_field(MR_mktag(1), parse_tree__prog_mutable__SymName_21, 0) = ((MR_Box) (parse_tree__prog_mutable__ModuleName_8));
#line 610 "prog_mutable.m"
          MR_hl_field(MR_mktag(1), parse_tree__prog_mutable__SymName_21, 1) = ((MR_Box) (parse_tree__prog_mutable__V_48_48));
#line 610 "prog_mutable.m"
        }
#line 742 "prog_mutable.m"
        {
#line 742 "prog_mutable.m"
          parse_tree__prog_mutable__V_51_51 = parse_tree__builtin_lib_types__io_state_type_0_f_0();
        }
#line 742 "prog_mutable.m"
        {
#line 742 "prog_mutable.m"
          parse_tree__prog_mutable__V_52_52 = parse_tree__prog_mode__di_mode_0_f_0();
        }
#line 742 "prog_mutable.m"
        {
#line 742 "prog_mutable.m"
          parse_tree__prog_mutable__V_50_50 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 742 "prog_mutable.m"
          MR_hl_field(MR_mktag(1), parse_tree__prog_mutable__V_50_50, 0) = ((MR_Box) (parse_tree__prog_mutable__V_51_51));
#line 742 "prog_mutable.m"
          MR_hl_field(MR_mktag(1), parse_tree__prog_mutable__V_50_50, 1) = ((MR_Box) (parse_tree__prog_mutable__V_52_52));
#line 742 "prog_mutable.m"
        }
#line 743 "prog_mutable.m"
        {
#line 743 "prog_mutable.m"
          parse_tree__prog_mutable__V_55_55 = parse_tree__builtin_lib_types__io_state_type_0_f_0();
        }
#line 743 "prog_mutable.m"
        {
#line 743 "prog_mutable.m"
          parse_tree__prog_mutable__V_56_56 = parse_tree__prog_mode__uo_mode_0_f_0();
        }
#line 743 "prog_mutable.m"
        {
#line 743 "prog_mutable.m"
          parse_tree__prog_mutable__V_54_54 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 743 "prog_mutable.m"
          MR_hl_field(MR_mktag(1), parse_tree__prog_mutable__V_54_54, 0) = ((MR_Box) (parse_tree__prog_mutable__V_55_55));
#line 743 "prog_mutable.m"
          MR_hl_field(MR_mktag(1), parse_tree__prog_mutable__V_54_54, 1) = ((MR_Box) (parse_tree__prog_mutable__V_56_56));
#line 743 "prog_mutable.m"
        }
#line 743 "prog_mutable.m"
        {
#line 743 "prog_mutable.m"
          parse_tree__prog_mutable__V_53_53 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 743 "prog_mutable.m"
          MR_hl_field(MR_mktag(1), parse_tree__prog_mutable__V_53_53, 0) = ((MR_Box) (parse_tree__prog_mutable__V_54_54));
#line 743 "prog_mutable.m"
          MR_hl_field(MR_mktag(1), parse_tree__prog_mutable__V_53_53, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 743 "prog_mutable.m"
        }
#line 742 "prog_mutable.m"
        {
#line 742 "prog_mutable.m"
          parse_tree__prog_mutable__V_32_32 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 742 "prog_mutable.m"
          MR_hl_field(MR_mktag(1), parse_tree__prog_mutable__V_32_32, 0) = ((MR_Box) (parse_tree__prog_mutable__V_50_50));
#line 742 "prog_mutable.m"
          MR_hl_field(MR_mktag(1), parse_tree__prog_mutable__V_32_32, 1) = ((MR_Box) (parse_tree__prog_mutable__V_53_53));
#line 742 "prog_mutable.m"
        }
#line 729 "prog_mutable.m"
        {
#line 729 "prog_mutable.m"
          parse_tree__prog_mutable__ArgTypesAndModes_22 = mercury__list__f_43_43_2_f_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_type_and_mode_0, parse_tree__prog_mutable__MainArgTypesAndModes_20, parse_tree__prog_mutable__V_32_32);
        }
#line 730 "prog_mutable.m"
        parse_tree__prog_mutable__Purity_23 = (MR_Integer) 0;
#line 727 "prog_mutable.m"
      }
#line 721 "prog_mutable.m"
    else
#line 717 "prog_mutable.m"
      {
#line 717 "prog_mutable.m"
        MR_String parse_tree__prog_mutable__V_60_60;

#line 610 "prog_mutable.m"
        {
#line 610 "prog_mutable.m"
          parse_tree__prog_mutable__V_60_60 = mercury__string__f_43_43_2_f_0((MR_String) "set_", parse_tree__prog_mutable__Name_9);
        }
#line 610 "prog_mutable.m"
        {
#line 610 "prog_mutable.m"
          parse_tree__prog_mutable__SymName_21 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 610 "prog_mutable.m"
          MR_hl_field(MR_mktag(1), parse_tree__prog_mutable__SymName_21, 0) = ((MR_Box) (parse_tree__prog_mutable__ModuleName_8));
#line 610 "prog_mutable.m"
          MR_hl_field(MR_mktag(1), parse_tree__prog_mutable__SymName_21, 1) = ((MR_Box) (parse_tree__prog_mutable__V_60_60));
#line 610 "prog_mutable.m"
        }
#line 719 "prog_mutable.m"
        parse_tree__prog_mutable__ArgTypesAndModes_22 = parse_tree__prog_mutable__MainArgTypesAndModes_20;
#line 720 "prog_mutable.m"
        parse_tree__prog_mutable__Purity_23 = (MR_Integer) 2;
#line 717 "prog_mutable.m"
      }
#line 735 "prog_mutable.m"
    {
#line 735 "prog_mutable.m"
      parse_tree__prog_mutable__SetPredDecl_14 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 14 * sizeof(MR_Word)), NULL, NULL);
#line 735 "prog_mutable.m"
      MR_hl_field(MR_mktag(0), parse_tree__prog_mutable__SetPredDecl_14, 0) = ((MR_Box) (parse_tree__prog_mutable__SymName_21));
#line 735 "prog_mutable.m"
      MR_hl_field(MR_mktag(0), parse_tree__prog_mutable__SetPredDecl_14, 1) = ((MR_Box) ((MR_Integer) 0));
#line 735 "prog_mutable.m"
      MR_hl_field(MR_mktag(0), parse_tree__prog_mutable__SetPredDecl_14, 2) = ((MR_Box) (parse_tree__prog_mutable__ArgTypesAndModes_22));
#line 735 "prog_mutable.m"
      MR_hl_field(MR_mktag(0), parse_tree__prog_mutable__SetPredDecl_14, 3) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 735 "prog_mutable.m"
      MR_hl_field(MR_mktag(0), parse_tree__prog_mutable__SetPredDecl_14, 4) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 735 "prog_mutable.m"
      MR_hl_field(MR_mktag(0), parse_tree__prog_mutable__SetPredDecl_14, 5) = ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__prog_mutable_scalar_common_2[0])));
#line 735 "prog_mutable.m"
      MR_hl_field(MR_mktag(0), parse_tree__prog_mutable__SetPredDecl_14, 6) = ((MR_Box) (MR_mkword(MR_mktag(1), ((MR_Box) (&parse_tree__prog_mutable_scalar_common_1[0])))));
#line 735 "prog_mutable.m"
      MR_hl_field(MR_mktag(0), parse_tree__prog_mutable__SetPredDecl_14, 7) = ((MR_Box) (parse_tree__prog_mutable__TypeVarSet_17));
#line 735 "prog_mutable.m"
      MR_hl_field(MR_mktag(0), parse_tree__prog_mutable__SetPredDecl_14, 8) = ((MR_Box) (parse_tree__prog_mutable__InstVarSet_18));
#line 735 "prog_mutable.m"
      MR_hl_field(MR_mktag(0), parse_tree__prog_mutable__SetPredDecl_14, 9) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 735 "prog_mutable.m"
      MR_hl_field(MR_mktag(0), parse_tree__prog_mutable__SetPredDecl_14, 10) = ((MR_Box) (parse_tree__prog_mutable__Purity_23));
#line 735 "prog_mutable.m"
      MR_hl_field(MR_mktag(0), parse_tree__prog_mutable__SetPredDecl_14, 11) = ((MR_Box) (&parse_tree__prog_mutable_scalar_common_1[1]));
#line 735 "prog_mutable.m"
      MR_hl_field(MR_mktag(0), parse_tree__prog_mutable__SetPredDecl_14, 12) = ((MR_Box) (parse_tree__prog_mutable__Context_13));
#line 735 "prog_mutable.m"
      MR_hl_field(MR_mktag(0), parse_tree__prog_mutable__SetPredDecl_14, 13) = ((MR_Box) ((MR_Integer) -1));
#line 735 "prog_mutable.m"
    }
#line 708 "prog_mutable.m"
    return parse_tree__prog_mutable__SetPredDecl_14;
#line 708 "prog_mutable.m"
  }
#line 704 "prog_mutable.m"
}

#line 671 "prog_mutable.m"
static MR_Word MR_CALL 
parse_tree__prog_mutable__make_mutable_get_pred_decl_6_f_0(
#line 671 "prog_mutable.m"
  MR_Word parse_tree__prog_mutable__ModuleName_8,
#line 671 "prog_mutable.m"
  MR_String parse_tree__prog_mutable__Name_9,
#line 671 "prog_mutable.m"
  MR_Word parse_tree__prog_mutable__Type_10,
#line 671 "prog_mutable.m"
  MR_Word parse_tree__prog_mutable__Inst_11,
#line 671 "prog_mutable.m"
  MR_Word parse_tree__prog_mutable__PredKind_12,
#line 671 "prog_mutable.m"
  MR_Word parse_tree__prog_mutable__Context_13)
#line 671 "prog_mutable.m"
{
#line 675 "prog_mutable.m"
  {
#line 675 "prog_mutable.m"
    MR_bool parse_tree__prog_mutable__succeeded;
#line 675 "prog_mutable.m"
    MR_Word parse_tree__prog_mutable__GetPredDecl_14;
#line 675 "prog_mutable.m"
    MR_Word parse_tree__prog_mutable__TypeVarSet_17;
#line 675 "prog_mutable.m"
    MR_Word parse_tree__prog_mutable__InstVarSet_18;
#line 675 "prog_mutable.m"
    MR_Word parse_tree__prog_mutable__SymName_20;
#line 675 "prog_mutable.m"
    MR_Word parse_tree__prog_mutable__MainArgTypesAndModes_21;
#line 675 "prog_mutable.m"
    MR_Word parse_tree__prog_mutable__ArgTypesAndModes_22;
#line 675 "prog_mutable.m"
    MR_Word parse_tree__prog_mutable__Purity_23;
#line 675 "prog_mutable.m"
    MR_Word parse_tree__prog_mutable__V_29_29;
#line 675 "prog_mutable.m"
    MR_Word parse_tree__prog_mutable__V_30_30;
#line 675 "prog_mutable.m"
    MR_String parse_tree__prog_mutable__V_44_44;

#line 679 "prog_mutable.m"
    {
#line 679 "prog_mutable.m"
      parse_tree__prog_mutable__TypeVarSet_17 = mercury__varset__init_0_f_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_tvar_type_0);
    }
#line 680 "prog_mutable.m"
    {
#line 680 "prog_mutable.m"
      parse_tree__prog_mutable__InstVarSet_18 = mercury__varset__init_0_f_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_inst_var_type_0);
    }
#line 607 "prog_mutable.m"
    {
#line 607 "prog_mutable.m"
      parse_tree__prog_mutable__V_44_44 = mercury__string__f_43_43_2_f_0((MR_String) "get_", parse_tree__prog_mutable__Name_9);
    }
#line 607 "prog_mutable.m"
    {
#line 607 "prog_mutable.m"
      parse_tree__prog_mutable__SymName_20 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 607 "prog_mutable.m"
      MR_hl_field(MR_mktag(1), parse_tree__prog_mutable__SymName_20, 0) = ((MR_Box) (parse_tree__prog_mutable__ModuleName_8));
#line 607 "prog_mutable.m"
      MR_hl_field(MR_mktag(1), parse_tree__prog_mutable__SymName_20, 1) = ((MR_Box) (parse_tree__prog_mutable__V_44_44));
#line 607 "prog_mutable.m"
    }
#line 683 "prog_mutable.m"
    {
#line 683 "prog_mutable.m"
      parse_tree__prog_mutable__V_30_30 = parse_tree__prog_mode__out_mode_1_f_0(parse_tree__prog_mutable__Inst_11);
    }
#line 683 "prog_mutable.m"
    {
#line 683 "prog_mutable.m"
      parse_tree__prog_mutable__V_29_29 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 683 "prog_mutable.m"
      MR_hl_field(MR_mktag(1), parse_tree__prog_mutable__V_29_29, 0) = ((MR_Box) (parse_tree__prog_mutable__Type_10));
#line 683 "prog_mutable.m"
      MR_hl_field(MR_mktag(1), parse_tree__prog_mutable__V_29_29, 1) = ((MR_Box) (parse_tree__prog_mutable__V_30_30));
#line 683 "prog_mutable.m"
    }
#line 683 "prog_mutable.m"
    {
#line 683 "prog_mutable.m"
      parse_tree__prog_mutable__MainArgTypesAndModes_21 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 683 "prog_mutable.m"
      MR_hl_field(MR_mktag(1), parse_tree__prog_mutable__MainArgTypesAndModes_21, 0) = ((MR_Box) (parse_tree__prog_mutable__V_29_29));
#line 683 "prog_mutable.m"
      MR_hl_field(MR_mktag(1), parse_tree__prog_mutable__MainArgTypesAndModes_21, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 683 "prog_mutable.m"
    }
#line 688 "prog_mutable.m"
    if ((parse_tree__prog_mutable__PredKind_12 == (MR_Integer) 1))
#line 689 "prog_mutable.m"
      {
#line 690 "prog_mutable.m"
        parse_tree__prog_mutable__ArgTypesAndModes_22 = parse_tree__prog_mutable__MainArgTypesAndModes_21;
#line 691 "prog_mutable.m"
        parse_tree__prog_mutable__Purity_23 = (MR_Integer) 0;
#line 689 "prog_mutable.m"
      }
#line 688 "prog_mutable.m"
    else
#line 688 "prog_mutable.m"
    if ((parse_tree__prog_mutable__PredKind_12 == (MR_Integer) 2))
#line 693 "prog_mutable.m"
      {
#line 693 "prog_mutable.m"
        MR_Word parse_tree__prog_mutable__V_32_32;
#line 693 "prog_mutable.m"
        MR_Word parse_tree__prog_mutable__V_46_46;
#line 693 "prog_mutable.m"
        MR_Word parse_tree__prog_mutable__V_47_47;
#line 693 "prog_mutable.m"
        MR_Word parse_tree__prog_mutable__V_48_48;
#line 693 "prog_mutable.m"
        MR_Word parse_tree__prog_mutable__V_49_49;
#line 693 "prog_mutable.m"
        MR_Word parse_tree__prog_mutable__V_50_50;
#line 693 "prog_mutable.m"
        MR_Word parse_tree__prog_mutable__V_51_51;
#line 693 "prog_mutable.m"
        MR_Word parse_tree__prog_mutable__V_52_52;

#line 742 "prog_mutable.m"
        {
#line 742 "prog_mutable.m"
          parse_tree__prog_mutable__V_47_47 = parse_tree__builtin_lib_types__io_state_type_0_f_0();
        }
#line 742 "prog_mutable.m"
        {
#line 742 "prog_mutable.m"
          parse_tree__prog_mutable__V_48_48 = parse_tree__prog_mode__di_mode_0_f_0();
        }
#line 742 "prog_mutable.m"
        {
#line 742 "prog_mutable.m"
          parse_tree__prog_mutable__V_46_46 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 742 "prog_mutable.m"
          MR_hl_field(MR_mktag(1), parse_tree__prog_mutable__V_46_46, 0) = ((MR_Box) (parse_tree__prog_mutable__V_47_47));
#line 742 "prog_mutable.m"
          MR_hl_field(MR_mktag(1), parse_tree__prog_mutable__V_46_46, 1) = ((MR_Box) (parse_tree__prog_mutable__V_48_48));
#line 742 "prog_mutable.m"
        }
#line 743 "prog_mutable.m"
        {
#line 743 "prog_mutable.m"
          parse_tree__prog_mutable__V_51_51 = parse_tree__builtin_lib_types__io_state_type_0_f_0();
        }
#line 743 "prog_mutable.m"
        {
#line 743 "prog_mutable.m"
          parse_tree__prog_mutable__V_52_52 = parse_tree__prog_mode__uo_mode_0_f_0();
        }
#line 743 "prog_mutable.m"
        {
#line 743 "prog_mutable.m"
          parse_tree__prog_mutable__V_50_50 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 743 "prog_mutable.m"
          MR_hl_field(MR_mktag(1), parse_tree__prog_mutable__V_50_50, 0) = ((MR_Box) (parse_tree__prog_mutable__V_51_51));
#line 743 "prog_mutable.m"
          MR_hl_field(MR_mktag(1), parse_tree__prog_mutable__V_50_50, 1) = ((MR_Box) (parse_tree__prog_mutable__V_52_52));
#line 743 "prog_mutable.m"
        }
#line 743 "prog_mutable.m"
        {
#line 743 "prog_mutable.m"
          parse_tree__prog_mutable__V_49_49 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 743 "prog_mutable.m"
          MR_hl_field(MR_mktag(1), parse_tree__prog_mutable__V_49_49, 0) = ((MR_Box) (parse_tree__prog_mutable__V_50_50));
#line 743 "prog_mutable.m"
          MR_hl_field(MR_mktag(1), parse_tree__prog_mutable__V_49_49, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 743 "prog_mutable.m"
        }
#line 742 "prog_mutable.m"
        {
#line 742 "prog_mutable.m"
          parse_tree__prog_mutable__V_32_32 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 742 "prog_mutable.m"
          MR_hl_field(MR_mktag(1), parse_tree__prog_mutable__V_32_32, 0) = ((MR_Box) (parse_tree__prog_mutable__V_46_46));
#line 742 "prog_mutable.m"
          MR_hl_field(MR_mktag(1), parse_tree__prog_mutable__V_32_32, 1) = ((MR_Box) (parse_tree__prog_mutable__V_49_49));
#line 742 "prog_mutable.m"
        }
#line 694 "prog_mutable.m"
        {
#line 694 "prog_mutable.m"
          parse_tree__prog_mutable__ArgTypesAndModes_22 = mercury__list__f_43_43_2_f_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_type_and_mode_0, parse_tree__prog_mutable__MainArgTypesAndModes_21, parse_tree__prog_mutable__V_32_32);
        }
#line 695 "prog_mutable.m"
        parse_tree__prog_mutable__Purity_23 = (MR_Integer) 0;
#line 693 "prog_mutable.m"
      }
#line 688 "prog_mutable.m"
    else
#line 685 "prog_mutable.m"
      {
#line 686 "prog_mutable.m"
        parse_tree__prog_mutable__ArgTypesAndModes_22 = parse_tree__prog_mutable__MainArgTypesAndModes_21;
#line 687 "prog_mutable.m"
        parse_tree__prog_mutable__Purity_23 = (MR_Integer) 1;
#line 685 "prog_mutable.m"
      }
#line 700 "prog_mutable.m"
    {
#line 700 "prog_mutable.m"
      parse_tree__prog_mutable__GetPredDecl_14 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 14 * sizeof(MR_Word)), NULL, NULL);
#line 700 "prog_mutable.m"
      MR_hl_field(MR_mktag(0), parse_tree__prog_mutable__GetPredDecl_14, 0) = ((MR_Box) (parse_tree__prog_mutable__SymName_20));
#line 700 "prog_mutable.m"
      MR_hl_field(MR_mktag(0), parse_tree__prog_mutable__GetPredDecl_14, 1) = ((MR_Box) ((MR_Integer) 0));
#line 700 "prog_mutable.m"
      MR_hl_field(MR_mktag(0), parse_tree__prog_mutable__GetPredDecl_14, 2) = ((MR_Box) (parse_tree__prog_mutable__ArgTypesAndModes_22));
#line 700 "prog_mutable.m"
      MR_hl_field(MR_mktag(0), parse_tree__prog_mutable__GetPredDecl_14, 3) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 700 "prog_mutable.m"
      MR_hl_field(MR_mktag(0), parse_tree__prog_mutable__GetPredDecl_14, 4) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 700 "prog_mutable.m"
      MR_hl_field(MR_mktag(0), parse_tree__prog_mutable__GetPredDecl_14, 5) = ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__prog_mutable_scalar_common_2[0])));
#line 700 "prog_mutable.m"
      MR_hl_field(MR_mktag(0), parse_tree__prog_mutable__GetPredDecl_14, 6) = ((MR_Box) (MR_mkword(MR_mktag(1), ((MR_Box) (&parse_tree__prog_mutable_scalar_common_1[0])))));
#line 700 "prog_mutable.m"
      MR_hl_field(MR_mktag(0), parse_tree__prog_mutable__GetPredDecl_14, 7) = ((MR_Box) (parse_tree__prog_mutable__TypeVarSet_17));
#line 700 "prog_mutable.m"
      MR_hl_field(MR_mktag(0), parse_tree__prog_mutable__GetPredDecl_14, 8) = ((MR_Box) (parse_tree__prog_mutable__InstVarSet_18));
#line 700 "prog_mutable.m"
      MR_hl_field(MR_mktag(0), parse_tree__prog_mutable__GetPredDecl_14, 9) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 700 "prog_mutable.m"
      MR_hl_field(MR_mktag(0), parse_tree__prog_mutable__GetPredDecl_14, 10) = ((MR_Box) (parse_tree__prog_mutable__Purity_23));
#line 700 "prog_mutable.m"
      MR_hl_field(MR_mktag(0), parse_tree__prog_mutable__GetPredDecl_14, 11) = ((MR_Box) (&parse_tree__prog_mutable_scalar_common_1[1]));
#line 700 "prog_mutable.m"
      MR_hl_field(MR_mktag(0), parse_tree__prog_mutable__GetPredDecl_14, 12) = ((MR_Box) (parse_tree__prog_mutable__Context_13));
#line 700 "prog_mutable.m"
      MR_hl_field(MR_mktag(0), parse_tree__prog_mutable__GetPredDecl_14, 13) = ((MR_Box) ((MR_Integer) -1));
#line 700 "prog_mutable.m"
    }
#line 675 "prog_mutable.m"
    return parse_tree__prog_mutable__GetPredDecl_14;
#line 675 "prog_mutable.m"
  }
#line 671 "prog_mutable.m"
}

#line 573 "prog_mutable.m"
MR_Word MR_CALL 
parse_tree__prog_mutable__io_set_pred_decl_5_f_0(
#line 573 "prog_mutable.m"
  MR_Word parse_tree__prog_mutable__ModuleName_7,
#line 573 "prog_mutable.m"
  MR_String parse_tree__prog_mutable__Name_8,
#line 573 "prog_mutable.m"
  MR_Word parse_tree__prog_mutable__Type_9,
#line 573 "prog_mutable.m"
  MR_Word parse_tree__prog_mutable__Inst_10,
#line 573 "prog_mutable.m"
  MR_Word parse_tree__prog_mutable__Context_11)
#line 573 "prog_mutable.m"
{
#line 660 "prog_mutable.m"
  {
#line 660 "prog_mutable.m"
    MR_bool parse_tree__prog_mutable__succeeded;
#line 660 "prog_mutable.m"
    MR_Word parse_tree__prog_mutable__HeadVar__6_6;

#line 661 "prog_mutable.m"
    {
#line 661 "prog_mutable.m"
      return parse_tree__prog_mutable__HeadVar__6_6 = parse_tree__prog_mutable__make_mutable_set_pred_decl_6_f_0(parse_tree__prog_mutable__ModuleName_7, parse_tree__prog_mutable__Name_8, parse_tree__prog_mutable__Type_9, parse_tree__prog_mutable__Inst_10, (MR_Integer) 2, parse_tree__prog_mutable__Context_11);
    }
#line 660 "prog_mutable.m"
    return parse_tree__prog_mutable__HeadVar__6_6;
#line 660 "prog_mutable.m"
  }
#line 573 "prog_mutable.m"
}

#line 567 "prog_mutable.m"
MR_Word MR_CALL 
parse_tree__prog_mutable__io_get_pred_decl_5_f_0(
#line 567 "prog_mutable.m"
  MR_Word parse_tree__prog_mutable__ModuleName_7,
#line 567 "prog_mutable.m"
  MR_String parse_tree__prog_mutable__Name_8,
#line 567 "prog_mutable.m"
  MR_Word parse_tree__prog_mutable__Type_9,
#line 567 "prog_mutable.m"
  MR_Word parse_tree__prog_mutable__Inst_10,
#line 567 "prog_mutable.m"
  MR_Word parse_tree__prog_mutable__Context_11)
#line 567 "prog_mutable.m"
{
#line 646 "prog_mutable.m"
  {
#line 646 "prog_mutable.m"
    MR_bool parse_tree__prog_mutable__succeeded;
#line 646 "prog_mutable.m"
    MR_Word parse_tree__prog_mutable__HeadVar__6_6;

#line 647 "prog_mutable.m"
    {
#line 647 "prog_mutable.m"
      return parse_tree__prog_mutable__HeadVar__6_6 = parse_tree__prog_mutable__make_mutable_get_pred_decl_6_f_0(parse_tree__prog_mutable__ModuleName_7, parse_tree__prog_mutable__Name_8, parse_tree__prog_mutable__Type_9, parse_tree__prog_mutable__Inst_10, (MR_Integer) 2, parse_tree__prog_mutable__Context_11);
    }
#line 646 "prog_mutable.m"
    return parse_tree__prog_mutable__HeadVar__6_6;
#line 646 "prog_mutable.m"
  }
#line 567 "prog_mutable.m"
}

#line 561 "prog_mutable.m"
MR_Word MR_CALL 
parse_tree__prog_mutable__constant_set_pred_decl_5_f_0(
#line 561 "prog_mutable.m"
  MR_Word parse_tree__prog_mutable__ModuleName_7,
#line 561 "prog_mutable.m"
  MR_String parse_tree__prog_mutable__Name_8,
#line 561 "prog_mutable.m"
  MR_Word parse_tree__prog_mutable__Type_9,
#line 561 "prog_mutable.m"
  MR_Word parse_tree__prog_mutable__Inst_10,
#line 561 "prog_mutable.m"
  MR_Word parse_tree__prog_mutable__Context_11)
#line 561 "prog_mutable.m"
{
#line 656 "prog_mutable.m"
  {
#line 656 "prog_mutable.m"
    MR_bool parse_tree__prog_mutable__succeeded;
#line 656 "prog_mutable.m"
    MR_Word parse_tree__prog_mutable__HeadVar__6_6;

#line 657 "prog_mutable.m"
    {
#line 657 "prog_mutable.m"
      return parse_tree__prog_mutable__HeadVar__6_6 = parse_tree__prog_mutable__make_mutable_set_pred_decl_6_f_0(parse_tree__prog_mutable__ModuleName_7, parse_tree__prog_mutable__Name_8, parse_tree__prog_mutable__Type_9, parse_tree__prog_mutable__Inst_10, (MR_Integer) 1, parse_tree__prog_mutable__Context_11);
    }
#line 656 "prog_mutable.m"
    return parse_tree__prog_mutable__HeadVar__6_6;
#line 656 "prog_mutable.m"
  }
#line 561 "prog_mutable.m"
}

#line 553 "prog_mutable.m"
MR_Word MR_CALL 
parse_tree__prog_mutable__constant_get_pred_decl_5_f_0(
#line 553 "prog_mutable.m"
  MR_Word parse_tree__prog_mutable__ModuleName_7,
#line 553 "prog_mutable.m"
  MR_String parse_tree__prog_mutable__Name_8,
#line 553 "prog_mutable.m"
  MR_Word parse_tree__prog_mutable__Type_9,
#line 553 "prog_mutable.m"
  MR_Word parse_tree__prog_mutable__Inst_10,
#line 553 "prog_mutable.m"
  MR_Word parse_tree__prog_mutable__Context_11)
#line 553 "prog_mutable.m"
{
#line 642 "prog_mutable.m"
  {
#line 642 "prog_mutable.m"
    MR_bool parse_tree__prog_mutable__succeeded;
#line 642 "prog_mutable.m"
    MR_Word parse_tree__prog_mutable__HeadVar__6_6;

#line 643 "prog_mutable.m"
    {
#line 643 "prog_mutable.m"
      return parse_tree__prog_mutable__HeadVar__6_6 = parse_tree__prog_mutable__make_mutable_get_pred_decl_6_f_0(parse_tree__prog_mutable__ModuleName_7, parse_tree__prog_mutable__Name_8, parse_tree__prog_mutable__Type_9, parse_tree__prog_mutable__Inst_10, (MR_Integer) 1, parse_tree__prog_mutable__Context_11);
    }
#line 642 "prog_mutable.m"
    return parse_tree__prog_mutable__HeadVar__6_6;
#line 642 "prog_mutable.m"
  }
#line 553 "prog_mutable.m"
}

#line 547 "prog_mutable.m"
MR_Word MR_CALL 
parse_tree__prog_mutable__std_set_pred_decl_5_f_0(
#line 547 "prog_mutable.m"
  MR_Word parse_tree__prog_mutable__ModuleName_7,
#line 547 "prog_mutable.m"
  MR_String parse_tree__prog_mutable__Name_8,
#line 547 "prog_mutable.m"
  MR_Word parse_tree__prog_mutable__Type_9,
#line 547 "prog_mutable.m"
  MR_Word parse_tree__prog_mutable__Inst_10,
#line 547 "prog_mutable.m"
  MR_Word parse_tree__prog_mutable__Context_11)
#line 547 "prog_mutable.m"
{
#line 652 "prog_mutable.m"
  {
#line 652 "prog_mutable.m"
    MR_bool parse_tree__prog_mutable__succeeded;
#line 652 "prog_mutable.m"
    MR_Word parse_tree__prog_mutable__HeadVar__6_6;

#line 653 "prog_mutable.m"
    {
#line 653 "prog_mutable.m"
      return parse_tree__prog_mutable__HeadVar__6_6 = parse_tree__prog_mutable__make_mutable_set_pred_decl_6_f_0(parse_tree__prog_mutable__ModuleName_7, parse_tree__prog_mutable__Name_8, parse_tree__prog_mutable__Type_9, parse_tree__prog_mutable__Inst_10, (MR_Integer) 0, parse_tree__prog_mutable__Context_11);
    }
#line 652 "prog_mutable.m"
    return parse_tree__prog_mutable__HeadVar__6_6;
#line 652 "prog_mutable.m"
  }
#line 547 "prog_mutable.m"
}

#line 541 "prog_mutable.m"
MR_Word MR_CALL 
parse_tree__prog_mutable__std_get_pred_decl_5_f_0(
#line 541 "prog_mutable.m"
  MR_Word parse_tree__prog_mutable__ModuleName_7,
#line 541 "prog_mutable.m"
  MR_String parse_tree__prog_mutable__Name_8,
#line 541 "prog_mutable.m"
  MR_Word parse_tree__prog_mutable__Type_9,
#line 541 "prog_mutable.m"
  MR_Word parse_tree__prog_mutable__Inst_10,
#line 541 "prog_mutable.m"
  MR_Word parse_tree__prog_mutable__Context_11)
#line 541 "prog_mutable.m"
{
#line 638 "prog_mutable.m"
  {
#line 638 "prog_mutable.m"
    MR_bool parse_tree__prog_mutable__succeeded;
#line 638 "prog_mutable.m"
    MR_Word parse_tree__prog_mutable__HeadVar__6_6;

#line 639 "prog_mutable.m"
    {
#line 639 "prog_mutable.m"
      return parse_tree__prog_mutable__HeadVar__6_6 = parse_tree__prog_mutable__make_mutable_get_pred_decl_6_f_0(parse_tree__prog_mutable__ModuleName_7, parse_tree__prog_mutable__Name_8, parse_tree__prog_mutable__Type_9, parse_tree__prog_mutable__Inst_10, (MR_Integer) 0, parse_tree__prog_mutable__Context_11);
    }
#line 638 "prog_mutable.m"
    return parse_tree__prog_mutable__HeadVar__6_6;
#line 638 "prog_mutable.m"
  }
#line 541 "prog_mutable.m"
}

#line 534 "prog_mutable.m"
MR_String MR_CALL 
parse_tree__prog_mutable__mutable_mutex_var_name_1_f_0(
#line 534 "prog_mutable.m"
  MR_String parse_tree__prog_mutable__TargetMutableVarName_3)
#line 534 "prog_mutable.m"
{
#line 632 "prog_mutable.m"
  {
#line 632 "prog_mutable.m"
    MR_bool parse_tree__prog_mutable__succeeded;
#line 632 "prog_mutable.m"
    MR_String parse_tree__prog_mutable__MutexVarName_4;

#line 633 "prog_mutable.m"
    {
#line 633 "prog_mutable.m"
      return parse_tree__prog_mutable__MutexVarName_4 = mercury__string__f_43_43_2_f_0(parse_tree__prog_mutable__TargetMutableVarName_3, (MR_String) "_lock");
    }
#line 632 "prog_mutable.m"
    return parse_tree__prog_mutable__MutexVarName_4;
#line 632 "prog_mutable.m"
  }
#line 534 "prog_mutable.m"
}

#line 527 "prog_mutable.m"
MR_String MR_CALL 
parse_tree__prog_mutable__mutable_c_var_name_2_f_0(
#line 527 "prog_mutable.m"
  MR_Word parse_tree__prog_mutable__ModuleName_4,
#line 527 "prog_mutable.m"
  MR_String parse_tree__prog_mutable__Name_5)
#line 527 "prog_mutable.m"
{
#line 621 "prog_mutable.m"
  {
#line 621 "prog_mutable.m"
    MR_bool parse_tree__prog_mutable__succeeded;
#line 621 "prog_mutable.m"
    MR_String parse_tree__prog_mutable__MangledCVarName_6;
#line 621 "prog_mutable.m"
    MR_String parse_tree__prog_mutable__RawCVarName_7;
#line 621 "prog_mutable.m"
    MR_Word parse_tree__prog_mutable__QualifiedCVarName0_8;
#line 621 "prog_mutable.m"
    MR_Word parse_tree__prog_mutable__QualifiedCVarName_9;

#line 622 "prog_mutable.m"
    {
#line 622 "prog_mutable.m"
      parse_tree__prog_mutable__RawCVarName_7 = mercury__string__f_43_43_2_f_0((MR_String) "mutable_variable_", parse_tree__prog_mutable__Name_5);
    }
#line 623 "prog_mutable.m"
    {
#line 623 "prog_mutable.m"
      parse_tree__prog_mutable__QualifiedCVarName0_8 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 623 "prog_mutable.m"
      MR_hl_field(MR_mktag(1), parse_tree__prog_mutable__QualifiedCVarName0_8, 0) = ((MR_Box) (parse_tree__prog_mutable__ModuleName_4));
#line 623 "prog_mutable.m"
      MR_hl_field(MR_mktag(1), parse_tree__prog_mutable__QualifiedCVarName0_8, 1) = ((MR_Box) (parse_tree__prog_mutable__RawCVarName_7));
#line 623 "prog_mutable.m"
    }
#line 624 "prog_mutable.m"
    {
#line 624 "prog_mutable.m"
      parse_tree__prog_mutable__succeeded = parse_tree__file_names__mercury_std_library_module_name_1_p_0(parse_tree__prog_mutable__ModuleName_4);
    }
#line 627 "prog_mutable.m"
    if (parse_tree__prog_mutable__succeeded)
#line 625 "prog_mutable.m"
      {
#line 626 "prog_mutable.m"
        {
#line 626 "prog_mutable.m"
          parse_tree__prog_mutable__QualifiedCVarName_9 = mdbcomp__sym_name__add_outermost_qualifier_2_f_0((MR_String) "mercury", parse_tree__prog_mutable__QualifiedCVarName0_8);
        }
#line 625 "prog_mutable.m"
      }
#line 627 "prog_mutable.m"
    else
#line 628 "prog_mutable.m"
      parse_tree__prog_mutable__QualifiedCVarName_9 = parse_tree__prog_mutable__QualifiedCVarName0_8;
#line 630 "prog_mutable.m"
    {
#line 630 "prog_mutable.m"
      return parse_tree__prog_mutable__MangledCVarName_6 = parse_tree__prog_foreign__sym_name_mangle_1_f_0(parse_tree__prog_mutable__QualifiedCVarName_9);
    }
#line 621 "prog_mutable.m"
    return parse_tree__prog_mutable__MangledCVarName_6;
#line 621 "prog_mutable.m"
  }
#line 527 "prog_mutable.m"
}

#line 525 "prog_mutable.m"
MR_Word MR_CALL 
parse_tree__prog_mutable__mutable_pre_init_pred_sym_name_2_f_0(
#line 525 "prog_mutable.m"
  MR_Word parse_tree__prog_mutable__ModuleName_4,
#line 525 "prog_mutable.m"
  MR_String parse_tree__prog_mutable__Name_5)
#line 525 "prog_mutable.m"
{
#line 618 "prog_mutable.m"
  {
#line 618 "prog_mutable.m"
    MR_bool parse_tree__prog_mutable__succeeded;
#line 618 "prog_mutable.m"
    MR_Word parse_tree__prog_mutable__HeadVar__3_3;
#line 618 "prog_mutable.m"
    MR_String parse_tree__prog_mutable__V_6_6;

#line 619 "prog_mutable.m"
    {
#line 619 "prog_mutable.m"
      parse_tree__prog_mutable__V_6_6 = mercury__string__f_43_43_2_f_0((MR_String) "pre_initialise_mutable_", parse_tree__prog_mutable__Name_5);
    }
#line 619 "prog_mutable.m"
    {
#line 619 "prog_mutable.m"
      parse_tree__prog_mutable__HeadVar__3_3 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 619 "prog_mutable.m"
      MR_hl_field(MR_mktag(1), parse_tree__prog_mutable__HeadVar__3_3, 0) = ((MR_Box) (parse_tree__prog_mutable__ModuleName_4));
#line 619 "prog_mutable.m"
      MR_hl_field(MR_mktag(1), parse_tree__prog_mutable__HeadVar__3_3, 1) = ((MR_Box) (parse_tree__prog_mutable__V_6_6));
#line 619 "prog_mutable.m"
    }
#line 618 "prog_mutable.m"
    return parse_tree__prog_mutable__HeadVar__3_3;
#line 618 "prog_mutable.m"
  }
#line 525 "prog_mutable.m"
}

#line 523 "prog_mutable.m"
MR_Word MR_CALL 
parse_tree__prog_mutable__mutable_init_pred_sym_name_2_f_0(
#line 523 "prog_mutable.m"
  MR_Word parse_tree__prog_mutable__ModuleName_4,
#line 523 "prog_mutable.m"
  MR_String parse_tree__prog_mutable__Name_5)
#line 523 "prog_mutable.m"
{
#line 615 "prog_mutable.m"
  {
#line 615 "prog_mutable.m"
    MR_bool parse_tree__prog_mutable__succeeded;
#line 615 "prog_mutable.m"
    MR_Word parse_tree__prog_mutable__HeadVar__3_3;
#line 615 "prog_mutable.m"
    MR_String parse_tree__prog_mutable__V_6_6;

#line 616 "prog_mutable.m"
    {
#line 616 "prog_mutable.m"
      parse_tree__prog_mutable__V_6_6 = mercury__string__f_43_43_2_f_0((MR_String) "initialise_mutable_", parse_tree__prog_mutable__Name_5);
    }
#line 616 "prog_mutable.m"
    {
#line 616 "prog_mutable.m"
      parse_tree__prog_mutable__HeadVar__3_3 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 616 "prog_mutable.m"
      MR_hl_field(MR_mktag(1), parse_tree__prog_mutable__HeadVar__3_3, 0) = ((MR_Box) (parse_tree__prog_mutable__ModuleName_4));
#line 616 "prog_mutable.m"
      MR_hl_field(MR_mktag(1), parse_tree__prog_mutable__HeadVar__3_3, 1) = ((MR_Box) (parse_tree__prog_mutable__V_6_6));
#line 616 "prog_mutable.m"
    }
#line 615 "prog_mutable.m"
    return parse_tree__prog_mutable__HeadVar__3_3;
#line 615 "prog_mutable.m"
  }
#line 523 "prog_mutable.m"
}

#line 521 "prog_mutable.m"
MR_Word MR_CALL 
parse_tree__prog_mutable__mutable_secret_set_pred_sym_name_2_f_0(
#line 521 "prog_mutable.m"
  MR_Word parse_tree__prog_mutable__ModuleName_4,
#line 521 "prog_mutable.m"
  MR_String parse_tree__prog_mutable__Name_5)
#line 521 "prog_mutable.m"
{
#line 612 "prog_mutable.m"
  {
#line 612 "prog_mutable.m"
    MR_bool parse_tree__prog_mutable__succeeded;
#line 612 "prog_mutable.m"
    MR_Word parse_tree__prog_mutable__HeadVar__3_3;
#line 612 "prog_mutable.m"
    MR_String parse_tree__prog_mutable__V_6_6;

#line 613 "prog_mutable.m"
    {
#line 613 "prog_mutable.m"
      parse_tree__prog_mutable__V_6_6 = mercury__string__f_43_43_2_f_0((MR_String) "secret_initialization_only_set_", parse_tree__prog_mutable__Name_5);
    }
#line 613 "prog_mutable.m"
    {
#line 613 "prog_mutable.m"
      parse_tree__prog_mutable__HeadVar__3_3 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 613 "prog_mutable.m"
      MR_hl_field(MR_mktag(1), parse_tree__prog_mutable__HeadVar__3_3, 0) = ((MR_Box) (parse_tree__prog_mutable__ModuleName_4));
#line 613 "prog_mutable.m"
      MR_hl_field(MR_mktag(1), parse_tree__prog_mutable__HeadVar__3_3, 1) = ((MR_Box) (parse_tree__prog_mutable__V_6_6));
#line 613 "prog_mutable.m"
    }
#line 612 "prog_mutable.m"
    return parse_tree__prog_mutable__HeadVar__3_3;
#line 612 "prog_mutable.m"
  }
#line 521 "prog_mutable.m"
}

#line 505 "prog_mutable.m"
MR_Word MR_CALL 
parse_tree__prog_mutable__mutable_set_pred_sym_name_2_f_0(
#line 505 "prog_mutable.m"
  MR_Word parse_tree__prog_mutable__ModuleName_4,
#line 505 "prog_mutable.m"
  MR_String parse_tree__prog_mutable__Name_5)
#line 505 "prog_mutable.m"
{
#line 609 "prog_mutable.m"
  {
#line 609 "prog_mutable.m"
    MR_bool parse_tree__prog_mutable__succeeded;
#line 609 "prog_mutable.m"
    MR_Word parse_tree__prog_mutable__HeadVar__3_3;
#line 609 "prog_mutable.m"
    MR_String parse_tree__prog_mutable__V_6_6;

#line 610 "prog_mutable.m"
    {
#line 610 "prog_mutable.m"
      parse_tree__prog_mutable__V_6_6 = mercury__string__f_43_43_2_f_0((MR_String) "set_", parse_tree__prog_mutable__Name_5);
    }
#line 610 "prog_mutable.m"
    {
#line 610 "prog_mutable.m"
      parse_tree__prog_mutable__HeadVar__3_3 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 610 "prog_mutable.m"
      MR_hl_field(MR_mktag(1), parse_tree__prog_mutable__HeadVar__3_3, 0) = ((MR_Box) (parse_tree__prog_mutable__ModuleName_4));
#line 610 "prog_mutable.m"
      MR_hl_field(MR_mktag(1), parse_tree__prog_mutable__HeadVar__3_3, 1) = ((MR_Box) (parse_tree__prog_mutable__V_6_6));
#line 610 "prog_mutable.m"
    }
#line 609 "prog_mutable.m"
    return parse_tree__prog_mutable__HeadVar__3_3;
#line 609 "prog_mutable.m"
  }
#line 505 "prog_mutable.m"
}

#line 503 "prog_mutable.m"
MR_Word MR_CALL 
parse_tree__prog_mutable__mutable_get_pred_sym_name_2_f_0(
#line 503 "prog_mutable.m"
  MR_Word parse_tree__prog_mutable__ModuleName_4,
#line 503 "prog_mutable.m"
  MR_String parse_tree__prog_mutable__Name_5)
#line 503 "prog_mutable.m"
{
#line 606 "prog_mutable.m"
  {
#line 606 "prog_mutable.m"
    MR_bool parse_tree__prog_mutable__succeeded;
#line 606 "prog_mutable.m"
    MR_Word parse_tree__prog_mutable__HeadVar__3_3;
#line 606 "prog_mutable.m"
    MR_String parse_tree__prog_mutable__V_6_6;

#line 607 "prog_mutable.m"
    {
#line 607 "prog_mutable.m"
      parse_tree__prog_mutable__V_6_6 = mercury__string__f_43_43_2_f_0((MR_String) "get_", parse_tree__prog_mutable__Name_5);
    }
#line 607 "prog_mutable.m"
    {
#line 607 "prog_mutable.m"
      parse_tree__prog_mutable__HeadVar__3_3 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 607 "prog_mutable.m"
      MR_hl_field(MR_mktag(1), parse_tree__prog_mutable__HeadVar__3_3, 0) = ((MR_Box) (parse_tree__prog_mutable__ModuleName_4));
#line 607 "prog_mutable.m"
      MR_hl_field(MR_mktag(1), parse_tree__prog_mutable__HeadVar__3_3, 1) = ((MR_Box) (parse_tree__prog_mutable__V_6_6));
#line 607 "prog_mutable.m"
    }
#line 606 "prog_mutable.m"
    return parse_tree__prog_mutable__HeadVar__3_3;
#line 606 "prog_mutable.m"
  }
#line 503 "prog_mutable.m"
}

#line 501 "prog_mutable.m"
MR_Word MR_CALL 
parse_tree__prog_mutable__mutable_unsafe_set_pred_sym_name_2_f_0(
#line 501 "prog_mutable.m"
  MR_Word parse_tree__prog_mutable__ModuleName_4,
#line 501 "prog_mutable.m"
  MR_String parse_tree__prog_mutable__Name_5)
#line 501 "prog_mutable.m"
{
#line 603 "prog_mutable.m"
  {
#line 603 "prog_mutable.m"
    MR_bool parse_tree__prog_mutable__succeeded;
#line 603 "prog_mutable.m"
    MR_Word parse_tree__prog_mutable__HeadVar__3_3;
#line 603 "prog_mutable.m"
    MR_String parse_tree__prog_mutable__V_6_6;

#line 604 "prog_mutable.m"
    {
#line 604 "prog_mutable.m"
      parse_tree__prog_mutable__V_6_6 = mercury__string__f_43_43_2_f_0((MR_String) "unsafe_set_", parse_tree__prog_mutable__Name_5);
    }
#line 604 "prog_mutable.m"
    {
#line 604 "prog_mutable.m"
      parse_tree__prog_mutable__HeadVar__3_3 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 604 "prog_mutable.m"
      MR_hl_field(MR_mktag(1), parse_tree__prog_mutable__HeadVar__3_3, 0) = ((MR_Box) (parse_tree__prog_mutable__ModuleName_4));
#line 604 "prog_mutable.m"
      MR_hl_field(MR_mktag(1), parse_tree__prog_mutable__HeadVar__3_3, 1) = ((MR_Box) (parse_tree__prog_mutable__V_6_6));
#line 604 "prog_mutable.m"
    }
#line 603 "prog_mutable.m"
    return parse_tree__prog_mutable__HeadVar__3_3;
#line 603 "prog_mutable.m"
  }
#line 501 "prog_mutable.m"
}

#line 500 "prog_mutable.m"
MR_Word MR_CALL 
parse_tree__prog_mutable__mutable_unsafe_get_pred_sym_name_2_f_0(
#line 500 "prog_mutable.m"
  MR_Word parse_tree__prog_mutable__ModuleName_4,
#line 500 "prog_mutable.m"
  MR_String parse_tree__prog_mutable__Name_5)
#line 500 "prog_mutable.m"
{
#line 600 "prog_mutable.m"
  {
#line 600 "prog_mutable.m"
    MR_bool parse_tree__prog_mutable__succeeded;
#line 600 "prog_mutable.m"
    MR_Word parse_tree__prog_mutable__HeadVar__3_3;
#line 600 "prog_mutable.m"
    MR_String parse_tree__prog_mutable__V_6_6;

#line 601 "prog_mutable.m"
    {
#line 601 "prog_mutable.m"
      parse_tree__prog_mutable__V_6_6 = mercury__string__f_43_43_2_f_0((MR_String) "unsafe_get_", parse_tree__prog_mutable__Name_5);
    }
#line 601 "prog_mutable.m"
    {
#line 601 "prog_mutable.m"
      parse_tree__prog_mutable__HeadVar__3_3 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 601 "prog_mutable.m"
      MR_hl_field(MR_mktag(1), parse_tree__prog_mutable__HeadVar__3_3, 0) = ((MR_Box) (parse_tree__prog_mutable__ModuleName_4));
#line 601 "prog_mutable.m"
      MR_hl_field(MR_mktag(1), parse_tree__prog_mutable__HeadVar__3_3, 1) = ((MR_Box) (parse_tree__prog_mutable__V_6_6));
#line 601 "prog_mutable.m"
    }
#line 600 "prog_mutable.m"
    return parse_tree__prog_mutable__HeadVar__3_3;
#line 600 "prog_mutable.m"
  }
#line 500 "prog_mutable.m"
}

#line 499 "prog_mutable.m"
MR_Word MR_CALL 
parse_tree__prog_mutable__mutable_unlock_pred_sym_name_2_f_0(
#line 499 "prog_mutable.m"
  MR_Word parse_tree__prog_mutable__ModuleName_4,
#line 499 "prog_mutable.m"
  MR_String parse_tree__prog_mutable__Name_5)
#line 499 "prog_mutable.m"
{
#line 597 "prog_mutable.m"
  {
#line 597 "prog_mutable.m"
    MR_bool parse_tree__prog_mutable__succeeded;
#line 597 "prog_mutable.m"
    MR_Word parse_tree__prog_mutable__HeadVar__3_3;
#line 597 "prog_mutable.m"
    MR_String parse_tree__prog_mutable__V_6_6;

#line 598 "prog_mutable.m"
    {
#line 598 "prog_mutable.m"
      parse_tree__prog_mutable__V_6_6 = mercury__string__f_43_43_2_f_0((MR_String) "unlock_", parse_tree__prog_mutable__Name_5);
    }
#line 598 "prog_mutable.m"
    {
#line 598 "prog_mutable.m"
      parse_tree__prog_mutable__HeadVar__3_3 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 598 "prog_mutable.m"
      MR_hl_field(MR_mktag(1), parse_tree__prog_mutable__HeadVar__3_3, 0) = ((MR_Box) (parse_tree__prog_mutable__ModuleName_4));
#line 598 "prog_mutable.m"
      MR_hl_field(MR_mktag(1), parse_tree__prog_mutable__HeadVar__3_3, 1) = ((MR_Box) (parse_tree__prog_mutable__V_6_6));
#line 598 "prog_mutable.m"
    }
#line 597 "prog_mutable.m"
    return parse_tree__prog_mutable__HeadVar__3_3;
#line 597 "prog_mutable.m"
  }
#line 499 "prog_mutable.m"
}

#line 498 "prog_mutable.m"
MR_Word MR_CALL 
parse_tree__prog_mutable__mutable_lock_pred_sym_name_2_f_0(
#line 498 "prog_mutable.m"
  MR_Word parse_tree__prog_mutable__ModuleName_4,
#line 498 "prog_mutable.m"
  MR_String parse_tree__prog_mutable__Name_5)
#line 498 "prog_mutable.m"
{
#line 594 "prog_mutable.m"
  {
#line 594 "prog_mutable.m"
    MR_bool parse_tree__prog_mutable__succeeded;
#line 594 "prog_mutable.m"
    MR_Word parse_tree__prog_mutable__HeadVar__3_3;
#line 594 "prog_mutable.m"
    MR_String parse_tree__prog_mutable__V_6_6;

#line 595 "prog_mutable.m"
    {
#line 595 "prog_mutable.m"
      parse_tree__prog_mutable__V_6_6 = mercury__string__f_43_43_2_f_0((MR_String) "lock_", parse_tree__prog_mutable__Name_5);
    }
#line 595 "prog_mutable.m"
    {
#line 595 "prog_mutable.m"
      parse_tree__prog_mutable__HeadVar__3_3 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 595 "prog_mutable.m"
      MR_hl_field(MR_mktag(1), parse_tree__prog_mutable__HeadVar__3_3, 0) = ((MR_Box) (parse_tree__prog_mutable__ModuleName_4));
#line 595 "prog_mutable.m"
      MR_hl_field(MR_mktag(1), parse_tree__prog_mutable__HeadVar__3_3, 1) = ((MR_Box) (parse_tree__prog_mutable__V_6_6));
#line 595 "prog_mutable.m"
    }
#line 594 "prog_mutable.m"
    return parse_tree__prog_mutable__HeadVar__3_3;
#line 594 "prog_mutable.m"
  }
#line 498 "prog_mutable.m"
}

void mercury__parse_tree__prog_mutable__init(void)
{
}

void mercury__parse_tree__prog_mutable__init_type_tables(void)
{
	static MR_bool initialised = MR_FALSE;
	if (initialised) return;
	initialised = MR_TRUE;

	MR_register_type_ctor_info(&parse_tree__prog_mutable__parse_tree__prog_mutable__type_ctor_info_get_set_pred_kind_0);
}

void mercury__parse_tree__prog_mutable__init_debugger(void)
{
	MR_fatal_error("debugger initialization in MLDS grade");
}

/* ensure everything is compiled with the same grade */
static const void *const MR_grade = &MR_GRADE_VAR;

/* :- end_module parse_tree.prog_mutable. */
