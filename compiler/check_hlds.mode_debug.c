/*
** Automatically generated from `mode_debug.m'
** by the Mercury compiler,
** version rotd-2014-10-24
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


/* :- module check_hlds.mode_debug. */
/* :- implementation. */

/*
INIT mercury__check_hlds__mode_debug__init
ENDINIT
*/

#include "check_hlds.mode_debug.mih"


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
#include "deconstruct.mih"
#include "digraph.mih"
#include "enum.mih"
#include "getopt_io.mih"
#include "hlds.mih"
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
#include "hlds.hlds_out.mih"
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
#include "parse_tree.mercury_to_mercury.mih"
#include "parse_tree.module_qual.mih"
#include "parse_tree.prog_data.mih"
#include "parse_tree.prog_foreign.mih"
#include "parse_tree.prog_item.mih"
#include "parse_tree.set_of_var.mih"
#include "transform_hlds.term_constr_data.mih"
#include "transform_hlds.term_constr_errors.mih"
#include "transform_hlds.term_constr_main.mih"
#include "transform_hlds.term_errors.mih"
#include "transform_hlds.term_norm.mih"
#include "transform_hlds.term_util.mih"
#include "hlds.hlds_out.hlds_out_mode.mih"
#include "hlds.hlds_out.hlds_out_util.mih"
#include "mdbcomp.feedback.automatic_parallelism.mih"




#line 135 "check_hlds.mode_debug.c"
static const MR_EnumFunctorDesc check_hlds__mode_debug__check_hlds__mode_debug__enum_functor_desc_port_0_0;

#line 138 "check_hlds.mode_debug.c"
static const MR_EnumFunctorDesc check_hlds__mode_debug__check_hlds__mode_debug__enum_functor_desc_port_0_1;

#line 141 "check_hlds.mode_debug.c"
static const MR_EnumFunctorDesc check_hlds__mode_debug__check_hlds__mode_debug__enum_functor_desc_port_0_2;

#line 144 "check_hlds.mode_debug.c"
static const MR_EnumFunctorDescPtr check_hlds__mode_debug__check_hlds__mode_debug__enum_value_ordered_port_0[3];

#line 147 "check_hlds.mode_debug.c"
static const MR_EnumFunctorDescPtr check_hlds__mode_debug__check_hlds__mode_debug__enum_name_ordered_port_0[3];

#line 150 "check_hlds.mode_debug.c"
static const MR_Integer check_hlds__mode_debug__check_hlds__mode_debug__functor_number_map_port_0[3];

#line 153 "check_hlds.mode_debug.c"
static MR_bool MR_CALL 
check_hlds__mode_debug____Unify____port_0_0_10001(
#line 156 "check_hlds.mode_debug.c"
  MR_Box check_hlds__mode_debug__wrapper_arg_1,
#line 158 "check_hlds.mode_debug.c"
  MR_Box check_hlds__mode_debug__wrapper_arg_2);

#line 161 "check_hlds.mode_debug.c"
static void MR_CALL 
check_hlds__mode_debug____Compare____port_0_0_10001(
#line 164 "check_hlds.mode_debug.c"
  MR_Box * check_hlds__mode_debug__wrapper_arg_1,
#line 166 "check_hlds.mode_debug.c"
  MR_Box check_hlds__mode_debug__wrapper_arg_2,
#line 168 "check_hlds.mode_debug.c"
  MR_Box check_hlds__mode_debug__wrapper_arg_3);

#line 170 "mode_debug.m"
static MR_bool MR_CALL 
check_hlds__mode_debug__identical_insts_2_p_0(
#line 170 "mode_debug.m"
  MR_Word check_hlds__mode_debug__InstA_1,
#line 170 "mode_debug.m"
  MR_Word check_hlds__mode_debug__InstB_2);

#line 120 "mode_debug.m"
static void MR_CALL 
check_hlds__mode_debug__write_var_insts_8_p_0(
#line 120 "mode_debug.m"
  MR_Word check_hlds__mode_debug__HeadVar__1_1,
#line 120 "mode_debug.m"
  MR_Word check_hlds__mode_debug__OldInstMap_2,
#line 120 "mode_debug.m"
  MR_Word check_hlds__mode_debug__VarSet_3,
#line 120 "mode_debug.m"
  MR_Word check_hlds__mode_debug__InstVarSet_4,
#line 120 "mode_debug.m"
  MR_Word check_hlds__mode_debug__Verbose_5,
#line 120 "mode_debug.m"
  MR_Word check_hlds__mode_debug__Minimal_6);







#include "check_hlds.mode_debug.mh"
#include "io.mh"
#include "io.mh"
#include "time.mh"
#include "string.mh"
#include "array.mh"
#include "array.mh"
#include "mdbcomp.rtti_access.mh"
#include "mdbcomp.rtti_access.mh"
#include "time.mh"
#include "time.mh"
#include "bitmap.mh"
#include "bitmap.mh"



#line 217 "check_hlds.mode_debug.c"
static const MR_EnumFunctorDesc check_hlds__mode_debug__check_hlds__mode_debug__enum_functor_desc_port_0_0 = {
  (MR_String) "enter",
  (MR_Integer) 0
};

#line 223 "check_hlds.mode_debug.c"
static const MR_EnumFunctorDesc check_hlds__mode_debug__check_hlds__mode_debug__enum_functor_desc_port_0_1 = {
  (MR_String) "exit",
  (MR_Integer) 1
};

#line 229 "check_hlds.mode_debug.c"
static const MR_EnumFunctorDesc check_hlds__mode_debug__check_hlds__mode_debug__enum_functor_desc_port_0_2 = {
  (MR_String) "wakeup",
  (MR_Integer) 2
};

#line 235 "check_hlds.mode_debug.c"
static const MR_EnumFunctorDescPtr check_hlds__mode_debug__check_hlds__mode_debug__enum_value_ordered_port_0[3] = {
  &check_hlds__mode_debug__check_hlds__mode_debug__enum_functor_desc_port_0_0,
  &check_hlds__mode_debug__check_hlds__mode_debug__enum_functor_desc_port_0_1,
  &check_hlds__mode_debug__check_hlds__mode_debug__enum_functor_desc_port_0_2
};

#line 242 "check_hlds.mode_debug.c"
static const MR_EnumFunctorDescPtr check_hlds__mode_debug__check_hlds__mode_debug__enum_name_ordered_port_0[3] = {
  &check_hlds__mode_debug__check_hlds__mode_debug__enum_functor_desc_port_0_0,
  &check_hlds__mode_debug__check_hlds__mode_debug__enum_functor_desc_port_0_1,
  &check_hlds__mode_debug__check_hlds__mode_debug__enum_functor_desc_port_0_2
};

#line 249 "check_hlds.mode_debug.c"
static const MR_Integer check_hlds__mode_debug__check_hlds__mode_debug__functor_number_map_port_0[3] = {
  (MR_Integer) 0,
  (MR_Integer) 1,
  (MR_Integer) 2
};

#line 256 "check_hlds.mode_debug.c"
const MR_TypeCtorInfo_Struct check_hlds__mode_debug__check_hlds__mode_debug__type_ctor_info_port_0 = {
  (MR_Integer) 0,
  (MR_Integer) 15,
  (MR_Integer) -1,
  mercury__private_builtin__MR_TYPECTOR_REP_ENUM,
  ((MR_Box) (check_hlds__mode_debug____Unify____port_0_0_10001)),
  ((MR_Box) (check_hlds__mode_debug____Compare____port_0_0_10001)),
  (MR_String) "check_hlds.mode_debug",
  (MR_String) "port",
  {
    check_hlds__mode_debug__check_hlds__mode_debug__enum_name_ordered_port_0
  },
  {
    check_hlds__mode_debug__check_hlds__mode_debug__enum_value_ordered_port_0
  },
  (MR_Integer) 3,
  (MR_Integer) 4,
  check_hlds__mode_debug__check_hlds__mode_debug__functor_number_map_port_0
};

#line 277 "check_hlds.mode_debug.c"
static MR_bool MR_CALL 
check_hlds__mode_debug____Unify____port_0_0_10001(
#line 280 "check_hlds.mode_debug.c"
  MR_Box check_hlds__mode_debug__wrapper_arg_1,
#line 282 "check_hlds.mode_debug.c"
  MR_Box check_hlds__mode_debug__wrapper_arg_2)
#line 284 "check_hlds.mode_debug.c"
{
#line 286 "check_hlds.mode_debug.c"
  {
#line 288 "check_hlds.mode_debug.c"
    MR_bool check_hlds__mode_debug__succeeded;

#line 291 "check_hlds.mode_debug.c"
    {
#line 293 "check_hlds.mode_debug.c"
      check_hlds__mode_debug__succeeded = check_hlds__mode_debug____Unify____port_0_0(((MR_Word) check_hlds__mode_debug__wrapper_arg_1), ((MR_Word) check_hlds__mode_debug__wrapper_arg_2));
    }
#line 296 "check_hlds.mode_debug.c"
    return check_hlds__mode_debug__succeeded;
#line 298 "check_hlds.mode_debug.c"
  }
#line 300 "check_hlds.mode_debug.c"
}

#line 303 "check_hlds.mode_debug.c"
static void MR_CALL 
check_hlds__mode_debug____Compare____port_0_0_10001(
#line 306 "check_hlds.mode_debug.c"
  MR_Box * check_hlds__mode_debug__wrapper_arg_1,
#line 308 "check_hlds.mode_debug.c"
  MR_Box check_hlds__mode_debug__wrapper_arg_2,
#line 310 "check_hlds.mode_debug.c"
  MR_Box check_hlds__mode_debug__wrapper_arg_3)
#line 312 "check_hlds.mode_debug.c"
{
#line 314 "check_hlds.mode_debug.c"
  {
#line 316 "check_hlds.mode_debug.c"
    MR_Word check_hlds__mode_debug__conv0_HeadVar__1_1;

#line 319 "check_hlds.mode_debug.c"
    {
#line 321 "check_hlds.mode_debug.c"
      check_hlds__mode_debug____Compare____port_0_0(&check_hlds__mode_debug__conv0_HeadVar__1_1, ((MR_Word) check_hlds__mode_debug__wrapper_arg_2), ((MR_Word) check_hlds__mode_debug__wrapper_arg_3));
    }
#line 324 "check_hlds.mode_debug.c"
    *check_hlds__mode_debug__wrapper_arg_1 = ((MR_Box) (check_hlds__mode_debug__conv0_HeadVar__1_1));
#line 326 "check_hlds.mode_debug.c"
  }
#line 328 "check_hlds.mode_debug.c"
}

#line 27 "mode_debug.m"
void MR_CALL 
check_hlds__mode_debug____Compare____port_0_0(
#line 27 "mode_debug.m"
  MR_Word * check_hlds__mode_debug__HeadVar__1_1,
#line 27 "mode_debug.m"
  MR_Word check_hlds__mode_debug__HeadVar__2_2,
#line 27 "mode_debug.m"
  MR_Word check_hlds__mode_debug__HeadVar__3_3)
#line 27 "mode_debug.m"
{
#line 27 "mode_debug.m"
  {
#line 27 "mode_debug.m"
    MR_bool check_hlds__mode_debug__succeeded;
#line 27 "mode_debug.m"
    MR_Integer check_hlds__mode_debug__Cast_HeadVar1_4 = (MR_Integer) check_hlds__mode_debug__HeadVar__2_2;
#line 27 "mode_debug.m"
    MR_Integer check_hlds__mode_debug__Cast_HeadVar2_5 = (MR_Integer) check_hlds__mode_debug__HeadVar__3_3;

#line 27 "mode_debug.m"
    {
#line 27 "mode_debug.m"
      mercury__private_builtin__builtin_compare_int_3_p_0(check_hlds__mode_debug__HeadVar__1_1, check_hlds__mode_debug__Cast_HeadVar1_4, check_hlds__mode_debug__Cast_HeadVar2_5);
#line 27 "mode_debug.m"
      return;
    }
#line 27 "mode_debug.m"
  }
#line 27 "mode_debug.m"
}

#line 27 "mode_debug.m"
MR_bool MR_CALL 
check_hlds__mode_debug____Unify____port_0_0(
#line 27 "mode_debug.m"
  MR_Word check_hlds__mode_debug__HeadVar__2_1,
#line 27 "mode_debug.m"
  MR_Word check_hlds__mode_debug__HeadVar__2_2)
#line 27 "mode_debug.m"
{
#line 372 "check_hlds.mode_debug.c"
  {
#line 374 "check_hlds.mode_debug.c"
    MR_bool check_hlds__mode_debug__succeeded = (check_hlds__mode_debug__HeadVar__2_1 == check_hlds__mode_debug__HeadVar__2_2);

#line 377 "check_hlds.mode_debug.c"
    return check_hlds__mode_debug__succeeded;
#line 379 "check_hlds.mode_debug.c"
  }
#line 27 "mode_debug.m"
}

#line 170 "mode_debug.m"
static MR_bool MR_CALL 
check_hlds__mode_debug__identical_insts_2_p_0(
#line 170 "mode_debug.m"
  MR_Word check_hlds__mode_debug__InstA_1,
#line 170 "mode_debug.m"
  MR_Word check_hlds__mode_debug__InstB_2)
#line 170 "mode_debug.m"
{
#line 175 "mode_debug.m"
  {
#line 175 "mode_debug.m"
    MR_bool check_hlds__mode_debug__succeeded;

#line 178 "mode_debug.m"
{
#define MR_PROC_LABEL check_hlds__mode_debug__identical_insts_2_p_0

	MR_Word InstA;
	MR_Word InstB;
	MR_bool SUCCESS_INDICATOR;

	InstA =  check_hlds__mode_debug__InstA_1 ;
	InstB =  check_hlds__mode_debug__InstB_2 ;
		{
#line 178 "mode_debug.m"

    if (InstA == InstB) {
        SUCCESS_INDICATOR = MR_TRUE;
    } else {
        SUCCESS_INDICATOR = MR_FALSE;
    }

#line 417 "check_hlds.mode_debug.c"

		;}
#undef MR_PROC_LABEL
	if (SUCCESS_INDICATOR) {
#line 178 "mode_debug.m"
	}
check_hlds__mode_debug__succeeded  = SUCCESS_INDICATOR;
}
#line 175 "mode_debug.m"
    return check_hlds__mode_debug__succeeded;
#line 175 "mode_debug.m"
  }
#line 170 "mode_debug.m"
}

#line 120 "mode_debug.m"
static void MR_CALL 
check_hlds__mode_debug__write_var_insts_8_p_0(
#line 120 "mode_debug.m"
  MR_Word check_hlds__mode_debug__HeadVar__1_1,
#line 120 "mode_debug.m"
  MR_Word check_hlds__mode_debug__OldInstMap_2,
#line 120 "mode_debug.m"
  MR_Word check_hlds__mode_debug__VarSet_3,
#line 120 "mode_debug.m"
  MR_Word check_hlds__mode_debug__InstVarSet_4,
#line 120 "mode_debug.m"
  MR_Word check_hlds__mode_debug__Verbose_5,
#line 120 "mode_debug.m"
  MR_Word check_hlds__mode_debug__Minimal_6)
#line 120 "mode_debug.m"
{
#line 124 "mode_debug.m"
  while (MR_TRUE)
#line 124 "mode_debug.m"
    {
#line 124 "mode_debug.m"
      /* tailcall optimized into a loop */
#line 124 "mode_debug.m"
      {
#line 124 "mode_debug.m"
        MR_bool check_hlds__mode_debug__succeeded;

#line 124 "mode_debug.m"
        if ((check_hlds__mode_debug__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 124 "mode_debug.m"
          {
#line 124 "mode_debug.m"
          }
#line 124 "mode_debug.m"
        else
#line 126 "mode_debug.m"
          {
#line 126 "mode_debug.m"
            MR_Word check_hlds__mode_debug__Var_17;
#line 126 "mode_debug.m"
            MR_Word check_hlds__mode_debug__Inst_18;
#line 126 "mode_debug.m"
            MR_Word check_hlds__mode_debug__VarInsts_19 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__mode_debug__HeadVar__1_1, (MR_Integer) 1)));
#line 126 "mode_debug.m"
            MR_Word check_hlds__mode_debug__OldInst_26;
#line 126 "mode_debug.m"
            MR_Word check_hlds__mode_debug__V_29_29 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__mode_debug__HeadVar__1_1, (MR_Integer) 0)));

#line 125 "mode_debug.m"
            check_hlds__mode_debug__Var_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_debug__V_29_29, (MR_Integer) 0)));
#line 125 "mode_debug.m"
            check_hlds__mode_debug__Inst_18 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_debug__V_29_29, (MR_Integer) 1)));
#line 127 "mode_debug.m"
            {
#line 127 "mode_debug.m"
              hlds__instmap__instmap_lookup_var_3_p_0(check_hlds__mode_debug__OldInstMap_2, check_hlds__mode_debug__Var_17, &check_hlds__mode_debug__OldInst_26);
            }
#line 178 "mode_debug.m"
{
#define MR_PROC_LABEL check_hlds__mode_debug__write_var_insts_8_p_0

	MR_Word InstA;
	MR_Word InstB;
	MR_bool SUCCESS_INDICATOR;

	InstA =  check_hlds__mode_debug__Inst_18 ;
	InstB =  check_hlds__mode_debug__OldInst_26 ;
		{
#line 178 "mode_debug.m"

    if (InstA == InstB) {
        SUCCESS_INDICATOR = MR_TRUE;
    } else {
        SUCCESS_INDICATOR = MR_FALSE;
    }

#line 510 "check_hlds.mode_debug.c"

		;}
#undef MR_PROC_LABEL
	if (SUCCESS_INDICATOR) {
#line 178 "mode_debug.m"
	}
check_hlds__mode_debug__succeeded  = SUCCESS_INDICATOR;
}
#line 131 "mode_debug.m"
            if (!(check_hlds__mode_debug__succeeded))
#line 132 "mode_debug.m"
              {
#line 132 "mode_debug.m"
                check_hlds__mode_debug__succeeded = parse_tree__prog_data____Unify____mer_inst_0_0(check_hlds__mode_debug__Inst_18, check_hlds__mode_debug__OldInst_26);
              }
#line 144 "mode_debug.m"
            if (check_hlds__mode_debug__succeeded)
#line 141 "mode_debug.m"
              if ((check_hlds__mode_debug__Verbose_5 == (MR_Integer) 0))
#line 142 "mode_debug.m"
                {
#line 142 "mode_debug.m"
                }
#line 141 "mode_debug.m"
              else
#line 136 "mode_debug.m"
                {
#line 137 "mode_debug.m"
                  {
#line 137 "mode_debug.m"
                    mercury__io__write_string_3_p_0((MR_String) "\t");
                  }
#line 138 "mode_debug.m"
                  {
#line 138 "mode_debug.m"
                    parse_tree__mercury_to_mercury__mercury_output_var_5_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0, check_hlds__mode_debug__VarSet_3, (MR_Integer) 0, check_hlds__mode_debug__Var_17);
                  }
#line 139 "mode_debug.m"
                  {
#line 139 "mode_debug.m"
                    mercury__io__write_string_3_p_0((MR_String) " ::");
                  }
#line 140 "mode_debug.m"
                  {
#line 140 "mode_debug.m"
                    mercury__io__write_string_3_p_0((MR_String) " unchanged\n");
                  }
#line 136 "mode_debug.m"
                }
#line 144 "mode_debug.m"
            else
#line 145 "mode_debug.m"
              {
#line 145 "mode_debug.m"
                {
#line 145 "mode_debug.m"
                  mercury__io__write_string_3_p_0((MR_String) "\t");
                }
#line 146 "mode_debug.m"
                {
#line 146 "mode_debug.m"
                  parse_tree__mercury_to_mercury__mercury_output_var_5_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0, check_hlds__mode_debug__VarSet_3, (MR_Integer) 0, check_hlds__mode_debug__Var_17);
                }
#line 147 "mode_debug.m"
                {
#line 147 "mode_debug.m"
                  mercury__io__write_string_3_p_0((MR_String) " ::");
                }
#line 151 "mode_debug.m"
                if ((check_hlds__mode_debug__Minimal_6 == (MR_Integer) 0))
#line 152 "mode_debug.m"
                  {
#line 153 "mode_debug.m"
                    {
#line 153 "mode_debug.m"
                      mercury__io__write_string_3_p_0((MR_String) "\n");
                    }
#line 154 "mode_debug.m"
                    {
#line 154 "mode_debug.m"
                      hlds__hlds_out__hlds_out_mode__mercury_output_structured_inst_7_p_0(check_hlds__mode_debug__Inst_18, (MR_Integer) 2, (MR_Integer) 1, (MR_Integer) 0, check_hlds__mode_debug__InstVarSet_4);
                    }
#line 152 "mode_debug.m"
                  }
#line 151 "mode_debug.m"
                else
#line 149 "mode_debug.m"
                  {
#line 150 "mode_debug.m"
                    {
#line 150 "mode_debug.m"
                      mercury__io__write_string_3_p_0((MR_String) " changed\n");
                    }
#line 149 "mode_debug.m"
                  }
#line 145 "mode_debug.m"
              }
#line 158 "mode_debug.m"
            /* direct tailcall eliminated */
#line 158 "mode_debug.m"
            {
#line 158 "mode_debug.m"
              MR_Word check_hlds__mode_debug__HeadVar__1__tmp_copy_1 = check_hlds__mode_debug__VarInsts_19;

#line 158 "mode_debug.m"
              check_hlds__mode_debug__HeadVar__1_1 = check_hlds__mode_debug__HeadVar__1__tmp_copy_1;
#line 158 "mode_debug.m"
            }
#line 158 "mode_debug.m"
            continue;
#line 126 "mode_debug.m"
          }
#line 124 "mode_debug.m"
      }
#line 124 "mode_debug.m"
      break;
#line 124 "mode_debug.m"
    }
#line 120 "mode_debug.m"
}

#line 24 "mode_debug.m"
void MR_CALL 
check_hlds__mode_debug__mode_checkpoint_4_p_0(
#line 24 "mode_debug.m"
  MR_Word check_hlds__mode_debug__Port_5,
#line 24 "mode_debug.m"
  MR_String check_hlds__mode_debug__Msg_6,
#line 24 "mode_debug.m"
  MR_Word check_hlds__mode_debug__STATE_VARIABLE_ModeInfo_0_23,
#line 24 "mode_debug.m"
  MR_Word * check_hlds__mode_debug__STATE_VARIABLE_ModeInfo_24)
#line 24 "mode_debug.m"
{
#line 59 "mode_debug.m"
  {
#line 59 "mode_debug.m"
    MR_bool check_hlds__mode_debug__succeeded;
#line 59 "mode_debug.m"
    MR_Word check_hlds__mode_debug__DebugModes_8;

#line 60 "mode_debug.m"
    {
#line 60 "mode_debug.m"
      check_hlds__mode_info__mode_info_get_debug_modes_2_p_0(check_hlds__mode_debug__STATE_VARIABLE_ModeInfo_0_23, &check_hlds__mode_debug__DebugModes_8);
    }
#line 63 "mode_debug.m"
    if ((check_hlds__mode_debug__DebugModes_8 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 62 "mode_debug.m"
      *check_hlds__mode_debug__STATE_VARIABLE_ModeInfo_24 = check_hlds__mode_debug__STATE_VARIABLE_ModeInfo_0_23;
#line 63 "mode_debug.m"
    else
#line 64 "mode_debug.m"
      {
#line 64 "mode_debug.m"
        MR_Word check_hlds__mode_debug__Verbose_9;
#line 64 "mode_debug.m"
        MR_Word check_hlds__mode_debug__Minimal_10;
#line 64 "mode_debug.m"
        MR_Word check_hlds__mode_debug__Statistics_11;
#line 64 "mode_debug.m"
        MR_Word check_hlds__mode_debug__Errors_12;
#line 64 "mode_debug.m"
        MR_String check_hlds__mode_debug__PortStr_13;
#line 64 "mode_debug.m"
        MR_Word check_hlds__mode_debug__Detail_14;
#line 64 "mode_debug.m"
        MR_Word check_hlds__mode_debug__InstMap_17;
#line 64 "mode_debug.m"
        MR_Word check_hlds__mode_debug__V_25_25 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__mode_debug__DebugModes_8, (MR_Integer) 0)));

#line 64 "mode_debug.m"
        check_hlds__mode_debug__Verbose_9 = ((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_debug__V_25_25, (MR_Integer) 0)))) & (MR_Integer) 1);
#line 64 "mode_debug.m"
        check_hlds__mode_debug__Minimal_10 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_debug__V_25_25, (MR_Integer) 0)))) >> (MR_Integer) 1)) & (MR_Integer) 1);
#line 64 "mode_debug.m"
        check_hlds__mode_debug__Statistics_11 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_debug__V_25_25, (MR_Integer) 0)))) >> (MR_Integer) 2)) & (MR_Integer) 1);
#line 65 "mode_debug.m"
        {
#line 65 "mode_debug.m"
          check_hlds__mode_info__mode_info_get_errors_2_p_0(check_hlds__mode_debug__STATE_VARIABLE_ModeInfo_0_23, &check_hlds__mode_debug__Errors_12);
        }
#line 70 "mode_debug.m"
        if ((check_hlds__mode_debug__Port_5 == (MR_Integer) 0))
#line 67 "mode_debug.m"
          {
#line 68 "mode_debug.m"
            check_hlds__mode_debug__PortStr_13 = (MR_String) "Enter ";
#line 69 "mode_debug.m"
            check_hlds__mode_debug__Detail_14 = (MR_Integer) 1;
#line 67 "mode_debug.m"
          }
#line 70 "mode_debug.m"
        else
#line 70 "mode_debug.m"
          if ((check_hlds__mode_debug__Port_5 == (MR_Integer) 1))
#line 80 "mode_debug.m"
            if ((check_hlds__mode_debug__Errors_12 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 77 "mode_debug.m"
              {
#line 78 "mode_debug.m"
                check_hlds__mode_debug__PortStr_13 = (MR_String) "Exit ";
#line 79 "mode_debug.m"
                check_hlds__mode_debug__Detail_14 = (MR_Integer) 1;
#line 77 "mode_debug.m"
              }
#line 80 "mode_debug.m"
            else
#line 81 "mode_debug.m"
              {
#line 82 "mode_debug.m"
                check_hlds__mode_debug__PortStr_13 = (MR_String) "Delay ";
#line 83 "mode_debug.m"
                check_hlds__mode_debug__Detail_14 = (MR_Integer) 0;
#line 81 "mode_debug.m"
              }
#line 70 "mode_debug.m"
          else
#line 71 "mode_debug.m"
            {
#line 72 "mode_debug.m"
              check_hlds__mode_debug__PortStr_13 = (MR_String) "Wake ";
#line 73 "mode_debug.m"
              check_hlds__mode_debug__Detail_14 = (MR_Integer) 0;
#line 71 "mode_debug.m"
            }
#line 86 "mode_debug.m"
        {
#line 86 "mode_debug.m"
          check_hlds__mode_info__mode_info_get_instmap_2_p_0(check_hlds__mode_debug__STATE_VARIABLE_ModeInfo_0_23, &check_hlds__mode_debug__InstMap_17);
        }
#line 88 "mode_debug.m"
        {
#line 88 "mode_debug.m"
          mercury__io__write_string_3_p_0(check_hlds__mode_debug__PortStr_13);
        }
#line 89 "mode_debug.m"
        {
#line 89 "mode_debug.m"
          mercury__io__write_string_3_p_0(check_hlds__mode_debug__Msg_6);
        }
#line 106 "mode_debug.m"
        if ((check_hlds__mode_debug__Detail_14 == (MR_Integer) 0))
#line 107 "mode_debug.m"
          {
#line 107 "mode_debug.m"
          }
#line 106 "mode_debug.m"
        else
#line 91 "mode_debug.m"
          {
#line 92 "mode_debug.m"
            {
#line 92 "mode_debug.m"
              mercury__io__write_string_3_p_0((MR_String) ":\n");
            }
#line 93 "mode_debug.m"
            {
#line 93 "mode_debug.m"
              libs__file_util__maybe_report_stats_3_p_0(check_hlds__mode_debug__Statistics_11);
            }
#line 94 "mode_debug.m"
            {
#line 94 "mode_debug.m"
              libs__file_util__maybe_flush_output_3_p_0(check_hlds__mode_debug__Statistics_11);
            }
#line 95 "mode_debug.m"
            {
#line 95 "mode_debug.m"
              check_hlds__mode_debug__succeeded = hlds__instmap__instmap_is_reachable_1_p_0(check_hlds__mode_debug__InstMap_17);
            }
#line 103 "mode_debug.m"
            if (check_hlds__mode_debug__succeeded)
#line 96 "mode_debug.m"
              {
#line 96 "mode_debug.m"
                MR_Word check_hlds__mode_debug__NewInsts_19;
#line 96 "mode_debug.m"
                MR_Word check_hlds__mode_debug__OldInstMap_20;
#line 96 "mode_debug.m"
                MR_Word check_hlds__mode_debug__VarSet_21;
#line 96 "mode_debug.m"
                MR_Word check_hlds__mode_debug__InstVarSet_22;

#line 96 "mode_debug.m"
                {
#line 96 "mode_debug.m"
                  hlds__instmap__instmap_to_assoc_list_2_p_0(check_hlds__mode_debug__InstMap_17, &check_hlds__mode_debug__NewInsts_19);
                }
#line 97 "mode_debug.m"
                {
#line 97 "mode_debug.m"
                  check_hlds__mode_info__mode_info_get_last_checkpoint_insts_2_p_0(check_hlds__mode_debug__STATE_VARIABLE_ModeInfo_0_23, &check_hlds__mode_debug__OldInstMap_20);
                }
#line 99 "mode_debug.m"
                {
#line 99 "mode_debug.m"
                  check_hlds__mode_info__mode_info_get_varset_2_p_0(check_hlds__mode_debug__STATE_VARIABLE_ModeInfo_0_23, &check_hlds__mode_debug__VarSet_21);
                }
#line 100 "mode_debug.m"
                {
#line 100 "mode_debug.m"
                  check_hlds__mode_info__mode_info_get_instvarset_2_p_0(check_hlds__mode_debug__STATE_VARIABLE_ModeInfo_0_23, &check_hlds__mode_debug__InstVarSet_22);
                }
#line 101 "mode_debug.m"
                {
#line 101 "mode_debug.m"
                  check_hlds__mode_debug__write_var_insts_8_p_0(check_hlds__mode_debug__NewInsts_19, check_hlds__mode_debug__OldInstMap_20, check_hlds__mode_debug__VarSet_21, check_hlds__mode_debug__InstVarSet_22, check_hlds__mode_debug__Verbose_9, check_hlds__mode_debug__Minimal_10);
                }
#line 96 "mode_debug.m"
              }
#line 103 "mode_debug.m"
            else
#line 104 "mode_debug.m"
              {
#line 104 "mode_debug.m"
                {
#line 104 "mode_debug.m"
                  mercury__io__write_string_3_p_0((MR_String) "\tUnreachable\n");
                }
#line 104 "mode_debug.m"
              }
#line 91 "mode_debug.m"
          }
#line 109 "mode_debug.m"
        {
#line 109 "mode_debug.m"
          mercury__io__write_string_3_p_0((MR_String) "\n");
        }
#line 110 "mode_debug.m"
        {
#line 110 "mode_debug.m"
          mercury__io__flush_output_2_p_0();
        }
#line 115 "mode_debug.m"
        if ((check_hlds__mode_debug__Detail_14 == (MR_Integer) 0))
#line 116 "mode_debug.m"
          *check_hlds__mode_debug__STATE_VARIABLE_ModeInfo_24 = check_hlds__mode_debug__STATE_VARIABLE_ModeInfo_0_23;
#line 115 "mode_debug.m"
        else
#line 114 "mode_debug.m"
          {
#line 114 "mode_debug.m"
            check_hlds__mode_info__mode_info_set_last_checkpoint_insts_3_p_0(check_hlds__mode_debug__InstMap_17, check_hlds__mode_debug__STATE_VARIABLE_ModeInfo_0_23, check_hlds__mode_debug__STATE_VARIABLE_ModeInfo_24);
#line 114 "mode_debug.m"
            return;
          }
#line 64 "mode_debug.m"
      }
#line 59 "mode_debug.m"
  }
#line 24 "mode_debug.m"
}

void mercury__check_hlds__mode_debug__init(void)
{
}

void mercury__check_hlds__mode_debug__init_type_tables(void)
{
	static MR_bool initialised = MR_FALSE;
	if (initialised) return;
	initialised = MR_TRUE;

	MR_register_type_ctor_info(&check_hlds__mode_debug__check_hlds__mode_debug__type_ctor_info_port_0);
}

void mercury__check_hlds__mode_debug__init_debugger(void)
{
	MR_fatal_error("debugger initialization in MLDS grade");
}

/* ensure everything is compiled with the same grade */
static const void *const MR_grade = &MR_GRADE_VAR;

/* :- end_module check_hlds.mode_debug. */
