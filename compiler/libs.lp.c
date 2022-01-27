/*
** Automatically generated from `lp.m'
** by the Mercury compiler,
** version rotd-2013-10-01, configured for x86_64-apple-darwin12.4.0.
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


/* :- module libs.lp. */
/* :- implementation. */

/*
INIT mercury__libs__lp__init
ENDINIT
*/

#include "libs.lp.mih"


#include "array.mih"
#include "assoc_list.mih"
#include "bitmap.mih"
#include "bool.mih"
#include "builtin.mih"
#include "char.mih"
#include "construct.mih"
#include "deconstruct.mih"
#include "enum.mih"
#include "float.mih"
#include "int.mih"
#include "io.mih"
#include "libs.mih"
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
#include "solutions.mih"
#include "stream.mih"
#include "string.mih"
#include "term.mih"
#include "time.mih"
#include "tree234.mih"
#include "type_desc.mih"
#include "univ.mih"
#include "varset.mih"



#line 810 "lp.m"
struct libs__lp__IntroducedFrom__pred__get_basis_vars__810__1_3_p_0_env_0_s {
#line 810 "lp.m"
  MR_Word libs__lp__IntroducedFrom__pred__get_basis_vars__810__1_3_p_0_env_0__Tab_3;
#line 810 "lp.m"
  MR_Word * libs__lp__IntroducedFrom__pred__get_basis_vars__810__1_3_p_0_env_0__HeadVar__3_29;
#line 810 "lp.m"
  MR_Cont libs__lp__IntroducedFrom__pred__get_basis_vars__810__1_3_p_0_env_0__cont;
#line 810 "lp.m"
  void * libs__lp__IntroducedFrom__pred__get_basis_vars__810__1_3_p_0_env_0__cont_env_ptr;
#line 810 "lp.m"
  MR_bool libs__lp__IntroducedFrom__pred__get_basis_vars__810__1_3_p_0_env_0__succeeded;
#line 810 "lp.m"
  MR_Word libs__lp__IntroducedFrom__pred__get_basis_vars__810__1_3_p_0_env_0__TypeCtorInfo_35_35;
#line 810 "lp.m"
  MR_Word libs__lp__IntroducedFrom__pred__get_basis_vars__810__1_3_p_0_env_0__TypeInfo_36_36;
#line 810 "lp.m"
  MR_Integer libs__lp__IntroducedFrom__pred__get_basis_vars__810__1_3_p_0_env_0__Col_16;
#line 810 "lp.m"
  MR_Word libs__lp__IntroducedFrom__pred__get_basis_vars__810__1_3_p_0_env_0__VarCols_19;
#line 810 "lp.m"
  MR_Integer libs__lp__IntroducedFrom__pred__get_basis_vars__810__1_3_p_0_env_0__V_38_38;
#line 811 "lp.m"
  MR_Box libs__lp__IntroducedFrom__pred__get_basis_vars__810__1_3_p_0_env_0__conv0_Col_16;
#line 813 "lp.m"
  MR_Box libs__lp__IntroducedFrom__pred__get_basis_vars__810__1_3_p_0_env_0__conv2_HeadVar__3_29;
#line 813 "lp.m"
  MR_Box libs__lp__IntroducedFrom__pred__get_basis_vars__810__1_3_p_0_env_0__conv1_V_38_38;
#line 810 "lp.m"
};

#line 800 "lp.m"
struct libs__lp__IntroducedFrom__pred__get_basis_vars__798__1_2_p_0_3_env_0_s {
#line 800 "lp.m"
  MR_Box * libs__lp__IntroducedFrom__pred__get_basis_vars__798__1_2_p_0_3_env_0__wrapper_arg_1;
#line 800 "lp.m"
  MR_Cont libs__lp__IntroducedFrom__pred__get_basis_vars__798__1_2_p_0_3_env_0__cont;
#line 800 "lp.m"
  void * libs__lp__IntroducedFrom__pred__get_basis_vars__798__1_2_p_0_3_env_0__cont_env_ptr;
#line 800 "lp.m"
  MR_Word libs__lp__IntroducedFrom__pred__get_basis_vars__798__1_2_p_0_3_env_0__conv0_HeadVar__3_25;
#line 800 "lp.m"
};

#line 798 "lp.m"
struct libs__lp__IntroducedFrom__pred__get_basis_vars__798__1_2_p_0_env_0_s {
#line 798 "lp.m"
  MR_Word libs__lp__IntroducedFrom__pred__get_basis_vars__798__1_2_p_0_env_0__Tab_3;
#line 798 "lp.m"
  MR_Integer * libs__lp__IntroducedFrom__pred__get_basis_vars__798__1_2_p_0_env_0__HeadVar__2_24;
#line 798 "lp.m"
  MR_Cont libs__lp__IntroducedFrom__pred__get_basis_vars__798__1_2_p_0_env_0__cont;
#line 798 "lp.m"
  void * libs__lp__IntroducedFrom__pred__get_basis_vars__798__1_2_p_0_env_0__cont_env_ptr;
#line 798 "lp.m"
  MR_bool libs__lp__IntroducedFrom__pred__get_basis_vars__798__1_2_p_0_env_0__succeeded;
#line 798 "lp.m"
  MR_Word libs__lp__IntroducedFrom__pred__get_basis_vars__798__1_2_p_0_env_0__TypeInfo_33_33;
#line 798 "lp.m"
  MR_Word libs__lp__IntroducedFrom__pred__get_basis_vars__798__1_2_p_0_env_0__NonZeroGoal_7;
#line 798 "lp.m"
  MR_Word libs__lp__IntroducedFrom__pred__get_basis_vars__798__1_2_p_0_env_0__Solns_11;
#line 798 "lp.m"
  MR_Word libs__lp__IntroducedFrom__pred__get_basis_vars__798__1_2_p_0_env_0__V_26_26;
#line 798 "lp.m"
  MR_Float libs__lp__IntroducedFrom__pred__get_basis_vars__798__1_2_p_0_env_0__V_27_27;
#line 798 "lp.m"
  MR_Word libs__lp__IntroducedFrom__pred__get_basis_vars__798__1_2_p_0_env_0__V_28_28;
#line 798 "lp.m"
};

#line 800 "lp.m"
struct libs__lp__IntroducedFrom__pred__get_basis_vars__800__1_3_p_0_env_0_s {
#line 800 "lp.m"
  MR_Word libs__lp__IntroducedFrom__pred__get_basis_vars__800__1_3_p_0_env_0__Tab_3;
#line 800 "lp.m"
  MR_Integer libs__lp__IntroducedFrom__pred__get_basis_vars__800__1_3_p_0_env_0__HeadVar__2_24;
#line 800 "lp.m"
  MR_Word * libs__lp__IntroducedFrom__pred__get_basis_vars__800__1_3_p_0_env_0__HeadVar__3_25;
#line 800 "lp.m"
  MR_Cont libs__lp__IntroducedFrom__pred__get_basis_vars__800__1_3_p_0_env_0__cont;
#line 800 "lp.m"
  void * libs__lp__IntroducedFrom__pred__get_basis_vars__800__1_3_p_0_env_0__cont_env_ptr;
#line 800 "lp.m"
  MR_bool libs__lp__IntroducedFrom__pred__get_basis_vars__800__1_3_p_0_env_0__succeeded;
#line 800 "lp.m"
  MR_Integer libs__lp__IntroducedFrom__pred__get_basis_vars__800__1_3_p_0_env_0__R_9;
#line 800 "lp.m"
  MR_Float libs__lp__IntroducedFrom__pred__get_basis_vars__800__1_3_p_0_env_0__Z_10;
#line 800 "lp.m"
  MR_Word libs__lp__IntroducedFrom__pred__get_basis_vars__800__1_3_p_0_env_0__SR_45;
#line 800 "lp.m"
};

#line 651 "lp.m"
struct libs__lp__IntroducedFrom__pred__pivot__651__1_3_p_0_env_0_s {
#line 651 "lp.m"
  MR_Integer libs__lp__IntroducedFrom__pred__pivot__651__1_3_p_0_env_0__Q_6;
#line 651 "lp.m"
  MR_Word * libs__lp__IntroducedFrom__pred__pivot__651__1_3_p_0_env_0__HeadVar__3_37;
#line 651 "lp.m"
  MR_Cont libs__lp__IntroducedFrom__pred__pivot__651__1_3_p_0_env_0__cont;
#line 651 "lp.m"
  void * libs__lp__IntroducedFrom__pred__pivot__651__1_3_p_0_env_0__cont_env_ptr;
#line 651 "lp.m"
  MR_bool libs__lp__IntroducedFrom__pred__pivot__651__1_3_p_0_env_0__succeeded;
#line 651 "lp.m"
  MR_Integer libs__lp__IntroducedFrom__pred__pivot__651__1_3_p_0_env_0__J_60;
#line 651 "lp.m"
  MR_Word libs__lp__IntroducedFrom__pred__pivot__651__1_3_p_0_env_0__SR_88;
#line 651 "lp.m"
};

#line 635 "lp.m"
struct libs__lp__IntroducedFrom__pred__pivot__635__1_4_p_0_env_0_s {
#line 635 "lp.m"
  MR_Integer libs__lp__IntroducedFrom__pred__pivot__635__1_4_p_0_env_0__P_5;
#line 635 "lp.m"
  MR_Integer libs__lp__IntroducedFrom__pred__pivot__635__1_4_p_0_env_0__Q_6;
#line 635 "lp.m"
  MR_Word libs__lp__IntroducedFrom__pred__pivot__635__1_4_p_0_env_0__STATE_VARIABLE_Tableau_0_25;
#line 635 "lp.m"
  MR_Word * libs__lp__IntroducedFrom__pred__pivot__635__1_4_p_0_env_0__HeadVar__4_27;
#line 635 "lp.m"
  MR_Cont libs__lp__IntroducedFrom__pred__pivot__635__1_4_p_0_env_0__cont;
#line 635 "lp.m"
  void * libs__lp__IntroducedFrom__pred__pivot__635__1_4_p_0_env_0__cont_env_ptr;
#line 635 "lp.m"
  MR_bool libs__lp__IntroducedFrom__pred__pivot__635__1_4_p_0_env_0__succeeded;
#line 635 "lp.m"
  MR_Integer libs__lp__IntroducedFrom__pred__pivot__635__1_4_p_0_env_0__J_11;
#line 635 "lp.m"
  MR_Integer libs__lp__IntroducedFrom__pred__pivot__635__1_4_p_0_env_0__K_12;
#line 635 "lp.m"
  MR_Word libs__lp__IntroducedFrom__pred__pivot__635__1_4_p_0_env_0__SR_88;
#line 635 "lp.m"
};

#line 604 "lp.m"
struct libs__lp__IntroducedFrom__pred__fix_basis_and_rem_cols__604__1_4_p_0_env_0_s {
#line 604 "lp.m"
  MR_Word libs__lp__IntroducedFrom__pred__fix_basis_and_rem_cols__604__1_4_p_0_env_0__STATE_VARIABLE_Tableau_0_2;
#line 604 "lp.m"
  MR_Integer libs__lp__IntroducedFrom__pred__fix_basis_and_rem_cols__604__1_4_p_0_env_0__Col_10;
#line 604 "lp.m"
  MR_Integer libs__lp__IntroducedFrom__pred__fix_basis_and_rem_cols__604__1_4_p_0_env_0__Row_17;
#line 604 "lp.m"
  MR_Integer * libs__lp__IntroducedFrom__pred__fix_basis_and_rem_cols__604__1_4_p_0_env_0__HeadVar__4_35;
#line 604 "lp.m"
  MR_Cont libs__lp__IntroducedFrom__pred__fix_basis_and_rem_cols__604__1_4_p_0_env_0__cont;
#line 604 "lp.m"
  void * libs__lp__IntroducedFrom__pred__fix_basis_and_rem_cols__604__1_4_p_0_env_0__cont_env_ptr;
#line 604 "lp.m"
  MR_bool libs__lp__IntroducedFrom__pred__fix_basis_and_rem_cols__604__1_4_p_0_env_0__succeeded;
#line 604 "lp.m"
  MR_Float libs__lp__IntroducedFrom__pred__fix_basis_and_rem_cols__604__1_4_p_0_env_0__Zz_20;
#line 604 "lp.m"
};

#line 570 "lp.m"
struct libs__lp__IntroducedFrom__pred__ensure_zero_obj_coeffs__570__1_3_p_0_env_0_s {
#line 570 "lp.m"
  MR_Word libs__lp__IntroducedFrom__pred__ensure_zero_obj_coeffs__570__1_3_p_0_env_0__STATE_VARIABLE_Tableau_0_2;
#line 570 "lp.m"
  MR_Integer libs__lp__IntroducedFrom__pred__ensure_zero_obj_coeffs__570__1_3_p_0_env_0__Col_10;
#line 570 "lp.m"
  MR_Word * libs__lp__IntroducedFrom__pred__ensure_zero_obj_coeffs__570__1_3_p_0_env_0__HeadVar__3_25;
#line 570 "lp.m"
  MR_Cont libs__lp__IntroducedFrom__pred__ensure_zero_obj_coeffs__570__1_3_p_0_env_0__cont;
#line 570 "lp.m"
  void * libs__lp__IntroducedFrom__pred__ensure_zero_obj_coeffs__570__1_3_p_0_env_0__cont_env_ptr;
#line 570 "lp.m"
  MR_bool libs__lp__IntroducedFrom__pred__ensure_zero_obj_coeffs__570__1_3_p_0_env_0__succeeded;
#line 570 "lp.m"
  MR_Integer libs__lp__IntroducedFrom__pred__ensure_zero_obj_coeffs__570__1_3_p_0_env_0__R_14;
#line 570 "lp.m"
  MR_Float libs__lp__IntroducedFrom__pred__ensure_zero_obj_coeffs__570__1_3_p_0_env_0__ValF0_15;
#line 570 "lp.m"
  MR_Word libs__lp__IntroducedFrom__pred__ensure_zero_obj_coeffs__570__1_3_p_0_env_0__SR_42;
#line 570 "lp.m"
};

#line 474 "lp.m"
struct libs__lp__IntroducedFrom__pred__extract_obj_var2__474__1_3_p_0_env_0_s {
#line 474 "lp.m"
  MR_Word libs__lp__IntroducedFrom__pred__extract_obj_var2__474__1_3_p_0_env_0__Tab_4;
#line 474 "lp.m"
  MR_Integer libs__lp__IntroducedFrom__pred__extract_obj_var2__474__1_3_p_0_env_0__Col_7;
#line 474 "lp.m"
  MR_Float * libs__lp__IntroducedFrom__pred__extract_obj_var2__474__1_3_p_0_env_0__HeadVar__3_14;
#line 474 "lp.m"
  MR_Cont libs__lp__IntroducedFrom__pred__extract_obj_var2__474__1_3_p_0_env_0__cont;
#line 474 "lp.m"
  void * libs__lp__IntroducedFrom__pred__extract_obj_var2__474__1_3_p_0_env_0__cont_env_ptr;
#line 474 "lp.m"
  MR_bool libs__lp__IntroducedFrom__pred__extract_obj_var2__474__1_3_p_0_env_0__succeeded;
#line 474 "lp.m"
  MR_Integer libs__lp__IntroducedFrom__pred__extract_obj_var2__474__1_3_p_0_env_0__Row_10;
#line 474 "lp.m"
  MR_Integer libs__lp__IntroducedFrom__pred__extract_obj_var2__474__1_3_p_0_env_0__RHS_11;
#line 474 "lp.m"
  MR_Float libs__lp__IntroducedFrom__pred__extract_obj_var2__474__1_3_p_0_env_0__V_15_15;
#line 474 "lp.m"
  MR_Float libs__lp__IntroducedFrom__pred__extract_obj_var2__474__1_3_p_0_env_0__V_19_19;
#line 474 "lp.m"
  MR_Word libs__lp__IntroducedFrom__pred__extract_obj_var2__474__1_3_p_0_env_0__SR_26;
#line 474 "lp.m"
};

#line 396 "lp.m"
struct libs__lp__IntroducedFrom__pred__collect_vars__396__1_3_p_0_env_0_s {
#line 396 "lp.m"
  MR_Word * libs__lp__IntroducedFrom__pred__collect_vars__396__1_3_p_0_env_0__HeadVar__3_17;
#line 396 "lp.m"
  MR_Cont libs__lp__IntroducedFrom__pred__collect_vars__396__1_3_p_0_env_0__cont;
#line 396 "lp.m"
  void * libs__lp__IntroducedFrom__pred__collect_vars__396__1_3_p_0_env_0__cont_env_ptr;
#line 392 "lp.m"
  MR_Word libs__lp__IntroducedFrom__pred__collect_vars__396__1_3_p_0_env_0__TypeInfo_21_21;
#line 392 "lp.m"
  MR_Word libs__lp__IntroducedFrom__pred__collect_vars__396__1_3_p_0_env_0__Eqn_9;
#line 392 "lp.m"
  MR_Word libs__lp__IntroducedFrom__pred__collect_vars__396__1_3_p_0_env_0__Coeffs_10;
#line 392 "lp.m"
  MR_Word libs__lp__IntroducedFrom__pred__collect_vars__396__1_3_p_0_env_0__Pair_13;
#line 392 "lp.m"
  MR_Box libs__lp__IntroducedFrom__pred__collect_vars__396__1_3_p_0_env_0__conv0_Eqn_9;
#line 394 "lp.m"
  MR_Box libs__lp__IntroducedFrom__pred__collect_vars__396__1_3_p_0_env_0__conv1_Pair_13;
#line 397 "lp.m"
  MR_Word libs__lp__IntroducedFrom__pred__collect_vars__396__1_3_p_0_env_0__Pair_18;
#line 397 "lp.m"
  MR_Box libs__lp__IntroducedFrom__pred__collect_vars__396__1_3_p_0_env_0__conv2_Pair_18;
#line 396 "lp.m"
};

#line 765 "lp.m"
struct libs__lp__all_cols_2_p_0_env_0_s {
#line 765 "lp.m"
  MR_Integer * libs__lp__all_cols_2_p_0_env_0__Col_4;
#line 765 "lp.m"
  MR_Cont libs__lp__all_cols_2_p_0_env_0__cont;
#line 765 "lp.m"
  void * libs__lp__all_cols_2_p_0_env_0__cont_env_ptr;
#line 767 "lp.m"
  MR_bool libs__lp__all_cols_2_p_0_env_0__succeeded;
#line 767 "lp.m"
  MR_Word libs__lp__all_cols_2_p_0_env_0__SC_10;
#line 765 "lp.m"
};

#line 758 "lp.m"
struct libs__lp__all_cols0_2_p_0_env_0_s {
#line 758 "lp.m"
  MR_Integer * libs__lp__all_cols0_2_p_0_env_0__Col_4;
#line 758 "lp.m"
  MR_Cont libs__lp__all_cols0_2_p_0_env_0__cont;
#line 758 "lp.m"
  void * libs__lp__all_cols0_2_p_0_env_0__cont_env_ptr;
#line 760 "lp.m"
  MR_bool libs__lp__all_cols0_2_p_0_env_0__succeeded;
#line 760 "lp.m"
  MR_Word libs__lp__all_cols0_2_p_0_env_0__SC_10;
#line 758 "lp.m"
};

#line 751 "lp.m"
struct libs__lp__all_rows_2_p_0_env_0_s {
#line 751 "lp.m"
  MR_Integer * libs__lp__all_rows_2_p_0_env_0__Row_4;
#line 751 "lp.m"
  MR_Cont libs__lp__all_rows_2_p_0_env_0__cont;
#line 751 "lp.m"
  void * libs__lp__all_rows_2_p_0_env_0__cont_env_ptr;
#line 753 "lp.m"
  MR_bool libs__lp__all_rows_2_p_0_env_0__succeeded;
#line 753 "lp.m"
  MR_Word libs__lp__all_rows_2_p_0_env_0__SR_9;
#line 751 "lp.m"
};

#line 660 "lp.m"
struct libs__lp__pivot_4_p_0_8_env_0_s {
#line 660 "lp.m"
  MR_Box * libs__lp__pivot_4_p_0_8_env_0__wrapper_arg_1;
#line 660 "lp.m"
  MR_Cont libs__lp__pivot_4_p_0_8_env_0__cont;
#line 660 "lp.m"
  void * libs__lp__pivot_4_p_0_8_env_0__cont_env_ptr;
#line 660 "lp.m"
  MR_Integer libs__lp__pivot_4_p_0_8_env_0__conv6_Col_4;
#line 660 "lp.m"
};

#line 651 "lp.m"
struct libs__lp__pivot_4_p_0_5_env_0_s {
#line 651 "lp.m"
  MR_Box * libs__lp__pivot_4_p_0_5_env_0__wrapper_arg_1;
#line 651 "lp.m"
  MR_Cont libs__lp__pivot_4_p_0_5_env_0__cont;
#line 651 "lp.m"
  void * libs__lp__pivot_4_p_0_5_env_0__cont_env_ptr;
#line 651 "lp.m"
  MR_Word libs__lp__pivot_4_p_0_5_env_0__conv3_HeadVar__3_37;
#line 651 "lp.m"
};

#line 635 "lp.m"
struct libs__lp__pivot_4_p_0_2_env_0_s {
#line 635 "lp.m"
  MR_Box * libs__lp__pivot_4_p_0_2_env_0__wrapper_arg_1;
#line 635 "lp.m"
  MR_Cont libs__lp__pivot_4_p_0_2_env_0__cont;
#line 635 "lp.m"
  void * libs__lp__pivot_4_p_0_2_env_0__cont_env_ptr;
#line 635 "lp.m"
  MR_Word libs__lp__pivot_4_p_0_2_env_0__conv0_HeadVar__4_27;
#line 635 "lp.m"
};

#line 604 "lp.m"
struct libs__lp__fix_basis_and_rem_cols_3_p_0_5_env_0_s {
#line 604 "lp.m"
  MR_Box * libs__lp__fix_basis_and_rem_cols_3_p_0_5_env_0__wrapper_arg_1;
#line 604 "lp.m"
  MR_Cont libs__lp__fix_basis_and_rem_cols_3_p_0_5_env_0__cont;
#line 604 "lp.m"
  void * libs__lp__fix_basis_and_rem_cols_3_p_0_5_env_0__cont_env_ptr;
#line 604 "lp.m"
  MR_Integer libs__lp__fix_basis_and_rem_cols_3_p_0_5_env_0__conv4_HeadVar__4_35;
#line 604 "lp.m"
};

#line 602 "lp.m"
struct libs__lp__fix_basis_and_rem_cols_3_p_0_3_env_0_s {
#line 602 "lp.m"
  MR_Box * libs__lp__fix_basis_and_rem_cols_3_p_0_3_env_0__wrapper_arg_1;
#line 602 "lp.m"
  MR_Cont libs__lp__fix_basis_and_rem_cols_3_p_0_3_env_0__cont;
#line 602 "lp.m"
  void * libs__lp__fix_basis_and_rem_cols_3_p_0_3_env_0__cont_env_ptr;
#line 602 "lp.m"
  MR_Integer libs__lp__fix_basis_and_rem_cols_3_p_0_3_env_0__conv2_Row_4;
#line 602 "lp.m"
};

#line 673 "lp.m"
struct libs__lp__ensure_zero_obj_coeffs_3_p_0_4_env_0_s {
#line 673 "lp.m"
  MR_Box * libs__lp__ensure_zero_obj_coeffs_3_p_0_4_env_0__wrapper_arg_1;
#line 673 "lp.m"
  MR_Cont libs__lp__ensure_zero_obj_coeffs_3_p_0_4_env_0__cont;
#line 673 "lp.m"
  void * libs__lp__ensure_zero_obj_coeffs_3_p_0_4_env_0__cont_env_ptr;
#line 673 "lp.m"
  MR_Integer libs__lp__ensure_zero_obj_coeffs_3_p_0_4_env_0__conv2_Col_4;
#line 673 "lp.m"
};

#line 570 "lp.m"
struct libs__lp__ensure_zero_obj_coeffs_3_p_0_2_env_0_s {
#line 570 "lp.m"
  MR_Box * libs__lp__ensure_zero_obj_coeffs_3_p_0_2_env_0__wrapper_arg_1;
#line 570 "lp.m"
  MR_Cont libs__lp__ensure_zero_obj_coeffs_3_p_0_2_env_0__cont;
#line 570 "lp.m"
  void * libs__lp__ensure_zero_obj_coeffs_3_p_0_2_env_0__cont_env_ptr;
#line 570 "lp.m"
  MR_Word libs__lp__ensure_zero_obj_coeffs_3_p_0_2_env_0__conv1_HeadVar__3_25;
#line 570 "lp.m"
};

#line 517 "lp.m"
struct libs__lp__simplex_3_p_0_5_env_0_s {
#line 517 "lp.m"
  MR_Box * libs__lp__simplex_3_p_0_5_env_0__wrapper_arg_1;
#line 517 "lp.m"
  MR_Cont libs__lp__simplex_3_p_0_5_env_0__cont;
#line 517 "lp.m"
  void * libs__lp__simplex_3_p_0_5_env_0__cont_env_ptr;
#line 517 "lp.m"
  MR_Integer libs__lp__simplex_3_p_0_5_env_0__conv3_Row_4;
#line 517 "lp.m"
};

#line 490 "lp.m"
struct libs__lp__simplex_3_p_0_2_env_0_s {
#line 490 "lp.m"
  MR_Box * libs__lp__simplex_3_p_0_2_env_0__wrapper_arg_1;
#line 490 "lp.m"
  MR_Cont libs__lp__simplex_3_p_0_2_env_0__cont;
#line 490 "lp.m"
  void * libs__lp__simplex_3_p_0_2_env_0__cont_env_ptr;
#line 490 "lp.m"
  MR_Integer libs__lp__simplex_3_p_0_2_env_0__conv0_Col_4;
#line 490 "lp.m"
};

#line 474 "lp.m"
struct libs__lp__extract_obj_var2_3_p_0_2_env_0_s {
#line 474 "lp.m"
  MR_Box * libs__lp__extract_obj_var2_3_p_0_2_env_0__wrapper_arg_1;
#line 474 "lp.m"
  MR_Cont libs__lp__extract_obj_var2_3_p_0_2_env_0__cont;
#line 474 "lp.m"
  void * libs__lp__extract_obj_var2_3_p_0_2_env_0__cont_env_ptr;
#line 474 "lp.m"
  MR_Float libs__lp__extract_obj_var2_3_p_0_2_env_0__conv1_HeadVar__3_14;
#line 474 "lp.m"
};

#line 474 "lp.m"
struct libs__lp__extract_obj_var_4_p_0_4_env_0_s {
#line 474 "lp.m"
  MR_Box * libs__lp__extract_obj_var_4_p_0_4_env_0__wrapper_arg_1;
#line 474 "lp.m"
  MR_Cont libs__lp__extract_obj_var_4_p_0_4_env_0__cont;
#line 474 "lp.m"
  void * libs__lp__extract_obj_var_4_p_0_4_env_0__cont_env_ptr;
#line 474 "lp.m"
  MR_Float libs__lp__extract_obj_var_4_p_0_4_env_0__conv4_HeadVar__3_14;
#line 474 "lp.m"
};

#line 474 "lp.m"
struct libs__lp__extract_obj_var_4_p_0_2_env_0_s {
#line 474 "lp.m"
  MR_Box * libs__lp__extract_obj_var_4_p_0_2_env_0__wrapper_arg_1;
#line 474 "lp.m"
  MR_Cont libs__lp__extract_obj_var_4_p_0_2_env_0__cont;
#line 474 "lp.m"
  void * libs__lp__extract_obj_var_4_p_0_2_env_0__cont_env_ptr;
#line 474 "lp.m"
  MR_Float libs__lp__extract_obj_var_4_p_0_2_env_0__conv2_HeadVar__3_14;
#line 474 "lp.m"
};

#line 390 "lp.m"
struct libs__lp__collect_vars_3_p_0_2_env_0_s {
#line 390 "lp.m"
  MR_Box * libs__lp__collect_vars_3_p_0_2_env_0__wrapper_arg_1;
#line 390 "lp.m"
  MR_Cont libs__lp__collect_vars_3_p_0_2_env_0__cont;
#line 390 "lp.m"
  void * libs__lp__collect_vars_3_p_0_2_env_0__cont_env_ptr;
#line 390 "lp.m"
  MR_Word libs__lp__collect_vars_3_p_0_2_env_0__conv0_HeadVar__3_17;
#line 390 "lp.m"
};

#line 810 "lp.m"
struct libs__lp__two_phase_6_p_0_5_env_0_s {
#line 810 "lp.m"
  MR_Box * libs__lp__two_phase_6_p_0_5_env_0__wrapper_arg_1;
#line 810 "lp.m"
  MR_Cont libs__lp__two_phase_6_p_0_5_env_0__cont;
#line 810 "lp.m"
  void * libs__lp__two_phase_6_p_0_5_env_0__cont_env_ptr;
#line 810 "lp.m"
  MR_Word libs__lp__two_phase_6_p_0_5_env_0__conv3_HeadVar__3_29;
#line 810 "lp.m"
};

#line 798 "lp.m"
struct libs__lp__two_phase_6_p_0_3_env_0_s {
#line 798 "lp.m"
  MR_Box * libs__lp__two_phase_6_p_0_3_env_0__wrapper_arg_1;
#line 798 "lp.m"
  MR_Cont libs__lp__two_phase_6_p_0_3_env_0__cont;
#line 798 "lp.m"
  void * libs__lp__two_phase_6_p_0_3_env_0__cont_env_ptr;
#line 798 "lp.m"
  MR_Integer libs__lp__two_phase_6_p_0_3_env_0__conv2_HeadVar__2_24;
#line 798 "lp.m"
};


#line 545 "libs.lp.c"
static const MR_FA_PseudoTypeInfo_Struct1 libs__lp__term__pti_var_1__plain_term__type_ctor_info_generic_0;

#line 548 "libs.lp.c"
static const MR_FA_TypeInfo_Struct1 libs__lp__varset__ti_varset_1term__type_ctor_info_generic_0;

#line 551 "libs.lp.c"
static const MR_FA_TypeInfo_Struct1 libs__lp__term__ti_var_1term__type_ctor_info_generic_0;

#line 554 "libs.lp.c"
static const MR_FA_TypeInfo_Struct2 libs__lp__pair__ti_pair_2term__ti_var_1term__type_ctor_info_generic_0term__ti_var_1term__type_ctor_info_generic_0;

#line 557 "libs.lp.c"
static const MR_FA_TypeInfo_Struct2 libs__lp__tree234__ti_tree234_2term__ti_var_1term__type_ctor_info_generic_0pair__ti_pair_2term__ti_var_1term__type_ctor_info_generic_0term__ti_var_1term__type_ctor_info_generic_0;

#line 560 "libs.lp.c"
static const MR_FA_PseudoTypeInfo_Struct2 libs__lp__pair__pti_pair_2__plain_varset__ti_varset_1term__type_ctor_info_generic_0__plain_tree234__ti_tree234_2term__ti_var_1term__type_ctor_info_generic_0pair__ti_pair_2term__ti_var_1term__type_ctor_info_generic_0term__ti_var_1term__type_ctor_info_generic_0;

#line 563 "libs.lp.c"
static const MR_FA_PseudoTypeInfo_Struct2 libs__lp__pair__pti_pair_2__plain_term__ti_var_1term__type_ctor_info_generic_0__plain_builtin__type_ctor_info_float_0;

#line 566 "libs.lp.c"
static const MR_FA_PseudoTypeInfo_Struct2 libs__lp__tree234__pti_tree234_2__plain_term__ti_var_1term__type_ctor_info_generic_0__plain_builtin__type_ctor_info_float_0;

#line 569 "libs.lp.c"
static const MR_FA_PseudoTypeInfo_Struct1 libs__lp__list__pti_list_1__plain_builtin__type_ctor_info_int_0;

#line 572 "libs.lp.c"
static const MR_FA_PseudoTypeInfo_Struct1 libs__lp__list__pti_list_1__plain_libs__lp__type_ctor_info_equation_0;

#line 575 "libs.lp.c"
static const MR_FA_TypeInfo_Struct2 libs__lp__pair__ti_pair_2term__ti_var_1term__type_ctor_info_generic_0builtin__type_ctor_info_float_0;

#line 578 "libs.lp.c"
static const MR_FA_PseudoTypeInfo_Struct1 libs__lp__list__pti_list_1__plain_pair__ti_pair_2term__ti_var_1term__type_ctor_info_generic_0builtin__type_ctor_info_float_0;

#line 581 "libs.lp.c"
static const MR_FA_TypeInfo_Struct2 libs__lp__pair__ti_pair_2builtin__type_ctor_info_int_0builtin__type_ctor_info_float_0;

#line 584 "libs.lp.c"
static const MR_FA_PseudoTypeInfo_Struct1 libs__lp__maybe__pti_maybe_1__plain_pair__ti_pair_2builtin__type_ctor_info_int_0builtin__type_ctor_info_float_0;

#line 587 "libs.lp.c"
static const MR_FA_PseudoTypeInfo_Struct2 libs__lp__pair__pti_pair_2__plain_builtin__type_ctor_info_int_0__plain_builtin__type_ctor_info_float_0;

#line 590 "libs.lp.c"
static const MR_FA_TypeInfo_Struct2 libs__lp__pair__ti_pair_2builtin__type_ctor_info_float_0builtin__type_ctor_info_int_0;

#line 593 "libs.lp.c"
static const MR_FA_PseudoTypeInfo_Struct1 libs__lp__list__pti_list_1__plain_pair__ti_pair_2builtin__type_ctor_info_float_0builtin__type_ctor_info_int_0;

#line 596 "libs.lp.c"
static const MR_PseudoTypeInfo libs__lp__libs__lp__field_types_cell_0_0[2];

#line 599 "libs.lp.c"
static const MR_DuFunctorDesc libs__lp__libs__lp__du_functor_desc_cell_0_0;

#line 602 "libs.lp.c"
static const MR_DuFunctorDescPtr libs__lp__libs__lp__du_stag_ordered_cell_0_0[1];

#line 605 "libs.lp.c"
static const MR_DuPtagLayout libs__lp__libs__lp__du_ptag_ordered_cell_0[1];

#line 608 "libs.lp.c"
static const MR_DuFunctorDescPtr libs__lp__libs__lp__du_name_ordered_cell_0[1];

#line 611 "libs.lp.c"
static const MR_Integer libs__lp__libs__lp__functor_number_map_cell_0[1];

#line 614 "libs.lp.c"
static const MR_EnumFunctorDesc libs__lp__libs__lp__enum_functor_desc_direction_0_0;

#line 617 "libs.lp.c"
static const MR_EnumFunctorDesc libs__lp__libs__lp__enum_functor_desc_direction_0_1;

#line 620 "libs.lp.c"
static const MR_EnumFunctorDescPtr libs__lp__libs__lp__enum_value_ordered_direction_0[2];

#line 623 "libs.lp.c"
static const MR_EnumFunctorDescPtr libs__lp__libs__lp__enum_name_ordered_direction_0[2];

#line 626 "libs.lp.c"
static const MR_Integer libs__lp__libs__lp__functor_number_map_direction_0[2];

#line 629 "libs.lp.c"
static const MR_FA_TypeInfo_Struct1 libs__lp__list__ti_list_1pair__ti_pair_2term__ti_var_1term__type_ctor_info_generic_0builtin__type_ctor_info_float_0;

#line 632 "libs.lp.c"
static const MR_PseudoTypeInfo libs__lp__libs__lp__field_types_equation_0_0[3];

#line 635 "libs.lp.c"
static const MR_DuFunctorDesc libs__lp__libs__lp__du_functor_desc_equation_0_0;

#line 638 "libs.lp.c"
static const MR_DuFunctorDescPtr libs__lp__libs__lp__du_stag_ordered_equation_0_0[1];

#line 641 "libs.lp.c"
static const MR_DuPtagLayout libs__lp__libs__lp__du_ptag_ordered_equation_0[1];

#line 644 "libs.lp.c"
static const MR_DuFunctorDescPtr libs__lp__libs__lp__du_name_ordered_equation_0[1];

#line 647 "libs.lp.c"
static const MR_Integer libs__lp__libs__lp__functor_number_map_equation_0[1];

#line 650 "libs.lp.c"
static const MR_FA_TypeInfo_Struct1 libs__lp__list__ti_list_1libs__lp__type_ctor_info_equation_0;

#line 653 "libs.lp.c"
static const MR_FA_TypeInfo_Struct1 libs__lp__list__ti_list_1term__ti_var_1term__type_ctor_info_generic_0;

#line 656 "libs.lp.c"
static const MR_PseudoTypeInfo libs__lp__libs__lp__field_types_lp_info_0_0[4];

#line 659 "libs.lp.c"
static const MR_ConstString libs__lp__libs__lp__field_names_lp_info_0_0[4];

#line 662 "libs.lp.c"
static const MR_DuFunctorDesc libs__lp__libs__lp__du_functor_desc_lp_info_0_0;

#line 665 "libs.lp.c"
static const MR_DuFunctorDescPtr libs__lp__libs__lp__du_stag_ordered_lp_info_0_0[1];

#line 668 "libs.lp.c"
static const MR_DuPtagLayout libs__lp__libs__lp__du_ptag_ordered_lp_info_0[1];

#line 671 "libs.lp.c"
static const MR_DuFunctorDescPtr libs__lp__libs__lp__du_name_ordered_lp_info_0[1];

#line 674 "libs.lp.c"
static const MR_Integer libs__lp__libs__lp__functor_number_map_lp_info_0[1];

#line 677 "libs.lp.c"
static const MR_EnumFunctorDesc libs__lp__libs__lp__enum_functor_desc_operator_0_0;

#line 680 "libs.lp.c"
static const MR_EnumFunctorDesc libs__lp__libs__lp__enum_functor_desc_operator_0_1;

#line 683 "libs.lp.c"
static const MR_EnumFunctorDesc libs__lp__libs__lp__enum_functor_desc_operator_0_2;

#line 686 "libs.lp.c"
static const MR_EnumFunctorDescPtr libs__lp__libs__lp__enum_value_ordered_operator_0[3];

#line 689 "libs.lp.c"
static const MR_EnumFunctorDescPtr libs__lp__libs__lp__enum_name_ordered_operator_0[3];

#line 692 "libs.lp.c"
static const MR_Integer libs__lp__libs__lp__functor_number_map_operator_0[3];

#line 695 "libs.lp.c"
static const MR_DuFunctorDesc libs__lp__libs__lp__du_functor_desc_result_0_0;

#line 698 "libs.lp.c"
static const MR_FA_TypeInfo_Struct2 libs__lp__tree234__ti_tree234_2term__ti_var_1term__type_ctor_info_generic_0builtin__type_ctor_info_float_0;

#line 701 "libs.lp.c"
static const MR_PseudoTypeInfo libs__lp__libs__lp__field_types_result_0_1[2];

#line 704 "libs.lp.c"
static const MR_DuFunctorDesc libs__lp__libs__lp__du_functor_desc_result_0_1;

#line 707 "libs.lp.c"
static const MR_DuFunctorDescPtr libs__lp__libs__lp__du_stag_ordered_result_0_0[1];

#line 710 "libs.lp.c"
static const MR_DuFunctorDescPtr libs__lp__libs__lp__du_stag_ordered_result_0_1[1];

#line 713 "libs.lp.c"
static const MR_DuPtagLayout libs__lp__libs__lp__du_ptag_ordered_result_0[2];

#line 716 "libs.lp.c"
static const MR_DuFunctorDescPtr libs__lp__libs__lp__du_name_ordered_result_0[2];

#line 719 "libs.lp.c"
static const MR_Integer libs__lp__libs__lp__functor_number_map_result_0[2];

#line 722 "libs.lp.c"
static const MR_FA_TypeInfo_Struct2 libs__lp__tree234__ti_tree234_2term__ti_var_1term__type_ctor_info_generic_0builtin__type_ctor_info_int_0;

#line 725 "libs.lp.c"
static const MR_FA_TypeInfo_Struct1 libs__lp__list__ti_list_1builtin__type_ctor_info_int_0;

#line 728 "libs.lp.c"
static const MR_FA_TypeInfo_Struct2 libs__lp__pair__ti_pair_2builtin__type_ctor_info_int_0builtin__type_ctor_info_int_0;

#line 731 "libs.lp.c"
static const MR_FA_TypeInfo_Struct2 libs__lp__tree234__ti_tree234_2pair__ti_pair_2builtin__type_ctor_info_int_0builtin__type_ctor_info_int_0builtin__type_ctor_info_float_0;

#line 734 "libs.lp.c"
static const MR_PseudoTypeInfo libs__lp__libs__lp__field_types_tableau_0_0[7];

#line 737 "libs.lp.c"
static const MR_ConstString libs__lp__libs__lp__field_names_tableau_0_0[7];

#line 740 "libs.lp.c"
static const MR_DuFunctorDesc libs__lp__libs__lp__du_functor_desc_tableau_0_0;

#line 743 "libs.lp.c"
static const MR_DuFunctorDescPtr libs__lp__libs__lp__du_stag_ordered_tableau_0_0[1];

#line 746 "libs.lp.c"
static const MR_DuPtagLayout libs__lp__libs__lp__du_ptag_ordered_tableau_0[1];

#line 749 "libs.lp.c"
static const MR_DuFunctorDescPtr libs__lp__libs__lp__du_name_ordered_tableau_0[1];

#line 752 "libs.lp.c"
static const MR_Integer libs__lp__libs__lp__functor_number_map_tableau_0[1];

#line 755 "libs.lp.c"
static MR_bool MR_CALL 
libs__lp____Unify____cell_0_0_10001(
#line 758 "libs.lp.c"
  MR_Box libs__lp__wrapper_arg_1,
#line 760 "libs.lp.c"
  MR_Box libs__lp__wrapper_arg_2);

#line 763 "libs.lp.c"
static void MR_CALL 
libs__lp____Compare____cell_0_0_10001(
#line 766 "libs.lp.c"
  MR_Box * libs__lp__wrapper_arg_1,
#line 768 "libs.lp.c"
  MR_Box libs__lp__wrapper_arg_2,
#line 770 "libs.lp.c"
  MR_Box libs__lp__wrapper_arg_3);

#line 773 "libs.lp.c"
static MR_bool MR_CALL 
libs__lp____Unify____coeff_0_0_10001(
#line 776 "libs.lp.c"
  MR_Box libs__lp__wrapper_arg_1,
#line 778 "libs.lp.c"
  MR_Box libs__lp__wrapper_arg_2);

#line 781 "libs.lp.c"
static void MR_CALL 
libs__lp____Compare____coeff_0_0_10001(
#line 784 "libs.lp.c"
  MR_Box * libs__lp__wrapper_arg_1,
#line 786 "libs.lp.c"
  MR_Box libs__lp__wrapper_arg_2,
#line 788 "libs.lp.c"
  MR_Box libs__lp__wrapper_arg_3);

#line 791 "libs.lp.c"
static MR_bool MR_CALL 
libs__lp____Unify____direction_0_0_10001(
#line 794 "libs.lp.c"
  MR_Box libs__lp__wrapper_arg_1,
#line 796 "libs.lp.c"
  MR_Box libs__lp__wrapper_arg_2);

#line 799 "libs.lp.c"
static void MR_CALL 
libs__lp____Compare____direction_0_0_10001(
#line 802 "libs.lp.c"
  MR_Box * libs__lp__wrapper_arg_1,
#line 804 "libs.lp.c"
  MR_Box libs__lp__wrapper_arg_2,
#line 806 "libs.lp.c"
  MR_Box libs__lp__wrapper_arg_3);

#line 809 "libs.lp.c"
static MR_bool MR_CALL 
libs__lp____Unify____equation_0_0_10001(
#line 812 "libs.lp.c"
  MR_Box libs__lp__wrapper_arg_1,
#line 814 "libs.lp.c"
  MR_Box libs__lp__wrapper_arg_2);

#line 817 "libs.lp.c"
static void MR_CALL 
libs__lp____Compare____equation_0_0_10001(
#line 820 "libs.lp.c"
  MR_Box * libs__lp__wrapper_arg_1,
#line 822 "libs.lp.c"
  MR_Box libs__lp__wrapper_arg_2,
#line 824 "libs.lp.c"
  MR_Box libs__lp__wrapper_arg_3);

#line 827 "libs.lp.c"
static MR_bool MR_CALL 
libs__lp____Unify____equations_0_0_10001(
#line 830 "libs.lp.c"
  MR_Box libs__lp__wrapper_arg_1,
#line 832 "libs.lp.c"
  MR_Box libs__lp__wrapper_arg_2);

#line 835 "libs.lp.c"
static void MR_CALL 
libs__lp____Compare____equations_0_0_10001(
#line 838 "libs.lp.c"
  MR_Box * libs__lp__wrapper_arg_1,
#line 840 "libs.lp.c"
  MR_Box libs__lp__wrapper_arg_2,
#line 842 "libs.lp.c"
  MR_Box libs__lp__wrapper_arg_3);

#line 845 "libs.lp.c"
static MR_bool MR_CALL 
libs__lp____Unify____lp_info_0_0_10001(
#line 848 "libs.lp.c"
  MR_Box libs__lp__wrapper_arg_1,
#line 850 "libs.lp.c"
  MR_Box libs__lp__wrapper_arg_2);

#line 853 "libs.lp.c"
static void MR_CALL 
libs__lp____Compare____lp_info_0_0_10001(
#line 856 "libs.lp.c"
  MR_Box * libs__lp__wrapper_arg_1,
#line 858 "libs.lp.c"
  MR_Box libs__lp__wrapper_arg_2,
#line 860 "libs.lp.c"
  MR_Box libs__lp__wrapper_arg_3);

#line 863 "libs.lp.c"
static MR_bool MR_CALL 
libs__lp____Unify____objective_0_0_10001(
#line 866 "libs.lp.c"
  MR_Box libs__lp__wrapper_arg_1,
#line 868 "libs.lp.c"
  MR_Box libs__lp__wrapper_arg_2);

#line 871 "libs.lp.c"
static void MR_CALL 
libs__lp____Compare____objective_0_0_10001(
#line 874 "libs.lp.c"
  MR_Box * libs__lp__wrapper_arg_1,
#line 876 "libs.lp.c"
  MR_Box libs__lp__wrapper_arg_2,
#line 878 "libs.lp.c"
  MR_Box libs__lp__wrapper_arg_3);

#line 881 "libs.lp.c"
static MR_bool MR_CALL 
libs__lp____Unify____operator_0_0_10001(
#line 884 "libs.lp.c"
  MR_Box libs__lp__wrapper_arg_1,
#line 886 "libs.lp.c"
  MR_Box libs__lp__wrapper_arg_2);

#line 889 "libs.lp.c"
static void MR_CALL 
libs__lp____Compare____operator_0_0_10001(
#line 892 "libs.lp.c"
  MR_Box * libs__lp__wrapper_arg_1,
#line 894 "libs.lp.c"
  MR_Box libs__lp__wrapper_arg_2,
#line 896 "libs.lp.c"
  MR_Box libs__lp__wrapper_arg_3);

#line 899 "libs.lp.c"
static MR_bool MR_CALL 
libs__lp____Unify____result_0_0_10001(
#line 902 "libs.lp.c"
  MR_Box libs__lp__wrapper_arg_1,
#line 904 "libs.lp.c"
  MR_Box libs__lp__wrapper_arg_2);

#line 907 "libs.lp.c"
static void MR_CALL 
libs__lp____Compare____result_0_0_10001(
#line 910 "libs.lp.c"
  MR_Box * libs__lp__wrapper_arg_1,
#line 912 "libs.lp.c"
  MR_Box libs__lp__wrapper_arg_2,
#line 914 "libs.lp.c"
  MR_Box libs__lp__wrapper_arg_3);

#line 917 "libs.lp.c"
static MR_bool MR_CALL 
libs__lp____Unify____tableau_0_0_10001(
#line 920 "libs.lp.c"
  MR_Box libs__lp__wrapper_arg_1,
#line 922 "libs.lp.c"
  MR_Box libs__lp__wrapper_arg_2);

#line 925 "libs.lp.c"
static void MR_CALL 
libs__lp____Compare____tableau_0_0_10001(
#line 928 "libs.lp.c"
  MR_Box * libs__lp__wrapper_arg_1,
#line 930 "libs.lp.c"
  MR_Box libs__lp__wrapper_arg_2,
#line 932 "libs.lp.c"
  MR_Box libs__lp__wrapper_arg_3);

#line 822 "lp.m"
static void MR_CALL 
libs__lp__IntroducedFrom__pred__lp_info_init__822__1_3_p_0(
#line 822 "lp.m"
  MR_Word libs__lp__HeadVar__1_21,
#line 822 "lp.m"
  MR_Word libs__lp__HeadVar__2_22,
#line 822 "lp.m"
  MR_Word * libs__lp__HeadVar__3_23);

#line 811 "lp.m"
static void MR_CALL 
libs__lp__IntroducedFrom__pred__get_basis_vars__810__1_3_p_0_2(
#line 811 "lp.m"
  void * libs__lp__env_ptr_arg);

#line 813 "lp.m"
static void MR_CALL 
libs__lp__IntroducedFrom__pred__get_basis_vars__810__1_3_p_0_4(
#line 813 "lp.m"
  void * libs__lp__env_ptr_arg);

#line 810 "lp.m"
static void MR_CALL 
libs__lp__IntroducedFrom__pred__get_basis_vars__810__1_3_p_0_3(
#line 810 "lp.m"
  void * libs__lp__env_ptr_arg);

#line 810 "lp.m"
static void MR_CALL 
libs__lp__IntroducedFrom__pred__get_basis_vars__810__1_3_p_0_1(
#line 810 "lp.m"
  void * libs__lp__env_ptr_arg);

#line 810 "lp.m"
static void MR_CALL 
libs__lp__IntroducedFrom__pred__get_basis_vars__810__1_3_p_0(
#line 810 "lp.m"
  MR_Word libs__lp__Tab_3,
#line 810 "lp.m"
  MR_Word libs__lp__Cols_13,
#line 810 "lp.m"
  MR_Word * libs__lp__HeadVar__3_29,
#line 810 "lp.m"
  MR_Cont libs__lp__cont,
#line 810 "lp.m"
  void * libs__lp__cont_env_ptr);

#line 800 "lp.m"
static void MR_CALL 
libs__lp__IntroducedFrom__pred__get_basis_vars__798__1_2_p_0_2(
#line 800 "lp.m"
  void * libs__lp__env_ptr_arg);

#line 800 "lp.m"
static void MR_CALL 
libs__lp__IntroducedFrom__pred__get_basis_vars__798__1_2_p_0_3(
#line 800 "lp.m"
  MR_Box libs__lp__closure_arg,
#line 800 "lp.m"
  MR_Box * libs__lp__wrapper_arg_1,
#line 800 "lp.m"
  MR_Cont libs__lp__cont,
#line 800 "lp.m"
  void * libs__lp__cont_env_ptr);

#line 798 "lp.m"
static void MR_CALL 
libs__lp__IntroducedFrom__pred__get_basis_vars__798__1_2_p_0_1(
#line 798 "lp.m"
  void * libs__lp__env_ptr_arg);

#line 798 "lp.m"
static void MR_CALL 
libs__lp__IntroducedFrom__pred__get_basis_vars__798__1_2_p_0(
#line 798 "lp.m"
  MR_Word libs__lp__Tab_3,
#line 798 "lp.m"
  MR_Integer * libs__lp__HeadVar__2_24,
#line 798 "lp.m"
  MR_Cont libs__lp__cont,
#line 798 "lp.m"
  void * libs__lp__cont_env_ptr);

#line 800 "lp.m"
static void MR_CALL 
libs__lp__IntroducedFrom__pred__get_basis_vars__800__1_3_p_0_1(
#line 800 "lp.m"
  void * libs__lp__env_ptr_arg);

#line 800 "lp.m"
static void MR_CALL 
libs__lp__IntroducedFrom__pred__get_basis_vars__800__1_3_p_0(
#line 800 "lp.m"
  MR_Word libs__lp__Tab_3,
#line 800 "lp.m"
  MR_Integer libs__lp__HeadVar__2_24,
#line 800 "lp.m"
  MR_Word * libs__lp__HeadVar__3_25,
#line 800 "lp.m"
  MR_Cont libs__lp__cont,
#line 800 "lp.m"
  void * libs__lp__cont_env_ptr);

#line 674 "lp.m"
static void MR_CALL 
libs__lp__IntroducedFrom__pred__row_op__674__1_6_p_0(
#line 674 "lp.m"
  MR_Float libs__lp__Scale_6,
#line 674 "lp.m"
  MR_Integer libs__lp__From_7,
#line 674 "lp.m"
  MR_Integer libs__lp__To_8,
#line 674 "lp.m"
  MR_Integer libs__lp__HeadVar__4_20,
#line 674 "lp.m"
  MR_Word libs__lp__HeadVar__5_21,
#line 674 "lp.m"
  MR_Word * libs__lp__HeadVar__6_22);

#line 661 "lp.m"
static void MR_CALL 
libs__lp__IntroducedFrom__pred__pivot__661__1_5_p_0(
#line 661 "lp.m"
  MR_Integer libs__lp__P_5,
#line 661 "lp.m"
  MR_Float libs__lp__Apq_8,
#line 661 "lp.m"
  MR_Integer libs__lp__HeadVar__3_43,
#line 661 "lp.m"
  MR_Word libs__lp__HeadVar__4_44,
#line 661 "lp.m"
  MR_Word * libs__lp__HeadVar__5_45);

#line 655 "lp.m"
static void MR_CALL 
libs__lp__IntroducedFrom__pred__pivot__655__1_3_p_0(
#line 655 "lp.m"
  MR_Word libs__lp__HeadVar__1_38,
#line 655 "lp.m"
  MR_Word libs__lp__HeadVar__2_39,
#line 655 "lp.m"
  MR_Word * libs__lp__HeadVar__3_40);

#line 651 "lp.m"
static void MR_CALL 
libs__lp__IntroducedFrom__pred__pivot__651__1_3_p_0_1(
#line 651 "lp.m"
  void * libs__lp__env_ptr_arg);

#line 651 "lp.m"
static void MR_CALL 
libs__lp__IntroducedFrom__pred__pivot__651__1_3_p_0(
#line 651 "lp.m"
  MR_Integer libs__lp__Q_6,
#line 651 "lp.m"
  MR_Word libs__lp__STATE_VARIABLE_Tableau_36_36,
#line 651 "lp.m"
  MR_Word * libs__lp__HeadVar__3_37,
#line 651 "lp.m"
  MR_Cont libs__lp__cont,
#line 651 "lp.m"
  void * libs__lp__cont_env_ptr);

#line 642 "lp.m"
static void MR_CALL 
libs__lp__IntroducedFrom__pred__pivot__642__1_6_p_0(
#line 642 "lp.m"
  MR_Integer libs__lp__P_5,
#line 642 "lp.m"
  MR_Integer libs__lp__Q_6,
#line 642 "lp.m"
  MR_Float libs__lp__Apq_8,
#line 642 "lp.m"
  MR_Word libs__lp__HeadVar__4_30,
#line 642 "lp.m"
  MR_Word libs__lp__HeadVar__5_31,
#line 642 "lp.m"
  MR_Word * libs__lp__HeadVar__6_32);

#line 635 "lp.m"
static void MR_CALL 
libs__lp__IntroducedFrom__pred__pivot__635__1_4_p_0_2(
#line 635 "lp.m"
  void * libs__lp__env_ptr_arg);

#line 635 "lp.m"
static void MR_CALL 
libs__lp__IntroducedFrom__pred__pivot__635__1_4_p_0_1(
#line 635 "lp.m"
  void * libs__lp__env_ptr_arg);

#line 635 "lp.m"
static void MR_CALL 
libs__lp__IntroducedFrom__pred__pivot__635__1_4_p_0(
#line 635 "lp.m"
  MR_Integer libs__lp__P_5,
#line 635 "lp.m"
  MR_Integer libs__lp__Q_6,
#line 635 "lp.m"
  MR_Word libs__lp__STATE_VARIABLE_Tableau_0_25,
#line 635 "lp.m"
  MR_Word * libs__lp__HeadVar__4_27,
#line 635 "lp.m"
  MR_Cont libs__lp__cont,
#line 635 "lp.m"
  void * libs__lp__cont_env_ptr);

#line 604 "lp.m"
static void MR_CALL 
libs__lp__IntroducedFrom__pred__fix_basis_and_rem_cols__604__1_4_p_0_1(
#line 604 "lp.m"
  void * libs__lp__env_ptr_arg);

#line 604 "lp.m"
static void MR_CALL 
libs__lp__IntroducedFrom__pred__fix_basis_and_rem_cols__604__1_4_p_0(
#line 604 "lp.m"
  MR_Word libs__lp__STATE_VARIABLE_Tableau_0_2,
#line 604 "lp.m"
  MR_Integer libs__lp__Col_10,
#line 604 "lp.m"
  MR_Integer libs__lp__Row_17,
#line 604 "lp.m"
  MR_Integer * libs__lp__HeadVar__4_35,
#line 604 "lp.m"
  MR_Cont libs__lp__cont,
#line 604 "lp.m"
  void * libs__lp__cont_env_ptr);

#line 594 "lp.m"
static void MR_CALL 
libs__lp__IntroducedFrom__pred__fix_basis_and_rem_cols__594__1_5_p_0(
#line 594 "lp.m"
  MR_Word libs__lp__STATE_VARIABLE_Tableau_0_2,
#line 594 "lp.m"
  MR_Integer libs__lp__Col_10,
#line 594 "lp.m"
  MR_Integer libs__lp__HeadVar__3_26,
#line 594 "lp.m"
  MR_Word libs__lp__HeadVar__4_27,
#line 594 "lp.m"
  MR_Word * libs__lp__HeadVar__5_28);

#line 570 "lp.m"
static void MR_CALL 
libs__lp__IntroducedFrom__pred__ensure_zero_obj_coeffs__570__1_3_p_0_1(
#line 570 "lp.m"
  void * libs__lp__env_ptr_arg);

#line 570 "lp.m"
static void MR_CALL 
libs__lp__IntroducedFrom__pred__ensure_zero_obj_coeffs__570__1_3_p_0(
#line 570 "lp.m"
  MR_Word libs__lp__STATE_VARIABLE_Tableau_0_2,
#line 570 "lp.m"
  MR_Integer libs__lp__Col_10,
#line 570 "lp.m"
  MR_Word * libs__lp__HeadVar__3_25,
#line 570 "lp.m"
  MR_Cont libs__lp__cont,
#line 570 "lp.m"
  void * libs__lp__cont_env_ptr);

#line 530 "lp.m"
static void MR_CALL 
libs__lp__IntroducedFrom__pred__simplex__530__1_5_p_0(
#line 530 "lp.m"
  MR_Word libs__lp__A0_4,
#line 530 "lp.m"
  MR_Integer libs__lp__Q_17,
#line 530 "lp.m"
  MR_Integer libs__lp__HeadVar__3_46,
#line 530 "lp.m"
  MR_Word libs__lp__HeadVar__4_47,
#line 530 "lp.m"
  MR_Word * libs__lp__HeadVar__5_48);

#line 500 "lp.m"
static void MR_CALL 
libs__lp__IntroducedFrom__pred__simplex__500__1_4_p_0(
#line 500 "lp.m"
  MR_Word libs__lp__A0_4,
#line 500 "lp.m"
  MR_Integer libs__lp__HeadVar__2_35,
#line 500 "lp.m"
  MR_Word libs__lp__HeadVar__3_36,
#line 500 "lp.m"
  MR_Word * libs__lp__HeadVar__4_37);

#line 474 "lp.m"
static void MR_CALL 
libs__lp__IntroducedFrom__pred__extract_obj_var2__474__1_3_p_0_1(
#line 474 "lp.m"
  void * libs__lp__env_ptr_arg);

#line 474 "lp.m"
static void MR_CALL 
libs__lp__IntroducedFrom__pred__extract_obj_var2__474__1_3_p_0(
#line 474 "lp.m"
  MR_Word libs__lp__Tab_4,
#line 474 "lp.m"
  MR_Integer libs__lp__Col_7,
#line 474 "lp.m"
  MR_Float * libs__lp__HeadVar__3_14,
#line 474 "lp.m"
  MR_Cont libs__lp__cont,
#line 474 "lp.m"
  void * libs__lp__cont_env_ptr);

#line 392 "lp.m"
static void MR_CALL 
libs__lp__IntroducedFrom__pred__collect_vars__396__1_3_p_0_2(
#line 392 "lp.m"
  void * libs__lp__env_ptr_arg);

#line 394 "lp.m"
static void MR_CALL 
libs__lp__IntroducedFrom__pred__collect_vars__396__1_3_p_0_4(
#line 394 "lp.m"
  void * libs__lp__env_ptr_arg);

#line 392 "lp.m"
static void MR_CALL 
libs__lp__IntroducedFrom__pred__collect_vars__396__1_3_p_0_3(
#line 392 "lp.m"
  void * libs__lp__env_ptr_arg);

#line 392 "lp.m"
static void MR_CALL 
libs__lp__IntroducedFrom__pred__collect_vars__396__1_3_p_0_1(
#line 392 "lp.m"
  void * libs__lp__env_ptr_arg);

#line 397 "lp.m"
static void MR_CALL 
libs__lp__IntroducedFrom__pred__collect_vars__396__1_3_p_0_6(
#line 397 "lp.m"
  void * libs__lp__env_ptr_arg);

#line 397 "lp.m"
static void MR_CALL 
libs__lp__IntroducedFrom__pred__collect_vars__396__1_3_p_0_5(
#line 397 "lp.m"
  void * libs__lp__env_ptr_arg);

#line 396 "lp.m"
static void MR_CALL 
libs__lp__IntroducedFrom__pred__collect_vars__396__1_3_p_0(
#line 396 "lp.m"
  MR_Word libs__lp__Eqns_4,
#line 396 "lp.m"
  MR_Word libs__lp__Obj_5,
#line 396 "lp.m"
  MR_Word * libs__lp__HeadVar__3_17,
#line 396 "lp.m"
  MR_Cont libs__lp__cont,
#line 396 "lp.m"
  void * libs__lp__cont_env_ptr);

#line 340 "lp.m"
static void MR_CALL 
libs__lp__IntroducedFrom__pred__simplify_coeffs__340__1_3_p_0(
#line 340 "lp.m"
  MR_Word libs__lp__HeadVar__1_13,
#line 340 "lp.m"
  MR_Word libs__lp__HeadVar__2_14,
#line 340 "lp.m"
  MR_Word * libs__lp__HeadVar__3_15);

#line 328 "lp.m"
static MR_Word MR_CALL 
libs__lp__IntroducedFrom__func__negate_equation__328__1_1_f_0(
#line 328 "lp.m"
  MR_Word libs__lp__HeadVar__1_12);

#line 684 "lp.m"
static void MR_CALL 
libs__lp____Compare____tableau_0_0(
#line 684 "lp.m"
  MR_Word * libs__lp__HeadVar__1_1,
#line 684 "lp.m"
  MR_Word libs__lp__HeadVar__2_2,
#line 684 "lp.m"
  MR_Word libs__lp__HeadVar__3_3);

#line 684 "lp.m"
static MR_bool MR_CALL 
libs__lp____Unify____tableau_0_0(
#line 684 "lp.m"
  MR_Word libs__lp__HeadVar__1_1,
#line 684 "lp.m"
  MR_Word libs__lp__HeadVar__2_2);

#line 102 "lp.m"
static void MR_CALL 
libs__lp____Compare____lp_info_0_0(
#line 102 "lp.m"
  MR_Word * libs__lp__HeadVar__1_1,
#line 102 "lp.m"
  MR_Word libs__lp__HeadVar__2_2,
#line 102 "lp.m"
  MR_Word libs__lp__HeadVar__3_3);

#line 102 "lp.m"
static MR_bool MR_CALL 
libs__lp____Unify____lp_info_0_0(
#line 102 "lp.m"
  MR_Word libs__lp__HeadVar__1_1,
#line 102 "lp.m"
  MR_Word libs__lp__HeadVar__2_2);

#line 628 "lp.m"
static void MR_CALL 
libs__lp____Compare____cell_0_0(
#line 628 "lp.m"
  MR_Word * libs__lp__HeadVar__1_1,
#line 628 "lp.m"
  MR_Word libs__lp__HeadVar__2_2,
#line 628 "lp.m"
  MR_Word libs__lp__HeadVar__3_3);

#line 628 "lp.m"
static MR_bool MR_CALL 
libs__lp____Unify____cell_0_0(
#line 628 "lp.m"
  MR_Word libs__lp__HeadVar__1_1,
#line 628 "lp.m"
  MR_Word libs__lp__HeadVar__2_2);

#line 882 "lp.m"
static void MR_CALL 
libs__lp__between_3_p_0(
#line 882 "lp.m"
  MR_Integer libs__lp__Min_4,
#line 882 "lp.m"
  MR_Integer libs__lp__Max_5,
#line 882 "lp.m"
  MR_Integer * libs__lp__I_6,
#line 882 "lp.m"
  MR_Cont libs__lp__cont,
#line 882 "lp.m"
  void * libs__lp__cont_env_ptr);

#line 856 "lp.m"
static void MR_CALL 
libs__lp__get_urs_vars_2_p_0(
#line 856 "lp.m"
  MR_Word libs__lp__Info_3,
#line 856 "lp.m"
  MR_Word * libs__lp__HeadVar__2_2);

#line 844 "lp.m"
static void MR_CALL 
libs__lp__new_art_var_3_p_0(
#line 844 "lp.m"
  MR_Word * libs__lp__Var_4,
#line 844 "lp.m"
  MR_Word libs__lp__STATE_VARIABLE_Info_0_8,
#line 844 "lp.m"
  MR_Word * libs__lp__STATE_VARIABLE_Info_9);

#line 833 "lp.m"
static void MR_CALL 
libs__lp__new_slack_var_3_p_0(
#line 833 "lp.m"
  MR_Word * libs__lp__Var_4,
#line 833 "lp.m"
  MR_Word libs__lp__STATE_VARIABLE_Info_0_8,
#line 833 "lp.m"
  MR_Word * libs__lp__STATE_VARIABLE_Info_9);

#line 789 "lp.m"
static void MR_CALL 
libs__lp__remove_col_3_p_0(
#line 789 "lp.m"
  MR_Integer libs__lp__C_4,
#line 789 "lp.m"
  MR_Word libs__lp__Tableau0_5,
#line 789 "lp.m"
  MR_Word * libs__lp__Tableau_6);

#line 767 "lp.m"
static void MR_CALL 
libs__lp__all_cols_2_p_0_1(
#line 767 "lp.m"
  void * libs__lp__env_ptr_arg);

#line 765 "lp.m"
static void MR_CALL 
libs__lp__all_cols_2_p_0(
#line 765 "lp.m"
  MR_Word libs__lp__Tableau_3,
#line 765 "lp.m"
  MR_Integer * libs__lp__Col_4,
#line 765 "lp.m"
  MR_Cont libs__lp__cont,
#line 765 "lp.m"
  void * libs__lp__cont_env_ptr);

#line 760 "lp.m"
static void MR_CALL 
libs__lp__all_cols0_2_p_0_1(
#line 760 "lp.m"
  void * libs__lp__env_ptr_arg);

#line 758 "lp.m"
static void MR_CALL 
libs__lp__all_cols0_2_p_0(
#line 758 "lp.m"
  MR_Word libs__lp__Tableau_3,
#line 758 "lp.m"
  MR_Integer * libs__lp__Col_4,
#line 758 "lp.m"
  MR_Cont libs__lp__cont,
#line 758 "lp.m"
  void * libs__lp__cont_env_ptr);

#line 753 "lp.m"
static void MR_CALL 
libs__lp__all_rows_2_p_0_1(
#line 753 "lp.m"
  void * libs__lp__env_ptr_arg);

#line 751 "lp.m"
static void MR_CALL 
libs__lp__all_rows_2_p_0(
#line 751 "lp.m"
  MR_Word libs__lp__Tableau_3,
#line 751 "lp.m"
  MR_Integer * libs__lp__Row_4,
#line 751 "lp.m"
  MR_Cont libs__lp__cont,
#line 751 "lp.m"
  void * libs__lp__cont_env_ptr);

#line 721 "lp.m"
static void MR_CALL 
libs__lp__set_index_5_p_0(
#line 721 "lp.m"
  MR_Integer libs__lp__J_6,
#line 721 "lp.m"
  MR_Integer libs__lp__K_7,
#line 721 "lp.m"
  MR_Float libs__lp__R_8,
#line 721 "lp.m"
  MR_Word libs__lp__STATE_VARIABLE_Tableau_0_18,
#line 721 "lp.m"
  MR_Word * libs__lp__STATE_VARIABLE_Tableau_19);

#line 702 "lp.m"
static void MR_CALL 
libs__lp__index_4_p_0(
#line 702 "lp.m"
  MR_Word libs__lp__Tableau_5,
#line 702 "lp.m"
  MR_Integer libs__lp__J_6,
#line 702 "lp.m"
  MR_Integer libs__lp__K_7,
#line 702 "lp.m"
  MR_Float * libs__lp__R_8);

#line 695 "lp.m"
static void MR_CALL 
libs__lp__init_tableau_5_p_0(
#line 695 "lp.m"
  MR_Integer libs__lp__Rows_6,
#line 695 "lp.m"
  MR_Integer libs__lp__Cols_7,
#line 695 "lp.m"
  MR_Word libs__lp__VarNums_8,
#line 695 "lp.m"
  MR_Word libs__lp__URSVars_9,
#line 695 "lp.m"
  MR_Word * libs__lp__Tableau_10);

#line 661 "lp.m"
static void MR_CALL 
libs__lp__pivot_4_p_0_9(
#line 661 "lp.m"
  MR_Box libs__lp__closure_arg,
#line 661 "lp.m"
  MR_Box libs__lp__wrapper_arg_1,
#line 661 "lp.m"
  MR_Box libs__lp__wrapper_arg_2,
#line 661 "lp.m"
  MR_Box * libs__lp__wrapper_arg_3);

#line 660 "lp.m"
static void MR_CALL 
libs__lp__pivot_4_p_0_7(
#line 660 "lp.m"
  void * libs__lp__env_ptr_arg);

#line 660 "lp.m"
static void MR_CALL 
libs__lp__pivot_4_p_0_8(
#line 660 "lp.m"
  MR_Box libs__lp__closure_arg,
#line 660 "lp.m"
  MR_Box * libs__lp__wrapper_arg_1,
#line 660 "lp.m"
  MR_Cont libs__lp__cont,
#line 660 "lp.m"
  void * libs__lp__cont_env_ptr);

#line 655 "lp.m"
static void MR_CALL 
libs__lp__pivot_4_p_0_6(
#line 655 "lp.m"
  MR_Box libs__lp__closure_arg,
#line 655 "lp.m"
  MR_Box libs__lp__wrapper_arg_1,
#line 655 "lp.m"
  MR_Box libs__lp__wrapper_arg_2,
#line 655 "lp.m"
  MR_Box * libs__lp__wrapper_arg_3);

#line 651 "lp.m"
static void MR_CALL 
libs__lp__pivot_4_p_0_4(
#line 651 "lp.m"
  void * libs__lp__env_ptr_arg);

#line 651 "lp.m"
static void MR_CALL 
libs__lp__pivot_4_p_0_5(
#line 651 "lp.m"
  MR_Box libs__lp__closure_arg,
#line 651 "lp.m"
  MR_Box * libs__lp__wrapper_arg_1,
#line 651 "lp.m"
  MR_Cont libs__lp__cont,
#line 651 "lp.m"
  void * libs__lp__cont_env_ptr);

#line 642 "lp.m"
static void MR_CALL 
libs__lp__pivot_4_p_0_3(
#line 642 "lp.m"
  MR_Box libs__lp__closure_arg,
#line 642 "lp.m"
  MR_Box libs__lp__wrapper_arg_1,
#line 642 "lp.m"
  MR_Box libs__lp__wrapper_arg_2,
#line 642 "lp.m"
  MR_Box * libs__lp__wrapper_arg_3);

#line 635 "lp.m"
static void MR_CALL 
libs__lp__pivot_4_p_0_1(
#line 635 "lp.m"
  void * libs__lp__env_ptr_arg);

#line 635 "lp.m"
static void MR_CALL 
libs__lp__pivot_4_p_0_2(
#line 635 "lp.m"
  MR_Box libs__lp__closure_arg,
#line 635 "lp.m"
  MR_Box * libs__lp__wrapper_arg_1,
#line 635 "lp.m"
  MR_Cont libs__lp__cont,
#line 635 "lp.m"
  void * libs__lp__cont_env_ptr);

#line 631 "lp.m"
static void MR_CALL 
libs__lp__pivot_4_p_0(
#line 631 "lp.m"
  MR_Integer libs__lp__P_5,
#line 631 "lp.m"
  MR_Integer libs__lp__Q_6,
#line 631 "lp.m"
  MR_Word libs__lp__STATE_VARIABLE_Tableau_0_25,
#line 631 "lp.m"
  MR_Word * libs__lp__STATE_VARIABLE_Tableau_26);

#line 604 "lp.m"
static void MR_CALL 
libs__lp__fix_basis_and_rem_cols_3_p_0_4(
#line 604 "lp.m"
  void * libs__lp__env_ptr_arg);

#line 604 "lp.m"
static void MR_CALL 
libs__lp__fix_basis_and_rem_cols_3_p_0_5(
#line 604 "lp.m"
  MR_Box libs__lp__closure_arg,
#line 604 "lp.m"
  MR_Box * libs__lp__wrapper_arg_1,
#line 604 "lp.m"
  MR_Cont libs__lp__cont,
#line 604 "lp.m"
  void * libs__lp__cont_env_ptr);

#line 602 "lp.m"
static void MR_CALL 
libs__lp__fix_basis_and_rem_cols_3_p_0_2(
#line 602 "lp.m"
  void * libs__lp__env_ptr_arg);

#line 602 "lp.m"
static void MR_CALL 
libs__lp__fix_basis_and_rem_cols_3_p_0_3(
#line 602 "lp.m"
  MR_Box libs__lp__closure_arg,
#line 602 "lp.m"
  MR_Box * libs__lp__wrapper_arg_1,
#line 602 "lp.m"
  MR_Cont libs__lp__cont,
#line 602 "lp.m"
  void * libs__lp__cont_env_ptr);

#line 594 "lp.m"
static void MR_CALL 
libs__lp__fix_basis_and_rem_cols_3_p_0_1(
#line 594 "lp.m"
  MR_Box libs__lp__closure_arg,
#line 594 "lp.m"
  MR_Box libs__lp__wrapper_arg_1,
#line 594 "lp.m"
  MR_Box libs__lp__wrapper_arg_2,
#line 594 "lp.m"
  MR_Box * libs__lp__wrapper_arg_3);

#line 588 "lp.m"
static void MR_CALL 
libs__lp__fix_basis_and_rem_cols_3_p_0(
#line 588 "lp.m"
  MR_Word libs__lp__HeadVar__1_1,
#line 588 "lp.m"
  MR_Word libs__lp__STATE_VARIABLE_Tableau_0_2,
#line 588 "lp.m"
  MR_Word * libs__lp__STATE_VARIABLE_Tableau_3);

#line 674 "lp.m"
static void MR_CALL 
libs__lp__ensure_zero_obj_coeffs_3_p_0_5(
#line 674 "lp.m"
  MR_Box libs__lp__closure_arg,
#line 674 "lp.m"
  MR_Box libs__lp__wrapper_arg_1,
#line 674 "lp.m"
  MR_Box libs__lp__wrapper_arg_2,
#line 674 "lp.m"
  MR_Box * libs__lp__wrapper_arg_3);

#line 673 "lp.m"
static void MR_CALL 
libs__lp__ensure_zero_obj_coeffs_3_p_0_3(
#line 673 "lp.m"
  void * libs__lp__env_ptr_arg);

#line 673 "lp.m"
static void MR_CALL 
libs__lp__ensure_zero_obj_coeffs_3_p_0_4(
#line 673 "lp.m"
  MR_Box libs__lp__closure_arg,
#line 673 "lp.m"
  MR_Box * libs__lp__wrapper_arg_1,
#line 673 "lp.m"
  MR_Cont libs__lp__cont,
#line 673 "lp.m"
  void * libs__lp__cont_env_ptr);

#line 570 "lp.m"
static void MR_CALL 
libs__lp__ensure_zero_obj_coeffs_3_p_0_1(
#line 570 "lp.m"
  void * libs__lp__env_ptr_arg);

#line 570 "lp.m"
static void MR_CALL 
libs__lp__ensure_zero_obj_coeffs_3_p_0_2(
#line 570 "lp.m"
  MR_Box libs__lp__closure_arg,
#line 570 "lp.m"
  MR_Box * libs__lp__wrapper_arg_1,
#line 570 "lp.m"
  MR_Cont libs__lp__cont,
#line 570 "lp.m"
  void * libs__lp__cont_env_ptr);

#line 560 "lp.m"
static void MR_CALL 
libs__lp__ensure_zero_obj_coeffs_3_p_0(
#line 560 "lp.m"
  MR_Word libs__lp__HeadVar__1_1,
#line 560 "lp.m"
  MR_Word libs__lp__STATE_VARIABLE_Tableau_0_2,
#line 560 "lp.m"
  MR_Word * libs__lp__STATE_VARIABLE_Tableau_3);

#line 518 "lp.m"
static void MR_CALL 
libs__lp__simplex_3_p_0_6(
#line 518 "lp.m"
  MR_Box libs__lp__closure_arg,
#line 518 "lp.m"
  MR_Box libs__lp__wrapper_arg_1,
#line 518 "lp.m"
  MR_Box libs__lp__wrapper_arg_2,
#line 518 "lp.m"
  MR_Box * libs__lp__wrapper_arg_3);

#line 517 "lp.m"
static void MR_CALL 
libs__lp__simplex_3_p_0_4(
#line 517 "lp.m"
  void * libs__lp__env_ptr_arg);

#line 517 "lp.m"
static void MR_CALL 
libs__lp__simplex_3_p_0_5(
#line 517 "lp.m"
  MR_Box libs__lp__closure_arg,
#line 517 "lp.m"
  MR_Box * libs__lp__wrapper_arg_1,
#line 517 "lp.m"
  MR_Cont libs__lp__cont,
#line 517 "lp.m"
  void * libs__lp__cont_env_ptr);

#line 491 "lp.m"
static void MR_CALL 
libs__lp__simplex_3_p_0_3(
#line 491 "lp.m"
  MR_Box libs__lp__closure_arg,
#line 491 "lp.m"
  MR_Box libs__lp__wrapper_arg_1,
#line 491 "lp.m"
  MR_Box libs__lp__wrapper_arg_2,
#line 491 "lp.m"
  MR_Box * libs__lp__wrapper_arg_3);

#line 490 "lp.m"
static void MR_CALL 
libs__lp__simplex_3_p_0_1(
#line 490 "lp.m"
  void * libs__lp__env_ptr_arg);

#line 490 "lp.m"
static void MR_CALL 
libs__lp__simplex_3_p_0_2(
#line 490 "lp.m"
  MR_Box libs__lp__closure_arg,
#line 490 "lp.m"
  MR_Box * libs__lp__wrapper_arg_1,
#line 490 "lp.m"
  MR_Cont libs__lp__cont,
#line 490 "lp.m"
  void * libs__lp__cont_env_ptr);

#line 487 "lp.m"
static void MR_CALL 
libs__lp__simplex_3_p_0(
#line 487 "lp.m"
  MR_Word libs__lp__A0_4,
#line 487 "lp.m"
  MR_Word * libs__lp__A_5,
#line 487 "lp.m"
  MR_Word * libs__lp__Result_6);

#line 474 "lp.m"
static void MR_CALL 
libs__lp__extract_obj_var2_3_p_0_1(
#line 474 "lp.m"
  void * libs__lp__env_ptr_arg);

#line 474 "lp.m"
static void MR_CALL 
libs__lp__extract_obj_var2_3_p_0_2(
#line 474 "lp.m"
  MR_Box libs__lp__closure_arg,
#line 474 "lp.m"
  MR_Box * libs__lp__wrapper_arg_1,
#line 474 "lp.m"
  MR_Cont libs__lp__cont,
#line 474 "lp.m"
  void * libs__lp__cont_env_ptr);

#line 470 "lp.m"
static void MR_CALL 
libs__lp__extract_obj_var2_3_p_0(
#line 470 "lp.m"
  MR_Word libs__lp__Tab_4,
#line 470 "lp.m"
  MR_Word libs__lp__Var_5,
#line 470 "lp.m"
  MR_Float * libs__lp__Val_6);

#line 474 "lp.m"
static void MR_CALL 
libs__lp__extract_obj_var_4_p_0_3(
#line 474 "lp.m"
  void * libs__lp__env_ptr_arg);

#line 474 "lp.m"
static void MR_CALL 
libs__lp__extract_obj_var_4_p_0_4(
#line 474 "lp.m"
  MR_Box libs__lp__closure_arg,
#line 474 "lp.m"
  MR_Box * libs__lp__wrapper_arg_1,
#line 474 "lp.m"
  MR_Cont libs__lp__cont,
#line 474 "lp.m"
  void * libs__lp__cont_env_ptr);

#line 474 "lp.m"
static void MR_CALL 
libs__lp__extract_obj_var_4_p_0_1(
#line 474 "lp.m"
  void * libs__lp__env_ptr_arg);

#line 474 "lp.m"
static void MR_CALL 
libs__lp__extract_obj_var_4_p_0_2(
#line 474 "lp.m"
  MR_Box libs__lp__closure_arg,
#line 474 "lp.m"
  MR_Box * libs__lp__wrapper_arg_1,
#line 474 "lp.m"
  MR_Cont libs__lp__cont,
#line 474 "lp.m"
  void * libs__lp__cont_env_ptr);

#line 456 "lp.m"
static void MR_CALL 
libs__lp__extract_obj_var_4_p_0(
#line 456 "lp.m"
  MR_Word libs__lp__Tab_5,
#line 456 "lp.m"
  MR_Word libs__lp__Var_6,
#line 456 "lp.m"
  MR_Word libs__lp__STATE_VARIABLE_Map_0_14,
#line 456 "lp.m"
  MR_Word * libs__lp__STATE_VARIABLE_Map_15);

#line 454 "lp.m"
static void MR_CALL 
libs__lp__optimize_4_p_0_1(
#line 454 "lp.m"
  MR_Box libs__lp__closure_arg,
#line 454 "lp.m"
  MR_Box libs__lp__wrapper_arg_1,
#line 454 "lp.m"
  MR_Box libs__lp__wrapper_arg_2,
#line 454 "lp.m"
  MR_Box * libs__lp__wrapper_arg_3);

#line 434 "lp.m"
static void MR_CALL 
libs__lp__optimize_4_p_0(
#line 434 "lp.m"
  MR_Word libs__lp__ObjVars_5,
#line 434 "lp.m"
  MR_Word libs__lp__A0_6,
#line 434 "lp.m"
  MR_Word * libs__lp__A_7,
#line 434 "lp.m"
  MR_Word * libs__lp__Result_8);

#line 422 "lp.m"
static void MR_CALL 
libs__lp__insert_coeffs_5_p_0(
#line 422 "lp.m"
  MR_Word libs__lp__HeadVar__1_1,
#line 422 "lp.m"
  MR_Integer libs__lp__HeadVar__2_2,
#line 422 "lp.m"
  MR_Word libs__lp__HeadVar__3_3,
#line 422 "lp.m"
  MR_Word libs__lp__STATE_VARIABLE_Tableau_0_4,
#line 422 "lp.m"
  MR_Word * libs__lp__STATE_VARIABLE_Tableau_5);

#line 412 "lp.m"
static void MR_CALL 
libs__lp__insert_equations_6_p_0(
#line 412 "lp.m"
  MR_Word libs__lp__HeadVar__1_1,
#line 412 "lp.m"
  MR_Integer libs__lp__Row_2,
#line 412 "lp.m"
  MR_Integer libs__lp__ConstCol_3,
#line 412 "lp.m"
  MR_Word libs__lp__VarNums_4,
#line 412 "lp.m"
  MR_Word libs__lp__STATE_VARIABLE_Tableau_0_5,
#line 412 "lp.m"
  MR_Word * libs__lp__STATE_VARIABLE_Tableau_6);

#line 404 "lp.m"
static void MR_CALL 
libs__lp__number_vars_4_p_0(
#line 404 "lp.m"
  MR_Word libs__lp__HeadVar__1_1,
#line 404 "lp.m"
  MR_Integer libs__lp__N_2,
#line 404 "lp.m"
  MR_Word libs__lp__STATE_VARIABLE_VarNums_0_3,
#line 404 "lp.m"
  MR_Word * libs__lp__STATE_VARIABLE_VarNums_4);

#line 390 "lp.m"
static void MR_CALL 
libs__lp__collect_vars_3_p_0_1(
#line 390 "lp.m"
  void * libs__lp__env_ptr_arg);

#line 390 "lp.m"
static void MR_CALL 
libs__lp__collect_vars_3_p_0_2(
#line 390 "lp.m"
  MR_Box libs__lp__closure_arg,
#line 390 "lp.m"
  MR_Box * libs__lp__wrapper_arg_1,
#line 390 "lp.m"
  MR_Cont libs__lp__cont,
#line 390 "lp.m"
  void * libs__lp__cont_env_ptr);

#line 387 "lp.m"
static void MR_CALL 
libs__lp__collect_vars_3_p_0(
#line 387 "lp.m"
  MR_Word libs__lp__Eqns_4,
#line 387 "lp.m"
  MR_Word libs__lp__Obj_5,
#line 387 "lp.m"
  MR_Word * libs__lp__Vars_6);

#line 372 "lp.m"
static void MR_CALL 
libs__lp__expand_urs_vars_4_p_0(
#line 372 "lp.m"
  MR_Word libs__lp__HeadVar__1_1,
#line 372 "lp.m"
  MR_Word libs__lp__HeadVar__2_2,
#line 372 "lp.m"
  MR_Word libs__lp__STATE_VARIABLE_Coeffs_0_3,
#line 372 "lp.m"
  MR_Word * libs__lp__STATE_VARIABLE_Coeffs_4);

#line 359 "lp.m"
static void MR_CALL 
libs__lp__expand_urs_vars_e_3_p_0(
#line 359 "lp.m"
  MR_Word libs__lp__HeadVar__1_1,
#line 359 "lp.m"
  MR_Word libs__lp__Vars_7,
#line 359 "lp.m"
  MR_Word * libs__lp__HeadVar__3_3);

#line 340 "lp.m"
static void MR_CALL 
libs__lp__simplify_coeffs_2_p_0_1(
#line 340 "lp.m"
  MR_Box libs__lp__closure_arg,
#line 340 "lp.m"
  MR_Box libs__lp__wrapper_arg_1,
#line 340 "lp.m"
  MR_Box libs__lp__wrapper_arg_2,
#line 340 "lp.m"
  MR_Box * libs__lp__wrapper_arg_3);

#line 336 "lp.m"
static void MR_CALL 
libs__lp__simplify_coeffs_2_p_0(
#line 336 "lp.m"
  MR_Word libs__lp__Coeffs0_3,
#line 336 "lp.m"
  MR_Word * libs__lp__Coeffs_4);

#line 340 "lp.m"
static void MR_CALL 
libs__lp__simplify_eq_2_p_0_1(
#line 340 "lp.m"
  MR_Box libs__lp__closure_arg,
#line 340 "lp.m"
  MR_Box libs__lp__wrapper_arg_1,
#line 340 "lp.m"
  MR_Box libs__lp__wrapper_arg_2,
#line 340 "lp.m"
  MR_Box * libs__lp__wrapper_arg_3);

#line 331 "lp.m"
static void MR_CALL 
libs__lp__simplify_eq_2_p_0(
#line 331 "lp.m"
  MR_Word libs__lp__HeadVar__1_1,
#line 331 "lp.m"
  MR_Word * libs__lp__HeadVar__2_2);

#line 328 "lp.m"
static MR_Box MR_CALL 
libs__lp__negate_equation_2_p_0_1(
#line 328 "lp.m"
  MR_Box libs__lp__closure_arg,
#line 328 "lp.m"
  MR_Box libs__lp__wrapper_arg_1);

#line 318 "lp.m"
static void MR_CALL 
libs__lp__negate_equation_2_p_0(
#line 318 "lp.m"
  MR_Word libs__lp__HeadVar__1_1,
#line 318 "lp.m"
  MR_Word * libs__lp__HeadVar__2_2);

#line 328 "lp.m"
static MR_Box MR_CALL 
libs__lp__standardize_equation_4_p_0_1(
#line 328 "lp.m"
  MR_Box libs__lp__closure_arg,
#line 328 "lp.m"
  MR_Box libs__lp__wrapper_arg_1);

#line 275 "lp.m"
static void MR_CALL 
libs__lp__standardize_equation_4_p_0(
#line 275 "lp.m"
  MR_Word libs__lp__Eqn0_1,
#line 275 "lp.m"
  MR_Word * libs__lp__Eqn_2,
#line 275 "lp.m"
  MR_Word libs__lp__STATE_VARIABLE_Info_0_3,
#line 275 "lp.m"
  MR_Word * libs__lp__STATE_VARIABLE_Info_4);

#line 253 "lp.m"
static void MR_CALL 
libs__lp__construct_art_objective_2_p_0(
#line 253 "lp.m"
  MR_Word libs__lp__HeadVar__1_1,
#line 253 "lp.m"
  MR_Word * libs__lp__HeadVar__2_2);

#line 810 "lp.m"
static void MR_CALL 
libs__lp__two_phase_6_p_0_4(
#line 810 "lp.m"
  void * libs__lp__env_ptr_arg);

#line 810 "lp.m"
static void MR_CALL 
libs__lp__two_phase_6_p_0_5(
#line 810 "lp.m"
  MR_Box libs__lp__closure_arg,
#line 810 "lp.m"
  MR_Box * libs__lp__wrapper_arg_1,
#line 810 "lp.m"
  MR_Cont libs__lp__cont,
#line 810 "lp.m"
  void * libs__lp__cont_env_ptr);

#line 798 "lp.m"
static void MR_CALL 
libs__lp__two_phase_6_p_0_2(
#line 798 "lp.m"
  void * libs__lp__env_ptr_arg);

#line 798 "lp.m"
static void MR_CALL 
libs__lp__two_phase_6_p_0_3(
#line 798 "lp.m"
  MR_Box libs__lp__closure_arg,
#line 798 "lp.m"
  MR_Box * libs__lp__wrapper_arg_1,
#line 798 "lp.m"
  MR_Cont libs__lp__cont,
#line 798 "lp.m"
  void * libs__lp__cont_env_ptr);

#line 454 "lp.m"
static void MR_CALL 
libs__lp__two_phase_6_p_0_1(
#line 454 "lp.m"
  MR_Box libs__lp__closure_arg,
#line 454 "lp.m"
  MR_Box libs__lp__wrapper_arg_1,
#line 454 "lp.m"
  MR_Box libs__lp__wrapper_arg_2,
#line 454 "lp.m"
  MR_Box * libs__lp__wrapper_arg_3);

#line 215 "lp.m"
static void MR_CALL 
libs__lp__two_phase_6_p_0(
#line 215 "lp.m"
  MR_Word libs__lp__Obj0_7,
#line 215 "lp.m"
  MR_Word libs__lp__Obj_8,
#line 215 "lp.m"
  MR_Word libs__lp__ArtVars_9,
#line 215 "lp.m"
  MR_Word libs__lp__VarNums_10,
#line 215 "lp.m"
  MR_Word libs__lp__Tableau0_11,
#line 215 "lp.m"
  MR_Word * libs__lp__Result_12);

#line 205 "lp.m"
static void MR_CALL 
libs__lp__get_vars_from_coeffs_2_3_p_0(
#line 205 "lp.m"
  MR_Word libs__lp__HeadVar__1_1,
#line 205 "lp.m"
  MR_Word libs__lp__STATE_VARIABLE_SetVar_0_2,
#line 205 "lp.m"
  MR_Word * libs__lp__STATE_VARIABLE_SetVar_3);

#line 199 "lp.m"
static MR_Word MR_CALL 
libs__lp__get_vars_from_coeffs_1_f_0(
#line 199 "lp.m"
  MR_Word libs__lp__Coeffs_3);

#line 454 "lp.m"
static void MR_CALL 
libs__lp__one_phase_5_p_0_1(
#line 454 "lp.m"
  MR_Box libs__lp__closure_arg,
#line 454 "lp.m"
  MR_Box libs__lp__wrapper_arg_1,
#line 454 "lp.m"
  MR_Box libs__lp__wrapper_arg_2,
#line 454 "lp.m"
  MR_Box * libs__lp__wrapper_arg_3);

#line 191 "lp.m"
static void MR_CALL 
libs__lp__one_phase_5_p_0(
#line 191 "lp.m"
  MR_Word libs__lp__Obj0_6,
#line 191 "lp.m"
  MR_Word libs__lp__Obj_7,
#line 191 "lp.m"
  MR_Word libs__lp__VarNums_8,
#line 191 "lp.m"
  MR_Word libs__lp__Tableau0_9,
#line 191 "lp.m"
  MR_Word * libs__lp__Result_10);

#line 328 "lp.m"
static MR_Box MR_CALL 
libs__lp__lp_solve_2_8_p_0_2(
#line 328 "lp.m"
  MR_Box libs__lp__closure_arg,
#line 328 "lp.m"
  MR_Box libs__lp__wrapper_arg_1);

#line 265 "lp.m"
static void MR_CALL 
libs__lp__lp_solve_2_8_p_0_1(
#line 265 "lp.m"
  MR_Box libs__lp__closure_arg,
#line 265 "lp.m"
  MR_Box libs__lp__wrapper_arg_1,
#line 265 "lp.m"
  MR_Box * libs__lp__wrapper_arg_2,
#line 265 "lp.m"
  MR_Box libs__lp__wrapper_arg_3,
#line 265 "lp.m"
  MR_Box * libs__lp__wrapper_arg_4);

#line 127 "lp.m"
static void MR_CALL 
libs__lp__lp_solve_2_8_p_0(
#line 127 "lp.m"
  MR_Word libs__lp__Eqns0_9,
#line 127 "lp.m"
  MR_Word libs__lp__Dir_10,
#line 127 "lp.m"
  MR_Word libs__lp__Obj0_11,
#line 127 "lp.m"
  MR_Word * libs__lp__Result_12,
#line 127 "lp.m"
  MR_Word libs__lp__STATE_VARIABLE_Info_0_36,
#line 127 "lp.m"
  MR_Word * libs__lp__STATE_VARIABLE_Info_37);

#line 822 "lp.m"
static void MR_CALL 
libs__lp__lp_solve_8_p_0_1(
#line 822 "lp.m"
  MR_Box libs__lp__closure_arg,
#line 822 "lp.m"
  MR_Box libs__lp__wrapper_arg_1,
#line 822 "lp.m"
  MR_Box libs__lp__wrapper_arg_2,
#line 822 "lp.m"
  MR_Box * libs__lp__wrapper_arg_3);


static /* final */ const MR_Box libs__lp_scalar_common_1[8][2];

static /* final */ const MR_Box libs__lp_scalar_common_2[18][3];

static /* final */ const MR_Box libs__lp_scalar_common_3[8][6];

static /* final */ const MR_Box libs__lp_scalar_common_4[5][7];

static /* final */ const MR_Box libs__lp_scalar_common_5[2][5];

static /* final */ const MR_Box libs__lp_scalar_common_6[3][8];

static /* final */ const MR_Box libs__lp_scalar_common_7[2][9];




static /* final */ const MR_Box libs__lp_scalar_common_1[8][2] = {
  /* row 0 */
  {
    ((MR_Box) (&mercury__term__term__type_ctor_info_var_1)),
    ((MR_Box) (&mercury__term__term__type_ctor_info_generic_0))
  },
  /* row 1 */
  {
    ((MR_Box) (&mercury__maybe__maybe__type_ctor_info_maybe_1)),
    ((MR_Box) (&libs__lp_scalar_common_2[3]))
  },
  /* row 2 */
  {
    ((MR_Box) (&mercury__list__list__type_ctor_info_list_1)),
    ((MR_Box) (&libs__lp_scalar_common_2[4]))
  },
  /* row 3 */
  {
    ((MR_Box) (&mercury__varset__varset__type_ctor_info_varset_1)),
    ((MR_Box) (&mercury__term__term__type_ctor_info_generic_0))
  },
  /* row 4 */
  {
    ((MR_Box) (&mercury__list__list__type_ctor_info_list_1)),
    ((MR_Box) (&libs__lp_scalar_common_2[0]))
  },
  /* row 5 */
  {
    ((MR_Box) (&mercury__list__list__type_ctor_info_list_1)),
    ((MR_Box) (&libs__lp__libs__lp__type_ctor_info_equation_0))
  },
  /* row 6 */
  {
    ((MR_Box) (&mercury__list__list__type_ctor_info_list_1)),
    ((MR_Box) (&libs__lp_scalar_common_1[0]))
  },
  /* row 7 */
  {
    ((MR_Box) (&mercury__list__list__type_ctor_info_list_1)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_int_0))
  },
};

static /* final */ const MR_Box libs__lp_scalar_common_2[18][3] = {
  /* row 0 */
  {
    ((MR_Box) (&mercury__pair__pair__type_ctor_info_pair_2)),
    ((MR_Box) (&libs__lp_scalar_common_1[0])),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_float_0))
  },
  /* row 1 */
  {
    ((MR_Box) (&mercury__tree234__tree234__type_ctor_info_tree234_2)),
    ((MR_Box) (&libs__lp_scalar_common_1[0])),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_float_0))
  },
  /* row 2 */
  {
    ((MR_Box) (&mercury__pair__pair__type_ctor_info_pair_2)),
    ((MR_Box) (&libs__lp_scalar_common_1[0])),
    ((MR_Box) (&libs__lp_scalar_common_1[0]))
  },
  /* row 3 */
  {
    ((MR_Box) (&mercury__pair__pair__type_ctor_info_pair_2)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_int_0)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_float_0))
  },
  /* row 4 */
  {
    ((MR_Box) (&mercury__pair__pair__type_ctor_info_pair_2)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_float_0)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_int_0))
  },
  /* row 5 */
  {
    ((MR_Box) (&mercury__pair__pair__type_ctor_info_pair_2)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_int_0)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_int_0))
  },
  /* row 6 */
  {
    ((MR_Box) (&mercury__tree234__tree234__type_ctor_info_tree234_2)),
    ((MR_Box) (&libs__lp_scalar_common_1[0])),
    ((MR_Box) (&libs__lp_scalar_common_2[2]))
  },
  /* row 7 */
  {
    ((MR_Box) (&mercury__pair__pair__type_ctor_info_pair_2)),
    ((MR_Box) (&libs__lp_scalar_common_1[3])),
    ((MR_Box) (&libs__lp_scalar_common_2[6]))
  },
  /* row 8 */
  {
    ((MR_Box) (&mercury__tree234__tree234__type_ctor_info_tree234_2)),
    ((MR_Box) (&libs__lp_scalar_common_1[0])),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_int_0))
  },
  /* row 9 */
  {
    ((MR_Box) (&mercury__tree234__tree234__type_ctor_info_tree234_2)),
    ((MR_Box) (&libs__lp_scalar_common_2[5])),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_float_0))
  },
  /* row 10 */
  {
    ((MR_Box) (&libs__lp_scalar_common_3[0])),
    ((MR_Box) (libs__lp__lp_solve_8_p_0_1)),
    ((MR_Box) (MR_Word) ((MR_Integer) 0))
  },
  /* row 11 */
  {
    ((MR_Box) (&libs__lp_scalar_common_4[0])),
    ((MR_Box) (libs__lp__lp_solve_2_8_p_0_1)),
    ((MR_Box) (MR_Word) ((MR_Integer) 0))
  },
  /* row 12 */
  {
    ((MR_Box) (&libs__lp_scalar_common_5[0])),
    ((MR_Box) (libs__lp__lp_solve_2_8_p_0_2)),
    ((MR_Box) (MR_Word) ((MR_Integer) 0))
  },
  /* row 13 */
  {
    ((MR_Box) (&libs__lp_scalar_common_5[0])),
    ((MR_Box) (libs__lp__standardize_equation_4_p_0_1)),
    ((MR_Box) (MR_Word) ((MR_Integer) 0))
  },
  /* row 14 */
  {
    ((MR_Box) (&libs__lp_scalar_common_5[0])),
    ((MR_Box) (libs__lp__negate_equation_2_p_0_1)),
    ((MR_Box) (MR_Word) ((MR_Integer) 0))
  },
  /* row 15 */
  {
    ((MR_Box) (&libs__lp_scalar_common_3[2])),
    ((MR_Box) (libs__lp__simplify_eq_2_p_0_1)),
    ((MR_Box) (MR_Word) ((MR_Integer) 0))
  },
  /* row 16 */
  {
    ((MR_Box) (&libs__lp_scalar_common_3[2])),
    ((MR_Box) (libs__lp__simplify_coeffs_2_p_0_1)),
    ((MR_Box) (MR_Word) ((MR_Integer) 0))
  },
  /* row 17 */
  {
    ((MR_Box) (&libs__lp_scalar_common_3[7])),
    ((MR_Box) (libs__lp__pivot_4_p_0_6)),
    ((MR_Box) (MR_Word) ((MR_Integer) 0))
  },
};

static /* final */ const MR_Box libs__lp_scalar_common_3[8][6] = {
  /* row 0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 3)),
    ((MR_Box) (&libs__lp__term__pti_var_1__plain_term__type_ctor_info_generic_0)),
    ((MR_Box) (&libs__lp__pair__pti_pair_2__plain_varset__ti_varset_1term__type_ctor_info_generic_0__plain_tree234__ti_tree234_2term__ti_var_1term__type_ctor_info_generic_0pair__ti_pair_2term__ti_var_1term__type_ctor_info_generic_0term__ti_var_1term__type_ctor_info_generic_0)),
    ((MR_Box) (&libs__lp__pair__pti_pair_2__plain_varset__ti_varset_1term__type_ctor_info_generic_0__plain_tree234__ti_tree234_2term__ti_var_1term__type_ctor_info_generic_0pair__ti_pair_2term__ti_var_1term__type_ctor_info_generic_0term__ti_var_1term__type_ctor_info_generic_0))
  },
  /* row 1 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 3)),
    ((MR_Box) (&libs__lp__libs__lp__type_ctor_info_tableau_0)),
    ((MR_Box) (&libs__lp__list__pti_list_1__plain_builtin__type_ctor_info_int_0)),
    ((MR_Box) (&libs__lp__term__pti_var_1__plain_term__type_ctor_info_generic_0))
  },
  /* row 2 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 3)),
    ((MR_Box) (&libs__lp__pair__pti_pair_2__plain_term__ti_var_1term__type_ctor_info_generic_0__plain_builtin__type_ctor_info_float_0)),
    ((MR_Box) (&libs__lp__tree234__pti_tree234_2__plain_term__ti_var_1term__type_ctor_info_generic_0__plain_builtin__type_ctor_info_float_0)),
    ((MR_Box) (&libs__lp__tree234__pti_tree234_2__plain_term__ti_var_1term__type_ctor_info_generic_0__plain_builtin__type_ctor_info_float_0))
  },
  /* row 3 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 3)),
    ((MR_Box) (&libs__lp__list__pti_list_1__plain_libs__lp__type_ctor_info_equation_0)),
    ((MR_Box) (&libs__lp__list__pti_list_1__plain_pair__ti_pair_2term__ti_var_1term__type_ctor_info_generic_0builtin__type_ctor_info_float_0)),
    ((MR_Box) (&libs__lp__term__pti_var_1__plain_term__type_ctor_info_generic_0))
  },
  /* row 4 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 3)),
    ((MR_Box) (&libs__lp__libs__lp__type_ctor_info_tableau_0)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_int_0)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_float_0))
  },
  /* row 5 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 3)),
    ((MR_Box) (&libs__lp__libs__lp__type_ctor_info_tableau_0)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_int_0)),
    ((MR_Box) (&libs__lp__pair__pti_pair_2__plain_builtin__type_ctor_info_int_0__plain_builtin__type_ctor_info_float_0))
  },
  /* row 6 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 3)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_int_0)),
    ((MR_Box) (&libs__lp__libs__lp__type_ctor_info_tableau_0)),
    ((MR_Box) (&libs__lp__libs__lp__type_ctor_info_cell_0))
  },
  /* row 7 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 3)),
    ((MR_Box) (&libs__lp__libs__lp__type_ctor_info_cell_0)),
    ((MR_Box) (&libs__lp__libs__lp__type_ctor_info_tableau_0)),
    ((MR_Box) (&libs__lp__libs__lp__type_ctor_info_tableau_0))
  },
};

static /* final */ const MR_Box libs__lp_scalar_common_4[5][7] = {
  /* row 0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 4)),
    ((MR_Box) (&libs__lp__libs__lp__type_ctor_info_equation_0)),
    ((MR_Box) (&libs__lp__libs__lp__type_ctor_info_equation_0)),
    ((MR_Box) (&libs__lp__libs__lp__type_ctor_info_lp_info_0)),
    ((MR_Box) (&libs__lp__libs__lp__type_ctor_info_lp_info_0))
  },
  /* row 1 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 4)),
    ((MR_Box) (&libs__lp__libs__lp__type_ctor_info_tableau_0)),
    ((MR_Box) (&libs__lp__term__pti_var_1__plain_term__type_ctor_info_generic_0)),
    ((MR_Box) (&libs__lp__tree234__pti_tree234_2__plain_term__ti_var_1term__type_ctor_info_generic_0__plain_builtin__type_ctor_info_float_0)),
    ((MR_Box) (&libs__lp__tree234__pti_tree234_2__plain_term__ti_var_1term__type_ctor_info_generic_0__plain_builtin__type_ctor_info_float_0))
  },
  /* row 2 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 4)),
    ((MR_Box) (&libs__lp__libs__lp__type_ctor_info_tableau_0)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_int_0)),
    ((MR_Box) (&libs__lp__maybe__pti_maybe_1__plain_pair__ti_pair_2builtin__type_ctor_info_int_0builtin__type_ctor_info_float_0)),
    ((MR_Box) (&libs__lp__maybe__pti_maybe_1__plain_pair__ti_pair_2builtin__type_ctor_info_int_0builtin__type_ctor_info_float_0))
  },
  /* row 3 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 4)),
    ((MR_Box) (&libs__lp__libs__lp__type_ctor_info_tableau_0)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_int_0)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_int_0)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_int_0))
  },
  /* row 4 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 4)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_int_0)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_int_0)),
    ((MR_Box) (&libs__lp__libs__lp__type_ctor_info_tableau_0)),
    ((MR_Box) (&libs__lp__libs__lp__type_ctor_info_cell_0))
  },
};

static /* final */ const MR_Box libs__lp_scalar_common_5[2][5] = {
  /* row 0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 2)),
    ((MR_Box) (&libs__lp__pair__pti_pair_2__plain_term__ti_var_1term__type_ctor_info_generic_0__plain_builtin__type_ctor_info_float_0)),
    ((MR_Box) (&libs__lp__pair__pti_pair_2__plain_term__ti_var_1term__type_ctor_info_generic_0__plain_builtin__type_ctor_info_float_0))
  },
  /* row 1 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 2)),
    ((MR_Box) (&libs__lp__libs__lp__type_ctor_info_tableau_0)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_int_0))
  },
};

static /* final */ const MR_Box libs__lp_scalar_common_6[3][8] = {
  /* row 0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 5)),
    ((MR_Box) (&libs__lp__libs__lp__type_ctor_info_tableau_0)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_int_0)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_int_0)),
    ((MR_Box) (&libs__lp__maybe__pti_maybe_1__plain_pair__ti_pair_2builtin__type_ctor_info_int_0builtin__type_ctor_info_float_0)),
    ((MR_Box) (&libs__lp__maybe__pti_maybe_1__plain_pair__ti_pair_2builtin__type_ctor_info_int_0builtin__type_ctor_info_float_0))
  },
  /* row 1 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 5)),
    ((MR_Box) (&libs__lp__libs__lp__type_ctor_info_tableau_0)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_int_0)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_int_0)),
    ((MR_Box) (&libs__lp__list__pti_list_1__plain_pair__ti_pair_2builtin__type_ctor_info_float_0builtin__type_ctor_info_int_0)),
    ((MR_Box) (&libs__lp__list__pti_list_1__plain_pair__ti_pair_2builtin__type_ctor_info_float_0builtin__type_ctor_info_int_0))
  },
  /* row 2 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 5)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_int_0)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_float_0)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_int_0)),
    ((MR_Box) (&libs__lp__libs__lp__type_ctor_info_tableau_0)),
    ((MR_Box) (&libs__lp__libs__lp__type_ctor_info_tableau_0))
  },
};

static /* final */ const MR_Box libs__lp_scalar_common_7[2][9] = {
  /* row 0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 6)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_float_0)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_int_0)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_int_0)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_int_0)),
    ((MR_Box) (&libs__lp__libs__lp__type_ctor_info_tableau_0)),
    ((MR_Box) (&libs__lp__libs__lp__type_ctor_info_tableau_0))
  },
  /* row 1 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 6)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_int_0)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_int_0)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_float_0)),
    ((MR_Box) (&libs__lp__libs__lp__type_ctor_info_cell_0)),
    ((MR_Box) (&libs__lp__libs__lp__type_ctor_info_tableau_0)),
    ((MR_Box) (&libs__lp__libs__lp__type_ctor_info_tableau_0))
  },
};



#include "io.mh"
#include "io.mh"
#include "time.mh"
#include "string.mh"
#include "bitmap.mh"
#include "bitmap.mh"
#include "time.mh"
#include "time.mh"
#include "array.mh"
#include "array.mh"



#line 2628 "libs.lp.c"
static const MR_FA_PseudoTypeInfo_Struct1 libs__lp__term__pti_var_1__plain_term__type_ctor_info_generic_0 = {
  &mercury__term__term__type_ctor_info_var_1,
  {
    (MR_PseudoTypeInfo) &mercury__term__term__type_ctor_info_generic_0
  }
};

#line 2636 "libs.lp.c"
static const MR_FA_TypeInfo_Struct1 libs__lp__varset__ti_varset_1term__type_ctor_info_generic_0 = {
  &mercury__varset__varset__type_ctor_info_varset_1,
  {
    (MR_TypeInfo) &mercury__term__term__type_ctor_info_generic_0
  }
};

#line 2644 "libs.lp.c"
static const MR_FA_TypeInfo_Struct1 libs__lp__term__ti_var_1term__type_ctor_info_generic_0 = {
  &mercury__term__term__type_ctor_info_var_1,
  {
    (MR_TypeInfo) &mercury__term__term__type_ctor_info_generic_0
  }
};

#line 2652 "libs.lp.c"
static const MR_FA_TypeInfo_Struct2 libs__lp__pair__ti_pair_2term__ti_var_1term__type_ctor_info_generic_0term__ti_var_1term__type_ctor_info_generic_0 = {
  &mercury__pair__pair__type_ctor_info_pair_2,
  {
    (MR_TypeInfo) &libs__lp__term__ti_var_1term__type_ctor_info_generic_0,
    (MR_TypeInfo) &libs__lp__term__ti_var_1term__type_ctor_info_generic_0
  }
};

#line 2661 "libs.lp.c"
static const MR_FA_TypeInfo_Struct2 libs__lp__tree234__ti_tree234_2term__ti_var_1term__type_ctor_info_generic_0pair__ti_pair_2term__ti_var_1term__type_ctor_info_generic_0term__ti_var_1term__type_ctor_info_generic_0 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_TypeInfo) &libs__lp__term__ti_var_1term__type_ctor_info_generic_0,
    (MR_TypeInfo) &libs__lp__pair__ti_pair_2term__ti_var_1term__type_ctor_info_generic_0term__ti_var_1term__type_ctor_info_generic_0
  }
};

#line 2670 "libs.lp.c"
static const MR_FA_PseudoTypeInfo_Struct2 libs__lp__pair__pti_pair_2__plain_varset__ti_varset_1term__type_ctor_info_generic_0__plain_tree234__ti_tree234_2term__ti_var_1term__type_ctor_info_generic_0pair__ti_pair_2term__ti_var_1term__type_ctor_info_generic_0term__ti_var_1term__type_ctor_info_generic_0 = {
  &mercury__pair__pair__type_ctor_info_pair_2,
  {
    (MR_PseudoTypeInfo) &libs__lp__varset__ti_varset_1term__type_ctor_info_generic_0,
    (MR_PseudoTypeInfo) &libs__lp__tree234__ti_tree234_2term__ti_var_1term__type_ctor_info_generic_0pair__ti_pair_2term__ti_var_1term__type_ctor_info_generic_0term__ti_var_1term__type_ctor_info_generic_0
  }
};

#line 2679 "libs.lp.c"
static const MR_FA_PseudoTypeInfo_Struct2 libs__lp__pair__pti_pair_2__plain_term__ti_var_1term__type_ctor_info_generic_0__plain_builtin__type_ctor_info_float_0 = {
  &mercury__pair__pair__type_ctor_info_pair_2,
  {
    (MR_PseudoTypeInfo) &libs__lp__term__ti_var_1term__type_ctor_info_generic_0,
    (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_float_0
  }
};

#line 2688 "libs.lp.c"
static const MR_FA_PseudoTypeInfo_Struct2 libs__lp__tree234__pti_tree234_2__plain_term__ti_var_1term__type_ctor_info_generic_0__plain_builtin__type_ctor_info_float_0 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_PseudoTypeInfo) &libs__lp__term__ti_var_1term__type_ctor_info_generic_0,
    (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_float_0
  }
};

#line 2697 "libs.lp.c"
static const MR_FA_PseudoTypeInfo_Struct1 libs__lp__list__pti_list_1__plain_builtin__type_ctor_info_int_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  {
    (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_int_0
  }
};

#line 2705 "libs.lp.c"
static const MR_FA_PseudoTypeInfo_Struct1 libs__lp__list__pti_list_1__plain_libs__lp__type_ctor_info_equation_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  {
    (MR_PseudoTypeInfo) &libs__lp__libs__lp__type_ctor_info_equation_0
  }
};

#line 2713 "libs.lp.c"
static const MR_FA_TypeInfo_Struct2 libs__lp__pair__ti_pair_2term__ti_var_1term__type_ctor_info_generic_0builtin__type_ctor_info_float_0 = {
  &mercury__pair__pair__type_ctor_info_pair_2,
  {
    (MR_TypeInfo) &libs__lp__term__ti_var_1term__type_ctor_info_generic_0,
    (MR_TypeInfo) &mercury__builtin__builtin__type_ctor_info_float_0
  }
};

#line 2722 "libs.lp.c"
static const MR_FA_PseudoTypeInfo_Struct1 libs__lp__list__pti_list_1__plain_pair__ti_pair_2term__ti_var_1term__type_ctor_info_generic_0builtin__type_ctor_info_float_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  {
    (MR_PseudoTypeInfo) &libs__lp__pair__ti_pair_2term__ti_var_1term__type_ctor_info_generic_0builtin__type_ctor_info_float_0
  }
};

#line 2730 "libs.lp.c"
static const MR_FA_TypeInfo_Struct2 libs__lp__pair__ti_pair_2builtin__type_ctor_info_int_0builtin__type_ctor_info_float_0 = {
  &mercury__pair__pair__type_ctor_info_pair_2,
  {
    (MR_TypeInfo) &mercury__builtin__builtin__type_ctor_info_int_0,
    (MR_TypeInfo) &mercury__builtin__builtin__type_ctor_info_float_0
  }
};

#line 2739 "libs.lp.c"
static const MR_FA_PseudoTypeInfo_Struct1 libs__lp__maybe__pti_maybe_1__plain_pair__ti_pair_2builtin__type_ctor_info_int_0builtin__type_ctor_info_float_0 = {
  &mercury__maybe__maybe__type_ctor_info_maybe_1,
  {
    (MR_PseudoTypeInfo) &libs__lp__pair__ti_pair_2builtin__type_ctor_info_int_0builtin__type_ctor_info_float_0
  }
};

#line 2747 "libs.lp.c"
static const MR_FA_PseudoTypeInfo_Struct2 libs__lp__pair__pti_pair_2__plain_builtin__type_ctor_info_int_0__plain_builtin__type_ctor_info_float_0 = {
  &mercury__pair__pair__type_ctor_info_pair_2,
  {
    (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_int_0,
    (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_float_0
  }
};

#line 2756 "libs.lp.c"
static const MR_FA_TypeInfo_Struct2 libs__lp__pair__ti_pair_2builtin__type_ctor_info_float_0builtin__type_ctor_info_int_0 = {
  &mercury__pair__pair__type_ctor_info_pair_2,
  {
    (MR_TypeInfo) &mercury__builtin__builtin__type_ctor_info_float_0,
    (MR_TypeInfo) &mercury__builtin__builtin__type_ctor_info_int_0
  }
};

#line 2765 "libs.lp.c"
static const MR_FA_PseudoTypeInfo_Struct1 libs__lp__list__pti_list_1__plain_pair__ti_pair_2builtin__type_ctor_info_float_0builtin__type_ctor_info_int_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  {
    (MR_PseudoTypeInfo) &libs__lp__pair__ti_pair_2builtin__type_ctor_info_float_0builtin__type_ctor_info_int_0
  }
};

#line 2773 "libs.lp.c"
static const MR_PseudoTypeInfo libs__lp__libs__lp__field_types_cell_0_0[2] = {
  (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_int_0,
  (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_int_0
};

#line 2779 "libs.lp.c"
static const MR_DuFunctorDesc libs__lp__libs__lp__du_functor_desc_cell_0_0 = {
  (MR_String) "cell",
  (MR_Integer) 2,
  (MR_Integer) 0,
  mercury__private_builtin__MR_SECTAG_NONE,
  (MR_Integer) 0,
  (MR_Integer) -1,
  (MR_Integer) 0,
  libs__lp__libs__lp__field_types_cell_0_0,
  NULL,
  NULL,
  NULL
};

#line 2794 "libs.lp.c"
static const MR_DuFunctorDescPtr libs__lp__libs__lp__du_stag_ordered_cell_0_0[1] = {
  &libs__lp__libs__lp__du_functor_desc_cell_0_0
};

#line 2799 "libs.lp.c"
static const MR_DuPtagLayout libs__lp__libs__lp__du_ptag_ordered_cell_0[1] = {
  {
    (MR_Integer) 1,
    mercury__private_builtin__MR_SECTAG_NONE,
    libs__lp__libs__lp__du_stag_ordered_cell_0_0
  }
};

#line 2808 "libs.lp.c"
static const MR_DuFunctorDescPtr libs__lp__libs__lp__du_name_ordered_cell_0[1] = {
  &libs__lp__libs__lp__du_functor_desc_cell_0_0
};

#line 2813 "libs.lp.c"
static const MR_Integer libs__lp__libs__lp__functor_number_map_cell_0[1] = {
  (MR_Integer) 0
};

#line 2818 "libs.lp.c"
const MR_TypeCtorInfo_Struct libs__lp__libs__lp__type_ctor_info_cell_0 = {
  (MR_Integer) 0,
  (MR_Integer) 15,
  (MR_Integer) 1,
  mercury__private_builtin__MR_TYPECTOR_REP_DU,
  ((MR_Box) (libs__lp____Unify____cell_0_0_10001)),
  ((MR_Box) (libs__lp____Compare____cell_0_0_10001)),
  (MR_String) "libs.lp",
  (MR_String) "cell",
  {
    libs__lp__libs__lp__du_name_ordered_cell_0
  },
  {
    libs__lp__libs__lp__du_ptag_ordered_cell_0
  },
  (MR_Integer) 1,
  (MR_Integer) 4,
  libs__lp__libs__lp__functor_number_map_cell_0
};

#line 2839 "libs.lp.c"
const MR_TypeCtorInfo_Struct libs__lp__libs__lp__type_ctor_info_coeff_0 = {
  (MR_Integer) 0,
  (MR_Integer) 15,
  (MR_Integer) -1,
  mercury__private_builtin__MR_TYPECTOR_REP_EQUIV_GROUND,
  ((MR_Box) (libs__lp____Unify____coeff_0_0_10001)),
  ((MR_Box) (libs__lp____Compare____coeff_0_0_10001)),
  (MR_String) "libs.lp",
  (MR_String) "coeff",
  {
    NULL
  },
  {
    (MR_PseudoTypeInfo) &libs__lp__pair__ti_pair_2term__ti_var_1term__type_ctor_info_generic_0builtin__type_ctor_info_float_0
  },
  (MR_Integer) -1,
  (MR_Integer) 0,
  NULL
};

#line 2860 "libs.lp.c"
static const MR_EnumFunctorDesc libs__lp__libs__lp__enum_functor_desc_direction_0_0 = {
  (MR_String) "max",
  (MR_Integer) 0
};

#line 2866 "libs.lp.c"
static const MR_EnumFunctorDesc libs__lp__libs__lp__enum_functor_desc_direction_0_1 = {
  (MR_String) "min",
  (MR_Integer) 1
};

#line 2872 "libs.lp.c"
static const MR_EnumFunctorDescPtr libs__lp__libs__lp__enum_value_ordered_direction_0[2] = {
  &libs__lp__libs__lp__enum_functor_desc_direction_0_0,
  &libs__lp__libs__lp__enum_functor_desc_direction_0_1
};

#line 2878 "libs.lp.c"
static const MR_EnumFunctorDescPtr libs__lp__libs__lp__enum_name_ordered_direction_0[2] = {
  &libs__lp__libs__lp__enum_functor_desc_direction_0_0,
  &libs__lp__libs__lp__enum_functor_desc_direction_0_1
};

#line 2884 "libs.lp.c"
static const MR_Integer libs__lp__libs__lp__functor_number_map_direction_0[2] = {
  (MR_Integer) 0,
  (MR_Integer) 1
};

#line 2890 "libs.lp.c"
const MR_TypeCtorInfo_Struct libs__lp__libs__lp__type_ctor_info_direction_0 = {
  (MR_Integer) 0,
  (MR_Integer) 15,
  (MR_Integer) -1,
  mercury__private_builtin__MR_TYPECTOR_REP_ENUM,
  ((MR_Box) (libs__lp____Unify____direction_0_0_10001)),
  ((MR_Box) (libs__lp____Compare____direction_0_0_10001)),
  (MR_String) "libs.lp",
  (MR_String) "direction",
  {
    libs__lp__libs__lp__enum_name_ordered_direction_0
  },
  {
    libs__lp__libs__lp__enum_value_ordered_direction_0
  },
  (MR_Integer) 2,
  (MR_Integer) 4,
  libs__lp__libs__lp__functor_number_map_direction_0
};

#line 2911 "libs.lp.c"
static const MR_FA_TypeInfo_Struct1 libs__lp__list__ti_list_1pair__ti_pair_2term__ti_var_1term__type_ctor_info_generic_0builtin__type_ctor_info_float_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  {
    (MR_TypeInfo) &libs__lp__pair__ti_pair_2term__ti_var_1term__type_ctor_info_generic_0builtin__type_ctor_info_float_0
  }
};

#line 2919 "libs.lp.c"
static const MR_PseudoTypeInfo libs__lp__libs__lp__field_types_equation_0_0[3] = {
  (MR_PseudoTypeInfo) &libs__lp__list__ti_list_1pair__ti_pair_2term__ti_var_1term__type_ctor_info_generic_0builtin__type_ctor_info_float_0,
  (MR_PseudoTypeInfo) &libs__lp__libs__lp__type_ctor_info_operator_0,
  (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_float_0
};

#line 2926 "libs.lp.c"
static const MR_DuFunctorDesc libs__lp__libs__lp__du_functor_desc_equation_0_0 = {
  (MR_String) "eqn",
  (MR_Integer) 3,
  (MR_Integer) 0,
  mercury__private_builtin__MR_SECTAG_NONE,
  (MR_Integer) 0,
  (MR_Integer) -1,
  (MR_Integer) 0,
  libs__lp__libs__lp__field_types_equation_0_0,
  NULL,
  NULL,
  NULL
};

#line 2941 "libs.lp.c"
static const MR_DuFunctorDescPtr libs__lp__libs__lp__du_stag_ordered_equation_0_0[1] = {
  &libs__lp__libs__lp__du_functor_desc_equation_0_0
};

#line 2946 "libs.lp.c"
static const MR_DuPtagLayout libs__lp__libs__lp__du_ptag_ordered_equation_0[1] = {
  {
    (MR_Integer) 1,
    mercury__private_builtin__MR_SECTAG_NONE,
    libs__lp__libs__lp__du_stag_ordered_equation_0_0
  }
};

#line 2955 "libs.lp.c"
static const MR_DuFunctorDescPtr libs__lp__libs__lp__du_name_ordered_equation_0[1] = {
  &libs__lp__libs__lp__du_functor_desc_equation_0_0
};

#line 2960 "libs.lp.c"
static const MR_Integer libs__lp__libs__lp__functor_number_map_equation_0[1] = {
  (MR_Integer) 0
};

#line 2965 "libs.lp.c"
const MR_TypeCtorInfo_Struct libs__lp__libs__lp__type_ctor_info_equation_0 = {
  (MR_Integer) 0,
  (MR_Integer) 15,
  (MR_Integer) 1,
  mercury__private_builtin__MR_TYPECTOR_REP_DU,
  ((MR_Box) (libs__lp____Unify____equation_0_0_10001)),
  ((MR_Box) (libs__lp____Compare____equation_0_0_10001)),
  (MR_String) "libs.lp",
  (MR_String) "equation",
  {
    libs__lp__libs__lp__du_name_ordered_equation_0
  },
  {
    libs__lp__libs__lp__du_ptag_ordered_equation_0
  },
  (MR_Integer) 1,
  (MR_Integer) 4,
  libs__lp__libs__lp__functor_number_map_equation_0
};

#line 2986 "libs.lp.c"
static const MR_FA_TypeInfo_Struct1 libs__lp__list__ti_list_1libs__lp__type_ctor_info_equation_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  {
    (MR_TypeInfo) &libs__lp__libs__lp__type_ctor_info_equation_0
  }
};

#line 2994 "libs.lp.c"
const MR_TypeCtorInfo_Struct libs__lp__libs__lp__type_ctor_info_equations_0 = {
  (MR_Integer) 0,
  (MR_Integer) 15,
  (MR_Integer) -1,
  mercury__private_builtin__MR_TYPECTOR_REP_EQUIV_GROUND,
  ((MR_Box) (libs__lp____Unify____equations_0_0_10001)),
  ((MR_Box) (libs__lp____Compare____equations_0_0_10001)),
  (MR_String) "libs.lp",
  (MR_String) "equations",
  {
    NULL
  },
  {
    (MR_PseudoTypeInfo) &libs__lp__list__ti_list_1libs__lp__type_ctor_info_equation_0
  },
  (MR_Integer) -1,
  (MR_Integer) 0,
  NULL
};

#line 3015 "libs.lp.c"
static const MR_FA_TypeInfo_Struct1 libs__lp__list__ti_list_1term__ti_var_1term__type_ctor_info_generic_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  {
    (MR_TypeInfo) &libs__lp__term__ti_var_1term__type_ctor_info_generic_0
  }
};

#line 3023 "libs.lp.c"
static const MR_PseudoTypeInfo libs__lp__libs__lp__field_types_lp_info_0_0[4] = {
  (MR_PseudoTypeInfo) &libs__lp__varset__ti_varset_1term__type_ctor_info_generic_0,
  (MR_PseudoTypeInfo) &libs__lp__tree234__ti_tree234_2term__ti_var_1term__type_ctor_info_generic_0pair__ti_pair_2term__ti_var_1term__type_ctor_info_generic_0term__ti_var_1term__type_ctor_info_generic_0,
  (MR_PseudoTypeInfo) &libs__lp__list__ti_list_1term__ti_var_1term__type_ctor_info_generic_0,
  (MR_PseudoTypeInfo) &libs__lp__list__ti_list_1term__ti_var_1term__type_ctor_info_generic_0
};

#line 3031 "libs.lp.c"
static const MR_ConstString libs__lp__libs__lp__field_names_lp_info_0_0[4] = {
  (MR_String) "lpi_varset",
  (MR_String) "lpi_urs_map",
  (MR_String) "lpi_slack_vars",
  (MR_String) "lpi_art_vars"
};

#line 3039 "libs.lp.c"
static const MR_DuFunctorDesc libs__lp__libs__lp__du_functor_desc_lp_info_0_0 = {
  (MR_String) "lp_info",
  (MR_Integer) 4,
  (MR_Integer) 0,
  mercury__private_builtin__MR_SECTAG_NONE,
  (MR_Integer) 0,
  (MR_Integer) -1,
  (MR_Integer) 0,
  libs__lp__libs__lp__field_types_lp_info_0_0,
  libs__lp__libs__lp__field_names_lp_info_0_0,
  NULL,
  NULL
};

#line 3054 "libs.lp.c"
static const MR_DuFunctorDescPtr libs__lp__libs__lp__du_stag_ordered_lp_info_0_0[1] = {
  &libs__lp__libs__lp__du_functor_desc_lp_info_0_0
};

#line 3059 "libs.lp.c"
static const MR_DuPtagLayout libs__lp__libs__lp__du_ptag_ordered_lp_info_0[1] = {
  {
    (MR_Integer) 1,
    mercury__private_builtin__MR_SECTAG_NONE,
    libs__lp__libs__lp__du_stag_ordered_lp_info_0_0
  }
};

#line 3068 "libs.lp.c"
static const MR_DuFunctorDescPtr libs__lp__libs__lp__du_name_ordered_lp_info_0[1] = {
  &libs__lp__libs__lp__du_functor_desc_lp_info_0_0
};

#line 3073 "libs.lp.c"
static const MR_Integer libs__lp__libs__lp__functor_number_map_lp_info_0[1] = {
  (MR_Integer) 0
};

#line 3078 "libs.lp.c"
const MR_TypeCtorInfo_Struct libs__lp__libs__lp__type_ctor_info_lp_info_0 = {
  (MR_Integer) 0,
  (MR_Integer) 15,
  (MR_Integer) 1,
  mercury__private_builtin__MR_TYPECTOR_REP_DU,
  ((MR_Box) (libs__lp____Unify____lp_info_0_0_10001)),
  ((MR_Box) (libs__lp____Compare____lp_info_0_0_10001)),
  (MR_String) "libs.lp",
  (MR_String) "lp_info",
  {
    libs__lp__libs__lp__du_name_ordered_lp_info_0
  },
  {
    libs__lp__libs__lp__du_ptag_ordered_lp_info_0
  },
  (MR_Integer) 1,
  (MR_Integer) 4,
  libs__lp__libs__lp__functor_number_map_lp_info_0
};

#line 3099 "libs.lp.c"
const MR_TypeCtorInfo_Struct libs__lp__libs__lp__type_ctor_info_objective_0 = {
  (MR_Integer) 0,
  (MR_Integer) 15,
  (MR_Integer) -1,
  mercury__private_builtin__MR_TYPECTOR_REP_EQUIV_GROUND,
  ((MR_Box) (libs__lp____Unify____objective_0_0_10001)),
  ((MR_Box) (libs__lp____Compare____objective_0_0_10001)),
  (MR_String) "libs.lp",
  (MR_String) "objective",
  {
    NULL
  },
  {
    (MR_PseudoTypeInfo) &libs__lp__list__ti_list_1pair__ti_pair_2term__ti_var_1term__type_ctor_info_generic_0builtin__type_ctor_info_float_0
  },
  (MR_Integer) -1,
  (MR_Integer) 0,
  NULL
};

#line 3120 "libs.lp.c"
static const MR_EnumFunctorDesc libs__lp__libs__lp__enum_functor_desc_operator_0_0 = {
  (MR_String) "=<",
  (MR_Integer) 0
};

#line 3126 "libs.lp.c"
static const MR_EnumFunctorDesc libs__lp__libs__lp__enum_functor_desc_operator_0_1 = {
  (MR_String) "=",
  (MR_Integer) 1
};

#line 3132 "libs.lp.c"
static const MR_EnumFunctorDesc libs__lp__libs__lp__enum_functor_desc_operator_0_2 = {
  (MR_String) ">=",
  (MR_Integer) 2
};

#line 3138 "libs.lp.c"
static const MR_EnumFunctorDescPtr libs__lp__libs__lp__enum_value_ordered_operator_0[3] = {
  &libs__lp__libs__lp__enum_functor_desc_operator_0_0,
  &libs__lp__libs__lp__enum_functor_desc_operator_0_1,
  &libs__lp__libs__lp__enum_functor_desc_operator_0_2
};

#line 3145 "libs.lp.c"
static const MR_EnumFunctorDescPtr libs__lp__libs__lp__enum_name_ordered_operator_0[3] = {
  &libs__lp__libs__lp__enum_functor_desc_operator_0_1,
  &libs__lp__libs__lp__enum_functor_desc_operator_0_0,
  &libs__lp__libs__lp__enum_functor_desc_operator_0_2
};

#line 3152 "libs.lp.c"
static const MR_Integer libs__lp__libs__lp__functor_number_map_operator_0[3] = {
  (MR_Integer) 1,
  (MR_Integer) 0,
  (MR_Integer) 2
};

#line 3159 "libs.lp.c"
const MR_TypeCtorInfo_Struct libs__lp__libs__lp__type_ctor_info_operator_0 = {
  (MR_Integer) 0,
  (MR_Integer) 15,
  (MR_Integer) -1,
  mercury__private_builtin__MR_TYPECTOR_REP_ENUM,
  ((MR_Box) (libs__lp____Unify____operator_0_0_10001)),
  ((MR_Box) (libs__lp____Compare____operator_0_0_10001)),
  (MR_String) "libs.lp",
  (MR_String) "operator",
  {
    libs__lp__libs__lp__enum_name_ordered_operator_0
  },
  {
    libs__lp__libs__lp__enum_value_ordered_operator_0
  },
  (MR_Integer) 3,
  (MR_Integer) 4,
  libs__lp__libs__lp__functor_number_map_operator_0
};

#line 3180 "libs.lp.c"
static const MR_DuFunctorDesc libs__lp__libs__lp__du_functor_desc_result_0_0 = {
  (MR_String) "unsatisfiable",
  (MR_Integer) 0,
  (MR_Integer) 0,
  mercury__private_builtin__MR_SECTAG_LOCAL,
  (MR_Integer) 0,
  (MR_Integer) 0,
  (MR_Integer) 0,
  NULL,
  NULL,
  NULL,
  NULL
};

#line 3195 "libs.lp.c"
static const MR_FA_TypeInfo_Struct2 libs__lp__tree234__ti_tree234_2term__ti_var_1term__type_ctor_info_generic_0builtin__type_ctor_info_float_0 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_TypeInfo) &libs__lp__term__ti_var_1term__type_ctor_info_generic_0,
    (MR_TypeInfo) &mercury__builtin__builtin__type_ctor_info_float_0
  }
};

#line 3204 "libs.lp.c"
static const MR_PseudoTypeInfo libs__lp__libs__lp__field_types_result_0_1[2] = {
  (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_float_0,
  (MR_PseudoTypeInfo) &libs__lp__tree234__ti_tree234_2term__ti_var_1term__type_ctor_info_generic_0builtin__type_ctor_info_float_0
};

#line 3210 "libs.lp.c"
static const MR_DuFunctorDesc libs__lp__libs__lp__du_functor_desc_result_0_1 = {
  (MR_String) "satisfiable",
  (MR_Integer) 2,
  (MR_Integer) 0,
  mercury__private_builtin__MR_SECTAG_NONE,
  (MR_Integer) 1,
  (MR_Integer) -1,
  (MR_Integer) 1,
  libs__lp__libs__lp__field_types_result_0_1,
  NULL,
  NULL,
  NULL
};

#line 3225 "libs.lp.c"
static const MR_DuFunctorDescPtr libs__lp__libs__lp__du_stag_ordered_result_0_0[1] = {
  &libs__lp__libs__lp__du_functor_desc_result_0_0
};

#line 3230 "libs.lp.c"
static const MR_DuFunctorDescPtr libs__lp__libs__lp__du_stag_ordered_result_0_1[1] = {
  &libs__lp__libs__lp__du_functor_desc_result_0_1
};

#line 3235 "libs.lp.c"
static const MR_DuPtagLayout libs__lp__libs__lp__du_ptag_ordered_result_0[2] = {
  {
    (MR_Integer) 1,
    mercury__private_builtin__MR_SECTAG_LOCAL,
    libs__lp__libs__lp__du_stag_ordered_result_0_0
  },
  {
    (MR_Integer) 1,
    mercury__private_builtin__MR_SECTAG_NONE,
    libs__lp__libs__lp__du_stag_ordered_result_0_1
  }
};

#line 3249 "libs.lp.c"
static const MR_DuFunctorDescPtr libs__lp__libs__lp__du_name_ordered_result_0[2] = {
  &libs__lp__libs__lp__du_functor_desc_result_0_1,
  &libs__lp__libs__lp__du_functor_desc_result_0_0
};

#line 3255 "libs.lp.c"
static const MR_Integer libs__lp__libs__lp__functor_number_map_result_0[2] = {
  (MR_Integer) 1,
  (MR_Integer) 0
};

#line 3261 "libs.lp.c"
const MR_TypeCtorInfo_Struct libs__lp__libs__lp__type_ctor_info_result_0 = {
  (MR_Integer) 0,
  (MR_Integer) 15,
  (MR_Integer) 2,
  mercury__private_builtin__MR_TYPECTOR_REP_DU,
  ((MR_Box) (libs__lp____Unify____result_0_0_10001)),
  ((MR_Box) (libs__lp____Compare____result_0_0_10001)),
  (MR_String) "libs.lp",
  (MR_String) "result",
  {
    libs__lp__libs__lp__du_name_ordered_result_0
  },
  {
    libs__lp__libs__lp__du_ptag_ordered_result_0
  },
  (MR_Integer) 2,
  (MR_Integer) 4,
  libs__lp__libs__lp__functor_number_map_result_0
};

#line 3282 "libs.lp.c"
static const MR_FA_TypeInfo_Struct2 libs__lp__tree234__ti_tree234_2term__ti_var_1term__type_ctor_info_generic_0builtin__type_ctor_info_int_0 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_TypeInfo) &libs__lp__term__ti_var_1term__type_ctor_info_generic_0,
    (MR_TypeInfo) &mercury__builtin__builtin__type_ctor_info_int_0
  }
};

#line 3291 "libs.lp.c"
static const MR_FA_TypeInfo_Struct1 libs__lp__list__ti_list_1builtin__type_ctor_info_int_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  {
    (MR_TypeInfo) &mercury__builtin__builtin__type_ctor_info_int_0
  }
};

#line 3299 "libs.lp.c"
static const MR_FA_TypeInfo_Struct2 libs__lp__pair__ti_pair_2builtin__type_ctor_info_int_0builtin__type_ctor_info_int_0 = {
  &mercury__pair__pair__type_ctor_info_pair_2,
  {
    (MR_TypeInfo) &mercury__builtin__builtin__type_ctor_info_int_0,
    (MR_TypeInfo) &mercury__builtin__builtin__type_ctor_info_int_0
  }
};

#line 3308 "libs.lp.c"
static const MR_FA_TypeInfo_Struct2 libs__lp__tree234__ti_tree234_2pair__ti_pair_2builtin__type_ctor_info_int_0builtin__type_ctor_info_int_0builtin__type_ctor_info_float_0 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_TypeInfo) &libs__lp__pair__ti_pair_2builtin__type_ctor_info_int_0builtin__type_ctor_info_int_0,
    (MR_TypeInfo) &mercury__builtin__builtin__type_ctor_info_float_0
  }
};

#line 3317 "libs.lp.c"
static const MR_PseudoTypeInfo libs__lp__libs__lp__field_types_tableau_0_0[7] = {
  (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_int_0,
  (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_int_0,
  (MR_PseudoTypeInfo) &libs__lp__tree234__ti_tree234_2term__ti_var_1term__type_ctor_info_generic_0builtin__type_ctor_info_int_0,
  (MR_PseudoTypeInfo) &libs__lp__tree234__ti_tree234_2term__ti_var_1term__type_ctor_info_generic_0pair__ti_pair_2term__ti_var_1term__type_ctor_info_generic_0term__ti_var_1term__type_ctor_info_generic_0,
  (MR_PseudoTypeInfo) &libs__lp__list__ti_list_1builtin__type_ctor_info_int_0,
  (MR_PseudoTypeInfo) &libs__lp__list__ti_list_1builtin__type_ctor_info_int_0,
  (MR_PseudoTypeInfo) &libs__lp__tree234__ti_tree234_2pair__ti_pair_2builtin__type_ctor_info_int_0builtin__type_ctor_info_int_0builtin__type_ctor_info_float_0
};

#line 3328 "libs.lp.c"
static const MR_ConstString libs__lp__libs__lp__field_names_tableau_0_0[7] = {
  (MR_String) "rows",
  (MR_String) "cols",
  (MR_String) "var_nums",
  (MR_String) "urs_vars",
  (MR_String) "shunned_rows",
  (MR_String) "shunned_cols",
  (MR_String) "cells"
};

#line 3339 "libs.lp.c"
static const MR_DuFunctorDesc libs__lp__libs__lp__du_functor_desc_tableau_0_0 = {
  (MR_String) "tableau",
  (MR_Integer) 7,
  (MR_Integer) 0,
  mercury__private_builtin__MR_SECTAG_NONE,
  (MR_Integer) 0,
  (MR_Integer) -1,
  (MR_Integer) 0,
  libs__lp__libs__lp__field_types_tableau_0_0,
  libs__lp__libs__lp__field_names_tableau_0_0,
  NULL,
  NULL
};

#line 3354 "libs.lp.c"
static const MR_DuFunctorDescPtr libs__lp__libs__lp__du_stag_ordered_tableau_0_0[1] = {
  &libs__lp__libs__lp__du_functor_desc_tableau_0_0
};

#line 3359 "libs.lp.c"
static const MR_DuPtagLayout libs__lp__libs__lp__du_ptag_ordered_tableau_0[1] = {
  {
    (MR_Integer) 1,
    mercury__private_builtin__MR_SECTAG_NONE,
    libs__lp__libs__lp__du_stag_ordered_tableau_0_0
  }
};

#line 3368 "libs.lp.c"
static const MR_DuFunctorDescPtr libs__lp__libs__lp__du_name_ordered_tableau_0[1] = {
  &libs__lp__libs__lp__du_functor_desc_tableau_0_0
};

#line 3373 "libs.lp.c"
static const MR_Integer libs__lp__libs__lp__functor_number_map_tableau_0[1] = {
  (MR_Integer) 0
};

#line 3378 "libs.lp.c"
const MR_TypeCtorInfo_Struct libs__lp__libs__lp__type_ctor_info_tableau_0 = {
  (MR_Integer) 0,
  (MR_Integer) 15,
  (MR_Integer) 1,
  mercury__private_builtin__MR_TYPECTOR_REP_DU,
  ((MR_Box) (libs__lp____Unify____tableau_0_0_10001)),
  ((MR_Box) (libs__lp____Compare____tableau_0_0_10001)),
  (MR_String) "libs.lp",
  (MR_String) "tableau",
  {
    libs__lp__libs__lp__du_name_ordered_tableau_0
  },
  {
    libs__lp__libs__lp__du_ptag_ordered_tableau_0
  },
  (MR_Integer) 1,
  (MR_Integer) 4,
  libs__lp__libs__lp__functor_number_map_tableau_0
};

#line 3399 "libs.lp.c"
static MR_bool MR_CALL 
libs__lp____Unify____cell_0_0_10001(
#line 3402 "libs.lp.c"
  MR_Box libs__lp__wrapper_arg_1,
#line 3404 "libs.lp.c"
  MR_Box libs__lp__wrapper_arg_2)
#line 3406 "libs.lp.c"
{
#line 3408 "libs.lp.c"
  {
#line 3410 "libs.lp.c"
    MR_bool libs__lp__succeeded;

#line 3413 "libs.lp.c"
    {
#line 3415 "libs.lp.c"
      libs__lp__succeeded = libs__lp____Unify____cell_0_0(((MR_Word) libs__lp__wrapper_arg_1), ((MR_Word) libs__lp__wrapper_arg_2));
    }
#line 3418 "libs.lp.c"
    return libs__lp__succeeded;
#line 3420 "libs.lp.c"
  }
#line 3422 "libs.lp.c"
}

#line 3425 "libs.lp.c"
static void MR_CALL 
libs__lp____Compare____cell_0_0_10001(
#line 3428 "libs.lp.c"
  MR_Box * libs__lp__wrapper_arg_1,
#line 3430 "libs.lp.c"
  MR_Box libs__lp__wrapper_arg_2,
#line 3432 "libs.lp.c"
  MR_Box libs__lp__wrapper_arg_3)
#line 3434 "libs.lp.c"
{
#line 3436 "libs.lp.c"
  {
#line 3438 "libs.lp.c"
    MR_Word libs__lp__conv0_HeadVar__1_1;

#line 3441 "libs.lp.c"
    {
#line 3443 "libs.lp.c"
      libs__lp____Compare____cell_0_0(&libs__lp__conv0_HeadVar__1_1, ((MR_Word) libs__lp__wrapper_arg_2), ((MR_Word) libs__lp__wrapper_arg_3));
    }
#line 3446 "libs.lp.c"
    *libs__lp__wrapper_arg_1 = ((MR_Box) (libs__lp__conv0_HeadVar__1_1));
#line 3448 "libs.lp.c"
  }
#line 3450 "libs.lp.c"
}

#line 3453 "libs.lp.c"
static MR_bool MR_CALL 
libs__lp____Unify____coeff_0_0_10001(
#line 3456 "libs.lp.c"
  MR_Box libs__lp__wrapper_arg_1,
#line 3458 "libs.lp.c"
  MR_Box libs__lp__wrapper_arg_2)
#line 3460 "libs.lp.c"
{
#line 3462 "libs.lp.c"
  {
#line 3464 "libs.lp.c"
    MR_bool libs__lp__succeeded;

#line 3467 "libs.lp.c"
    {
#line 3469 "libs.lp.c"
      libs__lp__succeeded = libs__lp____Unify____coeff_0_0(((MR_Word) libs__lp__wrapper_arg_1), ((MR_Word) libs__lp__wrapper_arg_2));
    }
#line 3472 "libs.lp.c"
    return libs__lp__succeeded;
#line 3474 "libs.lp.c"
  }
#line 3476 "libs.lp.c"
}

#line 3479 "libs.lp.c"
static void MR_CALL 
libs__lp____Compare____coeff_0_0_10001(
#line 3482 "libs.lp.c"
  MR_Box * libs__lp__wrapper_arg_1,
#line 3484 "libs.lp.c"
  MR_Box libs__lp__wrapper_arg_2,
#line 3486 "libs.lp.c"
  MR_Box libs__lp__wrapper_arg_3)
#line 3488 "libs.lp.c"
{
#line 3490 "libs.lp.c"
  {
#line 3492 "libs.lp.c"
    MR_Word libs__lp__conv0_HeadVar__1_1;

#line 3495 "libs.lp.c"
    {
#line 3497 "libs.lp.c"
      libs__lp____Compare____coeff_0_0(&libs__lp__conv0_HeadVar__1_1, ((MR_Word) libs__lp__wrapper_arg_2), ((MR_Word) libs__lp__wrapper_arg_3));
    }
#line 3500 "libs.lp.c"
    *libs__lp__wrapper_arg_1 = ((MR_Box) (libs__lp__conv0_HeadVar__1_1));
#line 3502 "libs.lp.c"
  }
#line 3504 "libs.lp.c"
}

#line 3507 "libs.lp.c"
static MR_bool MR_CALL 
libs__lp____Unify____direction_0_0_10001(
#line 3510 "libs.lp.c"
  MR_Box libs__lp__wrapper_arg_1,
#line 3512 "libs.lp.c"
  MR_Box libs__lp__wrapper_arg_2)
#line 3514 "libs.lp.c"
{
#line 3516 "libs.lp.c"
  {
#line 3518 "libs.lp.c"
    MR_bool libs__lp__succeeded;

#line 3521 "libs.lp.c"
    {
#line 3523 "libs.lp.c"
      libs__lp__succeeded = libs__lp____Unify____direction_0_0(((MR_Word) libs__lp__wrapper_arg_1), ((MR_Word) libs__lp__wrapper_arg_2));
    }
#line 3526 "libs.lp.c"
    return libs__lp__succeeded;
#line 3528 "libs.lp.c"
  }
#line 3530 "libs.lp.c"
}

#line 3533 "libs.lp.c"
static void MR_CALL 
libs__lp____Compare____direction_0_0_10001(
#line 3536 "libs.lp.c"
  MR_Box * libs__lp__wrapper_arg_1,
#line 3538 "libs.lp.c"
  MR_Box libs__lp__wrapper_arg_2,
#line 3540 "libs.lp.c"
  MR_Box libs__lp__wrapper_arg_3)
#line 3542 "libs.lp.c"
{
#line 3544 "libs.lp.c"
  {
#line 3546 "libs.lp.c"
    MR_Word libs__lp__conv0_HeadVar__1_1;

#line 3549 "libs.lp.c"
    {
#line 3551 "libs.lp.c"
      libs__lp____Compare____direction_0_0(&libs__lp__conv0_HeadVar__1_1, ((MR_Word) libs__lp__wrapper_arg_2), ((MR_Word) libs__lp__wrapper_arg_3));
    }
#line 3554 "libs.lp.c"
    *libs__lp__wrapper_arg_1 = ((MR_Box) (libs__lp__conv0_HeadVar__1_1));
#line 3556 "libs.lp.c"
  }
#line 3558 "libs.lp.c"
}

#line 3561 "libs.lp.c"
static MR_bool MR_CALL 
libs__lp____Unify____equation_0_0_10001(
#line 3564 "libs.lp.c"
  MR_Box libs__lp__wrapper_arg_1,
#line 3566 "libs.lp.c"
  MR_Box libs__lp__wrapper_arg_2)
#line 3568 "libs.lp.c"
{
#line 3570 "libs.lp.c"
  {
#line 3572 "libs.lp.c"
    MR_bool libs__lp__succeeded;

#line 3575 "libs.lp.c"
    {
#line 3577 "libs.lp.c"
      libs__lp__succeeded = libs__lp____Unify____equation_0_0(((MR_Word) libs__lp__wrapper_arg_1), ((MR_Word) libs__lp__wrapper_arg_2));
    }
#line 3580 "libs.lp.c"
    return libs__lp__succeeded;
#line 3582 "libs.lp.c"
  }
#line 3584 "libs.lp.c"
}

#line 3587 "libs.lp.c"
static void MR_CALL 
libs__lp____Compare____equation_0_0_10001(
#line 3590 "libs.lp.c"
  MR_Box * libs__lp__wrapper_arg_1,
#line 3592 "libs.lp.c"
  MR_Box libs__lp__wrapper_arg_2,
#line 3594 "libs.lp.c"
  MR_Box libs__lp__wrapper_arg_3)
#line 3596 "libs.lp.c"
{
#line 3598 "libs.lp.c"
  {
#line 3600 "libs.lp.c"
    MR_Word libs__lp__conv0_HeadVar__1_1;

#line 3603 "libs.lp.c"
    {
#line 3605 "libs.lp.c"
      libs__lp____Compare____equation_0_0(&libs__lp__conv0_HeadVar__1_1, ((MR_Word) libs__lp__wrapper_arg_2), ((MR_Word) libs__lp__wrapper_arg_3));
    }
#line 3608 "libs.lp.c"
    *libs__lp__wrapper_arg_1 = ((MR_Box) (libs__lp__conv0_HeadVar__1_1));
#line 3610 "libs.lp.c"
  }
#line 3612 "libs.lp.c"
}

#line 3615 "libs.lp.c"
static MR_bool MR_CALL 
libs__lp____Unify____equations_0_0_10001(
#line 3618 "libs.lp.c"
  MR_Box libs__lp__wrapper_arg_1,
#line 3620 "libs.lp.c"
  MR_Box libs__lp__wrapper_arg_2)
#line 3622 "libs.lp.c"
{
#line 3624 "libs.lp.c"
  {
#line 3626 "libs.lp.c"
    MR_bool libs__lp__succeeded;

#line 3629 "libs.lp.c"
    {
#line 3631 "libs.lp.c"
      libs__lp__succeeded = libs__lp____Unify____equations_0_0(((MR_Word) libs__lp__wrapper_arg_1), ((MR_Word) libs__lp__wrapper_arg_2));
    }
#line 3634 "libs.lp.c"
    return libs__lp__succeeded;
#line 3636 "libs.lp.c"
  }
#line 3638 "libs.lp.c"
}

#line 3641 "libs.lp.c"
static void MR_CALL 
libs__lp____Compare____equations_0_0_10001(
#line 3644 "libs.lp.c"
  MR_Box * libs__lp__wrapper_arg_1,
#line 3646 "libs.lp.c"
  MR_Box libs__lp__wrapper_arg_2,
#line 3648 "libs.lp.c"
  MR_Box libs__lp__wrapper_arg_3)
#line 3650 "libs.lp.c"
{
#line 3652 "libs.lp.c"
  {
#line 3654 "libs.lp.c"
    MR_Word libs__lp__conv0_HeadVar__1_1;

#line 3657 "libs.lp.c"
    {
#line 3659 "libs.lp.c"
      libs__lp____Compare____equations_0_0(&libs__lp__conv0_HeadVar__1_1, ((MR_Word) libs__lp__wrapper_arg_2), ((MR_Word) libs__lp__wrapper_arg_3));
    }
#line 3662 "libs.lp.c"
    *libs__lp__wrapper_arg_1 = ((MR_Box) (libs__lp__conv0_HeadVar__1_1));
#line 3664 "libs.lp.c"
  }
#line 3666 "libs.lp.c"
}

#line 3669 "libs.lp.c"
static MR_bool MR_CALL 
libs__lp____Unify____lp_info_0_0_10001(
#line 3672 "libs.lp.c"
  MR_Box libs__lp__wrapper_arg_1,
#line 3674 "libs.lp.c"
  MR_Box libs__lp__wrapper_arg_2)
#line 3676 "libs.lp.c"
{
#line 3678 "libs.lp.c"
  {
#line 3680 "libs.lp.c"
    MR_bool libs__lp__succeeded;

#line 3683 "libs.lp.c"
    {
#line 3685 "libs.lp.c"
      libs__lp__succeeded = libs__lp____Unify____lp_info_0_0(((MR_Word) libs__lp__wrapper_arg_1), ((MR_Word) libs__lp__wrapper_arg_2));
    }
#line 3688 "libs.lp.c"
    return libs__lp__succeeded;
#line 3690 "libs.lp.c"
  }
#line 3692 "libs.lp.c"
}

#line 3695 "libs.lp.c"
static void MR_CALL 
libs__lp____Compare____lp_info_0_0_10001(
#line 3698 "libs.lp.c"
  MR_Box * libs__lp__wrapper_arg_1,
#line 3700 "libs.lp.c"
  MR_Box libs__lp__wrapper_arg_2,
#line 3702 "libs.lp.c"
  MR_Box libs__lp__wrapper_arg_3)
#line 3704 "libs.lp.c"
{
#line 3706 "libs.lp.c"
  {
#line 3708 "libs.lp.c"
    MR_Word libs__lp__conv0_HeadVar__1_1;

#line 3711 "libs.lp.c"
    {
#line 3713 "libs.lp.c"
      libs__lp____Compare____lp_info_0_0(&libs__lp__conv0_HeadVar__1_1, ((MR_Word) libs__lp__wrapper_arg_2), ((MR_Word) libs__lp__wrapper_arg_3));
    }
#line 3716 "libs.lp.c"
    *libs__lp__wrapper_arg_1 = ((MR_Box) (libs__lp__conv0_HeadVar__1_1));
#line 3718 "libs.lp.c"
  }
#line 3720 "libs.lp.c"
}

#line 3723 "libs.lp.c"
static MR_bool MR_CALL 
libs__lp____Unify____objective_0_0_10001(
#line 3726 "libs.lp.c"
  MR_Box libs__lp__wrapper_arg_1,
#line 3728 "libs.lp.c"
  MR_Box libs__lp__wrapper_arg_2)
#line 3730 "libs.lp.c"
{
#line 3732 "libs.lp.c"
  {
#line 3734 "libs.lp.c"
    MR_bool libs__lp__succeeded;

#line 3737 "libs.lp.c"
    {
#line 3739 "libs.lp.c"
      libs__lp__succeeded = libs__lp____Unify____objective_0_0(((MR_Word) libs__lp__wrapper_arg_1), ((MR_Word) libs__lp__wrapper_arg_2));
    }
#line 3742 "libs.lp.c"
    return libs__lp__succeeded;
#line 3744 "libs.lp.c"
  }
#line 3746 "libs.lp.c"
}

#line 3749 "libs.lp.c"
static void MR_CALL 
libs__lp____Compare____objective_0_0_10001(
#line 3752 "libs.lp.c"
  MR_Box * libs__lp__wrapper_arg_1,
#line 3754 "libs.lp.c"
  MR_Box libs__lp__wrapper_arg_2,
#line 3756 "libs.lp.c"
  MR_Box libs__lp__wrapper_arg_3)
#line 3758 "libs.lp.c"
{
#line 3760 "libs.lp.c"
  {
#line 3762 "libs.lp.c"
    MR_Word libs__lp__conv0_HeadVar__1_1;

#line 3765 "libs.lp.c"
    {
#line 3767 "libs.lp.c"
      libs__lp____Compare____objective_0_0(&libs__lp__conv0_HeadVar__1_1, ((MR_Word) libs__lp__wrapper_arg_2), ((MR_Word) libs__lp__wrapper_arg_3));
    }
#line 3770 "libs.lp.c"
    *libs__lp__wrapper_arg_1 = ((MR_Box) (libs__lp__conv0_HeadVar__1_1));
#line 3772 "libs.lp.c"
  }
#line 3774 "libs.lp.c"
}

#line 3777 "libs.lp.c"
static MR_bool MR_CALL 
libs__lp____Unify____operator_0_0_10001(
#line 3780 "libs.lp.c"
  MR_Box libs__lp__wrapper_arg_1,
#line 3782 "libs.lp.c"
  MR_Box libs__lp__wrapper_arg_2)
#line 3784 "libs.lp.c"
{
#line 3786 "libs.lp.c"
  {
#line 3788 "libs.lp.c"
    MR_bool libs__lp__succeeded;

#line 3791 "libs.lp.c"
    {
#line 3793 "libs.lp.c"
      libs__lp__succeeded = libs__lp____Unify____operator_0_0(((MR_Word) libs__lp__wrapper_arg_1), ((MR_Word) libs__lp__wrapper_arg_2));
    }
#line 3796 "libs.lp.c"
    return libs__lp__succeeded;
#line 3798 "libs.lp.c"
  }
#line 3800 "libs.lp.c"
}

#line 3803 "libs.lp.c"
static void MR_CALL 
libs__lp____Compare____operator_0_0_10001(
#line 3806 "libs.lp.c"
  MR_Box * libs__lp__wrapper_arg_1,
#line 3808 "libs.lp.c"
  MR_Box libs__lp__wrapper_arg_2,
#line 3810 "libs.lp.c"
  MR_Box libs__lp__wrapper_arg_3)
#line 3812 "libs.lp.c"
{
#line 3814 "libs.lp.c"
  {
#line 3816 "libs.lp.c"
    MR_Word libs__lp__conv0_HeadVar__1_1;

#line 3819 "libs.lp.c"
    {
#line 3821 "libs.lp.c"
      libs__lp____Compare____operator_0_0(&libs__lp__conv0_HeadVar__1_1, ((MR_Word) libs__lp__wrapper_arg_2), ((MR_Word) libs__lp__wrapper_arg_3));
    }
#line 3824 "libs.lp.c"
    *libs__lp__wrapper_arg_1 = ((MR_Box) (libs__lp__conv0_HeadVar__1_1));
#line 3826 "libs.lp.c"
  }
#line 3828 "libs.lp.c"
}

#line 3831 "libs.lp.c"
static MR_bool MR_CALL 
libs__lp____Unify____result_0_0_10001(
#line 3834 "libs.lp.c"
  MR_Box libs__lp__wrapper_arg_1,
#line 3836 "libs.lp.c"
  MR_Box libs__lp__wrapper_arg_2)
#line 3838 "libs.lp.c"
{
#line 3840 "libs.lp.c"
  {
#line 3842 "libs.lp.c"
    MR_bool libs__lp__succeeded;

#line 3845 "libs.lp.c"
    {
#line 3847 "libs.lp.c"
      libs__lp__succeeded = libs__lp____Unify____result_0_0(((MR_Word) libs__lp__wrapper_arg_1), ((MR_Word) libs__lp__wrapper_arg_2));
    }
#line 3850 "libs.lp.c"
    return libs__lp__succeeded;
#line 3852 "libs.lp.c"
  }
#line 3854 "libs.lp.c"
}

#line 3857 "libs.lp.c"
static void MR_CALL 
libs__lp____Compare____result_0_0_10001(
#line 3860 "libs.lp.c"
  MR_Box * libs__lp__wrapper_arg_1,
#line 3862 "libs.lp.c"
  MR_Box libs__lp__wrapper_arg_2,
#line 3864 "libs.lp.c"
  MR_Box libs__lp__wrapper_arg_3)
#line 3866 "libs.lp.c"
{
#line 3868 "libs.lp.c"
  {
#line 3870 "libs.lp.c"
    MR_Word libs__lp__conv0_HeadVar__1_1;

#line 3873 "libs.lp.c"
    {
#line 3875 "libs.lp.c"
      libs__lp____Compare____result_0_0(&libs__lp__conv0_HeadVar__1_1, ((MR_Word) libs__lp__wrapper_arg_2), ((MR_Word) libs__lp__wrapper_arg_3));
    }
#line 3878 "libs.lp.c"
    *libs__lp__wrapper_arg_1 = ((MR_Box) (libs__lp__conv0_HeadVar__1_1));
#line 3880 "libs.lp.c"
  }
#line 3882 "libs.lp.c"
}

#line 3885 "libs.lp.c"
static MR_bool MR_CALL 
libs__lp____Unify____tableau_0_0_10001(
#line 3888 "libs.lp.c"
  MR_Box libs__lp__wrapper_arg_1,
#line 3890 "libs.lp.c"
  MR_Box libs__lp__wrapper_arg_2)
#line 3892 "libs.lp.c"
{
#line 3894 "libs.lp.c"
  {
#line 3896 "libs.lp.c"
    MR_bool libs__lp__succeeded;

#line 3899 "libs.lp.c"
    {
#line 3901 "libs.lp.c"
      libs__lp__succeeded = libs__lp____Unify____tableau_0_0(((MR_Word) libs__lp__wrapper_arg_1), ((MR_Word) libs__lp__wrapper_arg_2));
    }
#line 3904 "libs.lp.c"
    return libs__lp__succeeded;
#line 3906 "libs.lp.c"
  }
#line 3908 "libs.lp.c"
}

#line 3911 "libs.lp.c"
static void MR_CALL 
libs__lp____Compare____tableau_0_0_10001(
#line 3914 "libs.lp.c"
  MR_Box * libs__lp__wrapper_arg_1,
#line 3916 "libs.lp.c"
  MR_Box libs__lp__wrapper_arg_2,
#line 3918 "libs.lp.c"
  MR_Box libs__lp__wrapper_arg_3)
#line 3920 "libs.lp.c"
{
#line 3922 "libs.lp.c"
  {
#line 3924 "libs.lp.c"
    MR_Word libs__lp__conv0_HeadVar__1_1;

#line 3927 "libs.lp.c"
    {
#line 3929 "libs.lp.c"
      libs__lp____Compare____tableau_0_0(&libs__lp__conv0_HeadVar__1_1, ((MR_Word) libs__lp__wrapper_arg_2), ((MR_Word) libs__lp__wrapper_arg_3));
    }
#line 3932 "libs.lp.c"
    *libs__lp__wrapper_arg_1 = ((MR_Box) (libs__lp__conv0_HeadVar__1_1));
#line 3934 "libs.lp.c"
  }
#line 3936 "libs.lp.c"
}

#line 822 "lp.m"
static void MR_CALL 
libs__lp__IntroducedFrom__pred__lp_info_init__822__1_3_p_0(
#line 822 "lp.m"
  MR_Word libs__lp__HeadVar__1_21,
#line 822 "lp.m"
  MR_Word libs__lp__HeadVar__2_22,
#line 822 "lp.m"
  MR_Word * libs__lp__HeadVar__3_23)
#line 822 "lp.m"
{
#line 822 "lp.m"
  {
#line 822 "lp.m"
    MR_bool libs__lp__succeeded;
#line 822 "lp.m"
    MR_Word libs__lp__TypeCtorInfo_32_32 = (MR_Word) &mercury__term__term__type_ctor_info_generic_0;
#line 822 "lp.m"
    MR_Word libs__lp__VS0_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), libs__lp__HeadVar__2_22, (MR_Integer) 0)));
#line 822 "lp.m"
    MR_Word libs__lp__VM0_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), libs__lp__HeadVar__2_22, (MR_Integer) 1)));
#line 822 "lp.m"
    MR_Word libs__lp__V1_13;
#line 822 "lp.m"
    MR_Word libs__lp__VS1_14;
#line 822 "lp.m"
    MR_Word libs__lp__V2_15;
#line 822 "lp.m"
    MR_Word libs__lp__VS_16;
#line 822 "lp.m"
    MR_Word libs__lp__VM_17;
#line 822 "lp.m"
    MR_Word libs__lp__V_24_24;

#line 824 "lp.m"
    {
#line 824 "lp.m"
      mercury__varset__new_var_3_p_0(libs__lp__TypeCtorInfo_32_32, &libs__lp__V1_13, libs__lp__VS0_11, &libs__lp__VS1_14);
    }
#line 825 "lp.m"
    {
#line 825 "lp.m"
      mercury__varset__new_var_3_p_0(libs__lp__TypeCtorInfo_32_32, &libs__lp__V2_15, libs__lp__VS1_14, &libs__lp__VS_16);
    }
#line 826 "lp.m"
    {
#line 826 "lp.m"
      libs__lp__V_24_24 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 826 "lp.m"
      MR_hl_field(MR_mktag(0), libs__lp__V_24_24, 0) = ((MR_Box) (libs__lp__V1_13));
#line 826 "lp.m"
      MR_hl_field(MR_mktag(0), libs__lp__V_24_24, 1) = ((MR_Box) (libs__lp__V2_15));
#line 826 "lp.m"
    }
#line 826 "lp.m"
    {
#line 826 "lp.m"
      mercury__map__set_4_p_0((MR_Word) &libs__lp_scalar_common_1[0], (MR_Word) &libs__lp_scalar_common_2[2], ((MR_Box) (libs__lp__HeadVar__1_21)), ((MR_Box) (libs__lp__V_24_24)), libs__lp__VM0_12, &libs__lp__VM_17);
    }
#line 827 "lp.m"
    {
#line 827 "lp.m"
      MR_Word base;
#line 827 "lp.m"
      base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 827 "lp.m"
      *libs__lp__HeadVar__3_23 = base;
#line 827 "lp.m"
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (libs__lp__VS_16));
#line 827 "lp.m"
      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (libs__lp__VM_17));
#line 827 "lp.m"
    }
#line 822 "lp.m"
  }
#line 822 "lp.m"
}

#line 811 "lp.m"
static void MR_CALL 
libs__lp__IntroducedFrom__pred__get_basis_vars__810__1_3_p_0_2(
#line 811 "lp.m"
  void * libs__lp__env_ptr_arg)
#line 811 "lp.m"
{
#line 811 "lp.m"
  {
#line 811 "lp.m"
    struct libs__lp__IntroducedFrom__pred__get_basis_vars__810__1_3_p_0_env_0_s * libs__lp__env_ptr = (struct libs__lp__IntroducedFrom__pred__get_basis_vars__810__1_3_p_0_env_0_s *) libs__lp__env_ptr_arg;

#line 811 "lp.m"
    (libs__lp__env_ptr)->libs__lp__IntroducedFrom__pred__get_basis_vars__810__1_3_p_0_env_0__Col_16 = ((MR_Integer) (libs__lp__env_ptr)->libs__lp__IntroducedFrom__pred__get_basis_vars__810__1_3_p_0_env_0__conv0_Col_16);
#line 811 "lp.m"
    {
#line 811 "lp.m"
      libs__lp__IntroducedFrom__pred__get_basis_vars__810__1_3_p_0_1(libs__lp__env_ptr);
#line 811 "lp.m"
      return;
    }
#line 811 "lp.m"
  }
#line 811 "lp.m"
}

#line 813 "lp.m"
static void MR_CALL 
libs__lp__IntroducedFrom__pred__get_basis_vars__810__1_3_p_0_4(
#line 813 "lp.m"
  void * libs__lp__env_ptr_arg)
#line 813 "lp.m"
{
#line 813 "lp.m"
  {
#line 813 "lp.m"
    struct libs__lp__IntroducedFrom__pred__get_basis_vars__810__1_3_p_0_env_0_s * libs__lp__env_ptr = (struct libs__lp__IntroducedFrom__pred__get_basis_vars__810__1_3_p_0_env_0_s *) libs__lp__env_ptr_arg;

#line 813 "lp.m"
    *((libs__lp__env_ptr)->libs__lp__IntroducedFrom__pred__get_basis_vars__810__1_3_p_0_env_0__HeadVar__3_29) = ((MR_Word) (libs__lp__env_ptr)->libs__lp__IntroducedFrom__pred__get_basis_vars__810__1_3_p_0_env_0__conv2_HeadVar__3_29);
#line 813 "lp.m"
    (libs__lp__env_ptr)->libs__lp__IntroducedFrom__pred__get_basis_vars__810__1_3_p_0_env_0__V_38_38 = ((MR_Integer) (libs__lp__env_ptr)->libs__lp__IntroducedFrom__pred__get_basis_vars__810__1_3_p_0_env_0__conv1_V_38_38);
#line 813 "lp.m"
    {
#line 813 "lp.m"
      libs__lp__IntroducedFrom__pred__get_basis_vars__810__1_3_p_0_3(libs__lp__env_ptr);
#line 813 "lp.m"
      return;
    }
#line 813 "lp.m"
  }
#line 813 "lp.m"
}

#line 810 "lp.m"
static void MR_CALL 
libs__lp__IntroducedFrom__pred__get_basis_vars__810__1_3_p_0_3(
#line 810 "lp.m"
  void * libs__lp__env_ptr_arg)
#line 810 "lp.m"
{
#line 810 "lp.m"
  {
#line 810 "lp.m"
    struct libs__lp__IntroducedFrom__pred__get_basis_vars__810__1_3_p_0_env_0_s * libs__lp__env_ptr = (struct libs__lp__IntroducedFrom__pred__get_basis_vars__810__1_3_p_0_env_0_s *) libs__lp__env_ptr_arg;

#line 813 "lp.m"
    (libs__lp__env_ptr)->libs__lp__IntroducedFrom__pred__get_basis_vars__810__1_3_p_0_env_0__succeeded = ((libs__lp__env_ptr)->libs__lp__IntroducedFrom__pred__get_basis_vars__810__1_3_p_0_env_0__Col_16 == (libs__lp__env_ptr)->libs__lp__IntroducedFrom__pred__get_basis_vars__810__1_3_p_0_env_0__V_38_38);
#line 813 "lp.m"
    if ((libs__lp__env_ptr)->libs__lp__IntroducedFrom__pred__get_basis_vars__810__1_3_p_0_env_0__succeeded)
#line 813 "lp.m"
      {
#line 813 "lp.m"
        ((libs__lp__env_ptr)->libs__lp__IntroducedFrom__pred__get_basis_vars__810__1_3_p_0_env_0__cont)((libs__lp__env_ptr)->libs__lp__IntroducedFrom__pred__get_basis_vars__810__1_3_p_0_env_0__cont_env_ptr);
#line 813 "lp.m"
        return;
      }
#line 810 "lp.m"
  }
#line 810 "lp.m"
}

#line 810 "lp.m"
static void MR_CALL 
libs__lp__IntroducedFrom__pred__get_basis_vars__810__1_3_p_0_1(
#line 810 "lp.m"
  void * libs__lp__env_ptr_arg)
#line 810 "lp.m"
{
#line 810 "lp.m"
  {
#line 810 "lp.m"
    struct libs__lp__IntroducedFrom__pred__get_basis_vars__810__1_3_p_0_env_0_s * libs__lp__env_ptr = (struct libs__lp__IntroducedFrom__pred__get_basis_vars__810__1_3_p_0_env_0_s *) libs__lp__env_ptr_arg;

#line 810 "lp.m"
    {
#line 812 "lp.m"
      MR_Integer libs__lp__V_17_17 = ((MR_Integer) (MR_hl_field(MR_mktag(0), (libs__lp__env_ptr)->libs__lp__IntroducedFrom__pred__get_basis_vars__810__1_3_p_0_env_0__Tab_3, (MR_Integer) 0)));
#line 812 "lp.m"
      MR_Integer libs__lp__V_18_18 = ((MR_Integer) (MR_hl_field(MR_mktag(0), (libs__lp__env_ptr)->libs__lp__IntroducedFrom__pred__get_basis_vars__810__1_3_p_0_env_0__Tab_3, (MR_Integer) 1)));
#line 812 "lp.m"
      MR_Word libs__lp__V_20_20;
#line 812 "lp.m"
      MR_Word libs__lp__V_21_21;
#line 812 "lp.m"
      MR_Word libs__lp__V_22_22;
#line 812 "lp.m"
      MR_Word libs__lp__V_23_23;

#line 812 "lp.m"
      (libs__lp__env_ptr)->libs__lp__IntroducedFrom__pred__get_basis_vars__810__1_3_p_0_env_0__VarCols_19 = ((MR_Word) (MR_hl_field(MR_mktag(0), (libs__lp__env_ptr)->libs__lp__IntroducedFrom__pred__get_basis_vars__810__1_3_p_0_env_0__Tab_3, (MR_Integer) 2)));
#line 812 "lp.m"
      libs__lp__V_20_20 = ((MR_Word) (MR_hl_field(MR_mktag(0), (libs__lp__env_ptr)->libs__lp__IntroducedFrom__pred__get_basis_vars__810__1_3_p_0_env_0__Tab_3, (MR_Integer) 3)));
#line 812 "lp.m"
      libs__lp__V_21_21 = ((MR_Word) (MR_hl_field(MR_mktag(0), (libs__lp__env_ptr)->libs__lp__IntroducedFrom__pred__get_basis_vars__810__1_3_p_0_env_0__Tab_3, (MR_Integer) 4)));
#line 812 "lp.m"
      libs__lp__V_22_22 = ((MR_Word) (MR_hl_field(MR_mktag(0), (libs__lp__env_ptr)->libs__lp__IntroducedFrom__pred__get_basis_vars__810__1_3_p_0_env_0__Tab_3, (MR_Integer) 5)));
#line 812 "lp.m"
      libs__lp__V_23_23 = ((MR_Word) (MR_hl_field(MR_mktag(0), (libs__lp__env_ptr)->libs__lp__IntroducedFrom__pred__get_basis_vars__810__1_3_p_0_env_0__Tab_3, (MR_Integer) 6)));
#line 4136 "libs.lp.c"
      (libs__lp__env_ptr)->libs__lp__IntroducedFrom__pred__get_basis_vars__810__1_3_p_0_env_0__TypeInfo_36_36 = (MR_Word) &libs__lp_scalar_common_1[0];
#line 813 "lp.m"
      {
#line 813 "lp.m"
        mercury__map__member_3_p_0((libs__lp__env_ptr)->libs__lp__IntroducedFrom__pred__get_basis_vars__810__1_3_p_0_env_0__TypeInfo_36_36, (libs__lp__env_ptr)->libs__lp__IntroducedFrom__pred__get_basis_vars__810__1_3_p_0_env_0__TypeCtorInfo_35_35, (libs__lp__env_ptr)->libs__lp__IntroducedFrom__pred__get_basis_vars__810__1_3_p_0_env_0__VarCols_19, &(libs__lp__env_ptr)->libs__lp__IntroducedFrom__pred__get_basis_vars__810__1_3_p_0_env_0__conv2_HeadVar__3_29, &(libs__lp__env_ptr)->libs__lp__IntroducedFrom__pred__get_basis_vars__810__1_3_p_0_env_0__conv1_V_38_38, libs__lp__IntroducedFrom__pred__get_basis_vars__810__1_3_p_0_4, libs__lp__env_ptr);
      }
#line 810 "lp.m"
    }
#line 810 "lp.m"
  }
#line 810 "lp.m"
}

#line 810 "lp.m"
static void MR_CALL 
libs__lp__IntroducedFrom__pred__get_basis_vars__810__1_3_p_0(
#line 810 "lp.m"
  MR_Word libs__lp__Tab_3,
#line 810 "lp.m"
  MR_Word libs__lp__Cols_13,
#line 810 "lp.m"
  MR_Word * libs__lp__HeadVar__3_29,
#line 810 "lp.m"
  MR_Cont libs__lp__cont,
#line 810 "lp.m"
  void * libs__lp__cont_env_ptr)
#line 810 "lp.m"
{
#line 810 "lp.m"
  {
#line 810 "lp.m"
    struct libs__lp__IntroducedFrom__pred__get_basis_vars__810__1_3_p_0_env_0_s libs__lp__env;

#line 810 "lp.m"
    (libs__lp__env).libs__lp__IntroducedFrom__pred__get_basis_vars__810__1_3_p_0_env_0__Tab_3 = libs__lp__Tab_3;
#line 810 "lp.m"
    (libs__lp__env).libs__lp__IntroducedFrom__pred__get_basis_vars__810__1_3_p_0_env_0__HeadVar__3_29 = libs__lp__HeadVar__3_29;
#line 810 "lp.m"
    (libs__lp__env).libs__lp__IntroducedFrom__pred__get_basis_vars__810__1_3_p_0_env_0__cont = libs__lp__cont;
#line 810 "lp.m"
    (libs__lp__env).libs__lp__IntroducedFrom__pred__get_basis_vars__810__1_3_p_0_env_0__cont_env_ptr = libs__lp__cont_env_ptr;
#line 4178 "libs.lp.c"
    (libs__lp__env).libs__lp__IntroducedFrom__pred__get_basis_vars__810__1_3_p_0_env_0__TypeCtorInfo_35_35 = (MR_Word) &mercury__builtin__builtin__type_ctor_info_int_0;
#line 811 "lp.m"
    {
#line 811 "lp.m"
      mercury__list__member_2_p_1((libs__lp__env).libs__lp__IntroducedFrom__pred__get_basis_vars__810__1_3_p_0_env_0__TypeCtorInfo_35_35, &(libs__lp__env).libs__lp__IntroducedFrom__pred__get_basis_vars__810__1_3_p_0_env_0__conv0_Col_16, libs__lp__Cols_13, libs__lp__IntroducedFrom__pred__get_basis_vars__810__1_3_p_0_2, &libs__lp__env);
    }
#line 810 "lp.m"
  }
#line 810 "lp.m"
}

#line 800 "lp.m"
static void MR_CALL 
libs__lp__IntroducedFrom__pred__get_basis_vars__798__1_2_p_0_2(
#line 800 "lp.m"
  void * libs__lp__env_ptr_arg)
#line 800 "lp.m"
{
#line 800 "lp.m"
  {
#line 800 "lp.m"
    struct libs__lp__IntroducedFrom__pred__get_basis_vars__798__1_2_p_0_3_env_0_s * libs__lp__env_ptr = (struct libs__lp__IntroducedFrom__pred__get_basis_vars__798__1_2_p_0_3_env_0_s *) libs__lp__env_ptr_arg;

#line 800 "lp.m"
    *((libs__lp__env_ptr)->libs__lp__IntroducedFrom__pred__get_basis_vars__798__1_2_p_0_3_env_0__wrapper_arg_1) = ((MR_Box) ((libs__lp__env_ptr)->libs__lp__IntroducedFrom__pred__get_basis_vars__798__1_2_p_0_3_env_0__conv0_HeadVar__3_25));
#line 800 "lp.m"
    {
#line 800 "lp.m"
      ((libs__lp__env_ptr)->libs__lp__IntroducedFrom__pred__get_basis_vars__798__1_2_p_0_3_env_0__cont)((libs__lp__env_ptr)->libs__lp__IntroducedFrom__pred__get_basis_vars__798__1_2_p_0_3_env_0__cont_env_ptr);
#line 800 "lp.m"
      return;
    }
#line 800 "lp.m"
  }
#line 800 "lp.m"
}

#line 800 "lp.m"
static void MR_CALL 
libs__lp__IntroducedFrom__pred__get_basis_vars__798__1_2_p_0_3(
#line 800 "lp.m"
  MR_Box libs__lp__closure_arg,
#line 800 "lp.m"
  MR_Box * libs__lp__wrapper_arg_1,
#line 800 "lp.m"
  MR_Cont libs__lp__cont,
#line 800 "lp.m"
  void * libs__lp__cont_env_ptr)
#line 800 "lp.m"
{
#line 800 "lp.m"
  {
#line 800 "lp.m"
    struct libs__lp__IntroducedFrom__pred__get_basis_vars__798__1_2_p_0_3_env_0_s libs__lp__env;

#line 800 "lp.m"
    (libs__lp__env).libs__lp__IntroducedFrom__pred__get_basis_vars__798__1_2_p_0_3_env_0__wrapper_arg_1 = libs__lp__wrapper_arg_1;
#line 800 "lp.m"
    (libs__lp__env).libs__lp__IntroducedFrom__pred__get_basis_vars__798__1_2_p_0_3_env_0__cont = libs__lp__cont;
#line 800 "lp.m"
    (libs__lp__env).libs__lp__IntroducedFrom__pred__get_basis_vars__798__1_2_p_0_3_env_0__cont_env_ptr = libs__lp__cont_env_ptr;
#line 800 "lp.m"
    {
#line 800 "lp.m"
      MR_Box libs__lp__closure = libs__lp__closure_arg;

#line 800 "lp.m"
      {
#line 800 "lp.m"
        libs__lp__IntroducedFrom__pred__get_basis_vars__800__1_3_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), libs__lp__closure, (MR_Integer) 3))), ((MR_Integer) (MR_hl_field(MR_mktag(0), libs__lp__closure, (MR_Integer) 4))), &(libs__lp__env).libs__lp__IntroducedFrom__pred__get_basis_vars__798__1_2_p_0_3_env_0__conv0_HeadVar__3_25, libs__lp__IntroducedFrom__pred__get_basis_vars__798__1_2_p_0_2, &libs__lp__env);
      }
#line 800 "lp.m"
    }
#line 800 "lp.m"
  }
#line 800 "lp.m"
}

#line 798 "lp.m"
static void MR_CALL 
libs__lp__IntroducedFrom__pred__get_basis_vars__798__1_2_p_0_1(
#line 798 "lp.m"
  void * libs__lp__env_ptr_arg)
#line 798 "lp.m"
{
#line 798 "lp.m"
  {
#line 798 "lp.m"
    struct libs__lp__IntroducedFrom__pred__get_basis_vars__798__1_2_p_0_env_0_s * libs__lp__env_ptr = (struct libs__lp__IntroducedFrom__pred__get_basis_vars__798__1_2_p_0_env_0_s *) libs__lp__env_ptr_arg;

#line 798 "lp.m"
    {
#line 807 "lp.m"
      MR_Integer libs__lp__V_12_12;

#line 4274 "libs.lp.c"
      (libs__lp__env_ptr)->libs__lp__IntroducedFrom__pred__get_basis_vars__798__1_2_p_0_env_0__TypeInfo_33_33 = (MR_Word) &libs__lp_scalar_common_2[3];
#line 800 "lp.m"
      {
#line 800 "lp.m"
        MR_Word base;
#line 800 "lp.m"
        base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
#line 800 "lp.m"
        (libs__lp__env_ptr)->libs__lp__IntroducedFrom__pred__get_basis_vars__798__1_2_p_0_env_0__NonZeroGoal_7 = base;
#line 800 "lp.m"
        MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (&libs__lp_scalar_common_3[5]));
#line 800 "lp.m"
        MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (libs__lp__IntroducedFrom__pred__get_basis_vars__798__1_2_p_0_3));
#line 800 "lp.m"
        MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
#line 800 "lp.m"
        MR_hl_field(MR_mktag(0), base, 3) = ((MR_Box) ((libs__lp__env_ptr)->libs__lp__IntroducedFrom__pred__get_basis_vars__798__1_2_p_0_env_0__Tab_3));
#line 800 "lp.m"
        MR_hl_field(MR_mktag(0), base, 4) = ((MR_Box) (*((libs__lp__env_ptr)->libs__lp__IntroducedFrom__pred__get_basis_vars__798__1_2_p_0_env_0__HeadVar__2_24)));
#line 800 "lp.m"
      }
#line 806 "lp.m"
      {
#line 806 "lp.m"
        mercury__solutions__solutions_2_p_1((libs__lp__env_ptr)->libs__lp__IntroducedFrom__pred__get_basis_vars__798__1_2_p_0_env_0__TypeInfo_33_33, (libs__lp__env_ptr)->libs__lp__IntroducedFrom__pred__get_basis_vars__798__1_2_p_0_env_0__NonZeroGoal_7, &(libs__lp__env_ptr)->libs__lp__IntroducedFrom__pred__get_basis_vars__798__1_2_p_0_env_0__Solns_11);
      }
#line 807 "lp.m"
      (libs__lp__env_ptr)->libs__lp__IntroducedFrom__pred__get_basis_vars__798__1_2_p_0_env_0__succeeded = ((MR_tag((MR_Word) (libs__lp__env_ptr)->libs__lp__IntroducedFrom__pred__get_basis_vars__798__1_2_p_0_env_0__Solns_11)) == (MR_mktag((MR_Integer) 1)));
#line 807 "lp.m"
      if ((libs__lp__env_ptr)->libs__lp__IntroducedFrom__pred__get_basis_vars__798__1_2_p_0_env_0__succeeded)
#line 807 "lp.m"
        {
#line 807 "lp.m"
          {
#line 807 "lp.m"
            (libs__lp__env_ptr)->libs__lp__IntroducedFrom__pred__get_basis_vars__798__1_2_p_0_env_0__V_26_26 = ((MR_Word) (MR_hl_field(MR_mktag(1), (libs__lp__env_ptr)->libs__lp__IntroducedFrom__pred__get_basis_vars__798__1_2_p_0_env_0__Solns_11, (MR_Integer) 0)));
#line 807 "lp.m"
            (libs__lp__env_ptr)->libs__lp__IntroducedFrom__pred__get_basis_vars__798__1_2_p_0_env_0__V_28_28 = ((MR_Word) (MR_hl_field(MR_mktag(1), (libs__lp__env_ptr)->libs__lp__IntroducedFrom__pred__get_basis_vars__798__1_2_p_0_env_0__Solns_11, (MR_Integer) 1)));
#line 807 "lp.m"
          }
#line 798 "lp.m"
          {
#line 807 "lp.m"
            (libs__lp__env_ptr)->libs__lp__IntroducedFrom__pred__get_basis_vars__798__1_2_p_0_env_0__succeeded = ((libs__lp__env_ptr)->libs__lp__IntroducedFrom__pred__get_basis_vars__798__1_2_p_0_env_0__V_28_28 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 798 "lp.m"
            if ((libs__lp__env_ptr)->libs__lp__IntroducedFrom__pred__get_basis_vars__798__1_2_p_0_env_0__succeeded)
#line 798 "lp.m"
              {
#line 807 "lp.m"
                libs__lp__V_12_12 = ((MR_Integer) (MR_hl_field(MR_mktag(0), (libs__lp__env_ptr)->libs__lp__IntroducedFrom__pred__get_basis_vars__798__1_2_p_0_env_0__V_26_26, (MR_Integer) 0)));
#line 807 "lp.m"
                (libs__lp__env_ptr)->libs__lp__IntroducedFrom__pred__get_basis_vars__798__1_2_p_0_env_0__V_27_27 = MR_unbox_float((MR_hl_field(MR_mktag(0), (libs__lp__env_ptr)->libs__lp__IntroducedFrom__pred__get_basis_vars__798__1_2_p_0_env_0__V_26_26, (MR_Integer) 1)));
#line 807 "lp.m"
                (libs__lp__env_ptr)->libs__lp__IntroducedFrom__pred__get_basis_vars__798__1_2_p_0_env_0__succeeded = (((libs__lp__env_ptr)->libs__lp__IntroducedFrom__pred__get_basis_vars__798__1_2_p_0_env_0__V_27_27) == ((MR_Float) 1.0000000000000000));
#line 807 "lp.m"
                if ((libs__lp__env_ptr)->libs__lp__IntroducedFrom__pred__get_basis_vars__798__1_2_p_0_env_0__succeeded)
#line 807 "lp.m"
                  {
#line 807 "lp.m"
                    ((libs__lp__env_ptr)->libs__lp__IntroducedFrom__pred__get_basis_vars__798__1_2_p_0_env_0__cont)((libs__lp__env_ptr)->libs__lp__IntroducedFrom__pred__get_basis_vars__798__1_2_p_0_env_0__cont_env_ptr);
#line 807 "lp.m"
                    return;
                  }
#line 798 "lp.m"
              }
#line 798 "lp.m"
          }
#line 807 "lp.m"
        }
#line 798 "lp.m"
    }
#line 798 "lp.m"
  }
#line 798 "lp.m"
}

#line 798 "lp.m"
static void MR_CALL 
libs__lp__IntroducedFrom__pred__get_basis_vars__798__1_2_p_0(
#line 798 "lp.m"
  MR_Word libs__lp__Tab_3,
#line 798 "lp.m"
  MR_Integer * libs__lp__HeadVar__2_24,
#line 798 "lp.m"
  MR_Cont libs__lp__cont,
#line 798 "lp.m"
  void * libs__lp__cont_env_ptr)
#line 798 "lp.m"
{
#line 798 "lp.m"
  {
#line 798 "lp.m"
    struct libs__lp__IntroducedFrom__pred__get_basis_vars__798__1_2_p_0_env_0_s libs__lp__env;

#line 798 "lp.m"
    (libs__lp__env).libs__lp__IntroducedFrom__pred__get_basis_vars__798__1_2_p_0_env_0__Tab_3 = libs__lp__Tab_3;
#line 798 "lp.m"
    (libs__lp__env).libs__lp__IntroducedFrom__pred__get_basis_vars__798__1_2_p_0_env_0__HeadVar__2_24 = libs__lp__HeadVar__2_24;
#line 798 "lp.m"
    (libs__lp__env).libs__lp__IntroducedFrom__pred__get_basis_vars__798__1_2_p_0_env_0__cont = libs__lp__cont;
#line 798 "lp.m"
    (libs__lp__env).libs__lp__IntroducedFrom__pred__get_basis_vars__798__1_2_p_0_env_0__cont_env_ptr = libs__lp__cont_env_ptr;
#line 799 "lp.m"
    {
#line 799 "lp.m"
      libs__lp__all_cols_2_p_0((libs__lp__env).libs__lp__IntroducedFrom__pred__get_basis_vars__798__1_2_p_0_env_0__Tab_3, (libs__lp__env).libs__lp__IntroducedFrom__pred__get_basis_vars__798__1_2_p_0_env_0__HeadVar__2_24, libs__lp__IntroducedFrom__pred__get_basis_vars__798__1_2_p_0_1, &libs__lp__env);
    }
#line 798 "lp.m"
  }
#line 798 "lp.m"
}

#line 800 "lp.m"
static void MR_CALL 
libs__lp__IntroducedFrom__pred__get_basis_vars__800__1_3_p_0_1(
#line 800 "lp.m"
  void * libs__lp__env_ptr_arg)
#line 800 "lp.m"
{
#line 800 "lp.m"
  {
#line 800 "lp.m"
    struct libs__lp__IntroducedFrom__pred__get_basis_vars__800__1_3_p_0_env_0_s * libs__lp__env_ptr = (struct libs__lp__IntroducedFrom__pred__get_basis_vars__800__1_3_p_0_env_0_s *) libs__lp__env_ptr_arg;

#line 800 "lp.m"
    {
#line 756 "lp.m"
      {
#line 756 "lp.m"
        (libs__lp__env_ptr)->libs__lp__IntroducedFrom__pred__get_basis_vars__800__1_3_p_0_env_0__succeeded = mercury__list__member_2_p_0((MR_Word) &mercury__builtin__builtin__type_ctor_info_int_0, ((MR_Box) ((libs__lp__env_ptr)->libs__lp__IntroducedFrom__pred__get_basis_vars__800__1_3_p_0_env_0__R_9)), (libs__lp__env_ptr)->libs__lp__IntroducedFrom__pred__get_basis_vars__800__1_3_p_0_env_0__SR_45);
      }
#line 756 "lp.m"
      (libs__lp__env_ptr)->libs__lp__IntroducedFrom__pred__get_basis_vars__800__1_3_p_0_env_0__succeeded = !((libs__lp__env_ptr)->libs__lp__IntroducedFrom__pred__get_basis_vars__800__1_3_p_0_env_0__succeeded);
#line 800 "lp.m"
      if ((libs__lp__env_ptr)->libs__lp__IntroducedFrom__pred__get_basis_vars__800__1_3_p_0_env_0__succeeded)
#line 800 "lp.m"
        {
#line 802 "lp.m"
          {
#line 802 "lp.m"
            libs__lp__index_4_p_0((libs__lp__env_ptr)->libs__lp__IntroducedFrom__pred__get_basis_vars__800__1_3_p_0_env_0__Tab_3, (libs__lp__env_ptr)->libs__lp__IntroducedFrom__pred__get_basis_vars__800__1_3_p_0_env_0__R_9, (libs__lp__env_ptr)->libs__lp__IntroducedFrom__pred__get_basis_vars__800__1_3_p_0_env_0__HeadVar__2_24, &(libs__lp__env_ptr)->libs__lp__IntroducedFrom__pred__get_basis_vars__800__1_3_p_0_env_0__Z_10);
          }
#line 803 "lp.m"
          (libs__lp__env_ptr)->libs__lp__IntroducedFrom__pred__get_basis_vars__800__1_3_p_0_env_0__succeeded = (((libs__lp__env_ptr)->libs__lp__IntroducedFrom__pred__get_basis_vars__800__1_3_p_0_env_0__Z_10) == ((MR_Float) 0.0000000000000000));
#line 803 "lp.m"
          (libs__lp__env_ptr)->libs__lp__IntroducedFrom__pred__get_basis_vars__800__1_3_p_0_env_0__succeeded = !((libs__lp__env_ptr)->libs__lp__IntroducedFrom__pred__get_basis_vars__800__1_3_p_0_env_0__succeeded);
#line 800 "lp.m"
          if ((libs__lp__env_ptr)->libs__lp__IntroducedFrom__pred__get_basis_vars__800__1_3_p_0_env_0__succeeded)
#line 800 "lp.m"
            {
#line 804 "lp.m"
              {
#line 804 "lp.m"
                MR_Word base;
#line 804 "lp.m"
                base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 804 "lp.m"
                *((libs__lp__env_ptr)->libs__lp__IntroducedFrom__pred__get_basis_vars__800__1_3_p_0_env_0__HeadVar__3_25) = base;
#line 804 "lp.m"
                MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) ((libs__lp__env_ptr)->libs__lp__IntroducedFrom__pred__get_basis_vars__800__1_3_p_0_env_0__R_9));
#line 804 "lp.m"
                MR_hl_field(MR_mktag(0), base, 1) = MR_box_float((libs__lp__env_ptr)->libs__lp__IntroducedFrom__pred__get_basis_vars__800__1_3_p_0_env_0__Z_10);
#line 804 "lp.m"
              }
#line 804 "lp.m"
              {
#line 804 "lp.m"
                ((libs__lp__env_ptr)->libs__lp__IntroducedFrom__pred__get_basis_vars__800__1_3_p_0_env_0__cont)((libs__lp__env_ptr)->libs__lp__IntroducedFrom__pred__get_basis_vars__800__1_3_p_0_env_0__cont_env_ptr);
#line 804 "lp.m"
                return;
              }
#line 800 "lp.m"
            }
#line 800 "lp.m"
        }
#line 800 "lp.m"
    }
#line 800 "lp.m"
  }
#line 800 "lp.m"
}

#line 800 "lp.m"
static void MR_CALL 
libs__lp__IntroducedFrom__pred__get_basis_vars__800__1_3_p_0(
#line 800 "lp.m"
  MR_Word libs__lp__Tab_3,
#line 800 "lp.m"
  MR_Integer libs__lp__HeadVar__2_24,
#line 800 "lp.m"
  MR_Word * libs__lp__HeadVar__3_25,
#line 800 "lp.m"
  MR_Cont libs__lp__cont,
#line 800 "lp.m"
  void * libs__lp__cont_env_ptr)
#line 800 "lp.m"
{
#line 800 "lp.m"
  {
#line 800 "lp.m"
    struct libs__lp__IntroducedFrom__pred__get_basis_vars__800__1_3_p_0_env_0_s libs__lp__env;

#line 800 "lp.m"
    (libs__lp__env).libs__lp__IntroducedFrom__pred__get_basis_vars__800__1_3_p_0_env_0__Tab_3 = libs__lp__Tab_3;
#line 800 "lp.m"
    (libs__lp__env).libs__lp__IntroducedFrom__pred__get_basis_vars__800__1_3_p_0_env_0__HeadVar__2_24 = libs__lp__HeadVar__2_24;
#line 800 "lp.m"
    (libs__lp__env).libs__lp__IntroducedFrom__pred__get_basis_vars__800__1_3_p_0_env_0__HeadVar__3_25 = libs__lp__HeadVar__3_25;
#line 800 "lp.m"
    (libs__lp__env).libs__lp__IntroducedFrom__pred__get_basis_vars__800__1_3_p_0_env_0__cont = libs__lp__cont;
#line 800 "lp.m"
    (libs__lp__env).libs__lp__IntroducedFrom__pred__get_basis_vars__800__1_3_p_0_env_0__cont_env_ptr = libs__lp__cont_env_ptr;
#line 800 "lp.m"
    {
#line 800 "lp.m"
      MR_Integer libs__lp__Rows_41 = ((MR_Integer) (MR_hl_field(MR_mktag(0), (libs__lp__env).libs__lp__IntroducedFrom__pred__get_basis_vars__800__1_3_p_0_env_0__Tab_3, (MR_Integer) 0)));
#line 754 "lp.m"
      MR_Integer libs__lp___Cols_42 = ((MR_Integer) (MR_hl_field(MR_mktag(0), (libs__lp__env).libs__lp__IntroducedFrom__pred__get_basis_vars__800__1_3_p_0_env_0__Tab_3, (MR_Integer) 1)));
#line 754 "lp.m"
      MR_Word libs__lp__V_43_43 = ((MR_Word) (MR_hl_field(MR_mktag(0), (libs__lp__env).libs__lp__IntroducedFrom__pred__get_basis_vars__800__1_3_p_0_env_0__Tab_3, (MR_Integer) 2)));
#line 754 "lp.m"
      MR_Word libs__lp__V_44_44 = ((MR_Word) (MR_hl_field(MR_mktag(0), (libs__lp__env).libs__lp__IntroducedFrom__pred__get_basis_vars__800__1_3_p_0_env_0__Tab_3, (MR_Integer) 3)));
#line 754 "lp.m"
      MR_Word libs__lp__V_46_46;
#line 754 "lp.m"
      MR_Word libs__lp__V_47_47;

#line 754 "lp.m"
      (libs__lp__env).libs__lp__IntroducedFrom__pred__get_basis_vars__800__1_3_p_0_env_0__SR_45 = ((MR_Word) (MR_hl_field(MR_mktag(0), (libs__lp__env).libs__lp__IntroducedFrom__pred__get_basis_vars__800__1_3_p_0_env_0__Tab_3, (MR_Integer) 4)));
#line 754 "lp.m"
      libs__lp__V_46_46 = ((MR_Word) (MR_hl_field(MR_mktag(0), (libs__lp__env).libs__lp__IntroducedFrom__pred__get_basis_vars__800__1_3_p_0_env_0__Tab_3, (MR_Integer) 5)));
#line 754 "lp.m"
      libs__lp__V_47_47 = ((MR_Word) (MR_hl_field(MR_mktag(0), (libs__lp__env).libs__lp__IntroducedFrom__pred__get_basis_vars__800__1_3_p_0_env_0__Tab_3, (MR_Integer) 6)));
#line 755 "lp.m"
      {
#line 755 "lp.m"
        libs__lp__between_3_p_0((MR_Integer) 1, libs__lp__Rows_41, &(libs__lp__env).libs__lp__IntroducedFrom__pred__get_basis_vars__800__1_3_p_0_env_0__R_9, libs__lp__IntroducedFrom__pred__get_basis_vars__800__1_3_p_0_1, &libs__lp__env);
      }
#line 800 "lp.m"
    }
#line 800 "lp.m"
  }
#line 800 "lp.m"
}

#line 674 "lp.m"
static void MR_CALL 
libs__lp__IntroducedFrom__pred__row_op__674__1_6_p_0(
#line 674 "lp.m"
  MR_Float libs__lp__Scale_6,
#line 674 "lp.m"
  MR_Integer libs__lp__From_7,
#line 674 "lp.m"
  MR_Integer libs__lp__To_8,
#line 674 "lp.m"
  MR_Integer libs__lp__HeadVar__4_20,
#line 674 "lp.m"
  MR_Word libs__lp__HeadVar__5_21,
#line 674 "lp.m"
  MR_Word * libs__lp__HeadVar__6_22)
#line 674 "lp.m"
{
#line 674 "lp.m"
  {
#line 674 "lp.m"
    MR_bool libs__lp__succeeded;
#line 674 "lp.m"
    MR_Float libs__lp__X_13;
#line 674 "lp.m"
    MR_Float libs__lp__Y_14;
#line 674 "lp.m"
    MR_Float libs__lp__Z_15;
#line 674 "lp.m"
    MR_Float libs__lp__V_23_23;

#line 675 "lp.m"
    {
#line 675 "lp.m"
      libs__lp__index_4_p_0(libs__lp__HeadVar__5_21, libs__lp__From_7, libs__lp__HeadVar__4_20, &libs__lp__X_13);
    }
#line 676 "lp.m"
    {
#line 676 "lp.m"
      libs__lp__index_4_p_0(libs__lp__HeadVar__5_21, libs__lp__To_8, libs__lp__HeadVar__4_20, &libs__lp__Y_14);
    }
#line 677 "lp.m"
    libs__lp__V_23_23 = (libs__lp__Scale_6 * libs__lp__X_13);
#line 677 "lp.m"
    libs__lp__Z_15 = (libs__lp__Y_14 + libs__lp__V_23_23);
#line 678 "lp.m"
    {
#line 678 "lp.m"
      libs__lp__set_index_5_p_0(libs__lp__To_8, libs__lp__HeadVar__4_20, libs__lp__Z_15, libs__lp__HeadVar__5_21, libs__lp__HeadVar__6_22);
#line 678 "lp.m"
      return;
    }
#line 674 "lp.m"
  }
#line 674 "lp.m"
}

#line 661 "lp.m"
static void MR_CALL 
libs__lp__IntroducedFrom__pred__pivot__661__1_5_p_0(
#line 661 "lp.m"
  MR_Integer libs__lp__P_5,
#line 661 "lp.m"
  MR_Float libs__lp__Apq_8,
#line 661 "lp.m"
  MR_Integer libs__lp__HeadVar__3_43,
#line 661 "lp.m"
  MR_Word libs__lp__HeadVar__4_44,
#line 661 "lp.m"
  MR_Word * libs__lp__HeadVar__5_45)
#line 661 "lp.m"
{
#line 661 "lp.m"
  {
#line 661 "lp.m"
    MR_bool libs__lp__succeeded;
#line 661 "lp.m"
    MR_Float libs__lp__NewApk_24;
#line 661 "lp.m"
    MR_Float libs__lp__Apk_74;

#line 662 "lp.m"
    {
#line 662 "lp.m"
      libs__lp__index_4_p_0(libs__lp__HeadVar__4_44, libs__lp__P_5, libs__lp__HeadVar__3_43, &libs__lp__Apk_74);
    }
#line 663 "lp.m"
    {
#line 663 "lp.m"
      libs__lp__NewApk_24 = mercury__float__f_slash_2_f_0(libs__lp__Apk_74, libs__lp__Apq_8);
    }
#line 664 "lp.m"
    {
#line 664 "lp.m"
      libs__lp__set_index_5_p_0(libs__lp__P_5, libs__lp__HeadVar__3_43, libs__lp__NewApk_24, libs__lp__HeadVar__4_44, libs__lp__HeadVar__5_45);
#line 664 "lp.m"
      return;
    }
#line 661 "lp.m"
  }
#line 661 "lp.m"
}

#line 655 "lp.m"
static void MR_CALL 
libs__lp__IntroducedFrom__pred__pivot__655__1_3_p_0(
#line 655 "lp.m"
  MR_Word libs__lp__HeadVar__1_38,
#line 655 "lp.m"
  MR_Word libs__lp__HeadVar__2_39,
#line 655 "lp.m"
  MR_Word * libs__lp__HeadVar__3_40)
#line 655 "lp.m"
{
#line 655 "lp.m"
  {
#line 655 "lp.m"
    MR_bool libs__lp__succeeded;
#line 655 "lp.m"
    MR_Integer libs__lp__J_64 = ((MR_Integer) (MR_hl_field(MR_mktag(0), libs__lp__HeadVar__1_38, (MR_Integer) 0)));
#line 655 "lp.m"
    MR_Integer libs__lp__K_65 = ((MR_Integer) (MR_hl_field(MR_mktag(0), libs__lp__HeadVar__1_38, (MR_Integer) 1)));

#line 657 "lp.m"
    {
#line 657 "lp.m"
      libs__lp__set_index_5_p_0(libs__lp__J_64, libs__lp__K_65, (MR_Float) 0.0000000000000000, libs__lp__HeadVar__2_39, libs__lp__HeadVar__3_40);
#line 657 "lp.m"
      return;
    }
#line 655 "lp.m"
  }
#line 655 "lp.m"
}

#line 651 "lp.m"
static void MR_CALL 
libs__lp__IntroducedFrom__pred__pivot__651__1_3_p_0_1(
#line 651 "lp.m"
  void * libs__lp__env_ptr_arg)
#line 651 "lp.m"
{
#line 651 "lp.m"
  {
#line 651 "lp.m"
    struct libs__lp__IntroducedFrom__pred__pivot__651__1_3_p_0_env_0_s * libs__lp__env_ptr = (struct libs__lp__IntroducedFrom__pred__pivot__651__1_3_p_0_env_0_s *) libs__lp__env_ptr_arg;

#line 651 "lp.m"
    {
#line 749 "lp.m"
      {
#line 749 "lp.m"
        (libs__lp__env_ptr)->libs__lp__IntroducedFrom__pred__pivot__651__1_3_p_0_env_0__succeeded = mercury__list__member_2_p_0((MR_Word) &mercury__builtin__builtin__type_ctor_info_int_0, ((MR_Box) ((libs__lp__env_ptr)->libs__lp__IntroducedFrom__pred__pivot__651__1_3_p_0_env_0__J_60)), (libs__lp__env_ptr)->libs__lp__IntroducedFrom__pred__pivot__651__1_3_p_0_env_0__SR_88);
      }
#line 749 "lp.m"
      (libs__lp__env_ptr)->libs__lp__IntroducedFrom__pred__pivot__651__1_3_p_0_env_0__succeeded = !((libs__lp__env_ptr)->libs__lp__IntroducedFrom__pred__pivot__651__1_3_p_0_env_0__succeeded);
#line 651 "lp.m"
      if ((libs__lp__env_ptr)->libs__lp__IntroducedFrom__pred__pivot__651__1_3_p_0_env_0__succeeded)
#line 651 "lp.m"
        {
#line 653 "lp.m"
          {
#line 653 "lp.m"
            MR_Word base;
#line 653 "lp.m"
            base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 653 "lp.m"
            *((libs__lp__env_ptr)->libs__lp__IntroducedFrom__pred__pivot__651__1_3_p_0_env_0__HeadVar__3_37) = base;
#line 653 "lp.m"
            MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) ((libs__lp__env_ptr)->libs__lp__IntroducedFrom__pred__pivot__651__1_3_p_0_env_0__J_60));
#line 653 "lp.m"
            MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) ((libs__lp__env_ptr)->libs__lp__IntroducedFrom__pred__pivot__651__1_3_p_0_env_0__Q_6));
#line 653 "lp.m"
          }
#line 653 "lp.m"
          {
#line 653 "lp.m"
            ((libs__lp__env_ptr)->libs__lp__IntroducedFrom__pred__pivot__651__1_3_p_0_env_0__cont)((libs__lp__env_ptr)->libs__lp__IntroducedFrom__pred__pivot__651__1_3_p_0_env_0__cont_env_ptr);
#line 653 "lp.m"
            return;
          }
#line 651 "lp.m"
        }
#line 651 "lp.m"
    }
#line 651 "lp.m"
  }
#line 651 "lp.m"
}

#line 651 "lp.m"
static void MR_CALL 
libs__lp__IntroducedFrom__pred__pivot__651__1_3_p_0(
#line 651 "lp.m"
  MR_Integer libs__lp__Q_6,
#line 651 "lp.m"
  MR_Word libs__lp__STATE_VARIABLE_Tableau_36_36,
#line 651 "lp.m"
  MR_Word * libs__lp__HeadVar__3_37,
#line 651 "lp.m"
  MR_Cont libs__lp__cont,
#line 651 "lp.m"
  void * libs__lp__cont_env_ptr)
#line 651 "lp.m"
{
#line 651 "lp.m"
  {
#line 651 "lp.m"
    struct libs__lp__IntroducedFrom__pred__pivot__651__1_3_p_0_env_0_s libs__lp__env;

#line 651 "lp.m"
    (libs__lp__env).libs__lp__IntroducedFrom__pred__pivot__651__1_3_p_0_env_0__Q_6 = libs__lp__Q_6;
#line 651 "lp.m"
    (libs__lp__env).libs__lp__IntroducedFrom__pred__pivot__651__1_3_p_0_env_0__HeadVar__3_37 = libs__lp__HeadVar__3_37;
#line 651 "lp.m"
    (libs__lp__env).libs__lp__IntroducedFrom__pred__pivot__651__1_3_p_0_env_0__cont = libs__lp__cont;
#line 651 "lp.m"
    (libs__lp__env).libs__lp__IntroducedFrom__pred__pivot__651__1_3_p_0_env_0__cont_env_ptr = libs__lp__cont_env_ptr;
#line 651 "lp.m"
    {
#line 651 "lp.m"
      MR_Integer libs__lp__Rows_84 = ((MR_Integer) (MR_hl_field(MR_mktag(0), libs__lp__STATE_VARIABLE_Tableau_36_36, (MR_Integer) 0)));
#line 747 "lp.m"
      MR_Integer libs__lp___Cols_85 = ((MR_Integer) (MR_hl_field(MR_mktag(0), libs__lp__STATE_VARIABLE_Tableau_36_36, (MR_Integer) 1)));
#line 747 "lp.m"
      MR_Word libs__lp__V_86_86 = ((MR_Word) (MR_hl_field(MR_mktag(0), libs__lp__STATE_VARIABLE_Tableau_36_36, (MR_Integer) 2)));
#line 747 "lp.m"
      MR_Word libs__lp__V_87_87 = ((MR_Word) (MR_hl_field(MR_mktag(0), libs__lp__STATE_VARIABLE_Tableau_36_36, (MR_Integer) 3)));
#line 747 "lp.m"
      MR_Word libs__lp__V_89_89;
#line 747 "lp.m"
      MR_Word libs__lp__V_90_90;

#line 747 "lp.m"
      (libs__lp__env).libs__lp__IntroducedFrom__pred__pivot__651__1_3_p_0_env_0__SR_88 = ((MR_Word) (MR_hl_field(MR_mktag(0), libs__lp__STATE_VARIABLE_Tableau_36_36, (MR_Integer) 4)));
#line 747 "lp.m"
      libs__lp__V_89_89 = ((MR_Word) (MR_hl_field(MR_mktag(0), libs__lp__STATE_VARIABLE_Tableau_36_36, (MR_Integer) 5)));
#line 747 "lp.m"
      libs__lp__V_90_90 = ((MR_Word) (MR_hl_field(MR_mktag(0), libs__lp__STATE_VARIABLE_Tableau_36_36, (MR_Integer) 6)));
#line 748 "lp.m"
      {
#line 748 "lp.m"
        libs__lp__between_3_p_0((MR_Integer) 0, libs__lp__Rows_84, &(libs__lp__env).libs__lp__IntroducedFrom__pred__pivot__651__1_3_p_0_env_0__J_60, libs__lp__IntroducedFrom__pred__pivot__651__1_3_p_0_1, &libs__lp__env);
      }
#line 651 "lp.m"
    }
#line 651 "lp.m"
  }
#line 651 "lp.m"
}

#line 642 "lp.m"
static void MR_CALL 
libs__lp__IntroducedFrom__pred__pivot__642__1_6_p_0(
#line 642 "lp.m"
  MR_Integer libs__lp__P_5,
#line 642 "lp.m"
  MR_Integer libs__lp__Q_6,
#line 642 "lp.m"
  MR_Float libs__lp__Apq_8,
#line 642 "lp.m"
  MR_Word libs__lp__HeadVar__4_30,
#line 642 "lp.m"
  MR_Word libs__lp__HeadVar__5_31,
#line 642 "lp.m"
  MR_Word * libs__lp__HeadVar__6_32)
#line 642 "lp.m"
{
#line 642 "lp.m"
  {
#line 642 "lp.m"
    MR_bool libs__lp__succeeded;
#line 642 "lp.m"
    MR_Float libs__lp__Ajk_15;
#line 642 "lp.m"
    MR_Float libs__lp__Ajq_16;
#line 642 "lp.m"
    MR_Float libs__lp__Apk_17;
#line 642 "lp.m"
    MR_Float libs__lp__NewAjk_18;
#line 642 "lp.m"
    MR_Float libs__lp__V_33_33;
#line 642 "lp.m"
    MR_Float libs__lp__V_34_34;
#line 642 "lp.m"
    MR_Integer libs__lp__J_51 = ((MR_Integer) (MR_hl_field(MR_mktag(0), libs__lp__HeadVar__4_30, (MR_Integer) 0)));
#line 642 "lp.m"
    MR_Integer libs__lp__K_52 = ((MR_Integer) (MR_hl_field(MR_mktag(0), libs__lp__HeadVar__4_30, (MR_Integer) 1)));

#line 644 "lp.m"
    {
#line 644 "lp.m"
      libs__lp__index_4_p_0(libs__lp__HeadVar__5_31, libs__lp__J_51, libs__lp__K_52, &libs__lp__Ajk_15);
    }
#line 645 "lp.m"
    {
#line 645 "lp.m"
      libs__lp__index_4_p_0(libs__lp__HeadVar__5_31, libs__lp__J_51, libs__lp__Q_6, &libs__lp__Ajq_16);
    }
#line 646 "lp.m"
    {
#line 646 "lp.m"
      libs__lp__index_4_p_0(libs__lp__HeadVar__5_31, libs__lp__P_5, libs__lp__K_52, &libs__lp__Apk_17);
    }
#line 647 "lp.m"
    libs__lp__V_34_34 = (libs__lp__Apk_17 * libs__lp__Ajq_16);
#line 647 "lp.m"
    {
#line 647 "lp.m"
      libs__lp__V_33_33 = mercury__float__f_slash_2_f_0(libs__lp__V_34_34, libs__lp__Apq_8);
    }
#line 647 "lp.m"
    libs__lp__NewAjk_18 = (libs__lp__Ajk_15 - libs__lp__V_33_33);
#line 648 "lp.m"
    {
#line 648 "lp.m"
      libs__lp__set_index_5_p_0(libs__lp__J_51, libs__lp__K_52, libs__lp__NewAjk_18, libs__lp__HeadVar__5_31, libs__lp__HeadVar__6_32);
#line 648 "lp.m"
      return;
    }
#line 642 "lp.m"
  }
#line 642 "lp.m"
}

#line 635 "lp.m"
static void MR_CALL 
libs__lp__IntroducedFrom__pred__pivot__635__1_4_p_0_2(
#line 635 "lp.m"
  void * libs__lp__env_ptr_arg)
#line 635 "lp.m"
{
#line 635 "lp.m"
  {
#line 635 "lp.m"
    struct libs__lp__IntroducedFrom__pred__pivot__635__1_4_p_0_env_0_s * libs__lp__env_ptr = (struct libs__lp__IntroducedFrom__pred__pivot__635__1_4_p_0_env_0_s *) libs__lp__env_ptr_arg;

#line 639 "lp.m"
    (libs__lp__env_ptr)->libs__lp__IntroducedFrom__pred__pivot__635__1_4_p_0_env_0__succeeded = ((libs__lp__env_ptr)->libs__lp__IntroducedFrom__pred__pivot__635__1_4_p_0_env_0__K_12 == (libs__lp__env_ptr)->libs__lp__IntroducedFrom__pred__pivot__635__1_4_p_0_env_0__Q_6);
#line 639 "lp.m"
    (libs__lp__env_ptr)->libs__lp__IntroducedFrom__pred__pivot__635__1_4_p_0_env_0__succeeded = !((libs__lp__env_ptr)->libs__lp__IntroducedFrom__pred__pivot__635__1_4_p_0_env_0__succeeded);
#line 635 "lp.m"
    if ((libs__lp__env_ptr)->libs__lp__IntroducedFrom__pred__pivot__635__1_4_p_0_env_0__succeeded)
#line 635 "lp.m"
      {
#line 640 "lp.m"
        {
#line 640 "lp.m"
          MR_Word base;
#line 640 "lp.m"
          base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 640 "lp.m"
          *((libs__lp__env_ptr)->libs__lp__IntroducedFrom__pred__pivot__635__1_4_p_0_env_0__HeadVar__4_27) = base;
#line 640 "lp.m"
          MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) ((libs__lp__env_ptr)->libs__lp__IntroducedFrom__pred__pivot__635__1_4_p_0_env_0__J_11));
#line 640 "lp.m"
          MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) ((libs__lp__env_ptr)->libs__lp__IntroducedFrom__pred__pivot__635__1_4_p_0_env_0__K_12));
#line 640 "lp.m"
        }
#line 640 "lp.m"
        {
#line 640 "lp.m"
          ((libs__lp__env_ptr)->libs__lp__IntroducedFrom__pred__pivot__635__1_4_p_0_env_0__cont)((libs__lp__env_ptr)->libs__lp__IntroducedFrom__pred__pivot__635__1_4_p_0_env_0__cont_env_ptr);
#line 640 "lp.m"
          return;
        }
#line 635 "lp.m"
      }
#line 635 "lp.m"
  }
#line 635 "lp.m"
}

#line 635 "lp.m"
static void MR_CALL 
libs__lp__IntroducedFrom__pred__pivot__635__1_4_p_0_1(
#line 635 "lp.m"
  void * libs__lp__env_ptr_arg)
#line 635 "lp.m"
{
#line 635 "lp.m"
  {
#line 635 "lp.m"
    struct libs__lp__IntroducedFrom__pred__pivot__635__1_4_p_0_env_0_s * libs__lp__env_ptr = (struct libs__lp__IntroducedFrom__pred__pivot__635__1_4_p_0_env_0_s *) libs__lp__env_ptr_arg;

#line 635 "lp.m"
    {
#line 749 "lp.m"
      {
#line 749 "lp.m"
        (libs__lp__env_ptr)->libs__lp__IntroducedFrom__pred__pivot__635__1_4_p_0_env_0__succeeded = mercury__list__member_2_p_0((MR_Word) &mercury__builtin__builtin__type_ctor_info_int_0, ((MR_Box) ((libs__lp__env_ptr)->libs__lp__IntroducedFrom__pred__pivot__635__1_4_p_0_env_0__J_11)), (libs__lp__env_ptr)->libs__lp__IntroducedFrom__pred__pivot__635__1_4_p_0_env_0__SR_88);
      }
#line 749 "lp.m"
      (libs__lp__env_ptr)->libs__lp__IntroducedFrom__pred__pivot__635__1_4_p_0_env_0__succeeded = !((libs__lp__env_ptr)->libs__lp__IntroducedFrom__pred__pivot__635__1_4_p_0_env_0__succeeded);
#line 635 "lp.m"
      if ((libs__lp__env_ptr)->libs__lp__IntroducedFrom__pred__pivot__635__1_4_p_0_env_0__succeeded)
#line 635 "lp.m"
        {
#line 637 "lp.m"
          (libs__lp__env_ptr)->libs__lp__IntroducedFrom__pred__pivot__635__1_4_p_0_env_0__succeeded = ((libs__lp__env_ptr)->libs__lp__IntroducedFrom__pred__pivot__635__1_4_p_0_env_0__J_11 == (libs__lp__env_ptr)->libs__lp__IntroducedFrom__pred__pivot__635__1_4_p_0_env_0__P_5);
#line 637 "lp.m"
          (libs__lp__env_ptr)->libs__lp__IntroducedFrom__pred__pivot__635__1_4_p_0_env_0__succeeded = !((libs__lp__env_ptr)->libs__lp__IntroducedFrom__pred__pivot__635__1_4_p_0_env_0__succeeded);
#line 635 "lp.m"
          if ((libs__lp__env_ptr)->libs__lp__IntroducedFrom__pred__pivot__635__1_4_p_0_env_0__succeeded)
#line 638 "lp.m"
            {
#line 638 "lp.m"
              libs__lp__all_cols0_2_p_0((libs__lp__env_ptr)->libs__lp__IntroducedFrom__pred__pivot__635__1_4_p_0_env_0__STATE_VARIABLE_Tableau_0_25, &(libs__lp__env_ptr)->libs__lp__IntroducedFrom__pred__pivot__635__1_4_p_0_env_0__K_12, libs__lp__IntroducedFrom__pred__pivot__635__1_4_p_0_2, libs__lp__env_ptr);
            }
#line 635 "lp.m"
        }
#line 635 "lp.m"
    }
#line 635 "lp.m"
  }
#line 635 "lp.m"
}

#line 635 "lp.m"
static void MR_CALL 
libs__lp__IntroducedFrom__pred__pivot__635__1_4_p_0(
#line 635 "lp.m"
  MR_Integer libs__lp__P_5,
#line 635 "lp.m"
  MR_Integer libs__lp__Q_6,
#line 635 "lp.m"
  MR_Word libs__lp__STATE_VARIABLE_Tableau_0_25,
#line 635 "lp.m"
  MR_Word * libs__lp__HeadVar__4_27,
#line 635 "lp.m"
  MR_Cont libs__lp__cont,
#line 635 "lp.m"
  void * libs__lp__cont_env_ptr)
#line 635 "lp.m"
{
#line 635 "lp.m"
  {
#line 635 "lp.m"
    struct libs__lp__IntroducedFrom__pred__pivot__635__1_4_p_0_env_0_s libs__lp__env;

#line 635 "lp.m"
    (libs__lp__env).libs__lp__IntroducedFrom__pred__pivot__635__1_4_p_0_env_0__P_5 = libs__lp__P_5;
#line 635 "lp.m"
    (libs__lp__env).libs__lp__IntroducedFrom__pred__pivot__635__1_4_p_0_env_0__Q_6 = libs__lp__Q_6;
#line 635 "lp.m"
    (libs__lp__env).libs__lp__IntroducedFrom__pred__pivot__635__1_4_p_0_env_0__STATE_VARIABLE_Tableau_0_25 = libs__lp__STATE_VARIABLE_Tableau_0_25;
#line 635 "lp.m"
    (libs__lp__env).libs__lp__IntroducedFrom__pred__pivot__635__1_4_p_0_env_0__HeadVar__4_27 = libs__lp__HeadVar__4_27;
#line 635 "lp.m"
    (libs__lp__env).libs__lp__IntroducedFrom__pred__pivot__635__1_4_p_0_env_0__cont = libs__lp__cont;
#line 635 "lp.m"
    (libs__lp__env).libs__lp__IntroducedFrom__pred__pivot__635__1_4_p_0_env_0__cont_env_ptr = libs__lp__cont_env_ptr;
#line 635 "lp.m"
    {
#line 635 "lp.m"
      MR_Integer libs__lp__Rows_84 = ((MR_Integer) (MR_hl_field(MR_mktag(0), (libs__lp__env).libs__lp__IntroducedFrom__pred__pivot__635__1_4_p_0_env_0__STATE_VARIABLE_Tableau_0_25, (MR_Integer) 0)));
#line 747 "lp.m"
      MR_Integer libs__lp___Cols_85 = ((MR_Integer) (MR_hl_field(MR_mktag(0), (libs__lp__env).libs__lp__IntroducedFrom__pred__pivot__635__1_4_p_0_env_0__STATE_VARIABLE_Tableau_0_25, (MR_Integer) 1)));
#line 747 "lp.m"
      MR_Word libs__lp__V_86_86 = ((MR_Word) (MR_hl_field(MR_mktag(0), (libs__lp__env).libs__lp__IntroducedFrom__pred__pivot__635__1_4_p_0_env_0__STATE_VARIABLE_Tableau_0_25, (MR_Integer) 2)));
#line 747 "lp.m"
      MR_Word libs__lp__V_87_87 = ((MR_Word) (MR_hl_field(MR_mktag(0), (libs__lp__env).libs__lp__IntroducedFrom__pred__pivot__635__1_4_p_0_env_0__STATE_VARIABLE_Tableau_0_25, (MR_Integer) 3)));
#line 747 "lp.m"
      MR_Word libs__lp__V_89_89;
#line 747 "lp.m"
      MR_Word libs__lp__V_90_90;

#line 747 "lp.m"
      (libs__lp__env).libs__lp__IntroducedFrom__pred__pivot__635__1_4_p_0_env_0__SR_88 = ((MR_Word) (MR_hl_field(MR_mktag(0), (libs__lp__env).libs__lp__IntroducedFrom__pred__pivot__635__1_4_p_0_env_0__STATE_VARIABLE_Tableau_0_25, (MR_Integer) 4)));
#line 747 "lp.m"
      libs__lp__V_89_89 = ((MR_Word) (MR_hl_field(MR_mktag(0), (libs__lp__env).libs__lp__IntroducedFrom__pred__pivot__635__1_4_p_0_env_0__STATE_VARIABLE_Tableau_0_25, (MR_Integer) 5)));
#line 747 "lp.m"
      libs__lp__V_90_90 = ((MR_Word) (MR_hl_field(MR_mktag(0), (libs__lp__env).libs__lp__IntroducedFrom__pred__pivot__635__1_4_p_0_env_0__STATE_VARIABLE_Tableau_0_25, (MR_Integer) 6)));
#line 748 "lp.m"
      {
#line 748 "lp.m"
        libs__lp__between_3_p_0((MR_Integer) 0, libs__lp__Rows_84, &(libs__lp__env).libs__lp__IntroducedFrom__pred__pivot__635__1_4_p_0_env_0__J_11, libs__lp__IntroducedFrom__pred__pivot__635__1_4_p_0_1, &libs__lp__env);
      }
#line 635 "lp.m"
    }
#line 635 "lp.m"
  }
#line 635 "lp.m"
}

#line 604 "lp.m"
static void MR_CALL 
libs__lp__IntroducedFrom__pred__fix_basis_and_rem_cols__604__1_4_p_0_1(
#line 604 "lp.m"
  void * libs__lp__env_ptr_arg)
#line 604 "lp.m"
{
#line 604 "lp.m"
  {
#line 604 "lp.m"
    struct libs__lp__IntroducedFrom__pred__fix_basis_and_rem_cols__604__1_4_p_0_env_0_s * libs__lp__env_ptr = (struct libs__lp__IntroducedFrom__pred__fix_basis_and_rem_cols__604__1_4_p_0_env_0_s *) libs__lp__env_ptr_arg;

#line 606 "lp.m"
    (libs__lp__env_ptr)->libs__lp__IntroducedFrom__pred__fix_basis_and_rem_cols__604__1_4_p_0_env_0__succeeded = ((libs__lp__env_ptr)->libs__lp__IntroducedFrom__pred__fix_basis_and_rem_cols__604__1_4_p_0_env_0__Col_10 == *((libs__lp__env_ptr)->libs__lp__IntroducedFrom__pred__fix_basis_and_rem_cols__604__1_4_p_0_env_0__HeadVar__4_35));
#line 606 "lp.m"
    (libs__lp__env_ptr)->libs__lp__IntroducedFrom__pred__fix_basis_and_rem_cols__604__1_4_p_0_env_0__succeeded = !((libs__lp__env_ptr)->libs__lp__IntroducedFrom__pred__fix_basis_and_rem_cols__604__1_4_p_0_env_0__succeeded);
#line 604 "lp.m"
    if ((libs__lp__env_ptr)->libs__lp__IntroducedFrom__pred__fix_basis_and_rem_cols__604__1_4_p_0_env_0__succeeded)
#line 604 "lp.m"
      {
#line 607 "lp.m"
        {
#line 607 "lp.m"
          libs__lp__index_4_p_0((libs__lp__env_ptr)->libs__lp__IntroducedFrom__pred__fix_basis_and_rem_cols__604__1_4_p_0_env_0__STATE_VARIABLE_Tableau_0_2, (libs__lp__env_ptr)->libs__lp__IntroducedFrom__pred__fix_basis_and_rem_cols__604__1_4_p_0_env_0__Row_17, *((libs__lp__env_ptr)->libs__lp__IntroducedFrom__pred__fix_basis_and_rem_cols__604__1_4_p_0_env_0__HeadVar__4_35), &(libs__lp__env_ptr)->libs__lp__IntroducedFrom__pred__fix_basis_and_rem_cols__604__1_4_p_0_env_0__Zz_20);
        }
#line 608 "lp.m"
        (libs__lp__env_ptr)->libs__lp__IntroducedFrom__pred__fix_basis_and_rem_cols__604__1_4_p_0_env_0__succeeded = (((libs__lp__env_ptr)->libs__lp__IntroducedFrom__pred__fix_basis_and_rem_cols__604__1_4_p_0_env_0__Zz_20) == ((MR_Float) 0.0000000000000000));
#line 608 "lp.m"
        (libs__lp__env_ptr)->libs__lp__IntroducedFrom__pred__fix_basis_and_rem_cols__604__1_4_p_0_env_0__succeeded = !((libs__lp__env_ptr)->libs__lp__IntroducedFrom__pred__fix_basis_and_rem_cols__604__1_4_p_0_env_0__succeeded);
#line 608 "lp.m"
        if ((libs__lp__env_ptr)->libs__lp__IntroducedFrom__pred__fix_basis_and_rem_cols__604__1_4_p_0_env_0__succeeded)
#line 608 "lp.m"
          {
#line 608 "lp.m"
            ((libs__lp__env_ptr)->libs__lp__IntroducedFrom__pred__fix_basis_and_rem_cols__604__1_4_p_0_env_0__cont)((libs__lp__env_ptr)->libs__lp__IntroducedFrom__pred__fix_basis_and_rem_cols__604__1_4_p_0_env_0__cont_env_ptr);
#line 608 "lp.m"
            return;
          }
#line 604 "lp.m"
      }
#line 604 "lp.m"
  }
#line 604 "lp.m"
}

#line 604 "lp.m"
static void MR_CALL 
libs__lp__IntroducedFrom__pred__fix_basis_and_rem_cols__604__1_4_p_0(
#line 604 "lp.m"
  MR_Word libs__lp__STATE_VARIABLE_Tableau_0_2,
#line 604 "lp.m"
  MR_Integer libs__lp__Col_10,
#line 604 "lp.m"
  MR_Integer libs__lp__Row_17,
#line 604 "lp.m"
  MR_Integer * libs__lp__HeadVar__4_35,
#line 604 "lp.m"
  MR_Cont libs__lp__cont,
#line 604 "lp.m"
  void * libs__lp__cont_env_ptr)
#line 604 "lp.m"
{
#line 604 "lp.m"
  {
#line 604 "lp.m"
    struct libs__lp__IntroducedFrom__pred__fix_basis_and_rem_cols__604__1_4_p_0_env_0_s libs__lp__env;

#line 604 "lp.m"
    (libs__lp__env).libs__lp__IntroducedFrom__pred__fix_basis_and_rem_cols__604__1_4_p_0_env_0__STATE_VARIABLE_Tableau_0_2 = libs__lp__STATE_VARIABLE_Tableau_0_2;
#line 604 "lp.m"
    (libs__lp__env).libs__lp__IntroducedFrom__pred__fix_basis_and_rem_cols__604__1_4_p_0_env_0__Col_10 = libs__lp__Col_10;
#line 604 "lp.m"
    (libs__lp__env).libs__lp__IntroducedFrom__pred__fix_basis_and_rem_cols__604__1_4_p_0_env_0__Row_17 = libs__lp__Row_17;
#line 604 "lp.m"
    (libs__lp__env).libs__lp__IntroducedFrom__pred__fix_basis_and_rem_cols__604__1_4_p_0_env_0__HeadVar__4_35 = libs__lp__HeadVar__4_35;
#line 604 "lp.m"
    (libs__lp__env).libs__lp__IntroducedFrom__pred__fix_basis_and_rem_cols__604__1_4_p_0_env_0__cont = libs__lp__cont;
#line 604 "lp.m"
    (libs__lp__env).libs__lp__IntroducedFrom__pred__fix_basis_and_rem_cols__604__1_4_p_0_env_0__cont_env_ptr = libs__lp__cont_env_ptr;
#line 605 "lp.m"
    {
#line 605 "lp.m"
      libs__lp__all_cols_2_p_0((libs__lp__env).libs__lp__IntroducedFrom__pred__fix_basis_and_rem_cols__604__1_4_p_0_env_0__STATE_VARIABLE_Tableau_0_2, (libs__lp__env).libs__lp__IntroducedFrom__pred__fix_basis_and_rem_cols__604__1_4_p_0_env_0__HeadVar__4_35, libs__lp__IntroducedFrom__pred__fix_basis_and_rem_cols__604__1_4_p_0_1, &libs__lp__env);
    }
#line 604 "lp.m"
  }
#line 604 "lp.m"
}

#line 594 "lp.m"
static void MR_CALL 
libs__lp__IntroducedFrom__pred__fix_basis_and_rem_cols__594__1_5_p_0(
#line 594 "lp.m"
  MR_Word libs__lp__STATE_VARIABLE_Tableau_0_2,
#line 594 "lp.m"
  MR_Integer libs__lp__Col_10,
#line 594 "lp.m"
  MR_Integer libs__lp__HeadVar__3_26,
#line 594 "lp.m"
  MR_Word libs__lp__HeadVar__4_27,
#line 594 "lp.m"
  MR_Word * libs__lp__HeadVar__5_28)
#line 594 "lp.m"
{
#line 594 "lp.m"
  {
#line 594 "lp.m"
    MR_bool libs__lp__succeeded;
#line 594 "lp.m"
    MR_Float libs__lp__Val_15;

#line 595 "lp.m"
    {
#line 595 "lp.m"
      libs__lp__index_4_p_0(libs__lp__STATE_VARIABLE_Tableau_0_2, libs__lp__HeadVar__3_26, libs__lp__Col_10, &libs__lp__Val_15);
    }
#line 596 "lp.m"
    libs__lp__succeeded = (libs__lp__Val_15 == ((MR_Float) 0.0000000000000000));
#line 598 "lp.m"
    if (libs__lp__succeeded)
#line 597 "lp.m"
      *libs__lp__HeadVar__5_28 = libs__lp__HeadVar__4_27;
#line 598 "lp.m"
    else
#line 599 "lp.m"
      {
#line 599 "lp.m"
        MR_Word libs__lp__V_29_29;

#line 599 "lp.m"
        {
#line 599 "lp.m"
          libs__lp__V_29_29 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 599 "lp.m"
          MR_hl_field(MR_mktag(0), libs__lp__V_29_29, 0) = MR_box_float(libs__lp__Val_15);
#line 599 "lp.m"
          MR_hl_field(MR_mktag(0), libs__lp__V_29_29, 1) = ((MR_Box) (libs__lp__HeadVar__3_26));
#line 599 "lp.m"
        }
#line 599 "lp.m"
        {
#line 599 "lp.m"
          MR_Word base;
#line 599 "lp.m"
          base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 599 "lp.m"
          *libs__lp__HeadVar__5_28 = base;
#line 599 "lp.m"
          MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (libs__lp__V_29_29));
#line 599 "lp.m"
          MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (libs__lp__HeadVar__4_27));
#line 599 "lp.m"
        }
#line 599 "lp.m"
      }
#line 594 "lp.m"
  }
#line 594 "lp.m"
}

#line 570 "lp.m"
static void MR_CALL 
libs__lp__IntroducedFrom__pred__ensure_zero_obj_coeffs__570__1_3_p_0_1(
#line 570 "lp.m"
  void * libs__lp__env_ptr_arg)
#line 570 "lp.m"
{
#line 570 "lp.m"
  {
#line 570 "lp.m"
    struct libs__lp__IntroducedFrom__pred__ensure_zero_obj_coeffs__570__1_3_p_0_env_0_s * libs__lp__env_ptr = (struct libs__lp__IntroducedFrom__pred__ensure_zero_obj_coeffs__570__1_3_p_0_env_0_s *) libs__lp__env_ptr_arg;

#line 570 "lp.m"
    {
#line 756 "lp.m"
      {
#line 756 "lp.m"
        (libs__lp__env_ptr)->libs__lp__IntroducedFrom__pred__ensure_zero_obj_coeffs__570__1_3_p_0_env_0__succeeded = mercury__list__member_2_p_0((MR_Word) &mercury__builtin__builtin__type_ctor_info_int_0, ((MR_Box) ((libs__lp__env_ptr)->libs__lp__IntroducedFrom__pred__ensure_zero_obj_coeffs__570__1_3_p_0_env_0__R_14)), (libs__lp__env_ptr)->libs__lp__IntroducedFrom__pred__ensure_zero_obj_coeffs__570__1_3_p_0_env_0__SR_42);
      }
#line 756 "lp.m"
      (libs__lp__env_ptr)->libs__lp__IntroducedFrom__pred__ensure_zero_obj_coeffs__570__1_3_p_0_env_0__succeeded = !((libs__lp__env_ptr)->libs__lp__IntroducedFrom__pred__ensure_zero_obj_coeffs__570__1_3_p_0_env_0__succeeded);
#line 570 "lp.m"
      if ((libs__lp__env_ptr)->libs__lp__IntroducedFrom__pred__ensure_zero_obj_coeffs__570__1_3_p_0_env_0__succeeded)
#line 570 "lp.m"
        {
#line 572 "lp.m"
          {
#line 572 "lp.m"
            libs__lp__index_4_p_0((libs__lp__env_ptr)->libs__lp__IntroducedFrom__pred__ensure_zero_obj_coeffs__570__1_3_p_0_env_0__STATE_VARIABLE_Tableau_0_2, (libs__lp__env_ptr)->libs__lp__IntroducedFrom__pred__ensure_zero_obj_coeffs__570__1_3_p_0_env_0__R_14, (libs__lp__env_ptr)->libs__lp__IntroducedFrom__pred__ensure_zero_obj_coeffs__570__1_3_p_0_env_0__Col_10, &(libs__lp__env_ptr)->libs__lp__IntroducedFrom__pred__ensure_zero_obj_coeffs__570__1_3_p_0_env_0__ValF0_15);
          }
#line 573 "lp.m"
          (libs__lp__env_ptr)->libs__lp__IntroducedFrom__pred__ensure_zero_obj_coeffs__570__1_3_p_0_env_0__succeeded = (((libs__lp__env_ptr)->libs__lp__IntroducedFrom__pred__ensure_zero_obj_coeffs__570__1_3_p_0_env_0__ValF0_15) == ((MR_Float) 0.0000000000000000));
#line 573 "lp.m"
          (libs__lp__env_ptr)->libs__lp__IntroducedFrom__pred__ensure_zero_obj_coeffs__570__1_3_p_0_env_0__succeeded = !((libs__lp__env_ptr)->libs__lp__IntroducedFrom__pred__ensure_zero_obj_coeffs__570__1_3_p_0_env_0__succeeded);
#line 570 "lp.m"
          if ((libs__lp__env_ptr)->libs__lp__IntroducedFrom__pred__ensure_zero_obj_coeffs__570__1_3_p_0_env_0__succeeded)
#line 570 "lp.m"
            {
#line 574 "lp.m"
              {
#line 574 "lp.m"
                MR_Word base;
#line 574 "lp.m"
                base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 574 "lp.m"
                *((libs__lp__env_ptr)->libs__lp__IntroducedFrom__pred__ensure_zero_obj_coeffs__570__1_3_p_0_env_0__HeadVar__3_25) = base;
#line 574 "lp.m"
                MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) ((libs__lp__env_ptr)->libs__lp__IntroducedFrom__pred__ensure_zero_obj_coeffs__570__1_3_p_0_env_0__R_14));
#line 574 "lp.m"
                MR_hl_field(MR_mktag(0), base, 1) = MR_box_float((libs__lp__env_ptr)->libs__lp__IntroducedFrom__pred__ensure_zero_obj_coeffs__570__1_3_p_0_env_0__ValF0_15);
#line 574 "lp.m"
              }
#line 574 "lp.m"
              {
#line 574 "lp.m"
                ((libs__lp__env_ptr)->libs__lp__IntroducedFrom__pred__ensure_zero_obj_coeffs__570__1_3_p_0_env_0__cont)((libs__lp__env_ptr)->libs__lp__IntroducedFrom__pred__ensure_zero_obj_coeffs__570__1_3_p_0_env_0__cont_env_ptr);
#line 574 "lp.m"
                return;
              }
#line 570 "lp.m"
            }
#line 570 "lp.m"
        }
#line 570 "lp.m"
    }
#line 570 "lp.m"
  }
#line 570 "lp.m"
}

#line 570 "lp.m"
static void MR_CALL 
libs__lp__IntroducedFrom__pred__ensure_zero_obj_coeffs__570__1_3_p_0(
#line 570 "lp.m"
  MR_Word libs__lp__STATE_VARIABLE_Tableau_0_2,
#line 570 "lp.m"
  MR_Integer libs__lp__Col_10,
#line 570 "lp.m"
  MR_Word * libs__lp__HeadVar__3_25,
#line 570 "lp.m"
  MR_Cont libs__lp__cont,
#line 570 "lp.m"
  void * libs__lp__cont_env_ptr)
#line 570 "lp.m"
{
#line 570 "lp.m"
  {
#line 570 "lp.m"
    struct libs__lp__IntroducedFrom__pred__ensure_zero_obj_coeffs__570__1_3_p_0_env_0_s libs__lp__env;

#line 570 "lp.m"
    (libs__lp__env).libs__lp__IntroducedFrom__pred__ensure_zero_obj_coeffs__570__1_3_p_0_env_0__STATE_VARIABLE_Tableau_0_2 = libs__lp__STATE_VARIABLE_Tableau_0_2;
#line 570 "lp.m"
    (libs__lp__env).libs__lp__IntroducedFrom__pred__ensure_zero_obj_coeffs__570__1_3_p_0_env_0__Col_10 = libs__lp__Col_10;
#line 570 "lp.m"
    (libs__lp__env).libs__lp__IntroducedFrom__pred__ensure_zero_obj_coeffs__570__1_3_p_0_env_0__HeadVar__3_25 = libs__lp__HeadVar__3_25;
#line 570 "lp.m"
    (libs__lp__env).libs__lp__IntroducedFrom__pred__ensure_zero_obj_coeffs__570__1_3_p_0_env_0__cont = libs__lp__cont;
#line 570 "lp.m"
    (libs__lp__env).libs__lp__IntroducedFrom__pred__ensure_zero_obj_coeffs__570__1_3_p_0_env_0__cont_env_ptr = libs__lp__cont_env_ptr;
#line 570 "lp.m"
    {
#line 570 "lp.m"
      MR_Integer libs__lp__Rows_38 = ((MR_Integer) (MR_hl_field(MR_mktag(0), (libs__lp__env).libs__lp__IntroducedFrom__pred__ensure_zero_obj_coeffs__570__1_3_p_0_env_0__STATE_VARIABLE_Tableau_0_2, (MR_Integer) 0)));
#line 754 "lp.m"
      MR_Integer libs__lp___Cols_39 = ((MR_Integer) (MR_hl_field(MR_mktag(0), (libs__lp__env).libs__lp__IntroducedFrom__pred__ensure_zero_obj_coeffs__570__1_3_p_0_env_0__STATE_VARIABLE_Tableau_0_2, (MR_Integer) 1)));
#line 754 "lp.m"
      MR_Word libs__lp__V_40_40 = ((MR_Word) (MR_hl_field(MR_mktag(0), (libs__lp__env).libs__lp__IntroducedFrom__pred__ensure_zero_obj_coeffs__570__1_3_p_0_env_0__STATE_VARIABLE_Tableau_0_2, (MR_Integer) 2)));
#line 754 "lp.m"
      MR_Word libs__lp__V_41_41 = ((MR_Word) (MR_hl_field(MR_mktag(0), (libs__lp__env).libs__lp__IntroducedFrom__pred__ensure_zero_obj_coeffs__570__1_3_p_0_env_0__STATE_VARIABLE_Tableau_0_2, (MR_Integer) 3)));
#line 754 "lp.m"
      MR_Word libs__lp__V_43_43;
#line 754 "lp.m"
      MR_Word libs__lp__V_44_44;

#line 754 "lp.m"
      (libs__lp__env).libs__lp__IntroducedFrom__pred__ensure_zero_obj_coeffs__570__1_3_p_0_env_0__SR_42 = ((MR_Word) (MR_hl_field(MR_mktag(0), (libs__lp__env).libs__lp__IntroducedFrom__pred__ensure_zero_obj_coeffs__570__1_3_p_0_env_0__STATE_VARIABLE_Tableau_0_2, (MR_Integer) 4)));
#line 754 "lp.m"
      libs__lp__V_43_43 = ((MR_Word) (MR_hl_field(MR_mktag(0), (libs__lp__env).libs__lp__IntroducedFrom__pred__ensure_zero_obj_coeffs__570__1_3_p_0_env_0__STATE_VARIABLE_Tableau_0_2, (MR_Integer) 5)));
#line 754 "lp.m"
      libs__lp__V_44_44 = ((MR_Word) (MR_hl_field(MR_mktag(0), (libs__lp__env).libs__lp__IntroducedFrom__pred__ensure_zero_obj_coeffs__570__1_3_p_0_env_0__STATE_VARIABLE_Tableau_0_2, (MR_Integer) 6)));
#line 755 "lp.m"
      {
#line 755 "lp.m"
        libs__lp__between_3_p_0((MR_Integer) 1, libs__lp__Rows_38, &(libs__lp__env).libs__lp__IntroducedFrom__pred__ensure_zero_obj_coeffs__570__1_3_p_0_env_0__R_14, libs__lp__IntroducedFrom__pred__ensure_zero_obj_coeffs__570__1_3_p_0_1, &libs__lp__env);
      }
#line 570 "lp.m"
    }
#line 570 "lp.m"
  }
#line 570 "lp.m"
}

#line 530 "lp.m"
static void MR_CALL 
libs__lp__IntroducedFrom__pred__simplex__530__1_5_p_0(
#line 530 "lp.m"
  MR_Word libs__lp__A0_4,
#line 530 "lp.m"
  MR_Integer libs__lp__Q_17,
#line 530 "lp.m"
  MR_Integer libs__lp__HeadVar__3_46,
#line 530 "lp.m"
  MR_Word libs__lp__HeadVar__4_47,
#line 530 "lp.m"
  MR_Word * libs__lp__HeadVar__5_48)
#line 530 "lp.m"
{
#line 530 "lp.m"
  {
#line 530 "lp.m"
    MR_bool libs__lp__succeeded;

#line 530 "lp.m"
    if ((libs__lp__HeadVar__4_47 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 520 "lp.m"
      {
#line 520 "lp.m"
        MR_Float libs__lp__MaxVal_24;

#line 521 "lp.m"
        {
#line 521 "lp.m"
          libs__lp__index_4_p_0(libs__lp__A0_4, libs__lp__HeadVar__3_46, libs__lp__Q_17, &libs__lp__MaxVal_24);
        }
#line 522 "lp.m"
        libs__lp__succeeded = (libs__lp__MaxVal_24 > ((MR_Float) 0.0000000000000000));
#line 527 "lp.m"
        if (libs__lp__succeeded)
#line 523 "lp.m"
          {
#line 523 "lp.m"
            MR_Integer libs__lp__RHSC_25 = ((MR_Integer) (MR_hl_field(MR_mktag(0), libs__lp__A0_4, (MR_Integer) 1)));
#line 523 "lp.m"
            MR_Float libs__lp__MVal_26;
#line 523 "lp.m"
            MR_Float libs__lp__CVal_27;
#line 523 "lp.m"
            MR_Word libs__lp__V_53_53;
#line 742 "lp.m"
            MR_Integer libs__lp__V_76_76 = ((MR_Integer) (MR_hl_field(MR_mktag(0), libs__lp__A0_4, (MR_Integer) 0)));
#line 742 "lp.m"
            MR_Word libs__lp__V_77_77 = ((MR_Word) (MR_hl_field(MR_mktag(0), libs__lp__A0_4, (MR_Integer) 2)));
#line 742 "lp.m"
            MR_Word libs__lp__V_78_78 = ((MR_Word) (MR_hl_field(MR_mktag(0), libs__lp__A0_4, (MR_Integer) 3)));
#line 742 "lp.m"
            MR_Word libs__lp__V_79_79 = ((MR_Word) (MR_hl_field(MR_mktag(0), libs__lp__A0_4, (MR_Integer) 4)));
#line 742 "lp.m"
            MR_Word libs__lp__V_80_80 = ((MR_Word) (MR_hl_field(MR_mktag(0), libs__lp__A0_4, (MR_Integer) 5)));
#line 742 "lp.m"
            MR_Word libs__lp__V_81_81 = ((MR_Word) (MR_hl_field(MR_mktag(0), libs__lp__A0_4, (MR_Integer) 6)));

#line 524 "lp.m"
            {
#line 524 "lp.m"
              libs__lp__index_4_p_0(libs__lp__A0_4, libs__lp__HeadVar__3_46, libs__lp__RHSC_25, &libs__lp__MVal_26);
            }
#line 525 "lp.m"
            {
#line 525 "lp.m"
              libs__lp__CVal_27 = mercury__float__f_slash_2_f_0(libs__lp__MVal_26, libs__lp__MaxVal_24);
            }
#line 526 "lp.m"
            {
#line 526 "lp.m"
              libs__lp__V_53_53 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 526 "lp.m"
              MR_hl_field(MR_mktag(0), libs__lp__V_53_53, 0) = ((MR_Box) (libs__lp__HeadVar__3_46));
#line 526 "lp.m"
              MR_hl_field(MR_mktag(0), libs__lp__V_53_53, 1) = MR_box_float(libs__lp__CVal_27);
#line 526 "lp.m"
            }
#line 526 "lp.m"
            {
#line 526 "lp.m"
              MR_Word base;
#line 526 "lp.m"
              base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 526 "lp.m"
              *libs__lp__HeadVar__5_48 = base;
#line 526 "lp.m"
              MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (libs__lp__V_53_53));
#line 526 "lp.m"
            }
#line 523 "lp.m"
          }
#line 527 "lp.m"
        else
#line 528 "lp.m"
          *libs__lp__HeadVar__5_48 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 520 "lp.m"
      }
#line 530 "lp.m"
    else
#line 531 "lp.m"
      {
#line 531 "lp.m"
        MR_Float libs__lp__MaxVal0_29;
#line 531 "lp.m"
        MR_Word libs__lp__V_49_49 = ((MR_Word) (MR_hl_field(MR_mktag(1), libs__lp__HeadVar__4_47, (MR_Integer) 0)));
#line 531 "lp.m"
        MR_Float libs__lp__CellVal_59;
#line 531 "lp.m"
        MR_Integer libs__lp__RHSC_60;
#line 531 "lp.m"
        MR_Float libs__lp__MVal_61;
#line 531 "lp.m"
        MR_Integer libs__lp__V_28_28 = ((MR_Integer) (MR_hl_field(MR_mktag(0), libs__lp__V_49_49, (MR_Integer) 0)));
#line 742 "lp.m"
        MR_Integer libs__lp__V_83_83;
#line 742 "lp.m"
        MR_Word libs__lp__V_84_84;
#line 742 "lp.m"
        MR_Word libs__lp__V_85_85;
#line 742 "lp.m"
        MR_Word libs__lp__V_86_86;
#line 742 "lp.m"
        MR_Word libs__lp__V_87_87;
#line 742 "lp.m"
        MR_Word libs__lp__V_88_88;
#line 541 "lp.m"
        MR_Float libs__lp__MaxVal1_30;

#line 531 "lp.m"
        libs__lp__MaxVal0_29 = MR_unbox_float((MR_hl_field(MR_mktag(0), libs__lp__V_49_49, (MR_Integer) 1)));
#line 532 "lp.m"
        {
#line 532 "lp.m"
          libs__lp__index_4_p_0(libs__lp__A0_4, libs__lp__HeadVar__3_46, libs__lp__Q_17, &libs__lp__CellVal_59);
        }
#line 742 "lp.m"
        libs__lp__V_83_83 = ((MR_Integer) (MR_hl_field(MR_mktag(0), libs__lp__A0_4, (MR_Integer) 0)));
#line 742 "lp.m"
        libs__lp__RHSC_60 = ((MR_Integer) (MR_hl_field(MR_mktag(0), libs__lp__A0_4, (MR_Integer) 1)));
#line 742 "lp.m"
        libs__lp__V_84_84 = ((MR_Word) (MR_hl_field(MR_mktag(0), libs__lp__A0_4, (MR_Integer) 2)));
#line 742 "lp.m"
        libs__lp__V_85_85 = ((MR_Word) (MR_hl_field(MR_mktag(0), libs__lp__A0_4, (MR_Integer) 3)));
#line 742 "lp.m"
        libs__lp__V_86_86 = ((MR_Word) (MR_hl_field(MR_mktag(0), libs__lp__A0_4, (MR_Integer) 4)));
#line 742 "lp.m"
        libs__lp__V_87_87 = ((MR_Word) (MR_hl_field(MR_mktag(0), libs__lp__A0_4, (MR_Integer) 5)));
#line 742 "lp.m"
        libs__lp__V_88_88 = ((MR_Word) (MR_hl_field(MR_mktag(0), libs__lp__A0_4, (MR_Integer) 6)));
#line 534 "lp.m"
        {
#line 534 "lp.m"
          libs__lp__index_4_p_0(libs__lp__A0_4, libs__lp__HeadVar__3_46, libs__lp__RHSC_60, &libs__lp__MVal_61);
        }
#line 536 "lp.m"
        libs__lp__succeeded = (libs__lp__CellVal_59 > ((MR_Float) 0.0000000000000000));
#line 536 "lp.m"
        if (libs__lp__succeeded)
#line 536 "lp.m"
          {
#line 537 "lp.m"
            {
#line 537 "lp.m"
              libs__lp__MaxVal1_30 = mercury__float__f_slash_2_f_0(libs__lp__MVal_61, libs__lp__CellVal_59);
            }
#line 538 "lp.m"
            libs__lp__succeeded = (libs__lp__MaxVal1_30 <= libs__lp__MaxVal0_29);
#line 536 "lp.m"
          }
#line 541 "lp.m"
        if (libs__lp__succeeded)
#line 540 "lp.m"
          {
#line 540 "lp.m"
            MR_Word libs__lp__V_51_51;

#line 540 "lp.m"
            {
#line 540 "lp.m"
              libs__lp__V_51_51 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 540 "lp.m"
              MR_hl_field(MR_mktag(0), libs__lp__V_51_51, 0) = ((MR_Box) (libs__lp__HeadVar__3_46));
#line 540 "lp.m"
              MR_hl_field(MR_mktag(0), libs__lp__V_51_51, 1) = MR_box_float(libs__lp__MaxVal1_30);
#line 540 "lp.m"
            }
#line 540 "lp.m"
            {
#line 540 "lp.m"
              MR_Word base;
#line 540 "lp.m"
              base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 540 "lp.m"
              *libs__lp__HeadVar__5_48 = base;
#line 540 "lp.m"
              MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (libs__lp__V_51_51));
#line 540 "lp.m"
            }
#line 540 "lp.m"
          }
#line 541 "lp.m"
        else
#line 542 "lp.m"
          *libs__lp__HeadVar__5_48 = libs__lp__HeadVar__4_47;
#line 531 "lp.m"
      }
#line 530 "lp.m"
  }
#line 530 "lp.m"
}

#line 500 "lp.m"
static void MR_CALL 
libs__lp__IntroducedFrom__pred__simplex__500__1_4_p_0(
#line 500 "lp.m"
  MR_Word libs__lp__A0_4,
#line 500 "lp.m"
  MR_Integer libs__lp__HeadVar__2_35,
#line 500 "lp.m"
  MR_Word libs__lp__HeadVar__3_36,
#line 500 "lp.m"
  MR_Word * libs__lp__HeadVar__4_37)
#line 500 "lp.m"
{
#line 500 "lp.m"
  {
#line 500 "lp.m"
    MR_bool libs__lp__succeeded;

#line 500 "lp.m"
    if ((libs__lp__HeadVar__3_36 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 493 "lp.m"
      {
#line 493 "lp.m"
        MR_Float libs__lp__MinVal_12;

#line 494 "lp.m"
        {
#line 494 "lp.m"
          libs__lp__index_4_p_0(libs__lp__A0_4, (MR_Integer) 0, libs__lp__HeadVar__2_35, &libs__lp__MinVal_12);
        }
#line 495 "lp.m"
        libs__lp__succeeded = (libs__lp__MinVal_12 < ((MR_Float) 0.0000000000000000));
#line 497 "lp.m"
        if (libs__lp__succeeded)
#line 496 "lp.m"
          {
#line 496 "lp.m"
            MR_Word libs__lp__V_43_43;

#line 496 "lp.m"
            {
#line 496 "lp.m"
              libs__lp__V_43_43 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 496 "lp.m"
              MR_hl_field(MR_mktag(0), libs__lp__V_43_43, 0) = ((MR_Box) (libs__lp__HeadVar__2_35));
#line 496 "lp.m"
              MR_hl_field(MR_mktag(0), libs__lp__V_43_43, 1) = MR_box_float(libs__lp__MinVal_12);
#line 496 "lp.m"
            }
#line 496 "lp.m"
            {
#line 496 "lp.m"
              MR_Word base;
#line 496 "lp.m"
              base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 496 "lp.m"
              *libs__lp__HeadVar__4_37 = base;
#line 496 "lp.m"
              MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (libs__lp__V_43_43));
#line 496 "lp.m"
            }
#line 496 "lp.m"
          }
#line 497 "lp.m"
        else
#line 498 "lp.m"
          *libs__lp__HeadVar__4_37 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 493 "lp.m"
      }
#line 500 "lp.m"
    else
#line 501 "lp.m"
      {
#line 501 "lp.m"
        MR_Float libs__lp__MinVal0_14;
#line 501 "lp.m"
        MR_Float libs__lp__CellVal_15;
#line 501 "lp.m"
        MR_Word libs__lp__V_38_38 = ((MR_Word) (MR_hl_field(MR_mktag(1), libs__lp__HeadVar__3_36, (MR_Integer) 0)));
#line 501 "lp.m"
        MR_Integer libs__lp__V_13_13 = ((MR_Integer) (MR_hl_field(MR_mktag(0), libs__lp__V_38_38, (MR_Integer) 0)));

#line 501 "lp.m"
        libs__lp__MinVal0_14 = MR_unbox_float((MR_hl_field(MR_mktag(0), libs__lp__V_38_38, (MR_Integer) 1)));
#line 502 "lp.m"
        {
#line 502 "lp.m"
          libs__lp__index_4_p_0(libs__lp__A0_4, (MR_Integer) 0, libs__lp__HeadVar__2_35, &libs__lp__CellVal_15);
        }
#line 503 "lp.m"
        libs__lp__succeeded = (libs__lp__CellVal_15 < libs__lp__MinVal0_14);
#line 505 "lp.m"
        if (libs__lp__succeeded)
#line 504 "lp.m"
          {
#line 504 "lp.m"
            MR_Word libs__lp__V_40_40;

#line 504 "lp.m"
            {
#line 504 "lp.m"
              libs__lp__V_40_40 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 504 "lp.m"
              MR_hl_field(MR_mktag(0), libs__lp__V_40_40, 0) = ((MR_Box) (libs__lp__HeadVar__2_35));
#line 504 "lp.m"
              MR_hl_field(MR_mktag(0), libs__lp__V_40_40, 1) = MR_box_float(libs__lp__CellVal_15);
#line 504 "lp.m"
            }
#line 504 "lp.m"
            {
#line 504 "lp.m"
              MR_Word base;
#line 504 "lp.m"
              base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 504 "lp.m"
              *libs__lp__HeadVar__4_37 = base;
#line 504 "lp.m"
              MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (libs__lp__V_40_40));
#line 504 "lp.m"
            }
#line 504 "lp.m"
          }
#line 505 "lp.m"
        else
#line 506 "lp.m"
          *libs__lp__HeadVar__4_37 = libs__lp__HeadVar__3_36;
#line 501 "lp.m"
      }
#line 500 "lp.m"
  }
#line 500 "lp.m"
}

#line 474 "lp.m"
static void MR_CALL 
libs__lp__IntroducedFrom__pred__extract_obj_var2__474__1_3_p_0_1(
#line 474 "lp.m"
  void * libs__lp__env_ptr_arg)
#line 474 "lp.m"
{
#line 474 "lp.m"
  {
#line 474 "lp.m"
    struct libs__lp__IntroducedFrom__pred__extract_obj_var2__474__1_3_p_0_env_0_s * libs__lp__env_ptr = (struct libs__lp__IntroducedFrom__pred__extract_obj_var2__474__1_3_p_0_env_0_s *) libs__lp__env_ptr_arg;

#line 474 "lp.m"
    {
#line 742 "lp.m"
      MR_Integer libs__lp__V_32_32;
#line 742 "lp.m"
      MR_Word libs__lp__V_33_33;
#line 742 "lp.m"
      MR_Word libs__lp__V_34_34;
#line 742 "lp.m"
      MR_Word libs__lp__V_35_35;
#line 742 "lp.m"
      MR_Word libs__lp__V_36_36;
#line 742 "lp.m"
      MR_Word libs__lp__V_37_37;

#line 756 "lp.m"
      {
#line 756 "lp.m"
        (libs__lp__env_ptr)->libs__lp__IntroducedFrom__pred__extract_obj_var2__474__1_3_p_0_env_0__succeeded = mercury__list__member_2_p_0((MR_Word) &mercury__builtin__builtin__type_ctor_info_int_0, ((MR_Box) ((libs__lp__env_ptr)->libs__lp__IntroducedFrom__pred__extract_obj_var2__474__1_3_p_0_env_0__Row_10)), (libs__lp__env_ptr)->libs__lp__IntroducedFrom__pred__extract_obj_var2__474__1_3_p_0_env_0__SR_26);
      }
#line 756 "lp.m"
      (libs__lp__env_ptr)->libs__lp__IntroducedFrom__pred__extract_obj_var2__474__1_3_p_0_env_0__succeeded = !((libs__lp__env_ptr)->libs__lp__IntroducedFrom__pred__extract_obj_var2__474__1_3_p_0_env_0__succeeded);
#line 474 "lp.m"
      if ((libs__lp__env_ptr)->libs__lp__IntroducedFrom__pred__extract_obj_var2__474__1_3_p_0_env_0__succeeded)
#line 474 "lp.m"
        {
#line 476 "lp.m"
          (libs__lp__env_ptr)->libs__lp__IntroducedFrom__pred__extract_obj_var2__474__1_3_p_0_env_0__V_15_15 = (MR_Float) 1.0000000000000000;
#line 476 "lp.m"
          {
#line 476 "lp.m"
            libs__lp__index_4_p_0((libs__lp__env_ptr)->libs__lp__IntroducedFrom__pred__extract_obj_var2__474__1_3_p_0_env_0__Tab_4, (libs__lp__env_ptr)->libs__lp__IntroducedFrom__pred__extract_obj_var2__474__1_3_p_0_env_0__Row_10, (libs__lp__env_ptr)->libs__lp__IntroducedFrom__pred__extract_obj_var2__474__1_3_p_0_env_0__Col_7, &(libs__lp__env_ptr)->libs__lp__IntroducedFrom__pred__extract_obj_var2__474__1_3_p_0_env_0__V_19_19);
          }
#line 476 "lp.m"
          (libs__lp__env_ptr)->libs__lp__IntroducedFrom__pred__extract_obj_var2__474__1_3_p_0_env_0__succeeded = (((libs__lp__env_ptr)->libs__lp__IntroducedFrom__pred__extract_obj_var2__474__1_3_p_0_env_0__V_15_15) == ((libs__lp__env_ptr)->libs__lp__IntroducedFrom__pred__extract_obj_var2__474__1_3_p_0_env_0__V_19_19));
#line 474 "lp.m"
          if ((libs__lp__env_ptr)->libs__lp__IntroducedFrom__pred__extract_obj_var2__474__1_3_p_0_env_0__succeeded)
#line 474 "lp.m"
            {
#line 742 "lp.m"
              libs__lp__V_32_32 = ((MR_Integer) (MR_hl_field(MR_mktag(0), (libs__lp__env_ptr)->libs__lp__IntroducedFrom__pred__extract_obj_var2__474__1_3_p_0_env_0__Tab_4, (MR_Integer) 0)));
#line 742 "lp.m"
              (libs__lp__env_ptr)->libs__lp__IntroducedFrom__pred__extract_obj_var2__474__1_3_p_0_env_0__RHS_11 = ((MR_Integer) (MR_hl_field(MR_mktag(0), (libs__lp__env_ptr)->libs__lp__IntroducedFrom__pred__extract_obj_var2__474__1_3_p_0_env_0__Tab_4, (MR_Integer) 1)));
#line 742 "lp.m"
              libs__lp__V_33_33 = ((MR_Word) (MR_hl_field(MR_mktag(0), (libs__lp__env_ptr)->libs__lp__IntroducedFrom__pred__extract_obj_var2__474__1_3_p_0_env_0__Tab_4, (MR_Integer) 2)));
#line 742 "lp.m"
              libs__lp__V_34_34 = ((MR_Word) (MR_hl_field(MR_mktag(0), (libs__lp__env_ptr)->libs__lp__IntroducedFrom__pred__extract_obj_var2__474__1_3_p_0_env_0__Tab_4, (MR_Integer) 3)));
#line 742 "lp.m"
              libs__lp__V_35_35 = ((MR_Word) (MR_hl_field(MR_mktag(0), (libs__lp__env_ptr)->libs__lp__IntroducedFrom__pred__extract_obj_var2__474__1_3_p_0_env_0__Tab_4, (MR_Integer) 4)));
#line 742 "lp.m"
              libs__lp__V_36_36 = ((MR_Word) (MR_hl_field(MR_mktag(0), (libs__lp__env_ptr)->libs__lp__IntroducedFrom__pred__extract_obj_var2__474__1_3_p_0_env_0__Tab_4, (MR_Integer) 5)));
#line 742 "lp.m"
              libs__lp__V_37_37 = ((MR_Word) (MR_hl_field(MR_mktag(0), (libs__lp__env_ptr)->libs__lp__IntroducedFrom__pred__extract_obj_var2__474__1_3_p_0_env_0__Tab_4, (MR_Integer) 6)));
#line 478 "lp.m"
              {
#line 478 "lp.m"
                libs__lp__index_4_p_0((libs__lp__env_ptr)->libs__lp__IntroducedFrom__pred__extract_obj_var2__474__1_3_p_0_env_0__Tab_4, (libs__lp__env_ptr)->libs__lp__IntroducedFrom__pred__extract_obj_var2__474__1_3_p_0_env_0__Row_10, (libs__lp__env_ptr)->libs__lp__IntroducedFrom__pred__extract_obj_var2__474__1_3_p_0_env_0__RHS_11, (libs__lp__env_ptr)->libs__lp__IntroducedFrom__pred__extract_obj_var2__474__1_3_p_0_env_0__HeadVar__3_14);
              }
#line 478 "lp.m"
              {
#line 478 "lp.m"
                ((libs__lp__env_ptr)->libs__lp__IntroducedFrom__pred__extract_obj_var2__474__1_3_p_0_env_0__cont)((libs__lp__env_ptr)->libs__lp__IntroducedFrom__pred__extract_obj_var2__474__1_3_p_0_env_0__cont_env_ptr);
#line 478 "lp.m"
                return;
              }
#line 474 "lp.m"
            }
#line 474 "lp.m"
        }
#line 474 "lp.m"
    }
#line 474 "lp.m"
  }
#line 474 "lp.m"
}

#line 474 "lp.m"
static void MR_CALL 
libs__lp__IntroducedFrom__pred__extract_obj_var2__474__1_3_p_0(
#line 474 "lp.m"
  MR_Word libs__lp__Tab_4,
#line 474 "lp.m"
  MR_Integer libs__lp__Col_7,
#line 474 "lp.m"
  MR_Float * libs__lp__HeadVar__3_14,
#line 474 "lp.m"
  MR_Cont libs__lp__cont,
#line 474 "lp.m"
  void * libs__lp__cont_env_ptr)
#line 474 "lp.m"
{
#line 474 "lp.m"
  {
#line 474 "lp.m"
    struct libs__lp__IntroducedFrom__pred__extract_obj_var2__474__1_3_p_0_env_0_s libs__lp__env;

#line 474 "lp.m"
    (libs__lp__env).libs__lp__IntroducedFrom__pred__extract_obj_var2__474__1_3_p_0_env_0__Tab_4 = libs__lp__Tab_4;
#line 474 "lp.m"
    (libs__lp__env).libs__lp__IntroducedFrom__pred__extract_obj_var2__474__1_3_p_0_env_0__Col_7 = libs__lp__Col_7;
#line 474 "lp.m"
    (libs__lp__env).libs__lp__IntroducedFrom__pred__extract_obj_var2__474__1_3_p_0_env_0__HeadVar__3_14 = libs__lp__HeadVar__3_14;
#line 474 "lp.m"
    (libs__lp__env).libs__lp__IntroducedFrom__pred__extract_obj_var2__474__1_3_p_0_env_0__cont = libs__lp__cont;
#line 474 "lp.m"
    (libs__lp__env).libs__lp__IntroducedFrom__pred__extract_obj_var2__474__1_3_p_0_env_0__cont_env_ptr = libs__lp__cont_env_ptr;
#line 474 "lp.m"
    {
#line 474 "lp.m"
      MR_Integer libs__lp__Rows_22 = ((MR_Integer) (MR_hl_field(MR_mktag(0), (libs__lp__env).libs__lp__IntroducedFrom__pred__extract_obj_var2__474__1_3_p_0_env_0__Tab_4, (MR_Integer) 0)));
#line 754 "lp.m"
      MR_Integer libs__lp___Cols_23 = ((MR_Integer) (MR_hl_field(MR_mktag(0), (libs__lp__env).libs__lp__IntroducedFrom__pred__extract_obj_var2__474__1_3_p_0_env_0__Tab_4, (MR_Integer) 1)));
#line 754 "lp.m"
      MR_Word libs__lp__V_24_24 = ((MR_Word) (MR_hl_field(MR_mktag(0), (libs__lp__env).libs__lp__IntroducedFrom__pred__extract_obj_var2__474__1_3_p_0_env_0__Tab_4, (MR_Integer) 2)));
#line 754 "lp.m"
      MR_Word libs__lp__V_25_25 = ((MR_Word) (MR_hl_field(MR_mktag(0), (libs__lp__env).libs__lp__IntroducedFrom__pred__extract_obj_var2__474__1_3_p_0_env_0__Tab_4, (MR_Integer) 3)));
#line 754 "lp.m"
      MR_Word libs__lp__V_27_27;
#line 754 "lp.m"
      MR_Word libs__lp__V_28_28;

#line 754 "lp.m"
      (libs__lp__env).libs__lp__IntroducedFrom__pred__extract_obj_var2__474__1_3_p_0_env_0__SR_26 = ((MR_Word) (MR_hl_field(MR_mktag(0), (libs__lp__env).libs__lp__IntroducedFrom__pred__extract_obj_var2__474__1_3_p_0_env_0__Tab_4, (MR_Integer) 4)));
#line 754 "lp.m"
      libs__lp__V_27_27 = ((MR_Word) (MR_hl_field(MR_mktag(0), (libs__lp__env).libs__lp__IntroducedFrom__pred__extract_obj_var2__474__1_3_p_0_env_0__Tab_4, (MR_Integer) 5)));
#line 754 "lp.m"
      libs__lp__V_28_28 = ((MR_Word) (MR_hl_field(MR_mktag(0), (libs__lp__env).libs__lp__IntroducedFrom__pred__extract_obj_var2__474__1_3_p_0_env_0__Tab_4, (MR_Integer) 6)));
#line 755 "lp.m"
      {
#line 755 "lp.m"
        libs__lp__between_3_p_0((MR_Integer) 1, libs__lp__Rows_22, &(libs__lp__env).libs__lp__IntroducedFrom__pred__extract_obj_var2__474__1_3_p_0_env_0__Row_10, libs__lp__IntroducedFrom__pred__extract_obj_var2__474__1_3_p_0_1, &libs__lp__env);
      }
#line 474 "lp.m"
    }
#line 474 "lp.m"
  }
#line 474 "lp.m"
}

#line 392 "lp.m"
static void MR_CALL 
libs__lp__IntroducedFrom__pred__collect_vars__396__1_3_p_0_2(
#line 392 "lp.m"
  void * libs__lp__env_ptr_arg)
#line 392 "lp.m"
{
#line 392 "lp.m"
  {
#line 392 "lp.m"
    struct libs__lp__IntroducedFrom__pred__collect_vars__396__1_3_p_0_env_0_s * libs__lp__env_ptr = (struct libs__lp__IntroducedFrom__pred__collect_vars__396__1_3_p_0_env_0_s *) libs__lp__env_ptr_arg;

#line 392 "lp.m"
    (libs__lp__env_ptr)->libs__lp__IntroducedFrom__pred__collect_vars__396__1_3_p_0_env_0__Eqn_9 = ((MR_Word) (libs__lp__env_ptr)->libs__lp__IntroducedFrom__pred__collect_vars__396__1_3_p_0_env_0__conv0_Eqn_9);
#line 392 "lp.m"
    {
#line 392 "lp.m"
      libs__lp__IntroducedFrom__pred__collect_vars__396__1_3_p_0_1(libs__lp__env_ptr);
#line 392 "lp.m"
      return;
    }
#line 392 "lp.m"
  }
#line 392 "lp.m"
}

#line 394 "lp.m"
static void MR_CALL 
libs__lp__IntroducedFrom__pred__collect_vars__396__1_3_p_0_4(
#line 394 "lp.m"
  void * libs__lp__env_ptr_arg)
#line 394 "lp.m"
{
#line 394 "lp.m"
  {
#line 394 "lp.m"
    struct libs__lp__IntroducedFrom__pred__collect_vars__396__1_3_p_0_env_0_s * libs__lp__env_ptr = (struct libs__lp__IntroducedFrom__pred__collect_vars__396__1_3_p_0_env_0_s *) libs__lp__env_ptr_arg;

#line 394 "lp.m"
    (libs__lp__env_ptr)->libs__lp__IntroducedFrom__pred__collect_vars__396__1_3_p_0_env_0__Pair_13 = ((MR_Word) (libs__lp__env_ptr)->libs__lp__IntroducedFrom__pred__collect_vars__396__1_3_p_0_env_0__conv1_Pair_13);
#line 394 "lp.m"
    {
#line 394 "lp.m"
      libs__lp__IntroducedFrom__pred__collect_vars__396__1_3_p_0_3(libs__lp__env_ptr);
#line 394 "lp.m"
      return;
    }
#line 394 "lp.m"
  }
#line 394 "lp.m"
}

#line 392 "lp.m"
static void MR_CALL 
libs__lp__IntroducedFrom__pred__collect_vars__396__1_3_p_0_3(
#line 392 "lp.m"
  void * libs__lp__env_ptr_arg)
#line 392 "lp.m"
{
#line 392 "lp.m"
  {
#line 392 "lp.m"
    struct libs__lp__IntroducedFrom__pred__collect_vars__396__1_3_p_0_env_0_s * libs__lp__env_ptr = (struct libs__lp__IntroducedFrom__pred__collect_vars__396__1_3_p_0_env_0_s *) libs__lp__env_ptr_arg;

#line 392 "lp.m"
    {
#line 395 "lp.m"
      MR_Float libs__lp__V_14_14;

#line 395 "lp.m"
      *((libs__lp__env_ptr)->libs__lp__IntroducedFrom__pred__collect_vars__396__1_3_p_0_env_0__HeadVar__3_17) = ((MR_Word) (MR_hl_field(MR_mktag(0), (libs__lp__env_ptr)->libs__lp__IntroducedFrom__pred__collect_vars__396__1_3_p_0_env_0__Pair_13, (MR_Integer) 0)));
#line 395 "lp.m"
      libs__lp__V_14_14 = MR_unbox_float((MR_hl_field(MR_mktag(0), (libs__lp__env_ptr)->libs__lp__IntroducedFrom__pred__collect_vars__396__1_3_p_0_env_0__Pair_13, (MR_Integer) 1)));
#line 395 "lp.m"
      {
#line 395 "lp.m"
        ((libs__lp__env_ptr)->libs__lp__IntroducedFrom__pred__collect_vars__396__1_3_p_0_env_0__cont)((libs__lp__env_ptr)->libs__lp__IntroducedFrom__pred__collect_vars__396__1_3_p_0_env_0__cont_env_ptr);
#line 395 "lp.m"
        return;
      }
#line 392 "lp.m"
    }
#line 392 "lp.m"
  }
#line 392 "lp.m"
}

#line 392 "lp.m"
static void MR_CALL 
libs__lp__IntroducedFrom__pred__collect_vars__396__1_3_p_0_1(
#line 392 "lp.m"
  void * libs__lp__env_ptr_arg)
#line 392 "lp.m"
{
#line 392 "lp.m"
  {
#line 392 "lp.m"
    struct libs__lp__IntroducedFrom__pred__collect_vars__396__1_3_p_0_env_0_s * libs__lp__env_ptr = (struct libs__lp__IntroducedFrom__pred__collect_vars__396__1_3_p_0_env_0_s *) libs__lp__env_ptr_arg;

#line 392 "lp.m"
    {
#line 393 "lp.m"
      MR_Word libs__lp__V_11_11;
#line 393 "lp.m"
      MR_Float libs__lp__V_12_12;

#line 393 "lp.m"
      (libs__lp__env_ptr)->libs__lp__IntroducedFrom__pred__collect_vars__396__1_3_p_0_env_0__Coeffs_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), (libs__lp__env_ptr)->libs__lp__IntroducedFrom__pred__collect_vars__396__1_3_p_0_env_0__Eqn_9, (MR_Integer) 0)));
#line 393 "lp.m"
      libs__lp__V_11_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), (libs__lp__env_ptr)->libs__lp__IntroducedFrom__pred__collect_vars__396__1_3_p_0_env_0__Eqn_9, (MR_Integer) 1)));
#line 393 "lp.m"
      libs__lp__V_12_12 = MR_unbox_float((MR_hl_field(MR_mktag(0), (libs__lp__env_ptr)->libs__lp__IntroducedFrom__pred__collect_vars__396__1_3_p_0_env_0__Eqn_9, (MR_Integer) 2)));
#line 5906 "libs.lp.c"
      (libs__lp__env_ptr)->libs__lp__IntroducedFrom__pred__collect_vars__396__1_3_p_0_env_0__TypeInfo_21_21 = (MR_Word) &libs__lp_scalar_common_2[0];
#line 394 "lp.m"
      {
#line 394 "lp.m"
        mercury__list__member_2_p_1((libs__lp__env_ptr)->libs__lp__IntroducedFrom__pred__collect_vars__396__1_3_p_0_env_0__TypeInfo_21_21, &(libs__lp__env_ptr)->libs__lp__IntroducedFrom__pred__collect_vars__396__1_3_p_0_env_0__conv1_Pair_13, (libs__lp__env_ptr)->libs__lp__IntroducedFrom__pred__collect_vars__396__1_3_p_0_env_0__Coeffs_10, libs__lp__IntroducedFrom__pred__collect_vars__396__1_3_p_0_4, libs__lp__env_ptr);
      }
#line 392 "lp.m"
    }
#line 392 "lp.m"
  }
#line 392 "lp.m"
}

#line 397 "lp.m"
static void MR_CALL 
libs__lp__IntroducedFrom__pred__collect_vars__396__1_3_p_0_6(
#line 397 "lp.m"
  void * libs__lp__env_ptr_arg)
#line 397 "lp.m"
{
#line 397 "lp.m"
  {
#line 397 "lp.m"
    struct libs__lp__IntroducedFrom__pred__collect_vars__396__1_3_p_0_env_0_s * libs__lp__env_ptr = (struct libs__lp__IntroducedFrom__pred__collect_vars__396__1_3_p_0_env_0_s *) libs__lp__env_ptr_arg;

#line 397 "lp.m"
    (libs__lp__env_ptr)->libs__lp__IntroducedFrom__pred__collect_vars__396__1_3_p_0_env_0__Pair_18 = ((MR_Word) (libs__lp__env_ptr)->libs__lp__IntroducedFrom__pred__collect_vars__396__1_3_p_0_env_0__conv2_Pair_18);
#line 397 "lp.m"
    {
#line 397 "lp.m"
      libs__lp__IntroducedFrom__pred__collect_vars__396__1_3_p_0_5(libs__lp__env_ptr);
#line 397 "lp.m"
      return;
    }
#line 397 "lp.m"
  }
#line 397 "lp.m"
}

#line 397 "lp.m"
static void MR_CALL 
libs__lp__IntroducedFrom__pred__collect_vars__396__1_3_p_0_5(
#line 397 "lp.m"
  void * libs__lp__env_ptr_arg)
#line 397 "lp.m"
{
#line 397 "lp.m"
  {
#line 397 "lp.m"
    struct libs__lp__IntroducedFrom__pred__collect_vars__396__1_3_p_0_env_0_s * libs__lp__env_ptr = (struct libs__lp__IntroducedFrom__pred__collect_vars__396__1_3_p_0_env_0_s *) libs__lp__env_ptr_arg;

#line 397 "lp.m"
    {
#line 398 "lp.m"
      MR_Float libs__lp__V_15_15;

#line 398 "lp.m"
      *((libs__lp__env_ptr)->libs__lp__IntroducedFrom__pred__collect_vars__396__1_3_p_0_env_0__HeadVar__3_17) = ((MR_Word) (MR_hl_field(MR_mktag(0), (libs__lp__env_ptr)->libs__lp__IntroducedFrom__pred__collect_vars__396__1_3_p_0_env_0__Pair_18, (MR_Integer) 0)));
#line 398 "lp.m"
      libs__lp__V_15_15 = MR_unbox_float((MR_hl_field(MR_mktag(0), (libs__lp__env_ptr)->libs__lp__IntroducedFrom__pred__collect_vars__396__1_3_p_0_env_0__Pair_18, (MR_Integer) 1)));
#line 398 "lp.m"
      {
#line 398 "lp.m"
        ((libs__lp__env_ptr)->libs__lp__IntroducedFrom__pred__collect_vars__396__1_3_p_0_env_0__cont)((libs__lp__env_ptr)->libs__lp__IntroducedFrom__pred__collect_vars__396__1_3_p_0_env_0__cont_env_ptr);
#line 398 "lp.m"
        return;
      }
#line 397 "lp.m"
    }
#line 397 "lp.m"
  }
#line 397 "lp.m"
}

#line 396 "lp.m"
static void MR_CALL 
libs__lp__IntroducedFrom__pred__collect_vars__396__1_3_p_0(
#line 396 "lp.m"
  MR_Word libs__lp__Eqns_4,
#line 396 "lp.m"
  MR_Word libs__lp__Obj_5,
#line 396 "lp.m"
  MR_Word * libs__lp__HeadVar__3_17,
#line 396 "lp.m"
  MR_Cont libs__lp__cont,
#line 396 "lp.m"
  void * libs__lp__cont_env_ptr)
#line 396 "lp.m"
{
#line 396 "lp.m"
  {
#line 396 "lp.m"
    struct libs__lp__IntroducedFrom__pred__collect_vars__396__1_3_p_0_env_0_s libs__lp__env;

#line 396 "lp.m"
    (libs__lp__env).libs__lp__IntroducedFrom__pred__collect_vars__396__1_3_p_0_env_0__HeadVar__3_17 = libs__lp__HeadVar__3_17;
#line 396 "lp.m"
    (libs__lp__env).libs__lp__IntroducedFrom__pred__collect_vars__396__1_3_p_0_env_0__cont = libs__lp__cont;
#line 396 "lp.m"
    (libs__lp__env).libs__lp__IntroducedFrom__pred__collect_vars__396__1_3_p_0_env_0__cont_env_ptr = libs__lp__cont_env_ptr;
#line 396 "lp.m"
    {
#line 396 "lp.m"
      MR_bool libs__lp__succeeded;

#line 392 "lp.m"
      {
#line 392 "lp.m"
        mercury__list__member_2_p_1((MR_Word) &libs__lp__libs__lp__type_ctor_info_equation_0, &(libs__lp__env).libs__lp__IntroducedFrom__pred__collect_vars__396__1_3_p_0_env_0__conv0_Eqn_9, libs__lp__Eqns_4, libs__lp__IntroducedFrom__pred__collect_vars__396__1_3_p_0_2, &libs__lp__env);
      }
#line 397 "lp.m"
      {
#line 397 "lp.m"
        mercury__list__member_2_p_1((MR_Word) &libs__lp_scalar_common_2[0], &(libs__lp__env).libs__lp__IntroducedFrom__pred__collect_vars__396__1_3_p_0_env_0__conv2_Pair_18, libs__lp__Obj_5, libs__lp__IntroducedFrom__pred__collect_vars__396__1_3_p_0_6, &libs__lp__env);
      }
#line 396 "lp.m"
    }
#line 396 "lp.m"
  }
#line 396 "lp.m"
}

#line 340 "lp.m"
static void MR_CALL 
libs__lp__IntroducedFrom__pred__simplify_coeffs__340__1_3_p_0(
#line 340 "lp.m"
  MR_Word libs__lp__HeadVar__1_13,
#line 340 "lp.m"
  MR_Word libs__lp__HeadVar__2_14,
#line 340 "lp.m"
  MR_Word * libs__lp__HeadVar__3_15)
#line 340 "lp.m"
{
#line 340 "lp.m"
  {
#line 340 "lp.m"
    MR_bool libs__lp__succeeded;
#line 340 "lp.m"
    MR_Word libs__lp__Var_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), libs__lp__HeadVar__1_13, (MR_Integer) 0)));
#line 340 "lp.m"
    MR_Float libs__lp__Coeff_11 = MR_unbox_float((MR_hl_field(MR_mktag(0), libs__lp__HeadVar__1_13, (MR_Integer) 1)));
#line 340 "lp.m"
    MR_Float libs__lp__Acc1_29;
#line 340 "lp.m"
    MR_Float libs__lp__Acc_30;
#line 353 "lp.m"
    MR_Float libs__lp__Acc0_28;
#line 351 "lp.m"
    MR_Box libs__lp__conv0_Acc0_28;

#line 351 "lp.m"
    {
#line 351 "lp.m"
      libs__lp__succeeded = mercury__map__search_3_p_0((MR_Word) &libs__lp_scalar_common_1[0], (MR_Word) &mercury__builtin__builtin__type_ctor_info_float_0, libs__lp__HeadVar__2_14, ((MR_Box) (libs__lp__Var_10)), &libs__lp__conv0_Acc0_28);
    }
#line 351 "lp.m"
    if (libs__lp__succeeded)
#line 351 "lp.m"
      {
#line 351 "lp.m"
        libs__lp__Acc0_28 = MR_unbox_float(libs__lp__conv0_Acc0_28);
#line 351 "lp.m"
        libs__lp__succeeded = MR_TRUE;
#line 351 "lp.m"
      }
#line 353 "lp.m"
    if (libs__lp__succeeded)
#line 352 "lp.m"
      libs__lp__Acc1_29 = libs__lp__Acc0_28;
#line 353 "lp.m"
    else
#line 354 "lp.m"
      libs__lp__Acc1_29 = (MR_Float) 0.0000000000000000;
#line 356 "lp.m"
    libs__lp__Acc_30 = (libs__lp__Acc1_29 + libs__lp__Coeff_11);
#line 357 "lp.m"
    {
#line 357 "lp.m"
      mercury__map__set_4_p_0((MR_Word) &libs__lp_scalar_common_1[0], (MR_Word) &mercury__builtin__builtin__type_ctor_info_float_0, ((MR_Box) (libs__lp__Var_10)), MR_box_float(libs__lp__Acc_30), libs__lp__HeadVar__2_14, libs__lp__HeadVar__3_15);
#line 357 "lp.m"
      return;
    }
#line 340 "lp.m"
  }
#line 340 "lp.m"
}

#line 328 "lp.m"
static MR_Word MR_CALL 
libs__lp__IntroducedFrom__func__negate_equation__328__1_1_f_0(
#line 328 "lp.m"
  MR_Word libs__lp__HeadVar__1_12)
#line 328 "lp.m"
{
#line 328 "lp.m"
  {
#line 328 "lp.m"
    MR_bool libs__lp__succeeded;
#line 328 "lp.m"
    MR_Word libs__lp__HeadVar__2_13;
#line 328 "lp.m"
    MR_Float libs__lp__V_14_14;
#line 328 "lp.m"
    MR_Word libs__lp__V_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), libs__lp__HeadVar__1_12, (MR_Integer) 0)));
#line 328 "lp.m"
    MR_Float libs__lp__X_16 = MR_unbox_float((MR_hl_field(MR_mktag(0), libs__lp__HeadVar__1_12, (MR_Integer) 1)));

#line 328 "lp.m"
    libs__lp__V_14_14 = (((MR_Float) 0.0000000000000000) - libs__lp__X_16);
#line 328 "lp.m"
    {
#line 328 "lp.m"
      libs__lp__HeadVar__2_13 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 328 "lp.m"
      MR_hl_field(MR_mktag(0), libs__lp__HeadVar__2_13, 0) = ((MR_Box) (libs__lp__V_15));
#line 328 "lp.m"
      MR_hl_field(MR_mktag(0), libs__lp__HeadVar__2_13, 1) = MR_box_float(libs__lp__V_14_14);
#line 328 "lp.m"
    }
#line 328 "lp.m"
    return libs__lp__HeadVar__2_13;
#line 328 "lp.m"
  }
#line 328 "lp.m"
}

#line 684 "lp.m"
static void MR_CALL 
libs__lp____Compare____tableau_0_0(
#line 684 "lp.m"
  MR_Word * libs__lp__HeadVar__1_1,
#line 684 "lp.m"
  MR_Word libs__lp__HeadVar__2_2,
#line 684 "lp.m"
  MR_Word libs__lp__HeadVar__3_3)
#line 684 "lp.m"
{
#line 684 "lp.m"
  {
#line 684 "lp.m"
    MR_bool libs__lp__succeeded;
#line 684 "lp.m"
    MR_Integer libs__lp__CastX_24 = (MR_Integer) libs__lp__HeadVar__2_2;
#line 684 "lp.m"
    MR_Integer libs__lp__CastY_25 = (MR_Integer) libs__lp__HeadVar__3_3;

#line 684 "lp.m"
    libs__lp__succeeded = (libs__lp__CastX_24 == libs__lp__CastY_25);
#line 684 "lp.m"
    if (libs__lp__succeeded)
#line 6157 "libs.lp.c"
      *libs__lp__HeadVar__1_1 = (MR_Integer) 0;
#line 684 "lp.m"
    else
#line 684 "lp.m"
      {
#line 684 "lp.m"
        MR_Integer libs__lp__V_4_4 = ((MR_Integer) (MR_hl_field(MR_mktag(0), libs__lp__HeadVar__2_2, (MR_Integer) 0)));
#line 684 "lp.m"
        MR_Integer libs__lp__V_5_5 = ((MR_Integer) (MR_hl_field(MR_mktag(0), libs__lp__HeadVar__2_2, (MR_Integer) 1)));
#line 684 "lp.m"
        MR_Word libs__lp__V_6_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), libs__lp__HeadVar__2_2, (MR_Integer) 2)));
#line 684 "lp.m"
        MR_Word libs__lp__V_7_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), libs__lp__HeadVar__2_2, (MR_Integer) 3)));
#line 684 "lp.m"
        MR_Word libs__lp__V_8_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), libs__lp__HeadVar__2_2, (MR_Integer) 4)));
#line 684 "lp.m"
        MR_Word libs__lp__V_9_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), libs__lp__HeadVar__2_2, (MR_Integer) 5)));
#line 684 "lp.m"
        MR_Word libs__lp__V_10_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), libs__lp__HeadVar__2_2, (MR_Integer) 6)));
#line 684 "lp.m"
        MR_Integer libs__lp__V_11_11 = ((MR_Integer) (MR_hl_field(MR_mktag(0), libs__lp__HeadVar__3_3, (MR_Integer) 0)));
#line 684 "lp.m"
        MR_Integer libs__lp__V_12_12 = ((MR_Integer) (MR_hl_field(MR_mktag(0), libs__lp__HeadVar__3_3, (MR_Integer) 1)));
#line 684 "lp.m"
        MR_Word libs__lp__V_13_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), libs__lp__HeadVar__3_3, (MR_Integer) 2)));
#line 684 "lp.m"
        MR_Word libs__lp__V_14_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), libs__lp__HeadVar__3_3, (MR_Integer) 3)));
#line 684 "lp.m"
        MR_Word libs__lp__V_15_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), libs__lp__HeadVar__3_3, (MR_Integer) 4)));
#line 684 "lp.m"
        MR_Word libs__lp__V_16_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), libs__lp__HeadVar__3_3, (MR_Integer) 5)));
#line 684 "lp.m"
        MR_Word libs__lp__V_17_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), libs__lp__HeadVar__3_3, (MR_Integer) 6)));
#line 684 "lp.m"
        MR_Word libs__lp__V_18_18;

#line 684 "lp.m"
        {
#line 684 "lp.m"
          mercury__private_builtin__builtin_compare_int_3_p_0(&libs__lp__V_18_18, libs__lp__V_4_4, libs__lp__V_11_11);
        }
#line 6199 "libs.lp.c"
        libs__lp__succeeded = (libs__lp__V_18_18 == (MR_Integer) 0);
#line 684 "lp.m"
        libs__lp__succeeded = !(libs__lp__succeeded);
#line 684 "lp.m"
        if (libs__lp__succeeded)
#line 684 "lp.m"
          *libs__lp__HeadVar__1_1 = libs__lp__V_18_18;
#line 684 "lp.m"
        else
#line 684 "lp.m"
          {
#line 684 "lp.m"
            MR_Word libs__lp__V_19_19;

#line 684 "lp.m"
            {
#line 684 "lp.m"
              mercury__private_builtin__builtin_compare_int_3_p_0(&libs__lp__V_19_19, libs__lp__V_5_5, libs__lp__V_12_12);
            }
#line 6219 "libs.lp.c"
            libs__lp__succeeded = (libs__lp__V_19_19 == (MR_Integer) 0);
#line 684 "lp.m"
            libs__lp__succeeded = !(libs__lp__succeeded);
#line 684 "lp.m"
            if (libs__lp__succeeded)
#line 684 "lp.m"
              *libs__lp__HeadVar__1_1 = libs__lp__V_19_19;
#line 684 "lp.m"
            else
#line 684 "lp.m"
              {
#line 684 "lp.m"
                MR_Word libs__lp__V_20_20;

#line 684 "lp.m"
                {
#line 684 "lp.m"
                  mercury__builtin__compare_3_p_0((MR_Word) &libs__lp_scalar_common_2[8], &libs__lp__V_20_20, ((MR_Box) (libs__lp__V_6_6)), ((MR_Box) (libs__lp__V_13_13)));
                }
#line 6239 "libs.lp.c"
                libs__lp__succeeded = (libs__lp__V_20_20 == (MR_Integer) 0);
#line 684 "lp.m"
                libs__lp__succeeded = !(libs__lp__succeeded);
#line 684 "lp.m"
                if (libs__lp__succeeded)
#line 684 "lp.m"
                  *libs__lp__HeadVar__1_1 = libs__lp__V_20_20;
#line 684 "lp.m"
                else
#line 684 "lp.m"
                  {
#line 684 "lp.m"
                    MR_Word libs__lp__V_21_21;

#line 684 "lp.m"
                    {
#line 684 "lp.m"
                      mercury__builtin__compare_3_p_0((MR_Word) &libs__lp_scalar_common_2[6], &libs__lp__V_21_21, ((MR_Box) (libs__lp__V_7_7)), ((MR_Box) (libs__lp__V_14_14)));
                    }
#line 6259 "libs.lp.c"
                    libs__lp__succeeded = (libs__lp__V_21_21 == (MR_Integer) 0);
#line 684 "lp.m"
                    libs__lp__succeeded = !(libs__lp__succeeded);
#line 684 "lp.m"
                    if (libs__lp__succeeded)
#line 684 "lp.m"
                      *libs__lp__HeadVar__1_1 = libs__lp__V_21_21;
#line 684 "lp.m"
                    else
#line 684 "lp.m"
                      {
#line 684 "lp.m"
                        MR_Word libs__lp__V_22_22;

#line 684 "lp.m"
                        {
#line 684 "lp.m"
                          mercury__builtin__compare_3_p_0((MR_Word) &libs__lp_scalar_common_1[7], &libs__lp__V_22_22, ((MR_Box) (libs__lp__V_8_8)), ((MR_Box) (libs__lp__V_15_15)));
                        }
#line 6279 "libs.lp.c"
                        libs__lp__succeeded = (libs__lp__V_22_22 == (MR_Integer) 0);
#line 684 "lp.m"
                        libs__lp__succeeded = !(libs__lp__succeeded);
#line 684 "lp.m"
                        if (libs__lp__succeeded)
#line 684 "lp.m"
                          *libs__lp__HeadVar__1_1 = libs__lp__V_22_22;
#line 684 "lp.m"
                        else
#line 684 "lp.m"
                          {
#line 684 "lp.m"
                            MR_Word libs__lp__V_23_23;

#line 684 "lp.m"
                            {
#line 684 "lp.m"
                              mercury__builtin__compare_3_p_0((MR_Word) &libs__lp_scalar_common_1[7], &libs__lp__V_23_23, ((MR_Box) (libs__lp__V_9_9)), ((MR_Box) (libs__lp__V_16_16)));
                            }
#line 6299 "libs.lp.c"
                            libs__lp__succeeded = (libs__lp__V_23_23 == (MR_Integer) 0);
#line 684 "lp.m"
                            libs__lp__succeeded = !(libs__lp__succeeded);
#line 684 "lp.m"
                            if (libs__lp__succeeded)
#line 684 "lp.m"
                              *libs__lp__HeadVar__1_1 = libs__lp__V_23_23;
#line 684 "lp.m"
                            else
#line 684 "lp.m"
                              {
#line 684 "lp.m"
                                {
#line 684 "lp.m"
                                  mercury__builtin__compare_3_p_0((MR_Word) &libs__lp_scalar_common_2[9], libs__lp__HeadVar__1_1, ((MR_Box) (libs__lp__V_10_10)), ((MR_Box) (libs__lp__V_17_17)));
#line 684 "lp.m"
                                  return;
                                }
#line 684 "lp.m"
                              }
#line 684 "lp.m"
                          }
#line 684 "lp.m"
                      }
#line 684 "lp.m"
                  }
#line 684 "lp.m"
              }
#line 684 "lp.m"
          }
#line 684 "lp.m"
      }
#line 684 "lp.m"
  }
#line 684 "lp.m"
}

#line 684 "lp.m"
static MR_bool MR_CALL 
libs__lp____Unify____tableau_0_0(
#line 684 "lp.m"
  MR_Word libs__lp__HeadVar__1_1,
#line 684 "lp.m"
  MR_Word libs__lp__HeadVar__2_2)
#line 684 "lp.m"
{
#line 684 "lp.m"
  {
#line 684 "lp.m"
    MR_bool libs__lp__succeeded;
#line 684 "lp.m"
    MR_Integer libs__lp__CastX_17 = (MR_Integer) libs__lp__HeadVar__1_1;
#line 684 "lp.m"
    MR_Integer libs__lp__CastY_18 = (MR_Integer) libs__lp__HeadVar__2_2;

#line 684 "lp.m"
    libs__lp__succeeded = (libs__lp__CastX_17 == libs__lp__CastY_18);
#line 684 "lp.m"
    if (libs__lp__succeeded)
#line 684 "lp.m"
      libs__lp__succeeded = MR_TRUE;
#line 684 "lp.m"
    else
#line 684 "lp.m"
      {
#line 684 "lp.m"
        MR_Word libs__lp__TypeInfo_19_19;
#line 684 "lp.m"
        MR_Word libs__lp__TypeInfo_20_20;
#line 684 "lp.m"
        MR_Word libs__lp__TypeInfo_21_21;
#line 684 "lp.m"
        MR_Word libs__lp__TypeInfo_22_22;
#line 684 "lp.m"
        MR_Word libs__lp__TypeInfo_23_23;
#line 684 "lp.m"
        MR_Integer libs__lp__V_3_3 = ((MR_Integer) (MR_hl_field(MR_mktag(0), libs__lp__HeadVar__1_1, (MR_Integer) 0)));
#line 684 "lp.m"
        MR_Integer libs__lp__V_4_4 = ((MR_Integer) (MR_hl_field(MR_mktag(0), libs__lp__HeadVar__1_1, (MR_Integer) 1)));
#line 684 "lp.m"
        MR_Word libs__lp__V_5_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), libs__lp__HeadVar__1_1, (MR_Integer) 2)));
#line 684 "lp.m"
        MR_Word libs__lp__V_6_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), libs__lp__HeadVar__1_1, (MR_Integer) 3)));
#line 684 "lp.m"
        MR_Word libs__lp__V_7_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), libs__lp__HeadVar__1_1, (MR_Integer) 4)));
#line 684 "lp.m"
        MR_Word libs__lp__V_8_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), libs__lp__HeadVar__1_1, (MR_Integer) 5)));
#line 684 "lp.m"
        MR_Word libs__lp__V_9_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), libs__lp__HeadVar__1_1, (MR_Integer) 6)));
#line 684 "lp.m"
        MR_Integer libs__lp__V_10_10 = ((MR_Integer) (MR_hl_field(MR_mktag(0), libs__lp__HeadVar__2_2, (MR_Integer) 0)));
#line 684 "lp.m"
        MR_Integer libs__lp__V_11_11 = ((MR_Integer) (MR_hl_field(MR_mktag(0), libs__lp__HeadVar__2_2, (MR_Integer) 1)));
#line 684 "lp.m"
        MR_Word libs__lp__V_12_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), libs__lp__HeadVar__2_2, (MR_Integer) 2)));
#line 684 "lp.m"
        MR_Word libs__lp__V_13_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), libs__lp__HeadVar__2_2, (MR_Integer) 3)));
#line 684 "lp.m"
        MR_Word libs__lp__V_14_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), libs__lp__HeadVar__2_2, (MR_Integer) 4)));
#line 684 "lp.m"
        MR_Word libs__lp__V_15_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), libs__lp__HeadVar__2_2, (MR_Integer) 5)));
#line 684 "lp.m"
        MR_Word libs__lp__V_16_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), libs__lp__HeadVar__2_2, (MR_Integer) 6)));

#line 6404 "libs.lp.c"
        libs__lp__succeeded = (libs__lp__V_3_3 == libs__lp__V_10_10);
#line 684 "lp.m"
        if (libs__lp__succeeded)
#line 684 "lp.m"
          {
#line 6410 "libs.lp.c"
            libs__lp__succeeded = (libs__lp__V_4_4 == libs__lp__V_11_11);
#line 684 "lp.m"
            if (libs__lp__succeeded)
#line 684 "lp.m"
              {
#line 6416 "libs.lp.c"
                libs__lp__TypeInfo_19_19 = (MR_Word) &libs__lp_scalar_common_2[8];
#line 6418 "libs.lp.c"
                {
#line 6420 "libs.lp.c"
                  libs__lp__succeeded = mercury__builtin__unify_2_p_0(libs__lp__TypeInfo_19_19, ((MR_Box) (libs__lp__V_5_5)), ((MR_Box) (libs__lp__V_12_12)));
                }
#line 684 "lp.m"
                if (libs__lp__succeeded)
#line 684 "lp.m"
                  {
#line 6427 "libs.lp.c"
                    libs__lp__TypeInfo_20_20 = (MR_Word) &libs__lp_scalar_common_2[6];
#line 6429 "libs.lp.c"
                    {
#line 6431 "libs.lp.c"
                      libs__lp__succeeded = mercury__builtin__unify_2_p_0(libs__lp__TypeInfo_20_20, ((MR_Box) (libs__lp__V_6_6)), ((MR_Box) (libs__lp__V_13_13)));
                    }
#line 684 "lp.m"
                    if (libs__lp__succeeded)
#line 684 "lp.m"
                      {
#line 6438 "libs.lp.c"
                        libs__lp__TypeInfo_21_21 = (MR_Word) &libs__lp_scalar_common_1[7];
#line 6440 "libs.lp.c"
                        {
#line 6442 "libs.lp.c"
                          libs__lp__succeeded = mercury__builtin__unify_2_p_0(libs__lp__TypeInfo_21_21, ((MR_Box) (libs__lp__V_7_7)), ((MR_Box) (libs__lp__V_14_14)));
                        }
#line 684 "lp.m"
                        if (libs__lp__succeeded)
#line 684 "lp.m"
                          {
#line 6449 "libs.lp.c"
                            libs__lp__TypeInfo_22_22 = (MR_Word) &libs__lp_scalar_common_1[7];
#line 6451 "libs.lp.c"
                            {
#line 6453 "libs.lp.c"
                              libs__lp__succeeded = mercury__builtin__unify_2_p_0(libs__lp__TypeInfo_22_22, ((MR_Box) (libs__lp__V_8_8)), ((MR_Box) (libs__lp__V_15_15)));
                            }
#line 684 "lp.m"
                            if (libs__lp__succeeded)
#line 684 "lp.m"
                              {
#line 6460 "libs.lp.c"
                                libs__lp__TypeInfo_23_23 = (MR_Word) &libs__lp_scalar_common_2[9];
#line 6462 "libs.lp.c"
                                {
#line 6464 "libs.lp.c"
                                  return libs__lp__succeeded = mercury__builtin__unify_2_p_0(libs__lp__TypeInfo_23_23, ((MR_Box) (libs__lp__V_9_9)), ((MR_Box) (libs__lp__V_16_16)));
                                }
#line 684 "lp.m"
                              }
#line 684 "lp.m"
                          }
#line 684 "lp.m"
                      }
#line 684 "lp.m"
                  }
#line 684 "lp.m"
              }
#line 684 "lp.m"
          }
#line 684 "lp.m"
      }
#line 684 "lp.m"
    return libs__lp__succeeded;
#line 684 "lp.m"
  }
#line 684 "lp.m"
}

#line 64 "lp.m"
void MR_CALL 
libs__lp____Compare____result_0_0(
#line 64 "lp.m"
  MR_Word * libs__lp__HeadVar__1_1,
#line 64 "lp.m"
  MR_Word libs__lp__HeadVar__2_2,
#line 64 "lp.m"
  MR_Word libs__lp__HeadVar__3_3)
#line 64 "lp.m"
{
#line 64 "lp.m"
  {
#line 64 "lp.m"
    MR_bool libs__lp__succeeded;
#line 64 "lp.m"
    MR_Integer libs__lp__CastX_13 = (MR_Integer) libs__lp__HeadVar__2_2;
#line 64 "lp.m"
    MR_Integer libs__lp__CastY_14 = (MR_Integer) libs__lp__HeadVar__3_3;

#line 64 "lp.m"
    libs__lp__succeeded = (libs__lp__CastX_13 == libs__lp__CastY_14);
#line 64 "lp.m"
    if (libs__lp__succeeded)
#line 6512 "libs.lp.c"
      *libs__lp__HeadVar__1_1 = (MR_Integer) 0;
#line 64 "lp.m"
    else
#line 64 "lp.m"
      if ((libs__lp__HeadVar__2_2 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 64 "lp.m"
        if ((libs__lp__HeadVar__3_3 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 64 "lp.m"
          *libs__lp__HeadVar__1_1 = (MR_Integer) 0;
#line 64 "lp.m"
        else
#line 6524 "libs.lp.c"
          *libs__lp__HeadVar__1_1 = (MR_Integer) 1;
#line 64 "lp.m"
      else
#line 64 "lp.m"
        {
#line 64 "lp.m"
          MR_Word libs__lp__V_17_17 = ((MR_Word) (MR_hl_field(MR_mktag(1), libs__lp__HeadVar__2_2, (MR_Integer) 1)));
#line 64 "lp.m"
          MR_Float libs__lp__V_18_18 = MR_unbox_float((MR_hl_field(MR_mktag(1), libs__lp__HeadVar__2_2, (MR_Integer) 0)));

#line 64 "lp.m"
          if ((libs__lp__HeadVar__3_3 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 6537 "libs.lp.c"
            *libs__lp__HeadVar__1_1 = (MR_Integer) 2;
#line 64 "lp.m"
          else
#line 64 "lp.m"
            {
#line 64 "lp.m"
              MR_Float libs__lp__V_10_10 = MR_unbox_float((MR_hl_field(MR_mktag(1), libs__lp__HeadVar__3_3, (MR_Integer) 0)));
#line 64 "lp.m"
              MR_Word libs__lp__V_11_11 = ((MR_Word) (MR_hl_field(MR_mktag(1), libs__lp__HeadVar__3_3, (MR_Integer) 1)));
#line 64 "lp.m"
              MR_Word libs__lp__V_12_12;

#line 64 "lp.m"
              {
#line 64 "lp.m"
                mercury__private_builtin__builtin_compare_float_3_p_0(&libs__lp__V_12_12, libs__lp__V_18_18, libs__lp__V_10_10);
              }
#line 6555 "libs.lp.c"
              libs__lp__succeeded = (libs__lp__V_12_12 == (MR_Integer) 0);
#line 64 "lp.m"
              libs__lp__succeeded = !(libs__lp__succeeded);
#line 64 "lp.m"
              if (libs__lp__succeeded)
#line 64 "lp.m"
                *libs__lp__HeadVar__1_1 = libs__lp__V_12_12;
#line 64 "lp.m"
              else
#line 64 "lp.m"
                {
#line 64 "lp.m"
                  {
#line 64 "lp.m"
                    mercury__builtin__compare_3_p_0((MR_Word) &libs__lp_scalar_common_2[1], libs__lp__HeadVar__1_1, ((MR_Box) (libs__lp__V_17_17)), ((MR_Box) (libs__lp__V_11_11)));
#line 64 "lp.m"
                    return;
                  }
#line 64 "lp.m"
                }
#line 64 "lp.m"
            }
#line 64 "lp.m"
        }
#line 64 "lp.m"
  }
#line 64 "lp.m"
}

#line 64 "lp.m"
MR_bool MR_CALL 
libs__lp____Unify____result_0_0(
#line 64 "lp.m"
  MR_Word libs__lp__HeadVar__1_1,
#line 64 "lp.m"
  MR_Word libs__lp__HeadVar__2_2)
#line 64 "lp.m"
{
#line 64 "lp.m"
  {
#line 64 "lp.m"
    MR_bool libs__lp__succeeded;
#line 64 "lp.m"
    MR_Integer libs__lp__CastX_9 = (MR_Integer) libs__lp__HeadVar__1_1;
#line 64 "lp.m"
    MR_Integer libs__lp__CastY_10 = (MR_Integer) libs__lp__HeadVar__2_2;

#line 64 "lp.m"
    libs__lp__succeeded = (libs__lp__CastX_9 == libs__lp__CastY_10);
#line 64 "lp.m"
    if (libs__lp__succeeded)
#line 64 "lp.m"
      libs__lp__succeeded = MR_TRUE;
#line 64 "lp.m"
    else
#line 64 "lp.m"
      if ((libs__lp__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 64 "lp.m"
        {
#line 64 "lp.m"
          MR_Integer libs__lp__CastX_3 = (MR_Integer) libs__lp__HeadVar__1_1;
#line 64 "lp.m"
          MR_Integer libs__lp__CastY_4 = (MR_Integer) libs__lp__HeadVar__2_2;

#line 64 "lp.m"
          libs__lp__succeeded = (libs__lp__CastY_4 == libs__lp__CastX_3);
#line 64 "lp.m"
        }
#line 64 "lp.m"
      else
#line 64 "lp.m"
        {
#line 64 "lp.m"
          MR_Word libs__lp__TypeInfo_11_11;
#line 64 "lp.m"
          MR_Float libs__lp__V_5_5 = MR_unbox_float((MR_hl_field(MR_mktag(1), libs__lp__HeadVar__1_1, (MR_Integer) 0)));
#line 64 "lp.m"
          MR_Word libs__lp__V_6_6 = ((MR_Word) (MR_hl_field(MR_mktag(1), libs__lp__HeadVar__1_1, (MR_Integer) 1)));
#line 64 "lp.m"
          MR_Float libs__lp__V_7_7;
#line 64 "lp.m"
          MR_Word libs__lp__V_8_8;

#line 64 "lp.m"
          libs__lp__succeeded = ((MR_tag((MR_Word) libs__lp__HeadVar__2_2)) == (MR_mktag((MR_Integer) 1)));
#line 64 "lp.m"
          if (libs__lp__succeeded)
#line 64 "lp.m"
            {
#line 64 "lp.m"
              libs__lp__V_7_7 = MR_unbox_float((MR_hl_field(MR_mktag(1), libs__lp__HeadVar__2_2, (MR_Integer) 0)));
#line 64 "lp.m"
              libs__lp__V_8_8 = ((MR_Word) (MR_hl_field(MR_mktag(1), libs__lp__HeadVar__2_2, (MR_Integer) 1)));
#line 6649 "libs.lp.c"
              libs__lp__succeeded = (libs__lp__V_5_5 == libs__lp__V_7_7);
#line 64 "lp.m"
              if (libs__lp__succeeded)
#line 64 "lp.m"
                {
#line 6655 "libs.lp.c"
                  libs__lp__TypeInfo_11_11 = (MR_Word) &libs__lp_scalar_common_2[1];
#line 6657 "libs.lp.c"
                  {
#line 6659 "libs.lp.c"
                    return libs__lp__succeeded = mercury__builtin__unify_2_p_0(libs__lp__TypeInfo_11_11, ((MR_Box) (libs__lp__V_6_6)), ((MR_Box) (libs__lp__V_8_8)));
                  }
#line 64 "lp.m"
                }
#line 64 "lp.m"
            }
#line 64 "lp.m"
        }
#line 64 "lp.m"
    return libs__lp__succeeded;
#line 64 "lp.m"
  }
#line 64 "lp.m"
}

#line 51 "lp.m"
void MR_CALL 
libs__lp____Compare____operator_0_0(
#line 51 "lp.m"
  MR_Word * libs__lp__HeadVar__1_1,
#line 51 "lp.m"
  MR_Word libs__lp__HeadVar__2_2,
#line 51 "lp.m"
  MR_Word libs__lp__HeadVar__3_3)
#line 51 "lp.m"
{
#line 51 "lp.m"
  {
#line 51 "lp.m"
    MR_bool libs__lp__succeeded;
#line 51 "lp.m"
    MR_Integer libs__lp__Cast_HeadVar1_4 = (MR_Integer) libs__lp__HeadVar__2_2;
#line 51 "lp.m"
    MR_Integer libs__lp__Cast_HeadVar2_5 = (MR_Integer) libs__lp__HeadVar__3_3;

#line 51 "lp.m"
    {
#line 51 "lp.m"
      mercury__private_builtin__builtin_compare_int_3_p_0(libs__lp__HeadVar__1_1, libs__lp__Cast_HeadVar1_4, libs__lp__Cast_HeadVar2_5);
#line 51 "lp.m"
      return;
    }
#line 51 "lp.m"
  }
#line 51 "lp.m"
}

#line 51 "lp.m"
MR_bool MR_CALL 
libs__lp____Unify____operator_0_0(
#line 51 "lp.m"
  MR_Word libs__lp__HeadVar__2_1,
#line 51 "lp.m"
  MR_Word libs__lp__HeadVar__2_2)
#line 51 "lp.m"
{
#line 6716 "libs.lp.c"
  {
#line 6718 "libs.lp.c"
    MR_bool libs__lp__succeeded = (libs__lp__HeadVar__2_1 == libs__lp__HeadVar__2_2);

#line 6721 "libs.lp.c"
    return libs__lp__succeeded;
#line 6723 "libs.lp.c"
  }
#line 51 "lp.m"
}

#line 58 "lp.m"
void MR_CALL 
libs__lp____Compare____objective_0_0(
#line 58 "lp.m"
  MR_Word * libs__lp__HeadVar__1_1,
#line 58 "lp.m"
  MR_Word libs__lp__HeadVar__2_2,
#line 58 "lp.m"
  MR_Word libs__lp__HeadVar__3_3)
#line 58 "lp.m"
{
#line 58 "lp.m"
  {
#line 58 "lp.m"
    MR_bool libs__lp__succeeded;
#line 58 "lp.m"
    MR_Word libs__lp__Cast_HeadVar1_4 = libs__lp__HeadVar__2_2;
#line 58 "lp.m"
    MR_Word libs__lp__Cast_HeadVar2_5 = libs__lp__HeadVar__3_3;

#line 58 "lp.m"
    {
#line 58 "lp.m"
      mercury__builtin__compare_3_p_0((MR_Word) &libs__lp_scalar_common_1[4], libs__lp__HeadVar__1_1, ((MR_Box) (libs__lp__Cast_HeadVar1_4)), ((MR_Box) (libs__lp__Cast_HeadVar2_5)));
#line 58 "lp.m"
      return;
    }
#line 58 "lp.m"
  }
#line 58 "lp.m"
}

#line 58 "lp.m"
MR_bool MR_CALL 
libs__lp____Unify____objective_0_0(
#line 58 "lp.m"
  MR_Word libs__lp__HeadVar__1_1,
#line 58 "lp.m"
  MR_Word libs__lp__HeadVar__2_2)
#line 58 "lp.m"
{
#line 58 "lp.m"
  {
#line 58 "lp.m"
    MR_bool libs__lp__succeeded;
#line 58 "lp.m"
    MR_Word libs__lp__Cast_HeadVar1_3 = libs__lp__HeadVar__1_1;
#line 58 "lp.m"
    MR_Word libs__lp__Cast_HeadVar2_4 = libs__lp__HeadVar__2_2;

#line 58 "lp.m"
    {
#line 58 "lp.m"
      return libs__lp__succeeded = mercury__builtin__unify_2_p_0((MR_Word) &libs__lp_scalar_common_1[4], ((MR_Box) (libs__lp__Cast_HeadVar1_3)), ((MR_Box) (libs__lp__Cast_HeadVar2_4)));
    }
#line 58 "lp.m"
    return libs__lp__succeeded;
#line 58 "lp.m"
  }
#line 58 "lp.m"
}

#line 102 "lp.m"
static void MR_CALL 
libs__lp____Compare____lp_info_0_0(
#line 102 "lp.m"
  MR_Word * libs__lp__HeadVar__1_1,
#line 102 "lp.m"
  MR_Word libs__lp__HeadVar__2_2,
#line 102 "lp.m"
  MR_Word libs__lp__HeadVar__3_3)
#line 102 "lp.m"
{
#line 102 "lp.m"
  {
#line 102 "lp.m"
    MR_bool libs__lp__succeeded;
#line 102 "lp.m"
    MR_Integer libs__lp__CastX_15 = (MR_Integer) libs__lp__HeadVar__2_2;
#line 102 "lp.m"
    MR_Integer libs__lp__CastY_16 = (MR_Integer) libs__lp__HeadVar__3_3;

#line 102 "lp.m"
    libs__lp__succeeded = (libs__lp__CastX_15 == libs__lp__CastY_16);
#line 102 "lp.m"
    if (libs__lp__succeeded)
#line 6814 "libs.lp.c"
      *libs__lp__HeadVar__1_1 = (MR_Integer) 0;
#line 102 "lp.m"
    else
#line 102 "lp.m"
      {
#line 102 "lp.m"
        MR_Word libs__lp__V_4_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), libs__lp__HeadVar__2_2, (MR_Integer) 0)));
#line 102 "lp.m"
        MR_Word libs__lp__V_5_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), libs__lp__HeadVar__2_2, (MR_Integer) 1)));
#line 102 "lp.m"
        MR_Word libs__lp__V_6_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), libs__lp__HeadVar__2_2, (MR_Integer) 2)));
#line 102 "lp.m"
        MR_Word libs__lp__V_7_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), libs__lp__HeadVar__2_2, (MR_Integer) 3)));
#line 102 "lp.m"
        MR_Word libs__lp__V_8_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), libs__lp__HeadVar__3_3, (MR_Integer) 0)));
#line 102 "lp.m"
        MR_Word libs__lp__V_9_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), libs__lp__HeadVar__3_3, (MR_Integer) 1)));
#line 102 "lp.m"
        MR_Word libs__lp__V_10_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), libs__lp__HeadVar__3_3, (MR_Integer) 2)));
#line 102 "lp.m"
        MR_Word libs__lp__V_11_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), libs__lp__HeadVar__3_3, (MR_Integer) 3)));
#line 102 "lp.m"
        MR_Word libs__lp__V_12_12;

#line 102 "lp.m"
        {
#line 102 "lp.m"
          mercury__builtin__compare_3_p_0((MR_Word) &libs__lp_scalar_common_1[3], &libs__lp__V_12_12, ((MR_Box) (libs__lp__V_4_4)), ((MR_Box) (libs__lp__V_8_8)));
        }
#line 6844 "libs.lp.c"
        libs__lp__succeeded = (libs__lp__V_12_12 == (MR_Integer) 0);
#line 102 "lp.m"
        libs__lp__succeeded = !(libs__lp__succeeded);
#line 102 "lp.m"
        if (libs__lp__succeeded)
#line 102 "lp.m"
          *libs__lp__HeadVar__1_1 = libs__lp__V_12_12;
#line 102 "lp.m"
        else
#line 102 "lp.m"
          {
#line 102 "lp.m"
            MR_Word libs__lp__V_13_13;

#line 102 "lp.m"
            {
#line 102 "lp.m"
              mercury__builtin__compare_3_p_0((MR_Word) &libs__lp_scalar_common_2[6], &libs__lp__V_13_13, ((MR_Box) (libs__lp__V_5_5)), ((MR_Box) (libs__lp__V_9_9)));
            }
#line 6864 "libs.lp.c"
            libs__lp__succeeded = (libs__lp__V_13_13 == (MR_Integer) 0);
#line 102 "lp.m"
            libs__lp__succeeded = !(libs__lp__succeeded);
#line 102 "lp.m"
            if (libs__lp__succeeded)
#line 102 "lp.m"
              *libs__lp__HeadVar__1_1 = libs__lp__V_13_13;
#line 102 "lp.m"
            else
#line 102 "lp.m"
              {
#line 102 "lp.m"
                MR_Word libs__lp__V_14_14;

#line 102 "lp.m"
                {
#line 102 "lp.m"
                  mercury__builtin__compare_3_p_0((MR_Word) &libs__lp_scalar_common_1[6], &libs__lp__V_14_14, ((MR_Box) (libs__lp__V_6_6)), ((MR_Box) (libs__lp__V_10_10)));
                }
#line 6884 "libs.lp.c"
                libs__lp__succeeded = (libs__lp__V_14_14 == (MR_Integer) 0);
#line 102 "lp.m"
                libs__lp__succeeded = !(libs__lp__succeeded);
#line 102 "lp.m"
                if (libs__lp__succeeded)
#line 102 "lp.m"
                  *libs__lp__HeadVar__1_1 = libs__lp__V_14_14;
#line 102 "lp.m"
                else
#line 102 "lp.m"
                  {
#line 102 "lp.m"
                    {
#line 102 "lp.m"
                      mercury__builtin__compare_3_p_0((MR_Word) &libs__lp_scalar_common_1[6], libs__lp__HeadVar__1_1, ((MR_Box) (libs__lp__V_7_7)), ((MR_Box) (libs__lp__V_11_11)));
#line 102 "lp.m"
                      return;
                    }
#line 102 "lp.m"
                  }
#line 102 "lp.m"
              }
#line 102 "lp.m"
          }
#line 102 "lp.m"
      }
#line 102 "lp.m"
  }
#line 102 "lp.m"
}

#line 102 "lp.m"
static MR_bool MR_CALL 
libs__lp____Unify____lp_info_0_0(
#line 102 "lp.m"
  MR_Word libs__lp__HeadVar__1_1,
#line 102 "lp.m"
  MR_Word libs__lp__HeadVar__2_2)
#line 102 "lp.m"
{
#line 102 "lp.m"
  {
#line 102 "lp.m"
    MR_bool libs__lp__succeeded;
#line 102 "lp.m"
    MR_Integer libs__lp__CastX_11 = (MR_Integer) libs__lp__HeadVar__1_1;
#line 102 "lp.m"
    MR_Integer libs__lp__CastY_12 = (MR_Integer) libs__lp__HeadVar__2_2;

#line 102 "lp.m"
    libs__lp__succeeded = (libs__lp__CastX_11 == libs__lp__CastY_12);
#line 102 "lp.m"
    if (libs__lp__succeeded)
#line 102 "lp.m"
      libs__lp__succeeded = MR_TRUE;
#line 102 "lp.m"
    else
#line 102 "lp.m"
      {
#line 102 "lp.m"
        MR_Word libs__lp__TypeInfo_14_14;
#line 102 "lp.m"
        MR_Word libs__lp__TypeInfo_15_15;
#line 102 "lp.m"
        MR_Word libs__lp__TypeInfo_16_16;
#line 102 "lp.m"
        MR_Word libs__lp__V_3_3 = ((MR_Word) (MR_hl_field(MR_mktag(0), libs__lp__HeadVar__1_1, (MR_Integer) 0)));
#line 102 "lp.m"
        MR_Word libs__lp__V_4_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), libs__lp__HeadVar__1_1, (MR_Integer) 1)));
#line 102 "lp.m"
        MR_Word libs__lp__V_5_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), libs__lp__HeadVar__1_1, (MR_Integer) 2)));
#line 102 "lp.m"
        MR_Word libs__lp__V_6_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), libs__lp__HeadVar__1_1, (MR_Integer) 3)));
#line 102 "lp.m"
        MR_Word libs__lp__V_7_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), libs__lp__HeadVar__2_2, (MR_Integer) 0)));
#line 102 "lp.m"
        MR_Word libs__lp__V_8_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), libs__lp__HeadVar__2_2, (MR_Integer) 1)));
#line 102 "lp.m"
        MR_Word libs__lp__V_9_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), libs__lp__HeadVar__2_2, (MR_Integer) 2)));
#line 102 "lp.m"
        MR_Word libs__lp__V_10_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), libs__lp__HeadVar__2_2, (MR_Integer) 3)));

#line 6967 "libs.lp.c"
        {
#line 6969 "libs.lp.c"
          libs__lp__succeeded = mercury__builtin__unify_2_p_0((MR_Word) &libs__lp_scalar_common_1[3], ((MR_Box) (libs__lp__V_3_3)), ((MR_Box) (libs__lp__V_7_7)));
        }
#line 102 "lp.m"
        if (libs__lp__succeeded)
#line 102 "lp.m"
          {
#line 6976 "libs.lp.c"
            libs__lp__TypeInfo_14_14 = (MR_Word) &libs__lp_scalar_common_2[6];
#line 6978 "libs.lp.c"
            {
#line 6980 "libs.lp.c"
              libs__lp__succeeded = mercury__builtin__unify_2_p_0(libs__lp__TypeInfo_14_14, ((MR_Box) (libs__lp__V_4_4)), ((MR_Box) (libs__lp__V_8_8)));
            }
#line 102 "lp.m"
            if (libs__lp__succeeded)
#line 102 "lp.m"
              {
#line 6987 "libs.lp.c"
                libs__lp__TypeInfo_15_15 = (MR_Word) &libs__lp_scalar_common_1[6];
#line 6989 "libs.lp.c"
                {
#line 6991 "libs.lp.c"
                  libs__lp__succeeded = mercury__builtin__unify_2_p_0(libs__lp__TypeInfo_15_15, ((MR_Box) (libs__lp__V_5_5)), ((MR_Box) (libs__lp__V_9_9)));
                }
#line 102 "lp.m"
                if (libs__lp__succeeded)
#line 102 "lp.m"
                  {
#line 6998 "libs.lp.c"
                    libs__lp__TypeInfo_16_16 = (MR_Word) &libs__lp_scalar_common_1[6];
#line 7000 "libs.lp.c"
                    {
#line 7002 "libs.lp.c"
                      return libs__lp__succeeded = mercury__builtin__unify_2_p_0(libs__lp__TypeInfo_16_16, ((MR_Box) (libs__lp__V_6_6)), ((MR_Box) (libs__lp__V_10_10)));
                    }
#line 102 "lp.m"
                  }
#line 102 "lp.m"
              }
#line 102 "lp.m"
          }
#line 102 "lp.m"
      }
#line 102 "lp.m"
    return libs__lp__succeeded;
#line 102 "lp.m"
  }
#line 102 "lp.m"
}

#line 56 "lp.m"
void MR_CALL 
libs__lp____Compare____equations_0_0(
#line 56 "lp.m"
  MR_Word * libs__lp__HeadVar__1_1,
#line 56 "lp.m"
  MR_Word libs__lp__HeadVar__2_2,
#line 56 "lp.m"
  MR_Word libs__lp__HeadVar__3_3)
#line 56 "lp.m"
{
#line 56 "lp.m"
  {
#line 56 "lp.m"
    MR_bool libs__lp__succeeded;
#line 56 "lp.m"
    MR_Word libs__lp__Cast_HeadVar1_4 = libs__lp__HeadVar__2_2;
#line 56 "lp.m"
    MR_Word libs__lp__Cast_HeadVar2_5 = libs__lp__HeadVar__3_3;

#line 56 "lp.m"
    {
#line 56 "lp.m"
      mercury__builtin__compare_3_p_0((MR_Word) &libs__lp_scalar_common_1[5], libs__lp__HeadVar__1_1, ((MR_Box) (libs__lp__Cast_HeadVar1_4)), ((MR_Box) (libs__lp__Cast_HeadVar2_5)));
#line 56 "lp.m"
      return;
    }
#line 56 "lp.m"
  }
#line 56 "lp.m"
}

#line 56 "lp.m"
MR_bool MR_CALL 
libs__lp____Unify____equations_0_0(
#line 56 "lp.m"
  MR_Word libs__lp__HeadVar__1_1,
#line 56 "lp.m"
  MR_Word libs__lp__HeadVar__2_2)
#line 56 "lp.m"
{
#line 56 "lp.m"
  {
#line 56 "lp.m"
    MR_bool libs__lp__succeeded;
#line 56 "lp.m"
    MR_Word libs__lp__Cast_HeadVar1_3 = libs__lp__HeadVar__1_1;
#line 56 "lp.m"
    MR_Word libs__lp__Cast_HeadVar2_4 = libs__lp__HeadVar__2_2;

#line 56 "lp.m"
    {
#line 56 "lp.m"
      return libs__lp__succeeded = mercury__builtin__unify_2_p_0((MR_Word) &libs__lp_scalar_common_1[5], ((MR_Box) (libs__lp__Cast_HeadVar1_3)), ((MR_Box) (libs__lp__Cast_HeadVar2_4)));
    }
#line 56 "lp.m"
    return libs__lp__succeeded;
#line 56 "lp.m"
  }
#line 56 "lp.m"
}

#line 48 "lp.m"
void MR_CALL 
libs__lp____Compare____equation_0_0(
#line 48 "lp.m"
  MR_Word * libs__lp__HeadVar__1_1,
#line 48 "lp.m"
  MR_Word libs__lp__HeadVar__2_2,
#line 48 "lp.m"
  MR_Word libs__lp__HeadVar__3_3)
#line 48 "lp.m"
{
#line 48 "lp.m"
  {
#line 48 "lp.m"
    MR_bool libs__lp__succeeded;
#line 48 "lp.m"
    MR_Integer libs__lp__CastX_12 = (MR_Integer) libs__lp__HeadVar__2_2;
#line 48 "lp.m"
    MR_Integer libs__lp__CastY_13 = (MR_Integer) libs__lp__HeadVar__3_3;

#line 48 "lp.m"
    libs__lp__succeeded = (libs__lp__CastX_12 == libs__lp__CastY_13);
#line 48 "lp.m"
    if (libs__lp__succeeded)
#line 7106 "libs.lp.c"
      *libs__lp__HeadVar__1_1 = (MR_Integer) 0;
#line 48 "lp.m"
    else
#line 48 "lp.m"
      {
#line 48 "lp.m"
        MR_Word libs__lp__V_4_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), libs__lp__HeadVar__2_2, (MR_Integer) 0)));
#line 48 "lp.m"
        MR_Word libs__lp__V_5_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), libs__lp__HeadVar__2_2, (MR_Integer) 1)));
#line 48 "lp.m"
        MR_Float libs__lp__V_6_6 = MR_unbox_float((MR_hl_field(MR_mktag(0), libs__lp__HeadVar__2_2, (MR_Integer) 2)));
#line 48 "lp.m"
        MR_Word libs__lp__V_7_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), libs__lp__HeadVar__3_3, (MR_Integer) 0)));
#line 48 "lp.m"
        MR_Word libs__lp__V_8_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), libs__lp__HeadVar__3_3, (MR_Integer) 1)));
#line 48 "lp.m"
        MR_Float libs__lp__V_9_9 = MR_unbox_float((MR_hl_field(MR_mktag(0), libs__lp__HeadVar__3_3, (MR_Integer) 2)));
#line 48 "lp.m"
        MR_Word libs__lp__V_10_10;

#line 48 "lp.m"
        {
#line 48 "lp.m"
          mercury__builtin__compare_3_p_0((MR_Word) &libs__lp_scalar_common_1[4], &libs__lp__V_10_10, ((MR_Box) (libs__lp__V_4_4)), ((MR_Box) (libs__lp__V_7_7)));
        }
#line 7132 "libs.lp.c"
        libs__lp__succeeded = (libs__lp__V_10_10 == (MR_Integer) 0);
#line 48 "lp.m"
        libs__lp__succeeded = !(libs__lp__succeeded);
#line 48 "lp.m"
        if (libs__lp__succeeded)
#line 48 "lp.m"
          *libs__lp__HeadVar__1_1 = libs__lp__V_10_10;
#line 48 "lp.m"
        else
#line 48 "lp.m"
          {
#line 48 "lp.m"
            MR_Word libs__lp__V_11_11;
#line 48 "lp.m"
            MR_Integer libs__lp__V_17_17 = (MR_Integer) libs__lp__V_5_5;
#line 48 "lp.m"
            MR_Integer libs__lp__V_18_18 = (MR_Integer) libs__lp__V_8_8;

#line 48 "lp.m"
            {
#line 48 "lp.m"
              mercury__private_builtin__builtin_compare_int_3_p_0(&libs__lp__V_11_11, libs__lp__V_17_17, libs__lp__V_18_18);
            }
#line 7156 "libs.lp.c"
            libs__lp__succeeded = (libs__lp__V_11_11 == (MR_Integer) 0);
#line 48 "lp.m"
            libs__lp__succeeded = !(libs__lp__succeeded);
#line 48 "lp.m"
            if (libs__lp__succeeded)
#line 48 "lp.m"
              *libs__lp__HeadVar__1_1 = libs__lp__V_11_11;
#line 48 "lp.m"
            else
#line 48 "lp.m"
              {
#line 48 "lp.m"
                mercury__private_builtin__builtin_compare_float_3_p_0(libs__lp__HeadVar__1_1, libs__lp__V_6_6, libs__lp__V_9_9);
#line 48 "lp.m"
                return;
              }
#line 48 "lp.m"
          }
#line 48 "lp.m"
      }
#line 48 "lp.m"
  }
#line 48 "lp.m"
}

#line 48 "lp.m"
MR_bool MR_CALL 
libs__lp____Unify____equation_0_0(
#line 48 "lp.m"
  MR_Word libs__lp__HeadVar__1_1,
#line 48 "lp.m"
  MR_Word libs__lp__HeadVar__2_2)
#line 48 "lp.m"
{
#line 48 "lp.m"
  {
#line 48 "lp.m"
    MR_bool libs__lp__succeeded;
#line 48 "lp.m"
    MR_Integer libs__lp__CastX_9 = (MR_Integer) libs__lp__HeadVar__1_1;
#line 48 "lp.m"
    MR_Integer libs__lp__CastY_10 = (MR_Integer) libs__lp__HeadVar__2_2;

#line 48 "lp.m"
    libs__lp__succeeded = (libs__lp__CastX_9 == libs__lp__CastY_10);
#line 48 "lp.m"
    if (libs__lp__succeeded)
#line 48 "lp.m"
      libs__lp__succeeded = MR_TRUE;
#line 48 "lp.m"
    else
#line 48 "lp.m"
      {
#line 48 "lp.m"
        MR_Word libs__lp__V_3_3 = ((MR_Word) (MR_hl_field(MR_mktag(0), libs__lp__HeadVar__1_1, (MR_Integer) 0)));
#line 48 "lp.m"
        MR_Word libs__lp__V_4_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), libs__lp__HeadVar__1_1, (MR_Integer) 1)));
#line 48 "lp.m"
        MR_Float libs__lp__V_5_5 = MR_unbox_float((MR_hl_field(MR_mktag(0), libs__lp__HeadVar__1_1, (MR_Integer) 2)));
#line 48 "lp.m"
        MR_Word libs__lp__V_6_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), libs__lp__HeadVar__2_2, (MR_Integer) 0)));
#line 48 "lp.m"
        MR_Word libs__lp__V_7_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), libs__lp__HeadVar__2_2, (MR_Integer) 1)));
#line 48 "lp.m"
        MR_Float libs__lp__V_8_8 = MR_unbox_float((MR_hl_field(MR_mktag(0), libs__lp__HeadVar__2_2, (MR_Integer) 2)));

#line 7223 "libs.lp.c"
        {
#line 7225 "libs.lp.c"
          libs__lp__succeeded = mercury__builtin__unify_2_p_0((MR_Word) &libs__lp_scalar_common_1[4], ((MR_Box) (libs__lp__V_3_3)), ((MR_Box) (libs__lp__V_6_6)));
        }
#line 48 "lp.m"
        if (libs__lp__succeeded)
#line 48 "lp.m"
          {
#line 7232 "libs.lp.c"
            libs__lp__succeeded = (libs__lp__V_4_4 == libs__lp__V_7_7);
#line 48 "lp.m"
            if (libs__lp__succeeded)
#line 7236 "libs.lp.c"
              libs__lp__succeeded = (libs__lp__V_5_5 == libs__lp__V_8_8);
#line 48 "lp.m"
          }
#line 48 "lp.m"
      }
#line 48 "lp.m"
    return libs__lp__succeeded;
#line 48 "lp.m"
  }
#line 48 "lp.m"
}

#line 60 "lp.m"
void MR_CALL 
libs__lp____Compare____direction_0_0(
#line 60 "lp.m"
  MR_Word * libs__lp__HeadVar__1_1,
#line 60 "lp.m"
  MR_Word libs__lp__HeadVar__2_2,
#line 60 "lp.m"
  MR_Word libs__lp__HeadVar__3_3)
#line 60 "lp.m"
{
#line 60 "lp.m"
  {
#line 60 "lp.m"
    MR_bool libs__lp__succeeded;
#line 60 "lp.m"
    MR_Integer libs__lp__Cast_HeadVar1_4 = (MR_Integer) libs__lp__HeadVar__2_2;
#line 60 "lp.m"
    MR_Integer libs__lp__Cast_HeadVar2_5 = (MR_Integer) libs__lp__HeadVar__3_3;

#line 60 "lp.m"
    {
#line 60 "lp.m"
      mercury__private_builtin__builtin_compare_int_3_p_0(libs__lp__HeadVar__1_1, libs__lp__Cast_HeadVar1_4, libs__lp__Cast_HeadVar2_5);
#line 60 "lp.m"
      return;
    }
#line 60 "lp.m"
  }
#line 60 "lp.m"
}

#line 60 "lp.m"
MR_bool MR_CALL 
libs__lp____Unify____direction_0_0(
#line 60 "lp.m"
  MR_Word libs__lp__HeadVar__2_1,
#line 60 "lp.m"
  MR_Word libs__lp__HeadVar__2_2)
#line 60 "lp.m"
{
#line 7290 "libs.lp.c"
  {
#line 7292 "libs.lp.c"
    MR_bool libs__lp__succeeded = (libs__lp__HeadVar__2_1 == libs__lp__HeadVar__2_2);

#line 7295 "libs.lp.c"
    return libs__lp__succeeded;
#line 7297 "libs.lp.c"
  }
#line 60 "lp.m"
}

#line 46 "lp.m"
void MR_CALL 
libs__lp____Compare____coeff_0_0(
#line 46 "lp.m"
  MR_Word * libs__lp__HeadVar__1_1,
#line 46 "lp.m"
  MR_Word libs__lp__HeadVar__2_2,
#line 46 "lp.m"
  MR_Word libs__lp__HeadVar__3_3)
#line 46 "lp.m"
{
#line 46 "lp.m"
  {
#line 46 "lp.m"
    MR_bool libs__lp__succeeded;
#line 46 "lp.m"
    MR_Word libs__lp__Cast_HeadVar1_4 = libs__lp__HeadVar__2_2;
#line 46 "lp.m"
    MR_Word libs__lp__Cast_HeadVar2_5 = libs__lp__HeadVar__3_3;

#line 46 "lp.m"
    {
#line 46 "lp.m"
      mercury__builtin__compare_3_p_0((MR_Word) &libs__lp_scalar_common_2[0], libs__lp__HeadVar__1_1, ((MR_Box) (libs__lp__Cast_HeadVar1_4)), ((MR_Box) (libs__lp__Cast_HeadVar2_5)));
#line 46 "lp.m"
      return;
    }
#line 46 "lp.m"
  }
#line 46 "lp.m"
}

#line 46 "lp.m"
MR_bool MR_CALL 
libs__lp____Unify____coeff_0_0(
#line 46 "lp.m"
  MR_Word libs__lp__HeadVar__1_1,
#line 46 "lp.m"
  MR_Word libs__lp__HeadVar__2_2)
#line 46 "lp.m"
{
#line 46 "lp.m"
  {
#line 46 "lp.m"
    MR_bool libs__lp__succeeded;
#line 46 "lp.m"
    MR_Word libs__lp__Cast_HeadVar1_3 = libs__lp__HeadVar__1_1;
#line 46 "lp.m"
    MR_Word libs__lp__Cast_HeadVar2_4 = libs__lp__HeadVar__2_2;

#line 46 "lp.m"
    {
#line 46 "lp.m"
      return libs__lp__succeeded = mercury__builtin__unify_2_p_0((MR_Word) &libs__lp_scalar_common_2[0], ((MR_Box) (libs__lp__Cast_HeadVar1_3)), ((MR_Box) (libs__lp__Cast_HeadVar2_4)));
    }
#line 46 "lp.m"
    return libs__lp__succeeded;
#line 46 "lp.m"
  }
#line 46 "lp.m"
}

#line 628 "lp.m"
static void MR_CALL 
libs__lp____Compare____cell_0_0(
#line 628 "lp.m"
  MR_Word * libs__lp__HeadVar__1_1,
#line 628 "lp.m"
  MR_Word libs__lp__HeadVar__2_2,
#line 628 "lp.m"
  MR_Word libs__lp__HeadVar__3_3)
#line 628 "lp.m"
{
#line 628 "lp.m"
  {
#line 628 "lp.m"
    MR_bool libs__lp__succeeded;
#line 628 "lp.m"
    MR_Integer libs__lp__CastX_9 = (MR_Integer) libs__lp__HeadVar__2_2;
#line 628 "lp.m"
    MR_Integer libs__lp__CastY_10 = (MR_Integer) libs__lp__HeadVar__3_3;

#line 628 "lp.m"
    libs__lp__succeeded = (libs__lp__CastX_9 == libs__lp__CastY_10);
#line 628 "lp.m"
    if (libs__lp__succeeded)
#line 7388 "libs.lp.c"
      *libs__lp__HeadVar__1_1 = (MR_Integer) 0;
#line 628 "lp.m"
    else
#line 628 "lp.m"
      {
#line 628 "lp.m"
        MR_Integer libs__lp__V_4_4 = ((MR_Integer) (MR_hl_field(MR_mktag(0), libs__lp__HeadVar__2_2, (MR_Integer) 0)));
#line 628 "lp.m"
        MR_Integer libs__lp__V_5_5 = ((MR_Integer) (MR_hl_field(MR_mktag(0), libs__lp__HeadVar__2_2, (MR_Integer) 1)));
#line 628 "lp.m"
        MR_Integer libs__lp__V_6_6 = ((MR_Integer) (MR_hl_field(MR_mktag(0), libs__lp__HeadVar__3_3, (MR_Integer) 0)));
#line 628 "lp.m"
        MR_Integer libs__lp__V_7_7 = ((MR_Integer) (MR_hl_field(MR_mktag(0), libs__lp__HeadVar__3_3, (MR_Integer) 1)));
#line 628 "lp.m"
        MR_Word libs__lp__V_8_8;

#line 628 "lp.m"
        {
#line 628 "lp.m"
          mercury__private_builtin__builtin_compare_int_3_p_0(&libs__lp__V_8_8, libs__lp__V_4_4, libs__lp__V_6_6);
        }
#line 7410 "libs.lp.c"
        libs__lp__succeeded = (libs__lp__V_8_8 == (MR_Integer) 0);
#line 628 "lp.m"
        libs__lp__succeeded = !(libs__lp__succeeded);
#line 628 "lp.m"
        if (libs__lp__succeeded)
#line 628 "lp.m"
          *libs__lp__HeadVar__1_1 = libs__lp__V_8_8;
#line 628 "lp.m"
        else
#line 628 "lp.m"
          {
#line 628 "lp.m"
            mercury__private_builtin__builtin_compare_int_3_p_0(libs__lp__HeadVar__1_1, libs__lp__V_5_5, libs__lp__V_7_7);
#line 628 "lp.m"
            return;
          }
#line 628 "lp.m"
      }
#line 628 "lp.m"
  }
#line 628 "lp.m"
}

#line 628 "lp.m"
static MR_bool MR_CALL 
libs__lp____Unify____cell_0_0(
#line 628 "lp.m"
  MR_Word libs__lp__HeadVar__1_1,
#line 628 "lp.m"
  MR_Word libs__lp__HeadVar__2_2)
#line 628 "lp.m"
{
#line 628 "lp.m"
  {
#line 628 "lp.m"
    MR_bool libs__lp__succeeded;
#line 628 "lp.m"
    MR_Integer libs__lp__CastX_7 = (MR_Integer) libs__lp__HeadVar__1_1;
#line 628 "lp.m"
    MR_Integer libs__lp__CastY_8 = (MR_Integer) libs__lp__HeadVar__2_2;

#line 628 "lp.m"
    libs__lp__succeeded = (libs__lp__CastX_7 == libs__lp__CastY_8);
#line 628 "lp.m"
    if (libs__lp__succeeded)
#line 628 "lp.m"
      libs__lp__succeeded = MR_TRUE;
#line 628 "lp.m"
    else
#line 628 "lp.m"
      {
#line 628 "lp.m"
        MR_Integer libs__lp__V_3_3 = ((MR_Integer) (MR_hl_field(MR_mktag(0), libs__lp__HeadVar__1_1, (MR_Integer) 0)));
#line 628 "lp.m"
        MR_Integer libs__lp__V_4_4 = ((MR_Integer) (MR_hl_field(MR_mktag(0), libs__lp__HeadVar__1_1, (MR_Integer) 1)));
#line 628 "lp.m"
        MR_Integer libs__lp__V_5_5 = ((MR_Integer) (MR_hl_field(MR_mktag(0), libs__lp__HeadVar__2_2, (MR_Integer) 0)));
#line 628 "lp.m"
        MR_Integer libs__lp__V_6_6 = ((MR_Integer) (MR_hl_field(MR_mktag(0), libs__lp__HeadVar__2_2, (MR_Integer) 1)));

#line 7471 "libs.lp.c"
        libs__lp__succeeded = (libs__lp__V_3_3 == libs__lp__V_5_5);
#line 628 "lp.m"
        if (libs__lp__succeeded)
#line 7475 "libs.lp.c"
          libs__lp__succeeded = (libs__lp__V_4_4 == libs__lp__V_6_6);
#line 628 "lp.m"
      }
#line 628 "lp.m"
    return libs__lp__succeeded;
#line 628 "lp.m"
  }
#line 628 "lp.m"
}

#line 882 "lp.m"
static void MR_CALL 
libs__lp__between_3_p_0(
#line 882 "lp.m"
  MR_Integer libs__lp__Min_4,
#line 882 "lp.m"
  MR_Integer libs__lp__Max_5,
#line 882 "lp.m"
  MR_Integer * libs__lp__I_6,
#line 882 "lp.m"
  MR_Cont libs__lp__cont,
#line 882 "lp.m"
  void * libs__lp__cont_env_ptr)
#line 882 "lp.m"
{
#line 884 "lp.m"
  while (MR_TRUE)
#line 884 "lp.m"
    {
#line 884 "lp.m"
      /* tailcall optimized into a loop */
#line 884 "lp.m"
      {
#line 884 "lp.m"
        MR_bool libs__lp__succeeded = (libs__lp__Min_4 <= libs__lp__Max_5);

#line 884 "lp.m"
        if (libs__lp__succeeded)
#line 884 "lp.m"
          {
#line 887 "lp.m"
            *libs__lp__I_6 = libs__lp__Min_4;
#line 887 "lp.m"
            {
#line 887 "lp.m"
              libs__lp__cont(libs__lp__cont_env_ptr);
            }
#line 889 "lp.m"
            {
#line 889 "lp.m"
              MR_Integer libs__lp__Min1_7 = (libs__lp__Min_4 + (MR_Integer) 1);

#line 890 "lp.m"
              /* direct tailcall eliminated */
#line 890 "lp.m"
              {
#line 890 "lp.m"
                MR_Integer libs__lp__Min__tmp_copy_4 = libs__lp__Min1_7;

#line 890 "lp.m"
                libs__lp__Min_4 = libs__lp__Min__tmp_copy_4;
#line 890 "lp.m"
              }
#line 890 "lp.m"
              continue;
#line 889 "lp.m"
            }
#line 884 "lp.m"
          }
#line 884 "lp.m"
      }
#line 884 "lp.m"
      break;
#line 884 "lp.m"
    }
#line 882 "lp.m"
}

#line 856 "lp.m"
static void MR_CALL 
libs__lp__get_urs_vars_2_p_0(
#line 856 "lp.m"
  MR_Word libs__lp__Info_3,
#line 856 "lp.m"
  MR_Word * libs__lp__HeadVar__2_2)
#line 856 "lp.m"
{
#line 861 "lp.m"
  {
#line 861 "lp.m"
    MR_bool libs__lp__succeeded;
#line 861 "lp.m"
    MR_Word libs__lp__V_4_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), libs__lp__Info_3, (MR_Integer) 0)));
#line 861 "lp.m"
    MR_Word libs__lp__V_5_5;
#line 861 "lp.m"
    MR_Word libs__lp__V_6_6;

#line 861 "lp.m"
    *libs__lp__HeadVar__2_2 = ((MR_Word) (MR_hl_field(MR_mktag(0), libs__lp__Info_3, (MR_Integer) 1)));
#line 861 "lp.m"
    libs__lp__V_5_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), libs__lp__Info_3, (MR_Integer) 2)));
#line 861 "lp.m"
    libs__lp__V_6_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), libs__lp__Info_3, (MR_Integer) 3)));
#line 861 "lp.m"
  }
#line 856 "lp.m"
}

#line 844 "lp.m"
static void MR_CALL 
libs__lp__new_art_var_3_p_0(
#line 844 "lp.m"
  MR_Word * libs__lp__Var_4,
#line 844 "lp.m"
  MR_Word libs__lp__STATE_VARIABLE_Info_0_8,
#line 844 "lp.m"
  MR_Word * libs__lp__STATE_VARIABLE_Info_9)
#line 844 "lp.m"
{
#line 846 "lp.m"
  {
#line 846 "lp.m"
    MR_bool libs__lp__succeeded;
#line 846 "lp.m"
    MR_Word libs__lp__Vars_7;
#line 846 "lp.m"
    MR_Word libs__lp__STATE_VARIABLE_Varset_10_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), libs__lp__STATE_VARIABLE_Info_0_8, (MR_Integer) 0)));
#line 846 "lp.m"
    MR_Word libs__lp__STATE_VARIABLE_Varset_11_11;
#line 846 "lp.m"
    MR_Word libs__lp__V_13_13;
#line 846 "lp.m"
    MR_Word libs__lp__V_26_26;
#line 846 "lp.m"
    MR_Word libs__lp__V_27_27;
#line 860 "lp.m"
    MR_Word libs__lp__V_17_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), libs__lp__STATE_VARIABLE_Info_0_8, (MR_Integer) 1)));
#line 860 "lp.m"
    MR_Word libs__lp__V_18_18 = ((MR_Word) (MR_hl_field(MR_mktag(0), libs__lp__STATE_VARIABLE_Info_0_8, (MR_Integer) 2)));
#line 860 "lp.m"
    MR_Word libs__lp__V_19_19 = ((MR_Word) (MR_hl_field(MR_mktag(0), libs__lp__STATE_VARIABLE_Info_0_8, (MR_Integer) 3)));
#line 872 "lp.m"
    MR_Word libs__lp__V_25_25;

#line 849 "lp.m"
    {
#line 849 "lp.m"
      mercury__varset__new_var_3_p_0((MR_Word) &mercury__term__term__type_ctor_info_generic_0, libs__lp__Var_4, libs__lp__STATE_VARIABLE_Varset_10_10, &libs__lp__STATE_VARIABLE_Varset_11_11);
    }
#line 872 "lp.m"
    libs__lp__V_25_25 = ((MR_Word) (MR_hl_field(MR_mktag(0), libs__lp__STATE_VARIABLE_Info_0_8, (MR_Integer) 0)));
#line 872 "lp.m"
    libs__lp__V_26_26 = ((MR_Word) (MR_hl_field(MR_mktag(0), libs__lp__STATE_VARIABLE_Info_0_8, (MR_Integer) 1)));
#line 872 "lp.m"
    libs__lp__V_27_27 = ((MR_Word) (MR_hl_field(MR_mktag(0), libs__lp__STATE_VARIABLE_Info_0_8, (MR_Integer) 2)));
#line 872 "lp.m"
    libs__lp__Vars_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), libs__lp__STATE_VARIABLE_Info_0_8, (MR_Integer) 3)));
#line 853 "lp.m"
    {
#line 853 "lp.m"
      libs__lp__V_13_13 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 853 "lp.m"
      MR_hl_field(MR_mktag(1), libs__lp__V_13_13, 0) = ((MR_Box) (*libs__lp__Var_4));
#line 853 "lp.m"
      MR_hl_field(MR_mktag(1), libs__lp__V_13_13, 1) = ((MR_Box) (libs__lp__Vars_7));
#line 853 "lp.m"
    }
#line 878 "lp.m"
    {
#line 878 "lp.m"
      MR_Word base;
#line 878 "lp.m"
      base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
#line 878 "lp.m"
      *libs__lp__STATE_VARIABLE_Info_9 = base;
#line 878 "lp.m"
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (libs__lp__STATE_VARIABLE_Varset_11_11));
#line 878 "lp.m"
      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (libs__lp__V_26_26));
#line 878 "lp.m"
      MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (libs__lp__V_27_27));
#line 878 "lp.m"
      MR_hl_field(MR_mktag(0), base, 3) = ((MR_Box) (libs__lp__V_13_13));
#line 878 "lp.m"
    }
#line 846 "lp.m"
  }
#line 844 "lp.m"
}

#line 833 "lp.m"
static void MR_CALL 
libs__lp__new_slack_var_3_p_0(
#line 833 "lp.m"
  MR_Word * libs__lp__Var_4,
#line 833 "lp.m"
  MR_Word libs__lp__STATE_VARIABLE_Info_0_8,
#line 833 "lp.m"
  MR_Word * libs__lp__STATE_VARIABLE_Info_9)
#line 833 "lp.m"
{
#line 835 "lp.m"
  {
#line 835 "lp.m"
    MR_bool libs__lp__succeeded;
#line 835 "lp.m"
    MR_Word libs__lp__Vars_7;
#line 835 "lp.m"
    MR_Word libs__lp__STATE_VARIABLE_Varset_10_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), libs__lp__STATE_VARIABLE_Info_0_8, (MR_Integer) 0)));
#line 835 "lp.m"
    MR_Word libs__lp__STATE_VARIABLE_Varset_11_11;
#line 835 "lp.m"
    MR_Word libs__lp__V_13_13;
#line 835 "lp.m"
    MR_Word libs__lp__V_26_26;
#line 835 "lp.m"
    MR_Word libs__lp__V_28_28;
#line 860 "lp.m"
    MR_Word libs__lp__V_17_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), libs__lp__STATE_VARIABLE_Info_0_8, (MR_Integer) 1)));
#line 860 "lp.m"
    MR_Word libs__lp__V_18_18 = ((MR_Word) (MR_hl_field(MR_mktag(0), libs__lp__STATE_VARIABLE_Info_0_8, (MR_Integer) 2)));
#line 860 "lp.m"
    MR_Word libs__lp__V_19_19 = ((MR_Word) (MR_hl_field(MR_mktag(0), libs__lp__STATE_VARIABLE_Info_0_8, (MR_Integer) 3)));
#line 872 "lp.m"
    MR_Word libs__lp__V_25_25;

#line 838 "lp.m"
    {
#line 838 "lp.m"
      mercury__varset__new_var_3_p_0((MR_Word) &mercury__term__term__type_ctor_info_generic_0, libs__lp__Var_4, libs__lp__STATE_VARIABLE_Varset_10_10, &libs__lp__STATE_VARIABLE_Varset_11_11);
    }
#line 872 "lp.m"
    libs__lp__V_25_25 = ((MR_Word) (MR_hl_field(MR_mktag(0), libs__lp__STATE_VARIABLE_Info_0_8, (MR_Integer) 0)));
#line 872 "lp.m"
    libs__lp__V_26_26 = ((MR_Word) (MR_hl_field(MR_mktag(0), libs__lp__STATE_VARIABLE_Info_0_8, (MR_Integer) 1)));
#line 872 "lp.m"
    libs__lp__Vars_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), libs__lp__STATE_VARIABLE_Info_0_8, (MR_Integer) 2)));
#line 872 "lp.m"
    libs__lp__V_28_28 = ((MR_Word) (MR_hl_field(MR_mktag(0), libs__lp__STATE_VARIABLE_Info_0_8, (MR_Integer) 3)));
#line 842 "lp.m"
    {
#line 842 "lp.m"
      libs__lp__V_13_13 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 842 "lp.m"
      MR_hl_field(MR_mktag(1), libs__lp__V_13_13, 0) = ((MR_Box) (*libs__lp__Var_4));
#line 842 "lp.m"
      MR_hl_field(MR_mktag(1), libs__lp__V_13_13, 1) = ((MR_Box) (libs__lp__Vars_7));
#line 842 "lp.m"
    }
#line 876 "lp.m"
    {
#line 876 "lp.m"
      MR_Word base;
#line 876 "lp.m"
      base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
#line 876 "lp.m"
      *libs__lp__STATE_VARIABLE_Info_9 = base;
#line 876 "lp.m"
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (libs__lp__STATE_VARIABLE_Varset_11_11));
#line 876 "lp.m"
      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (libs__lp__V_26_26));
#line 876 "lp.m"
      MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (libs__lp__V_13_13));
#line 876 "lp.m"
      MR_hl_field(MR_mktag(0), base, 3) = ((MR_Box) (libs__lp__V_28_28));
#line 876 "lp.m"
    }
#line 835 "lp.m"
  }
#line 833 "lp.m"
}

#line 789 "lp.m"
static void MR_CALL 
libs__lp__remove_col_3_p_0(
#line 789 "lp.m"
  MR_Integer libs__lp__C_4,
#line 789 "lp.m"
  MR_Word libs__lp__Tableau0_5,
#line 789 "lp.m"
  MR_Word * libs__lp__Tableau_6)
#line 789 "lp.m"
{
#line 791 "lp.m"
  {
#line 791 "lp.m"
    MR_bool libs__lp__succeeded;
#line 791 "lp.m"
    MR_Integer libs__lp__Rows_7 = ((MR_Integer) (MR_hl_field(MR_mktag(0), libs__lp__Tableau0_5, (MR_Integer) 0)));
#line 791 "lp.m"
    MR_Integer libs__lp__Cols_8 = ((MR_Integer) (MR_hl_field(MR_mktag(0), libs__lp__Tableau0_5, (MR_Integer) 1)));
#line 791 "lp.m"
    MR_Word libs__lp__VarNums_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), libs__lp__Tableau0_5, (MR_Integer) 2)));
#line 791 "lp.m"
    MR_Word libs__lp__URS_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), libs__lp__Tableau0_5, (MR_Integer) 3)));
#line 791 "lp.m"
    MR_Word libs__lp__SR_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), libs__lp__Tableau0_5, (MR_Integer) 4)));
#line 791 "lp.m"
    MR_Word libs__lp__SC_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), libs__lp__Tableau0_5, (MR_Integer) 5)));
#line 791 "lp.m"
    MR_Word libs__lp__Cells_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), libs__lp__Tableau0_5, (MR_Integer) 6)));
#line 791 "lp.m"
    MR_Word libs__lp__V_14_14;

#line 793 "lp.m"
    {
#line 793 "lp.m"
      libs__lp__V_14_14 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 793 "lp.m"
      MR_hl_field(MR_mktag(1), libs__lp__V_14_14, 0) = ((MR_Box) (libs__lp__C_4));
#line 793 "lp.m"
      MR_hl_field(MR_mktag(1), libs__lp__V_14_14, 1) = ((MR_Box) (libs__lp__SC_12));
#line 793 "lp.m"
    }
#line 793 "lp.m"
    {
#line 793 "lp.m"
      MR_Word base;
#line 793 "lp.m"
      base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 7 * sizeof(MR_Word)), NULL, NULL);
#line 793 "lp.m"
      *libs__lp__Tableau_6 = base;
#line 793 "lp.m"
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (libs__lp__Rows_7));
#line 793 "lp.m"
      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (libs__lp__Cols_8));
#line 793 "lp.m"
      MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (libs__lp__VarNums_9));
#line 793 "lp.m"
      MR_hl_field(MR_mktag(0), base, 3) = ((MR_Box) (libs__lp__URS_10));
#line 793 "lp.m"
      MR_hl_field(MR_mktag(0), base, 4) = ((MR_Box) (libs__lp__SR_11));
#line 793 "lp.m"
      MR_hl_field(MR_mktag(0), base, 5) = ((MR_Box) (libs__lp__V_14_14));
#line 793 "lp.m"
      MR_hl_field(MR_mktag(0), base, 6) = ((MR_Box) (libs__lp__Cells_13));
#line 793 "lp.m"
    }
#line 791 "lp.m"
  }
#line 789 "lp.m"
}

#line 767 "lp.m"
static void MR_CALL 
libs__lp__all_cols_2_p_0_1(
#line 767 "lp.m"
  void * libs__lp__env_ptr_arg)
#line 767 "lp.m"
{
#line 767 "lp.m"
  {
#line 767 "lp.m"
    struct libs__lp__all_cols_2_p_0_env_0_s * libs__lp__env_ptr = (struct libs__lp__all_cols_2_p_0_env_0_s *) libs__lp__env_ptr_arg;

#line 767 "lp.m"
    {
#line 771 "lp.m"
      {
#line 771 "lp.m"
        (libs__lp__env_ptr)->libs__lp__all_cols_2_p_0_env_0__succeeded = mercury__list__member_2_p_0((MR_Word) &mercury__builtin__builtin__type_ctor_info_int_0, ((MR_Box) (*((libs__lp__env_ptr)->libs__lp__all_cols_2_p_0_env_0__Col_4))), (libs__lp__env_ptr)->libs__lp__all_cols_2_p_0_env_0__SC_10);
      }
#line 771 "lp.m"
      (libs__lp__env_ptr)->libs__lp__all_cols_2_p_0_env_0__succeeded = !((libs__lp__env_ptr)->libs__lp__all_cols_2_p_0_env_0__succeeded);
#line 771 "lp.m"
      if ((libs__lp__env_ptr)->libs__lp__all_cols_2_p_0_env_0__succeeded)
#line 771 "lp.m"
        {
#line 771 "lp.m"
          ((libs__lp__env_ptr)->libs__lp__all_cols_2_p_0_env_0__cont)((libs__lp__env_ptr)->libs__lp__all_cols_2_p_0_env_0__cont_env_ptr);
#line 771 "lp.m"
          return;
        }
#line 767 "lp.m"
    }
#line 767 "lp.m"
  }
#line 767 "lp.m"
}

#line 765 "lp.m"
static void MR_CALL 
libs__lp__all_cols_2_p_0(
#line 765 "lp.m"
  MR_Word libs__lp__Tableau_3,
#line 765 "lp.m"
  MR_Integer * libs__lp__Col_4,
#line 765 "lp.m"
  MR_Cont libs__lp__cont,
#line 765 "lp.m"
  void * libs__lp__cont_env_ptr)
#line 765 "lp.m"
{
#line 765 "lp.m"
  {
#line 765 "lp.m"
    struct libs__lp__all_cols_2_p_0_env_0_s libs__lp__env;

#line 765 "lp.m"
    (libs__lp__env).libs__lp__all_cols_2_p_0_env_0__Col_4 = libs__lp__Col_4;
#line 765 "lp.m"
    (libs__lp__env).libs__lp__all_cols_2_p_0_env_0__cont = libs__lp__cont;
#line 765 "lp.m"
    (libs__lp__env).libs__lp__all_cols_2_p_0_env_0__cont_env_ptr = libs__lp__cont_env_ptr;
#line 767 "lp.m"
    {
#line 767 "lp.m"
      MR_Integer libs__lp__Cols_6 = ((MR_Integer) (MR_hl_field(MR_mktag(0), libs__lp__Tableau_3, (MR_Integer) 1)));
#line 767 "lp.m"
      MR_Integer libs__lp__Cols1_12;
#line 768 "lp.m"
      MR_Integer libs__lp___Rows_5 = ((MR_Integer) (MR_hl_field(MR_mktag(0), libs__lp__Tableau_3, (MR_Integer) 0)));
#line 768 "lp.m"
      MR_Word libs__lp__V_7_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), libs__lp__Tableau_3, (MR_Integer) 2)));
#line 768 "lp.m"
      MR_Word libs__lp__V_8_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), libs__lp__Tableau_3, (MR_Integer) 3)));
#line 768 "lp.m"
      MR_Word libs__lp__V_9_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), libs__lp__Tableau_3, (MR_Integer) 4)));
#line 768 "lp.m"
      MR_Word libs__lp__V_11_11;

#line 768 "lp.m"
      (libs__lp__env).libs__lp__all_cols_2_p_0_env_0__SC_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), libs__lp__Tableau_3, (MR_Integer) 5)));
#line 768 "lp.m"
      libs__lp__V_11_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), libs__lp__Tableau_3, (MR_Integer) 6)));
#line 769 "lp.m"
      libs__lp__Cols1_12 = (libs__lp__Cols_6 - (MR_Integer) 1);
#line 770 "lp.m"
      {
#line 770 "lp.m"
        libs__lp__between_3_p_0((MR_Integer) 0, libs__lp__Cols1_12, (libs__lp__env).libs__lp__all_cols_2_p_0_env_0__Col_4, libs__lp__all_cols_2_p_0_1, &libs__lp__env);
      }
#line 767 "lp.m"
    }
#line 765 "lp.m"
  }
#line 765 "lp.m"
}

#line 760 "lp.m"
static void MR_CALL 
libs__lp__all_cols0_2_p_0_1(
#line 760 "lp.m"
  void * libs__lp__env_ptr_arg)
#line 760 "lp.m"
{
#line 760 "lp.m"
  {
#line 760 "lp.m"
    struct libs__lp__all_cols0_2_p_0_env_0_s * libs__lp__env_ptr = (struct libs__lp__all_cols0_2_p_0_env_0_s *) libs__lp__env_ptr_arg;

#line 760 "lp.m"
    {
#line 763 "lp.m"
      {
#line 763 "lp.m"
        (libs__lp__env_ptr)->libs__lp__all_cols0_2_p_0_env_0__succeeded = mercury__list__member_2_p_0((MR_Word) &mercury__builtin__builtin__type_ctor_info_int_0, ((MR_Box) (*((libs__lp__env_ptr)->libs__lp__all_cols0_2_p_0_env_0__Col_4))), (libs__lp__env_ptr)->libs__lp__all_cols0_2_p_0_env_0__SC_10);
      }
#line 763 "lp.m"
      (libs__lp__env_ptr)->libs__lp__all_cols0_2_p_0_env_0__succeeded = !((libs__lp__env_ptr)->libs__lp__all_cols0_2_p_0_env_0__succeeded);
#line 763 "lp.m"
      if ((libs__lp__env_ptr)->libs__lp__all_cols0_2_p_0_env_0__succeeded)
#line 763 "lp.m"
        {
#line 763 "lp.m"
          ((libs__lp__env_ptr)->libs__lp__all_cols0_2_p_0_env_0__cont)((libs__lp__env_ptr)->libs__lp__all_cols0_2_p_0_env_0__cont_env_ptr);
#line 763 "lp.m"
          return;
        }
#line 760 "lp.m"
    }
#line 760 "lp.m"
  }
#line 760 "lp.m"
}

#line 758 "lp.m"
static void MR_CALL 
libs__lp__all_cols0_2_p_0(
#line 758 "lp.m"
  MR_Word libs__lp__Tableau_3,
#line 758 "lp.m"
  MR_Integer * libs__lp__Col_4,
#line 758 "lp.m"
  MR_Cont libs__lp__cont,
#line 758 "lp.m"
  void * libs__lp__cont_env_ptr)
#line 758 "lp.m"
{
#line 758 "lp.m"
  {
#line 758 "lp.m"
    struct libs__lp__all_cols0_2_p_0_env_0_s libs__lp__env;

#line 758 "lp.m"
    (libs__lp__env).libs__lp__all_cols0_2_p_0_env_0__Col_4 = libs__lp__Col_4;
#line 758 "lp.m"
    (libs__lp__env).libs__lp__all_cols0_2_p_0_env_0__cont = libs__lp__cont;
#line 758 "lp.m"
    (libs__lp__env).libs__lp__all_cols0_2_p_0_env_0__cont_env_ptr = libs__lp__cont_env_ptr;
#line 760 "lp.m"
    {
#line 760 "lp.m"
      MR_Integer libs__lp__Cols_6 = ((MR_Integer) (MR_hl_field(MR_mktag(0), libs__lp__Tableau_3, (MR_Integer) 1)));
#line 761 "lp.m"
      MR_Integer libs__lp___Rows_5 = ((MR_Integer) (MR_hl_field(MR_mktag(0), libs__lp__Tableau_3, (MR_Integer) 0)));
#line 761 "lp.m"
      MR_Word libs__lp__V_7_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), libs__lp__Tableau_3, (MR_Integer) 2)));
#line 761 "lp.m"
      MR_Word libs__lp__V_8_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), libs__lp__Tableau_3, (MR_Integer) 3)));
#line 761 "lp.m"
      MR_Word libs__lp__V_9_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), libs__lp__Tableau_3, (MR_Integer) 4)));
#line 761 "lp.m"
      MR_Word libs__lp__V_11_11;

#line 761 "lp.m"
      (libs__lp__env).libs__lp__all_cols0_2_p_0_env_0__SC_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), libs__lp__Tableau_3, (MR_Integer) 5)));
#line 761 "lp.m"
      libs__lp__V_11_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), libs__lp__Tableau_3, (MR_Integer) 6)));
#line 762 "lp.m"
      {
#line 762 "lp.m"
        libs__lp__between_3_p_0((MR_Integer) 0, libs__lp__Cols_6, (libs__lp__env).libs__lp__all_cols0_2_p_0_env_0__Col_4, libs__lp__all_cols0_2_p_0_1, &libs__lp__env);
      }
#line 760 "lp.m"
    }
#line 758 "lp.m"
  }
#line 758 "lp.m"
}

#line 753 "lp.m"
static void MR_CALL 
libs__lp__all_rows_2_p_0_1(
#line 753 "lp.m"
  void * libs__lp__env_ptr_arg)
#line 753 "lp.m"
{
#line 753 "lp.m"
  {
#line 753 "lp.m"
    struct libs__lp__all_rows_2_p_0_env_0_s * libs__lp__env_ptr = (struct libs__lp__all_rows_2_p_0_env_0_s *) libs__lp__env_ptr_arg;

#line 753 "lp.m"
    {
#line 756 "lp.m"
      {
#line 756 "lp.m"
        (libs__lp__env_ptr)->libs__lp__all_rows_2_p_0_env_0__succeeded = mercury__list__member_2_p_0((MR_Word) &mercury__builtin__builtin__type_ctor_info_int_0, ((MR_Box) (*((libs__lp__env_ptr)->libs__lp__all_rows_2_p_0_env_0__Row_4))), (libs__lp__env_ptr)->libs__lp__all_rows_2_p_0_env_0__SR_9);
      }
#line 756 "lp.m"
      (libs__lp__env_ptr)->libs__lp__all_rows_2_p_0_env_0__succeeded = !((libs__lp__env_ptr)->libs__lp__all_rows_2_p_0_env_0__succeeded);
#line 756 "lp.m"
      if ((libs__lp__env_ptr)->libs__lp__all_rows_2_p_0_env_0__succeeded)
#line 756 "lp.m"
        {
#line 756 "lp.m"
          ((libs__lp__env_ptr)->libs__lp__all_rows_2_p_0_env_0__cont)((libs__lp__env_ptr)->libs__lp__all_rows_2_p_0_env_0__cont_env_ptr);
#line 756 "lp.m"
          return;
        }
#line 753 "lp.m"
    }
#line 753 "lp.m"
  }
#line 753 "lp.m"
}

#line 751 "lp.m"
static void MR_CALL 
libs__lp__all_rows_2_p_0(
#line 751 "lp.m"
  MR_Word libs__lp__Tableau_3,
#line 751 "lp.m"
  MR_Integer * libs__lp__Row_4,
#line 751 "lp.m"
  MR_Cont libs__lp__cont,
#line 751 "lp.m"
  void * libs__lp__cont_env_ptr)
#line 751 "lp.m"
{
#line 751 "lp.m"
  {
#line 751 "lp.m"
    struct libs__lp__all_rows_2_p_0_env_0_s libs__lp__env;

#line 751 "lp.m"
    (libs__lp__env).libs__lp__all_rows_2_p_0_env_0__Row_4 = libs__lp__Row_4;
#line 751 "lp.m"
    (libs__lp__env).libs__lp__all_rows_2_p_0_env_0__cont = libs__lp__cont;
#line 751 "lp.m"
    (libs__lp__env).libs__lp__all_rows_2_p_0_env_0__cont_env_ptr = libs__lp__cont_env_ptr;
#line 753 "lp.m"
    {
#line 753 "lp.m"
      MR_Integer libs__lp__Rows_5 = ((MR_Integer) (MR_hl_field(MR_mktag(0), libs__lp__Tableau_3, (MR_Integer) 0)));
#line 754 "lp.m"
      MR_Integer libs__lp___Cols_6 = ((MR_Integer) (MR_hl_field(MR_mktag(0), libs__lp__Tableau_3, (MR_Integer) 1)));
#line 754 "lp.m"
      MR_Word libs__lp__V_7_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), libs__lp__Tableau_3, (MR_Integer) 2)));
#line 754 "lp.m"
      MR_Word libs__lp__V_8_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), libs__lp__Tableau_3, (MR_Integer) 3)));
#line 754 "lp.m"
      MR_Word libs__lp__V_10_10;
#line 754 "lp.m"
      MR_Word libs__lp__V_11_11;

#line 754 "lp.m"
      (libs__lp__env).libs__lp__all_rows_2_p_0_env_0__SR_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), libs__lp__Tableau_3, (MR_Integer) 4)));
#line 754 "lp.m"
      libs__lp__V_10_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), libs__lp__Tableau_3, (MR_Integer) 5)));
#line 754 "lp.m"
      libs__lp__V_11_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), libs__lp__Tableau_3, (MR_Integer) 6)));
#line 755 "lp.m"
      {
#line 755 "lp.m"
        libs__lp__between_3_p_0((MR_Integer) 1, libs__lp__Rows_5, (libs__lp__env).libs__lp__all_rows_2_p_0_env_0__Row_4, libs__lp__all_rows_2_p_0_1, &libs__lp__env);
      }
#line 753 "lp.m"
    }
#line 751 "lp.m"
  }
#line 751 "lp.m"
}

#line 721 "lp.m"
static void MR_CALL 
libs__lp__set_index_5_p_0(
#line 721 "lp.m"
  MR_Integer libs__lp__J_6,
#line 721 "lp.m"
  MR_Integer libs__lp__K_7,
#line 721 "lp.m"
  MR_Float libs__lp__R_8,
#line 721 "lp.m"
  MR_Word libs__lp__STATE_VARIABLE_Tableau_0_18,
#line 721 "lp.m"
  MR_Word * libs__lp__STATE_VARIABLE_Tableau_19)
#line 721 "lp.m"
{
#line 724 "lp.m"
  {
#line 724 "lp.m"
    MR_bool libs__lp__succeeded;
#line 724 "lp.m"
    MR_Integer libs__lp__Rows_10 = ((MR_Integer) (MR_hl_field(MR_mktag(0), libs__lp__STATE_VARIABLE_Tableau_0_18, (MR_Integer) 0)));
#line 724 "lp.m"
    MR_Integer libs__lp__Cols_11 = ((MR_Integer) (MR_hl_field(MR_mktag(0), libs__lp__STATE_VARIABLE_Tableau_0_18, (MR_Integer) 1)));
#line 724 "lp.m"
    MR_Word libs__lp__VarNums_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), libs__lp__STATE_VARIABLE_Tableau_0_18, (MR_Integer) 2)));
#line 724 "lp.m"
    MR_Word libs__lp__URS_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), libs__lp__STATE_VARIABLE_Tableau_0_18, (MR_Integer) 3)));
#line 724 "lp.m"
    MR_Word libs__lp__SR_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), libs__lp__STATE_VARIABLE_Tableau_0_18, (MR_Integer) 4)));
#line 724 "lp.m"
    MR_Word libs__lp__SC_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), libs__lp__STATE_VARIABLE_Tableau_0_18, (MR_Integer) 5)));
#line 724 "lp.m"
    MR_Word libs__lp__Cells0_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), libs__lp__STATE_VARIABLE_Tableau_0_18, (MR_Integer) 6)));
#line 724 "lp.m"
    MR_Word libs__lp__Cells_17;

#line 727 "lp.m"
    {
#line 727 "lp.m"
      libs__lp__succeeded = mercury__list__member_2_p_0((MR_Word) &mercury__builtin__builtin__type_ctor_info_int_0, ((MR_Box) (libs__lp__J_6)), libs__lp__SR_14);
    }
#line 727 "lp.m"
    if (!(libs__lp__succeeded))
#line 727 "lp.m"
      {
#line 727 "lp.m"
        {
#line 727 "lp.m"
          libs__lp__succeeded = mercury__list__member_2_p_0((MR_Word) &mercury__builtin__builtin__type_ctor_info_int_0, ((MR_Box) (libs__lp__K_7)), libs__lp__SC_15);
        }
#line 727 "lp.m"
      }
#line 730 "lp.m"
    if (libs__lp__succeeded)
#line 729 "lp.m"
      {
#line 729 "lp.m"
        {
#line 729 "lp.m"
          mercury__require__unexpected_3_p_0((MR_String) "libs.lp", (MR_String) "predicate \140libs.lp.set_index\'/5", (MR_String) "attempt to write shunned row/col");
#line 729 "lp.m"
          return;
        }
#line 729 "lp.m"
      }
#line 730 "lp.m"
    else
#line 731 "lp.m"
      {
#line 731 "lp.m"
      }
#line 733 "lp.m"
    libs__lp__succeeded = (libs__lp__R_8 == ((MR_Float) 0.0000000000000000));
#line 735 "lp.m"
    if (libs__lp__succeeded)
#line 734 "lp.m"
      {
#line 734 "lp.m"
        MR_Word libs__lp__V_23_23;

#line 734 "lp.m"
        {
#line 734 "lp.m"
          libs__lp__V_23_23 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 734 "lp.m"
          MR_hl_field(MR_mktag(0), libs__lp__V_23_23, 0) = ((MR_Box) (libs__lp__J_6));
#line 734 "lp.m"
          MR_hl_field(MR_mktag(0), libs__lp__V_23_23, 1) = ((MR_Box) (libs__lp__K_7));
#line 734 "lp.m"
        }
#line 734 "lp.m"
        {
#line 734 "lp.m"
          mercury__map__delete_3_p_0((MR_Word) &libs__lp_scalar_common_2[5], (MR_Word) &mercury__builtin__builtin__type_ctor_info_float_0, ((MR_Box) (libs__lp__V_23_23)), libs__lp__Cells0_16, &libs__lp__Cells_17);
        }
#line 734 "lp.m"
      }
#line 735 "lp.m"
    else
#line 736 "lp.m"
      {
#line 736 "lp.m"
        MR_Word libs__lp__V_24_24;

#line 736 "lp.m"
        {
#line 736 "lp.m"
          libs__lp__V_24_24 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 736 "lp.m"
          MR_hl_field(MR_mktag(0), libs__lp__V_24_24, 0) = ((MR_Box) (libs__lp__J_6));
#line 736 "lp.m"
          MR_hl_field(MR_mktag(0), libs__lp__V_24_24, 1) = ((MR_Box) (libs__lp__K_7));
#line 736 "lp.m"
        }
#line 736 "lp.m"
        {
#line 736 "lp.m"
          mercury__map__set_4_p_0((MR_Word) &libs__lp_scalar_common_2[5], (MR_Word) &mercury__builtin__builtin__type_ctor_info_float_0, ((MR_Box) (libs__lp__V_24_24)), MR_box_float(libs__lp__R_8), libs__lp__Cells0_16, &libs__lp__Cells_17);
        }
#line 736 "lp.m"
      }
#line 738 "lp.m"
    {
#line 738 "lp.m"
      MR_Word base;
#line 738 "lp.m"
      base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 7 * sizeof(MR_Word)), NULL, NULL);
#line 738 "lp.m"
      *libs__lp__STATE_VARIABLE_Tableau_19 = base;
#line 738 "lp.m"
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (libs__lp__Rows_10));
#line 738 "lp.m"
      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (libs__lp__Cols_11));
#line 738 "lp.m"
      MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (libs__lp__VarNums_12));
#line 738 "lp.m"
      MR_hl_field(MR_mktag(0), base, 3) = ((MR_Box) (libs__lp__URS_13));
#line 738 "lp.m"
      MR_hl_field(MR_mktag(0), base, 4) = ((MR_Box) (libs__lp__SR_14));
#line 738 "lp.m"
      MR_hl_field(MR_mktag(0), base, 5) = ((MR_Box) (libs__lp__SC_15));
#line 738 "lp.m"
      MR_hl_field(MR_mktag(0), base, 6) = ((MR_Box) (libs__lp__Cells_17));
#line 738 "lp.m"
    }
#line 724 "lp.m"
  }
#line 721 "lp.m"
}

#line 702 "lp.m"
static void MR_CALL 
libs__lp__index_4_p_0(
#line 702 "lp.m"
  MR_Word libs__lp__Tableau_5,
#line 702 "lp.m"
  MR_Integer libs__lp__J_6,
#line 702 "lp.m"
  MR_Integer libs__lp__K_7,
#line 702 "lp.m"
  MR_Float * libs__lp__R_8)
#line 702 "lp.m"
{
#line 704 "lp.m"
  {
#line 704 "lp.m"
    MR_bool libs__lp__succeeded;
#line 704 "lp.m"
    MR_Word libs__lp__SR_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), libs__lp__Tableau_5, (MR_Integer) 4)));
#line 704 "lp.m"
    MR_Word libs__lp__SC_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), libs__lp__Tableau_5, (MR_Integer) 5)));
#line 704 "lp.m"
    MR_Word libs__lp__Cells_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), libs__lp__Tableau_5, (MR_Integer) 6)));
#line 705 "lp.m"
    MR_Integer libs__lp__V_9_9 = ((MR_Integer) (MR_hl_field(MR_mktag(0), libs__lp__Tableau_5, (MR_Integer) 0)));
#line 705 "lp.m"
    MR_Integer libs__lp__V_10_10 = ((MR_Integer) (MR_hl_field(MR_mktag(0), libs__lp__Tableau_5, (MR_Integer) 1)));
#line 705 "lp.m"
    MR_Word libs__lp__V_11_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), libs__lp__Tableau_5, (MR_Integer) 2)));
#line 705 "lp.m"
    MR_Word libs__lp__V_12_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), libs__lp__Tableau_5, (MR_Integer) 3)));
#line 717 "lp.m"
    MR_Float libs__lp__R0_16;
#line 714 "lp.m"
    MR_Word libs__lp__V_20_20;
#line 714 "lp.m"
    MR_Box libs__lp__conv0_R0_16;

#line 707 "lp.m"
    {
#line 707 "lp.m"
      libs__lp__succeeded = mercury__list__member_2_p_0((MR_Word) &mercury__builtin__builtin__type_ctor_info_int_0, ((MR_Box) (libs__lp__J_6)), libs__lp__SR_13);
    }
#line 707 "lp.m"
    if (!(libs__lp__succeeded))
#line 707 "lp.m"
      {
#line 707 "lp.m"
        {
#line 707 "lp.m"
          libs__lp__succeeded = mercury__list__member_2_p_0((MR_Word) &mercury__builtin__builtin__type_ctor_info_int_0, ((MR_Box) (libs__lp__K_7)), libs__lp__SC_14);
        }
#line 707 "lp.m"
      }
#line 710 "lp.m"
    if (libs__lp__succeeded)
#line 709 "lp.m"
      {
#line 709 "lp.m"
        {
#line 709 "lp.m"
          mercury__require__unexpected_3_p_0((MR_String) "libs.lp", (MR_String) "predicate \140libs.lp.index\'/4", (MR_String) "attempt to address shunned row/col");
#line 709 "lp.m"
          return;
        }
#line 709 "lp.m"
      }
#line 710 "lp.m"
    else
#line 711 "lp.m"
      {
#line 711 "lp.m"
      }
#line 714 "lp.m"
    {
#line 714 "lp.m"
      libs__lp__V_20_20 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 714 "lp.m"
      MR_hl_field(MR_mktag(0), libs__lp__V_20_20, 0) = ((MR_Box) (libs__lp__J_6));
#line 714 "lp.m"
      MR_hl_field(MR_mktag(0), libs__lp__V_20_20, 1) = ((MR_Box) (libs__lp__K_7));
#line 714 "lp.m"
    }
#line 714 "lp.m"
    {
#line 714 "lp.m"
      libs__lp__succeeded = mercury__map__search_3_p_0((MR_Word) &libs__lp_scalar_common_2[5], (MR_Word) &mercury__builtin__builtin__type_ctor_info_float_0, libs__lp__Cells_15, ((MR_Box) (libs__lp__V_20_20)), &libs__lp__conv0_R0_16);
    }
#line 714 "lp.m"
    if (libs__lp__succeeded)
#line 714 "lp.m"
      {
#line 714 "lp.m"
        libs__lp__R0_16 = MR_unbox_float(libs__lp__conv0_R0_16);
#line 714 "lp.m"
        libs__lp__succeeded = MR_TRUE;
#line 714 "lp.m"
      }
#line 717 "lp.m"
    if (libs__lp__succeeded)
#line 716 "lp.m"
      *libs__lp__R_8 = libs__lp__R0_16;
#line 717 "lp.m"
    else
#line 718 "lp.m"
      *libs__lp__R_8 = (MR_Float) 0.0000000000000000;
#line 704 "lp.m"
  }
#line 702 "lp.m"
}

#line 695 "lp.m"
static void MR_CALL 
libs__lp__init_tableau_5_p_0(
#line 695 "lp.m"
  MR_Integer libs__lp__Rows_6,
#line 695 "lp.m"
  MR_Integer libs__lp__Cols_7,
#line 695 "lp.m"
  MR_Word libs__lp__VarNums_8,
#line 695 "lp.m"
  MR_Word libs__lp__URSVars_9,
#line 695 "lp.m"
  MR_Word * libs__lp__Tableau_10)
#line 695 "lp.m"
{
#line 698 "lp.m"
  {
#line 698 "lp.m"
    MR_bool libs__lp__succeeded;
#line 698 "lp.m"
    MR_Word libs__lp__Cells_11;

#line 699 "lp.m"
    {
#line 699 "lp.m"
      mercury__map__init_1_p_0((MR_Word) &libs__lp_scalar_common_2[5], (MR_Word) &mercury__builtin__builtin__type_ctor_info_float_0, &libs__lp__Cells_11);
    }
#line 700 "lp.m"
    {
#line 700 "lp.m"
      MR_Word base;
#line 700 "lp.m"
      base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 7 * sizeof(MR_Word)), NULL, NULL);
#line 700 "lp.m"
      *libs__lp__Tableau_10 = base;
#line 700 "lp.m"
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (libs__lp__Rows_6));
#line 700 "lp.m"
      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (libs__lp__Cols_7));
#line 700 "lp.m"
      MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (libs__lp__VarNums_8));
#line 700 "lp.m"
      MR_hl_field(MR_mktag(0), base, 3) = ((MR_Box) (libs__lp__URSVars_9));
#line 700 "lp.m"
      MR_hl_field(MR_mktag(0), base, 4) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 700 "lp.m"
      MR_hl_field(MR_mktag(0), base, 5) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 700 "lp.m"
      MR_hl_field(MR_mktag(0), base, 6) = ((MR_Box) (libs__lp__Cells_11));
#line 700 "lp.m"
    }
#line 698 "lp.m"
  }
#line 695 "lp.m"
}

#line 661 "lp.m"
static void MR_CALL 
libs__lp__pivot_4_p_0_9(
#line 661 "lp.m"
  MR_Box libs__lp__closure_arg,
#line 661 "lp.m"
  MR_Box libs__lp__wrapper_arg_1,
#line 661 "lp.m"
  MR_Box libs__lp__wrapper_arg_2,
#line 661 "lp.m"
  MR_Box * libs__lp__wrapper_arg_3)
#line 661 "lp.m"
{
#line 661 "lp.m"
  {
#line 661 "lp.m"
    MR_Box libs__lp__closure = libs__lp__closure_arg;
#line 661 "lp.m"
    MR_Word libs__lp__conv7_HeadVar__5_45;

#line 661 "lp.m"
    {
#line 661 "lp.m"
      libs__lp__IntroducedFrom__pred__pivot__661__1_5_p_0(((MR_Integer) (MR_hl_field(MR_mktag(0), libs__lp__closure, (MR_Integer) 3))), MR_unbox_float((MR_hl_field(MR_mktag(0), libs__lp__closure, (MR_Integer) 4))), ((MR_Integer) libs__lp__wrapper_arg_1), ((MR_Word) libs__lp__wrapper_arg_2), &libs__lp__conv7_HeadVar__5_45);
    }
#line 661 "lp.m"
    *libs__lp__wrapper_arg_3 = ((MR_Box) (libs__lp__conv7_HeadVar__5_45));
#line 661 "lp.m"
  }
#line 661 "lp.m"
}

#line 660 "lp.m"
static void MR_CALL 
libs__lp__pivot_4_p_0_7(
#line 660 "lp.m"
  void * libs__lp__env_ptr_arg)
#line 660 "lp.m"
{
#line 660 "lp.m"
  {
#line 660 "lp.m"
    struct libs__lp__pivot_4_p_0_8_env_0_s * libs__lp__env_ptr = (struct libs__lp__pivot_4_p_0_8_env_0_s *) libs__lp__env_ptr_arg;

#line 660 "lp.m"
    *((libs__lp__env_ptr)->libs__lp__pivot_4_p_0_8_env_0__wrapper_arg_1) = ((MR_Box) ((libs__lp__env_ptr)->libs__lp__pivot_4_p_0_8_env_0__conv6_Col_4));
#line 660 "lp.m"
    {
#line 660 "lp.m"
      ((libs__lp__env_ptr)->libs__lp__pivot_4_p_0_8_env_0__cont)((libs__lp__env_ptr)->libs__lp__pivot_4_p_0_8_env_0__cont_env_ptr);
#line 660 "lp.m"
      return;
    }
#line 660 "lp.m"
  }
#line 660 "lp.m"
}

#line 660 "lp.m"
static void MR_CALL 
libs__lp__pivot_4_p_0_8(
#line 660 "lp.m"
  MR_Box libs__lp__closure_arg,
#line 660 "lp.m"
  MR_Box * libs__lp__wrapper_arg_1,
#line 660 "lp.m"
  MR_Cont libs__lp__cont,
#line 660 "lp.m"
  void * libs__lp__cont_env_ptr)
#line 660 "lp.m"
{
#line 660 "lp.m"
  {
#line 660 "lp.m"
    struct libs__lp__pivot_4_p_0_8_env_0_s libs__lp__env;

#line 660 "lp.m"
    (libs__lp__env).libs__lp__pivot_4_p_0_8_env_0__wrapper_arg_1 = libs__lp__wrapper_arg_1;
#line 660 "lp.m"
    (libs__lp__env).libs__lp__pivot_4_p_0_8_env_0__cont = libs__lp__cont;
#line 660 "lp.m"
    (libs__lp__env).libs__lp__pivot_4_p_0_8_env_0__cont_env_ptr = libs__lp__cont_env_ptr;
#line 660 "lp.m"
    {
#line 660 "lp.m"
      MR_Box libs__lp__closure = libs__lp__closure_arg;

#line 660 "lp.m"
      {
#line 660 "lp.m"
        libs__lp__all_cols0_2_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), libs__lp__closure, (MR_Integer) 3))), &(libs__lp__env).libs__lp__pivot_4_p_0_8_env_0__conv6_Col_4, libs__lp__pivot_4_p_0_7, &libs__lp__env);
      }
#line 660 "lp.m"
    }
#line 660 "lp.m"
  }
#line 660 "lp.m"
}

#line 655 "lp.m"
static void MR_CALL 
libs__lp__pivot_4_p_0_6(
#line 655 "lp.m"
  MR_Box libs__lp__closure_arg,
#line 655 "lp.m"
  MR_Box libs__lp__wrapper_arg_1,
#line 655 "lp.m"
  MR_Box libs__lp__wrapper_arg_2,
#line 655 "lp.m"
  MR_Box * libs__lp__wrapper_arg_3)
#line 655 "lp.m"
{
#line 655 "lp.m"
  {
#line 655 "lp.m"
    MR_Box libs__lp__closure = libs__lp__closure_arg;
#line 655 "lp.m"
    MR_Word libs__lp__conv4_HeadVar__3_40;

#line 655 "lp.m"
    {
#line 655 "lp.m"
      libs__lp__IntroducedFrom__pred__pivot__655__1_3_p_0(((MR_Word) libs__lp__wrapper_arg_1), ((MR_Word) libs__lp__wrapper_arg_2), &libs__lp__conv4_HeadVar__3_40);
    }
#line 655 "lp.m"
    *libs__lp__wrapper_arg_3 = ((MR_Box) (libs__lp__conv4_HeadVar__3_40));
#line 655 "lp.m"
  }
#line 655 "lp.m"
}

#line 651 "lp.m"
static void MR_CALL 
libs__lp__pivot_4_p_0_4(
#line 651 "lp.m"
  void * libs__lp__env_ptr_arg)
#line 651 "lp.m"
{
#line 651 "lp.m"
  {
#line 651 "lp.m"
    struct libs__lp__pivot_4_p_0_5_env_0_s * libs__lp__env_ptr = (struct libs__lp__pivot_4_p_0_5_env_0_s *) libs__lp__env_ptr_arg;

#line 651 "lp.m"
    *((libs__lp__env_ptr)->libs__lp__pivot_4_p_0_5_env_0__wrapper_arg_1) = ((MR_Box) ((libs__lp__env_ptr)->libs__lp__pivot_4_p_0_5_env_0__conv3_HeadVar__3_37));
#line 651 "lp.m"
    {
#line 651 "lp.m"
      ((libs__lp__env_ptr)->libs__lp__pivot_4_p_0_5_env_0__cont)((libs__lp__env_ptr)->libs__lp__pivot_4_p_0_5_env_0__cont_env_ptr);
#line 651 "lp.m"
      return;
    }
#line 651 "lp.m"
  }
#line 651 "lp.m"
}

#line 651 "lp.m"
static void MR_CALL 
libs__lp__pivot_4_p_0_5(
#line 651 "lp.m"
  MR_Box libs__lp__closure_arg,
#line 651 "lp.m"
  MR_Box * libs__lp__wrapper_arg_1,
#line 651 "lp.m"
  MR_Cont libs__lp__cont,
#line 651 "lp.m"
  void * libs__lp__cont_env_ptr)
#line 651 "lp.m"
{
#line 651 "lp.m"
  {
#line 651 "lp.m"
    struct libs__lp__pivot_4_p_0_5_env_0_s libs__lp__env;

#line 651 "lp.m"
    (libs__lp__env).libs__lp__pivot_4_p_0_5_env_0__wrapper_arg_1 = libs__lp__wrapper_arg_1;
#line 651 "lp.m"
    (libs__lp__env).libs__lp__pivot_4_p_0_5_env_0__cont = libs__lp__cont;
#line 651 "lp.m"
    (libs__lp__env).libs__lp__pivot_4_p_0_5_env_0__cont_env_ptr = libs__lp__cont_env_ptr;
#line 651 "lp.m"
    {
#line 651 "lp.m"
      MR_Box libs__lp__closure = libs__lp__closure_arg;

#line 651 "lp.m"
      {
#line 651 "lp.m"
        libs__lp__IntroducedFrom__pred__pivot__651__1_3_p_0(((MR_Integer) (MR_hl_field(MR_mktag(0), libs__lp__closure, (MR_Integer) 3))), ((MR_Word) (MR_hl_field(MR_mktag(0), libs__lp__closure, (MR_Integer) 4))), &(libs__lp__env).libs__lp__pivot_4_p_0_5_env_0__conv3_HeadVar__3_37, libs__lp__pivot_4_p_0_4, &libs__lp__env);
      }
#line 651 "lp.m"
    }
#line 651 "lp.m"
  }
#line 651 "lp.m"
}

#line 642 "lp.m"
static void MR_CALL 
libs__lp__pivot_4_p_0_3(
#line 642 "lp.m"
  MR_Box libs__lp__closure_arg,
#line 642 "lp.m"
  MR_Box libs__lp__wrapper_arg_1,
#line 642 "lp.m"
  MR_Box libs__lp__wrapper_arg_2,
#line 642 "lp.m"
  MR_Box * libs__lp__wrapper_arg_3)
#line 642 "lp.m"
{
#line 642 "lp.m"
  {
#line 642 "lp.m"
    MR_Box libs__lp__closure = libs__lp__closure_arg;
#line 642 "lp.m"
    MR_Word libs__lp__conv1_HeadVar__6_32;

#line 642 "lp.m"
    {
#line 642 "lp.m"
      libs__lp__IntroducedFrom__pred__pivot__642__1_6_p_0(((MR_Integer) (MR_hl_field(MR_mktag(0), libs__lp__closure, (MR_Integer) 3))), ((MR_Integer) (MR_hl_field(MR_mktag(0), libs__lp__closure, (MR_Integer) 4))), MR_unbox_float((MR_hl_field(MR_mktag(0), libs__lp__closure, (MR_Integer) 5))), ((MR_Word) libs__lp__wrapper_arg_1), ((MR_Word) libs__lp__wrapper_arg_2), &libs__lp__conv1_HeadVar__6_32);
    }
#line 642 "lp.m"
    *libs__lp__wrapper_arg_3 = ((MR_Box) (libs__lp__conv1_HeadVar__6_32));
#line 642 "lp.m"
  }
#line 642 "lp.m"
}

#line 635 "lp.m"
static void MR_CALL 
libs__lp__pivot_4_p_0_1(
#line 635 "lp.m"
  void * libs__lp__env_ptr_arg)
#line 635 "lp.m"
{
#line 635 "lp.m"
  {
#line 635 "lp.m"
    struct libs__lp__pivot_4_p_0_2_env_0_s * libs__lp__env_ptr = (struct libs__lp__pivot_4_p_0_2_env_0_s *) libs__lp__env_ptr_arg;

#line 635 "lp.m"
    *((libs__lp__env_ptr)->libs__lp__pivot_4_p_0_2_env_0__wrapper_arg_1) = ((MR_Box) ((libs__lp__env_ptr)->libs__lp__pivot_4_p_0_2_env_0__conv0_HeadVar__4_27));
#line 635 "lp.m"
    {
#line 635 "lp.m"
      ((libs__lp__env_ptr)->libs__lp__pivot_4_p_0_2_env_0__cont)((libs__lp__env_ptr)->libs__lp__pivot_4_p_0_2_env_0__cont_env_ptr);
#line 635 "lp.m"
      return;
    }
#line 635 "lp.m"
  }
#line 635 "lp.m"
}

#line 635 "lp.m"
static void MR_CALL 
libs__lp__pivot_4_p_0_2(
#line 635 "lp.m"
  MR_Box libs__lp__closure_arg,
#line 635 "lp.m"
  MR_Box * libs__lp__wrapper_arg_1,
#line 635 "lp.m"
  MR_Cont libs__lp__cont,
#line 635 "lp.m"
  void * libs__lp__cont_env_ptr)
#line 635 "lp.m"
{
#line 635 "lp.m"
  {
#line 635 "lp.m"
    struct libs__lp__pivot_4_p_0_2_env_0_s libs__lp__env;

#line 635 "lp.m"
    (libs__lp__env).libs__lp__pivot_4_p_0_2_env_0__wrapper_arg_1 = libs__lp__wrapper_arg_1;
#line 635 "lp.m"
    (libs__lp__env).libs__lp__pivot_4_p_0_2_env_0__cont = libs__lp__cont;
#line 635 "lp.m"
    (libs__lp__env).libs__lp__pivot_4_p_0_2_env_0__cont_env_ptr = libs__lp__cont_env_ptr;
#line 635 "lp.m"
    {
#line 635 "lp.m"
      MR_Box libs__lp__closure = libs__lp__closure_arg;

#line 635 "lp.m"
      {
#line 635 "lp.m"
        libs__lp__IntroducedFrom__pred__pivot__635__1_4_p_0(((MR_Integer) (MR_hl_field(MR_mktag(0), libs__lp__closure, (MR_Integer) 3))), ((MR_Integer) (MR_hl_field(MR_mktag(0), libs__lp__closure, (MR_Integer) 4))), ((MR_Word) (MR_hl_field(MR_mktag(0), libs__lp__closure, (MR_Integer) 5))), &(libs__lp__env).libs__lp__pivot_4_p_0_2_env_0__conv0_HeadVar__4_27, libs__lp__pivot_4_p_0_1, &libs__lp__env);
      }
#line 635 "lp.m"
    }
#line 635 "lp.m"
  }
#line 635 "lp.m"
}

#line 631 "lp.m"
static void MR_CALL 
libs__lp__pivot_4_p_0(
#line 631 "lp.m"
  MR_Integer libs__lp__P_5,
#line 631 "lp.m"
  MR_Integer libs__lp__Q_6,
#line 631 "lp.m"
  MR_Word libs__lp__STATE_VARIABLE_Tableau_0_25,
#line 631 "lp.m"
  MR_Word * libs__lp__STATE_VARIABLE_Tableau_26)
#line 631 "lp.m"
{
#line 633 "lp.m"
  {
#line 633 "lp.m"
    MR_bool libs__lp__succeeded;
#line 633 "lp.m"
    MR_Word libs__lp__TypeCtorInfo_78_78;
#line 633 "lp.m"
    MR_Word libs__lp__TypeCtorInfo_79_79;
#line 633 "lp.m"
    MR_Float libs__lp__Apq_8;
#line 633 "lp.m"
    MR_Word libs__lp__MostCells_9;
#line 633 "lp.m"
    MR_Word libs__lp__ScaleCell_13;
#line 633 "lp.m"
    MR_Word libs__lp__QColumn_19;
#line 633 "lp.m"
    MR_Word libs__lp__PRow_22;
#line 633 "lp.m"
    MR_Word libs__lp__ScaleRow_23;
#line 633 "lp.m"
    MR_Word libs__lp__STATE_VARIABLE_Tableau_36_36;
#line 633 "lp.m"
    MR_Word libs__lp__STATE_VARIABLE_Tableau_42_42;
#line 633 "lp.m"
    MR_Word libs__lp__STATE_VARIABLE_Tableau_46_46;
#line 650 "lp.m"
    MR_Box libs__lp__conv2_STATE_VARIABLE_Tableau_36_36;
#line 659 "lp.m"
    MR_Box libs__lp__conv5_STATE_VARIABLE_Tableau_42_42;
#line 666 "lp.m"
    MR_Box libs__lp__conv8_STATE_VARIABLE_Tableau_46_46;

#line 634 "lp.m"
    {
#line 634 "lp.m"
      libs__lp__index_4_p_0(libs__lp__STATE_VARIABLE_Tableau_0_25, libs__lp__P_5, libs__lp__Q_6, &libs__lp__Apq_8);
    }
#line 635 "lp.m"
    {
#line 635 "lp.m"
      libs__lp__MostCells_9 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 6 * sizeof(MR_Word)), NULL, NULL);
#line 635 "lp.m"
      MR_hl_field(MR_mktag(0), libs__lp__MostCells_9, 0) = ((MR_Box) (&libs__lp_scalar_common_4[4]));
#line 635 "lp.m"
      MR_hl_field(MR_mktag(0), libs__lp__MostCells_9, 1) = ((MR_Box) (libs__lp__pivot_4_p_0_2));
#line 635 "lp.m"
      MR_hl_field(MR_mktag(0), libs__lp__MostCells_9, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 3));
#line 635 "lp.m"
      MR_hl_field(MR_mktag(0), libs__lp__MostCells_9, 3) = ((MR_Box) (libs__lp__P_5));
#line 635 "lp.m"
      MR_hl_field(MR_mktag(0), libs__lp__MostCells_9, 4) = ((MR_Box) (libs__lp__Q_6));
#line 635 "lp.m"
      MR_hl_field(MR_mktag(0), libs__lp__MostCells_9, 5) = ((MR_Box) (libs__lp__STATE_VARIABLE_Tableau_0_25));
#line 635 "lp.m"
    }
#line 642 "lp.m"
    {
#line 642 "lp.m"
      libs__lp__ScaleCell_13 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 6 * sizeof(MR_Word)), NULL, NULL);
#line 642 "lp.m"
      MR_hl_field(MR_mktag(0), libs__lp__ScaleCell_13, 0) = ((MR_Box) (&libs__lp_scalar_common_7[1]));
#line 642 "lp.m"
      MR_hl_field(MR_mktag(0), libs__lp__ScaleCell_13, 1) = ((MR_Box) (libs__lp__pivot_4_p_0_3));
#line 642 "lp.m"
      MR_hl_field(MR_mktag(0), libs__lp__ScaleCell_13, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 3));
#line 642 "lp.m"
      MR_hl_field(MR_mktag(0), libs__lp__ScaleCell_13, 3) = ((MR_Box) (libs__lp__P_5));
#line 642 "lp.m"
      MR_hl_field(MR_mktag(0), libs__lp__ScaleCell_13, 4) = ((MR_Box) (libs__lp__Q_6));
#line 642 "lp.m"
      MR_hl_field(MR_mktag(0), libs__lp__ScaleCell_13, 5) = MR_box_float(libs__lp__Apq_8);
#line 642 "lp.m"
    }
#line 8803 "libs.lp.c"
    libs__lp__TypeCtorInfo_78_78 = (MR_Word) &libs__lp__libs__lp__type_ctor_info_cell_0;
#line 8805 "libs.lp.c"
    libs__lp__TypeCtorInfo_79_79 = (MR_Word) &libs__lp__libs__lp__type_ctor_info_tableau_0;
#line 650 "lp.m"
    {
#line 650 "lp.m"
      mercury__solutions__aggregate_4_p_3(libs__lp__TypeCtorInfo_78_78, libs__lp__TypeCtorInfo_79_79, libs__lp__MostCells_9, libs__lp__ScaleCell_13, ((MR_Box) (libs__lp__STATE_VARIABLE_Tableau_0_25)), &libs__lp__conv2_STATE_VARIABLE_Tableau_36_36);
    }
#line 650 "lp.m"
    libs__lp__STATE_VARIABLE_Tableau_36_36 = ((MR_Word) libs__lp__conv2_STATE_VARIABLE_Tableau_36_36);
#line 651 "lp.m"
    {
#line 651 "lp.m"
      libs__lp__QColumn_19 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
#line 651 "lp.m"
      MR_hl_field(MR_mktag(0), libs__lp__QColumn_19, 0) = ((MR_Box) (&libs__lp_scalar_common_3[6]));
#line 651 "lp.m"
      MR_hl_field(MR_mktag(0), libs__lp__QColumn_19, 1) = ((MR_Box) (libs__lp__pivot_4_p_0_5));
#line 651 "lp.m"
      MR_hl_field(MR_mktag(0), libs__lp__QColumn_19, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
#line 651 "lp.m"
      MR_hl_field(MR_mktag(0), libs__lp__QColumn_19, 3) = ((MR_Box) (libs__lp__Q_6));
#line 651 "lp.m"
      MR_hl_field(MR_mktag(0), libs__lp__QColumn_19, 4) = ((MR_Box) (libs__lp__STATE_VARIABLE_Tableau_36_36));
#line 651 "lp.m"
    }
#line 659 "lp.m"
    {
#line 659 "lp.m"
      mercury__solutions__aggregate_4_p_3(libs__lp__TypeCtorInfo_78_78, libs__lp__TypeCtorInfo_79_79, libs__lp__QColumn_19, (MR_Word) &libs__lp_scalar_common_2[17], ((MR_Box) (libs__lp__STATE_VARIABLE_Tableau_36_36)), &libs__lp__conv5_STATE_VARIABLE_Tableau_42_42);
    }
#line 659 "lp.m"
    libs__lp__STATE_VARIABLE_Tableau_42_42 = ((MR_Word) libs__lp__conv5_STATE_VARIABLE_Tableau_42_42);
#line 660 "lp.m"
    {
#line 660 "lp.m"
      libs__lp__PRow_22 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
#line 660 "lp.m"
      MR_hl_field(MR_mktag(0), libs__lp__PRow_22, 0) = ((MR_Box) (&libs__lp_scalar_common_5[1]));
#line 660 "lp.m"
      MR_hl_field(MR_mktag(0), libs__lp__PRow_22, 1) = ((MR_Box) (libs__lp__pivot_4_p_0_8));
#line 660 "lp.m"
      MR_hl_field(MR_mktag(0), libs__lp__PRow_22, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 660 "lp.m"
      MR_hl_field(MR_mktag(0), libs__lp__PRow_22, 3) = ((MR_Box) (libs__lp__STATE_VARIABLE_Tableau_42_42));
#line 660 "lp.m"
    }
#line 661 "lp.m"
    {
#line 661 "lp.m"
      libs__lp__ScaleRow_23 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
#line 661 "lp.m"
      MR_hl_field(MR_mktag(0), libs__lp__ScaleRow_23, 0) = ((MR_Box) (&libs__lp_scalar_common_6[2]));
#line 661 "lp.m"
      MR_hl_field(MR_mktag(0), libs__lp__ScaleRow_23, 1) = ((MR_Box) (libs__lp__pivot_4_p_0_9));
#line 661 "lp.m"
      MR_hl_field(MR_mktag(0), libs__lp__ScaleRow_23, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
#line 661 "lp.m"
      MR_hl_field(MR_mktag(0), libs__lp__ScaleRow_23, 3) = ((MR_Box) (libs__lp__P_5));
#line 661 "lp.m"
      MR_hl_field(MR_mktag(0), libs__lp__ScaleRow_23, 4) = MR_box_float(libs__lp__Apq_8);
#line 661 "lp.m"
    }
#line 666 "lp.m"
    {
#line 666 "lp.m"
      mercury__solutions__aggregate_4_p_3((MR_Word) &mercury__builtin__builtin__type_ctor_info_int_0, libs__lp__TypeCtorInfo_79_79, libs__lp__PRow_22, libs__lp__ScaleRow_23, ((MR_Box) (libs__lp__STATE_VARIABLE_Tableau_42_42)), &libs__lp__conv8_STATE_VARIABLE_Tableau_46_46);
    }
#line 666 "lp.m"
    libs__lp__STATE_VARIABLE_Tableau_46_46 = ((MR_Word) libs__lp__conv8_STATE_VARIABLE_Tableau_46_46);
#line 667 "lp.m"
    {
#line 667 "lp.m"
      libs__lp__set_index_5_p_0(libs__lp__P_5, libs__lp__Q_6, (MR_Float) 1.0000000000000000, libs__lp__STATE_VARIABLE_Tableau_46_46, libs__lp__STATE_VARIABLE_Tableau_26);
#line 667 "lp.m"
      return;
    }
#line 633 "lp.m"
  }
#line 631 "lp.m"
}

#line 604 "lp.m"
static void MR_CALL 
libs__lp__fix_basis_and_rem_cols_3_p_0_4(
#line 604 "lp.m"
  void * libs__lp__env_ptr_arg)
#line 604 "lp.m"
{
#line 604 "lp.m"
  {
#line 604 "lp.m"
    struct libs__lp__fix_basis_and_rem_cols_3_p_0_5_env_0_s * libs__lp__env_ptr = (struct libs__lp__fix_basis_and_rem_cols_3_p_0_5_env_0_s *) libs__lp__env_ptr_arg;

#line 604 "lp.m"
    *((libs__lp__env_ptr)->libs__lp__fix_basis_and_rem_cols_3_p_0_5_env_0__wrapper_arg_1) = ((MR_Box) ((libs__lp__env_ptr)->libs__lp__fix_basis_and_rem_cols_3_p_0_5_env_0__conv4_HeadVar__4_35));
#line 604 "lp.m"
    {
#line 604 "lp.m"
      ((libs__lp__env_ptr)->libs__lp__fix_basis_and_rem_cols_3_p_0_5_env_0__cont)((libs__lp__env_ptr)->libs__lp__fix_basis_and_rem_cols_3_p_0_5_env_0__cont_env_ptr);
#line 604 "lp.m"
      return;
    }
#line 604 "lp.m"
  }
#line 604 "lp.m"
}

#line 604 "lp.m"
static void MR_CALL 
libs__lp__fix_basis_and_rem_cols_3_p_0_5(
#line 604 "lp.m"
  MR_Box libs__lp__closure_arg,
#line 604 "lp.m"
  MR_Box * libs__lp__wrapper_arg_1,
#line 604 "lp.m"
  MR_Cont libs__lp__cont,
#line 604 "lp.m"
  void * libs__lp__cont_env_ptr)
#line 604 "lp.m"
{
#line 604 "lp.m"
  {
#line 604 "lp.m"
    struct libs__lp__fix_basis_and_rem_cols_3_p_0_5_env_0_s libs__lp__env;

#line 604 "lp.m"
    (libs__lp__env).libs__lp__fix_basis_and_rem_cols_3_p_0_5_env_0__wrapper_arg_1 = libs__lp__wrapper_arg_1;
#line 604 "lp.m"
    (libs__lp__env).libs__lp__fix_basis_and_rem_cols_3_p_0_5_env_0__cont = libs__lp__cont;
#line 604 "lp.m"
    (libs__lp__env).libs__lp__fix_basis_and_rem_cols_3_p_0_5_env_0__cont_env_ptr = libs__lp__cont_env_ptr;
#line 604 "lp.m"
    {
#line 604 "lp.m"
      MR_Box libs__lp__closure = libs__lp__closure_arg;

#line 604 "lp.m"
      {
#line 604 "lp.m"
        libs__lp__IntroducedFrom__pred__fix_basis_and_rem_cols__604__1_4_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), libs__lp__closure, (MR_Integer) 3))), ((MR_Integer) (MR_hl_field(MR_mktag(0), libs__lp__closure, (MR_Integer) 4))), ((MR_Integer) (MR_hl_field(MR_mktag(0), libs__lp__closure, (MR_Integer) 5))), &(libs__lp__env).libs__lp__fix_basis_and_rem_cols_3_p_0_5_env_0__conv4_HeadVar__4_35, libs__lp__fix_basis_and_rem_cols_3_p_0_4, &libs__lp__env);
      }
#line 604 "lp.m"
    }
#line 604 "lp.m"
  }
#line 604 "lp.m"
}

#line 602 "lp.m"
static void MR_CALL 
libs__lp__fix_basis_and_rem_cols_3_p_0_2(
#line 602 "lp.m"
  void * libs__lp__env_ptr_arg)
#line 602 "lp.m"
{
#line 602 "lp.m"
  {
#line 602 "lp.m"
    struct libs__lp__fix_basis_and_rem_cols_3_p_0_3_env_0_s * libs__lp__env_ptr = (struct libs__lp__fix_basis_and_rem_cols_3_p_0_3_env_0_s *) libs__lp__env_ptr_arg;

#line 602 "lp.m"
    *((libs__lp__env_ptr)->libs__lp__fix_basis_and_rem_cols_3_p_0_3_env_0__wrapper_arg_1) = ((MR_Box) ((libs__lp__env_ptr)->libs__lp__fix_basis_and_rem_cols_3_p_0_3_env_0__conv2_Row_4));
#line 602 "lp.m"
    {
#line 602 "lp.m"
      ((libs__lp__env_ptr)->libs__lp__fix_basis_and_rem_cols_3_p_0_3_env_0__cont)((libs__lp__env_ptr)->libs__lp__fix_basis_and_rem_cols_3_p_0_3_env_0__cont_env_ptr);
#line 602 "lp.m"
      return;
    }
#line 602 "lp.m"
  }
#line 602 "lp.m"
}

#line 602 "lp.m"
static void MR_CALL 
libs__lp__fix_basis_and_rem_cols_3_p_0_3(
#line 602 "lp.m"
  MR_Box libs__lp__closure_arg,
#line 602 "lp.m"
  MR_Box * libs__lp__wrapper_arg_1,
#line 602 "lp.m"
  MR_Cont libs__lp__cont,
#line 602 "lp.m"
  void * libs__lp__cont_env_ptr)
#line 602 "lp.m"
{
#line 602 "lp.m"
  {
#line 602 "lp.m"
    struct libs__lp__fix_basis_and_rem_cols_3_p_0_3_env_0_s libs__lp__env;

#line 602 "lp.m"
    (libs__lp__env).libs__lp__fix_basis_and_rem_cols_3_p_0_3_env_0__wrapper_arg_1 = libs__lp__wrapper_arg_1;
#line 602 "lp.m"
    (libs__lp__env).libs__lp__fix_basis_and_rem_cols_3_p_0_3_env_0__cont = libs__lp__cont;
#line 602 "lp.m"
    (libs__lp__env).libs__lp__fix_basis_and_rem_cols_3_p_0_3_env_0__cont_env_ptr = libs__lp__cont_env_ptr;
#line 602 "lp.m"
    {
#line 602 "lp.m"
      MR_Box libs__lp__closure = libs__lp__closure_arg;

#line 602 "lp.m"
      {
#line 602 "lp.m"
        libs__lp__all_rows_2_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), libs__lp__closure, (MR_Integer) 3))), &(libs__lp__env).libs__lp__fix_basis_and_rem_cols_3_p_0_3_env_0__conv2_Row_4, libs__lp__fix_basis_and_rem_cols_3_p_0_2, &libs__lp__env);
      }
#line 602 "lp.m"
    }
#line 602 "lp.m"
  }
#line 602 "lp.m"
}

#line 594 "lp.m"
static void MR_CALL 
libs__lp__fix_basis_and_rem_cols_3_p_0_1(
#line 594 "lp.m"
  MR_Box libs__lp__closure_arg,
#line 594 "lp.m"
  MR_Box libs__lp__wrapper_arg_1,
#line 594 "lp.m"
  MR_Box libs__lp__wrapper_arg_2,
#line 594 "lp.m"
  MR_Box * libs__lp__wrapper_arg_3)
#line 594 "lp.m"
{
#line 594 "lp.m"
  {
#line 594 "lp.m"
    MR_Box libs__lp__closure = libs__lp__closure_arg;
#line 594 "lp.m"
    MR_Word libs__lp__conv1_HeadVar__5_28;

#line 594 "lp.m"
    {
#line 594 "lp.m"
      libs__lp__IntroducedFrom__pred__fix_basis_and_rem_cols__594__1_5_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), libs__lp__closure, (MR_Integer) 3))), ((MR_Integer) (MR_hl_field(MR_mktag(0), libs__lp__closure, (MR_Integer) 4))), ((MR_Integer) libs__lp__wrapper_arg_1), ((MR_Word) libs__lp__wrapper_arg_2), &libs__lp__conv1_HeadVar__5_28);
    }
#line 594 "lp.m"
    *libs__lp__wrapper_arg_3 = ((MR_Box) (libs__lp__conv1_HeadVar__5_28));
#line 594 "lp.m"
  }
#line 594 "lp.m"
}

#line 588 "lp.m"
static void MR_CALL 
libs__lp__fix_basis_and_rem_cols_3_p_0(
#line 588 "lp.m"
  MR_Word libs__lp__HeadVar__1_1,
#line 588 "lp.m"
  MR_Word libs__lp__STATE_VARIABLE_Tableau_0_2,
#line 588 "lp.m"
  MR_Word * libs__lp__STATE_VARIABLE_Tableau_3)
#line 588 "lp.m"
{
#line 591 "lp.m"
  while (MR_TRUE)
#line 591 "lp.m"
    {
#line 591 "lp.m"
      /* tailcall optimized into a loop */
#line 591 "lp.m"
      {
#line 591 "lp.m"
        MR_bool libs__lp__succeeded;

#line 591 "lp.m"
        if ((libs__lp__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 591 "lp.m"
          *libs__lp__STATE_VARIABLE_Tableau_3 = libs__lp__STATE_VARIABLE_Tableau_0_2;
#line 591 "lp.m"
        else
#line 592 "lp.m"
          {
#line 592 "lp.m"
            MR_Word libs__lp__TypeCtorInfo_47_47;
#line 592 "lp.m"
            MR_Word libs__lp__V_7 = ((MR_Word) (MR_hl_field(MR_mktag(1), libs__lp__HeadVar__1_1, (MR_Integer) 0)));
#line 592 "lp.m"
            MR_Word libs__lp__Vs_8 = ((MR_Word) (MR_hl_field(MR_mktag(1), libs__lp__HeadVar__1_1, (MR_Integer) 1)));
#line 592 "lp.m"
            MR_Integer libs__lp__Col_10;
#line 592 "lp.m"
            MR_Word libs__lp__BasisAgg_11;
#line 592 "lp.m"
            MR_Word libs__lp__Res_16;
#line 592 "lp.m"
            MR_Word libs__lp__V_30_30;
#line 592 "lp.m"
            MR_Word libs__lp__STATE_VARIABLE_Tableau_39_39;
#line 592 "lp.m"
            MR_Word libs__lp__STATE_VARIABLE_Tableau_40_40;
#line 592 "lp.m"
            MR_Word libs__lp__VarCols_54 = ((MR_Word) (MR_hl_field(MR_mktag(0), libs__lp__STATE_VARIABLE_Tableau_0_2, (MR_Integer) 2)));
#line 776 "lp.m"
            MR_Integer libs__lp__V_52_52 = ((MR_Integer) (MR_hl_field(MR_mktag(0), libs__lp__STATE_VARIABLE_Tableau_0_2, (MR_Integer) 0)));
#line 776 "lp.m"
            MR_Integer libs__lp__V_53_53 = ((MR_Integer) (MR_hl_field(MR_mktag(0), libs__lp__STATE_VARIABLE_Tableau_0_2, (MR_Integer) 1)));
#line 776 "lp.m"
            MR_Word libs__lp__V_55_55 = ((MR_Word) (MR_hl_field(MR_mktag(0), libs__lp__STATE_VARIABLE_Tableau_0_2, (MR_Integer) 3)));
#line 776 "lp.m"
            MR_Word libs__lp__V_56_56 = ((MR_Word) (MR_hl_field(MR_mktag(0), libs__lp__STATE_VARIABLE_Tableau_0_2, (MR_Integer) 4)));
#line 776 "lp.m"
            MR_Word libs__lp__V_57_57 = ((MR_Word) (MR_hl_field(MR_mktag(0), libs__lp__STATE_VARIABLE_Tableau_0_2, (MR_Integer) 5)));
#line 776 "lp.m"
            MR_Word libs__lp__V_58_58 = ((MR_Word) (MR_hl_field(MR_mktag(0), libs__lp__STATE_VARIABLE_Tableau_0_2, (MR_Integer) 6)));
#line 777 "lp.m"
            MR_Box libs__lp__conv0_Col_10;
#line 602 "lp.m"
            MR_Box libs__lp__conv3_Res_16;
#line 620 "lp.m"
            MR_Integer libs__lp__Row_17;
#line 603 "lp.m"
            MR_Word libs__lp__V_32_32;
#line 603 "lp.m"
            MR_Float libs__lp__V_33_33;
#line 603 "lp.m"
            MR_Word libs__lp__V_34_34;

#line 777 "lp.m"
            {
#line 777 "lp.m"
              mercury__map__lookup_3_p_0((MR_Word) &libs__lp_scalar_common_1[0], (MR_Word) &mercury__builtin__builtin__type_ctor_info_int_0, libs__lp__VarCols_54, ((MR_Box) (libs__lp__V_7)), &libs__lp__conv0_Col_10);
            }
#line 777 "lp.m"
            libs__lp__Col_10 = ((MR_Integer) libs__lp__conv0_Col_10);
#line 594 "lp.m"
            {
#line 594 "lp.m"
              libs__lp__BasisAgg_11 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
#line 594 "lp.m"
              MR_hl_field(MR_mktag(0), libs__lp__BasisAgg_11, 0) = ((MR_Box) (&libs__lp_scalar_common_6[1]));
#line 594 "lp.m"
              MR_hl_field(MR_mktag(0), libs__lp__BasisAgg_11, 1) = ((MR_Box) (libs__lp__fix_basis_and_rem_cols_3_p_0_1));
#line 594 "lp.m"
              MR_hl_field(MR_mktag(0), libs__lp__BasisAgg_11, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
#line 594 "lp.m"
              MR_hl_field(MR_mktag(0), libs__lp__BasisAgg_11, 3) = ((MR_Box) (libs__lp__STATE_VARIABLE_Tableau_0_2));
#line 594 "lp.m"
              MR_hl_field(MR_mktag(0), libs__lp__BasisAgg_11, 4) = ((MR_Box) (libs__lp__Col_10));
#line 594 "lp.m"
            }
#line 602 "lp.m"
            {
#line 602 "lp.m"
              libs__lp__V_30_30 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
#line 602 "lp.m"
              MR_hl_field(MR_mktag(0), libs__lp__V_30_30, 0) = ((MR_Box) (&libs__lp_scalar_common_5[1]));
#line 602 "lp.m"
              MR_hl_field(MR_mktag(0), libs__lp__V_30_30, 1) = ((MR_Box) (libs__lp__fix_basis_and_rem_cols_3_p_0_3));
#line 602 "lp.m"
              MR_hl_field(MR_mktag(0), libs__lp__V_30_30, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 602 "lp.m"
              MR_hl_field(MR_mktag(0), libs__lp__V_30_30, 3) = ((MR_Box) (libs__lp__STATE_VARIABLE_Tableau_0_2));
#line 602 "lp.m"
            }
#line 9164 "libs.lp.c"
            libs__lp__TypeCtorInfo_47_47 = (MR_Word) &mercury__builtin__builtin__type_ctor_info_int_0;
#line 602 "lp.m"
            {
#line 602 "lp.m"
              mercury__solutions__aggregate_4_p_3(libs__lp__TypeCtorInfo_47_47, (MR_Word) &libs__lp_scalar_common_1[2], libs__lp__V_30_30, libs__lp__BasisAgg_11, ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))), &libs__lp__conv3_Res_16);
            }
#line 602 "lp.m"
            libs__lp__Res_16 = ((MR_Word) libs__lp__conv3_Res_16);
#line 603 "lp.m"
            libs__lp__succeeded = ((MR_tag((MR_Word) libs__lp__Res_16)) == (MR_mktag((MR_Integer) 1)));
#line 603 "lp.m"
            if (libs__lp__succeeded)
#line 603 "lp.m"
              {
#line 603 "lp.m"
                libs__lp__V_32_32 = ((MR_Word) (MR_hl_field(MR_mktag(1), libs__lp__Res_16, (MR_Integer) 0)));
#line 603 "lp.m"
                libs__lp__V_34_34 = ((MR_Word) (MR_hl_field(MR_mktag(1), libs__lp__Res_16, (MR_Integer) 1)));
#line 603 "lp.m"
                libs__lp__succeeded = (libs__lp__V_34_34 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 603 "lp.m"
                if (libs__lp__succeeded)
#line 603 "lp.m"
                  {
#line 603 "lp.m"
                    libs__lp__V_33_33 = MR_unbox_float((MR_hl_field(MR_mktag(0), libs__lp__V_32_32, (MR_Integer) 0)));
#line 603 "lp.m"
                    libs__lp__Row_17 = ((MR_Integer) (MR_hl_field(MR_mktag(0), libs__lp__V_32_32, (MR_Integer) 1)));
#line 603 "lp.m"
                    libs__lp__succeeded = (libs__lp__V_33_33 == ((MR_Float) 1.0000000000000000));
#line 603 "lp.m"
                  }
#line 603 "lp.m"
              }
#line 620 "lp.m"
            if (libs__lp__succeeded)
#line 609 "lp.m"
              {
#line 609 "lp.m"
                MR_Word libs__lp__PivGoal_18;
#line 609 "lp.m"
                MR_Word libs__lp__PivSolns_21;

#line 604 "lp.m"
                {
#line 604 "lp.m"
                  libs__lp__PivGoal_18 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 6 * sizeof(MR_Word)), NULL, NULL);
#line 604 "lp.m"
                  MR_hl_field(MR_mktag(0), libs__lp__PivGoal_18, 0) = ((MR_Box) (&libs__lp_scalar_common_4[3]));
#line 604 "lp.m"
                  MR_hl_field(MR_mktag(0), libs__lp__PivGoal_18, 1) = ((MR_Box) (libs__lp__fix_basis_and_rem_cols_3_p_0_5));
#line 604 "lp.m"
                  MR_hl_field(MR_mktag(0), libs__lp__PivGoal_18, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 3));
#line 604 "lp.m"
                  MR_hl_field(MR_mktag(0), libs__lp__PivGoal_18, 3) = ((MR_Box) (libs__lp__STATE_VARIABLE_Tableau_0_2));
#line 604 "lp.m"
                  MR_hl_field(MR_mktag(0), libs__lp__PivGoal_18, 4) = ((MR_Box) (libs__lp__Col_10));
#line 604 "lp.m"
                  MR_hl_field(MR_mktag(0), libs__lp__PivGoal_18, 5) = ((MR_Box) (libs__lp__Row_17));
#line 604 "lp.m"
                }
#line 610 "lp.m"
                {
#line 610 "lp.m"
                  mercury__solutions__solutions_2_p_1(libs__lp__TypeCtorInfo_47_47, libs__lp__PivGoal_18, &libs__lp__PivSolns_21);
                }
#line 615 "lp.m"
                if ((libs__lp__PivSolns_21 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 612 "lp.m"
                  {
#line 612 "lp.m"
                    MR_Word libs__lp__SC_69 = ((MR_Word) (MR_hl_field(MR_mktag(0), libs__lp__STATE_VARIABLE_Tableau_0_2, (MR_Integer) 5)));
#line 612 "lp.m"
                    MR_Integer libs__lp__Rows_75 = ((MR_Integer) (MR_hl_field(MR_mktag(0), libs__lp__STATE_VARIABLE_Tableau_0_2, (MR_Integer) 0)));
#line 612 "lp.m"
                    MR_Integer libs__lp__Cols_76 = ((MR_Integer) (MR_hl_field(MR_mktag(0), libs__lp__STATE_VARIABLE_Tableau_0_2, (MR_Integer) 1)));
#line 612 "lp.m"
                    MR_Word libs__lp__VarNums_77 = ((MR_Word) (MR_hl_field(MR_mktag(0), libs__lp__STATE_VARIABLE_Tableau_0_2, (MR_Integer) 2)));
#line 612 "lp.m"
                    MR_Word libs__lp__URS_78 = ((MR_Word) (MR_hl_field(MR_mktag(0), libs__lp__STATE_VARIABLE_Tableau_0_2, (MR_Integer) 3)));
#line 612 "lp.m"
                    MR_Word libs__lp__SR_79 = ((MR_Word) (MR_hl_field(MR_mktag(0), libs__lp__STATE_VARIABLE_Tableau_0_2, (MR_Integer) 4)));
#line 612 "lp.m"
                    MR_Word libs__lp__SC_80;
#line 612 "lp.m"
                    MR_Word libs__lp__Cells_81 = ((MR_Word) (MR_hl_field(MR_mktag(0), libs__lp__STATE_VARIABLE_Tableau_0_2, (MR_Integer) 6)));
#line 612 "lp.m"
                    MR_Word libs__lp__V_82_82;

#line 793 "lp.m"
                    {
#line 793 "lp.m"
                      libs__lp__SC_80 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 793 "lp.m"
                      MR_hl_field(MR_mktag(1), libs__lp__SC_80, 0) = ((MR_Box) (libs__lp__Col_10));
#line 793 "lp.m"
                      MR_hl_field(MR_mktag(1), libs__lp__SC_80, 1) = ((MR_Box) (libs__lp__SC_69));
#line 793 "lp.m"
                    }
#line 787 "lp.m"
                    {
#line 787 "lp.m"
                      libs__lp__V_82_82 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 787 "lp.m"
                      MR_hl_field(MR_mktag(1), libs__lp__V_82_82, 0) = ((MR_Box) (libs__lp__Row_17));
#line 787 "lp.m"
                      MR_hl_field(MR_mktag(1), libs__lp__V_82_82, 1) = ((MR_Box) (libs__lp__SR_79));
#line 787 "lp.m"
                    }
#line 787 "lp.m"
                    {
#line 787 "lp.m"
                      libs__lp__STATE_VARIABLE_Tableau_39_39 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 7 * sizeof(MR_Word)), NULL, NULL);
#line 787 "lp.m"
                      MR_hl_field(MR_mktag(0), libs__lp__STATE_VARIABLE_Tableau_39_39, 0) = ((MR_Box) (libs__lp__Rows_75));
#line 787 "lp.m"
                      MR_hl_field(MR_mktag(0), libs__lp__STATE_VARIABLE_Tableau_39_39, 1) = ((MR_Box) (libs__lp__Cols_76));
#line 787 "lp.m"
                      MR_hl_field(MR_mktag(0), libs__lp__STATE_VARIABLE_Tableau_39_39, 2) = ((MR_Box) (libs__lp__VarNums_77));
#line 787 "lp.m"
                      MR_hl_field(MR_mktag(0), libs__lp__STATE_VARIABLE_Tableau_39_39, 3) = ((MR_Box) (libs__lp__URS_78));
#line 787 "lp.m"
                      MR_hl_field(MR_mktag(0), libs__lp__STATE_VARIABLE_Tableau_39_39, 4) = ((MR_Box) (libs__lp__V_82_82));
#line 787 "lp.m"
                      MR_hl_field(MR_mktag(0), libs__lp__STATE_VARIABLE_Tableau_39_39, 5) = ((MR_Box) (libs__lp__SC_80));
#line 787 "lp.m"
                      MR_hl_field(MR_mktag(0), libs__lp__STATE_VARIABLE_Tableau_39_39, 6) = ((MR_Box) (libs__lp__Cells_81));
#line 787 "lp.m"
                    }
#line 612 "lp.m"
                  }
#line 615 "lp.m"
                else
#line 616 "lp.m"
                  {
#line 616 "lp.m"
                    MR_Integer libs__lp__Col2_22 = ((MR_Integer) (MR_hl_field(MR_mktag(1), libs__lp__PivSolns_21, (MR_Integer) 0)));
#line 616 "lp.m"
                    MR_Word libs__lp__STATE_VARIABLE_Tableau_36_36;
#line 616 "lp.m"
                    MR_Integer libs__lp__Rows_86;
#line 616 "lp.m"
                    MR_Integer libs__lp__Cols_87;
#line 616 "lp.m"
                    MR_Word libs__lp__VarNums_88;
#line 616 "lp.m"
                    MR_Word libs__lp__URS_89;
#line 616 "lp.m"
                    MR_Word libs__lp__SR_90;
#line 616 "lp.m"
                    MR_Word libs__lp__SC_91;
#line 616 "lp.m"
                    MR_Word libs__lp__Cells_92;
#line 616 "lp.m"
                    MR_Word libs__lp__V_93_93;
#line 616 "lp.m"
                    MR_Word libs__lp__V_23_23 = ((MR_Word) (MR_hl_field(MR_mktag(1), libs__lp__PivSolns_21, (MR_Integer) 1)));

#line 617 "lp.m"
                    {
#line 617 "lp.m"
                      libs__lp__pivot_4_p_0(libs__lp__Row_17, libs__lp__Col2_22, libs__lp__STATE_VARIABLE_Tableau_0_2, &libs__lp__STATE_VARIABLE_Tableau_36_36);
                    }
#line 792 "lp.m"
                    libs__lp__Rows_86 = ((MR_Integer) (MR_hl_field(MR_mktag(0), libs__lp__STATE_VARIABLE_Tableau_36_36, (MR_Integer) 0)));
#line 792 "lp.m"
                    libs__lp__Cols_87 = ((MR_Integer) (MR_hl_field(MR_mktag(0), libs__lp__STATE_VARIABLE_Tableau_36_36, (MR_Integer) 1)));
#line 792 "lp.m"
                    libs__lp__VarNums_88 = ((MR_Word) (MR_hl_field(MR_mktag(0), libs__lp__STATE_VARIABLE_Tableau_36_36, (MR_Integer) 2)));
#line 792 "lp.m"
                    libs__lp__URS_89 = ((MR_Word) (MR_hl_field(MR_mktag(0), libs__lp__STATE_VARIABLE_Tableau_36_36, (MR_Integer) 3)));
#line 792 "lp.m"
                    libs__lp__SR_90 = ((MR_Word) (MR_hl_field(MR_mktag(0), libs__lp__STATE_VARIABLE_Tableau_36_36, (MR_Integer) 4)));
#line 792 "lp.m"
                    libs__lp__SC_91 = ((MR_Word) (MR_hl_field(MR_mktag(0), libs__lp__STATE_VARIABLE_Tableau_36_36, (MR_Integer) 5)));
#line 792 "lp.m"
                    libs__lp__Cells_92 = ((MR_Word) (MR_hl_field(MR_mktag(0), libs__lp__STATE_VARIABLE_Tableau_36_36, (MR_Integer) 6)));
#line 793 "lp.m"
                    {
#line 793 "lp.m"
                      libs__lp__V_93_93 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 793 "lp.m"
                      MR_hl_field(MR_mktag(1), libs__lp__V_93_93, 0) = ((MR_Box) (libs__lp__Col_10));
#line 793 "lp.m"
                      MR_hl_field(MR_mktag(1), libs__lp__V_93_93, 1) = ((MR_Box) (libs__lp__SC_91));
#line 793 "lp.m"
                    }
#line 793 "lp.m"
                    {
#line 793 "lp.m"
                      libs__lp__STATE_VARIABLE_Tableau_39_39 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 7 * sizeof(MR_Word)), NULL, NULL);
#line 793 "lp.m"
                      MR_hl_field(MR_mktag(0), libs__lp__STATE_VARIABLE_Tableau_39_39, 0) = ((MR_Box) (libs__lp__Rows_86));
#line 793 "lp.m"
                      MR_hl_field(MR_mktag(0), libs__lp__STATE_VARIABLE_Tableau_39_39, 1) = ((MR_Box) (libs__lp__Cols_87));
#line 793 "lp.m"
                      MR_hl_field(MR_mktag(0), libs__lp__STATE_VARIABLE_Tableau_39_39, 2) = ((MR_Box) (libs__lp__VarNums_88));
#line 793 "lp.m"
                      MR_hl_field(MR_mktag(0), libs__lp__STATE_VARIABLE_Tableau_39_39, 3) = ((MR_Box) (libs__lp__URS_89));
#line 793 "lp.m"
                      MR_hl_field(MR_mktag(0), libs__lp__STATE_VARIABLE_Tableau_39_39, 4) = ((MR_Box) (libs__lp__SR_90));
#line 793 "lp.m"
                      MR_hl_field(MR_mktag(0), libs__lp__STATE_VARIABLE_Tableau_39_39, 5) = ((MR_Box) (libs__lp__V_93_93));
#line 793 "lp.m"
                      MR_hl_field(MR_mktag(0), libs__lp__STATE_VARIABLE_Tableau_39_39, 6) = ((MR_Box) (libs__lp__Cells_92));
#line 793 "lp.m"
                    }
#line 616 "lp.m"
                  }
#line 609 "lp.m"
              }
#line 620 "lp.m"
            else
#line 618 "lp.m"
              libs__lp__STATE_VARIABLE_Tableau_39_39 = libs__lp__STATE_VARIABLE_Tableau_0_2;
#line 623 "lp.m"
            {
#line 623 "lp.m"
              libs__lp__remove_col_3_p_0(libs__lp__Col_10, libs__lp__STATE_VARIABLE_Tableau_39_39, &libs__lp__STATE_VARIABLE_Tableau_40_40);
            }
#line 624 "lp.m"
            /* direct tailcall eliminated */
#line 624 "lp.m"
            {
#line 624 "lp.m"
              MR_Word libs__lp__HeadVar__1__tmp_copy_1 = libs__lp__Vs_8;
#line 624 "lp.m"
              MR_Word libs__lp__STATE_VARIABLE_Tableau_0__tmp_copy_2 = libs__lp__STATE_VARIABLE_Tableau_40_40;

#line 624 "lp.m"
              libs__lp__STATE_VARIABLE_Tableau_0_2 = libs__lp__STATE_VARIABLE_Tableau_0__tmp_copy_2;
#line 624 "lp.m"
              libs__lp__HeadVar__1_1 = libs__lp__HeadVar__1__tmp_copy_1;
#line 624 "lp.m"
            }
#line 624 "lp.m"
            continue;
#line 592 "lp.m"
          }
#line 591 "lp.m"
      }
#line 591 "lp.m"
      break;
#line 591 "lp.m"
    }
#line 588 "lp.m"
}

#line 674 "lp.m"
static void MR_CALL 
libs__lp__ensure_zero_obj_coeffs_3_p_0_5(
#line 674 "lp.m"
  MR_Box libs__lp__closure_arg,
#line 674 "lp.m"
  MR_Box libs__lp__wrapper_arg_1,
#line 674 "lp.m"
  MR_Box libs__lp__wrapper_arg_2,
#line 674 "lp.m"
  MR_Box * libs__lp__wrapper_arg_3)
#line 674 "lp.m"
{
#line 674 "lp.m"
  {
#line 674 "lp.m"
    MR_Box libs__lp__closure = libs__lp__closure_arg;
#line 674 "lp.m"
    MR_Word libs__lp__conv3_HeadVar__6_22;

#line 674 "lp.m"
    {
#line 674 "lp.m"
      libs__lp__IntroducedFrom__pred__row_op__674__1_6_p_0(MR_unbox_float((MR_hl_field(MR_mktag(0), libs__lp__closure, (MR_Integer) 3))), ((MR_Integer) (MR_hl_field(MR_mktag(0), libs__lp__closure, (MR_Integer) 4))), ((MR_Integer) (MR_hl_field(MR_mktag(0), libs__lp__closure, (MR_Integer) 5))), ((MR_Integer) libs__lp__wrapper_arg_1), ((MR_Word) libs__lp__wrapper_arg_2), &libs__lp__conv3_HeadVar__6_22);
    }
#line 674 "lp.m"
    *libs__lp__wrapper_arg_3 = ((MR_Box) (libs__lp__conv3_HeadVar__6_22));
#line 674 "lp.m"
  }
#line 674 "lp.m"
}

#line 673 "lp.m"
static void MR_CALL 
libs__lp__ensure_zero_obj_coeffs_3_p_0_3(
#line 673 "lp.m"
  void * libs__lp__env_ptr_arg)
#line 673 "lp.m"
{
#line 673 "lp.m"
  {
#line 673 "lp.m"
    struct libs__lp__ensure_zero_obj_coeffs_3_p_0_4_env_0_s * libs__lp__env_ptr = (struct libs__lp__ensure_zero_obj_coeffs_3_p_0_4_env_0_s *) libs__lp__env_ptr_arg;

#line 673 "lp.m"
    *((libs__lp__env_ptr)->libs__lp__ensure_zero_obj_coeffs_3_p_0_4_env_0__wrapper_arg_1) = ((MR_Box) ((libs__lp__env_ptr)->libs__lp__ensure_zero_obj_coeffs_3_p_0_4_env_0__conv2_Col_4));
#line 673 "lp.m"
    {
#line 673 "lp.m"
      ((libs__lp__env_ptr)->libs__lp__ensure_zero_obj_coeffs_3_p_0_4_env_0__cont)((libs__lp__env_ptr)->libs__lp__ensure_zero_obj_coeffs_3_p_0_4_env_0__cont_env_ptr);
#line 673 "lp.m"
      return;
    }
#line 673 "lp.m"
  }
#line 673 "lp.m"
}

#line 673 "lp.m"
static void MR_CALL 
libs__lp__ensure_zero_obj_coeffs_3_p_0_4(
#line 673 "lp.m"
  MR_Box libs__lp__closure_arg,
#line 673 "lp.m"
  MR_Box * libs__lp__wrapper_arg_1,
#line 673 "lp.m"
  MR_Cont libs__lp__cont,
#line 673 "lp.m"
  void * libs__lp__cont_env_ptr)
#line 673 "lp.m"
{
#line 673 "lp.m"
  {
#line 673 "lp.m"
    struct libs__lp__ensure_zero_obj_coeffs_3_p_0_4_env_0_s libs__lp__env;

#line 673 "lp.m"
    (libs__lp__env).libs__lp__ensure_zero_obj_coeffs_3_p_0_4_env_0__wrapper_arg_1 = libs__lp__wrapper_arg_1;
#line 673 "lp.m"
    (libs__lp__env).libs__lp__ensure_zero_obj_coeffs_3_p_0_4_env_0__cont = libs__lp__cont;
#line 673 "lp.m"
    (libs__lp__env).libs__lp__ensure_zero_obj_coeffs_3_p_0_4_env_0__cont_env_ptr = libs__lp__cont_env_ptr;
#line 673 "lp.m"
    {
#line 673 "lp.m"
      MR_Box libs__lp__closure = libs__lp__closure_arg;

#line 673 "lp.m"
      {
#line 673 "lp.m"
        libs__lp__all_cols0_2_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), libs__lp__closure, (MR_Integer) 3))), &(libs__lp__env).libs__lp__ensure_zero_obj_coeffs_3_p_0_4_env_0__conv2_Col_4, libs__lp__ensure_zero_obj_coeffs_3_p_0_3, &libs__lp__env);
      }
#line 673 "lp.m"
    }
#line 673 "lp.m"
  }
#line 673 "lp.m"
}

#line 570 "lp.m"
static void MR_CALL 
libs__lp__ensure_zero_obj_coeffs_3_p_0_1(
#line 570 "lp.m"
  void * libs__lp__env_ptr_arg)
#line 570 "lp.m"
{
#line 570 "lp.m"
  {
#line 570 "lp.m"
    struct libs__lp__ensure_zero_obj_coeffs_3_p_0_2_env_0_s * libs__lp__env_ptr = (struct libs__lp__ensure_zero_obj_coeffs_3_p_0_2_env_0_s *) libs__lp__env_ptr_arg;

#line 570 "lp.m"
    *((libs__lp__env_ptr)->libs__lp__ensure_zero_obj_coeffs_3_p_0_2_env_0__wrapper_arg_1) = ((MR_Box) ((libs__lp__env_ptr)->libs__lp__ensure_zero_obj_coeffs_3_p_0_2_env_0__conv1_HeadVar__3_25));
#line 570 "lp.m"
    {
#line 570 "lp.m"
      ((libs__lp__env_ptr)->libs__lp__ensure_zero_obj_coeffs_3_p_0_2_env_0__cont)((libs__lp__env_ptr)->libs__lp__ensure_zero_obj_coeffs_3_p_0_2_env_0__cont_env_ptr);
#line 570 "lp.m"
      return;
    }
#line 570 "lp.m"
  }
#line 570 "lp.m"
}

#line 570 "lp.m"
static void MR_CALL 
libs__lp__ensure_zero_obj_coeffs_3_p_0_2(
#line 570 "lp.m"
  MR_Box libs__lp__closure_arg,
#line 570 "lp.m"
  MR_Box * libs__lp__wrapper_arg_1,
#line 570 "lp.m"
  MR_Cont libs__lp__cont,
#line 570 "lp.m"
  void * libs__lp__cont_env_ptr)
#line 570 "lp.m"
{
#line 570 "lp.m"
  {
#line 570 "lp.m"
    struct libs__lp__ensure_zero_obj_coeffs_3_p_0_2_env_0_s libs__lp__env;

#line 570 "lp.m"
    (libs__lp__env).libs__lp__ensure_zero_obj_coeffs_3_p_0_2_env_0__wrapper_arg_1 = libs__lp__wrapper_arg_1;
#line 570 "lp.m"
    (libs__lp__env).libs__lp__ensure_zero_obj_coeffs_3_p_0_2_env_0__cont = libs__lp__cont;
#line 570 "lp.m"
    (libs__lp__env).libs__lp__ensure_zero_obj_coeffs_3_p_0_2_env_0__cont_env_ptr = libs__lp__cont_env_ptr;
#line 570 "lp.m"
    {
#line 570 "lp.m"
      MR_Box libs__lp__closure = libs__lp__closure_arg;

#line 570 "lp.m"
      {
#line 570 "lp.m"
        libs__lp__IntroducedFrom__pred__ensure_zero_obj_coeffs__570__1_3_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), libs__lp__closure, (MR_Integer) 3))), ((MR_Integer) (MR_hl_field(MR_mktag(0), libs__lp__closure, (MR_Integer) 4))), &(libs__lp__env).libs__lp__ensure_zero_obj_coeffs_3_p_0_2_env_0__conv1_HeadVar__3_25, libs__lp__ensure_zero_obj_coeffs_3_p_0_1, &libs__lp__env);
      }
#line 570 "lp.m"
    }
#line 570 "lp.m"
  }
#line 570 "lp.m"
}

#line 560 "lp.m"
static void MR_CALL 
libs__lp__ensure_zero_obj_coeffs_3_p_0(
#line 560 "lp.m"
  MR_Word libs__lp__HeadVar__1_1,
#line 560 "lp.m"
  MR_Word libs__lp__STATE_VARIABLE_Tableau_0_2,
#line 560 "lp.m"
  MR_Word * libs__lp__STATE_VARIABLE_Tableau_3)
#line 560 "lp.m"
{
#line 563 "lp.m"
  while (MR_TRUE)
#line 563 "lp.m"
    {
#line 563 "lp.m"
      /* tailcall optimized into a loop */
#line 563 "lp.m"
      {
#line 563 "lp.m"
        MR_bool libs__lp__succeeded;

#line 563 "lp.m"
        if ((libs__lp__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 563 "lp.m"
          *libs__lp__STATE_VARIABLE_Tableau_3 = libs__lp__STATE_VARIABLE_Tableau_0_2;
#line 563 "lp.m"
        else
#line 564 "lp.m"
          {
#line 564 "lp.m"
            MR_Word libs__lp__V_7 = ((MR_Word) (MR_hl_field(MR_mktag(1), libs__lp__HeadVar__1_1, (MR_Integer) 0)));
#line 564 "lp.m"
            MR_Word libs__lp__Vs_8 = ((MR_Word) (MR_hl_field(MR_mktag(1), libs__lp__HeadVar__1_1, (MR_Integer) 1)));
#line 564 "lp.m"
            MR_Integer libs__lp__Col_10;
#line 564 "lp.m"
            MR_Float libs__lp__Val_11;
#line 564 "lp.m"
            MR_Word libs__lp__VarCols_41 = ((MR_Word) (MR_hl_field(MR_mktag(0), libs__lp__STATE_VARIABLE_Tableau_0_2, (MR_Integer) 2)));
#line 776 "lp.m"
            MR_Integer libs__lp__V_39_39 = ((MR_Integer) (MR_hl_field(MR_mktag(0), libs__lp__STATE_VARIABLE_Tableau_0_2, (MR_Integer) 0)));
#line 776 "lp.m"
            MR_Integer libs__lp__V_40_40 = ((MR_Integer) (MR_hl_field(MR_mktag(0), libs__lp__STATE_VARIABLE_Tableau_0_2, (MR_Integer) 1)));
#line 776 "lp.m"
            MR_Word libs__lp__V_42_42 = ((MR_Word) (MR_hl_field(MR_mktag(0), libs__lp__STATE_VARIABLE_Tableau_0_2, (MR_Integer) 3)));
#line 776 "lp.m"
            MR_Word libs__lp__V_43_43 = ((MR_Word) (MR_hl_field(MR_mktag(0), libs__lp__STATE_VARIABLE_Tableau_0_2, (MR_Integer) 4)));
#line 776 "lp.m"
            MR_Word libs__lp__V_44_44 = ((MR_Word) (MR_hl_field(MR_mktag(0), libs__lp__STATE_VARIABLE_Tableau_0_2, (MR_Integer) 5)));
#line 776 "lp.m"
            MR_Word libs__lp__V_45_45 = ((MR_Word) (MR_hl_field(MR_mktag(0), libs__lp__STATE_VARIABLE_Tableau_0_2, (MR_Integer) 6)));
#line 777 "lp.m"
            MR_Box libs__lp__conv0_Col_10;

#line 777 "lp.m"
            {
#line 777 "lp.m"
              mercury__map__lookup_3_p_0((MR_Word) &libs__lp_scalar_common_1[0], (MR_Word) &mercury__builtin__builtin__type_ctor_info_int_0, libs__lp__VarCols_41, ((MR_Box) (libs__lp__V_7)), &libs__lp__conv0_Col_10);
            }
#line 777 "lp.m"
            libs__lp__Col_10 = ((MR_Integer) libs__lp__conv0_Col_10);
#line 566 "lp.m"
            {
#line 566 "lp.m"
              libs__lp__index_4_p_0(libs__lp__STATE_VARIABLE_Tableau_0_2, (MR_Integer) 0, libs__lp__Col_10, &libs__lp__Val_11);
            }
#line 567 "lp.m"
            libs__lp__succeeded = (libs__lp__Val_11 == ((MR_Float) 0.0000000000000000));
#line 569 "lp.m"
            if (libs__lp__succeeded)
#line 568 "lp.m"
              {
#line 568 "lp.m"
                /* direct tailcall eliminated */
#line 568 "lp.m"
                {
#line 568 "lp.m"
                  MR_Word libs__lp__HeadVar__1__tmp_copy_1 = libs__lp__Vs_8;

#line 568 "lp.m"
                  libs__lp__HeadVar__1_1 = libs__lp__HeadVar__1__tmp_copy_1;
#line 568 "lp.m"
                }
#line 568 "lp.m"
                continue;
#line 568 "lp.m"
              }
#line 569 "lp.m"
            else
#line 575 "lp.m"
              {
#line 575 "lp.m"
                MR_Word libs__lp__FindOne_12;
#line 575 "lp.m"
                MR_Word libs__lp__Ones_16;

#line 570 "lp.m"
                {
#line 570 "lp.m"
                  libs__lp__FindOne_12 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
#line 570 "lp.m"
                  MR_hl_field(MR_mktag(0), libs__lp__FindOne_12, 0) = ((MR_Box) (&libs__lp_scalar_common_3[5]));
#line 570 "lp.m"
                  MR_hl_field(MR_mktag(0), libs__lp__FindOne_12, 1) = ((MR_Box) (libs__lp__ensure_zero_obj_coeffs_3_p_0_2));
#line 570 "lp.m"
                  MR_hl_field(MR_mktag(0), libs__lp__FindOne_12, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
#line 570 "lp.m"
                  MR_hl_field(MR_mktag(0), libs__lp__FindOne_12, 3) = ((MR_Box) (libs__lp__STATE_VARIABLE_Tableau_0_2));
#line 570 "lp.m"
                  MR_hl_field(MR_mktag(0), libs__lp__FindOne_12, 4) = ((MR_Box) (libs__lp__Col_10));
#line 570 "lp.m"
                }
#line 576 "lp.m"
                {
#line 576 "lp.m"
                  mercury__solutions__solutions_2_p_1((MR_Word) &libs__lp_scalar_common_2[3], libs__lp__FindOne_12, &libs__lp__Ones_16);
                }
#line 582 "lp.m"
                if ((libs__lp__Ones_16 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 583 "lp.m"
                  {
#line 584 "lp.m"
                    {
#line 584 "lp.m"
                      mercury__require__unexpected_3_p_0((MR_String) "libs.lp", (MR_String) "predicate \140libs.lp.ensure_zero_obj_coeffs\'/3", (MR_String) "problem with artificial variable");
#line 584 "lp.m"
                      return;
                    }
#line 583 "lp.m"
                  }
#line 582 "lp.m"
                else
#line 578 "lp.m"
                  {
#line 578 "lp.m"
                    MR_Integer libs__lp__Row_17;
#line 578 "lp.m"
                    MR_Float libs__lp__Fac0_18;
#line 578 "lp.m"
                    MR_Float libs__lp__Fac_20;
#line 578 "lp.m"
                    MR_Word libs__lp__V_29_29 = ((MR_Word) (MR_hl_field(MR_mktag(1), libs__lp__Ones_16, (MR_Integer) 0)));
#line 578 "lp.m"
                    MR_Float libs__lp__V_30_30;
#line 578 "lp.m"
                    MR_Word libs__lp__STATE_VARIABLE_Tableau_32_32;
#line 578 "lp.m"
                    MR_Word libs__lp__AllCols_54;
#line 578 "lp.m"
                    MR_Word libs__lp__AddRow_55;
#line 578 "lp.m"
                    MR_Word libs__lp__V_19_19 = ((MR_Word) (MR_hl_field(MR_mktag(1), libs__lp__Ones_16, (MR_Integer) 1)));
#line 680 "lp.m"
                    MR_Box libs__lp__conv4_STATE_VARIABLE_Tableau_32_32;

#line 578 "lp.m"
                    libs__lp__Row_17 = ((MR_Integer) (MR_hl_field(MR_mktag(0), libs__lp__V_29_29, (MR_Integer) 0)));
#line 578 "lp.m"
                    libs__lp__Fac0_18 = MR_unbox_float((MR_hl_field(MR_mktag(0), libs__lp__V_29_29, (MR_Integer) 1)));
#line 579 "lp.m"
                    libs__lp__V_30_30 = (((MR_Float) 0.0000000000000000) - libs__lp__Val_11);
#line 579 "lp.m"
                    {
#line 579 "lp.m"
                      libs__lp__Fac_20 = mercury__float__f_slash_2_f_0(libs__lp__V_30_30, libs__lp__Fac0_18);
                    }
#line 673 "lp.m"
                    {
#line 673 "lp.m"
                      libs__lp__AllCols_54 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
#line 673 "lp.m"
                      MR_hl_field(MR_mktag(0), libs__lp__AllCols_54, 0) = ((MR_Box) (&libs__lp_scalar_common_5[1]));
#line 673 "lp.m"
                      MR_hl_field(MR_mktag(0), libs__lp__AllCols_54, 1) = ((MR_Box) (libs__lp__ensure_zero_obj_coeffs_3_p_0_4));
#line 673 "lp.m"
                      MR_hl_field(MR_mktag(0), libs__lp__AllCols_54, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 673 "lp.m"
                      MR_hl_field(MR_mktag(0), libs__lp__AllCols_54, 3) = ((MR_Box) (libs__lp__STATE_VARIABLE_Tableau_0_2));
#line 673 "lp.m"
                    }
#line 674 "lp.m"
                    {
#line 674 "lp.m"
                      libs__lp__AddRow_55 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 6 * sizeof(MR_Word)), NULL, NULL);
#line 674 "lp.m"
                      MR_hl_field(MR_mktag(0), libs__lp__AddRow_55, 0) = ((MR_Box) (&libs__lp_scalar_common_7[0]));
#line 674 "lp.m"
                      MR_hl_field(MR_mktag(0), libs__lp__AddRow_55, 1) = ((MR_Box) (libs__lp__ensure_zero_obj_coeffs_3_p_0_5));
#line 674 "lp.m"
                      MR_hl_field(MR_mktag(0), libs__lp__AddRow_55, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 3));
#line 674 "lp.m"
                      MR_hl_field(MR_mktag(0), libs__lp__AddRow_55, 3) = MR_box_float(libs__lp__Fac_20);
#line 674 "lp.m"
                      MR_hl_field(MR_mktag(0), libs__lp__AddRow_55, 4) = ((MR_Box) (libs__lp__Row_17));
#line 674 "lp.m"
                      MR_hl_field(MR_mktag(0), libs__lp__AddRow_55, 5) = ((MR_Box) ((MR_Integer) 0));
#line 674 "lp.m"
                    }
#line 680 "lp.m"
                    {
#line 680 "lp.m"
                      mercury__solutions__aggregate_4_p_3((MR_Word) &mercury__builtin__builtin__type_ctor_info_int_0, (MR_Word) &libs__lp__libs__lp__type_ctor_info_tableau_0, libs__lp__AllCols_54, libs__lp__AddRow_55, ((MR_Box) (libs__lp__STATE_VARIABLE_Tableau_0_2)), &libs__lp__conv4_STATE_VARIABLE_Tableau_32_32);
                    }
#line 680 "lp.m"
                    libs__lp__STATE_VARIABLE_Tableau_32_32 = ((MR_Word) libs__lp__conv4_STATE_VARIABLE_Tableau_32_32);
#line 581 "lp.m"
                    /* direct tailcall eliminated */
#line 581 "lp.m"
                    {
#line 581 "lp.m"
                      MR_Word libs__lp__HeadVar__1__tmp_copy_1 = libs__lp__Vs_8;
#line 581 "lp.m"
                      MR_Word libs__lp__STATE_VARIABLE_Tableau_0__tmp_copy_2 = libs__lp__STATE_VARIABLE_Tableau_32_32;

#line 581 "lp.m"
                      libs__lp__STATE_VARIABLE_Tableau_0_2 = libs__lp__STATE_VARIABLE_Tableau_0__tmp_copy_2;
#line 581 "lp.m"
                      libs__lp__HeadVar__1_1 = libs__lp__HeadVar__1__tmp_copy_1;
#line 581 "lp.m"
                    }
#line 581 "lp.m"
                    continue;
#line 578 "lp.m"
                  }
#line 575 "lp.m"
              }
#line 564 "lp.m"
          }
#line 563 "lp.m"
      }
#line 563 "lp.m"
      break;
#line 563 "lp.m"
    }
#line 560 "lp.m"
}

#line 518 "lp.m"
static void MR_CALL 
libs__lp__simplex_3_p_0_6(
#line 518 "lp.m"
  MR_Box libs__lp__closure_arg,
#line 518 "lp.m"
  MR_Box libs__lp__wrapper_arg_1,
#line 518 "lp.m"
  MR_Box libs__lp__wrapper_arg_2,
#line 518 "lp.m"
  MR_Box * libs__lp__wrapper_arg_3)
#line 518 "lp.m"
{
#line 518 "lp.m"
  {
#line 518 "lp.m"
    MR_Box libs__lp__closure = libs__lp__closure_arg;
#line 518 "lp.m"
    MR_Word libs__lp__conv4_HeadVar__5_48;

#line 518 "lp.m"
    {
#line 518 "lp.m"
      libs__lp__IntroducedFrom__pred__simplex__530__1_5_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), libs__lp__closure, (MR_Integer) 3))), ((MR_Integer) (MR_hl_field(MR_mktag(0), libs__lp__closure, (MR_Integer) 4))), ((MR_Integer) libs__lp__wrapper_arg_1), ((MR_Word) libs__lp__wrapper_arg_2), &libs__lp__conv4_HeadVar__5_48);
    }
#line 518 "lp.m"
    *libs__lp__wrapper_arg_3 = ((MR_Box) (libs__lp__conv4_HeadVar__5_48));
#line 518 "lp.m"
  }
#line 518 "lp.m"
}

#line 517 "lp.m"
static void MR_CALL 
libs__lp__simplex_3_p_0_4(
#line 517 "lp.m"
  void * libs__lp__env_ptr_arg)
#line 517 "lp.m"
{
#line 517 "lp.m"
  {
#line 517 "lp.m"
    struct libs__lp__simplex_3_p_0_5_env_0_s * libs__lp__env_ptr = (struct libs__lp__simplex_3_p_0_5_env_0_s *) libs__lp__env_ptr_arg;

#line 517 "lp.m"
    *((libs__lp__env_ptr)->libs__lp__simplex_3_p_0_5_env_0__wrapper_arg_1) = ((MR_Box) ((libs__lp__env_ptr)->libs__lp__simplex_3_p_0_5_env_0__conv3_Row_4));
#line 517 "lp.m"
    {
#line 517 "lp.m"
      ((libs__lp__env_ptr)->libs__lp__simplex_3_p_0_5_env_0__cont)((libs__lp__env_ptr)->libs__lp__simplex_3_p_0_5_env_0__cont_env_ptr);
#line 517 "lp.m"
      return;
    }
#line 517 "lp.m"
  }
#line 517 "lp.m"
}

#line 517 "lp.m"
static void MR_CALL 
libs__lp__simplex_3_p_0_5(
#line 517 "lp.m"
  MR_Box libs__lp__closure_arg,
#line 517 "lp.m"
  MR_Box * libs__lp__wrapper_arg_1,
#line 517 "lp.m"
  MR_Cont libs__lp__cont,
#line 517 "lp.m"
  void * libs__lp__cont_env_ptr)
#line 517 "lp.m"
{
#line 517 "lp.m"
  {
#line 517 "lp.m"
    struct libs__lp__simplex_3_p_0_5_env_0_s libs__lp__env;

#line 517 "lp.m"
    (libs__lp__env).libs__lp__simplex_3_p_0_5_env_0__wrapper_arg_1 = libs__lp__wrapper_arg_1;
#line 517 "lp.m"
    (libs__lp__env).libs__lp__simplex_3_p_0_5_env_0__cont = libs__lp__cont;
#line 517 "lp.m"
    (libs__lp__env).libs__lp__simplex_3_p_0_5_env_0__cont_env_ptr = libs__lp__cont_env_ptr;
#line 517 "lp.m"
    {
#line 517 "lp.m"
      MR_Box libs__lp__closure = libs__lp__closure_arg;

#line 517 "lp.m"
      {
#line 517 "lp.m"
        libs__lp__all_rows_2_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), libs__lp__closure, (MR_Integer) 3))), &(libs__lp__env).libs__lp__simplex_3_p_0_5_env_0__conv3_Row_4, libs__lp__simplex_3_p_0_4, &libs__lp__env);
      }
#line 517 "lp.m"
    }
#line 517 "lp.m"
  }
#line 517 "lp.m"
}

#line 491 "lp.m"
static void MR_CALL 
libs__lp__simplex_3_p_0_3(
#line 491 "lp.m"
  MR_Box libs__lp__closure_arg,
#line 491 "lp.m"
  MR_Box libs__lp__wrapper_arg_1,
#line 491 "lp.m"
  MR_Box libs__lp__wrapper_arg_2,
#line 491 "lp.m"
  MR_Box * libs__lp__wrapper_arg_3)
#line 491 "lp.m"
{
#line 491 "lp.m"
  {
#line 491 "lp.m"
    MR_Box libs__lp__closure = libs__lp__closure_arg;
#line 491 "lp.m"
    MR_Word libs__lp__conv1_HeadVar__4_37;

#line 491 "lp.m"
    {
#line 491 "lp.m"
      libs__lp__IntroducedFrom__pred__simplex__500__1_4_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), libs__lp__closure, (MR_Integer) 3))), ((MR_Integer) libs__lp__wrapper_arg_1), ((MR_Word) libs__lp__wrapper_arg_2), &libs__lp__conv1_HeadVar__4_37);
    }
#line 491 "lp.m"
    *libs__lp__wrapper_arg_3 = ((MR_Box) (libs__lp__conv1_HeadVar__4_37));
#line 491 "lp.m"
  }
#line 491 "lp.m"
}

#line 490 "lp.m"
static void MR_CALL 
libs__lp__simplex_3_p_0_1(
#line 490 "lp.m"
  void * libs__lp__env_ptr_arg)
#line 490 "lp.m"
{
#line 490 "lp.m"
  {
#line 490 "lp.m"
    struct libs__lp__simplex_3_p_0_2_env_0_s * libs__lp__env_ptr = (struct libs__lp__simplex_3_p_0_2_env_0_s *) libs__lp__env_ptr_arg;

#line 490 "lp.m"
    *((libs__lp__env_ptr)->libs__lp__simplex_3_p_0_2_env_0__wrapper_arg_1) = ((MR_Box) ((libs__lp__env_ptr)->libs__lp__simplex_3_p_0_2_env_0__conv0_Col_4));
#line 490 "lp.m"
    {
#line 490 "lp.m"
      ((libs__lp__env_ptr)->libs__lp__simplex_3_p_0_2_env_0__cont)((libs__lp__env_ptr)->libs__lp__simplex_3_p_0_2_env_0__cont_env_ptr);
#line 490 "lp.m"
      return;
    }
#line 490 "lp.m"
  }
#line 490 "lp.m"
}

#line 490 "lp.m"
static void MR_CALL 
libs__lp__simplex_3_p_0_2(
#line 490 "lp.m"
  MR_Box libs__lp__closure_arg,
#line 490 "lp.m"
  MR_Box * libs__lp__wrapper_arg_1,
#line 490 "lp.m"
  MR_Cont libs__lp__cont,
#line 490 "lp.m"
  void * libs__lp__cont_env_ptr)
#line 490 "lp.m"
{
#line 490 "lp.m"
  {
#line 490 "lp.m"
    struct libs__lp__simplex_3_p_0_2_env_0_s libs__lp__env;

#line 490 "lp.m"
    (libs__lp__env).libs__lp__simplex_3_p_0_2_env_0__wrapper_arg_1 = libs__lp__wrapper_arg_1;
#line 490 "lp.m"
    (libs__lp__env).libs__lp__simplex_3_p_0_2_env_0__cont = libs__lp__cont;
#line 490 "lp.m"
    (libs__lp__env).libs__lp__simplex_3_p_0_2_env_0__cont_env_ptr = libs__lp__cont_env_ptr;
#line 490 "lp.m"
    {
#line 490 "lp.m"
      MR_Box libs__lp__closure = libs__lp__closure_arg;

#line 490 "lp.m"
      {
#line 490 "lp.m"
        libs__lp__all_cols_2_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), libs__lp__closure, (MR_Integer) 3))), &(libs__lp__env).libs__lp__simplex_3_p_0_2_env_0__conv0_Col_4, libs__lp__simplex_3_p_0_1, &libs__lp__env);
      }
#line 490 "lp.m"
    }
#line 490 "lp.m"
  }
#line 490 "lp.m"
}

#line 487 "lp.m"
static void MR_CALL 
libs__lp__simplex_3_p_0(
#line 487 "lp.m"
  MR_Word libs__lp__A0_4,
#line 487 "lp.m"
  MR_Word * libs__lp__A_5,
#line 487 "lp.m"
  MR_Word * libs__lp__Result_6)
#line 487 "lp.m"
{
#line 489 "lp.m"
  while (MR_TRUE)
#line 489 "lp.m"
    {
#line 489 "lp.m"
      /* tailcall optimized into a loop */
#line 489 "lp.m"
      {
#line 489 "lp.m"
        MR_bool libs__lp__succeeded;
#line 489 "lp.m"
        MR_Word libs__lp__TypeCtorInfo_72_72;
#line 489 "lp.m"
        MR_Word libs__lp__TypeInfo_73_73;
#line 489 "lp.m"
        MR_Word libs__lp__AllColumns_7;
#line 489 "lp.m"
        MR_Word libs__lp__MinAgg_8;
#line 489 "lp.m"
        MR_Word libs__lp__MinResult_16;
#line 510 "lp.m"
        MR_Box libs__lp__conv2_MinResult_16;

#line 490 "lp.m"
        {
#line 490 "lp.m"
          libs__lp__AllColumns_7 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
#line 490 "lp.m"
          MR_hl_field(MR_mktag(0), libs__lp__AllColumns_7, 0) = ((MR_Box) (&libs__lp_scalar_common_5[1]));
#line 490 "lp.m"
          MR_hl_field(MR_mktag(0), libs__lp__AllColumns_7, 1) = ((MR_Box) (libs__lp__simplex_3_p_0_2));
#line 490 "lp.m"
          MR_hl_field(MR_mktag(0), libs__lp__AllColumns_7, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 490 "lp.m"
          MR_hl_field(MR_mktag(0), libs__lp__AllColumns_7, 3) = ((MR_Box) (libs__lp__A0_4));
#line 490 "lp.m"
        }
#line 491 "lp.m"
        {
#line 491 "lp.m"
          libs__lp__MinAgg_8 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
#line 491 "lp.m"
          MR_hl_field(MR_mktag(0), libs__lp__MinAgg_8, 0) = ((MR_Box) (&libs__lp_scalar_common_4[2]));
#line 491 "lp.m"
          MR_hl_field(MR_mktag(0), libs__lp__MinAgg_8, 1) = ((MR_Box) (libs__lp__simplex_3_p_0_3));
#line 491 "lp.m"
          MR_hl_field(MR_mktag(0), libs__lp__MinAgg_8, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 491 "lp.m"
          MR_hl_field(MR_mktag(0), libs__lp__MinAgg_8, 3) = ((MR_Box) (libs__lp__A0_4));
#line 491 "lp.m"
        }
#line 10077 "libs.lp.c"
        libs__lp__TypeCtorInfo_72_72 = (MR_Word) &mercury__builtin__builtin__type_ctor_info_int_0;
#line 10079 "libs.lp.c"
        libs__lp__TypeInfo_73_73 = (MR_Word) &libs__lp_scalar_common_1[1];
#line 510 "lp.m"
        {
#line 510 "lp.m"
          mercury__solutions__aggregate_4_p_3(libs__lp__TypeCtorInfo_72_72, libs__lp__TypeInfo_73_73, libs__lp__AllColumns_7, libs__lp__MinAgg_8, ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))), &libs__lp__conv2_MinResult_16);
        }
#line 510 "lp.m"
        libs__lp__MinResult_16 = ((MR_Word) libs__lp__conv2_MinResult_16);
#line 515 "lp.m"
        if ((libs__lp__MinResult_16 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 512 "lp.m"
          {
#line 513 "lp.m"
            *libs__lp__A_5 = libs__lp__A0_4;
#line 514 "lp.m"
            *libs__lp__Result_6 = (MR_Integer) 1;
#line 512 "lp.m"
          }
#line 515 "lp.m"
        else
#line 516 "lp.m"
          {
#line 516 "lp.m"
            MR_Integer libs__lp__Q_17;
#line 516 "lp.m"
            MR_Word libs__lp__AllRows_19;
#line 516 "lp.m"
            MR_Word libs__lp__MaxAgg_20;
#line 516 "lp.m"
            MR_Word libs__lp__MaxResult_31;
#line 516 "lp.m"
            MR_Word libs__lp__V_45_45 = ((MR_Word) (MR_hl_field(MR_mktag(1), libs__lp__MinResult_16, (MR_Integer) 0)));
#line 516 "lp.m"
            MR_Float libs__lp___Val_18;
#line 546 "lp.m"
            MR_Box libs__lp__conv5_MaxResult_31;

#line 516 "lp.m"
            libs__lp__Q_17 = ((MR_Integer) (MR_hl_field(MR_mktag(0), libs__lp__V_45_45, (MR_Integer) 0)));
#line 516 "lp.m"
            libs__lp___Val_18 = MR_unbox_float((MR_hl_field(MR_mktag(0), libs__lp__V_45_45, (MR_Integer) 1)));
#line 517 "lp.m"
            {
#line 517 "lp.m"
              libs__lp__AllRows_19 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
#line 517 "lp.m"
              MR_hl_field(MR_mktag(0), libs__lp__AllRows_19, 0) = ((MR_Box) (&libs__lp_scalar_common_5[1]));
#line 517 "lp.m"
              MR_hl_field(MR_mktag(0), libs__lp__AllRows_19, 1) = ((MR_Box) (libs__lp__simplex_3_p_0_5));
#line 517 "lp.m"
              MR_hl_field(MR_mktag(0), libs__lp__AllRows_19, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 517 "lp.m"
              MR_hl_field(MR_mktag(0), libs__lp__AllRows_19, 3) = ((MR_Box) (libs__lp__A0_4));
#line 517 "lp.m"
            }
#line 518 "lp.m"
            {
#line 518 "lp.m"
              libs__lp__MaxAgg_20 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
#line 518 "lp.m"
              MR_hl_field(MR_mktag(0), libs__lp__MaxAgg_20, 0) = ((MR_Box) (&libs__lp_scalar_common_6[0]));
#line 518 "lp.m"
              MR_hl_field(MR_mktag(0), libs__lp__MaxAgg_20, 1) = ((MR_Box) (libs__lp__simplex_3_p_0_6));
#line 518 "lp.m"
              MR_hl_field(MR_mktag(0), libs__lp__MaxAgg_20, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
#line 518 "lp.m"
              MR_hl_field(MR_mktag(0), libs__lp__MaxAgg_20, 3) = ((MR_Box) (libs__lp__A0_4));
#line 518 "lp.m"
              MR_hl_field(MR_mktag(0), libs__lp__MaxAgg_20, 4) = ((MR_Box) (libs__lp__Q_17));
#line 518 "lp.m"
            }
#line 546 "lp.m"
            {
#line 546 "lp.m"
              mercury__solutions__aggregate_4_p_3(libs__lp__TypeCtorInfo_72_72, libs__lp__TypeInfo_73_73, libs__lp__AllRows_19, libs__lp__MaxAgg_20, ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))), &libs__lp__conv5_MaxResult_31);
            }
#line 546 "lp.m"
            libs__lp__MaxResult_31 = ((MR_Word) libs__lp__conv5_MaxResult_31);
#line 551 "lp.m"
            if ((libs__lp__MaxResult_31 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 548 "lp.m"
              {
#line 549 "lp.m"
                *libs__lp__A_5 = libs__lp__A0_4;
#line 550 "lp.m"
                *libs__lp__Result_6 = (MR_Integer) 0;
#line 548 "lp.m"
              }
#line 551 "lp.m"
            else
#line 552 "lp.m"
              {
#line 552 "lp.m"
                MR_Integer libs__lp__P_32;
#line 552 "lp.m"
                MR_Word libs__lp__A1_34;
#line 552 "lp.m"
                MR_Word libs__lp__V_55_55 = ((MR_Word) (MR_hl_field(MR_mktag(1), libs__lp__MaxResult_31, (MR_Integer) 0)));
#line 552 "lp.m"
                MR_Float libs__lp__V_33_33;

#line 552 "lp.m"
                libs__lp__P_32 = ((MR_Integer) (MR_hl_field(MR_mktag(0), libs__lp__V_55_55, (MR_Integer) 0)));
#line 552 "lp.m"
                libs__lp__V_33_33 = MR_unbox_float((MR_hl_field(MR_mktag(0), libs__lp__V_55_55, (MR_Integer) 1)));
#line 553 "lp.m"
                {
#line 553 "lp.m"
                  libs__lp__pivot_4_p_0(libs__lp__P_32, libs__lp__Q_17, libs__lp__A0_4, &libs__lp__A1_34);
                }
#line 554 "lp.m"
                /* direct tailcall eliminated */
#line 554 "lp.m"
                {
#line 554 "lp.m"
                  MR_Word libs__lp__A0__tmp_copy_4 = libs__lp__A1_34;

#line 554 "lp.m"
                  libs__lp__A0_4 = libs__lp__A0__tmp_copy_4;
#line 554 "lp.m"
                }
#line 554 "lp.m"
                continue;
#line 552 "lp.m"
              }
#line 516 "lp.m"
          }
#line 489 "lp.m"
      }
#line 489 "lp.m"
      break;
#line 489 "lp.m"
    }
#line 487 "lp.m"
}

#line 474 "lp.m"
static void MR_CALL 
libs__lp__extract_obj_var2_3_p_0_1(
#line 474 "lp.m"
  void * libs__lp__env_ptr_arg)
#line 474 "lp.m"
{
#line 474 "lp.m"
  {
#line 474 "lp.m"
    struct libs__lp__extract_obj_var2_3_p_0_2_env_0_s * libs__lp__env_ptr = (struct libs__lp__extract_obj_var2_3_p_0_2_env_0_s *) libs__lp__env_ptr_arg;

#line 474 "lp.m"
    *((libs__lp__env_ptr)->libs__lp__extract_obj_var2_3_p_0_2_env_0__wrapper_arg_1) = MR_box_float((libs__lp__env_ptr)->libs__lp__extract_obj_var2_3_p_0_2_env_0__conv1_HeadVar__3_14);
#line 474 "lp.m"
    {
#line 474 "lp.m"
      ((libs__lp__env_ptr)->libs__lp__extract_obj_var2_3_p_0_2_env_0__cont)((libs__lp__env_ptr)->libs__lp__extract_obj_var2_3_p_0_2_env_0__cont_env_ptr);
#line 474 "lp.m"
      return;
    }
#line 474 "lp.m"
  }
#line 474 "lp.m"
}

#line 474 "lp.m"
static void MR_CALL 
libs__lp__extract_obj_var2_3_p_0_2(
#line 474 "lp.m"
  MR_Box libs__lp__closure_arg,
#line 474 "lp.m"
  MR_Box * libs__lp__wrapper_arg_1,
#line 474 "lp.m"
  MR_Cont libs__lp__cont,
#line 474 "lp.m"
  void * libs__lp__cont_env_ptr)
#line 474 "lp.m"
{
#line 474 "lp.m"
  {
#line 474 "lp.m"
    struct libs__lp__extract_obj_var2_3_p_0_2_env_0_s libs__lp__env;

#line 474 "lp.m"
    (libs__lp__env).libs__lp__extract_obj_var2_3_p_0_2_env_0__wrapper_arg_1 = libs__lp__wrapper_arg_1;
#line 474 "lp.m"
    (libs__lp__env).libs__lp__extract_obj_var2_3_p_0_2_env_0__cont = libs__lp__cont;
#line 474 "lp.m"
    (libs__lp__env).libs__lp__extract_obj_var2_3_p_0_2_env_0__cont_env_ptr = libs__lp__cont_env_ptr;
#line 474 "lp.m"
    {
#line 474 "lp.m"
      MR_Box libs__lp__closure = libs__lp__closure_arg;

#line 474 "lp.m"
      {
#line 474 "lp.m"
        libs__lp__IntroducedFrom__pred__extract_obj_var2__474__1_3_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), libs__lp__closure, (MR_Integer) 3))), ((MR_Integer) (MR_hl_field(MR_mktag(0), libs__lp__closure, (MR_Integer) 4))), &(libs__lp__env).libs__lp__extract_obj_var2_3_p_0_2_env_0__conv1_HeadVar__3_14, libs__lp__extract_obj_var2_3_p_0_1, &libs__lp__env);
      }
#line 474 "lp.m"
    }
#line 474 "lp.m"
  }
#line 474 "lp.m"
}

#line 470 "lp.m"
static void MR_CALL 
libs__lp__extract_obj_var2_3_p_0(
#line 470 "lp.m"
  MR_Word libs__lp__Tab_4,
#line 470 "lp.m"
  MR_Word libs__lp__Var_5,
#line 470 "lp.m"
  MR_Float * libs__lp__Val_6)
#line 470 "lp.m"
{
#line 472 "lp.m"
  {
#line 472 "lp.m"
    MR_bool libs__lp__succeeded;
#line 472 "lp.m"
    MR_Integer libs__lp__Col_7;
#line 472 "lp.m"
    MR_Word libs__lp__GetCell_8;
#line 472 "lp.m"
    MR_Word libs__lp__Solns_12;
#line 472 "lp.m"
    MR_Word libs__lp__VarCols_25 = ((MR_Word) (MR_hl_field(MR_mktag(0), libs__lp__Tab_4, (MR_Integer) 2)));
#line 776 "lp.m"
    MR_Integer libs__lp__V_23_23 = ((MR_Integer) (MR_hl_field(MR_mktag(0), libs__lp__Tab_4, (MR_Integer) 0)));
#line 776 "lp.m"
    MR_Integer libs__lp__V_24_24 = ((MR_Integer) (MR_hl_field(MR_mktag(0), libs__lp__Tab_4, (MR_Integer) 1)));
#line 776 "lp.m"
    MR_Word libs__lp__V_26_26 = ((MR_Word) (MR_hl_field(MR_mktag(0), libs__lp__Tab_4, (MR_Integer) 3)));
#line 776 "lp.m"
    MR_Word libs__lp__V_27_27 = ((MR_Word) (MR_hl_field(MR_mktag(0), libs__lp__Tab_4, (MR_Integer) 4)));
#line 776 "lp.m"
    MR_Word libs__lp__V_28_28 = ((MR_Word) (MR_hl_field(MR_mktag(0), libs__lp__Tab_4, (MR_Integer) 5)));
#line 776 "lp.m"
    MR_Word libs__lp__V_29_29 = ((MR_Word) (MR_hl_field(MR_mktag(0), libs__lp__Tab_4, (MR_Integer) 6)));
#line 777 "lp.m"
    MR_Box libs__lp__conv0_Col_7;
#line 483 "lp.m"
    MR_Float libs__lp__Val1_13;
#line 481 "lp.m"
    MR_Word libs__lp__V_16_16;

#line 777 "lp.m"
    {
#line 777 "lp.m"
      mercury__map__lookup_3_p_0((MR_Word) &libs__lp_scalar_common_1[0], (MR_Word) &mercury__builtin__builtin__type_ctor_info_int_0, libs__lp__VarCols_25, ((MR_Box) (libs__lp__Var_5)), &libs__lp__conv0_Col_7);
    }
#line 777 "lp.m"
    libs__lp__Col_7 = ((MR_Integer) libs__lp__conv0_Col_7);
#line 474 "lp.m"
    {
#line 474 "lp.m"
      libs__lp__GetCell_8 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
#line 474 "lp.m"
      MR_hl_field(MR_mktag(0), libs__lp__GetCell_8, 0) = ((MR_Box) (&libs__lp_scalar_common_3[4]));
#line 474 "lp.m"
      MR_hl_field(MR_mktag(0), libs__lp__GetCell_8, 1) = ((MR_Box) (libs__lp__extract_obj_var2_3_p_0_2));
#line 474 "lp.m"
      MR_hl_field(MR_mktag(0), libs__lp__GetCell_8, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
#line 474 "lp.m"
      MR_hl_field(MR_mktag(0), libs__lp__GetCell_8, 3) = ((MR_Box) (libs__lp__Tab_4));
#line 474 "lp.m"
      MR_hl_field(MR_mktag(0), libs__lp__GetCell_8, 4) = ((MR_Box) (libs__lp__Col_7));
#line 474 "lp.m"
    }
#line 480 "lp.m"
    {
#line 480 "lp.m"
      mercury__solutions__solutions_2_p_1((MR_Word) &mercury__builtin__builtin__type_ctor_info_float_0, libs__lp__GetCell_8, &libs__lp__Solns_12);
    }
#line 481 "lp.m"
    libs__lp__succeeded = ((MR_tag((MR_Word) libs__lp__Solns_12)) == (MR_mktag((MR_Integer) 1)));
#line 481 "lp.m"
    if (libs__lp__succeeded)
#line 481 "lp.m"
      {
#line 481 "lp.m"
        libs__lp__Val1_13 = MR_unbox_float((MR_hl_field(MR_mktag(1), libs__lp__Solns_12, (MR_Integer) 0)));
#line 481 "lp.m"
        libs__lp__V_16_16 = ((MR_Word) (MR_hl_field(MR_mktag(1), libs__lp__Solns_12, (MR_Integer) 1)));
#line 481 "lp.m"
        libs__lp__succeeded = (libs__lp__V_16_16 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 481 "lp.m"
      }
#line 483 "lp.m"
    if (libs__lp__succeeded)
#line 482 "lp.m"
      *libs__lp__Val_6 = libs__lp__Val1_13;
#line 483 "lp.m"
    else
#line 484 "lp.m"
      *libs__lp__Val_6 = (MR_Float) 0.0000000000000000;
#line 472 "lp.m"
  }
#line 470 "lp.m"
}

#line 474 "lp.m"
static void MR_CALL 
libs__lp__extract_obj_var_4_p_0_3(
#line 474 "lp.m"
  void * libs__lp__env_ptr_arg)
#line 474 "lp.m"
{
#line 474 "lp.m"
  {
#line 474 "lp.m"
    struct libs__lp__extract_obj_var_4_p_0_4_env_0_s * libs__lp__env_ptr = (struct libs__lp__extract_obj_var_4_p_0_4_env_0_s *) libs__lp__env_ptr_arg;

#line 474 "lp.m"
    *((libs__lp__env_ptr)->libs__lp__extract_obj_var_4_p_0_4_env_0__wrapper_arg_1) = MR_box_float((libs__lp__env_ptr)->libs__lp__extract_obj_var_4_p_0_4_env_0__conv4_HeadVar__3_14);
#line 474 "lp.m"
    {
#line 474 "lp.m"
      ((libs__lp__env_ptr)->libs__lp__extract_obj_var_4_p_0_4_env_0__cont)((libs__lp__env_ptr)->libs__lp__extract_obj_var_4_p_0_4_env_0__cont_env_ptr);
#line 474 "lp.m"
      return;
    }
#line 474 "lp.m"
  }
#line 474 "lp.m"
}

#line 474 "lp.m"
static void MR_CALL 
libs__lp__extract_obj_var_4_p_0_4(
#line 474 "lp.m"
  MR_Box libs__lp__closure_arg,
#line 474 "lp.m"
  MR_Box * libs__lp__wrapper_arg_1,
#line 474 "lp.m"
  MR_Cont libs__lp__cont,
#line 474 "lp.m"
  void * libs__lp__cont_env_ptr)
#line 474 "lp.m"
{
#line 474 "lp.m"
  {
#line 474 "lp.m"
    struct libs__lp__extract_obj_var_4_p_0_4_env_0_s libs__lp__env;

#line 474 "lp.m"
    (libs__lp__env).libs__lp__extract_obj_var_4_p_0_4_env_0__wrapper_arg_1 = libs__lp__wrapper_arg_1;
#line 474 "lp.m"
    (libs__lp__env).libs__lp__extract_obj_var_4_p_0_4_env_0__cont = libs__lp__cont;
#line 474 "lp.m"
    (libs__lp__env).libs__lp__extract_obj_var_4_p_0_4_env_0__cont_env_ptr = libs__lp__cont_env_ptr;
#line 474 "lp.m"
    {
#line 474 "lp.m"
      MR_Box libs__lp__closure = libs__lp__closure_arg;

#line 474 "lp.m"
      {
#line 474 "lp.m"
        libs__lp__IntroducedFrom__pred__extract_obj_var2__474__1_3_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), libs__lp__closure, (MR_Integer) 3))), ((MR_Integer) (MR_hl_field(MR_mktag(0), libs__lp__closure, (MR_Integer) 4))), &(libs__lp__env).libs__lp__extract_obj_var_4_p_0_4_env_0__conv4_HeadVar__3_14, libs__lp__extract_obj_var_4_p_0_3, &libs__lp__env);
      }
#line 474 "lp.m"
    }
#line 474 "lp.m"
  }
#line 474 "lp.m"
}

#line 474 "lp.m"
static void MR_CALL 
libs__lp__extract_obj_var_4_p_0_1(
#line 474 "lp.m"
  void * libs__lp__env_ptr_arg)
#line 474 "lp.m"
{
#line 474 "lp.m"
  {
#line 474 "lp.m"
    struct libs__lp__extract_obj_var_4_p_0_2_env_0_s * libs__lp__env_ptr = (struct libs__lp__extract_obj_var_4_p_0_2_env_0_s *) libs__lp__env_ptr_arg;

#line 474 "lp.m"
    *((libs__lp__env_ptr)->libs__lp__extract_obj_var_4_p_0_2_env_0__wrapper_arg_1) = MR_box_float((libs__lp__env_ptr)->libs__lp__extract_obj_var_4_p_0_2_env_0__conv2_HeadVar__3_14);
#line 474 "lp.m"
    {
#line 474 "lp.m"
      ((libs__lp__env_ptr)->libs__lp__extract_obj_var_4_p_0_2_env_0__cont)((libs__lp__env_ptr)->libs__lp__extract_obj_var_4_p_0_2_env_0__cont_env_ptr);
#line 474 "lp.m"
      return;
    }
#line 474 "lp.m"
  }
#line 474 "lp.m"
}

#line 474 "lp.m"
static void MR_CALL 
libs__lp__extract_obj_var_4_p_0_2(
#line 474 "lp.m"
  MR_Box libs__lp__closure_arg,
#line 474 "lp.m"
  MR_Box * libs__lp__wrapper_arg_1,
#line 474 "lp.m"
  MR_Cont libs__lp__cont,
#line 474 "lp.m"
  void * libs__lp__cont_env_ptr)
#line 474 "lp.m"
{
#line 474 "lp.m"
  {
#line 474 "lp.m"
    struct libs__lp__extract_obj_var_4_p_0_2_env_0_s libs__lp__env;

#line 474 "lp.m"
    (libs__lp__env).libs__lp__extract_obj_var_4_p_0_2_env_0__wrapper_arg_1 = libs__lp__wrapper_arg_1;
#line 474 "lp.m"
    (libs__lp__env).libs__lp__extract_obj_var_4_p_0_2_env_0__cont = libs__lp__cont;
#line 474 "lp.m"
    (libs__lp__env).libs__lp__extract_obj_var_4_p_0_2_env_0__cont_env_ptr = libs__lp__cont_env_ptr;
#line 474 "lp.m"
    {
#line 474 "lp.m"
      MR_Box libs__lp__closure = libs__lp__closure_arg;

#line 474 "lp.m"
      {
#line 474 "lp.m"
        libs__lp__IntroducedFrom__pred__extract_obj_var2__474__1_3_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), libs__lp__closure, (MR_Integer) 3))), ((MR_Integer) (MR_hl_field(MR_mktag(0), libs__lp__closure, (MR_Integer) 4))), &(libs__lp__env).libs__lp__extract_obj_var_4_p_0_2_env_0__conv2_HeadVar__3_14, libs__lp__extract_obj_var_4_p_0_1, &libs__lp__env);
      }
#line 474 "lp.m"
    }
#line 474 "lp.m"
  }
#line 474 "lp.m"
}

#line 456 "lp.m"
static void MR_CALL 
libs__lp__extract_obj_var_4_p_0(
#line 456 "lp.m"
  MR_Word libs__lp__Tab_5,
#line 456 "lp.m"
  MR_Word libs__lp__Var_6,
#line 456 "lp.m"
  MR_Word libs__lp__STATE_VARIABLE_Map_0_14,
#line 456 "lp.m"
  MR_Word * libs__lp__STATE_VARIABLE_Map_15)
#line 456 "lp.m"
{
#line 459 "lp.m"
  {
#line 459 "lp.m"
    MR_bool libs__lp__succeeded;
#line 459 "lp.m"
    MR_Word libs__lp__Vars_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), libs__lp__Tab_5, (MR_Integer) 3)));
#line 459 "lp.m"
    MR_Float libs__lp__Val_13;
#line 781 "lp.m"
    MR_Integer libs__lp__V_23_23 = ((MR_Integer) (MR_hl_field(MR_mktag(0), libs__lp__Tab_5, (MR_Integer) 0)));
#line 781 "lp.m"
    MR_Integer libs__lp__V_24_24 = ((MR_Integer) (MR_hl_field(MR_mktag(0), libs__lp__Tab_5, (MR_Integer) 1)));
#line 781 "lp.m"
    MR_Word libs__lp__V_25_25 = ((MR_Word) (MR_hl_field(MR_mktag(0), libs__lp__Tab_5, (MR_Integer) 2)));
#line 781 "lp.m"
    MR_Word libs__lp__V_26_26 = ((MR_Word) (MR_hl_field(MR_mktag(0), libs__lp__Tab_5, (MR_Integer) 4)));
#line 781 "lp.m"
    MR_Word libs__lp__V_27_27 = ((MR_Word) (MR_hl_field(MR_mktag(0), libs__lp__Tab_5, (MR_Integer) 5)));
#line 781 "lp.m"
    MR_Word libs__lp__V_28_28 = ((MR_Word) (MR_hl_field(MR_mktag(0), libs__lp__Tab_5, (MR_Integer) 6)));
#line 465 "lp.m"
    MR_Word libs__lp__Pos_9;
#line 465 "lp.m"
    MR_Word libs__lp__Neg_10;
#line 461 "lp.m"
    MR_Word libs__lp__V_16_16;
#line 461 "lp.m"
    MR_Box libs__lp__conv0_V_16_16;

#line 461 "lp.m"
    {
#line 461 "lp.m"
      libs__lp__succeeded = mercury__map__search_3_p_0((MR_Word) &libs__lp_scalar_common_1[0], (MR_Word) &libs__lp_scalar_common_2[2], libs__lp__Vars_8, ((MR_Box) (libs__lp__Var_6)), &libs__lp__conv0_V_16_16);
    }
#line 461 "lp.m"
    if (libs__lp__succeeded)
#line 461 "lp.m"
      {
#line 461 "lp.m"
        libs__lp__V_16_16 = ((MR_Word) libs__lp__conv0_V_16_16);
#line 461 "lp.m"
        libs__lp__succeeded = MR_TRUE;
#line 461 "lp.m"
      }
#line 461 "lp.m"
    if (libs__lp__succeeded)
#line 461 "lp.m"
      {
#line 461 "lp.m"
        libs__lp__Pos_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), libs__lp__V_16_16, (MR_Integer) 0)));
#line 461 "lp.m"
        libs__lp__Neg_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), libs__lp__V_16_16, (MR_Integer) 1)));
#line 461 "lp.m"
        libs__lp__succeeded = MR_TRUE;
#line 461 "lp.m"
      }
#line 465 "lp.m"
    if (libs__lp__succeeded)
#line 462 "lp.m"
      {
#line 462 "lp.m"
        MR_Float libs__lp__PosVal_11;
#line 462 "lp.m"
        MR_Float libs__lp__NegVal_12;
#line 462 "lp.m"
        MR_Integer libs__lp__Col_32;
#line 462 "lp.m"
        MR_Word libs__lp__GetCell_33;
#line 462 "lp.m"
        MR_Word libs__lp__Solns_37;
#line 462 "lp.m"
        MR_Word libs__lp__VarCols_50 = ((MR_Word) (MR_hl_field(MR_mktag(0), libs__lp__Tab_5, (MR_Integer) 2)));
#line 462 "lp.m"
        MR_Integer libs__lp__Col_60;
#line 462 "lp.m"
        MR_Word libs__lp__GetCell_61;
#line 462 "lp.m"
        MR_Word libs__lp__Solns_65;
#line 462 "lp.m"
        MR_Word libs__lp__VarCols_78;
#line 776 "lp.m"
        MR_Integer libs__lp__V_48_48 = ((MR_Integer) (MR_hl_field(MR_mktag(0), libs__lp__Tab_5, (MR_Integer) 0)));
#line 776 "lp.m"
        MR_Integer libs__lp__V_49_49 = ((MR_Integer) (MR_hl_field(MR_mktag(0), libs__lp__Tab_5, (MR_Integer) 1)));
#line 776 "lp.m"
        MR_Word libs__lp__V_51_51 = ((MR_Word) (MR_hl_field(MR_mktag(0), libs__lp__Tab_5, (MR_Integer) 3)));
#line 776 "lp.m"
        MR_Word libs__lp__V_52_52 = ((MR_Word) (MR_hl_field(MR_mktag(0), libs__lp__Tab_5, (MR_Integer) 4)));
#line 776 "lp.m"
        MR_Word libs__lp__V_53_53 = ((MR_Word) (MR_hl_field(MR_mktag(0), libs__lp__Tab_5, (MR_Integer) 5)));
#line 776 "lp.m"
        MR_Word libs__lp__V_54_54 = ((MR_Word) (MR_hl_field(MR_mktag(0), libs__lp__Tab_5, (MR_Integer) 6)));
#line 777 "lp.m"
        MR_Box libs__lp__conv1_Col_32;
#line 483 "lp.m"
        MR_Float libs__lp__Val1_38;
#line 481 "lp.m"
        MR_Word libs__lp__V_41_41;
#line 776 "lp.m"
        MR_Integer libs__lp__V_76_76;
#line 776 "lp.m"
        MR_Integer libs__lp__V_77_77;
#line 776 "lp.m"
        MR_Word libs__lp__V_79_79;
#line 776 "lp.m"
        MR_Word libs__lp__V_80_80;
#line 776 "lp.m"
        MR_Word libs__lp__V_81_81;
#line 776 "lp.m"
        MR_Word libs__lp__V_82_82;
#line 777 "lp.m"
        MR_Box libs__lp__conv3_Col_60;
#line 483 "lp.m"
        MR_Float libs__lp__Val1_66;
#line 481 "lp.m"
        MR_Word libs__lp__V_69_69;

#line 777 "lp.m"
        {
#line 777 "lp.m"
          mercury__map__lookup_3_p_0((MR_Word) &libs__lp_scalar_common_1[0], (MR_Word) &mercury__builtin__builtin__type_ctor_info_int_0, libs__lp__VarCols_50, ((MR_Box) (libs__lp__Pos_9)), &libs__lp__conv1_Col_32);
        }
#line 777 "lp.m"
        libs__lp__Col_32 = ((MR_Integer) libs__lp__conv1_Col_32);
#line 474 "lp.m"
        {
#line 474 "lp.m"
          libs__lp__GetCell_33 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
#line 474 "lp.m"
          MR_hl_field(MR_mktag(0), libs__lp__GetCell_33, 0) = ((MR_Box) (&libs__lp_scalar_common_3[4]));
#line 474 "lp.m"
          MR_hl_field(MR_mktag(0), libs__lp__GetCell_33, 1) = ((MR_Box) (libs__lp__extract_obj_var_4_p_0_2));
#line 474 "lp.m"
          MR_hl_field(MR_mktag(0), libs__lp__GetCell_33, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
#line 474 "lp.m"
          MR_hl_field(MR_mktag(0), libs__lp__GetCell_33, 3) = ((MR_Box) (libs__lp__Tab_5));
#line 474 "lp.m"
          MR_hl_field(MR_mktag(0), libs__lp__GetCell_33, 4) = ((MR_Box) (libs__lp__Col_32));
#line 474 "lp.m"
        }
#line 480 "lp.m"
        {
#line 480 "lp.m"
          mercury__solutions__solutions_2_p_1((MR_Word) &mercury__builtin__builtin__type_ctor_info_float_0, libs__lp__GetCell_33, &libs__lp__Solns_37);
        }
#line 481 "lp.m"
        libs__lp__succeeded = ((MR_tag((MR_Word) libs__lp__Solns_37)) == (MR_mktag((MR_Integer) 1)));
#line 481 "lp.m"
        if (libs__lp__succeeded)
#line 481 "lp.m"
          {
#line 481 "lp.m"
            libs__lp__Val1_38 = MR_unbox_float((MR_hl_field(MR_mktag(1), libs__lp__Solns_37, (MR_Integer) 0)));
#line 481 "lp.m"
            libs__lp__V_41_41 = ((MR_Word) (MR_hl_field(MR_mktag(1), libs__lp__Solns_37, (MR_Integer) 1)));
#line 481 "lp.m"
            libs__lp__succeeded = (libs__lp__V_41_41 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 481 "lp.m"
          }
#line 483 "lp.m"
        if (libs__lp__succeeded)
#line 482 "lp.m"
          libs__lp__PosVal_11 = libs__lp__Val1_38;
#line 483 "lp.m"
        else
#line 484 "lp.m"
          libs__lp__PosVal_11 = (MR_Float) 0.0000000000000000;
#line 776 "lp.m"
        libs__lp__V_76_76 = ((MR_Integer) (MR_hl_field(MR_mktag(0), libs__lp__Tab_5, (MR_Integer) 0)));
#line 776 "lp.m"
        libs__lp__V_77_77 = ((MR_Integer) (MR_hl_field(MR_mktag(0), libs__lp__Tab_5, (MR_Integer) 1)));
#line 776 "lp.m"
        libs__lp__VarCols_78 = ((MR_Word) (MR_hl_field(MR_mktag(0), libs__lp__Tab_5, (MR_Integer) 2)));
#line 776 "lp.m"
        libs__lp__V_79_79 = ((MR_Word) (MR_hl_field(MR_mktag(0), libs__lp__Tab_5, (MR_Integer) 3)));
#line 776 "lp.m"
        libs__lp__V_80_80 = ((MR_Word) (MR_hl_field(MR_mktag(0), libs__lp__Tab_5, (MR_Integer) 4)));
#line 776 "lp.m"
        libs__lp__V_81_81 = ((MR_Word) (MR_hl_field(MR_mktag(0), libs__lp__Tab_5, (MR_Integer) 5)));
#line 776 "lp.m"
        libs__lp__V_82_82 = ((MR_Word) (MR_hl_field(MR_mktag(0), libs__lp__Tab_5, (MR_Integer) 6)));
#line 777 "lp.m"
        {
#line 777 "lp.m"
          mercury__map__lookup_3_p_0((MR_Word) &libs__lp_scalar_common_1[0], (MR_Word) &mercury__builtin__builtin__type_ctor_info_int_0, libs__lp__VarCols_78, ((MR_Box) (libs__lp__Neg_10)), &libs__lp__conv3_Col_60);
        }
#line 777 "lp.m"
        libs__lp__Col_60 = ((MR_Integer) libs__lp__conv3_Col_60);
#line 474 "lp.m"
        {
#line 474 "lp.m"
          libs__lp__GetCell_61 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
#line 474 "lp.m"
          MR_hl_field(MR_mktag(0), libs__lp__GetCell_61, 0) = ((MR_Box) (&libs__lp_scalar_common_3[4]));
#line 474 "lp.m"
          MR_hl_field(MR_mktag(0), libs__lp__GetCell_61, 1) = ((MR_Box) (libs__lp__extract_obj_var_4_p_0_4));
#line 474 "lp.m"
          MR_hl_field(MR_mktag(0), libs__lp__GetCell_61, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
#line 474 "lp.m"
          MR_hl_field(MR_mktag(0), libs__lp__GetCell_61, 3) = ((MR_Box) (libs__lp__Tab_5));
#line 474 "lp.m"
          MR_hl_field(MR_mktag(0), libs__lp__GetCell_61, 4) = ((MR_Box) (libs__lp__Col_60));
#line 474 "lp.m"
        }
#line 480 "lp.m"
        {
#line 480 "lp.m"
          mercury__solutions__solutions_2_p_1((MR_Word) &mercury__builtin__builtin__type_ctor_info_float_0, libs__lp__GetCell_61, &libs__lp__Solns_65);
        }
#line 481 "lp.m"
        libs__lp__succeeded = ((MR_tag((MR_Word) libs__lp__Solns_65)) == (MR_mktag((MR_Integer) 1)));
#line 481 "lp.m"
        if (libs__lp__succeeded)
#line 481 "lp.m"
          {
#line 481 "lp.m"
            libs__lp__Val1_66 = MR_unbox_float((MR_hl_field(MR_mktag(1), libs__lp__Solns_65, (MR_Integer) 0)));
#line 481 "lp.m"
            libs__lp__V_69_69 = ((MR_Word) (MR_hl_field(MR_mktag(1), libs__lp__Solns_65, (MR_Integer) 1)));
#line 481 "lp.m"
            libs__lp__succeeded = (libs__lp__V_69_69 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 481 "lp.m"
          }
#line 483 "lp.m"
        if (libs__lp__succeeded)
#line 482 "lp.m"
          libs__lp__NegVal_12 = libs__lp__Val1_66;
#line 483 "lp.m"
        else
#line 484 "lp.m"
          libs__lp__NegVal_12 = (MR_Float) 0.0000000000000000;
#line 464 "lp.m"
        libs__lp__Val_13 = (libs__lp__PosVal_11 - libs__lp__NegVal_12);
#line 462 "lp.m"
      }
#line 465 "lp.m"
    else
#line 466 "lp.m"
      {
#line 466 "lp.m"
        libs__lp__extract_obj_var2_3_p_0(libs__lp__Tab_5, libs__lp__Var_6, &libs__lp__Val_13);
      }
#line 468 "lp.m"
    {
#line 468 "lp.m"
      mercury__map__set_4_p_0((MR_Word) &libs__lp_scalar_common_1[0], (MR_Word) &mercury__builtin__builtin__type_ctor_info_float_0, ((MR_Box) (libs__lp__Var_6)), MR_box_float(libs__lp__Val_13), libs__lp__STATE_VARIABLE_Map_0_14, libs__lp__STATE_VARIABLE_Map_15);
#line 468 "lp.m"
      return;
    }
#line 459 "lp.m"
  }
#line 456 "lp.m"
}

#line 454 "lp.m"
static void MR_CALL 
libs__lp__optimize_4_p_0_1(
#line 454 "lp.m"
  MR_Box libs__lp__closure_arg,
#line 454 "lp.m"
  MR_Box libs__lp__wrapper_arg_1,
#line 454 "lp.m"
  MR_Box libs__lp__wrapper_arg_2,
#line 454 "lp.m"
  MR_Box * libs__lp__wrapper_arg_3)
#line 454 "lp.m"
{
#line 454 "lp.m"
  {
#line 454 "lp.m"
    MR_Box libs__lp__closure = libs__lp__closure_arg;
#line 454 "lp.m"
    MR_Word libs__lp__conv0_STATE_VARIABLE_Map_15;

#line 454 "lp.m"
    {
#line 454 "lp.m"
      libs__lp__extract_obj_var_4_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), libs__lp__closure, (MR_Integer) 3))), ((MR_Word) libs__lp__wrapper_arg_1), ((MR_Word) libs__lp__wrapper_arg_2), &libs__lp__conv0_STATE_VARIABLE_Map_15);
    }
#line 454 "lp.m"
    *libs__lp__wrapper_arg_3 = ((MR_Box) (libs__lp__conv0_STATE_VARIABLE_Map_15));
#line 454 "lp.m"
  }
#line 454 "lp.m"
}

#line 434 "lp.m"
static void MR_CALL 
libs__lp__optimize_4_p_0(
#line 434 "lp.m"
  MR_Word libs__lp__ObjVars_5,
#line 434 "lp.m"
  MR_Word libs__lp__A0_6,
#line 434 "lp.m"
  MR_Word * libs__lp__A_7,
#line 434 "lp.m"
  MR_Word * libs__lp__Result_8)
#line 434 "lp.m"
{
#line 437 "lp.m"
  {
#line 437 "lp.m"
    MR_bool libs__lp__succeeded;
#line 437 "lp.m"
    MR_Word libs__lp__Res0_9;

#line 438 "lp.m"
    {
#line 438 "lp.m"
      libs__lp__simplex_3_p_0(libs__lp__A0_6, libs__lp__A_7, &libs__lp__Res0_9);
    }
#line 442 "lp.m"
    if ((libs__lp__Res0_9 == (MR_Integer) 0))
#line 441 "lp.m"
      *libs__lp__Result_8 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 442 "lp.m"
    else
#line 443 "lp.m"
      {
#line 443 "lp.m"
        MR_Word libs__lp__TypeInfo_12_29;
#line 443 "lp.m"
        MR_Integer libs__lp__M_10 = ((MR_Integer) (MR_hl_field(MR_mktag(0), *libs__lp__A_7, (MR_Integer) 1)));
#line 443 "lp.m"
        MR_Float libs__lp__ObjVal_11;
#line 443 "lp.m"
        MR_Word libs__lp__ObjMap_12;
#line 443 "lp.m"
        MR_Word libs__lp__V_24_24;
#line 443 "lp.m"
        MR_Word libs__lp__V_25_25;
#line 742 "lp.m"
        MR_Integer libs__lp__V_15_15 = ((MR_Integer) (MR_hl_field(MR_mktag(0), *libs__lp__A_7, (MR_Integer) 0)));
#line 742 "lp.m"
        MR_Word libs__lp__V_16_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), *libs__lp__A_7, (MR_Integer) 2)));
#line 742 "lp.m"
        MR_Word libs__lp__V_17_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), *libs__lp__A_7, (MR_Integer) 3)));
#line 742 "lp.m"
        MR_Word libs__lp__V_18_18 = ((MR_Word) (MR_hl_field(MR_mktag(0), *libs__lp__A_7, (MR_Integer) 4)));
#line 742 "lp.m"
        MR_Word libs__lp__V_19_19 = ((MR_Word) (MR_hl_field(MR_mktag(0), *libs__lp__A_7, (MR_Integer) 5)));
#line 742 "lp.m"
        MR_Word libs__lp__V_20_20 = ((MR_Word) (MR_hl_field(MR_mktag(0), *libs__lp__A_7, (MR_Integer) 6)));
#line 454 "lp.m"
        MR_Box libs__lp__conv1_ObjMap_12;

#line 445 "lp.m"
        {
#line 445 "lp.m"
          libs__lp__index_4_p_0(*libs__lp__A_7, (MR_Integer) 0, libs__lp__M_10, &libs__lp__ObjVal_11);
        }
#line 454 "lp.m"
        {
#line 454 "lp.m"
          libs__lp__V_24_24 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
#line 454 "lp.m"
          MR_hl_field(MR_mktag(0), libs__lp__V_24_24, 0) = ((MR_Box) (&libs__lp_scalar_common_4[1]));
#line 454 "lp.m"
          MR_hl_field(MR_mktag(0), libs__lp__V_24_24, 1) = ((MR_Box) (libs__lp__optimize_4_p_0_1));
#line 454 "lp.m"
          MR_hl_field(MR_mktag(0), libs__lp__V_24_24, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 454 "lp.m"
          MR_hl_field(MR_mktag(0), libs__lp__V_24_24, 3) = ((MR_Box) (*libs__lp__A_7));
#line 454 "lp.m"
        }
#line 10892 "libs.lp.c"
        libs__lp__TypeInfo_12_29 = (MR_Word) &libs__lp_scalar_common_1[0];
#line 454 "lp.m"
        {
#line 454 "lp.m"
          libs__lp__V_25_25 = mercury__map__init_0_f_0(libs__lp__TypeInfo_12_29, (MR_Word) &mercury__builtin__builtin__type_ctor_info_float_0);
        }
#line 454 "lp.m"
        {
#line 454 "lp.m"
          mercury__list__foldl_4_p_0(libs__lp__TypeInfo_12_29, (MR_Word) &libs__lp_scalar_common_2[1], libs__lp__V_24_24, libs__lp__ObjVars_5, ((MR_Box) (libs__lp__V_25_25)), &libs__lp__conv1_ObjMap_12);
        }
#line 454 "lp.m"
        libs__lp__ObjMap_12 = ((MR_Word) libs__lp__conv1_ObjMap_12);
#line 447 "lp.m"
        {
#line 447 "lp.m"
          MR_Word base;
#line 447 "lp.m"
          base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 447 "lp.m"
          *libs__lp__Result_8 = base;
#line 447 "lp.m"
          MR_hl_field(MR_mktag(1), base, 0) = MR_box_float(libs__lp__ObjVal_11);
#line 447 "lp.m"
          MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (libs__lp__ObjMap_12));
#line 447 "lp.m"
        }
#line 443 "lp.m"
      }
#line 437 "lp.m"
  }
#line 434 "lp.m"
}

#line 422 "lp.m"
static void MR_CALL 
libs__lp__insert_coeffs_5_p_0(
#line 422 "lp.m"
  MR_Word libs__lp__HeadVar__1_1,
#line 422 "lp.m"
  MR_Integer libs__lp__HeadVar__2_2,
#line 422 "lp.m"
  MR_Word libs__lp__HeadVar__3_3,
#line 422 "lp.m"
  MR_Word libs__lp__STATE_VARIABLE_Tableau_0_4,
#line 422 "lp.m"
  MR_Word * libs__lp__STATE_VARIABLE_Tableau_5)
#line 422 "lp.m"
{
#line 425 "lp.m"
  while (MR_TRUE)
#line 425 "lp.m"
    {
#line 425 "lp.m"
      /* tailcall optimized into a loop */
#line 425 "lp.m"
      {
#line 425 "lp.m"
        MR_bool libs__lp__succeeded;

#line 425 "lp.m"
        if ((libs__lp__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 425 "lp.m"
          *libs__lp__STATE_VARIABLE_Tableau_5 = libs__lp__STATE_VARIABLE_Tableau_0_4;
#line 425 "lp.m"
        else
#line 426 "lp.m"
          {
#line 426 "lp.m"
            MR_Word libs__lp__Coeff_11 = ((MR_Word) (MR_hl_field(MR_mktag(1), libs__lp__HeadVar__1_1, (MR_Integer) 0)));
#line 426 "lp.m"
            MR_Word libs__lp__Coeffs_12 = ((MR_Word) (MR_hl_field(MR_mktag(1), libs__lp__HeadVar__1_1, (MR_Integer) 1)));
#line 426 "lp.m"
            MR_Word libs__lp__Var_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), libs__lp__Coeff_11, (MR_Integer) 0)));
#line 426 "lp.m"
            MR_Float libs__lp__Const_17 = MR_unbox_float((MR_hl_field(MR_mktag(0), libs__lp__Coeff_11, (MR_Integer) 1)));
#line 426 "lp.m"
            MR_Integer libs__lp__Col_18;
#line 426 "lp.m"
            MR_Word libs__lp__STATE_VARIABLE_Tableau_21_21;
#line 428 "lp.m"
            MR_Box libs__lp__conv0_Col_18;

#line 428 "lp.m"
            {
#line 428 "lp.m"
              mercury__map__lookup_3_p_0((MR_Word) &libs__lp_scalar_common_1[0], (MR_Word) &mercury__builtin__builtin__type_ctor_info_int_0, libs__lp__HeadVar__3_3, ((MR_Box) (libs__lp__Var_16)), &libs__lp__conv0_Col_18);
            }
#line 428 "lp.m"
            libs__lp__Col_18 = ((MR_Integer) libs__lp__conv0_Col_18);
#line 429 "lp.m"
            {
#line 429 "lp.m"
              libs__lp__set_index_5_p_0(libs__lp__HeadVar__2_2, libs__lp__Col_18, libs__lp__Const_17, libs__lp__STATE_VARIABLE_Tableau_0_4, &libs__lp__STATE_VARIABLE_Tableau_21_21);
            }
#line 430 "lp.m"
            /* direct tailcall eliminated */
#line 430 "lp.m"
            {
#line 430 "lp.m"
              MR_Word libs__lp__HeadVar__1__tmp_copy_1 = libs__lp__Coeffs_12;
#line 430 "lp.m"
              MR_Word libs__lp__STATE_VARIABLE_Tableau_0__tmp_copy_4 = libs__lp__STATE_VARIABLE_Tableau_21_21;

#line 430 "lp.m"
              libs__lp__STATE_VARIABLE_Tableau_0_4 = libs__lp__STATE_VARIABLE_Tableau_0__tmp_copy_4;
#line 430 "lp.m"
              libs__lp__HeadVar__1_1 = libs__lp__HeadVar__1__tmp_copy_1;
#line 430 "lp.m"
            }
#line 430 "lp.m"
            continue;
#line 426 "lp.m"
          }
#line 425 "lp.m"
      }
#line 425 "lp.m"
      break;
#line 425 "lp.m"
    }
#line 422 "lp.m"
}

#line 412 "lp.m"
static void MR_CALL 
libs__lp__insert_equations_6_p_0(
#line 412 "lp.m"
  MR_Word libs__lp__HeadVar__1_1,
#line 412 "lp.m"
  MR_Integer libs__lp__Row_2,
#line 412 "lp.m"
  MR_Integer libs__lp__ConstCol_3,
#line 412 "lp.m"
  MR_Word libs__lp__VarNums_4,
#line 412 "lp.m"
  MR_Word libs__lp__STATE_VARIABLE_Tableau_0_5,
#line 412 "lp.m"
  MR_Word * libs__lp__STATE_VARIABLE_Tableau_6)
#line 412 "lp.m"
{
#line 415 "lp.m"
  while (MR_TRUE)
#line 415 "lp.m"
    {
#line 415 "lp.m"
      /* tailcall optimized into a loop */
#line 415 "lp.m"
      {
#line 415 "lp.m"
        MR_bool libs__lp__succeeded;

#line 415 "lp.m"
        if ((libs__lp__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 415 "lp.m"
          *libs__lp__STATE_VARIABLE_Tableau_6 = libs__lp__STATE_VARIABLE_Tableau_0_5;
#line 415 "lp.m"
        else
#line 416 "lp.m"
          {
#line 416 "lp.m"
            MR_Word libs__lp__Eqn_13 = ((MR_Word) (MR_hl_field(MR_mktag(1), libs__lp__HeadVar__1_1, (MR_Integer) 0)));
#line 416 "lp.m"
            MR_Word libs__lp__Eqns_14 = ((MR_Word) (MR_hl_field(MR_mktag(1), libs__lp__HeadVar__1_1, (MR_Integer) 1)));
#line 416 "lp.m"
            MR_Word libs__lp__Coeffs_19 = ((MR_Word) (MR_hl_field(MR_mktag(0), libs__lp__Eqn_13, (MR_Integer) 0)));
#line 416 "lp.m"
            MR_Float libs__lp__Const_21 = MR_unbox_float((MR_hl_field(MR_mktag(0), libs__lp__Eqn_13, (MR_Integer) 2)));
#line 416 "lp.m"
            MR_Word libs__lp__STATE_VARIABLE_Tableau_24_24;
#line 416 "lp.m"
            MR_Word libs__lp__STATE_VARIABLE_Tableau_25_25;
#line 416 "lp.m"
            MR_Integer libs__lp__V_26_26;
#line 417 "lp.m"
            MR_Word libs__lp___Op_20 = ((MR_Word) (MR_hl_field(MR_mktag(0), libs__lp__Eqn_13, (MR_Integer) 1)));

#line 418 "lp.m"
            {
#line 418 "lp.m"
              libs__lp__insert_coeffs_5_p_0(libs__lp__Coeffs_19, libs__lp__Row_2, libs__lp__VarNums_4, libs__lp__STATE_VARIABLE_Tableau_0_5, &libs__lp__STATE_VARIABLE_Tableau_24_24);
            }
#line 419 "lp.m"
            {
#line 419 "lp.m"
              libs__lp__set_index_5_p_0(libs__lp__Row_2, libs__lp__ConstCol_3, libs__lp__Const_21, libs__lp__STATE_VARIABLE_Tableau_24_24, &libs__lp__STATE_VARIABLE_Tableau_25_25);
            }
#line 420 "lp.m"
            libs__lp__V_26_26 = (libs__lp__Row_2 + (MR_Integer) 1);
#line 420 "lp.m"
            /* direct tailcall eliminated */
#line 420 "lp.m"
            {
#line 420 "lp.m"
              MR_Word libs__lp__HeadVar__1__tmp_copy_1 = libs__lp__Eqns_14;
#line 420 "lp.m"
              MR_Integer libs__lp__Row__tmp_copy_2 = libs__lp__V_26_26;
#line 420 "lp.m"
              MR_Word libs__lp__STATE_VARIABLE_Tableau_0__tmp_copy_5 = libs__lp__STATE_VARIABLE_Tableau_25_25;

#line 420 "lp.m"
              libs__lp__STATE_VARIABLE_Tableau_0_5 = libs__lp__STATE_VARIABLE_Tableau_0__tmp_copy_5;
#line 420 "lp.m"
              libs__lp__Row_2 = libs__lp__Row__tmp_copy_2;
#line 420 "lp.m"
              libs__lp__HeadVar__1_1 = libs__lp__HeadVar__1__tmp_copy_1;
#line 420 "lp.m"
            }
#line 420 "lp.m"
            continue;
#line 416 "lp.m"
          }
#line 415 "lp.m"
      }
#line 415 "lp.m"
      break;
#line 415 "lp.m"
    }
#line 412 "lp.m"
}

#line 404 "lp.m"
static void MR_CALL 
libs__lp__number_vars_4_p_0(
#line 404 "lp.m"
  MR_Word libs__lp__HeadVar__1_1,
#line 404 "lp.m"
  MR_Integer libs__lp__N_2,
#line 404 "lp.m"
  MR_Word libs__lp__STATE_VARIABLE_VarNums_0_3,
#line 404 "lp.m"
  MR_Word * libs__lp__STATE_VARIABLE_VarNums_4)
#line 404 "lp.m"
{
#line 407 "lp.m"
  while (MR_TRUE)
#line 407 "lp.m"
    {
#line 407 "lp.m"
      /* tailcall optimized into a loop */
#line 407 "lp.m"
      {
#line 407 "lp.m"
        MR_bool libs__lp__succeeded;

#line 407 "lp.m"
        if ((libs__lp__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 407 "lp.m"
          *libs__lp__STATE_VARIABLE_VarNums_4 = libs__lp__STATE_VARIABLE_VarNums_0_3;
#line 407 "lp.m"
        else
#line 408 "lp.m"
          {
#line 408 "lp.m"
            MR_Word libs__lp__Var_9 = ((MR_Word) (MR_hl_field(MR_mktag(1), libs__lp__HeadVar__1_1, (MR_Integer) 0)));
#line 408 "lp.m"
            MR_Word libs__lp__Vars_10 = ((MR_Word) (MR_hl_field(MR_mktag(1), libs__lp__HeadVar__1_1, (MR_Integer) 1)));
#line 408 "lp.m"
            MR_Word libs__lp__STATE_VARIABLE_VarNums_15_15;
#line 408 "lp.m"
            MR_Integer libs__lp__V_16_16;

#line 409 "lp.m"
            {
#line 409 "lp.m"
              mercury__map__det_insert_4_p_0((MR_Word) &libs__lp_scalar_common_1[0], (MR_Word) &mercury__builtin__builtin__type_ctor_info_int_0, ((MR_Box) (libs__lp__Var_9)), ((MR_Box) (libs__lp__N_2)), libs__lp__STATE_VARIABLE_VarNums_0_3, &libs__lp__STATE_VARIABLE_VarNums_15_15);
            }
#line 410 "lp.m"
            libs__lp__V_16_16 = (libs__lp__N_2 + (MR_Integer) 1);
#line 410 "lp.m"
            /* direct tailcall eliminated */
#line 410 "lp.m"
            {
#line 410 "lp.m"
              MR_Word libs__lp__HeadVar__1__tmp_copy_1 = libs__lp__Vars_10;
#line 410 "lp.m"
              MR_Integer libs__lp__N__tmp_copy_2 = libs__lp__V_16_16;
#line 410 "lp.m"
              MR_Word libs__lp__STATE_VARIABLE_VarNums_0__tmp_copy_3 = libs__lp__STATE_VARIABLE_VarNums_15_15;

#line 410 "lp.m"
              libs__lp__STATE_VARIABLE_VarNums_0_3 = libs__lp__STATE_VARIABLE_VarNums_0__tmp_copy_3;
#line 410 "lp.m"
              libs__lp__N_2 = libs__lp__N__tmp_copy_2;
#line 410 "lp.m"
              libs__lp__HeadVar__1_1 = libs__lp__HeadVar__1__tmp_copy_1;
#line 410 "lp.m"
            }
#line 410 "lp.m"
            continue;
#line 408 "lp.m"
          }
#line 407 "lp.m"
      }
#line 407 "lp.m"
      break;
#line 407 "lp.m"
    }
#line 404 "lp.m"
}

#line 390 "lp.m"
static void MR_CALL 
libs__lp__collect_vars_3_p_0_1(
#line 390 "lp.m"
  void * libs__lp__env_ptr_arg)
#line 390 "lp.m"
{
#line 390 "lp.m"
  {
#line 390 "lp.m"
    struct libs__lp__collect_vars_3_p_0_2_env_0_s * libs__lp__env_ptr = (struct libs__lp__collect_vars_3_p_0_2_env_0_s *) libs__lp__env_ptr_arg;

#line 390 "lp.m"
    *((libs__lp__env_ptr)->libs__lp__collect_vars_3_p_0_2_env_0__wrapper_arg_1) = ((MR_Box) ((libs__lp__env_ptr)->libs__lp__collect_vars_3_p_0_2_env_0__conv0_HeadVar__3_17));
#line 390 "lp.m"
    {
#line 390 "lp.m"
      ((libs__lp__env_ptr)->libs__lp__collect_vars_3_p_0_2_env_0__cont)((libs__lp__env_ptr)->libs__lp__collect_vars_3_p_0_2_env_0__cont_env_ptr);
#line 390 "lp.m"
      return;
    }
#line 390 "lp.m"
  }
#line 390 "lp.m"
}

#line 390 "lp.m"
static void MR_CALL 
libs__lp__collect_vars_3_p_0_2(
#line 390 "lp.m"
  MR_Box libs__lp__closure_arg,
#line 390 "lp.m"
  MR_Box * libs__lp__wrapper_arg_1,
#line 390 "lp.m"
  MR_Cont libs__lp__cont,
#line 390 "lp.m"
  void * libs__lp__cont_env_ptr)
#line 390 "lp.m"
{
#line 390 "lp.m"
  {
#line 390 "lp.m"
    struct libs__lp__collect_vars_3_p_0_2_env_0_s libs__lp__env;

#line 390 "lp.m"
    (libs__lp__env).libs__lp__collect_vars_3_p_0_2_env_0__wrapper_arg_1 = libs__lp__wrapper_arg_1;
#line 390 "lp.m"
    (libs__lp__env).libs__lp__collect_vars_3_p_0_2_env_0__cont = libs__lp__cont;
#line 390 "lp.m"
    (libs__lp__env).libs__lp__collect_vars_3_p_0_2_env_0__cont_env_ptr = libs__lp__cont_env_ptr;
#line 390 "lp.m"
    {
#line 390 "lp.m"
      MR_Box libs__lp__closure = libs__lp__closure_arg;

#line 390 "lp.m"
      {
#line 390 "lp.m"
        libs__lp__IntroducedFrom__pred__collect_vars__396__1_3_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), libs__lp__closure, (MR_Integer) 3))), ((MR_Word) (MR_hl_field(MR_mktag(0), libs__lp__closure, (MR_Integer) 4))), &(libs__lp__env).libs__lp__collect_vars_3_p_0_2_env_0__conv0_HeadVar__3_17, libs__lp__collect_vars_3_p_0_1, &libs__lp__env);
      }
#line 390 "lp.m"
    }
#line 390 "lp.m"
  }
#line 390 "lp.m"
}

#line 387 "lp.m"
static void MR_CALL 
libs__lp__collect_vars_3_p_0(
#line 387 "lp.m"
  MR_Word libs__lp__Eqns_4,
#line 387 "lp.m"
  MR_Word libs__lp__Obj_5,
#line 387 "lp.m"
  MR_Word * libs__lp__Vars_6)
#line 387 "lp.m"
{
#line 389 "lp.m"
  {
#line 389 "lp.m"
    MR_bool libs__lp__succeeded;
#line 389 "lp.m"
    MR_Word libs__lp__TypeInfo_23_23;
#line 389 "lp.m"
    MR_Word libs__lp__GetVar_7;
#line 389 "lp.m"
    MR_Word libs__lp__VarList_16;

#line 390 "lp.m"
    {
#line 390 "lp.m"
      libs__lp__GetVar_7 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
#line 390 "lp.m"
      MR_hl_field(MR_mktag(0), libs__lp__GetVar_7, 0) = ((MR_Box) (&libs__lp_scalar_common_3[3]));
#line 390 "lp.m"
      MR_hl_field(MR_mktag(0), libs__lp__GetVar_7, 1) = ((MR_Box) (libs__lp__collect_vars_3_p_0_2));
#line 390 "lp.m"
      MR_hl_field(MR_mktag(0), libs__lp__GetVar_7, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
#line 390 "lp.m"
      MR_hl_field(MR_mktag(0), libs__lp__GetVar_7, 3) = ((MR_Box) (libs__lp__Eqns_4));
#line 390 "lp.m"
      MR_hl_field(MR_mktag(0), libs__lp__GetVar_7, 4) = ((MR_Box) (libs__lp__Obj_5));
#line 390 "lp.m"
    }
#line 11298 "libs.lp.c"
    libs__lp__TypeInfo_23_23 = (MR_Word) &libs__lp_scalar_common_1[0];
#line 401 "lp.m"
    {
#line 401 "lp.m"
      mercury__solutions__solutions_2_p_1(libs__lp__TypeInfo_23_23, libs__lp__GetVar_7, &libs__lp__VarList_16);
    }
#line 402 "lp.m"
    {
#line 402 "lp.m"
      mercury__set__list_to_set_2_p_0(libs__lp__TypeInfo_23_23, libs__lp__VarList_16, libs__lp__Vars_6);
#line 402 "lp.m"
      return;
    }
#line 389 "lp.m"
  }
#line 387 "lp.m"
}

#line 372 "lp.m"
static void MR_CALL 
libs__lp__expand_urs_vars_4_p_0(
#line 372 "lp.m"
  MR_Word libs__lp__HeadVar__1_1,
#line 372 "lp.m"
  MR_Word libs__lp__HeadVar__2_2,
#line 372 "lp.m"
  MR_Word libs__lp__STATE_VARIABLE_Coeffs_0_3,
#line 372 "lp.m"
  MR_Word * libs__lp__STATE_VARIABLE_Coeffs_4)
#line 372 "lp.m"
{
#line 375 "lp.m"
  while (MR_TRUE)
#line 375 "lp.m"
    {
#line 375 "lp.m"
      /* tailcall optimized into a loop */
#line 375 "lp.m"
      {
#line 375 "lp.m"
        MR_bool libs__lp__succeeded;

#line 375 "lp.m"
        if ((libs__lp__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 375 "lp.m"
          *libs__lp__STATE_VARIABLE_Coeffs_4 = libs__lp__STATE_VARIABLE_Coeffs_0_3;
#line 375 "lp.m"
        else
#line 376 "lp.m"
          {
#line 376 "lp.m"
            MR_Word libs__lp__Var_9;
#line 376 "lp.m"
            MR_Float libs__lp__Coeff_10;
#line 376 "lp.m"
            MR_Word libs__lp__Rest_11 = ((MR_Word) (MR_hl_field(MR_mktag(1), libs__lp__HeadVar__1_1, (MR_Integer) 1)));
#line 376 "lp.m"
            MR_Word libs__lp__V_19_19 = ((MR_Word) (MR_hl_field(MR_mktag(1), libs__lp__HeadVar__1_1, (MR_Integer) 0)));
#line 376 "lp.m"
            MR_Word libs__lp__STATE_VARIABLE_Coeffs_21_21;
#line 380 "lp.m"
            MR_Word libs__lp__PVar_14;
#line 380 "lp.m"
            MR_Word libs__lp__NVar_15;
#line 377 "lp.m"
            MR_Word libs__lp__V_20_20;
#line 377 "lp.m"
            MR_Box libs__lp__conv0_V_20_20;

#line 376 "lp.m"
            libs__lp__Var_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), libs__lp__V_19_19, (MR_Integer) 0)));
#line 376 "lp.m"
            libs__lp__Coeff_10 = MR_unbox_float((MR_hl_field(MR_mktag(0), libs__lp__V_19_19, (MR_Integer) 1)));
#line 377 "lp.m"
            {
#line 377 "lp.m"
              libs__lp__succeeded = mercury__map__search_3_p_0((MR_Word) &libs__lp_scalar_common_1[0], (MR_Word) &libs__lp_scalar_common_2[2], libs__lp__HeadVar__2_2, ((MR_Box) (libs__lp__Var_9)), &libs__lp__conv0_V_20_20);
            }
#line 377 "lp.m"
            if (libs__lp__succeeded)
#line 377 "lp.m"
              {
#line 377 "lp.m"
                libs__lp__V_20_20 = ((MR_Word) libs__lp__conv0_V_20_20);
#line 377 "lp.m"
                libs__lp__succeeded = MR_TRUE;
#line 377 "lp.m"
              }
#line 377 "lp.m"
            if (libs__lp__succeeded)
#line 377 "lp.m"
              {
#line 377 "lp.m"
                libs__lp__PVar_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), libs__lp__V_20_20, (MR_Integer) 0)));
#line 377 "lp.m"
                libs__lp__NVar_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), libs__lp__V_20_20, (MR_Integer) 1)));
#line 377 "lp.m"
                libs__lp__succeeded = MR_TRUE;
#line 377 "lp.m"
              }
#line 380 "lp.m"
            if (libs__lp__succeeded)
#line 378 "lp.m"
              {
#line 378 "lp.m"
                MR_Float libs__lp__NCoeff_16 = (((MR_Float) 0.0000000000000000) - libs__lp__Coeff_10);
#line 378 "lp.m"
                MR_Word libs__lp__V_22_22;
#line 378 "lp.m"
                MR_Word libs__lp__V_23_23;
#line 378 "lp.m"
                MR_Word libs__lp__V_24_24;

#line 379 "lp.m"
                {
#line 379 "lp.m"
                  libs__lp__V_22_22 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 379 "lp.m"
                  MR_hl_field(MR_mktag(0), libs__lp__V_22_22, 0) = ((MR_Box) (libs__lp__NVar_15));
#line 379 "lp.m"
                  MR_hl_field(MR_mktag(0), libs__lp__V_22_22, 1) = MR_box_float(libs__lp__NCoeff_16);
#line 379 "lp.m"
                }
#line 379 "lp.m"
                {
#line 379 "lp.m"
                  libs__lp__V_24_24 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 379 "lp.m"
                  MR_hl_field(MR_mktag(0), libs__lp__V_24_24, 0) = ((MR_Box) (libs__lp__PVar_14));
#line 379 "lp.m"
                  MR_hl_field(MR_mktag(0), libs__lp__V_24_24, 1) = MR_box_float(libs__lp__Coeff_10);
#line 379 "lp.m"
                }
#line 379 "lp.m"
                {
#line 379 "lp.m"
                  libs__lp__V_23_23 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 379 "lp.m"
                  MR_hl_field(MR_mktag(1), libs__lp__V_23_23, 0) = ((MR_Box) (libs__lp__V_24_24));
#line 379 "lp.m"
                  MR_hl_field(MR_mktag(1), libs__lp__V_23_23, 1) = ((MR_Box) (libs__lp__STATE_VARIABLE_Coeffs_0_3));
#line 379 "lp.m"
                }
#line 379 "lp.m"
                {
#line 379 "lp.m"
                  libs__lp__STATE_VARIABLE_Coeffs_21_21 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 379 "lp.m"
                  MR_hl_field(MR_mktag(1), libs__lp__STATE_VARIABLE_Coeffs_21_21, 0) = ((MR_Box) (libs__lp__V_22_22));
#line 379 "lp.m"
                  MR_hl_field(MR_mktag(1), libs__lp__STATE_VARIABLE_Coeffs_21_21, 1) = ((MR_Box) (libs__lp__V_23_23));
#line 379 "lp.m"
                }
#line 378 "lp.m"
              }
#line 380 "lp.m"
            else
#line 381 "lp.m"
              {
#line 381 "lp.m"
                libs__lp__STATE_VARIABLE_Coeffs_21_21 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 381 "lp.m"
                MR_hl_field(MR_mktag(1), libs__lp__STATE_VARIABLE_Coeffs_21_21, 0) = ((MR_Box) (libs__lp__V_19_19));
#line 381 "lp.m"
                MR_hl_field(MR_mktag(1), libs__lp__STATE_VARIABLE_Coeffs_21_21, 1) = ((MR_Box) (libs__lp__STATE_VARIABLE_Coeffs_0_3));
#line 381 "lp.m"
              }
#line 383 "lp.m"
            /* direct tailcall eliminated */
#line 383 "lp.m"
            {
#line 383 "lp.m"
              MR_Word libs__lp__HeadVar__1__tmp_copy_1 = libs__lp__Rest_11;
#line 383 "lp.m"
              MR_Word libs__lp__STATE_VARIABLE_Coeffs_0__tmp_copy_3 = libs__lp__STATE_VARIABLE_Coeffs_21_21;

#line 383 "lp.m"
              libs__lp__STATE_VARIABLE_Coeffs_0_3 = libs__lp__STATE_VARIABLE_Coeffs_0__tmp_copy_3;
#line 383 "lp.m"
              libs__lp__HeadVar__1_1 = libs__lp__HeadVar__1__tmp_copy_1;
#line 383 "lp.m"
            }
#line 383 "lp.m"
            continue;
#line 376 "lp.m"
          }
#line 375 "lp.m"
      }
#line 375 "lp.m"
      break;
#line 375 "lp.m"
    }
#line 372 "lp.m"
}

#line 359 "lp.m"
static void MR_CALL 
libs__lp__expand_urs_vars_e_3_p_0(
#line 359 "lp.m"
  MR_Word libs__lp__HeadVar__1_1,
#line 359 "lp.m"
  MR_Word libs__lp__Vars_7,
#line 359 "lp.m"
  MR_Word * libs__lp__HeadVar__3_3)
#line 359 "lp.m"
{
#line 362 "lp.m"
  {
#line 362 "lp.m"
    MR_bool libs__lp__succeeded;
#line 362 "lp.m"
    MR_Word libs__lp__Coeffs0_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), libs__lp__HeadVar__1_1, (MR_Integer) 0)));
#line 362 "lp.m"
    MR_Word libs__lp__Op_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), libs__lp__HeadVar__1_1, (MR_Integer) 1)));
#line 362 "lp.m"
    MR_Float libs__lp__Const_6 = MR_unbox_float((MR_hl_field(MR_mktag(0), libs__lp__HeadVar__1_1, (MR_Integer) 2)));
#line 362 "lp.m"
    MR_Word libs__lp__Coeffs_8;
#line 362 "lp.m"
    MR_Word libs__lp__Coeffs1_12;

#line 369 "lp.m"
    {
#line 369 "lp.m"
      libs__lp__expand_urs_vars_4_p_0(libs__lp__Coeffs0_4, libs__lp__Vars_7, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), &libs__lp__Coeffs1_12);
    }
#line 370 "lp.m"
    {
#line 370 "lp.m"
      mercury__list__reverse_2_p_0((MR_Word) &libs__lp_scalar_common_2[0], libs__lp__Coeffs1_12, &libs__lp__Coeffs_8);
    }
#line 362 "lp.m"
    {
#line 362 "lp.m"
      MR_Word base;
#line 362 "lp.m"
      base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 362 "lp.m"
      *libs__lp__HeadVar__3_3 = base;
#line 362 "lp.m"
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (libs__lp__Coeffs_8));
#line 362 "lp.m"
      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (libs__lp__Op_5));
#line 362 "lp.m"
      MR_hl_field(MR_mktag(0), base, 2) = MR_box_float(libs__lp__Const_6);
#line 362 "lp.m"
    }
#line 362 "lp.m"
  }
#line 359 "lp.m"
}

#line 340 "lp.m"
static void MR_CALL 
libs__lp__simplify_coeffs_2_p_0_1(
#line 340 "lp.m"
  MR_Box libs__lp__closure_arg,
#line 340 "lp.m"
  MR_Box libs__lp__wrapper_arg_1,
#line 340 "lp.m"
  MR_Box libs__lp__wrapper_arg_2,
#line 340 "lp.m"
  MR_Box * libs__lp__wrapper_arg_3)
#line 340 "lp.m"
{
#line 340 "lp.m"
  {
#line 340 "lp.m"
    MR_Box libs__lp__closure = libs__lp__closure_arg;
#line 340 "lp.m"
    MR_Word libs__lp__conv0_HeadVar__3_15;

#line 340 "lp.m"
    {
#line 340 "lp.m"
      libs__lp__IntroducedFrom__pred__simplify_coeffs__340__1_3_p_0(((MR_Word) libs__lp__wrapper_arg_1), ((MR_Word) libs__lp__wrapper_arg_2), &libs__lp__conv0_HeadVar__3_15);
    }
#line 340 "lp.m"
    *libs__lp__wrapper_arg_3 = ((MR_Box) (libs__lp__conv0_HeadVar__3_15));
#line 340 "lp.m"
  }
#line 340 "lp.m"
}

#line 336 "lp.m"
static void MR_CALL 
libs__lp__simplify_coeffs_2_p_0(
#line 336 "lp.m"
  MR_Word libs__lp__Coeffs0_3,
#line 336 "lp.m"
  MR_Word * libs__lp__Coeffs_4)
#line 336 "lp.m"
{
#line 338 "lp.m"
  {
#line 338 "lp.m"
    MR_bool libs__lp__succeeded;
#line 338 "lp.m"
    MR_Word libs__lp__TypeInfo_19_19 = (MR_Word) &libs__lp_scalar_common_1[0];
#line 338 "lp.m"
    MR_Word libs__lp__TypeCtorInfo_20_20 = (MR_Word) &mercury__builtin__builtin__type_ctor_info_float_0;
#line 338 "lp.m"
    MR_Word libs__lp__CoeffMap0_5;
#line 338 "lp.m"
    MR_Word libs__lp__CoeffMap_12;
#line 344 "lp.m"
    MR_Box libs__lp__conv1_CoeffMap_12;

#line 339 "lp.m"
    {
#line 339 "lp.m"
      mercury__map__init_1_p_0(libs__lp__TypeInfo_19_19, libs__lp__TypeCtorInfo_20_20, &libs__lp__CoeffMap0_5);
    }
#line 344 "lp.m"
    {
#line 344 "lp.m"
      mercury__list__foldl_4_p_0((MR_Word) &libs__lp_scalar_common_2[0], (MR_Word) &libs__lp_scalar_common_2[1], (MR_Word) &libs__lp_scalar_common_2[16], libs__lp__Coeffs0_3, ((MR_Box) (libs__lp__CoeffMap0_5)), &libs__lp__conv1_CoeffMap_12);
    }
#line 344 "lp.m"
    libs__lp__CoeffMap_12 = ((MR_Word) libs__lp__conv1_CoeffMap_12);
#line 345 "lp.m"
    {
#line 345 "lp.m"
      mercury__map__to_assoc_list_2_p_0(libs__lp__TypeInfo_19_19, libs__lp__TypeCtorInfo_20_20, libs__lp__CoeffMap_12, libs__lp__Coeffs_4);
#line 345 "lp.m"
      return;
    }
#line 338 "lp.m"
  }
#line 336 "lp.m"
}

#line 340 "lp.m"
static void MR_CALL 
libs__lp__simplify_eq_2_p_0_1(
#line 340 "lp.m"
  MR_Box libs__lp__closure_arg,
#line 340 "lp.m"
  MR_Box libs__lp__wrapper_arg_1,
#line 340 "lp.m"
  MR_Box libs__lp__wrapper_arg_2,
#line 340 "lp.m"
  MR_Box * libs__lp__wrapper_arg_3)
#line 340 "lp.m"
{
#line 340 "lp.m"
  {
#line 340 "lp.m"
    MR_Box libs__lp__closure = libs__lp__closure_arg;
#line 340 "lp.m"
    MR_Word libs__lp__conv0_HeadVar__3_15;

#line 340 "lp.m"
    {
#line 340 "lp.m"
      libs__lp__IntroducedFrom__pred__simplify_coeffs__340__1_3_p_0(((MR_Word) libs__lp__wrapper_arg_1), ((MR_Word) libs__lp__wrapper_arg_2), &libs__lp__conv0_HeadVar__3_15);
    }
#line 340 "lp.m"
    *libs__lp__wrapper_arg_3 = ((MR_Box) (libs__lp__conv0_HeadVar__3_15));
#line 340 "lp.m"
  }
#line 340 "lp.m"
}

#line 331 "lp.m"
static void MR_CALL 
libs__lp__simplify_eq_2_p_0(
#line 331 "lp.m"
  MR_Word libs__lp__HeadVar__1_1,
#line 331 "lp.m"
  MR_Word * libs__lp__HeadVar__2_2)
#line 331 "lp.m"
{
#line 333 "lp.m"
  {
#line 333 "lp.m"
    MR_bool libs__lp__succeeded;
#line 333 "lp.m"
    MR_Word libs__lp__TypeInfo_19_23 = (MR_Word) &libs__lp_scalar_common_1[0];
#line 333 "lp.m"
    MR_Word libs__lp__TypeCtorInfo_20_24 = (MR_Word) &mercury__builtin__builtin__type_ctor_info_float_0;
#line 333 "lp.m"
    MR_Word libs__lp__Coeffs0_3 = ((MR_Word) (MR_hl_field(MR_mktag(0), libs__lp__HeadVar__1_1, (MR_Integer) 0)));
#line 333 "lp.m"
    MR_Word libs__lp__Op_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), libs__lp__HeadVar__1_1, (MR_Integer) 1)));
#line 333 "lp.m"
    MR_Float libs__lp__Const_5 = MR_unbox_float((MR_hl_field(MR_mktag(0), libs__lp__HeadVar__1_1, (MR_Integer) 2)));
#line 333 "lp.m"
    MR_Word libs__lp__Coeffs_6;
#line 333 "lp.m"
    MR_Word libs__lp__CoeffMap0_9;
#line 333 "lp.m"
    MR_Word libs__lp__CoeffMap_16;
#line 344 "lp.m"
    MR_Box libs__lp__conv1_CoeffMap_16;

#line 339 "lp.m"
    {
#line 339 "lp.m"
      mercury__map__init_1_p_0(libs__lp__TypeInfo_19_23, libs__lp__TypeCtorInfo_20_24, &libs__lp__CoeffMap0_9);
    }
#line 344 "lp.m"
    {
#line 344 "lp.m"
      mercury__list__foldl_4_p_0((MR_Word) &libs__lp_scalar_common_2[0], (MR_Word) &libs__lp_scalar_common_2[1], (MR_Word) &libs__lp_scalar_common_2[15], libs__lp__Coeffs0_3, ((MR_Box) (libs__lp__CoeffMap0_9)), &libs__lp__conv1_CoeffMap_16);
    }
#line 344 "lp.m"
    libs__lp__CoeffMap_16 = ((MR_Word) libs__lp__conv1_CoeffMap_16);
#line 345 "lp.m"
    {
#line 345 "lp.m"
      mercury__map__to_assoc_list_2_p_0(libs__lp__TypeInfo_19_23, libs__lp__TypeCtorInfo_20_24, libs__lp__CoeffMap_16, &libs__lp__Coeffs_6);
    }
#line 333 "lp.m"
    {
#line 333 "lp.m"
      MR_Word base;
#line 333 "lp.m"
      base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 333 "lp.m"
      *libs__lp__HeadVar__2_2 = base;
#line 333 "lp.m"
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (libs__lp__Coeffs_6));
#line 333 "lp.m"
      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (libs__lp__Op_4));
#line 333 "lp.m"
      MR_hl_field(MR_mktag(0), base, 2) = MR_box_float(libs__lp__Const_5);
#line 333 "lp.m"
    }
#line 333 "lp.m"
  }
#line 331 "lp.m"
}

#line 328 "lp.m"
static MR_Box MR_CALL 
libs__lp__negate_equation_2_p_0_1(
#line 328 "lp.m"
  MR_Box libs__lp__closure_arg,
#line 328 "lp.m"
  MR_Box libs__lp__wrapper_arg_1)
#line 328 "lp.m"
{
#line 328 "lp.m"
  {
#line 328 "lp.m"
    MR_Box libs__lp__wrapper_arg_2;
#line 328 "lp.m"
    MR_Box libs__lp__closure = libs__lp__closure_arg;
#line 328 "lp.m"
    MR_Word libs__lp__conv0_HeadVar__2_13;

#line 328 "lp.m"
    {
#line 328 "lp.m"
      libs__lp__conv0_HeadVar__2_13 = libs__lp__IntroducedFrom__func__negate_equation__328__1_1_f_0(((MR_Word) libs__lp__wrapper_arg_1));
    }
#line 328 "lp.m"
    libs__lp__wrapper_arg_2 = ((MR_Box) (libs__lp__conv0_HeadVar__2_13));
#line 328 "lp.m"
    return libs__lp__wrapper_arg_2;
#line 328 "lp.m"
  }
#line 328 "lp.m"
}

#line 318 "lp.m"
static void MR_CALL 
libs__lp__negate_equation_2_p_0(
#line 318 "lp.m"
  MR_Word libs__lp__HeadVar__1_1,
#line 318 "lp.m"
  MR_Word * libs__lp__HeadVar__2_2)
#line 318 "lp.m"
{
#line 320 "lp.m"
  {
#line 320 "lp.m"
    MR_bool libs__lp__succeeded;
#line 320 "lp.m"
    MR_Word libs__lp__TypeInfo_17_17;
#line 320 "lp.m"
    MR_Word libs__lp__Coeffs0_3 = ((MR_Word) (MR_hl_field(MR_mktag(0), libs__lp__HeadVar__1_1, (MR_Integer) 0)));
#line 320 "lp.m"
    MR_Word libs__lp__Op0_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), libs__lp__HeadVar__1_1, (MR_Integer) 1)));
#line 320 "lp.m"
    MR_Float libs__lp__Const0_5 = MR_unbox_float((MR_hl_field(MR_mktag(0), libs__lp__HeadVar__1_1, (MR_Integer) 2)));
#line 320 "lp.m"
    MR_Word libs__lp__Coeffs_6;
#line 320 "lp.m"
    MR_Word libs__lp__Op_7;
#line 320 "lp.m"
    MR_Float libs__lp__Const_8;

#line 323 "lp.m"
    if ((libs__lp__Op0_4 == (MR_Integer) 1))
#line 324 "lp.m"
      libs__lp__Op_7 = (MR_Integer) 1;
#line 323 "lp.m"
    else
#line 323 "lp.m"
      if ((libs__lp__Op0_4 == (MR_Integer) 0))
#line 322 "lp.m"
        libs__lp__Op_7 = (MR_Integer) 2;
#line 323 "lp.m"
      else
#line 326 "lp.m"
        libs__lp__Op_7 = (MR_Integer) 0;
#line 11807 "libs.lp.c"
    libs__lp__TypeInfo_17_17 = (MR_Word) &libs__lp_scalar_common_2[0];
#line 328 "lp.m"
    {
#line 328 "lp.m"
      libs__lp__Coeffs_6 = mercury__list__map_2_f_0(libs__lp__TypeInfo_17_17, libs__lp__TypeInfo_17_17, (MR_Word) &libs__lp_scalar_common_2[14], libs__lp__Coeffs0_3);
    }
#line 329 "lp.m"
    libs__lp__Const_8 = (((MR_Float) 0.0000000000000000) - libs__lp__Const0_5);
#line 320 "lp.m"
    {
#line 320 "lp.m"
      MR_Word base;
#line 320 "lp.m"
      base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 320 "lp.m"
      *libs__lp__HeadVar__2_2 = base;
#line 320 "lp.m"
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (libs__lp__Coeffs_6));
#line 320 "lp.m"
      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (libs__lp__Op_7));
#line 320 "lp.m"
      MR_hl_field(MR_mktag(0), base, 2) = MR_box_float(libs__lp__Const_8);
#line 320 "lp.m"
    }
#line 320 "lp.m"
  }
#line 318 "lp.m"
}

#line 328 "lp.m"
static MR_Box MR_CALL 
libs__lp__standardize_equation_4_p_0_1(
#line 328 "lp.m"
  MR_Box libs__lp__closure_arg,
#line 328 "lp.m"
  MR_Box libs__lp__wrapper_arg_1)
#line 328 "lp.m"
{
#line 328 "lp.m"
  {
#line 328 "lp.m"
    MR_Box libs__lp__wrapper_arg_2;
#line 328 "lp.m"
    MR_Box libs__lp__closure = libs__lp__closure_arg;
#line 328 "lp.m"
    MR_Word libs__lp__conv0_HeadVar__2_13;

#line 328 "lp.m"
    {
#line 328 "lp.m"
      libs__lp__conv0_HeadVar__2_13 = libs__lp__IntroducedFrom__func__negate_equation__328__1_1_f_0(((MR_Word) libs__lp__wrapper_arg_1));
    }
#line 328 "lp.m"
    libs__lp__wrapper_arg_2 = ((MR_Box) (libs__lp__conv0_HeadVar__2_13));
#line 328 "lp.m"
    return libs__lp__wrapper_arg_2;
#line 328 "lp.m"
  }
#line 328 "lp.m"
}

#line 275 "lp.m"
static void MR_CALL 
libs__lp__standardize_equation_4_p_0(
#line 275 "lp.m"
  MR_Word libs__lp__Eqn0_1,
#line 275 "lp.m"
  MR_Word * libs__lp__Eqn_2,
#line 275 "lp.m"
  MR_Word libs__lp__STATE_VARIABLE_Info_0_3,
#line 275 "lp.m"
  MR_Word * libs__lp__STATE_VARIABLE_Info_4)
#line 275 "lp.m"
{
#line 278 "lp.m"
  while (MR_TRUE)
#line 278 "lp.m"
    {
#line 278 "lp.m"
      /* tailcall optimized into a loop */
#line 278 "lp.m"
      {
#line 278 "lp.m"
        MR_bool libs__lp__succeeded;
#line 278 "lp.m"
        MR_Float libs__lp__V_70_70 = MR_unbox_float((MR_hl_field(MR_mktag(0), libs__lp__Eqn0_1, (MR_Integer) 2)));
#line 278 "lp.m"
        MR_Word libs__lp__V_71_71 = ((MR_Word) (MR_hl_field(MR_mktag(0), libs__lp__Eqn0_1, (MR_Integer) 1)));
#line 278 "lp.m"
        MR_Word libs__lp__V_72_72 = ((MR_Word) (MR_hl_field(MR_mktag(0), libs__lp__Eqn0_1, (MR_Integer) 0)));

#line 278 "lp.m"
        if ((libs__lp__V_71_71 == (MR_Integer) 1))
#line 296 "lp.m"
          {
#line 293 "lp.m"
            libs__lp__succeeded = (libs__lp__V_70_70 < ((MR_Float) 0.0000000000000000));
#line 296 "lp.m"
            if (libs__lp__succeeded)
#line 294 "lp.m"
              {
#line 294 "lp.m"
                MR_Word libs__lp__TypeInfo_17_87;
#line 294 "lp.m"
                MR_Word libs__lp__Eqn1_30;
#line 294 "lp.m"
                MR_Word libs__lp__Coeffs0_73 = ((MR_Word) (MR_hl_field(MR_mktag(0), libs__lp__Eqn0_1, (MR_Integer) 0)));
#line 294 "lp.m"
                MR_Word libs__lp__Op0_74 = ((MR_Word) (MR_hl_field(MR_mktag(0), libs__lp__Eqn0_1, (MR_Integer) 1)));
#line 294 "lp.m"
                MR_Float libs__lp__Const0_75 = MR_unbox_float((MR_hl_field(MR_mktag(0), libs__lp__Eqn0_1, (MR_Integer) 2)));
#line 294 "lp.m"
                MR_Word libs__lp__Coeffs_76;
#line 294 "lp.m"
                MR_Word libs__lp__Op_77;
#line 294 "lp.m"
                MR_Float libs__lp__Const_78;

#line 323 "lp.m"
                if ((libs__lp__Op0_74 == (MR_Integer) 1))
#line 324 "lp.m"
                  libs__lp__Op_77 = (MR_Integer) 1;
#line 323 "lp.m"
                else
#line 323 "lp.m"
                  if ((libs__lp__Op0_74 == (MR_Integer) 0))
#line 322 "lp.m"
                    libs__lp__Op_77 = (MR_Integer) 2;
#line 323 "lp.m"
                  else
#line 326 "lp.m"
                    libs__lp__Op_77 = (MR_Integer) 0;
#line 11940 "libs.lp.c"
                libs__lp__TypeInfo_17_87 = (MR_Word) &libs__lp_scalar_common_2[0];
#line 328 "lp.m"
                {
#line 328 "lp.m"
                  libs__lp__Coeffs_76 = mercury__list__map_2_f_0(libs__lp__TypeInfo_17_87, libs__lp__TypeInfo_17_87, (MR_Word) &libs__lp_scalar_common_2[13], libs__lp__Coeffs0_73);
                }
#line 329 "lp.m"
                libs__lp__Const_78 = (((MR_Float) 0.0000000000000000) - libs__lp__Const0_75);
#line 320 "lp.m"
                {
#line 320 "lp.m"
                  libs__lp__Eqn1_30 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 320 "lp.m"
                  MR_hl_field(MR_mktag(0), libs__lp__Eqn1_30, 0) = ((MR_Box) (libs__lp__Coeffs_76));
#line 320 "lp.m"
                  MR_hl_field(MR_mktag(0), libs__lp__Eqn1_30, 1) = ((MR_Box) (libs__lp__Op_77));
#line 320 "lp.m"
                  MR_hl_field(MR_mktag(0), libs__lp__Eqn1_30, 2) = MR_box_float(libs__lp__Const_78);
#line 320 "lp.m"
                }
#line 295 "lp.m"
                /* direct tailcall eliminated */
#line 295 "lp.m"
                {
#line 295 "lp.m"
                  MR_Word libs__lp__Eqn0__tmp_copy_1 = libs__lp__Eqn1_30;

#line 295 "lp.m"
                  libs__lp__Eqn0_1 = libs__lp__Eqn0__tmp_copy_1;
#line 295 "lp.m"
                }
#line 295 "lp.m"
                continue;
#line 294 "lp.m"
              }
#line 296 "lp.m"
            else
#line 297 "lp.m"
              {
#line 297 "lp.m"
                MR_Word libs__lp__Var_31;
#line 297 "lp.m"
                MR_Word libs__lp__Coeffs_32;
#line 297 "lp.m"
                MR_Word libs__lp__URS_33;
#line 297 "lp.m"
                MR_Word libs__lp__V_40_40;
#line 297 "lp.m"
                MR_Word libs__lp__V_42_42;
#line 297 "lp.m"
                MR_Word libs__lp__Eqn1_44;
#line 861 "lp.m"
                MR_Word libs__lp__V_89_89;
#line 861 "lp.m"
                MR_Word libs__lp__V_90_90;
#line 861 "lp.m"
                MR_Word libs__lp__V_91_91;

#line 297 "lp.m"
                {
#line 297 "lp.m"
                  libs__lp__new_art_var_3_p_0(&libs__lp__Var_31, libs__lp__STATE_VARIABLE_Info_0_3, libs__lp__STATE_VARIABLE_Info_4);
                }
#line 298 "lp.m"
                {
#line 298 "lp.m"
                  libs__lp__V_40_40 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 298 "lp.m"
                  MR_hl_field(MR_mktag(0), libs__lp__V_40_40, 0) = ((MR_Box) (libs__lp__Var_31));
#line 298 "lp.m"
                  MR_hl_field(MR_mktag(0), libs__lp__V_40_40, 1) = MR_box_float((MR_Float) 1.0000000000000000);
#line 298 "lp.m"
                }
#line 298 "lp.m"
                {
#line 298 "lp.m"
                  libs__lp__Coeffs_32 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 298 "lp.m"
                  MR_hl_field(MR_mktag(1), libs__lp__Coeffs_32, 0) = ((MR_Box) (libs__lp__V_40_40));
#line 298 "lp.m"
                  MR_hl_field(MR_mktag(1), libs__lp__Coeffs_32, 1) = ((MR_Box) (libs__lp__V_72_72));
#line 298 "lp.m"
                }
#line 299 "lp.m"
                {
#line 299 "lp.m"
                  libs__lp__V_42_42 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 299 "lp.m"
                  MR_hl_field(MR_mktag(0), libs__lp__V_42_42, 0) = ((MR_Box) (libs__lp__Coeffs_32));
#line 299 "lp.m"
                  MR_hl_field(MR_mktag(0), libs__lp__V_42_42, 1) = ((MR_Box) ((MR_Integer) 0));
#line 299 "lp.m"
                  MR_hl_field(MR_mktag(0), libs__lp__V_42_42, 2) = MR_box_float(libs__lp__V_70_70);
#line 299 "lp.m"
                }
#line 299 "lp.m"
                {
#line 299 "lp.m"
                  libs__lp__simplify_eq_2_p_0(libs__lp__V_42_42, &libs__lp__Eqn1_44);
                }
#line 861 "lp.m"
                libs__lp__V_89_89 = ((MR_Word) (MR_hl_field(MR_mktag(0), *libs__lp__STATE_VARIABLE_Info_4, (MR_Integer) 0)));
#line 861 "lp.m"
                libs__lp__URS_33 = ((MR_Word) (MR_hl_field(MR_mktag(0), *libs__lp__STATE_VARIABLE_Info_4, (MR_Integer) 1)));
#line 861 "lp.m"
                libs__lp__V_90_90 = ((MR_Word) (MR_hl_field(MR_mktag(0), *libs__lp__STATE_VARIABLE_Info_4, (MR_Integer) 2)));
#line 861 "lp.m"
                libs__lp__V_91_91 = ((MR_Word) (MR_hl_field(MR_mktag(0), *libs__lp__STATE_VARIABLE_Info_4, (MR_Integer) 3)));
#line 301 "lp.m"
                {
#line 301 "lp.m"
                  libs__lp__expand_urs_vars_e_3_p_0(libs__lp__Eqn1_44, libs__lp__URS_33, libs__lp__Eqn_2);
#line 301 "lp.m"
                  return;
                }
#line 297 "lp.m"
              }
#line 296 "lp.m"
          }
#line 278 "lp.m"
        else
#line 278 "lp.m"
          if ((libs__lp__V_71_71 == (MR_Integer) 0))
#line 283 "lp.m"
            {
#line 280 "lp.m"
              libs__lp__succeeded = (libs__lp__V_70_70 < ((MR_Float) 0.0000000000000000));
#line 283 "lp.m"
              if (libs__lp__succeeded)
#line 281 "lp.m"
                {
#line 281 "lp.m"
                  MR_Word libs__lp__Eqn1_10;

#line 281 "lp.m"
                  {
#line 281 "lp.m"
                    libs__lp__negate_equation_2_p_0(libs__lp__Eqn0_1, &libs__lp__Eqn1_10);
                  }
#line 282 "lp.m"
                  /* direct tailcall eliminated */
#line 282 "lp.m"
                  {
#line 282 "lp.m"
                    MR_Word libs__lp__Eqn0__tmp_copy_1 = libs__lp__Eqn1_10;

#line 282 "lp.m"
                    libs__lp__Eqn0_1 = libs__lp__Eqn0__tmp_copy_1;
#line 282 "lp.m"
                  }
#line 282 "lp.m"
                  continue;
#line 281 "lp.m"
                }
#line 283 "lp.m"
              else
#line 284 "lp.m"
                {
#line 284 "lp.m"
                  MR_Word libs__lp__Var_11;
#line 284 "lp.m"
                  MR_Word libs__lp__Coeffs_12;
#line 284 "lp.m"
                  MR_Word libs__lp__URS_13;
#line 284 "lp.m"
                  MR_Word libs__lp__V_20_20;
#line 284 "lp.m"
                  MR_Word libs__lp__V_22_22;
#line 284 "lp.m"
                  MR_Word libs__lp__Eqn1_24;
#line 861 "lp.m"
                  MR_Word libs__lp__V_93_93;
#line 861 "lp.m"
                  MR_Word libs__lp__V_94_94;
#line 861 "lp.m"
                  MR_Word libs__lp__V_95_95;

#line 284 "lp.m"
                  {
#line 284 "lp.m"
                    libs__lp__new_slack_var_3_p_0(&libs__lp__Var_11, libs__lp__STATE_VARIABLE_Info_0_3, libs__lp__STATE_VARIABLE_Info_4);
                  }
#line 285 "lp.m"
                  {
#line 285 "lp.m"
                    libs__lp__V_20_20 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 285 "lp.m"
                    MR_hl_field(MR_mktag(0), libs__lp__V_20_20, 0) = ((MR_Box) (libs__lp__Var_11));
#line 285 "lp.m"
                    MR_hl_field(MR_mktag(0), libs__lp__V_20_20, 1) = MR_box_float((MR_Float) 1.0000000000000000);
#line 285 "lp.m"
                  }
#line 285 "lp.m"
                  {
#line 285 "lp.m"
                    libs__lp__Coeffs_12 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 285 "lp.m"
                    MR_hl_field(MR_mktag(1), libs__lp__Coeffs_12, 0) = ((MR_Box) (libs__lp__V_20_20));
#line 285 "lp.m"
                    MR_hl_field(MR_mktag(1), libs__lp__Coeffs_12, 1) = ((MR_Box) (libs__lp__V_72_72));
#line 285 "lp.m"
                  }
#line 286 "lp.m"
                  {
#line 286 "lp.m"
                    libs__lp__V_22_22 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 286 "lp.m"
                    MR_hl_field(MR_mktag(0), libs__lp__V_22_22, 0) = ((MR_Box) (libs__lp__Coeffs_12));
#line 286 "lp.m"
                    MR_hl_field(MR_mktag(0), libs__lp__V_22_22, 1) = ((MR_Box) ((MR_Integer) 0));
#line 286 "lp.m"
                    MR_hl_field(MR_mktag(0), libs__lp__V_22_22, 2) = MR_box_float(libs__lp__V_70_70);
#line 286 "lp.m"
                  }
#line 286 "lp.m"
                  {
#line 286 "lp.m"
                    libs__lp__simplify_eq_2_p_0(libs__lp__V_22_22, &libs__lp__Eqn1_24);
                  }
#line 861 "lp.m"
                  libs__lp__V_93_93 = ((MR_Word) (MR_hl_field(MR_mktag(0), *libs__lp__STATE_VARIABLE_Info_4, (MR_Integer) 0)));
#line 861 "lp.m"
                  libs__lp__URS_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), *libs__lp__STATE_VARIABLE_Info_4, (MR_Integer) 1)));
#line 861 "lp.m"
                  libs__lp__V_94_94 = ((MR_Word) (MR_hl_field(MR_mktag(0), *libs__lp__STATE_VARIABLE_Info_4, (MR_Integer) 2)));
#line 861 "lp.m"
                  libs__lp__V_95_95 = ((MR_Word) (MR_hl_field(MR_mktag(0), *libs__lp__STATE_VARIABLE_Info_4, (MR_Integer) 3)));
#line 288 "lp.m"
                  {
#line 288 "lp.m"
                    libs__lp__expand_urs_vars_e_3_p_0(libs__lp__Eqn1_24, libs__lp__URS_13, libs__lp__Eqn_2);
#line 288 "lp.m"
                    return;
                  }
#line 284 "lp.m"
                }
#line 283 "lp.m"
            }
#line 278 "lp.m"
          else
#line 309 "lp.m"
            {
#line 306 "lp.m"
              libs__lp__succeeded = (libs__lp__V_70_70 < ((MR_Float) 0.0000000000000000));
#line 309 "lp.m"
              if (libs__lp__succeeded)
#line 307 "lp.m"
                {
#line 307 "lp.m"
                  MR_Word libs__lp__Eqn1_50;

#line 307 "lp.m"
                  {
#line 307 "lp.m"
                    libs__lp__negate_equation_2_p_0(libs__lp__Eqn0_1, &libs__lp__Eqn1_50);
                  }
#line 308 "lp.m"
                  /* direct tailcall eliminated */
#line 308 "lp.m"
                  {
#line 308 "lp.m"
                    MR_Word libs__lp__Eqn0__tmp_copy_1 = libs__lp__Eqn1_50;

#line 308 "lp.m"
                    libs__lp__Eqn0_1 = libs__lp__Eqn0__tmp_copy_1;
#line 308 "lp.m"
                  }
#line 308 "lp.m"
                  continue;
#line 307 "lp.m"
                }
#line 309 "lp.m"
              else
#line 310 "lp.m"
                {
#line 310 "lp.m"
                  MR_Word libs__lp__SVar_51;
#line 310 "lp.m"
                  MR_Word libs__lp__AVar_52;
#line 310 "lp.m"
                  MR_Word libs__lp__Coeffs_53;
#line 310 "lp.m"
                  MR_Word libs__lp__URS_54;
#line 310 "lp.m"
                  MR_Word libs__lp__STATE_VARIABLE_Info_60_60;
#line 310 "lp.m"
                  MR_Word libs__lp__V_62_62;
#line 310 "lp.m"
                  MR_Word libs__lp__V_64_64;
#line 310 "lp.m"
                  MR_Word libs__lp__V_65_65;
#line 310 "lp.m"
                  MR_Word libs__lp__V_67_67;
#line 310 "lp.m"
                  MR_Word libs__lp__Eqn1_69;

#line 310 "lp.m"
                  {
#line 310 "lp.m"
                    libs__lp__new_slack_var_3_p_0(&libs__lp__SVar_51, libs__lp__STATE_VARIABLE_Info_0_3, &libs__lp__STATE_VARIABLE_Info_60_60);
                  }
#line 311 "lp.m"
                  {
#line 311 "lp.m"
                    libs__lp__new_art_var_3_p_0(&libs__lp__AVar_52, libs__lp__STATE_VARIABLE_Info_60_60, libs__lp__STATE_VARIABLE_Info_4);
                  }
#line 312 "lp.m"
                  {
#line 312 "lp.m"
                    libs__lp__V_62_62 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 312 "lp.m"
                    MR_hl_field(MR_mktag(0), libs__lp__V_62_62, 0) = ((MR_Box) (libs__lp__SVar_51));
#line 312 "lp.m"
                    MR_hl_field(MR_mktag(0), libs__lp__V_62_62, 1) = MR_box_float((MR_Float) -1.0000000000000000);
#line 312 "lp.m"
                  }
#line 312 "lp.m"
                  {
#line 312 "lp.m"
                    libs__lp__V_65_65 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 312 "lp.m"
                    MR_hl_field(MR_mktag(0), libs__lp__V_65_65, 0) = ((MR_Box) (libs__lp__AVar_52));
#line 312 "lp.m"
                    MR_hl_field(MR_mktag(0), libs__lp__V_65_65, 1) = MR_box_float((MR_Float) 1.0000000000000000);
#line 312 "lp.m"
                  }
#line 312 "lp.m"
                  {
#line 312 "lp.m"
                    libs__lp__V_64_64 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 312 "lp.m"
                    MR_hl_field(MR_mktag(1), libs__lp__V_64_64, 0) = ((MR_Box) (libs__lp__V_65_65));
#line 312 "lp.m"
                    MR_hl_field(MR_mktag(1), libs__lp__V_64_64, 1) = ((MR_Box) (libs__lp__V_72_72));
#line 312 "lp.m"
                  }
#line 312 "lp.m"
                  {
#line 312 "lp.m"
                    libs__lp__Coeffs_53 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 312 "lp.m"
                    MR_hl_field(MR_mktag(1), libs__lp__Coeffs_53, 0) = ((MR_Box) (libs__lp__V_62_62));
#line 312 "lp.m"
                    MR_hl_field(MR_mktag(1), libs__lp__Coeffs_53, 1) = ((MR_Box) (libs__lp__V_64_64));
#line 312 "lp.m"
                  }
#line 313 "lp.m"
                  {
#line 313 "lp.m"
                    libs__lp__V_67_67 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 313 "lp.m"
                    MR_hl_field(MR_mktag(0), libs__lp__V_67_67, 0) = ((MR_Box) (libs__lp__Coeffs_53));
#line 313 "lp.m"
                    MR_hl_field(MR_mktag(0), libs__lp__V_67_67, 1) = ((MR_Box) ((MR_Integer) 2));
#line 313 "lp.m"
                    MR_hl_field(MR_mktag(0), libs__lp__V_67_67, 2) = MR_box_float(libs__lp__V_70_70);
#line 313 "lp.m"
                  }
#line 313 "lp.m"
                  {
#line 313 "lp.m"
                    libs__lp__simplify_eq_2_p_0(libs__lp__V_67_67, &libs__lp__Eqn1_69);
                  }
#line 314 "lp.m"
                  {
#line 314 "lp.m"
                    libs__lp__get_urs_vars_2_p_0(*libs__lp__STATE_VARIABLE_Info_4, &libs__lp__URS_54);
                  }
#line 315 "lp.m"
                  {
#line 315 "lp.m"
                    libs__lp__expand_urs_vars_e_3_p_0(libs__lp__Eqn1_69, libs__lp__URS_54, libs__lp__Eqn_2);
#line 315 "lp.m"
                    return;
                  }
#line 310 "lp.m"
                }
#line 309 "lp.m"
            }
#line 278 "lp.m"
      }
#line 278 "lp.m"
      break;
#line 278 "lp.m"
    }
#line 275 "lp.m"
}

#line 253 "lp.m"
static void MR_CALL 
libs__lp__construct_art_objective_2_p_0(
#line 253 "lp.m"
  MR_Word libs__lp__HeadVar__1_1,
#line 253 "lp.m"
  MR_Word * libs__lp__HeadVar__2_2)
#line 253 "lp.m"
{
#line 255 "lp.m"
  {
#line 255 "lp.m"
    MR_bool libs__lp__succeeded;

#line 255 "lp.m"
    if ((libs__lp__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 255 "lp.m"
      *libs__lp__HeadVar__2_2 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 255 "lp.m"
    else
#line 256 "lp.m"
      {
#line 256 "lp.m"
        MR_Word libs__lp__V_3 = ((MR_Word) (MR_hl_field(MR_mktag(1), libs__lp__HeadVar__1_1, (MR_Integer) 0)));
#line 256 "lp.m"
        MR_Word libs__lp__Vs_4 = ((MR_Word) (MR_hl_field(MR_mktag(1), libs__lp__HeadVar__1_1, (MR_Integer) 1)));
#line 256 "lp.m"
        MR_Word libs__lp__Rest_5;
#line 256 "lp.m"
        MR_Word libs__lp__V_6_6;

#line 256 "lp.m"
        {
#line 256 "lp.m"
          libs__lp__V_6_6 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 256 "lp.m"
          MR_hl_field(MR_mktag(0), libs__lp__V_6_6, 0) = ((MR_Box) (libs__lp__V_3));
#line 256 "lp.m"
          MR_hl_field(MR_mktag(0), libs__lp__V_6_6, 1) = MR_box_float((MR_Float) 1.0000000000000000);
#line 256 "lp.m"
        }
#line 257 "lp.m"
        {
#line 257 "lp.m"
          libs__lp__construct_art_objective_2_p_0(libs__lp__Vs_4, &libs__lp__Rest_5);
        }
#line 256 "lp.m"
        {
#line 256 "lp.m"
          MR_Word base;
#line 256 "lp.m"
          base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 256 "lp.m"
          *libs__lp__HeadVar__2_2 = base;
#line 256 "lp.m"
          MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (libs__lp__V_6_6));
#line 256 "lp.m"
          MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (libs__lp__Rest_5));
#line 256 "lp.m"
        }
#line 256 "lp.m"
      }
#line 255 "lp.m"
  }
#line 253 "lp.m"
}

#line 810 "lp.m"
static void MR_CALL 
libs__lp__two_phase_6_p_0_4(
#line 810 "lp.m"
  void * libs__lp__env_ptr_arg)
#line 810 "lp.m"
{
#line 810 "lp.m"
  {
#line 810 "lp.m"
    struct libs__lp__two_phase_6_p_0_5_env_0_s * libs__lp__env_ptr = (struct libs__lp__two_phase_6_p_0_5_env_0_s *) libs__lp__env_ptr_arg;

#line 810 "lp.m"
    *((libs__lp__env_ptr)->libs__lp__two_phase_6_p_0_5_env_0__wrapper_arg_1) = ((MR_Box) ((libs__lp__env_ptr)->libs__lp__two_phase_6_p_0_5_env_0__conv3_HeadVar__3_29));
#line 810 "lp.m"
    {
#line 810 "lp.m"
      ((libs__lp__env_ptr)->libs__lp__two_phase_6_p_0_5_env_0__cont)((libs__lp__env_ptr)->libs__lp__two_phase_6_p_0_5_env_0__cont_env_ptr);
#line 810 "lp.m"
      return;
    }
#line 810 "lp.m"
  }
#line 810 "lp.m"
}

#line 810 "lp.m"
static void MR_CALL 
libs__lp__two_phase_6_p_0_5(
#line 810 "lp.m"
  MR_Box libs__lp__closure_arg,
#line 810 "lp.m"
  MR_Box * libs__lp__wrapper_arg_1,
#line 810 "lp.m"
  MR_Cont libs__lp__cont,
#line 810 "lp.m"
  void * libs__lp__cont_env_ptr)
#line 810 "lp.m"
{
#line 810 "lp.m"
  {
#line 810 "lp.m"
    struct libs__lp__two_phase_6_p_0_5_env_0_s libs__lp__env;

#line 810 "lp.m"
    (libs__lp__env).libs__lp__two_phase_6_p_0_5_env_0__wrapper_arg_1 = libs__lp__wrapper_arg_1;
#line 810 "lp.m"
    (libs__lp__env).libs__lp__two_phase_6_p_0_5_env_0__cont = libs__lp__cont;
#line 810 "lp.m"
    (libs__lp__env).libs__lp__two_phase_6_p_0_5_env_0__cont_env_ptr = libs__lp__cont_env_ptr;
#line 810 "lp.m"
    {
#line 810 "lp.m"
      MR_Box libs__lp__closure = libs__lp__closure_arg;

#line 810 "lp.m"
      {
#line 810 "lp.m"
        libs__lp__IntroducedFrom__pred__get_basis_vars__810__1_3_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), libs__lp__closure, (MR_Integer) 3))), ((MR_Word) (MR_hl_field(MR_mktag(0), libs__lp__closure, (MR_Integer) 4))), &(libs__lp__env).libs__lp__two_phase_6_p_0_5_env_0__conv3_HeadVar__3_29, libs__lp__two_phase_6_p_0_4, &libs__lp__env);
      }
#line 810 "lp.m"
    }
#line 810 "lp.m"
  }
#line 810 "lp.m"
}

#line 798 "lp.m"
static void MR_CALL 
libs__lp__two_phase_6_p_0_2(
#line 798 "lp.m"
  void * libs__lp__env_ptr_arg)
#line 798 "lp.m"
{
#line 798 "lp.m"
  {
#line 798 "lp.m"
    struct libs__lp__two_phase_6_p_0_3_env_0_s * libs__lp__env_ptr = (struct libs__lp__two_phase_6_p_0_3_env_0_s *) libs__lp__env_ptr_arg;

#line 798 "lp.m"
    *((libs__lp__env_ptr)->libs__lp__two_phase_6_p_0_3_env_0__wrapper_arg_1) = ((MR_Box) ((libs__lp__env_ptr)->libs__lp__two_phase_6_p_0_3_env_0__conv2_HeadVar__2_24));
#line 798 "lp.m"
    {
#line 798 "lp.m"
      ((libs__lp__env_ptr)->libs__lp__two_phase_6_p_0_3_env_0__cont)((libs__lp__env_ptr)->libs__lp__two_phase_6_p_0_3_env_0__cont_env_ptr);
#line 798 "lp.m"
      return;
    }
#line 798 "lp.m"
  }
#line 798 "lp.m"
}

#line 798 "lp.m"
static void MR_CALL 
libs__lp__two_phase_6_p_0_3(
#line 798 "lp.m"
  MR_Box libs__lp__closure_arg,
#line 798 "lp.m"
  MR_Box * libs__lp__wrapper_arg_1,
#line 798 "lp.m"
  MR_Cont libs__lp__cont,
#line 798 "lp.m"
  void * libs__lp__cont_env_ptr)
#line 798 "lp.m"
{
#line 798 "lp.m"
  {
#line 798 "lp.m"
    struct libs__lp__two_phase_6_p_0_3_env_0_s libs__lp__env;

#line 798 "lp.m"
    (libs__lp__env).libs__lp__two_phase_6_p_0_3_env_0__wrapper_arg_1 = libs__lp__wrapper_arg_1;
#line 798 "lp.m"
    (libs__lp__env).libs__lp__two_phase_6_p_0_3_env_0__cont = libs__lp__cont;
#line 798 "lp.m"
    (libs__lp__env).libs__lp__two_phase_6_p_0_3_env_0__cont_env_ptr = libs__lp__cont_env_ptr;
#line 798 "lp.m"
    {
#line 798 "lp.m"
      MR_Box libs__lp__closure = libs__lp__closure_arg;

#line 798 "lp.m"
      {
#line 798 "lp.m"
        libs__lp__IntroducedFrom__pred__get_basis_vars__798__1_2_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), libs__lp__closure, (MR_Integer) 3))), &(libs__lp__env).libs__lp__two_phase_6_p_0_3_env_0__conv2_HeadVar__2_24, libs__lp__two_phase_6_p_0_2, &libs__lp__env);
      }
#line 798 "lp.m"
    }
#line 798 "lp.m"
  }
#line 798 "lp.m"
}

#line 454 "lp.m"
static void MR_CALL 
libs__lp__two_phase_6_p_0_1(
#line 454 "lp.m"
  MR_Box libs__lp__closure_arg,
#line 454 "lp.m"
  MR_Box libs__lp__wrapper_arg_1,
#line 454 "lp.m"
  MR_Box libs__lp__wrapper_arg_2,
#line 454 "lp.m"
  MR_Box * libs__lp__wrapper_arg_3)
#line 454 "lp.m"
{
#line 454 "lp.m"
  {
#line 454 "lp.m"
    MR_Box libs__lp__closure = libs__lp__closure_arg;
#line 454 "lp.m"
    MR_Word libs__lp__conv0_STATE_VARIABLE_Map_15;

#line 454 "lp.m"
    {
#line 454 "lp.m"
      libs__lp__extract_obj_var_4_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), libs__lp__closure, (MR_Integer) 3))), ((MR_Word) libs__lp__wrapper_arg_1), ((MR_Word) libs__lp__wrapper_arg_2), &libs__lp__conv0_STATE_VARIABLE_Map_15);
    }
#line 454 "lp.m"
    *libs__lp__wrapper_arg_3 = ((MR_Box) (libs__lp__conv0_STATE_VARIABLE_Map_15));
#line 454 "lp.m"
  }
#line 454 "lp.m"
}

#line 215 "lp.m"
static void MR_CALL 
libs__lp__two_phase_6_p_0(
#line 215 "lp.m"
  MR_Word libs__lp__Obj0_7,
#line 215 "lp.m"
  MR_Word libs__lp__Obj_8,
#line 215 "lp.m"
  MR_Word libs__lp__ArtVars_9,
#line 215 "lp.m"
  MR_Word libs__lp__VarNums_10,
#line 215 "lp.m"
  MR_Word libs__lp__Tableau0_11,
#line 215 "lp.m"
  MR_Word * libs__lp__Result_12)
#line 215 "lp.m"
{
#line 223 "lp.m"
  {
#line 223 "lp.m"
    MR_bool libs__lp__succeeded;
#line 223 "lp.m"
    MR_Word libs__lp__ArtObj_14;
#line 223 "lp.m"
    MR_Word libs__lp__STATE_VARIABLE_Tableau_23_23;
#line 223 "lp.m"
    MR_Word libs__lp__STATE_VARIABLE_Tableau_24_24;
#line 223 "lp.m"
    MR_Word libs__lp__STATE_VARIABLE_Tableau_25_25;
#line 223 "lp.m"
    MR_Word libs__lp__Res0_39;

#line 224 "lp.m"
    {
#line 224 "lp.m"
      libs__lp__construct_art_objective_2_p_0(libs__lp__ArtVars_9, &libs__lp__ArtObj_14);
    }
#line 225 "lp.m"
    {
#line 225 "lp.m"
      libs__lp__insert_coeffs_5_p_0(libs__lp__ArtObj_14, (MR_Integer) 0, libs__lp__VarNums_10, libs__lp__Tableau0_11, &libs__lp__STATE_VARIABLE_Tableau_23_23);
    }
#line 226 "lp.m"
    {
#line 226 "lp.m"
      libs__lp__ensure_zero_obj_coeffs_3_p_0(libs__lp__ArtVars_9, libs__lp__STATE_VARIABLE_Tableau_23_23, &libs__lp__STATE_VARIABLE_Tableau_24_24);
    }
#line 438 "lp.m"
    {
#line 438 "lp.m"
      libs__lp__simplex_3_p_0(libs__lp__STATE_VARIABLE_Tableau_24_24, &libs__lp__STATE_VARIABLE_Tableau_25_25, &libs__lp__Res0_39);
    }
#line 12614 "libs.lp.c"
    if ((libs__lp__Res0_39 == (MR_Integer) 0))
#line 230 "lp.m"
      *libs__lp__Result_12 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 12618 "libs.lp.c"
    else
#line 12620 "libs.lp.c"
      {
#line 12622 "libs.lp.c"
        MR_Word libs__lp__TypeInfo_12_59;
#line 12624 "libs.lp.c"
        MR_Float libs__lp__Val_16;
#line 12626 "libs.lp.c"
        MR_Integer libs__lp__M_40 = ((MR_Integer) (MR_hl_field(MR_mktag(0), libs__lp__STATE_VARIABLE_Tableau_25_25, (MR_Integer) 1)));
#line 12628 "libs.lp.c"
        MR_Word libs__lp__V_54_54;
#line 12630 "libs.lp.c"
        MR_Word libs__lp__V_55_55;
#line 742 "lp.m"
        MR_Integer libs__lp__V_45_45 = ((MR_Integer) (MR_hl_field(MR_mktag(0), libs__lp__STATE_VARIABLE_Tableau_25_25, (MR_Integer) 0)));
#line 742 "lp.m"
        MR_Word libs__lp__V_46_46 = ((MR_Word) (MR_hl_field(MR_mktag(0), libs__lp__STATE_VARIABLE_Tableau_25_25, (MR_Integer) 2)));
#line 742 "lp.m"
        MR_Word libs__lp__V_47_47 = ((MR_Word) (MR_hl_field(MR_mktag(0), libs__lp__STATE_VARIABLE_Tableau_25_25, (MR_Integer) 3)));
#line 742 "lp.m"
        MR_Word libs__lp__V_48_48 = ((MR_Word) (MR_hl_field(MR_mktag(0), libs__lp__STATE_VARIABLE_Tableau_25_25, (MR_Integer) 4)));
#line 742 "lp.m"
        MR_Word libs__lp__V_49_49 = ((MR_Word) (MR_hl_field(MR_mktag(0), libs__lp__STATE_VARIABLE_Tableau_25_25, (MR_Integer) 5)));
#line 742 "lp.m"
        MR_Word libs__lp__V_50_50 = ((MR_Word) (MR_hl_field(MR_mktag(0), libs__lp__STATE_VARIABLE_Tableau_25_25, (MR_Integer) 6)));
#line 454 "lp.m"
        MR_Word libs__lp___ArtRes_17;
#line 454 "lp.m"
        MR_Box libs__lp__conv1__ArtRes_17;

#line 445 "lp.m"
        {
#line 445 "lp.m"
          libs__lp__index_4_p_0(libs__lp__STATE_VARIABLE_Tableau_25_25, (MR_Integer) 0, libs__lp__M_40, &libs__lp__Val_16);
        }
#line 454 "lp.m"
        {
#line 454 "lp.m"
          libs__lp__V_54_54 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
#line 454 "lp.m"
          MR_hl_field(MR_mktag(0), libs__lp__V_54_54, 0) = ((MR_Box) (&libs__lp_scalar_common_4[1]));
#line 454 "lp.m"
          MR_hl_field(MR_mktag(0), libs__lp__V_54_54, 1) = ((MR_Box) (libs__lp__two_phase_6_p_0_1));
#line 454 "lp.m"
          MR_hl_field(MR_mktag(0), libs__lp__V_54_54, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 454 "lp.m"
          MR_hl_field(MR_mktag(0), libs__lp__V_54_54, 3) = ((MR_Box) (libs__lp__STATE_VARIABLE_Tableau_25_25));
#line 454 "lp.m"
        }
#line 12668 "libs.lp.c"
        libs__lp__TypeInfo_12_59 = (MR_Word) &libs__lp_scalar_common_1[0];
#line 454 "lp.m"
        {
#line 454 "lp.m"
          libs__lp__V_55_55 = mercury__map__init_0_f_0(libs__lp__TypeInfo_12_59, (MR_Word) &mercury__builtin__builtin__type_ctor_info_float_0);
        }
#line 454 "lp.m"
        {
#line 454 "lp.m"
          mercury__list__foldl_4_p_0(libs__lp__TypeInfo_12_59, (MR_Word) &libs__lp_scalar_common_2[1], libs__lp__V_54_54, libs__lp__ArtVars_9, ((MR_Box) (libs__lp__V_55_55)), &libs__lp__conv1__ArtRes_17);
        }
#line 454 "lp.m"
        libs__lp___ArtRes_17 = ((MR_Word) libs__lp__conv1__ArtRes_17);
#line 233 "lp.m"
        libs__lp__succeeded = (libs__lp__Val_16 == ((MR_Float) 0.0000000000000000));
#line 233 "lp.m"
        libs__lp__succeeded = !(libs__lp__succeeded);
#line 235 "lp.m"
        if (libs__lp__succeeded)
#line 234 "lp.m"
          *libs__lp__Result_12 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 235 "lp.m"
        else
#line 236 "lp.m"
          {
#line 236 "lp.m"
            MR_Word libs__lp__BasisVars_18;
#line 236 "lp.m"
            MR_Word libs__lp__ObjVars_19;
#line 236 "lp.m"
            MR_Word libs__lp__STATE_VARIABLE_Tableau_26_26;
#line 236 "lp.m"
            MR_Word libs__lp__STATE_VARIABLE_Tableau_28_28;
#line 236 "lp.m"
            MR_Word libs__lp__STATE_VARIABLE_Tableau_29_32;
#line 236 "lp.m"
            MR_Word libs__lp__BasisCol_64;
#line 236 "lp.m"
            MR_Word libs__lp__Cols_72;
#line 236 "lp.m"
            MR_Word libs__lp__BasisVars_73;
#line 246 "lp.m"
            MR_Word libs__lp__V_20_20;

#line 236 "lp.m"
            {
#line 236 "lp.m"
              libs__lp__fix_basis_and_rem_cols_3_p_0(libs__lp__ArtVars_9, libs__lp__STATE_VARIABLE_Tableau_25_25, &libs__lp__STATE_VARIABLE_Tableau_26_26);
            }
#line 242 "lp.m"
            {
#line 242 "lp.m"
              libs__lp__insert_coeffs_5_p_0(libs__lp__Obj_8, (MR_Integer) 0, libs__lp__VarNums_10, libs__lp__STATE_VARIABLE_Tableau_26_26, &libs__lp__STATE_VARIABLE_Tableau_28_28);
            }
#line 798 "lp.m"
            {
#line 798 "lp.m"
              libs__lp__BasisCol_64 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
#line 798 "lp.m"
              MR_hl_field(MR_mktag(0), libs__lp__BasisCol_64, 0) = ((MR_Box) (&libs__lp_scalar_common_5[1]));
#line 798 "lp.m"
              MR_hl_field(MR_mktag(0), libs__lp__BasisCol_64, 1) = ((MR_Box) (libs__lp__two_phase_6_p_0_3));
#line 798 "lp.m"
              MR_hl_field(MR_mktag(0), libs__lp__BasisCol_64, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 798 "lp.m"
              MR_hl_field(MR_mktag(0), libs__lp__BasisCol_64, 3) = ((MR_Box) (libs__lp__STATE_VARIABLE_Tableau_28_28));
#line 798 "lp.m"
            }
#line 809 "lp.m"
            {
#line 809 "lp.m"
              mercury__solutions__solutions_2_p_1((MR_Word) &mercury__builtin__builtin__type_ctor_info_int_0, libs__lp__BasisCol_64, &libs__lp__Cols_72);
            }
#line 810 "lp.m"
            {
#line 810 "lp.m"
              libs__lp__BasisVars_73 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
#line 810 "lp.m"
              MR_hl_field(MR_mktag(0), libs__lp__BasisVars_73, 0) = ((MR_Box) (&libs__lp_scalar_common_3[1]));
#line 810 "lp.m"
              MR_hl_field(MR_mktag(0), libs__lp__BasisVars_73, 1) = ((MR_Box) (libs__lp__two_phase_6_p_0_5));
#line 810 "lp.m"
              MR_hl_field(MR_mktag(0), libs__lp__BasisVars_73, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
#line 810 "lp.m"
              MR_hl_field(MR_mktag(0), libs__lp__BasisVars_73, 3) = ((MR_Box) (libs__lp__STATE_VARIABLE_Tableau_28_28));
#line 810 "lp.m"
              MR_hl_field(MR_mktag(0), libs__lp__BasisVars_73, 4) = ((MR_Box) (libs__lp__Cols_72));
#line 810 "lp.m"
            }
#line 815 "lp.m"
            {
#line 815 "lp.m"
              mercury__solutions__solutions_2_p_1((MR_Word) &libs__lp_scalar_common_1[0], libs__lp__BasisVars_73, &libs__lp__BasisVars_18);
            }
#line 244 "lp.m"
            {
#line 244 "lp.m"
              libs__lp__ensure_zero_obj_coeffs_3_p_0(libs__lp__BasisVars_18, libs__lp__STATE_VARIABLE_Tableau_28_28, &libs__lp__STATE_VARIABLE_Tableau_29_32);
            }
#line 245 "lp.m"
            {
#line 245 "lp.m"
              libs__lp__ObjVars_19 = libs__lp__get_vars_from_coeffs_1_f_0(libs__lp__Obj0_7);
            }
#line 246 "lp.m"
            {
#line 246 "lp.m"
              libs__lp__optimize_4_p_0(libs__lp__ObjVars_19, libs__lp__STATE_VARIABLE_Tableau_29_32, &libs__lp__V_20_20, libs__lp__Result_12);
            }
#line 236 "lp.m"
          }
#line 12780 "libs.lp.c"
      }
#line 223 "lp.m"
  }
#line 215 "lp.m"
}

#line 205 "lp.m"
static void MR_CALL 
libs__lp__get_vars_from_coeffs_2_3_p_0(
#line 205 "lp.m"
  MR_Word libs__lp__HeadVar__1_1,
#line 205 "lp.m"
  MR_Word libs__lp__STATE_VARIABLE_SetVar_0_2,
#line 205 "lp.m"
  MR_Word * libs__lp__STATE_VARIABLE_SetVar_3)
#line 205 "lp.m"
{
#line 208 "lp.m"
  while (MR_TRUE)
#line 208 "lp.m"
    {
#line 208 "lp.m"
      /* tailcall optimized into a loop */
#line 208 "lp.m"
      {
#line 208 "lp.m"
        MR_bool libs__lp__succeeded;

#line 208 "lp.m"
        if ((libs__lp__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 208 "lp.m"
          *libs__lp__STATE_VARIABLE_SetVar_3 = libs__lp__STATE_VARIABLE_SetVar_0_2;
#line 208 "lp.m"
        else
#line 209 "lp.m"
          {
#line 209 "lp.m"
            MR_Word libs__lp__Var_7;
#line 209 "lp.m"
            MR_Word libs__lp__Coeffs_9 = ((MR_Word) (MR_hl_field(MR_mktag(1), libs__lp__HeadVar__1_1, (MR_Integer) 1)));
#line 209 "lp.m"
            MR_Word libs__lp__V_13_13 = ((MR_Word) (MR_hl_field(MR_mktag(1), libs__lp__HeadVar__1_1, (MR_Integer) 0)));
#line 209 "lp.m"
            MR_Word libs__lp__STATE_VARIABLE_SetVar_14_14;
#line 209 "lp.m"
            MR_Float libs__lp__V_8_8;

#line 209 "lp.m"
            libs__lp__Var_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), libs__lp__V_13_13, (MR_Integer) 0)));
#line 209 "lp.m"
            libs__lp__V_8_8 = MR_unbox_float((MR_hl_field(MR_mktag(0), libs__lp__V_13_13, (MR_Integer) 1)));
#line 210 "lp.m"
            {
#line 210 "lp.m"
              mercury__set__insert_3_p_0((MR_Word) &libs__lp_scalar_common_1[0], ((MR_Box) (libs__lp__Var_7)), libs__lp__STATE_VARIABLE_SetVar_0_2, &libs__lp__STATE_VARIABLE_SetVar_14_14);
            }
#line 211 "lp.m"
            /* direct tailcall eliminated */
#line 211 "lp.m"
            {
#line 211 "lp.m"
              MR_Word libs__lp__HeadVar__1__tmp_copy_1 = libs__lp__Coeffs_9;
#line 211 "lp.m"
              MR_Word libs__lp__STATE_VARIABLE_SetVar_0__tmp_copy_2 = libs__lp__STATE_VARIABLE_SetVar_14_14;

#line 211 "lp.m"
              libs__lp__STATE_VARIABLE_SetVar_0_2 = libs__lp__STATE_VARIABLE_SetVar_0__tmp_copy_2;
#line 211 "lp.m"
              libs__lp__HeadVar__1_1 = libs__lp__HeadVar__1__tmp_copy_1;
#line 211 "lp.m"
            }
#line 211 "lp.m"
            continue;
#line 209 "lp.m"
          }
#line 208 "lp.m"
      }
#line 208 "lp.m"
      break;
#line 208 "lp.m"
    }
#line 205 "lp.m"
}

#line 199 "lp.m"
static MR_Word MR_CALL 
libs__lp__get_vars_from_coeffs_1_f_0(
#line 199 "lp.m"
  MR_Word libs__lp__Coeffs_3)
#line 199 "lp.m"
{
#line 201 "lp.m"
  {
#line 201 "lp.m"
    MR_bool libs__lp__succeeded;
#line 201 "lp.m"
    MR_Word libs__lp__Vars_4;
#line 201 "lp.m"
    MR_Word libs__lp__TypeInfo_7_7 = (MR_Word) &libs__lp_scalar_common_1[0];
#line 201 "lp.m"
    MR_Word libs__lp__SetVars_5;
#line 201 "lp.m"
    MR_Word libs__lp__V_6_6;

#line 202 "lp.m"
    {
#line 202 "lp.m"
      libs__lp__V_6_6 = mercury__set__init_0_f_0(libs__lp__TypeInfo_7_7);
    }
#line 202 "lp.m"
    {
#line 202 "lp.m"
      libs__lp__get_vars_from_coeffs_2_3_p_0(libs__lp__Coeffs_3, libs__lp__V_6_6, &libs__lp__SetVars_5);
    }
#line 203 "lp.m"
    {
#line 203 "lp.m"
      libs__lp__Vars_4 = mercury__set__to_sorted_list_1_f_0(libs__lp__TypeInfo_7_7, libs__lp__SetVars_5);
    }
#line 201 "lp.m"
    return libs__lp__Vars_4;
#line 201 "lp.m"
  }
#line 199 "lp.m"
}

#line 454 "lp.m"
static void MR_CALL 
libs__lp__one_phase_5_p_0_1(
#line 454 "lp.m"
  MR_Box libs__lp__closure_arg,
#line 454 "lp.m"
  MR_Box libs__lp__wrapper_arg_1,
#line 454 "lp.m"
  MR_Box libs__lp__wrapper_arg_2,
#line 454 "lp.m"
  MR_Box * libs__lp__wrapper_arg_3)
#line 454 "lp.m"
{
#line 454 "lp.m"
  {
#line 454 "lp.m"
    MR_Box libs__lp__closure = libs__lp__closure_arg;
#line 454 "lp.m"
    MR_Word libs__lp__conv0_STATE_VARIABLE_Map_15;

#line 454 "lp.m"
    {
#line 454 "lp.m"
      libs__lp__extract_obj_var_4_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), libs__lp__closure, (MR_Integer) 3))), ((MR_Word) libs__lp__wrapper_arg_1), ((MR_Word) libs__lp__wrapper_arg_2), &libs__lp__conv0_STATE_VARIABLE_Map_15);
    }
#line 454 "lp.m"
    *libs__lp__wrapper_arg_3 = ((MR_Box) (libs__lp__conv0_STATE_VARIABLE_Map_15));
#line 454 "lp.m"
  }
#line 454 "lp.m"
}

#line 191 "lp.m"
static void MR_CALL 
libs__lp__one_phase_5_p_0(
#line 191 "lp.m"
  MR_Word libs__lp__Obj0_6,
#line 191 "lp.m"
  MR_Word libs__lp__Obj_7,
#line 191 "lp.m"
  MR_Word libs__lp__VarNums_8,
#line 191 "lp.m"
  MR_Word libs__lp__Tableau0_9,
#line 191 "lp.m"
  MR_Word * libs__lp__Result_10)
#line 191 "lp.m"
{
#line 194 "lp.m"
  {
#line 194 "lp.m"
    MR_bool libs__lp__succeeded;
#line 194 "lp.m"
    MR_Word libs__lp__TypeInfo_7_19;
#line 194 "lp.m"
    MR_Word libs__lp__Tableau1_11;
#line 194 "lp.m"
    MR_Word libs__lp__ObjVars_12;
#line 194 "lp.m"
    MR_Word libs__lp__V_13_13;
#line 194 "lp.m"
    MR_Word libs__lp__SetVars_17;
#line 194 "lp.m"
    MR_Word libs__lp__V_18_18;
#line 194 "lp.m"
    MR_Word libs__lp__Res0_24;

#line 195 "lp.m"
    {
#line 195 "lp.m"
      libs__lp__insert_coeffs_5_p_0(libs__lp__Obj_7, (MR_Integer) 0, libs__lp__VarNums_8, libs__lp__Tableau0_9, &libs__lp__Tableau1_11);
    }
#line 12978 "libs.lp.c"
    libs__lp__TypeInfo_7_19 = (MR_Word) &libs__lp_scalar_common_1[0];
#line 202 "lp.m"
    {
#line 202 "lp.m"
      libs__lp__V_18_18 = mercury__set__init_0_f_0(libs__lp__TypeInfo_7_19);
    }
#line 202 "lp.m"
    {
#line 202 "lp.m"
      libs__lp__get_vars_from_coeffs_2_3_p_0(libs__lp__Obj0_6, libs__lp__V_18_18, &libs__lp__SetVars_17);
    }
#line 203 "lp.m"
    {
#line 203 "lp.m"
      libs__lp__ObjVars_12 = mercury__set__to_sorted_list_1_f_0(libs__lp__TypeInfo_7_19, libs__lp__SetVars_17);
    }
#line 438 "lp.m"
    {
#line 438 "lp.m"
      libs__lp__simplex_3_p_0(libs__lp__Tableau1_11, &libs__lp__V_13_13, &libs__lp__Res0_24);
    }
#line 442 "lp.m"
    if ((libs__lp__Res0_24 == (MR_Integer) 0))
#line 441 "lp.m"
      *libs__lp__Result_10 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 442 "lp.m"
    else
#line 443 "lp.m"
      {
#line 443 "lp.m"
        MR_Word libs__lp__TypeInfo_12_44;
#line 443 "lp.m"
        MR_Integer libs__lp__M_25 = ((MR_Integer) (MR_hl_field(MR_mktag(0), libs__lp__V_13_13, (MR_Integer) 1)));
#line 443 "lp.m"
        MR_Float libs__lp__ObjVal_26;
#line 443 "lp.m"
        MR_Word libs__lp__ObjMap_27;
#line 443 "lp.m"
        MR_Word libs__lp__V_39_39;
#line 443 "lp.m"
        MR_Word libs__lp__V_40_40;
#line 742 "lp.m"
        MR_Integer libs__lp__V_30_30 = ((MR_Integer) (MR_hl_field(MR_mktag(0), libs__lp__V_13_13, (MR_Integer) 0)));
#line 742 "lp.m"
        MR_Word libs__lp__V_31_31 = ((MR_Word) (MR_hl_field(MR_mktag(0), libs__lp__V_13_13, (MR_Integer) 2)));
#line 742 "lp.m"
        MR_Word libs__lp__V_32_32 = ((MR_Word) (MR_hl_field(MR_mktag(0), libs__lp__V_13_13, (MR_Integer) 3)));
#line 742 "lp.m"
        MR_Word libs__lp__V_33_33 = ((MR_Word) (MR_hl_field(MR_mktag(0), libs__lp__V_13_13, (MR_Integer) 4)));
#line 742 "lp.m"
        MR_Word libs__lp__V_34_34 = ((MR_Word) (MR_hl_field(MR_mktag(0), libs__lp__V_13_13, (MR_Integer) 5)));
#line 742 "lp.m"
        MR_Word libs__lp__V_35_35 = ((MR_Word) (MR_hl_field(MR_mktag(0), libs__lp__V_13_13, (MR_Integer) 6)));
#line 454 "lp.m"
        MR_Box libs__lp__conv1_ObjMap_27;

#line 445 "lp.m"
        {
#line 445 "lp.m"
          libs__lp__index_4_p_0(libs__lp__V_13_13, (MR_Integer) 0, libs__lp__M_25, &libs__lp__ObjVal_26);
        }
#line 454 "lp.m"
        {
#line 454 "lp.m"
          libs__lp__V_39_39 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
#line 454 "lp.m"
          MR_hl_field(MR_mktag(0), libs__lp__V_39_39, 0) = ((MR_Box) (&libs__lp_scalar_common_4[1]));
#line 454 "lp.m"
          MR_hl_field(MR_mktag(0), libs__lp__V_39_39, 1) = ((MR_Box) (libs__lp__one_phase_5_p_0_1));
#line 454 "lp.m"
          MR_hl_field(MR_mktag(0), libs__lp__V_39_39, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 454 "lp.m"
          MR_hl_field(MR_mktag(0), libs__lp__V_39_39, 3) = ((MR_Box) (libs__lp__V_13_13));
#line 454 "lp.m"
        }
#line 13054 "libs.lp.c"
        libs__lp__TypeInfo_12_44 = (MR_Word) &libs__lp_scalar_common_1[0];
#line 454 "lp.m"
        {
#line 454 "lp.m"
          libs__lp__V_40_40 = mercury__map__init_0_f_0(libs__lp__TypeInfo_12_44, (MR_Word) &mercury__builtin__builtin__type_ctor_info_float_0);
        }
#line 454 "lp.m"
        {
#line 454 "lp.m"
          mercury__list__foldl_4_p_0(libs__lp__TypeInfo_12_44, (MR_Word) &libs__lp_scalar_common_2[1], libs__lp__V_39_39, libs__lp__ObjVars_12, ((MR_Box) (libs__lp__V_40_40)), &libs__lp__conv1_ObjMap_27);
        }
#line 454 "lp.m"
        libs__lp__ObjMap_27 = ((MR_Word) libs__lp__conv1_ObjMap_27);
#line 447 "lp.m"
        {
#line 447 "lp.m"
          MR_Word base;
#line 447 "lp.m"
          base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 447 "lp.m"
          *libs__lp__Result_10 = base;
#line 447 "lp.m"
          MR_hl_field(MR_mktag(1), base, 0) = MR_box_float(libs__lp__ObjVal_26);
#line 447 "lp.m"
          MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (libs__lp__ObjMap_27));
#line 447 "lp.m"
        }
#line 443 "lp.m"
      }
#line 194 "lp.m"
  }
#line 191 "lp.m"
}

#line 328 "lp.m"
static MR_Box MR_CALL 
libs__lp__lp_solve_2_8_p_0_2(
#line 328 "lp.m"
  MR_Box libs__lp__closure_arg,
#line 328 "lp.m"
  MR_Box libs__lp__wrapper_arg_1)
#line 328 "lp.m"
{
#line 328 "lp.m"
  {
#line 328 "lp.m"
    MR_Box libs__lp__wrapper_arg_2;
#line 328 "lp.m"
    MR_Box libs__lp__closure = libs__lp__closure_arg;
#line 328 "lp.m"
    MR_Word libs__lp__conv3_HeadVar__2_13;

#line 328 "lp.m"
    {
#line 328 "lp.m"
      libs__lp__conv3_HeadVar__2_13 = libs__lp__IntroducedFrom__func__negate_equation__328__1_1_f_0(((MR_Word) libs__lp__wrapper_arg_1));
    }
#line 328 "lp.m"
    libs__lp__wrapper_arg_2 = ((MR_Box) (libs__lp__conv3_HeadVar__2_13));
#line 328 "lp.m"
    return libs__lp__wrapper_arg_2;
#line 328 "lp.m"
  }
#line 328 "lp.m"
}

#line 265 "lp.m"
static void MR_CALL 
libs__lp__lp_solve_2_8_p_0_1(
#line 265 "lp.m"
  MR_Box libs__lp__closure_arg,
#line 265 "lp.m"
  MR_Box libs__lp__wrapper_arg_1,
#line 265 "lp.m"
  MR_Box * libs__lp__wrapper_arg_2,
#line 265 "lp.m"
  MR_Box libs__lp__wrapper_arg_3,
#line 265 "lp.m"
  MR_Box * libs__lp__wrapper_arg_4)
#line 265 "lp.m"
{
#line 265 "lp.m"
  {
#line 265 "lp.m"
    MR_Box libs__lp__closure = libs__lp__closure_arg;
#line 265 "lp.m"
    MR_Word libs__lp__conv1_Eqn_2;
#line 265 "lp.m"
    MR_Word libs__lp__conv0_STATE_VARIABLE_Info_4;

#line 265 "lp.m"
    {
#line 265 "lp.m"
      libs__lp__standardize_equation_4_p_0(((MR_Word) libs__lp__wrapper_arg_1), &libs__lp__conv1_Eqn_2, ((MR_Word) libs__lp__wrapper_arg_3), &libs__lp__conv0_STATE_VARIABLE_Info_4);
    }
#line 265 "lp.m"
    *libs__lp__wrapper_arg_2 = ((MR_Box) (libs__lp__conv1_Eqn_2));
#line 265 "lp.m"
    *libs__lp__wrapper_arg_4 = ((MR_Box) (libs__lp__conv0_STATE_VARIABLE_Info_4));
#line 265 "lp.m"
  }
#line 265 "lp.m"
}

#line 127 "lp.m"
static void MR_CALL 
libs__lp__lp_solve_2_8_p_0(
#line 127 "lp.m"
  MR_Word libs__lp__Eqns0_9,
#line 127 "lp.m"
  MR_Word libs__lp__Dir_10,
#line 127 "lp.m"
  MR_Word libs__lp__Obj0_11,
#line 127 "lp.m"
  MR_Word * libs__lp__Result_12,
#line 127 "lp.m"
  MR_Word libs__lp__STATE_VARIABLE_Info_0_36,
#line 127 "lp.m"
  MR_Word * libs__lp__STATE_VARIABLE_Info_37)
#line 127 "lp.m"
{
#line 131 "lp.m"
  {
#line 131 "lp.m"
    MR_bool libs__lp__succeeded;
#line 131 "lp.m"
    MR_Word libs__lp__TypeInfo_50_50;
#line 131 "lp.m"
    MR_Word libs__lp__TypeCtorInfo_18_65 = (MR_Word) &libs__lp__libs__lp__type_ctor_info_equation_0;
#line 131 "lp.m"
    MR_Word libs__lp__TypeInfo_9_91;
#line 131 "lp.m"
    MR_Word libs__lp__Eqns_15;
#line 131 "lp.m"
    MR_Word libs__lp__URS_20;
#line 131 "lp.m"
    MR_Integer libs__lp__Rows_22;
#line 131 "lp.m"
    MR_Word libs__lp__VarNums0_26;
#line 131 "lp.m"
    MR_Word libs__lp__ArtVars_28;
#line 131 "lp.m"
    MR_Word libs__lp__V_90_90;
#line 265 "lp.m"
    MR_Box libs__lp__conv2_STATE_VARIABLE_Info_37;
#line 861 "lp.m"
    MR_Word libs__lp__V_83_83;
#line 861 "lp.m"
    MR_Word libs__lp__V_84_84;
#line 861 "lp.m"
    MR_Word libs__lp__V_85_85;
#line 863 "lp.m"
    MR_Word libs__lp__V_93_93;
#line 863 "lp.m"
    MR_Word libs__lp__V_94_94;
#line 863 "lp.m"
    MR_Word libs__lp__V_95_95;

#line 265 "lp.m"
    {
#line 265 "lp.m"
      mercury__list__map_foldl_5_p_1(libs__lp__TypeCtorInfo_18_65, libs__lp__TypeCtorInfo_18_65, (MR_Word) &libs__lp__libs__lp__type_ctor_info_lp_info_0, (MR_Word) &libs__lp_scalar_common_2[11], libs__lp__Eqns0_9, &libs__lp__Eqns_15, ((MR_Box) (libs__lp__STATE_VARIABLE_Info_0_36)), &libs__lp__conv2_STATE_VARIABLE_Info_37);
    }
#line 265 "lp.m"
    *libs__lp__STATE_VARIABLE_Info_37 = ((MR_Word) libs__lp__conv2_STATE_VARIABLE_Info_37);
#line 861 "lp.m"
    libs__lp__V_83_83 = ((MR_Word) (MR_hl_field(MR_mktag(0), *libs__lp__STATE_VARIABLE_Info_37, (MR_Integer) 0)));
#line 861 "lp.m"
    libs__lp__URS_20 = ((MR_Word) (MR_hl_field(MR_mktag(0), *libs__lp__STATE_VARIABLE_Info_37, (MR_Integer) 1)));
#line 861 "lp.m"
    libs__lp__V_84_84 = ((MR_Word) (MR_hl_field(MR_mktag(0), *libs__lp__STATE_VARIABLE_Info_37, (MR_Integer) 2)));
#line 861 "lp.m"
    libs__lp__V_85_85 = ((MR_Word) (MR_hl_field(MR_mktag(0), *libs__lp__STATE_VARIABLE_Info_37, (MR_Integer) 3)));
#line 369 "lp.m"
    libs__lp__V_90_90 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 13230 "libs.lp.c"
    libs__lp__TypeInfo_9_91 = (MR_Word) &libs__lp_scalar_common_2[0];
#line 154 "lp.m"
    {
#line 154 "lp.m"
      mercury__list__length_2_p_0((MR_Word) &libs__lp__libs__lp__type_ctor_info_equation_0, libs__lp__Eqns_15, &libs__lp__Rows_22);
    }
#line 13237 "libs.lp.c"
    libs__lp__TypeInfo_50_50 = (MR_Word) &libs__lp_scalar_common_1[0];
#line 158 "lp.m"
    {
#line 158 "lp.m"
      mercury__map__init_1_p_0(libs__lp__TypeInfo_50_50, (MR_Word) &mercury__builtin__builtin__type_ctor_info_int_0, &libs__lp__VarNums0_26);
    }
#line 863 "lp.m"
    libs__lp__V_93_93 = ((MR_Word) (MR_hl_field(MR_mktag(0), *libs__lp__STATE_VARIABLE_Info_37, (MR_Integer) 0)));
#line 863 "lp.m"
    libs__lp__V_94_94 = ((MR_Word) (MR_hl_field(MR_mktag(0), *libs__lp__STATE_VARIABLE_Info_37, (MR_Integer) 1)));
#line 863 "lp.m"
    libs__lp__V_95_95 = ((MR_Word) (MR_hl_field(MR_mktag(0), *libs__lp__STATE_VARIABLE_Info_37, (MR_Integer) 2)));
#line 863 "lp.m"
    libs__lp__ArtVars_28 = ((MR_Word) (MR_hl_field(MR_mktag(0), *libs__lp__STATE_VARIABLE_Info_37, (MR_Integer) 3)));
#line 13252 "libs.lp.c"
    if ((libs__lp__Dir_10 == (MR_Integer) 0))
#line 13254 "libs.lp.c"
      {
#line 13256 "libs.lp.c"
        MR_Word libs__lp__TypeInfo_17_81 = (MR_Word) &libs__lp_scalar_common_2[0];
#line 13258 "libs.lp.c"
        MR_Word libs__lp__Obj1_16;
#line 13260 "libs.lp.c"
        MR_Word libs__lp__Obj2_19;
#line 13262 "libs.lp.c"
        MR_Word libs__lp__Obj_21;
#line 13264 "libs.lp.c"
        MR_Word libs__lp__Vars_23;
#line 13266 "libs.lp.c"
        MR_Word libs__lp__VarList_24;
#line 13268 "libs.lp.c"
        MR_Integer libs__lp__Cols_25;
#line 13270 "libs.lp.c"
        MR_Word libs__lp__VarNums_27;
#line 13272 "libs.lp.c"
        MR_Word libs__lp__STATE_VARIABLE_Tableau_46_46;
#line 13274 "libs.lp.c"
        MR_Word libs__lp__STATE_VARIABLE_Tableau_48_48;
#line 13276 "libs.lp.c"
        MR_Word libs__lp__Coeffs1_89;

#line 328 "lp.m"
        {
#line 328 "lp.m"
          libs__lp__Obj1_16 = mercury__list__map_2_f_0(libs__lp__TypeInfo_17_81, libs__lp__TypeInfo_17_81, (MR_Word) &libs__lp_scalar_common_2[12], libs__lp__Obj0_11);
        }
#line 150 "lp.m"
        {
#line 150 "lp.m"
          libs__lp__simplify_coeffs_2_p_0(libs__lp__Obj1_16, &libs__lp__Obj2_19);
        }
#line 369 "lp.m"
        {
#line 369 "lp.m"
          libs__lp__expand_urs_vars_4_p_0(libs__lp__Obj2_19, libs__lp__URS_20, libs__lp__V_90_90, &libs__lp__Coeffs1_89);
        }
#line 370 "lp.m"
        {
#line 370 "lp.m"
          mercury__list__reverse_2_p_0(libs__lp__TypeInfo_9_91, libs__lp__Coeffs1_89, &libs__lp__Obj_21);
        }
#line 155 "lp.m"
        {
#line 155 "lp.m"
          libs__lp__collect_vars_3_p_0(libs__lp__Eqns_15, libs__lp__Obj_21, &libs__lp__Vars_23);
        }
#line 156 "lp.m"
        {
#line 156 "lp.m"
          mercury__set__to_sorted_list_2_p_0(libs__lp__TypeInfo_50_50, libs__lp__Vars_23, &libs__lp__VarList_24);
        }
#line 157 "lp.m"
        {
#line 157 "lp.m"
          mercury__list__length_2_p_0(libs__lp__TypeInfo_50_50, libs__lp__VarList_24, &libs__lp__Cols_25);
        }
#line 159 "lp.m"
        {
#line 159 "lp.m"
          libs__lp__number_vars_4_p_0(libs__lp__VarList_24, (MR_Integer) 0, libs__lp__VarNums0_26, &libs__lp__VarNums_27);
        }
#line 162 "lp.m"
        {
#line 162 "lp.m"
          libs__lp__init_tableau_5_p_0(libs__lp__Rows_22, libs__lp__Cols_25, libs__lp__VarNums_27, libs__lp__URS_20, &libs__lp__STATE_VARIABLE_Tableau_46_46);
        }
#line 163 "lp.m"
        {
#line 163 "lp.m"
          libs__lp__insert_equations_6_p_0(libs__lp__Eqns_15, (MR_Integer) 1, libs__lp__Cols_25, libs__lp__VarNums_27, libs__lp__STATE_VARIABLE_Tableau_46_46, &libs__lp__STATE_VARIABLE_Tableau_48_48);
        }
#line 169 "lp.m"
        if ((libs__lp__ArtVars_28 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 171 "lp.m"
          {
#line 171 "lp.m"
            libs__lp__one_phase_5_p_0(libs__lp__Obj0_11, libs__lp__Obj_21, libs__lp__VarNums_27, libs__lp__STATE_VARIABLE_Tableau_48_48, libs__lp__Result_12);
#line 171 "lp.m"
            return;
          }
#line 169 "lp.m"
        else
#line 168 "lp.m"
          {
#line 168 "lp.m"
            libs__lp__two_phase_6_p_0(libs__lp__Obj0_11, libs__lp__Obj_21, libs__lp__ArtVars_28, libs__lp__VarNums_27, libs__lp__STATE_VARIABLE_Tableau_48_48, libs__lp__Result_12);
#line 168 "lp.m"
            return;
          }
#line 13347 "libs.lp.c"
      }
#line 13349 "libs.lp.c"
    else
#line 13351 "libs.lp.c"
      {
#line 13353 "libs.lp.c"
        MR_Word libs__lp__Obj2_97;
#line 13355 "libs.lp.c"
        MR_Word libs__lp__Obj_98;
#line 13357 "libs.lp.c"
        MR_Word libs__lp__Vars_99;
#line 13359 "libs.lp.c"
        MR_Word libs__lp__VarList_100;
#line 13361 "libs.lp.c"
        MR_Integer libs__lp__Cols_101;
#line 13363 "libs.lp.c"
        MR_Word libs__lp__VarNums_102;
#line 13365 "libs.lp.c"
        MR_Word libs__lp__Result0_103;
#line 13367 "libs.lp.c"
        MR_Word libs__lp__STATE_VARIABLE_Tableau_46_104;
#line 13369 "libs.lp.c"
        MR_Word libs__lp__STATE_VARIABLE_Tableau_48_105;
#line 13371 "libs.lp.c"
        MR_Word libs__lp__Coeffs1_106;

#line 150 "lp.m"
        {
#line 150 "lp.m"
          libs__lp__simplify_coeffs_2_p_0(libs__lp__Obj0_11, &libs__lp__Obj2_97);
        }
#line 369 "lp.m"
        {
#line 369 "lp.m"
          libs__lp__expand_urs_vars_4_p_0(libs__lp__Obj2_97, libs__lp__URS_20, libs__lp__V_90_90, &libs__lp__Coeffs1_106);
        }
#line 370 "lp.m"
        {
#line 370 "lp.m"
          mercury__list__reverse_2_p_0(libs__lp__TypeInfo_9_91, libs__lp__Coeffs1_106, &libs__lp__Obj_98);
        }
#line 155 "lp.m"
        {
#line 155 "lp.m"
          libs__lp__collect_vars_3_p_0(libs__lp__Eqns_15, libs__lp__Obj_98, &libs__lp__Vars_99);
        }
#line 156 "lp.m"
        {
#line 156 "lp.m"
          mercury__set__to_sorted_list_2_p_0(libs__lp__TypeInfo_50_50, libs__lp__Vars_99, &libs__lp__VarList_100);
        }
#line 157 "lp.m"
        {
#line 157 "lp.m"
          mercury__list__length_2_p_0(libs__lp__TypeInfo_50_50, libs__lp__VarList_100, &libs__lp__Cols_101);
        }
#line 159 "lp.m"
        {
#line 159 "lp.m"
          libs__lp__number_vars_4_p_0(libs__lp__VarList_100, (MR_Integer) 0, libs__lp__VarNums0_26, &libs__lp__VarNums_102);
        }
#line 162 "lp.m"
        {
#line 162 "lp.m"
          libs__lp__init_tableau_5_p_0(libs__lp__Rows_22, libs__lp__Cols_101, libs__lp__VarNums_102, libs__lp__URS_20, &libs__lp__STATE_VARIABLE_Tableau_46_104);
        }
#line 163 "lp.m"
        {
#line 163 "lp.m"
          libs__lp__insert_equations_6_p_0(libs__lp__Eqns_15, (MR_Integer) 1, libs__lp__Cols_101, libs__lp__VarNums_102, libs__lp__STATE_VARIABLE_Tableau_46_104, &libs__lp__STATE_VARIABLE_Tableau_48_105);
        }
#line 169 "lp.m"
        if ((libs__lp__ArtVars_28 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 171 "lp.m"
          {
#line 171 "lp.m"
            libs__lp__one_phase_5_p_0(libs__lp__Obj0_11, libs__lp__Obj_98, libs__lp__VarNums_102, libs__lp__STATE_VARIABLE_Tableau_48_105, &libs__lp__Result0_103);
          }
#line 169 "lp.m"
        else
#line 168 "lp.m"
          {
#line 168 "lp.m"
            libs__lp__two_phase_6_p_0(libs__lp__Obj0_11, libs__lp__Obj_98, libs__lp__ArtVars_28, libs__lp__VarNums_102, libs__lp__STATE_VARIABLE_Tableau_48_105, &libs__lp__Result0_103);
          }
#line 182 "lp.m"
        if ((libs__lp__Result0_103 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 181 "lp.m"
          *libs__lp__Result_12 = libs__lp__Result0_103;
#line 182 "lp.m"
        else
#line 183 "lp.m"
          {
#line 183 "lp.m"
            MR_Float libs__lp__NOptVal_33 = MR_unbox_float((MR_hl_field(MR_mktag(1), libs__lp__Result0_103, (MR_Integer) 0)));
#line 183 "lp.m"
            MR_Word libs__lp__OptCoffs_34 = ((MR_Word) (MR_hl_field(MR_mktag(1), libs__lp__Result0_103, (MR_Integer) 1)));
#line 183 "lp.m"
            MR_Float libs__lp__OptVal_35 = (((MR_Float) 0.0000000000000000) - libs__lp__NOptVal_33);

#line 185 "lp.m"
            {
#line 185 "lp.m"
              MR_Word base;
#line 185 "lp.m"
              base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 185 "lp.m"
              *libs__lp__Result_12 = base;
#line 185 "lp.m"
              MR_hl_field(MR_mktag(1), base, 0) = MR_box_float(libs__lp__OptVal_35);
#line 185 "lp.m"
              MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (libs__lp__OptCoffs_34));
#line 185 "lp.m"
            }
#line 183 "lp.m"
          }
#line 13464 "libs.lp.c"
      }
#line 131 "lp.m"
  }
#line 127 "lp.m"
}

#line 822 "lp.m"
static void MR_CALL 
libs__lp__lp_solve_8_p_0_1(
#line 822 "lp.m"
  MR_Box libs__lp__closure_arg,
#line 822 "lp.m"
  MR_Box libs__lp__wrapper_arg_1,
#line 822 "lp.m"
  MR_Box libs__lp__wrapper_arg_2,
#line 822 "lp.m"
  MR_Box * libs__lp__wrapper_arg_3)
#line 822 "lp.m"
{
#line 822 "lp.m"
  {
#line 822 "lp.m"
    MR_Box libs__lp__closure = libs__lp__closure_arg;
#line 822 "lp.m"
    MR_Word libs__lp__conv0_HeadVar__3_23;

#line 822 "lp.m"
    {
#line 822 "lp.m"
      libs__lp__IntroducedFrom__pred__lp_info_init__822__1_3_p_0(((MR_Word) libs__lp__wrapper_arg_1), ((MR_Word) libs__lp__wrapper_arg_2), &libs__lp__conv0_HeadVar__3_23);
    }
#line 822 "lp.m"
    *libs__lp__wrapper_arg_3 = ((MR_Box) (libs__lp__conv0_HeadVar__3_23));
#line 822 "lp.m"
  }
#line 822 "lp.m"
}

#line 83 "lp.m"
void MR_CALL 
libs__lp__lp_solve_8_p_0(
#line 83 "lp.m"
  MR_Word libs__lp__Eqns_9,
#line 83 "lp.m"
  MR_Word libs__lp__Dir_10,
#line 83 "lp.m"
  MR_Word libs__lp__Obj_11,
#line 83 "lp.m"
  MR_Word libs__lp__Varset0_12,
#line 83 "lp.m"
  MR_Word libs__lp__URSVars_13,
#line 83 "lp.m"
  MR_Word * libs__lp__Result_14)
#line 83 "lp.m"
{
#line 117 "lp.m"
  {
#line 117 "lp.m"
    MR_bool libs__lp__succeeded;
#line 117 "lp.m"
    MR_Word libs__lp__TypeInfo_35_52 = (MR_Word) &libs__lp_scalar_common_1[0];
#line 117 "lp.m"
    MR_Word libs__lp__Info0_16;
#line 117 "lp.m"
    MR_Word libs__lp__URSMap0_35;
#line 117 "lp.m"
    MR_Word libs__lp__Varset_36;
#line 117 "lp.m"
    MR_Word libs__lp__URSMap_37;
#line 117 "lp.m"
    MR_Word libs__lp__V_42_42;
#line 117 "lp.m"
    MR_Word libs__lp__V_43_43;
#line 830 "lp.m"
    MR_Box libs__lp__conv1_V_43_43;
#line 119 "lp.m"
    MR_Word libs__lp__V_17_17;

#line 829 "lp.m"
    {
#line 829 "lp.m"
      mercury__map__init_1_p_0(libs__lp__TypeInfo_35_52, (MR_Word) &libs__lp_scalar_common_2[2], &libs__lp__URSMap0_35);
    }
#line 830 "lp.m"
    {
#line 830 "lp.m"
      libs__lp__V_42_42 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 830 "lp.m"
      MR_hl_field(MR_mktag(0), libs__lp__V_42_42, 0) = ((MR_Box) (libs__lp__Varset0_12));
#line 830 "lp.m"
      MR_hl_field(MR_mktag(0), libs__lp__V_42_42, 1) = ((MR_Box) (libs__lp__URSMap0_35));
#line 830 "lp.m"
    }
#line 830 "lp.m"
    {
#line 830 "lp.m"
      mercury__list__foldl_4_p_0(libs__lp__TypeInfo_35_52, (MR_Word) &libs__lp_scalar_common_2[7], (MR_Word) &libs__lp_scalar_common_2[10], libs__lp__URSVars_13, ((MR_Box) (libs__lp__V_42_42)), &libs__lp__conv1_V_43_43);
    }
#line 830 "lp.m"
    libs__lp__V_43_43 = ((MR_Word) libs__lp__conv1_V_43_43);
#line 830 "lp.m"
    libs__lp__Varset_36 = ((MR_Word) (MR_hl_field(MR_mktag(0), libs__lp__V_43_43, (MR_Integer) 0)));
#line 830 "lp.m"
    libs__lp__URSMap_37 = ((MR_Word) (MR_hl_field(MR_mktag(0), libs__lp__V_43_43, (MR_Integer) 1)));
#line 831 "lp.m"
    {
#line 831 "lp.m"
      libs__lp__Info0_16 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
#line 831 "lp.m"
      MR_hl_field(MR_mktag(0), libs__lp__Info0_16, 0) = ((MR_Box) (libs__lp__Varset_36));
#line 831 "lp.m"
      MR_hl_field(MR_mktag(0), libs__lp__Info0_16, 1) = ((MR_Box) (libs__lp__URSMap_37));
#line 831 "lp.m"
      MR_hl_field(MR_mktag(0), libs__lp__Info0_16, 2) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 831 "lp.m"
      MR_hl_field(MR_mktag(0), libs__lp__Info0_16, 3) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 831 "lp.m"
    }
#line 119 "lp.m"
    {
#line 119 "lp.m"
      libs__lp__lp_solve_2_8_p_0(libs__lp__Eqns_9, libs__lp__Dir_10, libs__lp__Obj_11, libs__lp__Result_14, libs__lp__Info0_16, &libs__lp__V_17_17);
    }
#line 117 "lp.m"
  }
#line 83 "lp.m"
}

void mercury__libs__lp__init(void)
{
}

void mercury__libs__lp__init_type_tables(void)
{
	static MR_bool initialised = MR_FALSE;
	if (initialised) return;
	initialised = MR_TRUE;

	MR_register_type_ctor_info(&libs__lp__libs__lp__type_ctor_info_cell_0);
	MR_register_type_ctor_info(&libs__lp__libs__lp__type_ctor_info_coeff_0);
	MR_register_type_ctor_info(&libs__lp__libs__lp__type_ctor_info_direction_0);
	MR_register_type_ctor_info(&libs__lp__libs__lp__type_ctor_info_equation_0);
	MR_register_type_ctor_info(&libs__lp__libs__lp__type_ctor_info_equations_0);
	MR_register_type_ctor_info(&libs__lp__libs__lp__type_ctor_info_lp_info_0);
	MR_register_type_ctor_info(&libs__lp__libs__lp__type_ctor_info_objective_0);
	MR_register_type_ctor_info(&libs__lp__libs__lp__type_ctor_info_operator_0);
	MR_register_type_ctor_info(&libs__lp__libs__lp__type_ctor_info_result_0);
	MR_register_type_ctor_info(&libs__lp__libs__lp__type_ctor_info_tableau_0);
}

void mercury__libs__lp__init_debugger(void)
{
	MR_fatal_error("debugger initialization in MLDS grade");
}

/* ensure everything is compiled with the same grade */
static const void *const MR_grade = &MR_GRADE_VAR;

/* :- end_module libs.lp. */
