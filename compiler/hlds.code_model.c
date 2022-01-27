/*
** Automatically generated from `code_model.m'
** by the Mercury compiler,
** version rotd-2014-09-01
** configured for x86_64-apple-darwin13.3.0.
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


/* :- module hlds.code_model. */
/* :- implementation. */

/*
INIT mercury__hlds__code_model__init
ENDINIT
*/

#include "hlds.code_model.mih"


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
#include "transform_hlds.mih"
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
#include "mdbcomp.trace_counts.mih"
#include "mode_robdd.tfeirn.mih"
#include "parse_tree.error_util.mih"
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
#include "mdbcomp.feedback.automatic_parallelism.mih"




#line 130 "hlds.code_model.c"
static const MR_EnumFunctorDesc hlds__code_model__hlds__code_model__enum_functor_desc_code_model_0_0;

#line 133 "hlds.code_model.c"
static const MR_EnumFunctorDesc hlds__code_model__hlds__code_model__enum_functor_desc_code_model_0_1;

#line 136 "hlds.code_model.c"
static const MR_EnumFunctorDesc hlds__code_model__hlds__code_model__enum_functor_desc_code_model_0_2;

#line 139 "hlds.code_model.c"
static const MR_EnumFunctorDescPtr hlds__code_model__hlds__code_model__enum_value_ordered_code_model_0[3];

#line 142 "hlds.code_model.c"
static const MR_EnumFunctorDescPtr hlds__code_model__hlds__code_model__enum_name_ordered_code_model_0[3];

#line 145 "hlds.code_model.c"
static const MR_Integer hlds__code_model__hlds__code_model__functor_number_map_code_model_0[3];

#line 148 "hlds.code_model.c"
static MR_bool MR_CALL 
hlds__code_model____Unify____code_model_0_0_10001(
#line 151 "hlds.code_model.c"
  MR_Box hlds__code_model__wrapper_arg_1,
#line 153 "hlds.code_model.c"
  MR_Box hlds__code_model__wrapper_arg_2);

#line 156 "hlds.code_model.c"
static void MR_CALL 
hlds__code_model____Compare____code_model_0_0_10001(
#line 159 "hlds.code_model.c"
  MR_Box * hlds__code_model__wrapper_arg_1,
#line 161 "hlds.code_model.c"
  MR_Box hlds__code_model__wrapper_arg_2,
#line 163 "hlds.code_model.c"
  MR_Box hlds__code_model__wrapper_arg_3);



#line 61 "code_model.m"
/* sealed */ struct hlds__code_model__vector_common_type_1_0_s {
#line 61 "code_model.m"
  const MR_Word hlds__code_model__vector_common_type_1_0__vct_1_f_0;
#line 61 "code_model.m"
};

static /* final */ const struct hlds__code_model__vector_common_type_1_0_s hlds__code_model_vector_common_1[8];




static /* final */ const struct hlds__code_model__vector_common_type_1_0_s hlds__code_model_vector_common_1[8] = {
  /* row 0 */
  {
    (MR_Integer) 0
  },
  /* row 1 */
  {
    (MR_Integer) 4
  },
  /* row 2 */
  {
    (MR_Integer) 6
  },
  /* row 3 */
  {
    (MR_Integer) 3
  },
  /* row 4 */
  {
    (MR_Integer) 2
  },
  /* row 5 */
  {
    (MR_Integer) 1
  },
  /* row 6 */
  {
    (MR_Integer) 5
  },
  /* row 7 */
  {
    (MR_Integer) 7
  },
};


#include "mdbcomp.program_representation.mh"
#include "mdbcomp.program_representation.mh"
#include "io.mh"
#include "io.mh"
#include "time.mh"
#include "string.mh"
#include "array.mh"
#include "array.mh"
#include "bitmap.mh"
#include "bitmap.mh"
#include "time.mh"
#include "time.mh"
#include "mdbcomp.rtti_access.mh"
#include "mdbcomp.rtti_access.mh"



#line 233 "hlds.code_model.c"
static const MR_EnumFunctorDesc hlds__code_model__hlds__code_model__enum_functor_desc_code_model_0_0 = {
  (MR_String) "model_det",
  (MR_Integer) 0
};

#line 239 "hlds.code_model.c"
static const MR_EnumFunctorDesc hlds__code_model__hlds__code_model__enum_functor_desc_code_model_0_1 = {
  (MR_String) "model_semi",
  (MR_Integer) 1
};

#line 245 "hlds.code_model.c"
static const MR_EnumFunctorDesc hlds__code_model__hlds__code_model__enum_functor_desc_code_model_0_2 = {
  (MR_String) "model_non",
  (MR_Integer) 2
};

#line 251 "hlds.code_model.c"
static const MR_EnumFunctorDescPtr hlds__code_model__hlds__code_model__enum_value_ordered_code_model_0[3] = {
  &hlds__code_model__hlds__code_model__enum_functor_desc_code_model_0_0,
  &hlds__code_model__hlds__code_model__enum_functor_desc_code_model_0_1,
  &hlds__code_model__hlds__code_model__enum_functor_desc_code_model_0_2
};

#line 258 "hlds.code_model.c"
static const MR_EnumFunctorDescPtr hlds__code_model__hlds__code_model__enum_name_ordered_code_model_0[3] = {
  &hlds__code_model__hlds__code_model__enum_functor_desc_code_model_0_0,
  &hlds__code_model__hlds__code_model__enum_functor_desc_code_model_0_2,
  &hlds__code_model__hlds__code_model__enum_functor_desc_code_model_0_1
};

#line 265 "hlds.code_model.c"
static const MR_Integer hlds__code_model__hlds__code_model__functor_number_map_code_model_0[3] = {
  (MR_Integer) 0,
  (MR_Integer) 2,
  (MR_Integer) 1
};

#line 272 "hlds.code_model.c"
const MR_TypeCtorInfo_Struct hlds__code_model__hlds__code_model__type_ctor_info_code_model_0 = {
  (MR_Integer) 0,
  (MR_Integer) 15,
  (MR_Integer) -1,
  mercury__private_builtin__MR_TYPECTOR_REP_ENUM,
  ((MR_Box) (hlds__code_model____Unify____code_model_0_0_10001)),
  ((MR_Box) (hlds__code_model____Compare____code_model_0_0_10001)),
  (MR_String) "hlds.code_model",
  (MR_String) "code_model",
  {
    hlds__code_model__hlds__code_model__enum_name_ordered_code_model_0
  },
  {
    hlds__code_model__hlds__code_model__enum_value_ordered_code_model_0
  },
  (MR_Integer) 3,
  (MR_Integer) 4,
  hlds__code_model__hlds__code_model__functor_number_map_code_model_0
};

#line 293 "hlds.code_model.c"
static MR_bool MR_CALL 
hlds__code_model____Unify____code_model_0_0_10001(
#line 296 "hlds.code_model.c"
  MR_Box hlds__code_model__wrapper_arg_1,
#line 298 "hlds.code_model.c"
  MR_Box hlds__code_model__wrapper_arg_2)
#line 300 "hlds.code_model.c"
{
#line 302 "hlds.code_model.c"
  {
#line 304 "hlds.code_model.c"
    MR_bool hlds__code_model__succeeded;

#line 307 "hlds.code_model.c"
    {
#line 309 "hlds.code_model.c"
      hlds__code_model__succeeded = hlds__code_model____Unify____code_model_0_0(((MR_Word) hlds__code_model__wrapper_arg_1), ((MR_Word) hlds__code_model__wrapper_arg_2));
    }
#line 312 "hlds.code_model.c"
    return hlds__code_model__succeeded;
#line 314 "hlds.code_model.c"
  }
#line 316 "hlds.code_model.c"
}

#line 319 "hlds.code_model.c"
static void MR_CALL 
hlds__code_model____Compare____code_model_0_0_10001(
#line 322 "hlds.code_model.c"
  MR_Box * hlds__code_model__wrapper_arg_1,
#line 324 "hlds.code_model.c"
  MR_Box hlds__code_model__wrapper_arg_2,
#line 326 "hlds.code_model.c"
  MR_Box hlds__code_model__wrapper_arg_3)
#line 328 "hlds.code_model.c"
{
#line 330 "hlds.code_model.c"
  {
#line 332 "hlds.code_model.c"
    MR_Word hlds__code_model__conv0_HeadVar__1_1;

#line 335 "hlds.code_model.c"
    {
#line 337 "hlds.code_model.c"
      hlds__code_model____Compare____code_model_0_0(&hlds__code_model__conv0_HeadVar__1_1, ((MR_Word) hlds__code_model__wrapper_arg_2), ((MR_Word) hlds__code_model__wrapper_arg_3));
    }
#line 340 "hlds.code_model.c"
    *hlds__code_model__wrapper_arg_1 = ((MR_Box) (hlds__code_model__conv0_HeadVar__1_1));
#line 342 "hlds.code_model.c"
  }
#line 344 "hlds.code_model.c"
}

#line 30 "code_model.m"
void MR_CALL 
hlds__code_model____Compare____code_model_0_0(
#line 30 "code_model.m"
  MR_Word * hlds__code_model__HeadVar__1_1,
#line 30 "code_model.m"
  MR_Word hlds__code_model__HeadVar__2_2,
#line 30 "code_model.m"
  MR_Word hlds__code_model__HeadVar__3_3)
#line 30 "code_model.m"
{
#line 30 "code_model.m"
  {
#line 30 "code_model.m"
    MR_bool hlds__code_model__succeeded;
#line 30 "code_model.m"
    MR_Integer hlds__code_model__Cast_HeadVar1_4 = (MR_Integer) hlds__code_model__HeadVar__2_2;
#line 30 "code_model.m"
    MR_Integer hlds__code_model__Cast_HeadVar2_5 = (MR_Integer) hlds__code_model__HeadVar__3_3;

#line 30 "code_model.m"
    {
#line 30 "code_model.m"
      mercury__private_builtin__builtin_compare_int_3_p_0(hlds__code_model__HeadVar__1_1, hlds__code_model__Cast_HeadVar1_4, hlds__code_model__Cast_HeadVar2_5);
#line 30 "code_model.m"
      return;
    }
#line 30 "code_model.m"
  }
#line 30 "code_model.m"
}

#line 30 "code_model.m"
MR_bool MR_CALL 
hlds__code_model____Unify____code_model_0_0(
#line 30 "code_model.m"
  MR_Word hlds__code_model__HeadVar__2_1,
#line 30 "code_model.m"
  MR_Word hlds__code_model__HeadVar__2_2)
#line 30 "code_model.m"
{
#line 388 "hlds.code_model.c"
  {
#line 390 "hlds.code_model.c"
    MR_bool hlds__code_model__succeeded = (hlds__code_model__HeadVar__2_1 == hlds__code_model__HeadVar__2_2);

#line 393 "hlds.code_model.c"
    return hlds__code_model__succeeded;
#line 395 "hlds.code_model.c"
  }
#line 30 "code_model.m"
}

#line 53 "code_model.m"
MR_Integer MR_CALL 
hlds__code_model__represent_determinism_1_f_0(
#line 53 "code_model.m"
  MR_Word hlds__code_model__HeadVar__1_1)
#line 53 "code_model.m"
{
#line 78 "code_model.m"
  {
#line 78 "code_model.m"
    MR_bool hlds__code_model__succeeded;
#line 78 "code_model.m"
    MR_Integer hlds__code_model__HeadVar__2_2;

#line 78 "code_model.m"
    if ((hlds__code_model__HeadVar__1_1 == (MR_Integer) 4))
#line 85 "code_model.m"
      {
#line 85 "code_model.m"
        {
#line 85 "code_model.m"
          return hlds__code_model__HeadVar__2_2 = mdbcomp__program_representation__detism_rep_1_f_0((MR_Integer) 5);
        }
#line 85 "code_model.m"
      }
#line 78 "code_model.m"
    else
#line 78 "code_model.m"
      if ((hlds__code_model__HeadVar__1_1 == (MR_Integer) 5))
#line 84 "code_model.m"
        {
#line 84 "code_model.m"
          {
#line 84 "code_model.m"
            return hlds__code_model__HeadVar__2_2 = mdbcomp__program_representation__detism_rep_1_f_0((MR_Integer) 4);
          }
#line 84 "code_model.m"
        }
#line 78 "code_model.m"
      else
#line 78 "code_model.m"
        if ((hlds__code_model__HeadVar__1_1 == (MR_Integer) 0))
#line 78 "code_model.m"
          {
#line 78 "code_model.m"
            {
#line 78 "code_model.m"
              return hlds__code_model__HeadVar__2_2 = mdbcomp__program_representation__detism_rep_1_f_0((MR_Integer) 0);
            }
#line 78 "code_model.m"
          }
#line 78 "code_model.m"
        else
#line 78 "code_model.m"
          if ((hlds__code_model__HeadVar__1_1 == (MR_Integer) 6))
#line 82 "code_model.m"
            {
#line 82 "code_model.m"
              {
#line 82 "code_model.m"
                return hlds__code_model__HeadVar__2_2 = mdbcomp__program_representation__detism_rep_1_f_0((MR_Integer) 6);
              }
#line 82 "code_model.m"
            }
#line 78 "code_model.m"
          else
#line 78 "code_model.m"
            if ((hlds__code_model__HeadVar__1_1 == (MR_Integer) 7))
#line 83 "code_model.m"
              {
#line 83 "code_model.m"
                {
#line 83 "code_model.m"
                  return hlds__code_model__HeadVar__2_2 = mdbcomp__program_representation__detism_rep_1_f_0((MR_Integer) 7);
                }
#line 83 "code_model.m"
              }
#line 78 "code_model.m"
            else
#line 78 "code_model.m"
              if ((hlds__code_model__HeadVar__1_1 == (MR_Integer) 2))
#line 81 "code_model.m"
                {
#line 81 "code_model.m"
                  {
#line 81 "code_model.m"
                    return hlds__code_model__HeadVar__2_2 = mdbcomp__program_representation__detism_rep_1_f_0((MR_Integer) 3);
                  }
#line 81 "code_model.m"
                }
#line 78 "code_model.m"
              else
#line 78 "code_model.m"
                if ((hlds__code_model__HeadVar__1_1 == (MR_Integer) 3))
#line 80 "code_model.m"
                  {
#line 80 "code_model.m"
                    {
#line 80 "code_model.m"
                      return hlds__code_model__HeadVar__2_2 = mdbcomp__program_representation__detism_rep_1_f_0((MR_Integer) 2);
                    }
#line 80 "code_model.m"
                  }
#line 78 "code_model.m"
                else
#line 79 "code_model.m"
                  {
#line 79 "code_model.m"
                    {
#line 79 "code_model.m"
                      return hlds__code_model__HeadVar__2_2 = mdbcomp__program_representation__detism_rep_1_f_0((MR_Integer) 1);
                    }
#line 79 "code_model.m"
                  }
#line 78 "code_model.m"
    return hlds__code_model__HeadVar__2_2;
#line 78 "code_model.m"
  }
#line 53 "code_model.m"
}

#line 41 "code_model.m"
MR_Word MR_CALL 
hlds__code_model__goal_info_get_code_model_1_f_0(
#line 41 "code_model.m"
  MR_Word hlds__code_model__GoalInfo_3)
#line 41 "code_model.m"
{
#line 74 "code_model.m"
  {
#line 74 "code_model.m"
    MR_bool hlds__code_model__succeeded;
#line 74 "code_model.m"
    MR_Word hlds__code_model__CodeModel_4;
#line 74 "code_model.m"
    MR_Word hlds__code_model__Determinism_5;

#line 75 "code_model.m"
    {
#line 75 "code_model.m"
      hlds__code_model__Determinism_5 = hlds__hlds_goal__goal_info_get_determinism_1_f_0(hlds__code_model__GoalInfo_3);
    }
#line 76 "code_model.m"
    {
#line 76 "code_model.m"
      hlds__code_model__determinism_to_code_model_2_p_0(hlds__code_model__Determinism_5, &hlds__code_model__CodeModel_4);
    }
#line 74 "code_model.m"
    return hlds__code_model__CodeModel_4;
#line 74 "code_model.m"
  }
#line 41 "code_model.m"
}

#line 39 "code_model.m"
MR_Word MR_CALL 
hlds__code_model__proc_info_interface_code_model_1_f_0(
#line 39 "code_model.m"
  MR_Word hlds__code_model__ProcInfo_3)
#line 39 "code_model.m"
{
#line 70 "code_model.m"
  {
#line 70 "code_model.m"
    MR_bool hlds__code_model__succeeded;
#line 70 "code_model.m"
    MR_Word hlds__code_model__CodeModel_4;
#line 70 "code_model.m"
    MR_Word hlds__code_model__Determinism_5;

#line 71 "code_model.m"
    {
#line 71 "code_model.m"
      hlds__hlds_pred__proc_info_interface_determinism_2_p_0(hlds__code_model__ProcInfo_3, &hlds__code_model__Determinism_5);
    }
#line 72 "code_model.m"
    {
#line 72 "code_model.m"
      hlds__code_model__determinism_to_code_model_2_p_0(hlds__code_model__Determinism_5, &hlds__code_model__CodeModel_4);
    }
#line 70 "code_model.m"
    return hlds__code_model__CodeModel_4;
#line 70 "code_model.m"
  }
#line 39 "code_model.m"
}

#line 37 "code_model.m"
void MR_CALL 
hlds__code_model__determinism_to_code_model_2_p_1(
#line 37 "code_model.m"
  MR_Word * hlds__code_model__HeadVar__1_1,
#line 37 "code_model.m"
  MR_Word hlds__code_model__HeadVar__2_2,
#line 37 "code_model.m"
  MR_Cont hlds__code_model__cont,
#line 37 "code_model.m"
  void * hlds__code_model__cont_env_ptr)
#line 37 "code_model.m"
{
#line 61 "code_model.m"
  {
#line 61 "code_model.m"
    MR_bool hlds__code_model__succeeded;

#line 61 "code_model.m"
    if ((hlds__code_model__HeadVar__2_2 == (MR_Integer) 0))
#line 61 "code_model.m"
      {
#line 61 "code_model.m"
        MR_Integer hlds__code_model__slot_0 = (MR_Integer) 0;

#line 61 "code_model.m"
        do
#line 61 "code_model.m"
          {
#line 61 "code_model.m"
            *hlds__code_model__HeadVar__1_1 = ((&hlds__code_model_vector_common_1[0 + hlds__code_model__slot_0]))->hlds__code_model__vector_common_type_1_0__vct_1_f_0;
#line 61 "code_model.m"
            {
#line 61 "code_model.m"
              hlds__code_model__cont(hlds__code_model__cont_env_ptr);
            }
#line 61 "code_model.m"
            hlds__code_model__slot_0 = (hlds__code_model__slot_0 + (MR_Integer) 1);
#line 61 "code_model.m"
          }
#line 61 "code_model.m"
        while ((hlds__code_model__slot_0 < (MR_Integer) 3));
#line 61 "code_model.m"
      }
#line 61 "code_model.m"
    else
#line 61 "code_model.m"
      if ((hlds__code_model__HeadVar__2_2 == (MR_Integer) 2))
#line 61 "code_model.m"
        {
#line 61 "code_model.m"
          MR_Integer hlds__code_model__slot_1 = (MR_Integer) 0;

#line 61 "code_model.m"
          do
#line 61 "code_model.m"
            {
#line 61 "code_model.m"
              *hlds__code_model__HeadVar__1_1 = ((&hlds__code_model_vector_common_1[3 + hlds__code_model__slot_1]))->hlds__code_model__vector_common_type_1_0__vct_1_f_0;
#line 61 "code_model.m"
              {
#line 61 "code_model.m"
                hlds__code_model__cont(hlds__code_model__cont_env_ptr);
              }
#line 61 "code_model.m"
              hlds__code_model__slot_1 = (hlds__code_model__slot_1 + (MR_Integer) 1);
#line 61 "code_model.m"
            }
#line 61 "code_model.m"
          while ((hlds__code_model__slot_1 < (MR_Integer) 2));
#line 61 "code_model.m"
        }
#line 61 "code_model.m"
      else
#line 61 "code_model.m"
        {
#line 61 "code_model.m"
          MR_Integer hlds__code_model__slot_2 = (MR_Integer) 0;

#line 61 "code_model.m"
          do
#line 61 "code_model.m"
            {
#line 61 "code_model.m"
              *hlds__code_model__HeadVar__1_1 = ((&hlds__code_model_vector_common_1[5 + hlds__code_model__slot_2]))->hlds__code_model__vector_common_type_1_0__vct_1_f_0;
#line 61 "code_model.m"
              {
#line 61 "code_model.m"
                hlds__code_model__cont(hlds__code_model__cont_env_ptr);
              }
#line 61 "code_model.m"
              hlds__code_model__slot_2 = (hlds__code_model__slot_2 + (MR_Integer) 1);
#line 61 "code_model.m"
            }
#line 61 "code_model.m"
          while ((hlds__code_model__slot_2 < (MR_Integer) 3));
#line 61 "code_model.m"
        }
#line 61 "code_model.m"
  }
#line 37 "code_model.m"
}

#line 36 "code_model.m"
void MR_CALL 
hlds__code_model__determinism_to_code_model_2_p_0(
#line 36 "code_model.m"
  MR_Word hlds__code_model__HeadVar__1_1,
#line 36 "code_model.m"
  MR_Word * hlds__code_model__HeadVar__2_2)
#line 36 "code_model.m"
{
#line 61 "code_model.m"
  {
#line 61 "code_model.m"
    MR_bool hlds__code_model__succeeded;

#line 61 "code_model.m"
    if ((hlds__code_model__HeadVar__1_1 == (MR_Integer) 4))
#line 66 "code_model.m"
      *hlds__code_model__HeadVar__2_2 = (MR_Integer) 0;
#line 61 "code_model.m"
    else
#line 61 "code_model.m"
      if ((hlds__code_model__HeadVar__1_1 == (MR_Integer) 5))
#line 65 "code_model.m"
        *hlds__code_model__HeadVar__2_2 = (MR_Integer) 1;
#line 61 "code_model.m"
      else
#line 61 "code_model.m"
        if ((hlds__code_model__HeadVar__1_1 == (MR_Integer) 0))
#line 61 "code_model.m"
          *hlds__code_model__HeadVar__2_2 = (MR_Integer) 0;
#line 61 "code_model.m"
        else
#line 61 "code_model.m"
          if ((hlds__code_model__HeadVar__1_1 == (MR_Integer) 6))
#line 67 "code_model.m"
            *hlds__code_model__HeadVar__2_2 = (MR_Integer) 0;
#line 61 "code_model.m"
          else
#line 61 "code_model.m"
            if ((hlds__code_model__HeadVar__1_1 == (MR_Integer) 7))
#line 68 "code_model.m"
              *hlds__code_model__HeadVar__2_2 = (MR_Integer) 1;
#line 61 "code_model.m"
            else
#line 61 "code_model.m"
              if ((hlds__code_model__HeadVar__1_1 == (MR_Integer) 2))
#line 64 "code_model.m"
                *hlds__code_model__HeadVar__2_2 = (MR_Integer) 2;
#line 61 "code_model.m"
              else
#line 61 "code_model.m"
                if ((hlds__code_model__HeadVar__1_1 == (MR_Integer) 3))
#line 63 "code_model.m"
                  *hlds__code_model__HeadVar__2_2 = (MR_Integer) 2;
#line 61 "code_model.m"
                else
#line 62 "code_model.m"
                  *hlds__code_model__HeadVar__2_2 = (MR_Integer) 1;
#line 61 "code_model.m"
  }
#line 36 "code_model.m"
}

void mercury__hlds__code_model__init(void)
{
}

void mercury__hlds__code_model__init_type_tables(void)
{
	static MR_bool initialised = MR_FALSE;
	if (initialised) return;
	initialised = MR_TRUE;

	MR_register_type_ctor_info(&hlds__code_model__hlds__code_model__type_ctor_info_code_model_0);
}

void mercury__hlds__code_model__init_debugger(void)
{
	MR_fatal_error("debugger initialization in MLDS grade");
}

/* ensure everything is compiled with the same grade */
static const void *const MR_grade = &MR_GRADE_VAR;

/* :- end_module hlds.code_model. */
