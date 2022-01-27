/*
** Automatically generated from `prog_type_subst.m'
** by the Mercury compiler,
** version DEV
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


#include "check_hlds.mih"
#include "hlds.mih"
#include "libs.mih"
#include "mdbcomp.mih"
#include "parse_tree.mih"
#include "recompilation.mih"
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
#include "parse_tree.prog_data.mih"
#include "parse_tree.prog_item.mih"
#include "parse_tree.set_of_var.mih"
#include "mdbcomp.feedback.automatic_parallelism.mih"




#line 97 "parse_tree.prog_type_subst.c"
static const MR_FA_TypeInfo_Struct1 parse_tree__prog_type_subst__term__ti_var_1parse_tree__prog_data__type_ctor_info_tvar_type_0;

#line 100 "parse_tree.prog_type_subst.c"
static const MR_FA_PseudoTypeInfo_Struct2 parse_tree__prog_type_subst__tree234__pti_tree234_2__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_tvar_type_0__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_tvar_type_0;

#line 103 "parse_tree.prog_type_subst.c"
static const MR_FA_PseudoTypeInfo_Struct1 parse_tree__prog_type_subst__term__pti_var_1__plain_parse_tree__prog_data__type_ctor_info_tvar_type_0;

#line 106 "parse_tree.prog_type_subst.c"
static const MR_FA_PseudoTypeInfo_Struct2 parse_tree__prog_type_subst__tree234__pti_tree234_2__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_tvar_type_0__plain_parse_tree__prog_data__type_ctor_info_kind_0;

#line 109 "parse_tree.prog_type_subst.c"
static const MR_FA_PseudoTypeInfo_Struct2 parse_tree__prog_type_subst__tree234__pti_tree234_2__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_tvar_type_0__plain_parse_tree__prog_data__type_ctor_info_mer_type_0;

#line 351 "prog_type_subst.m"
static void MR_CALL 
parse_tree__prog_type_subst__apply_type_args_to_kind_3_p_0(
#line 351 "prog_type_subst.m"
  MR_Word parse_tree__prog_type_subst__Kind0_4,
#line 351 "prog_type_subst.m"
  MR_Word parse_tree__prog_type_subst__ArgTypes_5,
#line 351 "prog_type_subst.m"
  MR_Word * parse_tree__prog_type_subst__Kind_6);

#line 312 "prog_type_subst.m"
static void MR_CALL 
parse_tree__prog_type_subst__apply_type_args_3_p_0(
#line 312 "prog_type_subst.m"
  MR_Word parse_tree__prog_type_subst__Type0_4,
#line 312 "prog_type_subst.m"
  MR_Word parse_tree__prog_type_subst__Args_5,
#line 312 "prog_type_subst.m"
  MR_Word * parse_tree__prog_type_subst__Type_6);

#line 123 "prog_type_subst.m"
static void MR_CALL 
parse_tree__prog_type_subst__apply_variable_renaming_to_tvar_kind_map_2_5_p_0(
#line 123 "prog_type_subst.m"
  MR_Word parse_tree__prog_type_subst__Renaming_6,
#line 123 "prog_type_subst.m"
  MR_Word parse_tree__prog_type_subst__TVar0_7,
#line 123 "prog_type_subst.m"
  MR_Word parse_tree__prog_type_subst__Kind_8,
#line 123 "prog_type_subst.m"
  MR_Word parse_tree__prog_type_subst__STATE_VARIABLE_KindMap_0_11,
#line 123 "prog_type_subst.m"
  MR_Word * parse_tree__prog_type_subst__STATE_VARIABLE_KindMap_12);

#line 413 "prog_type_subst.m"
static void MR_CALL 
parse_tree__prog_type_subst__apply_rec_subst_to_prog_constraints_3_p_0_1(
#line 413 "prog_type_subst.m"
  MR_Box parse_tree__prog_type_subst__closure_arg,
#line 413 "prog_type_subst.m"
  MR_Box parse_tree__prog_type_subst__wrapper_arg_1,
#line 413 "prog_type_subst.m"
  MR_Box * parse_tree__prog_type_subst__wrapper_arg_2);

#line 410 "prog_type_subst.m"
static void MR_CALL 
parse_tree__prog_type_subst__apply_subst_to_prog_constraints_3_p_0_1(
#line 410 "prog_type_subst.m"
  MR_Box parse_tree__prog_type_subst__closure_arg,
#line 410 "prog_type_subst.m"
  MR_Box parse_tree__prog_type_subst__wrapper_arg_1,
#line 410 "prog_type_subst.m"
  MR_Box * parse_tree__prog_type_subst__wrapper_arg_2);

#line 406 "prog_type_subst.m"
static void MR_CALL 
parse_tree__prog_type_subst__apply_variable_renaming_to_prog_constraints_3_p_0_1(
#line 406 "prog_type_subst.m"
  MR_Box parse_tree__prog_type_subst__closure_arg,
#line 406 "prog_type_subst.m"
  MR_Box parse_tree__prog_type_subst__wrapper_arg_1,
#line 406 "prog_type_subst.m"
  MR_Box * parse_tree__prog_type_subst__wrapper_arg_2);

#line 413 "prog_type_subst.m"
static void MR_CALL 
parse_tree__prog_type_subst__apply_rec_subst_to_prog_constraint_list_3_p_0_1(
#line 413 "prog_type_subst.m"
  MR_Box parse_tree__prog_type_subst__closure_arg,
#line 413 "prog_type_subst.m"
  MR_Box parse_tree__prog_type_subst__wrapper_arg_1,
#line 413 "prog_type_subst.m"
  MR_Box * parse_tree__prog_type_subst__wrapper_arg_2);

#line 410 "prog_type_subst.m"
static void MR_CALL 
parse_tree__prog_type_subst__apply_subst_to_prog_constraint_list_3_p_0_1(
#line 410 "prog_type_subst.m"
  MR_Box parse_tree__prog_type_subst__closure_arg,
#line 410 "prog_type_subst.m"
  MR_Box parse_tree__prog_type_subst__wrapper_arg_1,
#line 410 "prog_type_subst.m"
  MR_Box * parse_tree__prog_type_subst__wrapper_arg_2);

#line 406 "prog_type_subst.m"
static void MR_CALL 
parse_tree__prog_type_subst__apply_variable_renaming_to_prog_constraint_list_3_p_0_1(
#line 406 "prog_type_subst.m"
  MR_Box parse_tree__prog_type_subst__closure_arg,
#line 406 "prog_type_subst.m"
  MR_Box parse_tree__prog_type_subst__wrapper_arg_1,
#line 406 "prog_type_subst.m"
  MR_Box * parse_tree__prog_type_subst__wrapper_arg_2);

#line 308 "prog_type_subst.m"
static void MR_CALL 
parse_tree__prog_type_subst__apply_rec_subst_to_prog_constraint_3_p_0_1(
#line 308 "prog_type_subst.m"
  MR_Box parse_tree__prog_type_subst__closure_arg,
#line 308 "prog_type_subst.m"
  MR_Box parse_tree__prog_type_subst__wrapper_arg_1,
#line 308 "prog_type_subst.m"
  MR_Box * parse_tree__prog_type_subst__wrapper_arg_2);

#line 305 "prog_type_subst.m"
static void MR_CALL 
parse_tree__prog_type_subst__apply_subst_to_prog_constraint_3_p_0_1(
#line 305 "prog_type_subst.m"
  MR_Box parse_tree__prog_type_subst__closure_arg,
#line 305 "prog_type_subst.m"
  MR_Box parse_tree__prog_type_subst__wrapper_arg_1,
#line 305 "prog_type_subst.m"
  MR_Box * parse_tree__prog_type_subst__wrapper_arg_2);

#line 302 "prog_type_subst.m"
static void MR_CALL 
parse_tree__prog_type_subst__apply_variable_renaming_to_prog_constraint_3_p_0_1(
#line 302 "prog_type_subst.m"
  MR_Box parse_tree__prog_type_subst__closure_arg,
#line 302 "prog_type_subst.m"
  MR_Box parse_tree__prog_type_subst__wrapper_arg_1,
#line 302 "prog_type_subst.m"
  MR_Box * parse_tree__prog_type_subst__wrapper_arg_2);

#line 308 "prog_type_subst.m"
static void MR_CALL 
parse_tree__prog_type_subst__apply_rec_subst_to_type_list_3_p_0_1(
#line 308 "prog_type_subst.m"
  MR_Box parse_tree__prog_type_subst__closure_arg,
#line 308 "prog_type_subst.m"
  MR_Box parse_tree__prog_type_subst__wrapper_arg_1,
#line 308 "prog_type_subst.m"
  MR_Box * parse_tree__prog_type_subst__wrapper_arg_2);

#line 305 "prog_type_subst.m"
static void MR_CALL 
parse_tree__prog_type_subst__apply_subst_to_type_list_3_p_0_1(
#line 305 "prog_type_subst.m"
  MR_Box parse_tree__prog_type_subst__closure_arg,
#line 305 "prog_type_subst.m"
  MR_Box parse_tree__prog_type_subst__wrapper_arg_1,
#line 305 "prog_type_subst.m"
  MR_Box * parse_tree__prog_type_subst__wrapper_arg_2);

#line 302 "prog_type_subst.m"
static void MR_CALL 
parse_tree__prog_type_subst__apply_variable_renaming_to_type_list_3_p_0_1(
#line 302 "prog_type_subst.m"
  MR_Box parse_tree__prog_type_subst__closure_arg,
#line 302 "prog_type_subst.m"
  MR_Box parse_tree__prog_type_subst__wrapper_arg_1,
#line 302 "prog_type_subst.m"
  MR_Box * parse_tree__prog_type_subst__wrapper_arg_2);

#line 164 "prog_type_subst.m"
static void MR_CALL 
parse_tree__prog_type_subst__apply_rec_subst_to_tvar_list_4_p_0_1(
#line 164 "prog_type_subst.m"
  MR_Box parse_tree__prog_type_subst__closure_arg,
#line 164 "prog_type_subst.m"
  MR_Box parse_tree__prog_type_subst__wrapper_arg_1,
#line 164 "prog_type_subst.m"
  MR_Box * parse_tree__prog_type_subst__wrapper_arg_2);

#line 161 "prog_type_subst.m"
static void MR_CALL 
parse_tree__prog_type_subst__apply_subst_to_tvar_list_4_p_0_1(
#line 161 "prog_type_subst.m"
  MR_Box parse_tree__prog_type_subst__closure_arg,
#line 161 "prog_type_subst.m"
  MR_Box parse_tree__prog_type_subst__wrapper_arg_1,
#line 161 "prog_type_subst.m"
  MR_Box * parse_tree__prog_type_subst__wrapper_arg_2);

#line 158 "prog_type_subst.m"
static void MR_CALL 
parse_tree__prog_type_subst__apply_variable_renaming_to_tvar_list_3_p_0_1(
#line 158 "prog_type_subst.m"
  MR_Box parse_tree__prog_type_subst__closure_arg,
#line 158 "prog_type_subst.m"
  MR_Box parse_tree__prog_type_subst__wrapper_arg_1,
#line 158 "prog_type_subst.m"
  MR_Box * parse_tree__prog_type_subst__wrapper_arg_2);

#line 120 "prog_type_subst.m"
static void MR_CALL 
parse_tree__prog_type_subst__apply_variable_renaming_to_tvar_kind_map_3_p_0_1(
#line 120 "prog_type_subst.m"
  MR_Box parse_tree__prog_type_subst__closure_arg,
#line 120 "prog_type_subst.m"
  MR_Box parse_tree__prog_type_subst__wrapper_arg_1,
#line 120 "prog_type_subst.m"
  MR_Box parse_tree__prog_type_subst__wrapper_arg_2,
#line 120 "prog_type_subst.m"
  MR_Box parse_tree__prog_type_subst__wrapper_arg_3,
#line 120 "prog_type_subst.m"
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
    ((MR_Box) (&parse_tree__prog_type_subst__tree234__pti_tree234_2__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_tvar_type_0__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_tvar_type_0)),
    ((MR_Box) (&parse_tree__prog_type_subst__term__pti_var_1__plain_parse_tree__prog_data__type_ctor_info_tvar_type_0)),
    ((MR_Box) (&parse_tree__prog_type_subst__term__pti_var_1__plain_parse_tree__prog_data__type_ctor_info_tvar_type_0))
  },
  /* row 1 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 3)),
    ((MR_Box) (&parse_tree__prog_type_subst__tree234__pti_tree234_2__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_tvar_type_0__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_tvar_type_0)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0))
  },
  /* row 2 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 3)),
    ((MR_Box) (&parse_tree__prog_type_subst__tree234__pti_tree234_2__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_tvar_type_0__plain_parse_tree__prog_data__type_ctor_info_mer_type_0)),
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



#line 425 "parse_tree.prog_type_subst.c"
static const MR_FA_TypeInfo_Struct1 parse_tree__prog_type_subst__term__ti_var_1parse_tree__prog_data__type_ctor_info_tvar_type_0 = {
  &mercury__term__term__type_ctor_info_var_1,
  {
    (MR_TypeInfo) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_tvar_type_0
  }
};

#line 433 "parse_tree.prog_type_subst.c"
static const MR_FA_PseudoTypeInfo_Struct2 parse_tree__prog_type_subst__tree234__pti_tree234_2__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_tvar_type_0__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_tvar_type_0 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_PseudoTypeInfo) &parse_tree__prog_type_subst__term__ti_var_1parse_tree__prog_data__type_ctor_info_tvar_type_0,
    (MR_PseudoTypeInfo) &parse_tree__prog_type_subst__term__ti_var_1parse_tree__prog_data__type_ctor_info_tvar_type_0
  }
};

#line 442 "parse_tree.prog_type_subst.c"
static const MR_FA_PseudoTypeInfo_Struct1 parse_tree__prog_type_subst__term__pti_var_1__plain_parse_tree__prog_data__type_ctor_info_tvar_type_0 = {
  &mercury__term__term__type_ctor_info_var_1,
  {
    (MR_PseudoTypeInfo) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_tvar_type_0
  }
};

#line 450 "parse_tree.prog_type_subst.c"
static const MR_FA_PseudoTypeInfo_Struct2 parse_tree__prog_type_subst__tree234__pti_tree234_2__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_tvar_type_0__plain_parse_tree__prog_data__type_ctor_info_kind_0 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_PseudoTypeInfo) &parse_tree__prog_type_subst__term__ti_var_1parse_tree__prog_data__type_ctor_info_tvar_type_0,
    (MR_PseudoTypeInfo) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_kind_0
  }
};

#line 459 "parse_tree.prog_type_subst.c"
static const MR_FA_PseudoTypeInfo_Struct2 parse_tree__prog_type_subst__tree234__pti_tree234_2__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_tvar_type_0__plain_parse_tree__prog_data__type_ctor_info_mer_type_0 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_PseudoTypeInfo) &parse_tree__prog_type_subst__term__ti_var_1parse_tree__prog_data__type_ctor_info_tvar_type_0,
    (MR_PseudoTypeInfo) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0
  }
};

#line 351 "prog_type_subst.m"
static void MR_CALL 
parse_tree__prog_type_subst__apply_type_args_to_kind_3_p_0(
#line 351 "prog_type_subst.m"
  MR_Word parse_tree__prog_type_subst__Kind0_4,
#line 351 "prog_type_subst.m"
  MR_Word parse_tree__prog_type_subst__ArgTypes_5,
#line 351 "prog_type_subst.m"
  MR_Word * parse_tree__prog_type_subst__Kind_6)
#line 351 "prog_type_subst.m"
{
#line 356 "prog_type_subst.m"
  while (MR_TRUE)
#line 356 "prog_type_subst.m"
    {
#line 356 "prog_type_subst.m"
      /* tailcall optimized into a loop */
#line 356 "prog_type_subst.m"
      {
#line 356 "prog_type_subst.m"
        MR_bool parse_tree__prog_type_subst__succeeded;

#line 356 "prog_type_subst.m"
        if ((parse_tree__prog_type_subst__ArgTypes_5 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 357 "prog_type_subst.m"
          *parse_tree__prog_type_subst__Kind_6 = parse_tree__prog_type_subst__Kind0_4;
#line 356 "prog_type_subst.m"
        else
#line 359 "prog_type_subst.m"
          {
#line 359 "prog_type_subst.m"
            MR_Word parse_tree__prog_type_subst__HeadArgType_7 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_type_subst__ArgTypes_5, (MR_Integer) 0)));
#line 359 "prog_type_subst.m"
            MR_Word parse_tree__prog_type_subst__TailArgTypes_8 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_type_subst__ArgTypes_5, (MR_Integer) 1)));

#line 363 "prog_type_subst.m"
#line 363 "prog_type_subst.m"
            switch (MR_tag((MR_Word) parse_tree__prog_type_subst__Kind0_4)) {
#line 363 "prog_type_subst.m"
              default: /*NOTREACHED*/ MR_assert(0);
#line 363 "prog_type_subst.m"
              case (MR_Integer) 0:
#line 361 "prog_type_subst.m"
                {
#line 362 "prog_type_subst.m"
                  {
#line 362 "prog_type_subst.m"
                    mercury__require__unexpected_3_p_0((MR_String) "parse_tree.prog_type_subst", (MR_String) "predicate \140parse_tree.prog_type_subst.apply_type_args_to_kind\'/3", (MR_String) "too many args in apply_n");
#line 362 "prog_type_subst.m"
                    return;
                  }
#line 361 "prog_type_subst.m"
                }
#line 363 "prog_type_subst.m"
                break;
#line 363 "prog_type_subst.m"
              case (MR_Integer) 1:
#line 364 "prog_type_subst.m"
                {
#line 364 "prog_type_subst.m"
                  MR_Word parse_tree__prog_type_subst__KindA_9 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_type_subst__Kind0_4, (MR_Integer) 0)));
#line 364 "prog_type_subst.m"
                  MR_Word parse_tree__prog_type_subst__KindB_10 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_type_subst__Kind0_4, (MR_Integer) 1)));
#line 365 "prog_type_subst.m"
                  MR_Word parse_tree__prog_type_subst__V_21_21;

#line 365 "prog_type_subst.m"
                  {
#line 365 "prog_type_subst.m"
                    parse_tree__prog_type_subst__V_21_21 = parse_tree__prog_data__get_type_kind_1_f_0(parse_tree__prog_type_subst__HeadArgType_7);
                  }
#line 365 "prog_type_subst.m"
                  {
#line 365 "prog_type_subst.m"
                    parse_tree__prog_type_subst__succeeded = parse_tree__prog_data____Unify____kind_0_0(parse_tree__prog_type_subst__KindA_9, parse_tree__prog_type_subst__V_21_21);
                  }
#line 367 "prog_type_subst.m"
                  if (parse_tree__prog_type_subst__succeeded)
#line 366 "prog_type_subst.m"
                    {
#line 366 "prog_type_subst.m"
                      /* direct tailcall eliminated */
#line 366 "prog_type_subst.m"
                      {
#line 366 "prog_type_subst.m"
                        MR_Word parse_tree__prog_type_subst__Kind0__tmp_copy_4 = parse_tree__prog_type_subst__KindB_10;
#line 366 "prog_type_subst.m"
                        MR_Word parse_tree__prog_type_subst__ArgTypes__tmp_copy_5 = parse_tree__prog_type_subst__TailArgTypes_8;

#line 366 "prog_type_subst.m"
                        parse_tree__prog_type_subst__ArgTypes_5 = parse_tree__prog_type_subst__ArgTypes__tmp_copy_5;
#line 366 "prog_type_subst.m"
                        parse_tree__prog_type_subst__Kind0_4 = parse_tree__prog_type_subst__Kind0__tmp_copy_4;
#line 366 "prog_type_subst.m"
                      }
#line 366 "prog_type_subst.m"
                      continue;
#line 366 "prog_type_subst.m"
                    }
#line 367 "prog_type_subst.m"
                  else
#line 368 "prog_type_subst.m"
                    {
#line 368 "prog_type_subst.m"
                      {
#line 368 "prog_type_subst.m"
                        mercury__require__unexpected_3_p_0((MR_String) "parse_tree.prog_type_subst", (MR_String) "predicate \140parse_tree.prog_type_subst.apply_type_args_to_kind\'/3", (MR_String) "kind error in apply_n");
#line 368 "prog_type_subst.m"
                        return;
                      }
#line 368 "prog_type_subst.m"
                    }
#line 364 "prog_type_subst.m"
                }
#line 363 "prog_type_subst.m"
                break;
#line 363 "prog_type_subst.m"
              case (MR_Integer) 2:
#line 371 "prog_type_subst.m"
                {
#line 372 "prog_type_subst.m"
                  {
#line 372 "prog_type_subst.m"
                    mercury__require__unexpected_3_p_0((MR_String) "parse_tree.prog_type_subst", (MR_String) "predicate \140parse_tree.prog_type_subst.apply_type_args_to_kind\'/3", (MR_String) "unbound kind variable");
#line 372 "prog_type_subst.m"
                    return;
                  }
#line 371 "prog_type_subst.m"
                }
#line 363 "prog_type_subst.m"
                break;
#line 363 "prog_type_subst.m"
            }
#line 359 "prog_type_subst.m"
          }
#line 356 "prog_type_subst.m"
      }
#line 356 "prog_type_subst.m"
      break;
#line 356 "prog_type_subst.m"
    }
#line 351 "prog_type_subst.m"
}

#line 312 "prog_type_subst.m"
static void MR_CALL 
parse_tree__prog_type_subst__apply_type_args_3_p_0(
#line 312 "prog_type_subst.m"
  MR_Word parse_tree__prog_type_subst__Type0_4,
#line 312 "prog_type_subst.m"
  MR_Word parse_tree__prog_type_subst__Args_5,
#line 312 "prog_type_subst.m"
  MR_Word * parse_tree__prog_type_subst__Type_6)
#line 312 "prog_type_subst.m"
{
#line 317 "prog_type_subst.m"
  while (MR_TRUE)
#line 317 "prog_type_subst.m"
    {
#line 317 "prog_type_subst.m"
      /* tailcall optimized into a loop */
#line 317 "prog_type_subst.m"
      {
#line 317 "prog_type_subst.m"
        MR_bool parse_tree__prog_type_subst__succeeded;

#line 317 "prog_type_subst.m"
#line 317 "prog_type_subst.m"
        switch (MR_tag((MR_Word) parse_tree__prog_type_subst__Type0_4)) {
#line 317 "prog_type_subst.m"
          default: /*NOTREACHED*/ MR_assert(0);
#line 317 "prog_type_subst.m"
          case (MR_Integer) 0:
#line 317 "prog_type_subst.m"
            {
#line 317 "prog_type_subst.m"
              MR_Word parse_tree__prog_type_subst__TVar_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_type_subst__Type0_4, (MR_Integer) 0)));
#line 317 "prog_type_subst.m"
              MR_Word parse_tree__prog_type_subst__Kind0_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_type_subst__Type0_4, (MR_Integer) 1)));
#line 317 "prog_type_subst.m"
              MR_Word parse_tree__prog_type_subst__Kind_9;

#line 318 "prog_type_subst.m"
              {
#line 318 "prog_type_subst.m"
                parse_tree__prog_type_subst__apply_type_args_to_kind_3_p_0(parse_tree__prog_type_subst__Kind0_8, parse_tree__prog_type_subst__Args_5, &parse_tree__prog_type_subst__Kind_9);
              }
#line 319 "prog_type_subst.m"
              {
#line 319 "prog_type_subst.m"
                MR_Word base;
#line 319 "prog_type_subst.m"
                base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL));
#line 319 "prog_type_subst.m"
                *parse_tree__prog_type_subst__Type_6 = base;
#line 319 "prog_type_subst.m"
                MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
#line 319 "prog_type_subst.m"
                MR_hl_field(MR_mktag(3), base, 1) = ((MR_Box) (parse_tree__prog_type_subst__TVar_7));
#line 319 "prog_type_subst.m"
                MR_hl_field(MR_mktag(3), base, 2) = ((MR_Box) (parse_tree__prog_type_subst__Args_5));
#line 319 "prog_type_subst.m"
                MR_hl_field(MR_mktag(3), base, 3) = ((MR_Box) (parse_tree__prog_type_subst__Kind_9));
#line 319 "prog_type_subst.m"
              }
#line 317 "prog_type_subst.m"
            }
#line 317 "prog_type_subst.m"
            break;
#line 317 "prog_type_subst.m"
          case (MR_Integer) 1:
#line 321 "prog_type_subst.m"
            {
#line 321 "prog_type_subst.m"
              MR_Word parse_tree__prog_type_subst__Name_10 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_type_subst__Type0_4, (MR_Integer) 0)));
#line 321 "prog_type_subst.m"
              MR_Word parse_tree__prog_type_subst__Args0_11 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_type_subst__Type0_4, (MR_Integer) 1)));
#line 321 "prog_type_subst.m"
              MR_Word parse_tree__prog_type_subst__V_26_26;
#line 321 "prog_type_subst.m"
              MR_Word parse_tree__prog_type_subst__Kind0_27 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_type_subst__Type0_4, (MR_Integer) 2)));
#line 321 "prog_type_subst.m"
              MR_Word parse_tree__prog_type_subst__Kind_28;

#line 322 "prog_type_subst.m"
              {
#line 322 "prog_type_subst.m"
                parse_tree__prog_type_subst__apply_type_args_to_kind_3_p_0(parse_tree__prog_type_subst__Kind0_27, parse_tree__prog_type_subst__Args_5, &parse_tree__prog_type_subst__Kind_28);
              }
#line 323 "prog_type_subst.m"
              {
#line 323 "prog_type_subst.m"
                parse_tree__prog_type_subst__V_26_26 = mercury__list__f_43_43_2_f_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0, parse_tree__prog_type_subst__Args0_11, parse_tree__prog_type_subst__Args_5);
              }
#line 323 "prog_type_subst.m"
              {
#line 323 "prog_type_subst.m"
                MR_Word base;
#line 323 "prog_type_subst.m"
                base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
#line 323 "prog_type_subst.m"
                *parse_tree__prog_type_subst__Type_6 = base;
#line 323 "prog_type_subst.m"
                MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (parse_tree__prog_type_subst__Name_10));
#line 323 "prog_type_subst.m"
                MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (parse_tree__prog_type_subst__V_26_26));
#line 323 "prog_type_subst.m"
                MR_hl_field(MR_mktag(1), base, 2) = ((MR_Box) (parse_tree__prog_type_subst__Kind_28));
#line 323 "prog_type_subst.m"
              }
#line 321 "prog_type_subst.m"
            }
#line 317 "prog_type_subst.m"
            break;
#line 317 "prog_type_subst.m"
          case (MR_Integer) 2:
#line 327 "prog_type_subst.m"
            {
#line 330 "prog_type_subst.m"
              if ((parse_tree__prog_type_subst__Args_5 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 329 "prog_type_subst.m"
                {
#line 329 "prog_type_subst.m"
                }
#line 330 "prog_type_subst.m"
              else
#line 331 "prog_type_subst.m"
                {
#line 332 "prog_type_subst.m"
                  {
#line 332 "prog_type_subst.m"
                    mercury__require__unexpected_3_p_0((MR_String) "parse_tree.prog_type_subst", (MR_String) "predicate \140parse_tree.prog_type_subst.apply_type_args\'/3", (MR_String) "applied type args to builtin");
#line 332 "prog_type_subst.m"
                    return;
                  }
#line 331 "prog_type_subst.m"
                }
#line 334 "prog_type_subst.m"
              *parse_tree__prog_type_subst__Type_6 = parse_tree__prog_type_subst__Type0_4;
#line 327 "prog_type_subst.m"
            }
#line 317 "prog_type_subst.m"
            break;
#line 317 "prog_type_subst.m"
          case (MR_Integer) 3:
#line 317 "prog_type_subst.m"
#line 317 "prog_type_subst.m"
            switch (((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__prog_type_subst__Type0_4, (MR_Integer) 0)))) {
#line 317 "prog_type_subst.m"
              default: /*NOTREACHED*/ MR_assert(0);
#line 317 "prog_type_subst.m"
              case (MR_Integer) 0:
#line 336 "prog_type_subst.m"
                {
#line 336 "prog_type_subst.m"
                  MR_Word parse_tree__prog_type_subst__V_22_22;
#line 336 "prog_type_subst.m"
                  MR_Word parse_tree__prog_type_subst__Kind0_29 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__prog_type_subst__Type0_4, (MR_Integer) 2)));
#line 336 "prog_type_subst.m"
                  MR_Word parse_tree__prog_type_subst__Kind_30;
#line 336 "prog_type_subst.m"
                  MR_Word parse_tree__prog_type_subst__Args0_31 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__prog_type_subst__Type0_4, (MR_Integer) 1)));

#line 337 "prog_type_subst.m"
                  {
#line 337 "prog_type_subst.m"
                    parse_tree__prog_type_subst__apply_type_args_to_kind_3_p_0(parse_tree__prog_type_subst__Kind0_29, parse_tree__prog_type_subst__Args_5, &parse_tree__prog_type_subst__Kind_30);
                  }
#line 338 "prog_type_subst.m"
                  {
#line 338 "prog_type_subst.m"
                    parse_tree__prog_type_subst__V_22_22 = mercury__list__f_43_43_2_f_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0, parse_tree__prog_type_subst__Args0_31, parse_tree__prog_type_subst__Args_5);
                  }
#line 338 "prog_type_subst.m"
                  {
#line 338 "prog_type_subst.m"
                    MR_Word base;
#line 338 "prog_type_subst.m"
                    base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
#line 338 "prog_type_subst.m"
                    *parse_tree__prog_type_subst__Type_6 = base;
#line 338 "prog_type_subst.m"
                    MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 0));
#line 338 "prog_type_subst.m"
                    MR_hl_field(MR_mktag(3), base, 1) = ((MR_Box) (parse_tree__prog_type_subst__V_22_22));
#line 338 "prog_type_subst.m"
                    MR_hl_field(MR_mktag(3), base, 2) = ((MR_Box) (parse_tree__prog_type_subst__Kind_30));
#line 338 "prog_type_subst.m"
                  }
#line 336 "prog_type_subst.m"
                }
#line 317 "prog_type_subst.m"
                break;
#line 317 "prog_type_subst.m"
              case (MR_Integer) 1:
#line 327 "prog_type_subst.m"
                {
#line 330 "prog_type_subst.m"
                  if ((parse_tree__prog_type_subst__Args_5 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 329 "prog_type_subst.m"
                    {
#line 329 "prog_type_subst.m"
                    }
#line 330 "prog_type_subst.m"
                  else
#line 331 "prog_type_subst.m"
                    {
#line 332 "prog_type_subst.m"
                      {
#line 332 "prog_type_subst.m"
                        mercury__require__unexpected_3_p_0((MR_String) "parse_tree.prog_type_subst", (MR_String) "predicate \140parse_tree.prog_type_subst.apply_type_args\'/3", (MR_String) "applied type args to builtin");
#line 332 "prog_type_subst.m"
                        return;
                      }
#line 331 "prog_type_subst.m"
                    }
#line 334 "prog_type_subst.m"
                  *parse_tree__prog_type_subst__Type_6 = parse_tree__prog_type_subst__Type0_4;
#line 327 "prog_type_subst.m"
                }
#line 317 "prog_type_subst.m"
                break;
#line 317 "prog_type_subst.m"
              case (MR_Integer) 2:
#line 340 "prog_type_subst.m"
                {
#line 340 "prog_type_subst.m"
                  MR_Word parse_tree__prog_type_subst__V_21_21;
#line 340 "prog_type_subst.m"
                  MR_Word parse_tree__prog_type_subst__TVar_32 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__prog_type_subst__Type0_4, (MR_Integer) 1)));
#line 340 "prog_type_subst.m"
                  MR_Word parse_tree__prog_type_subst__Kind0_33 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__prog_type_subst__Type0_4, (MR_Integer) 3)));
#line 340 "prog_type_subst.m"
                  MR_Word parse_tree__prog_type_subst__Kind_34;
#line 340 "prog_type_subst.m"
                  MR_Word parse_tree__prog_type_subst__Args0_35 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__prog_type_subst__Type0_4, (MR_Integer) 2)));

#line 341 "prog_type_subst.m"
                  {
#line 341 "prog_type_subst.m"
                    parse_tree__prog_type_subst__apply_type_args_to_kind_3_p_0(parse_tree__prog_type_subst__Kind0_33, parse_tree__prog_type_subst__Args_5, &parse_tree__prog_type_subst__Kind_34);
                  }
#line 342 "prog_type_subst.m"
                  {
#line 342 "prog_type_subst.m"
                    parse_tree__prog_type_subst__V_21_21 = mercury__list__f_43_43_2_f_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0, parse_tree__prog_type_subst__Args0_35, parse_tree__prog_type_subst__Args_5);
                  }
#line 342 "prog_type_subst.m"
                  {
#line 342 "prog_type_subst.m"
                    MR_Word base;
#line 342 "prog_type_subst.m"
                    base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL));
#line 342 "prog_type_subst.m"
                    *parse_tree__prog_type_subst__Type_6 = base;
#line 342 "prog_type_subst.m"
                    MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
#line 342 "prog_type_subst.m"
                    MR_hl_field(MR_mktag(3), base, 1) = ((MR_Box) (parse_tree__prog_type_subst__TVar_32));
#line 342 "prog_type_subst.m"
                    MR_hl_field(MR_mktag(3), base, 2) = ((MR_Box) (parse_tree__prog_type_subst__V_21_21));
#line 342 "prog_type_subst.m"
                    MR_hl_field(MR_mktag(3), base, 3) = ((MR_Box) (parse_tree__prog_type_subst__Kind_34));
#line 342 "prog_type_subst.m"
                  }
#line 340 "prog_type_subst.m"
                }
#line 317 "prog_type_subst.m"
                break;
#line 317 "prog_type_subst.m"
              case (MR_Integer) 3:
#line 344 "prog_type_subst.m"
                {
#line 344 "prog_type_subst.m"
                  MR_Word parse_tree__prog_type_subst__BaseType0_19 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__prog_type_subst__Type0_4, (MR_Integer) 1)));
#line 344 "prog_type_subst.m"
                  MR_Word parse_tree__prog_type_subst__V_20_20 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__prog_type_subst__Type0_4, (MR_Integer) 2)));

#line 348 "prog_type_subst.m"
                  /* direct tailcall eliminated */
#line 348 "prog_type_subst.m"
                  {
#line 348 "prog_type_subst.m"
                    MR_Word parse_tree__prog_type_subst__Type0__tmp_copy_4 = parse_tree__prog_type_subst__BaseType0_19;

#line 348 "prog_type_subst.m"
                    parse_tree__prog_type_subst__Type0_4 = parse_tree__prog_type_subst__Type0__tmp_copy_4;
#line 348 "prog_type_subst.m"
                  }
#line 348 "prog_type_subst.m"
                  continue;
#line 344 "prog_type_subst.m"
                }
#line 317 "prog_type_subst.m"
                break;
#line 317 "prog_type_subst.m"
            }
#line 317 "prog_type_subst.m"
            break;
#line 317 "prog_type_subst.m"
        }
#line 317 "prog_type_subst.m"
      }
#line 317 "prog_type_subst.m"
      break;
#line 317 "prog_type_subst.m"
    }
#line 312 "prog_type_subst.m"
}

#line 123 "prog_type_subst.m"
static void MR_CALL 
parse_tree__prog_type_subst__apply_variable_renaming_to_tvar_kind_map_2_5_p_0(
#line 123 "prog_type_subst.m"
  MR_Word parse_tree__prog_type_subst__Renaming_6,
#line 123 "prog_type_subst.m"
  MR_Word parse_tree__prog_type_subst__TVar0_7,
#line 123 "prog_type_subst.m"
  MR_Word parse_tree__prog_type_subst__Kind_8,
#line 123 "prog_type_subst.m"
  MR_Word parse_tree__prog_type_subst__STATE_VARIABLE_KindMap_0_11,
#line 123 "prog_type_subst.m"
  MR_Word * parse_tree__prog_type_subst__STATE_VARIABLE_KindMap_12)
#line 123 "prog_type_subst.m"
{
#line 126 "prog_type_subst.m"
  {
#line 126 "prog_type_subst.m"
    MR_bool parse_tree__prog_type_subst__succeeded;
#line 126 "prog_type_subst.m"
    MR_Word parse_tree__prog_type_subst__TVar_10;
#line 135 "prog_type_subst.m"
    MR_Word parse_tree__prog_type_subst__TVar1_19;
#line 133 "prog_type_subst.m"
    MR_Word parse_tree__prog_type_subst__TypeInfo_8_20 = (MR_Word) &parse_tree__prog_type_subst_scalar_common_1[0];
#line 133 "prog_type_subst.m"
    MR_Box parse_tree__prog_type_subst__conv0_TVar1_19;

#line 133 "prog_type_subst.m"
    {
#line 133 "prog_type_subst.m"
      parse_tree__prog_type_subst__succeeded = mercury__map__search_3_p_0(parse_tree__prog_type_subst__TypeInfo_8_20, parse_tree__prog_type_subst__TypeInfo_8_20, parse_tree__prog_type_subst__Renaming_6, ((MR_Box) (parse_tree__prog_type_subst__TVar0_7)), &parse_tree__prog_type_subst__conv0_TVar1_19);
    }
#line 133 "prog_type_subst.m"
    if (parse_tree__prog_type_subst__succeeded)
#line 133 "prog_type_subst.m"
      {
#line 133 "prog_type_subst.m"
        parse_tree__prog_type_subst__TVar1_19 = ((MR_Word) parse_tree__prog_type_subst__conv0_TVar1_19);
#line 133 "prog_type_subst.m"
        parse_tree__prog_type_subst__succeeded = MR_TRUE;
#line 133 "prog_type_subst.m"
      }
#line 135 "prog_type_subst.m"
    if (parse_tree__prog_type_subst__succeeded)
#line 134 "prog_type_subst.m"
      parse_tree__prog_type_subst__TVar_10 = parse_tree__prog_type_subst__TVar1_19;
#line 135 "prog_type_subst.m"
    else
#line 136 "prog_type_subst.m"
      parse_tree__prog_type_subst__TVar_10 = parse_tree__prog_type_subst__TVar0_7;
#line 128 "prog_type_subst.m"
    {
#line 128 "prog_type_subst.m"
      mercury__map__det_insert_4_p_0((MR_Word) &parse_tree__prog_type_subst_scalar_common_1[0], (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_kind_0, ((MR_Box) (parse_tree__prog_type_subst__TVar_10)), ((MR_Box) (parse_tree__prog_type_subst__Kind_8)), parse_tree__prog_type_subst__STATE_VARIABLE_KindMap_0_11, parse_tree__prog_type_subst__STATE_VARIABLE_KindMap_12);
    }
#line 126 "prog_type_subst.m"
  }
#line 123 "prog_type_subst.m"
}

#line 413 "prog_type_subst.m"
static void MR_CALL 
parse_tree__prog_type_subst__apply_rec_subst_to_prog_constraints_3_p_0_1(
#line 413 "prog_type_subst.m"
  MR_Box parse_tree__prog_type_subst__closure_arg,
#line 413 "prog_type_subst.m"
  MR_Box parse_tree__prog_type_subst__wrapper_arg_1,
#line 413 "prog_type_subst.m"
  MR_Box * parse_tree__prog_type_subst__wrapper_arg_2)
#line 413 "prog_type_subst.m"
{
#line 413 "prog_type_subst.m"
  {
#line 413 "prog_type_subst.m"
    MR_Box parse_tree__prog_type_subst__closure = parse_tree__prog_type_subst__closure_arg;
#line 413 "prog_type_subst.m"
    MR_Word parse_tree__prog_type_subst__conv0_STATE_VARIABLE_Constraint_10;

#line 413 "prog_type_subst.m"
    {
#line 413 "prog_type_subst.m"
      parse_tree__prog_type_subst__apply_rec_subst_to_prog_constraint_3_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_type_subst__closure, (MR_Integer) 3))), ((MR_Word) parse_tree__prog_type_subst__wrapper_arg_1), &parse_tree__prog_type_subst__conv0_STATE_VARIABLE_Constraint_10);
    }
#line 413 "prog_type_subst.m"
    *parse_tree__prog_type_subst__wrapper_arg_2 = ((MR_Box) (parse_tree__prog_type_subst__conv0_STATE_VARIABLE_Constraint_10));
#line 413 "prog_type_subst.m"
  }
#line 413 "prog_type_subst.m"
}

#line 105 "prog_type_subst.m"
void MR_CALL 
parse_tree__prog_type_subst__apply_rec_subst_to_prog_constraints_3_p_0(
#line 105 "prog_type_subst.m"
  MR_Word parse_tree__prog_type_subst__Subst_4,
#line 105 "prog_type_subst.m"
  MR_Word parse_tree__prog_type_subst__STATE_VARIABLE_Constraints_0_10,
#line 105 "prog_type_subst.m"
  MR_Word * parse_tree__prog_type_subst__STATE_VARIABLE_Constraints_11)
#line 105 "prog_type_subst.m"
{
#line 432 "prog_type_subst.m"
  {
#line 432 "prog_type_subst.m"
    MR_bool parse_tree__prog_type_subst__succeeded;
#line 432 "prog_type_subst.m"
    MR_Word parse_tree__prog_type_subst__TypeCtorInfo_12_21;
#line 432 "prog_type_subst.m"
    MR_Word parse_tree__prog_type_subst__TypeCtorInfo_12_30;
#line 432 "prog_type_subst.m"
    MR_Word parse_tree__prog_type_subst__UnivCs0_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_type_subst__STATE_VARIABLE_Constraints_0_10, (MR_Integer) 0)));
#line 432 "prog_type_subst.m"
    MR_Word parse_tree__prog_type_subst__ExistCs0_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_type_subst__STATE_VARIABLE_Constraints_0_10, (MR_Integer) 1)));
#line 432 "prog_type_subst.m"
    MR_Word parse_tree__prog_type_subst__UnivCs_8;
#line 432 "prog_type_subst.m"
    MR_Word parse_tree__prog_type_subst__ExistCs_9;
#line 432 "prog_type_subst.m"
    MR_Word parse_tree__prog_type_subst__V_17_17;

#line 413 "prog_type_subst.m"
    {
#line 413 "prog_type_subst.m"
      parse_tree__prog_type_subst__V_17_17 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
#line 413 "prog_type_subst.m"
      MR_hl_field(MR_mktag(0), parse_tree__prog_type_subst__V_17_17, 0) = ((MR_Box) (&parse_tree__prog_type_subst_scalar_common_4[4]));
#line 413 "prog_type_subst.m"
      MR_hl_field(MR_mktag(0), parse_tree__prog_type_subst__V_17_17, 1) = ((MR_Box) (parse_tree__prog_type_subst__apply_rec_subst_to_prog_constraints_3_p_0_1));
#line 413 "prog_type_subst.m"
      MR_hl_field(MR_mktag(0), parse_tree__prog_type_subst__V_17_17, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 413 "prog_type_subst.m"
      MR_hl_field(MR_mktag(0), parse_tree__prog_type_subst__V_17_17, 3) = ((MR_Box) (parse_tree__prog_type_subst__Subst_4));
#line 413 "prog_type_subst.m"
    }
#line 1053 "parse_tree.prog_type_subst.c"
    parse_tree__prog_type_subst__TypeCtorInfo_12_21 = (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_constraint_0;
#line 413 "prog_type_subst.m"
    {
#line 413 "prog_type_subst.m"
      mercury__list__map_3_p_0(parse_tree__prog_type_subst__TypeCtorInfo_12_21, parse_tree__prog_type_subst__TypeCtorInfo_12_21, parse_tree__prog_type_subst__V_17_17, parse_tree__prog_type_subst__UnivCs0_6, &parse_tree__prog_type_subst__UnivCs_8);
    }
#line 1060 "parse_tree.prog_type_subst.c"
    parse_tree__prog_type_subst__TypeCtorInfo_12_30 = (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_constraint_0;
#line 413 "prog_type_subst.m"
    {
#line 413 "prog_type_subst.m"
      mercury__list__map_3_p_0(parse_tree__prog_type_subst__TypeCtorInfo_12_30, parse_tree__prog_type_subst__TypeCtorInfo_12_30, parse_tree__prog_type_subst__V_17_17, parse_tree__prog_type_subst__ExistCs0_7, &parse_tree__prog_type_subst__ExistCs_9);
    }
#line 436 "prog_type_subst.m"
    {
#line 436 "prog_type_subst.m"
      MR_Word base;
#line 436 "prog_type_subst.m"
      base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 436 "prog_type_subst.m"
      *parse_tree__prog_type_subst__STATE_VARIABLE_Constraints_11 = base;
#line 436 "prog_type_subst.m"
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (parse_tree__prog_type_subst__UnivCs_8));
#line 436 "prog_type_subst.m"
      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (parse_tree__prog_type_subst__ExistCs_9));
#line 436 "prog_type_subst.m"
    }
#line 432 "prog_type_subst.m"
  }
#line 105 "prog_type_subst.m"
}

#line 410 "prog_type_subst.m"
static void MR_CALL 
parse_tree__prog_type_subst__apply_subst_to_prog_constraints_3_p_0_1(
#line 410 "prog_type_subst.m"
  MR_Box parse_tree__prog_type_subst__closure_arg,
#line 410 "prog_type_subst.m"
  MR_Box parse_tree__prog_type_subst__wrapper_arg_1,
#line 410 "prog_type_subst.m"
  MR_Box * parse_tree__prog_type_subst__wrapper_arg_2)
#line 410 "prog_type_subst.m"
{
#line 410 "prog_type_subst.m"
  {
#line 410 "prog_type_subst.m"
    MR_Box parse_tree__prog_type_subst__closure = parse_tree__prog_type_subst__closure_arg;
#line 410 "prog_type_subst.m"
    MR_Word parse_tree__prog_type_subst__conv0_STATE_VARIABLE_Constraint_10;

#line 410 "prog_type_subst.m"
    {
#line 410 "prog_type_subst.m"
      parse_tree__prog_type_subst__apply_subst_to_prog_constraint_3_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_type_subst__closure, (MR_Integer) 3))), ((MR_Word) parse_tree__prog_type_subst__wrapper_arg_1), &parse_tree__prog_type_subst__conv0_STATE_VARIABLE_Constraint_10);
    }
#line 410 "prog_type_subst.m"
    *parse_tree__prog_type_subst__wrapper_arg_2 = ((MR_Box) (parse_tree__prog_type_subst__conv0_STATE_VARIABLE_Constraint_10));
#line 410 "prog_type_subst.m"
  }
#line 410 "prog_type_subst.m"
}

#line 102 "prog_type_subst.m"
void MR_CALL 
parse_tree__prog_type_subst__apply_subst_to_prog_constraints_3_p_0(
#line 102 "prog_type_subst.m"
  MR_Word parse_tree__prog_type_subst__Subst_4,
#line 102 "prog_type_subst.m"
  MR_Word parse_tree__prog_type_subst__HeadVar__2_2,
#line 102 "prog_type_subst.m"
  MR_Word * parse_tree__prog_type_subst__HeadVar__3_3)
#line 102 "prog_type_subst.m"
{
#line 427 "prog_type_subst.m"
  {
#line 427 "prog_type_subst.m"
    MR_bool parse_tree__prog_type_subst__succeeded;
#line 427 "prog_type_subst.m"
    MR_Word parse_tree__prog_type_subst__TypeCtorInfo_12_17;
#line 427 "prog_type_subst.m"
    MR_Word parse_tree__prog_type_subst__TypeCtorInfo_12_26;
#line 427 "prog_type_subst.m"
    MR_Word parse_tree__prog_type_subst__UniversalCs0_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_type_subst__HeadVar__2_2, (MR_Integer) 0)));
#line 427 "prog_type_subst.m"
    MR_Word parse_tree__prog_type_subst__ExistentialCs0_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_type_subst__HeadVar__2_2, (MR_Integer) 1)));
#line 427 "prog_type_subst.m"
    MR_Word parse_tree__prog_type_subst__UniversalCs_7;
#line 427 "prog_type_subst.m"
    MR_Word parse_tree__prog_type_subst__ExistentialCs_8;
#line 427 "prog_type_subst.m"
    MR_Word parse_tree__prog_type_subst__V_13_13;

#line 410 "prog_type_subst.m"
    {
#line 410 "prog_type_subst.m"
      parse_tree__prog_type_subst__V_13_13 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
#line 410 "prog_type_subst.m"
      MR_hl_field(MR_mktag(0), parse_tree__prog_type_subst__V_13_13, 0) = ((MR_Box) (&parse_tree__prog_type_subst_scalar_common_4[4]));
#line 410 "prog_type_subst.m"
      MR_hl_field(MR_mktag(0), parse_tree__prog_type_subst__V_13_13, 1) = ((MR_Box) (parse_tree__prog_type_subst__apply_subst_to_prog_constraints_3_p_0_1));
#line 410 "prog_type_subst.m"
      MR_hl_field(MR_mktag(0), parse_tree__prog_type_subst__V_13_13, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 410 "prog_type_subst.m"
      MR_hl_field(MR_mktag(0), parse_tree__prog_type_subst__V_13_13, 3) = ((MR_Box) (parse_tree__prog_type_subst__Subst_4));
#line 410 "prog_type_subst.m"
    }
#line 1160 "parse_tree.prog_type_subst.c"
    parse_tree__prog_type_subst__TypeCtorInfo_12_17 = (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_constraint_0;
#line 410 "prog_type_subst.m"
    {
#line 410 "prog_type_subst.m"
      mercury__list__map_3_p_0(parse_tree__prog_type_subst__TypeCtorInfo_12_17, parse_tree__prog_type_subst__TypeCtorInfo_12_17, parse_tree__prog_type_subst__V_13_13, parse_tree__prog_type_subst__UniversalCs0_5, &parse_tree__prog_type_subst__UniversalCs_7);
    }
#line 1167 "parse_tree.prog_type_subst.c"
    parse_tree__prog_type_subst__TypeCtorInfo_12_26 = (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_constraint_0;
#line 410 "prog_type_subst.m"
    {
#line 410 "prog_type_subst.m"
      mercury__list__map_3_p_0(parse_tree__prog_type_subst__TypeCtorInfo_12_26, parse_tree__prog_type_subst__TypeCtorInfo_12_26, parse_tree__prog_type_subst__V_13_13, parse_tree__prog_type_subst__ExistentialCs0_6, &parse_tree__prog_type_subst__ExistentialCs_8);
    }
#line 427 "prog_type_subst.m"
    {
#line 427 "prog_type_subst.m"
      MR_Word base;
#line 427 "prog_type_subst.m"
      base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 427 "prog_type_subst.m"
      *parse_tree__prog_type_subst__HeadVar__3_3 = base;
#line 427 "prog_type_subst.m"
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (parse_tree__prog_type_subst__UniversalCs_7));
#line 427 "prog_type_subst.m"
      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (parse_tree__prog_type_subst__ExistentialCs_8));
#line 427 "prog_type_subst.m"
    }
#line 427 "prog_type_subst.m"
  }
#line 102 "prog_type_subst.m"
}

#line 406 "prog_type_subst.m"
static void MR_CALL 
parse_tree__prog_type_subst__apply_variable_renaming_to_prog_constraints_3_p_0_1(
#line 406 "prog_type_subst.m"
  MR_Box parse_tree__prog_type_subst__closure_arg,
#line 406 "prog_type_subst.m"
  MR_Box parse_tree__prog_type_subst__wrapper_arg_1,
#line 406 "prog_type_subst.m"
  MR_Box * parse_tree__prog_type_subst__wrapper_arg_2)
#line 406 "prog_type_subst.m"
{
#line 406 "prog_type_subst.m"
  {
#line 406 "prog_type_subst.m"
    MR_Box parse_tree__prog_type_subst__closure = parse_tree__prog_type_subst__closure_arg;
#line 406 "prog_type_subst.m"
    MR_Word parse_tree__prog_type_subst__conv0_STATE_VARIABLE_Constraint_10;

#line 406 "prog_type_subst.m"
    {
#line 406 "prog_type_subst.m"
      parse_tree__prog_type_subst__apply_variable_renaming_to_prog_constraint_3_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_type_subst__closure, (MR_Integer) 3))), ((MR_Word) parse_tree__prog_type_subst__wrapper_arg_1), &parse_tree__prog_type_subst__conv0_STATE_VARIABLE_Constraint_10);
    }
#line 406 "prog_type_subst.m"
    *parse_tree__prog_type_subst__wrapper_arg_2 = ((MR_Box) (parse_tree__prog_type_subst__conv0_STATE_VARIABLE_Constraint_10));
#line 406 "prog_type_subst.m"
  }
#line 406 "prog_type_subst.m"
}

#line 99 "prog_type_subst.m"
void MR_CALL 
parse_tree__prog_type_subst__apply_variable_renaming_to_prog_constraints_3_p_0(
#line 99 "prog_type_subst.m"
  MR_Word parse_tree__prog_type_subst__Renaming_4,
#line 99 "prog_type_subst.m"
  MR_Word parse_tree__prog_type_subst__STATE_VARIABLE_Constraints_0_10,
#line 99 "prog_type_subst.m"
  MR_Word * parse_tree__prog_type_subst__STATE_VARIABLE_Constraints_11)
#line 99 "prog_type_subst.m"
{
#line 417 "prog_type_subst.m"
  {
#line 417 "prog_type_subst.m"
    MR_bool parse_tree__prog_type_subst__succeeded;
#line 417 "prog_type_subst.m"
    MR_Word parse_tree__prog_type_subst__TypeCtorInfo_12_21;
#line 417 "prog_type_subst.m"
    MR_Word parse_tree__prog_type_subst__TypeCtorInfo_12_30;
#line 417 "prog_type_subst.m"
    MR_Word parse_tree__prog_type_subst__UnivConstraints0_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_type_subst__STATE_VARIABLE_Constraints_0_10, (MR_Integer) 0)));
#line 417 "prog_type_subst.m"
    MR_Word parse_tree__prog_type_subst__ExistConstraints0_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_type_subst__STATE_VARIABLE_Constraints_0_10, (MR_Integer) 1)));
#line 417 "prog_type_subst.m"
    MR_Word parse_tree__prog_type_subst__UnivConstraints_8;
#line 417 "prog_type_subst.m"
    MR_Word parse_tree__prog_type_subst__ExistConstraints_9;
#line 417 "prog_type_subst.m"
    MR_Word parse_tree__prog_type_subst__V_17_17;

#line 406 "prog_type_subst.m"
    {
#line 406 "prog_type_subst.m"
      parse_tree__prog_type_subst__V_17_17 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
#line 406 "prog_type_subst.m"
      MR_hl_field(MR_mktag(0), parse_tree__prog_type_subst__V_17_17, 0) = ((MR_Box) (&parse_tree__prog_type_subst_scalar_common_4[3]));
#line 406 "prog_type_subst.m"
      MR_hl_field(MR_mktag(0), parse_tree__prog_type_subst__V_17_17, 1) = ((MR_Box) (parse_tree__prog_type_subst__apply_variable_renaming_to_prog_constraints_3_p_0_1));
#line 406 "prog_type_subst.m"
      MR_hl_field(MR_mktag(0), parse_tree__prog_type_subst__V_17_17, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 406 "prog_type_subst.m"
      MR_hl_field(MR_mktag(0), parse_tree__prog_type_subst__V_17_17, 3) = ((MR_Box) (parse_tree__prog_type_subst__Renaming_4));
#line 406 "prog_type_subst.m"
    }
#line 1267 "parse_tree.prog_type_subst.c"
    parse_tree__prog_type_subst__TypeCtorInfo_12_21 = (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_constraint_0;
#line 406 "prog_type_subst.m"
    {
#line 406 "prog_type_subst.m"
      mercury__list__map_3_p_0(parse_tree__prog_type_subst__TypeCtorInfo_12_21, parse_tree__prog_type_subst__TypeCtorInfo_12_21, parse_tree__prog_type_subst__V_17_17, parse_tree__prog_type_subst__UnivConstraints0_6, &parse_tree__prog_type_subst__UnivConstraints_8);
    }
#line 1274 "parse_tree.prog_type_subst.c"
    parse_tree__prog_type_subst__TypeCtorInfo_12_30 = (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_constraint_0;
#line 406 "prog_type_subst.m"
    {
#line 406 "prog_type_subst.m"
      mercury__list__map_3_p_0(parse_tree__prog_type_subst__TypeCtorInfo_12_30, parse_tree__prog_type_subst__TypeCtorInfo_12_30, parse_tree__prog_type_subst__V_17_17, parse_tree__prog_type_subst__ExistConstraints0_7, &parse_tree__prog_type_subst__ExistConstraints_9);
    }
#line 423 "prog_type_subst.m"
    {
#line 423 "prog_type_subst.m"
      MR_Word base;
#line 423 "prog_type_subst.m"
      base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 423 "prog_type_subst.m"
      *parse_tree__prog_type_subst__STATE_VARIABLE_Constraints_11 = base;
#line 423 "prog_type_subst.m"
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (parse_tree__prog_type_subst__UnivConstraints_8));
#line 423 "prog_type_subst.m"
      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (parse_tree__prog_type_subst__ExistConstraints_9));
#line 423 "prog_type_subst.m"
    }
#line 417 "prog_type_subst.m"
  }
#line 99 "prog_type_subst.m"
}

#line 413 "prog_type_subst.m"
static void MR_CALL 
parse_tree__prog_type_subst__apply_rec_subst_to_prog_constraint_list_3_p_0_1(
#line 413 "prog_type_subst.m"
  MR_Box parse_tree__prog_type_subst__closure_arg,
#line 413 "prog_type_subst.m"
  MR_Box parse_tree__prog_type_subst__wrapper_arg_1,
#line 413 "prog_type_subst.m"
  MR_Box * parse_tree__prog_type_subst__wrapper_arg_2)
#line 413 "prog_type_subst.m"
{
#line 413 "prog_type_subst.m"
  {
#line 413 "prog_type_subst.m"
    MR_Box parse_tree__prog_type_subst__closure = parse_tree__prog_type_subst__closure_arg;
#line 413 "prog_type_subst.m"
    MR_Word parse_tree__prog_type_subst__conv0_STATE_VARIABLE_Constraint_10;

#line 413 "prog_type_subst.m"
    {
#line 413 "prog_type_subst.m"
      parse_tree__prog_type_subst__apply_rec_subst_to_prog_constraint_3_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_type_subst__closure, (MR_Integer) 3))), ((MR_Word) parse_tree__prog_type_subst__wrapper_arg_1), &parse_tree__prog_type_subst__conv0_STATE_VARIABLE_Constraint_10);
    }
#line 413 "prog_type_subst.m"
    *parse_tree__prog_type_subst__wrapper_arg_2 = ((MR_Box) (parse_tree__prog_type_subst__conv0_STATE_VARIABLE_Constraint_10));
#line 413 "prog_type_subst.m"
  }
#line 413 "prog_type_subst.m"
}

#line 94 "prog_type_subst.m"
void MR_CALL 
parse_tree__prog_type_subst__apply_rec_subst_to_prog_constraint_list_3_p_0(
#line 94 "prog_type_subst.m"
  MR_Word parse_tree__prog_type_subst__Subst_4,
#line 94 "prog_type_subst.m"
  MR_Word parse_tree__prog_type_subst__STATE_VARIABLE_Constraints_0_6,
#line 94 "prog_type_subst.m"
  MR_Word * parse_tree__prog_type_subst__STATE_VARIABLE_Constraints_7)
#line 94 "prog_type_subst.m"
{
#line 412 "prog_type_subst.m"
  {
#line 412 "prog_type_subst.m"
    MR_bool parse_tree__prog_type_subst__succeeded;
#line 412 "prog_type_subst.m"
    MR_Word parse_tree__prog_type_subst__TypeCtorInfo_12_12;
#line 412 "prog_type_subst.m"
    MR_Word parse_tree__prog_type_subst__V_8_8;

#line 413 "prog_type_subst.m"
    {
#line 413 "prog_type_subst.m"
      parse_tree__prog_type_subst__V_8_8 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
#line 413 "prog_type_subst.m"
      MR_hl_field(MR_mktag(0), parse_tree__prog_type_subst__V_8_8, 0) = ((MR_Box) (&parse_tree__prog_type_subst_scalar_common_4[4]));
#line 413 "prog_type_subst.m"
      MR_hl_field(MR_mktag(0), parse_tree__prog_type_subst__V_8_8, 1) = ((MR_Box) (parse_tree__prog_type_subst__apply_rec_subst_to_prog_constraint_list_3_p_0_1));
#line 413 "prog_type_subst.m"
      MR_hl_field(MR_mktag(0), parse_tree__prog_type_subst__V_8_8, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 413 "prog_type_subst.m"
      MR_hl_field(MR_mktag(0), parse_tree__prog_type_subst__V_8_8, 3) = ((MR_Box) (parse_tree__prog_type_subst__Subst_4));
#line 413 "prog_type_subst.m"
    }
#line 1364 "parse_tree.prog_type_subst.c"
    parse_tree__prog_type_subst__TypeCtorInfo_12_12 = (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_constraint_0;
#line 413 "prog_type_subst.m"
    {
#line 413 "prog_type_subst.m"
      mercury__list__map_3_p_0(parse_tree__prog_type_subst__TypeCtorInfo_12_12, parse_tree__prog_type_subst__TypeCtorInfo_12_12, parse_tree__prog_type_subst__V_8_8, parse_tree__prog_type_subst__STATE_VARIABLE_Constraints_0_6, parse_tree__prog_type_subst__STATE_VARIABLE_Constraints_7);
    }
#line 412 "prog_type_subst.m"
  }
#line 94 "prog_type_subst.m"
}

#line 410 "prog_type_subst.m"
static void MR_CALL 
parse_tree__prog_type_subst__apply_subst_to_prog_constraint_list_3_p_0_1(
#line 410 "prog_type_subst.m"
  MR_Box parse_tree__prog_type_subst__closure_arg,
#line 410 "prog_type_subst.m"
  MR_Box parse_tree__prog_type_subst__wrapper_arg_1,
#line 410 "prog_type_subst.m"
  MR_Box * parse_tree__prog_type_subst__wrapper_arg_2)
#line 410 "prog_type_subst.m"
{
#line 410 "prog_type_subst.m"
  {
#line 410 "prog_type_subst.m"
    MR_Box parse_tree__prog_type_subst__closure = parse_tree__prog_type_subst__closure_arg;
#line 410 "prog_type_subst.m"
    MR_Word parse_tree__prog_type_subst__conv0_STATE_VARIABLE_Constraint_10;

#line 410 "prog_type_subst.m"
    {
#line 410 "prog_type_subst.m"
      parse_tree__prog_type_subst__apply_subst_to_prog_constraint_3_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_type_subst__closure, (MR_Integer) 3))), ((MR_Word) parse_tree__prog_type_subst__wrapper_arg_1), &parse_tree__prog_type_subst__conv0_STATE_VARIABLE_Constraint_10);
    }
#line 410 "prog_type_subst.m"
    *parse_tree__prog_type_subst__wrapper_arg_2 = ((MR_Box) (parse_tree__prog_type_subst__conv0_STATE_VARIABLE_Constraint_10));
#line 410 "prog_type_subst.m"
  }
#line 410 "prog_type_subst.m"
}

#line 91 "prog_type_subst.m"
void MR_CALL 
parse_tree__prog_type_subst__apply_subst_to_prog_constraint_list_3_p_0(
#line 91 "prog_type_subst.m"
  MR_Word parse_tree__prog_type_subst__Subst_4,
#line 91 "prog_type_subst.m"
  MR_Word parse_tree__prog_type_subst__STATE_VARIABLE_Constraints_0_6,
#line 91 "prog_type_subst.m"
  MR_Word * parse_tree__prog_type_subst__STATE_VARIABLE_Constraints_7)
#line 91 "prog_type_subst.m"
{
#line 409 "prog_type_subst.m"
  {
#line 409 "prog_type_subst.m"
    MR_bool parse_tree__prog_type_subst__succeeded;
#line 409 "prog_type_subst.m"
    MR_Word parse_tree__prog_type_subst__TypeCtorInfo_12_12;
#line 409 "prog_type_subst.m"
    MR_Word parse_tree__prog_type_subst__V_8_8;

#line 410 "prog_type_subst.m"
    {
#line 410 "prog_type_subst.m"
      parse_tree__prog_type_subst__V_8_8 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
#line 410 "prog_type_subst.m"
      MR_hl_field(MR_mktag(0), parse_tree__prog_type_subst__V_8_8, 0) = ((MR_Box) (&parse_tree__prog_type_subst_scalar_common_4[4]));
#line 410 "prog_type_subst.m"
      MR_hl_field(MR_mktag(0), parse_tree__prog_type_subst__V_8_8, 1) = ((MR_Box) (parse_tree__prog_type_subst__apply_subst_to_prog_constraint_list_3_p_0_1));
#line 410 "prog_type_subst.m"
      MR_hl_field(MR_mktag(0), parse_tree__prog_type_subst__V_8_8, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 410 "prog_type_subst.m"
      MR_hl_field(MR_mktag(0), parse_tree__prog_type_subst__V_8_8, 3) = ((MR_Box) (parse_tree__prog_type_subst__Subst_4));
#line 410 "prog_type_subst.m"
    }
#line 1440 "parse_tree.prog_type_subst.c"
    parse_tree__prog_type_subst__TypeCtorInfo_12_12 = (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_constraint_0;
#line 410 "prog_type_subst.m"
    {
#line 410 "prog_type_subst.m"
      mercury__list__map_3_p_0(parse_tree__prog_type_subst__TypeCtorInfo_12_12, parse_tree__prog_type_subst__TypeCtorInfo_12_12, parse_tree__prog_type_subst__V_8_8, parse_tree__prog_type_subst__STATE_VARIABLE_Constraints_0_6, parse_tree__prog_type_subst__STATE_VARIABLE_Constraints_7);
    }
#line 409 "prog_type_subst.m"
  }
#line 91 "prog_type_subst.m"
}

#line 406 "prog_type_subst.m"
static void MR_CALL 
parse_tree__prog_type_subst__apply_variable_renaming_to_prog_constraint_list_3_p_0_1(
#line 406 "prog_type_subst.m"
  MR_Box parse_tree__prog_type_subst__closure_arg,
#line 406 "prog_type_subst.m"
  MR_Box parse_tree__prog_type_subst__wrapper_arg_1,
#line 406 "prog_type_subst.m"
  MR_Box * parse_tree__prog_type_subst__wrapper_arg_2)
#line 406 "prog_type_subst.m"
{
#line 406 "prog_type_subst.m"
  {
#line 406 "prog_type_subst.m"
    MR_Box parse_tree__prog_type_subst__closure = parse_tree__prog_type_subst__closure_arg;
#line 406 "prog_type_subst.m"
    MR_Word parse_tree__prog_type_subst__conv0_STATE_VARIABLE_Constraint_10;

#line 406 "prog_type_subst.m"
    {
#line 406 "prog_type_subst.m"
      parse_tree__prog_type_subst__apply_variable_renaming_to_prog_constraint_3_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_type_subst__closure, (MR_Integer) 3))), ((MR_Word) parse_tree__prog_type_subst__wrapper_arg_1), &parse_tree__prog_type_subst__conv0_STATE_VARIABLE_Constraint_10);
    }
#line 406 "prog_type_subst.m"
    *parse_tree__prog_type_subst__wrapper_arg_2 = ((MR_Box) (parse_tree__prog_type_subst__conv0_STATE_VARIABLE_Constraint_10));
#line 406 "prog_type_subst.m"
  }
#line 406 "prog_type_subst.m"
}

#line 88 "prog_type_subst.m"
void MR_CALL 
parse_tree__prog_type_subst__apply_variable_renaming_to_prog_constraint_list_3_p_0(
#line 88 "prog_type_subst.m"
  MR_Word parse_tree__prog_type_subst__Renaming_4,
#line 88 "prog_type_subst.m"
  MR_Word parse_tree__prog_type_subst__STATE_VARIABLE_Constraints_0_6,
#line 88 "prog_type_subst.m"
  MR_Word * parse_tree__prog_type_subst__STATE_VARIABLE_Constraints_7)
#line 88 "prog_type_subst.m"
{
#line 405 "prog_type_subst.m"
  {
#line 405 "prog_type_subst.m"
    MR_bool parse_tree__prog_type_subst__succeeded;
#line 405 "prog_type_subst.m"
    MR_Word parse_tree__prog_type_subst__TypeCtorInfo_12_12;
#line 405 "prog_type_subst.m"
    MR_Word parse_tree__prog_type_subst__V_8_8;

#line 406 "prog_type_subst.m"
    {
#line 406 "prog_type_subst.m"
      parse_tree__prog_type_subst__V_8_8 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
#line 406 "prog_type_subst.m"
      MR_hl_field(MR_mktag(0), parse_tree__prog_type_subst__V_8_8, 0) = ((MR_Box) (&parse_tree__prog_type_subst_scalar_common_4[3]));
#line 406 "prog_type_subst.m"
      MR_hl_field(MR_mktag(0), parse_tree__prog_type_subst__V_8_8, 1) = ((MR_Box) (parse_tree__prog_type_subst__apply_variable_renaming_to_prog_constraint_list_3_p_0_1));
#line 406 "prog_type_subst.m"
      MR_hl_field(MR_mktag(0), parse_tree__prog_type_subst__V_8_8, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 406 "prog_type_subst.m"
      MR_hl_field(MR_mktag(0), parse_tree__prog_type_subst__V_8_8, 3) = ((MR_Box) (parse_tree__prog_type_subst__Renaming_4));
#line 406 "prog_type_subst.m"
    }
#line 1516 "parse_tree.prog_type_subst.c"
    parse_tree__prog_type_subst__TypeCtorInfo_12_12 = (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_constraint_0;
#line 406 "prog_type_subst.m"
    {
#line 406 "prog_type_subst.m"
      mercury__list__map_3_p_0(parse_tree__prog_type_subst__TypeCtorInfo_12_12, parse_tree__prog_type_subst__TypeCtorInfo_12_12, parse_tree__prog_type_subst__V_8_8, parse_tree__prog_type_subst__STATE_VARIABLE_Constraints_0_6, parse_tree__prog_type_subst__STATE_VARIABLE_Constraints_7);
    }
#line 405 "prog_type_subst.m"
  }
#line 88 "prog_type_subst.m"
}

#line 308 "prog_type_subst.m"
static void MR_CALL 
parse_tree__prog_type_subst__apply_rec_subst_to_prog_constraint_3_p_0_1(
#line 308 "prog_type_subst.m"
  MR_Box parse_tree__prog_type_subst__closure_arg,
#line 308 "prog_type_subst.m"
  MR_Box parse_tree__prog_type_subst__wrapper_arg_1,
#line 308 "prog_type_subst.m"
  MR_Box * parse_tree__prog_type_subst__wrapper_arg_2)
#line 308 "prog_type_subst.m"
{
#line 308 "prog_type_subst.m"
  {
#line 308 "prog_type_subst.m"
    MR_Box parse_tree__prog_type_subst__closure = parse_tree__prog_type_subst__closure_arg;
#line 308 "prog_type_subst.m"
    MR_Word parse_tree__prog_type_subst__conv0_Type_6;

#line 308 "prog_type_subst.m"
    {
#line 308 "prog_type_subst.m"
      parse_tree__prog_type_subst__apply_rec_subst_to_type_3_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_type_subst__closure, (MR_Integer) 3))), ((MR_Word) parse_tree__prog_type_subst__wrapper_arg_1), &parse_tree__prog_type_subst__conv0_Type_6);
    }
#line 308 "prog_type_subst.m"
    *parse_tree__prog_type_subst__wrapper_arg_2 = ((MR_Box) (parse_tree__prog_type_subst__conv0_Type_6));
#line 308 "prog_type_subst.m"
  }
#line 308 "prog_type_subst.m"
}

#line 83 "prog_type_subst.m"
void MR_CALL 
parse_tree__prog_type_subst__apply_rec_subst_to_prog_constraint_3_p_0(
#line 83 "prog_type_subst.m"
  MR_Word parse_tree__prog_type_subst__Subst_4,
#line 83 "prog_type_subst.m"
  MR_Word parse_tree__prog_type_subst__STATE_VARIABLE_Constraint_0_9,
#line 83 "prog_type_subst.m"
  MR_Word * parse_tree__prog_type_subst__STATE_VARIABLE_Constraint_10)
#line 83 "prog_type_subst.m"
{
#line 398 "prog_type_subst.m"
  {
#line 398 "prog_type_subst.m"
    MR_bool parse_tree__prog_type_subst__succeeded;
#line 398 "prog_type_subst.m"
    MR_Word parse_tree__prog_type_subst__TypeCtorInfo_10_18;
#line 398 "prog_type_subst.m"
    MR_Word parse_tree__prog_type_subst__ClassName_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_type_subst__STATE_VARIABLE_Constraint_0_9, (MR_Integer) 0)));
#line 398 "prog_type_subst.m"
    MR_Word parse_tree__prog_type_subst__Types0_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_type_subst__STATE_VARIABLE_Constraint_0_9, (MR_Integer) 1)));
#line 398 "prog_type_subst.m"
    MR_Word parse_tree__prog_type_subst__Types_8;
#line 398 "prog_type_subst.m"
    MR_Word parse_tree__prog_type_subst__V_15_15;

#line 308 "prog_type_subst.m"
    {
#line 308 "prog_type_subst.m"
      parse_tree__prog_type_subst__V_15_15 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
#line 308 "prog_type_subst.m"
      MR_hl_field(MR_mktag(0), parse_tree__prog_type_subst__V_15_15, 0) = ((MR_Box) (&parse_tree__prog_type_subst_scalar_common_4[2]));
#line 308 "prog_type_subst.m"
      MR_hl_field(MR_mktag(0), parse_tree__prog_type_subst__V_15_15, 1) = ((MR_Box) (parse_tree__prog_type_subst__apply_rec_subst_to_prog_constraint_3_p_0_1));
#line 308 "prog_type_subst.m"
      MR_hl_field(MR_mktag(0), parse_tree__prog_type_subst__V_15_15, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 308 "prog_type_subst.m"
      MR_hl_field(MR_mktag(0), parse_tree__prog_type_subst__V_15_15, 3) = ((MR_Box) (parse_tree__prog_type_subst__Subst_4));
#line 308 "prog_type_subst.m"
    }
#line 1598 "parse_tree.prog_type_subst.c"
    parse_tree__prog_type_subst__TypeCtorInfo_10_18 = (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0;
#line 308 "prog_type_subst.m"
    {
#line 308 "prog_type_subst.m"
      mercury__list__map_3_p_0(parse_tree__prog_type_subst__TypeCtorInfo_10_18, parse_tree__prog_type_subst__TypeCtorInfo_10_18, parse_tree__prog_type_subst__V_15_15, parse_tree__prog_type_subst__Types0_7, &parse_tree__prog_type_subst__Types_8);
    }
#line 401 "prog_type_subst.m"
    {
#line 401 "prog_type_subst.m"
      MR_Word base;
#line 401 "prog_type_subst.m"
      base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 401 "prog_type_subst.m"
      *parse_tree__prog_type_subst__STATE_VARIABLE_Constraint_10 = base;
#line 401 "prog_type_subst.m"
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (parse_tree__prog_type_subst__ClassName_6));
#line 401 "prog_type_subst.m"
      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (parse_tree__prog_type_subst__Types_8));
#line 401 "prog_type_subst.m"
    }
#line 398 "prog_type_subst.m"
  }
#line 83 "prog_type_subst.m"
}

#line 305 "prog_type_subst.m"
static void MR_CALL 
parse_tree__prog_type_subst__apply_subst_to_prog_constraint_3_p_0_1(
#line 305 "prog_type_subst.m"
  MR_Box parse_tree__prog_type_subst__closure_arg,
#line 305 "prog_type_subst.m"
  MR_Box parse_tree__prog_type_subst__wrapper_arg_1,
#line 305 "prog_type_subst.m"
  MR_Box * parse_tree__prog_type_subst__wrapper_arg_2)
#line 305 "prog_type_subst.m"
{
#line 305 "prog_type_subst.m"
  {
#line 305 "prog_type_subst.m"
    MR_Box parse_tree__prog_type_subst__closure = parse_tree__prog_type_subst__closure_arg;
#line 305 "prog_type_subst.m"
    MR_Word parse_tree__prog_type_subst__conv0_Type_6;

#line 305 "prog_type_subst.m"
    {
#line 305 "prog_type_subst.m"
      parse_tree__prog_type_subst__apply_subst_to_type_3_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_type_subst__closure, (MR_Integer) 3))), ((MR_Word) parse_tree__prog_type_subst__wrapper_arg_1), &parse_tree__prog_type_subst__conv0_Type_6);
    }
#line 305 "prog_type_subst.m"
    *parse_tree__prog_type_subst__wrapper_arg_2 = ((MR_Box) (parse_tree__prog_type_subst__conv0_Type_6));
#line 305 "prog_type_subst.m"
  }
#line 305 "prog_type_subst.m"
}

#line 80 "prog_type_subst.m"
void MR_CALL 
parse_tree__prog_type_subst__apply_subst_to_prog_constraint_3_p_0(
#line 80 "prog_type_subst.m"
  MR_Word parse_tree__prog_type_subst__Subst_4,
#line 80 "prog_type_subst.m"
  MR_Word parse_tree__prog_type_subst__STATE_VARIABLE_Constraint_0_9,
#line 80 "prog_type_subst.m"
  MR_Word * parse_tree__prog_type_subst__STATE_VARIABLE_Constraint_10)
#line 80 "prog_type_subst.m"
{
#line 393 "prog_type_subst.m"
  {
#line 393 "prog_type_subst.m"
    MR_bool parse_tree__prog_type_subst__succeeded;
#line 393 "prog_type_subst.m"
    MR_Word parse_tree__prog_type_subst__TypeCtorInfo_10_18;
#line 393 "prog_type_subst.m"
    MR_Word parse_tree__prog_type_subst__ClassName_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_type_subst__STATE_VARIABLE_Constraint_0_9, (MR_Integer) 0)));
#line 393 "prog_type_subst.m"
    MR_Word parse_tree__prog_type_subst__Types0_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_type_subst__STATE_VARIABLE_Constraint_0_9, (MR_Integer) 1)));
#line 393 "prog_type_subst.m"
    MR_Word parse_tree__prog_type_subst__Types_8;
#line 393 "prog_type_subst.m"
    MR_Word parse_tree__prog_type_subst__V_15_15;

#line 305 "prog_type_subst.m"
    {
#line 305 "prog_type_subst.m"
      parse_tree__prog_type_subst__V_15_15 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
#line 305 "prog_type_subst.m"
      MR_hl_field(MR_mktag(0), parse_tree__prog_type_subst__V_15_15, 0) = ((MR_Box) (&parse_tree__prog_type_subst_scalar_common_4[2]));
#line 305 "prog_type_subst.m"
      MR_hl_field(MR_mktag(0), parse_tree__prog_type_subst__V_15_15, 1) = ((MR_Box) (parse_tree__prog_type_subst__apply_subst_to_prog_constraint_3_p_0_1));
#line 305 "prog_type_subst.m"
      MR_hl_field(MR_mktag(0), parse_tree__prog_type_subst__V_15_15, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 305 "prog_type_subst.m"
      MR_hl_field(MR_mktag(0), parse_tree__prog_type_subst__V_15_15, 3) = ((MR_Box) (parse_tree__prog_type_subst__Subst_4));
#line 305 "prog_type_subst.m"
    }
#line 1694 "parse_tree.prog_type_subst.c"
    parse_tree__prog_type_subst__TypeCtorInfo_10_18 = (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0;
#line 305 "prog_type_subst.m"
    {
#line 305 "prog_type_subst.m"
      mercury__list__map_3_p_0(parse_tree__prog_type_subst__TypeCtorInfo_10_18, parse_tree__prog_type_subst__TypeCtorInfo_10_18, parse_tree__prog_type_subst__V_15_15, parse_tree__prog_type_subst__Types0_7, &parse_tree__prog_type_subst__Types_8);
    }
#line 396 "prog_type_subst.m"
    {
#line 396 "prog_type_subst.m"
      MR_Word base;
#line 396 "prog_type_subst.m"
      base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 396 "prog_type_subst.m"
      *parse_tree__prog_type_subst__STATE_VARIABLE_Constraint_10 = base;
#line 396 "prog_type_subst.m"
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (parse_tree__prog_type_subst__ClassName_6));
#line 396 "prog_type_subst.m"
      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (parse_tree__prog_type_subst__Types_8));
#line 396 "prog_type_subst.m"
    }
#line 393 "prog_type_subst.m"
  }
#line 80 "prog_type_subst.m"
}

#line 302 "prog_type_subst.m"
static void MR_CALL 
parse_tree__prog_type_subst__apply_variable_renaming_to_prog_constraint_3_p_0_1(
#line 302 "prog_type_subst.m"
  MR_Box parse_tree__prog_type_subst__closure_arg,
#line 302 "prog_type_subst.m"
  MR_Box parse_tree__prog_type_subst__wrapper_arg_1,
#line 302 "prog_type_subst.m"
  MR_Box * parse_tree__prog_type_subst__wrapper_arg_2)
#line 302 "prog_type_subst.m"
{
#line 302 "prog_type_subst.m"
  {
#line 302 "prog_type_subst.m"
    MR_Box parse_tree__prog_type_subst__closure = parse_tree__prog_type_subst__closure_arg;
#line 302 "prog_type_subst.m"
    MR_Word parse_tree__prog_type_subst__conv0_Type_6;

#line 302 "prog_type_subst.m"
    {
#line 302 "prog_type_subst.m"
      parse_tree__prog_type_subst__apply_variable_renaming_to_type_3_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_type_subst__closure, (MR_Integer) 3))), ((MR_Word) parse_tree__prog_type_subst__wrapper_arg_1), &parse_tree__prog_type_subst__conv0_Type_6);
    }
#line 302 "prog_type_subst.m"
    *parse_tree__prog_type_subst__wrapper_arg_2 = ((MR_Box) (parse_tree__prog_type_subst__conv0_Type_6));
#line 302 "prog_type_subst.m"
  }
#line 302 "prog_type_subst.m"
}

#line 77 "prog_type_subst.m"
void MR_CALL 
parse_tree__prog_type_subst__apply_variable_renaming_to_prog_constraint_3_p_0(
#line 77 "prog_type_subst.m"
  MR_Word parse_tree__prog_type_subst__Renaming_4,
#line 77 "prog_type_subst.m"
  MR_Word parse_tree__prog_type_subst__STATE_VARIABLE_Constraint_0_9,
#line 77 "prog_type_subst.m"
  MR_Word * parse_tree__prog_type_subst__STATE_VARIABLE_Constraint_10)
#line 77 "prog_type_subst.m"
{
#line 387 "prog_type_subst.m"
  {
#line 387 "prog_type_subst.m"
    MR_bool parse_tree__prog_type_subst__succeeded;
#line 387 "prog_type_subst.m"
    MR_Word parse_tree__prog_type_subst__TypeCtorInfo_10_18;
#line 387 "prog_type_subst.m"
    MR_Word parse_tree__prog_type_subst__ClassName_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_type_subst__STATE_VARIABLE_Constraint_0_9, (MR_Integer) 0)));
#line 387 "prog_type_subst.m"
    MR_Word parse_tree__prog_type_subst__ClassArgTypes0_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_type_subst__STATE_VARIABLE_Constraint_0_9, (MR_Integer) 1)));
#line 387 "prog_type_subst.m"
    MR_Word parse_tree__prog_type_subst__ClassArgTypes_8;
#line 387 "prog_type_subst.m"
    MR_Word parse_tree__prog_type_subst__V_15_15;

#line 302 "prog_type_subst.m"
    {
#line 302 "prog_type_subst.m"
      parse_tree__prog_type_subst__V_15_15 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
#line 302 "prog_type_subst.m"
      MR_hl_field(MR_mktag(0), parse_tree__prog_type_subst__V_15_15, 0) = ((MR_Box) (&parse_tree__prog_type_subst_scalar_common_4[1]));
#line 302 "prog_type_subst.m"
      MR_hl_field(MR_mktag(0), parse_tree__prog_type_subst__V_15_15, 1) = ((MR_Box) (parse_tree__prog_type_subst__apply_variable_renaming_to_prog_constraint_3_p_0_1));
#line 302 "prog_type_subst.m"
      MR_hl_field(MR_mktag(0), parse_tree__prog_type_subst__V_15_15, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 302 "prog_type_subst.m"
      MR_hl_field(MR_mktag(0), parse_tree__prog_type_subst__V_15_15, 3) = ((MR_Box) (parse_tree__prog_type_subst__Renaming_4));
#line 302 "prog_type_subst.m"
    }
#line 1790 "parse_tree.prog_type_subst.c"
    parse_tree__prog_type_subst__TypeCtorInfo_10_18 = (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0;
#line 302 "prog_type_subst.m"
    {
#line 302 "prog_type_subst.m"
      mercury__list__map_3_p_0(parse_tree__prog_type_subst__TypeCtorInfo_10_18, parse_tree__prog_type_subst__TypeCtorInfo_10_18, parse_tree__prog_type_subst__V_15_15, parse_tree__prog_type_subst__ClassArgTypes0_7, &parse_tree__prog_type_subst__ClassArgTypes_8);
    }
#line 391 "prog_type_subst.m"
    {
#line 391 "prog_type_subst.m"
      MR_Word base;
#line 391 "prog_type_subst.m"
      base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 391 "prog_type_subst.m"
      *parse_tree__prog_type_subst__STATE_VARIABLE_Constraint_10 = base;
#line 391 "prog_type_subst.m"
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (parse_tree__prog_type_subst__ClassName_6));
#line 391 "prog_type_subst.m"
      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (parse_tree__prog_type_subst__ClassArgTypes_8));
#line 391 "prog_type_subst.m"
    }
#line 387 "prog_type_subst.m"
  }
#line 77 "prog_type_subst.m"
}

#line 308 "prog_type_subst.m"
static void MR_CALL 
parse_tree__prog_type_subst__apply_rec_subst_to_type_list_3_p_0_1(
#line 308 "prog_type_subst.m"
  MR_Box parse_tree__prog_type_subst__closure_arg,
#line 308 "prog_type_subst.m"
  MR_Box parse_tree__prog_type_subst__wrapper_arg_1,
#line 308 "prog_type_subst.m"
  MR_Box * parse_tree__prog_type_subst__wrapper_arg_2)
#line 308 "prog_type_subst.m"
{
#line 308 "prog_type_subst.m"
  {
#line 308 "prog_type_subst.m"
    MR_Box parse_tree__prog_type_subst__closure = parse_tree__prog_type_subst__closure_arg;
#line 308 "prog_type_subst.m"
    MR_Word parse_tree__prog_type_subst__conv0_Type_6;

#line 308 "prog_type_subst.m"
    {
#line 308 "prog_type_subst.m"
      parse_tree__prog_type_subst__apply_rec_subst_to_type_3_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_type_subst__closure, (MR_Integer) 3))), ((MR_Word) parse_tree__prog_type_subst__wrapper_arg_1), &parse_tree__prog_type_subst__conv0_Type_6);
    }
#line 308 "prog_type_subst.m"
    *parse_tree__prog_type_subst__wrapper_arg_2 = ((MR_Box) (parse_tree__prog_type_subst__conv0_Type_6));
#line 308 "prog_type_subst.m"
  }
#line 308 "prog_type_subst.m"
}

#line 69 "prog_type_subst.m"
void MR_CALL 
parse_tree__prog_type_subst__apply_rec_subst_to_type_list_3_p_0(
#line 69 "prog_type_subst.m"
  MR_Word parse_tree__prog_type_subst__Subst_4,
#line 69 "prog_type_subst.m"
  MR_Word parse_tree__prog_type_subst__Types0_5,
#line 69 "prog_type_subst.m"
  MR_Word * parse_tree__prog_type_subst__Types_6)
#line 69 "prog_type_subst.m"
{
#line 307 "prog_type_subst.m"
  {
#line 307 "prog_type_subst.m"
    MR_bool parse_tree__prog_type_subst__succeeded;
#line 307 "prog_type_subst.m"
    MR_Word parse_tree__prog_type_subst__TypeCtorInfo_10_10;
#line 307 "prog_type_subst.m"
    MR_Word parse_tree__prog_type_subst__V_7_7;

#line 308 "prog_type_subst.m"
    {
#line 308 "prog_type_subst.m"
      parse_tree__prog_type_subst__V_7_7 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
#line 308 "prog_type_subst.m"
      MR_hl_field(MR_mktag(0), parse_tree__prog_type_subst__V_7_7, 0) = ((MR_Box) (&parse_tree__prog_type_subst_scalar_common_4[2]));
#line 308 "prog_type_subst.m"
      MR_hl_field(MR_mktag(0), parse_tree__prog_type_subst__V_7_7, 1) = ((MR_Box) (parse_tree__prog_type_subst__apply_rec_subst_to_type_list_3_p_0_1));
#line 308 "prog_type_subst.m"
      MR_hl_field(MR_mktag(0), parse_tree__prog_type_subst__V_7_7, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 308 "prog_type_subst.m"
      MR_hl_field(MR_mktag(0), parse_tree__prog_type_subst__V_7_7, 3) = ((MR_Box) (parse_tree__prog_type_subst__Subst_4));
#line 308 "prog_type_subst.m"
    }
#line 1880 "parse_tree.prog_type_subst.c"
    parse_tree__prog_type_subst__TypeCtorInfo_10_10 = (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0;
#line 308 "prog_type_subst.m"
    {
#line 308 "prog_type_subst.m"
      mercury__list__map_3_p_0(parse_tree__prog_type_subst__TypeCtorInfo_10_10, parse_tree__prog_type_subst__TypeCtorInfo_10_10, parse_tree__prog_type_subst__V_7_7, parse_tree__prog_type_subst__Types0_5, parse_tree__prog_type_subst__Types_6);
    }
#line 307 "prog_type_subst.m"
  }
#line 69 "prog_type_subst.m"
}

#line 305 "prog_type_subst.m"
static void MR_CALL 
parse_tree__prog_type_subst__apply_subst_to_type_list_3_p_0_1(
#line 305 "prog_type_subst.m"
  MR_Box parse_tree__prog_type_subst__closure_arg,
#line 305 "prog_type_subst.m"
  MR_Box parse_tree__prog_type_subst__wrapper_arg_1,
#line 305 "prog_type_subst.m"
  MR_Box * parse_tree__prog_type_subst__wrapper_arg_2)
#line 305 "prog_type_subst.m"
{
#line 305 "prog_type_subst.m"
  {
#line 305 "prog_type_subst.m"
    MR_Box parse_tree__prog_type_subst__closure = parse_tree__prog_type_subst__closure_arg;
#line 305 "prog_type_subst.m"
    MR_Word parse_tree__prog_type_subst__conv0_Type_6;

#line 305 "prog_type_subst.m"
    {
#line 305 "prog_type_subst.m"
      parse_tree__prog_type_subst__apply_subst_to_type_3_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_type_subst__closure, (MR_Integer) 3))), ((MR_Word) parse_tree__prog_type_subst__wrapper_arg_1), &parse_tree__prog_type_subst__conv0_Type_6);
    }
#line 305 "prog_type_subst.m"
    *parse_tree__prog_type_subst__wrapper_arg_2 = ((MR_Box) (parse_tree__prog_type_subst__conv0_Type_6));
#line 305 "prog_type_subst.m"
  }
#line 305 "prog_type_subst.m"
}

#line 66 "prog_type_subst.m"
void MR_CALL 
parse_tree__prog_type_subst__apply_subst_to_type_list_3_p_0(
#line 66 "prog_type_subst.m"
  MR_Word parse_tree__prog_type_subst__Subst_4,
#line 66 "prog_type_subst.m"
  MR_Word parse_tree__prog_type_subst__Types0_5,
#line 66 "prog_type_subst.m"
  MR_Word * parse_tree__prog_type_subst__Types_6)
#line 66 "prog_type_subst.m"
{
#line 304 "prog_type_subst.m"
  {
#line 304 "prog_type_subst.m"
    MR_bool parse_tree__prog_type_subst__succeeded;
#line 304 "prog_type_subst.m"
    MR_Word parse_tree__prog_type_subst__TypeCtorInfo_10_10;
#line 304 "prog_type_subst.m"
    MR_Word parse_tree__prog_type_subst__V_7_7;

#line 305 "prog_type_subst.m"
    {
#line 305 "prog_type_subst.m"
      parse_tree__prog_type_subst__V_7_7 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
#line 305 "prog_type_subst.m"
      MR_hl_field(MR_mktag(0), parse_tree__prog_type_subst__V_7_7, 0) = ((MR_Box) (&parse_tree__prog_type_subst_scalar_common_4[2]));
#line 305 "prog_type_subst.m"
      MR_hl_field(MR_mktag(0), parse_tree__prog_type_subst__V_7_7, 1) = ((MR_Box) (parse_tree__prog_type_subst__apply_subst_to_type_list_3_p_0_1));
#line 305 "prog_type_subst.m"
      MR_hl_field(MR_mktag(0), parse_tree__prog_type_subst__V_7_7, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 305 "prog_type_subst.m"
      MR_hl_field(MR_mktag(0), parse_tree__prog_type_subst__V_7_7, 3) = ((MR_Box) (parse_tree__prog_type_subst__Subst_4));
#line 305 "prog_type_subst.m"
    }
#line 1956 "parse_tree.prog_type_subst.c"
    parse_tree__prog_type_subst__TypeCtorInfo_10_10 = (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0;
#line 305 "prog_type_subst.m"
    {
#line 305 "prog_type_subst.m"
      mercury__list__map_3_p_0(parse_tree__prog_type_subst__TypeCtorInfo_10_10, parse_tree__prog_type_subst__TypeCtorInfo_10_10, parse_tree__prog_type_subst__V_7_7, parse_tree__prog_type_subst__Types0_5, parse_tree__prog_type_subst__Types_6);
    }
#line 304 "prog_type_subst.m"
  }
#line 66 "prog_type_subst.m"
}

#line 302 "prog_type_subst.m"
static void MR_CALL 
parse_tree__prog_type_subst__apply_variable_renaming_to_type_list_3_p_0_1(
#line 302 "prog_type_subst.m"
  MR_Box parse_tree__prog_type_subst__closure_arg,
#line 302 "prog_type_subst.m"
  MR_Box parse_tree__prog_type_subst__wrapper_arg_1,
#line 302 "prog_type_subst.m"
  MR_Box * parse_tree__prog_type_subst__wrapper_arg_2)
#line 302 "prog_type_subst.m"
{
#line 302 "prog_type_subst.m"
  {
#line 302 "prog_type_subst.m"
    MR_Box parse_tree__prog_type_subst__closure = parse_tree__prog_type_subst__closure_arg;
#line 302 "prog_type_subst.m"
    MR_Word parse_tree__prog_type_subst__conv0_Type_6;

#line 302 "prog_type_subst.m"
    {
#line 302 "prog_type_subst.m"
      parse_tree__prog_type_subst__apply_variable_renaming_to_type_3_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_type_subst__closure, (MR_Integer) 3))), ((MR_Word) parse_tree__prog_type_subst__wrapper_arg_1), &parse_tree__prog_type_subst__conv0_Type_6);
    }
#line 302 "prog_type_subst.m"
    *parse_tree__prog_type_subst__wrapper_arg_2 = ((MR_Box) (parse_tree__prog_type_subst__conv0_Type_6));
#line 302 "prog_type_subst.m"
  }
#line 302 "prog_type_subst.m"
}

#line 63 "prog_type_subst.m"
void MR_CALL 
parse_tree__prog_type_subst__apply_variable_renaming_to_type_list_3_p_0(
#line 63 "prog_type_subst.m"
  MR_Word parse_tree__prog_type_subst__Renaming_4,
#line 63 "prog_type_subst.m"
  MR_Word parse_tree__prog_type_subst__Types0_5,
#line 63 "prog_type_subst.m"
  MR_Word * parse_tree__prog_type_subst__Types_6)
#line 63 "prog_type_subst.m"
{
#line 301 "prog_type_subst.m"
  {
#line 301 "prog_type_subst.m"
    MR_bool parse_tree__prog_type_subst__succeeded;
#line 301 "prog_type_subst.m"
    MR_Word parse_tree__prog_type_subst__TypeCtorInfo_10_10;
#line 301 "prog_type_subst.m"
    MR_Word parse_tree__prog_type_subst__V_7_7;

#line 302 "prog_type_subst.m"
    {
#line 302 "prog_type_subst.m"
      parse_tree__prog_type_subst__V_7_7 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
#line 302 "prog_type_subst.m"
      MR_hl_field(MR_mktag(0), parse_tree__prog_type_subst__V_7_7, 0) = ((MR_Box) (&parse_tree__prog_type_subst_scalar_common_4[1]));
#line 302 "prog_type_subst.m"
      MR_hl_field(MR_mktag(0), parse_tree__prog_type_subst__V_7_7, 1) = ((MR_Box) (parse_tree__prog_type_subst__apply_variable_renaming_to_type_list_3_p_0_1));
#line 302 "prog_type_subst.m"
      MR_hl_field(MR_mktag(0), parse_tree__prog_type_subst__V_7_7, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 302 "prog_type_subst.m"
      MR_hl_field(MR_mktag(0), parse_tree__prog_type_subst__V_7_7, 3) = ((MR_Box) (parse_tree__prog_type_subst__Renaming_4));
#line 302 "prog_type_subst.m"
    }
#line 2032 "parse_tree.prog_type_subst.c"
    parse_tree__prog_type_subst__TypeCtorInfo_10_10 = (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0;
#line 302 "prog_type_subst.m"
    {
#line 302 "prog_type_subst.m"
      mercury__list__map_3_p_0(parse_tree__prog_type_subst__TypeCtorInfo_10_10, parse_tree__prog_type_subst__TypeCtorInfo_10_10, parse_tree__prog_type_subst__V_7_7, parse_tree__prog_type_subst__Types0_5, parse_tree__prog_type_subst__Types_6);
    }
#line 301 "prog_type_subst.m"
  }
#line 63 "prog_type_subst.m"
}

#line 58 "prog_type_subst.m"
void MR_CALL 
parse_tree__prog_type_subst__apply_rec_subst_to_type_3_p_0(
#line 58 "prog_type_subst.m"
  MR_Word parse_tree__prog_type_subst__Subst_4,
#line 58 "prog_type_subst.m"
  MR_Word parse_tree__prog_type_subst__Type0_5,
#line 58 "prog_type_subst.m"
  MR_Word * parse_tree__prog_type_subst__Type_6)
#line 58 "prog_type_subst.m"
{
#line 254 "prog_type_subst.m"
  while (MR_TRUE)
#line 254 "prog_type_subst.m"
    {
#line 254 "prog_type_subst.m"
      /* tailcall optimized into a loop */
#line 254 "prog_type_subst.m"
      {
#line 254 "prog_type_subst.m"
        MR_bool parse_tree__prog_type_subst__succeeded;

#line 254 "prog_type_subst.m"
#line 254 "prog_type_subst.m"
        switch (MR_tag((MR_Word) parse_tree__prog_type_subst__Type0_5)) {
#line 254 "prog_type_subst.m"
          default: /*NOTREACHED*/ MR_assert(0);
#line 254 "prog_type_subst.m"
          case (MR_Integer) 0:
#line 254 "prog_type_subst.m"
            {
#line 254 "prog_type_subst.m"
              MR_Word parse_tree__prog_type_subst__TVar_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_type_subst__Type0_5, (MR_Integer) 0)));
#line 254 "prog_type_subst.m"
              MR_Word parse_tree__prog_type_subst__Kind_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_type_subst__Type0_5, (MR_Integer) 1)));
#line 258 "prog_type_subst.m"
              MR_Word parse_tree__prog_type_subst__Type1_9;
#line 255 "prog_type_subst.m"
              MR_Box parse_tree__prog_type_subst__conv1_Type1_9;

#line 255 "prog_type_subst.m"
              {
#line 255 "prog_type_subst.m"
                parse_tree__prog_type_subst__succeeded = mercury__map__search_3_p_0((MR_Word) &parse_tree__prog_type_subst_scalar_common_1[0], (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0, parse_tree__prog_type_subst__Subst_4, ((MR_Box) (parse_tree__prog_type_subst__TVar_7)), &parse_tree__prog_type_subst__conv1_Type1_9);
              }
#line 255 "prog_type_subst.m"
              if (parse_tree__prog_type_subst__succeeded)
#line 255 "prog_type_subst.m"
                {
#line 255 "prog_type_subst.m"
                  parse_tree__prog_type_subst__Type1_9 = ((MR_Word) parse_tree__prog_type_subst__conv1_Type1_9);
#line 255 "prog_type_subst.m"
                  parse_tree__prog_type_subst__succeeded = MR_TRUE;
#line 255 "prog_type_subst.m"
                }
#line 258 "prog_type_subst.m"
              if (parse_tree__prog_type_subst__succeeded)
#line 256 "prog_type_subst.m"
                {
#line 256 "prog_type_subst.m"
                  MR_Word parse_tree__prog_type_subst__Type2_10;
#line 379 "prog_type_subst.m"
                  MR_Word parse_tree__prog_type_subst__V_46_46;

#line 379 "prog_type_subst.m"
                  {
#line 379 "prog_type_subst.m"
                    parse_tree__prog_type_subst__V_46_46 = parse_tree__prog_data__get_type_kind_1_f_0(parse_tree__prog_type_subst__Type1_9);
                  }
#line 379 "prog_type_subst.m"
                  {
#line 379 "prog_type_subst.m"
                    parse_tree__prog_type_subst__succeeded = parse_tree__prog_data____Unify____kind_0_0(parse_tree__prog_type_subst__Kind_8, parse_tree__prog_type_subst__V_46_46);
                  }
#line 381 "prog_type_subst.m"
                  if (parse_tree__prog_type_subst__succeeded)
#line 380 "prog_type_subst.m"
                    parse_tree__prog_type_subst__Type2_10 = parse_tree__prog_type_subst__Type1_9;
#line 381 "prog_type_subst.m"
                  else
#line 382 "prog_type_subst.m"
                    {
#line 382 "prog_type_subst.m"
                      {
#line 382 "prog_type_subst.m"
                        mercury__require__unexpected_3_p_0((MR_String) "parse_tree.prog_type_subst", (MR_String) "predicate \140parse_tree.prog_type_subst.ensure_type_has_kind\'/3", (MR_String) "substitution not kind preserving");
#line 382 "prog_type_subst.m"
                        return;
                      }
#line 382 "prog_type_subst.m"
                    }
#line 257 "prog_type_subst.m"
                  /* direct tailcall eliminated */
#line 257 "prog_type_subst.m"
                  {
#line 257 "prog_type_subst.m"
                    MR_Word parse_tree__prog_type_subst__Type0__tmp_copy_5 = parse_tree__prog_type_subst__Type2_10;

#line 257 "prog_type_subst.m"
                    parse_tree__prog_type_subst__Type0_5 = parse_tree__prog_type_subst__Type0__tmp_copy_5;
#line 257 "prog_type_subst.m"
                  }
#line 257 "prog_type_subst.m"
                  continue;
#line 256 "prog_type_subst.m"
                }
#line 258 "prog_type_subst.m"
              else
#line 259 "prog_type_subst.m"
                *parse_tree__prog_type_subst__Type_6 = parse_tree__prog_type_subst__Type0_5;
#line 254 "prog_type_subst.m"
            }
#line 254 "prog_type_subst.m"
            break;
#line 254 "prog_type_subst.m"
          case (MR_Integer) 1:
#line 262 "prog_type_subst.m"
            {
#line 262 "prog_type_subst.m"
              MR_Word parse_tree__prog_type_subst__Name_11 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_type_subst__Type0_5, (MR_Integer) 0)));
#line 262 "prog_type_subst.m"
              MR_Word parse_tree__prog_type_subst__Args0_12 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_type_subst__Type0_5, (MR_Integer) 1)));
#line 262 "prog_type_subst.m"
              MR_Word parse_tree__prog_type_subst__Args_13;
#line 262 "prog_type_subst.m"
              MR_Word parse_tree__prog_type_subst__Kind_25 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_type_subst__Type0_5, (MR_Integer) 2)));

#line 263 "prog_type_subst.m"
              {
#line 263 "prog_type_subst.m"
                parse_tree__prog_type_subst__apply_rec_subst_to_type_list_3_p_0(parse_tree__prog_type_subst__Subst_4, parse_tree__prog_type_subst__Args0_12, &parse_tree__prog_type_subst__Args_13);
              }
#line 264 "prog_type_subst.m"
              {
#line 264 "prog_type_subst.m"
                MR_Word base;
#line 264 "prog_type_subst.m"
                base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
#line 264 "prog_type_subst.m"
                *parse_tree__prog_type_subst__Type_6 = base;
#line 264 "prog_type_subst.m"
                MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (parse_tree__prog_type_subst__Name_11));
#line 264 "prog_type_subst.m"
                MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (parse_tree__prog_type_subst__Args_13));
#line 264 "prog_type_subst.m"
                MR_hl_field(MR_mktag(1), base, 2) = ((MR_Box) (parse_tree__prog_type_subst__Kind_25));
#line 264 "prog_type_subst.m"
              }
#line 262 "prog_type_subst.m"
            }
#line 254 "prog_type_subst.m"
            break;
#line 254 "prog_type_subst.m"
          case (MR_Integer) 2:
#line 267 "prog_type_subst.m"
            *parse_tree__prog_type_subst__Type_6 = parse_tree__prog_type_subst__Type0_5;
#line 254 "prog_type_subst.m"
            break;
#line 254 "prog_type_subst.m"
          case (MR_Integer) 3:
#line 254 "prog_type_subst.m"
#line 254 "prog_type_subst.m"
            switch (((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__prog_type_subst__Type0_5, (MR_Integer) 0)))) {
#line 254 "prog_type_subst.m"
              default: /*NOTREACHED*/ MR_assert(0);
#line 254 "prog_type_subst.m"
              case (MR_Integer) 0:
#line 281 "prog_type_subst.m"
                {
#line 281 "prog_type_subst.m"
                  MR_Word parse_tree__prog_type_subst__Kind_28 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__prog_type_subst__Type0_5, (MR_Integer) 2)));
#line 281 "prog_type_subst.m"
                  MR_Word parse_tree__prog_type_subst__Args0_29 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__prog_type_subst__Type0_5, (MR_Integer) 1)));
#line 281 "prog_type_subst.m"
                  MR_Word parse_tree__prog_type_subst__Args_30;

#line 282 "prog_type_subst.m"
                  {
#line 282 "prog_type_subst.m"
                    parse_tree__prog_type_subst__apply_rec_subst_to_type_list_3_p_0(parse_tree__prog_type_subst__Subst_4, parse_tree__prog_type_subst__Args0_29, &parse_tree__prog_type_subst__Args_30);
                  }
#line 283 "prog_type_subst.m"
                  {
#line 283 "prog_type_subst.m"
                    MR_Word base;
#line 283 "prog_type_subst.m"
                    base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
#line 283 "prog_type_subst.m"
                    *parse_tree__prog_type_subst__Type_6 = base;
#line 283 "prog_type_subst.m"
                    MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 0));
#line 283 "prog_type_subst.m"
                    MR_hl_field(MR_mktag(3), base, 1) = ((MR_Box) (parse_tree__prog_type_subst__Args_30));
#line 283 "prog_type_subst.m"
                    MR_hl_field(MR_mktag(3), base, 2) = ((MR_Box) (parse_tree__prog_type_subst__Kind_28));
#line 283 "prog_type_subst.m"
                  }
#line 281 "prog_type_subst.m"
                }
#line 254 "prog_type_subst.m"
                break;
#line 254 "prog_type_subst.m"
              case (MR_Integer) 1:
#line 269 "prog_type_subst.m"
                {
#line 269 "prog_type_subst.m"
                  MR_Word parse_tree__prog_type_subst__MaybeReturn0_15 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__prog_type_subst__Type0_5, (MR_Integer) 2)));
#line 269 "prog_type_subst.m"
                  MR_Word parse_tree__prog_type_subst__Purity_16 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__prog_type_subst__Type0_5, (MR_Integer) 3)));
#line 269 "prog_type_subst.m"
                  MR_Word parse_tree__prog_type_subst__MaybeReturn_20;
#line 269 "prog_type_subst.m"
                  MR_Word parse_tree__prog_type_subst__Args0_26 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__prog_type_subst__Type0_5, (MR_Integer) 1)));
#line 269 "prog_type_subst.m"
                  MR_Word parse_tree__prog_type_subst__Args_27;

#line 270 "prog_type_subst.m"
                  {
#line 270 "prog_type_subst.m"
                    parse_tree__prog_type_subst__apply_rec_subst_to_type_list_3_p_0(parse_tree__prog_type_subst__Subst_4, parse_tree__prog_type_subst__Args0_26, &parse_tree__prog_type_subst__Args_27);
                  }
#line 275 "prog_type_subst.m"
                  if ((parse_tree__prog_type_subst__MaybeReturn0_15 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 277 "prog_type_subst.m"
                    parse_tree__prog_type_subst__MaybeReturn_20 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 275 "prog_type_subst.m"
                  else
#line 272 "prog_type_subst.m"
                    {
#line 272 "prog_type_subst.m"
                      MR_Word parse_tree__prog_type_subst__Return0_18 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_type_subst__MaybeReturn0_15, (MR_Integer) 0)));
#line 272 "prog_type_subst.m"
                      MR_Word parse_tree__prog_type_subst__Return_19;

#line 273 "prog_type_subst.m"
                      {
#line 273 "prog_type_subst.m"
                        parse_tree__prog_type_subst__apply_rec_subst_to_type_3_p_0(parse_tree__prog_type_subst__Subst_4, parse_tree__prog_type_subst__Return0_18, &parse_tree__prog_type_subst__Return_19);
                      }
#line 274 "prog_type_subst.m"
                      {
#line 274 "prog_type_subst.m"
                        parse_tree__prog_type_subst__MaybeReturn_20 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 274 "prog_type_subst.m"
                        MR_hl_field(MR_mktag(1), parse_tree__prog_type_subst__MaybeReturn_20, 0) = ((MR_Box) (parse_tree__prog_type_subst__Return_19));
#line 274 "prog_type_subst.m"
                      }
#line 272 "prog_type_subst.m"
                    }
#line 279 "prog_type_subst.m"
                  {
#line 279 "prog_type_subst.m"
                    MR_Word base;
#line 279 "prog_type_subst.m"
                    base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL));
#line 279 "prog_type_subst.m"
                    *parse_tree__prog_type_subst__Type_6 = base;
#line 279 "prog_type_subst.m"
                    MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 279 "prog_type_subst.m"
                    MR_hl_field(MR_mktag(3), base, 1) = ((MR_Box) (parse_tree__prog_type_subst__Args_27));
#line 279 "prog_type_subst.m"
                    MR_hl_field(MR_mktag(3), base, 2) = ((MR_Box) (parse_tree__prog_type_subst__MaybeReturn_20));
#line 279 "prog_type_subst.m"
                    MR_hl_field(MR_mktag(3), base, 3) = ((MR_Box) (parse_tree__prog_type_subst__Purity_16));
#line 279 "prog_type_subst.m"
                    MR_hl_field(MR_mktag(3), base, 4) = NULL;
#line 279 "prog_type_subst.m"
                  }
#line 269 "prog_type_subst.m"
                }
#line 254 "prog_type_subst.m"
                break;
#line 254 "prog_type_subst.m"
              case (MR_Integer) 2:
#line 285 "prog_type_subst.m"
                {
#line 285 "prog_type_subst.m"
                  MR_Word parse_tree__prog_type_subst__TVar_31 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__prog_type_subst__Type0_5, (MR_Integer) 1)));
#line 285 "prog_type_subst.m"
                  MR_Word parse_tree__prog_type_subst__Kind_32 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__prog_type_subst__Type0_5, (MR_Integer) 3)));
#line 285 "prog_type_subst.m"
                  MR_Word parse_tree__prog_type_subst__Args0_33 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__prog_type_subst__Type0_5, (MR_Integer) 2)));
#line 285 "prog_type_subst.m"
                  MR_Word parse_tree__prog_type_subst__Args_34;
#line 290 "prog_type_subst.m"
                  MR_Word parse_tree__prog_type_subst__AppliedType0_21;
#line 287 "prog_type_subst.m"
                  MR_Box parse_tree__prog_type_subst__conv0_AppliedType0_21;

#line 286 "prog_type_subst.m"
                  {
#line 286 "prog_type_subst.m"
                    parse_tree__prog_type_subst__apply_rec_subst_to_type_list_3_p_0(parse_tree__prog_type_subst__Subst_4, parse_tree__prog_type_subst__Args0_33, &parse_tree__prog_type_subst__Args_34);
                  }
#line 287 "prog_type_subst.m"
                  {
#line 287 "prog_type_subst.m"
                    parse_tree__prog_type_subst__succeeded = mercury__map__search_3_p_0((MR_Word) &parse_tree__prog_type_subst_scalar_common_1[0], (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0, parse_tree__prog_type_subst__Subst_4, ((MR_Box) (parse_tree__prog_type_subst__TVar_31)), &parse_tree__prog_type_subst__conv0_AppliedType0_21);
                  }
#line 287 "prog_type_subst.m"
                  if (parse_tree__prog_type_subst__succeeded)
#line 287 "prog_type_subst.m"
                    {
#line 287 "prog_type_subst.m"
                      parse_tree__prog_type_subst__AppliedType0_21 = ((MR_Word) parse_tree__prog_type_subst__conv0_AppliedType0_21);
#line 287 "prog_type_subst.m"
                      parse_tree__prog_type_subst__succeeded = MR_TRUE;
#line 287 "prog_type_subst.m"
                    }
#line 290 "prog_type_subst.m"
                  if (parse_tree__prog_type_subst__succeeded)
#line 288 "prog_type_subst.m"
                    {
#line 288 "prog_type_subst.m"
                      MR_Word parse_tree__prog_type_subst__AppliedType_22;

#line 288 "prog_type_subst.m"
                      {
#line 288 "prog_type_subst.m"
                        parse_tree__prog_type_subst__apply_rec_subst_to_type_3_p_0(parse_tree__prog_type_subst__Subst_4, parse_tree__prog_type_subst__AppliedType0_21, &parse_tree__prog_type_subst__AppliedType_22);
                      }
#line 289 "prog_type_subst.m"
                      {
#line 289 "prog_type_subst.m"
                        parse_tree__prog_type_subst__apply_type_args_3_p_0(parse_tree__prog_type_subst__AppliedType_22, parse_tree__prog_type_subst__Args_34, parse_tree__prog_type_subst__Type_6);
                      }
#line 288 "prog_type_subst.m"
                    }
#line 290 "prog_type_subst.m"
                  else
#line 291 "prog_type_subst.m"
                    {
#line 291 "prog_type_subst.m"
                      MR_Word base;
#line 291 "prog_type_subst.m"
                      base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL));
#line 291 "prog_type_subst.m"
                      *parse_tree__prog_type_subst__Type_6 = base;
#line 291 "prog_type_subst.m"
                      MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
#line 291 "prog_type_subst.m"
                      MR_hl_field(MR_mktag(3), base, 1) = ((MR_Box) (parse_tree__prog_type_subst__TVar_31));
#line 291 "prog_type_subst.m"
                      MR_hl_field(MR_mktag(3), base, 2) = ((MR_Box) (parse_tree__prog_type_subst__Args_34));
#line 291 "prog_type_subst.m"
                      MR_hl_field(MR_mktag(3), base, 3) = ((MR_Box) (parse_tree__prog_type_subst__Kind_32));
#line 291 "prog_type_subst.m"
                    }
#line 285 "prog_type_subst.m"
                }
#line 254 "prog_type_subst.m"
                break;
#line 254 "prog_type_subst.m"
              case (MR_Integer) 3:
#line 294 "prog_type_subst.m"
                {
#line 294 "prog_type_subst.m"
                  MR_Word parse_tree__prog_type_subst__BaseType0_23 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__prog_type_subst__Type0_5, (MR_Integer) 1)));
#line 294 "prog_type_subst.m"
                  MR_Word parse_tree__prog_type_subst__BaseType_24;
#line 294 "prog_type_subst.m"
                  MR_Word parse_tree__prog_type_subst__Kind_35 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__prog_type_subst__Type0_5, (MR_Integer) 2)));

#line 295 "prog_type_subst.m"
                  {
#line 295 "prog_type_subst.m"
                    parse_tree__prog_type_subst__apply_rec_subst_to_type_3_p_0(parse_tree__prog_type_subst__Subst_4, parse_tree__prog_type_subst__BaseType0_23, &parse_tree__prog_type_subst__BaseType_24);
                  }
#line 296 "prog_type_subst.m"
                  {
#line 296 "prog_type_subst.m"
                    MR_Word base;
#line 296 "prog_type_subst.m"
                    base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
#line 296 "prog_type_subst.m"
                    *parse_tree__prog_type_subst__Type_6 = base;
#line 296 "prog_type_subst.m"
                    MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 3));
#line 296 "prog_type_subst.m"
                    MR_hl_field(MR_mktag(3), base, 1) = ((MR_Box) (parse_tree__prog_type_subst__BaseType_24));
#line 296 "prog_type_subst.m"
                    MR_hl_field(MR_mktag(3), base, 2) = ((MR_Box) (parse_tree__prog_type_subst__Kind_35));
#line 296 "prog_type_subst.m"
                  }
#line 294 "prog_type_subst.m"
                }
#line 254 "prog_type_subst.m"
                break;
#line 254 "prog_type_subst.m"
            }
#line 254 "prog_type_subst.m"
            break;
#line 254 "prog_type_subst.m"
        }
#line 254 "prog_type_subst.m"
      }
#line 254 "prog_type_subst.m"
      break;
#line 254 "prog_type_subst.m"
    }
#line 58 "prog_type_subst.m"
}

#line 56 "prog_type_subst.m"
void MR_CALL 
parse_tree__prog_type_subst__apply_subst_to_type_3_p_0(
#line 56 "prog_type_subst.m"
  MR_Word parse_tree__prog_type_subst__Subst_4,
#line 56 "prog_type_subst.m"
  MR_Word parse_tree__prog_type_subst__Type0_5,
#line 56 "prog_type_subst.m"
  MR_Word * parse_tree__prog_type_subst__Type_6)
#line 56 "prog_type_subst.m"
{
#line 209 "prog_type_subst.m"
  {
#line 209 "prog_type_subst.m"
    MR_bool parse_tree__prog_type_subst__succeeded;

#line 209 "prog_type_subst.m"
#line 209 "prog_type_subst.m"
    switch (MR_tag((MR_Word) parse_tree__prog_type_subst__Type0_5)) {
#line 209 "prog_type_subst.m"
      default: /*NOTREACHED*/ MR_assert(0);
#line 209 "prog_type_subst.m"
      case (MR_Integer) 0:
#line 209 "prog_type_subst.m"
        {
#line 209 "prog_type_subst.m"
          MR_Word parse_tree__prog_type_subst__TVar_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_type_subst__Type0_5, (MR_Integer) 0)));
#line 209 "prog_type_subst.m"
          MR_Word parse_tree__prog_type_subst__Kind_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_type_subst__Type0_5, (MR_Integer) 1)));
#line 212 "prog_type_subst.m"
          MR_Word parse_tree__prog_type_subst__Type1_9;
#line 210 "prog_type_subst.m"
          MR_Box parse_tree__prog_type_subst__conv1_Type1_9;

#line 210 "prog_type_subst.m"
          {
#line 210 "prog_type_subst.m"
            parse_tree__prog_type_subst__succeeded = mercury__map__search_3_p_0((MR_Word) &parse_tree__prog_type_subst_scalar_common_1[0], (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0, parse_tree__prog_type_subst__Subst_4, ((MR_Box) (parse_tree__prog_type_subst__TVar_7)), &parse_tree__prog_type_subst__conv1_Type1_9);
          }
#line 210 "prog_type_subst.m"
          if (parse_tree__prog_type_subst__succeeded)
#line 210 "prog_type_subst.m"
            {
#line 210 "prog_type_subst.m"
              parse_tree__prog_type_subst__Type1_9 = ((MR_Word) parse_tree__prog_type_subst__conv1_Type1_9);
#line 210 "prog_type_subst.m"
              parse_tree__prog_type_subst__succeeded = MR_TRUE;
#line 210 "prog_type_subst.m"
            }
#line 212 "prog_type_subst.m"
          if (parse_tree__prog_type_subst__succeeded)
#line 381 "prog_type_subst.m"
            {
#line 379 "prog_type_subst.m"
              MR_Word parse_tree__prog_type_subst__V_44_44;

#line 379 "prog_type_subst.m"
              {
#line 379 "prog_type_subst.m"
                parse_tree__prog_type_subst__V_44_44 = parse_tree__prog_data__get_type_kind_1_f_0(parse_tree__prog_type_subst__Type1_9);
              }
#line 379 "prog_type_subst.m"
              {
#line 379 "prog_type_subst.m"
                parse_tree__prog_type_subst__succeeded = parse_tree__prog_data____Unify____kind_0_0(parse_tree__prog_type_subst__Kind_8, parse_tree__prog_type_subst__V_44_44);
              }
#line 381 "prog_type_subst.m"
              if (parse_tree__prog_type_subst__succeeded)
#line 380 "prog_type_subst.m"
                *parse_tree__prog_type_subst__Type_6 = parse_tree__prog_type_subst__Type1_9;
#line 381 "prog_type_subst.m"
              else
#line 382 "prog_type_subst.m"
                {
#line 382 "prog_type_subst.m"
                  {
#line 382 "prog_type_subst.m"
                    mercury__require__unexpected_3_p_0((MR_String) "parse_tree.prog_type_subst", (MR_String) "predicate \140parse_tree.prog_type_subst.ensure_type_has_kind\'/3", (MR_String) "substitution not kind preserving");
#line 382 "prog_type_subst.m"
                    return;
                  }
#line 382 "prog_type_subst.m"
                }
#line 381 "prog_type_subst.m"
            }
#line 212 "prog_type_subst.m"
          else
#line 213 "prog_type_subst.m"
            *parse_tree__prog_type_subst__Type_6 = parse_tree__prog_type_subst__Type0_5;
#line 209 "prog_type_subst.m"
        }
#line 209 "prog_type_subst.m"
        break;
#line 209 "prog_type_subst.m"
      case (MR_Integer) 1:
#line 216 "prog_type_subst.m"
        {
#line 216 "prog_type_subst.m"
          MR_Word parse_tree__prog_type_subst__Name_10 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_type_subst__Type0_5, (MR_Integer) 0)));
#line 216 "prog_type_subst.m"
          MR_Word parse_tree__prog_type_subst__Args0_11 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_type_subst__Type0_5, (MR_Integer) 1)));
#line 216 "prog_type_subst.m"
          MR_Word parse_tree__prog_type_subst__Args_12;
#line 216 "prog_type_subst.m"
          MR_Word parse_tree__prog_type_subst__Kind_23 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_type_subst__Type0_5, (MR_Integer) 2)));

#line 217 "prog_type_subst.m"
          {
#line 217 "prog_type_subst.m"
            parse_tree__prog_type_subst__apply_subst_to_type_list_3_p_0(parse_tree__prog_type_subst__Subst_4, parse_tree__prog_type_subst__Args0_11, &parse_tree__prog_type_subst__Args_12);
          }
#line 218 "prog_type_subst.m"
          {
#line 218 "prog_type_subst.m"
            MR_Word base;
#line 218 "prog_type_subst.m"
            base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
#line 218 "prog_type_subst.m"
            *parse_tree__prog_type_subst__Type_6 = base;
#line 218 "prog_type_subst.m"
            MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (parse_tree__prog_type_subst__Name_10));
#line 218 "prog_type_subst.m"
            MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (parse_tree__prog_type_subst__Args_12));
#line 218 "prog_type_subst.m"
            MR_hl_field(MR_mktag(1), base, 2) = ((MR_Box) (parse_tree__prog_type_subst__Kind_23));
#line 218 "prog_type_subst.m"
          }
#line 216 "prog_type_subst.m"
        }
#line 209 "prog_type_subst.m"
        break;
#line 209 "prog_type_subst.m"
      case (MR_Integer) 2:
#line 221 "prog_type_subst.m"
        *parse_tree__prog_type_subst__Type_6 = parse_tree__prog_type_subst__Type0_5;
#line 209 "prog_type_subst.m"
        break;
#line 209 "prog_type_subst.m"
      case (MR_Integer) 3:
#line 209 "prog_type_subst.m"
#line 209 "prog_type_subst.m"
        switch (((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__prog_type_subst__Type0_5, (MR_Integer) 0)))) {
#line 209 "prog_type_subst.m"
          default: /*NOTREACHED*/ MR_assert(0);
#line 209 "prog_type_subst.m"
          case (MR_Integer) 0:
#line 235 "prog_type_subst.m"
            {
#line 235 "prog_type_subst.m"
              MR_Word parse_tree__prog_type_subst__Kind_26 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__prog_type_subst__Type0_5, (MR_Integer) 2)));
#line 235 "prog_type_subst.m"
              MR_Word parse_tree__prog_type_subst__Args0_27 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__prog_type_subst__Type0_5, (MR_Integer) 1)));
#line 235 "prog_type_subst.m"
              MR_Word parse_tree__prog_type_subst__Args_28;

#line 236 "prog_type_subst.m"
              {
#line 236 "prog_type_subst.m"
                parse_tree__prog_type_subst__apply_subst_to_type_list_3_p_0(parse_tree__prog_type_subst__Subst_4, parse_tree__prog_type_subst__Args0_27, &parse_tree__prog_type_subst__Args_28);
              }
#line 237 "prog_type_subst.m"
              {
#line 237 "prog_type_subst.m"
                MR_Word base;
#line 237 "prog_type_subst.m"
                base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
#line 237 "prog_type_subst.m"
                *parse_tree__prog_type_subst__Type_6 = base;
#line 237 "prog_type_subst.m"
                MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 0));
#line 237 "prog_type_subst.m"
                MR_hl_field(MR_mktag(3), base, 1) = ((MR_Box) (parse_tree__prog_type_subst__Args_28));
#line 237 "prog_type_subst.m"
                MR_hl_field(MR_mktag(3), base, 2) = ((MR_Box) (parse_tree__prog_type_subst__Kind_26));
#line 237 "prog_type_subst.m"
              }
#line 235 "prog_type_subst.m"
            }
#line 209 "prog_type_subst.m"
            break;
#line 209 "prog_type_subst.m"
          case (MR_Integer) 1:
#line 223 "prog_type_subst.m"
            {
#line 223 "prog_type_subst.m"
              MR_Word parse_tree__prog_type_subst__MaybeReturn0_14 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__prog_type_subst__Type0_5, (MR_Integer) 2)));
#line 223 "prog_type_subst.m"
              MR_Word parse_tree__prog_type_subst__Purity_15 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__prog_type_subst__Type0_5, (MR_Integer) 3)));
#line 223 "prog_type_subst.m"
              MR_Word parse_tree__prog_type_subst__MaybeReturn_19;
#line 223 "prog_type_subst.m"
              MR_Word parse_tree__prog_type_subst__Args0_24 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__prog_type_subst__Type0_5, (MR_Integer) 1)));
#line 223 "prog_type_subst.m"
              MR_Word parse_tree__prog_type_subst__Args_25;

#line 224 "prog_type_subst.m"
              {
#line 224 "prog_type_subst.m"
                parse_tree__prog_type_subst__apply_subst_to_type_list_3_p_0(parse_tree__prog_type_subst__Subst_4, parse_tree__prog_type_subst__Args0_24, &parse_tree__prog_type_subst__Args_25);
              }
#line 229 "prog_type_subst.m"
              if ((parse_tree__prog_type_subst__MaybeReturn0_14 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 231 "prog_type_subst.m"
                parse_tree__prog_type_subst__MaybeReturn_19 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 229 "prog_type_subst.m"
              else
#line 226 "prog_type_subst.m"
                {
#line 226 "prog_type_subst.m"
                  MR_Word parse_tree__prog_type_subst__Return0_17 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_type_subst__MaybeReturn0_14, (MR_Integer) 0)));
#line 226 "prog_type_subst.m"
                  MR_Word parse_tree__prog_type_subst__Return_18;

#line 227 "prog_type_subst.m"
                  {
#line 227 "prog_type_subst.m"
                    parse_tree__prog_type_subst__apply_subst_to_type_3_p_0(parse_tree__prog_type_subst__Subst_4, parse_tree__prog_type_subst__Return0_17, &parse_tree__prog_type_subst__Return_18);
                  }
#line 228 "prog_type_subst.m"
                  {
#line 228 "prog_type_subst.m"
                    parse_tree__prog_type_subst__MaybeReturn_19 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 228 "prog_type_subst.m"
                    MR_hl_field(MR_mktag(1), parse_tree__prog_type_subst__MaybeReturn_19, 0) = ((MR_Box) (parse_tree__prog_type_subst__Return_18));
#line 228 "prog_type_subst.m"
                  }
#line 226 "prog_type_subst.m"
                }
#line 233 "prog_type_subst.m"
              {
#line 233 "prog_type_subst.m"
                MR_Word base;
#line 233 "prog_type_subst.m"
                base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL));
#line 233 "prog_type_subst.m"
                *parse_tree__prog_type_subst__Type_6 = base;
#line 233 "prog_type_subst.m"
                MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 233 "prog_type_subst.m"
                MR_hl_field(MR_mktag(3), base, 1) = ((MR_Box) (parse_tree__prog_type_subst__Args_25));
#line 233 "prog_type_subst.m"
                MR_hl_field(MR_mktag(3), base, 2) = ((MR_Box) (parse_tree__prog_type_subst__MaybeReturn_19));
#line 233 "prog_type_subst.m"
                MR_hl_field(MR_mktag(3), base, 3) = ((MR_Box) (parse_tree__prog_type_subst__Purity_15));
#line 233 "prog_type_subst.m"
                MR_hl_field(MR_mktag(3), base, 4) = NULL;
#line 233 "prog_type_subst.m"
              }
#line 223 "prog_type_subst.m"
            }
#line 209 "prog_type_subst.m"
            break;
#line 209 "prog_type_subst.m"
          case (MR_Integer) 2:
#line 239 "prog_type_subst.m"
            {
#line 239 "prog_type_subst.m"
              MR_Word parse_tree__prog_type_subst__TVar_29 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__prog_type_subst__Type0_5, (MR_Integer) 1)));
#line 239 "prog_type_subst.m"
              MR_Word parse_tree__prog_type_subst__Kind_30 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__prog_type_subst__Type0_5, (MR_Integer) 3)));
#line 239 "prog_type_subst.m"
              MR_Word parse_tree__prog_type_subst__Args0_31 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__prog_type_subst__Type0_5, (MR_Integer) 2)));
#line 239 "prog_type_subst.m"
              MR_Word parse_tree__prog_type_subst__Args_32;
#line 243 "prog_type_subst.m"
              MR_Word parse_tree__prog_type_subst__AppliedType_20;
#line 241 "prog_type_subst.m"
              MR_Box parse_tree__prog_type_subst__conv0_AppliedType_20;

#line 240 "prog_type_subst.m"
              {
#line 240 "prog_type_subst.m"
                parse_tree__prog_type_subst__apply_subst_to_type_list_3_p_0(parse_tree__prog_type_subst__Subst_4, parse_tree__prog_type_subst__Args0_31, &parse_tree__prog_type_subst__Args_32);
              }
#line 241 "prog_type_subst.m"
              {
#line 241 "prog_type_subst.m"
                parse_tree__prog_type_subst__succeeded = mercury__map__search_3_p_0((MR_Word) &parse_tree__prog_type_subst_scalar_common_1[0], (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0, parse_tree__prog_type_subst__Subst_4, ((MR_Box) (parse_tree__prog_type_subst__TVar_29)), &parse_tree__prog_type_subst__conv0_AppliedType_20);
              }
#line 241 "prog_type_subst.m"
              if (parse_tree__prog_type_subst__succeeded)
#line 241 "prog_type_subst.m"
                {
#line 241 "prog_type_subst.m"
                  parse_tree__prog_type_subst__AppliedType_20 = ((MR_Word) parse_tree__prog_type_subst__conv0_AppliedType_20);
#line 241 "prog_type_subst.m"
                  parse_tree__prog_type_subst__succeeded = MR_TRUE;
#line 241 "prog_type_subst.m"
                }
#line 243 "prog_type_subst.m"
              if (parse_tree__prog_type_subst__succeeded)
#line 242 "prog_type_subst.m"
                {
#line 242 "prog_type_subst.m"
                  parse_tree__prog_type_subst__apply_type_args_3_p_0(parse_tree__prog_type_subst__AppliedType_20, parse_tree__prog_type_subst__Args_32, parse_tree__prog_type_subst__Type_6);
                }
#line 243 "prog_type_subst.m"
              else
#line 244 "prog_type_subst.m"
                {
#line 244 "prog_type_subst.m"
                  MR_Word base;
#line 244 "prog_type_subst.m"
                  base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL));
#line 244 "prog_type_subst.m"
                  *parse_tree__prog_type_subst__Type_6 = base;
#line 244 "prog_type_subst.m"
                  MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
#line 244 "prog_type_subst.m"
                  MR_hl_field(MR_mktag(3), base, 1) = ((MR_Box) (parse_tree__prog_type_subst__TVar_29));
#line 244 "prog_type_subst.m"
                  MR_hl_field(MR_mktag(3), base, 2) = ((MR_Box) (parse_tree__prog_type_subst__Args_32));
#line 244 "prog_type_subst.m"
                  MR_hl_field(MR_mktag(3), base, 3) = ((MR_Box) (parse_tree__prog_type_subst__Kind_30));
#line 244 "prog_type_subst.m"
                }
#line 239 "prog_type_subst.m"
            }
#line 209 "prog_type_subst.m"
            break;
#line 209 "prog_type_subst.m"
          case (MR_Integer) 3:
#line 247 "prog_type_subst.m"
            {
#line 247 "prog_type_subst.m"
              MR_Word parse_tree__prog_type_subst__BaseType0_21 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__prog_type_subst__Type0_5, (MR_Integer) 1)));
#line 247 "prog_type_subst.m"
              MR_Word parse_tree__prog_type_subst__BaseType_22;
#line 247 "prog_type_subst.m"
              MR_Word parse_tree__prog_type_subst__Kind_33 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__prog_type_subst__Type0_5, (MR_Integer) 2)));

#line 248 "prog_type_subst.m"
              {
#line 248 "prog_type_subst.m"
                parse_tree__prog_type_subst__apply_subst_to_type_3_p_0(parse_tree__prog_type_subst__Subst_4, parse_tree__prog_type_subst__BaseType0_21, &parse_tree__prog_type_subst__BaseType_22);
              }
#line 249 "prog_type_subst.m"
              {
#line 249 "prog_type_subst.m"
                MR_Word base;
#line 249 "prog_type_subst.m"
                base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
#line 249 "prog_type_subst.m"
                *parse_tree__prog_type_subst__Type_6 = base;
#line 249 "prog_type_subst.m"
                MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 3));
#line 249 "prog_type_subst.m"
                MR_hl_field(MR_mktag(3), base, 1) = ((MR_Box) (parse_tree__prog_type_subst__BaseType_22));
#line 249 "prog_type_subst.m"
                MR_hl_field(MR_mktag(3), base, 2) = ((MR_Box) (parse_tree__prog_type_subst__Kind_33));
#line 249 "prog_type_subst.m"
              }
#line 247 "prog_type_subst.m"
            }
#line 209 "prog_type_subst.m"
            break;
#line 209 "prog_type_subst.m"
        }
#line 209 "prog_type_subst.m"
        break;
#line 209 "prog_type_subst.m"
    }
#line 209 "prog_type_subst.m"
  }
#line 56 "prog_type_subst.m"
}

#line 53 "prog_type_subst.m"
void MR_CALL 
parse_tree__prog_type_subst__apply_variable_renaming_to_type_3_p_0(
#line 53 "prog_type_subst.m"
  MR_Word parse_tree__prog_type_subst__Renaming_4,
#line 53 "prog_type_subst.m"
  MR_Word parse_tree__prog_type_subst__Type0_5,
#line 53 "prog_type_subst.m"
  MR_Word * parse_tree__prog_type_subst__Type_6)
#line 53 "prog_type_subst.m"
{
#line 170 "prog_type_subst.m"
  {
#line 170 "prog_type_subst.m"
    MR_bool parse_tree__prog_type_subst__succeeded;

#line 170 "prog_type_subst.m"
#line 170 "prog_type_subst.m"
    switch (MR_tag((MR_Word) parse_tree__prog_type_subst__Type0_5)) {
#line 170 "prog_type_subst.m"
      default: /*NOTREACHED*/ MR_assert(0);
#line 170 "prog_type_subst.m"
      case (MR_Integer) 0:
#line 170 "prog_type_subst.m"
        {
#line 170 "prog_type_subst.m"
          MR_Word parse_tree__prog_type_subst__TVar0_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_type_subst__Type0_5, (MR_Integer) 0)));
#line 170 "prog_type_subst.m"
          MR_Word parse_tree__prog_type_subst__Kind_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_type_subst__Type0_5, (MR_Integer) 1)));
#line 170 "prog_type_subst.m"
          MR_Word parse_tree__prog_type_subst__TVar_9;
#line 135 "prog_type_subst.m"
          MR_Word parse_tree__prog_type_subst__TVar1_42;
#line 133 "prog_type_subst.m"
          MR_Word parse_tree__prog_type_subst__TypeInfo_8_43 = (MR_Word) &parse_tree__prog_type_subst_scalar_common_1[0];
#line 133 "prog_type_subst.m"
          MR_Box parse_tree__prog_type_subst__conv1_TVar1_42;

#line 133 "prog_type_subst.m"
          {
#line 133 "prog_type_subst.m"
            parse_tree__prog_type_subst__succeeded = mercury__map__search_3_p_0(parse_tree__prog_type_subst__TypeInfo_8_43, parse_tree__prog_type_subst__TypeInfo_8_43, parse_tree__prog_type_subst__Renaming_4, ((MR_Box) (parse_tree__prog_type_subst__TVar0_7)), &parse_tree__prog_type_subst__conv1_TVar1_42);
          }
#line 133 "prog_type_subst.m"
          if (parse_tree__prog_type_subst__succeeded)
#line 133 "prog_type_subst.m"
            {
#line 133 "prog_type_subst.m"
              parse_tree__prog_type_subst__TVar1_42 = ((MR_Word) parse_tree__prog_type_subst__conv1_TVar1_42);
#line 133 "prog_type_subst.m"
              parse_tree__prog_type_subst__succeeded = MR_TRUE;
#line 133 "prog_type_subst.m"
            }
#line 135 "prog_type_subst.m"
          if (parse_tree__prog_type_subst__succeeded)
#line 134 "prog_type_subst.m"
            parse_tree__prog_type_subst__TVar_9 = parse_tree__prog_type_subst__TVar1_42;
#line 135 "prog_type_subst.m"
          else
#line 136 "prog_type_subst.m"
            parse_tree__prog_type_subst__TVar_9 = parse_tree__prog_type_subst__TVar0_7;
#line 172 "prog_type_subst.m"
          {
#line 172 "prog_type_subst.m"
            MR_Word base;
#line 172 "prog_type_subst.m"
            base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 172 "prog_type_subst.m"
            *parse_tree__prog_type_subst__Type_6 = base;
#line 172 "prog_type_subst.m"
            MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (parse_tree__prog_type_subst__TVar_9));
#line 172 "prog_type_subst.m"
            MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (parse_tree__prog_type_subst__Kind_8));
#line 172 "prog_type_subst.m"
          }
#line 170 "prog_type_subst.m"
        }
#line 170 "prog_type_subst.m"
        break;
#line 170 "prog_type_subst.m"
      case (MR_Integer) 1:
#line 174 "prog_type_subst.m"
        {
#line 174 "prog_type_subst.m"
          MR_Word parse_tree__prog_type_subst__Name_10 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_type_subst__Type0_5, (MR_Integer) 0)));
#line 174 "prog_type_subst.m"
          MR_Word parse_tree__prog_type_subst__Args0_11 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_type_subst__Type0_5, (MR_Integer) 1)));
#line 174 "prog_type_subst.m"
          MR_Word parse_tree__prog_type_subst__Args_12;
#line 174 "prog_type_subst.m"
          MR_Word parse_tree__prog_type_subst__Kind_22 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_type_subst__Type0_5, (MR_Integer) 2)));

#line 175 "prog_type_subst.m"
          {
#line 175 "prog_type_subst.m"
            parse_tree__prog_type_subst__apply_variable_renaming_to_type_list_3_p_0(parse_tree__prog_type_subst__Renaming_4, parse_tree__prog_type_subst__Args0_11, &parse_tree__prog_type_subst__Args_12);
          }
#line 176 "prog_type_subst.m"
          {
#line 176 "prog_type_subst.m"
            MR_Word base;
#line 176 "prog_type_subst.m"
            base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
#line 176 "prog_type_subst.m"
            *parse_tree__prog_type_subst__Type_6 = base;
#line 176 "prog_type_subst.m"
            MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (parse_tree__prog_type_subst__Name_10));
#line 176 "prog_type_subst.m"
            MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (parse_tree__prog_type_subst__Args_12));
#line 176 "prog_type_subst.m"
            MR_hl_field(MR_mktag(1), base, 2) = ((MR_Box) (parse_tree__prog_type_subst__Kind_22));
#line 176 "prog_type_subst.m"
          }
#line 174 "prog_type_subst.m"
        }
#line 170 "prog_type_subst.m"
        break;
#line 170 "prog_type_subst.m"
      case (MR_Integer) 2:
#line 179 "prog_type_subst.m"
        *parse_tree__prog_type_subst__Type_6 = parse_tree__prog_type_subst__Type0_5;
#line 170 "prog_type_subst.m"
        break;
#line 170 "prog_type_subst.m"
      case (MR_Integer) 3:
#line 170 "prog_type_subst.m"
#line 170 "prog_type_subst.m"
        switch (((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__prog_type_subst__Type0_5, (MR_Integer) 0)))) {
#line 170 "prog_type_subst.m"
          default: /*NOTREACHED*/ MR_assert(0);
#line 170 "prog_type_subst.m"
          case (MR_Integer) 0:
#line 193 "prog_type_subst.m"
            {
#line 193 "prog_type_subst.m"
              MR_Word parse_tree__prog_type_subst__Kind_25 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__prog_type_subst__Type0_5, (MR_Integer) 2)));
#line 193 "prog_type_subst.m"
              MR_Word parse_tree__prog_type_subst__Args0_26 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__prog_type_subst__Type0_5, (MR_Integer) 1)));
#line 193 "prog_type_subst.m"
              MR_Word parse_tree__prog_type_subst__Args_27;

#line 194 "prog_type_subst.m"
              {
#line 194 "prog_type_subst.m"
                parse_tree__prog_type_subst__apply_variable_renaming_to_type_list_3_p_0(parse_tree__prog_type_subst__Renaming_4, parse_tree__prog_type_subst__Args0_26, &parse_tree__prog_type_subst__Args_27);
              }
#line 195 "prog_type_subst.m"
              {
#line 195 "prog_type_subst.m"
                MR_Word base;
#line 195 "prog_type_subst.m"
                base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
#line 195 "prog_type_subst.m"
                *parse_tree__prog_type_subst__Type_6 = base;
#line 195 "prog_type_subst.m"
                MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 0));
#line 195 "prog_type_subst.m"
                MR_hl_field(MR_mktag(3), base, 1) = ((MR_Box) (parse_tree__prog_type_subst__Args_27));
#line 195 "prog_type_subst.m"
                MR_hl_field(MR_mktag(3), base, 2) = ((MR_Box) (parse_tree__prog_type_subst__Kind_25));
#line 195 "prog_type_subst.m"
              }
#line 193 "prog_type_subst.m"
            }
#line 170 "prog_type_subst.m"
            break;
#line 170 "prog_type_subst.m"
          case (MR_Integer) 1:
#line 181 "prog_type_subst.m"
            {
#line 181 "prog_type_subst.m"
              MR_Word parse_tree__prog_type_subst__MaybeReturn0_14 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__prog_type_subst__Type0_5, (MR_Integer) 2)));
#line 181 "prog_type_subst.m"
              MR_Word parse_tree__prog_type_subst__Purity_15 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__prog_type_subst__Type0_5, (MR_Integer) 3)));
#line 181 "prog_type_subst.m"
              MR_Word parse_tree__prog_type_subst__MaybeReturn_19;
#line 181 "prog_type_subst.m"
              MR_Word parse_tree__prog_type_subst__Args0_23 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__prog_type_subst__Type0_5, (MR_Integer) 1)));
#line 181 "prog_type_subst.m"
              MR_Word parse_tree__prog_type_subst__Args_24;

#line 182 "prog_type_subst.m"
              {
#line 182 "prog_type_subst.m"
                parse_tree__prog_type_subst__apply_variable_renaming_to_type_list_3_p_0(parse_tree__prog_type_subst__Renaming_4, parse_tree__prog_type_subst__Args0_23, &parse_tree__prog_type_subst__Args_24);
              }
#line 187 "prog_type_subst.m"
              if ((parse_tree__prog_type_subst__MaybeReturn0_14 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 189 "prog_type_subst.m"
                parse_tree__prog_type_subst__MaybeReturn_19 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 187 "prog_type_subst.m"
              else
#line 184 "prog_type_subst.m"
                {
#line 184 "prog_type_subst.m"
                  MR_Word parse_tree__prog_type_subst__Return0_17 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_type_subst__MaybeReturn0_14, (MR_Integer) 0)));
#line 184 "prog_type_subst.m"
                  MR_Word parse_tree__prog_type_subst__Return_18;

#line 185 "prog_type_subst.m"
                  {
#line 185 "prog_type_subst.m"
                    parse_tree__prog_type_subst__apply_variable_renaming_to_type_3_p_0(parse_tree__prog_type_subst__Renaming_4, parse_tree__prog_type_subst__Return0_17, &parse_tree__prog_type_subst__Return_18);
                  }
#line 186 "prog_type_subst.m"
                  {
#line 186 "prog_type_subst.m"
                    parse_tree__prog_type_subst__MaybeReturn_19 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 186 "prog_type_subst.m"
                    MR_hl_field(MR_mktag(1), parse_tree__prog_type_subst__MaybeReturn_19, 0) = ((MR_Box) (parse_tree__prog_type_subst__Return_18));
#line 186 "prog_type_subst.m"
                  }
#line 184 "prog_type_subst.m"
                }
#line 191 "prog_type_subst.m"
              {
#line 191 "prog_type_subst.m"
                MR_Word base;
#line 191 "prog_type_subst.m"
                base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL));
#line 191 "prog_type_subst.m"
                *parse_tree__prog_type_subst__Type_6 = base;
#line 191 "prog_type_subst.m"
                MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 191 "prog_type_subst.m"
                MR_hl_field(MR_mktag(3), base, 1) = ((MR_Box) (parse_tree__prog_type_subst__Args_24));
#line 191 "prog_type_subst.m"
                MR_hl_field(MR_mktag(3), base, 2) = ((MR_Box) (parse_tree__prog_type_subst__MaybeReturn_19));
#line 191 "prog_type_subst.m"
                MR_hl_field(MR_mktag(3), base, 3) = ((MR_Box) (parse_tree__prog_type_subst__Purity_15));
#line 191 "prog_type_subst.m"
                MR_hl_field(MR_mktag(3), base, 4) = NULL;
#line 191 "prog_type_subst.m"
              }
#line 181 "prog_type_subst.m"
            }
#line 170 "prog_type_subst.m"
            break;
#line 170 "prog_type_subst.m"
          case (MR_Integer) 2:
#line 197 "prog_type_subst.m"
            {
#line 197 "prog_type_subst.m"
              MR_Word parse_tree__prog_type_subst__TVar0_28 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__prog_type_subst__Type0_5, (MR_Integer) 1)));
#line 197 "prog_type_subst.m"
              MR_Word parse_tree__prog_type_subst__Kind_29 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__prog_type_subst__Type0_5, (MR_Integer) 3)));
#line 197 "prog_type_subst.m"
              MR_Word parse_tree__prog_type_subst__TVar_30;
#line 197 "prog_type_subst.m"
              MR_Word parse_tree__prog_type_subst__Args0_31 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__prog_type_subst__Type0_5, (MR_Integer) 2)));
#line 197 "prog_type_subst.m"
              MR_Word parse_tree__prog_type_subst__Args_32;
#line 135 "prog_type_subst.m"
              MR_Word parse_tree__prog_type_subst__TVar1_37;
#line 133 "prog_type_subst.m"
              MR_Word parse_tree__prog_type_subst__TypeInfo_8_38;
#line 133 "prog_type_subst.m"
              MR_Box parse_tree__prog_type_subst__conv0_TVar1_37;

#line 198 "prog_type_subst.m"
              {
#line 198 "prog_type_subst.m"
                parse_tree__prog_type_subst__apply_variable_renaming_to_type_list_3_p_0(parse_tree__prog_type_subst__Renaming_4, parse_tree__prog_type_subst__Args0_31, &parse_tree__prog_type_subst__Args_32);
              }
#line 3079 "parse_tree.prog_type_subst.c"
              parse_tree__prog_type_subst__TypeInfo_8_38 = (MR_Word) &parse_tree__prog_type_subst_scalar_common_1[0];
#line 133 "prog_type_subst.m"
              {
#line 133 "prog_type_subst.m"
                parse_tree__prog_type_subst__succeeded = mercury__map__search_3_p_0(parse_tree__prog_type_subst__TypeInfo_8_38, parse_tree__prog_type_subst__TypeInfo_8_38, parse_tree__prog_type_subst__Renaming_4, ((MR_Box) (parse_tree__prog_type_subst__TVar0_28)), &parse_tree__prog_type_subst__conv0_TVar1_37);
              }
#line 133 "prog_type_subst.m"
              if (parse_tree__prog_type_subst__succeeded)
#line 133 "prog_type_subst.m"
                {
#line 133 "prog_type_subst.m"
                  parse_tree__prog_type_subst__TVar1_37 = ((MR_Word) parse_tree__prog_type_subst__conv0_TVar1_37);
#line 133 "prog_type_subst.m"
                  parse_tree__prog_type_subst__succeeded = MR_TRUE;
#line 133 "prog_type_subst.m"
                }
#line 135 "prog_type_subst.m"
              if (parse_tree__prog_type_subst__succeeded)
#line 134 "prog_type_subst.m"
                parse_tree__prog_type_subst__TVar_30 = parse_tree__prog_type_subst__TVar1_37;
#line 135 "prog_type_subst.m"
              else
#line 136 "prog_type_subst.m"
                parse_tree__prog_type_subst__TVar_30 = parse_tree__prog_type_subst__TVar0_28;
#line 200 "prog_type_subst.m"
              {
#line 200 "prog_type_subst.m"
                MR_Word base;
#line 200 "prog_type_subst.m"
                base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL));
#line 200 "prog_type_subst.m"
                *parse_tree__prog_type_subst__Type_6 = base;
#line 200 "prog_type_subst.m"
                MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
#line 200 "prog_type_subst.m"
                MR_hl_field(MR_mktag(3), base, 1) = ((MR_Box) (parse_tree__prog_type_subst__TVar_30));
#line 200 "prog_type_subst.m"
                MR_hl_field(MR_mktag(3), base, 2) = ((MR_Box) (parse_tree__prog_type_subst__Args_32));
#line 200 "prog_type_subst.m"
                MR_hl_field(MR_mktag(3), base, 3) = ((MR_Box) (parse_tree__prog_type_subst__Kind_29));
#line 200 "prog_type_subst.m"
              }
#line 197 "prog_type_subst.m"
            }
#line 170 "prog_type_subst.m"
            break;
#line 170 "prog_type_subst.m"
          case (MR_Integer) 3:
#line 202 "prog_type_subst.m"
            {
#line 202 "prog_type_subst.m"
              MR_Word parse_tree__prog_type_subst__BaseType0_20 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__prog_type_subst__Type0_5, (MR_Integer) 1)));
#line 202 "prog_type_subst.m"
              MR_Word parse_tree__prog_type_subst__BaseType_21;
#line 202 "prog_type_subst.m"
              MR_Word parse_tree__prog_type_subst__Kind_33 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__prog_type_subst__Type0_5, (MR_Integer) 2)));

#line 203 "prog_type_subst.m"
              {
#line 203 "prog_type_subst.m"
                parse_tree__prog_type_subst__apply_variable_renaming_to_type_3_p_0(parse_tree__prog_type_subst__Renaming_4, parse_tree__prog_type_subst__BaseType0_20, &parse_tree__prog_type_subst__BaseType_21);
              }
#line 204 "prog_type_subst.m"
              {
#line 204 "prog_type_subst.m"
                MR_Word base;
#line 204 "prog_type_subst.m"
                base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
#line 204 "prog_type_subst.m"
                *parse_tree__prog_type_subst__Type_6 = base;
#line 204 "prog_type_subst.m"
                MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 3));
#line 204 "prog_type_subst.m"
                MR_hl_field(MR_mktag(3), base, 1) = ((MR_Box) (parse_tree__prog_type_subst__BaseType_21));
#line 204 "prog_type_subst.m"
                MR_hl_field(MR_mktag(3), base, 2) = ((MR_Box) (parse_tree__prog_type_subst__Kind_33));
#line 204 "prog_type_subst.m"
              }
#line 202 "prog_type_subst.m"
            }
#line 170 "prog_type_subst.m"
            break;
#line 170 "prog_type_subst.m"
        }
#line 170 "prog_type_subst.m"
        break;
#line 170 "prog_type_subst.m"
    }
#line 170 "prog_type_subst.m"
  }
#line 53 "prog_type_subst.m"
}

#line 164 "prog_type_subst.m"
static void MR_CALL 
parse_tree__prog_type_subst__apply_rec_subst_to_tvar_list_4_p_0_1(
#line 164 "prog_type_subst.m"
  MR_Box parse_tree__prog_type_subst__closure_arg,
#line 164 "prog_type_subst.m"
  MR_Box parse_tree__prog_type_subst__wrapper_arg_1,
#line 164 "prog_type_subst.m"
  MR_Box * parse_tree__prog_type_subst__wrapper_arg_2)
#line 164 "prog_type_subst.m"
{
#line 164 "prog_type_subst.m"
  {
#line 164 "prog_type_subst.m"
    MR_Box parse_tree__prog_type_subst__closure = parse_tree__prog_type_subst__closure_arg;
#line 164 "prog_type_subst.m"
    MR_Word parse_tree__prog_type_subst__conv0_Type_8;

#line 164 "prog_type_subst.m"
    {
#line 164 "prog_type_subst.m"
      parse_tree__prog_type_subst__apply_rec_subst_to_tvar_4_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_type_subst__closure, (MR_Integer) 3))), ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_type_subst__closure, (MR_Integer) 4))), ((MR_Word) parse_tree__prog_type_subst__wrapper_arg_1), &parse_tree__prog_type_subst__conv0_Type_8);
    }
#line 164 "prog_type_subst.m"
    *parse_tree__prog_type_subst__wrapper_arg_2 = ((MR_Box) (parse_tree__prog_type_subst__conv0_Type_8));
#line 164 "prog_type_subst.m"
  }
#line 164 "prog_type_subst.m"
}

#line 48 "prog_type_subst.m"
void MR_CALL 
parse_tree__prog_type_subst__apply_rec_subst_to_tvar_list_4_p_0(
#line 48 "prog_type_subst.m"
  MR_Word parse_tree__prog_type_subst__KindMap_5,
#line 48 "prog_type_subst.m"
  MR_Word parse_tree__prog_type_subst__Subst_6,
#line 48 "prog_type_subst.m"
  MR_Word parse_tree__prog_type_subst__TVars_7,
#line 48 "prog_type_subst.m"
  MR_Word * parse_tree__prog_type_subst__Types_8)
#line 48 "prog_type_subst.m"
{
#line 163 "prog_type_subst.m"
  {
#line 163 "prog_type_subst.m"
    MR_bool parse_tree__prog_type_subst__succeeded;
#line 163 "prog_type_subst.m"
    MR_Word parse_tree__prog_type_subst__V_9_9;

#line 164 "prog_type_subst.m"
    {
#line 164 "prog_type_subst.m"
      parse_tree__prog_type_subst__V_9_9 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
#line 164 "prog_type_subst.m"
      MR_hl_field(MR_mktag(0), parse_tree__prog_type_subst__V_9_9, 0) = ((MR_Box) (&parse_tree__prog_type_subst_scalar_common_5[0]));
#line 164 "prog_type_subst.m"
      MR_hl_field(MR_mktag(0), parse_tree__prog_type_subst__V_9_9, 1) = ((MR_Box) (parse_tree__prog_type_subst__apply_rec_subst_to_tvar_list_4_p_0_1));
#line 164 "prog_type_subst.m"
      MR_hl_field(MR_mktag(0), parse_tree__prog_type_subst__V_9_9, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
#line 164 "prog_type_subst.m"
      MR_hl_field(MR_mktag(0), parse_tree__prog_type_subst__V_9_9, 3) = ((MR_Box) (parse_tree__prog_type_subst__KindMap_5));
#line 164 "prog_type_subst.m"
      MR_hl_field(MR_mktag(0), parse_tree__prog_type_subst__V_9_9, 4) = ((MR_Box) (parse_tree__prog_type_subst__Subst_6));
#line 164 "prog_type_subst.m"
    }
#line 164 "prog_type_subst.m"
    {
#line 164 "prog_type_subst.m"
      mercury__list__map_3_p_0((MR_Word) &parse_tree__prog_type_subst_scalar_common_1[0], (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0, parse_tree__prog_type_subst__V_9_9, parse_tree__prog_type_subst__TVars_7, parse_tree__prog_type_subst__Types_8);
    }
#line 163 "prog_type_subst.m"
  }
#line 48 "prog_type_subst.m"
}

#line 161 "prog_type_subst.m"
static void MR_CALL 
parse_tree__prog_type_subst__apply_subst_to_tvar_list_4_p_0_1(
#line 161 "prog_type_subst.m"
  MR_Box parse_tree__prog_type_subst__closure_arg,
#line 161 "prog_type_subst.m"
  MR_Box parse_tree__prog_type_subst__wrapper_arg_1,
#line 161 "prog_type_subst.m"
  MR_Box * parse_tree__prog_type_subst__wrapper_arg_2)
#line 161 "prog_type_subst.m"
{
#line 161 "prog_type_subst.m"
  {
#line 161 "prog_type_subst.m"
    MR_Box parse_tree__prog_type_subst__closure = parse_tree__prog_type_subst__closure_arg;
#line 161 "prog_type_subst.m"
    MR_Word parse_tree__prog_type_subst__conv0_Type_8;

#line 161 "prog_type_subst.m"
    {
#line 161 "prog_type_subst.m"
      parse_tree__prog_type_subst__apply_subst_to_tvar_4_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_type_subst__closure, (MR_Integer) 3))), ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_type_subst__closure, (MR_Integer) 4))), ((MR_Word) parse_tree__prog_type_subst__wrapper_arg_1), &parse_tree__prog_type_subst__conv0_Type_8);
    }
#line 161 "prog_type_subst.m"
    *parse_tree__prog_type_subst__wrapper_arg_2 = ((MR_Box) (parse_tree__prog_type_subst__conv0_Type_8));
#line 161 "prog_type_subst.m"
  }
#line 161 "prog_type_subst.m"
}

#line 45 "prog_type_subst.m"
void MR_CALL 
parse_tree__prog_type_subst__apply_subst_to_tvar_list_4_p_0(
#line 45 "prog_type_subst.m"
  MR_Word parse_tree__prog_type_subst__KindMap_5,
#line 45 "prog_type_subst.m"
  MR_Word parse_tree__prog_type_subst__Subst_6,
#line 45 "prog_type_subst.m"
  MR_Word parse_tree__prog_type_subst__TVars_7,
#line 45 "prog_type_subst.m"
  MR_Word * parse_tree__prog_type_subst__Types_8)
#line 45 "prog_type_subst.m"
{
#line 160 "prog_type_subst.m"
  {
#line 160 "prog_type_subst.m"
    MR_bool parse_tree__prog_type_subst__succeeded;
#line 160 "prog_type_subst.m"
    MR_Word parse_tree__prog_type_subst__V_9_9;

#line 161 "prog_type_subst.m"
    {
#line 161 "prog_type_subst.m"
      parse_tree__prog_type_subst__V_9_9 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
#line 161 "prog_type_subst.m"
      MR_hl_field(MR_mktag(0), parse_tree__prog_type_subst__V_9_9, 0) = ((MR_Box) (&parse_tree__prog_type_subst_scalar_common_5[0]));
#line 161 "prog_type_subst.m"
      MR_hl_field(MR_mktag(0), parse_tree__prog_type_subst__V_9_9, 1) = ((MR_Box) (parse_tree__prog_type_subst__apply_subst_to_tvar_list_4_p_0_1));
#line 161 "prog_type_subst.m"
      MR_hl_field(MR_mktag(0), parse_tree__prog_type_subst__V_9_9, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
#line 161 "prog_type_subst.m"
      MR_hl_field(MR_mktag(0), parse_tree__prog_type_subst__V_9_9, 3) = ((MR_Box) (parse_tree__prog_type_subst__KindMap_5));
#line 161 "prog_type_subst.m"
      MR_hl_field(MR_mktag(0), parse_tree__prog_type_subst__V_9_9, 4) = ((MR_Box) (parse_tree__prog_type_subst__Subst_6));
#line 161 "prog_type_subst.m"
    }
#line 161 "prog_type_subst.m"
    {
#line 161 "prog_type_subst.m"
      mercury__list__map_3_p_0((MR_Word) &parse_tree__prog_type_subst_scalar_common_1[0], (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0, parse_tree__prog_type_subst__V_9_9, parse_tree__prog_type_subst__TVars_7, parse_tree__prog_type_subst__Types_8);
    }
#line 160 "prog_type_subst.m"
  }
#line 45 "prog_type_subst.m"
}

#line 158 "prog_type_subst.m"
static void MR_CALL 
parse_tree__prog_type_subst__apply_variable_renaming_to_tvar_list_3_p_0_1(
#line 158 "prog_type_subst.m"
  MR_Box parse_tree__prog_type_subst__closure_arg,
#line 158 "prog_type_subst.m"
  MR_Box parse_tree__prog_type_subst__wrapper_arg_1,
#line 158 "prog_type_subst.m"
  MR_Box * parse_tree__prog_type_subst__wrapper_arg_2)
#line 158 "prog_type_subst.m"
{
#line 158 "prog_type_subst.m"
  {
#line 158 "prog_type_subst.m"
    MR_Box parse_tree__prog_type_subst__closure = parse_tree__prog_type_subst__closure_arg;
#line 158 "prog_type_subst.m"
    MR_Word parse_tree__prog_type_subst__conv0_TVar_6;

#line 158 "prog_type_subst.m"
    {
#line 158 "prog_type_subst.m"
      parse_tree__prog_type_subst__apply_variable_renaming_to_tvar_3_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_type_subst__closure, (MR_Integer) 3))), ((MR_Word) parse_tree__prog_type_subst__wrapper_arg_1), &parse_tree__prog_type_subst__conv0_TVar_6);
    }
#line 158 "prog_type_subst.m"
    *parse_tree__prog_type_subst__wrapper_arg_2 = ((MR_Box) (parse_tree__prog_type_subst__conv0_TVar_6));
#line 158 "prog_type_subst.m"
  }
#line 158 "prog_type_subst.m"
}

#line 42 "prog_type_subst.m"
void MR_CALL 
parse_tree__prog_type_subst__apply_variable_renaming_to_tvar_list_3_p_0(
#line 42 "prog_type_subst.m"
  MR_Word parse_tree__prog_type_subst__Renaming_4,
#line 42 "prog_type_subst.m"
  MR_Word parse_tree__prog_type_subst__TVars0_5,
#line 42 "prog_type_subst.m"
  MR_Word * parse_tree__prog_type_subst__TVars_6)
#line 42 "prog_type_subst.m"
{
#line 157 "prog_type_subst.m"
  {
#line 157 "prog_type_subst.m"
    MR_bool parse_tree__prog_type_subst__succeeded;
#line 157 "prog_type_subst.m"
    MR_Word parse_tree__prog_type_subst__TypeInfo_10_10;
#line 157 "prog_type_subst.m"
    MR_Word parse_tree__prog_type_subst__V_7_7;

#line 158 "prog_type_subst.m"
    {
#line 158 "prog_type_subst.m"
      parse_tree__prog_type_subst__V_7_7 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
#line 158 "prog_type_subst.m"
      MR_hl_field(MR_mktag(0), parse_tree__prog_type_subst__V_7_7, 0) = ((MR_Box) (&parse_tree__prog_type_subst_scalar_common_4[0]));
#line 158 "prog_type_subst.m"
      MR_hl_field(MR_mktag(0), parse_tree__prog_type_subst__V_7_7, 1) = ((MR_Box) (parse_tree__prog_type_subst__apply_variable_renaming_to_tvar_list_3_p_0_1));
#line 158 "prog_type_subst.m"
      MR_hl_field(MR_mktag(0), parse_tree__prog_type_subst__V_7_7, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 158 "prog_type_subst.m"
      MR_hl_field(MR_mktag(0), parse_tree__prog_type_subst__V_7_7, 3) = ((MR_Box) (parse_tree__prog_type_subst__Renaming_4));
#line 158 "prog_type_subst.m"
    }
#line 3389 "parse_tree.prog_type_subst.c"
    parse_tree__prog_type_subst__TypeInfo_10_10 = (MR_Word) &parse_tree__prog_type_subst_scalar_common_1[0];
#line 158 "prog_type_subst.m"
    {
#line 158 "prog_type_subst.m"
      mercury__list__map_3_p_0(parse_tree__prog_type_subst__TypeInfo_10_10, parse_tree__prog_type_subst__TypeInfo_10_10, parse_tree__prog_type_subst__V_7_7, parse_tree__prog_type_subst__TVars0_5, parse_tree__prog_type_subst__TVars_6);
    }
#line 157 "prog_type_subst.m"
  }
#line 42 "prog_type_subst.m"
}

#line 37 "prog_type_subst.m"
void MR_CALL 
parse_tree__prog_type_subst__apply_rec_subst_to_tvar_4_p_0(
#line 37 "prog_type_subst.m"
  MR_Word parse_tree__prog_type_subst__KindMap_5,
#line 37 "prog_type_subst.m"
  MR_Word parse_tree__prog_type_subst__Subst_6,
#line 37 "prog_type_subst.m"
  MR_Word parse_tree__prog_type_subst__TVar_7,
#line 37 "prog_type_subst.m"
  MR_Word * parse_tree__prog_type_subst__Type_8)
#line 37 "prog_type_subst.m"
{
#line 150 "prog_type_subst.m"
  {
#line 150 "prog_type_subst.m"
    MR_bool parse_tree__prog_type_subst__succeeded;
#line 150 "prog_type_subst.m"
    MR_Word parse_tree__prog_type_subst__Type0_9;
#line 148 "prog_type_subst.m"
    MR_Box parse_tree__prog_type_subst__conv0_Type0_9;

#line 148 "prog_type_subst.m"
    {
#line 148 "prog_type_subst.m"
      parse_tree__prog_type_subst__succeeded = mercury__map__search_3_p_0((MR_Word) &parse_tree__prog_type_subst_scalar_common_1[0], (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0, parse_tree__prog_type_subst__Subst_6, ((MR_Box) (parse_tree__prog_type_subst__TVar_7)), &parse_tree__prog_type_subst__conv0_Type0_9);
    }
#line 148 "prog_type_subst.m"
    if (parse_tree__prog_type_subst__succeeded)
#line 148 "prog_type_subst.m"
      {
#line 148 "prog_type_subst.m"
        parse_tree__prog_type_subst__Type0_9 = ((MR_Word) parse_tree__prog_type_subst__conv0_Type0_9);
#line 148 "prog_type_subst.m"
        parse_tree__prog_type_subst__succeeded = MR_TRUE;
#line 148 "prog_type_subst.m"
      }
#line 150 "prog_type_subst.m"
    if (parse_tree__prog_type_subst__succeeded)
#line 149 "prog_type_subst.m"
      {
#line 149 "prog_type_subst.m"
        parse_tree__prog_type_subst__apply_rec_subst_to_type_3_p_0(parse_tree__prog_type_subst__Subst_6, parse_tree__prog_type_subst__Type0_9, parse_tree__prog_type_subst__Type_8);
      }
#line 150 "prog_type_subst.m"
    else
#line 151 "prog_type_subst.m"
      {
#line 151 "prog_type_subst.m"
        MR_Word parse_tree__prog_type_subst__Kind_10;

#line 151 "prog_type_subst.m"
        {
#line 151 "prog_type_subst.m"
          parse_tree__prog_data__get_tvar_kind_3_p_0(parse_tree__prog_type_subst__KindMap_5, parse_tree__prog_type_subst__TVar_7, &parse_tree__prog_type_subst__Kind_10);
        }
#line 152 "prog_type_subst.m"
        {
#line 152 "prog_type_subst.m"
          MR_Word base;
#line 152 "prog_type_subst.m"
          base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 152 "prog_type_subst.m"
          *parse_tree__prog_type_subst__Type_8 = base;
#line 152 "prog_type_subst.m"
          MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (parse_tree__prog_type_subst__TVar_7));
#line 152 "prog_type_subst.m"
          MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (parse_tree__prog_type_subst__Kind_10));
#line 152 "prog_type_subst.m"
        }
#line 151 "prog_type_subst.m"
      }
#line 150 "prog_type_subst.m"
  }
#line 37 "prog_type_subst.m"
}

#line 34 "prog_type_subst.m"
void MR_CALL 
parse_tree__prog_type_subst__apply_subst_to_tvar_4_p_0(
#line 34 "prog_type_subst.m"
  MR_Word parse_tree__prog_type_subst__KindMap_5,
#line 34 "prog_type_subst.m"
  MR_Word parse_tree__prog_type_subst__Subst_6,
#line 34 "prog_type_subst.m"
  MR_Word parse_tree__prog_type_subst__TVar_7,
#line 34 "prog_type_subst.m"
  MR_Word * parse_tree__prog_type_subst__Type_8)
#line 34 "prog_type_subst.m"
{
#line 142 "prog_type_subst.m"
  {
#line 142 "prog_type_subst.m"
    MR_bool parse_tree__prog_type_subst__succeeded;
#line 142 "prog_type_subst.m"
    MR_Word parse_tree__prog_type_subst__Type0_9;
#line 140 "prog_type_subst.m"
    MR_Box parse_tree__prog_type_subst__conv0_Type0_9;

#line 140 "prog_type_subst.m"
    {
#line 140 "prog_type_subst.m"
      parse_tree__prog_type_subst__succeeded = mercury__map__search_3_p_0((MR_Word) &parse_tree__prog_type_subst_scalar_common_1[0], (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0, parse_tree__prog_type_subst__Subst_6, ((MR_Box) (parse_tree__prog_type_subst__TVar_7)), &parse_tree__prog_type_subst__conv0_Type0_9);
    }
#line 140 "prog_type_subst.m"
    if (parse_tree__prog_type_subst__succeeded)
#line 140 "prog_type_subst.m"
      {
#line 140 "prog_type_subst.m"
        parse_tree__prog_type_subst__Type0_9 = ((MR_Word) parse_tree__prog_type_subst__conv0_Type0_9);
#line 140 "prog_type_subst.m"
        parse_tree__prog_type_subst__succeeded = MR_TRUE;
#line 140 "prog_type_subst.m"
      }
#line 142 "prog_type_subst.m"
    if (parse_tree__prog_type_subst__succeeded)
#line 141 "prog_type_subst.m"
      {
#line 141 "prog_type_subst.m"
        parse_tree__prog_type_subst__apply_subst_to_type_3_p_0(parse_tree__prog_type_subst__Subst_6, parse_tree__prog_type_subst__Type0_9, parse_tree__prog_type_subst__Type_8);
      }
#line 142 "prog_type_subst.m"
    else
#line 143 "prog_type_subst.m"
      {
#line 143 "prog_type_subst.m"
        MR_Word parse_tree__prog_type_subst__Kind_10;

#line 143 "prog_type_subst.m"
        {
#line 143 "prog_type_subst.m"
          parse_tree__prog_data__get_tvar_kind_3_p_0(parse_tree__prog_type_subst__KindMap_5, parse_tree__prog_type_subst__TVar_7, &parse_tree__prog_type_subst__Kind_10);
        }
#line 144 "prog_type_subst.m"
        {
#line 144 "prog_type_subst.m"
          MR_Word base;
#line 144 "prog_type_subst.m"
          base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 144 "prog_type_subst.m"
          *parse_tree__prog_type_subst__Type_8 = base;
#line 144 "prog_type_subst.m"
          MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (parse_tree__prog_type_subst__TVar_7));
#line 144 "prog_type_subst.m"
          MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (parse_tree__prog_type_subst__Kind_10));
#line 144 "prog_type_subst.m"
        }
#line 143 "prog_type_subst.m"
      }
#line 142 "prog_type_subst.m"
  }
#line 34 "prog_type_subst.m"
}

#line 31 "prog_type_subst.m"
void MR_CALL 
parse_tree__prog_type_subst__apply_variable_renaming_to_tvar_3_p_0(
#line 31 "prog_type_subst.m"
  MR_Word parse_tree__prog_type_subst__Renaming_4,
#line 31 "prog_type_subst.m"
  MR_Word parse_tree__prog_type_subst__TVar0_5,
#line 31 "prog_type_subst.m"
  MR_Word * parse_tree__prog_type_subst__TVar_6)
#line 31 "prog_type_subst.m"
{
#line 135 "prog_type_subst.m"
  {
#line 135 "prog_type_subst.m"
    MR_bool parse_tree__prog_type_subst__succeeded;
#line 135 "prog_type_subst.m"
    MR_Word parse_tree__prog_type_subst__TVar1_7;
#line 133 "prog_type_subst.m"
    MR_Word parse_tree__prog_type_subst__TypeInfo_8_8 = (MR_Word) &parse_tree__prog_type_subst_scalar_common_1[0];
#line 133 "prog_type_subst.m"
    MR_Box parse_tree__prog_type_subst__conv0_TVar1_7;

#line 133 "prog_type_subst.m"
    {
#line 133 "prog_type_subst.m"
      parse_tree__prog_type_subst__succeeded = mercury__map__search_3_p_0(parse_tree__prog_type_subst__TypeInfo_8_8, parse_tree__prog_type_subst__TypeInfo_8_8, parse_tree__prog_type_subst__Renaming_4, ((MR_Box) (parse_tree__prog_type_subst__TVar0_5)), &parse_tree__prog_type_subst__conv0_TVar1_7);
    }
#line 133 "prog_type_subst.m"
    if (parse_tree__prog_type_subst__succeeded)
#line 133 "prog_type_subst.m"
      {
#line 133 "prog_type_subst.m"
        parse_tree__prog_type_subst__TVar1_7 = ((MR_Word) parse_tree__prog_type_subst__conv0_TVar1_7);
#line 133 "prog_type_subst.m"
        parse_tree__prog_type_subst__succeeded = MR_TRUE;
#line 133 "prog_type_subst.m"
      }
#line 135 "prog_type_subst.m"
    if (parse_tree__prog_type_subst__succeeded)
#line 134 "prog_type_subst.m"
      *parse_tree__prog_type_subst__TVar_6 = parse_tree__prog_type_subst__TVar1_7;
#line 135 "prog_type_subst.m"
    else
#line 136 "prog_type_subst.m"
      *parse_tree__prog_type_subst__TVar_6 = parse_tree__prog_type_subst__TVar0_5;
#line 135 "prog_type_subst.m"
  }
#line 31 "prog_type_subst.m"
}

#line 120 "prog_type_subst.m"
static void MR_CALL 
parse_tree__prog_type_subst__apply_variable_renaming_to_tvar_kind_map_3_p_0_1(
#line 120 "prog_type_subst.m"
  MR_Box parse_tree__prog_type_subst__closure_arg,
#line 120 "prog_type_subst.m"
  MR_Box parse_tree__prog_type_subst__wrapper_arg_1,
#line 120 "prog_type_subst.m"
  MR_Box parse_tree__prog_type_subst__wrapper_arg_2,
#line 120 "prog_type_subst.m"
  MR_Box parse_tree__prog_type_subst__wrapper_arg_3,
#line 120 "prog_type_subst.m"
  MR_Box * parse_tree__prog_type_subst__wrapper_arg_4)
#line 120 "prog_type_subst.m"
{
#line 120 "prog_type_subst.m"
  {
#line 120 "prog_type_subst.m"
    MR_Box parse_tree__prog_type_subst__closure = parse_tree__prog_type_subst__closure_arg;
#line 120 "prog_type_subst.m"
    MR_Word parse_tree__prog_type_subst__conv0_STATE_VARIABLE_KindMap_12;

#line 120 "prog_type_subst.m"
    {
#line 120 "prog_type_subst.m"
      parse_tree__prog_type_subst__apply_variable_renaming_to_tvar_kind_map_2_5_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_type_subst__closure, (MR_Integer) 3))), ((MR_Word) parse_tree__prog_type_subst__wrapper_arg_1), ((MR_Word) parse_tree__prog_type_subst__wrapper_arg_2), ((MR_Word) parse_tree__prog_type_subst__wrapper_arg_3), &parse_tree__prog_type_subst__conv0_STATE_VARIABLE_KindMap_12);
    }
#line 120 "prog_type_subst.m"
    *parse_tree__prog_type_subst__wrapper_arg_4 = ((MR_Box) (parse_tree__prog_type_subst__conv0_STATE_VARIABLE_KindMap_12));
#line 120 "prog_type_subst.m"
  }
#line 120 "prog_type_subst.m"
}

#line 26 "prog_type_subst.m"
void MR_CALL 
parse_tree__prog_type_subst__apply_variable_renaming_to_tvar_kind_map_3_p_0(
#line 26 "prog_type_subst.m"
  MR_Word parse_tree__prog_type_subst__Renaming_4,
#line 26 "prog_type_subst.m"
  MR_Word parse_tree__prog_type_subst__KindMap0_5,
#line 26 "prog_type_subst.m"
  MR_Word * parse_tree__prog_type_subst__KindMap_6)
#line 26 "prog_type_subst.m"
{
#line 119 "prog_type_subst.m"
  {
#line 119 "prog_type_subst.m"
    MR_bool parse_tree__prog_type_subst__succeeded;
#line 119 "prog_type_subst.m"
    MR_Word parse_tree__prog_type_subst__TypeInfo_13_13;
#line 119 "prog_type_subst.m"
    MR_Word parse_tree__prog_type_subst__TypeCtorInfo_14_14;
#line 119 "prog_type_subst.m"
    MR_Word parse_tree__prog_type_subst__V_7_7;
#line 119 "prog_type_subst.m"
    MR_Word parse_tree__prog_type_subst__V_8_8;
#line 120 "prog_type_subst.m"
    MR_Box parse_tree__prog_type_subst__conv1_KindMap_6;

#line 120 "prog_type_subst.m"
    {
#line 120 "prog_type_subst.m"
      parse_tree__prog_type_subst__V_7_7 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
#line 120 "prog_type_subst.m"
      MR_hl_field(MR_mktag(0), parse_tree__prog_type_subst__V_7_7, 0) = ((MR_Box) (&parse_tree__prog_type_subst_scalar_common_3[0]));
#line 120 "prog_type_subst.m"
      MR_hl_field(MR_mktag(0), parse_tree__prog_type_subst__V_7_7, 1) = ((MR_Box) (parse_tree__prog_type_subst__apply_variable_renaming_to_tvar_kind_map_3_p_0_1));
#line 120 "prog_type_subst.m"
      MR_hl_field(MR_mktag(0), parse_tree__prog_type_subst__V_7_7, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 120 "prog_type_subst.m"
      MR_hl_field(MR_mktag(0), parse_tree__prog_type_subst__V_7_7, 3) = ((MR_Box) (parse_tree__prog_type_subst__Renaming_4));
#line 120 "prog_type_subst.m"
    }
#line 3679 "parse_tree.prog_type_subst.c"
    parse_tree__prog_type_subst__TypeInfo_13_13 = (MR_Word) &parse_tree__prog_type_subst_scalar_common_1[0];
#line 3681 "parse_tree.prog_type_subst.c"
    parse_tree__prog_type_subst__TypeCtorInfo_14_14 = (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_kind_0;
#line 121 "prog_type_subst.m"
    {
#line 121 "prog_type_subst.m"
      parse_tree__prog_type_subst__V_8_8 = mercury__map__init_0_f_0(parse_tree__prog_type_subst__TypeInfo_13_13, parse_tree__prog_type_subst__TypeCtorInfo_14_14);
    }
#line 120 "prog_type_subst.m"
    {
#line 120 "prog_type_subst.m"
      mercury__map__foldl_4_p_0(parse_tree__prog_type_subst__TypeInfo_13_13, parse_tree__prog_type_subst__TypeCtorInfo_14_14, (MR_Word) &parse_tree__prog_type_subst_scalar_common_2[0], parse_tree__prog_type_subst__V_7_7, parse_tree__prog_type_subst__KindMap0_5, ((MR_Box) (parse_tree__prog_type_subst__V_8_8)), &parse_tree__prog_type_subst__conv1_KindMap_6);
    }
#line 120 "prog_type_subst.m"
    *parse_tree__prog_type_subst__KindMap_6 = ((MR_Word) parse_tree__prog_type_subst__conv1_KindMap_6);
#line 119 "prog_type_subst.m"
  }
#line 26 "prog_type_subst.m"
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

/* ensure everything is compiled with the same grade */
static const void *const MR_grade = &MR_GRADE_VAR;

/* :- end_module parse_tree.prog_type_subst. */
