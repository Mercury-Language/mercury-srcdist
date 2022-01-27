/*
** Automatically generated from `item_util.m'
** by the Mercury compiler,
** version rotd-2014-12-18
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


/* :- module parse_tree.item_util. */
/* :- implementation. */

/*
INIT mercury__parse_tree__item_util__init
ENDINIT
*/

#include "parse_tree.item_util.mih"


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
#include "int.mih"
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
#include "parse_tree.error_util.mih"
#include "parse_tree.module_imports.mih"
#include "parse_tree.module_qual.mih"
#include "parse_tree.prog_data.mih"
#include "parse_tree.prog_foreign.mih"
#include "parse_tree.prog_io_error.mih"
#include "parse_tree.prog_item.mih"
#include "parse_tree.prog_type.mih"
#include "parse_tree.set_of_var.mih"
#include "transform_hlds.term_constr_data.mih"
#include "transform_hlds.term_constr_errors.mih"
#include "transform_hlds.term_constr_main.mih"
#include "transform_hlds.term_errors.mih"
#include "transform_hlds.term_norm.mih"
#include "transform_hlds.term_util.mih"
#include "mdbcomp.feedback.automatic_parallelism.mih"




#line 136 "parse_tree.item_util.c"
static const MR_EnumFunctorDesc parse_tree__item_util__parse_tree__item_util__enum_functor_desc_short_interface_kind_0_0;

#line 139 "parse_tree.item_util.c"
static const MR_EnumFunctorDesc parse_tree__item_util__parse_tree__item_util__enum_functor_desc_short_interface_kind_0_1;

#line 142 "parse_tree.item_util.c"
static const MR_EnumFunctorDescPtr parse_tree__item_util__parse_tree__item_util__enum_value_ordered_short_interface_kind_0[2];

#line 145 "parse_tree.item_util.c"
static const MR_EnumFunctorDescPtr parse_tree__item_util__parse_tree__item_util__enum_name_ordered_short_interface_kind_0[2];

#line 148 "parse_tree.item_util.c"
static const MR_Integer parse_tree__item_util__parse_tree__item_util__functor_number_map_short_interface_kind_0[2];

#line 151 "parse_tree.item_util.c"
static MR_bool MR_CALL 
parse_tree__item_util____Unify____short_interface_kind_0_0_10001(
#line 154 "parse_tree.item_util.c"
  MR_Box parse_tree__item_util__wrapper_arg_1,
#line 156 "parse_tree.item_util.c"
  MR_Box parse_tree__item_util__wrapper_arg_2);

#line 159 "parse_tree.item_util.c"
static void MR_CALL 
parse_tree__item_util____Compare____short_interface_kind_0_0_10001(
#line 162 "parse_tree.item_util.c"
  MR_Box * parse_tree__item_util__wrapper_arg_1,
#line 164 "parse_tree.item_util.c"
  MR_Box parse_tree__item_util__wrapper_arg_2,
#line 166 "parse_tree.item_util.c"
  MR_Box parse_tree__item_util__wrapper_arg_3);


static /* final */ const MR_Box parse_tree__item_util_scalar_common_1[4][1];




static /* final */ const MR_Box parse_tree__item_util_scalar_common_1[4][1] = {
  /* row 0 */
  {
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row 1 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__item_util_scalar_common_1[0])))
  },
  /* row 2 */
  {
    ((MR_Box) ((MR_Integer) 1))
  },
  /* row 3 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__item_util_scalar_common_1[2])))
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



#line 211 "parse_tree.item_util.c"
static const MR_EnumFunctorDesc parse_tree__item_util__parse_tree__item_util__enum_functor_desc_short_interface_kind_0_0 = {
  (MR_String) "int2",
  (MR_Integer) 0
};

#line 217 "parse_tree.item_util.c"
static const MR_EnumFunctorDesc parse_tree__item_util__parse_tree__item_util__enum_functor_desc_short_interface_kind_0_1 = {
  (MR_String) "int3",
  (MR_Integer) 1
};

#line 223 "parse_tree.item_util.c"
static const MR_EnumFunctorDescPtr parse_tree__item_util__parse_tree__item_util__enum_value_ordered_short_interface_kind_0[2] = {
  &parse_tree__item_util__parse_tree__item_util__enum_functor_desc_short_interface_kind_0_0,
  &parse_tree__item_util__parse_tree__item_util__enum_functor_desc_short_interface_kind_0_1
};

#line 229 "parse_tree.item_util.c"
static const MR_EnumFunctorDescPtr parse_tree__item_util__parse_tree__item_util__enum_name_ordered_short_interface_kind_0[2] = {
  &parse_tree__item_util__parse_tree__item_util__enum_functor_desc_short_interface_kind_0_0,
  &parse_tree__item_util__parse_tree__item_util__enum_functor_desc_short_interface_kind_0_1
};

#line 235 "parse_tree.item_util.c"
static const MR_Integer parse_tree__item_util__parse_tree__item_util__functor_number_map_short_interface_kind_0[2] = {
  (MR_Integer) 0,
  (MR_Integer) 1
};

#line 241 "parse_tree.item_util.c"
const MR_TypeCtorInfo_Struct parse_tree__item_util__parse_tree__item_util__type_ctor_info_short_interface_kind_0 = {
  (MR_Integer) 0,
  (MR_Integer) 15,
  (MR_Integer) -1,
  mercury__private_builtin__MR_TYPECTOR_REP_ENUM,
  ((MR_Box) (parse_tree__item_util____Unify____short_interface_kind_0_0_10001)),
  ((MR_Box) (parse_tree__item_util____Compare____short_interface_kind_0_0_10001)),
  (MR_String) "parse_tree.item_util",
  (MR_String) "short_interface_kind",
  {
    parse_tree__item_util__parse_tree__item_util__enum_name_ordered_short_interface_kind_0
  },
  {
    parse_tree__item_util__parse_tree__item_util__enum_value_ordered_short_interface_kind_0
  },
  (MR_Integer) 2,
  (MR_Integer) 4,
  parse_tree__item_util__parse_tree__item_util__functor_number_map_short_interface_kind_0
};

#line 262 "parse_tree.item_util.c"
static MR_bool MR_CALL 
parse_tree__item_util____Unify____short_interface_kind_0_0_10001(
#line 265 "parse_tree.item_util.c"
  MR_Box parse_tree__item_util__wrapper_arg_1,
#line 267 "parse_tree.item_util.c"
  MR_Box parse_tree__item_util__wrapper_arg_2)
#line 269 "parse_tree.item_util.c"
{
#line 271 "parse_tree.item_util.c"
  {
#line 273 "parse_tree.item_util.c"
    MR_bool parse_tree__item_util__succeeded;

#line 276 "parse_tree.item_util.c"
    {
#line 278 "parse_tree.item_util.c"
      parse_tree__item_util__succeeded = parse_tree__item_util____Unify____short_interface_kind_0_0(((MR_Word) parse_tree__item_util__wrapper_arg_1), ((MR_Word) parse_tree__item_util__wrapper_arg_2));
    }
#line 281 "parse_tree.item_util.c"
    return parse_tree__item_util__succeeded;
#line 283 "parse_tree.item_util.c"
  }
#line 285 "parse_tree.item_util.c"
}

#line 288 "parse_tree.item_util.c"
static void MR_CALL 
parse_tree__item_util____Compare____short_interface_kind_0_0_10001(
#line 291 "parse_tree.item_util.c"
  MR_Box * parse_tree__item_util__wrapper_arg_1,
#line 293 "parse_tree.item_util.c"
  MR_Box parse_tree__item_util__wrapper_arg_2,
#line 295 "parse_tree.item_util.c"
  MR_Box parse_tree__item_util__wrapper_arg_3)
#line 297 "parse_tree.item_util.c"
{
#line 299 "parse_tree.item_util.c"
  {
#line 301 "parse_tree.item_util.c"
    MR_Word parse_tree__item_util__conv0_HeadVar__1_1;

#line 304 "parse_tree.item_util.c"
    {
#line 306 "parse_tree.item_util.c"
      parse_tree__item_util____Compare____short_interface_kind_0_0(&parse_tree__item_util__conv0_HeadVar__1_1, ((MR_Word) parse_tree__item_util__wrapper_arg_2), ((MR_Word) parse_tree__item_util__wrapper_arg_3));
    }
#line 309 "parse_tree.item_util.c"
    *parse_tree__item_util__wrapper_arg_1 = ((MR_Box) (parse_tree__item_util__conv0_HeadVar__1_1));
#line 311 "parse_tree.item_util.c"
  }
#line 313 "parse_tree.item_util.c"
}

#line 27 "item_util.m"
void MR_CALL 
parse_tree__item_util____Compare____short_interface_kind_0_0(
#line 27 "item_util.m"
  MR_Word * parse_tree__item_util__HeadVar__1_1,
#line 27 "item_util.m"
  MR_Word parse_tree__item_util__HeadVar__2_2,
#line 27 "item_util.m"
  MR_Word parse_tree__item_util__HeadVar__3_3)
#line 27 "item_util.m"
{
#line 27 "item_util.m"
  {
#line 27 "item_util.m"
    MR_bool parse_tree__item_util__succeeded;
#line 27 "item_util.m"
    MR_Integer parse_tree__item_util__Cast_HeadVar1_4 = (MR_Integer) parse_tree__item_util__HeadVar__2_2;
#line 27 "item_util.m"
    MR_Integer parse_tree__item_util__Cast_HeadVar2_5 = (MR_Integer) parse_tree__item_util__HeadVar__3_3;

#line 27 "item_util.m"
    {
#line 27 "item_util.m"
      mercury__private_builtin__builtin_compare_int_3_p_0(parse_tree__item_util__HeadVar__1_1, parse_tree__item_util__Cast_HeadVar1_4, parse_tree__item_util__Cast_HeadVar2_5);
#line 27 "item_util.m"
      return;
    }
#line 27 "item_util.m"
  }
#line 27 "item_util.m"
}

#line 27 "item_util.m"
MR_bool MR_CALL 
parse_tree__item_util____Unify____short_interface_kind_0_0(
#line 27 "item_util.m"
  MR_Word parse_tree__item_util__HeadVar__2_1,
#line 27 "item_util.m"
  MR_Word parse_tree__item_util__HeadVar__2_2)
#line 27 "item_util.m"
{
#line 357 "parse_tree.item_util.c"
  {
#line 359 "parse_tree.item_util.c"
    MR_bool parse_tree__item_util__succeeded = (parse_tree__item_util__HeadVar__2_1 == parse_tree__item_util__HeadVar__2_2);

#line 362 "parse_tree.item_util.c"
    return parse_tree__item_util__succeeded;
#line 364 "parse_tree.item_util.c"
  }
#line 27 "item_util.m"
}

#line 69 "item_util.m"
void MR_CALL 
parse_tree__item_util__append_pseudo_decl_3_p_0(
#line 69 "item_util.m"
  MR_Word parse_tree__item_util__PseudoDecl_4,
#line 69 "item_util.m"
  MR_Word parse_tree__item_util__STATE_VARIABLE_Module_0_6,
#line 69 "item_util.m"
  MR_Word * parse_tree__item_util__STATE_VARIABLE_Module_7)
#line 69 "item_util.m"
{
#line 296 "item_util.m"
  {
#line 296 "item_util.m"
    MR_bool parse_tree__item_util__succeeded;
#line 296 "item_util.m"
    MR_Word parse_tree__item_util__V_8_8;
#line 296 "item_util.m"
    MR_Word parse_tree__item_util__V_10_10;
#line 296 "item_util.m"
    MR_Word parse_tree__item_util__ItemModuleDefn_14;
#line 296 "item_util.m"
    MR_Word parse_tree__item_util__V_15_15;

#line 301 "item_util.m"
    {
#line 301 "item_util.m"
      parse_tree__item_util__V_15_15 = mercury__term__context_init_0_f_0();
    }
#line 301 "item_util.m"
    {
#line 301 "item_util.m"
      parse_tree__item_util__ItemModuleDefn_14 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 301 "item_util.m"
      MR_hl_field(MR_mktag(0), parse_tree__item_util__ItemModuleDefn_14, 0) = ((MR_Box) (parse_tree__item_util__PseudoDecl_4));
#line 301 "item_util.m"
      MR_hl_field(MR_mktag(0), parse_tree__item_util__ItemModuleDefn_14, 1) = ((MR_Box) (parse_tree__item_util__V_15_15));
#line 301 "item_util.m"
      MR_hl_field(MR_mktag(0), parse_tree__item_util__ItemModuleDefn_14, 2) = ((MR_Box) ((MR_Integer) -1));
#line 301 "item_util.m"
    }
#line 302 "item_util.m"
    parse_tree__item_util__V_10_10 = (MR_Word) MR_mkword(MR_mktag(2), (MR_Word) parse_tree__item_util__ItemModuleDefn_14);
#line 297 "item_util.m"
    {
#line 297 "item_util.m"
      parse_tree__item_util__V_8_8 = mercury__cord__singleton_1_f_0((MR_Word) &parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_0, ((MR_Box) (parse_tree__item_util__V_10_10)));
    }
#line 297 "item_util.m"
    {
#line 297 "item_util.m"
      parse_tree__module_imports__module_and_imports_add_items_3_p_0(parse_tree__item_util__V_8_8, parse_tree__item_util__STATE_VARIABLE_Module_0_6, parse_tree__item_util__STATE_VARIABLE_Module_7);
#line 297 "item_util.m"
      return;
    }
#line 296 "item_util.m"
  }
#line 69 "item_util.m"
}

#line 62 "item_util.m"
MR_Word MR_CALL 
parse_tree__item_util__make_pseudo_decl_1_f_0(
#line 62 "item_util.m"
  MR_Word parse_tree__item_util__PseudoDecl_3)
#line 62 "item_util.m"
{
#line 300 "item_util.m"
  {
#line 300 "item_util.m"
    MR_bool parse_tree__item_util__succeeded;
#line 300 "item_util.m"
    MR_Word parse_tree__item_util__Item_4;
#line 300 "item_util.m"
    MR_Word parse_tree__item_util__ItemModuleDefn_5;
#line 300 "item_util.m"
    MR_Word parse_tree__item_util__V_6_6;

#line 301 "item_util.m"
    {
#line 301 "item_util.m"
      parse_tree__item_util__V_6_6 = mercury__term__context_init_0_f_0();
    }
#line 301 "item_util.m"
    {
#line 301 "item_util.m"
      parse_tree__item_util__ItemModuleDefn_5 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 301 "item_util.m"
      MR_hl_field(MR_mktag(0), parse_tree__item_util__ItemModuleDefn_5, 0) = ((MR_Box) (parse_tree__item_util__PseudoDecl_3));
#line 301 "item_util.m"
      MR_hl_field(MR_mktag(0), parse_tree__item_util__ItemModuleDefn_5, 1) = ((MR_Box) (parse_tree__item_util__V_6_6));
#line 301 "item_util.m"
      MR_hl_field(MR_mktag(0), parse_tree__item_util__ItemModuleDefn_5, 2) = ((MR_Box) ((MR_Integer) -1));
#line 301 "item_util.m"
    }
#line 302 "item_util.m"
    parse_tree__item_util__Item_4 = (MR_Word) MR_mkword(MR_mktag(2), (MR_Word) parse_tree__item_util__ItemModuleDefn_5);
#line 300 "item_util.m"
    return parse_tree__item_util__Item_4;
#line 300 "item_util.m"
  }
#line 62 "item_util.m"
}

#line 54 "item_util.m"
MR_Word MR_CALL 
parse_tree__item_util__item_needs_foreign_imports_1_f_0(
#line 54 "item_util.m"
  MR_Word parse_tree__item_util__Item_3)
#line 54 "item_util.m"
{
#line 208 "item_util.m"
  {
#line 208 "item_util.m"
    MR_bool parse_tree__item_util__succeeded;
#line 208 "item_util.m"
    MR_Word parse_tree__item_util__Langs_4;

#line 208 "item_util.m"
    if (((((MR_tag((MR_Word) parse_tree__item_util__Item_3)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__item_util__Item_3, (MR_Integer) 0)))) == (MR_Integer) 12))))
#line 210 "item_util.m"
      {
#line 210 "item_util.m"
        return parse_tree__item_util__Langs_4 = parse_tree__prog_foreign__all_foreign_languages_0_f_0();
      }
#line 208 "item_util.m"
    else
#line 208 "item_util.m"
      if (((((MR_tag((MR_Word) parse_tree__item_util__Item_3)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__item_util__Item_3, (MR_Integer) 0)))) == (MR_Integer) 6))))
#line 222 "item_util.m"
        {
#line 222 "item_util.m"
          MR_Word parse_tree__item_util__ItemPragma_10 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__item_util__Item_3, (MR_Integer) 1)));
#line 222 "item_util.m"
          MR_Word parse_tree__item_util__Pragma_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__item_util__ItemPragma_10, (MR_Integer) 1)));
#line 223 "item_util.m"
          MR_Word parse_tree__item_util__V_11_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__item_util__ItemPragma_10, (MR_Integer) 0)));
#line 223 "item_util.m"
          MR_Word parse_tree__item_util__V_13_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__item_util__ItemPragma_10, (MR_Integer) 2)));
#line 223 "item_util.m"
          MR_Integer parse_tree__item_util__V_14_14 = ((MR_Integer) (MR_hl_field(MR_mktag(0), parse_tree__item_util__ItemPragma_10, (MR_Integer) 3)));

#line 239 "item_util.m"
          if (((MR_tag((MR_Word) parse_tree__item_util__Pragma_12)) == (MR_mktag((MR_Integer) 1))))
#line 237 "item_util.m"
            {
#line 237 "item_util.m"
              MR_Word parse_tree__item_util__Lang_16;
#line 237 "item_util.m"
              MR_Word parse_tree__item_util__FCInfo_19 = (MR_Word) MR_body(((MR_Word) parse_tree__item_util__Pragma_12), (MR_Integer) 1);
#line 230 "item_util.m"
              MR_Word parse_tree__item_util__V_20_20;

#line 230 "item_util.m"
              parse_tree__item_util__Lang_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__item_util__FCInfo_19, (MR_Integer) 0)));
#line 230 "item_util.m"
              parse_tree__item_util__V_20_20 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__item_util__FCInfo_19, (MR_Integer) 1)));
#line 238 "item_util.m"
              {
#line 238 "item_util.m"
                parse_tree__item_util__Langs_4 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 238 "item_util.m"
                MR_hl_field(MR_mktag(1), parse_tree__item_util__Langs_4, 0) = ((MR_Box) (parse_tree__item_util__Lang_16));
#line 238 "item_util.m"
                MR_hl_field(MR_mktag(1), parse_tree__item_util__Langs_4, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 238 "item_util.m"
              }
#line 237 "item_util.m"
            }
#line 239 "item_util.m"
          else
#line 239 "item_util.m"
            if (((MR_tag((MR_Word) parse_tree__item_util__Pragma_12)) == (MR_mktag((MR_Integer) 0))))
#line 237 "item_util.m"
              {
#line 237 "item_util.m"
                MR_Word parse_tree__item_util__FDInfo_15 = (MR_Word) MR_body(((MR_Word) parse_tree__item_util__Pragma_12), (MR_Integer) 0);
#line 237 "item_util.m"
                MR_Word parse_tree__item_util__Lang_89 = ((((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__item_util__FDInfo_15, (MR_Integer) 0)))) & (MR_Integer) 7);
#line 227 "item_util.m"
                MR_Word parse_tree__item_util__V_17_17 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__item_util__FDInfo_15, (MR_Integer) 0)))) >> (MR_Integer) 3)) & (MR_Integer) 1);
#line 227 "item_util.m"
                MR_Word parse_tree__item_util__V_18_18 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__item_util__FDInfo_15, (MR_Integer) 1)));

#line 238 "item_util.m"
                {
#line 238 "item_util.m"
                  parse_tree__item_util__Langs_4 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 238 "item_util.m"
                  MR_hl_field(MR_mktag(1), parse_tree__item_util__Langs_4, 0) = ((MR_Box) (parse_tree__item_util__Lang_89));
#line 238 "item_util.m"
                  MR_hl_field(MR_mktag(1), parse_tree__item_util__Langs_4, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 238 "item_util.m"
                }
#line 237 "item_util.m"
              }
#line 239 "item_util.m"
            else
#line 239 "item_util.m"
              if (((MR_tag((MR_Word) parse_tree__item_util__Pragma_12)) == (MR_mktag((MR_Integer) 2))))
#line 240 "item_util.m"
                {
#line 240 "item_util.m"
                  MR_Word parse_tree__item_util__FPInfo_27 = ((MR_Word) (MR_hl_field(MR_mktag(2), parse_tree__item_util__Pragma_12, (MR_Integer) 0)));
#line 240 "item_util.m"
                  MR_Word parse_tree__item_util__Attrs_28 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__item_util__FPInfo_27, (MR_Integer) 0)));
#line 240 "item_util.m"
                  MR_Word parse_tree__item_util__V_77_77;
#line 241 "item_util.m"
                  MR_Word parse_tree__item_util__V_29_29 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__item_util__FPInfo_27, (MR_Integer) 1)));
#line 241 "item_util.m"
                  MR_Word parse_tree__item_util__V_30_30 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__item_util__FPInfo_27, (MR_Integer) 2)));
#line 241 "item_util.m"
                  MR_Word parse_tree__item_util__V_31_31 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__item_util__FPInfo_27, (MR_Integer) 3)));
#line 241 "item_util.m"
                  MR_Word parse_tree__item_util__V_32_32 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__item_util__FPInfo_27, (MR_Integer) 4)));
#line 241 "item_util.m"
                  MR_Word parse_tree__item_util__V_33_33 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__item_util__FPInfo_27, (MR_Integer) 5)));
#line 241 "item_util.m"
                  MR_Word parse_tree__item_util__V_34_34 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__item_util__FPInfo_27, (MR_Integer) 6)));

#line 242 "item_util.m"
                  {
#line 242 "item_util.m"
                    parse_tree__item_util__V_77_77 = parse_tree__prog_data__get_foreign_language_1_f_0(parse_tree__item_util__Attrs_28);
                  }
#line 242 "item_util.m"
                  {
#line 242 "item_util.m"
                    parse_tree__item_util__Langs_4 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 242 "item_util.m"
                    MR_hl_field(MR_mktag(1), parse_tree__item_util__Langs_4, 0) = ((MR_Box) (parse_tree__item_util__V_77_77));
#line 242 "item_util.m"
                    MR_hl_field(MR_mktag(1), parse_tree__item_util__Langs_4, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 242 "item_util.m"
                  }
#line 240 "item_util.m"
                }
#line 239 "item_util.m"
              else
#line 239 "item_util.m"
                if (((((MR_tag((MR_Word) parse_tree__item_util__Pragma_12)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__item_util__Pragma_12, (MR_Integer) 0)))) == (MR_Integer) 3))))
#line 237 "item_util.m"
                  {
#line 237 "item_util.m"
                    MR_Word parse_tree__item_util__FEInfo_21 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__item_util__Pragma_12, (MR_Integer) 1)));
#line 237 "item_util.m"
                    MR_Word parse_tree__item_util__Lang_91 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__item_util__FEInfo_21, (MR_Integer) 0)));
#line 233 "item_util.m"
                    MR_Word parse_tree__item_util__V_22_22 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__item_util__FEInfo_21, (MR_Integer) 1)));
#line 233 "item_util.m"
                    MR_Word parse_tree__item_util__V_23_23 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__item_util__FEInfo_21, (MR_Integer) 2)));

#line 238 "item_util.m"
                    {
#line 238 "item_util.m"
                      parse_tree__item_util__Langs_4 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 238 "item_util.m"
                      MR_hl_field(MR_mktag(1), parse_tree__item_util__Langs_4, 0) = ((MR_Box) (parse_tree__item_util__Lang_91));
#line 238 "item_util.m"
                      MR_hl_field(MR_mktag(1), parse_tree__item_util__Langs_4, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 238 "item_util.m"
                    }
#line 237 "item_util.m"
                  }
#line 239 "item_util.m"
                else
#line 239 "item_util.m"
                  if (((((MR_tag((MR_Word) parse_tree__item_util__Pragma_12)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__item_util__Pragma_12, (MR_Integer) 0)))) == (MR_Integer) 1))))
#line 237 "item_util.m"
                    {
#line 237 "item_util.m"
                      MR_Word parse_tree__item_util__FPEInfo_24 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__item_util__Pragma_12, (MR_Integer) 1)));
#line 237 "item_util.m"
                      MR_Word parse_tree__item_util__Lang_93 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__item_util__FPEInfo_24, (MR_Integer) 0)));
#line 236 "item_util.m"
                      MR_Word parse_tree__item_util__V_25_25 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__item_util__FPEInfo_24, (MR_Integer) 1)));
#line 236 "item_util.m"
                      MR_String parse_tree__item_util__V_26_26 = ((MR_String) (MR_hl_field(MR_mktag(0), parse_tree__item_util__FPEInfo_24, (MR_Integer) 2)));

#line 238 "item_util.m"
                      {
#line 238 "item_util.m"
                        parse_tree__item_util__Langs_4 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 238 "item_util.m"
                        MR_hl_field(MR_mktag(1), parse_tree__item_util__Langs_4, 0) = ((MR_Box) (parse_tree__item_util__Lang_93));
#line 238 "item_util.m"
                        MR_hl_field(MR_mktag(1), parse_tree__item_util__Langs_4, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 238 "item_util.m"
                      }
#line 237 "item_util.m"
                    }
#line 239 "item_util.m"
                  else
#line 273 "item_util.m"
                    parse_tree__item_util__Langs_4 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 222 "item_util.m"
        }
#line 208 "item_util.m"
      else
#line 208 "item_util.m"
        if (((((MR_tag((MR_Word) parse_tree__item_util__Item_3)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__item_util__Item_3, (MR_Integer) 0)))) == (MR_Integer) 1))))
#line 212 "item_util.m"
          {
#line 212 "item_util.m"
            MR_Word parse_tree__item_util__ItemTypeDefn_6 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__item_util__Item_3, (MR_Integer) 1)));
#line 218 "item_util.m"
            MR_Word parse_tree__item_util__ForeignType_7;
#line 214 "item_util.m"
            MR_Word parse_tree__item_util__V_80_80 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__item_util__ItemTypeDefn_6, (MR_Integer) 3)));
#line 214 "item_util.m"
            MR_Word parse_tree__item_util__V_83_83 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__item_util__ItemTypeDefn_6, (MR_Integer) 0)));
#line 214 "item_util.m"
            MR_Word parse_tree__item_util__V_84_84 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__item_util__ItemTypeDefn_6, (MR_Integer) 1)));
#line 214 "item_util.m"
            MR_Word parse_tree__item_util__V_85_85 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__item_util__ItemTypeDefn_6, (MR_Integer) 2)));
#line 214 "item_util.m"
            MR_Word parse_tree__item_util__V_86_86 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__item_util__ItemTypeDefn_6, (MR_Integer) 4)));
#line 214 "item_util.m"
            MR_Word parse_tree__item_util__V_87_87 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__item_util__ItemTypeDefn_6, (MR_Integer) 5)));
#line 214 "item_util.m"
            MR_Integer parse_tree__item_util__V_88_88 = ((MR_Integer) (MR_hl_field(MR_mktag(0), parse_tree__item_util__ItemTypeDefn_6, (MR_Integer) 6)));
#line 215 "item_util.m"
            MR_Word parse_tree__item_util__V_8_8;
#line 215 "item_util.m"
            MR_Word parse_tree__item_util__V_9_9;

#line 215 "item_util.m"
            parse_tree__item_util__succeeded = ((((MR_tag((MR_Word) parse_tree__item_util__V_80_80)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__item_util__V_80_80, (MR_Integer) 0)))) == (MR_Integer) 1)));
#line 215 "item_util.m"
            if (parse_tree__item_util__succeeded)
#line 215 "item_util.m"
              {
#line 215 "item_util.m"
                parse_tree__item_util__ForeignType_7 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__item_util__V_80_80, (MR_Integer) 1)));
#line 215 "item_util.m"
                parse_tree__item_util__V_8_8 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__item_util__V_80_80, (MR_Integer) 2)));
#line 215 "item_util.m"
                parse_tree__item_util__V_9_9 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__item_util__V_80_80, (MR_Integer) 3)));
#line 217 "item_util.m"
                {
#line 217 "item_util.m"
                  MR_Word parse_tree__item_util__V_81_81;

#line 217 "item_util.m"
                  {
#line 217 "item_util.m"
                    parse_tree__item_util__V_81_81 = parse_tree__prog_foreign__foreign_type_language_1_f_0(parse_tree__item_util__ForeignType_7);
                  }
#line 217 "item_util.m"
                  {
#line 217 "item_util.m"
                    parse_tree__item_util__Langs_4 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 217 "item_util.m"
                    MR_hl_field(MR_mktag(1), parse_tree__item_util__Langs_4, 0) = ((MR_Box) (parse_tree__item_util__V_81_81));
#line 217 "item_util.m"
                    MR_hl_field(MR_mktag(1), parse_tree__item_util__Langs_4, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 217 "item_util.m"
                  }
#line 217 "item_util.m"
                }
#line 215 "item_util.m"
              }
#line 215 "item_util.m"
            else
#line 219 "item_util.m"
              parse_tree__item_util__Langs_4 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 212 "item_util.m"
          }
#line 208 "item_util.m"
        else
#line 291 "item_util.m"
          parse_tree__item_util__Langs_4 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 208 "item_util.m"
    return parse_tree__item_util__Langs_4;
#line 208 "item_util.m"
  }
#line 54 "item_util.m"
}

#line 52 "item_util.m"
MR_Word MR_CALL 
parse_tree__item_util__item_needs_imports_1_f_0(
#line 52 "item_util.m"
  MR_Word parse_tree__item_util__Item_3)
#line 52 "item_util.m"
{
#line 176 "item_util.m"
  {
#line 176 "item_util.m"
    MR_bool parse_tree__item_util__succeeded;
#line 176 "item_util.m"
    MR_Word parse_tree__item_util__NeedsImports_4;

#line 176 "item_util.m"
    if (((((MR_tag((MR_Word) parse_tree__item_util__Item_3)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__item_util__Item_3, (MR_Integer) 0)))) == (MR_Integer) 1))))
#line 176 "item_util.m"
      {
#line 176 "item_util.m"
        MR_Word parse_tree__item_util__ItemTypeDefn_5 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__item_util__Item_3, (MR_Integer) 1)));
#line 177 "item_util.m"
        MR_Word parse_tree__item_util__V_23_23 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__item_util__ItemTypeDefn_5, (MR_Integer) 3)));
#line 177 "item_util.m"
        MR_Word parse_tree__item_util__V_24_24 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__item_util__ItemTypeDefn_5, (MR_Integer) 0)));
#line 177 "item_util.m"
        MR_Word parse_tree__item_util__V_25_25 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__item_util__ItemTypeDefn_5, (MR_Integer) 1)));
#line 177 "item_util.m"
        MR_Word parse_tree__item_util__V_26_26 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__item_util__ItemTypeDefn_5, (MR_Integer) 2)));
#line 177 "item_util.m"
        MR_Word parse_tree__item_util__V_27_27 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__item_util__ItemTypeDefn_5, (MR_Integer) 4)));
#line 177 "item_util.m"
        MR_Word parse_tree__item_util__V_28_28 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__item_util__ItemTypeDefn_5, (MR_Integer) 5)));
#line 177 "item_util.m"
        MR_Integer parse_tree__item_util__V_29_29 = ((MR_Integer) (MR_hl_field(MR_mktag(0), parse_tree__item_util__ItemTypeDefn_5, (MR_Integer) 6)));
#line 177 "item_util.m"
        MR_Word parse_tree__item_util__V_6_6;

#line 177 "item_util.m"
        parse_tree__item_util__succeeded = ((MR_tag((MR_Word) parse_tree__item_util__V_23_23)) == (MR_mktag((MR_Integer) 2)));
#line 177 "item_util.m"
        if (parse_tree__item_util__succeeded)
#line 177 "item_util.m"
          {
#line 177 "item_util.m"
            parse_tree__item_util__V_6_6 = ((MR_Word) (MR_hl_field(MR_mktag(2), parse_tree__item_util__V_23_23, (MR_Integer) 0)));
#line 178 "item_util.m"
            parse_tree__item_util__NeedsImports_4 = (MR_Integer) 0;
#line 177 "item_util.m"
          }
#line 177 "item_util.m"
        else
#line 180 "item_util.m"
          parse_tree__item_util__NeedsImports_4 = (MR_Integer) 1;
#line 176 "item_util.m"
      }
#line 176 "item_util.m"
    else
#line 176 "item_util.m"
      if (((((((((MR_tag((MR_Word) parse_tree__item_util__Item_3)) == (MR_mktag((MR_Integer) 2)))) || (((MR_tag((MR_Word) parse_tree__item_util__Item_3)) == (MR_mktag((MR_Integer) 1)))))) || (((MR_tag((MR_Word) parse_tree__item_util__Item_3)) == (MR_mktag((MR_Integer) 0)))))) || (((((MR_tag((MR_Word) parse_tree__item_util__Item_3)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__item_util__Item_3, (MR_Integer) 0)))) == (MR_Integer) 13))))))
#line 203 "item_util.m"
        parse_tree__item_util__NeedsImports_4 = (MR_Integer) 0;
#line 176 "item_util.m"
      else
#line 196 "item_util.m"
        parse_tree__item_util__NeedsImports_4 = (MR_Integer) 1;
#line 176 "item_util.m"
    return parse_tree__item_util__NeedsImports_4;
#line 176 "item_util.m"
  }
#line 52 "item_util.m"
}

#line 46 "item_util.m"
MR_Word MR_CALL 
parse_tree__item_util__make_instance_abstract_1_f_0(
#line 46 "item_util.m"
  MR_Word parse_tree__item_util__Info0_3)
#line 46 "item_util.m"
{
#line 169 "item_util.m"
  {
#line 169 "item_util.m"
    MR_bool parse_tree__item_util__succeeded;
#line 169 "item_util.m"
    MR_Word parse_tree__item_util__Info_4;
#line 170 "item_util.m"
    MR_Word parse_tree__item_util__V_6_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__item_util__Info0_3, (MR_Integer) 0)));
#line 170 "item_util.m"
    MR_Word parse_tree__item_util__V_7_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__item_util__Info0_3, (MR_Integer) 1)));
#line 170 "item_util.m"
    MR_Word parse_tree__item_util__V_8_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__item_util__Info0_3, (MR_Integer) 2)));
#line 170 "item_util.m"
    MR_Word parse_tree__item_util__V_9_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__item_util__Info0_3, (MR_Integer) 3)));
#line 170 "item_util.m"
    MR_Word parse_tree__item_util__V_11_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__item_util__Info0_3, (MR_Integer) 5)));
#line 170 "item_util.m"
    MR_Word parse_tree__item_util__V_12_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__item_util__Info0_3, (MR_Integer) 6)));
#line 170 "item_util.m"
    MR_Word parse_tree__item_util__V_13_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__item_util__Info0_3, (MR_Integer) 7)));
#line 170 "item_util.m"
    MR_Integer parse_tree__item_util__V_14_14 = ((MR_Integer) (MR_hl_field(MR_mktag(0), parse_tree__item_util__Info0_3, (MR_Integer) 8)));
#line 170 "item_util.m"
    MR_Word parse_tree__item_util__V_10_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__item_util__Info0_3, (MR_Integer) 4)));

#line 170 "item_util.m"
    {
#line 170 "item_util.m"
      parse_tree__item_util__Info_4 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 9 * sizeof(MR_Word)), NULL, NULL);
#line 170 "item_util.m"
      MR_hl_field(MR_mktag(0), parse_tree__item_util__Info_4, 0) = ((MR_Box) (parse_tree__item_util__V_6_6));
#line 170 "item_util.m"
      MR_hl_field(MR_mktag(0), parse_tree__item_util__Info_4, 1) = ((MR_Box) (parse_tree__item_util__V_7_7));
#line 170 "item_util.m"
      MR_hl_field(MR_mktag(0), parse_tree__item_util__Info_4, 2) = ((MR_Box) (parse_tree__item_util__V_8_8));
#line 170 "item_util.m"
      MR_hl_field(MR_mktag(0), parse_tree__item_util__Info_4, 3) = ((MR_Box) (parse_tree__item_util__V_9_9));
#line 170 "item_util.m"
      MR_hl_field(MR_mktag(0), parse_tree__item_util__Info_4, 4) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 170 "item_util.m"
      MR_hl_field(MR_mktag(0), parse_tree__item_util__Info_4, 5) = ((MR_Box) (parse_tree__item_util__V_11_11));
#line 170 "item_util.m"
      MR_hl_field(MR_mktag(0), parse_tree__item_util__Info_4, 6) = ((MR_Box) (parse_tree__item_util__V_12_12));
#line 170 "item_util.m"
      MR_hl_field(MR_mktag(0), parse_tree__item_util__Info_4, 7) = ((MR_Box) (parse_tree__item_util__V_13_13));
#line 170 "item_util.m"
      MR_hl_field(MR_mktag(0), parse_tree__item_util__Info_4, 8) = ((MR_Box) (parse_tree__item_util__V_14_14));
#line 170 "item_util.m"
    }
#line 169 "item_util.m"
    return parse_tree__item_util__Info_4;
#line 169 "item_util.m"
  }
#line 46 "item_util.m"
}

#line 38 "item_util.m"
MR_bool MR_CALL 
parse_tree__item_util__make_abstract_unify_compare_3_p_0(
#line 38 "item_util.m"
  MR_Word parse_tree__item_util__Item_4,
#line 38 "item_util.m"
  MR_Word parse_tree__item_util__HeadVar__2_2,
#line 38 "item_util.m"
  MR_Word * parse_tree__item_util__AbstractItem_5)
#line 38 "item_util.m"
{
#line 147 "item_util.m"
  {
#line 147 "item_util.m"
    MR_bool parse_tree__item_util__succeeded = (parse_tree__item_util__HeadVar__2_2 == (MR_Integer) 0);
#line 147 "item_util.m"
    MR_Word parse_tree__item_util__ItemTypeDefn_6;
#line 147 "item_util.m"
    MR_Word parse_tree__item_util__TypeDefn_7;
#line 147 "item_util.m"
    MR_Word parse_tree__item_util__AbstractTypeDefn_12;
#line 147 "item_util.m"
    MR_Word parse_tree__item_util__AbstractItemTypeDefn_16;
#line 147 "item_util.m"
    MR_Word parse_tree__item_util__V_32_32;
#line 147 "item_util.m"
    MR_Word parse_tree__item_util__V_33_33;
#line 147 "item_util.m"
    MR_Word parse_tree__item_util__V_34_34;
#line 147 "item_util.m"
    MR_Word parse_tree__item_util__V_35_35;
#line 147 "item_util.m"
    MR_Word parse_tree__item_util__V_36_36;
#line 147 "item_util.m"
    MR_Integer parse_tree__item_util__V_37_37;

#line 147 "item_util.m"
    if (parse_tree__item_util__succeeded)
#line 147 "item_util.m"
      {
#line 148 "item_util.m"
        parse_tree__item_util__succeeded = ((((MR_tag((MR_Word) parse_tree__item_util__Item_4)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__item_util__Item_4, (MR_Integer) 0)))) == (MR_Integer) 1)));
#line 148 "item_util.m"
        if (parse_tree__item_util__succeeded)
#line 148 "item_util.m"
          {
#line 148 "item_util.m"
            parse_tree__item_util__ItemTypeDefn_6 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__item_util__Item_4, (MR_Integer) 1)));
#line 149 "item_util.m"
            parse_tree__item_util__V_32_32 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__item_util__ItemTypeDefn_6, (MR_Integer) 0)));
#line 149 "item_util.m"
            parse_tree__item_util__V_33_33 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__item_util__ItemTypeDefn_6, (MR_Integer) 1)));
#line 149 "item_util.m"
            parse_tree__item_util__V_34_34 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__item_util__ItemTypeDefn_6, (MR_Integer) 2)));
#line 149 "item_util.m"
            parse_tree__item_util__TypeDefn_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__item_util__ItemTypeDefn_6, (MR_Integer) 3)));
#line 149 "item_util.m"
            parse_tree__item_util__V_35_35 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__item_util__ItemTypeDefn_6, (MR_Integer) 4)));
#line 149 "item_util.m"
            parse_tree__item_util__V_36_36 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__item_util__ItemTypeDefn_6, (MR_Integer) 5)));
#line 149 "item_util.m"
            parse_tree__item_util__V_37_37 = ((MR_Integer) (MR_hl_field(MR_mktag(0), parse_tree__item_util__ItemTypeDefn_6, (MR_Integer) 6)));
#line 156 "item_util.m"
            if (((MR_tag((MR_Word) parse_tree__item_util__TypeDefn_7)) == (MR_mktag((MR_Integer) 0))))
#line 152 "item_util.m"
              {
#line 152 "item_util.m"
                MR_Word parse_tree__item_util__Constructors_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__item_util__TypeDefn_7, (MR_Integer) 0)));
#line 152 "item_util.m"
                MR_Word parse_tree__item_util__MaybeDirectArgCtors_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__item_util__TypeDefn_7, (MR_Integer) 2)));
#line 152 "item_util.m"
                MR_Word parse_tree__item_util__MaybeUserEqComp_11;
#line 152 "item_util.m"
                MR_Word parse_tree__item_util__V_25_25 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__item_util__TypeDefn_7, (MR_Integer) 1)));
#line 152 "item_util.m"
                MR_Word parse_tree__item_util__V_26_26;
#line 152 "item_util.m"
                MR_Word parse_tree__item_util__V_27_27;
#line 151 "item_util.m"
                MR_Word parse_tree__item_util___UserEqComp_9;

#line 151 "item_util.m"
                parse_tree__item_util__succeeded = ((MR_tag((MR_Word) parse_tree__item_util__V_25_25)) == (MR_mktag((MR_Integer) 1)));
#line 151 "item_util.m"
                if (parse_tree__item_util__succeeded)
#line 151 "item_util.m"
                  {
#line 151 "item_util.m"
                    parse_tree__item_util___UserEqComp_9 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__item_util__V_25_25, (MR_Integer) 0)));
#line 153 "item_util.m"
                    parse_tree__item_util__V_27_27 = (MR_Integer) 0;
#line 153 "item_util.m"
                    parse_tree__item_util__V_26_26 = (MR_Word) MR_mkword(MR_mktag(1), &parse_tree__item_util_scalar_common_1[0]);
#line 153 "item_util.m"
                    parse_tree__item_util__MaybeUserEqComp_11 = (MR_Word) MR_mkword(MR_mktag(1), &parse_tree__item_util_scalar_common_1[1]);
#line 154 "item_util.m"
                    {
#line 154 "item_util.m"
                      parse_tree__item_util__AbstractTypeDefn_12 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 154 "item_util.m"
                      MR_hl_field(MR_mktag(0), parse_tree__item_util__AbstractTypeDefn_12, 0) = ((MR_Box) (parse_tree__item_util__Constructors_8));
#line 154 "item_util.m"
                      MR_hl_field(MR_mktag(0), parse_tree__item_util__AbstractTypeDefn_12, 1) = ((MR_Box) (parse_tree__item_util__MaybeUserEqComp_11));
#line 154 "item_util.m"
                      MR_hl_field(MR_mktag(0), parse_tree__item_util__AbstractTypeDefn_12, 2) = ((MR_Box) (parse_tree__item_util__MaybeDirectArgCtors_10));
#line 154 "item_util.m"
                    }
#line 154 "item_util.m"
                    parse_tree__item_util__succeeded = MR_TRUE;
#line 151 "item_util.m"
                  }
#line 152 "item_util.m"
              }
#line 156 "item_util.m"
            else
#line 156 "item_util.m"
              if (((((MR_tag((MR_Word) parse_tree__item_util__TypeDefn_7)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__item_util__TypeDefn_7, (MR_Integer) 0)))) == (MR_Integer) 1))))
#line 158 "item_util.m"
                {
#line 158 "item_util.m"
                  MR_Word parse_tree__item_util__ForeignType_13 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__item_util__TypeDefn_7, (MR_Integer) 1)));
#line 158 "item_util.m"
                  MR_Word parse_tree__item_util__Assertions_14 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__item_util__TypeDefn_7, (MR_Integer) 3)));
#line 158 "item_util.m"
                  MR_Word parse_tree__item_util__V_21_21 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__item_util__TypeDefn_7, (MR_Integer) 2)));
#line 158 "item_util.m"
                  MR_Word parse_tree__item_util__V_22_22;
#line 158 "item_util.m"
                  MR_Word parse_tree__item_util__V_23_23;
#line 158 "item_util.m"
                  MR_Word parse_tree__item_util__V_24_24;
#line 158 "item_util.m"
                  MR_Word parse_tree__item_util___UserEqComp_28;

#line 158 "item_util.m"
                  parse_tree__item_util__succeeded = ((MR_tag((MR_Word) parse_tree__item_util__V_21_21)) == (MR_mktag((MR_Integer) 1)));
#line 158 "item_util.m"
                  if (parse_tree__item_util__succeeded)
#line 158 "item_util.m"
                    {
#line 158 "item_util.m"
                      parse_tree__item_util___UserEqComp_28 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__item_util__V_21_21, (MR_Integer) 0)));
#line 160 "item_util.m"
                      parse_tree__item_util__V_24_24 = (MR_Integer) 0;
#line 160 "item_util.m"
                      parse_tree__item_util__V_23_23 = (MR_Word) MR_mkword(MR_mktag(1), &parse_tree__item_util_scalar_common_1[0]);
#line 160 "item_util.m"
                      parse_tree__item_util__V_22_22 = (MR_Word) MR_mkword(MR_mktag(1), &parse_tree__item_util_scalar_common_1[1]);
#line 159 "item_util.m"
                      {
#line 159 "item_util.m"
                        parse_tree__item_util__AbstractTypeDefn_12 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL));
#line 159 "item_util.m"
                        MR_hl_field(MR_mktag(3), parse_tree__item_util__AbstractTypeDefn_12, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 159 "item_util.m"
                        MR_hl_field(MR_mktag(3), parse_tree__item_util__AbstractTypeDefn_12, 1) = ((MR_Box) (parse_tree__item_util__ForeignType_13));
#line 159 "item_util.m"
                        MR_hl_field(MR_mktag(3), parse_tree__item_util__AbstractTypeDefn_12, 2) = ((MR_Box) (parse_tree__item_util__V_22_22));
#line 159 "item_util.m"
                        MR_hl_field(MR_mktag(3), parse_tree__item_util__AbstractTypeDefn_12, 3) = ((MR_Box) (parse_tree__item_util__Assertions_14));
#line 159 "item_util.m"
                      }
#line 159 "item_util.m"
                      parse_tree__item_util__succeeded = MR_TRUE;
#line 158 "item_util.m"
                    }
#line 158 "item_util.m"
                }
#line 156 "item_util.m"
              else
#line 156 "item_util.m"
                if (((((MR_tag((MR_Word) parse_tree__item_util__TypeDefn_7)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__item_util__TypeDefn_7, (MR_Integer) 0)))) == (MR_Integer) 0))))
#line 162 "item_util.m"
                  {
#line 162 "item_util.m"
                    MR_Word parse_tree__item_util__SolverTypeDetails_15 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__item_util__TypeDefn_7, (MR_Integer) 1)));
#line 162 "item_util.m"
                    MR_Word parse_tree__item_util__V_17_17 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__item_util__TypeDefn_7, (MR_Integer) 2)));
#line 162 "item_util.m"
                    MR_Word parse_tree__item_util__V_18_18;
#line 162 "item_util.m"
                    MR_Word parse_tree__item_util__V_19_19;
#line 162 "item_util.m"
                    MR_Word parse_tree__item_util__V_20_20;
#line 162 "item_util.m"
                    MR_Word parse_tree__item_util___UserEqComp_30;

#line 162 "item_util.m"
                    parse_tree__item_util__succeeded = ((MR_tag((MR_Word) parse_tree__item_util__V_17_17)) == (MR_mktag((MR_Integer) 1)));
#line 162 "item_util.m"
                    if (parse_tree__item_util__succeeded)
#line 162 "item_util.m"
                      {
#line 162 "item_util.m"
                        parse_tree__item_util___UserEqComp_30 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__item_util__V_17_17, (MR_Integer) 0)));
#line 164 "item_util.m"
                        parse_tree__item_util__V_20_20 = (MR_Integer) 1;
#line 164 "item_util.m"
                        parse_tree__item_util__V_19_19 = (MR_Word) MR_mkword(MR_mktag(1), &parse_tree__item_util_scalar_common_1[2]);
#line 164 "item_util.m"
                        parse_tree__item_util__V_18_18 = (MR_Word) MR_mkword(MR_mktag(1), &parse_tree__item_util_scalar_common_1[3]);
#line 163 "item_util.m"
                        {
#line 163 "item_util.m"
                          parse_tree__item_util__AbstractTypeDefn_12 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
#line 163 "item_util.m"
                          MR_hl_field(MR_mktag(3), parse_tree__item_util__AbstractTypeDefn_12, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 0));
#line 163 "item_util.m"
                          MR_hl_field(MR_mktag(3), parse_tree__item_util__AbstractTypeDefn_12, 1) = ((MR_Box) (parse_tree__item_util__SolverTypeDetails_15));
#line 163 "item_util.m"
                          MR_hl_field(MR_mktag(3), parse_tree__item_util__AbstractTypeDefn_12, 2) = ((MR_Box) (parse_tree__item_util__V_18_18));
#line 163 "item_util.m"
                        }
#line 163 "item_util.m"
                        parse_tree__item_util__succeeded = MR_TRUE;
#line 162 "item_util.m"
                      }
#line 162 "item_util.m"
                  }
#line 156 "item_util.m"
                else
#line 156 "item_util.m"
                  parse_tree__item_util__succeeded = MR_FALSE;
#line 147 "item_util.m"
            if (parse_tree__item_util__succeeded)
#line 147 "item_util.m"
              {
#line 166 "item_util.m"
                {
#line 166 "item_util.m"
                  parse_tree__item_util__AbstractItemTypeDefn_16 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 7 * sizeof(MR_Word)), NULL, NULL);
#line 166 "item_util.m"
                  MR_hl_field(MR_mktag(0), parse_tree__item_util__AbstractItemTypeDefn_16, 0) = ((MR_Box) (parse_tree__item_util__V_32_32));
#line 166 "item_util.m"
                  MR_hl_field(MR_mktag(0), parse_tree__item_util__AbstractItemTypeDefn_16, 1) = ((MR_Box) (parse_tree__item_util__V_33_33));
#line 166 "item_util.m"
                  MR_hl_field(MR_mktag(0), parse_tree__item_util__AbstractItemTypeDefn_16, 2) = ((MR_Box) (parse_tree__item_util__V_34_34));
#line 166 "item_util.m"
                  MR_hl_field(MR_mktag(0), parse_tree__item_util__AbstractItemTypeDefn_16, 3) = ((MR_Box) (parse_tree__item_util__AbstractTypeDefn_12));
#line 166 "item_util.m"
                  MR_hl_field(MR_mktag(0), parse_tree__item_util__AbstractItemTypeDefn_16, 4) = ((MR_Box) (parse_tree__item_util__V_35_35));
#line 166 "item_util.m"
                  MR_hl_field(MR_mktag(0), parse_tree__item_util__AbstractItemTypeDefn_16, 5) = ((MR_Box) (parse_tree__item_util__V_36_36));
#line 166 "item_util.m"
                  MR_hl_field(MR_mktag(0), parse_tree__item_util__AbstractItemTypeDefn_16, 6) = ((MR_Box) (parse_tree__item_util__V_37_37));
#line 166 "item_util.m"
                }
#line 167 "item_util.m"
                {
#line 167 "item_util.m"
                  MR_Word base;
#line 167 "item_util.m"
                  base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 167 "item_util.m"
                  *parse_tree__item_util__AbstractItem_5 = base;
#line 167 "item_util.m"
                  MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 167 "item_util.m"
                  MR_hl_field(MR_mktag(3), base, 1) = ((MR_Box) (parse_tree__item_util__AbstractItemTypeDefn_16));
#line 167 "item_util.m"
                }
#line 167 "item_util.m"
                parse_tree__item_util__succeeded = MR_TRUE;
#line 147 "item_util.m"
              }
#line 148 "item_util.m"
          }
#line 147 "item_util.m"
      }
#line 147 "item_util.m"
    return parse_tree__item_util__succeeded;
#line 147 "item_util.m"
  }
#line 38 "item_util.m"
}

#line 35 "item_util.m"
MR_bool MR_CALL 
parse_tree__item_util__make_abstract_defn_3_p_0(
#line 35 "item_util.m"
  MR_Word parse_tree__item_util__Item_4,
#line 35 "item_util.m"
  MR_Word parse_tree__item_util__ShortInterfaceKind_5,
#line 35 "item_util.m"
  MR_Word * parse_tree__item_util__AbstractItem_6)
#line 35 "item_util.m"
{
#line 90 "item_util.m"
  {
#line 90 "item_util.m"
    MR_bool parse_tree__item_util__succeeded;

#line 90 "item_util.m"
    if (((((MR_tag((MR_Word) parse_tree__item_util__Item_4)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__item_util__Item_4, (MR_Integer) 0)))) == (MR_Integer) 9))))
#line 136 "item_util.m"
      {
#line 136 "item_util.m"
        MR_Word parse_tree__item_util__ItemInstance_21;
#line 136 "item_util.m"
        MR_Word parse_tree__item_util__AbstractItemInstance_22;
#line 136 "item_util.m"
        MR_Word parse_tree__item_util__V_50_50;
#line 170 "item_util.m"
        MR_Word parse_tree__item_util__V_51_51;
#line 170 "item_util.m"
        MR_Word parse_tree__item_util__V_52_52;
#line 170 "item_util.m"
        MR_Word parse_tree__item_util__V_53_53;
#line 170 "item_util.m"
        MR_Word parse_tree__item_util__V_54_54;
#line 170 "item_util.m"
        MR_Word parse_tree__item_util__V_56_56;
#line 170 "item_util.m"
        MR_Word parse_tree__item_util__V_57_57;
#line 170 "item_util.m"
        MR_Word parse_tree__item_util__V_58_58;
#line 170 "item_util.m"
        MR_Integer parse_tree__item_util__V_59_59;
#line 170 "item_util.m"
        MR_Word parse_tree__item_util__V_55_55;

#line 137 "item_util.m"
        parse_tree__item_util__succeeded = (parse_tree__item_util__ShortInterfaceKind_5 == (MR_Integer) 0);
#line 136 "item_util.m"
        if (parse_tree__item_util__succeeded)
#line 136 "item_util.m"
          {
#line 136 "item_util.m"
            parse_tree__item_util__ItemInstance_21 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__item_util__Item_4, (MR_Integer) 1)));
#line 170 "item_util.m"
            parse_tree__item_util__V_50_50 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 170 "item_util.m"
            parse_tree__item_util__V_51_51 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__item_util__ItemInstance_21, (MR_Integer) 0)));
#line 170 "item_util.m"
            parse_tree__item_util__V_52_52 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__item_util__ItemInstance_21, (MR_Integer) 1)));
#line 170 "item_util.m"
            parse_tree__item_util__V_53_53 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__item_util__ItemInstance_21, (MR_Integer) 2)));
#line 170 "item_util.m"
            parse_tree__item_util__V_54_54 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__item_util__ItemInstance_21, (MR_Integer) 3)));
#line 170 "item_util.m"
            parse_tree__item_util__V_55_55 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__item_util__ItemInstance_21, (MR_Integer) 4)));
#line 170 "item_util.m"
            parse_tree__item_util__V_56_56 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__item_util__ItemInstance_21, (MR_Integer) 5)));
#line 170 "item_util.m"
            parse_tree__item_util__V_57_57 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__item_util__ItemInstance_21, (MR_Integer) 6)));
#line 170 "item_util.m"
            parse_tree__item_util__V_58_58 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__item_util__ItemInstance_21, (MR_Integer) 7)));
#line 170 "item_util.m"
            parse_tree__item_util__V_59_59 = ((MR_Integer) (MR_hl_field(MR_mktag(0), parse_tree__item_util__ItemInstance_21, (MR_Integer) 8)));
#line 170 "item_util.m"
            {
#line 170 "item_util.m"
              parse_tree__item_util__AbstractItemInstance_22 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 9 * sizeof(MR_Word)), NULL, NULL);
#line 170 "item_util.m"
              MR_hl_field(MR_mktag(0), parse_tree__item_util__AbstractItemInstance_22, 0) = ((MR_Box) (parse_tree__item_util__V_51_51));
#line 170 "item_util.m"
              MR_hl_field(MR_mktag(0), parse_tree__item_util__AbstractItemInstance_22, 1) = ((MR_Box) (parse_tree__item_util__V_52_52));
#line 170 "item_util.m"
              MR_hl_field(MR_mktag(0), parse_tree__item_util__AbstractItemInstance_22, 2) = ((MR_Box) (parse_tree__item_util__V_53_53));
#line 170 "item_util.m"
              MR_hl_field(MR_mktag(0), parse_tree__item_util__AbstractItemInstance_22, 3) = ((MR_Box) (parse_tree__item_util__V_54_54));
#line 170 "item_util.m"
              MR_hl_field(MR_mktag(0), parse_tree__item_util__AbstractItemInstance_22, 4) = ((MR_Box) (parse_tree__item_util__V_50_50));
#line 170 "item_util.m"
              MR_hl_field(MR_mktag(0), parse_tree__item_util__AbstractItemInstance_22, 5) = ((MR_Box) (parse_tree__item_util__V_56_56));
#line 170 "item_util.m"
              MR_hl_field(MR_mktag(0), parse_tree__item_util__AbstractItemInstance_22, 6) = ((MR_Box) (parse_tree__item_util__V_57_57));
#line 170 "item_util.m"
              MR_hl_field(MR_mktag(0), parse_tree__item_util__AbstractItemInstance_22, 7) = ((MR_Box) (parse_tree__item_util__V_58_58));
#line 170 "item_util.m"
              MR_hl_field(MR_mktag(0), parse_tree__item_util__AbstractItemInstance_22, 8) = ((MR_Box) (parse_tree__item_util__V_59_59));
#line 170 "item_util.m"
            }
#line 139 "item_util.m"
            {
#line 139 "item_util.m"
              MR_Word base;
#line 139 "item_util.m"
              base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 139 "item_util.m"
              *parse_tree__item_util__AbstractItem_6 = base;
#line 139 "item_util.m"
              MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 9));
#line 139 "item_util.m"
              MR_hl_field(MR_mktag(3), base, 1) = ((MR_Box) (parse_tree__item_util__AbstractItemInstance_22));
#line 139 "item_util.m"
            }
#line 139 "item_util.m"
            parse_tree__item_util__succeeded = MR_TRUE;
#line 136 "item_util.m"
          }
#line 136 "item_util.m"
      }
#line 90 "item_util.m"
    else
#line 90 "item_util.m"
      if (((((MR_tag((MR_Word) parse_tree__item_util__Item_4)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__item_util__Item_4, (MR_Integer) 0)))) == (MR_Integer) 1))))
#line 90 "item_util.m"
        {
#line 90 "item_util.m"
          MR_Word parse_tree__item_util__ItemTypeDefn_7 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__item_util__Item_4, (MR_Integer) 1)));
#line 90 "item_util.m"
          MR_Word parse_tree__item_util__TypeDefn_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__item_util__ItemTypeDefn_7, (MR_Integer) 3)));
#line 90 "item_util.m"
          MR_Word parse_tree__item_util__AbstractDetails_13;
#line 90 "item_util.m"
          MR_Word parse_tree__item_util__AbstractItemTypeDefn_20;
#line 90 "item_util.m"
          MR_Word parse_tree__item_util__V_26_26;
#line 90 "item_util.m"
          MR_Word parse_tree__item_util__V_27_27 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__item_util__ItemTypeDefn_7, (MR_Integer) 0)));
#line 90 "item_util.m"
          MR_Word parse_tree__item_util__V_28_28 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__item_util__ItemTypeDefn_7, (MR_Integer) 1)));
#line 90 "item_util.m"
          MR_Word parse_tree__item_util__V_29_29 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__item_util__ItemTypeDefn_7, (MR_Integer) 2)));
#line 90 "item_util.m"
          MR_Word parse_tree__item_util__V_30_30 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__item_util__ItemTypeDefn_7, (MR_Integer) 4)));
#line 90 "item_util.m"
          MR_Word parse_tree__item_util__V_31_31 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__item_util__ItemTypeDefn_7, (MR_Integer) 5)));
#line 90 "item_util.m"
          MR_Integer parse_tree__item_util__V_32_32 = ((MR_Integer) (MR_hl_field(MR_mktag(0), parse_tree__item_util__ItemTypeDefn_7, (MR_Integer) 6)));

#line 104 "item_util.m"
          if (((MR_tag((MR_Word) parse_tree__item_util__TypeDefn_8)) == (MR_mktag((MR_Integer) 2))))
#line 105 "item_util.m"
            {
#line 105 "item_util.m"
              parse_tree__item_util__AbstractDetails_13 = ((MR_Word) (MR_hl_field(MR_mktag(2), parse_tree__item_util__TypeDefn_8, (MR_Integer) 0)));
#line 105 "item_util.m"
              parse_tree__item_util__succeeded = MR_TRUE;
#line 105 "item_util.m"
            }
#line 104 "item_util.m"
          else
#line 104 "item_util.m"
            if (((MR_tag((MR_Word) parse_tree__item_util__TypeDefn_8)) == (MR_mktag((MR_Integer) 0))))
#line 93 "item_util.m"
              {
#line 93 "item_util.m"
                MR_Word parse_tree__item_util__Ctors_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__item_util__TypeDefn_8, (MR_Integer) 0)));
#line 93 "item_util.m"
                MR_Word parse_tree__item_util__V_10_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__item_util__TypeDefn_8, (MR_Integer) 1)));
#line 93 "item_util.m"
                MR_Word parse_tree__item_util__V_11_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__item_util__TypeDefn_8, (MR_Integer) 2)));
#line 96 "item_util.m"
                MR_Integer parse_tree__item_util__NumBits_12;

#line 94 "item_util.m"
                {
#line 94 "item_util.m"
                  parse_tree__item_util__succeeded = parse_tree__prog_type__du_type_is_enum_2_p_0(parse_tree__item_util__Ctors_9, &parse_tree__item_util__NumBits_12);
                }
#line 96 "item_util.m"
                if (parse_tree__item_util__succeeded)
#line 95 "item_util.m"
                  {
#line 95 "item_util.m"
                    parse_tree__item_util__AbstractDetails_13 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 95 "item_util.m"
                    MR_hl_field(MR_mktag(1), parse_tree__item_util__AbstractDetails_13, 0) = ((MR_Box) (parse_tree__item_util__NumBits_12));
#line 95 "item_util.m"
                  }
#line 96 "item_util.m"
                else
#line 97 "item_util.m"
                  parse_tree__item_util__AbstractDetails_13 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 103 "item_util.m"
                parse_tree__item_util__succeeded = (parse_tree__item_util__ShortInterfaceKind_5 == (MR_Integer) 1);
#line 93 "item_util.m"
              }
#line 104 "item_util.m"
            else
#line 104 "item_util.m"
              if (((MR_tag((MR_Word) parse_tree__item_util__TypeDefn_8)) == (MR_mktag((MR_Integer) 1))))
#line 113 "item_util.m"
                {
#line 124 "item_util.m"
                  parse_tree__item_util__succeeded = (parse_tree__item_util__ShortInterfaceKind_5 == (MR_Integer) 1);
#line 113 "item_util.m"
                  if (parse_tree__item_util__succeeded)
#line 113 "item_util.m"
                    {
#line 115 "item_util.m"
                      parse_tree__item_util__AbstractDetails_13 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 115 "item_util.m"
                      parse_tree__item_util__succeeded = MR_TRUE;
#line 113 "item_util.m"
                    }
#line 113 "item_util.m"
                }
#line 104 "item_util.m"
              else
#line 104 "item_util.m"
                if (((((MR_tag((MR_Word) parse_tree__item_util__TypeDefn_8)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__item_util__TypeDefn_8, (MR_Integer) 0)))) == (MR_Integer) 1))))
#line 126 "item_util.m"
                  {
#line 129 "item_util.m"
                    parse_tree__item_util__AbstractDetails_13 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 130 "item_util.m"
                    {
#line 130 "item_util.m"
                      parse_tree__item_util__succeeded = mercury__builtin__semidet_fail_0_p_0();
                    }
#line 126 "item_util.m"
                  }
#line 104 "item_util.m"
                else
#line 111 "item_util.m"
                  {
#line 111 "item_util.m"
                    parse_tree__item_util__AbstractDetails_13 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 1));
#line 111 "item_util.m"
                    parse_tree__item_util__succeeded = MR_TRUE;
#line 111 "item_util.m"
                  }
#line 90 "item_util.m"
          if (parse_tree__item_util__succeeded)
#line 90 "item_util.m"
            {
#line 133 "item_util.m"
              {
#line 133 "item_util.m"
                parse_tree__item_util__V_26_26 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 133 "item_util.m"
                MR_hl_field(MR_mktag(2), parse_tree__item_util__V_26_26, 0) = ((MR_Box) (parse_tree__item_util__AbstractDetails_13));
#line 133 "item_util.m"
              }
#line 132 "item_util.m"
              {
#line 132 "item_util.m"
                parse_tree__item_util__AbstractItemTypeDefn_20 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 7 * sizeof(MR_Word)), NULL, NULL);
#line 132 "item_util.m"
                MR_hl_field(MR_mktag(0), parse_tree__item_util__AbstractItemTypeDefn_20, 0) = ((MR_Box) (parse_tree__item_util__V_27_27));
#line 132 "item_util.m"
                MR_hl_field(MR_mktag(0), parse_tree__item_util__AbstractItemTypeDefn_20, 1) = ((MR_Box) (parse_tree__item_util__V_28_28));
#line 132 "item_util.m"
                MR_hl_field(MR_mktag(0), parse_tree__item_util__AbstractItemTypeDefn_20, 2) = ((MR_Box) (parse_tree__item_util__V_29_29));
#line 132 "item_util.m"
                MR_hl_field(MR_mktag(0), parse_tree__item_util__AbstractItemTypeDefn_20, 3) = ((MR_Box) (parse_tree__item_util__V_26_26));
#line 132 "item_util.m"
                MR_hl_field(MR_mktag(0), parse_tree__item_util__AbstractItemTypeDefn_20, 4) = ((MR_Box) (parse_tree__item_util__V_30_30));
#line 132 "item_util.m"
                MR_hl_field(MR_mktag(0), parse_tree__item_util__AbstractItemTypeDefn_20, 5) = ((MR_Box) (parse_tree__item_util__V_31_31));
#line 132 "item_util.m"
                MR_hl_field(MR_mktag(0), parse_tree__item_util__AbstractItemTypeDefn_20, 6) = ((MR_Box) (parse_tree__item_util__V_32_32));
#line 132 "item_util.m"
              }
#line 134 "item_util.m"
              {
#line 134 "item_util.m"
                MR_Word base;
#line 134 "item_util.m"
                base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 134 "item_util.m"
                *parse_tree__item_util__AbstractItem_6 = base;
#line 134 "item_util.m"
                MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 134 "item_util.m"
                MR_hl_field(MR_mktag(3), base, 1) = ((MR_Box) (parse_tree__item_util__AbstractItemTypeDefn_20));
#line 134 "item_util.m"
              }
#line 134 "item_util.m"
              parse_tree__item_util__succeeded = MR_TRUE;
#line 90 "item_util.m"
            }
#line 90 "item_util.m"
        }
#line 90 "item_util.m"
      else
#line 90 "item_util.m"
        if (((((MR_tag((MR_Word) parse_tree__item_util__Item_4)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__item_util__Item_4, (MR_Integer) 0)))) == (MR_Integer) 8))))
#line 141 "item_util.m"
          {
#line 141 "item_util.m"
            MR_Word parse_tree__item_util__ItemTypeClass_23 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__item_util__Item_4, (MR_Integer) 1)));
#line 141 "item_util.m"
            MR_Word parse_tree__item_util__AbstractItemTypeClass_24;
#line 142 "item_util.m"
            MR_Word parse_tree__item_util__V_40_40 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__item_util__ItemTypeClass_23, (MR_Integer) 0)));
#line 142 "item_util.m"
            MR_Word parse_tree__item_util__V_41_41 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__item_util__ItemTypeClass_23, (MR_Integer) 1)));
#line 142 "item_util.m"
            MR_Word parse_tree__item_util__V_42_42 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__item_util__ItemTypeClass_23, (MR_Integer) 2)));
#line 142 "item_util.m"
            MR_Word parse_tree__item_util__V_43_43 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__item_util__ItemTypeClass_23, (MR_Integer) 3)));
#line 142 "item_util.m"
            MR_Word parse_tree__item_util__V_45_45 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__item_util__ItemTypeClass_23, (MR_Integer) 5)));
#line 142 "item_util.m"
            MR_Word parse_tree__item_util__V_46_46 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__item_util__ItemTypeClass_23, (MR_Integer) 6)));
#line 142 "item_util.m"
            MR_Integer parse_tree__item_util__V_47_47 = ((MR_Integer) (MR_hl_field(MR_mktag(0), parse_tree__item_util__ItemTypeClass_23, (MR_Integer) 7)));
#line 142 "item_util.m"
            MR_Word parse_tree__item_util__V_44_44 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__item_util__ItemTypeClass_23, (MR_Integer) 4)));

#line 142 "item_util.m"
            {
#line 142 "item_util.m"
              parse_tree__item_util__AbstractItemTypeClass_24 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 8 * sizeof(MR_Word)), NULL, NULL);
#line 142 "item_util.m"
              MR_hl_field(MR_mktag(0), parse_tree__item_util__AbstractItemTypeClass_24, 0) = ((MR_Box) (parse_tree__item_util__V_40_40));
#line 142 "item_util.m"
              MR_hl_field(MR_mktag(0), parse_tree__item_util__AbstractItemTypeClass_24, 1) = ((MR_Box) (parse_tree__item_util__V_41_41));
#line 142 "item_util.m"
              MR_hl_field(MR_mktag(0), parse_tree__item_util__AbstractItemTypeClass_24, 2) = ((MR_Box) (parse_tree__item_util__V_42_42));
#line 142 "item_util.m"
              MR_hl_field(MR_mktag(0), parse_tree__item_util__AbstractItemTypeClass_24, 3) = ((MR_Box) (parse_tree__item_util__V_43_43));
#line 142 "item_util.m"
              MR_hl_field(MR_mktag(0), parse_tree__item_util__AbstractItemTypeClass_24, 4) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 142 "item_util.m"
              MR_hl_field(MR_mktag(0), parse_tree__item_util__AbstractItemTypeClass_24, 5) = ((MR_Box) (parse_tree__item_util__V_45_45));
#line 142 "item_util.m"
              MR_hl_field(MR_mktag(0), parse_tree__item_util__AbstractItemTypeClass_24, 6) = ((MR_Box) (parse_tree__item_util__V_46_46));
#line 142 "item_util.m"
              MR_hl_field(MR_mktag(0), parse_tree__item_util__AbstractItemTypeClass_24, 7) = ((MR_Box) (parse_tree__item_util__V_47_47));
#line 142 "item_util.m"
            }
#line 144 "item_util.m"
            {
#line 144 "item_util.m"
              MR_Word base;
#line 144 "item_util.m"
              base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 144 "item_util.m"
              *parse_tree__item_util__AbstractItem_6 = base;
#line 144 "item_util.m"
              MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 8));
#line 144 "item_util.m"
              MR_hl_field(MR_mktag(3), base, 1) = ((MR_Box) (parse_tree__item_util__AbstractItemTypeClass_24));
#line 144 "item_util.m"
            }
#line 141 "item_util.m"
            parse_tree__item_util__succeeded = MR_TRUE;
#line 141 "item_util.m"
          }
#line 90 "item_util.m"
        else
#line 90 "item_util.m"
          parse_tree__item_util__succeeded = MR_FALSE;
#line 90 "item_util.m"
    return parse_tree__item_util__succeeded;
#line 90 "item_util.m"
  }
#line 35 "item_util.m"
}

void mercury__parse_tree__item_util__init(void)
{
}

void mercury__parse_tree__item_util__init_type_tables(void)
{
	static MR_bool initialised = MR_FALSE;
	if (initialised) return;
	initialised = MR_TRUE;

	MR_register_type_ctor_info(&parse_tree__item_util__parse_tree__item_util__type_ctor_info_short_interface_kind_0);
}

void mercury__parse_tree__item_util__init_debugger(void)
{
	MR_fatal_error("debugger initialization in MLDS grade");
}

/* ensure everything is compiled with the same grade */
static const void *const MR_grade = &MR_GRADE_VAR;

/* :- end_module parse_tree.item_util. */
