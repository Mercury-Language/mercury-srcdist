/*
** Automatically generated from `parse_tree_out_inst.m'
** by the Mercury compiler,
** version rotd-2016-01-15
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


/* :- module parse_tree.parse_tree_out_inst. */
/* :- implementation. */

/*
INIT mercury__parse_tree__parse_tree_out_inst__init
ENDINIT
*/

#include "parse_tree.parse_tree_out_inst.mih"


#include "libs.mih"
#include "mdbcomp.mih"
#include "parse_tree.mih"
#include "recompilation.mih"
#include "libs.compiler_util.mih"
#include "libs.globals.mih"
#include "libs.op_mode.mih"
#include "libs.options.mih"
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
#include "bimap.mih"
#include "bitmap.mih"
#include "bool.mih"
#include "builtin.mih"
#include "char.mih"
#include "construct.mih"
#include "cord.mih"
#include "deconstruct.mih"
#include "enum.mih"
#include "getopt_io.mih"
#include "integer.mih"
#include "io.mih"
#include "list.mih"
#include "map.mih"
#include "maybe.mih"
#include "ops.mih"
#include "pair.mih"
#include "pretty_printer.mih"
#include "private_builtin.mih"
#include "random.mih"
#include "require.mih"
#include "rtti_implementation.mih"
#include "set.mih"
#include "set_ordlist.mih"
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
#include "parse_tree.error_util.mih"
#include "parse_tree.file_kind.mih"
#include "parse_tree.maybe_error.mih"
#include "parse_tree.mercury_to_mercury.mih"
#include "parse_tree.parse_tree_out_info.mih"
#include "parse_tree.parse_tree_out_term.mih"
#include "parse_tree.prog_data.mih"
#include "parse_tree.prog_item.mih"
#include "parse_tree.prog_util.mih"
#include "parse_tree.set_of_var.mih"
#include "mdbcomp.feedback.automatic_parallelism.mih"




static void MR_CALL 
parse_tree__parse_tree_out_inst__mercury_format_comma_real_3_p_0(
  MR_Word parse_tree__parse_tree_out_inst__TypeClassInfo_for_output_12,
  MR_Word parse_tree__parse_tree_out_inst__Real_4,
  MR_Box parse_tree__parse_tree_out_inst__STATE_VARIABLE_U_0_6,
  MR_Box * parse_tree__parse_tree_out_inst__STATE_VARIABLE_U_7);

static void MR_CALL 
parse_tree__parse_tree_out_inst__mercury_format_arg_reg_list_3_p_0(
  MR_Word parse_tree__parse_tree_out_inst__TypeClassInfo_for_output_21,
  MR_Word parse_tree__parse_tree_out_inst__HeadVar__1_1,
  MR_Box parse_tree__parse_tree_out_inst__STATE_VARIABLE_U_0_2,
  MR_Box * parse_tree__parse_tree_out_inst__STATE_VARIABLE_U_3);

static void MR_CALL 
parse_tree__parse_tree_out_inst__mercury_format_bound_insts_5_p_0(
  MR_Word parse_tree__parse_tree_out_inst__TypeClassInfo_for_output_36,
  MR_Word parse_tree__parse_tree_out_inst__Lang_1,
  MR_Word parse_tree__parse_tree_out_inst__InstVarSet_2,
  MR_Word parse_tree__parse_tree_out_inst__HeadVar__3_3,
  MR_Box parse_tree__parse_tree_out_inst__STATE_VARIABLE_U_0_4,
  MR_Box * parse_tree__parse_tree_out_inst__STATE_VARIABLE_U_5);

static void MR_CALL 
parse_tree__parse_tree_out_inst__mercury_format_inst_list_5_p_0(
  MR_Word parse_tree__parse_tree_out_inst__TypeClassInfo_for_output_24,
  MR_Word parse_tree__parse_tree_out_inst__Lang_1,
  MR_Word parse_tree__parse_tree_out_inst__InstVarSet_2,
  MR_Word parse_tree__parse_tree_out_inst__HeadVar__3_3,
  MR_Box parse_tree__parse_tree_out_inst__STATE_VARIABLE_U_0_4,
  MR_Box * parse_tree__parse_tree_out_inst__STATE_VARIABLE_U_5);


static /* final */ const MR_Box parse_tree__parse_tree_out_inst_scalar_common_1[3][2];




static /* final */ const MR_Box parse_tree__parse_tree_out_inst_scalar_common_1[3][2] = {
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
  /* row 2 */
  {
    ((MR_Box) (&mercury__term__term__type_ctor_info_var_1)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_inst_var_type_0))
  },
};



#include "io.mh"
#include "string.mh"
#include "time.mh"
#include "mdbcomp.rtti_access.mh"



static void MR_CALL 
parse_tree__parse_tree_out_inst__mercury_format_comma_real_3_p_0(
  MR_Word parse_tree__parse_tree_out_inst__TypeClassInfo_for_output_12,
  MR_Word parse_tree__parse_tree_out_inst__Real_4,
  MR_Box parse_tree__parse_tree_out_inst__STATE_VARIABLE_U_0_6,
  MR_Box * parse_tree__parse_tree_out_inst__STATE_VARIABLE_U_7)
{
  {
    MR_bool parse_tree__parse_tree_out_inst__succeeded;

    switch (parse_tree__parse_tree_out_inst__Real_4) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 1:
        {
          void MR_CALL (* parse_tree__parse_tree_out_inst__func_0)(MR_Box, MR_Box, MR_Box, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), parse_tree__parse_tree_out_inst__TypeClassInfo_for_output_12, (MR_Integer) 0)), (MR_Integer) 5)));

          {
            parse_tree__parse_tree_out_inst__func_0(((MR_Box) parse_tree__parse_tree_out_inst__TypeClassInfo_for_output_12), ((MR_Box) ((MR_String) ", fake")), parse_tree__parse_tree_out_inst__STATE_VARIABLE_U_0_6, parse_tree__parse_tree_out_inst__STATE_VARIABLE_U_7);
          }
        }
        break;
      case (MR_Integer) 0:
        {
          void MR_CALL (* parse_tree__parse_tree_out_inst__func_1)(MR_Box, MR_Box, MR_Box, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), parse_tree__parse_tree_out_inst__TypeClassInfo_for_output_12, (MR_Integer) 0)), (MR_Integer) 5)));

          {
            parse_tree__parse_tree_out_inst__func_1(((MR_Box) parse_tree__parse_tree_out_inst__TypeClassInfo_for_output_12), ((MR_Box) ((MR_String) ", real")), parse_tree__parse_tree_out_inst__STATE_VARIABLE_U_0_6, parse_tree__parse_tree_out_inst__STATE_VARIABLE_U_7);
          }
        }
        break;
    }
  }
}

static void MR_CALL 
parse_tree__parse_tree_out_inst__mercury_format_arg_reg_list_3_p_0(
  MR_Word parse_tree__parse_tree_out_inst__TypeClassInfo_for_output_21,
  MR_Word parse_tree__parse_tree_out_inst__HeadVar__1_1,
  MR_Box parse_tree__parse_tree_out_inst__STATE_VARIABLE_U_0_2,
  MR_Box * parse_tree__parse_tree_out_inst__STATE_VARIABLE_U_3)
{
  while (MR_TRUE)
    {
      /* tailcall optimized into a loop */
      {
        MR_bool parse_tree__parse_tree_out_inst__succeeded;

        if ((parse_tree__parse_tree_out_inst__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
          *parse_tree__parse_tree_out_inst__STATE_VARIABLE_U_3 = parse_tree__parse_tree_out_inst__STATE_VARIABLE_U_0_2;
        else
          {
            MR_Word parse_tree__parse_tree_out_inst__Reg_7 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__parse_tree_out_inst__HeadVar__1_1, (MR_Integer) 0)));
            MR_Word parse_tree__parse_tree_out_inst__Regs_8 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__parse_tree_out_inst__HeadVar__1_1, (MR_Integer) 1)));
            MR_Box parse_tree__parse_tree_out_inst__STATE_VARIABLE_U_17_17;

            switch (parse_tree__parse_tree_out_inst__Reg_7) {
              default: /*NOTREACHED*/ MR_assert(0);
              case (MR_Integer) 1:
                {
                  void MR_CALL (* parse_tree__parse_tree_out_inst__func_0)(MR_Box, MR_Box, MR_Box, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), parse_tree__parse_tree_out_inst__TypeClassInfo_for_output_21, (MR_Integer) 0)), (MR_Integer) 5)));

                  {
                    parse_tree__parse_tree_out_inst__func_0(((MR_Box) parse_tree__parse_tree_out_inst__TypeClassInfo_for_output_21), ((MR_Box) ((MR_String) "reg_f")), parse_tree__parse_tree_out_inst__STATE_VARIABLE_U_0_2, &parse_tree__parse_tree_out_inst__STATE_VARIABLE_U_17_17);
                  }
                }
                break;
              case (MR_Integer) 0:
                {
                  void MR_CALL (* parse_tree__parse_tree_out_inst__func_1)(MR_Box, MR_Box, MR_Box, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), parse_tree__parse_tree_out_inst__TypeClassInfo_for_output_21, (MR_Integer) 0)), (MR_Integer) 5)));

                  {
                    parse_tree__parse_tree_out_inst__func_1(((MR_Box) parse_tree__parse_tree_out_inst__TypeClassInfo_for_output_21), ((MR_Box) ((MR_String) "reg_r")), parse_tree__parse_tree_out_inst__STATE_VARIABLE_U_0_2, &parse_tree__parse_tree_out_inst__STATE_VARIABLE_U_17_17);
                  }
                }
                break;
            }
            if ((parse_tree__parse_tree_out_inst__Regs_8 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
              *parse_tree__parse_tree_out_inst__STATE_VARIABLE_U_3 = parse_tree__parse_tree_out_inst__STATE_VARIABLE_U_17_17;
            else
              {
                MR_Box parse_tree__parse_tree_out_inst__STATE_VARIABLE_U_19_19;
                MR_Word parse_tree__parse_tree_out_inst__Reg_25;
                MR_Word parse_tree__parse_tree_out_inst__Regs_26;
                MR_Box parse_tree__parse_tree_out_inst__STATE_VARIABLE_U_17_35;
                void MR_CALL (* parse_tree__parse_tree_out_inst__func_2)(MR_Box, MR_Box, MR_Box, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), parse_tree__parse_tree_out_inst__TypeClassInfo_for_output_21, (MR_Integer) 0)), (MR_Integer) 5)));

                {
                  parse_tree__parse_tree_out_inst__func_2(((MR_Box) parse_tree__parse_tree_out_inst__TypeClassInfo_for_output_21), ((MR_Box) ((MR_String) ", ")), parse_tree__parse_tree_out_inst__STATE_VARIABLE_U_17_17, &parse_tree__parse_tree_out_inst__STATE_VARIABLE_U_19_19);
                }
                parse_tree__parse_tree_out_inst__Reg_25 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__parse_tree_out_inst__Regs_8, (MR_Integer) 0)));
                parse_tree__parse_tree_out_inst__Regs_26 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__parse_tree_out_inst__Regs_8, (MR_Integer) 1)));
                switch (parse_tree__parse_tree_out_inst__Reg_25) {
                  default: /*NOTREACHED*/ MR_assert(0);
                  case (MR_Integer) 1:
                    {
                      void MR_CALL (* parse_tree__parse_tree_out_inst__func_3)(MR_Box, MR_Box, MR_Box, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), parse_tree__parse_tree_out_inst__TypeClassInfo_for_output_21, (MR_Integer) 0)), (MR_Integer) 5)));

                      {
                        parse_tree__parse_tree_out_inst__func_3(((MR_Box) parse_tree__parse_tree_out_inst__TypeClassInfo_for_output_21), ((MR_Box) ((MR_String) "reg_f")), parse_tree__parse_tree_out_inst__STATE_VARIABLE_U_19_19, &parse_tree__parse_tree_out_inst__STATE_VARIABLE_U_17_35);
                      }
                    }
                    break;
                  case (MR_Integer) 0:
                    {
                      void MR_CALL (* parse_tree__parse_tree_out_inst__func_4)(MR_Box, MR_Box, MR_Box, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), parse_tree__parse_tree_out_inst__TypeClassInfo_for_output_21, (MR_Integer) 0)), (MR_Integer) 5)));

                      {
                        parse_tree__parse_tree_out_inst__func_4(((MR_Box) parse_tree__parse_tree_out_inst__TypeClassInfo_for_output_21), ((MR_Box) ((MR_String) "reg_r")), parse_tree__parse_tree_out_inst__STATE_VARIABLE_U_19_19, &parse_tree__parse_tree_out_inst__STATE_VARIABLE_U_17_35);
                      }
                    }
                    break;
                }
                if ((parse_tree__parse_tree_out_inst__Regs_26 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
                  *parse_tree__parse_tree_out_inst__STATE_VARIABLE_U_3 = parse_tree__parse_tree_out_inst__STATE_VARIABLE_U_17_35;
                else
                  {
                    MR_Box parse_tree__parse_tree_out_inst__STATE_VARIABLE_U_19_37;
                    void MR_CALL (* parse_tree__parse_tree_out_inst__func_5)(MR_Box, MR_Box, MR_Box, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), parse_tree__parse_tree_out_inst__TypeClassInfo_for_output_21, (MR_Integer) 0)), (MR_Integer) 5)));

                    {
                      parse_tree__parse_tree_out_inst__func_5(((MR_Box) parse_tree__parse_tree_out_inst__TypeClassInfo_for_output_21), ((MR_Box) ((MR_String) ", ")), parse_tree__parse_tree_out_inst__STATE_VARIABLE_U_17_35, &parse_tree__parse_tree_out_inst__STATE_VARIABLE_U_19_37);
                    }
                    /* direct tailcall eliminated */
                    {
                      MR_Word parse_tree__parse_tree_out_inst__HeadVar__1__tmp_copy_1 = parse_tree__parse_tree_out_inst__Regs_26;
                      MR_Box parse_tree__parse_tree_out_inst__STATE_VARIABLE_U_0__tmp_copy_2 = parse_tree__parse_tree_out_inst__STATE_VARIABLE_U_19_37;

                      parse_tree__parse_tree_out_inst__STATE_VARIABLE_U_0_2 = parse_tree__parse_tree_out_inst__STATE_VARIABLE_U_0__tmp_copy_2;
                      parse_tree__parse_tree_out_inst__HeadVar__1_1 = parse_tree__parse_tree_out_inst__HeadVar__1__tmp_copy_1;
                    }
                    continue;
                  }
              }
          }
      }
      break;
    }
}

static void MR_CALL 
parse_tree__parse_tree_out_inst__mercury_format_bound_insts_5_p_0(
  MR_Word parse_tree__parse_tree_out_inst__TypeClassInfo_for_output_36,
  MR_Word parse_tree__parse_tree_out_inst__Lang_1,
  MR_Word parse_tree__parse_tree_out_inst__InstVarSet_2,
  MR_Word parse_tree__parse_tree_out_inst__HeadVar__3_3,
  MR_Box parse_tree__parse_tree_out_inst__STATE_VARIABLE_U_0_4,
  MR_Box * parse_tree__parse_tree_out_inst__STATE_VARIABLE_U_5)
{
  while (MR_TRUE)
    {
      /* tailcall optimized into a loop */
      {
        MR_bool parse_tree__parse_tree_out_inst__succeeded;

        if ((parse_tree__parse_tree_out_inst__HeadVar__3_3 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
          *parse_tree__parse_tree_out_inst__STATE_VARIABLE_U_5 = parse_tree__parse_tree_out_inst__STATE_VARIABLE_U_0_4;
        else
          {
            MR_Word parse_tree__parse_tree_out_inst__BoundInst_13 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__parse_tree_out_inst__HeadVar__3_3, (MR_Integer) 0)));
            MR_Word parse_tree__parse_tree_out_inst__BoundInsts_14 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__parse_tree_out_inst__HeadVar__3_3, (MR_Integer) 1)));
            MR_Word parse_tree__parse_tree_out_inst__ConsId_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__parse_tree_out_inst__BoundInst_13, (MR_Integer) 0)));
            MR_Word parse_tree__parse_tree_out_inst__Args_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__parse_tree_out_inst__BoundInst_13, (MR_Integer) 1)));
            MR_Box parse_tree__parse_tree_out_inst__STATE_VARIABLE_U_32_32;

            if ((parse_tree__parse_tree_out_inst__Args_17 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
              {
                {
                  parse_tree__mercury_to_mercury__mercury_format_cons_id_4_p_0(parse_tree__parse_tree_out_inst__TypeClassInfo_for_output_36, (MR_Integer) 0, parse_tree__parse_tree_out_inst__ConsId_16, parse_tree__parse_tree_out_inst__STATE_VARIABLE_U_0_4, &parse_tree__parse_tree_out_inst__STATE_VARIABLE_U_32_32);
                }
              }
            else
              {
                MR_Box parse_tree__parse_tree_out_inst__STATE_VARIABLE_U_25_25;
                MR_Box parse_tree__parse_tree_out_inst__STATE_VARIABLE_U_27_27;
                MR_Box parse_tree__parse_tree_out_inst__STATE_VARIABLE_U_28_28;
                void MR_CALL (* parse_tree__parse_tree_out_inst__func_0)(MR_Box, MR_Box, MR_Box, MR_Box *);
                void MR_CALL (* parse_tree__parse_tree_out_inst__func_1)(MR_Box, MR_Box, MR_Box, MR_Box *);

                {
                  parse_tree__mercury_to_mercury__mercury_format_cons_id_4_p_0(parse_tree__parse_tree_out_inst__TypeClassInfo_for_output_36, (MR_Integer) 1, parse_tree__parse_tree_out_inst__ConsId_16, parse_tree__parse_tree_out_inst__STATE_VARIABLE_U_0_4, &parse_tree__parse_tree_out_inst__STATE_VARIABLE_U_25_25);
                }
                parse_tree__parse_tree_out_inst__func_0 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), parse_tree__parse_tree_out_inst__TypeClassInfo_for_output_36, (MR_Integer) 0)), (MR_Integer) 5)));
                {
                  parse_tree__parse_tree_out_inst__func_0(((MR_Box) parse_tree__parse_tree_out_inst__TypeClassInfo_for_output_36), ((MR_Box) ((MR_String) "(")), parse_tree__parse_tree_out_inst__STATE_VARIABLE_U_25_25, &parse_tree__parse_tree_out_inst__STATE_VARIABLE_U_27_27);
                }
                {
                  parse_tree__parse_tree_out_inst__mercury_format_inst_list_5_p_0(parse_tree__parse_tree_out_inst__TypeClassInfo_for_output_36, parse_tree__parse_tree_out_inst__Lang_1, parse_tree__parse_tree_out_inst__InstVarSet_2, parse_tree__parse_tree_out_inst__Args_17, parse_tree__parse_tree_out_inst__STATE_VARIABLE_U_27_27, &parse_tree__parse_tree_out_inst__STATE_VARIABLE_U_28_28);
                }
                parse_tree__parse_tree_out_inst__func_1 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), parse_tree__parse_tree_out_inst__TypeClassInfo_for_output_36, (MR_Integer) 0)), (MR_Integer) 5)));
                {
                  parse_tree__parse_tree_out_inst__func_1(((MR_Box) parse_tree__parse_tree_out_inst__TypeClassInfo_for_output_36), ((MR_Box) ((MR_String) ")")), parse_tree__parse_tree_out_inst__STATE_VARIABLE_U_28_28, &parse_tree__parse_tree_out_inst__STATE_VARIABLE_U_32_32);
                }
              }
            if ((parse_tree__parse_tree_out_inst__BoundInsts_14 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
              *parse_tree__parse_tree_out_inst__STATE_VARIABLE_U_5 = parse_tree__parse_tree_out_inst__STATE_VARIABLE_U_32_32;
            else
              {
                MR_Box parse_tree__parse_tree_out_inst__STATE_VARIABLE_U_34_34;
                void MR_CALL (* parse_tree__parse_tree_out_inst__func_2)(MR_Box, MR_Box, MR_Box, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), parse_tree__parse_tree_out_inst__TypeClassInfo_for_output_36, (MR_Integer) 0)), (MR_Integer) 5)));

                {
                  parse_tree__parse_tree_out_inst__func_2(((MR_Box) parse_tree__parse_tree_out_inst__TypeClassInfo_for_output_36), ((MR_Box) ((MR_String) " ; ")), parse_tree__parse_tree_out_inst__STATE_VARIABLE_U_32_32, &parse_tree__parse_tree_out_inst__STATE_VARIABLE_U_34_34);
                }
                /* direct tailcall eliminated */
                {
                  MR_Word parse_tree__parse_tree_out_inst__HeadVar__3__tmp_copy_3 = parse_tree__parse_tree_out_inst__BoundInsts_14;
                  MR_Box parse_tree__parse_tree_out_inst__STATE_VARIABLE_U_0__tmp_copy_4 = parse_tree__parse_tree_out_inst__STATE_VARIABLE_U_34_34;

                  parse_tree__parse_tree_out_inst__STATE_VARIABLE_U_0_4 = parse_tree__parse_tree_out_inst__STATE_VARIABLE_U_0__tmp_copy_4;
                  parse_tree__parse_tree_out_inst__HeadVar__3_3 = parse_tree__parse_tree_out_inst__HeadVar__3__tmp_copy_3;
                }
                continue;
              }
          }
      }
      break;
    }
}

static void MR_CALL 
parse_tree__parse_tree_out_inst__mercury_format_inst_list_5_p_0(
  MR_Word parse_tree__parse_tree_out_inst__TypeClassInfo_for_output_24,
  MR_Word parse_tree__parse_tree_out_inst__Lang_1,
  MR_Word parse_tree__parse_tree_out_inst__InstVarSet_2,
  MR_Word parse_tree__parse_tree_out_inst__HeadVar__3_3,
  MR_Box parse_tree__parse_tree_out_inst__STATE_VARIABLE_U_0_4,
  MR_Box * parse_tree__parse_tree_out_inst__STATE_VARIABLE_U_5)
{
  while (MR_TRUE)
    {
      /* tailcall optimized into a loop */
      {
        MR_bool parse_tree__parse_tree_out_inst__succeeded;

        if ((parse_tree__parse_tree_out_inst__HeadVar__3_3 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
          *parse_tree__parse_tree_out_inst__STATE_VARIABLE_U_5 = parse_tree__parse_tree_out_inst__STATE_VARIABLE_U_0_4;
        else
          {
            MR_Word parse_tree__parse_tree_out_inst__Inst_13 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__parse_tree_out_inst__HeadVar__3_3, (MR_Integer) 0)));
            MR_Word parse_tree__parse_tree_out_inst__Insts_14 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__parse_tree_out_inst__HeadVar__3_3, (MR_Integer) 1)));
            MR_Box parse_tree__parse_tree_out_inst__STATE_VARIABLE_U_20_20;

            {
              parse_tree__parse_tree_out_inst__mercury_format_inst_5_p_0(parse_tree__parse_tree_out_inst__TypeClassInfo_for_output_24, parse_tree__parse_tree_out_inst__Lang_1, parse_tree__parse_tree_out_inst__InstVarSet_2, parse_tree__parse_tree_out_inst__Inst_13, parse_tree__parse_tree_out_inst__STATE_VARIABLE_U_0_4, &parse_tree__parse_tree_out_inst__STATE_VARIABLE_U_20_20);
            }
            if ((parse_tree__parse_tree_out_inst__Insts_14 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
              *parse_tree__parse_tree_out_inst__STATE_VARIABLE_U_5 = parse_tree__parse_tree_out_inst__STATE_VARIABLE_U_20_20;
            else
              {
                MR_Box parse_tree__parse_tree_out_inst__STATE_VARIABLE_U_22_22;
                MR_Word parse_tree__parse_tree_out_inst__Inst_32;
                MR_Word parse_tree__parse_tree_out_inst__Insts_33;
                MR_Box parse_tree__parse_tree_out_inst__STATE_VARIABLE_U_20_39;
                void MR_CALL (* parse_tree__parse_tree_out_inst__func_0)(MR_Box, MR_Box, MR_Box, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), parse_tree__parse_tree_out_inst__TypeClassInfo_for_output_24, (MR_Integer) 0)), (MR_Integer) 5)));

                {
                  parse_tree__parse_tree_out_inst__func_0(((MR_Box) parse_tree__parse_tree_out_inst__TypeClassInfo_for_output_24), ((MR_Box) ((MR_String) ", ")), parse_tree__parse_tree_out_inst__STATE_VARIABLE_U_20_20, &parse_tree__parse_tree_out_inst__STATE_VARIABLE_U_22_22);
                }
                parse_tree__parse_tree_out_inst__Inst_32 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__parse_tree_out_inst__Insts_14, (MR_Integer) 0)));
                parse_tree__parse_tree_out_inst__Insts_33 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__parse_tree_out_inst__Insts_14, (MR_Integer) 1)));
                {
                  parse_tree__parse_tree_out_inst__mercury_format_inst_5_p_0(parse_tree__parse_tree_out_inst__TypeClassInfo_for_output_24, parse_tree__parse_tree_out_inst__Lang_1, parse_tree__parse_tree_out_inst__InstVarSet_2, parse_tree__parse_tree_out_inst__Inst_32, parse_tree__parse_tree_out_inst__STATE_VARIABLE_U_22_22, &parse_tree__parse_tree_out_inst__STATE_VARIABLE_U_20_39);
                }
                if ((parse_tree__parse_tree_out_inst__Insts_33 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
                  *parse_tree__parse_tree_out_inst__STATE_VARIABLE_U_5 = parse_tree__parse_tree_out_inst__STATE_VARIABLE_U_20_39;
                else
                  {
                    MR_Box parse_tree__parse_tree_out_inst__STATE_VARIABLE_U_22_41;
                    void MR_CALL (* parse_tree__parse_tree_out_inst__func_1)(MR_Box, MR_Box, MR_Box, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), parse_tree__parse_tree_out_inst__TypeClassInfo_for_output_24, (MR_Integer) 0)), (MR_Integer) 5)));

                    {
                      parse_tree__parse_tree_out_inst__func_1(((MR_Box) parse_tree__parse_tree_out_inst__TypeClassInfo_for_output_24), ((MR_Box) ((MR_String) ", ")), parse_tree__parse_tree_out_inst__STATE_VARIABLE_U_20_39, &parse_tree__parse_tree_out_inst__STATE_VARIABLE_U_22_41);
                    }
                    /* direct tailcall eliminated */
                    {
                      MR_Word parse_tree__parse_tree_out_inst__HeadVar__3__tmp_copy_3 = parse_tree__parse_tree_out_inst__Insts_33;
                      MR_Box parse_tree__parse_tree_out_inst__STATE_VARIABLE_U_0__tmp_copy_4 = parse_tree__parse_tree_out_inst__STATE_VARIABLE_U_22_41;

                      parse_tree__parse_tree_out_inst__STATE_VARIABLE_U_0_4 = parse_tree__parse_tree_out_inst__STATE_VARIABLE_U_0__tmp_copy_4;
                      parse_tree__parse_tree_out_inst__HeadVar__3_3 = parse_tree__parse_tree_out_inst__HeadVar__3__tmp_copy_3;
                    }
                    continue;
                  }
              }
          }
      }
      break;
    }
}

void MR_CALL 
parse_tree__parse_tree_out_inst__mercury_format_mode_list_5_p_0(
  MR_Word parse_tree__parse_tree_out_inst__TypeClassInfo_for_output_24,
  MR_Word parse_tree__parse_tree_out_inst__Lang_1,
  MR_Word parse_tree__parse_tree_out_inst__InstVarSet_2,
  MR_Word parse_tree__parse_tree_out_inst__HeadVar__3_3,
  MR_Box parse_tree__parse_tree_out_inst__STATE_VARIABLE_U_0_4,
  MR_Box * parse_tree__parse_tree_out_inst__STATE_VARIABLE_U_5)
{
  while (MR_TRUE)
    {
      /* tailcall optimized into a loop */
      {
        MR_bool parse_tree__parse_tree_out_inst__succeeded;

        if ((parse_tree__parse_tree_out_inst__HeadVar__3_3 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
          *parse_tree__parse_tree_out_inst__STATE_VARIABLE_U_5 = parse_tree__parse_tree_out_inst__STATE_VARIABLE_U_0_4;
        else
          {
            MR_Word parse_tree__parse_tree_out_inst__Mode_13 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__parse_tree_out_inst__HeadVar__3_3, (MR_Integer) 0)));
            MR_Word parse_tree__parse_tree_out_inst__Modes_14 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__parse_tree_out_inst__HeadVar__3_3, (MR_Integer) 1)));
            MR_Box parse_tree__parse_tree_out_inst__STATE_VARIABLE_U_20_20;

            {
              parse_tree__parse_tree_out_inst__mercury_format_mode_5_p_0(parse_tree__parse_tree_out_inst__TypeClassInfo_for_output_24, parse_tree__parse_tree_out_inst__Lang_1, parse_tree__parse_tree_out_inst__InstVarSet_2, parse_tree__parse_tree_out_inst__Mode_13, parse_tree__parse_tree_out_inst__STATE_VARIABLE_U_0_4, &parse_tree__parse_tree_out_inst__STATE_VARIABLE_U_20_20);
            }
            if ((parse_tree__parse_tree_out_inst__Modes_14 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
              *parse_tree__parse_tree_out_inst__STATE_VARIABLE_U_5 = parse_tree__parse_tree_out_inst__STATE_VARIABLE_U_20_20;
            else
              {
                MR_Box parse_tree__parse_tree_out_inst__STATE_VARIABLE_U_22_22;
                MR_Word parse_tree__parse_tree_out_inst__Mode_32;
                MR_Word parse_tree__parse_tree_out_inst__Modes_33;
                MR_Box parse_tree__parse_tree_out_inst__STATE_VARIABLE_U_20_39;
                void MR_CALL (* parse_tree__parse_tree_out_inst__func_0)(MR_Box, MR_Box, MR_Box, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), parse_tree__parse_tree_out_inst__TypeClassInfo_for_output_24, (MR_Integer) 0)), (MR_Integer) 5)));

                {
                  parse_tree__parse_tree_out_inst__func_0(((MR_Box) parse_tree__parse_tree_out_inst__TypeClassInfo_for_output_24), ((MR_Box) ((MR_String) ", ")), parse_tree__parse_tree_out_inst__STATE_VARIABLE_U_20_20, &parse_tree__parse_tree_out_inst__STATE_VARIABLE_U_22_22);
                }
                parse_tree__parse_tree_out_inst__Mode_32 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__parse_tree_out_inst__Modes_14, (MR_Integer) 0)));
                parse_tree__parse_tree_out_inst__Modes_33 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__parse_tree_out_inst__Modes_14, (MR_Integer) 1)));
                {
                  parse_tree__parse_tree_out_inst__mercury_format_mode_5_p_0(parse_tree__parse_tree_out_inst__TypeClassInfo_for_output_24, parse_tree__parse_tree_out_inst__Lang_1, parse_tree__parse_tree_out_inst__InstVarSet_2, parse_tree__parse_tree_out_inst__Mode_32, parse_tree__parse_tree_out_inst__STATE_VARIABLE_U_22_22, &parse_tree__parse_tree_out_inst__STATE_VARIABLE_U_20_39);
                }
                if ((parse_tree__parse_tree_out_inst__Modes_33 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
                  *parse_tree__parse_tree_out_inst__STATE_VARIABLE_U_5 = parse_tree__parse_tree_out_inst__STATE_VARIABLE_U_20_39;
                else
                  {
                    MR_Box parse_tree__parse_tree_out_inst__STATE_VARIABLE_U_22_41;
                    void MR_CALL (* parse_tree__parse_tree_out_inst__func_1)(MR_Box, MR_Box, MR_Box, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), parse_tree__parse_tree_out_inst__TypeClassInfo_for_output_24, (MR_Integer) 0)), (MR_Integer) 5)));

                    {
                      parse_tree__parse_tree_out_inst__func_1(((MR_Box) parse_tree__parse_tree_out_inst__TypeClassInfo_for_output_24), ((MR_Box) ((MR_String) ", ")), parse_tree__parse_tree_out_inst__STATE_VARIABLE_U_20_39, &parse_tree__parse_tree_out_inst__STATE_VARIABLE_U_22_41);
                    }
                    /* direct tailcall eliminated */
                    {
                      MR_Word parse_tree__parse_tree_out_inst__HeadVar__3__tmp_copy_3 = parse_tree__parse_tree_out_inst__Modes_33;
                      MR_Box parse_tree__parse_tree_out_inst__STATE_VARIABLE_U_0__tmp_copy_4 = parse_tree__parse_tree_out_inst__STATE_VARIABLE_U_22_41;

                      parse_tree__parse_tree_out_inst__STATE_VARIABLE_U_0_4 = parse_tree__parse_tree_out_inst__STATE_VARIABLE_U_0__tmp_copy_4;
                      parse_tree__parse_tree_out_inst__HeadVar__3_3 = parse_tree__parse_tree_out_inst__HeadVar__3__tmp_copy_3;
                    }
                    continue;
                  }
              }
          }
      }
      break;
    }
}

MR_String MR_CALL 
parse_tree__parse_tree_out_inst__mercury_mode_list_to_string_3_f_0(
  MR_Word parse_tree__parse_tree_out_inst__Lang_5,
  MR_Word parse_tree__parse_tree_out_inst__InstVarSet_6,
  MR_Word parse_tree__parse_tree_out_inst__Modes_7)
{
  {
    MR_bool parse_tree__parse_tree_out_inst__succeeded;
    MR_String parse_tree__parse_tree_out_inst__String_8;
    MR_Box parse_tree__parse_tree_out_inst__conv0_String_8;

    {
      parse_tree__parse_tree_out_inst__mercury_format_mode_list_5_p_0((MR_Word) &parse_tree__parse_tree_out_inst_scalar_common_1[1], parse_tree__parse_tree_out_inst__Lang_5, parse_tree__parse_tree_out_inst__InstVarSet_6, parse_tree__parse_tree_out_inst__Modes_7, ((MR_Box) ((MR_String) "")), &parse_tree__parse_tree_out_inst__conv0_String_8);
    }
    parse_tree__parse_tree_out_inst__String_8 = ((MR_String) parse_tree__parse_tree_out_inst__conv0_String_8);
    return parse_tree__parse_tree_out_inst__String_8;
  }
}

void MR_CALL 
parse_tree__parse_tree_out_inst__mercury_output_mode_list_5_p_0(
  MR_Word parse_tree__parse_tree_out_inst__Lang_6,
  MR_Word parse_tree__parse_tree_out_inst__InstVarSet_7,
  MR_Word parse_tree__parse_tree_out_inst__Modes_8)
{
  {
    MR_bool parse_tree__parse_tree_out_inst__succeeded;
    MR_Box parse_tree__parse_tree_out_inst__conv0_STATE_VARIABLE_IO_11;

    {
      parse_tree__parse_tree_out_inst__mercury_format_mode_list_5_p_0((MR_Word) &parse_tree__parse_tree_out_inst_scalar_common_1[0], parse_tree__parse_tree_out_inst__Lang_6, parse_tree__parse_tree_out_inst__InstVarSet_7, parse_tree__parse_tree_out_inst__Modes_8, ((MR_Box) ((MR_Integer) 0)), &parse_tree__parse_tree_out_inst__conv0_STATE_VARIABLE_IO_11);
    }
  }
}

void MR_CALL 
parse_tree__parse_tree_out_inst__mercury_format_mode_5_p_0(
  MR_Word parse_tree__parse_tree_out_inst__TypeClassInfo_for_output_41,
  MR_Word parse_tree__parse_tree_out_inst__Lang_6,
  MR_Word parse_tree__parse_tree_out_inst__InstVarSet_7,
  MR_Word parse_tree__parse_tree_out_inst__Mode_8,
  MR_Box parse_tree__parse_tree_out_inst__STATE_VARIABLE_U_0_21,
  MR_Box * parse_tree__parse_tree_out_inst__STATE_VARIABLE_U_22)
{
  {
    MR_bool parse_tree__parse_tree_out_inst__succeeded;

    if (((MR_tag((MR_Word) parse_tree__parse_tree_out_inst__Mode_8)) == (MR_mktag((MR_Integer) 0))))
      {
        MR_Word parse_tree__parse_tree_out_inst__InstA_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__parse_tree_out_inst__Mode_8, (MR_Integer) 0)));
        MR_Word parse_tree__parse_tree_out_inst__InstB_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__parse_tree_out_inst__Mode_8, (MR_Integer) 1)));
        MR_Word parse_tree__parse_tree_out_inst__V_30_30;
        MR_Word parse_tree__parse_tree_out_inst___Uniq_12;
        MR_Word parse_tree__parse_tree_out_inst__V_31_31;

        parse_tree__parse_tree_out_inst__succeeded = ((((MR_tag((MR_Word) parse_tree__parse_tree_out_inst__InstA_10)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__parse_tree_out_inst__InstA_10, (MR_Integer) 0)))) == (MR_Integer) 1)));
        if (parse_tree__parse_tree_out_inst__succeeded)
          {
            parse_tree__parse_tree_out_inst___Uniq_12 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__parse_tree_out_inst__InstA_10, (MR_Integer) 1)));
            parse_tree__parse_tree_out_inst__V_30_30 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__parse_tree_out_inst__InstA_10, (MR_Integer) 2)));
            parse_tree__parse_tree_out_inst__succeeded = ((MR_tag((MR_Word) parse_tree__parse_tree_out_inst__V_30_30)) == (MR_mktag((MR_Integer) 1)));
            if (parse_tree__parse_tree_out_inst__succeeded)
              {
                parse_tree__parse_tree_out_inst__V_31_31 = (MR_Word) MR_body(((MR_Word) parse_tree__parse_tree_out_inst__V_30_30), (MR_Integer) 1);
                {
                  parse_tree__parse_tree_out_inst__succeeded = parse_tree__prog_data____Unify____mer_inst_0_0(parse_tree__parse_tree_out_inst__InstB_11, parse_tree__parse_tree_out_inst__InstA_10);
                }
              }
          }
        if (parse_tree__parse_tree_out_inst__succeeded)
          {
            parse_tree__parse_tree_out_inst__mercury_format_inst_5_p_0(parse_tree__parse_tree_out_inst__TypeClassInfo_for_output_41, parse_tree__parse_tree_out_inst__Lang_6, parse_tree__parse_tree_out_inst__InstVarSet_7, parse_tree__parse_tree_out_inst__InstA_10, parse_tree__parse_tree_out_inst__STATE_VARIABLE_U_0_21, parse_tree__parse_tree_out_inst__STATE_VARIABLE_U_22);
          }
        else
          {
            MR_Box parse_tree__parse_tree_out_inst__STATE_VARIABLE_U_34_34;
            MR_Box parse_tree__parse_tree_out_inst__STATE_VARIABLE_U_35_35;
            MR_Box parse_tree__parse_tree_out_inst__STATE_VARIABLE_U_37_37;
            MR_Box parse_tree__parse_tree_out_inst__STATE_VARIABLE_U_38_38;
            void MR_CALL (* parse_tree__parse_tree_out_inst__func_0)(MR_Box, MR_Box, MR_Box, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), parse_tree__parse_tree_out_inst__TypeClassInfo_for_output_41, (MR_Integer) 0)), (MR_Integer) 5)));
            void MR_CALL (* parse_tree__parse_tree_out_inst__func_1)(MR_Box, MR_Box, MR_Box, MR_Box *);
            void MR_CALL (* parse_tree__parse_tree_out_inst__func_2)(MR_Box, MR_Box, MR_Box, MR_Box *);

            {
              parse_tree__parse_tree_out_inst__func_0(((MR_Box) parse_tree__parse_tree_out_inst__TypeClassInfo_for_output_41), ((MR_Box) ((MR_String) "(")), parse_tree__parse_tree_out_inst__STATE_VARIABLE_U_0_21, &parse_tree__parse_tree_out_inst__STATE_VARIABLE_U_34_34);
            }
            {
              parse_tree__parse_tree_out_inst__mercury_format_inst_5_p_0(parse_tree__parse_tree_out_inst__TypeClassInfo_for_output_41, parse_tree__parse_tree_out_inst__Lang_6, parse_tree__parse_tree_out_inst__InstVarSet_7, parse_tree__parse_tree_out_inst__InstA_10, parse_tree__parse_tree_out_inst__STATE_VARIABLE_U_34_34, &parse_tree__parse_tree_out_inst__STATE_VARIABLE_U_35_35);
            }
            parse_tree__parse_tree_out_inst__func_1 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), parse_tree__parse_tree_out_inst__TypeClassInfo_for_output_41, (MR_Integer) 0)), (MR_Integer) 5)));
            {
              parse_tree__parse_tree_out_inst__func_1(((MR_Box) parse_tree__parse_tree_out_inst__TypeClassInfo_for_output_41), ((MR_Box) ((MR_String) " >> ")), parse_tree__parse_tree_out_inst__STATE_VARIABLE_U_35_35, &parse_tree__parse_tree_out_inst__STATE_VARIABLE_U_37_37);
            }
            {
              parse_tree__parse_tree_out_inst__mercury_format_inst_5_p_0(parse_tree__parse_tree_out_inst__TypeClassInfo_for_output_41, parse_tree__parse_tree_out_inst__Lang_6, parse_tree__parse_tree_out_inst__InstVarSet_7, parse_tree__parse_tree_out_inst__InstB_11, parse_tree__parse_tree_out_inst__STATE_VARIABLE_U_37_37, &parse_tree__parse_tree_out_inst__STATE_VARIABLE_U_38_38);
            }
            parse_tree__parse_tree_out_inst__func_2 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), parse_tree__parse_tree_out_inst__TypeClassInfo_for_output_41, (MR_Integer) 0)), (MR_Integer) 5)));
            {
              parse_tree__parse_tree_out_inst__func_2(((MR_Box) parse_tree__parse_tree_out_inst__TypeClassInfo_for_output_41), ((MR_Box) ((MR_String) ")")), parse_tree__parse_tree_out_inst__STATE_VARIABLE_U_38_38, parse_tree__parse_tree_out_inst__STATE_VARIABLE_U_22);
            }
          }
      }
    else
      {
        MR_Word parse_tree__parse_tree_out_inst__Name_17 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__parse_tree_out_inst__Mode_8, (MR_Integer) 0)));
        MR_Word parse_tree__parse_tree_out_inst__Args_18 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__parse_tree_out_inst__Mode_8, (MR_Integer) 1)));

        if ((parse_tree__parse_tree_out_inst__Args_18 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
          {
            parse_tree__mercury_to_mercury__mercury_format_bracketed_sym_name_3_p_0(parse_tree__parse_tree_out_inst__TypeClassInfo_for_output_41, parse_tree__parse_tree_out_inst__Name_17, parse_tree__parse_tree_out_inst__STATE_VARIABLE_U_0_21, parse_tree__parse_tree_out_inst__STATE_VARIABLE_U_22);
          }
        else
          {
            MR_Box parse_tree__parse_tree_out_inst__STATE_VARIABLE_U_23_23;
            MR_Box parse_tree__parse_tree_out_inst__STATE_VARIABLE_U_25_25;
            MR_Box parse_tree__parse_tree_out_inst__STATE_VARIABLE_U_26_26;
            MR_Word parse_tree__parse_tree_out_inst__Inst_50;
            MR_Word parse_tree__parse_tree_out_inst__Insts_51;
            MR_Box parse_tree__parse_tree_out_inst__STATE_VARIABLE_U_20_57;
            void MR_CALL (* parse_tree__parse_tree_out_inst__func_3)(MR_Box, MR_Box, MR_Box, MR_Box *);
            void MR_CALL (* parse_tree__parse_tree_out_inst__func_5)(MR_Box, MR_Box, MR_Box, MR_Box *);

            {
              parse_tree__mercury_to_mercury__mercury_format_sym_name_3_p_0(parse_tree__parse_tree_out_inst__TypeClassInfo_for_output_41, parse_tree__parse_tree_out_inst__Name_17, parse_tree__parse_tree_out_inst__STATE_VARIABLE_U_0_21, &parse_tree__parse_tree_out_inst__STATE_VARIABLE_U_23_23);
            }
            parse_tree__parse_tree_out_inst__func_3 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), parse_tree__parse_tree_out_inst__TypeClassInfo_for_output_41, (MR_Integer) 0)), (MR_Integer) 5)));
            {
              parse_tree__parse_tree_out_inst__func_3(((MR_Box) parse_tree__parse_tree_out_inst__TypeClassInfo_for_output_41), ((MR_Box) ((MR_String) "(")), parse_tree__parse_tree_out_inst__STATE_VARIABLE_U_23_23, &parse_tree__parse_tree_out_inst__STATE_VARIABLE_U_25_25);
            }
            parse_tree__parse_tree_out_inst__Inst_50 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__parse_tree_out_inst__Args_18, (MR_Integer) 0)));
            parse_tree__parse_tree_out_inst__Insts_51 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__parse_tree_out_inst__Args_18, (MR_Integer) 1)));
            {
              parse_tree__parse_tree_out_inst__mercury_format_inst_5_p_0(parse_tree__parse_tree_out_inst__TypeClassInfo_for_output_41, parse_tree__parse_tree_out_inst__Lang_6, parse_tree__parse_tree_out_inst__InstVarSet_7, parse_tree__parse_tree_out_inst__Inst_50, parse_tree__parse_tree_out_inst__STATE_VARIABLE_U_25_25, &parse_tree__parse_tree_out_inst__STATE_VARIABLE_U_20_57);
            }
            if ((parse_tree__parse_tree_out_inst__Insts_51 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
              parse_tree__parse_tree_out_inst__STATE_VARIABLE_U_26_26 = parse_tree__parse_tree_out_inst__STATE_VARIABLE_U_20_57;
            else
              {
                MR_Box parse_tree__parse_tree_out_inst__STATE_VARIABLE_U_22_59;
                void MR_CALL (* parse_tree__parse_tree_out_inst__func_4)(MR_Box, MR_Box, MR_Box, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), parse_tree__parse_tree_out_inst__TypeClassInfo_for_output_41, (MR_Integer) 0)), (MR_Integer) 5)));

                {
                  parse_tree__parse_tree_out_inst__func_4(((MR_Box) parse_tree__parse_tree_out_inst__TypeClassInfo_for_output_41), ((MR_Box) ((MR_String) ", ")), parse_tree__parse_tree_out_inst__STATE_VARIABLE_U_20_57, &parse_tree__parse_tree_out_inst__STATE_VARIABLE_U_22_59);
                }
                {
                  parse_tree__parse_tree_out_inst__mercury_format_inst_list_5_p_0(parse_tree__parse_tree_out_inst__TypeClassInfo_for_output_41, parse_tree__parse_tree_out_inst__Lang_6, parse_tree__parse_tree_out_inst__InstVarSet_7, parse_tree__parse_tree_out_inst__Insts_51, parse_tree__parse_tree_out_inst__STATE_VARIABLE_U_22_59, &parse_tree__parse_tree_out_inst__STATE_VARIABLE_U_26_26);
                }
              }
            parse_tree__parse_tree_out_inst__func_5 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), parse_tree__parse_tree_out_inst__TypeClassInfo_for_output_41, (MR_Integer) 0)), (MR_Integer) 5)));
            {
              parse_tree__parse_tree_out_inst__func_5(((MR_Box) parse_tree__parse_tree_out_inst__TypeClassInfo_for_output_41), ((MR_Box) ((MR_String) ")")), parse_tree__parse_tree_out_inst__STATE_VARIABLE_U_26_26, parse_tree__parse_tree_out_inst__STATE_VARIABLE_U_22);
            }
          }
      }
  }
}

MR_String MR_CALL 
parse_tree__parse_tree_out_inst__mercury_mode_to_string_3_f_0(
  MR_Word parse_tree__parse_tree_out_inst__Lang_5,
  MR_Word parse_tree__parse_tree_out_inst__InstVarSet_6,
  MR_Word parse_tree__parse_tree_out_inst__Mode_7)
{
  {
    MR_bool parse_tree__parse_tree_out_inst__succeeded;
    MR_String parse_tree__parse_tree_out_inst__String_8;
    MR_Box parse_tree__parse_tree_out_inst__conv0_String_8;

    {
      parse_tree__parse_tree_out_inst__mercury_format_mode_5_p_0((MR_Word) &parse_tree__parse_tree_out_inst_scalar_common_1[1], parse_tree__parse_tree_out_inst__Lang_5, parse_tree__parse_tree_out_inst__InstVarSet_6, parse_tree__parse_tree_out_inst__Mode_7, ((MR_Box) ((MR_String) "")), &parse_tree__parse_tree_out_inst__conv0_String_8);
    }
    parse_tree__parse_tree_out_inst__String_8 = ((MR_String) parse_tree__parse_tree_out_inst__conv0_String_8);
    return parse_tree__parse_tree_out_inst__String_8;
  }
}

void MR_CALL 
parse_tree__parse_tree_out_inst__mercury_output_mode_5_p_0(
  MR_Word parse_tree__parse_tree_out_inst__Lang_6,
  MR_Word parse_tree__parse_tree_out_inst__InstVarSet_7,
  MR_Word parse_tree__parse_tree_out_inst__Mode_8)
{
  {
    MR_bool parse_tree__parse_tree_out_inst__succeeded;
    MR_Box parse_tree__parse_tree_out_inst__conv0_STATE_VARIABLE_IO_11;

    {
      parse_tree__parse_tree_out_inst__mercury_format_mode_5_p_0((MR_Word) &parse_tree__parse_tree_out_inst_scalar_common_1[0], parse_tree__parse_tree_out_inst__Lang_6, parse_tree__parse_tree_out_inst__InstVarSet_7, parse_tree__parse_tree_out_inst__Mode_8, ((MR_Box) ((MR_Integer) 0)), &parse_tree__parse_tree_out_inst__conv0_STATE_VARIABLE_IO_11);
    }
  }
}

void MR_CALL 
parse_tree__parse_tree_out_inst__mercury_format_any_uniqueness_3_p_0(
  MR_Word parse_tree__parse_tree_out_inst__TypeClassInfo_for_output_29,
  MR_Word parse_tree__parse_tree_out_inst__HeadVar__1_1,
  MR_Box parse_tree__parse_tree_out_inst__STATE_VARIABLE_U_0_2,
  MR_Box * parse_tree__parse_tree_out_inst__STATE_VARIABLE_U_3)
{
  {
    MR_bool parse_tree__parse_tree_out_inst__succeeded;

    switch (parse_tree__parse_tree_out_inst__HeadVar__1_1) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 3:
        {
          void MR_CALL (* parse_tree__parse_tree_out_inst__func_0)(MR_Box, MR_Box, MR_Box, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), parse_tree__parse_tree_out_inst__TypeClassInfo_for_output_29, (MR_Integer) 0)), (MR_Integer) 5)));

          {
            parse_tree__parse_tree_out_inst__func_0(((MR_Box) parse_tree__parse_tree_out_inst__TypeClassInfo_for_output_29), ((MR_Box) ((MR_String) "clobbered_any")), parse_tree__parse_tree_out_inst__STATE_VARIABLE_U_0_2, parse_tree__parse_tree_out_inst__STATE_VARIABLE_U_3);
          }
        }
        break;
      case (MR_Integer) 4:
        {
          void MR_CALL (* parse_tree__parse_tree_out_inst__func_1)(MR_Box, MR_Box, MR_Box, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), parse_tree__parse_tree_out_inst__TypeClassInfo_for_output_29, (MR_Integer) 0)), (MR_Integer) 5)));

          {
            parse_tree__parse_tree_out_inst__func_1(((MR_Box) parse_tree__parse_tree_out_inst__TypeClassInfo_for_output_29), ((MR_Box) ((MR_String) "mostly_clobbered_any")), parse_tree__parse_tree_out_inst__STATE_VARIABLE_U_0_2, parse_tree__parse_tree_out_inst__STATE_VARIABLE_U_3);
          }
        }
        break;
      case (MR_Integer) 2:
        {
          void MR_CALL (* parse_tree__parse_tree_out_inst__func_2)(MR_Box, MR_Box, MR_Box, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), parse_tree__parse_tree_out_inst__TypeClassInfo_for_output_29, (MR_Integer) 0)), (MR_Integer) 5)));

          {
            parse_tree__parse_tree_out_inst__func_2(((MR_Box) parse_tree__parse_tree_out_inst__TypeClassInfo_for_output_29), ((MR_Box) ((MR_String) "mostly_unique_any")), parse_tree__parse_tree_out_inst__STATE_VARIABLE_U_0_2, parse_tree__parse_tree_out_inst__STATE_VARIABLE_U_3);
          }
        }
        break;
      case (MR_Integer) 0:
        {
          void MR_CALL (* parse_tree__parse_tree_out_inst__func_3)(MR_Box, MR_Box, MR_Box, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), parse_tree__parse_tree_out_inst__TypeClassInfo_for_output_29, (MR_Integer) 0)), (MR_Integer) 5)));

          {
            parse_tree__parse_tree_out_inst__func_3(((MR_Box) parse_tree__parse_tree_out_inst__TypeClassInfo_for_output_29), ((MR_Box) ((MR_String) "any")), parse_tree__parse_tree_out_inst__STATE_VARIABLE_U_0_2, parse_tree__parse_tree_out_inst__STATE_VARIABLE_U_3);
          }
        }
        break;
      case (MR_Integer) 1:
        {
          void MR_CALL (* parse_tree__parse_tree_out_inst__func_4)(MR_Box, MR_Box, MR_Box, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), parse_tree__parse_tree_out_inst__TypeClassInfo_for_output_29, (MR_Integer) 0)), (MR_Integer) 5)));

          {
            parse_tree__parse_tree_out_inst__func_4(((MR_Box) parse_tree__parse_tree_out_inst__TypeClassInfo_for_output_29), ((MR_Box) ((MR_String) "unique_any")), parse_tree__parse_tree_out_inst__STATE_VARIABLE_U_0_2, parse_tree__parse_tree_out_inst__STATE_VARIABLE_U_3);
          }
        }
        break;
    }
  }
}

void MR_CALL 
parse_tree__parse_tree_out_inst__mercury_format_uniqueness_4_p_0(
  MR_Word parse_tree__parse_tree_out_inst__TypeClassInfo_for_output_34,
  MR_Word parse_tree__parse_tree_out_inst__HeadVar__1_1,
  MR_String parse_tree__parse_tree_out_inst__SharedString_2,
  MR_Box parse_tree__parse_tree_out_inst__STATE_VARIABLE_U_0_3,
  MR_Box * parse_tree__parse_tree_out_inst__STATE_VARIABLE_U_4)
{
  {
    MR_bool parse_tree__parse_tree_out_inst__succeeded;

    switch (parse_tree__parse_tree_out_inst__HeadVar__1_1) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 3:
        {
          void MR_CALL (* parse_tree__parse_tree_out_inst__func_0)(MR_Box, MR_Box, MR_Box, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), parse_tree__parse_tree_out_inst__TypeClassInfo_for_output_34, (MR_Integer) 0)), (MR_Integer) 5)));

          {
            parse_tree__parse_tree_out_inst__func_0(((MR_Box) parse_tree__parse_tree_out_inst__TypeClassInfo_for_output_34), ((MR_Box) ((MR_String) "clobbered")), parse_tree__parse_tree_out_inst__STATE_VARIABLE_U_0_3, parse_tree__parse_tree_out_inst__STATE_VARIABLE_U_4);
          }
        }
        break;
      case (MR_Integer) 4:
        {
          void MR_CALL (* parse_tree__parse_tree_out_inst__func_1)(MR_Box, MR_Box, MR_Box, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), parse_tree__parse_tree_out_inst__TypeClassInfo_for_output_34, (MR_Integer) 0)), (MR_Integer) 5)));

          {
            parse_tree__parse_tree_out_inst__func_1(((MR_Box) parse_tree__parse_tree_out_inst__TypeClassInfo_for_output_34), ((MR_Box) ((MR_String) "mostly_clobbered")), parse_tree__parse_tree_out_inst__STATE_VARIABLE_U_0_3, parse_tree__parse_tree_out_inst__STATE_VARIABLE_U_4);
          }
        }
        break;
      case (MR_Integer) 2:
        {
          void MR_CALL (* parse_tree__parse_tree_out_inst__func_2)(MR_Box, MR_Box, MR_Box, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), parse_tree__parse_tree_out_inst__TypeClassInfo_for_output_34, (MR_Integer) 0)), (MR_Integer) 5)));

          {
            parse_tree__parse_tree_out_inst__func_2(((MR_Box) parse_tree__parse_tree_out_inst__TypeClassInfo_for_output_34), ((MR_Box) ((MR_String) "mostly_unique")), parse_tree__parse_tree_out_inst__STATE_VARIABLE_U_0_3, parse_tree__parse_tree_out_inst__STATE_VARIABLE_U_4);
          }
        }
        break;
      case (MR_Integer) 0:
        {
          void MR_CALL (* parse_tree__parse_tree_out_inst__func_3)(MR_Box, MR_Box, MR_Box, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), parse_tree__parse_tree_out_inst__TypeClassInfo_for_output_34, (MR_Integer) 0)), (MR_Integer) 5)));

          {
            parse_tree__parse_tree_out_inst__func_3(((MR_Box) parse_tree__parse_tree_out_inst__TypeClassInfo_for_output_34), ((MR_Box) (parse_tree__parse_tree_out_inst__SharedString_2)), parse_tree__parse_tree_out_inst__STATE_VARIABLE_U_0_3, parse_tree__parse_tree_out_inst__STATE_VARIABLE_U_4);
          }
        }
        break;
      case (MR_Integer) 1:
        {
          void MR_CALL (* parse_tree__parse_tree_out_inst__func_4)(MR_Box, MR_Box, MR_Box, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), parse_tree__parse_tree_out_inst__TypeClassInfo_for_output_34, (MR_Integer) 0)), (MR_Integer) 5)));

          {
            parse_tree__parse_tree_out_inst__func_4(((MR_Box) parse_tree__parse_tree_out_inst__TypeClassInfo_for_output_34), ((MR_Box) ((MR_String) "unique")), parse_tree__parse_tree_out_inst__STATE_VARIABLE_U_0_3, parse_tree__parse_tree_out_inst__STATE_VARIABLE_U_4);
          }
        }
        break;
    }
  }
}

void MR_CALL 
parse_tree__parse_tree_out_inst__mercury_format_real_comma_3_p_0(
  MR_Word parse_tree__parse_tree_out_inst__TypeClassInfo_for_output_12,
  MR_Word parse_tree__parse_tree_out_inst__Real_4,
  MR_Box parse_tree__parse_tree_out_inst__STATE_VARIABLE_U_0_6,
  MR_Box * parse_tree__parse_tree_out_inst__STATE_VARIABLE_U_7)
{
  {
    MR_bool parse_tree__parse_tree_out_inst__succeeded;

    switch (parse_tree__parse_tree_out_inst__Real_4) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 1:
        {
          void MR_CALL (* parse_tree__parse_tree_out_inst__func_0)(MR_Box, MR_Box, MR_Box, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), parse_tree__parse_tree_out_inst__TypeClassInfo_for_output_12, (MR_Integer) 0)), (MR_Integer) 5)));

          {
            parse_tree__parse_tree_out_inst__func_0(((MR_Box) parse_tree__parse_tree_out_inst__TypeClassInfo_for_output_12), ((MR_Box) ((MR_String) "fake, ")), parse_tree__parse_tree_out_inst__STATE_VARIABLE_U_0_6, parse_tree__parse_tree_out_inst__STATE_VARIABLE_U_7);
          }
        }
        break;
      case (MR_Integer) 0:
        {
          void MR_CALL (* parse_tree__parse_tree_out_inst__func_1)(MR_Box, MR_Box, MR_Box, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), parse_tree__parse_tree_out_inst__TypeClassInfo_for_output_12, (MR_Integer) 0)), (MR_Integer) 5)));

          {
            parse_tree__parse_tree_out_inst__func_1(((MR_Box) parse_tree__parse_tree_out_inst__TypeClassInfo_for_output_12), ((MR_Box) ((MR_String) "real, ")), parse_tree__parse_tree_out_inst__STATE_VARIABLE_U_0_6, parse_tree__parse_tree_out_inst__STATE_VARIABLE_U_7);
          }
        }
        break;
    }
  }
}

void MR_CALL 
parse_tree__parse_tree_out_inst__mercury_format_is_live_comma_3_p_0(
  MR_Word parse_tree__parse_tree_out_inst__TypeClassInfo_for_output_12,
  MR_Word parse_tree__parse_tree_out_inst__IsLive_4,
  MR_Box parse_tree__parse_tree_out_inst__STATE_VARIABLE_U_0_6,
  MR_Box * parse_tree__parse_tree_out_inst__STATE_VARIABLE_U_7)
{
  {
    MR_bool parse_tree__parse_tree_out_inst__succeeded;

    switch (parse_tree__parse_tree_out_inst__IsLive_4) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 1:
        {
          void MR_CALL (* parse_tree__parse_tree_out_inst__func_0)(MR_Box, MR_Box, MR_Box, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), parse_tree__parse_tree_out_inst__TypeClassInfo_for_output_12, (MR_Integer) 0)), (MR_Integer) 5)));

          {
            parse_tree__parse_tree_out_inst__func_0(((MR_Box) parse_tree__parse_tree_out_inst__TypeClassInfo_for_output_12), ((MR_Box) ((MR_String) "dead, ")), parse_tree__parse_tree_out_inst__STATE_VARIABLE_U_0_6, parse_tree__parse_tree_out_inst__STATE_VARIABLE_U_7);
          }
        }
        break;
      case (MR_Integer) 0:
        {
          void MR_CALL (* parse_tree__parse_tree_out_inst__func_1)(MR_Box, MR_Box, MR_Box, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), parse_tree__parse_tree_out_inst__TypeClassInfo_for_output_12, (MR_Integer) 0)), (MR_Integer) 5)));

          {
            parse_tree__parse_tree_out_inst__func_1(((MR_Box) parse_tree__parse_tree_out_inst__TypeClassInfo_for_output_12), ((MR_Box) ((MR_String) "live, ")), parse_tree__parse_tree_out_inst__STATE_VARIABLE_U_0_6, parse_tree__parse_tree_out_inst__STATE_VARIABLE_U_7);
          }
        }
        break;
    }
  }
}

void MR_CALL 
parse_tree__parse_tree_out_inst__mercury_format_any_pred_inst_info_6_p_0(
  MR_Word parse_tree__parse_tree_out_inst__TypeClassInfo_for_output_62,
  MR_Word parse_tree__parse_tree_out_inst__Lang_7,
  MR_Word parse_tree__parse_tree_out_inst__InstVarSet_8,
  MR_Word parse_tree__parse_tree_out_inst__Uniq_9,
  MR_Word parse_tree__parse_tree_out_inst__PredInstInfo_10,
  MR_Box parse_tree__parse_tree_out_inst__STATE_VARIABLE_U_0_23,
  MR_Box * parse_tree__parse_tree_out_inst__STATE_VARIABLE_U_24)
{
  {
    MR_bool parse_tree__parse_tree_out_inst__succeeded;
    MR_Word parse_tree__parse_tree_out_inst__PredOrFunc_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__parse_tree_out_inst__PredInstInfo_10, (MR_Integer) 0)));
    MR_Word parse_tree__parse_tree_out_inst__Modes_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__parse_tree_out_inst__PredInstInfo_10, (MR_Integer) 1)));
    MR_Word parse_tree__parse_tree_out_inst__MaybeArgRegs_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__parse_tree_out_inst__PredInstInfo_10, (MR_Integer) 2)));
    MR_Word parse_tree__parse_tree_out_inst__Det_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__parse_tree_out_inst__PredInstInfo_10, (MR_Integer) 3)));
    MR_Box parse_tree__parse_tree_out_inst__STATE_VARIABLE_U_30_30;
    MR_Box parse_tree__parse_tree_out_inst__STATE_VARIABLE_U_56_56;

    switch (parse_tree__parse_tree_out_inst__Uniq_9) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 3:
      case (MR_Integer) 4:
      case (MR_Integer) 2:
      case (MR_Integer) 1:
        {
          MR_Box parse_tree__parse_tree_out_inst__STATE_VARIABLE_U_26_26;
          MR_Box parse_tree__parse_tree_out_inst__STATE_VARIABLE_U_28_28;
          void MR_CALL (* parse_tree__parse_tree_out_inst__func_0)(MR_Box, MR_Box, MR_Box, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), parse_tree__parse_tree_out_inst__TypeClassInfo_for_output_62, (MR_Integer) 0)), (MR_Integer) 5)));
          void MR_CALL (* parse_tree__parse_tree_out_inst__func_1)(MR_Box, MR_Box, MR_Box, MR_Box *);

          {
            parse_tree__parse_tree_out_inst__func_0(((MR_Box) parse_tree__parse_tree_out_inst__TypeClassInfo_for_output_62), ((MR_Box) ((MR_String) "/* ")), parse_tree__parse_tree_out_inst__STATE_VARIABLE_U_0_23, &parse_tree__parse_tree_out_inst__STATE_VARIABLE_U_26_26);
          }
          {
            parse_tree__parse_tree_out_inst__mercury_format_uniqueness_4_p_0(parse_tree__parse_tree_out_inst__TypeClassInfo_for_output_62, parse_tree__parse_tree_out_inst__Uniq_9, (MR_String) "any", parse_tree__parse_tree_out_inst__STATE_VARIABLE_U_26_26, &parse_tree__parse_tree_out_inst__STATE_VARIABLE_U_28_28);
          }
          parse_tree__parse_tree_out_inst__func_1 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), parse_tree__parse_tree_out_inst__TypeClassInfo_for_output_62, (MR_Integer) 0)), (MR_Integer) 5)));
          {
            parse_tree__parse_tree_out_inst__func_1(((MR_Box) parse_tree__parse_tree_out_inst__TypeClassInfo_for_output_62), ((MR_Box) ((MR_String) " */")), parse_tree__parse_tree_out_inst__STATE_VARIABLE_U_28_28, &parse_tree__parse_tree_out_inst__STATE_VARIABLE_U_30_30);
          }
        }
        break;
      case (MR_Integer) 0:
        parse_tree__parse_tree_out_inst__STATE_VARIABLE_U_30_30 = parse_tree__parse_tree_out_inst__STATE_VARIABLE_U_0_23;
        break;
    }
    switch (parse_tree__parse_tree_out_inst__PredOrFunc_12) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 1:
        {
          MR_Word parse_tree__parse_tree_out_inst__ArgModes_18;
          MR_Word parse_tree__parse_tree_out_inst__RetMode_19;
          MR_Box parse_tree__parse_tree_out_inst__STATE_VARIABLE_U_37_37;
          MR_Box parse_tree__parse_tree_out_inst__STATE_VARIABLE_U_38_38;
          MR_Box parse_tree__parse_tree_out_inst__STATE_VARIABLE_U_40_40;
          MR_Box parse_tree__parse_tree_out_inst__STATE_VARIABLE_U_41_41;
          MR_Box parse_tree__parse_tree_out_inst__conv2_RetMode_19;
          void MR_CALL (* parse_tree__parse_tree_out_inst__func_6)(MR_Box, MR_Box, MR_Box, MR_Box *);
          void MR_CALL (* parse_tree__parse_tree_out_inst__func_7)(MR_Box, MR_Box, MR_Box, MR_Box *);

          {
            parse_tree__prog_util__pred_args_to_func_args_3_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_mode_0, parse_tree__parse_tree_out_inst__Modes_13, &parse_tree__parse_tree_out_inst__ArgModes_18, &parse_tree__parse_tree_out_inst__conv2_RetMode_19);
          }
          parse_tree__parse_tree_out_inst__RetMode_19 = ((MR_Word) parse_tree__parse_tree_out_inst__conv2_RetMode_19);
          if ((parse_tree__parse_tree_out_inst__Modes_13 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
            {
              void MR_CALL (* parse_tree__parse_tree_out_inst__func_3)(MR_Box, MR_Box, MR_Box, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), parse_tree__parse_tree_out_inst__TypeClassInfo_for_output_62, (MR_Integer) 0)), (MR_Integer) 5)));

              {
                parse_tree__parse_tree_out_inst__func_3(((MR_Box) parse_tree__parse_tree_out_inst__TypeClassInfo_for_output_62), ((MR_Box) ((MR_String) "(any_func = ")), parse_tree__parse_tree_out_inst__STATE_VARIABLE_U_30_30, &parse_tree__parse_tree_out_inst__STATE_VARIABLE_U_37_37);
              }
            }
          else
            {
              MR_Box parse_tree__parse_tree_out_inst__STATE_VARIABLE_U_32_32;
              MR_Box parse_tree__parse_tree_out_inst__STATE_VARIABLE_U_33_33;
              void MR_CALL (* parse_tree__parse_tree_out_inst__func_4)(MR_Box, MR_Box, MR_Box, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), parse_tree__parse_tree_out_inst__TypeClassInfo_for_output_62, (MR_Integer) 0)), (MR_Integer) 5)));
              void MR_CALL (* parse_tree__parse_tree_out_inst__func_5)(MR_Box, MR_Box, MR_Box, MR_Box *);

              {
                parse_tree__parse_tree_out_inst__func_4(((MR_Box) parse_tree__parse_tree_out_inst__TypeClassInfo_for_output_62), ((MR_Box) ((MR_String) "(any_func(")), parse_tree__parse_tree_out_inst__STATE_VARIABLE_U_30_30, &parse_tree__parse_tree_out_inst__STATE_VARIABLE_U_32_32);
              }
              {
                parse_tree__parse_tree_out_inst__mercury_format_mode_list_5_p_0(parse_tree__parse_tree_out_inst__TypeClassInfo_for_output_62, parse_tree__parse_tree_out_inst__Lang_7, parse_tree__parse_tree_out_inst__InstVarSet_8, parse_tree__parse_tree_out_inst__ArgModes_18, parse_tree__parse_tree_out_inst__STATE_VARIABLE_U_32_32, &parse_tree__parse_tree_out_inst__STATE_VARIABLE_U_33_33);
              }
              parse_tree__parse_tree_out_inst__func_5 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), parse_tree__parse_tree_out_inst__TypeClassInfo_for_output_62, (MR_Integer) 0)), (MR_Integer) 5)));
              {
                parse_tree__parse_tree_out_inst__func_5(((MR_Box) parse_tree__parse_tree_out_inst__TypeClassInfo_for_output_62), ((MR_Box) ((MR_String) ") = ")), parse_tree__parse_tree_out_inst__STATE_VARIABLE_U_33_33, &parse_tree__parse_tree_out_inst__STATE_VARIABLE_U_37_37);
              }
            }
          {
            parse_tree__parse_tree_out_inst__mercury_format_mode_5_p_0(parse_tree__parse_tree_out_inst__TypeClassInfo_for_output_62, parse_tree__parse_tree_out_inst__Lang_7, parse_tree__parse_tree_out_inst__InstVarSet_8, parse_tree__parse_tree_out_inst__RetMode_19, parse_tree__parse_tree_out_inst__STATE_VARIABLE_U_37_37, &parse_tree__parse_tree_out_inst__STATE_VARIABLE_U_38_38);
          }
          parse_tree__parse_tree_out_inst__func_6 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), parse_tree__parse_tree_out_inst__TypeClassInfo_for_output_62, (MR_Integer) 0)), (MR_Integer) 5)));
          {
            parse_tree__parse_tree_out_inst__func_6(((MR_Box) parse_tree__parse_tree_out_inst__TypeClassInfo_for_output_62), ((MR_Box) ((MR_String) " is ")), parse_tree__parse_tree_out_inst__STATE_VARIABLE_U_38_38, &parse_tree__parse_tree_out_inst__STATE_VARIABLE_U_40_40);
          }
          {
            parse_tree__mercury_to_mercury__mercury_format_det_3_p_0(parse_tree__parse_tree_out_inst__TypeClassInfo_for_output_62, parse_tree__parse_tree_out_inst__Det_15, parse_tree__parse_tree_out_inst__STATE_VARIABLE_U_40_40, &parse_tree__parse_tree_out_inst__STATE_VARIABLE_U_41_41);
          }
          parse_tree__parse_tree_out_inst__func_7 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), parse_tree__parse_tree_out_inst__TypeClassInfo_for_output_62, (MR_Integer) 0)), (MR_Integer) 5)));
          {
            parse_tree__parse_tree_out_inst__func_7(((MR_Box) parse_tree__parse_tree_out_inst__TypeClassInfo_for_output_62), ((MR_Box) ((MR_String) ")")), parse_tree__parse_tree_out_inst__STATE_VARIABLE_U_41_41, &parse_tree__parse_tree_out_inst__STATE_VARIABLE_U_56_56);
          }
        }
        break;
      case (MR_Integer) 0:
        if ((parse_tree__parse_tree_out_inst__Modes_13 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
          {
            MR_Box parse_tree__parse_tree_out_inst__STATE_VARIABLE_U_53_53;
            MR_Box parse_tree__parse_tree_out_inst__STATE_VARIABLE_U_54_54;
            void MR_CALL (* parse_tree__parse_tree_out_inst__func_8)(MR_Box, MR_Box, MR_Box, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), parse_tree__parse_tree_out_inst__TypeClassInfo_for_output_62, (MR_Integer) 0)), (MR_Integer) 5)));
            void MR_CALL (* parse_tree__parse_tree_out_inst__func_9)(MR_Box, MR_Box, MR_Box, MR_Box *);

            {
              parse_tree__parse_tree_out_inst__func_8(((MR_Box) parse_tree__parse_tree_out_inst__TypeClassInfo_for_output_62), ((MR_Box) ((MR_String) "(any_pred is ")), parse_tree__parse_tree_out_inst__STATE_VARIABLE_U_30_30, &parse_tree__parse_tree_out_inst__STATE_VARIABLE_U_53_53);
            }
            {
              parse_tree__mercury_to_mercury__mercury_format_det_3_p_0(parse_tree__parse_tree_out_inst__TypeClassInfo_for_output_62, parse_tree__parse_tree_out_inst__Det_15, parse_tree__parse_tree_out_inst__STATE_VARIABLE_U_53_53, &parse_tree__parse_tree_out_inst__STATE_VARIABLE_U_54_54);
            }
            parse_tree__parse_tree_out_inst__func_9 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), parse_tree__parse_tree_out_inst__TypeClassInfo_for_output_62, (MR_Integer) 0)), (MR_Integer) 5)));
            {
              parse_tree__parse_tree_out_inst__func_9(((MR_Box) parse_tree__parse_tree_out_inst__TypeClassInfo_for_output_62), ((MR_Box) ((MR_String) ")")), parse_tree__parse_tree_out_inst__STATE_VARIABLE_U_54_54, &parse_tree__parse_tree_out_inst__STATE_VARIABLE_U_56_56);
            }
          }
        else
          {
            MR_Box parse_tree__parse_tree_out_inst__STATE_VARIABLE_U_45_45;
            MR_Box parse_tree__parse_tree_out_inst__STATE_VARIABLE_U_46_46;
            MR_Box parse_tree__parse_tree_out_inst__STATE_VARIABLE_U_48_48;
            MR_Box parse_tree__parse_tree_out_inst__STATE_VARIABLE_U_49_49;
            MR_Word parse_tree__parse_tree_out_inst__Mode_71;
            MR_Word parse_tree__parse_tree_out_inst__Modes_72;
            MR_Box parse_tree__parse_tree_out_inst__STATE_VARIABLE_U_20_78;
            void MR_CALL (* parse_tree__parse_tree_out_inst__func_10)(MR_Box, MR_Box, MR_Box, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), parse_tree__parse_tree_out_inst__TypeClassInfo_for_output_62, (MR_Integer) 0)), (MR_Integer) 5)));
            void MR_CALL (* parse_tree__parse_tree_out_inst__func_12)(MR_Box, MR_Box, MR_Box, MR_Box *);
            void MR_CALL (* parse_tree__parse_tree_out_inst__func_13)(MR_Box, MR_Box, MR_Box, MR_Box *);

            {
              parse_tree__parse_tree_out_inst__func_10(((MR_Box) parse_tree__parse_tree_out_inst__TypeClassInfo_for_output_62), ((MR_Box) ((MR_String) "(any_pred(")), parse_tree__parse_tree_out_inst__STATE_VARIABLE_U_30_30, &parse_tree__parse_tree_out_inst__STATE_VARIABLE_U_45_45);
            }
            parse_tree__parse_tree_out_inst__Mode_71 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__parse_tree_out_inst__Modes_13, (MR_Integer) 0)));
            parse_tree__parse_tree_out_inst__Modes_72 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__parse_tree_out_inst__Modes_13, (MR_Integer) 1)));
            {
              parse_tree__parse_tree_out_inst__mercury_format_mode_5_p_0(parse_tree__parse_tree_out_inst__TypeClassInfo_for_output_62, parse_tree__parse_tree_out_inst__Lang_7, parse_tree__parse_tree_out_inst__InstVarSet_8, parse_tree__parse_tree_out_inst__Mode_71, parse_tree__parse_tree_out_inst__STATE_VARIABLE_U_45_45, &parse_tree__parse_tree_out_inst__STATE_VARIABLE_U_20_78);
            }
            if ((parse_tree__parse_tree_out_inst__Modes_72 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
              parse_tree__parse_tree_out_inst__STATE_VARIABLE_U_46_46 = parse_tree__parse_tree_out_inst__STATE_VARIABLE_U_20_78;
            else
              {
                MR_Box parse_tree__parse_tree_out_inst__STATE_VARIABLE_U_22_80;
                void MR_CALL (* parse_tree__parse_tree_out_inst__func_11)(MR_Box, MR_Box, MR_Box, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), parse_tree__parse_tree_out_inst__TypeClassInfo_for_output_62, (MR_Integer) 0)), (MR_Integer) 5)));

                {
                  parse_tree__parse_tree_out_inst__func_11(((MR_Box) parse_tree__parse_tree_out_inst__TypeClassInfo_for_output_62), ((MR_Box) ((MR_String) ", ")), parse_tree__parse_tree_out_inst__STATE_VARIABLE_U_20_78, &parse_tree__parse_tree_out_inst__STATE_VARIABLE_U_22_80);
                }
                {
                  parse_tree__parse_tree_out_inst__mercury_format_mode_list_5_p_0(parse_tree__parse_tree_out_inst__TypeClassInfo_for_output_62, parse_tree__parse_tree_out_inst__Lang_7, parse_tree__parse_tree_out_inst__InstVarSet_8, parse_tree__parse_tree_out_inst__Modes_72, parse_tree__parse_tree_out_inst__STATE_VARIABLE_U_22_80, &parse_tree__parse_tree_out_inst__STATE_VARIABLE_U_46_46);
                }
              }
            parse_tree__parse_tree_out_inst__func_12 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), parse_tree__parse_tree_out_inst__TypeClassInfo_for_output_62, (MR_Integer) 0)), (MR_Integer) 5)));
            {
              parse_tree__parse_tree_out_inst__func_12(((MR_Box) parse_tree__parse_tree_out_inst__TypeClassInfo_for_output_62), ((MR_Box) ((MR_String) ") is ")), parse_tree__parse_tree_out_inst__STATE_VARIABLE_U_46_46, &parse_tree__parse_tree_out_inst__STATE_VARIABLE_U_48_48);
            }
            {
              parse_tree__mercury_to_mercury__mercury_format_det_3_p_0(parse_tree__parse_tree_out_inst__TypeClassInfo_for_output_62, parse_tree__parse_tree_out_inst__Det_15, parse_tree__parse_tree_out_inst__STATE_VARIABLE_U_48_48, &parse_tree__parse_tree_out_inst__STATE_VARIABLE_U_49_49);
            }
            parse_tree__parse_tree_out_inst__func_13 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), parse_tree__parse_tree_out_inst__TypeClassInfo_for_output_62, (MR_Integer) 0)), (MR_Integer) 5)));
            {
              parse_tree__parse_tree_out_inst__func_13(((MR_Box) parse_tree__parse_tree_out_inst__TypeClassInfo_for_output_62), ((MR_Box) ((MR_String) ")")), parse_tree__parse_tree_out_inst__STATE_VARIABLE_U_49_49, &parse_tree__parse_tree_out_inst__STATE_VARIABLE_U_56_56);
            }
          }
        break;
    }
    if ((parse_tree__parse_tree_out_inst__MaybeArgRegs_14 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
      *parse_tree__parse_tree_out_inst__STATE_VARIABLE_U_24 = parse_tree__parse_tree_out_inst__STATE_VARIABLE_U_56_56;
    else
      {
        MR_Word parse_tree__parse_tree_out_inst__ArgRegs_22 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__parse_tree_out_inst__MaybeArgRegs_14, (MR_Integer) 0)));
        MR_Box parse_tree__parse_tree_out_inst__STATE_VARIABLE_U_58_58;
        MR_Box parse_tree__parse_tree_out_inst__STATE_VARIABLE_U_59_59;
        void MR_CALL (* parse_tree__parse_tree_out_inst__func_14)(MR_Box, MR_Box, MR_Box, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), parse_tree__parse_tree_out_inst__TypeClassInfo_for_output_62, (MR_Integer) 0)), (MR_Integer) 5)));
        void MR_CALL (* parse_tree__parse_tree_out_inst__func_15)(MR_Box, MR_Box, MR_Box, MR_Box *);

        {
          parse_tree__parse_tree_out_inst__func_14(((MR_Box) parse_tree__parse_tree_out_inst__TypeClassInfo_for_output_62), ((MR_Box) ((MR_String) " /* arg regs: [")), parse_tree__parse_tree_out_inst__STATE_VARIABLE_U_56_56, &parse_tree__parse_tree_out_inst__STATE_VARIABLE_U_58_58);
        }
        {
          parse_tree__parse_tree_out_inst__mercury_format_arg_reg_list_3_p_0(parse_tree__parse_tree_out_inst__TypeClassInfo_for_output_62, parse_tree__parse_tree_out_inst__ArgRegs_22, parse_tree__parse_tree_out_inst__STATE_VARIABLE_U_58_58, &parse_tree__parse_tree_out_inst__STATE_VARIABLE_U_59_59);
        }
        parse_tree__parse_tree_out_inst__func_15 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), parse_tree__parse_tree_out_inst__TypeClassInfo_for_output_62, (MR_Integer) 0)), (MR_Integer) 5)));
        {
          parse_tree__parse_tree_out_inst__func_15(((MR_Box) parse_tree__parse_tree_out_inst__TypeClassInfo_for_output_62), ((MR_Box) ((MR_String) "] */")), parse_tree__parse_tree_out_inst__STATE_VARIABLE_U_59_59, parse_tree__parse_tree_out_inst__STATE_VARIABLE_U_24);
        }
      }
  }
}

void MR_CALL 
parse_tree__parse_tree_out_inst__mercury_format_ground_pred_inst_info_6_p_0(
  MR_Word parse_tree__parse_tree_out_inst__TypeClassInfo_for_output_62,
  MR_Word parse_tree__parse_tree_out_inst__Lang_7,
  MR_Word parse_tree__parse_tree_out_inst__InstVarSet_8,
  MR_Word parse_tree__parse_tree_out_inst__Uniq_9,
  MR_Word parse_tree__parse_tree_out_inst__PredInstInfo_10,
  MR_Box parse_tree__parse_tree_out_inst__STATE_VARIABLE_U_0_23,
  MR_Box * parse_tree__parse_tree_out_inst__STATE_VARIABLE_U_24)
{
  {
    MR_bool parse_tree__parse_tree_out_inst__succeeded;
    MR_Word parse_tree__parse_tree_out_inst__PredOrFunc_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__parse_tree_out_inst__PredInstInfo_10, (MR_Integer) 0)));
    MR_Word parse_tree__parse_tree_out_inst__Modes_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__parse_tree_out_inst__PredInstInfo_10, (MR_Integer) 1)));
    MR_Word parse_tree__parse_tree_out_inst__MaybeArgRegs_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__parse_tree_out_inst__PredInstInfo_10, (MR_Integer) 2)));
    MR_Word parse_tree__parse_tree_out_inst__Det_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__parse_tree_out_inst__PredInstInfo_10, (MR_Integer) 3)));
    MR_Box parse_tree__parse_tree_out_inst__STATE_VARIABLE_U_30_30;
    MR_Box parse_tree__parse_tree_out_inst__STATE_VARIABLE_U_56_56;

    switch (parse_tree__parse_tree_out_inst__Uniq_9) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 3:
      case (MR_Integer) 4:
      case (MR_Integer) 2:
      case (MR_Integer) 1:
        {
          MR_Box parse_tree__parse_tree_out_inst__STATE_VARIABLE_U_26_26;
          MR_Box parse_tree__parse_tree_out_inst__STATE_VARIABLE_U_28_28;
          void MR_CALL (* parse_tree__parse_tree_out_inst__func_0)(MR_Box, MR_Box, MR_Box, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), parse_tree__parse_tree_out_inst__TypeClassInfo_for_output_62, (MR_Integer) 0)), (MR_Integer) 5)));
          void MR_CALL (* parse_tree__parse_tree_out_inst__func_1)(MR_Box, MR_Box, MR_Box, MR_Box *);

          {
            parse_tree__parse_tree_out_inst__func_0(((MR_Box) parse_tree__parse_tree_out_inst__TypeClassInfo_for_output_62), ((MR_Box) ((MR_String) "/* ")), parse_tree__parse_tree_out_inst__STATE_VARIABLE_U_0_23, &parse_tree__parse_tree_out_inst__STATE_VARIABLE_U_26_26);
          }
          {
            parse_tree__parse_tree_out_inst__mercury_format_uniqueness_4_p_0(parse_tree__parse_tree_out_inst__TypeClassInfo_for_output_62, parse_tree__parse_tree_out_inst__Uniq_9, (MR_String) "ground", parse_tree__parse_tree_out_inst__STATE_VARIABLE_U_26_26, &parse_tree__parse_tree_out_inst__STATE_VARIABLE_U_28_28);
          }
          parse_tree__parse_tree_out_inst__func_1 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), parse_tree__parse_tree_out_inst__TypeClassInfo_for_output_62, (MR_Integer) 0)), (MR_Integer) 5)));
          {
            parse_tree__parse_tree_out_inst__func_1(((MR_Box) parse_tree__parse_tree_out_inst__TypeClassInfo_for_output_62), ((MR_Box) ((MR_String) " */")), parse_tree__parse_tree_out_inst__STATE_VARIABLE_U_28_28, &parse_tree__parse_tree_out_inst__STATE_VARIABLE_U_30_30);
          }
        }
        break;
      case (MR_Integer) 0:
        parse_tree__parse_tree_out_inst__STATE_VARIABLE_U_30_30 = parse_tree__parse_tree_out_inst__STATE_VARIABLE_U_0_23;
        break;
    }
    switch (parse_tree__parse_tree_out_inst__PredOrFunc_12) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 1:
        {
          MR_Word parse_tree__parse_tree_out_inst__ArgModes_18;
          MR_Word parse_tree__parse_tree_out_inst__RetMode_19;
          MR_Box parse_tree__parse_tree_out_inst__STATE_VARIABLE_U_37_37;
          MR_Box parse_tree__parse_tree_out_inst__STATE_VARIABLE_U_38_38;
          MR_Box parse_tree__parse_tree_out_inst__STATE_VARIABLE_U_40_40;
          MR_Box parse_tree__parse_tree_out_inst__STATE_VARIABLE_U_41_41;
          MR_Box parse_tree__parse_tree_out_inst__conv2_RetMode_19;
          void MR_CALL (* parse_tree__parse_tree_out_inst__func_7)(MR_Box, MR_Box, MR_Box, MR_Box *);
          void MR_CALL (* parse_tree__parse_tree_out_inst__func_8)(MR_Box, MR_Box, MR_Box, MR_Box *);

          {
            parse_tree__prog_util__pred_args_to_func_args_3_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_mode_0, parse_tree__parse_tree_out_inst__Modes_13, &parse_tree__parse_tree_out_inst__ArgModes_18, &parse_tree__parse_tree_out_inst__conv2_RetMode_19);
          }
          parse_tree__parse_tree_out_inst__RetMode_19 = ((MR_Word) parse_tree__parse_tree_out_inst__conv2_RetMode_19);
          if ((parse_tree__parse_tree_out_inst__ArgModes_18 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
            {
              void MR_CALL (* parse_tree__parse_tree_out_inst__func_3)(MR_Box, MR_Box, MR_Box, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), parse_tree__parse_tree_out_inst__TypeClassInfo_for_output_62, (MR_Integer) 0)), (MR_Integer) 5)));

              {
                parse_tree__parse_tree_out_inst__func_3(((MR_Box) parse_tree__parse_tree_out_inst__TypeClassInfo_for_output_62), ((MR_Box) ((MR_String) "((func) = ")), parse_tree__parse_tree_out_inst__STATE_VARIABLE_U_30_30, &parse_tree__parse_tree_out_inst__STATE_VARIABLE_U_37_37);
              }
            }
          else
            {
              MR_Box parse_tree__parse_tree_out_inst__STATE_VARIABLE_U_32_32;
              MR_Box parse_tree__parse_tree_out_inst__STATE_VARIABLE_U_33_33;
              MR_Word parse_tree__parse_tree_out_inst__Mode_71;
              MR_Word parse_tree__parse_tree_out_inst__Modes_72;
              MR_Box parse_tree__parse_tree_out_inst__STATE_VARIABLE_U_20_78;
              void MR_CALL (* parse_tree__parse_tree_out_inst__func_4)(MR_Box, MR_Box, MR_Box, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), parse_tree__parse_tree_out_inst__TypeClassInfo_for_output_62, (MR_Integer) 0)), (MR_Integer) 5)));
              void MR_CALL (* parse_tree__parse_tree_out_inst__func_6)(MR_Box, MR_Box, MR_Box, MR_Box *);

              {
                parse_tree__parse_tree_out_inst__func_4(((MR_Box) parse_tree__parse_tree_out_inst__TypeClassInfo_for_output_62), ((MR_Box) ((MR_String) "(func(")), parse_tree__parse_tree_out_inst__STATE_VARIABLE_U_30_30, &parse_tree__parse_tree_out_inst__STATE_VARIABLE_U_32_32);
              }
              parse_tree__parse_tree_out_inst__Mode_71 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__parse_tree_out_inst__ArgModes_18, (MR_Integer) 0)));
              parse_tree__parse_tree_out_inst__Modes_72 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__parse_tree_out_inst__ArgModes_18, (MR_Integer) 1)));
              {
                parse_tree__parse_tree_out_inst__mercury_format_mode_5_p_0(parse_tree__parse_tree_out_inst__TypeClassInfo_for_output_62, parse_tree__parse_tree_out_inst__Lang_7, parse_tree__parse_tree_out_inst__InstVarSet_8, parse_tree__parse_tree_out_inst__Mode_71, parse_tree__parse_tree_out_inst__STATE_VARIABLE_U_32_32, &parse_tree__parse_tree_out_inst__STATE_VARIABLE_U_20_78);
              }
              if ((parse_tree__parse_tree_out_inst__Modes_72 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
                parse_tree__parse_tree_out_inst__STATE_VARIABLE_U_33_33 = parse_tree__parse_tree_out_inst__STATE_VARIABLE_U_20_78;
              else
                {
                  MR_Box parse_tree__parse_tree_out_inst__STATE_VARIABLE_U_22_80;
                  void MR_CALL (* parse_tree__parse_tree_out_inst__func_5)(MR_Box, MR_Box, MR_Box, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), parse_tree__parse_tree_out_inst__TypeClassInfo_for_output_62, (MR_Integer) 0)), (MR_Integer) 5)));

                  {
                    parse_tree__parse_tree_out_inst__func_5(((MR_Box) parse_tree__parse_tree_out_inst__TypeClassInfo_for_output_62), ((MR_Box) ((MR_String) ", ")), parse_tree__parse_tree_out_inst__STATE_VARIABLE_U_20_78, &parse_tree__parse_tree_out_inst__STATE_VARIABLE_U_22_80);
                  }
                  {
                    parse_tree__parse_tree_out_inst__mercury_format_mode_list_5_p_0(parse_tree__parse_tree_out_inst__TypeClassInfo_for_output_62, parse_tree__parse_tree_out_inst__Lang_7, parse_tree__parse_tree_out_inst__InstVarSet_8, parse_tree__parse_tree_out_inst__Modes_72, parse_tree__parse_tree_out_inst__STATE_VARIABLE_U_22_80, &parse_tree__parse_tree_out_inst__STATE_VARIABLE_U_33_33);
                  }
                }
              parse_tree__parse_tree_out_inst__func_6 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), parse_tree__parse_tree_out_inst__TypeClassInfo_for_output_62, (MR_Integer) 0)), (MR_Integer) 5)));
              {
                parse_tree__parse_tree_out_inst__func_6(((MR_Box) parse_tree__parse_tree_out_inst__TypeClassInfo_for_output_62), ((MR_Box) ((MR_String) ") = ")), parse_tree__parse_tree_out_inst__STATE_VARIABLE_U_33_33, &parse_tree__parse_tree_out_inst__STATE_VARIABLE_U_37_37);
              }
            }
          {
            parse_tree__parse_tree_out_inst__mercury_format_mode_5_p_0(parse_tree__parse_tree_out_inst__TypeClassInfo_for_output_62, parse_tree__parse_tree_out_inst__Lang_7, parse_tree__parse_tree_out_inst__InstVarSet_8, parse_tree__parse_tree_out_inst__RetMode_19, parse_tree__parse_tree_out_inst__STATE_VARIABLE_U_37_37, &parse_tree__parse_tree_out_inst__STATE_VARIABLE_U_38_38);
          }
          parse_tree__parse_tree_out_inst__func_7 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), parse_tree__parse_tree_out_inst__TypeClassInfo_for_output_62, (MR_Integer) 0)), (MR_Integer) 5)));
          {
            parse_tree__parse_tree_out_inst__func_7(((MR_Box) parse_tree__parse_tree_out_inst__TypeClassInfo_for_output_62), ((MR_Box) ((MR_String) " is ")), parse_tree__parse_tree_out_inst__STATE_VARIABLE_U_38_38, &parse_tree__parse_tree_out_inst__STATE_VARIABLE_U_40_40);
          }
          {
            parse_tree__mercury_to_mercury__mercury_format_det_3_p_0(parse_tree__parse_tree_out_inst__TypeClassInfo_for_output_62, parse_tree__parse_tree_out_inst__Det_15, parse_tree__parse_tree_out_inst__STATE_VARIABLE_U_40_40, &parse_tree__parse_tree_out_inst__STATE_VARIABLE_U_41_41);
          }
          parse_tree__parse_tree_out_inst__func_8 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), parse_tree__parse_tree_out_inst__TypeClassInfo_for_output_62, (MR_Integer) 0)), (MR_Integer) 5)));
          {
            parse_tree__parse_tree_out_inst__func_8(((MR_Box) parse_tree__parse_tree_out_inst__TypeClassInfo_for_output_62), ((MR_Box) ((MR_String) ")")), parse_tree__parse_tree_out_inst__STATE_VARIABLE_U_41_41, &parse_tree__parse_tree_out_inst__STATE_VARIABLE_U_56_56);
          }
        }
        break;
      case (MR_Integer) 0:
        if ((parse_tree__parse_tree_out_inst__Modes_13 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
          {
            MR_Box parse_tree__parse_tree_out_inst__STATE_VARIABLE_U_53_53;
            MR_Box parse_tree__parse_tree_out_inst__STATE_VARIABLE_U_54_54;
            void MR_CALL (* parse_tree__parse_tree_out_inst__func_9)(MR_Box, MR_Box, MR_Box, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), parse_tree__parse_tree_out_inst__TypeClassInfo_for_output_62, (MR_Integer) 0)), (MR_Integer) 5)));
            void MR_CALL (* parse_tree__parse_tree_out_inst__func_10)(MR_Box, MR_Box, MR_Box, MR_Box *);

            {
              parse_tree__parse_tree_out_inst__func_9(((MR_Box) parse_tree__parse_tree_out_inst__TypeClassInfo_for_output_62), ((MR_Box) ((MR_String) "((pred) is ")), parse_tree__parse_tree_out_inst__STATE_VARIABLE_U_30_30, &parse_tree__parse_tree_out_inst__STATE_VARIABLE_U_53_53);
            }
            {
              parse_tree__mercury_to_mercury__mercury_format_det_3_p_0(parse_tree__parse_tree_out_inst__TypeClassInfo_for_output_62, parse_tree__parse_tree_out_inst__Det_15, parse_tree__parse_tree_out_inst__STATE_VARIABLE_U_53_53, &parse_tree__parse_tree_out_inst__STATE_VARIABLE_U_54_54);
            }
            parse_tree__parse_tree_out_inst__func_10 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), parse_tree__parse_tree_out_inst__TypeClassInfo_for_output_62, (MR_Integer) 0)), (MR_Integer) 5)));
            {
              parse_tree__parse_tree_out_inst__func_10(((MR_Box) parse_tree__parse_tree_out_inst__TypeClassInfo_for_output_62), ((MR_Box) ((MR_String) ")")), parse_tree__parse_tree_out_inst__STATE_VARIABLE_U_54_54, &parse_tree__parse_tree_out_inst__STATE_VARIABLE_U_56_56);
            }
          }
        else
          {
            MR_Box parse_tree__parse_tree_out_inst__STATE_VARIABLE_U_45_45;
            MR_Box parse_tree__parse_tree_out_inst__STATE_VARIABLE_U_46_46;
            MR_Box parse_tree__parse_tree_out_inst__STATE_VARIABLE_U_48_48;
            MR_Box parse_tree__parse_tree_out_inst__STATE_VARIABLE_U_49_49;
            MR_Word parse_tree__parse_tree_out_inst__Mode_89;
            MR_Word parse_tree__parse_tree_out_inst__Modes_90;
            MR_Box parse_tree__parse_tree_out_inst__STATE_VARIABLE_U_20_96;
            void MR_CALL (* parse_tree__parse_tree_out_inst__func_11)(MR_Box, MR_Box, MR_Box, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), parse_tree__parse_tree_out_inst__TypeClassInfo_for_output_62, (MR_Integer) 0)), (MR_Integer) 5)));
            void MR_CALL (* parse_tree__parse_tree_out_inst__func_13)(MR_Box, MR_Box, MR_Box, MR_Box *);
            void MR_CALL (* parse_tree__parse_tree_out_inst__func_14)(MR_Box, MR_Box, MR_Box, MR_Box *);

            {
              parse_tree__parse_tree_out_inst__func_11(((MR_Box) parse_tree__parse_tree_out_inst__TypeClassInfo_for_output_62), ((MR_Box) ((MR_String) "(pred(")), parse_tree__parse_tree_out_inst__STATE_VARIABLE_U_30_30, &parse_tree__parse_tree_out_inst__STATE_VARIABLE_U_45_45);
            }
            parse_tree__parse_tree_out_inst__Mode_89 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__parse_tree_out_inst__Modes_13, (MR_Integer) 0)));
            parse_tree__parse_tree_out_inst__Modes_90 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__parse_tree_out_inst__Modes_13, (MR_Integer) 1)));
            {
              parse_tree__parse_tree_out_inst__mercury_format_mode_5_p_0(parse_tree__parse_tree_out_inst__TypeClassInfo_for_output_62, parse_tree__parse_tree_out_inst__Lang_7, parse_tree__parse_tree_out_inst__InstVarSet_8, parse_tree__parse_tree_out_inst__Mode_89, parse_tree__parse_tree_out_inst__STATE_VARIABLE_U_45_45, &parse_tree__parse_tree_out_inst__STATE_VARIABLE_U_20_96);
            }
            if ((parse_tree__parse_tree_out_inst__Modes_90 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
              parse_tree__parse_tree_out_inst__STATE_VARIABLE_U_46_46 = parse_tree__parse_tree_out_inst__STATE_VARIABLE_U_20_96;
            else
              {
                MR_Box parse_tree__parse_tree_out_inst__STATE_VARIABLE_U_22_98;
                void MR_CALL (* parse_tree__parse_tree_out_inst__func_12)(MR_Box, MR_Box, MR_Box, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), parse_tree__parse_tree_out_inst__TypeClassInfo_for_output_62, (MR_Integer) 0)), (MR_Integer) 5)));

                {
                  parse_tree__parse_tree_out_inst__func_12(((MR_Box) parse_tree__parse_tree_out_inst__TypeClassInfo_for_output_62), ((MR_Box) ((MR_String) ", ")), parse_tree__parse_tree_out_inst__STATE_VARIABLE_U_20_96, &parse_tree__parse_tree_out_inst__STATE_VARIABLE_U_22_98);
                }
                {
                  parse_tree__parse_tree_out_inst__mercury_format_mode_list_5_p_0(parse_tree__parse_tree_out_inst__TypeClassInfo_for_output_62, parse_tree__parse_tree_out_inst__Lang_7, parse_tree__parse_tree_out_inst__InstVarSet_8, parse_tree__parse_tree_out_inst__Modes_90, parse_tree__parse_tree_out_inst__STATE_VARIABLE_U_22_98, &parse_tree__parse_tree_out_inst__STATE_VARIABLE_U_46_46);
                }
              }
            parse_tree__parse_tree_out_inst__func_13 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), parse_tree__parse_tree_out_inst__TypeClassInfo_for_output_62, (MR_Integer) 0)), (MR_Integer) 5)));
            {
              parse_tree__parse_tree_out_inst__func_13(((MR_Box) parse_tree__parse_tree_out_inst__TypeClassInfo_for_output_62), ((MR_Box) ((MR_String) ") is ")), parse_tree__parse_tree_out_inst__STATE_VARIABLE_U_46_46, &parse_tree__parse_tree_out_inst__STATE_VARIABLE_U_48_48);
            }
            {
              parse_tree__mercury_to_mercury__mercury_format_det_3_p_0(parse_tree__parse_tree_out_inst__TypeClassInfo_for_output_62, parse_tree__parse_tree_out_inst__Det_15, parse_tree__parse_tree_out_inst__STATE_VARIABLE_U_48_48, &parse_tree__parse_tree_out_inst__STATE_VARIABLE_U_49_49);
            }
            parse_tree__parse_tree_out_inst__func_14 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), parse_tree__parse_tree_out_inst__TypeClassInfo_for_output_62, (MR_Integer) 0)), (MR_Integer) 5)));
            {
              parse_tree__parse_tree_out_inst__func_14(((MR_Box) parse_tree__parse_tree_out_inst__TypeClassInfo_for_output_62), ((MR_Box) ((MR_String) ")")), parse_tree__parse_tree_out_inst__STATE_VARIABLE_U_49_49, &parse_tree__parse_tree_out_inst__STATE_VARIABLE_U_56_56);
            }
          }
        break;
    }
    if ((parse_tree__parse_tree_out_inst__MaybeArgRegs_14 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
      *parse_tree__parse_tree_out_inst__STATE_VARIABLE_U_24 = parse_tree__parse_tree_out_inst__STATE_VARIABLE_U_56_56;
    else
      {
        MR_Word parse_tree__parse_tree_out_inst__ArgRegs_22 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__parse_tree_out_inst__MaybeArgRegs_14, (MR_Integer) 0)));
        MR_Box parse_tree__parse_tree_out_inst__STATE_VARIABLE_U_58_58;
        MR_Box parse_tree__parse_tree_out_inst__STATE_VARIABLE_U_59_59;
        void MR_CALL (* parse_tree__parse_tree_out_inst__func_15)(MR_Box, MR_Box, MR_Box, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), parse_tree__parse_tree_out_inst__TypeClassInfo_for_output_62, (MR_Integer) 0)), (MR_Integer) 5)));
        void MR_CALL (* parse_tree__parse_tree_out_inst__func_16)(MR_Box, MR_Box, MR_Box, MR_Box *);

        {
          parse_tree__parse_tree_out_inst__func_15(((MR_Box) parse_tree__parse_tree_out_inst__TypeClassInfo_for_output_62), ((MR_Box) ((MR_String) " /* arg regs: [")), parse_tree__parse_tree_out_inst__STATE_VARIABLE_U_56_56, &parse_tree__parse_tree_out_inst__STATE_VARIABLE_U_58_58);
        }
        {
          parse_tree__parse_tree_out_inst__mercury_format_arg_reg_list_3_p_0(parse_tree__parse_tree_out_inst__TypeClassInfo_for_output_62, parse_tree__parse_tree_out_inst__ArgRegs_22, parse_tree__parse_tree_out_inst__STATE_VARIABLE_U_58_58, &parse_tree__parse_tree_out_inst__STATE_VARIABLE_U_59_59);
        }
        parse_tree__parse_tree_out_inst__func_16 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), parse_tree__parse_tree_out_inst__TypeClassInfo_for_output_62, (MR_Integer) 0)), (MR_Integer) 5)));
        {
          parse_tree__parse_tree_out_inst__func_16(((MR_Box) parse_tree__parse_tree_out_inst__TypeClassInfo_for_output_62), ((MR_Box) ((MR_String) "] */")), parse_tree__parse_tree_out_inst__STATE_VARIABLE_U_59_59, parse_tree__parse_tree_out_inst__STATE_VARIABLE_U_24);
        }
      }
  }
}

void MR_CALL 
parse_tree__parse_tree_out_inst__mercury_format_constrained_inst_vars_6_p_0(
  MR_Word parse_tree__parse_tree_out_inst__TypeClassInfo_for_output_30,
  MR_Word parse_tree__parse_tree_out_inst__Lang_7,
  MR_Word parse_tree__parse_tree_out_inst__InstVarSet_8,
  MR_Word parse_tree__parse_tree_out_inst__STATE_VARIABLE_Vars_0_13,
  MR_Word parse_tree__parse_tree_out_inst__Inst_10,
  MR_Box parse_tree__parse_tree_out_inst__STATE_VARIABLE_U_0_14,
  MR_Box * parse_tree__parse_tree_out_inst__STATE_VARIABLE_U_15)
{
  {
    MR_bool parse_tree__parse_tree_out_inst__succeeded;
    MR_Word parse_tree__parse_tree_out_inst__Var_12;
    MR_Word parse_tree__parse_tree_out_inst__STATE_VARIABLE_Vars_16_16;
    MR_Box parse_tree__parse_tree_out_inst__conv0_Var_12;

    {
      parse_tree__parse_tree_out_inst__succeeded = mercury__set__remove_least_3_p_0((MR_Word) &parse_tree__parse_tree_out_inst_scalar_common_1[2], &parse_tree__parse_tree_out_inst__conv0_Var_12, parse_tree__parse_tree_out_inst__STATE_VARIABLE_Vars_0_13, &parse_tree__parse_tree_out_inst__STATE_VARIABLE_Vars_16_16);
    }
    if (parse_tree__parse_tree_out_inst__succeeded)
      {
        parse_tree__parse_tree_out_inst__Var_12 = ((MR_Word) parse_tree__parse_tree_out_inst__conv0_Var_12);
        parse_tree__parse_tree_out_inst__succeeded = MR_TRUE;
      }
    if (parse_tree__parse_tree_out_inst__succeeded)
      {
        MR_Box parse_tree__parse_tree_out_inst__STATE_VARIABLE_U_18_18;
        MR_Box parse_tree__parse_tree_out_inst__STATE_VARIABLE_U_20_20;
        MR_Box parse_tree__parse_tree_out_inst__STATE_VARIABLE_U_22_22;
        MR_Box parse_tree__parse_tree_out_inst__STATE_VARIABLE_U_23_23;
        void MR_CALL (* parse_tree__parse_tree_out_inst__func_1)(MR_Box, MR_Box, MR_Box, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), parse_tree__parse_tree_out_inst__TypeClassInfo_for_output_30, (MR_Integer) 0)), (MR_Integer) 5)));
        void MR_CALL (* parse_tree__parse_tree_out_inst__func_2)(MR_Box, MR_Box, MR_Box, MR_Box *);
        void MR_CALL (* parse_tree__parse_tree_out_inst__func_3)(MR_Box, MR_Box, MR_Box, MR_Box *);

        {
          parse_tree__parse_tree_out_inst__func_1(((MR_Box) parse_tree__parse_tree_out_inst__TypeClassInfo_for_output_30), ((MR_Box) ((MR_String) "(")), parse_tree__parse_tree_out_inst__STATE_VARIABLE_U_0_14, &parse_tree__parse_tree_out_inst__STATE_VARIABLE_U_18_18);
        }
        {
          parse_tree__parse_tree_out_term__mercury_format_var_5_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_inst_var_type_0, parse_tree__parse_tree_out_inst__TypeClassInfo_for_output_30, parse_tree__parse_tree_out_inst__InstVarSet_8, (MR_Integer) 0, parse_tree__parse_tree_out_inst__Var_12, parse_tree__parse_tree_out_inst__STATE_VARIABLE_U_18_18, &parse_tree__parse_tree_out_inst__STATE_VARIABLE_U_20_20);
        }
        parse_tree__parse_tree_out_inst__func_2 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), parse_tree__parse_tree_out_inst__TypeClassInfo_for_output_30, (MR_Integer) 0)), (MR_Integer) 5)));
        {
          parse_tree__parse_tree_out_inst__func_2(((MR_Box) parse_tree__parse_tree_out_inst__TypeClassInfo_for_output_30), ((MR_Box) ((MR_String) " =< ")), parse_tree__parse_tree_out_inst__STATE_VARIABLE_U_20_20, &parse_tree__parse_tree_out_inst__STATE_VARIABLE_U_22_22);
        }
        {
          parse_tree__parse_tree_out_inst__mercury_format_constrained_inst_vars_6_p_0(parse_tree__parse_tree_out_inst__TypeClassInfo_for_output_30, parse_tree__parse_tree_out_inst__Lang_7, parse_tree__parse_tree_out_inst__InstVarSet_8, parse_tree__parse_tree_out_inst__STATE_VARIABLE_Vars_16_16, parse_tree__parse_tree_out_inst__Inst_10, parse_tree__parse_tree_out_inst__STATE_VARIABLE_U_22_22, &parse_tree__parse_tree_out_inst__STATE_VARIABLE_U_23_23);
        }
        parse_tree__parse_tree_out_inst__func_3 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), parse_tree__parse_tree_out_inst__TypeClassInfo_for_output_30, (MR_Integer) 0)), (MR_Integer) 5)));
        {
          parse_tree__parse_tree_out_inst__func_3(((MR_Box) parse_tree__parse_tree_out_inst__TypeClassInfo_for_output_30), ((MR_Box) ((MR_String) ")")), parse_tree__parse_tree_out_inst__STATE_VARIABLE_U_23_23, parse_tree__parse_tree_out_inst__STATE_VARIABLE_U_15);
        }
      }
    else
      {
        parse_tree__parse_tree_out_inst__mercury_format_inst_5_p_0(parse_tree__parse_tree_out_inst__TypeClassInfo_for_output_30, parse_tree__parse_tree_out_inst__Lang_7, parse_tree__parse_tree_out_inst__InstVarSet_8, parse_tree__parse_tree_out_inst__Inst_10, parse_tree__parse_tree_out_inst__STATE_VARIABLE_U_0_14, parse_tree__parse_tree_out_inst__STATE_VARIABLE_U_15);
      }
  }
}

void MR_CALL 
parse_tree__parse_tree_out_inst__mercury_format_inst_name_5_p_0(
  MR_Word parse_tree__parse_tree_out_inst__TypeClassInfo_for_output_138,
  MR_Word parse_tree__parse_tree_out_inst__Lang_6,
  MR_Word parse_tree__parse_tree_out_inst__InstVarSet_7,
  MR_Word parse_tree__parse_tree_out_inst__InstName_8,
  MR_Box parse_tree__parse_tree_out_inst__STATE_VARIABLE_U_0_23,
  MR_Box * parse_tree__parse_tree_out_inst__STATE_VARIABLE_U_24)
{
  while (MR_TRUE)
    {
      /* tailcall optimized into a loop */
      {
        MR_bool parse_tree__parse_tree_out_inst__succeeded;

        switch (MR_tag((MR_Word) parse_tree__parse_tree_out_inst__InstName_8)) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
            {
              MR_Word parse_tree__parse_tree_out_inst__Name_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__parse_tree_out_inst__InstName_8, (MR_Integer) 0)));
              MR_Word parse_tree__parse_tree_out_inst__Args_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__parse_tree_out_inst__InstName_8, (MR_Integer) 1)));

              if ((parse_tree__parse_tree_out_inst__Args_11 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
                {
                  parse_tree__mercury_to_mercury__mercury_format_bracketed_sym_name_3_p_0(parse_tree__parse_tree_out_inst__TypeClassInfo_for_output_138, parse_tree__parse_tree_out_inst__Name_10, parse_tree__parse_tree_out_inst__STATE_VARIABLE_U_0_23, parse_tree__parse_tree_out_inst__STATE_VARIABLE_U_24);
                }
              else
                {
                  MR_Box parse_tree__parse_tree_out_inst__STATE_VARIABLE_U_116_116;
                  MR_Box parse_tree__parse_tree_out_inst__STATE_VARIABLE_U_118_118;
                  MR_Box parse_tree__parse_tree_out_inst__STATE_VARIABLE_U_119_119;

                  {
                    parse_tree__mercury_to_mercury__mercury_format_sym_name_3_p_0(parse_tree__parse_tree_out_inst__TypeClassInfo_for_output_138, parse_tree__parse_tree_out_inst__Name_10, parse_tree__parse_tree_out_inst__STATE_VARIABLE_U_0_23, &parse_tree__parse_tree_out_inst__STATE_VARIABLE_U_116_116);
                  }
                  {
                    parse_tree__parse_tree_out_info__add_string_3_p_0(parse_tree__parse_tree_out_inst__TypeClassInfo_for_output_138, (MR_String) "(", parse_tree__parse_tree_out_inst__STATE_VARIABLE_U_116_116, &parse_tree__parse_tree_out_inst__STATE_VARIABLE_U_118_118);
                  }
                  {
                    parse_tree__parse_tree_out_inst__mercury_format_inst_list_5_p_0(parse_tree__parse_tree_out_inst__TypeClassInfo_for_output_138, parse_tree__parse_tree_out_inst__Lang_6, parse_tree__parse_tree_out_inst__InstVarSet_7, parse_tree__parse_tree_out_inst__Args_11, parse_tree__parse_tree_out_inst__STATE_VARIABLE_U_118_118, &parse_tree__parse_tree_out_inst__STATE_VARIABLE_U_119_119);
                  }
                  {
                    parse_tree__parse_tree_out_info__add_string_3_p_0(parse_tree__parse_tree_out_inst__TypeClassInfo_for_output_138, (MR_String) ")", parse_tree__parse_tree_out_inst__STATE_VARIABLE_U_119_119, parse_tree__parse_tree_out_inst__STATE_VARIABLE_U_24);
                  }
                }
            }
            break;
          case (MR_Integer) 1:
            {
              MR_Word parse_tree__parse_tree_out_inst__IsLive_14 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__parse_tree_out_inst__InstName_8, (MR_Integer) 0)));
              MR_Word parse_tree__parse_tree_out_inst__Real_15 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__parse_tree_out_inst__InstName_8, (MR_Integer) 1)));
              MR_Word parse_tree__parse_tree_out_inst__InstA_16 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__parse_tree_out_inst__InstName_8, (MR_Integer) 2)));
              MR_Word parse_tree__parse_tree_out_inst__InstB_17 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__parse_tree_out_inst__InstName_8, (MR_Integer) 3)));

              switch (parse_tree__parse_tree_out_inst__Lang_6) {
                default: /*NOTREACHED*/ MR_assert(0);
                case (MR_Integer) 1:
                  {
                    MR_Box parse_tree__parse_tree_out_inst__STATE_VARIABLE_U_104_104;
                    MR_Box parse_tree__parse_tree_out_inst__STATE_VARIABLE_U_105_105;
                    MR_Box parse_tree__parse_tree_out_inst__STATE_VARIABLE_U_106_106;
                    MR_Box parse_tree__parse_tree_out_inst__STATE_VARIABLE_U_108_108;
                    MR_Word parse_tree__parse_tree_out_inst__Insts_185;
                    MR_Box parse_tree__parse_tree_out_inst__STATE_VARIABLE_U_20_191;
                    MR_Box parse_tree__parse_tree_out_inst__STATE_VARIABLE_U_22_193;
                    MR_Word parse_tree__parse_tree_out_inst__Inst_202;
                    void MR_CALL (* parse_tree__parse_tree_out_inst__func_1)(MR_Box, MR_Box, MR_Box, MR_Box *);
                    MR_Word parse_tree__parse_tree_out_inst__Insts_203;

                    {
                      parse_tree__parse_tree_out_info__add_string_3_p_0(parse_tree__parse_tree_out_inst__TypeClassInfo_for_output_138, (MR_String) "\044unify(", parse_tree__parse_tree_out_inst__STATE_VARIABLE_U_0_23, &parse_tree__parse_tree_out_inst__STATE_VARIABLE_U_104_104);
                    }
                    {
                      parse_tree__parse_tree_out_inst__mercury_format_is_live_comma_3_p_0(parse_tree__parse_tree_out_inst__TypeClassInfo_for_output_138, parse_tree__parse_tree_out_inst__IsLive_14, parse_tree__parse_tree_out_inst__STATE_VARIABLE_U_104_104, &parse_tree__parse_tree_out_inst__STATE_VARIABLE_U_105_105);
                    }
                    {
                      parse_tree__parse_tree_out_inst__mercury_format_comma_real_3_p_0(parse_tree__parse_tree_out_inst__TypeClassInfo_for_output_138, parse_tree__parse_tree_out_inst__Real_15, parse_tree__parse_tree_out_inst__STATE_VARIABLE_U_105_105, &parse_tree__parse_tree_out_inst__STATE_VARIABLE_U_106_106);
                    }
                    {
                      parse_tree__parse_tree_out_inst__Insts_185 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                      MR_hl_field(MR_mktag(1), parse_tree__parse_tree_out_inst__Insts_185, 0) = ((MR_Box) (parse_tree__parse_tree_out_inst__InstB_17));
                      MR_hl_field(MR_mktag(1), parse_tree__parse_tree_out_inst__Insts_185, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
                    }
                    {
                      parse_tree__parse_tree_out_inst__mercury_format_inst_5_p_0(parse_tree__parse_tree_out_inst__TypeClassInfo_for_output_138, parse_tree__parse_tree_out_inst__Lang_6, parse_tree__parse_tree_out_inst__InstVarSet_7, parse_tree__parse_tree_out_inst__InstA_16, parse_tree__parse_tree_out_inst__STATE_VARIABLE_U_106_106, &parse_tree__parse_tree_out_inst__STATE_VARIABLE_U_20_191);
                    }
                    parse_tree__parse_tree_out_inst__func_1 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), parse_tree__parse_tree_out_inst__TypeClassInfo_for_output_138, (MR_Integer) 0)), (MR_Integer) 5)));
                    {
                      parse_tree__parse_tree_out_inst__func_1(((MR_Box) parse_tree__parse_tree_out_inst__TypeClassInfo_for_output_138), ((MR_Box) ((MR_String) ", ")), parse_tree__parse_tree_out_inst__STATE_VARIABLE_U_20_191, &parse_tree__parse_tree_out_inst__STATE_VARIABLE_U_22_193);
                    }
                    parse_tree__parse_tree_out_inst__Inst_202 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__parse_tree_out_inst__Insts_185, (MR_Integer) 0)));
                    parse_tree__parse_tree_out_inst__Insts_203 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__parse_tree_out_inst__Insts_185, (MR_Integer) 1)));
                    {
                      parse_tree__parse_tree_out_inst__mercury_format_inst_5_p_0(parse_tree__parse_tree_out_inst__TypeClassInfo_for_output_138, parse_tree__parse_tree_out_inst__Lang_6, parse_tree__parse_tree_out_inst__InstVarSet_7, parse_tree__parse_tree_out_inst__Inst_202, parse_tree__parse_tree_out_inst__STATE_VARIABLE_U_22_193, &parse_tree__parse_tree_out_inst__STATE_VARIABLE_U_108_108);
                    }
                    {
                      parse_tree__parse_tree_out_info__add_string_3_p_0(parse_tree__parse_tree_out_inst__TypeClassInfo_for_output_138, (MR_String) ")", parse_tree__parse_tree_out_inst__STATE_VARIABLE_U_108_108, parse_tree__parse_tree_out_inst__STATE_VARIABLE_U_24);
                    }
                  }
                  break;
                case (MR_Integer) 0:
                  {
                    {
                      mercury__require__unexpected_3_p_0((MR_String) "parse_tree.parse_tree_out_inst", (MR_String) "predicate \140parse_tree.parse_tree_out_inst.mercury_format_inst_name\'/5", (MR_String) "unify_inst");
                      return;
                    }
                  }
                  break;
              }
            }
            break;
          case (MR_Integer) 2:
            {
              MR_Word parse_tree__parse_tree_out_inst__InstA_123 = ((MR_Word) (MR_hl_field(MR_mktag(2), parse_tree__parse_tree_out_inst__InstName_8, (MR_Integer) 0)));
              MR_Word parse_tree__parse_tree_out_inst__InstB_124 = ((MR_Word) (MR_hl_field(MR_mktag(2), parse_tree__parse_tree_out_inst__InstName_8, (MR_Integer) 1)));

              switch (parse_tree__parse_tree_out_inst__Lang_6) {
                default: /*NOTREACHED*/ MR_assert(0);
                case (MR_Integer) 1:
                  {
                    MR_Box parse_tree__parse_tree_out_inst__STATE_VARIABLE_U_93_93;
                    MR_Box parse_tree__parse_tree_out_inst__STATE_VARIABLE_U_95_95;
                    MR_Word parse_tree__parse_tree_out_inst__Insts_149;
                    MR_Box parse_tree__parse_tree_out_inst__STATE_VARIABLE_U_20_155;
                    MR_Box parse_tree__parse_tree_out_inst__STATE_VARIABLE_U_22_157;
                    MR_Word parse_tree__parse_tree_out_inst__Inst_166;
                    void MR_CALL (* parse_tree__parse_tree_out_inst__func_0)(MR_Box, MR_Box, MR_Box, MR_Box *);
                    MR_Word parse_tree__parse_tree_out_inst__Insts_167;

                    {
                      parse_tree__parse_tree_out_info__add_string_3_p_0(parse_tree__parse_tree_out_inst__TypeClassInfo_for_output_138, (MR_String) "\044merge_inst(", parse_tree__parse_tree_out_inst__STATE_VARIABLE_U_0_23, &parse_tree__parse_tree_out_inst__STATE_VARIABLE_U_93_93);
                    }
                    {
                      parse_tree__parse_tree_out_inst__Insts_149 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                      MR_hl_field(MR_mktag(1), parse_tree__parse_tree_out_inst__Insts_149, 0) = ((MR_Box) (parse_tree__parse_tree_out_inst__InstB_124));
                      MR_hl_field(MR_mktag(1), parse_tree__parse_tree_out_inst__Insts_149, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
                    }
                    {
                      parse_tree__parse_tree_out_inst__mercury_format_inst_5_p_0(parse_tree__parse_tree_out_inst__TypeClassInfo_for_output_138, parse_tree__parse_tree_out_inst__Lang_6, parse_tree__parse_tree_out_inst__InstVarSet_7, parse_tree__parse_tree_out_inst__InstA_123, parse_tree__parse_tree_out_inst__STATE_VARIABLE_U_93_93, &parse_tree__parse_tree_out_inst__STATE_VARIABLE_U_20_155);
                    }
                    parse_tree__parse_tree_out_inst__func_0 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), parse_tree__parse_tree_out_inst__TypeClassInfo_for_output_138, (MR_Integer) 0)), (MR_Integer) 5)));
                    {
                      parse_tree__parse_tree_out_inst__func_0(((MR_Box) parse_tree__parse_tree_out_inst__TypeClassInfo_for_output_138), ((MR_Box) ((MR_String) ", ")), parse_tree__parse_tree_out_inst__STATE_VARIABLE_U_20_155, &parse_tree__parse_tree_out_inst__STATE_VARIABLE_U_22_157);
                    }
                    parse_tree__parse_tree_out_inst__Inst_166 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__parse_tree_out_inst__Insts_149, (MR_Integer) 0)));
                    parse_tree__parse_tree_out_inst__Insts_167 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__parse_tree_out_inst__Insts_149, (MR_Integer) 1)));
                    {
                      parse_tree__parse_tree_out_inst__mercury_format_inst_5_p_0(parse_tree__parse_tree_out_inst__TypeClassInfo_for_output_138, parse_tree__parse_tree_out_inst__Lang_6, parse_tree__parse_tree_out_inst__InstVarSet_7, parse_tree__parse_tree_out_inst__Inst_166, parse_tree__parse_tree_out_inst__STATE_VARIABLE_U_22_157, &parse_tree__parse_tree_out_inst__STATE_VARIABLE_U_95_95);
                    }
                    {
                      parse_tree__parse_tree_out_info__add_string_3_p_0(parse_tree__parse_tree_out_inst__TypeClassInfo_for_output_138, (MR_String) ")", parse_tree__parse_tree_out_inst__STATE_VARIABLE_U_95_95, parse_tree__parse_tree_out_inst__STATE_VARIABLE_U_24);
                    }
                  }
                  break;
                case (MR_Integer) 0:
                  {
                    {
                      mercury__require__unexpected_3_p_0((MR_String) "parse_tree.parse_tree_out_inst", (MR_String) "predicate \140parse_tree.parse_tree_out_inst.mercury_format_inst_name\'/5", (MR_String) "merge_inst");
                      return;
                    }
                  }
                  break;
              }
            }
            break;
          case (MR_Integer) 3:
            switch (((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__parse_tree_out_inst__InstName_8, (MR_Integer) 0)))) {
              default: /*NOTREACHED*/ MR_assert(0);
              case (MR_Integer) 0:
                {
                  MR_Word parse_tree__parse_tree_out_inst__SubInstName_18 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__parse_tree_out_inst__InstName_8, (MR_Integer) 1)));
                  MR_Word parse_tree__parse_tree_out_inst__Uniq_19 = ((((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__parse_tree_out_inst__InstName_8, (MR_Integer) 2)))) & (MR_Integer) 7);
                  MR_Word parse_tree__parse_tree_out_inst__IsLive_125 = ((((((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__parse_tree_out_inst__InstName_8, (MR_Integer) 2)))) >> (MR_Integer) 3)) & (MR_Integer) 1);
                  MR_Word parse_tree__parse_tree_out_inst__Real_126 = ((((((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__parse_tree_out_inst__InstName_8, (MR_Integer) 2)))) >> (MR_Integer) 4)) & (MR_Integer) 1);

                  switch (parse_tree__parse_tree_out_inst__Lang_6) {
                    default: /*NOTREACHED*/ MR_assert(0);
                    case (MR_Integer) 1:
                      {
                        MR_Box parse_tree__parse_tree_out_inst__STATE_VARIABLE_U_79_79;
                        MR_Box parse_tree__parse_tree_out_inst__STATE_VARIABLE_U_80_80;
                        MR_Box parse_tree__parse_tree_out_inst__STATE_VARIABLE_U_82_82;
                        MR_Box parse_tree__parse_tree_out_inst__STATE_VARIABLE_U_83_83;
                        MR_Box parse_tree__parse_tree_out_inst__STATE_VARIABLE_U_85_85;
                        MR_Box parse_tree__parse_tree_out_inst__STATE_VARIABLE_U_86_86;

                        {
                          parse_tree__parse_tree_out_info__add_string_3_p_0(parse_tree__parse_tree_out_inst__TypeClassInfo_for_output_138, (MR_String) "\044ground(", parse_tree__parse_tree_out_inst__STATE_VARIABLE_U_0_23, &parse_tree__parse_tree_out_inst__STATE_VARIABLE_U_79_79);
                        }
                        {
                          parse_tree__parse_tree_out_inst__mercury_format_inst_name_5_p_0(parse_tree__parse_tree_out_inst__TypeClassInfo_for_output_138, parse_tree__parse_tree_out_inst__Lang_6, parse_tree__parse_tree_out_inst__InstVarSet_7, parse_tree__parse_tree_out_inst__SubInstName_18, parse_tree__parse_tree_out_inst__STATE_VARIABLE_U_79_79, &parse_tree__parse_tree_out_inst__STATE_VARIABLE_U_80_80);
                        }
                        {
                          parse_tree__parse_tree_out_info__add_string_3_p_0(parse_tree__parse_tree_out_inst__TypeClassInfo_for_output_138, (MR_String) ", ", parse_tree__parse_tree_out_inst__STATE_VARIABLE_U_80_80, &parse_tree__parse_tree_out_inst__STATE_VARIABLE_U_82_82);
                        }
                        {
                          parse_tree__parse_tree_out_inst__mercury_format_is_live_comma_3_p_0(parse_tree__parse_tree_out_inst__TypeClassInfo_for_output_138, parse_tree__parse_tree_out_inst__IsLive_125, parse_tree__parse_tree_out_inst__STATE_VARIABLE_U_82_82, &parse_tree__parse_tree_out_inst__STATE_VARIABLE_U_83_83);
                        }
                        {
                          parse_tree__parse_tree_out_inst__mercury_format_uniqueness_4_p_0(parse_tree__parse_tree_out_inst__TypeClassInfo_for_output_138, parse_tree__parse_tree_out_inst__Uniq_19, (MR_String) "shared", parse_tree__parse_tree_out_inst__STATE_VARIABLE_U_83_83, &parse_tree__parse_tree_out_inst__STATE_VARIABLE_U_85_85);
                        }
                        {
                          parse_tree__parse_tree_out_inst__mercury_format_comma_real_3_p_0(parse_tree__parse_tree_out_inst__TypeClassInfo_for_output_138, parse_tree__parse_tree_out_inst__Real_126, parse_tree__parse_tree_out_inst__STATE_VARIABLE_U_85_85, &parse_tree__parse_tree_out_inst__STATE_VARIABLE_U_86_86);
                        }
                        {
                          parse_tree__parse_tree_out_info__add_string_3_p_0(parse_tree__parse_tree_out_inst__TypeClassInfo_for_output_138, (MR_String) ")", parse_tree__parse_tree_out_inst__STATE_VARIABLE_U_86_86, parse_tree__parse_tree_out_inst__STATE_VARIABLE_U_24);
                        }
                      }
                      break;
                    case (MR_Integer) 0:
                      {
                        {
                          mercury__require__unexpected_3_p_0((MR_String) "parse_tree.parse_tree_out_inst", (MR_String) "predicate \140parse_tree.parse_tree_out_inst.mercury_format_inst_name\'/5", (MR_String) "ground_inst");
                          return;
                        }
                      }
                      break;
                  }
                }
                break;
              case (MR_Integer) 1:
                {
                  MR_Word parse_tree__parse_tree_out_inst__IsLive_127 = ((((((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__parse_tree_out_inst__InstName_8, (MR_Integer) 2)))) >> (MR_Integer) 3)) & (MR_Integer) 1);
                  MR_Word parse_tree__parse_tree_out_inst__Real_128 = ((((((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__parse_tree_out_inst__InstName_8, (MR_Integer) 2)))) >> (MR_Integer) 4)) & (MR_Integer) 1);
                  MR_Word parse_tree__parse_tree_out_inst__SubInstName_129 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__parse_tree_out_inst__InstName_8, (MR_Integer) 1)));
                  MR_Word parse_tree__parse_tree_out_inst__Uniq_130 = ((((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__parse_tree_out_inst__InstName_8, (MR_Integer) 2)))) & (MR_Integer) 7);

                  switch (parse_tree__parse_tree_out_inst__Lang_6) {
                    default: /*NOTREACHED*/ MR_assert(0);
                    case (MR_Integer) 1:
                      {
                        MR_Box parse_tree__parse_tree_out_inst__STATE_VARIABLE_U_65_65;
                        MR_Box parse_tree__parse_tree_out_inst__STATE_VARIABLE_U_66_66;
                        MR_Box parse_tree__parse_tree_out_inst__STATE_VARIABLE_U_68_68;
                        MR_Box parse_tree__parse_tree_out_inst__STATE_VARIABLE_U_69_69;
                        MR_Box parse_tree__parse_tree_out_inst__STATE_VARIABLE_U_71_71;
                        MR_Box parse_tree__parse_tree_out_inst__STATE_VARIABLE_U_72_72;

                        {
                          parse_tree__parse_tree_out_info__add_string_3_p_0(parse_tree__parse_tree_out_inst__TypeClassInfo_for_output_138, (MR_String) "\044any(", parse_tree__parse_tree_out_inst__STATE_VARIABLE_U_0_23, &parse_tree__parse_tree_out_inst__STATE_VARIABLE_U_65_65);
                        }
                        {
                          parse_tree__parse_tree_out_inst__mercury_format_inst_name_5_p_0(parse_tree__parse_tree_out_inst__TypeClassInfo_for_output_138, parse_tree__parse_tree_out_inst__Lang_6, parse_tree__parse_tree_out_inst__InstVarSet_7, parse_tree__parse_tree_out_inst__SubInstName_129, parse_tree__parse_tree_out_inst__STATE_VARIABLE_U_65_65, &parse_tree__parse_tree_out_inst__STATE_VARIABLE_U_66_66);
                        }
                        {
                          parse_tree__parse_tree_out_info__add_string_3_p_0(parse_tree__parse_tree_out_inst__TypeClassInfo_for_output_138, (MR_String) ", ", parse_tree__parse_tree_out_inst__STATE_VARIABLE_U_66_66, &parse_tree__parse_tree_out_inst__STATE_VARIABLE_U_68_68);
                        }
                        {
                          parse_tree__parse_tree_out_inst__mercury_format_is_live_comma_3_p_0(parse_tree__parse_tree_out_inst__TypeClassInfo_for_output_138, parse_tree__parse_tree_out_inst__IsLive_127, parse_tree__parse_tree_out_inst__STATE_VARIABLE_U_68_68, &parse_tree__parse_tree_out_inst__STATE_VARIABLE_U_69_69);
                        }
                        {
                          parse_tree__parse_tree_out_inst__mercury_format_uniqueness_4_p_0(parse_tree__parse_tree_out_inst__TypeClassInfo_for_output_138, parse_tree__parse_tree_out_inst__Uniq_130, (MR_String) "shared", parse_tree__parse_tree_out_inst__STATE_VARIABLE_U_69_69, &parse_tree__parse_tree_out_inst__STATE_VARIABLE_U_71_71);
                        }
                        {
                          parse_tree__parse_tree_out_inst__mercury_format_comma_real_3_p_0(parse_tree__parse_tree_out_inst__TypeClassInfo_for_output_138, parse_tree__parse_tree_out_inst__Real_128, parse_tree__parse_tree_out_inst__STATE_VARIABLE_U_71_71, &parse_tree__parse_tree_out_inst__STATE_VARIABLE_U_72_72);
                        }
                        {
                          parse_tree__parse_tree_out_info__add_string_3_p_0(parse_tree__parse_tree_out_inst__TypeClassInfo_for_output_138, (MR_String) ")", parse_tree__parse_tree_out_inst__STATE_VARIABLE_U_72_72, parse_tree__parse_tree_out_inst__STATE_VARIABLE_U_24);
                        }
                      }
                      break;
                    case (MR_Integer) 0:
                      {
                        {
                          mercury__require__unexpected_3_p_0((MR_String) "parse_tree.parse_tree_out_inst", (MR_String) "predicate \140parse_tree.parse_tree_out_inst.mercury_format_inst_name\'/5", (MR_String) "any_inst");
                          return;
                        }
                      }
                      break;
                  }
                }
                break;
              case (MR_Integer) 2:
                {
                  MR_Word parse_tree__parse_tree_out_inst__SubInstName_131 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__parse_tree_out_inst__InstName_8, (MR_Integer) 1)));

                  switch (parse_tree__parse_tree_out_inst__Lang_6) {
                    default: /*NOTREACHED*/ MR_assert(0);
                    case (MR_Integer) 1:
                      {
                        MR_Box parse_tree__parse_tree_out_inst__STATE_VARIABLE_U_57_57;
                        MR_Box parse_tree__parse_tree_out_inst__STATE_VARIABLE_U_58_58;

                        {
                          parse_tree__parse_tree_out_info__add_string_3_p_0(parse_tree__parse_tree_out_inst__TypeClassInfo_for_output_138, (MR_String) "\044shared_inst(", parse_tree__parse_tree_out_inst__STATE_VARIABLE_U_0_23, &parse_tree__parse_tree_out_inst__STATE_VARIABLE_U_57_57);
                        }
                        {
                          parse_tree__parse_tree_out_inst__mercury_format_inst_name_5_p_0(parse_tree__parse_tree_out_inst__TypeClassInfo_for_output_138, parse_tree__parse_tree_out_inst__Lang_6, parse_tree__parse_tree_out_inst__InstVarSet_7, parse_tree__parse_tree_out_inst__SubInstName_131, parse_tree__parse_tree_out_inst__STATE_VARIABLE_U_57_57, &parse_tree__parse_tree_out_inst__STATE_VARIABLE_U_58_58);
                        }
                        {
                          parse_tree__parse_tree_out_info__add_string_3_p_0(parse_tree__parse_tree_out_inst__TypeClassInfo_for_output_138, (MR_String) ")", parse_tree__parse_tree_out_inst__STATE_VARIABLE_U_58_58, parse_tree__parse_tree_out_inst__STATE_VARIABLE_U_24);
                        }
                      }
                      break;
                    case (MR_Integer) 0:
                      {
                        {
                          mercury__require__unexpected_3_p_0((MR_String) "parse_tree.parse_tree_out_inst", (MR_String) "predicate \140parse_tree.parse_tree_out_inst.mercury_format_inst_name\'/5", (MR_String) "shared_inst");
                          return;
                        }
                      }
                      break;
                  }
                }
                break;
              case (MR_Integer) 3:
                {
                  MR_Word parse_tree__parse_tree_out_inst__SubInstName_132 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__parse_tree_out_inst__InstName_8, (MR_Integer) 1)));

                  switch (parse_tree__parse_tree_out_inst__Lang_6) {
                    default: /*NOTREACHED*/ MR_assert(0);
                    case (MR_Integer) 1:
                      {
                        MR_Box parse_tree__parse_tree_out_inst__STATE_VARIABLE_U_49_49;
                        MR_Box parse_tree__parse_tree_out_inst__STATE_VARIABLE_U_50_50;

                        {
                          parse_tree__parse_tree_out_info__add_string_3_p_0(parse_tree__parse_tree_out_inst__TypeClassInfo_for_output_138, (MR_String) "\044mostly_uniq_inst(", parse_tree__parse_tree_out_inst__STATE_VARIABLE_U_0_23, &parse_tree__parse_tree_out_inst__STATE_VARIABLE_U_49_49);
                        }
                        {
                          parse_tree__parse_tree_out_inst__mercury_format_inst_name_5_p_0(parse_tree__parse_tree_out_inst__TypeClassInfo_for_output_138, parse_tree__parse_tree_out_inst__Lang_6, parse_tree__parse_tree_out_inst__InstVarSet_7, parse_tree__parse_tree_out_inst__SubInstName_132, parse_tree__parse_tree_out_inst__STATE_VARIABLE_U_49_49, &parse_tree__parse_tree_out_inst__STATE_VARIABLE_U_50_50);
                        }
                        {
                          parse_tree__parse_tree_out_info__add_string_3_p_0(parse_tree__parse_tree_out_inst__TypeClassInfo_for_output_138, (MR_String) ")", parse_tree__parse_tree_out_inst__STATE_VARIABLE_U_50_50, parse_tree__parse_tree_out_inst__STATE_VARIABLE_U_24);
                        }
                      }
                      break;
                    case (MR_Integer) 0:
                      {
                        {
                          mercury__require__unexpected_3_p_0((MR_String) "parse_tree.parse_tree_out_inst", (MR_String) "predicate \140parse_tree.parse_tree_out_inst.mercury_format_inst_name\'/5", (MR_String) "mostly_uniq_inst");
                          return;
                        }
                      }
                      break;
                  }
                }
                break;
              case (MR_Integer) 4:
                {
                  MR_Word parse_tree__parse_tree_out_inst__Uniqueness_20 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__parse_tree_out_inst__InstName_8, (MR_Integer) 1)));
                  MR_Word parse_tree__parse_tree_out_inst__Type_21 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__parse_tree_out_inst__InstName_8, (MR_Integer) 2)));

                  switch (parse_tree__parse_tree_out_inst__Lang_6) {
                    default: /*NOTREACHED*/ MR_assert(0);
                    case (MR_Integer) 1:
                      {
                        MR_Word parse_tree__parse_tree_out_inst__TypeVarSet_22;
                        MR_Box parse_tree__parse_tree_out_inst__STATE_VARIABLE_U_36_36;
                        MR_Box parse_tree__parse_tree_out_inst__STATE_VARIABLE_U_38_38;
                        MR_Box parse_tree__parse_tree_out_inst__STATE_VARIABLE_U_40_40;
                        MR_Box parse_tree__parse_tree_out_inst__STATE_VARIABLE_U_42_42;

                        {
                          parse_tree__parse_tree_out_info__add_string_3_p_0(parse_tree__parse_tree_out_inst__TypeClassInfo_for_output_138, (MR_String) "\044typed_ground(", parse_tree__parse_tree_out_inst__STATE_VARIABLE_U_0_23, &parse_tree__parse_tree_out_inst__STATE_VARIABLE_U_36_36);
                        }
                        {
                          parse_tree__parse_tree_out_inst__mercury_format_uniqueness_4_p_0(parse_tree__parse_tree_out_inst__TypeClassInfo_for_output_138, parse_tree__parse_tree_out_inst__Uniqueness_20, (MR_String) "shared", parse_tree__parse_tree_out_inst__STATE_VARIABLE_U_36_36, &parse_tree__parse_tree_out_inst__STATE_VARIABLE_U_38_38);
                        }
                        {
                          parse_tree__parse_tree_out_info__add_string_3_p_0(parse_tree__parse_tree_out_inst__TypeClassInfo_for_output_138, (MR_String) ", ", parse_tree__parse_tree_out_inst__STATE_VARIABLE_U_38_38, &parse_tree__parse_tree_out_inst__STATE_VARIABLE_U_40_40);
                        }
                        {
                          mercury__varset__init_1_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_tvar_type_0, &parse_tree__parse_tree_out_inst__TypeVarSet_22);
                        }
                        {
                          parse_tree__mercury_to_mercury__mercury_format_type_5_p_0(parse_tree__parse_tree_out_inst__TypeClassInfo_for_output_138, parse_tree__parse_tree_out_inst__TypeVarSet_22, (MR_Integer) 0, parse_tree__parse_tree_out_inst__Type_21, parse_tree__parse_tree_out_inst__STATE_VARIABLE_U_40_40, &parse_tree__parse_tree_out_inst__STATE_VARIABLE_U_42_42);
                        }
                        {
                          parse_tree__parse_tree_out_info__add_string_3_p_0(parse_tree__parse_tree_out_inst__TypeClassInfo_for_output_138, (MR_String) ")", parse_tree__parse_tree_out_inst__STATE_VARIABLE_U_42_42, parse_tree__parse_tree_out_inst__STATE_VARIABLE_U_24);
                        }
                      }
                      break;
                    case (MR_Integer) 0:
                      {
                        {
                          mercury__require__unexpected_3_p_0((MR_String) "parse_tree.parse_tree_out_inst", (MR_String) "predicate \140parse_tree.parse_tree_out_inst.mercury_format_inst_name\'/5", (MR_String) "typed_ground");
                          return;
                        }
                      }
                      break;
                  }
                }
                break;
              case (MR_Integer) 5:
                {
                  MR_Word parse_tree__parse_tree_out_inst__SubInstName_135 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__parse_tree_out_inst__InstName_8, (MR_Integer) 2)));
                  MR_Word parse_tree__parse_tree_out_inst__Type_136 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__parse_tree_out_inst__InstName_8, (MR_Integer) 1)));

                  switch (parse_tree__parse_tree_out_inst__Lang_6) {
                    default: /*NOTREACHED*/ MR_assert(0);
                    case (MR_Integer) 1:
                      {
                        MR_Box parse_tree__parse_tree_out_inst__STATE_VARIABLE_U_26_26;
                        MR_Box parse_tree__parse_tree_out_inst__STATE_VARIABLE_U_28_28;
                        MR_Box parse_tree__parse_tree_out_inst__STATE_VARIABLE_U_30_30;
                        MR_Box parse_tree__parse_tree_out_inst__STATE_VARIABLE_U_31_31;
                        MR_Word parse_tree__parse_tree_out_inst__TypeVarSet_133;

                        {
                          parse_tree__parse_tree_out_info__add_string_3_p_0(parse_tree__parse_tree_out_inst__TypeClassInfo_for_output_138, (MR_String) "\044typed_inst(", parse_tree__parse_tree_out_inst__STATE_VARIABLE_U_0_23, &parse_tree__parse_tree_out_inst__STATE_VARIABLE_U_26_26);
                        }
                        {
                          mercury__varset__init_1_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_tvar_type_0, &parse_tree__parse_tree_out_inst__TypeVarSet_133);
                        }
                        {
                          parse_tree__mercury_to_mercury__mercury_format_type_5_p_0(parse_tree__parse_tree_out_inst__TypeClassInfo_for_output_138, parse_tree__parse_tree_out_inst__TypeVarSet_133, (MR_Integer) 0, parse_tree__parse_tree_out_inst__Type_136, parse_tree__parse_tree_out_inst__STATE_VARIABLE_U_26_26, &parse_tree__parse_tree_out_inst__STATE_VARIABLE_U_28_28);
                        }
                        {
                          parse_tree__parse_tree_out_info__add_string_3_p_0(parse_tree__parse_tree_out_inst__TypeClassInfo_for_output_138, (MR_String) ", ", parse_tree__parse_tree_out_inst__STATE_VARIABLE_U_28_28, &parse_tree__parse_tree_out_inst__STATE_VARIABLE_U_30_30);
                        }
                        {
                          parse_tree__parse_tree_out_inst__mercury_format_inst_name_5_p_0(parse_tree__parse_tree_out_inst__TypeClassInfo_for_output_138, parse_tree__parse_tree_out_inst__Lang_6, parse_tree__parse_tree_out_inst__InstVarSet_7, parse_tree__parse_tree_out_inst__SubInstName_135, parse_tree__parse_tree_out_inst__STATE_VARIABLE_U_30_30, &parse_tree__parse_tree_out_inst__STATE_VARIABLE_U_31_31);
                        }
                        {
                          parse_tree__parse_tree_out_info__add_string_3_p_0(parse_tree__parse_tree_out_inst__TypeClassInfo_for_output_138, (MR_String) ")", parse_tree__parse_tree_out_inst__STATE_VARIABLE_U_31_31, parse_tree__parse_tree_out_inst__STATE_VARIABLE_U_24);
                        }
                      }
                      break;
                    case (MR_Integer) 0:
                      {
                        /* direct tailcall eliminated */
                        {
                          MR_Word parse_tree__parse_tree_out_inst__InstName__tmp_copy_8 = parse_tree__parse_tree_out_inst__SubInstName_135;

                          parse_tree__parse_tree_out_inst__InstName_8 = parse_tree__parse_tree_out_inst__InstName__tmp_copy_8;
                        }
                        continue;
                      }
                      break;
                  }
                }
                break;
            }
            break;
        }
      }
      break;
    }
}

void MR_CALL 
parse_tree__parse_tree_out_inst__mercury_format_inst_5_p_0(
  MR_Word parse_tree__parse_tree_out_inst__TypeClassInfo_for_output_54,
  MR_Word parse_tree__parse_tree_out_inst__Lang_6,
  MR_Word parse_tree__parse_tree_out_inst__InstVarSet_7,
  MR_Word parse_tree__parse_tree_out_inst__Inst_8,
  MR_Box parse_tree__parse_tree_out_inst__STATE_VARIABLE_U_0_22,
  MR_Box * parse_tree__parse_tree_out_inst__STATE_VARIABLE_U_23)
{
  {
    MR_bool parse_tree__parse_tree_out_inst__succeeded;

    switch (MR_tag((MR_Word) parse_tree__parse_tree_out_inst__Inst_8)) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        switch (MR_unmkbody(parse_tree__parse_tree_out_inst__Inst_8)) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
            {
              void MR_CALL (* parse_tree__parse_tree_out_inst__func_2)(MR_Box, MR_Box, MR_Box, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), parse_tree__parse_tree_out_inst__TypeClassInfo_for_output_54, (MR_Integer) 0)), (MR_Integer) 5)));

              {
                parse_tree__parse_tree_out_inst__func_2(((MR_Box) parse_tree__parse_tree_out_inst__TypeClassInfo_for_output_54), ((MR_Box) ((MR_String) "free")), parse_tree__parse_tree_out_inst__STATE_VARIABLE_U_0_22, parse_tree__parse_tree_out_inst__STATE_VARIABLE_U_23);
              }
            }
            break;
          case (MR_Integer) 1:
            {
              void MR_CALL (* parse_tree__parse_tree_out_inst__func_4)(MR_Box, MR_Box, MR_Box, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), parse_tree__parse_tree_out_inst__TypeClassInfo_for_output_54, (MR_Integer) 0)), (MR_Integer) 5)));

              {
                parse_tree__parse_tree_out_inst__func_4(((MR_Box) parse_tree__parse_tree_out_inst__TypeClassInfo_for_output_54), ((MR_Box) ((MR_String) "not_reached")), parse_tree__parse_tree_out_inst__STATE_VARIABLE_U_0_22, parse_tree__parse_tree_out_inst__STATE_VARIABLE_U_23);
              }
            }
            break;
        }
        break;
      case (MR_Integer) 1:
        {
          void MR_CALL (* parse_tree__parse_tree_out_inst__func_3)(MR_Box, MR_Box, MR_Box, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), parse_tree__parse_tree_out_inst__TypeClassInfo_for_output_54, (MR_Integer) 0)), (MR_Integer) 5)));

          {
            parse_tree__parse_tree_out_inst__func_3(((MR_Box) parse_tree__parse_tree_out_inst__TypeClassInfo_for_output_54), ((MR_Box) ((MR_String) "free(with some type)")), parse_tree__parse_tree_out_inst__STATE_VARIABLE_U_0_22, parse_tree__parse_tree_out_inst__STATE_VARIABLE_U_23);
          }
        }
        break;
      case (MR_Integer) 2:
        {
          MR_Word parse_tree__parse_tree_out_inst__Uniq_10 = ((MR_Word) (MR_hl_field(MR_mktag(2), parse_tree__parse_tree_out_inst__Inst_8, (MR_Integer) 0)));
          MR_Word parse_tree__parse_tree_out_inst__HOInstInfo_11 = ((MR_Word) (MR_hl_field(MR_mktag(2), parse_tree__parse_tree_out_inst__Inst_8, (MR_Integer) 1)));

          if ((parse_tree__parse_tree_out_inst__HOInstInfo_11 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
            {
              parse_tree__parse_tree_out_inst__mercury_format_any_uniqueness_3_p_0(parse_tree__parse_tree_out_inst__TypeClassInfo_for_output_54, parse_tree__parse_tree_out_inst__Uniq_10, parse_tree__parse_tree_out_inst__STATE_VARIABLE_U_0_22, parse_tree__parse_tree_out_inst__STATE_VARIABLE_U_23);
            }
          else
            {
              MR_Word parse_tree__parse_tree_out_inst__PredInstInfo_12 = (MR_Word) MR_body(((MR_Word) parse_tree__parse_tree_out_inst__HOInstInfo_11), (MR_Integer) 1);

              {
                parse_tree__parse_tree_out_inst__mercury_format_any_pred_inst_info_6_p_0(parse_tree__parse_tree_out_inst__TypeClassInfo_for_output_54, parse_tree__parse_tree_out_inst__Lang_6, parse_tree__parse_tree_out_inst__InstVarSet_7, parse_tree__parse_tree_out_inst__Uniq_10, parse_tree__parse_tree_out_inst__PredInstInfo_12, parse_tree__parse_tree_out_inst__STATE_VARIABLE_U_0_22, parse_tree__parse_tree_out_inst__STATE_VARIABLE_U_23);
              }
            }
        }
        break;
      case (MR_Integer) 3:
        switch (((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__parse_tree_out_inst__Inst_8, (MR_Integer) 0)))) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
            {
              MR_Word parse_tree__parse_tree_out_inst__BoundInsts_15 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__parse_tree_out_inst__Inst_8, (MR_Integer) 3)));
              MR_Box parse_tree__parse_tree_out_inst__STATE_VARIABLE_U_36_36;
              MR_Box parse_tree__parse_tree_out_inst__STATE_VARIABLE_U_38_38;
              MR_Box parse_tree__parse_tree_out_inst__STATE_VARIABLE_U_39_39;
              MR_Word parse_tree__parse_tree_out_inst__Uniq_48 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__parse_tree_out_inst__Inst_8, (MR_Integer) 1)));
              MR_Word parse_tree__parse_tree_out_inst__V_14_14 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__parse_tree_out_inst__Inst_8, (MR_Integer) 2)));
              void MR_CALL (* parse_tree__parse_tree_out_inst__func_0)(MR_Box, MR_Box, MR_Box, MR_Box *);
              void MR_CALL (* parse_tree__parse_tree_out_inst__func_1)(MR_Box, MR_Box, MR_Box, MR_Box *);

              {
                parse_tree__parse_tree_out_inst__mercury_format_uniqueness_4_p_0(parse_tree__parse_tree_out_inst__TypeClassInfo_for_output_54, parse_tree__parse_tree_out_inst__Uniq_48, (MR_String) "bound", parse_tree__parse_tree_out_inst__STATE_VARIABLE_U_0_22, &parse_tree__parse_tree_out_inst__STATE_VARIABLE_U_36_36);
              }
              parse_tree__parse_tree_out_inst__func_0 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), parse_tree__parse_tree_out_inst__TypeClassInfo_for_output_54, (MR_Integer) 0)), (MR_Integer) 5)));
              {
                parse_tree__parse_tree_out_inst__func_0(((MR_Box) parse_tree__parse_tree_out_inst__TypeClassInfo_for_output_54), ((MR_Box) ((MR_String) "(")), parse_tree__parse_tree_out_inst__STATE_VARIABLE_U_36_36, &parse_tree__parse_tree_out_inst__STATE_VARIABLE_U_38_38);
              }
              {
                parse_tree__parse_tree_out_inst__mercury_format_bound_insts_5_p_0(parse_tree__parse_tree_out_inst__TypeClassInfo_for_output_54, parse_tree__parse_tree_out_inst__Lang_6, parse_tree__parse_tree_out_inst__InstVarSet_7, parse_tree__parse_tree_out_inst__BoundInsts_15, parse_tree__parse_tree_out_inst__STATE_VARIABLE_U_38_38, &parse_tree__parse_tree_out_inst__STATE_VARIABLE_U_39_39);
              }
              parse_tree__parse_tree_out_inst__func_1 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), parse_tree__parse_tree_out_inst__TypeClassInfo_for_output_54, (MR_Integer) 0)), (MR_Integer) 5)));
              {
                parse_tree__parse_tree_out_inst__func_1(((MR_Box) parse_tree__parse_tree_out_inst__TypeClassInfo_for_output_54), ((MR_Box) ((MR_String) ")")), parse_tree__parse_tree_out_inst__STATE_VARIABLE_U_39_39, parse_tree__parse_tree_out_inst__STATE_VARIABLE_U_23);
              }
            }
            break;
          case (MR_Integer) 1:
            {
              MR_Word parse_tree__parse_tree_out_inst__Uniq_51 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__parse_tree_out_inst__Inst_8, (MR_Integer) 1)));
              MR_Word parse_tree__parse_tree_out_inst__HOInstInfo_52 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__parse_tree_out_inst__Inst_8, (MR_Integer) 2)));

              if ((parse_tree__parse_tree_out_inst__HOInstInfo_52 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
                {
                  {
                    parse_tree__parse_tree_out_inst__mercury_format_uniqueness_4_p_0(parse_tree__parse_tree_out_inst__TypeClassInfo_for_output_54, parse_tree__parse_tree_out_inst__Uniq_51, (MR_String) "ground", parse_tree__parse_tree_out_inst__STATE_VARIABLE_U_0_22, parse_tree__parse_tree_out_inst__STATE_VARIABLE_U_23);
                  }
                }
              else
                {
                  MR_Word parse_tree__parse_tree_out_inst__PredInstInfo_49 = (MR_Word) MR_body(((MR_Word) parse_tree__parse_tree_out_inst__HOInstInfo_52), (MR_Integer) 1);

                  {
                    parse_tree__parse_tree_out_inst__mercury_format_ground_pred_inst_info_6_p_0(parse_tree__parse_tree_out_inst__TypeClassInfo_for_output_54, parse_tree__parse_tree_out_inst__Lang_6, parse_tree__parse_tree_out_inst__InstVarSet_7, parse_tree__parse_tree_out_inst__Uniq_51, parse_tree__parse_tree_out_inst__PredInstInfo_49, parse_tree__parse_tree_out_inst__STATE_VARIABLE_U_0_22, parse_tree__parse_tree_out_inst__STATE_VARIABLE_U_23);
                  }
                }
            }
            break;
          case (MR_Integer) 2:
            {
              MR_Word parse_tree__parse_tree_out_inst__Var_16 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__parse_tree_out_inst__Inst_8, (MR_Integer) 1)));

              {
                parse_tree__parse_tree_out_term__mercury_format_var_5_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_inst_var_type_0, parse_tree__parse_tree_out_inst__TypeClassInfo_for_output_54, parse_tree__parse_tree_out_inst__InstVarSet_7, (MR_Integer) 0, parse_tree__parse_tree_out_inst__Var_16, parse_tree__parse_tree_out_inst__STATE_VARIABLE_U_0_22, parse_tree__parse_tree_out_inst__STATE_VARIABLE_U_23);
              }
            }
            break;
          case (MR_Integer) 3:
            {
              MR_Word parse_tree__parse_tree_out_inst__Vars_17 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__parse_tree_out_inst__Inst_8, (MR_Integer) 1)));
              MR_Word parse_tree__parse_tree_out_inst__CInst_18 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__parse_tree_out_inst__Inst_8, (MR_Integer) 2)));

              {
                parse_tree__parse_tree_out_inst__mercury_format_constrained_inst_vars_6_p_0(parse_tree__parse_tree_out_inst__TypeClassInfo_for_output_54, parse_tree__parse_tree_out_inst__Lang_6, parse_tree__parse_tree_out_inst__InstVarSet_7, parse_tree__parse_tree_out_inst__Vars_17, parse_tree__parse_tree_out_inst__CInst_18, parse_tree__parse_tree_out_inst__STATE_VARIABLE_U_0_22, parse_tree__parse_tree_out_inst__STATE_VARIABLE_U_23);
              }
            }
            break;
          case (MR_Integer) 4:
            {
              MR_Word parse_tree__parse_tree_out_inst__InstName_21 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__parse_tree_out_inst__Inst_8, (MR_Integer) 1)));

              {
                parse_tree__parse_tree_out_inst__mercury_format_inst_name_5_p_0(parse_tree__parse_tree_out_inst__TypeClassInfo_for_output_54, parse_tree__parse_tree_out_inst__Lang_6, parse_tree__parse_tree_out_inst__InstVarSet_7, parse_tree__parse_tree_out_inst__InstName_21, parse_tree__parse_tree_out_inst__STATE_VARIABLE_U_0_22, parse_tree__parse_tree_out_inst__STATE_VARIABLE_U_23);
              }
            }
            break;
          case (MR_Integer) 5:
            {
              MR_Word parse_tree__parse_tree_out_inst__Name_19 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__parse_tree_out_inst__Inst_8, (MR_Integer) 1)));
              MR_Word parse_tree__parse_tree_out_inst__Args_20 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__parse_tree_out_inst__Inst_8, (MR_Integer) 2)));
              MR_Word parse_tree__parse_tree_out_inst__V_27_27;

              {
                parse_tree__parse_tree_out_inst__V_27_27 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
                MR_hl_field(MR_mktag(0), parse_tree__parse_tree_out_inst__V_27_27, 0) = ((MR_Box) (parse_tree__parse_tree_out_inst__Name_19));
                MR_hl_field(MR_mktag(0), parse_tree__parse_tree_out_inst__V_27_27, 1) = ((MR_Box) (parse_tree__parse_tree_out_inst__Args_20));
              }
              {
                parse_tree__parse_tree_out_inst__mercury_format_inst_name_5_p_0(parse_tree__parse_tree_out_inst__TypeClassInfo_for_output_54, parse_tree__parse_tree_out_inst__Lang_6, parse_tree__parse_tree_out_inst__InstVarSet_7, parse_tree__parse_tree_out_inst__V_27_27, parse_tree__parse_tree_out_inst__STATE_VARIABLE_U_0_22, parse_tree__parse_tree_out_inst__STATE_VARIABLE_U_23);
              }
            }
            break;
        }
        break;
    }
  }
}

MR_String MR_CALL 
parse_tree__parse_tree_out_inst__mercury_inst_to_string_3_f_0(
  MR_Word parse_tree__parse_tree_out_inst__Lang_5,
  MR_Word parse_tree__parse_tree_out_inst__InstVarSet_6,
  MR_Word parse_tree__parse_tree_out_inst__Inst_7)
{
  {
    MR_bool parse_tree__parse_tree_out_inst__succeeded;
    MR_String parse_tree__parse_tree_out_inst__String_8;
    MR_Box parse_tree__parse_tree_out_inst__conv0_String_8;

    {
      parse_tree__parse_tree_out_inst__mercury_format_inst_5_p_0((MR_Word) &parse_tree__parse_tree_out_inst_scalar_common_1[1], parse_tree__parse_tree_out_inst__Lang_5, parse_tree__parse_tree_out_inst__InstVarSet_6, parse_tree__parse_tree_out_inst__Inst_7, ((MR_Box) ((MR_String) "")), &parse_tree__parse_tree_out_inst__conv0_String_8);
    }
    parse_tree__parse_tree_out_inst__String_8 = ((MR_String) parse_tree__parse_tree_out_inst__conv0_String_8);
    return parse_tree__parse_tree_out_inst__String_8;
  }
}

void MR_CALL 
parse_tree__parse_tree_out_inst__mercury_output_inst_5_p_0(
  MR_Word parse_tree__parse_tree_out_inst__Lang_6,
  MR_Word parse_tree__parse_tree_out_inst__InstVarSet_7,
  MR_Word parse_tree__parse_tree_out_inst__Inst_8)
{
  {
    MR_bool parse_tree__parse_tree_out_inst__succeeded;
    MR_Box parse_tree__parse_tree_out_inst__conv0_STATE_VARIABLE_IO_11;

    {
      parse_tree__parse_tree_out_inst__mercury_format_inst_5_p_0((MR_Word) &parse_tree__parse_tree_out_inst_scalar_common_1[0], parse_tree__parse_tree_out_inst__Lang_6, parse_tree__parse_tree_out_inst__InstVarSet_7, parse_tree__parse_tree_out_inst__Inst_8, ((MR_Box) ((MR_Integer) 0)), &parse_tree__parse_tree_out_inst__conv0_STATE_VARIABLE_IO_11);
    }
  }
}

MR_String MR_CALL 
parse_tree__parse_tree_out_inst__mercury_inst_list_to_string_3_f_0(
  MR_Word parse_tree__parse_tree_out_inst__Lang_5,
  MR_Word parse_tree__parse_tree_out_inst__InstVarSet_6,
  MR_Word parse_tree__parse_tree_out_inst__Insts_7)
{
  {
    MR_bool parse_tree__parse_tree_out_inst__succeeded;
    MR_String parse_tree__parse_tree_out_inst__String_8;
    MR_Box parse_tree__parse_tree_out_inst__conv0_String_8;

    {
      parse_tree__parse_tree_out_inst__mercury_format_inst_list_5_p_0((MR_Word) &parse_tree__parse_tree_out_inst_scalar_common_1[1], parse_tree__parse_tree_out_inst__Lang_5, parse_tree__parse_tree_out_inst__InstVarSet_6, parse_tree__parse_tree_out_inst__Insts_7, ((MR_Box) ((MR_String) "")), &parse_tree__parse_tree_out_inst__conv0_String_8);
    }
    parse_tree__parse_tree_out_inst__String_8 = ((MR_String) parse_tree__parse_tree_out_inst__conv0_String_8);
    return parse_tree__parse_tree_out_inst__String_8;
  }
}

void MR_CALL 
parse_tree__parse_tree_out_inst__mercury_output_inst_list_5_p_0(
  MR_Word parse_tree__parse_tree_out_inst__Lang_6,
  MR_Word parse_tree__parse_tree_out_inst__InstVarSet_7,
  MR_Word parse_tree__parse_tree_out_inst__Insts_8)
{
  {
    MR_bool parse_tree__parse_tree_out_inst__succeeded;
    MR_Box parse_tree__parse_tree_out_inst__conv0_STATE_VARIABLE_IO_11;

    {
      parse_tree__parse_tree_out_inst__mercury_format_inst_list_5_p_0((MR_Word) &parse_tree__parse_tree_out_inst_scalar_common_1[0], parse_tree__parse_tree_out_inst__Lang_6, parse_tree__parse_tree_out_inst__InstVarSet_7, parse_tree__parse_tree_out_inst__Insts_8, ((MR_Box) ((MR_Integer) 0)), &parse_tree__parse_tree_out_inst__conv0_STATE_VARIABLE_IO_11);
    }
  }
}

void mercury__parse_tree__parse_tree_out_inst__init(void)
{
}

void mercury__parse_tree__parse_tree_out_inst__init_type_tables(void)
{
}

void mercury__parse_tree__parse_tree_out_inst__init_debugger(void)
{
	MR_fatal_error("debugger initialization in MLDS grade");
}

/* ensure everything is compiled with the same grade */
static const void *const MR_grade = &MR_GRADE_VAR;

/* :- end_module parse_tree.parse_tree_out_inst. */
