/*
** Automatically generated from `typecheck_error_builtin.m'
** by the Mercury compiler,
** version rotd-2025-09-24
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


// :- module check_hlds.typecheck_error_builtin.
// :- implementation.

/*
INIT mercury__check_hlds__typecheck_error_builtin__init
ENDINIT
*/

#include "check_hlds.typecheck_error_builtin.mih"


#include "analysis.mih"
#include "array.mih"
#include "assoc_list.mih"
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
#include "edit_seq.mih"
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
#include "mode_robdd.mih"
#include "multi_map.mih"
#include "one_or_more.mih"
#include "one_or_more_map.mih"
#include "pair.mih"
#include "parse_tree.mih"
#include "pretty_printer.mih"
#include "private_builtin.mih"
#include "queue.mih"
#include "recompilation.mih"
#include "robdd.mih"
#include "set.mih"
#include "set_ordlist.mih"
#include "set_tree234.mih"
#include "sparse_bitset.mih"
#include "stack.mih"
#include "stream.mih"
#include "string.mih"
#include "term.mih"
#include "term_context.mih"
#include "time.mih"
#include "transform_hlds.mih"
#include "tree234.mih"
#include "type_desc.mih"
#include "unit.mih"
#include "univ.mih"
#include "varset.mih"
#include "analysis.framework.mih"
#include "analysis.operations.mih"
#include "check_hlds.mode_constraint_robdd.mih"
#include "check_hlds.proc_requests.mih"
#include "check_hlds.type_assign.mih"
#include "check_hlds.typecheck_error_type_assign.mih"
#include "check_hlds.typecheck_info.mih"
#include "hlds.const_struct.mih"
#include "hlds.goal_mode.mih"
#include "hlds.hlds_class.mih"
#include "hlds.hlds_clauses.mih"
#include "hlds.hlds_cons.mih"
#include "hlds.hlds_data.mih"
#include "hlds.hlds_dependency_graph.mih"
#include "hlds.hlds_goal.mih"
#include "hlds.hlds_inst_mode.mih"
#include "hlds.hlds_llds.mih"
#include "hlds.hlds_markers.mih"
#include "hlds.hlds_module.mih"
#include "hlds.hlds_pred.mih"
#include "hlds.hlds_promise.mih"
#include "hlds.hlds_rtti.mih"
#include "hlds.inst_graph.mih"
#include "hlds.instmap.mih"
#include "hlds.pred_name.mih"
#include "hlds.pred_table.mih"
#include "hlds.special_pred.mih"
#include "hlds.status.mih"
#include "libs.dependency_graph.mih"
#include "libs.file_util.mih"
#include "libs.globals.mih"
#include "libs.options.mih"
#include "libs.polyhedron.mih"
#include "mdbcomp.goal_path.mih"
#include "mdbcomp.prim_data.mih"
#include "mdbcomp.program_representation.mih"
#include "mdbcomp.sym_name.mih"
#include "mode_robdd.tfeirn.mih"
#include "parse_tree.d_file_deps.mih"
#include "parse_tree.error_spec.mih"
#include "parse_tree.error_type_util.mih"
#include "parse_tree.module_qual.mih"
#include "parse_tree.prog_data.mih"
#include "parse_tree.prog_data_event.mih"
#include "parse_tree.prog_data_foreign.mih"
#include "parse_tree.prog_data_pragma.mih"
#include "parse_tree.prog_data_used_modules.mih"
#include "parse_tree.prog_foreign.mih"
#include "parse_tree.prog_item.mih"
#include "parse_tree.prog_parse_tree.mih"
#include "parse_tree.prog_rename.mih"
#include "parse_tree.set_of_var.mih"
#include "parse_tree.var_db.mih"
#include "parse_tree.var_table.mih"
#include "parse_tree.vartypes.mih"
#include "recompilation.record_uses.mih"
#include "transform_hlds.term_constr_errors.mih"
#include "transform_hlds.term_constr_main_types.mih"
#include "transform_hlds.term_errors.mih"
#include "transform_hlds.term_util.mih"
#include "parse_tree.module_qual.mq_info.mih"




static const MR_FA_PseudoTypeInfo_Struct1 check_hlds__typecheck_error_builtin__set_ordlist__pti_set_ordlist_1__plain_parse_tree__prog_data__type_ctor_info_builtin_type_0;

static MR_Word MR_CALL 
check_hlds__typecheck_error_builtin__IntroducedFrom__func__report_any_invisible_int_types__214__1_1_f_0(
  MR_Word LambdaHeadVar__1_29);

static MR_bool MR_CALL 
check_hlds__typecheck_error_builtin__IntroducedFrom__pred__report_any_invisible_int_types__197__1_2_p_0(
  MR_Word LambdaHeadVar__1_26,
  MR_Word * LambdaHeadVar__2_27);

static MR_bool MR_CALL 
check_hlds__typecheck_error_builtin__is_int_n_module_2_p_0(
  MR_Word ModuleSymName_3,
  MR_Word * IntType_4);

static MR_Box MR_CALL 
check_hlds__typecheck_error_builtin__report_any_invisible_int_types_2_f_0_3(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1);

static MR_bool MR_CALL 
check_hlds__typecheck_error_builtin__report_any_invisible_int_types_2_f_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2);

static MR_bool MR_CALL 
check_hlds__typecheck_error_builtin__report_any_invisible_int_types_2_f_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2);

static void MR_CALL 
check_hlds__typecheck_error_builtin__acc_builtin_types_in_cons_type_infos_3_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3);

static void MR_CALL 
check_hlds__typecheck_error_builtin__acc_builtin_types_of_var_4_p_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3);

static MR_Box MR_CALL 
check_hlds__typecheck_error_builtin__acc_builtin_types_of_var_4_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1);


static /* final */ const MR_Box check_hlds__typecheck_error_builtin_scalar_common_1[67][2];

static /* final */ const MR_Box check_hlds__typecheck_error_builtin_scalar_common_3[4][5];

static /* final */ const MR_Box check_hlds__typecheck_error_builtin_scalar_common_4[6][3];

static /* final */ const MR_Box check_hlds__typecheck_error_builtin_scalar_common_5[1][6];


struct check_hlds__typecheck_error_builtin__vector_common_type_2_0_s {
  const MR_String check_hlds__typecheck_error_builtin__vector_common_type_2_0__vct_2_f_0;
};

static /* final */ const struct check_hlds__typecheck_error_builtin__vector_common_type_2_0_s check_hlds__typecheck_error_builtin_vector_common_2[39];



static /* final */ const MR_Box check_hlds__typecheck_error_builtin_scalar_common_1[67][2] = {
  /* row   0 */
  {
    ((MR_Box) (&mercury__set_ordlist__set_ordlist__type_ctor_info_set_ordlist_1)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_builtin_type_0))
  },
  /* row   1 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 9U)),
    ((MR_Box) ((MR_String) "A integer constant that consists only of digits is"))
  },
  /* row   2 */
  {
    ((MR_Box) (MR_mkword(3, &check_hlds__typecheck_error_builtin_scalar_common_1[1]))),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row   3 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 8U)),
    ((MR_Box) ((MR_String) "."))
  },
  /* row   4 */
  {
    ((MR_Box) (MR_mkword(3, &check_hlds__typecheck_error_builtin_scalar_common_1[3]))),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row   5 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 0U)),
    ((MR_Box) ((MR_String) "int"))
  },
  /* row   6 */
  {
    ((MR_Box) (MR_mkword(3, &check_hlds__typecheck_error_builtin_scalar_common_1[5]))),
    ((MR_Box) (MR_mkword(1, &check_hlds__typecheck_error_builtin_scalar_common_1[4])))
  },
  /* row   7 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 9U)),
    ((MR_Box) ((MR_String) "always of type"))
  },
  /* row   8 */
  {
    ((MR_Box) (MR_mkword(3, &check_hlds__typecheck_error_builtin_scalar_common_1[7]))),
    ((MR_Box) (MR_mkword(1, &check_hlds__typecheck_error_builtin_scalar_common_1[6])))
  },
  /* row   9 */
  {
    ((MR_Box) ((MR_Unsigned) 12U)),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row  10 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 9U)),
    ((MR_Box) ((MR_String) "if they are unsigned."))
  },
  /* row  11 */
  {
    ((MR_Box) (MR_mkword(3, &check_hlds__typecheck_error_builtin_scalar_common_1[10]))),
    ((MR_Box) (MR_mkword(1, &check_hlds__typecheck_error_builtin_scalar_common_1[9])))
  },
  /* row  12 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 9U)),
    ((MR_Box) ((MR_String) "suffix"))
  },
  /* row  13 */
  {
    ((MR_Box) (MR_mkword(3, &check_hlds__typecheck_error_builtin_scalar_common_1[12]))),
    ((MR_Box) (MR_mkword(1, &check_hlds__typecheck_error_builtin_scalar_common_1[11])))
  },
  /* row  14 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 0U)),
    ((MR_Box) ((MR_String) "u64"))
  },
  /* row  15 */
  {
    ((MR_Box) (MR_mkword(3, &check_hlds__typecheck_error_builtin_scalar_common_1[14]))),
    ((MR_Box) (MR_mkword(1, &check_hlds__typecheck_error_builtin_scalar_common_1[13])))
  },
  /* row  16 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 9U)),
    ((MR_Box) ((MR_String) "or"))
  },
  /* row  17 */
  {
    ((MR_Box) (MR_mkword(3, &check_hlds__typecheck_error_builtin_scalar_common_1[16]))),
    ((MR_Box) (MR_mkword(1, &check_hlds__typecheck_error_builtin_scalar_common_1[15])))
  },
  /* row  18 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 0U)),
    ((MR_Box) ((MR_String) "u32"))
  },
  /* row  19 */
  {
    ((MR_Box) (MR_mkword(3, &check_hlds__typecheck_error_builtin_scalar_common_1[18]))),
    ((MR_Box) (MR_mkword(1, &check_hlds__typecheck_error_builtin_scalar_common_1[17])))
  },
  /* row  20 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 8U)),
    ((MR_Box) ((MR_String) ","))
  },
  /* row  21 */
  {
    ((MR_Box) (MR_mkword(3, &check_hlds__typecheck_error_builtin_scalar_common_1[20]))),
    ((MR_Box) (MR_mkword(1, &check_hlds__typecheck_error_builtin_scalar_common_1[19])))
  },
  /* row  22 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 0U)),
    ((MR_Box) ((MR_String) "u16"))
  },
  /* row  23 */
  {
    ((MR_Box) (MR_mkword(3, &check_hlds__typecheck_error_builtin_scalar_common_1[22]))),
    ((MR_Box) (MR_mkword(1, &check_hlds__typecheck_error_builtin_scalar_common_1[21])))
  },
  /* row  24 */
  {
    ((MR_Box) (MR_mkword(3, &check_hlds__typecheck_error_builtin_scalar_common_1[20]))),
    ((MR_Box) (MR_mkword(1, &check_hlds__typecheck_error_builtin_scalar_common_1[23])))
  },
  /* row  25 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 0U)),
    ((MR_Box) ((MR_String) "u8"))
  },
  /* row  26 */
  {
    ((MR_Box) (MR_mkword(3, &check_hlds__typecheck_error_builtin_scalar_common_1[25]))),
    ((MR_Box) (MR_mkword(1, &check_hlds__typecheck_error_builtin_scalar_common_1[24])))
  },
  /* row  27 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 9U)),
    ((MR_Box) ((MR_String) "an"))
  },
  /* row  28 */
  {
    ((MR_Box) (MR_mkword(3, &check_hlds__typecheck_error_builtin_scalar_common_1[27]))),
    ((MR_Box) (MR_mkword(1, &check_hlds__typecheck_error_builtin_scalar_common_1[26])))
  },
  /* row  29 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 9U)),
    ((MR_Box) ((MR_String) "if they are signed, and"))
  },
  /* row  30 */
  {
    ((MR_Box) (MR_mkword(3, &check_hlds__typecheck_error_builtin_scalar_common_1[29]))),
    ((MR_Box) (MR_mkword(1, &check_hlds__typecheck_error_builtin_scalar_common_1[28])))
  },
  /* row  31 */
  {
    ((MR_Box) (MR_mkword(3, &check_hlds__typecheck_error_builtin_scalar_common_1[12]))),
    ((MR_Box) (MR_mkword(1, &check_hlds__typecheck_error_builtin_scalar_common_1[30])))
  },
  /* row  32 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 0U)),
    ((MR_Box) ((MR_String) "i64"))
  },
  /* row  33 */
  {
    ((MR_Box) (MR_mkword(3, &check_hlds__typecheck_error_builtin_scalar_common_1[32]))),
    ((MR_Box) (MR_mkword(1, &check_hlds__typecheck_error_builtin_scalar_common_1[31])))
  },
  /* row  34 */
  {
    ((MR_Box) (MR_mkword(3, &check_hlds__typecheck_error_builtin_scalar_common_1[16]))),
    ((MR_Box) (MR_mkword(1, &check_hlds__typecheck_error_builtin_scalar_common_1[33])))
  },
  /* row  35 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 0U)),
    ((MR_Box) ((MR_String) "i32"))
  },
  /* row  36 */
  {
    ((MR_Box) (MR_mkword(3, &check_hlds__typecheck_error_builtin_scalar_common_1[35]))),
    ((MR_Box) (MR_mkword(1, &check_hlds__typecheck_error_builtin_scalar_common_1[34])))
  },
  /* row  37 */
  {
    ((MR_Box) (MR_mkword(3, &check_hlds__typecheck_error_builtin_scalar_common_1[20]))),
    ((MR_Box) (MR_mkword(1, &check_hlds__typecheck_error_builtin_scalar_common_1[36])))
  },
  /* row  38 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 0U)),
    ((MR_Box) ((MR_String) "i16"))
  },
  /* row  39 */
  {
    ((MR_Box) (MR_mkword(3, &check_hlds__typecheck_error_builtin_scalar_common_1[38]))),
    ((MR_Box) (MR_mkword(1, &check_hlds__typecheck_error_builtin_scalar_common_1[37])))
  },
  /* row  40 */
  {
    ((MR_Box) (MR_mkword(3, &check_hlds__typecheck_error_builtin_scalar_common_1[20]))),
    ((MR_Box) (MR_mkword(1, &check_hlds__typecheck_error_builtin_scalar_common_1[39])))
  },
  /* row  41 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 0U)),
    ((MR_Box) ((MR_String) "i8"))
  },
  /* row  42 */
  {
    ((MR_Box) (MR_mkword(3, &check_hlds__typecheck_error_builtin_scalar_common_1[41]))),
    ((MR_Box) (MR_mkword(1, &check_hlds__typecheck_error_builtin_scalar_common_1[40])))
  },
  /* row  43 */
  {
    ((MR_Box) (MR_mkword(3, &check_hlds__typecheck_error_builtin_scalar_common_1[27]))),
    ((MR_Box) (MR_mkword(1, &check_hlds__typecheck_error_builtin_scalar_common_1[42])))
  },
  /* row  44 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 9U)),
    ((MR_Box) ((MR_String) "constants of sized integer types should have"))
  },
  /* row  45 */
  {
    ((MR_Box) (MR_mkword(3, &check_hlds__typecheck_error_builtin_scalar_common_1[44]))),
    ((MR_Box) (MR_mkword(1, &check_hlds__typecheck_error_builtin_scalar_common_1[43])))
  },
  /* row  46 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 8U)),
    ((MR_Box) ((MR_String) ";"))
  },
  /* row  47 */
  {
    ((MR_Box) (MR_mkword(3, &check_hlds__typecheck_error_builtin_scalar_common_1[46]))),
    ((MR_Box) (MR_mkword(1, &check_hlds__typecheck_error_builtin_scalar_common_1[45])))
  },
  /* row  48 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 0U)),
    ((MR_Box) ((MR_String) "u"))
  },
  /* row  49 */
  {
    ((MR_Box) (MR_mkword(3, &check_hlds__typecheck_error_builtin_scalar_common_1[48]))),
    ((MR_Box) (MR_mkword(1, &check_hlds__typecheck_error_builtin_scalar_common_1[47])))
  },
  /* row  50 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 9U)),
    ((MR_Box) ((MR_String) "should have the suffix"))
  },
  /* row  51 */
  {
    ((MR_Box) (MR_mkword(3, &check_hlds__typecheck_error_builtin_scalar_common_1[50]))),
    ((MR_Box) (MR_mkword(1, &check_hlds__typecheck_error_builtin_scalar_common_1[49])))
  },
  /* row  52 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 9U)),
    ((MR_Box) ((MR_String) "Unsigned integer constants of the default size"))
  },
  /* row  53 */
  {
    ((MR_Box) (MR_mkword(3, &check_hlds__typecheck_error_builtin_scalar_common_1[52]))),
    ((MR_Box) (MR_mkword(1, &check_hlds__typecheck_error_builtin_scalar_common_1[51])))
  },
  /* row  54 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 9U)),
    ((MR_Box) ((MR_String) "Note that operations on values of type"))
  },
  /* row  55 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 9U)),
    ((MR_Box) ((MR_String) "only if module"))
  },
  /* row  56 */
  {
    ((MR_Box) (MR_mkword(3, &check_hlds__typecheck_error_builtin_scalar_common_1[55]))),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row  57 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 9U)),
    ((MR_Box) ((MR_String) "are available"))
  },
  /* row  58 */
  {
    ((MR_Box) (MR_mkword(3, &check_hlds__typecheck_error_builtin_scalar_common_1[57]))),
    ((MR_Box) (MR_mkword(1, &check_hlds__typecheck_error_builtin_scalar_common_1[56])))
  },
  /* row  59 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 9U)),
    ((MR_Box) ((MR_String) "is imported."))
  },
  /* row  60 */
  {
    ((MR_Box) (MR_mkword(3, &check_hlds__typecheck_error_builtin_scalar_common_1[59]))),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row  61 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 9U)),
    ((MR_Box) ((MR_String) "are imported."))
  },
  /* row  62 */
  {
    ((MR_Box) (MR_mkword(3, &check_hlds__typecheck_error_builtin_scalar_common_1[61]))),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row  63 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 9U)),
    ((MR_Box) ((MR_String) "Note that operations on values of types"))
  },
  /* row  64 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 9U)),
    ((MR_Box) ((MR_String) "only if modules"))
  },
  /* row  65 */
  {
    ((MR_Box) (MR_mkword(3, &check_hlds__typecheck_error_builtin_scalar_common_1[64]))),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row  66 */
  {
    ((MR_Box) (MR_mkword(3, &check_hlds__typecheck_error_builtin_scalar_common_1[57]))),
    ((MR_Box) (MR_mkword(1, &check_hlds__typecheck_error_builtin_scalar_common_1[65])))
  },
};

static /* final */ const MR_Box check_hlds__typecheck_error_builtin_scalar_common_3[4][5] = {
  /* row   0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 2)),
    ((MR_Box) (&check_hlds__typecheck_error_type_assign__check_hlds__typecheck_error_type_assign__type_ctor_info_type_stuff_0)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0))
  },
  /* row   1 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 2)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_builtin_type_0)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_int_type_0))
  },
  /* row   2 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 2)),
    ((MR_Box) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_int_type_0))
  },
  /* row   3 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 2)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_int_type_0)),
    ((MR_Box) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0))
  },
};

static /* final */ const MR_Box check_hlds__typecheck_error_builtin_scalar_common_4[6][3] = {
  /* row   0 */
  {
    ((MR_Box) (&check_hlds__typecheck_error_builtin_scalar_common_3[0])),
    ((MR_Box) (check_hlds__typecheck_error_builtin__acc_builtin_types_of_var_4_p_0_1)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row   1 */
  {
    ((MR_Box) (&check_hlds__typecheck_error_builtin_scalar_common_5[0])),
    ((MR_Box) (check_hlds__typecheck_error_builtin__acc_builtin_types_of_var_4_p_0_2)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row   2 */
  {
    ((MR_Box) (&check_hlds__typecheck_error_builtin_scalar_common_5[0])),
    ((MR_Box) (check_hlds__typecheck_error_builtin__acc_builtin_types_in_cons_type_infos_3_p_0_1)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row   3 */
  {
    ((MR_Box) (&check_hlds__typecheck_error_builtin_scalar_common_3[1])),
    ((MR_Box) (check_hlds__typecheck_error_builtin__report_any_invisible_int_types_2_f_0_1)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row   4 */
  {
    ((MR_Box) (&check_hlds__typecheck_error_builtin_scalar_common_3[2])),
    ((MR_Box) (check_hlds__typecheck_error_builtin__report_any_invisible_int_types_2_f_0_2)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row   5 */
  {
    ((MR_Box) (&check_hlds__typecheck_error_builtin_scalar_common_3[3])),
    ((MR_Box) (check_hlds__typecheck_error_builtin__report_any_invisible_int_types_2_f_0_3)),
    ((MR_Box) ((MR_Integer) 0))
  },
};

static /* final */ const MR_Box check_hlds__typecheck_error_builtin_scalar_common_5[1][6] = {
  /* row   0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 3)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0)),
    ((MR_Box) (&check_hlds__typecheck_error_builtin__set_ordlist__pti_set_ordlist_1__plain_parse_tree__prog_data__type_ctor_info_builtin_type_0)),
    ((MR_Box) (&check_hlds__typecheck_error_builtin__set_ordlist__pti_set_ordlist_1__plain_parse_tree__prog_data__type_ctor_info_builtin_type_0))
  },
};


static /* final */ const struct check_hlds__typecheck_error_builtin__vector_common_type_2_0_s check_hlds__typecheck_error_builtin_vector_common_2[39] = {
  /* row   0 */   { (MR_String) "+" },
  /* row   1 */   { (MR_String) "-" },
  /* row   2 */   { (MR_String) "\\" },
  /* row   3 */   { (MR_String) "abs" },
  /* row   4 */   { (MR_String) "log2" },
  /* row   5 */   { (MR_String) "nabs" },
  /* row   6 */   { (MR_String) "unchecked_abs" },
  /* row   7 */   { NULL },
  /* row   8 */   { (MR_String) ">=" },
  /* row   9 */   { NULL },
  /* row  10 */   { (MR_String) "=<" },
  /* row  11 */   { NULL },
  /* row  12 */   { NULL },
  /* row  13 */   { NULL },
  /* row  14 */   { NULL },
  /* row  15 */   { NULL },
  /* row  16 */   { (MR_String) "min" },
  /* row  17 */   { NULL },
  /* row  18 */   { (MR_String) "pow" },
  /* row  19 */   { NULL },
  /* row  20 */   { NULL },
  /* row  21 */   { NULL },
  /* row  22 */   { NULL },
  /* row  23 */   { NULL },
  /* row  24 */   { NULL },
  /* row  25 */   { (MR_String) "log2" },
  /* row  26 */   { (MR_String) "abs" },
  /* row  27 */   { NULL },
  /* row  28 */   { NULL },
  /* row  29 */   { NULL },
  /* row  30 */   { (MR_String) "max" },
  /* row  31 */   { NULL },
  /* row  32 */   { NULL },
  /* row  33 */   { NULL },
  /* row  34 */   { NULL },
  /* row  35 */   { NULL },
  /* row  36 */   { (MR_String) "<" },
  /* row  37 */   { NULL },
  /* row  38 */   { (MR_String) ">" },
};


#include "array.mh"
#include "bitmap.mh"
#include "io.mh"
#include "string.mh"
#include "time.mh"
#include "io.stream_ops.mh"


static const MR_FA_PseudoTypeInfo_Struct1 check_hlds__typecheck_error_builtin__set_ordlist__pti_set_ordlist_1__plain_parse_tree__prog_data__type_ctor_info_builtin_type_0 = {
  &mercury__set_ordlist__set_ordlist__type_ctor_info_set_ordlist_1,
  { (MR_PseudoTypeInfo) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_builtin_type_0) }
};

static MR_Word MR_CALL 
check_hlds__typecheck_error_builtin__IntroducedFrom__func__report_any_invisible_int_types__214__1_1_f_0(
  MR_Word LambdaHeadVar__1_29)
{
  MR_Word LambdaHeadVar__2_30;
  MR_String Str_18;

  parse_tree__prog_data__int_type_module_name_2_p_0(LambdaHeadVar__1_29, &Str_18);
  {
    LambdaHeadVar__2_30 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(3, LambdaHeadVar__2_30, 0) = ((MR_Box) ((MR_Unsigned) 0U));
    MR_hl_field(3, LambdaHeadVar__2_30, 1) = ((MR_Box) (Str_18));
  }
  return LambdaHeadVar__2_30;
}

static MR_bool MR_CALL 
check_hlds__typecheck_error_builtin__IntroducedFrom__pred__report_any_invisible_int_types__197__1_2_p_0(
  MR_Word LambdaHeadVar__1_26,
  MR_Word * LambdaHeadVar__2_27)
{
  MR_bool succeeded = ((MR_tag((MR_Word) LambdaHeadVar__1_26)) == (MR_Integer) 1);

  if (succeeded)
    *LambdaHeadVar__2_27 = ((MR_Unsigned) ((MR_hl_field(1, LambdaHeadVar__1_26, 0))) & (MR_Integer) 15);
  return succeeded;
}

static MR_bool MR_CALL 
check_hlds__typecheck_error_builtin__is_int_n_module_2_p_0(
  MR_Word ModuleSymName_3,
  MR_Word * IntType_4)
{
  MR_bool succeeded = ((MR_tag((MR_Word) ModuleSymName_3)) == (MR_Integer) 0);
  MR_String ModuleName_5;

  if (succeeded)
  {
    ModuleName_5 = ((MR_String) ((MR_hl_field(0, ModuleSymName_3, 0))));
    succeeded = parse_tree__prog_data__int_type_module_name_2_p_1(IntType_4, ModuleName_5);
  }
  return succeeded;
}

static MR_Box MR_CALL 
check_hlds__typecheck_error_builtin__report_any_invisible_int_types_2_f_0_3(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1)
{
  MR_Box wrapper_arg_2;
  MR_Box closure = closure_arg;
  MR_Word conv2_LambdaHeadVar__2_30;

  conv2_LambdaHeadVar__2_30 = check_hlds__typecheck_error_builtin__IntroducedFrom__func__report_any_invisible_int_types__214__1_1_f_0(((MR_Word) (wrapper_arg_1)));
  wrapper_arg_2 = ((MR_Box) (conv2_LambdaHeadVar__2_30));
  return wrapper_arg_2;
}

static MR_bool MR_CALL 
check_hlds__typecheck_error_builtin__report_any_invisible_int_types_2_f_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2)
{
  MR_bool succeeded;
  MR_Box closure = closure_arg;
  MR_Word conv1_IntType_4;

  succeeded = check_hlds__typecheck_error_builtin__is_int_n_module_2_p_0(((MR_Word) (wrapper_arg_1)), &conv1_IntType_4);
  if (succeeded)
  {
    *wrapper_arg_2 = ((MR_Box) (conv1_IntType_4));
    succeeded = MR_TRUE;
  }
  return succeeded;
}

static MR_bool MR_CALL 
check_hlds__typecheck_error_builtin__report_any_invisible_int_types_2_f_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2)
{
  MR_bool succeeded;
  MR_Box closure = closure_arg;
  MR_Word conv0_LambdaHeadVar__2_27;

  succeeded = check_hlds__typecheck_error_builtin__IntroducedFrom__pred__report_any_invisible_int_types__197__1_2_p_0(((MR_Word) (wrapper_arg_1)), &conv0_LambdaHeadVar__2_27);
  if (succeeded)
  {
    *wrapper_arg_2 = ((MR_Box) (conv0_LambdaHeadVar__2_27));
    succeeded = MR_TRUE;
  }
  return succeeded;
}

MR_Word MR_CALL 
check_hlds__typecheck_error_builtin__report_any_invisible_int_types_2_f_0(
  MR_Word ClauseContext_4,
  MR_Word BuiltinTypes_5)
{
  MR_bool succeeded;
  MR_Word Pieces_6;
  MR_Word IntTypes_8;
  MR_Word HeadInvisIntType_14;
  MR_Word TailInvisIntTypes_15;
  MR_Word TypeCtorInfo_84_84;
  MR_Word ModuleInfo_9;
  MR_Word VisModules_10;
  MR_Word VisIntTypes_11;
  MR_Word InvisIntTypes_12;
  MR_Word InvisIntTypesList_13;
  MR_Word Var_28;

  mercury__set__filter_map_3_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_builtin_type_0), (MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_int_type_0), (MR_Word) (&check_hlds__typecheck_error_builtin_scalar_common_4[3]), BuiltinTypes_5, &IntTypes_8);
  succeeded = mercury__set__is_non_empty_1_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_int_type_0), IntTypes_8);
  if (succeeded)
  {
    ModuleInfo_9 = ((MR_Word) ((MR_hl_field(0, ClauseContext_4, 0))));
    hlds__hlds_module__module_info_get_visible_modules_2_p_0(ModuleInfo_9, &VisModules_10);
    Var_28 = (MR_Word) (&check_hlds__typecheck_error_builtin_scalar_common_4[4]);
    TypeCtorInfo_84_84 = (MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0);
    mercury__set__filter_map_3_p_0(TypeCtorInfo_84_84, (MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_int_type_0), Var_28, VisModules_10, &VisIntTypes_11);
    mercury__set__difference_3_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_int_type_0), IntTypes_8, VisIntTypes_11, &InvisIntTypes_12);
    mercury__set__to_sorted_list_2_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_int_type_0), InvisIntTypes_12, &InvisIntTypesList_13);
    succeeded = (InvisIntTypesList_13 != (MR_Word) ((MR_Unsigned) 0U));
    if (succeeded)
    {
      HeadInvisIntType_14 = ((MR_Word) ((MR_hl_field(1, InvisIntTypesList_13, 0))));
      TailInvisIntTypes_15 = ((MR_Word) ((MR_hl_field(1, InvisIntTypesList_13, 1))));
    }
  }
  if (succeeded)
  {
    MR_Word HeadInvisIntTypePiece_19;
    MR_Word TailInvisIntTypePieces_20;
    MR_String Str_86;

    parse_tree__prog_data__int_type_module_name_2_p_0(HeadInvisIntType_14, &Str_86);
    {
      HeadInvisIntTypePiece_19 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(3, HeadInvisIntTypePiece_19, 0) = ((MR_Box) ((MR_Unsigned) 0U));
      MR_hl_field(3, HeadInvisIntTypePiece_19, 1) = ((MR_Box) (Str_86));
    }
    TailInvisIntTypePieces_20 = mercury__list__map_2_f_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_int_type_0), (MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), (MR_Word) (&check_hlds__typecheck_error_builtin_scalar_common_4[5]), TailInvisIntTypes_15);
    if ((TailInvisIntTypePieces_20 == (MR_Word) ((MR_Unsigned) 0U)))
    {
      MR_Word Var_31;
      MR_Word Var_34;
      MR_Word Var_42;
      MR_Word Var_43;
      MR_Word Var_44;

      {
        Var_34 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(1, Var_34, 0) = ((MR_Box) (HeadInvisIntTypePiece_19));
        MR_hl_field(1, Var_34, 1) = ((MR_Box) (MR_mkword(1, &check_hlds__typecheck_error_builtin_scalar_common_1[58])));
      }
      {
        Var_31 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(1, Var_31, 0) = ((MR_Box) (MR_mkword(3, &check_hlds__typecheck_error_builtin_scalar_common_1[54])));
        MR_hl_field(1, Var_31, 1) = ((MR_Box) (Var_34));
      }
      {
        Var_44 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(1, Var_44, 0) = ((MR_Box) (HeadInvisIntTypePiece_19));
        MR_hl_field(1, Var_44, 1) = ((MR_Box) (MR_mkword(1, &check_hlds__typecheck_error_builtin_scalar_common_1[60])));
      }
      Var_43 = parse_tree__error_spec__color_as_hint_1_f_0(Var_44);
      Var_42 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), Var_43, (MR_Word) (MR_mkword(1, &check_hlds__typecheck_error_builtin_scalar_common_1[9])));
      Pieces_6 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), Var_31, Var_42);
    }
    else
    {
      MR_Word InvisIntTypePieces_23;
      MR_Word InvisIntTypeListAreImportedtPieces_24;
      MR_Word Var_58;
      MR_Word Var_61;
      MR_Word Var_69;

      {
        InvisIntTypePieces_23 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(1, InvisIntTypePieces_23, 0) = ((MR_Box) (HeadInvisIntTypePiece_19));
        MR_hl_field(1, InvisIntTypePieces_23, 1) = ((MR_Box) (TailInvisIntTypePieces_20));
      }
      InvisIntTypeListAreImportedtPieces_24 = parse_tree__error_spec__piece_list_to_color_pieces_4_f_0((MR_Integer) 4, (MR_String) "and", (MR_Word) (MR_mkword(1, &check_hlds__typecheck_error_builtin_scalar_common_1[62])), InvisIntTypePieces_23);
      {
        Var_58 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(1, Var_58, 0) = ((MR_Box) (MR_mkword(3, &check_hlds__typecheck_error_builtin_scalar_common_1[63])));
        MR_hl_field(1, Var_58, 1) = ((MR_Box) (InvisIntTypePieces_23));
      }
      Var_69 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), InvisIntTypeListAreImportedtPieces_24, (MR_Word) (MR_mkword(1, &check_hlds__typecheck_error_builtin_scalar_common_1[9])));
      Var_61 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), (MR_Word) (MR_mkword(1, &check_hlds__typecheck_error_builtin_scalar_common_1[66])), Var_69);
      Pieces_6 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), Var_58, Var_61);
    }
  }
  else
    Pieces_6 = (MR_Word) ((MR_Unsigned) 0U);
  return Pieces_6;
}

MR_Word MR_CALL 
check_hlds__typecheck_error_builtin__nosuffix_integer_pieces_0_f_0(void)
{
  MR_Word Pieces_2;
  MR_Word Var_7;
  MR_Word Var_8;

  Var_8 = parse_tree__error_spec__color_as_hint_1_f_0((MR_Word) (MR_mkword(1, &check_hlds__typecheck_error_builtin_scalar_common_1[8])));
  Var_7 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), Var_8, (MR_Word) (MR_mkword(1, &check_hlds__typecheck_error_builtin_scalar_common_1[53])));
  Pieces_2 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), (MR_Word) (MR_mkword(1, &check_hlds__typecheck_error_builtin_scalar_common_1[2])), Var_7);
  return Pieces_2;
}

MR_bool MR_CALL 
check_hlds__typecheck_error_builtin__type_needs_int_constant_suffix_1_p_0(
  MR_Word Type_2)
{
  MR_bool succeeded = ((MR_tag((MR_Word) Type_2)) == (MR_Integer) 2);
  MR_Word BuiltinType_3;
  MR_Word BuiltinTypeInt_4;

  if (succeeded)
  {
    BuiltinType_3 = ((MR_Word) ((MR_hl_field(2, Type_2, 0))));
    succeeded = ((MR_tag((MR_Word) BuiltinType_3)) == (MR_Integer) 1);
    if (succeeded)
    {
      BuiltinTypeInt_4 = ((MR_Unsigned) ((MR_hl_field(1, BuiltinType_3, 0))) & (MR_Integer) 15);
      succeeded = (BuiltinTypeInt_4 != (MR_Integer) 0);
    }
  }
  return succeeded;
}

static void MR_CALL 
check_hlds__typecheck_error_builtin__acc_builtin_types_in_cons_type_infos_3_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3)
{
  MR_Box closure = closure_arg;
  MR_Word conv0_STATE_VARIABLE_BuiltinTypes_24;

  check_hlds__typecheck_error_builtin__acc_builtin_type_3_p_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), &conv0_STATE_VARIABLE_BuiltinTypes_24);
  *wrapper_arg_3 = ((MR_Box) (conv0_STATE_VARIABLE_BuiltinTypes_24));
}

void MR_CALL 
check_hlds__typecheck_error_builtin__acc_builtin_types_in_cons_type_infos_3_p_0(
  MR_Word HeadVar__1_1,
  MR_Word STATE_VARIABLE_BuiltinTypes_0_2,
  MR_Word * STATE_VARIABLE_BuiltinTypes_3)
{
  while (MR_TRUE)
  {
    // setup for model_det tailcalls optimized into a loop
    ;
    if ((HeadVar__1_1 == (MR_Word) ((MR_Unsigned) 0U)))
      *STATE_VARIABLE_BuiltinTypes_3 = STATE_VARIABLE_BuiltinTypes_0_2;
    else
    {
      MR_Word ConsTypeInfo_7 = ((MR_Word) ((MR_hl_field(1, HeadVar__1_1, 0))));
      MR_Word ConsTypeInfos_8 = ((MR_Word) ((MR_hl_field(1, HeadVar__1_1, 1))));
      MR_Word ResultType_12 = ((MR_Word) ((MR_hl_field(0, ConsTypeInfo_7, 2))));
      MR_Word ArgTypes_13 = ((MR_Word) ((MR_hl_field(0, ConsTypeInfo_7, 3))));
      MR_Word STATE_VARIABLE_BuiltinTypes_1_18;
      MR_Word STATE_VARIABLE_BuiltinTypes_2_20;
      MR_Box conv1_STATE_VARIABLE_BuiltinTypes_2_20;
      MR_Word next_value_of_HeadVar__1_1;
      MR_Word next_value_of_STATE_VARIABLE_BuiltinTypes_0_2;

      check_hlds__typecheck_error_builtin__acc_builtin_type_3_p_0(ResultType_12, STATE_VARIABLE_BuiltinTypes_0_2, &STATE_VARIABLE_BuiltinTypes_1_18);
      mercury__list__foldl_4_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0), (MR_Word) (&check_hlds__typecheck_error_builtin_scalar_common_1[0]), (MR_Word) (&check_hlds__typecheck_error_builtin_scalar_common_4[2]), ArgTypes_13, ((MR_Box) (STATE_VARIABLE_BuiltinTypes_1_18)), &conv1_STATE_VARIABLE_BuiltinTypes_2_20);
      STATE_VARIABLE_BuiltinTypes_2_20 = ((MR_Word) (conv1_STATE_VARIABLE_BuiltinTypes_2_20));
      // direct tailcall eliminated
      ;
      next_value_of_HeadVar__1_1 = ConsTypeInfos_8;
      next_value_of_STATE_VARIABLE_BuiltinTypes_0_2 = STATE_VARIABLE_BuiltinTypes_2_20;
      HeadVar__1_1 = next_value_of_HeadVar__1_1;
      STATE_VARIABLE_BuiltinTypes_0_2 = next_value_of_STATE_VARIABLE_BuiltinTypes_0_2;
      continue;
    }
    break;
  }
}

void MR_CALL 
check_hlds__typecheck_error_builtin__acc_builtin_type_3_p_0(
  MR_Word Type_4,
  MR_Word STATE_VARIABLE_BuiltinTypes_0_23,
  MR_Word * STATE_VARIABLE_BuiltinTypes_24)
{
  switch (MR_tag((MR_Word) Type_4)) {
    default: /*NOTREACHED*/ MR_assert(0);
    case (MR_Integer) 0:
      *STATE_VARIABLE_BuiltinTypes_24 = STATE_VARIABLE_BuiltinTypes_0_23;
      break;
    case (MR_Integer) 1:
      *STATE_VARIABLE_BuiltinTypes_24 = STATE_VARIABLE_BuiltinTypes_0_23;
      break;
    case (MR_Integer) 2:
      {
        MR_Word BuiltinType_6 = ((MR_Word) ((MR_hl_field(2, Type_4, 0))));

        mercury__set__insert_3_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_builtin_type_0), ((MR_Box) (BuiltinType_6)), STATE_VARIABLE_BuiltinTypes_0_23, STATE_VARIABLE_BuiltinTypes_24);
      }
      break;
    case (MR_Integer) 3:
      switch (((MR_Integer) ((MR_hl_field(3, Type_4, 0))))) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 0:
          *STATE_VARIABLE_BuiltinTypes_24 = STATE_VARIABLE_BuiltinTypes_0_23;
          break;
        case (MR_Integer) 1:
          *STATE_VARIABLE_BuiltinTypes_24 = STATE_VARIABLE_BuiltinTypes_0_23;
          break;
        case (MR_Integer) 2:
          *STATE_VARIABLE_BuiltinTypes_24 = STATE_VARIABLE_BuiltinTypes_0_23;
          break;
        case (MR_Integer) 3:
          *STATE_VARIABLE_BuiltinTypes_24 = STATE_VARIABLE_BuiltinTypes_0_23;
          break;
      }
      break;
  }
}

static void MR_CALL 
check_hlds__typecheck_error_builtin__acc_builtin_types_of_var_4_p_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3)
{
  MR_Box closure = closure_arg;
  MR_Word conv1_STATE_VARIABLE_BuiltinTypes_24;

  check_hlds__typecheck_error_builtin__acc_builtin_type_3_p_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), &conv1_STATE_VARIABLE_BuiltinTypes_24);
  *wrapper_arg_3 = ((MR_Box) (conv1_STATE_VARIABLE_BuiltinTypes_24));
}

static MR_Box MR_CALL 
check_hlds__typecheck_error_builtin__acc_builtin_types_of_var_4_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1)
{
  MR_Box wrapper_arg_2;
  MR_Box closure = closure_arg;
  MR_Word conv0_HeadVar__2_2;

  conv0_HeadVar__2_2 = check_hlds__typecheck_error_type_assign__typestuff_to_type_1_f_0(((MR_Word) (wrapper_arg_1)));
  wrapper_arg_2 = ((MR_Box) (conv0_HeadVar__2_2));
  return wrapper_arg_2;
}

void MR_CALL 
check_hlds__typecheck_error_builtin__acc_builtin_types_of_var_4_p_0(
  MR_Word TypeAssignSet_5,
  MR_Word Var_6,
  MR_Word STATE_VARIABLE_BuiltinTypes_0_10,
  MR_Word * STATE_VARIABLE_BuiltinTypes_11)
{
  MR_Word VarTypeStuffs_8;
  MR_Word TypesOfVar_9;
  MR_Box conv2_STATE_VARIABLE_BuiltinTypes_11;

  check_hlds__typecheck_error_type_assign__get_all_type_stuffs_remove_dups_3_p_0(TypeAssignSet_5, Var_6, &VarTypeStuffs_8);
  TypesOfVar_9 = mercury__list__map_2_f_0((MR_Word) (&check_hlds__typecheck_error_type_assign__check_hlds__typecheck_error_type_assign__type_ctor_info_type_stuff_0), (MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0), (MR_Word) (&check_hlds__typecheck_error_builtin_scalar_common_4[0]), VarTypeStuffs_8);
  mercury__list__foldl_4_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0), (MR_Word) (&check_hlds__typecheck_error_builtin_scalar_common_1[0]), (MR_Word) (&check_hlds__typecheck_error_builtin_scalar_common_4[1]), TypesOfVar_9, ((MR_Box) (STATE_VARIABLE_BuiltinTypes_0_10)), &conv2_STATE_VARIABLE_BuiltinTypes_11);
  *STATE_VARIABLE_BuiltinTypes_11 = ((MR_Word) (conv2_STATE_VARIABLE_BuiltinTypes_11));
}

MR_bool MR_CALL 
check_hlds__typecheck_error_builtin__is_int_pred_op_2_p_0(
  MR_Word SymName_3,
  MR_Word PredFormArity_4)
{
  MR_bool succeeded;
  MR_String Name_5;
  MR_Integer Arity_6;
  MR_Integer slot_0;
  MR_String str_1;

  Name_5 = mdbcomp__sym_name__unqualify_name_1_f_0(SymName_3);
  Arity_6 = (MR_Integer) (PredFormArity_4);
  // hashed string jump switch
  ;
  // compute the hash value of the input string
  ;
  slot_0 = ((MR_hash_string4(Name_5)) & (MR_Integer) 31);
  // no collisions; no hash chain loop
  ;
  // lookup the string for this hash slot
  ;
  str_1 = ((&check_hlds__typecheck_error_builtin_vector_common_2[7 + slot_0]))->check_hlds__typecheck_error_builtin__vector_common_type_2_0__vct_2_f_0;
  // did we find a match?
  ;
  if ((((str_1 != NULL)) && ((strcmp(str_1, Name_5) == 0))))
  {
    // we found a match; dispatch to the corresponding code
    ;
    switch (slot_0) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 1:
        {
          // case ">="
          ;
          succeeded = (Arity_6 == (MR_Integer) 2);
        }
        break;
      case (MR_Integer) 3:
        {
          // case "=<"
          ;
          succeeded = (Arity_6 == (MR_Integer) 2);
        }
        break;
      case (MR_Integer) 9:
        {
          // case "min"
          ;
          succeeded = (Arity_6 == (MR_Integer) 3);
        }
        break;
      case (MR_Integer) 11:
        {
          // case "pow"
          ;
          succeeded = (Arity_6 == (MR_Integer) 3);
        }
        break;
      case (MR_Integer) 18:
        {
          // case "log2"
          ;
          succeeded = (Arity_6 == (MR_Integer) 2);
        }
        break;
      case (MR_Integer) 19:
        {
          // case "abs"
          ;
          succeeded = (Arity_6 == (MR_Integer) 2);
        }
        break;
      case (MR_Integer) 23:
        {
          // case "max"
          ;
          succeeded = (Arity_6 == (MR_Integer) 3);
        }
        break;
      case (MR_Integer) 29:
        {
          // case "<"
          ;
          succeeded = (Arity_6 == (MR_Integer) 2);
        }
        break;
      case (MR_Integer) 31:
        {
          // case ">"
          ;
          succeeded = (Arity_6 == (MR_Integer) 2);
        }
        break;
    }
    // jump out of search loop
    ;
    goto label_0;
  }
  succeeded = MR_FALSE;
label_0:;
  return succeeded;
}

MR_bool MR_CALL 
check_hlds__typecheck_error_builtin__is_int_func_op_1_p_0(
  MR_Word ConsId_2)
{
  MR_bool succeeded = ((MR_tag((MR_Word) ConsId_2)) == (MR_Integer) 1);
  MR_Word DuCtor_3;
  MR_Word SymName_4;
  MR_Integer Arity_5;
  MR_String Name_7;

  if (succeeded)
  {
    DuCtor_3 = (MR_Word) (MR_body((MR_Word) (ConsId_2), (MR_Integer) 1));
    SymName_4 = ((MR_Word) ((MR_hl_field(0, DuCtor_3, 0))));
    Arity_5 = ((MR_Integer) ((MR_hl_field(0, DuCtor_3, 1))));
    Name_7 = mdbcomp__sym_name__unqualify_name_1_f_0(SymName_4);
    switch (Arity_5) {
      default:
        succeeded = MR_FALSE;
        break;
      case (MR_Integer) 1:
        {
          MR_Integer lo_0 = (MR_Integer) 0;
          MR_Integer hi_1 = (MR_Integer) 6;
          MR_Integer mid_2;
          MR_Integer result_3;

          // binary string simple lookup switch
          ;
          do
          {
            mid_2 = (((MR_Integer) ((MR_Unsigned) lo_0 + (MR_Unsigned) hi_1)) / (MR_Integer) 2);
            result_3 = MR_strcmp(Name_7, ((&check_hlds__typecheck_error_builtin_vector_common_2[0 + mid_2]))->check_hlds__typecheck_error_builtin__vector_common_type_2_0__vct_2_f_0);
            if ((result_3 == (MR_Integer) 0))
            {
              succeeded = MR_TRUE;
              // jump out of search loop
              ;
              goto label_0;
            }
            else
            if ((result_3 < (MR_Integer) 0))
              hi_1 = (MR_Integer) ((MR_Unsigned) mid_2 - (MR_Unsigned) 1);
            else
              lo_0 = (MR_Integer) ((MR_Unsigned) mid_2 + (MR_Unsigned) 1);
          }
          while ((lo_0 <= hi_1));
          succeeded = MR_FALSE;
        label_0:;
        }
        break;
      case (MR_Integer) 2:
        {
          MR_Integer case_num_4 = (MR_Integer) -1;

          switch (MR_nth_code_unit(Name_7, 0)) {
            case (MR_Integer) 42:
              if (MR_offset_streq(1, Name_7, (MR_String) "*"))
                case_num_4 = (MR_Integer) 0;
              break;
            case (MR_Integer) 43:
              if (MR_offset_streq(1, Name_7, (MR_String) "+"))
                case_num_4 = (MR_Integer) 1;
              break;
            case (MR_Integer) 45:
              if (MR_offset_streq(1, Name_7, (MR_String) "-"))
                case_num_4 = (MR_Integer) 2;
              break;
            case (MR_Integer) 47:
              switch (MR_nth_code_unit(Name_7, 1)) {
                case (MR_Integer) 0:
                  case_num_4 = (MR_Integer) 3;
                  break;
                case (MR_Integer) 47:
                  if (MR_offset_streq(2, Name_7, (MR_String) "//"))
                    case_num_4 = (MR_Integer) 4;
                  break;
                case (MR_Integer) 92:
                  if (MR_offset_streq(2, Name_7, (MR_String) "/\\"))
                    case_num_4 = (MR_Integer) 5;
                  break;
              }
              break;
            case (MR_Integer) 60:
              if (MR_offset_streq(1, Name_7, (MR_String) "<<"))
                case_num_4 = (MR_Integer) 6;
              break;
            case (MR_Integer) 62:
              if (MR_offset_streq(1, Name_7, (MR_String) ">>"))
                case_num_4 = (MR_Integer) 7;
              break;
            case (MR_Integer) 92:
              if (MR_offset_streq(1, Name_7, (MR_String) "\\/"))
                case_num_4 = (MR_Integer) 8;
              break;
            case (MR_Integer) 100:
              if (MR_offset_streq(1, Name_7, (MR_String) "div"))
                case_num_4 = (MR_Integer) 9;
              break;
            case (MR_Integer) 109:
              switch (MR_nth_code_unit(Name_7, 1)) {
                case (MR_Integer) 97:
                  if (MR_offset_streq(2, Name_7, (MR_String) "max"))
                    case_num_4 = (MR_Integer) 10;
                  break;
                case (MR_Integer) 105:
                  switch (MR_nth_code_unit(Name_7, 2)) {
                    case (MR_Integer) 110:
                      switch (MR_nth_code_unit(Name_7, 3)) {
                        case (MR_Integer) 0:
                          case_num_4 = (MR_Integer) 11;
                          break;
                        case (MR_Integer) 117:
                          if (MR_offset_streq(4, Name_7, (MR_String) "minus"))
                            case_num_4 = (MR_Integer) 12;
                          break;
                      }
                      break;
                  }
                  break;
                case (MR_Integer) 111:
                  if (MR_offset_streq(2, Name_7, (MR_String) "mod"))
                    case_num_4 = (MR_Integer) 13;
                  break;
              }
              break;
            case (MR_Integer) 112:
              switch (MR_nth_code_unit(Name_7, 1)) {
                case (MR_Integer) 108:
                  if (MR_offset_streq(2, Name_7, (MR_String) "plus"))
                    case_num_4 = (MR_Integer) 14;
                  break;
                case (MR_Integer) 111:
                  if (MR_offset_streq(2, Name_7, (MR_String) "pow"))
                    case_num_4 = (MR_Integer) 15;
                  break;
              }
              break;
            case (MR_Integer) 114:
              if (MR_offset_streq(1, Name_7, (MR_String) "rem"))
                case_num_4 = (MR_Integer) 16;
              break;
            case (MR_Integer) 116:
              if (MR_offset_streq(1, Name_7, (MR_String) "times"))
                case_num_4 = (MR_Integer) 17;
              break;
            case (MR_Integer) 117:
              if (MR_offset_strn_eq(1, 9, Name_7, (MR_String) "unchecked_"))
                switch (MR_nth_code_unit(Name_7, 10)) {
                  case (MR_Integer) 108:
                    if (MR_offset_streq(11, Name_7, (MR_String) "unchecked_left_shift"))
                      case_num_4 = (MR_Integer) 18;
                    break;
                  case (MR_Integer) 113:
                    if (MR_offset_streq(11, Name_7, (MR_String) "unchecked_quotient"))
                      case_num_4 = (MR_Integer) 19;
                    break;
                  case (MR_Integer) 114:
                    switch (MR_nth_code_unit(Name_7, 11)) {
                      case (MR_Integer) 101:
                        if (MR_offset_streq(12, Name_7, (MR_String) "unchecked_rem"))
                          case_num_4 = (MR_Integer) 20;
                        break;
                      case (MR_Integer) 105:
                        if (MR_offset_streq(12, Name_7, (MR_String) "unchecked_right_shift"))
                          case_num_4 = (MR_Integer) 21;
                        break;
                    }
                    break;
                }
              break;
            case (MR_Integer) 120:
              if (MR_offset_streq(1, Name_7, (MR_String) "xor"))
                case_num_4 = (MR_Integer) 22;
              break;
          }
          if ((case_num_4 < (MR_Integer) 0))
            succeeded = MR_FALSE;
          else
          {
            // we found a match; look up the results
            ;
            succeeded = MR_TRUE;
          }
        }
        break;
    }
  }
  return succeeded;
}

void mercury__check_hlds__typecheck_error_builtin__init(void)
{
}

void mercury__check_hlds__typecheck_error_builtin__init_type_tables(void)
{
}

void mercury__check_hlds__typecheck_error_builtin__init_debugger(void)
{
  MR_fatal_error("debugger initialization in MLDS grade");
}

// Ensure everything is compiled with the same grade.
const char *mercury__check_hlds__typecheck_error_builtin__grade_check(void)
{
  return &MR_GRADE_VAR;
}

// :- end_module check_hlds.typecheck_error_builtin.
