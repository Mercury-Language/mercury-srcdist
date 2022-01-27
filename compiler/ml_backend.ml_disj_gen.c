/*
** Automatically generated from `ml_disj_gen.m'
** by the Mercury compiler,
** version 13.05.2, configured for x86_64-apple-darwin12.5.0.
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


/* :- module ml_backend.ml_disj_gen. */
/* :- implementation. */

/*
INIT mercury__ml_backend__ml_disj_gen__init
ENDINIT
*/

#include "ml_backend.ml_disj_gen.mih"


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
#include "io.mih"
#include "libs.mih"
#include "list.mih"
#include "map.mih"
#include "maybe.mih"
#include "mdbcomp.mih"
#include "ml_backend.mih"
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
#include "require.mih"
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
#include "backend_libs.builtin_ops.mih"
#include "backend_libs.foreign.mih"
#include "backend_libs.rtti.mih"
#include "check_hlds.delay_info.mih"
#include "check_hlds.mode_constraint_robdd.mih"
#include "check_hlds.mode_errors.mih"
#include "check_hlds.mode_info.mih"
#include "check_hlds.unify_proc.mih"
#include "hlds.code_model.mih"
#include "hlds.const_struct.mih"
#include "hlds.goal_form.mih"
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
#include "ml_backend.ml_code_gen.mih"
#include "ml_backend.ml_code_util.mih"
#include "ml_backend.ml_gen_info.mih"
#include "ml_backend.ml_global_data.mih"
#include "ml_backend.ml_util.mih"
#include "ml_backend.mlds.mih"
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
#include "mdbcomp.feedback.automatic_parallelism.mih"




#line 145 "ml_backend.ml_disj_gen.c"
static const MR_FA_TypeInfo_Struct1 ml_backend__ml_disj_gen__term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0;

#line 148 "ml_backend.ml_disj_gen.c"
static const MR_FA_PseudoTypeInfo_Struct1 ml_backend__ml_disj_gen__list__pti_list_1__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0;

#line 151 "ml_backend.ml_disj_gen.c"
static const MR_FA_PseudoTypeInfo_Struct1 ml_backend__ml_disj_gen__list__pti_list_1__plain_ml_backend__mlds__type_ctor_info_mlds_rval_0;

#line 372 "ml_disj_gen.m"
static MR_Box MR_CALL 
ml_backend__ml_disj_gen__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_108_95_99_111_110_115_116_114_117_99_116_95_100_105_115_106_117_110_99_116_105_111_110_95_118_101_99_116_111_114_95_95_91_49_93_95_48_4_p_0_1(
#line 372 "ml_disj_gen.m"
  MR_Box ml_backend__ml_disj_gen__closure_arg,
#line 372 "ml_disj_gen.m"
  MR_Box ml_backend__ml_disj_gen__wrapper_arg_1);

#line 366 "ml_disj_gen.m"
static void MR_CALL 
ml_backend__ml_disj_gen__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_108_95_99_111_110_115_116_114_117_99_116_95_100_105_115_106_117_110_99_116_105_111_110_95_118_101_99_116_111_114_95_95_91_49_93_95_48_4_p_0(
#line 366 "ml_disj_gen.m"
  MR_Word ml_backend__ml_disj_gen__HeadVar__2_2,
#line 366 "ml_disj_gen.m"
  MR_Word ml_backend__ml_disj_gen__HeadVar__3_3,
#line 366 "ml_disj_gen.m"
  MR_Word * ml_backend__ml_disj_gen__HeadVar__4_4);

#line 274 "ml_disj_gen.m"
static void MR_CALL 
ml_backend__ml_disj_gen__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_108_95_103_101_110_95_111_114_100_105_110_97_114_121_95_109_111_100_101_108_95_110_111_110_95_100_105_115_106_95_95_91_51_93_95_48_6_p_0(
#line 274 "ml_disj_gen.m"
  MR_Word ml_backend__ml_disj_gen__FirstDisjunct_7,
#line 274 "ml_disj_gen.m"
  MR_Word ml_backend__ml_disj_gen__LaterDisjuncts_8,
#line 274 "ml_disj_gen.m"
  MR_Word * ml_backend__ml_disj_gen__Statements_10,
#line 274 "ml_disj_gen.m"
  MR_Word ml_backend__ml_disj_gen__STATE_VARIABLE_Info_0_17,
#line 274 "ml_disj_gen.m"
  MR_Word * ml_backend__ml_disj_gen__STATE_VARIABLE_Info_18);

#line 317 "ml_disj_gen.m"
static MR_Box MR_CALL 
ml_backend__ml_disj_gen__ml_gen_lookup_disj_6_p_0_1(
#line 317 "ml_disj_gen.m"
  MR_Box ml_backend__ml_disj_gen__closure_arg,
#line 317 "ml_disj_gen.m"
  MR_Box ml_backend__ml_disj_gen__wrapper_arg_1);

#line 303 "ml_disj_gen.m"
static void MR_CALL 
ml_backend__ml_disj_gen__ml_gen_lookup_disj_6_p_0(
#line 303 "ml_disj_gen.m"
  MR_Word ml_backend__ml_disj_gen__OutVars_7,
#line 303 "ml_disj_gen.m"
  MR_Word ml_backend__ml_disj_gen__Solns_8,
#line 303 "ml_disj_gen.m"
  MR_Word ml_backend__ml_disj_gen__Context_9,
#line 303 "ml_disj_gen.m"
  MR_Word * ml_backend__ml_disj_gen__Statements_10,
#line 303 "ml_disj_gen.m"
  MR_Word ml_backend__ml_disj_gen__STATE_VARIABLE_Info_0_48,
#line 303 "ml_disj_gen.m"
  MR_Word * ml_backend__ml_disj_gen__STATE_VARIABLE_Info_49);

#line 210 "ml_disj_gen.m"
static void MR_CALL 
ml_backend__ml_disj_gen__ml_gen_ordinary_model_det_semi_disj_7_p_0(
#line 210 "ml_disj_gen.m"
  MR_Word ml_backend__ml_disj_gen__FirstDisjunct_8,
#line 210 "ml_disj_gen.m"
  MR_Word ml_backend__ml_disj_gen__LaterDisjuncts_9,
#line 210 "ml_disj_gen.m"
  MR_Word ml_backend__ml_disj_gen__CodeModel_10,
#line 210 "ml_disj_gen.m"
  MR_Word ml_backend__ml_disj_gen__Context_11,
#line 210 "ml_disj_gen.m"
  MR_Word * ml_backend__ml_disj_gen__Statements_12,
#line 210 "ml_disj_gen.m"
  MR_Word ml_backend__ml_disj_gen__STATE_VARIABLE_Info_0_26,
#line 210 "ml_disj_gen.m"
  MR_Word * ml_backend__ml_disj_gen__STATE_VARIABLE_Info_27);

#line 177 "ml_disj_gen.m"
static void MR_CALL 
ml_backend__ml_disj_gen__ml_gen_disj_7_p_0_1(
#line 177 "ml_disj_gen.m"
  MR_Box ml_backend__ml_disj_gen__closure_arg,
#line 177 "ml_disj_gen.m"
  MR_Box ml_backend__ml_disj_gen__wrapper_arg_1,
#line 177 "ml_disj_gen.m"
  MR_Box * ml_backend__ml_disj_gen__wrapper_arg_2,
#line 177 "ml_disj_gen.m"
  MR_Box ml_backend__ml_disj_gen__wrapper_arg_3,
#line 177 "ml_disj_gen.m"
  MR_Box * ml_backend__ml_disj_gen__wrapper_arg_4);


static /* final */ const MR_Box ml_backend__ml_disj_gen_scalar_common_1[3][2];

static /* final */ const MR_Box ml_backend__ml_disj_gen_scalar_common_2[1][8];

static /* final */ const MR_Box ml_backend__ml_disj_gen_scalar_common_3[3][1];

static /* final */ const MR_Box ml_backend__ml_disj_gen_scalar_common_4[1][6];

static /* final */ const MR_Box ml_backend__ml_disj_gen_scalar_common_5[1][5];

static /* final */ const MR_Box ml_backend__ml_disj_gen_scalar_common_6[1][3];




static /* final */ const MR_Box ml_backend__ml_disj_gen_scalar_common_1[3][2] = {
  /* row 0 */
  {
    ((MR_Box) (&mercury__list__list__type_ctor_info_list_1)),
    ((MR_Box) (&ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_rval_0))
  },
  /* row 1 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 0)),
    ((MR_Box) (MR_mkword(MR_mktag(2), &ml_backend__ml_disj_gen_scalar_common_3[1])))
  },
  /* row 2 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 0)),
    ((MR_Box) (MR_mkword(MR_mktag(2), &ml_backend__ml_disj_gen_scalar_common_3[2])))
  },
};

static /* final */ const MR_Box ml_backend__ml_disj_gen_scalar_common_2[1][8] = {
  /* row 0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 5)),
    ((MR_Box) (&ml_backend__ml_disj_gen__list__pti_list_1__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0)),
    ((MR_Box) (&hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_hlds_goal_0)),
    ((MR_Box) (&ml_backend__ml_disj_gen__list__pti_list_1__plain_ml_backend__mlds__type_ctor_info_mlds_rval_0)),
    ((MR_Box) (&ml_backend__ml_gen_info__ml_backend__ml_gen_info__type_ctor_info_ml_gen_info_0)),
    ((MR_Box) (&ml_backend__ml_gen_info__ml_backend__ml_gen_info__type_ctor_info_ml_gen_info_0))
  },
};

static /* final */ const MR_Box ml_backend__ml_disj_gen_scalar_common_3[3][1] = {
  /* row 0 */
  {
    ((MR_Box) ((MR_Integer) 7))
  },
  /* row 1 */
  {
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row 2 */
  {
    ((MR_Box) ((MR_Integer) 1))
  },
};

static /* final */ const MR_Box ml_backend__ml_disj_gen_scalar_common_4[1][6] = {
  /* row 0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 3)),
    ((MR_Box) (&hlds__hlds_module__hlds__hlds_module__type_ctor_info_module_info_0)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0)),
    ((MR_Box) (&ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_type_0))
  },
};

static /* final */ const MR_Box ml_backend__ml_disj_gen_scalar_common_5[1][5] = {
  /* row 0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 2)),
    ((MR_Box) (&ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_rval_0)),
    ((MR_Box) (&ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_initializer_0))
  },
};

static /* final */ const MR_Box ml_backend__ml_disj_gen_scalar_common_6[1][3] = {
  /* row 0 */
  {
    ((MR_Box) (&ml_backend__ml_disj_gen_scalar_common_5[0])),
    ((MR_Box) (ml_backend__ml_disj_gen__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_108_95_99_111_110_115_116_114_117_99_116_95_100_105_115_106_117_110_99_116_105_111_110_95_118_101_99_116_111_114_95_95_91_49_93_95_48_4_p_0_1)),
    ((MR_Box) (MR_Word) ((MR_Integer) 0))
  },
};



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



#line 354 "ml_backend.ml_disj_gen.c"
static const MR_FA_TypeInfo_Struct1 ml_backend__ml_disj_gen__term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0 = {
  &mercury__term__term__type_ctor_info_var_1,
  {
    (MR_TypeInfo) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0
  }
};

#line 362 "ml_backend.ml_disj_gen.c"
static const MR_FA_PseudoTypeInfo_Struct1 ml_backend__ml_disj_gen__list__pti_list_1__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  {
    (MR_PseudoTypeInfo) &ml_backend__ml_disj_gen__term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0
  }
};

#line 370 "ml_backend.ml_disj_gen.c"
static const MR_FA_PseudoTypeInfo_Struct1 ml_backend__ml_disj_gen__list__pti_list_1__plain_ml_backend__mlds__type_ctor_info_mlds_rval_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  {
    (MR_PseudoTypeInfo) &ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_rval_0
  }
};

#line 372 "ml_disj_gen.m"
static MR_Box MR_CALL 
ml_backend__ml_disj_gen__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_108_95_99_111_110_115_116_114_117_99_116_95_100_105_115_106_117_110_99_116_105_111_110_95_118_101_99_116_111_114_95_95_91_49_93_95_48_4_p_0_1(
#line 372 "ml_disj_gen.m"
  MR_Box ml_backend__ml_disj_gen__closure_arg,
#line 372 "ml_disj_gen.m"
  MR_Box ml_backend__ml_disj_gen__wrapper_arg_1)
#line 372 "ml_disj_gen.m"
{
#line 372 "ml_disj_gen.m"
  {
#line 372 "ml_disj_gen.m"
    MR_Box ml_backend__ml_disj_gen__wrapper_arg_2;
#line 372 "ml_disj_gen.m"
    MR_Box ml_backend__ml_disj_gen__closure = ml_backend__ml_disj_gen__closure_arg;
#line 372 "ml_disj_gen.m"
    MR_Word ml_backend__ml_disj_gen__conv0_HeadVar__2_2;

#line 372 "ml_disj_gen.m"
    {
#line 372 "ml_disj_gen.m"
      ml_backend__ml_disj_gen__conv0_HeadVar__2_2 = ml_backend__ml_util__wrap_init_obj_1_f_0(((MR_Word) ml_backend__ml_disj_gen__wrapper_arg_1));
    }
#line 372 "ml_disj_gen.m"
    ml_backend__ml_disj_gen__wrapper_arg_2 = ((MR_Box) (ml_backend__ml_disj_gen__conv0_HeadVar__2_2));
#line 372 "ml_disj_gen.m"
    return ml_backend__ml_disj_gen__wrapper_arg_2;
#line 372 "ml_disj_gen.m"
  }
#line 372 "ml_disj_gen.m"
}

#line 366 "ml_disj_gen.m"
static void MR_CALL 
ml_backend__ml_disj_gen__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_108_95_99_111_110_115_116_114_117_99_116_95_100_105_115_106_117_110_99_116_105_111_110_95_118_101_99_116_111_114_95_95_91_49_93_95_48_4_p_0(
#line 366 "ml_disj_gen.m"
  MR_Word ml_backend__ml_disj_gen__HeadVar__2_2,
#line 366 "ml_disj_gen.m"
  MR_Word ml_backend__ml_disj_gen__HeadVar__3_3,
#line 366 "ml_disj_gen.m"
  MR_Word * ml_backend__ml_disj_gen__HeadVar__4_4)
#line 366 "ml_disj_gen.m"
{
#line 369 "ml_disj_gen.m"
  {
#line 369 "ml_disj_gen.m"
    MR_bool ml_backend__ml_disj_gen__succeeded;

#line 369 "ml_disj_gen.m"
    if ((ml_backend__ml_disj_gen__HeadVar__3_3 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 369 "ml_disj_gen.m"
      *ml_backend__ml_disj_gen__HeadVar__4_4 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 369 "ml_disj_gen.m"
    else
#line 371 "ml_disj_gen.m"
      {
#line 371 "ml_disj_gen.m"
        MR_Word ml_backend__ml_disj_gen__Soln_9 = ((MR_Word) (MR_hl_field(MR_mktag(1), ml_backend__ml_disj_gen__HeadVar__3_3, (MR_Integer) 0)));
#line 371 "ml_disj_gen.m"
        MR_Word ml_backend__ml_disj_gen__Solns_10 = ((MR_Word) (MR_hl_field(MR_mktag(1), ml_backend__ml_disj_gen__HeadVar__3_3, (MR_Integer) 1)));
#line 371 "ml_disj_gen.m"
        MR_Word ml_backend__ml_disj_gen__RowInitializer_11;
#line 371 "ml_disj_gen.m"
        MR_Word ml_backend__ml_disj_gen__RowInitializers_12;
#line 371 "ml_disj_gen.m"
        MR_Word ml_backend__ml_disj_gen__FieldInitializers_13;

#line 372 "ml_disj_gen.m"
        {
#line 372 "ml_disj_gen.m"
          ml_backend__ml_disj_gen__FieldInitializers_13 = mercury__list__map_2_f_0((MR_Word) &ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_rval_0, (MR_Word) &ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_initializer_0, (MR_Word) &ml_backend__ml_disj_gen_scalar_common_6[0], ml_backend__ml_disj_gen__Soln_9);
        }
#line 373 "ml_disj_gen.m"
        {
#line 373 "ml_disj_gen.m"
          ml_backend__ml_disj_gen__RowInitializer_11 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 373 "ml_disj_gen.m"
          MR_hl_field(MR_mktag(2), ml_backend__ml_disj_gen__RowInitializer_11, 0) = ((MR_Box) (ml_backend__ml_disj_gen__HeadVar__2_2));
#line 373 "ml_disj_gen.m"
          MR_hl_field(MR_mktag(2), ml_backend__ml_disj_gen__RowInitializer_11, 1) = ((MR_Box) (ml_backend__ml_disj_gen__FieldInitializers_13));
#line 373 "ml_disj_gen.m"
        }
#line 374 "ml_disj_gen.m"
        {
#line 374 "ml_disj_gen.m"
          ml_backend__ml_disj_gen__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_108_95_99_111_110_115_116_114_117_99_116_95_100_105_115_106_117_110_99_116_105_111_110_95_118_101_99_116_111_114_95_95_91_49_93_95_48_4_p_0(ml_backend__ml_disj_gen__HeadVar__2_2, ml_backend__ml_disj_gen__Solns_10, &ml_backend__ml_disj_gen__RowInitializers_12);
        }
#line 371 "ml_disj_gen.m"
        {
#line 371 "ml_disj_gen.m"
          MR_Word base;
#line 371 "ml_disj_gen.m"
          base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 371 "ml_disj_gen.m"
          *ml_backend__ml_disj_gen__HeadVar__4_4 = base;
#line 371 "ml_disj_gen.m"
          MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (ml_backend__ml_disj_gen__RowInitializer_11));
#line 371 "ml_disj_gen.m"
          MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (ml_backend__ml_disj_gen__RowInitializers_12));
#line 371 "ml_disj_gen.m"
        }
#line 371 "ml_disj_gen.m"
      }
#line 369 "ml_disj_gen.m"
  }
#line 366 "ml_disj_gen.m"
}

#line 274 "ml_disj_gen.m"
static void MR_CALL 
ml_backend__ml_disj_gen__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_108_95_103_101_110_95_111_114_100_105_110_97_114_121_95_109_111_100_101_108_95_110_111_110_95_100_105_115_106_95_95_91_51_93_95_48_6_p_0(
#line 274 "ml_disj_gen.m"
  MR_Word ml_backend__ml_disj_gen__FirstDisjunct_7,
#line 274 "ml_disj_gen.m"
  MR_Word ml_backend__ml_disj_gen__LaterDisjuncts_8,
#line 274 "ml_disj_gen.m"
  MR_Word * ml_backend__ml_disj_gen__Statements_10,
#line 274 "ml_disj_gen.m"
  MR_Word ml_backend__ml_disj_gen__STATE_VARIABLE_Info_0_17,
#line 274 "ml_disj_gen.m"
  MR_Word * ml_backend__ml_disj_gen__STATE_VARIABLE_Info_18)
#line 274 "ml_disj_gen.m"
{
#line 281 "ml_disj_gen.m"
  {
#line 281 "ml_disj_gen.m"
    MR_bool ml_backend__ml_disj_gen__succeeded;

#line 281 "ml_disj_gen.m"
    if ((ml_backend__ml_disj_gen__LaterDisjuncts_8 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 281 "ml_disj_gen.m"
      {
#line 281 "ml_disj_gen.m"
        MR_Word ml_backend__ml_disj_gen__Statement_12;

#line 282 "ml_disj_gen.m"
        {
#line 282 "ml_disj_gen.m"
          ml_backend__ml_code_gen__ml_gen_goal_as_branch_block_5_p_0((MR_Integer) 2, ml_backend__ml_disj_gen__FirstDisjunct_7, &ml_backend__ml_disj_gen__Statement_12, ml_backend__ml_disj_gen__STATE_VARIABLE_Info_0_17, ml_backend__ml_disj_gen__STATE_VARIABLE_Info_18);
        }
#line 284 "ml_disj_gen.m"
        {
#line 284 "ml_disj_gen.m"
          MR_Word base;
#line 284 "ml_disj_gen.m"
          base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 284 "ml_disj_gen.m"
          *ml_backend__ml_disj_gen__Statements_10 = base;
#line 284 "ml_disj_gen.m"
          MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (ml_backend__ml_disj_gen__Statement_12));
#line 284 "ml_disj_gen.m"
          MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 284 "ml_disj_gen.m"
        }
#line 281 "ml_disj_gen.m"
      }
#line 281 "ml_disj_gen.m"
    else
#line 286 "ml_disj_gen.m"
      {
#line 286 "ml_disj_gen.m"
        MR_Word ml_backend__ml_disj_gen__FirstLaterDisjunct_13 = ((MR_Word) (MR_hl_field(MR_mktag(1), ml_backend__ml_disj_gen__LaterDisjuncts_8, (MR_Integer) 0)));
#line 286 "ml_disj_gen.m"
        MR_Word ml_backend__ml_disj_gen__LaterLaterDisjuncts_14 = ((MR_Word) (MR_hl_field(MR_mktag(1), ml_backend__ml_disj_gen__LaterDisjuncts_8, (MR_Integer) 1)));
#line 286 "ml_disj_gen.m"
        MR_Word ml_backend__ml_disj_gen__FirstStatement_15;
#line 286 "ml_disj_gen.m"
        MR_Word ml_backend__ml_disj_gen__LaterStatements_16;
#line 286 "ml_disj_gen.m"
        MR_Word ml_backend__ml_disj_gen__STATE_VARIABLE_Info_20_20;

#line 294 "ml_disj_gen.m"
        {
#line 294 "ml_disj_gen.m"
          ml_backend__ml_code_gen__ml_gen_goal_as_branch_block_5_p_0((MR_Integer) 2, ml_backend__ml_disj_gen__FirstDisjunct_7, &ml_backend__ml_disj_gen__FirstStatement_15, ml_backend__ml_disj_gen__STATE_VARIABLE_Info_0_17, &ml_backend__ml_disj_gen__STATE_VARIABLE_Info_20_20);
        }
#line 296 "ml_disj_gen.m"
        {
#line 296 "ml_disj_gen.m"
          ml_backend__ml_disj_gen__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_108_95_103_101_110_95_111_114_100_105_110_97_114_121_95_109_111_100_101_108_95_110_111_110_95_100_105_115_106_95_95_91_51_93_95_48_6_p_0(ml_backend__ml_disj_gen__FirstLaterDisjunct_13, ml_backend__ml_disj_gen__LaterLaterDisjuncts_14, &ml_backend__ml_disj_gen__LaterStatements_16, ml_backend__ml_disj_gen__STATE_VARIABLE_Info_20_20, ml_backend__ml_disj_gen__STATE_VARIABLE_Info_18);
        }
#line 298 "ml_disj_gen.m"
        {
#line 298 "ml_disj_gen.m"
          MR_Word base;
#line 298 "ml_disj_gen.m"
          base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 298 "ml_disj_gen.m"
          *ml_backend__ml_disj_gen__Statements_10 = base;
#line 298 "ml_disj_gen.m"
          MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (ml_backend__ml_disj_gen__FirstStatement_15));
#line 298 "ml_disj_gen.m"
          MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (ml_backend__ml_disj_gen__LaterStatements_16));
#line 298 "ml_disj_gen.m"
        }
#line 286 "ml_disj_gen.m"
      }
#line 281 "ml_disj_gen.m"
  }
#line 274 "ml_disj_gen.m"
}

#line 317 "ml_disj_gen.m"
static MR_Box MR_CALL 
ml_backend__ml_disj_gen__ml_gen_lookup_disj_6_p_0_1(
#line 317 "ml_disj_gen.m"
  MR_Box ml_backend__ml_disj_gen__closure_arg,
#line 317 "ml_disj_gen.m"
  MR_Box ml_backend__ml_disj_gen__wrapper_arg_1)
#line 317 "ml_disj_gen.m"
{
#line 317 "ml_disj_gen.m"
  {
#line 317 "ml_disj_gen.m"
    MR_Box ml_backend__ml_disj_gen__wrapper_arg_2;
#line 317 "ml_disj_gen.m"
    MR_Box ml_backend__ml_disj_gen__closure = ml_backend__ml_disj_gen__closure_arg;
#line 317 "ml_disj_gen.m"
    MR_Word ml_backend__ml_disj_gen__conv0_HeadVar__3_3;

#line 317 "ml_disj_gen.m"
    {
#line 317 "ml_disj_gen.m"
      ml_backend__ml_disj_gen__conv0_HeadVar__3_3 = ml_backend__mlds__mercury_type_to_mlds_type_2_f_0(((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_disj_gen__closure, (MR_Integer) 3))), ((MR_Word) ml_backend__ml_disj_gen__wrapper_arg_1));
    }
#line 317 "ml_disj_gen.m"
    ml_backend__ml_disj_gen__wrapper_arg_2 = ((MR_Box) (ml_backend__ml_disj_gen__conv0_HeadVar__3_3));
#line 317 "ml_disj_gen.m"
    return ml_backend__ml_disj_gen__wrapper_arg_2;
#line 317 "ml_disj_gen.m"
  }
#line 317 "ml_disj_gen.m"
}

#line 303 "ml_disj_gen.m"
static void MR_CALL 
ml_backend__ml_disj_gen__ml_gen_lookup_disj_6_p_0(
#line 303 "ml_disj_gen.m"
  MR_Word ml_backend__ml_disj_gen__OutVars_7,
#line 303 "ml_disj_gen.m"
  MR_Word ml_backend__ml_disj_gen__Solns_8,
#line 303 "ml_disj_gen.m"
  MR_Word ml_backend__ml_disj_gen__Context_9,
#line 303 "ml_disj_gen.m"
  MR_Word * ml_backend__ml_disj_gen__Statements_10,
#line 303 "ml_disj_gen.m"
  MR_Word ml_backend__ml_disj_gen__STATE_VARIABLE_Info_0_48,
#line 303 "ml_disj_gen.m"
  MR_Word * ml_backend__ml_disj_gen__STATE_VARIABLE_Info_49)
#line 303 "ml_disj_gen.m"
{
#line 307 "ml_disj_gen.m"
  {
#line 307 "ml_disj_gen.m"
    MR_bool ml_backend__ml_disj_gen__succeeded;
#line 307 "ml_disj_gen.m"
    MR_Word ml_backend__ml_disj_gen__ModuleInfo_12;
#line 307 "ml_disj_gen.m"
    MR_Word ml_backend__ml_disj_gen__ModuleName_13;
#line 307 "ml_disj_gen.m"
    MR_Word ml_backend__ml_disj_gen__MLDS_ModuleName_14;
#line 307 "ml_disj_gen.m"
    MR_Word ml_backend__ml_disj_gen__MLDS_Context_15;
#line 307 "ml_disj_gen.m"
    MR_Word ml_backend__ml_disj_gen__Target_16;
#line 307 "ml_disj_gen.m"
    MR_Word ml_backend__ml_disj_gen__VarTypes_17;
#line 307 "ml_disj_gen.m"
    MR_Word ml_backend__ml_disj_gen__FieldTypes_18;
#line 307 "ml_disj_gen.m"
    MR_Word ml_backend__ml_disj_gen__MLDS_FieldTypes_19;
#line 307 "ml_disj_gen.m"
    MR_Word ml_backend__ml_disj_gen__GlobalData0_20;
#line 307 "ml_disj_gen.m"
    MR_Word ml_backend__ml_disj_gen__StructTypeNum_21;
#line 307 "ml_disj_gen.m"
    MR_Word ml_backend__ml_disj_gen__StructType_22;
#line 307 "ml_disj_gen.m"
    MR_Word ml_backend__ml_disj_gen__FieldIds_23;
#line 307 "ml_disj_gen.m"
    MR_Word ml_backend__ml_disj_gen__GlobalData1_24;
#line 307 "ml_disj_gen.m"
    MR_Word ml_backend__ml_disj_gen__RowInitializers_25;
#line 307 "ml_disj_gen.m"
    MR_Integer ml_backend__ml_disj_gen__NumRows_26;
#line 307 "ml_disj_gen.m"
    MR_Word ml_backend__ml_disj_gen__VectorCommon_27;
#line 307 "ml_disj_gen.m"
    MR_Word ml_backend__ml_disj_gen__GlobalData_28;
#line 307 "ml_disj_gen.m"
    MR_Word ml_backend__ml_disj_gen__SlotVar_29;
#line 307 "ml_disj_gen.m"
    MR_Word ml_backend__ml_disj_gen__SlotVarType_30;
#line 307 "ml_disj_gen.m"
    MR_Word ml_backend__ml_disj_gen__SlotVarDefn_32;
#line 307 "ml_disj_gen.m"
    MR_Word ml_backend__ml_disj_gen__SlotVarLval_33;
#line 307 "ml_disj_gen.m"
    MR_Word ml_backend__ml_disj_gen__SlotVarRval_34;
#line 307 "ml_disj_gen.m"
    MR_Word ml_backend__ml_disj_gen__LookupStatements_35;
#line 307 "ml_disj_gen.m"
    MR_Word ml_backend__ml_disj_gen__CallContStatement_36;
#line 307 "ml_disj_gen.m"
    MR_Word ml_backend__ml_disj_gen__InitSlotVarStmt_37;
#line 307 "ml_disj_gen.m"
    MR_Word ml_backend__ml_disj_gen__InitSlotVarStatement_38;
#line 307 "ml_disj_gen.m"
    MR_Word ml_backend__ml_disj_gen__IncrSlotVarStmt_39;
#line 307 "ml_disj_gen.m"
    MR_Word ml_backend__ml_disj_gen__IncrSlotVarStatement_40;
#line 307 "ml_disj_gen.m"
    MR_Word ml_backend__ml_disj_gen__LoopBodyStmt_41;
#line 307 "ml_disj_gen.m"
    MR_Word ml_backend__ml_disj_gen__LoopBodyStatement_42;
#line 307 "ml_disj_gen.m"
    MR_Word ml_backend__ml_disj_gen__LoopCond_43;
#line 307 "ml_disj_gen.m"
    MR_Word ml_backend__ml_disj_gen__LoopStmt_44;
#line 307 "ml_disj_gen.m"
    MR_Word ml_backend__ml_disj_gen__LoopStatement_45;
#line 307 "ml_disj_gen.m"
    MR_Word ml_backend__ml_disj_gen__Stmt_46;
#line 307 "ml_disj_gen.m"
    MR_Word ml_backend__ml_disj_gen__Statement_47;
#line 307 "ml_disj_gen.m"
    MR_Word ml_backend__ml_disj_gen__V_50_50;
#line 307 "ml_disj_gen.m"
    MR_Word ml_backend__ml_disj_gen__STATE_VARIABLE_Info_51_51;
#line 307 "ml_disj_gen.m"
    MR_Word ml_backend__ml_disj_gen__STATE_VARIABLE_Info_53_53;
#line 307 "ml_disj_gen.m"
    MR_Word ml_backend__ml_disj_gen__V_54_54;
#line 307 "ml_disj_gen.m"
    MR_Word ml_backend__ml_disj_gen__STATE_VARIABLE_Info_55_55;
#line 307 "ml_disj_gen.m"
    MR_Word ml_backend__ml_disj_gen__V_57_57;
#line 307 "ml_disj_gen.m"
    MR_Word ml_backend__ml_disj_gen__V_61_61;
#line 307 "ml_disj_gen.m"
    MR_Word ml_backend__ml_disj_gen__V_62_62;
#line 307 "ml_disj_gen.m"
    MR_Word ml_backend__ml_disj_gen__V_68_68;
#line 307 "ml_disj_gen.m"
    MR_Word ml_backend__ml_disj_gen__V_69_69;
#line 307 "ml_disj_gen.m"
    MR_Word ml_backend__ml_disj_gen__V_70_70;
#line 307 "ml_disj_gen.m"
    MR_Word ml_backend__ml_disj_gen__V_73_73;
#line 307 "ml_disj_gen.m"
    MR_Word ml_backend__ml_disj_gen__V_74_74;
#line 307 "ml_disj_gen.m"
    MR_Word ml_backend__ml_disj_gen__V_76_76;
#line 307 "ml_disj_gen.m"
    MR_Word ml_backend__ml_disj_gen__V_78_78;
#line 307 "ml_disj_gen.m"
    MR_Word ml_backend__ml_disj_gen__V_79_79;

#line 308 "ml_disj_gen.m"
    {
#line 308 "ml_disj_gen.m"
      ml_backend__ml_gen_info__ml_gen_info_get_module_info_2_p_0(ml_backend__ml_disj_gen__STATE_VARIABLE_Info_0_48, &ml_backend__ml_disj_gen__ModuleInfo_12);
    }
#line 309 "ml_disj_gen.m"
    {
#line 309 "ml_disj_gen.m"
      hlds__hlds_module__module_info_get_name_2_p_0(ml_backend__ml_disj_gen__ModuleInfo_12, &ml_backend__ml_disj_gen__ModuleName_13);
    }
#line 310 "ml_disj_gen.m"
    {
#line 310 "ml_disj_gen.m"
      ml_backend__ml_disj_gen__MLDS_ModuleName_14 = ml_backend__mlds__mercury_module_name_to_mlds_1_f_0(ml_backend__ml_disj_gen__ModuleName_13);
    }
#line 311 "ml_disj_gen.m"
    {
#line 311 "ml_disj_gen.m"
      ml_backend__ml_disj_gen__MLDS_Context_15 = ml_backend__mlds__mlds_make_context_1_f_0(ml_backend__ml_disj_gen__Context_9);
    }
#line 312 "ml_disj_gen.m"
    {
#line 312 "ml_disj_gen.m"
      ml_backend__ml_gen_info__ml_gen_info_get_target_2_p_0(ml_backend__ml_disj_gen__STATE_VARIABLE_Info_0_48, &ml_backend__ml_disj_gen__Target_16);
    }
#line 314 "ml_disj_gen.m"
    {
#line 314 "ml_disj_gen.m"
      ml_backend__ml_gen_info__ml_gen_info_get_var_types_2_p_0(ml_backend__ml_disj_gen__STATE_VARIABLE_Info_0_48, &ml_backend__ml_disj_gen__VarTypes_17);
    }
#line 315 "ml_disj_gen.m"
    {
#line 315 "ml_disj_gen.m"
      parse_tree__prog_data__lookup_var_types_3_p_0(ml_backend__ml_disj_gen__VarTypes_17, ml_backend__ml_disj_gen__OutVars_7, &ml_backend__ml_disj_gen__FieldTypes_18);
    }
#line 317 "ml_disj_gen.m"
    {
#line 317 "ml_disj_gen.m"
      ml_backend__ml_disj_gen__V_50_50 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
#line 317 "ml_disj_gen.m"
      MR_hl_field(MR_mktag(0), ml_backend__ml_disj_gen__V_50_50, 0) = ((MR_Box) (&ml_backend__ml_disj_gen_scalar_common_4[0]));
#line 317 "ml_disj_gen.m"
      MR_hl_field(MR_mktag(0), ml_backend__ml_disj_gen__V_50_50, 1) = ((MR_Box) (ml_backend__ml_disj_gen__ml_gen_lookup_disj_6_p_0_1));
#line 317 "ml_disj_gen.m"
      MR_hl_field(MR_mktag(0), ml_backend__ml_disj_gen__V_50_50, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 317 "ml_disj_gen.m"
      MR_hl_field(MR_mktag(0), ml_backend__ml_disj_gen__V_50_50, 3) = ((MR_Box) (ml_backend__ml_disj_gen__ModuleInfo_12));
#line 317 "ml_disj_gen.m"
    }
#line 316 "ml_disj_gen.m"
    {
#line 316 "ml_disj_gen.m"
      ml_backend__ml_disj_gen__MLDS_FieldTypes_19 = mercury__list__map_2_f_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0, (MR_Word) &ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_type_0, ml_backend__ml_disj_gen__V_50_50, ml_backend__ml_disj_gen__FieldTypes_18);
    }
#line 319 "ml_disj_gen.m"
    {
#line 319 "ml_disj_gen.m"
      ml_backend__ml_gen_info__ml_gen_info_get_global_data_2_p_0(ml_backend__ml_disj_gen__STATE_VARIABLE_Info_0_48, &ml_backend__ml_disj_gen__GlobalData0_20);
    }
#line 320 "ml_disj_gen.m"
    {
#line 320 "ml_disj_gen.m"
      ml_backend__ml_global_data__ml_gen_static_vector_type_9_p_0(ml_backend__ml_disj_gen__MLDS_ModuleName_14, ml_backend__ml_disj_gen__MLDS_Context_15, ml_backend__ml_disj_gen__Target_16, ml_backend__ml_disj_gen__MLDS_FieldTypes_19, &ml_backend__ml_disj_gen__StructTypeNum_21, &ml_backend__ml_disj_gen__StructType_22, &ml_backend__ml_disj_gen__FieldIds_23, ml_backend__ml_disj_gen__GlobalData0_20, &ml_backend__ml_disj_gen__GlobalData1_24);
    }
#line 324 "ml_disj_gen.m"
    {
#line 324 "ml_disj_gen.m"
      ml_backend__ml_disj_gen__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_108_95_99_111_110_115_116_114_117_99_116_95_100_105_115_106_117_110_99_116_105_111_110_95_118_101_99_116_111_114_95_95_91_49_93_95_48_4_p_0(ml_backend__ml_disj_gen__StructType_22, ml_backend__ml_disj_gen__Solns_8, &ml_backend__ml_disj_gen__RowInitializers_25);
    }
#line 326 "ml_disj_gen.m"
    {
#line 326 "ml_disj_gen.m"
      mercury__list__length_2_p_0((MR_Word) &ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_initializer_0, ml_backend__ml_disj_gen__RowInitializers_25, &ml_backend__ml_disj_gen__NumRows_26);
    }
#line 328 "ml_disj_gen.m"
    {
#line 328 "ml_disj_gen.m"
      ml_backend__ml_global_data__ml_gen_static_vector_defn_6_p_0(ml_backend__ml_disj_gen__MLDS_ModuleName_14, ml_backend__ml_disj_gen__StructTypeNum_21, ml_backend__ml_disj_gen__RowInitializers_25, &ml_backend__ml_disj_gen__VectorCommon_27, ml_backend__ml_disj_gen__GlobalData1_24, &ml_backend__ml_disj_gen__GlobalData_28);
    }
#line 330 "ml_disj_gen.m"
    {
#line 330 "ml_disj_gen.m"
      ml_backend__ml_gen_info__ml_gen_info_set_global_data_3_p_0(ml_backend__ml_disj_gen__GlobalData_28, ml_backend__ml_disj_gen__STATE_VARIABLE_Info_0_48, &ml_backend__ml_disj_gen__STATE_VARIABLE_Info_51_51);
    }
#line 332 "ml_disj_gen.m"
    {
#line 332 "ml_disj_gen.m"
      ml_backend__ml_gen_info__ml_gen_info_new_aux_var_name_4_p_0((MR_String) "slot", &ml_backend__ml_disj_gen__SlotVar_29, ml_backend__ml_disj_gen__STATE_VARIABLE_Info_51_51, &ml_backend__ml_disj_gen__STATE_VARIABLE_Info_53_53);
    }
#line 333 "ml_disj_gen.m"
    ml_backend__ml_disj_gen__SlotVarType_30 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 2));
#line 336 "ml_disj_gen.m"
    ml_backend__ml_disj_gen__V_54_54 = (MR_Word) MR_mkword(MR_mktag(1), (MR_Word) ml_backend__ml_disj_gen__SlotVar_29);
#line 336 "ml_disj_gen.m"
    {
#line 336 "ml_disj_gen.m"
      ml_backend__ml_disj_gen__SlotVarDefn_32 = ml_backend__ml_code_util__ml_gen_mlds_var_decl_4_f_0(ml_backend__ml_disj_gen__V_54_54, ml_backend__ml_disj_gen__SlotVarType_30, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), ml_backend__ml_disj_gen__MLDS_Context_15);
    }
#line 338 "ml_disj_gen.m"
    {
#line 338 "ml_disj_gen.m"
      ml_backend__ml_code_util__ml_gen_var_lval_4_p_0(ml_backend__ml_disj_gen__STATE_VARIABLE_Info_53_53, ml_backend__ml_disj_gen__SlotVar_29, ml_backend__ml_disj_gen__SlotVarType_30, &ml_backend__ml_disj_gen__SlotVarLval_33);
    }
#line 339 "ml_disj_gen.m"
    {
#line 339 "ml_disj_gen.m"
      ml_backend__ml_disj_gen__SlotVarRval_34 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 339 "ml_disj_gen.m"
      MR_hl_field(MR_mktag(1), ml_backend__ml_disj_gen__SlotVarRval_34, 0) = ((MR_Box) (ml_backend__ml_disj_gen__SlotVarLval_33));
#line 339 "ml_disj_gen.m"
    }
#line 341 "ml_disj_gen.m"
    {
#line 341 "ml_disj_gen.m"
      ml_backend__ml_code_util__ml_generate_field_assigns_10_p_0(ml_backend__ml_disj_gen__OutVars_7, ml_backend__ml_disj_gen__MLDS_FieldTypes_19, ml_backend__ml_disj_gen__FieldIds_23, ml_backend__ml_disj_gen__VectorCommon_27, ml_backend__ml_disj_gen__StructType_22, ml_backend__ml_disj_gen__SlotVarRval_34, ml_backend__ml_disj_gen__MLDS_Context_15, &ml_backend__ml_disj_gen__LookupStatements_35, ml_backend__ml_disj_gen__STATE_VARIABLE_Info_53_53, &ml_backend__ml_disj_gen__STATE_VARIABLE_Info_55_55);
    }
#line 344 "ml_disj_gen.m"
    {
#line 344 "ml_disj_gen.m"
      ml_backend__ml_code_util__ml_gen_call_current_success_cont_4_p_0(ml_backend__ml_disj_gen__Context_9, &ml_backend__ml_disj_gen__CallContStatement_36, ml_backend__ml_disj_gen__STATE_VARIABLE_Info_55_55, ml_backend__ml_disj_gen__STATE_VARIABLE_Info_49);
    }
#line 346 "ml_disj_gen.m"
    {
#line 346 "ml_disj_gen.m"
      ml_backend__ml_disj_gen__V_57_57 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 346 "ml_disj_gen.m"
      MR_hl_field(MR_mktag(2), ml_backend__ml_disj_gen__V_57_57, 0) = ((MR_Box) (ml_backend__ml_disj_gen__SlotVarLval_33));
#line 346 "ml_disj_gen.m"
      MR_hl_field(MR_mktag(2), ml_backend__ml_disj_gen__V_57_57, 1) = ((MR_Box) (MR_mkword(MR_mktag(3), &ml_backend__ml_disj_gen_scalar_common_1[1])));
#line 346 "ml_disj_gen.m"
    }
#line 346 "ml_disj_gen.m"
    {
#line 346 "ml_disj_gen.m"
      ml_backend__ml_disj_gen__InitSlotVarStmt_37 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 346 "ml_disj_gen.m"
      MR_hl_field(MR_mktag(3), ml_backend__ml_disj_gen__InitSlotVarStmt_37, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 8));
#line 346 "ml_disj_gen.m"
      MR_hl_field(MR_mktag(3), ml_backend__ml_disj_gen__InitSlotVarStmt_37, 1) = ((MR_Box) (ml_backend__ml_disj_gen__V_57_57));
#line 346 "ml_disj_gen.m"
    }
#line 348 "ml_disj_gen.m"
    {
#line 348 "ml_disj_gen.m"
      ml_backend__ml_disj_gen__InitSlotVarStatement_38 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 348 "ml_disj_gen.m"
      MR_hl_field(MR_mktag(0), ml_backend__ml_disj_gen__InitSlotVarStatement_38, 0) = ((MR_Box) (ml_backend__ml_disj_gen__InitSlotVarStmt_37));
#line 348 "ml_disj_gen.m"
      MR_hl_field(MR_mktag(0), ml_backend__ml_disj_gen__InitSlotVarStatement_38, 1) = ((MR_Box) (ml_backend__ml_disj_gen__MLDS_Context_15));
#line 348 "ml_disj_gen.m"
    }
#line 350 "ml_disj_gen.m"
    {
#line 350 "ml_disj_gen.m"
      ml_backend__ml_disj_gen__V_62_62 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL));
#line 350 "ml_disj_gen.m"
      MR_hl_field(MR_mktag(3), ml_backend__ml_disj_gen__V_62_62, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
#line 350 "ml_disj_gen.m"
      MR_hl_field(MR_mktag(3), ml_backend__ml_disj_gen__V_62_62, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 350 "ml_disj_gen.m"
      MR_hl_field(MR_mktag(3), ml_backend__ml_disj_gen__V_62_62, 2) = ((MR_Box) (ml_backend__ml_disj_gen__SlotVarRval_34));
#line 350 "ml_disj_gen.m"
      MR_hl_field(MR_mktag(3), ml_backend__ml_disj_gen__V_62_62, 3) = ((MR_Box) (MR_mkword(MR_mktag(3), &ml_backend__ml_disj_gen_scalar_common_1[2])));
#line 350 "ml_disj_gen.m"
    }
#line 350 "ml_disj_gen.m"
    {
#line 350 "ml_disj_gen.m"
      ml_backend__ml_disj_gen__V_61_61 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 350 "ml_disj_gen.m"
      MR_hl_field(MR_mktag(2), ml_backend__ml_disj_gen__V_61_61, 0) = ((MR_Box) (ml_backend__ml_disj_gen__SlotVarLval_33));
#line 350 "ml_disj_gen.m"
      MR_hl_field(MR_mktag(2), ml_backend__ml_disj_gen__V_61_61, 1) = ((MR_Box) (ml_backend__ml_disj_gen__V_62_62));
#line 350 "ml_disj_gen.m"
    }
#line 350 "ml_disj_gen.m"
    {
#line 350 "ml_disj_gen.m"
      ml_backend__ml_disj_gen__IncrSlotVarStmt_39 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 350 "ml_disj_gen.m"
      MR_hl_field(MR_mktag(3), ml_backend__ml_disj_gen__IncrSlotVarStmt_39, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 8));
#line 350 "ml_disj_gen.m"
      MR_hl_field(MR_mktag(3), ml_backend__ml_disj_gen__IncrSlotVarStmt_39, 1) = ((MR_Box) (ml_backend__ml_disj_gen__V_61_61));
#line 350 "ml_disj_gen.m"
    }
#line 352 "ml_disj_gen.m"
    {
#line 352 "ml_disj_gen.m"
      ml_backend__ml_disj_gen__IncrSlotVarStatement_40 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 352 "ml_disj_gen.m"
      MR_hl_field(MR_mktag(0), ml_backend__ml_disj_gen__IncrSlotVarStatement_40, 0) = ((MR_Box) (ml_backend__ml_disj_gen__IncrSlotVarStmt_39));
#line 352 "ml_disj_gen.m"
      MR_hl_field(MR_mktag(0), ml_backend__ml_disj_gen__IncrSlotVarStatement_40, 1) = ((MR_Box) (ml_backend__ml_disj_gen__MLDS_Context_15));
#line 352 "ml_disj_gen.m"
    }
#line 355 "ml_disj_gen.m"
    {
#line 355 "ml_disj_gen.m"
      ml_backend__ml_disj_gen__V_70_70 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 355 "ml_disj_gen.m"
      MR_hl_field(MR_mktag(1), ml_backend__ml_disj_gen__V_70_70, 0) = ((MR_Box) (ml_backend__ml_disj_gen__IncrSlotVarStatement_40));
#line 355 "ml_disj_gen.m"
      MR_hl_field(MR_mktag(1), ml_backend__ml_disj_gen__V_70_70, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 355 "ml_disj_gen.m"
    }
#line 355 "ml_disj_gen.m"
    {
#line 355 "ml_disj_gen.m"
      ml_backend__ml_disj_gen__V_69_69 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 355 "ml_disj_gen.m"
      MR_hl_field(MR_mktag(1), ml_backend__ml_disj_gen__V_69_69, 0) = ((MR_Box) (ml_backend__ml_disj_gen__CallContStatement_36));
#line 355 "ml_disj_gen.m"
      MR_hl_field(MR_mktag(1), ml_backend__ml_disj_gen__V_69_69, 1) = ((MR_Box) (ml_backend__ml_disj_gen__V_70_70));
#line 355 "ml_disj_gen.m"
    }
#line 354 "ml_disj_gen.m"
    {
#line 354 "ml_disj_gen.m"
      ml_backend__ml_disj_gen__V_68_68 = mercury__list__f_43_43_2_f_0((MR_Word) &ml_backend__mlds__ml_backend__mlds__type_ctor_info_statement_0, ml_backend__ml_disj_gen__LookupStatements_35, ml_backend__ml_disj_gen__V_69_69);
    }
#line 354 "ml_disj_gen.m"
    {
#line 354 "ml_disj_gen.m"
      ml_backend__ml_disj_gen__LoopBodyStmt_41 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 354 "ml_disj_gen.m"
      MR_hl_field(MR_mktag(0), ml_backend__ml_disj_gen__LoopBodyStmt_41, 0) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 354 "ml_disj_gen.m"
      MR_hl_field(MR_mktag(0), ml_backend__ml_disj_gen__LoopBodyStmt_41, 1) = ((MR_Box) (ml_backend__ml_disj_gen__V_68_68));
#line 354 "ml_disj_gen.m"
    }
#line 356 "ml_disj_gen.m"
    {
#line 356 "ml_disj_gen.m"
      ml_backend__ml_disj_gen__LoopBodyStatement_42 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 356 "ml_disj_gen.m"
      MR_hl_field(MR_mktag(0), ml_backend__ml_disj_gen__LoopBodyStatement_42, 0) = ((MR_Box) (ml_backend__ml_disj_gen__LoopBodyStmt_41));
#line 356 "ml_disj_gen.m"
      MR_hl_field(MR_mktag(0), ml_backend__ml_disj_gen__LoopBodyStatement_42, 1) = ((MR_Box) (ml_backend__ml_disj_gen__MLDS_Context_15));
#line 356 "ml_disj_gen.m"
    }
#line 358 "ml_disj_gen.m"
    {
#line 358 "ml_disj_gen.m"
      ml_backend__ml_disj_gen__V_74_74 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 358 "ml_disj_gen.m"
      MR_hl_field(MR_mktag(2), ml_backend__ml_disj_gen__V_74_74, 0) = ((MR_Box) (ml_backend__ml_disj_gen__NumRows_26));
#line 358 "ml_disj_gen.m"
    }
#line 358 "ml_disj_gen.m"
    {
#line 358 "ml_disj_gen.m"
      ml_backend__ml_disj_gen__V_73_73 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 358 "ml_disj_gen.m"
      MR_hl_field(MR_mktag(3), ml_backend__ml_disj_gen__V_73_73, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 0));
#line 358 "ml_disj_gen.m"
      MR_hl_field(MR_mktag(3), ml_backend__ml_disj_gen__V_73_73, 1) = ((MR_Box) (ml_backend__ml_disj_gen__V_74_74));
#line 358 "ml_disj_gen.m"
    }
#line 358 "ml_disj_gen.m"
    {
#line 358 "ml_disj_gen.m"
      ml_backend__ml_disj_gen__LoopCond_43 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL));
#line 358 "ml_disj_gen.m"
      MR_hl_field(MR_mktag(3), ml_backend__ml_disj_gen__LoopCond_43, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
#line 358 "ml_disj_gen.m"
      MR_hl_field(MR_mktag(3), ml_backend__ml_disj_gen__LoopCond_43, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 22))));
#line 358 "ml_disj_gen.m"
      MR_hl_field(MR_mktag(3), ml_backend__ml_disj_gen__LoopCond_43, 2) = ((MR_Box) (ml_backend__ml_disj_gen__SlotVarRval_34));
#line 358 "ml_disj_gen.m"
      MR_hl_field(MR_mktag(3), ml_backend__ml_disj_gen__LoopCond_43, 3) = ((MR_Box) (ml_backend__ml_disj_gen__V_73_73));
#line 358 "ml_disj_gen.m"
    }
#line 359 "ml_disj_gen.m"
    {
#line 359 "ml_disj_gen.m"
      ml_backend__ml_disj_gen__LoopStmt_44 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
#line 359 "ml_disj_gen.m"
      MR_hl_field(MR_mktag(1), ml_backend__ml_disj_gen__LoopStmt_44, 0) = ((MR_Box) ((MR_Integer) 1));
#line 359 "ml_disj_gen.m"
      MR_hl_field(MR_mktag(1), ml_backend__ml_disj_gen__LoopStmt_44, 1) = ((MR_Box) (ml_backend__ml_disj_gen__LoopCond_43));
#line 359 "ml_disj_gen.m"
      MR_hl_field(MR_mktag(1), ml_backend__ml_disj_gen__LoopStmt_44, 2) = ((MR_Box) (ml_backend__ml_disj_gen__LoopBodyStatement_42));
#line 359 "ml_disj_gen.m"
    }
#line 360 "ml_disj_gen.m"
    {
#line 360 "ml_disj_gen.m"
      ml_backend__ml_disj_gen__LoopStatement_45 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 360 "ml_disj_gen.m"
      MR_hl_field(MR_mktag(0), ml_backend__ml_disj_gen__LoopStatement_45, 0) = ((MR_Box) (ml_backend__ml_disj_gen__LoopStmt_44));
#line 360 "ml_disj_gen.m"
      MR_hl_field(MR_mktag(0), ml_backend__ml_disj_gen__LoopStatement_45, 1) = ((MR_Box) (ml_backend__ml_disj_gen__MLDS_Context_15));
#line 360 "ml_disj_gen.m"
    }
#line 362 "ml_disj_gen.m"
    {
#line 362 "ml_disj_gen.m"
      ml_backend__ml_disj_gen__V_76_76 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 362 "ml_disj_gen.m"
      MR_hl_field(MR_mktag(1), ml_backend__ml_disj_gen__V_76_76, 0) = ((MR_Box) (ml_backend__ml_disj_gen__SlotVarDefn_32));
#line 362 "ml_disj_gen.m"
      MR_hl_field(MR_mktag(1), ml_backend__ml_disj_gen__V_76_76, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 362 "ml_disj_gen.m"
    }
#line 362 "ml_disj_gen.m"
    {
#line 362 "ml_disj_gen.m"
      ml_backend__ml_disj_gen__V_79_79 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 362 "ml_disj_gen.m"
      MR_hl_field(MR_mktag(1), ml_backend__ml_disj_gen__V_79_79, 0) = ((MR_Box) (ml_backend__ml_disj_gen__LoopStatement_45));
#line 362 "ml_disj_gen.m"
      MR_hl_field(MR_mktag(1), ml_backend__ml_disj_gen__V_79_79, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 362 "ml_disj_gen.m"
    }
#line 362 "ml_disj_gen.m"
    {
#line 362 "ml_disj_gen.m"
      ml_backend__ml_disj_gen__V_78_78 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 362 "ml_disj_gen.m"
      MR_hl_field(MR_mktag(1), ml_backend__ml_disj_gen__V_78_78, 0) = ((MR_Box) (ml_backend__ml_disj_gen__InitSlotVarStatement_38));
#line 362 "ml_disj_gen.m"
      MR_hl_field(MR_mktag(1), ml_backend__ml_disj_gen__V_78_78, 1) = ((MR_Box) (ml_backend__ml_disj_gen__V_79_79));
#line 362 "ml_disj_gen.m"
    }
#line 362 "ml_disj_gen.m"
    {
#line 362 "ml_disj_gen.m"
      ml_backend__ml_disj_gen__Stmt_46 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 362 "ml_disj_gen.m"
      MR_hl_field(MR_mktag(0), ml_backend__ml_disj_gen__Stmt_46, 0) = ((MR_Box) (ml_backend__ml_disj_gen__V_76_76));
#line 362 "ml_disj_gen.m"
      MR_hl_field(MR_mktag(0), ml_backend__ml_disj_gen__Stmt_46, 1) = ((MR_Box) (ml_backend__ml_disj_gen__V_78_78));
#line 362 "ml_disj_gen.m"
    }
#line 363 "ml_disj_gen.m"
    {
#line 363 "ml_disj_gen.m"
      ml_backend__ml_disj_gen__Statement_47 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 363 "ml_disj_gen.m"
      MR_hl_field(MR_mktag(0), ml_backend__ml_disj_gen__Statement_47, 0) = ((MR_Box) (ml_backend__ml_disj_gen__Stmt_46));
#line 363 "ml_disj_gen.m"
      MR_hl_field(MR_mktag(0), ml_backend__ml_disj_gen__Statement_47, 1) = ((MR_Box) (ml_backend__ml_disj_gen__MLDS_Context_15));
#line 363 "ml_disj_gen.m"
    }
#line 364 "ml_disj_gen.m"
    {
#line 364 "ml_disj_gen.m"
      MR_Word base;
#line 364 "ml_disj_gen.m"
      base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 364 "ml_disj_gen.m"
      *ml_backend__ml_disj_gen__Statements_10 = base;
#line 364 "ml_disj_gen.m"
      MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (ml_backend__ml_disj_gen__Statement_47));
#line 364 "ml_disj_gen.m"
      MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 364 "ml_disj_gen.m"
    }
#line 307 "ml_disj_gen.m"
  }
#line 303 "ml_disj_gen.m"
}

#line 210 "ml_disj_gen.m"
static void MR_CALL 
ml_backend__ml_disj_gen__ml_gen_ordinary_model_det_semi_disj_7_p_0(
#line 210 "ml_disj_gen.m"
  MR_Word ml_backend__ml_disj_gen__FirstDisjunct_8,
#line 210 "ml_disj_gen.m"
  MR_Word ml_backend__ml_disj_gen__LaterDisjuncts_9,
#line 210 "ml_disj_gen.m"
  MR_Word ml_backend__ml_disj_gen__CodeModel_10,
#line 210 "ml_disj_gen.m"
  MR_Word ml_backend__ml_disj_gen__Context_11,
#line 210 "ml_disj_gen.m"
  MR_Word * ml_backend__ml_disj_gen__Statements_12,
#line 210 "ml_disj_gen.m"
  MR_Word ml_backend__ml_disj_gen__STATE_VARIABLE_Info_0_26,
#line 210 "ml_disj_gen.m"
  MR_Word * ml_backend__ml_disj_gen__STATE_VARIABLE_Info_27)
#line 210 "ml_disj_gen.m"
{
#line 217 "ml_disj_gen.m"
  {
#line 217 "ml_disj_gen.m"
    MR_bool ml_backend__ml_disj_gen__succeeded;

#line 217 "ml_disj_gen.m"
    if ((ml_backend__ml_disj_gen__LaterDisjuncts_9 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 217 "ml_disj_gen.m"
      {
#line 217 "ml_disj_gen.m"
        MR_Word ml_backend__ml_disj_gen__Statement_14;

#line 218 "ml_disj_gen.m"
        {
#line 218 "ml_disj_gen.m"
          ml_backend__ml_code_gen__ml_gen_goal_as_branch_block_5_p_0(ml_backend__ml_disj_gen__CodeModel_10, ml_backend__ml_disj_gen__FirstDisjunct_8, &ml_backend__ml_disj_gen__Statement_14, ml_backend__ml_disj_gen__STATE_VARIABLE_Info_0_26, ml_backend__ml_disj_gen__STATE_VARIABLE_Info_27);
        }
#line 220 "ml_disj_gen.m"
        {
#line 220 "ml_disj_gen.m"
          MR_Word base;
#line 220 "ml_disj_gen.m"
          base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 220 "ml_disj_gen.m"
          *ml_backend__ml_disj_gen__Statements_12 = base;
#line 220 "ml_disj_gen.m"
          MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (ml_backend__ml_disj_gen__Statement_14));
#line 220 "ml_disj_gen.m"
          MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 220 "ml_disj_gen.m"
        }
#line 217 "ml_disj_gen.m"
      }
#line 217 "ml_disj_gen.m"
    else
#line 222 "ml_disj_gen.m"
      {
#line 222 "ml_disj_gen.m"
        MR_Word ml_backend__ml_disj_gen__FirstLaterDisjunct_15 = ((MR_Word) (MR_hl_field(MR_mktag(1), ml_backend__ml_disj_gen__LaterDisjuncts_9, (MR_Integer) 0)));
#line 222 "ml_disj_gen.m"
        MR_Word ml_backend__ml_disj_gen__LaterLaterDisjuncts_16 = ((MR_Word) (MR_hl_field(MR_mktag(1), ml_backend__ml_disj_gen__LaterDisjuncts_9, (MR_Integer) 1)));
#line 222 "ml_disj_gen.m"
        MR_Word ml_backend__ml_disj_gen__FirstGoalInfo_18 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_disj_gen__FirstDisjunct_8, (MR_Integer) 1)));
#line 222 "ml_disj_gen.m"
        MR_Word ml_backend__ml_disj_gen__FirstCodeModel_19;
#line 243 "ml_disj_gen.m"
        MR_Word ml_backend__ml_disj_gen__V_17_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_disj_gen__FirstDisjunct_8, (MR_Integer) 0)));

#line 244 "ml_disj_gen.m"
        {
#line 244 "ml_disj_gen.m"
          ml_backend__ml_disj_gen__FirstCodeModel_19 = hlds__code_model__goal_info_get_code_model_1_f_0(ml_backend__ml_disj_gen__FirstGoalInfo_18);
        }
#line 250 "ml_disj_gen.m"
        if ((ml_backend__ml_disj_gen__FirstCodeModel_19 == (MR_Integer) 0))
#line 246 "ml_disj_gen.m"
          {
#line 246 "ml_disj_gen.m"
            MR_Word ml_backend__ml_disj_gen__Statement_47;

#line 247 "ml_disj_gen.m"
            {
#line 247 "ml_disj_gen.m"
              ml_backend__ml_code_gen__ml_gen_goal_as_branch_block_5_p_0((MR_Integer) 0, ml_backend__ml_disj_gen__FirstDisjunct_8, &ml_backend__ml_disj_gen__Statement_47, ml_backend__ml_disj_gen__STATE_VARIABLE_Info_0_26, ml_backend__ml_disj_gen__STATE_VARIABLE_Info_27);
            }
#line 249 "ml_disj_gen.m"
            {
#line 249 "ml_disj_gen.m"
              MR_Word base;
#line 249 "ml_disj_gen.m"
              base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 249 "ml_disj_gen.m"
              *ml_backend__ml_disj_gen__Statements_12 = base;
#line 249 "ml_disj_gen.m"
              MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (ml_backend__ml_disj_gen__Statement_47));
#line 249 "ml_disj_gen.m"
              MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 249 "ml_disj_gen.m"
            }
#line 246 "ml_disj_gen.m"
          }
#line 250 "ml_disj_gen.m"
        else
#line 250 "ml_disj_gen.m"
          if ((ml_backend__ml_disj_gen__FirstCodeModel_19 == (MR_Integer) 2))
#line 265 "ml_disj_gen.m"
            {
#line 267 "ml_disj_gen.m"
              {
#line 267 "ml_disj_gen.m"
                mercury__require__unexpected_3_p_0((MR_String) "ml_backend.ml_disj_gen", (MR_String) "predicate \140ml_backend.ml_disj_gen.ml_gen_ordinary_model_det_semi_disj\'/7", (MR_String) "model_non disjunct in model_det or model_semi disjunction");
#line 267 "ml_disj_gen.m"
                return;
              }
#line 265 "ml_disj_gen.m"
            }
#line 250 "ml_disj_gen.m"
          else
#line 251 "ml_disj_gen.m"
            {
#line 251 "ml_disj_gen.m"
              MR_Word ml_backend__ml_disj_gen__FirstStatement_20;
#line 251 "ml_disj_gen.m"
              MR_Word ml_backend__ml_disj_gen__Succeeded_21;
#line 251 "ml_disj_gen.m"
              MR_Word ml_backend__ml_disj_gen__LaterStatements_22;
#line 251 "ml_disj_gen.m"
              MR_Word ml_backend__ml_disj_gen__LaterStatement_23;
#line 251 "ml_disj_gen.m"
              MR_Word ml_backend__ml_disj_gen__IfStmt_24;
#line 251 "ml_disj_gen.m"
              MR_Word ml_backend__ml_disj_gen__IfStatement_25;
#line 251 "ml_disj_gen.m"
              MR_Word ml_backend__ml_disj_gen__STATE_VARIABLE_Info_32_32;
#line 251 "ml_disj_gen.m"
              MR_Word ml_backend__ml_disj_gen__V_35_35;
#line 251 "ml_disj_gen.m"
              MR_Word ml_backend__ml_disj_gen__V_39_39;
#line 251 "ml_disj_gen.m"
              MR_Word ml_backend__ml_disj_gen__V_40_40;

#line 252 "ml_disj_gen.m"
              {
#line 252 "ml_disj_gen.m"
                ml_backend__ml_code_gen__ml_gen_goal_as_branch_block_5_p_0((MR_Integer) 1, ml_backend__ml_disj_gen__FirstDisjunct_8, &ml_backend__ml_disj_gen__FirstStatement_20, ml_backend__ml_disj_gen__STATE_VARIABLE_Info_0_26, &ml_backend__ml_disj_gen__STATE_VARIABLE_Info_32_32);
              }
#line 254 "ml_disj_gen.m"
              {
#line 254 "ml_disj_gen.m"
                ml_backend__ml_code_util__ml_gen_test_success_2_p_0(ml_backend__ml_disj_gen__STATE_VARIABLE_Info_32_32, &ml_backend__ml_disj_gen__Succeeded_21);
              }
#line 255 "ml_disj_gen.m"
              {
#line 255 "ml_disj_gen.m"
                ml_backend__ml_disj_gen__ml_gen_ordinary_model_det_semi_disj_7_p_0(ml_backend__ml_disj_gen__FirstLaterDisjunct_15, ml_backend__ml_disj_gen__LaterLaterDisjuncts_16, ml_backend__ml_disj_gen__CodeModel_10, ml_backend__ml_disj_gen__Context_11, &ml_backend__ml_disj_gen__LaterStatements_22, ml_backend__ml_disj_gen__STATE_VARIABLE_Info_32_32, ml_backend__ml_disj_gen__STATE_VARIABLE_Info_27);
              }
#line 258 "ml_disj_gen.m"
              {
#line 258 "ml_disj_gen.m"
                ml_backend__ml_disj_gen__LaterStatement_23 = ml_backend__ml_code_util__ml_gen_block_3_f_0((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), ml_backend__ml_disj_gen__LaterStatements_22, ml_backend__ml_disj_gen__Context_11);
              }
#line 259 "ml_disj_gen.m"
              {
#line 259 "ml_disj_gen.m"
                ml_backend__ml_disj_gen__V_35_35 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
#line 259 "ml_disj_gen.m"
                MR_hl_field(MR_mktag(3), ml_backend__ml_disj_gen__V_35_35, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 259 "ml_disj_gen.m"
                MR_hl_field(MR_mktag(3), ml_backend__ml_disj_gen__V_35_35, 1) = ((MR_Box) (MR_mkword(MR_mktag(3), &ml_backend__ml_disj_gen_scalar_common_3[0])));
#line 259 "ml_disj_gen.m"
                MR_hl_field(MR_mktag(3), ml_backend__ml_disj_gen__V_35_35, 2) = ((MR_Box) (ml_backend__ml_disj_gen__Succeeded_21));
#line 259 "ml_disj_gen.m"
              }
#line 259 "ml_disj_gen.m"
              {
#line 259 "ml_disj_gen.m"
                ml_backend__ml_disj_gen__IfStmt_24 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
#line 259 "ml_disj_gen.m"
                MR_hl_field(MR_mktag(2), ml_backend__ml_disj_gen__IfStmt_24, 0) = ((MR_Box) (ml_backend__ml_disj_gen__V_35_35));
#line 259 "ml_disj_gen.m"
                MR_hl_field(MR_mktag(2), ml_backend__ml_disj_gen__IfStmt_24, 1) = ((MR_Box) (ml_backend__ml_disj_gen__LaterStatement_23));
#line 259 "ml_disj_gen.m"
                MR_hl_field(MR_mktag(2), ml_backend__ml_disj_gen__IfStmt_24, 2) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 259 "ml_disj_gen.m"
              }
#line 262 "ml_disj_gen.m"
              {
#line 262 "ml_disj_gen.m"
                ml_backend__ml_disj_gen__V_39_39 = ml_backend__mlds__mlds_make_context_1_f_0(ml_backend__ml_disj_gen__Context_11);
              }
#line 262 "ml_disj_gen.m"
              {
#line 262 "ml_disj_gen.m"
                ml_backend__ml_disj_gen__IfStatement_25 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 262 "ml_disj_gen.m"
                MR_hl_field(MR_mktag(0), ml_backend__ml_disj_gen__IfStatement_25, 0) = ((MR_Box) (ml_backend__ml_disj_gen__IfStmt_24));
#line 262 "ml_disj_gen.m"
                MR_hl_field(MR_mktag(0), ml_backend__ml_disj_gen__IfStatement_25, 1) = ((MR_Box) (ml_backend__ml_disj_gen__V_39_39));
#line 262 "ml_disj_gen.m"
              }
#line 263 "ml_disj_gen.m"
              {
#line 263 "ml_disj_gen.m"
                ml_backend__ml_disj_gen__V_40_40 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 263 "ml_disj_gen.m"
                MR_hl_field(MR_mktag(1), ml_backend__ml_disj_gen__V_40_40, 0) = ((MR_Box) (ml_backend__ml_disj_gen__IfStatement_25));
#line 263 "ml_disj_gen.m"
                MR_hl_field(MR_mktag(1), ml_backend__ml_disj_gen__V_40_40, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 263 "ml_disj_gen.m"
              }
#line 263 "ml_disj_gen.m"
              {
#line 263 "ml_disj_gen.m"
                MR_Word base;
#line 263 "ml_disj_gen.m"
                base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 263 "ml_disj_gen.m"
                *ml_backend__ml_disj_gen__Statements_12 = base;
#line 263 "ml_disj_gen.m"
                MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (ml_backend__ml_disj_gen__FirstStatement_20));
#line 263 "ml_disj_gen.m"
                MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (ml_backend__ml_disj_gen__V_40_40));
#line 263 "ml_disj_gen.m"
              }
#line 251 "ml_disj_gen.m"
            }
#line 222 "ml_disj_gen.m"
      }
#line 217 "ml_disj_gen.m"
  }
#line 210 "ml_disj_gen.m"
}

#line 177 "ml_disj_gen.m"
static void MR_CALL 
ml_backend__ml_disj_gen__ml_gen_disj_7_p_0_1(
#line 177 "ml_disj_gen.m"
  MR_Box ml_backend__ml_disj_gen__closure_arg,
#line 177 "ml_disj_gen.m"
  MR_Box ml_backend__ml_disj_gen__wrapper_arg_1,
#line 177 "ml_disj_gen.m"
  MR_Box * ml_backend__ml_disj_gen__wrapper_arg_2,
#line 177 "ml_disj_gen.m"
  MR_Box ml_backend__ml_disj_gen__wrapper_arg_3,
#line 177 "ml_disj_gen.m"
  MR_Box * ml_backend__ml_disj_gen__wrapper_arg_4)
#line 177 "ml_disj_gen.m"
{
#line 177 "ml_disj_gen.m"
  {
#line 177 "ml_disj_gen.m"
    MR_Box ml_backend__ml_disj_gen__closure = ml_backend__ml_disj_gen__closure_arg;
#line 177 "ml_disj_gen.m"
    MR_Word ml_backend__ml_disj_gen__conv1_HeadVar__3_3;
#line 177 "ml_disj_gen.m"
    MR_Word ml_backend__ml_disj_gen__conv0_HeadVar__5_5;

#line 177 "ml_disj_gen.m"
    {
#line 177 "ml_disj_gen.m"
      ml_backend__ml_code_util__ml_generate_constants_for_arm_5_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_disj_gen__closure, (MR_Integer) 3))), ((MR_Word) ml_backend__ml_disj_gen__wrapper_arg_1), &ml_backend__ml_disj_gen__conv1_HeadVar__3_3, ((MR_Word) ml_backend__ml_disj_gen__wrapper_arg_3), &ml_backend__ml_disj_gen__conv0_HeadVar__5_5);
    }
#line 177 "ml_disj_gen.m"
    *ml_backend__ml_disj_gen__wrapper_arg_2 = ((MR_Box) (ml_backend__ml_disj_gen__conv1_HeadVar__3_3));
#line 177 "ml_disj_gen.m"
    *ml_backend__ml_disj_gen__wrapper_arg_4 = ((MR_Box) (ml_backend__ml_disj_gen__conv0_HeadVar__5_5));
#line 177 "ml_disj_gen.m"
  }
#line 177 "ml_disj_gen.m"
}

#line 114 "ml_disj_gen.m"
void MR_CALL 
ml_backend__ml_disj_gen__ml_gen_disj_7_p_0(
#line 114 "ml_disj_gen.m"
  MR_Word ml_backend__ml_disj_gen__Disjuncts_8,
#line 114 "ml_disj_gen.m"
  MR_Word ml_backend__ml_disj_gen__GoalInfo_9,
#line 114 "ml_disj_gen.m"
  MR_Word ml_backend__ml_disj_gen__CodeModel_10,
#line 114 "ml_disj_gen.m"
  MR_Word ml_backend__ml_disj_gen__Context_11,
#line 114 "ml_disj_gen.m"
  MR_Word * ml_backend__ml_disj_gen__Statements_12,
#line 114 "ml_disj_gen.m"
  MR_Word ml_backend__ml_disj_gen__STATE_VARIABLE_Info_0_26,
#line 114 "ml_disj_gen.m"
  MR_Word * ml_backend__ml_disj_gen__STATE_VARIABLE_Info_27)
#line 114 "ml_disj_gen.m"
{
#line 145 "ml_disj_gen.m"
  {
#line 145 "ml_disj_gen.m"
    MR_bool ml_backend__ml_disj_gen__succeeded;

#line 145 "ml_disj_gen.m"
    if ((ml_backend__ml_disj_gen__Disjuncts_8 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 147 "ml_disj_gen.m"
      {
#line 147 "ml_disj_gen.m"
        ml_backend__ml_code_util__ml_gen_failure_5_p_0(ml_backend__ml_disj_gen__CodeModel_10, ml_backend__ml_disj_gen__Context_11, ml_backend__ml_disj_gen__Statements_12, ml_backend__ml_disj_gen__STATE_VARIABLE_Info_0_26, ml_backend__ml_disj_gen__STATE_VARIABLE_Info_27);
#line 147 "ml_disj_gen.m"
        return;
      }
#line 145 "ml_disj_gen.m"
    else
#line 149 "ml_disj_gen.m"
      {
#line 149 "ml_disj_gen.m"
        MR_Word ml_backend__ml_disj_gen__FirstDisjunct_14 = ((MR_Word) (MR_hl_field(MR_mktag(1), ml_backend__ml_disj_gen__Disjuncts_8, (MR_Integer) 0)));
#line 149 "ml_disj_gen.m"
        MR_Word ml_backend__ml_disj_gen__LaterDisjuncts_15 = ((MR_Word) (MR_hl_field(MR_mktag(1), ml_backend__ml_disj_gen__Disjuncts_8, (MR_Integer) 1)));

#line 153 "ml_disj_gen.m"
        if ((ml_backend__ml_disj_gen__LaterDisjuncts_15 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 151 "ml_disj_gen.m"
          {
#line 152 "ml_disj_gen.m"
            {
#line 152 "ml_disj_gen.m"
              mercury__require__unexpected_3_p_0((MR_String) "ml_backend.ml_disj_gen", (MR_String) "predicate \140ml_backend.ml_disj_gen.ml_gen_disj\'/7", (MR_String) "single disjunct");
#line 152 "ml_disj_gen.m"
              return;
            }
#line 151 "ml_disj_gen.m"
          }
#line 153 "ml_disj_gen.m"
        else
#line 185 "ml_disj_gen.m"
          if ((ml_backend__ml_disj_gen__CodeModel_10 == (MR_Integer) 2))
#line 181 "ml_disj_gen.m"
            {
#line 158 "ml_disj_gen.m"
              MR_Word ml_backend__ml_disj_gen__Target_18;
#line 158 "ml_disj_gen.m"
              MR_Word ml_backend__ml_disj_gen__ModuleInfo_19;
#line 158 "ml_disj_gen.m"
              MR_Word ml_backend__ml_disj_gen__Globals_20;
#line 158 "ml_disj_gen.m"
              MR_Word ml_backend__ml_disj_gen__StaticGroundCells_21;
#line 158 "ml_disj_gen.m"
              MR_Word ml_backend__ml_disj_gen__DisjNonLocals_22;
#line 158 "ml_disj_gen.m"
              MR_Word ml_backend__ml_disj_gen__V_30_30;

#line 158 "ml_disj_gen.m"
              {
#line 158 "ml_disj_gen.m"
                ml_backend__ml_gen_info__ml_gen_info_get_target_2_p_0(ml_backend__ml_disj_gen__STATE_VARIABLE_Info_0_26, &ml_backend__ml_disj_gen__Target_18);
              }
#line 201 "ml_disj_gen.m"
              if ((ml_backend__ml_disj_gen__Target_18 == (MR_Integer) 0))
#line 201 "ml_disj_gen.m"
                ml_backend__ml_disj_gen__succeeded = MR_TRUE;
#line 201 "ml_disj_gen.m"
              else
#line 201 "ml_disj_gen.m"
                if ((ml_backend__ml_disj_gen__Target_18 == (MR_Integer) 2))
#line 203 "ml_disj_gen.m"
                  ml_backend__ml_disj_gen__succeeded = MR_TRUE;
#line 201 "ml_disj_gen.m"
                else
#line 201 "ml_disj_gen.m"
                  if ((ml_backend__ml_disj_gen__Target_18 == (MR_Integer) 3))
#line 204 "ml_disj_gen.m"
                    ml_backend__ml_disj_gen__succeeded = MR_TRUE;
#line 201 "ml_disj_gen.m"
                  else
#line 201 "ml_disj_gen.m"
                    ml_backend__ml_disj_gen__succeeded = MR_FALSE;
#line 158 "ml_disj_gen.m"
              if (ml_backend__ml_disj_gen__succeeded)
#line 158 "ml_disj_gen.m"
                {
#line 161 "ml_disj_gen.m"
                  {
#line 161 "ml_disj_gen.m"
                    ml_backend__ml_gen_info__ml_gen_info_get_module_info_2_p_0(ml_backend__ml_disj_gen__STATE_VARIABLE_Info_0_26, &ml_backend__ml_disj_gen__ModuleInfo_19);
                  }
#line 162 "ml_disj_gen.m"
                  {
#line 162 "ml_disj_gen.m"
                    hlds__hlds_module__module_info_get_globals_2_p_0(ml_backend__ml_disj_gen__ModuleInfo_19, &ml_backend__ml_disj_gen__Globals_20);
                  }
#line 163 "ml_disj_gen.m"
                  ml_backend__ml_disj_gen__V_30_30 = (MR_Integer) 447;
#line 163 "ml_disj_gen.m"
                  {
#line 163 "ml_disj_gen.m"
                    libs__globals__lookup_bool_option_3_p_0(ml_backend__ml_disj_gen__Globals_20, ml_backend__ml_disj_gen__V_30_30, &ml_backend__ml_disj_gen__StaticGroundCells_21);
                  }
#line 165 "ml_disj_gen.m"
                  ml_backend__ml_disj_gen__succeeded = (ml_backend__ml_disj_gen__StaticGroundCells_21 == (MR_Integer) 1);
#line 158 "ml_disj_gen.m"
                  if (ml_backend__ml_disj_gen__succeeded)
#line 158 "ml_disj_gen.m"
                    {
#line 167 "ml_disj_gen.m"
                      {
#line 167 "ml_disj_gen.m"
                        ml_backend__ml_disj_gen__DisjNonLocals_22 = hlds__hlds_goal__goal_info_get_nonlocals_1_f_0(ml_backend__ml_disj_gen__GoalInfo_9);
                      }
#line 168 "ml_disj_gen.m"
                      {
#line 168 "ml_disj_gen.m"
                        ml_backend__ml_disj_gen__succeeded = hlds__goal_form__all_disjuncts_are_conj_of_unify_2_p_0(ml_backend__ml_disj_gen__DisjNonLocals_22, ml_backend__ml_disj_gen__Disjuncts_8);
                      }
#line 158 "ml_disj_gen.m"
                    }
#line 158 "ml_disj_gen.m"
                }
#line 181 "ml_disj_gen.m"
              if (ml_backend__ml_disj_gen__succeeded)
#line 175 "ml_disj_gen.m"
                {
#line 175 "ml_disj_gen.m"
                  MR_Word ml_backend__ml_disj_gen__NonLocals_23;
#line 175 "ml_disj_gen.m"
                  MR_Word ml_backend__ml_disj_gen__OutVars_24;
#line 175 "ml_disj_gen.m"
                  MR_Word ml_backend__ml_disj_gen__Solns_25;
#line 175 "ml_disj_gen.m"
                  MR_Word ml_backend__ml_disj_gen__V_31_31;
#line 175 "ml_disj_gen.m"
                  MR_Word ml_backend__ml_disj_gen__STATE_VARIABLE_Info_32_32;
#line 177 "ml_disj_gen.m"
                  MR_Box ml_backend__ml_disj_gen__conv2_STATE_VARIABLE_Info_32_32;

#line 175 "ml_disj_gen.m"
                  {
#line 175 "ml_disj_gen.m"
                    ml_backend__ml_disj_gen__NonLocals_23 = hlds__hlds_goal__goal_info_get_nonlocals_1_f_0(ml_backend__ml_disj_gen__GoalInfo_9);
                  }
#line 176 "ml_disj_gen.m"
                  {
#line 176 "ml_disj_gen.m"
                    ml_backend__ml_disj_gen__OutVars_24 = parse_tree__set_of_var__to_sorted_list_1_f_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0, ml_backend__ml_disj_gen__NonLocals_23);
                  }
#line 177 "ml_disj_gen.m"
                  {
#line 177 "ml_disj_gen.m"
                    ml_backend__ml_disj_gen__V_31_31 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
#line 177 "ml_disj_gen.m"
                    MR_hl_field(MR_mktag(0), ml_backend__ml_disj_gen__V_31_31, 0) = ((MR_Box) (&ml_backend__ml_disj_gen_scalar_common_2[0]));
#line 177 "ml_disj_gen.m"
                    MR_hl_field(MR_mktag(0), ml_backend__ml_disj_gen__V_31_31, 1) = ((MR_Box) (ml_backend__ml_disj_gen__ml_gen_disj_7_p_0_1));
#line 177 "ml_disj_gen.m"
                    MR_hl_field(MR_mktag(0), ml_backend__ml_disj_gen__V_31_31, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 177 "ml_disj_gen.m"
                    MR_hl_field(MR_mktag(0), ml_backend__ml_disj_gen__V_31_31, 3) = ((MR_Box) (ml_backend__ml_disj_gen__OutVars_24));
#line 177 "ml_disj_gen.m"
                  }
#line 177 "ml_disj_gen.m"
                  {
#line 177 "ml_disj_gen.m"
                    mercury__list__map_foldl_5_p_1((MR_Word) &hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_hlds_goal_0, (MR_Word) &ml_backend__ml_disj_gen_scalar_common_1[0], (MR_Word) &ml_backend__ml_gen_info__ml_backend__ml_gen_info__type_ctor_info_ml_gen_info_0, ml_backend__ml_disj_gen__V_31_31, ml_backend__ml_disj_gen__Disjuncts_8, &ml_backend__ml_disj_gen__Solns_25, ((MR_Box) (ml_backend__ml_disj_gen__STATE_VARIABLE_Info_0_26)), &ml_backend__ml_disj_gen__conv2_STATE_VARIABLE_Info_32_32);
                  }
#line 177 "ml_disj_gen.m"
                  ml_backend__ml_disj_gen__STATE_VARIABLE_Info_32_32 = ((MR_Word) ml_backend__ml_disj_gen__conv2_STATE_VARIABLE_Info_32_32);
#line 179 "ml_disj_gen.m"
                  {
#line 179 "ml_disj_gen.m"
                    ml_backend__ml_disj_gen__ml_gen_lookup_disj_6_p_0(ml_backend__ml_disj_gen__OutVars_24, ml_backend__ml_disj_gen__Solns_25, ml_backend__ml_disj_gen__Context_11, ml_backend__ml_disj_gen__Statements_12, ml_backend__ml_disj_gen__STATE_VARIABLE_Info_32_32, ml_backend__ml_disj_gen__STATE_VARIABLE_Info_27);
#line 179 "ml_disj_gen.m"
                    return;
                  }
#line 175 "ml_disj_gen.m"
                }
#line 181 "ml_disj_gen.m"
              else
#line 286 "ml_disj_gen.m"
                {
#line 286 "ml_disj_gen.m"
                  MR_Word ml_backend__ml_disj_gen__FirstLaterDisjunct_71 = ((MR_Word) (MR_hl_field(MR_mktag(1), ml_backend__ml_disj_gen__LaterDisjuncts_15, (MR_Integer) 0)));
#line 286 "ml_disj_gen.m"
                  MR_Word ml_backend__ml_disj_gen__LaterLaterDisjuncts_72 = ((MR_Word) (MR_hl_field(MR_mktag(1), ml_backend__ml_disj_gen__LaterDisjuncts_15, (MR_Integer) 1)));
#line 286 "ml_disj_gen.m"
                  MR_Word ml_backend__ml_disj_gen__FirstStatement_73;
#line 286 "ml_disj_gen.m"
                  MR_Word ml_backend__ml_disj_gen__LaterStatements_74;
#line 286 "ml_disj_gen.m"
                  MR_Word ml_backend__ml_disj_gen__STATE_VARIABLE_Info_20_76;

#line 294 "ml_disj_gen.m"
                  {
#line 294 "ml_disj_gen.m"
                    ml_backend__ml_code_gen__ml_gen_goal_as_branch_block_5_p_0((MR_Integer) 2, ml_backend__ml_disj_gen__FirstDisjunct_14, &ml_backend__ml_disj_gen__FirstStatement_73, ml_backend__ml_disj_gen__STATE_VARIABLE_Info_0_26, &ml_backend__ml_disj_gen__STATE_VARIABLE_Info_20_76);
                  }
#line 296 "ml_disj_gen.m"
                  {
#line 296 "ml_disj_gen.m"
                    ml_backend__ml_disj_gen__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_108_95_103_101_110_95_111_114_100_105_110_97_114_121_95_109_111_100_101_108_95_110_111_110_95_100_105_115_106_95_95_91_51_93_95_48_6_p_0(ml_backend__ml_disj_gen__FirstLaterDisjunct_71, ml_backend__ml_disj_gen__LaterLaterDisjuncts_72, &ml_backend__ml_disj_gen__LaterStatements_74, ml_backend__ml_disj_gen__STATE_VARIABLE_Info_20_76, ml_backend__ml_disj_gen__STATE_VARIABLE_Info_27);
                  }
#line 298 "ml_disj_gen.m"
                  {
#line 298 "ml_disj_gen.m"
                    MR_Word base;
#line 298 "ml_disj_gen.m"
                    base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 298 "ml_disj_gen.m"
                    *ml_backend__ml_disj_gen__Statements_12 = base;
#line 298 "ml_disj_gen.m"
                    MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (ml_backend__ml_disj_gen__FirstStatement_73));
#line 298 "ml_disj_gen.m"
                    MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (ml_backend__ml_disj_gen__LaterStatements_74));
#line 298 "ml_disj_gen.m"
                  }
#line 286 "ml_disj_gen.m"
                }
#line 181 "ml_disj_gen.m"
            }
#line 185 "ml_disj_gen.m"
          else
#line 189 "ml_disj_gen.m"
            {
#line 189 "ml_disj_gen.m"
              ml_backend__ml_disj_gen__ml_gen_ordinary_model_det_semi_disj_7_p_0(ml_backend__ml_disj_gen__FirstDisjunct_14, ml_backend__ml_disj_gen__LaterDisjuncts_15, ml_backend__ml_disj_gen__CodeModel_10, ml_backend__ml_disj_gen__Context_11, ml_backend__ml_disj_gen__Statements_12, ml_backend__ml_disj_gen__STATE_VARIABLE_Info_0_26, ml_backend__ml_disj_gen__STATE_VARIABLE_Info_27);
#line 189 "ml_disj_gen.m"
              return;
            }
#line 149 "ml_disj_gen.m"
      }
#line 145 "ml_disj_gen.m"
  }
#line 114 "ml_disj_gen.m"
}

void mercury__ml_backend__ml_disj_gen__init(void)
{
}

void mercury__ml_backend__ml_disj_gen__init_type_tables(void)
{
}

void mercury__ml_backend__ml_disj_gen__init_debugger(void)
{
	MR_fatal_error("debugger initialization in MLDS grade");
}

/* ensure everything is compiled with the same grade */
static const void *const MR_grade = &MR_GRADE_VAR;

/* :- end_module ml_backend.ml_disj_gen. */
