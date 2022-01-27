/*
** Automatically generated from `mlds_to_cs_util.m'
** by the Mercury compiler,
** version rotd-2021-10-27
** configured for x86_64-pc-linux-gnu.
** Do not edit.
**
** The autoconfigured grade settings governing
** the generation of this C file were
**
** TAG_BITS=2
** UNBOXED_FLOAT=no
** UNBOXED_INT64S=no
** PREGENERATED_DIST=yes
** HIGHLEVEL_CODE=yes
**
** END_OF_C_GRADE_INFO
*/


// :- module ml_backend.mlds_to_cs_util.
// :- implementation.

/*
INIT mercury__ml_backend__mlds_to_cs_util__init
ENDINIT
*/

#include "ml_backend.mlds_to_cs_util.mih"


#include "analysis.mih"
#include "array.mih"
#include "assoc_list.mih"
#include "backend_libs.mih"
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
#include "getopt.mih"
#include "hlds.mih"
#include "int.mih"
#include "integer.mih"
#include "io.mih"
#include "libs.mih"
#include "list.mih"
#include "map.mih"
#include "maybe.mih"
#include "mdbcomp.mih"
#include "ml_backend.mih"
#include "multi_map.mih"
#include "one_or_more.mih"
#include "one_or_more_map.mih"
#include "ops.mih"
#include "pair.mih"
#include "parse_tree.mih"
#include "pretty_printer.mih"
#include "private_builtin.mih"
#include "queue.mih"
#include "recompilation.mih"
#include "set.mih"
#include "set_ordlist.mih"
#include "set_tree234.mih"
#include "sparse_bitset.mih"
#include "stream.mih"
#include "string.mih"
#include "term.mih"
#include "time.mih"
#include "tree234.mih"
#include "type_desc.mih"
#include "unit.mih"
#include "univ.mih"
#include "varset.mih"
#include "backend_libs.builtin_ops.mih"
#include "backend_libs.rtti.mih"
#include "check_hlds.proc_requests.mih"
#include "hlds.code_model.mih"
#include "hlds.const_struct.mih"
#include "hlds.hlds_class.mih"
#include "hlds.hlds_cons.mih"
#include "hlds.hlds_data.mih"
#include "hlds.hlds_dependency_graph.mih"
#include "hlds.hlds_inst_mode.mih"
#include "hlds.hlds_module.mih"
#include "hlds.hlds_pred.mih"
#include "hlds.hlds_promise.mih"
#include "hlds.pred_table.mih"
#include "hlds.special_pred.mih"
#include "hlds.status.mih"
#include "libs.dependency_graph.mih"
#include "libs.globals.mih"
#include "libs.op_mode.mih"
#include "libs.optimization_options.mih"
#include "libs.options.mih"
#include "libs.timestamp.mih"
#include "libs.trace_params.mih"
#include "mdbcomp.feedback.mih"
#include "mdbcomp.prim_data.mih"
#include "mdbcomp.sym_name.mih"
#include "ml_backend.ml_global_data.mih"
#include "ml_backend.mlds.mih"
#include "ml_backend.mlds_to_target_util.mih"
#include "parse_tree.file_names.mih"
#include "parse_tree.java_names.mih"
#include "parse_tree.module_qual.mih"
#include "parse_tree.prog_data.mih"
#include "parse_tree.prog_data_event.mih"
#include "parse_tree.prog_data_foreign.mih"
#include "parse_tree.prog_data_pragma.mih"
#include "parse_tree.prog_data_used_modules.mih"
#include "parse_tree.prog_foreign.mih"
#include "parse_tree.prog_item.mih"
#include "parse_tree.prog_type.mih"
#include "parse_tree.set_of_var.mih"
#include "string.format.mih"
#include "string.parse_util.mih"




static const MR_FA_TypeInfo_Struct2 ml_backend__mlds_to_cs_util__tree234__ti_tree234_2ml_backend__mlds__type_ctor_info_mlds_code_addr_0builtin__type_ctor_info_string_0;

static const MR_FA_TypeInfo_Struct1 ml_backend__mlds_to_cs_util__term__ti_var_1parse_tree__prog_data__type_ctor_info_tvar_type_0;

static const MR_FA_TypeInfo_Struct1 ml_backend__mlds_to_cs_util__list__ti_list_1term__ti_var_1parse_tree__prog_data__type_ctor_info_tvar_type_0;

static const MR_PseudoTypeInfo ml_backend__mlds_to_cs_util__ml_backend__mlds_to_cs_util__field_types_csharp_out_info_0_0[10];

static const MR_ConstString ml_backend__mlds_to_cs_util__ml_backend__mlds_to_cs_util__field_names_csharp_out_info_0_0[10];

static const MR_DuArgLocn ml_backend__mlds_to_cs_util__ml_backend__mlds_to_cs_util__field_locns_csharp_out_info_0_0[10];

static const MR_DuFunctorDesc ml_backend__mlds_to_cs_util__ml_backend__mlds_to_cs_util__du_functor_desc_csharp_out_info_0_0;

static const MR_DuFunctorDescPtr ml_backend__mlds_to_cs_util__ml_backend__mlds_to_cs_util__du_stag_ordered_csharp_out_info_0_0[1];

static const MR_DuPtagLayout ml_backend__mlds_to_cs_util__ml_backend__mlds_to_cs_util__du_ptag_ordered_csharp_out_info_0[1];

static const MR_DuFunctorDescPtr ml_backend__mlds_to_cs_util__ml_backend__mlds_to_cs_util__du_name_ordered_csharp_out_info_0[1];

static const MR_Integer ml_backend__mlds_to_cs_util__ml_backend__mlds_to_cs_util__functor_number_map_csharp_out_info_0[1];

static MR_bool MR_CALL 
ml_backend__mlds_to_cs_util____Unify____csharp_out_info_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2);

static void MR_CALL 
ml_backend__mlds_to_cs_util____Compare____csharp_out_info_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3);


static /* final */ const MR_Box ml_backend__mlds_to_cs_util_scalar_common_1[1][3];

static /* final */ const MR_Box ml_backend__mlds_to_cs_util_scalar_common_2[2][2];

static /* final */ const MR_Box ml_backend__mlds_to_cs_util_scalar_common_3[1][1];




static /* final */ const MR_Box ml_backend__mlds_to_cs_util_scalar_common_1[1][3] = {
  /* row 0 */
  {
    ((MR_Box) (&mercury__tree234__tree234__type_ctor_info_tree234_2)),
    ((MR_Box) (&ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_code_addr_0)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_string_0))
  },
};

static /* final */ const MR_Box ml_backend__mlds_to_cs_util_scalar_common_2[2][2] = {
  /* row 0 */
  {
    ((MR_Box) (&mercury__term__term__type_ctor_info_var_1)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_tvar_type_0))
  },
  /* row 1 */
  {
    ((MR_Box) (&mercury__list__list__type_ctor_info_list_1)),
    ((MR_Box) (&ml_backend__mlds_to_cs_util_scalar_common_2[0]))
  },
};

static /* final */ const MR_Box ml_backend__mlds_to_cs_util_scalar_common_3[1][1] = {
  /* row 0 */
  {
    (MR_Box) (((((MR_Unsigned) 0U << 4)) | (((((MR_Unsigned) 0U << 3)) | (((((MR_Unsigned) 0U << 2)) | (((MR_Unsigned) 0U << 1))))))))
  },
};



#include "array.mh"
#include "bitmap.mh"
#include "io.mh"
#include "string.mh"
#include "time.mh"



static const MR_FA_TypeInfo_Struct2 ml_backend__mlds_to_cs_util__tree234__ti_tree234_2ml_backend__mlds__type_ctor_info_mlds_code_addr_0builtin__type_ctor_info_string_0 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_TypeInfo) (&ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_code_addr_0),
    (MR_TypeInfo) (&mercury__builtin__builtin__type_ctor_info_string_0)
  }
};

static const MR_FA_TypeInfo_Struct1 ml_backend__mlds_to_cs_util__term__ti_var_1parse_tree__prog_data__type_ctor_info_tvar_type_0 = {
  &mercury__term__term__type_ctor_info_var_1,
  {
    (MR_TypeInfo) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_tvar_type_0)
  }
};

static const MR_FA_TypeInfo_Struct1 ml_backend__mlds_to_cs_util__list__ti_list_1term__ti_var_1parse_tree__prog_data__type_ctor_info_tvar_type_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  {
    (MR_TypeInfo) (&ml_backend__mlds_to_cs_util__term__ti_var_1parse_tree__prog_data__type_ctor_info_tvar_type_0)
  }
};

static const MR_PseudoTypeInfo ml_backend__mlds_to_cs_util__ml_backend__mlds_to_cs_util__field_types_csharp_out_info_0_0[10] = {
  (MR_PseudoTypeInfo) (&hlds__hlds_module__hlds__hlds_module__type_ctor_info_module_info_0),
  (MR_PseudoTypeInfo) (&mercury__bool__bool__type_ctor_info_bool_0),
  (MR_PseudoTypeInfo) (&mercury__bool__bool__type_ctor_info_bool_0),
  (MR_PseudoTypeInfo) (&mercury__bool__bool__type_ctor_info_bool_0),
  (MR_PseudoTypeInfo) (&ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_module_name_0),
  (MR_PseudoTypeInfo) (&mercury__builtin__builtin__type_ctor_info_string_0),
  (MR_PseudoTypeInfo) (&ml_backend__mlds_to_cs_util__tree234__ti_tree234_2ml_backend__mlds__type_ctor_info_mlds_code_addr_0builtin__type_ctor_info_string_0),
  (MR_PseudoTypeInfo) (&ml_backend__mlds_to_target_util__ml_backend__mlds_to_target_util__type_ctor_info_output_generics_0),
  (MR_PseudoTypeInfo) (&ml_backend__mlds_to_target_util__ml_backend__mlds_to_target_util__type_ctor_info_break_context_0),
  (MR_PseudoTypeInfo) (&ml_backend__mlds_to_cs_util__list__ti_list_1term__ti_var_1parse_tree__prog_data__type_ctor_info_tvar_type_0)
};

static const MR_ConstString ml_backend__mlds_to_cs_util__ml_backend__mlds_to_cs_util__field_names_csharp_out_info_0_0[10] = {
  (MR_String) "csoi_module_info",
  (MR_String) "csoi_auto_comments",
  (MR_String) "csoi_line_numbers",
  (MR_String) "csoi_foreign_line_numbers",
  (MR_String) "csoi_module_name",
  (MR_String) "csoi_source_filename",
  (MR_String) "csoi_code_addrs",
  (MR_String) "csoi_output_generics",
  (MR_String) "csoi_break_context",
  (MR_String) "csoi_univ_tvars"
};

static const MR_DuArgLocn ml_backend__mlds_to_cs_util__ml_backend__mlds_to_cs_util__field_locns_csharp_out_info_0_0[10] = {
  {
    (MR_Integer) 0,
    (MR_Integer) 0,
    (MR_Integer) 0
  },
  {
    (MR_Integer) 1,
    (MR_Integer) 2,
    (MR_Integer) 1
  },
  {
    (MR_Integer) 1,
    (MR_Integer) 1,
    (MR_Integer) 1
  },
  {
    (MR_Integer) 1,
    (MR_Integer) 0,
    (MR_Integer) 1
  },
  {
    (MR_Integer) 2,
    (MR_Integer) 0,
    (MR_Integer) 0
  },
  {
    (MR_Integer) 3,
    (MR_Integer) 0,
    (MR_Integer) 0
  },
  {
    (MR_Integer) 4,
    (MR_Integer) 0,
    (MR_Integer) 0
  },
  {
    (MR_Integer) 5,
    (MR_Integer) 2,
    (MR_Integer) 1
  },
  {
    (MR_Integer) 5,
    (MR_Integer) 0,
    (MR_Integer) 2
  },
  {
    (MR_Integer) 6,
    (MR_Integer) 0,
    (MR_Integer) 0
  }
};

static const MR_DuFunctorDesc ml_backend__mlds_to_cs_util__ml_backend__mlds_to_cs_util__du_functor_desc_csharp_out_info_0_0 = {
  (MR_String) "csharp_out_info",
  INT16_C(10),
  UINT16_C(0),
  MR_SECTAG_NONE,
  UINT8_C(0),
  (MR_Integer) -1,
  INT32_C(0),
  ml_backend__mlds_to_cs_util__ml_backend__mlds_to_cs_util__field_types_csharp_out_info_0_0,
  ml_backend__mlds_to_cs_util__ml_backend__mlds_to_cs_util__field_names_csharp_out_info_0_0,
  ml_backend__mlds_to_cs_util__ml_backend__mlds_to_cs_util__field_locns_csharp_out_info_0_0,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE,
  UINT8_C(0)
};

static const MR_DuFunctorDescPtr ml_backend__mlds_to_cs_util__ml_backend__mlds_to_cs_util__du_stag_ordered_csharp_out_info_0_0[1] = {
  &ml_backend__mlds_to_cs_util__ml_backend__mlds_to_cs_util__du_functor_desc_csharp_out_info_0_0
};

static const MR_DuPtagLayout ml_backend__mlds_to_cs_util__ml_backend__mlds_to_cs_util__du_ptag_ordered_csharp_out_info_0[1] = {
  {
    UINT32_C(1),
    MR_SECTAG_NONE,
    ml_backend__mlds_to_cs_util__ml_backend__mlds_to_cs_util__du_stag_ordered_csharp_out_info_0_0,
    INT8_C(-1),
    UINT8_C(0),
    UINT8_C(1)
  }
};

static const MR_DuFunctorDescPtr ml_backend__mlds_to_cs_util__ml_backend__mlds_to_cs_util__du_name_ordered_csharp_out_info_0[1] = {
  &ml_backend__mlds_to_cs_util__ml_backend__mlds_to_cs_util__du_functor_desc_csharp_out_info_0_0
};

static const MR_Integer ml_backend__mlds_to_cs_util__ml_backend__mlds_to_cs_util__functor_number_map_csharp_out_info_0[1] = {
  (MR_Integer) 0
};

const MR_TypeCtorInfo_Struct ml_backend__mlds_to_cs_util__ml_backend__mlds_to_cs_util__type_ctor_info_csharp_out_info_0 = {
  (MR_Integer) 0,
  UINT8_C(18),
  INT8_C(1),
  MR_TYPECTOR_REP_DU,
  ((MR_Box) (ml_backend__mlds_to_cs_util____Unify____csharp_out_info_0_0_10001)),
  ((MR_Box) (ml_backend__mlds_to_cs_util____Compare____csharp_out_info_0_0_10001)),
  (MR_String) "ml_backend.mlds_to_cs_util",
  (MR_String) "csharp_out_info",
  {     ml_backend__mlds_to_cs_util__ml_backend__mlds_to_cs_util__du_name_ordered_csharp_out_info_0 },
  {     ml_backend__mlds_to_cs_util__ml_backend__mlds_to_cs_util__du_ptag_ordered_csharp_out_info_0 },
  (MR_Integer) 1,
  UINT16_C(12),
  ml_backend__mlds_to_cs_util__ml_backend__mlds_to_cs_util__functor_number_map_csharp_out_info_0,

};

void MR_CALL 
ml_backend__mlds_to_cs_util____Compare____csharp_out_info_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3)
{
  {
    MR_bool succeeded;
    MR_Integer CastX_33 = (MR_Integer) (HeadVar__2_2);
    MR_Integer CastY_34 = (MR_Integer) (HeadVar__3_3);

    succeeded = (CastX_33 == CastY_34);
    if (succeeded)
      *HeadVar__1_1 = (MR_Integer) 0;
    else
    {
      MR_Word ArgX1_4 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 0))));
      MR_Word ArgY1_5 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__3_3, (MR_Integer) 0))));
      MR_Word ArgX2_7 = ((((MR_Unsigned) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 1))) >> 2)) & (MR_Integer) 1);
      MR_Word ArgY2_8 = ((((MR_Unsigned) ((MR_hl_field(MR_mktag(0), HeadVar__3_3, (MR_Integer) 1))) >> 2)) & (MR_Integer) 1);
      MR_Word ArgX3_10 = ((((MR_Unsigned) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 1))) >> 1)) & (MR_Integer) 1);
      MR_Word ArgY3_11 = ((((MR_Unsigned) ((MR_hl_field(MR_mktag(0), HeadVar__3_3, (MR_Integer) 1))) >> 1)) & (MR_Integer) 1);
      MR_Word ArgX4_13 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 1))) & (MR_Integer) 1);
      MR_Word ArgY4_14 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(0), HeadVar__3_3, (MR_Integer) 1))) & (MR_Integer) 1);
      MR_Word ArgX5_16 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 2))));
      MR_Word ArgY5_17 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__3_3, (MR_Integer) 2))));
      MR_String ArgX6_19 = ((MR_String) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 3))));
      MR_String ArgY6_20 = ((MR_String) ((MR_hl_field(MR_mktag(0), HeadVar__3_3, (MR_Integer) 3))));
      MR_Word ArgX7_22 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 4))));
      MR_Word ArgY7_23 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__3_3, (MR_Integer) 4))));
      MR_Word ArgX8_25 = ((((MR_Unsigned) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 5))) >> 2)) & (MR_Integer) 1);
      MR_Word ArgY8_26 = ((((MR_Unsigned) ((MR_hl_field(MR_mktag(0), HeadVar__3_3, (MR_Integer) 5))) >> 2)) & (MR_Integer) 1);
      MR_Word ArgX9_28 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 5))) & (MR_Integer) 3);
      MR_Word ArgY9_29 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(0), HeadVar__3_3, (MR_Integer) 5))) & (MR_Integer) 3);
      MR_Word ArgX10_31 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 6))));
      MR_Word ArgY10_32 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__3_3, (MR_Integer) 6))));
      MR_Word SubResult1_6;

      hlds__hlds_module____Compare____module_info_0_0(&SubResult1_6, ArgX1_4, ArgY1_5);
      succeeded = (SubResult1_6 != (MR_Integer) 0);
      if (succeeded)
        *HeadVar__1_1 = SubResult1_6;
      else
      {
        MR_Word SubResult2_9;
        MR_Integer Var_45 = (MR_Integer) (ArgX2_7);
        MR_Integer Var_46 = (MR_Integer) (ArgY2_8);

        succeeded = (Var_45 < Var_46);
        if (succeeded)
        {
          SubResult2_9 = (MR_Integer) 1;
          succeeded = MR_TRUE;
        }
        else
        {
          succeeded = (Var_45 > Var_46);
          if (succeeded)
          {
            SubResult2_9 = (MR_Integer) 2;
            succeeded = MR_TRUE;
          }
          else
          {
            succeeded = MR_TRUE;
            succeeded = !(succeeded);
            if (succeeded)
            {
              SubResult2_9 = (MR_Integer) 0;
              succeeded = MR_TRUE;
            }
          }
        }
        if (succeeded)
          *HeadVar__1_1 = SubResult2_9;
        else
        {
          MR_Word SubResult3_12;
          MR_Integer Var_47 = (MR_Integer) (ArgX3_10);
          MR_Integer Var_48 = (MR_Integer) (ArgY3_11);

          succeeded = (Var_47 < Var_48);
          if (succeeded)
          {
            SubResult3_12 = (MR_Integer) 1;
            succeeded = MR_TRUE;
          }
          else
          {
            succeeded = (Var_47 > Var_48);
            if (succeeded)
            {
              SubResult3_12 = (MR_Integer) 2;
              succeeded = MR_TRUE;
            }
            else
            {
              succeeded = MR_TRUE;
              succeeded = !(succeeded);
              if (succeeded)
              {
                SubResult3_12 = (MR_Integer) 0;
                succeeded = MR_TRUE;
              }
            }
          }
          if (succeeded)
            *HeadVar__1_1 = SubResult3_12;
          else
          {
            MR_Word SubResult4_15;
            MR_Integer Var_49 = (MR_Integer) (ArgX4_13);
            MR_Integer Var_50 = (MR_Integer) (ArgY4_14);

            succeeded = (Var_49 < Var_50);
            if (succeeded)
            {
              SubResult4_15 = (MR_Integer) 1;
              succeeded = MR_TRUE;
            }
            else
            {
              succeeded = (Var_49 > Var_50);
              if (succeeded)
              {
                SubResult4_15 = (MR_Integer) 2;
                succeeded = MR_TRUE;
              }
              else
              {
                succeeded = MR_TRUE;
                succeeded = !(succeeded);
                if (succeeded)
                {
                  SubResult4_15 = (MR_Integer) 0;
                  succeeded = MR_TRUE;
                }
              }
            }
            if (succeeded)
              *HeadVar__1_1 = SubResult4_15;
            else
            {
              MR_Word SubResult5_18;

              ml_backend__mlds____Compare____mlds_module_name_0_0(&SubResult5_18, ArgX5_16, ArgY5_17);
              succeeded = (SubResult5_18 != (MR_Integer) 0);
              if (succeeded)
                *HeadVar__1_1 = SubResult5_18;
              else
              {
                MR_Word SubResult6_21;

                mercury__private_builtin__builtin_compare_string_3_p_0(&SubResult6_21, ArgX6_19, ArgY6_20);
                succeeded = (SubResult6_21 != (MR_Integer) 0);
                if (succeeded)
                  *HeadVar__1_1 = SubResult6_21;
                else
                {
                  MR_Word SubResult7_24;

                  mercury__builtin__compare_3_p_0((MR_Word) (&ml_backend__mlds_to_cs_util_scalar_common_1[0]), &SubResult7_24, ((MR_Box) (ArgX7_22)), ((MR_Box) (ArgY7_23)));
                  succeeded = (SubResult7_24 != (MR_Integer) 0);
                  if (succeeded)
                    *HeadVar__1_1 = SubResult7_24;
                  else
                  {
                    MR_Word SubResult8_27;
                    MR_Integer Var_51 = (MR_Integer) (ArgX8_25);
                    MR_Integer Var_52 = (MR_Integer) (ArgY8_26);

                    succeeded = (Var_51 < Var_52);
                    if (succeeded)
                    {
                      SubResult8_27 = (MR_Integer) 1;
                      succeeded = MR_TRUE;
                    }
                    else
                    {
                      succeeded = (Var_51 > Var_52);
                      if (succeeded)
                      {
                        SubResult8_27 = (MR_Integer) 2;
                        succeeded = MR_TRUE;
                      }
                      else
                      {
                        succeeded = MR_TRUE;
                        succeeded = !(succeeded);
                        if (succeeded)
                        {
                          SubResult8_27 = (MR_Integer) 0;
                          succeeded = MR_TRUE;
                        }
                      }
                    }
                    if (succeeded)
                      *HeadVar__1_1 = SubResult8_27;
                    else
                    {
                      MR_Word SubResult9_30;
                      MR_Integer Var_53 = (MR_Integer) (ArgX9_28);
                      MR_Integer Var_54 = (MR_Integer) (ArgY9_29);

                      succeeded = (Var_53 < Var_54);
                      if (succeeded)
                      {
                        SubResult9_30 = (MR_Integer) 1;
                        succeeded = MR_TRUE;
                      }
                      else
                      {
                        succeeded = (Var_53 > Var_54);
                        if (succeeded)
                        {
                          SubResult9_30 = (MR_Integer) 2;
                          succeeded = MR_TRUE;
                        }
                        else
                        {
                          succeeded = MR_TRUE;
                          succeeded = !(succeeded);
                          if (succeeded)
                          {
                            SubResult9_30 = (MR_Integer) 0;
                            succeeded = MR_TRUE;
                          }
                        }
                      }
                      if (succeeded)
                        *HeadVar__1_1 = SubResult9_30;
                      else
                        mercury__builtin__compare_3_p_0((MR_Word) (&ml_backend__mlds_to_cs_util_scalar_common_2[1]), HeadVar__1_1, ((MR_Box) (ArgX10_31)), ((MR_Box) (ArgY10_32)));
                    }
                  }
                }
              }
            }
          }
        }
      }
    }
  }
}

MR_bool MR_CALL 
ml_backend__mlds_to_cs_util____Unify____csharp_out_info_0_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2)
{
  {
    MR_bool succeeded;
    MR_Integer CastX_23 = (MR_Integer) (HeadVar__1_1);
    MR_Integer CastY_24 = (MR_Integer) (HeadVar__2_2);

    succeeded = (CastX_23 == CastY_24);
    if (succeeded)
      succeeded = MR_TRUE;
    else
    {
      MR_Word TypeInfo_27_27;
      MR_Word TypeInfo_28_28;
      MR_Word ArgX1_3 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__1_1, (MR_Integer) 0))));
      MR_Word ArgY1_4 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 0))));
      MR_Word ArgX2_5 = ((((MR_Unsigned) ((MR_hl_field(MR_mktag(0), HeadVar__1_1, (MR_Integer) 1))) >> 2)) & (MR_Integer) 1);
      MR_Word ArgY2_6 = ((((MR_Unsigned) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 1))) >> 2)) & (MR_Integer) 1);
      MR_Word ArgX3_7 = ((((MR_Unsigned) ((MR_hl_field(MR_mktag(0), HeadVar__1_1, (MR_Integer) 1))) >> 1)) & (MR_Integer) 1);
      MR_Word ArgY3_8 = ((((MR_Unsigned) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 1))) >> 1)) & (MR_Integer) 1);
      MR_Word ArgX4_9 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(0), HeadVar__1_1, (MR_Integer) 1))) & (MR_Integer) 1);
      MR_Word ArgY4_10 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 1))) & (MR_Integer) 1);
      MR_Word ArgX5_11 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__1_1, (MR_Integer) 2))));
      MR_Word ArgY5_12 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 2))));
      MR_String ArgX6_13 = ((MR_String) ((MR_hl_field(MR_mktag(0), HeadVar__1_1, (MR_Integer) 3))));
      MR_String ArgY6_14 = ((MR_String) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 3))));
      MR_Word ArgX7_15 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__1_1, (MR_Integer) 4))));
      MR_Word ArgY7_16 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 4))));
      MR_Word ArgX8_17 = ((((MR_Unsigned) ((MR_hl_field(MR_mktag(0), HeadVar__1_1, (MR_Integer) 5))) >> 2)) & (MR_Integer) 1);
      MR_Word ArgY8_18 = ((((MR_Unsigned) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 5))) >> 2)) & (MR_Integer) 1);
      MR_Word ArgX9_19 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(0), HeadVar__1_1, (MR_Integer) 5))) & (MR_Integer) 3);
      MR_Word ArgY9_20 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 5))) & (MR_Integer) 3);
      MR_Word ArgX10_21 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__1_1, (MR_Integer) 6))));
      MR_Word ArgY10_22 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 6))));

      succeeded = hlds__hlds_module____Unify____module_info_0_0(ArgX1_3, ArgY1_4);
      if (succeeded)
      {
        succeeded = (ArgX2_5 == ArgY2_6);
        if (succeeded)
        {
          succeeded = (ArgX3_7 == ArgY3_8);
          if (succeeded)
          {
            succeeded = (ArgX4_9 == ArgY4_10);
            if (succeeded)
            {
              succeeded = ml_backend__mlds____Unify____mlds_module_name_0_0(ArgX5_11, ArgY5_12);
              if (succeeded)
              {
                succeeded = (strcmp(ArgX6_13, ArgY6_14) == 0);
                if (succeeded)
                {
                  TypeInfo_27_27 = (MR_Word) (&ml_backend__mlds_to_cs_util_scalar_common_1[0]);
                  succeeded = mercury__builtin__unify_2_p_0(TypeInfo_27_27, ((MR_Box) (ArgX7_15)), ((MR_Box) (ArgY7_16)));
                  if (succeeded)
                  {
                    succeeded = (ArgX8_17 == ArgY8_18);
                    if (succeeded)
                    {
                      succeeded = (ArgX9_19 == ArgY9_20);
                      if (succeeded)
                      {
                        TypeInfo_28_28 = (MR_Word) (&ml_backend__mlds_to_cs_util_scalar_common_2[1]);
                        succeeded = mercury__builtin__unify_2_p_0(TypeInfo_28_28, ((MR_Box) (ArgX10_21)), ((MR_Box) (ArgY10_22)));
                      }
                    }
                  }
                }
              }
            }
          }
        }
      }
    }
    return succeeded;
  }
}

void MR_CALL 
ml_backend__mlds_to_cs_util__output_pragma_warning_restore_3_p_0(
  MR_Word Stream_4)
{
  mercury__io__write_string_4_p_0(Stream_4, (MR_String) "#pragma warning restore\n");
}

void MR_CALL 
ml_backend__mlds_to_cs_util__output_pragma_warning_disable_3_p_0(
  MR_Word Stream_4)
{
  mercury__io__write_string_4_p_0(Stream_4, (MR_String) "#pragma warning disable 162, 168, 169, 219, 1717\n");
}

void MR_CALL 
ml_backend__mlds_to_cs_util__maybe_output_comment_for_csharp_5_p_0(
  MR_Word Info_6,
  MR_Word Stream_7,
  MR_String Comment_8)
{
  {
    MR_Word AutoComments_10 = ((((MR_Unsigned) ((MR_hl_field(MR_mktag(0), Info_6, (MR_Integer) 1))) >> 2)) & (MR_Integer) 1);

    switch (AutoComments_10) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        {
        }
        break;
      case (MR_Integer) 1:
        {
          mercury__io__write_string_4_p_0(Stream_7, (MR_String) "/* ");
          mercury__io__write_string_4_p_0(Stream_7, Comment_8);
          mercury__io__write_string_4_p_0(Stream_7, (MR_String) " */");
        }
        break;
    }
  }
}

void MR_CALL 
ml_backend__mlds_to_cs_util__cs_output_default_context_4_p_0(
  MR_Word Stream_5,
  MR_Word OutputLineNumbers_6)
{
  switch (OutputLineNumbers_6) {
    default: /*NOTREACHED*/ MR_assert(0);
    case (MR_Integer) 0:
      {
      }
      break;
    case (MR_Integer) 1:
      mercury__io__write_string_4_p_0(Stream_5, (MR_String) "#line default\n");
      break;
  }
}

void MR_CALL 
ml_backend__mlds_to_cs_util__indent_line_after_context_6_p_0(
  MR_Word Stream_7,
  MR_Word OutputLineNumbers_8,
  MR_Word Context_9,
  MR_Integer N_10)
{
  {
    ml_backend__mlds_to_cs_util__cs_output_context_5_p_0(Stream_7, OutputLineNumbers_8, Context_9);
    ml_backend__mlds_to_target_util__output_n_indents_4_p_0(Stream_7, N_10);
  }
}

void MR_CALL 
ml_backend__mlds_to_cs_util__cs_output_context_5_p_0(
  MR_Word Stream_6,
  MR_Word OutputLineNumbers_7,
  MR_Word Context_8)
{
  {
    MR_bool succeeded;

    switch (OutputLineNumbers_7) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        {
        }
        break;
      case (MR_Integer) 1:
        {
          MR_String File_10 = ((MR_String) ((MR_hl_field(MR_mktag(0), Context_8, (MR_Integer) 0))));
          MR_Integer Line_11 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), Context_8, (MR_Integer) 1))));

          succeeded = (Line_11 > (MR_Integer) 0);
          if (succeeded)
          {
            succeeded = (strcmp(File_10, (MR_String) "") == 0);
            succeeded = !(succeeded);
          }
          if (succeeded)
          {
            MR_String Var_25;

            mercury__io__write_string_4_p_0(Stream_6, (MR_String) "#line ");
            mercury__string__format__format_signed_int_component_nowidth_noprec_3_p_0((MR_Word) (&ml_backend__mlds_to_cs_util_scalar_common_3[0]), Line_11, &Var_25);
            mercury__io__write_string_4_p_0(Stream_6, Var_25);
            mercury__io__write_string_4_p_0(Stream_6, (MR_String) " \"");
            mercury__io__write_string_4_p_0(Stream_6, File_10);
            mercury__io__write_string_4_p_0(Stream_6, (MR_String) "\"\n");
          }
        }
        break;
    }
  }
}

MR_Word MR_CALL 
ml_backend__mlds_to_cs_util__init_csharp_out_info_3_f_0(
  MR_Word ModuleInfo_5,
  MR_String SourceFileName_6,
  MR_Word CodeAddrs_7)
{
  {
    MR_Word Info_8;
    MR_Word Globals_9;
    MR_Word AutoComments_10;
    MR_Word LineNumbers_11;
    MR_Word ForeignLineNumbers_12;
    MR_Word ModuleName_13;
    MR_Word MLDS_ModuleName_14;

    hlds__hlds_module__module_info_get_globals_2_p_0(ModuleInfo_5, &Globals_9);
    libs__globals__lookup_bool_option_3_p_0(Globals_9, (MR_Integer) 167, &AutoComments_10);
    libs__globals__lookup_bool_option_3_p_0(Globals_9, (MR_Integer) 163, &LineNumbers_11);
    libs__globals__lookup_bool_option_3_p_0(Globals_9, (MR_Integer) 164, &ForeignLineNumbers_12);
    hlds__hlds_module__module_info_get_name_2_p_0(ModuleInfo_5, &ModuleName_13);
    MLDS_ModuleName_14 = ml_backend__mlds__mercury_module_name_to_mlds_1_f_0(ModuleName_13);
    {
      Info_8 = (MR_Word) MR_new_object(MR_Word, (7 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), Info_8, 0) = ((MR_Box) (ModuleInfo_5));
      MR_hl_field(MR_mktag(0), Info_8, 1) = (MR_Box) (((((MR_Unsigned) (AutoComments_10) << 2)) | (((((MR_Unsigned) (LineNumbers_11) << 1)) | (MR_Unsigned) (ForeignLineNumbers_12)))));
      MR_hl_field(MR_mktag(0), Info_8, 2) = ((MR_Box) (MLDS_ModuleName_14));
      MR_hl_field(MR_mktag(0), Info_8, 3) = ((MR_Box) (SourceFileName_6));
      MR_hl_field(MR_mktag(0), Info_8, 4) = ((MR_Box) (CodeAddrs_7));
      MR_hl_field(MR_mktag(0), Info_8, 5) = (MR_Box) (((((MR_Unsigned) ((MR_Integer) 1) << 2)) | (MR_Unsigned) ((MR_Integer) 0)));
      MR_hl_field(MR_mktag(0), Info_8, 6) = ((MR_Box) ((MR_Unsigned) 0U));
    }
    return Info_8;
  }
}

static MR_bool MR_CALL 
ml_backend__mlds_to_cs_util____Unify____csharp_out_info_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  {
    MR_bool succeeded;

    succeeded = ml_backend__mlds_to_cs_util____Unify____csharp_out_info_0_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
    return succeeded;
  }
}

static void MR_CALL 
ml_backend__mlds_to_cs_util____Compare____csharp_out_info_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  {
    MR_Word conv0_HeadVar__1_1;

    ml_backend__mlds_to_cs_util____Compare____csharp_out_info_0_0(&conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
    *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
  }
}

void mercury__ml_backend__mlds_to_cs_util__init(void)
{
}

void mercury__ml_backend__mlds_to_cs_util__init_type_tables(void)
{
	static MR_bool initialised = MR_FALSE;
	if (initialised) return;
	initialised = MR_TRUE;

	MR_register_type_ctor_info(&ml_backend__mlds_to_cs_util__ml_backend__mlds_to_cs_util__type_ctor_info_csharp_out_info_0);
}

void mercury__ml_backend__mlds_to_cs_util__init_debugger(void)
{
	MR_fatal_error("debugger initialization in MLDS grade");
}

// Ensure everything is compiled with the same grade.
const char *mercury__ml_backend__mlds_to_cs_util__grade_check(void)
{
    return &MR_GRADE_VAR;
}

// :- end_module ml_backend.mlds_to_cs_util.
