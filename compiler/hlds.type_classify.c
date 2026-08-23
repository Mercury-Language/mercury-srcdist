/*
** Automatically generated from `type_classify.m'
** by the Mercury compiler,
** version rotd-2026-08-23
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


// :- module hlds.type_classify.
// :- implementation.

/*
INIT mercury__hlds__type_classify__init
ENDINIT
*/

#include "hlds.type_classify.mih"


#include "analysis.mih"
#include "array.mih"
#include "assoc_list.mih"
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
#include "getopt.mih"
#include "hlds.mih"
#include "integer.mih"
#include "io.mih"
#include "libs.mih"
#include "list.mih"
#include "map.mih"
#include "maybe.mih"
#include "mdbcomp.mih"
#include "multi_map.mih"
#include "one_or_more.mih"
#include "one_or_more_map.mih"
#include "pair.mih"
#include "parse_tree.mih"
#include "pretty_printer.mih"
#include "private_builtin.mih"
#include "queue.mih"
#include "recompilation.mih"
#include "require.mih"
#include "set.mih"
#include "set_ordlist.mih"
#include "set_tree234.mih"
#include "sparse_bitset.mih"
#include "stream.mih"
#include "string.mih"
#include "term.mih"
#include "term_context.mih"
#include "time.mih"
#include "tree234.mih"
#include "type_desc.mih"
#include "unit.mih"
#include "univ.mih"
#include "varset.mih"
#include "analysis.framework.mih"
#include "analysis.operations.mih"
#include "check_hlds.proc_requests.mih"
#include "hlds.const_struct.mih"
#include "hlds.hlds_class.mih"
#include "hlds.hlds_cons.mih"
#include "hlds.hlds_data.mih"
#include "hlds.hlds_dependency_graph.mih"
#include "hlds.hlds_inst_mode.mih"
#include "hlds.hlds_module.mih"
#include "hlds.hlds_pred.mih"
#include "hlds.hlds_proc.mih"
#include "hlds.hlds_promise.mih"
#include "hlds.pred_proc_id.mih"
#include "hlds.pred_table.mih"
#include "hlds.proc_info_types.mih"
#include "hlds.special_pred.mih"
#include "hlds.status.mih"
#include "libs.dependency_graph.mih"
#include "libs.file_util.mih"
#include "libs.globals.mih"
#include "libs.op_mode.mih"
#include "libs.optdb_help.mih"
#include "libs.optimization_options.mih"
#include "libs.option_categories.mih"
#include "libs.options.mih"
#include "libs.trace_params.mih"
#include "mdbcomp.builtin_modules.mih"
#include "mdbcomp.feedback.mih"
#include "mdbcomp.prim_data.mih"
#include "mdbcomp.sym_name.mih"
#include "parse_tree.d_file_deps.mih"
#include "parse_tree.error_spec.mih"
#include "parse_tree.module_qual.mih"
#include "parse_tree.prog_data.mih"
#include "parse_tree.prog_data_event.mih"
#include "parse_tree.prog_data_foreign.mih"
#include "parse_tree.prog_data_pragma.mih"
#include "parse_tree.prog_data_used_modules.mih"
#include "parse_tree.prog_foreign.mih"
#include "parse_tree.prog_item.mih"
#include "parse_tree.prog_item_pragma.mih"
#include "parse_tree.prog_item_type.mih"
#include "parse_tree.prog_parse_tree.mih"
#include "parse_tree.prog_type.mih"
#include "parse_tree.prog_util.mih"
#include "parse_tree.set_of_var.mih"
#include "recompilation.record_uses.mih"
#include "mdbcomp.feedback.feedback_info.mih"
#include "parse_tree.module_qual.mq_info.mih"





static /* final */ const MR_Box hlds__type_classify_scalar_common_1[9][2];

static /* final */ const MR_Box hlds__type_classify_scalar_common_2[24][1];


struct hlds__type_classify__vector_common_type_3_0_s {
  const MR_Word hlds__type_classify__vector_common_type_3_0__vct_3_f_0;
};

static /* final */ const struct hlds__type_classify__vector_common_type_3_0_s hlds__type_classify_vector_common_3[4];



static /* final */ const MR_Box hlds__type_classify_scalar_common_1[9][2] = {
  /* row   0 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 0U)),
    (MR_Box) ((MR_Unsigned) 3U)
  },
  /* row   1 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 0U)),
    (MR_Box) ((MR_Unsigned) 1U)
  },
  /* row   2 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 0U)),
    (MR_Box) ((MR_Unsigned) 0U)
  },
  /* row   3 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 0U)),
    (MR_Box) ((MR_Unsigned) 2U)
  },
  /* row   4 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 1U)),
    (MR_Box) ((MR_Unsigned) 1U)
  },
  /* row   5 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 1U)),
    (MR_Box) ((MR_Unsigned) 3U)
  },
  /* row   6 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 1U)),
    (MR_Box) ((MR_Unsigned) 4U)
  },
  /* row   7 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 1U)),
    (MR_Box) ((MR_Unsigned) 0U)
  },
  /* row   8 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 1U)),
    (MR_Box) ((MR_Unsigned) 2U)
  },
};

static /* final */ const MR_Box hlds__type_classify_scalar_common_2[24][1] = {
  /* row   0 */
  { ((MR_Box) ((MR_Unsigned) 4U)) },
  /* row   1 */
  { ((MR_Box) ((MR_Unsigned) 0U)) },
  /* row   2 */
  { (MR_Box) ((MR_Unsigned) 0U) },
  /* row   3 */
  { ((MR_Box) (MR_mkword(1, &hlds__type_classify_scalar_common_2[2]))) },
  /* row   4 */
  { (MR_Box) ((MR_Unsigned) 4U) },
  /* row   5 */
  { ((MR_Box) (MR_mkword(1, &hlds__type_classify_scalar_common_2[4]))) },
  /* row   6 */
  { (MR_Box) ((MR_Unsigned) 6U) },
  /* row   7 */
  { ((MR_Box) (MR_mkword(1, &hlds__type_classify_scalar_common_2[6]))) },
  /* row   8 */
  { (MR_Box) ((MR_Unsigned) 8U) },
  /* row   9 */
  { ((MR_Box) (MR_mkword(1, &hlds__type_classify_scalar_common_2[8]))) },
  /* row  10 */
  { (MR_Box) ((MR_Unsigned) 2U) },
  /* row  11 */
  { ((MR_Box) (MR_mkword(1, &hlds__type_classify_scalar_common_2[10]))) },
  /* row  12 */
  { ((MR_Box) ((MR_Unsigned) 8U)) },
  /* row  13 */
  { (MR_Box) ((MR_Unsigned) 1U) },
  /* row  14 */
  { ((MR_Box) (MR_mkword(1, &hlds__type_classify_scalar_common_2[13]))) },
  /* row  15 */
  { (MR_Box) ((MR_Unsigned) 5U) },
  /* row  16 */
  { ((MR_Box) (MR_mkword(1, &hlds__type_classify_scalar_common_2[15]))) },
  /* row  17 */
  { (MR_Box) ((MR_Unsigned) 7U) },
  /* row  18 */
  { ((MR_Box) (MR_mkword(1, &hlds__type_classify_scalar_common_2[17]))) },
  /* row  19 */
  { (MR_Box) ((MR_Unsigned) 9U) },
  /* row  20 */
  { ((MR_Box) (MR_mkword(1, &hlds__type_classify_scalar_common_2[19]))) },
  /* row  21 */
  { (MR_Box) ((MR_Unsigned) 3U) },
  /* row  22 */
  { ((MR_Box) (MR_mkword(1, &hlds__type_classify_scalar_common_2[21]))) },
  /* row  23 */
  { ((MR_Box) ((MR_String) "store")) },
};


static /* final */ const struct hlds__type_classify__vector_common_type_3_0_s hlds__type_classify_vector_common_3[4] = {
  /* row   0 */   { (MR_Integer) 1 },
  /* row   1 */   { (MR_Integer) 0 },
  /* row   2 */   { (MR_Integer) 1 },
  /* row   3 */   { (MR_Integer) 1 },
};


#include "array.mh"
#include "bitmap.mh"
#include "io.mh"
#include "string.mh"
#include "time.mh"
#include "io.stream_ops.mh"


void MR_CALL 
hlds__type_classify__update_type_may_use_atomic_alloc_4_p_0(
  MR_Word ModuleInfo_5,
  MR_Word Type_6,
  MR_Word STATE_VARIABLE_MayUseAtomic_0_8,
  MR_Word * STATE_VARIABLE_MayUseAtomic_9)
{
  switch (STATE_VARIABLE_MayUseAtomic_0_8) {
    default: /*NOTREACHED*/ MR_assert(0);
    case (MR_Integer) 1:
      *STATE_VARIABLE_MayUseAtomic_9 = STATE_VARIABLE_MayUseAtomic_0_8;
      break;
    case (MR_Integer) 0:
      *STATE_VARIABLE_MayUseAtomic_9 = hlds__type_classify__type_may_use_atomic_alloc_2_f_0(ModuleInfo_5, Type_6);
      break;
  }
}

MR_Word MR_CALL 
hlds__type_classify__type_may_use_atomic_alloc_2_f_0(
  MR_Word ModuleInfo_4,
  MR_Word Type_5)
{
  MR_Word TypeMayUseAtomic_6;
  MR_Word TypeCategory_7;

  TypeCategory_7 = hlds__type_classify__classify_type_2_f_0(ModuleInfo_4, Type_5);
  switch (MR_tag((MR_Word) TypeCategory_7)) {
    default: /*NOTREACHED*/ MR_assert(0);
    case (MR_Integer) 0:
      switch (MR_unmkbody(TypeCategory_7)) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 0:
          TypeMayUseAtomic_6 = (MR_Integer) 0;
          break;
        case (MR_Integer) 1:
          TypeMayUseAtomic_6 = (MR_Integer) 1;
          break;
        case (MR_Integer) 2:
          TypeMayUseAtomic_6 = (MR_Integer) 1;
          break;
        case (MR_Integer) 3:
          TypeMayUseAtomic_6 = (MR_Integer) 1;
          break;
        case (MR_Integer) 4:
          TypeMayUseAtomic_6 = (MR_Integer) 1;
          break;
      }
      break;
    case (MR_Integer) 1:
      {
        MR_Word Var_25 = ((MR_Word) ((MR_hl_field(1, TypeCategory_7, 0))));

        switch (MR_tag((MR_Word) Var_25)) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
            switch (MR_unmkbody(Var_25)) {
              default: /*NOTREACHED*/ MR_assert(0);
              case (MR_Integer) 0:
                {
                  MR_Word UBF_12;
                  MR_Word Globals_24;

                  hlds__hlds_module__module_info_get_globals_2_p_0(ModuleInfo_4, &Globals_24);
                  libs__globals__lookup_bool_option_3_p_0(Globals_24, (MR_Integer) 104, &UBF_12);
                  switch (UBF_12) {
                    default: /*NOTREACHED*/ MR_assert(0);
                    case (MR_Integer) 0:
                      TypeMayUseAtomic_6 = (MR_Integer) 1;
                      break;
                    case (MR_Integer) 1:
                      TypeMayUseAtomic_6 = (MR_Integer) 0;
                      break;
                  }
                }
                break;
              case (MR_Integer) 1:
                TypeMayUseAtomic_6 = (MR_Integer) 0;
                break;
              case (MR_Integer) 2:
                TypeMayUseAtomic_6 = (MR_Integer) 1;
                break;
            }
            break;
          case (MR_Integer) 1:
            {
              MR_Word IntType_8 = ((MR_Unsigned) ((MR_hl_field(1, Var_25, 0))) & (MR_Integer) 15);

              switch (IntType_8) {
                default: /*NOTREACHED*/ MR_assert(0);
                case (MR_Integer) 0:
                case (MR_Integer) 4:
                case (MR_Integer) 6:
                case (MR_Integer) 2:
                case (MR_Integer) 1:
                case (MR_Integer) 5:
                case (MR_Integer) 7:
                case (MR_Integer) 3:
                  TypeMayUseAtomic_6 = (MR_Integer) 0;
                  break;
                case (MR_Integer) 8:
                case (MR_Integer) 9:
                  {
                    MR_Word Globals_9;
                    MR_Word UBI64_10;

                    hlds__hlds_module__module_info_get_globals_2_p_0(ModuleInfo_4, &Globals_9);
                    libs__globals__lookup_bool_option_3_p_0(Globals_9, (MR_Integer) 105, &UBI64_10);
                    switch (UBI64_10) {
                      default: /*NOTREACHED*/ MR_assert(0);
                      case (MR_Integer) 0:
                        TypeMayUseAtomic_6 = (MR_Integer) 1;
                        break;
                      case (MR_Integer) 1:
                        TypeMayUseAtomic_6 = (MR_Integer) 0;
                        break;
                    }
                  }
                  break;
              }
            }
            break;
        }
      }
      break;
    case (MR_Integer) 2:
      TypeMayUseAtomic_6 = (MR_Integer) 0;
      break;
    case (MR_Integer) 3:
      switch (((MR_Integer) ((MR_hl_field(3, TypeCategory_7, 0))))) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 0:
          {
            MR_Word Var_26 = ((MR_Unsigned) ((MR_hl_field(3, TypeCategory_7, 1))) & (MR_Integer) 3);

            TypeMayUseAtomic_6 = ((&hlds__type_classify_vector_common_3[0 + Var_26]))->hlds__type_classify__vector_common_type_3_0__vct_3_f_0;
          }
          break;
        case (MR_Integer) 1:
          TypeMayUseAtomic_6 = (MR_Integer) 1;
          break;
      }
      break;
  }
  return TypeMayUseAtomic_6;
}

MR_bool MR_CALL 
hlds__type_classify__type_is_atomic_2_p_0(
  MR_Word ModuleInfo_3,
  MR_Word Type_4)
{
  MR_bool succeeded;
  MR_Word TypeCtor_5;

  succeeded = parse_tree__prog_type__type_to_ctor_2_p_0(Type_4, &TypeCtor_5);
  if (succeeded)
    succeeded = hlds__type_classify__type_ctor_is_atomic_2_p_0(ModuleInfo_3, TypeCtor_5);
  return succeeded;
}

MR_bool MR_CALL 
hlds__type_classify__type_ctor_is_atomic_2_p_0(
  MR_Word ModuleInfo_3,
  MR_Word TypeCtor_4)
{
  MR_bool succeeded;
  MR_Word TypeCategory_5;
  MR_Word TypeCategoryPrime_7;

  succeeded = hlds__type_classify__classify_type_ctor_if_special_2_p_0(TypeCtor_4, &TypeCategoryPrime_7);
  if (succeeded)
    TypeCategory_5 = TypeCategoryPrime_7;
  else
  {
    MR_Word TypeTable_8;
    MR_Word TypeDefn_9;
    MR_Word TypeBody_10;

    hlds__hlds_module__module_info_get_type_table_2_p_0(ModuleInfo_3, &TypeTable_8);
    hlds__hlds_data__lookup_type_ctor_defn_3_p_0(TypeTable_8, TypeCtor_4, &TypeDefn_9);
    hlds__hlds_data__get_type_defn_body_2_p_0(TypeDefn_9, &TypeBody_10);
    TypeCategory_5 = hlds__type_classify__classify_type_defn_body_1_f_0(TypeBody_10);
  }
  switch (MR_tag((MR_Word) TypeCategory_5)) {
    default:
      succeeded = MR_FALSE;
      break;
    case (MR_Integer) 0:
      switch (MR_unmkbody(TypeCategory_5)) {
        default:
          succeeded = MR_FALSE;
          break;
        case (MR_Integer) 0:
          succeeded = MR_TRUE;
          break;
        case (MR_Integer) 1:
          succeeded = MR_TRUE;
          break;
      }
      break;
    case (MR_Integer) 1:
      succeeded = MR_TRUE;
      break;
    case (MR_Integer) 2:
      succeeded = MR_TRUE;
      break;
    case (MR_Integer) 3:
      switch (((MR_Integer) ((MR_hl_field(3, TypeCategory_5, 0))))) {
        default:
          succeeded = MR_FALSE;
          break;
        case (MR_Integer) 1:
          {
            MR_Word Var_19 = ((MR_Unsigned) ((MR_hl_field(3, TypeCategory_5, 1))) & (MR_Integer) 7);

            switch (Var_19) {
              default:
                succeeded = MR_FALSE;
                break;
              case (MR_Integer) 1:
                succeeded = MR_TRUE;
                break;
              case (MR_Integer) 0:
                succeeded = MR_TRUE;
                break;
            }
          }
          break;
      }
      break;
  }
  return succeeded;
}

MR_Word MR_CALL 
hlds__type_classify__classify_type_ctor_2_f_0(
  MR_Word ModuleInfo_4,
  MR_Word TypeCtor_5)
{
  MR_bool succeeded;
  MR_Word TypeCategory_6;
  MR_Word TypeCategoryPrime_7;

  succeeded = hlds__type_classify__classify_type_ctor_if_special_2_p_0(TypeCtor_5, &TypeCategoryPrime_7);
  if (succeeded)
    TypeCategory_6 = TypeCategoryPrime_7;
  else
  {
    MR_Word TypeTable_8;
    MR_Word TypeDefn_9;
    MR_Word TypeBody_10;

    hlds__hlds_module__module_info_get_type_table_2_p_0(ModuleInfo_4, &TypeTable_8);
    hlds__hlds_data__lookup_type_ctor_defn_3_p_0(TypeTable_8, TypeCtor_5, &TypeDefn_9);
    hlds__hlds_data__get_type_defn_body_2_p_0(TypeDefn_9, &TypeBody_10);
    TypeCategory_6 = hlds__type_classify__classify_type_defn_body_1_f_0(TypeBody_10);
  }
  return TypeCategory_6;
}

MR_Word MR_CALL 
hlds__type_classify__classify_type_2_f_0(
  MR_Word ModuleInfo_4,
  MR_Word Type_5)
{
  MR_bool succeeded;
  MR_Word TypeCategory_6;
  MR_Word TypeCtor_7;

  succeeded = parse_tree__prog_type__type_to_ctor_2_p_0(Type_5, &TypeCtor_7);
  if (succeeded)
  {
    MR_Word TypeCategoryPrime_8;

    succeeded = hlds__type_classify__classify_type_ctor_if_special_2_p_0(TypeCtor_7, &TypeCategoryPrime_8);
    if (succeeded)
      TypeCategory_6 = TypeCategoryPrime_8;
    else
    {
      MR_Word TypeTable_9;
      MR_Word TypeDefn_10;
      MR_Word TypeBody_11;

      hlds__hlds_module__module_info_get_type_table_2_p_0(ModuleInfo_4, &TypeTable_9);
      hlds__hlds_data__lookup_type_ctor_defn_3_p_0(TypeTable_9, TypeCtor_7, &TypeDefn_10);
      hlds__hlds_data__get_type_defn_body_2_p_0(TypeDefn_10, &TypeBody_11);
      TypeCategory_6 = hlds__type_classify__classify_type_defn_body_1_f_0(TypeBody_11);
    }
  }
  else
    TypeCategory_6 = (MR_Word) ((MR_Unsigned) 8U);
  return TypeCategory_6;
}

MR_Word MR_CALL 
hlds__type_classify__classify_type_defn_body_1_f_0(
  MR_Word TypeBody_3)
{
  MR_Word TypeCategory_4;

  switch (MR_tag((MR_Word) TypeBody_3)) {
    default: /*NOTREACHED*/ MR_assert(0);
    case (MR_Integer) 0:
      {
        MR_Word TypeBodyDu_5 = (MR_Word) ((MR_Word) (TypeBody_3));
        MR_Word MaybeTypeRepn_10 = ((MR_Word) ((MR_hl_field(0, TypeBodyDu_5, 4))));
        MR_Word Repn_12;
        MR_Word DuTypeKind_13;

        if ((MaybeTypeRepn_10 == (MR_Word) ((MR_Unsigned) 0U)))
          mercury__require__unexpected_2_p_0((MR_String) "function \140hlds.type_classify.classify_type_defn_body\'/1", (MR_String) "MaybeTypeRepn = no");
        else
          Repn_12 = ((MR_Word) ((MR_hl_field(1, MaybeTypeRepn_10, 0))));
        DuTypeKind_13 = ((MR_Word) ((MR_hl_field(0, Repn_12, 3))));
        switch (MR_tag((MR_Word) DuTypeKind_13)) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
            switch (MR_unmkbody(DuTypeKind_13)) {
              default: /*NOTREACHED*/ MR_assert(0);
              case (MR_Integer) 0:
                TypeCategory_4 = (MR_Word) (MR_mkword(2, &hlds__type_classify_scalar_common_2[2]));
                break;
              case (MR_Integer) 1:
                TypeCategory_4 = (MR_Word) (MR_mkword(3, &hlds__type_classify_scalar_common_1[7]));
                break;
              case (MR_Integer) 2:
                TypeCategory_4 = (MR_Word) (MR_mkword(3, &hlds__type_classify_scalar_common_1[6]));
                break;
            }
            break;
          case (MR_Integer) 1:
            TypeCategory_4 = (MR_Word) (MR_mkword(2, &hlds__type_classify_scalar_common_2[13]));
            break;
          case (MR_Integer) 2:
            TypeCategory_4 = (MR_Word) (MR_mkword(3, &hlds__type_classify_scalar_common_1[8]));
            break;
        }
      }
      break;
    case (MR_Integer) 1:
    case (MR_Integer) 2:
      TypeCategory_4 = (MR_Word) (MR_mkword(3, &hlds__type_classify_scalar_common_1[6]));
      break;
    case (MR_Integer) 3:
      switch (((MR_Integer) ((MR_hl_field(3, TypeBody_3, 0))))) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 0:
          TypeCategory_4 = (MR_Word) (MR_mkword(3, &hlds__type_classify_scalar_common_1[6]));
          break;
        case (MR_Integer) 1:
          {
            MR_Word AbstractDetails_18 = ((MR_Word) ((MR_hl_field(3, TypeBody_3, 1))));

            switch (MR_tag((MR_Word) AbstractDetails_18)) {
              default: /*NOTREACHED*/ MR_assert(0);
              case (MR_Integer) 0:
                switch (MR_unmkbody(AbstractDetails_18)) {
                  default: /*NOTREACHED*/ MR_assert(0);
                  case (MR_Integer) 0:
                  case (MR_Integer) 3:
                    TypeCategory_4 = (MR_Word) (MR_mkword(3, &hlds__type_classify_scalar_common_1[6]));
                    break;
                  case (MR_Integer) 1:
                    TypeCategory_4 = (MR_Word) (MR_mkword(3, &hlds__type_classify_scalar_common_1[4]));
                    break;
                  case (MR_Integer) 2:
                    TypeCategory_4 = (MR_Word) (MR_mkword(3, &hlds__type_classify_scalar_common_1[5]));
                    break;
                }
                break;
              case (MR_Integer) 1:
              case (MR_Integer) 2:
                TypeCategory_4 = (MR_Word) (MR_mkword(3, &hlds__type_classify_scalar_common_1[6]));
                break;
            }
          }
          break;
      }
      break;
  }
  return TypeCategory_4;
}

MR_bool MR_CALL 
hlds__type_classify__classify_type_ctor_if_special_2_p_0(
  MR_Word TypeCtor_3,
  MR_Word * TypeCategory_4)
{
  MR_bool succeeded;
  MR_Word TypeSymName_5 = ((MR_Word) ((MR_hl_field(0, TypeCtor_3, 0))));
  MR_Integer Arity_6 = ((MR_Integer) ((MR_hl_field(0, TypeCtor_3, 1))));
  MR_String TypeName_7;

  if (((MR_tag((MR_Word) TypeSymName_5)) == (MR_Integer) 1))
    TypeName_7 = ((MR_String) ((MR_hl_field(1, TypeSymName_5, 1))));
  else
    TypeName_7 = ((MR_String) ((MR_hl_field(0, TypeSymName_5, 0))));
  {
    MR_Integer case_num_0 = (MR_Integer) -1;

    switch (MR_nth_code_unit(TypeName_7, 0)) {
      case (MR_Integer) 98:
        if (MR_offset_streq(1, TypeName_7, (MR_String) "base_typeclass_info"))
          case_num_0 = (MR_Integer) 0;
        break;
      case (MR_Integer) 99:
        if (MR_offset_streq(1, TypeName_7, (MR_String) "character"))
          case_num_0 = (MR_Integer) 4;
        break;
      case (MR_Integer) 102:
        switch (MR_nth_code_unit(TypeName_7, 1)) {
          case (MR_Integer) 108:
            if (MR_offset_streq(2, TypeName_7, (MR_String) "float"))
              case_num_0 = (MR_Integer) 5;
            break;
          case (MR_Integer) 117:
            if (MR_offset_streq(2, TypeName_7, (MR_String) "func"))
              case_num_0 = (MR_Integer) 18;
            break;
        }
        break;
      case (MR_Integer) 105:
        if (MR_offset_strn_eq(1, 2, TypeName_7, (MR_String) "int"))
          switch (MR_nth_code_unit(TypeName_7, 3)) {
            case (MR_Integer) 0:
              case_num_0 = (MR_Integer) 6;
              break;
            case (MR_Integer) 49:
              if (MR_offset_streq(4, TypeName_7, (MR_String) "int16"))
                case_num_0 = (MR_Integer) 7;
              break;
            case (MR_Integer) 51:
              if (MR_offset_streq(4, TypeName_7, (MR_String) "int32"))
                case_num_0 = (MR_Integer) 8;
              break;
            case (MR_Integer) 54:
              if (MR_offset_streq(4, TypeName_7, (MR_String) "int64"))
                case_num_0 = (MR_Integer) 9;
              break;
            case (MR_Integer) 56:
              if (MR_offset_streq(4, TypeName_7, (MR_String) "int8"))
                case_num_0 = (MR_Integer) 10;
              break;
          }
        break;
      case (MR_Integer) 112:
        if (MR_offset_streq(1, TypeName_7, (MR_String) "pred"))
          case_num_0 = (MR_Integer) 18;
        break;
      case (MR_Integer) 115:
        switch (MR_nth_code_unit(TypeName_7, 1)) {
          case (MR_Integer) 116:
            switch (MR_nth_code_unit(TypeName_7, 2)) {
              case (MR_Integer) 97:
                if (MR_offset_streq(3, TypeName_7, (MR_String) "state"))
                  case_num_0 = (MR_Integer) 19;
                break;
              case (MR_Integer) 111:
                if (MR_offset_streq(3, TypeName_7, (MR_String) "store"))
                  case_num_0 = (MR_Integer) 20;
                break;
              case (MR_Integer) 114:
                if (MR_offset_streq(3, TypeName_7, (MR_String) "string"))
                  case_num_0 = (MR_Integer) 11;
                break;
            }
            break;
        }
        break;
      case (MR_Integer) 116:
        switch (MR_nth_code_unit(TypeName_7, 1)) {
          case (MR_Integer) 117:
            if (MR_offset_streq(2, TypeName_7, (MR_String) "tuple"))
              case_num_0 = (MR_Integer) 21;
            break;
          case (MR_Integer) 121:
            if (MR_offset_strn_eq(2, 2, TypeName_7, (MR_String) "type"))
              switch (MR_nth_code_unit(TypeName_7, 4)) {
                case (MR_Integer) 95:
                  switch (MR_nth_code_unit(TypeName_7, 5)) {
                    case (MR_Integer) 99:
                      if (MR_offset_streq(6, TypeName_7, (MR_String) "type_ctor_info"))
                        case_num_0 = (MR_Integer) 1;
                      break;
                    case (MR_Integer) 105:
                      if (MR_offset_streq(6, TypeName_7, (MR_String) "type_info"))
                        case_num_0 = (MR_Integer) 2;
                      break;
                  }
                  break;
                case (MR_Integer) 99:
                  if (MR_offset_streq(5, TypeName_7, (MR_String) "typeclass_info"))
                    case_num_0 = (MR_Integer) 3;
                  break;
              }
            break;
        }
        break;
      case (MR_Integer) 117:
        if (MR_offset_strn_eq(1, 3, TypeName_7, (MR_String) "uint"))
          switch (MR_nth_code_unit(TypeName_7, 4)) {
            case (MR_Integer) 0:
              case_num_0 = (MR_Integer) 12;
              break;
            case (MR_Integer) 49:
              if (MR_offset_streq(5, TypeName_7, (MR_String) "uint16"))
                case_num_0 = (MR_Integer) 13;
              break;
            case (MR_Integer) 51:
              if (MR_offset_streq(5, TypeName_7, (MR_String) "uint32"))
                case_num_0 = (MR_Integer) 14;
              break;
            case (MR_Integer) 54:
              if (MR_offset_streq(5, TypeName_7, (MR_String) "uint64"))
                case_num_0 = (MR_Integer) 15;
              break;
            case (MR_Integer) 56:
              if (MR_offset_streq(5, TypeName_7, (MR_String) "uint8"))
                case_num_0 = (MR_Integer) 16;
              break;
          }
        break;
      case (MR_Integer) 118:
        if (MR_offset_streq(1, TypeName_7, (MR_String) "void"))
          case_num_0 = (MR_Integer) 17;
        break;
      case (MR_Integer) 123:
        if (MR_offset_streq(1, TypeName_7, (MR_String) "{}"))
          case_num_0 = (MR_Integer) 22;
        break;
    }
    switch (case_num_0) {
      default:
        succeeded = MR_FALSE;
        break;
      case (MR_Integer) 0:
        {
          // case "base_typeclass_info"
          ;
          {
            MR_Word ModuleSymName_45;
            MR_Word Var_72;

            *TypeCategory_4 = (MR_Word) (MR_mkword(3, &hlds__type_classify_scalar_common_1[0]));
            succeeded = ((MR_tag((MR_Word) TypeSymName_5)) == (MR_Integer) 1);
            if (succeeded)
            {
              ModuleSymName_45 = ((MR_Word) ((MR_hl_field(1, TypeSymName_5, 0))));
              Var_72 = mdbcomp__builtin_modules__mercury_private_builtin_module_0_f_0();
              succeeded = mdbcomp__sym_name____Unify____sym_name_0_0(ModuleSymName_45, Var_72);
              if (succeeded)
                succeeded = (Arity_6 == (MR_Integer) 0);
            }
          }
        }
        break;
      case (MR_Integer) 1:
        {
          // case "type_ctor_info"
          ;
          {
            MR_Word ModuleSymName_90;
            MR_Word Var_91;

            *TypeCategory_4 = (MR_Word) (MR_mkword(3, &hlds__type_classify_scalar_common_1[1]));
            succeeded = ((MR_tag((MR_Word) TypeSymName_5)) == (MR_Integer) 1);
            if (succeeded)
            {
              ModuleSymName_90 = ((MR_Word) ((MR_hl_field(1, TypeSymName_5, 0))));
              Var_91 = mdbcomp__builtin_modules__mercury_private_builtin_module_0_f_0();
              succeeded = mdbcomp__sym_name____Unify____sym_name_0_0(ModuleSymName_90, Var_91);
              if (succeeded)
                succeeded = (Arity_6 == (MR_Integer) 0);
            }
          }
        }
        break;
      case (MR_Integer) 2:
        {
          // case "type_info"
          ;
          {
            MR_Word ModuleSymName_95;
            MR_Word Var_96;

            *TypeCategory_4 = (MR_Word) (MR_mkword(3, &hlds__type_classify_scalar_common_1[2]));
            succeeded = ((MR_tag((MR_Word) TypeSymName_5)) == (MR_Integer) 1);
            if (succeeded)
            {
              ModuleSymName_95 = ((MR_Word) ((MR_hl_field(1, TypeSymName_5, 0))));
              Var_96 = mdbcomp__builtin_modules__mercury_private_builtin_module_0_f_0();
              succeeded = mdbcomp__sym_name____Unify____sym_name_0_0(ModuleSymName_95, Var_96);
              if (succeeded)
                succeeded = (Arity_6 == (MR_Integer) 0);
            }
          }
        }
        break;
      case (MR_Integer) 3:
        {
          // case "typeclass_info"
          ;
          {
            MR_Word ModuleSymName_100;
            MR_Word Var_101;

            *TypeCategory_4 = (MR_Word) (MR_mkword(3, &hlds__type_classify_scalar_common_1[3]));
            succeeded = ((MR_tag((MR_Word) TypeSymName_5)) == (MR_Integer) 1);
            if (succeeded)
            {
              ModuleSymName_100 = ((MR_Word) ((MR_hl_field(1, TypeSymName_5, 0))));
              Var_101 = mdbcomp__builtin_modules__mercury_private_builtin_module_0_f_0();
              succeeded = mdbcomp__sym_name____Unify____sym_name_0_0(ModuleSymName_100, Var_101);
              if (succeeded)
                succeeded = (Arity_6 == (MR_Integer) 0);
            }
          }
        }
        break;
      case (MR_Integer) 4:
        {
          // case "character"
          ;
          *TypeCategory_4 = (MR_Word) (MR_mkword(1, &hlds__type_classify_scalar_common_2[0]));
          if (((MR_tag((MR_Word) TypeSymName_5)) == (MR_Integer) 1))
          {
            MR_Word ModuleSymName_10 = ((MR_Word) ((MR_hl_field(1, TypeSymName_5, 0))));
            MR_Word Var_71;

            Var_71 = mdbcomp__builtin_modules__mercury_public_builtin_module_0_f_0();
            succeeded = mdbcomp__sym_name____Unify____sym_name_0_0(ModuleSymName_10, Var_71);
          }
          else
            succeeded = MR_TRUE;
          if (succeeded)
            succeeded = (Arity_6 == (MR_Integer) 0);
        }
        break;
      case (MR_Integer) 5:
        {
          // case "float"
          ;
          *TypeCategory_4 = (MR_Word) (MR_mkword(1, &hlds__type_classify_scalar_common_2[1]));
          if (((MR_tag((MR_Word) TypeSymName_5)) == (MR_Integer) 1))
          {
            MR_Word ModuleSymName_104 = ((MR_Word) ((MR_hl_field(1, TypeSymName_5, 0))));
            MR_Word Var_106;

            Var_106 = mdbcomp__builtin_modules__mercury_public_builtin_module_0_f_0();
            succeeded = mdbcomp__sym_name____Unify____sym_name_0_0(ModuleSymName_104, Var_106);
          }
          else
            succeeded = MR_TRUE;
          if (succeeded)
            succeeded = (Arity_6 == (MR_Integer) 0);
        }
        break;
      case (MR_Integer) 6:
        {
          // case "int"
          ;
          *TypeCategory_4 = (MR_Word) (MR_mkword(1, &hlds__type_classify_scalar_common_2[3]));
          if (((MR_tag((MR_Word) TypeSymName_5)) == (MR_Integer) 1))
          {
            MR_Word ModuleSymName_117 = ((MR_Word) ((MR_hl_field(1, TypeSymName_5, 0))));
            MR_Word Var_119;

            Var_119 = mdbcomp__builtin_modules__mercury_public_builtin_module_0_f_0();
            succeeded = mdbcomp__sym_name____Unify____sym_name_0_0(ModuleSymName_117, Var_119);
          }
          else
            succeeded = MR_TRUE;
          if (succeeded)
            succeeded = (Arity_6 == (MR_Integer) 0);
        }
        break;
      case (MR_Integer) 7:
        {
          // case "int16"
          ;
          *TypeCategory_4 = (MR_Word) (MR_mkword(1, &hlds__type_classify_scalar_common_2[5]));
          if (((MR_tag((MR_Word) TypeSymName_5)) == (MR_Integer) 1))
          {
            MR_Word ModuleSymName_130 = ((MR_Word) ((MR_hl_field(1, TypeSymName_5, 0))));
            MR_Word Var_132;

            Var_132 = mdbcomp__builtin_modules__mercury_public_builtin_module_0_f_0();
            succeeded = mdbcomp__sym_name____Unify____sym_name_0_0(ModuleSymName_130, Var_132);
          }
          else
            succeeded = MR_TRUE;
          if (succeeded)
            succeeded = (Arity_6 == (MR_Integer) 0);
        }
        break;
      case (MR_Integer) 8:
        {
          // case "int32"
          ;
          *TypeCategory_4 = (MR_Word) (MR_mkword(1, &hlds__type_classify_scalar_common_2[7]));
          if (((MR_tag((MR_Word) TypeSymName_5)) == (MR_Integer) 1))
          {
            MR_Word ModuleSymName_143 = ((MR_Word) ((MR_hl_field(1, TypeSymName_5, 0))));
            MR_Word Var_145;

            Var_145 = mdbcomp__builtin_modules__mercury_public_builtin_module_0_f_0();
            succeeded = mdbcomp__sym_name____Unify____sym_name_0_0(ModuleSymName_143, Var_145);
          }
          else
            succeeded = MR_TRUE;
          if (succeeded)
            succeeded = (Arity_6 == (MR_Integer) 0);
        }
        break;
      case (MR_Integer) 9:
        {
          // case "int64"
          ;
          *TypeCategory_4 = (MR_Word) (MR_mkword(1, &hlds__type_classify_scalar_common_2[9]));
          if (((MR_tag((MR_Word) TypeSymName_5)) == (MR_Integer) 1))
          {
            MR_Word ModuleSymName_156 = ((MR_Word) ((MR_hl_field(1, TypeSymName_5, 0))));
            MR_Word Var_158;

            Var_158 = mdbcomp__builtin_modules__mercury_public_builtin_module_0_f_0();
            succeeded = mdbcomp__sym_name____Unify____sym_name_0_0(ModuleSymName_156, Var_158);
          }
          else
            succeeded = MR_TRUE;
          if (succeeded)
            succeeded = (Arity_6 == (MR_Integer) 0);
        }
        break;
      case (MR_Integer) 10:
        {
          // case "int8"
          ;
          *TypeCategory_4 = (MR_Word) (MR_mkword(1, &hlds__type_classify_scalar_common_2[11]));
          if (((MR_tag((MR_Word) TypeSymName_5)) == (MR_Integer) 1))
          {
            MR_Word ModuleSymName_169 = ((MR_Word) ((MR_hl_field(1, TypeSymName_5, 0))));
            MR_Word Var_171;

            Var_171 = mdbcomp__builtin_modules__mercury_public_builtin_module_0_f_0();
            succeeded = mdbcomp__sym_name____Unify____sym_name_0_0(ModuleSymName_169, Var_171);
          }
          else
            succeeded = MR_TRUE;
          if (succeeded)
            succeeded = (Arity_6 == (MR_Integer) 0);
        }
        break;
      case (MR_Integer) 11:
        {
          // case "string"
          ;
          *TypeCategory_4 = (MR_Word) (MR_mkword(1, &hlds__type_classify_scalar_common_2[12]));
          if (((MR_tag((MR_Word) TypeSymName_5)) == (MR_Integer) 1))
          {
            MR_Word ModuleSymName_182 = ((MR_Word) ((MR_hl_field(1, TypeSymName_5, 0))));
            MR_Word Var_184;

            Var_184 = mdbcomp__builtin_modules__mercury_public_builtin_module_0_f_0();
            succeeded = mdbcomp__sym_name____Unify____sym_name_0_0(ModuleSymName_182, Var_184);
          }
          else
            succeeded = MR_TRUE;
          if (succeeded)
            succeeded = (Arity_6 == (MR_Integer) 0);
        }
        break;
      case (MR_Integer) 12:
        {
          // case "uint"
          ;
          *TypeCategory_4 = (MR_Word) (MR_mkword(1, &hlds__type_classify_scalar_common_2[14]));
          if (((MR_tag((MR_Word) TypeSymName_5)) == (MR_Integer) 1))
          {
            MR_Word ModuleSymName_195 = ((MR_Word) ((MR_hl_field(1, TypeSymName_5, 0))));
            MR_Word Var_197;

            Var_197 = mdbcomp__builtin_modules__mercury_public_builtin_module_0_f_0();
            succeeded = mdbcomp__sym_name____Unify____sym_name_0_0(ModuleSymName_195, Var_197);
          }
          else
            succeeded = MR_TRUE;
          if (succeeded)
            succeeded = (Arity_6 == (MR_Integer) 0);
        }
        break;
      case (MR_Integer) 13:
        {
          // case "uint16"
          ;
          *TypeCategory_4 = (MR_Word) (MR_mkword(1, &hlds__type_classify_scalar_common_2[16]));
          if (((MR_tag((MR_Word) TypeSymName_5)) == (MR_Integer) 1))
          {
            MR_Word ModuleSymName_208 = ((MR_Word) ((MR_hl_field(1, TypeSymName_5, 0))));
            MR_Word Var_210;

            Var_210 = mdbcomp__builtin_modules__mercury_public_builtin_module_0_f_0();
            succeeded = mdbcomp__sym_name____Unify____sym_name_0_0(ModuleSymName_208, Var_210);
          }
          else
            succeeded = MR_TRUE;
          if (succeeded)
            succeeded = (Arity_6 == (MR_Integer) 0);
        }
        break;
      case (MR_Integer) 14:
        {
          // case "uint32"
          ;
          *TypeCategory_4 = (MR_Word) (MR_mkword(1, &hlds__type_classify_scalar_common_2[18]));
          if (((MR_tag((MR_Word) TypeSymName_5)) == (MR_Integer) 1))
          {
            MR_Word ModuleSymName_221 = ((MR_Word) ((MR_hl_field(1, TypeSymName_5, 0))));
            MR_Word Var_223;

            Var_223 = mdbcomp__builtin_modules__mercury_public_builtin_module_0_f_0();
            succeeded = mdbcomp__sym_name____Unify____sym_name_0_0(ModuleSymName_221, Var_223);
          }
          else
            succeeded = MR_TRUE;
          if (succeeded)
            succeeded = (Arity_6 == (MR_Integer) 0);
        }
        break;
      case (MR_Integer) 15:
        {
          // case "uint64"
          ;
          *TypeCategory_4 = (MR_Word) (MR_mkword(1, &hlds__type_classify_scalar_common_2[20]));
          if (((MR_tag((MR_Word) TypeSymName_5)) == (MR_Integer) 1))
          {
            MR_Word ModuleSymName_234 = ((MR_Word) ((MR_hl_field(1, TypeSymName_5, 0))));
            MR_Word Var_236;

            Var_236 = mdbcomp__builtin_modules__mercury_public_builtin_module_0_f_0();
            succeeded = mdbcomp__sym_name____Unify____sym_name_0_0(ModuleSymName_234, Var_236);
          }
          else
            succeeded = MR_TRUE;
          if (succeeded)
            succeeded = (Arity_6 == (MR_Integer) 0);
        }
        break;
      case (MR_Integer) 16:
        {
          // case "uint8"
          ;
          *TypeCategory_4 = (MR_Word) (MR_mkword(1, &hlds__type_classify_scalar_common_2[22]));
          if (((MR_tag((MR_Word) TypeSymName_5)) == (MR_Integer) 1))
          {
            MR_Word ModuleSymName_247 = ((MR_Word) ((MR_hl_field(1, TypeSymName_5, 0))));
            MR_Word Var_249;

            Var_249 = mdbcomp__builtin_modules__mercury_public_builtin_module_0_f_0();
            succeeded = mdbcomp__sym_name____Unify____sym_name_0_0(ModuleSymName_247, Var_249);
          }
          else
            succeeded = MR_TRUE;
          if (succeeded)
            succeeded = (Arity_6 == (MR_Integer) 0);
        }
        break;
      case (MR_Integer) 17:
        {
          // case "void"
          ;
          *TypeCategory_4 = (MR_Word) ((MR_Unsigned) 4U);
          if (((MR_tag((MR_Word) TypeSymName_5)) == (MR_Integer) 1))
          {
            MR_Word ModuleSymName_260 = ((MR_Word) ((MR_hl_field(1, TypeSymName_5, 0))));
            MR_Word Var_262;

            Var_262 = mdbcomp__builtin_modules__mercury_public_builtin_module_0_f_0();
            succeeded = mdbcomp__sym_name____Unify____sym_name_0_0(ModuleSymName_260, Var_262);
          }
          else
            succeeded = MR_TRUE;
          if (succeeded)
            succeeded = (Arity_6 == (MR_Integer) 0);
        }
        break;
      case (MR_Integer) 18:
        {
          // case "func", "pred"
          ;
          if (((MR_tag((MR_Word) TypeSymName_5)) == (MR_Integer) 1))
          {
            MR_Word Var_79 = ((MR_Word) ((MR_hl_field(1, TypeSymName_5, 0))));

            {
              MR_Word Var_76;

              Var_76 = mdbcomp__builtin_modules__mercury_public_builtin_module_0_f_0();
              succeeded = mdbcomp__sym_name____Unify____sym_name_0_0(Var_79, Var_76);
              if (succeeded)
                succeeded = (Arity_6 == (MR_Integer) 0);
            }
            if (!(succeeded))
            {
              MR_String Qualifier_11;

              succeeded = ((MR_tag((MR_Word) Var_79)) == (MR_Integer) 0);
              if (succeeded)
              {
                Qualifier_11 = ((MR_String) ((MR_hl_field(0, Var_79, 0))));
                if ((strcmp(Qualifier_11, (MR_String) "impure") == 0))
                  succeeded = MR_TRUE;
                else
                if ((strcmp(Qualifier_11, (MR_String) "semipure") == 0))
                  succeeded = MR_TRUE;
                else
                  succeeded = MR_FALSE;
              }
            }
          }
          else
            succeeded = MR_TRUE;
          if (succeeded)
          {
            *TypeCategory_4 = (MR_Word) ((MR_Unsigned) 12U);
            succeeded = MR_TRUE;
          }
        }
        break;
      case (MR_Integer) 19:
        {
          // case "state"
          ;
          {
            MR_Word Var_73;
            MR_Word Var_81;

            succeeded = ((MR_tag((MR_Word) TypeSymName_5)) == (MR_Integer) 1);
            if (succeeded)
            {
              Var_81 = ((MR_Word) ((MR_hl_field(1, TypeSymName_5, 0))));
              Var_73 = mdbcomp__builtin_modules__mercury_io_module_0_f_0();
              succeeded = mdbcomp__sym_name____Unify____sym_name_0_0(Var_81, Var_73);
              if (succeeded)
              {
                succeeded = (Arity_6 == (MR_Integer) 0);
                if (succeeded)
                {
                  *TypeCategory_4 = (MR_Word) ((MR_Unsigned) 0U);
                  succeeded = MR_TRUE;
                }
              }
            }
          }
        }
        break;
      case (MR_Integer) 20:
        {
          // case "store"
          ;
          {
            MR_Word Var_39;
            MR_Word Var_75;
            MR_Word Var_274;

            succeeded = ((MR_tag((MR_Word) TypeSymName_5)) == (MR_Integer) 1);
            if (succeeded)
            {
              Var_274 = ((MR_Word) ((MR_hl_field(1, TypeSymName_5, 0))));
              Var_39 = (MR_Word) (&hlds__type_classify_scalar_common_2[23]);
              Var_75 = mdbcomp__builtin_modules__maybe_add_stdlib_wrapper_1_f_0(Var_39);
              succeeded = mdbcomp__sym_name____Unify____sym_name_0_0(Var_274, Var_75);
              if (succeeded)
              {
                succeeded = (Arity_6 == (MR_Integer) 1);
                if (succeeded)
                {
                  *TypeCategory_4 = (MR_Word) ((MR_Unsigned) 0U);
                  succeeded = MR_TRUE;
                }
              }
            }
          }
        }
        break;
      case (MR_Integer) 21:
        {
          // case "tuple"
          ;
          {
            MR_Word ModuleSymName_69;
            MR_Word Var_77;

            succeeded = ((MR_tag((MR_Word) TypeSymName_5)) == (MR_Integer) 1);
            if (succeeded)
            {
              ModuleSymName_69 = ((MR_Word) ((MR_hl_field(1, TypeSymName_5, 0))));
              Var_77 = mdbcomp__builtin_modules__mercury_public_builtin_module_0_f_0();
              succeeded = mdbcomp__sym_name____Unify____sym_name_0_0(ModuleSymName_69, Var_77);
              if (succeeded)
              {
                succeeded = (Arity_6 == (MR_Integer) 0);
                if (succeeded)
                {
                  *TypeCategory_4 = (MR_Word) ((MR_Unsigned) 16U);
                  succeeded = MR_TRUE;
                }
              }
            }
          }
        }
        break;
      case (MR_Integer) 22:
        {
          // case "{}"
          ;
          succeeded = ((MR_tag((MR_Word) TypeSymName_5)) == (MR_Integer) 0);
          if (succeeded)
          {
            *TypeCategory_4 = (MR_Word) ((MR_Unsigned) 16U);
            succeeded = MR_TRUE;
          }
        }
        break;
    }
  }
  return succeeded;
}

void mercury__hlds__type_classify__init(void)
{
}

void mercury__hlds__type_classify__init_type_tables(void)
{
}

void mercury__hlds__type_classify__init_debugger(void)
{
  MR_fatal_error("debugger initialization in MLDS grade");
}

// Ensure everything is compiled with the same grade.
const char *mercury__hlds__type_classify__grade_check(void)
{
  return &MR_GRADE_VAR;
}

// :- end_module hlds.type_classify.
