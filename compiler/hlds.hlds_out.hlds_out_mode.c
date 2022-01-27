/*
** Automatically generated from `hlds_out_mode.m'
** by the Mercury compiler,
** version rotd-2016-03-21
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


/* :- module hlds.hlds_out.hlds_out_mode. */
/* :- implementation. */

/*
INIT mercury__hlds__hlds_out__hlds_out_mode__init
ENDINIT
*/

#include "hlds.hlds_out.hlds_out_mode.mih"


#include "analysis.mih"
#include "check_hlds.mih"
#include "hlds.mih"
#include "libs.mih"
#include "mdbcomp.mih"
#include "mode_robdd.mih"
#include "parse_tree.mih"
#include "recompilation.mih"
#include "transform_hlds.mih"
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
#include "hlds.hlds_out.mih"
#include "hlds.hlds_pred.mih"
#include "hlds.hlds_rtti.mih"
#include "hlds.inst_graph.mih"
#include "hlds.instmap.mih"
#include "hlds.pred_table.mih"
#include "hlds.special_pred.mih"
#include "hlds.status.mih"
#include "hlds.vartypes.mih"
#include "libs.compiler_util.mih"
#include "libs.globals.mih"
#include "libs.lp_rational.mih"
#include "libs.op_mode.mih"
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
#include "parse_tree.mercury_to_mercury.mih"
#include "parse_tree.module_qual.mih"
#include "parse_tree.parse_tree_out_info.mih"
#include "parse_tree.parse_tree_out_inst.mih"
#include "parse_tree.parse_tree_out_term.mih"
#include "parse_tree.parse_tree_to_term.mih"
#include "parse_tree.prog_data.mih"
#include "parse_tree.prog_data_event.mih"
#include "parse_tree.prog_data_foreign.mih"
#include "parse_tree.prog_data_pragma.mih"
#include "parse_tree.prog_data_used_modules.mih"
#include "parse_tree.prog_foreign.mih"
#include "parse_tree.prog_item.mih"
#include "parse_tree.prog_rename.mih"
#include "parse_tree.set_of_var.mih"
#include "transform_hlds.term_constr_data.mih"
#include "transform_hlds.term_constr_errors.mih"
#include "transform_hlds.term_constr_main_types.mih"
#include "transform_hlds.term_errors.mih"
#include "transform_hlds.term_norm.mih"
#include "transform_hlds.term_util.mih"
#include "mdbcomp.feedback.automatic_parallelism.mih"
#include "string.format.mih"
#include "string.parse_util.mih"




static const MR_EnumFunctorDesc hlds__hlds_out__hlds_out_mode__hlds__hlds_out__hlds_out_mode__enum_functor_desc_incl_addr_0_0;

static const MR_EnumFunctorDesc hlds__hlds_out__hlds_out_mode__hlds__hlds_out__hlds_out_mode__enum_functor_desc_incl_addr_0_1;

static const MR_EnumFunctorDescPtr hlds__hlds_out__hlds_out_mode__hlds__hlds_out__hlds_out_mode__enum_value_ordered_incl_addr_0[2];

static const MR_EnumFunctorDescPtr hlds__hlds_out__hlds_out_mode__hlds__hlds_out__hlds_out_mode__enum_name_ordered_incl_addr_0[2];

static const MR_Integer hlds__hlds_out__hlds_out_mode__hlds__hlds_out__hlds_out_mode__functor_number_map_incl_addr_0[2];

static MR_bool MR_CALL 
hlds__hlds_out__hlds_out_mode____Unify____incl_addr_0_0_10001(
  MR_Box hlds__hlds_out__hlds_out_mode__wrapper_arg_1,
  MR_Box hlds__hlds_out__hlds_out_mode__wrapper_arg_2);

static void MR_CALL 
hlds__hlds_out__hlds_out_mode____Compare____incl_addr_0_0_10001(
  MR_Box * hlds__hlds_out__hlds_out_mode__wrapper_arg_1,
  MR_Box hlds__hlds_out__hlds_out_mode__wrapper_arg_2,
  MR_Box hlds__hlds_out__hlds_out_mode__wrapper_arg_3);

static void MR_CALL 
hlds__hlds_out__hlds_out_mode__mercury_format_uni_mode_list_4_p_0(
  MR_Word hlds__hlds_out__hlds_out_mode__TypeClassInfo_for_output_21,
  MR_Word hlds__hlds_out__hlds_out_mode__HeadVar__1_1,
  MR_Word hlds__hlds_out__hlds_out_mode__HeadVar__2_2,
  MR_Box hlds__hlds_out__hlds_out_mode__STATE_VARIABLE_IO_0_3,
  MR_Box * hlds__hlds_out__hlds_out_mode__STATE_VARIABLE_IO_4);

static void MR_CALL 
hlds__hlds_out__hlds_out_mode__mercury_format_structured_inst_name_9_p_0(
  MR_Word hlds__hlds_out__hlds_out_mode__TypeClassInfo_for_output_168,
  MR_String hlds__hlds_out__hlds_out_mode__Suffix_10,
  MR_Word hlds__hlds_out__hlds_out_mode__InstName_11,
  MR_Word hlds__hlds_out__hlds_out_mode__FirstIndentPrinted_12,
  MR_Integer hlds__hlds_out__hlds_out_mode__Indent_13,
  MR_Word hlds__hlds_out__hlds_out_mode__Lang_14,
  MR_Word hlds__hlds_out__hlds_out_mode__InclAddr_15,
  MR_Word hlds__hlds_out__hlds_out_mode__InstVarSet_16,
  MR_Box hlds__hlds_out__hlds_out_mode__STATE_VARIABLE_U_0_31,
  MR_Box * hlds__hlds_out__hlds_out_mode__STATE_VARIABLE_U_32);

static void MR_CALL 
hlds__hlds_out__hlds_out_mode__get_inst_addr_2_p_0(
  MR_Word hlds__hlds_out__hlds_out_mode__Inst_1,
  MR_Integer * hlds__hlds_out__hlds_out_mode__InstAddr_2);

static void MR_CALL 
hlds__hlds_out__hlds_out_mode__mercury_format_structured_bound_insts_7_p_0(
  MR_Word hlds__hlds_out__hlds_out_mode__TypeClassInfo_for_output_52,
  MR_Word hlds__hlds_out__hlds_out_mode__HeadVar__1_1,
  MR_Integer hlds__hlds_out__hlds_out_mode__Indent0_2,
  MR_Word hlds__hlds_out__hlds_out_mode__Lang_3,
  MR_Word hlds__hlds_out__hlds_out_mode__InclAddr_4,
  MR_Word hlds__hlds_out__hlds_out_mode__InstVarSet_5,
  MR_Box hlds__hlds_out__hlds_out_mode__STATE_VARIABLE_U_0_6,
  MR_Box * hlds__hlds_out__hlds_out_mode__STATE_VARIABLE_U_7);

static void MR_CALL 
hlds__hlds_out__hlds_out_mode__mercury_format_structured_inst_8_p_0(
  MR_Word hlds__hlds_out__hlds_out_mode__TypeClassInfo_for_output_107,
  MR_String hlds__hlds_out__hlds_out_mode__Suffix_9,
  MR_Word hlds__hlds_out__hlds_out_mode__Inst_10,
  MR_Integer hlds__hlds_out__hlds_out_mode__Indent_11,
  MR_Word hlds__hlds_out__hlds_out_mode__Lang_12,
  MR_Word hlds__hlds_out__hlds_out_mode__InclAddr_13,
  MR_Word hlds__hlds_out__hlds_out_mode__InstVarSet_14,
  MR_Box hlds__hlds_out__hlds_out_mode__STATE_VARIABLE_U_0_32,
  MR_Box * hlds__hlds_out__hlds_out_mode__STATE_VARIABLE_U_33);

static void MR_CALL 
hlds__hlds_out__hlds_out_mode__mercury_format_structured_inst_list_7_p_0(
  MR_Word hlds__hlds_out__hlds_out_mode__TypeClassInfo_for_output_29,
  MR_Word hlds__hlds_out__hlds_out_mode__HeadVar__1_1,
  MR_Integer hlds__hlds_out__hlds_out_mode__Indent_2,
  MR_Word hlds__hlds_out__hlds_out_mode__Lang_3,
  MR_Word hlds__hlds_out__hlds_out_mode__InclAddr_4,
  MR_Word hlds__hlds_out__hlds_out_mode__InstVarSet_5,
  MR_Box hlds__hlds_out__hlds_out_mode__STATE_VARIABLE_U_0_6,
  MR_Box * hlds__hlds_out__hlds_out_mode__STATE_VARIABLE_U_7);

static void MR_CALL 
hlds__hlds_out__hlds_out_mode__mercury_format_structured_uni_mode_7_p_0(
  MR_Word hlds__hlds_out__hlds_out_mode__TypeClassInfo_for_output_56,
  MR_Word hlds__hlds_out__hlds_out_mode__UniMode_8,
  MR_Integer hlds__hlds_out__hlds_out_mode__Indent_9,
  MR_Word hlds__hlds_out__hlds_out_mode__Lang_10,
  MR_Word hlds__hlds_out__hlds_out_mode__InclAddr_11,
  MR_Word hlds__hlds_out__hlds_out_mode__InstVarSet_12,
  MR_Box hlds__hlds_out__hlds_out_mode__STATE_VARIABLE_U_0_22,
  MR_Box * hlds__hlds_out__hlds_out_mode__STATE_VARIABLE_U_23);

static void MR_CALL 
hlds__hlds_out__hlds_out_mode__mercury_format_structured_uni_mode_list_8_p_0(
  MR_Word hlds__hlds_out__hlds_out_mode__TypeClassInfo_for_output_37,
  MR_Word hlds__hlds_out__hlds_out_mode__HeadVar__1_1,
  MR_Integer hlds__hlds_out__hlds_out_mode__ArgNum_2,
  MR_Integer hlds__hlds_out__hlds_out_mode__Indent_3,
  MR_Word hlds__hlds_out__hlds_out_mode__Lang_4,
  MR_Word hlds__hlds_out__hlds_out_mode__InclAddr_5,
  MR_Word hlds__hlds_out__hlds_out_mode__InstVarSet_6,
  MR_Box hlds__hlds_out__hlds_out_mode__STATE_VARIABLE_U_0_7,
  MR_Box * hlds__hlds_out__hlds_out_mode__STATE_VARIABLE_U_8);


static /* final */ const MR_Box hlds__hlds_out__hlds_out_mode_scalar_common_1[2][2];

static /* final */ const MR_Box hlds__hlds_out__hlds_out_mode_scalar_common_2[1][1];




static /* final */ const MR_Box hlds__hlds_out__hlds_out_mode_scalar_common_1[2][2] = {
  /* row 0 */
  {
    ((MR_Box) (base_typeclass_info_parse_tree__parse_tree_out_info__output__arity1__io__state__arity0__)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0))
  },
  /* row 1 */
  {
    ((MR_Box) (base_typeclass_info_parse_tree__parse_tree_out_info__output__arity1__string__arity0__)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_string_0))
  },
};

static /* final */ const MR_Box hlds__hlds_out__hlds_out_mode_scalar_common_2[1][1] = {
  /* row 0 */
  {
    ((MR_Box) (((MR_Integer) 0 | (((((MR_Integer) 0 << (MR_Integer) 1)) | (((((MR_Integer) 0 << (MR_Integer) 2)) | (((((MR_Integer) 0 << (MR_Integer) 3)) | (((MR_Integer) 0 << (MR_Integer) 4)))))))))))
  },
};



#include "io.mh"
#include "string.mh"
#include "time.mh"
#include "mdbcomp.rtti_access.mh"
#include "hlds.hlds_out.hlds_out_mode.mh"



static const MR_EnumFunctorDesc hlds__hlds_out__hlds_out_mode__hlds__hlds_out__hlds_out_mode__enum_functor_desc_incl_addr_0_0 = {
  (MR_String) "do_not_incl_addr",
  (MR_Integer) 0
};

static const MR_EnumFunctorDesc hlds__hlds_out__hlds_out_mode__hlds__hlds_out__hlds_out_mode__enum_functor_desc_incl_addr_0_1 = {
  (MR_String) "do_incl_addr",
  (MR_Integer) 1
};

static const MR_EnumFunctorDescPtr hlds__hlds_out__hlds_out_mode__hlds__hlds_out__hlds_out_mode__enum_value_ordered_incl_addr_0[2] = {
  &hlds__hlds_out__hlds_out_mode__hlds__hlds_out__hlds_out_mode__enum_functor_desc_incl_addr_0_0,
  &hlds__hlds_out__hlds_out_mode__hlds__hlds_out__hlds_out_mode__enum_functor_desc_incl_addr_0_1
};

static const MR_EnumFunctorDescPtr hlds__hlds_out__hlds_out_mode__hlds__hlds_out__hlds_out_mode__enum_name_ordered_incl_addr_0[2] = {
  &hlds__hlds_out__hlds_out_mode__hlds__hlds_out__hlds_out_mode__enum_functor_desc_incl_addr_0_1,
  &hlds__hlds_out__hlds_out_mode__hlds__hlds_out__hlds_out_mode__enum_functor_desc_incl_addr_0_0
};

static const MR_Integer hlds__hlds_out__hlds_out_mode__hlds__hlds_out__hlds_out_mode__functor_number_map_incl_addr_0[2] = {
  (MR_Integer) 1,
  (MR_Integer) 0
};

const MR_TypeCtorInfo_Struct hlds__hlds_out__hlds_out_mode__hlds__hlds_out__hlds_out_mode__type_ctor_info_incl_addr_0 = {
  (MR_Integer) 0,
  (MR_Integer) 16,
  (MR_Integer) -1,
  mercury__private_builtin__MR_TYPECTOR_REP_ENUM,
  ((MR_Box) (hlds__hlds_out__hlds_out_mode____Unify____incl_addr_0_0_10001)),
  ((MR_Box) (hlds__hlds_out__hlds_out_mode____Compare____incl_addr_0_0_10001)),
  (MR_String) "hlds.hlds_out.hlds_out_mode",
  (MR_String) "incl_addr",
  {     hlds__hlds_out__hlds_out_mode__hlds__hlds_out__hlds_out_mode__enum_name_ordered_incl_addr_0 },
  {     hlds__hlds_out__hlds_out_mode__hlds__hlds_out__hlds_out_mode__enum_value_ordered_incl_addr_0 },
  (MR_Integer) 2,
  (MR_Integer) 4,
  hlds__hlds_out__hlds_out_mode__hlds__hlds_out__hlds_out_mode__functor_number_map_incl_addr_0
};

static MR_bool MR_CALL 
hlds__hlds_out__hlds_out_mode____Unify____incl_addr_0_0_10001(
  MR_Box hlds__hlds_out__hlds_out_mode__wrapper_arg_1,
  MR_Box hlds__hlds_out__hlds_out_mode__wrapper_arg_2)
{
  {
    MR_bool hlds__hlds_out__hlds_out_mode__succeeded;

    {
      hlds__hlds_out__hlds_out_mode__succeeded = hlds__hlds_out__hlds_out_mode____Unify____incl_addr_0_0(((MR_Word) hlds__hlds_out__hlds_out_mode__wrapper_arg_1), ((MR_Word) hlds__hlds_out__hlds_out_mode__wrapper_arg_2));
    }
    return hlds__hlds_out__hlds_out_mode__succeeded;
  }
}

static void MR_CALL 
hlds__hlds_out__hlds_out_mode____Compare____incl_addr_0_0_10001(
  MR_Box * hlds__hlds_out__hlds_out_mode__wrapper_arg_1,
  MR_Box hlds__hlds_out__hlds_out_mode__wrapper_arg_2,
  MR_Box hlds__hlds_out__hlds_out_mode__wrapper_arg_3)
{
  {
    MR_Word hlds__hlds_out__hlds_out_mode__conv0_HeadVar__1_1;

    {
      hlds__hlds_out__hlds_out_mode____Compare____incl_addr_0_0(&hlds__hlds_out__hlds_out_mode__conv0_HeadVar__1_1, ((MR_Word) hlds__hlds_out__hlds_out_mode__wrapper_arg_2), ((MR_Word) hlds__hlds_out__hlds_out_mode__wrapper_arg_3));
    }
    *hlds__hlds_out__hlds_out_mode__wrapper_arg_1 = ((MR_Box) (hlds__hlds_out__hlds_out_mode__conv0_HeadVar__1_1));
  }
}

void MR_CALL 
hlds__hlds_out__hlds_out_mode____Compare____incl_addr_0_0(
  MR_Word * hlds__hlds_out__hlds_out_mode__HeadVar__1_1,
  MR_Word hlds__hlds_out__hlds_out_mode__HeadVar__2_2,
  MR_Word hlds__hlds_out__hlds_out_mode__HeadVar__3_3)
{
  {
    MR_bool hlds__hlds_out__hlds_out_mode__succeeded;
    MR_Integer hlds__hlds_out__hlds_out_mode__Cast_HeadVar1_4 = (MR_Integer) hlds__hlds_out__hlds_out_mode__HeadVar__2_2;
    MR_Integer hlds__hlds_out__hlds_out_mode__Cast_HeadVar2_5 = (MR_Integer) hlds__hlds_out__hlds_out_mode__HeadVar__3_3;

    {
      mercury__private_builtin__builtin_compare_int_3_p_0(hlds__hlds_out__hlds_out_mode__HeadVar__1_1, hlds__hlds_out__hlds_out_mode__Cast_HeadVar1_4, hlds__hlds_out__hlds_out_mode__Cast_HeadVar2_5);
    }
  }
}

MR_bool MR_CALL 
hlds__hlds_out__hlds_out_mode____Unify____incl_addr_0_0(
  MR_Word hlds__hlds_out__hlds_out_mode__HeadVar__2_1,
  MR_Word hlds__hlds_out__hlds_out_mode__HeadVar__2_2)
{
  {
    MR_bool hlds__hlds_out__hlds_out_mode__succeeded = (hlds__hlds_out__hlds_out_mode__HeadVar__2_1 == hlds__hlds_out__hlds_out_mode__HeadVar__2_2);

    return hlds__hlds_out__hlds_out_mode__succeeded;
  }
}

static void MR_CALL 
hlds__hlds_out__hlds_out_mode__mercury_format_uni_mode_list_4_p_0(
  MR_Word hlds__hlds_out__hlds_out_mode__TypeClassInfo_for_output_21,
  MR_Word hlds__hlds_out__hlds_out_mode__HeadVar__1_1,
  MR_Word hlds__hlds_out__hlds_out_mode__HeadVar__2_2,
  MR_Box hlds__hlds_out__hlds_out_mode__STATE_VARIABLE_IO_0_3,
  MR_Box * hlds__hlds_out__hlds_out_mode__STATE_VARIABLE_IO_4)
{
  while (MR_TRUE)
    {
      /* tailcall optimized into a loop */
      {
        MR_bool hlds__hlds_out__hlds_out_mode__succeeded;

        if ((hlds__hlds_out__hlds_out_mode__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
          *hlds__hlds_out__hlds_out_mode__STATE_VARIABLE_IO_4 = hlds__hlds_out__hlds_out_mode__STATE_VARIABLE_IO_0_3;
        else
          {
            MR_Word hlds__hlds_out__hlds_out_mode__Mode_9 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__hlds_out__hlds_out_mode__HeadVar__1_1, (MR_Integer) 0)));
            MR_Word hlds__hlds_out__hlds_out_mode__Modes_10 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__hlds_out__hlds_out_mode__HeadVar__1_1, (MR_Integer) 1)));
            MR_Box hlds__hlds_out__hlds_out_mode__STATE_VARIABLE_IO_17_17;
            MR_Word hlds__hlds_out__hlds_out_mode__InstA1_27;
            MR_Word hlds__hlds_out__hlds_out_mode__InstB1_28;
            MR_Word hlds__hlds_out__hlds_out_mode__InstA2_29;
            MR_Word hlds__hlds_out__hlds_out_mode__InstB2_30;
            MR_Word hlds__hlds_out__hlds_out_mode__V_31_31 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_mode__Mode_9, (MR_Integer) 0)));
            MR_Word hlds__hlds_out__hlds_out_mode__V_32_32 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_mode__Mode_9, (MR_Integer) 1)));
            MR_Word hlds__hlds_out__hlds_out_mode__V_34_34;
            MR_Box hlds__hlds_out__hlds_out_mode__STATE_VARIABLE_IO_18_35;
            MR_Box hlds__hlds_out__hlds_out_mode__STATE_VARIABLE_IO_20_37;
            MR_Word hlds__hlds_out__hlds_out_mode__V_39_39;
            void MR_CALL (* hlds__hlds_out__hlds_out_mode__func_0)(MR_Box, MR_Box, MR_Box, MR_Box *);

            hlds__hlds_out__hlds_out_mode__InstA1_27 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_mode__V_31_31, (MR_Integer) 0)));
            hlds__hlds_out__hlds_out_mode__InstB1_28 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_mode__V_31_31, (MR_Integer) 1)));
            hlds__hlds_out__hlds_out_mode__InstA2_29 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_mode__V_32_32, (MR_Integer) 0)));
            hlds__hlds_out__hlds_out_mode__InstB2_30 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_mode__V_32_32, (MR_Integer) 1)));
            {
              hlds__hlds_out__hlds_out_mode__V_34_34 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
              MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_mode__V_34_34, 0) = ((MR_Box) (hlds__hlds_out__hlds_out_mode__InstA1_27));
              MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_mode__V_34_34, 1) = ((MR_Box) (hlds__hlds_out__hlds_out_mode__InstA2_29));
            }
            {
              parse_tree__parse_tree_out_inst__mercury_format_mode_5_p_0(hlds__hlds_out__hlds_out_mode__TypeClassInfo_for_output_21, (MR_Integer) 1, hlds__hlds_out__hlds_out_mode__HeadVar__2_2, hlds__hlds_out__hlds_out_mode__V_34_34, hlds__hlds_out__hlds_out_mode__STATE_VARIABLE_IO_0_3, &hlds__hlds_out__hlds_out_mode__STATE_VARIABLE_IO_18_35);
            }
            hlds__hlds_out__hlds_out_mode__func_0 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_mode__TypeClassInfo_for_output_21, (MR_Integer) 0)), (MR_Integer) 5)));
            {
              hlds__hlds_out__hlds_out_mode__func_0(((MR_Box) hlds__hlds_out__hlds_out_mode__TypeClassInfo_for_output_21), ((MR_Box) ((MR_String) " = ")), hlds__hlds_out__hlds_out_mode__STATE_VARIABLE_IO_18_35, &hlds__hlds_out__hlds_out_mode__STATE_VARIABLE_IO_20_37);
            }
            {
              hlds__hlds_out__hlds_out_mode__V_39_39 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
              MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_mode__V_39_39, 0) = ((MR_Box) (hlds__hlds_out__hlds_out_mode__InstB1_28));
              MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_mode__V_39_39, 1) = ((MR_Box) (hlds__hlds_out__hlds_out_mode__InstB2_30));
            }
            {
              parse_tree__parse_tree_out_inst__mercury_format_mode_5_p_0(hlds__hlds_out__hlds_out_mode__TypeClassInfo_for_output_21, (MR_Integer) 1, hlds__hlds_out__hlds_out_mode__HeadVar__2_2, hlds__hlds_out__hlds_out_mode__V_39_39, hlds__hlds_out__hlds_out_mode__STATE_VARIABLE_IO_20_37, &hlds__hlds_out__hlds_out_mode__STATE_VARIABLE_IO_17_17);
            }
            if ((hlds__hlds_out__hlds_out_mode__Modes_10 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
              *hlds__hlds_out__hlds_out_mode__STATE_VARIABLE_IO_4 = hlds__hlds_out__hlds_out_mode__STATE_VARIABLE_IO_17_17;
            else
              {
                MR_Box hlds__hlds_out__hlds_out_mode__STATE_VARIABLE_IO_19_19;
                void MR_CALL (* hlds__hlds_out__hlds_out_mode__func_1)(MR_Box, MR_Box, MR_Box, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_mode__TypeClassInfo_for_output_21, (MR_Integer) 0)), (MR_Integer) 5)));

                {
                  hlds__hlds_out__hlds_out_mode__func_1(((MR_Box) hlds__hlds_out__hlds_out_mode__TypeClassInfo_for_output_21), ((MR_Box) ((MR_String) ", ")), hlds__hlds_out__hlds_out_mode__STATE_VARIABLE_IO_17_17, &hlds__hlds_out__hlds_out_mode__STATE_VARIABLE_IO_19_19);
                }
                /* direct tailcall eliminated */
                {
                  MR_Word hlds__hlds_out__hlds_out_mode__HeadVar__1__tmp_copy_1 = hlds__hlds_out__hlds_out_mode__Modes_10;
                  MR_Box hlds__hlds_out__hlds_out_mode__STATE_VARIABLE_IO_0__tmp_copy_3 = hlds__hlds_out__hlds_out_mode__STATE_VARIABLE_IO_19_19;

                  hlds__hlds_out__hlds_out_mode__STATE_VARIABLE_IO_0_3 = hlds__hlds_out__hlds_out_mode__STATE_VARIABLE_IO_0__tmp_copy_3;
                  hlds__hlds_out__hlds_out_mode__HeadVar__1_1 = hlds__hlds_out__hlds_out_mode__HeadVar__1__tmp_copy_1;
                }
                continue;
              }
          }
      }
      break;
    }
}

static void MR_CALL 
hlds__hlds_out__hlds_out_mode__mercury_format_structured_inst_name_9_p_0(
  MR_Word hlds__hlds_out__hlds_out_mode__TypeClassInfo_for_output_168,
  MR_String hlds__hlds_out__hlds_out_mode__Suffix_10,
  MR_Word hlds__hlds_out__hlds_out_mode__InstName_11,
  MR_Word hlds__hlds_out__hlds_out_mode__FirstIndentPrinted_12,
  MR_Integer hlds__hlds_out__hlds_out_mode__Indent_13,
  MR_Word hlds__hlds_out__hlds_out_mode__Lang_14,
  MR_Word hlds__hlds_out__hlds_out_mode__InclAddr_15,
  MR_Word hlds__hlds_out__hlds_out_mode__InstVarSet_16,
  MR_Box hlds__hlds_out__hlds_out_mode__STATE_VARIABLE_U_0_31,
  MR_Box * hlds__hlds_out__hlds_out_mode__STATE_VARIABLE_U_32)
{
  {
    MR_bool hlds__hlds_out__hlds_out_mode__succeeded;
    MR_Box hlds__hlds_out__hlds_out_mode__STATE_VARIABLE_U_33_33;

    switch (hlds__hlds_out__hlds_out_mode__FirstIndentPrinted_12) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        {
          parse_tree__mercury_to_mercury__mercury_format_tabs_3_p_0(hlds__hlds_out__hlds_out_mode__TypeClassInfo_for_output_168, hlds__hlds_out__hlds_out_mode__Indent_13, hlds__hlds_out__hlds_out_mode__STATE_VARIABLE_U_0_31, &hlds__hlds_out__hlds_out_mode__STATE_VARIABLE_U_33_33);
        }
        break;
      case (MR_Integer) 1:
        hlds__hlds_out__hlds_out_mode__STATE_VARIABLE_U_33_33 = hlds__hlds_out__hlds_out_mode__STATE_VARIABLE_U_0_31;
        break;
    }
    switch (MR_tag((MR_Word) hlds__hlds_out__hlds_out_mode__InstName_11)) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        {
          MR_Word hlds__hlds_out__hlds_out_mode__Name_18 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_mode__InstName_11, (MR_Integer) 0)));
          MR_Word hlds__hlds_out__hlds_out_mode__Args_19 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_mode__InstName_11, (MR_Integer) 1)));
          MR_Box hlds__hlds_out__hlds_out_mode__STATE_VARIABLE_U_153_153;

          if ((hlds__hlds_out__hlds_out_mode__Args_19 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
            {
              parse_tree__mercury_to_mercury__mercury_format_bracketed_sym_name_3_p_0(hlds__hlds_out__hlds_out_mode__TypeClassInfo_for_output_168, hlds__hlds_out__hlds_out_mode__Name_18, hlds__hlds_out__hlds_out_mode__STATE_VARIABLE_U_33_33, &hlds__hlds_out__hlds_out_mode__STATE_VARIABLE_U_153_153);
            }
          else
            {
              MR_Box hlds__hlds_out__hlds_out_mode__STATE_VARIABLE_U_144_144;
              MR_Box hlds__hlds_out__hlds_out_mode__STATE_VARIABLE_U_146_146;
              MR_Integer hlds__hlds_out__hlds_out_mode__V_147_147;
              MR_Box hlds__hlds_out__hlds_out_mode__STATE_VARIABLE_U_148_148;
              MR_Box hlds__hlds_out__hlds_out_mode__STATE_VARIABLE_U_150_150;

              {
                parse_tree__mercury_to_mercury__mercury_format_sym_name_3_p_0(hlds__hlds_out__hlds_out_mode__TypeClassInfo_for_output_168, hlds__hlds_out__hlds_out_mode__Name_18, hlds__hlds_out__hlds_out_mode__STATE_VARIABLE_U_33_33, &hlds__hlds_out__hlds_out_mode__STATE_VARIABLE_U_144_144);
              }
              {
                parse_tree__parse_tree_out_info__add_string_3_p_0(hlds__hlds_out__hlds_out_mode__TypeClassInfo_for_output_168, (MR_String) "(\n", hlds__hlds_out__hlds_out_mode__STATE_VARIABLE_U_144_144, &hlds__hlds_out__hlds_out_mode__STATE_VARIABLE_U_146_146);
              }
              hlds__hlds_out__hlds_out_mode__V_147_147 = (hlds__hlds_out__hlds_out_mode__Indent_13 + (MR_Integer) 1);
              {
                hlds__hlds_out__hlds_out_mode__mercury_format_structured_inst_list_7_p_0(hlds__hlds_out__hlds_out_mode__TypeClassInfo_for_output_168, hlds__hlds_out__hlds_out_mode__Args_19, hlds__hlds_out__hlds_out_mode__V_147_147, hlds__hlds_out__hlds_out_mode__Lang_14, hlds__hlds_out__hlds_out_mode__InclAddr_15, hlds__hlds_out__hlds_out_mode__InstVarSet_16, hlds__hlds_out__hlds_out_mode__STATE_VARIABLE_U_146_146, &hlds__hlds_out__hlds_out_mode__STATE_VARIABLE_U_148_148);
              }
              {
                parse_tree__mercury_to_mercury__mercury_format_tabs_3_p_0(hlds__hlds_out__hlds_out_mode__TypeClassInfo_for_output_168, hlds__hlds_out__hlds_out_mode__Indent_13, hlds__hlds_out__hlds_out_mode__STATE_VARIABLE_U_148_148, &hlds__hlds_out__hlds_out_mode__STATE_VARIABLE_U_150_150);
              }
              {
                parse_tree__parse_tree_out_info__add_string_3_p_0(hlds__hlds_out__hlds_out_mode__TypeClassInfo_for_output_168, (MR_String) ")", hlds__hlds_out__hlds_out_mode__STATE_VARIABLE_U_150_150, &hlds__hlds_out__hlds_out_mode__STATE_VARIABLE_U_153_153);
              }
            }
          {
            parse_tree__parse_tree_out_info__add_string_3_p_0(hlds__hlds_out__hlds_out_mode__TypeClassInfo_for_output_168, hlds__hlds_out__hlds_out_mode__Suffix_10, hlds__hlds_out__hlds_out_mode__STATE_VARIABLE_U_153_153, hlds__hlds_out__hlds_out_mode__STATE_VARIABLE_U_32);
          }
        }
        break;
      case (MR_Integer) 1:
        {
          MR_Word hlds__hlds_out__hlds_out_mode__IsLive_22 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__hlds_out__hlds_out_mode__InstName_11, (MR_Integer) 0)));
          MR_Word hlds__hlds_out__hlds_out_mode__Real_23 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__hlds_out__hlds_out_mode__InstName_11, (MR_Integer) 1)));
          MR_Word hlds__hlds_out__hlds_out_mode__InstA_24 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__hlds_out__hlds_out_mode__InstName_11, (MR_Integer) 2)));
          MR_Word hlds__hlds_out__hlds_out_mode__InstB_25 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__hlds_out__hlds_out_mode__InstName_11, (MR_Integer) 3)));
          MR_Box hlds__hlds_out__hlds_out_mode__STATE_VARIABLE_U_129_129;
          MR_Box hlds__hlds_out__hlds_out_mode__STATE_VARIABLE_U_130_130;
          MR_Box hlds__hlds_out__hlds_out_mode__STATE_VARIABLE_U_131_131;
          MR_Box hlds__hlds_out__hlds_out_mode__STATE_VARIABLE_U_133_133;
          MR_Word hlds__hlds_out__hlds_out_mode__V_134_134;
          MR_Integer hlds__hlds_out__hlds_out_mode__V_135_135;
          MR_Box hlds__hlds_out__hlds_out_mode__STATE_VARIABLE_U_136_136;
          MR_Word hlds__hlds_out__hlds_out_mode__V_137_137;
          MR_Box hlds__hlds_out__hlds_out_mode__STATE_VARIABLE_U_140_140;
          MR_Box hlds__hlds_out__hlds_out_mode__STATE_VARIABLE_U_142_142;

          {
            parse_tree__parse_tree_out_info__add_string_3_p_0(hlds__hlds_out__hlds_out_mode__TypeClassInfo_for_output_168, (MR_String) "\044unify(", hlds__hlds_out__hlds_out_mode__STATE_VARIABLE_U_33_33, &hlds__hlds_out__hlds_out_mode__STATE_VARIABLE_U_129_129);
          }
          {
            parse_tree__parse_tree_out_inst__mercury_format_is_live_comma_3_p_0(hlds__hlds_out__hlds_out_mode__TypeClassInfo_for_output_168, hlds__hlds_out__hlds_out_mode__IsLive_22, hlds__hlds_out__hlds_out_mode__STATE_VARIABLE_U_129_129, &hlds__hlds_out__hlds_out_mode__STATE_VARIABLE_U_130_130);
          }
          {
            parse_tree__parse_tree_out_inst__mercury_format_real_comma_3_p_0(hlds__hlds_out__hlds_out_mode__TypeClassInfo_for_output_168, hlds__hlds_out__hlds_out_mode__Real_23, hlds__hlds_out__hlds_out_mode__STATE_VARIABLE_U_130_130, &hlds__hlds_out__hlds_out_mode__STATE_VARIABLE_U_131_131);
          }
          {
            parse_tree__parse_tree_out_info__add_string_3_p_0(hlds__hlds_out__hlds_out_mode__TypeClassInfo_for_output_168, (MR_String) "\n", hlds__hlds_out__hlds_out_mode__STATE_VARIABLE_U_131_131, &hlds__hlds_out__hlds_out_mode__STATE_VARIABLE_U_133_133);
          }
          {
            hlds__hlds_out__hlds_out_mode__V_137_137 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), hlds__hlds_out__hlds_out_mode__V_137_137, 0) = ((MR_Box) (hlds__hlds_out__hlds_out_mode__InstB_25));
            MR_hl_field(MR_mktag(1), hlds__hlds_out__hlds_out_mode__V_137_137, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
          }
          {
            hlds__hlds_out__hlds_out_mode__V_134_134 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), hlds__hlds_out__hlds_out_mode__V_134_134, 0) = ((MR_Box) (hlds__hlds_out__hlds_out_mode__InstA_24));
            MR_hl_field(MR_mktag(1), hlds__hlds_out__hlds_out_mode__V_134_134, 1) = ((MR_Box) (hlds__hlds_out__hlds_out_mode__V_137_137));
          }
          hlds__hlds_out__hlds_out_mode__V_135_135 = (hlds__hlds_out__hlds_out_mode__Indent_13 + (MR_Integer) 1);
          {
            hlds__hlds_out__hlds_out_mode__mercury_format_structured_inst_list_7_p_0(hlds__hlds_out__hlds_out_mode__TypeClassInfo_for_output_168, hlds__hlds_out__hlds_out_mode__V_134_134, hlds__hlds_out__hlds_out_mode__V_135_135, hlds__hlds_out__hlds_out_mode__Lang_14, hlds__hlds_out__hlds_out_mode__InclAddr_15, hlds__hlds_out__hlds_out_mode__InstVarSet_16, hlds__hlds_out__hlds_out_mode__STATE_VARIABLE_U_133_133, &hlds__hlds_out__hlds_out_mode__STATE_VARIABLE_U_136_136);
          }
          {
            parse_tree__mercury_to_mercury__mercury_format_tabs_3_p_0(hlds__hlds_out__hlds_out_mode__TypeClassInfo_for_output_168, hlds__hlds_out__hlds_out_mode__Indent_13, hlds__hlds_out__hlds_out_mode__STATE_VARIABLE_U_136_136, &hlds__hlds_out__hlds_out_mode__STATE_VARIABLE_U_140_140);
          }
          {
            parse_tree__parse_tree_out_info__add_string_3_p_0(hlds__hlds_out__hlds_out_mode__TypeClassInfo_for_output_168, (MR_String) ")", hlds__hlds_out__hlds_out_mode__STATE_VARIABLE_U_140_140, &hlds__hlds_out__hlds_out_mode__STATE_VARIABLE_U_142_142);
          }
          {
            parse_tree__parse_tree_out_info__add_string_3_p_0(hlds__hlds_out__hlds_out_mode__TypeClassInfo_for_output_168, hlds__hlds_out__hlds_out_mode__Suffix_10, hlds__hlds_out__hlds_out_mode__STATE_VARIABLE_U_142_142, hlds__hlds_out__hlds_out_mode__STATE_VARIABLE_U_32);
          }
        }
        break;
      case (MR_Integer) 2:
        {
          MR_Box hlds__hlds_out__hlds_out_mode__STATE_VARIABLE_U_117_117;
          MR_Integer hlds__hlds_out__hlds_out_mode__V_119_119;
          MR_Box hlds__hlds_out__hlds_out_mode__STATE_VARIABLE_U_120_120;
          MR_Box hlds__hlds_out__hlds_out_mode__STATE_VARIABLE_U_124_124;
          MR_Box hlds__hlds_out__hlds_out_mode__STATE_VARIABLE_U_126_126;
          MR_Word hlds__hlds_out__hlds_out_mode__InstB_156 = ((MR_Word) (MR_hl_field(MR_mktag(2), hlds__hlds_out__hlds_out_mode__InstName_11, (MR_Integer) 1)));
          MR_Word hlds__hlds_out__hlds_out_mode__Inst_178 = ((MR_Word) (MR_hl_field(MR_mktag(2), hlds__hlds_out__hlds_out_mode__InstName_11, (MR_Integer) 0)));
          MR_Word hlds__hlds_out__hlds_out_mode__Insts_179;
          MR_Box hlds__hlds_out__hlds_out_mode__STATE_VARIABLE_U_27_190;
          MR_Word hlds__hlds_out__hlds_out_mode__Inst_199;
          MR_Word hlds__hlds_out__hlds_out_mode__Insts_200;
          MR_Box hlds__hlds_out__hlds_out_mode__STATE_VARIABLE_U_27_211;

          {
            parse_tree__parse_tree_out_info__add_string_3_p_0(hlds__hlds_out__hlds_out_mode__TypeClassInfo_for_output_168, (MR_String) "\044merge_inst(\n", hlds__hlds_out__hlds_out_mode__STATE_VARIABLE_U_33_33, &hlds__hlds_out__hlds_out_mode__STATE_VARIABLE_U_117_117);
          }
          {
            hlds__hlds_out__hlds_out_mode__Insts_179 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), hlds__hlds_out__hlds_out_mode__Insts_179, 0) = ((MR_Box) (hlds__hlds_out__hlds_out_mode__InstB_156));
            MR_hl_field(MR_mktag(1), hlds__hlds_out__hlds_out_mode__Insts_179, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
          }
          hlds__hlds_out__hlds_out_mode__V_119_119 = (hlds__hlds_out__hlds_out_mode__Indent_13 + (MR_Integer) 1);
          {
            hlds__hlds_out__hlds_out_mode__mercury_format_structured_inst_8_p_0(hlds__hlds_out__hlds_out_mode__TypeClassInfo_for_output_168, (MR_String) ",\n", hlds__hlds_out__hlds_out_mode__Inst_178, hlds__hlds_out__hlds_out_mode__V_119_119, hlds__hlds_out__hlds_out_mode__Lang_14, hlds__hlds_out__hlds_out_mode__InclAddr_15, hlds__hlds_out__hlds_out_mode__InstVarSet_16, hlds__hlds_out__hlds_out_mode__STATE_VARIABLE_U_117_117, &hlds__hlds_out__hlds_out_mode__STATE_VARIABLE_U_27_190);
          }
          hlds__hlds_out__hlds_out_mode__Inst_199 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__hlds_out__hlds_out_mode__Insts_179, (MR_Integer) 0)));
          hlds__hlds_out__hlds_out_mode__Insts_200 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__hlds_out__hlds_out_mode__Insts_179, (MR_Integer) 1)));
          {
            hlds__hlds_out__hlds_out_mode__mercury_format_structured_inst_8_p_0(hlds__hlds_out__hlds_out_mode__TypeClassInfo_for_output_168, (MR_String) "\n", hlds__hlds_out__hlds_out_mode__Inst_199, hlds__hlds_out__hlds_out_mode__V_119_119, hlds__hlds_out__hlds_out_mode__Lang_14, hlds__hlds_out__hlds_out_mode__InclAddr_15, hlds__hlds_out__hlds_out_mode__InstVarSet_16, hlds__hlds_out__hlds_out_mode__STATE_VARIABLE_U_27_190, &hlds__hlds_out__hlds_out_mode__STATE_VARIABLE_U_27_211);
          }
          {
            hlds__hlds_out__hlds_out_mode__mercury_format_structured_inst_list_7_p_0(hlds__hlds_out__hlds_out_mode__TypeClassInfo_for_output_168, hlds__hlds_out__hlds_out_mode__Insts_200, hlds__hlds_out__hlds_out_mode__V_119_119, hlds__hlds_out__hlds_out_mode__Lang_14, hlds__hlds_out__hlds_out_mode__InclAddr_15, hlds__hlds_out__hlds_out_mode__InstVarSet_16, hlds__hlds_out__hlds_out_mode__STATE_VARIABLE_U_27_211, &hlds__hlds_out__hlds_out_mode__STATE_VARIABLE_U_120_120);
          }
          {
            parse_tree__mercury_to_mercury__mercury_format_tabs_3_p_0(hlds__hlds_out__hlds_out_mode__TypeClassInfo_for_output_168, hlds__hlds_out__hlds_out_mode__Indent_13, hlds__hlds_out__hlds_out_mode__STATE_VARIABLE_U_120_120, &hlds__hlds_out__hlds_out_mode__STATE_VARIABLE_U_124_124);
          }
          {
            parse_tree__parse_tree_out_info__add_string_3_p_0(hlds__hlds_out__hlds_out_mode__TypeClassInfo_for_output_168, (MR_String) ")", hlds__hlds_out__hlds_out_mode__STATE_VARIABLE_U_124_124, &hlds__hlds_out__hlds_out_mode__STATE_VARIABLE_U_126_126);
          }
          {
            parse_tree__parse_tree_out_info__add_string_3_p_0(hlds__hlds_out__hlds_out_mode__TypeClassInfo_for_output_168, hlds__hlds_out__hlds_out_mode__Suffix_10, hlds__hlds_out__hlds_out_mode__STATE_VARIABLE_U_126_126, hlds__hlds_out__hlds_out_mode__STATE_VARIABLE_U_32);
          }
        }
        break;
      case (MR_Integer) 3:
        switch (((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), hlds__hlds_out__hlds_out_mode__InstName_11, (MR_Integer) 0)))) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
            {
              MR_Word hlds__hlds_out__hlds_out_mode__SubInstName_26 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__hlds_out__hlds_out_mode__InstName_11, (MR_Integer) 1)));
              MR_Word hlds__hlds_out__hlds_out_mode__Uniq_27 = ((((MR_Word) (MR_hl_field(MR_mktag(3), hlds__hlds_out__hlds_out_mode__InstName_11, (MR_Integer) 2)))) & (MR_Integer) 7);
              MR_Box hlds__hlds_out__hlds_out_mode__STATE_VARIABLE_U_100_100;
              MR_Box hlds__hlds_out__hlds_out_mode__STATE_VARIABLE_U_101_101;
              MR_Box hlds__hlds_out__hlds_out_mode__STATE_VARIABLE_U_102_102;
              MR_Box hlds__hlds_out__hlds_out_mode__STATE_VARIABLE_U_104_104;
              MR_Box hlds__hlds_out__hlds_out_mode__STATE_VARIABLE_U_106_106;
              MR_Integer hlds__hlds_out__hlds_out_mode__V_109_109;
              MR_Box hlds__hlds_out__hlds_out_mode__STATE_VARIABLE_U_110_110;
              MR_Box hlds__hlds_out__hlds_out_mode__STATE_VARIABLE_U_112_112;
              MR_Box hlds__hlds_out__hlds_out_mode__STATE_VARIABLE_U_114_114;
              MR_Word hlds__hlds_out__hlds_out_mode__IsLive_157 = ((((((MR_Word) (MR_hl_field(MR_mktag(3), hlds__hlds_out__hlds_out_mode__InstName_11, (MR_Integer) 2)))) >> (MR_Integer) 3)) & (MR_Integer) 1);
              MR_Word hlds__hlds_out__hlds_out_mode__Real_158 = ((((((MR_Word) (MR_hl_field(MR_mktag(3), hlds__hlds_out__hlds_out_mode__InstName_11, (MR_Integer) 2)))) >> (MR_Integer) 4)) & (MR_Integer) 1);

              {
                parse_tree__parse_tree_out_info__add_string_3_p_0(hlds__hlds_out__hlds_out_mode__TypeClassInfo_for_output_168, (MR_String) "\044ground(", hlds__hlds_out__hlds_out_mode__STATE_VARIABLE_U_33_33, &hlds__hlds_out__hlds_out_mode__STATE_VARIABLE_U_100_100);
              }
              {
                parse_tree__parse_tree_out_inst__mercury_format_is_live_comma_3_p_0(hlds__hlds_out__hlds_out_mode__TypeClassInfo_for_output_168, hlds__hlds_out__hlds_out_mode__IsLive_157, hlds__hlds_out__hlds_out_mode__STATE_VARIABLE_U_100_100, &hlds__hlds_out__hlds_out_mode__STATE_VARIABLE_U_101_101);
              }
              {
                parse_tree__parse_tree_out_inst__mercury_format_real_comma_3_p_0(hlds__hlds_out__hlds_out_mode__TypeClassInfo_for_output_168, hlds__hlds_out__hlds_out_mode__Real_158, hlds__hlds_out__hlds_out_mode__STATE_VARIABLE_U_101_101, &hlds__hlds_out__hlds_out_mode__STATE_VARIABLE_U_102_102);
              }
              {
                parse_tree__parse_tree_out_inst__mercury_format_uniqueness_4_p_0(hlds__hlds_out__hlds_out_mode__TypeClassInfo_for_output_168, hlds__hlds_out__hlds_out_mode__Uniq_27, (MR_String) "shared", hlds__hlds_out__hlds_out_mode__STATE_VARIABLE_U_102_102, &hlds__hlds_out__hlds_out_mode__STATE_VARIABLE_U_104_104);
              }
              {
                parse_tree__parse_tree_out_info__add_string_3_p_0(hlds__hlds_out__hlds_out_mode__TypeClassInfo_for_output_168, (MR_String) ",\n", hlds__hlds_out__hlds_out_mode__STATE_VARIABLE_U_104_104, &hlds__hlds_out__hlds_out_mode__STATE_VARIABLE_U_106_106);
              }
              hlds__hlds_out__hlds_out_mode__V_109_109 = (hlds__hlds_out__hlds_out_mode__Indent_13 + (MR_Integer) 1);
              {
                hlds__hlds_out__hlds_out_mode__mercury_format_structured_inst_name_9_p_0(hlds__hlds_out__hlds_out_mode__TypeClassInfo_for_output_168, (MR_String) "\n", hlds__hlds_out__hlds_out_mode__SubInstName_26, (MR_Integer) 0, hlds__hlds_out__hlds_out_mode__V_109_109, hlds__hlds_out__hlds_out_mode__Lang_14, hlds__hlds_out__hlds_out_mode__InclAddr_15, hlds__hlds_out__hlds_out_mode__InstVarSet_16, hlds__hlds_out__hlds_out_mode__STATE_VARIABLE_U_106_106, &hlds__hlds_out__hlds_out_mode__STATE_VARIABLE_U_110_110);
              }
              {
                parse_tree__mercury_to_mercury__mercury_format_tabs_3_p_0(hlds__hlds_out__hlds_out_mode__TypeClassInfo_for_output_168, hlds__hlds_out__hlds_out_mode__Indent_13, hlds__hlds_out__hlds_out_mode__STATE_VARIABLE_U_110_110, &hlds__hlds_out__hlds_out_mode__STATE_VARIABLE_U_112_112);
              }
              {
                parse_tree__parse_tree_out_info__add_string_3_p_0(hlds__hlds_out__hlds_out_mode__TypeClassInfo_for_output_168, (MR_String) ")", hlds__hlds_out__hlds_out_mode__STATE_VARIABLE_U_112_112, &hlds__hlds_out__hlds_out_mode__STATE_VARIABLE_U_114_114);
              }
              {
                parse_tree__parse_tree_out_info__add_string_3_p_0(hlds__hlds_out__hlds_out_mode__TypeClassInfo_for_output_168, hlds__hlds_out__hlds_out_mode__Suffix_10, hlds__hlds_out__hlds_out_mode__STATE_VARIABLE_U_114_114, hlds__hlds_out__hlds_out_mode__STATE_VARIABLE_U_32);
              }
            }
            break;
          case (MR_Integer) 1:
            {
              MR_Box hlds__hlds_out__hlds_out_mode__STATE_VARIABLE_U_83_83;
              MR_Box hlds__hlds_out__hlds_out_mode__STATE_VARIABLE_U_84_84;
              MR_Box hlds__hlds_out__hlds_out_mode__STATE_VARIABLE_U_85_85;
              MR_Box hlds__hlds_out__hlds_out_mode__STATE_VARIABLE_U_87_87;
              MR_Box hlds__hlds_out__hlds_out_mode__STATE_VARIABLE_U_89_89;
              MR_Integer hlds__hlds_out__hlds_out_mode__V_92_92;
              MR_Box hlds__hlds_out__hlds_out_mode__STATE_VARIABLE_U_93_93;
              MR_Box hlds__hlds_out__hlds_out_mode__STATE_VARIABLE_U_95_95;
              MR_Box hlds__hlds_out__hlds_out_mode__STATE_VARIABLE_U_97_97;
              MR_Word hlds__hlds_out__hlds_out_mode__IsLive_159 = ((((((MR_Word) (MR_hl_field(MR_mktag(3), hlds__hlds_out__hlds_out_mode__InstName_11, (MR_Integer) 2)))) >> (MR_Integer) 3)) & (MR_Integer) 1);
              MR_Word hlds__hlds_out__hlds_out_mode__Real_160 = ((((((MR_Word) (MR_hl_field(MR_mktag(3), hlds__hlds_out__hlds_out_mode__InstName_11, (MR_Integer) 2)))) >> (MR_Integer) 4)) & (MR_Integer) 1);
              MR_Word hlds__hlds_out__hlds_out_mode__SubInstName_161 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__hlds_out__hlds_out_mode__InstName_11, (MR_Integer) 1)));
              MR_Word hlds__hlds_out__hlds_out_mode__Uniq_162 = ((((MR_Word) (MR_hl_field(MR_mktag(3), hlds__hlds_out__hlds_out_mode__InstName_11, (MR_Integer) 2)))) & (MR_Integer) 7);

              {
                parse_tree__parse_tree_out_info__add_string_3_p_0(hlds__hlds_out__hlds_out_mode__TypeClassInfo_for_output_168, (MR_String) "\044any(", hlds__hlds_out__hlds_out_mode__STATE_VARIABLE_U_33_33, &hlds__hlds_out__hlds_out_mode__STATE_VARIABLE_U_83_83);
              }
              {
                parse_tree__parse_tree_out_inst__mercury_format_is_live_comma_3_p_0(hlds__hlds_out__hlds_out_mode__TypeClassInfo_for_output_168, hlds__hlds_out__hlds_out_mode__IsLive_159, hlds__hlds_out__hlds_out_mode__STATE_VARIABLE_U_83_83, &hlds__hlds_out__hlds_out_mode__STATE_VARIABLE_U_84_84);
              }
              {
                parse_tree__parse_tree_out_inst__mercury_format_real_comma_3_p_0(hlds__hlds_out__hlds_out_mode__TypeClassInfo_for_output_168, hlds__hlds_out__hlds_out_mode__Real_160, hlds__hlds_out__hlds_out_mode__STATE_VARIABLE_U_84_84, &hlds__hlds_out__hlds_out_mode__STATE_VARIABLE_U_85_85);
              }
              {
                parse_tree__parse_tree_out_inst__mercury_format_uniqueness_4_p_0(hlds__hlds_out__hlds_out_mode__TypeClassInfo_for_output_168, hlds__hlds_out__hlds_out_mode__Uniq_162, (MR_String) "shared", hlds__hlds_out__hlds_out_mode__STATE_VARIABLE_U_85_85, &hlds__hlds_out__hlds_out_mode__STATE_VARIABLE_U_87_87);
              }
              {
                parse_tree__parse_tree_out_info__add_string_3_p_0(hlds__hlds_out__hlds_out_mode__TypeClassInfo_for_output_168, (MR_String) ",\n", hlds__hlds_out__hlds_out_mode__STATE_VARIABLE_U_87_87, &hlds__hlds_out__hlds_out_mode__STATE_VARIABLE_U_89_89);
              }
              hlds__hlds_out__hlds_out_mode__V_92_92 = (hlds__hlds_out__hlds_out_mode__Indent_13 + (MR_Integer) 1);
              {
                hlds__hlds_out__hlds_out_mode__mercury_format_structured_inst_name_9_p_0(hlds__hlds_out__hlds_out_mode__TypeClassInfo_for_output_168, (MR_String) "\n", hlds__hlds_out__hlds_out_mode__SubInstName_161, (MR_Integer) 0, hlds__hlds_out__hlds_out_mode__V_92_92, hlds__hlds_out__hlds_out_mode__Lang_14, hlds__hlds_out__hlds_out_mode__InclAddr_15, hlds__hlds_out__hlds_out_mode__InstVarSet_16, hlds__hlds_out__hlds_out_mode__STATE_VARIABLE_U_89_89, &hlds__hlds_out__hlds_out_mode__STATE_VARIABLE_U_93_93);
              }
              {
                parse_tree__mercury_to_mercury__mercury_format_tabs_3_p_0(hlds__hlds_out__hlds_out_mode__TypeClassInfo_for_output_168, hlds__hlds_out__hlds_out_mode__Indent_13, hlds__hlds_out__hlds_out_mode__STATE_VARIABLE_U_93_93, &hlds__hlds_out__hlds_out_mode__STATE_VARIABLE_U_95_95);
              }
              {
                parse_tree__parse_tree_out_info__add_string_3_p_0(hlds__hlds_out__hlds_out_mode__TypeClassInfo_for_output_168, (MR_String) ")", hlds__hlds_out__hlds_out_mode__STATE_VARIABLE_U_95_95, &hlds__hlds_out__hlds_out_mode__STATE_VARIABLE_U_97_97);
              }
              {
                parse_tree__parse_tree_out_info__add_string_3_p_0(hlds__hlds_out__hlds_out_mode__TypeClassInfo_for_output_168, hlds__hlds_out__hlds_out_mode__Suffix_10, hlds__hlds_out__hlds_out_mode__STATE_VARIABLE_U_97_97, hlds__hlds_out__hlds_out_mode__STATE_VARIABLE_U_32);
              }
            }
            break;
          case (MR_Integer) 2:
            {
              MR_Box hlds__hlds_out__hlds_out_mode__STATE_VARIABLE_U_72_72;
              MR_Integer hlds__hlds_out__hlds_out_mode__V_75_75;
              MR_Box hlds__hlds_out__hlds_out_mode__STATE_VARIABLE_U_76_76;
              MR_Box hlds__hlds_out__hlds_out_mode__STATE_VARIABLE_U_78_78;
              MR_Box hlds__hlds_out__hlds_out_mode__STATE_VARIABLE_U_80_80;
              MR_Word hlds__hlds_out__hlds_out_mode__SubInstName_163 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__hlds_out__hlds_out_mode__InstName_11, (MR_Integer) 1)));

              {
                parse_tree__parse_tree_out_info__add_string_3_p_0(hlds__hlds_out__hlds_out_mode__TypeClassInfo_for_output_168, (MR_String) "\044shared_inst(\n", hlds__hlds_out__hlds_out_mode__STATE_VARIABLE_U_33_33, &hlds__hlds_out__hlds_out_mode__STATE_VARIABLE_U_72_72);
              }
              hlds__hlds_out__hlds_out_mode__V_75_75 = (hlds__hlds_out__hlds_out_mode__Indent_13 + (MR_Integer) 1);
              {
                hlds__hlds_out__hlds_out_mode__mercury_format_structured_inst_name_9_p_0(hlds__hlds_out__hlds_out_mode__TypeClassInfo_for_output_168, (MR_String) "\n", hlds__hlds_out__hlds_out_mode__SubInstName_163, (MR_Integer) 0, hlds__hlds_out__hlds_out_mode__V_75_75, hlds__hlds_out__hlds_out_mode__Lang_14, hlds__hlds_out__hlds_out_mode__InclAddr_15, hlds__hlds_out__hlds_out_mode__InstVarSet_16, hlds__hlds_out__hlds_out_mode__STATE_VARIABLE_U_72_72, &hlds__hlds_out__hlds_out_mode__STATE_VARIABLE_U_76_76);
              }
              {
                parse_tree__mercury_to_mercury__mercury_format_tabs_3_p_0(hlds__hlds_out__hlds_out_mode__TypeClassInfo_for_output_168, hlds__hlds_out__hlds_out_mode__Indent_13, hlds__hlds_out__hlds_out_mode__STATE_VARIABLE_U_76_76, &hlds__hlds_out__hlds_out_mode__STATE_VARIABLE_U_78_78);
              }
              {
                parse_tree__parse_tree_out_info__add_string_3_p_0(hlds__hlds_out__hlds_out_mode__TypeClassInfo_for_output_168, (MR_String) ")", hlds__hlds_out__hlds_out_mode__STATE_VARIABLE_U_78_78, &hlds__hlds_out__hlds_out_mode__STATE_VARIABLE_U_80_80);
              }
              {
                parse_tree__parse_tree_out_info__add_string_3_p_0(hlds__hlds_out__hlds_out_mode__TypeClassInfo_for_output_168, hlds__hlds_out__hlds_out_mode__Suffix_10, hlds__hlds_out__hlds_out_mode__STATE_VARIABLE_U_80_80, hlds__hlds_out__hlds_out_mode__STATE_VARIABLE_U_32);
              }
            }
            break;
          case (MR_Integer) 3:
            {
              MR_Box hlds__hlds_out__hlds_out_mode__STATE_VARIABLE_U_61_61;
              MR_Integer hlds__hlds_out__hlds_out_mode__V_64_64;
              MR_Box hlds__hlds_out__hlds_out_mode__STATE_VARIABLE_U_65_65;
              MR_Box hlds__hlds_out__hlds_out_mode__STATE_VARIABLE_U_67_67;
              MR_Box hlds__hlds_out__hlds_out_mode__STATE_VARIABLE_U_69_69;
              MR_Word hlds__hlds_out__hlds_out_mode__SubInstName_164 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__hlds_out__hlds_out_mode__InstName_11, (MR_Integer) 1)));

              {
                parse_tree__parse_tree_out_info__add_string_3_p_0(hlds__hlds_out__hlds_out_mode__TypeClassInfo_for_output_168, (MR_String) "\044mostly_uniq_inst(\n", hlds__hlds_out__hlds_out_mode__STATE_VARIABLE_U_33_33, &hlds__hlds_out__hlds_out_mode__STATE_VARIABLE_U_61_61);
              }
              hlds__hlds_out__hlds_out_mode__V_64_64 = (hlds__hlds_out__hlds_out_mode__Indent_13 + (MR_Integer) 1);
              {
                hlds__hlds_out__hlds_out_mode__mercury_format_structured_inst_name_9_p_0(hlds__hlds_out__hlds_out_mode__TypeClassInfo_for_output_168, (MR_String) "\n", hlds__hlds_out__hlds_out_mode__SubInstName_164, (MR_Integer) 0, hlds__hlds_out__hlds_out_mode__V_64_64, hlds__hlds_out__hlds_out_mode__Lang_14, hlds__hlds_out__hlds_out_mode__InclAddr_15, hlds__hlds_out__hlds_out_mode__InstVarSet_16, hlds__hlds_out__hlds_out_mode__STATE_VARIABLE_U_61_61, &hlds__hlds_out__hlds_out_mode__STATE_VARIABLE_U_65_65);
              }
              {
                parse_tree__mercury_to_mercury__mercury_format_tabs_3_p_0(hlds__hlds_out__hlds_out_mode__TypeClassInfo_for_output_168, hlds__hlds_out__hlds_out_mode__Indent_13, hlds__hlds_out__hlds_out_mode__STATE_VARIABLE_U_65_65, &hlds__hlds_out__hlds_out_mode__STATE_VARIABLE_U_67_67);
              }
              {
                parse_tree__parse_tree_out_info__add_string_3_p_0(hlds__hlds_out__hlds_out_mode__TypeClassInfo_for_output_168, (MR_String) ")", hlds__hlds_out__hlds_out_mode__STATE_VARIABLE_U_67_67, &hlds__hlds_out__hlds_out_mode__STATE_VARIABLE_U_69_69);
              }
              {
                parse_tree__parse_tree_out_info__add_string_3_p_0(hlds__hlds_out__hlds_out_mode__TypeClassInfo_for_output_168, hlds__hlds_out__hlds_out_mode__Suffix_10, hlds__hlds_out__hlds_out_mode__STATE_VARIABLE_U_69_69, hlds__hlds_out__hlds_out_mode__STATE_VARIABLE_U_32);
              }
            }
            break;
          case (MR_Integer) 4:
            {
              MR_Word hlds__hlds_out__hlds_out_mode__Uniqueness_28 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__hlds_out__hlds_out_mode__InstName_11, (MR_Integer) 1)));
              MR_Word hlds__hlds_out__hlds_out_mode__Type_29 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__hlds_out__hlds_out_mode__InstName_11, (MR_Integer) 2)));
              MR_Word hlds__hlds_out__hlds_out_mode__TypeVarSet_30;
              MR_Box hlds__hlds_out__hlds_out_mode__STATE_VARIABLE_U_50_50;
              MR_Box hlds__hlds_out__hlds_out_mode__STATE_VARIABLE_U_52_52;
              MR_Box hlds__hlds_out__hlds_out_mode__STATE_VARIABLE_U_54_54;
              MR_Box hlds__hlds_out__hlds_out_mode__STATE_VARIABLE_U_56_56;
              MR_Box hlds__hlds_out__hlds_out_mode__STATE_VARIABLE_U_58_58;

              {
                parse_tree__parse_tree_out_info__add_string_3_p_0(hlds__hlds_out__hlds_out_mode__TypeClassInfo_for_output_168, (MR_String) "\044typed_ground(", hlds__hlds_out__hlds_out_mode__STATE_VARIABLE_U_33_33, &hlds__hlds_out__hlds_out_mode__STATE_VARIABLE_U_50_50);
              }
              {
                parse_tree__parse_tree_out_inst__mercury_format_uniqueness_4_p_0(hlds__hlds_out__hlds_out_mode__TypeClassInfo_for_output_168, hlds__hlds_out__hlds_out_mode__Uniqueness_28, (MR_String) "shared", hlds__hlds_out__hlds_out_mode__STATE_VARIABLE_U_50_50, &hlds__hlds_out__hlds_out_mode__STATE_VARIABLE_U_52_52);
              }
              {
                parse_tree__parse_tree_out_info__add_string_3_p_0(hlds__hlds_out__hlds_out_mode__TypeClassInfo_for_output_168, (MR_String) ", ", hlds__hlds_out__hlds_out_mode__STATE_VARIABLE_U_52_52, &hlds__hlds_out__hlds_out_mode__STATE_VARIABLE_U_54_54);
              }
              {
                mercury__varset__init_1_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_tvar_type_0, &hlds__hlds_out__hlds_out_mode__TypeVarSet_30);
              }
              {
                parse_tree__mercury_to_mercury__mercury_format_type_5_p_0(hlds__hlds_out__hlds_out_mode__TypeClassInfo_for_output_168, hlds__hlds_out__hlds_out_mode__TypeVarSet_30, (MR_Integer) 0, hlds__hlds_out__hlds_out_mode__Type_29, hlds__hlds_out__hlds_out_mode__STATE_VARIABLE_U_54_54, &hlds__hlds_out__hlds_out_mode__STATE_VARIABLE_U_56_56);
              }
              {
                parse_tree__parse_tree_out_info__add_string_3_p_0(hlds__hlds_out__hlds_out_mode__TypeClassInfo_for_output_168, (MR_String) ")", hlds__hlds_out__hlds_out_mode__STATE_VARIABLE_U_56_56, &hlds__hlds_out__hlds_out_mode__STATE_VARIABLE_U_58_58);
              }
              {
                parse_tree__parse_tree_out_info__add_string_3_p_0(hlds__hlds_out__hlds_out_mode__TypeClassInfo_for_output_168, hlds__hlds_out__hlds_out_mode__Suffix_10, hlds__hlds_out__hlds_out_mode__STATE_VARIABLE_U_58_58, hlds__hlds_out__hlds_out_mode__STATE_VARIABLE_U_32);
              }
            }
            break;
          case (MR_Integer) 5:
            {
              MR_Box hlds__hlds_out__hlds_out_mode__STATE_VARIABLE_U_35_35;
              MR_Box hlds__hlds_out__hlds_out_mode__STATE_VARIABLE_U_37_37;
              MR_Box hlds__hlds_out__hlds_out_mode__STATE_VARIABLE_U_39_39;
              MR_Integer hlds__hlds_out__hlds_out_mode__V_42_42;
              MR_Box hlds__hlds_out__hlds_out_mode__STATE_VARIABLE_U_43_43;
              MR_Box hlds__hlds_out__hlds_out_mode__STATE_VARIABLE_U_45_45;
              MR_Box hlds__hlds_out__hlds_out_mode__STATE_VARIABLE_U_47_47;
              MR_Word hlds__hlds_out__hlds_out_mode__SubInstName_165 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__hlds_out__hlds_out_mode__InstName_11, (MR_Integer) 2)));
              MR_Word hlds__hlds_out__hlds_out_mode__Type_166 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__hlds_out__hlds_out_mode__InstName_11, (MR_Integer) 1)));
              MR_Word hlds__hlds_out__hlds_out_mode__TypeVarSet_167;

              {
                parse_tree__parse_tree_out_info__add_string_3_p_0(hlds__hlds_out__hlds_out_mode__TypeClassInfo_for_output_168, (MR_String) "\044typed_inst(", hlds__hlds_out__hlds_out_mode__STATE_VARIABLE_U_33_33, &hlds__hlds_out__hlds_out_mode__STATE_VARIABLE_U_35_35);
              }
              {
                mercury__varset__init_1_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_tvar_type_0, &hlds__hlds_out__hlds_out_mode__TypeVarSet_167);
              }
              {
                parse_tree__mercury_to_mercury__mercury_format_type_5_p_0(hlds__hlds_out__hlds_out_mode__TypeClassInfo_for_output_168, hlds__hlds_out__hlds_out_mode__TypeVarSet_167, (MR_Integer) 0, hlds__hlds_out__hlds_out_mode__Type_166, hlds__hlds_out__hlds_out_mode__STATE_VARIABLE_U_35_35, &hlds__hlds_out__hlds_out_mode__STATE_VARIABLE_U_37_37);
              }
              {
                parse_tree__parse_tree_out_info__add_string_3_p_0(hlds__hlds_out__hlds_out_mode__TypeClassInfo_for_output_168, (MR_String) ",\n", hlds__hlds_out__hlds_out_mode__STATE_VARIABLE_U_37_37, &hlds__hlds_out__hlds_out_mode__STATE_VARIABLE_U_39_39);
              }
              hlds__hlds_out__hlds_out_mode__V_42_42 = (hlds__hlds_out__hlds_out_mode__Indent_13 + (MR_Integer) 1);
              {
                hlds__hlds_out__hlds_out_mode__mercury_format_structured_inst_name_9_p_0(hlds__hlds_out__hlds_out_mode__TypeClassInfo_for_output_168, (MR_String) "\n", hlds__hlds_out__hlds_out_mode__SubInstName_165, (MR_Integer) 0, hlds__hlds_out__hlds_out_mode__V_42_42, hlds__hlds_out__hlds_out_mode__Lang_14, hlds__hlds_out__hlds_out_mode__InclAddr_15, hlds__hlds_out__hlds_out_mode__InstVarSet_16, hlds__hlds_out__hlds_out_mode__STATE_VARIABLE_U_39_39, &hlds__hlds_out__hlds_out_mode__STATE_VARIABLE_U_43_43);
              }
              {
                parse_tree__mercury_to_mercury__mercury_format_tabs_3_p_0(hlds__hlds_out__hlds_out_mode__TypeClassInfo_for_output_168, hlds__hlds_out__hlds_out_mode__Indent_13, hlds__hlds_out__hlds_out_mode__STATE_VARIABLE_U_43_43, &hlds__hlds_out__hlds_out_mode__STATE_VARIABLE_U_45_45);
              }
              {
                parse_tree__parse_tree_out_info__add_string_3_p_0(hlds__hlds_out__hlds_out_mode__TypeClassInfo_for_output_168, (MR_String) ")", hlds__hlds_out__hlds_out_mode__STATE_VARIABLE_U_45_45, &hlds__hlds_out__hlds_out_mode__STATE_VARIABLE_U_47_47);
              }
              {
                parse_tree__parse_tree_out_info__add_string_3_p_0(hlds__hlds_out__hlds_out_mode__TypeClassInfo_for_output_168, hlds__hlds_out__hlds_out_mode__Suffix_10, hlds__hlds_out__hlds_out_mode__STATE_VARIABLE_U_47_47, hlds__hlds_out__hlds_out_mode__STATE_VARIABLE_U_32);
              }
            }
            break;
        }
        break;
    }
  }
}

static void MR_CALL 
hlds__hlds_out__hlds_out_mode__get_inst_addr_2_p_0(
  MR_Word hlds__hlds_out__hlds_out_mode__Inst_1,
  MR_Integer * hlds__hlds_out__hlds_out_mode__InstAddr_2)
{
  {
    MR_bool hlds__hlds_out__hlds_out_mode__succeeded;

{
#define MR_PROC_LABEL hlds__hlds_out__hlds_out_mode__get_inst_addr_2_p_0

	MR_Word Inst;
	MR_Integer InstAddr;

	Inst =  hlds__hlds_out__hlds_out_mode__Inst_1 ;
		{

    InstAddr = Inst;


		;}
#undef MR_PROC_LABEL
	 *hlds__hlds_out__hlds_out_mode__InstAddr_2  = InstAddr;
}
  }
}

static void MR_CALL 
hlds__hlds_out__hlds_out_mode__mercury_format_structured_bound_insts_7_p_0(
  MR_Word hlds__hlds_out__hlds_out_mode__TypeClassInfo_for_output_52,
  MR_Word hlds__hlds_out__hlds_out_mode__HeadVar__1_1,
  MR_Integer hlds__hlds_out__hlds_out_mode__Indent0_2,
  MR_Word hlds__hlds_out__hlds_out_mode__Lang_3,
  MR_Word hlds__hlds_out__hlds_out_mode__InclAddr_4,
  MR_Word hlds__hlds_out__hlds_out_mode__InstVarSet_5,
  MR_Box hlds__hlds_out__hlds_out_mode__STATE_VARIABLE_U_0_6,
  MR_Box * hlds__hlds_out__hlds_out_mode__STATE_VARIABLE_U_7)
{
  while (MR_TRUE)
    {
      /* tailcall optimized into a loop */
      {
        MR_bool hlds__hlds_out__hlds_out_mode__succeeded;

        if ((hlds__hlds_out__hlds_out_mode__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
          *hlds__hlds_out__hlds_out_mode__STATE_VARIABLE_U_7 = hlds__hlds_out__hlds_out_mode__STATE_VARIABLE_U_0_6;
        else
          {
            MR_Word hlds__hlds_out__hlds_out_mode__BoundInst_15 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__hlds_out__hlds_out_mode__HeadVar__1_1, (MR_Integer) 0)));
            MR_Word hlds__hlds_out__hlds_out_mode__BoundInsts_16 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__hlds_out__hlds_out_mode__HeadVar__1_1, (MR_Integer) 1)));
            MR_Word hlds__hlds_out__hlds_out_mode__ConsId_22 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_mode__BoundInst_15, (MR_Integer) 0)));
            MR_Word hlds__hlds_out__hlds_out_mode__Args_23 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_mode__BoundInst_15, (MR_Integer) 1)));
            MR_Integer hlds__hlds_out__hlds_out_mode__Indent1_24 = (hlds__hlds_out__hlds_out_mode__Indent0_2 + (MR_Integer) 1);
            MR_Integer hlds__hlds_out__hlds_out_mode__Indent2_25 = (hlds__hlds_out__hlds_out_mode__Indent1_24 + (MR_Integer) 1);
            MR_Box hlds__hlds_out__hlds_out_mode__STATE_VARIABLE_U_47_47;

            if ((hlds__hlds_out__hlds_out_mode__Args_23 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
              {
                MR_Box hlds__hlds_out__hlds_out_mode__STATE_VARIABLE_U_43_43;
                MR_Box hlds__hlds_out__hlds_out_mode__STATE_VARIABLE_U_45_45;
                void MR_CALL (* hlds__hlds_out__hlds_out_mode__func_0)(MR_Box, MR_Box, MR_Box, MR_Box *);

                {
                  parse_tree__mercury_to_mercury__mercury_format_tabs_3_p_0(hlds__hlds_out__hlds_out_mode__TypeClassInfo_for_output_52, hlds__hlds_out__hlds_out_mode__Indent1_24, hlds__hlds_out__hlds_out_mode__STATE_VARIABLE_U_0_6, &hlds__hlds_out__hlds_out_mode__STATE_VARIABLE_U_43_43);
                }
                {
                  parse_tree__mercury_to_mercury__mercury_format_cons_id_4_p_0(hlds__hlds_out__hlds_out_mode__TypeClassInfo_for_output_52, (MR_Integer) 0, hlds__hlds_out__hlds_out_mode__ConsId_22, hlds__hlds_out__hlds_out_mode__STATE_VARIABLE_U_43_43, &hlds__hlds_out__hlds_out_mode__STATE_VARIABLE_U_45_45);
                }
                hlds__hlds_out__hlds_out_mode__func_0 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_mode__TypeClassInfo_for_output_52, (MR_Integer) 0)), (MR_Integer) 5)));
                {
                  hlds__hlds_out__hlds_out_mode__func_0(((MR_Box) hlds__hlds_out__hlds_out_mode__TypeClassInfo_for_output_52), ((MR_Box) ((MR_String) "\n")), hlds__hlds_out__hlds_out_mode__STATE_VARIABLE_U_45_45, &hlds__hlds_out__hlds_out_mode__STATE_VARIABLE_U_47_47);
                }
              }
            else
              {
                MR_Box hlds__hlds_out__hlds_out_mode__STATE_VARIABLE_U_34_34;
                MR_Box hlds__hlds_out__hlds_out_mode__STATE_VARIABLE_U_36_36;
                MR_Box hlds__hlds_out__hlds_out_mode__STATE_VARIABLE_U_38_38;
                MR_Box hlds__hlds_out__hlds_out_mode__STATE_VARIABLE_U_39_39;
                MR_Box hlds__hlds_out__hlds_out_mode__STATE_VARIABLE_U_40_40;
                MR_Word hlds__hlds_out__hlds_out_mode__Inst_60;
                MR_Word hlds__hlds_out__hlds_out_mode__Insts_61;
                void MR_CALL (* hlds__hlds_out__hlds_out_mode__func_1)(MR_Box, MR_Box, MR_Box, MR_Box *);
                void MR_CALL (* hlds__hlds_out__hlds_out_mode__func_2)(MR_Box, MR_Box, MR_Box, MR_Box *);

                {
                  parse_tree__mercury_to_mercury__mercury_format_tabs_3_p_0(hlds__hlds_out__hlds_out_mode__TypeClassInfo_for_output_52, hlds__hlds_out__hlds_out_mode__Indent1_24, hlds__hlds_out__hlds_out_mode__STATE_VARIABLE_U_0_6, &hlds__hlds_out__hlds_out_mode__STATE_VARIABLE_U_34_34);
                }
                {
                  parse_tree__mercury_to_mercury__mercury_format_cons_id_4_p_0(hlds__hlds_out__hlds_out_mode__TypeClassInfo_for_output_52, (MR_Integer) 1, hlds__hlds_out__hlds_out_mode__ConsId_22, hlds__hlds_out__hlds_out_mode__STATE_VARIABLE_U_34_34, &hlds__hlds_out__hlds_out_mode__STATE_VARIABLE_U_36_36);
                }
                hlds__hlds_out__hlds_out_mode__func_1 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_mode__TypeClassInfo_for_output_52, (MR_Integer) 0)), (MR_Integer) 5)));
                {
                  hlds__hlds_out__hlds_out_mode__func_1(((MR_Box) hlds__hlds_out__hlds_out_mode__TypeClassInfo_for_output_52), ((MR_Box) ((MR_String) "(\n")), hlds__hlds_out__hlds_out_mode__STATE_VARIABLE_U_36_36, &hlds__hlds_out__hlds_out_mode__STATE_VARIABLE_U_38_38);
                }
                hlds__hlds_out__hlds_out_mode__Inst_60 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__hlds_out__hlds_out_mode__Args_23, (MR_Integer) 0)));
                hlds__hlds_out__hlds_out_mode__Insts_61 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__hlds_out__hlds_out_mode__Args_23, (MR_Integer) 1)));
                if ((hlds__hlds_out__hlds_out_mode__Insts_61 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
                  {
                    {
                      hlds__hlds_out__hlds_out_mode__mercury_format_structured_inst_8_p_0(hlds__hlds_out__hlds_out_mode__TypeClassInfo_for_output_52, (MR_String) "\n", hlds__hlds_out__hlds_out_mode__Inst_60, hlds__hlds_out__hlds_out_mode__Indent2_25, hlds__hlds_out__hlds_out_mode__Lang_3, hlds__hlds_out__hlds_out_mode__InclAddr_4, hlds__hlds_out__hlds_out_mode__InstVarSet_5, hlds__hlds_out__hlds_out_mode__STATE_VARIABLE_U_38_38, &hlds__hlds_out__hlds_out_mode__STATE_VARIABLE_U_39_39);
                    }
                  }
                else
                  {
                    MR_Box hlds__hlds_out__hlds_out_mode__STATE_VARIABLE_U_27_72;
                    MR_Word hlds__hlds_out__hlds_out_mode__Inst_102;
                    MR_Word hlds__hlds_out__hlds_out_mode__Insts_103;
                    MR_String hlds__hlds_out__hlds_out_mode__Suffix_109;
                    MR_Box hlds__hlds_out__hlds_out_mode__STATE_VARIABLE_U_27_114;

                    {
                      hlds__hlds_out__hlds_out_mode__mercury_format_structured_inst_8_p_0(hlds__hlds_out__hlds_out_mode__TypeClassInfo_for_output_52, (MR_String) ",\n", hlds__hlds_out__hlds_out_mode__Inst_60, hlds__hlds_out__hlds_out_mode__Indent2_25, hlds__hlds_out__hlds_out_mode__Lang_3, hlds__hlds_out__hlds_out_mode__InclAddr_4, hlds__hlds_out__hlds_out_mode__InstVarSet_5, hlds__hlds_out__hlds_out_mode__STATE_VARIABLE_U_38_38, &hlds__hlds_out__hlds_out_mode__STATE_VARIABLE_U_27_72);
                    }
                    hlds__hlds_out__hlds_out_mode__Inst_102 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__hlds_out__hlds_out_mode__Insts_61, (MR_Integer) 0)));
                    hlds__hlds_out__hlds_out_mode__Insts_103 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__hlds_out__hlds_out_mode__Insts_61, (MR_Integer) 1)));
                    if ((hlds__hlds_out__hlds_out_mode__Insts_103 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
                      hlds__hlds_out__hlds_out_mode__Suffix_109 = (MR_String) "\n";
                    else
                      hlds__hlds_out__hlds_out_mode__Suffix_109 = (MR_String) ",\n";
                    {
                      hlds__hlds_out__hlds_out_mode__mercury_format_structured_inst_8_p_0(hlds__hlds_out__hlds_out_mode__TypeClassInfo_for_output_52, hlds__hlds_out__hlds_out_mode__Suffix_109, hlds__hlds_out__hlds_out_mode__Inst_102, hlds__hlds_out__hlds_out_mode__Indent2_25, hlds__hlds_out__hlds_out_mode__Lang_3, hlds__hlds_out__hlds_out_mode__InclAddr_4, hlds__hlds_out__hlds_out_mode__InstVarSet_5, hlds__hlds_out__hlds_out_mode__STATE_VARIABLE_U_27_72, &hlds__hlds_out__hlds_out_mode__STATE_VARIABLE_U_27_114);
                    }
                    {
                      hlds__hlds_out__hlds_out_mode__mercury_format_structured_inst_list_7_p_0(hlds__hlds_out__hlds_out_mode__TypeClassInfo_for_output_52, hlds__hlds_out__hlds_out_mode__Insts_103, hlds__hlds_out__hlds_out_mode__Indent2_25, hlds__hlds_out__hlds_out_mode__Lang_3, hlds__hlds_out__hlds_out_mode__InclAddr_4, hlds__hlds_out__hlds_out_mode__InstVarSet_5, hlds__hlds_out__hlds_out_mode__STATE_VARIABLE_U_27_114, &hlds__hlds_out__hlds_out_mode__STATE_VARIABLE_U_39_39);
                    }
                  }
                {
                  parse_tree__mercury_to_mercury__mercury_format_tabs_3_p_0(hlds__hlds_out__hlds_out_mode__TypeClassInfo_for_output_52, hlds__hlds_out__hlds_out_mode__Indent1_24, hlds__hlds_out__hlds_out_mode__STATE_VARIABLE_U_39_39, &hlds__hlds_out__hlds_out_mode__STATE_VARIABLE_U_40_40);
                }
                hlds__hlds_out__hlds_out_mode__func_2 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_mode__TypeClassInfo_for_output_52, (MR_Integer) 0)), (MR_Integer) 5)));
                {
                  hlds__hlds_out__hlds_out_mode__func_2(((MR_Box) hlds__hlds_out__hlds_out_mode__TypeClassInfo_for_output_52), ((MR_Box) ((MR_String) ")\n")), hlds__hlds_out__hlds_out_mode__STATE_VARIABLE_U_40_40, &hlds__hlds_out__hlds_out_mode__STATE_VARIABLE_U_47_47);
                }
              }
            if ((hlds__hlds_out__hlds_out_mode__BoundInsts_16 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
              *hlds__hlds_out__hlds_out_mode__STATE_VARIABLE_U_7 = hlds__hlds_out__hlds_out_mode__STATE_VARIABLE_U_47_47;
            else
              {
                MR_Box hlds__hlds_out__hlds_out_mode__STATE_VARIABLE_U_48_48;
                MR_Box hlds__hlds_out__hlds_out_mode__STATE_VARIABLE_U_50_50;
                void MR_CALL (* hlds__hlds_out__hlds_out_mode__func_3)(MR_Box, MR_Box, MR_Box, MR_Box *);

                {
                  parse_tree__mercury_to_mercury__mercury_format_tabs_3_p_0(hlds__hlds_out__hlds_out_mode__TypeClassInfo_for_output_52, hlds__hlds_out__hlds_out_mode__Indent0_2, hlds__hlds_out__hlds_out_mode__STATE_VARIABLE_U_47_47, &hlds__hlds_out__hlds_out_mode__STATE_VARIABLE_U_48_48);
                }
                hlds__hlds_out__hlds_out_mode__func_3 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_mode__TypeClassInfo_for_output_52, (MR_Integer) 0)), (MR_Integer) 5)));
                {
                  hlds__hlds_out__hlds_out_mode__func_3(((MR_Box) hlds__hlds_out__hlds_out_mode__TypeClassInfo_for_output_52), ((MR_Box) ((MR_String) ";\n")), hlds__hlds_out__hlds_out_mode__STATE_VARIABLE_U_48_48, &hlds__hlds_out__hlds_out_mode__STATE_VARIABLE_U_50_50);
                }
                /* direct tailcall eliminated */
                {
                  MR_Word hlds__hlds_out__hlds_out_mode__HeadVar__1__tmp_copy_1 = hlds__hlds_out__hlds_out_mode__BoundInsts_16;
                  MR_Box hlds__hlds_out__hlds_out_mode__STATE_VARIABLE_U_0__tmp_copy_6 = hlds__hlds_out__hlds_out_mode__STATE_VARIABLE_U_50_50;

                  hlds__hlds_out__hlds_out_mode__STATE_VARIABLE_U_0_6 = hlds__hlds_out__hlds_out_mode__STATE_VARIABLE_U_0__tmp_copy_6;
                  hlds__hlds_out__hlds_out_mode__HeadVar__1_1 = hlds__hlds_out__hlds_out_mode__HeadVar__1__tmp_copy_1;
                }
                continue;
              }
          }
      }
      break;
    }
}

static void MR_CALL 
hlds__hlds_out__hlds_out_mode__mercury_format_structured_inst_8_p_0(
  MR_Word hlds__hlds_out__hlds_out_mode__TypeClassInfo_for_output_107,
  MR_String hlds__hlds_out__hlds_out_mode__Suffix_9,
  MR_Word hlds__hlds_out__hlds_out_mode__Inst_10,
  MR_Integer hlds__hlds_out__hlds_out_mode__Indent_11,
  MR_Word hlds__hlds_out__hlds_out_mode__Lang_12,
  MR_Word hlds__hlds_out__hlds_out_mode__InclAddr_13,
  MR_Word hlds__hlds_out__hlds_out_mode__InstVarSet_14,
  MR_Box hlds__hlds_out__hlds_out_mode__STATE_VARIABLE_U_0_32,
  MR_Box * hlds__hlds_out__hlds_out_mode__STATE_VARIABLE_U_33)
{
  {
    MR_bool hlds__hlds_out__hlds_out_mode__succeeded;
    MR_Box hlds__hlds_out__hlds_out_mode__STATE_VARIABLE_U_34_34;
    MR_Box hlds__hlds_out__hlds_out_mode__STATE_VARIABLE_U_41_41;

    {
      parse_tree__mercury_to_mercury__mercury_format_tabs_3_p_0(hlds__hlds_out__hlds_out_mode__TypeClassInfo_for_output_107, hlds__hlds_out__hlds_out_mode__Indent_11, hlds__hlds_out__hlds_out_mode__STATE_VARIABLE_U_0_32, &hlds__hlds_out__hlds_out_mode__STATE_VARIABLE_U_34_34);
    }
    switch (hlds__hlds_out__hlds_out_mode__InclAddr_13) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 1:
        {
          MR_Integer hlds__hlds_out__hlds_out_mode__InstAddr_16;
          MR_String hlds__hlds_out__hlds_out_mode__InstAddrStr_17;
          MR_Box hlds__hlds_out__hlds_out_mode__STATE_VARIABLE_U_39_39;

          {
            hlds__hlds_out__hlds_out_mode__get_inst_addr_2_p_0(hlds__hlds_out__hlds_out_mode__Inst_10, &hlds__hlds_out__hlds_out_mode__InstAddr_16);
          }
          {
            mercury__string__format__format_unsigned_int_component_nowidth_noprec_4_p_0((MR_Word) &hlds__hlds_out__hlds_out_mode_scalar_common_2[0], (MR_Integer) 2, hlds__hlds_out__hlds_out_mode__InstAddr_16, &hlds__hlds_out__hlds_out_mode__InstAddrStr_17);
          }
          {
            parse_tree__parse_tree_out_info__add_string_3_p_0(hlds__hlds_out__hlds_out_mode__TypeClassInfo_for_output_107, hlds__hlds_out__hlds_out_mode__InstAddrStr_17, hlds__hlds_out__hlds_out_mode__STATE_VARIABLE_U_34_34, &hlds__hlds_out__hlds_out_mode__STATE_VARIABLE_U_39_39);
          }
          {
            parse_tree__parse_tree_out_info__add_string_3_p_0(hlds__hlds_out__hlds_out_mode__TypeClassInfo_for_output_107, (MR_String) ": ", hlds__hlds_out__hlds_out_mode__STATE_VARIABLE_U_39_39, &hlds__hlds_out__hlds_out_mode__STATE_VARIABLE_U_41_41);
          }
        }
        break;
      case (MR_Integer) 0:
        hlds__hlds_out__hlds_out_mode__STATE_VARIABLE_U_41_41 = hlds__hlds_out__hlds_out_mode__STATE_VARIABLE_U_34_34;
        break;
    }
    switch (MR_tag((MR_Word) hlds__hlds_out__hlds_out_mode__Inst_10)) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        switch (MR_unmkbody(hlds__hlds_out__hlds_out_mode__Inst_10)) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
            {
              MR_Box hlds__hlds_out__hlds_out_mode__STATE_VARIABLE_U_95_95;

              {
                parse_tree__parse_tree_out_info__add_string_3_p_0(hlds__hlds_out__hlds_out_mode__TypeClassInfo_for_output_107, (MR_String) "free", hlds__hlds_out__hlds_out_mode__STATE_VARIABLE_U_41_41, &hlds__hlds_out__hlds_out_mode__STATE_VARIABLE_U_95_95);
              }
              {
                parse_tree__parse_tree_out_info__add_string_3_p_0(hlds__hlds_out__hlds_out_mode__TypeClassInfo_for_output_107, hlds__hlds_out__hlds_out_mode__Suffix_9, hlds__hlds_out__hlds_out_mode__STATE_VARIABLE_U_95_95, hlds__hlds_out__hlds_out_mode__STATE_VARIABLE_U_33);
              }
            }
            break;
          case (MR_Integer) 1:
            {
              MR_Box hlds__hlds_out__hlds_out_mode__STATE_VARIABLE_U_43_43;

              {
                parse_tree__parse_tree_out_info__add_string_3_p_0(hlds__hlds_out__hlds_out_mode__TypeClassInfo_for_output_107, (MR_String) "not_reached", hlds__hlds_out__hlds_out_mode__STATE_VARIABLE_U_41_41, &hlds__hlds_out__hlds_out_mode__STATE_VARIABLE_U_43_43);
              }
              {
                parse_tree__parse_tree_out_info__add_string_3_p_0(hlds__hlds_out__hlds_out_mode__TypeClassInfo_for_output_107, hlds__hlds_out__hlds_out_mode__Suffix_9, hlds__hlds_out__hlds_out_mode__STATE_VARIABLE_U_43_43, hlds__hlds_out__hlds_out_mode__STATE_VARIABLE_U_33);
              }
            }
            break;
        }
        break;
      case (MR_Integer) 1:
        {
          MR_Box hlds__hlds_out__hlds_out_mode__STATE_VARIABLE_U_92_92;

          {
            parse_tree__parse_tree_out_info__add_string_3_p_0(hlds__hlds_out__hlds_out_mode__TypeClassInfo_for_output_107, (MR_String) "free(with some type)", hlds__hlds_out__hlds_out_mode__STATE_VARIABLE_U_41_41, &hlds__hlds_out__hlds_out_mode__STATE_VARIABLE_U_92_92);
          }
          {
            parse_tree__parse_tree_out_info__add_string_3_p_0(hlds__hlds_out__hlds_out_mode__TypeClassInfo_for_output_107, hlds__hlds_out__hlds_out_mode__Suffix_9, hlds__hlds_out__hlds_out_mode__STATE_VARIABLE_U_92_92, hlds__hlds_out__hlds_out_mode__STATE_VARIABLE_U_33);
          }
        }
        break;
      case (MR_Integer) 2:
        {
          MR_Word hlds__hlds_out__hlds_out_mode__Uniq_18 = ((MR_Word) (MR_hl_field(MR_mktag(2), hlds__hlds_out__hlds_out_mode__Inst_10, (MR_Integer) 0)));
          MR_Word hlds__hlds_out__hlds_out_mode__HOInstInfo_19 = ((MR_Word) (MR_hl_field(MR_mktag(2), hlds__hlds_out__hlds_out_mode__Inst_10, (MR_Integer) 1)));
          MR_Box hlds__hlds_out__hlds_out_mode__STATE_VARIABLE_U_99_99;

          if ((hlds__hlds_out__hlds_out_mode__HOInstInfo_19 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
            {
              parse_tree__parse_tree_out_inst__mercury_format_any_uniqueness_3_p_0(hlds__hlds_out__hlds_out_mode__TypeClassInfo_for_output_107, hlds__hlds_out__hlds_out_mode__Uniq_18, hlds__hlds_out__hlds_out_mode__STATE_VARIABLE_U_41_41, &hlds__hlds_out__hlds_out_mode__STATE_VARIABLE_U_99_99);
            }
          else
            {
              MR_Word hlds__hlds_out__hlds_out_mode__PredInstInfo_20 = (MR_Word) MR_body(((MR_Word) hlds__hlds_out__hlds_out_mode__HOInstInfo_19), (MR_Integer) 1);

              {
                parse_tree__parse_tree_out_inst__mercury_format_any_pred_inst_info_6_p_0(hlds__hlds_out__hlds_out_mode__TypeClassInfo_for_output_107, (MR_Integer) 1, hlds__hlds_out__hlds_out_mode__InstVarSet_14, hlds__hlds_out__hlds_out_mode__Uniq_18, hlds__hlds_out__hlds_out_mode__PredInstInfo_20, hlds__hlds_out__hlds_out_mode__STATE_VARIABLE_U_41_41, &hlds__hlds_out__hlds_out_mode__STATE_VARIABLE_U_99_99);
              }
            }
          {
            parse_tree__parse_tree_out_info__add_string_3_p_0(hlds__hlds_out__hlds_out_mode__TypeClassInfo_for_output_107, hlds__hlds_out__hlds_out_mode__Suffix_9, hlds__hlds_out__hlds_out_mode__STATE_VARIABLE_U_99_99, hlds__hlds_out__hlds_out_mode__STATE_VARIABLE_U_33);
          }
        }
        break;
      case (MR_Integer) 3:
        switch (((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), hlds__hlds_out__hlds_out_mode__Inst_10, (MR_Integer) 0)))) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
            {
              MR_Word hlds__hlds_out__hlds_out_mode__InstResults_22 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__hlds_out__hlds_out_mode__Inst_10, (MR_Integer) 2)));
              MR_Word hlds__hlds_out__hlds_out_mode__BoundInsts_23 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__hlds_out__hlds_out_mode__Inst_10, (MR_Integer) 3)));
              MR_Box hlds__hlds_out__hlds_out_mode__STATE_VARIABLE_U_62_62;
              MR_Box hlds__hlds_out__hlds_out_mode__STATE_VARIABLE_U_64_64;
              MR_Integer hlds__hlds_out__hlds_out_mode__V_79_79;
              MR_Box hlds__hlds_out__hlds_out_mode__STATE_VARIABLE_U_86_86;
              MR_Box hlds__hlds_out__hlds_out_mode__STATE_VARIABLE_U_87_87;
              MR_Box hlds__hlds_out__hlds_out_mode__STATE_VARIABLE_U_89_89;
              MR_Word hlds__hlds_out__hlds_out_mode__Uniq_101 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__hlds_out__hlds_out_mode__Inst_10, (MR_Integer) 1)));

              {
                parse_tree__parse_tree_out_inst__mercury_format_uniqueness_4_p_0(hlds__hlds_out__hlds_out_mode__TypeClassInfo_for_output_107, hlds__hlds_out__hlds_out_mode__Uniq_101, (MR_String) "bound", hlds__hlds_out__hlds_out_mode__STATE_VARIABLE_U_41_41, &hlds__hlds_out__hlds_out_mode__STATE_VARIABLE_U_62_62);
              }
              {
                parse_tree__parse_tree_out_info__add_string_3_p_0(hlds__hlds_out__hlds_out_mode__TypeClassInfo_for_output_107, (MR_String) "(\n", hlds__hlds_out__hlds_out_mode__STATE_VARIABLE_U_62_62, &hlds__hlds_out__hlds_out_mode__STATE_VARIABLE_U_64_64);
              }
              hlds__hlds_out__hlds_out_mode__V_79_79 = (hlds__hlds_out__hlds_out_mode__Indent_11 + (MR_Integer) 1);
              switch (hlds__hlds_out__hlds_out_mode__Lang_12) {
                default: /*NOTREACHED*/ MR_assert(0);
                case (MR_Integer) 1:
                  {
                    MR_Word hlds__hlds_out__hlds_out_mode__TypeCtorInfo_108_108;
                    MR_Word hlds__hlds_out__hlds_out_mode__InstResultsTerm_24;
                    MR_String hlds__hlds_out__hlds_out_mode__InstResultsStr_25;
                    MR_Word hlds__hlds_out__hlds_out_mode__V_65_65;
                    MR_Word hlds__hlds_out__hlds_out_mode__V_66_66;
                    MR_Integer hlds__hlds_out__hlds_out_mode__V_68_68;
                    MR_Box hlds__hlds_out__hlds_out_mode__STATE_VARIABLE_U_69_69;
                    MR_Box hlds__hlds_out__hlds_out_mode__STATE_VARIABLE_U_71_71;
                    MR_Box hlds__hlds_out__hlds_out_mode__STATE_VARIABLE_U_73_73;
                    MR_Integer hlds__hlds_out__hlds_out_mode__V_74_74;
                    MR_Box hlds__hlds_out__hlds_out_mode__STATE_VARIABLE_U_75_75;
                    MR_Box hlds__hlds_out__hlds_out_mode__STATE_VARIABLE_U_78_78;
                    MR_Box hlds__hlds_out__hlds_out_mode__STATE_VARIABLE_U_80_80;
                    MR_Integer hlds__hlds_out__hlds_out_mode__V_82_82;
                    MR_Box hlds__hlds_out__hlds_out_mode__STATE_VARIABLE_U_83_83;

                    {
                      hlds__hlds_out__hlds_out_mode__V_65_65 = mercury__term__context_init_0_f_0();
                    }
                    {
                      hlds__hlds_out__hlds_out_mode__InstResultsTerm_24 = parse_tree__parse_tree_to_term__inst_test_results_to_term_2_f_0(hlds__hlds_out__hlds_out_mode__V_65_65, hlds__hlds_out__hlds_out_mode__InstResults_22);
                    }
                    hlds__hlds_out__hlds_out_mode__TypeCtorInfo_108_108 = (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0;
                    {
                      hlds__hlds_out__hlds_out_mode__V_66_66 = mercury__varset__init_0_f_0(hlds__hlds_out__hlds_out_mode__TypeCtorInfo_108_108);
                    }
                    {
                      hlds__hlds_out__hlds_out_mode__InstResultsStr_25 = parse_tree__parse_tree_out_term__mercury_term_to_string_3_f_0(hlds__hlds_out__hlds_out_mode__TypeCtorInfo_108_108, hlds__hlds_out__hlds_out_mode__V_66_66, (MR_Integer) 2, hlds__hlds_out__hlds_out_mode__InstResultsTerm_24);
                    }
                    hlds__hlds_out__hlds_out_mode__V_68_68 = (hlds__hlds_out__hlds_out_mode__Indent_11 + (MR_Integer) 1);
                    {
                      parse_tree__mercury_to_mercury__mercury_format_tabs_3_p_0(hlds__hlds_out__hlds_out_mode__TypeClassInfo_for_output_107, hlds__hlds_out__hlds_out_mode__V_68_68, hlds__hlds_out__hlds_out_mode__STATE_VARIABLE_U_64_64, &hlds__hlds_out__hlds_out_mode__STATE_VARIABLE_U_69_69);
                    }
                    {
                      parse_tree__parse_tree_out_info__add_string_3_p_0(hlds__hlds_out__hlds_out_mode__TypeClassInfo_for_output_107, hlds__hlds_out__hlds_out_mode__InstResultsStr_25, hlds__hlds_out__hlds_out_mode__STATE_VARIABLE_U_69_69, &hlds__hlds_out__hlds_out_mode__STATE_VARIABLE_U_71_71);
                    }
                    {
                      parse_tree__parse_tree_out_info__add_string_3_p_0(hlds__hlds_out__hlds_out_mode__TypeClassInfo_for_output_107, (MR_String) ",\n", hlds__hlds_out__hlds_out_mode__STATE_VARIABLE_U_71_71, &hlds__hlds_out__hlds_out_mode__STATE_VARIABLE_U_73_73);
                    }
                    hlds__hlds_out__hlds_out_mode__V_74_74 = (hlds__hlds_out__hlds_out_mode__Indent_11 + (MR_Integer) 1);
                    {
                      parse_tree__mercury_to_mercury__mercury_format_tabs_3_p_0(hlds__hlds_out__hlds_out_mode__TypeClassInfo_for_output_107, hlds__hlds_out__hlds_out_mode__V_74_74, hlds__hlds_out__hlds_out_mode__STATE_VARIABLE_U_73_73, &hlds__hlds_out__hlds_out_mode__STATE_VARIABLE_U_75_75);
                    }
                    {
                      parse_tree__parse_tree_out_info__add_string_3_p_0(hlds__hlds_out__hlds_out_mode__TypeClassInfo_for_output_107, (MR_String) "[\n", hlds__hlds_out__hlds_out_mode__STATE_VARIABLE_U_75_75, &hlds__hlds_out__hlds_out_mode__STATE_VARIABLE_U_78_78);
                    }
                    {
                      hlds__hlds_out__hlds_out_mode__mercury_format_structured_bound_insts_7_p_0(hlds__hlds_out__hlds_out_mode__TypeClassInfo_for_output_107, hlds__hlds_out__hlds_out_mode__BoundInsts_23, hlds__hlds_out__hlds_out_mode__V_79_79, hlds__hlds_out__hlds_out_mode__Lang_12, hlds__hlds_out__hlds_out_mode__InclAddr_13, hlds__hlds_out__hlds_out_mode__InstVarSet_14, hlds__hlds_out__hlds_out_mode__STATE_VARIABLE_U_78_78, &hlds__hlds_out__hlds_out_mode__STATE_VARIABLE_U_80_80);
                    }
                    hlds__hlds_out__hlds_out_mode__V_82_82 = (hlds__hlds_out__hlds_out_mode__Indent_11 + (MR_Integer) 1);
                    {
                      parse_tree__mercury_to_mercury__mercury_format_tabs_3_p_0(hlds__hlds_out__hlds_out_mode__TypeClassInfo_for_output_107, hlds__hlds_out__hlds_out_mode__V_82_82, hlds__hlds_out__hlds_out_mode__STATE_VARIABLE_U_80_80, &hlds__hlds_out__hlds_out_mode__STATE_VARIABLE_U_83_83);
                    }
                    {
                      parse_tree__parse_tree_out_info__add_string_3_p_0(hlds__hlds_out__hlds_out_mode__TypeClassInfo_for_output_107, (MR_String) "]\n", hlds__hlds_out__hlds_out_mode__STATE_VARIABLE_U_83_83, &hlds__hlds_out__hlds_out_mode__STATE_VARIABLE_U_86_86);
                    }
                  }
                  break;
                case (MR_Integer) 0:
                  {
                    hlds__hlds_out__hlds_out_mode__mercury_format_structured_bound_insts_7_p_0(hlds__hlds_out__hlds_out_mode__TypeClassInfo_for_output_107, hlds__hlds_out__hlds_out_mode__BoundInsts_23, hlds__hlds_out__hlds_out_mode__V_79_79, hlds__hlds_out__hlds_out_mode__Lang_12, hlds__hlds_out__hlds_out_mode__InclAddr_13, hlds__hlds_out__hlds_out_mode__InstVarSet_14, hlds__hlds_out__hlds_out_mode__STATE_VARIABLE_U_64_64, &hlds__hlds_out__hlds_out_mode__STATE_VARIABLE_U_86_86);
                  }
                  break;
              }
              {
                parse_tree__mercury_to_mercury__mercury_format_tabs_3_p_0(hlds__hlds_out__hlds_out_mode__TypeClassInfo_for_output_107, hlds__hlds_out__hlds_out_mode__Indent_11, hlds__hlds_out__hlds_out_mode__STATE_VARIABLE_U_86_86, &hlds__hlds_out__hlds_out_mode__STATE_VARIABLE_U_87_87);
              }
              {
                parse_tree__parse_tree_out_info__add_string_3_p_0(hlds__hlds_out__hlds_out_mode__TypeClassInfo_for_output_107, (MR_String) ")", hlds__hlds_out__hlds_out_mode__STATE_VARIABLE_U_87_87, &hlds__hlds_out__hlds_out_mode__STATE_VARIABLE_U_89_89);
              }
              {
                parse_tree__parse_tree_out_info__add_string_3_p_0(hlds__hlds_out__hlds_out_mode__TypeClassInfo_for_output_107, hlds__hlds_out__hlds_out_mode__Suffix_9, hlds__hlds_out__hlds_out_mode__STATE_VARIABLE_U_89_89, hlds__hlds_out__hlds_out_mode__STATE_VARIABLE_U_33);
              }
            }
            break;
          case (MR_Integer) 1:
            {
              MR_Box hlds__hlds_out__hlds_out_mode__STATE_VARIABLE_U_59_59;
              MR_Word hlds__hlds_out__hlds_out_mode__Uniq_104 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__hlds_out__hlds_out_mode__Inst_10, (MR_Integer) 1)));
              MR_Word hlds__hlds_out__hlds_out_mode__HOInstInfo_105 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__hlds_out__hlds_out_mode__Inst_10, (MR_Integer) 2)));

              if ((hlds__hlds_out__hlds_out_mode__HOInstInfo_105 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
                {
                  {
                    parse_tree__parse_tree_out_inst__mercury_format_uniqueness_4_p_0(hlds__hlds_out__hlds_out_mode__TypeClassInfo_for_output_107, hlds__hlds_out__hlds_out_mode__Uniq_104, (MR_String) "ground", hlds__hlds_out__hlds_out_mode__STATE_VARIABLE_U_41_41, &hlds__hlds_out__hlds_out_mode__STATE_VARIABLE_U_59_59);
                  }
                }
              else
                {
                  MR_Word hlds__hlds_out__hlds_out_mode__PredInstInfo_102 = (MR_Word) MR_body(((MR_Word) hlds__hlds_out__hlds_out_mode__HOInstInfo_105), (MR_Integer) 1);

                  {
                    parse_tree__parse_tree_out_inst__mercury_format_ground_pred_inst_info_6_p_0(hlds__hlds_out__hlds_out_mode__TypeClassInfo_for_output_107, (MR_Integer) 1, hlds__hlds_out__hlds_out_mode__InstVarSet_14, hlds__hlds_out__hlds_out_mode__Uniq_104, hlds__hlds_out__hlds_out_mode__PredInstInfo_102, hlds__hlds_out__hlds_out_mode__STATE_VARIABLE_U_41_41, &hlds__hlds_out__hlds_out_mode__STATE_VARIABLE_U_59_59);
                  }
                }
              {
                parse_tree__parse_tree_out_info__add_string_3_p_0(hlds__hlds_out__hlds_out_mode__TypeClassInfo_for_output_107, hlds__hlds_out__hlds_out_mode__Suffix_9, hlds__hlds_out__hlds_out_mode__STATE_VARIABLE_U_59_59, hlds__hlds_out__hlds_out_mode__STATE_VARIABLE_U_33);
              }
            }
            break;
          case (MR_Integer) 2:
            {
              MR_Word hlds__hlds_out__hlds_out_mode__Var_26 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__hlds_out__hlds_out_mode__Inst_10, (MR_Integer) 1)));
              MR_Box hlds__hlds_out__hlds_out_mode__STATE_VARIABLE_U_54_54;

              {
                parse_tree__parse_tree_out_term__mercury_format_var_5_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_inst_var_type_0, hlds__hlds_out__hlds_out_mode__TypeClassInfo_for_output_107, hlds__hlds_out__hlds_out_mode__InstVarSet_14, (MR_Integer) 0, hlds__hlds_out__hlds_out_mode__Var_26, hlds__hlds_out__hlds_out_mode__STATE_VARIABLE_U_41_41, &hlds__hlds_out__hlds_out_mode__STATE_VARIABLE_U_54_54);
              }
              {
                parse_tree__parse_tree_out_info__add_string_3_p_0(hlds__hlds_out__hlds_out_mode__TypeClassInfo_for_output_107, hlds__hlds_out__hlds_out_mode__Suffix_9, hlds__hlds_out__hlds_out_mode__STATE_VARIABLE_U_54_54, hlds__hlds_out__hlds_out_mode__STATE_VARIABLE_U_33);
              }
            }
            break;
          case (MR_Integer) 3:
            {
              MR_Word hlds__hlds_out__hlds_out_mode__Vars_27 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__hlds_out__hlds_out_mode__Inst_10, (MR_Integer) 1)));
              MR_Word hlds__hlds_out__hlds_out_mode__ConstrainedInst_28 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__hlds_out__hlds_out_mode__Inst_10, (MR_Integer) 2)));
              MR_Box hlds__hlds_out__hlds_out_mode__STATE_VARIABLE_U_51_51;

              {
                parse_tree__parse_tree_out_inst__mercury_format_constrained_inst_vars_6_p_0(hlds__hlds_out__hlds_out_mode__TypeClassInfo_for_output_107, (MR_Integer) 1, hlds__hlds_out__hlds_out_mode__InstVarSet_14, hlds__hlds_out__hlds_out_mode__Vars_27, hlds__hlds_out__hlds_out_mode__ConstrainedInst_28, hlds__hlds_out__hlds_out_mode__STATE_VARIABLE_U_41_41, &hlds__hlds_out__hlds_out_mode__STATE_VARIABLE_U_51_51);
              }
              {
                parse_tree__parse_tree_out_info__add_string_3_p_0(hlds__hlds_out__hlds_out_mode__TypeClassInfo_for_output_107, hlds__hlds_out__hlds_out_mode__Suffix_9, hlds__hlds_out__hlds_out_mode__STATE_VARIABLE_U_51_51, hlds__hlds_out__hlds_out_mode__STATE_VARIABLE_U_33);
              }
            }
            break;
          case (MR_Integer) 4:
            {
              MR_Word hlds__hlds_out__hlds_out_mode__InstName_31 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__hlds_out__hlds_out_mode__Inst_10, (MR_Integer) 1)));

              {
                hlds__hlds_out__hlds_out_mode__mercury_format_structured_inst_name_9_p_0(hlds__hlds_out__hlds_out_mode__TypeClassInfo_for_output_107, hlds__hlds_out__hlds_out_mode__Suffix_9, hlds__hlds_out__hlds_out_mode__InstName_31, (MR_Integer) 1, hlds__hlds_out__hlds_out_mode__Indent_11, hlds__hlds_out__hlds_out_mode__Lang_12, hlds__hlds_out__hlds_out_mode__InclAddr_13, hlds__hlds_out__hlds_out_mode__InstVarSet_14, hlds__hlds_out__hlds_out_mode__STATE_VARIABLE_U_41_41, hlds__hlds_out__hlds_out_mode__STATE_VARIABLE_U_33);
              }
            }
            break;
          case (MR_Integer) 5:
            {
              MR_Word hlds__hlds_out__hlds_out_mode__Name_29 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__hlds_out__hlds_out_mode__Inst_10, (MR_Integer) 1)));
              MR_Word hlds__hlds_out__hlds_out_mode__Args_30 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__hlds_out__hlds_out_mode__Inst_10, (MR_Integer) 2)));
              MR_Word hlds__hlds_out__hlds_out_mode__V_47_47;

              {
                hlds__hlds_out__hlds_out_mode__V_47_47 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
                MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_mode__V_47_47, 0) = ((MR_Box) (hlds__hlds_out__hlds_out_mode__Name_29));
                MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_mode__V_47_47, 1) = ((MR_Box) (hlds__hlds_out__hlds_out_mode__Args_30));
              }
              {
                hlds__hlds_out__hlds_out_mode__mercury_format_structured_inst_name_9_p_0(hlds__hlds_out__hlds_out_mode__TypeClassInfo_for_output_107, hlds__hlds_out__hlds_out_mode__Suffix_9, hlds__hlds_out__hlds_out_mode__V_47_47, (MR_Integer) 1, hlds__hlds_out__hlds_out_mode__Indent_11, hlds__hlds_out__hlds_out_mode__Lang_12, hlds__hlds_out__hlds_out_mode__InclAddr_13, hlds__hlds_out__hlds_out_mode__InstVarSet_14, hlds__hlds_out__hlds_out_mode__STATE_VARIABLE_U_41_41, hlds__hlds_out__hlds_out_mode__STATE_VARIABLE_U_33);
              }
            }
            break;
        }
        break;
    }
  }
}

static void MR_CALL 
hlds__hlds_out__hlds_out_mode__mercury_format_structured_inst_list_7_p_0(
  MR_Word hlds__hlds_out__hlds_out_mode__TypeClassInfo_for_output_29,
  MR_Word hlds__hlds_out__hlds_out_mode__HeadVar__1_1,
  MR_Integer hlds__hlds_out__hlds_out_mode__Indent_2,
  MR_Word hlds__hlds_out__hlds_out_mode__Lang_3,
  MR_Word hlds__hlds_out__hlds_out_mode__InclAddr_4,
  MR_Word hlds__hlds_out__hlds_out_mode__InstVarSet_5,
  MR_Box hlds__hlds_out__hlds_out_mode__STATE_VARIABLE_U_0_6,
  MR_Box * hlds__hlds_out__hlds_out_mode__STATE_VARIABLE_U_7)
{
  while (MR_TRUE)
    {
      /* tailcall optimized into a loop */
      {
        MR_bool hlds__hlds_out__hlds_out_mode__succeeded;

        if ((hlds__hlds_out__hlds_out_mode__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
          *hlds__hlds_out__hlds_out_mode__STATE_VARIABLE_U_7 = hlds__hlds_out__hlds_out_mode__STATE_VARIABLE_U_0_6;
        else
          {
            MR_Word hlds__hlds_out__hlds_out_mode__Inst_15 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__hlds_out__hlds_out_mode__HeadVar__1_1, (MR_Integer) 0)));
            MR_Word hlds__hlds_out__hlds_out_mode__Insts_16 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__hlds_out__hlds_out_mode__HeadVar__1_1, (MR_Integer) 1)));
            MR_String hlds__hlds_out__hlds_out_mode__Suffix_22;
            MR_Box hlds__hlds_out__hlds_out_mode__STATE_VARIABLE_U_27_27;

            if ((hlds__hlds_out__hlds_out_mode__Insts_16 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
              hlds__hlds_out__hlds_out_mode__Suffix_22 = (MR_String) "\n";
            else
              hlds__hlds_out__hlds_out_mode__Suffix_22 = (MR_String) ",\n";
            {
              hlds__hlds_out__hlds_out_mode__mercury_format_structured_inst_8_p_0(hlds__hlds_out__hlds_out_mode__TypeClassInfo_for_output_29, hlds__hlds_out__hlds_out_mode__Suffix_22, hlds__hlds_out__hlds_out_mode__Inst_15, hlds__hlds_out__hlds_out_mode__Indent_2, hlds__hlds_out__hlds_out_mode__Lang_3, hlds__hlds_out__hlds_out_mode__InclAddr_4, hlds__hlds_out__hlds_out_mode__InstVarSet_5, hlds__hlds_out__hlds_out_mode__STATE_VARIABLE_U_0_6, &hlds__hlds_out__hlds_out_mode__STATE_VARIABLE_U_27_27);
            }
            /* direct tailcall eliminated */
            {
              MR_Word hlds__hlds_out__hlds_out_mode__HeadVar__1__tmp_copy_1 = hlds__hlds_out__hlds_out_mode__Insts_16;
              MR_Box hlds__hlds_out__hlds_out_mode__STATE_VARIABLE_U_0__tmp_copy_6 = hlds__hlds_out__hlds_out_mode__STATE_VARIABLE_U_27_27;

              hlds__hlds_out__hlds_out_mode__STATE_VARIABLE_U_0_6 = hlds__hlds_out__hlds_out_mode__STATE_VARIABLE_U_0__tmp_copy_6;
              hlds__hlds_out__hlds_out_mode__HeadVar__1_1 = hlds__hlds_out__hlds_out_mode__HeadVar__1__tmp_copy_1;
            }
            continue;
          }
      }
      break;
    }
}

static void MR_CALL 
hlds__hlds_out__hlds_out_mode__mercury_format_structured_uni_mode_7_p_0(
  MR_Word hlds__hlds_out__hlds_out_mode__TypeClassInfo_for_output_56,
  MR_Word hlds__hlds_out__hlds_out_mode__UniMode_8,
  MR_Integer hlds__hlds_out__hlds_out_mode__Indent_9,
  MR_Word hlds__hlds_out__hlds_out_mode__Lang_10,
  MR_Word hlds__hlds_out__hlds_out_mode__InclAddr_11,
  MR_Word hlds__hlds_out__hlds_out_mode__InstVarSet_12,
  MR_Box hlds__hlds_out__hlds_out_mode__STATE_VARIABLE_U_0_22,
  MR_Box * hlds__hlds_out__hlds_out_mode__STATE_VARIABLE_U_23)
{
  {
    MR_bool hlds__hlds_out__hlds_out_mode__succeeded;
    MR_Word hlds__hlds_out__hlds_out_mode__InstA1_14;
    MR_Word hlds__hlds_out__hlds_out_mode__InstB1_15;
    MR_Word hlds__hlds_out__hlds_out_mode__InstA2_16;
    MR_Word hlds__hlds_out__hlds_out_mode__InstB2_17;
    MR_Integer hlds__hlds_out__hlds_out_mode__InstA1Addr_18;
    MR_Integer hlds__hlds_out__hlds_out_mode__InstA2Addr_19;
    MR_Integer hlds__hlds_out__hlds_out_mode__InstB1Addr_20;
    MR_Integer hlds__hlds_out__hlds_out_mode__InstB2Addr_21;
    MR_Word hlds__hlds_out__hlds_out_mode__V_24_24 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_mode__UniMode_8, (MR_Integer) 0)));
    MR_Word hlds__hlds_out__hlds_out_mode__V_25_25 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_mode__UniMode_8, (MR_Integer) 1)));
    MR_Box hlds__hlds_out__hlds_out_mode__STATE_VARIABLE_U_26_26;
    MR_Box hlds__hlds_out__hlds_out_mode__STATE_VARIABLE_U_28_28;
    MR_Box hlds__hlds_out__hlds_out_mode__STATE_VARIABLE_U_30_30;
    MR_Box hlds__hlds_out__hlds_out_mode__STATE_VARIABLE_U_31_31;
    MR_Box hlds__hlds_out__hlds_out_mode__STATE_VARIABLE_U_33_33;
    MR_Box hlds__hlds_out__hlds_out_mode__STATE_VARIABLE_U_38_38;
    MR_Box hlds__hlds_out__hlds_out_mode__STATE_VARIABLE_U_40_40;
    MR_Box hlds__hlds_out__hlds_out_mode__STATE_VARIABLE_U_47_47;
    void MR_CALL (* hlds__hlds_out__hlds_out_mode__func_0)(MR_Box, MR_Box, MR_Box, MR_Box *);

    hlds__hlds_out__hlds_out_mode__InstA1_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_mode__V_24_24, (MR_Integer) 0)));
    hlds__hlds_out__hlds_out_mode__InstB1_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_mode__V_24_24, (MR_Integer) 1)));
    hlds__hlds_out__hlds_out_mode__InstA2_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_mode__V_25_25, (MR_Integer) 0)));
    hlds__hlds_out__hlds_out_mode__InstB2_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_mode__V_25_25, (MR_Integer) 1)));
{
#define MR_PROC_LABEL hlds__hlds_out__hlds_out_mode__mercury_format_structured_uni_mode_7_p_0

	MR_Word Inst;
	MR_Integer InstAddr;

	Inst =  hlds__hlds_out__hlds_out_mode__InstA1_14 ;
		{

    InstAddr = Inst;


		;}
#undef MR_PROC_LABEL
	 hlds__hlds_out__hlds_out_mode__InstA1Addr_18  = InstAddr;
}
{
#define MR_PROC_LABEL hlds__hlds_out__hlds_out_mode__mercury_format_structured_uni_mode_7_p_0

	MR_Word Inst;
	MR_Integer InstAddr;

	Inst =  hlds__hlds_out__hlds_out_mode__InstA2_16 ;
		{

    InstAddr = Inst;


		;}
#undef MR_PROC_LABEL
	 hlds__hlds_out__hlds_out_mode__InstA2Addr_19  = InstAddr;
}
{
#define MR_PROC_LABEL hlds__hlds_out__hlds_out_mode__mercury_format_structured_uni_mode_7_p_0

	MR_Word Inst;
	MR_Integer InstAddr;

	Inst =  hlds__hlds_out__hlds_out_mode__InstB1_15 ;
		{

    InstAddr = Inst;


		;}
#undef MR_PROC_LABEL
	 hlds__hlds_out__hlds_out_mode__InstB1Addr_20  = InstAddr;
}
{
#define MR_PROC_LABEL hlds__hlds_out__hlds_out_mode__mercury_format_structured_uni_mode_7_p_0

	MR_Word Inst;
	MR_Integer InstAddr;

	Inst =  hlds__hlds_out__hlds_out_mode__InstB2_17 ;
		{

    InstAddr = Inst;


		;}
#undef MR_PROC_LABEL
	 hlds__hlds_out__hlds_out_mode__InstB2Addr_21  = InstAddr;
}
    {
      parse_tree__mercury_to_mercury__mercury_format_tabs_3_p_0(hlds__hlds_out__hlds_out_mode__TypeClassInfo_for_output_56, hlds__hlds_out__hlds_out_mode__Indent_9, hlds__hlds_out__hlds_out_mode__STATE_VARIABLE_U_0_22, &hlds__hlds_out__hlds_out_mode__STATE_VARIABLE_U_26_26);
    }
    hlds__hlds_out__hlds_out_mode__func_0 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_mode__TypeClassInfo_for_output_56, (MR_Integer) 0)), (MR_Integer) 5)));
    {
      hlds__hlds_out__hlds_out_mode__func_0(((MR_Box) hlds__hlds_out__hlds_out_mode__TypeClassInfo_for_output_56), ((MR_Box) ((MR_String) "old lhs inst:\n")), hlds__hlds_out__hlds_out_mode__STATE_VARIABLE_U_26_26, &hlds__hlds_out__hlds_out_mode__STATE_VARIABLE_U_28_28);
    }
    {
      hlds__hlds_out__hlds_out_mode__mercury_format_structured_inst_8_p_0(hlds__hlds_out__hlds_out_mode__TypeClassInfo_for_output_56, (MR_String) "\n", hlds__hlds_out__hlds_out_mode__InstA1_14, hlds__hlds_out__hlds_out_mode__Indent_9, hlds__hlds_out__hlds_out_mode__Lang_10, hlds__hlds_out__hlds_out_mode__InclAddr_11, hlds__hlds_out__hlds_out_mode__InstVarSet_12, hlds__hlds_out__hlds_out_mode__STATE_VARIABLE_U_28_28, &hlds__hlds_out__hlds_out_mode__STATE_VARIABLE_U_30_30);
    }
    {
      parse_tree__mercury_to_mercury__mercury_format_tabs_3_p_0(hlds__hlds_out__hlds_out_mode__TypeClassInfo_for_output_56, hlds__hlds_out__hlds_out_mode__Indent_9, hlds__hlds_out__hlds_out_mode__STATE_VARIABLE_U_30_30, &hlds__hlds_out__hlds_out_mode__STATE_VARIABLE_U_31_31);
    }
    hlds__hlds_out__hlds_out_mode__succeeded = (hlds__hlds_out__hlds_out_mode__InstB1Addr_20 == hlds__hlds_out__hlds_out_mode__InstA1Addr_18);
    if (hlds__hlds_out__hlds_out_mode__succeeded)
      {
        void MR_CALL (* hlds__hlds_out__hlds_out_mode__func_1)(MR_Box, MR_Box, MR_Box, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_mode__TypeClassInfo_for_output_56, (MR_Integer) 0)), (MR_Integer) 5)));

        {
          hlds__hlds_out__hlds_out_mode__func_1(((MR_Box) hlds__hlds_out__hlds_out_mode__TypeClassInfo_for_output_56), ((MR_Box) ((MR_String) "old rhs inst: same as old lhs inst\n")), hlds__hlds_out__hlds_out_mode__STATE_VARIABLE_U_31_31, &hlds__hlds_out__hlds_out_mode__STATE_VARIABLE_U_33_33);
        }
      }
    else
      {
        MR_Box hlds__hlds_out__hlds_out_mode__STATE_VARIABLE_U_35_35;
        void MR_CALL (* hlds__hlds_out__hlds_out_mode__func_2)(MR_Box, MR_Box, MR_Box, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_mode__TypeClassInfo_for_output_56, (MR_Integer) 0)), (MR_Integer) 5)));

        {
          hlds__hlds_out__hlds_out_mode__func_2(((MR_Box) hlds__hlds_out__hlds_out_mode__TypeClassInfo_for_output_56), ((MR_Box) ((MR_String) "old rhs inst:\n")), hlds__hlds_out__hlds_out_mode__STATE_VARIABLE_U_31_31, &hlds__hlds_out__hlds_out_mode__STATE_VARIABLE_U_35_35);
        }
        {
          hlds__hlds_out__hlds_out_mode__mercury_format_structured_inst_8_p_0(hlds__hlds_out__hlds_out_mode__TypeClassInfo_for_output_56, (MR_String) "\n", hlds__hlds_out__hlds_out_mode__InstB1_15, hlds__hlds_out__hlds_out_mode__Indent_9, hlds__hlds_out__hlds_out_mode__Lang_10, hlds__hlds_out__hlds_out_mode__InclAddr_11, hlds__hlds_out__hlds_out_mode__InstVarSet_12, hlds__hlds_out__hlds_out_mode__STATE_VARIABLE_U_35_35, &hlds__hlds_out__hlds_out_mode__STATE_VARIABLE_U_33_33);
        }
      }
    {
      parse_tree__mercury_to_mercury__mercury_format_tabs_3_p_0(hlds__hlds_out__hlds_out_mode__TypeClassInfo_for_output_56, hlds__hlds_out__hlds_out_mode__Indent_9, hlds__hlds_out__hlds_out_mode__STATE_VARIABLE_U_33_33, &hlds__hlds_out__hlds_out_mode__STATE_VARIABLE_U_38_38);
    }
    hlds__hlds_out__hlds_out_mode__succeeded = (hlds__hlds_out__hlds_out_mode__InstA2Addr_19 == hlds__hlds_out__hlds_out_mode__InstA1Addr_18);
    if (hlds__hlds_out__hlds_out_mode__succeeded)
      {
        void MR_CALL (* hlds__hlds_out__hlds_out_mode__func_3)(MR_Box, MR_Box, MR_Box, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_mode__TypeClassInfo_for_output_56, (MR_Integer) 0)), (MR_Integer) 5)));

        {
          hlds__hlds_out__hlds_out_mode__func_3(((MR_Box) hlds__hlds_out__hlds_out_mode__TypeClassInfo_for_output_56), ((MR_Box) ((MR_String) "new lhs inst: unchanged\n")), hlds__hlds_out__hlds_out_mode__STATE_VARIABLE_U_38_38, &hlds__hlds_out__hlds_out_mode__STATE_VARIABLE_U_40_40);
        }
      }
    else
      {
        hlds__hlds_out__hlds_out_mode__succeeded = (hlds__hlds_out__hlds_out_mode__InstA2Addr_19 == hlds__hlds_out__hlds_out_mode__InstB1Addr_20);
        if (hlds__hlds_out__hlds_out_mode__succeeded)
          {
            void MR_CALL (* hlds__hlds_out__hlds_out_mode__func_4)(MR_Box, MR_Box, MR_Box, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_mode__TypeClassInfo_for_output_56, (MR_Integer) 0)), (MR_Integer) 5)));

            {
              hlds__hlds_out__hlds_out_mode__func_4(((MR_Box) hlds__hlds_out__hlds_out_mode__TypeClassInfo_for_output_56), ((MR_Box) ((MR_String) "new lhs inst: changed to old rhs inst\n")), hlds__hlds_out__hlds_out_mode__STATE_VARIABLE_U_38_38, &hlds__hlds_out__hlds_out_mode__STATE_VARIABLE_U_40_40);
            }
          }
        else
          {
            MR_Box hlds__hlds_out__hlds_out_mode__STATE_VARIABLE_U_44_44;
            void MR_CALL (* hlds__hlds_out__hlds_out_mode__func_5)(MR_Box, MR_Box, MR_Box, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_mode__TypeClassInfo_for_output_56, (MR_Integer) 0)), (MR_Integer) 5)));

            {
              hlds__hlds_out__hlds_out_mode__func_5(((MR_Box) hlds__hlds_out__hlds_out_mode__TypeClassInfo_for_output_56), ((MR_Box) ((MR_String) "new lhs inst:\n")), hlds__hlds_out__hlds_out_mode__STATE_VARIABLE_U_38_38, &hlds__hlds_out__hlds_out_mode__STATE_VARIABLE_U_44_44);
            }
            {
              hlds__hlds_out__hlds_out_mode__mercury_format_structured_inst_8_p_0(hlds__hlds_out__hlds_out_mode__TypeClassInfo_for_output_56, (MR_String) "\n", hlds__hlds_out__hlds_out_mode__InstA2_16, hlds__hlds_out__hlds_out_mode__Indent_9, hlds__hlds_out__hlds_out_mode__Lang_10, hlds__hlds_out__hlds_out_mode__InclAddr_11, hlds__hlds_out__hlds_out_mode__InstVarSet_12, hlds__hlds_out__hlds_out_mode__STATE_VARIABLE_U_44_44, &hlds__hlds_out__hlds_out_mode__STATE_VARIABLE_U_40_40);
            }
          }
      }
    {
      parse_tree__mercury_to_mercury__mercury_format_tabs_3_p_0(hlds__hlds_out__hlds_out_mode__TypeClassInfo_for_output_56, hlds__hlds_out__hlds_out_mode__Indent_9, hlds__hlds_out__hlds_out_mode__STATE_VARIABLE_U_40_40, &hlds__hlds_out__hlds_out_mode__STATE_VARIABLE_U_47_47);
    }
    hlds__hlds_out__hlds_out_mode__succeeded = (hlds__hlds_out__hlds_out_mode__InstB2Addr_21 == hlds__hlds_out__hlds_out_mode__InstB1Addr_20);
    if (hlds__hlds_out__hlds_out_mode__succeeded)
      {
        void MR_CALL (* hlds__hlds_out__hlds_out_mode__func_6)(MR_Box, MR_Box, MR_Box, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_mode__TypeClassInfo_for_output_56, (MR_Integer) 0)), (MR_Integer) 5)));

        {
          hlds__hlds_out__hlds_out_mode__func_6(((MR_Box) hlds__hlds_out__hlds_out_mode__TypeClassInfo_for_output_56), ((MR_Box) ((MR_String) "new rhs inst: unchanged\n")), hlds__hlds_out__hlds_out_mode__STATE_VARIABLE_U_47_47, hlds__hlds_out__hlds_out_mode__STATE_VARIABLE_U_23);
        }
      }
    else
      {
        hlds__hlds_out__hlds_out_mode__succeeded = (hlds__hlds_out__hlds_out_mode__InstB2Addr_21 == hlds__hlds_out__hlds_out_mode__InstA2Addr_19);
        if (hlds__hlds_out__hlds_out_mode__succeeded)
          {
            void MR_CALL (* hlds__hlds_out__hlds_out_mode__func_7)(MR_Box, MR_Box, MR_Box, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_mode__TypeClassInfo_for_output_56, (MR_Integer) 0)), (MR_Integer) 5)));

            {
              hlds__hlds_out__hlds_out_mode__func_7(((MR_Box) hlds__hlds_out__hlds_out_mode__TypeClassInfo_for_output_56), ((MR_Box) ((MR_String) "new rhs inst: changed to new lhs inst\n")), hlds__hlds_out__hlds_out_mode__STATE_VARIABLE_U_47_47, hlds__hlds_out__hlds_out_mode__STATE_VARIABLE_U_23);
            }
          }
        else
          {
            MR_Box hlds__hlds_out__hlds_out_mode__STATE_VARIABLE_U_53_53;
            void MR_CALL (* hlds__hlds_out__hlds_out_mode__func_8)(MR_Box, MR_Box, MR_Box, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_mode__TypeClassInfo_for_output_56, (MR_Integer) 0)), (MR_Integer) 5)));

            {
              hlds__hlds_out__hlds_out_mode__func_8(((MR_Box) hlds__hlds_out__hlds_out_mode__TypeClassInfo_for_output_56), ((MR_Box) ((MR_String) "new rhs inst:\n")), hlds__hlds_out__hlds_out_mode__STATE_VARIABLE_U_47_47, &hlds__hlds_out__hlds_out_mode__STATE_VARIABLE_U_53_53);
            }
            {
              hlds__hlds_out__hlds_out_mode__mercury_format_structured_inst_8_p_0(hlds__hlds_out__hlds_out_mode__TypeClassInfo_for_output_56, (MR_String) "\n", hlds__hlds_out__hlds_out_mode__InstB2_17, hlds__hlds_out__hlds_out_mode__Indent_9, hlds__hlds_out__hlds_out_mode__Lang_10, hlds__hlds_out__hlds_out_mode__InclAddr_11, hlds__hlds_out__hlds_out_mode__InstVarSet_12, hlds__hlds_out__hlds_out_mode__STATE_VARIABLE_U_53_53, hlds__hlds_out__hlds_out_mode__STATE_VARIABLE_U_23);
            }
          }
      }
  }
}

static void MR_CALL 
hlds__hlds_out__hlds_out_mode__mercury_format_structured_uni_mode_list_8_p_0(
  MR_Word hlds__hlds_out__hlds_out_mode__TypeClassInfo_for_output_37,
  MR_Word hlds__hlds_out__hlds_out_mode__HeadVar__1_1,
  MR_Integer hlds__hlds_out__hlds_out_mode__ArgNum_2,
  MR_Integer hlds__hlds_out__hlds_out_mode__Indent_3,
  MR_Word hlds__hlds_out__hlds_out_mode__Lang_4,
  MR_Word hlds__hlds_out__hlds_out_mode__InclAddr_5,
  MR_Word hlds__hlds_out__hlds_out_mode__InstVarSet_6,
  MR_Box hlds__hlds_out__hlds_out_mode__STATE_VARIABLE_U_0_7,
  MR_Box * hlds__hlds_out__hlds_out_mode__STATE_VARIABLE_U_8)
{
  while (MR_TRUE)
    {
      /* tailcall optimized into a loop */
      {
        MR_bool hlds__hlds_out__hlds_out_mode__succeeded;

        if ((hlds__hlds_out__hlds_out_mode__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
          *hlds__hlds_out__hlds_out_mode__STATE_VARIABLE_U_8 = hlds__hlds_out__hlds_out_mode__STATE_VARIABLE_U_0_7;
        else
          {
            MR_Word hlds__hlds_out__hlds_out_mode__UniMode_17 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__hlds_out__hlds_out_mode__HeadVar__1_1, (MR_Integer) 0)));
            MR_Word hlds__hlds_out__hlds_out_mode__UniModes_18 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__hlds_out__hlds_out_mode__HeadVar__1_1, (MR_Integer) 1)));
            MR_Box hlds__hlds_out__hlds_out_mode__STATE_VARIABLE_U_27_27;
            MR_Box hlds__hlds_out__hlds_out_mode__STATE_VARIABLE_U_29_29;
            MR_Box hlds__hlds_out__hlds_out_mode__STATE_VARIABLE_U_30_30;
            MR_Box hlds__hlds_out__hlds_out_mode__STATE_VARIABLE_U_32_32;
            MR_Box hlds__hlds_out__hlds_out_mode__STATE_VARIABLE_U_33_33;
            MR_Integer hlds__hlds_out__hlds_out_mode__V_34_34;
            void MR_CALL (* hlds__hlds_out__hlds_out_mode__func_0)(MR_Box, MR_Box, MR_Box, MR_Box *);
            void MR_CALL (* hlds__hlds_out__hlds_out_mode__func_1)(MR_Box, MR_Box, MR_Box, MR_Box *);
            void MR_CALL (* hlds__hlds_out__hlds_out_mode__func_2)(MR_Box, MR_Box, MR_Box, MR_Box *);

            {
              parse_tree__mercury_to_mercury__mercury_format_tabs_3_p_0(hlds__hlds_out__hlds_out_mode__TypeClassInfo_for_output_37, hlds__hlds_out__hlds_out_mode__Indent_3, hlds__hlds_out__hlds_out_mode__STATE_VARIABLE_U_0_7, &hlds__hlds_out__hlds_out_mode__STATE_VARIABLE_U_27_27);
            }
            hlds__hlds_out__hlds_out_mode__func_0 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_mode__TypeClassInfo_for_output_37, (MR_Integer) 0)), (MR_Integer) 5)));
            {
              hlds__hlds_out__hlds_out_mode__func_0(((MR_Box) hlds__hlds_out__hlds_out_mode__TypeClassInfo_for_output_37), ((MR_Box) ((MR_String) "argument ")), hlds__hlds_out__hlds_out_mode__STATE_VARIABLE_U_27_27, &hlds__hlds_out__hlds_out_mode__STATE_VARIABLE_U_29_29);
            }
            hlds__hlds_out__hlds_out_mode__func_1 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_mode__TypeClassInfo_for_output_37, (MR_Integer) 0)), (MR_Integer) 8)));
            {
              hlds__hlds_out__hlds_out_mode__func_1(((MR_Box) hlds__hlds_out__hlds_out_mode__TypeClassInfo_for_output_37), ((MR_Box) (hlds__hlds_out__hlds_out_mode__ArgNum_2)), hlds__hlds_out__hlds_out_mode__STATE_VARIABLE_U_29_29, &hlds__hlds_out__hlds_out_mode__STATE_VARIABLE_U_30_30);
            }
            hlds__hlds_out__hlds_out_mode__func_2 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_mode__TypeClassInfo_for_output_37, (MR_Integer) 0)), (MR_Integer) 5)));
            {
              hlds__hlds_out__hlds_out_mode__func_2(((MR_Box) hlds__hlds_out__hlds_out_mode__TypeClassInfo_for_output_37), ((MR_Box) ((MR_String) ":\n")), hlds__hlds_out__hlds_out_mode__STATE_VARIABLE_U_30_30, &hlds__hlds_out__hlds_out_mode__STATE_VARIABLE_U_32_32);
            }
            {
              hlds__hlds_out__hlds_out_mode__mercury_format_structured_uni_mode_7_p_0(hlds__hlds_out__hlds_out_mode__TypeClassInfo_for_output_37, hlds__hlds_out__hlds_out_mode__UniMode_17, hlds__hlds_out__hlds_out_mode__Indent_3, hlds__hlds_out__hlds_out_mode__Lang_4, hlds__hlds_out__hlds_out_mode__InclAddr_5, hlds__hlds_out__hlds_out_mode__InstVarSet_6, hlds__hlds_out__hlds_out_mode__STATE_VARIABLE_U_32_32, &hlds__hlds_out__hlds_out_mode__STATE_VARIABLE_U_33_33);
            }
            hlds__hlds_out__hlds_out_mode__V_34_34 = (hlds__hlds_out__hlds_out_mode__ArgNum_2 + (MR_Integer) 1);
            /* direct tailcall eliminated */
            {
              MR_Word hlds__hlds_out__hlds_out_mode__HeadVar__1__tmp_copy_1 = hlds__hlds_out__hlds_out_mode__UniModes_18;
              MR_Integer hlds__hlds_out__hlds_out_mode__ArgNum__tmp_copy_2 = hlds__hlds_out__hlds_out_mode__V_34_34;
              MR_Box hlds__hlds_out__hlds_out_mode__STATE_VARIABLE_U_0__tmp_copy_7 = hlds__hlds_out__hlds_out_mode__STATE_VARIABLE_U_33_33;

              hlds__hlds_out__hlds_out_mode__STATE_VARIABLE_U_0_7 = hlds__hlds_out__hlds_out_mode__STATE_VARIABLE_U_0__tmp_copy_7;
              hlds__hlds_out__hlds_out_mode__ArgNum_2 = hlds__hlds_out__hlds_out_mode__ArgNum__tmp_copy_2;
              hlds__hlds_out__hlds_out_mode__HeadVar__1_1 = hlds__hlds_out__hlds_out_mode__HeadVar__1__tmp_copy_1;
            }
            continue;
          }
      }
      break;
    }
}

MR_String MR_CALL 
hlds__hlds_out__hlds_out_mode__mercury_uni_mode_list_to_string_2_f_0(
  MR_Word hlds__hlds_out__hlds_out_mode__UniModes_4,
  MR_Word hlds__hlds_out__hlds_out_mode__InstVarSet_5)
{
  {
    MR_bool hlds__hlds_out__hlds_out_mode__succeeded;
    MR_String hlds__hlds_out__hlds_out_mode__String_6;
    MR_Box hlds__hlds_out__hlds_out_mode__conv0_String_6;

    {
      hlds__hlds_out__hlds_out_mode__mercury_format_uni_mode_list_4_p_0((MR_Word) &hlds__hlds_out__hlds_out_mode_scalar_common_1[1], hlds__hlds_out__hlds_out_mode__UniModes_4, hlds__hlds_out__hlds_out_mode__InstVarSet_5, ((MR_Box) ((MR_String) "")), &hlds__hlds_out__hlds_out_mode__conv0_String_6);
    }
    hlds__hlds_out__hlds_out_mode__String_6 = ((MR_String) hlds__hlds_out__hlds_out_mode__conv0_String_6);
    return hlds__hlds_out__hlds_out_mode__String_6;
  }
}

void MR_CALL 
hlds__hlds_out__hlds_out_mode__mercury_output_uni_mode_list_4_p_0(
  MR_Word hlds__hlds_out__hlds_out_mode__UniModes_5,
  MR_Word hlds__hlds_out__hlds_out_mode__InstVarSet_6)
{
  {
    MR_bool hlds__hlds_out__hlds_out_mode__succeeded;
    MR_Box hlds__hlds_out__hlds_out_mode__conv0_STATE_VARIABLE_IO_9;

    {
      hlds__hlds_out__hlds_out_mode__mercury_format_uni_mode_list_4_p_0((MR_Word) &hlds__hlds_out__hlds_out_mode_scalar_common_1[0], hlds__hlds_out__hlds_out_mode__UniModes_5, hlds__hlds_out__hlds_out_mode__InstVarSet_6, ((MR_Box) ((MR_Integer) 0)), &hlds__hlds_out__hlds_out_mode__conv0_STATE_VARIABLE_IO_9);
    }
  }
}

MR_String MR_CALL 
hlds__hlds_out__hlds_out_mode__mercury_uni_mode_to_string_2_f_0(
  MR_Word hlds__hlds_out__hlds_out_mode__UniMode_4,
  MR_Word hlds__hlds_out__hlds_out_mode__InstVarSet_5)
{
  {
    MR_bool hlds__hlds_out__hlds_out_mode__succeeded;
    MR_String hlds__hlds_out__hlds_out_mode__String_6;
    MR_Word hlds__hlds_out__hlds_out_mode__TypeClassInfo_for_output_8 = (MR_Word) &hlds__hlds_out__hlds_out_mode_scalar_common_1[1];
    MR_Word hlds__hlds_out__hlds_out_mode__InstA1_14;
    MR_Word hlds__hlds_out__hlds_out_mode__InstB1_15;
    MR_Word hlds__hlds_out__hlds_out_mode__InstA2_16;
    MR_Word hlds__hlds_out__hlds_out_mode__InstB2_17;
    MR_Word hlds__hlds_out__hlds_out_mode__V_18_18 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_mode__UniMode_4, (MR_Integer) 0)));
    MR_Word hlds__hlds_out__hlds_out_mode__V_19_19 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_mode__UniMode_4, (MR_Integer) 1)));
    MR_Word hlds__hlds_out__hlds_out_mode__V_21_21;
    MR_String hlds__hlds_out__hlds_out_mode__STATE_VARIABLE_IO_18_22;
    MR_String hlds__hlds_out__hlds_out_mode__STATE_VARIABLE_IO_20_24;
    MR_Word hlds__hlds_out__hlds_out_mode__V_26_26;
    MR_Box hlds__hlds_out__hlds_out_mode__conv0_STATE_VARIABLE_IO_18_22;
    void MR_CALL (* hlds__hlds_out__hlds_out_mode__func_1)(MR_Box, MR_Box, MR_Box, MR_Box *);
    MR_Box hlds__hlds_out__hlds_out_mode__conv2_STATE_VARIABLE_IO_20_24;
    MR_Box hlds__hlds_out__hlds_out_mode__conv3_String_6;

    hlds__hlds_out__hlds_out_mode__InstA1_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_mode__V_18_18, (MR_Integer) 0)));
    hlds__hlds_out__hlds_out_mode__InstB1_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_mode__V_18_18, (MR_Integer) 1)));
    hlds__hlds_out__hlds_out_mode__InstA2_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_mode__V_19_19, (MR_Integer) 0)));
    hlds__hlds_out__hlds_out_mode__InstB2_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_mode__V_19_19, (MR_Integer) 1)));
    {
      hlds__hlds_out__hlds_out_mode__V_21_21 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_mode__V_21_21, 0) = ((MR_Box) (hlds__hlds_out__hlds_out_mode__InstA1_14));
      MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_mode__V_21_21, 1) = ((MR_Box) (hlds__hlds_out__hlds_out_mode__InstA2_16));
    }
    {
      parse_tree__parse_tree_out_inst__mercury_format_mode_5_p_0(hlds__hlds_out__hlds_out_mode__TypeClassInfo_for_output_8, (MR_Integer) 1, hlds__hlds_out__hlds_out_mode__InstVarSet_5, hlds__hlds_out__hlds_out_mode__V_21_21, ((MR_Box) ((MR_String) "")), &hlds__hlds_out__hlds_out_mode__conv0_STATE_VARIABLE_IO_18_22);
    }
    hlds__hlds_out__hlds_out_mode__STATE_VARIABLE_IO_18_22 = ((MR_String) hlds__hlds_out__hlds_out_mode__conv0_STATE_VARIABLE_IO_18_22);
    hlds__hlds_out__hlds_out_mode__func_1 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_mode__TypeClassInfo_for_output_8, (MR_Integer) 0)), (MR_Integer) 5)));
    {
      hlds__hlds_out__hlds_out_mode__func_1(((MR_Box) hlds__hlds_out__hlds_out_mode__TypeClassInfo_for_output_8), ((MR_Box) ((MR_String) " = ")), ((MR_Box) (hlds__hlds_out__hlds_out_mode__STATE_VARIABLE_IO_18_22)), &hlds__hlds_out__hlds_out_mode__conv2_STATE_VARIABLE_IO_20_24);
    }
    hlds__hlds_out__hlds_out_mode__STATE_VARIABLE_IO_20_24 = ((MR_String) hlds__hlds_out__hlds_out_mode__conv2_STATE_VARIABLE_IO_20_24);
    {
      hlds__hlds_out__hlds_out_mode__V_26_26 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_mode__V_26_26, 0) = ((MR_Box) (hlds__hlds_out__hlds_out_mode__InstB1_15));
      MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_mode__V_26_26, 1) = ((MR_Box) (hlds__hlds_out__hlds_out_mode__InstB2_17));
    }
    {
      parse_tree__parse_tree_out_inst__mercury_format_mode_5_p_0(hlds__hlds_out__hlds_out_mode__TypeClassInfo_for_output_8, (MR_Integer) 1, hlds__hlds_out__hlds_out_mode__InstVarSet_5, hlds__hlds_out__hlds_out_mode__V_26_26, ((MR_Box) (hlds__hlds_out__hlds_out_mode__STATE_VARIABLE_IO_20_24)), &hlds__hlds_out__hlds_out_mode__conv3_String_6);
    }
    hlds__hlds_out__hlds_out_mode__String_6 = ((MR_String) hlds__hlds_out__hlds_out_mode__conv3_String_6);
    return hlds__hlds_out__hlds_out_mode__String_6;
  }
}

void MR_CALL 
hlds__hlds_out__hlds_out_mode__mercury_output_uni_mode_4_p_0(
  MR_Word hlds__hlds_out__hlds_out_mode__UniMode_5,
  MR_Word hlds__hlds_out__hlds_out_mode__InstVarSet_6)
{
  {
    MR_bool hlds__hlds_out__hlds_out_mode__succeeded;
    MR_Word hlds__hlds_out__hlds_out_mode__TypeClassInfo_for_output_11 = (MR_Word) &hlds__hlds_out__hlds_out_mode_scalar_common_1[0];
    MR_Word hlds__hlds_out__hlds_out_mode__InstA1_17;
    MR_Word hlds__hlds_out__hlds_out_mode__InstB1_18;
    MR_Word hlds__hlds_out__hlds_out_mode__InstA2_19;
    MR_Word hlds__hlds_out__hlds_out_mode__InstB2_20;
    MR_Word hlds__hlds_out__hlds_out_mode__V_21_21 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_mode__UniMode_5, (MR_Integer) 0)));
    MR_Word hlds__hlds_out__hlds_out_mode__V_22_22 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_mode__UniMode_5, (MR_Integer) 1)));
    MR_Word hlds__hlds_out__hlds_out_mode__V_24_24;
    MR_Word hlds__hlds_out__hlds_out_mode__V_29_29;
    MR_Box hlds__hlds_out__hlds_out_mode__conv0_STATE_VARIABLE_IO_18_25;
    void MR_CALL (* hlds__hlds_out__hlds_out_mode__func_1)(MR_Box, MR_Box, MR_Box, MR_Box *);
    MR_Box hlds__hlds_out__hlds_out_mode__conv2_STATE_VARIABLE_IO_20_27;
    MR_Box hlds__hlds_out__hlds_out_mode__conv3_STATE_VARIABLE_IO_9;

    hlds__hlds_out__hlds_out_mode__InstA1_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_mode__V_21_21, (MR_Integer) 0)));
    hlds__hlds_out__hlds_out_mode__InstB1_18 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_mode__V_21_21, (MR_Integer) 1)));
    hlds__hlds_out__hlds_out_mode__InstA2_19 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_mode__V_22_22, (MR_Integer) 0)));
    hlds__hlds_out__hlds_out_mode__InstB2_20 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_mode__V_22_22, (MR_Integer) 1)));
    {
      hlds__hlds_out__hlds_out_mode__V_24_24 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_mode__V_24_24, 0) = ((MR_Box) (hlds__hlds_out__hlds_out_mode__InstA1_17));
      MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_mode__V_24_24, 1) = ((MR_Box) (hlds__hlds_out__hlds_out_mode__InstA2_19));
    }
    {
      parse_tree__parse_tree_out_inst__mercury_format_mode_5_p_0(hlds__hlds_out__hlds_out_mode__TypeClassInfo_for_output_11, (MR_Integer) 1, hlds__hlds_out__hlds_out_mode__InstVarSet_6, hlds__hlds_out__hlds_out_mode__V_24_24, ((MR_Box) ((MR_Integer) 0)), &hlds__hlds_out__hlds_out_mode__conv0_STATE_VARIABLE_IO_18_25);
    }
    hlds__hlds_out__hlds_out_mode__func_1 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_mode__TypeClassInfo_for_output_11, (MR_Integer) 0)), (MR_Integer) 5)));
    {
      hlds__hlds_out__hlds_out_mode__func_1(((MR_Box) hlds__hlds_out__hlds_out_mode__TypeClassInfo_for_output_11), ((MR_Box) ((MR_String) " = ")), ((MR_Box) ((MR_Integer) 0)), &hlds__hlds_out__hlds_out_mode__conv2_STATE_VARIABLE_IO_20_27);
    }
    {
      hlds__hlds_out__hlds_out_mode__V_29_29 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_mode__V_29_29, 0) = ((MR_Box) (hlds__hlds_out__hlds_out_mode__InstB1_18));
      MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_mode__V_29_29, 1) = ((MR_Box) (hlds__hlds_out__hlds_out_mode__InstB2_20));
    }
    {
      parse_tree__parse_tree_out_inst__mercury_format_mode_5_p_0(hlds__hlds_out__hlds_out_mode__TypeClassInfo_for_output_11, (MR_Integer) 1, hlds__hlds_out__hlds_out_mode__InstVarSet_6, hlds__hlds_out__hlds_out_mode__V_29_29, ((MR_Box) ((MR_Integer) 0)), &hlds__hlds_out__hlds_out_mode__conv3_STATE_VARIABLE_IO_9);
    }
  }
}

MR_String MR_CALL 
hlds__hlds_out__hlds_out_mode__mercury_structured_uni_mode_list_to_string_5_f_0(
  MR_Word hlds__hlds_out__hlds_out_mode__Insts_7,
  MR_Integer hlds__hlds_out__hlds_out_mode__Indent_8,
  MR_Word hlds__hlds_out__hlds_out_mode__Lang_9,
  MR_Word hlds__hlds_out__hlds_out_mode__InclAddr_10,
  MR_Word hlds__hlds_out__hlds_out_mode__InstVarSet_11)
{
  {
    MR_bool hlds__hlds_out__hlds_out_mode__succeeded;
    MR_String hlds__hlds_out__hlds_out_mode__String_12;
    MR_Box hlds__hlds_out__hlds_out_mode__conv0_String_12;

    {
      hlds__hlds_out__hlds_out_mode__mercury_format_structured_uni_mode_list_8_p_0((MR_Word) &hlds__hlds_out__hlds_out_mode_scalar_common_1[1], hlds__hlds_out__hlds_out_mode__Insts_7, (MR_Integer) 1, hlds__hlds_out__hlds_out_mode__Indent_8, hlds__hlds_out__hlds_out_mode__Lang_9, hlds__hlds_out__hlds_out_mode__InclAddr_10, hlds__hlds_out__hlds_out_mode__InstVarSet_11, ((MR_Box) ((MR_String) "")), &hlds__hlds_out__hlds_out_mode__conv0_String_12);
    }
    hlds__hlds_out__hlds_out_mode__String_12 = ((MR_String) hlds__hlds_out__hlds_out_mode__conv0_String_12);
    return hlds__hlds_out__hlds_out_mode__String_12;
  }
}

void MR_CALL 
hlds__hlds_out__hlds_out_mode__mercury_output_structured_uni_mode_list_7_p_0(
  MR_Word hlds__hlds_out__hlds_out_mode__Insts_8,
  MR_Integer hlds__hlds_out__hlds_out_mode__Indent_9,
  MR_Word hlds__hlds_out__hlds_out_mode__Lang_10,
  MR_Word hlds__hlds_out__hlds_out_mode__InclAddr_11,
  MR_Word hlds__hlds_out__hlds_out_mode__InstVarSet_12)
{
  {
    MR_bool hlds__hlds_out__hlds_out_mode__succeeded;
    MR_Box hlds__hlds_out__hlds_out_mode__conv0_STATE_VARIABLE_IO_15;

    {
      hlds__hlds_out__hlds_out_mode__mercury_format_structured_uni_mode_list_8_p_0((MR_Word) &hlds__hlds_out__hlds_out_mode_scalar_common_1[0], hlds__hlds_out__hlds_out_mode__Insts_8, (MR_Integer) 1, hlds__hlds_out__hlds_out_mode__Indent_9, hlds__hlds_out__hlds_out_mode__Lang_10, hlds__hlds_out__hlds_out_mode__InclAddr_11, hlds__hlds_out__hlds_out_mode__InstVarSet_12, ((MR_Box) ((MR_Integer) 0)), &hlds__hlds_out__hlds_out_mode__conv0_STATE_VARIABLE_IO_15);
    }
  }
}

MR_String MR_CALL 
hlds__hlds_out__hlds_out_mode__mercury_structured_uni_mode_to_string_5_f_0(
  MR_Word hlds__hlds_out__hlds_out_mode__Inst_7,
  MR_Integer hlds__hlds_out__hlds_out_mode__Indent_8,
  MR_Word hlds__hlds_out__hlds_out_mode__Lang_9,
  MR_Word hlds__hlds_out__hlds_out_mode__InclAddr_10,
  MR_Word hlds__hlds_out__hlds_out_mode__InstVarSet_11)
{
  {
    MR_bool hlds__hlds_out__hlds_out_mode__succeeded;
    MR_String hlds__hlds_out__hlds_out_mode__String_12;
    MR_Box hlds__hlds_out__hlds_out_mode__conv0_String_12;

    {
      hlds__hlds_out__hlds_out_mode__mercury_format_structured_uni_mode_7_p_0((MR_Word) &hlds__hlds_out__hlds_out_mode_scalar_common_1[1], hlds__hlds_out__hlds_out_mode__Inst_7, hlds__hlds_out__hlds_out_mode__Indent_8, hlds__hlds_out__hlds_out_mode__Lang_9, hlds__hlds_out__hlds_out_mode__InclAddr_10, hlds__hlds_out__hlds_out_mode__InstVarSet_11, ((MR_Box) ((MR_String) "")), &hlds__hlds_out__hlds_out_mode__conv0_String_12);
    }
    hlds__hlds_out__hlds_out_mode__String_12 = ((MR_String) hlds__hlds_out__hlds_out_mode__conv0_String_12);
    return hlds__hlds_out__hlds_out_mode__String_12;
  }
}

void MR_CALL 
hlds__hlds_out__hlds_out_mode__mercury_output_structured_uni_mode_7_p_0(
  MR_Word hlds__hlds_out__hlds_out_mode__Inst_8,
  MR_Integer hlds__hlds_out__hlds_out_mode__Indent_9,
  MR_Word hlds__hlds_out__hlds_out_mode__Lang_10,
  MR_Word hlds__hlds_out__hlds_out_mode__InclAddr_11,
  MR_Word hlds__hlds_out__hlds_out_mode__InstVarSet_12)
{
  {
    MR_bool hlds__hlds_out__hlds_out_mode__succeeded;
    MR_Box hlds__hlds_out__hlds_out_mode__conv0_STATE_VARIABLE_IO_15;

    {
      hlds__hlds_out__hlds_out_mode__mercury_format_structured_uni_mode_7_p_0((MR_Word) &hlds__hlds_out__hlds_out_mode_scalar_common_1[0], hlds__hlds_out__hlds_out_mode__Inst_8, hlds__hlds_out__hlds_out_mode__Indent_9, hlds__hlds_out__hlds_out_mode__Lang_10, hlds__hlds_out__hlds_out_mode__InclAddr_11, hlds__hlds_out__hlds_out_mode__InstVarSet_12, ((MR_Box) ((MR_Integer) 0)), &hlds__hlds_out__hlds_out_mode__conv0_STATE_VARIABLE_IO_15);
    }
  }
}

MR_String MR_CALL 
hlds__hlds_out__hlds_out_mode__mercury_structured_inst_to_string_5_f_0(
  MR_Word hlds__hlds_out__hlds_out_mode__Inst_7,
  MR_Integer hlds__hlds_out__hlds_out_mode__Indent_8,
  MR_Word hlds__hlds_out__hlds_out_mode__Lang_9,
  MR_Word hlds__hlds_out__hlds_out_mode__InclAddr_10,
  MR_Word hlds__hlds_out__hlds_out_mode__InstVarSet_11)
{
  {
    MR_bool hlds__hlds_out__hlds_out_mode__succeeded;
    MR_String hlds__hlds_out__hlds_out_mode__String_12;
    MR_Box hlds__hlds_out__hlds_out_mode__conv0_String_12;

    {
      hlds__hlds_out__hlds_out_mode__mercury_format_structured_inst_8_p_0((MR_Word) &hlds__hlds_out__hlds_out_mode_scalar_common_1[1], (MR_String) "\n", hlds__hlds_out__hlds_out_mode__Inst_7, hlds__hlds_out__hlds_out_mode__Indent_8, hlds__hlds_out__hlds_out_mode__Lang_9, hlds__hlds_out__hlds_out_mode__InclAddr_10, hlds__hlds_out__hlds_out_mode__InstVarSet_11, ((MR_Box) ((MR_String) "")), &hlds__hlds_out__hlds_out_mode__conv0_String_12);
    }
    hlds__hlds_out__hlds_out_mode__String_12 = ((MR_String) hlds__hlds_out__hlds_out_mode__conv0_String_12);
    return hlds__hlds_out__hlds_out_mode__String_12;
  }
}

void MR_CALL 
hlds__hlds_out__hlds_out_mode__mercury_output_structured_inst_7_p_0(
  MR_Word hlds__hlds_out__hlds_out_mode__Inst_8,
  MR_Integer hlds__hlds_out__hlds_out_mode__Indent_9,
  MR_Word hlds__hlds_out__hlds_out_mode__Lang_10,
  MR_Word hlds__hlds_out__hlds_out_mode__InclAddr_11,
  MR_Word hlds__hlds_out__hlds_out_mode__InstVarSet_12)
{
  {
    MR_bool hlds__hlds_out__hlds_out_mode__succeeded;
    MR_Box hlds__hlds_out__hlds_out_mode__conv0_STATE_VARIABLE_U_15;

    {
      hlds__hlds_out__hlds_out_mode__mercury_format_structured_inst_8_p_0((MR_Word) &hlds__hlds_out__hlds_out_mode_scalar_common_1[0], (MR_String) "\n", hlds__hlds_out__hlds_out_mode__Inst_8, hlds__hlds_out__hlds_out_mode__Indent_9, hlds__hlds_out__hlds_out_mode__Lang_10, hlds__hlds_out__hlds_out_mode__InclAddr_11, hlds__hlds_out__hlds_out_mode__InstVarSet_12, ((MR_Box) ((MR_Integer) 0)), &hlds__hlds_out__hlds_out_mode__conv0_STATE_VARIABLE_U_15);
    }
  }
}

MR_String MR_CALL 
hlds__hlds_out__hlds_out_mode__mercury_structured_inst_list_to_string_5_f_0(
  MR_Word hlds__hlds_out__hlds_out_mode__Insts_7,
  MR_Integer hlds__hlds_out__hlds_out_mode__Indent_8,
  MR_Word hlds__hlds_out__hlds_out_mode__Lang_9,
  MR_Word hlds__hlds_out__hlds_out_mode__InclAddr_10,
  MR_Word hlds__hlds_out__hlds_out_mode__InstVarSet_11)
{
  {
    MR_bool hlds__hlds_out__hlds_out_mode__succeeded;
    MR_String hlds__hlds_out__hlds_out_mode__String_12;
    MR_Box hlds__hlds_out__hlds_out_mode__conv0_String_12;

    {
      hlds__hlds_out__hlds_out_mode__mercury_format_structured_inst_list_7_p_0((MR_Word) &hlds__hlds_out__hlds_out_mode_scalar_common_1[1], hlds__hlds_out__hlds_out_mode__Insts_7, hlds__hlds_out__hlds_out_mode__Indent_8, hlds__hlds_out__hlds_out_mode__Lang_9, hlds__hlds_out__hlds_out_mode__InclAddr_10, hlds__hlds_out__hlds_out_mode__InstVarSet_11, ((MR_Box) ((MR_String) "")), &hlds__hlds_out__hlds_out_mode__conv0_String_12);
    }
    hlds__hlds_out__hlds_out_mode__String_12 = ((MR_String) hlds__hlds_out__hlds_out_mode__conv0_String_12);
    return hlds__hlds_out__hlds_out_mode__String_12;
  }
}

void MR_CALL 
hlds__hlds_out__hlds_out_mode__mercury_output_structured_inst_list_7_p_0(
  MR_Word hlds__hlds_out__hlds_out_mode__Insts_8,
  MR_Integer hlds__hlds_out__hlds_out_mode__Indent_9,
  MR_Word hlds__hlds_out__hlds_out_mode__Lang_10,
  MR_Word hlds__hlds_out__hlds_out_mode__InclAddr_11,
  MR_Word hlds__hlds_out__hlds_out_mode__InstVarSet_12)
{
  {
    MR_bool hlds__hlds_out__hlds_out_mode__succeeded;
    MR_Box hlds__hlds_out__hlds_out_mode__conv0_STATE_VARIABLE_IO_15;

    {
      hlds__hlds_out__hlds_out_mode__mercury_format_structured_inst_list_7_p_0((MR_Word) &hlds__hlds_out__hlds_out_mode_scalar_common_1[0], hlds__hlds_out__hlds_out_mode__Insts_8, hlds__hlds_out__hlds_out_mode__Indent_9, hlds__hlds_out__hlds_out_mode__Lang_10, hlds__hlds_out__hlds_out_mode__InclAddr_11, hlds__hlds_out__hlds_out_mode__InstVarSet_12, ((MR_Box) ((MR_Integer) 0)), &hlds__hlds_out__hlds_out_mode__conv0_STATE_VARIABLE_IO_15);
    }
  }
}

void MR_CALL 
hlds__hlds_out__hlds_out_mode__write_var_inst_list_6_p_0(
  MR_Word hlds__hlds_out__hlds_out_mode__VarSet_1,
  MR_Word hlds__hlds_out__hlds_out_mode__AppendVarNums_2,
  MR_Integer hlds__hlds_out__hlds_out_mode__Indent_3,
  MR_Word hlds__hlds_out__hlds_out_mode__HeadVar__4_4)
{
  while (MR_TRUE)
    {
      /* tailcall optimized into a loop */
      {
        MR_bool hlds__hlds_out__hlds_out_mode__succeeded;

        if ((hlds__hlds_out__hlds_out_mode__HeadVar__4_4 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
          {
          }
        else
          {
            MR_Word hlds__hlds_out__hlds_out_mode__Var_16;
            MR_Word hlds__hlds_out__hlds_out_mode__Inst_17;
            MR_Word hlds__hlds_out__hlds_out_mode__VarsInsts_18 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__hlds_out__hlds_out_mode__HeadVar__4_4, (MR_Integer) 1)));
            MR_Word hlds__hlds_out__hlds_out_mode__InstVarSet_20;
            MR_Word hlds__hlds_out__hlds_out_mode__V_25_25 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__hlds_out__hlds_out_mode__HeadVar__4_4, (MR_Integer) 0)));

            hlds__hlds_out__hlds_out_mode__Var_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_mode__V_25_25, (MR_Integer) 0)));
            hlds__hlds_out__hlds_out_mode__Inst_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_mode__V_25_25, (MR_Integer) 1)));
            {
              parse_tree__parse_tree_out_term__mercury_output_var_5_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0, hlds__hlds_out__hlds_out_mode__VarSet_1, hlds__hlds_out__hlds_out_mode__AppendVarNums_2, hlds__hlds_out__hlds_out_mode__Var_16);
            }
            {
              mercury__io__write_string_3_p_0((MR_String) " -> ");
            }
            {
              mercury__varset__init_1_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_inst_var_type_0, &hlds__hlds_out__hlds_out_mode__InstVarSet_20);
            }
            {
              parse_tree__parse_tree_out_inst__mercury_output_inst_5_p_0((MR_Integer) 1, hlds__hlds_out__hlds_out_mode__InstVarSet_20, hlds__hlds_out__hlds_out_mode__Inst_17);
            }
            if ((hlds__hlds_out__hlds_out_mode__VarsInsts_18 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
              {
              }
            else
              {
                {
                  parse_tree__mercury_to_mercury__mercury_output_newline_3_p_0(hlds__hlds_out__hlds_out_mode__Indent_3);
                }
                {
                  mercury__io__write_string_3_p_0((MR_String) "%            ");
                }
                /* direct tailcall eliminated */
                {
                  MR_Word hlds__hlds_out__hlds_out_mode__HeadVar__4__tmp_copy_4 = hlds__hlds_out__hlds_out_mode__VarsInsts_18;

                  hlds__hlds_out__hlds_out_mode__HeadVar__4_4 = hlds__hlds_out__hlds_out_mode__HeadVar__4__tmp_copy_4;
                }
                continue;
              }
          }
      }
      break;
    }
}

void MR_CALL 
hlds__hlds_out__hlds_out_mode__write_instmap_6_p_0(
  MR_Word hlds__hlds_out__hlds_out_mode__VarSet_7,
  MR_Word hlds__hlds_out__hlds_out_mode__AppendVarNums_8,
  MR_Integer hlds__hlds_out__hlds_out_mode__Indent_9,
  MR_Word hlds__hlds_out__hlds_out_mode__InstMap_10)
{
  {
    MR_bool hlds__hlds_out__hlds_out_mode__succeeded;

    {
      hlds__hlds_out__hlds_out_mode__succeeded = hlds__instmap__instmap_is_unreachable_1_p_0(hlds__hlds_out__hlds_out_mode__InstMap_10);
    }
    if (hlds__hlds_out__hlds_out_mode__succeeded)
      {
        {
          mercury__io__write_string_3_p_0((MR_String) "unreachable");
        }
      }
    else
      {
        MR_Word hlds__hlds_out__hlds_out_mode__AssocList_12;

        {
          hlds__instmap__instmap_to_assoc_list_2_p_0(hlds__hlds_out__hlds_out_mode__InstMap_10, &hlds__hlds_out__hlds_out_mode__AssocList_12);
        }
        {
          hlds__hlds_out__hlds_out_mode__write_var_inst_list_6_p_0(hlds__hlds_out__hlds_out_mode__VarSet_7, hlds__hlds_out__hlds_out_mode__AppendVarNums_8, hlds__hlds_out__hlds_out_mode__Indent_9, hlds__hlds_out__hlds_out_mode__AssocList_12);
        }
      }
  }
}

void mercury__hlds__hlds_out__hlds_out_mode__init(void)
{
}

void mercury__hlds__hlds_out__hlds_out_mode__init_type_tables(void)
{
	static MR_bool initialised = MR_FALSE;
	if (initialised) return;
	initialised = MR_TRUE;

	MR_register_type_ctor_info(&hlds__hlds_out__hlds_out_mode__hlds__hlds_out__hlds_out_mode__type_ctor_info_incl_addr_0);
}

void mercury__hlds__hlds_out__hlds_out_mode__init_debugger(void)
{
	MR_fatal_error("debugger initialization in MLDS grade");
}

/* ensure everything is compiled with the same grade */
static const void *const MR_grade = &MR_GRADE_VAR;

/* :- end_module hlds.hlds_out.hlds_out_mode. */
