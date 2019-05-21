/*
** Automatically generated from `prog_type_subst.m'
** by the Mercury compiler,
** version rotd-2017-07-23
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


/* :- module parse_tree.prog_type_subst. */
/* :- implementation. */

/*
INIT mercury__parse_tree__prog_type_subst__init
ENDINIT
*/

#include "parse_tree.prog_type_subst.mih"


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
#include "parse_tree.prog_data.mih"
#include "parse_tree.prog_data_foreign.mih"
#include "parse_tree.prog_data_pragma.mih"
#include "parse_tree.prog_item.mih"
#include "parse_tree.set_of_var.mih"
#include "mdbcomp.feedback.automatic_parallelism.mih"




static const MR_FA_TypeInfo_Struct1 parse_tree__prog_type_subst__term__ti_var_1parse_tree__prog_data__type_ctor_info_tvar_type_0;

static const MR_FA_PseudoTypeInfo_Struct2 parse_tree__prog_type_subst__tree234__pti_tree234_2__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_tvar_type_0__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_tvar_type_0;

static const MR_FA_PseudoTypeInfo_Struct1 parse_tree__prog_type_subst__term__pti_var_1__plain_parse_tree__prog_data__type_ctor_info_tvar_type_0;

static const MR_FA_PseudoTypeInfo_Struct2 parse_tree__prog_type_subst__tree234__pti_tree234_2__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_tvar_type_0__plain_parse_tree__prog_data__type_ctor_info_kind_0;

static const MR_FA_PseudoTypeInfo_Struct2 parse_tree__prog_type_subst__tree234__pti_tree234_2__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_tvar_type_0__plain_parse_tree__prog_data__type_ctor_info_mer_type_0;

static void MR_CALL 
parse_tree__prog_type_subst__apply_variable_renaming_to_tvar_kind_map_2_5_p_0(
  MR_Word parse_tree__prog_type_subst__Renaming_6,
  MR_Word parse_tree__prog_type_subst__TVar0_7,
  MR_Word parse_tree__prog_type_subst__Kind_8,
  MR_Word parse_tree__prog_type_subst__STATE_VARIABLE_KindMap_0_11,
  MR_Word * parse_tree__prog_type_subst__STATE_VARIABLE_KindMap_12);

static void MR_CALL 
parse_tree__prog_type_subst__apply_rec_subst_to_prog_constraints_3_p_0_1(
  MR_Box parse_tree__prog_type_subst__closure_arg,
  MR_Box parse_tree__prog_type_subst__wrapper_arg_1,
  MR_Box * parse_tree__prog_type_subst__wrapper_arg_2);

static void MR_CALL 
parse_tree__prog_type_subst__apply_subst_to_prog_constraints_3_p_0_1(
  MR_Box parse_tree__prog_type_subst__closure_arg,
  MR_Box parse_tree__prog_type_subst__wrapper_arg_1,
  MR_Box * parse_tree__prog_type_subst__wrapper_arg_2);

static void MR_CALL 
parse_tree__prog_type_subst__apply_variable_renaming_to_prog_constraints_3_p_0_1(
  MR_Box parse_tree__prog_type_subst__closure_arg,
  MR_Box parse_tree__prog_type_subst__wrapper_arg_1,
  MR_Box * parse_tree__prog_type_subst__wrapper_arg_2);

static void MR_CALL 
parse_tree__prog_type_subst__apply_rec_subst_to_prog_constraint_list_3_p_0_1(
  MR_Box parse_tree__prog_type_subst__closure_arg,
  MR_Box parse_tree__prog_type_subst__wrapper_arg_1,
  MR_Box * parse_tree__prog_type_subst__wrapper_arg_2);

static void MR_CALL 
parse_tree__prog_type_subst__apply_subst_to_prog_constraint_list_3_p_0_1(
  MR_Box parse_tree__prog_type_subst__closure_arg,
  MR_Box parse_tree__prog_type_subst__wrapper_arg_1,
  MR_Box * parse_tree__prog_type_subst__wrapper_arg_2);

static void MR_CALL 
parse_tree__prog_type_subst__apply_variable_renaming_to_prog_constraint_list_3_p_0_1(
  MR_Box parse_tree__prog_type_subst__closure_arg,
  MR_Box parse_tree__prog_type_subst__wrapper_arg_1,
  MR_Box * parse_tree__prog_type_subst__wrapper_arg_2);

static void MR_CALL 
parse_tree__prog_type_subst__apply_rec_subst_to_prog_constraint_3_p_0_1(
  MR_Box parse_tree__prog_type_subst__closure_arg,
  MR_Box parse_tree__prog_type_subst__wrapper_arg_1,
  MR_Box * parse_tree__prog_type_subst__wrapper_arg_2);

static void MR_CALL 
parse_tree__prog_type_subst__apply_subst_to_prog_constraint_3_p_0_1(
  MR_Box parse_tree__prog_type_subst__closure_arg,
  MR_Box parse_tree__prog_type_subst__wrapper_arg_1,
  MR_Box * parse_tree__prog_type_subst__wrapper_arg_2);

static void MR_CALL 
parse_tree__prog_type_subst__apply_variable_renaming_to_prog_constraint_3_p_0_1(
  MR_Box parse_tree__prog_type_subst__closure_arg,
  MR_Box parse_tree__prog_type_subst__wrapper_arg_1,
  MR_Box * parse_tree__prog_type_subst__wrapper_arg_2);

static void MR_CALL 
parse_tree__prog_type_subst__apply_rec_subst_to_type_list_3_p_0_1(
  MR_Box parse_tree__prog_type_subst__closure_arg,
  MR_Box parse_tree__prog_type_subst__wrapper_arg_1,
  MR_Box * parse_tree__prog_type_subst__wrapper_arg_2);

static void MR_CALL 
parse_tree__prog_type_subst__apply_subst_to_type_list_3_p_0_1(
  MR_Box parse_tree__prog_type_subst__closure_arg,
  MR_Box parse_tree__prog_type_subst__wrapper_arg_1,
  MR_Box * parse_tree__prog_type_subst__wrapper_arg_2);

static void MR_CALL 
parse_tree__prog_type_subst__apply_variable_renaming_to_type_list_3_p_0_1(
  MR_Box parse_tree__prog_type_subst__closure_arg,
  MR_Box parse_tree__prog_type_subst__wrapper_arg_1,
  MR_Box * parse_tree__prog_type_subst__wrapper_arg_2);

static void MR_CALL 
parse_tree__prog_type_subst__apply_variable_renaming_to_type_3_p_0_4(
  MR_Box parse_tree__prog_type_subst__closure_arg,
  MR_Box parse_tree__prog_type_subst__wrapper_arg_1,
  MR_Box * parse_tree__prog_type_subst__wrapper_arg_2);

static void MR_CALL 
parse_tree__prog_type_subst__apply_variable_renaming_to_type_3_p_0_3(
  MR_Box parse_tree__prog_type_subst__closure_arg,
  MR_Box parse_tree__prog_type_subst__wrapper_arg_1,
  MR_Box * parse_tree__prog_type_subst__wrapper_arg_2);

static void MR_CALL 
parse_tree__prog_type_subst__apply_variable_renaming_to_type_3_p_0_2(
  MR_Box parse_tree__prog_type_subst__closure_arg,
  MR_Box parse_tree__prog_type_subst__wrapper_arg_1,
  MR_Box * parse_tree__prog_type_subst__wrapper_arg_2);

static void MR_CALL 
parse_tree__prog_type_subst__apply_variable_renaming_to_type_3_p_0_1(
  MR_Box parse_tree__prog_type_subst__closure_arg,
  MR_Box parse_tree__prog_type_subst__wrapper_arg_1,
  MR_Box * parse_tree__prog_type_subst__wrapper_arg_2);

static void MR_CALL 
parse_tree__prog_type_subst__apply_rec_subst_to_tvar_list_4_p_0_1(
  MR_Box parse_tree__prog_type_subst__closure_arg,
  MR_Box parse_tree__prog_type_subst__wrapper_arg_1,
  MR_Box * parse_tree__prog_type_subst__wrapper_arg_2);

static void MR_CALL 
parse_tree__prog_type_subst__apply_subst_to_tvar_list_4_p_0_1(
  MR_Box parse_tree__prog_type_subst__closure_arg,
  MR_Box parse_tree__prog_type_subst__wrapper_arg_1,
  MR_Box * parse_tree__prog_type_subst__wrapper_arg_2);

static void MR_CALL 
parse_tree__prog_type_subst__apply_variable_renaming_to_tvar_list_3_p_0_1(
  MR_Box parse_tree__prog_type_subst__closure_arg,
  MR_Box parse_tree__prog_type_subst__wrapper_arg_1,
  MR_Box * parse_tree__prog_type_subst__wrapper_arg_2);

static void MR_CALL 
parse_tree__prog_type_subst__apply_rec_subst_to_type_3_p_0_4(
  MR_Box parse_tree__prog_type_subst__closure_arg,
  MR_Box parse_tree__prog_type_subst__wrapper_arg_1,
  MR_Box * parse_tree__prog_type_subst__wrapper_arg_2);

static void MR_CALL 
parse_tree__prog_type_subst__apply_rec_subst_to_type_3_p_0_3(
  MR_Box parse_tree__prog_type_subst__closure_arg,
  MR_Box parse_tree__prog_type_subst__wrapper_arg_1,
  MR_Box * parse_tree__prog_type_subst__wrapper_arg_2);

static void MR_CALL 
parse_tree__prog_type_subst__apply_rec_subst_to_type_3_p_0_2(
  MR_Box parse_tree__prog_type_subst__closure_arg,
  MR_Box parse_tree__prog_type_subst__wrapper_arg_1,
  MR_Box * parse_tree__prog_type_subst__wrapper_arg_2);

static void MR_CALL 
parse_tree__prog_type_subst__apply_rec_subst_to_type_3_p_0_1(
  MR_Box parse_tree__prog_type_subst__closure_arg,
  MR_Box parse_tree__prog_type_subst__wrapper_arg_1,
  MR_Box * parse_tree__prog_type_subst__wrapper_arg_2);

static void MR_CALL 
parse_tree__prog_type_subst__apply_subst_to_type_3_p_0_4(
  MR_Box parse_tree__prog_type_subst__closure_arg,
  MR_Box parse_tree__prog_type_subst__wrapper_arg_1,
  MR_Box * parse_tree__prog_type_subst__wrapper_arg_2);

static void MR_CALL 
parse_tree__prog_type_subst__apply_subst_to_type_3_p_0_3(
  MR_Box parse_tree__prog_type_subst__closure_arg,
  MR_Box parse_tree__prog_type_subst__wrapper_arg_1,
  MR_Box * parse_tree__prog_type_subst__wrapper_arg_2);

static void MR_CALL 
parse_tree__prog_type_subst__apply_subst_to_type_3_p_0_2(
  MR_Box parse_tree__prog_type_subst__closure_arg,
  MR_Box parse_tree__prog_type_subst__wrapper_arg_1,
  MR_Box * parse_tree__prog_type_subst__wrapper_arg_2);

static void MR_CALL 
parse_tree__prog_type_subst__apply_subst_to_type_3_p_0_1(
  MR_Box parse_tree__prog_type_subst__closure_arg,
  MR_Box parse_tree__prog_type_subst__wrapper_arg_1,
  MR_Box * parse_tree__prog_type_subst__wrapper_arg_2);

static void MR_CALL 
parse_tree__prog_type_subst__apply_type_args_3_p_0(
  MR_Word parse_tree__prog_type_subst__Type0_4,
  MR_Word parse_tree__prog_type_subst__Args_5,
  MR_Word * parse_tree__prog_type_subst__Type_6);

static void MR_CALL 
parse_tree__prog_type_subst__apply_type_args_to_kind_3_p_0(
  MR_Word parse_tree__prog_type_subst__Kind0_4,
  MR_Word parse_tree__prog_type_subst__ArgTypes_5,
  MR_Word * parse_tree__prog_type_subst__Kind_6);

static void MR_CALL 
parse_tree__prog_type_subst__apply_variable_renaming_to_tvar_kind_map_3_p_0_1(
  MR_Box parse_tree__prog_type_subst__closure_arg,
  MR_Box parse_tree__prog_type_subst__wrapper_arg_1,
  MR_Box parse_tree__prog_type_subst__wrapper_arg_2,
  MR_Box parse_tree__prog_type_subst__wrapper_arg_3,
  MR_Box * parse_tree__prog_type_subst__wrapper_arg_4);


static /* final */ const MR_Box parse_tree__prog_type_subst_scalar_common_1[1][2];

static /* final */ const MR_Box parse_tree__prog_type_subst_scalar_common_2[1][3];

static /* final */ const MR_Box parse_tree__prog_type_subst_scalar_common_3[1][8];

static /* final */ const MR_Box parse_tree__prog_type_subst_scalar_common_4[5][6];

static /* final */ const MR_Box parse_tree__prog_type_subst_scalar_common_5[1][7];




static /* final */ const MR_Box parse_tree__prog_type_subst_scalar_common_1[1][2] = {
  /* row 0 */
  {
    ((MR_Box) (&mercury__term__term__type_ctor_info_var_1)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_tvar_type_0))
  },
};

static /* final */ const MR_Box parse_tree__prog_type_subst_scalar_common_2[1][3] = {
  /* row 0 */
  {
    ((MR_Box) (&mercury__tree234__tree234__type_ctor_info_tree234_2)),
    ((MR_Box) (&parse_tree__prog_type_subst_scalar_common_1[0])),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_kind_0))
  },
};

static /* final */ const MR_Box parse_tree__prog_type_subst_scalar_common_3[1][8] = {
  /* row 0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 5)),
    ((MR_Box) (&parse_tree__prog_type_subst__tree234__pti_tree234_2__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_tvar_type_0__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_tvar_type_0)),
    ((MR_Box) (&parse_tree__prog_type_subst__term__pti_var_1__plain_parse_tree__prog_data__type_ctor_info_tvar_type_0)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_kind_0)),
    ((MR_Box) (&parse_tree__prog_type_subst__tree234__pti_tree234_2__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_tvar_type_0__plain_parse_tree__prog_data__type_ctor_info_kind_0)),
    ((MR_Box) (&parse_tree__prog_type_subst__tree234__pti_tree234_2__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_tvar_type_0__plain_parse_tree__prog_data__type_ctor_info_kind_0))
  },
};

static /* final */ const MR_Box parse_tree__prog_type_subst_scalar_common_4[5][6] = {
  /* row 0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 3)),
    ((MR_Box) (&parse_tree__prog_type_subst__tree234__pti_tree234_2__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_tvar_type_0__plain_parse_tree__prog_data__type_ctor_info_mer_type_0)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0))
  },
  /* row 1 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 3)),
    ((MR_Box) (&parse_tree__prog_type_subst__tree234__pti_tree234_2__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_tvar_type_0__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_tvar_type_0)),
    ((MR_Box) (&parse_tree__prog_type_subst__term__pti_var_1__plain_parse_tree__prog_data__type_ctor_info_tvar_type_0)),
    ((MR_Box) (&parse_tree__prog_type_subst__term__pti_var_1__plain_parse_tree__prog_data__type_ctor_info_tvar_type_0))
  },
  /* row 2 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 3)),
    ((MR_Box) (&parse_tree__prog_type_subst__tree234__pti_tree234_2__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_tvar_type_0__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_tvar_type_0)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0))
  },
  /* row 3 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 3)),
    ((MR_Box) (&parse_tree__prog_type_subst__tree234__pti_tree234_2__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_tvar_type_0__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_tvar_type_0)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_constraint_0)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_constraint_0))
  },
  /* row 4 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 3)),
    ((MR_Box) (&parse_tree__prog_type_subst__tree234__pti_tree234_2__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_tvar_type_0__plain_parse_tree__prog_data__type_ctor_info_mer_type_0)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_constraint_0)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_constraint_0))
  },
};

static /* final */ const MR_Box parse_tree__prog_type_subst_scalar_common_5[1][7] = {
  /* row 0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 4)),
    ((MR_Box) (&parse_tree__prog_type_subst__tree234__pti_tree234_2__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_tvar_type_0__plain_parse_tree__prog_data__type_ctor_info_kind_0)),
    ((MR_Box) (&parse_tree__prog_type_subst__tree234__pti_tree234_2__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_tvar_type_0__plain_parse_tree__prog_data__type_ctor_info_mer_type_0)),
    ((MR_Box) (&parse_tree__prog_type_subst__term__pti_var_1__plain_parse_tree__prog_data__type_ctor_info_tvar_type_0)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0))
  },
};



#include "io.mh"
#include "string.mh"
#include "time.mh"
#include "mdbcomp.rtti_access.mh"



static const MR_FA_TypeInfo_Struct1 parse_tree__prog_type_subst__term__ti_var_1parse_tree__prog_data__type_ctor_info_tvar_type_0 = {
  &mercury__term__term__type_ctor_info_var_1,
  {
    (MR_TypeInfo) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_tvar_type_0
  }
};

static const MR_FA_PseudoTypeInfo_Struct2 parse_tree__prog_type_subst__tree234__pti_tree234_2__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_tvar_type_0__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_tvar_type_0 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_PseudoTypeInfo) &parse_tree__prog_type_subst__term__ti_var_1parse_tree__prog_data__type_ctor_info_tvar_type_0,
    (MR_PseudoTypeInfo) &parse_tree__prog_type_subst__term__ti_var_1parse_tree__prog_data__type_ctor_info_tvar_type_0
  }
};

static const MR_FA_PseudoTypeInfo_Struct1 parse_tree__prog_type_subst__term__pti_var_1__plain_parse_tree__prog_data__type_ctor_info_tvar_type_0 = {
  &mercury__term__term__type_ctor_info_var_1,
  {
    (MR_PseudoTypeInfo) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_tvar_type_0
  }
};

static const MR_FA_PseudoTypeInfo_Struct2 parse_tree__prog_type_subst__tree234__pti_tree234_2__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_tvar_type_0__plain_parse_tree__prog_data__type_ctor_info_kind_0 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_PseudoTypeInfo) &parse_tree__prog_type_subst__term__ti_var_1parse_tree__prog_data__type_ctor_info_tvar_type_0,
    (MR_PseudoTypeInfo) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_kind_0
  }
};

static const MR_FA_PseudoTypeInfo_Struct2 parse_tree__prog_type_subst__tree234__pti_tree234_2__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_tvar_type_0__plain_parse_tree__prog_data__type_ctor_info_mer_type_0 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_PseudoTypeInfo) &parse_tree__prog_type_subst__term__ti_var_1parse_tree__prog_data__type_ctor_info_tvar_type_0,
    (MR_PseudoTypeInfo) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0
  }
};

static void MR_CALL 
parse_tree__prog_type_subst__apply_variable_renaming_to_tvar_kind_map_2_5_p_0(
  MR_Word parse_tree__prog_type_subst__Renaming_6,
  MR_Word parse_tree__prog_type_subst__TVar0_7,
  MR_Word parse_tree__prog_type_subst__Kind_8,
  MR_Word parse_tree__prog_type_subst__STATE_VARIABLE_KindMap_0_11,
  MR_Word * parse_tree__prog_type_subst__STATE_VARIABLE_KindMap_12)
{
  {
    MR_bool parse_tree__prog_type_subst__succeeded;
    MR_Word parse_tree__prog_type_subst__TVar_10;
    MR_Word parse_tree__prog_type_subst__TVar1_19;
    MR_Word parse_tree__prog_type_subst__TypeInfo_8_20 = (MR_Word) &parse_tree__prog_type_subst_scalar_common_1[0];
    MR_Box parse_tree__prog_type_subst__conv0_TVar1_19;

    {
      parse_tree__prog_type_subst__succeeded = mercury__map__search_3_p_0(parse_tree__prog_type_subst__TypeInfo_8_20, parse_tree__prog_type_subst__TypeInfo_8_20, parse_tree__prog_type_subst__Renaming_6, ((MR_Box) (parse_tree__prog_type_subst__TVar0_7)), &parse_tree__prog_type_subst__conv0_TVar1_19);
    }
    if (parse_tree__prog_type_subst__succeeded)
      {
        parse_tree__prog_type_subst__TVar1_19 = ((MR_Word) parse_tree__prog_type_subst__conv0_TVar1_19);
        parse_tree__prog_type_subst__succeeded = MR_TRUE;
      }
    if (parse_tree__prog_type_subst__succeeded)
      parse_tree__prog_type_subst__TVar_10 = parse_tree__prog_type_subst__TVar1_19;
    else
      parse_tree__prog_type_subst__TVar_10 = parse_tree__prog_type_subst__TVar0_7;
    {
      mercury__map__det_insert_4_p_0((MR_Word) &parse_tree__prog_type_subst_scalar_common_1[0], (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_kind_0, ((MR_Box) (parse_tree__prog_type_subst__TVar_10)), ((MR_Box) (parse_tree__prog_type_subst__Kind_8)), parse_tree__prog_type_subst__STATE_VARIABLE_KindMap_0_11, parse_tree__prog_type_subst__STATE_VARIABLE_KindMap_12);
    }
  }
}

static void MR_CALL 
parse_tree__prog_type_subst__apply_rec_subst_to_prog_constraints_3_p_0_1(
  MR_Box parse_tree__prog_type_subst__closure_arg,
  MR_Box parse_tree__prog_type_subst__wrapper_arg_1,
  MR_Box * parse_tree__prog_type_subst__wrapper_arg_2)
{
  {
    MR_Box parse_tree__prog_type_subst__closure = parse_tree__prog_type_subst__closure_arg;
    MR_Word parse_tree__prog_type_subst__conv0_STATE_VARIABLE_Constraint_10;

    {
      parse_tree__prog_type_subst__apply_rec_subst_to_prog_constraint_3_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_type_subst__closure, (MR_Integer) 3))), ((MR_Word) parse_tree__prog_type_subst__wrapper_arg_1), &parse_tree__prog_type_subst__conv0_STATE_VARIABLE_Constraint_10);
    }
    *parse_tree__prog_type_subst__wrapper_arg_2 = ((MR_Box) (parse_tree__prog_type_subst__conv0_STATE_VARIABLE_Constraint_10));
  }
}

void MR_CALL 
parse_tree__prog_type_subst__apply_rec_subst_to_prog_constraints_3_p_0(
  MR_Word parse_tree__prog_type_subst__Subst_4,
  MR_Word parse_tree__prog_type_subst__STATE_VARIABLE_Constraints_0_10,
  MR_Word * parse_tree__prog_type_subst__STATE_VARIABLE_Constraints_11)
{
  {
    MR_bool parse_tree__prog_type_subst__succeeded;
    MR_Word parse_tree__prog_type_subst__TypeCtorInfo_12_21;
    MR_Word parse_tree__prog_type_subst__TypeCtorInfo_12_30;
    MR_Word parse_tree__prog_type_subst__UnivCs0_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_type_subst__STATE_VARIABLE_Constraints_0_10, (MR_Integer) 0)));
    MR_Word parse_tree__prog_type_subst__ExistCs0_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_type_subst__STATE_VARIABLE_Constraints_0_10, (MR_Integer) 1)));
    MR_Word parse_tree__prog_type_subst__UnivCs_8;
    MR_Word parse_tree__prog_type_subst__ExistCs_9;
    MR_Word parse_tree__prog_type_subst__Var_17;

    {
      parse_tree__prog_type_subst__Var_17 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), parse_tree__prog_type_subst__Var_17, 0) = ((MR_Box) (&parse_tree__prog_type_subst_scalar_common_4[4]));
      MR_hl_field(MR_mktag(0), parse_tree__prog_type_subst__Var_17, 1) = ((MR_Box) (parse_tree__prog_type_subst__apply_rec_subst_to_prog_constraints_3_p_0_1));
      MR_hl_field(MR_mktag(0), parse_tree__prog_type_subst__Var_17, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
      MR_hl_field(MR_mktag(0), parse_tree__prog_type_subst__Var_17, 3) = ((MR_Box) (parse_tree__prog_type_subst__Subst_4));
    }
    parse_tree__prog_type_subst__TypeCtorInfo_12_21 = (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_constraint_0;
    {
      mercury__list__map_3_p_0(parse_tree__prog_type_subst__TypeCtorInfo_12_21, parse_tree__prog_type_subst__TypeCtorInfo_12_21, parse_tree__prog_type_subst__Var_17, parse_tree__prog_type_subst__UnivCs0_6, &parse_tree__prog_type_subst__UnivCs_8);
    }
    parse_tree__prog_type_subst__TypeCtorInfo_12_30 = (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_constraint_0;
    {
      mercury__list__map_3_p_0(parse_tree__prog_type_subst__TypeCtorInfo_12_30, parse_tree__prog_type_subst__TypeCtorInfo_12_30, parse_tree__prog_type_subst__Var_17, parse_tree__prog_type_subst__ExistCs0_7, &parse_tree__prog_type_subst__ExistCs_9);
    }
    {
      MR_Word base;
      base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
      *parse_tree__prog_type_subst__STATE_VARIABLE_Constraints_11 = base;
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (parse_tree__prog_type_subst__UnivCs_8));
      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (parse_tree__prog_type_subst__ExistCs_9));
    }
  }
}

static void MR_CALL 
parse_tree__prog_type_subst__apply_subst_to_prog_constraints_3_p_0_1(
  MR_Box parse_tree__prog_type_subst__closure_arg,
  MR_Box parse_tree__prog_type_subst__wrapper_arg_1,
  MR_Box * parse_tree__prog_type_subst__wrapper_arg_2)
{
  {
    MR_Box parse_tree__prog_type_subst__closure = parse_tree__prog_type_subst__closure_arg;
    MR_Word parse_tree__prog_type_subst__conv0_STATE_VARIABLE_Constraint_10;

    {
      parse_tree__prog_type_subst__apply_subst_to_prog_constraint_3_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_type_subst__closure, (MR_Integer) 3))), ((MR_Word) parse_tree__prog_type_subst__wrapper_arg_1), &parse_tree__prog_type_subst__conv0_STATE_VARIABLE_Constraint_10);
    }
    *parse_tree__prog_type_subst__wrapper_arg_2 = ((MR_Box) (parse_tree__prog_type_subst__conv0_STATE_VARIABLE_Constraint_10));
  }
}

void MR_CALL 
parse_tree__prog_type_subst__apply_subst_to_prog_constraints_3_p_0(
  MR_Word parse_tree__prog_type_subst__Subst_4,
  MR_Word parse_tree__prog_type_subst__HeadVar__2_2,
  MR_Word * parse_tree__prog_type_subst__HeadVar__3_3)
{
  {
    MR_bool parse_tree__prog_type_subst__succeeded;
    MR_Word parse_tree__prog_type_subst__TypeCtorInfo_12_17;
    MR_Word parse_tree__prog_type_subst__TypeCtorInfo_12_26;
    MR_Word parse_tree__prog_type_subst__UniversalCs0_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_type_subst__HeadVar__2_2, (MR_Integer) 0)));
    MR_Word parse_tree__prog_type_subst__ExistentialCs0_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_type_subst__HeadVar__2_2, (MR_Integer) 1)));
    MR_Word parse_tree__prog_type_subst__UniversalCs_7;
    MR_Word parse_tree__prog_type_subst__ExistentialCs_8;
    MR_Word parse_tree__prog_type_subst__Var_13;

    {
      parse_tree__prog_type_subst__Var_13 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), parse_tree__prog_type_subst__Var_13, 0) = ((MR_Box) (&parse_tree__prog_type_subst_scalar_common_4[4]));
      MR_hl_field(MR_mktag(0), parse_tree__prog_type_subst__Var_13, 1) = ((MR_Box) (parse_tree__prog_type_subst__apply_subst_to_prog_constraints_3_p_0_1));
      MR_hl_field(MR_mktag(0), parse_tree__prog_type_subst__Var_13, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
      MR_hl_field(MR_mktag(0), parse_tree__prog_type_subst__Var_13, 3) = ((MR_Box) (parse_tree__prog_type_subst__Subst_4));
    }
    parse_tree__prog_type_subst__TypeCtorInfo_12_17 = (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_constraint_0;
    {
      mercury__list__map_3_p_0(parse_tree__prog_type_subst__TypeCtorInfo_12_17, parse_tree__prog_type_subst__TypeCtorInfo_12_17, parse_tree__prog_type_subst__Var_13, parse_tree__prog_type_subst__UniversalCs0_5, &parse_tree__prog_type_subst__UniversalCs_7);
    }
    parse_tree__prog_type_subst__TypeCtorInfo_12_26 = (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_constraint_0;
    {
      mercury__list__map_3_p_0(parse_tree__prog_type_subst__TypeCtorInfo_12_26, parse_tree__prog_type_subst__TypeCtorInfo_12_26, parse_tree__prog_type_subst__Var_13, parse_tree__prog_type_subst__ExistentialCs0_6, &parse_tree__prog_type_subst__ExistentialCs_8);
    }
    {
      MR_Word base;
      base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
      *parse_tree__prog_type_subst__HeadVar__3_3 = base;
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (parse_tree__prog_type_subst__UniversalCs_7));
      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (parse_tree__prog_type_subst__ExistentialCs_8));
    }
  }
}

static void MR_CALL 
parse_tree__prog_type_subst__apply_variable_renaming_to_prog_constraints_3_p_0_1(
  MR_Box parse_tree__prog_type_subst__closure_arg,
  MR_Box parse_tree__prog_type_subst__wrapper_arg_1,
  MR_Box * parse_tree__prog_type_subst__wrapper_arg_2)
{
  {
    MR_Box parse_tree__prog_type_subst__closure = parse_tree__prog_type_subst__closure_arg;
    MR_Word parse_tree__prog_type_subst__conv0_STATE_VARIABLE_Constraint_10;

    {
      parse_tree__prog_type_subst__apply_variable_renaming_to_prog_constraint_3_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_type_subst__closure, (MR_Integer) 3))), ((MR_Word) parse_tree__prog_type_subst__wrapper_arg_1), &parse_tree__prog_type_subst__conv0_STATE_VARIABLE_Constraint_10);
    }
    *parse_tree__prog_type_subst__wrapper_arg_2 = ((MR_Box) (parse_tree__prog_type_subst__conv0_STATE_VARIABLE_Constraint_10));
  }
}

void MR_CALL 
parse_tree__prog_type_subst__apply_variable_renaming_to_prog_constraints_3_p_0(
  MR_Word parse_tree__prog_type_subst__Renaming_4,
  MR_Word parse_tree__prog_type_subst__STATE_VARIABLE_Constraints_0_10,
  MR_Word * parse_tree__prog_type_subst__STATE_VARIABLE_Constraints_11)
{
  {
    MR_bool parse_tree__prog_type_subst__succeeded;
    MR_Word parse_tree__prog_type_subst__TypeCtorInfo_12_21;
    MR_Word parse_tree__prog_type_subst__TypeCtorInfo_12_30;
    MR_Word parse_tree__prog_type_subst__UnivConstraints0_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_type_subst__STATE_VARIABLE_Constraints_0_10, (MR_Integer) 0)));
    MR_Word parse_tree__prog_type_subst__ExistConstraints0_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_type_subst__STATE_VARIABLE_Constraints_0_10, (MR_Integer) 1)));
    MR_Word parse_tree__prog_type_subst__UnivConstraints_8;
    MR_Word parse_tree__prog_type_subst__ExistConstraints_9;
    MR_Word parse_tree__prog_type_subst__Var_17;

    {
      parse_tree__prog_type_subst__Var_17 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), parse_tree__prog_type_subst__Var_17, 0) = ((MR_Box) (&parse_tree__prog_type_subst_scalar_common_4[3]));
      MR_hl_field(MR_mktag(0), parse_tree__prog_type_subst__Var_17, 1) = ((MR_Box) (parse_tree__prog_type_subst__apply_variable_renaming_to_prog_constraints_3_p_0_1));
      MR_hl_field(MR_mktag(0), parse_tree__prog_type_subst__Var_17, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
      MR_hl_field(MR_mktag(0), parse_tree__prog_type_subst__Var_17, 3) = ((MR_Box) (parse_tree__prog_type_subst__Renaming_4));
    }
    parse_tree__prog_type_subst__TypeCtorInfo_12_21 = (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_constraint_0;
    {
      mercury__list__map_3_p_0(parse_tree__prog_type_subst__TypeCtorInfo_12_21, parse_tree__prog_type_subst__TypeCtorInfo_12_21, parse_tree__prog_type_subst__Var_17, parse_tree__prog_type_subst__UnivConstraints0_6, &parse_tree__prog_type_subst__UnivConstraints_8);
    }
    parse_tree__prog_type_subst__TypeCtorInfo_12_30 = (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_constraint_0;
    {
      mercury__list__map_3_p_0(parse_tree__prog_type_subst__TypeCtorInfo_12_30, parse_tree__prog_type_subst__TypeCtorInfo_12_30, parse_tree__prog_type_subst__Var_17, parse_tree__prog_type_subst__ExistConstraints0_7, &parse_tree__prog_type_subst__ExistConstraints_9);
    }
    {
      MR_Word base;
      base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
      *parse_tree__prog_type_subst__STATE_VARIABLE_Constraints_11 = base;
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (parse_tree__prog_type_subst__UnivConstraints_8));
      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (parse_tree__prog_type_subst__ExistConstraints_9));
    }
  }
}

static void MR_CALL 
parse_tree__prog_type_subst__apply_rec_subst_to_prog_constraint_list_3_p_0_1(
  MR_Box parse_tree__prog_type_subst__closure_arg,
  MR_Box parse_tree__prog_type_subst__wrapper_arg_1,
  MR_Box * parse_tree__prog_type_subst__wrapper_arg_2)
{
  {
    MR_Box parse_tree__prog_type_subst__closure = parse_tree__prog_type_subst__closure_arg;
    MR_Word parse_tree__prog_type_subst__conv0_STATE_VARIABLE_Constraint_10;

    {
      parse_tree__prog_type_subst__apply_rec_subst_to_prog_constraint_3_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_type_subst__closure, (MR_Integer) 3))), ((MR_Word) parse_tree__prog_type_subst__wrapper_arg_1), &parse_tree__prog_type_subst__conv0_STATE_VARIABLE_Constraint_10);
    }
    *parse_tree__prog_type_subst__wrapper_arg_2 = ((MR_Box) (parse_tree__prog_type_subst__conv0_STATE_VARIABLE_Constraint_10));
  }
}

void MR_CALL 
parse_tree__prog_type_subst__apply_rec_subst_to_prog_constraint_list_3_p_0(
  MR_Word parse_tree__prog_type_subst__Subst_4,
  MR_Word parse_tree__prog_type_subst__STATE_VARIABLE_Constraints_0_6,
  MR_Word * parse_tree__prog_type_subst__STATE_VARIABLE_Constraints_7)
{
  {
    MR_bool parse_tree__prog_type_subst__succeeded;
    MR_Word parse_tree__prog_type_subst__TypeCtorInfo_12_12;
    MR_Word parse_tree__prog_type_subst__Var_8;

    {
      parse_tree__prog_type_subst__Var_8 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), parse_tree__prog_type_subst__Var_8, 0) = ((MR_Box) (&parse_tree__prog_type_subst_scalar_common_4[4]));
      MR_hl_field(MR_mktag(0), parse_tree__prog_type_subst__Var_8, 1) = ((MR_Box) (parse_tree__prog_type_subst__apply_rec_subst_to_prog_constraint_list_3_p_0_1));
      MR_hl_field(MR_mktag(0), parse_tree__prog_type_subst__Var_8, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
      MR_hl_field(MR_mktag(0), parse_tree__prog_type_subst__Var_8, 3) = ((MR_Box) (parse_tree__prog_type_subst__Subst_4));
    }
    parse_tree__prog_type_subst__TypeCtorInfo_12_12 = (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_constraint_0;
    {
      mercury__list__map_3_p_0(parse_tree__prog_type_subst__TypeCtorInfo_12_12, parse_tree__prog_type_subst__TypeCtorInfo_12_12, parse_tree__prog_type_subst__Var_8, parse_tree__prog_type_subst__STATE_VARIABLE_Constraints_0_6, parse_tree__prog_type_subst__STATE_VARIABLE_Constraints_7);
    }
  }
}

static void MR_CALL 
parse_tree__prog_type_subst__apply_subst_to_prog_constraint_list_3_p_0_1(
  MR_Box parse_tree__prog_type_subst__closure_arg,
  MR_Box parse_tree__prog_type_subst__wrapper_arg_1,
  MR_Box * parse_tree__prog_type_subst__wrapper_arg_2)
{
  {
    MR_Box parse_tree__prog_type_subst__closure = parse_tree__prog_type_subst__closure_arg;
    MR_Word parse_tree__prog_type_subst__conv0_STATE_VARIABLE_Constraint_10;

    {
      parse_tree__prog_type_subst__apply_subst_to_prog_constraint_3_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_type_subst__closure, (MR_Integer) 3))), ((MR_Word) parse_tree__prog_type_subst__wrapper_arg_1), &parse_tree__prog_type_subst__conv0_STATE_VARIABLE_Constraint_10);
    }
    *parse_tree__prog_type_subst__wrapper_arg_2 = ((MR_Box) (parse_tree__prog_type_subst__conv0_STATE_VARIABLE_Constraint_10));
  }
}

void MR_CALL 
parse_tree__prog_type_subst__apply_subst_to_prog_constraint_list_3_p_0(
  MR_Word parse_tree__prog_type_subst__Subst_4,
  MR_Word parse_tree__prog_type_subst__STATE_VARIABLE_Constraints_0_6,
  MR_Word * parse_tree__prog_type_subst__STATE_VARIABLE_Constraints_7)
{
  {
    MR_bool parse_tree__prog_type_subst__succeeded;
    MR_Word parse_tree__prog_type_subst__TypeCtorInfo_12_12;
    MR_Word parse_tree__prog_type_subst__Var_8;

    {
      parse_tree__prog_type_subst__Var_8 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), parse_tree__prog_type_subst__Var_8, 0) = ((MR_Box) (&parse_tree__prog_type_subst_scalar_common_4[4]));
      MR_hl_field(MR_mktag(0), parse_tree__prog_type_subst__Var_8, 1) = ((MR_Box) (parse_tree__prog_type_subst__apply_subst_to_prog_constraint_list_3_p_0_1));
      MR_hl_field(MR_mktag(0), parse_tree__prog_type_subst__Var_8, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
      MR_hl_field(MR_mktag(0), parse_tree__prog_type_subst__Var_8, 3) = ((MR_Box) (parse_tree__prog_type_subst__Subst_4));
    }
    parse_tree__prog_type_subst__TypeCtorInfo_12_12 = (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_constraint_0;
    {
      mercury__list__map_3_p_0(parse_tree__prog_type_subst__TypeCtorInfo_12_12, parse_tree__prog_type_subst__TypeCtorInfo_12_12, parse_tree__prog_type_subst__Var_8, parse_tree__prog_type_subst__STATE_VARIABLE_Constraints_0_6, parse_tree__prog_type_subst__STATE_VARIABLE_Constraints_7);
    }
  }
}

static void MR_CALL 
parse_tree__prog_type_subst__apply_variable_renaming_to_prog_constraint_list_3_p_0_1(
  MR_Box parse_tree__prog_type_subst__closure_arg,
  MR_Box parse_tree__prog_type_subst__wrapper_arg_1,
  MR_Box * parse_tree__prog_type_subst__wrapper_arg_2)
{
  {
    MR_Box parse_tree__prog_type_subst__closure = parse_tree__prog_type_subst__closure_arg;
    MR_Word parse_tree__prog_type_subst__conv0_STATE_VARIABLE_Constraint_10;

    {
      parse_tree__prog_type_subst__apply_variable_renaming_to_prog_constraint_3_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_type_subst__closure, (MR_Integer) 3))), ((MR_Word) parse_tree__prog_type_subst__wrapper_arg_1), &parse_tree__prog_type_subst__conv0_STATE_VARIABLE_Constraint_10);
    }
    *parse_tree__prog_type_subst__wrapper_arg_2 = ((MR_Box) (parse_tree__prog_type_subst__conv0_STATE_VARIABLE_Constraint_10));
  }
}

void MR_CALL 
parse_tree__prog_type_subst__apply_variable_renaming_to_prog_constraint_list_3_p_0(
  MR_Word parse_tree__prog_type_subst__Renaming_4,
  MR_Word parse_tree__prog_type_subst__STATE_VARIABLE_Constraints_0_6,
  MR_Word * parse_tree__prog_type_subst__STATE_VARIABLE_Constraints_7)
{
  {
    MR_bool parse_tree__prog_type_subst__succeeded;
    MR_Word parse_tree__prog_type_subst__TypeCtorInfo_12_12;
    MR_Word parse_tree__prog_type_subst__Var_8;

    {
      parse_tree__prog_type_subst__Var_8 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), parse_tree__prog_type_subst__Var_8, 0) = ((MR_Box) (&parse_tree__prog_type_subst_scalar_common_4[3]));
      MR_hl_field(MR_mktag(0), parse_tree__prog_type_subst__Var_8, 1) = ((MR_Box) (parse_tree__prog_type_subst__apply_variable_renaming_to_prog_constraint_list_3_p_0_1));
      MR_hl_field(MR_mktag(0), parse_tree__prog_type_subst__Var_8, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
      MR_hl_field(MR_mktag(0), parse_tree__prog_type_subst__Var_8, 3) = ((MR_Box) (parse_tree__prog_type_subst__Renaming_4));
    }
    parse_tree__prog_type_subst__TypeCtorInfo_12_12 = (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_constraint_0;
    {
      mercury__list__map_3_p_0(parse_tree__prog_type_subst__TypeCtorInfo_12_12, parse_tree__prog_type_subst__TypeCtorInfo_12_12, parse_tree__prog_type_subst__Var_8, parse_tree__prog_type_subst__STATE_VARIABLE_Constraints_0_6, parse_tree__prog_type_subst__STATE_VARIABLE_Constraints_7);
    }
  }
}

static void MR_CALL 
parse_tree__prog_type_subst__apply_rec_subst_to_prog_constraint_3_p_0_1(
  MR_Box parse_tree__prog_type_subst__closure_arg,
  MR_Box parse_tree__prog_type_subst__wrapper_arg_1,
  MR_Box * parse_tree__prog_type_subst__wrapper_arg_2)
{
  {
    MR_Box parse_tree__prog_type_subst__closure = parse_tree__prog_type_subst__closure_arg;
    MR_Word parse_tree__prog_type_subst__conv0_Type_6;

    {
      parse_tree__prog_type_subst__apply_rec_subst_to_type_3_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_type_subst__closure, (MR_Integer) 3))), ((MR_Word) parse_tree__prog_type_subst__wrapper_arg_1), &parse_tree__prog_type_subst__conv0_Type_6);
    }
    *parse_tree__prog_type_subst__wrapper_arg_2 = ((MR_Box) (parse_tree__prog_type_subst__conv0_Type_6));
  }
}

void MR_CALL 
parse_tree__prog_type_subst__apply_rec_subst_to_prog_constraint_3_p_0(
  MR_Word parse_tree__prog_type_subst__Subst_4,
  MR_Word parse_tree__prog_type_subst__STATE_VARIABLE_Constraint_0_9,
  MR_Word * parse_tree__prog_type_subst__STATE_VARIABLE_Constraint_10)
{
  {
    MR_bool parse_tree__prog_type_subst__succeeded;
    MR_Word parse_tree__prog_type_subst__TypeCtorInfo_10_18;
    MR_Word parse_tree__prog_type_subst__ClassName_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_type_subst__STATE_VARIABLE_Constraint_0_9, (MR_Integer) 0)));
    MR_Word parse_tree__prog_type_subst__Types0_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_type_subst__STATE_VARIABLE_Constraint_0_9, (MR_Integer) 1)));
    MR_Word parse_tree__prog_type_subst__Types_8;
    MR_Word parse_tree__prog_type_subst__Var_15;

    {
      parse_tree__prog_type_subst__Var_15 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), parse_tree__prog_type_subst__Var_15, 0) = ((MR_Box) (&parse_tree__prog_type_subst_scalar_common_4[0]));
      MR_hl_field(MR_mktag(0), parse_tree__prog_type_subst__Var_15, 1) = ((MR_Box) (parse_tree__prog_type_subst__apply_rec_subst_to_prog_constraint_3_p_0_1));
      MR_hl_field(MR_mktag(0), parse_tree__prog_type_subst__Var_15, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
      MR_hl_field(MR_mktag(0), parse_tree__prog_type_subst__Var_15, 3) = ((MR_Box) (parse_tree__prog_type_subst__Subst_4));
    }
    parse_tree__prog_type_subst__TypeCtorInfo_10_18 = (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0;
    {
      mercury__list__map_3_p_0(parse_tree__prog_type_subst__TypeCtorInfo_10_18, parse_tree__prog_type_subst__TypeCtorInfo_10_18, parse_tree__prog_type_subst__Var_15, parse_tree__prog_type_subst__Types0_7, &parse_tree__prog_type_subst__Types_8);
    }
    {
      MR_Word base;
      base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
      *parse_tree__prog_type_subst__STATE_VARIABLE_Constraint_10 = base;
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (parse_tree__prog_type_subst__ClassName_6));
      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (parse_tree__prog_type_subst__Types_8));
    }
  }
}

static void MR_CALL 
parse_tree__prog_type_subst__apply_subst_to_prog_constraint_3_p_0_1(
  MR_Box parse_tree__prog_type_subst__closure_arg,
  MR_Box parse_tree__prog_type_subst__wrapper_arg_1,
  MR_Box * parse_tree__prog_type_subst__wrapper_arg_2)
{
  {
    MR_Box parse_tree__prog_type_subst__closure = parse_tree__prog_type_subst__closure_arg;
    MR_Word parse_tree__prog_type_subst__conv0_Type_6;

    {
      parse_tree__prog_type_subst__apply_subst_to_type_3_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_type_subst__closure, (MR_Integer) 3))), ((MR_Word) parse_tree__prog_type_subst__wrapper_arg_1), &parse_tree__prog_type_subst__conv0_Type_6);
    }
    *parse_tree__prog_type_subst__wrapper_arg_2 = ((MR_Box) (parse_tree__prog_type_subst__conv0_Type_6));
  }
}

void MR_CALL 
parse_tree__prog_type_subst__apply_subst_to_prog_constraint_3_p_0(
  MR_Word parse_tree__prog_type_subst__Subst_4,
  MR_Word parse_tree__prog_type_subst__STATE_VARIABLE_Constraint_0_9,
  MR_Word * parse_tree__prog_type_subst__STATE_VARIABLE_Constraint_10)
{
  {
    MR_bool parse_tree__prog_type_subst__succeeded;
    MR_Word parse_tree__prog_type_subst__TypeCtorInfo_10_18;
    MR_Word parse_tree__prog_type_subst__ClassName_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_type_subst__STATE_VARIABLE_Constraint_0_9, (MR_Integer) 0)));
    MR_Word parse_tree__prog_type_subst__Types0_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_type_subst__STATE_VARIABLE_Constraint_0_9, (MR_Integer) 1)));
    MR_Word parse_tree__prog_type_subst__Types_8;
    MR_Word parse_tree__prog_type_subst__Var_15;

    {
      parse_tree__prog_type_subst__Var_15 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), parse_tree__prog_type_subst__Var_15, 0) = ((MR_Box) (&parse_tree__prog_type_subst_scalar_common_4[0]));
      MR_hl_field(MR_mktag(0), parse_tree__prog_type_subst__Var_15, 1) = ((MR_Box) (parse_tree__prog_type_subst__apply_subst_to_prog_constraint_3_p_0_1));
      MR_hl_field(MR_mktag(0), parse_tree__prog_type_subst__Var_15, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
      MR_hl_field(MR_mktag(0), parse_tree__prog_type_subst__Var_15, 3) = ((MR_Box) (parse_tree__prog_type_subst__Subst_4));
    }
    parse_tree__prog_type_subst__TypeCtorInfo_10_18 = (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0;
    {
      mercury__list__map_3_p_0(parse_tree__prog_type_subst__TypeCtorInfo_10_18, parse_tree__prog_type_subst__TypeCtorInfo_10_18, parse_tree__prog_type_subst__Var_15, parse_tree__prog_type_subst__Types0_7, &parse_tree__prog_type_subst__Types_8);
    }
    {
      MR_Word base;
      base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
      *parse_tree__prog_type_subst__STATE_VARIABLE_Constraint_10 = base;
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (parse_tree__prog_type_subst__ClassName_6));
      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (parse_tree__prog_type_subst__Types_8));
    }
  }
}

static void MR_CALL 
parse_tree__prog_type_subst__apply_variable_renaming_to_prog_constraint_3_p_0_1(
  MR_Box parse_tree__prog_type_subst__closure_arg,
  MR_Box parse_tree__prog_type_subst__wrapper_arg_1,
  MR_Box * parse_tree__prog_type_subst__wrapper_arg_2)
{
  {
    MR_Box parse_tree__prog_type_subst__closure = parse_tree__prog_type_subst__closure_arg;
    MR_Word parse_tree__prog_type_subst__conv0_Type_6;

    {
      parse_tree__prog_type_subst__apply_variable_renaming_to_type_3_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_type_subst__closure, (MR_Integer) 3))), ((MR_Word) parse_tree__prog_type_subst__wrapper_arg_1), &parse_tree__prog_type_subst__conv0_Type_6);
    }
    *parse_tree__prog_type_subst__wrapper_arg_2 = ((MR_Box) (parse_tree__prog_type_subst__conv0_Type_6));
  }
}

void MR_CALL 
parse_tree__prog_type_subst__apply_variable_renaming_to_prog_constraint_3_p_0(
  MR_Word parse_tree__prog_type_subst__Renaming_4,
  MR_Word parse_tree__prog_type_subst__STATE_VARIABLE_Constraint_0_9,
  MR_Word * parse_tree__prog_type_subst__STATE_VARIABLE_Constraint_10)
{
  {
    MR_bool parse_tree__prog_type_subst__succeeded;
    MR_Word parse_tree__prog_type_subst__TypeCtorInfo_10_18;
    MR_Word parse_tree__prog_type_subst__ClassName_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_type_subst__STATE_VARIABLE_Constraint_0_9, (MR_Integer) 0)));
    MR_Word parse_tree__prog_type_subst__ClassArgTypes0_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_type_subst__STATE_VARIABLE_Constraint_0_9, (MR_Integer) 1)));
    MR_Word parse_tree__prog_type_subst__ClassArgTypes_8;
    MR_Word parse_tree__prog_type_subst__Var_15;

    {
      parse_tree__prog_type_subst__Var_15 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), parse_tree__prog_type_subst__Var_15, 0) = ((MR_Box) (&parse_tree__prog_type_subst_scalar_common_4[2]));
      MR_hl_field(MR_mktag(0), parse_tree__prog_type_subst__Var_15, 1) = ((MR_Box) (parse_tree__prog_type_subst__apply_variable_renaming_to_prog_constraint_3_p_0_1));
      MR_hl_field(MR_mktag(0), parse_tree__prog_type_subst__Var_15, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
      MR_hl_field(MR_mktag(0), parse_tree__prog_type_subst__Var_15, 3) = ((MR_Box) (parse_tree__prog_type_subst__Renaming_4));
    }
    parse_tree__prog_type_subst__TypeCtorInfo_10_18 = (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0;
    {
      mercury__list__map_3_p_0(parse_tree__prog_type_subst__TypeCtorInfo_10_18, parse_tree__prog_type_subst__TypeCtorInfo_10_18, parse_tree__prog_type_subst__Var_15, parse_tree__prog_type_subst__ClassArgTypes0_7, &parse_tree__prog_type_subst__ClassArgTypes_8);
    }
    {
      MR_Word base;
      base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
      *parse_tree__prog_type_subst__STATE_VARIABLE_Constraint_10 = base;
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (parse_tree__prog_type_subst__ClassName_6));
      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (parse_tree__prog_type_subst__ClassArgTypes_8));
    }
  }
}

static void MR_CALL 
parse_tree__prog_type_subst__apply_rec_subst_to_type_list_3_p_0_1(
  MR_Box parse_tree__prog_type_subst__closure_arg,
  MR_Box parse_tree__prog_type_subst__wrapper_arg_1,
  MR_Box * parse_tree__prog_type_subst__wrapper_arg_2)
{
  {
    MR_Box parse_tree__prog_type_subst__closure = parse_tree__prog_type_subst__closure_arg;
    MR_Word parse_tree__prog_type_subst__conv0_Type_6;

    {
      parse_tree__prog_type_subst__apply_rec_subst_to_type_3_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_type_subst__closure, (MR_Integer) 3))), ((MR_Word) parse_tree__prog_type_subst__wrapper_arg_1), &parse_tree__prog_type_subst__conv0_Type_6);
    }
    *parse_tree__prog_type_subst__wrapper_arg_2 = ((MR_Box) (parse_tree__prog_type_subst__conv0_Type_6));
  }
}

void MR_CALL 
parse_tree__prog_type_subst__apply_rec_subst_to_type_list_3_p_0(
  MR_Word parse_tree__prog_type_subst__Subst_4,
  MR_Word parse_tree__prog_type_subst__Types0_5,
  MR_Word * parse_tree__prog_type_subst__Types_6)
{
  {
    MR_bool parse_tree__prog_type_subst__succeeded;
    MR_Word parse_tree__prog_type_subst__TypeCtorInfo_10_10;
    MR_Word parse_tree__prog_type_subst__Var_7;

    {
      parse_tree__prog_type_subst__Var_7 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), parse_tree__prog_type_subst__Var_7, 0) = ((MR_Box) (&parse_tree__prog_type_subst_scalar_common_4[0]));
      MR_hl_field(MR_mktag(0), parse_tree__prog_type_subst__Var_7, 1) = ((MR_Box) (parse_tree__prog_type_subst__apply_rec_subst_to_type_list_3_p_0_1));
      MR_hl_field(MR_mktag(0), parse_tree__prog_type_subst__Var_7, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
      MR_hl_field(MR_mktag(0), parse_tree__prog_type_subst__Var_7, 3) = ((MR_Box) (parse_tree__prog_type_subst__Subst_4));
    }
    parse_tree__prog_type_subst__TypeCtorInfo_10_10 = (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0;
    {
      mercury__list__map_3_p_0(parse_tree__prog_type_subst__TypeCtorInfo_10_10, parse_tree__prog_type_subst__TypeCtorInfo_10_10, parse_tree__prog_type_subst__Var_7, parse_tree__prog_type_subst__Types0_5, parse_tree__prog_type_subst__Types_6);
    }
  }
}

static void MR_CALL 
parse_tree__prog_type_subst__apply_subst_to_type_list_3_p_0_1(
  MR_Box parse_tree__prog_type_subst__closure_arg,
  MR_Box parse_tree__prog_type_subst__wrapper_arg_1,
  MR_Box * parse_tree__prog_type_subst__wrapper_arg_2)
{
  {
    MR_Box parse_tree__prog_type_subst__closure = parse_tree__prog_type_subst__closure_arg;
    MR_Word parse_tree__prog_type_subst__conv0_Type_6;

    {
      parse_tree__prog_type_subst__apply_subst_to_type_3_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_type_subst__closure, (MR_Integer) 3))), ((MR_Word) parse_tree__prog_type_subst__wrapper_arg_1), &parse_tree__prog_type_subst__conv0_Type_6);
    }
    *parse_tree__prog_type_subst__wrapper_arg_2 = ((MR_Box) (parse_tree__prog_type_subst__conv0_Type_6));
  }
}

void MR_CALL 
parse_tree__prog_type_subst__apply_subst_to_type_list_3_p_0(
  MR_Word parse_tree__prog_type_subst__Subst_4,
  MR_Word parse_tree__prog_type_subst__Types0_5,
  MR_Word * parse_tree__prog_type_subst__Types_6)
{
  {
    MR_bool parse_tree__prog_type_subst__succeeded;
    MR_Word parse_tree__prog_type_subst__TypeCtorInfo_10_10;
    MR_Word parse_tree__prog_type_subst__Var_7;

    {
      parse_tree__prog_type_subst__Var_7 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), parse_tree__prog_type_subst__Var_7, 0) = ((MR_Box) (&parse_tree__prog_type_subst_scalar_common_4[0]));
      MR_hl_field(MR_mktag(0), parse_tree__prog_type_subst__Var_7, 1) = ((MR_Box) (parse_tree__prog_type_subst__apply_subst_to_type_list_3_p_0_1));
      MR_hl_field(MR_mktag(0), parse_tree__prog_type_subst__Var_7, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
      MR_hl_field(MR_mktag(0), parse_tree__prog_type_subst__Var_7, 3) = ((MR_Box) (parse_tree__prog_type_subst__Subst_4));
    }
    parse_tree__prog_type_subst__TypeCtorInfo_10_10 = (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0;
    {
      mercury__list__map_3_p_0(parse_tree__prog_type_subst__TypeCtorInfo_10_10, parse_tree__prog_type_subst__TypeCtorInfo_10_10, parse_tree__prog_type_subst__Var_7, parse_tree__prog_type_subst__Types0_5, parse_tree__prog_type_subst__Types_6);
    }
  }
}

static void MR_CALL 
parse_tree__prog_type_subst__apply_variable_renaming_to_type_list_3_p_0_1(
  MR_Box parse_tree__prog_type_subst__closure_arg,
  MR_Box parse_tree__prog_type_subst__wrapper_arg_1,
  MR_Box * parse_tree__prog_type_subst__wrapper_arg_2)
{
  {
    MR_Box parse_tree__prog_type_subst__closure = parse_tree__prog_type_subst__closure_arg;
    MR_Word parse_tree__prog_type_subst__conv0_Type_6;

    {
      parse_tree__prog_type_subst__apply_variable_renaming_to_type_3_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_type_subst__closure, (MR_Integer) 3))), ((MR_Word) parse_tree__prog_type_subst__wrapper_arg_1), &parse_tree__prog_type_subst__conv0_Type_6);
    }
    *parse_tree__prog_type_subst__wrapper_arg_2 = ((MR_Box) (parse_tree__prog_type_subst__conv0_Type_6));
  }
}

void MR_CALL 
parse_tree__prog_type_subst__apply_variable_renaming_to_type_list_3_p_0(
  MR_Word parse_tree__prog_type_subst__Renaming_4,
  MR_Word parse_tree__prog_type_subst__Types0_5,
  MR_Word * parse_tree__prog_type_subst__Types_6)
{
  {
    MR_bool parse_tree__prog_type_subst__succeeded;
    MR_Word parse_tree__prog_type_subst__TypeCtorInfo_10_10;
    MR_Word parse_tree__prog_type_subst__Var_7;

    {
      parse_tree__prog_type_subst__Var_7 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), parse_tree__prog_type_subst__Var_7, 0) = ((MR_Box) (&parse_tree__prog_type_subst_scalar_common_4[2]));
      MR_hl_field(MR_mktag(0), parse_tree__prog_type_subst__Var_7, 1) = ((MR_Box) (parse_tree__prog_type_subst__apply_variable_renaming_to_type_list_3_p_0_1));
      MR_hl_field(MR_mktag(0), parse_tree__prog_type_subst__Var_7, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
      MR_hl_field(MR_mktag(0), parse_tree__prog_type_subst__Var_7, 3) = ((MR_Box) (parse_tree__prog_type_subst__Renaming_4));
    }
    parse_tree__prog_type_subst__TypeCtorInfo_10_10 = (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0;
    {
      mercury__list__map_3_p_0(parse_tree__prog_type_subst__TypeCtorInfo_10_10, parse_tree__prog_type_subst__TypeCtorInfo_10_10, parse_tree__prog_type_subst__Var_7, parse_tree__prog_type_subst__Types0_5, parse_tree__prog_type_subst__Types_6);
    }
  }
}

static void MR_CALL 
parse_tree__prog_type_subst__apply_variable_renaming_to_type_3_p_0_4(
  MR_Box parse_tree__prog_type_subst__closure_arg,
  MR_Box parse_tree__prog_type_subst__wrapper_arg_1,
  MR_Box * parse_tree__prog_type_subst__wrapper_arg_2)
{
  {
    MR_Box parse_tree__prog_type_subst__closure = parse_tree__prog_type_subst__closure_arg;
    MR_Word parse_tree__prog_type_subst__conv4_Type_6;

    {
      parse_tree__prog_type_subst__apply_variable_renaming_to_type_3_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_type_subst__closure, (MR_Integer) 3))), ((MR_Word) parse_tree__prog_type_subst__wrapper_arg_1), &parse_tree__prog_type_subst__conv4_Type_6);
    }
    *parse_tree__prog_type_subst__wrapper_arg_2 = ((MR_Box) (parse_tree__prog_type_subst__conv4_Type_6));
  }
}

static void MR_CALL 
parse_tree__prog_type_subst__apply_variable_renaming_to_type_3_p_0_3(
  MR_Box parse_tree__prog_type_subst__closure_arg,
  MR_Box parse_tree__prog_type_subst__wrapper_arg_1,
  MR_Box * parse_tree__prog_type_subst__wrapper_arg_2)
{
  {
    MR_Box parse_tree__prog_type_subst__closure = parse_tree__prog_type_subst__closure_arg;
    MR_Word parse_tree__prog_type_subst__conv3_Type_6;

    {
      parse_tree__prog_type_subst__apply_variable_renaming_to_type_3_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_type_subst__closure, (MR_Integer) 3))), ((MR_Word) parse_tree__prog_type_subst__wrapper_arg_1), &parse_tree__prog_type_subst__conv3_Type_6);
    }
    *parse_tree__prog_type_subst__wrapper_arg_2 = ((MR_Box) (parse_tree__prog_type_subst__conv3_Type_6));
  }
}

static void MR_CALL 
parse_tree__prog_type_subst__apply_variable_renaming_to_type_3_p_0_2(
  MR_Box parse_tree__prog_type_subst__closure_arg,
  MR_Box parse_tree__prog_type_subst__wrapper_arg_1,
  MR_Box * parse_tree__prog_type_subst__wrapper_arg_2)
{
  {
    MR_Box parse_tree__prog_type_subst__closure = parse_tree__prog_type_subst__closure_arg;
    MR_Word parse_tree__prog_type_subst__conv2_Type_6;

    {
      parse_tree__prog_type_subst__apply_variable_renaming_to_type_3_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_type_subst__closure, (MR_Integer) 3))), ((MR_Word) parse_tree__prog_type_subst__wrapper_arg_1), &parse_tree__prog_type_subst__conv2_Type_6);
    }
    *parse_tree__prog_type_subst__wrapper_arg_2 = ((MR_Box) (parse_tree__prog_type_subst__conv2_Type_6));
  }
}

static void MR_CALL 
parse_tree__prog_type_subst__apply_variable_renaming_to_type_3_p_0_1(
  MR_Box parse_tree__prog_type_subst__closure_arg,
  MR_Box parse_tree__prog_type_subst__wrapper_arg_1,
  MR_Box * parse_tree__prog_type_subst__wrapper_arg_2)
{
  {
    MR_Box parse_tree__prog_type_subst__closure = parse_tree__prog_type_subst__closure_arg;
    MR_Word parse_tree__prog_type_subst__conv0_Type_6;

    {
      parse_tree__prog_type_subst__apply_variable_renaming_to_type_3_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_type_subst__closure, (MR_Integer) 3))), ((MR_Word) parse_tree__prog_type_subst__wrapper_arg_1), &parse_tree__prog_type_subst__conv0_Type_6);
    }
    *parse_tree__prog_type_subst__wrapper_arg_2 = ((MR_Box) (parse_tree__prog_type_subst__conv0_Type_6));
  }
}

void MR_CALL 
parse_tree__prog_type_subst__apply_variable_renaming_to_type_3_p_0(
  MR_Word parse_tree__prog_type_subst__Renaming_4,
  MR_Word parse_tree__prog_type_subst__Type0_5,
  MR_Word * parse_tree__prog_type_subst__Type_6)
{
  {
    MR_bool parse_tree__prog_type_subst__succeeded;

    switch (MR_tag((MR_Word) parse_tree__prog_type_subst__Type0_5)) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        {
          MR_Word parse_tree__prog_type_subst__TVar0_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_type_subst__Type0_5, (MR_Integer) 0)));
          MR_Word parse_tree__prog_type_subst__Kind_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_type_subst__Type0_5, (MR_Integer) 1)));
          MR_Word parse_tree__prog_type_subst__TVar_9;
          MR_Word parse_tree__prog_type_subst__TVar1_68;
          MR_Word parse_tree__prog_type_subst__TypeInfo_8_69 = (MR_Word) &parse_tree__prog_type_subst_scalar_common_1[0];
          MR_Box parse_tree__prog_type_subst__conv5_TVar1_68;

          {
            parse_tree__prog_type_subst__succeeded = mercury__map__search_3_p_0(parse_tree__prog_type_subst__TypeInfo_8_69, parse_tree__prog_type_subst__TypeInfo_8_69, parse_tree__prog_type_subst__Renaming_4, ((MR_Box) (parse_tree__prog_type_subst__TVar0_7)), &parse_tree__prog_type_subst__conv5_TVar1_68);
          }
          if (parse_tree__prog_type_subst__succeeded)
            {
              parse_tree__prog_type_subst__TVar1_68 = ((MR_Word) parse_tree__prog_type_subst__conv5_TVar1_68);
              parse_tree__prog_type_subst__succeeded = MR_TRUE;
            }
          if (parse_tree__prog_type_subst__succeeded)
            parse_tree__prog_type_subst__TVar_9 = parse_tree__prog_type_subst__TVar1_68;
          else
            parse_tree__prog_type_subst__TVar_9 = parse_tree__prog_type_subst__TVar0_7;
          {
            MR_Word base;
            base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
            *parse_tree__prog_type_subst__Type_6 = base;
            MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (parse_tree__prog_type_subst__TVar_9));
            MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (parse_tree__prog_type_subst__Kind_8));
          }
        }
        break;
      case (MR_Integer) 1:
        {
          MR_Word parse_tree__prog_type_subst__TypeCtorInfo_10_50;
          MR_Word parse_tree__prog_type_subst__Name_10 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_type_subst__Type0_5, (MR_Integer) 0)));
          MR_Word parse_tree__prog_type_subst__Args0_11 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_type_subst__Type0_5, (MR_Integer) 1)));
          MR_Word parse_tree__prog_type_subst__Args_12;
          MR_Word parse_tree__prog_type_subst__Kind_20 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_type_subst__Type0_5, (MR_Integer) 2)));
          MR_Word parse_tree__prog_type_subst__Var_47;

          {
            parse_tree__prog_type_subst__Var_47 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
            MR_hl_field(MR_mktag(0), parse_tree__prog_type_subst__Var_47, 0) = ((MR_Box) (&parse_tree__prog_type_subst_scalar_common_4[2]));
            MR_hl_field(MR_mktag(0), parse_tree__prog_type_subst__Var_47, 1) = ((MR_Box) (parse_tree__prog_type_subst__apply_variable_renaming_to_type_3_p_0_2));
            MR_hl_field(MR_mktag(0), parse_tree__prog_type_subst__Var_47, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
            MR_hl_field(MR_mktag(0), parse_tree__prog_type_subst__Var_47, 3) = ((MR_Box) (parse_tree__prog_type_subst__Renaming_4));
          }
          parse_tree__prog_type_subst__TypeCtorInfo_10_50 = (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0;
          {
            mercury__list__map_3_p_0(parse_tree__prog_type_subst__TypeCtorInfo_10_50, parse_tree__prog_type_subst__TypeCtorInfo_10_50, parse_tree__prog_type_subst__Var_47, parse_tree__prog_type_subst__Args0_11, &parse_tree__prog_type_subst__Args_12);
          }
          {
            MR_Word base;
            base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
            *parse_tree__prog_type_subst__Type_6 = base;
            MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (parse_tree__prog_type_subst__Name_10));
            MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (parse_tree__prog_type_subst__Args_12));
            MR_hl_field(MR_mktag(1), base, 2) = ((MR_Box) (parse_tree__prog_type_subst__Kind_20));
          }
        }
        break;
      case (MR_Integer) 2:
        *parse_tree__prog_type_subst__Type_6 = parse_tree__prog_type_subst__Type0_5;
        break;
      case (MR_Integer) 3:
        switch (((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__prog_type_subst__Type0_5, (MR_Integer) 0)))) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
            {
              MR_Word parse_tree__prog_type_subst__TypeCtorInfo_10_64;
              MR_Word parse_tree__prog_type_subst__Kind_23 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__prog_type_subst__Type0_5, (MR_Integer) 2)));
              MR_Word parse_tree__prog_type_subst__Args0_24 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__prog_type_subst__Type0_5, (MR_Integer) 1)));
              MR_Word parse_tree__prog_type_subst__Args_25;
              MR_Word parse_tree__prog_type_subst__Var_61;

              {
                parse_tree__prog_type_subst__Var_61 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
                MR_hl_field(MR_mktag(0), parse_tree__prog_type_subst__Var_61, 0) = ((MR_Box) (&parse_tree__prog_type_subst_scalar_common_4[2]));
                MR_hl_field(MR_mktag(0), parse_tree__prog_type_subst__Var_61, 1) = ((MR_Box) (parse_tree__prog_type_subst__apply_variable_renaming_to_type_3_p_0_4));
                MR_hl_field(MR_mktag(0), parse_tree__prog_type_subst__Var_61, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
                MR_hl_field(MR_mktag(0), parse_tree__prog_type_subst__Var_61, 3) = ((MR_Box) (parse_tree__prog_type_subst__Renaming_4));
              }
              parse_tree__prog_type_subst__TypeCtorInfo_10_64 = (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0;
              {
                mercury__list__map_3_p_0(parse_tree__prog_type_subst__TypeCtorInfo_10_64, parse_tree__prog_type_subst__TypeCtorInfo_10_64, parse_tree__prog_type_subst__Var_61, parse_tree__prog_type_subst__Args0_24, &parse_tree__prog_type_subst__Args_25);
              }
              {
                MR_Word base;
                base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
                *parse_tree__prog_type_subst__Type_6 = base;
                MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 0));
                MR_hl_field(MR_mktag(3), base, 1) = ((MR_Box) (parse_tree__prog_type_subst__Args_25));
                MR_hl_field(MR_mktag(3), base, 2) = ((MR_Box) (parse_tree__prog_type_subst__Kind_23));
              }
            }
            break;
          case (MR_Integer) 1:
            {
              MR_Word parse_tree__prog_type_subst__TypeCtorInfo_10_57;
              MR_Word parse_tree__prog_type_subst__PorF_14 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__prog_type_subst__Type0_5, (MR_Integer) 1)));
              MR_Word parse_tree__prog_type_subst__HOInstInfo_15 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__prog_type_subst__Type0_5, (MR_Integer) 3)));
              MR_Word parse_tree__prog_type_subst__Purity_16 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__prog_type_subst__Type0_5, (MR_Integer) 4)));
              MR_Word parse_tree__prog_type_subst__Args0_21 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__prog_type_subst__Type0_5, (MR_Integer) 2)));
              MR_Word parse_tree__prog_type_subst__Args_22;
              MR_Word parse_tree__prog_type_subst__Var_54;

              {
                parse_tree__prog_type_subst__Var_54 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
                MR_hl_field(MR_mktag(0), parse_tree__prog_type_subst__Var_54, 0) = ((MR_Box) (&parse_tree__prog_type_subst_scalar_common_4[2]));
                MR_hl_field(MR_mktag(0), parse_tree__prog_type_subst__Var_54, 1) = ((MR_Box) (parse_tree__prog_type_subst__apply_variable_renaming_to_type_3_p_0_3));
                MR_hl_field(MR_mktag(0), parse_tree__prog_type_subst__Var_54, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
                MR_hl_field(MR_mktag(0), parse_tree__prog_type_subst__Var_54, 3) = ((MR_Box) (parse_tree__prog_type_subst__Renaming_4));
              }
              parse_tree__prog_type_subst__TypeCtorInfo_10_57 = (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0;
              {
                mercury__list__map_3_p_0(parse_tree__prog_type_subst__TypeCtorInfo_10_57, parse_tree__prog_type_subst__TypeCtorInfo_10_57, parse_tree__prog_type_subst__Var_54, parse_tree__prog_type_subst__Args0_21, &parse_tree__prog_type_subst__Args_22);
              }
              {
                MR_Word base;
                base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 6 * sizeof(MR_Word)), NULL, NULL));
                *parse_tree__prog_type_subst__Type_6 = base;
                MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
                MR_hl_field(MR_mktag(3), base, 1) = ((MR_Box) (parse_tree__prog_type_subst__PorF_14));
                MR_hl_field(MR_mktag(3), base, 2) = ((MR_Box) (parse_tree__prog_type_subst__Args_22));
                MR_hl_field(MR_mktag(3), base, 3) = ((MR_Box) (parse_tree__prog_type_subst__HOInstInfo_15));
                MR_hl_field(MR_mktag(3), base, 4) = ((MR_Box) (parse_tree__prog_type_subst__Purity_16));
                MR_hl_field(MR_mktag(3), base, 5) = NULL;
              }
            }
            break;
          case (MR_Integer) 2:
            {
              MR_Word parse_tree__prog_type_subst__TypeCtorInfo_10_38;
              MR_Word parse_tree__prog_type_subst__TVar0_26 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__prog_type_subst__Type0_5, (MR_Integer) 1)));
              MR_Word parse_tree__prog_type_subst__Kind_27 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__prog_type_subst__Type0_5, (MR_Integer) 3)));
              MR_Word parse_tree__prog_type_subst__TVar_28;
              MR_Word parse_tree__prog_type_subst__Args0_29 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__prog_type_subst__Type0_5, (MR_Integer) 2)));
              MR_Word parse_tree__prog_type_subst__Args_30;
              MR_Word parse_tree__prog_type_subst__Var_35;
              MR_Word parse_tree__prog_type_subst__TVar1_42;
              MR_Word parse_tree__prog_type_subst__TypeInfo_8_43;
              MR_Box parse_tree__prog_type_subst__conv1_TVar1_42;

              {
                parse_tree__prog_type_subst__Var_35 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
                MR_hl_field(MR_mktag(0), parse_tree__prog_type_subst__Var_35, 0) = ((MR_Box) (&parse_tree__prog_type_subst_scalar_common_4[2]));
                MR_hl_field(MR_mktag(0), parse_tree__prog_type_subst__Var_35, 1) = ((MR_Box) (parse_tree__prog_type_subst__apply_variable_renaming_to_type_3_p_0_1));
                MR_hl_field(MR_mktag(0), parse_tree__prog_type_subst__Var_35, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
                MR_hl_field(MR_mktag(0), parse_tree__prog_type_subst__Var_35, 3) = ((MR_Box) (parse_tree__prog_type_subst__Renaming_4));
              }
              parse_tree__prog_type_subst__TypeCtorInfo_10_38 = (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0;
              {
                mercury__list__map_3_p_0(parse_tree__prog_type_subst__TypeCtorInfo_10_38, parse_tree__prog_type_subst__TypeCtorInfo_10_38, parse_tree__prog_type_subst__Var_35, parse_tree__prog_type_subst__Args0_29, &parse_tree__prog_type_subst__Args_30);
              }
              parse_tree__prog_type_subst__TypeInfo_8_43 = (MR_Word) &parse_tree__prog_type_subst_scalar_common_1[0];
              {
                parse_tree__prog_type_subst__succeeded = mercury__map__search_3_p_0(parse_tree__prog_type_subst__TypeInfo_8_43, parse_tree__prog_type_subst__TypeInfo_8_43, parse_tree__prog_type_subst__Renaming_4, ((MR_Box) (parse_tree__prog_type_subst__TVar0_26)), &parse_tree__prog_type_subst__conv1_TVar1_42);
              }
              if (parse_tree__prog_type_subst__succeeded)
                {
                  parse_tree__prog_type_subst__TVar1_42 = ((MR_Word) parse_tree__prog_type_subst__conv1_TVar1_42);
                  parse_tree__prog_type_subst__succeeded = MR_TRUE;
                }
              if (parse_tree__prog_type_subst__succeeded)
                parse_tree__prog_type_subst__TVar_28 = parse_tree__prog_type_subst__TVar1_42;
              else
                parse_tree__prog_type_subst__TVar_28 = parse_tree__prog_type_subst__TVar0_26;
              {
                MR_Word base;
                base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL));
                *parse_tree__prog_type_subst__Type_6 = base;
                MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
                MR_hl_field(MR_mktag(3), base, 1) = ((MR_Box) (parse_tree__prog_type_subst__TVar_28));
                MR_hl_field(MR_mktag(3), base, 2) = ((MR_Box) (parse_tree__prog_type_subst__Args_30));
                MR_hl_field(MR_mktag(3), base, 3) = ((MR_Box) (parse_tree__prog_type_subst__Kind_27));
              }
            }
            break;
          case (MR_Integer) 3:
            {
              MR_Word parse_tree__prog_type_subst__BaseType0_18 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__prog_type_subst__Type0_5, (MR_Integer) 1)));
              MR_Word parse_tree__prog_type_subst__BaseType_19;
              MR_Word parse_tree__prog_type_subst__Kind_31 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__prog_type_subst__Type0_5, (MR_Integer) 2)));

              {
                parse_tree__prog_type_subst__apply_variable_renaming_to_type_3_p_0(parse_tree__prog_type_subst__Renaming_4, parse_tree__prog_type_subst__BaseType0_18, &parse_tree__prog_type_subst__BaseType_19);
              }
              {
                MR_Word base;
                base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
                *parse_tree__prog_type_subst__Type_6 = base;
                MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 3));
                MR_hl_field(MR_mktag(3), base, 1) = ((MR_Box) (parse_tree__prog_type_subst__BaseType_19));
                MR_hl_field(MR_mktag(3), base, 2) = ((MR_Box) (parse_tree__prog_type_subst__Kind_31));
              }
            }
            break;
        }
        break;
    }
  }
}

static void MR_CALL 
parse_tree__prog_type_subst__apply_rec_subst_to_tvar_list_4_p_0_1(
  MR_Box parse_tree__prog_type_subst__closure_arg,
  MR_Box parse_tree__prog_type_subst__wrapper_arg_1,
  MR_Box * parse_tree__prog_type_subst__wrapper_arg_2)
{
  {
    MR_Box parse_tree__prog_type_subst__closure = parse_tree__prog_type_subst__closure_arg;
    MR_Word parse_tree__prog_type_subst__conv0_Type_8;

    {
      parse_tree__prog_type_subst__apply_rec_subst_to_tvar_4_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_type_subst__closure, (MR_Integer) 3))), ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_type_subst__closure, (MR_Integer) 4))), ((MR_Word) parse_tree__prog_type_subst__wrapper_arg_1), &parse_tree__prog_type_subst__conv0_Type_8);
    }
    *parse_tree__prog_type_subst__wrapper_arg_2 = ((MR_Box) (parse_tree__prog_type_subst__conv0_Type_8));
  }
}

void MR_CALL 
parse_tree__prog_type_subst__apply_rec_subst_to_tvar_list_4_p_0(
  MR_Word parse_tree__prog_type_subst__KindMap_5,
  MR_Word parse_tree__prog_type_subst__Subst_6,
  MR_Word parse_tree__prog_type_subst__TVars_7,
  MR_Word * parse_tree__prog_type_subst__Types_8)
{
  {
    MR_bool parse_tree__prog_type_subst__succeeded;
    MR_Word parse_tree__prog_type_subst__Var_9;

    {
      parse_tree__prog_type_subst__Var_9 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), parse_tree__prog_type_subst__Var_9, 0) = ((MR_Box) (&parse_tree__prog_type_subst_scalar_common_5[0]));
      MR_hl_field(MR_mktag(0), parse_tree__prog_type_subst__Var_9, 1) = ((MR_Box) (parse_tree__prog_type_subst__apply_rec_subst_to_tvar_list_4_p_0_1));
      MR_hl_field(MR_mktag(0), parse_tree__prog_type_subst__Var_9, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
      MR_hl_field(MR_mktag(0), parse_tree__prog_type_subst__Var_9, 3) = ((MR_Box) (parse_tree__prog_type_subst__KindMap_5));
      MR_hl_field(MR_mktag(0), parse_tree__prog_type_subst__Var_9, 4) = ((MR_Box) (parse_tree__prog_type_subst__Subst_6));
    }
    {
      mercury__list__map_3_p_0((MR_Word) &parse_tree__prog_type_subst_scalar_common_1[0], (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0, parse_tree__prog_type_subst__Var_9, parse_tree__prog_type_subst__TVars_7, parse_tree__prog_type_subst__Types_8);
    }
  }
}

static void MR_CALL 
parse_tree__prog_type_subst__apply_subst_to_tvar_list_4_p_0_1(
  MR_Box parse_tree__prog_type_subst__closure_arg,
  MR_Box parse_tree__prog_type_subst__wrapper_arg_1,
  MR_Box * parse_tree__prog_type_subst__wrapper_arg_2)
{
  {
    MR_Box parse_tree__prog_type_subst__closure = parse_tree__prog_type_subst__closure_arg;
    MR_Word parse_tree__prog_type_subst__conv0_Type_8;

    {
      parse_tree__prog_type_subst__apply_subst_to_tvar_4_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_type_subst__closure, (MR_Integer) 3))), ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_type_subst__closure, (MR_Integer) 4))), ((MR_Word) parse_tree__prog_type_subst__wrapper_arg_1), &parse_tree__prog_type_subst__conv0_Type_8);
    }
    *parse_tree__prog_type_subst__wrapper_arg_2 = ((MR_Box) (parse_tree__prog_type_subst__conv0_Type_8));
  }
}

void MR_CALL 
parse_tree__prog_type_subst__apply_subst_to_tvar_list_4_p_0(
  MR_Word parse_tree__prog_type_subst__KindMap_5,
  MR_Word parse_tree__prog_type_subst__Subst_6,
  MR_Word parse_tree__prog_type_subst__TVars_7,
  MR_Word * parse_tree__prog_type_subst__Types_8)
{
  {
    MR_bool parse_tree__prog_type_subst__succeeded;
    MR_Word parse_tree__prog_type_subst__Var_9;

    {
      parse_tree__prog_type_subst__Var_9 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), parse_tree__prog_type_subst__Var_9, 0) = ((MR_Box) (&parse_tree__prog_type_subst_scalar_common_5[0]));
      MR_hl_field(MR_mktag(0), parse_tree__prog_type_subst__Var_9, 1) = ((MR_Box) (parse_tree__prog_type_subst__apply_subst_to_tvar_list_4_p_0_1));
      MR_hl_field(MR_mktag(0), parse_tree__prog_type_subst__Var_9, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
      MR_hl_field(MR_mktag(0), parse_tree__prog_type_subst__Var_9, 3) = ((MR_Box) (parse_tree__prog_type_subst__KindMap_5));
      MR_hl_field(MR_mktag(0), parse_tree__prog_type_subst__Var_9, 4) = ((MR_Box) (parse_tree__prog_type_subst__Subst_6));
    }
    {
      mercury__list__map_3_p_0((MR_Word) &parse_tree__prog_type_subst_scalar_common_1[0], (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0, parse_tree__prog_type_subst__Var_9, parse_tree__prog_type_subst__TVars_7, parse_tree__prog_type_subst__Types_8);
    }
  }
}

static void MR_CALL 
parse_tree__prog_type_subst__apply_variable_renaming_to_tvar_list_3_p_0_1(
  MR_Box parse_tree__prog_type_subst__closure_arg,
  MR_Box parse_tree__prog_type_subst__wrapper_arg_1,
  MR_Box * parse_tree__prog_type_subst__wrapper_arg_2)
{
  {
    MR_Box parse_tree__prog_type_subst__closure = parse_tree__prog_type_subst__closure_arg;
    MR_Word parse_tree__prog_type_subst__conv0_TVar_6;

    {
      parse_tree__prog_type_subst__apply_variable_renaming_to_tvar_3_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_type_subst__closure, (MR_Integer) 3))), ((MR_Word) parse_tree__prog_type_subst__wrapper_arg_1), &parse_tree__prog_type_subst__conv0_TVar_6);
    }
    *parse_tree__prog_type_subst__wrapper_arg_2 = ((MR_Box) (parse_tree__prog_type_subst__conv0_TVar_6));
  }
}

void MR_CALL 
parse_tree__prog_type_subst__apply_variable_renaming_to_tvar_list_3_p_0(
  MR_Word parse_tree__prog_type_subst__Renaming_4,
  MR_Word parse_tree__prog_type_subst__TVars0_5,
  MR_Word * parse_tree__prog_type_subst__TVars_6)
{
  {
    MR_bool parse_tree__prog_type_subst__succeeded;
    MR_Word parse_tree__prog_type_subst__TypeInfo_10_10;
    MR_Word parse_tree__prog_type_subst__Var_7;

    {
      parse_tree__prog_type_subst__Var_7 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), parse_tree__prog_type_subst__Var_7, 0) = ((MR_Box) (&parse_tree__prog_type_subst_scalar_common_4[1]));
      MR_hl_field(MR_mktag(0), parse_tree__prog_type_subst__Var_7, 1) = ((MR_Box) (parse_tree__prog_type_subst__apply_variable_renaming_to_tvar_list_3_p_0_1));
      MR_hl_field(MR_mktag(0), parse_tree__prog_type_subst__Var_7, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
      MR_hl_field(MR_mktag(0), parse_tree__prog_type_subst__Var_7, 3) = ((MR_Box) (parse_tree__prog_type_subst__Renaming_4));
    }
    parse_tree__prog_type_subst__TypeInfo_10_10 = (MR_Word) &parse_tree__prog_type_subst_scalar_common_1[0];
    {
      mercury__list__map_3_p_0(parse_tree__prog_type_subst__TypeInfo_10_10, parse_tree__prog_type_subst__TypeInfo_10_10, parse_tree__prog_type_subst__Var_7, parse_tree__prog_type_subst__TVars0_5, parse_tree__prog_type_subst__TVars_6);
    }
  }
}

void MR_CALL 
parse_tree__prog_type_subst__apply_rec_subst_to_tvar_4_p_0(
  MR_Word parse_tree__prog_type_subst__KindMap_5,
  MR_Word parse_tree__prog_type_subst__Subst_6,
  MR_Word parse_tree__prog_type_subst__TVar_7,
  MR_Word * parse_tree__prog_type_subst__Type_8)
{
  {
    MR_bool parse_tree__prog_type_subst__succeeded;
    MR_Word parse_tree__prog_type_subst__Type0_9;
    MR_Box parse_tree__prog_type_subst__conv0_Type0_9;

    {
      parse_tree__prog_type_subst__succeeded = mercury__map__search_3_p_0((MR_Word) &parse_tree__prog_type_subst_scalar_common_1[0], (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0, parse_tree__prog_type_subst__Subst_6, ((MR_Box) (parse_tree__prog_type_subst__TVar_7)), &parse_tree__prog_type_subst__conv0_Type0_9);
    }
    if (parse_tree__prog_type_subst__succeeded)
      {
        parse_tree__prog_type_subst__Type0_9 = ((MR_Word) parse_tree__prog_type_subst__conv0_Type0_9);
        parse_tree__prog_type_subst__succeeded = MR_TRUE;
      }
    if (parse_tree__prog_type_subst__succeeded)
      {
        parse_tree__prog_type_subst__apply_rec_subst_to_type_3_p_0(parse_tree__prog_type_subst__Subst_6, parse_tree__prog_type_subst__Type0_9, parse_tree__prog_type_subst__Type_8);
      }
    else
      {
        MR_Word parse_tree__prog_type_subst__Kind_10;

        {
          parse_tree__prog_data__get_tvar_kind_3_p_0(parse_tree__prog_type_subst__KindMap_5, parse_tree__prog_type_subst__TVar_7, &parse_tree__prog_type_subst__Kind_10);
        }
        {
          MR_Word base;
          base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
          *parse_tree__prog_type_subst__Type_8 = base;
          MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (parse_tree__prog_type_subst__TVar_7));
          MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (parse_tree__prog_type_subst__Kind_10));
        }
      }
  }
}

static void MR_CALL 
parse_tree__prog_type_subst__apply_rec_subst_to_type_3_p_0_4(
  MR_Box parse_tree__prog_type_subst__closure_arg,
  MR_Box parse_tree__prog_type_subst__wrapper_arg_1,
  MR_Box * parse_tree__prog_type_subst__wrapper_arg_2)
{
  {
    MR_Box parse_tree__prog_type_subst__closure = parse_tree__prog_type_subst__closure_arg;
    MR_Word parse_tree__prog_type_subst__conv4_Type_6;

    {
      parse_tree__prog_type_subst__apply_rec_subst_to_type_3_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_type_subst__closure, (MR_Integer) 3))), ((MR_Word) parse_tree__prog_type_subst__wrapper_arg_1), &parse_tree__prog_type_subst__conv4_Type_6);
    }
    *parse_tree__prog_type_subst__wrapper_arg_2 = ((MR_Box) (parse_tree__prog_type_subst__conv4_Type_6));
  }
}

static void MR_CALL 
parse_tree__prog_type_subst__apply_rec_subst_to_type_3_p_0_3(
  MR_Box parse_tree__prog_type_subst__closure_arg,
  MR_Box parse_tree__prog_type_subst__wrapper_arg_1,
  MR_Box * parse_tree__prog_type_subst__wrapper_arg_2)
{
  {
    MR_Box parse_tree__prog_type_subst__closure = parse_tree__prog_type_subst__closure_arg;
    MR_Word parse_tree__prog_type_subst__conv3_Type_6;

    {
      parse_tree__prog_type_subst__apply_rec_subst_to_type_3_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_type_subst__closure, (MR_Integer) 3))), ((MR_Word) parse_tree__prog_type_subst__wrapper_arg_1), &parse_tree__prog_type_subst__conv3_Type_6);
    }
    *parse_tree__prog_type_subst__wrapper_arg_2 = ((MR_Box) (parse_tree__prog_type_subst__conv3_Type_6));
  }
}

static void MR_CALL 
parse_tree__prog_type_subst__apply_rec_subst_to_type_3_p_0_2(
  MR_Box parse_tree__prog_type_subst__closure_arg,
  MR_Box parse_tree__prog_type_subst__wrapper_arg_1,
  MR_Box * parse_tree__prog_type_subst__wrapper_arg_2)
{
  {
    MR_Box parse_tree__prog_type_subst__closure = parse_tree__prog_type_subst__closure_arg;
    MR_Word parse_tree__prog_type_subst__conv2_Type_6;

    {
      parse_tree__prog_type_subst__apply_rec_subst_to_type_3_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_type_subst__closure, (MR_Integer) 3))), ((MR_Word) parse_tree__prog_type_subst__wrapper_arg_1), &parse_tree__prog_type_subst__conv2_Type_6);
    }
    *parse_tree__prog_type_subst__wrapper_arg_2 = ((MR_Box) (parse_tree__prog_type_subst__conv2_Type_6));
  }
}

static void MR_CALL 
parse_tree__prog_type_subst__apply_rec_subst_to_type_3_p_0_1(
  MR_Box parse_tree__prog_type_subst__closure_arg,
  MR_Box parse_tree__prog_type_subst__wrapper_arg_1,
  MR_Box * parse_tree__prog_type_subst__wrapper_arg_2)
{
  {
    MR_Box parse_tree__prog_type_subst__closure = parse_tree__prog_type_subst__closure_arg;
    MR_Word parse_tree__prog_type_subst__conv0_Type_6;

    {
      parse_tree__prog_type_subst__apply_rec_subst_to_type_3_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_type_subst__closure, (MR_Integer) 3))), ((MR_Word) parse_tree__prog_type_subst__wrapper_arg_1), &parse_tree__prog_type_subst__conv0_Type_6);
    }
    *parse_tree__prog_type_subst__wrapper_arg_2 = ((MR_Box) (parse_tree__prog_type_subst__conv0_Type_6));
  }
}

void MR_CALL 
parse_tree__prog_type_subst__apply_rec_subst_to_type_3_p_0(
  MR_Word parse_tree__prog_type_subst__Subst_4,
  MR_Word parse_tree__prog_type_subst__Type0_5,
  MR_Word * parse_tree__prog_type_subst__Type_6)
{
  while (MR_TRUE)
    {
      /* tailcall optimized into a loop */
      {
        MR_bool parse_tree__prog_type_subst__succeeded;

        switch (MR_tag((MR_Word) parse_tree__prog_type_subst__Type0_5)) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
            {
              MR_Word parse_tree__prog_type_subst__TVar_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_type_subst__Type0_5, (MR_Integer) 0)));
              MR_Word parse_tree__prog_type_subst__Kind_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_type_subst__Type0_5, (MR_Integer) 1)));
              MR_Word parse_tree__prog_type_subst__Type1_9;
              MR_Box parse_tree__prog_type_subst__conv5_Type1_9;

              {
                parse_tree__prog_type_subst__succeeded = mercury__map__search_3_p_0((MR_Word) &parse_tree__prog_type_subst_scalar_common_1[0], (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0, parse_tree__prog_type_subst__Subst_4, ((MR_Box) (parse_tree__prog_type_subst__TVar_7)), &parse_tree__prog_type_subst__conv5_Type1_9);
              }
              if (parse_tree__prog_type_subst__succeeded)
                {
                  parse_tree__prog_type_subst__Type1_9 = ((MR_Word) parse_tree__prog_type_subst__conv5_Type1_9);
                  parse_tree__prog_type_subst__succeeded = MR_TRUE;
                }
              if (parse_tree__prog_type_subst__succeeded)
                {
                  MR_Word parse_tree__prog_type_subst__Type2_10;
                  MR_Word parse_tree__prog_type_subst__Var_72;

                  {
                    parse_tree__prog_type_subst__Var_72 = parse_tree__prog_data__get_type_kind_1_f_0(parse_tree__prog_type_subst__Type1_9);
                  }
                  {
                    parse_tree__prog_type_subst__succeeded = parse_tree__prog_data____Unify____kind_0_0(parse_tree__prog_type_subst__Kind_8, parse_tree__prog_type_subst__Var_72);
                  }
                  if (parse_tree__prog_type_subst__succeeded)
                    parse_tree__prog_type_subst__Type2_10 = parse_tree__prog_type_subst__Type1_9;
                  else
                    {
                      {
                        mercury__require__unexpected_3_p_0((MR_String) "parse_tree.prog_type_subst", (MR_String) "predicate \140parse_tree.prog_type_subst.ensure_type_has_kind\'/3", (MR_String) "substitution not kind preserving");
                        return;
                      }
                    }
                  /* direct tailcall eliminated */
                  {
                    MR_Word parse_tree__prog_type_subst__next_value_of_Type0_5 = parse_tree__prog_type_subst__Type2_10;

                    parse_tree__prog_type_subst__Type0_5 = parse_tree__prog_type_subst__next_value_of_Type0_5;
                  }
                  continue;
                }
              else
                *parse_tree__prog_type_subst__Type_6 = parse_tree__prog_type_subst__Type0_5;
            }
            break;
          case (MR_Integer) 1:
            {
              MR_Word parse_tree__prog_type_subst__TypeCtorInfo_10_51;
              MR_Word parse_tree__prog_type_subst__Name_11 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_type_subst__Type0_5, (MR_Integer) 0)));
              MR_Word parse_tree__prog_type_subst__Args0_12 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_type_subst__Type0_5, (MR_Integer) 1)));
              MR_Word parse_tree__prog_type_subst__Args_13;
              MR_Word parse_tree__prog_type_subst__Kind_23 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_type_subst__Type0_5, (MR_Integer) 2)));
              MR_Word parse_tree__prog_type_subst__Var_48;

              {
                parse_tree__prog_type_subst__Var_48 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
                MR_hl_field(MR_mktag(0), parse_tree__prog_type_subst__Var_48, 0) = ((MR_Box) (&parse_tree__prog_type_subst_scalar_common_4[0]));
                MR_hl_field(MR_mktag(0), parse_tree__prog_type_subst__Var_48, 1) = ((MR_Box) (parse_tree__prog_type_subst__apply_rec_subst_to_type_3_p_0_2));
                MR_hl_field(MR_mktag(0), parse_tree__prog_type_subst__Var_48, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
                MR_hl_field(MR_mktag(0), parse_tree__prog_type_subst__Var_48, 3) = ((MR_Box) (parse_tree__prog_type_subst__Subst_4));
              }
              parse_tree__prog_type_subst__TypeCtorInfo_10_51 = (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0;
              {
                mercury__list__map_3_p_0(parse_tree__prog_type_subst__TypeCtorInfo_10_51, parse_tree__prog_type_subst__TypeCtorInfo_10_51, parse_tree__prog_type_subst__Var_48, parse_tree__prog_type_subst__Args0_12, &parse_tree__prog_type_subst__Args_13);
              }
              {
                MR_Word base;
                base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
                *parse_tree__prog_type_subst__Type_6 = base;
                MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (parse_tree__prog_type_subst__Name_11));
                MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (parse_tree__prog_type_subst__Args_13));
                MR_hl_field(MR_mktag(1), base, 2) = ((MR_Box) (parse_tree__prog_type_subst__Kind_23));
              }
            }
            break;
          case (MR_Integer) 2:
            *parse_tree__prog_type_subst__Type_6 = parse_tree__prog_type_subst__Type0_5;
            break;
          case (MR_Integer) 3:
            switch (((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__prog_type_subst__Type0_5, (MR_Integer) 0)))) {
              default: /*NOTREACHED*/ MR_assert(0);
              case (MR_Integer) 0:
                {
                  MR_Word parse_tree__prog_type_subst__TypeCtorInfo_10_65;
                  MR_Word parse_tree__prog_type_subst__Kind_26 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__prog_type_subst__Type0_5, (MR_Integer) 2)));
                  MR_Word parse_tree__prog_type_subst__Args0_27 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__prog_type_subst__Type0_5, (MR_Integer) 1)));
                  MR_Word parse_tree__prog_type_subst__Args_28;
                  MR_Word parse_tree__prog_type_subst__Var_62;

                  {
                    parse_tree__prog_type_subst__Var_62 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
                    MR_hl_field(MR_mktag(0), parse_tree__prog_type_subst__Var_62, 0) = ((MR_Box) (&parse_tree__prog_type_subst_scalar_common_4[0]));
                    MR_hl_field(MR_mktag(0), parse_tree__prog_type_subst__Var_62, 1) = ((MR_Box) (parse_tree__prog_type_subst__apply_rec_subst_to_type_3_p_0_4));
                    MR_hl_field(MR_mktag(0), parse_tree__prog_type_subst__Var_62, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
                    MR_hl_field(MR_mktag(0), parse_tree__prog_type_subst__Var_62, 3) = ((MR_Box) (parse_tree__prog_type_subst__Subst_4));
                  }
                  parse_tree__prog_type_subst__TypeCtorInfo_10_65 = (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0;
                  {
                    mercury__list__map_3_p_0(parse_tree__prog_type_subst__TypeCtorInfo_10_65, parse_tree__prog_type_subst__TypeCtorInfo_10_65, parse_tree__prog_type_subst__Var_62, parse_tree__prog_type_subst__Args0_27, &parse_tree__prog_type_subst__Args_28);
                  }
                  {
                    MR_Word base;
                    base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
                    *parse_tree__prog_type_subst__Type_6 = base;
                    MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 0));
                    MR_hl_field(MR_mktag(3), base, 1) = ((MR_Box) (parse_tree__prog_type_subst__Args_28));
                    MR_hl_field(MR_mktag(3), base, 2) = ((MR_Box) (parse_tree__prog_type_subst__Kind_26));
                  }
                }
                break;
              case (MR_Integer) 1:
                {
                  MR_Word parse_tree__prog_type_subst__TypeCtorInfo_10_58;
                  MR_Word parse_tree__prog_type_subst__PorF_15 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__prog_type_subst__Type0_5, (MR_Integer) 1)));
                  MR_Word parse_tree__prog_type_subst__HOInstInfo_16 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__prog_type_subst__Type0_5, (MR_Integer) 3)));
                  MR_Word parse_tree__prog_type_subst__Purity_17 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__prog_type_subst__Type0_5, (MR_Integer) 4)));
                  MR_Word parse_tree__prog_type_subst__Args0_24 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__prog_type_subst__Type0_5, (MR_Integer) 2)));
                  MR_Word parse_tree__prog_type_subst__Args_25;
                  MR_Word parse_tree__prog_type_subst__Var_55;

                  {
                    parse_tree__prog_type_subst__Var_55 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
                    MR_hl_field(MR_mktag(0), parse_tree__prog_type_subst__Var_55, 0) = ((MR_Box) (&parse_tree__prog_type_subst_scalar_common_4[0]));
                    MR_hl_field(MR_mktag(0), parse_tree__prog_type_subst__Var_55, 1) = ((MR_Box) (parse_tree__prog_type_subst__apply_rec_subst_to_type_3_p_0_3));
                    MR_hl_field(MR_mktag(0), parse_tree__prog_type_subst__Var_55, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
                    MR_hl_field(MR_mktag(0), parse_tree__prog_type_subst__Var_55, 3) = ((MR_Box) (parse_tree__prog_type_subst__Subst_4));
                  }
                  parse_tree__prog_type_subst__TypeCtorInfo_10_58 = (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0;
                  {
                    mercury__list__map_3_p_0(parse_tree__prog_type_subst__TypeCtorInfo_10_58, parse_tree__prog_type_subst__TypeCtorInfo_10_58, parse_tree__prog_type_subst__Var_55, parse_tree__prog_type_subst__Args0_24, &parse_tree__prog_type_subst__Args_25);
                  }
                  {
                    MR_Word base;
                    base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 6 * sizeof(MR_Word)), NULL, NULL));
                    *parse_tree__prog_type_subst__Type_6 = base;
                    MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
                    MR_hl_field(MR_mktag(3), base, 1) = ((MR_Box) (parse_tree__prog_type_subst__PorF_15));
                    MR_hl_field(MR_mktag(3), base, 2) = ((MR_Box) (parse_tree__prog_type_subst__Args_25));
                    MR_hl_field(MR_mktag(3), base, 3) = ((MR_Box) (parse_tree__prog_type_subst__HOInstInfo_16));
                    MR_hl_field(MR_mktag(3), base, 4) = ((MR_Box) (parse_tree__prog_type_subst__Purity_17));
                    MR_hl_field(MR_mktag(3), base, 5) = NULL;
                  }
                }
                break;
              case (MR_Integer) 2:
                {
                  MR_Word parse_tree__prog_type_subst__TypeCtorInfo_10_44;
                  MR_Word parse_tree__prog_type_subst__TVar_29 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__prog_type_subst__Type0_5, (MR_Integer) 1)));
                  MR_Word parse_tree__prog_type_subst__Kind_30 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__prog_type_subst__Type0_5, (MR_Integer) 3)));
                  MR_Word parse_tree__prog_type_subst__Args0_31 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__prog_type_subst__Type0_5, (MR_Integer) 2)));
                  MR_Word parse_tree__prog_type_subst__Args_32;
                  MR_Word parse_tree__prog_type_subst__Var_41;
                  MR_Word parse_tree__prog_type_subst__AppliedType0_19;
                  MR_Box parse_tree__prog_type_subst__conv1_AppliedType0_19;

                  {
                    parse_tree__prog_type_subst__Var_41 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
                    MR_hl_field(MR_mktag(0), parse_tree__prog_type_subst__Var_41, 0) = ((MR_Box) (&parse_tree__prog_type_subst_scalar_common_4[0]));
                    MR_hl_field(MR_mktag(0), parse_tree__prog_type_subst__Var_41, 1) = ((MR_Box) (parse_tree__prog_type_subst__apply_rec_subst_to_type_3_p_0_1));
                    MR_hl_field(MR_mktag(0), parse_tree__prog_type_subst__Var_41, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
                    MR_hl_field(MR_mktag(0), parse_tree__prog_type_subst__Var_41, 3) = ((MR_Box) (parse_tree__prog_type_subst__Subst_4));
                  }
                  parse_tree__prog_type_subst__TypeCtorInfo_10_44 = (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0;
                  {
                    mercury__list__map_3_p_0(parse_tree__prog_type_subst__TypeCtorInfo_10_44, parse_tree__prog_type_subst__TypeCtorInfo_10_44, parse_tree__prog_type_subst__Var_41, parse_tree__prog_type_subst__Args0_31, &parse_tree__prog_type_subst__Args_32);
                  }
                  {
                    parse_tree__prog_type_subst__succeeded = mercury__map__search_3_p_0((MR_Word) &parse_tree__prog_type_subst_scalar_common_1[0], (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0, parse_tree__prog_type_subst__Subst_4, ((MR_Box) (parse_tree__prog_type_subst__TVar_29)), &parse_tree__prog_type_subst__conv1_AppliedType0_19);
                  }
                  if (parse_tree__prog_type_subst__succeeded)
                    {
                      parse_tree__prog_type_subst__AppliedType0_19 = ((MR_Word) parse_tree__prog_type_subst__conv1_AppliedType0_19);
                      parse_tree__prog_type_subst__succeeded = MR_TRUE;
                    }
                  if (parse_tree__prog_type_subst__succeeded)
                    {
                      MR_Word parse_tree__prog_type_subst__AppliedType_20;

                      {
                        parse_tree__prog_type_subst__apply_rec_subst_to_type_3_p_0(parse_tree__prog_type_subst__Subst_4, parse_tree__prog_type_subst__AppliedType0_19, &parse_tree__prog_type_subst__AppliedType_20);
                      }
                      {
                        parse_tree__prog_type_subst__apply_type_args_3_p_0(parse_tree__prog_type_subst__AppliedType_20, parse_tree__prog_type_subst__Args_32, parse_tree__prog_type_subst__Type_6);
                      }
                    }
                  else
                    {
                      MR_Word base;
                      base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL));
                      *parse_tree__prog_type_subst__Type_6 = base;
                      MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
                      MR_hl_field(MR_mktag(3), base, 1) = ((MR_Box) (parse_tree__prog_type_subst__TVar_29));
                      MR_hl_field(MR_mktag(3), base, 2) = ((MR_Box) (parse_tree__prog_type_subst__Args_32));
                      MR_hl_field(MR_mktag(3), base, 3) = ((MR_Box) (parse_tree__prog_type_subst__Kind_30));
                    }
                }
                break;
              case (MR_Integer) 3:
                {
                  MR_Word parse_tree__prog_type_subst__BaseType0_21 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__prog_type_subst__Type0_5, (MR_Integer) 1)));
                  MR_Word parse_tree__prog_type_subst__BaseType_22;
                  MR_Word parse_tree__prog_type_subst__Kind_33 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__prog_type_subst__Type0_5, (MR_Integer) 2)));

                  {
                    parse_tree__prog_type_subst__apply_rec_subst_to_type_3_p_0(parse_tree__prog_type_subst__Subst_4, parse_tree__prog_type_subst__BaseType0_21, &parse_tree__prog_type_subst__BaseType_22);
                  }
                  {
                    MR_Word base;
                    base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
                    *parse_tree__prog_type_subst__Type_6 = base;
                    MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 3));
                    MR_hl_field(MR_mktag(3), base, 1) = ((MR_Box) (parse_tree__prog_type_subst__BaseType_22));
                    MR_hl_field(MR_mktag(3), base, 2) = ((MR_Box) (parse_tree__prog_type_subst__Kind_33));
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
parse_tree__prog_type_subst__apply_subst_to_tvar_4_p_0(
  MR_Word parse_tree__prog_type_subst__KindMap_5,
  MR_Word parse_tree__prog_type_subst__Subst_6,
  MR_Word parse_tree__prog_type_subst__TVar_7,
  MR_Word * parse_tree__prog_type_subst__Type_8)
{
  {
    MR_bool parse_tree__prog_type_subst__succeeded;
    MR_Word parse_tree__prog_type_subst__Type0_9;
    MR_Box parse_tree__prog_type_subst__conv0_Type0_9;

    {
      parse_tree__prog_type_subst__succeeded = mercury__map__search_3_p_0((MR_Word) &parse_tree__prog_type_subst_scalar_common_1[0], (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0, parse_tree__prog_type_subst__Subst_6, ((MR_Box) (parse_tree__prog_type_subst__TVar_7)), &parse_tree__prog_type_subst__conv0_Type0_9);
    }
    if (parse_tree__prog_type_subst__succeeded)
      {
        parse_tree__prog_type_subst__Type0_9 = ((MR_Word) parse_tree__prog_type_subst__conv0_Type0_9);
        parse_tree__prog_type_subst__succeeded = MR_TRUE;
      }
    if (parse_tree__prog_type_subst__succeeded)
      {
        parse_tree__prog_type_subst__apply_subst_to_type_3_p_0(parse_tree__prog_type_subst__Subst_6, parse_tree__prog_type_subst__Type0_9, parse_tree__prog_type_subst__Type_8);
      }
    else
      {
        MR_Word parse_tree__prog_type_subst__Kind_10;

        {
          parse_tree__prog_data__get_tvar_kind_3_p_0(parse_tree__prog_type_subst__KindMap_5, parse_tree__prog_type_subst__TVar_7, &parse_tree__prog_type_subst__Kind_10);
        }
        {
          MR_Word base;
          base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
          *parse_tree__prog_type_subst__Type_8 = base;
          MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (parse_tree__prog_type_subst__TVar_7));
          MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (parse_tree__prog_type_subst__Kind_10));
        }
      }
  }
}

static void MR_CALL 
parse_tree__prog_type_subst__apply_subst_to_type_3_p_0_4(
  MR_Box parse_tree__prog_type_subst__closure_arg,
  MR_Box parse_tree__prog_type_subst__wrapper_arg_1,
  MR_Box * parse_tree__prog_type_subst__wrapper_arg_2)
{
  {
    MR_Box parse_tree__prog_type_subst__closure = parse_tree__prog_type_subst__closure_arg;
    MR_Word parse_tree__prog_type_subst__conv4_Type_6;

    {
      parse_tree__prog_type_subst__apply_subst_to_type_3_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_type_subst__closure, (MR_Integer) 3))), ((MR_Word) parse_tree__prog_type_subst__wrapper_arg_1), &parse_tree__prog_type_subst__conv4_Type_6);
    }
    *parse_tree__prog_type_subst__wrapper_arg_2 = ((MR_Box) (parse_tree__prog_type_subst__conv4_Type_6));
  }
}

static void MR_CALL 
parse_tree__prog_type_subst__apply_subst_to_type_3_p_0_3(
  MR_Box parse_tree__prog_type_subst__closure_arg,
  MR_Box parse_tree__prog_type_subst__wrapper_arg_1,
  MR_Box * parse_tree__prog_type_subst__wrapper_arg_2)
{
  {
    MR_Box parse_tree__prog_type_subst__closure = parse_tree__prog_type_subst__closure_arg;
    MR_Word parse_tree__prog_type_subst__conv3_Type_6;

    {
      parse_tree__prog_type_subst__apply_subst_to_type_3_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_type_subst__closure, (MR_Integer) 3))), ((MR_Word) parse_tree__prog_type_subst__wrapper_arg_1), &parse_tree__prog_type_subst__conv3_Type_6);
    }
    *parse_tree__prog_type_subst__wrapper_arg_2 = ((MR_Box) (parse_tree__prog_type_subst__conv3_Type_6));
  }
}

static void MR_CALL 
parse_tree__prog_type_subst__apply_subst_to_type_3_p_0_2(
  MR_Box parse_tree__prog_type_subst__closure_arg,
  MR_Box parse_tree__prog_type_subst__wrapper_arg_1,
  MR_Box * parse_tree__prog_type_subst__wrapper_arg_2)
{
  {
    MR_Box parse_tree__prog_type_subst__closure = parse_tree__prog_type_subst__closure_arg;
    MR_Word parse_tree__prog_type_subst__conv2_Type_6;

    {
      parse_tree__prog_type_subst__apply_subst_to_type_3_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_type_subst__closure, (MR_Integer) 3))), ((MR_Word) parse_tree__prog_type_subst__wrapper_arg_1), &parse_tree__prog_type_subst__conv2_Type_6);
    }
    *parse_tree__prog_type_subst__wrapper_arg_2 = ((MR_Box) (parse_tree__prog_type_subst__conv2_Type_6));
  }
}

static void MR_CALL 
parse_tree__prog_type_subst__apply_subst_to_type_3_p_0_1(
  MR_Box parse_tree__prog_type_subst__closure_arg,
  MR_Box parse_tree__prog_type_subst__wrapper_arg_1,
  MR_Box * parse_tree__prog_type_subst__wrapper_arg_2)
{
  {
    MR_Box parse_tree__prog_type_subst__closure = parse_tree__prog_type_subst__closure_arg;
    MR_Word parse_tree__prog_type_subst__conv0_Type_6;

    {
      parse_tree__prog_type_subst__apply_subst_to_type_3_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_type_subst__closure, (MR_Integer) 3))), ((MR_Word) parse_tree__prog_type_subst__wrapper_arg_1), &parse_tree__prog_type_subst__conv0_Type_6);
    }
    *parse_tree__prog_type_subst__wrapper_arg_2 = ((MR_Box) (parse_tree__prog_type_subst__conv0_Type_6));
  }
}

void MR_CALL 
parse_tree__prog_type_subst__apply_subst_to_type_3_p_0(
  MR_Word parse_tree__prog_type_subst__Subst_4,
  MR_Word parse_tree__prog_type_subst__Type0_5,
  MR_Word * parse_tree__prog_type_subst__Type_6)
{
  {
    MR_bool parse_tree__prog_type_subst__succeeded;

    switch (MR_tag((MR_Word) parse_tree__prog_type_subst__Type0_5)) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        {
          MR_Word parse_tree__prog_type_subst__TVar_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_type_subst__Type0_5, (MR_Integer) 0)));
          MR_Word parse_tree__prog_type_subst__Kind_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_type_subst__Type0_5, (MR_Integer) 1)));
          MR_Word parse_tree__prog_type_subst__Type1_9;
          MR_Box parse_tree__prog_type_subst__conv5_Type1_9;

          {
            parse_tree__prog_type_subst__succeeded = mercury__map__search_3_p_0((MR_Word) &parse_tree__prog_type_subst_scalar_common_1[0], (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0, parse_tree__prog_type_subst__Subst_4, ((MR_Box) (parse_tree__prog_type_subst__TVar_7)), &parse_tree__prog_type_subst__conv5_Type1_9);
          }
          if (parse_tree__prog_type_subst__succeeded)
            {
              parse_tree__prog_type_subst__Type1_9 = ((MR_Word) parse_tree__prog_type_subst__conv5_Type1_9);
              parse_tree__prog_type_subst__succeeded = MR_TRUE;
            }
          if (parse_tree__prog_type_subst__succeeded)
            {
              MR_Word parse_tree__prog_type_subst__Var_70;

              {
                parse_tree__prog_type_subst__Var_70 = parse_tree__prog_data__get_type_kind_1_f_0(parse_tree__prog_type_subst__Type1_9);
              }
              {
                parse_tree__prog_type_subst__succeeded = parse_tree__prog_data____Unify____kind_0_0(parse_tree__prog_type_subst__Kind_8, parse_tree__prog_type_subst__Var_70);
              }
              if (parse_tree__prog_type_subst__succeeded)
                *parse_tree__prog_type_subst__Type_6 = parse_tree__prog_type_subst__Type1_9;
              else
                {
                  {
                    mercury__require__unexpected_3_p_0((MR_String) "parse_tree.prog_type_subst", (MR_String) "predicate \140parse_tree.prog_type_subst.ensure_type_has_kind\'/3", (MR_String) "substitution not kind preserving");
                    return;
                  }
                }
            }
          else
            *parse_tree__prog_type_subst__Type_6 = parse_tree__prog_type_subst__Type0_5;
        }
        break;
      case (MR_Integer) 1:
        {
          MR_Word parse_tree__prog_type_subst__TypeCtorInfo_10_49;
          MR_Word parse_tree__prog_type_subst__Name_10 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_type_subst__Type0_5, (MR_Integer) 0)));
          MR_Word parse_tree__prog_type_subst__Args0_11 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_type_subst__Type0_5, (MR_Integer) 1)));
          MR_Word parse_tree__prog_type_subst__Args_12;
          MR_Word parse_tree__prog_type_subst__Kind_21 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_type_subst__Type0_5, (MR_Integer) 2)));
          MR_Word parse_tree__prog_type_subst__Var_46;

          {
            parse_tree__prog_type_subst__Var_46 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
            MR_hl_field(MR_mktag(0), parse_tree__prog_type_subst__Var_46, 0) = ((MR_Box) (&parse_tree__prog_type_subst_scalar_common_4[0]));
            MR_hl_field(MR_mktag(0), parse_tree__prog_type_subst__Var_46, 1) = ((MR_Box) (parse_tree__prog_type_subst__apply_subst_to_type_3_p_0_2));
            MR_hl_field(MR_mktag(0), parse_tree__prog_type_subst__Var_46, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
            MR_hl_field(MR_mktag(0), parse_tree__prog_type_subst__Var_46, 3) = ((MR_Box) (parse_tree__prog_type_subst__Subst_4));
          }
          parse_tree__prog_type_subst__TypeCtorInfo_10_49 = (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0;
          {
            mercury__list__map_3_p_0(parse_tree__prog_type_subst__TypeCtorInfo_10_49, parse_tree__prog_type_subst__TypeCtorInfo_10_49, parse_tree__prog_type_subst__Var_46, parse_tree__prog_type_subst__Args0_11, &parse_tree__prog_type_subst__Args_12);
          }
          {
            MR_Word base;
            base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
            *parse_tree__prog_type_subst__Type_6 = base;
            MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (parse_tree__prog_type_subst__Name_10));
            MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (parse_tree__prog_type_subst__Args_12));
            MR_hl_field(MR_mktag(1), base, 2) = ((MR_Box) (parse_tree__prog_type_subst__Kind_21));
          }
        }
        break;
      case (MR_Integer) 2:
        *parse_tree__prog_type_subst__Type_6 = parse_tree__prog_type_subst__Type0_5;
        break;
      case (MR_Integer) 3:
        switch (((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__prog_type_subst__Type0_5, (MR_Integer) 0)))) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
            {
              MR_Word parse_tree__prog_type_subst__TypeCtorInfo_10_63;
              MR_Word parse_tree__prog_type_subst__Kind_24 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__prog_type_subst__Type0_5, (MR_Integer) 2)));
              MR_Word parse_tree__prog_type_subst__Args0_25 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__prog_type_subst__Type0_5, (MR_Integer) 1)));
              MR_Word parse_tree__prog_type_subst__Args_26;
              MR_Word parse_tree__prog_type_subst__Var_60;

              {
                parse_tree__prog_type_subst__Var_60 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
                MR_hl_field(MR_mktag(0), parse_tree__prog_type_subst__Var_60, 0) = ((MR_Box) (&parse_tree__prog_type_subst_scalar_common_4[0]));
                MR_hl_field(MR_mktag(0), parse_tree__prog_type_subst__Var_60, 1) = ((MR_Box) (parse_tree__prog_type_subst__apply_subst_to_type_3_p_0_4));
                MR_hl_field(MR_mktag(0), parse_tree__prog_type_subst__Var_60, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
                MR_hl_field(MR_mktag(0), parse_tree__prog_type_subst__Var_60, 3) = ((MR_Box) (parse_tree__prog_type_subst__Subst_4));
              }
              parse_tree__prog_type_subst__TypeCtorInfo_10_63 = (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0;
              {
                mercury__list__map_3_p_0(parse_tree__prog_type_subst__TypeCtorInfo_10_63, parse_tree__prog_type_subst__TypeCtorInfo_10_63, parse_tree__prog_type_subst__Var_60, parse_tree__prog_type_subst__Args0_25, &parse_tree__prog_type_subst__Args_26);
              }
              {
                MR_Word base;
                base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
                *parse_tree__prog_type_subst__Type_6 = base;
                MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 0));
                MR_hl_field(MR_mktag(3), base, 1) = ((MR_Box) (parse_tree__prog_type_subst__Args_26));
                MR_hl_field(MR_mktag(3), base, 2) = ((MR_Box) (parse_tree__prog_type_subst__Kind_24));
              }
            }
            break;
          case (MR_Integer) 1:
            {
              MR_Word parse_tree__prog_type_subst__TypeCtorInfo_10_56;
              MR_Word parse_tree__prog_type_subst__PorF_14 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__prog_type_subst__Type0_5, (MR_Integer) 1)));
              MR_Word parse_tree__prog_type_subst__HOInstInfo_15 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__prog_type_subst__Type0_5, (MR_Integer) 3)));
              MR_Word parse_tree__prog_type_subst__Purity_16 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__prog_type_subst__Type0_5, (MR_Integer) 4)));
              MR_Word parse_tree__prog_type_subst__Args0_22 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__prog_type_subst__Type0_5, (MR_Integer) 2)));
              MR_Word parse_tree__prog_type_subst__Args_23;
              MR_Word parse_tree__prog_type_subst__Var_53;

              {
                parse_tree__prog_type_subst__Var_53 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
                MR_hl_field(MR_mktag(0), parse_tree__prog_type_subst__Var_53, 0) = ((MR_Box) (&parse_tree__prog_type_subst_scalar_common_4[0]));
                MR_hl_field(MR_mktag(0), parse_tree__prog_type_subst__Var_53, 1) = ((MR_Box) (parse_tree__prog_type_subst__apply_subst_to_type_3_p_0_3));
                MR_hl_field(MR_mktag(0), parse_tree__prog_type_subst__Var_53, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
                MR_hl_field(MR_mktag(0), parse_tree__prog_type_subst__Var_53, 3) = ((MR_Box) (parse_tree__prog_type_subst__Subst_4));
              }
              parse_tree__prog_type_subst__TypeCtorInfo_10_56 = (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0;
              {
                mercury__list__map_3_p_0(parse_tree__prog_type_subst__TypeCtorInfo_10_56, parse_tree__prog_type_subst__TypeCtorInfo_10_56, parse_tree__prog_type_subst__Var_53, parse_tree__prog_type_subst__Args0_22, &parse_tree__prog_type_subst__Args_23);
              }
              {
                MR_Word base;
                base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 6 * sizeof(MR_Word)), NULL, NULL));
                *parse_tree__prog_type_subst__Type_6 = base;
                MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
                MR_hl_field(MR_mktag(3), base, 1) = ((MR_Box) (parse_tree__prog_type_subst__PorF_14));
                MR_hl_field(MR_mktag(3), base, 2) = ((MR_Box) (parse_tree__prog_type_subst__Args_23));
                MR_hl_field(MR_mktag(3), base, 3) = ((MR_Box) (parse_tree__prog_type_subst__HOInstInfo_15));
                MR_hl_field(MR_mktag(3), base, 4) = ((MR_Box) (parse_tree__prog_type_subst__Purity_16));
                MR_hl_field(MR_mktag(3), base, 5) = NULL;
              }
            }
            break;
          case (MR_Integer) 2:
            {
              MR_Word parse_tree__prog_type_subst__TypeCtorInfo_10_42;
              MR_Word parse_tree__prog_type_subst__TVar_27 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__prog_type_subst__Type0_5, (MR_Integer) 1)));
              MR_Word parse_tree__prog_type_subst__Kind_28 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__prog_type_subst__Type0_5, (MR_Integer) 3)));
              MR_Word parse_tree__prog_type_subst__Args0_29 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__prog_type_subst__Type0_5, (MR_Integer) 2)));
              MR_Word parse_tree__prog_type_subst__Args_30;
              MR_Word parse_tree__prog_type_subst__Var_39;
              MR_Word parse_tree__prog_type_subst__AppliedType_18;
              MR_Box parse_tree__prog_type_subst__conv1_AppliedType_18;

              {
                parse_tree__prog_type_subst__Var_39 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
                MR_hl_field(MR_mktag(0), parse_tree__prog_type_subst__Var_39, 0) = ((MR_Box) (&parse_tree__prog_type_subst_scalar_common_4[0]));
                MR_hl_field(MR_mktag(0), parse_tree__prog_type_subst__Var_39, 1) = ((MR_Box) (parse_tree__prog_type_subst__apply_subst_to_type_3_p_0_1));
                MR_hl_field(MR_mktag(0), parse_tree__prog_type_subst__Var_39, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
                MR_hl_field(MR_mktag(0), parse_tree__prog_type_subst__Var_39, 3) = ((MR_Box) (parse_tree__prog_type_subst__Subst_4));
              }
              parse_tree__prog_type_subst__TypeCtorInfo_10_42 = (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0;
              {
                mercury__list__map_3_p_0(parse_tree__prog_type_subst__TypeCtorInfo_10_42, parse_tree__prog_type_subst__TypeCtorInfo_10_42, parse_tree__prog_type_subst__Var_39, parse_tree__prog_type_subst__Args0_29, &parse_tree__prog_type_subst__Args_30);
              }
              {
                parse_tree__prog_type_subst__succeeded = mercury__map__search_3_p_0((MR_Word) &parse_tree__prog_type_subst_scalar_common_1[0], (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0, parse_tree__prog_type_subst__Subst_4, ((MR_Box) (parse_tree__prog_type_subst__TVar_27)), &parse_tree__prog_type_subst__conv1_AppliedType_18);
              }
              if (parse_tree__prog_type_subst__succeeded)
                {
                  parse_tree__prog_type_subst__AppliedType_18 = ((MR_Word) parse_tree__prog_type_subst__conv1_AppliedType_18);
                  parse_tree__prog_type_subst__succeeded = MR_TRUE;
                }
              if (parse_tree__prog_type_subst__succeeded)
                {
                  parse_tree__prog_type_subst__apply_type_args_3_p_0(parse_tree__prog_type_subst__AppliedType_18, parse_tree__prog_type_subst__Args_30, parse_tree__prog_type_subst__Type_6);
                }
              else
                {
                  MR_Word base;
                  base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL));
                  *parse_tree__prog_type_subst__Type_6 = base;
                  MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
                  MR_hl_field(MR_mktag(3), base, 1) = ((MR_Box) (parse_tree__prog_type_subst__TVar_27));
                  MR_hl_field(MR_mktag(3), base, 2) = ((MR_Box) (parse_tree__prog_type_subst__Args_30));
                  MR_hl_field(MR_mktag(3), base, 3) = ((MR_Box) (parse_tree__prog_type_subst__Kind_28));
                }
            }
            break;
          case (MR_Integer) 3:
            {
              MR_Word parse_tree__prog_type_subst__BaseType0_19 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__prog_type_subst__Type0_5, (MR_Integer) 1)));
              MR_Word parse_tree__prog_type_subst__BaseType_20;
              MR_Word parse_tree__prog_type_subst__Kind_31 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__prog_type_subst__Type0_5, (MR_Integer) 2)));

              {
                parse_tree__prog_type_subst__apply_subst_to_type_3_p_0(parse_tree__prog_type_subst__Subst_4, parse_tree__prog_type_subst__BaseType0_19, &parse_tree__prog_type_subst__BaseType_20);
              }
              {
                MR_Word base;
                base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
                *parse_tree__prog_type_subst__Type_6 = base;
                MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 3));
                MR_hl_field(MR_mktag(3), base, 1) = ((MR_Box) (parse_tree__prog_type_subst__BaseType_20));
                MR_hl_field(MR_mktag(3), base, 2) = ((MR_Box) (parse_tree__prog_type_subst__Kind_31));
              }
            }
            break;
        }
        break;
    }
  }
}

static void MR_CALL 
parse_tree__prog_type_subst__apply_type_args_3_p_0(
  MR_Word parse_tree__prog_type_subst__Type0_4,
  MR_Word parse_tree__prog_type_subst__Args_5,
  MR_Word * parse_tree__prog_type_subst__Type_6)
{
  while (MR_TRUE)
    {
      /* tailcall optimized into a loop */
      {
        MR_bool parse_tree__prog_type_subst__succeeded;

        switch (MR_tag((MR_Word) parse_tree__prog_type_subst__Type0_4)) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
            {
              MR_Word parse_tree__prog_type_subst__TVar_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_type_subst__Type0_4, (MR_Integer) 0)));
              MR_Word parse_tree__prog_type_subst__Kind0_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_type_subst__Type0_4, (MR_Integer) 1)));
              MR_Word parse_tree__prog_type_subst__Kind_9;

              {
                parse_tree__prog_type_subst__apply_type_args_to_kind_3_p_0(parse_tree__prog_type_subst__Kind0_8, parse_tree__prog_type_subst__Args_5, &parse_tree__prog_type_subst__Kind_9);
              }
              {
                MR_Word base;
                base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL));
                *parse_tree__prog_type_subst__Type_6 = base;
                MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
                MR_hl_field(MR_mktag(3), base, 1) = ((MR_Box) (parse_tree__prog_type_subst__TVar_7));
                MR_hl_field(MR_mktag(3), base, 2) = ((MR_Box) (parse_tree__prog_type_subst__Args_5));
                MR_hl_field(MR_mktag(3), base, 3) = ((MR_Box) (parse_tree__prog_type_subst__Kind_9));
              }
            }
            break;
          case (MR_Integer) 1:
            {
              MR_Word parse_tree__prog_type_subst__Name_10 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_type_subst__Type0_4, (MR_Integer) 0)));
              MR_Word parse_tree__prog_type_subst__Args0_11 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_type_subst__Type0_4, (MR_Integer) 1)));
              MR_Word parse_tree__prog_type_subst__Var_27;
              MR_Word parse_tree__prog_type_subst__Kind0_28 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_type_subst__Type0_4, (MR_Integer) 2)));
              MR_Word parse_tree__prog_type_subst__Kind_29;

              {
                parse_tree__prog_type_subst__apply_type_args_to_kind_3_p_0(parse_tree__prog_type_subst__Kind0_28, parse_tree__prog_type_subst__Args_5, &parse_tree__prog_type_subst__Kind_29);
              }
              {
                parse_tree__prog_type_subst__Var_27 = mercury__list__f_43_43_2_f_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0, parse_tree__prog_type_subst__Args0_11, parse_tree__prog_type_subst__Args_5);
              }
              {
                MR_Word base;
                base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
                *parse_tree__prog_type_subst__Type_6 = base;
                MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (parse_tree__prog_type_subst__Name_10));
                MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (parse_tree__prog_type_subst__Var_27));
                MR_hl_field(MR_mktag(1), base, 2) = ((MR_Box) (parse_tree__prog_type_subst__Kind_29));
              }
            }
            break;
          case (MR_Integer) 2:
            {
              if ((parse_tree__prog_type_subst__Args_5 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
                {
                }
              else
                {
                  {
                    mercury__require__unexpected_3_p_0((MR_String) "parse_tree.prog_type_subst", (MR_String) "predicate \140parse_tree.prog_type_subst.apply_type_args\'/3", (MR_String) "applied type args to builtin");
                    return;
                  }
                }
              *parse_tree__prog_type_subst__Type_6 = parse_tree__prog_type_subst__Type0_4;
            }
            break;
          case (MR_Integer) 3:
            switch (((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__prog_type_subst__Type0_4, (MR_Integer) 0)))) {
              default: /*NOTREACHED*/ MR_assert(0);
              case (MR_Integer) 0:
                {
                  MR_Word parse_tree__prog_type_subst__Var_23;
                  MR_Word parse_tree__prog_type_subst__Kind0_30 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__prog_type_subst__Type0_4, (MR_Integer) 2)));
                  MR_Word parse_tree__prog_type_subst__Kind_31;
                  MR_Word parse_tree__prog_type_subst__Args0_32 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__prog_type_subst__Type0_4, (MR_Integer) 1)));

                  {
                    parse_tree__prog_type_subst__apply_type_args_to_kind_3_p_0(parse_tree__prog_type_subst__Kind0_30, parse_tree__prog_type_subst__Args_5, &parse_tree__prog_type_subst__Kind_31);
                  }
                  {
                    parse_tree__prog_type_subst__Var_23 = mercury__list__f_43_43_2_f_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0, parse_tree__prog_type_subst__Args0_32, parse_tree__prog_type_subst__Args_5);
                  }
                  {
                    MR_Word base;
                    base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
                    *parse_tree__prog_type_subst__Type_6 = base;
                    MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 0));
                    MR_hl_field(MR_mktag(3), base, 1) = ((MR_Box) (parse_tree__prog_type_subst__Var_23));
                    MR_hl_field(MR_mktag(3), base, 2) = ((MR_Box) (parse_tree__prog_type_subst__Kind_31));
                  }
                }
                break;
              case (MR_Integer) 1:
                {
                  if ((parse_tree__prog_type_subst__Args_5 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
                    {
                    }
                  else
                    {
                      {
                        mercury__require__unexpected_3_p_0((MR_String) "parse_tree.prog_type_subst", (MR_String) "predicate \140parse_tree.prog_type_subst.apply_type_args\'/3", (MR_String) "applied type args to builtin");
                        return;
                      }
                    }
                  *parse_tree__prog_type_subst__Type_6 = parse_tree__prog_type_subst__Type0_4;
                }
                break;
              case (MR_Integer) 2:
                {
                  MR_Word parse_tree__prog_type_subst__Var_22;
                  MR_Word parse_tree__prog_type_subst__TVar_33 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__prog_type_subst__Type0_4, (MR_Integer) 1)));
                  MR_Word parse_tree__prog_type_subst__Kind0_34 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__prog_type_subst__Type0_4, (MR_Integer) 3)));
                  MR_Word parse_tree__prog_type_subst__Kind_35;
                  MR_Word parse_tree__prog_type_subst__Args0_36 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__prog_type_subst__Type0_4, (MR_Integer) 2)));

                  {
                    parse_tree__prog_type_subst__apply_type_args_to_kind_3_p_0(parse_tree__prog_type_subst__Kind0_34, parse_tree__prog_type_subst__Args_5, &parse_tree__prog_type_subst__Kind_35);
                  }
                  {
                    parse_tree__prog_type_subst__Var_22 = mercury__list__f_43_43_2_f_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0, parse_tree__prog_type_subst__Args0_36, parse_tree__prog_type_subst__Args_5);
                  }
                  {
                    MR_Word base;
                    base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL));
                    *parse_tree__prog_type_subst__Type_6 = base;
                    MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
                    MR_hl_field(MR_mktag(3), base, 1) = ((MR_Box) (parse_tree__prog_type_subst__TVar_33));
                    MR_hl_field(MR_mktag(3), base, 2) = ((MR_Box) (parse_tree__prog_type_subst__Var_22));
                    MR_hl_field(MR_mktag(3), base, 3) = ((MR_Box) (parse_tree__prog_type_subst__Kind_35));
                  }
                }
                break;
              case (MR_Integer) 3:
                {
                  MR_Word parse_tree__prog_type_subst__BaseType0_20 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__prog_type_subst__Type0_4, (MR_Integer) 1)));
                  MR_Word parse_tree__prog_type_subst__Var_21 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__prog_type_subst__Type0_4, (MR_Integer) 2)));

                  /* direct tailcall eliminated */
                  {
                    MR_Word parse_tree__prog_type_subst__next_value_of_Type0_4 = parse_tree__prog_type_subst__BaseType0_20;

                    parse_tree__prog_type_subst__Type0_4 = parse_tree__prog_type_subst__next_value_of_Type0_4;
                  }
                  continue;
                }
                break;
            }
            break;
        }
      }
      break;
    }
}

static void MR_CALL 
parse_tree__prog_type_subst__apply_type_args_to_kind_3_p_0(
  MR_Word parse_tree__prog_type_subst__Kind0_4,
  MR_Word parse_tree__prog_type_subst__ArgTypes_5,
  MR_Word * parse_tree__prog_type_subst__Kind_6)
{
  while (MR_TRUE)
    {
      /* tailcall optimized into a loop */
      {
        MR_bool parse_tree__prog_type_subst__succeeded;

        if ((parse_tree__prog_type_subst__ArgTypes_5 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
          *parse_tree__prog_type_subst__Kind_6 = parse_tree__prog_type_subst__Kind0_4;
        else
          {
            MR_Word parse_tree__prog_type_subst__HeadArgType_7 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_type_subst__ArgTypes_5, (MR_Integer) 0)));
            MR_Word parse_tree__prog_type_subst__TailArgTypes_8 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_type_subst__ArgTypes_5, (MR_Integer) 1)));

            switch (MR_tag((MR_Word) parse_tree__prog_type_subst__Kind0_4)) {
              default: /*NOTREACHED*/ MR_assert(0);
              case (MR_Integer) 0:
                {
                  {
                    mercury__require__unexpected_3_p_0((MR_String) "parse_tree.prog_type_subst", (MR_String) "predicate \140parse_tree.prog_type_subst.apply_type_args_to_kind\'/3", (MR_String) "too many args in apply_n");
                    return;
                  }
                }
                break;
              case (MR_Integer) 1:
                {
                  MR_Word parse_tree__prog_type_subst__KindA_9 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_type_subst__Kind0_4, (MR_Integer) 0)));
                  MR_Word parse_tree__prog_type_subst__KindB_10 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_type_subst__Kind0_4, (MR_Integer) 1)));
                  MR_Word parse_tree__prog_type_subst__Var_21;

                  {
                    parse_tree__prog_type_subst__Var_21 = parse_tree__prog_data__get_type_kind_1_f_0(parse_tree__prog_type_subst__HeadArgType_7);
                  }
                  {
                    parse_tree__prog_type_subst__succeeded = parse_tree__prog_data____Unify____kind_0_0(parse_tree__prog_type_subst__KindA_9, parse_tree__prog_type_subst__Var_21);
                  }
                  if (parse_tree__prog_type_subst__succeeded)
                    {
                      /* direct tailcall eliminated */
                      {
                        MR_Word parse_tree__prog_type_subst__next_value_of_Kind0_4 = parse_tree__prog_type_subst__KindB_10;
                        MR_Word parse_tree__prog_type_subst__next_value_of_ArgTypes_5 = parse_tree__prog_type_subst__TailArgTypes_8;

                        parse_tree__prog_type_subst__ArgTypes_5 = parse_tree__prog_type_subst__next_value_of_ArgTypes_5;
                        parse_tree__prog_type_subst__Kind0_4 = parse_tree__prog_type_subst__next_value_of_Kind0_4;
                      }
                      continue;
                    }
                  else
                    {
                      {
                        mercury__require__unexpected_3_p_0((MR_String) "parse_tree.prog_type_subst", (MR_String) "predicate \140parse_tree.prog_type_subst.apply_type_args_to_kind\'/3", (MR_String) "kind error in apply_n");
                        return;
                      }
                    }
                }
                break;
              case (MR_Integer) 2:
                {
                  {
                    mercury__require__unexpected_3_p_0((MR_String) "parse_tree.prog_type_subst", (MR_String) "predicate \140parse_tree.prog_type_subst.apply_type_args_to_kind\'/3", (MR_String) "unbound kind variable");
                    return;
                  }
                }
                break;
            }
          }
      }
      break;
    }
}

void MR_CALL 
parse_tree__prog_type_subst__apply_variable_renaming_to_tvar_3_p_0(
  MR_Word parse_tree__prog_type_subst__Renaming_4,
  MR_Word parse_tree__prog_type_subst__TVar0_5,
  MR_Word * parse_tree__prog_type_subst__TVar_6)
{
  {
    MR_bool parse_tree__prog_type_subst__succeeded;
    MR_Word parse_tree__prog_type_subst__TVar1_7;
    MR_Word parse_tree__prog_type_subst__TypeInfo_8_8 = (MR_Word) &parse_tree__prog_type_subst_scalar_common_1[0];
    MR_Box parse_tree__prog_type_subst__conv0_TVar1_7;

    {
      parse_tree__prog_type_subst__succeeded = mercury__map__search_3_p_0(parse_tree__prog_type_subst__TypeInfo_8_8, parse_tree__prog_type_subst__TypeInfo_8_8, parse_tree__prog_type_subst__Renaming_4, ((MR_Box) (parse_tree__prog_type_subst__TVar0_5)), &parse_tree__prog_type_subst__conv0_TVar1_7);
    }
    if (parse_tree__prog_type_subst__succeeded)
      {
        parse_tree__prog_type_subst__TVar1_7 = ((MR_Word) parse_tree__prog_type_subst__conv0_TVar1_7);
        parse_tree__prog_type_subst__succeeded = MR_TRUE;
      }
    if (parse_tree__prog_type_subst__succeeded)
      *parse_tree__prog_type_subst__TVar_6 = parse_tree__prog_type_subst__TVar1_7;
    else
      *parse_tree__prog_type_subst__TVar_6 = parse_tree__prog_type_subst__TVar0_5;
  }
}

static void MR_CALL 
parse_tree__prog_type_subst__apply_variable_renaming_to_tvar_kind_map_3_p_0_1(
  MR_Box parse_tree__prog_type_subst__closure_arg,
  MR_Box parse_tree__prog_type_subst__wrapper_arg_1,
  MR_Box parse_tree__prog_type_subst__wrapper_arg_2,
  MR_Box parse_tree__prog_type_subst__wrapper_arg_3,
  MR_Box * parse_tree__prog_type_subst__wrapper_arg_4)
{
  {
    MR_Box parse_tree__prog_type_subst__closure = parse_tree__prog_type_subst__closure_arg;
    MR_Word parse_tree__prog_type_subst__conv0_STATE_VARIABLE_KindMap_12;

    {
      parse_tree__prog_type_subst__apply_variable_renaming_to_tvar_kind_map_2_5_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_type_subst__closure, (MR_Integer) 3))), ((MR_Word) parse_tree__prog_type_subst__wrapper_arg_1), ((MR_Word) parse_tree__prog_type_subst__wrapper_arg_2), ((MR_Word) parse_tree__prog_type_subst__wrapper_arg_3), &parse_tree__prog_type_subst__conv0_STATE_VARIABLE_KindMap_12);
    }
    *parse_tree__prog_type_subst__wrapper_arg_4 = ((MR_Box) (parse_tree__prog_type_subst__conv0_STATE_VARIABLE_KindMap_12));
  }
}

void MR_CALL 
parse_tree__prog_type_subst__apply_variable_renaming_to_tvar_kind_map_3_p_0(
  MR_Word parse_tree__prog_type_subst__Renaming_4,
  MR_Word parse_tree__prog_type_subst__KindMap0_5,
  MR_Word * parse_tree__prog_type_subst__KindMap_6)
{
  {
    MR_bool parse_tree__prog_type_subst__succeeded;
    MR_Word parse_tree__prog_type_subst__TypeInfo_13_13;
    MR_Word parse_tree__prog_type_subst__TypeCtorInfo_14_14;
    MR_Word parse_tree__prog_type_subst__Var_7;
    MR_Word parse_tree__prog_type_subst__Var_8;
    MR_Box parse_tree__prog_type_subst__conv1_KindMap_6;

    {
      parse_tree__prog_type_subst__Var_7 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), parse_tree__prog_type_subst__Var_7, 0) = ((MR_Box) (&parse_tree__prog_type_subst_scalar_common_3[0]));
      MR_hl_field(MR_mktag(0), parse_tree__prog_type_subst__Var_7, 1) = ((MR_Box) (parse_tree__prog_type_subst__apply_variable_renaming_to_tvar_kind_map_3_p_0_1));
      MR_hl_field(MR_mktag(0), parse_tree__prog_type_subst__Var_7, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
      MR_hl_field(MR_mktag(0), parse_tree__prog_type_subst__Var_7, 3) = ((MR_Box) (parse_tree__prog_type_subst__Renaming_4));
    }
    parse_tree__prog_type_subst__TypeInfo_13_13 = (MR_Word) &parse_tree__prog_type_subst_scalar_common_1[0];
    parse_tree__prog_type_subst__TypeCtorInfo_14_14 = (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_kind_0;
    {
      parse_tree__prog_type_subst__Var_8 = mercury__map__init_0_f_0(parse_tree__prog_type_subst__TypeInfo_13_13, parse_tree__prog_type_subst__TypeCtorInfo_14_14);
    }
    {
      mercury__map__foldl_4_p_0(parse_tree__prog_type_subst__TypeInfo_13_13, parse_tree__prog_type_subst__TypeCtorInfo_14_14, (MR_Word) &parse_tree__prog_type_subst_scalar_common_2[0], parse_tree__prog_type_subst__Var_7, parse_tree__prog_type_subst__KindMap0_5, ((MR_Box) (parse_tree__prog_type_subst__Var_8)), &parse_tree__prog_type_subst__conv1_KindMap_6);
    }
    *parse_tree__prog_type_subst__KindMap_6 = ((MR_Word) parse_tree__prog_type_subst__conv1_KindMap_6);
  }
}

void mercury__parse_tree__prog_type_subst__init(void)
{
}

void mercury__parse_tree__prog_type_subst__init_type_tables(void)
{
}

void mercury__parse_tree__prog_type_subst__init_debugger(void)
{
	MR_fatal_error("debugger initialization in MLDS grade");
}

// Ensure everything is compiled with the same grade.
const char *mercury__parse_tree__prog_type_subst__grade_check(void)
{
    return &MR_GRADE_VAR;
}

/* :- end_module parse_tree.prog_type_subst. */
